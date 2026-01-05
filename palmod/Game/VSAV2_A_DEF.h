#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VSAV2_A_MORRIGAN_PALETTES. 
// * Update every array using VSAV2_A_NUMUNIT below
// That should be it.  Good luck.

const std::vector<uint16_t> VSAV2_A_IMGIDS_USED =
{
    indexCPS2Sprites_Anakaris,     // 0x04
    indexCPS2Sprites_Anita,        // 0x51
    indexCPS2Sprites_BBHood,       // 0x1F
    indexCPS2Sprites_Felicia,      // 0x20
    indexCPS2Sprites_Morrigan,     // 0x03
    indexCPS2Sprites_Vamp_Aulbath,   // 0x67
    indexCPS2Sprites_Vamp_Bishamon,  // 0x68
    indexCPS2Sprites_Vamp_Dee,       // 0x69
    indexCPS2Sprites_Vamp_Demitri,   // 0x6A
    indexCPS2Sprites_Vamp_Donovan,   // 0x6B
    indexCPS2Sprites_Vamp_Gallon,    // 0x6C
    indexCPS2Sprites_Vamp_Jedah,     // 0x6D
    indexCPS2Sprites_Vamp_LeiLei,    // 0x6E
    indexCPS2Sprites_Vamp_Lilith,    // 0x6F
    indexCPS2Sprites_Vamp_Marionette, // 0x70
    indexCPS2Sprites_Vamp_Phobos,    // 0x71
    indexCPS2Sprites_Vamp_Pyron,     // 0x72
    indexCPS2Sprites_Vamp_QBee,      // 0x73
    indexCPS2Sprites_Vamp_Sasquatch, // 0x74
    indexCPS2Sprites_Vamp_Shadow,    // 0x75
    indexCPS2Sprites_Vamp_Victor,    // 0x76
    indexCPS2Sprites_Vamp_Zabel,     // 0x77

    indexCPS2Sprites_VSAV1_WinPortraits, // 0x78
    indexCPS2Sprites_Vamp_DarkGallon,    // 0x7a
    indexCPS2Sprites_Vamp_OboroBishamon, // 0x7b
    indexCPS2Sprites_VSAV1_Bonus, // 0x7c

    indexCPS2Sprites_VSAV1_Stages,  // 0x81
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_LP[] =
{
    { L"LP Bulleta", 0x16c9a, 0x16cba, indexCPS2Sprites_BBHood, 0x0 },
    { L"LP Critters", 0x16cba, 0x16cda, indexCPS2Sprites_BBHood, 0x01 },
    { L"LP Weapons", 0x16cda, 0x16cfa, indexCPS2Sprites_BBHood, 0x02 },
    { L"LP Explosions", 0x16cfa, 0x16d1a, indexCPS2Sprites_BBHood, 0x0b },
    { L"LP Select Portrait", 0x4117a, 0x4119a, indexCPS2Sprites_BBHood, 0x20 },
    { L"LP Win Portrait", 0x42bba, 0x42c5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x16d1a, 0x16d3a, indexCPS2Sprites_BBHood, 0x0 },
    { L"MP Critters", 0x16d3a, 0x16d5a, indexCPS2Sprites_BBHood, 0x01 },
    { L"MP Weapons", 0x16d5a, 0x16d7a, indexCPS2Sprites_BBHood, 0x02 },
    { L"MP Explosions", 0x16d7a, 0x16d9a, indexCPS2Sprites_BBHood, 0x0b },
    { L"MP Select Portrait", 0x4137a, 0x4139a, indexCPS2Sprites_BBHood, 0x20 },
    { L"MP Win Portrait", 0x436fa, 0x4379a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x16d9a, 0x16dba, indexCPS2Sprites_BBHood, 0x0 },
    { L"HP Critters", 0x16dba, 0x16dda, indexCPS2Sprites_BBHood, 0x01 },
    { L"HP Weapons", 0x16dda, 0x16dfa, indexCPS2Sprites_BBHood, 0x02 },
    { L"HP Explosions", 0x16dfa, 0x16e1a, indexCPS2Sprites_BBHood, 0x0b },
    { L"HP Select Portrait", 0x4157a, 0x4159a, indexCPS2Sprites_BBHood, 0x20 },
    { L"HP Win Portrait", 0x4423a, 0x442da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x16e1a, 0x16e3a, indexCPS2Sprites_BBHood, 0x0 },
    { L"LK Critters", 0x16e3a, 0x16e5a, indexCPS2Sprites_BBHood, 0x01 },
    { L"LK Weapons", 0x16e5a, 0x16e7a, indexCPS2Sprites_BBHood, 0x02 },
    { L"LK Explosions", 0x16e7a, 0x16e9a, indexCPS2Sprites_BBHood, 0x0b },
    { L"LK Select Portrait", 0x4177a, 0x4179a, indexCPS2Sprites_BBHood, 0x20 },
    { L"LK Win Portrait", 0x44d7a, 0x44e1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x16e9a, 0x16eba, indexCPS2Sprites_BBHood, 0x0 },
    { L"MK Critters", 0x16eba, 0x16eda, indexCPS2Sprites_BBHood, 0x01 },
    { L"MK Weapons", 0x16eda, 0x16efa, indexCPS2Sprites_BBHood, 0x02 },
    { L"MK Explosions", 0x16efa, 0x16f1a, indexCPS2Sprites_BBHood, 0x0b },
    { L"MK Select Portrait", 0x4197a, 0x4199a, indexCPS2Sprites_BBHood, 0x20 },
    { L"MK Win Portrait", 0x458ba, 0x4595a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x16f1a, 0x16f3a, indexCPS2Sprites_BBHood, 0x0 },
    { L"HK Critters", 0x16f3a, 0x16f5a, indexCPS2Sprites_BBHood, 0x01 },
    { L"HK Weapons", 0x16f5a, 0x16f7a, indexCPS2Sprites_BBHood, 0x02 },
    { L"HK Explosions", 0x16f7a, 0x16f9a, indexCPS2Sprites_BBHood, 0x0b },
    { L"HK Select Portrait", 0x41b7a, 0x41b9a, indexCPS2Sprites_BBHood, 0x20 },
    { L"HK Win Portrait", 0x463fa, 0x4649a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x16f9a, 0x16fba, indexCPS2Sprites_BBHood, 0x0 },
    { L"PP Critters", 0x16fba, 0x16fda, indexCPS2Sprites_BBHood, 0x01 },
    { L"PP Weapons", 0x16fda, 0x16ffa, indexCPS2Sprites_BBHood, 0x02 },
    { L"PP Explosions", 0x16ffa, 0x1701a, indexCPS2Sprites_BBHood, 0x0b },
    { L"PP Select Portrait", 0x41d7a, 0x41d9a, indexCPS2Sprites_BBHood, 0x20 },
    { L"PP Win Portrait", 0x46f3a, 0x46fda, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x1701a, 0x1703a, indexCPS2Sprites_BBHood, 0x0 },
    { L"KK Critters", 0x1703a, 0x1705a, indexCPS2Sprites_BBHood, 0x01 },
    { L"KK Weapons", 0x1705a, 0x1707a, indexCPS2Sprites_BBHood, 0x02 },
    { L"KK Explosions", 0x1707a, 0x1709a, indexCPS2Sprites_BBHood, 0x0b },
    { L"KK Select Portrait", 0x41f7a, 0x41f9a, indexCPS2Sprites_BBHood, 0x20 },
    { L"KK Win Portrait", 0x47a7a, 0x47b1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x1709a, 0x170ba, indexCPS2Sprites_BBHood, 0x0 },
    { L"AP Critters", 0x170ba, 0x170da, indexCPS2Sprites_BBHood, 0x01 },
    { L"AP Weapons", 0x170da, 0x170fa, indexCPS2Sprites_BBHood, 0x02 },
    { L"AP Explosions", 0x170fa, 0x1711a, indexCPS2Sprites_BBHood, 0x0b },
    { L"AP Select Portrait", 0x4217a, 0x4219a, indexCPS2Sprites_BBHood, 0x20 },
    { L"AP Win Portrait", 0x485ba, 0x4865a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x1711a, 0x1713a, indexCPS2Sprites_BBHood, 0x0 },
    { L"AK Critters", 0x1713a, 0x1715a, indexCPS2Sprites_BBHood, 0x01 },
    { L"AK Weapons", 0x1715a, 0x1717a, indexCPS2Sprites_BBHood, 0x02 },
    { L"AK Explosions", 0x1717a, 0x1719a, indexCPS2Sprites_BBHood, 0x0b },
    { L"AK Select Portrait", 0x4237a, 0x4239a, indexCPS2Sprites_BBHood, 0x20 },
    { L"AK Win Portrait", 0x490fa, 0x4919a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_SHARED[] =
{
    { L"Apple for You", 0x30a5a, 0x30a7a, indexCPS2Sprites_BBHood, 0x0a },
    { L"Mr. K",         0x30a7a, 0x30a9a, indexCPS2Sprites_BBHood, 0x09 },
    { L"Cheer and Fire", 0x30a9a, 0x30aba, indexCPS2Sprites_BBHood, 0x07 },
    { L"Water",         0x30d3a, 0x30d5a, indexCPS2Sprites_BBHood, 0x0e },
    { L"Water Puddle",  0x30d5a, 0x30d7a, indexCPS2Sprites_BBHood, 0x0f },
    { L"Cruel Hunting", 0x30dda, 0x30dfa, indexCPS2Sprites_BBHood, 0x08 },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x1719a, 0x171ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LP Demitri Shimmer", 0x30dfa, 0x30e1a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LP Teledash 1", 0x171fa, 0x1721a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LP Teledash 2", 0x171ba, 0x171da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LP Fireball", 0x171da, 0x171fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"LP Select Portrait", 0x4119a, 0x411ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"LP Win Portrait", 0x42c5a, 0x42cfa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri", 0x1721a, 0x1723a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MP Demitri Shimmer", 0x30e1a, 0x30e3a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MP Teledash 1", 0x1727a, 0x1729a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MP Teledash 2", 0x1723a, 0x1725a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MP Fireball", 0x1725a, 0x1727a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"MP Select Portrait", 0x4139a, 0x413ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"MP Win Portrait", 0x4379a, 0x4383a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x1729a, 0x172ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HP Demitri Shimmer", 0x30e3a, 0x30e5a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HP Teledash 1", 0x172fa, 0x1731a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HP Teledash 2", 0x172ba, 0x172da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HP Fireball", 0x172da, 0x172fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"HP Select Portrait", 0x4159a, 0x415ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"HP Win Portrait", 0x442da, 0x4437a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x1731a, 0x1733a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LK Demitri Shimmer", 0x30e5a, 0x30e7a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LK Teledash 1", 0x1737a, 0x1739a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LK Teledash 2", 0x1733a, 0x1735a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LK Fireball", 0x1735a, 0x1737a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"LK Select Portrait", 0x4179a, 0x417ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"LK Win Portrait", 0x44e1a, 0x44eba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x1739a, 0x173ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MK Demitri Shimmer", 0x30e7a, 0x30e9a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MK Teledash 1", 0x173fa, 0x1741a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MK Teledash 2", 0x173ba, 0x173da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MK Fireball", 0x173da, 0x173fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"MK Select Portrait", 0x4199a, 0x419ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"MK Win Portrait", 0x4595a, 0x459fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x1741a, 0x1743a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HK Demitri Shimmer", 0x30e9a, 0x30eba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HK Teledash 1", 0x1747a, 0x1749a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HK Teledash 2", 0x1743a, 0x1745a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HK Fireball", 0x1745a, 0x1747a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"HK Select Portrait", 0x41b9a, 0x41bba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"HK Win Portrait", 0x4649a, 0x4653a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x1749a, 0x174ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"PP Demitri Shimmer", 0x30eba, 0x30eda, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"PP Teledash 1", 0x174fa, 0x1751a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"PP Teledash 2", 0x174ba, 0x174da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"PP Fireball", 0x174da, 0x174fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"PP Select Portrait", 0x41d9a, 0x41dba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"PP Win Portrait", 0x46fda, 0x4707a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x1751a, 0x1753a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"KK Demitri Shimmer", 0x30eda, 0x30efa, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"KK Teledash 1", 0x1757a, 0x1759a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"KK Teledash 2", 0x1753a, 0x1755a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"KK Fireball", 0x1755a, 0x1757a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"KK Select Portrait", 0x41f9a, 0x41fba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"KK Win Portrait", 0x47b1a, 0x47bba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x1759a, 0x175ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AP Demitri Shimmer", 0x30efa, 0x30f1a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AP Teledash 1", 0x175fa, 0x1761a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AP Teledash 2", 0x175ba, 0x175da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AP Fireball", 0x175da, 0x175fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"AP Select Portrait", 0x4219a, 0x421ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"AP Win Portrait", 0x4865a, 0x486fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x1761a, 0x1763a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AK Demitri Shimmer", 0x30f1a, 0x30f3a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AK Teledash 1", 0x1767a, 0x1769a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AK Teledash 2", 0x1763a, 0x1765a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AK Fireball", 0x1765a, 0x1767a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"AK Select Portrait", 0x4239a, 0x423ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"AK Win Portrait", 0x4919a, 0x4923a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_SHARED[] =
{
    { L"Demitri's followers 1", 0x30f3a, 0x30f5a, indexCPS2Sprites_Vamp_Demitri, 0x02 },
    { L"Demitri's followers 2", 0x30f5a, 0x30f7a, indexCPS2Sprites_Vamp_Demitri, 0x03 },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x1769a, 0x176ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"LP Intro/Outro", 0x176ba, 0x176da, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"LP 236P/41236KK/j.HP", 0x176da, 0x176fa, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"LP 236P/28K/Outro Flash", 0x176fa, 0x1771a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"LP Select Portrait", 0x411ba, 0x411da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"LP Win Portrait", 0x42cfa, 0x42d9a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x1771a, 0x1773a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"MP Intro/Outro", 0x1773a, 0x1775a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"MP 236P/41236KK/j.HP", 0x1775a, 0x1777a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"MP 236P/28K/Outro Flash", 0x1777a, 0x1779a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"MP Select Portrait", 0x413ba, 0x413da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"MP Win Portrait", 0x4383a, 0x438da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x1779a, 0x177ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"HP Intro/Outro", 0x177ba, 0x177da, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"HP 236P/41236KK/j.HP", 0x177da, 0x177fa, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"HP 236P/28K/Outro Flash", 0x177fa, 0x1781a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"HP Select Portrait", 0x415ba, 0x415da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"HP Win Portrait", 0x4437a, 0x4441a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x1781a, 0x1783a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"LK Intro/Outro", 0x1783a, 0x1785a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"LK 236P/41236KK/j.HP", 0x1785a, 0x1787a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"LK 236P/28K/Outro Flash", 0x1787a, 0x1789a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"LK Select Portrait", 0x417ba, 0x417da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"LK Win Portrait", 0x44eba, 0x44f5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x1789a, 0x178ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"MK Intro/Outro", 0x178ba, 0x178da, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"MK 236P/41236KK/j.HP", 0x178da, 0x178fa, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"MK 236P/28K/Outro Flash", 0x178fa, 0x1791a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"MK Select Portrait", 0x419ba, 0x419da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"MK Win Portrait", 0x459fa, 0x45a9a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x1791a, 0x1793a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"HK Intro/Outro", 0x1793a, 0x1795a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"HK 236P/41236KK/j.HP", 0x1795a, 0x1797a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"HK 236P/28K/Outro Flash", 0x1797a, 0x1799a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"HK Select Portrait", 0x41bba, 0x41bda, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"HK Win Portrait", 0x4653a, 0x465da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x1799a, 0x179ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"PP Intro/Outro", 0x179ba, 0x179da, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"PP 236P/41236KK/j.HP", 0x179da, 0x179fa, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"PP 236P/28K/Outro Flash", 0x179fa, 0x17a1a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"PP Select Portrait", 0x41dba, 0x41dda, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"PP Win Portrait", 0x4707a, 0x4711a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x17a1a, 0x17a3a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"KK Intro/Outro", 0x17a3a, 0x17a5a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"KK 236P/41236KK/j.HP", 0x17a5a, 0x17a7a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"KK 236P/28K/Outro Flash", 0x17a7a, 0x17a9a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"KK Select Portrait", 0x41fba, 0x41fda, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"KK Win Portrait", 0x47bba, 0x47c5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x17a9a, 0x17aba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"AP Intro/Outro", 0x17aba, 0x17ada, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"AP 236P/41236KK/j.HP", 0x17ada, 0x17afa, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"AP 236P/28K/Outro Flash", 0x17afa, 0x17b1a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"AP Select Portrait", 0x421ba, 0x421da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"AP Win Portrait", 0x486fa, 0x4879a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x17b1a, 0x17b3a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"AK Intro/Outro", 0x17b3a, 0x17b5a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"AK 236P/41236KK/j.HP", 0x17b5a, 0x17b7a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"AK 236P/28K/Outro Flash", 0x17b7a, 0x17b9a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"AK Select Portrait", 0x423ba, 0x423da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"AK Win Portrait", 0x4923a, 0x492da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x17b9a, 0x17bba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LP Electric Flash", 0x17bfa, 0x17c1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x17bba, 0x17bda },
    { L"LP Electricity", 0x17bda, 0x17bfa, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"LP Select Portrait", 0x411da, 0x411fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"LP Win Portrait", 0x42d9a, 0x42e3a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x17c1a, 0x17c3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MP Electric Flash", 0x17c7a, 0x17c9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x17c3a, 0x17c5a },
    { L"MP Electricity", 0x17c5a, 0x17c7a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"MP Select Portrait", 0x413da, 0x413fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"MP Win Portrait", 0x438da, 0x4397a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x17c9a, 0x17cba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HP Electric Flash", 0x17cfa, 0x17d1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x17cba, 0x17cda },
    { L"HP Electricity", 0x17cda, 0x17cfa, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"HP Select Portrait", 0x415da, 0x415fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"HP Win Portrait", 0x4441a, 0x444ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x17d1a, 0x17d3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LK Electric Flash", 0x17d7a, 0x17d9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x17d3a, 0x17d5a },
    { L"LK Electricity", 0x17d5a, 0x17d7a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"LK Select Portrait", 0x417da, 0x417fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"LK Win Portrait", 0x44f5a, 0x44ffa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x17d9a, 0x17dba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MK Electric Flash", 0x17dfa, 0x17e1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x17dba, 0x17dda },
    { L"MK Electricity", 0x17dda, 0x17dfa, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"MK Select Portrait", 0x419da, 0x419fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"MK Win Portrait", 0x45a9a, 0x45b3a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x17e1a, 0x17e3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HK Electric Flash", 0x17e7a, 0x17e9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x17e3a, 0x17e5a },
    { L"HK Electricity", 0x17e5a, 0x17e7a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"HK Select Portrait", 0x41bda, 0x41bfa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"HK Win Portrait", 0x465da, 0x4667a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x17e9a, 0x17eba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"PP Electric Flash", 0x17efa, 0x17f1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x17eba, 0x17eda },
    { L"PP Electricity", 0x17eda, 0x17efa, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"PP Select Portrait", 0x41dda, 0x41dfa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"PP Win Portrait", 0x4711a, 0x471ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x17f1a, 0x17f3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"KK Electric Flash", 0x17f7a, 0x17f9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x17f3a, 0x17f5a },
    { L"KK Electricity", 0x17f5a, 0x17f7a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"KK Select Portrait", 0x41fda, 0x41ffa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"KK Win Portrait", 0x47c5a, 0x47cfa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x17f9a, 0x17fba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AP Electric Flash", 0x17ffa, 0x1801a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x17fba, 0x17fda },
    { L"AP Electricity", 0x17fda, 0x17ffa, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"AP Select Portrait", 0x421da, 0x421fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"AP Win Portrait", 0x4879a, 0x4883a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x1801a, 0x1803a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AK Electric Flash", 0x1807a, 0x1809a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x1803a, 0x1805a },
    { L"AK Electricity", 0x1805a, 0x1807a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"AK Select Portrait", 0x423da, 0x423fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"AK Win Portrait", 0x492da, 0x4937a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_SHARED[] =
{
    { L"Emily", 0x3105a, 0x3107a, indexCPS2Sprites_Vamp_Victor, 0x08 },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x1809a, 0x180ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x180ba, 0x180da, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"LP Unused 1", 0x180da, 0x180fa },
    { L"LP Unused 2", 0x180fa, 0x1811a },
    { L"LP Select Portrait", 0x411fa, 0x4121a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"LP Win Portrait", 0x42e3a, 0x42eda, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x1811a, 0x1813a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x1813a, 0x1815a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"MP Unused 1", 0x1815a, 0x1817a },
    { L"MP Unused 2", 0x1817a, 0x1819a },
    { L"MP Select Portrait", 0x413fa, 0x4141a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"MP Win Portrait", 0x4397a, 0x43a1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x1819a, 0x181ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x181ba, 0x181da, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"HP Unused 1", 0x181da, 0x181fa },
    { L"HP Unused 2", 0x181fa, 0x1821a },
    { L"HP Select Portrait", 0x415fa, 0x4161a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"HP Win Portrait", 0x444ba, 0x4455a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x1821a, 0x1823a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x1823a, 0x1825a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"LK Unused 1", 0x1825a, 0x1827a },
    { L"LK Unused 2", 0x1827a, 0x1829a },
    { L"LK Select Portrait", 0x417fa, 0x4181a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"LK Win Portrait", 0x44ffa, 0x4509a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x1829a, 0x182ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x182ba, 0x182da, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"MK Unused 1", 0x182da, 0x182fa },
    { L"MK Unused 2", 0x182fa, 0x1831a },
    { L"MK Select Portrait", 0x419fa, 0x41a1a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"MK Win Portrait", 0x45b3a, 0x45bda, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x1831a, 0x1833a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x1833a, 0x1835a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"HK Unused 1", 0x1835a, 0x1837a },
    { L"HK Unused 2", 0x1837a, 0x1839a },
    { L"HK Select Portrait", 0x41bfa, 0x41c1a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"HK Win Portrait", 0x4667a, 0x4671a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x1839a, 0x183ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x183ba, 0x183da, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"PP Unused 1", 0x183da, 0x183fa },
    { L"PP Unused 2", 0x183fa, 0x1841a },
    { L"PP Select Portrait", 0x41dfa, 0x41e1a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"PP Win Portrait", 0x471ba, 0x4725a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x1841a, 0x1843a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x1843a, 0x1845a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"KK Unused 1", 0x1845a, 0x1847a },
    { L"KK Unused 2", 0x1847a, 0x1849a },
    { L"KK Select Portrait", 0x41ffa, 0x4201a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"KK Win Portrait", 0x47cfa, 0x47d9a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x1849a, 0x184ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x184ba, 0x184da, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"AP Unused 1", 0x184da, 0x184fa },
    { L"AP Unused 2", 0x184fa, 0x1851a },
    { L"AP Select Portrait", 0x421fa, 0x4221a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"AP Win Portrait", 0x4883a, 0x488da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x1851a, 0x1853a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x1853a, 0x1855a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"AK Unused 1", 0x1855a, 0x1857a },
    { L"AK Unused 2", 0x1857a, 0x1859a },
    { L"AK Select Portrait", 0x423fa, 0x4241a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"AK Win Portrait", 0x4937a, 0x4941a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x1859a, 0x185ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LP Sparkles/Darkness Illusion", 0x185ba, 0x185da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"LP Bats", 0x185da, 0x185fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x185fa, 0x1861a },
    { L"LP Select Portrait", 0x4121a, 0x4123a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"LP Win Portrait", 0x42eda, 0x42f7a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x1861a, 0x1863a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MP Sparkles/Darkness Illusion", 0x1863a, 0x1865a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"MP Bats", 0x1865a, 0x1867a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x1867a, 0x1869a },
    { L"MP Select Portrait", 0x4141a, 0x4143a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"MP Win Portrait", 0x43a1a, 0x43aba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x1869a, 0x186ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HP Sparkles/Darkness Illusion", 0x186ba, 0x186da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"HP Bats", 0x186da, 0x186fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x186fa, 0x1871a },
    { L"HP Select Portrait", 0x4161a, 0x4163a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"HP Win Portrait", 0x4455a, 0x445fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x1871a, 0x1873a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LK Sparkles/Darkness Illusion", 0x1873a, 0x1875a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"LK Bats", 0x1875a, 0x1877a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x1877a, 0x1879a },
    { L"LK Select Portrait", 0x4181a, 0x4183a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"LK Win Portrait", 0x4509a, 0x4513a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x1879a, 0x187ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MK Sparkles/Darkness Illusion", 0x187ba, 0x187da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"MK Bats", 0x187da, 0x187fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x187fa, 0x1881a },
    { L"MK Select Portrait", 0x41a1a, 0x41a3a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"MK Win Portrait", 0x45bda, 0x45c7a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x1881a, 0x1883a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HK Sparkles/Darkness Illusion", 0x1883a, 0x1885a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"HK Bats", 0x1885a, 0x1887a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x1887a, 0x1889a },
    { L"HK Select Portrait", 0x41c1a, 0x41c3a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"HK Win Portrait", 0x4671a, 0x467ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x1889a, 0x188ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"PP Sparkles/Darkness Illusion", 0x188ba, 0x188da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"PP Bats", 0x188da, 0x188fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x188fa, 0x1891a },
    { L"PP Select Portrait", 0x41e1a, 0x41e3a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"PP Win Portrait", 0x4725a, 0x472fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x1891a, 0x1893a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"KK Sparkles/Darkness Illusion", 0x1893a, 0x1895a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"KK Bats", 0x1895a, 0x1897a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x1897a, 0x1899a },
    { L"KK Select Portrait", 0x4201a, 0x4203a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"KK Win Portrait", 0x47d9a, 0x47e3a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x1899a, 0x189ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AP Sparkles/Darkness Illusion", 0x189ba, 0x189da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"AP Bats", 0x189da, 0x189fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x189fa, 0x18a1a },
    { L"AP Select Portrait", 0x4221a, 0x4223a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"AP Win Portrait", 0x488da, 0x4897a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x18a1a, 0x18a3a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AK Sparkles/Darkness Illusion", 0x18a3a, 0x18a5a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"AK Bats", 0x18a5a, 0x18a7a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x18a7a, 0x18a9a },
    { L"AK Select Portrait", 0x4241a, 0x4243a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"AK Win Portrait", 0x4941a, 0x494ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_SHARED[] =
{
    { L"Soul Fist 1/3", 0x312ba, 0x312da },
    { L"Soul Fist 2/3", 0x312da, 0x312fa },
    { L"Soul Fist 3/3", 0x312fa, 0x3131a },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x18a9a, 0x18aba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"LP 2.HP/Mummies", 0x18ada, 0x18afa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"LP 426KK/62KK Light", 0x18aba, 0x18ada, indexCPS2Sprites_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x18afa, 0x18b1a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"LP Select Portrait", 0x4123a, 0x4125a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"LP Win Portrait", 0x42f7a, 0x4301a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x18b1a, 0x18b3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"MP 2.HP/Mummies", 0x18b5a, 0x18b7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"MP 426KK/62KK Light", 0x18b3a, 0x18b5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x18b7a, 0x18b9a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"MP Select Portrait", 0x4143a, 0x4145a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"MP Win Portrait", 0x43aba, 0x43b5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x18b9a, 0x18bba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"HP 2.HP/Mummies", 0x18bda, 0x18bfa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"HP 426KK/62KK Light", 0x18bba, 0x18bda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x18bfa, 0x18c1a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"HP Select Portrait", 0x4163a, 0x4165a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"HP Win Portrait", 0x445fa, 0x4469a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x18c1a, 0x18c3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"LK 2.HP/Mummies", 0x18c5a, 0x18c7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"LK 426KK/62KK Light", 0x18c3a, 0x18c5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x18c7a, 0x18c9a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"LK Select Portrait", 0x4183a, 0x4185a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"LK Win Portrait", 0x4513a, 0x451da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x18c9a, 0x18cba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"MK 2.HP/Mummies", 0x18cda, 0x18cfa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"MK 426KK/62KK Light", 0x18cba, 0x18cda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x18cfa, 0x18d1a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"MK Select Portrait", 0x41a3a, 0x41a5a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"MK Win Portrait", 0x45c7a, 0x45d1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x18d1a, 0x18d3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"HK 2.HP/Mummies", 0x18d5a, 0x18d7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"HK 426KK/62KK Light", 0x18d3a, 0x18d5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x18d7a, 0x18d9a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"HK Select Portrait", 0x41c3a, 0x41c5a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"HK Win Portrait", 0x467ba, 0x4685a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x18d9a, 0x18dba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"PP 2.HP/Mummies", 0x18dda, 0x18dfa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"PP 426KK/62KK Light", 0x18dba, 0x18dda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x18dfa, 0x18e1a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"PP Select Portrait", 0x41e3a, 0x41e5a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"PP Win Portrait", 0x472fa, 0x4739a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x18e1a, 0x18e3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"KK 2.HP/Mummies", 0x18e5a, 0x18e7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"KK 426KK/62KK Light", 0x18e3a, 0x18e5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x18e7a, 0x18e9a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"KK Select Portrait", 0x4203a, 0x4205a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"KK Win Portrait", 0x47e3a, 0x47eda, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x18e9a, 0x18eba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"AP 2.HP/Mummies", 0x18eda, 0x18efa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"AP 426KK/62KK Light", 0x18eba, 0x18eda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x18efa, 0x18f1a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"AP Select Portrait", 0x4223a, 0x4225a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"AP Win Portrait", 0x4897a, 0x48a1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x18f1a, 0x18f3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"AK 2.HP/Mummies", 0x18f5a, 0x18f7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"AK 426KK/62KK Light", 0x18f3a, 0x18f5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x18f7a, 0x18f9a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"AK Select Portrait", 0x4243a, 0x4245a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"AK Win Portrait", 0x494ba, 0x4955a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_SHARED[] =
{
    { L"Anakaris Pharaoh Magic Orbs 2", 0x1b2e0 + 0x1603a, 0x1b320 + 0x1603a, indexCPS2Sprites_Anakaris, 0x0b, &pairNext2 },
    { L"Anakaris Pharaoh Asteroids",    0x1b320 + 0x1603a, 0x1b340 + 0x1603a, indexCPS2Sprites_Anakaris, 0x08 },
    { L"Anakaris Pharaoh Magic Orbs 4", 0x1b340 + 0x1603a, 0x1b360 + 0x1603a, indexCPS2Sprites_Anakaris, 0x0e },
    { L"Anakaris Pharaoh Girls/Mini Mummy LP",        0x1b360 + 0x1603a, 0x1b3a0 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MP",        0x1b3a0 + 0x1603a, 0x1b3e0 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HP",        0x1b3e0 + 0x1603a, 0x1b420 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy LK",        0x1b420 + 0x1603a, 0x1b460 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MK",        0x1b460 + 0x1603a, 0x1b4a0 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HK",        0x1b4a0 + 0x1603a, 0x1b4e0 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy PP",        0x1b4e0 + 0x1603a, 0x1b520 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy KK",        0x1b520 + 0x1603a, 0x1b560 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AP",        0x1b560 + 0x1603a, 0x1b5a0 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AK",        0x1b5a0 + 0x1603a, 0x1b5e0 + 0x1603a, indexCPS2Sprites_Anakaris, 0x09 },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x18f9a, 0x18fba, indexCPS2Sprites_Felicia, 0x0 },
    { L"LP Helpers/Mouse", 0x18fba, 0x18fda, indexCPS2Sprites_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x18fda, 0x18ffa, indexCPS2Sprites_Felicia, 0x01 },
    { L"LP ES Hell Cat", 0x18ffa, 0x1901a, indexCPS2Sprites_Felicia, 0x0 },
    { L"LP Select portrait", 0x4125a, 0x4127a, indexCPS2Sprites_Felicia, 0x20 },
    { L"LP Win Portrait", 0x4301a, 0x430ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x1901a, 0x1903a, indexCPS2Sprites_Felicia, 0x0 },
    { L"MP Helpers/Mouse", 0x1903a, 0x1905a, indexCPS2Sprites_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x1905a, 0x1907a, indexCPS2Sprites_Felicia, 0x01 },
    { L"MP ES Hell Cat", 0x1907a, 0x1909a, indexCPS2Sprites_Felicia, 0x0 },
    { L"MP Select Portrait", 0x4145a, 0x4147a, indexCPS2Sprites_Felicia, 0x20 },
    { L"MP Win Portrait", 0x43b5a, 0x43bfa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x1909a, 0x190ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"HP Helpers/Mouse", 0x190ba, 0x190da, indexCPS2Sprites_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x190da, 0x190fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"HP ES Hell Cat", 0x190fa, 0x1911a, indexCPS2Sprites_Felicia, 0x0 },
    { L"HP Select Portrait", 0x4165a, 0x4167a, indexCPS2Sprites_Felicia, 0x20 },
    { L"HP Win Portrait", 0x4469a, 0x4473a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x1911a, 0x1913a, indexCPS2Sprites_Felicia, 0x0 },
    { L"LK Helpers/Mouse", 0x1913a, 0x1915a, indexCPS2Sprites_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x1915a, 0x1917a, indexCPS2Sprites_Felicia, 0x01 },
    { L"LK ES Hell Cat", 0x1917a, 0x1919a, indexCPS2Sprites_Felicia, 0x0 },
    { L"LK Select Portrait", 0x4185a, 0x4187a, indexCPS2Sprites_Felicia, 0x20 },
    { L"LK Win Portrait", 0x451da, 0x4527a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x1919a, 0x191ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"MK Helpers/Mouse", 0x191ba, 0x191da, indexCPS2Sprites_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x191da, 0x191fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"MK ES Hell Cat", 0x191fa, 0x1921a, indexCPS2Sprites_Felicia, 0x0 },
    { L"MK Select Portrait", 0x41a5a, 0x41a7a, indexCPS2Sprites_Felicia, 0x20 },
    { L"MK Win Portrait", 0x45d1a, 0x45dba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x1921a, 0x1923a, indexCPS2Sprites_Felicia, 0x0 },
    { L"HK Helpers/Mouse", 0x1923a, 0x1925a, indexCPS2Sprites_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x1925a, 0x1927a, indexCPS2Sprites_Felicia, 0x01 },
    { L"HK ES Hell Cat", 0x1927a, 0x1929a, indexCPS2Sprites_Felicia, 0x0 },
    { L"HK Select Portrait", 0x41c5a, 0x41c7a, indexCPS2Sprites_Felicia, 0x20 },
    { L"HK Win Portrait", 0x4685a, 0x468fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x1929a, 0x192ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"PP Helpers/Mouse", 0x192ba, 0x192da, indexCPS2Sprites_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x192da, 0x192fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"PP ES Hell Cat", 0x192fa, 0x1931a, indexCPS2Sprites_Felicia, 0x0 },
    { L"PP Select Portrait", 0x41e5a, 0x41e7a, indexCPS2Sprites_Felicia, 0x20 },
    { L"PP Win Portrait", 0x4739a, 0x4743a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x1931a, 0x1933a, indexCPS2Sprites_Felicia, 0x0 },
    { L"KK Helpers/Mouse", 0x1933a, 0x1935a, indexCPS2Sprites_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x1935a, 0x1937a, indexCPS2Sprites_Felicia, 0x01 },
    { L"KK ES Hell Cat", 0x1937a, 0x1939a, indexCPS2Sprites_Felicia, 0x0 },
    { L"KK Select Portrait", 0x4205a, 0x4207a, indexCPS2Sprites_Felicia, 0x20 },
    { L"KK Win Portrait", 0x47eda, 0x47f7a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x1939a, 0x193ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"AP Helpers/Mouse", 0x193ba, 0x193da, indexCPS2Sprites_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x193da, 0x193fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"AP ES Hell Cat", 0x193fa, 0x1941a, indexCPS2Sprites_Felicia, 0x0 },
    { L"AP Select Portrait", 0x4225a, 0x4227a, indexCPS2Sprites_Felicia, 0x20 },
    { L"AP Win Portrait", 0x48a1a, 0x48aba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x1941a, 0x1943a, indexCPS2Sprites_Felicia, 0x0 },
    { L"AK Helpers/Mouse", 0x1943a, 0x1945a, indexCPS2Sprites_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x1945a, 0x1947a, indexCPS2Sprites_Felicia, 0x01 },
    { L"AK ES Hell Cat", 0x1947a, 0x1949a, indexCPS2Sprites_Felicia, 0x0 },
    { L"AK Select Portrait", 0x4245a, 0x4247a, indexCPS2Sprites_Felicia, 0x20 },
    { L"AK Win Portrait", 0x4955a, 0x495fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x1949a, 0x194ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x194da, 0x194fa, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LP 41236KK", 0x194ba, 0x194da, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"LP Unknown Extra", 0x194fa, 0x1951a },
    { L"LP Select Portrait", 0x4127a, 0x4129a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x430ba, 0x4315a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x1951a, 0x1953a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1955a, 0x1957a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"MP 41236KK", 0x1953a, 0x1955a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"MP Unknown Extra", 0x1957a, 0x1959a },
    { L"MP Select Portrait", 0x4147a, 0x4149a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x43bfa, 0x43c9a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x1959a, 0x195ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x195da, 0x195fa, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HP 41236KK", 0x195ba, 0x195da, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"HP Unknown Extra", 0x195fa, 0x1961a },
    { L"HP Select Portrait", 0x4167a, 0x4169a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x4473a, 0x447da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x1961a, 0x1963a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1965a, 0x1967a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LK 41236KK", 0x1963a, 0x1965a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"LK Unknown Extra", 0x1967a, 0x1969a },
    { L"LK Select Portrait", 0x4187a, 0x4189a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x4527a, 0x4531a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x1969a, 0x196ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x196da, 0x196fa, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"MK 41236KK", 0x196ba, 0x196da, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"MK Unknown Extra", 0x196fa, 0x1971a },
    { L"MK Select Portrait", 0x41a7a, 0x41a9a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x45dba, 0x45e5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x1971a, 0x1973a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1975a, 0x1977a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HK 41236KK", 0x1973a, 0x1975a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"HK Unknown Extra", 0x1977a, 0x1979a },
    { L"HK Select Portrait", 0x41c7a, 0x41c9a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x468fa, 0x4699a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x1979a, 0x197ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x197da, 0x197fa, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"PP 41236KK", 0x197ba, 0x197da, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"PP Unknown Extra", 0x197fa, 0x1981a },
    { L"PP Select Portrait", 0x41e7a, 0x41e9a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"PP Win Portrait", 0x4743a, 0x474da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x1981a, 0x1983a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1985a, 0x1987a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"KK 41236KK", 0x1983a, 0x1985a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"KK Unknown Extra", 0x1987a, 0x1989a },
    { L"KK Select Portrait", 0x4207a, 0x4209a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"KK Win Portrait", 0x47f7a, 0x4801a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x1989a, 0x198ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x198da, 0x198fa, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AP 41236KK", 0x198ba, 0x198da, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"AP Unknown Extra", 0x198fa, 0x1991a },
    { L"AP Select Portrait", 0x4227a, 0x4229a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"AP Win Portrait", 0x48aba, 0x48b5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x1991a, 0x1993a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks", 0x1995a, 0x1997a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AK 41236KK", 0x1993a, 0x1995a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"AK Unknown Extra", 0x1997a, 0x1999a },
    { L"AK Select Portrait", 0x4247a, 0x4249a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"AK Win Portrait", 0x495fa, 0x4969a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x1999a, 0x199ba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"LP Water/s.MK/j.MP", 0x199ba, 0x199da, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"LP Poison Cloud/Lower Mach Crab", 0x199fa, 0x19a1a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"LP Sonic Wave/Mach Crab", 0x199da, 0x199fa },
    { L"LP Select Portrait", 0x4129a, 0x412ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"LP Win Portrait", 0x4315a, 0x431fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x19a1a, 0x19a3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"MP Water/s.MK/j.MP", 0x19a3a, 0x19a5a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"MP Poison Cloud/Lower Mach Crab", 0x19a7a, 0x19a9a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"MP Sonic Wave/Mach Crab", 0x19a5a, 0x19a7a },
    { L"MP Select Portrait", 0x4149a, 0x414ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"MP Win Portrait", 0x43c9a, 0x43d3a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x19a9a, 0x19aba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"HP Water/s.MK/j.MP", 0x19aba, 0x19ada, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"HP Poison Cloud/Lower Mach Crab", 0x19afa, 0x19b1a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"HP Sonic Wave/Mach Crab", 0x19ada, 0x19afa },
    { L"HP Select Portrait", 0x4169a, 0x416ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"HP Win Portrait", 0x447da, 0x4487a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x19b1a, 0x19b3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"LK Water/s.MK/j.MP", 0x19b3a, 0x19b5a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"LK Poison Cloud/Lower Mach Crab", 0x19b7a, 0x19b9a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"LK Sonic Wave/Mach Crab", 0x19b5a, 0x19b7a },
    { L"LK Select Portrait", 0x4189a, 0x418ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"LK Win Portrait", 0x4531a, 0x453ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x19b9a, 0x19bba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"MK Water/s.MK/j.MP", 0x19bba, 0x19bda, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"MK Poison Cloud/Lower Mach Crab", 0x19bfa, 0x19c1a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"MK Sonic Wave/Mach Crab", 0x19bda, 0x19bfa },
    { L"MK Select Portrait", 0x41a9a, 0x41aba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"MK Win Portrait", 0x45e5a, 0x45efa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x19c1a, 0x19c3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"HK Water/s.MK/j.MP", 0x19c3a, 0x19c5a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"HK Poison Cloud/Lower Mach Crab", 0x19c7a, 0x19c9a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"HK Sonic Wave/Mach Crab", 0x19c5a, 0x19c7a },
    { L"HK Select Portrait", 0x41c9a, 0x41cba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"HK Win Portrait", 0x4699a, 0x46a3a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x19c9a, 0x19cba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"PP Poison Cloud/Lower Mach Crab", 0x19cfa, 0x19d1a },
    { L"PP Water/s.MK/j.MP", 0x19cba, 0x19cda, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"PP Sonic Wave/Mach Crab", 0x19cda, 0x19cfa, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"PP Select Portrait", 0x41e9a, 0x41eba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"PP Win Portrait", 0x474da, 0x4757a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x19d1a, 0x19d3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"KK Water/s.MK/j.MP", 0x19d3a, 0x19d5a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"KK Poison Cloud/Lower Mach Crab", 0x19d7a, 0x19d9a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"KK Sonic Wave/Mach Crab", 0x19d5a, 0x19d7a },
    { L"KK Select Portrait", 0x4209a, 0x420ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"KK Win Portrait", 0x4801a, 0x480ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x19d9a, 0x19dba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"AP Water/s.MK/j.MP", 0x19dba, 0x19dda, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"AP Poison Cloud/Lower Mach Crab", 0x19dfa, 0x19e1a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"AP Sonic Wave/Mach Crab", 0x19dda, 0x19dfa },
    { L"AP Select Portrait", 0x4229a, 0x422ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"AP Win Portrait", 0x48b5a, 0x48bfa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x19e1a, 0x19e3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"AK Water/s.MK/j.MP", 0x19e3a, 0x19e5a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"AK Poison Cloud/Lower Mach Crab", 0x19e7a, 0x19e9a, indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"AK Sonic Wave/Mach Crab", 0x19e5a, 0x19e7a },
    { L"AK Select Portrait", 0x4249a, 0x424ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"AK Win Portrait", 0x4969a, 0x4973a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_SHARED[] =
{
    { L"Sonic Wave 2 / Mach Crab 2 (Shared)", 0x31b3a, 0x31b5a },
    { L"Pearl and Win Pose (Shared)", 0x31b5a, 0x31b7a, indexCPS2Sprites_Vamp_Aulbath, 0x03 },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x19e9a, 0x19eba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"LP Ice Extras", 0x19efa, 0x19f1a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x19eba, 0x19eda, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x19eda, 0x19efa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"LP Select Portrait", 0x412ba, 0x412da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"LP Win Portrait", 0x431fa, 0x4329a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x19f1a, 0x19f3a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"MP Ice Extras", 0x19f7a, 0x19f9a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x19f3a, 0x19f5a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x19f5a, 0x19f7a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"MP Select Portrait", 0x414ba, 0x414da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"MP Win Portrait", 0x43d3a, 0x43dda, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x19f9a, 0x19fba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"HP Ice Extras", 0x19ffa, 0x1a01a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x19fba, 0x19fda, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x19fda, 0x19ffa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"HP Select Portrait", 0x416ba, 0x416da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"HP Win Portrait", 0x4487a, 0x4491a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x1a01a, 0x1a03a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"LK Ice Extras", 0x1a07a, 0x1a09a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x1a03a, 0x1a05a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x1a05a, 0x1a07a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"LK Select Portrait", 0x418ba, 0x418da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"LK Win Portrait", 0x453ba, 0x4545a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x1a09a, 0x1a0ba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"MK Ice Extras", 0x1a0fa, 0x1a11a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x1a0ba, 0x1a0da, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x1a0da, 0x1a0fa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"MK Select Portrait", 0x41aba, 0x41ada, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"MK Win Portrait", 0x45efa, 0x45f9a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x1a11a, 0x1a13a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"HK Ice Extras", 0x1a17a, 0x1a19a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x1a13a, 0x1a15a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x1a15a, 0x1a17a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"HK Select Portrait", 0x41cba, 0x41cda, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"HK Win Portrait", 0x46a3a, 0x46ada, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x1a19a, 0x1a1ba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"PP Ice Extras", 0x1a1fa, 0x1a21a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x1a1ba, 0x1a1da, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x1a1da, 0x1a1fa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"PP Select Portrait", 0x41eba, 0x41eda, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"PP Win Portrait", 0x4757a, 0x4761a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x1a21a, 0x1a23a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"KK Ice Extras", 0x1a27a, 0x1a29a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x1a23a, 0x1a25a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x1a25a, 0x1a27a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"KK Select Portrait", 0x420ba, 0x420da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"KK Win Portrait", 0x480ba, 0x4815a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x1a29a, 0x1a2ba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"AP Ice Extras", 0x1a2fa, 0x1a31a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x1a2ba, 0x1a2da, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x1a2da, 0x1a2fa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"AP Select Portrait", 0x422ba, 0x422da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"AP Win Portrait", 0x48bfa, 0x48c9a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x1a31a, 0x1a33a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"AK Ice Extras", 0x1a37a, 0x1a39a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x1a33a, 0x1a35a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x1a35a, 0x1a37a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"AK Select Portrait", 0x424ba, 0x424da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"AK Win Portrait", 0x4973a, 0x497da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_1[] =
{
    { L"Alt Zabel", 0x1a79a, 0x1a7ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 64PP/63214KK/intro/winpose", 0x1a7ba, 0x1a7da },
    { L"Alt Zabel Unused 1", 0x1a7da, 0x1a7fa },
    { L"Alt Zabel Unused 2", 0x1a7fa, 0x1a81a },
 };

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_2[] =
{
    { L"Alt Zabel 2", 0x1a81a, 0x1a83a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 2 64PP/63214KK/intro/winpos", 0x1a83a, 0x1a85a },
    { L"Alt Zabel 2 Unused 1", 0x1a85a, 0x1a87a },
    { L"Alt Zabel 2 Unused 2", 0x1a87a, 0x1a89a },
 };

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x1a89a, 0x1a8ba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"LP Wings/Honey", 0x1a8ba, 0x1a8da, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"LP Wings/Honey frame 2", 0x3501a, 0x3503a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"LP Egg", 0x1a8da, 0x1a8fa, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"LP Bees", 0x1a8fa, 0x1a91a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x3233a, 0x3235a (delta 0x163b0)
  // Match at 0x344fa, 0x3451a (delta 0x18570)
    { L"LP Intro/ES 412PP 1", 0x3233a, 0x3235a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LP Intro/ES 412PP 2", 0x3237a, 0x3239a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LP Intro/ES 412PP 3", 0x323ba, 0x323da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LP Intro/ES 412PP 4", 0x323fa, 0x3241a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LP Intro/ES 412PP 5", 0x3243a, 0x3245a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LP Intro/ES 412PP 6", 0x3247a, 0x3249a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LP Intro/ES 412PP 7", 0x324ba, 0x324da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LP Intro/ES 412PP 8", 0x324fa, 0x3251a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14210!
  // Match at 0x3237a, 0x3239a (delta 0x14210)
  // Match at 0x3451a, 0x3453a (delta 0x163b0) <-- swapped to use this one
    { L"LP C-R 1/7", 0x3451a, 0x3453a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14230!
  // Match at 0x323ba, 0x323da (delta 0x14230)
  // Match at 0x3453a, 0x3455a (delta 0x163b0) <-- swapped to use this one
    { L"LP C-R 2/7", 0x3453a, 0x3455a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14250!
  // Match at 0x323fa, 0x3241a (delta 0x14250)
  // Match at 0x3455a, 0x3457a (delta 0x163b0) <-- swapped to use this one
    { L"LP C-R 3/7", 0x3455a, 0x3457a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14270!
  // Match at 0x3243a, 0x3245a (delta 0x14270)
  // Match at 0x3457a, 0x3459a (delta 0x163b0) <-- swapped to use this one
    { L"LP C-R 4/7", 0x3457a, 0x3459a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14290!
  // Match at 0x3247a, 0x3249a (delta 0x14290)
  // Match at 0x3459a, 0x345ba (delta 0x163b0) <-- swapped to use this one
    { L"LP C-R 5/7", 0x3459a, 0x345ba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x142b0!
  // Match at 0x324ba, 0x324da (delta 0x142b0)
  // Match at 0x345ba, 0x345da (delta 0x163b0) <-- swapped to use this one
    { L"LP C-R 6/7", 0x345ba, 0x345da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x142d0!
  // Match at 0x324fa, 0x3251a (delta 0x142d0)
  // Match at 0x345da, 0x345fa (delta 0x163b0) <-- swapped to use this one
    { L"LP C-R 7/7", 0x345da, 0x345fa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"LP Select Portrait", 0x412fa, 0x4131a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"LP Win Portrait", 0x4333a, 0x433da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },

    { L"LP Bees Win Pose", 0x321fa, 0x3221a, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"LP Tap K", 0x3373a, 0x3375a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
 };

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x1a91a, 0x1a93a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"MP Wings/Honey", 0x1a93a, 0x1a95a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"MP Wings/Honey frame 2", 0x3503a, 0x3505a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"MP Egg", 0x1a95a, 0x1a97a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"MP Bees", 0x1a97a, 0x1a99a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x3253a, 0x3255a (delta 0x163b0)
  // Match at 0x3461a, 0x3463a (delta 0x18490)
    { L"MP Intro/ES 412PP 1", 0x3253a, 0x3255a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MP Intro/ES 412PP 2", 0x3257a, 0x3259a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MP Intro/ES 412PP 3", 0x325ba, 0x325da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MP Intro/ES 412PP 4", 0x325fa, 0x3261a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MP Intro/ES 412PP 5", 0x3263a, 0x3265a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MP Intro/ES 412PP 6", 0x3267a, 0x3269a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MP Intro/ES 412PP 7", 0x326ba, 0x326da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MP Intro/ES 412PP 8", 0x326fa, 0x3271a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x142f0!
  // Match at 0x3257a, 0x3259a (delta 0x142f0)
  // Match at 0x3463a, 0x3465a (delta 0x163b0) <-- swapped to use this one
    { L"MP C-R 1/7", 0x3463a, 0x3465a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14310!
  // Match at 0x325ba, 0x325da (delta 0x14310)
  // Match at 0x3465a, 0x3467a (delta 0x163b0) <-- swapped to use this one
    { L"MP C-R 2/7", 0x3465a, 0x3467a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14330!
  // Match at 0x325fa, 0x3261a (delta 0x14330)
  // Match at 0x3467a, 0x3469a (delta 0x163b0) <-- swapped to use this one
    { L"MP C-R 3/7", 0x3467a, 0x3469a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14350!
  // Match at 0x3263a, 0x3265a (delta 0x14350)
  // Match at 0x3469a, 0x346ba (delta 0x163b0) <-- swapped to use this one
    { L"MP C-R 4/7", 0x3469a, 0x346ba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14370!
  // Match at 0x3267a, 0x3269a (delta 0x14370)
  // Match at 0x346ba, 0x346da (delta 0x163b0) <-- swapped to use this one
    { L"MP C-R 5/7", 0x346ba, 0x346da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14390!
  // Match at 0x326ba, 0x326da (delta 0x14390)
  // Match at 0x346da, 0x346fa (delta 0x163b0) <-- swapped to use this one
    { L"MP C-R 6/7", 0x346da, 0x346fa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x143b0!
  // Match at 0x326fa, 0x3271a (delta 0x143b0)
  // Match at 0x346fa, 0x3471a (delta 0x163b0) <-- swapped to use this one
    { L"MP C-R 7/7", 0x346fa, 0x3471a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"MP Select Portrait", 0x414fa, 0x4151a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"MP Win Portrait", 0x43e7a, 0x43f1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },

    { L"MP Bees Win Pose", 0x3221a, 0x3223a, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"MP Tap K", 0x3375a, 0x3377a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x1a99a, 0x1a9ba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"HP Wings/Honey", 0x1a9ba, 0x1a9da, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"HP Wings/Honey frame 2", 0x3505a, 0x3507a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"HP Egg", 0x1a9da, 0x1a9fa, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"HP Bees", 0x1a9fa, 0x1aa1a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x3273a, 0x3275a (delta 0x163b0)
  // Match at 0x3473a, 0x3475a (delta 0x183b0)
    { L"HP Intro/ES 412PP 1", 0x3273a, 0x3275a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HP Intro/ES 412PP 2", 0x3277a, 0x3279a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HP Intro/ES 412PP 3", 0x327ba, 0x327da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HP Intro/ES 412PP 4", 0x327fa, 0x3281a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HP Intro/ES 412PP 5", 0x3283a, 0x3285a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HP Intro/ES 412PP 6", 0x3287a, 0x3289a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HP Intro/ES 412PP 7", 0x328ba, 0x328da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HP Intro/ES 412PP 8", 0x328fa, 0x3291a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x143d0!
  // Match at 0x3277a, 0x3279a (delta 0x143d0)
  // Match at 0x3475a, 0x3477a (delta 0x163b0) <-- swapped to use this one
    { L"HP C-R 1/7", 0x3475a, 0x3477a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x143f0!
  // Match at 0x327ba, 0x327da (delta 0x143f0)
  // Match at 0x3477a, 0x3479a (delta 0x163b0) <-- swapped to use this one
    { L"HP C-R 2/7", 0x3477a, 0x3479a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14410!
  // Match at 0x327fa, 0x3281a (delta 0x14410)
  // Match at 0x3479a, 0x347ba (delta 0x163b0) <-- swapped to use this one
    { L"HP C-R 3/7", 0x3479a, 0x347ba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14430!
  // Match at 0x3283a, 0x3285a (delta 0x14430)
  // Match at 0x347ba, 0x347da (delta 0x163b0) <-- swapped to use this one
    { L"HP C-R 4/7", 0x347ba, 0x347da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14450!
  // Match at 0x3287a, 0x3289a (delta 0x14450)
  // Match at 0x347da, 0x347fa (delta 0x163b0) <-- swapped to use this one
    { L"HP C-R 5/7", 0x347da, 0x347fa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14470!
  // Match at 0x328ba, 0x328da (delta 0x14470)
  // Match at 0x347fa, 0x3481a (delta 0x163b0) <-- swapped to use this one
    { L"HP C-R 6/7", 0x347fa, 0x3481a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14490!
  // Match at 0x328fa, 0x3291a (delta 0x14490)
  // Match at 0x3481a, 0x3483a (delta 0x163b0) <-- swapped to use this one
    { L"HP C-R 7/7", 0x3481a, 0x3483a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"HP Select Portrait", 0x416fa, 0x4171a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"HP Win Portrait", 0x449ba, 0x44a5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },

    { L"HP Bees Win Pose", 0x3223a, 0x3225a, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"HP Tap K", 0x3377a, 0x3379a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x1aa1a, 0x1aa3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"LK Wings/Honey", 0x1aa3a, 0x1aa5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"LK Wings/Honey frame 2", 0x3507a, 0x3509a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"LK Egg", 0x1aa5a, 0x1aa7a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"LK Bees", 0x1aa7a, 0x1aa9a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x3293a, 0x3295a (delta 0x163b0)
  // Match at 0x3485a, 0x3487a (delta 0x182d0)
    { L"LK Intro/ES 412PP 1", 0x3293a, 0x3295a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LK Intro/ES 412PP 2", 0x3297a, 0x3299a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LK Intro/ES 412PP 3", 0x329ba, 0x329da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LK Intro/ES 412PP 4", 0x329fa, 0x32a1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LK Intro/ES 412PP 5", 0x32a3a, 0x32a5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LK Intro/ES 412PP 6", 0x32a7a, 0x32a9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LK Intro/ES 412PP 7", 0x32aba, 0x32ada, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"LK Intro/ES 412PP 8", 0x32afa, 0x32b1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x144b0!
  // Match at 0x3297a, 0x3299a (delta 0x144b0)
  // Match at 0x3487a, 0x3489a (delta 0x163b0) <-- swapped to use this one
    { L"LK C-R 1/7", 0x3487a, 0x3489a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x144d0!
  // Match at 0x329ba, 0x329da (delta 0x144d0)
  // Match at 0x3489a, 0x348ba (delta 0x163b0) <-- swapped to use this one
    { L"LK C-R 2/7", 0x3489a, 0x348ba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x144f0!
  // Match at 0x329fa, 0x32a1a (delta 0x144f0)
  // Match at 0x348ba, 0x348da (delta 0x163b0) <-- swapped to use this one
    { L"LK C-R 3/7", 0x348ba, 0x348da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14510!
  // Match at 0x32a3a, 0x32a5a (delta 0x14510)
  // Match at 0x348da, 0x348fa (delta 0x163b0) <-- swapped to use this one
    { L"LK C-R 4/7", 0x348da, 0x348fa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14530!
  // Match at 0x32a7a, 0x32a9a (delta 0x14530)
  // Match at 0x348fa, 0x3491a (delta 0x163b0) <-- swapped to use this one
    { L"LK C-R 5/7", 0x348fa, 0x3491a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14550!
  // Match at 0x32aba, 0x32ada (delta 0x14550)
  // Match at 0x3491a, 0x3493a (delta 0x163b0) <-- swapped to use this one
    { L"LK C-R 6/7", 0x3491a, 0x3493a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14570!
  // Match at 0x32afa, 0x32b1a (delta 0x14570)
  // Match at 0x3493a, 0x3495a (delta 0x163b0) <-- swapped to use this one
    { L"LK C-R 7/7", 0x3493a, 0x3495a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"LK Select Portrait", 0x418fa, 0x4191a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"LK Win Portrait", 0x454fa, 0x4559a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
 
    { L"LK Bees Win Pose", 0x3225a, 0x3227a, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"LK Tap K", 0x3379a, 0x337ba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x1aa9a, 0x1aaba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"MK Wings/Honey", 0x1aaba, 0x1aada, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"MK Wings/Honey frame 2", 0x3509a, 0x350ba, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"MK Egg", 0x1aada, 0x1aafa, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"MK Bees", 0x1aafa, 0x1ab1a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x32b3a, 0x32b5a (delta 0x163b0)
  // Match at 0x3497a, 0x3499a (delta 0x181f0)
    { L"MK Intro/ES 412PP 1", 0x32b3a, 0x32b5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MK Intro/ES 412PP 2", 0x32b7a, 0x32b9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MK Intro/ES 412PP 3", 0x32bba, 0x32bda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MK Intro/ES 412PP 4", 0x32bfa, 0x32c1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MK Intro/ES 412PP 5", 0x32c3a, 0x32c5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MK Intro/ES 412PP 6", 0x32c7a, 0x32c9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MK Intro/ES 412PP 7", 0x32cba, 0x32cda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"MK Intro/ES 412PP 8", 0x32cfa, 0x32d1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14590!
  // Match at 0x32b7a, 0x32b9a (delta 0x14590)
  // Match at 0x3499a, 0x349ba (delta 0x163b0) <-- swapped to use this one
    { L"MK C-R 1/7", 0x3499a, 0x349ba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x145b0!
  // Match at 0x32bba, 0x32bda (delta 0x145b0)
  // Match at 0x349ba, 0x349da (delta 0x163b0) <-- swapped to use this one
    { L"MK C-R 2/7", 0x349ba, 0x349da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x145d0!
  // Match at 0x32bfa, 0x32c1a (delta 0x145d0)
  // Match at 0x349da, 0x349fa (delta 0x163b0) <-- swapped to use this one
    { L"MK C-R 3/7", 0x349da, 0x349fa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x145f0!
  // Match at 0x32c3a, 0x32c5a (delta 0x145f0)
  // Match at 0x349fa, 0x34a1a (delta 0x163b0) <-- swapped to use this one
    { L"MK C-R 4/7", 0x349fa, 0x34a1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14610!
  // Match at 0x32c7a, 0x32c9a (delta 0x14610)
  // Match at 0x34a1a, 0x34a3a (delta 0x163b0) <-- swapped to use this one
    { L"MK C-R 5/7", 0x34a1a, 0x34a3a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14630!
  // Match at 0x32cba, 0x32cda (delta 0x14630)
  // Match at 0x34a3a, 0x34a5a (delta 0x163b0) <-- swapped to use this one
    { L"MK C-R 6/7", 0x34a3a, 0x34a5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14650!
  // Match at 0x32cfa, 0x32d1a (delta 0x14650)
  // Match at 0x34a5a, 0x34a7a (delta 0x163b0) <-- swapped to use this one
    { L"MK C-R 7/7", 0x34a5a, 0x34a7a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"MK Select Portrait", 0x41afa, 0x41b1a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"MK Win Portrait", 0x4603a, 0x460da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },

    { L"MK Bees Win Pose", 0x3227a, 0x3229a, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"MK Tap K", 0x337ba, 0x337da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x1ab1a, 0x1ab3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"HK Wings/Honey", 0x1ab3a, 0x1ab5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"HK Wings/Honey frame 2", 0x350ba, 0x350da, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"HK Egg", 0x1ab5a, 0x1ab7a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"HK Bees", 0x1ab7a, 0x1ab9a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x32d3a, 0x32d5a (delta 0x163b0)
  // Match at 0x34a9a, 0x34aba (delta 0x18110)
    { L"HK Intro/ES 412PP 1", 0x32d3a, 0x32d5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HK Intro/ES 412PP 2", 0x32d7a, 0x32d9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HK Intro/ES 412PP 3", 0x32dba, 0x32dda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HK Intro/ES 412PP 4", 0x32dfa, 0x32e1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HK Intro/ES 412PP 5", 0x32e3a, 0x32e5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HK Intro/ES 412PP 6", 0x32e7a, 0x32e9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HK Intro/ES 412PP 7", 0x32eba, 0x32eda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"HK Intro/ES 412PP 8", 0x32efa, 0x32f1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14670!
  // Match at 0x32d7a, 0x32d9a (delta 0x14670)
  // Match at 0x34aba, 0x34ada (delta 0x163b0) <-- swapped to use this one
    { L"HK C-R 1/7", 0x34aba, 0x34ada, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14690!
  // Match at 0x32dba, 0x32dda (delta 0x14690)
  // Match at 0x34ada, 0x34afa (delta 0x163b0) <-- swapped to use this one
    { L"HK C-R 2/7", 0x34ada, 0x34afa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x146b0!
  // Match at 0x32dfa, 0x32e1a (delta 0x146b0)
  // Match at 0x34afa, 0x34b1a (delta 0x163b0) <-- swapped to use this one
    { L"HK C-R 3/7", 0x34afa, 0x34b1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x146d0!
  // Match at 0x32e3a, 0x32e5a (delta 0x146d0)
  // Match at 0x34b1a, 0x34b3a (delta 0x163b0) <-- swapped to use this one
    { L"HK C-R 4/7", 0x34b1a, 0x34b3a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x146f0!
  // Match at 0x32e7a, 0x32e9a (delta 0x146f0)
  // Match at 0x34b3a, 0x34b5a (delta 0x163b0) <-- swapped to use this one
    { L"HK C-R 5/7", 0x34b3a, 0x34b5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14710!
  // Match at 0x32eba, 0x32eda (delta 0x14710)
  // Match at 0x34b5a, 0x34b7a (delta 0x163b0) <-- swapped to use this one
    { L"HK C-R 6/7", 0x34b5a, 0x34b7a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14730!
  // Match at 0x32efa, 0x32f1a (delta 0x14730)
  // Match at 0x34b7a, 0x34b9a (delta 0x163b0) <-- swapped to use this one
    { L"HK C-R 7/7", 0x34b7a, 0x34b9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"HK Select Portrait", 0x41cfa, 0x41d1a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"HK Win Portrait", 0x46b7a, 0x46c1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
 
    { L"HK Bees Win Pose", 0x3229a, 0x322ba, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"HK Tap K", 0x337da, 0x337fa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x1ab9a, 0x1abba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"PP Wings/Honey", 0x1abba, 0x1abda, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"PP Wings/Honey frame 2", 0x350da, 0x350fa, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"PP Egg", 0x1abda, 0x1abfa, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"PP Bees", 0x1abfa, 0x1ac1a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x32f3a, 0x32f5a (delta 0x163b0)
  // Match at 0x34bba, 0x34bda (delta 0x18030)
    { L"PP Intro/ES 412PP 1", 0x32f3a, 0x32f5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"PP Intro/ES 412PP 2", 0x32f7a, 0x32f9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"PP Intro/ES 412PP 3", 0x32fba, 0x32fda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"PP Intro/ES 412PP 4", 0x32ffa, 0x3301a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"PP Intro/ES 412PP 5", 0x3303a, 0x3305a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"PP Intro/ES 412PP 6", 0x3307a, 0x3309a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"PP Intro/ES 412PP 7", 0x330ba, 0x330da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"PP Intro/ES 412PP 8", 0x330fa, 0x3311a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14750!
  // Match at 0x32f7a, 0x32f9a (delta 0x14750)
  // Match at 0x34bda, 0x34bfa (delta 0x163b0) <-- swapped to use this one
    { L"PP C-R 1/7", 0x34bda, 0x34bfa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14770!
  // Match at 0x32fba, 0x32fda (delta 0x14770)
  // Match at 0x34bfa, 0x34c1a (delta 0x163b0) <-- swapped to use this one
    { L"PP C-R 2/7", 0x34bfa, 0x34c1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14790!
  // Match at 0x32ffa, 0x3301a (delta 0x14790)
  // Match at 0x34c1a, 0x34c3a (delta 0x163b0) <-- swapped to use this one
    { L"PP C-R 3/7", 0x34c1a, 0x34c3a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x147b0!
  // Match at 0x3303a, 0x3305a (delta 0x147b0)
  // Match at 0x34c3a, 0x34c5a (delta 0x163b0) <-- swapped to use this one
    { L"PP C-R 4/7", 0x34c3a, 0x34c5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x147d0!
  // Match at 0x3307a, 0x3309a (delta 0x147d0)
  // Match at 0x34c5a, 0x34c7a (delta 0x163b0) <-- swapped to use this one
    { L"PP C-R 5/7", 0x34c5a, 0x34c7a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x147f0!
  // Match at 0x330ba, 0x330da (delta 0x147f0)
  // Match at 0x34c7a, 0x34c9a (delta 0x163b0) <-- swapped to use this one
    { L"PP C-R 6/7", 0x34c7a, 0x34c9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14810!
  // Match at 0x330fa, 0x3311a (delta 0x14810)
  // Match at 0x34c9a, 0x34cba (delta 0x163b0) <-- swapped to use this one
    { L"PP C-R 7/7", 0x34c9a, 0x34cba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"PP Select Portrait", 0x41efa, 0x41f1a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"PP Win Portrait", 0x476ba, 0x4775a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
 
    { L"PP Bees Win Pose", 0x322ba, 0x322da, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"PP Tap K", 0x337fa, 0x3381a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1ac1a, 0x1ac3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"KK Wings/Honey", 0x1ac3a, 0x1ac5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"KK Wings/Honey frame 2", 0x350fa, 0x3511a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"KK Egg", 0x1ac5a, 0x1ac7a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"KK Bees", 0x1ac7a, 0x1ac9a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x3313a, 0x3315a (delta 0x163b0)
  // Match at 0x34cda, 0x34cfa (delta 0x17f50)
    { L"KK Intro/ES 412PP 1", 0x3313a, 0x3315a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"KK Intro/ES 412PP 2", 0x3317a, 0x3319a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"KK Intro/ES 412PP 3", 0x331ba, 0x331da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"KK Intro/ES 412PP 4", 0x331fa, 0x3321a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"KK Intro/ES 412PP 5", 0x3323a, 0x3325a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"KK Intro/ES 412PP 6", 0x3327a, 0x3329a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"KK Intro/ES 412PP 7", 0x332ba, 0x332da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"KK Intro/ES 412PP 8", 0x332fa, 0x3331a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14830!
  // Match at 0x3317a, 0x3319a (delta 0x14830)
  // Match at 0x34cfa, 0x34d1a (delta 0x163b0) <-- swapped to use this one
    { L"KK C-R 1/7", 0x34cfa, 0x34d1a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14850!
  // Match at 0x331ba, 0x331da (delta 0x14850)
  // Match at 0x34d1a, 0x34d3a (delta 0x163b0) <-- swapped to use this one
    { L"KK C-R 2/7", 0x34d1a, 0x34d3a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14870!
  // Match at 0x331fa, 0x3321a (delta 0x14870)
  // Match at 0x34d3a, 0x34d5a (delta 0x163b0) <-- swapped to use this one
    { L"KK C-R 3/7", 0x34d3a, 0x34d5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14890!
  // Match at 0x3323a, 0x3325a (delta 0x14890)
  // Match at 0x34d5a, 0x34d7a (delta 0x163b0) <-- swapped to use this one
    { L"KK C-R 4/7", 0x34d5a, 0x34d7a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x148b0!
  // Match at 0x3327a, 0x3329a (delta 0x148b0)
  // Match at 0x34d7a, 0x34d9a (delta 0x163b0) <-- swapped to use this one
    { L"KK C-R 5/7", 0x34d7a, 0x34d9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x148d0!
  // Match at 0x332ba, 0x332da (delta 0x148d0)
  // Match at 0x34d9a, 0x34dba (delta 0x163b0) <-- swapped to use this one
    { L"KK C-R 6/7", 0x34d9a, 0x34dba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x148f0!
  // Match at 0x332fa, 0x3331a (delta 0x148f0)
  // Match at 0x34dba, 0x34dda (delta 0x163b0) <-- swapped to use this one
    { L"KK C-R 7/7", 0x34dba, 0x34dda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"KK Select Portrait", 0x420fa, 0x4211a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"KK Win Portrait", 0x481fa, 0x4829a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },

    { L"KK Bees Win Pose", 0x322da, 0x322fa, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"KK Tap K", 0x3381a, 0x3383a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x1ac9a, 0x1acba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"AP Wings/Honey", 0x1acba, 0x1acda, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"AP Wings/Honey frame 2", 0x3511a, 0x3513a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"AP Egg", 0x1acda, 0x1acfa, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"AP Bees", 0x1acfa, 0x1ad1a, indexCPS2Sprites_Vamp_QBee, 0x02 },
  // Match at 0x3333a, 0x3335a (delta 0x163b0)
  // Match at 0x34dfa, 0x34e1a (delta 0x17e70)
    { L"AP Intro/ES 412PP 1", 0x3333a, 0x3335a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AP Intro/ES 412PP 2", 0x3337a, 0x3339a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AP Intro/ES 412PP 3", 0x333ba, 0x333da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AP Intro/ES 412PP 4", 0x333fa, 0x3341a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AP Intro/ES 412PP 5", 0x3343a, 0x3345a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AP Intro/ES 412PP 6", 0x3347a, 0x3349a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AP Intro/ES 412PP 7", 0x334ba, 0x334da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AP Intro/ES 412PP 8", 0x334fa, 0x3351a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14910!
  // Match at 0x3337a, 0x3339a (delta 0x14910)
  // Match at 0x34e1a, 0x34e3a (delta 0x163b0) <-- swapped to use this one
    { L"AP C-R 1/7", 0x34e1a, 0x34e3a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14930!
  // Match at 0x333ba, 0x333da (delta 0x14930)
  // Match at 0x34e3a, 0x34e5a (delta 0x163b0) <-- swapped to use this one
    { L"AP C-R 2/7", 0x34e3a, 0x34e5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14950!
  // Match at 0x333fa, 0x3341a (delta 0x14950)
  // Match at 0x34e5a, 0x34e7a (delta 0x163b0) <-- swapped to use this one
    { L"AP C-R 3/7", 0x34e5a, 0x34e7a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14970!
  // Match at 0x3343a, 0x3345a (delta 0x14970)
  // Match at 0x34e7a, 0x34e9a (delta 0x163b0) <-- swapped to use this one
    { L"AP C-R 4/7", 0x34e7a, 0x34e9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14990!
  // Match at 0x3347a, 0x3349a (delta 0x14990)
  // Match at 0x34e9a, 0x34eba (delta 0x163b0) <-- swapped to use this one
    { L"AP C-R 5/7", 0x34e9a, 0x34eba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x149b0!
  // Match at 0x334ba, 0x334da (delta 0x149b0)
  // Match at 0x34eba, 0x34eda (delta 0x163b0) <-- swapped to use this one
    { L"AP C-R 6/7", 0x34eba, 0x34eda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x149d0!
  // Match at 0x334fa, 0x3351a (delta 0x149d0)
  // Match at 0x34eda, 0x34efa (delta 0x163b0) <-- swapped to use this one
    { L"AP C-R 7/7", 0x34eda, 0x34efa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"AP Select Portrait", 0x422fa, 0x4231a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"AP Win Portrait", 0x48d3a, 0x48dda, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },

    { L"AP Bees Win Pose", 0x322fa, 0x3231a, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"AP Tap K", 0x3383a, 0x3385a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1ad1a, 0x1ad3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"AK Wings/Honey", 0x1ad3a, 0x1ad5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"AK Wings/Honey frame 2", 0x3513a, 0x3515a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"AK Egg", 0x1ad5a, 0x1ad7a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"AK Bees", 0x1ad7a, 0x1ad9a, indexCPS2Sprites_Vamp_QBee, 0x02 },
// Warning: the remapped delta shifts from 0xabf0 to 0x163b0!
  // Match at 0x3353a, 0x3355a (delta 0x163b0)
  // Match at 0x34f1a, 0x34f3a (delta 0x17d90)
    { L"AK Intro/ES 412PP 1", 0x3353a, 0x3355a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AK Intro/ES 412PP 2", 0x3357a, 0x3359a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AK Intro/ES 412PP 3", 0x335ba, 0x335da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AK Intro/ES 412PP 4", 0x335fa, 0x3361a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AK Intro/ES 412PP 5", 0x3363a, 0x3365a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AK Intro/ES 412PP 6", 0x3367a, 0x3369a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AK Intro/ES 412PP 7", 0x336ba, 0x336da, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
    { L"AK Intro/ES 412PP 8", 0x336fa, 0x3371a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x149f0!
  // Match at 0x3357a, 0x3359a (delta 0x149f0)
  // Match at 0x34f3a, 0x34f5a (delta 0x163b0) <-- swapped to use this one
    { L"AK C-R 1/7", 0x34f3a, 0x34f5a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14a10!
  // Match at 0x335ba, 0x335da (delta 0x14a10)
  // Match at 0x34f5a, 0x34f7a (delta 0x163b0) <-- swapped to use this one
    { L"AK C-R 2/7", 0x34f5a, 0x34f7a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14a30!
  // Match at 0x335fa, 0x3361a (delta 0x14a30)
  // Match at 0x34f7a, 0x34f9a (delta 0x163b0) <-- swapped to use this one
    { L"AK C-R 3/7", 0x34f7a, 0x34f9a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14a50!
  // Match at 0x3363a, 0x3365a (delta 0x14a50)
  // Match at 0x34f9a, 0x34fba (delta 0x163b0) <-- swapped to use this one
    { L"AK C-R 4/7", 0x34f9a, 0x34fba, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14a70!
  // Match at 0x3367a, 0x3369a (delta 0x14a70)
  // Match at 0x34fba, 0x34fda (delta 0x163b0) <-- swapped to use this one
    { L"AK C-R 5/7", 0x34fba, 0x34fda, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14a90!
  // Match at 0x336ba, 0x336da (delta 0x14a90)
  // Match at 0x34fda, 0x34ffa (delta 0x163b0) <-- swapped to use this one
    { L"AK C-R 6/7", 0x34fda, 0x34ffa, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
// Warning: the remapped delta shifts from 0x163b0 to 0x14ab0!
  // Match at 0x336fa, 0x3371a (delta 0x14ab0)
  // Match at 0x34ffa, 0x3501a (delta 0x163b0) <-- swapped to use this one
    { L"AK C-R 7/7", 0x34ffa, 0x3501a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */

    { L"AK Select Portrait", 0x424fa, 0x4251a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"AK Win Portrait", 0x4987a, 0x4991a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },

    { L"AK Bees Win Pose", 0x3231a, 0x3233a, indexCPS2Sprites_Vamp_QBee, 0x03 }, /* Delta: 0x163b0 */
    { L"AK Tap K", 0x3385a, 0x3387a, indexCPS2Sprites_Vamp_QBee, 0x00 }, /* Delta: 0x163b0 */
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x1ad9a, 0x1adba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"LP Lin-Lin", 0x1adba, 0x1adda, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"LP Dust, Weapons", 0x1adda, 0x1adfa, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"LP Unknown Extra", 0x1adfa, 0x1ae1a },
    { L"LP Select Portrait", 0x4131a, 0x4133a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"LP Win Portrait", 0x433da, 0x4347a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1ae1a, 0x1ae3a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"MP Lin-Lin", 0x1ae3a, 0x1ae5a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"MP Dust, Weapons", 0x1ae5a, 0x1ae7a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"MP Unknown Extra", 0x1ae7a, 0x1ae9a },
    { L"MP Select Portrait", 0x4151a, 0x4153a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"MP Win Portrait", 0x43f1a, 0x43fba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x1ae9a, 0x1aeba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"HP Lin-Lin", 0x1aeba, 0x1aeda, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"HP Dust, Weapons", 0x1aeda, 0x1aefa, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"HP Unknown Extra", 0x1aefa, 0x1af1a },
    { L"HP Select Portrait", 0x4171a, 0x4173a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"HP Win Portrait", 0x44a5a, 0x44afa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1af1a, 0x1af3a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"LK Lin-Lin", 0x1af3a, 0x1af5a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"LK Dust, Weapons", 0x1af5a, 0x1af7a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"LK Unknown Extra", 0x1af7a, 0x1af9a },
    { L"LK Select Portrait", 0x4191a, 0x4193a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"LK Win Portrait", 0x4559a, 0x4563a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x1af9a, 0x1afba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"MK Lin-Lin", 0x1afba, 0x1afda, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"MK Dust, Weapons", 0x1afda, 0x1affa, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"MK Unknown Extra", 0x1affa, 0x1b01a },
    { L"MK Select Portrait", 0x41b1a, 0x41b3a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"MK Win Portrait", 0x460da, 0x4617a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1b01a, 0x1b03a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"HK Lin-Lin", 0x1b03a, 0x1b05a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"HK Dust, Weapons", 0x1b05a, 0x1b07a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"HK Unknown Extra", 0x1b07a, 0x1b09a },
    { L"HK Select Portrait", 0x41d1a, 0x41d3a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"HK Win Portrait", 0x46c1a, 0x46cba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x1b09a, 0x1b0ba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"PP Lin-Lin", 0x1b0ba, 0x1b0da, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"PP Dust, Weapons", 0x1b0da, 0x1b0fa, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"PP Unknown Extra", 0x1b0fa, 0x1b11a },
    { L"PP Select Portrait", 0x41f1a, 0x41f3a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"PP Win Portrait", 0x4775a, 0x477fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1b11a, 0x1b13a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"KK Lin-Lin", 0x1b13a, 0x1b15a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"KK Dust, Weapons", 0x1b15a, 0x1b17a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"KK Unknown Extra", 0x1b17a, 0x1b19a },
    { L"KK Select Portrait", 0x4211a, 0x4213a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"KK Win Portrait", 0x4829a, 0x4833a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x1b19a, 0x1b1ba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"AP Lin-Lin", 0x1b1ba, 0x1b1da, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"AP Dust, Weapons", 0x1b1da, 0x1b1fa, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"AP Unknown Extra", 0x1b1fa, 0x1b21a },
    { L"AP Select Portrait", 0x4231a, 0x4233a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"AP Win Portrait", 0x48dda, 0x48e7a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1b21a, 0x1b23a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"AK Lin-Lin", 0x1b23a, 0x1b25a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"AK Dust, Weapons", 0x1b25a, 0x1b27a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"AK Unknown Extra", 0x1b27a, 0x1b29a },
    { L"AK Select Portrait", 0x4251a, 0x4253a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"AK Win Portrait", 0x4991a, 0x499ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_SHARED[] =
{
    { L"Chuukada", 0x3593a, 0x3595a },
    { L"Fast Chuukada", 0x3595a, 0x3597a },
 };

///// real lilith

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x1b29a, 0x1b2ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"LP Hearts", 0x1b2ba, 0x1b2da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"LP Luminous Illusion/62KKK bats", 0x1b2da, 0x1b2fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"LP Sparkles", 0x1b2fa, 0x1b31a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"LP Select Portrait", 0x4133a, 0x4135a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"LP Win Portrait", 0x4347a, 0x4351a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1b31a, 0x1b33a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"MP Hearts", 0x1b33a, 0x1b35a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"MP Luminous Illusion/62KKK bats", 0x1b35a, 0x1b37a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"MP Sparkles", 0x1b37a, 0x1b39a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"MP Select Portrait", 0x4153a, 0x4155a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"MP Win Portrait", 0x43fba, 0x4405a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x1b39a, 0x1b3ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"HP Hearts", 0x1b3ba, 0x1b3da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"HP Luminous Illusion/62KKK bats", 0x1b3da, 0x1b3fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"HP Sparkles", 0x1b3fa, 0x1b41a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"HP Select Portrait", 0x4173a, 0x4175a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"HP Win Portrait", 0x44afa, 0x44b9a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1b41a, 0x1b43a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"LK Hearts", 0x1b43a, 0x1b45a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"LK Luminous Illusion/62KKK bats", 0x1b45a, 0x1b47a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"LK Sparkles", 0x1b47a, 0x1b49a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"LK Select Portrait", 0x4193a, 0x4195a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"LK Win Portrait", 0x4563a, 0x456da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x1b49a, 0x1b4ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"MK Hearts", 0x1b4ba, 0x1b4da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"MK Luminous Illusion/62KKK bats", 0x1b4da, 0x1b4fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"MK Sparkles", 0x1b4fa, 0x1b51a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"MK Select Portrait", 0x41b3a, 0x41b5a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"MK Win Portrait", 0x4617a, 0x4621a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1b51a, 0x1b53a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"HK Hearts", 0x1b53a, 0x1b55a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"HK Luminous Illusion/62KKK bats", 0x1b55a, 0x1b57a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"HK Sparkles", 0x1b57a, 0x1b59a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"HK Select Portrait", 0x41d3a, 0x41d5a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"HK Win Portrait", 0x46cba, 0x46d5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x1b59a, 0x1b5ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"PP Hearts", 0x1b5ba, 0x1b5da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"PP Luminous Illusion/62KKK bats", 0x1b5da, 0x1b5fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"PP Sparkles", 0x1b5fa, 0x1b61a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"PP Select Portrait", 0x41f3a, 0x41f5a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"PP Win Portrait", 0x477fa, 0x4789a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x1b61a, 0x1b63a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"KK Hearts", 0x1b63a, 0x1b65a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"KK Luminous Illusion/62KKK bats", 0x1b65a, 0x1b67a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"KK Sparkles", 0x1b67a, 0x1b69a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"KK Select Portrait", 0x4213a, 0x4215a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"KK Win Portrait", 0x4833a, 0x483da, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x1b69a, 0x1b6ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"AP Hearts", 0x1b6ba, 0x1b6da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"AP Luminous Illusion/62KKK bats", 0x1b6da, 0x1b6fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"AP Sparkles", 0x1b6fa, 0x1b71a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"AP Select Portrait", 0x4233a, 0x4235a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"AP Win Portrait", 0x48e7a, 0x48f1a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x1b71a, 0x1b73a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"AK Hearts", 0x1b73a, 0x1b75a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"AK Luminous Illusion/62KKK bats", 0x1b75a, 0x1b77a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"AK Sparkles", 0x1b77a, 0x1b79a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"AK Select Portrait", 0x4253a, 0x4255a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"AK Win Portrait", 0x499ba, 0x49a5a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_SHARED[] =
{
    { L"Taunt", 0x3597a, 0x3599a, indexCPS2Sprites_Vamp_Lilith, 0x04 },
    { L"Text & Sign", 0x359ba, 0x359da },
    { L"Curtains", 0x359da, 0x359fa, indexCPS2Sprites_VSAV1_Bonus, 0x0a },
    { L"Stage 1/4", 0x3599a, 0x359ba, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
    { L"Stage 2/4", 0x359fa, 0x35a1a, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
    { L"Stage 3/4", 0x35a1a, 0x35a3a, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
    { L"Stage 4/4", 0x35a3a, 0x35a5a, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x1b79a, 0x1b7ba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LP Prova di Servo", 0x1b7ba, 0x1b7da, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x1b7da, 0x1b7fa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"LP Intro", 0x1b7fa, 0x1b81a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"LP Select Portrait", 0x4135a, 0x4137a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"LP Win Portrait", 0x4351a, 0x435ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x1b81a, 0x1b83a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MP Prova di Servo", 0x1b83a, 0x1b85a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x1b85a, 0x1b87a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"MP Intro", 0x1b87a, 0x1b89a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"MP Select Portrait", 0x4155a, 0x4157a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"MP Win Portrait", 0x4405a, 0x440fa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x1b89a, 0x1b8ba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HP Prova di Servo", 0x1b8ba, 0x1b8da, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x1b8da, 0x1b8fa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"HP Intro", 0x1b8fa, 0x1b91a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"HP Select Portrait", 0x4175a, 0x4177a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"HP Win Portrait", 0x44b9a, 0x44c3a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LK[] =
{
    { L"LK Jedah", 0x1b91a, 0x1b93a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LK Prova di Servo", 0x1b93a, 0x1b95a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x1b95a, 0x1b97a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"LK Intro", 0x1b97a, 0x1b99a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"LK Select Portrait", 0x4195a, 0x4197a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"LK Win Portrait", 0x456da, 0x4577a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x1b99a, 0x1b9ba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MK Prova di Servo", 0x1b9ba, 0x1b9da, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x1b9da, 0x1b9fa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"MK Intro", 0x1b9fa, 0x1ba1a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"MK Select Portrait", 0x41b5a, 0x41b7a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"MK Win Portrait", 0x4621a, 0x462ba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x1ba1a, 0x1ba3a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HK Prova di Servo", 0x1ba3a, 0x1ba5a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x1ba5a, 0x1ba7a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"HK Intro", 0x1ba7a, 0x1ba9a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"HK Select Portrait", 0x41d5a, 0x41d7a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"HK Win Portrait", 0x46d5a, 0x46dfa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x1ba9a, 0x1baba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"PP Prova di Servo", 0x1baba, 0x1bada, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x1bada, 0x1bafa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"PP Intro", 0x1bafa, 0x1bb1a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"PP Select Portrait", 0x41f5a, 0x41f7a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"PP Win Portrait", 0x4789a, 0x4793a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x1bb1a, 0x1bb3a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"KK Prova di Servo", 0x1bb3a, 0x1bb5a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x1bb5a, 0x1bb7a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"KK Intro", 0x1bb7a, 0x1bb9a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"KK Select Portrait", 0x4215a, 0x4217a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"KK Win Portrait", 0x483da, 0x4847a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x1bb9a, 0x1bbba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AP Prova di Servo", 0x1bbba, 0x1bbda, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x1bbda, 0x1bbfa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1bbfa, 0x1bc1a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"AP Select Portrait", 0x4235a, 0x4237a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"AP Win Portrait", 0x48f1a, 0x48fba, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1bc1a, 0x1bc3a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AK Prova di Servo", 0x1bc3a, 0x1bc5a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1bc5a, 0x1bc7a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1bc7a, 0x1bc9a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"AK Select Portrait", 0x4255a, 0x4257a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"AK Win Portrait", 0x49a5a, 0x49afa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_SHARED[] =
{
    { L"Shared blood",           0x35a9a, 0x35aba, indexCPS2Sprites_Vamp_Jedah, 0x01 },
    { L"Shared blood 2",         0x35aba, 0x35ada, indexCPS2Sprites_Vamp_Jedah, 0x01 },
    { L"Shared Prova di Servo", 0x35ada, 0x35afa, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"Shared Prova di Servo 2", 0x35afa, 0x35b1a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LP[] =
{
    { L"LP Phobos",          0x1bc9a, 0x1bcba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"LP Unknown Extra 1", 0x1bcba, 0x1bcda },
    { L"LP Unknown Extra 2", 0x1bcda, 0x1bcfa },
    { L"LP Cecil",           0x1bcfa, 0x1bd1a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"LP Phobos Select Portrait", 0x412da, 0x412fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MP[] =
{
    { L"MP Phobos",          0x1bd1a, 0x1bd3a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"MP Unknown Extra 1", 0x1bd3a, 0x1bd5a },
    { L"MP Unknown Extra 2", 0x1bd5a, 0x1bd7a },
    { L"MP Cecil",           0x1bd7a, 0x1bd9a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"MP Phobos Select Portrait", 0x414da, 0x414fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HP[] =
{
    { L"HP Phobos",          0x1bd9a, 0x1bdba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"HP Unknown Extra 1", 0x1bdba, 0x1bdda },
    { L"HP Unknown Extra 2", 0x1bdda, 0x1bdfa },
    { L"HP Cecil",           0x1bdfa, 0x1be1a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"HP Phobos Select Portrait", 0x416da, 0x416fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LK[] =
{
    { L"LK Phobos",          0x1be1a, 0x1be3a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"LK Unknown Extra 1", 0x1be3a, 0x1be5a },
    { L"LK Unknown Extra 2", 0x1be5a, 0x1be7a },
    { L"LK Cecil",           0x1be7a, 0x1be9a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"LK Phobos Select Portrait", 0x418da, 0x418fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MK[] =
{
    { L"MK Phobos",          0x1be9a, 0x1beba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"MK Unknown Extra 1", 0x1beba, 0x1beda },
    { L"MK Unknown Extra 2", 0x1beda, 0x1befa },
    { L"MK Cecil",           0x1befa, 0x1bf1a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"MK Phobos Select Portrait", 0x41ada, 0x41afa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HK[] =
{
    { L"HK Phobos",          0x1bf1a, 0x1bf3a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"HK Unknown Extra 1", 0x1bf3a, 0x1bf5a },
    { L"HK Unknown Extra 2", 0x1bf5a, 0x1bf7a },
    { L"HK Cecil",           0x1bf7a, 0x1bf9a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"HK Phobos Select Portrait", 0x41cda, 0x41cfa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_PP[] =
{
    { L"PP Phobos",          0x1bf9a, 0x1bfba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"PP Unknown Extra 1", 0x1bfba, 0x1bfda },
    { L"PP Unknown Extra 2", 0x1bfda, 0x1bffa },
    { L"PP Cecil",           0x1bffa, 0x1c01a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"PP Phobos Select Portrait", 0x41eda, 0x41efa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_KK[] =
{
    { L"KK Phobos",          0x1c01a, 0x1c03a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"KK Unknown Extra 1", 0x1c03a, 0x1c05a },
    { L"KK Unknown Extra 2", 0x1c05a, 0x1c07a },
    { L"KK Cecil",           0x1c07a, 0x1c09a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"KK Phobos Select Portrait", 0x420da, 0x420fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AP[] =
{
    { L"AP Phobos",          0x1c09a, 0x1c0ba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"AP Unknown Extra 1", 0x1c0ba, 0x1c0da },
    { L"AP Unknown Extra 2", 0x1c0da, 0x1c0fa },
    { L"AP Cecil",           0x1c0fa, 0x1c11a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"AP Phobos Select Portrait", 0x422da, 0x422fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AK[] =
{
    { L"AK Phobos",          0x1c11a, 0x1c13a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"AK Unknown Extra 1", 0x1c13a, 0x1c15a },
    { L"AK Unknown Extra 2", 0x1c15a, 0x1c17a },
    { L"AK Cecil",           0x1c17a, 0x1c19a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
    { L"AK Phobos Select Portrait", 0x424da, 0x424fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LP[] =
{
    { L"LP Pyron",           0x1c19a, 0x1c1ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"LP Unknown Extra 1", 0x1c1ba, 0x1c1da },
    { L"LP Unknown Extra 2", 0x1c1da, 0x1c1fa },
    { L"LP Unknown Extra 3", 0x1c1fa, 0x1c21a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"LP Pyron Select Portrait", 0x428fa, 0x4291A, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MP[] =
{
    { L"MP Pyron",           0x1c21a, 0x1c23a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"MP Unknown Extra 1", 0x1c23a, 0x1c25a },
    { L"MP Unknown Extra 2", 0x1c25a, 0x1c27a },
    { L"MP Unknown Extra 3", 0x1c27a, 0x1c29a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"MP Pyron Select Portrait", 0x4291a, 0x4293A, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HP[] =
{
    { L"HP Pyron",           0x1c29a, 0x1c2ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"HP Unknown Extra 1", 0x1c2ba, 0x1c2da },
    { L"HP Unknown Extra 2", 0x1c2da, 0x1c2fa },
    { L"HP Unknown Extra 3", 0x1c2fa, 0x1c31a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"HP Pyron Select Portrait", 0x4293a, 0x4295A, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LK[] =
{
    { L"LK Pyron",           0x1c31a, 0x1c33a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"LK Unknown Extra 1", 0x1c33a, 0x1c35a },
    { L"LK Unknown Extra 2", 0x1c35a, 0x1c37a },
    { L"LK Unknown Extra 3", 0x1c37a, 0x1c39a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"LK Pyron Select Portrait", 0x4295a, 0x4297A, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MK[] =
{
    { L"MK Pyron",           0x1c39a, 0x1c3ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"MK Unknown Extra 1", 0x1c3ba, 0x1c3da },
    { L"MK Unknown Extra 2", 0x1c3da, 0x1c3fa },
    { L"MK Unknown Extra 3", 0x1c3fa, 0x1c41a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"MK Pyron Select Portrait", 0x4297a, 0x4299A, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HK[] =
{
    { L"HK Pyron",           0x1c41a, 0x1c43a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"HK Unknown Extra 1", 0x1c43a, 0x1c45a },
    { L"HK Unknown Extra 2", 0x1c45a, 0x1c47a },
    { L"HK Unknown Extra 3", 0x1c47a, 0x1c49a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"HK Pyron Select Portrait", 0x4299a, 0x429BA, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_PP[] =
{
    { L"PP Pyron",           0x1c49a, 0x1c4ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"PP Unknown Extra 1", 0x1c4ba, 0x1c4da },
    { L"PP Unknown Extra 2", 0x1c4da, 0x1c4fa },
    { L"PP Unknown Extra 3", 0x1c4fa, 0x1c51a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"PP Pyron Select Portrait", 0x429Ba, 0x429DA, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_KK[] =
{
    { L"KK Pyron",           0x1c51a, 0x1c53a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"KK Unknown Extra 1", 0x1c53a, 0x1c55a },
    { L"KK Unknown Extra 2", 0x1c55a, 0x1c57a },
    { L"KK Unknown Extra 3", 0x1c57a, 0x1c59a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"KK Pyron Select Portrait", 0x429Da, 0x429FA, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AP[] =
{
    { L"AP Pyron",           0x1c59a, 0x1c5ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"AP Unknown Extra 1", 0x1c5ba, 0x1c5da },
    { L"AP Unknown Extra 2", 0x1c5da, 0x1c5fa },
    { L"AP Unknown Extra 3", 0x1c5fa, 0x1c61a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"AP Pyron Select Portrait", 0x429Fa, 0x42A1A, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AK[] =
{
    { L"AK Pyron",           0x1c61a, 0x1c63a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"AK Unknown Extra 1", 0x1c63a, 0x1c65a },
    { L"AK Unknown Extra 2", 0x1c65a, 0x1c67a },
    { L"AK Unknown Extra 3", 0x1c67a, 0x1c69a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"AK Pyron Select Portrait", 0x42A1a, 0x42A3A, indexCPS2Sprites_Vamp_Pyron, 0x20 },
 };

// portraits / dark effects

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LP[] =
{
    { L"LP Dark Gallon", 0x1C69a, 0x1c1ba + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"LP Intro/Outro", 0x1c1ba + 0x500, 0x1c1da + 0x500 },
    { L"LP 236P/41236KK/j.HP", 0x1c1da + 0x500, 0x1c1fa + 0x500 },
    { L"LP 236P/28K/Outro Flash", 0x1c1fa + 0x500, 0x1c21a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MP[] =
{
    { L"MP Dark Gallon", 0x1c21a + 0x500, 0x1c23a + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"MP Intro/Outro", 0x1c23a + 0x500, 0x1c25a + 0x500 },
    { L"MP 236P/41236KK/j.HP", 0x1c25a + 0x500, 0x1c27a + 0x500 },
    { L"MP 236P/28K/Outro Flash", 0x1c27a + 0x500, 0x1c29a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HP[] =
{
    { L"HP Dark Gallon", 0x1c29a + 0x500, 0x1c2ba + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"HP Intro/Outro", 0x1c2ba + 0x500, 0x1c2da + 0x500 },
    { L"HP 236P/41236KK/j.HP", 0x1c2da + 0x500, 0x1c2fa + 0x500 },
    { L"HP 236P/28K/Outro Flash", 0x1c2fa + 0x500, 0x1c31a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LK[] =
{
    { L"LK Dark Gallon", 0x1c31a + 0x500, 0x1c33a + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"LK Intro/Outro", 0x1c33a + 0x500, 0x1c35a + 0x500 },
    { L"LK 236P/41236KK/j.HP", 0x1c35a + 0x500, 0x1c37a + 0x500 },
    { L"LK 236P/28K/Outro Flash", 0x1c37a + 0x500, 0x1c39a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MK[] =
{
    { L"MK Dark Gallon", 0x1c39a + 0x500, 0x1c3ba + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"MK Intro/Outro", 0x1c3ba + 0x500, 0x1c3da + 0x500 },
    { L"MK 236P/41236KK/j.HP", 0x1c3da + 0x500, 0x1c3fa + 0x500 },
    { L"MK 236P/28K/Outro Flash", 0x1c3fa + 0x500, 0x1c41a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HK[] =
{
    { L"HK Dark Gallon", 0x1c41a + 0x500, 0x1c43a + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"HK Intro/Outro", 0x1c43a + 0x500, 0x1c45a + 0x500 },
    { L"HK 236P/41236KK/j.HP", 0x1c45a + 0x500, 0x1c47a + 0x500 },
    { L"HK 236P/28K/Outro Flash", 0x1c47a + 0x500, 0x1c49a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_PP[] =
{
    { L"PP Dark Gallon", 0x1c49a + 0x500, 0x1c4ba + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"PP Intro/Outro", 0x1c4ba + 0x500, 0x1c4da + 0x500 },
    { L"PP 236P/41236KK/j.HP", 0x1c4da + 0x500, 0x1c4fa + 0x500 },
    { L"PP 236P/28K/Outro Flash", 0x1c4fa + 0x500, 0x1c51a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_KK[] =
{
    { L"KK Dark Gallon", 0x1c51a + 0x500, 0x1c53a + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"KK Intro/Outro", 0x1c53a + 0x500, 0x1c55a + 0x500 },
    { L"KK 236P/41236KK/j.HP", 0x1c55a + 0x500, 0x1c57a + 0x500 },
    { L"KK 236P/28K/Outro Flash", 0x1c57a + 0x500, 0x1c59a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AP[] =
{
    { L"AP Dark Gallon", 0x1c59a + 0x500, 0x1c5ba + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"AP Intro/Outro", 0x1c5ba + 0x500, 0x1c5da + 0x500 },
    { L"AP 236P/41236KK/j.HP", 0x1c5da + 0x500, 0x1c5fa + 0x500 },
    { L"AP 236P/28K/Outro Flash", 0x1c5fa + 0x500, 0x1c61a + 0x500 },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AK[] =
{
    { L"AK Dark Gallon", 0x1c61a + 0x500, 0x1c63a + 0x500, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"AK Intro/Outro", 0x1c63a + 0x500, 0x1c65a + 0x500 },
    { L"AK 236P/41236KK/j.HP", 0x1c65a + 0x500, 0x1c67a + 0x500 },
    { L"AK 236P/28K/Outro Flash", 0x1c67a + 0x500, 0x1CB9a },
 };

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_SELECT[] =
{
    // These aren't per-button
    { L"P1 Dark Gallon Select Portrait", 0x428ba, 0x428da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"P2 Dark Gallon Select Portrait", 0x428da, 0x428fa, indexCPS2Sprites_Vamp_Gallon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LP[] =
{
    //bugbug: portraits maybe at 0x3649a or 3b61a  3bafa
    { L"LP Donovan",         0x1cb9a, 0x1cbba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LP Unknown Extra",   0x1cbba, 0x1cbda },
    { L"LP Weapons",         0x1cbda, 0x1cbfa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"LP Anita",           0x1cbfa, 0x1cc1a, indexCPS2Sprites_Anita, 0 },
    { L"LP Donovan Select Portrait", 0x42a3a, 0x42A5A, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MP[] =
{
    { L"MP Donovan",         0x1cc1a, 0x1cc3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MP Unknown Extra",   0x1cc3a, 0x1cc5a },
    { L"MP Weapons",         0x1cc5a, 0x1cc7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"MP Anita",           0x1cc7a, 0x1cc9a, indexCPS2Sprites_Anita, 0 },
    { L"MP Donovan Select Portrait", 0x42A5a, 0x42A7A, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HP[] =
{
    { L"HP Donovan",         0x1cc9a, 0x1ccba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HP Unknown Extra",   0x1ccba, 0x1ccda },
    { L"HP Weapons",         0x1ccda, 0x1ccfa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"HP Anita",           0x1ccfa, 0x1cd1a, indexCPS2Sprites_Anita, 0 },
    { L"HP Donovan Select Portrait", 0x42A7a, 0x42A9A, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LK[] =
{
    { L"LK Donovan",         0x1cd1a, 0x1cd3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LK Unknown Extra",   0x1cd3a, 0x1cd5a },
    { L"LK Weapons",         0x1cd5a, 0x1cd7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"LK Anita",           0x1cd7a, 0x1cd9a, indexCPS2Sprites_Anita, 0 },
    { L"LK Donovan Select Portrait", 0x42A9a, 0x42ABA, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MK[] =
{
    { L"MK Donovan",         0x1cd9a, 0x1cdba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MK Unknown Extra",   0x1cdba, 0x1cdda },
    { L"MK Weapons",         0x1cdda, 0x1cdfa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"MK Anita",           0x1cdfa, 0x1ce1a, indexCPS2Sprites_Anita, 0 },
    { L"MK Donovan Select Portrait", 0x42ABa, 0x42ADA, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HK[] =
{
    { L"HK Donovan",         0x1ce1a, 0x1ce3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HK Unknown Extra",   0x1ce3a, 0x1ce5a },
    { L"HK Weapons",         0x1ce5a, 0x1ce7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"HK Anita",           0x1ce7a, 0x1ce9a, indexCPS2Sprites_Anita, 0 },
    { L"HK Donovan Select Portrait", 0x42ADa, 0x42AFA, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_PP[] =
{
    { L"PP Donovan",         0x1ce9a, 0x1ceba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"PP Unknown Extra",   0x1ceba, 0x1ceda },
    { L"PP Weapons",         0x1ceda, 0x1cefa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"PP Anita",           0x1cefa, 0x1cf1a, indexCPS2Sprites_Anita, 0 },
    { L"PP Donovan Select Portrait", 0x42AFa, 0x42B1A, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_KK[] =
{
    { L"KK Donovan",         0x1cf1a, 0x1cf3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"KK Unknown Extra",   0x1cf3a, 0x1cf5a },
    { L"KK Weapons",         0x1cf5a, 0x1cf7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"KK Anita",           0x1cf7a, 0x1cf9a, indexCPS2Sprites_Anita, 0 },
    { L"KK Donovan Select Portrait", 0x42B1a, 0x42B3A, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AP[] =
{
    { L"AP Donovan",         0x1cf9a, 0x1cfba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AP Unknown Extra",   0x1cfba, 0x1cfda },
    { L"AP Weapons",         0x1cfda, 0x1cffa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"AP Anita",           0x1cffa, 0x1d01a, indexCPS2Sprites_Anita, 0 },
    { L"AP Donovan Select Portrait", 0x42B3a, 0x42B5A, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AK[] =
{
    { L"AK Donovan",         0x1d01a, 0x1d03a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AK Unknown Extra",   0x1d03a, 0x1d05a },
    { L"AK Weapons",         0x1d05a, 0x1d07a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"AK Anita",           0x1d07a, 0x1d09a, indexCPS2Sprites_Anita, 0 },
    { L"AK Donovan Select Portrait", 0x42B5a, 0x42B7A, indexCPS2Sprites_Vamp_Donovan, 0x20 },
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
    { L"LP Oboro Bishamon",    0x1c59a + 0x1000, 0x1c5ba + 0x1000, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LP Intro", 0x1c5ba + 0x1000, 0x1c5da + 0x1000, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x1c5da + 0x1000, 0x1c5fa + 0x1000, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LP Unknown Extra", 0x1c5fa + 0x1000, 0x1c61a + 0x1000 },
    { L"LP Oboro Bishamon Select Portrait", 0x4277a, 0x4279A, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon",    0x1c61a + 0x1000, 0x1c63a + 0x1000, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MP Intro", 0x1c63a + 0x1000, 0x1c65a + 0x1000, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1c65a + 0x1000, 0x1c67a + 0x1000, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"MP Unknown Extra", 0x1c67a + 0x1000, 0x1c69a + 0x1000 },
    { L"MP Oboro Bishamon Select Portrait", 0x4279a, 0x427BA, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon",     0x1c19a + 0x1500, 0x1c1ba + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HP Intro", 0x1c1ba + 0x1500, 0x1c1da + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x1c1da + 0x1500, 0x1c1fa + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HP Unknown Extra", 0x1c1fa + 0x1500, 0x1c21a + 0x1500 },
    { L"HP Oboro Bishamon Select Portrait", 0x427Ba, 0x427DA, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon",     0x1c21a + 0x1500, 0x1c23a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LK Intro", 0x1c23a + 0x1500, 0x1c25a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1c25a + 0x1500, 0x1c27a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LK Unknown Extra", 0x1c27a + 0x1500, 0x1c29a + 0x1500 },
    { L"LK Oboro Bishamon Select Portrait", 0x427Da, 0x427FA, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon",     0x1c29a + 0x1500, 0x1c2ba + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MK Intro", 0x1c2ba + 0x1500, 0x1c2da + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x1c2da + 0x1500, 0x1c2fa + 0x1500 },
    { L"MK Unknown Extra", 0x1c2fa + 0x1500, 0x1c31a + 0x1500 },
    { L"MK Oboro Bishamon Select Portrait", 0x427Fa, 0x4281A, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon",     0x1c31a + 0x1500, 0x1c33a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HK Intro", 0x1c33a + 0x1500, 0x1c35a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1c35a + 0x1500, 0x1c37a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HK Unknown Extra", 0x1c37a + 0x1500, 0x1c39a + 0x1500 },
    { L"HK Oboro Bishamon Select Portrait", 0x4281a, 0x4283A, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon",     0x1c39a + 0x1500, 0x1c3ba + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"PP Intro", 0x1c3ba + 0x1500, 0x1c3da + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x1c3da + 0x1500, 0x1c3fa + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"PP Unknown Extra", 0x1c3fa + 0x1500, 0x1c41a + 0x1500 },
    { L"PP Oboro Bishamon Select Portrait", 0x4283a, 0x4285A, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon",     0x1c41a + 0x1500, 0x1c43a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"KK Intro", 0x1c43a + 0x1500, 0x1c45a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1c45a + 0x1500, 0x1c47a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"KK Unknown Extra", 0x1c47a + 0x1500, 0x1c49a + 0x1500 },
    { L"KK Oboro Bishamon Select Portrait", 0x4285a, 0x4287A, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon",     0x1c49a + 0x1500, 0x1c4ba + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AP Intro", 0x1c4ba + 0x1500, 0x1c4da + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x1c4da + 0x1500, 0x1c4fa + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AP Unknown Extra", 0x1c4fa + 0x1500, 0x1c51a + 0x1500 },
    { L"AP Oboro Bishamon Select Portrait", 0x4287a, 0x4289A, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon",      0x1DA1a, 0x1c53a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AK Intro",               0x1c53a + 0x1500, 0x1c55a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks",    0x1c55a + 0x1500, 0x1c57a + 0x1500, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AK Unknown Extra",       0x1c57a + 0x1500, 0x1DA9a },
    { L"AK Oboro Bishamon Select Portrait", 0x4289a, 0x428BA, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_ENDING_PALETTES_PORTRAITS[] =
{
    { L"Bulleta Portrait",    0x4257a, 0x4259a, indexCPS2Sprites_BBHood, 0x20 },
    { L"Demitri Portrait",    0x4259a, 0x425ba, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"Gallon Portrait",     0x425ba, 0x425da, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"Victor Portrait",     0x425da, 0x425fa, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"Zabel Portrait",      0x425fa, 0x4261a, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"Morrigan Portrait",   0x4261a, 0x4263a, indexCPS2Sprites_Morrigan, 0x20 },
    { L"Anakaris Portrait",   0x4263a, 0x4265a, indexCPS2Sprites_Anakaris, 0x20 },
    { L"Felicia Portrait",    0x4265a, 0x4267a, indexCPS2Sprites_Felicia, 0x20 },
    { L"Bishamon Portrait",   0x4267a, 0x4269a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"Aulbath Portrait",    0x4269a, 0x426ba, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"Sasquatch Portrait",  0x426ba, 0x426da, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"Phobos Portrait",     0x426da, 0x426fa, indexCPS2Sprites_Vamp_Phobos, 0x20 },
    { L"Q-Bee Portrait",      0x426fa, 0x4271a, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"Lei-Lei Portrait",    0x4271a, 0x4273a, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"Lilith Portrait",     0x4273a, 0x4275a, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"Jedah Portrait",      0x4275a, 0x4277a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"Pyron Portrait",      0x42b7a, 0x42b9a, indexCPS2Sprites_Vamp_Pyron, 0x20 },
    { L"Donovan Portrait",    0x42b9a, 0x42bba, indexCPS2Sprites_Vamp_Donovan, 0x20 },
 };

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_SPECIAL[] =
{
    { L"Bulleta LP Poisoned",        0x1DA9a + (0 * 0x20), 0x1DABa + (0 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MP Poisoned",        0x1DA9a + (1 * 0x20), 0x1DABa + (1 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HP Poisoned",        0x1DA9a + (2 * 0x20), 0x1DABa + (2 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LK Poisoned",        0x1DA9a + (3 * 0x20), 0x1DABa + (3 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MK Poisoned",        0x1DA9a + (4 * 0x20), 0x1DABa + (4 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HK Poisoned",        0x1DA9a + (5 * 0x20), 0x1DABa + (5 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta PP Poisoned",        0x1DA9a + (6 * 0x20), 0x1DABa + (6 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta KK Poisoned",        0x1DA9a + (7 * 0x20), 0x1DABa + (7 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AP Poisoned",        0x1DA9a + (8 * 0x20), 0x1DABa + (8 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AK Poisoned",        0x1DA9a + (9 * 0x20), 0x1DABa + (9 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LP Zapped",          0x1DA9a + (10 * 0x20), 0x1DABa + (10 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta MP Zapped",          0x1DA9a + (11 * 0x20), 0x1DABa + (11 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta HP Zapped",          0x1DA9a + (12 * 0x20), 0x1DABa + (12 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta LK Zapped",          0x1DA9a + (13 * 0x20), 0x1DABa + (13 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta MK Zapped",          0x1DA9a + (14 * 0x20), 0x1DABa + (14 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta HK Zapped",          0x1DA9a + (15 * 0x20), 0x1DABa + (15 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta PP Zapped",          0x1DA9a + (16 * 0x20), 0x1DABa + (16 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta KK Zapped",          0x1DA9a + (17 * 0x20), 0x1DABa + (17 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta AP Zapped",          0x1DA9a + (18 * 0x20), 0x1DABa + (18 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta AK Zapped",          0x1DA9a + (19 * 0x20), 0x1DABa + (19 * 0x20), indexCPS2Sprites_BBHood, 0x10 },
    { L"Bulleta LP Burned",          0x1DA9a + (20 * 0x20), 0x1DABa + (20 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MP Burned",          0x1DA9a + (21 * 0x20), 0x1DABa + (21 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HP Burned",          0x1DA9a + (22 * 0x20), 0x1DABa + (22 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LK Burned",          0x1DA9a + (23 * 0x20), 0x1DABa + (23 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MK Burned",          0x1DA9a + (24 * 0x20), 0x1DABa + (24 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HK Burned",          0x1DA9a + (25 * 0x20), 0x1DABa + (25 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta PP Burned",          0x1DA9a + (26 * 0x20), 0x1DABa + (26 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta KK Burned",          0x1DA9a + (27 * 0x20), 0x1DABa + (27 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AP Burned",          0x1DA9a + (28 * 0x20), 0x1DABa + (28 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AK Burned",          0x1DA9a + (29 * 0x20), 0x1DABa + (29 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LP Pharaoh's Curse", 0x1DA9a + (30 * 0x20), 0x1DABa + (30 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta MP Pharaoh's Curse", 0x1DA9a + (31 * 0x20), 0x1DABa + (31 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta HP Pharaoh's Curse", 0x1DA9a + (32 * 0x20), 0x1DABa + (32 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta LK Pharaoh's Curse", 0x1DA9a + (33 * 0x20), 0x1DABa + (33 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta MK Pharaoh's Curse", 0x1DA9a + (34 * 0x20), 0x1DABa + (34 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta HK Pharaoh's Curse", 0x1DA9a + (35 * 0x20), 0x1DABa + (35 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta PP Pharaoh's Curse", 0x1DA9a + (36 * 0x20), 0x1DABa + (36 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta KK Pharaoh's Curse", 0x1DA9a + (37 * 0x20), 0x1DABa + (37 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta AP Pharaoh's Curse", 0x1DA9a + (38 * 0x20), 0x1DABa + (38 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta AK Pharaoh's Curse", 0x1DA9a + (39 * 0x20), 0x1DABa + (39 * 0x20), indexCPS2Sprites_BBHood, 0x0c },
    { L"Bulleta ES 1",               0x1DA9a + (40 * 0x20), 0x1DABa + (40 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta ES 2",               0x1DA9a + (41 * 0x20), 0x1DABa + (41 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta ES 3",               0x1DA9a + (42 * 0x20), 0x1DABa + (42 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta ES 4",               0x1DA9a + (43 * 0x20), 0x1DABa + (43 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 1",               0x1DA9a + (44 * 0x20), 0x1DABa + (44 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 2",               0x1DA9a + (45 * 0x20), 0x1DABa + (45 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 3",               0x1DA9a + (46 * 0x20), 0x1DABa + (46 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 4",               0x1DA9a + (47 * 0x20), 0x1DABa + (47 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 5",               0x1DA9a + (48 * 0x20), 0x1DABa + (48 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 6",               0x1DA9a + (49 * 0x20), 0x1DABa + (49 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 7",               0x1DA9a + (50 * 0x20), 0x1DABa + (50 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta EX 8",               0x1DA9a + (51 * 0x20), 0x1DABa + (51 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta Prova di Servo",     0x1DA9a + (52 * 0x20), 0x1DABa + (52 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta Finale Rosso",       0x1DA9a + (53 * 0x20), 0x1DABa + (53 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta Stone",              0x1DA9a + (54 * 0x20), 0x1DABa + (54 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LP Midnight Bliss",  0x1DA9a + (55 * 0x20), 0x1DABa + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta MP Midnight Bliss",  0x1DA9a + (56 * 0x20), 0x1DABa + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta HP Midnight Bliss",  0x1DA9a + (57 * 0x20), 0x1DABa + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta LK Midnight Bliss",  0x1DA9a + (58 * 0x20), 0x1DABa + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta MK Midnight Bliss",  0x1DA9a + (59 * 0x20), 0x1DABa + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta HK Midnight Bliss",  0x1DA9a + (60 * 0x20), 0x1DABa + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta PP Midnight Bliss",  0x1DA9a + (61 * 0x20), 0x1DABa + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta KK Midnight Bliss",  0x1DA9a + (62 * 0x20), 0x1DABa + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta AP Midnight Bliss",  0x1DA9a + (63 * 0x20), 0x1DABa + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta AK Midnight Bliss",  0x1DA9a + (64 * 0x20), 0x1DABa + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"Bulleta Q-Bee's QJ Honey",   0x1DA9a + (65 * 0x20), 0x1DABa + (65 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LP Dark Force 1",    0x1DA9a + (66 * 0x20), 0x1DABa + (66 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LP Dark Force 2",    0x1DA9a + (67 * 0x20), 0x1DABa + (67 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LP Dark Force 3",    0x1DA9a + (68 * 0x20), 0x1DABa + (68 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LP Dark Force 4",    0x1DA9a + (69 * 0x20), 0x1DABa + (69 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MP Dark Force 1",    0x1DA9a + (70 * 0x20), 0x1DABa + (70 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MP Dark Force 2",    0x1DA9a + (71 * 0x20), 0x1DABa + (71 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MP Dark Force 3",    0x1DA9a + (72 * 0x20), 0x1DABa + (72 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MP Dark Force 4",    0x1DA9a + (73 * 0x20), 0x1DABa + (73 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HP Dark Force 1",    0x1DA9a + (74 * 0x20), 0x1DABa + (74 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HP Dark Force 2",    0x1DA9a + (75 * 0x20), 0x1DABa + (75 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HP Dark Force 3",    0x1DA9a + (76 * 0x20), 0x1DABa + (76 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HP Dark Force 4",    0x1DA9a + (77 * 0x20), 0x1DABa + (77 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LK Dark Force 1",    0x1DA9a + (78 * 0x20), 0x1DABa + (78 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LK Dark Force 2",    0x1DA9a + (79 * 0x20), 0x1DABa + (79 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LK Dark Force 3",    0x1DA9a + (80 * 0x20), 0x1DABa + (80 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta LK Dark Force 4",    0x1DA9a + (81 * 0x20), 0x1DABa + (81 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MK Dark Force 1",    0x1DA9a + (82 * 0x20), 0x1DABa + (82 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MK Dark Force 2",    0x1DA9a + (83 * 0x20), 0x1DABa + (83 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MK Dark Force 3",    0x1DA9a + (84 * 0x20), 0x1DABa + (84 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta MK Dark Force 4",    0x1DA9a + (85 * 0x20), 0x1DABa + (85 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HK Dark Force 1",    0x1DA9a + (86 * 0x20), 0x1DABa + (86 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HK Dark Force 2",    0x1DA9a + (87 * 0x20), 0x1DABa + (87 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HK Dark Force 3",    0x1DA9a + (88 * 0x20), 0x1DABa + (88 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta HK Dark Force 4",    0x1DA9a + (89 * 0x20), 0x1DABa + (89 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta PP Dark Force 1",    0x1DA9a + (90 * 0x20), 0x1DABa + (90 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta PP Dark Force 2",    0x1DA9a + (91 * 0x20), 0x1DABa + (91 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta PP Dark Force 3",    0x1DA9a + (92 * 0x20), 0x1DABa + (92 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta PP Dark Force 4",    0x1DA9a + (93 * 0x20), 0x1DABa + (93 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta KK Dark Force 1",    0x1DA9a + (94 * 0x20), 0x1DABa + (94 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta KK Dark Force 2",    0x1DA9a + (95 * 0x20), 0x1DABa + (95 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta KK Dark Force 3",    0x1DA9a + (96 * 0x20), 0x1DABa + (96 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta KK Dark Force 4",    0x1DA9a + (97 * 0x20), 0x1DABa + (97 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AP Dark Force 1",    0x1DA9a + (98 * 0x20), 0x1DABa + (98 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AP Dark Force 2",    0x1DA9a + (99 * 0x20), 0x1DABa + (99 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AP Dark Force 3",    0x1DA9a + (100 * 0x20), 0x1DABa + (100 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AP Dark Force 4",    0x1DA9a + (101 * 0x20), 0x1DABa + (101 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AK Dark Force 1",    0x1DA9a + (102 * 0x20), 0x1DABa + (102 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AK Dark Force 2",    0x1DA9a + (103 * 0x20), 0x1DABa + (103 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AK Dark Force 3",    0x1DA9a + (104 * 0x20), 0x1DABa + (104 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta AK Dark Force 4",    0x1DA9a + (105 * 0x20), 0x1DABa + (105 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta ??? 1",              0x1DA9a + (106 * 0x20), 0x1DABa + (106 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta ??? 2",              0x1DA9a + (107 * 0x20), 0x1DABa + (107 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta ??? 3",              0x1DA9a + (108 * 0x20), 0x1DABa + (108 * 0x20), indexCPS2Sprites_BBHood },
    { L"Bulleta ??? 4",              0x1DA9a + (109 * 0x20), 0x1DABa + (109 * 0x20), indexCPS2Sprites_BBHood },
 };

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_SPECIAL[] =
{
    { L"Demitri LP Poisoned",        0x1e85a + (0 * 0x20), 0x1e87a + (0 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MP Poisoned",        0x1e85a + (1 * 0x20), 0x1e87a + (1 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HP Poisoned",        0x1e85a + (2 * 0x20), 0x1e87a + (2 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LK Poisoned",        0x1e85a + (3 * 0x20), 0x1e87a + (3 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MK Poisoned",        0x1e85a + (4 * 0x20), 0x1e87a + (4 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HK Poisoned",        0x1e85a + (5 * 0x20), 0x1e87a + (5 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri PP Poisoned",        0x1e85a + (6 * 0x20), 0x1e87a + (6 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri KK Poisoned",        0x1e85a + (7 * 0x20), 0x1e87a + (7 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AP Poisoned",        0x1e85a + (8 * 0x20), 0x1e87a + (8 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AK Poisoned",        0x1e85a + (9 * 0x20), 0x1e87a + (9 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LP Zapped",          0x1e85a + (10 * 0x20), 0x1e87a + (10 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri MP Zapped",          0x1e85a + (11 * 0x20), 0x1e87a + (11 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri HP Zapped",          0x1e85a + (12 * 0x20), 0x1e87a + (12 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri LK Zapped",          0x1e85a + (13 * 0x20), 0x1e87a + (13 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri MK Zapped",          0x1e85a + (14 * 0x20), 0x1e87a + (14 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri HK Zapped",          0x1e85a + (15 * 0x20), 0x1e87a + (15 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri PP Zapped",          0x1e85a + (16 * 0x20), 0x1e87a + (16 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri KK Zapped",          0x1e85a + (17 * 0x20), 0x1e87a + (17 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri AP Zapped",          0x1e85a + (18 * 0x20), 0x1e87a + (18 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri AK Zapped",          0x1e85a + (19 * 0x20), 0x1e87a + (19 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"Demitri LP Burned",          0x1e85a + (20 * 0x20), 0x1e87a + (20 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MP Burned",          0x1e85a + (21 * 0x20), 0x1e87a + (21 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HP Burned",          0x1e85a + (22 * 0x20), 0x1e87a + (22 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LK Burned",          0x1e85a + (23 * 0x20), 0x1e87a + (23 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MK Burned",          0x1e85a + (24 * 0x20), 0x1e87a + (24 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HK Burned",          0x1e85a + (25 * 0x20), 0x1e87a + (25 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri PP Burned",          0x1e85a + (26 * 0x20), 0x1e87a + (26 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri KK Burned",          0x1e85a + (27 * 0x20), 0x1e87a + (27 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AP Burned",          0x1e85a + (28 * 0x20), 0x1e87a + (28 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AK Burned",          0x1e85a + (29 * 0x20), 0x1e87a + (29 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LP Pharaoh's Curse", 0x1e85a + (30 * 0x20), 0x1e87a + (30 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri MP Pharaoh's Curse", 0x1e85a + (31 * 0x20), 0x1e87a + (31 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri HP Pharaoh's Curse", 0x1e85a + (32 * 0x20), 0x1e87a + (32 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri LK Pharaoh's Curse", 0x1e85a + (33 * 0x20), 0x1e87a + (33 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri MK Pharaoh's Curse", 0x1e85a + (34 * 0x20), 0x1e87a + (34 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri HK Pharaoh's Curse", 0x1e85a + (35 * 0x20), 0x1e87a + (35 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri PP Pharaoh's Curse", 0x1e85a + (36 * 0x20), 0x1e87a + (36 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri KK Pharaoh's Curse", 0x1e85a + (37 * 0x20), 0x1e87a + (37 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri AP Pharaoh's Curse", 0x1e85a + (38 * 0x20), 0x1e87a + (38 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri AK Pharaoh's Curse", 0x1e85a + (39 * 0x20), 0x1e87a + (39 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"Demitri ES 1",               0x1e85a + (40 * 0x20), 0x1e87a + (40 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES 2",               0x1e85a + (41 * 0x20), 0x1e87a + (41 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES 3",               0x1e85a + (42 * 0x20), 0x1e87a + (42 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES 4",               0x1e85a + (43 * 0x20), 0x1e87a + (43 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 1",               0x1e85a + (44 * 0x20), 0x1e87a + (44 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 2",               0x1e85a + (45 * 0x20), 0x1e87a + (45 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 3",               0x1e85a + (46 * 0x20), 0x1e87a + (46 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 4",               0x1e85a + (47 * 0x20), 0x1e87a + (47 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 5",               0x1e85a + (48 * 0x20), 0x1e87a + (48 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 6",               0x1e85a + (49 * 0x20), 0x1e87a + (49 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 7",               0x1e85a + (50 * 0x20), 0x1e87a + (50 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 8",               0x1e85a + (51 * 0x20), 0x1e87a + (51 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Prova di Servo",     0x1e85a + (52 * 0x20), 0x1e87a + (52 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Finale Rosso",       0x1e85a + (53 * 0x20), 0x1e87a + (53 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Stone",              0x1e85a + (54 * 0x20), 0x1e87a + (54 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LP Midnight Bliss",  0x1e85a + (55 * 0x20), 0x1e87a + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MP Midnight Bliss",  0x1e85a + (56 * 0x20), 0x1e87a + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HP Midnight Bliss",  0x1e85a + (57 * 0x20), 0x1e87a + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LK Midnight Bliss",  0x1e85a + (58 * 0x20), 0x1e87a + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MK Midnight Bliss",  0x1e85a + (59 * 0x20), 0x1e87a + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HK Midnight Bliss",  0x1e85a + (60 * 0x20), 0x1e87a + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri PP Midnight Bliss",  0x1e85a + (61 * 0x20), 0x1e87a + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri KK Midnight Bliss",  0x1e85a + (62 * 0x20), 0x1e87a + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AP Midnight Bliss",  0x1e85a + (63 * 0x20), 0x1e87a + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AK Midnight Bliss",  0x1e85a + (64 * 0x20), 0x1e87a + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Q-Bee's QJ Honey",   0x1e85a + (65 * 0x20), 0x1e87a + (65 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LP Dark Force 1",    0x1e85a + (66 * 0x20), 0x1e87a + (66 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LP Dark Force 2",    0x1e85a + (67 * 0x20), 0x1e87a + (67 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LP Dark Force 3",    0x1e85a + (68 * 0x20), 0x1e87a + (68 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LP Dark Force 4",    0x1e85a + (69 * 0x20), 0x1e87a + (69 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MP Dark Force 1",    0x1e85a + (70 * 0x20), 0x1e87a + (70 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MP Dark Force 2",    0x1e85a + (71 * 0x20), 0x1e87a + (71 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MP Dark Force 3",    0x1e85a + (72 * 0x20), 0x1e87a + (72 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MP Dark Force 4",    0x1e85a + (73 * 0x20), 0x1e87a + (73 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HP Dark Force 1",    0x1e85a + (74 * 0x20), 0x1e87a + (74 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HP Dark Force 2",    0x1e85a + (75 * 0x20), 0x1e87a + (75 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HP Dark Force 3",    0x1e85a + (76 * 0x20), 0x1e87a + (76 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HP Dark Force 4",    0x1e85a + (77 * 0x20), 0x1e87a + (77 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LK Dark Force 1",    0x1e85a + (78 * 0x20), 0x1e87a + (78 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LK Dark Force 2",    0x1e85a + (79 * 0x20), 0x1e87a + (79 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LK Dark Force 3",    0x1e85a + (80 * 0x20), 0x1e87a + (80 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri LK Dark Force 4",    0x1e85a + (81 * 0x20), 0x1e87a + (81 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MK Dark Force 1",    0x1e85a + (82 * 0x20), 0x1e87a + (82 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MK Dark Force 2",    0x1e85a + (83 * 0x20), 0x1e87a + (83 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MK Dark Force 3",    0x1e85a + (84 * 0x20), 0x1e87a + (84 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri MK Dark Force 4",    0x1e85a + (85 * 0x20), 0x1e87a + (85 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HK Dark Force 1",    0x1e85a + (86 * 0x20), 0x1e87a + (86 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HK Dark Force 2",    0x1e85a + (87 * 0x20), 0x1e87a + (87 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HK Dark Force 3",    0x1e85a + (88 * 0x20), 0x1e87a + (88 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri HK Dark Force 4",    0x1e85a + (89 * 0x20), 0x1e87a + (89 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri PP Dark Force 1",    0x1e85a + (90 * 0x20), 0x1e87a + (90 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri PP Dark Force 2",    0x1e85a + (91 * 0x20), 0x1e87a + (91 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri PP Dark Force 3",    0x1e85a + (92 * 0x20), 0x1e87a + (92 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri PP Dark Force 4",    0x1e85a + (93 * 0x20), 0x1e87a + (93 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri KK Dark Force 1",    0x1e85a + (94 * 0x20), 0x1e87a + (94 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri KK Dark Force 2",    0x1e85a + (95 * 0x20), 0x1e87a + (95 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri KK Dark Force 3",    0x1e85a + (96 * 0x20), 0x1e87a + (96 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri KK Dark Force 4",    0x1e85a + (97 * 0x20), 0x1e87a + (97 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AP Dark Force 1",    0x1e85a + (98 * 0x20), 0x1e87a + (98 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AP Dark Force 2",    0x1e85a + (99 * 0x20), 0x1e87a + (99 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AP Dark Force 3",    0x1e85a + (100 * 0x20), 0x1e87a + (100 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AP Dark Force 4",    0x1e85a + (101 * 0x20), 0x1e87a + (101 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AK Dark Force 1",    0x1e85a + (102 * 0x20), 0x1e87a + (102 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AK Dark Force 2",    0x1e85a + (103 * 0x20), 0x1e87a + (103 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AK Dark Force 3",    0x1e85a + (104 * 0x20), 0x1e87a + (104 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri AK Dark Force 4",    0x1e85a + (105 * 0x20), 0x1e87a + (105 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ??? 1",              0x1e85a + (106 * 0x20), 0x1e87a + (106 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ??? 2",              0x1e85a + (107 * 0x20), 0x1e87a + (107 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ??? 3",              0x1e85a + (108 * 0x20), 0x1e87a + (108 * 0x20), indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ??? 4",              0x1e85a + (109 * 0x20), 0x1e87a + (109 * 0x20), indexCPS2Sprites_Vamp_Demitri },
 };

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_SPECIAL[] =
{
    { L"Gallon LP Poisoned",        0x1f61a + (0 * 0x20), 0x1f63a + (0 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MP Poisoned",        0x1f61a + (1 * 0x20), 0x1f63a + (1 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HP Poisoned",        0x1f61a + (2 * 0x20), 0x1f63a + (2 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LK Poisoned",        0x1f61a + (3 * 0x20), 0x1f63a + (3 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MK Poisoned",        0x1f61a + (4 * 0x20), 0x1f63a + (4 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HK Poisoned",        0x1f61a + (5 * 0x20), 0x1f63a + (5 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon PP Poisoned",        0x1f61a + (6 * 0x20), 0x1f63a + (6 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon KK Poisoned",        0x1f61a + (7 * 0x20), 0x1f63a + (7 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AP Poisoned",        0x1f61a + (8 * 0x20), 0x1f63a + (8 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AK Poisoned",        0x1f61a + (9 * 0x20), 0x1f63a + (9 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LP Zapped",          0x1f61a + (10 * 0x20), 0x1f63a + (10 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon MP Zapped",          0x1f61a + (11 * 0x20), 0x1f63a + (11 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon HP Zapped",          0x1f61a + (12 * 0x20), 0x1f63a + (12 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon LK Zapped",          0x1f61a + (13 * 0x20), 0x1f63a + (13 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon MK Zapped",          0x1f61a + (14 * 0x20), 0x1f63a + (14 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon HK Zapped",          0x1f61a + (15 * 0x20), 0x1f63a + (15 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon PP Zapped",          0x1f61a + (16 * 0x20), 0x1f63a + (16 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon KK Zapped",          0x1f61a + (17 * 0x20), 0x1f63a + (17 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon AP Zapped",          0x1f61a + (18 * 0x20), 0x1f63a + (18 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon AK Zapped",          0x1f61a + (19 * 0x20), 0x1f63a + (19 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Gallon LP Burned",          0x1f61a + (20 * 0x20), 0x1f63a + (20 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MP Burned",          0x1f61a + (21 * 0x20), 0x1f63a + (21 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HP Burned",          0x1f61a + (22 * 0x20), 0x1f63a + (22 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LK Burned",          0x1f61a + (23 * 0x20), 0x1f63a + (23 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MK Burned",          0x1f61a + (24 * 0x20), 0x1f63a + (24 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HK Burned",          0x1f61a + (25 * 0x20), 0x1f63a + (25 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon PP Burned",          0x1f61a + (26 * 0x20), 0x1f63a + (26 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon KK Burned",          0x1f61a + (27 * 0x20), 0x1f63a + (27 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AP Burned",          0x1f61a + (28 * 0x20), 0x1f63a + (28 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AK Burned",          0x1f61a + (29 * 0x20), 0x1f63a + (29 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LP Pharaoh's Curse", 0x1f61a + (30 * 0x20), 0x1f63a + (30 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon MP Pharaoh's Curse", 0x1f61a + (31 * 0x20), 0x1f63a + (31 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon HP Pharaoh's Curse", 0x1f61a + (32 * 0x20), 0x1f63a + (32 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon LK Pharaoh's Curse", 0x1f61a + (33 * 0x20), 0x1f63a + (33 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon MK Pharaoh's Curse", 0x1f61a + (34 * 0x20), 0x1f63a + (34 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon HK Pharaoh's Curse", 0x1f61a + (35 * 0x20), 0x1f63a + (35 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon PP Pharaoh's Curse", 0x1f61a + (36 * 0x20), 0x1f63a + (36 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon KK Pharaoh's Curse", 0x1f61a + (37 * 0x20), 0x1f63a + (37 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon AP Pharaoh's Curse", 0x1f61a + (38 * 0x20), 0x1f63a + (38 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon AK Pharaoh's Curse", 0x1f61a + (39 * 0x20), 0x1f63a + (39 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"Gallon ES 1",               0x1f61a + (40 * 0x20), 0x1f63a + (40 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ES 2",               0x1f61a + (41 * 0x20), 0x1f63a + (41 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ES 3",               0x1f61a + (42 * 0x20), 0x1f63a + (42 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ES 4",               0x1f61a + (43 * 0x20), 0x1f63a + (43 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 1",               0x1f61a + (44 * 0x20), 0x1f63a + (44 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 2",               0x1f61a + (45 * 0x20), 0x1f63a + (45 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 3",               0x1f61a + (46 * 0x20), 0x1f63a + (46 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 4",               0x1f61a + (47 * 0x20), 0x1f63a + (47 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 5",               0x1f61a + (48 * 0x20), 0x1f63a + (48 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 6",               0x1f61a + (49 * 0x20), 0x1f63a + (49 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 7",               0x1f61a + (50 * 0x20), 0x1f63a + (50 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 8",               0x1f61a + (51 * 0x20), 0x1f63a + (51 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Prova di Servo",     0x1f61a + (52 * 0x20), 0x1f63a + (52 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Finale Rosso",       0x1f61a + (53 * 0x20), 0x1f63a + (53 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Stone",              0x1f61a + (54 * 0x20), 0x1f63a + (54 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LP Midnight Bliss",  0x1f61a + (55 * 0x20), 0x1f63a + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MP Midnight Bliss",  0x1f61a + (56 * 0x20), 0x1f63a + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HP Midnight Bliss",  0x1f61a + (57 * 0x20), 0x1f63a + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LK Midnight Bliss",  0x1f61a + (58 * 0x20), 0x1f63a + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MK Midnight Bliss",  0x1f61a + (59 * 0x20), 0x1f63a + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HK Midnight Bliss",  0x1f61a + (60 * 0x20), 0x1f63a + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon PP Midnight Bliss",  0x1f61a + (61 * 0x20), 0x1f63a + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon KK Midnight Bliss",  0x1f61a + (62 * 0x20), 0x1f63a + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AP Midnight Bliss",  0x1f61a + (63 * 0x20), 0x1f63a + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AK Midnight Bliss",  0x1f61a + (64 * 0x20), 0x1f63a + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Q-Bee's QJ Honey",   0x1f61a + (65 * 0x20), 0x1f63a + (65 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LP Dark Force 1",    0x1f61a + (66 * 0x20), 0x1f63a + (66 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LP Dark Force 2",    0x1f61a + (67 * 0x20), 0x1f63a + (67 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LP Dark Force 3",    0x1f61a + (68 * 0x20), 0x1f63a + (68 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LP Dark Force 4",    0x1f61a + (69 * 0x20), 0x1f63a + (69 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MP Dark Force 1",    0x1f61a + (70 * 0x20), 0x1f63a + (70 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MP Dark Force 2",    0x1f61a + (71 * 0x20), 0x1f63a + (71 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MP Dark Force 3",    0x1f61a + (72 * 0x20), 0x1f63a + (72 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MP Dark Force 4",    0x1f61a + (73 * 0x20), 0x1f63a + (73 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HP Dark Force 1",    0x1f61a + (74 * 0x20), 0x1f63a + (74 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HP Dark Force 2",    0x1f61a + (75 * 0x20), 0x1f63a + (75 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HP Dark Force 3",    0x1f61a + (76 * 0x20), 0x1f63a + (76 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HP Dark Force 4",    0x1f61a + (77 * 0x20), 0x1f63a + (77 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LK Dark Force 1",    0x1f61a + (78 * 0x20), 0x1f63a + (78 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LK Dark Force 2",    0x1f61a + (79 * 0x20), 0x1f63a + (79 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LK Dark Force 3",    0x1f61a + (80 * 0x20), 0x1f63a + (80 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon LK Dark Force 4",    0x1f61a + (81 * 0x20), 0x1f63a + (81 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MK Dark Force 1",    0x1f61a + (82 * 0x20), 0x1f63a + (82 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MK Dark Force 2",    0x1f61a + (83 * 0x20), 0x1f63a + (83 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MK Dark Force 3",    0x1f61a + (84 * 0x20), 0x1f63a + (84 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon MK Dark Force 4",    0x1f61a + (85 * 0x20), 0x1f63a + (85 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HK Dark Force 1",    0x1f61a + (86 * 0x20), 0x1f63a + (86 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HK Dark Force 2",    0x1f61a + (87 * 0x20), 0x1f63a + (87 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HK Dark Force 3",    0x1f61a + (88 * 0x20), 0x1f63a + (88 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon HK Dark Force 4",    0x1f61a + (89 * 0x20), 0x1f63a + (89 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon PP Dark Force 1",    0x1f61a + (90 * 0x20), 0x1f63a + (90 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon PP Dark Force 2",    0x1f61a + (91 * 0x20), 0x1f63a + (91 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon PP Dark Force 3",    0x1f61a + (92 * 0x20), 0x1f63a + (92 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon PP Dark Force 4",    0x1f61a + (93 * 0x20), 0x1f63a + (93 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon KK Dark Force 1",    0x1f61a + (94 * 0x20), 0x1f63a + (94 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon KK Dark Force 2",    0x1f61a + (95 * 0x20), 0x1f63a + (95 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon KK Dark Force 3",    0x1f61a + (96 * 0x20), 0x1f63a + (96 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon KK Dark Force 4",    0x1f61a + (97 * 0x20), 0x1f63a + (97 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AP Dark Force 1",    0x1f61a + (98 * 0x20), 0x1f63a + (98 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AP Dark Force 2",    0x1f61a + (99 * 0x20), 0x1f63a + (99 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AP Dark Force 3",    0x1f61a + (100 * 0x20), 0x1f63a + (100 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AP Dark Force 4",    0x1f61a + (101 * 0x20), 0x1f63a + (101 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AK Dark Force 1",    0x1f61a + (102 * 0x20), 0x1f63a + (102 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AK Dark Force 2",    0x1f61a + (103 * 0x20), 0x1f63a + (103 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AK Dark Force 3",    0x1f61a + (104 * 0x20), 0x1f63a + (104 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon AK Dark Force 4",    0x1f61a + (105 * 0x20), 0x1f63a + (105 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ??? 1",              0x1f61a + (106 * 0x20), 0x1f63a + (106 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ??? 2",              0x1f61a + (107 * 0x20), 0x1f63a + (107 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ??? 3",              0x1f61a + (108 * 0x20), 0x1f63a + (108 * 0x20), indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ??? 4",              0x1f61a + (109 * 0x20), 0x1f63a + (109 * 0x20), indexCPS2Sprites_Vamp_Gallon },
 };

const sGame_PaletteDataset VSAV2_A_Victor_PALETTES_SPECIAL[] =
{
    { L"Victor LP Poisoned",        0x203da + (0 * 0x20), 0x203fa + (0 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MP Poisoned",        0x203da + (1 * 0x20), 0x203fa + (1 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HP Poisoned",        0x203da + (2 * 0x20), 0x203fa + (2 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LK Poisoned",        0x203da + (3 * 0x20), 0x203fa + (3 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MK Poisoned",        0x203da + (4 * 0x20), 0x203fa + (4 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HK Poisoned",        0x203da + (5 * 0x20), 0x203fa + (5 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor PP Poisoned",        0x203da + (6 * 0x20), 0x203fa + (6 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor KK Poisoned",        0x203da + (7 * 0x20), 0x203fa + (7 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AP Poisoned",        0x203da + (8 * 0x20), 0x203fa + (8 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AK Poisoned",        0x203da + (9 * 0x20), 0x203fa + (9 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LP Zapped",          0x203da + (10 * 0x20), 0x203fa + (10 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor MP Zapped",          0x203da + (11 * 0x20), 0x203fa + (11 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor HP Zapped",          0x203da + (12 * 0x20), 0x203fa + (12 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor LK Zapped",          0x203da + (13 * 0x20), 0x203fa + (13 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor MK Zapped",          0x203da + (14 * 0x20), 0x203fa + (14 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor HK Zapped",          0x203da + (15 * 0x20), 0x203fa + (15 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor PP Zapped",          0x203da + (16 * 0x20), 0x203fa + (16 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor KK Zapped",          0x203da + (17 * 0x20), 0x203fa + (17 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor AP Zapped",          0x203da + (18 * 0x20), 0x203fa + (18 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor AK Zapped",          0x203da + (19 * 0x20), 0x203fa + (19 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"Victor LP Burned",          0x203da + (20 * 0x20), 0x203fa + (20 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MP Burned",          0x203da + (21 * 0x20), 0x203fa + (21 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HP Burned",          0x203da + (22 * 0x20), 0x203fa + (22 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LK Burned",          0x203da + (23 * 0x20), 0x203fa + (23 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MK Burned",          0x203da + (24 * 0x20), 0x203fa + (24 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HK Burned",          0x203da + (25 * 0x20), 0x203fa + (25 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor PP Burned",          0x203da + (26 * 0x20), 0x203fa + (26 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor KK Burned",          0x203da + (27 * 0x20), 0x203fa + (27 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AP Burned",          0x203da + (28 * 0x20), 0x203fa + (28 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AK Burned",          0x203da + (29 * 0x20), 0x203fa + (29 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LP Pharaoh's Curse", 0x203da + (30 * 0x20), 0x203fa + (30 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor MP Pharaoh's Curse", 0x203da + (31 * 0x20), 0x203fa + (31 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor HP Pharaoh's Curse", 0x203da + (32 * 0x20), 0x203fa + (32 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor LK Pharaoh's Curse", 0x203da + (33 * 0x20), 0x203fa + (33 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor MK Pharaoh's Curse", 0x203da + (34 * 0x20), 0x203fa + (34 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor HK Pharaoh's Curse", 0x203da + (35 * 0x20), 0x203fa + (35 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor PP Pharaoh's Curse", 0x203da + (36 * 0x20), 0x203fa + (36 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor KK Pharaoh's Curse", 0x203da + (37 * 0x20), 0x203fa + (37 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor AP Pharaoh's Curse", 0x203da + (38 * 0x20), 0x203fa + (38 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor AK Pharaoh's Curse", 0x203da + (39 * 0x20), 0x203fa + (39 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"Victor ES 1",               0x203da + (40 * 0x20), 0x203fa + (40 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor ES 2",               0x203da + (41 * 0x20), 0x203fa + (41 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor ES 3",               0x203da + (42 * 0x20), 0x203fa + (42 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor ES 4",               0x203da + (43 * 0x20), 0x203fa + (43 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 1",               0x203da + (44 * 0x20), 0x203fa + (44 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 2",               0x203da + (45 * 0x20), 0x203fa + (45 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 3",               0x203da + (46 * 0x20), 0x203fa + (46 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 4",               0x203da + (47 * 0x20), 0x203fa + (47 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 5",               0x203da + (48 * 0x20), 0x203fa + (48 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 6",               0x203da + (49 * 0x20), 0x203fa + (49 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 7",               0x203da + (50 * 0x20), 0x203fa + (50 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 8",               0x203da + (51 * 0x20), 0x203fa + (51 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor Prova di Servo",     0x203da + (52 * 0x20), 0x203fa + (52 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor Finale Rosso",       0x203da + (53 * 0x20), 0x203fa + (53 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor Stone",              0x203da + (54 * 0x20), 0x203fa + (54 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LP Midnight Bliss",  0x203da + (55 * 0x20), 0x203fa + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor MP Midnight Bliss",  0x203da + (56 * 0x20), 0x203fa + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor HP Midnight Bliss",  0x203da + (57 * 0x20), 0x203fa + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor LK Midnight Bliss",  0x203da + (58 * 0x20), 0x203fa + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor MK Midnight Bliss",  0x203da + (59 * 0x20), 0x203fa + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor HK Midnight Bliss",  0x203da + (60 * 0x20), 0x203fa + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor PP Midnight Bliss",  0x203da + (61 * 0x20), 0x203fa + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor KK Midnight Bliss",  0x203da + (62 * 0x20), 0x203fa + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor AP Midnight Bliss",  0x203da + (63 * 0x20), 0x203fa + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor AK Midnight Bliss",  0x203da + (64 * 0x20), 0x203fa + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
    { L"Victor Q-Bee's QJ Honey",   0x203da + (65 * 0x20), 0x203fa + (65 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LP Dark Force 1",    0x203da + (66 * 0x20), 0x203fa + (66 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LP Dark Force 2",    0x203da + (67 * 0x20), 0x203fa + (67 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LP Dark Force 3",    0x203da + (68 * 0x20), 0x203fa + (68 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LP Dark Force 4",    0x203da + (69 * 0x20), 0x203fa + (69 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MP Dark Force 1",    0x203da + (70 * 0x20), 0x203fa + (70 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MP Dark Force 2",    0x203da + (71 * 0x20), 0x203fa + (71 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MP Dark Force 3",    0x203da + (72 * 0x20), 0x203fa + (72 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MP Dark Force 4",    0x203da + (73 * 0x20), 0x203fa + (73 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HP Dark Force 1",    0x203da + (74 * 0x20), 0x203fa + (74 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HP Dark Force 2",    0x203da + (75 * 0x20), 0x203fa + (75 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HP Dark Force 3",    0x203da + (76 * 0x20), 0x203fa + (76 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HP Dark Force 4",    0x203da + (77 * 0x20), 0x203fa + (77 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LK Dark Force 1",    0x203da + (78 * 0x20), 0x203fa + (78 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LK Dark Force 2",    0x203da + (79 * 0x20), 0x203fa + (79 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LK Dark Force 3",    0x203da + (80 * 0x20), 0x203fa + (80 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor LK Dark Force 4",    0x203da + (81 * 0x20), 0x203fa + (81 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MK Dark Force 1",    0x203da + (82 * 0x20), 0x203fa + (82 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MK Dark Force 2",    0x203da + (83 * 0x20), 0x203fa + (83 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MK Dark Force 3",    0x203da + (84 * 0x20), 0x203fa + (84 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor MK Dark Force 4",    0x203da + (85 * 0x20), 0x203fa + (85 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HK Dark Force 1",    0x203da + (86 * 0x20), 0x203fa + (86 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HK Dark Force 2",    0x203da + (87 * 0x20), 0x203fa + (87 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HK Dark Force 3",    0x203da + (88 * 0x20), 0x203fa + (88 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor HK Dark Force 4",    0x203da + (89 * 0x20), 0x203fa + (89 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor PP Dark Force 1",    0x203da + (90 * 0x20), 0x203fa + (90 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor PP Dark Force 2",    0x203da + (91 * 0x20), 0x203fa + (91 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor PP Dark Force 3",    0x203da + (92 * 0x20), 0x203fa + (92 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor PP Dark Force 4",    0x203da + (93 * 0x20), 0x203fa + (93 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor KK Dark Force 1",    0x203da + (94 * 0x20), 0x203fa + (94 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor KK Dark Force 2",    0x203da + (95 * 0x20), 0x203fa + (95 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor KK Dark Force 3",    0x203da + (96 * 0x20), 0x203fa + (96 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor KK Dark Force 4",    0x203da + (97 * 0x20), 0x203fa + (97 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AP Dark Force 1",    0x203da + (98 * 0x20), 0x203fa + (98 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AP Dark Force 2",    0x203da + (99 * 0x20), 0x203fa + (99 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AP Dark Force 3",    0x203da + (100 * 0x20), 0x203fa + (100 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AP Dark Force 4",    0x203da + (101 * 0x20), 0x203fa + (101 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AK Dark Force 1",    0x203da + (102 * 0x20), 0x203fa + (102 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AK Dark Force 2",    0x203da + (103 * 0x20), 0x203fa + (103 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AK Dark Force 3",    0x203da + (104 * 0x20), 0x203fa + (104 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor AK Dark Force 4",    0x203da + (105 * 0x20), 0x203fa + (105 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor ??? 1",              0x203da + (106 * 0x20), 0x203fa + (106 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor ??? 2",              0x203da + (107 * 0x20), 0x203fa + (107 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor ??? 3",              0x203da + (108 * 0x20), 0x203fa + (108 * 0x20), indexCPS2Sprites_Vamp_Victor },
    { L"Victor ??? 4",              0x203da + (109 * 0x20), 0x203fa + (109 * 0x20), indexCPS2Sprites_Vamp_Victor },
 };

const sGame_PaletteDataset VSAV2_A_Zabel_PALETTES_SPECIAL[] =
{
    { L"Zabel LP Poisoned",        0x2119a + (0 * 0x20), 0x211Ba + (0 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MP Poisoned",        0x2119a + (1 * 0x20), 0x211Ba + (1 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HP Poisoned",        0x2119a + (2 * 0x20), 0x211Ba + (2 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LK Poisoned",        0x2119a + (3 * 0x20), 0x211Ba + (3 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MK Poisoned",        0x2119a + (4 * 0x20), 0x211Ba + (4 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HK Poisoned",        0x2119a + (5 * 0x20), 0x211Ba + (5 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel PP Poisoned",        0x2119a + (6 * 0x20), 0x211Ba + (6 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel KK Poisoned",        0x2119a + (7 * 0x20), 0x211Ba + (7 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AP Poisoned",        0x2119a + (8 * 0x20), 0x211Ba + (8 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AK Poisoned",        0x2119a + (9 * 0x20), 0x211Ba + (9 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LP Zapped",          0x2119a + (10 * 0x20), 0x211Ba + (10 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel MP Zapped",          0x2119a + (11 * 0x20), 0x211Ba + (11 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel HP Zapped",          0x2119a + (12 * 0x20), 0x211Ba + (12 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel LK Zapped",          0x2119a + (13 * 0x20), 0x211Ba + (13 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel MK Zapped",          0x2119a + (14 * 0x20), 0x211Ba + (14 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel HK Zapped",          0x2119a + (15 * 0x20), 0x211Ba + (15 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel PP Zapped",          0x2119a + (16 * 0x20), 0x211Ba + (16 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel KK Zapped",          0x2119a + (17 * 0x20), 0x211Ba + (17 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel AP Zapped",          0x2119a + (18 * 0x20), 0x211Ba + (18 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel AK Zapped",          0x2119a + (19 * 0x20), 0x211Ba + (19 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"Zabel LP Burned",          0x2119a + (20 * 0x20), 0x211Ba + (20 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MP Burned",          0x2119a + (21 * 0x20), 0x211Ba + (21 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HP Burned",          0x2119a + (22 * 0x20), 0x211Ba + (22 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LK Burned",          0x2119a + (23 * 0x20), 0x211Ba + (23 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MK Burned",          0x2119a + (24 * 0x20), 0x211Ba + (24 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HK Burned",          0x2119a + (25 * 0x20), 0x211Ba + (25 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel PP Burned",          0x2119a + (26 * 0x20), 0x211Ba + (26 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel KK Burned",          0x2119a + (27 * 0x20), 0x211Ba + (27 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AP Burned",          0x2119a + (28 * 0x20), 0x211Ba + (28 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AK Burned",          0x2119a + (29 * 0x20), 0x211Ba + (29 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LP Pharaoh's Curse", 0x2119a + (30 * 0x20), 0x211Ba + (30 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel MP Pharaoh's Curse", 0x2119a + (31 * 0x20), 0x211Ba + (31 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel HP Pharaoh's Curse", 0x2119a + (32 * 0x20), 0x211Ba + (32 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel LK Pharaoh's Curse", 0x2119a + (33 * 0x20), 0x211Ba + (33 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel MK Pharaoh's Curse", 0x2119a + (34 * 0x20), 0x211Ba + (34 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel HK Pharaoh's Curse", 0x2119a + (35 * 0x20), 0x211Ba + (35 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel PP Pharaoh's Curse", 0x2119a + (36 * 0x20), 0x211Ba + (36 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel KK Pharaoh's Curse", 0x2119a + (37 * 0x20), 0x211Ba + (37 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel AP Pharaoh's Curse", 0x2119a + (38 * 0x20), 0x211Ba + (38 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel AK Pharaoh's Curse", 0x2119a + (39 * 0x20), 0x211Ba + (39 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"Zabel ES 1",               0x2119a + (40 * 0x20), 0x211Ba + (40 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ES 2",               0x2119a + (41 * 0x20), 0x211Ba + (41 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ES 3",               0x2119a + (42 * 0x20), 0x211Ba + (42 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ES 4",               0x2119a + (43 * 0x20), 0x211Ba + (43 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 1",               0x2119a + (44 * 0x20), 0x211Ba + (44 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 2",               0x2119a + (45 * 0x20), 0x211Ba + (45 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 3",               0x2119a + (46 * 0x20), 0x211Ba + (46 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 4",               0x2119a + (47 * 0x20), 0x211Ba + (47 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 5",               0x2119a + (48 * 0x20), 0x211Ba + (48 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 6",               0x2119a + (49 * 0x20), 0x211Ba + (49 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 7",               0x2119a + (50 * 0x20), 0x211Ba + (50 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 8",               0x2119a + (51 * 0x20), 0x211Ba + (51 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Prova di Servo",     0x2119a + (52 * 0x20), 0x211Ba + (52 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Finale Rosso",       0x2119a + (53 * 0x20), 0x211Ba + (53 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Stone",              0x2119a + (54 * 0x20), 0x211Ba + (54 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LP Midnight Bliss",  0x2119a + (55 * 0x20), 0x211Ba + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MP Midnight Bliss",  0x2119a + (56 * 0x20), 0x211Ba + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HP Midnight Bliss",  0x2119a + (57 * 0x20), 0x211Ba + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LK Midnight Bliss",  0x2119a + (58 * 0x20), 0x211Ba + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MK Midnight Bliss",  0x2119a + (59 * 0x20), 0x211Ba + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HK Midnight Bliss",  0x2119a + (60 * 0x20), 0x211Ba + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel PP Midnight Bliss",  0x2119a + (61 * 0x20), 0x211Ba + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel KK Midnight Bliss",  0x2119a + (62 * 0x20), 0x211Ba + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AP Midnight Bliss",  0x2119a + (63 * 0x20), 0x211Ba + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AK Midnight Bliss",  0x2119a + (64 * 0x20), 0x211Ba + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Q-Bee's QJ Honey",   0x2119a + (65 * 0x20), 0x211Ba + (65 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LP Dark Force 1",    0x2119a + (66 * 0x20), 0x211Ba + (66 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LP Dark Force 2",    0x2119a + (67 * 0x20), 0x211Ba + (67 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LP Dark Force 3",    0x2119a + (68 * 0x20), 0x211Ba + (68 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LP Dark Force 4",    0x2119a + (69 * 0x20), 0x211Ba + (69 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MP Dark Force 1",    0x2119a + (70 * 0x20), 0x211Ba + (70 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MP Dark Force 2",    0x2119a + (71 * 0x20), 0x211Ba + (71 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MP Dark Force 3",    0x2119a + (72 * 0x20), 0x211Ba + (72 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MP Dark Force 4",    0x2119a + (73 * 0x20), 0x211Ba + (73 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HP Dark Force 1",    0x2119a + (74 * 0x20), 0x211Ba + (74 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HP Dark Force 2",    0x2119a + (75 * 0x20), 0x211Ba + (75 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HP Dark Force 3",    0x2119a + (76 * 0x20), 0x211Ba + (76 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HP Dark Force 4",    0x2119a + (77 * 0x20), 0x211Ba + (77 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LK Dark Force 1",    0x2119a + (78 * 0x20), 0x211Ba + (78 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LK Dark Force 2",    0x2119a + (79 * 0x20), 0x211Ba + (79 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LK Dark Force 3",    0x2119a + (80 * 0x20), 0x211Ba + (80 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel LK Dark Force 4",    0x2119a + (81 * 0x20), 0x211Ba + (81 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MK Dark Force 1",    0x2119a + (82 * 0x20), 0x211Ba + (82 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MK Dark Force 2",    0x2119a + (83 * 0x20), 0x211Ba + (83 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MK Dark Force 3",    0x2119a + (84 * 0x20), 0x211Ba + (84 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel MK Dark Force 4",    0x2119a + (85 * 0x20), 0x211Ba + (85 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HK Dark Force 1",    0x2119a + (86 * 0x20), 0x211Ba + (86 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HK Dark Force 2",    0x2119a + (87 * 0x20), 0x211Ba + (87 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HK Dark Force 3",    0x2119a + (88 * 0x20), 0x211Ba + (88 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel HK Dark Force 4",    0x2119a + (89 * 0x20), 0x211Ba + (89 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel PP Dark Force 1",    0x2119a + (90 * 0x20), 0x211Ba + (90 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel PP Dark Force 2",    0x2119a + (91 * 0x20), 0x211Ba + (91 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel PP Dark Force 3",    0x2119a + (92 * 0x20), 0x211Ba + (92 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel PP Dark Force 4",    0x2119a + (93 * 0x20), 0x211Ba + (93 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel KK Dark Force 1",    0x2119a + (94 * 0x20), 0x211Ba + (94 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel KK Dark Force 2",    0x2119a + (95 * 0x20), 0x211Ba + (95 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel KK Dark Force 3",    0x2119a + (96 * 0x20), 0x211Ba + (96 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel KK Dark Force 4",    0x2119a + (97 * 0x20), 0x211Ba + (97 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AP Dark Force 1",    0x2119a + (98 * 0x20), 0x211Ba + (98 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AP Dark Force 2",    0x2119a + (99 * 0x20), 0x211Ba + (99 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AP Dark Force 3",    0x2119a + (100 * 0x20), 0x211Ba + (100 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AP Dark Force 4",    0x2119a + (101 * 0x20), 0x211Ba + (101 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AK Dark Force 1",    0x2119a + (102 * 0x20), 0x211Ba + (102 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AK Dark Force 2",    0x2119a + (103 * 0x20), 0x211Ba + (103 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AK Dark Force 3",    0x2119a + (104 * 0x20), 0x211Ba + (104 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel AK Dark Force 4",    0x2119a + (105 * 0x20), 0x211Ba + (105 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ??? 1",              0x2119a + (106 * 0x20), 0x211Ba + (106 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ??? 2",              0x2119a + (107 * 0x20), 0x211Ba + (107 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ??? 3",              0x2119a + (108 * 0x20), 0x211Ba + (108 * 0x20), indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ??? 4",              0x2119a + (109 * 0x20), 0x211Ba + (109 * 0x20), indexCPS2Sprites_Vamp_Zabel },
 };

const sGame_PaletteDataset VSAV2_A_Morrigan_PALETTES_SPECIAL[] =
{
    { L"Morrigan LP Poisoned",        0x2119a + (1 * 0xDC0) + (0 * 0x20), 0x211Ba + (1 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MP Poisoned",        0x2119a + (1 * 0xDC0) + (1 * 0x20), 0x211Ba + (1 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HP Poisoned",        0x2119a + (1 * 0xDC0) + (2 * 0x20), 0x211Ba + (1 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LK Poisoned",        0x2119a + (1 * 0xDC0) + (3 * 0x20), 0x211Ba + (1 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MK Poisoned",        0x2119a + (1 * 0xDC0) + (4 * 0x20), 0x211Ba + (1 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HK Poisoned",        0x2119a + (1 * 0xDC0) + (5 * 0x20), 0x211Ba + (1 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan PP Poisoned",        0x2119a + (1 * 0xDC0) + (6 * 0x20), 0x211Ba + (1 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan KK Poisoned",        0x2119a + (1 * 0xDC0) + (7 * 0x20), 0x211Ba + (1 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AP Poisoned",        0x2119a + (1 * 0xDC0) + (8 * 0x20), 0x211Ba + (1 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AK Poisoned",        0x2119a + (1 * 0xDC0) + (9 * 0x20), 0x211Ba + (1 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LP Zapped",          0x2119a + (1 * 0xDC0) + (10 * 0x20), 0x211Ba + (1 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan MP Zapped",          0x2119a + (1 * 0xDC0) + (11 * 0x20), 0x211Ba + (1 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan HP Zapped",          0x2119a + (1 * 0xDC0) + (12 * 0x20), 0x211Ba + (1 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan LK Zapped",          0x2119a + (1 * 0xDC0) + (13 * 0x20), 0x211Ba + (1 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan MK Zapped",          0x2119a + (1 * 0xDC0) + (14 * 0x20), 0x211Ba + (1 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan HK Zapped",          0x2119a + (1 * 0xDC0) + (15 * 0x20), 0x211Ba + (1 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan PP Zapped",          0x2119a + (1 * 0xDC0) + (16 * 0x20), 0x211Ba + (1 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan KK Zapped",          0x2119a + (1 * 0xDC0) + (17 * 0x20), 0x211Ba + (1 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan AP Zapped",          0x2119a + (1 * 0xDC0) + (18 * 0x20), 0x211Ba + (1 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan AK Zapped",          0x2119a + (1 * 0xDC0) + (19 * 0x20), 0x211Ba + (1 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Morrigan, 0x08 },
    { L"Morrigan LP Burned",          0x2119a + (1 * 0xDC0) + (20 * 0x20), 0x211Ba + (1 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MP Burned",          0x2119a + (1 * 0xDC0) + (21 * 0x20), 0x211Ba + (1 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HP Burned",          0x2119a + (1 * 0xDC0) + (22 * 0x20), 0x211Ba + (1 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LK Burned",          0x2119a + (1 * 0xDC0) + (23 * 0x20), 0x211Ba + (1 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MK Burned",          0x2119a + (1 * 0xDC0) + (24 * 0x20), 0x211Ba + (1 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HK Burned",          0x2119a + (1 * 0xDC0) + (25 * 0x20), 0x211Ba + (1 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan PP Burned",          0x2119a + (1 * 0xDC0) + (26 * 0x20), 0x211Ba + (1 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan KK Burned",          0x2119a + (1 * 0xDC0) + (27 * 0x20), 0x211Ba + (1 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AP Burned",          0x2119a + (1 * 0xDC0) + (28 * 0x20), 0x211Ba + (1 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AK Burned",          0x2119a + (1 * 0xDC0) + (29 * 0x20), 0x211Ba + (1 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (30 * 0x20), 0x211Ba + (1 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan MP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (31 * 0x20), 0x211Ba + (1 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan HP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (32 * 0x20), 0x211Ba + (1 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan LK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (33 * 0x20), 0x211Ba + (1 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan MK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (34 * 0x20), 0x211Ba + (1 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan HK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (35 * 0x20), 0x211Ba + (1 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan PP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (36 * 0x20), 0x211Ba + (1 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan KK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (37 * 0x20), 0x211Ba + (1 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan AP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (38 * 0x20), 0x211Ba + (1 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan AK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (39 * 0x20), 0x211Ba + (1 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Morrigan, 0x0a },
    { L"Morrigan ES 1",               0x2119a + (1 * 0xDC0) + (40 * 0x20), 0x211Ba + (1 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan ES 2",               0x2119a + (1 * 0xDC0) + (41 * 0x20), 0x211Ba + (1 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan ES 3",               0x2119a + (1 * 0xDC0) + (42 * 0x20), 0x211Ba + (1 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan ES 4",               0x2119a + (1 * 0xDC0) + (43 * 0x20), 0x211Ba + (1 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 1",               0x2119a + (1 * 0xDC0) + (44 * 0x20), 0x211Ba + (1 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 2",               0x2119a + (1 * 0xDC0) + (45 * 0x20), 0x211Ba + (1 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 3",               0x2119a + (1 * 0xDC0) + (46 * 0x20), 0x211Ba + (1 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 4",               0x2119a + (1 * 0xDC0) + (47 * 0x20), 0x211Ba + (1 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 5",               0x2119a + (1 * 0xDC0) + (48 * 0x20), 0x211Ba + (1 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 6",               0x2119a + (1 * 0xDC0) + (49 * 0x20), 0x211Ba + (1 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 7",               0x2119a + (1 * 0xDC0) + (50 * 0x20), 0x211Ba + (1 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan EX 8",               0x2119a + (1 * 0xDC0) + (51 * 0x20), 0x211Ba + (1 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan Prova di Servo",     0x2119a + (1 * 0xDC0) + (52 * 0x20), 0x211Ba + (1 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan Finale Rosso",       0x2119a + (1 * 0xDC0) + (53 * 0x20), 0x211Ba + (1 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan Stone",              0x2119a + (1 * 0xDC0) + (54 * 0x20), 0x211Ba + (1 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (55 * 0x20), 0x211Ba + (1 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan MP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (56 * 0x20), 0x211Ba + (1 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan HP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (57 * 0x20), 0x211Ba + (1 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan LK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (58 * 0x20), 0x211Ba + (1 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan MK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (59 * 0x20), 0x211Ba + (1 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan HK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (60 * 0x20), 0x211Ba + (1 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan PP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (61 * 0x20), 0x211Ba + (1 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan KK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (62 * 0x20), 0x211Ba + (1 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan AP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (63 * 0x20), 0x211Ba + (1 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan AK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (64 * 0x20), 0x211Ba + (1 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
    { L"Morrigan Q-Bee's QJ Honey",   0x2119a + (1 * 0xDC0) + (65 * 0x20), 0x211Ba + (1 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LP Dark Force 1",    0x2119a + (1 * 0xDC0) + (66 * 0x20), 0x211Ba + (1 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LP Dark Force 2",    0x2119a + (1 * 0xDC0) + (67 * 0x20), 0x211Ba + (1 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LP Dark Force 3",    0x2119a + (1 * 0xDC0) + (68 * 0x20), 0x211Ba + (1 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LP Dark Force 4",    0x2119a + (1 * 0xDC0) + (69 * 0x20), 0x211Ba + (1 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MP Dark Force 1",    0x2119a + (1 * 0xDC0) + (70 * 0x20), 0x211Ba + (1 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MP Dark Force 2",    0x2119a + (1 * 0xDC0) + (71 * 0x20), 0x211Ba + (1 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MP Dark Force 3",    0x2119a + (1 * 0xDC0) + (72 * 0x20), 0x211Ba + (1 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MP Dark Force 4",    0x2119a + (1 * 0xDC0) + (73 * 0x20), 0x211Ba + (1 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HP Dark Force 1",    0x2119a + (1 * 0xDC0) + (74 * 0x20), 0x211Ba + (1 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HP Dark Force 2",    0x2119a + (1 * 0xDC0) + (75 * 0x20), 0x211Ba + (1 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HP Dark Force 3",    0x2119a + (1 * 0xDC0) + (76 * 0x20), 0x211Ba + (1 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HP Dark Force 4",    0x2119a + (1 * 0xDC0) + (77 * 0x20), 0x211Ba + (1 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LK Dark Force 1",    0x2119a + (1 * 0xDC0) + (78 * 0x20), 0x211Ba + (1 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LK Dark Force 2",    0x2119a + (1 * 0xDC0) + (79 * 0x20), 0x211Ba + (1 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LK Dark Force 3",    0x2119a + (1 * 0xDC0) + (80 * 0x20), 0x211Ba + (1 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan LK Dark Force 4",    0x2119a + (1 * 0xDC0) + (81 * 0x20), 0x211Ba + (1 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MK Dark Force 1",    0x2119a + (1 * 0xDC0) + (82 * 0x20), 0x211Ba + (1 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MK Dark Force 2",    0x2119a + (1 * 0xDC0) + (83 * 0x20), 0x211Ba + (1 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MK Dark Force 3",    0x2119a + (1 * 0xDC0) + (84 * 0x20), 0x211Ba + (1 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan MK Dark Force 4",    0x2119a + (1 * 0xDC0) + (85 * 0x20), 0x211Ba + (1 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HK Dark Force 1",    0x2119a + (1 * 0xDC0) + (86 * 0x20), 0x211Ba + (1 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HK Dark Force 2",    0x2119a + (1 * 0xDC0) + (87 * 0x20), 0x211Ba + (1 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HK Dark Force 3",    0x2119a + (1 * 0xDC0) + (88 * 0x20), 0x211Ba + (1 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan HK Dark Force 4",    0x2119a + (1 * 0xDC0) + (89 * 0x20), 0x211Ba + (1 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan PP Dark Force 1",    0x2119a + (1 * 0xDC0) + (90 * 0x20), 0x211Ba + (1 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan PP Dark Force 2",    0x2119a + (1 * 0xDC0) + (91 * 0x20), 0x211Ba + (1 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan PP Dark Force 3",    0x2119a + (1 * 0xDC0) + (92 * 0x20), 0x211Ba + (1 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan PP Dark Force 4",    0x2119a + (1 * 0xDC0) + (93 * 0x20), 0x211Ba + (1 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan KK Dark Force 1",    0x2119a + (1 * 0xDC0) + (94 * 0x20), 0x211Ba + (1 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan KK Dark Force 2",    0x2119a + (1 * 0xDC0) + (95 * 0x20), 0x211Ba + (1 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan KK Dark Force 3",    0x2119a + (1 * 0xDC0) + (96 * 0x20), 0x211Ba + (1 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan KK Dark Force 4",    0x2119a + (1 * 0xDC0) + (97 * 0x20), 0x211Ba + (1 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AP Dark Force 1",    0x2119a + (1 * 0xDC0) + (98 * 0x20), 0x211Ba + (1 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AP Dark Force 2",    0x2119a + (1 * 0xDC0) + (99 * 0x20), 0x211Ba + (1 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AP Dark Force 3",    0x2119a + (1 * 0xDC0) + (100 * 0x20), 0x211Ba + (1 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AP Dark Force 4",    0x2119a + (1 * 0xDC0) + (101 * 0x20), 0x211Ba + (1 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AK Dark Force 1",    0x2119a + (1 * 0xDC0) + (102 * 0x20), 0x211Ba + (1 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AK Dark Force 2",    0x2119a + (1 * 0xDC0) + (103 * 0x20), 0x211Ba + (1 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AK Dark Force 3",    0x2119a + (1 * 0xDC0) + (104 * 0x20), 0x211Ba + (1 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan AK Dark Force 4",    0x2119a + (1 * 0xDC0) + (105 * 0x20), 0x211Ba + (1 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan ??? 1",              0x2119a + (1 * 0xDC0) + (106 * 0x20), 0x211Ba + (1 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan ??? 2",              0x2119a + (1 * 0xDC0) + (107 * 0x20), 0x211Ba + (1 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan ??? 3",              0x2119a + (1 * 0xDC0) + (108 * 0x20), 0x211Ba + (1 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Morrigan },
    { L"Morrigan ??? 4",              0x2119a + (1 * 0xDC0) + (109 * 0x20), 0x211Ba + (1 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Morrigan },
 };

const sGame_PaletteDataset VSAV2_A_Anakaris_PALETTES_SPECIAL[] =
{
    { L"Anakaris LP Poisoned",        0x2119a + (2 * 0xDC0) + (0 * 0x20), 0x211Ba + (2 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MP Poisoned",        0x2119a + (2 * 0xDC0) + (1 * 0x20), 0x211Ba + (2 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HP Poisoned",        0x2119a + (2 * 0xDC0) + (2 * 0x20), 0x211Ba + (2 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LK Poisoned",        0x2119a + (2 * 0xDC0) + (3 * 0x20), 0x211Ba + (2 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MK Poisoned",        0x2119a + (2 * 0xDC0) + (4 * 0x20), 0x211Ba + (2 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HK Poisoned",        0x2119a + (2 * 0xDC0) + (5 * 0x20), 0x211Ba + (2 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris PP Poisoned",        0x2119a + (2 * 0xDC0) + (6 * 0x20), 0x211Ba + (2 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris KK Poisoned",        0x2119a + (2 * 0xDC0) + (7 * 0x20), 0x211Ba + (2 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AP Poisoned",        0x2119a + (2 * 0xDC0) + (8 * 0x20), 0x211Ba + (2 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AK Poisoned",        0x2119a + (2 * 0xDC0) + (9 * 0x20), 0x211Ba + (2 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LP Zapped",          0x2119a + (2 * 0xDC0) + (10 * 0x20), 0x211Ba + (2 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris MP Zapped",          0x2119a + (2 * 0xDC0) + (11 * 0x20), 0x211Ba + (2 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris HP Zapped",          0x2119a + (2 * 0xDC0) + (12 * 0x20), 0x211Ba + (2 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris LK Zapped",          0x2119a + (2 * 0xDC0) + (13 * 0x20), 0x211Ba + (2 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris MK Zapped",          0x2119a + (2 * 0xDC0) + (14 * 0x20), 0x211Ba + (2 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris HK Zapped",          0x2119a + (2 * 0xDC0) + (15 * 0x20), 0x211Ba + (2 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris PP Zapped",          0x2119a + (2 * 0xDC0) + (16 * 0x20), 0x211Ba + (2 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris KK Zapped",          0x2119a + (2 * 0xDC0) + (17 * 0x20), 0x211Ba + (2 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris AP Zapped",          0x2119a + (2 * 0xDC0) + (18 * 0x20), 0x211Ba + (2 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris AK Zapped",          0x2119a + (2 * 0xDC0) + (19 * 0x20), 0x211Ba + (2 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Anakaris, 0x0c },
    { L"Anakaris LP Burned",          0x2119a + (2 * 0xDC0) + (20 * 0x20), 0x211Ba + (2 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MP Burned",          0x2119a + (2 * 0xDC0) + (21 * 0x20), 0x211Ba + (2 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HP Burned",          0x2119a + (2 * 0xDC0) + (22 * 0x20), 0x211Ba + (2 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LK Burned",          0x2119a + (2 * 0xDC0) + (23 * 0x20), 0x211Ba + (2 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MK Burned",          0x2119a + (2 * 0xDC0) + (24 * 0x20), 0x211Ba + (2 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HK Burned",          0x2119a + (2 * 0xDC0) + (25 * 0x20), 0x211Ba + (2 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris PP Burned",          0x2119a + (2 * 0xDC0) + (26 * 0x20), 0x211Ba + (2 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris KK Burned",          0x2119a + (2 * 0xDC0) + (27 * 0x20), 0x211Ba + (2 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AP Burned",          0x2119a + (2 * 0xDC0) + (28 * 0x20), 0x211Ba + (2 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AK Burned",          0x2119a + (2 * 0xDC0) + (29 * 0x20), 0x211Ba + (2 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (30 * 0x20), 0x211Ba + (2 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris MP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (31 * 0x20), 0x211Ba + (2 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris HP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (32 * 0x20), 0x211Ba + (2 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris LK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (33 * 0x20), 0x211Ba + (2 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris MK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (34 * 0x20), 0x211Ba + (2 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris HK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (35 * 0x20), 0x211Ba + (2 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris PP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (36 * 0x20), 0x211Ba + (2 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris KK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (37 * 0x20), 0x211Ba + (2 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris AP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (38 * 0x20), 0x211Ba + (2 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris AK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (39 * 0x20), 0x211Ba + (2 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Anakaris, 0x0d },
    { L"Anakaris ES 1",               0x2119a + (2 * 0xDC0) + (40 * 0x20), 0x211Ba + (2 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris ES 2",               0x2119a + (2 * 0xDC0) + (41 * 0x20), 0x211Ba + (2 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris ES 3",               0x2119a + (2 * 0xDC0) + (42 * 0x20), 0x211Ba + (2 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris ES 4",               0x2119a + (2 * 0xDC0) + (43 * 0x20), 0x211Ba + (2 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 1",               0x2119a + (2 * 0xDC0) + (44 * 0x20), 0x211Ba + (2 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 2",               0x2119a + (2 * 0xDC0) + (45 * 0x20), 0x211Ba + (2 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 3",               0x2119a + (2 * 0xDC0) + (46 * 0x20), 0x211Ba + (2 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 4",               0x2119a + (2 * 0xDC0) + (47 * 0x20), 0x211Ba + (2 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 5",               0x2119a + (2 * 0xDC0) + (48 * 0x20), 0x211Ba + (2 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 6",               0x2119a + (2 * 0xDC0) + (49 * 0x20), 0x211Ba + (2 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 7",               0x2119a + (2 * 0xDC0) + (50 * 0x20), 0x211Ba + (2 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 8",               0x2119a + (2 * 0xDC0) + (51 * 0x20), 0x211Ba + (2 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris Prova di Servo",     0x2119a + (2 * 0xDC0) + (52 * 0x20), 0x211Ba + (2 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris Finale Rosso",       0x2119a + (2 * 0xDC0) + (53 * 0x20), 0x211Ba + (2 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris Stone",              0x2119a + (2 * 0xDC0) + (54 * 0x20), 0x211Ba + (2 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (55 * 0x20), 0x211Ba + (2 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris MP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (56 * 0x20), 0x211Ba + (2 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris HP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (57 * 0x20), 0x211Ba + (2 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris LK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (58 * 0x20), 0x211Ba + (2 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris MK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (59 * 0x20), 0x211Ba + (2 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris HK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (60 * 0x20), 0x211Ba + (2 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris PP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (61 * 0x20), 0x211Ba + (2 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris KK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (62 * 0x20), 0x211Ba + (2 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris AP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (63 * 0x20), 0x211Ba + (2 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris AK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (64 * 0x20), 0x211Ba + (2 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"Anakaris Q-Bee's QJ Honey",   0x2119a + (2 * 0xDC0) + (65 * 0x20), 0x211Ba + (2 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LP Dark Force 1",    0x2119a + (2 * 0xDC0) + (66 * 0x20), 0x211Ba + (2 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LP Dark Force 2",    0x2119a + (2 * 0xDC0) + (67 * 0x20), 0x211Ba + (2 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LP Dark Force 3",    0x2119a + (2 * 0xDC0) + (68 * 0x20), 0x211Ba + (2 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LP Dark Force 4",    0x2119a + (2 * 0xDC0) + (69 * 0x20), 0x211Ba + (2 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MP Dark Force 1",    0x2119a + (2 * 0xDC0) + (70 * 0x20), 0x211Ba + (2 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MP Dark Force 2",    0x2119a + (2 * 0xDC0) + (71 * 0x20), 0x211Ba + (2 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MP Dark Force 3",    0x2119a + (2 * 0xDC0) + (72 * 0x20), 0x211Ba + (2 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MP Dark Force 4",    0x2119a + (2 * 0xDC0) + (73 * 0x20), 0x211Ba + (2 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HP Dark Force 1",    0x2119a + (2 * 0xDC0) + (74 * 0x20), 0x211Ba + (2 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HP Dark Force 2",    0x2119a + (2 * 0xDC0) + (75 * 0x20), 0x211Ba + (2 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HP Dark Force 3",    0x2119a + (2 * 0xDC0) + (76 * 0x20), 0x211Ba + (2 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HP Dark Force 4",    0x2119a + (2 * 0xDC0) + (77 * 0x20), 0x211Ba + (2 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LK Dark Force 1",    0x2119a + (2 * 0xDC0) + (78 * 0x20), 0x211Ba + (2 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LK Dark Force 2",    0x2119a + (2 * 0xDC0) + (79 * 0x20), 0x211Ba + (2 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LK Dark Force 3",    0x2119a + (2 * 0xDC0) + (80 * 0x20), 0x211Ba + (2 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris LK Dark Force 4",    0x2119a + (2 * 0xDC0) + (81 * 0x20), 0x211Ba + (2 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MK Dark Force 1",    0x2119a + (2 * 0xDC0) + (82 * 0x20), 0x211Ba + (2 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MK Dark Force 2",    0x2119a + (2 * 0xDC0) + (83 * 0x20), 0x211Ba + (2 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MK Dark Force 3",    0x2119a + (2 * 0xDC0) + (84 * 0x20), 0x211Ba + (2 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris MK Dark Force 4",    0x2119a + (2 * 0xDC0) + (85 * 0x20), 0x211Ba + (2 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HK Dark Force 1",    0x2119a + (2 * 0xDC0) + (86 * 0x20), 0x211Ba + (2 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HK Dark Force 2",    0x2119a + (2 * 0xDC0) + (87 * 0x20), 0x211Ba + (2 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HK Dark Force 3",    0x2119a + (2 * 0xDC0) + (88 * 0x20), 0x211Ba + (2 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris HK Dark Force 4",    0x2119a + (2 * 0xDC0) + (89 * 0x20), 0x211Ba + (2 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris PP Dark Force 1",    0x2119a + (2 * 0xDC0) + (90 * 0x20), 0x211Ba + (2 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris PP Dark Force 2",    0x2119a + (2 * 0xDC0) + (91 * 0x20), 0x211Ba + (2 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris PP Dark Force 3",    0x2119a + (2 * 0xDC0) + (92 * 0x20), 0x211Ba + (2 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris PP Dark Force 4",    0x2119a + (2 * 0xDC0) + (93 * 0x20), 0x211Ba + (2 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris KK Dark Force 1",    0x2119a + (2 * 0xDC0) + (94 * 0x20), 0x211Ba + (2 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris KK Dark Force 2",    0x2119a + (2 * 0xDC0) + (95 * 0x20), 0x211Ba + (2 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris KK Dark Force 3",    0x2119a + (2 * 0xDC0) + (96 * 0x20), 0x211Ba + (2 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris KK Dark Force 4",    0x2119a + (2 * 0xDC0) + (97 * 0x20), 0x211Ba + (2 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AP Dark Force 1",    0x2119a + (2 * 0xDC0) + (98 * 0x20), 0x211Ba + (2 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AP Dark Force 2",    0x2119a + (2 * 0xDC0) + (99 * 0x20), 0x211Ba + (2 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AP Dark Force 3",    0x2119a + (2 * 0xDC0) + (100 * 0x20), 0x211Ba + (2 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AP Dark Force 4",    0x2119a + (2 * 0xDC0) + (101 * 0x20), 0x211Ba + (2 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AK Dark Force 1",    0x2119a + (2 * 0xDC0) + (102 * 0x20), 0x211Ba + (2 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AK Dark Force 2",    0x2119a + (2 * 0xDC0) + (103 * 0x20), 0x211Ba + (2 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AK Dark Force 3",    0x2119a + (2 * 0xDC0) + (104 * 0x20), 0x211Ba + (2 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris AK Dark Force 4",    0x2119a + (2 * 0xDC0) + (105 * 0x20), 0x211Ba + (2 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris ??? 1",              0x2119a + (2 * 0xDC0) + (106 * 0x20), 0x211Ba + (2 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris ??? 2",              0x2119a + (2 * 0xDC0) + (107 * 0x20), 0x211Ba + (2 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris ??? 3",              0x2119a + (2 * 0xDC0) + (108 * 0x20), 0x211Ba + (2 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Anakaris },
    { L"Anakaris ??? 4",              0x2119a + (2 * 0xDC0) + (109 * 0x20), 0x211Ba + (2 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Anakaris },
 };

const sGame_PaletteDataset VSAV2_A_Felicia_PALETTES_SPECIAL[] =
{
    { L"Felicia LP Poisoned",        0x2119a + (3 * 0xDC0) + (0 * 0x20), 0x211Ba + (3 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MP Poisoned",        0x2119a + (3 * 0xDC0) + (1 * 0x20), 0x211Ba + (3 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HP Poisoned",        0x2119a + (3 * 0xDC0) + (2 * 0x20), 0x211Ba + (3 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LK Poisoned",        0x2119a + (3 * 0xDC0) + (3 * 0x20), 0x211Ba + (3 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MK Poisoned",        0x2119a + (3 * 0xDC0) + (4 * 0x20), 0x211Ba + (3 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HK Poisoned",        0x2119a + (3 * 0xDC0) + (5 * 0x20), 0x211Ba + (3 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia PP Poisoned",        0x2119a + (3 * 0xDC0) + (6 * 0x20), 0x211Ba + (3 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia KK Poisoned",        0x2119a + (3 * 0xDC0) + (7 * 0x20), 0x211Ba + (3 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AP Poisoned",        0x2119a + (3 * 0xDC0) + (8 * 0x20), 0x211Ba + (3 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AK Poisoned",        0x2119a + (3 * 0xDC0) + (9 * 0x20), 0x211Ba + (3 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LP Zapped",          0x2119a + (3 * 0xDC0) + (10 * 0x20), 0x211Ba + (3 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia MP Zapped",          0x2119a + (3 * 0xDC0) + (11 * 0x20), 0x211Ba + (3 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia HP Zapped",          0x2119a + (3 * 0xDC0) + (12 * 0x20), 0x211Ba + (3 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia LK Zapped",          0x2119a + (3 * 0xDC0) + (13 * 0x20), 0x211Ba + (3 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia MK Zapped",          0x2119a + (3 * 0xDC0) + (14 * 0x20), 0x211Ba + (3 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia HK Zapped",          0x2119a + (3 * 0xDC0) + (15 * 0x20), 0x211Ba + (3 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia PP Zapped",          0x2119a + (3 * 0xDC0) + (16 * 0x20), 0x211Ba + (3 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia KK Zapped",          0x2119a + (3 * 0xDC0) + (17 * 0x20), 0x211Ba + (3 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia AP Zapped",          0x2119a + (3 * 0xDC0) + (18 * 0x20), 0x211Ba + (3 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia AK Zapped",          0x2119a + (3 * 0xDC0) + (19 * 0x20), 0x211Ba + (3 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Felicia, 0x0c },
    { L"Felicia LP Burned",          0x2119a + (3 * 0xDC0) + (20 * 0x20), 0x211Ba + (3 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MP Burned",          0x2119a + (3 * 0xDC0) + (21 * 0x20), 0x211Ba + (3 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HP Burned",          0x2119a + (3 * 0xDC0) + (22 * 0x20), 0x211Ba + (3 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LK Burned",          0x2119a + (3 * 0xDC0) + (23 * 0x20), 0x211Ba + (3 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MK Burned",          0x2119a + (3 * 0xDC0) + (24 * 0x20), 0x211Ba + (3 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HK Burned",          0x2119a + (3 * 0xDC0) + (25 * 0x20), 0x211Ba + (3 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia PP Burned",          0x2119a + (3 * 0xDC0) + (26 * 0x20), 0x211Ba + (3 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia KK Burned",          0x2119a + (3 * 0xDC0) + (27 * 0x20), 0x211Ba + (3 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AP Burned",          0x2119a + (3 * 0xDC0) + (28 * 0x20), 0x211Ba + (3 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AK Burned",          0x2119a + (3 * 0xDC0) + (29 * 0x20), 0x211Ba + (3 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (30 * 0x20), 0x211Ba + (3 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia MP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (31 * 0x20), 0x211Ba + (3 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia HP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (32 * 0x20), 0x211Ba + (3 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia LK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (33 * 0x20), 0x211Ba + (3 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia MK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (34 * 0x20), 0x211Ba + (3 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia HK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (35 * 0x20), 0x211Ba + (3 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia PP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (36 * 0x20), 0x211Ba + (3 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia KK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (37 * 0x20), 0x211Ba + (3 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia AP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (38 * 0x20), 0x211Ba + (3 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia AK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (39 * 0x20), 0x211Ba + (3 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Felicia, 0x0d },
    { L"Felicia ES 1",               0x2119a + (3 * 0xDC0) + (40 * 0x20), 0x211Ba + (3 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia ES 2",               0x2119a + (3 * 0xDC0) + (41 * 0x20), 0x211Ba + (3 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia ES 3",               0x2119a + (3 * 0xDC0) + (42 * 0x20), 0x211Ba + (3 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia ES 4",               0x2119a + (3 * 0xDC0) + (43 * 0x20), 0x211Ba + (3 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 1",               0x2119a + (3 * 0xDC0) + (44 * 0x20), 0x211Ba + (3 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 2",               0x2119a + (3 * 0xDC0) + (45 * 0x20), 0x211Ba + (3 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 3",               0x2119a + (3 * 0xDC0) + (46 * 0x20), 0x211Ba + (3 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 4",               0x2119a + (3 * 0xDC0) + (47 * 0x20), 0x211Ba + (3 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 5",               0x2119a + (3 * 0xDC0) + (48 * 0x20), 0x211Ba + (3 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 6",               0x2119a + (3 * 0xDC0) + (49 * 0x20), 0x211Ba + (3 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 7",               0x2119a + (3 * 0xDC0) + (50 * 0x20), 0x211Ba + (3 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia EX 8",               0x2119a + (3 * 0xDC0) + (51 * 0x20), 0x211Ba + (3 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia Prova di Servo",     0x2119a + (3 * 0xDC0) + (52 * 0x20), 0x211Ba + (3 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia Finale Rosso",       0x2119a + (3 * 0xDC0) + (53 * 0x20), 0x211Ba + (3 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia Stone",              0x2119a + (3 * 0xDC0) + (54 * 0x20), 0x211Ba + (3 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (55 * 0x20), 0x211Ba + (3 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia MP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (56 * 0x20), 0x211Ba + (3 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia HP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (57 * 0x20), 0x211Ba + (3 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia LK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (58 * 0x20), 0x211Ba + (3 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia MK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (59 * 0x20), 0x211Ba + (3 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia HK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (60 * 0x20), 0x211Ba + (3 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia PP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (61 * 0x20), 0x211Ba + (3 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia KK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (62 * 0x20), 0x211Ba + (3 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia AP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (63 * 0x20), 0x211Ba + (3 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia AK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (64 * 0x20), 0x211Ba + (3 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
    { L"Felicia Q-Bee's QJ Honey",   0x2119a + (3 * 0xDC0) + (65 * 0x20), 0x211Ba + (3 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LP Dark Force 1",    0x2119a + (3 * 0xDC0) + (66 * 0x20), 0x211Ba + (3 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LP Dark Force 2",    0x2119a + (3 * 0xDC0) + (67 * 0x20), 0x211Ba + (3 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LP Dark Force 3",    0x2119a + (3 * 0xDC0) + (68 * 0x20), 0x211Ba + (3 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LP Dark Force 4",    0x2119a + (3 * 0xDC0) + (69 * 0x20), 0x211Ba + (3 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MP Dark Force 1",    0x2119a + (3 * 0xDC0) + (70 * 0x20), 0x211Ba + (3 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MP Dark Force 2",    0x2119a + (3 * 0xDC0) + (71 * 0x20), 0x211Ba + (3 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MP Dark Force 3",    0x2119a + (3 * 0xDC0) + (72 * 0x20), 0x211Ba + (3 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MP Dark Force 4",    0x2119a + (3 * 0xDC0) + (73 * 0x20), 0x211Ba + (3 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HP Dark Force 1",    0x2119a + (3 * 0xDC0) + (74 * 0x20), 0x211Ba + (3 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HP Dark Force 2",    0x2119a + (3 * 0xDC0) + (75 * 0x20), 0x211Ba + (3 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HP Dark Force 3",    0x2119a + (3 * 0xDC0) + (76 * 0x20), 0x211Ba + (3 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HP Dark Force 4",    0x2119a + (3 * 0xDC0) + (77 * 0x20), 0x211Ba + (3 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LK Dark Force 1",    0x2119a + (3 * 0xDC0) + (78 * 0x20), 0x211Ba + (3 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LK Dark Force 2",    0x2119a + (3 * 0xDC0) + (79 * 0x20), 0x211Ba + (3 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LK Dark Force 3",    0x2119a + (3 * 0xDC0) + (80 * 0x20), 0x211Ba + (3 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia LK Dark Force 4",    0x2119a + (3 * 0xDC0) + (81 * 0x20), 0x211Ba + (3 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MK Dark Force 1",    0x2119a + (3 * 0xDC0) + (82 * 0x20), 0x211Ba + (3 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MK Dark Force 2",    0x2119a + (3 * 0xDC0) + (83 * 0x20), 0x211Ba + (3 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MK Dark Force 3",    0x2119a + (3 * 0xDC0) + (84 * 0x20), 0x211Ba + (3 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia MK Dark Force 4",    0x2119a + (3 * 0xDC0) + (85 * 0x20), 0x211Ba + (3 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HK Dark Force 1",    0x2119a + (3 * 0xDC0) + (86 * 0x20), 0x211Ba + (3 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HK Dark Force 2",    0x2119a + (3 * 0xDC0) + (87 * 0x20), 0x211Ba + (3 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HK Dark Force 3",    0x2119a + (3 * 0xDC0) + (88 * 0x20), 0x211Ba + (3 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia HK Dark Force 4",    0x2119a + (3 * 0xDC0) + (89 * 0x20), 0x211Ba + (3 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia PP Dark Force 1",    0x2119a + (3 * 0xDC0) + (90 * 0x20), 0x211Ba + (3 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia PP Dark Force 2",    0x2119a + (3 * 0xDC0) + (91 * 0x20), 0x211Ba + (3 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia PP Dark Force 3",    0x2119a + (3 * 0xDC0) + (92 * 0x20), 0x211Ba + (3 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia PP Dark Force 4",    0x2119a + (3 * 0xDC0) + (93 * 0x20), 0x211Ba + (3 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia KK Dark Force 1",    0x2119a + (3 * 0xDC0) + (94 * 0x20), 0x211Ba + (3 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia KK Dark Force 2",    0x2119a + (3 * 0xDC0) + (95 * 0x20), 0x211Ba + (3 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia KK Dark Force 3",    0x2119a + (3 * 0xDC0) + (96 * 0x20), 0x211Ba + (3 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia KK Dark Force 4",    0x2119a + (3 * 0xDC0) + (97 * 0x20), 0x211Ba + (3 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AP Dark Force 1",    0x2119a + (3 * 0xDC0) + (98 * 0x20), 0x211Ba + (3 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AP Dark Force 2",    0x2119a + (3 * 0xDC0) + (99 * 0x20), 0x211Ba + (3 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AP Dark Force 3",    0x2119a + (3 * 0xDC0) + (100 * 0x20), 0x211Ba + (3 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AP Dark Force 4",    0x2119a + (3 * 0xDC0) + (101 * 0x20), 0x211Ba + (3 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AK Dark Force 1",    0x2119a + (3 * 0xDC0) + (102 * 0x20), 0x211Ba + (3 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AK Dark Force 2",    0x2119a + (3 * 0xDC0) + (103 * 0x20), 0x211Ba + (3 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AK Dark Force 3",    0x2119a + (3 * 0xDC0) + (104 * 0x20), 0x211Ba + (3 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia AK Dark Force 4",    0x2119a + (3 * 0xDC0) + (105 * 0x20), 0x211Ba + (3 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia ??? 1",              0x2119a + (3 * 0xDC0) + (106 * 0x20), 0x211Ba + (3 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia ??? 2",              0x2119a + (3 * 0xDC0) + (107 * 0x20), 0x211Ba + (3 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia ??? 3",              0x2119a + (3 * 0xDC0) + (108 * 0x20), 0x211Ba + (3 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Felicia },
    { L"Felicia ??? 4",              0x2119a + (3 * 0xDC0) + (109 * 0x20), 0x211Ba + (3 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Felicia },
 };

const sGame_PaletteDataset VSAV2_A_Bishamon_PALETTES_SPECIAL[] =
{
    { L"Bishamon LP Poisoned",        0x2119a + (4 * 0xDC0) + (0 * 0x20), 0x211Ba + (4 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MP Poisoned",        0x2119a + (4 * 0xDC0) + (1 * 0x20), 0x211Ba + (4 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HP Poisoned",        0x2119a + (4 * 0xDC0) + (2 * 0x20), 0x211Ba + (4 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LK Poisoned",        0x2119a + (4 * 0xDC0) + (3 * 0x20), 0x211Ba + (4 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MK Poisoned",        0x2119a + (4 * 0xDC0) + (4 * 0x20), 0x211Ba + (4 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HK Poisoned",        0x2119a + (4 * 0xDC0) + (5 * 0x20), 0x211Ba + (4 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon PP Poisoned",        0x2119a + (4 * 0xDC0) + (6 * 0x20), 0x211Ba + (4 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon KK Poisoned",        0x2119a + (4 * 0xDC0) + (7 * 0x20), 0x211Ba + (4 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AP Poisoned",        0x2119a + (4 * 0xDC0) + (8 * 0x20), 0x211Ba + (4 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AK Poisoned",        0x2119a + (4 * 0xDC0) + (9 * 0x20), 0x211Ba + (4 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LP Zapped",          0x2119a + (4 * 0xDC0) + (10 * 0x20), 0x211Ba + (4 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon MP Zapped",          0x2119a + (4 * 0xDC0) + (11 * 0x20), 0x211Ba + (4 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon HP Zapped",          0x2119a + (4 * 0xDC0) + (12 * 0x20), 0x211Ba + (4 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon LK Zapped",          0x2119a + (4 * 0xDC0) + (13 * 0x20), 0x211Ba + (4 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon MK Zapped",          0x2119a + (4 * 0xDC0) + (14 * 0x20), 0x211Ba + (4 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon HK Zapped",          0x2119a + (4 * 0xDC0) + (15 * 0x20), 0x211Ba + (4 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon PP Zapped",          0x2119a + (4 * 0xDC0) + (16 * 0x20), 0x211Ba + (4 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon KK Zapped",          0x2119a + (4 * 0xDC0) + (17 * 0x20), 0x211Ba + (4 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon AP Zapped",          0x2119a + (4 * 0xDC0) + (18 * 0x20), 0x211Ba + (4 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon AK Zapped",          0x2119a + (4 * 0xDC0) + (19 * 0x20), 0x211Ba + (4 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Bishamon LP Burned",          0x2119a + (4 * 0xDC0) + (20 * 0x20), 0x211Ba + (4 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MP Burned",          0x2119a + (4 * 0xDC0) + (21 * 0x20), 0x211Ba + (4 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HP Burned",          0x2119a + (4 * 0xDC0) + (22 * 0x20), 0x211Ba + (4 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LK Burned",          0x2119a + (4 * 0xDC0) + (23 * 0x20), 0x211Ba + (4 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MK Burned",          0x2119a + (4 * 0xDC0) + (24 * 0x20), 0x211Ba + (4 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HK Burned",          0x2119a + (4 * 0xDC0) + (25 * 0x20), 0x211Ba + (4 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon PP Burned",          0x2119a + (4 * 0xDC0) + (26 * 0x20), 0x211Ba + (4 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon KK Burned",          0x2119a + (4 * 0xDC0) + (27 * 0x20), 0x211Ba + (4 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AP Burned",          0x2119a + (4 * 0xDC0) + (28 * 0x20), 0x211Ba + (4 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AK Burned",          0x2119a + (4 * 0xDC0) + (29 * 0x20), 0x211Ba + (4 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (30 * 0x20), 0x211Ba + (4 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon MP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (31 * 0x20), 0x211Ba + (4 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon HP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (32 * 0x20), 0x211Ba + (4 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon LK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (33 * 0x20), 0x211Ba + (4 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon MK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (34 * 0x20), 0x211Ba + (4 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon HK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (35 * 0x20), 0x211Ba + (4 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon PP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (36 * 0x20), 0x211Ba + (4 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon KK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (37 * 0x20), 0x211Ba + (4 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon AP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (38 * 0x20), 0x211Ba + (4 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon AK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (39 * 0x20), 0x211Ba + (4 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"Bishamon ES 1",               0x2119a + (4 * 0xDC0) + (40 * 0x20), 0x211Ba + (4 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ES 2",               0x2119a + (4 * 0xDC0) + (41 * 0x20), 0x211Ba + (4 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ES 3",               0x2119a + (4 * 0xDC0) + (42 * 0x20), 0x211Ba + (4 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ES 4",               0x2119a + (4 * 0xDC0) + (43 * 0x20), 0x211Ba + (4 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 1",               0x2119a + (4 * 0xDC0) + (44 * 0x20), 0x211Ba + (4 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 2",               0x2119a + (4 * 0xDC0) + (45 * 0x20), 0x211Ba + (4 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 3",               0x2119a + (4 * 0xDC0) + (46 * 0x20), 0x211Ba + (4 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 4",               0x2119a + (4 * 0xDC0) + (47 * 0x20), 0x211Ba + (4 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 5",               0x2119a + (4 * 0xDC0) + (48 * 0x20), 0x211Ba + (4 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 6",               0x2119a + (4 * 0xDC0) + (49 * 0x20), 0x211Ba + (4 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 7",               0x2119a + (4 * 0xDC0) + (50 * 0x20), 0x211Ba + (4 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 8",               0x2119a + (4 * 0xDC0) + (51 * 0x20), 0x211Ba + (4 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Prova di Servo",     0x2119a + (4 * 0xDC0) + (52 * 0x20), 0x211Ba + (4 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Finale Rosso",       0x2119a + (4 * 0xDC0) + (53 * 0x20), 0x211Ba + (4 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Stone",              0x2119a + (4 * 0xDC0) + (54 * 0x20), 0x211Ba + (4 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (55 * 0x20), 0x211Ba + (4 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (56 * 0x20), 0x211Ba + (4 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (57 * 0x20), 0x211Ba + (4 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (58 * 0x20), 0x211Ba + (4 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (59 * 0x20), 0x211Ba + (4 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (60 * 0x20), 0x211Ba + (4 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon PP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (61 * 0x20), 0x211Ba + (4 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon KK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (62 * 0x20), 0x211Ba + (4 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (63 * 0x20), 0x211Ba + (4 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (64 * 0x20), 0x211Ba + (4 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Q-Bee's QJ Honey",   0x2119a + (4 * 0xDC0) + (65 * 0x20), 0x211Ba + (4 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 1",    0x2119a + (4 * 0xDC0) + (66 * 0x20), 0x211Ba + (4 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 2",    0x2119a + (4 * 0xDC0) + (67 * 0x20), 0x211Ba + (4 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 3",    0x2119a + (4 * 0xDC0) + (68 * 0x20), 0x211Ba + (4 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 4",    0x2119a + (4 * 0xDC0) + (69 * 0x20), 0x211Ba + (4 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 1",    0x2119a + (4 * 0xDC0) + (70 * 0x20), 0x211Ba + (4 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 2",    0x2119a + (4 * 0xDC0) + (71 * 0x20), 0x211Ba + (4 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 3",    0x2119a + (4 * 0xDC0) + (72 * 0x20), 0x211Ba + (4 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 4",    0x2119a + (4 * 0xDC0) + (73 * 0x20), 0x211Ba + (4 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 1",    0x2119a + (4 * 0xDC0) + (74 * 0x20), 0x211Ba + (4 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 2",    0x2119a + (4 * 0xDC0) + (75 * 0x20), 0x211Ba + (4 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 3",    0x2119a + (4 * 0xDC0) + (76 * 0x20), 0x211Ba + (4 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 4",    0x2119a + (4 * 0xDC0) + (77 * 0x20), 0x211Ba + (4 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 1",    0x2119a + (4 * 0xDC0) + (78 * 0x20), 0x211Ba + (4 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 2",    0x2119a + (4 * 0xDC0) + (79 * 0x20), 0x211Ba + (4 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 3",    0x2119a + (4 * 0xDC0) + (80 * 0x20), 0x211Ba + (4 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 4",    0x2119a + (4 * 0xDC0) + (81 * 0x20), 0x211Ba + (4 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 1",    0x2119a + (4 * 0xDC0) + (82 * 0x20), 0x211Ba + (4 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 2",    0x2119a + (4 * 0xDC0) + (83 * 0x20), 0x211Ba + (4 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 3",    0x2119a + (4 * 0xDC0) + (84 * 0x20), 0x211Ba + (4 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 4",    0x2119a + (4 * 0xDC0) + (85 * 0x20), 0x211Ba + (4 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 1",    0x2119a + (4 * 0xDC0) + (86 * 0x20), 0x211Ba + (4 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 2",    0x2119a + (4 * 0xDC0) + (87 * 0x20), 0x211Ba + (4 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 3",    0x2119a + (4 * 0xDC0) + (88 * 0x20), 0x211Ba + (4 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 4",    0x2119a + (4 * 0xDC0) + (89 * 0x20), 0x211Ba + (4 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 1",    0x2119a + (4 * 0xDC0) + (90 * 0x20), 0x211Ba + (4 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 2",    0x2119a + (4 * 0xDC0) + (91 * 0x20), 0x211Ba + (4 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 3",    0x2119a + (4 * 0xDC0) + (92 * 0x20), 0x211Ba + (4 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 4",    0x2119a + (4 * 0xDC0) + (93 * 0x20), 0x211Ba + (4 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 1",    0x2119a + (4 * 0xDC0) + (94 * 0x20), 0x211Ba + (4 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 2",    0x2119a + (4 * 0xDC0) + (95 * 0x20), 0x211Ba + (4 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 3",    0x2119a + (4 * 0xDC0) + (96 * 0x20), 0x211Ba + (4 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 4",    0x2119a + (4 * 0xDC0) + (97 * 0x20), 0x211Ba + (4 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 1",    0x2119a + (4 * 0xDC0) + (98 * 0x20), 0x211Ba + (4 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 2",    0x2119a + (4 * 0xDC0) + (99 * 0x20), 0x211Ba + (4 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 3",    0x2119a + (4 * 0xDC0) + (100 * 0x20), 0x211Ba + (4 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 4",    0x2119a + (4 * 0xDC0) + (101 * 0x20), 0x211Ba + (4 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 1",    0x2119a + (4 * 0xDC0) + (102 * 0x20), 0x211Ba + (4 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 2",    0x2119a + (4 * 0xDC0) + (103 * 0x20), 0x211Ba + (4 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 3",    0x2119a + (4 * 0xDC0) + (104 * 0x20), 0x211Ba + (4 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 4",    0x2119a + (4 * 0xDC0) + (105 * 0x20), 0x211Ba + (4 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ??? 1",              0x2119a + (4 * 0xDC0) + (106 * 0x20), 0x211Ba + (4 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ??? 2",              0x2119a + (4 * 0xDC0) + (107 * 0x20), 0x211Ba + (4 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ??? 3",              0x2119a + (4 * 0xDC0) + (108 * 0x20), 0x211Ba + (4 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ??? 4",              0x2119a + (4 * 0xDC0) + (109 * 0x20), 0x211Ba + (4 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_Aulbath_PALETTES_SPECIAL[] =
{
    { L"Aulbath LP Poisoned",        0x2119a + (5 * 0xDC0) + (0 * 0x20), 0x211Ba + (5 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MP Poisoned",        0x2119a + (5 * 0xDC0) + (1 * 0x20), 0x211Ba + (5 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HP Poisoned",        0x2119a + (5 * 0xDC0) + (2 * 0x20), 0x211Ba + (5 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LK Poisoned",        0x2119a + (5 * 0xDC0) + (3 * 0x20), 0x211Ba + (5 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MK Poisoned",        0x2119a + (5 * 0xDC0) + (4 * 0x20), 0x211Ba + (5 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HK Poisoned",        0x2119a + (5 * 0xDC0) + (5 * 0x20), 0x211Ba + (5 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath PP Poisoned",        0x2119a + (5 * 0xDC0) + (6 * 0x20), 0x211Ba + (5 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath KK Poisoned",        0x2119a + (5 * 0xDC0) + (7 * 0x20), 0x211Ba + (5 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AP Poisoned",        0x2119a + (5 * 0xDC0) + (8 * 0x20), 0x211Ba + (5 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AK Poisoned",        0x2119a + (5 * 0xDC0) + (9 * 0x20), 0x211Ba + (5 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LP Zapped",          0x2119a + (5 * 0xDC0) + (10 * 0x20), 0x211Ba + (5 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath MP Zapped",          0x2119a + (5 * 0xDC0) + (11 * 0x20), 0x211Ba + (5 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath HP Zapped",          0x2119a + (5 * 0xDC0) + (12 * 0x20), 0x211Ba + (5 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath LK Zapped",          0x2119a + (5 * 0xDC0) + (13 * 0x20), 0x211Ba + (5 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath MK Zapped",          0x2119a + (5 * 0xDC0) + (14 * 0x20), 0x211Ba + (5 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath HK Zapped",          0x2119a + (5 * 0xDC0) + (15 * 0x20), 0x211Ba + (5 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath PP Zapped",          0x2119a + (5 * 0xDC0) + (16 * 0x20), 0x211Ba + (5 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath KK Zapped",          0x2119a + (5 * 0xDC0) + (17 * 0x20), 0x211Ba + (5 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath AP Zapped",          0x2119a + (5 * 0xDC0) + (18 * 0x20), 0x211Ba + (5 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath AK Zapped",          0x2119a + (5 * 0xDC0) + (19 * 0x20), 0x211Ba + (5 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"Aulbath LP Burned",          0x2119a + (5 * 0xDC0) + (20 * 0x20), 0x211Ba + (5 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MP Burned",          0x2119a + (5 * 0xDC0) + (21 * 0x20), 0x211Ba + (5 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HP Burned",          0x2119a + (5 * 0xDC0) + (22 * 0x20), 0x211Ba + (5 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LK Burned",          0x2119a + (5 * 0xDC0) + (23 * 0x20), 0x211Ba + (5 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MK Burned",          0x2119a + (5 * 0xDC0) + (24 * 0x20), 0x211Ba + (5 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HK Burned",          0x2119a + (5 * 0xDC0) + (25 * 0x20), 0x211Ba + (5 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath PP Burned",          0x2119a + (5 * 0xDC0) + (26 * 0x20), 0x211Ba + (5 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath KK Burned",          0x2119a + (5 * 0xDC0) + (27 * 0x20), 0x211Ba + (5 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AP Burned",          0x2119a + (5 * 0xDC0) + (28 * 0x20), 0x211Ba + (5 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AK Burned",          0x2119a + (5 * 0xDC0) + (29 * 0x20), 0x211Ba + (5 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (30 * 0x20), 0x211Ba + (5 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath MP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (31 * 0x20), 0x211Ba + (5 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath HP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (32 * 0x20), 0x211Ba + (5 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath LK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (33 * 0x20), 0x211Ba + (5 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath MK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (34 * 0x20), 0x211Ba + (5 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath HK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (35 * 0x20), 0x211Ba + (5 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath PP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (36 * 0x20), 0x211Ba + (5 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath KK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (37 * 0x20), 0x211Ba + (5 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath AP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (38 * 0x20), 0x211Ba + (5 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath AK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (39 * 0x20), 0x211Ba + (5 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"Aulbath ES 1",               0x2119a + (5 * 0xDC0) + (40 * 0x20), 0x211Ba + (5 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ES 2",               0x2119a + (5 * 0xDC0) + (41 * 0x20), 0x211Ba + (5 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ES 3",               0x2119a + (5 * 0xDC0) + (42 * 0x20), 0x211Ba + (5 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ES 4",               0x2119a + (5 * 0xDC0) + (43 * 0x20), 0x211Ba + (5 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 1",               0x2119a + (5 * 0xDC0) + (44 * 0x20), 0x211Ba + (5 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 2",               0x2119a + (5 * 0xDC0) + (45 * 0x20), 0x211Ba + (5 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 3",               0x2119a + (5 * 0xDC0) + (46 * 0x20), 0x211Ba + (5 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 4",               0x2119a + (5 * 0xDC0) + (47 * 0x20), 0x211Ba + (5 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 5",               0x2119a + (5 * 0xDC0) + (48 * 0x20), 0x211Ba + (5 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 6",               0x2119a + (5 * 0xDC0) + (49 * 0x20), 0x211Ba + (5 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 7",               0x2119a + (5 * 0xDC0) + (50 * 0x20), 0x211Ba + (5 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 8",               0x2119a + (5 * 0xDC0) + (51 * 0x20), 0x211Ba + (5 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Prova di Servo",     0x2119a + (5 * 0xDC0) + (52 * 0x20), 0x211Ba + (5 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Finale Rosso",       0x2119a + (5 * 0xDC0) + (53 * 0x20), 0x211Ba + (5 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Stone",              0x2119a + (5 * 0xDC0) + (54 * 0x20), 0x211Ba + (5 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (55 * 0x20), 0x211Ba + (5 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (56 * 0x20), 0x211Ba + (5 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (57 * 0x20), 0x211Ba + (5 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (58 * 0x20), 0x211Ba + (5 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (59 * 0x20), 0x211Ba + (5 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (60 * 0x20), 0x211Ba + (5 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath PP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (61 * 0x20), 0x211Ba + (5 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath KK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (62 * 0x20), 0x211Ba + (5 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (63 * 0x20), 0x211Ba + (5 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (64 * 0x20), 0x211Ba + (5 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Q-Bee's QJ Honey",   0x2119a + (5 * 0xDC0) + (65 * 0x20), 0x211Ba + (5 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 1",    0x2119a + (5 * 0xDC0) + (66 * 0x20), 0x211Ba + (5 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 2",    0x2119a + (5 * 0xDC0) + (67 * 0x20), 0x211Ba + (5 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 3",    0x2119a + (5 * 0xDC0) + (68 * 0x20), 0x211Ba + (5 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 4",    0x2119a + (5 * 0xDC0) + (69 * 0x20), 0x211Ba + (5 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 1",    0x2119a + (5 * 0xDC0) + (70 * 0x20), 0x211Ba + (5 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 2",    0x2119a + (5 * 0xDC0) + (71 * 0x20), 0x211Ba + (5 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 3",    0x2119a + (5 * 0xDC0) + (72 * 0x20), 0x211Ba + (5 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 4",    0x2119a + (5 * 0xDC0) + (73 * 0x20), 0x211Ba + (5 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 1",    0x2119a + (5 * 0xDC0) + (74 * 0x20), 0x211Ba + (5 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 2",    0x2119a + (5 * 0xDC0) + (75 * 0x20), 0x211Ba + (5 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 3",    0x2119a + (5 * 0xDC0) + (76 * 0x20), 0x211Ba + (5 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 4",    0x2119a + (5 * 0xDC0) + (77 * 0x20), 0x211Ba + (5 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 1",    0x2119a + (5 * 0xDC0) + (78 * 0x20), 0x211Ba + (5 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 2",    0x2119a + (5 * 0xDC0) + (79 * 0x20), 0x211Ba + (5 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 3",    0x2119a + (5 * 0xDC0) + (80 * 0x20), 0x211Ba + (5 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 4",    0x2119a + (5 * 0xDC0) + (81 * 0x20), 0x211Ba + (5 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 1",    0x2119a + (5 * 0xDC0) + (82 * 0x20), 0x211Ba + (5 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 2",    0x2119a + (5 * 0xDC0) + (83 * 0x20), 0x211Ba + (5 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 3",    0x2119a + (5 * 0xDC0) + (84 * 0x20), 0x211Ba + (5 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 4",    0x2119a + (5 * 0xDC0) + (85 * 0x20), 0x211Ba + (5 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 1",    0x2119a + (5 * 0xDC0) + (86 * 0x20), 0x211Ba + (5 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 2",    0x2119a + (5 * 0xDC0) + (87 * 0x20), 0x211Ba + (5 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 3",    0x2119a + (5 * 0xDC0) + (88 * 0x20), 0x211Ba + (5 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 4",    0x2119a + (5 * 0xDC0) + (89 * 0x20), 0x211Ba + (5 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 1",    0x2119a + (5 * 0xDC0) + (90 * 0x20), 0x211Ba + (5 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 2",    0x2119a + (5 * 0xDC0) + (91 * 0x20), 0x211Ba + (5 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 3",    0x2119a + (5 * 0xDC0) + (92 * 0x20), 0x211Ba + (5 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 4",    0x2119a + (5 * 0xDC0) + (93 * 0x20), 0x211Ba + (5 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 1",    0x2119a + (5 * 0xDC0) + (94 * 0x20), 0x211Ba + (5 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 2",    0x2119a + (5 * 0xDC0) + (95 * 0x20), 0x211Ba + (5 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 3",    0x2119a + (5 * 0xDC0) + (96 * 0x20), 0x211Ba + (5 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 4",    0x2119a + (5 * 0xDC0) + (97 * 0x20), 0x211Ba + (5 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 1",    0x2119a + (5 * 0xDC0) + (98 * 0x20), 0x211Ba + (5 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 2",    0x2119a + (5 * 0xDC0) + (99 * 0x20), 0x211Ba + (5 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 3",    0x2119a + (5 * 0xDC0) + (100 * 0x20), 0x211Ba + (5 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 4",    0x2119a + (5 * 0xDC0) + (101 * 0x20), 0x211Ba + (5 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 1",    0x2119a + (5 * 0xDC0) + (102 * 0x20), 0x211Ba + (5 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 2",    0x2119a + (5 * 0xDC0) + (103 * 0x20), 0x211Ba + (5 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 3",    0x2119a + (5 * 0xDC0) + (104 * 0x20), 0x211Ba + (5 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 4",    0x2119a + (5 * 0xDC0) + (105 * 0x20), 0x211Ba + (5 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ??? 1",              0x2119a + (5 * 0xDC0) + (106 * 0x20), 0x211Ba + (5 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ??? 2",              0x2119a + (5 * 0xDC0) + (107 * 0x20), 0x211Ba + (5 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ??? 3",              0x2119a + (5 * 0xDC0) + (108 * 0x20), 0x211Ba + (5 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ??? 4",              0x2119a + (5 * 0xDC0) + (109 * 0x20), 0x211Ba + (5 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Aulbath },
 };

const sGame_PaletteDataset VSAV2_A_Sasquatch_PALETTES_SPECIAL[] =
{
    { L"Sasquatch LP Poisoned",        0x2119a + (6 * 0xDC0) + (0 * 0x20), 0x211Ba + (6 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MP Poisoned",        0x2119a + (6 * 0xDC0) + (1 * 0x20), 0x211Ba + (6 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HP Poisoned",        0x2119a + (6 * 0xDC0) + (2 * 0x20), 0x211Ba + (6 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LK Poisoned",        0x2119a + (6 * 0xDC0) + (3 * 0x20), 0x211Ba + (6 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MK Poisoned",        0x2119a + (6 * 0xDC0) + (4 * 0x20), 0x211Ba + (6 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HK Poisoned",        0x2119a + (6 * 0xDC0) + (5 * 0x20), 0x211Ba + (6 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch PP Poisoned",        0x2119a + (6 * 0xDC0) + (6 * 0x20), 0x211Ba + (6 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch KK Poisoned",        0x2119a + (6 * 0xDC0) + (7 * 0x20), 0x211Ba + (6 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AP Poisoned",        0x2119a + (6 * 0xDC0) + (8 * 0x20), 0x211Ba + (6 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AK Poisoned",        0x2119a + (6 * 0xDC0) + (9 * 0x20), 0x211Ba + (6 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LP Zapped",          0x2119a + (6 * 0xDC0) + (10 * 0x20), 0x211Ba + (6 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch MP Zapped",          0x2119a + (6 * 0xDC0) + (11 * 0x20), 0x211Ba + (6 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch HP Zapped",          0x2119a + (6 * 0xDC0) + (12 * 0x20), 0x211Ba + (6 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch LK Zapped",          0x2119a + (6 * 0xDC0) + (13 * 0x20), 0x211Ba + (6 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch MK Zapped",          0x2119a + (6 * 0xDC0) + (14 * 0x20), 0x211Ba + (6 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch HK Zapped",          0x2119a + (6 * 0xDC0) + (15 * 0x20), 0x211Ba + (6 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch PP Zapped",          0x2119a + (6 * 0xDC0) + (16 * 0x20), 0x211Ba + (6 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch KK Zapped",          0x2119a + (6 * 0xDC0) + (17 * 0x20), 0x211Ba + (6 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch AP Zapped",          0x2119a + (6 * 0xDC0) + (18 * 0x20), 0x211Ba + (6 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch AK Zapped",          0x2119a + (6 * 0xDC0) + (19 * 0x20), 0x211Ba + (6 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch LP Burned",          0x2119a + (6 * 0xDC0) + (20 * 0x20), 0x211Ba + (6 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MP Burned",          0x2119a + (6 * 0xDC0) + (21 * 0x20), 0x211Ba + (6 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HP Burned",          0x2119a + (6 * 0xDC0) + (22 * 0x20), 0x211Ba + (6 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LK Burned",          0x2119a + (6 * 0xDC0) + (23 * 0x20), 0x211Ba + (6 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MK Burned",          0x2119a + (6 * 0xDC0) + (24 * 0x20), 0x211Ba + (6 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HK Burned",          0x2119a + (6 * 0xDC0) + (25 * 0x20), 0x211Ba + (6 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch PP Burned",          0x2119a + (6 * 0xDC0) + (26 * 0x20), 0x211Ba + (6 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch KK Burned",          0x2119a + (6 * 0xDC0) + (27 * 0x20), 0x211Ba + (6 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AP Burned",          0x2119a + (6 * 0xDC0) + (28 * 0x20), 0x211Ba + (6 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AK Burned",          0x2119a + (6 * 0xDC0) + (29 * 0x20), 0x211Ba + (6 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (30 * 0x20), 0x211Ba + (6 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (31 * 0x20), 0x211Ba + (6 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (32 * 0x20), 0x211Ba + (6 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch LK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (33 * 0x20), 0x211Ba + (6 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (34 * 0x20), 0x211Ba + (6 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (35 * 0x20), 0x211Ba + (6 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch PP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (36 * 0x20), 0x211Ba + (6 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch KK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (37 * 0x20), 0x211Ba + (6 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (38 * 0x20), 0x211Ba + (6 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (39 * 0x20), 0x211Ba + (6 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch ES 1",               0x2119a + (6 * 0xDC0) + (40 * 0x20), 0x211Ba + (6 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ES 2",               0x2119a + (6 * 0xDC0) + (41 * 0x20), 0x211Ba + (6 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ES 3",               0x2119a + (6 * 0xDC0) + (42 * 0x20), 0x211Ba + (6 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ES 4",               0x2119a + (6 * 0xDC0) + (43 * 0x20), 0x211Ba + (6 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 1",               0x2119a + (6 * 0xDC0) + (44 * 0x20), 0x211Ba + (6 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 2",               0x2119a + (6 * 0xDC0) + (45 * 0x20), 0x211Ba + (6 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 3",               0x2119a + (6 * 0xDC0) + (46 * 0x20), 0x211Ba + (6 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 4",               0x2119a + (6 * 0xDC0) + (47 * 0x20), 0x211Ba + (6 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 5",               0x2119a + (6 * 0xDC0) + (48 * 0x20), 0x211Ba + (6 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 6",               0x2119a + (6 * 0xDC0) + (49 * 0x20), 0x211Ba + (6 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 7",               0x2119a + (6 * 0xDC0) + (50 * 0x20), 0x211Ba + (6 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 8",               0x2119a + (6 * 0xDC0) + (51 * 0x20), 0x211Ba + (6 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Prova di Servo",     0x2119a + (6 * 0xDC0) + (52 * 0x20), 0x211Ba + (6 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Finale Rosso",       0x2119a + (6 * 0xDC0) + (53 * 0x20), 0x211Ba + (6 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Stone",              0x2119a + (6 * 0xDC0) + (54 * 0x20), 0x211Ba + (6 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (55 * 0x20), 0x211Ba + (6 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (56 * 0x20), 0x211Ba + (6 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (57 * 0x20), 0x211Ba + (6 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (58 * 0x20), 0x211Ba + (6 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (59 * 0x20), 0x211Ba + (6 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (60 * 0x20), 0x211Ba + (6 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch PP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (61 * 0x20), 0x211Ba + (6 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch KK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (62 * 0x20), 0x211Ba + (6 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (63 * 0x20), 0x211Ba + (6 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (64 * 0x20), 0x211Ba + (6 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Q-Bee's QJ Honey",   0x2119a + (6 * 0xDC0) + (65 * 0x20), 0x211Ba + (6 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 1",    0x2119a + (6 * 0xDC0) + (66 * 0x20), 0x211Ba + (6 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 2",    0x2119a + (6 * 0xDC0) + (67 * 0x20), 0x211Ba + (6 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 3",    0x2119a + (6 * 0xDC0) + (68 * 0x20), 0x211Ba + (6 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 4",    0x2119a + (6 * 0xDC0) + (69 * 0x20), 0x211Ba + (6 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 1",    0x2119a + (6 * 0xDC0) + (70 * 0x20), 0x211Ba + (6 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 2",    0x2119a + (6 * 0xDC0) + (71 * 0x20), 0x211Ba + (6 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 3",    0x2119a + (6 * 0xDC0) + (72 * 0x20), 0x211Ba + (6 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 4",    0x2119a + (6 * 0xDC0) + (73 * 0x20), 0x211Ba + (6 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 1",    0x2119a + (6 * 0xDC0) + (74 * 0x20), 0x211Ba + (6 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 2",    0x2119a + (6 * 0xDC0) + (75 * 0x20), 0x211Ba + (6 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 3",    0x2119a + (6 * 0xDC0) + (76 * 0x20), 0x211Ba + (6 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 4",    0x2119a + (6 * 0xDC0) + (77 * 0x20), 0x211Ba + (6 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 1",    0x2119a + (6 * 0xDC0) + (78 * 0x20), 0x211Ba + (6 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 2",    0x2119a + (6 * 0xDC0) + (79 * 0x20), 0x211Ba + (6 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 3",    0x2119a + (6 * 0xDC0) + (80 * 0x20), 0x211Ba + (6 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 4",    0x2119a + (6 * 0xDC0) + (81 * 0x20), 0x211Ba + (6 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 1",    0x2119a + (6 * 0xDC0) + (82 * 0x20), 0x211Ba + (6 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 2",    0x2119a + (6 * 0xDC0) + (83 * 0x20), 0x211Ba + (6 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 3",    0x2119a + (6 * 0xDC0) + (84 * 0x20), 0x211Ba + (6 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 4",    0x2119a + (6 * 0xDC0) + (85 * 0x20), 0x211Ba + (6 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 1",    0x2119a + (6 * 0xDC0) + (86 * 0x20), 0x211Ba + (6 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 2",    0x2119a + (6 * 0xDC0) + (87 * 0x20), 0x211Ba + (6 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 3",    0x2119a + (6 * 0xDC0) + (88 * 0x20), 0x211Ba + (6 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 4",    0x2119a + (6 * 0xDC0) + (89 * 0x20), 0x211Ba + (6 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 1",    0x2119a + (6 * 0xDC0) + (90 * 0x20), 0x211Ba + (6 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 2",    0x2119a + (6 * 0xDC0) + (91 * 0x20), 0x211Ba + (6 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 3",    0x2119a + (6 * 0xDC0) + (92 * 0x20), 0x211Ba + (6 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 4",    0x2119a + (6 * 0xDC0) + (93 * 0x20), 0x211Ba + (6 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 1",    0x2119a + (6 * 0xDC0) + (94 * 0x20), 0x211Ba + (6 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 2",    0x2119a + (6 * 0xDC0) + (95 * 0x20), 0x211Ba + (6 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 3",    0x2119a + (6 * 0xDC0) + (96 * 0x20), 0x211Ba + (6 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 4",    0x2119a + (6 * 0xDC0) + (97 * 0x20), 0x211Ba + (6 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 1",    0x2119a + (6 * 0xDC0) + (98 * 0x20), 0x211Ba + (6 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 2",    0x2119a + (6 * 0xDC0) + (99 * 0x20), 0x211Ba + (6 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 3",    0x2119a + (6 * 0xDC0) + (100 * 0x20), 0x211Ba + (6 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 4",    0x2119a + (6 * 0xDC0) + (101 * 0x20), 0x211Ba + (6 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 1",    0x2119a + (6 * 0xDC0) + (102 * 0x20), 0x211Ba + (6 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 2",    0x2119a + (6 * 0xDC0) + (103 * 0x20), 0x211Ba + (6 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 3",    0x2119a + (6 * 0xDC0) + (104 * 0x20), 0x211Ba + (6 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 4",    0x2119a + (6 * 0xDC0) + (105 * 0x20), 0x211Ba + (6 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ??? 1",              0x2119a + (6 * 0xDC0) + (106 * 0x20), 0x211Ba + (6 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ??? 2",              0x2119a + (6 * 0xDC0) + (107 * 0x20), 0x211Ba + (6 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ??? 3",              0x2119a + (6 * 0xDC0) + (108 * 0x20), 0x211Ba + (6 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ??? 4",              0x2119a + (6 * 0xDC0) + (109 * 0x20), 0x211Ba + (6 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Sasquatch },
 };

const sGame_PaletteDataset VSAV2_A_QBee_PALETTES_SPECIAL[] =
{
    { L"Q-Bee LP Poisoned",        0x2119a + (8 * 0xDC0) + (0 * 0x20), 0x211Ba + (8 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee LP Wings/Honey Poisoned", 0x3515a, 0x3517a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee MP Poisoned",        0x2119a + (8 * 0xDC0) + (1 * 0x20), 0x211Ba + (8 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee MP Wings/Honey Poisoned", 0x3517a, 0x3519a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee HP Poisoned",        0x2119a + (8 * 0xDC0) + (2 * 0x20), 0x211Ba + (8 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee HP Wings/Honey Poisoned", 0x3519a, 0x351ba, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee LK Poisoned",        0x2119a + (8 * 0xDC0) + (3 * 0x20), 0x211Ba + (8 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee LK Wings/Honey Poisoned", 0x351ba, 0x351da, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee MK Poisoned",        0x2119a + (8 * 0xDC0) + (4 * 0x20), 0x211Ba + (8 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee MK Wings/Honey Poisoned", 0x351da, 0x351fa, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee HK Poisoned",        0x2119a + (8 * 0xDC0) + (5 * 0x20), 0x211Ba + (8 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee HK Wings/Honey Poisoned", 0x351fa, 0x3521a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee PP Poisoned",        0x2119a + (8 * 0xDC0) + (6 * 0x20), 0x211Ba + (8 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee PP Wings/Honey Poisoned", 0x3521a, 0x3523a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee KK Poisoned",        0x2119a + (8 * 0xDC0) + (7 * 0x20), 0x211Ba + (8 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee KK Wings/Honey Poisoned", 0x3523a, 0x3525a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee AP Poisoned",        0x2119a + (8 * 0xDC0) + (8 * 0x20), 0x211Ba + (8 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee AP Wings/Honey Poisoned", 0x3525a, 0x3527a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee AK Poisoned",        0x2119a + (8 * 0xDC0) + (9 * 0x20), 0x211Ba + (8 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee AK Wings/Honey Poisoned", 0x3527a, 0x3529a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee LP Zapped",          0x2119a + (8 * 0xDC0) + (10 * 0x20), 0x211Ba + (8 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee MP Zapped",          0x2119a + (8 * 0xDC0) + (11 * 0x20), 0x211Ba + (8 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee HP Zapped",          0x2119a + (8 * 0xDC0) + (12 * 0x20), 0x211Ba + (8 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee LK Zapped",          0x2119a + (8 * 0xDC0) + (13 * 0x20), 0x211Ba + (8 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee MK Zapped",          0x2119a + (8 * 0xDC0) + (14 * 0x20), 0x211Ba + (8 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee HK Zapped",          0x2119a + (8 * 0xDC0) + (15 * 0x20), 0x211Ba + (8 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee PP Zapped",          0x2119a + (8 * 0xDC0) + (16 * 0x20), 0x211Ba + (8 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee KK Zapped",          0x2119a + (8 * 0xDC0) + (17 * 0x20), 0x211Ba + (8 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee AP Zapped",          0x2119a + (8 * 0xDC0) + (18 * 0x20), 0x211Ba + (8 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee AK Zapped",          0x2119a + (8 * 0xDC0) + (19 * 0x20), 0x211Ba + (8 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"Q-Bee LP Burned",          0x2119a + (8 * 0xDC0) + (20 * 0x20), 0x211Ba + (8 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee LP Wings/Honey Burned", 0x353da, 0x353fa, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee MP Burned",          0x2119a + (8 * 0xDC0) + (21 * 0x20), 0x211Ba + (8 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee MP Wings/Honey Burned", 0x353fa, 0x3541a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee HP Burned",          0x2119a + (8 * 0xDC0) + (22 * 0x20), 0x211Ba + (8 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee HP Wings/Honey Burned", 0x3541a, 0x3543a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee LK Burned",          0x2119a + (8 * 0xDC0) + (23 * 0x20), 0x211Ba + (8 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee LK Wings/Honey Burned", 0x3543a, 0x3545a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee MK Burned",          0x2119a + (8 * 0xDC0) + (24 * 0x20), 0x211Ba + (8 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee MK Wings/Honey Burned", 0x3545a, 0x3547a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee HK Burned",          0x2119a + (8 * 0xDC0) + (25 * 0x20), 0x211Ba + (8 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee HK Wings/Honey Burned", 0x3547a, 0x3549a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee PP Burned",          0x2119a + (8 * 0xDC0) + (26 * 0x20), 0x211Ba + (8 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee PP Wings/Honey Burned", 0x3549a, 0x354ba, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee KK Burned",          0x2119a + (8 * 0xDC0) + (27 * 0x20), 0x211Ba + (8 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee KK Wings/Honey Burned", 0x354ba, 0x354da, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee AP Burned",          0x2119a + (8 * 0xDC0) + (28 * 0x20), 0x211Ba + (8 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee AP Wings/Honey Burned", 0x354da, 0x354fa, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee AK Burned",          0x2119a + (8 * 0xDC0) + (29 * 0x20), 0x211Ba + (8 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Q-Bee AK Wings/Honey Burned", 0x354fa, 0x3551a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee LP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (30 * 0x20), 0x211Ba + (8 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee MP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (31 * 0x20), 0x211Ba + (8 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee HP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (32 * 0x20), 0x211Ba + (8 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee LK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (33 * 0x20), 0x211Ba + (8 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee MK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (34 * 0x20), 0x211Ba + (8 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee HK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (35 * 0x20), 0x211Ba + (8 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee PP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (36 * 0x20), 0x211Ba + (8 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee KK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (37 * 0x20), 0x211Ba + (8 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee AP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (38 * 0x20), 0x211Ba + (8 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"Q-Bee AK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (39 * 0x20), 0x211Ba + (8 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_QBee, 0x10 },

    { L"Q-Bee ES 1", 0x2849a, 0x284ba, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"ES Wings/Honey 1/4", 0x3565a, 0x3567a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee ES 2", 0x284ba, 0x284da, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"ES Wings/Honey 2/4", 0x3567a, 0x3569a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee ES 3", 0x284da, 0x284fa, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"ES Wings/Honey 3/4", 0x3569a, 0x356ba, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee ES 4", 0x284fa, 0x2851a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"ES Wings/Honey 4/4", 0x356ba, 0x356da, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 1", 0x2851a, 0x2853a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 1/8", 0x356da, 0x356fa, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 2", 0x2853a, 0x2855a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 2/8", 0x356fa, 0x3571a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 3", 0x2855a, 0x2857a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 3/8", 0x3571a, 0x3573a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 4", 0x2857a, 0x2859a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 4/8", 0x3573a, 0x3575a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 5", 0x2859a, 0x285ba, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 5/8", 0x3575a, 0x3577a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 6", 0x285ba, 0x285da, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 6/8", 0x3577a, 0x3579a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 7", 0x285da, 0x285fa, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 7/8", 0x3579a, 0x357ba, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee EX 8", 0x285fa, 0x2861a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"EX Wings/Honey 8/8", 0x357ba, 0x357da, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */

    { L"Q-Bee Prova di Servo", 0x2861a, 0x2863a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"Wings/Honey Prova di Servo", 0x357da, 0x357fa, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee Finale Rosso", 0x2863a, 0x2865a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"Wings/Honey Finale Rosso", 0x357fa, 0x3581a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */
    { L"Q-Bee Stone", 0x2865a, 0x2867a, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext }, /* Delta: 0x10a30 */
    { L"Wings/Honey Stone", 0x3581a, 0x3583a, indexCPS2Sprites_Vamp_QBee, 0x01 }, /* Delta: 0x163b0 */

    { L"Q-Bee LP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (55 * 0x20), 0x211Ba + (8 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (56 * 0x20), 0x211Ba + (8 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (57 * 0x20), 0x211Ba + (8 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (58 * 0x20), 0x211Ba + (8 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (59 * 0x20), 0x211Ba + (8 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (60 * 0x20), 0x211Ba + (8 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee PP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (61 * 0x20), 0x211Ba + (8 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee KK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (62 * 0x20), 0x211Ba + (8 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (63 * 0x20), 0x211Ba + (8 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (64 * 0x20), 0x211Ba + (8 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee Q-Bee's QJ Honey",   0x2119a + (8 * 0xDC0) + (65 * 0x20), 0x211Ba + (8 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LP Dark Force 1",    0x2119a + (8 * 0xDC0) + (66 * 0x20), 0x211Ba + (8 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LP Dark Force 2",    0x2119a + (8 * 0xDC0) + (67 * 0x20), 0x211Ba + (8 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LP Dark Force 3",    0x2119a + (8 * 0xDC0) + (68 * 0x20), 0x211Ba + (8 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LP Dark Force 4",    0x2119a + (8 * 0xDC0) + (69 * 0x20), 0x211Ba + (8 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MP Dark Force 1",    0x2119a + (8 * 0xDC0) + (70 * 0x20), 0x211Ba + (8 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MP Dark Force 2",    0x2119a + (8 * 0xDC0) + (71 * 0x20), 0x211Ba + (8 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MP Dark Force 3",    0x2119a + (8 * 0xDC0) + (72 * 0x20), 0x211Ba + (8 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MP Dark Force 4",    0x2119a + (8 * 0xDC0) + (73 * 0x20), 0x211Ba + (8 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HP Dark Force 1",    0x2119a + (8 * 0xDC0) + (74 * 0x20), 0x211Ba + (8 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HP Dark Force 2",    0x2119a + (8 * 0xDC0) + (75 * 0x20), 0x211Ba + (8 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HP Dark Force 3",    0x2119a + (8 * 0xDC0) + (76 * 0x20), 0x211Ba + (8 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HP Dark Force 4",    0x2119a + (8 * 0xDC0) + (77 * 0x20), 0x211Ba + (8 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LK Dark Force 1",    0x2119a + (8 * 0xDC0) + (78 * 0x20), 0x211Ba + (8 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LK Dark Force 2",    0x2119a + (8 * 0xDC0) + (79 * 0x20), 0x211Ba + (8 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LK Dark Force 3",    0x2119a + (8 * 0xDC0) + (80 * 0x20), 0x211Ba + (8 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee LK Dark Force 4",    0x2119a + (8 * 0xDC0) + (81 * 0x20), 0x211Ba + (8 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MK Dark Force 1",    0x2119a + (8 * 0xDC0) + (82 * 0x20), 0x211Ba + (8 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MK Dark Force 2",    0x2119a + (8 * 0xDC0) + (83 * 0x20), 0x211Ba + (8 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MK Dark Force 3",    0x2119a + (8 * 0xDC0) + (84 * 0x20), 0x211Ba + (8 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee MK Dark Force 4",    0x2119a + (8 * 0xDC0) + (85 * 0x20), 0x211Ba + (8 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HK Dark Force 1",    0x2119a + (8 * 0xDC0) + (86 * 0x20), 0x211Ba + (8 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HK Dark Force 2",    0x2119a + (8 * 0xDC0) + (87 * 0x20), 0x211Ba + (8 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HK Dark Force 3",    0x2119a + (8 * 0xDC0) + (88 * 0x20), 0x211Ba + (8 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee HK Dark Force 4",    0x2119a + (8 * 0xDC0) + (89 * 0x20), 0x211Ba + (8 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee PP Dark Force 1",    0x2119a + (8 * 0xDC0) + (90 * 0x20), 0x211Ba + (8 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee PP Dark Force 2",    0x2119a + (8 * 0xDC0) + (91 * 0x20), 0x211Ba + (8 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee PP Dark Force 3",    0x2119a + (8 * 0xDC0) + (92 * 0x20), 0x211Ba + (8 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee PP Dark Force 4",    0x2119a + (8 * 0xDC0) + (93 * 0x20), 0x211Ba + (8 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee KK Dark Force 1",    0x2119a + (8 * 0xDC0) + (94 * 0x20), 0x211Ba + (8 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee KK Dark Force 2",    0x2119a + (8 * 0xDC0) + (95 * 0x20), 0x211Ba + (8 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee KK Dark Force 3",    0x2119a + (8 * 0xDC0) + (96 * 0x20), 0x211Ba + (8 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee KK Dark Force 4",    0x2119a + (8 * 0xDC0) + (97 * 0x20), 0x211Ba + (8 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AP Dark Force 1",    0x2119a + (8 * 0xDC0) + (98 * 0x20), 0x211Ba + (8 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AP Dark Force 2",    0x2119a + (8 * 0xDC0) + (99 * 0x20), 0x211Ba + (8 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AP Dark Force 3",    0x2119a + (8 * 0xDC0) + (100 * 0x20), 0x211Ba + (8 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AP Dark Force 4",    0x2119a + (8 * 0xDC0) + (101 * 0x20), 0x211Ba + (8 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AK Dark Force 1",    0x2119a + (8 * 0xDC0) + (102 * 0x20), 0x211Ba + (8 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AK Dark Force 2",    0x2119a + (8 * 0xDC0) + (103 * 0x20), 0x211Ba + (8 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AK Dark Force 3",    0x2119a + (8 * 0xDC0) + (104 * 0x20), 0x211Ba + (8 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee AK Dark Force 4",    0x2119a + (8 * 0xDC0) + (105 * 0x20), 0x211Ba + (8 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee ??? 1",              0x2119a + (8 * 0xDC0) + (106 * 0x20), 0x211Ba + (8 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee ??? 2",              0x2119a + (8 * 0xDC0) + (107 * 0x20), 0x211Ba + (8 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee ??? 3",              0x2119a + (8 * 0xDC0) + (108 * 0x20), 0x211Ba + (8 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_QBee },
    { L"Q-Bee ??? 4",              0x2119a + (8 * 0xDC0) + (109 * 0x20), 0x211Ba + (8 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_QBee },
 };

const sGame_PaletteDataset VSAV2_A_LeiLei_PALETTES_SPECIAL[] =
{
    { L"Lei-Lei LP Poisoned",        0x2119a + (9 * 0xDC0) + (0 * 0x20), 0x211Ba + (9 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MP Poisoned",        0x2119a + (9 * 0xDC0) + (1 * 0x20), 0x211Ba + (9 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HP Poisoned",        0x2119a + (9 * 0xDC0) + (2 * 0x20), 0x211Ba + (9 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LK Poisoned",        0x2119a + (9 * 0xDC0) + (3 * 0x20), 0x211Ba + (9 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MK Poisoned",        0x2119a + (9 * 0xDC0) + (4 * 0x20), 0x211Ba + (9 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HK Poisoned",        0x2119a + (9 * 0xDC0) + (5 * 0x20), 0x211Ba + (9 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei PP Poisoned",        0x2119a + (9 * 0xDC0) + (6 * 0x20), 0x211Ba + (9 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei KK Poisoned",        0x2119a + (9 * 0xDC0) + (7 * 0x20), 0x211Ba + (9 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AP Poisoned",        0x2119a + (9 * 0xDC0) + (8 * 0x20), 0x211Ba + (9 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AK Poisoned",        0x2119a + (9 * 0xDC0) + (9 * 0x20), 0x211Ba + (9 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LP Zapped",          0x2119a + (9 * 0xDC0) + (10 * 0x20), 0x211Ba + (9 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei MP Zapped",          0x2119a + (9 * 0xDC0) + (11 * 0x20), 0x211Ba + (9 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei HP Zapped",          0x2119a + (9 * 0xDC0) + (12 * 0x20), 0x211Ba + (9 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei LK Zapped",          0x2119a + (9 * 0xDC0) + (13 * 0x20), 0x211Ba + (9 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei MK Zapped",          0x2119a + (9 * 0xDC0) + (14 * 0x20), 0x211Ba + (9 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei HK Zapped",          0x2119a + (9 * 0xDC0) + (15 * 0x20), 0x211Ba + (9 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei PP Zapped",          0x2119a + (9 * 0xDC0) + (16 * 0x20), 0x211Ba + (9 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei KK Zapped",          0x2119a + (9 * 0xDC0) + (17 * 0x20), 0x211Ba + (9 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei AP Zapped",          0x2119a + (9 * 0xDC0) + (18 * 0x20), 0x211Ba + (9 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei AK Zapped",          0x2119a + (9 * 0xDC0) + (19 * 0x20), 0x211Ba + (9 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"Lei-Lei LP Burned",          0x2119a + (9 * 0xDC0) + (20 * 0x20), 0x211Ba + (9 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MP Burned",          0x2119a + (9 * 0xDC0) + (21 * 0x20), 0x211Ba + (9 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HP Burned",          0x2119a + (9 * 0xDC0) + (22 * 0x20), 0x211Ba + (9 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LK Burned",          0x2119a + (9 * 0xDC0) + (23 * 0x20), 0x211Ba + (9 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MK Burned",          0x2119a + (9 * 0xDC0) + (24 * 0x20), 0x211Ba + (9 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HK Burned",          0x2119a + (9 * 0xDC0) + (25 * 0x20), 0x211Ba + (9 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei PP Burned",          0x2119a + (9 * 0xDC0) + (26 * 0x20), 0x211Ba + (9 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei KK Burned",          0x2119a + (9 * 0xDC0) + (27 * 0x20), 0x211Ba + (9 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AP Burned",          0x2119a + (9 * 0xDC0) + (28 * 0x20), 0x211Ba + (9 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AK Burned",          0x2119a + (9 * 0xDC0) + (29 * 0x20), 0x211Ba + (9 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (30 * 0x20), 0x211Ba + (9 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei MP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (31 * 0x20), 0x211Ba + (9 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei HP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (32 * 0x20), 0x211Ba + (9 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei LK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (33 * 0x20), 0x211Ba + (9 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei MK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (34 * 0x20), 0x211Ba + (9 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei HK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (35 * 0x20), 0x211Ba + (9 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei PP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (36 * 0x20), 0x211Ba + (9 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei KK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (37 * 0x20), 0x211Ba + (9 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei AP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (38 * 0x20), 0x211Ba + (9 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei AK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (39 * 0x20), 0x211Ba + (9 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"Lei-Lei ES 1",               0x2119a + (9 * 0xDC0) + (40 * 0x20), 0x211Ba + (9 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ES 2",               0x2119a + (9 * 0xDC0) + (41 * 0x20), 0x211Ba + (9 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ES 3",               0x2119a + (9 * 0xDC0) + (42 * 0x20), 0x211Ba + (9 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ES 4",               0x2119a + (9 * 0xDC0) + (43 * 0x20), 0x211Ba + (9 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 1",               0x2119a + (9 * 0xDC0) + (44 * 0x20), 0x211Ba + (9 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 2",               0x2119a + (9 * 0xDC0) + (45 * 0x20), 0x211Ba + (9 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 3",               0x2119a + (9 * 0xDC0) + (46 * 0x20), 0x211Ba + (9 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 4",               0x2119a + (9 * 0xDC0) + (47 * 0x20), 0x211Ba + (9 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 5",               0x2119a + (9 * 0xDC0) + (48 * 0x20), 0x211Ba + (9 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 6",               0x2119a + (9 * 0xDC0) + (49 * 0x20), 0x211Ba + (9 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 7",               0x2119a + (9 * 0xDC0) + (50 * 0x20), 0x211Ba + (9 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 8",               0x2119a + (9 * 0xDC0) + (51 * 0x20), 0x211Ba + (9 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Prova di Servo",     0x2119a + (9 * 0xDC0) + (52 * 0x20), 0x211Ba + (9 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Finale Rosso",       0x2119a + (9 * 0xDC0) + (53 * 0x20), 0x211Ba + (9 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Stone",              0x2119a + (9 * 0xDC0) + (54 * 0x20), 0x211Ba + (9 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (55 * 0x20), 0x211Ba + (9 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (56 * 0x20), 0x211Ba + (9 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (57 * 0x20), 0x211Ba + (9 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (58 * 0x20), 0x211Ba + (9 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (59 * 0x20), 0x211Ba + (9 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (60 * 0x20), 0x211Ba + (9 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei PP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (61 * 0x20), 0x211Ba + (9 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei KK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (62 * 0x20), 0x211Ba + (9 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (63 * 0x20), 0x211Ba + (9 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (64 * 0x20), 0x211Ba + (9 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Q-Bee's QJ Honey",   0x2119a + (9 * 0xDC0) + (65 * 0x20), 0x211Ba + (9 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 1",    0x2119a + (9 * 0xDC0) + (66 * 0x20), 0x211Ba + (9 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 2",    0x2119a + (9 * 0xDC0) + (67 * 0x20), 0x211Ba + (9 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 3",    0x2119a + (9 * 0xDC0) + (68 * 0x20), 0x211Ba + (9 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 4",    0x2119a + (9 * 0xDC0) + (69 * 0x20), 0x211Ba + (9 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 1",    0x2119a + (9 * 0xDC0) + (70 * 0x20), 0x211Ba + (9 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 2",    0x2119a + (9 * 0xDC0) + (71 * 0x20), 0x211Ba + (9 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 3",    0x2119a + (9 * 0xDC0) + (72 * 0x20), 0x211Ba + (9 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 4",    0x2119a + (9 * 0xDC0) + (73 * 0x20), 0x211Ba + (9 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 1",    0x2119a + (9 * 0xDC0) + (74 * 0x20), 0x211Ba + (9 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 2",    0x2119a + (9 * 0xDC0) + (75 * 0x20), 0x211Ba + (9 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 3",    0x2119a + (9 * 0xDC0) + (76 * 0x20), 0x211Ba + (9 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 4",    0x2119a + (9 * 0xDC0) + (77 * 0x20), 0x211Ba + (9 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 1",    0x2119a + (9 * 0xDC0) + (78 * 0x20), 0x211Ba + (9 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 2",    0x2119a + (9 * 0xDC0) + (79 * 0x20), 0x211Ba + (9 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 3",    0x2119a + (9 * 0xDC0) + (80 * 0x20), 0x211Ba + (9 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 4",    0x2119a + (9 * 0xDC0) + (81 * 0x20), 0x211Ba + (9 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 1",    0x2119a + (9 * 0xDC0) + (82 * 0x20), 0x211Ba + (9 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 2",    0x2119a + (9 * 0xDC0) + (83 * 0x20), 0x211Ba + (9 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 3",    0x2119a + (9 * 0xDC0) + (84 * 0x20), 0x211Ba + (9 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 4",    0x2119a + (9 * 0xDC0) + (85 * 0x20), 0x211Ba + (9 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 1",    0x2119a + (9 * 0xDC0) + (86 * 0x20), 0x211Ba + (9 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 2",    0x2119a + (9 * 0xDC0) + (87 * 0x20), 0x211Ba + (9 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 3",    0x2119a + (9 * 0xDC0) + (88 * 0x20), 0x211Ba + (9 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 4",    0x2119a + (9 * 0xDC0) + (89 * 0x20), 0x211Ba + (9 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 1",    0x2119a + (9 * 0xDC0) + (90 * 0x20), 0x211Ba + (9 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 2",    0x2119a + (9 * 0xDC0) + (91 * 0x20), 0x211Ba + (9 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 3",    0x2119a + (9 * 0xDC0) + (92 * 0x20), 0x211Ba + (9 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 4",    0x2119a + (9 * 0xDC0) + (93 * 0x20), 0x211Ba + (9 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 1",    0x2119a + (9 * 0xDC0) + (94 * 0x20), 0x211Ba + (9 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 2",    0x2119a + (9 * 0xDC0) + (95 * 0x20), 0x211Ba + (9 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 3",    0x2119a + (9 * 0xDC0) + (96 * 0x20), 0x211Ba + (9 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 4",    0x2119a + (9 * 0xDC0) + (97 * 0x20), 0x211Ba + (9 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 1",    0x2119a + (9 * 0xDC0) + (98 * 0x20), 0x211Ba + (9 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 2",    0x2119a + (9 * 0xDC0) + (99 * 0x20), 0x211Ba + (9 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 3",    0x2119a + (9 * 0xDC0) + (100 * 0x20), 0x211Ba + (9 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 4",    0x2119a + (9 * 0xDC0) + (101 * 0x20), 0x211Ba + (9 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 1",    0x2119a + (9 * 0xDC0) + (102 * 0x20), 0x211Ba + (9 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 2",    0x2119a + (9 * 0xDC0) + (103 * 0x20), 0x211Ba + (9 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 3",    0x2119a + (9 * 0xDC0) + (104 * 0x20), 0x211Ba + (9 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 4",    0x2119a + (9 * 0xDC0) + (105 * 0x20), 0x211Ba + (9 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ??? 1",              0x2119a + (9 * 0xDC0) + (106 * 0x20), 0x211Ba + (9 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ??? 2",              0x2119a + (9 * 0xDC0) + (107 * 0x20), 0x211Ba + (9 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ??? 3",              0x2119a + (9 * 0xDC0) + (108 * 0x20), 0x211Ba + (9 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ??? 4",              0x2119a + (9 * 0xDC0) + (109 * 0x20), 0x211Ba + (9 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_LeiLei },
 };

const sGame_PaletteDataset VSAV2_A_Lilith_PALETTES_SPECIAL[] =
{
    { L"Lilith LP Poisoned",        0x2119a + (10 * 0xDC0) + (0 * 0x20), 0x211Ba + (10 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MP Poisoned",        0x2119a + (10 * 0xDC0) + (1 * 0x20), 0x211Ba + (10 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HP Poisoned",        0x2119a + (10 * 0xDC0) + (2 * 0x20), 0x211Ba + (10 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LK Poisoned",        0x2119a + (10 * 0xDC0) + (3 * 0x20), 0x211Ba + (10 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MK Poisoned",        0x2119a + (10 * 0xDC0) + (4 * 0x20), 0x211Ba + (10 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HK Poisoned",        0x2119a + (10 * 0xDC0) + (5 * 0x20), 0x211Ba + (10 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith PP Poisoned",        0x2119a + (10 * 0xDC0) + (6 * 0x20), 0x211Ba + (10 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith KK Poisoned",        0x2119a + (10 * 0xDC0) + (7 * 0x20), 0x211Ba + (10 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AP Poisoned",        0x2119a + (10 * 0xDC0) + (8 * 0x20), 0x211Ba + (10 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AK Poisoned",        0x2119a + (10 * 0xDC0) + (9 * 0x20), 0x211Ba + (10 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LP Zapped",          0x2119a + (10 * 0xDC0) + (10 * 0x20), 0x211Ba + (10 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith MP Zapped",          0x2119a + (10 * 0xDC0) + (11 * 0x20), 0x211Ba + (10 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith HP Zapped",          0x2119a + (10 * 0xDC0) + (12 * 0x20), 0x211Ba + (10 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith LK Zapped",          0x2119a + (10 * 0xDC0) + (13 * 0x20), 0x211Ba + (10 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith MK Zapped",          0x2119a + (10 * 0xDC0) + (14 * 0x20), 0x211Ba + (10 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith HK Zapped",          0x2119a + (10 * 0xDC0) + (15 * 0x20), 0x211Ba + (10 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith PP Zapped",          0x2119a + (10 * 0xDC0) + (16 * 0x20), 0x211Ba + (10 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith KK Zapped",          0x2119a + (10 * 0xDC0) + (17 * 0x20), 0x211Ba + (10 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith AP Zapped",          0x2119a + (10 * 0xDC0) + (18 * 0x20), 0x211Ba + (10 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith AK Zapped",          0x2119a + (10 * 0xDC0) + (19 * 0x20), 0x211Ba + (10 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"Lilith LP Burned",          0x2119a + (10 * 0xDC0) + (20 * 0x20), 0x211Ba + (10 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MP Burned",          0x2119a + (10 * 0xDC0) + (21 * 0x20), 0x211Ba + (10 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HP Burned",          0x2119a + (10 * 0xDC0) + (22 * 0x20), 0x211Ba + (10 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LK Burned",          0x2119a + (10 * 0xDC0) + (23 * 0x20), 0x211Ba + (10 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MK Burned",          0x2119a + (10 * 0xDC0) + (24 * 0x20), 0x211Ba + (10 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HK Burned",          0x2119a + (10 * 0xDC0) + (25 * 0x20), 0x211Ba + (10 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith PP Burned",          0x2119a + (10 * 0xDC0) + (26 * 0x20), 0x211Ba + (10 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith KK Burned",          0x2119a + (10 * 0xDC0) + (27 * 0x20), 0x211Ba + (10 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AP Burned",          0x2119a + (10 * 0xDC0) + (28 * 0x20), 0x211Ba + (10 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AK Burned",          0x2119a + (10 * 0xDC0) + (29 * 0x20), 0x211Ba + (10 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (30 * 0x20), 0x211Ba + (10 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith MP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (31 * 0x20), 0x211Ba + (10 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith HP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (32 * 0x20), 0x211Ba + (10 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith LK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (33 * 0x20), 0x211Ba + (10 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith MK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (34 * 0x20), 0x211Ba + (10 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith HK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (35 * 0x20), 0x211Ba + (10 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith PP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (36 * 0x20), 0x211Ba + (10 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith KK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (37 * 0x20), 0x211Ba + (10 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith AP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (38 * 0x20), 0x211Ba + (10 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith AK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (39 * 0x20), 0x211Ba + (10 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"Lilith ES 1",               0x2119a + (10 * 0xDC0) + (40 * 0x20), 0x211Ba + (10 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ES 2",               0x2119a + (10 * 0xDC0) + (41 * 0x20), 0x211Ba + (10 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ES 3",               0x2119a + (10 * 0xDC0) + (42 * 0x20), 0x211Ba + (10 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ES 4",               0x2119a + (10 * 0xDC0) + (43 * 0x20), 0x211Ba + (10 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 1",               0x2119a + (10 * 0xDC0) + (44 * 0x20), 0x211Ba + (10 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 2",               0x2119a + (10 * 0xDC0) + (45 * 0x20), 0x211Ba + (10 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 3",               0x2119a + (10 * 0xDC0) + (46 * 0x20), 0x211Ba + (10 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 4",               0x2119a + (10 * 0xDC0) + (47 * 0x20), 0x211Ba + (10 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 5",               0x2119a + (10 * 0xDC0) + (48 * 0x20), 0x211Ba + (10 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 6",               0x2119a + (10 * 0xDC0) + (49 * 0x20), 0x211Ba + (10 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 7",               0x2119a + (10 * 0xDC0) + (50 * 0x20), 0x211Ba + (10 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 8",               0x2119a + (10 * 0xDC0) + (51 * 0x20), 0x211Ba + (10 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Prova di Servo",     0x2119a + (10 * 0xDC0) + (52 * 0x20), 0x211Ba + (10 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Finale Rosso",       0x2119a + (10 * 0xDC0) + (53 * 0x20), 0x211Ba + (10 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Stone",              0x2119a + (10 * 0xDC0) + (54 * 0x20), 0x211Ba + (10 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (55 * 0x20), 0x211Ba + (10 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (56 * 0x20), 0x211Ba + (10 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (57 * 0x20), 0x211Ba + (10 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (58 * 0x20), 0x211Ba + (10 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (59 * 0x20), 0x211Ba + (10 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (60 * 0x20), 0x211Ba + (10 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith PP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (61 * 0x20), 0x211Ba + (10 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith KK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (62 * 0x20), 0x211Ba + (10 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (63 * 0x20), 0x211Ba + (10 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (64 * 0x20), 0x211Ba + (10 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Q-Bee's QJ Honey",   0x2119a + (10 * 0xDC0) + (65 * 0x20), 0x211Ba + (10 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LP Dark Force 1",    0x2119a + (10 * 0xDC0) + (66 * 0x20), 0x211Ba + (10 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LP Dark Force 2",    0x2119a + (10 * 0xDC0) + (67 * 0x20), 0x211Ba + (10 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LP Dark Force 3",    0x2119a + (10 * 0xDC0) + (68 * 0x20), 0x211Ba + (10 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LP Dark Force 4",    0x2119a + (10 * 0xDC0) + (69 * 0x20), 0x211Ba + (10 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MP Dark Force 1",    0x2119a + (10 * 0xDC0) + (70 * 0x20), 0x211Ba + (10 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MP Dark Force 2",    0x2119a + (10 * 0xDC0) + (71 * 0x20), 0x211Ba + (10 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MP Dark Force 3",    0x2119a + (10 * 0xDC0) + (72 * 0x20), 0x211Ba + (10 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MP Dark Force 4",    0x2119a + (10 * 0xDC0) + (73 * 0x20), 0x211Ba + (10 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HP Dark Force 1",    0x2119a + (10 * 0xDC0) + (74 * 0x20), 0x211Ba + (10 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HP Dark Force 2",    0x2119a + (10 * 0xDC0) + (75 * 0x20), 0x211Ba + (10 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HP Dark Force 3",    0x2119a + (10 * 0xDC0) + (76 * 0x20), 0x211Ba + (10 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HP Dark Force 4",    0x2119a + (10 * 0xDC0) + (77 * 0x20), 0x211Ba + (10 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LK Dark Force 1",    0x2119a + (10 * 0xDC0) + (78 * 0x20), 0x211Ba + (10 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LK Dark Force 2",    0x2119a + (10 * 0xDC0) + (79 * 0x20), 0x211Ba + (10 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LK Dark Force 3",    0x2119a + (10 * 0xDC0) + (80 * 0x20), 0x211Ba + (10 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith LK Dark Force 4",    0x2119a + (10 * 0xDC0) + (81 * 0x20), 0x211Ba + (10 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MK Dark Force 1",    0x2119a + (10 * 0xDC0) + (82 * 0x20), 0x211Ba + (10 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MK Dark Force 2",    0x2119a + (10 * 0xDC0) + (83 * 0x20), 0x211Ba + (10 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MK Dark Force 3",    0x2119a + (10 * 0xDC0) + (84 * 0x20), 0x211Ba + (10 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith MK Dark Force 4",    0x2119a + (10 * 0xDC0) + (85 * 0x20), 0x211Ba + (10 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HK Dark Force 1",    0x2119a + (10 * 0xDC0) + (86 * 0x20), 0x211Ba + (10 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HK Dark Force 2",    0x2119a + (10 * 0xDC0) + (87 * 0x20), 0x211Ba + (10 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HK Dark Force 3",    0x2119a + (10 * 0xDC0) + (88 * 0x20), 0x211Ba + (10 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith HK Dark Force 4",    0x2119a + (10 * 0xDC0) + (89 * 0x20), 0x211Ba + (10 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith PP Dark Force 1",    0x2119a + (10 * 0xDC0) + (90 * 0x20), 0x211Ba + (10 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith PP Dark Force 2",    0x2119a + (10 * 0xDC0) + (91 * 0x20), 0x211Ba + (10 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith PP Dark Force 3",    0x2119a + (10 * 0xDC0) + (92 * 0x20), 0x211Ba + (10 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith PP Dark Force 4",    0x2119a + (10 * 0xDC0) + (93 * 0x20), 0x211Ba + (10 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith KK Dark Force 1",    0x2119a + (10 * 0xDC0) + (94 * 0x20), 0x211Ba + (10 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith KK Dark Force 2",    0x2119a + (10 * 0xDC0) + (95 * 0x20), 0x211Ba + (10 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith KK Dark Force 3",    0x2119a + (10 * 0xDC0) + (96 * 0x20), 0x211Ba + (10 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith KK Dark Force 4",    0x2119a + (10 * 0xDC0) + (97 * 0x20), 0x211Ba + (10 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AP Dark Force 1",    0x2119a + (10 * 0xDC0) + (98 * 0x20), 0x211Ba + (10 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AP Dark Force 2",    0x2119a + (10 * 0xDC0) + (99 * 0x20), 0x211Ba + (10 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AP Dark Force 3",    0x2119a + (10 * 0xDC0) + (100 * 0x20), 0x211Ba + (10 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AP Dark Force 4",    0x2119a + (10 * 0xDC0) + (101 * 0x20), 0x211Ba + (10 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AK Dark Force 1",    0x2119a + (10 * 0xDC0) + (102 * 0x20), 0x211Ba + (10 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AK Dark Force 2",    0x2119a + (10 * 0xDC0) + (103 * 0x20), 0x211Ba + (10 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AK Dark Force 3",    0x2119a + (10 * 0xDC0) + (104 * 0x20), 0x211Ba + (10 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith AK Dark Force 4",    0x2119a + (10 * 0xDC0) + (105 * 0x20), 0x211Ba + (10 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ??? 1",              0x2119a + (10 * 0xDC0) + (106 * 0x20), 0x211Ba + (10 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ??? 2",              0x2119a + (10 * 0xDC0) + (107 * 0x20), 0x211Ba + (10 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ??? 3",              0x2119a + (10 * 0xDC0) + (108 * 0x20), 0x211Ba + (10 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ??? 4",              0x2119a + (10 * 0xDC0) + (109 * 0x20), 0x211Ba + (10 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Lilith },
 };

const sGame_PaletteDataset VSAV2_A_Jedah_PALETTES_SPECIAL[] =
{
    { L"Jedah LP Poisoned",        0x2119a + (11 * 0xDC0) + (0 * 0x20), 0x211Ba + (11 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MP Poisoned",        0x2119a + (11 * 0xDC0) + (1 * 0x20), 0x211Ba + (11 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HP Poisoned",        0x2119a + (11 * 0xDC0) + (2 * 0x20), 0x211Ba + (11 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LK Poisoned",        0x2119a + (11 * 0xDC0) + (3 * 0x20), 0x211Ba + (11 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MK Poisoned",        0x2119a + (11 * 0xDC0) + (4 * 0x20), 0x211Ba + (11 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HK Poisoned",        0x2119a + (11 * 0xDC0) + (5 * 0x20), 0x211Ba + (11 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah PP Poisoned",        0x2119a + (11 * 0xDC0) + (6 * 0x20), 0x211Ba + (11 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah KK Poisoned",        0x2119a + (11 * 0xDC0) + (7 * 0x20), 0x211Ba + (11 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AP Poisoned",        0x2119a + (11 * 0xDC0) + (8 * 0x20), 0x211Ba + (11 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AK Poisoned",        0x2119a + (11 * 0xDC0) + (9 * 0x20), 0x211Ba + (11 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LP Zapped",          0x2119a + (11 * 0xDC0) + (10 * 0x20), 0x211Ba + (11 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah MP Zapped",          0x2119a + (11 * 0xDC0) + (11 * 0x20), 0x211Ba + (11 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah HP Zapped",          0x2119a + (11 * 0xDC0) + (12 * 0x20), 0x211Ba + (11 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah LK Zapped",          0x2119a + (11 * 0xDC0) + (13 * 0x20), 0x211Ba + (11 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah MK Zapped",          0x2119a + (11 * 0xDC0) + (14 * 0x20), 0x211Ba + (11 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah HK Zapped",          0x2119a + (11 * 0xDC0) + (15 * 0x20), 0x211Ba + (11 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah PP Zapped",          0x2119a + (11 * 0xDC0) + (16 * 0x20), 0x211Ba + (11 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah KK Zapped",          0x2119a + (11 * 0xDC0) + (17 * 0x20), 0x211Ba + (11 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah AP Zapped",          0x2119a + (11 * 0xDC0) + (18 * 0x20), 0x211Ba + (11 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah AK Zapped",          0x2119a + (11 * 0xDC0) + (19 * 0x20), 0x211Ba + (11 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"Jedah LP Burned",          0x2119a + (11 * 0xDC0) + (20 * 0x20), 0x211Ba + (11 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MP Burned",          0x2119a + (11 * 0xDC0) + (21 * 0x20), 0x211Ba + (11 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HP Burned",          0x2119a + (11 * 0xDC0) + (22 * 0x20), 0x211Ba + (11 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LK Burned",          0x2119a + (11 * 0xDC0) + (23 * 0x20), 0x211Ba + (11 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MK Burned",          0x2119a + (11 * 0xDC0) + (24 * 0x20), 0x211Ba + (11 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HK Burned",          0x2119a + (11 * 0xDC0) + (25 * 0x20), 0x211Ba + (11 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah PP Burned",          0x2119a + (11 * 0xDC0) + (26 * 0x20), 0x211Ba + (11 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah KK Burned",          0x2119a + (11 * 0xDC0) + (27 * 0x20), 0x211Ba + (11 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AP Burned",          0x2119a + (11 * 0xDC0) + (28 * 0x20), 0x211Ba + (11 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AK Burned",          0x2119a + (11 * 0xDC0) + (29 * 0x20), 0x211Ba + (11 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (30 * 0x20), 0x211Ba + (11 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah MP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (31 * 0x20), 0x211Ba + (11 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah HP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (32 * 0x20), 0x211Ba + (11 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah LK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (33 * 0x20), 0x211Ba + (11 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah MK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (34 * 0x20), 0x211Ba + (11 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah HK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (35 * 0x20), 0x211Ba + (11 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah PP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (36 * 0x20), 0x211Ba + (11 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah KK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (37 * 0x20), 0x211Ba + (11 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah AP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (38 * 0x20), 0x211Ba + (11 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah AK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (39 * 0x20), 0x211Ba + (11 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"Jedah ES 1",               0x2119a + (11 * 0xDC0) + (40 * 0x20), 0x211Ba + (11 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES 2",               0x2119a + (11 * 0xDC0) + (41 * 0x20), 0x211Ba + (11 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES 3",               0x2119a + (11 * 0xDC0) + (42 * 0x20), 0x211Ba + (11 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES 4",               0x2119a + (11 * 0xDC0) + (43 * 0x20), 0x211Ba + (11 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 1",               0x2119a + (11 * 0xDC0) + (44 * 0x20), 0x211Ba + (11 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 2",               0x2119a + (11 * 0xDC0) + (45 * 0x20), 0x211Ba + (11 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 3",               0x2119a + (11 * 0xDC0) + (46 * 0x20), 0x211Ba + (11 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 4",               0x2119a + (11 * 0xDC0) + (47 * 0x20), 0x211Ba + (11 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 5",               0x2119a + (11 * 0xDC0) + (48 * 0x20), 0x211Ba + (11 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 6",               0x2119a + (11 * 0xDC0) + (49 * 0x20), 0x211Ba + (11 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 7",               0x2119a + (11 * 0xDC0) + (50 * 0x20), 0x211Ba + (11 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 8",               0x2119a + (11 * 0xDC0) + (51 * 0x20), 0x211Ba + (11 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Prova di Servo",     0x2119a + (11 * 0xDC0) + (52 * 0x20), 0x211Ba + (11 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Finale Rosso",       0x2119a + (11 * 0xDC0) + (53 * 0x20), 0x211Ba + (11 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Stone",              0x2119a + (11 * 0xDC0) + (54 * 0x20), 0x211Ba + (11 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (55 * 0x20), 0x211Ba + (11 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (56 * 0x20), 0x211Ba + (11 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (57 * 0x20), 0x211Ba + (11 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (58 * 0x20), 0x211Ba + (11 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (59 * 0x20), 0x211Ba + (11 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (60 * 0x20), 0x211Ba + (11 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah PP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (61 * 0x20), 0x211Ba + (11 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah KK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (62 * 0x20), 0x211Ba + (11 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (63 * 0x20), 0x211Ba + (11 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (64 * 0x20), 0x211Ba + (11 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Q-Bee's QJ Honey",   0x2119a + (11 * 0xDC0) + (65 * 0x20), 0x211Ba + (11 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LP Dark Force 1",    0x2119a + (11 * 0xDC0) + (66 * 0x20), 0x211Ba + (11 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LP Dark Force 2",    0x2119a + (11 * 0xDC0) + (67 * 0x20), 0x211Ba + (11 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LP Dark Force 3",    0x2119a + (11 * 0xDC0) + (68 * 0x20), 0x211Ba + (11 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LP Dark Force 4",    0x2119a + (11 * 0xDC0) + (69 * 0x20), 0x211Ba + (11 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MP Dark Force 1",    0x2119a + (11 * 0xDC0) + (70 * 0x20), 0x211Ba + (11 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MP Dark Force 2",    0x2119a + (11 * 0xDC0) + (71 * 0x20), 0x211Ba + (11 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MP Dark Force 3",    0x2119a + (11 * 0xDC0) + (72 * 0x20), 0x211Ba + (11 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MP Dark Force 4",    0x2119a + (11 * 0xDC0) + (73 * 0x20), 0x211Ba + (11 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HP Dark Force 1",    0x2119a + (11 * 0xDC0) + (74 * 0x20), 0x211Ba + (11 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HP Dark Force 2",    0x2119a + (11 * 0xDC0) + (75 * 0x20), 0x211Ba + (11 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HP Dark Force 3",    0x2119a + (11 * 0xDC0) + (76 * 0x20), 0x211Ba + (11 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HP Dark Force 4",    0x2119a + (11 * 0xDC0) + (77 * 0x20), 0x211Ba + (11 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LK Dark Force 1",    0x2119a + (11 * 0xDC0) + (78 * 0x20), 0x211Ba + (11 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LK Dark Force 2",    0x2119a + (11 * 0xDC0) + (79 * 0x20), 0x211Ba + (11 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LK Dark Force 3",    0x2119a + (11 * 0xDC0) + (80 * 0x20), 0x211Ba + (11 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah LK Dark Force 4",    0x2119a + (11 * 0xDC0) + (81 * 0x20), 0x211Ba + (11 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MK Dark Force 1",    0x2119a + (11 * 0xDC0) + (82 * 0x20), 0x211Ba + (11 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MK Dark Force 2",    0x2119a + (11 * 0xDC0) + (83 * 0x20), 0x211Ba + (11 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MK Dark Force 3",    0x2119a + (11 * 0xDC0) + (84 * 0x20), 0x211Ba + (11 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah MK Dark Force 4",    0x2119a + (11 * 0xDC0) + (85 * 0x20), 0x211Ba + (11 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HK Dark Force 1",    0x2119a + (11 * 0xDC0) + (86 * 0x20), 0x211Ba + (11 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HK Dark Force 2",    0x2119a + (11 * 0xDC0) + (87 * 0x20), 0x211Ba + (11 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HK Dark Force 3",    0x2119a + (11 * 0xDC0) + (88 * 0x20), 0x211Ba + (11 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah HK Dark Force 4",    0x2119a + (11 * 0xDC0) + (89 * 0x20), 0x211Ba + (11 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah PP Dark Force 1",    0x2119a + (11 * 0xDC0) + (90 * 0x20), 0x211Ba + (11 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah PP Dark Force 2",    0x2119a + (11 * 0xDC0) + (91 * 0x20), 0x211Ba + (11 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah PP Dark Force 3",    0x2119a + (11 * 0xDC0) + (92 * 0x20), 0x211Ba + (11 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah PP Dark Force 4",    0x2119a + (11 * 0xDC0) + (93 * 0x20), 0x211Ba + (11 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah KK Dark Force 1",    0x2119a + (11 * 0xDC0) + (94 * 0x20), 0x211Ba + (11 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah KK Dark Force 2",    0x2119a + (11 * 0xDC0) + (95 * 0x20), 0x211Ba + (11 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah KK Dark Force 3",    0x2119a + (11 * 0xDC0) + (96 * 0x20), 0x211Ba + (11 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah KK Dark Force 4",    0x2119a + (11 * 0xDC0) + (97 * 0x20), 0x211Ba + (11 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AP Dark Force 1",    0x2119a + (11 * 0xDC0) + (98 * 0x20), 0x211Ba + (11 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AP Dark Force 2",    0x2119a + (11 * 0xDC0) + (99 * 0x20), 0x211Ba + (11 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AP Dark Force 3",    0x2119a + (11 * 0xDC0) + (100 * 0x20), 0x211Ba + (11 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AP Dark Force 4",    0x2119a + (11 * 0xDC0) + (101 * 0x20), 0x211Ba + (11 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AK Dark Force 1",    0x2119a + (11 * 0xDC0) + (102 * 0x20), 0x211Ba + (11 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AK Dark Force 2",    0x2119a + (11 * 0xDC0) + (103 * 0x20), 0x211Ba + (11 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AK Dark Force 3",    0x2119a + (11 * 0xDC0) + (104 * 0x20), 0x211Ba + (11 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah AK Dark Force 4",    0x2119a + (11 * 0xDC0) + (105 * 0x20), 0x211Ba + (11 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ??? 1",              0x2119a + (11 * 0xDC0) + (106 * 0x20), 0x211Ba + (11 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ??? 2",              0x2119a + (11 * 0xDC0) + (107 * 0x20), 0x211Ba + (11 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ??? 3",              0x2119a + (11 * 0xDC0) + (108 * 0x20), 0x211Ba + (11 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ??? 4",              0x2119a + (11 * 0xDC0) + (109 * 0x20), 0x211Ba + (11 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Jedah },
 };

const sGame_PaletteDataset VSAV2_A_Phobos_PALETTES_SPECIAL[] =
{
    { L"Phobos LP Poisoned",        0x2119a + (12 * 0xDC0) + (0 * 0x20), 0x211Ba + (12 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MP Poisoned",        0x2119a + (12 * 0xDC0) + (1 * 0x20), 0x211Ba + (12 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HP Poisoned",        0x2119a + (12 * 0xDC0) + (2 * 0x20), 0x211Ba + (12 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LK Poisoned",        0x2119a + (12 * 0xDC0) + (3 * 0x20), 0x211Ba + (12 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MK Poisoned",        0x2119a + (12 * 0xDC0) + (4 * 0x20), 0x211Ba + (12 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HK Poisoned",        0x2119a + (12 * 0xDC0) + (5 * 0x20), 0x211Ba + (12 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos PP Poisoned",        0x2119a + (12 * 0xDC0) + (6 * 0x20), 0x211Ba + (12 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos KK Poisoned",        0x2119a + (12 * 0xDC0) + (7 * 0x20), 0x211Ba + (12 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AP Poisoned",        0x2119a + (12 * 0xDC0) + (8 * 0x20), 0x211Ba + (12 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AK Poisoned",        0x2119a + (12 * 0xDC0) + (9 * 0x20), 0x211Ba + (12 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LP Zapped",          0x2119a + (12 * 0xDC0) + (10 * 0x20), 0x211Ba + (12 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos MP Zapped",          0x2119a + (12 * 0xDC0) + (11 * 0x20), 0x211Ba + (12 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos HP Zapped",          0x2119a + (12 * 0xDC0) + (12 * 0x20), 0x211Ba + (12 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos LK Zapped",          0x2119a + (12 * 0xDC0) + (13 * 0x20), 0x211Ba + (12 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos MK Zapped",          0x2119a + (12 * 0xDC0) + (14 * 0x20), 0x211Ba + (12 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos HK Zapped",          0x2119a + (12 * 0xDC0) + (15 * 0x20), 0x211Ba + (12 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos PP Zapped",          0x2119a + (12 * 0xDC0) + (16 * 0x20), 0x211Ba + (12 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos KK Zapped",          0x2119a + (12 * 0xDC0) + (17 * 0x20), 0x211Ba + (12 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos AP Zapped",          0x2119a + (12 * 0xDC0) + (18 * 0x20), 0x211Ba + (12 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos AK Zapped",          0x2119a + (12 * 0xDC0) + (19 * 0x20), 0x211Ba + (12 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0c },
    { L"Phobos LP Burned",          0x2119a + (12 * 0xDC0) + (20 * 0x20), 0x211Ba + (12 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MP Burned",          0x2119a + (12 * 0xDC0) + (21 * 0x20), 0x211Ba + (12 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HP Burned",          0x2119a + (12 * 0xDC0) + (22 * 0x20), 0x211Ba + (12 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LK Burned",          0x2119a + (12 * 0xDC0) + (23 * 0x20), 0x211Ba + (12 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MK Burned",          0x2119a + (12 * 0xDC0) + (24 * 0x20), 0x211Ba + (12 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HK Burned",          0x2119a + (12 * 0xDC0) + (25 * 0x20), 0x211Ba + (12 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos PP Burned",          0x2119a + (12 * 0xDC0) + (26 * 0x20), 0x211Ba + (12 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos KK Burned",          0x2119a + (12 * 0xDC0) + (27 * 0x20), 0x211Ba + (12 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AP Burned",          0x2119a + (12 * 0xDC0) + (28 * 0x20), 0x211Ba + (12 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AK Burned",          0x2119a + (12 * 0xDC0) + (29 * 0x20), 0x211Ba + (12 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (30 * 0x20), 0x211Ba + (12 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos MP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (31 * 0x20), 0x211Ba + (12 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos HP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (32 * 0x20), 0x211Ba + (12 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos LK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (33 * 0x20), 0x211Ba + (12 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos MK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (34 * 0x20), 0x211Ba + (12 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos HK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (35 * 0x20), 0x211Ba + (12 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos PP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (36 * 0x20), 0x211Ba + (12 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos KK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (37 * 0x20), 0x211Ba + (12 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos AP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (38 * 0x20), 0x211Ba + (12 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos AK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (39 * 0x20), 0x211Ba + (12 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x10 },
    { L"Phobos ES 1",               0x2119a + (12 * 0xDC0) + (40 * 0x20), 0x211Ba + (12 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos ES 2",               0x2119a + (12 * 0xDC0) + (41 * 0x20), 0x211Ba + (12 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos ES 3",               0x2119a + (12 * 0xDC0) + (42 * 0x20), 0x211Ba + (12 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos ES 4",               0x2119a + (12 * 0xDC0) + (43 * 0x20), 0x211Ba + (12 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 1",               0x2119a + (12 * 0xDC0) + (44 * 0x20), 0x211Ba + (12 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 2",               0x2119a + (12 * 0xDC0) + (45 * 0x20), 0x211Ba + (12 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 3",               0x2119a + (12 * 0xDC0) + (46 * 0x20), 0x211Ba + (12 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 4",               0x2119a + (12 * 0xDC0) + (47 * 0x20), 0x211Ba + (12 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 5",               0x2119a + (12 * 0xDC0) + (48 * 0x20), 0x211Ba + (12 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 6",               0x2119a + (12 * 0xDC0) + (49 * 0x20), 0x211Ba + (12 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 7",               0x2119a + (12 * 0xDC0) + (50 * 0x20), 0x211Ba + (12 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos EX 8",               0x2119a + (12 * 0xDC0) + (51 * 0x20), 0x211Ba + (12 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos Prova di Servo",     0x2119a + (12 * 0xDC0) + (52 * 0x20), 0x211Ba + (12 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos Finale Rosso",       0x2119a + (12 * 0xDC0) + (53 * 0x20), 0x211Ba + (12 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos Stone",              0x2119a + (12 * 0xDC0) + (54 * 0x20), 0x211Ba + (12 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (55 * 0x20), 0x211Ba + (12 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (56 * 0x20), 0x211Ba + (12 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (57 * 0x20), 0x211Ba + (12 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (58 * 0x20), 0x211Ba + (12 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (59 * 0x20), 0x211Ba + (12 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (60 * 0x20), 0x211Ba + (12 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos PP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (61 * 0x20), 0x211Ba + (12 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos KK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (62 * 0x20), 0x211Ba + (12 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (63 * 0x20), 0x211Ba + (12 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (64 * 0x20), 0x211Ba + (12 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos Q-Bee's QJ Honey",   0x2119a + (12 * 0xDC0) + (65 * 0x20), 0x211Ba + (12 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LP Dark Force 1",    0x2119a + (12 * 0xDC0) + (66 * 0x20), 0x211Ba + (12 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LP Dark Force 2",    0x2119a + (12 * 0xDC0) + (67 * 0x20), 0x211Ba + (12 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LP Dark Force 3",    0x2119a + (12 * 0xDC0) + (68 * 0x20), 0x211Ba + (12 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LP Dark Force 4",    0x2119a + (12 * 0xDC0) + (69 * 0x20), 0x211Ba + (12 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MP Dark Force 1",    0x2119a + (12 * 0xDC0) + (70 * 0x20), 0x211Ba + (12 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MP Dark Force 2",    0x2119a + (12 * 0xDC0) + (71 * 0x20), 0x211Ba + (12 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MP Dark Force 3",    0x2119a + (12 * 0xDC0) + (72 * 0x20), 0x211Ba + (12 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MP Dark Force 4",    0x2119a + (12 * 0xDC0) + (73 * 0x20), 0x211Ba + (12 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HP Dark Force 1",    0x2119a + (12 * 0xDC0) + (74 * 0x20), 0x211Ba + (12 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HP Dark Force 2",    0x2119a + (12 * 0xDC0) + (75 * 0x20), 0x211Ba + (12 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HP Dark Force 3",    0x2119a + (12 * 0xDC0) + (76 * 0x20), 0x211Ba + (12 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HP Dark Force 4",    0x2119a + (12 * 0xDC0) + (77 * 0x20), 0x211Ba + (12 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LK Dark Force 1",    0x2119a + (12 * 0xDC0) + (78 * 0x20), 0x211Ba + (12 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LK Dark Force 2",    0x2119a + (12 * 0xDC0) + (79 * 0x20), 0x211Ba + (12 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LK Dark Force 3",    0x2119a + (12 * 0xDC0) + (80 * 0x20), 0x211Ba + (12 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos LK Dark Force 4",    0x2119a + (12 * 0xDC0) + (81 * 0x20), 0x211Ba + (12 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MK Dark Force 1",    0x2119a + (12 * 0xDC0) + (82 * 0x20), 0x211Ba + (12 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MK Dark Force 2",    0x2119a + (12 * 0xDC0) + (83 * 0x20), 0x211Ba + (12 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MK Dark Force 3",    0x2119a + (12 * 0xDC0) + (84 * 0x20), 0x211Ba + (12 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos MK Dark Force 4",    0x2119a + (12 * 0xDC0) + (85 * 0x20), 0x211Ba + (12 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HK Dark Force 1",    0x2119a + (12 * 0xDC0) + (86 * 0x20), 0x211Ba + (12 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HK Dark Force 2",    0x2119a + (12 * 0xDC0) + (87 * 0x20), 0x211Ba + (12 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HK Dark Force 3",    0x2119a + (12 * 0xDC0) + (88 * 0x20), 0x211Ba + (12 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos HK Dark Force 4",    0x2119a + (12 * 0xDC0) + (89 * 0x20), 0x211Ba + (12 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos PP Dark Force 1",    0x2119a + (12 * 0xDC0) + (90 * 0x20), 0x211Ba + (12 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos PP Dark Force 2",    0x2119a + (12 * 0xDC0) + (91 * 0x20), 0x211Ba + (12 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos PP Dark Force 3",    0x2119a + (12 * 0xDC0) + (92 * 0x20), 0x211Ba + (12 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos PP Dark Force 4",    0x2119a + (12 * 0xDC0) + (93 * 0x20), 0x211Ba + (12 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos KK Dark Force 1",    0x2119a + (12 * 0xDC0) + (94 * 0x20), 0x211Ba + (12 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos KK Dark Force 2",    0x2119a + (12 * 0xDC0) + (95 * 0x20), 0x211Ba + (12 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos KK Dark Force 3",    0x2119a + (12 * 0xDC0) + (96 * 0x20), 0x211Ba + (12 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos KK Dark Force 4",    0x2119a + (12 * 0xDC0) + (97 * 0x20), 0x211Ba + (12 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AP Dark Force 1",    0x2119a + (12 * 0xDC0) + (98 * 0x20), 0x211Ba + (12 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AP Dark Force 2",    0x2119a + (12 * 0xDC0) + (99 * 0x20), 0x211Ba + (12 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AP Dark Force 3",    0x2119a + (12 * 0xDC0) + (100 * 0x20), 0x211Ba + (12 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AP Dark Force 4",    0x2119a + (12 * 0xDC0) + (101 * 0x20), 0x211Ba + (12 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AK Dark Force 1",    0x2119a + (12 * 0xDC0) + (102 * 0x20), 0x211Ba + (12 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AK Dark Force 2",    0x2119a + (12 * 0xDC0) + (103 * 0x20), 0x211Ba + (12 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AK Dark Force 3",    0x2119a + (12 * 0xDC0) + (104 * 0x20), 0x211Ba + (12 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos AK Dark Force 4",    0x2119a + (12 * 0xDC0) + (105 * 0x20), 0x211Ba + (12 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos ??? 1",              0x2119a + (12 * 0xDC0) + (106 * 0x20), 0x211Ba + (12 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos ??? 2",              0x2119a + (12 * 0xDC0) + (107 * 0x20), 0x211Ba + (12 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos ??? 3",              0x2119a + (12 * 0xDC0) + (108 * 0x20), 0x211Ba + (12 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Phobos },
    { L"Phobos ??? 4",              0x2119a + (12 * 0xDC0) + (109 * 0x20), 0x211Ba + (12 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Phobos },
 };

const sGame_PaletteDataset VSAV2_A_Pyron_PALETTES_SPECIAL[] =
{
    { L"Pyron LP Poisoned",        0x2119a + (13 * 0xDC0) + (0 * 0x20), 0x211Ba + (13 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MP Poisoned",        0x2119a + (13 * 0xDC0) + (1 * 0x20), 0x211Ba + (13 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HP Poisoned",        0x2119a + (13 * 0xDC0) + (2 * 0x20), 0x211Ba + (13 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LK Poisoned",        0x2119a + (13 * 0xDC0) + (3 * 0x20), 0x211Ba + (13 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MK Poisoned",        0x2119a + (13 * 0xDC0) + (4 * 0x20), 0x211Ba + (13 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HK Poisoned",        0x2119a + (13 * 0xDC0) + (5 * 0x20), 0x211Ba + (13 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron PP Poisoned",        0x2119a + (13 * 0xDC0) + (6 * 0x20), 0x211Ba + (13 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron KK Poisoned",        0x2119a + (13 * 0xDC0) + (7 * 0x20), 0x211Ba + (13 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AP Poisoned",        0x2119a + (13 * 0xDC0) + (8 * 0x20), 0x211Ba + (13 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AK Poisoned",        0x2119a + (13 * 0xDC0) + (9 * 0x20), 0x211Ba + (13 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LP Zapped",          0x2119a + (13 * 0xDC0) + (10 * 0x20), 0x211Ba + (13 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron MP Zapped",          0x2119a + (13 * 0xDC0) + (11 * 0x20), 0x211Ba + (13 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron HP Zapped",          0x2119a + (13 * 0xDC0) + (12 * 0x20), 0x211Ba + (13 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron LK Zapped",          0x2119a + (13 * 0xDC0) + (13 * 0x20), 0x211Ba + (13 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron MK Zapped",          0x2119a + (13 * 0xDC0) + (14 * 0x20), 0x211Ba + (13 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron HK Zapped",          0x2119a + (13 * 0xDC0) + (15 * 0x20), 0x211Ba + (13 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron PP Zapped",          0x2119a + (13 * 0xDC0) + (16 * 0x20), 0x211Ba + (13 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron KK Zapped",          0x2119a + (13 * 0xDC0) + (17 * 0x20), 0x211Ba + (13 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron AP Zapped",          0x2119a + (13 * 0xDC0) + (18 * 0x20), 0x211Ba + (13 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron AK Zapped",          0x2119a + (13 * 0xDC0) + (19 * 0x20), 0x211Ba + (13 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0c },
    { L"Pyron LP Burned",          0x2119a + (13 * 0xDC0) + (20 * 0x20), 0x211Ba + (13 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MP Burned",          0x2119a + (13 * 0xDC0) + (21 * 0x20), 0x211Ba + (13 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HP Burned",          0x2119a + (13 * 0xDC0) + (22 * 0x20), 0x211Ba + (13 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LK Burned",          0x2119a + (13 * 0xDC0) + (23 * 0x20), 0x211Ba + (13 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MK Burned",          0x2119a + (13 * 0xDC0) + (24 * 0x20), 0x211Ba + (13 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HK Burned",          0x2119a + (13 * 0xDC0) + (25 * 0x20), 0x211Ba + (13 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron PP Burned",          0x2119a + (13 * 0xDC0) + (26 * 0x20), 0x211Ba + (13 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron KK Burned",          0x2119a + (13 * 0xDC0) + (27 * 0x20), 0x211Ba + (13 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AP Burned",          0x2119a + (13 * 0xDC0) + (28 * 0x20), 0x211Ba + (13 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AK Burned",          0x2119a + (13 * 0xDC0) + (29 * 0x20), 0x211Ba + (13 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (30 * 0x20), 0x211Ba + (13 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron MP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (31 * 0x20), 0x211Ba + (13 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron HP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (32 * 0x20), 0x211Ba + (13 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron LK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (33 * 0x20), 0x211Ba + (13 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron MK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (34 * 0x20), 0x211Ba + (13 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron HK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (35 * 0x20), 0x211Ba + (13 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron PP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (36 * 0x20), 0x211Ba + (13 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron KK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (37 * 0x20), 0x211Ba + (13 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron AP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (38 * 0x20), 0x211Ba + (13 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron AK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (39 * 0x20), 0x211Ba + (13 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x10 },
    { L"Pyron ES 1",               0x2119a + (13 * 0xDC0) + (40 * 0x20), 0x211Ba + (13 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ES 2",               0x2119a + (13 * 0xDC0) + (41 * 0x20), 0x211Ba + (13 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ES 3",               0x2119a + (13 * 0xDC0) + (42 * 0x20), 0x211Ba + (13 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ES 4",               0x2119a + (13 * 0xDC0) + (43 * 0x20), 0x211Ba + (13 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 1",               0x2119a + (13 * 0xDC0) + (44 * 0x20), 0x211Ba + (13 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 2",               0x2119a + (13 * 0xDC0) + (45 * 0x20), 0x211Ba + (13 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 3",               0x2119a + (13 * 0xDC0) + (46 * 0x20), 0x211Ba + (13 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 4",               0x2119a + (13 * 0xDC0) + (47 * 0x20), 0x211Ba + (13 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 5",               0x2119a + (13 * 0xDC0) + (48 * 0x20), 0x211Ba + (13 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 6",               0x2119a + (13 * 0xDC0) + (49 * 0x20), 0x211Ba + (13 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 7",               0x2119a + (13 * 0xDC0) + (50 * 0x20), 0x211Ba + (13 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX 8",               0x2119a + (13 * 0xDC0) + (51 * 0x20), 0x211Ba + (13 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron Prova di Servo",     0x2119a + (13 * 0xDC0) + (52 * 0x20), 0x211Ba + (13 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron Finale Rosso",       0x2119a + (13 * 0xDC0) + (53 * 0x20), 0x211Ba + (13 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron Stone",              0x2119a + (13 * 0xDC0) + (54 * 0x20), 0x211Ba + (13 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (55 * 0x20), 0x211Ba + (13 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (56 * 0x20), 0x211Ba + (13 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (57 * 0x20), 0x211Ba + (13 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (58 * 0x20), 0x211Ba + (13 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (59 * 0x20), 0x211Ba + (13 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (60 * 0x20), 0x211Ba + (13 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron PP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (61 * 0x20), 0x211Ba + (13 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron KK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (62 * 0x20), 0x211Ba + (13 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (63 * 0x20), 0x211Ba + (13 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (64 * 0x20), 0x211Ba + (13 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron Q-Bee's QJ Honey",   0x2119a + (13 * 0xDC0) + (65 * 0x20), 0x211Ba + (13 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LP Dark Force 1",    0x2119a + (13 * 0xDC0) + (66 * 0x20), 0x211Ba + (13 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LP Dark Force 2",    0x2119a + (13 * 0xDC0) + (67 * 0x20), 0x211Ba + (13 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LP Dark Force 3",    0x2119a + (13 * 0xDC0) + (68 * 0x20), 0x211Ba + (13 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LP Dark Force 4",    0x2119a + (13 * 0xDC0) + (69 * 0x20), 0x211Ba + (13 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MP Dark Force 1",    0x2119a + (13 * 0xDC0) + (70 * 0x20), 0x211Ba + (13 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MP Dark Force 2",    0x2119a + (13 * 0xDC0) + (71 * 0x20), 0x211Ba + (13 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MP Dark Force 3",    0x2119a + (13 * 0xDC0) + (72 * 0x20), 0x211Ba + (13 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MP Dark Force 4",    0x2119a + (13 * 0xDC0) + (73 * 0x20), 0x211Ba + (13 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HP Dark Force 1",    0x2119a + (13 * 0xDC0) + (74 * 0x20), 0x211Ba + (13 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HP Dark Force 2",    0x2119a + (13 * 0xDC0) + (75 * 0x20), 0x211Ba + (13 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HP Dark Force 3",    0x2119a + (13 * 0xDC0) + (76 * 0x20), 0x211Ba + (13 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HP Dark Force 4",    0x2119a + (13 * 0xDC0) + (77 * 0x20), 0x211Ba + (13 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LK Dark Force 1",    0x2119a + (13 * 0xDC0) + (78 * 0x20), 0x211Ba + (13 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LK Dark Force 2",    0x2119a + (13 * 0xDC0) + (79 * 0x20), 0x211Ba + (13 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LK Dark Force 3",    0x2119a + (13 * 0xDC0) + (80 * 0x20), 0x211Ba + (13 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron LK Dark Force 4",    0x2119a + (13 * 0xDC0) + (81 * 0x20), 0x211Ba + (13 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MK Dark Force 1",    0x2119a + (13 * 0xDC0) + (82 * 0x20), 0x211Ba + (13 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MK Dark Force 2",    0x2119a + (13 * 0xDC0) + (83 * 0x20), 0x211Ba + (13 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MK Dark Force 3",    0x2119a + (13 * 0xDC0) + (84 * 0x20), 0x211Ba + (13 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron MK Dark Force 4",    0x2119a + (13 * 0xDC0) + (85 * 0x20), 0x211Ba + (13 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HK Dark Force 1",    0x2119a + (13 * 0xDC0) + (86 * 0x20), 0x211Ba + (13 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HK Dark Force 2",    0x2119a + (13 * 0xDC0) + (87 * 0x20), 0x211Ba + (13 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HK Dark Force 3",    0x2119a + (13 * 0xDC0) + (88 * 0x20), 0x211Ba + (13 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron HK Dark Force 4",    0x2119a + (13 * 0xDC0) + (89 * 0x20), 0x211Ba + (13 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron PP Dark Force 1",    0x2119a + (13 * 0xDC0) + (90 * 0x20), 0x211Ba + (13 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron PP Dark Force 2",    0x2119a + (13 * 0xDC0) + (91 * 0x20), 0x211Ba + (13 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron PP Dark Force 3",    0x2119a + (13 * 0xDC0) + (92 * 0x20), 0x211Ba + (13 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron PP Dark Force 4",    0x2119a + (13 * 0xDC0) + (93 * 0x20), 0x211Ba + (13 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron KK Dark Force 1",    0x2119a + (13 * 0xDC0) + (94 * 0x20), 0x211Ba + (13 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron KK Dark Force 2",    0x2119a + (13 * 0xDC0) + (95 * 0x20), 0x211Ba + (13 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron KK Dark Force 3",    0x2119a + (13 * 0xDC0) + (96 * 0x20), 0x211Ba + (13 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron KK Dark Force 4",    0x2119a + (13 * 0xDC0) + (97 * 0x20), 0x211Ba + (13 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AP Dark Force 1",    0x2119a + (13 * 0xDC0) + (98 * 0x20), 0x211Ba + (13 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AP Dark Force 2",    0x2119a + (13 * 0xDC0) + (99 * 0x20), 0x211Ba + (13 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AP Dark Force 3",    0x2119a + (13 * 0xDC0) + (100 * 0x20), 0x211Ba + (13 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AP Dark Force 4",    0x2119a + (13 * 0xDC0) + (101 * 0x20), 0x211Ba + (13 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AK Dark Force 1",    0x2119a + (13 * 0xDC0) + (102 * 0x20), 0x211Ba + (13 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AK Dark Force 2",    0x2119a + (13 * 0xDC0) + (103 * 0x20), 0x211Ba + (13 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AK Dark Force 3",    0x2119a + (13 * 0xDC0) + (104 * 0x20), 0x211Ba + (13 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron AK Dark Force 4",    0x2119a + (13 * 0xDC0) + (105 * 0x20), 0x211Ba + (13 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ??? 1",              0x2119a + (13 * 0xDC0) + (106 * 0x20), 0x211Ba + (13 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ??? 2",              0x2119a + (13 * 0xDC0) + (107 * 0x20), 0x211Ba + (13 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ??? 3",              0x2119a + (13 * 0xDC0) + (108 * 0x20), 0x211Ba + (13 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ??? 4",              0x2119a + (13 * 0xDC0) + (109 * 0x20), 0x211Ba + (13 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Pyron },
 };

const sGame_PaletteDataset VSAV2_A_DarkGallon_PALETTES_SPECIAL[] =
{
    { L"Dark Gallon LP Poisoned",        0x2119a + (14 * 0xDC0) + (0 * 0x20), 0x211Ba + (14 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MP Poisoned",        0x2119a + (14 * 0xDC0) + (1 * 0x20), 0x211Ba + (14 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Poisoned",        0x2119a + (14 * 0xDC0) + (2 * 0x20), 0x211Ba + (14 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Poisoned",        0x2119a + (14 * 0xDC0) + (3 * 0x20), 0x211Ba + (14 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Poisoned",        0x2119a + (14 * 0xDC0) + (4 * 0x20), 0x211Ba + (14 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Poisoned",        0x2119a + (14 * 0xDC0) + (5 * 0x20), 0x211Ba + (14 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Poisoned",        0x2119a + (14 * 0xDC0) + (6 * 0x20), 0x211Ba + (14 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Poisoned",        0x2119a + (14 * 0xDC0) + (7 * 0x20), 0x211Ba + (14 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Poisoned",        0x2119a + (14 * 0xDC0) + (8 * 0x20), 0x211Ba + (14 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Poisoned",        0x2119a + (14 * 0xDC0) + (9 * 0x20), 0x211Ba + (14 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LP Zapped",          0x2119a + (14 * 0xDC0) + (10 * 0x20), 0x211Ba + (14 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon MP Zapped",          0x2119a + (14 * 0xDC0) + (11 * 0x20), 0x211Ba + (14 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon HP Zapped",          0x2119a + (14 * 0xDC0) + (12 * 0x20), 0x211Ba + (14 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon LK Zapped",          0x2119a + (14 * 0xDC0) + (13 * 0x20), 0x211Ba + (14 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon MK Zapped",          0x2119a + (14 * 0xDC0) + (14 * 0x20), 0x211Ba + (14 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon HK Zapped",          0x2119a + (14 * 0xDC0) + (15 * 0x20), 0x211Ba + (14 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon PP Zapped",          0x2119a + (14 * 0xDC0) + (16 * 0x20), 0x211Ba + (14 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon KK Zapped",          0x2119a + (14 * 0xDC0) + (17 * 0x20), 0x211Ba + (14 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon AP Zapped",          0x2119a + (14 * 0xDC0) + (18 * 0x20), 0x211Ba + (14 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon AK Zapped",          0x2119a + (14 * 0xDC0) + (19 * 0x20), 0x211Ba + (14 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon LP Burned",          0x2119a + (14 * 0xDC0) + (20 * 0x20), 0x211Ba + (14 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MP Burned",          0x2119a + (14 * 0xDC0) + (21 * 0x20), 0x211Ba + (14 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Burned",          0x2119a + (14 * 0xDC0) + (22 * 0x20), 0x211Ba + (14 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Burned",          0x2119a + (14 * 0xDC0) + (23 * 0x20), 0x211Ba + (14 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Burned",          0x2119a + (14 * 0xDC0) + (24 * 0x20), 0x211Ba + (14 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Burned",          0x2119a + (14 * 0xDC0) + (25 * 0x20), 0x211Ba + (14 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Burned",          0x2119a + (14 * 0xDC0) + (26 * 0x20), 0x211Ba + (14 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Burned",          0x2119a + (14 * 0xDC0) + (27 * 0x20), 0x211Ba + (14 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Burned",          0x2119a + (14 * 0xDC0) + (28 * 0x20), 0x211Ba + (14 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Burned",          0x2119a + (14 * 0xDC0) + (29 * 0x20), 0x211Ba + (14 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
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
    { L"Dark Gallon ES 1",               0x2119a + (14 * 0xDC0) + (40 * 0x20), 0x211Ba + (14 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ES 2",               0x2119a + (14 * 0xDC0) + (41 * 0x20), 0x211Ba + (14 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ES 3",               0x2119a + (14 * 0xDC0) + (42 * 0x20), 0x211Ba + (14 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ES 4",               0x2119a + (14 * 0xDC0) + (43 * 0x20), 0x211Ba + (14 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 1",               0x2119a + (14 * 0xDC0) + (44 * 0x20), 0x211Ba + (14 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 2",               0x2119a + (14 * 0xDC0) + (45 * 0x20), 0x211Ba + (14 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 3",               0x2119a + (14 * 0xDC0) + (46 * 0x20), 0x211Ba + (14 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 4",               0x2119a + (14 * 0xDC0) + (47 * 0x20), 0x211Ba + (14 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 5",               0x2119a + (14 * 0xDC0) + (48 * 0x20), 0x211Ba + (14 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 6",               0x2119a + (14 * 0xDC0) + (49 * 0x20), 0x211Ba + (14 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 7",               0x2119a + (14 * 0xDC0) + (50 * 0x20), 0x211Ba + (14 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 8",               0x2119a + (14 * 0xDC0) + (51 * 0x20), 0x211Ba + (14 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Prova di Servo",     0x2119a + (14 * 0xDC0) + (52 * 0x20), 0x211Ba + (14 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Finale Rosso",       0x2119a + (14 * 0xDC0) + (53 * 0x20), 0x211Ba + (14 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Stone",              0x2119a + (14 * 0xDC0) + (54 * 0x20), 0x211Ba + (14 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (55 * 0x20), 0x211Ba + (14 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon MP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (56 * 0x20), 0x211Ba + (14 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon HP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (57 * 0x20), 0x211Ba + (14 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon LK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (58 * 0x20), 0x211Ba + (14 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon MK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (59 * 0x20), 0x211Ba + (14 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon HK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (60 * 0x20), 0x211Ba + (14 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon PP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (61 * 0x20), 0x211Ba + (14 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon KK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (62 * 0x20), 0x211Ba + (14 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon AP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (63 * 0x20), 0x211Ba + (14 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon AK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (64 * 0x20), 0x211Ba + (14 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon Q-Bee's QJ Honey",   0x2119a + (14 * 0xDC0) + (65 * 0x20), 0x211Ba + (14 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 1",    0x2119a + (14 * 0xDC0) + (66 * 0x20), 0x211Ba + (14 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 2",    0x2119a + (14 * 0xDC0) + (67 * 0x20), 0x211Ba + (14 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 3",    0x2119a + (14 * 0xDC0) + (68 * 0x20), 0x211Ba + (14 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 4",    0x2119a + (14 * 0xDC0) + (69 * 0x20), 0x211Ba + (14 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 1",    0x2119a + (14 * 0xDC0) + (70 * 0x20), 0x211Ba + (14 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 2",    0x2119a + (14 * 0xDC0) + (71 * 0x20), 0x211Ba + (14 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 3",    0x2119a + (14 * 0xDC0) + (72 * 0x20), 0x211Ba + (14 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 4",    0x2119a + (14 * 0xDC0) + (73 * 0x20), 0x211Ba + (14 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 1",    0x2119a + (14 * 0xDC0) + (74 * 0x20), 0x211Ba + (14 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 2",    0x2119a + (14 * 0xDC0) + (75 * 0x20), 0x211Ba + (14 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 3",    0x2119a + (14 * 0xDC0) + (76 * 0x20), 0x211Ba + (14 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 4",    0x2119a + (14 * 0xDC0) + (77 * 0x20), 0x211Ba + (14 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 1",    0x2119a + (14 * 0xDC0) + (78 * 0x20), 0x211Ba + (14 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 2",    0x2119a + (14 * 0xDC0) + (79 * 0x20), 0x211Ba + (14 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 3",    0x2119a + (14 * 0xDC0) + (80 * 0x20), 0x211Ba + (14 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 4",    0x2119a + (14 * 0xDC0) + (81 * 0x20), 0x211Ba + (14 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 1",    0x2119a + (14 * 0xDC0) + (82 * 0x20), 0x211Ba + (14 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 2",    0x2119a + (14 * 0xDC0) + (83 * 0x20), 0x211Ba + (14 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 3",    0x2119a + (14 * 0xDC0) + (84 * 0x20), 0x211Ba + (14 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 4",    0x2119a + (14 * 0xDC0) + (85 * 0x20), 0x211Ba + (14 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 1",    0x2119a + (14 * 0xDC0) + (86 * 0x20), 0x211Ba + (14 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 2",    0x2119a + (14 * 0xDC0) + (87 * 0x20), 0x211Ba + (14 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 3",    0x2119a + (14 * 0xDC0) + (88 * 0x20), 0x211Ba + (14 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 4",    0x2119a + (14 * 0xDC0) + (89 * 0x20), 0x211Ba + (14 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 1",    0x2119a + (14 * 0xDC0) + (90 * 0x20), 0x211Ba + (14 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 2",    0x2119a + (14 * 0xDC0) + (91 * 0x20), 0x211Ba + (14 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 3",    0x2119a + (14 * 0xDC0) + (92 * 0x20), 0x211Ba + (14 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 4",    0x2119a + (14 * 0xDC0) + (93 * 0x20), 0x211Ba + (14 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 1",    0x2119a + (14 * 0xDC0) + (94 * 0x20), 0x211Ba + (14 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 2",    0x2119a + (14 * 0xDC0) + (95 * 0x20), 0x211Ba + (14 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 3",    0x2119a + (14 * 0xDC0) + (96 * 0x20), 0x211Ba + (14 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 4",    0x2119a + (14 * 0xDC0) + (97 * 0x20), 0x211Ba + (14 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 1",    0x2119a + (14 * 0xDC0) + (98 * 0x20), 0x211Ba + (14 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 2",    0x2119a + (14 * 0xDC0) + (99 * 0x20), 0x211Ba + (14 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 3",    0x2119a + (14 * 0xDC0) + (100 * 0x20), 0x211Ba + (14 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 4",    0x2119a + (14 * 0xDC0) + (101 * 0x20), 0x211Ba + (14 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 1",    0x2119a + (14 * 0xDC0) + (102 * 0x20), 0x211Ba + (14 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 2",    0x2119a + (14 * 0xDC0) + (103 * 0x20), 0x211Ba + (14 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 3",    0x2119a + (14 * 0xDC0) + (104 * 0x20), 0x211Ba + (14 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 4",    0x2119a + (14 * 0xDC0) + (105 * 0x20), 0x211Ba + (14 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ??? 1",              0x2119a + (14 * 0xDC0) + (106 * 0x20), 0x211Ba + (14 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ??? 2",              0x2119a + (14 * 0xDC0) + (107 * 0x20), 0x211Ba + (14 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ??? 3",              0x2119a + (14 * 0xDC0) + (108 * 0x20), 0x211Ba + (14 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ??? 4",              0x2119a + (14 * 0xDC0) + (109 * 0x20), 0x211Ba + (14 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_DarkGallon },
 };

const sGame_PaletteDataset VSAV2_A_Donovan_PALETTES_SPECIAL[] =
{
    { L"Donovan LP Poisoned",        0x2119a + (15 * 0xDC0) + (0 * 0x20), 0x211Ba + (15 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MP Poisoned",        0x2119a + (15 * 0xDC0) + (1 * 0x20), 0x211Ba + (15 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HP Poisoned",        0x2119a + (15 * 0xDC0) + (2 * 0x20), 0x211Ba + (15 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LK Poisoned",        0x2119a + (15 * 0xDC0) + (3 * 0x20), 0x211Ba + (15 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MK Poisoned",        0x2119a + (15 * 0xDC0) + (4 * 0x20), 0x211Ba + (15 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HK Poisoned",        0x2119a + (15 * 0xDC0) + (5 * 0x20), 0x211Ba + (15 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan PP Poisoned",        0x2119a + (15 * 0xDC0) + (6 * 0x20), 0x211Ba + (15 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan KK Poisoned",        0x2119a + (15 * 0xDC0) + (7 * 0x20), 0x211Ba + (15 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AP Poisoned",        0x2119a + (15 * 0xDC0) + (8 * 0x20), 0x211Ba + (15 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AK Poisoned",        0x2119a + (15 * 0xDC0) + (9 * 0x20), 0x211Ba + (15 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LP Zapped",          0x2119a + (15 * 0xDC0) + (10 * 0x20), 0x211Ba + (15 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan MP Zapped",          0x2119a + (15 * 0xDC0) + (11 * 0x20), 0x211Ba + (15 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan HP Zapped",          0x2119a + (15 * 0xDC0) + (12 * 0x20), 0x211Ba + (15 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan LK Zapped",          0x2119a + (15 * 0xDC0) + (13 * 0x20), 0x211Ba + (15 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan MK Zapped",          0x2119a + (15 * 0xDC0) + (14 * 0x20), 0x211Ba + (15 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan HK Zapped",          0x2119a + (15 * 0xDC0) + (15 * 0x20), 0x211Ba + (15 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan PP Zapped",          0x2119a + (15 * 0xDC0) + (16 * 0x20), 0x211Ba + (15 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan KK Zapped",          0x2119a + (15 * 0xDC0) + (17 * 0x20), 0x211Ba + (15 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan AP Zapped",          0x2119a + (15 * 0xDC0) + (18 * 0x20), 0x211Ba + (15 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan AK Zapped",          0x2119a + (15 * 0xDC0) + (19 * 0x20), 0x211Ba + (15 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0c },
    { L"Donovan LP Burned",          0x2119a + (15 * 0xDC0) + (20 * 0x20), 0x211Ba + (15 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MP Burned",          0x2119a + (15 * 0xDC0) + (21 * 0x20), 0x211Ba + (15 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HP Burned",          0x2119a + (15 * 0xDC0) + (22 * 0x20), 0x211Ba + (15 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LK Burned",          0x2119a + (15 * 0xDC0) + (23 * 0x20), 0x211Ba + (15 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MK Burned",          0x2119a + (15 * 0xDC0) + (24 * 0x20), 0x211Ba + (15 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HK Burned",          0x2119a + (15 * 0xDC0) + (25 * 0x20), 0x211Ba + (15 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan PP Burned",          0x2119a + (15 * 0xDC0) + (26 * 0x20), 0x211Ba + (15 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan KK Burned",          0x2119a + (15 * 0xDC0) + (27 * 0x20), 0x211Ba + (15 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AP Burned",          0x2119a + (15 * 0xDC0) + (28 * 0x20), 0x211Ba + (15 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AK Burned",          0x2119a + (15 * 0xDC0) + (29 * 0x20), 0x211Ba + (15 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
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
    { L"Donovan ES 1",               0x2119a + (15 * 0xDC0) + (40 * 0x20), 0x211Ba + (15 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan ES 2",               0x2119a + (15 * 0xDC0) + (41 * 0x20), 0x211Ba + (15 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan ES 3",               0x2119a + (15 * 0xDC0) + (42 * 0x20), 0x211Ba + (15 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan ES 4",               0x2119a + (15 * 0xDC0) + (43 * 0x20), 0x211Ba + (15 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 1",               0x2119a + (15 * 0xDC0) + (44 * 0x20), 0x211Ba + (15 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 2",               0x2119a + (15 * 0xDC0) + (45 * 0x20), 0x211Ba + (15 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 3",               0x2119a + (15 * 0xDC0) + (46 * 0x20), 0x211Ba + (15 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 4",               0x2119a + (15 * 0xDC0) + (47 * 0x20), 0x211Ba + (15 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 5",               0x2119a + (15 * 0xDC0) + (48 * 0x20), 0x211Ba + (15 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 6",               0x2119a + (15 * 0xDC0) + (49 * 0x20), 0x211Ba + (15 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 7",               0x2119a + (15 * 0xDC0) + (50 * 0x20), 0x211Ba + (15 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan EX 8",               0x2119a + (15 * 0xDC0) + (51 * 0x20), 0x211Ba + (15 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan Prova di Servo",     0x2119a + (15 * 0xDC0) + (52 * 0x20), 0x211Ba + (15 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan Finale Rosso",       0x2119a + (15 * 0xDC0) + (53 * 0x20), 0x211Ba + (15 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan Stone",              0x2119a + (15 * 0xDC0) + (54 * 0x20), 0x211Ba + (15 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (55 * 0x20), 0x211Ba + (15 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan MP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (56 * 0x20), 0x211Ba + (15 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan HP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (57 * 0x20), 0x211Ba + (15 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan LK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (58 * 0x20), 0x211Ba + (15 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan MK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (59 * 0x20), 0x211Ba + (15 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan HK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (60 * 0x20), 0x211Ba + (15 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan PP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (61 * 0x20), 0x211Ba + (15 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan KK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (62 * 0x20), 0x211Ba + (15 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan AP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (63 * 0x20), 0x211Ba + (15 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan AK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (64 * 0x20), 0x211Ba + (15 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Donovan },
    { L"Donovan Q-Bee's QJ Honey",   0x2119a + (15 * 0xDC0) + (65 * 0x20), 0x211Ba + (15 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 1",    0x2119a + (15 * 0xDC0) + (66 * 0x20), 0x211Ba + (15 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 2",    0x2119a + (15 * 0xDC0) + (67 * 0x20), 0x211Ba + (15 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 3",    0x2119a + (15 * 0xDC0) + (68 * 0x20), 0x211Ba + (15 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 4",    0x2119a + (15 * 0xDC0) + (69 * 0x20), 0x211Ba + (15 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 1",    0x2119a + (15 * 0xDC0) + (70 * 0x20), 0x211Ba + (15 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 2",    0x2119a + (15 * 0xDC0) + (71 * 0x20), 0x211Ba + (15 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 3",    0x2119a + (15 * 0xDC0) + (72 * 0x20), 0x211Ba + (15 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 4",    0x2119a + (15 * 0xDC0) + (73 * 0x20), 0x211Ba + (15 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 1",    0x2119a + (15 * 0xDC0) + (74 * 0x20), 0x211Ba + (15 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 2",    0x2119a + (15 * 0xDC0) + (75 * 0x20), 0x211Ba + (15 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 3",    0x2119a + (15 * 0xDC0) + (76 * 0x20), 0x211Ba + (15 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 4",    0x2119a + (15 * 0xDC0) + (77 * 0x20), 0x211Ba + (15 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 1",    0x2119a + (15 * 0xDC0) + (78 * 0x20), 0x211Ba + (15 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 2",    0x2119a + (15 * 0xDC0) + (79 * 0x20), 0x211Ba + (15 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 3",    0x2119a + (15 * 0xDC0) + (80 * 0x20), 0x211Ba + (15 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 4",    0x2119a + (15 * 0xDC0) + (81 * 0x20), 0x211Ba + (15 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 1",    0x2119a + (15 * 0xDC0) + (82 * 0x20), 0x211Ba + (15 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 2",    0x2119a + (15 * 0xDC0) + (83 * 0x20), 0x211Ba + (15 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 3",    0x2119a + (15 * 0xDC0) + (84 * 0x20), 0x211Ba + (15 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 4",    0x2119a + (15 * 0xDC0) + (85 * 0x20), 0x211Ba + (15 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 1",    0x2119a + (15 * 0xDC0) + (86 * 0x20), 0x211Ba + (15 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 2",    0x2119a + (15 * 0xDC0) + (87 * 0x20), 0x211Ba + (15 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 3",    0x2119a + (15 * 0xDC0) + (88 * 0x20), 0x211Ba + (15 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 4",    0x2119a + (15 * 0xDC0) + (89 * 0x20), 0x211Ba + (15 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 1",    0x2119a + (15 * 0xDC0) + (90 * 0x20), 0x211Ba + (15 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 2",    0x2119a + (15 * 0xDC0) + (91 * 0x20), 0x211Ba + (15 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 3",    0x2119a + (15 * 0xDC0) + (92 * 0x20), 0x211Ba + (15 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 4",    0x2119a + (15 * 0xDC0) + (93 * 0x20), 0x211Ba + (15 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 1",    0x2119a + (15 * 0xDC0) + (94 * 0x20), 0x211Ba + (15 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 2",    0x2119a + (15 * 0xDC0) + (95 * 0x20), 0x211Ba + (15 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 3",    0x2119a + (15 * 0xDC0) + (96 * 0x20), 0x211Ba + (15 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 4",    0x2119a + (15 * 0xDC0) + (97 * 0x20), 0x211Ba + (15 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 1",    0x2119a + (15 * 0xDC0) + (98 * 0x20), 0x211Ba + (15 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 2",    0x2119a + (15 * 0xDC0) + (99 * 0x20), 0x211Ba + (15 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 3",    0x2119a + (15 * 0xDC0) + (100 * 0x20), 0x211Ba + (15 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 4",    0x2119a + (15 * 0xDC0) + (101 * 0x20), 0x211Ba + (15 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 1",    0x2119a + (15 * 0xDC0) + (102 * 0x20), 0x211Ba + (15 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 2",    0x2119a + (15 * 0xDC0) + (103 * 0x20), 0x211Ba + (15 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 3",    0x2119a + (15 * 0xDC0) + (104 * 0x20), 0x211Ba + (15 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 4",    0x2119a + (15 * 0xDC0) + (105 * 0x20), 0x211Ba + (15 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 1",              0x2119a + (15 * 0xDC0) + (106 * 0x20), 0x211Ba + (15 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 2",              0x2119a + (15 * 0xDC0) + (107 * 0x20), 0x211Ba + (15 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 3",              0x2119a + (15 * 0xDC0) + (108 * 0x20), 0x211Ba + (15 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 4",              0x2119a + (15 * 0xDC0) + (109 * 0x20), 0x211Ba + (15 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x2 },
 };

const sGame_PaletteDataset VSAV2_A_OboroBishamon_PALETTES_SPECIAL[] =
{
    { L"Oboro Bishamon LP Poisoned",        0x2119a + (17 * 0xDC0) + (0 * 0x20), 0x211Ba + (17 * 0xDC0) + (0 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MP Poisoned",        0x2119a + (17 * 0xDC0) + (1 * 0x20), 0x211Ba + (17 * 0xDC0) + (1 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HP Poisoned",        0x2119a + (17 * 0xDC0) + (2 * 0x20), 0x211Ba + (17 * 0xDC0) + (2 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LK Poisoned",        0x2119a + (17 * 0xDC0) + (3 * 0x20), 0x211Ba + (17 * 0xDC0) + (3 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MK Poisoned",        0x2119a + (17 * 0xDC0) + (4 * 0x20), 0x211Ba + (17 * 0xDC0) + (4 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HK Poisoned",        0x2119a + (17 * 0xDC0) + (5 * 0x20), 0x211Ba + (17 * 0xDC0) + (5 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon PP Poisoned",        0x2119a + (17 * 0xDC0) + (6 * 0x20), 0x211Ba + (17 * 0xDC0) + (6 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon KK Poisoned",        0x2119a + (17 * 0xDC0) + (7 * 0x20), 0x211Ba + (17 * 0xDC0) + (7 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AP Poisoned",        0x2119a + (17 * 0xDC0) + (8 * 0x20), 0x211Ba + (17 * 0xDC0) + (8 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AK Poisoned",        0x2119a + (17 * 0xDC0) + (9 * 0x20), 0x211Ba + (17 * 0xDC0) + (9 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LP Zapped",          0x2119a + (17 * 0xDC0) + (10 * 0x20), 0x211Ba + (17 * 0xDC0) + (10 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon MP Zapped",          0x2119a + (17 * 0xDC0) + (11 * 0x20), 0x211Ba + (17 * 0xDC0) + (11 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon HP Zapped",          0x2119a + (17 * 0xDC0) + (12 * 0x20), 0x211Ba + (17 * 0xDC0) + (12 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon LK Zapped",          0x2119a + (17 * 0xDC0) + (13 * 0x20), 0x211Ba + (17 * 0xDC0) + (13 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon MK Zapped",          0x2119a + (17 * 0xDC0) + (14 * 0x20), 0x211Ba + (17 * 0xDC0) + (14 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon HK Zapped",          0x2119a + (17 * 0xDC0) + (15 * 0x20), 0x211Ba + (17 * 0xDC0) + (15 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon PP Zapped",          0x2119a + (17 * 0xDC0) + (16 * 0x20), 0x211Ba + (17 * 0xDC0) + (16 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon KK Zapped",          0x2119a + (17 * 0xDC0) + (17 * 0x20), 0x211Ba + (17 * 0xDC0) + (17 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon AP Zapped",          0x2119a + (17 * 0xDC0) + (18 * 0x20), 0x211Ba + (17 * 0xDC0) + (18 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon AK Zapped",          0x2119a + (17 * 0xDC0) + (19 * 0x20), 0x211Ba + (17 * 0xDC0) + (19 * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"Oboro Bishamon LP Burned",          0x2119a + (17 * 0xDC0) + (20 * 0x20), 0x211Ba + (17 * 0xDC0) + (20 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MP Burned",          0x2119a + (17 * 0xDC0) + (21 * 0x20), 0x211Ba + (17 * 0xDC0) + (21 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HP Burned",          0x2119a + (17 * 0xDC0) + (22 * 0x20), 0x211Ba + (17 * 0xDC0) + (22 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LK Burned",          0x2119a + (17 * 0xDC0) + (23 * 0x20), 0x211Ba + (17 * 0xDC0) + (23 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MK Burned",          0x2119a + (17 * 0xDC0) + (24 * 0x20), 0x211Ba + (17 * 0xDC0) + (24 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HK Burned",          0x2119a + (17 * 0xDC0) + (25 * 0x20), 0x211Ba + (17 * 0xDC0) + (25 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon PP Burned",          0x2119a + (17 * 0xDC0) + (26 * 0x20), 0x211Ba + (17 * 0xDC0) + (26 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon KK Burned",          0x2119a + (17 * 0xDC0) + (27 * 0x20), 0x211Ba + (17 * 0xDC0) + (27 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AP Burned",          0x2119a + (17 * 0xDC0) + (28 * 0x20), 0x211Ba + (17 * 0xDC0) + (28 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AK Burned",          0x2119a + (17 * 0xDC0) + (29 * 0x20), 0x211Ba + (17 * 0xDC0) + (29 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (30 * 0x20), 0x211Ba + (17 * 0xDC0) + (30 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon MP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (31 * 0x20), 0x211Ba + (17 * 0xDC0) + (31 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon HP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (32 * 0x20), 0x211Ba + (17 * 0xDC0) + (32 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon LK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (33 * 0x20), 0x211Ba + (17 * 0xDC0) + (33 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon MK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (34 * 0x20), 0x211Ba + (17 * 0xDC0) + (34 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon HK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (35 * 0x20), 0x211Ba + (17 * 0xDC0) + (35 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon PP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (36 * 0x20), 0x211Ba + (17 * 0xDC0) + (36 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon KK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (37 * 0x20), 0x211Ba + (17 * 0xDC0) + (37 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon AP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (38 * 0x20), 0x211Ba + (17 * 0xDC0) + (38 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon AK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (39 * 0x20), 0x211Ba + (17 * 0xDC0) + (39 * 0x20), indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"Oboro Bishamon ES 1",               0x2119a + (17 * 0xDC0) + (40 * 0x20), 0x211Ba + (17 * 0xDC0) + (40 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ES 2",               0x2119a + (17 * 0xDC0) + (41 * 0x20), 0x211Ba + (17 * 0xDC0) + (41 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ES 3",               0x2119a + (17 * 0xDC0) + (42 * 0x20), 0x211Ba + (17 * 0xDC0) + (42 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ES 4",               0x2119a + (17 * 0xDC0) + (43 * 0x20), 0x211Ba + (17 * 0xDC0) + (43 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 1",               0x2119a + (17 * 0xDC0) + (44 * 0x20), 0x211Ba + (17 * 0xDC0) + (44 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 2",               0x2119a + (17 * 0xDC0) + (45 * 0x20), 0x211Ba + (17 * 0xDC0) + (45 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 3",               0x2119a + (17 * 0xDC0) + (46 * 0x20), 0x211Ba + (17 * 0xDC0) + (46 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 4",               0x2119a + (17 * 0xDC0) + (47 * 0x20), 0x211Ba + (17 * 0xDC0) + (47 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 5",               0x2119a + (17 * 0xDC0) + (48 * 0x20), 0x211Ba + (17 * 0xDC0) + (48 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 6",               0x2119a + (17 * 0xDC0) + (49 * 0x20), 0x211Ba + (17 * 0xDC0) + (49 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 7",               0x2119a + (17 * 0xDC0) + (50 * 0x20), 0x211Ba + (17 * 0xDC0) + (50 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 8",               0x2119a + (17 * 0xDC0) + (51 * 0x20), 0x211Ba + (17 * 0xDC0) + (51 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon Prova di Servo",     0x2119a + (17 * 0xDC0) + (52 * 0x20), 0x211Ba + (17 * 0xDC0) + (52 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon Finale Rosso",       0x2119a + (17 * 0xDC0) + (53 * 0x20), 0x211Ba + (17 * 0xDC0) + (53 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon Stone",              0x2119a + (17 * 0xDC0) + (54 * 0x20), 0x211Ba + (17 * 0xDC0) + (54 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (55 * 0x20), 0x211Ba + (17 * 0xDC0) + (55 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon MP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (56 * 0x20), 0x211Ba + (17 * 0xDC0) + (56 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon HP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (57 * 0x20), 0x211Ba + (17 * 0xDC0) + (57 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon LK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (58 * 0x20), 0x211Ba + (17 * 0xDC0) + (58 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon MK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (59 * 0x20), 0x211Ba + (17 * 0xDC0) + (59 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon HK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (60 * 0x20), 0x211Ba + (17 * 0xDC0) + (60 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon PP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (61 * 0x20), 0x211Ba + (17 * 0xDC0) + (61 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon KK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (62 * 0x20), 0x211Ba + (17 * 0xDC0) + (62 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon AP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (63 * 0x20), 0x211Ba + (17 * 0xDC0) + (63 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon AK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (64 * 0x20), 0x211Ba + (17 * 0xDC0) + (64 * 0x20), indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
    { L"Oboro Bishamon Q-Bee's QJ Honey",   0x2119a + (17 * 0xDC0) + (65 * 0x20), 0x211Ba + (17 * 0xDC0) + (65 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 1",    0x2119a + (17 * 0xDC0) + (66 * 0x20), 0x211Ba + (17 * 0xDC0) + (66 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 2",    0x2119a + (17 * 0xDC0) + (67 * 0x20), 0x211Ba + (17 * 0xDC0) + (67 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 3",    0x2119a + (17 * 0xDC0) + (68 * 0x20), 0x211Ba + (17 * 0xDC0) + (68 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 4",    0x2119a + (17 * 0xDC0) + (69 * 0x20), 0x211Ba + (17 * 0xDC0) + (69 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 1",    0x2119a + (17 * 0xDC0) + (70 * 0x20), 0x211Ba + (17 * 0xDC0) + (70 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 2",    0x2119a + (17 * 0xDC0) + (71 * 0x20), 0x211Ba + (17 * 0xDC0) + (71 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 3",    0x2119a + (17 * 0xDC0) + (72 * 0x20), 0x211Ba + (17 * 0xDC0) + (72 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 4",    0x2119a + (17 * 0xDC0) + (73 * 0x20), 0x211Ba + (17 * 0xDC0) + (73 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 1",    0x2119a + (17 * 0xDC0) + (74 * 0x20), 0x211Ba + (17 * 0xDC0) + (74 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 2",    0x2119a + (17 * 0xDC0) + (75 * 0x20), 0x211Ba + (17 * 0xDC0) + (75 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 3",    0x2119a + (17 * 0xDC0) + (76 * 0x20), 0x211Ba + (17 * 0xDC0) + (76 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 4",    0x2119a + (17 * 0xDC0) + (77 * 0x20), 0x211Ba + (17 * 0xDC0) + (77 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 1",    0x2119a + (17 * 0xDC0) + (78 * 0x20), 0x211Ba + (17 * 0xDC0) + (78 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 2",    0x2119a + (17 * 0xDC0) + (79 * 0x20), 0x211Ba + (17 * 0xDC0) + (79 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 3",    0x2119a + (17 * 0xDC0) + (80 * 0x20), 0x211Ba + (17 * 0xDC0) + (80 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 4",    0x2119a + (17 * 0xDC0) + (81 * 0x20), 0x211Ba + (17 * 0xDC0) + (81 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 1",    0x2119a + (17 * 0xDC0) + (82 * 0x20), 0x211Ba + (17 * 0xDC0) + (82 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 2",    0x2119a + (17 * 0xDC0) + (83 * 0x20), 0x211Ba + (17 * 0xDC0) + (83 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 3",    0x2119a + (17 * 0xDC0) + (84 * 0x20), 0x211Ba + (17 * 0xDC0) + (84 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 4",    0x2119a + (17 * 0xDC0) + (85 * 0x20), 0x211Ba + (17 * 0xDC0) + (85 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 1",    0x2119a + (17 * 0xDC0) + (86 * 0x20), 0x211Ba + (17 * 0xDC0) + (86 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 2",    0x2119a + (17 * 0xDC0) + (87 * 0x20), 0x211Ba + (17 * 0xDC0) + (87 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 3",    0x2119a + (17 * 0xDC0) + (88 * 0x20), 0x211Ba + (17 * 0xDC0) + (88 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 4",    0x2119a + (17 * 0xDC0) + (89 * 0x20), 0x211Ba + (17 * 0xDC0) + (89 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 1",    0x2119a + (17 * 0xDC0) + (90 * 0x20), 0x211Ba + (17 * 0xDC0) + (90 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 2",    0x2119a + (17 * 0xDC0) + (91 * 0x20), 0x211Ba + (17 * 0xDC0) + (91 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 3",    0x2119a + (17 * 0xDC0) + (92 * 0x20), 0x211Ba + (17 * 0xDC0) + (92 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 4",    0x2119a + (17 * 0xDC0) + (93 * 0x20), 0x211Ba + (17 * 0xDC0) + (93 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 1",    0x2119a + (17 * 0xDC0) + (94 * 0x20), 0x211Ba + (17 * 0xDC0) + (94 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 2",    0x2119a + (17 * 0xDC0) + (95 * 0x20), 0x211Ba + (17 * 0xDC0) + (95 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 3",    0x2119a + (17 * 0xDC0) + (96 * 0x20), 0x211Ba + (17 * 0xDC0) + (96 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 4",    0x2119a + (17 * 0xDC0) + (97 * 0x20), 0x211Ba + (17 * 0xDC0) + (97 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 1",    0x2119a + (17 * 0xDC0) + (98 * 0x20), 0x211Ba + (17 * 0xDC0) + (98 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 2",    0x2119a + (17 * 0xDC0) + (99 * 0x20), 0x211Ba + (17 * 0xDC0) + (99 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 3",    0x2119a + (17 * 0xDC0) + (100 * 0x20), 0x211Ba + (17 * 0xDC0) + (100 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 4",    0x2119a + (17 * 0xDC0) + (101 * 0x20), 0x211Ba + (17 * 0xDC0) + (101 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 1",    0x2119a + (17 * 0xDC0) + (102 * 0x20), 0x211Ba + (17 * 0xDC0) + (102 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 2",    0x2119a + (17 * 0xDC0) + (103 * 0x20), 0x211Ba + (17 * 0xDC0) + (103 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 3",    0x2119a + (17 * 0xDC0) + (104 * 0x20), 0x211Ba + (17 * 0xDC0) + (104 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 4",    0x2119a + (17 * 0xDC0) + (105 * 0x20), 0x211Ba + (17 * 0xDC0) + (105 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 1",              0x2119a + (17 * 0xDC0) + (106 * 0x20), 0x211Ba + (17 * 0xDC0) + (106 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 2",              0x2119a + (17 * 0xDC0) + (107 * 0x20), 0x211Ba + (17 * 0xDC0) + (107 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 3",              0x2119a + (17 * 0xDC0) + (108 * 0x20), 0x211Ba + (17 * 0xDC0) + (108 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 4",              0x2119a + (17 * 0xDC0) + (109 * 0x20), 0x211Ba + (17 * 0xDC0) + (109 * 0x20), indexCPS2Sprites_Vamp_Bishamon },
 };

const sGame_PaletteDataset VSAV2_A_BONUS_TITLES_PALETTES[] =
{
    { L"Lilith Intro",          0x410ba, 0x4115a, indexCPS2Sprites_VSAV1_Bonus, 0x08 },
    { L"Lilith Intro Portrait", 0x3bf3a, 0x3bffa, indexCPS2Sprites_VSAV1_Bonus, 0x07 },

    { L"Title Screen - Lord of the Vampire 1", 0x3ad7a, 0x3ad9a, indexCPS2Sprites_VSAV1_Bonus, 0x2c }, /* Delta: 0x17830 */
    { L"Title Screen - Lord of the Vampire 2", 0x3f85a, 0x3f87a, indexCPS2Sprites_VSAV1_Bonus, 0x2c }, /* Delta: 0x14830 */
    { L"Title Screen - Lord of the Vampire 3", 0x3f87a, 0x3f89a, indexCPS2Sprites_VSAV1_Bonus, 0x2c }, /* Delta: 0x14830 */
    { L"Title Screen - Lord of the Vampire 4", 0x3f89a, 0x3f8ba, indexCPS2Sprites_VSAV1_Bonus, 0x2c }, /* Delta: 0x14830 */
    { L"Title Screen - Lord of the Vampire 5", 0x3f8ba, 0x3f8da, indexCPS2Sprites_VSAV1_Bonus, 0x2c }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x14790!
  // Match at 0x3f83a, 0x3f85a (delta 0x14790)
  // Match at 0x3f8da, 0x3f8fa (delta 0x14830) <-- swapped to use this one
    { L"Title Screen - Lord of the Vampire 6", 0x3f8da, 0x3f8fa, indexCPS2Sprites_VSAV1_Bonus, 0x2c }, /* Delta: 0x14830 */

    { L"Title Screen - Crown", 0x3f83a, 0x3f85a, indexCPS2Sprites_VSAV1_Bonus, 0x2b }, /* Delta: 0x14830 */
    { L"Screen Fade/Title Screen - Shine 1", 0x3adda, 0x3adfa, indexCPS2Sprites_VSAV1_Bonus, 0x2d }, /* Delta: 0x17830 */
    { L"Screen Fade/Title Screen - Shine 2", 0x3f93a, 0x3f95a, indexCPS2Sprites_VSAV1_Bonus, 0x2d }, /* Delta: 0x14830 */
    { L"Screen Fade/Title Screen - Shine 3", 0x3f95a, 0x3f97a, indexCPS2Sprites_VSAV1_Bonus, 0x2d }, /* Delta: 0x14830 */

    { L"Intro - Arcade Map BG", 0x778f2, 0x77a12, indexCPS2Sprites_VSAV1_Bonus, 0x20 }, /* Delta: 0x120b0 */
// Warning: the remapped delta shifts from 0x120b0 to 0x16ed0!
  // Match at 0x571c2, 0x571e2 (delta 0x16ed0)
  // Match at 0x585c2, 0x585e2 (delta 0x182d0)
    { L"Intro Eye", 0x571c2, 0x571e2, indexCPS2Sprites_VSAV1_Bonus, 0x24 }, /* Delta: 0x16ed0 */
// Warning: the remapped delta shifts from 0x16ed0 to 0x120b0!
  // Match at 0x77cf2, 0x77e12 (delta 0x120b0)
  // Match at 0x784f2, 0x78612 (delta 0x128b0)
    { L"Versus/Arcade BG", 0x77cf2, 0x77e12, indexCPS2Sprites_VSAV1_Bonus, 0x2f }, /* Delta: 0x120b0 */
// Warning: the remapped delta shifts from 0x120b0 to 0x116d0!
  // Match at 0x6e912, 0x6e952 (delta 0x116d0)
  // Match at 0x75b72, 0x75bb2 (delta 0x18930)
    { L"Versus/Arcade BG Flash 1", 0x6e912, 0x6e952, indexCPS2Sprites_VSAV1_Bonus, 0x30 }, /* Delta: 0x116d0 */
    { L"Versus/Arcade BG Flash 2", 0x6e952, 0x6e992, indexCPS2Sprites_VSAV1_Bonus, 0x30 }, /* Delta: 0x116d0 */
 };

const sGame_PaletteDataset VSAV2_A_HUD_PALETTES[] =
{
    // bugbugbugbugbugbug check: these were a set of 8
    { L"Life Bar Blending 1", 0x3dcba, 0x3dcda }, /* Delta: 0x14830 */
    { L"Life Bar Blending 2", 0x3dcda, 0x3dcfa }, /* Delta: 0x14830 */
    { L"Life Bar Blending 3", 0x3dcfa, 0x3dd1a }, /* Delta: 0x14830 */
    { L"Fire", 0x3097a, 0x3099a, indexCPS2Sprites_VSAV1_Bonus, 0x00 }, /* Delta: 0x16230 */
    { L"Fire Glow 1", 0x3e47a, 0x3e49a, indexCPS2Sprites_VSAV1_Bonus, 0x00 }, /* Delta: 0x14830 */
    { L"Fire Glow 2", 0x3e49a, 0x3e4ba, indexCPS2Sprites_VSAV1_Bonus, 0x00 }, /* Delta: 0x14830 */
    { L"Round Bats / Meter Numbers", 0x3099a, 0x309ba }, /* Delta: 0x16230 */
};

const sGame_PaletteDataset VSAV2_A_HUD_P1_PALETTES[] =
{
    { L"Combo Number/Wincounter/Combo Text", 0x3093a, 0x3095a }, /* Delta: 0x16230 */
    { L"Level 0 Frame 2", 0x3e4ba, 0x3e4da }, /* Delta: 0x14830 */
    { L"Level 0 Frame 3", 0x3e4da, 0x3e4fa }, /* Delta: 0x14830 */
    { L"Level 0 Frame 4", 0x3e4fa, 0x3e51a }, /* Delta: 0x14830 */
    { L"Level 0 Frame 5", 0x3e51a, 0x3e53a }, /* Delta: 0x14830 */
    { L"Level 0 Frame 6", 0x3e53a, 0x3e55a }, /* Delta: 0x14830 */
    { L"Level 0 Frame 7", 0x3e55a, 0x3e57a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 1", 0x3e57a, 0x3e59a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 2", 0x3e59a, 0x3e5ba }, /* Delta: 0x14830 */
    { L"Level 1 Frame 3", 0x3e5ba, 0x3e5da }, /* Delta: 0x14830 */
    { L"Level 1 Frame 4", 0x3e5da, 0x3e5fa }, /* Delta: 0x14830 */
    { L"Level 1 Frame 5", 0x3e5fa, 0x3e61a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 6", 0x3e61a, 0x3e63a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3e5ba, 0x3e5da (delta 0x147b0)
  // Match at 0x3e63a, 0x3e65a (delta 0x14830) <-- swapped to use this one
    { L"Level 1 Frame 7", 0x3e63a, 0x3e65a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 8", 0x3e65a, 0x3e67a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 1", 0x3e67a, 0x3e69a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 2", 0x3e69a, 0x3e6ba }, /* Delta: 0x14830 */
    { L"Level 2 Frame 3", 0x3e6ba, 0x3e6da }, /* Delta: 0x14830 */
    { L"Level 2 Frame 4", 0x3e6da, 0x3e6fa }, /* Delta: 0x14830 */
    { L"Level 2 Frame 5", 0x3e6fa, 0x3e71a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 6", 0x3e71a, 0x3e73a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3e6ba, 0x3e6da (delta 0x147b0)
  // Match at 0x3e73a, 0x3e75a (delta 0x14830) <-- swapped to use this one
    { L"Level 2 Frame 7", 0x3e73a, 0x3e75a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 8", 0x3e75a, 0x3e77a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 1", 0x3e77a, 0x3e79a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 2", 0x3e79a, 0x3e7ba }, /* Delta: 0x14830 */
    { L"Level 3 Frame 3", 0x3e7ba, 0x3e7da }, /* Delta: 0x14830 */
    { L"Level 3 Frame 4", 0x3e7da, 0x3e7fa }, /* Delta: 0x14830 */
    { L"Level 3 Frame 5", 0x3e7fa, 0x3e81a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 6", 0x3e81a, 0x3e83a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3e7ba, 0x3e7da (delta 0x147b0)
  // Match at 0x3e83a, 0x3e85a (delta 0x14830) <-- swapped to use this one
    { L"Level 3 Frame 7", 0x3e83a, 0x3e85a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 8", 0x3e85a, 0x3e87a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 1", 0x3e87a, 0x3e89a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 2", 0x3e89a, 0x3e8ba }, /* Delta: 0x14830 */
    { L"Level 4 Frame 3", 0x3e8ba, 0x3e8da }, /* Delta: 0x14830 */
    { L"Level 4 Frame 4", 0x3e8da, 0x3e8fa }, /* Delta: 0x14830 */
    { L"Level 4 Frame 5", 0x3e8fa, 0x3e91a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 6", 0x3e91a, 0x3e93a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3e8ba, 0x3e8da (delta 0x147b0)
  // Match at 0x3e93a, 0x3e95a (delta 0x14830) <-- swapped to use this one
    { L"Level 4 Frame 7", 0x3e93a, 0x3e95a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 8", 0x3e95a, 0x3e97a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 1", 0x3e97a, 0x3e99a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 2", 0x3e99a, 0x3e9ba }, /* Delta: 0x14830 */
    { L"Level 5 Frame 3", 0x3e9ba, 0x3e9da }, /* Delta: 0x14830 */
    { L"Level 5 Frame 4", 0x3e9da, 0x3e9fa }, /* Delta: 0x14830 */
    { L"Level 5 Frame 5", 0x3e9fa, 0x3ea1a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 6", 0x3ea1a, 0x3ea3a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3e9ba, 0x3e9da (delta 0x147b0)
  // Match at 0x3ea3a, 0x3ea5a (delta 0x14830) <-- swapped to use this one
    { L"Level 5 Frame 7", 0x3ea3a, 0x3ea5a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 8", 0x3ea5a, 0x3ea7a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 1", 0x3ea7a, 0x3ea9a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 2", 0x3ea9a, 0x3eaba }, /* Delta: 0x14830 */
    { L"Level 6 Frame 3", 0x3eaba, 0x3eada }, /* Delta: 0x14830 */
    { L"Level 6 Frame 4", 0x3eada, 0x3eafa }, /* Delta: 0x14830 */
    { L"Level 6 Frame 5", 0x3eafa, 0x3eb1a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 6", 0x3eb1a, 0x3eb3a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3eaba, 0x3eada (delta 0x147b0)
  // Match at 0x3eb3a, 0x3eb5a (delta 0x14830) <-- swapped to use this one
    { L"Level 6 Frame 7", 0x3eb3a, 0x3eb5a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 8", 0x3eb5a, 0x3eb7a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 1", 0x3eb7a, 0x3eb9a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 2", 0x3eb9a, 0x3ebba }, /* Delta: 0x14830 */
    { L"Level 7 Frame 3", 0x3ebba, 0x3ebda }, /* Delta: 0x14830 */
    { L"Level 7 Frame 4", 0x3ebda, 0x3ebfa }, /* Delta: 0x14830 */
    { L"Level 7 Frame 5", 0x3ebfa, 0x3ec1a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 6", 0x3ec1a, 0x3ec3a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3ebba, 0x3ebda (delta 0x147b0)
  // Match at 0x3ec3a, 0x3ec5a (delta 0x14830) <-- swapped to use this one
    { L"Level 7 Frame 7", 0x3ec3a, 0x3ec5a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 8", 0x3ec5a, 0x3ec7a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 1", 0x3ec7a, 0x3ec9a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 2", 0x3ec9a, 0x3ecba }, /* Delta: 0x14830 */
    { L"Level 8 Frame 3", 0x3ecba, 0x3ecda }, /* Delta: 0x14830 */
    { L"Level 8 Frame 4", 0x3ecda, 0x3ecfa }, /* Delta: 0x14830 */
    { L"Level 8 Frame 5", 0x3ecfa, 0x3ed1a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 6", 0x3ed1a, 0x3ed3a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3ecba, 0x3ecda (delta 0x147b0)
  // Match at 0x3ed3a, 0x3ed5a (delta 0x14830) <-- swapped to use this one
    { L"Level 8 Frame 7", 0x3ed3a, 0x3ed5a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 8", 0x3ed5a, 0x3ed7a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 1", 0x3ed7a, 0x3ed9a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 2", 0x3ed9a, 0x3edba }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 3", 0x3edba, 0x3edda }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 4", 0x3edda, 0x3edfa }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 5", 0x3edfa, 0x3ee1a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 6", 0x3ee1a, 0x3ee3a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 7", 0x3ee3a, 0x3ee5a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 8", 0x3ee5a, 0x3ee7a }, /* Delta: 0x14830 */
};

const sGame_PaletteDataset VSAV2_A_HUD_P2_PALETTES[] =
{
    { L"Flash Combo Counter/Timer/Fight Logo", 0x3095a, 0x3097a }, /* Delta: 0x16230 */
    { L"Level 0 Frame 2", 0x3d25a, 0x3d27a }, /* Delta: 0x14830 */
    { L"Level 0 Frame 3", 0x3d27a, 0x3d29a }, /* Delta: 0x14830 */
    { L"Level 0 Frame 4", 0x3d29a, 0x3d2ba }, /* Delta: 0x14830 */
    { L"Level 0 Frame 5", 0x3d2ba, 0x3d2da }, /* Delta: 0x14830 */
    { L"Level 0 Frame 6", 0x3d2da, 0x3d2fa }, /* Delta: 0x14830 */
    { L"Level 0 Frame 7", 0x3d2fa, 0x3d31a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 1", 0x3d31a, 0x3d33a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 2", 0x3d33a, 0x3d35a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 3", 0x3d35a, 0x3d37a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 4", 0x3d37a, 0x3d39a }, /* Delta: 0x14830 */
    { L"Level 1 Frame 5", 0x3d39a, 0x3d3ba }, /* Delta: 0x14830 */
    { L"Level 1 Frame 6", 0x3d3ba, 0x3d3da }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3d35a, 0x3d37a (delta 0x147b0)
  // Match at 0x3d3da, 0x3d3fa (delta 0x14830) <-- swapped to use this one
    { L"Level 1 Frame 7", 0x3d3da, 0x3d3fa }, /* Delta: 0x14830 */
    { L"Level 1 Frame 8", 0x3d3fa, 0x3d41a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 1", 0x3d41a, 0x3d43a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 2", 0x3d43a, 0x3d45a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 3", 0x3d45a, 0x3d47a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 4", 0x3d47a, 0x3d49a }, /* Delta: 0x14830 */
    { L"Level 2 Frame 5", 0x3d49a, 0x3d4ba }, /* Delta: 0x14830 */
    { L"Level 2 Frame 6", 0x3d4ba, 0x3d4da }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3d45a, 0x3d47a (delta 0x147b0)
  // Match at 0x3d4da, 0x3d4fa (delta 0x14830) <-- swapped to use this one
    { L"Level 2 Frame 7", 0x3d4da, 0x3d4fa }, /* Delta: 0x14830 */
    { L"Level 2 Frame 8", 0x3d4fa, 0x3d51a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 1", 0x3d51a, 0x3d53a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 2", 0x3d53a, 0x3d55a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 3", 0x3d55a, 0x3d57a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 4", 0x3d57a, 0x3d59a }, /* Delta: 0x14830 */
    { L"Level 3 Frame 5", 0x3d59a, 0x3d5ba }, /* Delta: 0x14830 */
    { L"Level 3 Frame 6", 0x3d5ba, 0x3d5da }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3d55a, 0x3d57a (delta 0x147b0)
  // Match at 0x3d5da, 0x3d5fa (delta 0x14830) <-- swapped to use this one
    { L"Level 3 Frame 7", 0x3d5da, 0x3d5fa }, /* Delta: 0x14830 */
    { L"Level 3 Frame 8", 0x3d5fa, 0x3d61a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 1", 0x3d61a, 0x3d63a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 2", 0x3d63a, 0x3d65a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 3", 0x3d65a, 0x3d67a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 4", 0x3d67a, 0x3d69a }, /* Delta: 0x14830 */
    { L"Level 4 Frame 5", 0x3d69a, 0x3d6ba }, /* Delta: 0x14830 */
    { L"Level 4 Frame 6", 0x3d6ba, 0x3d6da }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3d65a, 0x3d67a (delta 0x147b0)
  // Match at 0x3d6da, 0x3d6fa (delta 0x14830) <-- swapped to use this one
    { L"Level 4 Frame 7", 0x3d6da, 0x3d6fa }, /* Delta: 0x14830 */
    { L"Level 4 Frame 8", 0x3d6fa, 0x3d71a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 1", 0x3d71a, 0x3d73a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 2", 0x3d73a, 0x3d75a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 3", 0x3d75a, 0x3d77a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 4", 0x3d77a, 0x3d79a }, /* Delta: 0x14830 */
    { L"Level 5 Frame 5", 0x3d79a, 0x3d7ba }, /* Delta: 0x14830 */
    { L"Level 5 Frame 6", 0x3d7ba, 0x3d7da }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3d75a, 0x3d77a (delta 0x147b0)
  // Match at 0x3d7da, 0x3d7fa (delta 0x14830) <-- swapped to use this one
    { L"Level 5 Frame 7", 0x3d7da, 0x3d7fa }, /* Delta: 0x14830 */
    { L"Level 5 Frame 8", 0x3d7fa, 0x3d81a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 1", 0x3d81a, 0x3d83a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 2", 0x3d83a, 0x3d85a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 3", 0x3d85a, 0x3d87a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 4", 0x3d87a, 0x3d89a }, /* Delta: 0x14830 */
    { L"Level 6 Frame 5", 0x3d89a, 0x3d8ba }, /* Delta: 0x14830 */
    { L"Level 6 Frame 6", 0x3d8ba, 0x3d8da }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3d85a, 0x3d87a (delta 0x147b0)
  // Match at 0x3d8da, 0x3d8fa (delta 0x14830) <-- swapped to use this one
    { L"Level 6 Frame 7", 0x3d8da, 0x3d8fa }, /* Delta: 0x14830 */
    { L"Level 6 Frame 8", 0x3d8fa, 0x3d91a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 1", 0x3d91a, 0x3d93a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 2", 0x3d93a, 0x3d95a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 3", 0x3d95a, 0x3d97a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 4", 0x3d97a, 0x3d99a }, /* Delta: 0x14830 */
    { L"Level 7 Frame 5", 0x3d99a, 0x3d9ba }, /* Delta: 0x14830 */
    { L"Level 7 Frame 6", 0x3d9ba, 0x3d9da }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3d95a, 0x3d97a (delta 0x147b0)
  // Match at 0x3d9da, 0x3d9fa (delta 0x14830) <-- swapped to use this one
    { L"Level 7 Frame 7", 0x3d9da, 0x3d9fa }, /* Delta: 0x14830 */
    { L"Level 7 Frame 8", 0x3d9fa, 0x3da1a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 1", 0x3da1a, 0x3da3a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 2", 0x3da3a, 0x3da5a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 3", 0x3da5a, 0x3da7a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 4", 0x3da7a, 0x3da9a }, /* Delta: 0x14830 */
    { L"Level 8 Frame 5", 0x3da9a, 0x3daba }, /* Delta: 0x14830 */
    { L"Level 8 Frame 6", 0x3daba, 0x3dada }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x147b0!
  // Match at 0x3da5a, 0x3da7a (delta 0x147b0)
  // Match at 0x3dada, 0x3dafa (delta 0x14830) <-- swapped to use this one
    { L"Level 8 Frame 7", 0x3dada, 0x3dafa }, /* Delta: 0x14830 */
    { L"Level 8 Frame 8", 0x3dafa, 0x3db1a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 1", 0x3db1a, 0x3db3a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 2", 0x3db3a, 0x3db5a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 3", 0x3db5a, 0x3db7a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 4", 0x3db7a, 0x3db9a }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 5", 0x3db9a, 0x3dbba }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 6", 0x3dbba, 0x3dbda }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 7", 0x3dbda, 0x3dbfa }, /* Delta: 0x14830 */
    { L"Level 9+ Frame 8", 0x3dbfa, 0x3dc1a }, /* Delta: 0x14830 */
};

const sGame_PaletteDataset VSAV2_A_EFFECTS_PALETTES[] =
{
    { L"Special Hitsparks/Ice Effects/Guardsparks", 0x309ba, 0x309da }, /* Delta: 0x16230 */
    { L"Hitsparks/Fire Effects/Dash", 0x309da, 0x309fa }, /* Delta: 0x16230 */
    { L"Dust Effects", 0x309fa, 0x30a1a }, /* Delta: 0x16230 */
};

const sGame_PaletteDataset VSAV2_A_SHADOW_PALETTES[] =
{
    { L"Shadow", 0x4b7da, 0x4b7fa, indexCPS2Sprites_Vamp_Shadow, 0x00 }, /* Delta: 0x15f90 */
};

const sGame_PaletteDataset VSAV2_A_BONUS_CHARACTERINTROS_PALETTES[] =
{
    { L"Morrigan Intro Portrait 1", 0x3ae3a, 0x3ae5a, indexCPS2Sprites_VSAV1_Bonus, 0x18 }, /* Delta: 0x17830 */
    { L"Morrigan Intro 1 Fade 1", 0x3f0ba, 0x3f0da, indexCPS2Sprites_VSAV1_Bonus, 0x18 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 1 Fade 2", 0x3f0da, 0x3f0fa, indexCPS2Sprites_VSAV1_Bonus, 0x18 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 1 Fade 3", 0x3f0fa, 0x3f11a, indexCPS2Sprites_VSAV1_Bonus, 0x18 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 1 Fade 4", 0x3f11a, 0x3f13a, indexCPS2Sprites_VSAV1_Bonus, 0x18 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 1 Fade 5", 0x3f13a, 0x3f15a, indexCPS2Sprites_VSAV1_Bonus, 0x18 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 1 Fade 6", 0x3f15a, 0x3f17a, indexCPS2Sprites_VSAV1_Bonus, 0x18 }, /* Delta: 0x14830 */
    { L"Morrigan Intro Portrait 2", 0x3ae5a, 0x3aeba, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x17830 */
    { L"Morrigan Intro 2 Fade 1", 0x3f1fa, 0x3f25a, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 2", 0x3f25a, 0x3f2ba, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 3", 0x3f2ba, 0x3f31a, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 4", 0x3f31a, 0x3f37a, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 5", 0x3f37a, 0x3f3da, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 6", 0x3f3da, 0x3f43a, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 7", 0x3f43a, 0x3f49a, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 8", 0x3f49a, 0x3f4fa, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 2 Fade 9", 0x3f4fa, 0x3f55a, indexCPS2Sprites_VSAV1_Bonus, 0x06 }, /* Delta: 0x14830 */
    { L"Morrigan Intro 1 BG", 0x654ea, 0x6550a, indexCPS2Sprites_VSAV1_Bonus, 0x25 }, /* Delta: 0x13ed0 */
// Warning: the remapped delta shifts from 0x13ed0 to 0x136d0!
  // Match at 0x5c48a, 0x5c4aa (delta 0x136d0)
  // Match at 0x6268a, 0x626aa (delta 0x198d0)
    { L"Morrigan Intro BG Fade 1", 0x5c48a, 0x5c4aa, indexCPS2Sprites_VSAV1_Bonus, 0x25 }, /* Delta: 0x136d0 */
    { L"Morrigan Intro BG Fade 2", 0x5c4aa, 0x5c4ca, indexCPS2Sprites_VSAV1_Bonus, 0x25 }, /* Delta: 0x136d0 */
    { L"Morrigan Intro BG Fade 3", 0x5c4ca, 0x5c4ea, indexCPS2Sprites_VSAV1_Bonus, 0x25 }, /* Delta: 0x136d0 */
    { L"Morrigan Intro BG Fade 4", 0x5c4ea, 0x5c50a, indexCPS2Sprites_VSAV1_Bonus, 0x25 }, /* Delta: 0x136d0 */
    { L"Morrigan Intro BG Fade 5", 0x5c50a, 0x5c52a, indexCPS2Sprites_VSAV1_Bonus, 0x25 }, /* Delta: 0x136d0 */
    { L"Morrigan Intro BG Fade 6", 0x5c52a, 0x5c54a, indexCPS2Sprites_VSAV1_Bonus, 0x25 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Portrait", 0x6548a, 0x654ea, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x13ed0 */
// Warning: the remapped delta shifts from 0x13ed0 to 0x136d0!
  // Match at 0x5c54a, 0x5c5aa (delta 0x136d0)
  // Match at 0x6274a, 0x627aa (delta 0x198d0)
    { L"Lilith Intro Fade 1", 0x5c54a, 0x5c5aa, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 2", 0x5c5aa, 0x5c60a, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 3", 0x5c60a, 0x5c66a, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 4", 0x5c66a, 0x5c6ca, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 5", 0x5c6ca, 0x5c72a, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 6", 0x5c72a, 0x5c78a, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 7", 0x5c78a, 0x5c7ea, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 8", 0x5c7ea, 0x5c84a, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Lilith Intro Fade 9", 0x5c84a, 0x5c8aa, indexCPS2Sprites_VSAV1_Bonus, 0x05 }, /* Delta: 0x136d0 */
    { L"Dirty Beret Portrait", 0x4b7ba, 0x4b7da, indexCPS2Sprites_VSAV1_Bonus, 0x17 }, /* Delta: 0x15fd0 */
    { L"Demitri Intro", 0x3abfa, 0x3ac3a, indexCPS2Sprites_VSAV1_Bonus, 0x04 }, /* Delta: 0x17830 */
    { L"Bulleta Intro", 0x3acda, 0x3ad7a, indexCPS2Sprites_VSAV1_Bonus, 0x03 }, /* Delta: 0x17830 */
    { L"Bulleta Intro Flash Palette", 0x3f17a, 0x3f1fa, indexCPS2Sprites_VSAV1_Bonus, 0x02 }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x43f0!
  // Match at 0x69d92, 0x69db2 (delta 0x43f0)
  // Match at 0x77a52, 0x77a72 (delta 0x120b0)
    { L"Bulleta Intro BG", 0x69d92, 0x69db2, indexCPS2Sprites_VSAV1_Bonus, 0x01 }, /* Delta: 0x43f0 */
// Warning: the remapped delta shifts from 0x43f0 to 0xf9d0!
  // Match at 0x3abfa, 0x3ac1a (delta 0xf9d0)
  // Match at 0x3fa5a, 0x3fa7a (delta 0x14830)
    { L"Demitri Intro R/B Fade 1", 0x3fa5a, 0x3fa7a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 1", 0x3fc3a, 0x3fc5a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 2", 0x3fa7a, 0x3fa9a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 2", 0x3fc5a, 0x3fc7a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 3", 0x3fa9a, 0x3faba, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 3", 0x3fc7a, 0x3fc9a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 4", 0x3faba, 0x3fada, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 4", 0x3fc9a, 0x3fcba, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 5", 0x3fada, 0x3fafa, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 5", 0x3fcba, 0x3fcda, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 6", 0x3fafa, 0x3fb1a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 6", 0x3fcda, 0x3fcfa, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 7", 0x3fb1a, 0x3fb3a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 7", 0x3fcfa, 0x3fd1a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 8", 0x3fb3a, 0x3fb5a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 8", 0x3fd1a, 0x3fd3a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 9", 0x3fb5a, 0x3fb7a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 9", 0x3fd3a, 0x3fd5a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 10", 0x3fb7a, 0x3fb9a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 10", 0x3fd5a, 0x3fd7a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 11", 0x3fb9a, 0x3fbba, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 11", 0x3fd7a, 0x3fd9a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 12", 0x3fbba, 0x3fbda, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 12", 0x3fd9a, 0x3fdba, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 13", 0x3fbda, 0x3fbfa, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 13", 0x3fdba, 0x3fdda, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 14", 0x3fbfa, 0x3fc1a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
    { L"Demitri Intro R/G Fade 14", 0x3fdda, 0x3fdfa, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Demitri Intro R/B Fade 15", 0x3fc1a, 0x3fc3a, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x14650!
  // Match at 0x3fc1a, 0x3fc3a (delta 0x14650)
  // Match at 0x3fdfa, 0x3fe1a (delta 0x14830) <-- swapped to use this one
  // Match at 0x70272, 0x70292 (delta 0x44ca8)
  // Match at 0x774d2, 0x774f2 (delta 0x4bf08)
    { L"Demitri Intro R/G Fade 15", 0x3fdfa, 0x3fe1a, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious }, /* Delta: 0x14830 */
    { L"Jedah Intro Portrait", 0x653ca, 0x6548a }, /* Delta: 0x13ed0 */
// Warning: the remapped delta shifts from 0x13ed0 to 0x136d0!
  // Match at 0x5e7ca, 0x5e7ea (delta 0x136d0)
  // Match at 0x649ca, 0x649ea (delta 0x198d0)
    { L"Jedah Intro Hand Fade 1", 0x5e7ca, 0x5e7ea }, /* Delta: 0x136d0 */
// Warning: the remapped delta shifts from 0x136d0 to 0x11850!
  // Match at 0x5c96a, 0x5c98a (delta 0x11850)
  // Match at 0x5e7ea, 0x5e80a (delta 0x136d0) <-- swapped to use this one
  // Match at 0x62b6a, 0x62b8a (delta 0x17a50)
  // Match at 0x649ea, 0x64a0a (delta 0x198d0)
    { L"Jedah Intro Hand Fade 2", 0x5e7ea, 0x5e80a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 3", 0x5e80a, 0x5e82a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 4", 0x5e82a, 0x5e84a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 5", 0x5e84a, 0x5e86a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 6", 0x5e86a, 0x5e88a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 7", 0x5e88a, 0x5e8aa }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 8", 0x5e8aa, 0x5e8ca }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 9", 0x5e8ca, 0x5e8ea }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 10", 0x5e8ea, 0x5e90a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 11", 0x5e90a, 0x5e92a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 12", 0x5e92a, 0x5e94a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 13", 0x5e94a, 0x5e96a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 14", 0x5e96a, 0x5e98a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 15", 0x5e98a, 0x5e9aa }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 16", 0x5e9aa, 0x5e9ca }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 17", 0x5e9ca, 0x5e9ea }, /* Delta: 0x136d0 */
// Warning: the remapped delta shifts from 0x136d0 to 0x11750!
  // Match at 0x5ca6a, 0x5ca8a (delta 0x11750)
  // Match at 0x5e9ea, 0x5ea0a (delta 0x136d0) <-- swapped to use this one
  // Match at 0x62c6a, 0x62c8a (delta 0x17950)
  // Match at 0x64bea, 0x64c0a (delta 0x198d0)
    { L"Jedah Intro Hand Fade 18", 0x5e9ea, 0x5ea0a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 19", 0x5ea0a, 0x5ea2a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 20", 0x5ea2a, 0x5ea4a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 21", 0x5ea4a, 0x5ea6a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 22", 0x5ea6a, 0x5ea8a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 23", 0x5ea8a, 0x5eaaa }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 24", 0x5eaaa, 0x5eaca }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 25", 0x5eaca, 0x5eaea }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 26", 0x5eaea, 0x5eb0a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 27", 0x5eb0a, 0x5eb2a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 28", 0x5eb2a, 0x5eb4a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 29", 0x5eb4a, 0x5eb6a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 30", 0x5eb6a, 0x5eb8a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 31", 0x5eb8a, 0x5ebaa }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 32", 0x5ebaa, 0x5ebca }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 33", 0x5ebca, 0x5ebea }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 34", 0x5ebea, 0x5ec0a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 35", 0x5ec0a, 0x5ec2a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 36", 0x5ec2a, 0x5ec4a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 37", 0x5ec4a, 0x5ec6a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 38", 0x5ec6a, 0x5ec8a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 39", 0x5ec8a, 0x5ecaa }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 40", 0x5ecaa, 0x5ecca }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 41", 0x5ecca, 0x5ecea }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 42", 0x5ecea, 0x5ed0a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 43", 0x5ed0a, 0x5ed2a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 44", 0x5ed2a, 0x5ed4a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 45", 0x5ed4a, 0x5ed6a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 46", 0x5ed6a, 0x5ed8a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 47", 0x5ed8a, 0x5edaa }, /* Delta: 0x136d0 */
    { L"Jedah Intro Hand Fade 48", 0x5edaa, 0x5edca }, /* Delta: 0x136d0 */
    { L"Jedah Intro Fade 1", 0x5c24a, 0x5c30a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Fade 2", 0x5c30a, 0x5c3ca }, /* Delta: 0x136d0 */
    { L"Jedah Intro Fade 3", 0x5c3ca, 0x5c48a }, /* Delta: 0x136d0 */
    { L"Jedah Intro Rocks/Reveal 1", 0x3aeba, 0x3aeda }, /* Delta: 0x17830 */
    { L"Jedah Intro Rocks/Reveal 2", 0x400fa, 0x4011a }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 3", 0x4011a, 0x4013a }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 4", 0x4013a, 0x4015a }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 5", 0x4015a, 0x4017a }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 6", 0x4017a, 0x4019a }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 7", 0x4019a, 0x401ba }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 8", 0x401ba, 0x401da }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 9", 0x401da, 0x401fa }, /* Delta: 0x14830 */
    { L"Jedah Intro Rocks/Reveal 10", 0x401fa, 0x4021a }, /* Delta: 0x14830 */
    { L"Q-Bee Intro Portrait", 0x3ac3a, 0x3acba, indexCPS2Sprites_VSAV1_Bonus, 0x27 }, /* Delta: 0x17830 */
    { L"Q-Bee Intro BG", 0x6576a, 0x657ca, indexCPS2Sprites_VSAV1_Bonus, 0x26 }, /* Delta: 0x13ed0 */
};

const sGame_PaletteDataset VSAV2_A_BONUS_DARKFORCE_PALETTES[] =
{
  // Match at 0x5d7ca, 0x5d96a (delta 0x136d0)
  // Match at 0x639ca, 0x63b6a (delta 0x198d0)
    { L"Stages - Dark Force - 16x16 BG 1", 0x5d7ca, 0x5d96a, indexCPS2Sprites_VSAV1_Stages, 0x00, &pairNext3Palettes }, /* Delta: 0x136d0 */
    { L"Stages - Dark Force - 16x16 BG 2", 0x5d96a, 0x5daea, indexCPS2Sprites_VSAV1_Stages, 0x01 }, /* Delta: 0x136d0 */
// Warning: the remapped delta shifts from 0x136d0 to 0x116d0!
  // Match at 0x6ec32, 0x6edb2 (delta 0x116d0)
  // Match at 0x75e92, 0x76012 (delta 0x18930)
    { L"Stages - Dark Force - 32x32 BG 1", 0x6ec32, 0x6edb2, indexCPS2Sprites_VSAV1_Stages, 0x02 }, /* Delta: 0x116d0 */
    { L"Stages - Dark Force - 32x32 BG 2", 0x6edb2, 0x6ef52, indexCPS2Sprites_VSAV1_Stages, 0x03 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x136d0!
  // Match at 0x5dbca, 0x5dd6a (delta 0x136d0)
  // Match at 0x63dca, 0x63f6a (delta 0x198d0)
    { L"Stages - Dark Force Alt 1 (Unused) - 16x16 BG 1", 0x5dbca, 0x5dd6a, indexCPS2Sprites_VSAV1_Stages, 0x00, &pairNext3Palettes }, /* Delta: 0x136d0 */
    { L"Stages - Dark Force Alt 1 (Unused) - 16x16 BG 2", 0x5dd6a, 0x5deea, indexCPS2Sprites_VSAV1_Stages, 0x01 }, /* Delta: 0x136d0 */
// Warning: the remapped delta shifts from 0x136d0 to 0x116d0!
  // Match at 0x6f032, 0x6f1b2 (delta 0x116d0)
  // Match at 0x76292, 0x76412 (delta 0x18930)
    { L"Stages - Dark Force Alt 1 (Unused) - 32x32 BG 1", 0x6f032, 0x6f1b2, indexCPS2Sprites_VSAV1_Stages, 0x02 }, /* Delta: 0x116d0 */
    { L"Stages - Dark Force Alt 1 (Unused) - 32x32 BG 2", 0x6f1b2, 0x6f352, indexCPS2Sprites_VSAV1_Stages, 0x03 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x136d0!
  // Match at 0x5dfca, 0x5e16a (delta 0x136d0)
  // Match at 0x641ca, 0x6436a (delta 0x198d0)
    { L"Stages - Dark Force Alt 2 (Unused) - 16x16 BG 1", 0x5dfca, 0x5e16a, indexCPS2Sprites_VSAV1_Stages, 0x00, &pairNext3Palettes }, /* Delta: 0x136d0 */
    { L"Stages - Dark Force Alt 2 (Unused) - 16x16 BG 2", 0x5e16a, 0x5e2ea, indexCPS2Sprites_VSAV1_Stages, 0x01 }, /* Delta: 0x136d0 */
// Warning: the remapped delta shifts from 0x136d0 to 0x116d0!
  // Match at 0x6f432, 0x6f5b2 (delta 0x116d0)
  // Match at 0x76692, 0x76812 (delta 0x18930)
    { L"Stages - Dark Force Alt 2 (Unused) - 32x32 BG 1", 0x6f432, 0x6f5b2, indexCPS2Sprites_VSAV1_Stages, 0x02 }, /* Delta: 0x116d0 */
    { L"Stages - Dark Force Alt 2 (Unused) - 32x32 BG 2", 0x6f5b2, 0x6f752, indexCPS2Sprites_VSAV1_Stages, 0x03 }, /* Delta: 0x116d0 */
};

const sGame_PaletteDataset VSAV2_A_BONUS_CSS_PALETTES[] =
{
    { L"P1 Character Select Ring", 0x3b2fa, 0x3b31a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x17830 */
    { L"P1 Select Ring Frame 2", 0x3dd1a, 0x3dd3a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 3", 0x3dd3a, 0x3dd5a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 4", 0x3dd5a, 0x3dd7a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 5", 0x3dd7a, 0x3dd9a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 6", 0x3dd9a, 0x3ddba, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 7", 0x3ddba, 0x3ddda, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 8", 0x3ddda, 0x3ddfa, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 9", 0x3ddfa, 0x3de1a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 10", 0x3de1a, 0x3de3a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 11", 0x3de3a, 0x3de5a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 12", 0x3de5a, 0x3de7a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Select Ring Frame 13", 0x3de7a, 0x3de9a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P1 Character Select Ring Flash", 0x3e01a, 0x3e03a, indexCPS2Sprites_VSAV1_Bonus, 0x10 }, /* Delta: 0x14830 */
    { L"P2 Character Select Ring", 0x3b31a, 0x3b33a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x17830 */
    { L"P2 Select Ring Frame 2", 0x3de9a, 0x3deba, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 3", 0x3deba, 0x3deda, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 4", 0x3deda, 0x3defa, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 5", 0x3defa, 0x3df1a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 6", 0x3df1a, 0x3df3a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 7", 0x3df3a, 0x3df5a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 8", 0x3df5a, 0x3df7a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 9", 0x3df7a, 0x3df9a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 10", 0x3df9a, 0x3dfba, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 11", 0x3dfba, 0x3dfda, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 12", 0x3dfda, 0x3dffa, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Select Ring Frame 13", 0x3dffa, 0x3e01a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */
    { L"P2 Character Select Ring Flash", 0x3e03a, 0x3e05a, indexCPS2Sprites_VSAV1_Bonus, 0x11 }, /* Delta: 0x14830 */ 
};

const sGame_PaletteDataset VSAV2_A_BONUS_TEXT_PALETTES[] =
{
    { L"Ready", 0x3e07a, 0x3e09a, indexCPS2Sprites_VSAV1_Bonus, 0x13 }, /* Delta: 0x14830 */
    { L"Fight", 0x3e09a, 0x3e0ba, indexCPS2Sprites_VSAV1_Bonus, 0x0e }, /* Delta: 0x14830 */
    { L"Fight Flash 1", 0x3d19a, 0x3d1ba, indexCPS2Sprites_VSAV1_Bonus, 0x0e }, /* Delta: 0x14830 */
    { L"Fight Flash 2", 0x3d1ba, 0x3d1da, indexCPS2Sprites_VSAV1_Bonus, 0x0e }, /* Delta: 0x14830 */
    { L"Fight Flash 3", 0x3d1da, 0x3d1fa, indexCPS2Sprites_VSAV1_Bonus, 0x0e }, /* Delta: 0x14830 */
    { L"Fight Flash 4", 0x3d1fa, 0x3d21a, indexCPS2Sprites_VSAV1_Bonus, 0x0e }, /* Delta: 0x14830 */
    { L"Fight Flash 5", 0x3d21a, 0x3d23a, indexCPS2Sprites_VSAV1_Bonus, 0x0e }, /* Delta: 0x14830 */
    { L"KO", 0x3e0ba, 0x3e0da, indexCPS2Sprites_VSAV1_Bonus, 0x0f }, /* Delta: 0x14830 */
    { L"Perfect/Complete", 0x3e0da, 0x3e0fa, indexCPS2Sprites_VSAV1_Bonus, 0x12 }, /* Delta: 0x14830 */
    { L"Time Over", 0x3e0fa, 0x3e11a, indexCPS2Sprites_VSAV1_Bonus, 0x14 }, /* Delta: 0x14830 */
    { L"Draw Game", 0x3e11a, 0x3e13a, indexCPS2Sprites_VSAV1_Bonus, 0x0d }, /* Delta: 0x14830 */
    { L"You Win", 0x3e13a, 0x3e15a, indexCPS2Sprites_VSAV1_Bonus, 0x16 }, /* Delta: 0x14830 */
    { L"You Lose", 0x3e15a, 0x3e17a, indexCPS2Sprites_VSAV1_Bonus, 0x15 }, /* Delta: 0x14830 */
};

const sGame_PaletteDataset VSAV2_A_BONUS_OTHER_PALETTES[] =
{
    { L"Score Ranking - Title 1", 0x3e1da, 0x3e1fa, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 2", 0x3e1fa, 0x3e21a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 3", 0x3e21a, 0x3e23a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 4", 0x3e23a, 0x3e25a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 5", 0x3e25a, 0x3e27a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 6", 0x3e27a, 0x3e29a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 7", 0x3e29a, 0x3e2ba, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 8", 0x3e2ba, 0x3e2da, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 9", 0x3e2da, 0x3e2fa, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 10", 0x3e2fa, 0x3e31a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 11", 0x3e31a, 0x3e33a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 12", 0x3e33a, 0x3e35a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 13", 0x3e35a, 0x3e37a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 14", 0x3e37a, 0x3e39a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 15", 0x3e39a, 0x3e3ba, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 16", 0x3e3ba, 0x3e3da, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 17", 0x3e3da, 0x3e3fa, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 18", 0x3e3fa, 0x3e41a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 19", 0x3e41a, 0x3e43a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 20", 0x3e43a, 0x3e45a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
    { L"Score Ranking - Title 21", 0x3e45a, 0x3e47a, indexCPS2Sprites_VSAV1_Bonus, 0x1f }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x17830!
  // Match at 0x3b71a, 0x3b73a (delta 0x17830)
  // Match at 0x3b77a, 0x3b79a (delta 0x17890)
  // Match at 0x4c342, 0x4c362 (delta 0x28458)
  // Match at 0x4c742, 0x4c762 (delta 0x28858)
  // Match at 0x4cb42, 0x4cb62 (delta 0x28c58)
  // Match at 0x4cf42, 0x4cf62 (delta 0x29058)
  // Match at 0x4d342, 0x4d362 (delta 0x29458)
  // Match at 0x4d742, 0x4d762 (delta 0x29858)
  // Match at 0x4db42, 0x4db62 (delta 0x29c58)
  // Match at 0x4df42, 0x4df62 (delta 0x2a058)
  // Match at 0x4e342, 0x4e362 (delta 0x2a458)
  // Match at 0x4e742, 0x4e762 (delta 0x2a858)
  // Match at 0x4eb42, 0x4eb62 (delta 0x2ac58)
  // Match at 0x4ef42, 0x4ef62 (delta 0x2b058)
  // Match at 0x51c62, 0x51c82 (delta 0x2dd78)
  // Match at 0x52062, 0x52082 (delta 0x2e178)
  // Match at 0x52462, 0x52482 (delta 0x2e578)
  // Match at 0x52862, 0x52882 (delta 0x2e978)
  // Match at 0x52c62, 0x52c82 (delta 0x2ed78)
  // Match at 0x53062, 0x53082 (delta 0x2f178)
  // Match at 0x53462, 0x53482 (delta 0x2f578)
  // Match at 0x53862, 0x53882 (delta 0x2f978)
  // Match at 0x53c62, 0x53c82 (delta 0x2fd78)
  // Match at 0x54062, 0x54082 (delta 0x30178)
  // Match at 0x54462, 0x54482 (delta 0x30578)
  // Match at 0x54862, 0x54882 (delta 0x30978)
  // Match at 0x57d82, 0x57da2 (delta 0x33e98)
  // Match at 0x65faa, 0x65fca (delta 0x420c0)
  // Match at 0x663aa, 0x663ca (delta 0x424c0)
  // Match at 0x784d2, 0x784f2 (delta 0x545e8)
    { L"Score Ranking - Rank", 0x3b71a, 0x3b73a, indexCPS2Sprites_VSAV1_Bonus, 0x1e }, /* Delta: 0x17830 */
    { L"Score Ranking - Initials & Score", 0x3b6fa, 0x3b71a, indexCPS2Sprites_VSAV1_Bonus, 0x1c }, /* Delta: 0x17830 */
// Warning: the remapped delta shifts from 0x17830 to 0x17430!
  // Match at 0x3b2da, 0x3b2fa (delta 0x17430)
  // Match at 0x3b6da, 0x3b6fa (delta 0x17830) <-- swapped to use this one
    { L"Score Ranking - Normal/Turbo", 0x3b6da, 0x3b6fa, indexCPS2Sprites_VSAV1_Bonus, 0x1d }, /* Delta: 0x17830 */
// Warning: the remapped delta shifts from 0x17830 to 0x5ca8!
  // Match at 0x579a2, 0x57a02 (delta 0x5ca8)
  // Match at 0x65bca, 0x65c2a (delta 0x13ed0)
  // Match at 0x65fca, 0x6602a (delta 0x142d0)
  // Match at 0x780f2, 0x78152 (delta 0x263f8)
    { L"Score Ranking - Score Ranking BG", 0x579a2, 0x57a02, indexCPS2Sprites_VSAV1_Bonus, 0x28 }, /* Delta: 0x5ca8 */
    { L"Score Ranking - VS Ranking BG", 0x57b22, 0x57b82, indexCPS2Sprites_VSAV1_Bonus, 0x28 }, /* Delta: 0x5ca8 */
    { L"Score Ranking - Unused Ranking BG", 0x57a62, 0x57ac2, indexCPS2Sprites_VSAV1_Bonus, 0x28 }, /* Delta: 0x5ca8 */
    { L"Arcade High Score Icons", 0x3b3da, 0x3b5da, indexCPS2Sprites_VSAV1_Bonus, 0x1b }, /* Delta: 0x17830 */
    { L"End Credits Character Icons", 0x3b79a, 0x3b99a, indexCPS2Sprites_VSAV1_Bonus, 0x1b }, /* Delta: 0x17830 */
    { L"Boss Arcade Icons", 0x3b5da, 0x3b61a }, /* Delta: 0x17830 */
// Warning: the remapped delta shifts from 0x17830 to 0xffffa868!
  // Match at 0x3ab3a, 0x3ab5a (delta 0xffffa868)
  // Match at 0x3b9ba, 0x3b9da (delta 0xffffb6e8)
  // Match at 0x571a2, 0x571c2 (delta 0x16ed0)
  // Match at 0x57e02, 0x57e22 (delta 0x17b30)
  // Match at 0x585a2, 0x585c2 (delta 0x182d0)
    { L"Intro Capcom Logo", 0x3ab3a, 0x3ab5a, indexCPS2Sprites_VSAV1_Bonus, 0x21 }, /* Delta: 0xffffa868 */
    { L"New Challenger 1 Flash 1", 0x3cbda, 0x3cbfa, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 2", 0x3cbfa, 0x3cc1a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 3", 0x3cc1a, 0x3cc3a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 4", 0x3cc3a, 0x3cc5a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 5", 0x3cc5a, 0x3cc7a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 6", 0x3cc7a, 0x3cc9a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 7", 0x3cc9a, 0x3ccba, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 8", 0x3ccba, 0x3ccda, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 9", 0x3ccda, 0x3ccfa, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 10", 0x3ccfa, 0x3cd1a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Flash 11", 0x3cd1a, 0x3cd3a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 1", 0x3cd3a, 0x3cd5a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 2", 0x3cd5a, 0x3cd7a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 3", 0x3cd7a, 0x3cd9a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 4", 0x3cd9a, 0x3cdba, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 5", 0x3cdba, 0x3cdda, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 6", 0x3cdda, 0x3cdfa, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 7", 0x3cdfa, 0x3ce1a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 8", 0x3ce1a, 0x3ce3a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 9", 0x3ce3a, 0x3ce5a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 10", 0x3ce5a, 0x3ce7a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 11", 0x3ce7a, 0x3ce9a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 1 Color Cycle 12", 0x3ce9a, 0x3ceba, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 1", 0x3ceba, 0x3ceda, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 2", 0x3ceda, 0x3cefa, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 3", 0x3cefa, 0x3cf1a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 4", 0x3cf1a, 0x3cf3a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 5", 0x3cf3a, 0x3cf5a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 6", 0x3cf5a, 0x3cf7a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 7", 0x3cf7a, 0x3cf9a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 8", 0x3cf9a, 0x3cfba, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 9", 0x3cfba, 0x3cfda, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Flash 10", 0x3cfda, 0x3cffa, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
// Warning: the remapped delta shifts from 0x14830 to 0x14550!
  // Match at 0x3cd1a, 0x3cd3a (delta 0x14550)
  // Match at 0x3cffa, 0x3d01a (delta 0x14830) <-- swapped to use this one
    { L"New Challenger 2 Flash 11", 0x3cffa, 0x3d01a, indexCPS2Sprites_VSAV1_Bonus, 0x1a }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 1", 0x3d01a, 0x3d03a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 2", 0x3d03a, 0x3d05a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 3", 0x3d05a, 0x3d07a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 4", 0x3d07a, 0x3d09a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 5", 0x3d09a, 0x3d0ba, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 6", 0x3d0ba, 0x3d0da, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 7", 0x3d0da, 0x3d0fa, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 8", 0x3d0fa, 0x3d11a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 9", 0x3d11a, 0x3d13a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 10", 0x3d13a, 0x3d15a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 11", 0x3d15a, 0x3d17a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
    { L"New Challenger 2 Color Cycle 12", 0x3d17a, 0x3d19a, indexCPS2Sprites_VSAV1_Bonus, 0x19 }, /* Delta: 0x14830 */
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_GALLON_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Victor_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Victor_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Zabel_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Zabel_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Morrigan_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Morrigan_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Anakaris_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Anakaris_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Felicia_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Felicia_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Bishamon_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Bishamon_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Aulbath_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Aulbath_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Sasquatch_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Sasquatch_PALETTES_SPECIAL) },
 };

const sDescTreeNode VSAV2_A_ALTZABEL_COLLECTION[] =
{
    { L"Default", DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_PALETTES_1,  ARRAYSIZE(VSAV2_A_ALTZABEL_PALETTES_1) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_PALETTES_2,  ARRAYSIZE(VSAV2_A_ALTZABEL_PALETTES_2) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_QBee_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_QBee_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_LeiLei_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_LeiLei_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Lilith_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Lilith_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_LILITH_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Jedah_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Jedah_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Phobos_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Phobos_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Pyron_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Pyron_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_DarkGallon_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_DarkGallon_PALETTES_SPECIAL) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_SELECT, ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_SELECT) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_OboroBishamon_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_OboroBishamon_PALETTES_SPECIAL) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV2_A_Donovan_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Donovan_PALETTES_SPECIAL) },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_ABARAYA[] =
{
    { L"32BG.0.0.0", 0x6a832, 0x6a892, indexCPS2Sprites_VSAV1_Stages, 0x2e, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x4d362, 0x4d462, indexCPS2Sprites_VSAV1_Stages, 0x2f },
    { L"16BG.0.0.1", 0x5a3ca, 0x5a5aa, indexCPS2Sprites_VSAV1_Stages, 0x33 },
    { L"16BG.0.0.2", 0x5a5aa, 0x5a72a, indexCPS2Sprites_VSAV1_Stages, 0x34 },
    { L"SS.0.0.0", 0x378ba, 0x379fa, indexCPS2Sprites_VSAV1_Stages, 0x3c },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_ABARAYA_PARTS[] =
{
    { L"8BG.1.1.1", 0x4f5e2, 0x4f602, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.1.2", 0x4f622, 0x4f642, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.1.3", 0x4f662, 0x4f682, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"8BG.1.2.1", 0x4f602, 0x4f622, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.2.2", 0x4f642, 0x4f662, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.2.3", 0x4f682, 0x4f6a2, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"16BG.1.1.1", 0x5c1aa, 0x5c1ca, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.1.2", 0x5c1ea, 0x5c20a, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.1.2.1", 0x5c1ca, 0x5c1ea, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.2.2", 0x5c20a, 0x5c22a, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.2.1.1", 0x5c08a, 0x5c0aa, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.1.2", 0x5c0ca, 0x5c0ea, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.1.3", 0x5c10a, 0x5c12a, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.1.4", 0x5c14a, 0x5c16a, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.2.2.1", 0x5c0aa, 0x5c0ca, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.2.2", 0x5c0ea, 0x5c10a, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.2.3", 0x5c12a, 0x5c14a, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.2.4", 0x5c16a, 0x5c18a, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.3.1.1", 0x5c18a, 0x5c1aa, indexCPS2Sprites_VSAV1_Stages, 0x3b },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_ABARAYA_EX[] =
{
    { L"32BG.0.0.0", 0x71a92, 0x71af2, indexCPS2Sprites_VSAV1_Stages, 0x2e, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x52c82, 0x52d82, indexCPS2Sprites_VSAV1_Stages, 0x2f },
    { L"16BG.0.0.1", 0x605ca, 0x607aa, indexCPS2Sprites_VSAV1_Stages, 0x33 },
    { L"16BG.0.0.2", 0x607aa, 0x6092a, indexCPS2Sprites_VSAV1_Stages, 0x34 },
    { L"SS.0.0.0", 0x3951a, 0x3965a, indexCPS2Sprites_VSAV1_Stages, 0x3c },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_ABARAYA_EX_PARTS[] =
{
    { L"8BG.1.1.1", 0x54f02, 0x54f22, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.1.2", 0x54f42, 0x54f62, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.1.3", 0x54f82, 0x54fa2, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"8BG.1.2.1", 0x54f22, 0x54f42, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.2.2", 0x54f62, 0x54f82, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.2.3", 0x54fa2, 0x54fc2, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"16BG.1.1.1", 0x623aa, 0x623ca, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.1.2", 0x623ea, 0x6240a, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.1.2.1", 0x623ca, 0x623ea, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.2.2", 0x6240a, 0x6242a, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.2.1.1", 0x6228a, 0x622aa, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.1.2", 0x622ca, 0x622ea, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.1.3", 0x6230a, 0x6232a, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.1.4", 0x6234a, 0x6236a, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.2.2.1", 0x622aa, 0x622ca, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.2.2", 0x622ea, 0x6230a, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.2.3", 0x6232a, 0x6234a, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.2.4", 0x6236a, 0x6238a, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.3.1.1", 0x6238a, 0x623aa, indexCPS2Sprites_VSAV1_Stages, 0x3b },
 };

// Concrete Cave
const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_CAVE[] =
{
    { L"8BG.0.0.0", 0x4c362, 0x4c382, indexCPS2Sprites_VSAV1_Stages, 0x3d, &pairFullyLinkedNode },
    { L"32BG.0.0.1", 0x69832, 0x699d2, indexCPS2Sprites_VSAV1_Stages, 0x3e },
    { L"32BG.0.0.2", 0x69a32, 0x69a52, indexCPS2Sprites_VSAV1_Stages, 0x3f },
    { L"16BG.0.0.1", 0x593ca, 0x595ca, indexCPS2Sprites_VSAV1_Stages, 0x40 },
    { L"16BG.0.0.2", 0x595ca, 0x597ca, indexCPS2Sprites_VSAV1_Stages, 0x41 },
    { L"SS.0.0.0", 0x373ba, 0x374fa, indexCPS2Sprites_VSAV1_Stages, 0x42 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_CAVE_EX[] =
{
    { L"8BG.0.0.0", 0x51c82, 0x51ca2, indexCPS2Sprites_VSAV1_Stages, 0x3d, &pairFullyLinkedNode },
    { L"32BG.0.0.1", 0x70a92, 0x70c32, indexCPS2Sprites_VSAV1_Stages, 0x3e },
    { L"32BG.0.0.2", 0x70c92, 0x70cb2, indexCPS2Sprites_VSAV1_Stages, 0x3f },
    { L"16BG.0.0.1", 0x5f5ca, 0x5f7ca, indexCPS2Sprites_VSAV1_Stages, 0x40 },
    // this entry hand-created as the colors changed slightly
    { L"16BG.0.0.1", 0x5f7ca, 0x5f9ca, indexCPS2Sprites_VSAV1_Stages, 0x41 },
    { L"SS.0.0.0", 0x3901a, 0x3915a, indexCPS2Sprites_VSAV1_Stages, 0x42 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_CHATEAU[] =
{
    { L"8BG.0.0.1", 0x4d0a2, 0x4d1c2, indexCPS2Sprites_VSAV1_Stages, 0x74, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x4d1c2, 0x4d2c2, indexCPS2Sprites_VSAV1_Stages, 0x75 },
    { L"16BG.0.0.1", 0x59fca, 0x5a1ca, indexCPS2Sprites_VSAV1_Stages, 0x82 },
    { L"16BG.0.0.2", 0x5a1ca, 0x5a36a, indexCPS2Sprites_VSAV1_Stages, 0x83 },
    { L"32BG.0.0.1", 0x6a572, 0x6a592, indexCPS2Sprites_VSAV1_Stages, 0x91 },
    { L"32BG.0.0.2", 0x6a692, 0x6a812, indexCPS2Sprites_VSAV1_Stages, 0x92 },
    { L"SS.0.0.0", 0x3777a, 0x378ba, indexCPS2Sprites_VSAV1_Stages, 0x8b },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_CHATEAU_PARTS[] =
{
    { L"8BG.1.1.1", 0x51002, 0x51022, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.1.2", 0x51062, 0x51082, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.1.3", 0x510c2, 0x510e2, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.1.4", 0x51122, 0x51142, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.1.5", 0x51182, 0x511a2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.1.6", 0x511e2, 0x51202, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.1.7", 0x51242, 0x51262, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.1.8", 0x512a2, 0x512c2, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.1.9", 0x51302, 0x51322, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.1.10", 0x51362, 0x51382, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.1.11", 0x513c2, 0x513e2, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.1.12", 0x51422, 0x51442, indexCPS2Sprites_VSAV1_Stages, 0x81 },
    { L"8BG.1.2.1", 0x51022, 0x51042, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.2.2", 0x51082, 0x510a2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.2.3", 0x510e2, 0x51102, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.2.4", 0x51142, 0x51162, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.2.5", 0x511a2, 0x511c2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.2.6", 0x51202, 0x51222, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.2.7", 0x51262, 0x51282, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.2.8", 0x512c2, 0x512e2, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.2.9", 0x51322, 0x51342, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.2.10", 0x51382, 0x513a2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.2.11", 0x513e2, 0x51402, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.2.12", 0x51442, 0x51462, indexCPS2Sprites_VSAV1_Stages, 0x81 },
    { L"8BG.1.3.1", 0x51042, 0x51062, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.3.2", 0x510a2, 0x510c2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.3.3", 0x51102, 0x51122, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.3.4", 0x51162, 0x51182, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.3.5", 0x511c2, 0x511e2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.3.6", 0x51222, 0x51242, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.3.7", 0x51282, 0x512a2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.3.8", 0x512e2, 0x51302, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.3.9", 0x51342, 0x51362, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.3.10", 0x513a2, 0x513c2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.3.11", 0x51402, 0x51422, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.3.12", 0x51462, 0x51482, indexCPS2Sprites_VSAV1_Stages, 0x81 },
    { L"16BG.1.1.1", 0x5ceea, 0x5cf0a, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.1.2", 0x5cf4a, 0x5cf6a, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.1.3", 0x5cfaa, 0x5cfca, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.1.4", 0x5d00a, 0x5d02a, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.1.5", 0x5d06a, 0x5d08a, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.1.6", 0x5d0ca, 0x5d0ea, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.1.7", 0x5d12a, 0x5d14a, indexCPS2Sprites_VSAV1_Stages, 0x8a },
    { L"16BG.1.2.1", 0x5cf0a, 0x5cf2a, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.2.2", 0x5cf6a, 0x5cf8a, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.2.3", 0x5cfca, 0x5cfea, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.2.4", 0x5d02a, 0x5d04a, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.2.5", 0x5d08a, 0x5d0aa, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.2.6", 0x5d0ea, 0x5d10a, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.2.7", 0x5d14a, 0x5d16a, indexCPS2Sprites_VSAV1_Stages, 0x8a },
    { L"16BG.1.3.1", 0x5cf2a, 0x5cf4a, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.3.2", 0x5cf8a, 0x5cfaa, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.3.3", 0x5cfea, 0x5d00a, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.3.4", 0x5d04a, 0x5d06a, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.3.5", 0x5d0aa, 0x5d0ca, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.3.6", 0x5d10a, 0x5d12a, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.3.7", 0x5d16a, 0x5d18a, indexCPS2Sprites_VSAV1_Stages, 0x8a },
    { L"SS.1.1.1", 0x3879a, 0x387ba, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.1.2", 0x387fa, 0x3881a, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.1.3", 0x388ba, 0x388da, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.1.4", 0x3885a, 0x3887a, indexCPS2Sprites_VSAV1_Stages, 0x8f },
    { L"SS.1.2.1", 0x387ba, 0x387da, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.2.2", 0x3881a, 0x3883a, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.2.3", 0x388da, 0x388fa, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.2.4", 0x3887a, 0x3889a, indexCPS2Sprites_VSAV1_Stages, 0x8f },
    { L"SS.1.3.1", 0x387da, 0x387fa, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.3.2", 0x3883a, 0x3885a, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.3.3", 0x388fa, 0x3891a, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.3.4", 0x3889a, 0x388ba, indexCPS2Sprites_VSAV1_Stages, 0x8f },
    { L"SS.2.1.1", 0x3891a, 0x3893a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.2.1", 0x3893a, 0x3895a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.3.1", 0x3895a, 0x3897a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.4.1", 0x3897a, 0x3899a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.5.1", 0x3899a, 0x389ba, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.6.1", 0x389ba, 0x389da, indexCPS2Sprites_VSAV1_Stages, 0x90 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_CHATEAU_EX[] =
{
    { L"8BG.0.0.1", 0x529c2, 0x52ae2, indexCPS2Sprites_VSAV1_Stages, 0x74, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x52ae2, 0x52be2, indexCPS2Sprites_VSAV1_Stages, 0x75 },
    { L"16BG.0.0.1", 0x601ca, 0x603ca, indexCPS2Sprites_VSAV1_Stages, 0x82 },
    // this palette hand-tweaked
    { L"16BG.0.0.2", 0x603ca, 0x605ca, indexCPS2Sprites_VSAV1_Stages, 0x83 },
    { L"32BG.0.0.1", 0x717d2, 0x717f2, indexCPS2Sprites_VSAV1_Stages, 0x91 },
    { L"32BG.0.0.2", 0x718f2, 0x71a72, indexCPS2Sprites_VSAV1_Stages, 0x92 },
    { L"SS.0.0.0", 0x393da, 0x3951a, indexCPS2Sprites_VSAV1_Stages, 0x8b },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_CHATEAU_EX_PARTS[] =
{
    { L"8BG.1.1.1", 0x56922, 0x56942, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.1.2", 0x56982, 0x569a2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.1.3", 0x569e2, 0x56a02, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.1.4", 0x56a42, 0x56a62, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.1.5", 0x56aa2, 0x56ac2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.1.6", 0x56b02, 0x56b22, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.1.7", 0x56b62, 0x56b82, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.1.8", 0x56bc2, 0x56be2, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.1.9", 0x56c22, 0x56c42, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.1.10", 0x56c82, 0x56ca2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.1.11", 0x56ce2, 0x56d02, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.1.12", 0x56d42, 0x56d62, indexCPS2Sprites_VSAV1_Stages, 0x81 },
    { L"8BG.1.2.1", 0x56942, 0x56962, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.2.2", 0x569a2, 0x569c2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.2.3", 0x56a02, 0x56a22, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.2.4", 0x56a62, 0x56a82, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.2.5", 0x56ac2, 0x56ae2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.2.6", 0x56b22, 0x56b42, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.2.7", 0x56b82, 0x56ba2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.2.8", 0x56be2, 0x56c02, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.2.9", 0x56c42, 0x56c62, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.2.10", 0x56ca2, 0x56cc2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.2.11", 0x56d02, 0x56d22, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.2.12", 0x56d62, 0x56d82, indexCPS2Sprites_VSAV1_Stages, 0x81 },
    { L"8BG.1.3.1", 0x56962, 0x56982, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.3.2", 0x569c2, 0x569e2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.3.3", 0x56a22, 0x56a42, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.3.4", 0x56a82, 0x56aa2, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.3.5", 0x56ae2, 0x56b02, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.3.6", 0x56b42, 0x56b62, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.3.7", 0x56ba2, 0x56bc2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.3.8", 0x56c02, 0x56c22, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.3.9", 0x56c62, 0x56c82, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.3.10", 0x56cc2, 0x56ce2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.3.11", 0x56d22, 0x56d42, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.3.12", 0x56d82, 0x56da2, indexCPS2Sprites_VSAV1_Stages, 0x81 },
        { L"16BG.1.1.1", 0x630ea, 0x6310a, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
        // hand-tweaked
        { L"16BG.1.1.2", 0x6314a, 0x6316a, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.1.3", 0x631aa, 0x631ca, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.1.4", 0x6320a, 0x6322a, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.1.5", 0x6326a, 0x6328a, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.1.6", 0x632ca, 0x632ea, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.1.7", 0x6332a, 0x6334a, indexCPS2Sprites_VSAV1_Stages, 0x8a },
        { L"16BG.1.2.1", 0x6310a, 0x6312a, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
        // hand-tweaked
        { L"16BG.1.2.2", 0x6316a, 0x6318a, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.2.3", 0x631ca, 0x631ea, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.2.4", 0x6322a, 0x6324a, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.2.5", 0x6328a, 0x632aa, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.2.6", 0x632ea, 0x6330a, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.2.7", 0x6334a, 0x6336a, indexCPS2Sprites_VSAV1_Stages, 0x8a },
    { L"16BG.1.3.1", 0x6312a, 0x6314a, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.3.2", 0x6318a, 0x631aa, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.3.3", 0x631ea, 0x6320a, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.3.4", 0x6324a, 0x6326a, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.3.5", 0x632aa, 0x632ca, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.3.6", 0x6330a, 0x6332a, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.3.7", 0x6336a, 0x6338a, indexCPS2Sprites_VSAV1_Stages, 0x8a },
    { L"SS.1.1.1", 0x3a3fa, 0x3a41a, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.1.2", 0x3a45a, 0x3a47a, indexCPS2Sprites_VSAV1_Stages, 0x8d },
        //hand-tweaked
        { L"SS.1.1.3", 0x3a51a, 0x3a53a, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.1.4", 0x3a4ba, 0x3a4da, indexCPS2Sprites_VSAV1_Stages, 0x8f },
    { L"SS.1.2.1", 0x3a41a, 0x3a43a, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.2.2", 0x3a47a, 0x3a49a, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.2.3", 0x3a53a, 0x3a55a, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.2.4", 0x3a4da, 0x3a4fa, indexCPS2Sprites_VSAV1_Stages, 0x8f },
    { L"SS.1.3.1", 0x3a43a, 0x3a45a, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.3.2", 0x3a49a, 0x3a4ba, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.3.3", 0x3a55a, 0x3a57a, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.3.4", 0x3a4fa, 0x3a51a, indexCPS2Sprites_VSAV1_Stages, 0x8f },
    { L"SS.2.1.1", 0x3a57a, 0x3a59a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.2.1", 0x3a59a, 0x3a5ba, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.3.1", 0x3a5ba, 0x3a5da, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.4.1", 0x3a5da, 0x3a5fa, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.5.1", 0x3a5fa, 0x3a61a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.6.1", 0x3a61a, 0x3a63a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_FEAST[] =
{
    { L"8BG.0.0.1", 0x4bf62, 0x4c102, indexCPS2Sprites_VSAV1_Stages, 0x04, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x4c102, 0x4c2e2, indexCPS2Sprites_VSAV1_Stages, 0x05 },
    { L"32BG.0.0.0", 0x69432, 0x69612, indexCPS2Sprites_VSAV1_Stages, 0x14 },
    { L"SS.0.0.0", 0x3727a, 0x373ba, indexCPS2Sprites_VSAV1_Stages, 0x20 },
    { L"16BG.0.0.0", 0x5928a, 0x593ca, indexCPS2Sprites_VSAV1_Stages, 0x26 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_FEAST_PARTS[] =
{
    // Everything here was hand-tweaked
    // + (0x4fb02 - 0x39432)
    { L"8BG.1.1.1", 0x39432 + (0x4fb02 - 0x39432), 0x39452 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.1.2", 0x394D2 + (0x4fb02 - 0x39432), 0x394F2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.1.3", 0x39572 + (0x4fb02 - 0x39432), 0x39592 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.1.4", 0x39612 + (0x4fb02 - 0x39432), 0x39632 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.1.5", 0x396B2 + (0x4fb02 - 0x39432), 0x396D2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0a },

    { L"8BG.1.2.1", 0x39452 + (0x4fb02 - 0x39432), 0x39472 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.2.2", 0x394F2 + (0x4fb02 - 0x39432), 0x39512 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.2.3", 0x39592 + (0x4fb02 - 0x39432), 0x395B2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.2.4", 0x39632 + (0x4fb02 - 0x39432), 0x39652 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.2.5", 0x396D2 + (0x4fb02 - 0x39432), 0x396F2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.3.1", 0x39472 + (0x4fb02 - 0x39432), 0x39492 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.3.2", 0x39512 + (0x4fb02 - 0x39432), 0x39532 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.3.3", 0x395B2 + (0x4fb02 - 0x39432), 0x395D2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.3.4", 0x39652 + (0x4fb02 - 0x39432), 0x39672 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.3.5", 0x396F2 + (0x4fb02 - 0x39432), 0x39712 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.4.1", 0x39492 + (0x4fb02 - 0x39432), 0x394B2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.4.2", 0x39532 + (0x4fb02 - 0x39432), 0x39552 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.4.3", 0x395D2 + (0x4fb02 - 0x39432), 0x395F2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.4.4", 0x39672 + (0x4fb02 - 0x39432), 0x39692 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.4.5", 0x39712 + (0x4fb02 - 0x39432), 0x39732 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.5.1", 0x394B2 + (0x4fb02 - 0x39432), 0x394D2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.5.2", 0x39552 + (0x4fb02 - 0x39432), 0x39572 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.5.3", 0x395F2 + (0x4fb02 - 0x39432), 0x39612 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.5.4", 0x39692 + (0x4fb02 - 0x39432), 0x396B2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.5.5", 0x39732 + (0x4fb02 - 0x39432), 0x39752 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0a },

    { L"8BG.2.1.1", 0x38A52 + (0x4fb02 - 0x39432), 0x38A72 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.1.2", 0x38AD2 + (0x4fb02 - 0x39432), 0x38AF2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.1.3", 0x38B52 + (0x4fb02 - 0x39432), 0x38B72 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.1.4", 0x38BD2 + (0x4fb02 - 0x39432), 0x38BF2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.1.5", 0x38C52 + (0x4fb02 - 0x39432), 0x38C72 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.2.1", 0x38A72 + (0x4fb02 - 0x39432), 0x38A92 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.2.2", 0x38AF2 + (0x4fb02 - 0x39432), 0x38B12 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.2.3", 0x38B72 + (0x4fb02 - 0x39432), 0x38B92 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.2.4", 0x38BF2 + (0x4fb02 - 0x39432), 0x38C12 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.2.5", 0x38C72 + (0x4fb02 - 0x39432), 0x38C92 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.3.1", 0x38A92 + (0x4fb02 - 0x39432), 0x38AB2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.3.2", 0x38B12 + (0x4fb02 - 0x39432), 0x38B32 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.3.3", 0x38B92 + (0x4fb02 - 0x39432), 0x38BB2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.3.4", 0x38C12 + (0x4fb02 - 0x39432), 0x38C32 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.3.5", 0x39752 + (0x4fb02 - 0x39432), 0x39772 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.4.1", 0x38AB2 + (0x4fb02 - 0x39432), 0x38AD2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.4.2", 0x38B32 + (0x4fb02 - 0x39432), 0x38B52 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.4.3", 0x38BB2 + (0x4fb02 - 0x39432), 0x38BD2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.4.4", 0x38C32 + (0x4fb02 - 0x39432), 0x38C52 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.4.5", 0x39772 + (0x4fb02 - 0x39432), 0x39792 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x0f },

    { L"8BG.3.1.1", 0x38892 + (0x4fb02 - 0x39432), 0x388B2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.1.2", 0x38932 + (0x4fb02 - 0x39432), 0x38952 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.2.1", 0x388B2 + (0x4fb02 - 0x39432), 0x388D2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.2.2", 0x38952 + (0x4fb02 - 0x39432), 0x38972 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.3.1", 0x388D2 + (0x4fb02 - 0x39432), 0x388F2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.3.2", 0x38972 + (0x4fb02 - 0x39432), 0x38992 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.4.1", 0x388F2 + (0x4fb02 - 0x39432), 0x38912 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.4.2", 0x38992 + (0x4fb02 - 0x39432), 0x389B2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.5.1", 0x38912 + (0x4fb02 - 0x39432), 0x38932 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.5.2", 0x389B2 + (0x4fb02 - 0x39432), 0x389D2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x11 },

    { L"8BG.4.1.1", 0x389D2 + (0x4fb02 - 0x39432), 0x389F2 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.1.2", 0x38A12 + (0x4fb02 - 0x39432), 0x38A32 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x13 },
    { L"8BG.4.2.1", 0x389F2 + (0x4fb02 - 0x39432), 0x38A12 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.2.2", 0x38A32 + (0x4fb02 - 0x39432), 0x38A52 + (0x4fb02 - 0x39432), indexCPS2Sprites_VSAV1_Stages, 0x13 },

    // 2 + (0x6c6f2 - 0x5b022), 
    { L"32BG.1.1.1", 0x5b022 + (0x6c6f2 - 0x5b022), 0x5B042 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.1.2", 0x5B0E2 + (0x6c6f2 - 0x5b022), 0x5B102 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.1.3", 0x5B1A2 + (0x6c6f2 - 0x5b022), 0x5B1C2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.1.4", 0x5B262 + (0x6c6f2 - 0x5b022), 0x5B282 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.1.5", 0x5B322 + (0x6c6f2 - 0x5b022), 0x5B342 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.1.6", 0x5B3E2 + (0x6c6f2 - 0x5b022), 0x5B402 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.1.7", 0x5B4A2 + (0x6c6f2 - 0x5b022), 0x5B4C2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.2.1", 0x5B042 + (0x6c6f2 - 0x5b022), 0x5B062 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.2.2", 0x5B102 + (0x6c6f2 - 0x5b022), 0x5B122 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.2.3", 0x5B1C2 + (0x6c6f2 - 0x5b022), 0x5B1E2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.2.4", 0x5B282 + (0x6c6f2 - 0x5b022), 0x5B2A2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.2.5", 0x5B342 + (0x6c6f2 - 0x5b022), 0x5B362 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.2.6", 0x5B402 + (0x6c6f2 - 0x5b022), 0x5B422 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.2.7", 0x5B4C2 + (0x6c6f2 - 0x5b022), 0x5B4E2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.3.1", 0x5B062 + (0x6c6f2 - 0x5b022), 0x5B082 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.3.2", 0x5B122 + (0x6c6f2 - 0x5b022), 0x5B142 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.3.3", 0x5B1E2 + (0x6c6f2 - 0x5b022), 0x5B202 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.3.4", 0x5B2A2 + (0x6c6f2 - 0x5b022), 0x5B2C2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.3.5", 0x5B362 + (0x6c6f2 - 0x5b022), 0x5B382 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.3.6", 0x5B422 + (0x6c6f2 - 0x5b022), 0x5B442 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.3.7", 0x5B4E2 + (0x6c6f2 - 0x5b022), 0x5B502 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.4.1", 0x5B082 + (0x6c6f2 - 0x5b022), 0x5B0A2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.4.2", 0x5B142 + (0x6c6f2 - 0x5b022), 0x5B162 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.4.3", 0x5B202 + (0x6c6f2 - 0x5b022), 0x5B222 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.4.4", 0x5B2C2 + (0x6c6f2 - 0x5b022), 0x5B2E2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.4.5", 0x5B382 + (0x6c6f2 - 0x5b022), 0x5B3A2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.4.6", 0x5B442 + (0x6c6f2 - 0x5b022), 0x5B462 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.4.7", 0x5B502 + (0x6c6f2 - 0x5b022), 0x5B522 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.5.1", 0x5B0A2 + (0x6c6f2 - 0x5b022), 0x5B0C2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.5.2", 0x5B162 + (0x6c6f2 - 0x5b022), 0x5B182 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.5.3", 0x5B222 + (0x6c6f2 - 0x5b022), 0x5B242 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.5.4", 0x5B2E2 + (0x6c6f2 - 0x5b022), 0x5B302 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.5.5", 0x5B3A2 + (0x6c6f2 - 0x5b022), 0x5B3C2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.5.6", 0x5B462 + (0x6c6f2 - 0x5b022), 0x5B482 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.5.7", 0x5B522 + (0x6c6f2 - 0x5b022), 0x5B542 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.6.1", 0x5B0C2 + (0x6c6f2 - 0x5b022), 0x5B0E2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.6.2", 0x5B182 + (0x6c6f2 - 0x5b022), 0x5B1A2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.6.3", 0x5B242 + (0x6c6f2 - 0x5b022), 0x5B262 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.6.4", 0x5B302 + (0x6c6f2 - 0x5b022), 0x5B322 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.6.5", 0x5B3C2 + (0x6c6f2 - 0x5b022), 0x5B3E2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.6.6", 0x5B482 + (0x6c6f2 - 0x5b022), 0x5B4A2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.6.7", 0x5B542 + (0x6c6f2 - 0x5b022), 0x5B562 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1b },

    { L"32BG.2.1.1", 0x5ae22 + (0x6c6f2 - 0x5b022), 0x5AE42 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.1.2", 0x5AEA2 + (0x6c6f2 - 0x5b022), 0x5AEC2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.1.3", 0x5AF22 + (0x6c6f2 - 0x5b022), 0x5AF42 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.1.4", 0x5AFA2 + (0x6c6f2 - 0x5b022), 0x5AFC2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.2.1", 0x5AE42 + (0x6c6f2 - 0x5b022), 0x5AE62 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.2.2", 0x5AEC2 + (0x6c6f2 - 0x5b022), 0x5AEE2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.2.3", 0x5AF42 + (0x6c6f2 - 0x5b022), 0x5AF62 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.2.4", 0x5AFC2 + (0x6c6f2 - 0x5b022), 0x5AFE2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.3.1", 0x5AE62 + (0x6c6f2 - 0x5b022), 0x5AE82 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.3.2", 0x5AEE2 + (0x6c6f2 - 0x5b022), 0x5AF02 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.3.3", 0x5AF62 + (0x6c6f2 - 0x5b022), 0x5AF82 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.3.4", 0x5AFE2 + (0x6c6f2 - 0x5b022), 0x5B002 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.4.1", 0x5AE82 + (0x6c6f2 - 0x5b022), 0x5AEA2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.4.2", 0x5AF02 + (0x6c6f2 - 0x5b022), 0x5AF22 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.4.3", 0x5AF82 + (0x6c6f2 - 0x5b022), 0x5AFA2 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.4.4", 0x5B002 + (0x6c6f2 - 0x5b022), 0x5B022 + (0x6c6f2 - 0x5b022), indexCPS2Sprites_VSAV1_Stages, 0x1f },

    { L"SS.1.1.1", 0x382ba, 0x382da, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.1.2", 0x383ba, 0x383da, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.2.1", 0x382da, 0x382fa, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.2.2", 0x383da, 0x383fa, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.3.1", 0x382fa, 0x3831a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.3.2", 0x383fa, 0x3841a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.4.1", 0x3831a, 0x3833a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.4.2", 0x3841a, 0x3843a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.2.1.1", 0x384ba, 0x384da, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.2.1", 0x384da, 0x384fa, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.3.1", 0x384fa, 0x3851a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.4.1", 0x3851a, 0x3853a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.3.1.1", 0x3853a, 0x3855a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.2.1", 0x3855a, 0x3857a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.3.1", 0x3857a, 0x3859a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.4.1", 0x3859a, 0x385ba, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.5.1", 0x385ba, 0x385da, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.6.1", 0x385da, 0x385fa, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.4.1.1", 0x385fa, 0x3861a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.2.1", 0x3861a, 0x3863a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.3.1", 0x3863a, 0x3865a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.4.1", 0x3865a, 0x3867a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.5.1", 0x3867a, 0x3869a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.6.1", 0x3869a, 0x386ba, indexCPS2Sprites_VSAV1_Stages, 0x25 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_FEAST_EX[] =
{
    { L"8BG.0.0.1", 0x51882, 0x51a22, indexCPS2Sprites_VSAV1_Stages, 0x04, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x51a22, 0x51c02, indexCPS2Sprites_VSAV1_Stages, 0x05 },
    { L"32BG.0.0.0", 0x70692, 0x70872, indexCPS2Sprites_VSAV1_Stages, 0x14 },
    { L"SS.0.0.0", 0x38eda, 0x3901a, indexCPS2Sprites_VSAV1_Stages, 0x20 },
    { L"16BG.0.0.0", 0x5f48a, 0x5f5ca, indexCPS2Sprites_VSAV1_Stages, 0x26 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_FEAST_EX_PARTS[] =
{
    // all hand-tuned: two discrete shifts at start of 8 and 32
    // 2 + (0x55422 - 0x3E952), 
    { L"8BG.1.1.1", 0x3E952 + (0x55422 - 0x3E952), 0x3E972 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.1.2", 0x3E9F2 + (0x55422 - 0x3E952), 0x3EA12 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.1.3", 0x3EA92 + (0x55422 - 0x3E952), 0x3EAB2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.1.4", 0x3EB32 + (0x55422 - 0x3E952), 0x3EB52 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.1.5", 0x3EBD2 + (0x55422 - 0x3E952), 0x3EBF2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.2.1", 0x3E972 + (0x55422 - 0x3E952), 0x3E992 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.2.2", 0x3EA12 + (0x55422 - 0x3E952), 0x3EA32 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.2.3", 0x3EAB2 + (0x55422 - 0x3E952), 0x3EAD2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.2.4", 0x3EB52 + (0x55422 - 0x3E952), 0x3EB72 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.2.5", 0x3EBF2 + (0x55422 - 0x3E952), 0x3EC12 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.3.1", 0x3E992 + (0x55422 - 0x3E952), 0x3E9B2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.3.2", 0x3EA32 + (0x55422 - 0x3E952), 0x3EA52 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.3.3", 0x3EAD2 + (0x55422 - 0x3E952), 0x3EAF2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.3.4", 0x3EB72 + (0x55422 - 0x3E952), 0x3EB92 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.3.5", 0x3EC12 + (0x55422 - 0x3E952), 0x3EC32 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.4.1", 0x3E9B2 + (0x55422 - 0x3E952), 0x3E9D2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.4.2", 0x3EA52 + (0x55422 - 0x3E952), 0x3EA72 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.4.3", 0x3EAF2 + (0x55422 - 0x3E952), 0x3EB12 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.4.4", 0x3EB92 + (0x55422 - 0x3E952), 0x3EBB2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.4.5", 0x3EC32 + (0x55422 - 0x3E952), 0x3EC52 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.5.1", 0x3E9D2 + (0x55422 - 0x3E952), 0x3E9F2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.5.2", 0x3EA72 + (0x55422 - 0x3E952), 0x3EA92 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.5.3", 0x3EB12 + (0x55422 - 0x3E952), 0x3EB32 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.5.4", 0x3EBB2 + (0x55422 - 0x3E952), 0x3EBD2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.5.5", 0x3EC52 + (0x55422 - 0x3E952), 0x3EC72 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0a },

    { L"8BG.2.1.1", 0x3DF72 + (0x55422 - 0x3E952), 0x3DF92 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.1.2", 0x3DFF2 + (0x55422 - 0x3E952), 0x3E012 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.1.3", 0x3E072 + (0x55422 - 0x3E952), 0x3E092 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.1.4", 0x3E0F2 + (0x55422 - 0x3E952), 0x3E112 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.1.5", 0x3E172 + (0x55422 - 0x3E952), 0x3E192 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.2.1", 0x3DF92 + (0x55422 - 0x3E952), 0x3DFB2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.2.2", 0x3E012 + (0x55422 - 0x3E952), 0x3E032 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.2.3", 0x3E092 + (0x55422 - 0x3E952), 0x3E0B2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.2.4", 0x3E112 + (0x55422 - 0x3E952), 0x3E132 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.2.5", 0x3E192 + (0x55422 - 0x3E952), 0x3E1B2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.3.1", 0x3DFB2 + (0x55422 - 0x3E952), 0x3DFD2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.3.2", 0x3E032 + (0x55422 - 0x3E952), 0x3E052 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.3.3", 0x3E0B2 + (0x55422 - 0x3E952), 0x3E0D2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.3.4", 0x3E132 + (0x55422 - 0x3E952), 0x3E152 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.3.5", 0x3EC72 + (0x55422 - 0x3E952), 0x3EC92 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.4.1", 0x3DFD2 + (0x55422 - 0x3E952), 0x3DFF2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.4.2", 0x3E052 + (0x55422 - 0x3E952), 0x3E072 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.4.3", 0x3E0D2 + (0x55422 - 0x3E952), 0x3E0F2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.4.4", 0x3E152 + (0x55422 - 0x3E952), 0x3E172 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.4.5", 0x3EC92 + (0x55422 - 0x3E952), 0x3ECB2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x0f },

    { L"8BG.3.1.1", 0x3DDB2 + (0x55422 - 0x3E952), 0x3DDD2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.1.2", 0x3DE52 + (0x55422 - 0x3E952), 0x3DE72 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.2.1", 0x3DDD2 + (0x55422 - 0x3E952), 0x3DDF2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.2.2", 0x3DE72 + (0x55422 - 0x3E952), 0x3DE92 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.3.1", 0x3DDF2 + (0x55422 - 0x3E952), 0x3DE12 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.3.2", 0x3DE92 + (0x55422 - 0x3E952), 0x3DEB2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.4.1", 0x3DE12 + (0x55422 - 0x3E952), 0x3DE32 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.4.2", 0x3DEB2 + (0x55422 - 0x3E952), 0x3DED2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.5.1", 0x3DE32 + (0x55422 - 0x3E952), 0x3DE52 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.5.2", 0x3DED2 + (0x55422 - 0x3E952), 0x3DEF2 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x11 },

    { L"8BG.4.1.1", 0x3DEF2 + (0x55422 - 0x3E952), 0x3DF12 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.1.2", 0x3DF32 + (0x55422 - 0x3E952), 0x3DF52 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x13 },
    { L"8BG.4.2.1", 0x3DF12 + (0x55422 - 0x3E952), 0x3DF32 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.2.2", 0x3DF52 + (0x55422 - 0x3E952), 0x3DF72 + (0x55422 - 0x3E952), indexCPS2Sprites_VSAV1_Stages, 0x13 },

    // 2 + (0x73952 - 0x61E82), 
    { L"32BG.1.1.1", 0x61E82 + (0x73952 - 0x61E82), 0x61EA2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.1.2", 0x61F42 + (0x73952 - 0x61E82), 0x61F62 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.1.3", 0x62002 + (0x73952 - 0x61E82), 0x62022 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.1.4", 0x620C2 + (0x73952 - 0x61E82), 0x620E2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.1.5", 0x62182 + (0x73952 - 0x61E82), 0x621A2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.1.6", 0x62242 + (0x73952 - 0x61E82), 0x62262 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.1.7", 0x62302 + (0x73952 - 0x61E82), 0x62322 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.2.1", 0x61EA2 + (0x73952 - 0x61E82), 0x61EC2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.2.2", 0x61F62 + (0x73952 - 0x61E82), 0x61F82 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.2.3", 0x62022 + (0x73952 - 0x61E82), 0x62042 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.2.4", 0x620E2 + (0x73952 - 0x61E82), 0x62102 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.2.5", 0x621A2 + (0x73952 - 0x61E82), 0x621C2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.2.6", 0x62262 + (0x73952 - 0x61E82), 0x62282 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.2.7", 0x62322 + (0x73952 - 0x61E82), 0x62342 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.3.1", 0x61EC2 + (0x73952 - 0x61E82), 0x61EE2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.3.2", 0x61F82 + (0x73952 - 0x61E82), 0x61FA2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.3.3", 0x62042 + (0x73952 - 0x61E82), 0x62062 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.3.4", 0x62102 + (0x73952 - 0x61E82), 0x62122 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.3.5", 0x621C2 + (0x73952 - 0x61E82), 0x621E2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.3.6", 0x62282 + (0x73952 - 0x61E82), 0x622A2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.3.7", 0x62342 + (0x73952 - 0x61E82), 0x62362 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.4.1", 0x61EE2 + (0x73952 - 0x61E82), 0x61F02 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.4.2", 0x61FA2 + (0x73952 - 0x61E82), 0x61FC2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.4.3", 0x62062 + (0x73952 - 0x61E82), 0x62082 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.4.4", 0x62122 + (0x73952 - 0x61E82), 0x62142 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.4.5", 0x621E2 + (0x73952 - 0x61E82), 0x62202 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.4.6", 0x622A2 + (0x73952 - 0x61E82), 0x622C2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.4.7", 0x62362 + (0x73952 - 0x61E82), 0x62382 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.5.1", 0x61F02 + (0x73952 - 0x61E82), 0x61F22 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.5.2", 0x61FC2 + (0x73952 - 0x61E82), 0x61FE2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.5.3", 0x62082 + (0x73952 - 0x61E82), 0x620A2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.5.4", 0x62142 + (0x73952 - 0x61E82), 0x62162 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.5.5", 0x62202 + (0x73952 - 0x61E82), 0x62222 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.5.6", 0x622C2 + (0x73952 - 0x61E82), 0x622E2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.5.7", 0x62382 + (0x73952 - 0x61E82), 0x623A2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.6.1", 0x61F22 + (0x73952 - 0x61E82), 0x61F42 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.6.2", 0x61FE2 + (0x73952 - 0x61E82), 0x62002 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.6.3", 0x620A2 + (0x73952 - 0x61E82), 0x620C2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.6.4", 0x62162 + (0x73952 - 0x61E82), 0x62182 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.6.5", 0x62222 + (0x73952 - 0x61E82), 0x62242 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.6.6", 0x622E2 + (0x73952 - 0x61E82), 0x62302 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.6.7", 0x623A2 + (0x73952 - 0x61E82), 0x623C2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1b },

    { L"32BG.2.1.1", 0x61C82 + (0x73952 - 0x61E82), 0x61CA2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.1.2", 0x61D02 + (0x73952 - 0x61E82), 0x61D22 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.1.3", 0x61D82 + (0x73952 - 0x61E82), 0x61DA2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.1.4", 0x61E02 + (0x73952 - 0x61E82), 0x61E22 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.2.1", 0x61CA2 + (0x73952 - 0x61E82), 0x61CC2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.2.2", 0x61D22 + (0x73952 - 0x61E82), 0x61D42 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.2.3", 0x61DA2 + (0x73952 - 0x61E82), 0x61DC2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.2.4", 0x61E22 + (0x73952 - 0x61E82), 0x61E42 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.3.1", 0x61CC2 + (0x73952 - 0x61E82), 0x61CE2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.3.2", 0x61D42 + (0x73952 - 0x61E82), 0x61D62 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.3.3", 0x61DC2 + (0x73952 - 0x61E82), 0x61DE2 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.3.4", 0x61E42 + (0x73952 - 0x61E82), 0x61E62 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.4.1", 0x61CE2 + (0x73952 - 0x61E82), 0x61D02 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.4.2", 0x61D62 + (0x73952 - 0x61E82), 0x61D82 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.4.3", 0x61DE2 + (0x73952 - 0x61E82), 0x61E02 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.4.4", 0x61E62 + (0x73952 - 0x61E82), 0x61E82 + (0x73952 - 0x61E82), indexCPS2Sprites_VSAV1_Stages, 0x1f },

    { L"SS.1.1.1", 0x39f1a, 0x39f3a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.1.2", 0x3a01a, 0x3a03a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.2.1", 0x39f3a, 0x39f5a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.2.2", 0x3a03a, 0x3a05a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.3.1", 0x39f5a, 0x39f7a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.3.2", 0x3a05a, 0x3a07a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.4.1", 0x39f7a, 0x39f9a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.4.2", 0x3a07a, 0x3a09a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.2.1.1", 0x3a11a, 0x3a13a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.2.1", 0x3a13a, 0x3a15a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.3.1", 0x3a15a, 0x3a17a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.4.1", 0x3a17a, 0x3a19a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.3.1.1", 0x3a19a, 0x3a1ba, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.2.1", 0x3a1ba, 0x3a1da, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.3.1", 0x3a1da, 0x3a1fa, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.4.1", 0x3a1fa, 0x3a21a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.5.1", 0x3a21a, 0x3a23a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.6.1", 0x3a23a, 0x3a25a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.4.1.1", 0x3a25a, 0x3a27a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.2.1", 0x3a27a, 0x3a29a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.3.1", 0x3a29a, 0x3a2ba, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.4.1", 0x3a2ba, 0x3a2da, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.5.1", 0x3a2da, 0x3a2fa, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.6.1", 0x3a2fa, 0x3a31a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_FETUS_EX[] =
{
    { L"32BG.0.0.1", 0x73292, 0x73332, indexCPS2Sprites_VSAV1_Stages, 0xa9, &pairFullyLinkedNode },
    { L"32BG.0.0.2", 0x73492, 0x734b2, indexCPS2Sprites_VSAV1_Stages, 0xaa },
    { L"8BG.0.0.1", 0x54482, 0x54662, indexCPS2Sprites_VSAV1_Stages, 0xab },
    { L"8BG.0.0.2", 0x54682, 0x54702, indexCPS2Sprites_VSAV1_Stages, 0xac },
    { L"16BG.0.0.1", 0x61dca, 0x61f8a, indexCPS2Sprites_VSAV1_Stages, 0xad },
    { L"16BG.0.0.2", 0x61fca, 0x6210a, indexCPS2Sprites_VSAV1_Stages, 0xae },
    { L"SS.0.0.0", 0x39c9a, 0x39dda, indexCPS2Sprites_VSAV1_Stages, 0xaf },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_FETUS_EX_PARTS[] =
{
    { L"16x16 Fades", 0x621ca, 0x6226a },
    { L"32BG Fades", 0x75a32, 0x75a92 },
    // hand-swapped
    { L"32BG.0.0.2", 0x71092, 0x710d2 }, /* Delta: 0x11ad0 */
    { L"8BG (Unknown 2)", 0x54662, 0x54682 },
    { L"32BG.1.1.1", 0x75972, 0x75992, indexCPS2Sprites_VSAV1_Stages, -1, &pairNextAndNext },
    { L"32BG.1.1.2", 0x759b2, 0x759d2 },
    { L"32BG.1.1.3", 0x759f2, 0x75a12 },
    { L"32BG.1.2.1", 0x75992, 0x759b2, indexCPS2Sprites_VSAV1_Stages, -1, &pairNextAndNext },
    { L"32BG.1.2.2", 0x759d2, 0x759f2 },
    { L"32BG.1.2.3", 0x75a12, 0x75a32 },
    { L"8BG.1.1.1", 0x54c82, 0x54d62, indexCPS2Sprites_VSAV1_Stages, -1, &pairNext },
    { L"8BG.1.1.2", 0x54d62, 0x54e42 },
    { L"SS.1.0.1", 0x3a9da, 0x3aa1a, indexCPS2Sprites_VSAV1_Stages, -1, &pairNext },
    { L"SS.1.0.2", 0x3aa1a, 0x3aa5a },
    { L"SS.2.0.1", 0x3a91a, 0x3a9da },
    { L"SS.3.0.1", 0x3aa5a, 0x3ab3a },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_SCREAM[] =
{
    { L"32BG.0.0.0", 0x6b832, 0x6b9f2, indexCPS2Sprites_VSAV1_Stages, 0x27, &pairFullyLinkedNode },
    { L"8BG.0.0.1", 0x4e362, 0x4e4c2, indexCPS2Sprites_VSAV1_Stages, 0x29 },
    { L"8BG.0.0.2", 0x4e4c2, 0x4e602, indexCPS2Sprites_VSAV1_Stages, 0x2a },
    { L"16BG.0.0.1", 0x5b3ca, 0x5b5aa, indexCPS2Sprites_VSAV1_Stages, 0x2b },
    { L"16BG.0.0.2", 0x5b5aa, 0x5b72a, indexCPS2Sprites_VSAV1_Stages, 0x2c },
    { L"SS.0.0.0", 0x37dba, 0x37efa, indexCPS2Sprites_VSAV1_Stages, 0x2d },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_SCREAM_PARTS[] =
{
    { L"32BG.1.1.1", 0x6ceb2, 0x6ced2, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.2.1", 0x6ced2, 0x6cef2, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.3.1", 0x6cef2, 0x6cf12, indexCPS2Sprites_VSAV1_Stages, 0x28 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_SCREAM_EX[] =
{
    { L"32BG.0.0.0", 0x72a92, 0x72c52, indexCPS2Sprites_VSAV1_Stages, 0x27, &pairFullyLinkedNode },
    { L"8BG.0.0.1", 0x53c82, 0x53de2, indexCPS2Sprites_VSAV1_Stages, 0x29 },
    { L"8BG.0.0.2", 0x53de2, 0x53f22, indexCPS2Sprites_VSAV1_Stages, 0x2a },
    { L"16BG.0.0.1", 0x615ca, 0x617aa, indexCPS2Sprites_VSAV1_Stages, 0x2b },
    { L"16BG.0.0.2", 0x617aa, 0x6192a, indexCPS2Sprites_VSAV1_Stages, 0x2c },
    { L"SS.0.0.0", 0x39a1a, 0x39b5a, indexCPS2Sprites_VSAV1_Stages, 0x2d },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_SCREAM_EX_PARTS[] =
{
    // 1.1.1 hand-tweaked since it palette-matches 0.0.0
    { L"32BG.1.1.1", 0x74112, 0x74132, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.2.1", 0x74132, 0x74152, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.3.1", 0x74152, 0x74172, indexCPS2Sprites_VSAV1_Stages, 0x28 },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_IRONHORSE[] =
{
    { L"32BG.0.0.0", 0x6bc32, 0x6bcb2, indexCPS2Sprites_VSAV1_Stages, 0x93, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x4e762, 0x4e922, indexCPS2Sprites_VSAV1_Stages, 0x9a },
    { L"16BG.0.0.1", 0x5b7ca, 0x5b9ca, indexCPS2Sprites_VSAV1_Stages, 0x98 },
    { L"16BG.0.0.2", 0x5b9ca, 0x5bbca, indexCPS2Sprites_VSAV1_Stages, 0x99 },
    { L"SS.0.0.0", 0x37efa, 0x3803a, indexCPS2Sprites_VSAV1_Stages, 0x9b },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_IRONHORSE_PARTS[] =
{
  // Match at 0x6d612, 0x6d632 (delta 0x115f0)
  // Match at 0x6d6f2, 0x6d712 (delta 0x116d0) <-- hand-swapped to this
  // Match at 0x6de12, 0x6de32 (delta 0x11df0)
  // Match at 0x6e432, 0x6e452 (delta 0x12410)
    { L"32BG.1.1.1", 0x6d6f2, 0x6d712, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x115f0 */
// Warning: the remapped delta shifts from 0x115f0 to 0x10ed0!
  // Match at 0x6d452, 0x6d472 (delta 0x10ed0)
  // Match at 0x6dab2, 0x6dad2 (delta 0x11530)
  // Match at 0x6dc52, 0x6dc72 (delta 0x116d0) <-- hand-swapped to this
  // Match at 0x6e5f2, 0x6e612 (delta 0x12070)
    { L"32BG.1.1.2", 0x6dc52, 0x6dc72, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x10ed0 */
// Warning: the remapped delta shifts from 0x10ed0 to 0x116d0!
  // Match at 0x6d192, 0x6d1b2 (delta 0x116d0) <-- this is correct
  // Match at 0x6d7f2, 0x6d812 (delta 0x11d30)
  // Match at 0x6df12, 0x6df32 (delta 0x12450)
  // Match at 0x6e332, 0x6e352 (delta 0x12870)
    { L"32BG.1.1.3", 0x6d192, 0x6d1b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10330!
  // Match at 0x6d352, 0x6d372 (delta 0x10330)
  // Match at 0x6d9b2, 0x6d9d2 (delta 0x10990)
  // Match at 0x6e0d2, 0x6e0f2 (delta 0x110b0)
  // Match at 0x6e6f2, 0x6e712 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.1.4", 0x6e6f2, 0x6e712, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x115f0!
  // Match at 0x6d632, 0x6d652 (delta 0x115f0)
  // Match at 0x6d712, 0x6d732 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6de32, 0x6de52 (delta 0x11df0)
  // Match at 0x6e412, 0x6e432 (delta 0x123d0)
    { L"32BG.1.2.1", 0x6d712, 0x6d732, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d472, 0x6d492 (delta 0x10ed0)
  // Match at 0x6dad2, 0x6daf2 (delta 0x11530)
  // Match at 0x6dc72, 0x6dc92 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e5d2, 0x6e5f2 (delta 0x12030)
    { L"32BG.1.2.2", 0x6dc72, 0x6dc92, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.2.3", 0x6d1b2, 0x6d1d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10370!
  // Match at 0x6d372, 0x6d392 (delta 0x10370)
  // Match at 0x6d9d2, 0x6d9f2 (delta 0x109d0)
  // Match at 0x6e0f2, 0x6e112 (delta 0x110f0)
  // Match at 0x6e6d2, 0x6e6f2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.2.4", 0x6e6d2, 0x6e6f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x115f0!
  // Match at 0x6d652, 0x6d672 (delta 0x115f0)
  // Match at 0x6d732, 0x6d752 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6de52, 0x6de72 (delta 0x11df0)
  // Match at 0x6e3f2, 0x6e412 (delta 0x12390)
    { L"32BG.1.3.1", 0x6d732, 0x6d752, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d492, 0x6d4b2 (delta 0x10ed0)
  // Match at 0x6daf2, 0x6db12 (delta 0x11530)
  // Match at 0x6dc92, 0x6dcb2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e5b2, 0x6e5d2 (delta 0x11ff0)
    { L"32BG.1.3.2", 0x6dc92, 0x6dcb2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.3.3", 0x6d1d2, 0x6d1f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x103b0!
  // Match at 0x6d392, 0x6d3b2 (delta 0x103b0)
  // Match at 0x6d9f2, 0x6da12 (delta 0x10a10)
  // Match at 0x6e112, 0x6e132 (delta 0x11130)
  // Match at 0x6e6b2, 0x6e6d2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.3.4", 0x6e6b2, 0x6e6d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x115f0!
  // Match at 0x6d672, 0x6d692 (delta 0x115f0)
  // Match at 0x6d752, 0x6d772 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6de72, 0x6de92 (delta 0x11df0)
  // Match at 0x6e3d2, 0x6e3f2 (delta 0x12350)
    { L"32BG.1.4.1", 0x6d752, 0x6d772, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d4b2, 0x6d4d2 (delta 0x10ed0)
  // Match at 0x6db12, 0x6db32 (delta 0x11530)
  // Match at 0x6dcb2, 0x6dcd2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e592, 0x6e5b2 (delta 0x11fb0)
    { L"32BG.1.4.2", 0x6dcb2, 0x6dcd2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.4.3", 0x6d1f2, 0x6d212, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x103f0!
  // Match at 0x6d3b2, 0x6d3d2 (delta 0x103f0)
  // Match at 0x6da12, 0x6da32 (delta 0x10a50)
  // Match at 0x6e132, 0x6e152 (delta 0x11170)
  // Match at 0x6e692, 0x6e6b2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.4.4", 0x6e692, 0x6e6b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x115f0!
  // Match at 0x6d692, 0x6d6b2 (delta 0x115f0)
  // Match at 0x6d772, 0x6d792 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6de92, 0x6deb2 (delta 0x11df0)
  // Match at 0x6e3b2, 0x6e3d2 (delta 0x12310)
    { L"32BG.1.5.1", 0x6d772, 0x6d792, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d4d2, 0x6d4f2 (delta 0x10ed0)
  // Match at 0x6db32, 0x6db52 (delta 0x11530)
  // Match at 0x6dcd2, 0x6dcf2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e572, 0x6e592 (delta 0x11f70)
    { L"32BG.1.5.2", 0x6dcd2, 0x6dcf2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.5.3", 0x6d212, 0x6d232, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10430!
  // Match at 0x6d3d2, 0x6d3f2 (delta 0x10430)
  // Match at 0x6da32, 0x6da52 (delta 0x10a90)
  // Match at 0x6e152, 0x6e172 (delta 0x111b0)
  // Match at 0x6e672, 0x6e692 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.5.4", 0x6e672, 0x6e692, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x115f0!
  // Match at 0x6d6b2, 0x6d6d2 (delta 0x115f0)
  // Match at 0x6d792, 0x6d7b2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6deb2, 0x6ded2 (delta 0x11df0)
  // Match at 0x6e392, 0x6e3b2 (delta 0x122d0)
    { L"32BG.1.6.1", 0x6d792, 0x6d7b2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d4f2, 0x6d512 (delta 0x10ed0)
  // Match at 0x6db52, 0x6db72 (delta 0x11530)
  // Match at 0x6dcf2, 0x6dd12 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e552, 0x6e572 (delta 0x11f30)
    { L"32BG.1.6.2", 0x6dcf2, 0x6dd12, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.6.3", 0x6d232, 0x6d252, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10470!
  // Match at 0x6d3f2, 0x6d412 (delta 0x10470)
  // Match at 0x6da52, 0x6da72 (delta 0x10ad0)
  // Match at 0x6e172, 0x6e192 (delta 0x111f0)
  // Match at 0x6e652, 0x6e672 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.6.4", 0x6e652, 0x6e672, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x115f0!
  // Match at 0x6d6d2, 0x6d6f2 (delta 0x115f0)
  // Match at 0x6d7b2, 0x6d7d2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6ded2, 0x6def2 (delta 0x11df0)
  // Match at 0x6e372, 0x6e392 (delta 0x12290)
    { L"32BG.1.7.1", 0x6d7b2, 0x6d7d2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d512, 0x6d532 (delta 0x10ed0)
  // Match at 0x6db72, 0x6db92 (delta 0x11530)
  // Match at 0x6dd12, 0x6dd32 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e532, 0x6e552 (delta 0x11ef0)
    { L"32BG.1.7.2", 0x6dd12, 0x6dd32, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.7.3", 0x6d252, 0x6d272, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x104b0!
  // Match at 0x6d412, 0x6d432 (delta 0x104b0)
  // Match at 0x6da72, 0x6da92 (delta 0x10b10)
  // Match at 0x6e192, 0x6e1b2 (delta 0x11230)
  // Match at 0x6e632, 0x6e652 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.7.4", 0x6e632, 0x6e652, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xfb70!
  // Match at 0x6bc72, 0x6bc92 (delta 0xfb70)
  // Match at 0x6d7d2, 0x6d7f2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6def2, 0x6df12 (delta 0x11df0)
  // Match at 0x6e352, 0x6e372 (delta 0x12250)
    { L"32BG.1.8.1", 0x6d7d2, 0x6d7f2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d532, 0x6d552 (delta 0x10ed0)
  // Match at 0x6db92, 0x6dbb2 (delta 0x11530)
  // Match at 0x6dd32, 0x6dd52 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e512, 0x6e532 (delta 0x11eb0)
    { L"32BG.1.8.2", 0x6dd32, 0x6dd52, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.8.3", 0x6d272, 0x6d292, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xed10!
  // Match at 0x6bc52, 0x6bc72 (delta 0xed10)
  // Match at 0x6d432, 0x6d452 (delta 0x104f0)
  // Match at 0x6da92, 0x6dab2 (delta 0x10b50)
  // Match at 0x6e612, 0x6e632 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.8.4", 0x6e612, 0x6e632, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d192, 0x6d1b2 (delta 0x11070)
  // Match at 0x6d7f2, 0x6d812 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6df12, 0x6df32 (delta 0x11df0)
  // Match at 0x6e332, 0x6e352 (delta 0x12210)
    { L"32BG.1.9.1", 0x6d7f2, 0x6d812, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d552, 0x6d572 (delta 0x10ed0)
  // Match at 0x6dbb2, 0x6dbd2 (delta 0x11530)
  // Match at 0x6dd52, 0x6dd72 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e4f2, 0x6e512 (delta 0x11e70)
    { L"32BG.1.9.2", 0x6dd52, 0x6dd72, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.9.3", 0x6d292, 0x6d2b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10530!
  // Match at 0x6d452, 0x6d472 (delta 0x10530)
  // Match at 0x6dab2, 0x6dad2 (delta 0x10b90)
  // Match at 0x6dc52, 0x6dc72 (delta 0x10d30)
  // Match at 0x6e5f2, 0x6e612 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.9.4", 0x6e5f2, 0x6e612, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d1b2, 0x6d1d2 (delta 0x11070)
  // Match at 0x6d812, 0x6d832 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6df32, 0x6df52 (delta 0x11df0)
  // Match at 0x6e312, 0x6e332 (delta 0x121d0)
    { L"32BG.1.10.1", 0x6d812, 0x6d832, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d572, 0x6d592 (delta 0x10ed0)
  // Match at 0x6dbd2, 0x6dbf2 (delta 0x11530)
  // Match at 0x6dd72, 0x6dd92 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e4d2, 0x6e4f2 (delta 0x11e30)
    { L"32BG.1.10.2", 0x6dd72, 0x6dd92, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.10.3", 0x6d2b2, 0x6d2d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10570!
  // Match at 0x6d472, 0x6d492 (delta 0x10570)
  // Match at 0x6dad2, 0x6daf2 (delta 0x10bd0)
  // Match at 0x6dc72, 0x6dc92 (delta 0x10d70)
  // Match at 0x6e5d2, 0x6e5f2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.10.4", 0x6e5d2, 0x6e5f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d1d2, 0x6d1f2 (delta 0x11070)
  // Match at 0x6d832, 0x6d852 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6df52, 0x6df72 (delta 0x11df0)
  // Match at 0x6e2f2, 0x6e312 (delta 0x12190)
    { L"32BG.1.11.1", 0x6d832, 0x6d852, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d592, 0x6d5b2 (delta 0x10ed0)
  // Match at 0x6dbf2, 0x6dc12 (delta 0x11530)
  // Match at 0x6dd92, 0x6ddb2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e4b2, 0x6e4d2 (delta 0x11df0)
    { L"32BG.1.11.2", 0x6dd92, 0x6ddb2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.11.3", 0x6d2d2, 0x6d2f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x105b0!
  // Match at 0x6d492, 0x6d4b2 (delta 0x105b0)
  // Match at 0x6daf2, 0x6db12 (delta 0x10c10)
  // Match at 0x6dc92, 0x6dcb2 (delta 0x10db0)
  // Match at 0x6e5b2, 0x6e5d2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.11.4", 0x6e5b2, 0x6e5d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d1f2, 0x6d212 (delta 0x11070)
  // Match at 0x6d852, 0x6d872 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6df72, 0x6df92 (delta 0x11df0)
  // Match at 0x6e2d2, 0x6e2f2 (delta 0x12150)
    { L"32BG.1.12.1", 0x6d852, 0x6d872, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d5b2, 0x6d5d2 (delta 0x10ed0)
  // Match at 0x6dc12, 0x6dc32 (delta 0x11530)
  // Match at 0x6ddb2, 0x6ddd2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e492, 0x6e4b2 (delta 0x11db0)
    { L"32BG.1.12.2", 0x6ddb2, 0x6ddd2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.12.3", 0x6d2f2, 0x6d312, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x105f0!
  // Match at 0x6d4b2, 0x6d4d2 (delta 0x105f0)
  // Match at 0x6db12, 0x6db32 (delta 0x10c50)
  // Match at 0x6dcb2, 0x6dcd2 (delta 0x10df0)
  // Match at 0x6e592, 0x6e5b2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.12.4", 0x6e592, 0x6e5b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d212, 0x6d232 (delta 0x11070)
  // Match at 0x6d872, 0x6d892 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6df92, 0x6dfb2 (delta 0x11df0)
  // Match at 0x6e2b2, 0x6e2d2 (delta 0x12110)
    { L"32BG.1.13.1", 0x6d872, 0x6d892, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d5d2, 0x6d5f2 (delta 0x10ed0)
  // Match at 0x6dc32, 0x6dc52 (delta 0x11530)
  // Match at 0x6ddd2, 0x6ddf2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e472, 0x6e492 (delta 0x11d70)
    { L"32BG.1.13.2", 0x6ddd2, 0x6ddf2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.13.3", 0x6d312, 0x6d332, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10630!
  // Match at 0x6d4d2, 0x6d4f2 (delta 0x10630)
  // Match at 0x6db32, 0x6db52 (delta 0x10c90)
  // Match at 0x6dcd2, 0x6dcf2 (delta 0x10e30)
  // Match at 0x6e572, 0x6e592 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.13.4", 0x6e572, 0x6e592, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d232, 0x6d252 (delta 0x11070)
  // Match at 0x6d892, 0x6d8b2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dfb2, 0x6dfd2 (delta 0x11df0)
  // Match at 0x6e292, 0x6e2b2 (delta 0x120d0)
    { L"32BG.1.14.1", 0x6d892, 0x6d8b2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xf510!
  // Match at 0x6bc32, 0x6bc52 (delta 0xf510)
  // Match at 0x6d5f2, 0x6d612 (delta 0x10ed0)
  // Match at 0x6ddf2, 0x6de12 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e452, 0x6e472 (delta 0x11d30)
    { L"32BG.1.14.2", 0x6ddf2, 0x6de12, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10030!
  // Match at 0x6bc92, 0x6bcb2 (delta 0x10030)
  // Match at 0x6d332, 0x6d352 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6d992, 0x6d9b2 (delta 0x11d30)
  // Match at 0x6e0b2, 0x6e0d2 (delta 0x12450)
    { L"32BG.1.14.3", 0x6d332, 0x6d352, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10670!
  // Match at 0x6d4f2, 0x6d512 (delta 0x10670)
  // Match at 0x6db52, 0x6db72 (delta 0x10cd0)
  // Match at 0x6dcf2, 0x6dd12 (delta 0x10e70)
  // Match at 0x6e552, 0x6e572 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.14.4", 0x6e552, 0x6e572, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d252, 0x6d272 (delta 0x11070)
  // Match at 0x6d8b2, 0x6d8d2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dfd2, 0x6dff2 (delta 0x11df0)
  // Match at 0x6e272, 0x6e292 (delta 0x12090)
    { L"32BG.1.15.1", 0x6d8b2, 0x6d8d2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d612, 0x6d632 (delta 0x10ed0)
  // Match at 0x6d6f2, 0x6d712 (delta 0x10fb0)
  // Match at 0x6de12, 0x6de32 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e432, 0x6e452 (delta 0x11cf0)
    { L"32BG.1.15.2", 0x6de12, 0x6de32, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.15.3", 0x6d352, 0x6d372, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x106b0!
  // Match at 0x6d512, 0x6d532 (delta 0x106b0)
  // Match at 0x6db72, 0x6db92 (delta 0x10d10)
  // Match at 0x6dd12, 0x6dd32 (delta 0x10eb0)
  // Match at 0x6e532, 0x6e552 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.15.4", 0x6e532, 0x6e552, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d272, 0x6d292 (delta 0x11070)
  // Match at 0x6d8d2, 0x6d8f2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dff2, 0x6e012 (delta 0x11df0)
  // Match at 0x6e252, 0x6e272 (delta 0x12050)
    { L"32BG.1.16.1", 0x6d8d2, 0x6d8f2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d632, 0x6d652 (delta 0x10ed0)
  // Match at 0x6d712, 0x6d732 (delta 0x10fb0)
  // Match at 0x6de32, 0x6de52 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e412, 0x6e432 (delta 0x11cb0)
    { L"32BG.1.16.2", 0x6de32, 0x6de52, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.16.3", 0x6d372, 0x6d392, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x106f0!
  // Match at 0x6d532, 0x6d552 (delta 0x106f0)
  // Match at 0x6db92, 0x6dbb2 (delta 0x10d50)
  // Match at 0x6dd32, 0x6dd52 (delta 0x10ef0)
  // Match at 0x6e512, 0x6e532 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.16.4", 0x6e512, 0x6e532, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d292, 0x6d2b2 (delta 0x11070)
  // Match at 0x6d8f2, 0x6d912 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e012, 0x6e032 (delta 0x11df0)
  // Match at 0x6e232, 0x6e252 (delta 0x12010)
    { L"32BG.1.17.1", 0x6d8f2, 0x6d912, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d652, 0x6d672 (delta 0x10ed0)
  // Match at 0x6d732, 0x6d752 (delta 0x10fb0)
  // Match at 0x6de52, 0x6de72 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e3f2, 0x6e412 (delta 0x11c70)
    { L"32BG.1.17.2", 0x6de52, 0x6de72, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.17.3", 0x6d392, 0x6d3b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10730!
  // Match at 0x6d552, 0x6d572 (delta 0x10730)
  // Match at 0x6dbb2, 0x6dbd2 (delta 0x10d90)
  // Match at 0x6dd52, 0x6dd72 (delta 0x10f30)
  // Match at 0x6e4f2, 0x6e512 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.17.4", 0x6e4f2, 0x6e512, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d2b2, 0x6d2d2 (delta 0x11070)
  // Match at 0x6d912, 0x6d932 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e032, 0x6e052 (delta 0x11df0)
  // Match at 0x6e212, 0x6e232 (delta 0x11fd0)
    { L"32BG.1.18.1", 0x6d912, 0x6d932, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d672, 0x6d692 (delta 0x10ed0)
  // Match at 0x6d752, 0x6d772 (delta 0x10fb0)
  // Match at 0x6de72, 0x6de92 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e3d2, 0x6e3f2 (delta 0x11c30)
    { L"32BG.1.18.2", 0x6de72, 0x6de92, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.18.3", 0x6d3b2, 0x6d3d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10770!
  // Match at 0x6d572, 0x6d592 (delta 0x10770)
  // Match at 0x6dbd2, 0x6dbf2 (delta 0x10dd0)
  // Match at 0x6dd72, 0x6dd92 (delta 0x10f70)
  // Match at 0x6e4d2, 0x6e4f2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.18.4", 0x6e4d2, 0x6e4f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d2d2, 0x6d2f2 (delta 0x11070)
  // Match at 0x6d932, 0x6d952 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e052, 0x6e072 (delta 0x11df0)
  // Match at 0x6e1f2, 0x6e212 (delta 0x11f90)
    { L"32BG.1.19.1", 0x6d932, 0x6d952, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d692, 0x6d6b2 (delta 0x10ed0)
  // Match at 0x6d772, 0x6d792 (delta 0x10fb0)
  // Match at 0x6de92, 0x6deb2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e3b2, 0x6e3d2 (delta 0x11bf0)
    { L"32BG.1.19.2", 0x6de92, 0x6deb2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.19.3", 0x6d3d2, 0x6d3f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x107b0!
  // Match at 0x6d592, 0x6d5b2 (delta 0x107b0)
  // Match at 0x6dbf2, 0x6dc12 (delta 0x10e10)
  // Match at 0x6dd92, 0x6ddb2 (delta 0x10fb0)
  // Match at 0x6e4b2, 0x6e4d2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.19.4", 0x6e4b2, 0x6e4d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d2f2, 0x6d312 (delta 0x11070)
  // Match at 0x6d952, 0x6d972 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e072, 0x6e092 (delta 0x11df0)
  // Match at 0x6e1d2, 0x6e1f2 (delta 0x11f50)
    { L"32BG.1.20.1", 0x6d952, 0x6d972, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d6b2, 0x6d6d2 (delta 0x10ed0)
  // Match at 0x6d792, 0x6d7b2 (delta 0x10fb0)
  // Match at 0x6deb2, 0x6ded2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e392, 0x6e3b2 (delta 0x11bb0)
    { L"32BG.1.20.2", 0x6deb2, 0x6ded2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.20.3", 0x6d3f2, 0x6d412, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x107f0!
  // Match at 0x6d5b2, 0x6d5d2 (delta 0x107f0)
  // Match at 0x6dc12, 0x6dc32 (delta 0x10e50)
  // Match at 0x6ddb2, 0x6ddd2 (delta 0x10ff0)
  // Match at 0x6e492, 0x6e4b2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.20.4", 0x6e492, 0x6e4b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d312, 0x6d332 (delta 0x11070)
  // Match at 0x6d972, 0x6d992 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e092, 0x6e0b2 (delta 0x11df0)
  // Match at 0x6e1b2, 0x6e1d2 (delta 0x11f10)
    { L"32BG.1.21.1", 0x6d972, 0x6d992, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10ed0!
  // Match at 0x6d6d2, 0x6d6f2 (delta 0x10ed0)
  // Match at 0x6d7b2, 0x6d7d2 (delta 0x10fb0)
  // Match at 0x6ded2, 0x6def2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e372, 0x6e392 (delta 0x11b70)
    { L"32BG.1.21.2", 0x6ded2, 0x6def2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.21.3", 0x6d412, 0x6d432, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10830!
  // Match at 0x6d5d2, 0x6d5f2 (delta 0x10830)
  // Match at 0x6dc32, 0x6dc52 (delta 0x10e90)
  // Match at 0x6ddd2, 0x6ddf2 (delta 0x11030)
  // Match at 0x6e472, 0x6e492 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.21.4", 0x6e472, 0x6e492, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xf9d0!
  // Match at 0x6bc92, 0x6bcb2 (delta 0xf9d0)
  // Match at 0x6d332, 0x6d352 (delta 0x11070)
  // Match at 0x6d992, 0x6d9b2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e0b2, 0x6e0d2 (delta 0x11df0)
    { L"32BG.1.22.1", 0x6d992, 0x6d9b2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xf450!
  // Match at 0x6bc72, 0x6bc92 (delta 0xf450)
  // Match at 0x6d7d2, 0x6d7f2 (delta 0x10fb0)
  // Match at 0x6def2, 0x6df12 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e352, 0x6e372 (delta 0x11b30)
    { L"32BG.1.22.2", 0x6def2, 0x6df12, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xfef0!
  // Match at 0x6bc52, 0x6bc72 (delta 0xfef0)
  // Match at 0x6d432, 0x6d452 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6da92, 0x6dab2 (delta 0x11d30)
  // Match at 0x6e612, 0x6e632 (delta 0x128b0)
    { L"32BG.1.22.3", 0x6d432, 0x6d452, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xeeb0!
  // Match at 0x6bc32, 0x6bc52 (delta 0xeeb0)
  // Match at 0x6d5f2, 0x6d612 (delta 0x10870)
  // Match at 0x6ddf2, 0x6de12 (delta 0x11070)
  // Match at 0x6e452, 0x6e472 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.22.4", 0x6e452, 0x6e472, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d352, 0x6d372 (delta 0x11070)
  // Match at 0x6d9b2, 0x6d9d2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e0d2, 0x6e0f2 (delta 0x11df0)
  // Match at 0x6e6f2, 0x6e712 (delta 0x12410)
    { L"32BG.1.23.1", 0x6d9b2, 0x6d9d2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d192, 0x6d1b2 (delta 0x10950)
  // Match at 0x6d7f2, 0x6d812 (delta 0x10fb0)
  // Match at 0x6df12, 0x6df32 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e332, 0x6e352 (delta 0x11af0)
    { L"32BG.1.23.2", 0x6df12, 0x6df32, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.23.3", 0x6d452, 0x6d472, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x108b0!
  // Match at 0x6d612, 0x6d632 (delta 0x108b0)
  // Match at 0x6d6f2, 0x6d712 (delta 0x10990)
  // Match at 0x6de12, 0x6de32 (delta 0x110b0)
  // Match at 0x6e432, 0x6e452 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.23.4", 0x6e432, 0x6e452, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d372, 0x6d392 (delta 0x11070)
  // Match at 0x6d9d2, 0x6d9f2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e0f2, 0x6e112 (delta 0x11df0)
  // Match at 0x6e6d2, 0x6e6f2 (delta 0x123d0)
    { L"32BG.1.24.1", 0x6d9d2, 0x6d9f2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d1b2, 0x6d1d2 (delta 0x10950)
  // Match at 0x6d812, 0x6d832 (delta 0x10fb0)
  // Match at 0x6df32, 0x6df52 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e312, 0x6e332 (delta 0x11ab0)
    { L"32BG.1.24.2", 0x6df32, 0x6df52, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.24.3", 0x6d472, 0x6d492, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x108f0!
  // Match at 0x6d632, 0x6d652 (delta 0x108f0)
  // Match at 0x6d712, 0x6d732 (delta 0x109d0)
  // Match at 0x6de32, 0x6de52 (delta 0x110f0)
  // Match at 0x6e412, 0x6e432 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.24.4", 0x6e412, 0x6e432, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d392, 0x6d3b2 (delta 0x11070)
  // Match at 0x6d9f2, 0x6da12 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e112, 0x6e132 (delta 0x11df0)
  // Match at 0x6e6b2, 0x6e6d2 (delta 0x12390)
    { L"32BG.1.25.1", 0x6d9f2, 0x6da12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d1d2, 0x6d1f2 (delta 0x10950)
  // Match at 0x6d832, 0x6d852 (delta 0x10fb0)
  // Match at 0x6df52, 0x6df72 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e2f2, 0x6e312 (delta 0x11a70)
    { L"32BG.1.25.2", 0x6df52, 0x6df72, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.25.3", 0x6d492, 0x6d4b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10930!
  // Match at 0x6d652, 0x6d672 (delta 0x10930)
  // Match at 0x6d732, 0x6d752 (delta 0x10a10)
  // Match at 0x6de52, 0x6de72 (delta 0x11130)
  // Match at 0x6e3f2, 0x6e412 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.25.4", 0x6e3f2, 0x6e412, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d3b2, 0x6d3d2 (delta 0x11070)
  // Match at 0x6da12, 0x6da32 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e132, 0x6e152 (delta 0x11df0)
  // Match at 0x6e692, 0x6e6b2 (delta 0x12350)
    { L"32BG.1.26.1", 0x6da12, 0x6da32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d1f2, 0x6d212 (delta 0x10950)
  // Match at 0x6d852, 0x6d872 (delta 0x10fb0)
  // Match at 0x6df72, 0x6df92 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e2d2, 0x6e2f2 (delta 0x11a30)
    { L"32BG.1.26.2", 0x6df72, 0x6df92, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.26.3", 0x6d4b2, 0x6d4d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10970!
  // Match at 0x6d672, 0x6d692 (delta 0x10970)
  // Match at 0x6d752, 0x6d772 (delta 0x10a50)
  // Match at 0x6de72, 0x6de92 (delta 0x11170)
  // Match at 0x6e3d2, 0x6e3f2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.26.4", 0x6e3d2, 0x6e3f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d3d2, 0x6d3f2 (delta 0x11070)
  // Match at 0x6da32, 0x6da52 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e152, 0x6e172 (delta 0x11df0)
  // Match at 0x6e672, 0x6e692 (delta 0x12310)
    { L"32BG.1.27.1", 0x6da32, 0x6da52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d212, 0x6d232 (delta 0x10950)
  // Match at 0x6d872, 0x6d892 (delta 0x10fb0)
  // Match at 0x6df92, 0x6dfb2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e2b2, 0x6e2d2 (delta 0x119f0)
    { L"32BG.1.27.2", 0x6df92, 0x6dfb2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.27.3", 0x6d4d2, 0x6d4f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x109b0!
  // Match at 0x6d692, 0x6d6b2 (delta 0x109b0)
  // Match at 0x6d772, 0x6d792 (delta 0x10a90)
  // Match at 0x6de92, 0x6deb2 (delta 0x111b0)
  // Match at 0x6e3b2, 0x6e3d2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.27.4", 0x6e3b2, 0x6e3d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d3f2, 0x6d412 (delta 0x11070)
  // Match at 0x6da52, 0x6da72 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e172, 0x6e192 (delta 0x11df0)
  // Match at 0x6e652, 0x6e672 (delta 0x122d0)
    { L"32BG.1.28.1", 0x6da52, 0x6da72, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d232, 0x6d252 (delta 0x10950)
  // Match at 0x6d892, 0x6d8b2 (delta 0x10fb0)
  // Match at 0x6dfb2, 0x6dfd2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e292, 0x6e2b2 (delta 0x119b0)
    { L"32BG.1.28.2", 0x6dfb2, 0x6dfd2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.28.3", 0x6d4f2, 0x6d512, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x109f0!
  // Match at 0x6d6b2, 0x6d6d2 (delta 0x109f0)
  // Match at 0x6d792, 0x6d7b2 (delta 0x10ad0)
  // Match at 0x6deb2, 0x6ded2 (delta 0x111f0)
  // Match at 0x6e392, 0x6e3b2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.28.4", 0x6e392, 0x6e3b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d412, 0x6d432 (delta 0x11070)
  // Match at 0x6da72, 0x6da92 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e192, 0x6e1b2 (delta 0x11df0)
  // Match at 0x6e632, 0x6e652 (delta 0x12290)
    { L"32BG.1.29.1", 0x6da72, 0x6da92, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d252, 0x6d272 (delta 0x10950)
  // Match at 0x6d8b2, 0x6d8d2 (delta 0x10fb0)
  // Match at 0x6dfd2, 0x6dff2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e272, 0x6e292 (delta 0x11970)
    { L"32BG.1.29.2", 0x6dfd2, 0x6dff2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.29.3", 0x6d512, 0x6d532, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10a30!
  // Match at 0x6d6d2, 0x6d6f2 (delta 0x10a30)
  // Match at 0x6d7b2, 0x6d7d2 (delta 0x10b10)
  // Match at 0x6ded2, 0x6def2 (delta 0x11230)
  // Match at 0x6e372, 0x6e392 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.29.4", 0x6e372, 0x6e392, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xf890!
  // Match at 0x6bc52, 0x6bc72 (delta 0xf890)
  // Match at 0x6d432, 0x6d452 (delta 0x11070)
  // Match at 0x6da92, 0x6dab2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e612, 0x6e632 (delta 0x12250)
    { L"32BG.1.30.1", 0x6da92, 0x6dab2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d272, 0x6d292 (delta 0x10950)
  // Match at 0x6d8d2, 0x6d8f2 (delta 0x10fb0)
  // Match at 0x6dff2, 0x6e012 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e252, 0x6e272 (delta 0x11930)
    { L"32BG.1.30.2", 0x6dff2, 0x6e012, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.30.3", 0x6d532, 0x6d552, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xeff0!
  // Match at 0x6bc72, 0x6bc92 (delta 0xeff0)
  // Match at 0x6d7d2, 0x6d7f2 (delta 0x10b50)
  // Match at 0x6def2, 0x6df12 (delta 0x11270)
  // Match at 0x6e352, 0x6e372 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.30.4", 0x6e352, 0x6e372, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d452, 0x6d472 (delta 0x11070)
  // Match at 0x6dab2, 0x6dad2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dc52, 0x6dc72 (delta 0x11870)
  // Match at 0x6e5f2, 0x6e612 (delta 0x12210)
    { L"32BG.1.31.1", 0x6dab2, 0x6dad2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d292, 0x6d2b2 (delta 0x10950)
  // Match at 0x6d8f2, 0x6d912 (delta 0x10fb0)
  // Match at 0x6e012, 0x6e032 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e232, 0x6e252 (delta 0x118f0)
    { L"32BG.1.31.2", 0x6e012, 0x6e032, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.31.3", 0x6d552, 0x6d572, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10530!
  // Match at 0x6d192, 0x6d1b2 (delta 0x10530)
  // Match at 0x6d7f2, 0x6d812 (delta 0x10b90)
  // Match at 0x6df12, 0x6df32 (delta 0x112b0)
  // Match at 0x6e332, 0x6e352 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.31.4", 0x6e332, 0x6e352, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d472, 0x6d492 (delta 0x11070)
  // Match at 0x6dad2, 0x6daf2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dc72, 0x6dc92 (delta 0x11870)
  // Match at 0x6e5d2, 0x6e5f2 (delta 0x121d0)
    { L"32BG.1.32.1", 0x6dad2, 0x6daf2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d2b2, 0x6d2d2 (delta 0x10950)
  // Match at 0x6d912, 0x6d932 (delta 0x10fb0)
  // Match at 0x6e032, 0x6e052 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e212, 0x6e232 (delta 0x118b0)
    { L"32BG.1.32.2", 0x6e032, 0x6e052, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.32.3", 0x6d572, 0x6d592, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10570!
  // Match at 0x6d1b2, 0x6d1d2 (delta 0x10570)
  // Match at 0x6d812, 0x6d832 (delta 0x10bd0)
  // Match at 0x6df32, 0x6df52 (delta 0x112f0)
  // Match at 0x6e312, 0x6e332 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.32.4", 0x6e312, 0x6e332, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d492, 0x6d4b2 (delta 0x11070)
  // Match at 0x6daf2, 0x6db12 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dc92, 0x6dcb2 (delta 0x11870)
  // Match at 0x6e5b2, 0x6e5d2 (delta 0x12190)
    { L"32BG.1.33.1", 0x6daf2, 0x6db12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d2d2, 0x6d2f2 (delta 0x10950)
  // Match at 0x6d932, 0x6d952 (delta 0x10fb0)
  // Match at 0x6e052, 0x6e072 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e1f2, 0x6e212 (delta 0x11870)
    { L"32BG.1.33.2", 0x6e052, 0x6e072, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.33.3", 0x6d592, 0x6d5b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x105b0!
  // Match at 0x6d1d2, 0x6d1f2 (delta 0x105b0)
  // Match at 0x6d832, 0x6d852 (delta 0x10c10)
  // Match at 0x6df52, 0x6df72 (delta 0x11330)
  // Match at 0x6e2f2, 0x6e312 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.33.4", 0x6e2f2, 0x6e312, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d4b2, 0x6d4d2 (delta 0x11070)
  // Match at 0x6db12, 0x6db32 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dcb2, 0x6dcd2 (delta 0x11870)
  // Match at 0x6e592, 0x6e5b2 (delta 0x12150)
    { L"32BG.1.34.1", 0x6db12, 0x6db32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d2f2, 0x6d312 (delta 0x10950)
  // Match at 0x6d952, 0x6d972 (delta 0x10fb0)
  // Match at 0x6e072, 0x6e092 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e1d2, 0x6e1f2 (delta 0x11830)
    { L"32BG.1.34.2", 0x6e072, 0x6e092, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.34.3", 0x6d5b2, 0x6d5d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x105f0!
  // Match at 0x6d1f2, 0x6d212 (delta 0x105f0)
  // Match at 0x6d852, 0x6d872 (delta 0x10c50)
  // Match at 0x6df72, 0x6df92 (delta 0x11370)
  // Match at 0x6e2d2, 0x6e2f2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.34.4", 0x6e2d2, 0x6e2f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d4d2, 0x6d4f2 (delta 0x11070)
  // Match at 0x6db32, 0x6db52 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dcd2, 0x6dcf2 (delta 0x11870)
  // Match at 0x6e572, 0x6e592 (delta 0x12110)
    { L"32BG.1.35.1", 0x6db32, 0x6db52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d312, 0x6d332 (delta 0x10950)
  // Match at 0x6d972, 0x6d992 (delta 0x10fb0)
  // Match at 0x6e092, 0x6e0b2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e1b2, 0x6e1d2 (delta 0x117f0)
    { L"32BG.1.35.2", 0x6e092, 0x6e0b2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.35.3", 0x6d5d2, 0x6d5f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10630!
  // Match at 0x6d212, 0x6d232 (delta 0x10630)
  // Match at 0x6d872, 0x6d892 (delta 0x10c90)
  // Match at 0x6df92, 0x6dfb2 (delta 0x113b0)
  // Match at 0x6e2b2, 0x6e2d2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.35.4", 0x6e2b2, 0x6e2d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d4f2, 0x6d512 (delta 0x11070)
  // Match at 0x6db52, 0x6db72 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dcf2, 0x6dd12 (delta 0x11870)
  // Match at 0x6e552, 0x6e572 (delta 0x120d0)
    { L"32BG.1.36.1", 0x6db52, 0x6db72, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xf2b0!
  // Match at 0x6bc92, 0x6bcb2 (delta 0xf2b0)
  // Match at 0x6d332, 0x6d352 (delta 0x10950)
  // Match at 0x6d992, 0x6d9b2 (delta 0x10fb0)
  // Match at 0x6e0b2, 0x6e0d2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.36.2", 0x6e0b2, 0x6e0d2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0xfd10!
  // Match at 0x6bc32, 0x6bc52 (delta 0xfd10)
  // Match at 0x6d5f2, 0x6d612 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6ddf2, 0x6de12 (delta 0x11ed0)
  // Match at 0x6e452, 0x6e472 (delta 0x12530)
    { L"32BG.1.36.3", 0x6d5f2, 0x6d612, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10670!
  // Match at 0x6d232, 0x6d252 (delta 0x10670)
  // Match at 0x6d892, 0x6d8b2 (delta 0x10cd0)
  // Match at 0x6dfb2, 0x6dfd2 (delta 0x113f0)
  // Match at 0x6e292, 0x6e2b2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.36.4", 0x6e292, 0x6e2b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d512, 0x6d532 (delta 0x11070)
  // Match at 0x6db72, 0x6db92 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dd12, 0x6dd32 (delta 0x11870)
  // Match at 0x6e532, 0x6e552 (delta 0x12090)
    { L"32BG.1.37.1", 0x6db72, 0x6db92, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d352, 0x6d372 (delta 0x10950)
  // Match at 0x6d9b2, 0x6d9d2 (delta 0x10fb0)
  // Match at 0x6e0d2, 0x6e0f2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e6f2, 0x6e712 (delta 0x11cf0)
    { L"32BG.1.37.2", 0x6e0d2, 0x6e0f2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.37.3", 0x6d612, 0x6d632, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x106b0!
  // Match at 0x6d252, 0x6d272 (delta 0x106b0)
  // Match at 0x6d8b2, 0x6d8d2 (delta 0x10d10)
  // Match at 0x6dfd2, 0x6dff2 (delta 0x11430)
  // Match at 0x6e272, 0x6e292 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.37.4", 0x6e272, 0x6e292, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d532, 0x6d552 (delta 0x11070)
  // Match at 0x6db92, 0x6dbb2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dd32, 0x6dd52 (delta 0x11870)
  // Match at 0x6e512, 0x6e532 (delta 0x12050)
    { L"32BG.1.38.1", 0x6db92, 0x6dbb2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d372, 0x6d392 (delta 0x10950)
  // Match at 0x6d9d2, 0x6d9f2 (delta 0x10fb0)
  // Match at 0x6e0f2, 0x6e112 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e6d2, 0x6e6f2 (delta 0x11cb0)
    { L"32BG.1.38.2", 0x6e0f2, 0x6e112, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.38.3", 0x6d632, 0x6d652, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x106f0!
  // Match at 0x6d272, 0x6d292 (delta 0x106f0)
  // Match at 0x6d8d2, 0x6d8f2 (delta 0x10d50)
  // Match at 0x6dff2, 0x6e012 (delta 0x11470)
  // Match at 0x6e252, 0x6e272 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.38.4", 0x6e252, 0x6e272, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d552, 0x6d572 (delta 0x11070)
  // Match at 0x6dbb2, 0x6dbd2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dd52, 0x6dd72 (delta 0x11870)
  // Match at 0x6e4f2, 0x6e512 (delta 0x12010)
    { L"32BG.1.39.1", 0x6dbb2, 0x6dbd2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d392, 0x6d3b2 (delta 0x10950)
  // Match at 0x6d9f2, 0x6da12 (delta 0x10fb0)
  // Match at 0x6e112, 0x6e132 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e6b2, 0x6e6d2 (delta 0x11c70)
    { L"32BG.1.39.2", 0x6e112, 0x6e132, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.39.3", 0x6d652, 0x6d672, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10730!
  // Match at 0x6d292, 0x6d2b2 (delta 0x10730)
  // Match at 0x6d8f2, 0x6d912 (delta 0x10d90)
  // Match at 0x6e012, 0x6e032 (delta 0x114b0)
  // Match at 0x6e232, 0x6e252 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.39.4", 0x6e232, 0x6e252, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d572, 0x6d592 (delta 0x11070)
  // Match at 0x6dbd2, 0x6dbf2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dd72, 0x6dd92 (delta 0x11870)
  // Match at 0x6e4d2, 0x6e4f2 (delta 0x11fd0)
    { L"32BG.1.40.1", 0x6dbd2, 0x6dbf2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d3b2, 0x6d3d2 (delta 0x10950)
  // Match at 0x6da12, 0x6da32 (delta 0x10fb0)
  // Match at 0x6e132, 0x6e152 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e692, 0x6e6b2 (delta 0x11c30)
    { L"32BG.1.40.2", 0x6e132, 0x6e152, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.40.3", 0x6d672, 0x6d692, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10770!
  // Match at 0x6d2b2, 0x6d2d2 (delta 0x10770)
  // Match at 0x6d912, 0x6d932 (delta 0x10dd0)
  // Match at 0x6e032, 0x6e052 (delta 0x114f0)
  // Match at 0x6e212, 0x6e232 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.40.4", 0x6e212, 0x6e232, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d592, 0x6d5b2 (delta 0x11070)
  // Match at 0x6dbf2, 0x6dc12 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6dd92, 0x6ddb2 (delta 0x11870)
  // Match at 0x6e4b2, 0x6e4d2 (delta 0x11f90)
    { L"32BG.1.41.1", 0x6dbf2, 0x6dc12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d3d2, 0x6d3f2 (delta 0x10950)
  // Match at 0x6da32, 0x6da52 (delta 0x10fb0)
  // Match at 0x6e152, 0x6e172 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e672, 0x6e692 (delta 0x11bf0)
    { L"32BG.1.41.2", 0x6e152, 0x6e172, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.41.3", 0x6d692, 0x6d6b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x107b0!
  // Match at 0x6d2d2, 0x6d2f2 (delta 0x107b0)
  // Match at 0x6d932, 0x6d952 (delta 0x10e10)
  // Match at 0x6e052, 0x6e072 (delta 0x11530)
  // Match at 0x6e1f2, 0x6e212 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.41.4", 0x6e1f2, 0x6e212, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d5b2, 0x6d5d2 (delta 0x11070)
  // Match at 0x6dc12, 0x6dc32 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6ddb2, 0x6ddd2 (delta 0x11870)
  // Match at 0x6e492, 0x6e4b2 (delta 0x11f50)
    { L"32BG.1.42.1", 0x6dc12, 0x6dc32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d3f2, 0x6d412 (delta 0x10950)
  // Match at 0x6da52, 0x6da72 (delta 0x10fb0)
  // Match at 0x6e172, 0x6e192 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e652, 0x6e672 (delta 0x11bb0)
    { L"32BG.1.42.2", 0x6e172, 0x6e192, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.42.3", 0x6d6b2, 0x6d6d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x107f0!
  // Match at 0x6d2f2, 0x6d312 (delta 0x107f0)
  // Match at 0x6d952, 0x6d972 (delta 0x10e50)
  // Match at 0x6e072, 0x6e092 (delta 0x11570)
  // Match at 0x6e1d2, 0x6e1f2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.42.4", 0x6e1d2, 0x6e1f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x11070!
  // Match at 0x6d5d2, 0x6d5f2 (delta 0x11070)
  // Match at 0x6dc32, 0x6dc52 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6ddd2, 0x6ddf2 (delta 0x11870)
  // Match at 0x6e472, 0x6e492 (delta 0x11f10)
    { L"32BG.1.43.1", 0x6dc32, 0x6dc52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10950!
  // Match at 0x6d412, 0x6d432 (delta 0x10950)
  // Match at 0x6da72, 0x6da92 (delta 0x10fb0)
  // Match at 0x6e192, 0x6e1b2 (delta 0x116d0) <-- swapped to use this one
  // Match at 0x6e632, 0x6e652 (delta 0x11b70)
    { L"32BG.1.43.2", 0x6e192, 0x6e1b2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x116d0 */
    { L"32BG.1.43.3", 0x6d6d2, 0x6d6f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x10830!
  // Match at 0x6d312, 0x6d332 (delta 0x10830)
  // Match at 0x6d972, 0x6d992 (delta 0x10e90)
  // Match at 0x6e092, 0x6e0b2 (delta 0x115b0)
  // Match at 0x6e1b2, 0x6e1d2 (delta 0x116d0) <-- swapped to use this one
    { L"32BG.1.43.4", 0x6e1b2, 0x6e1d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x116d0 */
// Warning: the remapped delta shifts from 0x116d0 to 0x176f0!
  // Match at 0x38c5a, 0x38c7a (delta 0x176f0)
  // Match at 0x3a8ba, 0x3a8da (delta 0x19350)
    { L"SS.1.1.1", 0x38c5a, 0x38c7a, indexCPS2Sprites_VSAV1_Stages, 0x9c }, /* Delta: 0x176f0 */
    { L"SS.1.2.1", 0x38c7a, 0x38c9a, indexCPS2Sprites_VSAV1_Stages, 0x9c }, /* Delta: 0x176f0 */
    { L"SS.1.3.1", 0x38c9a, 0x38cba, indexCPS2Sprites_VSAV1_Stages, 0x9c }, /* Delta: 0x176f0 */
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_IRONHORSE_EX[] =
{
    { L"32BG.0.0.0", 0x72e92, 0x72f12, indexCPS2Sprites_VSAV1_Stages, 0x93, &pairFullyLinkedNode },
 // Warning: the remapped delta shifts here from 0x11ad0 to 0x16ad0
    { L"8BG.0.0.0", 0x54082, 0x54242, indexCPS2Sprites_VSAV1_Stages, 0x9a },
 // Warning: the remapped delta shifts here from 0x16ad0 to 0x13ad0
    { L"16BG.0.0.1", 0x619ca, 0x61bca, indexCPS2Sprites_VSAV1_Stages, 0x98 },
    { L"16BG.0.0.2", 0x61bca, 0x61dca, indexCPS2Sprites_VSAV1_Stages, 0x99 },
 // Warning: the remapped delta shifts here from 0x13ad0 to 0x176f0
    { L"SS.0.0.0", 0x39b5a, 0x39c9a, indexCPS2Sprites_VSAV1_Stages, 0x9b },
 };

const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_IRONHORSE_EX_PARTS[] =
{
  // Match at 0x74872, 0x74892 (delta 0x119f0)
  // Match at 0x74952, 0x74972 (delta 0x11ad0) <-- hand swapped to this
  // Match at 0x75072, 0x75092 (delta 0x121f0)
  // Match at 0x75692, 0x756b2 (delta 0x12810)
    { L"32BG.1.1.1", 0x74952, 0x74972, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x119f0 to 0xfad0!
  // Match at 0x72eb2, 0x72ed2 (delta 0xfad0)
  // Match at 0x746b2, 0x746d2 (delta 0x112d0)
  // Match at 0x74d12, 0x74d32 (delta 0x11930)
  // Match at 0x74eb2, 0x74ed2 (delta 0x11ad0) <-- hand swapped to this
  // Match at 0x75852, 0x75872 (delta 0x12470)
    { L"32BG.1.1.2", 0x74eb2, 0x74ed2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0xfad0 to 0x11ad0!
  // Match at 0x743f2, 0x74412 (delta 0x11ad0) <-- correct
  // Match at 0x74a52, 0x74a72 (delta 0x12130)
  // Match at 0x75172, 0x75192 (delta 0x12850)
  // Match at 0x75592, 0x755b2 (delta 0x12c70)
    { L"32BG.1.1.3", 0x743f2, 0x74412, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xf070!
  // Match at 0x72ef2, 0x72f12 (delta 0xf070)
  // Match at 0x745b2, 0x745d2 (delta 0x10730)
  // Match at 0x74c12, 0x74c32 (delta 0x10d90)
  // Match at 0x75332, 0x75352 (delta 0x114b0)
  // Match at 0x75952, 0x75972 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.1.4", 0x75952, 0x75972, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x119f0!
  // Match at 0x74892, 0x748b2 (delta 0x119f0)
  // Match at 0x74972, 0x74992 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75092, 0x750b2 (delta 0x121f0)
  // Match at 0x75672, 0x75692 (delta 0x127d0)
    { L"32BG.1.2.1", 0x74972, 0x74992, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x746d2, 0x746f2 (delta 0x112d0)
  // Match at 0x74d32, 0x74d52 (delta 0x11930)
  // Match at 0x74ed2, 0x74ef2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75832, 0x75852 (delta 0x12430)
    { L"32BG.1.2.2", 0x74ed2, 0x74ef2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.2.3", 0x74412, 0x74432, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10770!
  // Match at 0x745d2, 0x745f2 (delta 0x10770)
  // Match at 0x74c32, 0x74c52 (delta 0x10dd0)
  // Match at 0x75352, 0x75372 (delta 0x114f0)
  // Match at 0x75932, 0x75952 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.2.4", 0x75932, 0x75952, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x119f0!
  // Match at 0x748b2, 0x748d2 (delta 0x119f0)
  // Match at 0x74992, 0x749b2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x750b2, 0x750d2 (delta 0x121f0)
  // Match at 0x75652, 0x75672 (delta 0x12790)
    { L"32BG.1.3.1", 0x74992, 0x749b2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x746f2, 0x74712 (delta 0x112d0)
  // Match at 0x74d52, 0x74d72 (delta 0x11930)
  // Match at 0x74ef2, 0x74f12 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75812, 0x75832 (delta 0x123f0)
    { L"32BG.1.3.2", 0x74ef2, 0x74f12, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.3.3", 0x74432, 0x74452, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x107b0!
  // Match at 0x745f2, 0x74612 (delta 0x107b0)
  // Match at 0x74c52, 0x74c72 (delta 0x10e10)
  // Match at 0x75372, 0x75392 (delta 0x11530)
  // Match at 0x75912, 0x75932 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.3.4", 0x75912, 0x75932, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x119f0!
  // Match at 0x748d2, 0x748f2 (delta 0x119f0)
  // Match at 0x749b2, 0x749d2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x750d2, 0x750f2 (delta 0x121f0)
  // Match at 0x75632, 0x75652 (delta 0x12750)
    { L"32BG.1.4.1", 0x749b2, 0x749d2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74712, 0x74732 (delta 0x112d0)
  // Match at 0x74d72, 0x74d92 (delta 0x11930)
  // Match at 0x74f12, 0x74f32 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x757f2, 0x75812 (delta 0x123b0)
    { L"32BG.1.4.2", 0x74f12, 0x74f32, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.4.3", 0x74452, 0x74472, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x107f0!
  // Match at 0x74612, 0x74632 (delta 0x107f0)
  // Match at 0x74c72, 0x74c92 (delta 0x10e50)
  // Match at 0x75392, 0x753b2 (delta 0x11570)
  // Match at 0x758f2, 0x75912 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.4.4", 0x758f2, 0x75912, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x119f0!
  // Match at 0x748f2, 0x74912 (delta 0x119f0)
  // Match at 0x749d2, 0x749f2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x750f2, 0x75112 (delta 0x121f0)
  // Match at 0x75612, 0x75632 (delta 0x12710)
    { L"32BG.1.5.1", 0x749d2, 0x749f2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74732, 0x74752 (delta 0x112d0)
  // Match at 0x74d92, 0x74db2 (delta 0x11930)
  // Match at 0x74f32, 0x74f52 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x757d2, 0x757f2 (delta 0x12370)
    { L"32BG.1.5.2", 0x74f32, 0x74f52, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.5.3", 0x74472, 0x74492, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10830!
  // Match at 0x74632, 0x74652 (delta 0x10830)
  // Match at 0x74c92, 0x74cb2 (delta 0x10e90)
  // Match at 0x753b2, 0x753d2 (delta 0x115b0)
  // Match at 0x758d2, 0x758f2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.5.4", 0x758d2, 0x758f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x119f0!
  // Match at 0x74912, 0x74932 (delta 0x119f0)
  // Match at 0x749f2, 0x74a12 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75112, 0x75132 (delta 0x121f0)
  // Match at 0x755f2, 0x75612 (delta 0x126d0)
    { L"32BG.1.6.1", 0x749f2, 0x74a12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74752, 0x74772 (delta 0x112d0)
  // Match at 0x74db2, 0x74dd2 (delta 0x11930)
  // Match at 0x74f52, 0x74f72 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x757b2, 0x757d2 (delta 0x12330)
    { L"32BG.1.6.2", 0x74f52, 0x74f72, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.6.3", 0x74492, 0x744b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10870!
  // Match at 0x74652, 0x74672 (delta 0x10870)
  // Match at 0x74cb2, 0x74cd2 (delta 0x10ed0)
  // Match at 0x753d2, 0x753f2 (delta 0x115f0)
  // Match at 0x758b2, 0x758d2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.6.4", 0x758b2, 0x758d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x119f0!
  // Match at 0x74932, 0x74952 (delta 0x119f0)
  // Match at 0x74a12, 0x74a32 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75132, 0x75152 (delta 0x121f0)
  // Match at 0x755d2, 0x755f2 (delta 0x12690)
    { L"32BG.1.7.1", 0x74a12, 0x74a32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74772, 0x74792 (delta 0x112d0)
  // Match at 0x74dd2, 0x74df2 (delta 0x11930)
  // Match at 0x74f72, 0x74f92 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75792, 0x757b2 (delta 0x122f0)
    { L"32BG.1.7.2", 0x74f72, 0x74f92, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.7.3", 0x744b2, 0x744d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x108b0!
  // Match at 0x74672, 0x74692 (delta 0x108b0)
  // Match at 0x74cd2, 0x74cf2 (delta 0x10f10)
  // Match at 0x753f2, 0x75412 (delta 0x11630)
  // Match at 0x75892, 0x758b2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.7.4", 0x75892, 0x758b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xff70!
  // Match at 0x72ed2, 0x72ef2 (delta 0xff70)
  // Match at 0x74a32, 0x74a52 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75152, 0x75172 (delta 0x121f0)
  // Match at 0x755b2, 0x755d2 (delta 0x12650)
    { L"32BG.1.8.1", 0x74a32, 0x74a52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74792, 0x747b2 (delta 0x112d0)
  // Match at 0x74df2, 0x74e12 (delta 0x11930)
  // Match at 0x74f92, 0x74fb2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75772, 0x75792 (delta 0x122b0)
    { L"32BG.1.8.2", 0x74f92, 0x74fb2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.8.3", 0x744d2, 0x744f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x108f0!
  // Match at 0x74692, 0x746b2 (delta 0x108f0)
  // Match at 0x74cf2, 0x74d12 (delta 0x10f50)
  // Match at 0x75872, 0x75892 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.8.4", 0x75872, 0x75892, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x743f2, 0x74412 (delta 0x11470)
  // Match at 0x74a52, 0x74a72 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75172, 0x75192 (delta 0x121f0)
  // Match at 0x75592, 0x755b2 (delta 0x12610)
    { L"32BG.1.9.1", 0x74a52, 0x74a72, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x747b2, 0x747d2 (delta 0x112d0)
  // Match at 0x74e12, 0x74e32 (delta 0x11930)
  // Match at 0x74fb2, 0x74fd2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75752, 0x75772 (delta 0x12270)
    { L"32BG.1.9.2", 0x74fb2, 0x74fd2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.9.3", 0x744f2, 0x74512, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xf130!
  // Match at 0x72eb2, 0x72ed2 (delta 0xf130)
  // Match at 0x746b2, 0x746d2 (delta 0x10930)
  // Match at 0x74d12, 0x74d32 (delta 0x10f90)
  // Match at 0x74eb2, 0x74ed2 (delta 0x11130)
  // Match at 0x75852, 0x75872 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.9.4", 0x75852, 0x75872, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74412, 0x74432 (delta 0x11470)
  // Match at 0x74a72, 0x74a92 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75192, 0x751b2 (delta 0x121f0)
  // Match at 0x75572, 0x75592 (delta 0x125d0)
    { L"32BG.1.10.1", 0x74a72, 0x74a92, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x747d2, 0x747f2 (delta 0x112d0)
  // Match at 0x74e32, 0x74e52 (delta 0x11930)
  // Match at 0x74fd2, 0x74ff2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75732, 0x75752 (delta 0x12230)
    { L"32BG.1.10.2", 0x74fd2, 0x74ff2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.10.3", 0x74512, 0x74532, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10970!
  // Match at 0x746d2, 0x746f2 (delta 0x10970)
  // Match at 0x74d32, 0x74d52 (delta 0x10fd0)
  // Match at 0x74ed2, 0x74ef2 (delta 0x11170)
  // Match at 0x75832, 0x75852 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.10.4", 0x75832, 0x75852, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74432, 0x74452 (delta 0x11470)
  // Match at 0x74a92, 0x74ab2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x751b2, 0x751d2 (delta 0x121f0)
  // Match at 0x75552, 0x75572 (delta 0x12590)
    { L"32BG.1.11.1", 0x74a92, 0x74ab2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x747f2, 0x74812 (delta 0x112d0)
  // Match at 0x74e52, 0x74e72 (delta 0x11930)
  // Match at 0x74ff2, 0x75012 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75712, 0x75732 (delta 0x121f0)
    { L"32BG.1.11.2", 0x74ff2, 0x75012, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.11.3", 0x74532, 0x74552, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x109b0!
  // Match at 0x746f2, 0x74712 (delta 0x109b0)
  // Match at 0x74d52, 0x74d72 (delta 0x11010)
  // Match at 0x74ef2, 0x74f12 (delta 0x111b0)
  // Match at 0x75812, 0x75832 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.11.4", 0x75812, 0x75832, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74452, 0x74472 (delta 0x11470)
  // Match at 0x74ab2, 0x74ad2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x751d2, 0x751f2 (delta 0x121f0)
  // Match at 0x75532, 0x75552 (delta 0x12550)
    { L"32BG.1.12.1", 0x74ab2, 0x74ad2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74812, 0x74832 (delta 0x112d0)
  // Match at 0x74e72, 0x74e92 (delta 0x11930)
  // Match at 0x75012, 0x75032 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x756f2, 0x75712 (delta 0x121b0)
    { L"32BG.1.12.2", 0x75012, 0x75032, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.12.3", 0x74552, 0x74572, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x109f0!
  // Match at 0x74712, 0x74732 (delta 0x109f0)
  // Match at 0x74d72, 0x74d92 (delta 0x11050)
  // Match at 0x74f12, 0x74f32 (delta 0x111f0)
  // Match at 0x757f2, 0x75812 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.12.4", 0x757f2, 0x75812, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74472, 0x74492 (delta 0x11470)
  // Match at 0x74ad2, 0x74af2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x751f2, 0x75212 (delta 0x121f0)
  // Match at 0x75512, 0x75532 (delta 0x12510)
    { L"32BG.1.13.1", 0x74ad2, 0x74af2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74832, 0x74852 (delta 0x112d0)
  // Match at 0x74e92, 0x74eb2 (delta 0x11930)
  // Match at 0x75032, 0x75052 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x756d2, 0x756f2 (delta 0x12170)
    { L"32BG.1.13.2", 0x75032, 0x75052, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.13.3", 0x74572, 0x74592, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10a30!
  // Match at 0x74732, 0x74752 (delta 0x10a30)
  // Match at 0x74d92, 0x74db2 (delta 0x11090)
  // Match at 0x74f32, 0x74f52 (delta 0x11230)
  // Match at 0x757d2, 0x757f2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.13.4", 0x757d2, 0x757f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74492, 0x744b2 (delta 0x11470)
  // Match at 0x74af2, 0x74b12 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75212, 0x75232 (delta 0x121f0)
  // Match at 0x754f2, 0x75512 (delta 0x124d0)
    { L"32BG.1.14.1", 0x74af2, 0x74b12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xf910!
  // Match at 0x72e92, 0x72eb2 (delta 0xf910)
  // Match at 0x74852, 0x74872 (delta 0x112d0)
  // Match at 0x75052, 0x75072 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x756b2, 0x756d2 (delta 0x12130)
    { L"32BG.1.14.2", 0x75052, 0x75072, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.14.3", 0x74592, 0x745b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10a70!
  // Match at 0x74752, 0x74772 (delta 0x10a70)
  // Match at 0x74db2, 0x74dd2 (delta 0x110d0)
  // Match at 0x74f52, 0x74f72 (delta 0x11270)
  // Match at 0x757b2, 0x757d2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.14.4", 0x757b2, 0x757d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x744b2, 0x744d2 (delta 0x11470)
  // Match at 0x74b12, 0x74b32 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75232, 0x75252 (delta 0x121f0)
  // Match at 0x754d2, 0x754f2 (delta 0x12490)
    { L"32BG.1.15.1", 0x74b12, 0x74b32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74872, 0x74892 (delta 0x112d0)
  // Match at 0x74952, 0x74972 (delta 0x113b0)
  // Match at 0x75072, 0x75092 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75692, 0x756b2 (delta 0x120f0)
    { L"32BG.1.15.2", 0x75072, 0x75092, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10410!
  // Match at 0x72ef2, 0x72f12 (delta 0x10410)
  // Match at 0x745b2, 0x745d2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74c12, 0x74c32 (delta 0x12130)
  // Match at 0x75332, 0x75352 (delta 0x12850)
  // Match at 0x75952, 0x75972 (delta 0x12e70)
    { L"32BG.1.15.3", 0x745b2, 0x745d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10ab0!
  // Match at 0x74772, 0x74792 (delta 0x10ab0)
  // Match at 0x74dd2, 0x74df2 (delta 0x11110)
  // Match at 0x74f72, 0x74f92 (delta 0x112b0)
  // Match at 0x75792, 0x757b2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.15.4", 0x75792, 0x757b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x744d2, 0x744f2 (delta 0x11470)
  // Match at 0x74b32, 0x74b52 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75252, 0x75272 (delta 0x121f0)
  // Match at 0x754b2, 0x754d2 (delta 0x12450)
    { L"32BG.1.16.1", 0x74b32, 0x74b52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74892, 0x748b2 (delta 0x112d0)
  // Match at 0x74972, 0x74992 (delta 0x113b0)
  // Match at 0x75092, 0x750b2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75672, 0x75692 (delta 0x120b0)
    { L"32BG.1.16.2", 0x75092, 0x750b2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.16.3", 0x745d2, 0x745f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10af0!
  // Match at 0x74792, 0x747b2 (delta 0x10af0)
  // Match at 0x74df2, 0x74e12 (delta 0x11150)
  // Match at 0x74f92, 0x74fb2 (delta 0x112f0)
  // Match at 0x75772, 0x75792 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.16.4", 0x75772, 0x75792, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x744f2, 0x74512 (delta 0x11470)
  // Match at 0x74b52, 0x74b72 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75272, 0x75292 (delta 0x121f0)
  // Match at 0x75492, 0x754b2 (delta 0x12410)
    { L"32BG.1.17.1", 0x74b52, 0x74b72, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x748b2, 0x748d2 (delta 0x112d0)
  // Match at 0x74992, 0x749b2 (delta 0x113b0)
  // Match at 0x750b2, 0x750d2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75652, 0x75672 (delta 0x12070)
    { L"32BG.1.17.2", 0x750b2, 0x750d2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.17.3", 0x745f2, 0x74612, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10b30!
  // Match at 0x747b2, 0x747d2 (delta 0x10b30)
  // Match at 0x74e12, 0x74e32 (delta 0x11190)
  // Match at 0x74fb2, 0x74fd2 (delta 0x11330)
  // Match at 0x75752, 0x75772 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.17.4", 0x75752, 0x75772, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74512, 0x74532 (delta 0x11470)
  // Match at 0x74b72, 0x74b92 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75292, 0x752b2 (delta 0x121f0)
  // Match at 0x75472, 0x75492 (delta 0x123d0)
    { L"32BG.1.18.1", 0x74b72, 0x74b92, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x748d2, 0x748f2 (delta 0x112d0)
  // Match at 0x749b2, 0x749d2 (delta 0x113b0)
  // Match at 0x750d2, 0x750f2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75632, 0x75652 (delta 0x12030)
    { L"32BG.1.18.2", 0x750d2, 0x750f2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.18.3", 0x74612, 0x74632, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10b70!
  // Match at 0x747d2, 0x747f2 (delta 0x10b70)
  // Match at 0x74e32, 0x74e52 (delta 0x111d0)
  // Match at 0x74fd2, 0x74ff2 (delta 0x11370)
  // Match at 0x75732, 0x75752 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.18.4", 0x75732, 0x75752, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74532, 0x74552 (delta 0x11470)
  // Match at 0x74b92, 0x74bb2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x752b2, 0x752d2 (delta 0x121f0)
  // Match at 0x75452, 0x75472 (delta 0x12390)
    { L"32BG.1.19.1", 0x74b92, 0x74bb2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x748f2, 0x74912 (delta 0x112d0)
  // Match at 0x749d2, 0x749f2 (delta 0x113b0)
  // Match at 0x750f2, 0x75112 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75612, 0x75632 (delta 0x11ff0)
    { L"32BG.1.19.2", 0x750f2, 0x75112, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.19.3", 0x74632, 0x74652, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10bb0!
  // Match at 0x747f2, 0x74812 (delta 0x10bb0)
  // Match at 0x74e52, 0x74e72 (delta 0x11210)
  // Match at 0x74ff2, 0x75012 (delta 0x113b0)
  // Match at 0x75712, 0x75732 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.19.4", 0x75712, 0x75732, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74552, 0x74572 (delta 0x11470)
  // Match at 0x74bb2, 0x74bd2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x752d2, 0x752f2 (delta 0x121f0)
  // Match at 0x75432, 0x75452 (delta 0x12350)
    { L"32BG.1.20.1", 0x74bb2, 0x74bd2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74912, 0x74932 (delta 0x112d0)
  // Match at 0x749f2, 0x74a12 (delta 0x113b0)
  // Match at 0x75112, 0x75132 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x755f2, 0x75612 (delta 0x11fb0)
    { L"32BG.1.20.2", 0x75112, 0x75132, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.20.3", 0x74652, 0x74672, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10bf0!
  // Match at 0x74812, 0x74832 (delta 0x10bf0)
  // Match at 0x74e72, 0x74e92 (delta 0x11250)
  // Match at 0x75012, 0x75032 (delta 0x113f0)
  // Match at 0x756f2, 0x75712 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.20.4", 0x756f2, 0x75712, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74572, 0x74592 (delta 0x11470)
  // Match at 0x74bd2, 0x74bf2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x752f2, 0x75312 (delta 0x121f0)
  // Match at 0x75412, 0x75432 (delta 0x12310)
    { L"32BG.1.21.1", 0x74bd2, 0x74bf2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x112d0!
  // Match at 0x74932, 0x74952 (delta 0x112d0)
  // Match at 0x74a12, 0x74a32 (delta 0x113b0)
  // Match at 0x75132, 0x75152 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x755d2, 0x755f2 (delta 0x11f70)
    { L"32BG.1.21.2", 0x75132, 0x75152, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.21.3", 0x74672, 0x74692, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10c30!
  // Match at 0x74832, 0x74852 (delta 0x10c30)
  // Match at 0x74e92, 0x74eb2 (delta 0x11290)
  // Match at 0x75032, 0x75052 (delta 0x11430)
  // Match at 0x756d2, 0x756f2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.21.4", 0x756d2, 0x756f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74592, 0x745b2 (delta 0x11470)
  // Match at 0x74bf2, 0x74c12 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75312, 0x75332 (delta 0x121f0)
    { L"32BG.1.22.1", 0x74bf2, 0x74c12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xf850!
  // Match at 0x72ed2, 0x72ef2 (delta 0xf850)
  // Match at 0x74a32, 0x74a52 (delta 0x113b0)
  // Match at 0x75152, 0x75172 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x755b2, 0x755d2 (delta 0x11f30)
    { L"32BG.1.22.2", 0x75152, 0x75172, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.22.3", 0x74692, 0x746b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xf2b0!
  // Match at 0x72e92, 0x72eb2 (delta 0xf2b0)
  // Match at 0x74852, 0x74872 (delta 0x10c70)
  // Match at 0x75052, 0x75072 (delta 0x11470)
  // Match at 0x756b2, 0x756d2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.22.4", 0x756b2, 0x756d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xfdb0!
  // Match at 0x72ef2, 0x72f12 (delta 0xfdb0)
  // Match at 0x745b2, 0x745d2 (delta 0x11470)
  // Match at 0x74c12, 0x74c32 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75332, 0x75352 (delta 0x121f0)
  // Match at 0x75952, 0x75972 (delta 0x12810)
    { L"32BG.1.23.1", 0x74c12, 0x74c32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x743f2, 0x74412 (delta 0x10d50)
  // Match at 0x74a52, 0x74a72 (delta 0x113b0)
  // Match at 0x75172, 0x75192 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75592, 0x755b2 (delta 0x11ef0)
    { L"32BG.1.23.2", 0x75172, 0x75192, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x102d0!
  // Match at 0x72eb2, 0x72ed2 (delta 0x102d0)
  // Match at 0x746b2, 0x746d2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74d12, 0x74d32 (delta 0x12130)
  // Match at 0x74eb2, 0x74ed2 (delta 0x122d0)
  // Match at 0x75852, 0x75872 (delta 0x12c70)
    { L"32BG.1.23.3", 0x746b2, 0x746d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10cb0!
  // Match at 0x74872, 0x74892 (delta 0x10cb0)
  // Match at 0x74952, 0x74972 (delta 0x10d90)
  // Match at 0x75072, 0x75092 (delta 0x114b0)
  // Match at 0x75692, 0x756b2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.23.4", 0x75692, 0x756b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x745d2, 0x745f2 (delta 0x11470)
  // Match at 0x74c32, 0x74c52 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75352, 0x75372 (delta 0x121f0)
  // Match at 0x75932, 0x75952 (delta 0x127d0)
    { L"32BG.1.24.1", 0x74c32, 0x74c52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74412, 0x74432 (delta 0x10d50)
  // Match at 0x74a72, 0x74a92 (delta 0x113b0)
  // Match at 0x75192, 0x751b2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75572, 0x75592 (delta 0x11eb0)
    { L"32BG.1.24.2", 0x75192, 0x751b2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.24.3", 0x746d2, 0x746f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10cf0!
  // Match at 0x74892, 0x748b2 (delta 0x10cf0)
  // Match at 0x74972, 0x74992 (delta 0x10dd0)
  // Match at 0x75092, 0x750b2 (delta 0x114f0)
  // Match at 0x75672, 0x75692 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.24.4", 0x75672, 0x75692, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x745f2, 0x74612 (delta 0x11470)
  // Match at 0x74c52, 0x74c72 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75372, 0x75392 (delta 0x121f0)
  // Match at 0x75912, 0x75932 (delta 0x12790)
    { L"32BG.1.25.1", 0x74c52, 0x74c72, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74432, 0x74452 (delta 0x10d50)
  // Match at 0x74a92, 0x74ab2 (delta 0x113b0)
  // Match at 0x751b2, 0x751d2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75552, 0x75572 (delta 0x11e70)
    { L"32BG.1.25.2", 0x751b2, 0x751d2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.25.3", 0x746f2, 0x74712, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d30!
  // Match at 0x748b2, 0x748d2 (delta 0x10d30)
  // Match at 0x74992, 0x749b2 (delta 0x10e10)
  // Match at 0x750b2, 0x750d2 (delta 0x11530)
  // Match at 0x75652, 0x75672 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.25.4", 0x75652, 0x75672, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74612, 0x74632 (delta 0x11470)
  // Match at 0x74c72, 0x74c92 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75392, 0x753b2 (delta 0x121f0)
  // Match at 0x758f2, 0x75912 (delta 0x12750)
    { L"32BG.1.26.1", 0x74c72, 0x74c92, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74452, 0x74472 (delta 0x10d50)
  // Match at 0x74ab2, 0x74ad2 (delta 0x113b0)
  // Match at 0x751d2, 0x751f2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75532, 0x75552 (delta 0x11e30)
    { L"32BG.1.26.2", 0x751d2, 0x751f2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.26.3", 0x74712, 0x74732, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d70!
  // Match at 0x748d2, 0x748f2 (delta 0x10d70)
  // Match at 0x749b2, 0x749d2 (delta 0x10e50)
  // Match at 0x750d2, 0x750f2 (delta 0x11570)
  // Match at 0x75632, 0x75652 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.26.4", 0x75632, 0x75652, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74632, 0x74652 (delta 0x11470)
  // Match at 0x74c92, 0x74cb2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x753b2, 0x753d2 (delta 0x121f0)
  // Match at 0x758d2, 0x758f2 (delta 0x12710)
    { L"32BG.1.27.1", 0x74c92, 0x74cb2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74472, 0x74492 (delta 0x10d50)
  // Match at 0x74ad2, 0x74af2 (delta 0x113b0)
  // Match at 0x751f2, 0x75212 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75512, 0x75532 (delta 0x11df0)
    { L"32BG.1.27.2", 0x751f2, 0x75212, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.27.3", 0x74732, 0x74752, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10db0!
  // Match at 0x748f2, 0x74912 (delta 0x10db0)
  // Match at 0x749d2, 0x749f2 (delta 0x10e90)
  // Match at 0x750f2, 0x75112 (delta 0x115b0)
  // Match at 0x75612, 0x75632 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.27.4", 0x75612, 0x75632, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74652, 0x74672 (delta 0x11470)
  // Match at 0x74cb2, 0x74cd2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x753d2, 0x753f2 (delta 0x121f0)
  // Match at 0x758b2, 0x758d2 (delta 0x126d0)
    { L"32BG.1.28.1", 0x74cb2, 0x74cd2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74492, 0x744b2 (delta 0x10d50)
  // Match at 0x74af2, 0x74b12 (delta 0x113b0)
  // Match at 0x75212, 0x75232 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x754f2, 0x75512 (delta 0x11db0)
    { L"32BG.1.28.2", 0x75212, 0x75232, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.28.3", 0x74752, 0x74772, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10df0!
  // Match at 0x74912, 0x74932 (delta 0x10df0)
  // Match at 0x749f2, 0x74a12 (delta 0x10ed0)
  // Match at 0x75112, 0x75132 (delta 0x115f0)
  // Match at 0x755f2, 0x75612 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.28.4", 0x755f2, 0x75612, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74672, 0x74692 (delta 0x11470)
  // Match at 0x74cd2, 0x74cf2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x753f2, 0x75412 (delta 0x121f0)
  // Match at 0x75892, 0x758b2 (delta 0x12690)
    { L"32BG.1.29.1", 0x74cd2, 0x74cf2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x744b2, 0x744d2 (delta 0x10d50)
  // Match at 0x74b12, 0x74b32 (delta 0x113b0)
  // Match at 0x75232, 0x75252 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x754d2, 0x754f2 (delta 0x11d70)
    { L"32BG.1.29.2", 0x75232, 0x75252, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.29.3", 0x74772, 0x74792, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10e30!
  // Match at 0x74932, 0x74952 (delta 0x10e30)
  // Match at 0x74a12, 0x74a32 (delta 0x10f10)
  // Match at 0x75132, 0x75152 (delta 0x11630)
  // Match at 0x755d2, 0x755f2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.29.4", 0x755d2, 0x755f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74692, 0x746b2 (delta 0x11470)
  // Match at 0x74cf2, 0x74d12 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75872, 0x75892 (delta 0x12650)
    { L"32BG.1.30.1", 0x74cf2, 0x74d12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x744d2, 0x744f2 (delta 0x10d50)
  // Match at 0x74b32, 0x74b52 (delta 0x113b0)
  // Match at 0x75252, 0x75272 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x754b2, 0x754d2 (delta 0x11d30)
    { L"32BG.1.30.2", 0x75252, 0x75272, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.30.3", 0x74792, 0x747b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xf3f0!
  // Match at 0x72ed2, 0x72ef2 (delta 0xf3f0)
  // Match at 0x74a32, 0x74a52 (delta 0x10f50)
  // Match at 0x75152, 0x75172 (delta 0x11670)
  // Match at 0x755b2, 0x755d2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.30.4", 0x755b2, 0x755d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xfc70!
  // Match at 0x72eb2, 0x72ed2 (delta 0xfc70)
  // Match at 0x746b2, 0x746d2 (delta 0x11470)
  // Match at 0x74d12, 0x74d32 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74eb2, 0x74ed2 (delta 0x11c70)
  // Match at 0x75852, 0x75872 (delta 0x12610)
    { L"32BG.1.31.1", 0x74d12, 0x74d32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x744f2, 0x74512 (delta 0x10d50)
  // Match at 0x74b52, 0x74b72 (delta 0x113b0)
  // Match at 0x75272, 0x75292 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75492, 0x754b2 (delta 0x11cf0)
    { L"32BG.1.31.2", 0x75272, 0x75292, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.31.3", 0x747b2, 0x747d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10930!
  // Match at 0x743f2, 0x74412 (delta 0x10930)
  // Match at 0x74a52, 0x74a72 (delta 0x10f90)
  // Match at 0x75172, 0x75192 (delta 0x116b0)
  // Match at 0x75592, 0x755b2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.31.4", 0x75592, 0x755b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x746d2, 0x746f2 (delta 0x11470)
  // Match at 0x74d32, 0x74d52 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74ed2, 0x74ef2 (delta 0x11c70)
  // Match at 0x75832, 0x75852 (delta 0x125d0)
    { L"32BG.1.32.1", 0x74d32, 0x74d52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74512, 0x74532 (delta 0x10d50)
  // Match at 0x74b72, 0x74b92 (delta 0x113b0)
  // Match at 0x75292, 0x752b2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75472, 0x75492 (delta 0x11cb0)
    { L"32BG.1.32.2", 0x75292, 0x752b2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.32.3", 0x747d2, 0x747f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10970!
  // Match at 0x74412, 0x74432 (delta 0x10970)
  // Match at 0x74a72, 0x74a92 (delta 0x10fd0)
  // Match at 0x75192, 0x751b2 (delta 0x116f0)
  // Match at 0x75572, 0x75592 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.32.4", 0x75572, 0x75592, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x746f2, 0x74712 (delta 0x11470)
  // Match at 0x74d52, 0x74d72 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74ef2, 0x74f12 (delta 0x11c70)
  // Match at 0x75812, 0x75832 (delta 0x12590)
    { L"32BG.1.33.1", 0x74d52, 0x74d72, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74532, 0x74552 (delta 0x10d50)
  // Match at 0x74b92, 0x74bb2 (delta 0x113b0)
  // Match at 0x752b2, 0x752d2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75452, 0x75472 (delta 0x11c70)
    { L"32BG.1.33.2", 0x752b2, 0x752d2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.33.3", 0x747f2, 0x74812, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x109b0!
  // Match at 0x74432, 0x74452 (delta 0x109b0)
  // Match at 0x74a92, 0x74ab2 (delta 0x11010)
  // Match at 0x751b2, 0x751d2 (delta 0x11730)
  // Match at 0x75552, 0x75572 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.33.4", 0x75552, 0x75572, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74712, 0x74732 (delta 0x11470)
  // Match at 0x74d72, 0x74d92 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74f12, 0x74f32 (delta 0x11c70)
  // Match at 0x757f2, 0x75812 (delta 0x12550)
    { L"32BG.1.34.1", 0x74d72, 0x74d92, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74552, 0x74572 (delta 0x10d50)
  // Match at 0x74bb2, 0x74bd2 (delta 0x113b0)
  // Match at 0x752d2, 0x752f2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75432, 0x75452 (delta 0x11c30)
    { L"32BG.1.34.2", 0x752d2, 0x752f2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.34.3", 0x74812, 0x74832, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x109f0!
  // Match at 0x74452, 0x74472 (delta 0x109f0)
  // Match at 0x74ab2, 0x74ad2 (delta 0x11050)
  // Match at 0x751d2, 0x751f2 (delta 0x11770)
  // Match at 0x75532, 0x75552 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.34.4", 0x75532, 0x75552, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74732, 0x74752 (delta 0x11470)
  // Match at 0x74d92, 0x74db2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74f32, 0x74f52 (delta 0x11c70)
  // Match at 0x757d2, 0x757f2 (delta 0x12510)
    { L"32BG.1.35.1", 0x74d92, 0x74db2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74572, 0x74592 (delta 0x10d50)
  // Match at 0x74bd2, 0x74bf2 (delta 0x113b0)
  // Match at 0x752f2, 0x75312 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75412, 0x75432 (delta 0x11bf0)
    { L"32BG.1.35.2", 0x752f2, 0x75312, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.35.3", 0x74832, 0x74852, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10a30!
  // Match at 0x74472, 0x74492 (delta 0x10a30)
  // Match at 0x74ad2, 0x74af2 (delta 0x11090)
  // Match at 0x751f2, 0x75212 (delta 0x117b0)
  // Match at 0x75512, 0x75532 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.35.4", 0x75512, 0x75532, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74752, 0x74772 (delta 0x11470)
  // Match at 0x74db2, 0x74dd2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74f52, 0x74f72 (delta 0x11c70)
  // Match at 0x757b2, 0x757d2 (delta 0x124d0)
    { L"32BG.1.36.1", 0x74db2, 0x74dd2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74592, 0x745b2 (delta 0x10d50)
  // Match at 0x74bf2, 0x74c12 (delta 0x113b0)
  // Match at 0x75312, 0x75332 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.36.2", 0x75312, 0x75332, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10110!
  // Match at 0x72e92, 0x72eb2 (delta 0x10110)
  // Match at 0x74852, 0x74872 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75052, 0x75072 (delta 0x122d0)
  // Match at 0x756b2, 0x756d2 (delta 0x12930)
    { L"32BG.1.36.3", 0x74852, 0x74872, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10a70!
  // Match at 0x74492, 0x744b2 (delta 0x10a70)
  // Match at 0x74af2, 0x74b12 (delta 0x110d0)
  // Match at 0x75212, 0x75232 (delta 0x117f0)
  // Match at 0x754f2, 0x75512 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.36.4", 0x754f2, 0x75512, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74772, 0x74792 (delta 0x11470)
  // Match at 0x74dd2, 0x74df2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74f72, 0x74f92 (delta 0x11c70)
  // Match at 0x75792, 0x757b2 (delta 0x12490)
    { L"32BG.1.37.1", 0x74dd2, 0x74df2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0xf690!
  // Match at 0x72ef2, 0x72f12 (delta 0xf690)
  // Match at 0x745b2, 0x745d2 (delta 0x10d50)
  // Match at 0x74c12, 0x74c32 (delta 0x113b0)
  // Match at 0x75332, 0x75352 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75952, 0x75972 (delta 0x120f0)
    { L"32BG.1.37.2", 0x75332, 0x75352, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.37.3", 0x74872, 0x74892, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10ab0!
  // Match at 0x744b2, 0x744d2 (delta 0x10ab0)
  // Match at 0x74b12, 0x74b32 (delta 0x11110)
  // Match at 0x75232, 0x75252 (delta 0x11830)
  // Match at 0x754d2, 0x754f2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.37.4", 0x754d2, 0x754f2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74792, 0x747b2 (delta 0x11470)
  // Match at 0x74df2, 0x74e12 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74f92, 0x74fb2 (delta 0x11c70)
  // Match at 0x75772, 0x75792 (delta 0x12450)
    { L"32BG.1.38.1", 0x74df2, 0x74e12, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x745d2, 0x745f2 (delta 0x10d50)
  // Match at 0x74c32, 0x74c52 (delta 0x113b0)
  // Match at 0x75352, 0x75372 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75932, 0x75952 (delta 0x120b0)
    { L"32BG.1.38.2", 0x75352, 0x75372, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.38.3", 0x74892, 0x748b2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10af0!
  // Match at 0x744d2, 0x744f2 (delta 0x10af0)
  // Match at 0x74b32, 0x74b52 (delta 0x11150)
  // Match at 0x75252, 0x75272 (delta 0x11870)
  // Match at 0x754b2, 0x754d2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.38.4", 0x754b2, 0x754d2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x747b2, 0x747d2 (delta 0x11470)
  // Match at 0x74e12, 0x74e32 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74fb2, 0x74fd2 (delta 0x11c70)
  // Match at 0x75752, 0x75772 (delta 0x12410)
    { L"32BG.1.39.1", 0x74e12, 0x74e32, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x745f2, 0x74612 (delta 0x10d50)
  // Match at 0x74c52, 0x74c72 (delta 0x113b0)
  // Match at 0x75372, 0x75392 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75912, 0x75932 (delta 0x12070)
    { L"32BG.1.39.2", 0x75372, 0x75392, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.39.3", 0x748b2, 0x748d2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10b30!
  // Match at 0x744f2, 0x74512 (delta 0x10b30)
  // Match at 0x74b52, 0x74b72 (delta 0x11190)
  // Match at 0x75272, 0x75292 (delta 0x118b0)
  // Match at 0x75492, 0x754b2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.39.4", 0x75492, 0x754b2, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x747d2, 0x747f2 (delta 0x11470)
  // Match at 0x74e32, 0x74e52 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74fd2, 0x74ff2 (delta 0x11c70)
  // Match at 0x75732, 0x75752 (delta 0x123d0)
    { L"32BG.1.40.1", 0x74e32, 0x74e52, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74612, 0x74632 (delta 0x10d50)
  // Match at 0x74c72, 0x74c92 (delta 0x113b0)
  // Match at 0x75392, 0x753b2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x758f2, 0x75912 (delta 0x12030)
    { L"32BG.1.40.2", 0x75392, 0x753b2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.40.3", 0x748d2, 0x748f2, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10b70!
  // Match at 0x74512, 0x74532 (delta 0x10b70)
  // Match at 0x74b72, 0x74b92 (delta 0x111d0)
  // Match at 0x75292, 0x752b2 (delta 0x118f0)
  // Match at 0x75472, 0x75492 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.40.4", 0x75472, 0x75492, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x747f2, 0x74812 (delta 0x11470)
  // Match at 0x74e52, 0x74e72 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74ff2, 0x75012 (delta 0x11c70)
  // Match at 0x75712, 0x75732 (delta 0x12390)
    { L"32BG.1.41.1", 0x74e52, 0x74e72, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74632, 0x74652 (delta 0x10d50)
  // Match at 0x74c92, 0x74cb2 (delta 0x113b0)
  // Match at 0x753b2, 0x753d2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x758d2, 0x758f2 (delta 0x11ff0)
    { L"32BG.1.41.2", 0x753b2, 0x753d2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.41.3", 0x748f2, 0x74912, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10bb0!
  // Match at 0x74532, 0x74552 (delta 0x10bb0)
  // Match at 0x74b92, 0x74bb2 (delta 0x11210)
  // Match at 0x752b2, 0x752d2 (delta 0x11930)
  // Match at 0x75452, 0x75472 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.41.4", 0x75452, 0x75472, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74812, 0x74832 (delta 0x11470)
  // Match at 0x74e72, 0x74e92 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75012, 0x75032 (delta 0x11c70)
  // Match at 0x756f2, 0x75712 (delta 0x12350)
    { L"32BG.1.42.1", 0x74e72, 0x74e92, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74652, 0x74672 (delta 0x10d50)
  // Match at 0x74cb2, 0x74cd2 (delta 0x113b0)
  // Match at 0x753d2, 0x753f2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x758b2, 0x758d2 (delta 0x11fb0)
    { L"32BG.1.42.2", 0x753d2, 0x753f2, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.42.3", 0x74912, 0x74932, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10bf0!
  // Match at 0x74552, 0x74572 (delta 0x10bf0)
  // Match at 0x74bb2, 0x74bd2 (delta 0x11250)
  // Match at 0x752d2, 0x752f2 (delta 0x11970)
  // Match at 0x75432, 0x75452 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.42.4", 0x75432, 0x75452, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11470!
  // Match at 0x74832, 0x74852 (delta 0x11470)
  // Match at 0x74e92, 0x74eb2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75032, 0x75052 (delta 0x11c70)
  // Match at 0x756d2, 0x756f2 (delta 0x12310)
    { L"32BG.1.43.1", 0x74e92, 0x74eb2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10d50!
  // Match at 0x74672, 0x74692 (delta 0x10d50)
  // Match at 0x74cd2, 0x74cf2 (delta 0x113b0)
  // Match at 0x753f2, 0x75412 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x75892, 0x758b2 (delta 0x11f70)
    { L"32BG.1.43.2", 0x753f2, 0x75412, indexCPS2Sprites_VSAV1_Stages, 0x95 }, /* Delta: 0x11ad0 */
    { L"32BG.1.43.3", 0x74932, 0x74952, indexCPS2Sprites_VSAV1_Stages, 0x96 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x10c30!
  // Match at 0x74572, 0x74592 (delta 0x10c30)
  // Match at 0x74bd2, 0x74bf2 (delta 0x11290)
  // Match at 0x752f2, 0x75312 (delta 0x119b0)
  // Match at 0x75412, 0x75432 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.43.4", 0x75412, 0x75432, indexCPS2Sprites_VSAV1_Stages, 0x97 }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x15bd0!
  // Match at 0x38c5a, 0x38c7a (delta 0x15bd0)
  // Match at 0x3a8ba, 0x3a8da (delta 0x17830) <-- correct match (hand-tweaked to use)
    // then the next two are hand-tweaked due to a color change
    { L"SS.1.1.1", 0x3a8ba, 0x3a8da, indexCPS2Sprites_VSAV1_Stages, 0x9c },
    { L"SS.1.2.1", 0x3a8da, 0x3a8fa, indexCPS2Sprites_VSAV1_Stages, 0x9c },
    { L"SS.1.3.1", 0x3a8fa, 0x3a91a, indexCPS2Sprites_VSAV1_Stages, 0x9c },
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_REDTHIRST[] =
 {
    { L"8BG.0.0.0", 0x4cb62, 0x4cd42, indexCPS2Sprites_VSAV1_Stages, 0x43, &pairFullyLinkedNode }, /* Delta: 0x166d0 */
    { L"32BG.0.0.0", 0x6a032, 0x6a152, indexCPS2Sprites_VSAV1_Stages, 0x45 }, /* Delta: 0x116d0 */
    { L"16BG.0.0.0", 0x59bca, 0x59dca, indexCPS2Sprites_VSAV1_Stages, 0x46 }, /* Delta: 0x136d0 */
    { L"SS.0.0.0", 0x376ba, 0x3777a, indexCPS2Sprites_VSAV1_Stages, 0x47 }, /* Delta: 0x175b0 */
    { L"SS.0.0.1 Stage shadow", 0x3763a, 0x3765a }, /* Delta: 0x175b0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_REDTHIRST_PARTS[] =
 {
    { L"8BG.1.1.1", 0x4fe62, 0x4fee2, indexCPS2Sprites_VSAV1_Stages, 0x44 }, /* Delta: 0x166d0 */
    { L"SS.1.1.1", 0x386ba, 0x386da, indexCPS2Sprites_VSAV1_Stages, 0x48 }, /* Delta: 0x176f0 */
    { L"SS.1.2.1", 0x386da, 0x386fa, indexCPS2Sprites_VSAV1_Stages, 0x48 }, /* Delta: 0x176f0 */
    { L"SS.2.1.1", 0x386fa, 0x3879a, indexCPS2Sprites_VSAV1_Stages, 0x49 }, /* Delta: 0x176f0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_REDTHIRST_EX[] =
 {
    { L"8BG.0.0.0", 0x52482, 0x52662, indexCPS2Sprites_VSAV1_Stages, 0x43, &pairFullyLinkedNode }, /* Delta: 0x16ad0 */
    { L"32BG.0.0.0", 0x71292, 0x713b2, indexCPS2Sprites_VSAV1_Stages, 0x45 }, /* Delta: 0x11ad0 */
    { L"16BG.0.0.0", 0x5fdca, 0x5ffca, indexCPS2Sprites_VSAV1_Stages, 0x46 }, /* Delta: 0x13ad0 */
    { L"SS.0.0.0", 0x3931a, 0x393da, indexCPS2Sprites_VSAV1_Stages, 0x47 }, /* Delta: 0x176f0 */
// Warning: the remapped delta shifts from 0x176f0 to 0x15a90!
  // Match at 0x3763a, 0x3765a (delta 0x15a90)
  // Match at 0x3929a, 0x392ba (delta 0x176f0) <-- swapped to use this one
    { L"SS.0.0.1 Stage shadow", 0x3929a, 0x392ba }, /* Delta: 0x176f0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_REDTHIRST_EX_PARTS[] =
 {
    { L"8BG.1.1.1", 0x55782, 0x55802, indexCPS2Sprites_VSAV1_Stages, 0x44 }, /* Delta: 0x16ad0 */
    { L"SS.1.1.1", 0x3a31a, 0x3a33a, indexCPS2Sprites_VSAV1_Stages, 0x48 }, /* Delta: 0x17830 */
    { L"SS.1.2.1", 0x3a33a, 0x3a35a, indexCPS2Sprites_VSAV1_Stages, 0x48 }, /* Delta: 0x17830 */
    { L"SS.2.1.1", 0x3a35a, 0x3a3fa, indexCPS2Sprites_VSAV1_Stages, 0x49 }, /* Delta: 0x17830 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_TOWER[] =
 {
    { L"32BG.0.0.0", 0x69c32, 0x69c92, indexCPS2Sprites_VSAV1_Stages, 0x9d, &pairFullyLinkedNode }, /* Delta: 0x116d0 */
    { L"SS.0.0.1", 0x375da, 0x3761a, indexCPS2Sprites_VSAV1_Stages, 0x9e }, /* Delta: 0x175b0 */
    { L"16BG.0.0.0", 0x597ca, 0x598ea, indexCPS2Sprites_VSAV1_Stages, 0x9f }, /* Delta: 0x136d0 */
    { L"8BG.0.0.1", 0x4c762, 0x4c902, indexCPS2Sprites_VSAV1_Stages, 0xa0 }, /* Delta: 0x166d0 */
    { L"8BG.0.0.2", 0x4c902, 0x4ca62, indexCPS2Sprites_VSAV1_Stages, 0xa1 }, /* Delta: 0x166d0 */
    { L"SS.0.0.2", 0x374fa, 0x375da, indexCPS2Sprites_VSAV1_Stages, 0xa7 }, /* Delta: 0x175b0 */
    { L"SS.0.0.3", 0x3761a, 0x3763a, indexCPS2Sprites_VSAV1_Stages, 0xa8 }, /* Delta: 0x175b0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_TOWER_PARTS[] =
 {
    { L"8BG.1.1.1", 0x4f742, 0x4f762, indexCPS2Sprites_VSAV1_Stages, 0xa2 }, /* Delta: 0x166d0 */
    { L"8BG.1.1.2", 0x4f762, 0x4f782, indexCPS2Sprites_VSAV1_Stages, 0xa3 }, /* Delta: 0x166d0 */
    { L"8BG.1.1.3", 0x4f782, 0x4f7a2, indexCPS2Sprites_VSAV1_Stages, 0xa4 }, /* Delta: 0x166d0 */
    { L"8BG.2.1.1", 0x4f702, 0x4f722, indexCPS2Sprites_VSAV1_Stages, 0xa5 }, /* Delta: 0x166d0 */
    { L"8BG.2.2.1", 0x4f722, 0x4f742, indexCPS2Sprites_VSAV1_Stages, 0xa5 }, /* Delta: 0x166d0 */
    { L"8BG.3.1.1", 0x4f6a2, 0x4f6c2, indexCPS2Sprites_VSAV1_Stages, 0xa6 }, /* Delta: 0x166d0 */
    { L"8BG.3.2.1", 0x4f6c2, 0x4f6e2, indexCPS2Sprites_VSAV1_Stages, 0xa6 }, /* Delta: 0x166d0 */
    { L"8BG.3.3.1", 0x4f6e2, 0x4f702, indexCPS2Sprites_VSAV1_Stages, 0xa6 }, /* Delta: 0x166d0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_TOWER_EX[] =
 {
    { L"32BG.0.0.0", 0x70e92, 0x70ef2, indexCPS2Sprites_VSAV1_Stages, 0x9d, &pairFullyLinkedNode }, /* Delta: 0x11ad0 */
    { L"SS.0.0.1", 0x3923a, 0x3927a, indexCPS2Sprites_VSAV1_Stages, 0x9e }, /* Delta: 0x176f0 */
    { L"16BG.0.0.0", 0x5f9ca, 0x5faea, indexCPS2Sprites_VSAV1_Stages, 0x9f }, /* Delta: 0x13ad0 */
    { L"8BG.0.0.1", 0x52082, 0x52222, indexCPS2Sprites_VSAV1_Stages, 0xa0 }, /* Delta: 0x16ad0 */
    // hand-created due to color changes
    { L"8BG.0.0.2", 0x52222, 0x52382, indexCPS2Sprites_VSAV1_Stages, 0xa1 },
    { L"SS.0.0.2", 0x3915a, 0x3923a, indexCPS2Sprites_VSAV1_Stages, 0xa7 }, /* Delta: 0x176f0 */
    { L"SS.0.0.3", 0x3927a, 0x3929a, indexCPS2Sprites_VSAV1_Stages, 0xa8 }, /* Delta: 0x176f0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_TOWER_EX_PARTS[] =
 {
     // hand-created 1.1.1 due to color changes
    { L"8BG.1.1.1", 0x55062, 0x55082, indexCPS2Sprites_VSAV1_Stages, 0xa2 },
    { L"8BG.1.1.2", 0x55082, 0x550a2, indexCPS2Sprites_VSAV1_Stages, 0xa3 }, /* Delta: 0x16ad0 */
    { L"8BG.1.1.3", 0x550a2, 0x550c2, indexCPS2Sprites_VSAV1_Stages, 0xa4 }, /* Delta: 0x16ad0 */
    { L"8BG.2.1.1", 0x55022, 0x55042, indexCPS2Sprites_VSAV1_Stages, 0xa5 }, /* Delta: 0x16ad0 */
    { L"8BG.2.2.1", 0x55042, 0x55062, indexCPS2Sprites_VSAV1_Stages, 0xa5 }, /* Delta: 0x16ad0 */
    { L"8BG.3.1.1", 0x54fc2, 0x54fe2, indexCPS2Sprites_VSAV1_Stages, 0xa6 }, /* Delta: 0x16ad0 */
    { L"8BG.3.2.1", 0x54fe2, 0x55002, indexCPS2Sprites_VSAV1_Stages, 0xa6 }, /* Delta: 0x16ad0 */
    { L"8BG.3.3.1", 0x55002, 0x55022, indexCPS2Sprites_VSAV1_Stages, 0xa6 }, /* Delta: 0x16ad0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_VANITY[] =
 {
    { L"32BG.0.0.0", 0x6ac32, 0x6ad92, indexCPS2Sprites_VSAV1_Stages, 0x61, &pairFullyLinkedNode }, /* Delta: 0x116d0 */
    { L"8BG.0.0.0", 0x4d762, 0x4d882, indexCPS2Sprites_VSAV1_Stages, 0x62 }, /* Delta: 0x166d0 */
    { L"SS.1.0.1", 0x37aba, 0x37afa, indexCPS2Sprites_VSAV1_Stages, 0x63 }, /* Delta: 0x175b0 */
    { L"16BG.0.0.1", 0x5a7ea, 0x5a96a, indexCPS2Sprites_VSAV1_Stages, 0x64 }, /* Delta: 0x136d0 */
    { L"16BG.0.0.2", 0x5a98a, 0x5ab4a, indexCPS2Sprites_VSAV1_Stages, 0x65 }, /* Delta: 0x136d0 */
    { L"SS.2.0.1", 0x379fa, 0x37a5a, indexCPS2Sprites_VSAV1_Stages, 0x66 }, /* Delta: 0x175b0 */
    { L"SS.2.0.2", 0x37afa, 0x37b3a, indexCPS2Sprites_VSAV1_Stages, 0x67 }, /* Delta: 0x175b0 */
    { L"SS.2.0.3", 0x37a5a, 0x37aba, indexCPS2Sprites_VSAV1_Stages, 0x68 }, /* Delta: 0x175b0 */
};

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_VANITY_EX[] =
 {
    { L"32BG.0.0.0", 0x71e92, 0x71ff2, indexCPS2Sprites_VSAV1_Stages, 0x61, &pairFullyLinkedNode }, /* Delta: 0x11ad0 */
    { L"8BG.0.0.0", 0x53082, 0x531a2, indexCPS2Sprites_VSAV1_Stages, 0x62 }, /* Delta: 0x16ad0 */
    { L"SS.1.0.1", 0x3971a, 0x3975a, indexCPS2Sprites_VSAV1_Stages, 0x63 }, /* Delta: 0x176f0 */
    { L"16BG.0.0.1", 0x609ea, 0x60b6a, indexCPS2Sprites_VSAV1_Stages, 0x64 }, /* Delta: 0x13ad0 */
    { L"16BG.0.0.2", 0x60b8a, 0x60d4a, indexCPS2Sprites_VSAV1_Stages, 0x65 }, /* Delta: 0x13ad0 */
    { L"SS.2.0.1", 0x3965a, 0x396ba, indexCPS2Sprites_VSAV1_Stages, 0x66 }, /* Delta: 0x176f0 */
    { L"SS.2.0.2", 0x3975a, 0x3979a, indexCPS2Sprites_VSAV1_Stages, 0x67 }, /* Delta: 0x176f0 */
    { L"SS.2.0.3", 0x396ba, 0x3971a, indexCPS2Sprites_VSAV1_Stages, 0x68 }, /* Delta: 0x176f0 */
};

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_WARAGONY[] =
 {
    { L"32BG.0.0.1", 0x6b052, 0x6b072, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairFullyLinkedNode }, /* Delta: 0x116d0 */
    { L"32BG.0.0.2", 0x6b112, 0x6b132, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0x116d0 */
    { L"32BG.0.0.3", 0x6b1d2, 0x6b1f2, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0x116d0 */
    { L"32BG.0.0.4", 0x6b292, 0x6b2b2, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0x116d0 */
    { L"16BG.0.0.1", 0x5abca, 0x5ad8a, indexCPS2Sprites_VSAV1_Stages, 0x6d }, /* Delta: 0x136d0 */
    { L"16BG.0.0.2", 0x5adaa, 0x5adea, indexCPS2Sprites_VSAV1_Stages, 0x6e }, /* Delta: 0x136d0 */
    { L"16BG.0.0.3", 0x5ae0a, 0x5af0a, indexCPS2Sprites_VSAV1_Stages, 0x6f }, /* Delta: 0x136d0 */
    { L"16BG.0.0.4", 0x5af2a, 0x5af6a, indexCPS2Sprites_VSAV1_Stages, 0x70 }, /* Delta: 0x136d0 */
    { L"8BG.0.0.0", 0x4db62, 0x4dd22, indexCPS2Sprites_VSAV1_Stages, 0x71 }, /* Delta: 0x166d0 */
    { L"SS.0.0.0", 0x37bda, 0x37c7a, indexCPS2Sprites_VSAV1_Stages, 0x72 }, /* Delta: 0x175b0 */
    { L"SS.0.0.1 Stage shadow", 0x37b3a, 0x37b5a }, /* Delta: 0x175b0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_WARAGONY_PARTS[] =
 {
     // hand-tweaked everything to use the 116d0 deltas
  // Match at 0x6b072, 0x6b092 (delta 0xf830)
  // Match at 0x6cf12, 0x6cf32 (delta 0x116d0)
    { L"32BG.1.1.1", 0x6cf12, 0x6cf32, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0xf830 */
    // hand-tweaked due to color change
     { L"32BG.1.1.2", 0x5b8e2 + 0x116d0, 0x5B902 + 0x116d0, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0xf830 */
// Warning: the remapped delta shifts from 0xf830 to 0xf870!
  // Match at 0x6b1f2, 0x6b212 (delta 0xf870)
  // Match at 0x6d052, 0x6d072 (delta 0x116d0)
    { L"32BG.1.1.3", 0x6d052, 0x6d072, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0xf870 */
// Warning: the remapped delta shifts from 0xf870 to 0xf890!
  // Match at 0x6b2b2, 0x6b2d2 (delta 0xf890)
  // Match at 0x6d0f2, 0x6d112 (delta 0x116d0)
    { L"32BG.1.1.4", 0x6d0f2, 0x6d112, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0xf890 */
// Warning: the remapped delta shifts from 0xf890 to 0xf830!
  // Match at 0x6b092, 0x6b0b2 (delta 0xf830)
  // Match at 0x6cf32, 0x6cf52 (delta 0x116d0)
    { L"32BG.1.2.1", 0x6cf32, 0x6cf52, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0xf830 */
// Warning: the remapped delta shifts from 0xf830 to 0xf850!
  // Match at 0x6b152, 0x6b172 (delta 0xf850)
  // Match at 0x6cfd2, 0x6cff2 (delta 0x116d0)
    { L"32BG.1.2.2", 0x6cfd2, 0x6cff2, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0xf850 */
// Warning: the remapped delta shifts from 0xf850 to 0xf870!
  // Match at 0x6b212, 0x6b232 (delta 0xf870)
  // Match at 0x6d072, 0x6d092 (delta 0x116d0)
    { L"32BG.1.2.3", 0x6d072, 0x6d092, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0xf870 */
// Warning: the remapped delta shifts from 0xf870 to 0xf890!
  // Match at 0x6b2d2, 0x6b2f2 (delta 0xf890)
  // Match at 0x6b2f2, 0x6b312 (delta 0xf8b0)
  // Match at 0x6d112, 0x6d132 (delta 0x116d0)
  // Match at 0x6d132, 0x6d152 (delta 0x116f0)
    { L"32BG.1.2.4", 0x6d112, 0x6d132, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0xf890 */
// Warning: the remapped delta shifts from 0xf890 to 0xf830!
  // Match at 0x6b0b2, 0x6b0d2 (delta 0xf830)
  // Match at 0x6cf52, 0x6cf72 (delta 0x116d0)
    { L"32BG.1.3.1", 0x6cf52, 0x6cf72, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0xf830 */
// Warning: the remapped delta shifts from 0xf830 to 0xf850!
  // Match at 0x6b172, 0x6b192 (delta 0xf850)
  // Match at 0x6cff2, 0x6d012 (delta 0x116d0)
    { L"32BG.1.3.2", 0x6cff2, 0x6d012, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0xf850 */
// Warning: the remapped delta shifts from 0xf850 to 0xf870!
  // Match at 0x6b232, 0x6b252 (delta 0xf870)
  // Match at 0x6d092, 0x6d0b2 (delta 0x116d0)
    { L"32BG.1.3.3", 0x6d092, 0x6d0b2, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0xf870 */
    // hand-tweaked due to color change
    { L"32BG.1.3.4", 0x5BA62 + 0x116d0, 0x5BA82 + 0x116d0, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0xf870 */
// Warning: the remapped delta shifts from 0xf870 to 0xf830!
  // Match at 0x6b0d2, 0x6b0f2 (delta 0xf830)
  // Match at 0x6cf72, 0x6cf92 (delta 0x116d0)
    { L"32BG.1.4.1", 0x6cf72, 0x6cf92, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0xf830 */
// Warning: the remapped delta shifts from 0xf830 to 0xf850!
  // Match at 0x6b192, 0x6b1b2 (delta 0xf850)
  // Match at 0x6b1b2, 0x6b1d2 (delta 0xf870)
  // Match at 0x6d012, 0x6d032 (delta 0x116d0)
  // Match at 0x6d032, 0x6d052 (delta 0x116f0)
    { L"32BG.1.4.2", 0x6d012, 0x6d032, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0xf850 */
// Warning: the remapped delta shifts from 0xf850 to 0xf870!
  // Match at 0x6b252, 0x6b272 (delta 0xf870)
  // Match at 0x6d0b2, 0x6d0d2 (delta 0x116d0)
    { L"32BG.1.4.3", 0x6d0b2, 0x6d0d2, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0xf870 */
// Warning: the remapped delta shifts from 0xf870 to 0xf890!
  // Match at 0x6b312, 0x6b332 (delta 0xf890)
  // Match at 0x6d152, 0x6d172 (delta 0x116d0)
    { L"32BG.1.4.4", 0x6d152, 0x6d172, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0xf890 */
// Warning: the remapped delta shifts from 0xf890 to 0xf830!
  // Match at 0x6b0f2, 0x6b112 (delta 0xf830)
  // Match at 0x6cf92, 0x6cfb2 (delta 0x116d0)
    { L"32BG.1.5.1", 0x6cf92, 0x6cfb2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0xf830 */
     // hand-tweaked due to color change
     { L"32BG.1.5.2", 0x5B962 + 0x116d0, 0x5B982 + 0x116d0, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0xf830 */
// Warning: the remapped delta shifts from 0xf830 to 0xf870!
  // Match at 0x6b272, 0x6b292 (delta 0xf870)
  // Match at 0x6d0d2, 0x6d0f2 (delta 0x116d0)
    { L"32BG.1.5.3", 0x6d0d2, 0x6d0f2, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0xf870 */
// Warning: the remapped delta shifts from 0xf870 to 0xf890!
  // Match at 0x6b332, 0x6b352 (delta 0xf890)
  // Match at 0x6d172, 0x6d192 (delta 0x116d0)
    { L"32BG.1.5.4", 0x6d172, 0x6d192, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0xf890 */
    { L"SS.1.1.1", 0x38a3a, 0x38a5a, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x176f0 */
    { L"SS.1.2.1", 0x38a5a, 0x38a7a, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x176f0 */
    { L"SS.1.3.1", 0x38a7a, 0x38a9a, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x176f0 */
    { L"SS.1.4.1", 0x38a9a, 0x38aba, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x176f0 */
    { L"SS.1.5.1", 0x38aba, 0x38ada, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x176f0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_WARAGONY_EX[] =
 {
    { L"32BG.0.0.1", 0x722b2, 0x722d2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairFullyLinkedNode }, /* Delta: 0x11ad0 */
    { L"32BG.0.0.2", 0x72372, 0x72392, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0x11ad0 */
    { L"32BG.0.0.3", 0x72432, 0x72452, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0x11ad0 */
    { L"32BG.0.0.4", 0x724f2, 0x72512, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0x11ad0 */
    { L"16BG.0.0.1", 0x60dca, 0x60f8a, indexCPS2Sprites_VSAV1_Stages, 0x6d }, /* Delta: 0x13ad0 */
    { L"16BG.0.0.2", 0x60faa, 0x60fea, indexCPS2Sprites_VSAV1_Stages, 0x6e }, /* Delta: 0x13ad0 */
    { L"16BG.0.0.3", 0x6100a, 0x6110a, indexCPS2Sprites_VSAV1_Stages, 0x6f }, /* Delta: 0x13ad0 */
    { L"16BG.0.0.4", 0x6112a, 0x6116a, indexCPS2Sprites_VSAV1_Stages, 0x70 }, /* Delta: 0x13ad0 */
    { L"8BG.0.0.0", 0x53482, 0x53642, indexCPS2Sprites_VSAV1_Stages, 0x71 }, /* Delta: 0x16ad0 */
    { L"SS.0.0.0", 0x3983a, 0x398da, indexCPS2Sprites_VSAV1_Stages, 0x72 }, /* Delta: 0x176f0 */
    { L"SS.0.0.1 Stage shadow", 0x3979a, 0x397ba }, /* Delta: 0x176f0 */
 };

 const sGame_PaletteDataset VSAV2_A_STAGE_PALETTES_WARAGONY_EX_PARTS[] =
 {
    { L"32BG.1.1.1", 0x74172, 0x74192, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0x11ad0 */
    { L"32BG.1.1.2", 0x74212, 0x74232, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0x11ad0 */
    { L"32BG.1.1.3", 0x742b2, 0x742d2, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0x11ad0 */
    { L"32BG.1.1.4", 0x74352, 0x74372, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0x11ad0 */
    { L"32BG.1.2.1", 0x74192, 0x741b2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0x11ad0 */
    { L"32BG.1.2.2", 0x74232, 0x74252, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0x11ad0 */
    { L"32BG.1.2.3", 0x742d2, 0x742f2, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11ab0!
  // Match at 0x74352, 0x74372 (delta 0x11ab0)
  // Match at 0x74372, 0x74392 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x74392, 0x743b2 (delta 0x11af0)
  // Match at 0x743b2, 0x743d2 (delta 0x11b10)
    { L"32BG.1.2.4", 0x74372, 0x74392, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0x11ad0 */
    { L"32BG.1.3.1", 0x741b2, 0x741d2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0x11ad0 */
    { L"32BG.1.3.2", 0x74252, 0x74272, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0x11ad0 */
    { L"32BG.1.3.3", 0x742f2, 0x74312, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11a90!
  // Match at 0x74352, 0x74372 (delta 0x11a90)
  // Match at 0x74372, 0x74392 (delta 0x11ab0)
  // Match at 0x74392, 0x743b2 (delta 0x11ad0) <-- swapped to use this one
  // Match at 0x743b2, 0x743d2 (delta 0x11af0)
    { L"32BG.1.3.4", 0x74392, 0x743b2, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0x11ad0 */
    { L"32BG.1.4.1", 0x741d2, 0x741f2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0x11ad0 */
    { L"32BG.1.4.2", 0x74272, 0x74292, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0x11ad0 */
    { L"32BG.1.4.3", 0x74312, 0x74332, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0x11ad0 */
// Warning: the remapped delta shifts from 0x11ad0 to 0x11a70!
  // Match at 0x74352, 0x74372 (delta 0x11a70)
  // Match at 0x74372, 0x74392 (delta 0x11a90)
  // Match at 0x74392, 0x743b2 (delta 0x11ab0)
  // Match at 0x743b2, 0x743d2 (delta 0x11ad0) <-- swapped to use this one
    { L"32BG.1.4.4", 0x743b2, 0x743d2, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0x11ad0 */
    { L"32BG.1.5.1", 0x741f2, 0x74212, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes }, /* Delta: 0x11ad0 */
    { L"32BG.1.5.2", 0x74292, 0x742b2, indexCPS2Sprites_VSAV1_Stages, 0x6a }, /* Delta: 0x11ad0 */
    { L"32BG.1.5.3", 0x74332, 0x74352, indexCPS2Sprites_VSAV1_Stages, 0x6b }, /* Delta: 0x11ad0 */
    { L"32BG.1.5.4", 0x743d2, 0x743f2, indexCPS2Sprites_VSAV1_Stages, 0x6c }, /* Delta: 0x11ad0 */
    { L"SS.1.1.1", 0x3a69a, 0x3a6ba, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x17830 */
    { L"SS.1.2.1", 0x3a6ba, 0x3a6da, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x17830 */
    { L"SS.1.3.1", 0x3a6da, 0x3a6fa, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x17830 */
    { L"SS.1.4.1", 0x3a6fa, 0x3a71a, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x17830 */
    { L"SS.1.5.1", 0x3a71a, 0x3a73a, indexCPS2Sprites_VSAV1_Stages, 0x73 }, /* Delta: 0x17830 */
 };

const sDescTreeNode VSAV2_A_STAGE_COLLECTION[] =
{
    // Note that VSAV2 flips the EX stage switch from VSAV!
    { L"Abaraya",                                DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_ABARAYA_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_ABARAYA_EX) },
    { L"Abaraya: Animation palettes",            DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_ABARAYA_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_ABARAYA_EX_PARTS) },
    { L"EX: Abaraya",                                   DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_ABARAYA, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_ABARAYA) },
    { L"EX: Abaraya: Animation palettes",               DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_ABARAYA_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_ABARAYA_PARTS) },

    { L"Concrete Cave",                          DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_CAVE_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_CAVE_EX) },
    { L"EX: Concrete Cave",                             DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_CAVE, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_CAVE) },

    { L"Deserted Chateau",                       DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_CHATEAU_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_CHATEAU_EX) },
    { L"Deserted Chateau: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_CHATEAU_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_CHATEAU_EX_PARTS) },
    { L"EX: Deserted Chateau",                          DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_CHATEAU, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_CHATEAU) },
    { L"EX: Deserted Chateau: Animation palettes",      DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_CHATEAU_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_CHATEAU_PARTS) },

    { L"Feast of the Damned",                    DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FEAST_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FEAST_EX) },
    { L"Feast of the Damned: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FEAST_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FEAST_EX_PARTS) },
    { L"EX: Feast of the Damned",                       DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FEAST, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FEAST) },
    { L"EX: Feast of the Damned: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FEAST_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FEAST_PARTS) },

    // Fetus non-EX doesn't seem to exist in this form?  There's a few of the Animation Parts though
    { L"Fetus of God",                    DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FETUS_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FETUS_EX) },
    { L"Fetus of God: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FETUS_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FETUS_EX_PARTS) },
    //{ L"EX: Fetus of God",                       DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FETUS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FETUS) },
    //{ L"EX: Fetus of God: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FETUS_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FETUS_PARTS) },

    // Most of these can't be found: color shift?
    //{ L"Forever Torment",                    DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FOREVER_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FOREVER_EX) },
    //{ L"Forever Torment: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FOREVER_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FOREVER_EX_PARTS) },
    //{ L"EX: Forever Torment",                       DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FOREVER, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FOREVER) },
    //{ L"EX: Forever Torment: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_FOREVER_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_FOREVER_PARTS) },

    { L"Green Scream",                           DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_SCREAM_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_SCREAM_EX) },
    { L"Green Scream: Animation palettes",       DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_SCREAM_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_SCREAM_EX_PARTS) },
    { L"EX: Green Scream",                              DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_SCREAM, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_SCREAM) },
    { L"EX: Green Scream: Animation palettes",          DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_SCREAM_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_SCREAM_PARTS) },

    { L"Iron Horse, Iron Terror",                        DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_IRONHORSE_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_IRONHORSE_EX) },
    { L"Iron Horse, Iron Terror: Animation palettes",    DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_IRONHORSE_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_IRONHORSE_EX_PARTS) },
    { L"EX: Iron Horse, Iron Terror",                           DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_IRONHORSE, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_IRONHORSE) },
    { L"EX: Iron Horse, Iron Terror: Animation palettes",       DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_IRONHORSE_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_IRONHORSE_PARTS) },

    { L"Red Thirst",                             DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_REDTHIRST_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_REDTHIRST_EX) },
    { L"Red Thirst: Animation palettes",         DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_REDTHIRST_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_REDTHIRST_EX_PARTS) },
    { L"EX: Red Thirst",                                DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_REDTHIRST, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_REDTHIRST) },
    { L"EX: Red Thirst: Animation palettes",            DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_REDTHIRST_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_REDTHIRST_PARTS) },

    // Revenger's Roost

    { L"Tower of Arrogance",                     DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_TOWER_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_TOWER_EX) },
    { L"Tower of Arrogance: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_TOWER_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_TOWER_EX_PARTS) },
    { L"EX: Tower of Arrogance",                        DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_TOWER, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_TOWER) },
    { L"EX: Tower of Arrogance: Animation palettes",    DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_TOWER_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_TOWER_PARTS) },

    { L"Vanity Paradise",                        DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_VANITY_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_VANITY_EX) },
    { L"EX: Vanity Paradise",                           DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_VANITY, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_VANITY) },

    { L"War Agony",                              DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_WARAGONY_EX, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_WARAGONY_EX) },
    { L"War Agony: Animation palettes",          DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_WARAGONY_EX_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_WARAGONY_EX_PARTS) },
    { L"EX: War Agony",                                 DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_WARAGONY, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_WARAGONY) },
    { L"EX: War Agony: Animation palettes",             DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_PALETTES_WARAGONY_PARTS, ARRAYSIZE(VSAV2_A_STAGE_PALETTES_WARAGONY_PARTS) },
 };

const sDescTreeNode VSAV2_A_BONUS_COLLECTION[] =
{
    { L"HUD",                       DESC_NODETYPE_TREE, (void*)VSAV2_A_HUD_PALETTES,     ARRAYSIZE(VSAV2_A_HUD_PALETTES) },
    { L"HUD (Player 1 Side)",       DESC_NODETYPE_TREE, (void*)VSAV2_A_HUD_P1_PALETTES, ARRAYSIZE(VSAV2_A_HUD_P1_PALETTES) },
    { L"HUD (Player 2 Side)",       DESC_NODETYPE_TREE, (void*)VSAV2_A_HUD_P2_PALETTES, ARRAYSIZE(VSAV2_A_HUD_P2_PALETTES) },
    { L"Effects",                   DESC_NODETYPE_TREE, (void*)VSAV2_A_EFFECTS_PALETTES,  ARRAYSIZE(VSAV2_A_EFFECTS_PALETTES) },
    { L"Shadow",                    DESC_NODETYPE_TREE, (void*)VSAV2_A_SHADOW_PALETTES,  ARRAYSIZE(VSAV2_A_SHADOW_PALETTES) },

    { L"Dark Force",                DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_DARKFORCE_PALETTES,  ARRAYSIZE(VSAV2_A_BONUS_DARKFORCE_PALETTES) },
    { L"Character Intros",          DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_CHARACTERINTROS_PALETTES,  ARRAYSIZE(VSAV2_A_BONUS_CHARACTERINTROS_PALETTES) },
        
    { L"Title/Select Screen",       DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_TITLES_PALETTES,  ARRAYSIZE(VSAV2_A_BONUS_TITLES_PALETTES) },
 
    { L"Character Select Screen",   DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_CSS_PALETTES, ARRAYSIZE(VSAV2_A_BONUS_CSS_PALETTES) },
    { L"Match Text",                DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_TEXT_PALETTES, ARRAYSIZE(VSAV2_A_BONUS_TEXT_PALETTES) },
    { L"Ending Sepia Portraits",    DESC_NODETYPE_TREE, (void*)VSAV2_A_ENDING_PALETTES_PORTRAITS, ARRAYSIZE(VSAV2_A_ENDING_PALETTES_PORTRAITS) },
    { L"Other",                     DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_OTHER_PALETTES, ARRAYSIZE(VSAV2_A_BONUS_OTHER_PALETTES) },
};

const sDescTreeNode VSAV2_A_UNITS[] =
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
    { L"Gallon (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_COLLECTION,       ARRAYSIZE(VSAV2_A_GALLON_COLLECTION) }, // Jon Talbain
    { L"Aulbath (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_COLLECTION,     ARRAYSIZE(VSAV2_A_AULBATH_COLLECTION) }, // Rikuo
    { L"Sasquatch (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_COLLECTION, ARRAYSIZE(VSAV2_A_SASQUATCH_COLLECTION) },
    { L"Dark Gallon (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_COLLECTION, ARRAYSIZE(VSAV2_A_DARKGALLON_COLLECTION) },

    { L"Stages",             DESC_NODETYPE_TREE, (void*)VSAV2_A_STAGE_COLLECTION,         ARRAYSIZE(VSAV2_A_STAGE_COLLECTION) },

    { L"Bonus Palettes",     DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_COLLECTION,         ARRAYSIZE(VSAV2_A_BONUS_COLLECTION) },
 };

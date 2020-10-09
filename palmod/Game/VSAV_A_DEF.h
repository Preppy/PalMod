#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VSAV_A_MORRIGAN_PALETTES. 
// * Update every array using VSAV_A_NUMUNIT below
// That should be it.  Good luck.

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LP[] =
{
    { _T("LP Bulleta"), 0x0C1AC, 0x0C1CC, indexCPS2_BBHood, 0 },
    { _T("LP Critters"), 0x0C1CC, 0x0C1EC },
    { _T("LP Weapons"), 0x0C1EC, 0x0C20C },
    { _T("LP Explosions"), 0x0C20C, 0x0C22C },
    { _T("LP Select Portrait"), 0x2BF0C, 0x2BF2C, indexCPS2_BBHood, 0x20 },
    { _T("LP Win Portrait"), 0x2D60C, 0x2D6AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MP[] =
{
    { _T("MP Bulleta"), 0x0C22C, 0x0C24C, indexCPS2_BBHood, 0 },
    { _T("MP Critters"), 0x0C24C, 0x0C26C },
    { _T("MP Weapons"), 0x0C26C, 0x0C28C },
    { _T("MP Explosions"), 0x0C28C, 0x0C2AC },
    { _T("MP Select Portrait"), 0x2C10C, 0x2C12C, indexCPS2_BBHood, 0x20 },
    { _T("MP Win Portrait"), 0x2E0AC, 0x2E14C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HP[] =
{
    { _T("HP Bulleta"), 0x0C2AC, 0x0C2CC, indexCPS2_BBHood, 0 },
    { _T("HP Critters"), 0x0C2CC, 0x0C2EC },
    { _T("HP Weapons"), 0x0C2EC, 0x0C30C },
    { _T("HP Explosions"), 0x0C30C, 0x0C32C },
    { _T("HP Select Portrait"), 0x2C30C, 0x2C32C, indexCPS2_BBHood, 0x20 },
    { _T("HP Win Portrait"), 0x2EB4C, 0x2EBEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LK[] =
{
    { _T("LK Bulleta"), 0x0C32C, 0x0C34C, indexCPS2_BBHood, 0 },
    { _T("LK Critters"), 0x0C34C, 0x0C36C },
    { _T("LK Weapons"), 0x0C36C, 0x0C38C },
    { _T("LK Explosions"), 0x0C38C, 0x0C3AC },
    { _T("LK Select Portrait"), 0x2C50C, 0x2C52C, indexCPS2_BBHood, 0x20 },
    { _T("LK Win Portrait"), 0x2F5EC, 0x2F68C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MK[] =
{
    { _T("MK Bulleta"), 0x0C3AC, 0x0C3CC, indexCPS2_BBHood, 0 },
    { _T("MK Critters"), 0x0C3CC, 0x0C3EC },
    { _T("MK Weapons"), 0x0C3EC, 0x0C40C },
    { _T("MK Explosions"), 0x0C40C, 0x0C42C },
    { _T("MK Select Portrait"), 0x2C70C, 0x2C72C, indexCPS2_BBHood, 0x20 },
    { _T("MK Win Portrait"), 0x3008C, 0x3012c, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HK[] =
{
    { _T("HK Bulleta"), 0x0C42C, 0x0C44C, indexCPS2_BBHood, 0 },
    { _T("HK Critters"), 0x0C44C, 0x0C46C },
    { _T("HK Weapons"), 0x0C46C, 0x0C48C },
    { _T("HK Explosions"), 0x0C48C, 0x0C4AC },
    { _T("HK Select Portrait"), 0x2C90C, 0x2C92C, indexCPS2_BBHood, 0x20 },
    { _T("HK Win Portrait"), 0x30B2C, 0x30BCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_PP[] =
{
    { _T("PP Bulleta"), 0x0C4AC, 0x0C4CC, indexCPS2_BBHood, 0 },
    { _T("PP Critters"), 0x0C4CC, 0x0C4EC },
    { _T("PP Weapons"), 0x0C4EC, 0x0C50C },
    { _T("PP Explosions"), 0x0C50C, 0x0C52C },
    { _T("PP Select Portrait"), 0x2CB0C, 0x2CB2C, indexCPS2_BBHood, 0x20 },
    { _T("PP Win Portrait"), 0x315CC, 0x3166C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_KK[] =
{
    { _T("KK Bulleta"), 0x0C52C, 0x0C54C, indexCPS2_BBHood, 0 },
    { _T("KK Critters"), 0x0C54C, 0x0C56C },
    { _T("KK Weapons"), 0x0C56C, 0x0C58C },
    { _T("KK Explosions"), 0x0C58C, 0x0C5AC },
    { _T("KK Select Portrait"), 0x2CD0C, 0x2CD2C, indexCPS2_BBHood, 0x20 },
    { _T("KK Win Portrait"), 0x3206C, 0x3210C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AP[] =
{
    { _T("AP Bulleta"), 0x0C5AC, 0x0C5CC, indexCPS2_BBHood, 0 },
    { _T("AP Critters"), 0x0C5CC, 0x0C5EC },
    { _T("AP Weapons"), 0x0C5EC, 0x0C60C },
    { _T("AP Explosions"), 0x0C60C, 0x0C62C },
    { _T("AP Select Portrait"), 0x2CF0C, 0x2CF2C, indexCPS2_BBHood, 0x20 },
    { _T("AP Win Portrait"), 0x32B0C, 0x32BAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AK[] =
{
    { _T("AK Bulleta"), 0x0C62C, 0x0C64C, indexCPS2_BBHood, 0 },
    { _T("AK Critters"), 0x0C64C, 0x0C66C },
    { _T("AK Weapons"), 0x0C66C, 0x0C68C },
    { _T("AK Explosions"), 0x0C68C, 0x0C6AC },
    { _T("AK Select Portrait"), 0x2D10C, 0x2D12C, indexCPS2_BBHood, 0x20 },
    { _T("AK Win Portrait"), 0x335AC, 0x3364C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LP[] =
{
    { _T("LP Demitri"), 0x0C6AC, 0x0C6CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Demitri 2nd palette"), 0x1ACCC, 0x1ACEC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Teledash 1"), 0x0C70C, 0x0C72C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Teledash 2"), 0x0C6CC, 0x0C6EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Fireball"), 0x0C6EC, 0x0C70C },
    { _T("LP Select Portrait"), 0x2BF2C, 0x2BF4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("LP Win Portrait"), 0x2D6AC, 0x2D74C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MP[] =
{
    { _T("MP Demitri"), 0x0C72C, 0x0C74C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Demitri 2nd palette"), 0x1ACEC, 0x1AD0C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Teledash 1"), 0x0C78C, 0x0C7AC, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Teledash 2"), 0x0C74C, 0x0C76C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Fireball"), 0x0C76C, 0x0C78C },
    { _T("MP Select Portrait"), 0x2C12C, 0x2C14C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("MP Win Portrait"), 0x2E14C, 0x2E1EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HP[] =
{
    { _T("HP Demitri"), 0x0C7AC, 0x0C7CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Demitri 2nd palette"), 0x1AD0C, 0x1AD2C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Teledash 1"), 0x0C80C, 0x0C82C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Teledash 2"), 0x0C7CC, 0x0C7EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Fireball"), 0x0C7EC, 0x0C80C },
    { _T("HP Select Portrait"), 0x2C32C, 0x2C34C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("HP Win Portrait"), 0x2EBEC, 0x2EC8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LK[] =
{
    { _T("LK Demitri"), 0x0C82C, 0x0C84C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Demitri 2nd palette"), 0x1AD2C, 0x1AD4C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Teledash 1"), 0x0C88C, 0x0C8AC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Teledash 2"), 0x0C84C, 0x0C86C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Fireball"), 0x0C86C, 0x0C88C },
    { _T("LK Select Portrait"), 0x2C52C, 0x2C54C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("LK Win Portrait"), 0x2F68C, 0x2F72C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MK[] =
{
    { _T("MK Demitri"), 0x0C8AC, 0x0C8CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Demitri 2nd palette"), 0x1AD4C, 0x1AD6C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Teledash 1"), 0x0C90C, 0x0C92C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Teledash 2"), 0x0C8CC, 0x0C8EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Fireball"), 0x0C8EC, 0x0C90C },
    { _T("MK Select Portrait"), 0x2C72C, 0x2C74C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("MK Win Portrait"), 0x3012C, 0x301CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HK[] =
{
    { _T("HK Demitri"), 0x0C92C, 0x0C94C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Demitri 2nd palette"), 0x1AD6C, 0x1AD8C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Teledash 1"), 0x0C98C, 0x0C9AC, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Teledash 2"), 0x0C94C, 0x0C96C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Fireball"), 0x0C96C, 0x0C98C },
    { _T("HK Select Portrait"), 0x2C92C, 0x2C94C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("HK Win Portrait"), 0x30BCC, 0x30C6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_PP[] =
{
    { _T("PP Demitri"), 0x0C9AC, 0x0C9CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Demitri 2nd palette"), 0x1AD8C, 0x1ADAC, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Teledash 1"), 0x0CA0C, 0x0CA2C, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Teledash 2"), 0x0C9CC, 0x0C9EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Fireball"), 0x0C9EC, 0x0CA0C },
    { _T("PP Select Portrait"), 0x2CB2C, 0x2CB4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("PP Win Portrait"), 0x3166C, 0x3170C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_KK[] =
{
    { _T("KK Demitri"), 0x0CA2C, 0x0CA4C, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Demitri 2nd palette"), 0x1ADAC, 0x1ADCC, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Teledash 1"), 0x0CA8C, 0x0CAAC, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Teledash 2"), 0x0CA4C, 0x0CA6C, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Fireball"), 0x0CA6C, 0x0CA8C },
    { _T("KK Select Portrait"), 0x2CD2C, 0x2CD4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("KK Win Portrait"), 0x3210C, 0x321AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AP[] =
{
    { _T("AP Demitri"), 0x0CAAC, 0x0CACC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Demitri 2nd palette"), 0x1ADCC, 0x1ADEC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Teledash 1"), 0x0CB0C, 0x0CB2C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Teledash 2"), 0x0CACC, 0x0CAEC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Fireball"), 0x0CAEC, 0x0CB0C },
    { _T("AP Select Portrait"), 0x2CF2C, 0x2CF4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("AP Win Portrait"), 0x32BAC, 0x32C4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AK[] =
{
    { _T("AK Demitri"), 0x0CB2C, 0x0CB4C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Demitri 2nd palette"), 0x1ADEC, 0x1AE0C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Teledash 1"), 0x0CB8C, 0x0CBAC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Teledash 2"), 0x0CB4C, 0x0CB6C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Fireball"), 0x0CB6C, 0x0CB8C },
    { _T("AK Select Portrait"), 0x2D12C, 0x2D14C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("AK Win Portrait"), 0x3364C, 0x336EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LP[] =
{
    { _T("LP Gallon"), 0x0CBAC, 0x0CBCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("LP Intro/Outro"), 0x0CBCC, 0x0CBEC },
    { _T("LP 236P/41236KK/j.HP"), 0x0CBEC, 0x0CC0C },
    { _T("LP 236P/28K/Outro Flash"), 0x0CC0C, 0x0CC2C },
    { _T("LP Select Portrait"), 0x2BF4C, 0x2BF6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("LP Win Portrait"), 0x2D74C, 0x2D7EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MP[] =
{
    { _T("MP Gallon"), 0x0CC2C, 0x0CC4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("MP Intro/Outro"), 0x0CC4C, 0x0CC6C },
    { _T("MP 236P/41236KK/j.HP"), 0x0CC6C, 0x0CC8C },
    { _T("MP 236P/28K/Outro Flash"), 0x0CC8C, 0x0CCAC },
    { _T("MP Select Portrait"), 0x2C14C, 0x2C16C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("MP Win Portrait"), 0x2E1EC, 0x2E28C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HP[] =
{
    { _T("HP Gallon"), 0x0CCAC, 0x0CCCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("HP Intro/Outro"), 0x0CCCC, 0x0CCEC },
    { _T("HP 236P/41236KK/j.HP"), 0x0CCEC, 0x0CD0C },
    { _T("HP 236P/28K/Outro Flash"), 0x0CD0C, 0x0CD2C },
    { _T("HP Select Portrait"), 0x2C34C, 0x2C36C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("HP Win Portrait"), 0x2EC8C, 0x2ED2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LK[] =
{
    { _T("LK Gallon"), 0x0CD2C, 0x0CD4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("LK Intro/Outro"), 0x0CD4C, 0x0CD6C },
    { _T("LK 236P/41236KK/j.HP"), 0x0CD6C, 0x0CD8C },
    { _T("LK 236P/28K/Outro Flash"), 0x0CD8C, 0x0CDAC },
    { _T("LK Select Portrait"), 0x2C54C, 0x2C56C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("LK Win Portrait"), 0x2F72C, 0x2F7CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MK[] =
{
    { _T("MK Gallon"), 0x0CDAC, 0x0CDCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("MK Intro/Outro"), 0x0CDCC, 0x0CDEC },
    { _T("MK 236P/41236KK/j.HP"), 0x0CDEC, 0x0CE0C },
    { _T("MK 236P/28K/Outro Flash"), 0x0CE0C, 0x0CE2C },
    { _T("MK Select Portrait"), 0x2C74C, 0x2C76C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("MK Win Portrait"), 0x301CC, 0x3026C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HK[] =
{
    { _T("HK Gallon"), 0x0CE2C, 0x0CE4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("HK Intro/Outro"), 0x0CE4C, 0x0CE6C },
    { _T("HK 236P/41236KK/j.HP"), 0x0CE6C, 0x0CE8C },
    { _T("HK 236P/28K/Outro Flash"), 0x0CE8C, 0x0CEAC },
    { _T("HK Select Portrait"), 0x2C94C, 0x2C96C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("HK Win Portrait"), 0x30C6C, 0x30D0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_PP[] =
{
    { _T("PP Gallon"), 0x0CEAC, 0x0CECC, indexCPS2_Vamp_Gallon, 0 },
    { _T("PP Intro/Outro"), 0x0CECC, 0x0CEEC },
    { _T("PP 236P/41236KK/j.HP"), 0x0CEEC, 0x0CF0C },
    { _T("PP 236P/28K/Outro Flash"), 0x0CF0C, 0x0CF2C },
    { _T("PP Select Portrait"), 0x2CB4C, 0x2CB6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("PP Win Portrait"), 0x3170C, 0x317AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_KK[] =
{
    { _T("KK Gallon"), 0x0CF2C, 0x0CF4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("KK Intro/Outro"), 0x0CF4C, 0x0CF6C },
    { _T("KK 236P/41236KK/j.HP"), 0x0CF6C, 0x0CF8C },
    { _T("KK 236P/28K/Outro Flash"), 0x0CF8C, 0x0CFAC },
    { _T("KK Select Portrait"), 0x2CD4C, 0x2CD6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("KK Win Portrait"), 0x321AC, 0x3224C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AP[] =
{
    { _T("AP Gallon"), 0x0CFAC, 0x0CFCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("AP Intro/Outro"), 0x0CFCC, 0x0CFEC },
    { _T("AP 236P/41236KK/j.HP"), 0x0CFEC, 0x0D00C },
    { _T("AP 236P/28K/Outro Flash"), 0x0D00C, 0x0D02C },
    { _T("AP Select Portrait"), 0x2CF4C, 0x2CF6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("AP Win Portrait"), 0x32C4C, 0x32CEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AK[] =
{
    { _T("AK Gallon"), 0x0D02C, 0x0D04C, indexCPS2_Vamp_Gallon, 0 },
    { _T("AK Intro/Outro"), 0x0D04C, 0x0D06C },
    { _T("AK 236P/41236KK/j.HP"), 0x0D06C, 0x0D08C },
    { _T("AK 236P/28K/Outro Flash"), 0x0D08C, 0x0D0AC },
    { _T("AK Select Portrait"), 0x2D14C, 0x2D16C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("AK Win Portrait"), 0x336EC, 0x3378C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LP[] =
{
    { _T("LP Victor"), 0x0D0AC, 0x0D0CC, indexCPS2_Vamp_Victor, 0 },
    { _T("LP Electric Flash"), 0x0D10C, 0x0D12C, indexCPS2_Vamp_Victor, 0 },
    { _T("LP [2]8p/[4]6P/DF Startup"), 0x0D0CC, 0x0D0EC },
    { _T("LP Electricity"), 0x0D0EC, 0x0D10C },
    { _T("LP Select Portrait"), 0x2BF6C, 0x2BF8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("LP Win Portrait"), 0x2D7EC, 0x2D88C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MP[] =
{
    { _T("MP Victor"), 0x0D12C, 0x0D14C, indexCPS2_Vamp_Victor, 0 },
    { _T("MP Electric Flash"), 0x0D18C, 0x0D1AC, indexCPS2_Vamp_Victor, 0 },
    { _T("MP [2]8p/[4]6P/DF Startup"), 0x0D14C, 0x0D16C },
    { _T("MP Electricity"), 0x0D16C, 0x0D18C },
    { _T("MP Select Portrait"), 0x2C16C, 0x2C18C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("MP Win Portrait"), 0x2E28C, 0x2E32C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HP[] =
{
    { _T("HP Victor"), 0x0D1AC, 0x0D1CC, indexCPS2_Vamp_Victor, 0 },
    { _T("HP Electric Flash"), 0x0D20C, 0x0D22C, indexCPS2_Vamp_Victor, 0 },
    { _T("HP [2]8p/[4]6P/DF Startup"), 0x0D1CC, 0x0D1EC },
    { _T("HP Electricity"), 0x0D1EC, 0x0D20C },
    { _T("HP Select Portrait"), 0x2C36C, 0x2C38C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("HP Win Portrait"), 0x2ED2C, 0x2EDCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LK[] =
{
    { _T("LK Victor"), 0x0D22C, 0x0D24C, indexCPS2_Vamp_Victor, 0 },
    { _T("LK Electric Flash"), 0x0D28C, 0x0D2AC, indexCPS2_Vamp_Victor, 0 },
    { _T("LK [2]8p/[4]6P/DF Startup"), 0x0D24C, 0x0D26C },
    { _T("LK Electricity"), 0x0D26C, 0x0D28C },
    { _T("LK Select Portrait"), 0x2C56C, 0x2C58C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("LK Win Portrait"), 0x2F7CC, 0x2F86C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MK[] =
{
    { _T("MK Victor"), 0x0D2AC, 0x0D2CC, indexCPS2_Vamp_Victor, 0 },
    { _T("MK Electric Flash"), 0x0D30C, 0x0D32C, indexCPS2_Vamp_Victor, 0 },
    { _T("MK [2]8p/[4]6P/DF Startup"), 0x0D2CC, 0x0D2EC },
    { _T("MK Electricity"), 0x0D2EC, 0x0D30C },
    { _T("MK Select Portrait"), 0x2C76C, 0x2C78C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("MK Win Portrait"), 0x3026C, 0x3030C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HK[] =
{
    { _T("HK Victor"), 0x0D32C, 0x0D34C, indexCPS2_Vamp_Victor, 0 },
    { _T("HK Electric Flash"), 0x0D38C, 0x0D3AC, indexCPS2_Vamp_Victor, 0 },
    { _T("HK [2]8p/[4]6P/DF Startup"), 0x0D34C, 0x0D36C },
    { _T("HK Electricity"), 0x0D36C, 0x0D38C },
    { _T("HK Select Portrait"), 0x2C96C, 0x2C98C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("HK Win Portrait"), 0x30D0C, 0x30DAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_PP[] =
{
    { _T("PP Victor"), 0x0D3AC, 0x0D3CC, indexCPS2_Vamp_Victor, 0 },
    { _T("PP Electric Flash"), 0x0D40C, 0x0D42C, indexCPS2_Vamp_Victor, 0 },
    { _T("PP [2]8p/[4]6P/DF Startup"), 0x0D3CC, 0x0D3EC },
    { _T("PP Electricity"), 0x0D3EC, 0x0D40C },
    { _T("PP Select Portrait"), 0x2CB6C, 0x2CB8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("PP Win Portrait"), 0x317AC, 0x3184C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_KK[] =
{
    { _T("KK Victor"), 0x0D42C, 0x0D44C, indexCPS2_Vamp_Victor, 0 },
    { _T("KK Electric Flash"), 0x0D48C, 0x0D4AC, indexCPS2_Vamp_Victor, 0 },
    { _T("KK [2]8p/[4]6P/DF Startup"), 0x0D44C, 0x0D46C },
    { _T("KK Electricity"), 0x0D46C, 0x0D48C },
    { _T("KK Select Portrait"), 0x2CD6C, 0x2CD8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("KK Win Portrait"), 0x3224C, 0x322EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AP[] =
{
    { _T("AP Victor"), 0x0D4AC, 0x0D4CC, indexCPS2_Vamp_Victor, 0 },
    { _T("AP Electric Flash"), 0x0D50C, 0x0D52C, indexCPS2_Vamp_Victor, 0 },
    { _T("AP [2]8p/[4]6P/DF Startup"), 0x0D4CC, 0x0D4EC },
    { _T("AP Electricity"), 0x0D4EC, 0x0D50C },
    { _T("AP Select Portrait"), 0x2CF6C, 0x2CF8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("AP Win Portrait"), 0x32CEC, 0x32D8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AK[] =
{
    { _T("AK Victor"), 0x0D52C, 0x0D54C, indexCPS2_Vamp_Victor, 0 },
    { _T("AK Electric Flash"), 0x0D58C, 0x0D5AC, indexCPS2_Vamp_Victor, 0 },
    { _T("AK [2]8p/[4]6P/DF Startup"), 0x0D54C, 0x0D56C },
    { _T("AK Electricity"), 0x0D56C, 0x0D58C },
    { _T("AK Select Portrait"), 0x2D16C, 0x2D18C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("AK Win Portrait"), 0x3378C, 0x3382C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LP[] =
{
    { _T("LP Zabel"), 0x0D5AC, 0x0D5CC, indexCPS2_Vamp_Zabel, 0 },
    { _T("LP 64PP/63214KK/intro/winpose"), 0x0D5CC, 0x0D5EC },
    { _T("LP Unused 1"), 0x0D5EC, 0x0D60C },
    { _T("LP Unused 2"), 0x0D60C, 0x0D62C },
    { _T("LP Select Portrait"), 0x2BF8C, 0x2BFAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("LP Win Portrait"), 0x2D88C, 0x2D92C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MP[] =
{
    { _T("MP Zabel"), 0x0D62C, 0x0D64C, indexCPS2_Vamp_Zabel, 0 },
    { _T("MP 64PP/63214KK/intro/winpose"), 0x0D64C, 0x0D66C },
    { _T("MP Unused 1"), 0x0D66C, 0x0D68C },
    { _T("MP Unused 2"), 0x0D68C, 0x0D6AC },
    { _T("MP Select Portrait"), 0x2C18C, 0x2C1AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("MP Win Portrait"), 0x2E32C, 0x2E3CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HP[] =
{
    { _T("HP Zabel"), 0x0D6AC, 0x0D6CC, indexCPS2_Vamp_Zabel, 0 },
    { _T("HP 64PP/63214KK/intro/winpose"), 0x0D6CC, 0x0D6EC },
    { _T("HP Unused 1"), 0x0D6EC, 0x0D70C },
    { _T("HP Unused 2"), 0x0D70C, 0x0D72C },
    { _T("HP Select Portrait"), 0x2C38C, 0x2C3AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("HP Win Portrait"), 0x2EDCC, 0x2EE6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LK[] =
{
    { _T("LK Zabel"), 0x0d72C, 0x0d74c, indexCPS2_Vamp_Zabel, 0 },
    { _T("LK 64PP/63214KK/intro/winpose"), 0x0d74C, 0x0d76c },
    { _T("LK Unused 1"), 0x0d76C, 0x0d78c },
    { _T("LK Unused 2"), 0x0d78C, 0x0d7ac },
    { _T("LK Select Portrait"), 0x2C58C, 0x2C5AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("LK Win Portrait"), 0x2F86C, 0x2F90C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MK[] =
{
    { _T("MK Zabel"), 0x0d7aC, 0x0d7cc, indexCPS2_Vamp_Zabel, 0 },
    { _T("MK 64PP/63214KK/intro/winpose"), 0x0d7cC, 0x0d7ec },
    { _T("MK Unused 1"), 0x0d7eC, 0x0d80c },
    { _T("MK Unused 2"), 0x0d80C, 0x0d82c },
    { _T("MK Select Portrait"), 0x2C78C, 0x2C7AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("MK Win Portrait"), 0x3030C, 0x303AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HK[] =
{
    { _T("HK Zabel"), 0x0d82C, 0x0d84c, indexCPS2_Vamp_Zabel, 0 },
    { _T("HK 64PP/63214KK/intro/winpose"), 0x0d84C, 0x0d86c },
    { _T("HK Unused 1"), 0x0d86C, 0x0d88c },
    { _T("HK Unused 2"), 0x0d88C, 0x0d8ac },
    { _T("HK Select Portrait"), 0x2C98C, 0x2C9AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("HK Win Portrait"), 0x30DAC, 0x30E4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_PP[] =
{
    { _T("PP Zabel"), 0x0d8aC, 0x0d8cc, indexCPS2_Vamp_Zabel, 0 },
    { _T("PP 64PP/63214KK/intro/winpose"), 0x0d8cC, 0x0d8ec },
    { _T("PP Unused 1"), 0x0d8eC, 0x0d90c },
    { _T("PP Unused 2"), 0x0d90C, 0x0d92c },
    { _T("PP Select Portrait"), 0x2CB8C, 0x2CBAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("PP Win Portrait"), 0x3184C, 0x318EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_KK[] =
{
    { _T("KK Zabel"), 0x0d92C, 0x0d94c, indexCPS2_Vamp_Zabel, 0 },
    { _T("KK 64PP/63214KK/intro/winpose"), 0x0d94C, 0x0d96c },
    { _T("KK Unused 1"), 0x0d96C, 0x0d98c },
    { _T("KK Unused 2"), 0x0d98C, 0x0d9ac },
    { _T("KK Select Portrait"), 0x2CD8C, 0x2CDAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("KK Win Portrait"), 0x322EC, 0x3238C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AP[] =
{
    { _T("AP Zabel"), 0x0d9aC, 0x0d9cc, indexCPS2_Vamp_Zabel, 0 },
    { _T("AP 64PP/63214KK/intro/winpose"), 0x0d9cC, 0x0d9ec },
    { _T("AP Unused 1"), 0x0d9eC, 0x0da0c },
    { _T("AP Unused 2"), 0x0da0C, 0x0da2c },
    { _T("AP Select Portrait"), 0x2CF8C, 0x2CFAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("AP Win Portrait"), 0x32D8C, 0x32E2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AK[] =
{
    { _T("AK Zabel"), 0x0da2C, 0x0da4c, indexCPS2_Vamp_Zabel, 0 },
    { _T("AK 64PP/63214KK/intro/winpose"), 0x0da4C, 0x0da6c },
    { _T("AK Unused 1"), 0x0da6C, 0x0da8c },
    { _T("AK Unused 2"), 0x0da8C, 0x0daac },
    { _T("AK Select Portrait"), 0x2D18C, 0x2D1AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("AK Win Portrait"), 0x3382C, 0x338CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LP[] =
{
    { _T("LP Morrigan"), 0x0daaC, 0x0dacc, indexCPS2_Morrigan, 0x0f },
    { _T("LP Idle sparkles/Raging demon"), 0x0dacC, 0x0daec, indexCPS2_Morrigan, 2 },
    { _T("LP Bats"), 0x0daeC, 0x0db0c },
    { _T("LP Unknown Extra"), 0x0db0C, 0x0db2c },
    { _T("LP Select Portrait"), 0x2BFAC, 0x2BFCC, indexCPS2_Morrigan, 0x20 },
    { _T("LP Win Portrait"), 0x2D92C, 0x2D9CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MP[] =
{
    { _T("MP Morrigan"), 0x0db2C, 0x0db4c, indexCPS2_Morrigan, 0x0f },
    { _T("MP Idle sparkles/Raging demon"), 0x0db4C, 0x0db6c, indexCPS2_Morrigan, 2 },
    { _T("MP Bats"), 0x0db6C, 0x0db8c },
    { _T("MP Unknown Extra"), 0x0db8C, 0x0dbac },
    { _T("MP Select Portrait"), 0x2C1AC, 0x2C1CC, indexCPS2_Morrigan, 0x20 },
    { _T("MP Win Portrait"), 0x2E3CC, 0x2E46C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HP[] =
{
    { _T("HP Morrigan"), 0x0dbaC, 0x0dbcc, indexCPS2_Morrigan, 0x0f },
    { _T("HP Idle sparkles/Raging demon"), 0x0dbcC, 0x0dbec, indexCPS2_Morrigan, 2 },
    { _T("HP Bats"), 0x0dbeC, 0x0dc0c },
    { _T("HP Unknown Extra"), 0x0dc0C, 0x0dc2c },
    { _T("HP Select Portrait"), 0x2C3AC, 0x2C3CC, indexCPS2_Morrigan, 0x20 },
    { _T("HP Win Portrait"), 0x2EE6C, 0x2EF0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LK[] =
{
    { _T("LK Morrigan"), 0x0dc2C, 0x0dc4c, indexCPS2_Morrigan, 0x0f },
    { _T("LK Idle sparkles/Raging demon"), 0x0dc4C, 0x0dc6c, indexCPS2_Morrigan, 2 },
    { _T("LK Bats"), 0x0dc6C, 0x0dc8c },
    { _T("LK Unknown Extra"), 0x0dc8C, 0x0dcac },
    { _T("LK Select Portrait"), 0x2C5AC, 0x2C5CC, indexCPS2_Morrigan, 0x20 },
    { _T("LK Win Portrait"), 0x2F90C, 0x2F9AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MK[] =
{
    { _T("MK Morrigan"), 0x0dcaC, 0x0dccc, indexCPS2_Morrigan, 0x0f },
    { _T("MK Idle sparkles/Raging demon"), 0x0dccC, 0x0dcec, indexCPS2_Morrigan, 2 },
    { _T("MK Bats"), 0x0dceC, 0x0dd0c },
    { _T("MK Unknown Extra"), 0x0dd0C, 0x0dd2c },
    { _T("MK Select Portrait"), 0x2C7AC, 0x2C7CC, indexCPS2_Morrigan, 0x20 },
    { _T("MK Win Portrait"), 0x303AC, 0x3044C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HK[] =
{
    { _T("HK Morrigan"), 0x0dd2C, 0x0dd4c, indexCPS2_Morrigan, 0x0f },
    { _T("HK Idle sparkles/Raging demon"), 0x0dd4C, 0x0dd6c, indexCPS2_Morrigan, 2 },
    { _T("HK Bats"), 0x0dd6C, 0x0dd8c },
    { _T("HK Unknown Extra"), 0x0dd8C, 0x0ddac },
    { _T("HK Select Portrait"), 0x2C9AC, 0x2C9CC, indexCPS2_Morrigan, 0x20 },
    { _T("HK Win Portrait"), 0x30E4C, 0x30EEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_PP[] =
{
    { _T("PP Morrigan"), 0x0ddaC, 0x0ddcc, indexCPS2_Morrigan, 0x0f },
    { _T("PP Idle sparkles/Raging demon"), 0x0ddcC, 0x0ddec, indexCPS2_Morrigan, 2 },
    { _T("PP Bats"), 0x0ddeC, 0x0de0c },
    { _T("PP Unknown Extra"), 0x0de0C, 0x0de2c },
    { _T("PP Select Portrait"), 0x2CBAC, 0x2CBCC, indexCPS2_Morrigan, 0x20 },
    { _T("PP Win Portrait"), 0x318EC, 0x3198C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_KK[] =
{
    { _T("KK Morrigan"), 0x0de2C, 0x0de4c, indexCPS2_Morrigan, 0x0f },
    { _T("KK Idle sparkles/Raging demon"), 0x0de4C, 0x0de6c, indexCPS2_Morrigan, 2 },
    { _T("KK Bats"), 0x0de6C, 0x0de8c },
    { _T("KK Unknown Extra"), 0x0de8C, 0x0deac },
    { _T("KK Select Portrait"), 0x2CDAC, 0x2CDCC, indexCPS2_Morrigan, 0x20 },
    { _T("KK Win Portrait"), 0x3238C, 0x3242C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AP[] =
{
    { _T("AP Morrigan"), 0x0deaC, 0x0decc, indexCPS2_Morrigan, 0x0f },
    { _T("AP Idle sparkles/Raging demon"), 0x0decC, 0x0deec, indexCPS2_Morrigan, 2 },
    { _T("AP Bats"), 0x0deeC, 0x0df0c },
    { _T("AP Unknown Extra"), 0x0df0C, 0x0df2c },
    { _T("AP Select Portrait"), 0x2CFAC, 0x2CFCC, indexCPS2_Morrigan, 0x20 },
    { _T("AP Win Portrait"), 0x32E2C, 0x32ECC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AK[] =
{
    { _T("AK Morrigan"), 0x0df2C, 0x0df4c, indexCPS2_Morrigan, 0x0f },
    { _T("AK Idle sparkles/Raging demon"), 0x0df4C, 0x0df6c, indexCPS2_Morrigan, 2 },
    { _T("AK Bats"), 0x0df6C, 0x0df8c },
    { _T("AK Unknown Extra"), 0x0df8C, 0x0dfac },
    { _T("AK Select Portrait"), 0x2D1AC, 0x2D1CC, indexCPS2_Morrigan, 0x20 },
    { _T("AK Win Portrait"), 0x338CC, 0x3396C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LP[] =
{
    { _T("LP Anakaris"), 0x0dfaC, 0x0dfcc, indexCPS2_Anakaris, 0 },
    { _T("LP 2.HP/Mummies"), 0x0dfeC, 0x0e00c, indexCPS2_Anakaris, 2 },
    { _T("LP 426KK/62KK Light"), 0x0dfcC, 0x0dfec },
    { _T("LP Pharaoh Magic Orbs"), 0x0e00C, 0x0e02c, indexCPS2_Anakaris, 3 },
    { _T("LP Select Portrait"), 0x2BFCC, 0x2BFEC, indexCPS2_Anakaris, 0x20 },
    { _T("LP Win Portrait"), 0x2D9CC, 0x2DA6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MP[] =
{
    { _T("MP Anakaris"), 0x0e02C, 0x0e04c, indexCPS2_Anakaris, 0 },
    { _T("MP 2.HP/Mummies"), 0x0e06C, 0x0e08c, indexCPS2_Anakaris, 2 },
    { _T("MP 426KK/62KK Light"), 0x0e04C, 0x0e06c },
    { _T("MP Pharaoh Magic Orbs"), 0x0e08C, 0x0e0ac, indexCPS2_Anakaris, 3 },
    { _T("MP Select Portrait"), 0x2C1CC, 0x2C1EC, indexCPS2_Anakaris, 0x20 },
    { _T("MP Win Portrait"), 0x2E46C, 0x2E50C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HP[] =
{
    { _T("HP Anakaris"), 0x0e0aC, 0x0e0cc, indexCPS2_Anakaris, 0 },
    { _T("HP 2.HP/Mummies"), 0x0e0eC, 0x0e10c, indexCPS2_Anakaris, 2 },
    { _T("HP 426KK/62KK Light"), 0x0e0cC, 0x0e0ec },
    { _T("HP Pharaoh Magic Orbs"), 0x0e10C, 0x0e12c, indexCPS2_Anakaris, 3 },
    { _T("HP Select Portrait"), 0x2C3CC, 0x2C3EC, indexCPS2_Anakaris, 0x20 },
    { _T("HP Win Portrait"), 0x2EF0C, 0x2EFAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LK[] =
{
    { _T("LK Anakaris"), 0x0e12C, 0x0e14c, indexCPS2_Anakaris, 0 },
    { _T("LK 2.HP/Mummies"), 0x0e16C, 0x0e18c, indexCPS2_Anakaris, 2 },
    { _T("LK 426KK/62KK Light"), 0x0e14C, 0x0e16c },
    { _T("LK Pharaoh Magic Orbs"), 0x0e18C, 0x0e1ac, indexCPS2_Anakaris, 3 },
    { _T("LK Select Portrait"), 0x2C5CC, 0x2C5EC, indexCPS2_Anakaris, 0x20 },
    { _T("LK Win Portrait"), 0x2F9AC, 0x2FA4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MK[] =
{
    { _T("MK Anakaris"), 0x0e1aC, 0x0e1cc, indexCPS2_Anakaris, 0 },
    { _T("MK 2.HP/Mummies"), 0x0e1eC, 0x0e20c, indexCPS2_Anakaris, 2 },
    { _T("MK 426KK/62KK Light"), 0x0e1cC, 0x0e1ec },
    { _T("MK Pharaoh Magic Orbs"), 0x0e20C, 0x0e22c, indexCPS2_Anakaris, 3 },
    { _T("MK Select Portrait"), 0x2C7CC, 0x2C7EC, indexCPS2_Anakaris, 0x20 },
    { _T("MK Win Portrait"), 0x3044C, 0x304EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HK[] =
{
    { _T("HK Anakaris"), 0x0e22C, 0x0e24c, indexCPS2_Anakaris, 0 },
    { _T("HK 2.HP/Mummies"), 0x0e26C, 0x0e28c, indexCPS2_Anakaris, 2 },
    { _T("HK 426KK/62KK Light"), 0x0e24C, 0x0e26c },
    { _T("HK Pharaoh Magic Orbs"), 0x0e28C, 0x0e2ac, indexCPS2_Anakaris, 3 },
    { _T("HK Select Portrait"), 0x2C9CC, 0x2C9EC, indexCPS2_Anakaris, 0x20 },
    { _T("HK Win Portrait"), 0x30EEC, 0x30F8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_PP[] =
{
    { _T("PP Anakaris"), 0x0e2aC, 0x0e2cc, indexCPS2_Anakaris, 0 },
    { _T("PP 2.HP/Mummies"), 0x0e2eC, 0x0e30c, indexCPS2_Anakaris, 2 },
    { _T("PP 426KK/62KK Light"), 0x0e2cC, 0x0e2ec },
    { _T("PP Pharaoh Magic Orbs"), 0x0e30C, 0x0e32c, indexCPS2_Anakaris, 3 },
    { _T("PP Select Portrait"), 0x2CBCC, 0x2CBEC, indexCPS2_Anakaris, 0x20 },
    { _T("PP Win Portrait"), 0x3198C, 0x31A2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_KK[] =
{
    { _T("KK Anakaris"), 0x0e32C, 0x0e34c, indexCPS2_Anakaris, 0 },
    { _T("KK 2.HP/Mummies"), 0x0e36C, 0x0e38c, indexCPS2_Anakaris, 2 },
    { _T("KK 426KK/62KK Light"), 0x0e34C, 0x0e36c },
    { _T("KK Pharaoh Magic Orbs"), 0x0e38C, 0x0e3ac, indexCPS2_Anakaris, 3 },
    { _T("KK Select Portrait"), 0x2CDCC, 0x2CDEC, indexCPS2_Anakaris, 0x20 },
    { _T("KK Win Portrait"), 0x3242C, 0x324CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AP[] =
{
    { _T("AP Anakaris"), 0x0e3aC, 0x0e3cc, indexCPS2_Anakaris, 0 },
    { _T("AP 2.HP/Mummies"), 0x0e3eC, 0x0e40c, indexCPS2_Anakaris, 2 },
    { _T("AP 426KK/62KK Light"), 0x0e3cC, 0x0e3ec },
    { _T("AP Pharaoh Magic Orbs"), 0x0e40C, 0x0e42c, indexCPS2_Anakaris, 3 },
    { _T("AP Select Portrait"), 0x2CFCC, 0x2CFEC, indexCPS2_Anakaris, 0x20 },
    { _T("AP Win Portrait"), 0x32ECC, 0x32F6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AK[] =
{
    { _T("AK Anakaris"), 0x0e42C, 0x0e44c, indexCPS2_Anakaris, 0 },
    { _T("AK 2.HP/Mummies"), 0x0e46C, 0x0e48c, indexCPS2_Anakaris, 2 },
    { _T("AK 426KK/62KK Light"), 0x0e44C, 0x0e46c },
    { _T("AK Pharaoh Magic Orbs"), 0x0e48C, 0x0e4ac, indexCPS2_Anakaris, 3 },
    { _T("AK Select Portrait"), 0x2D1CC, 0x2D1EC, indexCPS2_Anakaris, 0x20 },
    { _T("AK Win Portrait"), 0x3396C, 0x33A0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LP[] =
{
    { _T("LP Felicia"), 0x0e4aC, 0x0e4cc, indexCPS2_Felicia, 0 },
    { _T("LP Helpers/Mouse"), 0x0e4cC, 0x0e4ec },
    { _T("LP Bubble/Butterfly"), 0x0e4eC, 0x0e50c },
    { _T("LP Unknown Extra"), 0x0e50C, 0x0e52c },
    { _T("LP Select portrait"), 0x2BFEC, 0x2C00C, indexCPS2_Felicia, 0x20 },
    { _T("LP Win Portrait"), 0x2DA6C, 0x2DB0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MP[] =
{
    { _T("MP Felicia"), 0x0e52C, 0x0e54c, indexCPS2_Felicia, 0 },
    { _T("MP Helpers/Mouse"), 0x0e54C, 0x0e56c },
    { _T("MP Bubble/Butterfly"), 0x0e56C, 0x0e58c },
    { _T("MP Unknown Extra"), 0x0e58C, 0x0e5ac },
    { _T("MP Select Portrait"), 0x2C1EC, 0x2C20C, indexCPS2_Felicia, 0x20 },
    { _T("MP Win Portrait"), 0x2E50C, 0x2E5AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HP[] =
{
    { _T("HP Felicia"), 0x0e5aC, 0x0e5cc, indexCPS2_Felicia, 0 },
    { _T("HP Helpers/Mouse"), 0x0e5cC, 0x0e5ec },
    { _T("HP Bubble/Butterfly"), 0x0e5eC, 0x0e60c },
    { _T("HP Unknown Extra"), 0x0e60C, 0x0e62c },
    { _T("HP Select Portrait"), 0x2C3EC, 0x2C40C, indexCPS2_Felicia, 0x20 },
    { _T("HP Win Portrait"), 0x2EFAC, 0x2F04C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LK[] =
{
    { _T("LK Felicia"), 0x0e62C, 0x0e64c, indexCPS2_Felicia, 0 },
    { _T("LK Helpers/Mouse"), 0x0e64C, 0x0e66c },
    { _T("LK Bubble/Butterfly"), 0x0e66C, 0x0e68c },
    { _T("LK Unknown Extra"), 0x0e68C, 0x0e6ac },
    { _T("LK Select Portrait"), 0x2C5EC, 0x2C60C, indexCPS2_Felicia, 0x20 },
    { _T("LK Win Portrait"), 0x2FA4C, 0x2FAEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MK[] =
{
    { _T("MK Felicia"), 0x0e6aC, 0x0e6cc, indexCPS2_Felicia, 0 },
    { _T("MK Helpers/Mouse"), 0x0e6cC, 0x0e6ec },
    { _T("MK Bubble/Butterfly"), 0x0e6eC, 0x0e70c },
    { _T("MK Unknown Extra"), 0x0e70C, 0x0e72c },
    { _T("MK Select Portrait"), 0x2C7EC, 0x2C80C, indexCPS2_Felicia, 0x20 },
    { _T("MK Win Portrait"), 0x304EC, 0x3058C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HK[] =
{
    { _T("HK Felicia"), 0x0e72C, 0x0e74c, indexCPS2_Felicia, 0 },
    { _T("HK Helpers/Mouse"), 0x0e74C, 0x0e76c },
    { _T("HK Bubble/Butterfly"), 0x0e76C, 0x0e78c },
    { _T("HK Unknown Extra"), 0x0e78C, 0x0e7ac },
    { _T("HK Select Portrait"), 0x2C9EC, 0x2CA0C, indexCPS2_Felicia, 0x20 },
    { _T("HK Win Portrait"), 0x30F8C, 0x3102C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_PP[] =
{
    { _T("PP Felicia"), 0x0e7aC, 0x0e7cc, indexCPS2_Felicia, 0 },
    { _T("PP Helpers/Mouse"), 0x0e7cC, 0x0e7ec },
    { _T("PP Bubble/Butterfly"), 0x0e7eC, 0x0e80c },
    { _T("PP Unknown Extra"), 0x0e80C, 0x0e82c },
    { _T("PP Select Portrait"), 0x2CBEC, 0x2CC0C, indexCPS2_Felicia, 0x20 },
    { _T("PP Win Portrait"), 0x31A2C, 0x31ACC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_KK[] =
{
    { _T("KK Felicia"), 0x0e82C, 0x0e84c, indexCPS2_Felicia, 0 },
    { _T("KK Helpers/Mouse"), 0x0e84C, 0x0e86c },
    { _T("KK Bubble/Butterfly"), 0x0e86C, 0x0e88c },
    { _T("KK Unknown Extra"), 0x0e88C, 0x0e8ac },
    { _T("KK Select Portrait"), 0x2CDEC, 0x2CE0C, indexCPS2_Felicia, 0x20 },
    { _T("KK Win Portrait"), 0x324CC, 0x3256C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AP[] =
{
    { _T("AP Felicia"), 0x0e8aC, 0x0e8cc, indexCPS2_Felicia, 0 },
    { _T("AP Helpers/Mouse"), 0x0e8cC, 0x0e8ec },
    { _T("AP Bubble/Butterfly"), 0x0e8eC, 0x0e90c },
    { _T("AP Unknown Extra"), 0x0e90C, 0x0e92c },
    { _T("AP Select Portrait"), 0x2CFEC, 0x2D00C, indexCPS2_Felicia, 0x20 },
    { _T("AP Win Portrait"), 0x32F6C, 0x3300C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AK[] =
{
    { _T("AK Felicia"), 0x0e92C, 0x0e94c, indexCPS2_Felicia, 0 },
    { _T("AK Helpers/Mouse"), 0x0e94C, 0x0e96c },
    { _T("AK Bubble/Butterfly"), 0x0e96C, 0x0e98c },
    { _T("AK Unknown Extra"), 0x0e98C, 0x0e9ac },
    { _T("AK Select Portrait"), 0x2D1EC, 0x2D20C, indexCPS2_Felicia, 0x20 },
    { _T("AK Win Portrait"), 0x33A0C, 0x33AAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LP[] =
{
    { _T("LP Bishamon"), 0x0e9aC, 0x0e9cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Ghosts/Hitsparks"), 0x0e9eC, 0x0ea0c },
    { _T("LP 41236KK"), 0x0e9cC, 0x0e9ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Unknown Extra"), 0x0ea0C, 0x0ea2c },
    { _T("LP Select Portrait"), 0x2C00C, 0x2C02C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LP Win Portrait"), 0x2DB0C, 0x2DBAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MP[] =
{
    { _T("MP Bishamon"), 0x0ea2C, 0x0ea4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Ghosts/Hitsparks"), 0x0ea6C, 0x0ea8c },
    { _T("MP 41236KK"), 0x0ea4C, 0x0ea6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Unknown Extra"), 0x0ea8C, 0x0eaac },
    { _T("MP Select Portrait"), 0x2C20C, 0x2C22C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MP Win Portrait"), 0x2E5AC, 0x2E64C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HP[] =
{
    { _T("HP Bishamon"), 0x0eaaC, 0x0eacc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Ghosts/Hitsparks"), 0x0eaeC, 0x0eb0c },
    { _T("HP 41236KK"), 0x0eacC, 0x0eaec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Unknown Extra"), 0x0eb0C, 0x0eb2c },
    { _T("HP Select Portrait"), 0x2C40C, 0x2C42C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HP Win Portrait"), 0x2F04C, 0x2F0EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LK[] =
{
    { _T("LK Bishamon"), 0x0eb2C, 0x0eb4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Ghosts/Hitsparks"), 0x0eb6C, 0x0eb8c },
    { _T("LK 41236KK"), 0x0eb4C, 0x0eb6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Unknown Extra"), 0x0eb8C, 0x0ebac },
    { _T("LK Select Portrait"), 0x2C60C, 0x2C62C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LK Win Portrait"), 0x2FAEC, 0x2FB8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MK[] =
{
    { _T("MK Bishamon"), 0x0ebaC, 0x0ebcc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Ghosts/Hitsparks"), 0x0ebeC, 0x0ec0c },
    { _T("MK 41236KK"), 0x0ebcC, 0x0ebec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Unknown Extra"), 0x0ec0C, 0x0ec2c },
    { _T("MK Select Portrait"), 0x2C80C, 0x2C82C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MK Win Portrait"), 0x3058C, 0x3062C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HK[] =
{
    { _T("HK Bishamon"), 0x0ec2C, 0x0ec4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Ghosts/Hitsparks"), 0x0ec6C, 0x0ec8c },
    { _T("HK 41236KK"), 0x0ec4C, 0x0ec6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Unknown Extra"), 0x0ec8C, 0x0ecac },
    { _T("HK Select Portrait"), 0x2CA0C, 0x2CA2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HK Win Portrait"), 0x3102C, 0x310CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_PP[] =
{
    { _T("PP Bishamon"), 0x0ecaC, 0x0eccc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("PP Ghosts/Hitsparks"), 0x0eceC, 0x0ed0c },
    { _T("PP 41236KK"), 0x0eccC, 0x0ecec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("PP Unknown Extra"), 0x0ed0C, 0x0ed2c },
    { _T("PP Select Portrait"), 0x2CC0C, 0x2CC2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("PP Win Portrait"), 0x31ACC, 0x31B6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_KK[] =
{
    { _T("KK Bishamon"), 0x0ed2C, 0x0ed4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("KK Ghosts/Hitsparks"), 0x0ed6C, 0x0ed8c },
    { _T("KK 41236KK"), 0x0ed4C, 0x0ed6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("KK Unknown Extra"), 0x0ed8C, 0x0edac },
    { _T("KK Select Portrait"), 0x2CE0C, 0x2CE2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("KK Win Portrait"), 0x3256C, 0x3260C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AP[] =
{
    { _T("AP Bishamon"), 0x0edaC, 0x0edcc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AP Ghosts/Hitsparks"), 0x0edeC, 0x0ee0c },
    { _T("AP 41236KK"), 0x0edcC, 0x0edec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AP Unknown Extra"), 0x0ee0C, 0x0ee2c },
    { _T("AP Select Portrait"), 0x2D00C, 0x2D02C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("AP Win Portrait"), 0x3300C, 0x330AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AK[] =
{
    { _T("AK Bishamon"), 0x0ee2C, 0x0ee4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AK Ghosts/Hitsparks"), 0x0ee6C, 0x0ee8c },
    { _T("AK 41236KK"), 0x0ee4C, 0x0ee6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AK Unknown Extra"), 0x0ee8C, 0x0eeac },
    { _T("AK Select Portrait"), 0x2D20C, 0x2D22C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("AK Win Portrait"), 0x33AAC, 0x33B4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LP[] =
{
    { _T("LP Aulbath"), 0x0eeaC, 0x0eecc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("LP Water/s.MK/j.MP"), 0x0eecC, 0x0eeec },
    { _T("LP Poison Cloud"), 0x0ef0C, 0x0ef2c },
    { _T("LP Mach Crab (not full pal)"), 0x0eeeC, 0x0ef0c },
    { _T("LP Select Portrait"), 0x2C02C, 0x2C04C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("LP Win Portrait"), 0x2DBAC, 0x2DC4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MP[] =
{
    { _T("MP Aulbath"), 0x0ef2C, 0x0ef4c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("MP Water/s.MK/j.MP"), 0x0ef4C, 0x0ef6c },
    { _T("MP Poison Cloud"), 0x0ef8C, 0x0efac },
    { _T("MP Mach Crab (not full pal)"), 0x0ef6C, 0x0ef8c },
    { _T("MP Select Portrait"), 0x2C22C, 0x2C24C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("MP Win Portrait"), 0x2E64C, 0x2E6EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HP[] =
{
    { _T("HP Aulbath"), 0x0efaC, 0x0efcc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("HP Water/s.MK/j.MP"), 0x0efcC, 0x0efec },
    { _T("HP Poison Cloud"), 0x0f00C, 0x0f02c },
    { _T("HP Mach Crab (not full pal)"), 0x0efeC, 0x0f00c },
    { _T("HP Select Portrait"), 0x2C42C, 0x2C44C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("HP Win Portrait"), 0x2F0EC, 0x2F18C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LK[] =
{
    { _T("LK Aulbath"), 0x0f02C, 0x0f04c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("LK Water/s.MK/j.MP"), 0x0f04C, 0x0f06c },
    { _T("LK Poison Cloud"), 0x0f08C, 0x0f0ac },
    { _T("LK Mach Crab (not full pal)"), 0x0f06C, 0x0f08c },
    { _T("LK Select Portrait"), 0x2C62C, 0x2C64C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("LK Win Portrait"), 0x2FB8C, 0x2FC2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MK[] =
{
    { _T("MK Aulbath"), 0x0f0aC, 0x0f0cc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("MK Water/s.MK/j.MP"), 0x0f0cC, 0x0f0ec },
    { _T("MK Poison Cloud"), 0x0f10C, 0x0f12c },
    { _T("MK Mach Crab (not full pal)"), 0x0f0eC, 0x0f10c },
    { _T("MK Select Portrait"), 0x2C82C, 0x2C84C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("MK Win Portrait"), 0x3062C, 0x306CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HK[] =
{
    { _T("HK Aulbath"), 0x0f12C, 0x0f14c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("HK Water/s.MK/j.MP"), 0x0f14C, 0x0f16c },
    { _T("HK Poison Cloud"), 0x0f18C, 0x0f1ac },
    { _T("HK Mach Crab (not full pal)"), 0x0f16C, 0x0f18c },
    { _T("HK Select Portrait"), 0x2CA2C, 0x2CA4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("HK Win Portrait"), 0x310CC, 0x3116C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_PP[] =
{
    { _T("PP Aulbath"), 0x0f1aC, 0x0f1cc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("PP Poison Cloud"), 0x0f20C, 0x0f22c },
    { _T("PP Water/s.MK/j.MP"), 0x0f1cC, 0x0f1ec },
    { _T("PP Mach Crab (not full pal)"), 0x0f1eC, 0x0f20c },
    { _T("PP Select Portrait"), 0x2CC2C, 0x2CC4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("PP Win Portrait"), 0x31B6C, 0x31C0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_KK[] =
{
    { _T("KK Aulbath"), 0x0f22C, 0x0f24c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("KK Water/s.MK/j.MP"), 0x0f24C, 0x0f26c },
    { _T("KK Poison Cloud"), 0x0f28C, 0x0f2ac },
    { _T("KK Mach Crab (not full pal)"), 0x0f26C, 0x0f28c },
    { _T("KK Select Portrait"), 0x2CE2C, 0x2CE4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("KK Win Portrait"), 0x3260C, 0x326AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AP[] =
{
    { _T("AP Aulbath"), 0x0f2aC, 0x0f2cc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("AP Water/s.MK/j.MP"), 0x0f2cC, 0x0f2ec },
    { _T("AP Poison Cloud"), 0x0f30C, 0x0f32c },
    { _T("AP Mach Crab (not full pal)"), 0x0f2eC, 0x0f30c },
    { _T("AP Select Portrait"), 0x2D02C, 0x2D04C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("AP Win Portrait"), 0x330AC, 0x3314C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AK[] =
{
    { _T("AK Aulbath"), 0x0f32C, 0x0f34c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("AK Water/s.MK/j.MP"), 0x0f34C, 0x0f36c },
    { _T("AK Poison Cloud"), 0x0f38C, 0x0f3ac },
    { _T("AK Mach Crab (not full pal)"), 0x0f36C, 0x0f38c },
    { _T("AK Select Portrait"), 0x2D22C, 0x2D24C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("AK Win Portrait"), 0x33B4C, 0x33BEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LP[] =
{
    { _T("LP Sasquatch"), 0x0f3aC, 0x0f3cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("LP Ice Extras"), 0x0f40C, 0x0f42c },
    { _T("LP Banana"), 0x0f3cC, 0x0f3ec },
    { _T("LP Smoke"), 0x0f3eC, 0x0f40c },
    { _T("LP Select Portrait"), 0x2C04C, 0x2C06C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("LP Win Portrait"), 0x2DC4C, 0x2DCEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MP[] =
{
    { _T("MP Sasquatch"), 0x0f42C, 0x0f44c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("MP Ice Extras"), 0x0f48C, 0x0f4ac },
    { _T("MP Banana"), 0x0f44C, 0x0f46c },
    { _T("MP Smoke"), 0x0f46C, 0x0f48c },
    { _T("MP Select Portrait"), 0x2C24C, 0x2C26C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("MP Win Portrait"), 0x2E6EC, 0x2E78C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HP[] =
{
    { _T("HP Sasquatch"), 0x0f4aC, 0x0f4cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("HP Ice Extras"), 0x0f50C, 0x0f52c },
    { _T("HP Banana"), 0x0f4cC, 0x0f4ec },
    { _T("HP Smoke"), 0x0f4eC, 0x0f50c },
    { _T("HP Select Portrait"), 0x2C44C, 0x2C46C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("HP Win Portrait"), 0x2F18C, 0x2F22C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LK[] =
{
    { _T("LK Sasquatch"), 0x0f52C, 0x0f54c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("LK Ice Extras"), 0x0f58C, 0x0f5ac },
    { _T("LK Banana"), 0x0f54C, 0x0f56c },
    { _T("LK Smoke"), 0x0f56C, 0x0f58c },
    { _T("LK Select Portrait"), 0x2C64C, 0x2C66C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("LK Win Portrait"), 0x2FC2C, 0x2FCCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MK[] =
{
    { _T("MK Sasquatch"), 0x0f5aC, 0x0f5cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("MK Ice Extras"), 0x0f60C, 0x0f62c },
    { _T("MK Banana"), 0x0f5cC, 0x0f5ec },
    { _T("MK Smoke"), 0x0f5eC, 0x0f60c },
    { _T("MK Select Portrait"), 0x2C84C, 0x2C86C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("MK Win Portrait"), 0x306CC, 0x3076C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HK[] =
{
    { _T("HK Sasquatch"), 0x0f62c, 0x0f64c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("HK Ice Extras"), 0x0f68c, 0x0f6aC },
    { _T("HK Banana"), 0x0f64c, 0x0f66c },
    { _T("HK Smoke"), 0x0f66c, 0x0f68c },
    { _T("HK Select Portrait"), 0x2A84C, 0x2A86C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("HK Win Portrait"), 0x3116C, 0x3120C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_PP[] =
{
    { _T("PP Sasquatch"), 0x0f6aC, 0x0f6cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("PP Ice Extras"), 0x0f70C, 0x0f72c },
    { _T("PP Banana"), 0x0f6cC, 0x0f6ec },
    { _T("PP Smoke"), 0x0f6eC, 0x0f70c },
    { _T("PP Select Portrait"), 0x2CC4C, 0x2CC6C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("PP Win Portrait"), 0x31C0C, 0x31CAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_KK[] =
{
    { _T("KK Sasquatch"), 0x0f72C, 0x0f74c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("KK Ice Extras"), 0x0f78C, 0x0f7ac },
    { _T("KK Banana"), 0x0f74C, 0x0f76c },
    { _T("KK Smoke"), 0x0f76C, 0x0f78c },
    { _T("KK Select Portrait"), 0x2CE4C, 0x2CE6C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("KK Win Portrait"), 0x326AC, 0x3274C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AP[] =
{
    { _T("AP Sasquatch"), 0x0f7aC, 0x0f7cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("AP Ice Extras"), 0x0f80C, 0x0f82c },
    { _T("AP Banana"), 0x0f7cC, 0x0f7ec },
    { _T("AP Smoke"), 0x0f7eC, 0x0f80c },
    { _T("AP Select Portrait"), 0x2D04C, 0x2D06C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("AP Win Portrait"), 0x3314C, 0x331EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AK[] =
{
    { _T("AK Sasquatch"), 0x0f82C, 0x0f84c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("AK Ice Extras"), 0x0f88C, 0x0f8ac },
    { _T("AK Banana"), 0x0f84C, 0x0f86c },
    { _T("AK Smoke"), 0x0f86C, 0x0f88c },
    { _T("AK Select Portrait"), 0x2D24C, 0x2D26C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("AK Win Portrait"), 0x33BEC, 0x33C8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LP[] =
{
    { _T("LP Q-Bee"), 0x0fcaC, 0x0fccc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("LP Wings/Honey"), 0x0fccC, 0x0fcec, indexCPS2_Vamp_QBee, 1 },
    { _T("LP Wings/Honey frame 2"), 0x1ec6C, 0x1ec8c, indexCPS2_Vamp_QBee, 1 },
    { _T("LP Bees"), 0x0fd0C, 0x0fd2c },
    { _T("LP Egg"), 0x0fceC, 0x0fd0c },
    { _T("LP Intro/ES 412PP  1"), 0x1bf8C, 0x1bfac, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Intro/ES 412PP  2"), 0x1bfcC, 0x1bfec, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Intro/ES 412PP  3"), 0x1c00C, 0x1c02c, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Intro/ES 412PP  4"), 0x1c04C, 0x1c06c, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Intro/ES 412PP  5"), 0x1c08C, 0x1c0ac, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Intro/ES 412PP  6"), 0x1c0cC, 0x1c0ec, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Intro/ES 412PP  7"), 0x1c10C, 0x1c12c, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Intro/ES 412PP  8"), 0x1c14C, 0x1c16c, indexCPS2_Vamp_QBee, 0 },
    { _T("LP Select Portrait"), 0x2C08C, 0x2C0AC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("LP Win Portrait"), 0x2DD8C, 0x2DE2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MP[] =
{
    { _T("MP Q-Bee"), 0x0fd2C, 0x0fd4c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("MP Wings/Honey"), 0x0fd4C, 0x0fd6c, indexCPS2_Vamp_QBee, 1 },
    { _T("MP Wings/Honey frame 2"), 0x1ec8C, 0x1ecac, indexCPS2_Vamp_QBee, 1 },
    { _T("MP Bees"), 0x0fd8C, 0x0fdac },
    { _T("MP Egg"), 0x0fd6C, 0x0fd8c },
    { _T("MP Intro/ES 412PP  1"), 0x1c18C, 0x1c1ac, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Intro/ES 412PP  2"), 0x1c1cC, 0x1c1ec, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Intro/ES 412PP  3"), 0x1c20C, 0x1c22c, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Intro/ES 412PP  4"), 0x1c24C, 0x1c26c, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Intro/ES 412PP  5"), 0x1c28C, 0x1c2ac, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Intro/ES 412PP  6"), 0x1c2cC, 0x1c2ec, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Intro/ES 412PP  7"), 0x1c30C, 0x1c32c, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Intro/ES 412PP  8"), 0x1c34C, 0x1c36c, indexCPS2_Vamp_QBee, 0 },
    { _T("MP Select Portrait"), 0x2C28C, 0x2C2AC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("MP Win Portrait"), 0x2E82C, 0x2E8CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HP[] =
{
    { _T("HP Q-Bee"), 0x0fdaC, 0x0fdcc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("HP Wings/Honey"), 0x0fdcC, 0x0fdec, indexCPS2_Vamp_QBee, 1 },
    { _T("HP Wings/Honey frame 2"), 0x1ecaC, 0x1eccc, indexCPS2_Vamp_QBee, 1 },
    { _T("HP Bees"), 0x0fe0C, 0x0fe2c },
    { _T("HP Egg"), 0x0fdeC, 0x0fe0c },
    { _T("HP Intro/ES 412PP  1"), 0x1c38C, 0x1c3ac, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Intro/ES 412PP  2"), 0x1c3cC, 0x1c3ec, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Intro/ES 412PP  3"), 0x1c40C, 0x1c42c, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Intro/ES 412PP  4"), 0x1c44C, 0x1c46c, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Intro/ES 412PP  5"), 0x1c48C, 0x1c4ac, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Intro/ES 412PP  6"), 0x1c4cC, 0x1c4ec, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Intro/ES 412PP  7"), 0x1c50C, 0x1c52c, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Intro/ES 412PP  8"), 0x1c54C, 0x1c56c, indexCPS2_Vamp_QBee, 0 },
    { _T("HP Select Portrait"), 0x2C48C, 0x2C4AC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("HP Win Portrait"), 0x2F2CC, 0x2F36C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LK[] =
{
    { _T("LK Q-Bee"), 0x0fe2C, 0x0fe4c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("LK Wings/Honey"), 0x0fe4C, 0x0fe6c, indexCPS2_Vamp_QBee, 1 },
    { _T("LK Wings/Honey frame 2"), 0x1eccC, 0x1ecec, indexCPS2_Vamp_QBee, 1 },
    { _T("LK Bees"), 0x0fe8C, 0x0feac },
    { _T("LK Egg"), 0x0fe6C, 0x0fe8c },
    { _T("LK Intro/ES 412PP  1"), 0x1c58C, 0x1c5ac, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Intro/ES 412PP  2"), 0x1c5cC, 0x1c5ec, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Intro/ES 412PP  3"), 0x1c60C, 0x1c62c, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Intro/ES 412PP  4"), 0x1c64C, 0x1c66c, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Intro/ES 412PP  5"), 0x1c68C, 0x1c6ac, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Intro/ES 412PP  6"), 0x1c6cC, 0x1c6ec, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Intro/ES 412PP  7"), 0x1c70C, 0x1c72c, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Intro/ES 412PP  8"), 0x1c74C, 0x1c76c, indexCPS2_Vamp_QBee, 0 },
    { _T("LK Select Portrait"), 0x2C68C, 0x2C6AC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("LK Win Portrait"), 0x2FD6C, 0x2FE0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MK[] =
{
    { _T("MK Q-Bee"), 0x0feaC, 0x0fecc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("MK Wings/Honey"), 0x0fecC, 0x0feec, indexCPS2_Vamp_QBee, 1 },
    { _T("MK Wings/Honey frame 2"), 0x1eceC, 0x1ed0c, indexCPS2_Vamp_QBee, 1 },
    { _T("MK Bees"), 0x0ff0C, 0x0ff2c },
    { _T("MK Egg"), 0x0feeC, 0x0ff0c },
    { _T("MK Intro/ES 412PP  1"), 0x1c78C, 0x1c7ac, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Intro/ES 412PP  2"), 0x1c7cC, 0x1c7ec, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Intro/ES 412PP  3"), 0x1c80C, 0x1c82c, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Intro/ES 412PP  4"), 0x1c84C, 0x1c86c, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Intro/ES 412PP  5"), 0x1c88C, 0x1c8ac, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Intro/ES 412PP  6"), 0x1c8cC, 0x1c8ec, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Intro/ES 412PP  7"), 0x1c90C, 0x1c92c, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Intro/ES 412PP  8"), 0x1c94C, 0x1c96c, indexCPS2_Vamp_QBee, 0 },
    { _T("MK Select Portrait"), 0x2C88C, 0x2C8AC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("MK Win Portrait"), 0x3080C, 0x308AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HK[] =
{
    { _T("HK Q-Bee"), 0x0ff2C, 0x0ff4c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("HK Wings/Honey"), 0x0ff4C, 0x0ff6c, indexCPS2_Vamp_QBee, 1 },
    { _T("HK Wings/Honey frame 2"), 0x1ed0C, 0x1ed2c, indexCPS2_Vamp_QBee, 1 },
    { _T("HK Bees"), 0x0ff8C, 0x0ffac },
    { _T("HK Egg"), 0x0ff6C, 0x0ff8c },
    { _T("HK Intro/ES 412PP  1"), 0x1c98C, 0x1c9ac, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Intro/ES 412PP  2"), 0x1c9cC, 0x1c9ec, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Intro/ES 412PP  3"), 0x1ca0C, 0x1ca2c, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Intro/ES 412PP  4"), 0x1ca4C, 0x1ca6c, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Intro/ES 412PP  5"), 0x1ca8C, 0x1caac, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Intro/ES 412PP  6"), 0x1cacC, 0x1caec, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Intro/ES 412PP  7"), 0x1cb0C, 0x1cb2c, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Intro/ES 412PP  8"), 0x1cb4C, 0x1cb6c, indexCPS2_Vamp_QBee, 0 },
    { _T("HK Select Portrait"), 0x2CA8C, 0x2CAAC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("HK Win Portrait"), 0x312AC, 0x3134C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_PP[] =
{
    { _T("PP Q-Bee"), 0x0ffaC, 0x0ffcc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("PP Wings/Honey"), 0x0ffcC, 0x0ffec, indexCPS2_Vamp_QBee, 1 },
    { _T("PP Wings/Honey frame 2"), 0x1ed2C, 0x1ed4c, indexCPS2_Vamp_QBee, 1 },
    { _T("PP Bees"), 0x1000C, 0x1002c },
    { _T("PP Egg"), 0x0ffeC, 0x1000c },
    { _T("PP Intro/ES 412PP  1"), 0x1cb8C, 0x1cbac, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Intro/ES 412PP  2"), 0x1cbcC, 0x1cbec, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Intro/ES 412PP  3"), 0x1cc0C, 0x1cc2c, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Intro/ES 412PP  4"), 0x1cc4C, 0x1cc6c, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Intro/ES 412PP  5"), 0x1cc8C, 0x1ccac, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Intro/ES 412PP  6"), 0x1cccC, 0x1ccec, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Intro/ES 412PP  7"), 0x1cd0C, 0x1cd2c, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Intro/ES 412PP  8"), 0x1cd4C, 0x1cd6c, indexCPS2_Vamp_QBee, 0 },
    { _T("PP Select Portrait"), 0x2CC8C, 0x2CCAC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("PP Win Portrait"), 0x31D4C, 0x31DEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_KK[] =
{
    { _T("KK Q-Bee"), 0x1002C, 0x1004c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("KK Wings/Honey"), 0x1004C, 0x1006c, indexCPS2_Vamp_QBee, 1 },
    { _T("KK Wings/Honey frame 2"), 0x1ed4C, 0x1ed6c, indexCPS2_Vamp_QBee, 1 },
    { _T("KK Bees"), 0x1008C, 0x100ac },
    { _T("KK Egg"), 0x1006C, 0x1008c },
    { _T("KK Intro/ES 412PP  1"), 0x1cd8C, 0x1cdac, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Intro/ES 412PP  2"), 0x1cdcC, 0x1cdec, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Intro/ES 412PP  3"), 0x1ce0C, 0x1ce2c, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Intro/ES 412PP  4"), 0x1ce4C, 0x1ce6c, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Intro/ES 412PP  5"), 0x1ce8C, 0x1ceac, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Intro/ES 412PP  6"), 0x1cecC, 0x1ceec, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Intro/ES 412PP  7"), 0x1cf0C, 0x1cf2c, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Intro/ES 412PP  8"), 0x1cf4C, 0x1cf6c, indexCPS2_Vamp_QBee, 0 },
    { _T("KK Select Portrait"), 0x2CE8C, 0x2CEAC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("KK Win Portrait"), 0x327EC, 0x3288C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AP[] =
{
    { _T("AP Q-Bee"), 0x100aC, 0x100cc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("AP Wings/Honey"), 0x100cC, 0x100ec, indexCPS2_Vamp_QBee, 1 },
    { _T("AP Wings/Honey frame 2"), 0x1ed6C, 0x1ed8c, indexCPS2_Vamp_QBee, 1 },
    { _T("AP Bees"), 0x1010C, 0x1012c },
    { _T("AP Egg"), 0x100eC, 0x1010c },
    { _T("AP Intro/ES 412PP  1"), 0x1cf8C, 0x1cfac, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Intro/ES 412PP  2"), 0x1cfcC, 0x1cfec, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Intro/ES 412PP  3"), 0x1d00C, 0x1d02c, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Intro/ES 412PP  4"), 0x1d04C, 0x1d06c, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Intro/ES 412PP  5"), 0x1d08C, 0x1d0ac, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Intro/ES 412PP  6"), 0x1d0cC, 0x1d0ec, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Intro/ES 412PP  7"), 0x1d10C, 0x1d12c, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Intro/ES 412PP  8"), 0x1d14C, 0x1d16c, indexCPS2_Vamp_QBee, 0 },
    { _T("AP Select Portrait"), 0x2D08C, 0x2D0AC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("AP Win Portrait"), 0x3328C, 0x3332C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AK[] =
{
    { _T("AK Q-Bee"), 0x1012C, 0x1014c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { _T("AK Wings/Honey"), 0x1014C, 0x1016c, indexCPS2_Vamp_QBee, 1 },
    { _T("AK Wings/Honey frame 2"), 0x1ed8C, 0x1edac, indexCPS2_Vamp_QBee, 1 },
    { _T("AK Bees"), 0x1018C, 0x101ac },
    { _T("AK Egg"), 0x1016C, 0x1018c },
    { _T("AK Intro/ES 412PP  1"), 0x1d18C, 0x1d1ac, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Intro/ES 412PP  2"), 0x1d1cC, 0x1d1ec, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Intro/ES 412PP  3"), 0x1d20C, 0x1d22c, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Intro/ES 412PP  4"), 0x1d24C, 0x1d26c, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Intro/ES 412PP  5"), 0x1d28C, 0x1d2ac, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Intro/ES 412PP  6"), 0x1d2cC, 0x1d2ec, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Intro/ES 412PP  7"), 0x1d30C, 0x1d32c, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Intro/ES 412PP  8"), 0x1d34C, 0x1d36c, indexCPS2_Vamp_QBee, 0 },
    { _T("AK Select Portrait"), 0x2D28C, 0x2D2AC, indexCPS2_Vamp_QBee, 0x20 },
    { _T("AK Win Portrait"), 0x33D2C, 0x33DCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LP[] =
{
    { _T("LP Lei-Lei"), 0x101aC, 0x101cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LP Dust, Weapons"), 0x101eC, 0x1020c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LP Lin-Lin"), 0x101cC, 0x101ec },
    { _T("LP Unknown Extra"), 0x1020C, 0x1022c },
    { _T("LP Select Portrait"), 0x2C0AC, 0x2C0CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("LP Win Portrait"), 0x2DE2C, 0x2DECC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MP[] =
{
    { _T("MP Lei-Lei"), 0x1022C, 0x1024c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MP Dust, Weapons"), 0x1026C, 0x1028c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MP Lin-Lin"), 0x1024C, 0x1026c },
    { _T("MP Unknown Extra"), 0x1028C, 0x102ac },
    { _T("MP Select Portrait"), 0x2C2AC, 0x2C2CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("MP Win Portrait"), 0x2E8CC, 0x2E96C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HP[] =
{
    { _T("HP Lei-Lei"), 0x102aC, 0x102cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HP Dust, Weapons"), 0x102eC, 0x1030c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HP Lin-Lin"), 0x102cC, 0x102ec },
    { _T("HP Unknown Extra"), 0x1030C, 0x1032c },
    { _T("HP Select Portrait"), 0x2C4AC, 0x2C4CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("HP Win Portrait"), 0x2F36C, 0x2F40C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LK[] =
{
    { _T("LK Lei-Lei"), 0x1032C, 0x1034c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LK Dust, Weapons"), 0x1036C, 0x1038c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LK Lin-Lin"), 0x1034C, 0x1036c },
    { _T("LK Unknown Extra"), 0x1038C, 0x103ac },
    { _T("LK Select Portrait"), 0x2C6AC, 0x2C6CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("LK Win Portrait"), 0x2FE0C, 0x2FEAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MK[] =
{
    { _T("MK Lei-Lei"), 0x103aC, 0x103cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MK Dust, Weapons"), 0x103eC, 0x1040c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MK Lin-Lin"), 0x103cC, 0x103ec },
    { _T("MK Unknown Extra"), 0x1040C, 0x1042c },
    { _T("MK Select Portrait"), 0x2C8AC, 0x2C8CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("MK Win Portrait"), 0x308AC, 0x3094C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HK[] =
{
    { _T("HK Lei-Lei"), 0x1042C, 0x1044c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HK Dust, Weapons"), 0x1046C, 0x1048c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HK Lin-Lin"), 0x1044C, 0x1046c },
    { _T("HK Unknown Extra"), 0x1048C, 0x104ac },
    { _T("HK Select Portrait"), 0x2CAAC, 0x2CACC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("HK Win Portrait"), 0x3134C, 0x313EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_PP[] =
{
    { _T("PP Lei-Lei"), 0x104aC, 0x104cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("PP Dust, Weapons"), 0x104eC, 0x1050c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("PP Lin-Lin"), 0x104cC, 0x104ec },
    { _T("PP Unknown Extra"), 0x1050C, 0x1052c },
    { _T("PP Select Portrait"), 0x2CCAC, 0x2CCCC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("PP Win Portrait"), 0x31DEC, 0x31E8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_KK[] =
{
    { _T("KK Lei-Lei"), 0x1052C, 0x1054c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("KK Dust, Weapons"), 0x1056C, 0x1058c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("KK Lin-Lin"), 0x1054C, 0x1056c },
    { _T("KK Unknown Extra"), 0x1058C, 0x105ac },
    { _T("KK Select Portrait"), 0x2CEAC, 0x2CECC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("KK Win Portrait"), 0x3288C, 0x3292C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AP[] =
{
    { _T("AP Lei-Lei"), 0x105aC, 0x105cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AP Dust, Weapons"), 0x105eC, 0x1060c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AP Lin-Lin"), 0x105cC, 0x105ec },
    { _T("AP Unknown Extra"), 0x1060C, 0x1062c },
    { _T("AP Select Portrait"), 0x2D0AC, 0x2D0CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("AP Win Portrait"), 0x3332C, 0x333CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AK[] =
{
    { _T("AK Lei-Lei"), 0x1062C, 0x1064c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AK Dust, Weapons"), 0x1066C, 0x1068c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AK Lin-Lin"), 0x1064C, 0x1066c },
    { _T("AK Unknown Extra"), 0x1068C, 0x106ac },
    { _T("AK Select Portrait"), 0x2D2AC, 0x2D2CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("AK Win Portrait"), 0x33DCC, 0x33E6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LP[] =
{
    { _T("LP Lilith"), 0x106aC, 0x106cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("LP Hearts"), 0x106cC, 0x106ec },
    { _T("LP Luminous Illusion/62KKK bats"), 0x106eC, 0x1070c },
    { _T("LP Sparkles"), 0x1070C, 0x1072c },
    { _T("LP Select Portrait"), 0x2C0CC, 0x2C0EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("LP Win Portrait"), 0x2DECC, 0x2DF6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MP[] =
{
    { _T("MP Lilith"), 0x1072C, 0x1074c, indexCPS2_Vamp_Lilith, 0 },
    { _T("MP Hearts"), 0x1074C, 0x1076c },
    { _T("MP Luminous Illusion/62KKK bats"), 0x1076C, 0x1078c },
    { _T("MP Sparkles"), 0x1078C, 0x107ac },
    { _T("MP Select Portrait"), 0x2C2CC, 0x2C2EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("MP Win Portrait"), 0x2E96C, 0x2EA0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HP[] =
{
    { _T("HP Lilith"), 0x107aC, 0x107cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("HP Hearts"), 0x107cC, 0x107ec },
    { _T("HP Luminous Illusion/62KKK bats"), 0x107eC, 0x1080c },
    { _T("HP Sparkles"), 0x1080C, 0x1082c },
    { _T("HP Select Portrait"), 0x2C4CC, 0x2C4EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("HP Win Portrait"), 0x2F40C, 0x2F4AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LK[] =
{
    { _T("LK Lilith"), 0x1082C, 0x1084c, indexCPS2_Vamp_Lilith, 0 },
    { _T("LK Hearts"), 0x1084C, 0x1086c },
    { _T("LK Luminous Illusion/62KKK bats"), 0x1086C, 0x1088c },
    { _T("LK Sparkles"), 0x1088C, 0x108ac },
    { _T("LK Select Portrait"), 0x2C6CC, 0x2C6EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("LK Win Portrait"), 0x2FEAC, 0x2FF4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MK[] =
{
    { _T("MK Lilith"), 0x108aC, 0x108cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("MK Hearts"), 0x108cC, 0x108ec },
    { _T("MK Luminous Illusion/62KKK bats"), 0x108eC, 0x1090c },
    { _T("MK Sparkles"), 0x1090C, 0x1092c },
    { _T("MK Select Portrait"), 0x2C8CC, 0x2C8EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("MK Win Portrait"), 0x3094C, 0x309EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HK[] =
{
    { _T("HK Lilith"), 0x1092C, 0x1094c, indexCPS2_Vamp_Lilith, 0 },
    { _T("HK Hearts"), 0x1094C, 0x1096c },
    { _T("HK Luminous Illusion/62KKK bats"), 0x1096C, 0x1098c },
    { _T("HK Sparkles"), 0x1098C, 0x109ac },
    { _T("HK Select Portrait"), 0x2CACC, 0x2CAEC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("HK Win Portrait"), 0x313EC, 0x3148C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_PP[] =
{
    { _T("PP Lilith"), 0x109aC, 0x109cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("PP Hearts"), 0x109cC, 0x109ec },
    { _T("PP Luminous Illusion/62KKK bats"), 0x109eC, 0x10a0c },
    { _T("PP Sparkles"), 0x10a0C, 0x10a2c },
    { _T("PP Select Portrait"), 0x2CCCC, 0x2CCEC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("PP Win Portrait"), 0x31E8C, 0x31F2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_KK[] =
{
    { _T("KK Lilith"), 0x10a2C, 0x10a4c, indexCPS2_Vamp_Lilith, 0 },
    { _T("KK Hearts"), 0x10a4C, 0x10a6c },
    { _T("KK Luminous Illusion/62KKK bats"), 0x10a6C, 0x10a8c },
    { _T("KK Sparkles"), 0x10a8C, 0x10aac },
    { _T("KK Select Portrait"), 0x2CECC, 0x2CEEC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("KK Win Portrait"), 0x3292C, 0x329CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AP[] =
{
    { _T("AP Lilith"), 0x10aaC, 0x10acc, indexCPS2_Vamp_Lilith, 0 },
    { _T("AP Hearts"), 0x10acC, 0x10aec },
    { _T("AP Luminous Illusion/62KKK bats"), 0x10aeC, 0x10b0c },
    { _T("AP Sparkles"), 0x10b0C, 0x10b2c },
    { _T("AP Select Portrait"), 0x2D0CC, 0x2D0EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("AP Win Portrait"), 0x333CC, 0x3346C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AK[] =
{
    { _T("AK Lilith"), 0x10b2C, 0x10b4c, indexCPS2_Vamp_Lilith, 0 },
    { _T("AK Hearts"), 0x10b4C, 0x10b6c },
    { _T("AK Luminous Illusion/62KKK bats"), 0x10b6C, 0x10b8c },
    { _T("AK Sparkles"), 0x10b8C, 0x10bac },
    { _T("AK Select Portrait"), 0x2D2CC, 0x2D2EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("AK Win Portrait"), 0x33E6C, 0x33F0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LP[] =
{
    { _T("LP Jedah"), 0x10baC, 0x10bcc, indexCPS2_Vamp_Jedah, 0 },
    { _T("LP Prova di Servo"), 0x10bcC, 0x10bec },
    { _T("LP Blood"), 0x10beC, 0x10c0c },
    { _T("LP Intro"), 0x10c0C, 0x10c2c },
    { _T("LP Select Portrait"), 0x2C0EC, 0x2C10C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("LP Win Portrait"), 0x2DF6C, 0x2E00C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MP[] =
{
    { _T("MP Jedah"), 0x10c2C, 0x10c4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("MP Prova di Servo"), 0x10c4C, 0x10c6c },
    { _T("MP Blood"), 0x10c6C, 0x10c8c },
    { _T("MP Intro"), 0x10c8C, 0x10cac },
    { _T("MP Select Portrait"), 0x2C2EC, 0x2C30C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("MP Win Portrait"), 0x2EA0C, 0x2EAAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HP[] =
{
    { _T("HP Jedah"), 0x10caC, 0x10ccc, indexCPS2_Vamp_Jedah, 0 },
    { _T("HP Prova di Servo"), 0x10ccC, 0x10cec },
    { _T("HP Blood"), 0x10ceC, 0x10d0c },
    { _T("HP Intro"), 0x10d0C, 0x10d2c },
    { _T("HP Select Portrait"), 0x2C4EC, 0x2C50C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("HP Win Portrait"), 0x2F4AC, 0x2F54C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LK[] =
{
    { _T("LK Jedah"), 0x10d2C, 0x10d4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("LK Prova di Servo"), 0x10d4C, 0x10d6c },
    { _T("LK Blood"), 0x10d6C, 0x10d8c },
    { _T("LK Intro"), 0x10d8C, 0x10dac },
    { _T("LK Select Portrait"), 0x2C6EC, 0x2C70C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("LK Win Portrait"), 0x2FF4C, 0x2FFEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MK[] =
{
    { _T("MK Jedah"), 0x10daC, 0x10dcc, indexCPS2_Vamp_Jedah, 0 },
    { _T("MK Prova di Servo"), 0x10dcC, 0x10dec },
    { _T("MK Blood"), 0x10deC, 0x10e0c },
    { _T("MK Intro"), 0x10e0C, 0x10e2c },
    { _T("MK Select Portrait"), 0x2C8EC, 0x2C90C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("MK Win Portrait"), 0x309EC, 0x30A8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HK[] =
{
    { _T("HK Jedah"), 0x10e2C, 0x10e4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("HK Prova di Servo"), 0x10e4C, 0x10e6c },
    { _T("HK Blood"), 0x10e6C, 0x10e8c },
    { _T("HK Intro"), 0x10e8C, 0x10eac },
    { _T("HK Select Portrait"), 0x2CAEC, 0x2CB0C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("HK Win Portrait"), 0x3148C, 0x3152C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_PP[] =
{
    { _T("PP Jedah"), 0x10eaC, 0x10ecc, indexCPS2_Vamp_Jedah, 0 },
    { _T("PP Prova di Servo"), 0x10ecC, 0x10eec },
    { _T("PP Blood"), 0x10eeC, 0x10f0c },
    { _T("PP Intro"), 0x10f0C, 0x10f2c },
    { _T("PP Select Portrait"), 0x2CCEC, 0x2CD0C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("PP Win Portrait"), 0x31F2C, 0x31FCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_KK[] =
{
    { _T("KK Jedah"), 0x10f2C, 0x10f4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("KK Prova di Servo"), 0x10f4C, 0x10f6c },
    { _T("KK Blood"), 0x10f6C, 0x10f8c },
    { _T("KK Intro"), 0x10f8C, 0x10fac },
    { _T("KK Select Portrait"), 0x2CEEC, 0x2CF0C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("KK Win Portrait"), 0x329CC, 0x32A6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AP[] =
{
    { _T("AP Jedah"), 0x10faC, 0x10fcc, indexCPS2_Vamp_Jedah, 0 },
    { _T("AP Prova di Servo"), 0x10fcC, 0x10fec },
    { _T("AP Blood"), 0x10feC, 0x1100c },
    { _T("AP Intro"), 0x1100C, 0x1102c },
    { _T("AP Select Portrait"), 0x2D0EC, 0x2D10C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("AP Win Portrait"), 0x3346C, 0x3350C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AK[] =
{
    { _T("AK Jedah"), 0x1102C, 0x1104c, indexCPS2_Vamp_Jedah, 0 },
    { _T("AK Prova di Servo"), 0x1104C, 0x1106c },
    { _T("AK Blood"), 0x1106C, 0x1108c },
    { _T("AK Intro"), 0x1108C, 0x110ac },
    { _T("AK Select Portrait"), 0x2D2EC, 0x2D30C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("AK Win Portrait"), 0x33F0C, 0x33FAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SHARED[] =
{
    { _T("Shared blood"), 0x1faeC, 0x1fb0c },
    { _T("Shared blood 2"), 0x1fb0C, 0x1fb2c },
    { _T("Shared Prova di Servo"), 0x1fb2C, 0x1fb4c },
    { _T("Shared Prova di Servo 2"), 0x1fb4C, 0x1fb6c },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_DEFAULT[] =
{
    { _T("Dark Gallon (1/6)"), 0x110aC, 0x110cc, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (2/6)"), 0x1fb8C, 0x1fbac, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (3/6)"), 0x1fbaC, 0x1fbcc, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (4/6)"), 0x1fbcC, 0x1fbec, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (5/6)"), 0x1fbeC, 0x1fc0c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (6/6)"), 0x1fc0C, 0x1fc2c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Intro/Outro"), 0x110cC, 0x110ec },
    { _T("236P/41236KK/j.HP"), 0x110eC, 0x1110c },
    { _T("236P/28K/Outro Flash"), 0x1110C, 0x1112c },
    { _T("Dark Gallon Select"), 0x2d5CC, 0x2d5EC, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("Dark Gallon Win Portrait"), 0x3404C, 0x340EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_ALT[] =
{
    { _T("Dark Gallon Alt Palette (1/6)"), 0x1112C, 0x1114c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon Alt Palette (2/6)"), 0x1fc2C, 0x1fc4c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon Alt Palette (3/6)"), 0x1fc4C, 0x1fc6c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon Alt Palette (4/6)"), 0x1fc6C, 0x1fc8c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon Alt Palette (5/6)"), 0x1fc8C, 0x1fcac, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon Alt Palette (6/6)"), 0x1fcaC, 0x1fccc, indexCPS2_Vamp_Gallon, 0 },
    { _T("Intro/Outro"), 0x1114C, 0x1116c },
    { _T("236P/41236KK/j.HP"), 0x1116C, 0x1118c },
    { _T("236P/28K/Outro Flash"), 0x1118C, 0x111ac },
    { _T("Dark Gallon Alt Palette Select"), 0x2d5EC, 0x2d60C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("Dark Gallon Alt Palette Win Portrait"), 0x340EC, 0x3418C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { _T("LP Oboro Bishamon"), 0x115ac, 0x115cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Intro"), 0x115cc, 0x115ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Ghosts/Hitsparks"), 0x115ec, 0x1160c },
    { _T("LP Unknown Extra"), 0x1160c, 0x1162c },
    { _T("LP Select Portrait"), 0x2d50c, 0x2d52c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LP Win Portrait"), 0x3418c, 0x3422c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { _T("MP Oboro Bishamon"), 0x1162c, 0x1164c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Intro"), 0x1164c, 0x1166c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Ghosts/Hitsparks"), 0x1166c, 0x1168c },
    { _T("MP Unknown Extra"), 0x1168c, 0x116ac },
    { _T("MP Select Portrait"), 0x2d52c, 0x2d54c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MP Win Portrait"), 0x3422c, 0x342cc, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { _T("HP Oboro Bishamon"), 0x116ac, 0x116cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Intro"), 0x116cc, 0x116ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Ghosts/Hitsparks"), 0x116ec, 0x1170c },
    { _T("HP Unknown Extra"), 0x1170c, 0x1172c },
    { _T("HP Select Portrait"), 0x2d54c, 0x2d56c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HP Win Portrait"), 0x342cc, 0x3436c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { _T("LK Oboro Bishamon"), 0x1172c, 0x1174c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Intro"), 0x1174c, 0x1176c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Ghosts/Hitsparks"), 0x1176c, 0x1178c },
    { _T("LK Unknown Extra"), 0x1178c, 0x117ac },
    { _T("LK Select Portrait"), 0x2d56c, 0x2d58c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LK Win Portrait"), 0x3436c, 0x3440c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { _T("MK Oboro Bishamon"), 0x117ac, 0x117cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Intro"), 0x117cc, 0x117ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Ghosts/Hitsparks"), 0x117ec, 0x1180c },
    { _T("MK Unknown Extra"), 0x1180c, 0x1182c },
    { _T("MK Select Portrait"), 0x2d58c, 0x2d5ac, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MK Win Portrait"), 0x3440c, 0x344ac, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { _T("HK Oboro Bishamon"), 0x1182c, 0x1184c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Intro"), 0x1184c, 0x1186c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Ghosts/Hitsparks"), 0x1186c, 0x1188c },
    { _T("HK Unknown Extra"), 0x1188c, 0x118ac },
    { _T("HK Select Portrait"), 0x2d5ac, 0x2d5cc, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HK Win Portrait"), 0x344ac, 0x3454c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { _T("PP Oboro Bishamon"), 0x118ac, 0x118cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("PP Intro"), 0x118cc, 0x118ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("PP Ghosts/Hitsparks"), 0x118ec, 0x1190c },
    { _T("PP Unknown Extra"), 0x1190c, 0x1192c },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { _T("KK Oboro Bishamon"), 0x1192c, 0x1194c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("KK Intro"), 0x1194c, 0x1196c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("KK Ghosts/Hitsparks"), 0x1196c, 0x1198c },
    { _T("KK Unknown Extra"), 0x1198c, 0x119ac },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { _T("AP Oboro Bishamon"), 0x119ac, 0x119cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AP Intro"), 0x119cc, 0x119ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AP Ghosts/Hitsparks"), 0x119ec, 0x11a0c },
    { _T("AP Unknown Extra"), 0x11a0c, 0x11a2c },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { _T("AK Oboro Bishamon"), 0x11a2c, 0x11a4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AK Intro"), 0x11a4c, 0x11a6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AK Ghosts/Hitsparks"), 0x11a6c, 0x11a8c },
    { _T("AK Unknown Extra"), 0x11a8c, 0x11aac },
};

const sGame_PaletteDataset VSAV_A_BONUS_PALETTES[] =
{
    { _T("Shadow"), 0x3584C, 0x3586C, indexCPS2_Vamp_Shadow, 0x0 },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_SPECIAL[] =
{
    { _T("Bulleta LP Poisoned"), 0x11ba0 - 0xf4, 0x11bc0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta MP Poisoned"), 0x11bc0 - 0xf4, 0x11be0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta HP Poisoned"), 0x11be0 - 0xf4, 0x11c00 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta LK Poisoned"), 0x11c00 - 0xf4, 0x11c20 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta MK Poisoned"), 0x11c20 - 0xf4, 0x11c40 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta HK Poisoned"), 0x11c40 - 0xf4, 0x11c60 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta PP Poisoned"), 0x11c60 - 0xf4, 0x11c80 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta KK Poisoned"), 0x11c80 - 0xf4, 0x11ca0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta AP Poisoned"), 0x11ca0 - 0xf4, 0x11cc0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta AK Poisoned"), 0x11cc0 - 0xf4, 0x11ce0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta LP Zapped"), 0x11ce0 - 0xf4, 0x11d00 - 0xf4 },
    { _T("Bulleta MP Zapped"), 0x11d00 - 0xf4, 0x11d20 - 0xf4 },
    { _T("Bulleta HP Zapped"), 0x11d20 - 0xf4, 0x11d40 - 0xf4 },
    { _T("Bulleta LK Zapped"), 0x11d40 - 0xf4, 0x11d60 - 0xf4 },
    { _T("Bulleta MK Zapped"), 0x11d60 - 0xf4, 0x11d80 - 0xf4 },
    { _T("Bulleta HK Zapped"), 0x11d80 - 0xf4, 0x11da0 - 0xf4 },
    { _T("Bulleta PP Zapped"), 0x11da0 - 0xf4, 0x11dc0 - 0xf4 },
    { _T("Bulleta KK Zapped"), 0x11dc0 - 0xf4, 0x11de0 - 0xf4 },
    { _T("Bulleta AP Zapped"), 0x11de0 - 0xf4, 0x11e00 - 0xf4 },
    { _T("Bulleta AK Zapped"), 0x11e00 - 0xf4, 0x11e20 - 0xf4 },
    { _T("Bulleta LP Burned"), 0x11e20 - 0xf4, 0x11e40 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta MP Burned"), 0x11e40 - 0xf4, 0x11e60 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta HP Burned"), 0x11e60 - 0xf4, 0x11e80 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta LK Burned"), 0x11e80 - 0xf4, 0x11ea0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta MK Burned"), 0x11ea0 - 0xf4, 0x11ec0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta HK Burned"), 0x11ec0 - 0xf4, 0x11ee0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta PP Burned"), 0x11ee0 - 0xf4, 0x11f00 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta KK Burned"), 0x11f00 - 0xf4, 0x11f20 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta AP Burned"), 0x11f20 - 0xf4, 0x11f40 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta AK Burned"), 0x11f40 - 0xf4, 0x11f60 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta LP Kotodama Gaeshi"), 0x11f60 - 0xf4, 0x11f80 - 0xf4 },
    { _T("Bulleta MP Kotodama Gaeshi"), 0x11f80 - 0xf4, 0x11fa0 - 0xf4 },
    { _T("Bulleta HP Kotodama Gaeshi"), 0x11fa0 - 0xf4, 0x11fc0 - 0xf4 },
    { _T("Bulleta LK Kotodama Gaeshi"), 0x11fc0 - 0xf4, 0x11fe0 - 0xf4 },
    { _T("Bulleta MK Kotodama Gaeshi"), 0x11fe0 - 0xf4, 0x12000 - 0xf4 },
    { _T("Bulleta HK Kotodama Gaeshi"), 0x12000 - 0xf4, 0x12020 - 0xf4 },
    { _T("Bulleta PP Kotodama Gaeshi"), 0x12020 - 0xf4, 0x12040 - 0xf4 },
    { _T("Bulleta KK Kotodama Gaeshi"), 0x12040 - 0xf4, 0x12060 - 0xf4 },
    { _T("Bulleta AP Kotodama Gaeshi"), 0x12060 - 0xf4, 0x12080 - 0xf4 },
    { _T("Bulleta AK Kotodama Gaeshi"), 0x12080 - 0xf4, 0x120a0 - 0xf4 },
    { _T("Bulleta LP Midnight Bliss"), 0x12280 - 0xf4, 0x122a0 - 0xf4 },
    { _T("Bulleta MP Midnight Bliss"), 0x122a0 - 0xf4, 0x122c0 - 0xf4 },
    { _T("Bulleta HP Midnight Bliss"), 0x122c0 - 0xf4, 0x122e0 - 0xf4 },
    { _T("Bulleta LK Midnight Bliss"), 0x122e0 - 0xf4, 0x12300 - 0xf4 },
    { _T("Bulleta MK Midnight Bliss"), 0x12300 - 0xf4, 0x12320 - 0xf4 },
    { _T("Bulleta HK Midnight Bliss"), 0x12320 - 0xf4, 0x12340 - 0xf4 },
    { _T("Bulleta PP Midnight Bliss"), 0x12340 - 0xf4, 0x12360 - 0xf4 },
    { _T("Bulleta KK Midnight Bliss"), 0x12360 - 0xf4, 0x12380 - 0xf4 },
    { _T("Bulleta AP Midnight Bliss"), 0x12380 - 0xf4, 0x123a0 - 0xf4 },
    { _T("Bulleta AK Midnight Bliss"), 0x123a0 - 0xf4, 0x123c0 - 0xf4 },
    { _T("Bulleta ES 1"), 0x120a0 - 0xf4, 0x120c0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta ES 2"), 0x120c0 - 0xf4, 0x120e0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta ES 3"), 0x120e0 - 0xf4, 0x12100 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta ES 4"), 0x12100 - 0xf4, 0x12120 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 1"), 0x12120 - 0xf4, 0x12140 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 2"), 0x12140 - 0xf4, 0x12160 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 3"), 0x12160 - 0xf4, 0x12180 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 4"), 0x12180 - 0xf4, 0x121a0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 5"), 0x121a0 - 0xf4, 0x121c0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 6"), 0x121c0 - 0xf4, 0x121e0 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 7"), 0x121e0 - 0xf4, 0x12200 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta EX 8"), 0x12200 - 0xf4, 0x12220 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta Prova di Servo"), 0x12220 - 0xf4, 0x12240 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta Finale Rosso"), 0x12240 - 0xf4, 0x12260 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta Stone"), 0x12260 - 0xf4, 0x12280 - 0xf4, indexCPS2_BBHood },
    { _T("Bulleta Q-Bee's QJ Honey"), 0x123c0 - 0xf4, 0x123e0 - 0xf4, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_SPECIAL[] =
{
    { _T("Demitri LP Poisoned"), 0x123e0 - 0xf4, 0x12400 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Poisoned"), 0x12400 - 0xf4, 0x12420 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Poisoned"), 0x12420 - 0xf4, 0x12440 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Poisoned"), 0x12440 - 0xf4, 0x12460 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Poisoned"), 0x12460 - 0xf4, 0x12480 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Poisoned"), 0x12480 - 0xf4, 0x124a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Poisoned"), 0x124a0 - 0xf4, 0x124c0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Poisoned"), 0x124c0 - 0xf4, 0x124e0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Poisoned"), 0x124e0 - 0xf4, 0x12500 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Poisoned"), 0x12500 - 0xf4, 0x12520 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Zapped"), 0x12520 - 0xf4, 0x12540 - 0xf4 },
    { _T("Demitri MP Zapped"), 0x12540 - 0xf4, 0x12560 - 0xf4 },
    { _T("Demitri HP Zapped"), 0x12560 - 0xf4, 0x12580 - 0xf4 },
    { _T("Demitri LK Zapped"), 0x12580 - 0xf4, 0x125a0 - 0xf4 },
    { _T("Demitri MK Zapped"), 0x125a0 - 0xf4, 0x125c0 - 0xf4 },
    { _T("Demitri HK Zapped"), 0x125c0 - 0xf4, 0x125e0 - 0xf4 },
    { _T("Demitri PP Zapped"), 0x125e0 - 0xf4, 0x12600 - 0xf4 },
    { _T("Demitri KK Zapped"), 0x12600 - 0xf4, 0x12620 - 0xf4 },
    { _T("Demitri AP Zapped"), 0x12620 - 0xf4, 0x12640 - 0xf4 },
    { _T("Demitri AK Zapped"), 0x12640 - 0xf4, 0x12660 - 0xf4 },
    { _T("Demitri LP Burned"), 0x12660 - 0xf4, 0x12680 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Burned"), 0x12680 - 0xf4, 0x126a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Burned"), 0x126a0 - 0xf4, 0x126c0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Burned"), 0x126c0 - 0xf4, 0x126e0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Burned"), 0x126e0 - 0xf4, 0x12700 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Burned"), 0x12700 - 0xf4, 0x12720 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Burned"), 0x12720 - 0xf4, 0x12740 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Burned"), 0x12740 - 0xf4, 0x12760 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Burned"), 0x12760 - 0xf4, 0x12780 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Burned"), 0x12780 - 0xf4, 0x127a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Kotodama Gaeshi"), 0x127a0 - 0xf4, 0x127c0 - 0xf4 },
    { _T("Demitri MP Kotodama Gaeshi"), 0x127c0 - 0xf4, 0x127e0 - 0xf4 },
    { _T("Demitri HP Kotodama Gaeshi"), 0x127e0 - 0xf4, 0x12800 - 0xf4 },
    { _T("Demitri LK Kotodama Gaeshi"), 0x12800 - 0xf4, 0x12820 - 0xf4 },
    { _T("Demitri MK Kotodama Gaeshi"), 0x12820 - 0xf4, 0x12840 - 0xf4 },
    { _T("Demitri HK Kotodama Gaeshi"), 0x12840 - 0xf4, 0x12860 - 0xf4 },
    { _T("Demitri PP Kotodama Gaeshi"), 0x12860 - 0xf4, 0x12880 - 0xf4 },
    { _T("Demitri KK Kotodama Gaeshi"), 0x12880 - 0xf4, 0x128a0 - 0xf4 },
    { _T("Demitri AP Kotodama Gaeshi"), 0x128a0 - 0xf4, 0x128c0 - 0xf4 },
    { _T("Demitri AK Kotodama Gaeshi"), 0x128c0 - 0xf4, 0x128e0 - 0xf4 },
    { _T("Demitri LP Midnight Bliss"), 0x12ac0 - 0xf4, 0x12ae0 - 0xf4 },
    { _T("Demitri MP Midnight Bliss"), 0x12ae0 - 0xf4, 0x12b00 - 0xf4 },
    { _T("Demitri HP Midnight Bliss"), 0x12b00 - 0xf4, 0x12b20 - 0xf4 },
    { _T("Demitri LK Midnight Bliss"), 0x12b20 - 0xf4, 0x12b40 - 0xf4 },
    { _T("Demitri MK Midnight Bliss"), 0x12b40 - 0xf4, 0x12b60 - 0xf4 },
    { _T("Demitri HK Midnight Bliss"), 0x12b60 - 0xf4, 0x12b80 - 0xf4 },
    { _T("Demitri PP Midnight Bliss"), 0x12b80 - 0xf4, 0x12ba0 - 0xf4 },
    { _T("Demitri KK Midnight Bliss"), 0x12ba0 - 0xf4, 0x12bc0 - 0xf4 },
    { _T("Demitri AP Midnight Bliss"), 0x12bc0 - 0xf4, 0x12be0 - 0xf4 },
    { _T("Demitri AK Midnight Bliss"), 0x12be0 - 0xf4, 0x12c00 - 0xf4 },
    { _T("Demitri ES 1"), 0x128e0 - 0xf4, 0x12900 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri ES 2"), 0x12900 - 0xf4, 0x12920 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri ES 3"), 0x12920 - 0xf4, 0x12940 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri ES 4"), 0x12940 - 0xf4, 0x12960 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 1"), 0x12960 - 0xf4, 0x12980 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 2"), 0x12980 - 0xf4, 0x129a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 3"), 0x129a0 - 0xf4, 0x129c0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 4"), 0x129c0 - 0xf4, 0x129e0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 5"), 0x129e0 - 0xf4, 0x12a00 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 6"), 0x12a00 - 0xf4, 0x12a20 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 7"), 0x12a20 - 0xf4, 0x12a40 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 8"), 0x12a40 - 0xf4, 0x12a60 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri Prova di Servo"), 0x12a60 - 0xf4, 0x12a80 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri Finale Rosso"), 0x12a80 - 0xf4, 0x12aa0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri Stone"), 0x12aa0 - 0xf4, 0x12ac0 - 0xf4, indexCPS2_Vamp_Demitri },
    { _T("Demitri Q-Bee's QJ Honey"), 0x12c00 - 0xf4, 0x12c20 - 0xf4, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_SPECIAL[] =
{
    { _T("Gallon LP Poisoned"), 0x12c20 - 0xf4, 0x12c40 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Poisoned"), 0x12c40 - 0xf4, 0x12c60 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Poisoned"), 0x12c60 - 0xf4, 0x12c80 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Poisoned"), 0x12c80 - 0xf4, 0x12ca0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Poisoned"), 0x12ca0 - 0xf4, 0x12cc0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Poisoned"), 0x12cc0 - 0xf4, 0x12ce0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Poisoned"), 0x12ce0 - 0xf4, 0x12d00 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Poisoned"), 0x12d00 - 0xf4, 0x12d20 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Poisoned"), 0x12d20 - 0xf4, 0x12d40 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Poisoned"), 0x12d40 - 0xf4, 0x12d60 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Zapped"), 0x12d60 - 0xf4, 0x12d80 - 0xf4 },
    { _T("Gallon MP Zapped"), 0x12d80 - 0xf4, 0x12da0 - 0xf4 },
    { _T("Gallon HP Zapped"), 0x12da0 - 0xf4, 0x12dc0 - 0xf4 },
    { _T("Gallon LK Zapped"), 0x12dc0 - 0xf4, 0x12de0 - 0xf4 },
    { _T("Gallon MK Zapped"), 0x12de0 - 0xf4, 0x12e00 - 0xf4 },
    { _T("Gallon HK Zapped"), 0x12e00 - 0xf4, 0x12e20 - 0xf4 },
    { _T("Gallon PP Zapped"), 0x12e20 - 0xf4, 0x12e40 - 0xf4 },
    { _T("Gallon KK Zapped"), 0x12e40 - 0xf4, 0x12e60 - 0xf4 },
    { _T("Gallon AP Zapped"), 0x12e60 - 0xf4, 0x12e80 - 0xf4 },
    { _T("Gallon AK Zapped"), 0x12e80 - 0xf4, 0x12ea0 - 0xf4 },
    { _T("Gallon LP Burned"), 0x12ea0 - 0xf4, 0x12ec0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Burned"), 0x12ec0 - 0xf4, 0x12ee0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Burned"), 0x12ee0 - 0xf4, 0x12f00 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Burned"), 0x12f00 - 0xf4, 0x12f20 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Burned"), 0x12f20 - 0xf4, 0x12f40 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Burned"), 0x12f40 - 0xf4, 0x12f60 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Burned"), 0x12f60 - 0xf4, 0x12f80 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Burned"), 0x12f80 - 0xf4, 0x12fa0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Burned"), 0x12fa0 - 0xf4, 0x12fc0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Burned"), 0x12fc0 - 0xf4, 0x12fe0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Kotodama Gaeshi"), 0x12fe0 - 0xf4, 0x13000 - 0xf4 },
    { _T("Gallon MP Kotodama Gaeshi"), 0x13000 - 0xf4, 0x13020 - 0xf4 },
    { _T("Gallon HP Kotodama Gaeshi"), 0x13020 - 0xf4, 0x13040 - 0xf4 },
    { _T("Gallon LK Kotodama Gaeshi"), 0x13040 - 0xf4, 0x13060 - 0xf4 },
    { _T("Gallon MK Kotodama Gaeshi"), 0x13060 - 0xf4, 0x13080 - 0xf4 },
    { _T("Gallon HK Kotodama Gaeshi"), 0x13080 - 0xf4, 0x130a0 - 0xf4 },
    { _T("Gallon PP Kotodama Gaeshi"), 0x130a0 - 0xf4, 0x130c0 - 0xf4 },
    { _T("Gallon KK Kotodama Gaeshi"), 0x130c0 - 0xf4, 0x130e0 - 0xf4 },
    { _T("Gallon AP Kotodama Gaeshi"), 0x130e0 - 0xf4, 0x13100 - 0xf4 },
    { _T("Gallon AK Kotodama Gaeshi"), 0x13100 - 0xf4, 0x13120 - 0xf4 },
    { _T("Gallon LP Midnight Bliss"), 0x13300 - 0xf4, 0x13320 - 0xf4 },
    { _T("Gallon MP Midnight Bliss"), 0x13320 - 0xf4, 0x13340 - 0xf4 },
    { _T("Gallon HP Midnight Bliss"), 0x13340 - 0xf4, 0x13360 - 0xf4 },
    { _T("Gallon LK Midnight Bliss"), 0x13360 - 0xf4, 0x13380 - 0xf4 },
    { _T("Gallon MK Midnight Bliss"), 0x13380 - 0xf4, 0x133a0 - 0xf4 },
    { _T("Gallon HK Midnight Bliss"), 0x133a0 - 0xf4, 0x133c0 - 0xf4 },
    { _T("Gallon PP Midnight Bliss"), 0x133c0 - 0xf4, 0x133e0 - 0xf4 },
    { _T("Gallon KK Midnight Bliss"), 0x133e0 - 0xf4, 0x13400 - 0xf4 },
    { _T("Gallon AP Midnight Bliss"), 0x13400 - 0xf4, 0x13420 - 0xf4 },
    { _T("Gallon AK Midnight Bliss"), 0x13420 - 0xf4, 0x13440 - 0xf4 },
    { _T("Gallon ES 1"), 0x13120 - 0xf4, 0x13140 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon ES 2"), 0x13140 - 0xf4, 0x13160 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon ES 3"), 0x13160 - 0xf4, 0x13180 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon ES 4"), 0x13180 - 0xf4, 0x131a0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 1"), 0x131a0 - 0xf4, 0x131c0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 2"), 0x131c0 - 0xf4, 0x131e0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 3"), 0x131e0 - 0xf4, 0x13200 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 4"), 0x13200 - 0xf4, 0x13220 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 5"), 0x13220 - 0xf4, 0x13240 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 6"), 0x13240 - 0xf4, 0x13260 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 7"), 0x13260 - 0xf4, 0x13280 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 8"), 0x13280 - 0xf4, 0x132a0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon Prova di Servo"), 0x132a0 - 0xf4, 0x132c0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon Finale Rosso"), 0x132c0 - 0xf4, 0x132e0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon Stone"), 0x132e0 - 0xf4, 0x13300 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Gallon Q-Bee's QJ Honey"), 0x13440 - 0xf4, 0x13460 - 0xf4, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_SPECIAL[] =
{
    { _T("Victor LP Poisoned"), 0x13460 - 0xf4, 0x13480 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor MP Poisoned"), 0x13480 - 0xf4, 0x134a0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor HP Poisoned"), 0x134a0 - 0xf4, 0x134c0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor LK Poisoned"), 0x134c0 - 0xf4, 0x134e0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor MK Poisoned"), 0x134e0 - 0xf4, 0x13500 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor HK Poisoned"), 0x13500 - 0xf4, 0x13520 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor PP Poisoned"), 0x13520 - 0xf4, 0x13540 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor KK Poisoned"), 0x13540 - 0xf4, 0x13560 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor AP Poisoned"), 0x13560 - 0xf4, 0x13580 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor AK Poisoned"), 0x13580 - 0xf4, 0x135a0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor LP Zapped"), 0x135a0 - 0xf4, 0x135c0 - 0xf4 },
    { _T("Victor MP Zapped"), 0x135c0 - 0xf4, 0x135e0 - 0xf4 },
    { _T("Victor HP Zapped"), 0x135e0 - 0xf4, 0x13600 - 0xf4 },
    { _T("Victor LK Zapped"), 0x13600 - 0xf4, 0x13620 - 0xf4 },
    { _T("Victor MK Zapped"), 0x13620 - 0xf4, 0x13640 - 0xf4 },
    { _T("Victor HK Zapped"), 0x13640 - 0xf4, 0x13660 - 0xf4 },
    { _T("Victor PP Zapped"), 0x13660 - 0xf4, 0x13680 - 0xf4 },
    { _T("Victor KK Zapped"), 0x13680 - 0xf4, 0x136a0 - 0xf4 },
    { _T("Victor AP Zapped"), 0x136a0 - 0xf4, 0x136c0 - 0xf4 },
    { _T("Victor AK Zapped"), 0x136c0 - 0xf4, 0x136e0 - 0xf4 },
    { _T("Victor LP Burned"), 0x136e0 - 0xf4, 0x13700 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor MP Burned"), 0x13700 - 0xf4, 0x13720 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor HP Burned"), 0x13720 - 0xf4, 0x13740 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor LK Burned"), 0x13740 - 0xf4, 0x13760 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor MK Burned"), 0x13760 - 0xf4, 0x13780 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor HK Burned"), 0x13780 - 0xf4, 0x137a0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor PP Burned"), 0x137a0 - 0xf4, 0x137c0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor KK Burned"), 0x137c0 - 0xf4, 0x137e0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor AP Burned"), 0x137e0 - 0xf4, 0x13800 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor AK Burned"), 0x13800 - 0xf4, 0x13820 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor LP Kotodama Gaeshi"), 0x13820 - 0xf4, 0x13840 - 0xf4 },
    { _T("Victor MP Kotodama Gaeshi"), 0x13840 - 0xf4, 0x13860 - 0xf4 },
    { _T("Victor HP Kotodama Gaeshi"), 0x13860 - 0xf4, 0x13880 - 0xf4 },
    { _T("Victor LK Kotodama Gaeshi"), 0x13880 - 0xf4, 0x138a0 - 0xf4 },
    { _T("Victor MK Kotodama Gaeshi"), 0x138a0 - 0xf4, 0x138c0 - 0xf4 },
    { _T("Victor HK Kotodama Gaeshi"), 0x138c0 - 0xf4, 0x138e0 - 0xf4 },
    { _T("Victor PP Kotodama Gaeshi"), 0x138e0 - 0xf4, 0x13900 - 0xf4 },
    { _T("Victor KK Kotodama Gaeshi"), 0x13900 - 0xf4, 0x13920 - 0xf4 },
    { _T("Victor AP Kotodama Gaeshi"), 0x13920 - 0xf4, 0x13940 - 0xf4 },
    { _T("Victor AK Kotodama Gaeshi"), 0x13940 - 0xf4, 0x13960 - 0xf4 },
    { _T("Victor LP Midnight Bliss"), 0x13b40 - 0xf4, 0x13b60 - 0xf4 },
    { _T("Victor MP Midnight Bliss"), 0x13b60 - 0xf4, 0x13b80 - 0xf4 },
    { _T("Victor HP Midnight Bliss"), 0x13b80 - 0xf4, 0x13ba0 - 0xf4 },
    { _T("Victor LK Midnight Bliss"), 0x13ba0 - 0xf4, 0x13bc0 - 0xf4 },
    { _T("Victor MK Midnight Bliss"), 0x13bc0 - 0xf4, 0x13be0 - 0xf4 },
    { _T("Victor HK Midnight Bliss"), 0x13be0 - 0xf4, 0x13c00 - 0xf4 },
    { _T("Victor PP Midnight Bliss"), 0x13c00 - 0xf4, 0x13c20 - 0xf4 },
    { _T("Victor KK Midnight Bliss"), 0x13c20 - 0xf4, 0x13c40 - 0xf4 },
    { _T("Victor AP Midnight Bliss"), 0x13c40 - 0xf4, 0x13c60 - 0xf4 },
    { _T("Victor AK Midnight Bliss"), 0x13c60 - 0xf4, 0x13c80 - 0xf4 },
    { _T("Victor ES 1"), 0x13960 - 0xf4, 0x13980 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor ES 2"), 0x13980 - 0xf4, 0x139a0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor ES 3"), 0x139a0 - 0xf4, 0x139c0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor ES 4"), 0x139c0 - 0xf4, 0x139e0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 1"), 0x139e0 - 0xf4, 0x13a00 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 2"), 0x13a00 - 0xf4, 0x13a20 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 3"), 0x13a20 - 0xf4, 0x13a40 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 4"), 0x13a40 - 0xf4, 0x13a60 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 5"), 0x13a60 - 0xf4, 0x13a80 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 6"), 0x13a80 - 0xf4, 0x13aa0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 7"), 0x13aa0 - 0xf4, 0x13ac0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor EX 8"), 0x13ac0 - 0xf4, 0x13ae0 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor Prova di Servo"), 0x13ae0 - 0xf4, 0x13b00 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor Finale Rosso"), 0x13b00 - 0xf4, 0x13b20 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor Stone"), 0x13b20 - 0xf4, 0x13b40 - 0xf4, indexCPS2_Vamp_Victor },
    { _T("Victor Q-Bee's QJ Honey"), 0x13c80 - 0xf4, 0x13ca0 - 0xf4, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_SPECIAL[] =
{
    { _T("Zabel LP Poisoned"), 0x13ca0 - 0xf4, 0x13cc0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Poisoned"), 0x13cc0 - 0xf4, 0x13ce0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Poisoned"), 0x13ce0 - 0xf4, 0x13d00 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Poisoned"), 0x13d00 - 0xf4, 0x13d20 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Poisoned"), 0x13d20 - 0xf4, 0x13d40 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Poisoned"), 0x13d40 - 0xf4, 0x13d60 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Poisoned"), 0x13d60 - 0xf4, 0x13d80 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Poisoned"), 0x13d80 - 0xf4, 0x13da0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Poisoned"), 0x13da0 - 0xf4, 0x13dc0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Poisoned"), 0x13dc0 - 0xf4, 0x13de0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Zapped"), 0x13de0 - 0xf4, 0x13e00 - 0xf4 },
    { _T("Zabel MP Zapped"), 0x13e00 - 0xf4, 0x13e20 - 0xf4 },
    { _T("Zabel HP Zapped"), 0x13e20 - 0xf4, 0x13e40 - 0xf4 },
    { _T("Zabel LK Zapped"), 0x13e40 - 0xf4, 0x13e60 - 0xf4 },
    { _T("Zabel MK Zapped"), 0x13e60 - 0xf4, 0x13e80 - 0xf4 },
    { _T("Zabel HK Zapped"), 0x13e80 - 0xf4, 0x13ea0 - 0xf4 },
    { _T("Zabel PP Zapped"), 0x13ea0 - 0xf4, 0x13ec0 - 0xf4 },
    { _T("Zabel KK Zapped"), 0x13ec0 - 0xf4, 0x13ee0 - 0xf4 },
    { _T("Zabel AP Zapped"), 0x13ee0 - 0xf4, 0x13f00 - 0xf4 },
    { _T("Zabel AK Zapped"), 0x13f00 - 0xf4, 0x13f20 - 0xf4 },
    { _T("Zabel LP Burned"), 0x13f20 - 0xf4, 0x13f40 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Burned"), 0x13f40 - 0xf4, 0x13f60 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Burned"), 0x13f60 - 0xf4, 0x13f80 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Burned"), 0x13f80 - 0xf4, 0x13fa0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Burned"), 0x13fa0 - 0xf4, 0x13fc0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Burned"), 0x13fc0 - 0xf4, 0x13fe0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Burned"), 0x13fe0 - 0xf4, 0x14000 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Burned"), 0x14000 - 0xf4, 0x14020 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Burned"), 0x14020 - 0xf4, 0x14040 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Burned"), 0x14040 - 0xf4, 0x14060 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Kotodama Gaeshi"), 0x14060 - 0xf4, 0x14080 - 0xf4 },
    { _T("Zabel MP Kotodama Gaeshi"), 0x14080 - 0xf4, 0x140a0 - 0xf4 },
    { _T("Zabel HP Kotodama Gaeshi"), 0x140a0 - 0xf4, 0x140c0 - 0xf4 },
    { _T("Zabel LK Kotodama Gaeshi"), 0x140c0 - 0xf4, 0x140e0 - 0xf4 },
    { _T("Zabel MK Kotodama Gaeshi"), 0x140e0 - 0xf4, 0x14100 - 0xf4 },
    { _T("Zabel HK Kotodama Gaeshi"), 0x14100 - 0xf4, 0x14120 - 0xf4 },
    { _T("Zabel PP Kotodama Gaeshi"), 0x14120 - 0xf4, 0x14140 - 0xf4 },
    { _T("Zabel KK Kotodama Gaeshi"), 0x14140 - 0xf4, 0x14160 - 0xf4 },
    { _T("Zabel AP Kotodama Gaeshi"), 0x14160 - 0xf4, 0x14180 - 0xf4 },
    { _T("Zabel AK Kotodama Gaeshi"), 0x14180 - 0xf4, 0x141a0 - 0xf4 },
    { _T("Zabel LP Midnight Bliss"), 0x14380 - 0xf4, 0x143a0 - 0xf4 },
    { _T("Zabel MP Midnight Bliss"), 0x143a0 - 0xf4, 0x143c0 - 0xf4 },
    { _T("Zabel HP Midnight Bliss"), 0x143c0 - 0xf4, 0x143e0 - 0xf4 },
    { _T("Zabel LK Midnight Bliss"), 0x143e0 - 0xf4, 0x14400 - 0xf4 },
    { _T("Zabel MK Midnight Bliss"), 0x14400 - 0xf4, 0x14420 - 0xf4 },
    { _T("Zabel HK Midnight Bliss"), 0x14420 - 0xf4, 0x14440 - 0xf4 },
    { _T("Zabel PP Midnight Bliss"), 0x14440 - 0xf4, 0x14460 - 0xf4 },
    { _T("Zabel KK Midnight Bliss"), 0x14460 - 0xf4, 0x14480 - 0xf4 },
    { _T("Zabel AP Midnight Bliss"), 0x14480 - 0xf4, 0x144a0 - 0xf4 },
    { _T("Zabel AK Midnight Bliss"), 0x144a0 - 0xf4, 0x144c0 - 0xf4 },
    { _T("Zabel ES 1"), 0x141a0 - 0xf4, 0x141c0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel ES 2"), 0x141c0 - 0xf4, 0x141e0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel ES 3"), 0x141e0 - 0xf4, 0x14200 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel ES 4"), 0x14200 - 0xf4, 0x14220 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 1"), 0x14220 - 0xf4, 0x14240 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 2"), 0x14240 - 0xf4, 0x14260 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 3"), 0x14260 - 0xf4, 0x14280 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 4"), 0x14280 - 0xf4, 0x142a0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 5"), 0x142a0 - 0xf4, 0x142c0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 6"), 0x142c0 - 0xf4, 0x142e0 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 7"), 0x142e0 - 0xf4, 0x14300 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 8"), 0x14300 - 0xf4, 0x14320 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel Prova di Servo"), 0x14320 - 0xf4, 0x14340 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel Finale Rosso"), 0x14340 - 0xf4, 0x14360 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel Stone"), 0x14360 - 0xf4, 0x14380 - 0xf4, indexCPS2_Vamp_Zabel },
    { _T("Zabel Q-Bee's QJ Honey"), 0x144c0 - 0xf4, 0x144e0 - 0xf4, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_SPECIAL[] =
{
    { _T("Morrigan LP Poisoned"), 0x144e0 - 0xf4, 0x14500 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan MP Poisoned"), 0x14500 - 0xf4, 0x14520 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan HP Poisoned"), 0x14520 - 0xf4, 0x14540 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan LK Poisoned"), 0x14540 - 0xf4, 0x14560 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan MK Poisoned"), 0x14560 - 0xf4, 0x14580 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan HK Poisoned"), 0x14580 - 0xf4, 0x145a0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan PP Poisoned"), 0x145a0 - 0xf4, 0x145c0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan KK Poisoned"), 0x145c0 - 0xf4, 0x145e0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan AP Poisoned"), 0x145e0 - 0xf4, 0x14600 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan AK Poisoned"), 0x14600 - 0xf4, 0x14620 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan LP Zapped"), 0x14620 - 0xf4, 0x14640 - 0xf4 },
    { _T("Morrigan MP Zapped"), 0x14640 - 0xf4, 0x14660 - 0xf4 },
    { _T("Morrigan HP Zapped"), 0x14660 - 0xf4, 0x14680 - 0xf4 },
    { _T("Morrigan LK Zapped"), 0x14680 - 0xf4, 0x146a0 - 0xf4 },
    { _T("Morrigan MK Zapped"), 0x146a0 - 0xf4, 0x146c0 - 0xf4 },
    { _T("Morrigan HK Zapped"), 0x146c0 - 0xf4, 0x146e0 - 0xf4 },
    { _T("Morrigan PP Zapped"), 0x146e0 - 0xf4, 0x14700 - 0xf4 },
    { _T("Morrigan KK Zapped"), 0x14700 - 0xf4, 0x14720 - 0xf4 },
    { _T("Morrigan AP Zapped"), 0x14720 - 0xf4, 0x14740 - 0xf4 },
    { _T("Morrigan AK Zapped"), 0x14740 - 0xf4, 0x14760 - 0xf4 },
    { _T("Morrigan LP Burned"), 0x14760 - 0xf4, 0x14780 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan MP Burned"), 0x14780 - 0xf4, 0x147a0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan HP Burned"), 0x147a0 - 0xf4, 0x147c0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan LK Burned"), 0x147c0 - 0xf4, 0x147e0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan MK Burned"), 0x147e0 - 0xf4, 0x14800 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan HK Burned"), 0x14800 - 0xf4, 0x14820 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan PP Burned"), 0x14820 - 0xf4, 0x14840 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan KK Burned"), 0x14840 - 0xf4, 0x14860 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan AP Burned"), 0x14860 - 0xf4, 0x14880 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan AK Burned"), 0x14880 - 0xf4, 0x148a0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan LP Kotodama Gaeshi"), 0x148a0 - 0xf4, 0x148c0 - 0xf4 },
    { _T("Morrigan MP Kotodama Gaeshi"), 0x148c0 - 0xf4, 0x148e0 - 0xf4 },
    { _T("Morrigan HP Kotodama Gaeshi"), 0x148e0 - 0xf4, 0x14900 - 0xf4 },
    { _T("Morrigan LK Kotodama Gaeshi"), 0x14900 - 0xf4, 0x14920 - 0xf4 },
    { _T("Morrigan MK Kotodama Gaeshi"), 0x14920 - 0xf4, 0x14940 - 0xf4 },
    { _T("Morrigan HK Kotodama Gaeshi"), 0x14940 - 0xf4, 0x14960 - 0xf4 },
    { _T("Morrigan PP Kotodama Gaeshi"), 0x14960 - 0xf4, 0x14980 - 0xf4 },
    { _T("Morrigan KK Kotodama Gaeshi"), 0x14980 - 0xf4, 0x149a0 - 0xf4 },
    { _T("Morrigan AP Kotodama Gaeshi"), 0x149a0 - 0xf4, 0x149c0 - 0xf4 },
    { _T("Morrigan AK Kotodama Gaeshi"), 0x149c0 - 0xf4, 0x149e0 - 0xf4 },
    { _T("Morrigan LP Midnight Bliss"), 0x14bc0 - 0xf4, 0x14be0 - 0xf4 },
    { _T("Morrigan MP Midnight Bliss"), 0x14be0 - 0xf4, 0x14c00 - 0xf4 },
    { _T("Morrigan HP Midnight Bliss"), 0x14c00 - 0xf4, 0x14c20 - 0xf4 },
    { _T("Morrigan LK Midnight Bliss"), 0x14c20 - 0xf4, 0x14c40 - 0xf4 },
    { _T("Morrigan MK Midnight Bliss"), 0x14c40 - 0xf4, 0x14c60 - 0xf4 },
    { _T("Morrigan HK Midnight Bliss"), 0x14c60 - 0xf4, 0x14c80 - 0xf4 },
    { _T("Morrigan PP Midnight Bliss"), 0x14c80 - 0xf4, 0x14ca0 - 0xf4 },
    { _T("Morrigan KK Midnight Bliss"), 0x14ca0 - 0xf4, 0x14cc0 - 0xf4 },
    { _T("Morrigan AP Midnight Bliss"), 0x14cc0 - 0xf4, 0x14ce0 - 0xf4 },
    { _T("Morrigan AK Midnight Bliss"), 0x14ce0 - 0xf4, 0x14d00 - 0xf4 },
    { _T("Morrigan ES 1"), 0x149e0 - 0xf4, 0x14a00 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan ES 2"), 0x14a00 - 0xf4, 0x14a20 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan ES 3"), 0x14a20 - 0xf4, 0x14a40 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan ES 4"), 0x14a40 - 0xf4, 0x14a60 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 1"), 0x14a60 - 0xf4, 0x14a80 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 2"), 0x14a80 - 0xf4, 0x14aa0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 3"), 0x14aa0 - 0xf4, 0x14ac0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 4"), 0x14ac0 - 0xf4, 0x14ae0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 5"), 0x14ae0 - 0xf4, 0x14b00 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 6"), 0x14b00 - 0xf4, 0x14b20 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 7"), 0x14b20 - 0xf4, 0x14b40 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan EX 8"), 0x14b40 - 0xf4, 0x14b60 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan Prova di Servo"), 0x14b60 - 0xf4, 0x14b80 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan Finale Rosso"), 0x14b80 - 0xf4, 0x14ba0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan Stone"), 0x14ba0 - 0xf4, 0x14bc0 - 0xf4, indexCPS2_Morrigan, 0x0f },
    { _T("Morrigan Q-Bee's QJ Honey"), 0x14d00 - 0xf4, 0x14d20 - 0xf4, indexCPS2_Morrigan, 0x0f },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_SPECIAL[] =
{
    { _T("Anakaris LP Poisoned"), 0x14d20 - 0xf4, 0x14d40 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris MP Poisoned"), 0x14d40 - 0xf4, 0x14d60 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris HP Poisoned"), 0x14d60 - 0xf4, 0x14d80 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris LK Poisoned"), 0x14d80 - 0xf4, 0x14da0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris MK Poisoned"), 0x14da0 - 0xf4, 0x14dc0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris HK Poisoned"), 0x14dc0 - 0xf4, 0x14de0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris PP Poisoned"), 0x14de0 - 0xf4, 0x14e00 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris KK Poisoned"), 0x14e00 - 0xf4, 0x14e20 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris AP Poisoned"), 0x14e20 - 0xf4, 0x14e40 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris AK Poisoned"), 0x14e40 - 0xf4, 0x14e60 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris LP Zapped"), 0x14e60 - 0xf4, 0x14e80 - 0xf4 },
    { _T("Anakaris MP Zapped"), 0x14e80 - 0xf4, 0x14ea0 - 0xf4 },
    { _T("Anakaris HP Zapped"), 0x14ea0 - 0xf4, 0x14ec0 - 0xf4 },
    { _T("Anakaris LK Zapped"), 0x14ec0 - 0xf4, 0x14ee0 - 0xf4 },
    { _T("Anakaris MK Zapped"), 0x14ee0 - 0xf4, 0x14f00 - 0xf4 },
    { _T("Anakaris HK Zapped"), 0x14f00 - 0xf4, 0x14f20 - 0xf4 },
    { _T("Anakaris PP Zapped"), 0x14f20 - 0xf4, 0x14f40 - 0xf4 },
    { _T("Anakaris KK Zapped"), 0x14f40 - 0xf4, 0x14f60 - 0xf4 },
    { _T("Anakaris AP Zapped"), 0x14f60 - 0xf4, 0x14f80 - 0xf4 },
    { _T("Anakaris AK Zapped"), 0x14f80 - 0xf4, 0x14fa0 - 0xf4 },
    { _T("Anakaris LP Burned"), 0x14fa0 - 0xf4, 0x14fc0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris MP Burned"), 0x14fc0 - 0xf4, 0x14fe0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris HP Burned"), 0x14fe0 - 0xf4, 0x15000 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris LK Burned"), 0x15000 - 0xf4, 0x15020 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris MK Burned"), 0x15020 - 0xf4, 0x15040 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris HK Burned"), 0x15040 - 0xf4, 0x15060 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris PP Burned"), 0x15060 - 0xf4, 0x15080 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris KK Burned"), 0x15080 - 0xf4, 0x150a0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris AP Burned"), 0x150a0 - 0xf4, 0x150c0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris AK Burned"), 0x150c0 - 0xf4, 0x150e0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris LP Kotodama Gaeshi"), 0x150e0 - 0xf4, 0x15100 - 0xf4 },
    { _T("Anakaris MP Kotodama Gaeshi"), 0x15100 - 0xf4, 0x15120 - 0xf4 },
    { _T("Anakaris HP Kotodama Gaeshi"), 0x15120 - 0xf4, 0x15140 - 0xf4 },
    { _T("Anakaris LK Kotodama Gaeshi"), 0x15140 - 0xf4, 0x15160 - 0xf4 },
    { _T("Anakaris MK Kotodama Gaeshi"), 0x15160 - 0xf4, 0x15180 - 0xf4 },
    { _T("Anakaris HK Kotodama Gaeshi"), 0x15180 - 0xf4, 0x151a0 - 0xf4 },
    { _T("Anakaris PP Kotodama Gaeshi"), 0x151a0 - 0xf4, 0x151c0 - 0xf4 },
    { _T("Anakaris KK Kotodama Gaeshi"), 0x151c0 - 0xf4, 0x151e0 - 0xf4 },
    { _T("Anakaris AP Kotodama Gaeshi"), 0x151e0 - 0xf4, 0x15200 - 0xf4 },
    { _T("Anakaris AK Kotodama Gaeshi"), 0x15200 - 0xf4, 0x15220 - 0xf4 },
    { _T("Anakaris LP Midnight Bliss"), 0x15400 - 0xf4, 0x15420 - 0xf4 },
    { _T("Anakaris MP Midnight Bliss"), 0x15420 - 0xf4, 0x15440 - 0xf4 },
    { _T("Anakaris HP Midnight Bliss"), 0x15440 - 0xf4, 0x15460 - 0xf4 },
    { _T("Anakaris LK Midnight Bliss"), 0x15460 - 0xf4, 0x15480 - 0xf4 },
    { _T("Anakaris MK Midnight Bliss"), 0x15480 - 0xf4, 0x154a0 - 0xf4 },
    { _T("Anakaris HK Midnight Bliss"), 0x154a0 - 0xf4, 0x154c0 - 0xf4 },
    { _T("Anakaris PP Midnight Bliss"), 0x154c0 - 0xf4, 0x154e0 - 0xf4 },
    { _T("Anakaris KK Midnight Bliss"), 0x154e0 - 0xf4, 0x15500 - 0xf4 },
    { _T("Anakaris AP Midnight Bliss"), 0x15500 - 0xf4, 0x15520 - 0xf4 },
    { _T("Anakaris AK Midnight Bliss"), 0x15520 - 0xf4, 0x15540 - 0xf4 },
    { _T("Anakaris ES 1"), 0x15220 - 0xf4, 0x15240 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris ES 2"), 0x15240 - 0xf4, 0x15260 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris ES 3"), 0x15260 - 0xf4, 0x15280 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris ES 4"), 0x15280 - 0xf4, 0x152a0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 1"), 0x152a0 - 0xf4, 0x152c0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 2"), 0x152c0 - 0xf4, 0x152e0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 3"), 0x152e0 - 0xf4, 0x15300 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 4"), 0x15300 - 0xf4, 0x15320 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 5"), 0x15320 - 0xf4, 0x15340 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 6"), 0x15340 - 0xf4, 0x15360 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 7"), 0x15360 - 0xf4, 0x15380 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris EX 8"), 0x15380 - 0xf4, 0x153a0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris Prova di Servo"), 0x153a0 - 0xf4, 0x153c0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris Finale Rosso"), 0x153c0 - 0xf4, 0x153e0 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris Stone"), 0x153e0 - 0xf4, 0x15400 - 0xf4, indexCPS2_Anakaris },
    { _T("Anakaris Q-Bee's QJ Honey"), 0x15540 - 0xf4, 0x15560 - 0xf4, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_SPECIAL[] =
{
    { _T("Felicia LP Poisoned"), 0x15560 - 0xf4, 0x15580 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia MP Poisoned"), 0x15580 - 0xf4, 0x155a0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia HP Poisoned"), 0x155a0 - 0xf4, 0x155c0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia LK Poisoned"), 0x155c0 - 0xf4, 0x155e0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia MK Poisoned"), 0x155e0 - 0xf4, 0x15600 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia HK Poisoned"), 0x15600 - 0xf4, 0x15620 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia PP Poisoned"), 0x15620 - 0xf4, 0x15640 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia KK Poisoned"), 0x15640 - 0xf4, 0x15660 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia AP Poisoned"), 0x15660 - 0xf4, 0x15680 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia AK Poisoned"), 0x15680 - 0xf4, 0x156a0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia LP Zapped"), 0x156a0 - 0xf4, 0x156c0 - 0xf4 },
    { _T("Felicia MP Zapped"), 0x156c0 - 0xf4, 0x156e0 - 0xf4 },
    { _T("Felicia HP Zapped"), 0x156e0 - 0xf4, 0x15700 - 0xf4 },
    { _T("Felicia LK Zapped"), 0x15700 - 0xf4, 0x15720 - 0xf4 },
    { _T("Felicia MK Zapped"), 0x15720 - 0xf4, 0x15740 - 0xf4 },
    { _T("Felicia HK Zapped"), 0x15740 - 0xf4, 0x15760 - 0xf4 },
    { _T("Felicia PP Zapped"), 0x15760 - 0xf4, 0x15780 - 0xf4 },
    { _T("Felicia KK Zapped"), 0x15780 - 0xf4, 0x157a0 - 0xf4 },
    { _T("Felicia AP Zapped"), 0x157a0 - 0xf4, 0x157c0 - 0xf4 },
    { _T("Felicia AK Zapped"), 0x157c0 - 0xf4, 0x157e0 - 0xf4 },
    { _T("Felicia LP Burned"), 0x157e0 - 0xf4, 0x15800 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia MP Burned"), 0x15800 - 0xf4, 0x15820 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia HP Burned"), 0x15820 - 0xf4, 0x15840 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia LK Burned"), 0x15840 - 0xf4, 0x15860 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia MK Burned"), 0x15860 - 0xf4, 0x15880 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia HK Burned"), 0x15880 - 0xf4, 0x158a0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia PP Burned"), 0x158a0 - 0xf4, 0x158c0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia KK Burned"), 0x158c0 - 0xf4, 0x158e0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia AP Burned"), 0x158e0 - 0xf4, 0x15900 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia AK Burned"), 0x15900 - 0xf4, 0x15920 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia LP Kotodama Gaeshi"), 0x15920 - 0xf4, 0x15940 - 0xf4 },
    { _T("Felicia MP Kotodama Gaeshi"), 0x15940 - 0xf4, 0x15960 - 0xf4 },
    { _T("Felicia HP Kotodama Gaeshi"), 0x15960 - 0xf4, 0x15980 - 0xf4 },
    { _T("Felicia LK Kotodama Gaeshi"), 0x15980 - 0xf4, 0x159a0 - 0xf4 },
    { _T("Felicia MK Kotodama Gaeshi"), 0x159a0 - 0xf4, 0x159c0 - 0xf4 },
    { _T("Felicia HK Kotodama Gaeshi"), 0x159c0 - 0xf4, 0x159e0 - 0xf4 },
    { _T("Felicia PP Kotodama Gaeshi"), 0x159e0 - 0xf4, 0x15a00 - 0xf4 },
    { _T("Felicia KK Kotodama Gaeshi"), 0x15a00 - 0xf4, 0x15a20 - 0xf4 },
    { _T("Felicia AP Kotodama Gaeshi"), 0x15a20 - 0xf4, 0x15a40 - 0xf4 },
    { _T("Felicia AK Kotodama Gaeshi"), 0x15a40 - 0xf4, 0x15a60 - 0xf4 },
    { _T("Felicia LP Midnight Bliss"), 0x15c40 - 0xf4, 0x15c60 - 0xf4 },
    { _T("Felicia MP Midnight Bliss"), 0x15c60 - 0xf4, 0x15c80 - 0xf4 },
    { _T("Felicia HP Midnight Bliss"), 0x15c80 - 0xf4, 0x15ca0 - 0xf4 },
    { _T("Felicia LK Midnight Bliss"), 0x15ca0 - 0xf4, 0x15cc0 - 0xf4 },
    { _T("Felicia MK Midnight Bliss"), 0x15cc0 - 0xf4, 0x15ce0 - 0xf4 },
    { _T("Felicia HK Midnight Bliss"), 0x15ce0 - 0xf4, 0x15d00 - 0xf4 },
    { _T("Felicia PP Midnight Bliss"), 0x15d00 - 0xf4, 0x15d20 - 0xf4 },
    { _T("Felicia KK Midnight Bliss"), 0x15d20 - 0xf4, 0x15d40 - 0xf4 },
    { _T("Felicia AP Midnight Bliss"), 0x15d40 - 0xf4, 0x15d60 - 0xf4 },
    { _T("Felicia AK Midnight Bliss"), 0x15d60 - 0xf4, 0x15d80 - 0xf4 },
    { _T("Felicia ES 1"), 0x15a60 - 0xf4, 0x15a80 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia ES 2"), 0x15a80 - 0xf4, 0x15aa0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia ES 3"), 0x15aa0 - 0xf4, 0x15ac0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia ES 4"), 0x15ac0 - 0xf4, 0x15ae0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 1"), 0x15ae0 - 0xf4, 0x15b00 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 2"), 0x15b00 - 0xf4, 0x15b20 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 3"), 0x15b20 - 0xf4, 0x15b40 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 4"), 0x15b40 - 0xf4, 0x15b60 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 5"), 0x15b60 - 0xf4, 0x15b80 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 6"), 0x15b80 - 0xf4, 0x15ba0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 7"), 0x15ba0 - 0xf4, 0x15bc0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia EX 8"), 0x15bc0 - 0xf4, 0x15be0 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia Prova di Servo"), 0x15be0 - 0xf4, 0x15c00 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia Finale Rosso"), 0x15c00 - 0xf4, 0x15c20 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia Stone"), 0x15c20 - 0xf4, 0x15c40 - 0xf4, indexCPS2_Felicia },
    { _T("Felicia Q-Bee's QJ Honey"), 0x15d80 - 0xf4, 0x15da0 - 0xf4, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_SPECIAL[] =
{
    { _T("Bishamon LP Poisoned"), 0x15da0 - 0xf4, 0x15dc0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon MP Poisoned"), 0x15dc0 - 0xf4, 0x15de0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon HP Poisoned"), 0x15de0 - 0xf4, 0x15e00 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon LK Poisoned"), 0x15e00 - 0xf4, 0x15e20 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon MK Poisoned"), 0x15e20 - 0xf4, 0x15e40 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon HK Poisoned"), 0x15e40 - 0xf4, 0x15e60 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon PP Poisoned"), 0x15e60 - 0xf4, 0x15e80 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon KK Poisoned"), 0x15e80 - 0xf4, 0x15ea0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon AP Poisoned"), 0x15ea0 - 0xf4, 0x15ec0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon AK Poisoned"), 0x15ec0 - 0xf4, 0x15ee0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon LP Zapped"), 0x15ee0 - 0xf4, 0x15f00 - 0xf4 },
    { _T("Bishamon MP Zapped"), 0x15f00 - 0xf4, 0x15f20 - 0xf4 },
    { _T("Bishamon HP Zapped"), 0x15f20 - 0xf4, 0x15f40 - 0xf4 },
    { _T("Bishamon LK Zapped"), 0x15f40 - 0xf4, 0x15f60 - 0xf4 },
    { _T("Bishamon MK Zapped"), 0x15f60 - 0xf4, 0x15f80 - 0xf4 },
    { _T("Bishamon HK Zapped"), 0x15f80 - 0xf4, 0x15fa0 - 0xf4 },
    { _T("Bishamon PP Zapped"), 0x15fa0 - 0xf4, 0x15fc0 - 0xf4 },
    { _T("Bishamon KK Zapped"), 0x15fc0 - 0xf4, 0x15fe0 - 0xf4 },
    { _T("Bishamon AP Zapped"), 0x15fe0 - 0xf4, 0x16000 - 0xf4 },
    { _T("Bishamon AK Zapped"), 0x16000 - 0xf4, 0x16020 - 0xf4 },
    { _T("Bishamon LP Burned"), 0x16020 - 0xf4, 0x16040 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon MP Burned"), 0x16040 - 0xf4, 0x16060 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon HP Burned"), 0x16060 - 0xf4, 0x16080 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon LK Burned"), 0x16080 - 0xf4, 0x160a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon MK Burned"), 0x160a0 - 0xf4, 0x160c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon HK Burned"), 0x160c0 - 0xf4, 0x160e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon PP Burned"), 0x160e0 - 0xf4, 0x16100 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon KK Burned"), 0x16100 - 0xf4, 0x16120 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon AP Burned"), 0x16120 - 0xf4, 0x16140 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon AK Burned"), 0x16140 - 0xf4, 0x16160 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon LP Kotodama Gaeshi"), 0x16160 - 0xf4, 0x16180 - 0xf4 },
    { _T("Bishamon MP Kotodama Gaeshi"), 0x16180 - 0xf4, 0x161a0 - 0xf4 },
    { _T("Bishamon HP Kotodama Gaeshi"), 0x161a0 - 0xf4, 0x161c0 - 0xf4 },
    { _T("Bishamon LK Kotodama Gaeshi"), 0x161c0 - 0xf4, 0x161e0 - 0xf4 },
    { _T("Bishamon MK Kotodama Gaeshi"), 0x161e0 - 0xf4, 0x16200 - 0xf4 },
    { _T("Bishamon HK Kotodama Gaeshi"), 0x16200 - 0xf4, 0x16220 - 0xf4 },
    { _T("Bishamon PP Kotodama Gaeshi"), 0x16220 - 0xf4, 0x16240 - 0xf4 },
    { _T("Bishamon KK Kotodama Gaeshi"), 0x16240 - 0xf4, 0x16260 - 0xf4 },
    { _T("Bishamon AP Kotodama Gaeshi"), 0x16260 - 0xf4, 0x16280 - 0xf4 },
    { _T("Bishamon AK Kotodama Gaeshi"), 0x16280 - 0xf4, 0x162a0 - 0xf4 },
    { _T("Bishamon LP Midnight Bliss"), 0x16480 - 0xf4, 0x164a0 - 0xf4 },
    { _T("Bishamon MP Midnight Bliss"), 0x164a0 - 0xf4, 0x164c0 - 0xf4 },
    { _T("Bishamon HP Midnight Bliss"), 0x164c0 - 0xf4, 0x164e0 - 0xf4 },
    { _T("Bishamon LK Midnight Bliss"), 0x164e0 - 0xf4, 0x16500 - 0xf4 },
    { _T("Bishamon MK Midnight Bliss"), 0x16500 - 0xf4, 0x16520 - 0xf4 },
    { _T("Bishamon HK Midnight Bliss"), 0x16520 - 0xf4, 0x16540 - 0xf4 },
    { _T("Bishamon PP Midnight Bliss"), 0x16540 - 0xf4, 0x16560 - 0xf4 },
    { _T("Bishamon KK Midnight Bliss"), 0x16560 - 0xf4, 0x16580 - 0xf4 },
    { _T("Bishamon AP Midnight Bliss"), 0x16580 - 0xf4, 0x165a0 - 0xf4 },
    { _T("Bishamon AK Midnight Bliss"), 0x165a0 - 0xf4, 0x165c0 - 0xf4 },
    { _T("Bishamon ES 1"), 0x162a0 - 0xf4, 0x162c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon ES 2"), 0x162c0 - 0xf4, 0x162e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon ES 3"), 0x162e0 - 0xf4, 0x16300 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon ES 4"), 0x16300 - 0xf4, 0x16320 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 1"), 0x16320 - 0xf4, 0x16340 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 2"), 0x16340 - 0xf4, 0x16360 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 3"), 0x16360 - 0xf4, 0x16380 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 4"), 0x16380 - 0xf4, 0x163a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 5"), 0x163a0 - 0xf4, 0x163c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 6"), 0x163c0 - 0xf4, 0x163e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 7"), 0x163e0 - 0xf4, 0x16400 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon EX 8"), 0x16400 - 0xf4, 0x16420 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon Prova di Servo"), 0x16420 - 0xf4, 0x16440 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon Finale Rosso"), 0x16440 - 0xf4, 0x16460 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon Stone"), 0x16460 - 0xf4, 0x16480 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Bishamon Q-Bee's QJ Honey"), 0x165c0 - 0xf4, 0x165e0 - 0xf4, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_SPECIAL[] =
{
    { _T("Aulbath LP Poisoned"), 0x165e0 - 0xf4, 0x16600 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath MP Poisoned"), 0x16600 - 0xf4, 0x16620 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath HP Poisoned"), 0x16620 - 0xf4, 0x16640 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath LK Poisoned"), 0x16640 - 0xf4, 0x16660 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath MK Poisoned"), 0x16660 - 0xf4, 0x16680 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath HK Poisoned"), 0x16680 - 0xf4, 0x166a0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath PP Poisoned"), 0x166a0 - 0xf4, 0x166c0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath KK Poisoned"), 0x166c0 - 0xf4, 0x166e0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath AP Poisoned"), 0x166e0 - 0xf4, 0x16700 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath AK Poisoned"), 0x16700 - 0xf4, 0x16720 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath LP Zapped"), 0x16720 - 0xf4, 0x16740 - 0xf4 },
    { _T("Aulbath MP Zapped"), 0x16740 - 0xf4, 0x16760 - 0xf4 },
    { _T("Aulbath HP Zapped"), 0x16760 - 0xf4, 0x16780 - 0xf4 },
    { _T("Aulbath LK Zapped"), 0x16780 - 0xf4, 0x167a0 - 0xf4 },
    { _T("Aulbath MK Zapped"), 0x167a0 - 0xf4, 0x167c0 - 0xf4 },
    { _T("Aulbath HK Zapped"), 0x167c0 - 0xf4, 0x167e0 - 0xf4 },
    { _T("Aulbath PP Zapped"), 0x167e0 - 0xf4, 0x16800 - 0xf4 },
    { _T("Aulbath KK Zapped"), 0x16800 - 0xf4, 0x16820 - 0xf4 },
    { _T("Aulbath AP Zapped"), 0x16820 - 0xf4, 0x16840 - 0xf4 },
    { _T("Aulbath AK Zapped"), 0x16840 - 0xf4, 0x16860 - 0xf4 },
    { _T("Aulbath LP Burned"), 0x16860 - 0xf4, 0x16880 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath MP Burned"), 0x16880 - 0xf4, 0x168a0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath HP Burned"), 0x168a0 - 0xf4, 0x168c0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath LK Burned"), 0x168c0 - 0xf4, 0x168e0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath MK Burned"), 0x168e0 - 0xf4, 0x16900 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath HK Burned"), 0x16900 - 0xf4, 0x16920 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath PP Burned"), 0x16920 - 0xf4, 0x16940 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath KK Burned"), 0x16940 - 0xf4, 0x16960 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath AP Burned"), 0x16960 - 0xf4, 0x16980 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath AK Burned"), 0x16980 - 0xf4, 0x169a0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath LP Kotodama Gaeshi"), 0x169a0 - 0xf4, 0x169c0 - 0xf4 },
    { _T("Aulbath MP Kotodama Gaeshi"), 0x169c0 - 0xf4, 0x169e0 - 0xf4 },
    { _T("Aulbath HP Kotodama Gaeshi"), 0x169e0 - 0xf4, 0x16a00 - 0xf4 },
    { _T("Aulbath LK Kotodama Gaeshi"), 0x16a00 - 0xf4, 0x16a20 - 0xf4 },
    { _T("Aulbath MK Kotodama Gaeshi"), 0x16a20 - 0xf4, 0x16a40 - 0xf4 },
    { _T("Aulbath HK Kotodama Gaeshi"), 0x16a40 - 0xf4, 0x16a60 - 0xf4 },
    { _T("Aulbath PP Kotodama Gaeshi"), 0x16a60 - 0xf4, 0x16a80 - 0xf4 },
    { _T("Aulbath KK Kotodama Gaeshi"), 0x16a80 - 0xf4, 0x16aa0 - 0xf4 },
    { _T("Aulbath AP Kotodama Gaeshi"), 0x16aa0 - 0xf4, 0x16ac0 - 0xf4 },
    { _T("Aulbath AK Kotodama Gaeshi"), 0x16ac0 - 0xf4, 0x16ae0 - 0xf4 },
    { _T("Aulbath LP Midnight Bliss"), 0x16cc0 - 0xf4, 0x16ce0 - 0xf4 },
    { _T("Aulbath MP Midnight Bliss"), 0x16ce0 - 0xf4, 0x16d00 - 0xf4 },
    { _T("Aulbath HP Midnight Bliss"), 0x16d00 - 0xf4, 0x16d20 - 0xf4 },
    { _T("Aulbath LK Midnight Bliss"), 0x16d20 - 0xf4, 0x16d40 - 0xf4 },
    { _T("Aulbath MK Midnight Bliss"), 0x16d40 - 0xf4, 0x16d60 - 0xf4 },
    { _T("Aulbath HK Midnight Bliss"), 0x16d60 - 0xf4, 0x16d80 - 0xf4 },
    { _T("Aulbath PP Midnight Bliss"), 0x16d80 - 0xf4, 0x16da0 - 0xf4 },
    { _T("Aulbath KK Midnight Bliss"), 0x16da0 - 0xf4, 0x16dc0 - 0xf4 },
    { _T("Aulbath AP Midnight Bliss"), 0x16dc0 - 0xf4, 0x16de0 - 0xf4 },
    { _T("Aulbath AK Midnight Bliss"), 0x16de0 - 0xf4, 0x16e00 - 0xf4 },
    { _T("Aulbath ES 1"), 0x16ae0 - 0xf4, 0x16b00 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath ES 2"), 0x16b00 - 0xf4, 0x16b20 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath ES 3"), 0x16b20 - 0xf4, 0x16b40 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath ES 4"), 0x16b40 - 0xf4, 0x16b60 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 1"), 0x16b60 - 0xf4, 0x16b80 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 2"), 0x16b80 - 0xf4, 0x16ba0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 3"), 0x16ba0 - 0xf4, 0x16bc0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 4"), 0x16bc0 - 0xf4, 0x16be0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 5"), 0x16be0 - 0xf4, 0x16c00 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 6"), 0x16c00 - 0xf4, 0x16c20 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 7"), 0x16c20 - 0xf4, 0x16c40 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath EX 8"), 0x16c40 - 0xf4, 0x16c60 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath Prova di Servo"), 0x16c60 - 0xf4, 0x16c80 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath Finale Rosso"), 0x16c80 - 0xf4, 0x16ca0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath Stone"), 0x16ca0 - 0xf4, 0x16cc0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { _T("Aulbath Q-Bee's QJ Honey"), 0x16e00 - 0xf4, 0x16e20 - 0xf4, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_SPECIAL[] =
{
    { _T("Sasquatch LP Poisoned"), 0x16e20 - 0xf4, 0x16e40 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch MP Poisoned"), 0x16e40 - 0xf4, 0x16e60 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch HP Poisoned"), 0x16e60 - 0xf4, 0x16e80 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch LK Poisoned"), 0x16e80 - 0xf4, 0x16ea0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch MK Poisoned"), 0x16ea0 - 0xf4, 0x16ec0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch HK Poisoned"), 0x16ec0 - 0xf4, 0x16ee0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch PP Poisoned"), 0x16ee0 - 0xf4, 0x16f00 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch KK Poisoned"), 0x16f00 - 0xf4, 0x16f20 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch AP Poisoned"), 0x16f20 - 0xf4, 0x16f40 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch AK Poisoned"), 0x16f40 - 0xf4, 0x16f60 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch LP Zapped"), 0x16f60 - 0xf4, 0x16f80 - 0xf4 },
    { _T("Sasquatch MP Zapped"), 0x16f80 - 0xf4, 0x16fa0 - 0xf4 },
    { _T("Sasquatch HP Zapped"), 0x16fa0 - 0xf4, 0x16fc0 - 0xf4 },
    { _T("Sasquatch LK Zapped"), 0x16fc0 - 0xf4, 0x16fe0 - 0xf4 },
    { _T("Sasquatch MK Zapped"), 0x16fe0 - 0xf4, 0x17000 - 0xf4 },
    { _T("Sasquatch HK Zapped"), 0x17000 - 0xf4, 0x17020 - 0xf4 },
    { _T("Sasquatch PP Zapped"), 0x17020 - 0xf4, 0x17040 - 0xf4 },
    { _T("Sasquatch KK Zapped"), 0x17040 - 0xf4, 0x17060 - 0xf4 },
    { _T("Sasquatch AP Zapped"), 0x17060 - 0xf4, 0x17080 - 0xf4 },
    { _T("Sasquatch AK Zapped"), 0x17080 - 0xf4, 0x170a0 - 0xf4 },
    { _T("Sasquatch LP Burned"), 0x170a0 - 0xf4, 0x170c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch MP Burned"), 0x170c0 - 0xf4, 0x170e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch HP Burned"), 0x170e0 - 0xf4, 0x17100 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch LK Burned"), 0x17100 - 0xf4, 0x17120 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch MK Burned"), 0x17120 - 0xf4, 0x17140 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch HK Burned"), 0x17140 - 0xf4, 0x17160 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch PP Burned"), 0x17160 - 0xf4, 0x17180 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch KK Burned"), 0x17180 - 0xf4, 0x171a0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch AP Burned"), 0x171a0 - 0xf4, 0x171c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch AK Burned"), 0x171c0 - 0xf4, 0x171e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch LP Kotodama Gaeshi"), 0x171e0 - 0xf4, 0x17200 - 0xf4 },
    { _T("Sasquatch MP Kotodama Gaeshi"), 0x17200 - 0xf4, 0x17220 - 0xf4 },
    { _T("Sasquatch HP Kotodama Gaeshi"), 0x17220 - 0xf4, 0x17240 - 0xf4 },
    { _T("Sasquatch LK Kotodama Gaeshi"), 0x17240 - 0xf4, 0x17260 - 0xf4 },
    { _T("Sasquatch MK Kotodama Gaeshi"), 0x17260 - 0xf4, 0x17280 - 0xf4 },
    { _T("Sasquatch HK Kotodama Gaeshi"), 0x17280 - 0xf4, 0x172a0 - 0xf4 },
    { _T("Sasquatch PP Kotodama Gaeshi"), 0x172a0 - 0xf4, 0x172c0 - 0xf4 },
    { _T("Sasquatch KK Kotodama Gaeshi"), 0x172c0 - 0xf4, 0x172e0 - 0xf4 },
    { _T("Sasquatch AP Kotodama Gaeshi"), 0x172e0 - 0xf4, 0x17300 - 0xf4 },
    { _T("Sasquatch AK Kotodama Gaeshi"), 0x17300 - 0xf4, 0x17320 - 0xf4 },
    { _T("Sasquatch LP Midnight Bliss"), 0x17500 - 0xf4, 0x17520 - 0xf4 },
    { _T("Sasquatch MP Midnight Bliss"), 0x17520 - 0xf4, 0x17540 - 0xf4 },
    { _T("Sasquatch HP Midnight Bliss"), 0x17540 - 0xf4, 0x17560 - 0xf4 },
    { _T("Sasquatch LK Midnight Bliss"), 0x17560 - 0xf4, 0x17580 - 0xf4 },
    { _T("Sasquatch MK Midnight Bliss"), 0x17580 - 0xf4, 0x175a0 - 0xf4 },
    { _T("Sasquatch HK Midnight Bliss"), 0x175a0 - 0xf4, 0x175c0 - 0xf4 },
    { _T("Sasquatch PP Midnight Bliss"), 0x175c0 - 0xf4, 0x175e0 - 0xf4 },
    { _T("Sasquatch KK Midnight Bliss"), 0x175e0 - 0xf4, 0x17600 - 0xf4 },
    { _T("Sasquatch AP Midnight Bliss"), 0x17600 - 0xf4, 0x17620 - 0xf4 },
    { _T("Sasquatch AK Midnight Bliss"), 0x17620 - 0xf4, 0x17640 - 0xf4 },
    { _T("Sasquatch ES 1"), 0x17320 - 0xf4, 0x17340 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch ES 2"), 0x17340 - 0xf4, 0x17360 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch ES 3"), 0x17360 - 0xf4, 0x17380 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch ES 4"), 0x17380 - 0xf4, 0x173a0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 1"), 0x173a0 - 0xf4, 0x173c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 2"), 0x173c0 - 0xf4, 0x173e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 3"), 0x173e0 - 0xf4, 0x17400 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 4"), 0x17400 - 0xf4, 0x17420 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 5"), 0x17420 - 0xf4, 0x17440 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 6"), 0x17440 - 0xf4, 0x17460 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 7"), 0x17460 - 0xf4, 0x17480 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch EX 8"), 0x17480 - 0xf4, 0x174a0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch Prova di Servo"), 0x174a0 - 0xf4, 0x174c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch Finale Rosso"), 0x174c0 - 0xf4, 0x174e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch Stone"), 0x174e0 - 0xf4, 0x17500 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { _T("Sasquatch Q-Bee's QJ Honey"), 0x17640 - 0xf4, 0x17660 - 0xf4, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QBEE_PALETTES_SPECIAL[] =
{
    { _T("Q-Bee LP Poisoned"), 0x17660 - 0xf4, 0x17680 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee MP Poisoned"), 0x17680 - 0xf4, 0x176a0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee HP Poisoned"), 0x176a0 - 0xf4, 0x176c0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee LK Poisoned"), 0x176c0 - 0xf4, 0x176e0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee MK Poisoned"), 0x176e0 - 0xf4, 0x17700 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee HK Poisoned"), 0x17700 - 0xf4, 0x17720 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee PP Poisoned"), 0x17720 - 0xf4, 0x17740 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee KK Poisoned"), 0x17740 - 0xf4, 0x17760 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee AP Poisoned"), 0x17760 - 0xf4, 0x17780 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee AK Poisoned"), 0x17780 - 0xf4, 0x177a0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee LP Zapped"), 0x177a0 - 0xf4, 0x177c0 - 0xf4 },
    { _T("Q-Bee MP Zapped"), 0x177c0 - 0xf4, 0x177e0 - 0xf4 },
    { _T("Q-Bee HP Zapped"), 0x177e0 - 0xf4, 0x17800 - 0xf4 },
    { _T("Q-Bee LK Zapped"), 0x17800 - 0xf4, 0x17820 - 0xf4 },
    { _T("Q-Bee MK Zapped"), 0x17820 - 0xf4, 0x17840 - 0xf4 },
    { _T("Q-Bee HK Zapped"), 0x17840 - 0xf4, 0x17860 - 0xf4 },
    { _T("Q-Bee PP Zapped"), 0x17860 - 0xf4, 0x17880 - 0xf4 },
    { _T("Q-Bee KK Zapped"), 0x17880 - 0xf4, 0x178a0 - 0xf4 },
    { _T("Q-Bee AP Zapped"), 0x178a0 - 0xf4, 0x178c0 - 0xf4 },
    { _T("Q-Bee AK Zapped"), 0x178c0 - 0xf4, 0x178e0 - 0xf4 },
    { _T("Q-Bee LP Burned"), 0x178e0 - 0xf4, 0x17900 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee MP Burned"), 0x17900 - 0xf4, 0x17920 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee HP Burned"), 0x17920 - 0xf4, 0x17940 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee LK Burned"), 0x17940 - 0xf4, 0x17960 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee MK Burned"), 0x17960 - 0xf4, 0x17980 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee HK Burned"), 0x17980 - 0xf4, 0x179a0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee PP Burned"), 0x179a0 - 0xf4, 0x179c0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee KK Burned"), 0x179c0 - 0xf4, 0x179e0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee AP Burned"), 0x179e0 - 0xf4, 0x17a00 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee AK Burned"), 0x17a00 - 0xf4, 0x17a20 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee LP Kotodama Gaeshi"), 0x17a20 - 0xf4, 0x17a40 - 0xf4 },
    { _T("Q-Bee MP Kotodama Gaeshi"), 0x17a40 - 0xf4, 0x17a60 - 0xf4 },
    { _T("Q-Bee HP Kotodama Gaeshi"), 0x17a60 - 0xf4, 0x17a80 - 0xf4 },
    { _T("Q-Bee LK Kotodama Gaeshi"), 0x17a80 - 0xf4, 0x17aa0 - 0xf4 },
    { _T("Q-Bee MK Kotodama Gaeshi"), 0x17aa0 - 0xf4, 0x17ac0 - 0xf4 },
    { _T("Q-Bee HK Kotodama Gaeshi"), 0x17ac0 - 0xf4, 0x17ae0 - 0xf4 },
    { _T("Q-Bee PP Kotodama Gaeshi"), 0x17ae0 - 0xf4, 0x17b00 - 0xf4 },
    { _T("Q-Bee KK Kotodama Gaeshi"), 0x17b00 - 0xf4, 0x17b20 - 0xf4 },
    { _T("Q-Bee AP Kotodama Gaeshi"), 0x17b20 - 0xf4, 0x17b40 - 0xf4 },
    { _T("Q-Bee AK Kotodama Gaeshi"), 0x17b40 - 0xf4, 0x17b60 - 0xf4 },
    { _T("Q-Bee LP Midnight Bliss"), 0x17d40 - 0xf4, 0x17d60 - 0xf4 },
    { _T("Q-Bee MP Midnight Bliss"), 0x17d60 - 0xf4, 0x17d80 - 0xf4 },
    { _T("Q-Bee HP Midnight Bliss"), 0x17d80 - 0xf4, 0x17da0 - 0xf4 },
    { _T("Q-Bee LK Midnight Bliss"), 0x17da0 - 0xf4, 0x17dc0 - 0xf4 },
    { _T("Q-Bee MK Midnight Bliss"), 0x17dc0 - 0xf4, 0x17de0 - 0xf4 },
    { _T("Q-Bee HK Midnight Bliss"), 0x17de0 - 0xf4, 0x17e00 - 0xf4 },
    { _T("Q-Bee PP Midnight Bliss"), 0x17e00 - 0xf4, 0x17e20 - 0xf4 },
    { _T("Q-Bee KK Midnight Bliss"), 0x17e20 - 0xf4, 0x17e40 - 0xf4 },
    { _T("Q-Bee AP Midnight Bliss"), 0x17e40 - 0xf4, 0x17e60 - 0xf4 },
    { _T("Q-Bee AK Midnight Bliss"), 0x17e60 - 0xf4, 0x17e80 - 0xf4 },
    { _T("Q-Bee ES 1"), 0x17b60 - 0xf4, 0x17b80 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee ES 2"), 0x17b80 - 0xf4, 0x17ba0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee ES 3"), 0x17ba0 - 0xf4, 0x17bc0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee ES 4"), 0x17bc0 - 0xf4, 0x17be0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 1"), 0x17be0 - 0xf4, 0x17c00 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 2"), 0x17c00 - 0xf4, 0x17c20 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 3"), 0x17c20 - 0xf4, 0x17c40 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 4"), 0x17c40 - 0xf4, 0x17c60 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 5"), 0x17c60 - 0xf4, 0x17c80 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 6"), 0x17c80 - 0xf4, 0x17ca0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 7"), 0x17ca0 - 0xf4, 0x17cc0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee EX 8"), 0x17cc0 - 0xf4, 0x17ce0 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee Prova di Servo"), 0x17ce0 - 0xf4, 0x17d00 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee Finale Rosso"), 0x17d00 - 0xf4, 0x17d20 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee Stone"), 0x17d20 - 0xf4, 0x17d40 - 0xf4, indexCPS2_Vamp_QBee },
    { _T("Q-Bee Q-Bee's QJ Honey"), 0x17e80 - 0xf4, 0x17ea0 - 0xf4, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_SPECIAL[] =
{
    { _T("Lei-Lei LP Poisoned"), 0x17ea0 - 0xf4, 0x17ec0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei MP Poisoned"), 0x17ec0 - 0xf4, 0x17ee0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei HP Poisoned"), 0x17ee0 - 0xf4, 0x17f00 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei LK Poisoned"), 0x17f00 - 0xf4, 0x17f20 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei MK Poisoned"), 0x17f20 - 0xf4, 0x17f40 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei HK Poisoned"), 0x17f40 - 0xf4, 0x17f60 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei PP Poisoned"), 0x17f60 - 0xf4, 0x17f80 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei KK Poisoned"), 0x17f80 - 0xf4, 0x17fa0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei AP Poisoned"), 0x17fa0 - 0xf4, 0x17fc0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei AK Poisoned"), 0x17fc0 - 0xf4, 0x17fe0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei LP Zapped"), 0x17fe0 - 0xf4, 0x18000 - 0xf4 },
    { _T("Lei-Lei MP Zapped"), 0x18000 - 0xf4, 0x18020 - 0xf4 },
    { _T("Lei-Lei HP Zapped"), 0x18020 - 0xf4, 0x18040 - 0xf4 },
    { _T("Lei-Lei LK Zapped"), 0x18040 - 0xf4, 0x18060 - 0xf4 },
    { _T("Lei-Lei MK Zapped"), 0x18060 - 0xf4, 0x18080 - 0xf4 },
    { _T("Lei-Lei HK Zapped"), 0x18080 - 0xf4, 0x180a0 - 0xf4 },
    { _T("Lei-Lei PP Zapped"), 0x180a0 - 0xf4, 0x180c0 - 0xf4 },
    { _T("Lei-Lei KK Zapped"), 0x180c0 - 0xf4, 0x180e0 - 0xf4 },
    { _T("Lei-Lei AP Zapped"), 0x180e0 - 0xf4, 0x18100 - 0xf4 },
    { _T("Lei-Lei AK Zapped"), 0x18100 - 0xf4, 0x18120 - 0xf4 },
    { _T("Lei-Lei LP Burned"), 0x18120 - 0xf4, 0x18140 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei MP Burned"), 0x18140 - 0xf4, 0x18160 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei HP Burned"), 0x18160 - 0xf4, 0x18180 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei LK Burned"), 0x18180 - 0xf4, 0x181a0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei MK Burned"), 0x181a0 - 0xf4, 0x181c0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei HK Burned"), 0x181c0 - 0xf4, 0x181e0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei PP Burned"), 0x181e0 - 0xf4, 0x18200 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei KK Burned"), 0x18200 - 0xf4, 0x18220 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei AP Burned"), 0x18220 - 0xf4, 0x18240 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei AK Burned"), 0x18240 - 0xf4, 0x18260 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei LP Kotodama Gaeshi"), 0x18260 - 0xf4, 0x18280 - 0xf4 },
    { _T("Lei-Lei MP Kotodama Gaeshi"), 0x18280 - 0xf4, 0x182a0 - 0xf4 },
    { _T("Lei-Lei HP Kotodama Gaeshi"), 0x182a0 - 0xf4, 0x182c0 - 0xf4 },
    { _T("Lei-Lei LK Kotodama Gaeshi"), 0x182c0 - 0xf4, 0x182e0 - 0xf4 },
    { _T("Lei-Lei MK Kotodama Gaeshi"), 0x182e0 - 0xf4, 0x18300 - 0xf4 },
    { _T("Lei-Lei HK Kotodama Gaeshi"), 0x18300 - 0xf4, 0x18320 - 0xf4 },
    { _T("Lei-Lei PP Kotodama Gaeshi"), 0x18320 - 0xf4, 0x18340 - 0xf4 },
    { _T("Lei-Lei KK Kotodama Gaeshi"), 0x18340 - 0xf4, 0x18360 - 0xf4 },
    { _T("Lei-Lei AP Kotodama Gaeshi"), 0x18360 - 0xf4, 0x18380 - 0xf4 },
    { _T("Lei-Lei AK Kotodama Gaeshi"), 0x18380 - 0xf4, 0x183a0 - 0xf4 },
    { _T("Lei-Lei LP Midnight Bliss"), 0x18580 - 0xf4, 0x185a0 - 0xf4 },
    { _T("Lei-Lei MP Midnight Bliss"), 0x185a0 - 0xf4, 0x185c0 - 0xf4 },
    { _T("Lei-Lei HP Midnight Bliss"), 0x185c0 - 0xf4, 0x185e0 - 0xf4 },
    { _T("Lei-Lei LK Midnight Bliss"), 0x185e0 - 0xf4, 0x18600 - 0xf4 },
    { _T("Lei-Lei MK Midnight Bliss"), 0x18600 - 0xf4, 0x18620 - 0xf4 },
    { _T("Lei-Lei HK Midnight Bliss"), 0x18620 - 0xf4, 0x18640 - 0xf4 },
    { _T("Lei-Lei PP Midnight Bliss"), 0x18640 - 0xf4, 0x18660 - 0xf4 },
    { _T("Lei-Lei KK Midnight Bliss"), 0x18660 - 0xf4, 0x18680 - 0xf4 },
    { _T("Lei-Lei AP Midnight Bliss"), 0x18680 - 0xf4, 0x186a0 - 0xf4 },
    { _T("Lei-Lei AK Midnight Bliss"), 0x186a0 - 0xf4, 0x186c0 - 0xf4 },
    { _T("Lei-Lei ES 1"), 0x183a0 - 0xf4, 0x183c0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei ES 2"), 0x183c0 - 0xf4, 0x183e0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei ES 3"), 0x183e0 - 0xf4, 0x18400 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei ES 4"), 0x18400 - 0xf4, 0x18420 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 1"), 0x18420 - 0xf4, 0x18440 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 2"), 0x18440 - 0xf4, 0x18460 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 3"), 0x18460 - 0xf4, 0x18480 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 4"), 0x18480 - 0xf4, 0x184a0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 5"), 0x184a0 - 0xf4, 0x184c0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 6"), 0x184c0 - 0xf4, 0x184e0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 7"), 0x184e0 - 0xf4, 0x18500 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei EX 8"), 0x18500 - 0xf4, 0x18520 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei Prova di Servo"), 0x18520 - 0xf4, 0x18540 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei Finale Rosso"), 0x18540 - 0xf4, 0x18560 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei Stone"), 0x18560 - 0xf4, 0x18580 - 0xf4, indexCPS2_Vamp_LeiLei },
    { _T("Lei-Lei Q-Bee's QJ Honey"), 0x186c0 - 0xf4, 0x186e0 - 0xf4, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_SPECIAL[] =
{
    { _T("Lilith LP Poisoned"), 0x186e0 - 0xf4, 0x18700 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith MP Poisoned"), 0x18700 - 0xf4, 0x18720 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith HP Poisoned"), 0x18720 - 0xf4, 0x18740 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith LK Poisoned"), 0x18740 - 0xf4, 0x18760 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith MK Poisoned"), 0x18760 - 0xf4, 0x18780 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith HK Poisoned"), 0x18780 - 0xf4, 0x187a0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith PP Poisoned"), 0x187a0 - 0xf4, 0x187c0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith KK Poisoned"), 0x187c0 - 0xf4, 0x187e0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith AP Poisoned"), 0x187e0 - 0xf4, 0x18800 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith AK Poisoned"), 0x18800 - 0xf4, 0x18820 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith LP Zapped"), 0x18820 - 0xf4, 0x18840 - 0xf4 },
    { _T("Lilith MP Zapped"), 0x18840 - 0xf4, 0x18860 - 0xf4 },
    { _T("Lilith HP Zapped"), 0x18860 - 0xf4, 0x18880 - 0xf4 },
    { _T("Lilith LK Zapped"), 0x18880 - 0xf4, 0x188a0 - 0xf4 },
    { _T("Lilith MK Zapped"), 0x188a0 - 0xf4, 0x188c0 - 0xf4 },
    { _T("Lilith HK Zapped"), 0x188c0 - 0xf4, 0x188e0 - 0xf4 },
    { _T("Lilith PP Zapped"), 0x188e0 - 0xf4, 0x18900 - 0xf4 },
    { _T("Lilith KK Zapped"), 0x18900 - 0xf4, 0x18920 - 0xf4 },
    { _T("Lilith AP Zapped"), 0x18920 - 0xf4, 0x18940 - 0xf4 },
    { _T("Lilith AK Zapped"), 0x18940 - 0xf4, 0x18960 - 0xf4 },
    { _T("Lilith LP Burned"), 0x18960 - 0xf4, 0x18980 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith MP Burned"), 0x18980 - 0xf4, 0x189a0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith HP Burned"), 0x189a0 - 0xf4, 0x189c0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith LK Burned"), 0x189c0 - 0xf4, 0x189e0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith MK Burned"), 0x189e0 - 0xf4, 0x18a00 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith HK Burned"), 0x18a00 - 0xf4, 0x18a20 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith PP Burned"), 0x18a20 - 0xf4, 0x18a40 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith KK Burned"), 0x18a40 - 0xf4, 0x18a60 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith AP Burned"), 0x18a60 - 0xf4, 0x18a80 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith AK Burned"), 0x18a80 - 0xf4, 0x18aa0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith LP Kotodama Gaeshi"), 0x18aa0 - 0xf4, 0x18ac0 - 0xf4 },
    { _T("Lilith MP Kotodama Gaeshi"), 0x18ac0 - 0xf4, 0x18ae0 - 0xf4 },
    { _T("Lilith HP Kotodama Gaeshi"), 0x18ae0 - 0xf4, 0x18b00 - 0xf4 },
    { _T("Lilith LK Kotodama Gaeshi"), 0x18b00 - 0xf4, 0x18b20 - 0xf4 },
    { _T("Lilith MK Kotodama Gaeshi"), 0x18b20 - 0xf4, 0x18b40 - 0xf4 },
    { _T("Lilith HK Kotodama Gaeshi"), 0x18b40 - 0xf4, 0x18b60 - 0xf4 },
    { _T("Lilith PP Kotodama Gaeshi"), 0x18b60 - 0xf4, 0x18b80 - 0xf4 },
    { _T("Lilith KK Kotodama Gaeshi"), 0x18b80 - 0xf4, 0x18ba0 - 0xf4 },
    { _T("Lilith AP Kotodama Gaeshi"), 0x18ba0 - 0xf4, 0x18bc0 - 0xf4 },
    { _T("Lilith AK Kotodama Gaeshi"), 0x18bc0 - 0xf4, 0x18be0 - 0xf4 },
    { _T("Lilith LP Midnight Bliss"), 0x18dc0 - 0xf4, 0x18de0 - 0xf4 },
    { _T("Lilith MP Midnight Bliss"), 0x18de0 - 0xf4, 0x18e00 - 0xf4 },
    { _T("Lilith HP Midnight Bliss"), 0x18e00 - 0xf4, 0x18e20 - 0xf4 },
    { _T("Lilith LK Midnight Bliss"), 0x18e20 - 0xf4, 0x18e40 - 0xf4 },
    { _T("Lilith MK Midnight Bliss"), 0x18e40 - 0xf4, 0x18e60 - 0xf4 },
    { _T("Lilith HK Midnight Bliss"), 0x18e60 - 0xf4, 0x18e80 - 0xf4 },
    { _T("Lilith PP Midnight Bliss"), 0x18e80 - 0xf4, 0x18ea0 - 0xf4 },
    { _T("Lilith KK Midnight Bliss"), 0x18ea0 - 0xf4, 0x18ec0 - 0xf4 },
    { _T("Lilith AP Midnight Bliss"), 0x18ec0 - 0xf4, 0x18ee0 - 0xf4 },
    { _T("Lilith AK Midnight Bliss"), 0x18ee0 - 0xf4, 0x18f00 - 0xf4 },
    { _T("Lilith ES 1"), 0x18be0 - 0xf4, 0x18c00 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith ES 2"), 0x18c00 - 0xf4, 0x18c20 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith ES 3"), 0x18c20 - 0xf4, 0x18c40 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith ES 4"), 0x18c40 - 0xf4, 0x18c60 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 1"), 0x18c60 - 0xf4, 0x18c80 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 2"), 0x18c80 - 0xf4, 0x18ca0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 3"), 0x18ca0 - 0xf4, 0x18cc0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 4"), 0x18cc0 - 0xf4, 0x18ce0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 5"), 0x18ce0 - 0xf4, 0x18d00 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 6"), 0x18d00 - 0xf4, 0x18d20 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 7"), 0x18d20 - 0xf4, 0x18d40 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith EX 8"), 0x18d40 - 0xf4, 0x18d60 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith Prova di Servo"), 0x18d60 - 0xf4, 0x18d80 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith Finale Rosso"), 0x18d80 - 0xf4, 0x18da0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith Stone"), 0x18da0 - 0xf4, 0x18dc0 - 0xf4, indexCPS2_Vamp_Lilith },
    { _T("Lilith Q-Bee's QJ Honey"), 0x18f00 - 0xf4, 0x18f20 - 0xf4, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SPECIAL[] =
{
    { _T("Jedah LP Poisoned"), 0x18f20 - 0xf4, 0x18f40 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah MP Poisoned"), 0x18f40 - 0xf4, 0x18f60 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah HP Poisoned"), 0x18f60 - 0xf4, 0x18f80 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah LK Poisoned"), 0x18f80 - 0xf4, 0x18fa0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah MK Poisoned"), 0x18fa0 - 0xf4, 0x18fc0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah HK Poisoned"), 0x18fc0 - 0xf4, 0x18fe0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah PP Poisoned"), 0x18fe0 - 0xf4, 0x19000 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah KK Poisoned"), 0x19000 - 0xf4, 0x19020 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah AP Poisoned"), 0x19020 - 0xf4, 0x19040 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah AK Poisoned"), 0x19040 - 0xf4, 0x19060 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah LP Zapped"), 0x19060 - 0xf4, 0x19080 - 0xf4 },
    { _T("Jedah MP Zapped"), 0x19080 - 0xf4, 0x190a0 - 0xf4 },
    { _T("Jedah HP Zapped"), 0x190a0 - 0xf4, 0x190c0 - 0xf4 },
    { _T("Jedah LK Zapped"), 0x190c0 - 0xf4, 0x190e0 - 0xf4 },
    { _T("Jedah MK Zapped"), 0x190e0 - 0xf4, 0x19100 - 0xf4 },
    { _T("Jedah HK Zapped"), 0x19100 - 0xf4, 0x19120 - 0xf4 },
    { _T("Jedah PP Zapped"), 0x19120 - 0xf4, 0x19140 - 0xf4 },
    { _T("Jedah KK Zapped"), 0x19140 - 0xf4, 0x19160 - 0xf4 },
    { _T("Jedah AP Zapped"), 0x19160 - 0xf4, 0x19180 - 0xf4 },
    { _T("Jedah AK Zapped"), 0x19180 - 0xf4, 0x191a0 - 0xf4 },
    { _T("Jedah LP Burned"), 0x191a0 - 0xf4, 0x191c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah MP Burned"), 0x191c0 - 0xf4, 0x191e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah HP Burned"), 0x191e0 - 0xf4, 0x19200 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah LK Burned"), 0x19200 - 0xf4, 0x19220 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah MK Burned"), 0x19220 - 0xf4, 0x19240 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah HK Burned"), 0x19240 - 0xf4, 0x19260 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah PP Burned"), 0x19260 - 0xf4, 0x19280 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah KK Burned"), 0x19280 - 0xf4, 0x192a0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah AP Burned"), 0x192a0 - 0xf4, 0x192c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah AK Burned"), 0x192c0 - 0xf4, 0x192e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah LP Kotodama Gaeshi"), 0x192e0 - 0xf4, 0x19300 - 0xf4 },
    { _T("Jedah MP Kotodama Gaeshi"), 0x19300 - 0xf4, 0x19320 - 0xf4 },
    { _T("Jedah HP Kotodama Gaeshi"), 0x19320 - 0xf4, 0x19340 - 0xf4 },
    { _T("Jedah LK Kotodama Gaeshi"), 0x19340 - 0xf4, 0x19360 - 0xf4 },
    { _T("Jedah MK Kotodama Gaeshi"), 0x19360 - 0xf4, 0x19380 - 0xf4 },
    { _T("Jedah HK Kotodama Gaeshi"), 0x19380 - 0xf4, 0x193a0 - 0xf4 },
    { _T("Jedah PP Kotodama Gaeshi"), 0x193a0 - 0xf4, 0x193c0 - 0xf4 },
    { _T("Jedah KK Kotodama Gaeshi"), 0x193c0 - 0xf4, 0x193e0 - 0xf4 },
    { _T("Jedah AP Kotodama Gaeshi"), 0x193e0 - 0xf4, 0x19400 - 0xf4 },
    { _T("Jedah AK Kotodama Gaeshi"), 0x19400 - 0xf4, 0x19420 - 0xf4 },
    { _T("Jedah LP Midnight Bliss"), 0x19600 - 0xf4, 0x19620 - 0xf4 },
    { _T("Jedah MP Midnight Bliss"), 0x19620 - 0xf4, 0x19640 - 0xf4 },
    { _T("Jedah HP Midnight Bliss"), 0x19640 - 0xf4, 0x19660 - 0xf4 },
    { _T("Jedah LK Midnight Bliss"), 0x19660 - 0xf4, 0x19680 - 0xf4 },
    { _T("Jedah MK Midnight Bliss"), 0x19680 - 0xf4, 0x196a0 - 0xf4 },
    { _T("Jedah HK Midnight Bliss"), 0x196a0 - 0xf4, 0x196c0 - 0xf4 },
    { _T("Jedah PP Midnight Bliss"), 0x196c0 - 0xf4, 0x196e0 - 0xf4 },
    { _T("Jedah KK Midnight Bliss"), 0x196e0 - 0xf4, 0x19700 - 0xf4 },
    { _T("Jedah AP Midnight Bliss"), 0x19700 - 0xf4, 0x19720 - 0xf4 },
    { _T("Jedah AK Midnight Bliss"), 0x19720 - 0xf4, 0x19740 - 0xf4 },
    { _T("Jedah ES 1"), 0x19420 - 0xf4, 0x19440 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah ES 2"), 0x19440 - 0xf4, 0x19460 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah ES 3"), 0x19460 - 0xf4, 0x19480 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah ES 4"), 0x19480 - 0xf4, 0x194a0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 1"), 0x194a0 - 0xf4, 0x194c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 2"), 0x194c0 - 0xf4, 0x194e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 3"), 0x194e0 - 0xf4, 0x19500 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 4"), 0x19500 - 0xf4, 0x19520 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 5"), 0x19520 - 0xf4, 0x19540 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 6"), 0x19540 - 0xf4, 0x19560 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 7"), 0x19560 - 0xf4, 0x19580 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah EX 8"), 0x19580 - 0xf4, 0x195a0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah Prova di Servo"), 0x195a0 - 0xf4, 0x195c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah Finale Rosso"), 0x195c0 - 0xf4, 0x195e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah Stone"), 0x195e0 - 0xf4, 0x19600 - 0xf4, indexCPS2_Vamp_Jedah },
    { _T("Jedah Q-Bee's QJ Honey"), 0x19740 - 0xf4, 0x19760 - 0xf4, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_SPECIAL[] =
{
    { _T("Oboro Bishamon LP Poisoned"), 0x19fa0 - 0xf4, 0x19fc0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon MP Poisoned"), 0x19fc0 - 0xf4, 0x19fe0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon HP Poisoned"), 0x19fe0 - 0xf4, 0x1a000 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon LK Poisoned"), 0x1a000 - 0xf4, 0x1a020 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon MK Poisoned"), 0x1a020 - 0xf4, 0x1a040 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon HK Poisoned"), 0x1a040 - 0xf4, 0x1a060 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon PP Poisoned"), 0x1a060 - 0xf4, 0x1a080 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon KK Poisoned"), 0x1a080 - 0xf4, 0x1a0a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon AP Poisoned"), 0x1a0a0 - 0xf4, 0x1a0c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon AK Poisoned"), 0x1a0c0 - 0xf4, 0x1a0e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon LP Zapped"), 0x1a0e0 - 0xf4, 0x1a100 - 0xf4 },
    { _T("Oboro Bishamon MP Zapped"), 0x1a100 - 0xf4, 0x1a120 - 0xf4 },
    { _T("Oboro Bishamon HP Zapped"), 0x1a120 - 0xf4, 0x1a140 - 0xf4 },
    { _T("Oboro Bishamon LK Zapped"), 0x1a140 - 0xf4, 0x1a160 - 0xf4 },
    { _T("Oboro Bishamon MK Zapped"), 0x1a160 - 0xf4, 0x1a180 - 0xf4 },
    { _T("Oboro Bishamon HK Zapped"), 0x1a180 - 0xf4, 0x1a1a0 - 0xf4 },
    { _T("Oboro Bishamon PP Zapped"), 0x1a1a0 - 0xf4, 0x1a1c0 - 0xf4 },
    { _T("Oboro Bishamon KK Zapped"), 0x1a1c0 - 0xf4, 0x1a1e0 - 0xf4 },
    { _T("Oboro Bishamon AP Zapped"), 0x1a1e0 - 0xf4, 0x1a200 - 0xf4 },
    { _T("Oboro Bishamon AK Zapped"), 0x1a200 - 0xf4, 0x1a220 - 0xf4 },
    { _T("Oboro Bishamon LP Burned"), 0x1a220 - 0xf4, 0x1a240 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon MP Burned"), 0x1a240 - 0xf4, 0x1a260 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon HP Burned"), 0x1a260 - 0xf4, 0x1a280 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon LK Burned"), 0x1a280 - 0xf4, 0x1a2a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon MK Burned"), 0x1a2a0 - 0xf4, 0x1a2c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon HK Burned"), 0x1a2c0 - 0xf4, 0x1a2e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon PP Burned"), 0x1a2e0 - 0xf4, 0x1a300 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon KK Burned"), 0x1a300 - 0xf4, 0x1a320 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon AP Burned"), 0x1a320 - 0xf4, 0x1a340 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon AK Burned"), 0x1a340 - 0xf4, 0x1a360 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon LP Kotodama Gaeshi"), 0x1a360 - 0xf4, 0x1a380 - 0xf4 },
    { _T("Oboro Bishamon MP Kotodama Gaeshi"), 0x1a380 - 0xf4, 0x1a3a0 - 0xf4 },
    { _T("Oboro Bishamon HP Kotodama Gaeshi"), 0x1a3a0 - 0xf4, 0x1a3c0 - 0xf4 },
    { _T("Oboro Bishamon LK Kotodama Gaeshi"), 0x1a3c0 - 0xf4, 0x1a3e0 - 0xf4 },
    { _T("Oboro Bishamon MK Kotodama Gaeshi"), 0x1a3e0 - 0xf4, 0x1a400 - 0xf4 },
    { _T("Oboro Bishamon HK Kotodama Gaeshi"), 0x1a400 - 0xf4, 0x1a420 - 0xf4 },
    { _T("Oboro Bishamon PP Kotodama Gaeshi"), 0x1a420 - 0xf4, 0x1a440 - 0xf4 },
    { _T("Oboro Bishamon KK Kotodama Gaeshi"), 0x1a440 - 0xf4, 0x1a460 - 0xf4 },
    { _T("Oboro Bishamon AP Kotodama Gaeshi"), 0x1a460 - 0xf4, 0x1a480 - 0xf4 },
    { _T("Oboro Bishamon AK Kotodama Gaeshi"), 0x1a480 - 0xf4, 0x1a4a0 - 0xf4 },
    { _T("Oboro Bishamon LP Midnight Bliss"), 0x1a680 - 0xf4, 0x1a6a0 - 0xf4 },
    { _T("Oboro Bishamon MP Midnight Bliss"), 0x1a6a0 - 0xf4, 0x1a6c0 - 0xf4 },
    { _T("Oboro Bishamon HP Midnight Bliss"), 0x1a6c0 - 0xf4, 0x1a6e0 - 0xf4 },
    { _T("Oboro Bishamon LK Midnight Bliss"), 0x1a6e0 - 0xf4, 0x1a700 - 0xf4 },
    { _T("Oboro Bishamon MK Midnight Bliss"), 0x1a700 - 0xf4, 0x1a720 - 0xf4 },
    { _T("Oboro Bishamon HK Midnight Bliss"), 0x1a720 - 0xf4, 0x1a740 - 0xf4 },
    { _T("Oboro Bishamon PP Midnight Bliss"), 0x1a740 - 0xf4, 0x1a760 - 0xf4 },
    { _T("Oboro Bishamon KK Midnight Bliss"), 0x1a760 - 0xf4, 0x1a780 - 0xf4 },
    { _T("Oboro Bishamon AP Midnight Bliss"), 0x1a780 - 0xf4, 0x1a7a0 - 0xf4 },
    { _T("Oboro Bishamon AK Midnight Bliss"), 0x1a7a0 - 0xf4, 0x1a7c0 - 0xf4 },
    { _T("Oboro Bishamon ES 1"), 0x1a4a0 - 0xf4, 0x1a4c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon ES 2"), 0x1a4c0 - 0xf4, 0x1a4e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon ES 3"), 0x1a4e0 - 0xf4, 0x1a500 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon ES 4"), 0x1a500 - 0xf4, 0x1a520 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 1"), 0x1a520 - 0xf4, 0x1a540 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 2"), 0x1a540 - 0xf4, 0x1a560 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 3"), 0x1a560 - 0xf4, 0x1a580 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 4"), 0x1a580 - 0xf4, 0x1a5a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 5"), 0x1a5a0 - 0xf4, 0x1a5c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 6"), 0x1a5c0 - 0xf4, 0x1a5e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 7"), 0x1a5e0 - 0xf4, 0x1a600 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon EX 8"), 0x1a600 - 0xf4, 0x1a620 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon Prova di Servo"), 0x1a620 - 0xf4, 0x1a640 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon Finale Rosso"), 0x1a640 - 0xf4, 0x1a660 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon Stone"), 0x1a660 - 0xf4, 0x1a680 - 0xf4, indexCPS2_Vamp_Bishamon },
    { _T("Oboro Bishamon Q-Bee's QJ Honey"), 0x1a7c0 - 0xf4, 0x1a7e0 - 0xf4, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_SPECIAL[] =
{
    { _T("Dark Gallon Poisoned"), 0x19760 - 0xf4, 0x19780 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Zapped"), 0x198a0 - 0xf4, 0x198c0 - 0xf4 },
    { _T("Dark Gallon Burned"), 0x199e0 - 0xf4, 0x19a00 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Kotodama Gaeshi"), 0x19b20 - 0xf4, 0x19b40 - 0xf4 },
    { _T("Dark Gallon Midnight Bliss"), 0x19e40 - 0xf4, 0x19e60 - 0xf4 },
    { _T("Dark Gallon Alt Poisoned"), 0x19780 - 0xf4, 0x197a0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Alt Zapped"), 0x198c0 - 0xf4, 0x198e0 - 0xf4 },
    { _T("Dark Gallon Alt Burned"), 0x19a00 - 0xf4, 0x19a20 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Alt Kotodama Gaeshi"), 0x19b40 - 0xf4, 0x19b60 - 0xf4 },
    { _T("Dark Gallon Alt Midnight Bliss"), 0x19e60 - 0xf4, 0x19e80 - 0xf4 },
    { _T("Dark Gallon ES 1"), 0x19c60 - 0xf4, 0x19c80 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon ES 2"), 0x19c80 - 0xf4, 0x19ca0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon ES 3"), 0x19ca0 - 0xf4, 0x19cc0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon ES 4"), 0x19cc0 - 0xf4, 0x19ce0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 1"), 0x19ce0 - 0xf4, 0x19d00 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 2"), 0x19d00 - 0xf4, 0x19d20 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 3"), 0x19d20 - 0xf4, 0x19d40 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 4"), 0x19d40 - 0xf4, 0x19d60 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 5"), 0x19d60 - 0xf4, 0x19d80 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 6"), 0x19d80 - 0xf4, 0x19da0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 7"), 0x19da0 - 0xf4, 0x19dc0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon EX 8"), 0x19dc0 - 0xf4, 0x19de0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Prova di Servo"), 0x19de0 - 0xf4, 0x19e00 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Finale Rosso"), 0x19e00 - 0xf4, 0x19e20 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Stone"), 0x19e20 - 0xf4, 0x19e40 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon Q-Bee's QJ Honey"), 0x19f80 - 0xf4, 0x19fa0 - 0xf4, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_SPECIALUNUSED[] =
{
    { _T("Dark Gallon HP Poisoned"), 0x197a0 - 0xf4, 0x197c0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon LK Poisoned"), 0x197c0 - 0xf4, 0x197e0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon MK Poisoned"), 0x197e0 - 0xf4, 0x19800 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon HK Poisoned"), 0x19800 - 0xf4, 0x19820 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon PP Poisoned"), 0x19820 - 0xf4, 0x19840 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon KK Poisoned"), 0x19840 - 0xf4, 0x19860 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon AP Poisoned"), 0x19860 - 0xf4, 0x19880 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon AK Poisoned"), 0x19880 - 0xf4, 0x198a0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon HP Zapped"), 0x198e0 - 0xf4, 0x19900 - 0xf4 },
    { _T("Dark Gallon LK Zapped"), 0x19900 - 0xf4, 0x19920 - 0xf4 },
    { _T("Dark Gallon MK Zapped"), 0x19920 - 0xf4, 0x19940 - 0xf4 },
    { _T("Dark Gallon HK Zapped"), 0x19940 - 0xf4, 0x19960 - 0xf4 },
    { _T("Dark Gallon PP Zapped"), 0x19960 - 0xf4, 0x19980 - 0xf4 },
    { _T("Dark Gallon KK Zapped"), 0x19980 - 0xf4, 0x199a0 - 0xf4 },
    { _T("Dark Gallon AP Zapped"), 0x199a0 - 0xf4, 0x199c0 - 0xf4 },
    { _T("Dark Gallon AK Zapped"), 0x199c0 - 0xf4, 0x199e0 - 0xf4 },
    { _T("Dark Gallon HP Burned"), 0x19a20 - 0xf4, 0x19a40 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon LK Burned"), 0x19a40 - 0xf4, 0x19a60 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon MK Burned"), 0x19a60 - 0xf4, 0x19a80 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon HK Burned"), 0x19a80 - 0xf4, 0x19aa0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon PP Burned"), 0x19aa0 - 0xf4, 0x19ac0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon KK Burned"), 0x19ac0 - 0xf4, 0x19ae0 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon AP Burned"), 0x19ae0 - 0xf4, 0x19b00 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon AK Burned"), 0x19b00 - 0xf4, 0x19b20 - 0xf4, indexCPS2_Vamp_Gallon },
    { _T("Dark Gallon HP Kotodama Gaeshi"), 0x19b60 - 0xf4, 0x19b80 - 0xf4 },
    { _T("Dark Gallon LK Kotodama Gaeshi"), 0x19b80 - 0xf4, 0x19ba0 - 0xf4 },
    { _T("Dark Gallon MK Kotodama Gaeshi"), 0x19ba0 - 0xf4, 0x19bc0 - 0xf4 },
    { _T("Dark Gallon HK Kotodama Gaeshi"), 0x19bc0 - 0xf4, 0x19be0 - 0xf4 },
    { _T("Dark Gallon PP Kotodama Gaeshi"), 0x19be0 - 0xf4, 0x19c00 - 0xf4 },
    { _T("Dark Gallon KK Kotodama Gaeshi"), 0x19c00 - 0xf4, 0x19c20 - 0xf4 },
    { _T("Dark Gallon AP Kotodama Gaeshi"), 0x19c20 - 0xf4, 0x19c40 - 0xf4 },
    { _T("Dark Gallon AK Kotodama Gaeshi"), 0x19c40 - 0xf4, 0x19c60 - 0xf4 },
    { _T("Dark Gallon HP Midnight Bliss"), 0x19e80 - 0xf4, 0x19ea0 - 0xf4 },
    { _T("Dark Gallon LK Midnight Bliss"), 0x19ea0 - 0xf4, 0x19ec0 - 0xf4 },
    { _T("Dark Gallon MK Midnight Bliss"), 0x19ec0 - 0xf4, 0x19ee0 - 0xf4 },
    { _T("Dark Gallon HK Midnight Bliss"), 0x19ee0 - 0xf4, 0x19f00 - 0xf4 },
    { _T("Dark Gallon PP Midnight Bliss"), 0x19f00 - 0xf4, 0x19f20 - 0xf4 },
    { _T("Dark Gallon KK Midnight Bliss"), 0x19f20 - 0xf4, 0x19f40 - 0xf4 },
    { _T("Dark Gallon AP Midnight Bliss"), 0x19f40 - 0xf4, 0x19f60 - 0xf4 },
    { _T("Dark Gallon AK Midnight Bliss"), 0x19f60 - 0xf4, 0x19f80 - 0xf4 },
};

const sDescTreeNode VSAV_A_BULLETA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_LP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_MP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_HP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_LK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_MK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_HK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_PP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_KK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_AP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_AK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_BULLETA_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_DEMITRI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_LP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_MP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_HP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_LK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_MK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_HK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_PP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_KK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_AP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_AK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_GALLON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_LP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_MP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_HP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_LK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_MK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_HK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_PP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_KK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_AP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_AK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_GALLON_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_VICTOR_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_LP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_MP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_HP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_LK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_MK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_HK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_PP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_KK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_AP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_AK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_VICTOR_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_ZABEL_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_LP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_MP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_HP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_LK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_MK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_HK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_PP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_KK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_AP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_AK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_ZABEL_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_MORRIGAN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_LP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_MP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_HP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_LK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_MK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_HK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_PP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_KK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_AP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_AK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_ANAKARIS_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_LP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_MP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_HP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_LK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_MK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_HK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_PP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_KK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_AP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_AK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_FELICIA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_LP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_MP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_HP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_LK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_MK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_HK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_PP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_KK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_AP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_AK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_FELICIA_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_BISHAMON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_LP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_MP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_HP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_LK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_MK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_HK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_PP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_KK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_AP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_AK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_AULBATH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_LP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_MP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_HP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_LK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_MK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_HK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_PP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_KK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_AP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_AK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_AULBATH_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_SASQUATCH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_LP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_MP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_HP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_LK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_MK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_HK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_PP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_KK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_AP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_AK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_QUEENBEE_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_LP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_MP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_HP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_LK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_MK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_HK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_PP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_KK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_AP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_AK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_QBEE_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_QBEE_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_LEILEI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_LP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_MP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_HP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_LK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_MK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_HK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_PP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_KK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_AP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_AK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_LEILEI_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_LILITH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_LP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_MP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_HP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_LK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_MK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_HK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_PP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_KK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_AP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_AK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_LILITH_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_JEDAH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_LP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_MP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_HP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_LK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_MK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_HK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_PP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_KK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_AP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_AK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_JEDAH_PALETTES_SPECIAL) },
    { _T("Shared"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_SHARED, ARRAYSIZE(VSAV_A_JEDAH_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_DARKGALLON_COLLECTION[] =
{
    { _T("Default"),    DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_DEFAULT,  ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_DEFAULT) },
    { _T("Alt"),        DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_ALT,      ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_ALT) },
    { _T("Special"),    DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_SPECIAL,  ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_SPECIAL) },
    { _T("Special (Unused)"), DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_SPECIALUNUSED, ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_SPECIALUNUSED) },
    
};

const sDescTreeNode VSAV_A_OBOROBISHAMON_COLLECTION[] =
{
    // These names are deliberately appended with _ so that multisprite export is forced off due to unbalanced nodes
    { _T("LP_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_LP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_LP) },
    { _T("MP_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_MP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_MP) },
    { _T("HP_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_HP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_HP) },
    { _T("LK_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_LK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_LK) },
    { _T("MK_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_MK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_MK) },
    { _T("HK_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_HK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_HK) },
    { _T("PP_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_PP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_PP) },
    { _T("KK_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_KK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_KK) },
    { _T("AP_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_AP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_AP) },
    { _T("AK_"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_AK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_BONUS_COLLECTION[] =
{
    { _T("Palettes"),    DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_PALETTES,  ARRAYSIZE(VSAV_A_BONUS_PALETTES) },
};

const sDescTreeNode VSAV_UNITS[] =
{
    { _T("Bulleta"),            DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_COLLECTION,       ARRAYSIZE(VSAV_A_BULLETA_COLLECTION) }, // BB-Hood
    { _T("Demitri"),            DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_COLLECTION,       ARRAYSIZE(VSAV_A_DEMITRI_COLLECTION) },
    { _T("Gallon"),             DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_COLLECTION,        ARRAYSIZE(VSAV_A_GALLON_COLLECTION) }, // Jon Talbain
    { _T("Victor"),             DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_COLLECTION,        ARRAYSIZE(VSAV_A_VICTOR_COLLECTION) },
    { _T("Zabel"),              DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_COLLECTION,         ARRAYSIZE(VSAV_A_ZABEL_COLLECTION) }, // Lord Raptor
    { _T("Morrigan"),           DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VSAV_A_MORRIGAN_COLLECTION) },
    { _T("Anakaris"),           DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VSAV_A_ANAKARIS_COLLECTION) },
    { _T("Felicia"),            DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_COLLECTION,       ARRAYSIZE(VSAV_A_FELICIA_COLLECTION) },
    { _T("Bishamon"),           DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_COLLECTION,      ARRAYSIZE(VSAV_A_BISHAMON_COLLECTION) },
    { _T("Aulbath"),            DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_COLLECTION,       ARRAYSIZE(VSAV_A_AULBATH_COLLECTION) }, // Rikuo
    { _T("Sasquatch"),          DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_COLLECTION,     ARRAYSIZE(VSAV_A_SASQUATCH_COLLECTION) },
    { _T("Q-Bee"),              DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_COLLECTION,      ARRAYSIZE(VSAV_A_QUEENBEE_COLLECTION) },
    { _T("Lei-Lei"),            DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_COLLECTION,        ARRAYSIZE(VSAV_A_LEILEI_COLLECTION) }, // Hsien-Ko
    { _T("Lilith"),             DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_COLLECTION,        ARRAYSIZE(VSAV_A_LILITH_COLLECTION) },
    { _T("Jedah"),              DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_COLLECTION,         ARRAYSIZE(VSAV_A_JEDAH_COLLECTION) },
    { _T("Dark Gallon"),        DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_COLLECTION,    ARRAYSIZE(VSAV_A_DARKGALLON_COLLECTION) },
    { _T("Oboro Bishamon"),     DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_COLLECTION, ARRAYSIZE(VSAV_A_OBOROBISHAMON_COLLECTION) },
    { _T("Bonus Palettes"),     DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_COLLECTION, ARRAYSIZE(VSAV_A_BONUS_COLLECTION) },
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

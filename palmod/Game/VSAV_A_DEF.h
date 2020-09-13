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
    { _T("LP Explosions "), 0x0C20C, 0x0C22C },
    { _T("LP Select Portrait"), 0x2BF0C, 0x2BF2C, indexCPS2_BBHood, 0x20 },
    { _T("LP Win Portrait"), 0x2D60C, 0x2D6AC },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MP[] =
{
    { _T("MP Bulleta"), 0x0C22C, 0x0C24C, indexCPS2_BBHood, 0 },
    { _T("MP Critters"), 0x0C24C, 0x0C26C },
    { _T("MP Weapons"), 0x0C26C, 0x0C28C },
    { _T("MP Explosions "), 0x0C28C, 0x0C2AC },
    { _T("MP Select Portrait"), 0x2C10C, 0x2C12C, indexCPS2_BBHood, 0x20 },
    { _T("MP Win Portrait"), 0x2E0AC, 0x2E14C },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HP[] =
{
    { _T("HP Bulleta"), 0x0C2AC, 0x0C2CC, indexCPS2_BBHood, 0 },
    { _T("HP Critters"), 0x0C2CC, 0x0C2EC },
    { _T("HP Weapons"), 0x0C2EC, 0x0C30C },
    { _T("HP Explosions "), 0x0C30C, 0x0C32C },
    { _T("HP Select Portrait"), 0x2C30C, 0x2C32C, indexCPS2_BBHood, 0x20 },
    { _T("HP Win Portrait"), 0x2EB4C, 0x2EBEC },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LK[] =
{
    { _T("LK Bulleta"), 0x0C32C, 0x0C34C, indexCPS2_BBHood, 0 },
    { _T("LK Critters"), 0x0C34C, 0x0C36C },
    { _T("LK Weapons"), 0x0C36C, 0x0C38C },
    { _T("LK Explosions "), 0x0C38C, 0x0C3AC },
    { _T("LK Select Portrait"), 0x2C50C, 0x2C52C, indexCPS2_BBHood, 0x20 },
    { _T("LK Win Portrait"), 0x2F5EC, 0x2F68C },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MK[] =
{
    { _T("MK Bulleta"), 0x0C3AC, 0x0C3CC, indexCPS2_BBHood, 0 },
    { _T("MK Critters"), 0x0C3CC, 0x0C3EC },
    { _T("MK Weapons"), 0x0C3EC, 0x0C40C },
    { _T("MK Explosions "), 0x0C40C, 0x0C42C },
    { _T("MK Select Portrait"), 0x2C70C, 0x2C72C, indexCPS2_BBHood, 0x20 },
    { _T("MK Win Portrait"), 0x3008C, 0x3012c },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HK[] =
{
    { _T("HK Bulleta"), 0x0C42C, 0x0C44C, indexCPS2_BBHood, 0 },
    { _T("HK Critters"), 0x0C44C, 0x0C46C },
    { _T("HK Weapons"), 0x0C46C, 0x0C48C },
    { _T("HK Explosions "), 0x0C48C, 0x0C4AC },
    { _T("HK Select Portrait"), 0x2C90C, 0x2C92C, indexCPS2_BBHood, 0x20 },
    { _T("HK Win Portrait"), 0x30B2C, 0x30BCC },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_PP[] =
{
    { _T("PP Bulleta"), 0x0C4AC, 0x0C4CC, indexCPS2_BBHood, 0 },
    { _T("PP Critters"), 0x0C4CC, 0x0C4EC },
    { _T("PP Weapons"), 0x0C4EC, 0x0C50C },
    { _T("PP Explosions "), 0x0C50C, 0x0C52C },
    { _T("PP Select Portrait"), 0x2CB0C, 0x2CB2C, indexCPS2_BBHood, 0x20 },
    { _T("PP Win Portrait"), 0x315CC, 0x3166C },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_KK[] =
{
    { _T("KK Bulleta"), 0x0C52C, 0x0C54C, indexCPS2_BBHood, 0 },
    { _T("KK Critters"), 0x0C54C, 0x0C56C },
    { _T("KK Weapons"), 0x0C56C, 0x0C58C },
    { _T("KK Explosions "), 0x0C58C, 0x0C5AC },
    { _T("KK Select Portrait"), 0x2CD0C, 0x2CD2C, indexCPS2_BBHood, 0x20 },
    { _T("KK Win Portrait"), 0x3206C, 0x3210C },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AP[] =
{
    { _T("AP Bulleta"), 0x0C5AC, 0x0C5CC, indexCPS2_BBHood, 0 },
    { _T("AP Critters"), 0x0C5CC, 0x0C5EC },
    { _T("AP Weapons"), 0x0C5EC, 0x0C60C },
    { _T("AP Explosions "), 0x0C60C, 0x0C62C },
    { _T("AP Select Portrait"), 0x2CF0C, 0x2CF2C, indexCPS2_BBHood, 0x20 },
    { _T("AP Win Portrait"), 0x32B0C, 0x32BAC },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AK[] =
{
    { _T("AK Bulleta"), 0x0C62C, 0x0C64C, indexCPS2_BBHood, 0 },
    { _T("AK Critters"), 0x0C64C, 0x0C66C },
    { _T("AK Weapons"), 0x0C66C, 0x0C68C },
    { _T("AK Explosions "), 0x0C68C, 0x0C6AC },
    { _T("AK Select Portrait"), 0x2D10C, 0x2D12C, indexCPS2_BBHood, 0x20 },
    { _T("AK Win Portrait"), 0x335AC, 0x3364C },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LP[] =
{
    { _T("LP Demitri"), 0x0C6AC, 0x0C6CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Demitri 2nd palette"), 0x1ACCC, 0x1ACEC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Teledash 1"), 0x0C70C, 0x0C72C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Teledash 2"), 0x0C6CC, 0x0C6EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LP Fireball"), 0x0C6EC, 0x0C70C },
    { _T("LP Select Portrait"), 0x2BF2C, 0x2BF4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("LP Win Portrait"), 0x2D6AC, 0x2D74C },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MP[] =
{
    { _T("MP Demitri "), 0x0C72C, 0x0C74C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Demitri 2nd palette"), 0x1ACEC, 0x1AD0C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Teledash 1"), 0x0C78C, 0x0C7AC, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Teledash 2"), 0x0C74C, 0x0C76C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MP Fireball"), 0x0C76C, 0x0C78C },
    { _T("MP Select Portrait"), 0x2C12C, 0x2C14C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("MP Win Portrait"), 0x2E14C, 0x2E1EC },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HP[] =
{
    { _T("HP Demitri"), 0x0C7AC, 0x0C7CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Demitri 2nd palette"), 0x1AD0C, 0x1AD2C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Teledash 1"), 0x0C80C, 0x0C82C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Teledash 2"), 0x0C7CC, 0x0C7EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("HP Fireball"), 0x0C7EC, 0x0C80C },
    { _T("HP Select Portrait"), 0x2C32C, 0x2C34C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("HP Win Portrait"), 0x2EBEC, 0x2EC8C },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LK[] =
{
    { _T("LK Demitri"), 0x0C82C, 0x0C84C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Demitri 2nd palette"), 0x1AD2C, 0x1AD4C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Teledash 1"), 0x0C88C, 0x0C8AC, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Teledash 2"), 0x0C84C, 0x0C86C, indexCPS2_Vamp_Demitri, 0 },
    { _T("LK Fireball"), 0x0C86C, 0x0C88C },
    { _T("LK Select Portrait"), 0x2C52C, 0x2C54C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("LK Win Portrait"), 0x2F68C, 0x2F72C },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MK[] =
{
    { _T("MK Demitri"), 0x0C8AC, 0x0C8CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Demitri 2nd palette"), 0x1AD4C, 0x1AD6C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Teledash 1"), 0x0C90C, 0x0C92C, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Teledash 2"), 0x0C8CC, 0x0C8EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("MK Fireball"), 0x0C8EC, 0x0C90C },
    { _T("MK Select Portrait"), 0x2C72C, 0x2C74C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("MK Win Portrait"), 0x3012C, 0x301CC },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HK[] =
{
    { _T("HK Demitri"), 0x0C92C, 0x0C94C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Demitri 2nd palette"), 0x1AD6C, 0x1AD8C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Teledash 1"), 0x0C98C, 0x0C9AC, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Teledash 2"), 0x0C94C, 0x0C96C, indexCPS2_Vamp_Demitri, 0 },
    { _T("HK Fireball"), 0x0C96C, 0x0C98C },
    { _T("HK Select Portrait"), 0x2C92C, 0x2C94C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("HK Win Portrait"), 0x30BCC, 0x30C6C },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_PP[] =
{
    { _T("PP Demitri"), 0x0C9AC, 0x0C9CC, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Demitri 2nd palette"), 0x1AD8C, 0x1ADAC, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Teledash 1"), 0x0CA0C, 0x0CA2C, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Teledash 2"), 0x0C9CC, 0x0C9EC, indexCPS2_Vamp_Demitri, 0 },
    { _T("PP Fireball"), 0x0C9EC, 0x0CA0C },
    { _T("PP Select Portrait"), 0x2CB2C, 0x2CB4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("PP Win Portrait"), 0x3166C, 0x3170C },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_KK[] =
{
    { _T("KK Demitri"), 0x0CA2C, 0x0CA4C, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Demitri 2nd palette"), 0x1ADAC, 0x1ADCC, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Teledash 1"), 0x0CA8C, 0x0CAAC, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Teledash 2"), 0x0CA4C, 0x0CA6C, indexCPS2_Vamp_Demitri, 0 },
    { _T("KK Fireball"), 0x0CA6C, 0x0CA8C },
    { _T("KK Select Portrait"), 0x2CD2C, 0x2CD4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("KK Win Portrait"), 0x3210C, 0x321AC },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AP[] =
{
    { _T("AP Demitri"), 0x0CAAC, 0x0CACC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Demitri 2nd palette"), 0x1ADCC, 0x1ADEC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Teledash 1"), 0x0CB0C, 0x0CB2C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Teledash 2"), 0x0CACC, 0x0CAEC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AP Fireball"), 0x0CAEC, 0x0CB0C },
    { _T("AP Select Portrait"), 0x2CF2C, 0x2CF4C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("AP Win Portrait"), 0x32BAC, 0x32C4C },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AK[] =
{
    { _T("AK Demitri"), 0x0CB2C, 0x0CB4C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Demitri 2nd palette"), 0x1ADEC, 0x1AE0C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Teledash 1"), 0x0CB8C, 0x0CBAC, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Teledash 2"), 0x0CB4C, 0x0CB6C, indexCPS2_Vamp_Demitri, 0 },
    { _T("AK Fireball"), 0x0CB6C, 0x0CB8C },
    { _T("AK Select Portrait"), 0x2D12C, 0x2D14C, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("AK Win Portrait"), 0x3364C, 0x336EC },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LP[] =
{
    { _T("LP Gallon"), 0x0CBAC, 0x0CBCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("LP Intro/Outro"), 0x0CBCC, 0x0CBEC },
    { _T("LP 236P/41236KK/j.HP"), 0x0CBEC, 0x0CC0C },
    { _T("LP 236P/28K/Outro Flash"), 0x0CC0C, 0x0CC2C },
    { _T("LP Select Portrait"), 0x2BF4C, 0x2BF6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("LP Win Portrait"), 0x2D74C, 0x2D7EC },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MP[] =
{
    { _T("MP Gallon"), 0x0CC2C, 0x0CC4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("MP Intro/Outro"), 0x0CC4C, 0x0CC6C },
    { _T("MP 236P/41236KK/j.HP"), 0x0CC6C, 0x0CC8C },
    { _T("MP 236P/28K/Outro Flash"), 0x0CC8C, 0x0CCAC },
    { _T("MP Select Portrait"), 0x2C14C, 0x2C16C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("MP Win Portrait"), 0x2E1EC, 0x2E28C },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HP[] =
{
    { _T("HP Gallon"), 0x0CCAC, 0x0CCCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("HP Intro/Outro"), 0x0CCCC, 0x0CCEC },
    { _T("HP 236P/41236KK/j.HP"), 0x0CCEC, 0x0CD0C },
    { _T("HP 236P/28K/Outro Flash"), 0x0CD0C, 0x0CD2C },
    { _T("HP Select Portrait"), 0x2C34C, 0x2C36C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("HP Win Portrait"), 0x2EC8C, 0x2ED2C },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LK[] =
{
    { _T("LK Gallon"), 0x0CD2C, 0x0CD4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("LK Intro/Outro"), 0x0CD4C, 0x0CD6C },
    { _T("LK 236P/41236KK/j.HP"), 0x0CD6C, 0x0CD8C },
    { _T("LK 236P/28K/Outro Flash"), 0x0CD8C, 0x0CDAC },
    { _T("LK Select Portrait"), 0x2C54C, 0x2C56C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("LK Win Portrait"), 0x2F72C, 0x2F7CC },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MK[] =
{
    { _T("MK Gallon"), 0x0CDAC, 0x0CDCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("MK Intro/Outro"), 0x0CDCC, 0x0CDEC },
    { _T("MK 236P/41236KK/j.HP"), 0x0CDEC, 0x0CE0C },
    { _T("MK 236P/28K/Outro Flash"), 0x0CE0C, 0x0CE2C },
    { _T("MK Select Portrait"), 0x2C74C, 0x2C76C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("MK Win Portrait"), 0x301CC, 0x3026C },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HK[] =
{
    { _T("HK Gallon"), 0x0CE2C, 0x0CE4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("HK Intro/Outro"), 0x0CE4C, 0x0CE6C },
    { _T("HK 236P/41236KK/j.HP"), 0x0CE6C, 0x0CE8C },
    { _T("HK 236P/28K/Outro Flash"), 0x0CE8C, 0x0CEAC },
    { _T("HK Select Portrait"), 0x2C94C, 0x2C96C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("HK Win Portrait"), 0x30C6C, 0x30D0C },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_PP[] =
{
    { _T("PP Gallon"), 0x0CEAC, 0x0CECC, indexCPS2_Vamp_Gallon, 0 },
    { _T("PP Intro/Outro"), 0x0CECC, 0x0CEEC },
    { _T("PP 236P/41236KK/j.HP"), 0x0CEEC, 0x0CF0C },
    { _T("PP 236P/28K/Outro Flash"), 0x0CF0C, 0x0CF2C },
    { _T("PP Select Portrait"), 0x2CB4C, 0x2CB6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("PP Win Portrait"), 0x3170C, 0x317AC },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_KK[] =
{
    { _T("KK Gallon"), 0x0CF2C, 0x0CF4C, indexCPS2_Vamp_Gallon, 0 },
    { _T("KK Intro/Outro"), 0x0CF4C, 0x0CF6C },
    { _T("KK 236P/41236KK/j.HP"), 0x0CF6C, 0x0CF8C },
    { _T("KK 236P/28K/Outro Flash"), 0x0CF8C, 0x0CFAC },
    { _T("KK Select Portrait"), 0x2CD4C, 0x2CD6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("KK Win Portrait"), 0x321AC, 0x3224C },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AP[] =
{
    { _T("AP Gallon"), 0x0CFAC, 0x0CFCC, indexCPS2_Vamp_Gallon, 0 },
    { _T("AP Intro/Outro"), 0x0CFCC, 0x0CFEC },
    { _T("AP 236P/41236KK/j.HP"), 0x0CFEC, 0x0D00C },
    { _T("AP 236P/28K/Outro Flash"), 0x0D00C, 0x0D02C },
    { _T("AP Select Portrait"), 0x2CF4C, 0x2CF6C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("AP Win Portrait"), 0x32C4C, 0x32CEC },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AK[] =
{
    { _T("AK Gallon"), 0x0D02C, 0x0D04C, indexCPS2_Vamp_Gallon, 0 },
    { _T("AK Intro/Outro"), 0x0D04C, 0x0D06C },
    { _T("AK 236P/41236KK/j.HP"), 0x0D06C, 0x0D08C },
    { _T("AK 236P/28K/Outro Flash"), 0x0D08C, 0x0D0AC },
    { _T("AK Select Portrait"), 0x2D14C, 0x2D16C, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("AK Win Portrait"), 0x336EC, 0x3378C },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LP[] =
{
    { _T("LP Victor"), 0x0D0AC, 0x0D0CC, indexCPS2_Vamp_Victor, 0 },
    { _T("LP Electric Flash"), 0x0D10C, 0x0D12C, indexCPS2_Vamp_Victor, 0 },
    { _T("LP [2]8p/[4]6P/DF Startup"), 0x0D0CC, 0x0D0EC },
    { _T("LP Electricity"), 0x0D0EC, 0x0D10C },
    { _T("LP Select Portrait"), 0x2BF6C, 0x2BF8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("LP Win Portrait"), 0x2D7EC, 0x2D88C },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MP[] =
{
    { _T("MP Victor"), 0x0D12C, 0x0D14C, indexCPS2_Vamp_Victor, 0 },
    { _T("MP Electric Flash"), 0x0D18C, 0x0D1AC, indexCPS2_Vamp_Victor, 0 },
    { _T("MP [2]8p/[4]6P/DF Startup"), 0x0D14C, 0x0D16C },
    { _T("MP Electricity"), 0x0D16C, 0x0D18C },
    { _T("MP Select Portrait"), 0x2C16C, 0x2C18C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("MP Win Portrait"), 0x2E28C, 0x2E32C },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HP[] =
{
    { _T("HP Victor"), 0x0D1AC, 0x0D1CC, indexCPS2_Vamp_Victor, 0 },
    { _T("HP Electric Flash"), 0x0D20C, 0x0D22C, indexCPS2_Vamp_Victor, 0 },
    { _T("HP [2]8p/[4]6P/DF Startup"), 0x0D1CC, 0x0D1EC },
    { _T("HP Electricity"), 0x0D1EC, 0x0D20C },
    { _T("HP Select Portrait"), 0x2C36C, 0x2C38C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("HP Win Portrait"), 0x2ED2C, 0x2EDCC },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LK[] =
{
    { _T("LK Victor"), 0x0D22C, 0x0D24C, indexCPS2_Vamp_Victor, 0 },
    { _T("LK Electric Flash"), 0x0D28C, 0x0D2AC, indexCPS2_Vamp_Victor, 0 },
    { _T("LK [2]8p/[4]6P/DF Startup"), 0x0D24C, 0x0D26C },
    { _T("LK Electricity"), 0x0D26C, 0x0D28C },
    { _T("LK Select Portrait"), 0x2C56C, 0x2C58C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("LK Win Portrait"), 0x2F7CC, 0x2F86C },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MK[] =
{
    { _T("MK Victor"), 0x0D2AC, 0x0D2CC, indexCPS2_Vamp_Victor, 0 },
    { _T("MK Electric Flash"), 0x0D30C, 0x0D32C, indexCPS2_Vamp_Victor, 0 },
    { _T("MK [2]8p/[4]6P/DF Startup"), 0x0D2CC, 0x0D2EC },
    { _T("MK Electricity"), 0x0D2EC, 0x0D30C },
    { _T("MK Select Portrait"), 0x2C76C, 0x2C78C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("MK Win Portrait"), 0x3026C, 0x3030C },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HK[] =
{
    { _T("HK Victor"), 0x0D32C, 0x0D34C, indexCPS2_Vamp_Victor, 0 },
    { _T("HK Electric Flash"), 0x0D38C, 0x0D3AC, indexCPS2_Vamp_Victor, 0 },
    { _T("HK [2]8p/[4]6P/DF Startup"), 0x0D34C, 0x0D36C },
    { _T("HK Electricity"), 0x0D36C, 0x0D38C },
    { _T("HK Select Portrait"), 0x2C96C, 0x2C98C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("HK Win Portrait"), 0x30D0C, 0x30DAC },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_PP[] =
{
    { _T("PP Victor"), 0x0D3AC, 0x0D3CC, indexCPS2_Vamp_Victor, 0 },
    { _T("PP Electric Flash"), 0x0D40C, 0x0D42C, indexCPS2_Vamp_Victor, 0 },
    { _T("PP [2]8p/[4]6P/DF Startup"), 0x0D3CC, 0x0D3EC },
    { _T("PP Electricity"), 0x0D3EC, 0x0D40C },
    { _T("PP Select Portrait"), 0x2CB6C, 0x2CB8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("PP Win Portrait"), 0x317AC, 0x3184C },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_KK[] =
{
    { _T("KK Victor"), 0x0D42C, 0x0D44C, indexCPS2_Vamp_Victor, 0 },
    { _T("KK Electric Flash"), 0x0D48C, 0x0D4AC, indexCPS2_Vamp_Victor, 0 },
    { _T("KK [2]8p/[4]6P/DF Startup"), 0x0D44C, 0x0D46C },
    { _T("KK Electricity"), 0x0D46C, 0x0D48C },
    { _T("KK Select Portrait"), 0x2CD6C, 0x2CD8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("KK Win Portrait"), 0x3224C, 0x322EC },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AP[] =
{
    { _T("AP Victor"), 0x0D4AC, 0x0D4CC, indexCPS2_Vamp_Victor, 0 },
    { _T("AP Electric Flash"), 0x0D50C, 0x0D52C, indexCPS2_Vamp_Victor, 0 },
    { _T("AP [2]8p/[4]6P/DF Startup"), 0x0D4CC, 0x0D4EC },
    { _T("AP Electricity"), 0x0D4EC, 0x0D50C },
    { _T("AP Select Portrait"), 0x2CF6C, 0x2CF8C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("AP Win Portrait"), 0x32CEC, 0x32D8C },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AK[] =
{
    { _T("AK Victor"), 0x0D52C, 0x0D54C, indexCPS2_Vamp_Victor, 0 },
    { _T("AK Electric Flash"), 0x0D58C, 0x0D5AC, indexCPS2_Vamp_Victor, 0 },
    { _T("AK [2]8p/[4]6P/DF Startup"), 0x0D54C, 0x0D56C },
    { _T("AK Electricity"), 0x0D56C, 0x0D58C },
    { _T("AK Select Portrait"), 0x2D16C, 0x2D18C, indexCPS2_Vamp_Victor, 0x20 },
    { _T("AK Win Portrait"), 0x3378C, 0x3382C },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LP[] =
{
    { _T("LP Zabel"), 0x0D5AC, 0x0D5CC, indexCPS2_Vamp_Zabel, 0 },
    { _T("LP 64PP/63214KK/intro/winpose"), 0x0D5CC, 0x0D5EC },
    { _T("LP Unused 1"), 0x0D5EC, 0x0D60C },
    { _T("LP Unused 2"), 0x0D60C, 0x0D62C },
    { _T("LP Select Portrait"), 0x2BF8C, 0x2BFAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("LP Win Portrait"), 0x2D88C, 0x2D92C },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MP[] =
{
    { _T("MP Zabel"), 0x0D62C, 0x0D64C, indexCPS2_Vamp_Zabel, 0 },
    { _T("MP 64PP/63214KK/intro/winpose"), 0x0D64C, 0x0D66C },
    { _T("MP Unused 1"), 0x0D66C, 0x0D68C },
    { _T("MP Unused 2"), 0x0D68C, 0x0D6AC },
    { _T("MP Select Portrait"), 0x2C18C, 0x2C1AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("MP Win Portrait"), 0x2E32C, 0x2E3CC },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HP[] =
{
    { _T("HP Zabel"), 0x0D6AC, 0x0D6CC, indexCPS2_Vamp_Zabel, 0 },
    { _T("HP 64PP/63214KK/intro/winpose"), 0x0D6CC, 0x0D6EC },
    { _T("HP Unused 1"), 0x0D6EC, 0x0D70C },
    { _T("HP Unused 2"), 0x0D70C, 0x0D72C },
    { _T("HP Select Portrait"), 0x2C38C, 0x2C3AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("HP Win Portrait"), 0x2EDCC, 0x2EE6C },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LK[] =
{
    { _T("LK Zabel"), 0x0d72C, 0x0d74c, indexCPS2_Vamp_Zabel, 0 },
    { _T("LK 64PP/63214KK/intro/winpose"), 0x0d74C, 0x0d76c },
    { _T("LK Unused 1"), 0x0d76C, 0x0d78c },
    { _T("LK Unused 2"), 0x0d78C, 0x0d7ac },
    { _T("LK Select Portrait"), 0x2C58C, 0x2C5AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("LK Win Portrait"), 0x2F86C, 0x2F90C },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MK[] =
{
    { _T("MK Zabel"), 0x0d7aC, 0x0d7cc, indexCPS2_Vamp_Zabel, 0 },
    { _T("MK 64PP/63214KK/intro/winpose"), 0x0d7cC, 0x0d7ec },
    { _T("MK Unused 1"), 0x0d7eC, 0x0d80c },
    { _T("MK Unused 2"), 0x0d80C, 0x0d82c },
    { _T("MK Select Portrait"), 0x2C78C, 0x2C7AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("MK Win Portrait"), 0x3030C, 0x303AC },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HK[] =
{
    { _T("HK Zabel"), 0x0d82C, 0x0d84c, indexCPS2_Vamp_Zabel, 0 },
    { _T("HK 64PP/63214KK/intro/winpose"), 0x0d84C, 0x0d86c },
    { _T("HK Unused 1"), 0x0d86C, 0x0d88c },
    { _T("HK Unused 2"), 0x0d88C, 0x0d8ac },
    { _T("HK Select Portrait"), 0x2C98C, 0x2C9AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("HK Win Portrait"), 0x30DAC, 0x30E4C },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_PP[] =
{
    { _T("PP Zabel"), 0x0d8aC, 0x0d8cc, indexCPS2_Vamp_Zabel, 0 },
    { _T("PP 64PP/63214KK/intro/winpose"), 0x0d8cC, 0x0d8ec },
    { _T("PP Unused 1"), 0x0d8eC, 0x0d90c },
    { _T("PP Unused 2"), 0x0d90C, 0x0d92c },
    { _T("PP Select Portrait"), 0x2CB8C, 0x2CBAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("PP Win Portrait"), 0x3184C, 0x318EC },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_KK[] =
{
    { _T("KK Zabel"), 0x0d92C, 0x0d94c, indexCPS2_Vamp_Zabel, 0 },
    { _T("KK 64PP/63214KK/intro/winpose"), 0x0d94C, 0x0d96c },
    { _T("KK Unused 1"), 0x0d96C, 0x0d98c },
    { _T("KK Unused 2"), 0x0d98C, 0x0d9ac },
    { _T("KK Select Portrait"), 0x2CD8C, 0x2CDAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("KK Win Portrait"), 0x322EC, 0x3238C },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AP[] =
{
    { _T("AP Zabel"), 0x0d9aC, 0x0d9cc, indexCPS2_Vamp_Zabel, 0 },
    { _T("AP 64PP/63214KK/intro/winpose"), 0x0d9cC, 0x0d9ec },
    { _T("AP Unused 1"), 0x0d9eC, 0x0da0c },
    { _T("AP Unused 2"), 0x0da0C, 0x0da2c },
    { _T("AP Select Portrait"), 0x2CF8C, 0x2CFAC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("AP Win Portrait"), 0x32D8C, 0x32E2C },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AK[] =
{
    { _T("AK Zabel"), 0x0da2C, 0x0da4c, indexCPS2_Vamp_Zabel, 0 },
    { _T("AK 64PP/63214KK/intro/winpose"), 0x0da4C, 0x0da6c },
    { _T("AK Unused 1"), 0x0da6C, 0x0da8c },
    { _T("AK Unused 2"), 0x0da8C, 0x0daac },
    { _T("AK Select Portrait"), 0x2D18C, 0x2D1AC, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("AK Win Portrait"), 0x3382C, 0x338CC },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LP[] =
{
    { _T("LP Morrigan"), 0x0daaC, 0x0dacc, indexCPS2_Morrigan, 0 },
    { _T("LP Idle sparkles/Raging demon"), 0x0dacC, 0x0daec, indexCPS2_Morrigan, 2 },
    { _T("LP Bats"), 0x0daeC, 0x0db0c },
    { _T("LP Unknown Extra"), 0x0db0C, 0x0db2c },
    { _T("LP Select Portrait"), 0x2BFAC, 0x2BFCC, indexCPS2_Morrigan, 0x20 },
    { _T("LP Win Portrait"), 0x2D92C, 0x2D9CC },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MP[] =
{
    { _T("MP Morrigan"), 0x0db2C, 0x0db4c, indexCPS2_Morrigan, 0 },
    { _T("MP Idle sparkles/Raging demon"), 0x0db4C, 0x0db6c, indexCPS2_Morrigan, 2 },
    { _T("MP Bats"), 0x0db6C, 0x0db8c },
    { _T("MP Unknown Extra"), 0x0db8C, 0x0dbac },
    { _T("MP Select Portrait"), 0x2C1AC, 0x2C1CC, indexCPS2_Morrigan, 0x20 },
    { _T("MP Win Portrait"), 0x2E3CC, 0x2E46C },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HP[] =
{
    { _T("HP Morrigan"), 0x0dbaC, 0x0dbcc, indexCPS2_Morrigan, 0 },
    { _T("HP Idle sparkles/Raging demon"), 0x0dbcC, 0x0dbec, indexCPS2_Morrigan, 2 },
    { _T("HP Bats"), 0x0dbeC, 0x0dc0c },
    { _T("HP Unknown Extra"), 0x0dc0C, 0x0dc2c },
    { _T("HP Select Portrait"), 0x2C3AC, 0x2C3CC, indexCPS2_Morrigan, 0x20 },
    { _T("HP Win Portrait"), 0x2EE6C, 0x2EF0C },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LK[] =
{
    { _T("LK Morrigan"), 0x0dc2C, 0x0dc4c, indexCPS2_Morrigan, 0 },
    { _T("LK Idle sparkles/Raging demon"), 0x0dc4C, 0x0dc6c, indexCPS2_Morrigan, 2 },
    { _T("LK Bats"), 0x0dc6C, 0x0dc8c },
    { _T("LK Unknown Extra"), 0x0dc8C, 0x0dcac },
    { _T("LK Select Portrait"), 0x2C5AC, 0x2C5CC, indexCPS2_Morrigan, 0x20 },
    { _T("LK Win Portrait"), 0x2F90C, 0x2F9AC },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MK[] =
{
    { _T("MK Morrigan"), 0x0dcaC, 0x0dccc, indexCPS2_Morrigan, 0 },
    { _T("MK Idle sparkles/Raging demon"), 0x0dccC, 0x0dcec, indexCPS2_Morrigan, 2 },
    { _T("MK Bats"), 0x0dceC, 0x0dd0c },
    { _T("MK Unknown Extra"), 0x0dd0C, 0x0dd2c },
    { _T("MK Select Portrait"), 0x2C7AC, 0x2C7CC, indexCPS2_Morrigan, 0x20 },
    { _T("MK Win Portrait"), 0x303AC, 0x3044C },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HK[] =
{
    { _T("HK Morrigan"), 0x0dd2C, 0x0dd4c, indexCPS2_Morrigan, 0 },
    { _T("HK Idle sparkles/Raging demon"), 0x0dd4C, 0x0dd6c, indexCPS2_Morrigan, 2 },
    { _T("HK Bats"), 0x0dd6C, 0x0dd8c },
    { _T("HK Unknown Extra"), 0x0dd8C, 0x0ddac },
    { _T("HK Select Portrait"), 0x2C9AC, 0x2C9CC, indexCPS2_Morrigan, 0x20 },
    { _T("HK Win Portrait"), 0x30E4C, 0x30EEC },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_PP[] =
{
    { _T("PP Morrigan"), 0x0ddaC, 0x0ddcc, indexCPS2_Morrigan, 0 },
    { _T("PP Idle sparkles/Raging demon"), 0x0ddcC, 0x0ddec, indexCPS2_Morrigan, 2 },
    { _T("PP Bats"), 0x0ddeC, 0x0de0c },
    { _T("PP Unknown Extra"), 0x0de0C, 0x0de2c },
    { _T("PP Select Portrait"), 0x2CBAC, 0x2CBCC, indexCPS2_Morrigan, 0x20 },
    { _T("PP Win Portrait"), 0x318EC, 0x3198C },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_KK[] =
{
    { _T("KK Morrigan"), 0x0de2C, 0x0de4c, indexCPS2_Morrigan, 0 },
    { _T("KK Idle sparkles/Raging demon"), 0x0de4C, 0x0de6c, indexCPS2_Morrigan, 2 },
    { _T("KK Bats"), 0x0de6C, 0x0de8c },
    { _T("KK Unknown Extra"), 0x0de8C, 0x0deac },
    { _T("KK Select Portrait"), 0x2CDAC, 0x2CDCC, indexCPS2_Morrigan, 0x20 },
    { _T("KK Win Portrait"), 0x3238C, 0x3242C },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AP[] =
{
    { _T("AP Morrigan"), 0x0deaC, 0x0decc, indexCPS2_Morrigan, 0 },
    { _T("AP Idle sparkles/Raging demon"), 0x0decC, 0x0deec, indexCPS2_Morrigan, 2 },
    { _T("AP Bats"), 0x0deeC, 0x0df0c },
    { _T("AP Unknown Extra"), 0x0df0C, 0x0df2c },
    { _T("AP Select Portrait"), 0x2CFAC, 0x2CFCC, indexCPS2_Morrigan, 0x20 },
    { _T("AP Win Portrait"), 0x32E2C, 0x32ECC },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AK[] =
{
    { _T("AK Morrigan"), 0x0df2C, 0x0df4c, indexCPS2_Morrigan, 0 },
    { _T("AK Idle sparkles/Raging demon"), 0x0df4C, 0x0df6c, indexCPS2_Morrigan, 2 },
    { _T("AK Bats"), 0x0df6C, 0x0df8c },
    { _T("AK Unknown Extra"), 0x0df8C, 0x0dfac },
    { _T("AK Select Portrait"), 0x2D1AC, 0x2D1CC, indexCPS2_Morrigan, 0x20 },
    { _T("AK Win Portrait"), 0x338CC, 0x3396C },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LP[] =
{
    { _T("LP Anakaris"), 0x0dfaC, 0x0dfcc, indexCPS2_Anakaris, 0 },
    { _T("LP 2.HP/Mummies"), 0x0dfeC, 0x0e00c, indexCPS2_Anakaris, 2 },
    { _T("LP 426KK/62KK Light"), 0x0dfcC, 0x0dfec },
    { _T("LP Pharaoh Magic Orbs"), 0x0e00C, 0x0e02c, indexCPS2_Anakaris, 3 },
    { _T("LP Select Portrait"), 0x2BFCC, 0x2BFEC, indexCPS2_Anakaris, 0x20 },
    { _T("LP Win Portrait"), 0x2D9CC, 0x2DA6C },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MP[] =
{
    { _T("MP Anakaris"), 0x0e02C, 0x0e04c, indexCPS2_Anakaris, 0 },
    { _T("MP 2.HP/Mummies"), 0x0e06C, 0x0e08c, indexCPS2_Anakaris, 2 },
    { _T("MP 426KK/62KK Light"), 0x0e04C, 0x0e06c },
    { _T("MP Pharaoh Magic Orbs"), 0x0e08C, 0x0e0ac, indexCPS2_Anakaris, 3 },
    { _T("MP Select Portrait"), 0x2C1CC, 0x2C1EC, indexCPS2_Anakaris, 0x20 },
    { _T("MP Win Portrait"), 0x2E46C, 0x2E50C },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HP[] =
{
    { _T("HP Anakaris"), 0x0e0aC, 0x0e0cc, indexCPS2_Anakaris, 0 },
    { _T("HP 2.HP/Mummies"), 0x0e0eC, 0x0e10c, indexCPS2_Anakaris, 2 },
    { _T("HP 426KK/62KK Light"), 0x0e0cC, 0x0e0ec },
    { _T("HP Pharaoh Magic Orbs"), 0x0e10C, 0x0e12c, indexCPS2_Anakaris, 3 },
    { _T("HP Select Portrait"), 0x2C3CC, 0x2C3EC, indexCPS2_Anakaris, 0x20 },
    { _T("HP Win Portrait"), 0x2EF0C, 0x2EFAC },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LK[] =
{
    { _T("LK Anakaris"), 0x0e12C, 0x0e14c, indexCPS2_Anakaris, 0 },
    { _T("LK 2.HP/Mummies"), 0x0e16C, 0x0e18c, indexCPS2_Anakaris, 2 },
    { _T("LK 426KK/62KK Light"), 0x0e14C, 0x0e16c },
    { _T("LK Pharaoh Magic Orbs"), 0x0e18C, 0x0e1ac, indexCPS2_Anakaris, 3 },
    { _T("LK Select Portrait"), 0x2C5CC, 0x2C5EC, indexCPS2_Anakaris, 0x20 },
    { _T("LK Win Portrait"), 0x2F9AC, 0x2FA4C },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MK[] =
{
    { _T("MK Anakaris"), 0x0e1aC, 0x0e1cc, indexCPS2_Anakaris, 0 },
    { _T("MK 2.HP/Mummies"), 0x0e1eC, 0x0e20c, indexCPS2_Anakaris, 2 },
    { _T("MK 426KK/62KK Light"), 0x0e1cC, 0x0e1ec },
    { _T("MK Pharaoh Magic Orbs"), 0x0e20C, 0x0e22c, indexCPS2_Anakaris, 3 },
    { _T("MK Select Portrait"), 0x2C7CC, 0x2C7EC, indexCPS2_Anakaris, 0x20 },
    { _T("MK Win Portrait"), 0x3044C, 0x304EC },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HK[] =
{
    { _T("HK Anakaris"), 0x0e22C, 0x0e24c, indexCPS2_Anakaris, 0 },
    { _T("HK 2.HP/Mummies"), 0x0e26C, 0x0e28c, indexCPS2_Anakaris, 2 },
    { _T("HK 426KK/62KK Light"), 0x0e24C, 0x0e26c },
    { _T("HK Pharaoh Magic Orbs"), 0x0e28C, 0x0e2ac, indexCPS2_Anakaris, 3 },
    { _T("HK Select Portrait"), 0x2C9CC, 0x2C9EC, indexCPS2_Anakaris, 0x20 },
    { _T("HK Win Portrait"), 0x30EEC, 0x30F8C },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_PP[] =
{
    { _T("PP Anakaris"), 0x0e2aC, 0x0e2cc, indexCPS2_Anakaris, 0 },
    { _T("PP 2.HP/Mummies"), 0x0e2eC, 0x0e30c, indexCPS2_Anakaris, 2 },
    { _T("PP 426KK/62KK Light"), 0x0e2cC, 0x0e2ec },
    { _T("PP Pharaoh Magic Orbs"), 0x0e30C, 0x0e32c, indexCPS2_Anakaris, 3 },
    { _T("PP Select Portrait"), 0x2CBCC, 0x2CBEC, indexCPS2_Anakaris, 0x20 },
    { _T("PP Win Portrait"), 0x3198C, 0x31A2C },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_KK[] =
{
    { _T("KK Anakaris"), 0x0e32C, 0x0e34c, indexCPS2_Anakaris, 0 },
    { _T("KK 2.HP/Mummies"), 0x0e36C, 0x0e38c, indexCPS2_Anakaris, 2 },
    { _T("KK 426KK/62KK Light"), 0x0e34C, 0x0e36c },
    { _T("KK Pharaoh Magic Orbs"), 0x0e38C, 0x0e3ac, indexCPS2_Anakaris, 3 },
    { _T("KK Select Portrait"), 0x2CDCC, 0x2CDEC, indexCPS2_Anakaris, 0x20 },
    { _T("KK Win Portrait"), 0x3242C, 0x324CC },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AP[] =
{
    { _T("AP Anakaris"), 0x0e3aC, 0x0e3cc, indexCPS2_Anakaris, 0 },
    { _T("AP 2.HP/Mummies"), 0x0e3eC, 0x0e40c, indexCPS2_Anakaris, 2 },
    { _T("AP 426KK/62KK Light"), 0x0e3cC, 0x0e3ec },
    { _T("AP Pharaoh Magic Orbs"), 0x0e40C, 0x0e42c, indexCPS2_Anakaris, 3 },
    { _T("AP Select Portrait"), 0x2CFCC, 0x2CFEC, indexCPS2_Anakaris, 0x20 },
    { _T("AP Win Portrait"), 0x32ECC, 0x32F6C },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AK[] =
{
    { _T("AK Anakaris"), 0x0e42C, 0x0e44c, indexCPS2_Anakaris, 0 },
    { _T("AK 2.HP/Mummies"), 0x0e46C, 0x0e48c, indexCPS2_Anakaris, 2 },
    { _T("AK 426KK/62KK Light"), 0x0e44C, 0x0e46c },
    { _T("AK Pharaoh Magic Orbs"), 0x0e48C, 0x0e4ac, indexCPS2_Anakaris, 3 },
    { _T("AK Select Portrait"), 0x2D1CC, 0x2D1EC, indexCPS2_Anakaris, 0x20 },
    { _T("AK Win Portrait"), 0x3396C, 0x33A0C },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LP[] =
{
    { _T("LP Felicia"), 0x0e4aC, 0x0e4cc, indexCPS2_Felicia, 0 },
    { _T("LP Helpers/Mouse"), 0x0e4cC, 0x0e4ec },
    { _T("LP Bubble/Butterfly"), 0x0e4eC, 0x0e50c },
    { _T("LP Unknown Extra"), 0x0e50C, 0x0e52c },
    { _T("LP Select portrait"), 0x2BFEC, 0x2C00C, indexCPS2_Felicia, 0x20 },
    { _T("LP Win Portrait"), 0x2DA6C, 0x2DB0C },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MP[] =
{
    { _T("MP Felicia"), 0x0e52C, 0x0e54c, indexCPS2_Felicia, 0 },
    { _T("MP Helpers/Mouse"), 0x0e54C, 0x0e56c },
    { _T("MP Bubble/Butterfly"), 0x0e56C, 0x0e58c },
    { _T("MP Unknown Extra"), 0x0e58C, 0x0e5ac },
    { _T("MP Select Portrait"), 0x2C1EC, 0x2C20C, indexCPS2_Felicia, 0x20 },
    { _T("MP Win Portrait"), 0x2E50C, 0x2E5AC },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HP[] =
{
    { _T("HP Felicia"), 0x0e5aC, 0x0e5cc, indexCPS2_Felicia, 0 },
    { _T("HP Helpers/Mouse"), 0x0e5cC, 0x0e5ec },
    { _T("HP Bubble/Butterfly"), 0x0e5eC, 0x0e60c },
    { _T("HP Unknown Extra"), 0x0e60C, 0x0e62c },
    { _T("HP Select Portrait"), 0x2C3EC, 0x2C40C, indexCPS2_Felicia, 0x20 },
    { _T("HP Win Portrait"), 0x2EFAC, 0x2F04C },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LK[] =
{
    { _T("LK Felicia"), 0x0e62C, 0x0e64c, indexCPS2_Felicia, 0 },
    { _T("LK Helpers/Mouse"), 0x0e64C, 0x0e66c },
    { _T("LK Bubble/Butterfly"), 0x0e66C, 0x0e68c },
    { _T("LK Unknown Extra"), 0x0e68C, 0x0e6ac },
    { _T("LK Select Portrait"), 0x2C5EC, 0x2C60C, indexCPS2_Felicia, 0x20 },
    { _T("LK Win Portrait"), 0x2FA4C, 0x2FAEC },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MK[] =
{
    { _T("MK Felicia"), 0x0e6aC, 0x0e6cc, indexCPS2_Felicia, 0 },
    { _T("MK Helpers/Mouse"), 0x0e6cC, 0x0e6ec },
    { _T("MK Bubble/Butterfly"), 0x0e6eC, 0x0e70c },
    { _T("MK Unknown Extra"), 0x0e70C, 0x0e72c },
    { _T("MK Select Portrait"), 0x2C7EC, 0x2C80C, indexCPS2_Felicia, 0x20 },
    { _T("MK Win Portrait"), 0x304EC, 0x3058C },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HK[] =
{
    { _T("HK Felicia"), 0x0e72C, 0x0e74c, indexCPS2_Felicia, 0 },
    { _T("HK Helpers/Mouse"), 0x0e74C, 0x0e76c },
    { _T("HK Bubble/Butterfly"), 0x0e76C, 0x0e78c },
    { _T("HK Unknown Extra"), 0x0e78C, 0x0e7ac },
    { _T("HK Select Portrait"), 0x2C9EC, 0x2CA0C, indexCPS2_Felicia, 0x20 },
    { _T("HK Win Portrait"), 0x30F8C, 0x3102C },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_PP[] =
{
    { _T("PP Felicia"), 0x0e7aC, 0x0e7cc, indexCPS2_Felicia, 0 },
    { _T("PP Helpers/Mouse"), 0x0e7cC, 0x0e7ec },
    { _T("PP Bubble/Butterfly"), 0x0e7eC, 0x0e80c },
    { _T("PP Unknown Extra"), 0x0e80C, 0x0e82c },
    { _T("PP Select Portrait"), 0x2CBEC, 0x2CC0C, indexCPS2_Felicia, 0x20 },
    { _T("PP Win Portrait"), 0x31A2C, 0x31ACC },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_KK[] =
{
    { _T("KK Felicia"), 0x0e82C, 0x0e84c, indexCPS2_Felicia, 0 },
    { _T("KK Helpers/Mouse"), 0x0e84C, 0x0e86c },
    { _T("KK Bubble/Butterfly"), 0x0e86C, 0x0e88c },
    { _T("KK Unknown Extra"), 0x0e88C, 0x0e8ac },
    { _T("KK Select Portrait"), 0x2CDEC, 0x2CE0C, indexCPS2_Felicia, 0x20 },
    { _T("KK Win Portrait"), 0x324CC, 0x3256C },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AP[] =
{
    { _T("AP Felicia"), 0x0e8aC, 0x0e8cc, indexCPS2_Felicia, 0 },
    { _T("AP Helpers/Mouse"), 0x0e8cC, 0x0e8ec },
    { _T("AP Bubble/Butterfly"), 0x0e8eC, 0x0e90c },
    { _T("AP Unknown Extra"), 0x0e90C, 0x0e92c },
    { _T("AP Select Portrait"), 0x2CFEC, 0x2D00C, indexCPS2_Felicia, 0x20 },
    { _T("AP Win Portrait"), 0x32F6C, 0x3300C },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AK[] =
{
    { _T("AK Felicia"), 0x0e92C, 0x0e94c, indexCPS2_Felicia, 0 },
    { _T("AK Helpers/Mouse"), 0x0e94C, 0x0e96c },
    { _T("AK Bubble/Butterfly"), 0x0e96C, 0x0e98c },
    { _T("AK Unknown Extra"), 0x0e98C, 0x0e9ac },
    { _T("AK Select Portrait"), 0x2D1EC, 0x2D20C, indexCPS2_Felicia, 0x20 },
    { _T("AK Win Portrait"), 0x33A0C, 0x33AAC },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LP[] =
{
    { _T("LP Bishamon"), 0x0e9aC, 0x0e9cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Ghosts/Hitsparks"), 0x0e9eC, 0x0ea0c },
    { _T("LP 41236KK"), 0x0e9cC, 0x0e9ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Unknown Extra"), 0x0ea0C, 0x0ea2c },
    { _T("LP Select Portrait"), 0x2C00C, 0x2C02C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LP Win Portrait"), 0x2DB0C, 0x2DBAC },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MP[] =
{
    { _T("MP Bishamon"), 0x0ea2C, 0x0ea4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Ghosts/Hitsparks"), 0x0ea6C, 0x0ea8c },
    { _T("MP 41236KK"), 0x0ea4C, 0x0ea6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Unknown Extra"), 0x0ea8C, 0x0eaac },
    { _T("MP Select Portrait"), 0x2C20C, 0x2C22C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MP Win Portrait"), 0x2E5AC, 0x2E64C },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HP[] =
{
    { _T("HP Bishamon"), 0x0eaaC, 0x0eacc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Ghosts/Hitsparks"), 0x0eaeC, 0x0eb0c },
    { _T("HP 41236KK"), 0x0eacC, 0x0eaec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Unknown Extra"), 0x0eb0C, 0x0eb2c },
    { _T("HP Select Portrait"), 0x2C40C, 0x2C42C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HP Win Portrait"), 0x2F04C, 0x2F0EC },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LK[] =
{
    { _T("LK Bishamon"), 0x0eb2C, 0x0eb4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Ghosts/Hitsparks"), 0x0eb6C, 0x0eb8c },
    { _T("LK 41236KK"), 0x0eb4C, 0x0eb6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Unknown Extra"), 0x0eb8C, 0x0ebac },
    { _T("LK Select Portrait"), 0x2C60C, 0x2C62C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LK Win Portrait"), 0x2FAEC, 0x2FB8C },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MK[] =
{
    { _T("MK Bishamon"), 0x0ebaC, 0x0ebcc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Ghosts/Hitsparks"), 0x0ebeC, 0x0ec0c },
    { _T("MK 41236KK"), 0x0ebcC, 0x0ebec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Unknown Extra"), 0x0ec0C, 0x0ec2c },
    { _T("MK Select Portrait"), 0x2C80C, 0x2C82C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MK Win Portrait"), 0x3058C, 0x3062C },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HK[] =
{
    { _T("HK Bishamon"), 0x0ec2C, 0x0ec4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Ghosts/Hitsparks"), 0x0ec6C, 0x0ec8c },
    { _T("HK 41236KK"), 0x0ec4C, 0x0ec6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Unknown Extra"), 0x0ec8C, 0x0ecac },
    { _T("HK Select Portrait"), 0x2CA0C, 0x2CA2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HK Win Portrait"), 0x3102C, 0x310CC },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_PP[] =
{
    { _T("PP Bishamon"), 0x0ecaC, 0x0eccc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("PP Ghosts/Hitsparks"), 0x0eceC, 0x0ed0c },
    { _T("PP 41236KK"), 0x0eccC, 0x0ecec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("PP Unknown Extra"), 0x0ed0C, 0x0ed2c },
    { _T("PP Select Portrait"), 0x2CC0C, 0x2CC2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("PP Win Portrait"), 0x31ACC, 0x31B6C },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_KK[] =
{
    { _T("KK Bishamon"), 0x0ed2C, 0x0ed4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("KK Ghosts/Hitsparks"), 0x0ed6C, 0x0ed8c },
    { _T("KK 41236KK"), 0x0ed4C, 0x0ed6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("KK Unknown Extra"), 0x0ed8C, 0x0edac },
    { _T("KK Select Portrait"), 0x2CE0C, 0x2CE2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("KK Win Portrait"), 0x3256C, 0x3260C },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AP[] =
{
    { _T("AP Bishamon"), 0x0edaC, 0x0edcc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AP Ghosts/Hitsparks"), 0x0edeC, 0x0ee0c },
    { _T("AP 41236KK"), 0x0edcC, 0x0edec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AP Unknown Extra"), 0x0ee0C, 0x0ee2c },
    { _T("AP Select Portrait"), 0x2D00C, 0x2D02C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("AP Win Portrait"), 0x3300C, 0x330AC },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AK[] =
{
    { _T("AK Bishamon"), 0x0ee2C, 0x0ee4c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AK Ghosts/Hitsparks"), 0x0ee6C, 0x0ee8c },
    { _T("AK 41236KK"), 0x0ee4C, 0x0ee6c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("AK Unknown Extra"), 0x0ee8C, 0x0eeac },
    { _T("AK Select Portrait"), 0x2D20C, 0x2D22C, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("AK Win Portrait"), 0x33AAC, 0x33B4C },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LP[] =
{
    { _T("LP Aulbath"), 0x0eeaC, 0x0eecc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("LP Water/s.MK/j.MP"), 0x0eecC, 0x0eeec },
    { _T("LP Poison Cloud "), 0x0ef0C, 0x0ef2c },
    { _T("LP Mach Crab (not full pal)"), 0x0eeeC, 0x0ef0c },
    { _T("LP Select Portrait"), 0x2C02C, 0x2C04C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("LP Win Portrait"), 0x2DBAC, 0x2DC4C },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MP[] =
{
    { _T("MP Aulbath"), 0x0ef2C, 0x0ef4c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("MP Water/s.MK/j.MP"), 0x0ef4C, 0x0ef6c },
    { _T("MP Poison Cloud "), 0x0ef8C, 0x0efac },
    { _T("MP Mach Crab (not full pal)"), 0x0ef6C, 0x0ef8c },
    { _T("MP Select Portrait"), 0x2C22C, 0x2C24C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("MP Win Portrait"), 0x2E64C, 0x2E6EC },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HP[] =
{
    { _T("HP Aulbath"), 0x0efaC, 0x0efcc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("HP Water/s.MK/j.MP"), 0x0efcC, 0x0efec },
    { _T("HP Poison Cloud "), 0x0f00C, 0x0f02c },
    { _T("HP Mach Crab (not full pal)"), 0x0efeC, 0x0f00c },
    { _T("HP Select Portrait"), 0x2C42C, 0x2C44C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("HP Win Portrait"), 0x2F0EC, 0x2F18C },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LK[] =
{
    { _T("LK Aulbath"), 0x0f02C, 0x0f04c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("LK Water/s.MK/j.MP"), 0x0f04C, 0x0f06c },
    { _T("LK Poison Cloud "), 0x0f08C, 0x0f0ac },
    { _T("LK Mach Crab (not full pal)"), 0x0f06C, 0x0f08c },
    { _T("LK Select Portrait"), 0x2C62C, 0x2C64C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("LK Win Portrait"), 0x2FB8C, 0x2FC2C },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MK[] =
{
    { _T("MK Aulbath"), 0x0f0aC, 0x0f0cc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("MK Water/s.MK/j.MP"), 0x0f0cC, 0x0f0ec },
    { _T("MK Poison Cloud "), 0x0f10C, 0x0f12c },
    { _T("MK Mach Crab (not full pal)"), 0x0f0eC, 0x0f10c },
    { _T("MK Select Portrait"), 0x2C82C, 0x2C84C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("MK Win Portrait"), 0x3062C, 0x306CC },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HK[] =
{
    { _T("HK Aulbath"), 0x0f12C, 0x0f14c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("HK Water/s.MK/j.MP"), 0x0f14C, 0x0f16c },
    { _T("HK Poison Cloud "), 0x0f18C, 0x0f1ac },
    { _T("HK Mach Crab (not full pal)"), 0x0f16C, 0x0f18c },
    { _T("HK Select Portrait"), 0x2CA2C, 0x2CA4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("HK Win Portrait"), 0x310CC, 0x3116C },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_PP[] =
{
    { _T("PP Aulbath"), 0x0f1aC, 0x0f1cc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("PP Poison Cloud "), 0x0f20C, 0x0f22c },
    { _T("PP Water/s.MK/j.MP"), 0x0f1cC, 0x0f1ec },
    { _T("PP Mach Crab (not full pal)"), 0x0f1eC, 0x0f20c },
    { _T("PP Select Portrait"), 0x2CC2C, 0x2CC4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("PP Win Portrait"), 0x31B6C, 0x31C0C },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_KK[] =
{
    { _T("KK Aulbath"), 0x0f22C, 0x0f24c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("KK Water/s.MK/j.MP"), 0x0f24C, 0x0f26c },
    { _T("KK Poison Cloud "), 0x0f28C, 0x0f2ac },
    { _T("KK Mach Crab (not full pal)"), 0x0f26C, 0x0f28c },
    { _T("KK Select Portrait"), 0x2CE2C, 0x2CE4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("KK Win Portrait"), 0x3260C, 0x326AC },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AP[] =
{
    { _T("AP Aulbath"), 0x0f2aC, 0x0f2cc, indexCPS2_Vamp_Aulbath, 0 },
    { _T("AP Water/s.MK/j.MP"), 0x0f2cC, 0x0f2ec },
    { _T("AP Poison Cloud "), 0x0f30C, 0x0f32c },
    { _T("AP Mach Crab (not full pal)"), 0x0f2eC, 0x0f30c },
    { _T("AP Select Portrait"), 0x2D02C, 0x2D04C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("AP Win Portrait"), 0x330AC, 0x3314C },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AK[] =
{
    { _T("AK Aulbath"), 0x0f32C, 0x0f34c, indexCPS2_Vamp_Aulbath, 0 },
    { _T("AK Water/s.MK/j.MP"), 0x0f34C, 0x0f36c },
    { _T("AK Poison Cloud "), 0x0f38C, 0x0f3ac },
    { _T("AK Mach Crab (not full pal)"), 0x0f36C, 0x0f38c },
    { _T("AK Select Portrait"), 0x2D22C, 0x2D24C, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("AK Win Portrait"), 0x33B4C, 0x33BEC },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LP[] =
{
    { _T("LP Sasquatch"), 0x0f3aC, 0x0f3cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("LP Ice Extras"), 0x0f40C, 0x0f42c },
    { _T("LP Banana"), 0x0f3cC, 0x0f3ec },
    { _T("LP Smoke"), 0x0f3eC, 0x0f40c },
    { _T("LP Select Portrait"), 0x2C04C, 0x2C06C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("LP Win Portrait"), 0x2DC4C, 0x2DCEC },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MP[] =
{
    { _T("MP Sasquatch"), 0x0f42C, 0x0f44c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("MP Ice Extras"), 0x0f48C, 0x0f4ac },
    { _T("MP Banana"), 0x0f44C, 0x0f46c },
    { _T("MP Smoke"), 0x0f46C, 0x0f48c },
    { _T("MP Select Portrait"), 0x2C24C, 0x2C26C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("MP Win Portrait"), 0x2E6EC, 0x2E78C },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HP[] =
{
    { _T("HP Sasquatch"), 0x0f4aC, 0x0f4cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("HP Ice Extras"), 0x0f50C, 0x0f52c },
    { _T("HP Banana"), 0x0f4cC, 0x0f4ec },
    { _T("HP Smoke"), 0x0f4eC, 0x0f50c },
    { _T("HP Select Portrait"), 0x2C44C, 0x2C46C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("HP Win Portrait"), 0x2F18C, 0x2F22C },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LK[] =
{
    { _T("LK Sasquatch"), 0x0f52C, 0x0f54c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("LK Ice Extras"), 0x0f58C, 0x0f5ac },
    { _T("LK Banana"), 0x0f54C, 0x0f56c },
    { _T("LK Smoke"), 0x0f56C, 0x0f58c },
    { _T("LK Select Portrait"), 0x2C64C, 0x2C66C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("LK Win Portrait"), 0x2FC2C, 0x2FCCC },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MK[] =
{
    { _T("MK Sasquatch"), 0x0f5aC, 0x0f5cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("MK Ice Extras"), 0x0f60C, 0x0f62c },
    { _T("MK Banana"), 0x0f5cC, 0x0f5ec },
    { _T("MK Smoke"), 0x0f5eC, 0x0f60c },
    { _T("MK Select Portrait"), 0x2C84C, 0x2C86C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("MK Win Portrait"), 0x306CC, 0x3076C },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HK[] =
{
    { _T("HK Sasquatch"), 0x0f62c, 0x0f64c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("HK Ice Extras"), 0x0f68c, 0x0f6aC },
    { _T("HK Banana"), 0x0f64c, 0x0f66c },
    { _T("HK Smoke"), 0x0f66c, 0x0f68c },
    { _T("HK Select Portrait"), 0x2A84C, 0x2A86C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("HK Win Portrait"), 0x3116C, 0x3120C },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_PP[] =
{
    { _T("PP Sasquatch"), 0x0f6aC, 0x0f6cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("PP Ice Extras"), 0x0f70C, 0x0f72c },
    { _T("PP Banana"), 0x0f6cC, 0x0f6ec },
    { _T("PP Smoke"), 0x0f6eC, 0x0f70c },
    { _T("PP Select Portrait"), 0x2CC4C, 0x2CC6C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("PP Win Portrait"), 0x31C0C, 0x31CAC },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_KK[] =
{
    { _T("KK Sasquatch"), 0x0f72C, 0x0f74c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("KK Ice Extras"), 0x0f78C, 0x0f7ac },
    { _T("KK Banana"), 0x0f74C, 0x0f76c },
    { _T("KK Smoke"), 0x0f76C, 0x0f78c },
    { _T("KK Select Portrait"), 0x2CE4C, 0x2CE6C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("KK Win Portrait"), 0x326AC, 0x3274C },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AP[] =
{
    { _T("AP Sasquatch"), 0x0f7aC, 0x0f7cc, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("AP Ice Extras"), 0x0f80C, 0x0f82c },
    { _T("AP Banana"), 0x0f7cC, 0x0f7ec },
    { _T("AP Smoke"), 0x0f7eC, 0x0f80c },
    { _T("AP Select Portrait"), 0x2D04C, 0x2D06C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("AP Win Portrait"), 0x3314C, 0x331EC },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AK[] =
{
    { _T("AK Sasquatch"), 0x0f82C, 0x0f84c, indexCPS2_Vamp_Sasquatch, 0 },
    { _T("AK Ice Extras"), 0x0f88C, 0x0f8ac },
    { _T("AK Banana"), 0x0f84C, 0x0f86c },
    { _T("AK Smoke"), 0x0f86C, 0x0f88c },
    { _T("AK Select Portrait"), 0x2D24C, 0x2D26C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("AK Win Portrait"), 0x33BEC, 0x33C8C },
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
    { _T("LP Win Portrait"), 0x2DD8C, 0x2DE2C },
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
    { _T("MP Win Portrait"), 0x2E82C, 0x2E8CC },
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
    { _T("HP Win Portrait"), 0x2F2CC, 0x2F36C },
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
    { _T("LK Win Portrait"), 0x2FD6C, 0x2FE0C },
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
    { _T("MK Win Portrait"), 0x3080C, 0x308AC },
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
    { _T("HK Win Portrait"), 0x312AC, 0x3134C },
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
    { _T("PP Win Portrait"), 0x31D4C, 0x31DEC },
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
    { _T("KK Win Portrait"), 0x327EC, 0x3288C },
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
    { _T("AP Win Portrait"), 0x3328C, 0x3332C },
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
    { _T("AK Win Portrait"), 0x33D2C, 0x33DCC },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LP[] =
{
    { _T("LP Lei-Lei"), 0x101aC, 0x101cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LP Dust, Weapons"), 0x101eC, 0x1020c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LP Lin-Lin"), 0x101cC, 0x101ec },
    { _T("LP Unknown Extra"), 0x1020C, 0x1022c },
    { _T("LP Select Portrait"), 0x2C0AC, 0x2C0CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("LP Win Portrait"), 0x2DE2C, 0x2DECC },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MP[] =
{
    { _T("MP Lei-Lei"), 0x1022C, 0x1024c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MP Dust, Weapons"), 0x1026C, 0x1028c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MP Lin-Lin"), 0x1024C, 0x1026c },
    { _T("MP Unknown Extra"), 0x1028C, 0x102ac },
    { _T("MP Select Portrait"), 0x2C2AC, 0x2C2CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("MP Win Portrait"), 0x2E8CC, 0x2E96C },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HP[] =
{
    { _T("HP Lei-Lei"), 0x102aC, 0x102cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HP Dust, Weapons"), 0x102eC, 0x1030c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HP Lin-Lin"), 0x102cC, 0x102ec },
    { _T("HP Unknown Extra"), 0x1030C, 0x1032c },
    { _T("HP Select Portrait"), 0x2C4AC, 0x2C4CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("HP Win Portrait"), 0x2F36C, 0x2F40C },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LK[] =
{
    { _T("LK Lei-Lei"), 0x1032C, 0x1034c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LK Dust, Weapons"), 0x1036C, 0x1038c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("LK Lin-Lin"), 0x1034C, 0x1036c },
    { _T("LK Unknown Extra"), 0x1038C, 0x103ac },
    { _T("LK Select Portrait"), 0x2C6AC, 0x2C6CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("LK Win Portrait"), 0x2FE0C, 0x2FEAC },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MK[] =
{
    { _T("MK Lei-Lei"), 0x103aC, 0x103cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MK Dust, Weapons"), 0x103eC, 0x1040c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("MK Lin-Lin"), 0x103cC, 0x103ec },
    { _T("MK Unknown Extra"), 0x1040C, 0x1042c },
    { _T("MK Select Portrait"), 0x2C8AC, 0x2C8CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("MK Win Portrait"), 0x308AC, 0x3094C },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HK[] =
{
    { _T("HK Lei-Lei"), 0x1042C, 0x1044c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HK Dust, Weapons"), 0x1046C, 0x1048c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("HK Lin-Lin"), 0x1044C, 0x1046c },
    { _T("HK Unknown Extra"), 0x1048C, 0x104ac },
    { _T("HK Select Portrait"), 0x2CAAC, 0x2CACC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("HK Win Portrait"), 0x3134C, 0x313EC },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_PP[] =
{
    { _T("PP Lei-Lei"), 0x104aC, 0x104cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("PP Dust, Weapons"), 0x104eC, 0x1050c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("PP Lin-Lin"), 0x104cC, 0x104ec },
    { _T("PP Unknown Extra"), 0x1050C, 0x1052c },
    { _T("PP Select Portrait"), 0x2CCAC, 0x2CCCC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("PP Win Portrait"), 0x31DEC, 0x31E8C },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_KK[] =
{
    { _T("KK Lei-Lei"), 0x1052C, 0x1054c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("KK Dust, Weapons"), 0x1056C, 0x1058c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("KK Lin-Lin"), 0x1054C, 0x1056c },
    { _T("KK Unknown Extra"), 0x1058C, 0x105ac },
    { _T("KK Select Portrait"), 0x2CEAC, 0x2CECC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("KK Win Portrait"), 0x3288C, 0x3292C },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AP[] =
{
    { _T("AP Lei-Lei"), 0x105aC, 0x105cc, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AP Dust, Weapons"), 0x105eC, 0x1060c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AP Lin-Lin"), 0x105cC, 0x105ec },
    { _T("AP Unknown Extra"), 0x1060C, 0x1062c },
    { _T("AP Select Portrait"), 0x2D0AC, 0x2D0CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("AP Win Portrait"), 0x3332C, 0x333CC },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AK[] =
{
    { _T("AK Lei-Lei"), 0x1062C, 0x1064c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AK Dust, Weapons"), 0x1066C, 0x1068c, indexCPS2_Vamp_LeiLei, 0 },
    { _T("AK Lin-Lin"), 0x1064C, 0x1066c },
    { _T("AK Unknown Extra"), 0x1068C, 0x106ac },
    { _T("AK Select Portrait"), 0x2D2AC, 0x2D2CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("AK Win Portrait"), 0x33DCC, 0x33E6C },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LP[] =
{
    { _T("LP Lilith"), 0x106aC, 0x106cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("LP Hearts"), 0x106cC, 0x106ec },
    { _T("LP Luminous Illusion/62KKK bats"), 0x106eC, 0x1070c },
    { _T("LP Sparkles"), 0x1070C, 0x1072c },
    { _T("LP Select Portrait"), 0x2C0CC, 0x2C0EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("LP Win Portrait"), 0x2DECC, 0x2DF6C },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MP[] =
{
    { _T("MP Lilith"), 0x1072C, 0x1074c, indexCPS2_Vamp_Lilith, 0 },
    { _T("MP Hearts"), 0x1074C, 0x1076c },
    { _T("MP Luminous Illusion/62KKK bats"), 0x1076C, 0x1078c },
    { _T("MP Sparkles"), 0x1078C, 0x107ac },
    { _T("MP Select Portrait"), 0x2C2CC, 0x2C2EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("MP Win Portrait"), 0x2E96C, 0x2EA0C },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HP[] =
{
    { _T("HP Lilith"), 0x107aC, 0x107cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("HP Hearts"), 0x107cC, 0x107ec },
    { _T("HP Luminous Illusion/62KKK bats"), 0x107eC, 0x1080c },
    { _T("HP Sparkles"), 0x1080C, 0x1082c },
    { _T("HP Select Portrait"), 0x2C4CC, 0x2C4EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("HP Win Portrait"), 0x2F40C, 0x2F4AC },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LK[] =
{
    { _T("LK Lilith"), 0x1082C, 0x1084c, indexCPS2_Vamp_Lilith, 0 },
    { _T("LK Hearts"), 0x1084C, 0x1086c },
    { _T("LK Luminous Illusion/62KKK bats"), 0x1086C, 0x1088c },
    { _T("LK Sparkles"), 0x1088C, 0x108ac },
    { _T("LK Select Portrait"), 0x2C6CC, 0x2C6EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("LK Win Portrait"), 0x2FEAC, 0x2FF4C },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MK[] =
{
    { _T("MK Lilith"), 0x108aC, 0x108cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("MK Hearts"), 0x108cC, 0x108ec },
    { _T("MK Luminous Illusion/62KKK bats"), 0x108eC, 0x1090c },
    { _T("MK Sparkles"), 0x1090C, 0x1092c },
    { _T("MK Select Portrait"), 0x2C8CC, 0x2C8EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("MK Win Portrait"), 0x3094C, 0x309EC },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HK[] =
{
    { _T("HK Lilith"), 0x1092C, 0x1094c, indexCPS2_Vamp_Lilith, 0 },
    { _T("HK Hearts"), 0x1094C, 0x1096c },
    { _T("HK Luminous Illusion/62KKK bats"), 0x1096C, 0x1098c },
    { _T("HK Sparkles"), 0x1098C, 0x109ac },
    { _T("HK Select Portrait"), 0x2CACC, 0x2CAEC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("HK Win Portrait"), 0x313EC, 0x3148C },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_PP[] =
{
    { _T("PP Lilith"), 0x109aC, 0x109cc, indexCPS2_Vamp_Lilith, 0 },
    { _T("PP Hearts"), 0x109cC, 0x109ec },
    { _T("PP Luminous Illusion/62KKK bats"), 0x109eC, 0x10a0c },
    { _T("PP Sparkles"), 0x10a0C, 0x10a2c },
    { _T("PP Select Portrait"), 0x2CCCC, 0x2CCEC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("PP Win Portrait"), 0x31E8C, 0x31F2C },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_KK[] =
{
    { _T("KK Lilith"), 0x10a2C, 0x10a4c, indexCPS2_Vamp_Lilith, 0 },
    { _T("KK Hearts"), 0x10a4C, 0x10a6c },
    { _T("KK Luminous Illusion/62KKK bats"), 0x10a6C, 0x10a8c },
    { _T("KK Sparkles"), 0x10a8C, 0x10aac },
    { _T("KK Select Portrait"), 0x2CECC, 0x2CEEC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("KK Win Portrait"), 0x3292C, 0x329CC },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AP[] =
{
    { _T("AP Lilith"), 0x10aaC, 0x10acc, indexCPS2_Vamp_Lilith, 0 },
    { _T("AP Hearts"), 0x10acC, 0x10aec },
    { _T("AP Luminous Illusion/62KKK bats"), 0x10aeC, 0x10b0c },
    { _T("AP Sparkles"), 0x10b0C, 0x10b2c },
    { _T("AP Select Portrait"), 0x2D0CC, 0x2D0EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("AP Win Portrait"), 0x333CC, 0x3346C },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AK[] =
{
    { _T("AK Lilith"), 0x10b2C, 0x10b4c, indexCPS2_Vamp_Lilith, 0 },
    { _T("AK Hearts"), 0x10b4C, 0x10b6c },
    { _T("AK Luminous Illusion/62KKK bats"), 0x10b6C, 0x10b8c },
    { _T("AK Sparkles"), 0x10b8C, 0x10bac },
    { _T("AK Select Portrait"), 0x2D2CC, 0x2D2EC, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("AK Win Portrait"), 0x33E6C, 0x33F0C },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LP[] =
{
    { _T("LP Jedah"), 0x10baC, 0x10bcc, indexCPS2_Vamp_Jedah, 0 },
    { _T("LP Prova di Servo"), 0x10bcC, 0x10bec },
    { _T("LP Blood"), 0x10beC, 0x10c0c },
    { _T("LP Intro"), 0x10c0C, 0x10c2c },
    { _T("LP Select Portrait"), 0x2C0EC, 0x2C10C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("LP Win Portrait"), 0x2DF6C, 0x2E00C },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MP[] =
{
    { _T("MP Jedah"), 0x10c2C, 0x10c4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("MP Prova di Servo"), 0x10c4C, 0x10c6c },
    { _T("MP Blood"), 0x10c6C, 0x10c8c },
    { _T("MP Intro"), 0x10c8C, 0x10cac },
    { _T("MP Select Portrait"), 0x2C2EC, 0x2C30C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("MP Win Portrait"), 0x2EA0C, 0x2EAAC },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HP[] =
{
    { _T("HP Jedah"), 0x10caC, 0x10ccc, indexCPS2_Vamp_Jedah, 0 },
    { _T("HP Prova di Servo"), 0x10ccC, 0x10cec },
    { _T("HP Blood"), 0x10ceC, 0x10d0c },
    { _T("HP Intro"), 0x10d0C, 0x10d2c },
    { _T("HP Select Portrait"), 0x2C4EC, 0x2C50C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("HP Win Portrait"), 0x2F4AC, 0x2F54C },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LK[] =
{
    { _T("LK Jedah"), 0x10d2C, 0x10d4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("LK Prova di Servo"), 0x10d4C, 0x10d6c },
    { _T("LK Blood"), 0x10d6C, 0x10d8c },
    { _T("LK Intro"), 0x10d8C, 0x10dac },
    { _T("LK Select Portrait"), 0x2C6EC, 0x2C70C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("LK Win Portrait"), 0x2FF4C, 0x2FFEC },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MK[] =
{
    { _T("MK Jedah"), 0x10daC, 0x10dcc, indexCPS2_Vamp_Jedah, 0 },
    { _T("MK Prova di Servo"), 0x10dcC, 0x10dec },
    { _T("MK Blood"), 0x10deC, 0x10e0c },
    { _T("MK Intro"), 0x10e0C, 0x10e2c },
    { _T("MK Select Portrait"), 0x2C8EC, 0x2C90C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("MK Win Portrait"), 0x309EC, 0x30A8C },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HK[] =
{
    { _T("HK Jedah"), 0x10e2C, 0x10e4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("HK Prova di Servo"), 0x10e4C, 0x10e6c },
    { _T("HK Blood"), 0x10e6C, 0x10e8c },
    { _T("HK Intro"), 0x10e8C, 0x10eac },
    { _T("HK Select Portrait"), 0x2CAEC, 0x2CB0C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("HK Win Portrait"), 0x3148C, 0x3152C },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_PP[] =
{
    { _T("PP Jedah"), 0x10eaC, 0x10ecc, indexCPS2_Vamp_Jedah, 0 },
    { _T("PP Prova di Servo"), 0x10ecC, 0x10eec },
    { _T("PP Blood"), 0x10eeC, 0x10f0c },
    { _T("PP Intro"), 0x10f0C, 0x10f2c },
    { _T("PP Select Portrait"), 0x2CCEC, 0x2CD0C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("PP Win Portrait"), 0x31F2C, 0x31FCC },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_KK[] =
{
    { _T("KK Jedah"), 0x10f2C, 0x10f4c, indexCPS2_Vamp_Jedah, 0 },
    { _T("KK Prova di Servo"), 0x10f4C, 0x10f6c },
    { _T("KK Blood"), 0x10f6C, 0x10f8c },
    { _T("KK Intro"), 0x10f8C, 0x10fac },
    { _T("KK Select Portrait"), 0x2CEEC, 0x2CF0C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("KK Win Portrait"), 0x329CC, 0x32A6C },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AP[] =
{
    { _T("AP Jedah"), 0x10faC, 0x10fcc, indexCPS2_Vamp_Jedah, 0 },
    { _T("AP Prova di Servo"), 0x10fcC, 0x10fec },
    { _T("AP Blood"), 0x10feC, 0x1100c },
    { _T("AP Intro"), 0x1100C, 0x1102c },
    { _T("AP Select Portrait"), 0x2D0EC, 0x2D10C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("AP Win Portrait"), 0x3346C, 0x3350C },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AK[] =
{
    { _T("AK Jedah"), 0x1102C, 0x1104c, indexCPS2_Vamp_Jedah, 0 },
    { _T("AK Prova di Servo"), 0x1104C, 0x1106c },
    { _T("AK Blood"), 0x1106C, 0x1108c },
    { _T("AK Intro"), 0x1108C, 0x110ac },
    { _T("AK Select Portrait"), 0x2D2EC, 0x2D30C, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("AK Win Portrait"), 0x33F0C, 0x33FAC },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SHARED[] =
{
    { _T("Shared blood"), 0x1faeC, 0x1fb0c },
    { _T("Shared blood 2"), 0x1fb0C, 0x1fb2c },
    { _T("Shared Prova di Servo "), 0x1fb2C, 0x1fb4c },
    { _T("Shared Prova di Servo 2"), 0x1fb4C, 0x1fb6c },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_DEFAULT[] =
{
    { _T("Dark Gallon (1/6)"), 0x110aC, 0x110cc, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (2/6)"), 0x1fb8C, 0x1fbac, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (3/6)"), 0x1fbaC, 0x1fbcc, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (3/6)"), 0x1fbcC, 0x1fbec, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (4/6)"), 0x1fbeC, 0x1fc0c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Dark Gallon (6/6)"), 0x1fc0C, 0x1fc2c, indexCPS2_Vamp_Gallon, 0 },
    { _T("Intro/Outro"), 0x110cC, 0x110ec },
    { _T("236P/41236KK/j.HP"), 0x110eC, 0x1110c },
    { _T("236P/28K/Outro Flash"), 0x1110C, 0x1112c },
    { _T("Dark Gallon Select"), 0x2d5CC, 0x2d5EC, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("Dark Gallon Win"), 0x3404C, 0x340EC },
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
    { _T("Dark Gallon Alt Palette Win"), 0x340EC, 0x3418C },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { _T("LP Oboro Bishamon"), 0x115ac, 0x115cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Intro"), 0x115cc, 0x115ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LP Ghosts/Hitsparks"), 0x115ec, 0x1160c },
    { _T("LP Unknown Extra"), 0x1160c, 0x1162c },
    { _T("LP Select Portrait"), 0x2d50c, 0x2d52c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LP Win Portrait"), 0x3418c, 0x3422c },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { _T("MP Oboro Bishamon"), 0x1162c, 0x1164c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Intro"), 0x1164c, 0x1166c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MP Ghosts/Hitsparks"), 0x1166c, 0x1168c },
    { _T("MP Unknown Extra"), 0x1168c, 0x116ac },
    { _T("MP Select Portrait"), 0x2d52c, 0x2d54c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MP Win Portrait"), 0x3422c, 0x342cc },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { _T("HP Oboro Bishamon"), 0x116ac, 0x116cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Intro"), 0x116cc, 0x116ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HP Ghosts/Hitsparks"), 0x116ec, 0x1170c },
    { _T("HP Unknown Extra"), 0x1170c, 0x1172c },
    { _T("HP Select Portrait"), 0x2d54c, 0x2d56c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HP Win Portrait"), 0x342cc, 0x3436c },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { _T("LK Oboro Bishamon"), 0x1172c, 0x1174c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Intro"), 0x1174c, 0x1176c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("LK Ghosts/Hitsparks"), 0x1176c, 0x1178c },
    { _T("LK Unknown Extra"), 0x1178c, 0x117ac },
    { _T("LK Select Portrait"), 0x2d56c, 0x2d58c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LK Win Portrait"), 0x3436c, 0x3440c },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { _T("MK Oboro Bishamon"), 0x117ac, 0x117cc, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Intro"), 0x117cc, 0x117ec, indexCPS2_Vamp_Bishamon, 0 },
    { _T("MK Ghosts/Hitsparks"), 0x117ec, 0x1180c },
    { _T("MK Unknown Extra"), 0x1180c, 0x1182c },
    { _T("MK Select Portrait"), 0x2d58c, 0x2d5ac, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MK Win Portrait"), 0x3440c, 0x344ac },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { _T("HK Oboro Bishamon"), 0x1182c, 0x1184c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Intro"), 0x1184c, 0x1186c, indexCPS2_Vamp_Bishamon, 0 },
    { _T("HK Ghosts/Hitsparks"), 0x1186c, 0x1188c },
    { _T("HK Unknown Extra"), 0x1188c, 0x118ac },
    { _T("HK Select Portrait"), 0x2d5ac, 0x2d5cc, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HK Win Portrait"), 0x344ac, 0x3454c },
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
    { _T("Shadow"), 0x3584C, 0x3586C },
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
    { _T("Shared"), DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_SHARED, ARRAYSIZE(VSAV_A_JEDAH_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_DARKGALLON_COLLECTION[] =
{
    { _T("Default"),    DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_DEFAULT,  ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_DEFAULT) },
    { _T("Alt"),        DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_ALT,      ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_ALT) },
};

const sDescTreeNode VSAV_A_OBOROBISHAMON_COLLECTION[] =
{
    // These names are deliberately terminally spaced so that multisprite export is forced off due to unbalanced nodes
    { _T("LP "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_LP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_LP) },
    { _T("MP "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_MP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_MP) },
    { _T("HP "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_HP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_HP) },
    { _T("LK "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_LK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_LK) },
    { _T("MK "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_MK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_MK) },
    { _T("HK "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_HK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_HK) },
    { _T("PP "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_PP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_PP) },
    { _T("KK "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_KK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_KK) },
    { _T("AP "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_AP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_AP) },
    { _T("AK "), DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_AK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_AK) },
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

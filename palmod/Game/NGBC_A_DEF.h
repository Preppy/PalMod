#pragma once

// To add characters or palette lists:
// * Update the ngbcCharacterList array.
// * Uncomment DumpAllCharacters in InitDescTree
// * Run PalMod: the new headers will be printed to debug out
// That should be it.  Good luck.

const UINT16 NGBC_A_IMG_UNITS[] =
{
    indexNGBCSprites_Ai,        // 0xbc
    indexNGBCSprites_Akari,     // 0xbd
    indexNGBCSprites_Asura,     // 0xbe
    indexNGBCSprites_Chonrei,   // 0xbf
    indexNGBCSprites_Chonshu,   // 0xc0
    indexNGBCSprites_CyberWoo,  // 0xc1
    indexNGBCSprites_Fuuma,     // 0xc2
    indexNGBCSprites_Geese,     // 0xc3
    indexNGBCSprites_Genjuro,   // 0xc4
    indexNGBCSprites_GoddessAthena, // 0xc5
    indexNGBCSprites_Goodman,   // 0xc6
    indexNGBCSprites_Hanzo,     // 0xc7
    indexNGBCSprites_Haohmaru,  // 0xc8
    indexNGBCSprites_Hotaru,    // 0xc9
    indexNGBCSprites_Iori,      // 0xca
    indexNGBCSprites_K,         // 0xcb
    indexNGBCSprites_Kaede,     // 0xcc
    indexNGBCSprites_Keiichiro, // 0xcd
    indexNGBCSprites_Kim,       // 0xce
    indexNGBCSprites_KingLion,  // 0xcf
    indexNGBCSprites_Kisarah,   // 0xd0
    indexNGBCSprites_Kyo,       // 0xd1
    indexNGBCSprites_LeePaiLong, // 0xd2
    indexNGBCSprites_Mai,       // 0xd3
    indexNGBCSprites_Marco,     // 0xd4
    indexNGBCSprites_MarsPeople, // 0xd5
    indexNGBCSprites_Mizuchi,   // 0xd6
    indexNGBCSprites_Moriya,    // 0xd7
    indexNGBCSprites_MrBig,     // 0xd8
    indexNGBCSprites_MrKarate,  // 0xd9
    indexNGBCSprites_Mudman,    // 0xda
    indexNGBCSprites_Nakoruru,  // 0xdb
    indexNGBCSprites_NeoDio,    // 0xdc
    indexNGBCSprites_Robert,    // 0xdd
    indexNGBCSprites_Rock,      // 0xde
    indexNGBCSprites_Shermie,   // 0xdf
    indexNGBCSprites_Shiki,     // 0xe0
    indexNGBCSprites_Terry,     // 0xe1
    indexNGBCSprites_TungFuRue, // 0xe2
    indexNGBCSprites_Yuuki,     // 0xe3
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_A[] =
{
    { L"Yuuki A", 0x1013000, 0x1013020, indexNGBCSprites_Yuuki },
    { L"A - Super Trail", 0x1013020, 0x1013040, indexNGBCSprites_Yuuki, 0x00 },
    { L"A - Extra Move 1", 0x1013040, 0x1013060, indexNGBCSprites_Yuuki, 0x01 },
    { L"A - Extra Move 2", 0x1013060, 0x1013080, indexNGBCSprites_Yuuki, 0x02 },
    { L"A - Extra Move 3", 0x1013080, 0x10130a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"A - Extra Move 4", 0x10130a0, 0x10130c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"A - Extra Move 5", 0x10130c0, 0x10130e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"A - Extra Move 6", 0x10130e0, 0x1013100, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_B[] =
{
    { L"Yuuki B", 0x1013100, 0x1013120, indexNGBCSprites_Yuuki },
    { L"B - Super Trail", 0x1013120, 0x1013140, indexNGBCSprites_Yuuki, 0x00 },
    { L"B - Extra Move 1", 0x1013140, 0x1013160, indexNGBCSprites_Yuuki, 0x01 },
    { L"B - Extra Move 2", 0x1013160, 0x1013180, indexNGBCSprites_Yuuki, 0x02 },
    { L"B - Extra Move 3", 0x1013180, 0x10131a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"B - Extra Move 4", 0x10131a0, 0x10131c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"B - Extra Move 5", 0x10131c0, 0x10131e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"B - Extra Move 6", 0x10131e0, 0x1013200, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_C[] =
{
    { L"Yuuki C", 0x1013200, 0x1013220, indexNGBCSprites_Yuuki },
    { L"C - Super Trail", 0x1013220, 0x1013240, indexNGBCSprites_Yuuki, 0x00 },
    { L"C - Extra Move 1", 0x1013240, 0x1013260, indexNGBCSprites_Yuuki, 0x01 },
    { L"C - Extra Move 2", 0x1013260, 0x1013280, indexNGBCSprites_Yuuki, 0x02 },
    { L"C - Extra Move 3", 0x1013280, 0x10132a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"C - Extra Move 4", 0x10132a0, 0x10132c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"C - Extra Move 5", 0x10132c0, 0x10132e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"C - Extra Move 6", 0x10132e0, 0x1013300, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_D[] =
{
    { L"Yuuki D", 0x1013300, 0x1013320, indexNGBCSprites_Yuuki },
    { L"D - Super Trail", 0x1013320, 0x1013340, indexNGBCSprites_Yuuki, 0x00 },
    { L"D - Extra Move 1", 0x1013340, 0x1013360, indexNGBCSprites_Yuuki, 0x01 },
    { L"D - Extra Move 2", 0x1013360, 0x1013380, indexNGBCSprites_Yuuki, 0x02 },
    { L"D - Extra Move 3", 0x1013380, 0x10133a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"D - Extra Move 4", 0x10133a0, 0x10133c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"D - Extra Move 5", 0x10133c0, 0x10133e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"D - Extra Move 6", 0x10133e0, 0x1013400, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_EA[] =
{
    { L"Yuuki EA", 0x1013400, 0x1013420, indexNGBCSprites_Yuuki },
    { L"E+A - Super Trail", 0x1013420, 0x1013440, indexNGBCSprites_Yuuki, 0x00 },
    { L"E+A - Extra Move 1", 0x1013440, 0x1013460, indexNGBCSprites_Yuuki, 0x01 },
    { L"E+A - Extra Move 2", 0x1013460, 0x1013480, indexNGBCSprites_Yuuki, 0x02 },
    { L"E+A - Extra Move 3", 0x1013480, 0x10134a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"E+A - Extra Move 4", 0x10134a0, 0x10134c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"E+A - Extra Move 5", 0x10134c0, 0x10134e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"E+A - Extra Move 6", 0x10134e0, 0x1013500, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_EB[] =
{
    { L"Yuuki EB", 0x1013500, 0x1013520, indexNGBCSprites_Yuuki },
    { L"E+B - Super Trail", 0x1013520, 0x1013540, indexNGBCSprites_Yuuki, 0x00 },
    { L"E+B - Extra Move 1", 0x1013540, 0x1013560, indexNGBCSprites_Yuuki, 0x01 },
    { L"E+B - Extra Move 2", 0x1013560, 0x1013580, indexNGBCSprites_Yuuki, 0x02 },
    { L"E+B - Extra Move 3", 0x1013580, 0x10135a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"E+B - Extra Move 4", 0x10135a0, 0x10135c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"E+B - Extra Move 5", 0x10135c0, 0x10135e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"E+B - Extra Move 6", 0x10135e0, 0x1013600, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_EC[] =
{
    { L"Yuuki EC", 0x1013600, 0x1013620, indexNGBCSprites_Yuuki },
    { L"E+C - Super Trail", 0x1013620, 0x1013640, indexNGBCSprites_Yuuki, 0x00 },
    { L"E+C - Extra Move 1", 0x1013640, 0x1013660, indexNGBCSprites_Yuuki, 0x01 },
    { L"E+C - Extra Move 2", 0x1013660, 0x1013680, indexNGBCSprites_Yuuki, 0x02 },
    { L"E+C - Extra Move 3", 0x1013680, 0x10136a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"E+C - Extra Move 4", 0x10136a0, 0x10136c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"E+C - Extra Move 5", 0x10136c0, 0x10136e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"E+C - Extra Move 6", 0x10136e0, 0x1013700, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_ED[] =
{
    { L"Yuuki ED", 0x1013700, 0x1013720, indexNGBCSprites_Yuuki },
    { L"E+D - Super Trail", 0x1013720, 0x1013740, indexNGBCSprites_Yuuki, 0x00 },
    { L"E+D - Extra Move 1", 0x1013740, 0x1013760, indexNGBCSprites_Yuuki, 0x01 },
    { L"E+D - Extra Move 2", 0x1013760, 0x1013780, indexNGBCSprites_Yuuki, 0x02 },
    { L"E+D - Extra Move 3", 0x1013780, 0x10137a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"E+D - Extra Move 4", 0x10137a0, 0x10137c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"E+D - Extra Move 5", 0x10137c0, 0x10137e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"E+D - Extra Move 6", 0x10137e0, 0x1013800, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_SA[] =
{
    { L"Yuuki SA", 0x1013800, 0x1013820, indexNGBCSprites_Yuuki },
    { L"Start+A - Super Trail", 0x1013820, 0x1013840, indexNGBCSprites_Yuuki, 0x00 },
    { L"Start+A - Extra Move 1", 0x1013840, 0x1013860, indexNGBCSprites_Yuuki, 0x01 },
    { L"Start+A - Extra Move 2", 0x1013860, 0x1013880, indexNGBCSprites_Yuuki, 0x02 },
    { L"Start+A - Extra Move 3", 0x1013880, 0x10138a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"Start+A - Extra Move 4", 0x10138a0, 0x10138c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"Start+A - Extra Move 5", 0x10138c0, 0x10138e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"Start+A - Extra Move 6", 0x10138e0, 0x1013900, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_SB[] =
{
    { L"Yuuki SB", 0x1013900, 0x1013920, indexNGBCSprites_Yuuki },
    { L"Start+B - Super Trail", 0x1013920, 0x1013940, indexNGBCSprites_Yuuki, 0x00 },
    { L"Start+B - Extra Move 1", 0x1013940, 0x1013960, indexNGBCSprites_Yuuki, 0x01 },
    { L"Start+B - Extra Move 2", 0x1013960, 0x1013980, indexNGBCSprites_Yuuki, 0x02 },
    { L"Start+B - Extra Move 3", 0x1013980, 0x10139a0, indexNGBCSprites_Yuuki, 0x03 },
    { L"Start+B - Extra Move 4", 0x10139a0, 0x10139c0, indexNGBCSprites_Yuuki, 0x04 },
    { L"Start+B - Extra Move 5", 0x10139c0, 0x10139e0, indexNGBCSprites_Yuuki, 0x05 },
    { L"Start+B - Extra Move 6", 0x10139e0, 0x1013a00, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_SC[] =
{
    { L"Yuuki SC", 0x1013a00, 0x1013a20, indexNGBCSprites_Yuuki },
    { L"Start+C - Super Trail", 0x1013a20, 0x1013a40, indexNGBCSprites_Yuuki, 0x00 },
    { L"Start+C - Extra Move 1", 0x1013a40, 0x1013a60, indexNGBCSprites_Yuuki, 0x01 },
    { L"Start+C - Extra Move 2", 0x1013a60, 0x1013a80, indexNGBCSprites_Yuuki, 0x02 },
    { L"Start+C - Extra Move 3", 0x1013a80, 0x1013aa0, indexNGBCSprites_Yuuki, 0x03 },
    { L"Start+C - Extra Move 4", 0x1013aa0, 0x1013ac0, indexNGBCSprites_Yuuki, 0x04 },
    { L"Start+C - Extra Move 5", 0x1013ac0, 0x1013ae0, indexNGBCSprites_Yuuki, 0x05 },
    { L"Start+C - Extra Move 6", 0x1013ae0, 0x1013b00, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_YUUKI_PALETTES_SD[] =
{
    { L"Yuuki SD", 0x1013b00, 0x1013b20, indexNGBCSprites_Yuuki },
    { L"Start+D - Super Trail", 0x1013b20, 0x1013b40, indexNGBCSprites_Yuuki, 0x00 },
    { L"Start+D - Extra Move 1", 0x1013b40, 0x1013b60, indexNGBCSprites_Yuuki, 0x01 },
    { L"Start+D - Extra Move 2", 0x1013b60, 0x1013b80, indexNGBCSprites_Yuuki, 0x02 },
    { L"Start+D - Extra Move 3", 0x1013b80, 0x1013ba0, indexNGBCSprites_Yuuki, 0x03 },
    { L"Start+D - Extra Move 4", 0x1013ba0, 0x1013bc0, indexNGBCSprites_Yuuki, 0x04 },
    { L"Start+D - Extra Move 5", 0x1013bc0, 0x1013be0, indexNGBCSprites_Yuuki, 0x05 },
    { L"Start+D - Extra Move 6", 0x1013be0, 0x1013c00, indexNGBCSprites_Yuuki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_A[] =
{
    { L"Ai A", 0x1250000, 0x1250020, indexNGBCSprites_Ai },
    { L"A - Super Trail", 0x1250020, 0x1250040, indexNGBCSprites_Ai, 0x00 },
    { L"A - Extra Move 1", 0x1250040, 0x1250060, indexNGBCSprites_Ai, 0x01 },
    { L"A - Extra Move 2", 0x1250060, 0x1250080, indexNGBCSprites_Ai, 0x02 },
    { L"A - Extra Move 3", 0x1250080, 0x12500a0, indexNGBCSprites_Ai, 0x03 },
    { L"A - Extra Move 4", 0x12500a0, 0x12500c0, indexNGBCSprites_Ai, 0x04 },
    { L"A - Extra Move 5", 0x12500c0, 0x12500e0, indexNGBCSprites_Ai, 0x05 },
    { L"A - Extra Move 6", 0x12500e0, 0x1250100, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_B[] =
{
    { L"Ai B", 0x1250100, 0x1250120, indexNGBCSprites_Ai },
    { L"B - Super Trail", 0x1250120, 0x1250140, indexNGBCSprites_Ai, 0x00 },
    { L"B - Extra Move 1", 0x1250140, 0x1250160, indexNGBCSprites_Ai, 0x01 },
    { L"B - Extra Move 2", 0x1250160, 0x1250180, indexNGBCSprites_Ai, 0x02 },
    { L"B - Extra Move 3", 0x1250180, 0x12501a0, indexNGBCSprites_Ai, 0x03 },
    { L"B - Extra Move 4", 0x12501a0, 0x12501c0, indexNGBCSprites_Ai, 0x04 },
    { L"B - Extra Move 5", 0x12501c0, 0x12501e0, indexNGBCSprites_Ai, 0x05 },
    { L"B - Extra Move 6", 0x12501e0, 0x1250200, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_C[] =
{
    { L"Ai C", 0x1250200, 0x1250220, indexNGBCSprites_Ai },
    { L"C - Super Trail", 0x1250220, 0x1250240, indexNGBCSprites_Ai, 0x00 },
    { L"C - Extra Move 1", 0x1250240, 0x1250260, indexNGBCSprites_Ai, 0x01 },
    { L"C - Extra Move 2", 0x1250260, 0x1250280, indexNGBCSprites_Ai, 0x02 },
    { L"C - Extra Move 3", 0x1250280, 0x12502a0, indexNGBCSprites_Ai, 0x03 },
    { L"C - Extra Move 4", 0x12502a0, 0x12502c0, indexNGBCSprites_Ai, 0x04 },
    { L"C - Extra Move 5", 0x12502c0, 0x12502e0, indexNGBCSprites_Ai, 0x05 },
    { L"C - Extra Move 6", 0x12502e0, 0x1250300, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_D[] =
{
    { L"Ai D", 0x1250300, 0x1250320, indexNGBCSprites_Ai },
    { L"D - Super Trail", 0x1250320, 0x1250340, indexNGBCSprites_Ai, 0x00 },
    { L"D - Extra Move 1", 0x1250340, 0x1250360, indexNGBCSprites_Ai, 0x01 },
    { L"D - Extra Move 2", 0x1250360, 0x1250380, indexNGBCSprites_Ai, 0x02 },
    { L"D - Extra Move 3", 0x1250380, 0x12503a0, indexNGBCSprites_Ai, 0x03 },
    { L"D - Extra Move 4", 0x12503a0, 0x12503c0, indexNGBCSprites_Ai, 0x04 },
    { L"D - Extra Move 5", 0x12503c0, 0x12503e0, indexNGBCSprites_Ai, 0x05 },
    { L"D - Extra Move 6", 0x12503e0, 0x1250400, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_EA[] =
{
    { L"Ai EA", 0x1250400, 0x1250420, indexNGBCSprites_Ai },
    { L"E+A - Super Trail", 0x1250420, 0x1250440, indexNGBCSprites_Ai, 0x00 },
    { L"E+A - Extra Move 1", 0x1250440, 0x1250460, indexNGBCSprites_Ai, 0x01 },
    { L"E+A - Extra Move 2", 0x1250460, 0x1250480, indexNGBCSprites_Ai, 0x02 },
    { L"E+A - Extra Move 3", 0x1250480, 0x12504a0, indexNGBCSprites_Ai, 0x03 },
    { L"E+A - Extra Move 4", 0x12504a0, 0x12504c0, indexNGBCSprites_Ai, 0x04 },
    { L"E+A - Extra Move 5", 0x12504c0, 0x12504e0, indexNGBCSprites_Ai, 0x05 },
    { L"E+A - Extra Move 6", 0x12504e0, 0x1250500, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_EB[] =
{
    { L"Ai EB", 0x1250500, 0x1250520, indexNGBCSprites_Ai },
    { L"E+B - Super Trail", 0x1250520, 0x1250540, indexNGBCSprites_Ai, 0x00 },
    { L"E+B - Extra Move 1", 0x1250540, 0x1250560, indexNGBCSprites_Ai, 0x01 },
    { L"E+B - Extra Move 2", 0x1250560, 0x1250580, indexNGBCSprites_Ai, 0x02 },
    { L"E+B - Extra Move 3", 0x1250580, 0x12505a0, indexNGBCSprites_Ai, 0x03 },
    { L"E+B - Extra Move 4", 0x12505a0, 0x12505c0, indexNGBCSprites_Ai, 0x04 },
    { L"E+B - Extra Move 5", 0x12505c0, 0x12505e0, indexNGBCSprites_Ai, 0x05 },
    { L"E+B - Extra Move 6", 0x12505e0, 0x1250600, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_EC[] =
{
    { L"Ai EC", 0x1250600, 0x1250620, indexNGBCSprites_Ai },
    { L"E+C - Super Trail", 0x1250620, 0x1250640, indexNGBCSprites_Ai, 0x00 },
    { L"E+C - Extra Move 1", 0x1250640, 0x1250660, indexNGBCSprites_Ai, 0x01 },
    { L"E+C - Extra Move 2", 0x1250660, 0x1250680, indexNGBCSprites_Ai, 0x02 },
    { L"E+C - Extra Move 3", 0x1250680, 0x12506a0, indexNGBCSprites_Ai, 0x03 },
    { L"E+C - Extra Move 4", 0x12506a0, 0x12506c0, indexNGBCSprites_Ai, 0x04 },
    { L"E+C - Extra Move 5", 0x12506c0, 0x12506e0, indexNGBCSprites_Ai, 0x05 },
    { L"E+C - Extra Move 6", 0x12506e0, 0x1250700, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_ED[] =
{
    { L"Ai ED", 0x1250700, 0x1250720, indexNGBCSprites_Ai },
    { L"E+D - Super Trail", 0x1250720, 0x1250740, indexNGBCSprites_Ai, 0x00 },
    { L"E+D - Extra Move 1", 0x1250740, 0x1250760, indexNGBCSprites_Ai, 0x01 },
    { L"E+D - Extra Move 2", 0x1250760, 0x1250780, indexNGBCSprites_Ai, 0x02 },
    { L"E+D - Extra Move 3", 0x1250780, 0x12507a0, indexNGBCSprites_Ai, 0x03 },
    { L"E+D - Extra Move 4", 0x12507a0, 0x12507c0, indexNGBCSprites_Ai, 0x04 },
    { L"E+D - Extra Move 5", 0x12507c0, 0x12507e0, indexNGBCSprites_Ai, 0x05 },
    { L"E+D - Extra Move 6", 0x12507e0, 0x1250800, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_SA[] =
{
    { L"Ai SA", 0x1250800, 0x1250820, indexNGBCSprites_Ai },
    { L"Start+A - Super Trail", 0x1250820, 0x1250840, indexNGBCSprites_Ai, 0x00 },
    { L"Start+A - Extra Move 1", 0x1250840, 0x1250860, indexNGBCSprites_Ai, 0x01 },
    { L"Start+A - Extra Move 2", 0x1250860, 0x1250880, indexNGBCSprites_Ai, 0x02 },
    { L"Start+A - Extra Move 3", 0x1250880, 0x12508a0, indexNGBCSprites_Ai, 0x03 },
    { L"Start+A - Extra Move 4", 0x12508a0, 0x12508c0, indexNGBCSprites_Ai, 0x04 },
    { L"Start+A - Extra Move 5", 0x12508c0, 0x12508e0, indexNGBCSprites_Ai, 0x05 },
    { L"Start+A - Extra Move 6", 0x12508e0, 0x1250900, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_SB[] =
{
    { L"Ai SB", 0x1250900, 0x1250920, indexNGBCSprites_Ai },
    { L"Start+B - Super Trail", 0x1250920, 0x1250940, indexNGBCSprites_Ai, 0x00 },
    { L"Start+B - Extra Move 1", 0x1250940, 0x1250960, indexNGBCSprites_Ai, 0x01 },
    { L"Start+B - Extra Move 2", 0x1250960, 0x1250980, indexNGBCSprites_Ai, 0x02 },
    { L"Start+B - Extra Move 3", 0x1250980, 0x12509a0, indexNGBCSprites_Ai, 0x03 },
    { L"Start+B - Extra Move 4", 0x12509a0, 0x12509c0, indexNGBCSprites_Ai, 0x04 },
    { L"Start+B - Extra Move 5", 0x12509c0, 0x12509e0, indexNGBCSprites_Ai, 0x05 },
    { L"Start+B - Extra Move 6", 0x12509e0, 0x1250a00, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_SC[] =
{
    { L"Ai SC", 0x1250a00, 0x1250a20, indexNGBCSprites_Ai },
    { L"Start+C - Super Trail", 0x1250a20, 0x1250a40, indexNGBCSprites_Ai, 0x00 },
    { L"Start+C - Extra Move 1", 0x1250a40, 0x1250a60, indexNGBCSprites_Ai, 0x01 },
    { L"Start+C - Extra Move 2", 0x1250a60, 0x1250a80, indexNGBCSprites_Ai, 0x02 },
    { L"Start+C - Extra Move 3", 0x1250a80, 0x1250aa0, indexNGBCSprites_Ai, 0x03 },
    { L"Start+C - Extra Move 4", 0x1250aa0, 0x1250ac0, indexNGBCSprites_Ai, 0x04 },
    { L"Start+C - Extra Move 5", 0x1250ac0, 0x1250ae0, indexNGBCSprites_Ai, 0x05 },
    { L"Start+C - Extra Move 6", 0x1250ae0, 0x1250b00, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AI_PALETTES_SD[] =
{
    { L"Ai SD", 0x1250b00, 0x1250b20, indexNGBCSprites_Ai },
    { L"Start+D - Super Trail", 0x1250b20, 0x1250b40, indexNGBCSprites_Ai, 0x00 },
    { L"Start+D - Extra Move 1", 0x1250b40, 0x1250b60, indexNGBCSprites_Ai, 0x01 },
    { L"Start+D - Extra Move 2", 0x1250b60, 0x1250b80, indexNGBCSprites_Ai, 0x02 },
    { L"Start+D - Extra Move 3", 0x1250b80, 0x1250ba0, indexNGBCSprites_Ai, 0x03 },
    { L"Start+D - Extra Move 4", 0x1250ba0, 0x1250bc0, indexNGBCSprites_Ai, 0x04 },
    { L"Start+D - Extra Move 5", 0x1250bc0, 0x1250be0, indexNGBCSprites_Ai, 0x05 },
    { L"Start+D - Extra Move 6", 0x1250be0, 0x1250c00, indexNGBCSprites_Ai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_A[] =
{
    { L"Kyo A", 0x13fe800, 0x13fe820, indexNGBCSprites_Kyo },
    { L"A - Super Trail", 0x13fe820, 0x13fe840, indexNGBCSprites_Kyo, 0x00 },
    { L"A - Extra Move 1", 0x13fe840, 0x13fe860, indexNGBCSprites_Kyo, 0x01 },
    { L"A - Extra Move 2", 0x13fe860, 0x13fe880, indexNGBCSprites_Kyo, 0x02 },
    { L"A - Extra Move 3", 0x13fe880, 0x13fe8a0, indexNGBCSprites_Kyo, 0x03 },
    { L"A - Extra Move 4", 0x13fe8a0, 0x13fe8c0, indexNGBCSprites_Kyo, 0x04 },
    { L"A - Extra Move 5", 0x13fe8c0, 0x13fe8e0, indexNGBCSprites_Kyo, 0x05 },
    { L"A - Extra Move 6", 0x13fe8e0, 0x13fe900, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_B[] =
{
    { L"Kyo B", 0x13fe900, 0x13fe920, indexNGBCSprites_Kyo },
    { L"B - Super Trail", 0x13fe920, 0x13fe940, indexNGBCSprites_Kyo, 0x00 },
    { L"B - Extra Move 1", 0x13fe940, 0x13fe960, indexNGBCSprites_Kyo, 0x01 },
    { L"B - Extra Move 2", 0x13fe960, 0x13fe980, indexNGBCSprites_Kyo, 0x02 },
    { L"B - Extra Move 3", 0x13fe980, 0x13fe9a0, indexNGBCSprites_Kyo, 0x03 },
    { L"B - Extra Move 4", 0x13fe9a0, 0x13fe9c0, indexNGBCSprites_Kyo, 0x04 },
    { L"B - Extra Move 5", 0x13fe9c0, 0x13fe9e0, indexNGBCSprites_Kyo, 0x05 },
    { L"B - Extra Move 6", 0x13fe9e0, 0x13fea00, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_C[] =
{
    { L"Kyo C", 0x13fea00, 0x13fea20, indexNGBCSprites_Kyo },
    { L"C - Super Trail", 0x13fea20, 0x13fea40, indexNGBCSprites_Kyo, 0x00 },
    { L"C - Extra Move 1", 0x13fea40, 0x13fea60, indexNGBCSprites_Kyo, 0x01 },
    { L"C - Extra Move 2", 0x13fea60, 0x13fea80, indexNGBCSprites_Kyo, 0x02 },
    { L"C - Extra Move 3", 0x13fea80, 0x13feaa0, indexNGBCSprites_Kyo, 0x03 },
    { L"C - Extra Move 4", 0x13feaa0, 0x13feac0, indexNGBCSprites_Kyo, 0x04 },
    { L"C - Extra Move 5", 0x13feac0, 0x13feae0, indexNGBCSprites_Kyo, 0x05 },
    { L"C - Extra Move 6", 0x13feae0, 0x13feb00, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_D[] =
{
    { L"Kyo D", 0x13feb00, 0x13feb20, indexNGBCSprites_Kyo },
    { L"D - Super Trail", 0x13feb20, 0x13feb40, indexNGBCSprites_Kyo, 0x00 },
    { L"D - Extra Move 1", 0x13feb40, 0x13feb60, indexNGBCSprites_Kyo, 0x01 },
    { L"D - Extra Move 2", 0x13feb60, 0x13feb80, indexNGBCSprites_Kyo, 0x02 },
    { L"D - Extra Move 3", 0x13feb80, 0x13feba0, indexNGBCSprites_Kyo, 0x03 },
    { L"D - Extra Move 4", 0x13feba0, 0x13febc0, indexNGBCSprites_Kyo, 0x04 },
    { L"D - Extra Move 5", 0x13febc0, 0x13febe0, indexNGBCSprites_Kyo, 0x05 },
    { L"D - Extra Move 6", 0x13febe0, 0x13fec00, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_EA[] =
{
    { L"Kyo EA", 0x13fec00, 0x13fec20, indexNGBCSprites_Kyo },
    { L"E+A - Super Trail", 0x13fec20, 0x13fec40, indexNGBCSprites_Kyo, 0x00 },
    { L"E+A - Extra Move 1", 0x13fec40, 0x13fec60, indexNGBCSprites_Kyo, 0x01 },
    { L"E+A - Extra Move 2", 0x13fec60, 0x13fec80, indexNGBCSprites_Kyo, 0x02 },
    { L"E+A - Extra Move 3", 0x13fec80, 0x13feca0, indexNGBCSprites_Kyo, 0x03 },
    { L"E+A - Extra Move 4", 0x13feca0, 0x13fecc0, indexNGBCSprites_Kyo, 0x04 },
    { L"E+A - Extra Move 5", 0x13fecc0, 0x13fece0, indexNGBCSprites_Kyo, 0x05 },
    { L"E+A - Extra Move 6", 0x13fece0, 0x13fed00, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_EB[] =
{
    { L"Kyo EB", 0x13fed00, 0x13fed20, indexNGBCSprites_Kyo },
    { L"E+B - Super Trail", 0x13fed20, 0x13fed40, indexNGBCSprites_Kyo, 0x00 },
    { L"E+B - Extra Move 1", 0x13fed40, 0x13fed60, indexNGBCSprites_Kyo, 0x01 },
    { L"E+B - Extra Move 2", 0x13fed60, 0x13fed80, indexNGBCSprites_Kyo, 0x02 },
    { L"E+B - Extra Move 3", 0x13fed80, 0x13feda0, indexNGBCSprites_Kyo, 0x03 },
    { L"E+B - Extra Move 4", 0x13feda0, 0x13fedc0, indexNGBCSprites_Kyo, 0x04 },
    { L"E+B - Extra Move 5", 0x13fedc0, 0x13fede0, indexNGBCSprites_Kyo, 0x05 },
    { L"E+B - Extra Move 6", 0x13fede0, 0x13fee00, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_EC[] =
{
    { L"Kyo EC", 0x13fee00, 0x13fee20, indexNGBCSprites_Kyo },
    { L"E+C - Super Trail", 0x13fee20, 0x13fee40, indexNGBCSprites_Kyo, 0x00 },
    { L"E+C - Extra Move 1", 0x13fee40, 0x13fee60, indexNGBCSprites_Kyo, 0x01 },
    { L"E+C - Extra Move 2", 0x13fee60, 0x13fee80, indexNGBCSprites_Kyo, 0x02 },
    { L"E+C - Extra Move 3", 0x13fee80, 0x13feea0, indexNGBCSprites_Kyo, 0x03 },
    { L"E+C - Extra Move 4", 0x13feea0, 0x13feec0, indexNGBCSprites_Kyo, 0x04 },
    { L"E+C - Extra Move 5", 0x13feec0, 0x13feee0, indexNGBCSprites_Kyo, 0x05 },
    { L"E+C - Extra Move 6", 0x13feee0, 0x13fef00, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_ED[] =
{
    { L"Kyo ED", 0x13fef00, 0x13fef20, indexNGBCSprites_Kyo },
    { L"E+D - Super Trail", 0x13fef20, 0x13fef40, indexNGBCSprites_Kyo, 0x00 },
    { L"E+D - Extra Move 1", 0x13fef40, 0x13fef60, indexNGBCSprites_Kyo, 0x01 },
    { L"E+D - Extra Move 2", 0x13fef60, 0x13fef80, indexNGBCSprites_Kyo, 0x02 },
    { L"E+D - Extra Move 3", 0x13fef80, 0x13fefa0, indexNGBCSprites_Kyo, 0x03 },
    { L"E+D - Extra Move 4", 0x13fefa0, 0x13fefc0, indexNGBCSprites_Kyo, 0x04 },
    { L"E+D - Extra Move 5", 0x13fefc0, 0x13fefe0, indexNGBCSprites_Kyo, 0x05 },
    { L"E+D - Extra Move 6", 0x13fefe0, 0x13ff000, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_SA[] =
{
    { L"Kyo SA", 0x13ff000, 0x13ff020, indexNGBCSprites_Kyo },
    { L"Start+A - Super Trail", 0x13ff020, 0x13ff040, indexNGBCSprites_Kyo, 0x00 },
    { L"Start+A - Extra Move 1", 0x13ff040, 0x13ff060, indexNGBCSprites_Kyo, 0x01 },
    { L"Start+A - Extra Move 2", 0x13ff060, 0x13ff080, indexNGBCSprites_Kyo, 0x02 },
    { L"Start+A - Extra Move 3", 0x13ff080, 0x13ff0a0, indexNGBCSprites_Kyo, 0x03 },
    { L"Start+A - Extra Move 4", 0x13ff0a0, 0x13ff0c0, indexNGBCSprites_Kyo, 0x04 },
    { L"Start+A - Extra Move 5", 0x13ff0c0, 0x13ff0e0, indexNGBCSprites_Kyo, 0x05 },
    { L"Start+A - Extra Move 6", 0x13ff0e0, 0x13ff100, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_SB[] =
{
    { L"Kyo SB", 0x13ff100, 0x13ff120, indexNGBCSprites_Kyo },
    { L"Start+B - Super Trail", 0x13ff120, 0x13ff140, indexNGBCSprites_Kyo, 0x00 },
    { L"Start+B - Extra Move 1", 0x13ff140, 0x13ff160, indexNGBCSprites_Kyo, 0x01 },
    { L"Start+B - Extra Move 2", 0x13ff160, 0x13ff180, indexNGBCSprites_Kyo, 0x02 },
    { L"Start+B - Extra Move 3", 0x13ff180, 0x13ff1a0, indexNGBCSprites_Kyo, 0x03 },
    { L"Start+B - Extra Move 4", 0x13ff1a0, 0x13ff1c0, indexNGBCSprites_Kyo, 0x04 },
    { L"Start+B - Extra Move 5", 0x13ff1c0, 0x13ff1e0, indexNGBCSprites_Kyo, 0x05 },
    { L"Start+B - Extra Move 6", 0x13ff1e0, 0x13ff200, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_SC[] =
{
    { L"Kyo SC", 0x13ff200, 0x13ff220, indexNGBCSprites_Kyo },
    { L"Start+C - Super Trail", 0x13ff220, 0x13ff240, indexNGBCSprites_Kyo, 0x00 },
    { L"Start+C - Extra Move 1", 0x13ff240, 0x13ff260, indexNGBCSprites_Kyo, 0x01 },
    { L"Start+C - Extra Move 2", 0x13ff260, 0x13ff280, indexNGBCSprites_Kyo, 0x02 },
    { L"Start+C - Extra Move 3", 0x13ff280, 0x13ff2a0, indexNGBCSprites_Kyo, 0x03 },
    { L"Start+C - Extra Move 4", 0x13ff2a0, 0x13ff2c0, indexNGBCSprites_Kyo, 0x04 },
    { L"Start+C - Extra Move 5", 0x13ff2c0, 0x13ff2e0, indexNGBCSprites_Kyo, 0x05 },
    { L"Start+C - Extra Move 6", 0x13ff2e0, 0x13ff300, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KYO_PALETTES_SD[] =
{
    { L"Kyo SD", 0x13ff300, 0x13ff320, indexNGBCSprites_Kyo },
    { L"Start+D - Super Trail", 0x13ff320, 0x13ff340, indexNGBCSprites_Kyo, 0x00 },
    { L"Start+D - Extra Move 1", 0x13ff340, 0x13ff360, indexNGBCSprites_Kyo, 0x01 },
    { L"Start+D - Extra Move 2", 0x13ff360, 0x13ff380, indexNGBCSprites_Kyo, 0x02 },
    { L"Start+D - Extra Move 3", 0x13ff380, 0x13ff3a0, indexNGBCSprites_Kyo, 0x03 },
    { L"Start+D - Extra Move 4", 0x13ff3a0, 0x13ff3c0, indexNGBCSprites_Kyo, 0x04 },
    { L"Start+D - Extra Move 5", 0x13ff3c0, 0x13ff3e0, indexNGBCSprites_Kyo, 0x05 },
    { L"Start+D - Extra Move 6", 0x13ff3e0, 0x13ff400, indexNGBCSprites_Kyo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_A[] =
{
    { L"Iori A", 0x15d9800, 0x15d9820, indexNGBCSprites_Iori },
    { L"A - Super Trail", 0x15d9820, 0x15d9840, indexNGBCSprites_Iori, 0x00 },
    { L"A - Extra Move 1", 0x15d9840, 0x15d9860, indexNGBCSprites_Iori, 0x01 },
    { L"A - Extra Move 2", 0x15d9860, 0x15d9880, indexNGBCSprites_Iori, 0x02 },
    { L"A - Extra Move 3", 0x15d9880, 0x15d98a0, indexNGBCSprites_Iori, 0x03 },
    { L"A - Extra Move 4", 0x15d98a0, 0x15d98c0, indexNGBCSprites_Iori, 0x04 },
    { L"A - Extra Move 5", 0x15d98c0, 0x15d98e0, indexNGBCSprites_Iori, 0x05 },
    { L"A - Extra Move 6", 0x15d98e0, 0x15d9900, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_B[] =
{
    { L"Iori B", 0x15d9900, 0x15d9920, indexNGBCSprites_Iori },
    { L"B - Super Trail", 0x15d9920, 0x15d9940, indexNGBCSprites_Iori, 0x00 },
    { L"B - Extra Move 1", 0x15d9940, 0x15d9960, indexNGBCSprites_Iori, 0x01 },
    { L"B - Extra Move 2", 0x15d9960, 0x15d9980, indexNGBCSprites_Iori, 0x02 },
    { L"B - Extra Move 3", 0x15d9980, 0x15d99a0, indexNGBCSprites_Iori, 0x03 },
    { L"B - Extra Move 4", 0x15d99a0, 0x15d99c0, indexNGBCSprites_Iori, 0x04 },
    { L"B - Extra Move 5", 0x15d99c0, 0x15d99e0, indexNGBCSprites_Iori, 0x05 },
    { L"B - Extra Move 6", 0x15d99e0, 0x15d9a00, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_C[] =
{
    { L"Iori C", 0x15d9a00, 0x15d9a20, indexNGBCSprites_Iori },
    { L"C - Super Trail", 0x15d9a20, 0x15d9a40, indexNGBCSprites_Iori, 0x00 },
    { L"C - Extra Move 1", 0x15d9a40, 0x15d9a60, indexNGBCSprites_Iori, 0x01 },
    { L"C - Extra Move 2", 0x15d9a60, 0x15d9a80, indexNGBCSprites_Iori, 0x02 },
    { L"C - Extra Move 3", 0x15d9a80, 0x15d9aa0, indexNGBCSprites_Iori, 0x03 },
    { L"C - Extra Move 4", 0x15d9aa0, 0x15d9ac0, indexNGBCSprites_Iori, 0x04 },
    { L"C - Extra Move 5", 0x15d9ac0, 0x15d9ae0, indexNGBCSprites_Iori, 0x05 },
    { L"C - Extra Move 6", 0x15d9ae0, 0x15d9b00, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_D[] =
{
    { L"Iori D", 0x15d9b00, 0x15d9b20, indexNGBCSprites_Iori },
    { L"D - Super Trail", 0x15d9b20, 0x15d9b40, indexNGBCSprites_Iori, 0x00 },
    { L"D - Extra Move 1", 0x15d9b40, 0x15d9b60, indexNGBCSprites_Iori, 0x01 },
    { L"D - Extra Move 2", 0x15d9b60, 0x15d9b80, indexNGBCSprites_Iori, 0x02 },
    { L"D - Extra Move 3", 0x15d9b80, 0x15d9ba0, indexNGBCSprites_Iori, 0x03 },
    { L"D - Extra Move 4", 0x15d9ba0, 0x15d9bc0, indexNGBCSprites_Iori, 0x04 },
    { L"D - Extra Move 5", 0x15d9bc0, 0x15d9be0, indexNGBCSprites_Iori, 0x05 },
    { L"D - Extra Move 6", 0x15d9be0, 0x15d9c00, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_EA[] =
{
    { L"Iori EA", 0x15d9c00, 0x15d9c20, indexNGBCSprites_Iori },
    { L"E+A - Super Trail", 0x15d9c20, 0x15d9c40, indexNGBCSprites_Iori, 0x00 },
    { L"E+A - Extra Move 1", 0x15d9c40, 0x15d9c60, indexNGBCSprites_Iori, 0x01 },
    { L"E+A - Extra Move 2", 0x15d9c60, 0x15d9c80, indexNGBCSprites_Iori, 0x02 },
    { L"E+A - Extra Move 3", 0x15d9c80, 0x15d9ca0, indexNGBCSprites_Iori, 0x03 },
    { L"E+A - Extra Move 4", 0x15d9ca0, 0x15d9cc0, indexNGBCSprites_Iori, 0x04 },
    { L"E+A - Extra Move 5", 0x15d9cc0, 0x15d9ce0, indexNGBCSprites_Iori, 0x05 },
    { L"E+A - Extra Move 6", 0x15d9ce0, 0x15d9d00, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_EB[] =
{
    { L"Iori EB", 0x15d9d00, 0x15d9d20, indexNGBCSprites_Iori },
    { L"E+B - Super Trail", 0x15d9d20, 0x15d9d40, indexNGBCSprites_Iori, 0x00 },
    { L"E+B - Extra Move 1", 0x15d9d40, 0x15d9d60, indexNGBCSprites_Iori, 0x01 },
    { L"E+B - Extra Move 2", 0x15d9d60, 0x15d9d80, indexNGBCSprites_Iori, 0x02 },
    { L"E+B - Extra Move 3", 0x15d9d80, 0x15d9da0, indexNGBCSprites_Iori, 0x03 },
    { L"E+B - Extra Move 4", 0x15d9da0, 0x15d9dc0, indexNGBCSprites_Iori, 0x04 },
    { L"E+B - Extra Move 5", 0x15d9dc0, 0x15d9de0, indexNGBCSprites_Iori, 0x05 },
    { L"E+B - Extra Move 6", 0x15d9de0, 0x15d9e00, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_EC[] =
{
    { L"Iori EC", 0x15d9e00, 0x15d9e20, indexNGBCSprites_Iori },
    { L"E+C - Super Trail", 0x15d9e20, 0x15d9e40, indexNGBCSprites_Iori, 0x00 },
    { L"E+C - Extra Move 1", 0x15d9e40, 0x15d9e60, indexNGBCSprites_Iori, 0x01 },
    { L"E+C - Extra Move 2", 0x15d9e60, 0x15d9e80, indexNGBCSprites_Iori, 0x02 },
    { L"E+C - Extra Move 3", 0x15d9e80, 0x15d9ea0, indexNGBCSprites_Iori, 0x03 },
    { L"E+C - Extra Move 4", 0x15d9ea0, 0x15d9ec0, indexNGBCSprites_Iori, 0x04 },
    { L"E+C - Extra Move 5", 0x15d9ec0, 0x15d9ee0, indexNGBCSprites_Iori, 0x05 },
    { L"E+C - Extra Move 6", 0x15d9ee0, 0x15d9f00, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_ED[] =
{
    { L"Iori ED", 0x15d9f00, 0x15d9f20, indexNGBCSprites_Iori },
    { L"E+D - Super Trail", 0x15d9f20, 0x15d9f40, indexNGBCSprites_Iori, 0x00 },
    { L"E+D - Extra Move 1", 0x15d9f40, 0x15d9f60, indexNGBCSprites_Iori, 0x01 },
    { L"E+D - Extra Move 2", 0x15d9f60, 0x15d9f80, indexNGBCSprites_Iori, 0x02 },
    { L"E+D - Extra Move 3", 0x15d9f80, 0x15d9fa0, indexNGBCSprites_Iori, 0x03 },
    { L"E+D - Extra Move 4", 0x15d9fa0, 0x15d9fc0, indexNGBCSprites_Iori, 0x04 },
    { L"E+D - Extra Move 5", 0x15d9fc0, 0x15d9fe0, indexNGBCSprites_Iori, 0x05 },
    { L"E+D - Extra Move 6", 0x15d9fe0, 0x15da000, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_SA[] =
{
    { L"Iori SA", 0x15da000, 0x15da020, indexNGBCSprites_Iori },
    { L"Start+A - Super Trail", 0x15da020, 0x15da040, indexNGBCSprites_Iori, 0x00 },
    { L"Start+A - Extra Move 1", 0x15da040, 0x15da060, indexNGBCSprites_Iori, 0x01 },
    { L"Start+A - Extra Move 2", 0x15da060, 0x15da080, indexNGBCSprites_Iori, 0x02 },
    { L"Start+A - Extra Move 3", 0x15da080, 0x15da0a0, indexNGBCSprites_Iori, 0x03 },
    { L"Start+A - Extra Move 4", 0x15da0a0, 0x15da0c0, indexNGBCSprites_Iori, 0x04 },
    { L"Start+A - Extra Move 5", 0x15da0c0, 0x15da0e0, indexNGBCSprites_Iori, 0x05 },
    { L"Start+A - Extra Move 6", 0x15da0e0, 0x15da100, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_SB[] =
{
    { L"Iori SB", 0x15da100, 0x15da120, indexNGBCSprites_Iori },
    { L"Start+B - Super Trail", 0x15da120, 0x15da140, indexNGBCSprites_Iori, 0x00 },
    { L"Start+B - Extra Move 1", 0x15da140, 0x15da160, indexNGBCSprites_Iori, 0x01 },
    { L"Start+B - Extra Move 2", 0x15da160, 0x15da180, indexNGBCSprites_Iori, 0x02 },
    { L"Start+B - Extra Move 3", 0x15da180, 0x15da1a0, indexNGBCSprites_Iori, 0x03 },
    { L"Start+B - Extra Move 4", 0x15da1a0, 0x15da1c0, indexNGBCSprites_Iori, 0x04 },
    { L"Start+B - Extra Move 5", 0x15da1c0, 0x15da1e0, indexNGBCSprites_Iori, 0x05 },
    { L"Start+B - Extra Move 6", 0x15da1e0, 0x15da200, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_SC[] =
{
    { L"Iori SC", 0x15da200, 0x15da220, indexNGBCSprites_Iori },
    { L"Start+C - Super Trail", 0x15da220, 0x15da240, indexNGBCSprites_Iori, 0x00 },
    { L"Start+C - Extra Move 1", 0x15da240, 0x15da260, indexNGBCSprites_Iori, 0x01 },
    { L"Start+C - Extra Move 2", 0x15da260, 0x15da280, indexNGBCSprites_Iori, 0x02 },
    { L"Start+C - Extra Move 3", 0x15da280, 0x15da2a0, indexNGBCSprites_Iori, 0x03 },
    { L"Start+C - Extra Move 4", 0x15da2a0, 0x15da2c0, indexNGBCSprites_Iori, 0x04 },
    { L"Start+C - Extra Move 5", 0x15da2c0, 0x15da2e0, indexNGBCSprites_Iori, 0x05 },
    { L"Start+C - Extra Move 6", 0x15da2e0, 0x15da300, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_IORI_PALETTES_SD[] =
{
    { L"Iori SD", 0x15da300, 0x15da320, indexNGBCSprites_Iori },
    { L"Start+D - Super Trail", 0x15da320, 0x15da340, indexNGBCSprites_Iori, 0x00 },
    { L"Start+D - Extra Move 1", 0x15da340, 0x15da360, indexNGBCSprites_Iori, 0x01 },
    { L"Start+D - Extra Move 2", 0x15da360, 0x15da380, indexNGBCSprites_Iori, 0x02 },
    { L"Start+D - Extra Move 3", 0x15da380, 0x15da3a0, indexNGBCSprites_Iori, 0x03 },
    { L"Start+D - Extra Move 4", 0x15da3a0, 0x15da3c0, indexNGBCSprites_Iori, 0x04 },
    { L"Start+D - Extra Move 5", 0x15da3c0, 0x15da3e0, indexNGBCSprites_Iori, 0x05 },
    { L"Start+D - Extra Move 6", 0x15da3e0, 0x15da400, indexNGBCSprites_Iori, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_A[] =
{
    { L"Mr. Karate A", 0x17cb000, 0x17cb020, indexNGBCSprites_MrKarate },
    { L"A - Super Trail", 0x17cb020, 0x17cb040, indexNGBCSprites_MrKarate, 0x00 },
    { L"A - Extra Move 1", 0x17cb040, 0x17cb060, indexNGBCSprites_MrKarate, 0x01 },
    { L"A - Extra Move 2", 0x17cb060, 0x17cb080, indexNGBCSprites_MrKarate, 0x02 },
    { L"A - Extra Move 3", 0x17cb080, 0x17cb0a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"A - Extra Move 4", 0x17cb0a0, 0x17cb0c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"A - Extra Move 5", 0x17cb0c0, 0x17cb0e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"A - Extra Move 6", 0x17cb0e0, 0x17cb100, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_B[] =
{
    { L"Mr. Karate B", 0x17cb100, 0x17cb120, indexNGBCSprites_MrKarate },
    { L"B - Super Trail", 0x17cb120, 0x17cb140, indexNGBCSprites_MrKarate, 0x00 },
    { L"B - Extra Move 1", 0x17cb140, 0x17cb160, indexNGBCSprites_MrKarate, 0x01 },
    { L"B - Extra Move 2", 0x17cb160, 0x17cb180, indexNGBCSprites_MrKarate, 0x02 },
    { L"B - Extra Move 3", 0x17cb180, 0x17cb1a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"B - Extra Move 4", 0x17cb1a0, 0x17cb1c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"B - Extra Move 5", 0x17cb1c0, 0x17cb1e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"B - Extra Move 6", 0x17cb1e0, 0x17cb200, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_C[] =
{
    { L"Mr. Karate C", 0x17cb200, 0x17cb220, indexNGBCSprites_MrKarate },
    { L"C - Super Trail", 0x17cb220, 0x17cb240, indexNGBCSprites_MrKarate, 0x00 },
    { L"C - Extra Move 1", 0x17cb240, 0x17cb260, indexNGBCSprites_MrKarate, 0x01 },
    { L"C - Extra Move 2", 0x17cb260, 0x17cb280, indexNGBCSprites_MrKarate, 0x02 },
    { L"C - Extra Move 3", 0x17cb280, 0x17cb2a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"C - Extra Move 4", 0x17cb2a0, 0x17cb2c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"C - Extra Move 5", 0x17cb2c0, 0x17cb2e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"C - Extra Move 6", 0x17cb2e0, 0x17cb300, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_D[] =
{
    { L"Mr. Karate D", 0x17cb300, 0x17cb320, indexNGBCSprites_MrKarate },
    { L"D - Super Trail", 0x17cb320, 0x17cb340, indexNGBCSprites_MrKarate, 0x00 },
    { L"D - Extra Move 1", 0x17cb340, 0x17cb360, indexNGBCSprites_MrKarate, 0x01 },
    { L"D - Extra Move 2", 0x17cb360, 0x17cb380, indexNGBCSprites_MrKarate, 0x02 },
    { L"D - Extra Move 3", 0x17cb380, 0x17cb3a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"D - Extra Move 4", 0x17cb3a0, 0x17cb3c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"D - Extra Move 5", 0x17cb3c0, 0x17cb3e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"D - Extra Move 6", 0x17cb3e0, 0x17cb400, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_EA[] =
{
    { L"Mr. Karate EA", 0x17cb400, 0x17cb420, indexNGBCSprites_MrKarate },
    { L"E+A - Super Trail", 0x17cb420, 0x17cb440, indexNGBCSprites_MrKarate, 0x00 },
    { L"E+A - Extra Move 1", 0x17cb440, 0x17cb460, indexNGBCSprites_MrKarate, 0x01 },
    { L"E+A - Extra Move 2", 0x17cb460, 0x17cb480, indexNGBCSprites_MrKarate, 0x02 },
    { L"E+A - Extra Move 3", 0x17cb480, 0x17cb4a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"E+A - Extra Move 4", 0x17cb4a0, 0x17cb4c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"E+A - Extra Move 5", 0x17cb4c0, 0x17cb4e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"E+A - Extra Move 6", 0x17cb4e0, 0x17cb500, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_EB[] =
{
    { L"Mr. Karate EB", 0x17cb500, 0x17cb520, indexNGBCSprites_MrKarate },
    { L"E+B - Super Trail", 0x17cb520, 0x17cb540, indexNGBCSprites_MrKarate, 0x00 },
    { L"E+B - Extra Move 1", 0x17cb540, 0x17cb560, indexNGBCSprites_MrKarate, 0x01 },
    { L"E+B - Extra Move 2", 0x17cb560, 0x17cb580, indexNGBCSprites_MrKarate, 0x02 },
    { L"E+B - Extra Move 3", 0x17cb580, 0x17cb5a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"E+B - Extra Move 4", 0x17cb5a0, 0x17cb5c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"E+B - Extra Move 5", 0x17cb5c0, 0x17cb5e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"E+B - Extra Move 6", 0x17cb5e0, 0x17cb600, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_EC[] =
{
    { L"Mr. Karate EC", 0x17cb600, 0x17cb620, indexNGBCSprites_MrKarate },
    { L"E+C - Super Trail", 0x17cb620, 0x17cb640, indexNGBCSprites_MrKarate, 0x00 },
    { L"E+C - Extra Move 1", 0x17cb640, 0x17cb660, indexNGBCSprites_MrKarate, 0x01 },
    { L"E+C - Extra Move 2", 0x17cb660, 0x17cb680, indexNGBCSprites_MrKarate, 0x02 },
    { L"E+C - Extra Move 3", 0x17cb680, 0x17cb6a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"E+C - Extra Move 4", 0x17cb6a0, 0x17cb6c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"E+C - Extra Move 5", 0x17cb6c0, 0x17cb6e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"E+C - Extra Move 6", 0x17cb6e0, 0x17cb700, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_ED[] =
{
    { L"Mr. Karate ED", 0x17cb700, 0x17cb720, indexNGBCSprites_MrKarate },
    { L"E+D - Super Trail", 0x17cb720, 0x17cb740, indexNGBCSprites_MrKarate, 0x00 },
    { L"E+D - Extra Move 1", 0x17cb740, 0x17cb760, indexNGBCSprites_MrKarate, 0x01 },
    { L"E+D - Extra Move 2", 0x17cb760, 0x17cb780, indexNGBCSprites_MrKarate, 0x02 },
    { L"E+D - Extra Move 3", 0x17cb780, 0x17cb7a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"E+D - Extra Move 4", 0x17cb7a0, 0x17cb7c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"E+D - Extra Move 5", 0x17cb7c0, 0x17cb7e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"E+D - Extra Move 6", 0x17cb7e0, 0x17cb800, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_SA[] =
{
    { L"Mr. Karate SA", 0x17cb800, 0x17cb820, indexNGBCSprites_MrKarate },
    { L"Start+A - Super Trail", 0x17cb820, 0x17cb840, indexNGBCSprites_MrKarate, 0x00 },
    { L"Start+A - Extra Move 1", 0x17cb840, 0x17cb860, indexNGBCSprites_MrKarate, 0x01 },
    { L"Start+A - Extra Move 2", 0x17cb860, 0x17cb880, indexNGBCSprites_MrKarate, 0x02 },
    { L"Start+A - Extra Move 3", 0x17cb880, 0x17cb8a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"Start+A - Extra Move 4", 0x17cb8a0, 0x17cb8c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"Start+A - Extra Move 5", 0x17cb8c0, 0x17cb8e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"Start+A - Extra Move 6", 0x17cb8e0, 0x17cb900, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_SB[] =
{
    { L"Mr. Karate SB", 0x17cb900, 0x17cb920, indexNGBCSprites_MrKarate },
    { L"Start+B - Super Trail", 0x17cb920, 0x17cb940, indexNGBCSprites_MrKarate, 0x00 },
    { L"Start+B - Extra Move 1", 0x17cb940, 0x17cb960, indexNGBCSprites_MrKarate, 0x01 },
    { L"Start+B - Extra Move 2", 0x17cb960, 0x17cb980, indexNGBCSprites_MrKarate, 0x02 },
    { L"Start+B - Extra Move 3", 0x17cb980, 0x17cb9a0, indexNGBCSprites_MrKarate, 0x03 },
    { L"Start+B - Extra Move 4", 0x17cb9a0, 0x17cb9c0, indexNGBCSprites_MrKarate, 0x04 },
    { L"Start+B - Extra Move 5", 0x17cb9c0, 0x17cb9e0, indexNGBCSprites_MrKarate, 0x05 },
    { L"Start+B - Extra Move 6", 0x17cb9e0, 0x17cba00, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_SC[] =
{
    { L"Mr. Karate SC", 0x17cba00, 0x17cba20, indexNGBCSprites_MrKarate },
    { L"Start+C - Super Trail", 0x17cba20, 0x17cba40, indexNGBCSprites_MrKarate, 0x00 },
    { L"Start+C - Extra Move 1", 0x17cba40, 0x17cba60, indexNGBCSprites_MrKarate, 0x01 },
    { L"Start+C - Extra Move 2", 0x17cba60, 0x17cba80, indexNGBCSprites_MrKarate, 0x02 },
    { L"Start+C - Extra Move 3", 0x17cba80, 0x17cbaa0, indexNGBCSprites_MrKarate, 0x03 },
    { L"Start+C - Extra Move 4", 0x17cbaa0, 0x17cbac0, indexNGBCSprites_MrKarate, 0x04 },
    { L"Start+C - Extra Move 5", 0x17cbac0, 0x17cbae0, indexNGBCSprites_MrKarate, 0x05 },
    { L"Start+C - Extra Move 6", 0x17cbae0, 0x17cbb00, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRKARATE_PALETTES_SD[] =
{
    { L"Mr. Karate SD", 0x17cbb00, 0x17cbb20, indexNGBCSprites_MrKarate },
    { L"Start+D - Super Trail", 0x17cbb20, 0x17cbb40, indexNGBCSprites_MrKarate, 0x00 },
    { L"Start+D - Extra Move 1", 0x17cbb40, 0x17cbb60, indexNGBCSprites_MrKarate, 0x01 },
    { L"Start+D - Extra Move 2", 0x17cbb60, 0x17cbb80, indexNGBCSprites_MrKarate, 0x02 },
    { L"Start+D - Extra Move 3", 0x17cbb80, 0x17cbba0, indexNGBCSprites_MrKarate, 0x03 },
    { L"Start+D - Extra Move 4", 0x17cbba0, 0x17cbbc0, indexNGBCSprites_MrKarate, 0x04 },
    { L"Start+D - Extra Move 5", 0x17cbbc0, 0x17cbbe0, indexNGBCSprites_MrKarate, 0x05 },
    { L"Start+D - Extra Move 6", 0x17cbbe0, 0x17cbc00, indexNGBCSprites_MrKarate, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_A[] =
{
    { L"Terry A", 0x190a000, 0x190a020, indexNGBCSprites_Terry },
    { L"A - Super Trail", 0x190a020, 0x190a040, indexNGBCSprites_Terry, 0x00 },
    { L"A - Extra Move 1", 0x190a040, 0x190a060, indexNGBCSprites_Terry, 0x01 },
    { L"A - Extra Move 2", 0x190a060, 0x190a080, indexNGBCSprites_Terry, 0x02 },
    { L"A - Extra Move 3", 0x190a080, 0x190a0a0, indexNGBCSprites_Terry, 0x03 },
    { L"A - Extra Move 4", 0x190a0a0, 0x190a0c0, indexNGBCSprites_Terry, 0x04 },
    { L"A - Extra Move 5", 0x190a0c0, 0x190a0e0, indexNGBCSprites_Terry, 0x05 },
    { L"A - Extra Move 6", 0x190a0e0, 0x190a100, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_B[] =
{
    { L"Terry B", 0x190a100, 0x190a120, indexNGBCSprites_Terry },
    { L"B - Super Trail", 0x190a120, 0x190a140, indexNGBCSprites_Terry, 0x00 },
    { L"B - Extra Move 1", 0x190a140, 0x190a160, indexNGBCSprites_Terry, 0x01 },
    { L"B - Extra Move 2", 0x190a160, 0x190a180, indexNGBCSprites_Terry, 0x02 },
    { L"B - Extra Move 3", 0x190a180, 0x190a1a0, indexNGBCSprites_Terry, 0x03 },
    { L"B - Extra Move 4", 0x190a1a0, 0x190a1c0, indexNGBCSprites_Terry, 0x04 },
    { L"B - Extra Move 5", 0x190a1c0, 0x190a1e0, indexNGBCSprites_Terry, 0x05 },
    { L"B - Extra Move 6", 0x190a1e0, 0x190a200, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_C[] =
{
    { L"Terry C", 0x190a200, 0x190a220, indexNGBCSprites_Terry },
    { L"C - Super Trail", 0x190a220, 0x190a240, indexNGBCSprites_Terry, 0x00 },
    { L"C - Extra Move 1", 0x190a240, 0x190a260, indexNGBCSprites_Terry, 0x01 },
    { L"C - Extra Move 2", 0x190a260, 0x190a280, indexNGBCSprites_Terry, 0x02 },
    { L"C - Extra Move 3", 0x190a280, 0x190a2a0, indexNGBCSprites_Terry, 0x03 },
    { L"C - Extra Move 4", 0x190a2a0, 0x190a2c0, indexNGBCSprites_Terry, 0x04 },
    { L"C - Extra Move 5", 0x190a2c0, 0x190a2e0, indexNGBCSprites_Terry, 0x05 },
    { L"C - Extra Move 6", 0x190a2e0, 0x190a300, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_D[] =
{
    { L"Terry D", 0x190a300, 0x190a320, indexNGBCSprites_Terry },
    { L"D - Super Trail", 0x190a320, 0x190a340, indexNGBCSprites_Terry, 0x00 },
    { L"D - Extra Move 1", 0x190a340, 0x190a360, indexNGBCSprites_Terry, 0x01 },
    { L"D - Extra Move 2", 0x190a360, 0x190a380, indexNGBCSprites_Terry, 0x02 },
    { L"D - Extra Move 3", 0x190a380, 0x190a3a0, indexNGBCSprites_Terry, 0x03 },
    { L"D - Extra Move 4", 0x190a3a0, 0x190a3c0, indexNGBCSprites_Terry, 0x04 },
    { L"D - Extra Move 5", 0x190a3c0, 0x190a3e0, indexNGBCSprites_Terry, 0x05 },
    { L"D - Extra Move 6", 0x190a3e0, 0x190a400, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_EA[] =
{
    { L"Terry EA", 0x190a400, 0x190a420, indexNGBCSprites_Terry },
    { L"E+A - Super Trail", 0x190a420, 0x190a440, indexNGBCSprites_Terry, 0x00 },
    { L"E+A - Extra Move 1", 0x190a440, 0x190a460, indexNGBCSprites_Terry, 0x01 },
    { L"E+A - Extra Move 2", 0x190a460, 0x190a480, indexNGBCSprites_Terry, 0x02 },
    { L"E+A - Extra Move 3", 0x190a480, 0x190a4a0, indexNGBCSprites_Terry, 0x03 },
    { L"E+A - Extra Move 4", 0x190a4a0, 0x190a4c0, indexNGBCSprites_Terry, 0x04 },
    { L"E+A - Extra Move 5", 0x190a4c0, 0x190a4e0, indexNGBCSprites_Terry, 0x05 },
    { L"E+A - Extra Move 6", 0x190a4e0, 0x190a500, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_EB[] =
{
    { L"Terry EB", 0x190a500, 0x190a520, indexNGBCSprites_Terry },
    { L"E+B - Super Trail", 0x190a520, 0x190a540, indexNGBCSprites_Terry, 0x00 },
    { L"E+B - Extra Move 1", 0x190a540, 0x190a560, indexNGBCSprites_Terry, 0x01 },
    { L"E+B - Extra Move 2", 0x190a560, 0x190a580, indexNGBCSprites_Terry, 0x02 },
    { L"E+B - Extra Move 3", 0x190a580, 0x190a5a0, indexNGBCSprites_Terry, 0x03 },
    { L"E+B - Extra Move 4", 0x190a5a0, 0x190a5c0, indexNGBCSprites_Terry, 0x04 },
    { L"E+B - Extra Move 5", 0x190a5c0, 0x190a5e0, indexNGBCSprites_Terry, 0x05 },
    { L"E+B - Extra Move 6", 0x190a5e0, 0x190a600, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_EC[] =
{
    { L"Terry EC", 0x190a600, 0x190a620, indexNGBCSprites_Terry },
    { L"E+C - Super Trail", 0x190a620, 0x190a640, indexNGBCSprites_Terry, 0x00 },
    { L"E+C - Extra Move 1", 0x190a640, 0x190a660, indexNGBCSprites_Terry, 0x01 },
    { L"E+C - Extra Move 2", 0x190a660, 0x190a680, indexNGBCSprites_Terry, 0x02 },
    { L"E+C - Extra Move 3", 0x190a680, 0x190a6a0, indexNGBCSprites_Terry, 0x03 },
    { L"E+C - Extra Move 4", 0x190a6a0, 0x190a6c0, indexNGBCSprites_Terry, 0x04 },
    { L"E+C - Extra Move 5", 0x190a6c0, 0x190a6e0, indexNGBCSprites_Terry, 0x05 },
    { L"E+C - Extra Move 6", 0x190a6e0, 0x190a700, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_ED[] =
{
    { L"Terry ED", 0x190a700, 0x190a720, indexNGBCSprites_Terry },
    { L"E+D - Super Trail", 0x190a720, 0x190a740, indexNGBCSprites_Terry, 0x00 },
    { L"E+D - Extra Move 1", 0x190a740, 0x190a760, indexNGBCSprites_Terry, 0x01 },
    { L"E+D - Extra Move 2", 0x190a760, 0x190a780, indexNGBCSprites_Terry, 0x02 },
    { L"E+D - Extra Move 3", 0x190a780, 0x190a7a0, indexNGBCSprites_Terry, 0x03 },
    { L"E+D - Extra Move 4", 0x190a7a0, 0x190a7c0, indexNGBCSprites_Terry, 0x04 },
    { L"E+D - Extra Move 5", 0x190a7c0, 0x190a7e0, indexNGBCSprites_Terry, 0x05 },
    { L"E+D - Extra Move 6", 0x190a7e0, 0x190a800, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_SA[] =
{
    { L"Terry SA", 0x190a800, 0x190a820, indexNGBCSprites_Terry },
    { L"Start+A - Super Trail", 0x190a820, 0x190a840, indexNGBCSprites_Terry, 0x00 },
    { L"Start+A - Extra Move 1", 0x190a840, 0x190a860, indexNGBCSprites_Terry, 0x01 },
    { L"Start+A - Extra Move 2", 0x190a860, 0x190a880, indexNGBCSprites_Terry, 0x02 },
    { L"Start+A - Extra Move 3", 0x190a880, 0x190a8a0, indexNGBCSprites_Terry, 0x03 },
    { L"Start+A - Extra Move 4", 0x190a8a0, 0x190a8c0, indexNGBCSprites_Terry, 0x04 },
    { L"Start+A - Extra Move 5", 0x190a8c0, 0x190a8e0, indexNGBCSprites_Terry, 0x05 },
    { L"Start+A - Extra Move 6", 0x190a8e0, 0x190a900, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_SB[] =
{
    { L"Terry SB", 0x190a900, 0x190a920, indexNGBCSprites_Terry },
    { L"Start+B - Super Trail", 0x190a920, 0x190a940, indexNGBCSprites_Terry, 0x00 },
    { L"Start+B - Extra Move 1", 0x190a940, 0x190a960, indexNGBCSprites_Terry, 0x01 },
    { L"Start+B - Extra Move 2", 0x190a960, 0x190a980, indexNGBCSprites_Terry, 0x02 },
    { L"Start+B - Extra Move 3", 0x190a980, 0x190a9a0, indexNGBCSprites_Terry, 0x03 },
    { L"Start+B - Extra Move 4", 0x190a9a0, 0x190a9c0, indexNGBCSprites_Terry, 0x04 },
    { L"Start+B - Extra Move 5", 0x190a9c0, 0x190a9e0, indexNGBCSprites_Terry, 0x05 },
    { L"Start+B - Extra Move 6", 0x190a9e0, 0x190aa00, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_SC[] =
{
    { L"Terry SC", 0x190aa00, 0x190aa20, indexNGBCSprites_Terry },
    { L"Start+C - Super Trail", 0x190aa20, 0x190aa40, indexNGBCSprites_Terry, 0x00 },
    { L"Start+C - Extra Move 1", 0x190aa40, 0x190aa60, indexNGBCSprites_Terry, 0x01 },
    { L"Start+C - Extra Move 2", 0x190aa60, 0x190aa80, indexNGBCSprites_Terry, 0x02 },
    { L"Start+C - Extra Move 3", 0x190aa80, 0x190aaa0, indexNGBCSprites_Terry, 0x03 },
    { L"Start+C - Extra Move 4", 0x190aaa0, 0x190aac0, indexNGBCSprites_Terry, 0x04 },
    { L"Start+C - Extra Move 5", 0x190aac0, 0x190aae0, indexNGBCSprites_Terry, 0x05 },
    { L"Start+C - Extra Move 6", 0x190aae0, 0x190ab00, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TERRY_PALETTES_SD[] =
{
    { L"Terry SD", 0x190ab00, 0x190ab20, indexNGBCSprites_Terry },
    { L"Start+D - Super Trail", 0x190ab20, 0x190ab40, indexNGBCSprites_Terry, 0x00 },
    { L"Start+D - Extra Move 1", 0x190ab40, 0x190ab60, indexNGBCSprites_Terry, 0x01 },
    { L"Start+D - Extra Move 2", 0x190ab60, 0x190ab80, indexNGBCSprites_Terry, 0x02 },
    { L"Start+D - Extra Move 3", 0x190ab80, 0x190aba0, indexNGBCSprites_Terry, 0x03 },
    { L"Start+D - Extra Move 4", 0x190aba0, 0x190abc0, indexNGBCSprites_Terry, 0x04 },
    { L"Start+D - Extra Move 5", 0x190abc0, 0x190abe0, indexNGBCSprites_Terry, 0x05 },
    { L"Start+D - Extra Move 6", 0x190abe0, 0x190ac00, indexNGBCSprites_Terry, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_A[] =
{
    { L"Haohmaru A", 0x1aa8800, 0x1aa8820, indexNGBCSprites_Haohmaru },
    { L"A - Super Trail", 0x1aa8820, 0x1aa8840, indexNGBCSprites_Haohmaru, 0x00 },
    { L"A - Extra Move 1", 0x1aa8840, 0x1aa8860, indexNGBCSprites_Haohmaru, 0x01 },
    { L"A - Extra Move 2", 0x1aa8860, 0x1aa8880, indexNGBCSprites_Haohmaru, 0x02 },
    { L"A - Extra Move 3", 0x1aa8880, 0x1aa88a0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"A - Extra Move 4", 0x1aa88a0, 0x1aa88c0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"A - Extra Move 5", 0x1aa88c0, 0x1aa88e0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"A - Extra Move 6", 0x1aa88e0, 0x1aa8900, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_B[] =
{
    { L"Haohmaru B", 0x1aa8900, 0x1aa8920, indexNGBCSprites_Haohmaru },
    { L"B - Super Trail", 0x1aa8920, 0x1aa8940, indexNGBCSprites_Haohmaru, 0x00 },
    { L"B - Extra Move 1", 0x1aa8940, 0x1aa8960, indexNGBCSprites_Haohmaru, 0x01 },
    { L"B - Extra Move 2", 0x1aa8960, 0x1aa8980, indexNGBCSprites_Haohmaru, 0x02 },
    { L"B - Extra Move 3", 0x1aa8980, 0x1aa89a0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"B - Extra Move 4", 0x1aa89a0, 0x1aa89c0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"B - Extra Move 5", 0x1aa89c0, 0x1aa89e0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"B - Extra Move 6", 0x1aa89e0, 0x1aa8a00, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_C[] =
{
    { L"Haohmaru C", 0x1aa8a00, 0x1aa8a20, indexNGBCSprites_Haohmaru },
    { L"C - Super Trail", 0x1aa8a20, 0x1aa8a40, indexNGBCSprites_Haohmaru, 0x00 },
    { L"C - Extra Move 1", 0x1aa8a40, 0x1aa8a60, indexNGBCSprites_Haohmaru, 0x01 },
    { L"C - Extra Move 2", 0x1aa8a60, 0x1aa8a80, indexNGBCSprites_Haohmaru, 0x02 },
    { L"C - Extra Move 3", 0x1aa8a80, 0x1aa8aa0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"C - Extra Move 4", 0x1aa8aa0, 0x1aa8ac0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"C - Extra Move 5", 0x1aa8ac0, 0x1aa8ae0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"C - Extra Move 6", 0x1aa8ae0, 0x1aa8b00, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_D[] =
{
    { L"Haohmaru D", 0x1aa8b00, 0x1aa8b20, indexNGBCSprites_Haohmaru },
    { L"D - Super Trail", 0x1aa8b20, 0x1aa8b40, indexNGBCSprites_Haohmaru, 0x00 },
    { L"D - Extra Move 1", 0x1aa8b40, 0x1aa8b60, indexNGBCSprites_Haohmaru, 0x01 },
    { L"D - Extra Move 2", 0x1aa8b60, 0x1aa8b80, indexNGBCSprites_Haohmaru, 0x02 },
    { L"D - Extra Move 3", 0x1aa8b80, 0x1aa8ba0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"D - Extra Move 4", 0x1aa8ba0, 0x1aa8bc0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"D - Extra Move 5", 0x1aa8bc0, 0x1aa8be0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"D - Extra Move 6", 0x1aa8be0, 0x1aa8c00, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_EA[] =
{
    { L"Haohmaru EA", 0x1aa8c00, 0x1aa8c20, indexNGBCSprites_Haohmaru },
    { L"E+A - Super Trail", 0x1aa8c20, 0x1aa8c40, indexNGBCSprites_Haohmaru, 0x00 },
    { L"E+A - Extra Move 1", 0x1aa8c40, 0x1aa8c60, indexNGBCSprites_Haohmaru, 0x01 },
    { L"E+A - Extra Move 2", 0x1aa8c60, 0x1aa8c80, indexNGBCSprites_Haohmaru, 0x02 },
    { L"E+A - Extra Move 3", 0x1aa8c80, 0x1aa8ca0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"E+A - Extra Move 4", 0x1aa8ca0, 0x1aa8cc0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"E+A - Extra Move 5", 0x1aa8cc0, 0x1aa8ce0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"E+A - Extra Move 6", 0x1aa8ce0, 0x1aa8d00, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_EB[] =
{
    { L"Haohmaru EB", 0x1aa8d00, 0x1aa8d20, indexNGBCSprites_Haohmaru },
    { L"E+B - Super Trail", 0x1aa8d20, 0x1aa8d40, indexNGBCSprites_Haohmaru, 0x00 },
    { L"E+B - Extra Move 1", 0x1aa8d40, 0x1aa8d60, indexNGBCSprites_Haohmaru, 0x01 },
    { L"E+B - Extra Move 2", 0x1aa8d60, 0x1aa8d80, indexNGBCSprites_Haohmaru, 0x02 },
    { L"E+B - Extra Move 3", 0x1aa8d80, 0x1aa8da0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"E+B - Extra Move 4", 0x1aa8da0, 0x1aa8dc0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"E+B - Extra Move 5", 0x1aa8dc0, 0x1aa8de0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"E+B - Extra Move 6", 0x1aa8de0, 0x1aa8e00, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_EC[] =
{
    { L"Haohmaru EC", 0x1aa8e00, 0x1aa8e20, indexNGBCSprites_Haohmaru },
    { L"E+C - Super Trail", 0x1aa8e20, 0x1aa8e40, indexNGBCSprites_Haohmaru, 0x00 },
    { L"E+C - Extra Move 1", 0x1aa8e40, 0x1aa8e60, indexNGBCSprites_Haohmaru, 0x01 },
    { L"E+C - Extra Move 2", 0x1aa8e60, 0x1aa8e80, indexNGBCSprites_Haohmaru, 0x02 },
    { L"E+C - Extra Move 3", 0x1aa8e80, 0x1aa8ea0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"E+C - Extra Move 4", 0x1aa8ea0, 0x1aa8ec0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"E+C - Extra Move 5", 0x1aa8ec0, 0x1aa8ee0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"E+C - Extra Move 6", 0x1aa8ee0, 0x1aa8f00, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_ED[] =
{
    { L"Haohmaru ED", 0x1aa8f00, 0x1aa8f20, indexNGBCSprites_Haohmaru },
    { L"E+D - Super Trail", 0x1aa8f20, 0x1aa8f40, indexNGBCSprites_Haohmaru, 0x00 },
    { L"E+D - Extra Move 1", 0x1aa8f40, 0x1aa8f60, indexNGBCSprites_Haohmaru, 0x01 },
    { L"E+D - Extra Move 2", 0x1aa8f60, 0x1aa8f80, indexNGBCSprites_Haohmaru, 0x02 },
    { L"E+D - Extra Move 3", 0x1aa8f80, 0x1aa8fa0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"E+D - Extra Move 4", 0x1aa8fa0, 0x1aa8fc0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"E+D - Extra Move 5", 0x1aa8fc0, 0x1aa8fe0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"E+D - Extra Move 6", 0x1aa8fe0, 0x1aa9000, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_SA[] =
{
    { L"Haohmaru SA", 0x1aa9000, 0x1aa9020, indexNGBCSprites_Haohmaru },
    { L"Start+A - Super Trail", 0x1aa9020, 0x1aa9040, indexNGBCSprites_Haohmaru, 0x00 },
    { L"Start+A - Extra Move 1", 0x1aa9040, 0x1aa9060, indexNGBCSprites_Haohmaru, 0x01 },
    { L"Start+A - Extra Move 2", 0x1aa9060, 0x1aa9080, indexNGBCSprites_Haohmaru, 0x02 },
    { L"Start+A - Extra Move 3", 0x1aa9080, 0x1aa90a0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"Start+A - Extra Move 4", 0x1aa90a0, 0x1aa90c0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"Start+A - Extra Move 5", 0x1aa90c0, 0x1aa90e0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"Start+A - Extra Move 6", 0x1aa90e0, 0x1aa9100, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_SB[] =
{
    { L"Haohmaru SB", 0x1aa9100, 0x1aa9120, indexNGBCSprites_Haohmaru },
    { L"Start+B - Super Trail", 0x1aa9120, 0x1aa9140, indexNGBCSprites_Haohmaru, 0x00 },
    { L"Start+B - Extra Move 1", 0x1aa9140, 0x1aa9160, indexNGBCSprites_Haohmaru, 0x01 },
    { L"Start+B - Extra Move 2", 0x1aa9160, 0x1aa9180, indexNGBCSprites_Haohmaru, 0x02 },
    { L"Start+B - Extra Move 3", 0x1aa9180, 0x1aa91a0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"Start+B - Extra Move 4", 0x1aa91a0, 0x1aa91c0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"Start+B - Extra Move 5", 0x1aa91c0, 0x1aa91e0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"Start+B - Extra Move 6", 0x1aa91e0, 0x1aa9200, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_SC[] =
{
    { L"Haohmaru SC", 0x1aa9200, 0x1aa9220, indexNGBCSprites_Haohmaru },
    { L"Start+C - Super Trail", 0x1aa9220, 0x1aa9240, indexNGBCSprites_Haohmaru, 0x00 },
    { L"Start+C - Extra Move 1", 0x1aa9240, 0x1aa9260, indexNGBCSprites_Haohmaru, 0x01 },
    { L"Start+C - Extra Move 2", 0x1aa9260, 0x1aa9280, indexNGBCSprites_Haohmaru, 0x02 },
    { L"Start+C - Extra Move 3", 0x1aa9280, 0x1aa92a0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"Start+C - Extra Move 4", 0x1aa92a0, 0x1aa92c0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"Start+C - Extra Move 5", 0x1aa92c0, 0x1aa92e0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"Start+C - Extra Move 6", 0x1aa92e0, 0x1aa9300, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HAOHMARU_PALETTES_SD[] =
{
    { L"Haohmaru SD", 0x1aa9300, 0x1aa9320, indexNGBCSprites_Haohmaru },
    { L"Start+D - Super Trail", 0x1aa9320, 0x1aa9340, indexNGBCSprites_Haohmaru, 0x00 },
    { L"Start+D - Extra Move 1", 0x1aa9340, 0x1aa9360, indexNGBCSprites_Haohmaru, 0x01 },
    { L"Start+D - Extra Move 2", 0x1aa9360, 0x1aa9380, indexNGBCSprites_Haohmaru, 0x02 },
    { L"Start+D - Extra Move 3", 0x1aa9380, 0x1aa93a0, indexNGBCSprites_Haohmaru, 0x03 },
    { L"Start+D - Extra Move 4", 0x1aa93a0, 0x1aa93c0, indexNGBCSprites_Haohmaru, 0x04 },
    { L"Start+D - Extra Move 5", 0x1aa93c0, 0x1aa93e0, indexNGBCSprites_Haohmaru, 0x05 },
    { L"Start+D - Extra Move 6", 0x1aa93e0, 0x1aa9400, indexNGBCSprites_Haohmaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_A[] =
{
    { L"Genjuro A", 0x1c71000, 0x1c71020, indexNGBCSprites_Genjuro },
    { L"A - Super Trail", 0x1c71020, 0x1c71040, indexNGBCSprites_Genjuro, 0x00 },
    { L"A - Extra Move 1", 0x1c71040, 0x1c71060, indexNGBCSprites_Genjuro, 0x01 },
    { L"A - Extra Move 2", 0x1c71060, 0x1c71080, indexNGBCSprites_Genjuro, 0x02 },
    { L"A - Extra Move 3", 0x1c71080, 0x1c710a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"A - Extra Move 4", 0x1c710a0, 0x1c710c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"A - Extra Move 5", 0x1c710c0, 0x1c710e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"A - Extra Move 6", 0x1c710e0, 0x1c71100, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_B[] =
{
    { L"Genjuro B", 0x1c71100, 0x1c71120, indexNGBCSprites_Genjuro },
    { L"B - Super Trail", 0x1c71120, 0x1c71140, indexNGBCSprites_Genjuro, 0x00 },
    { L"B - Extra Move 1", 0x1c71140, 0x1c71160, indexNGBCSprites_Genjuro, 0x01 },
    { L"B - Extra Move 2", 0x1c71160, 0x1c71180, indexNGBCSprites_Genjuro, 0x02 },
    { L"B - Extra Move 3", 0x1c71180, 0x1c711a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"B - Extra Move 4", 0x1c711a0, 0x1c711c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"B - Extra Move 5", 0x1c711c0, 0x1c711e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"B - Extra Move 6", 0x1c711e0, 0x1c71200, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_C[] =
{
    { L"Genjuro C", 0x1c71200, 0x1c71220, indexNGBCSprites_Genjuro },
    { L"C - Super Trail", 0x1c71220, 0x1c71240, indexNGBCSprites_Genjuro, 0x00 },
    { L"C - Extra Move 1", 0x1c71240, 0x1c71260, indexNGBCSprites_Genjuro, 0x01 },
    { L"C - Extra Move 2", 0x1c71260, 0x1c71280, indexNGBCSprites_Genjuro, 0x02 },
    { L"C - Extra Move 3", 0x1c71280, 0x1c712a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"C - Extra Move 4", 0x1c712a0, 0x1c712c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"C - Extra Move 5", 0x1c712c0, 0x1c712e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"C - Extra Move 6", 0x1c712e0, 0x1c71300, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_D[] =
{
    { L"Genjuro D", 0x1c71300, 0x1c71320, indexNGBCSprites_Genjuro },
    { L"D - Super Trail", 0x1c71320, 0x1c71340, indexNGBCSprites_Genjuro, 0x00 },
    { L"D - Extra Move 1", 0x1c71340, 0x1c71360, indexNGBCSprites_Genjuro, 0x01 },
    { L"D - Extra Move 2", 0x1c71360, 0x1c71380, indexNGBCSprites_Genjuro, 0x02 },
    { L"D - Extra Move 3", 0x1c71380, 0x1c713a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"D - Extra Move 4", 0x1c713a0, 0x1c713c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"D - Extra Move 5", 0x1c713c0, 0x1c713e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"D - Extra Move 6", 0x1c713e0, 0x1c71400, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_EA[] =
{
    { L"Genjuro EA", 0x1c71400, 0x1c71420, indexNGBCSprites_Genjuro },
    { L"E+A - Super Trail", 0x1c71420, 0x1c71440, indexNGBCSprites_Genjuro, 0x00 },
    { L"E+A - Extra Move 1", 0x1c71440, 0x1c71460, indexNGBCSprites_Genjuro, 0x01 },
    { L"E+A - Extra Move 2", 0x1c71460, 0x1c71480, indexNGBCSprites_Genjuro, 0x02 },
    { L"E+A - Extra Move 3", 0x1c71480, 0x1c714a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"E+A - Extra Move 4", 0x1c714a0, 0x1c714c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"E+A - Extra Move 5", 0x1c714c0, 0x1c714e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"E+A - Extra Move 6", 0x1c714e0, 0x1c71500, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_EB[] =
{
    { L"Genjuro EB", 0x1c71500, 0x1c71520, indexNGBCSprites_Genjuro },
    { L"E+B - Super Trail", 0x1c71520, 0x1c71540, indexNGBCSprites_Genjuro, 0x00 },
    { L"E+B - Extra Move 1", 0x1c71540, 0x1c71560, indexNGBCSprites_Genjuro, 0x01 },
    { L"E+B - Extra Move 2", 0x1c71560, 0x1c71580, indexNGBCSprites_Genjuro, 0x02 },
    { L"E+B - Extra Move 3", 0x1c71580, 0x1c715a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"E+B - Extra Move 4", 0x1c715a0, 0x1c715c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"E+B - Extra Move 5", 0x1c715c0, 0x1c715e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"E+B - Extra Move 6", 0x1c715e0, 0x1c71600, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_EC[] =
{
    { L"Genjuro EC", 0x1c71600, 0x1c71620, indexNGBCSprites_Genjuro },
    { L"E+C - Super Trail", 0x1c71620, 0x1c71640, indexNGBCSprites_Genjuro, 0x00 },
    { L"E+C - Extra Move 1", 0x1c71640, 0x1c71660, indexNGBCSprites_Genjuro, 0x01 },
    { L"E+C - Extra Move 2", 0x1c71660, 0x1c71680, indexNGBCSprites_Genjuro, 0x02 },
    { L"E+C - Extra Move 3", 0x1c71680, 0x1c716a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"E+C - Extra Move 4", 0x1c716a0, 0x1c716c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"E+C - Extra Move 5", 0x1c716c0, 0x1c716e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"E+C - Extra Move 6", 0x1c716e0, 0x1c71700, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_ED[] =
{
    { L"Genjuro ED", 0x1c71700, 0x1c71720, indexNGBCSprites_Genjuro },
    { L"E+D - Super Trail", 0x1c71720, 0x1c71740, indexNGBCSprites_Genjuro, 0x00 },
    { L"E+D - Extra Move 1", 0x1c71740, 0x1c71760, indexNGBCSprites_Genjuro, 0x01 },
    { L"E+D - Extra Move 2", 0x1c71760, 0x1c71780, indexNGBCSprites_Genjuro, 0x02 },
    { L"E+D - Extra Move 3", 0x1c71780, 0x1c717a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"E+D - Extra Move 4", 0x1c717a0, 0x1c717c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"E+D - Extra Move 5", 0x1c717c0, 0x1c717e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"E+D - Extra Move 6", 0x1c717e0, 0x1c71800, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_SA[] =
{
    { L"Genjuro SA", 0x1c71800, 0x1c71820, indexNGBCSprites_Genjuro },
    { L"Start+A - Super Trail", 0x1c71820, 0x1c71840, indexNGBCSprites_Genjuro, 0x00 },
    { L"Start+A - Extra Move 1", 0x1c71840, 0x1c71860, indexNGBCSprites_Genjuro, 0x01 },
    { L"Start+A - Extra Move 2", 0x1c71860, 0x1c71880, indexNGBCSprites_Genjuro, 0x02 },
    { L"Start+A - Extra Move 3", 0x1c71880, 0x1c718a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"Start+A - Extra Move 4", 0x1c718a0, 0x1c718c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"Start+A - Extra Move 5", 0x1c718c0, 0x1c718e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"Start+A - Extra Move 6", 0x1c718e0, 0x1c71900, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_SB[] =
{
    { L"Genjuro SB", 0x1c71900, 0x1c71920, indexNGBCSprites_Genjuro },
    { L"Start+B - Super Trail", 0x1c71920, 0x1c71940, indexNGBCSprites_Genjuro, 0x00 },
    { L"Start+B - Extra Move 1", 0x1c71940, 0x1c71960, indexNGBCSprites_Genjuro, 0x01 },
    { L"Start+B - Extra Move 2", 0x1c71960, 0x1c71980, indexNGBCSprites_Genjuro, 0x02 },
    { L"Start+B - Extra Move 3", 0x1c71980, 0x1c719a0, indexNGBCSprites_Genjuro, 0x03 },
    { L"Start+B - Extra Move 4", 0x1c719a0, 0x1c719c0, indexNGBCSprites_Genjuro, 0x04 },
    { L"Start+B - Extra Move 5", 0x1c719c0, 0x1c719e0, indexNGBCSprites_Genjuro, 0x05 },
    { L"Start+B - Extra Move 6", 0x1c719e0, 0x1c71a00, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_SC[] =
{
    { L"Genjuro SC", 0x1c71a00, 0x1c71a20, indexNGBCSprites_Genjuro },
    { L"Start+C - Super Trail", 0x1c71a20, 0x1c71a40, indexNGBCSprites_Genjuro, 0x00 },
    { L"Start+C - Extra Move 1", 0x1c71a40, 0x1c71a60, indexNGBCSprites_Genjuro, 0x01 },
    { L"Start+C - Extra Move 2", 0x1c71a60, 0x1c71a80, indexNGBCSprites_Genjuro, 0x02 },
    { L"Start+C - Extra Move 3", 0x1c71a80, 0x1c71aa0, indexNGBCSprites_Genjuro, 0x03 },
    { L"Start+C - Extra Move 4", 0x1c71aa0, 0x1c71ac0, indexNGBCSprites_Genjuro, 0x04 },
    { L"Start+C - Extra Move 5", 0x1c71ac0, 0x1c71ae0, indexNGBCSprites_Genjuro, 0x05 },
    { L"Start+C - Extra Move 6", 0x1c71ae0, 0x1c71b00, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GENJURO_PALETTES_SD[] =
{
    { L"Genjuro SD", 0x1c71b00, 0x1c71b20, indexNGBCSprites_Genjuro },
    { L"Start+D - Super Trail", 0x1c71b20, 0x1c71b40, indexNGBCSprites_Genjuro, 0x00 },
    { L"Start+D - Extra Move 1", 0x1c71b40, 0x1c71b60, indexNGBCSprites_Genjuro, 0x01 },
    { L"Start+D - Extra Move 2", 0x1c71b60, 0x1c71b80, indexNGBCSprites_Genjuro, 0x02 },
    { L"Start+D - Extra Move 3", 0x1c71b80, 0x1c71ba0, indexNGBCSprites_Genjuro, 0x03 },
    { L"Start+D - Extra Move 4", 0x1c71ba0, 0x1c71bc0, indexNGBCSprites_Genjuro, 0x04 },
    { L"Start+D - Extra Move 5", 0x1c71bc0, 0x1c71be0, indexNGBCSprites_Genjuro, 0x05 },
    { L"Start+D - Extra Move 6", 0x1c71be0, 0x1c71c00, indexNGBCSprites_Genjuro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_A[] =
{
    { L"Kaede A", 0x1e32800, 0x1e32820, indexNGBCSprites_Kaede },
    { L"A - Super Trail", 0x1e32820, 0x1e32840, indexNGBCSprites_Kaede, 0x00 },
    { L"A - Extra Move 1", 0x1e32840, 0x1e32860, indexNGBCSprites_Kaede, 0x01 },
    { L"A - Extra Move 2", 0x1e32860, 0x1e32880, indexNGBCSprites_Kaede, 0x02 },
    { L"A - Extra Move 3", 0x1e32880, 0x1e328a0, indexNGBCSprites_Kaede, 0x03 },
    { L"A - Extra Move 4", 0x1e328a0, 0x1e328c0, indexNGBCSprites_Kaede, 0x04 },
    { L"A - Extra Move 5", 0x1e328c0, 0x1e328e0, indexNGBCSprites_Kaede, 0x05 },
    { L"A - Extra Move 6", 0x1e328e0, 0x1e32900, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_B[] =
{
    { L"Kaede B", 0x1e32900, 0x1e32920, indexNGBCSprites_Kaede },
    { L"B - Super Trail", 0x1e32920, 0x1e32940, indexNGBCSprites_Kaede, 0x00 },
    { L"B - Extra Move 1", 0x1e32940, 0x1e32960, indexNGBCSprites_Kaede, 0x01 },
    { L"B - Extra Move 2", 0x1e32960, 0x1e32980, indexNGBCSprites_Kaede, 0x02 },
    { L"B - Extra Move 3", 0x1e32980, 0x1e329a0, indexNGBCSprites_Kaede, 0x03 },
    { L"B - Extra Move 4", 0x1e329a0, 0x1e329c0, indexNGBCSprites_Kaede, 0x04 },
    { L"B - Extra Move 5", 0x1e329c0, 0x1e329e0, indexNGBCSprites_Kaede, 0x05 },
    { L"B - Extra Move 6", 0x1e329e0, 0x1e32a00, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_C[] =
{
    { L"Kaede C", 0x1e32a00, 0x1e32a20, indexNGBCSprites_Kaede },
    { L"C - Super Trail", 0x1e32a20, 0x1e32a40, indexNGBCSprites_Kaede, 0x00 },
    { L"C - Extra Move 1", 0x1e32a40, 0x1e32a60, indexNGBCSprites_Kaede, 0x01 },
    { L"C - Extra Move 2", 0x1e32a60, 0x1e32a80, indexNGBCSprites_Kaede, 0x02 },
    { L"C - Extra Move 3", 0x1e32a80, 0x1e32aa0, indexNGBCSprites_Kaede, 0x03 },
    { L"C - Extra Move 4", 0x1e32aa0, 0x1e32ac0, indexNGBCSprites_Kaede, 0x04 },
    { L"C - Extra Move 5", 0x1e32ac0, 0x1e32ae0, indexNGBCSprites_Kaede, 0x05 },
    { L"C - Extra Move 6", 0x1e32ae0, 0x1e32b00, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_D[] =
{
    { L"Kaede D", 0x1e32b00, 0x1e32b20, indexNGBCSprites_Kaede },
    { L"D - Super Trail", 0x1e32b20, 0x1e32b40, indexNGBCSprites_Kaede, 0x00 },
    { L"D - Extra Move 1", 0x1e32b40, 0x1e32b60, indexNGBCSprites_Kaede, 0x01 },
    { L"D - Extra Move 2", 0x1e32b60, 0x1e32b80, indexNGBCSprites_Kaede, 0x02 },
    { L"D - Extra Move 3", 0x1e32b80, 0x1e32ba0, indexNGBCSprites_Kaede, 0x03 },
    { L"D - Extra Move 4", 0x1e32ba0, 0x1e32bc0, indexNGBCSprites_Kaede, 0x04 },
    { L"D - Extra Move 5", 0x1e32bc0, 0x1e32be0, indexNGBCSprites_Kaede, 0x05 },
    { L"D - Extra Move 6", 0x1e32be0, 0x1e32c00, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_EA[] =
{
    { L"Kaede EA", 0x1e32c00, 0x1e32c20, indexNGBCSprites_Kaede },
    { L"E+A - Super Trail", 0x1e32c20, 0x1e32c40, indexNGBCSprites_Kaede, 0x00 },
    { L"E+A - Extra Move 1", 0x1e32c40, 0x1e32c60, indexNGBCSprites_Kaede, 0x01 },
    { L"E+A - Extra Move 2", 0x1e32c60, 0x1e32c80, indexNGBCSprites_Kaede, 0x02 },
    { L"E+A - Extra Move 3", 0x1e32c80, 0x1e32ca0, indexNGBCSprites_Kaede, 0x03 },
    { L"E+A - Extra Move 4", 0x1e32ca0, 0x1e32cc0, indexNGBCSprites_Kaede, 0x04 },
    { L"E+A - Extra Move 5", 0x1e32cc0, 0x1e32ce0, indexNGBCSprites_Kaede, 0x05 },
    { L"E+A - Extra Move 6", 0x1e32ce0, 0x1e32d00, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_EB[] =
{
    { L"Kaede EB", 0x1e32d00, 0x1e32d20, indexNGBCSprites_Kaede },
    { L"E+B - Super Trail", 0x1e32d20, 0x1e32d40, indexNGBCSprites_Kaede, 0x00 },
    { L"E+B - Extra Move 1", 0x1e32d40, 0x1e32d60, indexNGBCSprites_Kaede, 0x01 },
    { L"E+B - Extra Move 2", 0x1e32d60, 0x1e32d80, indexNGBCSprites_Kaede, 0x02 },
    { L"E+B - Extra Move 3", 0x1e32d80, 0x1e32da0, indexNGBCSprites_Kaede, 0x03 },
    { L"E+B - Extra Move 4", 0x1e32da0, 0x1e32dc0, indexNGBCSprites_Kaede, 0x04 },
    { L"E+B - Extra Move 5", 0x1e32dc0, 0x1e32de0, indexNGBCSprites_Kaede, 0x05 },
    { L"E+B - Extra Move 6", 0x1e32de0, 0x1e32e00, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_EC[] =
{
    { L"Kaede EC", 0x1e32e00, 0x1e32e20, indexNGBCSprites_Kaede },
    { L"E+C - Super Trail", 0x1e32e20, 0x1e32e40, indexNGBCSprites_Kaede, 0x00 },
    { L"E+C - Extra Move 1", 0x1e32e40, 0x1e32e60, indexNGBCSprites_Kaede, 0x01 },
    { L"E+C - Extra Move 2", 0x1e32e60, 0x1e32e80, indexNGBCSprites_Kaede, 0x02 },
    { L"E+C - Extra Move 3", 0x1e32e80, 0x1e32ea0, indexNGBCSprites_Kaede, 0x03 },
    { L"E+C - Extra Move 4", 0x1e32ea0, 0x1e32ec0, indexNGBCSprites_Kaede, 0x04 },
    { L"E+C - Extra Move 5", 0x1e32ec0, 0x1e32ee0, indexNGBCSprites_Kaede, 0x05 },
    { L"E+C - Extra Move 6", 0x1e32ee0, 0x1e32f00, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_ED[] =
{
    { L"Kaede ED", 0x1e32f00, 0x1e32f20, indexNGBCSprites_Kaede },
    { L"E+D - Super Trail", 0x1e32f20, 0x1e32f40, indexNGBCSprites_Kaede, 0x00 },
    { L"E+D - Extra Move 1", 0x1e32f40, 0x1e32f60, indexNGBCSprites_Kaede, 0x01 },
    { L"E+D - Extra Move 2", 0x1e32f60, 0x1e32f80, indexNGBCSprites_Kaede, 0x02 },
    { L"E+D - Extra Move 3", 0x1e32f80, 0x1e32fa0, indexNGBCSprites_Kaede, 0x03 },
    { L"E+D - Extra Move 4", 0x1e32fa0, 0x1e32fc0, indexNGBCSprites_Kaede, 0x04 },
    { L"E+D - Extra Move 5", 0x1e32fc0, 0x1e32fe0, indexNGBCSprites_Kaede, 0x05 },
    { L"E+D - Extra Move 6", 0x1e32fe0, 0x1e33000, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_SA[] =
{
    { L"Kaede SA", 0x1e33000, 0x1e33020, indexNGBCSprites_Kaede },
    { L"Start+A - Super Trail", 0x1e33020, 0x1e33040, indexNGBCSprites_Kaede, 0x00 },
    { L"Start+A - Extra Move 1", 0x1e33040, 0x1e33060, indexNGBCSprites_Kaede, 0x01 },
    { L"Start+A - Extra Move 2", 0x1e33060, 0x1e33080, indexNGBCSprites_Kaede, 0x02 },
    { L"Start+A - Extra Move 3", 0x1e33080, 0x1e330a0, indexNGBCSprites_Kaede, 0x03 },
    { L"Start+A - Extra Move 4", 0x1e330a0, 0x1e330c0, indexNGBCSprites_Kaede, 0x04 },
    { L"Start+A - Extra Move 5", 0x1e330c0, 0x1e330e0, indexNGBCSprites_Kaede, 0x05 },
    { L"Start+A - Extra Move 6", 0x1e330e0, 0x1e33100, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_SB[] =
{
    { L"Kaede SB", 0x1e33100, 0x1e33120, indexNGBCSprites_Kaede },
    { L"Start+B - Super Trail", 0x1e33120, 0x1e33140, indexNGBCSprites_Kaede, 0x00 },
    { L"Start+B - Extra Move 1", 0x1e33140, 0x1e33160, indexNGBCSprites_Kaede, 0x01 },
    { L"Start+B - Extra Move 2", 0x1e33160, 0x1e33180, indexNGBCSprites_Kaede, 0x02 },
    { L"Start+B - Extra Move 3", 0x1e33180, 0x1e331a0, indexNGBCSprites_Kaede, 0x03 },
    { L"Start+B - Extra Move 4", 0x1e331a0, 0x1e331c0, indexNGBCSprites_Kaede, 0x04 },
    { L"Start+B - Extra Move 5", 0x1e331c0, 0x1e331e0, indexNGBCSprites_Kaede, 0x05 },
    { L"Start+B - Extra Move 6", 0x1e331e0, 0x1e33200, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_SC[] =
{
    { L"Kaede SC", 0x1e33200, 0x1e33220, indexNGBCSprites_Kaede },
    { L"Start+C - Super Trail", 0x1e33220, 0x1e33240, indexNGBCSprites_Kaede, 0x00 },
    { L"Start+C - Extra Move 1", 0x1e33240, 0x1e33260, indexNGBCSprites_Kaede, 0x01 },
    { L"Start+C - Extra Move 2", 0x1e33260, 0x1e33280, indexNGBCSprites_Kaede, 0x02 },
    { L"Start+C - Extra Move 3", 0x1e33280, 0x1e332a0, indexNGBCSprites_Kaede, 0x03 },
    { L"Start+C - Extra Move 4", 0x1e332a0, 0x1e332c0, indexNGBCSprites_Kaede, 0x04 },
    { L"Start+C - Extra Move 5", 0x1e332c0, 0x1e332e0, indexNGBCSprites_Kaede, 0x05 },
    { L"Start+C - Extra Move 6", 0x1e332e0, 0x1e33300, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KAEDE_PALETTES_SD[] =
{
    { L"Kaede SD", 0x1e33300, 0x1e33320, indexNGBCSprites_Kaede },
    { L"Start+D - Super Trail", 0x1e33320, 0x1e33340, indexNGBCSprites_Kaede, 0x00 },
    { L"Start+D - Extra Move 1", 0x1e33340, 0x1e33360, indexNGBCSprites_Kaede, 0x01 },
    { L"Start+D - Extra Move 2", 0x1e33360, 0x1e33380, indexNGBCSprites_Kaede, 0x02 },
    { L"Start+D - Extra Move 3", 0x1e33380, 0x1e333a0, indexNGBCSprites_Kaede, 0x03 },
    { L"Start+D - Extra Move 4", 0x1e333a0, 0x1e333c0, indexNGBCSprites_Kaede, 0x04 },
    { L"Start+D - Extra Move 5", 0x1e333c0, 0x1e333e0, indexNGBCSprites_Kaede, 0x05 },
    { L"Start+D - Extra Move 6", 0x1e333e0, 0x1e33400, indexNGBCSprites_Kaede, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_A[] =
{
    { L"Moriya A", 0x1fd7800, 0x1fd7820, indexNGBCSprites_Moriya },
    { L"A - Super Trail", 0x1fd7820, 0x1fd7840, indexNGBCSprites_Moriya, 0x00 },
    { L"A - Extra Move 1", 0x1fd7840, 0x1fd7860, indexNGBCSprites_Moriya, 0x01 },
    { L"A - Extra Move 2", 0x1fd7860, 0x1fd7880, indexNGBCSprites_Moriya, 0x02 },
    { L"A - Extra Move 3", 0x1fd7880, 0x1fd78a0, indexNGBCSprites_Moriya, 0x03 },
    { L"A - Extra Move 4", 0x1fd78a0, 0x1fd78c0, indexNGBCSprites_Moriya, 0x04 },
    { L"A - Extra Move 5", 0x1fd78c0, 0x1fd78e0, indexNGBCSprites_Moriya, 0x05 },
    { L"A - Extra Move 6", 0x1fd78e0, 0x1fd7900, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_B[] =
{
    { L"Moriya B", 0x1fd7900, 0x1fd7920, indexNGBCSprites_Moriya },
    { L"B - Super Trail", 0x1fd7920, 0x1fd7940, indexNGBCSprites_Moriya, 0x00 },
    { L"B - Extra Move 1", 0x1fd7940, 0x1fd7960, indexNGBCSprites_Moriya, 0x01 },
    { L"B - Extra Move 2", 0x1fd7960, 0x1fd7980, indexNGBCSprites_Moriya, 0x02 },
    { L"B - Extra Move 3", 0x1fd7980, 0x1fd79a0, indexNGBCSprites_Moriya, 0x03 },
    { L"B - Extra Move 4", 0x1fd79a0, 0x1fd79c0, indexNGBCSprites_Moriya, 0x04 },
    { L"B - Extra Move 5", 0x1fd79c0, 0x1fd79e0, indexNGBCSprites_Moriya, 0x05 },
    { L"B - Extra Move 6", 0x1fd79e0, 0x1fd7a00, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_C[] =
{
    { L"Moriya C", 0x1fd7a00, 0x1fd7a20, indexNGBCSprites_Moriya },
    { L"C - Super Trail", 0x1fd7a20, 0x1fd7a40, indexNGBCSprites_Moriya, 0x00 },
    { L"C - Extra Move 1", 0x1fd7a40, 0x1fd7a60, indexNGBCSprites_Moriya, 0x01 },
    { L"C - Extra Move 2", 0x1fd7a60, 0x1fd7a80, indexNGBCSprites_Moriya, 0x02 },
    { L"C - Extra Move 3", 0x1fd7a80, 0x1fd7aa0, indexNGBCSprites_Moriya, 0x03 },
    { L"C - Extra Move 4", 0x1fd7aa0, 0x1fd7ac0, indexNGBCSprites_Moriya, 0x04 },
    { L"C - Extra Move 5", 0x1fd7ac0, 0x1fd7ae0, indexNGBCSprites_Moriya, 0x05 },
    { L"C - Extra Move 6", 0x1fd7ae0, 0x1fd7b00, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_D[] =
{
    { L"Moriya D", 0x1fd7b00, 0x1fd7b20, indexNGBCSprites_Moriya },
    { L"D - Super Trail", 0x1fd7b20, 0x1fd7b40, indexNGBCSprites_Moriya, 0x00 },
    { L"D - Extra Move 1", 0x1fd7b40, 0x1fd7b60, indexNGBCSprites_Moriya, 0x01 },
    { L"D - Extra Move 2", 0x1fd7b60, 0x1fd7b80, indexNGBCSprites_Moriya, 0x02 },
    { L"D - Extra Move 3", 0x1fd7b80, 0x1fd7ba0, indexNGBCSprites_Moriya, 0x03 },
    { L"D - Extra Move 4", 0x1fd7ba0, 0x1fd7bc0, indexNGBCSprites_Moriya, 0x04 },
    { L"D - Extra Move 5", 0x1fd7bc0, 0x1fd7be0, indexNGBCSprites_Moriya, 0x05 },
    { L"D - Extra Move 6", 0x1fd7be0, 0x1fd7c00, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_EA[] =
{
    { L"Moriya EA", 0x1fd7c00, 0x1fd7c20, indexNGBCSprites_Moriya },
    { L"E+A - Super Trail", 0x1fd7c20, 0x1fd7c40, indexNGBCSprites_Moriya, 0x00 },
    { L"E+A - Extra Move 1", 0x1fd7c40, 0x1fd7c60, indexNGBCSprites_Moriya, 0x01 },
    { L"E+A - Extra Move 2", 0x1fd7c60, 0x1fd7c80, indexNGBCSprites_Moriya, 0x02 },
    { L"E+A - Extra Move 3", 0x1fd7c80, 0x1fd7ca0, indexNGBCSprites_Moriya, 0x03 },
    { L"E+A - Extra Move 4", 0x1fd7ca0, 0x1fd7cc0, indexNGBCSprites_Moriya, 0x04 },
    { L"E+A - Extra Move 5", 0x1fd7cc0, 0x1fd7ce0, indexNGBCSprites_Moriya, 0x05 },
    { L"E+A - Extra Move 6", 0x1fd7ce0, 0x1fd7d00, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_EB[] =
{
    { L"Moriya EB", 0x1fd7d00, 0x1fd7d20, indexNGBCSprites_Moriya },
    { L"E+B - Super Trail", 0x1fd7d20, 0x1fd7d40, indexNGBCSprites_Moriya, 0x00 },
    { L"E+B - Extra Move 1", 0x1fd7d40, 0x1fd7d60, indexNGBCSprites_Moriya, 0x01 },
    { L"E+B - Extra Move 2", 0x1fd7d60, 0x1fd7d80, indexNGBCSprites_Moriya, 0x02 },
    { L"E+B - Extra Move 3", 0x1fd7d80, 0x1fd7da0, indexNGBCSprites_Moriya, 0x03 },
    { L"E+B - Extra Move 4", 0x1fd7da0, 0x1fd7dc0, indexNGBCSprites_Moriya, 0x04 },
    { L"E+B - Extra Move 5", 0x1fd7dc0, 0x1fd7de0, indexNGBCSprites_Moriya, 0x05 },
    { L"E+B - Extra Move 6", 0x1fd7de0, 0x1fd7e00, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_EC[] =
{
    { L"Moriya EC", 0x1fd7e00, 0x1fd7e20, indexNGBCSprites_Moriya },
    { L"E+C - Super Trail", 0x1fd7e20, 0x1fd7e40, indexNGBCSprites_Moriya, 0x00 },
    { L"E+C - Extra Move 1", 0x1fd7e40, 0x1fd7e60, indexNGBCSprites_Moriya, 0x01 },
    { L"E+C - Extra Move 2", 0x1fd7e60, 0x1fd7e80, indexNGBCSprites_Moriya, 0x02 },
    { L"E+C - Extra Move 3", 0x1fd7e80, 0x1fd7ea0, indexNGBCSprites_Moriya, 0x03 },
    { L"E+C - Extra Move 4", 0x1fd7ea0, 0x1fd7ec0, indexNGBCSprites_Moriya, 0x04 },
    { L"E+C - Extra Move 5", 0x1fd7ec0, 0x1fd7ee0, indexNGBCSprites_Moriya, 0x05 },
    { L"E+C - Extra Move 6", 0x1fd7ee0, 0x1fd7f00, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_ED[] =
{
    { L"Moriya ED", 0x1fd7f00, 0x1fd7f20, indexNGBCSprites_Moriya },
    { L"E+D - Super Trail", 0x1fd7f20, 0x1fd7f40, indexNGBCSprites_Moriya, 0x00 },
    { L"E+D - Extra Move 1", 0x1fd7f40, 0x1fd7f60, indexNGBCSprites_Moriya, 0x01 },
    { L"E+D - Extra Move 2", 0x1fd7f60, 0x1fd7f80, indexNGBCSprites_Moriya, 0x02 },
    { L"E+D - Extra Move 3", 0x1fd7f80, 0x1fd7fa0, indexNGBCSprites_Moriya, 0x03 },
    { L"E+D - Extra Move 4", 0x1fd7fa0, 0x1fd7fc0, indexNGBCSprites_Moriya, 0x04 },
    { L"E+D - Extra Move 5", 0x1fd7fc0, 0x1fd7fe0, indexNGBCSprites_Moriya, 0x05 },
    { L"E+D - Extra Move 6", 0x1fd7fe0, 0x1fd8000, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_SA[] =
{
    { L"Moriya SA", 0x1fd8000, 0x1fd8020, indexNGBCSprites_Moriya },
    { L"Start+A - Super Trail", 0x1fd8020, 0x1fd8040, indexNGBCSprites_Moriya, 0x00 },
    { L"Start+A - Extra Move 1", 0x1fd8040, 0x1fd8060, indexNGBCSprites_Moriya, 0x01 },
    { L"Start+A - Extra Move 2", 0x1fd8060, 0x1fd8080, indexNGBCSprites_Moriya, 0x02 },
    { L"Start+A - Extra Move 3", 0x1fd8080, 0x1fd80a0, indexNGBCSprites_Moriya, 0x03 },
    { L"Start+A - Extra Move 4", 0x1fd80a0, 0x1fd80c0, indexNGBCSprites_Moriya, 0x04 },
    { L"Start+A - Extra Move 5", 0x1fd80c0, 0x1fd80e0, indexNGBCSprites_Moriya, 0x05 },
    { L"Start+A - Extra Move 6", 0x1fd80e0, 0x1fd8100, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_SB[] =
{
    { L"Moriya SB", 0x1fd8100, 0x1fd8120, indexNGBCSprites_Moriya },
    { L"Start+B - Super Trail", 0x1fd8120, 0x1fd8140, indexNGBCSprites_Moriya, 0x00 },
    { L"Start+B - Extra Move 1", 0x1fd8140, 0x1fd8160, indexNGBCSprites_Moriya, 0x01 },
    { L"Start+B - Extra Move 2", 0x1fd8160, 0x1fd8180, indexNGBCSprites_Moriya, 0x02 },
    { L"Start+B - Extra Move 3", 0x1fd8180, 0x1fd81a0, indexNGBCSprites_Moriya, 0x03 },
    { L"Start+B - Extra Move 4", 0x1fd81a0, 0x1fd81c0, indexNGBCSprites_Moriya, 0x04 },
    { L"Start+B - Extra Move 5", 0x1fd81c0, 0x1fd81e0, indexNGBCSprites_Moriya, 0x05 },
    { L"Start+B - Extra Move 6", 0x1fd81e0, 0x1fd8200, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_SC[] =
{
    { L"Moriya SC", 0x1fd8200, 0x1fd8220, indexNGBCSprites_Moriya },
    { L"Start+C - Super Trail", 0x1fd8220, 0x1fd8240, indexNGBCSprites_Moriya, 0x00 },
    { L"Start+C - Extra Move 1", 0x1fd8240, 0x1fd8260, indexNGBCSprites_Moriya, 0x01 },
    { L"Start+C - Extra Move 2", 0x1fd8260, 0x1fd8280, indexNGBCSprites_Moriya, 0x02 },
    { L"Start+C - Extra Move 3", 0x1fd8280, 0x1fd82a0, indexNGBCSprites_Moriya, 0x03 },
    { L"Start+C - Extra Move 4", 0x1fd82a0, 0x1fd82c0, indexNGBCSprites_Moriya, 0x04 },
    { L"Start+C - Extra Move 5", 0x1fd82c0, 0x1fd82e0, indexNGBCSprites_Moriya, 0x05 },
    { L"Start+C - Extra Move 6", 0x1fd82e0, 0x1fd8300, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MORIYA_PALETTES_SD[] =
{
    { L"Moriya SD", 0x1fd8300, 0x1fd8320, indexNGBCSprites_Moriya },
    { L"Start+D - Super Trail", 0x1fd8320, 0x1fd8340, indexNGBCSprites_Moriya, 0x00 },
    { L"Start+D - Extra Move 1", 0x1fd8340, 0x1fd8360, indexNGBCSprites_Moriya, 0x01 },
    { L"Start+D - Extra Move 2", 0x1fd8360, 0x1fd8380, indexNGBCSprites_Moriya, 0x02 },
    { L"Start+D - Extra Move 3", 0x1fd8380, 0x1fd83a0, indexNGBCSprites_Moriya, 0x03 },
    { L"Start+D - Extra Move 4", 0x1fd83a0, 0x1fd83c0, indexNGBCSprites_Moriya, 0x04 },
    { L"Start+D - Extra Move 5", 0x1fd83c0, 0x1fd83e0, indexNGBCSprites_Moriya, 0x05 },
    { L"Start+D - Extra Move 6", 0x1fd83e0, 0x1fd8400, indexNGBCSprites_Moriya, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_A[] =
{
    { L"K' A", 0x21b0800, 0x21b0820, indexNGBCSprites_K },
    { L"A - Super Trail", 0x21b0820, 0x21b0840, indexNGBCSprites_K, 0x00 },
    { L"A - Extra Move 1", 0x21b0840, 0x21b0860, indexNGBCSprites_K, 0x01 },
    { L"A - Extra Move 2", 0x21b0860, 0x21b0880, indexNGBCSprites_K, 0x02 },
    { L"A - Extra Move 3", 0x21b0880, 0x21b08a0, indexNGBCSprites_K, 0x03 },
    { L"A - Extra Move 4", 0x21b08a0, 0x21b08c0, indexNGBCSprites_K, 0x04 },
    { L"A - Extra Move 5", 0x21b08c0, 0x21b08e0, indexNGBCSprites_K, 0x05 },
    { L"A - Extra Move 6", 0x21b08e0, 0x21b0900, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_B[] =
{
    { L"K' B", 0x21b0900, 0x21b0920, indexNGBCSprites_K },
    { L"B - Super Trail", 0x21b0920, 0x21b0940, indexNGBCSprites_K, 0x00 },
    { L"B - Extra Move 1", 0x21b0940, 0x21b0960, indexNGBCSprites_K, 0x01 },
    { L"B - Extra Move 2", 0x21b0960, 0x21b0980, indexNGBCSprites_K, 0x02 },
    { L"B - Extra Move 3", 0x21b0980, 0x21b09a0, indexNGBCSprites_K, 0x03 },
    { L"B - Extra Move 4", 0x21b09a0, 0x21b09c0, indexNGBCSprites_K, 0x04 },
    { L"B - Extra Move 5", 0x21b09c0, 0x21b09e0, indexNGBCSprites_K, 0x05 },
    { L"B - Extra Move 6", 0x21b09e0, 0x21b0a00, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_C[] =
{
    { L"K' C", 0x21b0a00, 0x21b0a20, indexNGBCSprites_K },
    { L"C - Super Trail", 0x21b0a20, 0x21b0a40, indexNGBCSprites_K, 0x00 },
    { L"C - Extra Move 1", 0x21b0a40, 0x21b0a60, indexNGBCSprites_K, 0x01 },
    { L"C - Extra Move 2", 0x21b0a60, 0x21b0a80, indexNGBCSprites_K, 0x02 },
    { L"C - Extra Move 3", 0x21b0a80, 0x21b0aa0, indexNGBCSprites_K, 0x03 },
    { L"C - Extra Move 4", 0x21b0aa0, 0x21b0ac0, indexNGBCSprites_K, 0x04 },
    { L"C - Extra Move 5", 0x21b0ac0, 0x21b0ae0, indexNGBCSprites_K, 0x05 },
    { L"C - Extra Move 6", 0x21b0ae0, 0x21b0b00, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_D[] =
{
    { L"K' D", 0x21b0b00, 0x21b0b20, indexNGBCSprites_K },
    { L"D - Super Trail", 0x21b0b20, 0x21b0b40, indexNGBCSprites_K, 0x00 },
    { L"D - Extra Move 1", 0x21b0b40, 0x21b0b60, indexNGBCSprites_K, 0x01 },
    { L"D - Extra Move 2", 0x21b0b60, 0x21b0b80, indexNGBCSprites_K, 0x02 },
    { L"D - Extra Move 3", 0x21b0b80, 0x21b0ba0, indexNGBCSprites_K, 0x03 },
    { L"D - Extra Move 4", 0x21b0ba0, 0x21b0bc0, indexNGBCSprites_K, 0x04 },
    { L"D - Extra Move 5", 0x21b0bc0, 0x21b0be0, indexNGBCSprites_K, 0x05 },
    { L"D - Extra Move 6", 0x21b0be0, 0x21b0c00, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_EA[] =
{
    { L"K' EA", 0x21b0c00, 0x21b0c20, indexNGBCSprites_K },
    { L"E+A - Super Trail", 0x21b0c20, 0x21b0c40, indexNGBCSprites_K, 0x00 },
    { L"E+A - Extra Move 1", 0x21b0c40, 0x21b0c60, indexNGBCSprites_K, 0x01 },
    { L"E+A - Extra Move 2", 0x21b0c60, 0x21b0c80, indexNGBCSprites_K, 0x02 },
    { L"E+A - Extra Move 3", 0x21b0c80, 0x21b0ca0, indexNGBCSprites_K, 0x03 },
    { L"E+A - Extra Move 4", 0x21b0ca0, 0x21b0cc0, indexNGBCSprites_K, 0x04 },
    { L"E+A - Extra Move 5", 0x21b0cc0, 0x21b0ce0, indexNGBCSprites_K, 0x05 },
    { L"E+A - Extra Move 6", 0x21b0ce0, 0x21b0d00, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_EB[] =
{
    { L"K' EB", 0x21b0d00, 0x21b0d20, indexNGBCSprites_K },
    { L"E+B - Super Trail", 0x21b0d20, 0x21b0d40, indexNGBCSprites_K, 0x00 },
    { L"E+B - Extra Move 1", 0x21b0d40, 0x21b0d60, indexNGBCSprites_K, 0x01 },
    { L"E+B - Extra Move 2", 0x21b0d60, 0x21b0d80, indexNGBCSprites_K, 0x02 },
    { L"E+B - Extra Move 3", 0x21b0d80, 0x21b0da0, indexNGBCSprites_K, 0x03 },
    { L"E+B - Extra Move 4", 0x21b0da0, 0x21b0dc0, indexNGBCSprites_K, 0x04 },
    { L"E+B - Extra Move 5", 0x21b0dc0, 0x21b0de0, indexNGBCSprites_K, 0x05 },
    { L"E+B - Extra Move 6", 0x21b0de0, 0x21b0e00, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_EC[] =
{
    { L"K' EC", 0x21b0e00, 0x21b0e20, indexNGBCSprites_K },
    { L"E+C - Super Trail", 0x21b0e20, 0x21b0e40, indexNGBCSprites_K, 0x00 },
    { L"E+C - Extra Move 1", 0x21b0e40, 0x21b0e60, indexNGBCSprites_K, 0x01 },
    { L"E+C - Extra Move 2", 0x21b0e60, 0x21b0e80, indexNGBCSprites_K, 0x02 },
    { L"E+C - Extra Move 3", 0x21b0e80, 0x21b0ea0, indexNGBCSprites_K, 0x03 },
    { L"E+C - Extra Move 4", 0x21b0ea0, 0x21b0ec0, indexNGBCSprites_K, 0x04 },
    { L"E+C - Extra Move 5", 0x21b0ec0, 0x21b0ee0, indexNGBCSprites_K, 0x05 },
    { L"E+C - Extra Move 6", 0x21b0ee0, 0x21b0f00, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_ED[] =
{
    { L"K' ED", 0x21b0f00, 0x21b0f20, indexNGBCSprites_K },
    { L"E+D - Super Trail", 0x21b0f20, 0x21b0f40, indexNGBCSprites_K, 0x00 },
    { L"E+D - Extra Move 1", 0x21b0f40, 0x21b0f60, indexNGBCSprites_K, 0x01 },
    { L"E+D - Extra Move 2", 0x21b0f60, 0x21b0f80, indexNGBCSprites_K, 0x02 },
    { L"E+D - Extra Move 3", 0x21b0f80, 0x21b0fa0, indexNGBCSprites_K, 0x03 },
    { L"E+D - Extra Move 4", 0x21b0fa0, 0x21b0fc0, indexNGBCSprites_K, 0x04 },
    { L"E+D - Extra Move 5", 0x21b0fc0, 0x21b0fe0, indexNGBCSprites_K, 0x05 },
    { L"E+D - Extra Move 6", 0x21b0fe0, 0x21b1000, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_SA[] =
{
    { L"K' SA", 0x21b1000, 0x21b1020, indexNGBCSprites_K },
    { L"Start+A - Super Trail", 0x21b1020, 0x21b1040, indexNGBCSprites_K, 0x00 },
    { L"Start+A - Extra Move 1", 0x21b1040, 0x21b1060, indexNGBCSprites_K, 0x01 },
    { L"Start+A - Extra Move 2", 0x21b1060, 0x21b1080, indexNGBCSprites_K, 0x02 },
    { L"Start+A - Extra Move 3", 0x21b1080, 0x21b10a0, indexNGBCSprites_K, 0x03 },
    { L"Start+A - Extra Move 4", 0x21b10a0, 0x21b10c0, indexNGBCSprites_K, 0x04 },
    { L"Start+A - Extra Move 5", 0x21b10c0, 0x21b10e0, indexNGBCSprites_K, 0x05 },
    { L"Start+A - Extra Move 6", 0x21b10e0, 0x21b1100, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_SB[] =
{
    { L"K' SB", 0x21b1100, 0x21b1120, indexNGBCSprites_K },
    { L"Start+B - Super Trail", 0x21b1120, 0x21b1140, indexNGBCSprites_K, 0x00 },
    { L"Start+B - Extra Move 1", 0x21b1140, 0x21b1160, indexNGBCSprites_K, 0x01 },
    { L"Start+B - Extra Move 2", 0x21b1160, 0x21b1180, indexNGBCSprites_K, 0x02 },
    { L"Start+B - Extra Move 3", 0x21b1180, 0x21b11a0, indexNGBCSprites_K, 0x03 },
    { L"Start+B - Extra Move 4", 0x21b11a0, 0x21b11c0, indexNGBCSprites_K, 0x04 },
    { L"Start+B - Extra Move 5", 0x21b11c0, 0x21b11e0, indexNGBCSprites_K, 0x05 },
    { L"Start+B - Extra Move 6", 0x21b11e0, 0x21b1200, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_SC[] =
{
    { L"K' SC", 0x21b1200, 0x21b1220, indexNGBCSprites_K },
    { L"Start+C - Super Trail", 0x21b1220, 0x21b1240, indexNGBCSprites_K, 0x00 },
    { L"Start+C - Extra Move 1", 0x21b1240, 0x21b1260, indexNGBCSprites_K, 0x01 },
    { L"Start+C - Extra Move 2", 0x21b1260, 0x21b1280, indexNGBCSprites_K, 0x02 },
    { L"Start+C - Extra Move 3", 0x21b1280, 0x21b12a0, indexNGBCSprites_K, 0x03 },
    { L"Start+C - Extra Move 4", 0x21b12a0, 0x21b12c0, indexNGBCSprites_K, 0x04 },
    { L"Start+C - Extra Move 5", 0x21b12c0, 0x21b12e0, indexNGBCSprites_K, 0x05 },
    { L"Start+C - Extra Move 6", 0x21b12e0, 0x21b1300, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_K_PALETTES_SD[] =
{
    { L"K' SD", 0x21b1300, 0x21b1320, indexNGBCSprites_K },
    { L"Start+D - Super Trail", 0x21b1320, 0x21b1340, indexNGBCSprites_K, 0x00 },
    { L"Start+D - Extra Move 1", 0x21b1340, 0x21b1360, indexNGBCSprites_K, 0x01 },
    { L"Start+D - Extra Move 2", 0x21b1360, 0x21b1380, indexNGBCSprites_K, 0x02 },
    { L"Start+D - Extra Move 3", 0x21b1380, 0x21b13a0, indexNGBCSprites_K, 0x03 },
    { L"Start+D - Extra Move 4", 0x21b13a0, 0x21b13c0, indexNGBCSprites_K, 0x04 },
    { L"Start+D - Extra Move 5", 0x21b13c0, 0x21b13e0, indexNGBCSprites_K, 0x05 },
    { L"Start+D - Extra Move 6", 0x21b13e0, 0x21b1400, indexNGBCSprites_K, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_A[] =
{
    { L"Rock A", 0x2338000, 0x2338020, indexNGBCSprites_Rock },
    { L"A - Super Trail", 0x2338020, 0x2338040, indexNGBCSprites_Rock, 0x00 },
    { L"A - Extra Move 1", 0x2338040, 0x2338060, indexNGBCSprites_Rock, 0x01 },
    { L"A - Extra Move 2", 0x2338060, 0x2338080, indexNGBCSprites_Rock, 0x02 },
    { L"A - Extra Move 3", 0x2338080, 0x23380a0, indexNGBCSprites_Rock, 0x03 },
    { L"A - Extra Move 4", 0x23380a0, 0x23380c0, indexNGBCSprites_Rock, 0x04 },
    { L"A - Extra Move 5", 0x23380c0, 0x23380e0, indexNGBCSprites_Rock, 0x05 },
    { L"A - Extra Move 6", 0x23380e0, 0x2338100, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_B[] =
{
    { L"Rock B", 0x2338100, 0x2338120, indexNGBCSprites_Rock },
    { L"B - Super Trail", 0x2338120, 0x2338140, indexNGBCSprites_Rock, 0x00 },
    { L"B - Extra Move 1", 0x2338140, 0x2338160, indexNGBCSprites_Rock, 0x01 },
    { L"B - Extra Move 2", 0x2338160, 0x2338180, indexNGBCSprites_Rock, 0x02 },
    { L"B - Extra Move 3", 0x2338180, 0x23381a0, indexNGBCSprites_Rock, 0x03 },
    { L"B - Extra Move 4", 0x23381a0, 0x23381c0, indexNGBCSprites_Rock, 0x04 },
    { L"B - Extra Move 5", 0x23381c0, 0x23381e0, indexNGBCSprites_Rock, 0x05 },
    { L"B - Extra Move 6", 0x23381e0, 0x2338200, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_C[] =
{
    { L"Rock C", 0x2338200, 0x2338220, indexNGBCSprites_Rock },
    { L"C - Super Trail", 0x2338220, 0x2338240, indexNGBCSprites_Rock, 0x00 },
    { L"C - Extra Move 1", 0x2338240, 0x2338260, indexNGBCSprites_Rock, 0x01 },
    { L"C - Extra Move 2", 0x2338260, 0x2338280, indexNGBCSprites_Rock, 0x02 },
    { L"C - Extra Move 3", 0x2338280, 0x23382a0, indexNGBCSprites_Rock, 0x03 },
    { L"C - Extra Move 4", 0x23382a0, 0x23382c0, indexNGBCSprites_Rock, 0x04 },
    { L"C - Extra Move 5", 0x23382c0, 0x23382e0, indexNGBCSprites_Rock, 0x05 },
    { L"C - Extra Move 6", 0x23382e0, 0x2338300, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_D[] =
{
    { L"Rock D", 0x2338300, 0x2338320, indexNGBCSprites_Rock },
    { L"D - Super Trail", 0x2338320, 0x2338340, indexNGBCSprites_Rock, 0x00 },
    { L"D - Extra Move 1", 0x2338340, 0x2338360, indexNGBCSprites_Rock, 0x01 },
    { L"D - Extra Move 2", 0x2338360, 0x2338380, indexNGBCSprites_Rock, 0x02 },
    { L"D - Extra Move 3", 0x2338380, 0x23383a0, indexNGBCSprites_Rock, 0x03 },
    { L"D - Extra Move 4", 0x23383a0, 0x23383c0, indexNGBCSprites_Rock, 0x04 },
    { L"D - Extra Move 5", 0x23383c0, 0x23383e0, indexNGBCSprites_Rock, 0x05 },
    { L"D - Extra Move 6", 0x23383e0, 0x2338400, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_EA[] =
{
    { L"Rock EA", 0x2338400, 0x2338420, indexNGBCSprites_Rock },
    { L"E+A - Super Trail", 0x2338420, 0x2338440, indexNGBCSprites_Rock, 0x00 },
    { L"E+A - Extra Move 1", 0x2338440, 0x2338460, indexNGBCSprites_Rock, 0x01 },
    { L"E+A - Extra Move 2", 0x2338460, 0x2338480, indexNGBCSprites_Rock, 0x02 },
    { L"E+A - Extra Move 3", 0x2338480, 0x23384a0, indexNGBCSprites_Rock, 0x03 },
    { L"E+A - Extra Move 4", 0x23384a0, 0x23384c0, indexNGBCSprites_Rock, 0x04 },
    { L"E+A - Extra Move 5", 0x23384c0, 0x23384e0, indexNGBCSprites_Rock, 0x05 },
    { L"E+A - Extra Move 6", 0x23384e0, 0x2338500, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_EB[] =
{
    { L"Rock EB", 0x2338500, 0x2338520, indexNGBCSprites_Rock },
    { L"E+B - Super Trail", 0x2338520, 0x2338540, indexNGBCSprites_Rock, 0x00 },
    { L"E+B - Extra Move 1", 0x2338540, 0x2338560, indexNGBCSprites_Rock, 0x01 },
    { L"E+B - Extra Move 2", 0x2338560, 0x2338580, indexNGBCSprites_Rock, 0x02 },
    { L"E+B - Extra Move 3", 0x2338580, 0x23385a0, indexNGBCSprites_Rock, 0x03 },
    { L"E+B - Extra Move 4", 0x23385a0, 0x23385c0, indexNGBCSprites_Rock, 0x04 },
    { L"E+B - Extra Move 5", 0x23385c0, 0x23385e0, indexNGBCSprites_Rock, 0x05 },
    { L"E+B - Extra Move 6", 0x23385e0, 0x2338600, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_EC[] =
{
    { L"Rock EC", 0x2338600, 0x2338620, indexNGBCSprites_Rock },
    { L"E+C - Super Trail", 0x2338620, 0x2338640, indexNGBCSprites_Rock, 0x00 },
    { L"E+C - Extra Move 1", 0x2338640, 0x2338660, indexNGBCSprites_Rock, 0x01 },
    { L"E+C - Extra Move 2", 0x2338660, 0x2338680, indexNGBCSprites_Rock, 0x02 },
    { L"E+C - Extra Move 3", 0x2338680, 0x23386a0, indexNGBCSprites_Rock, 0x03 },
    { L"E+C - Extra Move 4", 0x23386a0, 0x23386c0, indexNGBCSprites_Rock, 0x04 },
    { L"E+C - Extra Move 5", 0x23386c0, 0x23386e0, indexNGBCSprites_Rock, 0x05 },
    { L"E+C - Extra Move 6", 0x23386e0, 0x2338700, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_ED[] =
{
    { L"Rock ED", 0x2338700, 0x2338720, indexNGBCSprites_Rock },
    { L"E+D - Super Trail", 0x2338720, 0x2338740, indexNGBCSprites_Rock, 0x00 },
    { L"E+D - Extra Move 1", 0x2338740, 0x2338760, indexNGBCSprites_Rock, 0x01 },
    { L"E+D - Extra Move 2", 0x2338760, 0x2338780, indexNGBCSprites_Rock, 0x02 },
    { L"E+D - Extra Move 3", 0x2338780, 0x23387a0, indexNGBCSprites_Rock, 0x03 },
    { L"E+D - Extra Move 4", 0x23387a0, 0x23387c0, indexNGBCSprites_Rock, 0x04 },
    { L"E+D - Extra Move 5", 0x23387c0, 0x23387e0, indexNGBCSprites_Rock, 0x05 },
    { L"E+D - Extra Move 6", 0x23387e0, 0x2338800, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_SA[] =
{
    { L"Rock SA", 0x2338800, 0x2338820, indexNGBCSprites_Rock },
    { L"Start+A - Super Trail", 0x2338820, 0x2338840, indexNGBCSprites_Rock, 0x00 },
    { L"Start+A - Extra Move 1", 0x2338840, 0x2338860, indexNGBCSprites_Rock, 0x01 },
    { L"Start+A - Extra Move 2", 0x2338860, 0x2338880, indexNGBCSprites_Rock, 0x02 },
    { L"Start+A - Extra Move 3", 0x2338880, 0x23388a0, indexNGBCSprites_Rock, 0x03 },
    { L"Start+A - Extra Move 4", 0x23388a0, 0x23388c0, indexNGBCSprites_Rock, 0x04 },
    { L"Start+A - Extra Move 5", 0x23388c0, 0x23388e0, indexNGBCSprites_Rock, 0x05 },
    { L"Start+A - Extra Move 6", 0x23388e0, 0x2338900, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_SB[] =
{
    { L"Rock SB", 0x2338900, 0x2338920, indexNGBCSprites_Rock },
    { L"Start+B - Super Trail", 0x2338920, 0x2338940, indexNGBCSprites_Rock, 0x00 },
    { L"Start+B - Extra Move 1", 0x2338940, 0x2338960, indexNGBCSprites_Rock, 0x01 },
    { L"Start+B - Extra Move 2", 0x2338960, 0x2338980, indexNGBCSprites_Rock, 0x02 },
    { L"Start+B - Extra Move 3", 0x2338980, 0x23389a0, indexNGBCSprites_Rock, 0x03 },
    { L"Start+B - Extra Move 4", 0x23389a0, 0x23389c0, indexNGBCSprites_Rock, 0x04 },
    { L"Start+B - Extra Move 5", 0x23389c0, 0x23389e0, indexNGBCSprites_Rock, 0x05 },
    { L"Start+B - Extra Move 6", 0x23389e0, 0x2338a00, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_SC[] =
{
    { L"Rock SC", 0x2338a00, 0x2338a20, indexNGBCSprites_Rock },
    { L"Start+C - Super Trail", 0x2338a20, 0x2338a40, indexNGBCSprites_Rock, 0x00 },
    { L"Start+C - Extra Move 1", 0x2338a40, 0x2338a60, indexNGBCSprites_Rock, 0x01 },
    { L"Start+C - Extra Move 2", 0x2338a60, 0x2338a80, indexNGBCSprites_Rock, 0x02 },
    { L"Start+C - Extra Move 3", 0x2338a80, 0x2338aa0, indexNGBCSprites_Rock, 0x03 },
    { L"Start+C - Extra Move 4", 0x2338aa0, 0x2338ac0, indexNGBCSprites_Rock, 0x04 },
    { L"Start+C - Extra Move 5", 0x2338ac0, 0x2338ae0, indexNGBCSprites_Rock, 0x05 },
    { L"Start+C - Extra Move 6", 0x2338ae0, 0x2338b00, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROCK_PALETTES_SD[] =
{
    { L"Rock SD", 0x2338b00, 0x2338b20, indexNGBCSprites_Rock },
    { L"Start+D - Super Trail", 0x2338b20, 0x2338b40, indexNGBCSprites_Rock, 0x00 },
    { L"Start+D - Extra Move 1", 0x2338b40, 0x2338b60, indexNGBCSprites_Rock, 0x01 },
    { L"Start+D - Extra Move 2", 0x2338b60, 0x2338b80, indexNGBCSprites_Rock, 0x02 },
    { L"Start+D - Extra Move 3", 0x2338b80, 0x2338ba0, indexNGBCSprites_Rock, 0x03 },
    { L"Start+D - Extra Move 4", 0x2338ba0, 0x2338bc0, indexNGBCSprites_Rock, 0x04 },
    { L"Start+D - Extra Move 5", 0x2338bc0, 0x2338be0, indexNGBCSprites_Rock, 0x05 },
    { L"Start+D - Extra Move 6", 0x2338be0, 0x2338c00, indexNGBCSprites_Rock, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_A[] =
{
    { L"Mai A", 0x2552000, 0x2552020, indexNGBCSprites_Mai },
    { L"A - Super Trail", 0x2552020, 0x2552040, indexNGBCSprites_Mai, 0x00 },
    { L"A - Extra Move 1", 0x2552040, 0x2552060, indexNGBCSprites_Mai, 0x01 },
    { L"A - Extra Move 2", 0x2552060, 0x2552080, indexNGBCSprites_Mai, 0x02 },
    { L"A - Extra Move 3", 0x2552080, 0x25520a0, indexNGBCSprites_Mai, 0x03 },
    { L"A - Extra Move 4", 0x25520a0, 0x25520c0, indexNGBCSprites_Mai, 0x04 },
    { L"A - Extra Move 5", 0x25520c0, 0x25520e0, indexNGBCSprites_Mai, 0x05 },
    { L"A - Extra Move 6", 0x25520e0, 0x2552100, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_B[] =
{
    { L"Mai B", 0x2552100, 0x2552120, indexNGBCSprites_Mai },
    { L"B - Super Trail", 0x2552120, 0x2552140, indexNGBCSprites_Mai, 0x00 },
    { L"B - Extra Move 1", 0x2552140, 0x2552160, indexNGBCSprites_Mai, 0x01 },
    { L"B - Extra Move 2", 0x2552160, 0x2552180, indexNGBCSprites_Mai, 0x02 },
    { L"B - Extra Move 3", 0x2552180, 0x25521a0, indexNGBCSprites_Mai, 0x03 },
    { L"B - Extra Move 4", 0x25521a0, 0x25521c0, indexNGBCSprites_Mai, 0x04 },
    { L"B - Extra Move 5", 0x25521c0, 0x25521e0, indexNGBCSprites_Mai, 0x05 },
    { L"B - Extra Move 6", 0x25521e0, 0x2552200, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_C[] =
{
    { L"Mai C", 0x2552200, 0x2552220, indexNGBCSprites_Mai },
    { L"C - Super Trail", 0x2552220, 0x2552240, indexNGBCSprites_Mai, 0x00 },
    { L"C - Extra Move 1", 0x2552240, 0x2552260, indexNGBCSprites_Mai, 0x01 },
    { L"C - Extra Move 2", 0x2552260, 0x2552280, indexNGBCSprites_Mai, 0x02 },
    { L"C - Extra Move 3", 0x2552280, 0x25522a0, indexNGBCSprites_Mai, 0x03 },
    { L"C - Extra Move 4", 0x25522a0, 0x25522c0, indexNGBCSprites_Mai, 0x04 },
    { L"C - Extra Move 5", 0x25522c0, 0x25522e0, indexNGBCSprites_Mai, 0x05 },
    { L"C - Extra Move 6", 0x25522e0, 0x2552300, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_D[] =
{
    { L"Mai D", 0x2552300, 0x2552320, indexNGBCSprites_Mai },
    { L"D - Super Trail", 0x2552320, 0x2552340, indexNGBCSprites_Mai, 0x00 },
    { L"D - Extra Move 1", 0x2552340, 0x2552360, indexNGBCSprites_Mai, 0x01 },
    { L"D - Extra Move 2", 0x2552360, 0x2552380, indexNGBCSprites_Mai, 0x02 },
    { L"D - Extra Move 3", 0x2552380, 0x25523a0, indexNGBCSprites_Mai, 0x03 },
    { L"D - Extra Move 4", 0x25523a0, 0x25523c0, indexNGBCSprites_Mai, 0x04 },
    { L"D - Extra Move 5", 0x25523c0, 0x25523e0, indexNGBCSprites_Mai, 0x05 },
    { L"D - Extra Move 6", 0x25523e0, 0x2552400, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_EA[] =
{
    { L"Mai EA", 0x2552400, 0x2552420, indexNGBCSprites_Mai },
    { L"E+A - Super Trail", 0x2552420, 0x2552440, indexNGBCSprites_Mai, 0x00 },
    { L"E+A - Extra Move 1", 0x2552440, 0x2552460, indexNGBCSprites_Mai, 0x01 },
    { L"E+A - Extra Move 2", 0x2552460, 0x2552480, indexNGBCSprites_Mai, 0x02 },
    { L"E+A - Extra Move 3", 0x2552480, 0x25524a0, indexNGBCSprites_Mai, 0x03 },
    { L"E+A - Extra Move 4", 0x25524a0, 0x25524c0, indexNGBCSprites_Mai, 0x04 },
    { L"E+A - Extra Move 5", 0x25524c0, 0x25524e0, indexNGBCSprites_Mai, 0x05 },
    { L"E+A - Extra Move 6", 0x25524e0, 0x2552500, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_EB[] =
{
    { L"Mai EB", 0x2552500, 0x2552520, indexNGBCSprites_Mai },
    { L"E+B - Super Trail", 0x2552520, 0x2552540, indexNGBCSprites_Mai, 0x00 },
    { L"E+B - Extra Move 1", 0x2552540, 0x2552560, indexNGBCSprites_Mai, 0x01 },
    { L"E+B - Extra Move 2", 0x2552560, 0x2552580, indexNGBCSprites_Mai, 0x02 },
    { L"E+B - Extra Move 3", 0x2552580, 0x25525a0, indexNGBCSprites_Mai, 0x03 },
    { L"E+B - Extra Move 4", 0x25525a0, 0x25525c0, indexNGBCSprites_Mai, 0x04 },
    { L"E+B - Extra Move 5", 0x25525c0, 0x25525e0, indexNGBCSprites_Mai, 0x05 },
    { L"E+B - Extra Move 6", 0x25525e0, 0x2552600, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_EC[] =
{
    { L"Mai EC", 0x2552600, 0x2552620, indexNGBCSprites_Mai },
    { L"E+C - Super Trail", 0x2552620, 0x2552640, indexNGBCSprites_Mai, 0x00 },
    { L"E+C - Extra Move 1", 0x2552640, 0x2552660, indexNGBCSprites_Mai, 0x01 },
    { L"E+C - Extra Move 2", 0x2552660, 0x2552680, indexNGBCSprites_Mai, 0x02 },
    { L"E+C - Extra Move 3", 0x2552680, 0x25526a0, indexNGBCSprites_Mai, 0x03 },
    { L"E+C - Extra Move 4", 0x25526a0, 0x25526c0, indexNGBCSprites_Mai, 0x04 },
    { L"E+C - Extra Move 5", 0x25526c0, 0x25526e0, indexNGBCSprites_Mai, 0x05 },
    { L"E+C - Extra Move 6", 0x25526e0, 0x2552700, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_ED[] =
{
    { L"Mai ED", 0x2552700, 0x2552720, indexNGBCSprites_Mai },
    { L"E+D - Super Trail", 0x2552720, 0x2552740, indexNGBCSprites_Mai, 0x00 },
    { L"E+D - Extra Move 1", 0x2552740, 0x2552760, indexNGBCSprites_Mai, 0x01 },
    { L"E+D - Extra Move 2", 0x2552760, 0x2552780, indexNGBCSprites_Mai, 0x02 },
    { L"E+D - Extra Move 3", 0x2552780, 0x25527a0, indexNGBCSprites_Mai, 0x03 },
    { L"E+D - Extra Move 4", 0x25527a0, 0x25527c0, indexNGBCSprites_Mai, 0x04 },
    { L"E+D - Extra Move 5", 0x25527c0, 0x25527e0, indexNGBCSprites_Mai, 0x05 },
    { L"E+D - Extra Move 6", 0x25527e0, 0x2552800, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_SA[] =
{
    { L"Mai SA", 0x2552800, 0x2552820, indexNGBCSprites_Mai },
    { L"Start+A - Super Trail", 0x2552820, 0x2552840, indexNGBCSprites_Mai, 0x00 },
    { L"Start+A - Extra Move 1", 0x2552840, 0x2552860, indexNGBCSprites_Mai, 0x01 },
    { L"Start+A - Extra Move 2", 0x2552860, 0x2552880, indexNGBCSprites_Mai, 0x02 },
    { L"Start+A - Extra Move 3", 0x2552880, 0x25528a0, indexNGBCSprites_Mai, 0x03 },
    { L"Start+A - Extra Move 4", 0x25528a0, 0x25528c0, indexNGBCSprites_Mai, 0x04 },
    { L"Start+A - Extra Move 5", 0x25528c0, 0x25528e0, indexNGBCSprites_Mai, 0x05 },
    { L"Start+A - Extra Move 6", 0x25528e0, 0x2552900, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_SB[] =
{
    { L"Mai SB", 0x2552900, 0x2552920, indexNGBCSprites_Mai },
    { L"Start+B - Super Trail", 0x2552920, 0x2552940, indexNGBCSprites_Mai, 0x00 },
    { L"Start+B - Extra Move 1", 0x2552940, 0x2552960, indexNGBCSprites_Mai, 0x01 },
    { L"Start+B - Extra Move 2", 0x2552960, 0x2552980, indexNGBCSprites_Mai, 0x02 },
    { L"Start+B - Extra Move 3", 0x2552980, 0x25529a0, indexNGBCSprites_Mai, 0x03 },
    { L"Start+B - Extra Move 4", 0x25529a0, 0x25529c0, indexNGBCSprites_Mai, 0x04 },
    { L"Start+B - Extra Move 5", 0x25529c0, 0x25529e0, indexNGBCSprites_Mai, 0x05 },
    { L"Start+B - Extra Move 6", 0x25529e0, 0x2552a00, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_SC[] =
{
    { L"Mai SC", 0x2552a00, 0x2552a20, indexNGBCSprites_Mai },
    { L"Start+C - Super Trail", 0x2552a20, 0x2552a40, indexNGBCSprites_Mai, 0x00 },
    { L"Start+C - Extra Move 1", 0x2552a40, 0x2552a60, indexNGBCSprites_Mai, 0x01 },
    { L"Start+C - Extra Move 2", 0x2552a60, 0x2552a80, indexNGBCSprites_Mai, 0x02 },
    { L"Start+C - Extra Move 3", 0x2552a80, 0x2552aa0, indexNGBCSprites_Mai, 0x03 },
    { L"Start+C - Extra Move 4", 0x2552aa0, 0x2552ac0, indexNGBCSprites_Mai, 0x04 },
    { L"Start+C - Extra Move 5", 0x2552ac0, 0x2552ae0, indexNGBCSprites_Mai, 0x05 },
    { L"Start+C - Extra Move 6", 0x2552ae0, 0x2552b00, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MAI_PALETTES_SD[] =
{
    { L"Mai SD", 0x2552b00, 0x2552b20, indexNGBCSprites_Mai },
    { L"Start+D - Super Trail", 0x2552b20, 0x2552b40, indexNGBCSprites_Mai, 0x00 },
    { L"Start+D - Extra Move 1", 0x2552b40, 0x2552b60, indexNGBCSprites_Mai, 0x01 },
    { L"Start+D - Extra Move 2", 0x2552b60, 0x2552b80, indexNGBCSprites_Mai, 0x02 },
    { L"Start+D - Extra Move 3", 0x2552b80, 0x2552ba0, indexNGBCSprites_Mai, 0x03 },
    { L"Start+D - Extra Move 4", 0x2552ba0, 0x2552bc0, indexNGBCSprites_Mai, 0x04 },
    { L"Start+D - Extra Move 5", 0x2552bc0, 0x2552be0, indexNGBCSprites_Mai, 0x05 },
    { L"Start+D - Extra Move 6", 0x2552be0, 0x2552c00, indexNGBCSprites_Mai, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_A[] =
{
    { L"Shermie A", 0x26d3800, 0x26d3820, indexNGBCSprites_Shermie },
    { L"A - Super Trail", 0x26d3820, 0x26d3840, indexNGBCSprites_Shermie, 0x00 },
    { L"A - Extra Move 1", 0x26d3840, 0x26d3860, indexNGBCSprites_Shermie, 0x01 },
    { L"A - Extra Move 2", 0x26d3860, 0x26d3880, indexNGBCSprites_Shermie, 0x02 },
    { L"A - Extra Move 3", 0x26d3880, 0x26d38a0, indexNGBCSprites_Shermie, 0x03 },
    { L"A - Extra Move 4", 0x26d38a0, 0x26d38c0, indexNGBCSprites_Shermie, 0x04 },
    { L"A - Extra Move 5", 0x26d38c0, 0x26d38e0, indexNGBCSprites_Shermie, 0x05 },
    { L"A - Extra Move 6", 0x26d38e0, 0x26d3900, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_B[] =
{
    { L"Shermie B", 0x26d3900, 0x26d3920, indexNGBCSprites_Shermie },
    { L"B - Super Trail", 0x26d3920, 0x26d3940, indexNGBCSprites_Shermie, 0x00 },
    { L"B - Extra Move 1", 0x26d3940, 0x26d3960, indexNGBCSprites_Shermie, 0x01 },
    { L"B - Extra Move 2", 0x26d3960, 0x26d3980, indexNGBCSprites_Shermie, 0x02 },
    { L"B - Extra Move 3", 0x26d3980, 0x26d39a0, indexNGBCSprites_Shermie, 0x03 },
    { L"B - Extra Move 4", 0x26d39a0, 0x26d39c0, indexNGBCSprites_Shermie, 0x04 },
    { L"B - Extra Move 5", 0x26d39c0, 0x26d39e0, indexNGBCSprites_Shermie, 0x05 },
    { L"B - Extra Move 6", 0x26d39e0, 0x26d3a00, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_C[] =
{
    { L"Shermie C", 0x26d3a00, 0x26d3a20, indexNGBCSprites_Shermie },
    { L"C - Super Trail", 0x26d3a20, 0x26d3a40, indexNGBCSprites_Shermie, 0x00 },
    { L"C - Extra Move 1", 0x26d3a40, 0x26d3a60, indexNGBCSprites_Shermie, 0x01 },
    { L"C - Extra Move 2", 0x26d3a60, 0x26d3a80, indexNGBCSprites_Shermie, 0x02 },
    { L"C - Extra Move 3", 0x26d3a80, 0x26d3aa0, indexNGBCSprites_Shermie, 0x03 },
    { L"C - Extra Move 4", 0x26d3aa0, 0x26d3ac0, indexNGBCSprites_Shermie, 0x04 },
    { L"C - Extra Move 5", 0x26d3ac0, 0x26d3ae0, indexNGBCSprites_Shermie, 0x05 },
    { L"C - Extra Move 6", 0x26d3ae0, 0x26d3b00, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_D[] =
{
    { L"Shermie D", 0x26d3b00, 0x26d3b20, indexNGBCSprites_Shermie },
    { L"D - Super Trail", 0x26d3b20, 0x26d3b40, indexNGBCSprites_Shermie, 0x00 },
    { L"D - Extra Move 1", 0x26d3b40, 0x26d3b60, indexNGBCSprites_Shermie, 0x01 },
    { L"D - Extra Move 2", 0x26d3b60, 0x26d3b80, indexNGBCSprites_Shermie, 0x02 },
    { L"D - Extra Move 3", 0x26d3b80, 0x26d3ba0, indexNGBCSprites_Shermie, 0x03 },
    { L"D - Extra Move 4", 0x26d3ba0, 0x26d3bc0, indexNGBCSprites_Shermie, 0x04 },
    { L"D - Extra Move 5", 0x26d3bc0, 0x26d3be0, indexNGBCSprites_Shermie, 0x05 },
    { L"D - Extra Move 6", 0x26d3be0, 0x26d3c00, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_EA[] =
{
    { L"Shermie EA", 0x26d3c00, 0x26d3c20, indexNGBCSprites_Shermie },
    { L"E+A - Super Trail", 0x26d3c20, 0x26d3c40, indexNGBCSprites_Shermie, 0x00 },
    { L"E+A - Extra Move 1", 0x26d3c40, 0x26d3c60, indexNGBCSprites_Shermie, 0x01 },
    { L"E+A - Extra Move 2", 0x26d3c60, 0x26d3c80, indexNGBCSprites_Shermie, 0x02 },
    { L"E+A - Extra Move 3", 0x26d3c80, 0x26d3ca0, indexNGBCSprites_Shermie, 0x03 },
    { L"E+A - Extra Move 4", 0x26d3ca0, 0x26d3cc0, indexNGBCSprites_Shermie, 0x04 },
    { L"E+A - Extra Move 5", 0x26d3cc0, 0x26d3ce0, indexNGBCSprites_Shermie, 0x05 },
    { L"E+A - Extra Move 6", 0x26d3ce0, 0x26d3d00, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_EB[] =
{
    { L"Shermie EB", 0x26d3d00, 0x26d3d20, indexNGBCSprites_Shermie },
    { L"E+B - Super Trail", 0x26d3d20, 0x26d3d40, indexNGBCSprites_Shermie, 0x00 },
    { L"E+B - Extra Move 1", 0x26d3d40, 0x26d3d60, indexNGBCSprites_Shermie, 0x01 },
    { L"E+B - Extra Move 2", 0x26d3d60, 0x26d3d80, indexNGBCSprites_Shermie, 0x02 },
    { L"E+B - Extra Move 3", 0x26d3d80, 0x26d3da0, indexNGBCSprites_Shermie, 0x03 },
    { L"E+B - Extra Move 4", 0x26d3da0, 0x26d3dc0, indexNGBCSprites_Shermie, 0x04 },
    { L"E+B - Extra Move 5", 0x26d3dc0, 0x26d3de0, indexNGBCSprites_Shermie, 0x05 },
    { L"E+B - Extra Move 6", 0x26d3de0, 0x26d3e00, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_EC[] =
{
    { L"Shermie EC", 0x26d3e00, 0x26d3e20, indexNGBCSprites_Shermie },
    { L"E+C - Super Trail", 0x26d3e20, 0x26d3e40, indexNGBCSprites_Shermie, 0x00 },
    { L"E+C - Extra Move 1", 0x26d3e40, 0x26d3e60, indexNGBCSprites_Shermie, 0x01 },
    { L"E+C - Extra Move 2", 0x26d3e60, 0x26d3e80, indexNGBCSprites_Shermie, 0x02 },
    { L"E+C - Extra Move 3", 0x26d3e80, 0x26d3ea0, indexNGBCSprites_Shermie, 0x03 },
    { L"E+C - Extra Move 4", 0x26d3ea0, 0x26d3ec0, indexNGBCSprites_Shermie, 0x04 },
    { L"E+C - Extra Move 5", 0x26d3ec0, 0x26d3ee0, indexNGBCSprites_Shermie, 0x05 },
    { L"E+C - Extra Move 6", 0x26d3ee0, 0x26d3f00, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_ED[] =
{
    { L"Shermie ED", 0x26d3f00, 0x26d3f20, indexNGBCSprites_Shermie },
    { L"E+D - Super Trail", 0x26d3f20, 0x26d3f40, indexNGBCSprites_Shermie, 0x00 },
    { L"E+D - Extra Move 1", 0x26d3f40, 0x26d3f60, indexNGBCSprites_Shermie, 0x01 },
    { L"E+D - Extra Move 2", 0x26d3f60, 0x26d3f80, indexNGBCSprites_Shermie, 0x02 },
    { L"E+D - Extra Move 3", 0x26d3f80, 0x26d3fa0, indexNGBCSprites_Shermie, 0x03 },
    { L"E+D - Extra Move 4", 0x26d3fa0, 0x26d3fc0, indexNGBCSprites_Shermie, 0x04 },
    { L"E+D - Extra Move 5", 0x26d3fc0, 0x26d3fe0, indexNGBCSprites_Shermie, 0x05 },
    { L"E+D - Extra Move 6", 0x26d3fe0, 0x26d4000, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_SA[] =
{
    { L"Shermie SA", 0x26d4000, 0x26d4020, indexNGBCSprites_Shermie },
    { L"Start+A - Super Trail", 0x26d4020, 0x26d4040, indexNGBCSprites_Shermie, 0x00 },
    { L"Start+A - Extra Move 1", 0x26d4040, 0x26d4060, indexNGBCSprites_Shermie, 0x01 },
    { L"Start+A - Extra Move 2", 0x26d4060, 0x26d4080, indexNGBCSprites_Shermie, 0x02 },
    { L"Start+A - Extra Move 3", 0x26d4080, 0x26d40a0, indexNGBCSprites_Shermie, 0x03 },
    { L"Start+A - Extra Move 4", 0x26d40a0, 0x26d40c0, indexNGBCSprites_Shermie, 0x04 },
    { L"Start+A - Extra Move 5", 0x26d40c0, 0x26d40e0, indexNGBCSprites_Shermie, 0x05 },
    { L"Start+A - Extra Move 6", 0x26d40e0, 0x26d4100, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_SB[] =
{
    { L"Shermie SB", 0x26d4100, 0x26d4120, indexNGBCSprites_Shermie },
    { L"Start+B - Super Trail", 0x26d4120, 0x26d4140, indexNGBCSprites_Shermie, 0x00 },
    { L"Start+B - Extra Move 1", 0x26d4140, 0x26d4160, indexNGBCSprites_Shermie, 0x01 },
    { L"Start+B - Extra Move 2", 0x26d4160, 0x26d4180, indexNGBCSprites_Shermie, 0x02 },
    { L"Start+B - Extra Move 3", 0x26d4180, 0x26d41a0, indexNGBCSprites_Shermie, 0x03 },
    { L"Start+B - Extra Move 4", 0x26d41a0, 0x26d41c0, indexNGBCSprites_Shermie, 0x04 },
    { L"Start+B - Extra Move 5", 0x26d41c0, 0x26d41e0, indexNGBCSprites_Shermie, 0x05 },
    { L"Start+B - Extra Move 6", 0x26d41e0, 0x26d4200, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_SC[] =
{
    { L"Shermie SC", 0x26d4200, 0x26d4220, indexNGBCSprites_Shermie },
    { L"Start+C - Super Trail", 0x26d4220, 0x26d4240, indexNGBCSprites_Shermie, 0x00 },
    { L"Start+C - Extra Move 1", 0x26d4240, 0x26d4260, indexNGBCSprites_Shermie, 0x01 },
    { L"Start+C - Extra Move 2", 0x26d4260, 0x26d4280, indexNGBCSprites_Shermie, 0x02 },
    { L"Start+C - Extra Move 3", 0x26d4280, 0x26d42a0, indexNGBCSprites_Shermie, 0x03 },
    { L"Start+C - Extra Move 4", 0x26d42a0, 0x26d42c0, indexNGBCSprites_Shermie, 0x04 },
    { L"Start+C - Extra Move 5", 0x26d42c0, 0x26d42e0, indexNGBCSprites_Shermie, 0x05 },
    { L"Start+C - Extra Move 6", 0x26d42e0, 0x26d4300, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHERMIE_PALETTES_SD[] =
{
    { L"Shermie SD", 0x26d4300, 0x26d4320, indexNGBCSprites_Shermie },
    { L"Start+D - Super Trail", 0x26d4320, 0x26d4340, indexNGBCSprites_Shermie, 0x00 },
    { L"Start+D - Extra Move 1", 0x26d4340, 0x26d4360, indexNGBCSprites_Shermie, 0x01 },
    { L"Start+D - Extra Move 2", 0x26d4360, 0x26d4380, indexNGBCSprites_Shermie, 0x02 },
    { L"Start+D - Extra Move 3", 0x26d4380, 0x26d43a0, indexNGBCSprites_Shermie, 0x03 },
    { L"Start+D - Extra Move 4", 0x26d43a0, 0x26d43c0, indexNGBCSprites_Shermie, 0x04 },
    { L"Start+D - Extra Move 5", 0x26d43c0, 0x26d43e0, indexNGBCSprites_Shermie, 0x05 },
    { L"Start+D - Extra Move 6", 0x26d43e0, 0x26d4400, indexNGBCSprites_Shermie, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_A[] =
{
    { L"Geese A", 0x2867000, 0x2867020, indexNGBCSprites_Geese },
    { L"A - Super Trail", 0x2867020, 0x2867040, indexNGBCSprites_Geese, 0x00 },
    { L"A - Extra Move 1", 0x2867040, 0x2867060, indexNGBCSprites_Geese, 0x01 },
    { L"A - Extra Move 2", 0x2867060, 0x2867080, indexNGBCSprites_Geese, 0x02 },
    { L"A - Extra Move 3", 0x2867080, 0x28670a0, indexNGBCSprites_Geese, 0x03 },
    { L"A - Extra Move 4", 0x28670a0, 0x28670c0, indexNGBCSprites_Geese, 0x04 },
    { L"A - Extra Move 5", 0x28670c0, 0x28670e0, indexNGBCSprites_Geese, 0x05 },
    { L"A - Extra Move 6", 0x28670e0, 0x2867100, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_B[] =
{
    { L"Geese B", 0x2867100, 0x2867120, indexNGBCSprites_Geese },
    { L"B - Super Trail", 0x2867120, 0x2867140, indexNGBCSprites_Geese, 0x00 },
    { L"B - Extra Move 1", 0x2867140, 0x2867160, indexNGBCSprites_Geese, 0x01 },
    { L"B - Extra Move 2", 0x2867160, 0x2867180, indexNGBCSprites_Geese, 0x02 },
    { L"B - Extra Move 3", 0x2867180, 0x28671a0, indexNGBCSprites_Geese, 0x03 },
    { L"B - Extra Move 4", 0x28671a0, 0x28671c0, indexNGBCSprites_Geese, 0x04 },
    { L"B - Extra Move 5", 0x28671c0, 0x28671e0, indexNGBCSprites_Geese, 0x05 },
    { L"B - Extra Move 6", 0x28671e0, 0x2867200, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_C[] =
{
    { L"Geese C", 0x2867200, 0x2867220, indexNGBCSprites_Geese },
    { L"C - Super Trail", 0x2867220, 0x2867240, indexNGBCSprites_Geese, 0x00 },
    { L"C - Extra Move 1", 0x2867240, 0x2867260, indexNGBCSprites_Geese, 0x01 },
    { L"C - Extra Move 2", 0x2867260, 0x2867280, indexNGBCSprites_Geese, 0x02 },
    { L"C - Extra Move 3", 0x2867280, 0x28672a0, indexNGBCSprites_Geese, 0x03 },
    { L"C - Extra Move 4", 0x28672a0, 0x28672c0, indexNGBCSprites_Geese, 0x04 },
    { L"C - Extra Move 5", 0x28672c0, 0x28672e0, indexNGBCSprites_Geese, 0x05 },
    { L"C - Extra Move 6", 0x28672e0, 0x2867300, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_D[] =
{
    { L"Geese D", 0x2867300, 0x2867320, indexNGBCSprites_Geese },
    { L"D - Super Trail", 0x2867320, 0x2867340, indexNGBCSprites_Geese, 0x00 },
    { L"D - Extra Move 1", 0x2867340, 0x2867360, indexNGBCSprites_Geese, 0x01 },
    { L"D - Extra Move 2", 0x2867360, 0x2867380, indexNGBCSprites_Geese, 0x02 },
    { L"D - Extra Move 3", 0x2867380, 0x28673a0, indexNGBCSprites_Geese, 0x03 },
    { L"D - Extra Move 4", 0x28673a0, 0x28673c0, indexNGBCSprites_Geese, 0x04 },
    { L"D - Extra Move 5", 0x28673c0, 0x28673e0, indexNGBCSprites_Geese, 0x05 },
    { L"D - Extra Move 6", 0x28673e0, 0x2867400, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_EA[] =
{
    { L"Geese EA", 0x2867400, 0x2867420, indexNGBCSprites_Geese },
    { L"E+A - Super Trail", 0x2867420, 0x2867440, indexNGBCSprites_Geese, 0x00 },
    { L"E+A - Extra Move 1", 0x2867440, 0x2867460, indexNGBCSprites_Geese, 0x01 },
    { L"E+A - Extra Move 2", 0x2867460, 0x2867480, indexNGBCSprites_Geese, 0x02 },
    { L"E+A - Extra Move 3", 0x2867480, 0x28674a0, indexNGBCSprites_Geese, 0x03 },
    { L"E+A - Extra Move 4", 0x28674a0, 0x28674c0, indexNGBCSprites_Geese, 0x04 },
    { L"E+A - Extra Move 5", 0x28674c0, 0x28674e0, indexNGBCSprites_Geese, 0x05 },
    { L"E+A - Extra Move 6", 0x28674e0, 0x2867500, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_EB[] =
{
    { L"Geese EB", 0x2867500, 0x2867520, indexNGBCSprites_Geese },
    { L"E+B - Super Trail", 0x2867520, 0x2867540, indexNGBCSprites_Geese, 0x00 },
    { L"E+B - Extra Move 1", 0x2867540, 0x2867560, indexNGBCSprites_Geese, 0x01 },
    { L"E+B - Extra Move 2", 0x2867560, 0x2867580, indexNGBCSprites_Geese, 0x02 },
    { L"E+B - Extra Move 3", 0x2867580, 0x28675a0, indexNGBCSprites_Geese, 0x03 },
    { L"E+B - Extra Move 4", 0x28675a0, 0x28675c0, indexNGBCSprites_Geese, 0x04 },
    { L"E+B - Extra Move 5", 0x28675c0, 0x28675e0, indexNGBCSprites_Geese, 0x05 },
    { L"E+B - Extra Move 6", 0x28675e0, 0x2867600, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_EC[] =
{
    { L"Geese EC", 0x2867600, 0x2867620, indexNGBCSprites_Geese },
    { L"E+C - Super Trail", 0x2867620, 0x2867640, indexNGBCSprites_Geese, 0x00 },
    { L"E+C - Extra Move 1", 0x2867640, 0x2867660, indexNGBCSprites_Geese, 0x01 },
    { L"E+C - Extra Move 2", 0x2867660, 0x2867680, indexNGBCSprites_Geese, 0x02 },
    { L"E+C - Extra Move 3", 0x2867680, 0x28676a0, indexNGBCSprites_Geese, 0x03 },
    { L"E+C - Extra Move 4", 0x28676a0, 0x28676c0, indexNGBCSprites_Geese, 0x04 },
    { L"E+C - Extra Move 5", 0x28676c0, 0x28676e0, indexNGBCSprites_Geese, 0x05 },
    { L"E+C - Extra Move 6", 0x28676e0, 0x2867700, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_ED[] =
{
    { L"Geese ED", 0x2867700, 0x2867720, indexNGBCSprites_Geese },
    { L"E+D - Super Trail", 0x2867720, 0x2867740, indexNGBCSprites_Geese, 0x00 },
    { L"E+D - Extra Move 1", 0x2867740, 0x2867760, indexNGBCSprites_Geese, 0x01 },
    { L"E+D - Extra Move 2", 0x2867760, 0x2867780, indexNGBCSprites_Geese, 0x02 },
    { L"E+D - Extra Move 3", 0x2867780, 0x28677a0, indexNGBCSprites_Geese, 0x03 },
    { L"E+D - Extra Move 4", 0x28677a0, 0x28677c0, indexNGBCSprites_Geese, 0x04 },
    { L"E+D - Extra Move 5", 0x28677c0, 0x28677e0, indexNGBCSprites_Geese, 0x05 },
    { L"E+D - Extra Move 6", 0x28677e0, 0x2867800, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_SA[] =
{
    { L"Geese SA", 0x2867800, 0x2867820, indexNGBCSprites_Geese },
    { L"Start+A - Super Trail", 0x2867820, 0x2867840, indexNGBCSprites_Geese, 0x00 },
    { L"Start+A - Extra Move 1", 0x2867840, 0x2867860, indexNGBCSprites_Geese, 0x01 },
    { L"Start+A - Extra Move 2", 0x2867860, 0x2867880, indexNGBCSprites_Geese, 0x02 },
    { L"Start+A - Extra Move 3", 0x2867880, 0x28678a0, indexNGBCSprites_Geese, 0x03 },
    { L"Start+A - Extra Move 4", 0x28678a0, 0x28678c0, indexNGBCSprites_Geese, 0x04 },
    { L"Start+A - Extra Move 5", 0x28678c0, 0x28678e0, indexNGBCSprites_Geese, 0x05 },
    { L"Start+A - Extra Move 6", 0x28678e0, 0x2867900, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_SB[] =
{
    { L"Geese SB", 0x2867900, 0x2867920, indexNGBCSprites_Geese },
    { L"Start+B - Super Trail", 0x2867920, 0x2867940, indexNGBCSprites_Geese, 0x00 },
    { L"Start+B - Extra Move 1", 0x2867940, 0x2867960, indexNGBCSprites_Geese, 0x01 },
    { L"Start+B - Extra Move 2", 0x2867960, 0x2867980, indexNGBCSprites_Geese, 0x02 },
    { L"Start+B - Extra Move 3", 0x2867980, 0x28679a0, indexNGBCSprites_Geese, 0x03 },
    { L"Start+B - Extra Move 4", 0x28679a0, 0x28679c0, indexNGBCSprites_Geese, 0x04 },
    { L"Start+B - Extra Move 5", 0x28679c0, 0x28679e0, indexNGBCSprites_Geese, 0x05 },
    { L"Start+B - Extra Move 6", 0x28679e0, 0x2867a00, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_SC[] =
{
    { L"Geese SC", 0x2867a00, 0x2867a20, indexNGBCSprites_Geese },
    { L"Start+C - Super Trail", 0x2867a20, 0x2867a40, indexNGBCSprites_Geese, 0x00 },
    { L"Start+C - Extra Move 1", 0x2867a40, 0x2867a60, indexNGBCSprites_Geese, 0x01 },
    { L"Start+C - Extra Move 2", 0x2867a60, 0x2867a80, indexNGBCSprites_Geese, 0x02 },
    { L"Start+C - Extra Move 3", 0x2867a80, 0x2867aa0, indexNGBCSprites_Geese, 0x03 },
    { L"Start+C - Extra Move 4", 0x2867aa0, 0x2867ac0, indexNGBCSprites_Geese, 0x04 },
    { L"Start+C - Extra Move 5", 0x2867ac0, 0x2867ae0, indexNGBCSprites_Geese, 0x05 },
    { L"Start+C - Extra Move 6", 0x2867ae0, 0x2867b00, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GEESE_PALETTES_SD[] =
{
    { L"Geese SD", 0x2867b00, 0x2867b20, indexNGBCSprites_Geese },
    { L"Start+D - Super Trail", 0x2867b20, 0x2867b40, indexNGBCSprites_Geese, 0x00 },
    { L"Start+D - Extra Move 1", 0x2867b40, 0x2867b60, indexNGBCSprites_Geese, 0x01 },
    { L"Start+D - Extra Move 2", 0x2867b60, 0x2867b80, indexNGBCSprites_Geese, 0x02 },
    { L"Start+D - Extra Move 3", 0x2867b80, 0x2867ba0, indexNGBCSprites_Geese, 0x03 },
    { L"Start+D - Extra Move 4", 0x2867ba0, 0x2867bc0, indexNGBCSprites_Geese, 0x04 },
    { L"Start+D - Extra Move 5", 0x2867bc0, 0x2867be0, indexNGBCSprites_Geese, 0x05 },
    { L"Start+D - Extra Move 6", 0x2867be0, 0x2867c00, indexNGBCSprites_Geese, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_A[] =
{
    { L"Mr. Big A", 0x2a0a800, 0x2a0a820, indexNGBCSprites_MrBig },
    { L"A - Super Trail", 0x2a0a820, 0x2a0a840, indexNGBCSprites_MrBig, 0x00 },
    { L"A - Extra Move 1", 0x2a0a840, 0x2a0a860, indexNGBCSprites_MrBig, 0x01 },
    { L"A - Extra Move 2", 0x2a0a860, 0x2a0a880, indexNGBCSprites_MrBig, 0x02 },
    { L"A - Extra Move 3", 0x2a0a880, 0x2a0a8a0, indexNGBCSprites_MrBig, 0x03 },
    { L"A - Extra Move 4", 0x2a0a8a0, 0x2a0a8c0, indexNGBCSprites_MrBig, 0x04 },
    { L"A - Extra Move 5", 0x2a0a8c0, 0x2a0a8e0, indexNGBCSprites_MrBig, 0x05 },
    { L"A - Extra Move 6", 0x2a0a8e0, 0x2a0a900, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_B[] =
{
    { L"Mr. Big B", 0x2a0a900, 0x2a0a920, indexNGBCSprites_MrBig },
    { L"B - Super Trail", 0x2a0a920, 0x2a0a940, indexNGBCSprites_MrBig, 0x00 },
    { L"B - Extra Move 1", 0x2a0a940, 0x2a0a960, indexNGBCSprites_MrBig, 0x01 },
    { L"B - Extra Move 2", 0x2a0a960, 0x2a0a980, indexNGBCSprites_MrBig, 0x02 },
    { L"B - Extra Move 3", 0x2a0a980, 0x2a0a9a0, indexNGBCSprites_MrBig, 0x03 },
    { L"B - Extra Move 4", 0x2a0a9a0, 0x2a0a9c0, indexNGBCSprites_MrBig, 0x04 },
    { L"B - Extra Move 5", 0x2a0a9c0, 0x2a0a9e0, indexNGBCSprites_MrBig, 0x05 },
    { L"B - Extra Move 6", 0x2a0a9e0, 0x2a0aa00, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_C[] =
{
    { L"Mr. Big C", 0x2a0aa00, 0x2a0aa20, indexNGBCSprites_MrBig },
    { L"C - Super Trail", 0x2a0aa20, 0x2a0aa40, indexNGBCSprites_MrBig, 0x00 },
    { L"C - Extra Move 1", 0x2a0aa40, 0x2a0aa60, indexNGBCSprites_MrBig, 0x01 },
    { L"C - Extra Move 2", 0x2a0aa60, 0x2a0aa80, indexNGBCSprites_MrBig, 0x02 },
    { L"C - Extra Move 3", 0x2a0aa80, 0x2a0aaa0, indexNGBCSprites_MrBig, 0x03 },
    { L"C - Extra Move 4", 0x2a0aaa0, 0x2a0aac0, indexNGBCSprites_MrBig, 0x04 },
    { L"C - Extra Move 5", 0x2a0aac0, 0x2a0aae0, indexNGBCSprites_MrBig, 0x05 },
    { L"C - Extra Move 6", 0x2a0aae0, 0x2a0ab00, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_D[] =
{
    { L"Mr. Big D", 0x2a0ab00, 0x2a0ab20, indexNGBCSprites_MrBig },
    { L"D - Super Trail", 0x2a0ab20, 0x2a0ab40, indexNGBCSprites_MrBig, 0x00 },
    { L"D - Extra Move 1", 0x2a0ab40, 0x2a0ab60, indexNGBCSprites_MrBig, 0x01 },
    { L"D - Extra Move 2", 0x2a0ab60, 0x2a0ab80, indexNGBCSprites_MrBig, 0x02 },
    { L"D - Extra Move 3", 0x2a0ab80, 0x2a0aba0, indexNGBCSprites_MrBig, 0x03 },
    { L"D - Extra Move 4", 0x2a0aba0, 0x2a0abc0, indexNGBCSprites_MrBig, 0x04 },
    { L"D - Extra Move 5", 0x2a0abc0, 0x2a0abe0, indexNGBCSprites_MrBig, 0x05 },
    { L"D - Extra Move 6", 0x2a0abe0, 0x2a0ac00, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_EA[] =
{
    { L"Mr. Big EA", 0x2a0ac00, 0x2a0ac20, indexNGBCSprites_MrBig },
    { L"E+A - Super Trail", 0x2a0ac20, 0x2a0ac40, indexNGBCSprites_MrBig, 0x00 },
    { L"E+A - Extra Move 1", 0x2a0ac40, 0x2a0ac60, indexNGBCSprites_MrBig, 0x01 },
    { L"E+A - Extra Move 2", 0x2a0ac60, 0x2a0ac80, indexNGBCSprites_MrBig, 0x02 },
    { L"E+A - Extra Move 3", 0x2a0ac80, 0x2a0aca0, indexNGBCSprites_MrBig, 0x03 },
    { L"E+A - Extra Move 4", 0x2a0aca0, 0x2a0acc0, indexNGBCSprites_MrBig, 0x04 },
    { L"E+A - Extra Move 5", 0x2a0acc0, 0x2a0ace0, indexNGBCSprites_MrBig, 0x05 },
    { L"E+A - Extra Move 6", 0x2a0ace0, 0x2a0ad00, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_EB[] =
{
    { L"Mr. Big EB", 0x2a0ad00, 0x2a0ad20, indexNGBCSprites_MrBig },
    { L"E+B - Super Trail", 0x2a0ad20, 0x2a0ad40, indexNGBCSprites_MrBig, 0x00 },
    { L"E+B - Extra Move 1", 0x2a0ad40, 0x2a0ad60, indexNGBCSprites_MrBig, 0x01 },
    { L"E+B - Extra Move 2", 0x2a0ad60, 0x2a0ad80, indexNGBCSprites_MrBig, 0x02 },
    { L"E+B - Extra Move 3", 0x2a0ad80, 0x2a0ada0, indexNGBCSprites_MrBig, 0x03 },
    { L"E+B - Extra Move 4", 0x2a0ada0, 0x2a0adc0, indexNGBCSprites_MrBig, 0x04 },
    { L"E+B - Extra Move 5", 0x2a0adc0, 0x2a0ade0, indexNGBCSprites_MrBig, 0x05 },
    { L"E+B - Extra Move 6", 0x2a0ade0, 0x2a0ae00, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_EC[] =
{
    { L"Mr. Big EC", 0x2a0ae00, 0x2a0ae20, indexNGBCSprites_MrBig },
    { L"E+C - Super Trail", 0x2a0ae20, 0x2a0ae40, indexNGBCSprites_MrBig, 0x00 },
    { L"E+C - Extra Move 1", 0x2a0ae40, 0x2a0ae60, indexNGBCSprites_MrBig, 0x01 },
    { L"E+C - Extra Move 2", 0x2a0ae60, 0x2a0ae80, indexNGBCSprites_MrBig, 0x02 },
    { L"E+C - Extra Move 3", 0x2a0ae80, 0x2a0aea0, indexNGBCSprites_MrBig, 0x03 },
    { L"E+C - Extra Move 4", 0x2a0aea0, 0x2a0aec0, indexNGBCSprites_MrBig, 0x04 },
    { L"E+C - Extra Move 5", 0x2a0aec0, 0x2a0aee0, indexNGBCSprites_MrBig, 0x05 },
    { L"E+C - Extra Move 6", 0x2a0aee0, 0x2a0af00, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_ED[] =
{
    { L"Mr. Big ED", 0x2a0af00, 0x2a0af20, indexNGBCSprites_MrBig },
    { L"E+D - Super Trail", 0x2a0af20, 0x2a0af40, indexNGBCSprites_MrBig, 0x00 },
    { L"E+D - Extra Move 1", 0x2a0af40, 0x2a0af60, indexNGBCSprites_MrBig, 0x01 },
    { L"E+D - Extra Move 2", 0x2a0af60, 0x2a0af80, indexNGBCSprites_MrBig, 0x02 },
    { L"E+D - Extra Move 3", 0x2a0af80, 0x2a0afa0, indexNGBCSprites_MrBig, 0x03 },
    { L"E+D - Extra Move 4", 0x2a0afa0, 0x2a0afc0, indexNGBCSprites_MrBig, 0x04 },
    { L"E+D - Extra Move 5", 0x2a0afc0, 0x2a0afe0, indexNGBCSprites_MrBig, 0x05 },
    { L"E+D - Extra Move 6", 0x2a0afe0, 0x2a0b000, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_SA[] =
{
    { L"Mr. Big SA", 0x2a0b000, 0x2a0b020, indexNGBCSprites_MrBig },
    { L"Start+A - Super Trail", 0x2a0b020, 0x2a0b040, indexNGBCSprites_MrBig, 0x00 },
    { L"Start+A - Extra Move 1", 0x2a0b040, 0x2a0b060, indexNGBCSprites_MrBig, 0x01 },
    { L"Start+A - Extra Move 2", 0x2a0b060, 0x2a0b080, indexNGBCSprites_MrBig, 0x02 },
    { L"Start+A - Extra Move 3", 0x2a0b080, 0x2a0b0a0, indexNGBCSprites_MrBig, 0x03 },
    { L"Start+A - Extra Move 4", 0x2a0b0a0, 0x2a0b0c0, indexNGBCSprites_MrBig, 0x04 },
    { L"Start+A - Extra Move 5", 0x2a0b0c0, 0x2a0b0e0, indexNGBCSprites_MrBig, 0x05 },
    { L"Start+A - Extra Move 6", 0x2a0b0e0, 0x2a0b100, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_SB[] =
{
    { L"Mr. Big SB", 0x2a0b100, 0x2a0b120, indexNGBCSprites_MrBig },
    { L"Start+B - Super Trail", 0x2a0b120, 0x2a0b140, indexNGBCSprites_MrBig, 0x00 },
    { L"Start+B - Extra Move 1", 0x2a0b140, 0x2a0b160, indexNGBCSprites_MrBig, 0x01 },
    { L"Start+B - Extra Move 2", 0x2a0b160, 0x2a0b180, indexNGBCSprites_MrBig, 0x02 },
    { L"Start+B - Extra Move 3", 0x2a0b180, 0x2a0b1a0, indexNGBCSprites_MrBig, 0x03 },
    { L"Start+B - Extra Move 4", 0x2a0b1a0, 0x2a0b1c0, indexNGBCSprites_MrBig, 0x04 },
    { L"Start+B - Extra Move 5", 0x2a0b1c0, 0x2a0b1e0, indexNGBCSprites_MrBig, 0x05 },
    { L"Start+B - Extra Move 6", 0x2a0b1e0, 0x2a0b200, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_SC[] =
{
    { L"Mr. Big SC", 0x2a0b200, 0x2a0b220, indexNGBCSprites_MrBig },
    { L"Start+C - Super Trail", 0x2a0b220, 0x2a0b240, indexNGBCSprites_MrBig, 0x00 },
    { L"Start+C - Extra Move 1", 0x2a0b240, 0x2a0b260, indexNGBCSprites_MrBig, 0x01 },
    { L"Start+C - Extra Move 2", 0x2a0b260, 0x2a0b280, indexNGBCSprites_MrBig, 0x02 },
    { L"Start+C - Extra Move 3", 0x2a0b280, 0x2a0b2a0, indexNGBCSprites_MrBig, 0x03 },
    { L"Start+C - Extra Move 4", 0x2a0b2a0, 0x2a0b2c0, indexNGBCSprites_MrBig, 0x04 },
    { L"Start+C - Extra Move 5", 0x2a0b2c0, 0x2a0b2e0, indexNGBCSprites_MrBig, 0x05 },
    { L"Start+C - Extra Move 6", 0x2a0b2e0, 0x2a0b300, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MRBIG_PALETTES_SD[] =
{
    { L"Mr. Big SD", 0x2a0b300, 0x2a0b320, indexNGBCSprites_MrBig },
    { L"Start+D - Super Trail", 0x2a0b320, 0x2a0b340, indexNGBCSprites_MrBig, 0x00 },
    { L"Start+D - Extra Move 1", 0x2a0b340, 0x2a0b360, indexNGBCSprites_MrBig, 0x01 },
    { L"Start+D - Extra Move 2", 0x2a0b360, 0x2a0b380, indexNGBCSprites_MrBig, 0x02 },
    { L"Start+D - Extra Move 3", 0x2a0b380, 0x2a0b3a0, indexNGBCSprites_MrBig, 0x03 },
    { L"Start+D - Extra Move 4", 0x2a0b3a0, 0x2a0b3c0, indexNGBCSprites_MrBig, 0x04 },
    { L"Start+D - Extra Move 5", 0x2a0b3c0, 0x2a0b3e0, indexNGBCSprites_MrBig, 0x05 },
    { L"Start+D - Extra Move 6", 0x2a0b3e0, 0x2a0b400, indexNGBCSprites_MrBig, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_A[] =
{
    { L"Nakoruru A", 0x2b6b800, 0x2b6b820, indexNGBCSprites_Nakoruru },
    { L"A - Super Trail", 0x2b6b820, 0x2b6b840, indexNGBCSprites_Nakoruru, 0x00 },
    { L"A - Extra Move 1", 0x2b6b840, 0x2b6b860, indexNGBCSprites_Nakoruru, 0x01 },
    { L"A - Extra Move 2", 0x2b6b860, 0x2b6b880, indexNGBCSprites_Nakoruru, 0x02 },
    { L"A - Extra Move 3", 0x2b6b880, 0x2b6b8a0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"A - Extra Move 4", 0x2b6b8a0, 0x2b6b8c0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"A - Extra Move 5", 0x2b6b8c0, 0x2b6b8e0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"A - Extra Move 6", 0x2b6b8e0, 0x2b6b900, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_B[] =
{
    { L"Nakoruru B", 0x2b6b900, 0x2b6b920, indexNGBCSprites_Nakoruru },
    { L"B - Super Trail", 0x2b6b920, 0x2b6b940, indexNGBCSprites_Nakoruru, 0x00 },
    { L"B - Extra Move 1", 0x2b6b940, 0x2b6b960, indexNGBCSprites_Nakoruru, 0x01 },
    { L"B - Extra Move 2", 0x2b6b960, 0x2b6b980, indexNGBCSprites_Nakoruru, 0x02 },
    { L"B - Extra Move 3", 0x2b6b980, 0x2b6b9a0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"B - Extra Move 4", 0x2b6b9a0, 0x2b6b9c0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"B - Extra Move 5", 0x2b6b9c0, 0x2b6b9e0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"B - Extra Move 6", 0x2b6b9e0, 0x2b6ba00, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_C[] =
{
    { L"Nakoruru C", 0x2b6ba00, 0x2b6ba20, indexNGBCSprites_Nakoruru },
    { L"C - Super Trail", 0x2b6ba20, 0x2b6ba40, indexNGBCSprites_Nakoruru, 0x00 },
    { L"C - Extra Move 1", 0x2b6ba40, 0x2b6ba60, indexNGBCSprites_Nakoruru, 0x01 },
    { L"C - Extra Move 2", 0x2b6ba60, 0x2b6ba80, indexNGBCSprites_Nakoruru, 0x02 },
    { L"C - Extra Move 3", 0x2b6ba80, 0x2b6baa0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"C - Extra Move 4", 0x2b6baa0, 0x2b6bac0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"C - Extra Move 5", 0x2b6bac0, 0x2b6bae0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"C - Extra Move 6", 0x2b6bae0, 0x2b6bb00, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_D[] =
{
    { L"Nakoruru D", 0x2b6bb00, 0x2b6bb20, indexNGBCSprites_Nakoruru },
    { L"D - Super Trail", 0x2b6bb20, 0x2b6bb40, indexNGBCSprites_Nakoruru, 0x00 },
    { L"D - Extra Move 1", 0x2b6bb40, 0x2b6bb60, indexNGBCSprites_Nakoruru, 0x01 },
    { L"D - Extra Move 2", 0x2b6bb60, 0x2b6bb80, indexNGBCSprites_Nakoruru, 0x02 },
    { L"D - Extra Move 3", 0x2b6bb80, 0x2b6bba0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"D - Extra Move 4", 0x2b6bba0, 0x2b6bbc0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"D - Extra Move 5", 0x2b6bbc0, 0x2b6bbe0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"D - Extra Move 6", 0x2b6bbe0, 0x2b6bc00, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_EA[] =
{
    { L"Nakoruru EA", 0x2b6bc00, 0x2b6bc20, indexNGBCSprites_Nakoruru },
    { L"E+A - Super Trail", 0x2b6bc20, 0x2b6bc40, indexNGBCSprites_Nakoruru, 0x00 },
    { L"E+A - Extra Move 1", 0x2b6bc40, 0x2b6bc60, indexNGBCSprites_Nakoruru, 0x01 },
    { L"E+A - Extra Move 2", 0x2b6bc60, 0x2b6bc80, indexNGBCSprites_Nakoruru, 0x02 },
    { L"E+A - Extra Move 3", 0x2b6bc80, 0x2b6bca0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"E+A - Extra Move 4", 0x2b6bca0, 0x2b6bcc0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"E+A - Extra Move 5", 0x2b6bcc0, 0x2b6bce0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"E+A - Extra Move 6", 0x2b6bce0, 0x2b6bd00, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_EB[] =
{
    { L"Nakoruru EB", 0x2b6bd00, 0x2b6bd20, indexNGBCSprites_Nakoruru },
    { L"E+B - Super Trail", 0x2b6bd20, 0x2b6bd40, indexNGBCSprites_Nakoruru, 0x00 },
    { L"E+B - Extra Move 1", 0x2b6bd40, 0x2b6bd60, indexNGBCSprites_Nakoruru, 0x01 },
    { L"E+B - Extra Move 2", 0x2b6bd60, 0x2b6bd80, indexNGBCSprites_Nakoruru, 0x02 },
    { L"E+B - Extra Move 3", 0x2b6bd80, 0x2b6bda0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"E+B - Extra Move 4", 0x2b6bda0, 0x2b6bdc0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"E+B - Extra Move 5", 0x2b6bdc0, 0x2b6bde0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"E+B - Extra Move 6", 0x2b6bde0, 0x2b6be00, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_EC[] =
{
    { L"Nakoruru EC", 0x2b6be00, 0x2b6be20, indexNGBCSprites_Nakoruru },
    { L"E+C - Super Trail", 0x2b6be20, 0x2b6be40, indexNGBCSprites_Nakoruru, 0x00 },
    { L"E+C - Extra Move 1", 0x2b6be40, 0x2b6be60, indexNGBCSprites_Nakoruru, 0x01 },
    { L"E+C - Extra Move 2", 0x2b6be60, 0x2b6be80, indexNGBCSprites_Nakoruru, 0x02 },
    { L"E+C - Extra Move 3", 0x2b6be80, 0x2b6bea0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"E+C - Extra Move 4", 0x2b6bea0, 0x2b6bec0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"E+C - Extra Move 5", 0x2b6bec0, 0x2b6bee0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"E+C - Extra Move 6", 0x2b6bee0, 0x2b6bf00, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_ED[] =
{
    { L"Nakoruru ED", 0x2b6bf00, 0x2b6bf20, indexNGBCSprites_Nakoruru },
    { L"E+D - Super Trail", 0x2b6bf20, 0x2b6bf40, indexNGBCSprites_Nakoruru, 0x00 },
    { L"E+D - Extra Move 1", 0x2b6bf40, 0x2b6bf60, indexNGBCSprites_Nakoruru, 0x01 },
    { L"E+D - Extra Move 2", 0x2b6bf60, 0x2b6bf80, indexNGBCSprites_Nakoruru, 0x02 },
    { L"E+D - Extra Move 3", 0x2b6bf80, 0x2b6bfa0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"E+D - Extra Move 4", 0x2b6bfa0, 0x2b6bfc0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"E+D - Extra Move 5", 0x2b6bfc0, 0x2b6bfe0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"E+D - Extra Move 6", 0x2b6bfe0, 0x2b6c000, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_SA[] =
{
    { L"Nakoruru SA", 0x2b6c000, 0x2b6c020, indexNGBCSprites_Nakoruru },
    { L"Start+A - Super Trail", 0x2b6c020, 0x2b6c040, indexNGBCSprites_Nakoruru, 0x00 },
    { L"Start+A - Extra Move 1", 0x2b6c040, 0x2b6c060, indexNGBCSprites_Nakoruru, 0x01 },
    { L"Start+A - Extra Move 2", 0x2b6c060, 0x2b6c080, indexNGBCSprites_Nakoruru, 0x02 },
    { L"Start+A - Extra Move 3", 0x2b6c080, 0x2b6c0a0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"Start+A - Extra Move 4", 0x2b6c0a0, 0x2b6c0c0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"Start+A - Extra Move 5", 0x2b6c0c0, 0x2b6c0e0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"Start+A - Extra Move 6", 0x2b6c0e0, 0x2b6c100, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_SB[] =
{
    { L"Nakoruru SB", 0x2b6c100, 0x2b6c120, indexNGBCSprites_Nakoruru },
    { L"Start+B - Super Trail", 0x2b6c120, 0x2b6c140, indexNGBCSprites_Nakoruru, 0x00 },
    { L"Start+B - Extra Move 1", 0x2b6c140, 0x2b6c160, indexNGBCSprites_Nakoruru, 0x01 },
    { L"Start+B - Extra Move 2", 0x2b6c160, 0x2b6c180, indexNGBCSprites_Nakoruru, 0x02 },
    { L"Start+B - Extra Move 3", 0x2b6c180, 0x2b6c1a0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"Start+B - Extra Move 4", 0x2b6c1a0, 0x2b6c1c0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"Start+B - Extra Move 5", 0x2b6c1c0, 0x2b6c1e0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"Start+B - Extra Move 6", 0x2b6c1e0, 0x2b6c200, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_SC[] =
{
    { L"Nakoruru SC", 0x2b6c200, 0x2b6c220, indexNGBCSprites_Nakoruru },
    { L"Start+C - Super Trail", 0x2b6c220, 0x2b6c240, indexNGBCSprites_Nakoruru, 0x00 },
    { L"Start+C - Extra Move 1", 0x2b6c240, 0x2b6c260, indexNGBCSprites_Nakoruru, 0x01 },
    { L"Start+C - Extra Move 2", 0x2b6c260, 0x2b6c280, indexNGBCSprites_Nakoruru, 0x02 },
    { L"Start+C - Extra Move 3", 0x2b6c280, 0x2b6c2a0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"Start+C - Extra Move 4", 0x2b6c2a0, 0x2b6c2c0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"Start+C - Extra Move 5", 0x2b6c2c0, 0x2b6c2e0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"Start+C - Extra Move 6", 0x2b6c2e0, 0x2b6c300, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NAKORURU_PALETTES_SD[] =
{
    { L"Nakoruru SD", 0x2b6c300, 0x2b6c320, indexNGBCSprites_Nakoruru },
    { L"Start+D - Super Trail", 0x2b6c320, 0x2b6c340, indexNGBCSprites_Nakoruru, 0x00 },
    { L"Start+D - Extra Move 1", 0x2b6c340, 0x2b6c360, indexNGBCSprites_Nakoruru, 0x01 },
    { L"Start+D - Extra Move 2", 0x2b6c360, 0x2b6c380, indexNGBCSprites_Nakoruru, 0x02 },
    { L"Start+D - Extra Move 3", 0x2b6c380, 0x2b6c3a0, indexNGBCSprites_Nakoruru, 0x03 },
    { L"Start+D - Extra Move 4", 0x2b6c3a0, 0x2b6c3c0, indexNGBCSprites_Nakoruru, 0x04 },
    { L"Start+D - Extra Move 5", 0x2b6c3c0, 0x2b6c3e0, indexNGBCSprites_Nakoruru, 0x05 },
    { L"Start+D - Extra Move 6", 0x2b6c3e0, 0x2b6c400, indexNGBCSprites_Nakoruru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_A[] =
{
    { L"Hotaru A", 0x2cad000, 0x2cad020, indexNGBCSprites_Hotaru },
    { L"A - Super Trail", 0x2cad020, 0x2cad040, indexNGBCSprites_Hotaru, 0x00 },
    { L"A - Extra Move 1", 0x2cad040, 0x2cad060, indexNGBCSprites_Hotaru, 0x01 },
    { L"A - Extra Move 2", 0x2cad060, 0x2cad080, indexNGBCSprites_Hotaru, 0x02 },
    { L"A - Extra Move 3", 0x2cad080, 0x2cad0a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"A - Extra Move 4", 0x2cad0a0, 0x2cad0c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"A - Extra Move 5", 0x2cad0c0, 0x2cad0e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"A - Extra Move 6", 0x2cad0e0, 0x2cad100, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_B[] =
{
    { L"Hotaru B", 0x2cad100, 0x2cad120, indexNGBCSprites_Hotaru },
    { L"B - Super Trail", 0x2cad120, 0x2cad140, indexNGBCSprites_Hotaru, 0x00 },
    { L"B - Extra Move 1", 0x2cad140, 0x2cad160, indexNGBCSprites_Hotaru, 0x01 },
    { L"B - Extra Move 2", 0x2cad160, 0x2cad180, indexNGBCSprites_Hotaru, 0x02 },
    { L"B - Extra Move 3", 0x2cad180, 0x2cad1a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"B - Extra Move 4", 0x2cad1a0, 0x2cad1c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"B - Extra Move 5", 0x2cad1c0, 0x2cad1e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"B - Extra Move 6", 0x2cad1e0, 0x2cad200, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_C[] =
{
    { L"Hotaru C", 0x2cad200, 0x2cad220, indexNGBCSprites_Hotaru },
    { L"C - Super Trail", 0x2cad220, 0x2cad240, indexNGBCSprites_Hotaru, 0x00 },
    { L"C - Extra Move 1", 0x2cad240, 0x2cad260, indexNGBCSprites_Hotaru, 0x01 },
    { L"C - Extra Move 2", 0x2cad260, 0x2cad280, indexNGBCSprites_Hotaru, 0x02 },
    { L"C - Extra Move 3", 0x2cad280, 0x2cad2a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"C - Extra Move 4", 0x2cad2a0, 0x2cad2c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"C - Extra Move 5", 0x2cad2c0, 0x2cad2e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"C - Extra Move 6", 0x2cad2e0, 0x2cad300, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_D[] =
{
    { L"Hotaru D", 0x2cad300, 0x2cad320, indexNGBCSprites_Hotaru },
    { L"D - Super Trail", 0x2cad320, 0x2cad340, indexNGBCSprites_Hotaru, 0x00 },
    { L"D - Extra Move 1", 0x2cad340, 0x2cad360, indexNGBCSprites_Hotaru, 0x01 },
    { L"D - Extra Move 2", 0x2cad360, 0x2cad380, indexNGBCSprites_Hotaru, 0x02 },
    { L"D - Extra Move 3", 0x2cad380, 0x2cad3a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"D - Extra Move 4", 0x2cad3a0, 0x2cad3c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"D - Extra Move 5", 0x2cad3c0, 0x2cad3e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"D - Extra Move 6", 0x2cad3e0, 0x2cad400, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_EA[] =
{
    { L"Hotaru EA", 0x2cad400, 0x2cad420, indexNGBCSprites_Hotaru },
    { L"E+A - Super Trail", 0x2cad420, 0x2cad440, indexNGBCSprites_Hotaru, 0x00 },
    { L"E+A - Extra Move 1", 0x2cad440, 0x2cad460, indexNGBCSprites_Hotaru, 0x01 },
    { L"E+A - Extra Move 2", 0x2cad460, 0x2cad480, indexNGBCSprites_Hotaru, 0x02 },
    { L"E+A - Extra Move 3", 0x2cad480, 0x2cad4a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"E+A - Extra Move 4", 0x2cad4a0, 0x2cad4c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"E+A - Extra Move 5", 0x2cad4c0, 0x2cad4e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"E+A - Extra Move 6", 0x2cad4e0, 0x2cad500, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_EB[] =
{
    { L"Hotaru EB", 0x2cad500, 0x2cad520, indexNGBCSprites_Hotaru },
    { L"E+B - Super Trail", 0x2cad520, 0x2cad540, indexNGBCSprites_Hotaru, 0x00 },
    { L"E+B - Extra Move 1", 0x2cad540, 0x2cad560, indexNGBCSprites_Hotaru, 0x01 },
    { L"E+B - Extra Move 2", 0x2cad560, 0x2cad580, indexNGBCSprites_Hotaru, 0x02 },
    { L"E+B - Extra Move 3", 0x2cad580, 0x2cad5a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"E+B - Extra Move 4", 0x2cad5a0, 0x2cad5c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"E+B - Extra Move 5", 0x2cad5c0, 0x2cad5e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"E+B - Extra Move 6", 0x2cad5e0, 0x2cad600, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_EC[] =
{
    { L"Hotaru EC", 0x2cad600, 0x2cad620, indexNGBCSprites_Hotaru },
    { L"E+C - Super Trail", 0x2cad620, 0x2cad640, indexNGBCSprites_Hotaru, 0x00 },
    { L"E+C - Extra Move 1", 0x2cad640, 0x2cad660, indexNGBCSprites_Hotaru, 0x01 },
    { L"E+C - Extra Move 2", 0x2cad660, 0x2cad680, indexNGBCSprites_Hotaru, 0x02 },
    { L"E+C - Extra Move 3", 0x2cad680, 0x2cad6a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"E+C - Extra Move 4", 0x2cad6a0, 0x2cad6c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"E+C - Extra Move 5", 0x2cad6c0, 0x2cad6e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"E+C - Extra Move 6", 0x2cad6e0, 0x2cad700, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_ED[] =
{
    { L"Hotaru ED", 0x2cad700, 0x2cad720, indexNGBCSprites_Hotaru },
    { L"E+D - Super Trail", 0x2cad720, 0x2cad740, indexNGBCSprites_Hotaru, 0x00 },
    { L"E+D - Extra Move 1", 0x2cad740, 0x2cad760, indexNGBCSprites_Hotaru, 0x01 },
    { L"E+D - Extra Move 2", 0x2cad760, 0x2cad780, indexNGBCSprites_Hotaru, 0x02 },
    { L"E+D - Extra Move 3", 0x2cad780, 0x2cad7a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"E+D - Extra Move 4", 0x2cad7a0, 0x2cad7c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"E+D - Extra Move 5", 0x2cad7c0, 0x2cad7e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"E+D - Extra Move 6", 0x2cad7e0, 0x2cad800, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_SA[] =
{
    { L"Hotaru SA", 0x2cad800, 0x2cad820, indexNGBCSprites_Hotaru },
    { L"Start+A - Super Trail", 0x2cad820, 0x2cad840, indexNGBCSprites_Hotaru, 0x00 },
    { L"Start+A - Extra Move 1", 0x2cad840, 0x2cad860, indexNGBCSprites_Hotaru, 0x01 },
    { L"Start+A - Extra Move 2", 0x2cad860, 0x2cad880, indexNGBCSprites_Hotaru, 0x02 },
    { L"Start+A - Extra Move 3", 0x2cad880, 0x2cad8a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"Start+A - Extra Move 4", 0x2cad8a0, 0x2cad8c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"Start+A - Extra Move 5", 0x2cad8c0, 0x2cad8e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"Start+A - Extra Move 6", 0x2cad8e0, 0x2cad900, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_SB[] =
{
    { L"Hotaru SB", 0x2cad900, 0x2cad920, indexNGBCSprites_Hotaru },
    { L"Start+B - Super Trail", 0x2cad920, 0x2cad940, indexNGBCSprites_Hotaru, 0x00 },
    { L"Start+B - Extra Move 1", 0x2cad940, 0x2cad960, indexNGBCSprites_Hotaru, 0x01 },
    { L"Start+B - Extra Move 2", 0x2cad960, 0x2cad980, indexNGBCSprites_Hotaru, 0x02 },
    { L"Start+B - Extra Move 3", 0x2cad980, 0x2cad9a0, indexNGBCSprites_Hotaru, 0x03 },
    { L"Start+B - Extra Move 4", 0x2cad9a0, 0x2cad9c0, indexNGBCSprites_Hotaru, 0x04 },
    { L"Start+B - Extra Move 5", 0x2cad9c0, 0x2cad9e0, indexNGBCSprites_Hotaru, 0x05 },
    { L"Start+B - Extra Move 6", 0x2cad9e0, 0x2cada00, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_SC[] =
{
    { L"Hotaru SC", 0x2cada00, 0x2cada20, indexNGBCSprites_Hotaru },
    { L"Start+C - Super Trail", 0x2cada20, 0x2cada40, indexNGBCSprites_Hotaru, 0x00 },
    { L"Start+C - Extra Move 1", 0x2cada40, 0x2cada60, indexNGBCSprites_Hotaru, 0x01 },
    { L"Start+C - Extra Move 2", 0x2cada60, 0x2cada80, indexNGBCSprites_Hotaru, 0x02 },
    { L"Start+C - Extra Move 3", 0x2cada80, 0x2cadaa0, indexNGBCSprites_Hotaru, 0x03 },
    { L"Start+C - Extra Move 4", 0x2cadaa0, 0x2cadac0, indexNGBCSprites_Hotaru, 0x04 },
    { L"Start+C - Extra Move 5", 0x2cadac0, 0x2cadae0, indexNGBCSprites_Hotaru, 0x05 },
    { L"Start+C - Extra Move 6", 0x2cadae0, 0x2cadb00, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HOTARU_PALETTES_SD[] =
{
    { L"Hotaru SD", 0x2cadb00, 0x2cadb20, indexNGBCSprites_Hotaru },
    { L"Start+D - Super Trail", 0x2cadb20, 0x2cadb40, indexNGBCSprites_Hotaru, 0x00 },
    { L"Start+D - Extra Move 1", 0x2cadb40, 0x2cadb60, indexNGBCSprites_Hotaru, 0x01 },
    { L"Start+D - Extra Move 2", 0x2cadb60, 0x2cadb80, indexNGBCSprites_Hotaru, 0x02 },
    { L"Start+D - Extra Move 3", 0x2cadb80, 0x2cadba0, indexNGBCSprites_Hotaru, 0x03 },
    { L"Start+D - Extra Move 4", 0x2cadba0, 0x2cadbc0, indexNGBCSprites_Hotaru, 0x04 },
    { L"Start+D - Extra Move 5", 0x2cadbc0, 0x2cadbe0, indexNGBCSprites_Hotaru, 0x05 },
    { L"Start+D - Extra Move 6", 0x2cadbe0, 0x2cadc00, indexNGBCSprites_Hotaru, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_A[] =
{
    { L"Keiichiro A", 0x2e13000, 0x2e13020, indexNGBCSprites_Keiichiro },
    { L"A - Super Trail", 0x2e13020, 0x2e13040, indexNGBCSprites_Keiichiro, 0x00 },
    { L"A - Extra Move 1", 0x2e13040, 0x2e13060, indexNGBCSprites_Keiichiro, 0x01 },
    { L"A - Extra Move 2", 0x2e13060, 0x2e13080, indexNGBCSprites_Keiichiro, 0x02 },
    { L"A - Extra Move 3", 0x2e13080, 0x2e130a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"A - Extra Move 4", 0x2e130a0, 0x2e130c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"A - Extra Move 5", 0x2e130c0, 0x2e130e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"A - Extra Move 6", 0x2e130e0, 0x2e13100, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_B[] =
{
    { L"Keiichiro B", 0x2e13100, 0x2e13120, indexNGBCSprites_Keiichiro },
    { L"B - Super Trail", 0x2e13120, 0x2e13140, indexNGBCSprites_Keiichiro, 0x00 },
    { L"B - Extra Move 1", 0x2e13140, 0x2e13160, indexNGBCSprites_Keiichiro, 0x01 },
    { L"B - Extra Move 2", 0x2e13160, 0x2e13180, indexNGBCSprites_Keiichiro, 0x02 },
    { L"B - Extra Move 3", 0x2e13180, 0x2e131a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"B - Extra Move 4", 0x2e131a0, 0x2e131c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"B - Extra Move 5", 0x2e131c0, 0x2e131e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"B - Extra Move 6", 0x2e131e0, 0x2e13200, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_C[] =
{
    { L"Keiichiro C", 0x2e13200, 0x2e13220, indexNGBCSprites_Keiichiro },
    { L"C - Super Trail", 0x2e13220, 0x2e13240, indexNGBCSprites_Keiichiro, 0x00 },
    { L"C - Extra Move 1", 0x2e13240, 0x2e13260, indexNGBCSprites_Keiichiro, 0x01 },
    { L"C - Extra Move 2", 0x2e13260, 0x2e13280, indexNGBCSprites_Keiichiro, 0x02 },
    { L"C - Extra Move 3", 0x2e13280, 0x2e132a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"C - Extra Move 4", 0x2e132a0, 0x2e132c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"C - Extra Move 5", 0x2e132c0, 0x2e132e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"C - Extra Move 6", 0x2e132e0, 0x2e13300, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_D[] =
{
    { L"Keiichiro D", 0x2e13300, 0x2e13320, indexNGBCSprites_Keiichiro },
    { L"D - Super Trail", 0x2e13320, 0x2e13340, indexNGBCSprites_Keiichiro, 0x00 },
    { L"D - Extra Move 1", 0x2e13340, 0x2e13360, indexNGBCSprites_Keiichiro, 0x01 },
    { L"D - Extra Move 2", 0x2e13360, 0x2e13380, indexNGBCSprites_Keiichiro, 0x02 },
    { L"D - Extra Move 3", 0x2e13380, 0x2e133a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"D - Extra Move 4", 0x2e133a0, 0x2e133c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"D - Extra Move 5", 0x2e133c0, 0x2e133e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"D - Extra Move 6", 0x2e133e0, 0x2e13400, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_EA[] =
{
    { L"Keiichiro EA", 0x2e13400, 0x2e13420, indexNGBCSprites_Keiichiro },
    { L"E+A - Super Trail", 0x2e13420, 0x2e13440, indexNGBCSprites_Keiichiro, 0x00 },
    { L"E+A - Extra Move 1", 0x2e13440, 0x2e13460, indexNGBCSprites_Keiichiro, 0x01 },
    { L"E+A - Extra Move 2", 0x2e13460, 0x2e13480, indexNGBCSprites_Keiichiro, 0x02 },
    { L"E+A - Extra Move 3", 0x2e13480, 0x2e134a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"E+A - Extra Move 4", 0x2e134a0, 0x2e134c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"E+A - Extra Move 5", 0x2e134c0, 0x2e134e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"E+A - Extra Move 6", 0x2e134e0, 0x2e13500, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_EB[] =
{
    { L"Keiichiro EB", 0x2e13500, 0x2e13520, indexNGBCSprites_Keiichiro },
    { L"E+B - Super Trail", 0x2e13520, 0x2e13540, indexNGBCSprites_Keiichiro, 0x00 },
    { L"E+B - Extra Move 1", 0x2e13540, 0x2e13560, indexNGBCSprites_Keiichiro, 0x01 },
    { L"E+B - Extra Move 2", 0x2e13560, 0x2e13580, indexNGBCSprites_Keiichiro, 0x02 },
    { L"E+B - Extra Move 3", 0x2e13580, 0x2e135a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"E+B - Extra Move 4", 0x2e135a0, 0x2e135c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"E+B - Extra Move 5", 0x2e135c0, 0x2e135e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"E+B - Extra Move 6", 0x2e135e0, 0x2e13600, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_EC[] =
{
    { L"Keiichiro EC", 0x2e13600, 0x2e13620, indexNGBCSprites_Keiichiro },
    { L"E+C - Super Trail", 0x2e13620, 0x2e13640, indexNGBCSprites_Keiichiro, 0x00 },
    { L"E+C - Extra Move 1", 0x2e13640, 0x2e13660, indexNGBCSprites_Keiichiro, 0x01 },
    { L"E+C - Extra Move 2", 0x2e13660, 0x2e13680, indexNGBCSprites_Keiichiro, 0x02 },
    { L"E+C - Extra Move 3", 0x2e13680, 0x2e136a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"E+C - Extra Move 4", 0x2e136a0, 0x2e136c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"E+C - Extra Move 5", 0x2e136c0, 0x2e136e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"E+C - Extra Move 6", 0x2e136e0, 0x2e13700, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_ED[] =
{
    { L"Keiichiro ED", 0x2e13700, 0x2e13720, indexNGBCSprites_Keiichiro },
    { L"E+D - Super Trail", 0x2e13720, 0x2e13740, indexNGBCSprites_Keiichiro, 0x00 },
    { L"E+D - Extra Move 1", 0x2e13740, 0x2e13760, indexNGBCSprites_Keiichiro, 0x01 },
    { L"E+D - Extra Move 2", 0x2e13760, 0x2e13780, indexNGBCSprites_Keiichiro, 0x02 },
    { L"E+D - Extra Move 3", 0x2e13780, 0x2e137a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"E+D - Extra Move 4", 0x2e137a0, 0x2e137c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"E+D - Extra Move 5", 0x2e137c0, 0x2e137e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"E+D - Extra Move 6", 0x2e137e0, 0x2e13800, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_SA[] =
{
    { L"Keiichiro SA", 0x2e13800, 0x2e13820, indexNGBCSprites_Keiichiro },
    { L"Start+A - Super Trail", 0x2e13820, 0x2e13840, indexNGBCSprites_Keiichiro, 0x00 },
    { L"Start+A - Extra Move 1", 0x2e13840, 0x2e13860, indexNGBCSprites_Keiichiro, 0x01 },
    { L"Start+A - Extra Move 2", 0x2e13860, 0x2e13880, indexNGBCSprites_Keiichiro, 0x02 },
    { L"Start+A - Extra Move 3", 0x2e13880, 0x2e138a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"Start+A - Extra Move 4", 0x2e138a0, 0x2e138c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"Start+A - Extra Move 5", 0x2e138c0, 0x2e138e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"Start+A - Extra Move 6", 0x2e138e0, 0x2e13900, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_SB[] =
{
    { L"Keiichiro SB", 0x2e13900, 0x2e13920, indexNGBCSprites_Keiichiro },
    { L"Start+B - Super Trail", 0x2e13920, 0x2e13940, indexNGBCSprites_Keiichiro, 0x00 },
    { L"Start+B - Extra Move 1", 0x2e13940, 0x2e13960, indexNGBCSprites_Keiichiro, 0x01 },
    { L"Start+B - Extra Move 2", 0x2e13960, 0x2e13980, indexNGBCSprites_Keiichiro, 0x02 },
    { L"Start+B - Extra Move 3", 0x2e13980, 0x2e139a0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"Start+B - Extra Move 4", 0x2e139a0, 0x2e139c0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"Start+B - Extra Move 5", 0x2e139c0, 0x2e139e0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"Start+B - Extra Move 6", 0x2e139e0, 0x2e13a00, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_SC[] =
{
    { L"Keiichiro SC", 0x2e13a00, 0x2e13a20, indexNGBCSprites_Keiichiro },
    { L"Start+C - Super Trail", 0x2e13a20, 0x2e13a40, indexNGBCSprites_Keiichiro, 0x00 },
    { L"Start+C - Extra Move 1", 0x2e13a40, 0x2e13a60, indexNGBCSprites_Keiichiro, 0x01 },
    { L"Start+C - Extra Move 2", 0x2e13a60, 0x2e13a80, indexNGBCSprites_Keiichiro, 0x02 },
    { L"Start+C - Extra Move 3", 0x2e13a80, 0x2e13aa0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"Start+C - Extra Move 4", 0x2e13aa0, 0x2e13ac0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"Start+C - Extra Move 5", 0x2e13ac0, 0x2e13ae0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"Start+C - Extra Move 6", 0x2e13ae0, 0x2e13b00, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KEIICHIRO_PALETTES_SD[] =
{
    { L"Keiichiro SD", 0x2e13b00, 0x2e13b20, indexNGBCSprites_Keiichiro },
    { L"Start+D - Super Trail", 0x2e13b20, 0x2e13b40, indexNGBCSprites_Keiichiro, 0x00 },
    { L"Start+D - Extra Move 1", 0x2e13b40, 0x2e13b60, indexNGBCSprites_Keiichiro, 0x01 },
    { L"Start+D - Extra Move 2", 0x2e13b60, 0x2e13b80, indexNGBCSprites_Keiichiro, 0x02 },
    { L"Start+D - Extra Move 3", 0x2e13b80, 0x2e13ba0, indexNGBCSprites_Keiichiro, 0x03 },
    { L"Start+D - Extra Move 4", 0x2e13ba0, 0x2e13bc0, indexNGBCSprites_Keiichiro, 0x04 },
    { L"Start+D - Extra Move 5", 0x2e13bc0, 0x2e13be0, indexNGBCSprites_Keiichiro, 0x05 },
    { L"Start+D - Extra Move 6", 0x2e13be0, 0x2e13c00, indexNGBCSprites_Keiichiro, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_A[] =
{
    { L"Kim A", 0x2fc0800, 0x2fc0820, indexNGBCSprites_Kim },
    { L"A - Super Trail", 0x2fc0820, 0x2fc0840, indexNGBCSprites_Kim, 0x00 },
    { L"A - Extra Move 1", 0x2fc0840, 0x2fc0860, indexNGBCSprites_Kim, 0x01 },
    { L"A - Extra Move 2", 0x2fc0860, 0x2fc0880, indexNGBCSprites_Kim, 0x02 },
    { L"A - Extra Move 3", 0x2fc0880, 0x2fc08a0, indexNGBCSprites_Kim, 0x03 },
    { L"A - Extra Move 4", 0x2fc08a0, 0x2fc08c0, indexNGBCSprites_Kim, 0x04 },
    { L"A - Extra Move 5", 0x2fc08c0, 0x2fc08e0, indexNGBCSprites_Kim, 0x05 },
    { L"A - Extra Move 6", 0x2fc08e0, 0x2fc0900, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_B[] =
{
    { L"Kim B", 0x2fc0900, 0x2fc0920, indexNGBCSprites_Kim },
    { L"B - Super Trail", 0x2fc0920, 0x2fc0940, indexNGBCSprites_Kim, 0x00 },
    { L"B - Extra Move 1", 0x2fc0940, 0x2fc0960, indexNGBCSprites_Kim, 0x01 },
    { L"B - Extra Move 2", 0x2fc0960, 0x2fc0980, indexNGBCSprites_Kim, 0x02 },
    { L"B - Extra Move 3", 0x2fc0980, 0x2fc09a0, indexNGBCSprites_Kim, 0x03 },
    { L"B - Extra Move 4", 0x2fc09a0, 0x2fc09c0, indexNGBCSprites_Kim, 0x04 },
    { L"B - Extra Move 5", 0x2fc09c0, 0x2fc09e0, indexNGBCSprites_Kim, 0x05 },
    { L"B - Extra Move 6", 0x2fc09e0, 0x2fc0a00, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_C[] =
{
    { L"Kim C", 0x2fc0a00, 0x2fc0a20, indexNGBCSprites_Kim },
    { L"C - Super Trail", 0x2fc0a20, 0x2fc0a40, indexNGBCSprites_Kim, 0x00 },
    { L"C - Extra Move 1", 0x2fc0a40, 0x2fc0a60, indexNGBCSprites_Kim, 0x01 },
    { L"C - Extra Move 2", 0x2fc0a60, 0x2fc0a80, indexNGBCSprites_Kim, 0x02 },
    { L"C - Extra Move 3", 0x2fc0a80, 0x2fc0aa0, indexNGBCSprites_Kim, 0x03 },
    { L"C - Extra Move 4", 0x2fc0aa0, 0x2fc0ac0, indexNGBCSprites_Kim, 0x04 },
    { L"C - Extra Move 5", 0x2fc0ac0, 0x2fc0ae0, indexNGBCSprites_Kim, 0x05 },
    { L"C - Extra Move 6", 0x2fc0ae0, 0x2fc0b00, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_D[] =
{
    { L"Kim D", 0x2fc0b00, 0x2fc0b20, indexNGBCSprites_Kim },
    { L"D - Super Trail", 0x2fc0b20, 0x2fc0b40, indexNGBCSprites_Kim, 0x00 },
    { L"D - Extra Move 1", 0x2fc0b40, 0x2fc0b60, indexNGBCSprites_Kim, 0x01 },
    { L"D - Extra Move 2", 0x2fc0b60, 0x2fc0b80, indexNGBCSprites_Kim, 0x02 },
    { L"D - Extra Move 3", 0x2fc0b80, 0x2fc0ba0, indexNGBCSprites_Kim, 0x03 },
    { L"D - Extra Move 4", 0x2fc0ba0, 0x2fc0bc0, indexNGBCSprites_Kim, 0x04 },
    { L"D - Extra Move 5", 0x2fc0bc0, 0x2fc0be0, indexNGBCSprites_Kim, 0x05 },
    { L"D - Extra Move 6", 0x2fc0be0, 0x2fc0c00, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_EA[] =
{
    { L"Kim EA", 0x2fc0c00, 0x2fc0c20, indexNGBCSprites_Kim },
    { L"E+A - Super Trail", 0x2fc0c20, 0x2fc0c40, indexNGBCSprites_Kim, 0x00 },
    { L"E+A - Extra Move 1", 0x2fc0c40, 0x2fc0c60, indexNGBCSprites_Kim, 0x01 },
    { L"E+A - Extra Move 2", 0x2fc0c60, 0x2fc0c80, indexNGBCSprites_Kim, 0x02 },
    { L"E+A - Extra Move 3", 0x2fc0c80, 0x2fc0ca0, indexNGBCSprites_Kim, 0x03 },
    { L"E+A - Extra Move 4", 0x2fc0ca0, 0x2fc0cc0, indexNGBCSprites_Kim, 0x04 },
    { L"E+A - Extra Move 5", 0x2fc0cc0, 0x2fc0ce0, indexNGBCSprites_Kim, 0x05 },
    { L"E+A - Extra Move 6", 0x2fc0ce0, 0x2fc0d00, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_EB[] =
{
    { L"Kim EB", 0x2fc0d00, 0x2fc0d20, indexNGBCSprites_Kim },
    { L"E+B - Super Trail", 0x2fc0d20, 0x2fc0d40, indexNGBCSprites_Kim, 0x00 },
    { L"E+B - Extra Move 1", 0x2fc0d40, 0x2fc0d60, indexNGBCSprites_Kim, 0x01 },
    { L"E+B - Extra Move 2", 0x2fc0d60, 0x2fc0d80, indexNGBCSprites_Kim, 0x02 },
    { L"E+B - Extra Move 3", 0x2fc0d80, 0x2fc0da0, indexNGBCSprites_Kim, 0x03 },
    { L"E+B - Extra Move 4", 0x2fc0da0, 0x2fc0dc0, indexNGBCSprites_Kim, 0x04 },
    { L"E+B - Extra Move 5", 0x2fc0dc0, 0x2fc0de0, indexNGBCSprites_Kim, 0x05 },
    { L"E+B - Extra Move 6", 0x2fc0de0, 0x2fc0e00, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_EC[] =
{
    { L"Kim EC", 0x2fc0e00, 0x2fc0e20, indexNGBCSprites_Kim },
    { L"E+C - Super Trail", 0x2fc0e20, 0x2fc0e40, indexNGBCSprites_Kim, 0x00 },
    { L"E+C - Extra Move 1", 0x2fc0e40, 0x2fc0e60, indexNGBCSprites_Kim, 0x01 },
    { L"E+C - Extra Move 2", 0x2fc0e60, 0x2fc0e80, indexNGBCSprites_Kim, 0x02 },
    { L"E+C - Extra Move 3", 0x2fc0e80, 0x2fc0ea0, indexNGBCSprites_Kim, 0x03 },
    { L"E+C - Extra Move 4", 0x2fc0ea0, 0x2fc0ec0, indexNGBCSprites_Kim, 0x04 },
    { L"E+C - Extra Move 5", 0x2fc0ec0, 0x2fc0ee0, indexNGBCSprites_Kim, 0x05 },
    { L"E+C - Extra Move 6", 0x2fc0ee0, 0x2fc0f00, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_ED[] =
{
    { L"Kim ED", 0x2fc0f00, 0x2fc0f20, indexNGBCSprites_Kim },
    { L"E+D - Super Trail", 0x2fc0f20, 0x2fc0f40, indexNGBCSprites_Kim, 0x00 },
    { L"E+D - Extra Move 1", 0x2fc0f40, 0x2fc0f60, indexNGBCSprites_Kim, 0x01 },
    { L"E+D - Extra Move 2", 0x2fc0f60, 0x2fc0f80, indexNGBCSprites_Kim, 0x02 },
    { L"E+D - Extra Move 3", 0x2fc0f80, 0x2fc0fa0, indexNGBCSprites_Kim, 0x03 },
    { L"E+D - Extra Move 4", 0x2fc0fa0, 0x2fc0fc0, indexNGBCSprites_Kim, 0x04 },
    { L"E+D - Extra Move 5", 0x2fc0fc0, 0x2fc0fe0, indexNGBCSprites_Kim, 0x05 },
    { L"E+D - Extra Move 6", 0x2fc0fe0, 0x2fc1000, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_SA[] =
{
    { L"Kim SA", 0x2fc1000, 0x2fc1020, indexNGBCSprites_Kim },
    { L"Start+A - Super Trail", 0x2fc1020, 0x2fc1040, indexNGBCSprites_Kim, 0x00 },
    { L"Start+A - Extra Move 1", 0x2fc1040, 0x2fc1060, indexNGBCSprites_Kim, 0x01 },
    { L"Start+A - Extra Move 2", 0x2fc1060, 0x2fc1080, indexNGBCSprites_Kim, 0x02 },
    { L"Start+A - Extra Move 3", 0x2fc1080, 0x2fc10a0, indexNGBCSprites_Kim, 0x03 },
    { L"Start+A - Extra Move 4", 0x2fc10a0, 0x2fc10c0, indexNGBCSprites_Kim, 0x04 },
    { L"Start+A - Extra Move 5", 0x2fc10c0, 0x2fc10e0, indexNGBCSprites_Kim, 0x05 },
    { L"Start+A - Extra Move 6", 0x2fc10e0, 0x2fc1100, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_SB[] =
{
    { L"Kim SB", 0x2fc1100, 0x2fc1120, indexNGBCSprites_Kim },
    { L"Start+B - Super Trail", 0x2fc1120, 0x2fc1140, indexNGBCSprites_Kim, 0x00 },
    { L"Start+B - Extra Move 1", 0x2fc1140, 0x2fc1160, indexNGBCSprites_Kim, 0x01 },
    { L"Start+B - Extra Move 2", 0x2fc1160, 0x2fc1180, indexNGBCSprites_Kim, 0x02 },
    { L"Start+B - Extra Move 3", 0x2fc1180, 0x2fc11a0, indexNGBCSprites_Kim, 0x03 },
    { L"Start+B - Extra Move 4", 0x2fc11a0, 0x2fc11c0, indexNGBCSprites_Kim, 0x04 },
    { L"Start+B - Extra Move 5", 0x2fc11c0, 0x2fc11e0, indexNGBCSprites_Kim, 0x05 },
    { L"Start+B - Extra Move 6", 0x2fc11e0, 0x2fc1200, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_SC[] =
{
    { L"Kim SC", 0x2fc1200, 0x2fc1220, indexNGBCSprites_Kim },
    { L"Start+C - Super Trail", 0x2fc1220, 0x2fc1240, indexNGBCSprites_Kim, 0x00 },
    { L"Start+C - Extra Move 1", 0x2fc1240, 0x2fc1260, indexNGBCSprites_Kim, 0x01 },
    { L"Start+C - Extra Move 2", 0x2fc1260, 0x2fc1280, indexNGBCSprites_Kim, 0x02 },
    { L"Start+C - Extra Move 3", 0x2fc1280, 0x2fc12a0, indexNGBCSprites_Kim, 0x03 },
    { L"Start+C - Extra Move 4", 0x2fc12a0, 0x2fc12c0, indexNGBCSprites_Kim, 0x04 },
    { L"Start+C - Extra Move 5", 0x2fc12c0, 0x2fc12e0, indexNGBCSprites_Kim, 0x05 },
    { L"Start+C - Extra Move 6", 0x2fc12e0, 0x2fc1300, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KIM_PALETTES_SD[] =
{
    { L"Kim SD", 0x2fc1300, 0x2fc1320, indexNGBCSprites_Kim },
    { L"Start+D - Super Trail", 0x2fc1320, 0x2fc1340, indexNGBCSprites_Kim, 0x00 },
    { L"Start+D - Extra Move 1", 0x2fc1340, 0x2fc1360, indexNGBCSprites_Kim, 0x01 },
    { L"Start+D - Extra Move 2", 0x2fc1360, 0x2fc1380, indexNGBCSprites_Kim, 0x02 },
    { L"Start+D - Extra Move 3", 0x2fc1380, 0x2fc13a0, indexNGBCSprites_Kim, 0x03 },
    { L"Start+D - Extra Move 4", 0x2fc13a0, 0x2fc13c0, indexNGBCSprites_Kim, 0x04 },
    { L"Start+D - Extra Move 5", 0x2fc13c0, 0x2fc13e0, indexNGBCSprites_Kim, 0x05 },
    { L"Start+D - Extra Move 6", 0x2fc13e0, 0x2fc1400, indexNGBCSprites_Kim, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_A[] =
{
    { L"Akari A", 0x30d3800, 0x30d3820, indexNGBCSprites_Akari },
    { L"A - Super Trail", 0x30d3820, 0x30d3840, indexNGBCSprites_Akari, 0x00 },
    { L"A - Extra Move 1", 0x30d3840, 0x30d3860, indexNGBCSprites_Akari, 0x01 },
    { L"A - Extra Move 2", 0x30d3860, 0x30d3880, indexNGBCSprites_Akari, 0x02 },
    { L"A - Extra Move 3", 0x30d3880, 0x30d38a0, indexNGBCSprites_Akari, 0x03 },
    { L"A - Extra Move 4", 0x30d38a0, 0x30d38c0, indexNGBCSprites_Akari, 0x04 },
    { L"A - Extra Move 5", 0x30d38c0, 0x30d38e0, indexNGBCSprites_Akari, 0x05 },
    { L"A - Extra Move 6", 0x30d38e0, 0x30d3900, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_B[] =
{
    { L"Akari B", 0x30d3900, 0x30d3920, indexNGBCSprites_Akari },
    { L"B - Super Trail", 0x30d3920, 0x30d3940, indexNGBCSprites_Akari, 0x00 },
    { L"B - Extra Move 1", 0x30d3940, 0x30d3960, indexNGBCSprites_Akari, 0x01 },
    { L"B - Extra Move 2", 0x30d3960, 0x30d3980, indexNGBCSprites_Akari, 0x02 },
    { L"B - Extra Move 3", 0x30d3980, 0x30d39a0, indexNGBCSprites_Akari, 0x03 },
    { L"B - Extra Move 4", 0x30d39a0, 0x30d39c0, indexNGBCSprites_Akari, 0x04 },
    { L"B - Extra Move 5", 0x30d39c0, 0x30d39e0, indexNGBCSprites_Akari, 0x05 },
    { L"B - Extra Move 6", 0x30d39e0, 0x30d3a00, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_C[] =
{
    { L"Akari C", 0x30d3a00, 0x30d3a20, indexNGBCSprites_Akari },
    { L"C - Super Trail", 0x30d3a20, 0x30d3a40, indexNGBCSprites_Akari, 0x00 },
    { L"C - Extra Move 1", 0x30d3a40, 0x30d3a60, indexNGBCSprites_Akari, 0x01 },
    { L"C - Extra Move 2", 0x30d3a60, 0x30d3a80, indexNGBCSprites_Akari, 0x02 },
    { L"C - Extra Move 3", 0x30d3a80, 0x30d3aa0, indexNGBCSprites_Akari, 0x03 },
    { L"C - Extra Move 4", 0x30d3aa0, 0x30d3ac0, indexNGBCSprites_Akari, 0x04 },
    { L"C - Extra Move 5", 0x30d3ac0, 0x30d3ae0, indexNGBCSprites_Akari, 0x05 },
    { L"C - Extra Move 6", 0x30d3ae0, 0x30d3b00, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_D[] =
{
    { L"Akari D", 0x30d3b00, 0x30d3b20, indexNGBCSprites_Akari },
    { L"D - Super Trail", 0x30d3b20, 0x30d3b40, indexNGBCSprites_Akari, 0x00 },
    { L"D - Extra Move 1", 0x30d3b40, 0x30d3b60, indexNGBCSprites_Akari, 0x01 },
    { L"D - Extra Move 2", 0x30d3b60, 0x30d3b80, indexNGBCSprites_Akari, 0x02 },
    { L"D - Extra Move 3", 0x30d3b80, 0x30d3ba0, indexNGBCSprites_Akari, 0x03 },
    { L"D - Extra Move 4", 0x30d3ba0, 0x30d3bc0, indexNGBCSprites_Akari, 0x04 },
    { L"D - Extra Move 5", 0x30d3bc0, 0x30d3be0, indexNGBCSprites_Akari, 0x05 },
    { L"D - Extra Move 6", 0x30d3be0, 0x30d3c00, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_EA[] =
{
    { L"Akari EA", 0x30d3c00, 0x30d3c20, indexNGBCSprites_Akari },
    { L"E+A - Super Trail", 0x30d3c20, 0x30d3c40, indexNGBCSprites_Akari, 0x00 },
    { L"E+A - Extra Move 1", 0x30d3c40, 0x30d3c60, indexNGBCSprites_Akari, 0x01 },
    { L"E+A - Extra Move 2", 0x30d3c60, 0x30d3c80, indexNGBCSprites_Akari, 0x02 },
    { L"E+A - Extra Move 3", 0x30d3c80, 0x30d3ca0, indexNGBCSprites_Akari, 0x03 },
    { L"E+A - Extra Move 4", 0x30d3ca0, 0x30d3cc0, indexNGBCSprites_Akari, 0x04 },
    { L"E+A - Extra Move 5", 0x30d3cc0, 0x30d3ce0, indexNGBCSprites_Akari, 0x05 },
    { L"E+A - Extra Move 6", 0x30d3ce0, 0x30d3d00, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_EB[] =
{
    { L"Akari EB", 0x30d3d00, 0x30d3d20, indexNGBCSprites_Akari },
    { L"E+B - Super Trail", 0x30d3d20, 0x30d3d40, indexNGBCSprites_Akari, 0x00 },
    { L"E+B - Extra Move 1", 0x30d3d40, 0x30d3d60, indexNGBCSprites_Akari, 0x01 },
    { L"E+B - Extra Move 2", 0x30d3d60, 0x30d3d80, indexNGBCSprites_Akari, 0x02 },
    { L"E+B - Extra Move 3", 0x30d3d80, 0x30d3da0, indexNGBCSprites_Akari, 0x03 },
    { L"E+B - Extra Move 4", 0x30d3da0, 0x30d3dc0, indexNGBCSprites_Akari, 0x04 },
    { L"E+B - Extra Move 5", 0x30d3dc0, 0x30d3de0, indexNGBCSprites_Akari, 0x05 },
    { L"E+B - Extra Move 6", 0x30d3de0, 0x30d3e00, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_EC[] =
{
    { L"Akari EC", 0x30d3e00, 0x30d3e20, indexNGBCSprites_Akari },
    { L"E+C - Super Trail", 0x30d3e20, 0x30d3e40, indexNGBCSprites_Akari, 0x00 },
    { L"E+C - Extra Move 1", 0x30d3e40, 0x30d3e60, indexNGBCSprites_Akari, 0x01 },
    { L"E+C - Extra Move 2", 0x30d3e60, 0x30d3e80, indexNGBCSprites_Akari, 0x02 },
    { L"E+C - Extra Move 3", 0x30d3e80, 0x30d3ea0, indexNGBCSprites_Akari, 0x03 },
    { L"E+C - Extra Move 4", 0x30d3ea0, 0x30d3ec0, indexNGBCSprites_Akari, 0x04 },
    { L"E+C - Extra Move 5", 0x30d3ec0, 0x30d3ee0, indexNGBCSprites_Akari, 0x05 },
    { L"E+C - Extra Move 6", 0x30d3ee0, 0x30d3f00, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_ED[] =
{
    { L"Akari ED", 0x30d3f00, 0x30d3f20, indexNGBCSprites_Akari },
    { L"E+D - Super Trail", 0x30d3f20, 0x30d3f40, indexNGBCSprites_Akari, 0x00 },
    { L"E+D - Extra Move 1", 0x30d3f40, 0x30d3f60, indexNGBCSprites_Akari, 0x01 },
    { L"E+D - Extra Move 2", 0x30d3f60, 0x30d3f80, indexNGBCSprites_Akari, 0x02 },
    { L"E+D - Extra Move 3", 0x30d3f80, 0x30d3fa0, indexNGBCSprites_Akari, 0x03 },
    { L"E+D - Extra Move 4", 0x30d3fa0, 0x30d3fc0, indexNGBCSprites_Akari, 0x04 },
    { L"E+D - Extra Move 5", 0x30d3fc0, 0x30d3fe0, indexNGBCSprites_Akari, 0x05 },
    { L"E+D - Extra Move 6", 0x30d3fe0, 0x30d4000, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_SA[] =
{
    { L"Akari SA", 0x30d4000, 0x30d4020, indexNGBCSprites_Akari },
    { L"Start+A - Super Trail", 0x30d4020, 0x30d4040, indexNGBCSprites_Akari, 0x00 },
    { L"Start+A - Extra Move 1", 0x30d4040, 0x30d4060, indexNGBCSprites_Akari, 0x01 },
    { L"Start+A - Extra Move 2", 0x30d4060, 0x30d4080, indexNGBCSprites_Akari, 0x02 },
    { L"Start+A - Extra Move 3", 0x30d4080, 0x30d40a0, indexNGBCSprites_Akari, 0x03 },
    { L"Start+A - Extra Move 4", 0x30d40a0, 0x30d40c0, indexNGBCSprites_Akari, 0x04 },
    { L"Start+A - Extra Move 5", 0x30d40c0, 0x30d40e0, indexNGBCSprites_Akari, 0x05 },
    { L"Start+A - Extra Move 6", 0x30d40e0, 0x30d4100, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_SB[] =
{
    { L"Akari SB", 0x30d4100, 0x30d4120, indexNGBCSprites_Akari },
    { L"Start+B - Super Trail", 0x30d4120, 0x30d4140, indexNGBCSprites_Akari, 0x00 },
    { L"Start+B - Extra Move 1", 0x30d4140, 0x30d4160, indexNGBCSprites_Akari, 0x01 },
    { L"Start+B - Extra Move 2", 0x30d4160, 0x30d4180, indexNGBCSprites_Akari, 0x02 },
    { L"Start+B - Extra Move 3", 0x30d4180, 0x30d41a0, indexNGBCSprites_Akari, 0x03 },
    { L"Start+B - Extra Move 4", 0x30d41a0, 0x30d41c0, indexNGBCSprites_Akari, 0x04 },
    { L"Start+B - Extra Move 5", 0x30d41c0, 0x30d41e0, indexNGBCSprites_Akari, 0x05 },
    { L"Start+B - Extra Move 6", 0x30d41e0, 0x30d4200, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_SC[] =
{
    { L"Akari SC", 0x30d4200, 0x30d4220, indexNGBCSprites_Akari },
    { L"Start+C - Super Trail", 0x30d4220, 0x30d4240, indexNGBCSprites_Akari, 0x00 },
    { L"Start+C - Extra Move 1", 0x30d4240, 0x30d4260, indexNGBCSprites_Akari, 0x01 },
    { L"Start+C - Extra Move 2", 0x30d4260, 0x30d4280, indexNGBCSprites_Akari, 0x02 },
    { L"Start+C - Extra Move 3", 0x30d4280, 0x30d42a0, indexNGBCSprites_Akari, 0x03 },
    { L"Start+C - Extra Move 4", 0x30d42a0, 0x30d42c0, indexNGBCSprites_Akari, 0x04 },
    { L"Start+C - Extra Move 5", 0x30d42c0, 0x30d42e0, indexNGBCSprites_Akari, 0x05 },
    { L"Start+C - Extra Move 6", 0x30d42e0, 0x30d4300, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_AKARI_PALETTES_SD[] =
{
    { L"Akari SD", 0x30d4300, 0x30d4320, indexNGBCSprites_Akari },
    { L"Start+D - Super Trail", 0x30d4320, 0x30d4340, indexNGBCSprites_Akari, 0x00 },
    { L"Start+D - Extra Move 1", 0x30d4340, 0x30d4360, indexNGBCSprites_Akari, 0x01 },
    { L"Start+D - Extra Move 2", 0x30d4360, 0x30d4380, indexNGBCSprites_Akari, 0x02 },
    { L"Start+D - Extra Move 3", 0x30d4380, 0x30d43a0, indexNGBCSprites_Akari, 0x03 },
    { L"Start+D - Extra Move 4", 0x30d43a0, 0x30d43c0, indexNGBCSprites_Akari, 0x04 },
    { L"Start+D - Extra Move 5", 0x30d43c0, 0x30d43e0, indexNGBCSprites_Akari, 0x05 },
    { L"Start+D - Extra Move 6", 0x30d43e0, 0x30d4400, indexNGBCSprites_Akari, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_A[] =
{
    { L"Shiki A", 0x32e1000, 0x32e1020, indexNGBCSprites_Shiki },
    { L"A - Super Trail", 0x32e1020, 0x32e1040, indexNGBCSprites_Shiki, 0x00 },
    { L"A - Extra Move 1", 0x32e1040, 0x32e1060, indexNGBCSprites_Shiki, 0x01 },
    { L"A - Extra Move 2", 0x32e1060, 0x32e1080, indexNGBCSprites_Shiki, 0x02 },
    { L"A - Extra Move 3", 0x32e1080, 0x32e10a0, indexNGBCSprites_Shiki, 0x03 },
    { L"A - Extra Move 4", 0x32e10a0, 0x32e10c0, indexNGBCSprites_Shiki, 0x04 },
    { L"A - Extra Move 5", 0x32e10c0, 0x32e10e0, indexNGBCSprites_Shiki, 0x05 },
    { L"A - Extra Move 6", 0x32e10e0, 0x32e1100, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_B[] =
{
    { L"Shiki B", 0x32e1100, 0x32e1120, indexNGBCSprites_Shiki },
    { L"B - Super Trail", 0x32e1120, 0x32e1140, indexNGBCSprites_Shiki, 0x00 },
    { L"B - Extra Move 1", 0x32e1140, 0x32e1160, indexNGBCSprites_Shiki, 0x01 },
    { L"B - Extra Move 2", 0x32e1160, 0x32e1180, indexNGBCSprites_Shiki, 0x02 },
    { L"B - Extra Move 3", 0x32e1180, 0x32e11a0, indexNGBCSprites_Shiki, 0x03 },
    { L"B - Extra Move 4", 0x32e11a0, 0x32e11c0, indexNGBCSprites_Shiki, 0x04 },
    { L"B - Extra Move 5", 0x32e11c0, 0x32e11e0, indexNGBCSprites_Shiki, 0x05 },
    { L"B - Extra Move 6", 0x32e11e0, 0x32e1200, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_C[] =
{
    { L"Shiki C", 0x32e1200, 0x32e1220, indexNGBCSprites_Shiki },
    { L"C - Super Trail", 0x32e1220, 0x32e1240, indexNGBCSprites_Shiki, 0x00 },
    { L"C - Extra Move 1", 0x32e1240, 0x32e1260, indexNGBCSprites_Shiki, 0x01 },
    { L"C - Extra Move 2", 0x32e1260, 0x32e1280, indexNGBCSprites_Shiki, 0x02 },
    { L"C - Extra Move 3", 0x32e1280, 0x32e12a0, indexNGBCSprites_Shiki, 0x03 },
    { L"C - Extra Move 4", 0x32e12a0, 0x32e12c0, indexNGBCSprites_Shiki, 0x04 },
    { L"C - Extra Move 5", 0x32e12c0, 0x32e12e0, indexNGBCSprites_Shiki, 0x05 },
    { L"C - Extra Move 6", 0x32e12e0, 0x32e1300, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_D[] =
{
    { L"Shiki D", 0x32e1300, 0x32e1320, indexNGBCSprites_Shiki },
    { L"D - Super Trail", 0x32e1320, 0x32e1340, indexNGBCSprites_Shiki, 0x00 },
    { L"D - Extra Move 1", 0x32e1340, 0x32e1360, indexNGBCSprites_Shiki, 0x01 },
    { L"D - Extra Move 2", 0x32e1360, 0x32e1380, indexNGBCSprites_Shiki, 0x02 },
    { L"D - Extra Move 3", 0x32e1380, 0x32e13a0, indexNGBCSprites_Shiki, 0x03 },
    { L"D - Extra Move 4", 0x32e13a0, 0x32e13c0, indexNGBCSprites_Shiki, 0x04 },
    { L"D - Extra Move 5", 0x32e13c0, 0x32e13e0, indexNGBCSprites_Shiki, 0x05 },
    { L"D - Extra Move 6", 0x32e13e0, 0x32e1400, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_EA[] =
{
    { L"Shiki EA", 0x32e1400, 0x32e1420, indexNGBCSprites_Shiki },
    { L"E+A - Super Trail", 0x32e1420, 0x32e1440, indexNGBCSprites_Shiki, 0x00 },
    { L"E+A - Extra Move 1", 0x32e1440, 0x32e1460, indexNGBCSprites_Shiki, 0x01 },
    { L"E+A - Extra Move 2", 0x32e1460, 0x32e1480, indexNGBCSprites_Shiki, 0x02 },
    { L"E+A - Extra Move 3", 0x32e1480, 0x32e14a0, indexNGBCSprites_Shiki, 0x03 },
    { L"E+A - Extra Move 4", 0x32e14a0, 0x32e14c0, indexNGBCSprites_Shiki, 0x04 },
    { L"E+A - Extra Move 5", 0x32e14c0, 0x32e14e0, indexNGBCSprites_Shiki, 0x05 },
    { L"E+A - Extra Move 6", 0x32e14e0, 0x32e1500, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_EB[] =
{
    { L"Shiki EB", 0x32e1500, 0x32e1520, indexNGBCSprites_Shiki },
    { L"E+B - Super Trail", 0x32e1520, 0x32e1540, indexNGBCSprites_Shiki, 0x00 },
    { L"E+B - Extra Move 1", 0x32e1540, 0x32e1560, indexNGBCSprites_Shiki, 0x01 },
    { L"E+B - Extra Move 2", 0x32e1560, 0x32e1580, indexNGBCSprites_Shiki, 0x02 },
    { L"E+B - Extra Move 3", 0x32e1580, 0x32e15a0, indexNGBCSprites_Shiki, 0x03 },
    { L"E+B - Extra Move 4", 0x32e15a0, 0x32e15c0, indexNGBCSprites_Shiki, 0x04 },
    { L"E+B - Extra Move 5", 0x32e15c0, 0x32e15e0, indexNGBCSprites_Shiki, 0x05 },
    { L"E+B - Extra Move 6", 0x32e15e0, 0x32e1600, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_EC[] =
{
    { L"Shiki EC", 0x32e1600, 0x32e1620, indexNGBCSprites_Shiki },
    { L"E+C - Super Trail", 0x32e1620, 0x32e1640, indexNGBCSprites_Shiki, 0x00 },
    { L"E+C - Extra Move 1", 0x32e1640, 0x32e1660, indexNGBCSprites_Shiki, 0x01 },
    { L"E+C - Extra Move 2", 0x32e1660, 0x32e1680, indexNGBCSprites_Shiki, 0x02 },
    { L"E+C - Extra Move 3", 0x32e1680, 0x32e16a0, indexNGBCSprites_Shiki, 0x03 },
    { L"E+C - Extra Move 4", 0x32e16a0, 0x32e16c0, indexNGBCSprites_Shiki, 0x04 },
    { L"E+C - Extra Move 5", 0x32e16c0, 0x32e16e0, indexNGBCSprites_Shiki, 0x05 },
    { L"E+C - Extra Move 6", 0x32e16e0, 0x32e1700, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_ED[] =
{
    { L"Shiki ED", 0x32e1700, 0x32e1720, indexNGBCSprites_Shiki },
    { L"E+D - Super Trail", 0x32e1720, 0x32e1740, indexNGBCSprites_Shiki, 0x00 },
    { L"E+D - Extra Move 1", 0x32e1740, 0x32e1760, indexNGBCSprites_Shiki, 0x01 },
    { L"E+D - Extra Move 2", 0x32e1760, 0x32e1780, indexNGBCSprites_Shiki, 0x02 },
    { L"E+D - Extra Move 3", 0x32e1780, 0x32e17a0, indexNGBCSprites_Shiki, 0x03 },
    { L"E+D - Extra Move 4", 0x32e17a0, 0x32e17c0, indexNGBCSprites_Shiki, 0x04 },
    { L"E+D - Extra Move 5", 0x32e17c0, 0x32e17e0, indexNGBCSprites_Shiki, 0x05 },
    { L"E+D - Extra Move 6", 0x32e17e0, 0x32e1800, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_SA[] =
{
    { L"Shiki SA", 0x32e1800, 0x32e1820, indexNGBCSprites_Shiki },
    { L"Start+A - Super Trail", 0x32e1820, 0x32e1840, indexNGBCSprites_Shiki, 0x00 },
    { L"Start+A - Extra Move 1", 0x32e1840, 0x32e1860, indexNGBCSprites_Shiki, 0x01 },
    { L"Start+A - Extra Move 2", 0x32e1860, 0x32e1880, indexNGBCSprites_Shiki, 0x02 },
    { L"Start+A - Extra Move 3", 0x32e1880, 0x32e18a0, indexNGBCSprites_Shiki, 0x03 },
    { L"Start+A - Extra Move 4", 0x32e18a0, 0x32e18c0, indexNGBCSprites_Shiki, 0x04 },
    { L"Start+A - Extra Move 5", 0x32e18c0, 0x32e18e0, indexNGBCSprites_Shiki, 0x05 },
    { L"Start+A - Extra Move 6", 0x32e18e0, 0x32e1900, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_SB[] =
{
    { L"Shiki SB", 0x32e1900, 0x32e1920, indexNGBCSprites_Shiki },
    { L"Start+B - Super Trail", 0x32e1920, 0x32e1940, indexNGBCSprites_Shiki, 0x00 },
    { L"Start+B - Extra Move 1", 0x32e1940, 0x32e1960, indexNGBCSprites_Shiki, 0x01 },
    { L"Start+B - Extra Move 2", 0x32e1960, 0x32e1980, indexNGBCSprites_Shiki, 0x02 },
    { L"Start+B - Extra Move 3", 0x32e1980, 0x32e19a0, indexNGBCSprites_Shiki, 0x03 },
    { L"Start+B - Extra Move 4", 0x32e19a0, 0x32e19c0, indexNGBCSprites_Shiki, 0x04 },
    { L"Start+B - Extra Move 5", 0x32e19c0, 0x32e19e0, indexNGBCSprites_Shiki, 0x05 },
    { L"Start+B - Extra Move 6", 0x32e19e0, 0x32e1a00, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_SC[] =
{
    { L"Shiki SC", 0x32e1a00, 0x32e1a20, indexNGBCSprites_Shiki },
    { L"Start+C - Super Trail", 0x32e1a20, 0x32e1a40, indexNGBCSprites_Shiki, 0x00 },
    { L"Start+C - Extra Move 1", 0x32e1a40, 0x32e1a60, indexNGBCSprites_Shiki, 0x01 },
    { L"Start+C - Extra Move 2", 0x32e1a60, 0x32e1a80, indexNGBCSprites_Shiki, 0x02 },
    { L"Start+C - Extra Move 3", 0x32e1a80, 0x32e1aa0, indexNGBCSprites_Shiki, 0x03 },
    { L"Start+C - Extra Move 4", 0x32e1aa0, 0x32e1ac0, indexNGBCSprites_Shiki, 0x04 },
    { L"Start+C - Extra Move 5", 0x32e1ac0, 0x32e1ae0, indexNGBCSprites_Shiki, 0x05 },
    { L"Start+C - Extra Move 6", 0x32e1ae0, 0x32e1b00, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_SHIKI_PALETTES_SD[] =
{
    { L"Shiki SD", 0x32e1b00, 0x32e1b20, indexNGBCSprites_Shiki },
    { L"Start+D - Super Trail", 0x32e1b20, 0x32e1b40, indexNGBCSprites_Shiki, 0x00 },
    { L"Start+D - Extra Move 1", 0x32e1b40, 0x32e1b60, indexNGBCSprites_Shiki, 0x01 },
    { L"Start+D - Extra Move 2", 0x32e1b60, 0x32e1b80, indexNGBCSprites_Shiki, 0x02 },
    { L"Start+D - Extra Move 3", 0x32e1b80, 0x32e1ba0, indexNGBCSprites_Shiki, 0x03 },
    { L"Start+D - Extra Move 4", 0x32e1ba0, 0x32e1bc0, indexNGBCSprites_Shiki, 0x04 },
    { L"Start+D - Extra Move 5", 0x32e1bc0, 0x32e1be0, indexNGBCSprites_Shiki, 0x05 },
    { L"Start+D - Extra Move 6", 0x32e1be0, 0x32e1c00, indexNGBCSprites_Shiki, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_A[] =
{
    { L"Hanzo A", 0x344d800, 0x344d820, indexNGBCSprites_Hanzo },
    { L"A - Super Trail", 0x344d820, 0x344d840, indexNGBCSprites_Hanzo, 0x00 },
    { L"A - Extra Move 1", 0x344d840, 0x344d860, indexNGBCSprites_Hanzo, 0x01 },
    { L"A - Extra Move 2", 0x344d860, 0x344d880, indexNGBCSprites_Hanzo, 0x02 },
    { L"A - Extra Move 3", 0x344d880, 0x344d8a0, indexNGBCSprites_Hanzo, 0x03 },
    { L"A - Extra Move 4", 0x344d8a0, 0x344d8c0, indexNGBCSprites_Hanzo, 0x04 },
    { L"A - Extra Move 5", 0x344d8c0, 0x344d8e0, indexNGBCSprites_Hanzo, 0x05 },
    { L"A - Extra Move 6", 0x344d8e0, 0x344d900, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_B[] =
{
    { L"Hanzo B", 0x344d900, 0x344d920, indexNGBCSprites_Hanzo },
    { L"B - Super Trail", 0x344d920, 0x344d940, indexNGBCSprites_Hanzo, 0x00 },
    { L"B - Extra Move 1", 0x344d940, 0x344d960, indexNGBCSprites_Hanzo, 0x01 },
    { L"B - Extra Move 2", 0x344d960, 0x344d980, indexNGBCSprites_Hanzo, 0x02 },
    { L"B - Extra Move 3", 0x344d980, 0x344d9a0, indexNGBCSprites_Hanzo, 0x03 },
    { L"B - Extra Move 4", 0x344d9a0, 0x344d9c0, indexNGBCSprites_Hanzo, 0x04 },
    { L"B - Extra Move 5", 0x344d9c0, 0x344d9e0, indexNGBCSprites_Hanzo, 0x05 },
    { L"B - Extra Move 6", 0x344d9e0, 0x344da00, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_C[] =
{
    { L"Hanzo C", 0x344da00, 0x344da20, indexNGBCSprites_Hanzo },
    { L"C - Super Trail", 0x344da20, 0x344da40, indexNGBCSprites_Hanzo, 0x00 },
    { L"C - Extra Move 1", 0x344da40, 0x344da60, indexNGBCSprites_Hanzo, 0x01 },
    { L"C - Extra Move 2", 0x344da60, 0x344da80, indexNGBCSprites_Hanzo, 0x02 },
    { L"C - Extra Move 3", 0x344da80, 0x344daa0, indexNGBCSprites_Hanzo, 0x03 },
    { L"C - Extra Move 4", 0x344daa0, 0x344dac0, indexNGBCSprites_Hanzo, 0x04 },
    { L"C - Extra Move 5", 0x344dac0, 0x344dae0, indexNGBCSprites_Hanzo, 0x05 },
    { L"C - Extra Move 6", 0x344dae0, 0x344db00, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_D[] =
{
    { L"Hanzo D", 0x344db00, 0x344db20, indexNGBCSprites_Hanzo },
    { L"D - Super Trail", 0x344db20, 0x344db40, indexNGBCSprites_Hanzo, 0x00 },
    { L"D - Extra Move 1", 0x344db40, 0x344db60, indexNGBCSprites_Hanzo, 0x01 },
    { L"D - Extra Move 2", 0x344db60, 0x344db80, indexNGBCSprites_Hanzo, 0x02 },
    { L"D - Extra Move 3", 0x344db80, 0x344dba0, indexNGBCSprites_Hanzo, 0x03 },
    { L"D - Extra Move 4", 0x344dba0, 0x344dbc0, indexNGBCSprites_Hanzo, 0x04 },
    { L"D - Extra Move 5", 0x344dbc0, 0x344dbe0, indexNGBCSprites_Hanzo, 0x05 },
    { L"D - Extra Move 6", 0x344dbe0, 0x344dc00, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_EA[] =
{
    { L"Hanzo EA", 0x344dc00, 0x344dc20, indexNGBCSprites_Hanzo },
    { L"E+A - Super Trail", 0x344dc20, 0x344dc40, indexNGBCSprites_Hanzo, 0x00 },
    { L"E+A - Extra Move 1", 0x344dc40, 0x344dc60, indexNGBCSprites_Hanzo, 0x01 },
    { L"E+A - Extra Move 2", 0x344dc60, 0x344dc80, indexNGBCSprites_Hanzo, 0x02 },
    { L"E+A - Extra Move 3", 0x344dc80, 0x344dca0, indexNGBCSprites_Hanzo, 0x03 },
    { L"E+A - Extra Move 4", 0x344dca0, 0x344dcc0, indexNGBCSprites_Hanzo, 0x04 },
    { L"E+A - Extra Move 5", 0x344dcc0, 0x344dce0, indexNGBCSprites_Hanzo, 0x05 },
    { L"E+A - Extra Move 6", 0x344dce0, 0x344dd00, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_EB[] =
{
    { L"Hanzo EB", 0x344dd00, 0x344dd20, indexNGBCSprites_Hanzo },
    { L"E+B - Super Trail", 0x344dd20, 0x344dd40, indexNGBCSprites_Hanzo, 0x00 },
    { L"E+B - Extra Move 1", 0x344dd40, 0x344dd60, indexNGBCSprites_Hanzo, 0x01 },
    { L"E+B - Extra Move 2", 0x344dd60, 0x344dd80, indexNGBCSprites_Hanzo, 0x02 },
    { L"E+B - Extra Move 3", 0x344dd80, 0x344dda0, indexNGBCSprites_Hanzo, 0x03 },
    { L"E+B - Extra Move 4", 0x344dda0, 0x344ddc0, indexNGBCSprites_Hanzo, 0x04 },
    { L"E+B - Extra Move 5", 0x344ddc0, 0x344dde0, indexNGBCSprites_Hanzo, 0x05 },
    { L"E+B - Extra Move 6", 0x344dde0, 0x344de00, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_EC[] =
{
    { L"Hanzo EC", 0x344de00, 0x344de20, indexNGBCSprites_Hanzo },
    { L"E+C - Super Trail", 0x344de20, 0x344de40, indexNGBCSprites_Hanzo, 0x00 },
    { L"E+C - Extra Move 1", 0x344de40, 0x344de60, indexNGBCSprites_Hanzo, 0x01 },
    { L"E+C - Extra Move 2", 0x344de60, 0x344de80, indexNGBCSprites_Hanzo, 0x02 },
    { L"E+C - Extra Move 3", 0x344de80, 0x344dea0, indexNGBCSprites_Hanzo, 0x03 },
    { L"E+C - Extra Move 4", 0x344dea0, 0x344dec0, indexNGBCSprites_Hanzo, 0x04 },
    { L"E+C - Extra Move 5", 0x344dec0, 0x344dee0, indexNGBCSprites_Hanzo, 0x05 },
    { L"E+C - Extra Move 6", 0x344dee0, 0x344df00, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_ED[] =
{
    { L"Hanzo ED", 0x344df00, 0x344df20, indexNGBCSprites_Hanzo },
    { L"E+D - Super Trail", 0x344df20, 0x344df40, indexNGBCSprites_Hanzo, 0x00 },
    { L"E+D - Extra Move 1", 0x344df40, 0x344df60, indexNGBCSprites_Hanzo, 0x01 },
    { L"E+D - Extra Move 2", 0x344df60, 0x344df80, indexNGBCSprites_Hanzo, 0x02 },
    { L"E+D - Extra Move 3", 0x344df80, 0x344dfa0, indexNGBCSprites_Hanzo, 0x03 },
    { L"E+D - Extra Move 4", 0x344dfa0, 0x344dfc0, indexNGBCSprites_Hanzo, 0x04 },
    { L"E+D - Extra Move 5", 0x344dfc0, 0x344dfe0, indexNGBCSprites_Hanzo, 0x05 },
    { L"E+D - Extra Move 6", 0x344dfe0, 0x344e000, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_SA[] =
{
    { L"Hanzo SA", 0x344e000, 0x344e020, indexNGBCSprites_Hanzo },
    { L"Start+A - Super Trail", 0x344e020, 0x344e040, indexNGBCSprites_Hanzo, 0x00 },
    { L"Start+A - Extra Move 1", 0x344e040, 0x344e060, indexNGBCSprites_Hanzo, 0x01 },
    { L"Start+A - Extra Move 2", 0x344e060, 0x344e080, indexNGBCSprites_Hanzo, 0x02 },
    { L"Start+A - Extra Move 3", 0x344e080, 0x344e0a0, indexNGBCSprites_Hanzo, 0x03 },
    { L"Start+A - Extra Move 4", 0x344e0a0, 0x344e0c0, indexNGBCSprites_Hanzo, 0x04 },
    { L"Start+A - Extra Move 5", 0x344e0c0, 0x344e0e0, indexNGBCSprites_Hanzo, 0x05 },
    { L"Start+A - Extra Move 6", 0x344e0e0, 0x344e100, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_SB[] =
{
    { L"Hanzo SB", 0x344e100, 0x344e120, indexNGBCSprites_Hanzo },
    { L"Start+B - Super Trail", 0x344e120, 0x344e140, indexNGBCSprites_Hanzo, 0x00 },
    { L"Start+B - Extra Move 1", 0x344e140, 0x344e160, indexNGBCSprites_Hanzo, 0x01 },
    { L"Start+B - Extra Move 2", 0x344e160, 0x344e180, indexNGBCSprites_Hanzo, 0x02 },
    { L"Start+B - Extra Move 3", 0x344e180, 0x344e1a0, indexNGBCSprites_Hanzo, 0x03 },
    { L"Start+B - Extra Move 4", 0x344e1a0, 0x344e1c0, indexNGBCSprites_Hanzo, 0x04 },
    { L"Start+B - Extra Move 5", 0x344e1c0, 0x344e1e0, indexNGBCSprites_Hanzo, 0x05 },
    { L"Start+B - Extra Move 6", 0x344e1e0, 0x344e200, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_SC[] =
{
    { L"Hanzo SC", 0x344e200, 0x344e220, indexNGBCSprites_Hanzo },
    { L"Start+C - Super Trail", 0x344e220, 0x344e240, indexNGBCSprites_Hanzo, 0x00 },
    { L"Start+C - Extra Move 1", 0x344e240, 0x344e260, indexNGBCSprites_Hanzo, 0x01 },
    { L"Start+C - Extra Move 2", 0x344e260, 0x344e280, indexNGBCSprites_Hanzo, 0x02 },
    { L"Start+C - Extra Move 3", 0x344e280, 0x344e2a0, indexNGBCSprites_Hanzo, 0x03 },
    { L"Start+C - Extra Move 4", 0x344e2a0, 0x344e2c0, indexNGBCSprites_Hanzo, 0x04 },
    { L"Start+C - Extra Move 5", 0x344e2c0, 0x344e2e0, indexNGBCSprites_Hanzo, 0x05 },
    { L"Start+C - Extra Move 6", 0x344e2e0, 0x344e300, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_HANZO_PALETTES_SD[] =
{
    { L"Hanzo SD", 0x344e300, 0x344e320, indexNGBCSprites_Hanzo },
    { L"Start+D - Super Trail", 0x344e320, 0x344e340, indexNGBCSprites_Hanzo, 0x00 },
    { L"Start+D - Extra Move 1", 0x344e340, 0x344e360, indexNGBCSprites_Hanzo, 0x01 },
    { L"Start+D - Extra Move 2", 0x344e360, 0x344e380, indexNGBCSprites_Hanzo, 0x02 },
    { L"Start+D - Extra Move 3", 0x344e380, 0x344e3a0, indexNGBCSprites_Hanzo, 0x03 },
    { L"Start+D - Extra Move 4", 0x344e3a0, 0x344e3c0, indexNGBCSprites_Hanzo, 0x04 },
    { L"Start+D - Extra Move 5", 0x344e3c0, 0x344e3e0, indexNGBCSprites_Hanzo, 0x05 },
    { L"Start+D - Extra Move 6", 0x344e3e0, 0x344e400, indexNGBCSprites_Hanzo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_A[] =
{
    { L"Fuuma A", 0x35f0800, 0x35f0820, indexNGBCSprites_Fuuma },
    { L"A - Super Trail", 0x35f0820, 0x35f0840, indexNGBCSprites_Fuuma, 0x00 },
    { L"A - Extra Move 1", 0x35f0840, 0x35f0860, indexNGBCSprites_Fuuma, 0x01 },
    { L"A - Extra Move 2", 0x35f0860, 0x35f0880, indexNGBCSprites_Fuuma, 0x02 },
    { L"A - Extra Move 3", 0x35f0880, 0x35f08a0, indexNGBCSprites_Fuuma, 0x03 },
    { L"A - Extra Move 4", 0x35f08a0, 0x35f08c0, indexNGBCSprites_Fuuma, 0x04 },
    { L"A - Extra Move 5", 0x35f08c0, 0x35f08e0, indexNGBCSprites_Fuuma, 0x05 },
    { L"A - Extra Move 6", 0x35f08e0, 0x35f0900, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_B[] =
{
    { L"Fuuma B", 0x35f0900, 0x35f0920, indexNGBCSprites_Fuuma },
    { L"B - Super Trail", 0x35f0920, 0x35f0940, indexNGBCSprites_Fuuma, 0x00 },
    { L"B - Extra Move 1", 0x35f0940, 0x35f0960, indexNGBCSprites_Fuuma, 0x01 },
    { L"B - Extra Move 2", 0x35f0960, 0x35f0980, indexNGBCSprites_Fuuma, 0x02 },
    { L"B - Extra Move 3", 0x35f0980, 0x35f09a0, indexNGBCSprites_Fuuma, 0x03 },
    { L"B - Extra Move 4", 0x35f09a0, 0x35f09c0, indexNGBCSprites_Fuuma, 0x04 },
    { L"B - Extra Move 5", 0x35f09c0, 0x35f09e0, indexNGBCSprites_Fuuma, 0x05 },
    { L"B - Extra Move 6", 0x35f09e0, 0x35f0a00, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_C[] =
{
    { L"Fuuma C", 0x35f0a00, 0x35f0a20, indexNGBCSprites_Fuuma },
    { L"C - Super Trail", 0x35f0a20, 0x35f0a40, indexNGBCSprites_Fuuma, 0x00 },
    { L"C - Extra Move 1", 0x35f0a40, 0x35f0a60, indexNGBCSprites_Fuuma, 0x01 },
    { L"C - Extra Move 2", 0x35f0a60, 0x35f0a80, indexNGBCSprites_Fuuma, 0x02 },
    { L"C - Extra Move 3", 0x35f0a80, 0x35f0aa0, indexNGBCSprites_Fuuma, 0x03 },
    { L"C - Extra Move 4", 0x35f0aa0, 0x35f0ac0, indexNGBCSprites_Fuuma, 0x04 },
    { L"C - Extra Move 5", 0x35f0ac0, 0x35f0ae0, indexNGBCSprites_Fuuma, 0x05 },
    { L"C - Extra Move 6", 0x35f0ae0, 0x35f0b00, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_D[] =
{
    { L"Fuuma D", 0x35f0b00, 0x35f0b20, indexNGBCSprites_Fuuma },
    { L"D - Super Trail", 0x35f0b20, 0x35f0b40, indexNGBCSprites_Fuuma, 0x00 },
    { L"D - Extra Move 1", 0x35f0b40, 0x35f0b60, indexNGBCSprites_Fuuma, 0x01 },
    { L"D - Extra Move 2", 0x35f0b60, 0x35f0b80, indexNGBCSprites_Fuuma, 0x02 },
    { L"D - Extra Move 3", 0x35f0b80, 0x35f0ba0, indexNGBCSprites_Fuuma, 0x03 },
    { L"D - Extra Move 4", 0x35f0ba0, 0x35f0bc0, indexNGBCSprites_Fuuma, 0x04 },
    { L"D - Extra Move 5", 0x35f0bc0, 0x35f0be0, indexNGBCSprites_Fuuma, 0x05 },
    { L"D - Extra Move 6", 0x35f0be0, 0x35f0c00, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_EA[] =
{
    { L"Fuuma EA", 0x35f0c00, 0x35f0c20, indexNGBCSprites_Fuuma },
    { L"E+A - Super Trail", 0x35f0c20, 0x35f0c40, indexNGBCSprites_Fuuma, 0x00 },
    { L"E+A - Extra Move 1", 0x35f0c40, 0x35f0c60, indexNGBCSprites_Fuuma, 0x01 },
    { L"E+A - Extra Move 2", 0x35f0c60, 0x35f0c80, indexNGBCSprites_Fuuma, 0x02 },
    { L"E+A - Extra Move 3", 0x35f0c80, 0x35f0ca0, indexNGBCSprites_Fuuma, 0x03 },
    { L"E+A - Extra Move 4", 0x35f0ca0, 0x35f0cc0, indexNGBCSprites_Fuuma, 0x04 },
    { L"E+A - Extra Move 5", 0x35f0cc0, 0x35f0ce0, indexNGBCSprites_Fuuma, 0x05 },
    { L"E+A - Extra Move 6", 0x35f0ce0, 0x35f0d00, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_EB[] =
{
    { L"Fuuma EB", 0x35f0d00, 0x35f0d20, indexNGBCSprites_Fuuma },
    { L"E+B - Super Trail", 0x35f0d20, 0x35f0d40, indexNGBCSprites_Fuuma, 0x00 },
    { L"E+B - Extra Move 1", 0x35f0d40, 0x35f0d60, indexNGBCSprites_Fuuma, 0x01 },
    { L"E+B - Extra Move 2", 0x35f0d60, 0x35f0d80, indexNGBCSprites_Fuuma, 0x02 },
    { L"E+B - Extra Move 3", 0x35f0d80, 0x35f0da0, indexNGBCSprites_Fuuma, 0x03 },
    { L"E+B - Extra Move 4", 0x35f0da0, 0x35f0dc0, indexNGBCSprites_Fuuma, 0x04 },
    { L"E+B - Extra Move 5", 0x35f0dc0, 0x35f0de0, indexNGBCSprites_Fuuma, 0x05 },
    { L"E+B - Extra Move 6", 0x35f0de0, 0x35f0e00, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_EC[] =
{
    { L"Fuuma EC", 0x35f0e00, 0x35f0e20, indexNGBCSprites_Fuuma },
    { L"E+C - Super Trail", 0x35f0e20, 0x35f0e40, indexNGBCSprites_Fuuma, 0x00 },
    { L"E+C - Extra Move 1", 0x35f0e40, 0x35f0e60, indexNGBCSprites_Fuuma, 0x01 },
    { L"E+C - Extra Move 2", 0x35f0e60, 0x35f0e80, indexNGBCSprites_Fuuma, 0x02 },
    { L"E+C - Extra Move 3", 0x35f0e80, 0x35f0ea0, indexNGBCSprites_Fuuma, 0x03 },
    { L"E+C - Extra Move 4", 0x35f0ea0, 0x35f0ec0, indexNGBCSprites_Fuuma, 0x04 },
    { L"E+C - Extra Move 5", 0x35f0ec0, 0x35f0ee0, indexNGBCSprites_Fuuma, 0x05 },
    { L"E+C - Extra Move 6", 0x35f0ee0, 0x35f0f00, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_ED[] =
{
    { L"Fuuma ED", 0x35f0f00, 0x35f0f20, indexNGBCSprites_Fuuma },
    { L"E+D - Super Trail", 0x35f0f20, 0x35f0f40, indexNGBCSprites_Fuuma, 0x00 },
    { L"E+D - Extra Move 1", 0x35f0f40, 0x35f0f60, indexNGBCSprites_Fuuma, 0x01 },
    { L"E+D - Extra Move 2", 0x35f0f60, 0x35f0f80, indexNGBCSprites_Fuuma, 0x02 },
    { L"E+D - Extra Move 3", 0x35f0f80, 0x35f0fa0, indexNGBCSprites_Fuuma, 0x03 },
    { L"E+D - Extra Move 4", 0x35f0fa0, 0x35f0fc0, indexNGBCSprites_Fuuma, 0x04 },
    { L"E+D - Extra Move 5", 0x35f0fc0, 0x35f0fe0, indexNGBCSprites_Fuuma, 0x05 },
    { L"E+D - Extra Move 6", 0x35f0fe0, 0x35f1000, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_SA[] =
{
    { L"Fuuma SA", 0x35f1000, 0x35f1020, indexNGBCSprites_Fuuma },
    { L"Start+A - Super Trail", 0x35f1020, 0x35f1040, indexNGBCSprites_Fuuma, 0x00 },
    { L"Start+A - Extra Move 1", 0x35f1040, 0x35f1060, indexNGBCSprites_Fuuma, 0x01 },
    { L"Start+A - Extra Move 2", 0x35f1060, 0x35f1080, indexNGBCSprites_Fuuma, 0x02 },
    { L"Start+A - Extra Move 3", 0x35f1080, 0x35f10a0, indexNGBCSprites_Fuuma, 0x03 },
    { L"Start+A - Extra Move 4", 0x35f10a0, 0x35f10c0, indexNGBCSprites_Fuuma, 0x04 },
    { L"Start+A - Extra Move 5", 0x35f10c0, 0x35f10e0, indexNGBCSprites_Fuuma, 0x05 },
    { L"Start+A - Extra Move 6", 0x35f10e0, 0x35f1100, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_SB[] =
{
    { L"Fuuma SB", 0x35f1100, 0x35f1120, indexNGBCSprites_Fuuma },
    { L"Start+B - Super Trail", 0x35f1120, 0x35f1140, indexNGBCSprites_Fuuma, 0x00 },
    { L"Start+B - Extra Move 1", 0x35f1140, 0x35f1160, indexNGBCSprites_Fuuma, 0x01 },
    { L"Start+B - Extra Move 2", 0x35f1160, 0x35f1180, indexNGBCSprites_Fuuma, 0x02 },
    { L"Start+B - Extra Move 3", 0x35f1180, 0x35f11a0, indexNGBCSprites_Fuuma, 0x03 },
    { L"Start+B - Extra Move 4", 0x35f11a0, 0x35f11c0, indexNGBCSprites_Fuuma, 0x04 },
    { L"Start+B - Extra Move 5", 0x35f11c0, 0x35f11e0, indexNGBCSprites_Fuuma, 0x05 },
    { L"Start+B - Extra Move 6", 0x35f11e0, 0x35f1200, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_SC[] =
{
    { L"Fuuma SC", 0x35f1200, 0x35f1220, indexNGBCSprites_Fuuma },
    { L"Start+C - Super Trail", 0x35f1220, 0x35f1240, indexNGBCSprites_Fuuma, 0x00 },
    { L"Start+C - Extra Move 1", 0x35f1240, 0x35f1260, indexNGBCSprites_Fuuma, 0x01 },
    { L"Start+C - Extra Move 2", 0x35f1260, 0x35f1280, indexNGBCSprites_Fuuma, 0x02 },
    { L"Start+C - Extra Move 3", 0x35f1280, 0x35f12a0, indexNGBCSprites_Fuuma, 0x03 },
    { L"Start+C - Extra Move 4", 0x35f12a0, 0x35f12c0, indexNGBCSprites_Fuuma, 0x04 },
    { L"Start+C - Extra Move 5", 0x35f12c0, 0x35f12e0, indexNGBCSprites_Fuuma, 0x05 },
    { L"Start+C - Extra Move 6", 0x35f12e0, 0x35f1300, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_FUUMA_PALETTES_SD[] =
{
    { L"Fuuma SD", 0x35f1300, 0x35f1320, indexNGBCSprites_Fuuma },
    { L"Start+D - Super Trail", 0x35f1320, 0x35f1340, indexNGBCSprites_Fuuma, 0x00 },
    { L"Start+D - Extra Move 1", 0x35f1340, 0x35f1360, indexNGBCSprites_Fuuma, 0x01 },
    { L"Start+D - Extra Move 2", 0x35f1360, 0x35f1380, indexNGBCSprites_Fuuma, 0x02 },
    { L"Start+D - Extra Move 3", 0x35f1380, 0x35f13a0, indexNGBCSprites_Fuuma, 0x03 },
    { L"Start+D - Extra Move 4", 0x35f13a0, 0x35f13c0, indexNGBCSprites_Fuuma, 0x04 },
    { L"Start+D - Extra Move 5", 0x35f13c0, 0x35f13e0, indexNGBCSprites_Fuuma, 0x05 },
    { L"Start+D - Extra Move 6", 0x35f13e0, 0x35f1400, indexNGBCSprites_Fuuma, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_A[] =
{
    { L"Mudman A", 0x37d6000, 0x37d6020, indexNGBCSprites_Mudman },
    { L"A - Super Trail", 0x37d6020, 0x37d6040, indexNGBCSprites_Mudman, 0x00 },
    { L"A - Extra Move 1", 0x37d6040, 0x37d6060, indexNGBCSprites_Mudman, 0x01 },
    { L"A - Extra Move 2", 0x37d6060, 0x37d6080, indexNGBCSprites_Mudman, 0x02 },
    { L"A - Extra Move 3", 0x37d6080, 0x37d60a0, indexNGBCSprites_Mudman, 0x03 },
    { L"A - Extra Move 4", 0x37d60a0, 0x37d60c0, indexNGBCSprites_Mudman, 0x04 },
    { L"A - Extra Move 5", 0x37d60c0, 0x37d60e0, indexNGBCSprites_Mudman, 0x05 },
    { L"A - Extra Move 6", 0x37d60e0, 0x37d6100, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_B[] =
{
    { L"Mudman B", 0x37d6100, 0x37d6120, indexNGBCSprites_Mudman },
    { L"B - Super Trail", 0x37d6120, 0x37d6140, indexNGBCSprites_Mudman, 0x00 },
    { L"B - Extra Move 1", 0x37d6140, 0x37d6160, indexNGBCSprites_Mudman, 0x01 },
    { L"B - Extra Move 2", 0x37d6160, 0x37d6180, indexNGBCSprites_Mudman, 0x02 },
    { L"B - Extra Move 3", 0x37d6180, 0x37d61a0, indexNGBCSprites_Mudman, 0x03 },
    { L"B - Extra Move 4", 0x37d61a0, 0x37d61c0, indexNGBCSprites_Mudman, 0x04 },
    { L"B - Extra Move 5", 0x37d61c0, 0x37d61e0, indexNGBCSprites_Mudman, 0x05 },
    { L"B - Extra Move 6", 0x37d61e0, 0x37d6200, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_C[] =
{
    { L"Mudman C", 0x37d6200, 0x37d6220, indexNGBCSprites_Mudman },
    { L"C - Super Trail", 0x37d6220, 0x37d6240, indexNGBCSprites_Mudman, 0x00 },
    { L"C - Extra Move 1", 0x37d6240, 0x37d6260, indexNGBCSprites_Mudman, 0x01 },
    { L"C - Extra Move 2", 0x37d6260, 0x37d6280, indexNGBCSprites_Mudman, 0x02 },
    { L"C - Extra Move 3", 0x37d6280, 0x37d62a0, indexNGBCSprites_Mudman, 0x03 },
    { L"C - Extra Move 4", 0x37d62a0, 0x37d62c0, indexNGBCSprites_Mudman, 0x04 },
    { L"C - Extra Move 5", 0x37d62c0, 0x37d62e0, indexNGBCSprites_Mudman, 0x05 },
    { L"C - Extra Move 6", 0x37d62e0, 0x37d6300, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_D[] =
{
    { L"Mudman D", 0x37d6300, 0x37d6320, indexNGBCSprites_Mudman },
    { L"D - Super Trail", 0x37d6320, 0x37d6340, indexNGBCSprites_Mudman, 0x00 },
    { L"D - Extra Move 1", 0x37d6340, 0x37d6360, indexNGBCSprites_Mudman, 0x01 },
    { L"D - Extra Move 2", 0x37d6360, 0x37d6380, indexNGBCSprites_Mudman, 0x02 },
    { L"D - Extra Move 3", 0x37d6380, 0x37d63a0, indexNGBCSprites_Mudman, 0x03 },
    { L"D - Extra Move 4", 0x37d63a0, 0x37d63c0, indexNGBCSprites_Mudman, 0x04 },
    { L"D - Extra Move 5", 0x37d63c0, 0x37d63e0, indexNGBCSprites_Mudman, 0x05 },
    { L"D - Extra Move 6", 0x37d63e0, 0x37d6400, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_EA[] =
{
    { L"Mudman EA", 0x37d6400, 0x37d6420, indexNGBCSprites_Mudman },
    { L"E+A - Super Trail", 0x37d6420, 0x37d6440, indexNGBCSprites_Mudman, 0x00 },
    { L"E+A - Extra Move 1", 0x37d6440, 0x37d6460, indexNGBCSprites_Mudman, 0x01 },
    { L"E+A - Extra Move 2", 0x37d6460, 0x37d6480, indexNGBCSprites_Mudman, 0x02 },
    { L"E+A - Extra Move 3", 0x37d6480, 0x37d64a0, indexNGBCSprites_Mudman, 0x03 },
    { L"E+A - Extra Move 4", 0x37d64a0, 0x37d64c0, indexNGBCSprites_Mudman, 0x04 },
    { L"E+A - Extra Move 5", 0x37d64c0, 0x37d64e0, indexNGBCSprites_Mudman, 0x05 },
    { L"E+A - Extra Move 6", 0x37d64e0, 0x37d6500, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_EB[] =
{
    { L"Mudman EB", 0x37d6500, 0x37d6520, indexNGBCSprites_Mudman },
    { L"E+B - Super Trail", 0x37d6520, 0x37d6540, indexNGBCSprites_Mudman, 0x00 },
    { L"E+B - Extra Move 1", 0x37d6540, 0x37d6560, indexNGBCSprites_Mudman, 0x01 },
    { L"E+B - Extra Move 2", 0x37d6560, 0x37d6580, indexNGBCSprites_Mudman, 0x02 },
    { L"E+B - Extra Move 3", 0x37d6580, 0x37d65a0, indexNGBCSprites_Mudman, 0x03 },
    { L"E+B - Extra Move 4", 0x37d65a0, 0x37d65c0, indexNGBCSprites_Mudman, 0x04 },
    { L"E+B - Extra Move 5", 0x37d65c0, 0x37d65e0, indexNGBCSprites_Mudman, 0x05 },
    { L"E+B - Extra Move 6", 0x37d65e0, 0x37d6600, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_EC[] =
{
    { L"Mudman EC", 0x37d6600, 0x37d6620, indexNGBCSprites_Mudman },
    { L"E+C - Super Trail", 0x37d6620, 0x37d6640, indexNGBCSprites_Mudman, 0x00 },
    { L"E+C - Extra Move 1", 0x37d6640, 0x37d6660, indexNGBCSprites_Mudman, 0x01 },
    { L"E+C - Extra Move 2", 0x37d6660, 0x37d6680, indexNGBCSprites_Mudman, 0x02 },
    { L"E+C - Extra Move 3", 0x37d6680, 0x37d66a0, indexNGBCSprites_Mudman, 0x03 },
    { L"E+C - Extra Move 4", 0x37d66a0, 0x37d66c0, indexNGBCSprites_Mudman, 0x04 },
    { L"E+C - Extra Move 5", 0x37d66c0, 0x37d66e0, indexNGBCSprites_Mudman, 0x05 },
    { L"E+C - Extra Move 6", 0x37d66e0, 0x37d6700, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_ED[] =
{
    { L"Mudman ED", 0x37d6700, 0x37d6720, indexNGBCSprites_Mudman },
    { L"E+D - Super Trail", 0x37d6720, 0x37d6740, indexNGBCSprites_Mudman, 0x00 },
    { L"E+D - Extra Move 1", 0x37d6740, 0x37d6760, indexNGBCSprites_Mudman, 0x01 },
    { L"E+D - Extra Move 2", 0x37d6760, 0x37d6780, indexNGBCSprites_Mudman, 0x02 },
    { L"E+D - Extra Move 3", 0x37d6780, 0x37d67a0, indexNGBCSprites_Mudman, 0x03 },
    { L"E+D - Extra Move 4", 0x37d67a0, 0x37d67c0, indexNGBCSprites_Mudman, 0x04 },
    { L"E+D - Extra Move 5", 0x37d67c0, 0x37d67e0, indexNGBCSprites_Mudman, 0x05 },
    { L"E+D - Extra Move 6", 0x37d67e0, 0x37d6800, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_SA[] =
{
    { L"Mudman SA", 0x37d6800, 0x37d6820, indexNGBCSprites_Mudman },
    { L"Start+A - Super Trail", 0x37d6820, 0x37d6840, indexNGBCSprites_Mudman, 0x00 },
    { L"Start+A - Extra Move 1", 0x37d6840, 0x37d6860, indexNGBCSprites_Mudman, 0x01 },
    { L"Start+A - Extra Move 2", 0x37d6860, 0x37d6880, indexNGBCSprites_Mudman, 0x02 },
    { L"Start+A - Extra Move 3", 0x37d6880, 0x37d68a0, indexNGBCSprites_Mudman, 0x03 },
    { L"Start+A - Extra Move 4", 0x37d68a0, 0x37d68c0, indexNGBCSprites_Mudman, 0x04 },
    { L"Start+A - Extra Move 5", 0x37d68c0, 0x37d68e0, indexNGBCSprites_Mudman, 0x05 },
    { L"Start+A - Extra Move 6", 0x37d68e0, 0x37d6900, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_SB[] =
{
    { L"Mudman SB", 0x37d6900, 0x37d6920, indexNGBCSprites_Mudman },
    { L"Start+B - Super Trail", 0x37d6920, 0x37d6940, indexNGBCSprites_Mudman, 0x00 },
    { L"Start+B - Extra Move 1", 0x37d6940, 0x37d6960, indexNGBCSprites_Mudman, 0x01 },
    { L"Start+B - Extra Move 2", 0x37d6960, 0x37d6980, indexNGBCSprites_Mudman, 0x02 },
    { L"Start+B - Extra Move 3", 0x37d6980, 0x37d69a0, indexNGBCSprites_Mudman, 0x03 },
    { L"Start+B - Extra Move 4", 0x37d69a0, 0x37d69c0, indexNGBCSprites_Mudman, 0x04 },
    { L"Start+B - Extra Move 5", 0x37d69c0, 0x37d69e0, indexNGBCSprites_Mudman, 0x05 },
    { L"Start+B - Extra Move 6", 0x37d69e0, 0x37d6a00, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_SC[] =
{
    { L"Mudman SC", 0x37d6a00, 0x37d6a20, indexNGBCSprites_Mudman },
    { L"Start+C - Super Trail", 0x37d6a20, 0x37d6a40, indexNGBCSprites_Mudman, 0x00 },
    { L"Start+C - Extra Move 1", 0x37d6a40, 0x37d6a60, indexNGBCSprites_Mudman, 0x01 },
    { L"Start+C - Extra Move 2", 0x37d6a60, 0x37d6a80, indexNGBCSprites_Mudman, 0x02 },
    { L"Start+C - Extra Move 3", 0x37d6a80, 0x37d6aa0, indexNGBCSprites_Mudman, 0x03 },
    { L"Start+C - Extra Move 4", 0x37d6aa0, 0x37d6ac0, indexNGBCSprites_Mudman, 0x04 },
    { L"Start+C - Extra Move 5", 0x37d6ac0, 0x37d6ae0, indexNGBCSprites_Mudman, 0x05 },
    { L"Start+C - Extra Move 6", 0x37d6ae0, 0x37d6b00, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MUDMAN_PALETTES_SD[] =
{
    { L"Mudman SD", 0x37d6b00, 0x37d6b20, indexNGBCSprites_Mudman },
    { L"Start+D - Super Trail", 0x37d6b20, 0x37d6b40, indexNGBCSprites_Mudman, 0x00 },
    { L"Start+D - Extra Move 1", 0x37d6b40, 0x37d6b60, indexNGBCSprites_Mudman, 0x01 },
    { L"Start+D - Extra Move 2", 0x37d6b60, 0x37d6b80, indexNGBCSprites_Mudman, 0x02 },
    { L"Start+D - Extra Move 3", 0x37d6b80, 0x37d6ba0, indexNGBCSprites_Mudman, 0x03 },
    { L"Start+D - Extra Move 4", 0x37d6ba0, 0x37d6bc0, indexNGBCSprites_Mudman, 0x04 },
    { L"Start+D - Extra Move 5", 0x37d6bc0, 0x37d6be0, indexNGBCSprites_Mudman, 0x05 },
    { L"Start+D - Extra Move 6", 0x37d6be0, 0x37d6c00, indexNGBCSprites_Mudman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_A[] =
{
    { L"Tung Fu Rue A", 0x399d800, 0x399d820, indexNGBCSprites_TungFuRue },
    { L"A - Super Trail", 0x399d820, 0x399d840, indexNGBCSprites_TungFuRue, 0x00 },
    { L"A - Extra Move 1", 0x399d840, 0x399d860, indexNGBCSprites_TungFuRue, 0x01 },
    { L"A - Extra Move 2", 0x399d860, 0x399d880, indexNGBCSprites_TungFuRue, 0x02 },
    { L"A - Extra Move 3", 0x399d880, 0x399d8a0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"A - Extra Move 4", 0x399d8a0, 0x399d8c0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"A - Extra Move 5", 0x399d8c0, 0x399d8e0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"A - Extra Move 6", 0x399d8e0, 0x399d900, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_B[] =
{
    { L"Tung Fu Rue B", 0x399d900, 0x399d920, indexNGBCSprites_TungFuRue },
    { L"B - Super Trail", 0x399d920, 0x399d940, indexNGBCSprites_TungFuRue, 0x00 },
    { L"B - Extra Move 1", 0x399d940, 0x399d960, indexNGBCSprites_TungFuRue, 0x01 },
    { L"B - Extra Move 2", 0x399d960, 0x399d980, indexNGBCSprites_TungFuRue, 0x02 },
    { L"B - Extra Move 3", 0x399d980, 0x399d9a0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"B - Extra Move 4", 0x399d9a0, 0x399d9c0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"B - Extra Move 5", 0x399d9c0, 0x399d9e0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"B - Extra Move 6", 0x399d9e0, 0x399da00, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_C[] =
{
    { L"Tung Fu Rue C", 0x399da00, 0x399da20, indexNGBCSprites_TungFuRue },
    { L"C - Super Trail", 0x399da20, 0x399da40, indexNGBCSprites_TungFuRue, 0x00 },
    { L"C - Extra Move 1", 0x399da40, 0x399da60, indexNGBCSprites_TungFuRue, 0x01 },
    { L"C - Extra Move 2", 0x399da60, 0x399da80, indexNGBCSprites_TungFuRue, 0x02 },
    { L"C - Extra Move 3", 0x399da80, 0x399daa0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"C - Extra Move 4", 0x399daa0, 0x399dac0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"C - Extra Move 5", 0x399dac0, 0x399dae0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"C - Extra Move 6", 0x399dae0, 0x399db00, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_D[] =
{
    { L"Tung Fu Rue D", 0x399db00, 0x399db20, indexNGBCSprites_TungFuRue },
    { L"D - Super Trail", 0x399db20, 0x399db40, indexNGBCSprites_TungFuRue, 0x00 },
    { L"D - Extra Move 1", 0x399db40, 0x399db60, indexNGBCSprites_TungFuRue, 0x01 },
    { L"D - Extra Move 2", 0x399db60, 0x399db80, indexNGBCSprites_TungFuRue, 0x02 },
    { L"D - Extra Move 3", 0x399db80, 0x399dba0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"D - Extra Move 4", 0x399dba0, 0x399dbc0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"D - Extra Move 5", 0x399dbc0, 0x399dbe0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"D - Extra Move 6", 0x399dbe0, 0x399dc00, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_EA[] =
{
    { L"Tung Fu Rue EA", 0x399dc00, 0x399dc20, indexNGBCSprites_TungFuRue },
    { L"E+A - Super Trail", 0x399dc20, 0x399dc40, indexNGBCSprites_TungFuRue, 0x00 },
    { L"E+A - Extra Move 1", 0x399dc40, 0x399dc60, indexNGBCSprites_TungFuRue, 0x01 },
    { L"E+A - Extra Move 2", 0x399dc60, 0x399dc80, indexNGBCSprites_TungFuRue, 0x02 },
    { L"E+A - Extra Move 3", 0x399dc80, 0x399dca0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"E+A - Extra Move 4", 0x399dca0, 0x399dcc0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"E+A - Extra Move 5", 0x399dcc0, 0x399dce0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"E+A - Extra Move 6", 0x399dce0, 0x399dd00, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_EB[] =
{
    { L"Tung Fu Rue EB", 0x399dd00, 0x399dd20, indexNGBCSprites_TungFuRue },
    { L"E+B - Super Trail", 0x399dd20, 0x399dd40, indexNGBCSprites_TungFuRue, 0x00 },
    { L"E+B - Extra Move 1", 0x399dd40, 0x399dd60, indexNGBCSprites_TungFuRue, 0x01 },
    { L"E+B - Extra Move 2", 0x399dd60, 0x399dd80, indexNGBCSprites_TungFuRue, 0x02 },
    { L"E+B - Extra Move 3", 0x399dd80, 0x399dda0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"E+B - Extra Move 4", 0x399dda0, 0x399ddc0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"E+B - Extra Move 5", 0x399ddc0, 0x399dde0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"E+B - Extra Move 6", 0x399dde0, 0x399de00, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_EC[] =
{
    { L"Tung Fu Rue EC", 0x399de00, 0x399de20, indexNGBCSprites_TungFuRue },
    { L"E+C - Super Trail", 0x399de20, 0x399de40, indexNGBCSprites_TungFuRue, 0x00 },
    { L"E+C - Extra Move 1", 0x399de40, 0x399de60, indexNGBCSprites_TungFuRue, 0x01 },
    { L"E+C - Extra Move 2", 0x399de60, 0x399de80, indexNGBCSprites_TungFuRue, 0x02 },
    { L"E+C - Extra Move 3", 0x399de80, 0x399dea0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"E+C - Extra Move 4", 0x399dea0, 0x399dec0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"E+C - Extra Move 5", 0x399dec0, 0x399dee0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"E+C - Extra Move 6", 0x399dee0, 0x399df00, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_ED[] =
{
    { L"Tung Fu Rue ED", 0x399df00, 0x399df20, indexNGBCSprites_TungFuRue },
    { L"E+D - Super Trail", 0x399df20, 0x399df40, indexNGBCSprites_TungFuRue, 0x00 },
    { L"E+D - Extra Move 1", 0x399df40, 0x399df60, indexNGBCSprites_TungFuRue, 0x01 },
    { L"E+D - Extra Move 2", 0x399df60, 0x399df80, indexNGBCSprites_TungFuRue, 0x02 },
    { L"E+D - Extra Move 3", 0x399df80, 0x399dfa0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"E+D - Extra Move 4", 0x399dfa0, 0x399dfc0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"E+D - Extra Move 5", 0x399dfc0, 0x399dfe0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"E+D - Extra Move 6", 0x399dfe0, 0x399e000, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_SA[] =
{
    { L"Tung Fu Rue SA", 0x399e000, 0x399e020, indexNGBCSprites_TungFuRue },
    { L"Start+A - Super Trail", 0x399e020, 0x399e040, indexNGBCSprites_TungFuRue, 0x00 },
    { L"Start+A - Extra Move 1", 0x399e040, 0x399e060, indexNGBCSprites_TungFuRue, 0x01 },
    { L"Start+A - Extra Move 2", 0x399e060, 0x399e080, indexNGBCSprites_TungFuRue, 0x02 },
    { L"Start+A - Extra Move 3", 0x399e080, 0x399e0a0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"Start+A - Extra Move 4", 0x399e0a0, 0x399e0c0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"Start+A - Extra Move 5", 0x399e0c0, 0x399e0e0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"Start+A - Extra Move 6", 0x399e0e0, 0x399e100, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_SB[] =
{
    { L"Tung Fu Rue SB", 0x399e100, 0x399e120, indexNGBCSprites_TungFuRue },
    { L"Start+B - Super Trail", 0x399e120, 0x399e140, indexNGBCSprites_TungFuRue, 0x00 },
    { L"Start+B - Extra Move 1", 0x399e140, 0x399e160, indexNGBCSprites_TungFuRue, 0x01 },
    { L"Start+B - Extra Move 2", 0x399e160, 0x399e180, indexNGBCSprites_TungFuRue, 0x02 },
    { L"Start+B - Extra Move 3", 0x399e180, 0x399e1a0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"Start+B - Extra Move 4", 0x399e1a0, 0x399e1c0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"Start+B - Extra Move 5", 0x399e1c0, 0x399e1e0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"Start+B - Extra Move 6", 0x399e1e0, 0x399e200, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_SC[] =
{
    { L"Tung Fu Rue SC", 0x399e200, 0x399e220, indexNGBCSprites_TungFuRue },
    { L"Start+C - Super Trail", 0x399e220, 0x399e240, indexNGBCSprites_TungFuRue, 0x00 },
    { L"Start+C - Extra Move 1", 0x399e240, 0x399e260, indexNGBCSprites_TungFuRue, 0x01 },
    { L"Start+C - Extra Move 2", 0x399e260, 0x399e280, indexNGBCSprites_TungFuRue, 0x02 },
    { L"Start+C - Extra Move 3", 0x399e280, 0x399e2a0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"Start+C - Extra Move 4", 0x399e2a0, 0x399e2c0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"Start+C - Extra Move 5", 0x399e2c0, 0x399e2e0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"Start+C - Extra Move 6", 0x399e2e0, 0x399e300, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_TUNGFURUE_PALETTES_SD[] =
{
    { L"Tung Fu Rue SD", 0x399e300, 0x399e320, indexNGBCSprites_TungFuRue },
    { L"Start+D - Super Trail", 0x399e320, 0x399e340, indexNGBCSprites_TungFuRue, 0x00 },
    { L"Start+D - Extra Move 1", 0x399e340, 0x399e360, indexNGBCSprites_TungFuRue, 0x01 },
    { L"Start+D - Extra Move 2", 0x399e360, 0x399e380, indexNGBCSprites_TungFuRue, 0x02 },
    { L"Start+D - Extra Move 3", 0x399e380, 0x399e3a0, indexNGBCSprites_TungFuRue, 0x03 },
    { L"Start+D - Extra Move 4", 0x399e3a0, 0x399e3c0, indexNGBCSprites_TungFuRue, 0x04 },
    { L"Start+D - Extra Move 5", 0x399e3c0, 0x399e3e0, indexNGBCSprites_TungFuRue, 0x05 },
    { L"Start+D - Extra Move 6", 0x399e3e0, 0x399e400, indexNGBCSprites_TungFuRue, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_A[] =
{
    { L"Marco A", 0x3b12000, 0x3b12020, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"A - Super Trail", 0x3b12020, 0x3b12040, indexNGBCSprites_Marco, 0x00 },
    { L"A - Extra Move 1", 0x3b12040, 0x3b12060, indexNGBCSprites_Marco, 0x01 },
    { L"A - Extra Move 2", 0x3b12060, 0x3b12080, indexNGBCSprites_Marco, 0x02 },
    { L"A - Extra Move 3", 0x3b12080, 0x3b120a0, indexNGBCSprites_Marco, 0x03 },
    { L"A - Extra Move 4", 0x3b120a0, 0x3b120c0, indexNGBCSprites_Marco, 0x04 },
    { L"A - Extra Move 5", 0x3b120c0, 0x3b120e0, indexNGBCSprites_Marco, 0x05 },
    { L"A - Extra Move 6", 0x3b120e0, 0x3b12100, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_B[] =
{
    { L"Marco B", 0x3b12100, 0x3b12120, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"B - Super Trail", 0x3b12120, 0x3b12140, indexNGBCSprites_Marco, 0x00 },
    { L"B - Extra Move 1", 0x3b12140, 0x3b12160, indexNGBCSprites_Marco, 0x01 },
    { L"B - Extra Move 2", 0x3b12160, 0x3b12180, indexNGBCSprites_Marco, 0x02 },
    { L"B - Extra Move 3", 0x3b12180, 0x3b121a0, indexNGBCSprites_Marco, 0x03 },
    { L"B - Extra Move 4", 0x3b121a0, 0x3b121c0, indexNGBCSprites_Marco, 0x04 },
    { L"B - Extra Move 5", 0x3b121c0, 0x3b121e0, indexNGBCSprites_Marco, 0x05 },
    { L"B - Extra Move 6", 0x3b121e0, 0x3b12200, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_C[] =
{
    { L"Marco C", 0x3b12200, 0x3b12220, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"C - Super Trail", 0x3b12220, 0x3b12240, indexNGBCSprites_Marco, 0x00 },
    { L"C - Extra Move 1", 0x3b12240, 0x3b12260, indexNGBCSprites_Marco, 0x01 },
    { L"C - Extra Move 2", 0x3b12260, 0x3b12280, indexNGBCSprites_Marco, 0x02 },
    { L"C - Extra Move 3", 0x3b12280, 0x3b122a0, indexNGBCSprites_Marco, 0x03 },
    { L"C - Extra Move 4", 0x3b122a0, 0x3b122c0, indexNGBCSprites_Marco, 0x04 },
    { L"C - Extra Move 5", 0x3b122c0, 0x3b122e0, indexNGBCSprites_Marco, 0x05 },
    { L"C - Extra Move 6", 0x3b122e0, 0x3b12300, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_D[] =
{
    { L"Marco D", 0x3b12300, 0x3b12320, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"D - Super Trail", 0x3b12320, 0x3b12340, indexNGBCSprites_Marco, 0x00 },
    { L"D - Extra Move 1", 0x3b12340, 0x3b12360, indexNGBCSprites_Marco, 0x01 },
    { L"D - Extra Move 2", 0x3b12360, 0x3b12380, indexNGBCSprites_Marco, 0x02 },
    { L"D - Extra Move 3", 0x3b12380, 0x3b123a0, indexNGBCSprites_Marco, 0x03 },
    { L"D - Extra Move 4", 0x3b123a0, 0x3b123c0, indexNGBCSprites_Marco, 0x04 },
    { L"D - Extra Move 5", 0x3b123c0, 0x3b123e0, indexNGBCSprites_Marco, 0x05 },
    { L"D - Extra Move 6", 0x3b123e0, 0x3b12400, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_EA[] =
{
    { L"Marco EA", 0x3b12400, 0x3b12420, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"E+A - Super Trail", 0x3b12420, 0x3b12440, indexNGBCSprites_Marco, 0x00 },
    { L"E+A - Extra Move 1", 0x3b12440, 0x3b12460, indexNGBCSprites_Marco, 0x01 },
    { L"E+A - Extra Move 2", 0x3b12460, 0x3b12480, indexNGBCSprites_Marco, 0x02 },
    { L"E+A - Extra Move 3", 0x3b12480, 0x3b124a0, indexNGBCSprites_Marco, 0x03 },
    { L"E+A - Extra Move 4", 0x3b124a0, 0x3b124c0, indexNGBCSprites_Marco, 0x04 },
    { L"E+A - Extra Move 5", 0x3b124c0, 0x3b124e0, indexNGBCSprites_Marco, 0x05 },
    { L"E+A - Extra Move 6", 0x3b124e0, 0x3b12500, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_EB[] =
{
    { L"Marco EB", 0x3b12500, 0x3b12520, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"E+B - Super Trail", 0x3b12520, 0x3b12540, indexNGBCSprites_Marco, 0x00 },
    { L"E+B - Extra Move 1", 0x3b12540, 0x3b12560, indexNGBCSprites_Marco, 0x01 },
    { L"E+B - Extra Move 2", 0x3b12560, 0x3b12580, indexNGBCSprites_Marco, 0x02 },
    { L"E+B - Extra Move 3", 0x3b12580, 0x3b125a0, indexNGBCSprites_Marco, 0x03 },
    { L"E+B - Extra Move 4", 0x3b125a0, 0x3b125c0, indexNGBCSprites_Marco, 0x04 },
    { L"E+B - Extra Move 5", 0x3b125c0, 0x3b125e0, indexNGBCSprites_Marco, 0x05 },
    { L"E+B - Extra Move 6", 0x3b125e0, 0x3b12600, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_EC[] =
{
    { L"Marco EC", 0x3b12600, 0x3b12620, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"E+C - Super Trail", 0x3b12620, 0x3b12640, indexNGBCSprites_Marco, 0x00 },
    { L"E+C - Extra Move 1", 0x3b12640, 0x3b12660, indexNGBCSprites_Marco, 0x01 },
    { L"E+C - Extra Move 2", 0x3b12660, 0x3b12680, indexNGBCSprites_Marco, 0x02 },
    { L"E+C - Extra Move 3", 0x3b12680, 0x3b126a0, indexNGBCSprites_Marco, 0x03 },
    { L"E+C - Extra Move 4", 0x3b126a0, 0x3b126c0, indexNGBCSprites_Marco, 0x04 },
    { L"E+C - Extra Move 5", 0x3b126c0, 0x3b126e0, indexNGBCSprites_Marco, 0x05 },
    { L"E+C - Extra Move 6", 0x3b126e0, 0x3b12700, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_ED[] =
{
    { L"Marco ED", 0x3b12700, 0x3b12720, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"E+D - Super Trail", 0x3b12720, 0x3b12740, indexNGBCSprites_Marco, 0x00 },
    { L"E+D - Extra Move 1", 0x3b12740, 0x3b12760, indexNGBCSprites_Marco, 0x01 },
    { L"E+D - Extra Move 2", 0x3b12760, 0x3b12780, indexNGBCSprites_Marco, 0x02 },
    { L"E+D - Extra Move 3", 0x3b12780, 0x3b127a0, indexNGBCSprites_Marco, 0x03 },
    { L"E+D - Extra Move 4", 0x3b127a0, 0x3b127c0, indexNGBCSprites_Marco, 0x04 },
    { L"E+D - Extra Move 5", 0x3b127c0, 0x3b127e0, indexNGBCSprites_Marco, 0x05 },
    { L"E+D - Extra Move 6", 0x3b127e0, 0x3b12800, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_SA[] =
{
    { L"Marco SA", 0x3b12800, 0x3b12820, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"Start+A - Super Trail", 0x3b12820, 0x3b12840, indexNGBCSprites_Marco, 0x00 },
    { L"Start+A - Extra Move 1", 0x3b12840, 0x3b12860, indexNGBCSprites_Marco, 0x01 },
    { L"Start+A - Extra Move 2", 0x3b12860, 0x3b12880, indexNGBCSprites_Marco, 0x02 },
    { L"Start+A - Extra Move 3", 0x3b12880, 0x3b128a0, indexNGBCSprites_Marco, 0x03 },
    { L"Start+A - Extra Move 4", 0x3b128a0, 0x3b128c0, indexNGBCSprites_Marco, 0x04 },
    { L"Start+A - Extra Move 5", 0x3b128c0, 0x3b128e0, indexNGBCSprites_Marco, 0x05 },
    { L"Start+A - Extra Move 6", 0x3b128e0, 0x3b12900, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_SB[] =
{
    { L"Marco SB", 0x3b12900, 0x3b12920, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"Start+B - Super Trail", 0x3b12920, 0x3b12940, indexNGBCSprites_Marco, 0x00 },
    { L"Start+B - Extra Move 1", 0x3b12940, 0x3b12960, indexNGBCSprites_Marco, 0x01 },
    { L"Start+B - Extra Move 2", 0x3b12960, 0x3b12980, indexNGBCSprites_Marco, 0x02 },
    { L"Start+B - Extra Move 3", 0x3b12980, 0x3b129a0, indexNGBCSprites_Marco, 0x03 },
    { L"Start+B - Extra Move 4", 0x3b129a0, 0x3b129c0, indexNGBCSprites_Marco, 0x04 },
    { L"Start+B - Extra Move 5", 0x3b129c0, 0x3b129e0, indexNGBCSprites_Marco, 0x05 },
    { L"Start+B - Extra Move 6", 0x3b129e0, 0x3b12a00, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_SC[] =
{
    { L"Marco SC", 0x3b12a00, 0x3b12a20, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"Start+C - Super Trail", 0x3b12a20, 0x3b12a40, indexNGBCSprites_Marco, 0x00 },
    { L"Start+C - Extra Move 1", 0x3b12a40, 0x3b12a60, indexNGBCSprites_Marco, 0x01 },
    { L"Start+C - Extra Move 2", 0x3b12a60, 0x3b12a80, indexNGBCSprites_Marco, 0x02 },
    { L"Start+C - Extra Move 3", 0x3b12a80, 0x3b12aa0, indexNGBCSprites_Marco, 0x03 },
    { L"Start+C - Extra Move 4", 0x3b12aa0, 0x3b12ac0, indexNGBCSprites_Marco, 0x04 },
    { L"Start+C - Extra Move 5", 0x3b12ac0, 0x3b12ae0, indexNGBCSprites_Marco, 0x05 },
    { L"Start+C - Extra Move 6", 0x3b12ae0, 0x3b12b00, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARCO_PALETTES_SD[] =
{
    { L"Marco SD", 0x3b12b00, 0x3b12b20, indexNGBCSprites_Marco, 0x00, &pairNext6 },
    { L"Start+D - Super Trail", 0x3b12b20, 0x3b12b40, indexNGBCSprites_Marco, 0x00 },
    { L"Start+D - Extra Move 1", 0x3b12b40, 0x3b12b60, indexNGBCSprites_Marco, 0x01 },
    { L"Start+D - Extra Move 2", 0x3b12b60, 0x3b12b80, indexNGBCSprites_Marco, 0x02 },
    { L"Start+D - Extra Move 3", 0x3b12b80, 0x3b12ba0, indexNGBCSprites_Marco, 0x03 },
    { L"Start+D - Extra Move 4", 0x3b12ba0, 0x3b12bc0, indexNGBCSprites_Marco, 0x04 },
    { L"Start+D - Extra Move 5", 0x3b12bc0, 0x3b12be0, indexNGBCSprites_Marco, 0x05 },
    { L"Start+D - Extra Move 6", 0x3b12be0, 0x3b12c00, indexNGBCSprites_Marco, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_A[] =
{
    { L"Mars People A", 0x3ce5800, 0x3ce5820, indexNGBCSprites_MarsPeople },
    { L"A - Super Trail", 0x3ce5820, 0x3ce5840, indexNGBCSprites_MarsPeople, 0x00 },
    { L"A - Extra Move 1", 0x3ce5840, 0x3ce5860, indexNGBCSprites_MarsPeople, 0x01 },
    { L"A - Extra Move 2", 0x3ce5860, 0x3ce5880, indexNGBCSprites_MarsPeople, 0x02 },
    { L"A - Extra Move 3", 0x3ce5880, 0x3ce58a0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"A - Extra Move 4", 0x3ce58a0, 0x3ce58c0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"A - Extra Move 5", 0x3ce58c0, 0x3ce58e0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"A - Extra Move 6", 0x3ce58e0, 0x3ce5900, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_B[] =
{
    { L"Mars People B", 0x3ce5900, 0x3ce5920, indexNGBCSprites_MarsPeople },
    { L"B - Super Trail", 0x3ce5920, 0x3ce5940, indexNGBCSprites_MarsPeople, 0x00 },
    { L"B - Extra Move 1", 0x3ce5940, 0x3ce5960, indexNGBCSprites_MarsPeople, 0x01 },
    { L"B - Extra Move 2", 0x3ce5960, 0x3ce5980, indexNGBCSprites_MarsPeople, 0x02 },
    { L"B - Extra Move 3", 0x3ce5980, 0x3ce59a0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"B - Extra Move 4", 0x3ce59a0, 0x3ce59c0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"B - Extra Move 5", 0x3ce59c0, 0x3ce59e0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"B - Extra Move 6", 0x3ce59e0, 0x3ce5a00, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_C[] =
{
    { L"Mars People C", 0x3ce5a00, 0x3ce5a20, indexNGBCSprites_MarsPeople },
    { L"C - Super Trail", 0x3ce5a20, 0x3ce5a40, indexNGBCSprites_MarsPeople, 0x00 },
    { L"C - Extra Move 1", 0x3ce5a40, 0x3ce5a60, indexNGBCSprites_MarsPeople, 0x01 },
    { L"C - Extra Move 2", 0x3ce5a60, 0x3ce5a80, indexNGBCSprites_MarsPeople, 0x02 },
    { L"C - Extra Move 3", 0x3ce5a80, 0x3ce5aa0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"C - Extra Move 4", 0x3ce5aa0, 0x3ce5ac0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"C - Extra Move 5", 0x3ce5ac0, 0x3ce5ae0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"C - Extra Move 6", 0x3ce5ae0, 0x3ce5b00, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_D[] =
{
    { L"Mars People D", 0x3ce5b00, 0x3ce5b20, indexNGBCSprites_MarsPeople },
    { L"D - Super Trail", 0x3ce5b20, 0x3ce5b40, indexNGBCSprites_MarsPeople, 0x00 },
    { L"D - Extra Move 1", 0x3ce5b40, 0x3ce5b60, indexNGBCSprites_MarsPeople, 0x01 },
    { L"D - Extra Move 2", 0x3ce5b60, 0x3ce5b80, indexNGBCSprites_MarsPeople, 0x02 },
    { L"D - Extra Move 3", 0x3ce5b80, 0x3ce5ba0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"D - Extra Move 4", 0x3ce5ba0, 0x3ce5bc0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"D - Extra Move 5", 0x3ce5bc0, 0x3ce5be0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"D - Extra Move 6", 0x3ce5be0, 0x3ce5c00, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_EA[] =
{
    { L"Mars People EA", 0x3ce5c00, 0x3ce5c20, indexNGBCSprites_MarsPeople },
    { L"E+A - Super Trail", 0x3ce5c20, 0x3ce5c40, indexNGBCSprites_MarsPeople, 0x00 },
    { L"E+A - Extra Move 1", 0x3ce5c40, 0x3ce5c60, indexNGBCSprites_MarsPeople, 0x01 },
    { L"E+A - Extra Move 2", 0x3ce5c60, 0x3ce5c80, indexNGBCSprites_MarsPeople, 0x02 },
    { L"E+A - Extra Move 3", 0x3ce5c80, 0x3ce5ca0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"E+A - Extra Move 4", 0x3ce5ca0, 0x3ce5cc0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"E+A - Extra Move 5", 0x3ce5cc0, 0x3ce5ce0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"E+A - Extra Move 6", 0x3ce5ce0, 0x3ce5d00, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_EB[] =
{
    { L"Mars People EB", 0x3ce5d00, 0x3ce5d20, indexNGBCSprites_MarsPeople },
    { L"E+B - Super Trail", 0x3ce5d20, 0x3ce5d40, indexNGBCSprites_MarsPeople, 0x00 },
    { L"E+B - Extra Move 1", 0x3ce5d40, 0x3ce5d60, indexNGBCSprites_MarsPeople, 0x01 },
    { L"E+B - Extra Move 2", 0x3ce5d60, 0x3ce5d80, indexNGBCSprites_MarsPeople, 0x02 },
    { L"E+B - Extra Move 3", 0x3ce5d80, 0x3ce5da0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"E+B - Extra Move 4", 0x3ce5da0, 0x3ce5dc0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"E+B - Extra Move 5", 0x3ce5dc0, 0x3ce5de0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"E+B - Extra Move 6", 0x3ce5de0, 0x3ce5e00, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_EC[] =
{
    { L"Mars People EC", 0x3ce5e00, 0x3ce5e20, indexNGBCSprites_MarsPeople },
    { L"E+C - Super Trail", 0x3ce5e20, 0x3ce5e40, indexNGBCSprites_MarsPeople, 0x00 },
    { L"E+C - Extra Move 1", 0x3ce5e40, 0x3ce5e60, indexNGBCSprites_MarsPeople, 0x01 },
    { L"E+C - Extra Move 2", 0x3ce5e60, 0x3ce5e80, indexNGBCSprites_MarsPeople, 0x02 },
    { L"E+C - Extra Move 3", 0x3ce5e80, 0x3ce5ea0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"E+C - Extra Move 4", 0x3ce5ea0, 0x3ce5ec0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"E+C - Extra Move 5", 0x3ce5ec0, 0x3ce5ee0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"E+C - Extra Move 6", 0x3ce5ee0, 0x3ce5f00, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_ED[] =
{
    { L"Mars People ED", 0x3ce5f00, 0x3ce5f20, indexNGBCSprites_MarsPeople },
    { L"E+D - Super Trail", 0x3ce5f20, 0x3ce5f40, indexNGBCSprites_MarsPeople, 0x00 },
    { L"E+D - Extra Move 1", 0x3ce5f40, 0x3ce5f60, indexNGBCSprites_MarsPeople, 0x01 },
    { L"E+D - Extra Move 2", 0x3ce5f60, 0x3ce5f80, indexNGBCSprites_MarsPeople, 0x02 },
    { L"E+D - Extra Move 3", 0x3ce5f80, 0x3ce5fa0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"E+D - Extra Move 4", 0x3ce5fa0, 0x3ce5fc0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"E+D - Extra Move 5", 0x3ce5fc0, 0x3ce5fe0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"E+D - Extra Move 6", 0x3ce5fe0, 0x3ce6000, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_SA[] =
{
    { L"Mars People SA", 0x3ce6000, 0x3ce6020, indexNGBCSprites_MarsPeople },
    { L"Start+A - Super Trail", 0x3ce6020, 0x3ce6040, indexNGBCSprites_MarsPeople, 0x00 },
    { L"Start+A - Extra Move 1", 0x3ce6040, 0x3ce6060, indexNGBCSprites_MarsPeople, 0x01 },
    { L"Start+A - Extra Move 2", 0x3ce6060, 0x3ce6080, indexNGBCSprites_MarsPeople, 0x02 },
    { L"Start+A - Extra Move 3", 0x3ce6080, 0x3ce60a0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"Start+A - Extra Move 4", 0x3ce60a0, 0x3ce60c0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"Start+A - Extra Move 5", 0x3ce60c0, 0x3ce60e0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"Start+A - Extra Move 6", 0x3ce60e0, 0x3ce6100, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_SB[] =
{
    { L"Mars People SB", 0x3ce6100, 0x3ce6120, indexNGBCSprites_MarsPeople },
    { L"Start+B - Super Trail", 0x3ce6120, 0x3ce6140, indexNGBCSprites_MarsPeople, 0x00 },
    { L"Start+B - Extra Move 1", 0x3ce6140, 0x3ce6160, indexNGBCSprites_MarsPeople, 0x01 },
    { L"Start+B - Extra Move 2", 0x3ce6160, 0x3ce6180, indexNGBCSprites_MarsPeople, 0x02 },
    { L"Start+B - Extra Move 3", 0x3ce6180, 0x3ce61a0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"Start+B - Extra Move 4", 0x3ce61a0, 0x3ce61c0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"Start+B - Extra Move 5", 0x3ce61c0, 0x3ce61e0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"Start+B - Extra Move 6", 0x3ce61e0, 0x3ce6200, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_SC[] =
{
    { L"Mars People SC", 0x3ce6200, 0x3ce6220, indexNGBCSprites_MarsPeople },
    { L"Start+C - Super Trail", 0x3ce6220, 0x3ce6240, indexNGBCSprites_MarsPeople, 0x00 },
    { L"Start+C - Extra Move 1", 0x3ce6240, 0x3ce6260, indexNGBCSprites_MarsPeople, 0x01 },
    { L"Start+C - Extra Move 2", 0x3ce6260, 0x3ce6280, indexNGBCSprites_MarsPeople, 0x02 },
    { L"Start+C - Extra Move 3", 0x3ce6280, 0x3ce62a0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"Start+C - Extra Move 4", 0x3ce62a0, 0x3ce62c0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"Start+C - Extra Move 5", 0x3ce62c0, 0x3ce62e0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"Start+C - Extra Move 6", 0x3ce62e0, 0x3ce6300, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MARSPEOPLE_PALETTES_SD[] =
{
    { L"Mars People SD", 0x3ce6300, 0x3ce6320, indexNGBCSprites_MarsPeople },
    { L"Start+D - Super Trail", 0x3ce6320, 0x3ce6340, indexNGBCSprites_MarsPeople, 0x00 },
    { L"Start+D - Extra Move 1", 0x3ce6340, 0x3ce6360, indexNGBCSprites_MarsPeople, 0x01 },
    { L"Start+D - Extra Move 2", 0x3ce6360, 0x3ce6380, indexNGBCSprites_MarsPeople, 0x02 },
    { L"Start+D - Extra Move 3", 0x3ce6380, 0x3ce63a0, indexNGBCSprites_MarsPeople, 0x03 },
    { L"Start+D - Extra Move 4", 0x3ce63a0, 0x3ce63c0, indexNGBCSprites_MarsPeople, 0x04 },
    { L"Start+D - Extra Move 5", 0x3ce63c0, 0x3ce63e0, indexNGBCSprites_MarsPeople, 0x05 },
    { L"Start+D - Extra Move 6", 0x3ce63e0, 0x3ce6400, indexNGBCSprites_MarsPeople, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_A[] =
{
    { L"King Lion A", 0x3e95000, 0x3e95020, indexNGBCSprites_KingLion },
    { L"A - Super Trail", 0x3e95020, 0x3e95040, indexNGBCSprites_KingLion, 0x00 },
    { L"A - Extra Move 1", 0x3e95040, 0x3e95060, indexNGBCSprites_KingLion, 0x01 },
    { L"A - Extra Move 2", 0x3e95060, 0x3e95080, indexNGBCSprites_KingLion, 0x02 },
    { L"A - Extra Move 3", 0x3e95080, 0x3e950a0, indexNGBCSprites_KingLion, 0x03 },
    { L"A - Extra Move 4", 0x3e950a0, 0x3e950c0, indexNGBCSprites_KingLion, 0x04 },
    { L"A - Extra Move 5", 0x3e950c0, 0x3e950e0, indexNGBCSprites_KingLion, 0x05 },
    { L"A - Extra Move 6", 0x3e950e0, 0x3e95100, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_B[] =
{
    { L"King Lion B", 0x3e95100, 0x3e95120, indexNGBCSprites_KingLion },
    { L"B - Super Trail", 0x3e95120, 0x3e95140, indexNGBCSprites_KingLion, 0x00 },
    { L"B - Extra Move 1", 0x3e95140, 0x3e95160, indexNGBCSprites_KingLion, 0x01 },
    { L"B - Extra Move 2", 0x3e95160, 0x3e95180, indexNGBCSprites_KingLion, 0x02 },
    { L"B - Extra Move 3", 0x3e95180, 0x3e951a0, indexNGBCSprites_KingLion, 0x03 },
    { L"B - Extra Move 4", 0x3e951a0, 0x3e951c0, indexNGBCSprites_KingLion, 0x04 },
    { L"B - Extra Move 5", 0x3e951c0, 0x3e951e0, indexNGBCSprites_KingLion, 0x05 },
    { L"B - Extra Move 6", 0x3e951e0, 0x3e95200, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_C[] =
{
    { L"King Lion C", 0x3e95200, 0x3e95220, indexNGBCSprites_KingLion },
    { L"C - Super Trail", 0x3e95220, 0x3e95240, indexNGBCSprites_KingLion, 0x00 },
    { L"C - Extra Move 1", 0x3e95240, 0x3e95260, indexNGBCSprites_KingLion, 0x01 },
    { L"C - Extra Move 2", 0x3e95260, 0x3e95280, indexNGBCSprites_KingLion, 0x02 },
    { L"C - Extra Move 3", 0x3e95280, 0x3e952a0, indexNGBCSprites_KingLion, 0x03 },
    { L"C - Extra Move 4", 0x3e952a0, 0x3e952c0, indexNGBCSprites_KingLion, 0x04 },
    { L"C - Extra Move 5", 0x3e952c0, 0x3e952e0, indexNGBCSprites_KingLion, 0x05 },
    { L"C - Extra Move 6", 0x3e952e0, 0x3e95300, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_D[] =
{
    { L"King Lion D", 0x3e95300, 0x3e95320, indexNGBCSprites_KingLion },
    { L"D - Super Trail", 0x3e95320, 0x3e95340, indexNGBCSprites_KingLion, 0x00 },
    { L"D - Extra Move 1", 0x3e95340, 0x3e95360, indexNGBCSprites_KingLion, 0x01 },
    { L"D - Extra Move 2", 0x3e95360, 0x3e95380, indexNGBCSprites_KingLion, 0x02 },
    { L"D - Extra Move 3", 0x3e95380, 0x3e953a0, indexNGBCSprites_KingLion, 0x03 },
    { L"D - Extra Move 4", 0x3e953a0, 0x3e953c0, indexNGBCSprites_KingLion, 0x04 },
    { L"D - Extra Move 5", 0x3e953c0, 0x3e953e0, indexNGBCSprites_KingLion, 0x05 },
    { L"D - Extra Move 6", 0x3e953e0, 0x3e95400, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_EA[] =
{
    { L"King Lion EA", 0x3e95400, 0x3e95420, indexNGBCSprites_KingLion },
    { L"E+A - Super Trail", 0x3e95420, 0x3e95440, indexNGBCSprites_KingLion, 0x00 },
    { L"E+A - Extra Move 1", 0x3e95440, 0x3e95460, indexNGBCSprites_KingLion, 0x01 },
    { L"E+A - Extra Move 2", 0x3e95460, 0x3e95480, indexNGBCSprites_KingLion, 0x02 },
    { L"E+A - Extra Move 3", 0x3e95480, 0x3e954a0, indexNGBCSprites_KingLion, 0x03 },
    { L"E+A - Extra Move 4", 0x3e954a0, 0x3e954c0, indexNGBCSprites_KingLion, 0x04 },
    { L"E+A - Extra Move 5", 0x3e954c0, 0x3e954e0, indexNGBCSprites_KingLion, 0x05 },
    { L"E+A - Extra Move 6", 0x3e954e0, 0x3e95500, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_EB[] =
{
    { L"King Lion EB", 0x3e95500, 0x3e95520, indexNGBCSprites_KingLion },
    { L"E+B - Super Trail", 0x3e95520, 0x3e95540, indexNGBCSprites_KingLion, 0x00 },
    { L"E+B - Extra Move 1", 0x3e95540, 0x3e95560, indexNGBCSprites_KingLion, 0x01 },
    { L"E+B - Extra Move 2", 0x3e95560, 0x3e95580, indexNGBCSprites_KingLion, 0x02 },
    { L"E+B - Extra Move 3", 0x3e95580, 0x3e955a0, indexNGBCSprites_KingLion, 0x03 },
    { L"E+B - Extra Move 4", 0x3e955a0, 0x3e955c0, indexNGBCSprites_KingLion, 0x04 },
    { L"E+B - Extra Move 5", 0x3e955c0, 0x3e955e0, indexNGBCSprites_KingLion, 0x05 },
    { L"E+B - Extra Move 6", 0x3e955e0, 0x3e95600, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_EC[] =
{
    { L"King Lion EC", 0x3e95600, 0x3e95620, indexNGBCSprites_KingLion },
    { L"E+C - Super Trail", 0x3e95620, 0x3e95640, indexNGBCSprites_KingLion, 0x00 },
    { L"E+C - Extra Move 1", 0x3e95640, 0x3e95660, indexNGBCSprites_KingLion, 0x01 },
    { L"E+C - Extra Move 2", 0x3e95660, 0x3e95680, indexNGBCSprites_KingLion, 0x02 },
    { L"E+C - Extra Move 3", 0x3e95680, 0x3e956a0, indexNGBCSprites_KingLion, 0x03 },
    { L"E+C - Extra Move 4", 0x3e956a0, 0x3e956c0, indexNGBCSprites_KingLion, 0x04 },
    { L"E+C - Extra Move 5", 0x3e956c0, 0x3e956e0, indexNGBCSprites_KingLion, 0x05 },
    { L"E+C - Extra Move 6", 0x3e956e0, 0x3e95700, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_ED[] =
{
    { L"King Lion ED", 0x3e95700, 0x3e95720, indexNGBCSprites_KingLion },
    { L"E+D - Super Trail", 0x3e95720, 0x3e95740, indexNGBCSprites_KingLion, 0x00 },
    { L"E+D - Extra Move 1", 0x3e95740, 0x3e95760, indexNGBCSprites_KingLion, 0x01 },
    { L"E+D - Extra Move 2", 0x3e95760, 0x3e95780, indexNGBCSprites_KingLion, 0x02 },
    { L"E+D - Extra Move 3", 0x3e95780, 0x3e957a0, indexNGBCSprites_KingLion, 0x03 },
    { L"E+D - Extra Move 4", 0x3e957a0, 0x3e957c0, indexNGBCSprites_KingLion, 0x04 },
    { L"E+D - Extra Move 5", 0x3e957c0, 0x3e957e0, indexNGBCSprites_KingLion, 0x05 },
    { L"E+D - Extra Move 6", 0x3e957e0, 0x3e95800, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_SA[] =
{
    { L"King Lion SA", 0x3e95800, 0x3e95820, indexNGBCSprites_KingLion },
    { L"Start+A - Super Trail", 0x3e95820, 0x3e95840, indexNGBCSprites_KingLion, 0x00 },
    { L"Start+A - Extra Move 1", 0x3e95840, 0x3e95860, indexNGBCSprites_KingLion, 0x01 },
    { L"Start+A - Extra Move 2", 0x3e95860, 0x3e95880, indexNGBCSprites_KingLion, 0x02 },
    { L"Start+A - Extra Move 3", 0x3e95880, 0x3e958a0, indexNGBCSprites_KingLion, 0x03 },
    { L"Start+A - Extra Move 4", 0x3e958a0, 0x3e958c0, indexNGBCSprites_KingLion, 0x04 },
    { L"Start+A - Extra Move 5", 0x3e958c0, 0x3e958e0, indexNGBCSprites_KingLion, 0x05 },
    { L"Start+A - Extra Move 6", 0x3e958e0, 0x3e95900, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_SB[] =
{
    { L"King Lion SB", 0x3e95900, 0x3e95920, indexNGBCSprites_KingLion },
    { L"Start+B - Super Trail", 0x3e95920, 0x3e95940, indexNGBCSprites_KingLion, 0x00 },
    { L"Start+B - Extra Move 1", 0x3e95940, 0x3e95960, indexNGBCSprites_KingLion, 0x01 },
    { L"Start+B - Extra Move 2", 0x3e95960, 0x3e95980, indexNGBCSprites_KingLion, 0x02 },
    { L"Start+B - Extra Move 3", 0x3e95980, 0x3e959a0, indexNGBCSprites_KingLion, 0x03 },
    { L"Start+B - Extra Move 4", 0x3e959a0, 0x3e959c0, indexNGBCSprites_KingLion, 0x04 },
    { L"Start+B - Extra Move 5", 0x3e959c0, 0x3e959e0, indexNGBCSprites_KingLion, 0x05 },
    { L"Start+B - Extra Move 6", 0x3e959e0, 0x3e95a00, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_SC[] =
{
    { L"King Lion SC", 0x3e95a00, 0x3e95a20, indexNGBCSprites_KingLion },
    { L"Start+C - Super Trail", 0x3e95a20, 0x3e95a40, indexNGBCSprites_KingLion, 0x00 },
    { L"Start+C - Extra Move 1", 0x3e95a40, 0x3e95a60, indexNGBCSprites_KingLion, 0x01 },
    { L"Start+C - Extra Move 2", 0x3e95a60, 0x3e95a80, indexNGBCSprites_KingLion, 0x02 },
    { L"Start+C - Extra Move 3", 0x3e95a80, 0x3e95aa0, indexNGBCSprites_KingLion, 0x03 },
    { L"Start+C - Extra Move 4", 0x3e95aa0, 0x3e95ac0, indexNGBCSprites_KingLion, 0x04 },
    { L"Start+C - Extra Move 5", 0x3e95ac0, 0x3e95ae0, indexNGBCSprites_KingLion, 0x05 },
    { L"Start+C - Extra Move 6", 0x3e95ae0, 0x3e95b00, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KINGLION_PALETTES_SD[] =
{
    { L"King Lion SD", 0x3e95b00, 0x3e95b20, indexNGBCSprites_KingLion },
    { L"Start+D - Super Trail", 0x3e95b20, 0x3e95b40, indexNGBCSprites_KingLion, 0x00 },
    { L"Start+D - Extra Move 1", 0x3e95b40, 0x3e95b60, indexNGBCSprites_KingLion, 0x01 },
    { L"Start+D - Extra Move 2", 0x3e95b60, 0x3e95b80, indexNGBCSprites_KingLion, 0x02 },
    { L"Start+D - Extra Move 3", 0x3e95b80, 0x3e95ba0, indexNGBCSprites_KingLion, 0x03 },
    { L"Start+D - Extra Move 4", 0x3e95ba0, 0x3e95bc0, indexNGBCSprites_KingLion, 0x04 },
    { L"Start+D - Extra Move 5", 0x3e95bc0, 0x3e95be0, indexNGBCSprites_KingLion, 0x05 },
    { L"Start+D - Extra Move 6", 0x3e95be0, 0x3e95c00, indexNGBCSprites_KingLion, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_A[] =
{
    { L"Cyber Woo A", 0x406f000, 0x406f020, indexNGBCSprites_CyberWoo },
    { L"A - Super Trail", 0x406f020, 0x406f040, indexNGBCSprites_CyberWoo, 0x00 },
    { L"A - Extra Move 1", 0x406f040, 0x406f060, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"A - Extra Move 2", 0x406f060, 0x406f080, indexNGBCSprites_CyberWoo, 0x02 },
    { L"A - Extra Move 3", 0x406f080, 0x406f0a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"A - Extra Move 4", 0x406f0a0, 0x406f0c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"A - Extra Move 5", 0x406f0c0, 0x406f0e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"A - Extra Move 6", 0x406f0e0, 0x406f100, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_B[] =
{
    { L"Cyber Woo B", 0x406f100, 0x406f120, indexNGBCSprites_CyberWoo },
    { L"B - Super Trail", 0x406f120, 0x406f140, indexNGBCSprites_CyberWoo, 0x00 },
    { L"B - Extra Move 1", 0x406f140, 0x406f160, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"B - Extra Move 2", 0x406f160, 0x406f180, indexNGBCSprites_CyberWoo, 0x02 },
    { L"B - Extra Move 3", 0x406f180, 0x406f1a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"B - Extra Move 4", 0x406f1a0, 0x406f1c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"B - Extra Move 5", 0x406f1c0, 0x406f1e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"B - Extra Move 6", 0x406f1e0, 0x406f200, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_C[] =
{
    { L"Cyber Woo C", 0x406f200, 0x406f220, indexNGBCSprites_CyberWoo },
    { L"C - Super Trail", 0x406f220, 0x406f240, indexNGBCSprites_CyberWoo, 0x00 },
    { L"C - Extra Move 1", 0x406f240, 0x406f260, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"C - Extra Move 2", 0x406f260, 0x406f280, indexNGBCSprites_CyberWoo, 0x02 },
    { L"C - Extra Move 3", 0x406f280, 0x406f2a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"C - Extra Move 4", 0x406f2a0, 0x406f2c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"C - Extra Move 5", 0x406f2c0, 0x406f2e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"C - Extra Move 6", 0x406f2e0, 0x406f300, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_D[] =
{
    { L"Cyber Woo D", 0x406f300, 0x406f320, indexNGBCSprites_CyberWoo },
    { L"D - Super Trail", 0x406f320, 0x406f340, indexNGBCSprites_CyberWoo, 0x00 },
    { L"D - Extra Move 1", 0x406f340, 0x406f360, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"D - Extra Move 2", 0x406f360, 0x406f380, indexNGBCSprites_CyberWoo, 0x02 },
    { L"D - Extra Move 3", 0x406f380, 0x406f3a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"D - Extra Move 4", 0x406f3a0, 0x406f3c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"D - Extra Move 5", 0x406f3c0, 0x406f3e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"D - Extra Move 6", 0x406f3e0, 0x406f400, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_EA[] =
{
    { L"Cyber Woo EA", 0x406f400, 0x406f420, indexNGBCSprites_CyberWoo },
    { L"E+A - Super Trail", 0x406f420, 0x406f440, indexNGBCSprites_CyberWoo, 0x00 },
    { L"E+A - Extra Move 1", 0x406f440, 0x406f460, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"E+A - Extra Move 2", 0x406f460, 0x406f480, indexNGBCSprites_CyberWoo, 0x02 },
    { L"E+A - Extra Move 3", 0x406f480, 0x406f4a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"E+A - Extra Move 4", 0x406f4a0, 0x406f4c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"E+A - Extra Move 5", 0x406f4c0, 0x406f4e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"E+A - Extra Move 6", 0x406f4e0, 0x406f500, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_EB[] =
{
    { L"Cyber Woo EB", 0x406f500, 0x406f520, indexNGBCSprites_CyberWoo },
    { L"E+B - Super Trail", 0x406f520, 0x406f540, indexNGBCSprites_CyberWoo, 0x00 },
    { L"E+B - Extra Move 1", 0x406f540, 0x406f560, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"E+B - Extra Move 2", 0x406f560, 0x406f580, indexNGBCSprites_CyberWoo, 0x02 },
    { L"E+B - Extra Move 3", 0x406f580, 0x406f5a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"E+B - Extra Move 4", 0x406f5a0, 0x406f5c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"E+B - Extra Move 5", 0x406f5c0, 0x406f5e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"E+B - Extra Move 6", 0x406f5e0, 0x406f600, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_EC[] =
{
    { L"Cyber Woo EC", 0x406f600, 0x406f620, indexNGBCSprites_CyberWoo },
    { L"E+C - Super Trail", 0x406f620, 0x406f640, indexNGBCSprites_CyberWoo, 0x00 },
    { L"E+C - Extra Move 1", 0x406f640, 0x406f660, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"E+C - Extra Move 2", 0x406f660, 0x406f680, indexNGBCSprites_CyberWoo, 0x02 },
    { L"E+C - Extra Move 3", 0x406f680, 0x406f6a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"E+C - Extra Move 4", 0x406f6a0, 0x406f6c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"E+C - Extra Move 5", 0x406f6c0, 0x406f6e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"E+C - Extra Move 6", 0x406f6e0, 0x406f700, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_ED[] =
{
    { L"Cyber Woo ED", 0x406f700, 0x406f720, indexNGBCSprites_CyberWoo },
    { L"E+D - Super Trail", 0x406f720, 0x406f740, indexNGBCSprites_CyberWoo, 0x00 },
    { L"E+D - Extra Move 1", 0x406f740, 0x406f760, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"E+D - Extra Move 2", 0x406f760, 0x406f780, indexNGBCSprites_CyberWoo, 0x02 },
    { L"E+D - Extra Move 3", 0x406f780, 0x406f7a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"E+D - Extra Move 4", 0x406f7a0, 0x406f7c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"E+D - Extra Move 5", 0x406f7c0, 0x406f7e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"E+D - Extra Move 6", 0x406f7e0, 0x406f800, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_SA[] =
{
    { L"Cyber Woo SA", 0x406f800, 0x406f820, indexNGBCSprites_CyberWoo },
    { L"Start+A - Super Trail", 0x406f820, 0x406f840, indexNGBCSprites_CyberWoo, 0x00 },
    { L"Start+A - Extra Move 1", 0x406f840, 0x406f860, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"Start+A - Extra Move 2", 0x406f860, 0x406f880, indexNGBCSprites_CyberWoo, 0x02 },
    { L"Start+A - Extra Move 3", 0x406f880, 0x406f8a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"Start+A - Extra Move 4", 0x406f8a0, 0x406f8c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"Start+A - Extra Move 5", 0x406f8c0, 0x406f8e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"Start+A - Extra Move 6", 0x406f8e0, 0x406f900, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_SB[] =
{
    { L"Cyber Woo SB", 0x406f900, 0x406f920, indexNGBCSprites_CyberWoo },
    { L"Start+B - Super Trail", 0x406f920, 0x406f940, indexNGBCSprites_CyberWoo, 0x00 },
    { L"Start+B - Extra Move 1", 0x406f940, 0x406f960, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"Start+B - Extra Move 2", 0x406f960, 0x406f980, indexNGBCSprites_CyberWoo, 0x02 },
    { L"Start+B - Extra Move 3", 0x406f980, 0x406f9a0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"Start+B - Extra Move 4", 0x406f9a0, 0x406f9c0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"Start+B - Extra Move 5", 0x406f9c0, 0x406f9e0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"Start+B - Extra Move 6", 0x406f9e0, 0x406fa00, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_SC[] =
{
    { L"Cyber Woo SC", 0x406fa00, 0x406fa20, indexNGBCSprites_CyberWoo },
    { L"Start+C - Super Trail", 0x406fa20, 0x406fa40, indexNGBCSprites_CyberWoo, 0x00 },
    { L"Start+C - Extra Move 1", 0x406fa40, 0x406fa60, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"Start+C - Extra Move 2", 0x406fa60, 0x406fa80, indexNGBCSprites_CyberWoo, 0x02 },
    { L"Start+C - Extra Move 3", 0x406fa80, 0x406faa0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"Start+C - Extra Move 4", 0x406faa0, 0x406fac0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"Start+C - Extra Move 5", 0x406fac0, 0x406fae0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"Start+C - Extra Move 6", 0x406fae0, 0x406fb00, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CYBERWOO_PALETTES_SD[] =
{
    { L"Cyber Woo SD", 0x406fb00, 0x406fb20, indexNGBCSprites_CyberWoo },
    { L"Start+D - Super Trail", 0x406fb20, 0x406fb40, indexNGBCSprites_CyberWoo, 0x00 },
    { L"Start+D - Extra Move 1", 0x406fb40, 0x406fb60, indexNGBCSprites_CyberWoo, 0x01, &pairNext4 },
    { L"Start+D - Extra Move 2", 0x406fb60, 0x406fb80, indexNGBCSprites_CyberWoo, 0x02 },
    { L"Start+D - Extra Move 3", 0x406fb80, 0x406fba0, indexNGBCSprites_CyberWoo, 0x03 },
    { L"Start+D - Extra Move 4", 0x406fba0, 0x406fbc0, indexNGBCSprites_CyberWoo, 0x04 },
    { L"Start+D - Extra Move 5", 0x406fbc0, 0x406fbe0, indexNGBCSprites_CyberWoo, 0x05 },
    { L"Start+D - Extra Move 6", 0x406fbe0, 0x406fc00, indexNGBCSprites_CyberWoo, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_A[] =
{
    { L"Goddess Athena A", 0x4236000, 0x4236020, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"A - Super Trail", 0x4236020, 0x4236040, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"A - Extra Move 1", 0x4236040, 0x4236060, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"A - Extra Move 2", 0x4236060, 0x4236080, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"A - Extra Move 3", 0x4236080, 0x42360a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"A - Extra Move 4", 0x42360a0, 0x42360c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"A - Extra Move 5", 0x42360c0, 0x42360e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"A - Extra Move 6", 0x42360e0, 0x4236100, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_B[] =
{
    { L"Goddess Athena B", 0x4236100, 0x4236120, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"B - Super Trail", 0x4236120, 0x4236140, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"B - Extra Move 1", 0x4236140, 0x4236160, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"B - Extra Move 2", 0x4236160, 0x4236180, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"B - Extra Move 3", 0x4236180, 0x42361a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"B - Extra Move 4", 0x42361a0, 0x42361c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"B - Extra Move 5", 0x42361c0, 0x42361e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"B - Extra Move 6", 0x42361e0, 0x4236200, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_C[] =
{
    { L"Goddess Athena C", 0x4236200, 0x4236220, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"C - Super Trail", 0x4236220, 0x4236240, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"C - Extra Move 1", 0x4236240, 0x4236260, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"C - Extra Move 2", 0x4236260, 0x4236280, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"C - Extra Move 3", 0x4236280, 0x42362a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"C - Extra Move 4", 0x42362a0, 0x42362c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"C - Extra Move 5", 0x42362c0, 0x42362e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"C - Extra Move 6", 0x42362e0, 0x4236300, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_D[] =
{
    { L"Goddess Athena D", 0x4236300, 0x4236320, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"D - Super Trail", 0x4236320, 0x4236340, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"D - Extra Move 1", 0x4236340, 0x4236360, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"D - Extra Move 2", 0x4236360, 0x4236380, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"D - Extra Move 3", 0x4236380, 0x42363a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"D - Extra Move 4", 0x42363a0, 0x42363c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"D - Extra Move 5", 0x42363c0, 0x42363e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"D - Extra Move 6", 0x42363e0, 0x4236400, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_EA[] =
{
    { L"Goddess Athena EA", 0x4236400, 0x4236420, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"E+A - Super Trail", 0x4236420, 0x4236440, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"E+A - Extra Move 1", 0x4236440, 0x4236460, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"E+A - Extra Move 2", 0x4236460, 0x4236480, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"E+A - Extra Move 3", 0x4236480, 0x42364a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"E+A - Extra Move 4", 0x42364a0, 0x42364c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"E+A - Extra Move 5", 0x42364c0, 0x42364e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"E+A - Extra Move 6", 0x42364e0, 0x4236500, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_EB[] =
{
    { L"Goddess Athena EB", 0x4236500, 0x4236520, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"E+B - Super Trail", 0x4236520, 0x4236540, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"E+B - Extra Move 1", 0x4236540, 0x4236560, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"E+B - Extra Move 2", 0x4236560, 0x4236580, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"E+B - Extra Move 3", 0x4236580, 0x42365a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"E+B - Extra Move 4", 0x42365a0, 0x42365c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"E+B - Extra Move 5", 0x42365c0, 0x42365e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"E+B - Extra Move 6", 0x42365e0, 0x4236600, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_EC[] =
{
    { L"Goddess Athena EC", 0x4236600, 0x4236620, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"E+C - Super Trail", 0x4236620, 0x4236640, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"E+C - Extra Move 1", 0x4236640, 0x4236660, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"E+C - Extra Move 2", 0x4236660, 0x4236680, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"E+C - Extra Move 3", 0x4236680, 0x42366a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"E+C - Extra Move 4", 0x42366a0, 0x42366c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"E+C - Extra Move 5", 0x42366c0, 0x42366e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"E+C - Extra Move 6", 0x42366e0, 0x4236700, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_ED[] =
{
    { L"Goddess Athena ED", 0x4236700, 0x4236720, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"E+D - Super Trail", 0x4236720, 0x4236740, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"E+D - Extra Move 1", 0x4236740, 0x4236760, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"E+D - Extra Move 2", 0x4236760, 0x4236780, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"E+D - Extra Move 3", 0x4236780, 0x42367a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"E+D - Extra Move 4", 0x42367a0, 0x42367c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"E+D - Extra Move 5", 0x42367c0, 0x42367e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"E+D - Extra Move 6", 0x42367e0, 0x4236800, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_SA[] =
{
    { L"Goddess Athena SA", 0x4236800, 0x4236820, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"Start+A - Super Trail", 0x4236820, 0x4236840, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"Start+A - Extra Move 1", 0x4236840, 0x4236860, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"Start+A - Extra Move 2", 0x4236860, 0x4236880, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"Start+A - Extra Move 3", 0x4236880, 0x42368a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"Start+A - Extra Move 4", 0x42368a0, 0x42368c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"Start+A - Extra Move 5", 0x42368c0, 0x42368e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"Start+A - Extra Move 6", 0x42368e0, 0x4236900, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_SB[] =
{
    { L"Goddess Athena SB", 0x4236900, 0x4236920, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"Start+B - Super Trail", 0x4236920, 0x4236940, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"Start+B - Extra Move 1", 0x4236940, 0x4236960, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"Start+B - Extra Move 2", 0x4236960, 0x4236980, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"Start+B - Extra Move 3", 0x4236980, 0x42369a0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"Start+B - Extra Move 4", 0x42369a0, 0x42369c0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"Start+B - Extra Move 5", 0x42369c0, 0x42369e0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"Start+B - Extra Move 6", 0x42369e0, 0x4236a00, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_SC[] =
{
    { L"Goddess Athena SC", 0x4236a00, 0x4236a20, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"Start+C - Super Trail", 0x4236a20, 0x4236a40, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"Start+C - Extra Move 1", 0x4236a40, 0x4236a60, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"Start+C - Extra Move 2", 0x4236a60, 0x4236a80, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"Start+C - Extra Move 3", 0x4236a80, 0x4236aa0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"Start+C - Extra Move 4", 0x4236aa0, 0x4236ac0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"Start+C - Extra Move 5", 0x4236ac0, 0x4236ae0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"Start+C - Extra Move 6", 0x4236ae0, 0x4236b00, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GODDESSATHENA_PALETTES_SD[] =
{
    { L"Goddess Athena SD", 0x4236b00, 0x4236b20, indexNGBCSprites_GoddessAthena, 0x00, &pairHandledInCode },
    { L"Start+D - Super Trail", 0x4236b20, 0x4236b40, indexNGBCSprites_GoddessAthena, 0x00 },
    { L"Start+D - Extra Move 1", 0x4236b40, 0x4236b60, indexNGBCSprites_GoddessAthena, 0x01 },
    { L"Start+D - Extra Move 2", 0x4236b60, 0x4236b80, indexNGBCSprites_GoddessAthena, 0x02 },
    { L"Start+D - Extra Move 3", 0x4236b80, 0x4236ba0, indexNGBCSprites_GoddessAthena, 0x03 },
    { L"Start+D - Extra Move 4", 0x4236ba0, 0x4236bc0, indexNGBCSprites_GoddessAthena, 0x04 },
    { L"Start+D - Extra Move 5", 0x4236bc0, 0x4236be0, indexNGBCSprites_GoddessAthena, 0x05 },
    { L"Start+D - Extra Move 6", 0x4236be0, 0x4236c00, indexNGBCSprites_GoddessAthena, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_A[] =
{
    { L"Kisarah A", 0x43f0800, 0x43f0820, indexNGBCSprites_Kisarah },
    { L"A - Super Trail", 0x43f0820, 0x43f0840, indexNGBCSprites_Kisarah, 0x00 },
    { L"A - Extra Move 1", 0x43f0840, 0x43f0860, indexNGBCSprites_Kisarah, 0x01 },
    { L"A - Extra Move 2", 0x43f0860, 0x43f0880, indexNGBCSprites_Kisarah, 0x02 },
    { L"A - Extra Move 3", 0x43f0880, 0x43f08a0, indexNGBCSprites_Kisarah, 0x03 },
    { L"A - Extra Move 4", 0x43f08a0, 0x43f08c0, indexNGBCSprites_Kisarah, 0x04 },
    { L"A - Extra Move 5", 0x43f08c0, 0x43f08e0, indexNGBCSprites_Kisarah, 0x05 },
    { L"A - Extra Move 6", 0x43f08e0, 0x43f0900, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_B[] =
{
    { L"Kisarah B", 0x43f0900, 0x43f0920, indexNGBCSprites_Kisarah },
    { L"B - Super Trail", 0x43f0920, 0x43f0940, indexNGBCSprites_Kisarah, 0x00 },
    { L"B - Extra Move 1", 0x43f0940, 0x43f0960, indexNGBCSprites_Kisarah, 0x01 },
    { L"B - Extra Move 2", 0x43f0960, 0x43f0980, indexNGBCSprites_Kisarah, 0x02 },
    { L"B - Extra Move 3", 0x43f0980, 0x43f09a0, indexNGBCSprites_Kisarah, 0x03 },
    { L"B - Extra Move 4", 0x43f09a0, 0x43f09c0, indexNGBCSprites_Kisarah, 0x04 },
    { L"B - Extra Move 5", 0x43f09c0, 0x43f09e0, indexNGBCSprites_Kisarah, 0x05 },
    { L"B - Extra Move 6", 0x43f09e0, 0x43f0a00, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_C[] =
{
    { L"Kisarah C", 0x43f0a00, 0x43f0a20, indexNGBCSprites_Kisarah },
    { L"C - Super Trail", 0x43f0a20, 0x43f0a40, indexNGBCSprites_Kisarah, 0x00 },
    { L"C - Extra Move 1", 0x43f0a40, 0x43f0a60, indexNGBCSprites_Kisarah, 0x01 },
    { L"C - Extra Move 2", 0x43f0a60, 0x43f0a80, indexNGBCSprites_Kisarah, 0x02 },
    { L"C - Extra Move 3", 0x43f0a80, 0x43f0aa0, indexNGBCSprites_Kisarah, 0x03 },
    { L"C - Extra Move 4", 0x43f0aa0, 0x43f0ac0, indexNGBCSprites_Kisarah, 0x04 },
    { L"C - Extra Move 5", 0x43f0ac0, 0x43f0ae0, indexNGBCSprites_Kisarah, 0x05 },
    { L"C - Extra Move 6", 0x43f0ae0, 0x43f0b00, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_D[] =
{
    { L"Kisarah D", 0x43f0b00, 0x43f0b20, indexNGBCSprites_Kisarah },
    { L"D - Super Trail", 0x43f0b20, 0x43f0b40, indexNGBCSprites_Kisarah, 0x00 },
    { L"D - Extra Move 1", 0x43f0b40, 0x43f0b60, indexNGBCSprites_Kisarah, 0x01 },
    { L"D - Extra Move 2", 0x43f0b60, 0x43f0b80, indexNGBCSprites_Kisarah, 0x02 },
    { L"D - Extra Move 3", 0x43f0b80, 0x43f0ba0, indexNGBCSprites_Kisarah, 0x03 },
    { L"D - Extra Move 4", 0x43f0ba0, 0x43f0bc0, indexNGBCSprites_Kisarah, 0x04 },
    { L"D - Extra Move 5", 0x43f0bc0, 0x43f0be0, indexNGBCSprites_Kisarah, 0x05 },
    { L"D - Extra Move 6", 0x43f0be0, 0x43f0c00, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_EA[] =
{
    { L"Kisarah EA", 0x43f0c00, 0x43f0c20, indexNGBCSprites_Kisarah },
    { L"E+A - Super Trail", 0x43f0c20, 0x43f0c40, indexNGBCSprites_Kisarah, 0x00 },
    { L"E+A - Extra Move 1", 0x43f0c40, 0x43f0c60, indexNGBCSprites_Kisarah, 0x01 },
    { L"E+A - Extra Move 2", 0x43f0c60, 0x43f0c80, indexNGBCSprites_Kisarah, 0x02 },
    { L"E+A - Extra Move 3", 0x43f0c80, 0x43f0ca0, indexNGBCSprites_Kisarah, 0x03 },
    { L"E+A - Extra Move 4", 0x43f0ca0, 0x43f0cc0, indexNGBCSprites_Kisarah, 0x04 },
    { L"E+A - Extra Move 5", 0x43f0cc0, 0x43f0ce0, indexNGBCSprites_Kisarah, 0x05 },
    { L"E+A - Extra Move 6", 0x43f0ce0, 0x43f0d00, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_EB[] =
{
    { L"Kisarah EB", 0x43f0d00, 0x43f0d20, indexNGBCSprites_Kisarah },
    { L"E+B - Super Trail", 0x43f0d20, 0x43f0d40, indexNGBCSprites_Kisarah, 0x00 },
    { L"E+B - Extra Move 1", 0x43f0d40, 0x43f0d60, indexNGBCSprites_Kisarah, 0x01 },
    { L"E+B - Extra Move 2", 0x43f0d60, 0x43f0d80, indexNGBCSprites_Kisarah, 0x02 },
    { L"E+B - Extra Move 3", 0x43f0d80, 0x43f0da0, indexNGBCSprites_Kisarah, 0x03 },
    { L"E+B - Extra Move 4", 0x43f0da0, 0x43f0dc0, indexNGBCSprites_Kisarah, 0x04 },
    { L"E+B - Extra Move 5", 0x43f0dc0, 0x43f0de0, indexNGBCSprites_Kisarah, 0x05 },
    { L"E+B - Extra Move 6", 0x43f0de0, 0x43f0e00, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_EC[] =
{
    { L"Kisarah EC", 0x43f0e00, 0x43f0e20, indexNGBCSprites_Kisarah },
    { L"E+C - Super Trail", 0x43f0e20, 0x43f0e40, indexNGBCSprites_Kisarah, 0x00 },
    { L"E+C - Extra Move 1", 0x43f0e40, 0x43f0e60, indexNGBCSprites_Kisarah, 0x01 },
    { L"E+C - Extra Move 2", 0x43f0e60, 0x43f0e80, indexNGBCSprites_Kisarah, 0x02 },
    { L"E+C - Extra Move 3", 0x43f0e80, 0x43f0ea0, indexNGBCSprites_Kisarah, 0x03 },
    { L"E+C - Extra Move 4", 0x43f0ea0, 0x43f0ec0, indexNGBCSprites_Kisarah, 0x04 },
    { L"E+C - Extra Move 5", 0x43f0ec0, 0x43f0ee0, indexNGBCSprites_Kisarah, 0x05 },
    { L"E+C - Extra Move 6", 0x43f0ee0, 0x43f0f00, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_ED[] =
{
    { L"Kisarah ED", 0x43f0f00, 0x43f0f20, indexNGBCSprites_Kisarah },
    { L"E+D - Super Trail", 0x43f0f20, 0x43f0f40, indexNGBCSprites_Kisarah, 0x00 },
    { L"E+D - Extra Move 1", 0x43f0f40, 0x43f0f60, indexNGBCSprites_Kisarah, 0x01 },
    { L"E+D - Extra Move 2", 0x43f0f60, 0x43f0f80, indexNGBCSprites_Kisarah, 0x02 },
    { L"E+D - Extra Move 3", 0x43f0f80, 0x43f0fa0, indexNGBCSprites_Kisarah, 0x03 },
    { L"E+D - Extra Move 4", 0x43f0fa0, 0x43f0fc0, indexNGBCSprites_Kisarah, 0x04 },
    { L"E+D - Extra Move 5", 0x43f0fc0, 0x43f0fe0, indexNGBCSprites_Kisarah, 0x05 },
    { L"E+D - Extra Move 6", 0x43f0fe0, 0x43f1000, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_SA[] =
{
    { L"Kisarah SA", 0x43f1000, 0x43f1020, indexNGBCSprites_Kisarah },
    { L"Start+A - Super Trail", 0x43f1020, 0x43f1040, indexNGBCSprites_Kisarah, 0x00 },
    { L"Start+A - Extra Move 1", 0x43f1040, 0x43f1060, indexNGBCSprites_Kisarah, 0x01 },
    { L"Start+A - Extra Move 2", 0x43f1060, 0x43f1080, indexNGBCSprites_Kisarah, 0x02 },
    { L"Start+A - Extra Move 3", 0x43f1080, 0x43f10a0, indexNGBCSprites_Kisarah, 0x03 },
    { L"Start+A - Extra Move 4", 0x43f10a0, 0x43f10c0, indexNGBCSprites_Kisarah, 0x04 },
    { L"Start+A - Extra Move 5", 0x43f10c0, 0x43f10e0, indexNGBCSprites_Kisarah, 0x05 },
    { L"Start+A - Extra Move 6", 0x43f10e0, 0x43f1100, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_SB[] =
{
    { L"Kisarah SB", 0x43f1100, 0x43f1120, indexNGBCSprites_Kisarah },
    { L"Start+B - Super Trail", 0x43f1120, 0x43f1140, indexNGBCSprites_Kisarah, 0x00 },
    { L"Start+B - Extra Move 1", 0x43f1140, 0x43f1160, indexNGBCSprites_Kisarah, 0x01 },
    { L"Start+B - Extra Move 2", 0x43f1160, 0x43f1180, indexNGBCSprites_Kisarah, 0x02 },
    { L"Start+B - Extra Move 3", 0x43f1180, 0x43f11a0, indexNGBCSprites_Kisarah, 0x03 },
    { L"Start+B - Extra Move 4", 0x43f11a0, 0x43f11c0, indexNGBCSprites_Kisarah, 0x04 },
    { L"Start+B - Extra Move 5", 0x43f11c0, 0x43f11e0, indexNGBCSprites_Kisarah, 0x05 },
    { L"Start+B - Extra Move 6", 0x43f11e0, 0x43f1200, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_SC[] =
{
    { L"Kisarah SC", 0x43f1200, 0x43f1220, indexNGBCSprites_Kisarah },
    { L"Start+C - Super Trail", 0x43f1220, 0x43f1240, indexNGBCSprites_Kisarah, 0x00 },
    { L"Start+C - Extra Move 1", 0x43f1240, 0x43f1260, indexNGBCSprites_Kisarah, 0x01 },
    { L"Start+C - Extra Move 2", 0x43f1260, 0x43f1280, indexNGBCSprites_Kisarah, 0x02 },
    { L"Start+C - Extra Move 3", 0x43f1280, 0x43f12a0, indexNGBCSprites_Kisarah, 0x03 },
    { L"Start+C - Extra Move 4", 0x43f12a0, 0x43f12c0, indexNGBCSprites_Kisarah, 0x04 },
    { L"Start+C - Extra Move 5", 0x43f12c0, 0x43f12e0, indexNGBCSprites_Kisarah, 0x05 },
    { L"Start+C - Extra Move 6", 0x43f12e0, 0x43f1300, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_KISARAH_PALETTES_SD[] =
{
    { L"Kisarah SD", 0x43f1300, 0x43f1320, indexNGBCSprites_Kisarah },
    { L"Start+D - Super Trail", 0x43f1320, 0x43f1340, indexNGBCSprites_Kisarah, 0x00 },
    { L"Start+D - Extra Move 1", 0x43f1340, 0x43f1360, indexNGBCSprites_Kisarah, 0x01 },
    { L"Start+D - Extra Move 2", 0x43f1360, 0x43f1380, indexNGBCSprites_Kisarah, 0x02 },
    { L"Start+D - Extra Move 3", 0x43f1380, 0x43f13a0, indexNGBCSprites_Kisarah, 0x03 },
    { L"Start+D - Extra Move 4", 0x43f13a0, 0x43f13c0, indexNGBCSprites_Kisarah, 0x04 },
    { L"Start+D - Extra Move 5", 0x43f13c0, 0x43f13e0, indexNGBCSprites_Kisarah, 0x05 },
    { L"Start+D - Extra Move 6", 0x43f13e0, 0x43f1400, indexNGBCSprites_Kisarah, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_A[] =
{
    { L"Chonrei A", 0x455a000, 0x455a020, indexNGBCSprites_Chonrei },
    { L"A - Super Trail", 0x455a020, 0x455a040, indexNGBCSprites_Chonrei, 0x00 },
    { L"A - Extra Move 1", 0x455a040, 0x455a060, indexNGBCSprites_Chonrei, 0x01 },
    { L"A - Extra Move 2", 0x455a060, 0x455a080, indexNGBCSprites_Chonrei, 0x02 },
    { L"A - Extra Move 3", 0x455a080, 0x455a0a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"A - Extra Move 4", 0x455a0a0, 0x455a0c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"A - Extra Move 5", 0x455a0c0, 0x455a0e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"A - Extra Move 6", 0x455a0e0, 0x455a100, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_B[] =
{
    { L"Chonrei B", 0x455a100, 0x455a120, indexNGBCSprites_Chonrei },
    { L"B - Super Trail", 0x455a120, 0x455a140, indexNGBCSprites_Chonrei, 0x00 },
    { L"B - Extra Move 1", 0x455a140, 0x455a160, indexNGBCSprites_Chonrei, 0x01 },
    { L"B - Extra Move 2", 0x455a160, 0x455a180, indexNGBCSprites_Chonrei, 0x02 },
    { L"B - Extra Move 3", 0x455a180, 0x455a1a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"B - Extra Move 4", 0x455a1a0, 0x455a1c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"B - Extra Move 5", 0x455a1c0, 0x455a1e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"B - Extra Move 6", 0x455a1e0, 0x455a200, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_C[] =
{
    { L"Chonrei C", 0x455a200, 0x455a220, indexNGBCSprites_Chonrei },
    { L"C - Super Trail", 0x455a220, 0x455a240, indexNGBCSprites_Chonrei, 0x00 },
    { L"C - Extra Move 1", 0x455a240, 0x455a260, indexNGBCSprites_Chonrei, 0x01 },
    { L"C - Extra Move 2", 0x455a260, 0x455a280, indexNGBCSprites_Chonrei, 0x02 },
    { L"C - Extra Move 3", 0x455a280, 0x455a2a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"C - Extra Move 4", 0x455a2a0, 0x455a2c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"C - Extra Move 5", 0x455a2c0, 0x455a2e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"C - Extra Move 6", 0x455a2e0, 0x455a300, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_D[] =
{
    { L"Chonrei D", 0x455a300, 0x455a320, indexNGBCSprites_Chonrei },
    { L"D - Super Trail", 0x455a320, 0x455a340, indexNGBCSprites_Chonrei, 0x00 },
    { L"D - Extra Move 1", 0x455a340, 0x455a360, indexNGBCSprites_Chonrei, 0x01 },
    { L"D - Extra Move 2", 0x455a360, 0x455a380, indexNGBCSprites_Chonrei, 0x02 },
    { L"D - Extra Move 3", 0x455a380, 0x455a3a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"D - Extra Move 4", 0x455a3a0, 0x455a3c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"D - Extra Move 5", 0x455a3c0, 0x455a3e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"D - Extra Move 6", 0x455a3e0, 0x455a400, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_EA[] =
{
    { L"Chonrei EA", 0x455a400, 0x455a420, indexNGBCSprites_Chonrei },
    { L"E+A - Super Trail", 0x455a420, 0x455a440, indexNGBCSprites_Chonrei, 0x00 },
    { L"E+A - Extra Move 1", 0x455a440, 0x455a460, indexNGBCSprites_Chonrei, 0x01 },
    { L"E+A - Extra Move 2", 0x455a460, 0x455a480, indexNGBCSprites_Chonrei, 0x02 },
    { L"E+A - Extra Move 3", 0x455a480, 0x455a4a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"E+A - Extra Move 4", 0x455a4a0, 0x455a4c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"E+A - Extra Move 5", 0x455a4c0, 0x455a4e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"E+A - Extra Move 6", 0x455a4e0, 0x455a500, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_EB[] =
{
    { L"Chonrei EB", 0x455a500, 0x455a520, indexNGBCSprites_Chonrei },
    { L"E+B - Super Trail", 0x455a520, 0x455a540, indexNGBCSprites_Chonrei, 0x00 },
    { L"E+B - Extra Move 1", 0x455a540, 0x455a560, indexNGBCSprites_Chonrei, 0x01 },
    { L"E+B - Extra Move 2", 0x455a560, 0x455a580, indexNGBCSprites_Chonrei, 0x02 },
    { L"E+B - Extra Move 3", 0x455a580, 0x455a5a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"E+B - Extra Move 4", 0x455a5a0, 0x455a5c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"E+B - Extra Move 5", 0x455a5c0, 0x455a5e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"E+B - Extra Move 6", 0x455a5e0, 0x455a600, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_EC[] =
{
    { L"Chonrei EC", 0x455a600, 0x455a620, indexNGBCSprites_Chonrei },
    { L"E+C - Super Trail", 0x455a620, 0x455a640, indexNGBCSprites_Chonrei, 0x00 },
    { L"E+C - Extra Move 1", 0x455a640, 0x455a660, indexNGBCSprites_Chonrei, 0x01 },
    { L"E+C - Extra Move 2", 0x455a660, 0x455a680, indexNGBCSprites_Chonrei, 0x02 },
    { L"E+C - Extra Move 3", 0x455a680, 0x455a6a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"E+C - Extra Move 4", 0x455a6a0, 0x455a6c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"E+C - Extra Move 5", 0x455a6c0, 0x455a6e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"E+C - Extra Move 6", 0x455a6e0, 0x455a700, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_ED[] =
{
    { L"Chonrei ED", 0x455a700, 0x455a720, indexNGBCSprites_Chonrei },
    { L"E+D - Super Trail", 0x455a720, 0x455a740, indexNGBCSprites_Chonrei, 0x00 },
    { L"E+D - Extra Move 1", 0x455a740, 0x455a760, indexNGBCSprites_Chonrei, 0x01 },
    { L"E+D - Extra Move 2", 0x455a760, 0x455a780, indexNGBCSprites_Chonrei, 0x02 },
    { L"E+D - Extra Move 3", 0x455a780, 0x455a7a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"E+D - Extra Move 4", 0x455a7a0, 0x455a7c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"E+D - Extra Move 5", 0x455a7c0, 0x455a7e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"E+D - Extra Move 6", 0x455a7e0, 0x455a800, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_SA[] =
{
    { L"Chonrei SA", 0x455a800, 0x455a820, indexNGBCSprites_Chonrei },
    { L"Start+A - Super Trail", 0x455a820, 0x455a840, indexNGBCSprites_Chonrei, 0x00 },
    { L"Start+A - Extra Move 1", 0x455a840, 0x455a860, indexNGBCSprites_Chonrei, 0x01 },
    { L"Start+A - Extra Move 2", 0x455a860, 0x455a880, indexNGBCSprites_Chonrei, 0x02 },
    { L"Start+A - Extra Move 3", 0x455a880, 0x455a8a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"Start+A - Extra Move 4", 0x455a8a0, 0x455a8c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"Start+A - Extra Move 5", 0x455a8c0, 0x455a8e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"Start+A - Extra Move 6", 0x455a8e0, 0x455a900, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_SB[] =
{
    { L"Chonrei SB", 0x455a900, 0x455a920, indexNGBCSprites_Chonrei },
    { L"Start+B - Super Trail", 0x455a920, 0x455a940, indexNGBCSprites_Chonrei, 0x00 },
    { L"Start+B - Extra Move 1", 0x455a940, 0x455a960, indexNGBCSprites_Chonrei, 0x01 },
    { L"Start+B - Extra Move 2", 0x455a960, 0x455a980, indexNGBCSprites_Chonrei, 0x02 },
    { L"Start+B - Extra Move 3", 0x455a980, 0x455a9a0, indexNGBCSprites_Chonrei, 0x03 },
    { L"Start+B - Extra Move 4", 0x455a9a0, 0x455a9c0, indexNGBCSprites_Chonrei, 0x04 },
    { L"Start+B - Extra Move 5", 0x455a9c0, 0x455a9e0, indexNGBCSprites_Chonrei, 0x05 },
    { L"Start+B - Extra Move 6", 0x455a9e0, 0x455aa00, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_SC[] =
{
    { L"Chonrei SC", 0x455aa00, 0x455aa20, indexNGBCSprites_Chonrei },
    { L"Start+C - Super Trail", 0x455aa20, 0x455aa40, indexNGBCSprites_Chonrei, 0x00 },
    { L"Start+C - Extra Move 1", 0x455aa40, 0x455aa60, indexNGBCSprites_Chonrei, 0x01 },
    { L"Start+C - Extra Move 2", 0x455aa60, 0x455aa80, indexNGBCSprites_Chonrei, 0x02 },
    { L"Start+C - Extra Move 3", 0x455aa80, 0x455aaa0, indexNGBCSprites_Chonrei, 0x03 },
    { L"Start+C - Extra Move 4", 0x455aaa0, 0x455aac0, indexNGBCSprites_Chonrei, 0x04 },
    { L"Start+C - Extra Move 5", 0x455aac0, 0x455aae0, indexNGBCSprites_Chonrei, 0x05 },
    { L"Start+C - Extra Move 6", 0x455aae0, 0x455ab00, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONREI_PALETTES_SD[] =
{
    { L"Chonrei SD", 0x455ab00, 0x455ab20, indexNGBCSprites_Chonrei },
    { L"Start+D - Super Trail", 0x455ab20, 0x455ab40, indexNGBCSprites_Chonrei, 0x00 },
    { L"Start+D - Extra Move 1", 0x455ab40, 0x455ab60, indexNGBCSprites_Chonrei, 0x01 },
    { L"Start+D - Extra Move 2", 0x455ab60, 0x455ab80, indexNGBCSprites_Chonrei, 0x02 },
    { L"Start+D - Extra Move 3", 0x455ab80, 0x455aba0, indexNGBCSprites_Chonrei, 0x03 },
    { L"Start+D - Extra Move 4", 0x455aba0, 0x455abc0, indexNGBCSprites_Chonrei, 0x04 },
    { L"Start+D - Extra Move 5", 0x455abc0, 0x455abe0, indexNGBCSprites_Chonrei, 0x05 },
    { L"Start+D - Extra Move 6", 0x455abe0, 0x455ac00, indexNGBCSprites_Chonrei, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_A[] =
{
    { L"Chonshu A", 0x46a4800, 0x46a4820, indexNGBCSprites_Chonshu },
    { L"A - Super Trail", 0x46a4820, 0x46a4840, indexNGBCSprites_Chonshu, 0x00 },
    { L"A - Extra Move 1", 0x46a4840, 0x46a4860, indexNGBCSprites_Chonshu, 0x01 },
    { L"A - Extra Move 2", 0x46a4860, 0x46a4880, indexNGBCSprites_Chonshu, 0x02 },
    { L"A - Extra Move 3", 0x46a4880, 0x46a48a0, indexNGBCSprites_Chonshu, 0x03 },
    { L"A - Extra Move 4", 0x46a48a0, 0x46a48c0, indexNGBCSprites_Chonshu, 0x04 },
    { L"A - Extra Move 5", 0x46a48c0, 0x46a48e0, indexNGBCSprites_Chonshu, 0x05 },
    { L"A - Extra Move 6", 0x46a48e0, 0x46a4900, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_B[] =
{
    { L"Chonshu B", 0x46a4900, 0x46a4920, indexNGBCSprites_Chonshu },
    { L"B - Super Trail", 0x46a4920, 0x46a4940, indexNGBCSprites_Chonshu, 0x00 },
    { L"B - Extra Move 1", 0x46a4940, 0x46a4960, indexNGBCSprites_Chonshu, 0x01 },
    { L"B - Extra Move 2", 0x46a4960, 0x46a4980, indexNGBCSprites_Chonshu, 0x02 },
    { L"B - Extra Move 3", 0x46a4980, 0x46a49a0, indexNGBCSprites_Chonshu, 0x03 },
    { L"B - Extra Move 4", 0x46a49a0, 0x46a49c0, indexNGBCSprites_Chonshu, 0x04 },
    { L"B - Extra Move 5", 0x46a49c0, 0x46a49e0, indexNGBCSprites_Chonshu, 0x05 },
    { L"B - Extra Move 6", 0x46a49e0, 0x46a4a00, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_C[] =
{
    { L"Chonshu C", 0x46a4a00, 0x46a4a20, indexNGBCSprites_Chonshu },
    { L"C - Super Trail", 0x46a4a20, 0x46a4a40, indexNGBCSprites_Chonshu, 0x00 },
    { L"C - Extra Move 1", 0x46a4a40, 0x46a4a60, indexNGBCSprites_Chonshu, 0x01 },
    { L"C - Extra Move 2", 0x46a4a60, 0x46a4a80, indexNGBCSprites_Chonshu, 0x02 },
    { L"C - Extra Move 3", 0x46a4a80, 0x46a4aa0, indexNGBCSprites_Chonshu, 0x03 },
    { L"C - Extra Move 4", 0x46a4aa0, 0x46a4ac0, indexNGBCSprites_Chonshu, 0x04 },
    { L"C - Extra Move 5", 0x46a4ac0, 0x46a4ae0, indexNGBCSprites_Chonshu, 0x05 },
    { L"C - Extra Move 6", 0x46a4ae0, 0x46a4b00, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_D[] =
{
    { L"Chonshu D", 0x46a4b00, 0x46a4b20, indexNGBCSprites_Chonshu },
    { L"D - Super Trail", 0x46a4b20, 0x46a4b40, indexNGBCSprites_Chonshu, 0x00 },
    { L"D - Extra Move 1", 0x46a4b40, 0x46a4b60, indexNGBCSprites_Chonshu, 0x01 },
    { L"D - Extra Move 2", 0x46a4b60, 0x46a4b80, indexNGBCSprites_Chonshu, 0x02 },
    { L"D - Extra Move 3", 0x46a4b80, 0x46a4ba0, indexNGBCSprites_Chonshu, 0x03 },
    { L"D - Extra Move 4", 0x46a4ba0, 0x46a4bc0, indexNGBCSprites_Chonshu, 0x04 },
    { L"D - Extra Move 5", 0x46a4bc0, 0x46a4be0, indexNGBCSprites_Chonshu, 0x05 },
    { L"D - Extra Move 6", 0x46a4be0, 0x46a4c00, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_EA[] =
{
    { L"Chonshu EA", 0x46a4c00, 0x46a4c20, indexNGBCSprites_Chonshu },
    { L"E+A - Super Trail", 0x46a4c20, 0x46a4c40, indexNGBCSprites_Chonshu, 0x00 },
    { L"E+A - Extra Move 1", 0x46a4c40, 0x46a4c60, indexNGBCSprites_Chonshu, 0x01 },
    { L"E+A - Extra Move 2", 0x46a4c60, 0x46a4c80, indexNGBCSprites_Chonshu, 0x02 },
    { L"E+A - Extra Move 3", 0x46a4c80, 0x46a4ca0, indexNGBCSprites_Chonshu, 0x03 },
    { L"E+A - Extra Move 4", 0x46a4ca0, 0x46a4cc0, indexNGBCSprites_Chonshu, 0x04 },
    { L"E+A - Extra Move 5", 0x46a4cc0, 0x46a4ce0, indexNGBCSprites_Chonshu, 0x05 },
    { L"E+A - Extra Move 6", 0x46a4ce0, 0x46a4d00, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_EB[] =
{
    { L"Chonshu EB", 0x46a4d00, 0x46a4d20, indexNGBCSprites_Chonshu },
    { L"E+B - Super Trail", 0x46a4d20, 0x46a4d40, indexNGBCSprites_Chonshu, 0x00 },
    { L"E+B - Extra Move 1", 0x46a4d40, 0x46a4d60, indexNGBCSprites_Chonshu, 0x01 },
    { L"E+B - Extra Move 2", 0x46a4d60, 0x46a4d80, indexNGBCSprites_Chonshu, 0x02 },
    { L"E+B - Extra Move 3", 0x46a4d80, 0x46a4da0, indexNGBCSprites_Chonshu, 0x03 },
    { L"E+B - Extra Move 4", 0x46a4da0, 0x46a4dc0, indexNGBCSprites_Chonshu, 0x04 },
    { L"E+B - Extra Move 5", 0x46a4dc0, 0x46a4de0, indexNGBCSprites_Chonshu, 0x05 },
    { L"E+B - Extra Move 6", 0x46a4de0, 0x46a4e00, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_EC[] =
{
    { L"Chonshu EC", 0x46a4e00, 0x46a4e20, indexNGBCSprites_Chonshu },
    { L"E+C - Super Trail", 0x46a4e20, 0x46a4e40, indexNGBCSprites_Chonshu, 0x00 },
    { L"E+C - Extra Move 1", 0x46a4e40, 0x46a4e60, indexNGBCSprites_Chonshu, 0x01 },
    { L"E+C - Extra Move 2", 0x46a4e60, 0x46a4e80, indexNGBCSprites_Chonshu, 0x02 },
    { L"E+C - Extra Move 3", 0x46a4e80, 0x46a4ea0, indexNGBCSprites_Chonshu, 0x03 },
    { L"E+C - Extra Move 4", 0x46a4ea0, 0x46a4ec0, indexNGBCSprites_Chonshu, 0x04 },
    { L"E+C - Extra Move 5", 0x46a4ec0, 0x46a4ee0, indexNGBCSprites_Chonshu, 0x05 },
    { L"E+C - Extra Move 6", 0x46a4ee0, 0x46a4f00, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_ED[] =
{
    { L"Chonshu ED", 0x46a4f00, 0x46a4f20, indexNGBCSprites_Chonshu },
    { L"E+D - Super Trail", 0x46a4f20, 0x46a4f40, indexNGBCSprites_Chonshu, 0x00 },
    { L"E+D - Extra Move 1", 0x46a4f40, 0x46a4f60, indexNGBCSprites_Chonshu, 0x01 },
    { L"E+D - Extra Move 2", 0x46a4f60, 0x46a4f80, indexNGBCSprites_Chonshu, 0x02 },
    { L"E+D - Extra Move 3", 0x46a4f80, 0x46a4fa0, indexNGBCSprites_Chonshu, 0x03 },
    { L"E+D - Extra Move 4", 0x46a4fa0, 0x46a4fc0, indexNGBCSprites_Chonshu, 0x04 },
    { L"E+D - Extra Move 5", 0x46a4fc0, 0x46a4fe0, indexNGBCSprites_Chonshu, 0x05 },
    { L"E+D - Extra Move 6", 0x46a4fe0, 0x46a5000, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_SA[] =
{
    { L"Chonshu SA", 0x46a5000, 0x46a5020, indexNGBCSprites_Chonshu },
    { L"Start+A - Super Trail", 0x46a5020, 0x46a5040, indexNGBCSprites_Chonshu, 0x00 },
    { L"Start+A - Extra Move 1", 0x46a5040, 0x46a5060, indexNGBCSprites_Chonshu, 0x01 },
    { L"Start+A - Extra Move 2", 0x46a5060, 0x46a5080, indexNGBCSprites_Chonshu, 0x02 },
    { L"Start+A - Extra Move 3", 0x46a5080, 0x46a50a0, indexNGBCSprites_Chonshu, 0x03 },
    { L"Start+A - Extra Move 4", 0x46a50a0, 0x46a50c0, indexNGBCSprites_Chonshu, 0x04 },
    { L"Start+A - Extra Move 5", 0x46a50c0, 0x46a50e0, indexNGBCSprites_Chonshu, 0x05 },
    { L"Start+A - Extra Move 6", 0x46a50e0, 0x46a5100, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_SB[] =
{
    { L"Chonshu SB", 0x46a5100, 0x46a5120, indexNGBCSprites_Chonshu },
    { L"Start+B - Super Trail", 0x46a5120, 0x46a5140, indexNGBCSprites_Chonshu, 0x00 },
    { L"Start+B - Extra Move 1", 0x46a5140, 0x46a5160, indexNGBCSprites_Chonshu, 0x01 },
    { L"Start+B - Extra Move 2", 0x46a5160, 0x46a5180, indexNGBCSprites_Chonshu, 0x02 },
    { L"Start+B - Extra Move 3", 0x46a5180, 0x46a51a0, indexNGBCSprites_Chonshu, 0x03 },
    { L"Start+B - Extra Move 4", 0x46a51a0, 0x46a51c0, indexNGBCSprites_Chonshu, 0x04 },
    { L"Start+B - Extra Move 5", 0x46a51c0, 0x46a51e0, indexNGBCSprites_Chonshu, 0x05 },
    { L"Start+B - Extra Move 6", 0x46a51e0, 0x46a5200, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_SC[] =
{
    { L"Chonshu SC", 0x46a5200, 0x46a5220, indexNGBCSprites_Chonshu },
    { L"Start+C - Super Trail", 0x46a5220, 0x46a5240, indexNGBCSprites_Chonshu, 0x00 },
    { L"Start+C - Extra Move 1", 0x46a5240, 0x46a5260, indexNGBCSprites_Chonshu, 0x01 },
    { L"Start+C - Extra Move 2", 0x46a5260, 0x46a5280, indexNGBCSprites_Chonshu, 0x02 },
    { L"Start+C - Extra Move 3", 0x46a5280, 0x46a52a0, indexNGBCSprites_Chonshu, 0x03 },
    { L"Start+C - Extra Move 4", 0x46a52a0, 0x46a52c0, indexNGBCSprites_Chonshu, 0x04 },
    { L"Start+C - Extra Move 5", 0x46a52c0, 0x46a52e0, indexNGBCSprites_Chonshu, 0x05 },
    { L"Start+C - Extra Move 6", 0x46a52e0, 0x46a5300, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_CHONSHU_PALETTES_SD[] =
{
    { L"Chonshu SD", 0x46a5300, 0x46a5320, indexNGBCSprites_Chonshu },
    { L"Start+D - Super Trail", 0x46a5320, 0x46a5340, indexNGBCSprites_Chonshu, 0x00 },
    { L"Start+D - Extra Move 1", 0x46a5340, 0x46a5360, indexNGBCSprites_Chonshu, 0x01 },
    { L"Start+D - Extra Move 2", 0x46a5360, 0x46a5380, indexNGBCSprites_Chonshu, 0x02 },
    { L"Start+D - Extra Move 3", 0x46a5380, 0x46a53a0, indexNGBCSprites_Chonshu, 0x03 },
    { L"Start+D - Extra Move 4", 0x46a53a0, 0x46a53c0, indexNGBCSprites_Chonshu, 0x04 },
    { L"Start+D - Extra Move 5", 0x46a53c0, 0x46a53e0, indexNGBCSprites_Chonshu, 0x05 },
    { L"Start+D - Extra Move 6", 0x46a53e0, 0x46a5400, indexNGBCSprites_Chonshu, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_A[] =
{
    { L"Neo Dio A", 0x47f1000, 0x47f1020, indexNGBCSprites_NeoDio },
    { L"A - Super Trail", 0x47f1020, 0x47f1040, indexNGBCSprites_NeoDio, 0x00 },
    { L"A - Extra Move 1", 0x47f1040, 0x47f1060, indexNGBCSprites_NeoDio, 0x01 },
    { L"A - Extra Move 2", 0x47f1060, 0x47f1080, indexNGBCSprites_NeoDio, 0x02 },
    { L"A - Extra Move 3", 0x47f1080, 0x47f10a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"A - Extra Move 4", 0x47f10a0, 0x47f10c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"A - Extra Move 5", 0x47f10c0, 0x47f10e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"A - Extra Move 6", 0x47f10e0, 0x47f1100, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_B[] =
{
    { L"Neo Dio B", 0x47f1100, 0x47f1120, indexNGBCSprites_NeoDio },
    { L"B - Super Trail", 0x47f1120, 0x47f1140, indexNGBCSprites_NeoDio, 0x00 },
    { L"B - Extra Move 1", 0x47f1140, 0x47f1160, indexNGBCSprites_NeoDio, 0x01 },
    { L"B - Extra Move 2", 0x47f1160, 0x47f1180, indexNGBCSprites_NeoDio, 0x02 },
    { L"B - Extra Move 3", 0x47f1180, 0x47f11a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"B - Extra Move 4", 0x47f11a0, 0x47f11c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"B - Extra Move 5", 0x47f11c0, 0x47f11e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"B - Extra Move 6", 0x47f11e0, 0x47f1200, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_C[] =
{
    { L"Neo Dio C", 0x47f1200, 0x47f1220, indexNGBCSprites_NeoDio },
    { L"C - Super Trail", 0x47f1220, 0x47f1240, indexNGBCSprites_NeoDio, 0x00 },
    { L"C - Extra Move 1", 0x47f1240, 0x47f1260, indexNGBCSprites_NeoDio, 0x01 },
    { L"C - Extra Move 2", 0x47f1260, 0x47f1280, indexNGBCSprites_NeoDio, 0x02 },
    { L"C - Extra Move 3", 0x47f1280, 0x47f12a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"C - Extra Move 4", 0x47f12a0, 0x47f12c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"C - Extra Move 5", 0x47f12c0, 0x47f12e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"C - Extra Move 6", 0x47f12e0, 0x47f1300, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_D[] =
{
    { L"Neo Dio D", 0x47f1300, 0x47f1320, indexNGBCSprites_NeoDio },
    { L"D - Super Trail", 0x47f1320, 0x47f1340, indexNGBCSprites_NeoDio, 0x00 },
    { L"D - Extra Move 1", 0x47f1340, 0x47f1360, indexNGBCSprites_NeoDio, 0x01 },
    { L"D - Extra Move 2", 0x47f1360, 0x47f1380, indexNGBCSprites_NeoDio, 0x02 },
    { L"D - Extra Move 3", 0x47f1380, 0x47f13a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"D - Extra Move 4", 0x47f13a0, 0x47f13c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"D - Extra Move 5", 0x47f13c0, 0x47f13e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"D - Extra Move 6", 0x47f13e0, 0x47f1400, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_EA[] =
{
    { L"Neo Dio EA", 0x47f1400, 0x47f1420, indexNGBCSprites_NeoDio },
    { L"E+A - Super Trail", 0x47f1420, 0x47f1440, indexNGBCSprites_NeoDio, 0x00 },
    { L"E+A - Extra Move 1", 0x47f1440, 0x47f1460, indexNGBCSprites_NeoDio, 0x01 },
    { L"E+A - Extra Move 2", 0x47f1460, 0x47f1480, indexNGBCSprites_NeoDio, 0x02 },
    { L"E+A - Extra Move 3", 0x47f1480, 0x47f14a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"E+A - Extra Move 4", 0x47f14a0, 0x47f14c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"E+A - Extra Move 5", 0x47f14c0, 0x47f14e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"E+A - Extra Move 6", 0x47f14e0, 0x47f1500, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_EB[] =
{
    { L"Neo Dio EB", 0x47f1500, 0x47f1520, indexNGBCSprites_NeoDio },
    { L"E+B - Super Trail", 0x47f1520, 0x47f1540, indexNGBCSprites_NeoDio, 0x00 },
    { L"E+B - Extra Move 1", 0x47f1540, 0x47f1560, indexNGBCSprites_NeoDio, 0x01 },
    { L"E+B - Extra Move 2", 0x47f1560, 0x47f1580, indexNGBCSprites_NeoDio, 0x02 },
    { L"E+B - Extra Move 3", 0x47f1580, 0x47f15a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"E+B - Extra Move 4", 0x47f15a0, 0x47f15c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"E+B - Extra Move 5", 0x47f15c0, 0x47f15e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"E+B - Extra Move 6", 0x47f15e0, 0x47f1600, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_EC[] =
{
    { L"Neo Dio EC", 0x47f1600, 0x47f1620, indexNGBCSprites_NeoDio },
    { L"E+C - Super Trail", 0x47f1620, 0x47f1640, indexNGBCSprites_NeoDio, 0x00 },
    { L"E+C - Extra Move 1", 0x47f1640, 0x47f1660, indexNGBCSprites_NeoDio, 0x01 },
    { L"E+C - Extra Move 2", 0x47f1660, 0x47f1680, indexNGBCSprites_NeoDio, 0x02 },
    { L"E+C - Extra Move 3", 0x47f1680, 0x47f16a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"E+C - Extra Move 4", 0x47f16a0, 0x47f16c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"E+C - Extra Move 5", 0x47f16c0, 0x47f16e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"E+C - Extra Move 6", 0x47f16e0, 0x47f1700, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_ED[] =
{
    { L"Neo Dio ED", 0x47f1700, 0x47f1720, indexNGBCSprites_NeoDio },
    { L"E+D - Super Trail", 0x47f1720, 0x47f1740, indexNGBCSprites_NeoDio, 0x00 },
    { L"E+D - Extra Move 1", 0x47f1740, 0x47f1760, indexNGBCSprites_NeoDio, 0x01 },
    { L"E+D - Extra Move 2", 0x47f1760, 0x47f1780, indexNGBCSprites_NeoDio, 0x02 },
    { L"E+D - Extra Move 3", 0x47f1780, 0x47f17a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"E+D - Extra Move 4", 0x47f17a0, 0x47f17c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"E+D - Extra Move 5", 0x47f17c0, 0x47f17e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"E+D - Extra Move 6", 0x47f17e0, 0x47f1800, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_SA[] =
{
    { L"Neo Dio SA", 0x47f1800, 0x47f1820, indexNGBCSprites_NeoDio },
    { L"Start+A - Super Trail", 0x47f1820, 0x47f1840, indexNGBCSprites_NeoDio, 0x00 },
    { L"Start+A - Extra Move 1", 0x47f1840, 0x47f1860, indexNGBCSprites_NeoDio, 0x01 },
    { L"Start+A - Extra Move 2", 0x47f1860, 0x47f1880, indexNGBCSprites_NeoDio, 0x02 },
    { L"Start+A - Extra Move 3", 0x47f1880, 0x47f18a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"Start+A - Extra Move 4", 0x47f18a0, 0x47f18c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"Start+A - Extra Move 5", 0x47f18c0, 0x47f18e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"Start+A - Extra Move 6", 0x47f18e0, 0x47f1900, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_SB[] =
{
    { L"Neo Dio SB", 0x47f1900, 0x47f1920, indexNGBCSprites_NeoDio },
    { L"Start+B - Super Trail", 0x47f1920, 0x47f1940, indexNGBCSprites_NeoDio, 0x00 },
    { L"Start+B - Extra Move 1", 0x47f1940, 0x47f1960, indexNGBCSprites_NeoDio, 0x01 },
    { L"Start+B - Extra Move 2", 0x47f1960, 0x47f1980, indexNGBCSprites_NeoDio, 0x02 },
    { L"Start+B - Extra Move 3", 0x47f1980, 0x47f19a0, indexNGBCSprites_NeoDio, 0x03 },
    { L"Start+B - Extra Move 4", 0x47f19a0, 0x47f19c0, indexNGBCSprites_NeoDio, 0x04 },
    { L"Start+B - Extra Move 5", 0x47f19c0, 0x47f19e0, indexNGBCSprites_NeoDio, 0x05 },
    { L"Start+B - Extra Move 6", 0x47f19e0, 0x47f1a00, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_SC[] =
{
    { L"Neo Dio SC", 0x47f1a00, 0x47f1a20, indexNGBCSprites_NeoDio },
    { L"Start+C - Super Trail", 0x47f1a20, 0x47f1a40, indexNGBCSprites_NeoDio, 0x00 },
    { L"Start+C - Extra Move 1", 0x47f1a40, 0x47f1a60, indexNGBCSprites_NeoDio, 0x01 },
    { L"Start+C - Extra Move 2", 0x47f1a60, 0x47f1a80, indexNGBCSprites_NeoDio, 0x02 },
    { L"Start+C - Extra Move 3", 0x47f1a80, 0x47f1aa0, indexNGBCSprites_NeoDio, 0x03 },
    { L"Start+C - Extra Move 4", 0x47f1aa0, 0x47f1ac0, indexNGBCSprites_NeoDio, 0x04 },
    { L"Start+C - Extra Move 5", 0x47f1ac0, 0x47f1ae0, indexNGBCSprites_NeoDio, 0x05 },
    { L"Start+C - Extra Move 6", 0x47f1ae0, 0x47f1b00, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_NEODIO_PALETTES_SD[] =
{
    { L"Neo Dio SD", 0x47f1b00, 0x47f1b20, indexNGBCSprites_NeoDio },
    { L"Start+D - Super Trail", 0x47f1b20, 0x47f1b40, indexNGBCSprites_NeoDio, 0x00 },
    { L"Start+D - Extra Move 1", 0x47f1b40, 0x47f1b60, indexNGBCSprites_NeoDio, 0x01 },
    { L"Start+D - Extra Move 2", 0x47f1b60, 0x47f1b80, indexNGBCSprites_NeoDio, 0x02 },
    { L"Start+D - Extra Move 3", 0x47f1b80, 0x47f1ba0, indexNGBCSprites_NeoDio, 0x03 },
    { L"Start+D - Extra Move 4", 0x47f1ba0, 0x47f1bc0, indexNGBCSprites_NeoDio, 0x04 },
    { L"Start+D - Extra Move 5", 0x47f1bc0, 0x47f1be0, indexNGBCSprites_NeoDio, 0x05 },
    { L"Start+D - Extra Move 6", 0x47f1be0, 0x47f1c00, indexNGBCSprites_NeoDio, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_A[] =
{
    { L"Asura A", 0x49a4800, 0x49a4820, indexNGBCSprites_Asura },
    { L"A - Super Trail", 0x49a4820, 0x49a4840, indexNGBCSprites_Asura, 0x00 },
    { L"A - Extra Move 1", 0x49a4840, 0x49a4860, indexNGBCSprites_Asura, 0x01 },
    { L"A - Extra Move 2", 0x49a4860, 0x49a4880, indexNGBCSprites_Asura, 0x02 },
    { L"A - Extra Move 3", 0x49a4880, 0x49a48a0, indexNGBCSprites_Asura, 0x03 },
    { L"A - Extra Move 4", 0x49a48a0, 0x49a48c0, indexNGBCSprites_Asura, 0x04 },
    { L"A - Extra Move 5", 0x49a48c0, 0x49a48e0, indexNGBCSprites_Asura, 0x05 },
    { L"A - Extra Move 6", 0x49a48e0, 0x49a4900, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_B[] =
{
    { L"Asura B", 0x49a4900, 0x49a4920, indexNGBCSprites_Asura },
    { L"B - Super Trail", 0x49a4920, 0x49a4940, indexNGBCSprites_Asura, 0x00 },
    { L"B - Extra Move 1", 0x49a4940, 0x49a4960, indexNGBCSprites_Asura, 0x01 },
    { L"B - Extra Move 2", 0x49a4960, 0x49a4980, indexNGBCSprites_Asura, 0x02 },
    { L"B - Extra Move 3", 0x49a4980, 0x49a49a0, indexNGBCSprites_Asura, 0x03 },
    { L"B - Extra Move 4", 0x49a49a0, 0x49a49c0, indexNGBCSprites_Asura, 0x04 },
    { L"B - Extra Move 5", 0x49a49c0, 0x49a49e0, indexNGBCSprites_Asura, 0x05 },
    { L"B - Extra Move 6", 0x49a49e0, 0x49a4a00, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_C[] =
{
    { L"Asura C", 0x49a4a00, 0x49a4a20, indexNGBCSprites_Asura },
    { L"C - Super Trail", 0x49a4a20, 0x49a4a40, indexNGBCSprites_Asura, 0x00 },
    { L"C - Extra Move 1", 0x49a4a40, 0x49a4a60, indexNGBCSprites_Asura, 0x01 },
    { L"C - Extra Move 2", 0x49a4a60, 0x49a4a80, indexNGBCSprites_Asura, 0x02 },
    { L"C - Extra Move 3", 0x49a4a80, 0x49a4aa0, indexNGBCSprites_Asura, 0x03 },
    { L"C - Extra Move 4", 0x49a4aa0, 0x49a4ac0, indexNGBCSprites_Asura, 0x04 },
    { L"C - Extra Move 5", 0x49a4ac0, 0x49a4ae0, indexNGBCSprites_Asura, 0x05 },
    { L"C - Extra Move 6", 0x49a4ae0, 0x49a4b00, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_D[] =
{
    { L"Asura D", 0x49a4b00, 0x49a4b20, indexNGBCSprites_Asura },
    { L"D - Super Trail", 0x49a4b20, 0x49a4b40, indexNGBCSprites_Asura, 0x00 },
    { L"D - Extra Move 1", 0x49a4b40, 0x49a4b60, indexNGBCSprites_Asura, 0x01 },
    { L"D - Extra Move 2", 0x49a4b60, 0x49a4b80, indexNGBCSprites_Asura, 0x02 },
    { L"D - Extra Move 3", 0x49a4b80, 0x49a4ba0, indexNGBCSprites_Asura, 0x03 },
    { L"D - Extra Move 4", 0x49a4ba0, 0x49a4bc0, indexNGBCSprites_Asura, 0x04 },
    { L"D - Extra Move 5", 0x49a4bc0, 0x49a4be0, indexNGBCSprites_Asura, 0x05 },
    { L"D - Extra Move 6", 0x49a4be0, 0x49a4c00, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_EA[] =
{
    { L"Asura EA", 0x49a4c00, 0x49a4c20, indexNGBCSprites_Asura },
    { L"E+A - Super Trail", 0x49a4c20, 0x49a4c40, indexNGBCSprites_Asura, 0x00 },
    { L"E+A - Extra Move 1", 0x49a4c40, 0x49a4c60, indexNGBCSprites_Asura, 0x01 },
    { L"E+A - Extra Move 2", 0x49a4c60, 0x49a4c80, indexNGBCSprites_Asura, 0x02 },
    { L"E+A - Extra Move 3", 0x49a4c80, 0x49a4ca0, indexNGBCSprites_Asura, 0x03 },
    { L"E+A - Extra Move 4", 0x49a4ca0, 0x49a4cc0, indexNGBCSprites_Asura, 0x04 },
    { L"E+A - Extra Move 5", 0x49a4cc0, 0x49a4ce0, indexNGBCSprites_Asura, 0x05 },
    { L"E+A - Extra Move 6", 0x49a4ce0, 0x49a4d00, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_EB[] =
{
    { L"Asura EB", 0x49a4d00, 0x49a4d20, indexNGBCSprites_Asura },
    { L"E+B - Super Trail", 0x49a4d20, 0x49a4d40, indexNGBCSprites_Asura, 0x00 },
    { L"E+B - Extra Move 1", 0x49a4d40, 0x49a4d60, indexNGBCSprites_Asura, 0x01 },
    { L"E+B - Extra Move 2", 0x49a4d60, 0x49a4d80, indexNGBCSprites_Asura, 0x02 },
    { L"E+B - Extra Move 3", 0x49a4d80, 0x49a4da0, indexNGBCSprites_Asura, 0x03 },
    { L"E+B - Extra Move 4", 0x49a4da0, 0x49a4dc0, indexNGBCSprites_Asura, 0x04 },
    { L"E+B - Extra Move 5", 0x49a4dc0, 0x49a4de0, indexNGBCSprites_Asura, 0x05 },
    { L"E+B - Extra Move 6", 0x49a4de0, 0x49a4e00, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_EC[] =
{
    { L"Asura EC", 0x49a4e00, 0x49a4e20, indexNGBCSprites_Asura },
    { L"E+C - Super Trail", 0x49a4e20, 0x49a4e40, indexNGBCSprites_Asura, 0x00 },
    { L"E+C - Extra Move 1", 0x49a4e40, 0x49a4e60, indexNGBCSprites_Asura, 0x01 },
    { L"E+C - Extra Move 2", 0x49a4e60, 0x49a4e80, indexNGBCSprites_Asura, 0x02 },
    { L"E+C - Extra Move 3", 0x49a4e80, 0x49a4ea0, indexNGBCSprites_Asura, 0x03 },
    { L"E+C - Extra Move 4", 0x49a4ea0, 0x49a4ec0, indexNGBCSprites_Asura, 0x04 },
    { L"E+C - Extra Move 5", 0x49a4ec0, 0x49a4ee0, indexNGBCSprites_Asura, 0x05 },
    { L"E+C - Extra Move 6", 0x49a4ee0, 0x49a4f00, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_ED[] =
{
    { L"Asura ED", 0x49a4f00, 0x49a4f20, indexNGBCSprites_Asura },
    { L"E+D - Super Trail", 0x49a4f20, 0x49a4f40, indexNGBCSprites_Asura, 0x00 },
    { L"E+D - Extra Move 1", 0x49a4f40, 0x49a4f60, indexNGBCSprites_Asura, 0x01 },
    { L"E+D - Extra Move 2", 0x49a4f60, 0x49a4f80, indexNGBCSprites_Asura, 0x02 },
    { L"E+D - Extra Move 3", 0x49a4f80, 0x49a4fa0, indexNGBCSprites_Asura, 0x03 },
    { L"E+D - Extra Move 4", 0x49a4fa0, 0x49a4fc0, indexNGBCSprites_Asura, 0x04 },
    { L"E+D - Extra Move 5", 0x49a4fc0, 0x49a4fe0, indexNGBCSprites_Asura, 0x05 },
    { L"E+D - Extra Move 6", 0x49a4fe0, 0x49a5000, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_SA[] =
{
    { L"Asura SA", 0x49a5000, 0x49a5020, indexNGBCSprites_Asura },
    { L"Start+A - Super Trail", 0x49a5020, 0x49a5040, indexNGBCSprites_Asura, 0x00 },
    { L"Start+A - Extra Move 1", 0x49a5040, 0x49a5060, indexNGBCSprites_Asura, 0x01 },
    { L"Start+A - Extra Move 2", 0x49a5060, 0x49a5080, indexNGBCSprites_Asura, 0x02 },
    { L"Start+A - Extra Move 3", 0x49a5080, 0x49a50a0, indexNGBCSprites_Asura, 0x03 },
    { L"Start+A - Extra Move 4", 0x49a50a0, 0x49a50c0, indexNGBCSprites_Asura, 0x04 },
    { L"Start+A - Extra Move 5", 0x49a50c0, 0x49a50e0, indexNGBCSprites_Asura, 0x05 },
    { L"Start+A - Extra Move 6", 0x49a50e0, 0x49a5100, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_SB[] =
{
    { L"Asura SB", 0x49a5100, 0x49a5120, indexNGBCSprites_Asura },
    { L"Start+B - Super Trail", 0x49a5120, 0x49a5140, indexNGBCSprites_Asura, 0x00 },
    { L"Start+B - Extra Move 1", 0x49a5140, 0x49a5160, indexNGBCSprites_Asura, 0x01 },
    { L"Start+B - Extra Move 2", 0x49a5160, 0x49a5180, indexNGBCSprites_Asura, 0x02 },
    { L"Start+B - Extra Move 3", 0x49a5180, 0x49a51a0, indexNGBCSprites_Asura, 0x03 },
    { L"Start+B - Extra Move 4", 0x49a51a0, 0x49a51c0, indexNGBCSprites_Asura, 0x04 },
    { L"Start+B - Extra Move 5", 0x49a51c0, 0x49a51e0, indexNGBCSprites_Asura, 0x05 },
    { L"Start+B - Extra Move 6", 0x49a51e0, 0x49a5200, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_SC[] =
{
    { L"Asura SC", 0x49a5200, 0x49a5220, indexNGBCSprites_Asura },
    { L"Start+C - Super Trail", 0x49a5220, 0x49a5240, indexNGBCSprites_Asura, 0x00 },
    { L"Start+C - Extra Move 1", 0x49a5240, 0x49a5260, indexNGBCSprites_Asura, 0x01 },
    { L"Start+C - Extra Move 2", 0x49a5260, 0x49a5280, indexNGBCSprites_Asura, 0x02 },
    { L"Start+C - Extra Move 3", 0x49a5280, 0x49a52a0, indexNGBCSprites_Asura, 0x03 },
    { L"Start+C - Extra Move 4", 0x49a52a0, 0x49a52c0, indexNGBCSprites_Asura, 0x04 },
    { L"Start+C - Extra Move 5", 0x49a52c0, 0x49a52e0, indexNGBCSprites_Asura, 0x05 },
    { L"Start+C - Extra Move 6", 0x49a52e0, 0x49a5300, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ASURA_PALETTES_SD[] =
{
    { L"Asura SD", 0x49a5300, 0x49a5320, indexNGBCSprites_Asura },
    { L"Start+D - Super Trail", 0x49a5320, 0x49a5340, indexNGBCSprites_Asura, 0x00 },
    { L"Start+D - Extra Move 1", 0x49a5340, 0x49a5360, indexNGBCSprites_Asura, 0x01 },
    { L"Start+D - Extra Move 2", 0x49a5360, 0x49a5380, indexNGBCSprites_Asura, 0x02 },
    { L"Start+D - Extra Move 3", 0x49a5380, 0x49a53a0, indexNGBCSprites_Asura, 0x03 },
    { L"Start+D - Extra Move 4", 0x49a53a0, 0x49a53c0, indexNGBCSprites_Asura, 0x04 },
    { L"Start+D - Extra Move 5", 0x49a53c0, 0x49a53e0, indexNGBCSprites_Asura, 0x05 },
    { L"Start+D - Extra Move 6", 0x49a53e0, 0x49a5400, indexNGBCSprites_Asura, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_A[] =
{
    { L"Mizuchi A", 0x4b77800, 0x4b77820, indexNGBCSprites_Mizuchi },
    { L"A - Super Trail", 0x4b77820, 0x4b77840, indexNGBCSprites_Mizuchi, 0x00 },
    { L"A - Extra Move 1", 0x4b77840, 0x4b77860, indexNGBCSprites_Mizuchi, 0x01 },
    { L"A - Extra Move 2", 0x4b77860, 0x4b77880, indexNGBCSprites_Mizuchi, 0x02 },
    { L"A - Extra Move 3", 0x4b77880, 0x4b778a0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"A - Extra Move 4", 0x4b778a0, 0x4b778c0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"A - Extra Move 5", 0x4b778c0, 0x4b778e0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"A - Extra Move 6", 0x4b778e0, 0x4b77900, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_B[] =
{
    { L"Mizuchi B", 0x4b77900, 0x4b77920, indexNGBCSprites_Mizuchi },
    { L"B - Super Trail", 0x4b77920, 0x4b77940, indexNGBCSprites_Mizuchi, 0x00 },
    { L"B - Extra Move 1", 0x4b77940, 0x4b77960, indexNGBCSprites_Mizuchi, 0x01 },
    { L"B - Extra Move 2", 0x4b77960, 0x4b77980, indexNGBCSprites_Mizuchi, 0x02 },
    { L"B - Extra Move 3", 0x4b77980, 0x4b779a0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"B - Extra Move 4", 0x4b779a0, 0x4b779c0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"B - Extra Move 5", 0x4b779c0, 0x4b779e0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"B - Extra Move 6", 0x4b779e0, 0x4b77a00, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_C[] =
{
    { L"Mizuchi C", 0x4b77a00, 0x4b77a20, indexNGBCSprites_Mizuchi },
    { L"C - Super Trail", 0x4b77a20, 0x4b77a40, indexNGBCSprites_Mizuchi, 0x00 },
    { L"C - Extra Move 1", 0x4b77a40, 0x4b77a60, indexNGBCSprites_Mizuchi, 0x01 },
    { L"C - Extra Move 2", 0x4b77a60, 0x4b77a80, indexNGBCSprites_Mizuchi, 0x02 },
    { L"C - Extra Move 3", 0x4b77a80, 0x4b77aa0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"C - Extra Move 4", 0x4b77aa0, 0x4b77ac0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"C - Extra Move 5", 0x4b77ac0, 0x4b77ae0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"C - Extra Move 6", 0x4b77ae0, 0x4b77b00, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_D[] =
{
    { L"Mizuchi D", 0x4b77b00, 0x4b77b20, indexNGBCSprites_Mizuchi },
    { L"D - Super Trail", 0x4b77b20, 0x4b77b40, indexNGBCSprites_Mizuchi, 0x00 },
    { L"D - Extra Move 1", 0x4b77b40, 0x4b77b60, indexNGBCSprites_Mizuchi, 0x01 },
    { L"D - Extra Move 2", 0x4b77b60, 0x4b77b80, indexNGBCSprites_Mizuchi, 0x02 },
    { L"D - Extra Move 3", 0x4b77b80, 0x4b77ba0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"D - Extra Move 4", 0x4b77ba0, 0x4b77bc0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"D - Extra Move 5", 0x4b77bc0, 0x4b77be0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"D - Extra Move 6", 0x4b77be0, 0x4b77c00, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_EA[] =
{
    { L"Mizuchi EA", 0x4b77c00, 0x4b77c20, indexNGBCSprites_Mizuchi },
    { L"E+A - Super Trail", 0x4b77c20, 0x4b77c40, indexNGBCSprites_Mizuchi, 0x00 },
    { L"E+A - Extra Move 1", 0x4b77c40, 0x4b77c60, indexNGBCSprites_Mizuchi, 0x01 },
    { L"E+A - Extra Move 2", 0x4b77c60, 0x4b77c80, indexNGBCSprites_Mizuchi, 0x02 },
    { L"E+A - Extra Move 3", 0x4b77c80, 0x4b77ca0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"E+A - Extra Move 4", 0x4b77ca0, 0x4b77cc0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"E+A - Extra Move 5", 0x4b77cc0, 0x4b77ce0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"E+A - Extra Move 6", 0x4b77ce0, 0x4b77d00, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_EB[] =
{
    { L"Mizuchi EB", 0x4b77d00, 0x4b77d20, indexNGBCSprites_Mizuchi },
    { L"E+B - Super Trail", 0x4b77d20, 0x4b77d40, indexNGBCSprites_Mizuchi, 0x00 },
    { L"E+B - Extra Move 1", 0x4b77d40, 0x4b77d60, indexNGBCSprites_Mizuchi, 0x01 },
    { L"E+B - Extra Move 2", 0x4b77d60, 0x4b77d80, indexNGBCSprites_Mizuchi, 0x02 },
    { L"E+B - Extra Move 3", 0x4b77d80, 0x4b77da0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"E+B - Extra Move 4", 0x4b77da0, 0x4b77dc0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"E+B - Extra Move 5", 0x4b77dc0, 0x4b77de0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"E+B - Extra Move 6", 0x4b77de0, 0x4b77e00, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_EC[] =
{
    { L"Mizuchi EC", 0x4b77e00, 0x4b77e20, indexNGBCSprites_Mizuchi },
    { L"E+C - Super Trail", 0x4b77e20, 0x4b77e40, indexNGBCSprites_Mizuchi, 0x00 },
    { L"E+C - Extra Move 1", 0x4b77e40, 0x4b77e60, indexNGBCSprites_Mizuchi, 0x01 },
    { L"E+C - Extra Move 2", 0x4b77e60, 0x4b77e80, indexNGBCSprites_Mizuchi, 0x02 },
    { L"E+C - Extra Move 3", 0x4b77e80, 0x4b77ea0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"E+C - Extra Move 4", 0x4b77ea0, 0x4b77ec0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"E+C - Extra Move 5", 0x4b77ec0, 0x4b77ee0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"E+C - Extra Move 6", 0x4b77ee0, 0x4b77f00, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_ED[] =
{
    { L"Mizuchi ED", 0x4b77f00, 0x4b77f20, indexNGBCSprites_Mizuchi },
    { L"E+D - Super Trail", 0x4b77f20, 0x4b77f40, indexNGBCSprites_Mizuchi, 0x00 },
    { L"E+D - Extra Move 1", 0x4b77f40, 0x4b77f60, indexNGBCSprites_Mizuchi, 0x01 },
    { L"E+D - Extra Move 2", 0x4b77f60, 0x4b77f80, indexNGBCSprites_Mizuchi, 0x02 },
    { L"E+D - Extra Move 3", 0x4b77f80, 0x4b77fa0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"E+D - Extra Move 4", 0x4b77fa0, 0x4b77fc0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"E+D - Extra Move 5", 0x4b77fc0, 0x4b77fe0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"E+D - Extra Move 6", 0x4b77fe0, 0x4b78000, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_SA[] =
{
    { L"Mizuchi SA", 0x4b78000, 0x4b78020, indexNGBCSprites_Mizuchi },
    { L"Start+A - Super Trail", 0x4b78020, 0x4b78040, indexNGBCSprites_Mizuchi, 0x00 },
    { L"Start+A - Extra Move 1", 0x4b78040, 0x4b78060, indexNGBCSprites_Mizuchi, 0x01 },
    { L"Start+A - Extra Move 2", 0x4b78060, 0x4b78080, indexNGBCSprites_Mizuchi, 0x02 },
    { L"Start+A - Extra Move 3", 0x4b78080, 0x4b780a0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"Start+A - Extra Move 4", 0x4b780a0, 0x4b780c0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"Start+A - Extra Move 5", 0x4b780c0, 0x4b780e0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"Start+A - Extra Move 6", 0x4b780e0, 0x4b78100, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_SB[] =
{
    { L"Mizuchi SB", 0x4b78100, 0x4b78120, indexNGBCSprites_Mizuchi },
    { L"Start+B - Super Trail", 0x4b78120, 0x4b78140, indexNGBCSprites_Mizuchi, 0x00 },
    { L"Start+B - Extra Move 1", 0x4b78140, 0x4b78160, indexNGBCSprites_Mizuchi, 0x01 },
    { L"Start+B - Extra Move 2", 0x4b78160, 0x4b78180, indexNGBCSprites_Mizuchi, 0x02 },
    { L"Start+B - Extra Move 3", 0x4b78180, 0x4b781a0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"Start+B - Extra Move 4", 0x4b781a0, 0x4b781c0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"Start+B - Extra Move 5", 0x4b781c0, 0x4b781e0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"Start+B - Extra Move 6", 0x4b781e0, 0x4b78200, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_SC[] =
{
    { L"Mizuchi SC", 0x4b78200, 0x4b78220, indexNGBCSprites_Mizuchi },
    { L"Start+C - Super Trail", 0x4b78220, 0x4b78240, indexNGBCSprites_Mizuchi, 0x00 },
    { L"Start+C - Extra Move 1", 0x4b78240, 0x4b78260, indexNGBCSprites_Mizuchi, 0x01 },
    { L"Start+C - Extra Move 2", 0x4b78260, 0x4b78280, indexNGBCSprites_Mizuchi, 0x02 },
    { L"Start+C - Extra Move 3", 0x4b78280, 0x4b782a0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"Start+C - Extra Move 4", 0x4b782a0, 0x4b782c0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"Start+C - Extra Move 5", 0x4b782c0, 0x4b782e0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"Start+C - Extra Move 6", 0x4b782e0, 0x4b78300, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_MIZUCHI_PALETTES_SD[] =
{
    { L"Mizuchi SD", 0x4b78300, 0x4b78320, indexNGBCSprites_Mizuchi },
    { L"Start+D - Super Trail", 0x4b78320, 0x4b78340, indexNGBCSprites_Mizuchi, 0x00 },
    { L"Start+D - Extra Move 1", 0x4b78340, 0x4b78360, indexNGBCSprites_Mizuchi, 0x01 },
    { L"Start+D - Extra Move 2", 0x4b78360, 0x4b78380, indexNGBCSprites_Mizuchi, 0x02 },
    { L"Start+D - Extra Move 3", 0x4b78380, 0x4b783a0, indexNGBCSprites_Mizuchi, 0x03 },
    { L"Start+D - Extra Move 4", 0x4b783a0, 0x4b783c0, indexNGBCSprites_Mizuchi, 0x04 },
    { L"Start+D - Extra Move 5", 0x4b783c0, 0x4b783e0, indexNGBCSprites_Mizuchi, 0x05 },
    { L"Start+D - Extra Move 6", 0x4b783e0, 0x4b78400, indexNGBCSprites_Mizuchi, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_A[] =
{
    { L"Robert A", 0x4d01800, 0x4d01820, indexNGBCSprites_Robert },
    { L"A - Super Trail", 0x4d01820, 0x4d01840, indexNGBCSprites_Robert, 0x00 },
    { L"A - Extra Move 1", 0x4d01840, 0x4d01860, indexNGBCSprites_Robert, 0x01 },
    { L"A - Extra Move 2", 0x4d01860, 0x4d01880, indexNGBCSprites_Robert, 0x02 },
    { L"A - Extra Move 3", 0x4d01880, 0x4d018a0, indexNGBCSprites_Robert, 0x03 },
    { L"A - Extra Move 4", 0x4d018a0, 0x4d018c0, indexNGBCSprites_Robert, 0x04 },
    { L"A - Extra Move 5", 0x4d018c0, 0x4d018e0, indexNGBCSprites_Robert, 0x05 },
    { L"A - Extra Move 6", 0x4d018e0, 0x4d01900, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_B[] =
{
    { L"Robert B", 0x4d01900, 0x4d01920, indexNGBCSprites_Robert },
    { L"B - Super Trail", 0x4d01920, 0x4d01940, indexNGBCSprites_Robert, 0x00 },
    { L"B - Extra Move 1", 0x4d01940, 0x4d01960, indexNGBCSprites_Robert, 0x01 },
    { L"B - Extra Move 2", 0x4d01960, 0x4d01980, indexNGBCSprites_Robert, 0x02 },
    { L"B - Extra Move 3", 0x4d01980, 0x4d019a0, indexNGBCSprites_Robert, 0x03 },
    { L"B - Extra Move 4", 0x4d019a0, 0x4d019c0, indexNGBCSprites_Robert, 0x04 },
    { L"B - Extra Move 5", 0x4d019c0, 0x4d019e0, indexNGBCSprites_Robert, 0x05 },
    { L"B - Extra Move 6", 0x4d019e0, 0x4d01a00, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_C[] =
{
    { L"Robert C", 0x4d01a00, 0x4d01a20, indexNGBCSprites_Robert },
    { L"C - Super Trail", 0x4d01a20, 0x4d01a40, indexNGBCSprites_Robert, 0x00 },
    { L"C - Extra Move 1", 0x4d01a40, 0x4d01a60, indexNGBCSprites_Robert, 0x01 },
    { L"C - Extra Move 2", 0x4d01a60, 0x4d01a80, indexNGBCSprites_Robert, 0x02 },
    { L"C - Extra Move 3", 0x4d01a80, 0x4d01aa0, indexNGBCSprites_Robert, 0x03 },
    { L"C - Extra Move 4", 0x4d01aa0, 0x4d01ac0, indexNGBCSprites_Robert, 0x04 },
    { L"C - Extra Move 5", 0x4d01ac0, 0x4d01ae0, indexNGBCSprites_Robert, 0x05 },
    { L"C - Extra Move 6", 0x4d01ae0, 0x4d01b00, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_D[] =
{
    { L"Robert D", 0x4d01b00, 0x4d01b20, indexNGBCSprites_Robert },
    { L"D - Super Trail", 0x4d01b20, 0x4d01b40, indexNGBCSprites_Robert, 0x00 },
    { L"D - Extra Move 1", 0x4d01b40, 0x4d01b60, indexNGBCSprites_Robert, 0x01 },
    { L"D - Extra Move 2", 0x4d01b60, 0x4d01b80, indexNGBCSprites_Robert, 0x02 },
    { L"D - Extra Move 3", 0x4d01b80, 0x4d01ba0, indexNGBCSprites_Robert, 0x03 },
    { L"D - Extra Move 4", 0x4d01ba0, 0x4d01bc0, indexNGBCSprites_Robert, 0x04 },
    { L"D - Extra Move 5", 0x4d01bc0, 0x4d01be0, indexNGBCSprites_Robert, 0x05 },
    { L"D - Extra Move 6", 0x4d01be0, 0x4d01c00, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_EA[] =
{
    { L"Robert EA", 0x4d01c00, 0x4d01c20, indexNGBCSprites_Robert },
    { L"E+A - Super Trail", 0x4d01c20, 0x4d01c40, indexNGBCSprites_Robert, 0x00 },
    { L"E+A - Extra Move 1", 0x4d01c40, 0x4d01c60, indexNGBCSprites_Robert, 0x01 },
    { L"E+A - Extra Move 2", 0x4d01c60, 0x4d01c80, indexNGBCSprites_Robert, 0x02 },
    { L"E+A - Extra Move 3", 0x4d01c80, 0x4d01ca0, indexNGBCSprites_Robert, 0x03 },
    { L"E+A - Extra Move 4", 0x4d01ca0, 0x4d01cc0, indexNGBCSprites_Robert, 0x04 },
    { L"E+A - Extra Move 5", 0x4d01cc0, 0x4d01ce0, indexNGBCSprites_Robert, 0x05 },
    { L"E+A - Extra Move 6", 0x4d01ce0, 0x4d01d00, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_EB[] =
{
    { L"Robert EB", 0x4d01d00, 0x4d01d20, indexNGBCSprites_Robert },
    { L"E+B - Super Trail", 0x4d01d20, 0x4d01d40, indexNGBCSprites_Robert, 0x00 },
    { L"E+B - Extra Move 1", 0x4d01d40, 0x4d01d60, indexNGBCSprites_Robert, 0x01 },
    { L"E+B - Extra Move 2", 0x4d01d60, 0x4d01d80, indexNGBCSprites_Robert, 0x02 },
    { L"E+B - Extra Move 3", 0x4d01d80, 0x4d01da0, indexNGBCSprites_Robert, 0x03 },
    { L"E+B - Extra Move 4", 0x4d01da0, 0x4d01dc0, indexNGBCSprites_Robert, 0x04 },
    { L"E+B - Extra Move 5", 0x4d01dc0, 0x4d01de0, indexNGBCSprites_Robert, 0x05 },
    { L"E+B - Extra Move 6", 0x4d01de0, 0x4d01e00, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_EC[] =
{
    { L"Robert EC", 0x4d01e00, 0x4d01e20, indexNGBCSprites_Robert },
    { L"E+C - Super Trail", 0x4d01e20, 0x4d01e40, indexNGBCSprites_Robert, 0x00 },
    { L"E+C - Extra Move 1", 0x4d01e40, 0x4d01e60, indexNGBCSprites_Robert, 0x01 },
    { L"E+C - Extra Move 2", 0x4d01e60, 0x4d01e80, indexNGBCSprites_Robert, 0x02 },
    { L"E+C - Extra Move 3", 0x4d01e80, 0x4d01ea0, indexNGBCSprites_Robert, 0x03 },
    { L"E+C - Extra Move 4", 0x4d01ea0, 0x4d01ec0, indexNGBCSprites_Robert, 0x04 },
    { L"E+C - Extra Move 5", 0x4d01ec0, 0x4d01ee0, indexNGBCSprites_Robert, 0x05 },
    { L"E+C - Extra Move 6", 0x4d01ee0, 0x4d01f00, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_ED[] =
{
    { L"Robert ED", 0x4d01f00, 0x4d01f20, indexNGBCSprites_Robert },
    { L"E+D - Super Trail", 0x4d01f20, 0x4d01f40, indexNGBCSprites_Robert, 0x00 },
    { L"E+D - Extra Move 1", 0x4d01f40, 0x4d01f60, indexNGBCSprites_Robert, 0x01 },
    { L"E+D - Extra Move 2", 0x4d01f60, 0x4d01f80, indexNGBCSprites_Robert, 0x02 },
    { L"E+D - Extra Move 3", 0x4d01f80, 0x4d01fa0, indexNGBCSprites_Robert, 0x03 },
    { L"E+D - Extra Move 4", 0x4d01fa0, 0x4d01fc0, indexNGBCSprites_Robert, 0x04 },
    { L"E+D - Extra Move 5", 0x4d01fc0, 0x4d01fe0, indexNGBCSprites_Robert, 0x05 },
    { L"E+D - Extra Move 6", 0x4d01fe0, 0x4d02000, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_SA[] =
{
    { L"Robert SA", 0x4d02000, 0x4d02020, indexNGBCSprites_Robert },
    { L"Start+A - Super Trail", 0x4d02020, 0x4d02040, indexNGBCSprites_Robert, 0x00 },
    { L"Start+A - Extra Move 1", 0x4d02040, 0x4d02060, indexNGBCSprites_Robert, 0x01 },
    { L"Start+A - Extra Move 2", 0x4d02060, 0x4d02080, indexNGBCSprites_Robert, 0x02 },
    { L"Start+A - Extra Move 3", 0x4d02080, 0x4d020a0, indexNGBCSprites_Robert, 0x03 },
    { L"Start+A - Extra Move 4", 0x4d020a0, 0x4d020c0, indexNGBCSprites_Robert, 0x04 },
    { L"Start+A - Extra Move 5", 0x4d020c0, 0x4d020e0, indexNGBCSprites_Robert, 0x05 },
    { L"Start+A - Extra Move 6", 0x4d020e0, 0x4d02100, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_SB[] =
{
    { L"Robert SB", 0x4d02100, 0x4d02120, indexNGBCSprites_Robert },
    { L"Start+B - Super Trail", 0x4d02120, 0x4d02140, indexNGBCSprites_Robert, 0x00 },
    { L"Start+B - Extra Move 1", 0x4d02140, 0x4d02160, indexNGBCSprites_Robert, 0x01 },
    { L"Start+B - Extra Move 2", 0x4d02160, 0x4d02180, indexNGBCSprites_Robert, 0x02 },
    { L"Start+B - Extra Move 3", 0x4d02180, 0x4d021a0, indexNGBCSprites_Robert, 0x03 },
    { L"Start+B - Extra Move 4", 0x4d021a0, 0x4d021c0, indexNGBCSprites_Robert, 0x04 },
    { L"Start+B - Extra Move 5", 0x4d021c0, 0x4d021e0, indexNGBCSprites_Robert, 0x05 },
    { L"Start+B - Extra Move 6", 0x4d021e0, 0x4d02200, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_SC[] =
{
    { L"Robert SC", 0x4d02200, 0x4d02220, indexNGBCSprites_Robert },
    { L"Start+C - Super Trail", 0x4d02220, 0x4d02240, indexNGBCSprites_Robert, 0x00 },
    { L"Start+C - Extra Move 1", 0x4d02240, 0x4d02260, indexNGBCSprites_Robert, 0x01 },
    { L"Start+C - Extra Move 2", 0x4d02260, 0x4d02280, indexNGBCSprites_Robert, 0x02 },
    { L"Start+C - Extra Move 3", 0x4d02280, 0x4d022a0, indexNGBCSprites_Robert, 0x03 },
    { L"Start+C - Extra Move 4", 0x4d022a0, 0x4d022c0, indexNGBCSprites_Robert, 0x04 },
    { L"Start+C - Extra Move 5", 0x4d022c0, 0x4d022e0, indexNGBCSprites_Robert, 0x05 },
    { L"Start+C - Extra Move 6", 0x4d022e0, 0x4d02300, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_ROBERT_PALETTES_SD[] =
{
    { L"Robert SD", 0x4d02300, 0x4d02320, indexNGBCSprites_Robert },
    { L"Start+D - Super Trail", 0x4d02320, 0x4d02340, indexNGBCSprites_Robert, 0x00 },
    { L"Start+D - Extra Move 1", 0x4d02340, 0x4d02360, indexNGBCSprites_Robert, 0x01 },
    { L"Start+D - Extra Move 2", 0x4d02360, 0x4d02380, indexNGBCSprites_Robert, 0x02 },
    { L"Start+D - Extra Move 3", 0x4d02380, 0x4d023a0, indexNGBCSprites_Robert, 0x03 },
    { L"Start+D - Extra Move 4", 0x4d023a0, 0x4d023c0, indexNGBCSprites_Robert, 0x04 },
    { L"Start+D - Extra Move 5", 0x4d023c0, 0x4d023e0, indexNGBCSprites_Robert, 0x05 },
    { L"Start+D - Extra Move 6", 0x4d023e0, 0x4d02400, indexNGBCSprites_Robert, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_A[] =
{
    { L"Lee Pai Long A", 0x4e77000, 0x4e77020, indexNGBCSprites_LeePaiLong },
    { L"A - Super Trail", 0x4e77020, 0x4e77040, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"A - Extra Move 1", 0x4e77040, 0x4e77060, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"A - Extra Move 2", 0x4e77060, 0x4e77080, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"A - Extra Move 3", 0x4e77080, 0x4e770a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"A - Extra Move 4", 0x4e770a0, 0x4e770c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"A - Extra Move 5", 0x4e770c0, 0x4e770e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"A - Extra Move 6", 0x4e770e0, 0x4e77100, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_B[] =
{
    { L"Lee Pai Long B", 0x4e77100, 0x4e77120, indexNGBCSprites_LeePaiLong },
    { L"B - Super Trail", 0x4e77120, 0x4e77140, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"B - Extra Move 1", 0x4e77140, 0x4e77160, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"B - Extra Move 2", 0x4e77160, 0x4e77180, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"B - Extra Move 3", 0x4e77180, 0x4e771a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"B - Extra Move 4", 0x4e771a0, 0x4e771c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"B - Extra Move 5", 0x4e771c0, 0x4e771e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"B - Extra Move 6", 0x4e771e0, 0x4e77200, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_C[] =
{
    { L"Lee Pai Long C", 0x4e77200, 0x4e77220, indexNGBCSprites_LeePaiLong },
    { L"C - Super Trail", 0x4e77220, 0x4e77240, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"C - Extra Move 1", 0x4e77240, 0x4e77260, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"C - Extra Move 2", 0x4e77260, 0x4e77280, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"C - Extra Move 3", 0x4e77280, 0x4e772a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"C - Extra Move 4", 0x4e772a0, 0x4e772c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"C - Extra Move 5", 0x4e772c0, 0x4e772e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"C - Extra Move 6", 0x4e772e0, 0x4e77300, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_D[] =
{
    { L"Lee Pai Long D", 0x4e77300, 0x4e77320, indexNGBCSprites_LeePaiLong },
    { L"D - Super Trail", 0x4e77320, 0x4e77340, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"D - Extra Move 1", 0x4e77340, 0x4e77360, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"D - Extra Move 2", 0x4e77360, 0x4e77380, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"D - Extra Move 3", 0x4e77380, 0x4e773a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"D - Extra Move 4", 0x4e773a0, 0x4e773c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"D - Extra Move 5", 0x4e773c0, 0x4e773e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"D - Extra Move 6", 0x4e773e0, 0x4e77400, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_EA[] =
{
    { L"Lee Pai Long EA", 0x4e77400, 0x4e77420, indexNGBCSprites_LeePaiLong },
    { L"E+A - Super Trail", 0x4e77420, 0x4e77440, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"E+A - Extra Move 1", 0x4e77440, 0x4e77460, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"E+A - Extra Move 2", 0x4e77460, 0x4e77480, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"E+A - Extra Move 3", 0x4e77480, 0x4e774a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"E+A - Extra Move 4", 0x4e774a0, 0x4e774c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"E+A - Extra Move 5", 0x4e774c0, 0x4e774e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"E+A - Extra Move 6", 0x4e774e0, 0x4e77500, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_EB[] =
{
    { L"Lee Pai Long EB", 0x4e77500, 0x4e77520, indexNGBCSprites_LeePaiLong },
    { L"E+B - Super Trail", 0x4e77520, 0x4e77540, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"E+B - Extra Move 1", 0x4e77540, 0x4e77560, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"E+B - Extra Move 2", 0x4e77560, 0x4e77580, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"E+B - Extra Move 3", 0x4e77580, 0x4e775a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"E+B - Extra Move 4", 0x4e775a0, 0x4e775c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"E+B - Extra Move 5", 0x4e775c0, 0x4e775e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"E+B - Extra Move 6", 0x4e775e0, 0x4e77600, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_EC[] =
{
    { L"Lee Pai Long EC", 0x4e77600, 0x4e77620, indexNGBCSprites_LeePaiLong },
    { L"E+C - Super Trail", 0x4e77620, 0x4e77640, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"E+C - Extra Move 1", 0x4e77640, 0x4e77660, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"E+C - Extra Move 2", 0x4e77660, 0x4e77680, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"E+C - Extra Move 3", 0x4e77680, 0x4e776a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"E+C - Extra Move 4", 0x4e776a0, 0x4e776c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"E+C - Extra Move 5", 0x4e776c0, 0x4e776e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"E+C - Extra Move 6", 0x4e776e0, 0x4e77700, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_ED[] =
{
    { L"Lee Pai Long ED", 0x4e77700, 0x4e77720, indexNGBCSprites_LeePaiLong },
    { L"E+D - Super Trail", 0x4e77720, 0x4e77740, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"E+D - Extra Move 1", 0x4e77740, 0x4e77760, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"E+D - Extra Move 2", 0x4e77760, 0x4e77780, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"E+D - Extra Move 3", 0x4e77780, 0x4e777a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"E+D - Extra Move 4", 0x4e777a0, 0x4e777c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"E+D - Extra Move 5", 0x4e777c0, 0x4e777e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"E+D - Extra Move 6", 0x4e777e0, 0x4e77800, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_SA[] =
{
    { L"Lee Pai Long SA", 0x4e77800, 0x4e77820, indexNGBCSprites_LeePaiLong },
    { L"Start+A - Super Trail", 0x4e77820, 0x4e77840, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"Start+A - Extra Move 1", 0x4e77840, 0x4e77860, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"Start+A - Extra Move 2", 0x4e77860, 0x4e77880, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"Start+A - Extra Move 3", 0x4e77880, 0x4e778a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"Start+A - Extra Move 4", 0x4e778a0, 0x4e778c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"Start+A - Extra Move 5", 0x4e778c0, 0x4e778e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"Start+A - Extra Move 6", 0x4e778e0, 0x4e77900, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_SB[] =
{
    { L"Lee Pai Long SB", 0x4e77900, 0x4e77920, indexNGBCSprites_LeePaiLong },
    { L"Start+B - Super Trail", 0x4e77920, 0x4e77940, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"Start+B - Extra Move 1", 0x4e77940, 0x4e77960, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"Start+B - Extra Move 2", 0x4e77960, 0x4e77980, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"Start+B - Extra Move 3", 0x4e77980, 0x4e779a0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"Start+B - Extra Move 4", 0x4e779a0, 0x4e779c0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"Start+B - Extra Move 5", 0x4e779c0, 0x4e779e0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"Start+B - Extra Move 6", 0x4e779e0, 0x4e77a00, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_SC[] =
{
    { L"Lee Pai Long SC", 0x4e77a00, 0x4e77a20, indexNGBCSprites_LeePaiLong },
    { L"Start+C - Super Trail", 0x4e77a20, 0x4e77a40, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"Start+C - Extra Move 1", 0x4e77a40, 0x4e77a60, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"Start+C - Extra Move 2", 0x4e77a60, 0x4e77a80, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"Start+C - Extra Move 3", 0x4e77a80, 0x4e77aa0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"Start+C - Extra Move 4", 0x4e77aa0, 0x4e77ac0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"Start+C - Extra Move 5", 0x4e77ac0, 0x4e77ae0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"Start+C - Extra Move 6", 0x4e77ae0, 0x4e77b00, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_LEEPAILONG_PALETTES_SD[] =
{
    { L"Lee Pai Long SD", 0x4e77b00, 0x4e77b20, indexNGBCSprites_LeePaiLong },
    { L"Start+D - Super Trail", 0x4e77b20, 0x4e77b40, indexNGBCSprites_LeePaiLong, 0x00 },
    { L"Start+D - Extra Move 1", 0x4e77b40, 0x4e77b60, indexNGBCSprites_LeePaiLong, 0x01 },
    { L"Start+D - Extra Move 2", 0x4e77b60, 0x4e77b80, indexNGBCSprites_LeePaiLong, 0x02 },
    { L"Start+D - Extra Move 3", 0x4e77b80, 0x4e77ba0, indexNGBCSprites_LeePaiLong, 0x03 },
    { L"Start+D - Extra Move 4", 0x4e77ba0, 0x4e77bc0, indexNGBCSprites_LeePaiLong, 0x04 },
    { L"Start+D - Extra Move 5", 0x4e77bc0, 0x4e77be0, indexNGBCSprites_LeePaiLong, 0x05 },
    { L"Start+D - Extra Move 6", 0x4e77be0, 0x4e77c00, indexNGBCSprites_LeePaiLong, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_A[] =
{
    { L"Goodman A", 0x4f7b800, 0x4f7b820, indexNGBCSprites_Goodman },
    { L"A - Super Trail", 0x4f7b820, 0x4f7b840, indexNGBCSprites_Goodman, 0x00 },
    { L"A - Extra Move 1", 0x4f7b840, 0x4f7b860, indexNGBCSprites_Goodman, 0x01 },
    { L"A - Extra Move 2", 0x4f7b860, 0x4f7b880, indexNGBCSprites_Goodman, 0x02 },
    { L"A - Extra Move 3", 0x4f7b880, 0x4f7b8a0, indexNGBCSprites_Goodman, 0x03 },
    { L"A - Extra Move 4", 0x4f7b8a0, 0x4f7b8c0, indexNGBCSprites_Goodman, 0x04 },
    { L"A - Extra Move 5", 0x4f7b8c0, 0x4f7b8e0, indexNGBCSprites_Goodman, 0x05 },
    { L"A - Extra Move 6", 0x4f7b8e0, 0x4f7b900, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_B[] =
{
    { L"Goodman B", 0x4f7b900, 0x4f7b920, indexNGBCSprites_Goodman },
    { L"B - Super Trail", 0x4f7b920, 0x4f7b940, indexNGBCSprites_Goodman, 0x00 },
    { L"B - Extra Move 1", 0x4f7b940, 0x4f7b960, indexNGBCSprites_Goodman, 0x01 },
    { L"B - Extra Move 2", 0x4f7b960, 0x4f7b980, indexNGBCSprites_Goodman, 0x02 },
    { L"B - Extra Move 3", 0x4f7b980, 0x4f7b9a0, indexNGBCSprites_Goodman, 0x03 },
    { L"B - Extra Move 4", 0x4f7b9a0, 0x4f7b9c0, indexNGBCSprites_Goodman, 0x04 },
    { L"B - Extra Move 5", 0x4f7b9c0, 0x4f7b9e0, indexNGBCSprites_Goodman, 0x05 },
    { L"B - Extra Move 6", 0x4f7b9e0, 0x4f7ba00, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_C[] =
{
    { L"Goodman C", 0x4f7ba00, 0x4f7ba20, indexNGBCSprites_Goodman },
    { L"C - Super Trail", 0x4f7ba20, 0x4f7ba40, indexNGBCSprites_Goodman, 0x00 },
    { L"C - Extra Move 1", 0x4f7ba40, 0x4f7ba60, indexNGBCSprites_Goodman, 0x01 },
    { L"C - Extra Move 2", 0x4f7ba60, 0x4f7ba80, indexNGBCSprites_Goodman, 0x02 },
    { L"C - Extra Move 3", 0x4f7ba80, 0x4f7baa0, indexNGBCSprites_Goodman, 0x03 },
    { L"C - Extra Move 4", 0x4f7baa0, 0x4f7bac0, indexNGBCSprites_Goodman, 0x04 },
    { L"C - Extra Move 5", 0x4f7bac0, 0x4f7bae0, indexNGBCSprites_Goodman, 0x05 },
    { L"C - Extra Move 6", 0x4f7bae0, 0x4f7bb00, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_D[] =
{
    { L"Goodman D", 0x4f7bb00, 0x4f7bb20, indexNGBCSprites_Goodman },
    { L"D - Super Trail", 0x4f7bb20, 0x4f7bb40, indexNGBCSprites_Goodman, 0x00 },
    { L"D - Extra Move 1", 0x4f7bb40, 0x4f7bb60, indexNGBCSprites_Goodman, 0x01 },
    { L"D - Extra Move 2", 0x4f7bb60, 0x4f7bb80, indexNGBCSprites_Goodman, 0x02 },
    { L"D - Extra Move 3", 0x4f7bb80, 0x4f7bba0, indexNGBCSprites_Goodman, 0x03 },
    { L"D - Extra Move 4", 0x4f7bba0, 0x4f7bbc0, indexNGBCSprites_Goodman, 0x04 },
    { L"D - Extra Move 5", 0x4f7bbc0, 0x4f7bbe0, indexNGBCSprites_Goodman, 0x05 },
    { L"D - Extra Move 6", 0x4f7bbe0, 0x4f7bc00, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_EA[] =
{
    { L"Goodman EA", 0x4f7bc00, 0x4f7bc20, indexNGBCSprites_Goodman },
    { L"E+A - Super Trail", 0x4f7bc20, 0x4f7bc40, indexNGBCSprites_Goodman, 0x00 },
    { L"E+A - Extra Move 1", 0x4f7bc40, 0x4f7bc60, indexNGBCSprites_Goodman, 0x01 },
    { L"E+A - Extra Move 2", 0x4f7bc60, 0x4f7bc80, indexNGBCSprites_Goodman, 0x02 },
    { L"E+A - Extra Move 3", 0x4f7bc80, 0x4f7bca0, indexNGBCSprites_Goodman, 0x03 },
    { L"E+A - Extra Move 4", 0x4f7bca0, 0x4f7bcc0, indexNGBCSprites_Goodman, 0x04 },
    { L"E+A - Extra Move 5", 0x4f7bcc0, 0x4f7bce0, indexNGBCSprites_Goodman, 0x05 },
    { L"E+A - Extra Move 6", 0x4f7bce0, 0x4f7bd00, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_EB[] =
{
    { L"Goodman EB", 0x4f7bd00, 0x4f7bd20, indexNGBCSprites_Goodman },
    { L"E+B - Super Trail", 0x4f7bd20, 0x4f7bd40, indexNGBCSprites_Goodman, 0x00 },
    { L"E+B - Extra Move 1", 0x4f7bd40, 0x4f7bd60, indexNGBCSprites_Goodman, 0x01 },
    { L"E+B - Extra Move 2", 0x4f7bd60, 0x4f7bd80, indexNGBCSprites_Goodman, 0x02 },
    { L"E+B - Extra Move 3", 0x4f7bd80, 0x4f7bda0, indexNGBCSprites_Goodman, 0x03 },
    { L"E+B - Extra Move 4", 0x4f7bda0, 0x4f7bdc0, indexNGBCSprites_Goodman, 0x04 },
    { L"E+B - Extra Move 5", 0x4f7bdc0, 0x4f7bde0, indexNGBCSprites_Goodman, 0x05 },
    { L"E+B - Extra Move 6", 0x4f7bde0, 0x4f7be00, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_EC[] =
{
    { L"Goodman EC", 0x4f7be00, 0x4f7be20, indexNGBCSprites_Goodman },
    { L"E+C - Super Trail", 0x4f7be20, 0x4f7be40, indexNGBCSprites_Goodman, 0x00 },
    { L"E+C - Extra Move 1", 0x4f7be40, 0x4f7be60, indexNGBCSprites_Goodman, 0x01 },
    { L"E+C - Extra Move 2", 0x4f7be60, 0x4f7be80, indexNGBCSprites_Goodman, 0x02 },
    { L"E+C - Extra Move 3", 0x4f7be80, 0x4f7bea0, indexNGBCSprites_Goodman, 0x03 },
    { L"E+C - Extra Move 4", 0x4f7bea0, 0x4f7bec0, indexNGBCSprites_Goodman, 0x04 },
    { L"E+C - Extra Move 5", 0x4f7bec0, 0x4f7bee0, indexNGBCSprites_Goodman, 0x05 },
    { L"E+C - Extra Move 6", 0x4f7bee0, 0x4f7bf00, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_ED[] =
{
    { L"Goodman ED", 0x4f7bf00, 0x4f7bf20, indexNGBCSprites_Goodman },
    { L"E+D - Super Trail", 0x4f7bf20, 0x4f7bf40, indexNGBCSprites_Goodman, 0x00 },
    { L"E+D - Extra Move 1", 0x4f7bf40, 0x4f7bf60, indexNGBCSprites_Goodman, 0x01 },
    { L"E+D - Extra Move 2", 0x4f7bf60, 0x4f7bf80, indexNGBCSprites_Goodman, 0x02 },
    { L"E+D - Extra Move 3", 0x4f7bf80, 0x4f7bfa0, indexNGBCSprites_Goodman, 0x03 },
    { L"E+D - Extra Move 4", 0x4f7bfa0, 0x4f7bfc0, indexNGBCSprites_Goodman, 0x04 },
    { L"E+D - Extra Move 5", 0x4f7bfc0, 0x4f7bfe0, indexNGBCSprites_Goodman, 0x05 },
    { L"E+D - Extra Move 6", 0x4f7bfe0, 0x4f7c000, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_SA[] =
{
    { L"Goodman SA", 0x4f7c000, 0x4f7c020, indexNGBCSprites_Goodman },
    { L"Start+A - Super Trail", 0x4f7c020, 0x4f7c040, indexNGBCSprites_Goodman, 0x00 },
    { L"Start+A - Extra Move 1", 0x4f7c040, 0x4f7c060, indexNGBCSprites_Goodman, 0x01 },
    { L"Start+A - Extra Move 2", 0x4f7c060, 0x4f7c080, indexNGBCSprites_Goodman, 0x02 },
    { L"Start+A - Extra Move 3", 0x4f7c080, 0x4f7c0a0, indexNGBCSprites_Goodman, 0x03 },
    { L"Start+A - Extra Move 4", 0x4f7c0a0, 0x4f7c0c0, indexNGBCSprites_Goodman, 0x04 },
    { L"Start+A - Extra Move 5", 0x4f7c0c0, 0x4f7c0e0, indexNGBCSprites_Goodman, 0x05 },
    { L"Start+A - Extra Move 6", 0x4f7c0e0, 0x4f7c100, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_SB[] =
{
    { L"Goodman SB", 0x4f7c100, 0x4f7c120, indexNGBCSprites_Goodman },
    { L"Start+B - Super Trail", 0x4f7c120, 0x4f7c140, indexNGBCSprites_Goodman, 0x00 },
    { L"Start+B - Extra Move 1", 0x4f7c140, 0x4f7c160, indexNGBCSprites_Goodman, 0x01 },
    { L"Start+B - Extra Move 2", 0x4f7c160, 0x4f7c180, indexNGBCSprites_Goodman, 0x02 },
    { L"Start+B - Extra Move 3", 0x4f7c180, 0x4f7c1a0, indexNGBCSprites_Goodman, 0x03 },
    { L"Start+B - Extra Move 4", 0x4f7c1a0, 0x4f7c1c0, indexNGBCSprites_Goodman, 0x04 },
    { L"Start+B - Extra Move 5", 0x4f7c1c0, 0x4f7c1e0, indexNGBCSprites_Goodman, 0x05 },
    { L"Start+B - Extra Move 6", 0x4f7c1e0, 0x4f7c200, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_SC[] =
{
    { L"Goodman SC", 0x4f7c200, 0x4f7c220, indexNGBCSprites_Goodman },
    { L"Start+C - Super Trail", 0x4f7c220, 0x4f7c240, indexNGBCSprites_Goodman, 0x00 },
    { L"Start+C - Extra Move 1", 0x4f7c240, 0x4f7c260, indexNGBCSprites_Goodman, 0x01 },
    { L"Start+C - Extra Move 2", 0x4f7c260, 0x4f7c280, indexNGBCSprites_Goodman, 0x02 },
    { L"Start+C - Extra Move 3", 0x4f7c280, 0x4f7c2a0, indexNGBCSprites_Goodman, 0x03 },
    { L"Start+C - Extra Move 4", 0x4f7c2a0, 0x4f7c2c0, indexNGBCSprites_Goodman, 0x04 },
    { L"Start+C - Extra Move 5", 0x4f7c2c0, 0x4f7c2e0, indexNGBCSprites_Goodman, 0x05 },
    { L"Start+C - Extra Move 6", 0x4f7c2e0, 0x4f7c300, indexNGBCSprites_Goodman, 0x06 },
};

const sGame_PaletteDataset NGBC_A_GOODMAN_PALETTES_SD[] =
{
    { L"Goodman SD", 0x4f7c300, 0x4f7c320, indexNGBCSprites_Goodman },
    { L"Start+D - Super Trail", 0x4f7c320, 0x4f7c340, indexNGBCSprites_Goodman, 0x00 },
    { L"Start+D - Extra Move 1", 0x4f7c340, 0x4f7c360, indexNGBCSprites_Goodman, 0x01 },
    { L"Start+D - Extra Move 2", 0x4f7c360, 0x4f7c380, indexNGBCSprites_Goodman, 0x02 },
    { L"Start+D - Extra Move 3", 0x4f7c380, 0x4f7c3a0, indexNGBCSprites_Goodman, 0x03 },
    { L"Start+D - Extra Move 4", 0x4f7c3a0, 0x4f7c3c0, indexNGBCSprites_Goodman, 0x04 },
    { L"Start+D - Extra Move 5", 0x4f7c3c0, 0x4f7c3e0, indexNGBCSprites_Goodman, 0x05 },
    { L"Start+D - Extra Move 6", 0x4f7c3e0, 0x4f7c400, indexNGBCSprites_Goodman, 0x06 },
};

const sDescTreeNode NGBC_A_YUUKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_A, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_B, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_C, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_D, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_EA, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_EB, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_EC, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_ED, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_SA, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_SB, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_SC, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_PALETTES_SD, ARRAYSIZE(NGBC_A_YUUKI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_AI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_A, ARRAYSIZE(NGBC_A_AI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_B, ARRAYSIZE(NGBC_A_AI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_C, ARRAYSIZE(NGBC_A_AI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_D, ARRAYSIZE(NGBC_A_AI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_EA, ARRAYSIZE(NGBC_A_AI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_EB, ARRAYSIZE(NGBC_A_AI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_EC, ARRAYSIZE(NGBC_A_AI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_ED, ARRAYSIZE(NGBC_A_AI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_SA, ARRAYSIZE(NGBC_A_AI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_SB, ARRAYSIZE(NGBC_A_AI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_SC, ARRAYSIZE(NGBC_A_AI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_PALETTES_SD, ARRAYSIZE(NGBC_A_AI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_A, ARRAYSIZE(NGBC_A_KYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_B, ARRAYSIZE(NGBC_A_KYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_C, ARRAYSIZE(NGBC_A_KYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_D, ARRAYSIZE(NGBC_A_KYO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_EA, ARRAYSIZE(NGBC_A_KYO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_EB, ARRAYSIZE(NGBC_A_KYO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_EC, ARRAYSIZE(NGBC_A_KYO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_ED, ARRAYSIZE(NGBC_A_KYO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_SA, ARRAYSIZE(NGBC_A_KYO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_SB, ARRAYSIZE(NGBC_A_KYO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_SC, ARRAYSIZE(NGBC_A_KYO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_PALETTES_SD, ARRAYSIZE(NGBC_A_KYO_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_A, ARRAYSIZE(NGBC_A_IORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_B, ARRAYSIZE(NGBC_A_IORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_C, ARRAYSIZE(NGBC_A_IORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_D, ARRAYSIZE(NGBC_A_IORI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_EA, ARRAYSIZE(NGBC_A_IORI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_EB, ARRAYSIZE(NGBC_A_IORI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_EC, ARRAYSIZE(NGBC_A_IORI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_ED, ARRAYSIZE(NGBC_A_IORI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_SA, ARRAYSIZE(NGBC_A_IORI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_SB, ARRAYSIZE(NGBC_A_IORI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_SC, ARRAYSIZE(NGBC_A_IORI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_PALETTES_SD, ARRAYSIZE(NGBC_A_IORI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MRKARATE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_A, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_B, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_C, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_D, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_EA, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_EB, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_EC, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_ED, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_SA, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_SB, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_SC, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_PALETTES_SD, ARRAYSIZE(NGBC_A_MRKARATE_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_A, ARRAYSIZE(NGBC_A_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_B, ARRAYSIZE(NGBC_A_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_C, ARRAYSIZE(NGBC_A_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_D, ARRAYSIZE(NGBC_A_TERRY_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_EA, ARRAYSIZE(NGBC_A_TERRY_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_EB, ARRAYSIZE(NGBC_A_TERRY_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_EC, ARRAYSIZE(NGBC_A_TERRY_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_ED, ARRAYSIZE(NGBC_A_TERRY_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_SA, ARRAYSIZE(NGBC_A_TERRY_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_SB, ARRAYSIZE(NGBC_A_TERRY_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_SC, ARRAYSIZE(NGBC_A_TERRY_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_PALETTES_SD, ARRAYSIZE(NGBC_A_TERRY_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_HAOHMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_A, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_B, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_C, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_D, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_EA, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_EB, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_EC, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_ED, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_SA, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_SB, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_SC, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_PALETTES_SD, ARRAYSIZE(NGBC_A_HAOHMARU_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_GENJURO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_A, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_B, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_C, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_D, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_EA, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_EB, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_EC, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_ED, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_SA, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_SB, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_SC, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_PALETTES_SD, ARRAYSIZE(NGBC_A_GENJURO_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_KAEDE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_A, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_B, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_C, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_D, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_EA, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_EB, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_EC, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_ED, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_SA, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_SB, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_SC, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_PALETTES_SD, ARRAYSIZE(NGBC_A_KAEDE_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MORIYA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_A, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_B, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_C, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_D, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_EA, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_EB, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_EC, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_ED, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_SA, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_SB, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_SC, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_PALETTES_SD, ARRAYSIZE(NGBC_A_MORIYA_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_K_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_A, ARRAYSIZE(NGBC_A_K_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_B, ARRAYSIZE(NGBC_A_K_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_C, ARRAYSIZE(NGBC_A_K_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_D, ARRAYSIZE(NGBC_A_K_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_EA, ARRAYSIZE(NGBC_A_K_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_EB, ARRAYSIZE(NGBC_A_K_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_EC, ARRAYSIZE(NGBC_A_K_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_ED, ARRAYSIZE(NGBC_A_K_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_SA, ARRAYSIZE(NGBC_A_K_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_SB, ARRAYSIZE(NGBC_A_K_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_SC, ARRAYSIZE(NGBC_A_K_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_K_PALETTES_SD, ARRAYSIZE(NGBC_A_K_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_ROCK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_A, ARRAYSIZE(NGBC_A_ROCK_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_B, ARRAYSIZE(NGBC_A_ROCK_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_C, ARRAYSIZE(NGBC_A_ROCK_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_D, ARRAYSIZE(NGBC_A_ROCK_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_EA, ARRAYSIZE(NGBC_A_ROCK_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_EB, ARRAYSIZE(NGBC_A_ROCK_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_EC, ARRAYSIZE(NGBC_A_ROCK_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_ED, ARRAYSIZE(NGBC_A_ROCK_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_SA, ARRAYSIZE(NGBC_A_ROCK_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_SB, ARRAYSIZE(NGBC_A_ROCK_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_SC, ARRAYSIZE(NGBC_A_ROCK_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_PALETTES_SD, ARRAYSIZE(NGBC_A_ROCK_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_A, ARRAYSIZE(NGBC_A_MAI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_B, ARRAYSIZE(NGBC_A_MAI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_C, ARRAYSIZE(NGBC_A_MAI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_D, ARRAYSIZE(NGBC_A_MAI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_EA, ARRAYSIZE(NGBC_A_MAI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_EB, ARRAYSIZE(NGBC_A_MAI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_EC, ARRAYSIZE(NGBC_A_MAI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_ED, ARRAYSIZE(NGBC_A_MAI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_SA, ARRAYSIZE(NGBC_A_MAI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_SB, ARRAYSIZE(NGBC_A_MAI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_SC, ARRAYSIZE(NGBC_A_MAI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_PALETTES_SD, ARRAYSIZE(NGBC_A_MAI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_SHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_A, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_B, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_C, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_D, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_EA, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_EB, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_EC, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_ED, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_SA, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_SB, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_SC, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_PALETTES_SD, ARRAYSIZE(NGBC_A_SHERMIE_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_GEESE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_A, ARRAYSIZE(NGBC_A_GEESE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_B, ARRAYSIZE(NGBC_A_GEESE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_C, ARRAYSIZE(NGBC_A_GEESE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_D, ARRAYSIZE(NGBC_A_GEESE_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_EA, ARRAYSIZE(NGBC_A_GEESE_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_EB, ARRAYSIZE(NGBC_A_GEESE_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_EC, ARRAYSIZE(NGBC_A_GEESE_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_ED, ARRAYSIZE(NGBC_A_GEESE_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_SA, ARRAYSIZE(NGBC_A_GEESE_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_SB, ARRAYSIZE(NGBC_A_GEESE_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_SC, ARRAYSIZE(NGBC_A_GEESE_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_PALETTES_SD, ARRAYSIZE(NGBC_A_GEESE_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MRBIG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_A, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_B, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_C, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_D, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_EA, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_EB, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_EC, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_ED, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_SA, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_SB, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_SC, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_PALETTES_SD, ARRAYSIZE(NGBC_A_MRBIG_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_NAKORURU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_A, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_B, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_C, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_D, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_EA, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_EB, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_EC, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_ED, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_SA, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_SB, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_SC, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_PALETTES_SD, ARRAYSIZE(NGBC_A_NAKORURU_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_HOTARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_A, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_B, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_C, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_D, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_EA, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_EB, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_EC, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_ED, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_SA, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_SB, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_SC, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_PALETTES_SD, ARRAYSIZE(NGBC_A_HOTARU_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_KEIICHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_A, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_B, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_C, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_D, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_EA, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_EB, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_EC, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_ED, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_SA, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_SB, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_SC, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_PALETTES_SD, ARRAYSIZE(NGBC_A_KEIICHIRO_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_A, ARRAYSIZE(NGBC_A_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_B, ARRAYSIZE(NGBC_A_KIM_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_C, ARRAYSIZE(NGBC_A_KIM_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_D, ARRAYSIZE(NGBC_A_KIM_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_EA, ARRAYSIZE(NGBC_A_KIM_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_EB, ARRAYSIZE(NGBC_A_KIM_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_EC, ARRAYSIZE(NGBC_A_KIM_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_ED, ARRAYSIZE(NGBC_A_KIM_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_SA, ARRAYSIZE(NGBC_A_KIM_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_SB, ARRAYSIZE(NGBC_A_KIM_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_SC, ARRAYSIZE(NGBC_A_KIM_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_PALETTES_SD, ARRAYSIZE(NGBC_A_KIM_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_AKARI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_A, ARRAYSIZE(NGBC_A_AKARI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_B, ARRAYSIZE(NGBC_A_AKARI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_C, ARRAYSIZE(NGBC_A_AKARI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_D, ARRAYSIZE(NGBC_A_AKARI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_EA, ARRAYSIZE(NGBC_A_AKARI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_EB, ARRAYSIZE(NGBC_A_AKARI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_EC, ARRAYSIZE(NGBC_A_AKARI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_ED, ARRAYSIZE(NGBC_A_AKARI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_SA, ARRAYSIZE(NGBC_A_AKARI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_SB, ARRAYSIZE(NGBC_A_AKARI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_SC, ARRAYSIZE(NGBC_A_AKARI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_PALETTES_SD, ARRAYSIZE(NGBC_A_AKARI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_SHIKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_A, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_B, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_C, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_D, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_EA, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_EB, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_EC, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_ED, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_SA, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_SB, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_SC, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_PALETTES_SD, ARRAYSIZE(NGBC_A_SHIKI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_HANZO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_A, ARRAYSIZE(NGBC_A_HANZO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_B, ARRAYSIZE(NGBC_A_HANZO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_C, ARRAYSIZE(NGBC_A_HANZO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_D, ARRAYSIZE(NGBC_A_HANZO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_EA, ARRAYSIZE(NGBC_A_HANZO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_EB, ARRAYSIZE(NGBC_A_HANZO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_EC, ARRAYSIZE(NGBC_A_HANZO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_ED, ARRAYSIZE(NGBC_A_HANZO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_SA, ARRAYSIZE(NGBC_A_HANZO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_SB, ARRAYSIZE(NGBC_A_HANZO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_SC, ARRAYSIZE(NGBC_A_HANZO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_PALETTES_SD, ARRAYSIZE(NGBC_A_HANZO_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_FUUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_A, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_B, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_C, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_D, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_EA, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_EB, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_EC, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_ED, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_SA, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_SB, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_SC, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_PALETTES_SD, ARRAYSIZE(NGBC_A_FUUMA_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MUDMAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_A, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_B, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_C, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_D, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_EA, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_EB, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_EC, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_ED, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_SA, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_SB, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_SC, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_PALETTES_SD, ARRAYSIZE(NGBC_A_MUDMAN_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_TUNGFURUE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_A, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_B, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_C, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_D, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_EA, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_EB, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_EC, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_ED, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_SA, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_SB, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_SC, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_PALETTES_SD, ARRAYSIZE(NGBC_A_TUNGFURUE_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MARCO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_A, ARRAYSIZE(NGBC_A_MARCO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_B, ARRAYSIZE(NGBC_A_MARCO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_C, ARRAYSIZE(NGBC_A_MARCO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_D, ARRAYSIZE(NGBC_A_MARCO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_EA, ARRAYSIZE(NGBC_A_MARCO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_EB, ARRAYSIZE(NGBC_A_MARCO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_EC, ARRAYSIZE(NGBC_A_MARCO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_ED, ARRAYSIZE(NGBC_A_MARCO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_SA, ARRAYSIZE(NGBC_A_MARCO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_SB, ARRAYSIZE(NGBC_A_MARCO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_SC, ARRAYSIZE(NGBC_A_MARCO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_PALETTES_SD, ARRAYSIZE(NGBC_A_MARCO_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MARSPEOPLE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_A, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_B, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_C, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_D, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_EA, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_EB, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_EC, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_ED, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_SA, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_SB, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_SC, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_PALETTES_SD, ARRAYSIZE(NGBC_A_MARSPEOPLE_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_KINGLION_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_A, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_B, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_C, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_D, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_EA, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_EB, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_EC, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_ED, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_SA, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_SB, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_SC, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_PALETTES_SD, ARRAYSIZE(NGBC_A_KINGLION_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_CYBERWOO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_A, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_B, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_C, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_D, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_EA, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_EB, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_EC, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_ED, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_SA, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_SB, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_SC, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_PALETTES_SD, ARRAYSIZE(NGBC_A_CYBERWOO_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_GODDESSATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_A, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_B, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_C, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_D, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_EA, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_EB, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_EC, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_ED, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_SA, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_SB, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_SC, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_PALETTES_SD, ARRAYSIZE(NGBC_A_GODDESSATHENA_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_KISARAH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_A, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_B, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_C, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_D, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_EA, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_EB, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_EC, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_ED, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_SA, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_SB, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_SC, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_PALETTES_SD, ARRAYSIZE(NGBC_A_KISARAH_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_CHONREI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_A, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_B, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_C, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_D, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_EA, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_EB, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_EC, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_ED, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_SA, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_SB, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_SC, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_PALETTES_SD, ARRAYSIZE(NGBC_A_CHONREI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_CHONSHU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_A, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_B, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_C, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_D, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_EA, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_EB, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_EC, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_ED, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_SA, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_SB, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_SC, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_PALETTES_SD, ARRAYSIZE(NGBC_A_CHONSHU_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_NEODIO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_A, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_B, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_C, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_D, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_EA, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_EB, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_EC, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_ED, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_SA, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_SB, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_SC, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_PALETTES_SD, ARRAYSIZE(NGBC_A_NEODIO_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_ASURA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_A, ARRAYSIZE(NGBC_A_ASURA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_B, ARRAYSIZE(NGBC_A_ASURA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_C, ARRAYSIZE(NGBC_A_ASURA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_D, ARRAYSIZE(NGBC_A_ASURA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_EA, ARRAYSIZE(NGBC_A_ASURA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_EB, ARRAYSIZE(NGBC_A_ASURA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_EC, ARRAYSIZE(NGBC_A_ASURA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_ED, ARRAYSIZE(NGBC_A_ASURA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_SA, ARRAYSIZE(NGBC_A_ASURA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_SB, ARRAYSIZE(NGBC_A_ASURA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_SC, ARRAYSIZE(NGBC_A_ASURA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_PALETTES_SD, ARRAYSIZE(NGBC_A_ASURA_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_MIZUCHI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_A, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_B, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_C, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_D, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_EA, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_EB, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_EC, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_ED, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_SA, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_SB, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_SC, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_PALETTES_SD, ARRAYSIZE(NGBC_A_MIZUCHI_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_A, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_B, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_C, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_D, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_EA, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_EB, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_EC, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_ED, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_SA, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_SB, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_SC, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_PALETTES_SD, ARRAYSIZE(NGBC_A_ROBERT_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_LEEPAILONG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_A, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_B, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_C, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_D, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_EA, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_EB, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_EC, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_ED, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_SA, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_SB, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_SC, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_PALETTES_SD, ARRAYSIZE(NGBC_A_LEEPAILONG_PALETTES_SD) },
};

const sDescTreeNode NGBC_A_GOODMAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_A, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_B, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_C, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_D, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_EA, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_EB, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_EC, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_ED, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_SA, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_SB, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_SC, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_PALETTES_SD, ARRAYSIZE(NGBC_A_GOODMAN_PALETTES_SD) },
};

#define k_ngbcNameKey_GoddessAthena  L"Goddess Athena"

const sDescTreeNode NGBC_A_UNITS[] =
{
    { L"Yuuki", DESC_NODETYPE_TREE, (void*)NGBC_A_YUUKI_COLLECTION, ARRAYSIZE(NGBC_A_YUUKI_COLLECTION) },
    { L"Ai", DESC_NODETYPE_TREE, (void*)NGBC_A_AI_COLLECTION, ARRAYSIZE(NGBC_A_AI_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)NGBC_A_KYO_COLLECTION, ARRAYSIZE(NGBC_A_KYO_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)NGBC_A_IORI_COLLECTION, ARRAYSIZE(NGBC_A_IORI_COLLECTION) },
    { L"Mr. Karate", DESC_NODETYPE_TREE, (void*)NGBC_A_MRKARATE_COLLECTION, ARRAYSIZE(NGBC_A_MRKARATE_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)NGBC_A_TERRY_COLLECTION, ARRAYSIZE(NGBC_A_TERRY_COLLECTION) },
    { L"Haohmaru", DESC_NODETYPE_TREE, (void*)NGBC_A_HAOHMARU_COLLECTION, ARRAYSIZE(NGBC_A_HAOHMARU_COLLECTION) },
    { L"Genjuro", DESC_NODETYPE_TREE, (void*)NGBC_A_GENJURO_COLLECTION, ARRAYSIZE(NGBC_A_GENJURO_COLLECTION) },
    { L"Kaede", DESC_NODETYPE_TREE, (void*)NGBC_A_KAEDE_COLLECTION, ARRAYSIZE(NGBC_A_KAEDE_COLLECTION) },
    { L"Moriya", DESC_NODETYPE_TREE, (void*)NGBC_A_MORIYA_COLLECTION, ARRAYSIZE(NGBC_A_MORIYA_COLLECTION) },
    { L"K'", DESC_NODETYPE_TREE, (void*)NGBC_A_K_COLLECTION, ARRAYSIZE(NGBC_A_K_COLLECTION) },
    { L"Rock", DESC_NODETYPE_TREE, (void*)NGBC_A_ROCK_COLLECTION, ARRAYSIZE(NGBC_A_ROCK_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)NGBC_A_MAI_COLLECTION, ARRAYSIZE(NGBC_A_MAI_COLLECTION) },
    { L"Shermie", DESC_NODETYPE_TREE, (void*)NGBC_A_SHERMIE_COLLECTION, ARRAYSIZE(NGBC_A_SHERMIE_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)NGBC_A_GEESE_COLLECTION, ARRAYSIZE(NGBC_A_GEESE_COLLECTION) },
    { L"Mr. Big", DESC_NODETYPE_TREE, (void*)NGBC_A_MRBIG_COLLECTION, ARRAYSIZE(NGBC_A_MRBIG_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)NGBC_A_NAKORURU_COLLECTION, ARRAYSIZE(NGBC_A_NAKORURU_COLLECTION) },
    { L"Hotaru", DESC_NODETYPE_TREE, (void*)NGBC_A_HOTARU_COLLECTION, ARRAYSIZE(NGBC_A_HOTARU_COLLECTION) },
    { L"Keiichiro", DESC_NODETYPE_TREE, (void*)NGBC_A_KEIICHIRO_COLLECTION, ARRAYSIZE(NGBC_A_KEIICHIRO_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)NGBC_A_KIM_COLLECTION, ARRAYSIZE(NGBC_A_KIM_COLLECTION) },
    { L"Akari", DESC_NODETYPE_TREE, (void*)NGBC_A_AKARI_COLLECTION, ARRAYSIZE(NGBC_A_AKARI_COLLECTION) },
    { L"Shiki", DESC_NODETYPE_TREE, (void*)NGBC_A_SHIKI_COLLECTION, ARRAYSIZE(NGBC_A_SHIKI_COLLECTION) },
    { L"Hanzo", DESC_NODETYPE_TREE, (void*)NGBC_A_HANZO_COLLECTION, ARRAYSIZE(NGBC_A_HANZO_COLLECTION) },
    { L"Fuuma", DESC_NODETYPE_TREE, (void*)NGBC_A_FUUMA_COLLECTION, ARRAYSIZE(NGBC_A_FUUMA_COLLECTION) },
    { L"Mudman", DESC_NODETYPE_TREE, (void*)NGBC_A_MUDMAN_COLLECTION, ARRAYSIZE(NGBC_A_MUDMAN_COLLECTION) },
    { L"Tung Fu Rue", DESC_NODETYPE_TREE, (void*)NGBC_A_TUNGFURUE_COLLECTION, ARRAYSIZE(NGBC_A_TUNGFURUE_COLLECTION) },
    { L"Marco", DESC_NODETYPE_TREE, (void*)NGBC_A_MARCO_COLLECTION, ARRAYSIZE(NGBC_A_MARCO_COLLECTION) },
    { L"Mars People", DESC_NODETYPE_TREE, (void*)NGBC_A_MARSPEOPLE_COLLECTION, ARRAYSIZE(NGBC_A_MARSPEOPLE_COLLECTION) },
    { L"King Lion", DESC_NODETYPE_TREE, (void*)NGBC_A_KINGLION_COLLECTION, ARRAYSIZE(NGBC_A_KINGLION_COLLECTION) },
    { L"Cyber Woo", DESC_NODETYPE_TREE, (void*)NGBC_A_CYBERWOO_COLLECTION, ARRAYSIZE(NGBC_A_CYBERWOO_COLLECTION) },
    { k_ngbcNameKey_GoddessAthena, DESC_NODETYPE_TREE, (void*)NGBC_A_GODDESSATHENA_COLLECTION, ARRAYSIZE(NGBC_A_GODDESSATHENA_COLLECTION) },
    { L"Kisarah", DESC_NODETYPE_TREE, (void*)NGBC_A_KISARAH_COLLECTION, ARRAYSIZE(NGBC_A_KISARAH_COLLECTION) },
    { L"Chonrei", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONREI_COLLECTION, ARRAYSIZE(NGBC_A_CHONREI_COLLECTION) },
    { L"Chonshu", DESC_NODETYPE_TREE, (void*)NGBC_A_CHONSHU_COLLECTION, ARRAYSIZE(NGBC_A_CHONSHU_COLLECTION) },
    { L"Neo Dio", DESC_NODETYPE_TREE, (void*)NGBC_A_NEODIO_COLLECTION, ARRAYSIZE(NGBC_A_NEODIO_COLLECTION) },
    { L"Asura", DESC_NODETYPE_TREE, (void*)NGBC_A_ASURA_COLLECTION, ARRAYSIZE(NGBC_A_ASURA_COLLECTION) },
    { L"Mizuchi", DESC_NODETYPE_TREE, (void*)NGBC_A_MIZUCHI_COLLECTION, ARRAYSIZE(NGBC_A_MIZUCHI_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)NGBC_A_ROBERT_COLLECTION, ARRAYSIZE(NGBC_A_ROBERT_COLLECTION) },
    { L"Lee Pai Long", DESC_NODETYPE_TREE, (void*)NGBC_A_LEEPAILONG_COLLECTION, ARRAYSIZE(NGBC_A_LEEPAILONG_COLLECTION) },
    { L"Goodman", DESC_NODETYPE_TREE, (void*)NGBC_A_GOODMAN_COLLECTION, ARRAYSIZE(NGBC_A_GOODMAN_COLLECTION) },
};

constexpr auto NGBC_A_NUMUNIT = ARRAYSIZE(NGBC_A_UNITS);

#define NGBC_A_EXTRALOC NGBC_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef NGBC_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

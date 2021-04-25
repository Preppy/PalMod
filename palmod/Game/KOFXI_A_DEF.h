#pragma once

// To add characters or palette lists:
// * Update the kofXICharacterList array.
// * Uncomment DumpAllCharacters in InitDescTree
// * Run PalMod: the new headers will be printed to debug out
// That should be it.  Good luck.

const UINT16 KOFXI_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_Iori,
    indexKOFSprites_02UM_K,         // 0x92
    indexKOFSprites_02UM_King,      // 0x97
    indexKOFSprites_02UM_Kula,      // 0x99
    indexKOFSprites_02UM_Maxima,    // 0xA2
    indexKOFSprites_02UM_Ramon,     // 0xA7
    indexKOFSprites_02UM_Ryo,       // 0xAA
    indexKOFSprites_02UM_Shingo,    // 0xAE
    indexKOFSprites_02UM_Vanessa,   // 0xB2

    indexKOFXISprites_Adelheid,     // 0x10b
    indexKOFXISprites_Ash,          // 0x10c
    indexKOFXISprites_Athena,       // 0x10d
    indexKOFXISprites_Benimaru,     // 0x10e
    indexKOFXISprites_BJenet,       // 0x10f
    indexKOFXISprites_BlueMary,     // 0x110
    indexKOFXISprites_Clark,        // 0x111
    indexKOFXISprites_DuckKing,     // 0x112
    indexKOFXISprites_Duo,          // 0x113
    indexKOFXISprites_Eiji,         // 0x114
    indexKOFXISprites_Elizabeth,    // 0x115
    indexKOFXISprites_Gai,          // 0x116
    indexKOFXISprites_Gato,         // 0x117
    indexKOFXISprites_Iori,         // 0x118
    indexKOFXISprites_Jyazu,        // 0x119
    indexKOFXISprites_K,            // 0x11a
    indexKOFXISprites_Kasumi,       // 0x11b
    indexKOFXISprites_Kensou,       // 0x11c
    indexKOFXISprites_Kim,          // 0x11d
    indexKOFXISprites_King,         // 0x11e
    indexKOFXISprites_Kula,         // 0x11f
    indexKOFXISprites_Kyo,          // 0x120
    indexKOFXISprites_Magaki,       // 0x121
    indexKOFXISprites_Malin,        // 0x122
    indexKOFXISprites_Maxima,       // 0x123
    indexKOFXISprites_Momoko,       // 0x124
    indexKOFXISprites_Oswald,       // 0x125
    indexKOFXISprites_Ralf,         // 0x126
    indexKOFXISprites_Ramon,        // 0x127
    indexKOFXISprites_Ryo,          // 0x128
    indexKOFXISprites_Shen,         // 0x129
    indexKOFXISprites_Shingo,       // 0x12a
    indexKOFXISprites_Shion,        // 0x12b
    indexKOFXISprites_Sho,          // 0x12c
    indexKOFXISprites_Silber,       // 0x12d
    indexKOFXISprites_Terry,        // 0x12e
    indexKOFXISprites_Tizoc,        // 0x12f
    indexKOFXISprites_Vanessa,      // 0x130
    indexKOFXISprites_Whip,         // 0x131
    indexKOFXISprites_Yuri,         // 0x132
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_A[] =
{
    { L"Ash A", 0x1011000, 0x1011020, indexKOFXISprites_Ash },
    { L"A - Super Stuff 1", 0x1011020, 0x1011040, indexKOFXISprites_Ash, 0x20 },
    { L"A - Electric Palette", 0x1011040, 0x1011060, indexKOFXISprites_Ash, 0x41 },
    { L"A - Darker Palette", 0x1011060, 0x1011080, indexKOFXISprites_Ash, 0x40 },
    { L"A - Super Stuff 2", 0x1011080, 0x10110a0, indexKOFXISprites_Ash, 0x21 },
    { L"A - Character Extra 1", 0x10110a0, 0x10110c0, indexKOFXISprites_Ash, 0x30 },
    { L"A - Character Extra 2", 0x10110c0, 0x10110e0, indexKOFXISprites_Ash, 0x31 },
    { L"A - Character Extra 3", 0x10110e0, 0x1011100, indexKOFXISprites_Ash, 0x32 },
    { L"A - Extra Move 1", 0x1011100, 0x1011120, indexKOFXISprites_Ash, 0x10 },
    { L"A - Extra Move 2", 0x1011120, 0x1011140, indexKOFXISprites_Ash, 0x11 },
    { L"A - Extra Move 3", 0x1011140, 0x1011160, indexKOFXISprites_Ash, 0x12 },
    { L"A - Extra Move 4", 0x1011160, 0x1011180, indexKOFXISprites_Ash, 0x13 },
    { L"A - Extra Move 5", 0x1011180, 0x10111a0, indexKOFXISprites_Ash, 0x14 },
    { L"A - Extra Move 6", 0x10111a0, 0x10111c0, indexKOFXISprites_Ash, 0x15 },
    { L"A - Extra Move 7", 0x10111c0, 0x10111e0, indexKOFXISprites_Ash, 0x16 },
    { L"A - Extra Move 8", 0x10111e0, 0x1011200, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_B[] =
{
    { L"Ash B", 0x1011200, 0x1011220, indexKOFXISprites_Ash },
    { L"B - Super Stuff 1", 0x1011220, 0x1011240, indexKOFXISprites_Ash, 0x20 },
    { L"B - Electric Palette", 0x1011240, 0x1011260, indexKOFXISprites_Ash, 0x41 },
    { L"B - Darker Palette", 0x1011260, 0x1011280, indexKOFXISprites_Ash, 0x40 },
    { L"B - Super Stuff 2", 0x1011280, 0x10112a0, indexKOFXISprites_Ash, 0x21 },
    { L"B - Character Extra 1", 0x10112a0, 0x10112c0, indexKOFXISprites_Ash, 0x30 },
    { L"B - Character Extra 2", 0x10112c0, 0x10112e0, indexKOFXISprites_Ash, 0x31 },
    { L"B - Character Extra 3", 0x10112e0, 0x1011300, indexKOFXISprites_Ash, 0x32 },
    { L"B - Extra Move 1", 0x1011300, 0x1011320, indexKOFXISprites_Ash, 0x10 },
    { L"B - Extra Move 2", 0x1011320, 0x1011340, indexKOFXISprites_Ash, 0x11 },
    { L"B - Extra Move 3", 0x1011340, 0x1011360, indexKOFXISprites_Ash, 0x12 },
    { L"B - Extra Move 4", 0x1011360, 0x1011380, indexKOFXISprites_Ash, 0x13 },
    { L"B - Extra Move 5", 0x1011380, 0x10113a0, indexKOFXISprites_Ash, 0x14 },
    { L"B - Extra Move 6", 0x10113a0, 0x10113c0, indexKOFXISprites_Ash, 0x15 },
    { L"B - Extra Move 7", 0x10113c0, 0x10113e0, indexKOFXISprites_Ash, 0x16 },
    { L"B - Extra Move 8", 0x10113e0, 0x1011400, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_C[] =
{
    { L"Ash C", 0x1011400, 0x1011420, indexKOFXISprites_Ash },
    { L"C - Super Stuff 1", 0x1011420, 0x1011440, indexKOFXISprites_Ash, 0x20 },
    { L"C - Electric Palette", 0x1011440, 0x1011460, indexKOFXISprites_Ash, 0x41 },
    { L"C - Darker Palette", 0x1011460, 0x1011480, indexKOFXISprites_Ash, 0x40 },
    { L"C - Super Stuff 2", 0x1011480, 0x10114a0, indexKOFXISprites_Ash, 0x21 },
    { L"C - Character Extra 1", 0x10114a0, 0x10114c0, indexKOFXISprites_Ash, 0x30 },
    { L"C - Character Extra 2", 0x10114c0, 0x10114e0, indexKOFXISprites_Ash, 0x31 },
    { L"C - Character Extra 3", 0x10114e0, 0x1011500, indexKOFXISprites_Ash, 0x32 },
    { L"C - Extra Move 1", 0x1011500, 0x1011520, indexKOFXISprites_Ash, 0x10 },
    { L"C - Extra Move 2", 0x1011520, 0x1011540, indexKOFXISprites_Ash, 0x11 },
    { L"C - Extra Move 3", 0x1011540, 0x1011560, indexKOFXISprites_Ash, 0x12 },
    { L"C - Extra Move 4", 0x1011560, 0x1011580, indexKOFXISprites_Ash, 0x13 },
    { L"C - Extra Move 5", 0x1011580, 0x10115a0, indexKOFXISprites_Ash, 0x14 },
    { L"C - Extra Move 6", 0x10115a0, 0x10115c0, indexKOFXISprites_Ash, 0x15 },
    { L"C - Extra Move 7", 0x10115c0, 0x10115e0, indexKOFXISprites_Ash, 0x16 },
    { L"C - Extra Move 8", 0x10115e0, 0x1011600, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_D[] =
{
    { L"Ash D", 0x1011600, 0x1011620, indexKOFXISprites_Ash },
    { L"D - Super Stuff 1", 0x1011620, 0x1011640, indexKOFXISprites_Ash, 0x20 },
    { L"D - Electric Palette", 0x1011640, 0x1011660, indexKOFXISprites_Ash, 0x41 },
    { L"D - Darker Palette", 0x1011660, 0x1011680, indexKOFXISprites_Ash, 0x40 },
    { L"D - Super Stuff 2", 0x1011680, 0x10116a0, indexKOFXISprites_Ash, 0x21 },
    { L"D - Character Extra 1", 0x10116a0, 0x10116c0, indexKOFXISprites_Ash, 0x30 },
    { L"D - Character Extra 2", 0x10116c0, 0x10116e0, indexKOFXISprites_Ash, 0x31 },
    { L"D - Character Extra 3", 0x10116e0, 0x1011700, indexKOFXISprites_Ash, 0x32 },
    { L"D - Extra Move 1", 0x1011700, 0x1011720, indexKOFXISprites_Ash, 0x10 },
    { L"D - Extra Move 2", 0x1011720, 0x1011740, indexKOFXISprites_Ash, 0x11 },
    { L"D - Extra Move 3", 0x1011740, 0x1011760, indexKOFXISprites_Ash, 0x12 },
    { L"D - Extra Move 4", 0x1011760, 0x1011780, indexKOFXISprites_Ash, 0x13 },
    { L"D - Extra Move 5", 0x1011780, 0x10117a0, indexKOFXISprites_Ash, 0x14 },
    { L"D - Extra Move 6", 0x10117a0, 0x10117c0, indexKOFXISprites_Ash, 0x15 },
    { L"D - Extra Move 7", 0x10117c0, 0x10117e0, indexKOFXISprites_Ash, 0x16 },
    { L"D - Extra Move 8", 0x10117e0, 0x1011800, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_EA[] =
{
    { L"Ash EA", 0x1011800, 0x1011820, indexKOFXISprites_Ash },
    { L"E+A - Super Stuff 1", 0x1011820, 0x1011840, indexKOFXISprites_Ash, 0x20 },
    { L"E+A - Electric Palette", 0x1011840, 0x1011860, indexKOFXISprites_Ash, 0x41 },
    { L"E+A - Darker Palette", 0x1011860, 0x1011880, indexKOFXISprites_Ash, 0x40 },
    { L"E+A - Super Stuff 2", 0x1011880, 0x10118a0, indexKOFXISprites_Ash, 0x21 },
    { L"E+A - Character Extra 1", 0x10118a0, 0x10118c0, indexKOFXISprites_Ash, 0x30 },
    { L"E+A - Character Extra 2", 0x10118c0, 0x10118e0, indexKOFXISprites_Ash, 0x31 },
    { L"E+A - Character Extra 3", 0x10118e0, 0x1011900, indexKOFXISprites_Ash, 0x32 },
    { L"E+A - Extra Move 1", 0x1011900, 0x1011920, indexKOFXISprites_Ash, 0x10 },
    { L"E+A - Extra Move 2", 0x1011920, 0x1011940, indexKOFXISprites_Ash, 0x11 },
    { L"E+A - Extra Move 3", 0x1011940, 0x1011960, indexKOFXISprites_Ash, 0x12 },
    { L"E+A - Extra Move 4", 0x1011960, 0x1011980, indexKOFXISprites_Ash, 0x13 },
    { L"E+A - Extra Move 5", 0x1011980, 0x10119a0, indexKOFXISprites_Ash, 0x14 },
    { L"E+A - Extra Move 6", 0x10119a0, 0x10119c0, indexKOFXISprites_Ash, 0x15 },
    { L"E+A - Extra Move 7", 0x10119c0, 0x10119e0, indexKOFXISprites_Ash, 0x16 },
    { L"E+A - Extra Move 8", 0x10119e0, 0x1011a00, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_EB[] =
{
    { L"Ash EB", 0x1011a00, 0x1011a20, indexKOFXISprites_Ash },
    { L"E+B - Super Stuff 1", 0x1011a20, 0x1011a40, indexKOFXISprites_Ash, 0x20 },
    { L"E+B - Electric Palette", 0x1011a40, 0x1011a60, indexKOFXISprites_Ash, 0x41 },
    { L"E+B - Darker Palette", 0x1011a60, 0x1011a80, indexKOFXISprites_Ash, 0x40 },
    { L"E+B - Super Stuff 2", 0x1011a80, 0x1011aa0, indexKOFXISprites_Ash, 0x21 },
    { L"E+B - Character Extra 1", 0x1011aa0, 0x1011ac0, indexKOFXISprites_Ash, 0x30 },
    { L"E+B - Character Extra 2", 0x1011ac0, 0x1011ae0, indexKOFXISprites_Ash, 0x31 },
    { L"E+B - Character Extra 3", 0x1011ae0, 0x1011b00, indexKOFXISprites_Ash, 0x32 },
    { L"E+B - Extra Move 1", 0x1011b00, 0x1011b20, indexKOFXISprites_Ash, 0x10 },
    { L"E+B - Extra Move 2", 0x1011b20, 0x1011b40, indexKOFXISprites_Ash, 0x11 },
    { L"E+B - Extra Move 3", 0x1011b40, 0x1011b60, indexKOFXISprites_Ash, 0x12 },
    { L"E+B - Extra Move 4", 0x1011b60, 0x1011b80, indexKOFXISprites_Ash, 0x13 },
    { L"E+B - Extra Move 5", 0x1011b80, 0x1011ba0, indexKOFXISprites_Ash, 0x14 },
    { L"E+B - Extra Move 6", 0x1011ba0, 0x1011bc0, indexKOFXISprites_Ash, 0x15 },
    { L"E+B - Extra Move 7", 0x1011bc0, 0x1011be0, indexKOFXISprites_Ash, 0x16 },
    { L"E+B - Extra Move 8", 0x1011be0, 0x1011c00, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_EC[] =
{
    { L"Ash EC", 0x1011c00, 0x1011c20, indexKOFXISprites_Ash },
    { L"E+C - Super Stuff 1", 0x1011c20, 0x1011c40, indexKOFXISprites_Ash, 0x20 },
    { L"E+C - Electric Palette", 0x1011c40, 0x1011c60, indexKOFXISprites_Ash, 0x41 },
    { L"E+C - Darker Palette", 0x1011c60, 0x1011c80, indexKOFXISprites_Ash, 0x40 },
    { L"E+C - Super Stuff 2", 0x1011c80, 0x1011ca0, indexKOFXISprites_Ash, 0x21 },
    { L"E+C - Character Extra 1", 0x1011ca0, 0x1011cc0, indexKOFXISprites_Ash, 0x30 },
    { L"E+C - Character Extra 2", 0x1011cc0, 0x1011ce0, indexKOFXISprites_Ash, 0x31 },
    { L"E+C - Character Extra 3", 0x1011ce0, 0x1011d00, indexKOFXISprites_Ash, 0x32 },
    { L"E+C - Extra Move 1", 0x1011d00, 0x1011d20, indexKOFXISprites_Ash, 0x10 },
    { L"E+C - Extra Move 2", 0x1011d20, 0x1011d40, indexKOFXISprites_Ash, 0x11 },
    { L"E+C - Extra Move 3", 0x1011d40, 0x1011d60, indexKOFXISprites_Ash, 0x12 },
    { L"E+C - Extra Move 4", 0x1011d60, 0x1011d80, indexKOFXISprites_Ash, 0x13 },
    { L"E+C - Extra Move 5", 0x1011d80, 0x1011da0, indexKOFXISprites_Ash, 0x14 },
    { L"E+C - Extra Move 6", 0x1011da0, 0x1011dc0, indexKOFXISprites_Ash, 0x15 },
    { L"E+C - Extra Move 7", 0x1011dc0, 0x1011de0, indexKOFXISprites_Ash, 0x16 },
    { L"E+C - Extra Move 8", 0x1011de0, 0x1011e00, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_ED[] =
{
    { L"Ash ED", 0x1011e00, 0x1011e20, indexKOFXISprites_Ash },
    { L"E+D - Super Stuff 1", 0x1011e20, 0x1011e40, indexKOFXISprites_Ash, 0x20 },
    { L"E+D - Electric Palette", 0x1011e40, 0x1011e60, indexKOFXISprites_Ash, 0x41 },
    { L"E+D - Darker Palette", 0x1011e60, 0x1011e80, indexKOFXISprites_Ash, 0x40 },
    { L"E+D - Super Stuff 2", 0x1011e80, 0x1011ea0, indexKOFXISprites_Ash, 0x21 },
    { L"E+D - Character Extra 1", 0x1011ea0, 0x1011ec0, indexKOFXISprites_Ash, 0x30 },
    { L"E+D - Character Extra 2", 0x1011ec0, 0x1011ee0, indexKOFXISprites_Ash, 0x31 },
    { L"E+D - Character Extra 3", 0x1011ee0, 0x1011f00, indexKOFXISprites_Ash, 0x32 },
    { L"E+D - Extra Move 1", 0x1011f00, 0x1011f20, indexKOFXISprites_Ash, 0x10 },
    { L"E+D - Extra Move 2", 0x1011f20, 0x1011f40, indexKOFXISprites_Ash, 0x11 },
    { L"E+D - Extra Move 3", 0x1011f40, 0x1011f60, indexKOFXISprites_Ash, 0x12 },
    { L"E+D - Extra Move 4", 0x1011f60, 0x1011f80, indexKOFXISprites_Ash, 0x13 },
    { L"E+D - Extra Move 5", 0x1011f80, 0x1011fa0, indexKOFXISprites_Ash, 0x14 },
    { L"E+D - Extra Move 6", 0x1011fa0, 0x1011fc0, indexKOFXISprites_Ash, 0x15 },
    { L"E+D - Extra Move 7", 0x1011fc0, 0x1011fe0, indexKOFXISprites_Ash, 0x16 },
    { L"E+D - Extra Move 8", 0x1011fe0, 0x1012000, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_SA[] =
{
    { L"Ash SA", 0x1012000, 0x1012020, indexKOFXISprites_Ash },
    { L"Start+A - Super Stuff 1", 0x1012020, 0x1012040, indexKOFXISprites_Ash, 0x20 },
    { L"Start+A - Electric Palette", 0x1012040, 0x1012060, indexKOFXISprites_Ash, 0x41 },
    { L"Start+A - Darker Palette", 0x1012060, 0x1012080, indexKOFXISprites_Ash, 0x40 },
    { L"Start+A - Super Stuff 2", 0x1012080, 0x10120a0, indexKOFXISprites_Ash, 0x21 },
    { L"Start+A - Character Extra 1", 0x10120a0, 0x10120c0, indexKOFXISprites_Ash, 0x30 },
    { L"Start+A - Character Extra 2", 0x10120c0, 0x10120e0, indexKOFXISprites_Ash, 0x31 },
    { L"Start+A - Character Extra 3", 0x10120e0, 0x1012100, indexKOFXISprites_Ash, 0x32 },
    { L"Start+A - Extra Move 1", 0x1012100, 0x1012120, indexKOFXISprites_Ash, 0x10 },
    { L"Start+A - Extra Move 2", 0x1012120, 0x1012140, indexKOFXISprites_Ash, 0x11 },
    { L"Start+A - Extra Move 3", 0x1012140, 0x1012160, indexKOFXISprites_Ash, 0x12 },
    { L"Start+A - Extra Move 4", 0x1012160, 0x1012180, indexKOFXISprites_Ash, 0x13 },
    { L"Start+A - Extra Move 5", 0x1012180, 0x10121a0, indexKOFXISprites_Ash, 0x14 },
    { L"Start+A - Extra Move 6", 0x10121a0, 0x10121c0, indexKOFXISprites_Ash, 0x15 },
    { L"Start+A - Extra Move 7", 0x10121c0, 0x10121e0, indexKOFXISprites_Ash, 0x16 },
    { L"Start+A - Extra Move 8", 0x10121e0, 0x1012200, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_SB[] =
{
    { L"Ash SB", 0x1012200, 0x1012220, indexKOFXISprites_Ash },
    { L"Start+B - Super Stuff 1", 0x1012220, 0x1012240, indexKOFXISprites_Ash, 0x20 },
    { L"Start+B - Electric Palette", 0x1012240, 0x1012260, indexKOFXISprites_Ash, 0x41 },
    { L"Start+B - Darker Palette", 0x1012260, 0x1012280, indexKOFXISprites_Ash, 0x40 },
    { L"Start+B - Super Stuff 2", 0x1012280, 0x10122a0, indexKOFXISprites_Ash, 0x21 },
    { L"Start+B - Character Extra 1", 0x10122a0, 0x10122c0, indexKOFXISprites_Ash, 0x30 },
    { L"Start+B - Character Extra 2", 0x10122c0, 0x10122e0, indexKOFXISprites_Ash, 0x31 },
    { L"Start+B - Character Extra 3", 0x10122e0, 0x1012300, indexKOFXISprites_Ash, 0x32 },
    { L"Start+B - Extra Move 1", 0x1012300, 0x1012320, indexKOFXISprites_Ash, 0x10 },
    { L"Start+B - Extra Move 2", 0x1012320, 0x1012340, indexKOFXISprites_Ash, 0x11 },
    { L"Start+B - Extra Move 3", 0x1012340, 0x1012360, indexKOFXISprites_Ash, 0x12 },
    { L"Start+B - Extra Move 4", 0x1012360, 0x1012380, indexKOFXISprites_Ash, 0x13 },
    { L"Start+B - Extra Move 5", 0x1012380, 0x10123a0, indexKOFXISprites_Ash, 0x14 },
    { L"Start+B - Extra Move 6", 0x10123a0, 0x10123c0, indexKOFXISprites_Ash, 0x15 },
    { L"Start+B - Extra Move 7", 0x10123c0, 0x10123e0, indexKOFXISprites_Ash, 0x16 },
    { L"Start+B - Extra Move 8", 0x10123e0, 0x1012400, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_SC[] =
{
    { L"Ash SC", 0x1012400, 0x1012420, indexKOFXISprites_Ash },
    { L"Start+C - Super Stuff 1", 0x1012420, 0x1012440, indexKOFXISprites_Ash, 0x20 },
    { L"Start+C - Electric Palette", 0x1012440, 0x1012460, indexKOFXISprites_Ash, 0x41 },
    { L"Start+C - Darker Palette", 0x1012460, 0x1012480, indexKOFXISprites_Ash, 0x40 },
    { L"Start+C - Super Stuff 2", 0x1012480, 0x10124a0, indexKOFXISprites_Ash, 0x21 },
    { L"Start+C - Character Extra 1", 0x10124a0, 0x10124c0, indexKOFXISprites_Ash, 0x30 },
    { L"Start+C - Character Extra 2", 0x10124c0, 0x10124e0, indexKOFXISprites_Ash, 0x31 },
    { L"Start+C - Character Extra 3", 0x10124e0, 0x1012500, indexKOFXISprites_Ash, 0x32 },
    { L"Start+C - Extra Move 1", 0x1012500, 0x1012520, indexKOFXISprites_Ash, 0x10 },
    { L"Start+C - Extra Move 2", 0x1012520, 0x1012540, indexKOFXISprites_Ash, 0x11 },
    { L"Start+C - Extra Move 3", 0x1012540, 0x1012560, indexKOFXISprites_Ash, 0x12 },
    { L"Start+C - Extra Move 4", 0x1012560, 0x1012580, indexKOFXISprites_Ash, 0x13 },
    { L"Start+C - Extra Move 5", 0x1012580, 0x10125a0, indexKOFXISprites_Ash, 0x14 },
    { L"Start+C - Extra Move 6", 0x10125a0, 0x10125c0, indexKOFXISprites_Ash, 0x15 },
    { L"Start+C - Extra Move 7", 0x10125c0, 0x10125e0, indexKOFXISprites_Ash, 0x16 },
    { L"Start+C - Extra Move 8", 0x10125e0, 0x1012600, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ASH_PALETTES_SD[] =
{
    { L"Ash SD", 0x1012600, 0x1012620, indexKOFXISprites_Ash },
    { L"Start+D - Super Stuff 1", 0x1012620, 0x1012640, indexKOFXISprites_Ash, 0x20 },
    { L"Start+D - Electric Palette", 0x1012640, 0x1012660, indexKOFXISprites_Ash, 0x41 },
    { L"Start+D - Darker Palette", 0x1012660, 0x1012680, indexKOFXISprites_Ash, 0x40 },
    { L"Start+D - Super Stuff 2", 0x1012680, 0x10126a0, indexKOFXISprites_Ash, 0x21 },
    { L"Start+D - Character Extra 1", 0x10126a0, 0x10126c0, indexKOFXISprites_Ash, 0x30 },
    { L"Start+D - Character Extra 2", 0x10126c0, 0x10126e0, indexKOFXISprites_Ash, 0x31 },
    { L"Start+D - Character Extra 3", 0x10126e0, 0x1012700, indexKOFXISprites_Ash, 0x32 },
    { L"Start+D - Extra Move 1", 0x1012700, 0x1012720, indexKOFXISprites_Ash, 0x10 },
    { L"Start+D - Extra Move 2", 0x1012720, 0x1012740, indexKOFXISprites_Ash, 0x11 },
    { L"Start+D - Extra Move 3", 0x1012740, 0x1012760, indexKOFXISprites_Ash, 0x12 },
    { L"Start+D - Extra Move 4", 0x1012760, 0x1012780, indexKOFXISprites_Ash, 0x13 },
    { L"Start+D - Extra Move 5", 0x1012780, 0x10127a0, indexKOFXISprites_Ash, 0x14 },
    { L"Start+D - Extra Move 6", 0x10127a0, 0x10127c0, indexKOFXISprites_Ash, 0x15 },
    { L"Start+D - Extra Move 7", 0x10127c0, 0x10127e0, indexKOFXISprites_Ash, 0x16 },
    { L"Start+D - Extra Move 8", 0x10127e0, 0x1012800, indexKOFXISprites_Ash, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_A[] =
{
    { L"Oswald A", 0x11e2800, 0x11e2820, indexKOFXISprites_Oswald },
    { L"A - Super Stuff 1", 0x11e2820, 0x11e2840, indexKOFXISprites_Oswald, 0x20 },
    { L"A - Electric Palette", 0x11e2840, 0x11e2860, indexKOFXISprites_Oswald, 0x41 },
    { L"A - Darker Palette", 0x11e2860, 0x11e2880, indexKOFXISprites_Oswald, 0x40 },
    { L"A - Super Stuff 2", 0x11e2880, 0x11e28a0, indexKOFXISprites_Oswald, 0x21 },
    { L"A - Character Extra 1", 0x11e28a0, 0x11e28c0, indexKOFXISprites_Oswald, 0x30 },
    { L"A - Character Extra 2", 0x11e28c0, 0x11e28e0, indexKOFXISprites_Oswald, 0x31 },
    { L"A - Character Extra 3", 0x11e28e0, 0x11e2900, indexKOFXISprites_Oswald, 0x32 },
    { L"A - Extra Move 1", 0x11e2900, 0x11e2920, indexKOFXISprites_Oswald, 0x10 },
    { L"A - Extra Move 2", 0x11e2920, 0x11e2940, indexKOFXISprites_Oswald, 0x11 },
    { L"A - Extra Move 3", 0x11e2940, 0x11e2960, indexKOFXISprites_Oswald, 0x12 },
    { L"A - Extra Move 4", 0x11e2960, 0x11e2980, indexKOFXISprites_Oswald, 0x13 },
    { L"A - Extra Move 5", 0x11e2980, 0x11e29a0, indexKOFXISprites_Oswald, 0x14 },
    { L"A - Extra Move 6", 0x11e29a0, 0x11e29c0, indexKOFXISprites_Oswald, 0x15 },
    { L"A - Extra Move 7", 0x11e29c0, 0x11e29e0, indexKOFXISprites_Oswald, 0x16 },
    { L"A - Extra Move 8", 0x11e29e0, 0x11e2a00, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_B[] =
{
    { L"Oswald B", 0x11e2a00, 0x11e2a20, indexKOFXISprites_Oswald },
    { L"B - Super Stuff 1", 0x11e2a20, 0x11e2a40, indexKOFXISprites_Oswald, 0x20 },
    { L"B - Electric Palette", 0x11e2a40, 0x11e2a60, indexKOFXISprites_Oswald, 0x41 },
    { L"B - Darker Palette", 0x11e2a60, 0x11e2a80, indexKOFXISprites_Oswald, 0x40 },
    { L"B - Super Stuff 2", 0x11e2a80, 0x11e2aa0, indexKOFXISprites_Oswald, 0x21 },
    { L"B - Character Extra 1", 0x11e2aa0, 0x11e2ac0, indexKOFXISprites_Oswald, 0x30 },
    { L"B - Character Extra 2", 0x11e2ac0, 0x11e2ae0, indexKOFXISprites_Oswald, 0x31 },
    { L"B - Character Extra 3", 0x11e2ae0, 0x11e2b00, indexKOFXISprites_Oswald, 0x32 },
    { L"B - Extra Move 1", 0x11e2b00, 0x11e2b20, indexKOFXISprites_Oswald, 0x10 },
    { L"B - Extra Move 2", 0x11e2b20, 0x11e2b40, indexKOFXISprites_Oswald, 0x11 },
    { L"B - Extra Move 3", 0x11e2b40, 0x11e2b60, indexKOFXISprites_Oswald, 0x12 },
    { L"B - Extra Move 4", 0x11e2b60, 0x11e2b80, indexKOFXISprites_Oswald, 0x13 },
    { L"B - Extra Move 5", 0x11e2b80, 0x11e2ba0, indexKOFXISprites_Oswald, 0x14 },
    { L"B - Extra Move 6", 0x11e2ba0, 0x11e2bc0, indexKOFXISprites_Oswald, 0x15 },
    { L"B - Extra Move 7", 0x11e2bc0, 0x11e2be0, indexKOFXISprites_Oswald, 0x16 },
    { L"B - Extra Move 8", 0x11e2be0, 0x11e2c00, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_C[] =
{
    { L"Oswald C", 0x11e2c00, 0x11e2c20, indexKOFXISprites_Oswald },
    { L"C - Super Stuff 1", 0x11e2c20, 0x11e2c40, indexKOFXISprites_Oswald, 0x20 },
    { L"C - Electric Palette", 0x11e2c40, 0x11e2c60, indexKOFXISprites_Oswald, 0x41 },
    { L"C - Darker Palette", 0x11e2c60, 0x11e2c80, indexKOFXISprites_Oswald, 0x40 },
    { L"C - Super Stuff 2", 0x11e2c80, 0x11e2ca0, indexKOFXISprites_Oswald, 0x21 },
    { L"C - Character Extra 1", 0x11e2ca0, 0x11e2cc0, indexKOFXISprites_Oswald, 0x30 },
    { L"C - Character Extra 2", 0x11e2cc0, 0x11e2ce0, indexKOFXISprites_Oswald, 0x31 },
    { L"C - Character Extra 3", 0x11e2ce0, 0x11e2d00, indexKOFXISprites_Oswald, 0x32 },
    { L"C - Extra Move 1", 0x11e2d00, 0x11e2d20, indexKOFXISprites_Oswald, 0x10 },
    { L"C - Extra Move 2", 0x11e2d20, 0x11e2d40, indexKOFXISprites_Oswald, 0x11 },
    { L"C - Extra Move 3", 0x11e2d40, 0x11e2d60, indexKOFXISprites_Oswald, 0x12 },
    { L"C - Extra Move 4", 0x11e2d60, 0x11e2d80, indexKOFXISprites_Oswald, 0x13 },
    { L"C - Extra Move 5", 0x11e2d80, 0x11e2da0, indexKOFXISprites_Oswald, 0x14 },
    { L"C - Extra Move 6", 0x11e2da0, 0x11e2dc0, indexKOFXISprites_Oswald, 0x15 },
    { L"C - Extra Move 7", 0x11e2dc0, 0x11e2de0, indexKOFXISprites_Oswald, 0x16 },
    { L"C - Extra Move 8", 0x11e2de0, 0x11e2e00, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_D[] =
{
    { L"Oswald D", 0x11e2e00, 0x11e2e20, indexKOFXISprites_Oswald },
    { L"D - Super Stuff 1", 0x11e2e20, 0x11e2e40, indexKOFXISprites_Oswald, 0x20 },
    { L"D - Electric Palette", 0x11e2e40, 0x11e2e60, indexKOFXISprites_Oswald, 0x41 },
    { L"D - Darker Palette", 0x11e2e60, 0x11e2e80, indexKOFXISprites_Oswald, 0x40 },
    { L"D - Super Stuff 2", 0x11e2e80, 0x11e2ea0, indexKOFXISprites_Oswald, 0x21 },
    { L"D - Character Extra 1", 0x11e2ea0, 0x11e2ec0, indexKOFXISprites_Oswald, 0x30 },
    { L"D - Character Extra 2", 0x11e2ec0, 0x11e2ee0, indexKOFXISprites_Oswald, 0x31 },
    { L"D - Character Extra 3", 0x11e2ee0, 0x11e2f00, indexKOFXISprites_Oswald, 0x32 },
    { L"D - Extra Move 1", 0x11e2f00, 0x11e2f20, indexKOFXISprites_Oswald, 0x10 },
    { L"D - Extra Move 2", 0x11e2f20, 0x11e2f40, indexKOFXISprites_Oswald, 0x11 },
    { L"D - Extra Move 3", 0x11e2f40, 0x11e2f60, indexKOFXISprites_Oswald, 0x12 },
    { L"D - Extra Move 4", 0x11e2f60, 0x11e2f80, indexKOFXISprites_Oswald, 0x13 },
    { L"D - Extra Move 5", 0x11e2f80, 0x11e2fa0, indexKOFXISprites_Oswald, 0x14 },
    { L"D - Extra Move 6", 0x11e2fa0, 0x11e2fc0, indexKOFXISprites_Oswald, 0x15 },
    { L"D - Extra Move 7", 0x11e2fc0, 0x11e2fe0, indexKOFXISprites_Oswald, 0x16 },
    { L"D - Extra Move 8", 0x11e2fe0, 0x11e3000, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_EA[] =
{
    { L"Oswald EA", 0x11e3000, 0x11e3020, indexKOFXISprites_Oswald },
    { L"E+A - Super Stuff 1", 0x11e3020, 0x11e3040, indexKOFXISprites_Oswald, 0x20 },
    { L"E+A - Electric Palette", 0x11e3040, 0x11e3060, indexKOFXISprites_Oswald, 0x41 },
    { L"E+A - Darker Palette", 0x11e3060, 0x11e3080, indexKOFXISprites_Oswald, 0x40 },
    { L"E+A - Super Stuff 2", 0x11e3080, 0x11e30a0, indexKOFXISprites_Oswald, 0x21 },
    { L"E+A - Character Extra 1", 0x11e30a0, 0x11e30c0, indexKOFXISprites_Oswald, 0x30 },
    { L"E+A - Character Extra 2", 0x11e30c0, 0x11e30e0, indexKOFXISprites_Oswald, 0x31 },
    { L"E+A - Character Extra 3", 0x11e30e0, 0x11e3100, indexKOFXISprites_Oswald, 0x32 },
    { L"E+A - Extra Move 1", 0x11e3100, 0x11e3120, indexKOFXISprites_Oswald, 0x10 },
    { L"E+A - Extra Move 2", 0x11e3120, 0x11e3140, indexKOFXISprites_Oswald, 0x11 },
    { L"E+A - Extra Move 3", 0x11e3140, 0x11e3160, indexKOFXISprites_Oswald, 0x12 },
    { L"E+A - Extra Move 4", 0x11e3160, 0x11e3180, indexKOFXISprites_Oswald, 0x13 },
    { L"E+A - Extra Move 5", 0x11e3180, 0x11e31a0, indexKOFXISprites_Oswald, 0x14 },
    { L"E+A - Extra Move 6", 0x11e31a0, 0x11e31c0, indexKOFXISprites_Oswald, 0x15 },
    { L"E+A - Extra Move 7", 0x11e31c0, 0x11e31e0, indexKOFXISprites_Oswald, 0x16 },
    { L"E+A - Extra Move 8", 0x11e31e0, 0x11e3200, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_EB[] =
{
    { L"Oswald EB", 0x11e3200, 0x11e3220, indexKOFXISprites_Oswald },
    { L"E+B - Super Stuff 1", 0x11e3220, 0x11e3240, indexKOFXISprites_Oswald, 0x20 },
    { L"E+B - Electric Palette", 0x11e3240, 0x11e3260, indexKOFXISprites_Oswald, 0x41 },
    { L"E+B - Darker Palette", 0x11e3260, 0x11e3280, indexKOFXISprites_Oswald, 0x40 },
    { L"E+B - Super Stuff 2", 0x11e3280, 0x11e32a0, indexKOFXISprites_Oswald, 0x21 },
    { L"E+B - Character Extra 1", 0x11e32a0, 0x11e32c0, indexKOFXISprites_Oswald, 0x30 },
    { L"E+B - Character Extra 2", 0x11e32c0, 0x11e32e0, indexKOFXISprites_Oswald, 0x31 },
    { L"E+B - Character Extra 3", 0x11e32e0, 0x11e3300, indexKOFXISprites_Oswald, 0x32 },
    { L"E+B - Extra Move 1", 0x11e3300, 0x11e3320, indexKOFXISprites_Oswald, 0x10 },
    { L"E+B - Extra Move 2", 0x11e3320, 0x11e3340, indexKOFXISprites_Oswald, 0x11 },
    { L"E+B - Extra Move 3", 0x11e3340, 0x11e3360, indexKOFXISprites_Oswald, 0x12 },
    { L"E+B - Extra Move 4", 0x11e3360, 0x11e3380, indexKOFXISprites_Oswald, 0x13 },
    { L"E+B - Extra Move 5", 0x11e3380, 0x11e33a0, indexKOFXISprites_Oswald, 0x14 },
    { L"E+B - Extra Move 6", 0x11e33a0, 0x11e33c0, indexKOFXISprites_Oswald, 0x15 },
    { L"E+B - Extra Move 7", 0x11e33c0, 0x11e33e0, indexKOFXISprites_Oswald, 0x16 },
    { L"E+B - Extra Move 8", 0x11e33e0, 0x11e3400, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_EC[] =
{
    { L"Oswald EC", 0x11e3400, 0x11e3420, indexKOFXISprites_Oswald },
    { L"E+C - Super Stuff 1", 0x11e3420, 0x11e3440, indexKOFXISprites_Oswald, 0x20 },
    { L"E+C - Electric Palette", 0x11e3440, 0x11e3460, indexKOFXISprites_Oswald, 0x41 },
    { L"E+C - Darker Palette", 0x11e3460, 0x11e3480, indexKOFXISprites_Oswald, 0x40 },
    { L"E+C - Super Stuff 2", 0x11e3480, 0x11e34a0, indexKOFXISprites_Oswald, 0x21 },
    { L"E+C - Character Extra 1", 0x11e34a0, 0x11e34c0, indexKOFXISprites_Oswald, 0x30 },
    { L"E+C - Character Extra 2", 0x11e34c0, 0x11e34e0, indexKOFXISprites_Oswald, 0x31 },
    { L"E+C - Character Extra 3", 0x11e34e0, 0x11e3500, indexKOFXISprites_Oswald, 0x32 },
    { L"E+C - Extra Move 1", 0x11e3500, 0x11e3520, indexKOFXISprites_Oswald, 0x10 },
    { L"E+C - Extra Move 2", 0x11e3520, 0x11e3540, indexKOFXISprites_Oswald, 0x11 },
    { L"E+C - Extra Move 3", 0x11e3540, 0x11e3560, indexKOFXISprites_Oswald, 0x12 },
    { L"E+C - Extra Move 4", 0x11e3560, 0x11e3580, indexKOFXISprites_Oswald, 0x13 },
    { L"E+C - Extra Move 5", 0x11e3580, 0x11e35a0, indexKOFXISprites_Oswald, 0x14 },
    { L"E+C - Extra Move 6", 0x11e35a0, 0x11e35c0, indexKOFXISprites_Oswald, 0x15 },
    { L"E+C - Extra Move 7", 0x11e35c0, 0x11e35e0, indexKOFXISprites_Oswald, 0x16 },
    { L"E+C - Extra Move 8", 0x11e35e0, 0x11e3600, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_ED[] =
{
    { L"Oswald ED", 0x11e3600, 0x11e3620, indexKOFXISprites_Oswald },
    { L"E+D - Super Stuff 1", 0x11e3620, 0x11e3640, indexKOFXISprites_Oswald, 0x20 },
    { L"E+D - Electric Palette", 0x11e3640, 0x11e3660, indexKOFXISprites_Oswald, 0x41 },
    { L"E+D - Darker Palette", 0x11e3660, 0x11e3680, indexKOFXISprites_Oswald, 0x40 },
    { L"E+D - Super Stuff 2", 0x11e3680, 0x11e36a0, indexKOFXISprites_Oswald, 0x21 },
    { L"E+D - Character Extra 1", 0x11e36a0, 0x11e36c0, indexKOFXISprites_Oswald, 0x30 },
    { L"E+D - Character Extra 2", 0x11e36c0, 0x11e36e0, indexKOFXISprites_Oswald, 0x31 },
    { L"E+D - Character Extra 3", 0x11e36e0, 0x11e3700, indexKOFXISprites_Oswald, 0x32 },
    { L"E+D - Extra Move 1", 0x11e3700, 0x11e3720, indexKOFXISprites_Oswald, 0x10 },
    { L"E+D - Extra Move 2", 0x11e3720, 0x11e3740, indexKOFXISprites_Oswald, 0x11 },
    { L"E+D - Extra Move 3", 0x11e3740, 0x11e3760, indexKOFXISprites_Oswald, 0x12 },
    { L"E+D - Extra Move 4", 0x11e3760, 0x11e3780, indexKOFXISprites_Oswald, 0x13 },
    { L"E+D - Extra Move 5", 0x11e3780, 0x11e37a0, indexKOFXISprites_Oswald, 0x14 },
    { L"E+D - Extra Move 6", 0x11e37a0, 0x11e37c0, indexKOFXISprites_Oswald, 0x15 },
    { L"E+D - Extra Move 7", 0x11e37c0, 0x11e37e0, indexKOFXISprites_Oswald, 0x16 },
    { L"E+D - Extra Move 8", 0x11e37e0, 0x11e3800, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_SA[] =
{
    { L"Oswald SA", 0x11e3800, 0x11e3820, indexKOFXISprites_Oswald },
    { L"Start+A - Super Stuff 1", 0x11e3820, 0x11e3840, indexKOFXISprites_Oswald, 0x20 },
    { L"Start+A - Electric Palette", 0x11e3840, 0x11e3860, indexKOFXISprites_Oswald, 0x41 },
    { L"Start+A - Darker Palette", 0x11e3860, 0x11e3880, indexKOFXISprites_Oswald, 0x40 },
    { L"Start+A - Super Stuff 2", 0x11e3880, 0x11e38a0, indexKOFXISprites_Oswald, 0x21 },
    { L"Start+A - Character Extra 1", 0x11e38a0, 0x11e38c0, indexKOFXISprites_Oswald, 0x30 },
    { L"Start+A - Character Extra 2", 0x11e38c0, 0x11e38e0, indexKOFXISprites_Oswald, 0x31 },
    { L"Start+A - Character Extra 3", 0x11e38e0, 0x11e3900, indexKOFXISprites_Oswald, 0x32 },
    { L"Start+A - Extra Move 1", 0x11e3900, 0x11e3920, indexKOFXISprites_Oswald, 0x10 },
    { L"Start+A - Extra Move 2", 0x11e3920, 0x11e3940, indexKOFXISprites_Oswald, 0x11 },
    { L"Start+A - Extra Move 3", 0x11e3940, 0x11e3960, indexKOFXISprites_Oswald, 0x12 },
    { L"Start+A - Extra Move 4", 0x11e3960, 0x11e3980, indexKOFXISprites_Oswald, 0x13 },
    { L"Start+A - Extra Move 5", 0x11e3980, 0x11e39a0, indexKOFXISprites_Oswald, 0x14 },
    { L"Start+A - Extra Move 6", 0x11e39a0, 0x11e39c0, indexKOFXISprites_Oswald, 0x15 },
    { L"Start+A - Extra Move 7", 0x11e39c0, 0x11e39e0, indexKOFXISprites_Oswald, 0x16 },
    { L"Start+A - Extra Move 8", 0x11e39e0, 0x11e3a00, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_SB[] =
{
    { L"Oswald SB", 0x11e3a00, 0x11e3a20, indexKOFXISprites_Oswald },
    { L"Start+B - Super Stuff 1", 0x11e3a20, 0x11e3a40, indexKOFXISprites_Oswald, 0x20 },
    { L"Start+B - Electric Palette", 0x11e3a40, 0x11e3a60, indexKOFXISprites_Oswald, 0x41 },
    { L"Start+B - Darker Palette", 0x11e3a60, 0x11e3a80, indexKOFXISprites_Oswald, 0x40 },
    { L"Start+B - Super Stuff 2", 0x11e3a80, 0x11e3aa0, indexKOFXISprites_Oswald, 0x21 },
    { L"Start+B - Character Extra 1", 0x11e3aa0, 0x11e3ac0, indexKOFXISprites_Oswald, 0x30 },
    { L"Start+B - Character Extra 2", 0x11e3ac0, 0x11e3ae0, indexKOFXISprites_Oswald, 0x31 },
    { L"Start+B - Character Extra 3", 0x11e3ae0, 0x11e3b00, indexKOFXISprites_Oswald, 0x32 },
    { L"Start+B - Extra Move 1", 0x11e3b00, 0x11e3b20, indexKOFXISprites_Oswald, 0x10 },
    { L"Start+B - Extra Move 2", 0x11e3b20, 0x11e3b40, indexKOFXISprites_Oswald, 0x11 },
    { L"Start+B - Extra Move 3", 0x11e3b40, 0x11e3b60, indexKOFXISprites_Oswald, 0x12 },
    { L"Start+B - Extra Move 4", 0x11e3b60, 0x11e3b80, indexKOFXISprites_Oswald, 0x13 },
    { L"Start+B - Extra Move 5", 0x11e3b80, 0x11e3ba0, indexKOFXISprites_Oswald, 0x14 },
    { L"Start+B - Extra Move 6", 0x11e3ba0, 0x11e3bc0, indexKOFXISprites_Oswald, 0x15 },
    { L"Start+B - Extra Move 7", 0x11e3bc0, 0x11e3be0, indexKOFXISprites_Oswald, 0x16 },
    { L"Start+B - Extra Move 8", 0x11e3be0, 0x11e3c00, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_SC[] =
{
    { L"Oswald SC", 0x11e3c00, 0x11e3c20, indexKOFXISprites_Oswald },
    { L"Start+C - Super Stuff 1", 0x11e3c20, 0x11e3c40, indexKOFXISprites_Oswald, 0x20 },
    { L"Start+C - Electric Palette", 0x11e3c40, 0x11e3c60, indexKOFXISprites_Oswald, 0x41 },
    { L"Start+C - Darker Palette", 0x11e3c60, 0x11e3c80, indexKOFXISprites_Oswald, 0x40 },
    { L"Start+C - Super Stuff 2", 0x11e3c80, 0x11e3ca0, indexKOFXISprites_Oswald, 0x21 },
    { L"Start+C - Character Extra 1", 0x11e3ca0, 0x11e3cc0, indexKOFXISprites_Oswald, 0x30 },
    { L"Start+C - Character Extra 2", 0x11e3cc0, 0x11e3ce0, indexKOFXISprites_Oswald, 0x31 },
    { L"Start+C - Character Extra 3", 0x11e3ce0, 0x11e3d00, indexKOFXISprites_Oswald, 0x32 },
    { L"Start+C - Extra Move 1", 0x11e3d00, 0x11e3d20, indexKOFXISprites_Oswald, 0x10 },
    { L"Start+C - Extra Move 2", 0x11e3d20, 0x11e3d40, indexKOFXISprites_Oswald, 0x11 },
    { L"Start+C - Extra Move 3", 0x11e3d40, 0x11e3d60, indexKOFXISprites_Oswald, 0x12 },
    { L"Start+C - Extra Move 4", 0x11e3d60, 0x11e3d80, indexKOFXISprites_Oswald, 0x13 },
    { L"Start+C - Extra Move 5", 0x11e3d80, 0x11e3da0, indexKOFXISprites_Oswald, 0x14 },
    { L"Start+C - Extra Move 6", 0x11e3da0, 0x11e3dc0, indexKOFXISprites_Oswald, 0x15 },
    { L"Start+C - Extra Move 7", 0x11e3dc0, 0x11e3de0, indexKOFXISprites_Oswald, 0x16 },
    { L"Start+C - Extra Move 8", 0x11e3de0, 0x11e3e00, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_OSWALD_PALETTES_SD[] =
{
    { L"Oswald SD", 0x11e3e00, 0x11e3e20, indexKOFXISprites_Oswald },
    { L"Start+D - Super Stuff 1", 0x11e3e20, 0x11e3e40, indexKOFXISprites_Oswald, 0x20 },
    { L"Start+D - Electric Palette", 0x11e3e40, 0x11e3e60, indexKOFXISprites_Oswald, 0x41 },
    { L"Start+D - Darker Palette", 0x11e3e60, 0x11e3e80, indexKOFXISprites_Oswald, 0x40 },
    { L"Start+D - Super Stuff 2", 0x11e3e80, 0x11e3ea0, indexKOFXISprites_Oswald, 0x21 },
    { L"Start+D - Character Extra 1", 0x11e3ea0, 0x11e3ec0, indexKOFXISprites_Oswald, 0x30 },
    { L"Start+D - Character Extra 2", 0x11e3ec0, 0x11e3ee0, indexKOFXISprites_Oswald, 0x31 },
    { L"Start+D - Character Extra 3", 0x11e3ee0, 0x11e3f00, indexKOFXISprites_Oswald, 0x32 },
    { L"Start+D - Extra Move 1", 0x11e3f00, 0x11e3f20, indexKOFXISprites_Oswald, 0x10 },
    { L"Start+D - Extra Move 2", 0x11e3f20, 0x11e3f40, indexKOFXISprites_Oswald, 0x11 },
    { L"Start+D - Extra Move 3", 0x11e3f40, 0x11e3f60, indexKOFXISprites_Oswald, 0x12 },
    { L"Start+D - Extra Move 4", 0x11e3f60, 0x11e3f80, indexKOFXISprites_Oswald, 0x13 },
    { L"Start+D - Extra Move 5", 0x11e3f80, 0x11e3fa0, indexKOFXISprites_Oswald, 0x14 },
    { L"Start+D - Extra Move 6", 0x11e3fa0, 0x11e3fc0, indexKOFXISprites_Oswald, 0x15 },
    { L"Start+D - Extra Move 7", 0x11e3fc0, 0x11e3fe0, indexKOFXISprites_Oswald, 0x16 },
    { L"Start+D - Extra Move 8", 0x11e3fe0, 0x11e4000, indexKOFXISprites_Oswald, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_A[] =
{
    { L"Shen A", 0x13ab000, 0x13ab020, indexKOFXISprites_Shen },
    { L"A - Super Stuff 1", 0x13ab020, 0x13ab040, indexKOFXISprites_Shen, 0x20 },
    { L"A - Electric Palette", 0x13ab040, 0x13ab060, indexKOFXISprites_Shen, 0x41 },
    { L"A - Darker Palette", 0x13ab060, 0x13ab080, indexKOFXISprites_Shen, 0x40 },
    { L"A - Super Stuff 2", 0x13ab080, 0x13ab0a0, indexKOFXISprites_Shen, 0x21 },
    { L"A - Character Extra 1", 0x13ab0a0, 0x13ab0c0, indexKOFXISprites_Shen, 0x30 },
    { L"A - Character Extra 2", 0x13ab0c0, 0x13ab0e0, indexKOFXISprites_Shen, 0x31 },
    { L"A - Character Extra 3", 0x13ab0e0, 0x13ab100, indexKOFXISprites_Shen, 0x32 },
    { L"A - Extra Move 1", 0x13ab100, 0x13ab120, indexKOFXISprites_Shen, 0x10 },
    { L"A - Extra Move 2", 0x13ab120, 0x13ab140, indexKOFXISprites_Shen, 0x11 },
    { L"A - Extra Move 3", 0x13ab140, 0x13ab160, indexKOFXISprites_Shen, 0x12 },
    { L"A - Extra Move 4", 0x13ab160, 0x13ab180, indexKOFXISprites_Shen, 0x13 },
    { L"A - Extra Move 5", 0x13ab180, 0x13ab1a0, indexKOFXISprites_Shen, 0x14 },
    { L"A - Extra Move 6", 0x13ab1a0, 0x13ab1c0, indexKOFXISprites_Shen, 0x15 },
    { L"A - Extra Move 7", 0x13ab1c0, 0x13ab1e0, indexKOFXISprites_Shen, 0x16 },
    { L"A - Extra Move 8", 0x13ab1e0, 0x13ab200, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_B[] =
{
    { L"Shen B", 0x13ab200, 0x13ab220, indexKOFXISprites_Shen },
    { L"B - Super Stuff 1", 0x13ab220, 0x13ab240, indexKOFXISprites_Shen, 0x20 },
    { L"B - Electric Palette", 0x13ab240, 0x13ab260, indexKOFXISprites_Shen, 0x41 },
    { L"B - Darker Palette", 0x13ab260, 0x13ab280, indexKOFXISprites_Shen, 0x40 },
    { L"B - Super Stuff 2", 0x13ab280, 0x13ab2a0, indexKOFXISprites_Shen, 0x21 },
    { L"B - Character Extra 1", 0x13ab2a0, 0x13ab2c0, indexKOFXISprites_Shen, 0x30 },
    { L"B - Character Extra 2", 0x13ab2c0, 0x13ab2e0, indexKOFXISprites_Shen, 0x31 },
    { L"B - Character Extra 3", 0x13ab2e0, 0x13ab300, indexKOFXISprites_Shen, 0x32 },
    { L"B - Extra Move 1", 0x13ab300, 0x13ab320, indexKOFXISprites_Shen, 0x10 },
    { L"B - Extra Move 2", 0x13ab320, 0x13ab340, indexKOFXISprites_Shen, 0x11 },
    { L"B - Extra Move 3", 0x13ab340, 0x13ab360, indexKOFXISprites_Shen, 0x12 },
    { L"B - Extra Move 4", 0x13ab360, 0x13ab380, indexKOFXISprites_Shen, 0x13 },
    { L"B - Extra Move 5", 0x13ab380, 0x13ab3a0, indexKOFXISprites_Shen, 0x14 },
    { L"B - Extra Move 6", 0x13ab3a0, 0x13ab3c0, indexKOFXISprites_Shen, 0x15 },
    { L"B - Extra Move 7", 0x13ab3c0, 0x13ab3e0, indexKOFXISprites_Shen, 0x16 },
    { L"B - Extra Move 8", 0x13ab3e0, 0x13ab400, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_C[] =
{
    { L"Shen C", 0x13ab400, 0x13ab420, indexKOFXISprites_Shen },
    { L"C - Super Stuff 1", 0x13ab420, 0x13ab440, indexKOFXISprites_Shen, 0x20 },
    { L"C - Electric Palette", 0x13ab440, 0x13ab460, indexKOFXISprites_Shen, 0x41 },
    { L"C - Darker Palette", 0x13ab460, 0x13ab480, indexKOFXISprites_Shen, 0x40 },
    { L"C - Super Stuff 2", 0x13ab480, 0x13ab4a0, indexKOFXISprites_Shen, 0x21 },
    { L"C - Character Extra 1", 0x13ab4a0, 0x13ab4c0, indexKOFXISprites_Shen, 0x30 },
    { L"C - Character Extra 2", 0x13ab4c0, 0x13ab4e0, indexKOFXISprites_Shen, 0x31 },
    { L"C - Character Extra 3", 0x13ab4e0, 0x13ab500, indexKOFXISprites_Shen, 0x32 },
    { L"C - Extra Move 1", 0x13ab500, 0x13ab520, indexKOFXISprites_Shen, 0x10 },
    { L"C - Extra Move 2", 0x13ab520, 0x13ab540, indexKOFXISprites_Shen, 0x11 },
    { L"C - Extra Move 3", 0x13ab540, 0x13ab560, indexKOFXISprites_Shen, 0x12 },
    { L"C - Extra Move 4", 0x13ab560, 0x13ab580, indexKOFXISprites_Shen, 0x13 },
    { L"C - Extra Move 5", 0x13ab580, 0x13ab5a0, indexKOFXISprites_Shen, 0x14 },
    { L"C - Extra Move 6", 0x13ab5a0, 0x13ab5c0, indexKOFXISprites_Shen, 0x15 },
    { L"C - Extra Move 7", 0x13ab5c0, 0x13ab5e0, indexKOFXISprites_Shen, 0x16 },
    { L"C - Extra Move 8", 0x13ab5e0, 0x13ab600, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_D[] =
{
    { L"Shen D", 0x13ab600, 0x13ab620, indexKOFXISprites_Shen },
    { L"D - Super Stuff 1", 0x13ab620, 0x13ab640, indexKOFXISprites_Shen, 0x20 },
    { L"D - Electric Palette", 0x13ab640, 0x13ab660, indexKOFXISprites_Shen, 0x41 },
    { L"D - Darker Palette", 0x13ab660, 0x13ab680, indexKOFXISprites_Shen, 0x40 },
    { L"D - Super Stuff 2", 0x13ab680, 0x13ab6a0, indexKOFXISprites_Shen, 0x21 },
    { L"D - Character Extra 1", 0x13ab6a0, 0x13ab6c0, indexKOFXISprites_Shen, 0x30 },
    { L"D - Character Extra 2", 0x13ab6c0, 0x13ab6e0, indexKOFXISprites_Shen, 0x31 },
    { L"D - Character Extra 3", 0x13ab6e0, 0x13ab700, indexKOFXISprites_Shen, 0x32 },
    { L"D - Extra Move 1", 0x13ab700, 0x13ab720, indexKOFXISprites_Shen, 0x10 },
    { L"D - Extra Move 2", 0x13ab720, 0x13ab740, indexKOFXISprites_Shen, 0x11 },
    { L"D - Extra Move 3", 0x13ab740, 0x13ab760, indexKOFXISprites_Shen, 0x12 },
    { L"D - Extra Move 4", 0x13ab760, 0x13ab780, indexKOFXISprites_Shen, 0x13 },
    { L"D - Extra Move 5", 0x13ab780, 0x13ab7a0, indexKOFXISprites_Shen, 0x14 },
    { L"D - Extra Move 6", 0x13ab7a0, 0x13ab7c0, indexKOFXISprites_Shen, 0x15 },
    { L"D - Extra Move 7", 0x13ab7c0, 0x13ab7e0, indexKOFXISprites_Shen, 0x16 },
    { L"D - Extra Move 8", 0x13ab7e0, 0x13ab800, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_EA[] =
{
    { L"Shen EA", 0x13ab800, 0x13ab820, indexKOFXISprites_Shen },
    { L"E+A - Super Stuff 1", 0x13ab820, 0x13ab840, indexKOFXISprites_Shen, 0x20 },
    { L"E+A - Electric Palette", 0x13ab840, 0x13ab860, indexKOFXISprites_Shen, 0x41 },
    { L"E+A - Darker Palette", 0x13ab860, 0x13ab880, indexKOFXISprites_Shen, 0x40 },
    { L"E+A - Super Stuff 2", 0x13ab880, 0x13ab8a0, indexKOFXISprites_Shen, 0x21 },
    { L"E+A - Character Extra 1", 0x13ab8a0, 0x13ab8c0, indexKOFXISprites_Shen, 0x30 },
    { L"E+A - Character Extra 2", 0x13ab8c0, 0x13ab8e0, indexKOFXISprites_Shen, 0x31 },
    { L"E+A - Character Extra 3", 0x13ab8e0, 0x13ab900, indexKOFXISprites_Shen, 0x32 },
    { L"E+A - Extra Move 1", 0x13ab900, 0x13ab920, indexKOFXISprites_Shen, 0x10 },
    { L"E+A - Extra Move 2", 0x13ab920, 0x13ab940, indexKOFXISprites_Shen, 0x11 },
    { L"E+A - Extra Move 3", 0x13ab940, 0x13ab960, indexKOFXISprites_Shen, 0x12 },
    { L"E+A - Extra Move 4", 0x13ab960, 0x13ab980, indexKOFXISprites_Shen, 0x13 },
    { L"E+A - Extra Move 5", 0x13ab980, 0x13ab9a0, indexKOFXISprites_Shen, 0x14 },
    { L"E+A - Extra Move 6", 0x13ab9a0, 0x13ab9c0, indexKOFXISprites_Shen, 0x15 },
    { L"E+A - Extra Move 7", 0x13ab9c0, 0x13ab9e0, indexKOFXISprites_Shen, 0x16 },
    { L"E+A - Extra Move 8", 0x13ab9e0, 0x13aba00, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_EB[] =
{
    { L"Shen EB", 0x13aba00, 0x13aba20, indexKOFXISprites_Shen },
    { L"E+B - Super Stuff 1", 0x13aba20, 0x13aba40, indexKOFXISprites_Shen, 0x20 },
    { L"E+B - Electric Palette", 0x13aba40, 0x13aba60, indexKOFXISprites_Shen, 0x41 },
    { L"E+B - Darker Palette", 0x13aba60, 0x13aba80, indexKOFXISprites_Shen, 0x40 },
    { L"E+B - Super Stuff 2", 0x13aba80, 0x13abaa0, indexKOFXISprites_Shen, 0x21 },
    { L"E+B - Character Extra 1", 0x13abaa0, 0x13abac0, indexKOFXISprites_Shen, 0x30 },
    { L"E+B - Character Extra 2", 0x13abac0, 0x13abae0, indexKOFXISprites_Shen, 0x31 },
    { L"E+B - Character Extra 3", 0x13abae0, 0x13abb00, indexKOFXISprites_Shen, 0x32 },
    { L"E+B - Extra Move 1", 0x13abb00, 0x13abb20, indexKOFXISprites_Shen, 0x10 },
    { L"E+B - Extra Move 2", 0x13abb20, 0x13abb40, indexKOFXISprites_Shen, 0x11 },
    { L"E+B - Extra Move 3", 0x13abb40, 0x13abb60, indexKOFXISprites_Shen, 0x12 },
    { L"E+B - Extra Move 4", 0x13abb60, 0x13abb80, indexKOFXISprites_Shen, 0x13 },
    { L"E+B - Extra Move 5", 0x13abb80, 0x13abba0, indexKOFXISprites_Shen, 0x14 },
    { L"E+B - Extra Move 6", 0x13abba0, 0x13abbc0, indexKOFXISprites_Shen, 0x15 },
    { L"E+B - Extra Move 7", 0x13abbc0, 0x13abbe0, indexKOFXISprites_Shen, 0x16 },
    { L"E+B - Extra Move 8", 0x13abbe0, 0x13abc00, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_EC[] =
{
    { L"Shen EC", 0x13abc00, 0x13abc20, indexKOFXISprites_Shen },
    { L"E+C - Super Stuff 1", 0x13abc20, 0x13abc40, indexKOFXISprites_Shen, 0x20 },
    { L"E+C - Electric Palette", 0x13abc40, 0x13abc60, indexKOFXISprites_Shen, 0x41 },
    { L"E+C - Darker Palette", 0x13abc60, 0x13abc80, indexKOFXISprites_Shen, 0x40 },
    { L"E+C - Super Stuff 2", 0x13abc80, 0x13abca0, indexKOFXISprites_Shen, 0x21 },
    { L"E+C - Character Extra 1", 0x13abca0, 0x13abcc0, indexKOFXISprites_Shen, 0x30 },
    { L"E+C - Character Extra 2", 0x13abcc0, 0x13abce0, indexKOFXISprites_Shen, 0x31 },
    { L"E+C - Character Extra 3", 0x13abce0, 0x13abd00, indexKOFXISprites_Shen, 0x32 },
    { L"E+C - Extra Move 1", 0x13abd00, 0x13abd20, indexKOFXISprites_Shen, 0x10 },
    { L"E+C - Extra Move 2", 0x13abd20, 0x13abd40, indexKOFXISprites_Shen, 0x11 },
    { L"E+C - Extra Move 3", 0x13abd40, 0x13abd60, indexKOFXISprites_Shen, 0x12 },
    { L"E+C - Extra Move 4", 0x13abd60, 0x13abd80, indexKOFXISprites_Shen, 0x13 },
    { L"E+C - Extra Move 5", 0x13abd80, 0x13abda0, indexKOFXISprites_Shen, 0x14 },
    { L"E+C - Extra Move 6", 0x13abda0, 0x13abdc0, indexKOFXISprites_Shen, 0x15 },
    { L"E+C - Extra Move 7", 0x13abdc0, 0x13abde0, indexKOFXISprites_Shen, 0x16 },
    { L"E+C - Extra Move 8", 0x13abde0, 0x13abe00, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_ED[] =
{
    { L"Shen ED", 0x13abe00, 0x13abe20, indexKOFXISprites_Shen },
    { L"E+D - Super Stuff 1", 0x13abe20, 0x13abe40, indexKOFXISprites_Shen, 0x20 },
    { L"E+D - Electric Palette", 0x13abe40, 0x13abe60, indexKOFXISprites_Shen, 0x41 },
    { L"E+D - Darker Palette", 0x13abe60, 0x13abe80, indexKOFXISprites_Shen, 0x40 },
    { L"E+D - Super Stuff 2", 0x13abe80, 0x13abea0, indexKOFXISprites_Shen, 0x21 },
    { L"E+D - Character Extra 1", 0x13abea0, 0x13abec0, indexKOFXISprites_Shen, 0x30 },
    { L"E+D - Character Extra 2", 0x13abec0, 0x13abee0, indexKOFXISprites_Shen, 0x31 },
    { L"E+D - Character Extra 3", 0x13abee0, 0x13abf00, indexKOFXISprites_Shen, 0x32 },
    { L"E+D - Extra Move 1", 0x13abf00, 0x13abf20, indexKOFXISprites_Shen, 0x10 },
    { L"E+D - Extra Move 2", 0x13abf20, 0x13abf40, indexKOFXISprites_Shen, 0x11 },
    { L"E+D - Extra Move 3", 0x13abf40, 0x13abf60, indexKOFXISprites_Shen, 0x12 },
    { L"E+D - Extra Move 4", 0x13abf60, 0x13abf80, indexKOFXISprites_Shen, 0x13 },
    { L"E+D - Extra Move 5", 0x13abf80, 0x13abfa0, indexKOFXISprites_Shen, 0x14 },
    { L"E+D - Extra Move 6", 0x13abfa0, 0x13abfc0, indexKOFXISprites_Shen, 0x15 },
    { L"E+D - Extra Move 7", 0x13abfc0, 0x13abfe0, indexKOFXISprites_Shen, 0x16 },
    { L"E+D - Extra Move 8", 0x13abfe0, 0x13ac000, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_SA[] =
{
    { L"Shen SA", 0x13ac000, 0x13ac020, indexKOFXISprites_Shen },
    { L"Start+A - Super Stuff 1", 0x13ac020, 0x13ac040, indexKOFXISprites_Shen, 0x20 },
    { L"Start+A - Electric Palette", 0x13ac040, 0x13ac060, indexKOFXISprites_Shen, 0x41 },
    { L"Start+A - Darker Palette", 0x13ac060, 0x13ac080, indexKOFXISprites_Shen, 0x40 },
    { L"Start+A - Super Stuff 2", 0x13ac080, 0x13ac0a0, indexKOFXISprites_Shen, 0x21 },
    { L"Start+A - Character Extra 1", 0x13ac0a0, 0x13ac0c0, indexKOFXISprites_Shen, 0x30 },
    { L"Start+A - Character Extra 2", 0x13ac0c0, 0x13ac0e0, indexKOFXISprites_Shen, 0x31 },
    { L"Start+A - Character Extra 3", 0x13ac0e0, 0x13ac100, indexKOFXISprites_Shen, 0x32 },
    { L"Start+A - Extra Move 1", 0x13ac100, 0x13ac120, indexKOFXISprites_Shen, 0x10 },
    { L"Start+A - Extra Move 2", 0x13ac120, 0x13ac140, indexKOFXISprites_Shen, 0x11 },
    { L"Start+A - Extra Move 3", 0x13ac140, 0x13ac160, indexKOFXISprites_Shen, 0x12 },
    { L"Start+A - Extra Move 4", 0x13ac160, 0x13ac180, indexKOFXISprites_Shen, 0x13 },
    { L"Start+A - Extra Move 5", 0x13ac180, 0x13ac1a0, indexKOFXISprites_Shen, 0x14 },
    { L"Start+A - Extra Move 6", 0x13ac1a0, 0x13ac1c0, indexKOFXISprites_Shen, 0x15 },
    { L"Start+A - Extra Move 7", 0x13ac1c0, 0x13ac1e0, indexKOFXISprites_Shen, 0x16 },
    { L"Start+A - Extra Move 8", 0x13ac1e0, 0x13ac200, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_SB[] =
{
    { L"Shen SB", 0x13ac200, 0x13ac220, indexKOFXISprites_Shen },
    { L"Start+B - Super Stuff 1", 0x13ac220, 0x13ac240, indexKOFXISprites_Shen, 0x20 },
    { L"Start+B - Electric Palette", 0x13ac240, 0x13ac260, indexKOFXISprites_Shen, 0x41 },
    { L"Start+B - Darker Palette", 0x13ac260, 0x13ac280, indexKOFXISprites_Shen, 0x40 },
    { L"Start+B - Super Stuff 2", 0x13ac280, 0x13ac2a0, indexKOFXISprites_Shen, 0x21 },
    { L"Start+B - Character Extra 1", 0x13ac2a0, 0x13ac2c0, indexKOFXISprites_Shen, 0x30 },
    { L"Start+B - Character Extra 2", 0x13ac2c0, 0x13ac2e0, indexKOFXISprites_Shen, 0x31 },
    { L"Start+B - Character Extra 3", 0x13ac2e0, 0x13ac300, indexKOFXISprites_Shen, 0x32 },
    { L"Start+B - Extra Move 1", 0x13ac300, 0x13ac320, indexKOFXISprites_Shen, 0x10 },
    { L"Start+B - Extra Move 2", 0x13ac320, 0x13ac340, indexKOFXISprites_Shen, 0x11 },
    { L"Start+B - Extra Move 3", 0x13ac340, 0x13ac360, indexKOFXISprites_Shen, 0x12 },
    { L"Start+B - Extra Move 4", 0x13ac360, 0x13ac380, indexKOFXISprites_Shen, 0x13 },
    { L"Start+B - Extra Move 5", 0x13ac380, 0x13ac3a0, indexKOFXISprites_Shen, 0x14 },
    { L"Start+B - Extra Move 6", 0x13ac3a0, 0x13ac3c0, indexKOFXISprites_Shen, 0x15 },
    { L"Start+B - Extra Move 7", 0x13ac3c0, 0x13ac3e0, indexKOFXISprites_Shen, 0x16 },
    { L"Start+B - Extra Move 8", 0x13ac3e0, 0x13ac400, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_SC[] =
{
    { L"Shen SC", 0x13ac400, 0x13ac420, indexKOFXISprites_Shen },
    { L"Start+C - Super Stuff 1", 0x13ac420, 0x13ac440, indexKOFXISprites_Shen, 0x20 },
    { L"Start+C - Electric Palette", 0x13ac440, 0x13ac460, indexKOFXISprites_Shen, 0x41 },
    { L"Start+C - Darker Palette", 0x13ac460, 0x13ac480, indexKOFXISprites_Shen, 0x40 },
    { L"Start+C - Super Stuff 2", 0x13ac480, 0x13ac4a0, indexKOFXISprites_Shen, 0x21 },
    { L"Start+C - Character Extra 1", 0x13ac4a0, 0x13ac4c0, indexKOFXISprites_Shen, 0x30 },
    { L"Start+C - Character Extra 2", 0x13ac4c0, 0x13ac4e0, indexKOFXISprites_Shen, 0x31 },
    { L"Start+C - Character Extra 3", 0x13ac4e0, 0x13ac500, indexKOFXISprites_Shen, 0x32 },
    { L"Start+C - Extra Move 1", 0x13ac500, 0x13ac520, indexKOFXISprites_Shen, 0x10 },
    { L"Start+C - Extra Move 2", 0x13ac520, 0x13ac540, indexKOFXISprites_Shen, 0x11 },
    { L"Start+C - Extra Move 3", 0x13ac540, 0x13ac560, indexKOFXISprites_Shen, 0x12 },
    { L"Start+C - Extra Move 4", 0x13ac560, 0x13ac580, indexKOFXISprites_Shen, 0x13 },
    { L"Start+C - Extra Move 5", 0x13ac580, 0x13ac5a0, indexKOFXISprites_Shen, 0x14 },
    { L"Start+C - Extra Move 6", 0x13ac5a0, 0x13ac5c0, indexKOFXISprites_Shen, 0x15 },
    { L"Start+C - Extra Move 7", 0x13ac5c0, 0x13ac5e0, indexKOFXISprites_Shen, 0x16 },
    { L"Start+C - Extra Move 8", 0x13ac5e0, 0x13ac600, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHEN_PALETTES_SD[] =
{
    { L"Shen SD", 0x13ac600, 0x13ac620, indexKOFXISprites_Shen },
    { L"Start+D - Super Stuff 1", 0x13ac620, 0x13ac640, indexKOFXISprites_Shen, 0x20 },
    { L"Start+D - Electric Palette", 0x13ac640, 0x13ac660, indexKOFXISprites_Shen, 0x41 },
    { L"Start+D - Darker Palette", 0x13ac660, 0x13ac680, indexKOFXISprites_Shen, 0x40 },
    { L"Start+D - Super Stuff 2", 0x13ac680, 0x13ac6a0, indexKOFXISprites_Shen, 0x21 },
    { L"Start+D - Character Extra 1", 0x13ac6a0, 0x13ac6c0, indexKOFXISprites_Shen, 0x30 },
    { L"Start+D - Character Extra 2", 0x13ac6c0, 0x13ac6e0, indexKOFXISprites_Shen, 0x31 },
    { L"Start+D - Character Extra 3", 0x13ac6e0, 0x13ac700, indexKOFXISprites_Shen, 0x32 },
    { L"Start+D - Extra Move 1", 0x13ac700, 0x13ac720, indexKOFXISprites_Shen, 0x10 },
    { L"Start+D - Extra Move 2", 0x13ac720, 0x13ac740, indexKOFXISprites_Shen, 0x11 },
    { L"Start+D - Extra Move 3", 0x13ac740, 0x13ac760, indexKOFXISprites_Shen, 0x12 },
    { L"Start+D - Extra Move 4", 0x13ac760, 0x13ac780, indexKOFXISprites_Shen, 0x13 },
    { L"Start+D - Extra Move 5", 0x13ac780, 0x13ac7a0, indexKOFXISprites_Shen, 0x14 },
    { L"Start+D - Extra Move 6", 0x13ac7a0, 0x13ac7c0, indexKOFXISprites_Shen, 0x15 },
    { L"Start+D - Extra Move 7", 0x13ac7c0, 0x13ac7e0, indexKOFXISprites_Shen, 0x16 },
    { L"Start+D - Extra Move 8", 0x13ac7e0, 0x13ac800, indexKOFXISprites_Shen, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_A[] =
{
    { L"Elizabeth A", 0x1522800, 0x1522820, indexKOFXISprites_Elizabeth },
    { L"A - Super Stuff 1", 0x1522820, 0x1522840, indexKOFXISprites_Elizabeth, 0x20 },
    { L"A - Electric Palette", 0x1522840, 0x1522860, indexKOFXISprites_Elizabeth, 0x41 },
    { L"A - Darker Palette", 0x1522860, 0x1522880, indexKOFXISprites_Elizabeth, 0x40 },
    { L"A - Super Stuff 2", 0x1522880, 0x15228a0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"A - Character Extra 1", 0x15228a0, 0x15228c0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"A - Character Extra 2", 0x15228c0, 0x15228e0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"A - Character Extra 3", 0x15228e0, 0x1522900, indexKOFXISprites_Elizabeth, 0x32 },
    { L"A - Extra Move 1", 0x1522900, 0x1522920, indexKOFXISprites_Elizabeth, 0x10 },
    { L"A - Extra Move 2", 0x1522920, 0x1522940, indexKOFXISprites_Elizabeth, 0x11 },
    { L"A - Extra Move 3", 0x1522940, 0x1522960, indexKOFXISprites_Elizabeth, 0x12 },
    { L"A - Extra Move 4", 0x1522960, 0x1522980, indexKOFXISprites_Elizabeth, 0x13 },
    { L"A - Extra Move 5", 0x1522980, 0x15229a0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"A - Extra Move 6", 0x15229a0, 0x15229c0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"A - Extra Move 7", 0x15229c0, 0x15229e0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"A - Extra Move 8", 0x15229e0, 0x1522a00, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_B[] =
{
    { L"Elizabeth B", 0x1522a00, 0x1522a20, indexKOFXISprites_Elizabeth },
    { L"B - Super Stuff 1", 0x1522a20, 0x1522a40, indexKOFXISprites_Elizabeth, 0x20 },
    { L"B - Electric Palette", 0x1522a40, 0x1522a60, indexKOFXISprites_Elizabeth, 0x41 },
    { L"B - Darker Palette", 0x1522a60, 0x1522a80, indexKOFXISprites_Elizabeth, 0x40 },
    { L"B - Super Stuff 2", 0x1522a80, 0x1522aa0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"B - Character Extra 1", 0x1522aa0, 0x1522ac0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"B - Character Extra 2", 0x1522ac0, 0x1522ae0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"B - Character Extra 3", 0x1522ae0, 0x1522b00, indexKOFXISprites_Elizabeth, 0x32 },
    { L"B - Extra Move 1", 0x1522b00, 0x1522b20, indexKOFXISprites_Elizabeth, 0x10 },
    { L"B - Extra Move 2", 0x1522b20, 0x1522b40, indexKOFXISprites_Elizabeth, 0x11 },
    { L"B - Extra Move 3", 0x1522b40, 0x1522b60, indexKOFXISprites_Elizabeth, 0x12 },
    { L"B - Extra Move 4", 0x1522b60, 0x1522b80, indexKOFXISprites_Elizabeth, 0x13 },
    { L"B - Extra Move 5", 0x1522b80, 0x1522ba0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"B - Extra Move 6", 0x1522ba0, 0x1522bc0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"B - Extra Move 7", 0x1522bc0, 0x1522be0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"B - Extra Move 8", 0x1522be0, 0x1522c00, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_C[] =
{
    { L"Elizabeth C", 0x1522c00, 0x1522c20, indexKOFXISprites_Elizabeth },
    { L"C - Super Stuff 1", 0x1522c20, 0x1522c40, indexKOFXISprites_Elizabeth, 0x20 },
    { L"C - Electric Palette", 0x1522c40, 0x1522c60, indexKOFXISprites_Elizabeth, 0x41 },
    { L"C - Darker Palette", 0x1522c60, 0x1522c80, indexKOFXISprites_Elizabeth, 0x40 },
    { L"C - Super Stuff 2", 0x1522c80, 0x1522ca0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"C - Character Extra 1", 0x1522ca0, 0x1522cc0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"C - Character Extra 2", 0x1522cc0, 0x1522ce0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"C - Character Extra 3", 0x1522ce0, 0x1522d00, indexKOFXISprites_Elizabeth, 0x32 },
    { L"C - Extra Move 1", 0x1522d00, 0x1522d20, indexKOFXISprites_Elizabeth, 0x10 },
    { L"C - Extra Move 2", 0x1522d20, 0x1522d40, indexKOFXISprites_Elizabeth, 0x11 },
    { L"C - Extra Move 3", 0x1522d40, 0x1522d60, indexKOFXISprites_Elizabeth, 0x12 },
    { L"C - Extra Move 4", 0x1522d60, 0x1522d80, indexKOFXISprites_Elizabeth, 0x13 },
    { L"C - Extra Move 5", 0x1522d80, 0x1522da0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"C - Extra Move 6", 0x1522da0, 0x1522dc0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"C - Extra Move 7", 0x1522dc0, 0x1522de0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"C - Extra Move 8", 0x1522de0, 0x1522e00, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_D[] =
{
    { L"Elizabeth D", 0x1522e00, 0x1522e20, indexKOFXISprites_Elizabeth },
    { L"D - Super Stuff 1", 0x1522e20, 0x1522e40, indexKOFXISprites_Elizabeth, 0x20 },
    { L"D - Electric Palette", 0x1522e40, 0x1522e60, indexKOFXISprites_Elizabeth, 0x41 },
    { L"D - Darker Palette", 0x1522e60, 0x1522e80, indexKOFXISprites_Elizabeth, 0x40 },
    { L"D - Super Stuff 2", 0x1522e80, 0x1522ea0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"D - Character Extra 1", 0x1522ea0, 0x1522ec0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"D - Character Extra 2", 0x1522ec0, 0x1522ee0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"D - Character Extra 3", 0x1522ee0, 0x1522f00, indexKOFXISprites_Elizabeth, 0x32 },
    { L"D - Extra Move 1", 0x1522f00, 0x1522f20, indexKOFXISprites_Elizabeth, 0x10 },
    { L"D - Extra Move 2", 0x1522f20, 0x1522f40, indexKOFXISprites_Elizabeth, 0x11 },
    { L"D - Extra Move 3", 0x1522f40, 0x1522f60, indexKOFXISprites_Elizabeth, 0x12 },
    { L"D - Extra Move 4", 0x1522f60, 0x1522f80, indexKOFXISprites_Elizabeth, 0x13 },
    { L"D - Extra Move 5", 0x1522f80, 0x1522fa0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"D - Extra Move 6", 0x1522fa0, 0x1522fc0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"D - Extra Move 7", 0x1522fc0, 0x1522fe0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"D - Extra Move 8", 0x1522fe0, 0x1523000, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_EA[] =
{
    { L"Elizabeth EA", 0x1523000, 0x1523020, indexKOFXISprites_Elizabeth },
    { L"E+A - Super Stuff 1", 0x1523020, 0x1523040, indexKOFXISprites_Elizabeth, 0x20 },
    { L"E+A - Electric Palette", 0x1523040, 0x1523060, indexKOFXISprites_Elizabeth, 0x41 },
    { L"E+A - Darker Palette", 0x1523060, 0x1523080, indexKOFXISprites_Elizabeth, 0x40 },
    { L"E+A - Super Stuff 2", 0x1523080, 0x15230a0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"E+A - Character Extra 1", 0x15230a0, 0x15230c0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"E+A - Character Extra 2", 0x15230c0, 0x15230e0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"E+A - Character Extra 3", 0x15230e0, 0x1523100, indexKOFXISprites_Elizabeth, 0x32 },
    { L"E+A - Extra Move 1", 0x1523100, 0x1523120, indexKOFXISprites_Elizabeth, 0x10 },
    { L"E+A - Extra Move 2", 0x1523120, 0x1523140, indexKOFXISprites_Elizabeth, 0x11 },
    { L"E+A - Extra Move 3", 0x1523140, 0x1523160, indexKOFXISprites_Elizabeth, 0x12 },
    { L"E+A - Extra Move 4", 0x1523160, 0x1523180, indexKOFXISprites_Elizabeth, 0x13 },
    { L"E+A - Extra Move 5", 0x1523180, 0x15231a0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"E+A - Extra Move 6", 0x15231a0, 0x15231c0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"E+A - Extra Move 7", 0x15231c0, 0x15231e0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"E+A - Extra Move 8", 0x15231e0, 0x1523200, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_EB[] =
{
    { L"Elizabeth EB", 0x1523200, 0x1523220, indexKOFXISprites_Elizabeth },
    { L"E+B - Super Stuff 1", 0x1523220, 0x1523240, indexKOFXISprites_Elizabeth, 0x20 },
    { L"E+B - Electric Palette", 0x1523240, 0x1523260, indexKOFXISprites_Elizabeth, 0x41 },
    { L"E+B - Darker Palette", 0x1523260, 0x1523280, indexKOFXISprites_Elizabeth, 0x40 },
    { L"E+B - Super Stuff 2", 0x1523280, 0x15232a0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"E+B - Character Extra 1", 0x15232a0, 0x15232c0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"E+B - Character Extra 2", 0x15232c0, 0x15232e0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"E+B - Character Extra 3", 0x15232e0, 0x1523300, indexKOFXISprites_Elizabeth, 0x32 },
    { L"E+B - Extra Move 1", 0x1523300, 0x1523320, indexKOFXISprites_Elizabeth, 0x10 },
    { L"E+B - Extra Move 2", 0x1523320, 0x1523340, indexKOFXISprites_Elizabeth, 0x11 },
    { L"E+B - Extra Move 3", 0x1523340, 0x1523360, indexKOFXISprites_Elizabeth, 0x12 },
    { L"E+B - Extra Move 4", 0x1523360, 0x1523380, indexKOFXISprites_Elizabeth, 0x13 },
    { L"E+B - Extra Move 5", 0x1523380, 0x15233a0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"E+B - Extra Move 6", 0x15233a0, 0x15233c0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"E+B - Extra Move 7", 0x15233c0, 0x15233e0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"E+B - Extra Move 8", 0x15233e0, 0x1523400, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_EC[] =
{
    { L"Elizabeth EC", 0x1523400, 0x1523420, indexKOFXISprites_Elizabeth },
    { L"E+C - Super Stuff 1", 0x1523420, 0x1523440, indexKOFXISprites_Elizabeth, 0x20 },
    { L"E+C - Electric Palette", 0x1523440, 0x1523460, indexKOFXISprites_Elizabeth, 0x41 },
    { L"E+C - Darker Palette", 0x1523460, 0x1523480, indexKOFXISprites_Elizabeth, 0x40 },
    { L"E+C - Super Stuff 2", 0x1523480, 0x15234a0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"E+C - Character Extra 1", 0x15234a0, 0x15234c0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"E+C - Character Extra 2", 0x15234c0, 0x15234e0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"E+C - Character Extra 3", 0x15234e0, 0x1523500, indexKOFXISprites_Elizabeth, 0x32 },
    { L"E+C - Extra Move 1", 0x1523500, 0x1523520, indexKOFXISprites_Elizabeth, 0x10 },
    { L"E+C - Extra Move 2", 0x1523520, 0x1523540, indexKOFXISprites_Elizabeth, 0x11 },
    { L"E+C - Extra Move 3", 0x1523540, 0x1523560, indexKOFXISprites_Elizabeth, 0x12 },
    { L"E+C - Extra Move 4", 0x1523560, 0x1523580, indexKOFXISprites_Elizabeth, 0x13 },
    { L"E+C - Extra Move 5", 0x1523580, 0x15235a0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"E+C - Extra Move 6", 0x15235a0, 0x15235c0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"E+C - Extra Move 7", 0x15235c0, 0x15235e0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"E+C - Extra Move 8", 0x15235e0, 0x1523600, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_ED[] =
{
    { L"Elizabeth ED", 0x1523600, 0x1523620, indexKOFXISprites_Elizabeth },
    { L"E+D - Super Stuff 1", 0x1523620, 0x1523640, indexKOFXISprites_Elizabeth, 0x20 },
    { L"E+D - Electric Palette", 0x1523640, 0x1523660, indexKOFXISprites_Elizabeth, 0x41 },
    { L"E+D - Darker Palette", 0x1523660, 0x1523680, indexKOFXISprites_Elizabeth, 0x40 },
    { L"E+D - Super Stuff 2", 0x1523680, 0x15236a0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"E+D - Character Extra 1", 0x15236a0, 0x15236c0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"E+D - Character Extra 2", 0x15236c0, 0x15236e0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"E+D - Character Extra 3", 0x15236e0, 0x1523700, indexKOFXISprites_Elizabeth, 0x32 },
    { L"E+D - Extra Move 1", 0x1523700, 0x1523720, indexKOFXISprites_Elizabeth, 0x10 },
    { L"E+D - Extra Move 2", 0x1523720, 0x1523740, indexKOFXISprites_Elizabeth, 0x11 },
    { L"E+D - Extra Move 3", 0x1523740, 0x1523760, indexKOFXISprites_Elizabeth, 0x12 },
    { L"E+D - Extra Move 4", 0x1523760, 0x1523780, indexKOFXISprites_Elizabeth, 0x13 },
    { L"E+D - Extra Move 5", 0x1523780, 0x15237a0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"E+D - Extra Move 6", 0x15237a0, 0x15237c0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"E+D - Extra Move 7", 0x15237c0, 0x15237e0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"E+D - Extra Move 8", 0x15237e0, 0x1523800, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_SA[] =
{
    { L"Elizabeth SA", 0x1523800, 0x1523820, indexKOFXISprites_Elizabeth },
    { L"Start+A - Super Stuff 1", 0x1523820, 0x1523840, indexKOFXISprites_Elizabeth, 0x20 },
    { L"Start+A - Electric Palette", 0x1523840, 0x1523860, indexKOFXISprites_Elizabeth, 0x41 },
    { L"Start+A - Darker Palette", 0x1523860, 0x1523880, indexKOFXISprites_Elizabeth, 0x40 },
    { L"Start+A - Super Stuff 2", 0x1523880, 0x15238a0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"Start+A - Character Extra 1", 0x15238a0, 0x15238c0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"Start+A - Character Extra 2", 0x15238c0, 0x15238e0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"Start+A - Character Extra 3", 0x15238e0, 0x1523900, indexKOFXISprites_Elizabeth, 0x32 },
    { L"Start+A - Extra Move 1", 0x1523900, 0x1523920, indexKOFXISprites_Elizabeth, 0x10 },
    { L"Start+A - Extra Move 2", 0x1523920, 0x1523940, indexKOFXISprites_Elizabeth, 0x11 },
    { L"Start+A - Extra Move 3", 0x1523940, 0x1523960, indexKOFXISprites_Elizabeth, 0x12 },
    { L"Start+A - Extra Move 4", 0x1523960, 0x1523980, indexKOFXISprites_Elizabeth, 0x13 },
    { L"Start+A - Extra Move 5", 0x1523980, 0x15239a0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"Start+A - Extra Move 6", 0x15239a0, 0x15239c0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"Start+A - Extra Move 7", 0x15239c0, 0x15239e0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"Start+A - Extra Move 8", 0x15239e0, 0x1523a00, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_SB[] =
{
    { L"Elizabeth SB", 0x1523a00, 0x1523a20, indexKOFXISprites_Elizabeth },
    { L"Start+B - Super Stuff 1", 0x1523a20, 0x1523a40, indexKOFXISprites_Elizabeth, 0x20 },
    { L"Start+B - Electric Palette", 0x1523a40, 0x1523a60, indexKOFXISprites_Elizabeth, 0x41 },
    { L"Start+B - Darker Palette", 0x1523a60, 0x1523a80, indexKOFXISprites_Elizabeth, 0x40 },
    { L"Start+B - Super Stuff 2", 0x1523a80, 0x1523aa0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"Start+B - Character Extra 1", 0x1523aa0, 0x1523ac0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"Start+B - Character Extra 2", 0x1523ac0, 0x1523ae0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"Start+B - Character Extra 3", 0x1523ae0, 0x1523b00, indexKOFXISprites_Elizabeth, 0x32 },
    { L"Start+B - Extra Move 1", 0x1523b00, 0x1523b20, indexKOFXISprites_Elizabeth, 0x10 },
    { L"Start+B - Extra Move 2", 0x1523b20, 0x1523b40, indexKOFXISprites_Elizabeth, 0x11 },
    { L"Start+B - Extra Move 3", 0x1523b40, 0x1523b60, indexKOFXISprites_Elizabeth, 0x12 },
    { L"Start+B - Extra Move 4", 0x1523b60, 0x1523b80, indexKOFXISprites_Elizabeth, 0x13 },
    { L"Start+B - Extra Move 5", 0x1523b80, 0x1523ba0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"Start+B - Extra Move 6", 0x1523ba0, 0x1523bc0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"Start+B - Extra Move 7", 0x1523bc0, 0x1523be0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"Start+B - Extra Move 8", 0x1523be0, 0x1523c00, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_SC[] =
{
    { L"Elizabeth SC", 0x1523c00, 0x1523c20, indexKOFXISprites_Elizabeth },
    { L"Start+C - Super Stuff 1", 0x1523c20, 0x1523c40, indexKOFXISprites_Elizabeth, 0x20 },
    { L"Start+C - Electric Palette", 0x1523c40, 0x1523c60, indexKOFXISprites_Elizabeth, 0x41 },
    { L"Start+C - Darker Palette", 0x1523c60, 0x1523c80, indexKOFXISprites_Elizabeth, 0x40 },
    { L"Start+C - Super Stuff 2", 0x1523c80, 0x1523ca0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"Start+C - Character Extra 1", 0x1523ca0, 0x1523cc0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"Start+C - Character Extra 2", 0x1523cc0, 0x1523ce0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"Start+C - Character Extra 3", 0x1523ce0, 0x1523d00, indexKOFXISprites_Elizabeth, 0x32 },
    { L"Start+C - Extra Move 1", 0x1523d00, 0x1523d20, indexKOFXISprites_Elizabeth, 0x10 },
    { L"Start+C - Extra Move 2", 0x1523d20, 0x1523d40, indexKOFXISprites_Elizabeth, 0x11 },
    { L"Start+C - Extra Move 3", 0x1523d40, 0x1523d60, indexKOFXISprites_Elizabeth, 0x12 },
    { L"Start+C - Extra Move 4", 0x1523d60, 0x1523d80, indexKOFXISprites_Elizabeth, 0x13 },
    { L"Start+C - Extra Move 5", 0x1523d80, 0x1523da0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"Start+C - Extra Move 6", 0x1523da0, 0x1523dc0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"Start+C - Extra Move 7", 0x1523dc0, 0x1523de0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"Start+C - Extra Move 8", 0x1523de0, 0x1523e00, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ELIZABETH_PALETTES_SD[] =
{
    { L"Elizabeth SD", 0x1523e00, 0x1523e20, indexKOFXISprites_Elizabeth },
    { L"Start+D - Super Stuff 1", 0x1523e20, 0x1523e40, indexKOFXISprites_Elizabeth, 0x20 },
    { L"Start+D - Electric Palette", 0x1523e40, 0x1523e60, indexKOFXISprites_Elizabeth, 0x41 },
    { L"Start+D - Darker Palette", 0x1523e60, 0x1523e80, indexKOFXISprites_Elizabeth, 0x40 },
    { L"Start+D - Super Stuff 2", 0x1523e80, 0x1523ea0, indexKOFXISprites_Elizabeth, 0x21 },
    { L"Start+D - Character Extra 1", 0x1523ea0, 0x1523ec0, indexKOFXISprites_Elizabeth, 0x30 },
    { L"Start+D - Character Extra 2", 0x1523ec0, 0x1523ee0, indexKOFXISprites_Elizabeth, 0x31 },
    { L"Start+D - Character Extra 3", 0x1523ee0, 0x1523f00, indexKOFXISprites_Elizabeth, 0x32 },
    { L"Start+D - Extra Move 1", 0x1523f00, 0x1523f20, indexKOFXISprites_Elizabeth, 0x10 },
    { L"Start+D - Extra Move 2", 0x1523f20, 0x1523f40, indexKOFXISprites_Elizabeth, 0x11 },
    { L"Start+D - Extra Move 3", 0x1523f40, 0x1523f60, indexKOFXISprites_Elizabeth, 0x12 },
    { L"Start+D - Extra Move 4", 0x1523f60, 0x1523f80, indexKOFXISprites_Elizabeth, 0x13 },
    { L"Start+D - Extra Move 5", 0x1523f80, 0x1523fa0, indexKOFXISprites_Elizabeth, 0x14 },
    { L"Start+D - Extra Move 6", 0x1523fa0, 0x1523fc0, indexKOFXISprites_Elizabeth, 0x15 },
    { L"Start+D - Extra Move 7", 0x1523fc0, 0x1523fe0, indexKOFXISprites_Elizabeth, 0x16 },
    { L"Start+D - Extra Move 8", 0x1523fe0, 0x1524000, indexKOFXISprites_Elizabeth, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_A[] =
{
    { L"Duo Lon A", 0x16bf000, 0x16bf020, indexKOFXISprites_Duo },
    { L"A - Super Stuff 1", 0x16bf020, 0x16bf040, indexKOFXISprites_Duo, 0x20 },
    { L"A - Electric Palette", 0x16bf040, 0x16bf060, indexKOFXISprites_Duo, 0x41 },
    { L"A - Darker Palette", 0x16bf060, 0x16bf080, indexKOFXISprites_Duo, 0x40 },
    { L"A - Super Stuff 2", 0x16bf080, 0x16bf0a0, indexKOFXISprites_Duo, 0x21 },
    { L"A - Character Extra 1", 0x16bf0a0, 0x16bf0c0, indexKOFXISprites_Duo, 0x30 },
    { L"A - Character Extra 2", 0x16bf0c0, 0x16bf0e0, indexKOFXISprites_Duo, 0x31 },
    { L"A - Character Extra 3", 0x16bf0e0, 0x16bf100, indexKOFXISprites_Duo, 0x32 },
    { L"A - Extra Move 1", 0x16bf100, 0x16bf120, indexKOFXISprites_Duo, 0x10 },
    { L"A - Extra Move 2", 0x16bf120, 0x16bf140, indexKOFXISprites_Duo, 0x11 },
    { L"A - Extra Move 3", 0x16bf140, 0x16bf160, indexKOFXISprites_Duo, 0x12 },
    { L"A - Extra Move 4", 0x16bf160, 0x16bf180, indexKOFXISprites_Duo, 0x13 },
    { L"A - Extra Move 5", 0x16bf180, 0x16bf1a0, indexKOFXISprites_Duo, 0x14 },
    { L"A - Extra Move 6", 0x16bf1a0, 0x16bf1c0, indexKOFXISprites_Duo, 0x15 },
    { L"A - Extra Move 7", 0x16bf1c0, 0x16bf1e0, indexKOFXISprites_Duo, 0x16 },
    { L"A - Extra Move 8", 0x16bf1e0, 0x16bf200, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_B[] =
{
    { L"Duo Lon B", 0x16bf200, 0x16bf220, indexKOFXISprites_Duo },
    { L"B - Super Stuff 1", 0x16bf220, 0x16bf240, indexKOFXISprites_Duo, 0x20 },
    { L"B - Electric Palette", 0x16bf240, 0x16bf260, indexKOFXISprites_Duo, 0x41 },
    { L"B - Darker Palette", 0x16bf260, 0x16bf280, indexKOFXISprites_Duo, 0x40 },
    { L"B - Super Stuff 2", 0x16bf280, 0x16bf2a0, indexKOFXISprites_Duo, 0x21 },
    { L"B - Character Extra 1", 0x16bf2a0, 0x16bf2c0, indexKOFXISprites_Duo, 0x30 },
    { L"B - Character Extra 2", 0x16bf2c0, 0x16bf2e0, indexKOFXISprites_Duo, 0x31 },
    { L"B - Character Extra 3", 0x16bf2e0, 0x16bf300, indexKOFXISprites_Duo, 0x32 },
    { L"B - Extra Move 1", 0x16bf300, 0x16bf320, indexKOFXISprites_Duo, 0x10 },
    { L"B - Extra Move 2", 0x16bf320, 0x16bf340, indexKOFXISprites_Duo, 0x11 },
    { L"B - Extra Move 3", 0x16bf340, 0x16bf360, indexKOFXISprites_Duo, 0x12 },
    { L"B - Extra Move 4", 0x16bf360, 0x16bf380, indexKOFXISprites_Duo, 0x13 },
    { L"B - Extra Move 5", 0x16bf380, 0x16bf3a0, indexKOFXISprites_Duo, 0x14 },
    { L"B - Extra Move 6", 0x16bf3a0, 0x16bf3c0, indexKOFXISprites_Duo, 0x15 },
    { L"B - Extra Move 7", 0x16bf3c0, 0x16bf3e0, indexKOFXISprites_Duo, 0x16 },
    { L"B - Extra Move 8", 0x16bf3e0, 0x16bf400, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_C[] =
{
    { L"Duo Lon C", 0x16bf400, 0x16bf420, indexKOFXISprites_Duo },
    { L"C - Super Stuff 1", 0x16bf420, 0x16bf440, indexKOFXISprites_Duo, 0x20 },
    { L"C - Electric Palette", 0x16bf440, 0x16bf460, indexKOFXISprites_Duo, 0x41 },
    { L"C - Darker Palette", 0x16bf460, 0x16bf480, indexKOFXISprites_Duo, 0x40 },
    { L"C - Super Stuff 2", 0x16bf480, 0x16bf4a0, indexKOFXISprites_Duo, 0x21 },
    { L"C - Character Extra 1", 0x16bf4a0, 0x16bf4c0, indexKOFXISprites_Duo, 0x30 },
    { L"C - Character Extra 2", 0x16bf4c0, 0x16bf4e0, indexKOFXISprites_Duo, 0x31 },
    { L"C - Character Extra 3", 0x16bf4e0, 0x16bf500, indexKOFXISprites_Duo, 0x32 },
    { L"C - Extra Move 1", 0x16bf500, 0x16bf520, indexKOFXISprites_Duo, 0x10 },
    { L"C - Extra Move 2", 0x16bf520, 0x16bf540, indexKOFXISprites_Duo, 0x11 },
    { L"C - Extra Move 3", 0x16bf540, 0x16bf560, indexKOFXISprites_Duo, 0x12 },
    { L"C - Extra Move 4", 0x16bf560, 0x16bf580, indexKOFXISprites_Duo, 0x13 },
    { L"C - Extra Move 5", 0x16bf580, 0x16bf5a0, indexKOFXISprites_Duo, 0x14 },
    { L"C - Extra Move 6", 0x16bf5a0, 0x16bf5c0, indexKOFXISprites_Duo, 0x15 },
    { L"C - Extra Move 7", 0x16bf5c0, 0x16bf5e0, indexKOFXISprites_Duo, 0x16 },
    { L"C - Extra Move 8", 0x16bf5e0, 0x16bf600, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_D[] =
{
    { L"Duo Lon D", 0x16bf600, 0x16bf620, indexKOFXISprites_Duo },
    { L"D - Super Stuff 1", 0x16bf620, 0x16bf640, indexKOFXISprites_Duo, 0x20 },
    { L"D - Electric Palette", 0x16bf640, 0x16bf660, indexKOFXISprites_Duo, 0x41 },
    { L"D - Darker Palette", 0x16bf660, 0x16bf680, indexKOFXISprites_Duo, 0x40 },
    { L"D - Super Stuff 2", 0x16bf680, 0x16bf6a0, indexKOFXISprites_Duo, 0x21 },
    { L"D - Character Extra 1", 0x16bf6a0, 0x16bf6c0, indexKOFXISprites_Duo, 0x30 },
    { L"D - Character Extra 2", 0x16bf6c0, 0x16bf6e0, indexKOFXISprites_Duo, 0x31 },
    { L"D - Character Extra 3", 0x16bf6e0, 0x16bf700, indexKOFXISprites_Duo, 0x32 },
    { L"D - Extra Move 1", 0x16bf700, 0x16bf720, indexKOFXISprites_Duo, 0x10 },
    { L"D - Extra Move 2", 0x16bf720, 0x16bf740, indexKOFXISprites_Duo, 0x11 },
    { L"D - Extra Move 3", 0x16bf740, 0x16bf760, indexKOFXISprites_Duo, 0x12 },
    { L"D - Extra Move 4", 0x16bf760, 0x16bf780, indexKOFXISprites_Duo, 0x13 },
    { L"D - Extra Move 5", 0x16bf780, 0x16bf7a0, indexKOFXISprites_Duo, 0x14 },
    { L"D - Extra Move 6", 0x16bf7a0, 0x16bf7c0, indexKOFXISprites_Duo, 0x15 },
    { L"D - Extra Move 7", 0x16bf7c0, 0x16bf7e0, indexKOFXISprites_Duo, 0x16 },
    { L"D - Extra Move 8", 0x16bf7e0, 0x16bf800, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_EA[] =
{
    { L"Duo Lon EA", 0x16bf800, 0x16bf820, indexKOFXISprites_Duo },
    { L"E+A - Super Stuff 1", 0x16bf820, 0x16bf840, indexKOFXISprites_Duo, 0x20 },
    { L"E+A - Electric Palette", 0x16bf840, 0x16bf860, indexKOFXISprites_Duo, 0x41 },
    { L"E+A - Darker Palette", 0x16bf860, 0x16bf880, indexKOFXISprites_Duo, 0x40 },
    { L"E+A - Super Stuff 2", 0x16bf880, 0x16bf8a0, indexKOFXISprites_Duo, 0x21 },
    { L"E+A - Character Extra 1", 0x16bf8a0, 0x16bf8c0, indexKOFXISprites_Duo, 0x30 },
    { L"E+A - Character Extra 2", 0x16bf8c0, 0x16bf8e0, indexKOFXISprites_Duo, 0x31 },
    { L"E+A - Character Extra 3", 0x16bf8e0, 0x16bf900, indexKOFXISprites_Duo, 0x32 },
    { L"E+A - Extra Move 1", 0x16bf900, 0x16bf920, indexKOFXISprites_Duo, 0x10 },
    { L"E+A - Extra Move 2", 0x16bf920, 0x16bf940, indexKOFXISprites_Duo, 0x11 },
    { L"E+A - Extra Move 3", 0x16bf940, 0x16bf960, indexKOFXISprites_Duo, 0x12 },
    { L"E+A - Extra Move 4", 0x16bf960, 0x16bf980, indexKOFXISprites_Duo, 0x13 },
    { L"E+A - Extra Move 5", 0x16bf980, 0x16bf9a0, indexKOFXISprites_Duo, 0x14 },
    { L"E+A - Extra Move 6", 0x16bf9a0, 0x16bf9c0, indexKOFXISprites_Duo, 0x15 },
    { L"E+A - Extra Move 7", 0x16bf9c0, 0x16bf9e0, indexKOFXISprites_Duo, 0x16 },
    { L"E+A - Extra Move 8", 0x16bf9e0, 0x16bfa00, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_EB[] =
{
    { L"Duo Lon EB", 0x16bfa00, 0x16bfa20, indexKOFXISprites_Duo },
    { L"E+B - Super Stuff 1", 0x16bfa20, 0x16bfa40, indexKOFXISprites_Duo, 0x20 },
    { L"E+B - Electric Palette", 0x16bfa40, 0x16bfa60, indexKOFXISprites_Duo, 0x41 },
    { L"E+B - Darker Palette", 0x16bfa60, 0x16bfa80, indexKOFXISprites_Duo, 0x40 },
    { L"E+B - Super Stuff 2", 0x16bfa80, 0x16bfaa0, indexKOFXISprites_Duo, 0x21 },
    { L"E+B - Character Extra 1", 0x16bfaa0, 0x16bfac0, indexKOFXISprites_Duo, 0x30 },
    { L"E+B - Character Extra 2", 0x16bfac0, 0x16bfae0, indexKOFXISprites_Duo, 0x31 },
    { L"E+B - Character Extra 3", 0x16bfae0, 0x16bfb00, indexKOFXISprites_Duo, 0x32 },
    { L"E+B - Extra Move 1", 0x16bfb00, 0x16bfb20, indexKOFXISprites_Duo, 0x10 },
    { L"E+B - Extra Move 2", 0x16bfb20, 0x16bfb40, indexKOFXISprites_Duo, 0x11 },
    { L"E+B - Extra Move 3", 0x16bfb40, 0x16bfb60, indexKOFXISprites_Duo, 0x12 },
    { L"E+B - Extra Move 4", 0x16bfb60, 0x16bfb80, indexKOFXISprites_Duo, 0x13 },
    { L"E+B - Extra Move 5", 0x16bfb80, 0x16bfba0, indexKOFXISprites_Duo, 0x14 },
    { L"E+B - Extra Move 6", 0x16bfba0, 0x16bfbc0, indexKOFXISprites_Duo, 0x15 },
    { L"E+B - Extra Move 7", 0x16bfbc0, 0x16bfbe0, indexKOFXISprites_Duo, 0x16 },
    { L"E+B - Extra Move 8", 0x16bfbe0, 0x16bfc00, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_EC[] =
{
    { L"Duo Lon EC", 0x16bfc00, 0x16bfc20, indexKOFXISprites_Duo },
    { L"E+C - Super Stuff 1", 0x16bfc20, 0x16bfc40, indexKOFXISprites_Duo, 0x20 },
    { L"E+C - Electric Palette", 0x16bfc40, 0x16bfc60, indexKOFXISprites_Duo, 0x41 },
    { L"E+C - Darker Palette", 0x16bfc60, 0x16bfc80, indexKOFXISprites_Duo, 0x40 },
    { L"E+C - Super Stuff 2", 0x16bfc80, 0x16bfca0, indexKOFXISprites_Duo, 0x21 },
    { L"E+C - Character Extra 1", 0x16bfca0, 0x16bfcc0, indexKOFXISprites_Duo, 0x30 },
    { L"E+C - Character Extra 2", 0x16bfcc0, 0x16bfce0, indexKOFXISprites_Duo, 0x31 },
    { L"E+C - Character Extra 3", 0x16bfce0, 0x16bfd00, indexKOFXISprites_Duo, 0x32 },
    { L"E+C - Extra Move 1", 0x16bfd00, 0x16bfd20, indexKOFXISprites_Duo, 0x10 },
    { L"E+C - Extra Move 2", 0x16bfd20, 0x16bfd40, indexKOFXISprites_Duo, 0x11 },
    { L"E+C - Extra Move 3", 0x16bfd40, 0x16bfd60, indexKOFXISprites_Duo, 0x12 },
    { L"E+C - Extra Move 4", 0x16bfd60, 0x16bfd80, indexKOFXISprites_Duo, 0x13 },
    { L"E+C - Extra Move 5", 0x16bfd80, 0x16bfda0, indexKOFXISprites_Duo, 0x14 },
    { L"E+C - Extra Move 6", 0x16bfda0, 0x16bfdc0, indexKOFXISprites_Duo, 0x15 },
    { L"E+C - Extra Move 7", 0x16bfdc0, 0x16bfde0, indexKOFXISprites_Duo, 0x16 },
    { L"E+C - Extra Move 8", 0x16bfde0, 0x16bfe00, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_ED[] =
{
    { L"Duo Lon ED", 0x16bfe00, 0x16bfe20, indexKOFXISprites_Duo },
    { L"E+D - Super Stuff 1", 0x16bfe20, 0x16bfe40, indexKOFXISprites_Duo, 0x20 },
    { L"E+D - Electric Palette", 0x16bfe40, 0x16bfe60, indexKOFXISprites_Duo, 0x41 },
    { L"E+D - Darker Palette", 0x16bfe60, 0x16bfe80, indexKOFXISprites_Duo, 0x40 },
    { L"E+D - Super Stuff 2", 0x16bfe80, 0x16bfea0, indexKOFXISprites_Duo, 0x21 },
    { L"E+D - Character Extra 1", 0x16bfea0, 0x16bfec0, indexKOFXISprites_Duo, 0x30 },
    { L"E+D - Character Extra 2", 0x16bfec0, 0x16bfee0, indexKOFXISprites_Duo, 0x31 },
    { L"E+D - Character Extra 3", 0x16bfee0, 0x16bff00, indexKOFXISprites_Duo, 0x32 },
    { L"E+D - Extra Move 1", 0x16bff00, 0x16bff20, indexKOFXISprites_Duo, 0x10 },
    { L"E+D - Extra Move 2", 0x16bff20, 0x16bff40, indexKOFXISprites_Duo, 0x11 },
    { L"E+D - Extra Move 3", 0x16bff40, 0x16bff60, indexKOFXISprites_Duo, 0x12 },
    { L"E+D - Extra Move 4", 0x16bff60, 0x16bff80, indexKOFXISprites_Duo, 0x13 },
    { L"E+D - Extra Move 5", 0x16bff80, 0x16bffa0, indexKOFXISprites_Duo, 0x14 },
    { L"E+D - Extra Move 6", 0x16bffa0, 0x16bffc0, indexKOFXISprites_Duo, 0x15 },
    { L"E+D - Extra Move 7", 0x16bffc0, 0x16bffe0, indexKOFXISprites_Duo, 0x16 },
    { L"E+D - Extra Move 8", 0x16bffe0, 0x16c0000, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_SA[] =
{
    { L"Duo Lon SA", 0x16c0000, 0x16c0020, indexKOFXISprites_Duo },
    { L"Start+A - Super Stuff 1", 0x16c0020, 0x16c0040, indexKOFXISprites_Duo, 0x20 },
    { L"Start+A - Electric Palette", 0x16c0040, 0x16c0060, indexKOFXISprites_Duo, 0x41 },
    { L"Start+A - Darker Palette", 0x16c0060, 0x16c0080, indexKOFXISprites_Duo, 0x40 },
    { L"Start+A - Super Stuff 2", 0x16c0080, 0x16c00a0, indexKOFXISprites_Duo, 0x21 },
    { L"Start+A - Character Extra 1", 0x16c00a0, 0x16c00c0, indexKOFXISprites_Duo, 0x30 },
    { L"Start+A - Character Extra 2", 0x16c00c0, 0x16c00e0, indexKOFXISprites_Duo, 0x31 },
    { L"Start+A - Character Extra 3", 0x16c00e0, 0x16c0100, indexKOFXISprites_Duo, 0x32 },
    { L"Start+A - Extra Move 1", 0x16c0100, 0x16c0120, indexKOFXISprites_Duo, 0x10 },
    { L"Start+A - Extra Move 2", 0x16c0120, 0x16c0140, indexKOFXISprites_Duo, 0x11 },
    { L"Start+A - Extra Move 3", 0x16c0140, 0x16c0160, indexKOFXISprites_Duo, 0x12 },
    { L"Start+A - Extra Move 4", 0x16c0160, 0x16c0180, indexKOFXISprites_Duo, 0x13 },
    { L"Start+A - Extra Move 5", 0x16c0180, 0x16c01a0, indexKOFXISprites_Duo, 0x14 },
    { L"Start+A - Extra Move 6", 0x16c01a0, 0x16c01c0, indexKOFXISprites_Duo, 0x15 },
    { L"Start+A - Extra Move 7", 0x16c01c0, 0x16c01e0, indexKOFXISprites_Duo, 0x16 },
    { L"Start+A - Extra Move 8", 0x16c01e0, 0x16c0200, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_SB[] =
{
    { L"Duo Lon SB", 0x16c0200, 0x16c0220, indexKOFXISprites_Duo },
    { L"Start+B - Super Stuff 1", 0x16c0220, 0x16c0240, indexKOFXISprites_Duo, 0x20 },
    { L"Start+B - Electric Palette", 0x16c0240, 0x16c0260, indexKOFXISprites_Duo, 0x41 },
    { L"Start+B - Darker Palette", 0x16c0260, 0x16c0280, indexKOFXISprites_Duo, 0x40 },
    { L"Start+B - Super Stuff 2", 0x16c0280, 0x16c02a0, indexKOFXISprites_Duo, 0x21 },
    { L"Start+B - Character Extra 1", 0x16c02a0, 0x16c02c0, indexKOFXISprites_Duo, 0x30 },
    { L"Start+B - Character Extra 2", 0x16c02c0, 0x16c02e0, indexKOFXISprites_Duo, 0x31 },
    { L"Start+B - Character Extra 3", 0x16c02e0, 0x16c0300, indexKOFXISprites_Duo, 0x32 },
    { L"Start+B - Extra Move 1", 0x16c0300, 0x16c0320, indexKOFXISprites_Duo, 0x10 },
    { L"Start+B - Extra Move 2", 0x16c0320, 0x16c0340, indexKOFXISprites_Duo, 0x11 },
    { L"Start+B - Extra Move 3", 0x16c0340, 0x16c0360, indexKOFXISprites_Duo, 0x12 },
    { L"Start+B - Extra Move 4", 0x16c0360, 0x16c0380, indexKOFXISprites_Duo, 0x13 },
    { L"Start+B - Extra Move 5", 0x16c0380, 0x16c03a0, indexKOFXISprites_Duo, 0x14 },
    { L"Start+B - Extra Move 6", 0x16c03a0, 0x16c03c0, indexKOFXISprites_Duo, 0x15 },
    { L"Start+B - Extra Move 7", 0x16c03c0, 0x16c03e0, indexKOFXISprites_Duo, 0x16 },
    { L"Start+B - Extra Move 8", 0x16c03e0, 0x16c0400, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_SC[] =
{
    { L"Duo Lon SC", 0x16c0400, 0x16c0420, indexKOFXISprites_Duo },
    { L"Start+C - Super Stuff 1", 0x16c0420, 0x16c0440, indexKOFXISprites_Duo, 0x20 },
    { L"Start+C - Electric Palette", 0x16c0440, 0x16c0460, indexKOFXISprites_Duo, 0x41 },
    { L"Start+C - Darker Palette", 0x16c0460, 0x16c0480, indexKOFXISprites_Duo, 0x40 },
    { L"Start+C - Super Stuff 2", 0x16c0480, 0x16c04a0, indexKOFXISprites_Duo, 0x21 },
    { L"Start+C - Character Extra 1", 0x16c04a0, 0x16c04c0, indexKOFXISprites_Duo, 0x30 },
    { L"Start+C - Character Extra 2", 0x16c04c0, 0x16c04e0, indexKOFXISprites_Duo, 0x31 },
    { L"Start+C - Character Extra 3", 0x16c04e0, 0x16c0500, indexKOFXISprites_Duo, 0x32 },
    { L"Start+C - Extra Move 1", 0x16c0500, 0x16c0520, indexKOFXISprites_Duo, 0x10 },
    { L"Start+C - Extra Move 2", 0x16c0520, 0x16c0540, indexKOFXISprites_Duo, 0x11 },
    { L"Start+C - Extra Move 3", 0x16c0540, 0x16c0560, indexKOFXISprites_Duo, 0x12 },
    { L"Start+C - Extra Move 4", 0x16c0560, 0x16c0580, indexKOFXISprites_Duo, 0x13 },
    { L"Start+C - Extra Move 5", 0x16c0580, 0x16c05a0, indexKOFXISprites_Duo, 0x14 },
    { L"Start+C - Extra Move 6", 0x16c05a0, 0x16c05c0, indexKOFXISprites_Duo, 0x15 },
    { L"Start+C - Extra Move 7", 0x16c05c0, 0x16c05e0, indexKOFXISprites_Duo, 0x16 },
    { L"Start+C - Extra Move 8", 0x16c05e0, 0x16c0600, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUOLON_PALETTES_SD[] =
{
    { L"Duo Lon SD", 0x16c0600, 0x16c0620, indexKOFXISprites_Duo },
    { L"Start+D - Super Stuff 1", 0x16c0620, 0x16c0640, indexKOFXISprites_Duo, 0x20 },
    { L"Start+D - Electric Palette", 0x16c0640, 0x16c0660, indexKOFXISprites_Duo, 0x41 },
    { L"Start+D - Darker Palette", 0x16c0660, 0x16c0680, indexKOFXISprites_Duo, 0x40 },
    { L"Start+D - Super Stuff 2", 0x16c0680, 0x16c06a0, indexKOFXISprites_Duo, 0x21 },
    { L"Start+D - Character Extra 1", 0x16c06a0, 0x16c06c0, indexKOFXISprites_Duo, 0x30 },
    { L"Start+D - Character Extra 2", 0x16c06c0, 0x16c06e0, indexKOFXISprites_Duo, 0x31 },
    { L"Start+D - Character Extra 3", 0x16c06e0, 0x16c0700, indexKOFXISprites_Duo, 0x32 },
    { L"Start+D - Extra Move 1", 0x16c0700, 0x16c0720, indexKOFXISprites_Duo, 0x10 },
    { L"Start+D - Extra Move 2", 0x16c0720, 0x16c0740, indexKOFXISprites_Duo, 0x11 },
    { L"Start+D - Extra Move 3", 0x16c0740, 0x16c0760, indexKOFXISprites_Duo, 0x12 },
    { L"Start+D - Extra Move 4", 0x16c0760, 0x16c0780, indexKOFXISprites_Duo, 0x13 },
    { L"Start+D - Extra Move 5", 0x16c0780, 0x16c07a0, indexKOFXISprites_Duo, 0x14 },
    { L"Start+D - Extra Move 6", 0x16c07a0, 0x16c07c0, indexKOFXISprites_Duo, 0x15 },
    { L"Start+D - Extra Move 7", 0x16c07c0, 0x16c07e0, indexKOFXISprites_Duo, 0x16 },
    { L"Start+D - Extra Move 8", 0x16c07e0, 0x16c0800, indexKOFXISprites_Duo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_A[] =
{
    { L"Benimaru A", 0x1861800, 0x1861820, indexKOFXISprites_Benimaru },
    { L"A - Super Stuff 1", 0x1861820, 0x1861840, indexKOFXISprites_Benimaru, 0x20 },
    { L"A - Electric Palette", 0x1861840, 0x1861860, indexKOFXISprites_Benimaru, 0x41 },
    { L"A - Darker Palette", 0x1861860, 0x1861880, indexKOFXISprites_Benimaru, 0x40 },
    { L"A - Super Stuff 2", 0x1861880, 0x18618a0, indexKOFXISprites_Benimaru, 0x21 },
    { L"A - Character Extra 1", 0x18618a0, 0x18618c0, indexKOFXISprites_Benimaru, 0x30 },
    { L"A - Character Extra 2", 0x18618c0, 0x18618e0, indexKOFXISprites_Benimaru, 0x31 },
    { L"A - Character Extra 3", 0x18618e0, 0x1861900, indexKOFXISprites_Benimaru, 0x32 },
    { L"A - Extra Move 1", 0x1861900, 0x1861920, indexKOFXISprites_Benimaru, 0x10 },
    { L"A - Extra Move 2", 0x1861920, 0x1861940, indexKOFXISprites_Benimaru, 0x11 },
    { L"A - Extra Move 3", 0x1861940, 0x1861960, indexKOFXISprites_Benimaru, 0x12 },
    { L"A - Extra Move 4", 0x1861960, 0x1861980, indexKOFXISprites_Benimaru, 0x13 },
    { L"A - Extra Move 5", 0x1861980, 0x18619a0, indexKOFXISprites_Benimaru, 0x14 },
    { L"A - Extra Move 6", 0x18619a0, 0x18619c0, indexKOFXISprites_Benimaru, 0x15 },
    { L"A - Extra Move 7", 0x18619c0, 0x18619e0, indexKOFXISprites_Benimaru, 0x16 },
    { L"A - Extra Move 8", 0x18619e0, 0x1861a00, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_B[] =
{
    { L"Benimaru B", 0x1861a00, 0x1861a20, indexKOFXISprites_Benimaru },
    { L"B - Super Stuff 1", 0x1861a20, 0x1861a40, indexKOFXISprites_Benimaru, 0x20 },
    { L"B - Electric Palette", 0x1861a40, 0x1861a60, indexKOFXISprites_Benimaru, 0x41 },
    { L"B - Darker Palette", 0x1861a60, 0x1861a80, indexKOFXISprites_Benimaru, 0x40 },
    { L"B - Super Stuff 2", 0x1861a80, 0x1861aa0, indexKOFXISprites_Benimaru, 0x21 },
    { L"B - Character Extra 1", 0x1861aa0, 0x1861ac0, indexKOFXISprites_Benimaru, 0x30 },
    { L"B - Character Extra 2", 0x1861ac0, 0x1861ae0, indexKOFXISprites_Benimaru, 0x31 },
    { L"B - Character Extra 3", 0x1861ae0, 0x1861b00, indexKOFXISprites_Benimaru, 0x32 },
    { L"B - Extra Move 1", 0x1861b00, 0x1861b20, indexKOFXISprites_Benimaru, 0x10 },
    { L"B - Extra Move 2", 0x1861b20, 0x1861b40, indexKOFXISprites_Benimaru, 0x11 },
    { L"B - Extra Move 3", 0x1861b40, 0x1861b60, indexKOFXISprites_Benimaru, 0x12 },
    { L"B - Extra Move 4", 0x1861b60, 0x1861b80, indexKOFXISprites_Benimaru, 0x13 },
    { L"B - Extra Move 5", 0x1861b80, 0x1861ba0, indexKOFXISprites_Benimaru, 0x14 },
    { L"B - Extra Move 6", 0x1861ba0, 0x1861bc0, indexKOFXISprites_Benimaru, 0x15 },
    { L"B - Extra Move 7", 0x1861bc0, 0x1861be0, indexKOFXISprites_Benimaru, 0x16 },
    { L"B - Extra Move 8", 0x1861be0, 0x1861c00, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_C[] =
{
    { L"Benimaru C", 0x1861c00, 0x1861c20, indexKOFXISprites_Benimaru },
    { L"C - Super Stuff 1", 0x1861c20, 0x1861c40, indexKOFXISprites_Benimaru, 0x20 },
    { L"C - Electric Palette", 0x1861c40, 0x1861c60, indexKOFXISprites_Benimaru, 0x41 },
    { L"C - Darker Palette", 0x1861c60, 0x1861c80, indexKOFXISprites_Benimaru, 0x40 },
    { L"C - Super Stuff 2", 0x1861c80, 0x1861ca0, indexKOFXISprites_Benimaru, 0x21 },
    { L"C - Character Extra 1", 0x1861ca0, 0x1861cc0, indexKOFXISprites_Benimaru, 0x30 },
    { L"C - Character Extra 2", 0x1861cc0, 0x1861ce0, indexKOFXISprites_Benimaru, 0x31 },
    { L"C - Character Extra 3", 0x1861ce0, 0x1861d00, indexKOFXISprites_Benimaru, 0x32 },
    { L"C - Extra Move 1", 0x1861d00, 0x1861d20, indexKOFXISprites_Benimaru, 0x10 },
    { L"C - Extra Move 2", 0x1861d20, 0x1861d40, indexKOFXISprites_Benimaru, 0x11 },
    { L"C - Extra Move 3", 0x1861d40, 0x1861d60, indexKOFXISprites_Benimaru, 0x12 },
    { L"C - Extra Move 4", 0x1861d60, 0x1861d80, indexKOFXISprites_Benimaru, 0x13 },
    { L"C - Extra Move 5", 0x1861d80, 0x1861da0, indexKOFXISprites_Benimaru, 0x14 },
    { L"C - Extra Move 6", 0x1861da0, 0x1861dc0, indexKOFXISprites_Benimaru, 0x15 },
    { L"C - Extra Move 7", 0x1861dc0, 0x1861de0, indexKOFXISprites_Benimaru, 0x16 },
    { L"C - Extra Move 8", 0x1861de0, 0x1861e00, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_D[] =
{
    { L"Benimaru D", 0x1861e00, 0x1861e20, indexKOFXISprites_Benimaru },
    { L"D - Super Stuff 1", 0x1861e20, 0x1861e40, indexKOFXISprites_Benimaru, 0x20 },
    { L"D - Electric Palette", 0x1861e40, 0x1861e60, indexKOFXISprites_Benimaru, 0x41 },
    { L"D - Darker Palette", 0x1861e60, 0x1861e80, indexKOFXISprites_Benimaru, 0x40 },
    { L"D - Super Stuff 2", 0x1861e80, 0x1861ea0, indexKOFXISprites_Benimaru, 0x21 },
    { L"D - Character Extra 1", 0x1861ea0, 0x1861ec0, indexKOFXISprites_Benimaru, 0x30 },
    { L"D - Character Extra 2", 0x1861ec0, 0x1861ee0, indexKOFXISprites_Benimaru, 0x31 },
    { L"D - Character Extra 3", 0x1861ee0, 0x1861f00, indexKOFXISprites_Benimaru, 0x32 },
    { L"D - Extra Move 1", 0x1861f00, 0x1861f20, indexKOFXISprites_Benimaru, 0x10 },
    { L"D - Extra Move 2", 0x1861f20, 0x1861f40, indexKOFXISprites_Benimaru, 0x11 },
    { L"D - Extra Move 3", 0x1861f40, 0x1861f60, indexKOFXISprites_Benimaru, 0x12 },
    { L"D - Extra Move 4", 0x1861f60, 0x1861f80, indexKOFXISprites_Benimaru, 0x13 },
    { L"D - Extra Move 5", 0x1861f80, 0x1861fa0, indexKOFXISprites_Benimaru, 0x14 },
    { L"D - Extra Move 6", 0x1861fa0, 0x1861fc0, indexKOFXISprites_Benimaru, 0x15 },
    { L"D - Extra Move 7", 0x1861fc0, 0x1861fe0, indexKOFXISprites_Benimaru, 0x16 },
    { L"D - Extra Move 8", 0x1861fe0, 0x1862000, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_EA[] =
{
    { L"Benimaru EA", 0x1862000, 0x1862020, indexKOFXISprites_Benimaru },
    { L"E+A - Super Stuff 1", 0x1862020, 0x1862040, indexKOFXISprites_Benimaru, 0x20 },
    { L"E+A - Electric Palette", 0x1862040, 0x1862060, indexKOFXISprites_Benimaru, 0x41 },
    { L"E+A - Darker Palette", 0x1862060, 0x1862080, indexKOFXISprites_Benimaru, 0x40 },
    { L"E+A - Super Stuff 2", 0x1862080, 0x18620a0, indexKOFXISprites_Benimaru, 0x21 },
    { L"E+A - Character Extra 1", 0x18620a0, 0x18620c0, indexKOFXISprites_Benimaru, 0x30 },
    { L"E+A - Character Extra 2", 0x18620c0, 0x18620e0, indexKOFXISprites_Benimaru, 0x31 },
    { L"E+A - Character Extra 3", 0x18620e0, 0x1862100, indexKOFXISprites_Benimaru, 0x32 },
    { L"E+A - Extra Move 1", 0x1862100, 0x1862120, indexKOFXISprites_Benimaru, 0x10 },
    { L"E+A - Extra Move 2", 0x1862120, 0x1862140, indexKOFXISprites_Benimaru, 0x11 },
    { L"E+A - Extra Move 3", 0x1862140, 0x1862160, indexKOFXISprites_Benimaru, 0x12 },
    { L"E+A - Extra Move 4", 0x1862160, 0x1862180, indexKOFXISprites_Benimaru, 0x13 },
    { L"E+A - Extra Move 5", 0x1862180, 0x18621a0, indexKOFXISprites_Benimaru, 0x14 },
    { L"E+A - Extra Move 6", 0x18621a0, 0x18621c0, indexKOFXISprites_Benimaru, 0x15 },
    { L"E+A - Extra Move 7", 0x18621c0, 0x18621e0, indexKOFXISprites_Benimaru, 0x16 },
    { L"E+A - Extra Move 8", 0x18621e0, 0x1862200, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_EB[] =
{
    { L"Benimaru EB", 0x1862200, 0x1862220, indexKOFXISprites_Benimaru },
    { L"E+B - Super Stuff 1", 0x1862220, 0x1862240, indexKOFXISprites_Benimaru, 0x20 },
    { L"E+B - Electric Palette", 0x1862240, 0x1862260, indexKOFXISprites_Benimaru, 0x41 },
    { L"E+B - Darker Palette", 0x1862260, 0x1862280, indexKOFXISprites_Benimaru, 0x40 },
    { L"E+B - Super Stuff 2", 0x1862280, 0x18622a0, indexKOFXISprites_Benimaru, 0x21 },
    { L"E+B - Character Extra 1", 0x18622a0, 0x18622c0, indexKOFXISprites_Benimaru, 0x30 },
    { L"E+B - Character Extra 2", 0x18622c0, 0x18622e0, indexKOFXISprites_Benimaru, 0x31 },
    { L"E+B - Character Extra 3", 0x18622e0, 0x1862300, indexKOFXISprites_Benimaru, 0x32 },
    { L"E+B - Extra Move 1", 0x1862300, 0x1862320, indexKOFXISprites_Benimaru, 0x10 },
    { L"E+B - Extra Move 2", 0x1862320, 0x1862340, indexKOFXISprites_Benimaru, 0x11 },
    { L"E+B - Extra Move 3", 0x1862340, 0x1862360, indexKOFXISprites_Benimaru, 0x12 },
    { L"E+B - Extra Move 4", 0x1862360, 0x1862380, indexKOFXISprites_Benimaru, 0x13 },
    { L"E+B - Extra Move 5", 0x1862380, 0x18623a0, indexKOFXISprites_Benimaru, 0x14 },
    { L"E+B - Extra Move 6", 0x18623a0, 0x18623c0, indexKOFXISprites_Benimaru, 0x15 },
    { L"E+B - Extra Move 7", 0x18623c0, 0x18623e0, indexKOFXISprites_Benimaru, 0x16 },
    { L"E+B - Extra Move 8", 0x18623e0, 0x1862400, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_EC[] =
{
    { L"Benimaru EC", 0x1862400, 0x1862420, indexKOFXISprites_Benimaru },
    { L"E+C - Super Stuff 1", 0x1862420, 0x1862440, indexKOFXISprites_Benimaru, 0x20 },
    { L"E+C - Electric Palette", 0x1862440, 0x1862460, indexKOFXISprites_Benimaru, 0x41 },
    { L"E+C - Darker Palette", 0x1862460, 0x1862480, indexKOFXISprites_Benimaru, 0x40 },
    { L"E+C - Super Stuff 2", 0x1862480, 0x18624a0, indexKOFXISprites_Benimaru, 0x21 },
    { L"E+C - Character Extra 1", 0x18624a0, 0x18624c0, indexKOFXISprites_Benimaru, 0x30 },
    { L"E+C - Character Extra 2", 0x18624c0, 0x18624e0, indexKOFXISprites_Benimaru, 0x31 },
    { L"E+C - Character Extra 3", 0x18624e0, 0x1862500, indexKOFXISprites_Benimaru, 0x32 },
    { L"E+C - Extra Move 1", 0x1862500, 0x1862520, indexKOFXISprites_Benimaru, 0x10 },
    { L"E+C - Extra Move 2", 0x1862520, 0x1862540, indexKOFXISprites_Benimaru, 0x11 },
    { L"E+C - Extra Move 3", 0x1862540, 0x1862560, indexKOFXISprites_Benimaru, 0x12 },
    { L"E+C - Extra Move 4", 0x1862560, 0x1862580, indexKOFXISprites_Benimaru, 0x13 },
    { L"E+C - Extra Move 5", 0x1862580, 0x18625a0, indexKOFXISprites_Benimaru, 0x14 },
    { L"E+C - Extra Move 6", 0x18625a0, 0x18625c0, indexKOFXISprites_Benimaru, 0x15 },
    { L"E+C - Extra Move 7", 0x18625c0, 0x18625e0, indexKOFXISprites_Benimaru, 0x16 },
    { L"E+C - Extra Move 8", 0x18625e0, 0x1862600, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_ED[] =
{
    { L"Benimaru ED", 0x1862600, 0x1862620, indexKOFXISprites_Benimaru },
    { L"E+D - Super Stuff 1", 0x1862620, 0x1862640, indexKOFXISprites_Benimaru, 0x20 },
    { L"E+D - Electric Palette", 0x1862640, 0x1862660, indexKOFXISprites_Benimaru, 0x41 },
    { L"E+D - Darker Palette", 0x1862660, 0x1862680, indexKOFXISprites_Benimaru, 0x40 },
    { L"E+D - Super Stuff 2", 0x1862680, 0x18626a0, indexKOFXISprites_Benimaru, 0x21 },
    { L"E+D - Character Extra 1", 0x18626a0, 0x18626c0, indexKOFXISprites_Benimaru, 0x30 },
    { L"E+D - Character Extra 2", 0x18626c0, 0x18626e0, indexKOFXISprites_Benimaru, 0x31 },
    { L"E+D - Character Extra 3", 0x18626e0, 0x1862700, indexKOFXISprites_Benimaru, 0x32 },
    { L"E+D - Extra Move 1", 0x1862700, 0x1862720, indexKOFXISprites_Benimaru, 0x10 },
    { L"E+D - Extra Move 2", 0x1862720, 0x1862740, indexKOFXISprites_Benimaru, 0x11 },
    { L"E+D - Extra Move 3", 0x1862740, 0x1862760, indexKOFXISprites_Benimaru, 0x12 },
    { L"E+D - Extra Move 4", 0x1862760, 0x1862780, indexKOFXISprites_Benimaru, 0x13 },
    { L"E+D - Extra Move 5", 0x1862780, 0x18627a0, indexKOFXISprites_Benimaru, 0x14 },
    { L"E+D - Extra Move 6", 0x18627a0, 0x18627c0, indexKOFXISprites_Benimaru, 0x15 },
    { L"E+D - Extra Move 7", 0x18627c0, 0x18627e0, indexKOFXISprites_Benimaru, 0x16 },
    { L"E+D - Extra Move 8", 0x18627e0, 0x1862800, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_SA[] =
{
    { L"Benimaru SA", 0x1862800, 0x1862820, indexKOFXISprites_Benimaru },
    { L"Start+A - Super Stuff 1", 0x1862820, 0x1862840, indexKOFXISprites_Benimaru, 0x20 },
    { L"Start+A - Electric Palette", 0x1862840, 0x1862860, indexKOFXISprites_Benimaru, 0x41 },
    { L"Start+A - Darker Palette", 0x1862860, 0x1862880, indexKOFXISprites_Benimaru, 0x40 },
    { L"Start+A - Super Stuff 2", 0x1862880, 0x18628a0, indexKOFXISprites_Benimaru, 0x21 },
    { L"Start+A - Character Extra 1", 0x18628a0, 0x18628c0, indexKOFXISprites_Benimaru, 0x30 },
    { L"Start+A - Character Extra 2", 0x18628c0, 0x18628e0, indexKOFXISprites_Benimaru, 0x31 },
    { L"Start+A - Character Extra 3", 0x18628e0, 0x1862900, indexKOFXISprites_Benimaru, 0x32 },
    { L"Start+A - Extra Move 1", 0x1862900, 0x1862920, indexKOFXISprites_Benimaru, 0x10 },
    { L"Start+A - Extra Move 2", 0x1862920, 0x1862940, indexKOFXISprites_Benimaru, 0x11 },
    { L"Start+A - Extra Move 3", 0x1862940, 0x1862960, indexKOFXISprites_Benimaru, 0x12 },
    { L"Start+A - Extra Move 4", 0x1862960, 0x1862980, indexKOFXISprites_Benimaru, 0x13 },
    { L"Start+A - Extra Move 5", 0x1862980, 0x18629a0, indexKOFXISprites_Benimaru, 0x14 },
    { L"Start+A - Extra Move 6", 0x18629a0, 0x18629c0, indexKOFXISprites_Benimaru, 0x15 },
    { L"Start+A - Extra Move 7", 0x18629c0, 0x18629e0, indexKOFXISprites_Benimaru, 0x16 },
    { L"Start+A - Extra Move 8", 0x18629e0, 0x1862a00, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_SB[] =
{
    { L"Benimaru SB", 0x1862a00, 0x1862a20, indexKOFXISprites_Benimaru },
    { L"Start+B - Super Stuff 1", 0x1862a20, 0x1862a40, indexKOFXISprites_Benimaru, 0x20 },
    { L"Start+B - Electric Palette", 0x1862a40, 0x1862a60, indexKOFXISprites_Benimaru, 0x41 },
    { L"Start+B - Darker Palette", 0x1862a60, 0x1862a80, indexKOFXISprites_Benimaru, 0x40 },
    { L"Start+B - Super Stuff 2", 0x1862a80, 0x1862aa0, indexKOFXISprites_Benimaru, 0x21 },
    { L"Start+B - Character Extra 1", 0x1862aa0, 0x1862ac0, indexKOFXISprites_Benimaru, 0x30 },
    { L"Start+B - Character Extra 2", 0x1862ac0, 0x1862ae0, indexKOFXISprites_Benimaru, 0x31 },
    { L"Start+B - Character Extra 3", 0x1862ae0, 0x1862b00, indexKOFXISprites_Benimaru, 0x32 },
    { L"Start+B - Extra Move 1", 0x1862b00, 0x1862b20, indexKOFXISprites_Benimaru, 0x10 },
    { L"Start+B - Extra Move 2", 0x1862b20, 0x1862b40, indexKOFXISprites_Benimaru, 0x11 },
    { L"Start+B - Extra Move 3", 0x1862b40, 0x1862b60, indexKOFXISprites_Benimaru, 0x12 },
    { L"Start+B - Extra Move 4", 0x1862b60, 0x1862b80, indexKOFXISprites_Benimaru, 0x13 },
    { L"Start+B - Extra Move 5", 0x1862b80, 0x1862ba0, indexKOFXISprites_Benimaru, 0x14 },
    { L"Start+B - Extra Move 6", 0x1862ba0, 0x1862bc0, indexKOFXISprites_Benimaru, 0x15 },
    { L"Start+B - Extra Move 7", 0x1862bc0, 0x1862be0, indexKOFXISprites_Benimaru, 0x16 },
    { L"Start+B - Extra Move 8", 0x1862be0, 0x1862c00, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_SC[] =
{
    { L"Benimaru SC", 0x1862c00, 0x1862c20, indexKOFXISprites_Benimaru },
    { L"Start+C - Super Stuff 1", 0x1862c20, 0x1862c40, indexKOFXISprites_Benimaru, 0x20 },
    { L"Start+C - Electric Palette", 0x1862c40, 0x1862c60, indexKOFXISprites_Benimaru, 0x41 },
    { L"Start+C - Darker Palette", 0x1862c60, 0x1862c80, indexKOFXISprites_Benimaru, 0x40 },
    { L"Start+C - Super Stuff 2", 0x1862c80, 0x1862ca0, indexKOFXISprites_Benimaru, 0x21 },
    { L"Start+C - Character Extra 1", 0x1862ca0, 0x1862cc0, indexKOFXISprites_Benimaru, 0x30 },
    { L"Start+C - Character Extra 2", 0x1862cc0, 0x1862ce0, indexKOFXISprites_Benimaru, 0x31 },
    { L"Start+C - Character Extra 3", 0x1862ce0, 0x1862d00, indexKOFXISprites_Benimaru, 0x32 },
    { L"Start+C - Extra Move 1", 0x1862d00, 0x1862d20, indexKOFXISprites_Benimaru, 0x10 },
    { L"Start+C - Extra Move 2", 0x1862d20, 0x1862d40, indexKOFXISprites_Benimaru, 0x11 },
    { L"Start+C - Extra Move 3", 0x1862d40, 0x1862d60, indexKOFXISprites_Benimaru, 0x12 },
    { L"Start+C - Extra Move 4", 0x1862d60, 0x1862d80, indexKOFXISprites_Benimaru, 0x13 },
    { L"Start+C - Extra Move 5", 0x1862d80, 0x1862da0, indexKOFXISprites_Benimaru, 0x14 },
    { L"Start+C - Extra Move 6", 0x1862da0, 0x1862dc0, indexKOFXISprites_Benimaru, 0x15 },
    { L"Start+C - Extra Move 7", 0x1862dc0, 0x1862de0, indexKOFXISprites_Benimaru, 0x16 },
    { L"Start+C - Extra Move 8", 0x1862de0, 0x1862e00, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BENIMARU_PALETTES_SD[] =
{
    { L"Benimaru SD", 0x1862e00, 0x1862e20, indexKOFXISprites_Benimaru },
    { L"Start+D - Super Stuff 1", 0x1862e20, 0x1862e40, indexKOFXISprites_Benimaru, 0x20 },
    { L"Start+D - Electric Palette", 0x1862e40, 0x1862e60, indexKOFXISprites_Benimaru, 0x41 },
    { L"Start+D - Darker Palette", 0x1862e60, 0x1862e80, indexKOFXISprites_Benimaru, 0x40 },
    { L"Start+D - Super Stuff 2", 0x1862e80, 0x1862ea0, indexKOFXISprites_Benimaru, 0x21 },
    { L"Start+D - Character Extra 1", 0x1862ea0, 0x1862ec0, indexKOFXISprites_Benimaru, 0x30 },
    { L"Start+D - Character Extra 2", 0x1862ec0, 0x1862ee0, indexKOFXISprites_Benimaru, 0x31 },
    { L"Start+D - Character Extra 3", 0x1862ee0, 0x1862f00, indexKOFXISprites_Benimaru, 0x32 },
    { L"Start+D - Extra Move 1", 0x1862f00, 0x1862f20, indexKOFXISprites_Benimaru, 0x10 },
    { L"Start+D - Extra Move 2", 0x1862f20, 0x1862f40, indexKOFXISprites_Benimaru, 0x11 },
    { L"Start+D - Extra Move 3", 0x1862f40, 0x1862f60, indexKOFXISprites_Benimaru, 0x12 },
    { L"Start+D - Extra Move 4", 0x1862f60, 0x1862f80, indexKOFXISprites_Benimaru, 0x13 },
    { L"Start+D - Extra Move 5", 0x1862f80, 0x1862fa0, indexKOFXISprites_Benimaru, 0x14 },
    { L"Start+D - Extra Move 6", 0x1862fa0, 0x1862fc0, indexKOFXISprites_Benimaru, 0x15 },
    { L"Start+D - Extra Move 7", 0x1862fc0, 0x1862fe0, indexKOFXISprites_Benimaru, 0x16 },
    { L"Start+D - Extra Move 8", 0x1862fe0, 0x1863000, indexKOFXISprites_Benimaru, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_A[] =
{
    { L"Terry A", 0x19b8000, 0x19b8020, indexKOFXISprites_Terry },
    { L"A - Super Stuff 1", 0x19b8020, 0x19b8040, indexKOFXISprites_Terry, 0x20 },
    { L"A - Electric Palette", 0x19b8040, 0x19b8060, indexKOFXISprites_Terry, 0x41 },
    { L"A - Darker Palette", 0x19b8060, 0x19b8080, indexKOFXISprites_Terry, 0x40 },
    { L"A - Super Stuff 2", 0x19b8080, 0x19b80a0, indexKOFXISprites_Terry, 0x21 },
    { L"A - Character Extra 1", 0x19b80a0, 0x19b80c0, indexKOFXISprites_Terry, 0x30 },
    { L"A - Character Extra 2", 0x19b80c0, 0x19b80e0, indexKOFXISprites_Terry, 0x31 },
    { L"A - Character Extra 3", 0x19b80e0, 0x19b8100, indexKOFXISprites_Terry, 0x32 },
    { L"A - Extra Move 1", 0x19b8100, 0x19b8120, indexKOFXISprites_Terry, 0x10 },
    { L"A - Extra Move 2", 0x19b8120, 0x19b8140, indexKOFXISprites_Terry, 0x11 },
    { L"A - Extra Move 3", 0x19b8140, 0x19b8160, indexKOFXISprites_Terry, 0x12 },
    { L"A - Extra Move 4", 0x19b8160, 0x19b8180, indexKOFXISprites_Terry, 0x13 },
    { L"A - Extra Move 5", 0x19b8180, 0x19b81a0, indexKOFXISprites_Terry, 0x14 },
    { L"A - Extra Move 6", 0x19b81a0, 0x19b81c0, indexKOFXISprites_Terry, 0x15 },
    { L"A - Extra Move 7", 0x19b81c0, 0x19b81e0, indexKOFXISprites_Terry, 0x16 },
    { L"A - Extra Move 8", 0x19b81e0, 0x19b8200, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_B[] =
{
    { L"Terry B", 0x19b8200, 0x19b8220, indexKOFXISprites_Terry },
    { L"B - Super Stuff 1", 0x19b8220, 0x19b8240, indexKOFXISprites_Terry, 0x20 },
    { L"B - Electric Palette", 0x19b8240, 0x19b8260, indexKOFXISprites_Terry, 0x41 },
    { L"B - Darker Palette", 0x19b8260, 0x19b8280, indexKOFXISprites_Terry, 0x40 },
    { L"B - Super Stuff 2", 0x19b8280, 0x19b82a0, indexKOFXISprites_Terry, 0x21 },
    { L"B - Character Extra 1", 0x19b82a0, 0x19b82c0, indexKOFXISprites_Terry, 0x30 },
    { L"B - Character Extra 2", 0x19b82c0, 0x19b82e0, indexKOFXISprites_Terry, 0x31 },
    { L"B - Character Extra 3", 0x19b82e0, 0x19b8300, indexKOFXISprites_Terry, 0x32 },
    { L"B - Extra Move 1", 0x19b8300, 0x19b8320, indexKOFXISprites_Terry, 0x10 },
    { L"B - Extra Move 2", 0x19b8320, 0x19b8340, indexKOFXISprites_Terry, 0x11 },
    { L"B - Extra Move 3", 0x19b8340, 0x19b8360, indexKOFXISprites_Terry, 0x12 },
    { L"B - Extra Move 4", 0x19b8360, 0x19b8380, indexKOFXISprites_Terry, 0x13 },
    { L"B - Extra Move 5", 0x19b8380, 0x19b83a0, indexKOFXISprites_Terry, 0x14 },
    { L"B - Extra Move 6", 0x19b83a0, 0x19b83c0, indexKOFXISprites_Terry, 0x15 },
    { L"B - Extra Move 7", 0x19b83c0, 0x19b83e0, indexKOFXISprites_Terry, 0x16 },
    { L"B - Extra Move 8", 0x19b83e0, 0x19b8400, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_C[] =
{
    { L"Terry C", 0x19b8400, 0x19b8420, indexKOFXISprites_Terry },
    { L"C - Super Stuff 1", 0x19b8420, 0x19b8440, indexKOFXISprites_Terry, 0x20 },
    { L"C - Electric Palette", 0x19b8440, 0x19b8460, indexKOFXISprites_Terry, 0x41 },
    { L"C - Darker Palette", 0x19b8460, 0x19b8480, indexKOFXISprites_Terry, 0x40 },
    { L"C - Super Stuff 2", 0x19b8480, 0x19b84a0, indexKOFXISprites_Terry, 0x21 },
    { L"C - Character Extra 1", 0x19b84a0, 0x19b84c0, indexKOFXISprites_Terry, 0x30 },
    { L"C - Character Extra 2", 0x19b84c0, 0x19b84e0, indexKOFXISprites_Terry, 0x31 },
    { L"C - Character Extra 3", 0x19b84e0, 0x19b8500, indexKOFXISprites_Terry, 0x32 },
    { L"C - Extra Move 1", 0x19b8500, 0x19b8520, indexKOFXISprites_Terry, 0x10 },
    { L"C - Extra Move 2", 0x19b8520, 0x19b8540, indexKOFXISprites_Terry, 0x11 },
    { L"C - Extra Move 3", 0x19b8540, 0x19b8560, indexKOFXISprites_Terry, 0x12 },
    { L"C - Extra Move 4", 0x19b8560, 0x19b8580, indexKOFXISprites_Terry, 0x13 },
    { L"C - Extra Move 5", 0x19b8580, 0x19b85a0, indexKOFXISprites_Terry, 0x14 },
    { L"C - Extra Move 6", 0x19b85a0, 0x19b85c0, indexKOFXISprites_Terry, 0x15 },
    { L"C - Extra Move 7", 0x19b85c0, 0x19b85e0, indexKOFXISprites_Terry, 0x16 },
    { L"C - Extra Move 8", 0x19b85e0, 0x19b8600, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_D[] =
{
    { L"Terry D", 0x19b8600, 0x19b8620, indexKOFXISprites_Terry },
    { L"D - Super Stuff 1", 0x19b8620, 0x19b8640, indexKOFXISprites_Terry, 0x20 },
    { L"D - Electric Palette", 0x19b8640, 0x19b8660, indexKOFXISprites_Terry, 0x41 },
    { L"D - Darker Palette", 0x19b8660, 0x19b8680, indexKOFXISprites_Terry, 0x40 },
    { L"D - Super Stuff 2", 0x19b8680, 0x19b86a0, indexKOFXISprites_Terry, 0x21 },
    { L"D - Character Extra 1", 0x19b86a0, 0x19b86c0, indexKOFXISprites_Terry, 0x30 },
    { L"D - Character Extra 2", 0x19b86c0, 0x19b86e0, indexKOFXISprites_Terry, 0x31 },
    { L"D - Character Extra 3", 0x19b86e0, 0x19b8700, indexKOFXISprites_Terry, 0x32 },
    { L"D - Extra Move 1", 0x19b8700, 0x19b8720, indexKOFXISprites_Terry, 0x10 },
    { L"D - Extra Move 2", 0x19b8720, 0x19b8740, indexKOFXISprites_Terry, 0x11 },
    { L"D - Extra Move 3", 0x19b8740, 0x19b8760, indexKOFXISprites_Terry, 0x12 },
    { L"D - Extra Move 4", 0x19b8760, 0x19b8780, indexKOFXISprites_Terry, 0x13 },
    { L"D - Extra Move 5", 0x19b8780, 0x19b87a0, indexKOFXISprites_Terry, 0x14 },
    { L"D - Extra Move 6", 0x19b87a0, 0x19b87c0, indexKOFXISprites_Terry, 0x15 },
    { L"D - Extra Move 7", 0x19b87c0, 0x19b87e0, indexKOFXISprites_Terry, 0x16 },
    { L"D - Extra Move 8", 0x19b87e0, 0x19b8800, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_EA[] =
{
    { L"Terry EA", 0x19b8800, 0x19b8820, indexKOFXISprites_Terry },
    { L"E+A - Super Stuff 1", 0x19b8820, 0x19b8840, indexKOFXISprites_Terry, 0x20 },
    { L"E+A - Electric Palette", 0x19b8840, 0x19b8860, indexKOFXISprites_Terry, 0x41 },
    { L"E+A - Darker Palette", 0x19b8860, 0x19b8880, indexKOFXISprites_Terry, 0x40 },
    { L"E+A - Super Stuff 2", 0x19b8880, 0x19b88a0, indexKOFXISprites_Terry, 0x21 },
    { L"E+A - Character Extra 1", 0x19b88a0, 0x19b88c0, indexKOFXISprites_Terry, 0x30 },
    { L"E+A - Character Extra 2", 0x19b88c0, 0x19b88e0, indexKOFXISprites_Terry, 0x31 },
    { L"E+A - Character Extra 3", 0x19b88e0, 0x19b8900, indexKOFXISprites_Terry, 0x32 },
    { L"E+A - Extra Move 1", 0x19b8900, 0x19b8920, indexKOFXISprites_Terry, 0x10 },
    { L"E+A - Extra Move 2", 0x19b8920, 0x19b8940, indexKOFXISprites_Terry, 0x11 },
    { L"E+A - Extra Move 3", 0x19b8940, 0x19b8960, indexKOFXISprites_Terry, 0x12 },
    { L"E+A - Extra Move 4", 0x19b8960, 0x19b8980, indexKOFXISprites_Terry, 0x13 },
    { L"E+A - Extra Move 5", 0x19b8980, 0x19b89a0, indexKOFXISprites_Terry, 0x14 },
    { L"E+A - Extra Move 6", 0x19b89a0, 0x19b89c0, indexKOFXISprites_Terry, 0x15 },
    { L"E+A - Extra Move 7", 0x19b89c0, 0x19b89e0, indexKOFXISprites_Terry, 0x16 },
    { L"E+A - Extra Move 8", 0x19b89e0, 0x19b8a00, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_EB[] =
{
    { L"Terry EB", 0x19b8a00, 0x19b8a20, indexKOFXISprites_Terry },
    { L"E+B - Super Stuff 1", 0x19b8a20, 0x19b8a40, indexKOFXISprites_Terry, 0x20 },
    { L"E+B - Electric Palette", 0x19b8a40, 0x19b8a60, indexKOFXISprites_Terry, 0x41 },
    { L"E+B - Darker Palette", 0x19b8a60, 0x19b8a80, indexKOFXISprites_Terry, 0x40 },
    { L"E+B - Super Stuff 2", 0x19b8a80, 0x19b8aa0, indexKOFXISprites_Terry, 0x21 },
    { L"E+B - Character Extra 1", 0x19b8aa0, 0x19b8ac0, indexKOFXISprites_Terry, 0x30 },
    { L"E+B - Character Extra 2", 0x19b8ac0, 0x19b8ae0, indexKOFXISprites_Terry, 0x31 },
    { L"E+B - Character Extra 3", 0x19b8ae0, 0x19b8b00, indexKOFXISprites_Terry, 0x32 },
    { L"E+B - Extra Move 1", 0x19b8b00, 0x19b8b20, indexKOFXISprites_Terry, 0x10 },
    { L"E+B - Extra Move 2", 0x19b8b20, 0x19b8b40, indexKOFXISprites_Terry, 0x11 },
    { L"E+B - Extra Move 3", 0x19b8b40, 0x19b8b60, indexKOFXISprites_Terry, 0x12 },
    { L"E+B - Extra Move 4", 0x19b8b60, 0x19b8b80, indexKOFXISprites_Terry, 0x13 },
    { L"E+B - Extra Move 5", 0x19b8b80, 0x19b8ba0, indexKOFXISprites_Terry, 0x14 },
    { L"E+B - Extra Move 6", 0x19b8ba0, 0x19b8bc0, indexKOFXISprites_Terry, 0x15 },
    { L"E+B - Extra Move 7", 0x19b8bc0, 0x19b8be0, indexKOFXISprites_Terry, 0x16 },
    { L"E+B - Extra Move 8", 0x19b8be0, 0x19b8c00, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_EC[] =
{
    { L"Terry EC", 0x19b8c00, 0x19b8c20, indexKOFXISprites_Terry },
    { L"E+C - Super Stuff 1", 0x19b8c20, 0x19b8c40, indexKOFXISprites_Terry, 0x20 },
    { L"E+C - Electric Palette", 0x19b8c40, 0x19b8c60, indexKOFXISprites_Terry, 0x41 },
    { L"E+C - Darker Palette", 0x19b8c60, 0x19b8c80, indexKOFXISprites_Terry, 0x40 },
    { L"E+C - Super Stuff 2", 0x19b8c80, 0x19b8ca0, indexKOFXISprites_Terry, 0x21 },
    { L"E+C - Character Extra 1", 0x19b8ca0, 0x19b8cc0, indexKOFXISprites_Terry, 0x30 },
    { L"E+C - Character Extra 2", 0x19b8cc0, 0x19b8ce0, indexKOFXISprites_Terry, 0x31 },
    { L"E+C - Character Extra 3", 0x19b8ce0, 0x19b8d00, indexKOFXISprites_Terry, 0x32 },
    { L"E+C - Extra Move 1", 0x19b8d00, 0x19b8d20, indexKOFXISprites_Terry, 0x10 },
    { L"E+C - Extra Move 2", 0x19b8d20, 0x19b8d40, indexKOFXISprites_Terry, 0x11 },
    { L"E+C - Extra Move 3", 0x19b8d40, 0x19b8d60, indexKOFXISprites_Terry, 0x12 },
    { L"E+C - Extra Move 4", 0x19b8d60, 0x19b8d80, indexKOFXISprites_Terry, 0x13 },
    { L"E+C - Extra Move 5", 0x19b8d80, 0x19b8da0, indexKOFXISprites_Terry, 0x14 },
    { L"E+C - Extra Move 6", 0x19b8da0, 0x19b8dc0, indexKOFXISprites_Terry, 0x15 },
    { L"E+C - Extra Move 7", 0x19b8dc0, 0x19b8de0, indexKOFXISprites_Terry, 0x16 },
    { L"E+C - Extra Move 8", 0x19b8de0, 0x19b8e00, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_ED[] =
{
    { L"Terry ED", 0x19b8e00, 0x19b8e20, indexKOFXISprites_Terry },
    { L"E+D - Super Stuff 1", 0x19b8e20, 0x19b8e40, indexKOFXISprites_Terry, 0x20 },
    { L"E+D - Electric Palette", 0x19b8e40, 0x19b8e60, indexKOFXISprites_Terry, 0x41 },
    { L"E+D - Darker Palette", 0x19b8e60, 0x19b8e80, indexKOFXISprites_Terry, 0x40 },
    { L"E+D - Super Stuff 2", 0x19b8e80, 0x19b8ea0, indexKOFXISprites_Terry, 0x21 },
    { L"E+D - Character Extra 1", 0x19b8ea0, 0x19b8ec0, indexKOFXISprites_Terry, 0x30 },
    { L"E+D - Character Extra 2", 0x19b8ec0, 0x19b8ee0, indexKOFXISprites_Terry, 0x31 },
    { L"E+D - Character Extra 3", 0x19b8ee0, 0x19b8f00, indexKOFXISprites_Terry, 0x32 },
    { L"E+D - Extra Move 1", 0x19b8f00, 0x19b8f20, indexKOFXISprites_Terry, 0x10 },
    { L"E+D - Extra Move 2", 0x19b8f20, 0x19b8f40, indexKOFXISprites_Terry, 0x11 },
    { L"E+D - Extra Move 3", 0x19b8f40, 0x19b8f60, indexKOFXISprites_Terry, 0x12 },
    { L"E+D - Extra Move 4", 0x19b8f60, 0x19b8f80, indexKOFXISprites_Terry, 0x13 },
    { L"E+D - Extra Move 5", 0x19b8f80, 0x19b8fa0, indexKOFXISprites_Terry, 0x14 },
    { L"E+D - Extra Move 6", 0x19b8fa0, 0x19b8fc0, indexKOFXISprites_Terry, 0x15 },
    { L"E+D - Extra Move 7", 0x19b8fc0, 0x19b8fe0, indexKOFXISprites_Terry, 0x16 },
    { L"E+D - Extra Move 8", 0x19b8fe0, 0x19b9000, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_SA[] =
{
    { L"Terry SA", 0x19b9000, 0x19b9020, indexKOFXISprites_Terry },
    { L"Start+A - Super Stuff 1", 0x19b9020, 0x19b9040, indexKOFXISprites_Terry, 0x20 },
    { L"Start+A - Electric Palette", 0x19b9040, 0x19b9060, indexKOFXISprites_Terry, 0x41 },
    { L"Start+A - Darker Palette", 0x19b9060, 0x19b9080, indexKOFXISprites_Terry, 0x40 },
    { L"Start+A - Super Stuff 2", 0x19b9080, 0x19b90a0, indexKOFXISprites_Terry, 0x21 },
    { L"Start+A - Character Extra 1", 0x19b90a0, 0x19b90c0, indexKOFXISprites_Terry, 0x30 },
    { L"Start+A - Character Extra 2", 0x19b90c0, 0x19b90e0, indexKOFXISprites_Terry, 0x31 },
    { L"Start+A - Character Extra 3", 0x19b90e0, 0x19b9100, indexKOFXISprites_Terry, 0x32 },
    { L"Start+A - Extra Move 1", 0x19b9100, 0x19b9120, indexKOFXISprites_Terry, 0x10 },
    { L"Start+A - Extra Move 2", 0x19b9120, 0x19b9140, indexKOFXISprites_Terry, 0x11 },
    { L"Start+A - Extra Move 3", 0x19b9140, 0x19b9160, indexKOFXISprites_Terry, 0x12 },
    { L"Start+A - Extra Move 4", 0x19b9160, 0x19b9180, indexKOFXISprites_Terry, 0x13 },
    { L"Start+A - Extra Move 5", 0x19b9180, 0x19b91a0, indexKOFXISprites_Terry, 0x14 },
    { L"Start+A - Extra Move 6", 0x19b91a0, 0x19b91c0, indexKOFXISprites_Terry, 0x15 },
    { L"Start+A - Extra Move 7", 0x19b91c0, 0x19b91e0, indexKOFXISprites_Terry, 0x16 },
    { L"Start+A - Extra Move 8", 0x19b91e0, 0x19b9200, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_SB[] =
{
    { L"Terry SB", 0x19b9200, 0x19b9220, indexKOFXISprites_Terry },
    { L"Start+B - Super Stuff 1", 0x19b9220, 0x19b9240, indexKOFXISprites_Terry, 0x20 },
    { L"Start+B - Electric Palette", 0x19b9240, 0x19b9260, indexKOFXISprites_Terry, 0x41 },
    { L"Start+B - Darker Palette", 0x19b9260, 0x19b9280, indexKOFXISprites_Terry, 0x40 },
    { L"Start+B - Super Stuff 2", 0x19b9280, 0x19b92a0, indexKOFXISprites_Terry, 0x21 },
    { L"Start+B - Character Extra 1", 0x19b92a0, 0x19b92c0, indexKOFXISprites_Terry, 0x30 },
    { L"Start+B - Character Extra 2", 0x19b92c0, 0x19b92e0, indexKOFXISprites_Terry, 0x31 },
    { L"Start+B - Character Extra 3", 0x19b92e0, 0x19b9300, indexKOFXISprites_Terry, 0x32 },
    { L"Start+B - Extra Move 1", 0x19b9300, 0x19b9320, indexKOFXISprites_Terry, 0x10 },
    { L"Start+B - Extra Move 2", 0x19b9320, 0x19b9340, indexKOFXISprites_Terry, 0x11 },
    { L"Start+B - Extra Move 3", 0x19b9340, 0x19b9360, indexKOFXISprites_Terry, 0x12 },
    { L"Start+B - Extra Move 4", 0x19b9360, 0x19b9380, indexKOFXISprites_Terry, 0x13 },
    { L"Start+B - Extra Move 5", 0x19b9380, 0x19b93a0, indexKOFXISprites_Terry, 0x14 },
    { L"Start+B - Extra Move 6", 0x19b93a0, 0x19b93c0, indexKOFXISprites_Terry, 0x15 },
    { L"Start+B - Extra Move 7", 0x19b93c0, 0x19b93e0, indexKOFXISprites_Terry, 0x16 },
    { L"Start+B - Extra Move 8", 0x19b93e0, 0x19b9400, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_SC[] =
{
    { L"Terry SC", 0x19b9400, 0x19b9420, indexKOFXISprites_Terry },
    { L"Start+C - Super Stuff 1", 0x19b9420, 0x19b9440, indexKOFXISprites_Terry, 0x20 },
    { L"Start+C - Electric Palette", 0x19b9440, 0x19b9460, indexKOFXISprites_Terry, 0x41 },
    { L"Start+C - Darker Palette", 0x19b9460, 0x19b9480, indexKOFXISprites_Terry, 0x40 },
    { L"Start+C - Super Stuff 2", 0x19b9480, 0x19b94a0, indexKOFXISprites_Terry, 0x21 },
    { L"Start+C - Character Extra 1", 0x19b94a0, 0x19b94c0, indexKOFXISprites_Terry, 0x30 },
    { L"Start+C - Character Extra 2", 0x19b94c0, 0x19b94e0, indexKOFXISprites_Terry, 0x31 },
    { L"Start+C - Character Extra 3", 0x19b94e0, 0x19b9500, indexKOFXISprites_Terry, 0x32 },
    { L"Start+C - Extra Move 1", 0x19b9500, 0x19b9520, indexKOFXISprites_Terry, 0x10 },
    { L"Start+C - Extra Move 2", 0x19b9520, 0x19b9540, indexKOFXISprites_Terry, 0x11 },
    { L"Start+C - Extra Move 3", 0x19b9540, 0x19b9560, indexKOFXISprites_Terry, 0x12 },
    { L"Start+C - Extra Move 4", 0x19b9560, 0x19b9580, indexKOFXISprites_Terry, 0x13 },
    { L"Start+C - Extra Move 5", 0x19b9580, 0x19b95a0, indexKOFXISprites_Terry, 0x14 },
    { L"Start+C - Extra Move 6", 0x19b95a0, 0x19b95c0, indexKOFXISprites_Terry, 0x15 },
    { L"Start+C - Extra Move 7", 0x19b95c0, 0x19b95e0, indexKOFXISprites_Terry, 0x16 },
    { L"Start+C - Extra Move 8", 0x19b95e0, 0x19b9600, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TERRY_PALETTES_SD[] =
{
    { L"Terry SD", 0x19b9600, 0x19b9620, indexKOFXISprites_Terry },
    { L"Start+D - Super Stuff 1", 0x19b9620, 0x19b9640, indexKOFXISprites_Terry, 0x20 },
    { L"Start+D - Electric Palette", 0x19b9640, 0x19b9660, indexKOFXISprites_Terry, 0x41 },
    { L"Start+D - Darker Palette", 0x19b9660, 0x19b9680, indexKOFXISprites_Terry, 0x40 },
    { L"Start+D - Super Stuff 2", 0x19b9680, 0x19b96a0, indexKOFXISprites_Terry, 0x21 },
    { L"Start+D - Character Extra 1", 0x19b96a0, 0x19b96c0, indexKOFXISprites_Terry, 0x30 },
    { L"Start+D - Character Extra 2", 0x19b96c0, 0x19b96e0, indexKOFXISprites_Terry, 0x31 },
    { L"Start+D - Character Extra 3", 0x19b96e0, 0x19b9700, indexKOFXISprites_Terry, 0x32 },
    { L"Start+D - Extra Move 1", 0x19b9700, 0x19b9720, indexKOFXISprites_Terry, 0x10 },
    { L"Start+D - Extra Move 2", 0x19b9720, 0x19b9740, indexKOFXISprites_Terry, 0x11 },
    { L"Start+D - Extra Move 3", 0x19b9740, 0x19b9760, indexKOFXISprites_Terry, 0x12 },
    { L"Start+D - Extra Move 4", 0x19b9760, 0x19b9780, indexKOFXISprites_Terry, 0x13 },
    { L"Start+D - Extra Move 5", 0x19b9780, 0x19b97a0, indexKOFXISprites_Terry, 0x14 },
    { L"Start+D - Extra Move 6", 0x19b97a0, 0x19b97c0, indexKOFXISprites_Terry, 0x15 },
    { L"Start+D - Extra Move 7", 0x19b97c0, 0x19b97e0, indexKOFXISprites_Terry, 0x16 },
    { L"Start+D - Extra Move 8", 0x19b97e0, 0x19b9800, indexKOFXISprites_Terry, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_A[] =
{
    { L"Kim A", 0x1b58000, 0x1b58020, indexKOFXISprites_Kim },
    { L"A - Super Stuff 1", 0x1b58020, 0x1b58040, indexKOFXISprites_Kim, 0x20 },
    { L"A - Electric Palette", 0x1b58040, 0x1b58060, indexKOFXISprites_Kim, 0x41 },
    { L"A - Darker Palette", 0x1b58060, 0x1b58080, indexKOFXISprites_Kim, 0x40 },
    { L"A - Super Stuff 2", 0x1b58080, 0x1b580a0, indexKOFXISprites_Kim, 0x21 },
    { L"A - Character Extra 1", 0x1b580a0, 0x1b580c0, indexKOFXISprites_Kim, 0x30 },
    { L"A - Character Extra 2", 0x1b580c0, 0x1b580e0, indexKOFXISprites_Kim, 0x31 },
    { L"A - Character Extra 3", 0x1b580e0, 0x1b58100, indexKOFXISprites_Kim, 0x32 },
    { L"A - Extra Move 1", 0x1b58100, 0x1b58120, indexKOFXISprites_Kim, 0x10 },
    { L"A - Extra Move 2", 0x1b58120, 0x1b58140, indexKOFXISprites_Kim, 0x11 },
    { L"A - Extra Move 3", 0x1b58140, 0x1b58160, indexKOFXISprites_Kim, 0x12 },
    { L"A - Extra Move 4", 0x1b58160, 0x1b58180, indexKOFXISprites_Kim, 0x13 },
    { L"A - Extra Move 5", 0x1b58180, 0x1b581a0, indexKOFXISprites_Kim, 0x14 },
    { L"A - Extra Move 6", 0x1b581a0, 0x1b581c0, indexKOFXISprites_Kim, 0x15 },
    { L"A - Extra Move 7", 0x1b581c0, 0x1b581e0, indexKOFXISprites_Kim, 0x16 },
    { L"A - Extra Move 8", 0x1b581e0, 0x1b58200, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_B[] =
{
    { L"Kim B", 0x1b58200, 0x1b58220, indexKOFXISprites_Kim },
    { L"B - Super Stuff 1", 0x1b58220, 0x1b58240, indexKOFXISprites_Kim, 0x20 },
    { L"B - Electric Palette", 0x1b58240, 0x1b58260, indexKOFXISprites_Kim, 0x41 },
    { L"B - Darker Palette", 0x1b58260, 0x1b58280, indexKOFXISprites_Kim, 0x40 },
    { L"B - Super Stuff 2", 0x1b58280, 0x1b582a0, indexKOFXISprites_Kim, 0x21 },
    { L"B - Character Extra 1", 0x1b582a0, 0x1b582c0, indexKOFXISprites_Kim, 0x30 },
    { L"B - Character Extra 2", 0x1b582c0, 0x1b582e0, indexKOFXISprites_Kim, 0x31 },
    { L"B - Character Extra 3", 0x1b582e0, 0x1b58300, indexKOFXISprites_Kim, 0x32 },
    { L"B - Extra Move 1", 0x1b58300, 0x1b58320, indexKOFXISprites_Kim, 0x10 },
    { L"B - Extra Move 2", 0x1b58320, 0x1b58340, indexKOFXISprites_Kim, 0x11 },
    { L"B - Extra Move 3", 0x1b58340, 0x1b58360, indexKOFXISprites_Kim, 0x12 },
    { L"B - Extra Move 4", 0x1b58360, 0x1b58380, indexKOFXISprites_Kim, 0x13 },
    { L"B - Extra Move 5", 0x1b58380, 0x1b583a0, indexKOFXISprites_Kim, 0x14 },
    { L"B - Extra Move 6", 0x1b583a0, 0x1b583c0, indexKOFXISprites_Kim, 0x15 },
    { L"B - Extra Move 7", 0x1b583c0, 0x1b583e0, indexKOFXISprites_Kim, 0x16 },
    { L"B - Extra Move 8", 0x1b583e0, 0x1b58400, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_C[] =
{
    { L"Kim C", 0x1b58400, 0x1b58420, indexKOFXISprites_Kim },
    { L"C - Super Stuff 1", 0x1b58420, 0x1b58440, indexKOFXISprites_Kim, 0x20 },
    { L"C - Electric Palette", 0x1b58440, 0x1b58460, indexKOFXISprites_Kim, 0x41 },
    { L"C - Darker Palette", 0x1b58460, 0x1b58480, indexKOFXISprites_Kim, 0x40 },
    { L"C - Super Stuff 2", 0x1b58480, 0x1b584a0, indexKOFXISprites_Kim, 0x21 },
    { L"C - Character Extra 1", 0x1b584a0, 0x1b584c0, indexKOFXISprites_Kim, 0x30 },
    { L"C - Character Extra 2", 0x1b584c0, 0x1b584e0, indexKOFXISprites_Kim, 0x31 },
    { L"C - Character Extra 3", 0x1b584e0, 0x1b58500, indexKOFXISprites_Kim, 0x32 },
    { L"C - Extra Move 1", 0x1b58500, 0x1b58520, indexKOFXISprites_Kim, 0x10 },
    { L"C - Extra Move 2", 0x1b58520, 0x1b58540, indexKOFXISprites_Kim, 0x11 },
    { L"C - Extra Move 3", 0x1b58540, 0x1b58560, indexKOFXISprites_Kim, 0x12 },
    { L"C - Extra Move 4", 0x1b58560, 0x1b58580, indexKOFXISprites_Kim, 0x13 },
    { L"C - Extra Move 5", 0x1b58580, 0x1b585a0, indexKOFXISprites_Kim, 0x14 },
    { L"C - Extra Move 6", 0x1b585a0, 0x1b585c0, indexKOFXISprites_Kim, 0x15 },
    { L"C - Extra Move 7", 0x1b585c0, 0x1b585e0, indexKOFXISprites_Kim, 0x16 },
    { L"C - Extra Move 8", 0x1b585e0, 0x1b58600, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_D[] =
{
    { L"Kim D", 0x1b58600, 0x1b58620, indexKOFXISprites_Kim },
    { L"D - Super Stuff 1", 0x1b58620, 0x1b58640, indexKOFXISprites_Kim, 0x20 },
    { L"D - Electric Palette", 0x1b58640, 0x1b58660, indexKOFXISprites_Kim, 0x41 },
    { L"D - Darker Palette", 0x1b58660, 0x1b58680, indexKOFXISprites_Kim, 0x40 },
    { L"D - Super Stuff 2", 0x1b58680, 0x1b586a0, indexKOFXISprites_Kim, 0x21 },
    { L"D - Character Extra 1", 0x1b586a0, 0x1b586c0, indexKOFXISprites_Kim, 0x30 },
    { L"D - Character Extra 2", 0x1b586c0, 0x1b586e0, indexKOFXISprites_Kim, 0x31 },
    { L"D - Character Extra 3", 0x1b586e0, 0x1b58700, indexKOFXISprites_Kim, 0x32 },
    { L"D - Extra Move 1", 0x1b58700, 0x1b58720, indexKOFXISprites_Kim, 0x10 },
    { L"D - Extra Move 2", 0x1b58720, 0x1b58740, indexKOFXISprites_Kim, 0x11 },
    { L"D - Extra Move 3", 0x1b58740, 0x1b58760, indexKOFXISprites_Kim, 0x12 },
    { L"D - Extra Move 4", 0x1b58760, 0x1b58780, indexKOFXISprites_Kim, 0x13 },
    { L"D - Extra Move 5", 0x1b58780, 0x1b587a0, indexKOFXISprites_Kim, 0x14 },
    { L"D - Extra Move 6", 0x1b587a0, 0x1b587c0, indexKOFXISprites_Kim, 0x15 },
    { L"D - Extra Move 7", 0x1b587c0, 0x1b587e0, indexKOFXISprites_Kim, 0x16 },
    { L"D - Extra Move 8", 0x1b587e0, 0x1b58800, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_EA[] =
{
    { L"Kim EA", 0x1b58800, 0x1b58820, indexKOFXISprites_Kim },
    { L"E+A - Super Stuff 1", 0x1b58820, 0x1b58840, indexKOFXISprites_Kim, 0x20 },
    { L"E+A - Electric Palette", 0x1b58840, 0x1b58860, indexKOFXISprites_Kim, 0x41 },
    { L"E+A - Darker Palette", 0x1b58860, 0x1b58880, indexKOFXISprites_Kim, 0x40 },
    { L"E+A - Super Stuff 2", 0x1b58880, 0x1b588a0, indexKOFXISprites_Kim, 0x21 },
    { L"E+A - Character Extra 1", 0x1b588a0, 0x1b588c0, indexKOFXISprites_Kim, 0x30 },
    { L"E+A - Character Extra 2", 0x1b588c0, 0x1b588e0, indexKOFXISprites_Kim, 0x31 },
    { L"E+A - Character Extra 3", 0x1b588e0, 0x1b58900, indexKOFXISprites_Kim, 0x32 },
    { L"E+A - Extra Move 1", 0x1b58900, 0x1b58920, indexKOFXISprites_Kim, 0x10 },
    { L"E+A - Extra Move 2", 0x1b58920, 0x1b58940, indexKOFXISprites_Kim, 0x11 },
    { L"E+A - Extra Move 3", 0x1b58940, 0x1b58960, indexKOFXISprites_Kim, 0x12 },
    { L"E+A - Extra Move 4", 0x1b58960, 0x1b58980, indexKOFXISprites_Kim, 0x13 },
    { L"E+A - Extra Move 5", 0x1b58980, 0x1b589a0, indexKOFXISprites_Kim, 0x14 },
    { L"E+A - Extra Move 6", 0x1b589a0, 0x1b589c0, indexKOFXISprites_Kim, 0x15 },
    { L"E+A - Extra Move 7", 0x1b589c0, 0x1b589e0, indexKOFXISprites_Kim, 0x16 },
    { L"E+A - Extra Move 8", 0x1b589e0, 0x1b58a00, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_EB[] =
{
    { L"Kim EB", 0x1b58a00, 0x1b58a20, indexKOFXISprites_Kim },
    { L"E+B - Super Stuff 1", 0x1b58a20, 0x1b58a40, indexKOFXISprites_Kim, 0x20 },
    { L"E+B - Electric Palette", 0x1b58a40, 0x1b58a60, indexKOFXISprites_Kim, 0x41 },
    { L"E+B - Darker Palette", 0x1b58a60, 0x1b58a80, indexKOFXISprites_Kim, 0x40 },
    { L"E+B - Super Stuff 2", 0x1b58a80, 0x1b58aa0, indexKOFXISprites_Kim, 0x21 },
    { L"E+B - Character Extra 1", 0x1b58aa0, 0x1b58ac0, indexKOFXISprites_Kim, 0x30 },
    { L"E+B - Character Extra 2", 0x1b58ac0, 0x1b58ae0, indexKOFXISprites_Kim, 0x31 },
    { L"E+B - Character Extra 3", 0x1b58ae0, 0x1b58b00, indexKOFXISprites_Kim, 0x32 },
    { L"E+B - Extra Move 1", 0x1b58b00, 0x1b58b20, indexKOFXISprites_Kim, 0x10 },
    { L"E+B - Extra Move 2", 0x1b58b20, 0x1b58b40, indexKOFXISprites_Kim, 0x11 },
    { L"E+B - Extra Move 3", 0x1b58b40, 0x1b58b60, indexKOFXISprites_Kim, 0x12 },
    { L"E+B - Extra Move 4", 0x1b58b60, 0x1b58b80, indexKOFXISprites_Kim, 0x13 },
    { L"E+B - Extra Move 5", 0x1b58b80, 0x1b58ba0, indexKOFXISprites_Kim, 0x14 },
    { L"E+B - Extra Move 6", 0x1b58ba0, 0x1b58bc0, indexKOFXISprites_Kim, 0x15 },
    { L"E+B - Extra Move 7", 0x1b58bc0, 0x1b58be0, indexKOFXISprites_Kim, 0x16 },
    { L"E+B - Extra Move 8", 0x1b58be0, 0x1b58c00, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_EC[] =
{
    { L"Kim EC", 0x1b58c00, 0x1b58c20, indexKOFXISprites_Kim },
    { L"E+C - Super Stuff 1", 0x1b58c20, 0x1b58c40, indexKOFXISprites_Kim, 0x20 },
    { L"E+C - Electric Palette", 0x1b58c40, 0x1b58c60, indexKOFXISprites_Kim, 0x41 },
    { L"E+C - Darker Palette", 0x1b58c60, 0x1b58c80, indexKOFXISprites_Kim, 0x40 },
    { L"E+C - Super Stuff 2", 0x1b58c80, 0x1b58ca0, indexKOFXISprites_Kim, 0x21 },
    { L"E+C - Character Extra 1", 0x1b58ca0, 0x1b58cc0, indexKOFXISprites_Kim, 0x30 },
    { L"E+C - Character Extra 2", 0x1b58cc0, 0x1b58ce0, indexKOFXISprites_Kim, 0x31 },
    { L"E+C - Character Extra 3", 0x1b58ce0, 0x1b58d00, indexKOFXISprites_Kim, 0x32 },
    { L"E+C - Extra Move 1", 0x1b58d00, 0x1b58d20, indexKOFXISprites_Kim, 0x10 },
    { L"E+C - Extra Move 2", 0x1b58d20, 0x1b58d40, indexKOFXISprites_Kim, 0x11 },
    { L"E+C - Extra Move 3", 0x1b58d40, 0x1b58d60, indexKOFXISprites_Kim, 0x12 },
    { L"E+C - Extra Move 4", 0x1b58d60, 0x1b58d80, indexKOFXISprites_Kim, 0x13 },
    { L"E+C - Extra Move 5", 0x1b58d80, 0x1b58da0, indexKOFXISprites_Kim, 0x14 },
    { L"E+C - Extra Move 6", 0x1b58da0, 0x1b58dc0, indexKOFXISprites_Kim, 0x15 },
    { L"E+C - Extra Move 7", 0x1b58dc0, 0x1b58de0, indexKOFXISprites_Kim, 0x16 },
    { L"E+C - Extra Move 8", 0x1b58de0, 0x1b58e00, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_ED[] =
{
    { L"Kim ED", 0x1b58e00, 0x1b58e20, indexKOFXISprites_Kim },
    { L"E+D - Super Stuff 1", 0x1b58e20, 0x1b58e40, indexKOFXISprites_Kim, 0x20 },
    { L"E+D - Electric Palette", 0x1b58e40, 0x1b58e60, indexKOFXISprites_Kim, 0x41 },
    { L"E+D - Darker Palette", 0x1b58e60, 0x1b58e80, indexKOFXISprites_Kim, 0x40 },
    { L"E+D - Super Stuff 2", 0x1b58e80, 0x1b58ea0, indexKOFXISprites_Kim, 0x21 },
    { L"E+D - Character Extra 1", 0x1b58ea0, 0x1b58ec0, indexKOFXISprites_Kim, 0x30 },
    { L"E+D - Character Extra 2", 0x1b58ec0, 0x1b58ee0, indexKOFXISprites_Kim, 0x31 },
    { L"E+D - Character Extra 3", 0x1b58ee0, 0x1b58f00, indexKOFXISprites_Kim, 0x32 },
    { L"E+D - Extra Move 1", 0x1b58f00, 0x1b58f20, indexKOFXISprites_Kim, 0x10 },
    { L"E+D - Extra Move 2", 0x1b58f20, 0x1b58f40, indexKOFXISprites_Kim, 0x11 },
    { L"E+D - Extra Move 3", 0x1b58f40, 0x1b58f60, indexKOFXISprites_Kim, 0x12 },
    { L"E+D - Extra Move 4", 0x1b58f60, 0x1b58f80, indexKOFXISprites_Kim, 0x13 },
    { L"E+D - Extra Move 5", 0x1b58f80, 0x1b58fa0, indexKOFXISprites_Kim, 0x14 },
    { L"E+D - Extra Move 6", 0x1b58fa0, 0x1b58fc0, indexKOFXISprites_Kim, 0x15 },
    { L"E+D - Extra Move 7", 0x1b58fc0, 0x1b58fe0, indexKOFXISprites_Kim, 0x16 },
    { L"E+D - Extra Move 8", 0x1b58fe0, 0x1b59000, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_SA[] =
{
    { L"Kim SA", 0x1b59000, 0x1b59020, indexKOFXISprites_Kim },
    { L"Start+A - Super Stuff 1", 0x1b59020, 0x1b59040, indexKOFXISprites_Kim, 0x20 },
    { L"Start+A - Electric Palette", 0x1b59040, 0x1b59060, indexKOFXISprites_Kim, 0x41 },
    { L"Start+A - Darker Palette", 0x1b59060, 0x1b59080, indexKOFXISprites_Kim, 0x40 },
    { L"Start+A - Super Stuff 2", 0x1b59080, 0x1b590a0, indexKOFXISprites_Kim, 0x21 },
    { L"Start+A - Character Extra 1", 0x1b590a0, 0x1b590c0, indexKOFXISprites_Kim, 0x30 },
    { L"Start+A - Character Extra 2", 0x1b590c0, 0x1b590e0, indexKOFXISprites_Kim, 0x31 },
    { L"Start+A - Character Extra 3", 0x1b590e0, 0x1b59100, indexKOFXISprites_Kim, 0x32 },
    { L"Start+A - Extra Move 1", 0x1b59100, 0x1b59120, indexKOFXISprites_Kim, 0x10 },
    { L"Start+A - Extra Move 2", 0x1b59120, 0x1b59140, indexKOFXISprites_Kim, 0x11 },
    { L"Start+A - Extra Move 3", 0x1b59140, 0x1b59160, indexKOFXISprites_Kim, 0x12 },
    { L"Start+A - Extra Move 4", 0x1b59160, 0x1b59180, indexKOFXISprites_Kim, 0x13 },
    { L"Start+A - Extra Move 5", 0x1b59180, 0x1b591a0, indexKOFXISprites_Kim, 0x14 },
    { L"Start+A - Extra Move 6", 0x1b591a0, 0x1b591c0, indexKOFXISprites_Kim, 0x15 },
    { L"Start+A - Extra Move 7", 0x1b591c0, 0x1b591e0, indexKOFXISprites_Kim, 0x16 },
    { L"Start+A - Extra Move 8", 0x1b591e0, 0x1b59200, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_SB[] =
{
    { L"Kim SB", 0x1b59200, 0x1b59220, indexKOFXISprites_Kim },
    { L"Start+B - Super Stuff 1", 0x1b59220, 0x1b59240, indexKOFXISprites_Kim, 0x20 },
    { L"Start+B - Electric Palette", 0x1b59240, 0x1b59260, indexKOFXISprites_Kim, 0x41 },
    { L"Start+B - Darker Palette", 0x1b59260, 0x1b59280, indexKOFXISprites_Kim, 0x40 },
    { L"Start+B - Super Stuff 2", 0x1b59280, 0x1b592a0, indexKOFXISprites_Kim, 0x21 },
    { L"Start+B - Character Extra 1", 0x1b592a0, 0x1b592c0, indexKOFXISprites_Kim, 0x30 },
    { L"Start+B - Character Extra 2", 0x1b592c0, 0x1b592e0, indexKOFXISprites_Kim, 0x31 },
    { L"Start+B - Character Extra 3", 0x1b592e0, 0x1b59300, indexKOFXISprites_Kim, 0x32 },
    { L"Start+B - Extra Move 1", 0x1b59300, 0x1b59320, indexKOFXISprites_Kim, 0x10 },
    { L"Start+B - Extra Move 2", 0x1b59320, 0x1b59340, indexKOFXISprites_Kim, 0x11 },
    { L"Start+B - Extra Move 3", 0x1b59340, 0x1b59360, indexKOFXISprites_Kim, 0x12 },
    { L"Start+B - Extra Move 4", 0x1b59360, 0x1b59380, indexKOFXISprites_Kim, 0x13 },
    { L"Start+B - Extra Move 5", 0x1b59380, 0x1b593a0, indexKOFXISprites_Kim, 0x14 },
    { L"Start+B - Extra Move 6", 0x1b593a0, 0x1b593c0, indexKOFXISprites_Kim, 0x15 },
    { L"Start+B - Extra Move 7", 0x1b593c0, 0x1b593e0, indexKOFXISprites_Kim, 0x16 },
    { L"Start+B - Extra Move 8", 0x1b593e0, 0x1b59400, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_SC[] =
{
    { L"Kim SC", 0x1b59400, 0x1b59420, indexKOFXISprites_Kim },
    { L"Start+C - Super Stuff 1", 0x1b59420, 0x1b59440, indexKOFXISprites_Kim, 0x20 },
    { L"Start+C - Electric Palette", 0x1b59440, 0x1b59460, indexKOFXISprites_Kim, 0x41 },
    { L"Start+C - Darker Palette", 0x1b59460, 0x1b59480, indexKOFXISprites_Kim, 0x40 },
    { L"Start+C - Super Stuff 2", 0x1b59480, 0x1b594a0, indexKOFXISprites_Kim, 0x21 },
    { L"Start+C - Character Extra 1", 0x1b594a0, 0x1b594c0, indexKOFXISprites_Kim, 0x30 },
    { L"Start+C - Character Extra 2", 0x1b594c0, 0x1b594e0, indexKOFXISprites_Kim, 0x31 },
    { L"Start+C - Character Extra 3", 0x1b594e0, 0x1b59500, indexKOFXISprites_Kim, 0x32 },
    { L"Start+C - Extra Move 1", 0x1b59500, 0x1b59520, indexKOFXISprites_Kim, 0x10 },
    { L"Start+C - Extra Move 2", 0x1b59520, 0x1b59540, indexKOFXISprites_Kim, 0x11 },
    { L"Start+C - Extra Move 3", 0x1b59540, 0x1b59560, indexKOFXISprites_Kim, 0x12 },
    { L"Start+C - Extra Move 4", 0x1b59560, 0x1b59580, indexKOFXISprites_Kim, 0x13 },
    { L"Start+C - Extra Move 5", 0x1b59580, 0x1b595a0, indexKOFXISprites_Kim, 0x14 },
    { L"Start+C - Extra Move 6", 0x1b595a0, 0x1b595c0, indexKOFXISprites_Kim, 0x15 },
    { L"Start+C - Extra Move 7", 0x1b595c0, 0x1b595e0, indexKOFXISprites_Kim, 0x16 },
    { L"Start+C - Extra Move 8", 0x1b595e0, 0x1b59600, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KIM_PALETTES_SD[] =
{
    { L"Kim SD", 0x1b59600, 0x1b59620, indexKOFXISprites_Kim },
    { L"Start+D - Super Stuff 1", 0x1b59620, 0x1b59640, indexKOFXISprites_Kim, 0x20 },
    { L"Start+D - Electric Palette", 0x1b59640, 0x1b59660, indexKOFXISprites_Kim, 0x41 },
    { L"Start+D - Darker Palette", 0x1b59660, 0x1b59680, indexKOFXISprites_Kim, 0x40 },
    { L"Start+D - Super Stuff 2", 0x1b59680, 0x1b596a0, indexKOFXISprites_Kim, 0x21 },
    { L"Start+D - Character Extra 1", 0x1b596a0, 0x1b596c0, indexKOFXISprites_Kim, 0x30 },
    { L"Start+D - Character Extra 2", 0x1b596c0, 0x1b596e0, indexKOFXISprites_Kim, 0x31 },
    { L"Start+D - Character Extra 3", 0x1b596e0, 0x1b59700, indexKOFXISprites_Kim, 0x32 },
    { L"Start+D - Extra Move 1", 0x1b59700, 0x1b59720, indexKOFXISprites_Kim, 0x10 },
    { L"Start+D - Extra Move 2", 0x1b59720, 0x1b59740, indexKOFXISprites_Kim, 0x11 },
    { L"Start+D - Extra Move 3", 0x1b59740, 0x1b59760, indexKOFXISprites_Kim, 0x12 },
    { L"Start+D - Extra Move 4", 0x1b59760, 0x1b59780, indexKOFXISprites_Kim, 0x13 },
    { L"Start+D - Extra Move 5", 0x1b59780, 0x1b597a0, indexKOFXISprites_Kim, 0x14 },
    { L"Start+D - Extra Move 6", 0x1b597a0, 0x1b597c0, indexKOFXISprites_Kim, 0x15 },
    { L"Start+D - Extra Move 7", 0x1b597c0, 0x1b597e0, indexKOFXISprites_Kim, 0x16 },
    { L"Start+D - Extra Move 8", 0x1b597e0, 0x1b59800, indexKOFXISprites_Kim, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_A[] =
{
    { L"Duck King A", 0x1c8f800, 0x1c8f820, indexKOFXISprites_DuckKing },
    { L"A - Super Stuff 1", 0x1c8f820, 0x1c8f840, indexKOFXISprites_DuckKing, 0x20 },
    { L"A - Electric Palette", 0x1c8f840, 0x1c8f860, indexKOFXISprites_DuckKing, 0x41 },
    { L"A - Darker Palette", 0x1c8f860, 0x1c8f880, indexKOFXISprites_DuckKing, 0x40 },
    { L"A - Super Stuff 2", 0x1c8f880, 0x1c8f8a0, indexKOFXISprites_DuckKing, 0x21 },
    { L"A - Character Extra 1", 0x1c8f8a0, 0x1c8f8c0, indexKOFXISprites_DuckKing, 0x30 },
    { L"A - Character Extra 2", 0x1c8f8c0, 0x1c8f8e0, indexKOFXISprites_DuckKing, 0x31 },
    { L"A - Character Extra 3", 0x1c8f8e0, 0x1c8f900, indexKOFXISprites_DuckKing, 0x32 },
    { L"A - Extra Move 1", 0x1c8f900, 0x1c8f920, indexKOFXISprites_DuckKing, 0x10 },
    { L"A - Extra Move 2", 0x1c8f920, 0x1c8f940, indexKOFXISprites_DuckKing, 0x11 },
    { L"A - Extra Move 3", 0x1c8f940, 0x1c8f960, indexKOFXISprites_DuckKing, 0x12 },
    { L"A - Extra Move 4", 0x1c8f960, 0x1c8f980, indexKOFXISprites_DuckKing, 0x13 },
    { L"A - Extra Move 5", 0x1c8f980, 0x1c8f9a0, indexKOFXISprites_DuckKing, 0x14 },
    { L"A - Extra Move 6", 0x1c8f9a0, 0x1c8f9c0, indexKOFXISprites_DuckKing, 0x15 },
    { L"A - Extra Move 7", 0x1c8f9c0, 0x1c8f9e0, indexKOFXISprites_DuckKing, 0x16 },
    { L"A - Extra Move 8", 0x1c8f9e0, 0x1c8fa00, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_B[] =
{
    { L"Duck King B", 0x1c8fa00, 0x1c8fa20, indexKOFXISprites_DuckKing },
    { L"B - Super Stuff 1", 0x1c8fa20, 0x1c8fa40, indexKOFXISprites_DuckKing, 0x20 },
    { L"B - Electric Palette", 0x1c8fa40, 0x1c8fa60, indexKOFXISprites_DuckKing, 0x41 },
    { L"B - Darker Palette", 0x1c8fa60, 0x1c8fa80, indexKOFXISprites_DuckKing, 0x40 },
    { L"B - Super Stuff 2", 0x1c8fa80, 0x1c8faa0, indexKOFXISprites_DuckKing, 0x21 },
    { L"B - Character Extra 1", 0x1c8faa0, 0x1c8fac0, indexKOFXISprites_DuckKing, 0x30 },
    { L"B - Character Extra 2", 0x1c8fac0, 0x1c8fae0, indexKOFXISprites_DuckKing, 0x31 },
    { L"B - Character Extra 3", 0x1c8fae0, 0x1c8fb00, indexKOFXISprites_DuckKing, 0x32 },
    { L"B - Extra Move 1", 0x1c8fb00, 0x1c8fb20, indexKOFXISprites_DuckKing, 0x10 },
    { L"B - Extra Move 2", 0x1c8fb20, 0x1c8fb40, indexKOFXISprites_DuckKing, 0x11 },
    { L"B - Extra Move 3", 0x1c8fb40, 0x1c8fb60, indexKOFXISprites_DuckKing, 0x12 },
    { L"B - Extra Move 4", 0x1c8fb60, 0x1c8fb80, indexKOFXISprites_DuckKing, 0x13 },
    { L"B - Extra Move 5", 0x1c8fb80, 0x1c8fba0, indexKOFXISprites_DuckKing, 0x14 },
    { L"B - Extra Move 6", 0x1c8fba0, 0x1c8fbc0, indexKOFXISprites_DuckKing, 0x15 },
    { L"B - Extra Move 7", 0x1c8fbc0, 0x1c8fbe0, indexKOFXISprites_DuckKing, 0x16 },
    { L"B - Extra Move 8", 0x1c8fbe0, 0x1c8fc00, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_C[] =
{
    { L"Duck King C", 0x1c8fc00, 0x1c8fc20, indexKOFXISprites_DuckKing },
    { L"C - Super Stuff 1", 0x1c8fc20, 0x1c8fc40, indexKOFXISprites_DuckKing, 0x20 },
    { L"C - Electric Palette", 0x1c8fc40, 0x1c8fc60, indexKOFXISprites_DuckKing, 0x41 },
    { L"C - Darker Palette", 0x1c8fc60, 0x1c8fc80, indexKOFXISprites_DuckKing, 0x40 },
    { L"C - Super Stuff 2", 0x1c8fc80, 0x1c8fca0, indexKOFXISprites_DuckKing, 0x21 },
    { L"C - Character Extra 1", 0x1c8fca0, 0x1c8fcc0, indexKOFXISprites_DuckKing, 0x30 },
    { L"C - Character Extra 2", 0x1c8fcc0, 0x1c8fce0, indexKOFXISprites_DuckKing, 0x31 },
    { L"C - Character Extra 3", 0x1c8fce0, 0x1c8fd00, indexKOFXISprites_DuckKing, 0x32 },
    { L"C - Extra Move 1", 0x1c8fd00, 0x1c8fd20, indexKOFXISprites_DuckKing, 0x10 },
    { L"C - Extra Move 2", 0x1c8fd20, 0x1c8fd40, indexKOFXISprites_DuckKing, 0x11 },
    { L"C - Extra Move 3", 0x1c8fd40, 0x1c8fd60, indexKOFXISprites_DuckKing, 0x12 },
    { L"C - Extra Move 4", 0x1c8fd60, 0x1c8fd80, indexKOFXISprites_DuckKing, 0x13 },
    { L"C - Extra Move 5", 0x1c8fd80, 0x1c8fda0, indexKOFXISprites_DuckKing, 0x14 },
    { L"C - Extra Move 6", 0x1c8fda0, 0x1c8fdc0, indexKOFXISprites_DuckKing, 0x15 },
    { L"C - Extra Move 7", 0x1c8fdc0, 0x1c8fde0, indexKOFXISprites_DuckKing, 0x16 },
    { L"C - Extra Move 8", 0x1c8fde0, 0x1c8fe00, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_D[] =
{
    { L"Duck King D", 0x1c8fe00, 0x1c8fe20, indexKOFXISprites_DuckKing },
    { L"D - Super Stuff 1", 0x1c8fe20, 0x1c8fe40, indexKOFXISprites_DuckKing, 0x20 },
    { L"D - Electric Palette", 0x1c8fe40, 0x1c8fe60, indexKOFXISprites_DuckKing, 0x41 },
    { L"D - Darker Palette", 0x1c8fe60, 0x1c8fe80, indexKOFXISprites_DuckKing, 0x40 },
    { L"D - Super Stuff 2", 0x1c8fe80, 0x1c8fea0, indexKOFXISprites_DuckKing, 0x21 },
    { L"D - Character Extra 1", 0x1c8fea0, 0x1c8fec0, indexKOFXISprites_DuckKing, 0x30 },
    { L"D - Character Extra 2", 0x1c8fec0, 0x1c8fee0, indexKOFXISprites_DuckKing, 0x31 },
    { L"D - Character Extra 3", 0x1c8fee0, 0x1c8ff00, indexKOFXISprites_DuckKing, 0x32 },
    { L"D - Extra Move 1", 0x1c8ff00, 0x1c8ff20, indexKOFXISprites_DuckKing, 0x10 },
    { L"D - Extra Move 2", 0x1c8ff20, 0x1c8ff40, indexKOFXISprites_DuckKing, 0x11 },
    { L"D - Extra Move 3", 0x1c8ff40, 0x1c8ff60, indexKOFXISprites_DuckKing, 0x12 },
    { L"D - Extra Move 4", 0x1c8ff60, 0x1c8ff80, indexKOFXISprites_DuckKing, 0x13 },
    { L"D - Extra Move 5", 0x1c8ff80, 0x1c8ffa0, indexKOFXISprites_DuckKing, 0x14 },
    { L"D - Extra Move 6", 0x1c8ffa0, 0x1c8ffc0, indexKOFXISprites_DuckKing, 0x15 },
    { L"D - Extra Move 7", 0x1c8ffc0, 0x1c8ffe0, indexKOFXISprites_DuckKing, 0x16 },
    { L"D - Extra Move 8", 0x1c8ffe0, 0x1c90000, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_EA[] =
{
    { L"Duck King EA", 0x1c90000, 0x1c90020, indexKOFXISprites_DuckKing },
    { L"E+A - Super Stuff 1", 0x1c90020, 0x1c90040, indexKOFXISprites_DuckKing, 0x20 },
    { L"E+A - Electric Palette", 0x1c90040, 0x1c90060, indexKOFXISprites_DuckKing, 0x41 },
    { L"E+A - Darker Palette", 0x1c90060, 0x1c90080, indexKOFXISprites_DuckKing, 0x40 },
    { L"E+A - Super Stuff 2", 0x1c90080, 0x1c900a0, indexKOFXISprites_DuckKing, 0x21 },
    { L"E+A - Character Extra 1", 0x1c900a0, 0x1c900c0, indexKOFXISprites_DuckKing, 0x30 },
    { L"E+A - Character Extra 2", 0x1c900c0, 0x1c900e0, indexKOFXISprites_DuckKing, 0x31 },
    { L"E+A - Character Extra 3", 0x1c900e0, 0x1c90100, indexKOFXISprites_DuckKing, 0x32 },
    { L"E+A - Extra Move 1", 0x1c90100, 0x1c90120, indexKOFXISprites_DuckKing, 0x10 },
    { L"E+A - Extra Move 2", 0x1c90120, 0x1c90140, indexKOFXISprites_DuckKing, 0x11 },
    { L"E+A - Extra Move 3", 0x1c90140, 0x1c90160, indexKOFXISprites_DuckKing, 0x12 },
    { L"E+A - Extra Move 4", 0x1c90160, 0x1c90180, indexKOFXISprites_DuckKing, 0x13 },
    { L"E+A - Extra Move 5", 0x1c90180, 0x1c901a0, indexKOFXISprites_DuckKing, 0x14 },
    { L"E+A - Extra Move 6", 0x1c901a0, 0x1c901c0, indexKOFXISprites_DuckKing, 0x15 },
    { L"E+A - Extra Move 7", 0x1c901c0, 0x1c901e0, indexKOFXISprites_DuckKing, 0x16 },
    { L"E+A - Extra Move 8", 0x1c901e0, 0x1c90200, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_EB[] =
{
    { L"Duck King EB", 0x1c90200, 0x1c90220, indexKOFXISprites_DuckKing },
    { L"E+B - Super Stuff 1", 0x1c90220, 0x1c90240, indexKOFXISprites_DuckKing, 0x20 },
    { L"E+B - Electric Palette", 0x1c90240, 0x1c90260, indexKOFXISprites_DuckKing, 0x41 },
    { L"E+B - Darker Palette", 0x1c90260, 0x1c90280, indexKOFXISprites_DuckKing, 0x40 },
    { L"E+B - Super Stuff 2", 0x1c90280, 0x1c902a0, indexKOFXISprites_DuckKing, 0x21 },
    { L"E+B - Character Extra 1", 0x1c902a0, 0x1c902c0, indexKOFXISprites_DuckKing, 0x30 },
    { L"E+B - Character Extra 2", 0x1c902c0, 0x1c902e0, indexKOFXISprites_DuckKing, 0x31 },
    { L"E+B - Character Extra 3", 0x1c902e0, 0x1c90300, indexKOFXISprites_DuckKing, 0x32 },
    { L"E+B - Extra Move 1", 0x1c90300, 0x1c90320, indexKOFXISprites_DuckKing, 0x10 },
    { L"E+B - Extra Move 2", 0x1c90320, 0x1c90340, indexKOFXISprites_DuckKing, 0x11 },
    { L"E+B - Extra Move 3", 0x1c90340, 0x1c90360, indexKOFXISprites_DuckKing, 0x12 },
    { L"E+B - Extra Move 4", 0x1c90360, 0x1c90380, indexKOFXISprites_DuckKing, 0x13 },
    { L"E+B - Extra Move 5", 0x1c90380, 0x1c903a0, indexKOFXISprites_DuckKing, 0x14 },
    { L"E+B - Extra Move 6", 0x1c903a0, 0x1c903c0, indexKOFXISprites_DuckKing, 0x15 },
    { L"E+B - Extra Move 7", 0x1c903c0, 0x1c903e0, indexKOFXISprites_DuckKing, 0x16 },
    { L"E+B - Extra Move 8", 0x1c903e0, 0x1c90400, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_EC[] =
{
    { L"Duck King EC", 0x1c90400, 0x1c90420, indexKOFXISprites_DuckKing },
    { L"E+C - Super Stuff 1", 0x1c90420, 0x1c90440, indexKOFXISprites_DuckKing, 0x20 },
    { L"E+C - Electric Palette", 0x1c90440, 0x1c90460, indexKOFXISprites_DuckKing, 0x41 },
    { L"E+C - Darker Palette", 0x1c90460, 0x1c90480, indexKOFXISprites_DuckKing, 0x40 },
    { L"E+C - Super Stuff 2", 0x1c90480, 0x1c904a0, indexKOFXISprites_DuckKing, 0x21 },
    { L"E+C - Character Extra 1", 0x1c904a0, 0x1c904c0, indexKOFXISprites_DuckKing, 0x30 },
    { L"E+C - Character Extra 2", 0x1c904c0, 0x1c904e0, indexKOFXISprites_DuckKing, 0x31 },
    { L"E+C - Character Extra 3", 0x1c904e0, 0x1c90500, indexKOFXISprites_DuckKing, 0x32 },
    { L"E+C - Extra Move 1", 0x1c90500, 0x1c90520, indexKOFXISprites_DuckKing, 0x10 },
    { L"E+C - Extra Move 2", 0x1c90520, 0x1c90540, indexKOFXISprites_DuckKing, 0x11 },
    { L"E+C - Extra Move 3", 0x1c90540, 0x1c90560, indexKOFXISprites_DuckKing, 0x12 },
    { L"E+C - Extra Move 4", 0x1c90560, 0x1c90580, indexKOFXISprites_DuckKing, 0x13 },
    { L"E+C - Extra Move 5", 0x1c90580, 0x1c905a0, indexKOFXISprites_DuckKing, 0x14 },
    { L"E+C - Extra Move 6", 0x1c905a0, 0x1c905c0, indexKOFXISprites_DuckKing, 0x15 },
    { L"E+C - Extra Move 7", 0x1c905c0, 0x1c905e0, indexKOFXISprites_DuckKing, 0x16 },
    { L"E+C - Extra Move 8", 0x1c905e0, 0x1c90600, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_ED[] =
{
    { L"Duck King ED", 0x1c90600, 0x1c90620, indexKOFXISprites_DuckKing },
    { L"E+D - Super Stuff 1", 0x1c90620, 0x1c90640, indexKOFXISprites_DuckKing, 0x20 },
    { L"E+D - Electric Palette", 0x1c90640, 0x1c90660, indexKOFXISprites_DuckKing, 0x41 },
    { L"E+D - Darker Palette", 0x1c90660, 0x1c90680, indexKOFXISprites_DuckKing, 0x40 },
    { L"E+D - Super Stuff 2", 0x1c90680, 0x1c906a0, indexKOFXISprites_DuckKing, 0x21 },
    { L"E+D - Character Extra 1", 0x1c906a0, 0x1c906c0, indexKOFXISprites_DuckKing, 0x30 },
    { L"E+D - Character Extra 2", 0x1c906c0, 0x1c906e0, indexKOFXISprites_DuckKing, 0x31 },
    { L"E+D - Character Extra 3", 0x1c906e0, 0x1c90700, indexKOFXISprites_DuckKing, 0x32 },
    { L"E+D - Extra Move 1", 0x1c90700, 0x1c90720, indexKOFXISprites_DuckKing, 0x10 },
    { L"E+D - Extra Move 2", 0x1c90720, 0x1c90740, indexKOFXISprites_DuckKing, 0x11 },
    { L"E+D - Extra Move 3", 0x1c90740, 0x1c90760, indexKOFXISprites_DuckKing, 0x12 },
    { L"E+D - Extra Move 4", 0x1c90760, 0x1c90780, indexKOFXISprites_DuckKing, 0x13 },
    { L"E+D - Extra Move 5", 0x1c90780, 0x1c907a0, indexKOFXISprites_DuckKing, 0x14 },
    { L"E+D - Extra Move 6", 0x1c907a0, 0x1c907c0, indexKOFXISprites_DuckKing, 0x15 },
    { L"E+D - Extra Move 7", 0x1c907c0, 0x1c907e0, indexKOFXISprites_DuckKing, 0x16 },
    { L"E+D - Extra Move 8", 0x1c907e0, 0x1c90800, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_SA[] =
{
    { L"Duck King SA", 0x1c90800, 0x1c90820, indexKOFXISprites_DuckKing },
    { L"Start+A - Super Stuff 1", 0x1c90820, 0x1c90840, indexKOFXISprites_DuckKing, 0x20 },
    { L"Start+A - Electric Palette", 0x1c90840, 0x1c90860, indexKOFXISprites_DuckKing, 0x41 },
    { L"Start+A - Darker Palette", 0x1c90860, 0x1c90880, indexKOFXISprites_DuckKing, 0x40 },
    { L"Start+A - Super Stuff 2", 0x1c90880, 0x1c908a0, indexKOFXISprites_DuckKing, 0x21 },
    { L"Start+A - Character Extra 1", 0x1c908a0, 0x1c908c0, indexKOFXISprites_DuckKing, 0x30 },
    { L"Start+A - Character Extra 2", 0x1c908c0, 0x1c908e0, indexKOFXISprites_DuckKing, 0x31 },
    { L"Start+A - Character Extra 3", 0x1c908e0, 0x1c90900, indexKOFXISprites_DuckKing, 0x32 },
    { L"Start+A - Extra Move 1", 0x1c90900, 0x1c90920, indexKOFXISprites_DuckKing, 0x10 },
    { L"Start+A - Extra Move 2", 0x1c90920, 0x1c90940, indexKOFXISprites_DuckKing, 0x11 },
    { L"Start+A - Extra Move 3", 0x1c90940, 0x1c90960, indexKOFXISprites_DuckKing, 0x12 },
    { L"Start+A - Extra Move 4", 0x1c90960, 0x1c90980, indexKOFXISprites_DuckKing, 0x13 },
    { L"Start+A - Extra Move 5", 0x1c90980, 0x1c909a0, indexKOFXISprites_DuckKing, 0x14 },
    { L"Start+A - Extra Move 6", 0x1c909a0, 0x1c909c0, indexKOFXISprites_DuckKing, 0x15 },
    { L"Start+A - Extra Move 7", 0x1c909c0, 0x1c909e0, indexKOFXISprites_DuckKing, 0x16 },
    { L"Start+A - Extra Move 8", 0x1c909e0, 0x1c90a00, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_SB[] =
{
    { L"Duck King SB", 0x1c90a00, 0x1c90a20, indexKOFXISprites_DuckKing },
    { L"Start+B - Super Stuff 1", 0x1c90a20, 0x1c90a40, indexKOFXISprites_DuckKing, 0x20 },
    { L"Start+B - Electric Palette", 0x1c90a40, 0x1c90a60, indexKOFXISprites_DuckKing, 0x41 },
    { L"Start+B - Darker Palette", 0x1c90a60, 0x1c90a80, indexKOFXISprites_DuckKing, 0x40 },
    { L"Start+B - Super Stuff 2", 0x1c90a80, 0x1c90aa0, indexKOFXISprites_DuckKing, 0x21 },
    { L"Start+B - Character Extra 1", 0x1c90aa0, 0x1c90ac0, indexKOFXISprites_DuckKing, 0x30 },
    { L"Start+B - Character Extra 2", 0x1c90ac0, 0x1c90ae0, indexKOFXISprites_DuckKing, 0x31 },
    { L"Start+B - Character Extra 3", 0x1c90ae0, 0x1c90b00, indexKOFXISprites_DuckKing, 0x32 },
    { L"Start+B - Extra Move 1", 0x1c90b00, 0x1c90b20, indexKOFXISprites_DuckKing, 0x10 },
    { L"Start+B - Extra Move 2", 0x1c90b20, 0x1c90b40, indexKOFXISprites_DuckKing, 0x11 },
    { L"Start+B - Extra Move 3", 0x1c90b40, 0x1c90b60, indexKOFXISprites_DuckKing, 0x12 },
    { L"Start+B - Extra Move 4", 0x1c90b60, 0x1c90b80, indexKOFXISprites_DuckKing, 0x13 },
    { L"Start+B - Extra Move 5", 0x1c90b80, 0x1c90ba0, indexKOFXISprites_DuckKing, 0x14 },
    { L"Start+B - Extra Move 6", 0x1c90ba0, 0x1c90bc0, indexKOFXISprites_DuckKing, 0x15 },
    { L"Start+B - Extra Move 7", 0x1c90bc0, 0x1c90be0, indexKOFXISprites_DuckKing, 0x16 },
    { L"Start+B - Extra Move 8", 0x1c90be0, 0x1c90c00, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_SC[] =
{
    { L"Duck King SC", 0x1c90c00, 0x1c90c20, indexKOFXISprites_DuckKing },
    { L"Start+C - Super Stuff 1", 0x1c90c20, 0x1c90c40, indexKOFXISprites_DuckKing, 0x20 },
    { L"Start+C - Electric Palette", 0x1c90c40, 0x1c90c60, indexKOFXISprites_DuckKing, 0x41 },
    { L"Start+C - Darker Palette", 0x1c90c60, 0x1c90c80, indexKOFXISprites_DuckKing, 0x40 },
    { L"Start+C - Super Stuff 2", 0x1c90c80, 0x1c90ca0, indexKOFXISprites_DuckKing, 0x21 },
    { L"Start+C - Character Extra 1", 0x1c90ca0, 0x1c90cc0, indexKOFXISprites_DuckKing, 0x30 },
    { L"Start+C - Character Extra 2", 0x1c90cc0, 0x1c90ce0, indexKOFXISprites_DuckKing, 0x31 },
    { L"Start+C - Character Extra 3", 0x1c90ce0, 0x1c90d00, indexKOFXISprites_DuckKing, 0x32 },
    { L"Start+C - Extra Move 1", 0x1c90d00, 0x1c90d20, indexKOFXISprites_DuckKing, 0x10 },
    { L"Start+C - Extra Move 2", 0x1c90d20, 0x1c90d40, indexKOFXISprites_DuckKing, 0x11 },
    { L"Start+C - Extra Move 3", 0x1c90d40, 0x1c90d60, indexKOFXISprites_DuckKing, 0x12 },
    { L"Start+C - Extra Move 4", 0x1c90d60, 0x1c90d80, indexKOFXISprites_DuckKing, 0x13 },
    { L"Start+C - Extra Move 5", 0x1c90d80, 0x1c90da0, indexKOFXISprites_DuckKing, 0x14 },
    { L"Start+C - Extra Move 6", 0x1c90da0, 0x1c90dc0, indexKOFXISprites_DuckKing, 0x15 },
    { L"Start+C - Extra Move 7", 0x1c90dc0, 0x1c90de0, indexKOFXISprites_DuckKing, 0x16 },
    { L"Start+C - Extra Move 8", 0x1c90de0, 0x1c90e00, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_DUCKKING_PALETTES_SD[] =
{
    { L"Duck King SD", 0x1c90e00, 0x1c90e20, indexKOFXISprites_DuckKing },
    { L"Start+D - Super Stuff 1", 0x1c90e20, 0x1c90e40, indexKOFXISprites_DuckKing, 0x20 },
    { L"Start+D - Electric Palette", 0x1c90e40, 0x1c90e60, indexKOFXISprites_DuckKing, 0x41 },
    { L"Start+D - Darker Palette", 0x1c90e60, 0x1c90e80, indexKOFXISprites_DuckKing, 0x40 },
    { L"Start+D - Super Stuff 2", 0x1c90e80, 0x1c90ea0, indexKOFXISprites_DuckKing, 0x21 },
    { L"Start+D - Character Extra 1", 0x1c90ea0, 0x1c90ec0, indexKOFXISprites_DuckKing, 0x30 },
    { L"Start+D - Character Extra 2", 0x1c90ec0, 0x1c90ee0, indexKOFXISprites_DuckKing, 0x31 },
    { L"Start+D - Character Extra 3", 0x1c90ee0, 0x1c90f00, indexKOFXISprites_DuckKing, 0x32 },
    { L"Start+D - Extra Move 1", 0x1c90f00, 0x1c90f20, indexKOFXISprites_DuckKing, 0x10 },
    { L"Start+D - Extra Move 2", 0x1c90f20, 0x1c90f40, indexKOFXISprites_DuckKing, 0x11 },
    { L"Start+D - Extra Move 3", 0x1c90f40, 0x1c90f60, indexKOFXISprites_DuckKing, 0x12 },
    { L"Start+D - Extra Move 4", 0x1c90f60, 0x1c90f80, indexKOFXISprites_DuckKing, 0x13 },
    { L"Start+D - Extra Move 5", 0x1c90f80, 0x1c90fa0, indexKOFXISprites_DuckKing, 0x14 },
    { L"Start+D - Extra Move 6", 0x1c90fa0, 0x1c90fc0, indexKOFXISprites_DuckKing, 0x15 },
    { L"Start+D - Extra Move 7", 0x1c90fc0, 0x1c90fe0, indexKOFXISprites_DuckKing, 0x16 },
    { L"Start+D - Extra Move 8", 0x1c90fe0, 0x1c91000, indexKOFXISprites_DuckKing, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_A[] =
{
    { L"Ryo A", 0x1df4000, 0x1df4020, indexKOFXISprites_Ryo },
    { L"A - Super Stuff 1", 0x1df4020, 0x1df4040, indexKOFXISprites_Ryo, 0x20 },
    { L"A - Electric Palette", 0x1df4040, 0x1df4060, indexKOFXISprites_Ryo, 0x41 },
    { L"A - Darker Palette", 0x1df4060, 0x1df4080, indexKOFXISprites_Ryo, 0x40 },
    { L"A - Super Stuff 2", 0x1df4080, 0x1df40a0, indexKOFXISprites_Ryo, 0x21 },
    { L"A - Character Extra 1", 0x1df40a0, 0x1df40c0, indexKOFXISprites_Ryo, 0x30 },
    { L"A - Character Extra 2", 0x1df40c0, 0x1df40e0, indexKOFXISprites_Ryo, 0x31 },
    { L"A - Character Extra 3", 0x1df40e0, 0x1df4100, indexKOFXISprites_Ryo, 0x32 },
    { L"A - Extra Move 1", 0x1df4100, 0x1df4120, indexKOFXISprites_Ryo, 0x10 },
    { L"A - Extra Move 2", 0x1df4120, 0x1df4140, indexKOFXISprites_Ryo, 0x11 },
    { L"A - Extra Move 3", 0x1df4140, 0x1df4160, indexKOFXISprites_Ryo, 0x12 },
    { L"A - Extra Move 4", 0x1df4160, 0x1df4180, indexKOFXISprites_Ryo, 0x13 },
    { L"A - Extra Move 5", 0x1df4180, 0x1df41a0, indexKOFXISprites_Ryo, 0x14 },
    { L"A - Extra Move 6", 0x1df41a0, 0x1df41c0, indexKOFXISprites_Ryo, 0x15 },
    { L"A - Extra Move 7", 0x1df41c0, 0x1df41e0, indexKOFXISprites_Ryo, 0x16 },
    { L"A - Extra Move 8", 0x1df41e0, 0x1df4200, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_B[] =
{
    { L"Ryo B", 0x1df4200, 0x1df4220, indexKOFXISprites_Ryo },
    { L"B - Super Stuff 1", 0x1df4220, 0x1df4240, indexKOFXISprites_Ryo, 0x20 },
    { L"B - Electric Palette", 0x1df4240, 0x1df4260, indexKOFXISprites_Ryo, 0x41 },
    { L"B - Darker Palette", 0x1df4260, 0x1df4280, indexKOFXISprites_Ryo, 0x40 },
    { L"B - Super Stuff 2", 0x1df4280, 0x1df42a0, indexKOFXISprites_Ryo, 0x21 },
    { L"B - Character Extra 1", 0x1df42a0, 0x1df42c0, indexKOFXISprites_Ryo, 0x30 },
    { L"B - Character Extra 2", 0x1df42c0, 0x1df42e0, indexKOFXISprites_Ryo, 0x31 },
    { L"B - Character Extra 3", 0x1df42e0, 0x1df4300, indexKOFXISprites_Ryo, 0x32 },
    { L"B - Extra Move 1", 0x1df4300, 0x1df4320, indexKOFXISprites_Ryo, 0x10 },
    { L"B - Extra Move 2", 0x1df4320, 0x1df4340, indexKOFXISprites_Ryo, 0x11 },
    { L"B - Extra Move 3", 0x1df4340, 0x1df4360, indexKOFXISprites_Ryo, 0x12 },
    { L"B - Extra Move 4", 0x1df4360, 0x1df4380, indexKOFXISprites_Ryo, 0x13 },
    { L"B - Extra Move 5", 0x1df4380, 0x1df43a0, indexKOFXISprites_Ryo, 0x14 },
    { L"B - Extra Move 6", 0x1df43a0, 0x1df43c0, indexKOFXISprites_Ryo, 0x15 },
    { L"B - Extra Move 7", 0x1df43c0, 0x1df43e0, indexKOFXISprites_Ryo, 0x16 },
    { L"B - Extra Move 8", 0x1df43e0, 0x1df4400, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_C[] =
{
    { L"Ryo C", 0x1df4400, 0x1df4420, indexKOFXISprites_Ryo },
    { L"C - Super Stuff 1", 0x1df4420, 0x1df4440, indexKOFXISprites_Ryo, 0x20 },
    { L"C - Electric Palette", 0x1df4440, 0x1df4460, indexKOFXISprites_Ryo, 0x41 },
    { L"C - Darker Palette", 0x1df4460, 0x1df4480, indexKOFXISprites_Ryo, 0x40 },
    { L"C - Super Stuff 2", 0x1df4480, 0x1df44a0, indexKOFXISprites_Ryo, 0x21 },
    { L"C - Character Extra 1", 0x1df44a0, 0x1df44c0, indexKOFXISprites_Ryo, 0x30 },
    { L"C - Character Extra 2", 0x1df44c0, 0x1df44e0, indexKOFXISprites_Ryo, 0x31 },
    { L"C - Character Extra 3", 0x1df44e0, 0x1df4500, indexKOFXISprites_Ryo, 0x32 },
    { L"C - Extra Move 1", 0x1df4500, 0x1df4520, indexKOFXISprites_Ryo, 0x10 },
    { L"C - Extra Move 2", 0x1df4520, 0x1df4540, indexKOFXISprites_Ryo, 0x11 },
    { L"C - Extra Move 3", 0x1df4540, 0x1df4560, indexKOFXISprites_Ryo, 0x12 },
    { L"C - Extra Move 4", 0x1df4560, 0x1df4580, indexKOFXISprites_Ryo, 0x13 },
    { L"C - Extra Move 5", 0x1df4580, 0x1df45a0, indexKOFXISprites_Ryo, 0x14 },
    { L"C - Extra Move 6", 0x1df45a0, 0x1df45c0, indexKOFXISprites_Ryo, 0x15 },
    { L"C - Extra Move 7", 0x1df45c0, 0x1df45e0, indexKOFXISprites_Ryo, 0x16 },
    { L"C - Extra Move 8", 0x1df45e0, 0x1df4600, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_D[] =
{
    { L"Ryo D", 0x1df4600, 0x1df4620, indexKOFXISprites_Ryo },
    { L"D - Super Stuff 1", 0x1df4620, 0x1df4640, indexKOFXISprites_Ryo, 0x20 },
    { L"D - Electric Palette", 0x1df4640, 0x1df4660, indexKOFXISprites_Ryo, 0x41 },
    { L"D - Darker Palette", 0x1df4660, 0x1df4680, indexKOFXISprites_Ryo, 0x40 },
    { L"D - Super Stuff 2", 0x1df4680, 0x1df46a0, indexKOFXISprites_Ryo, 0x21 },
    { L"D - Character Extra 1", 0x1df46a0, 0x1df46c0, indexKOFXISprites_Ryo, 0x30 },
    { L"D - Character Extra 2", 0x1df46c0, 0x1df46e0, indexKOFXISprites_Ryo, 0x31 },
    { L"D - Character Extra 3", 0x1df46e0, 0x1df4700, indexKOFXISprites_Ryo, 0x32 },
    { L"D - Extra Move 1", 0x1df4700, 0x1df4720, indexKOFXISprites_Ryo, 0x10 },
    { L"D - Extra Move 2", 0x1df4720, 0x1df4740, indexKOFXISprites_Ryo, 0x11 },
    { L"D - Extra Move 3", 0x1df4740, 0x1df4760, indexKOFXISprites_Ryo, 0x12 },
    { L"D - Extra Move 4", 0x1df4760, 0x1df4780, indexKOFXISprites_Ryo, 0x13 },
    { L"D - Extra Move 5", 0x1df4780, 0x1df47a0, indexKOFXISprites_Ryo, 0x14 },
    { L"D - Extra Move 6", 0x1df47a0, 0x1df47c0, indexKOFXISprites_Ryo, 0x15 },
    { L"D - Extra Move 7", 0x1df47c0, 0x1df47e0, indexKOFXISprites_Ryo, 0x16 },
    { L"D - Extra Move 8", 0x1df47e0, 0x1df4800, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_EA[] =
{
    { L"Ryo EA", 0x1df4800, 0x1df4820, indexKOFXISprites_Ryo },
    { L"E+A - Super Stuff 1", 0x1df4820, 0x1df4840, indexKOFXISprites_Ryo, 0x20 },
    { L"E+A - Electric Palette", 0x1df4840, 0x1df4860, indexKOFXISprites_Ryo, 0x41 },
    { L"E+A - Darker Palette", 0x1df4860, 0x1df4880, indexKOFXISprites_Ryo, 0x40 },
    { L"E+A - Super Stuff 2", 0x1df4880, 0x1df48a0, indexKOFXISprites_Ryo, 0x21 },
    { L"E+A - Character Extra 1", 0x1df48a0, 0x1df48c0, indexKOFXISprites_Ryo, 0x30 },
    { L"E+A - Character Extra 2", 0x1df48c0, 0x1df48e0, indexKOFXISprites_Ryo, 0x31 },
    { L"E+A - Character Extra 3", 0x1df48e0, 0x1df4900, indexKOFXISprites_Ryo, 0x32 },
    { L"E+A - Extra Move 1", 0x1df4900, 0x1df4920, indexKOFXISprites_Ryo, 0x10 },
    { L"E+A - Extra Move 2", 0x1df4920, 0x1df4940, indexKOFXISprites_Ryo, 0x11 },
    { L"E+A - Extra Move 3", 0x1df4940, 0x1df4960, indexKOFXISprites_Ryo, 0x12 },
    { L"E+A - Extra Move 4", 0x1df4960, 0x1df4980, indexKOFXISprites_Ryo, 0x13 },
    { L"E+A - Extra Move 5", 0x1df4980, 0x1df49a0, indexKOFXISprites_Ryo, 0x14 },
    { L"E+A - Extra Move 6", 0x1df49a0, 0x1df49c0, indexKOFXISprites_Ryo, 0x15 },
    { L"E+A - Extra Move 7", 0x1df49c0, 0x1df49e0, indexKOFXISprites_Ryo, 0x16 },
    { L"E+A - Extra Move 8", 0x1df49e0, 0x1df4a00, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_EB[] =
{
    { L"Ryo EB", 0x1df4a00, 0x1df4a20, indexKOFXISprites_Ryo },
    { L"E+B - Super Stuff 1", 0x1df4a20, 0x1df4a40, indexKOFXISprites_Ryo, 0x20 },
    { L"E+B - Electric Palette", 0x1df4a40, 0x1df4a60, indexKOFXISprites_Ryo, 0x41 },
    { L"E+B - Darker Palette", 0x1df4a60, 0x1df4a80, indexKOFXISprites_Ryo, 0x40 },
    { L"E+B - Super Stuff 2", 0x1df4a80, 0x1df4aa0, indexKOFXISprites_Ryo, 0x21 },
    { L"E+B - Character Extra 1", 0x1df4aa0, 0x1df4ac0, indexKOFXISprites_Ryo, 0x30 },
    { L"E+B - Character Extra 2", 0x1df4ac0, 0x1df4ae0, indexKOFXISprites_Ryo, 0x31 },
    { L"E+B - Character Extra 3", 0x1df4ae0, 0x1df4b00, indexKOFXISprites_Ryo, 0x32 },
    { L"E+B - Extra Move 1", 0x1df4b00, 0x1df4b20, indexKOFXISprites_Ryo, 0x10 },
    { L"E+B - Extra Move 2", 0x1df4b20, 0x1df4b40, indexKOFXISprites_Ryo, 0x11 },
    { L"E+B - Extra Move 3", 0x1df4b40, 0x1df4b60, indexKOFXISprites_Ryo, 0x12 },
    { L"E+B - Extra Move 4", 0x1df4b60, 0x1df4b80, indexKOFXISprites_Ryo, 0x13 },
    { L"E+B - Extra Move 5", 0x1df4b80, 0x1df4ba0, indexKOFXISprites_Ryo, 0x14 },
    { L"E+B - Extra Move 6", 0x1df4ba0, 0x1df4bc0, indexKOFXISprites_Ryo, 0x15 },
    { L"E+B - Extra Move 7", 0x1df4bc0, 0x1df4be0, indexKOFXISprites_Ryo, 0x16 },
    { L"E+B - Extra Move 8", 0x1df4be0, 0x1df4c00, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_EC[] =
{
    { L"Ryo EC", 0x1df4c00, 0x1df4c20, indexKOFXISprites_Ryo },
    { L"E+C - Super Stuff 1", 0x1df4c20, 0x1df4c40, indexKOFXISprites_Ryo, 0x20 },
    { L"E+C - Electric Palette", 0x1df4c40, 0x1df4c60, indexKOFXISprites_Ryo, 0x41 },
    { L"E+C - Darker Palette", 0x1df4c60, 0x1df4c80, indexKOFXISprites_Ryo, 0x40 },
    { L"E+C - Super Stuff 2", 0x1df4c80, 0x1df4ca0, indexKOFXISprites_Ryo, 0x21 },
    { L"E+C - Character Extra 1", 0x1df4ca0, 0x1df4cc0, indexKOFXISprites_Ryo, 0x30 },
    { L"E+C - Character Extra 2", 0x1df4cc0, 0x1df4ce0, indexKOFXISprites_Ryo, 0x31 },
    { L"E+C - Character Extra 3", 0x1df4ce0, 0x1df4d00, indexKOFXISprites_Ryo, 0x32 },
    { L"E+C - Extra Move 1", 0x1df4d00, 0x1df4d20, indexKOFXISprites_Ryo, 0x10 },
    { L"E+C - Extra Move 2", 0x1df4d20, 0x1df4d40, indexKOFXISprites_Ryo, 0x11 },
    { L"E+C - Extra Move 3", 0x1df4d40, 0x1df4d60, indexKOFXISprites_Ryo, 0x12 },
    { L"E+C - Extra Move 4", 0x1df4d60, 0x1df4d80, indexKOFXISprites_Ryo, 0x13 },
    { L"E+C - Extra Move 5", 0x1df4d80, 0x1df4da0, indexKOFXISprites_Ryo, 0x14 },
    { L"E+C - Extra Move 6", 0x1df4da0, 0x1df4dc0, indexKOFXISprites_Ryo, 0x15 },
    { L"E+C - Extra Move 7", 0x1df4dc0, 0x1df4de0, indexKOFXISprites_Ryo, 0x16 },
    { L"E+C - Extra Move 8", 0x1df4de0, 0x1df4e00, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_ED[] =
{
    { L"Ryo ED", 0x1df4e00, 0x1df4e20, indexKOFXISprites_Ryo },
    { L"E+D - Super Stuff 1", 0x1df4e20, 0x1df4e40, indexKOFXISprites_Ryo, 0x20 },
    { L"E+D - Electric Palette", 0x1df4e40, 0x1df4e60, indexKOFXISprites_Ryo, 0x41 },
    { L"E+D - Darker Palette", 0x1df4e60, 0x1df4e80, indexKOFXISprites_Ryo, 0x40 },
    { L"E+D - Super Stuff 2", 0x1df4e80, 0x1df4ea0, indexKOFXISprites_Ryo, 0x21 },
    { L"E+D - Character Extra 1", 0x1df4ea0, 0x1df4ec0, indexKOFXISprites_Ryo, 0x30 },
    { L"E+D - Character Extra 2", 0x1df4ec0, 0x1df4ee0, indexKOFXISprites_Ryo, 0x31 },
    { L"E+D - Character Extra 3", 0x1df4ee0, 0x1df4f00, indexKOFXISprites_Ryo, 0x32 },
    { L"E+D - Extra Move 1", 0x1df4f00, 0x1df4f20, indexKOFXISprites_Ryo, 0x10 },
    { L"E+D - Extra Move 2", 0x1df4f20, 0x1df4f40, indexKOFXISprites_Ryo, 0x11 },
    { L"E+D - Extra Move 3", 0x1df4f40, 0x1df4f60, indexKOFXISprites_Ryo, 0x12 },
    { L"E+D - Extra Move 4", 0x1df4f60, 0x1df4f80, indexKOFXISprites_Ryo, 0x13 },
    { L"E+D - Extra Move 5", 0x1df4f80, 0x1df4fa0, indexKOFXISprites_Ryo, 0x14 },
    { L"E+D - Extra Move 6", 0x1df4fa0, 0x1df4fc0, indexKOFXISprites_Ryo, 0x15 },
    { L"E+D - Extra Move 7", 0x1df4fc0, 0x1df4fe0, indexKOFXISprites_Ryo, 0x16 },
    { L"E+D - Extra Move 8", 0x1df4fe0, 0x1df5000, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_SA[] =
{
    { L"Ryo SA", 0x1df5000, 0x1df5020, indexKOFXISprites_Ryo },
    { L"Start+A - Super Stuff 1", 0x1df5020, 0x1df5040, indexKOFXISprites_Ryo, 0x20 },
    { L"Start+A - Electric Palette", 0x1df5040, 0x1df5060, indexKOFXISprites_Ryo, 0x41 },
    { L"Start+A - Darker Palette", 0x1df5060, 0x1df5080, indexKOFXISprites_Ryo, 0x40 },
    { L"Start+A - Super Stuff 2", 0x1df5080, 0x1df50a0, indexKOFXISprites_Ryo, 0x21 },
    { L"Start+A - Character Extra 1", 0x1df50a0, 0x1df50c0, indexKOFXISprites_Ryo, 0x30 },
    { L"Start+A - Character Extra 2", 0x1df50c0, 0x1df50e0, indexKOFXISprites_Ryo, 0x31 },
    { L"Start+A - Character Extra 3", 0x1df50e0, 0x1df5100, indexKOFXISprites_Ryo, 0x32 },
    { L"Start+A - Extra Move 1", 0x1df5100, 0x1df5120, indexKOFXISprites_Ryo, 0x10 },
    { L"Start+A - Extra Move 2", 0x1df5120, 0x1df5140, indexKOFXISprites_Ryo, 0x11 },
    { L"Start+A - Extra Move 3", 0x1df5140, 0x1df5160, indexKOFXISprites_Ryo, 0x12 },
    { L"Start+A - Extra Move 4", 0x1df5160, 0x1df5180, indexKOFXISprites_Ryo, 0x13 },
    { L"Start+A - Extra Move 5", 0x1df5180, 0x1df51a0, indexKOFXISprites_Ryo, 0x14 },
    { L"Start+A - Extra Move 6", 0x1df51a0, 0x1df51c0, indexKOFXISprites_Ryo, 0x15 },
    { L"Start+A - Extra Move 7", 0x1df51c0, 0x1df51e0, indexKOFXISprites_Ryo, 0x16 },
    { L"Start+A - Extra Move 8", 0x1df51e0, 0x1df5200, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_SB[] =
{
    { L"Ryo SB", 0x1df5200, 0x1df5220, indexKOFXISprites_Ryo },
    { L"Start+B - Super Stuff 1", 0x1df5220, 0x1df5240, indexKOFXISprites_Ryo, 0x20 },
    { L"Start+B - Electric Palette", 0x1df5240, 0x1df5260, indexKOFXISprites_Ryo, 0x41 },
    { L"Start+B - Darker Palette", 0x1df5260, 0x1df5280, indexKOFXISprites_Ryo, 0x40 },
    { L"Start+B - Super Stuff 2", 0x1df5280, 0x1df52a0, indexKOFXISprites_Ryo, 0x21 },
    { L"Start+B - Character Extra 1", 0x1df52a0, 0x1df52c0, indexKOFXISprites_Ryo, 0x30 },
    { L"Start+B - Character Extra 2", 0x1df52c0, 0x1df52e0, indexKOFXISprites_Ryo, 0x31 },
    { L"Start+B - Character Extra 3", 0x1df52e0, 0x1df5300, indexKOFXISprites_Ryo, 0x32 },
    { L"Start+B - Extra Move 1", 0x1df5300, 0x1df5320, indexKOFXISprites_Ryo, 0x10 },
    { L"Start+B - Extra Move 2", 0x1df5320, 0x1df5340, indexKOFXISprites_Ryo, 0x11 },
    { L"Start+B - Extra Move 3", 0x1df5340, 0x1df5360, indexKOFXISprites_Ryo, 0x12 },
    { L"Start+B - Extra Move 4", 0x1df5360, 0x1df5380, indexKOFXISprites_Ryo, 0x13 },
    { L"Start+B - Extra Move 5", 0x1df5380, 0x1df53a0, indexKOFXISprites_Ryo, 0x14 },
    { L"Start+B - Extra Move 6", 0x1df53a0, 0x1df53c0, indexKOFXISprites_Ryo, 0x15 },
    { L"Start+B - Extra Move 7", 0x1df53c0, 0x1df53e0, indexKOFXISprites_Ryo, 0x16 },
    { L"Start+B - Extra Move 8", 0x1df53e0, 0x1df5400, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_SC[] =
{
    { L"Ryo SC", 0x1df5400, 0x1df5420, indexKOFXISprites_Ryo },
    { L"Start+C - Super Stuff 1", 0x1df5420, 0x1df5440, indexKOFXISprites_Ryo, 0x20 },
    { L"Start+C - Electric Palette", 0x1df5440, 0x1df5460, indexKOFXISprites_Ryo, 0x41 },
    { L"Start+C - Darker Palette", 0x1df5460, 0x1df5480, indexKOFXISprites_Ryo, 0x40 },
    { L"Start+C - Super Stuff 2", 0x1df5480, 0x1df54a0, indexKOFXISprites_Ryo, 0x21 },
    { L"Start+C - Character Extra 1", 0x1df54a0, 0x1df54c0, indexKOFXISprites_Ryo, 0x30 },
    { L"Start+C - Character Extra 2", 0x1df54c0, 0x1df54e0, indexKOFXISprites_Ryo, 0x31 },
    { L"Start+C - Character Extra 3", 0x1df54e0, 0x1df5500, indexKOFXISprites_Ryo, 0x32 },
    { L"Start+C - Extra Move 1", 0x1df5500, 0x1df5520, indexKOFXISprites_Ryo, 0x10 },
    { L"Start+C - Extra Move 2", 0x1df5520, 0x1df5540, indexKOFXISprites_Ryo, 0x11 },
    { L"Start+C - Extra Move 3", 0x1df5540, 0x1df5560, indexKOFXISprites_Ryo, 0x12 },
    { L"Start+C - Extra Move 4", 0x1df5560, 0x1df5580, indexKOFXISprites_Ryo, 0x13 },
    { L"Start+C - Extra Move 5", 0x1df5580, 0x1df55a0, indexKOFXISprites_Ryo, 0x14 },
    { L"Start+C - Extra Move 6", 0x1df55a0, 0x1df55c0, indexKOFXISprites_Ryo, 0x15 },
    { L"Start+C - Extra Move 7", 0x1df55c0, 0x1df55e0, indexKOFXISprites_Ryo, 0x16 },
    { L"Start+C - Extra Move 8", 0x1df55e0, 0x1df5600, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RYO_PALETTES_SD[] =
{
    { L"Ryo SD", 0x1df5600, 0x1df5620, indexKOFXISprites_Ryo },
    { L"Start+D - Super Stuff 1", 0x1df5620, 0x1df5640, indexKOFXISprites_Ryo, 0x20 },
    { L"Start+D - Electric Palette", 0x1df5640, 0x1df5660, indexKOFXISprites_Ryo, 0x41 },
    { L"Start+D - Darker Palette", 0x1df5660, 0x1df5680, indexKOFXISprites_Ryo, 0x40 },
    { L"Start+D - Super Stuff 2", 0x1df5680, 0x1df56a0, indexKOFXISprites_Ryo, 0x21 },
    { L"Start+D - Character Extra 1", 0x1df56a0, 0x1df56c0, indexKOFXISprites_Ryo, 0x30 },
    { L"Start+D - Character Extra 2", 0x1df56c0, 0x1df56e0, indexKOFXISprites_Ryo, 0x31 },
    { L"Start+D - Character Extra 3", 0x1df56e0, 0x1df5700, indexKOFXISprites_Ryo, 0x32 },
    { L"Start+D - Extra Move 1", 0x1df5700, 0x1df5720, indexKOFXISprites_Ryo, 0x10 },
    { L"Start+D - Extra Move 2", 0x1df5720, 0x1df5740, indexKOFXISprites_Ryo, 0x11 },
    { L"Start+D - Extra Move 3", 0x1df5740, 0x1df5760, indexKOFXISprites_Ryo, 0x12 },
    { L"Start+D - Extra Move 4", 0x1df5760, 0x1df5780, indexKOFXISprites_Ryo, 0x13 },
    { L"Start+D - Extra Move 5", 0x1df5780, 0x1df57a0, indexKOFXISprites_Ryo, 0x14 },
    { L"Start+D - Extra Move 6", 0x1df57a0, 0x1df57c0, indexKOFXISprites_Ryo, 0x15 },
    { L"Start+D - Extra Move 7", 0x1df57c0, 0x1df57e0, indexKOFXISprites_Ryo, 0x16 },
    { L"Start+D - Extra Move 8", 0x1df57e0, 0x1df5800, indexKOFXISprites_Ryo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_A[] =
{
    { L"Yuri A", 0x1f5f000, 0x1f5f020, indexKOFXISprites_Yuri },
    { L"A - Super Stuff 1", 0x1f5f020, 0x1f5f040, indexKOFXISprites_Yuri, 0x20 },
    { L"A - Electric Palette", 0x1f5f040, 0x1f5f060, indexKOFXISprites_Yuri, 0x41 },
    { L"A - Darker Palette", 0x1f5f060, 0x1f5f080, indexKOFXISprites_Yuri, 0x40 },
    { L"A - Super Stuff 2", 0x1f5f080, 0x1f5f0a0, indexKOFXISprites_Yuri, 0x21 },
    { L"A - Character Extra 1", 0x1f5f0a0, 0x1f5f0c0, indexKOFXISprites_Yuri, 0x30 },
    { L"A - Character Extra 2", 0x1f5f0c0, 0x1f5f0e0, indexKOFXISprites_Yuri, 0x31 },
    { L"A - Character Extra 3", 0x1f5f0e0, 0x1f5f100, indexKOFXISprites_Yuri, 0x32 },
    { L"A - Extra Move 1", 0x1f5f100, 0x1f5f120, indexKOFXISprites_Yuri, 0x10 },
    { L"A - Extra Move 2", 0x1f5f120, 0x1f5f140, indexKOFXISprites_Yuri, 0x11 },
    { L"A - Extra Move 3", 0x1f5f140, 0x1f5f160, indexKOFXISprites_Yuri, 0x12 },
    { L"A - Extra Move 4", 0x1f5f160, 0x1f5f180, indexKOFXISprites_Yuri, 0x13 },
    { L"A - Extra Move 5", 0x1f5f180, 0x1f5f1a0, indexKOFXISprites_Yuri, 0x14 },
    { L"A - Extra Move 6", 0x1f5f1a0, 0x1f5f1c0, indexKOFXISprites_Yuri, 0x15 },
    { L"A - Extra Move 7", 0x1f5f1c0, 0x1f5f1e0, indexKOFXISprites_Yuri, 0x16 },
    { L"A - Extra Move 8", 0x1f5f1e0, 0x1f5f200, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_B[] =
{
    { L"Yuri B", 0x1f5f200, 0x1f5f220, indexKOFXISprites_Yuri },
    { L"B - Super Stuff 1", 0x1f5f220, 0x1f5f240, indexKOFXISprites_Yuri, 0x20 },
    { L"B - Electric Palette", 0x1f5f240, 0x1f5f260, indexKOFXISprites_Yuri, 0x41 },
    { L"B - Darker Palette", 0x1f5f260, 0x1f5f280, indexKOFXISprites_Yuri, 0x40 },
    { L"B - Super Stuff 2", 0x1f5f280, 0x1f5f2a0, indexKOFXISprites_Yuri, 0x21 },
    { L"B - Character Extra 1", 0x1f5f2a0, 0x1f5f2c0, indexKOFXISprites_Yuri, 0x30 },
    { L"B - Character Extra 2", 0x1f5f2c0, 0x1f5f2e0, indexKOFXISprites_Yuri, 0x31 },
    { L"B - Character Extra 3", 0x1f5f2e0, 0x1f5f300, indexKOFXISprites_Yuri, 0x32 },
    { L"B - Extra Move 1", 0x1f5f300, 0x1f5f320, indexKOFXISprites_Yuri, 0x10 },
    { L"B - Extra Move 2", 0x1f5f320, 0x1f5f340, indexKOFXISprites_Yuri, 0x11 },
    { L"B - Extra Move 3", 0x1f5f340, 0x1f5f360, indexKOFXISprites_Yuri, 0x12 },
    { L"B - Extra Move 4", 0x1f5f360, 0x1f5f380, indexKOFXISprites_Yuri, 0x13 },
    { L"B - Extra Move 5", 0x1f5f380, 0x1f5f3a0, indexKOFXISprites_Yuri, 0x14 },
    { L"B - Extra Move 6", 0x1f5f3a0, 0x1f5f3c0, indexKOFXISprites_Yuri, 0x15 },
    { L"B - Extra Move 7", 0x1f5f3c0, 0x1f5f3e0, indexKOFXISprites_Yuri, 0x16 },
    { L"B - Extra Move 8", 0x1f5f3e0, 0x1f5f400, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_C[] =
{
    { L"Yuri C", 0x1f5f400, 0x1f5f420, indexKOFXISprites_Yuri },
    { L"C - Super Stuff 1", 0x1f5f420, 0x1f5f440, indexKOFXISprites_Yuri, 0x20 },
    { L"C - Electric Palette", 0x1f5f440, 0x1f5f460, indexKOFXISprites_Yuri, 0x41 },
    { L"C - Darker Palette", 0x1f5f460, 0x1f5f480, indexKOFXISprites_Yuri, 0x40 },
    { L"C - Super Stuff 2", 0x1f5f480, 0x1f5f4a0, indexKOFXISprites_Yuri, 0x21 },
    { L"C - Character Extra 1", 0x1f5f4a0, 0x1f5f4c0, indexKOFXISprites_Yuri, 0x30 },
    { L"C - Character Extra 2", 0x1f5f4c0, 0x1f5f4e0, indexKOFXISprites_Yuri, 0x31 },
    { L"C - Character Extra 3", 0x1f5f4e0, 0x1f5f500, indexKOFXISprites_Yuri, 0x32 },
    { L"C - Extra Move 1", 0x1f5f500, 0x1f5f520, indexKOFXISprites_Yuri, 0x10 },
    { L"C - Extra Move 2", 0x1f5f520, 0x1f5f540, indexKOFXISprites_Yuri, 0x11 },
    { L"C - Extra Move 3", 0x1f5f540, 0x1f5f560, indexKOFXISprites_Yuri, 0x12 },
    { L"C - Extra Move 4", 0x1f5f560, 0x1f5f580, indexKOFXISprites_Yuri, 0x13 },
    { L"C - Extra Move 5", 0x1f5f580, 0x1f5f5a0, indexKOFXISprites_Yuri, 0x14 },
    { L"C - Extra Move 6", 0x1f5f5a0, 0x1f5f5c0, indexKOFXISprites_Yuri, 0x15 },
    { L"C - Extra Move 7", 0x1f5f5c0, 0x1f5f5e0, indexKOFXISprites_Yuri, 0x16 },
    { L"C - Extra Move 8", 0x1f5f5e0, 0x1f5f600, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_D[] =
{
    { L"Yuri D", 0x1f5f600, 0x1f5f620, indexKOFXISprites_Yuri },
    { L"D - Super Stuff 1", 0x1f5f620, 0x1f5f640, indexKOFXISprites_Yuri, 0x20 },
    { L"D - Electric Palette", 0x1f5f640, 0x1f5f660, indexKOFXISprites_Yuri, 0x41 },
    { L"D - Darker Palette", 0x1f5f660, 0x1f5f680, indexKOFXISprites_Yuri, 0x40 },
    { L"D - Super Stuff 2", 0x1f5f680, 0x1f5f6a0, indexKOFXISprites_Yuri, 0x21 },
    { L"D - Character Extra 1", 0x1f5f6a0, 0x1f5f6c0, indexKOFXISprites_Yuri, 0x30 },
    { L"D - Character Extra 2", 0x1f5f6c0, 0x1f5f6e0, indexKOFXISprites_Yuri, 0x31 },
    { L"D - Character Extra 3", 0x1f5f6e0, 0x1f5f700, indexKOFXISprites_Yuri, 0x32 },
    { L"D - Extra Move 1", 0x1f5f700, 0x1f5f720, indexKOFXISprites_Yuri, 0x10 },
    { L"D - Extra Move 2", 0x1f5f720, 0x1f5f740, indexKOFXISprites_Yuri, 0x11 },
    { L"D - Extra Move 3", 0x1f5f740, 0x1f5f760, indexKOFXISprites_Yuri, 0x12 },
    { L"D - Extra Move 4", 0x1f5f760, 0x1f5f780, indexKOFXISprites_Yuri, 0x13 },
    { L"D - Extra Move 5", 0x1f5f780, 0x1f5f7a0, indexKOFXISprites_Yuri, 0x14 },
    { L"D - Extra Move 6", 0x1f5f7a0, 0x1f5f7c0, indexKOFXISprites_Yuri, 0x15 },
    { L"D - Extra Move 7", 0x1f5f7c0, 0x1f5f7e0, indexKOFXISprites_Yuri, 0x16 },
    { L"D - Extra Move 8", 0x1f5f7e0, 0x1f5f800, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_EA[] =
{
    { L"Yuri EA", 0x1f5f800, 0x1f5f820, indexKOFXISprites_Yuri },
    { L"E+A - Super Stuff 1", 0x1f5f820, 0x1f5f840, indexKOFXISprites_Yuri, 0x20 },
    { L"E+A - Electric Palette", 0x1f5f840, 0x1f5f860, indexKOFXISprites_Yuri, 0x41 },
    { L"E+A - Darker Palette", 0x1f5f860, 0x1f5f880, indexKOFXISprites_Yuri, 0x40 },
    { L"E+A - Super Stuff 2", 0x1f5f880, 0x1f5f8a0, indexKOFXISprites_Yuri, 0x21 },
    { L"E+A - Character Extra 1", 0x1f5f8a0, 0x1f5f8c0, indexKOFXISprites_Yuri, 0x30 },
    { L"E+A - Character Extra 2", 0x1f5f8c0, 0x1f5f8e0, indexKOFXISprites_Yuri, 0x31 },
    { L"E+A - Character Extra 3", 0x1f5f8e0, 0x1f5f900, indexKOFXISprites_Yuri, 0x32 },
    { L"E+A - Extra Move 1", 0x1f5f900, 0x1f5f920, indexKOFXISprites_Yuri, 0x10 },
    { L"E+A - Extra Move 2", 0x1f5f920, 0x1f5f940, indexKOFXISprites_Yuri, 0x11 },
    { L"E+A - Extra Move 3", 0x1f5f940, 0x1f5f960, indexKOFXISprites_Yuri, 0x12 },
    { L"E+A - Extra Move 4", 0x1f5f960, 0x1f5f980, indexKOFXISprites_Yuri, 0x13 },
    { L"E+A - Extra Move 5", 0x1f5f980, 0x1f5f9a0, indexKOFXISprites_Yuri, 0x14 },
    { L"E+A - Extra Move 6", 0x1f5f9a0, 0x1f5f9c0, indexKOFXISprites_Yuri, 0x15 },
    { L"E+A - Extra Move 7", 0x1f5f9c0, 0x1f5f9e0, indexKOFXISprites_Yuri, 0x16 },
    { L"E+A - Extra Move 8", 0x1f5f9e0, 0x1f5fa00, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_EB[] =
{
    { L"Yuri EB", 0x1f5fa00, 0x1f5fa20, indexKOFXISprites_Yuri },
    { L"E+B - Super Stuff 1", 0x1f5fa20, 0x1f5fa40, indexKOFXISprites_Yuri, 0x20 },
    { L"E+B - Electric Palette", 0x1f5fa40, 0x1f5fa60, indexKOFXISprites_Yuri, 0x41 },
    { L"E+B - Darker Palette", 0x1f5fa60, 0x1f5fa80, indexKOFXISprites_Yuri, 0x40 },
    { L"E+B - Super Stuff 2", 0x1f5fa80, 0x1f5faa0, indexKOFXISprites_Yuri, 0x21 },
    { L"E+B - Character Extra 1", 0x1f5faa0, 0x1f5fac0, indexKOFXISprites_Yuri, 0x30 },
    { L"E+B - Character Extra 2", 0x1f5fac0, 0x1f5fae0, indexKOFXISprites_Yuri, 0x31 },
    { L"E+B - Character Extra 3", 0x1f5fae0, 0x1f5fb00, indexKOFXISprites_Yuri, 0x32 },
    { L"E+B - Extra Move 1", 0x1f5fb00, 0x1f5fb20, indexKOFXISprites_Yuri, 0x10 },
    { L"E+B - Extra Move 2", 0x1f5fb20, 0x1f5fb40, indexKOFXISprites_Yuri, 0x11 },
    { L"E+B - Extra Move 3", 0x1f5fb40, 0x1f5fb60, indexKOFXISprites_Yuri, 0x12 },
    { L"E+B - Extra Move 4", 0x1f5fb60, 0x1f5fb80, indexKOFXISprites_Yuri, 0x13 },
    { L"E+B - Extra Move 5", 0x1f5fb80, 0x1f5fba0, indexKOFXISprites_Yuri, 0x14 },
    { L"E+B - Extra Move 6", 0x1f5fba0, 0x1f5fbc0, indexKOFXISprites_Yuri, 0x15 },
    { L"E+B - Extra Move 7", 0x1f5fbc0, 0x1f5fbe0, indexKOFXISprites_Yuri, 0x16 },
    { L"E+B - Extra Move 8", 0x1f5fbe0, 0x1f5fc00, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_EC[] =
{
    { L"Yuri EC", 0x1f5fc00, 0x1f5fc20, indexKOFXISprites_Yuri },
    { L"E+C - Super Stuff 1", 0x1f5fc20, 0x1f5fc40, indexKOFXISprites_Yuri, 0x20 },
    { L"E+C - Electric Palette", 0x1f5fc40, 0x1f5fc60, indexKOFXISprites_Yuri, 0x41 },
    { L"E+C - Darker Palette", 0x1f5fc60, 0x1f5fc80, indexKOFXISprites_Yuri, 0x40 },
    { L"E+C - Super Stuff 2", 0x1f5fc80, 0x1f5fca0, indexKOFXISprites_Yuri, 0x21 },
    { L"E+C - Character Extra 1", 0x1f5fca0, 0x1f5fcc0, indexKOFXISprites_Yuri, 0x30 },
    { L"E+C - Character Extra 2", 0x1f5fcc0, 0x1f5fce0, indexKOFXISprites_Yuri, 0x31 },
    { L"E+C - Character Extra 3", 0x1f5fce0, 0x1f5fd00, indexKOFXISprites_Yuri, 0x32 },
    { L"E+C - Extra Move 1", 0x1f5fd00, 0x1f5fd20, indexKOFXISprites_Yuri, 0x10 },
    { L"E+C - Extra Move 2", 0x1f5fd20, 0x1f5fd40, indexKOFXISprites_Yuri, 0x11 },
    { L"E+C - Extra Move 3", 0x1f5fd40, 0x1f5fd60, indexKOFXISprites_Yuri, 0x12 },
    { L"E+C - Extra Move 4", 0x1f5fd60, 0x1f5fd80, indexKOFXISprites_Yuri, 0x13 },
    { L"E+C - Extra Move 5", 0x1f5fd80, 0x1f5fda0, indexKOFXISprites_Yuri, 0x14 },
    { L"E+C - Extra Move 6", 0x1f5fda0, 0x1f5fdc0, indexKOFXISprites_Yuri, 0x15 },
    { L"E+C - Extra Move 7", 0x1f5fdc0, 0x1f5fde0, indexKOFXISprites_Yuri, 0x16 },
    { L"E+C - Extra Move 8", 0x1f5fde0, 0x1f5fe00, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_ED[] =
{
    { L"Yuri ED", 0x1f5fe00, 0x1f5fe20, indexKOFXISprites_Yuri },
    { L"E+D - Super Stuff 1", 0x1f5fe20, 0x1f5fe40, indexKOFXISprites_Yuri, 0x20 },
    { L"E+D - Electric Palette", 0x1f5fe40, 0x1f5fe60, indexKOFXISprites_Yuri, 0x41 },
    { L"E+D - Darker Palette", 0x1f5fe60, 0x1f5fe80, indexKOFXISprites_Yuri, 0x40 },
    { L"E+D - Super Stuff 2", 0x1f5fe80, 0x1f5fea0, indexKOFXISprites_Yuri, 0x21 },
    { L"E+D - Character Extra 1", 0x1f5fea0, 0x1f5fec0, indexKOFXISprites_Yuri, 0x30 },
    { L"E+D - Character Extra 2", 0x1f5fec0, 0x1f5fee0, indexKOFXISprites_Yuri, 0x31 },
    { L"E+D - Character Extra 3", 0x1f5fee0, 0x1f5ff00, indexKOFXISprites_Yuri, 0x32 },
    { L"E+D - Extra Move 1", 0x1f5ff00, 0x1f5ff20, indexKOFXISprites_Yuri, 0x10 },
    { L"E+D - Extra Move 2", 0x1f5ff20, 0x1f5ff40, indexKOFXISprites_Yuri, 0x11 },
    { L"E+D - Extra Move 3", 0x1f5ff40, 0x1f5ff60, indexKOFXISprites_Yuri, 0x12 },
    { L"E+D - Extra Move 4", 0x1f5ff60, 0x1f5ff80, indexKOFXISprites_Yuri, 0x13 },
    { L"E+D - Extra Move 5", 0x1f5ff80, 0x1f5ffa0, indexKOFXISprites_Yuri, 0x14 },
    { L"E+D - Extra Move 6", 0x1f5ffa0, 0x1f5ffc0, indexKOFXISprites_Yuri, 0x15 },
    { L"E+D - Extra Move 7", 0x1f5ffc0, 0x1f5ffe0, indexKOFXISprites_Yuri, 0x16 },
    { L"E+D - Extra Move 8", 0x1f5ffe0, 0x1f60000, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_SA[] =
{
    { L"Yuri SA", 0x1f60000, 0x1f60020, indexKOFXISprites_Yuri },
    { L"Start+A - Super Stuff 1", 0x1f60020, 0x1f60040, indexKOFXISprites_Yuri, 0x20 },
    { L"Start+A - Electric Palette", 0x1f60040, 0x1f60060, indexKOFXISprites_Yuri, 0x41 },
    { L"Start+A - Darker Palette", 0x1f60060, 0x1f60080, indexKOFXISprites_Yuri, 0x40 },
    { L"Start+A - Super Stuff 2", 0x1f60080, 0x1f600a0, indexKOFXISprites_Yuri, 0x21 },
    { L"Start+A - Character Extra 1", 0x1f600a0, 0x1f600c0, indexKOFXISprites_Yuri, 0x30 },
    { L"Start+A - Character Extra 2", 0x1f600c0, 0x1f600e0, indexKOFXISprites_Yuri, 0x31 },
    { L"Start+A - Character Extra 3", 0x1f600e0, 0x1f60100, indexKOFXISprites_Yuri, 0x32 },
    { L"Start+A - Extra Move 1", 0x1f60100, 0x1f60120, indexKOFXISprites_Yuri, 0x10 },
    { L"Start+A - Extra Move 2", 0x1f60120, 0x1f60140, indexKOFXISprites_Yuri, 0x11 },
    { L"Start+A - Extra Move 3", 0x1f60140, 0x1f60160, indexKOFXISprites_Yuri, 0x12 },
    { L"Start+A - Extra Move 4", 0x1f60160, 0x1f60180, indexKOFXISprites_Yuri, 0x13 },
    { L"Start+A - Extra Move 5", 0x1f60180, 0x1f601a0, indexKOFXISprites_Yuri, 0x14 },
    { L"Start+A - Extra Move 6", 0x1f601a0, 0x1f601c0, indexKOFXISprites_Yuri, 0x15 },
    { L"Start+A - Extra Move 7", 0x1f601c0, 0x1f601e0, indexKOFXISprites_Yuri, 0x16 },
    { L"Start+A - Extra Move 8", 0x1f601e0, 0x1f60200, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_SB[] =
{
    { L"Yuri SB", 0x1f60200, 0x1f60220, indexKOFXISprites_Yuri },
    { L"Start+B - Super Stuff 1", 0x1f60220, 0x1f60240, indexKOFXISprites_Yuri, 0x20 },
    { L"Start+B - Electric Palette", 0x1f60240, 0x1f60260, indexKOFXISprites_Yuri, 0x41 },
    { L"Start+B - Darker Palette", 0x1f60260, 0x1f60280, indexKOFXISprites_Yuri, 0x40 },
    { L"Start+B - Super Stuff 2", 0x1f60280, 0x1f602a0, indexKOFXISprites_Yuri, 0x21 },
    { L"Start+B - Character Extra 1", 0x1f602a0, 0x1f602c0, indexKOFXISprites_Yuri, 0x30 },
    { L"Start+B - Character Extra 2", 0x1f602c0, 0x1f602e0, indexKOFXISprites_Yuri, 0x31 },
    { L"Start+B - Character Extra 3", 0x1f602e0, 0x1f60300, indexKOFXISprites_Yuri, 0x32 },
    { L"Start+B - Extra Move 1", 0x1f60300, 0x1f60320, indexKOFXISprites_Yuri, 0x10 },
    { L"Start+B - Extra Move 2", 0x1f60320, 0x1f60340, indexKOFXISprites_Yuri, 0x11 },
    { L"Start+B - Extra Move 3", 0x1f60340, 0x1f60360, indexKOFXISprites_Yuri, 0x12 },
    { L"Start+B - Extra Move 4", 0x1f60360, 0x1f60380, indexKOFXISprites_Yuri, 0x13 },
    { L"Start+B - Extra Move 5", 0x1f60380, 0x1f603a0, indexKOFXISprites_Yuri, 0x14 },
    { L"Start+B - Extra Move 6", 0x1f603a0, 0x1f603c0, indexKOFXISprites_Yuri, 0x15 },
    { L"Start+B - Extra Move 7", 0x1f603c0, 0x1f603e0, indexKOFXISprites_Yuri, 0x16 },
    { L"Start+B - Extra Move 8", 0x1f603e0, 0x1f60400, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_SC[] =
{
    { L"Yuri SC", 0x1f60400, 0x1f60420, indexKOFXISprites_Yuri },
    { L"Start+C - Super Stuff 1", 0x1f60420, 0x1f60440, indexKOFXISprites_Yuri, 0x20 },
    { L"Start+C - Electric Palette", 0x1f60440, 0x1f60460, indexKOFXISprites_Yuri, 0x41 },
    { L"Start+C - Darker Palette", 0x1f60460, 0x1f60480, indexKOFXISprites_Yuri, 0x40 },
    { L"Start+C - Super Stuff 2", 0x1f60480, 0x1f604a0, indexKOFXISprites_Yuri, 0x21 },
    { L"Start+C - Character Extra 1", 0x1f604a0, 0x1f604c0, indexKOFXISprites_Yuri, 0x30 },
    { L"Start+C - Character Extra 2", 0x1f604c0, 0x1f604e0, indexKOFXISprites_Yuri, 0x31 },
    { L"Start+C - Character Extra 3", 0x1f604e0, 0x1f60500, indexKOFXISprites_Yuri, 0x32 },
    { L"Start+C - Extra Move 1", 0x1f60500, 0x1f60520, indexKOFXISprites_Yuri, 0x10 },
    { L"Start+C - Extra Move 2", 0x1f60520, 0x1f60540, indexKOFXISprites_Yuri, 0x11 },
    { L"Start+C - Extra Move 3", 0x1f60540, 0x1f60560, indexKOFXISprites_Yuri, 0x12 },
    { L"Start+C - Extra Move 4", 0x1f60560, 0x1f60580, indexKOFXISprites_Yuri, 0x13 },
    { L"Start+C - Extra Move 5", 0x1f60580, 0x1f605a0, indexKOFXISprites_Yuri, 0x14 },
    { L"Start+C - Extra Move 6", 0x1f605a0, 0x1f605c0, indexKOFXISprites_Yuri, 0x15 },
    { L"Start+C - Extra Move 7", 0x1f605c0, 0x1f605e0, indexKOFXISprites_Yuri, 0x16 },
    { L"Start+C - Extra Move 8", 0x1f605e0, 0x1f60600, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_YURI_PALETTES_SD[] =
{
    { L"Yuri SD", 0x1f60600, 0x1f60620, indexKOFXISprites_Yuri },
    { L"Start+D - Super Stuff 1", 0x1f60620, 0x1f60640, indexKOFXISprites_Yuri, 0x20 },
    { L"Start+D - Electric Palette", 0x1f60640, 0x1f60660, indexKOFXISprites_Yuri, 0x41 },
    { L"Start+D - Darker Palette", 0x1f60660, 0x1f60680, indexKOFXISprites_Yuri, 0x40 },
    { L"Start+D - Super Stuff 2", 0x1f60680, 0x1f606a0, indexKOFXISprites_Yuri, 0x21 },
    { L"Start+D - Character Extra 1", 0x1f606a0, 0x1f606c0, indexKOFXISprites_Yuri, 0x30 },
    { L"Start+D - Character Extra 2", 0x1f606c0, 0x1f606e0, indexKOFXISprites_Yuri, 0x31 },
    { L"Start+D - Character Extra 3", 0x1f606e0, 0x1f60700, indexKOFXISprites_Yuri, 0x32 },
    { L"Start+D - Extra Move 1", 0x1f60700, 0x1f60720, indexKOFXISprites_Yuri, 0x10 },
    { L"Start+D - Extra Move 2", 0x1f60720, 0x1f60740, indexKOFXISprites_Yuri, 0x11 },
    { L"Start+D - Extra Move 3", 0x1f60740, 0x1f60760, indexKOFXISprites_Yuri, 0x12 },
    { L"Start+D - Extra Move 4", 0x1f60760, 0x1f60780, indexKOFXISprites_Yuri, 0x13 },
    { L"Start+D - Extra Move 5", 0x1f60780, 0x1f607a0, indexKOFXISprites_Yuri, 0x14 },
    { L"Start+D - Extra Move 6", 0x1f607a0, 0x1f607c0, indexKOFXISprites_Yuri, 0x15 },
    { L"Start+D - Extra Move 7", 0x1f607c0, 0x1f607e0, indexKOFXISprites_Yuri, 0x16 },
    { L"Start+D - Extra Move 8", 0x1f607e0, 0x1f60800, indexKOFXISprites_Yuri, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_A[] =
{
    { L"King A", 0x20ba800, 0x20ba820, indexKOFXISprites_King },
    { L"A - Super Stuff 1", 0x20ba820, 0x20ba840, indexKOFXISprites_King, 0x20 },
    { L"A - Electric Palette", 0x20ba840, 0x20ba860, indexKOFXISprites_King, 0x41 },
    { L"A - Darker Palette", 0x20ba860, 0x20ba880, indexKOFXISprites_King, 0x40 },
    { L"A - Super Stuff 2", 0x20ba880, 0x20ba8a0, indexKOFXISprites_King, 0x21 },
    { L"A - Character Extra 1", 0x20ba8a0, 0x20ba8c0, indexKOFXISprites_King, 0x30 },
    { L"A - Character Extra 2", 0x20ba8c0, 0x20ba8e0, indexKOFXISprites_King, 0x31 },
    { L"A - Character Extra 3", 0x20ba8e0, 0x20ba900, indexKOFXISprites_King, 0x32 },
    { L"A - Extra Move 1", 0x20ba900, 0x20ba920, indexKOFXISprites_King, 0x10 },
    { L"A - Extra Move 2", 0x20ba920, 0x20ba940, indexKOFXISprites_King, 0x11 },
    { L"A - Extra Move 3", 0x20ba940, 0x20ba960, indexKOFXISprites_King, 0x12 },
    { L"A - Extra Move 4", 0x20ba960, 0x20ba980, indexKOFXISprites_King, 0x13 },
    { L"A - Extra Move 5", 0x20ba980, 0x20ba9a0, indexKOFXISprites_King, 0x14 },
    { L"A - Extra Move 6", 0x20ba9a0, 0x20ba9c0, indexKOFXISprites_King, 0x15 },
    { L"A - Extra Move 7", 0x20ba9c0, 0x20ba9e0, indexKOFXISprites_King, 0x16 },
    { L"A - Extra Move 8", 0x20ba9e0, 0x20baa00, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_B[] =
{
    { L"King B", 0x20baa00, 0x20baa20, indexKOFXISprites_King },
    { L"B - Super Stuff 1", 0x20baa20, 0x20baa40, indexKOFXISprites_King, 0x20 },
    { L"B - Electric Palette", 0x20baa40, 0x20baa60, indexKOFXISprites_King, 0x41 },
    { L"B - Darker Palette", 0x20baa60, 0x20baa80, indexKOFXISprites_King, 0x40 },
    { L"B - Super Stuff 2", 0x20baa80, 0x20baaa0, indexKOFXISprites_King, 0x21 },
    { L"B - Character Extra 1", 0x20baaa0, 0x20baac0, indexKOFXISprites_King, 0x30 },
    { L"B - Character Extra 2", 0x20baac0, 0x20baae0, indexKOFXISprites_King, 0x31 },
    { L"B - Character Extra 3", 0x20baae0, 0x20bab00, indexKOFXISprites_King, 0x32 },
    { L"B - Extra Move 1", 0x20bab00, 0x20bab20, indexKOFXISprites_King, 0x10 },
    { L"B - Extra Move 2", 0x20bab20, 0x20bab40, indexKOFXISprites_King, 0x11 },
    { L"B - Extra Move 3", 0x20bab40, 0x20bab60, indexKOFXISprites_King, 0x12 },
    { L"B - Extra Move 4", 0x20bab60, 0x20bab80, indexKOFXISprites_King, 0x13 },
    { L"B - Extra Move 5", 0x20bab80, 0x20baba0, indexKOFXISprites_King, 0x14 },
    { L"B - Extra Move 6", 0x20baba0, 0x20babc0, indexKOFXISprites_King, 0x15 },
    { L"B - Extra Move 7", 0x20babc0, 0x20babe0, indexKOFXISprites_King, 0x16 },
    { L"B - Extra Move 8", 0x20babe0, 0x20bac00, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_C[] =
{
    { L"King C", 0x20bac00, 0x20bac20, indexKOFXISprites_King },
    { L"C - Super Stuff 1", 0x20bac20, 0x20bac40, indexKOFXISprites_King, 0x20 },
    { L"C - Electric Palette", 0x20bac40, 0x20bac60, indexKOFXISprites_King, 0x41 },
    { L"C - Darker Palette", 0x20bac60, 0x20bac80, indexKOFXISprites_King, 0x40 },
    { L"C - Super Stuff 2", 0x20bac80, 0x20baca0, indexKOFXISprites_King, 0x21 },
    { L"C - Character Extra 1", 0x20baca0, 0x20bacc0, indexKOFXISprites_King, 0x30 },
    { L"C - Character Extra 2", 0x20bacc0, 0x20bace0, indexKOFXISprites_King, 0x31 },
    { L"C - Character Extra 3", 0x20bace0, 0x20bad00, indexKOFXISprites_King, 0x32 },
    { L"C - Extra Move 1", 0x20bad00, 0x20bad20, indexKOFXISprites_King, 0x10 },
    { L"C - Extra Move 2", 0x20bad20, 0x20bad40, indexKOFXISprites_King, 0x11 },
    { L"C - Extra Move 3", 0x20bad40, 0x20bad60, indexKOFXISprites_King, 0x12 },
    { L"C - Extra Move 4", 0x20bad60, 0x20bad80, indexKOFXISprites_King, 0x13 },
    { L"C - Extra Move 5", 0x20bad80, 0x20bada0, indexKOFXISprites_King, 0x14 },
    { L"C - Extra Move 6", 0x20bada0, 0x20badc0, indexKOFXISprites_King, 0x15 },
    { L"C - Extra Move 7", 0x20badc0, 0x20bade0, indexKOFXISprites_King, 0x16 },
    { L"C - Extra Move 8", 0x20bade0, 0x20bae00, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_D[] =
{
    { L"King D", 0x20bae00, 0x20bae20, indexKOFXISprites_King },
    { L"D - Super Stuff 1", 0x20bae20, 0x20bae40, indexKOFXISprites_King, 0x20 },
    { L"D - Electric Palette", 0x20bae40, 0x20bae60, indexKOFXISprites_King, 0x41 },
    { L"D - Darker Palette", 0x20bae60, 0x20bae80, indexKOFXISprites_King, 0x40 },
    { L"D - Super Stuff 2", 0x20bae80, 0x20baea0, indexKOFXISprites_King, 0x21 },
    { L"D - Character Extra 1", 0x20baea0, 0x20baec0, indexKOFXISprites_King, 0x30 },
    { L"D - Character Extra 2", 0x20baec0, 0x20baee0, indexKOFXISprites_King, 0x31 },
    { L"D - Character Extra 3", 0x20baee0, 0x20baf00, indexKOFXISprites_King, 0x32 },
    { L"D - Extra Move 1", 0x20baf00, 0x20baf20, indexKOFXISprites_King, 0x10 },
    { L"D - Extra Move 2", 0x20baf20, 0x20baf40, indexKOFXISprites_King, 0x11 },
    { L"D - Extra Move 3", 0x20baf40, 0x20baf60, indexKOFXISprites_King, 0x12 },
    { L"D - Extra Move 4", 0x20baf60, 0x20baf80, indexKOFXISprites_King, 0x13 },
    { L"D - Extra Move 5", 0x20baf80, 0x20bafa0, indexKOFXISprites_King, 0x14 },
    { L"D - Extra Move 6", 0x20bafa0, 0x20bafc0, indexKOFXISprites_King, 0x15 },
    { L"D - Extra Move 7", 0x20bafc0, 0x20bafe0, indexKOFXISprites_King, 0x16 },
    { L"D - Extra Move 8", 0x20bafe0, 0x20bb000, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_EA[] =
{
    { L"King EA", 0x20bb000, 0x20bb020, indexKOFXISprites_King },
    { L"E+A - Super Stuff 1", 0x20bb020, 0x20bb040, indexKOFXISprites_King, 0x20 },
    { L"E+A - Electric Palette", 0x20bb040, 0x20bb060, indexKOFXISprites_King, 0x41 },
    { L"E+A - Darker Palette", 0x20bb060, 0x20bb080, indexKOFXISprites_King, 0x40 },
    { L"E+A - Super Stuff 2", 0x20bb080, 0x20bb0a0, indexKOFXISprites_King, 0x21 },
    { L"E+A - Character Extra 1", 0x20bb0a0, 0x20bb0c0, indexKOFXISprites_King, 0x30 },
    { L"E+A - Character Extra 2", 0x20bb0c0, 0x20bb0e0, indexKOFXISprites_King, 0x31 },
    { L"E+A - Character Extra 3", 0x20bb0e0, 0x20bb100, indexKOFXISprites_King, 0x32 },
    { L"E+A - Extra Move 1", 0x20bb100, 0x20bb120, indexKOFXISprites_King, 0x10 },
    { L"E+A - Extra Move 2", 0x20bb120, 0x20bb140, indexKOFXISprites_King, 0x11 },
    { L"E+A - Extra Move 3", 0x20bb140, 0x20bb160, indexKOFXISprites_King, 0x12 },
    { L"E+A - Extra Move 4", 0x20bb160, 0x20bb180, indexKOFXISprites_King, 0x13 },
    { L"E+A - Extra Move 5", 0x20bb180, 0x20bb1a0, indexKOFXISprites_King, 0x14 },
    { L"E+A - Extra Move 6", 0x20bb1a0, 0x20bb1c0, indexKOFXISprites_King, 0x15 },
    { L"E+A - Extra Move 7", 0x20bb1c0, 0x20bb1e0, indexKOFXISprites_King, 0x16 },
    { L"E+A - Extra Move 8", 0x20bb1e0, 0x20bb200, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_EB[] =
{
    { L"King EB", 0x20bb200, 0x20bb220, indexKOFXISprites_King },
    { L"E+B - Super Stuff 1", 0x20bb220, 0x20bb240, indexKOFXISprites_King, 0x20 },
    { L"E+B - Electric Palette", 0x20bb240, 0x20bb260, indexKOFXISprites_King, 0x41 },
    { L"E+B - Darker Palette", 0x20bb260, 0x20bb280, indexKOFXISprites_King, 0x40 },
    { L"E+B - Super Stuff 2", 0x20bb280, 0x20bb2a0, indexKOFXISprites_King, 0x21 },
    { L"E+B - Character Extra 1", 0x20bb2a0, 0x20bb2c0, indexKOFXISprites_King, 0x30 },
    { L"E+B - Character Extra 2", 0x20bb2c0, 0x20bb2e0, indexKOFXISprites_King, 0x31 },
    { L"E+B - Character Extra 3", 0x20bb2e0, 0x20bb300, indexKOFXISprites_King, 0x32 },
    { L"E+B - Extra Move 1", 0x20bb300, 0x20bb320, indexKOFXISprites_King, 0x10 },
    { L"E+B - Extra Move 2", 0x20bb320, 0x20bb340, indexKOFXISprites_King, 0x11 },
    { L"E+B - Extra Move 3", 0x20bb340, 0x20bb360, indexKOFXISprites_King, 0x12 },
    { L"E+B - Extra Move 4", 0x20bb360, 0x20bb380, indexKOFXISprites_King, 0x13 },
    { L"E+B - Extra Move 5", 0x20bb380, 0x20bb3a0, indexKOFXISprites_King, 0x14 },
    { L"E+B - Extra Move 6", 0x20bb3a0, 0x20bb3c0, indexKOFXISprites_King, 0x15 },
    { L"E+B - Extra Move 7", 0x20bb3c0, 0x20bb3e0, indexKOFXISprites_King, 0x16 },
    { L"E+B - Extra Move 8", 0x20bb3e0, 0x20bb400, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_EC[] =
{
    { L"King EC", 0x20bb400, 0x20bb420, indexKOFXISprites_King },
    { L"E+C - Super Stuff 1", 0x20bb420, 0x20bb440, indexKOFXISprites_King, 0x20 },
    { L"E+C - Electric Palette", 0x20bb440, 0x20bb460, indexKOFXISprites_King, 0x41 },
    { L"E+C - Darker Palette", 0x20bb460, 0x20bb480, indexKOFXISprites_King, 0x40 },
    { L"E+C - Super Stuff 2", 0x20bb480, 0x20bb4a0, indexKOFXISprites_King, 0x21 },
    { L"E+C - Character Extra 1", 0x20bb4a0, 0x20bb4c0, indexKOFXISprites_King, 0x30 },
    { L"E+C - Character Extra 2", 0x20bb4c0, 0x20bb4e0, indexKOFXISprites_King, 0x31 },
    { L"E+C - Character Extra 3", 0x20bb4e0, 0x20bb500, indexKOFXISprites_King, 0x32 },
    { L"E+C - Extra Move 1", 0x20bb500, 0x20bb520, indexKOFXISprites_King, 0x10 },
    { L"E+C - Extra Move 2", 0x20bb520, 0x20bb540, indexKOFXISprites_King, 0x11 },
    { L"E+C - Extra Move 3", 0x20bb540, 0x20bb560, indexKOFXISprites_King, 0x12 },
    { L"E+C - Extra Move 4", 0x20bb560, 0x20bb580, indexKOFXISprites_King, 0x13 },
    { L"E+C - Extra Move 5", 0x20bb580, 0x20bb5a0, indexKOFXISprites_King, 0x14 },
    { L"E+C - Extra Move 6", 0x20bb5a0, 0x20bb5c0, indexKOFXISprites_King, 0x15 },
    { L"E+C - Extra Move 7", 0x20bb5c0, 0x20bb5e0, indexKOFXISprites_King, 0x16 },
    { L"E+C - Extra Move 8", 0x20bb5e0, 0x20bb600, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_ED[] =
{
    { L"King ED", 0x20bb600, 0x20bb620, indexKOFXISprites_King },
    { L"E+D - Super Stuff 1", 0x20bb620, 0x20bb640, indexKOFXISprites_King, 0x20 },
    { L"E+D - Electric Palette", 0x20bb640, 0x20bb660, indexKOFXISprites_King, 0x41 },
    { L"E+D - Darker Palette", 0x20bb660, 0x20bb680, indexKOFXISprites_King, 0x40 },
    { L"E+D - Super Stuff 2", 0x20bb680, 0x20bb6a0, indexKOFXISprites_King, 0x21 },
    { L"E+D - Character Extra 1", 0x20bb6a0, 0x20bb6c0, indexKOFXISprites_King, 0x30 },
    { L"E+D - Character Extra 2", 0x20bb6c0, 0x20bb6e0, indexKOFXISprites_King, 0x31 },
    { L"E+D - Character Extra 3", 0x20bb6e0, 0x20bb700, indexKOFXISprites_King, 0x32 },
    { L"E+D - Extra Move 1", 0x20bb700, 0x20bb720, indexKOFXISprites_King, 0x10 },
    { L"E+D - Extra Move 2", 0x20bb720, 0x20bb740, indexKOFXISprites_King, 0x11 },
    { L"E+D - Extra Move 3", 0x20bb740, 0x20bb760, indexKOFXISprites_King, 0x12 },
    { L"E+D - Extra Move 4", 0x20bb760, 0x20bb780, indexKOFXISprites_King, 0x13 },
    { L"E+D - Extra Move 5", 0x20bb780, 0x20bb7a0, indexKOFXISprites_King, 0x14 },
    { L"E+D - Extra Move 6", 0x20bb7a0, 0x20bb7c0, indexKOFXISprites_King, 0x15 },
    { L"E+D - Extra Move 7", 0x20bb7c0, 0x20bb7e0, indexKOFXISprites_King, 0x16 },
    { L"E+D - Extra Move 8", 0x20bb7e0, 0x20bb800, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_SA[] =
{
    { L"King SA", 0x20bb800, 0x20bb820, indexKOFXISprites_King },
    { L"Start+A - Super Stuff 1", 0x20bb820, 0x20bb840, indexKOFXISprites_King, 0x20 },
    { L"Start+A - Electric Palette", 0x20bb840, 0x20bb860, indexKOFXISprites_King, 0x41 },
    { L"Start+A - Darker Palette", 0x20bb860, 0x20bb880, indexKOFXISprites_King, 0x40 },
    { L"Start+A - Super Stuff 2", 0x20bb880, 0x20bb8a0, indexKOFXISprites_King, 0x21 },
    { L"Start+A - Character Extra 1", 0x20bb8a0, 0x20bb8c0, indexKOFXISprites_King, 0x30 },
    { L"Start+A - Character Extra 2", 0x20bb8c0, 0x20bb8e0, indexKOFXISprites_King, 0x31 },
    { L"Start+A - Character Extra 3", 0x20bb8e0, 0x20bb900, indexKOFXISprites_King, 0x32 },
    { L"Start+A - Extra Move 1", 0x20bb900, 0x20bb920, indexKOFXISprites_King, 0x10 },
    { L"Start+A - Extra Move 2", 0x20bb920, 0x20bb940, indexKOFXISprites_King, 0x11 },
    { L"Start+A - Extra Move 3", 0x20bb940, 0x20bb960, indexKOFXISprites_King, 0x12 },
    { L"Start+A - Extra Move 4", 0x20bb960, 0x20bb980, indexKOFXISprites_King, 0x13 },
    { L"Start+A - Extra Move 5", 0x20bb980, 0x20bb9a0, indexKOFXISprites_King, 0x14 },
    { L"Start+A - Extra Move 6", 0x20bb9a0, 0x20bb9c0, indexKOFXISprites_King, 0x15 },
    { L"Start+A - Extra Move 7", 0x20bb9c0, 0x20bb9e0, indexKOFXISprites_King, 0x16 },
    { L"Start+A - Extra Move 8", 0x20bb9e0, 0x20bba00, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_SB[] =
{
    { L"King SB", 0x20bba00, 0x20bba20, indexKOFXISprites_King },
    { L"Start+B - Super Stuff 1", 0x20bba20, 0x20bba40, indexKOFXISprites_King, 0x20 },
    { L"Start+B - Electric Palette", 0x20bba40, 0x20bba60, indexKOFXISprites_King, 0x41 },
    { L"Start+B - Darker Palette", 0x20bba60, 0x20bba80, indexKOFXISprites_King, 0x40 },
    { L"Start+B - Super Stuff 2", 0x20bba80, 0x20bbaa0, indexKOFXISprites_King, 0x21 },
    { L"Start+B - Character Extra 1", 0x20bbaa0, 0x20bbac0, indexKOFXISprites_King, 0x30 },
    { L"Start+B - Character Extra 2", 0x20bbac0, 0x20bbae0, indexKOFXISprites_King, 0x31 },
    { L"Start+B - Character Extra 3", 0x20bbae0, 0x20bbb00, indexKOFXISprites_King, 0x32 },
    { L"Start+B - Extra Move 1", 0x20bbb00, 0x20bbb20, indexKOFXISprites_King, 0x10 },
    { L"Start+B - Extra Move 2", 0x20bbb20, 0x20bbb40, indexKOFXISprites_King, 0x11 },
    { L"Start+B - Extra Move 3", 0x20bbb40, 0x20bbb60, indexKOFXISprites_King, 0x12 },
    { L"Start+B - Extra Move 4", 0x20bbb60, 0x20bbb80, indexKOFXISprites_King, 0x13 },
    { L"Start+B - Extra Move 5", 0x20bbb80, 0x20bbba0, indexKOFXISprites_King, 0x14 },
    { L"Start+B - Extra Move 6", 0x20bbba0, 0x20bbbc0, indexKOFXISprites_King, 0x15 },
    { L"Start+B - Extra Move 7", 0x20bbbc0, 0x20bbbe0, indexKOFXISprites_King, 0x16 },
    { L"Start+B - Extra Move 8", 0x20bbbe0, 0x20bbc00, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_SC[] =
{
    { L"King SC", 0x20bbc00, 0x20bbc20, indexKOFXISprites_King },
    { L"Start+C - Super Stuff 1", 0x20bbc20, 0x20bbc40, indexKOFXISprites_King, 0x20 },
    { L"Start+C - Electric Palette", 0x20bbc40, 0x20bbc60, indexKOFXISprites_King, 0x41 },
    { L"Start+C - Darker Palette", 0x20bbc60, 0x20bbc80, indexKOFXISprites_King, 0x40 },
    { L"Start+C - Super Stuff 2", 0x20bbc80, 0x20bbca0, indexKOFXISprites_King, 0x21 },
    { L"Start+C - Character Extra 1", 0x20bbca0, 0x20bbcc0, indexKOFXISprites_King, 0x30 },
    { L"Start+C - Character Extra 2", 0x20bbcc0, 0x20bbce0, indexKOFXISprites_King, 0x31 },
    { L"Start+C - Character Extra 3", 0x20bbce0, 0x20bbd00, indexKOFXISprites_King, 0x32 },
    { L"Start+C - Extra Move 1", 0x20bbd00, 0x20bbd20, indexKOFXISprites_King, 0x10 },
    { L"Start+C - Extra Move 2", 0x20bbd20, 0x20bbd40, indexKOFXISprites_King, 0x11 },
    { L"Start+C - Extra Move 3", 0x20bbd40, 0x20bbd60, indexKOFXISprites_King, 0x12 },
    { L"Start+C - Extra Move 4", 0x20bbd60, 0x20bbd80, indexKOFXISprites_King, 0x13 },
    { L"Start+C - Extra Move 5", 0x20bbd80, 0x20bbda0, indexKOFXISprites_King, 0x14 },
    { L"Start+C - Extra Move 6", 0x20bbda0, 0x20bbdc0, indexKOFXISprites_King, 0x15 },
    { L"Start+C - Extra Move 7", 0x20bbdc0, 0x20bbde0, indexKOFXISprites_King, 0x16 },
    { L"Start+C - Extra Move 8", 0x20bbde0, 0x20bbe00, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KING_PALETTES_SD[] =
{
    { L"King SD", 0x20bbe00, 0x20bbe20, indexKOFXISprites_King },
    { L"Start+D - Super Stuff 1", 0x20bbe20, 0x20bbe40, indexKOFXISprites_King, 0x20 },
    { L"Start+D - Electric Palette", 0x20bbe40, 0x20bbe60, indexKOFXISprites_King, 0x41 },
    { L"Start+D - Darker Palette", 0x20bbe60, 0x20bbe80, indexKOFXISprites_King, 0x40 },
    { L"Start+D - Super Stuff 2", 0x20bbe80, 0x20bbea0, indexKOFXISprites_King, 0x21 },
    { L"Start+D - Character Extra 1", 0x20bbea0, 0x20bbec0, indexKOFXISprites_King, 0x30 },
    { L"Start+D - Character Extra 2", 0x20bbec0, 0x20bbee0, indexKOFXISprites_King, 0x31 },
    { L"Start+D - Character Extra 3", 0x20bbee0, 0x20bbf00, indexKOFXISprites_King, 0x32 },
    { L"Start+D - Extra Move 1", 0x20bbf00, 0x20bbf20, indexKOFXISprites_King, 0x10 },
    { L"Start+D - Extra Move 2", 0x20bbf20, 0x20bbf40, indexKOFXISprites_King, 0x11 },
    { L"Start+D - Extra Move 3", 0x20bbf40, 0x20bbf60, indexKOFXISprites_King, 0x12 },
    { L"Start+D - Extra Move 4", 0x20bbf60, 0x20bbf80, indexKOFXISprites_King, 0x13 },
    { L"Start+D - Extra Move 5", 0x20bbf80, 0x20bbfa0, indexKOFXISprites_King, 0x14 },
    { L"Start+D - Extra Move 6", 0x20bbfa0, 0x20bbfc0, indexKOFXISprites_King, 0x15 },
    { L"Start+D - Extra Move 7", 0x20bbfc0, 0x20bbfe0, indexKOFXISprites_King, 0x16 },
    { L"Start+D - Extra Move 8", 0x20bbfe0, 0x20bc000, indexKOFXISprites_King, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_A[] =
{
    { L"B. Jenet A", 0x21c5800, 0x21c5820, indexKOFXISprites_BJenet },
    { L"A - Super Stuff 1", 0x21c5820, 0x21c5840, indexKOFXISprites_BJenet, 0x20 },
    { L"A - Electric Palette", 0x21c5840, 0x21c5860, indexKOFXISprites_BJenet, 0x41 },
    { L"A - Darker Palette", 0x21c5860, 0x21c5880, indexKOFXISprites_BJenet, 0x40 },
    { L"A - Super Stuff 2", 0x21c5880, 0x21c58a0, indexKOFXISprites_BJenet, 0x21 },
    { L"A - Character Extra 1", 0x21c58a0, 0x21c58c0, indexKOFXISprites_BJenet, 0x30 },
    { L"A - Character Extra 2", 0x21c58c0, 0x21c58e0, indexKOFXISprites_BJenet, 0x31 },
    { L"A - Character Extra 3", 0x21c58e0, 0x21c5900, indexKOFXISprites_BJenet, 0x32 },
    { L"A - Extra Move 1", 0x21c5900, 0x21c5920, indexKOFXISprites_BJenet, 0x10 },
    { L"A - Extra Move 2", 0x21c5920, 0x21c5940, indexKOFXISprites_BJenet, 0x11 },
    { L"A - Extra Move 3", 0x21c5940, 0x21c5960, indexKOFXISprites_BJenet, 0x12 },
    { L"A - Extra Move 4", 0x21c5960, 0x21c5980, indexKOFXISprites_BJenet, 0x13 },
    { L"A - Extra Move 5", 0x21c5980, 0x21c59a0, indexKOFXISprites_BJenet, 0x14 },
    { L"A - Extra Move 6", 0x21c59a0, 0x21c59c0, indexKOFXISprites_BJenet, 0x15 },
    { L"A - Extra Move 7", 0x21c59c0, 0x21c59e0, indexKOFXISprites_BJenet, 0x16 },
    { L"A - Extra Move 8", 0x21c59e0, 0x21c5a00, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_B[] =
{
    { L"B. Jenet B", 0x21c5a00, 0x21c5a20, indexKOFXISprites_BJenet },
    { L"B - Super Stuff 1", 0x21c5a20, 0x21c5a40, indexKOFXISprites_BJenet, 0x20 },
    { L"B - Electric Palette", 0x21c5a40, 0x21c5a60, indexKOFXISprites_BJenet, 0x41 },
    { L"B - Darker Palette", 0x21c5a60, 0x21c5a80, indexKOFXISprites_BJenet, 0x40 },
    { L"B - Super Stuff 2", 0x21c5a80, 0x21c5aa0, indexKOFXISprites_BJenet, 0x21 },
    { L"B - Character Extra 1", 0x21c5aa0, 0x21c5ac0, indexKOFXISprites_BJenet, 0x30 },
    { L"B - Character Extra 2", 0x21c5ac0, 0x21c5ae0, indexKOFXISprites_BJenet, 0x31 },
    { L"B - Character Extra 3", 0x21c5ae0, 0x21c5b00, indexKOFXISprites_BJenet, 0x32 },
    { L"B - Extra Move 1", 0x21c5b00, 0x21c5b20, indexKOFXISprites_BJenet, 0x10 },
    { L"B - Extra Move 2", 0x21c5b20, 0x21c5b40, indexKOFXISprites_BJenet, 0x11 },
    { L"B - Extra Move 3", 0x21c5b40, 0x21c5b60, indexKOFXISprites_BJenet, 0x12 },
    { L"B - Extra Move 4", 0x21c5b60, 0x21c5b80, indexKOFXISprites_BJenet, 0x13 },
    { L"B - Extra Move 5", 0x21c5b80, 0x21c5ba0, indexKOFXISprites_BJenet, 0x14 },
    { L"B - Extra Move 6", 0x21c5ba0, 0x21c5bc0, indexKOFXISprites_BJenet, 0x15 },
    { L"B - Extra Move 7", 0x21c5bc0, 0x21c5be0, indexKOFXISprites_BJenet, 0x16 },
    { L"B - Extra Move 8", 0x21c5be0, 0x21c5c00, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_C[] =
{
    { L"B. Jenet C", 0x21c5c00, 0x21c5c20, indexKOFXISprites_BJenet },
    { L"C - Super Stuff 1", 0x21c5c20, 0x21c5c40, indexKOFXISprites_BJenet, 0x20 },
    { L"C - Electric Palette", 0x21c5c40, 0x21c5c60, indexKOFXISprites_BJenet, 0x41 },
    { L"C - Darker Palette", 0x21c5c60, 0x21c5c80, indexKOFXISprites_BJenet, 0x40 },
    { L"C - Super Stuff 2", 0x21c5c80, 0x21c5ca0, indexKOFXISprites_BJenet, 0x21 },
    { L"C - Character Extra 1", 0x21c5ca0, 0x21c5cc0, indexKOFXISprites_BJenet, 0x30 },
    { L"C - Character Extra 2", 0x21c5cc0, 0x21c5ce0, indexKOFXISprites_BJenet, 0x31 },
    { L"C - Character Extra 3", 0x21c5ce0, 0x21c5d00, indexKOFXISprites_BJenet, 0x32 },
    { L"C - Extra Move 1", 0x21c5d00, 0x21c5d20, indexKOFXISprites_BJenet, 0x10 },
    { L"C - Extra Move 2", 0x21c5d20, 0x21c5d40, indexKOFXISprites_BJenet, 0x11 },
    { L"C - Extra Move 3", 0x21c5d40, 0x21c5d60, indexKOFXISprites_BJenet, 0x12 },
    { L"C - Extra Move 4", 0x21c5d60, 0x21c5d80, indexKOFXISprites_BJenet, 0x13 },
    { L"C - Extra Move 5", 0x21c5d80, 0x21c5da0, indexKOFXISprites_BJenet, 0x14 },
    { L"C - Extra Move 6", 0x21c5da0, 0x21c5dc0, indexKOFXISprites_BJenet, 0x15 },
    { L"C - Extra Move 7", 0x21c5dc0, 0x21c5de0, indexKOFXISprites_BJenet, 0x16 },
    { L"C - Extra Move 8", 0x21c5de0, 0x21c5e00, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_D[] =
{
    { L"B. Jenet D", 0x21c5e00, 0x21c5e20, indexKOFXISprites_BJenet },
    { L"D - Super Stuff 1", 0x21c5e20, 0x21c5e40, indexKOFXISprites_BJenet, 0x20 },
    { L"D - Electric Palette", 0x21c5e40, 0x21c5e60, indexKOFXISprites_BJenet, 0x41 },
    { L"D - Darker Palette", 0x21c5e60, 0x21c5e80, indexKOFXISprites_BJenet, 0x40 },
    { L"D - Super Stuff 2", 0x21c5e80, 0x21c5ea0, indexKOFXISprites_BJenet, 0x21 },
    { L"D - Character Extra 1", 0x21c5ea0, 0x21c5ec0, indexKOFXISprites_BJenet, 0x30 },
    { L"D - Character Extra 2", 0x21c5ec0, 0x21c5ee0, indexKOFXISprites_BJenet, 0x31 },
    { L"D - Character Extra 3", 0x21c5ee0, 0x21c5f00, indexKOFXISprites_BJenet, 0x32 },
    { L"D - Extra Move 1", 0x21c5f00, 0x21c5f20, indexKOFXISprites_BJenet, 0x10 },
    { L"D - Extra Move 2", 0x21c5f20, 0x21c5f40, indexKOFXISprites_BJenet, 0x11 },
    { L"D - Extra Move 3", 0x21c5f40, 0x21c5f60, indexKOFXISprites_BJenet, 0x12 },
    { L"D - Extra Move 4", 0x21c5f60, 0x21c5f80, indexKOFXISprites_BJenet, 0x13 },
    { L"D - Extra Move 5", 0x21c5f80, 0x21c5fa0, indexKOFXISprites_BJenet, 0x14 },
    { L"D - Extra Move 6", 0x21c5fa0, 0x21c5fc0, indexKOFXISprites_BJenet, 0x15 },
    { L"D - Extra Move 7", 0x21c5fc0, 0x21c5fe0, indexKOFXISprites_BJenet, 0x16 },
    { L"D - Extra Move 8", 0x21c5fe0, 0x21c6000, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_EA[] =
{
    { L"B. Jenet EA", 0x21c6000, 0x21c6020, indexKOFXISprites_BJenet },
    { L"E+A - Super Stuff 1", 0x21c6020, 0x21c6040, indexKOFXISprites_BJenet, 0x20 },
    { L"E+A - Electric Palette", 0x21c6040, 0x21c6060, indexKOFXISprites_BJenet, 0x41 },
    { L"E+A - Darker Palette", 0x21c6060, 0x21c6080, indexKOFXISprites_BJenet, 0x40 },
    { L"E+A - Super Stuff 2", 0x21c6080, 0x21c60a0, indexKOFXISprites_BJenet, 0x21 },
    { L"E+A - Character Extra 1", 0x21c60a0, 0x21c60c0, indexKOFXISprites_BJenet, 0x30 },
    { L"E+A - Character Extra 2", 0x21c60c0, 0x21c60e0, indexKOFXISprites_BJenet, 0x31 },
    { L"E+A - Character Extra 3", 0x21c60e0, 0x21c6100, indexKOFXISprites_BJenet, 0x32 },
    { L"E+A - Extra Move 1", 0x21c6100, 0x21c6120, indexKOFXISprites_BJenet, 0x10 },
    { L"E+A - Extra Move 2", 0x21c6120, 0x21c6140, indexKOFXISprites_BJenet, 0x11 },
    { L"E+A - Extra Move 3", 0x21c6140, 0x21c6160, indexKOFXISprites_BJenet, 0x12 },
    { L"E+A - Extra Move 4", 0x21c6160, 0x21c6180, indexKOFXISprites_BJenet, 0x13 },
    { L"E+A - Extra Move 5", 0x21c6180, 0x21c61a0, indexKOFXISprites_BJenet, 0x14 },
    { L"E+A - Extra Move 6", 0x21c61a0, 0x21c61c0, indexKOFXISprites_BJenet, 0x15 },
    { L"E+A - Extra Move 7", 0x21c61c0, 0x21c61e0, indexKOFXISprites_BJenet, 0x16 },
    { L"E+A - Extra Move 8", 0x21c61e0, 0x21c6200, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_EB[] =
{
    { L"B. Jenet EB", 0x21c6200, 0x21c6220, indexKOFXISprites_BJenet },
    { L"E+B - Super Stuff 1", 0x21c6220, 0x21c6240, indexKOFXISprites_BJenet, 0x20 },
    { L"E+B - Electric Palette", 0x21c6240, 0x21c6260, indexKOFXISprites_BJenet, 0x41 },
    { L"E+B - Darker Palette", 0x21c6260, 0x21c6280, indexKOFXISprites_BJenet, 0x40 },
    { L"E+B - Super Stuff 2", 0x21c6280, 0x21c62a0, indexKOFXISprites_BJenet, 0x21 },
    { L"E+B - Character Extra 1", 0x21c62a0, 0x21c62c0, indexKOFXISprites_BJenet, 0x30 },
    { L"E+B - Character Extra 2", 0x21c62c0, 0x21c62e0, indexKOFXISprites_BJenet, 0x31 },
    { L"E+B - Character Extra 3", 0x21c62e0, 0x21c6300, indexKOFXISprites_BJenet, 0x32 },
    { L"E+B - Extra Move 1", 0x21c6300, 0x21c6320, indexKOFXISprites_BJenet, 0x10 },
    { L"E+B - Extra Move 2", 0x21c6320, 0x21c6340, indexKOFXISprites_BJenet, 0x11 },
    { L"E+B - Extra Move 3", 0x21c6340, 0x21c6360, indexKOFXISprites_BJenet, 0x12 },
    { L"E+B - Extra Move 4", 0x21c6360, 0x21c6380, indexKOFXISprites_BJenet, 0x13 },
    { L"E+B - Extra Move 5", 0x21c6380, 0x21c63a0, indexKOFXISprites_BJenet, 0x14 },
    { L"E+B - Extra Move 6", 0x21c63a0, 0x21c63c0, indexKOFXISprites_BJenet, 0x15 },
    { L"E+B - Extra Move 7", 0x21c63c0, 0x21c63e0, indexKOFXISprites_BJenet, 0x16 },
    { L"E+B - Extra Move 8", 0x21c63e0, 0x21c6400, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_EC[] =
{
    { L"B. Jenet EC", 0x21c6400, 0x21c6420, indexKOFXISprites_BJenet },
    { L"E+C - Super Stuff 1", 0x21c6420, 0x21c6440, indexKOFXISprites_BJenet, 0x20 },
    { L"E+C - Electric Palette", 0x21c6440, 0x21c6460, indexKOFXISprites_BJenet, 0x41 },
    { L"E+C - Darker Palette", 0x21c6460, 0x21c6480, indexKOFXISprites_BJenet, 0x40 },
    { L"E+C - Super Stuff 2", 0x21c6480, 0x21c64a0, indexKOFXISprites_BJenet, 0x21 },
    { L"E+C - Character Extra 1", 0x21c64a0, 0x21c64c0, indexKOFXISprites_BJenet, 0x30 },
    { L"E+C - Character Extra 2", 0x21c64c0, 0x21c64e0, indexKOFXISprites_BJenet, 0x31 },
    { L"E+C - Character Extra 3", 0x21c64e0, 0x21c6500, indexKOFXISprites_BJenet, 0x32 },
    { L"E+C - Extra Move 1", 0x21c6500, 0x21c6520, indexKOFXISprites_BJenet, 0x10 },
    { L"E+C - Extra Move 2", 0x21c6520, 0x21c6540, indexKOFXISprites_BJenet, 0x11 },
    { L"E+C - Extra Move 3", 0x21c6540, 0x21c6560, indexKOFXISprites_BJenet, 0x12 },
    { L"E+C - Extra Move 4", 0x21c6560, 0x21c6580, indexKOFXISprites_BJenet, 0x13 },
    { L"E+C - Extra Move 5", 0x21c6580, 0x21c65a0, indexKOFXISprites_BJenet, 0x14 },
    { L"E+C - Extra Move 6", 0x21c65a0, 0x21c65c0, indexKOFXISprites_BJenet, 0x15 },
    { L"E+C - Extra Move 7", 0x21c65c0, 0x21c65e0, indexKOFXISprites_BJenet, 0x16 },
    { L"E+C - Extra Move 8", 0x21c65e0, 0x21c6600, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_ED[] =
{
    { L"B. Jenet ED", 0x21c6600, 0x21c6620, indexKOFXISprites_BJenet },
    { L"E+D - Super Stuff 1", 0x21c6620, 0x21c6640, indexKOFXISprites_BJenet, 0x20 },
    { L"E+D - Electric Palette", 0x21c6640, 0x21c6660, indexKOFXISprites_BJenet, 0x41 },
    { L"E+D - Darker Palette", 0x21c6660, 0x21c6680, indexKOFXISprites_BJenet, 0x40 },
    { L"E+D - Super Stuff 2", 0x21c6680, 0x21c66a0, indexKOFXISprites_BJenet, 0x21 },
    { L"E+D - Character Extra 1", 0x21c66a0, 0x21c66c0, indexKOFXISprites_BJenet, 0x30 },
    { L"E+D - Character Extra 2", 0x21c66c0, 0x21c66e0, indexKOFXISprites_BJenet, 0x31 },
    { L"E+D - Character Extra 3", 0x21c66e0, 0x21c6700, indexKOFXISprites_BJenet, 0x32 },
    { L"E+D - Extra Move 1", 0x21c6700, 0x21c6720, indexKOFXISprites_BJenet, 0x10 },
    { L"E+D - Extra Move 2", 0x21c6720, 0x21c6740, indexKOFXISprites_BJenet, 0x11 },
    { L"E+D - Extra Move 3", 0x21c6740, 0x21c6760, indexKOFXISprites_BJenet, 0x12 },
    { L"E+D - Extra Move 4", 0x21c6760, 0x21c6780, indexKOFXISprites_BJenet, 0x13 },
    { L"E+D - Extra Move 5", 0x21c6780, 0x21c67a0, indexKOFXISprites_BJenet, 0x14 },
    { L"E+D - Extra Move 6", 0x21c67a0, 0x21c67c0, indexKOFXISprites_BJenet, 0x15 },
    { L"E+D - Extra Move 7", 0x21c67c0, 0x21c67e0, indexKOFXISprites_BJenet, 0x16 },
    { L"E+D - Extra Move 8", 0x21c67e0, 0x21c6800, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_SA[] =
{
    { L"B. Jenet SA", 0x21c6800, 0x21c6820, indexKOFXISprites_BJenet },
    { L"Start+A - Super Stuff 1", 0x21c6820, 0x21c6840, indexKOFXISprites_BJenet, 0x20 },
    { L"Start+A - Electric Palette", 0x21c6840, 0x21c6860, indexKOFXISprites_BJenet, 0x41 },
    { L"Start+A - Darker Palette", 0x21c6860, 0x21c6880, indexKOFXISprites_BJenet, 0x40 },
    { L"Start+A - Super Stuff 2", 0x21c6880, 0x21c68a0, indexKOFXISprites_BJenet, 0x21 },
    { L"Start+A - Character Extra 1", 0x21c68a0, 0x21c68c0, indexKOFXISprites_BJenet, 0x30 },
    { L"Start+A - Character Extra 2", 0x21c68c0, 0x21c68e0, indexKOFXISprites_BJenet, 0x31 },
    { L"Start+A - Character Extra 3", 0x21c68e0, 0x21c6900, indexKOFXISprites_BJenet, 0x32 },
    { L"Start+A - Extra Move 1", 0x21c6900, 0x21c6920, indexKOFXISprites_BJenet, 0x10 },
    { L"Start+A - Extra Move 2", 0x21c6920, 0x21c6940, indexKOFXISprites_BJenet, 0x11 },
    { L"Start+A - Extra Move 3", 0x21c6940, 0x21c6960, indexKOFXISprites_BJenet, 0x12 },
    { L"Start+A - Extra Move 4", 0x21c6960, 0x21c6980, indexKOFXISprites_BJenet, 0x13 },
    { L"Start+A - Extra Move 5", 0x21c6980, 0x21c69a0, indexKOFXISprites_BJenet, 0x14 },
    { L"Start+A - Extra Move 6", 0x21c69a0, 0x21c69c0, indexKOFXISprites_BJenet, 0x15 },
    { L"Start+A - Extra Move 7", 0x21c69c0, 0x21c69e0, indexKOFXISprites_BJenet, 0x16 },
    { L"Start+A - Extra Move 8", 0x21c69e0, 0x21c6a00, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_SB[] =
{
    { L"B. Jenet SB", 0x21c6a00, 0x21c6a20, indexKOFXISprites_BJenet },
    { L"Start+B - Super Stuff 1", 0x21c6a20, 0x21c6a40, indexKOFXISprites_BJenet, 0x20 },
    { L"Start+B - Electric Palette", 0x21c6a40, 0x21c6a60, indexKOFXISprites_BJenet, 0x41 },
    { L"Start+B - Darker Palette", 0x21c6a60, 0x21c6a80, indexKOFXISprites_BJenet, 0x40 },
    { L"Start+B - Super Stuff 2", 0x21c6a80, 0x21c6aa0, indexKOFXISprites_BJenet, 0x21 },
    { L"Start+B - Character Extra 1", 0x21c6aa0, 0x21c6ac0, indexKOFXISprites_BJenet, 0x30 },
    { L"Start+B - Character Extra 2", 0x21c6ac0, 0x21c6ae0, indexKOFXISprites_BJenet, 0x31 },
    { L"Start+B - Character Extra 3", 0x21c6ae0, 0x21c6b00, indexKOFXISprites_BJenet, 0x32 },
    { L"Start+B - Extra Move 1", 0x21c6b00, 0x21c6b20, indexKOFXISprites_BJenet, 0x10 },
    { L"Start+B - Extra Move 2", 0x21c6b20, 0x21c6b40, indexKOFXISprites_BJenet, 0x11 },
    { L"Start+B - Extra Move 3", 0x21c6b40, 0x21c6b60, indexKOFXISprites_BJenet, 0x12 },
    { L"Start+B - Extra Move 4", 0x21c6b60, 0x21c6b80, indexKOFXISprites_BJenet, 0x13 },
    { L"Start+B - Extra Move 5", 0x21c6b80, 0x21c6ba0, indexKOFXISprites_BJenet, 0x14 },
    { L"Start+B - Extra Move 6", 0x21c6ba0, 0x21c6bc0, indexKOFXISprites_BJenet, 0x15 },
    { L"Start+B - Extra Move 7", 0x21c6bc0, 0x21c6be0, indexKOFXISprites_BJenet, 0x16 },
    { L"Start+B - Extra Move 8", 0x21c6be0, 0x21c6c00, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_SC[] =
{
    { L"B. Jenet SC", 0x21c6c00, 0x21c6c20, indexKOFXISprites_BJenet },
    { L"Start+C - Super Stuff 1", 0x21c6c20, 0x21c6c40, indexKOFXISprites_BJenet, 0x20 },
    { L"Start+C - Electric Palette", 0x21c6c40, 0x21c6c60, indexKOFXISprites_BJenet, 0x41 },
    { L"Start+C - Darker Palette", 0x21c6c60, 0x21c6c80, indexKOFXISprites_BJenet, 0x40 },
    { L"Start+C - Super Stuff 2", 0x21c6c80, 0x21c6ca0, indexKOFXISprites_BJenet, 0x21 },
    { L"Start+C - Character Extra 1", 0x21c6ca0, 0x21c6cc0, indexKOFXISprites_BJenet, 0x30 },
    { L"Start+C - Character Extra 2", 0x21c6cc0, 0x21c6ce0, indexKOFXISprites_BJenet, 0x31 },
    { L"Start+C - Character Extra 3", 0x21c6ce0, 0x21c6d00, indexKOFXISprites_BJenet, 0x32 },
    { L"Start+C - Extra Move 1", 0x21c6d00, 0x21c6d20, indexKOFXISprites_BJenet, 0x10 },
    { L"Start+C - Extra Move 2", 0x21c6d20, 0x21c6d40, indexKOFXISprites_BJenet, 0x11 },
    { L"Start+C - Extra Move 3", 0x21c6d40, 0x21c6d60, indexKOFXISprites_BJenet, 0x12 },
    { L"Start+C - Extra Move 4", 0x21c6d60, 0x21c6d80, indexKOFXISprites_BJenet, 0x13 },
    { L"Start+C - Extra Move 5", 0x21c6d80, 0x21c6da0, indexKOFXISprites_BJenet, 0x14 },
    { L"Start+C - Extra Move 6", 0x21c6da0, 0x21c6dc0, indexKOFXISprites_BJenet, 0x15 },
    { L"Start+C - Extra Move 7", 0x21c6dc0, 0x21c6de0, indexKOFXISprites_BJenet, 0x16 },
    { L"Start+C - Extra Move 8", 0x21c6de0, 0x21c6e00, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BJENET_PALETTES_SD[] =
{
    { L"B. Jenet SD", 0x21c6e00, 0x21c6e20, indexKOFXISprites_BJenet },
    { L"Start+D - Super Stuff 1", 0x21c6e20, 0x21c6e40, indexKOFXISprites_BJenet, 0x20 },
    { L"Start+D - Electric Palette", 0x21c6e40, 0x21c6e60, indexKOFXISprites_BJenet, 0x41 },
    { L"Start+D - Darker Palette", 0x21c6e60, 0x21c6e80, indexKOFXISprites_BJenet, 0x40 },
    { L"Start+D - Super Stuff 2", 0x21c6e80, 0x21c6ea0, indexKOFXISprites_BJenet, 0x21 },
    { L"Start+D - Character Extra 1", 0x21c6ea0, 0x21c6ec0, indexKOFXISprites_BJenet, 0x30 },
    { L"Start+D - Character Extra 2", 0x21c6ec0, 0x21c6ee0, indexKOFXISprites_BJenet, 0x31 },
    { L"Start+D - Character Extra 3", 0x21c6ee0, 0x21c6f00, indexKOFXISprites_BJenet, 0x32 },
    { L"Start+D - Extra Move 1", 0x21c6f00, 0x21c6f20, indexKOFXISprites_BJenet, 0x10 },
    { L"Start+D - Extra Move 2", 0x21c6f20, 0x21c6f40, indexKOFXISprites_BJenet, 0x11 },
    { L"Start+D - Extra Move 3", 0x21c6f40, 0x21c6f60, indexKOFXISprites_BJenet, 0x12 },
    { L"Start+D - Extra Move 4", 0x21c6f60, 0x21c6f80, indexKOFXISprites_BJenet, 0x13 },
    { L"Start+D - Extra Move 5", 0x21c6f80, 0x21c6fa0, indexKOFXISprites_BJenet, 0x14 },
    { L"Start+D - Extra Move 6", 0x21c6fa0, 0x21c6fc0, indexKOFXISprites_BJenet, 0x15 },
    { L"Start+D - Extra Move 7", 0x21c6fc0, 0x21c6fe0, indexKOFXISprites_BJenet, 0x16 },
    { L"Start+D - Extra Move 8", 0x21c6fe0, 0x21c7000, indexKOFXISprites_BJenet, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_A[] =
{
    { L"Gato A", 0x2381000, 0x2381020, indexKOFXISprites_Gato },
    { L"A - Super Stuff 1", 0x2381020, 0x2381040, indexKOFXISprites_Gato, 0x20 },
    { L"A - Electric Palette", 0x2381040, 0x2381060, indexKOFXISprites_Gato, 0x41 },
    { L"A - Darker Palette", 0x2381060, 0x2381080, indexKOFXISprites_Gato, 0x40 },
    { L"A - Super Stuff 2", 0x2381080, 0x23810a0, indexKOFXISprites_Gato, 0x21 },
    { L"A - Character Extra 1", 0x23810a0, 0x23810c0, indexKOFXISprites_Gato, 0x30 },
    { L"A - Character Extra 2", 0x23810c0, 0x23810e0, indexKOFXISprites_Gato, 0x31 },
    { L"A - Character Extra 3", 0x23810e0, 0x2381100, indexKOFXISprites_Gato, 0x32 },
    { L"A - Extra Move 1", 0x2381100, 0x2381120, indexKOFXISprites_Gato, 0x10 },
    { L"A - Extra Move 2", 0x2381120, 0x2381140, indexKOFXISprites_Gato, 0x11 },
    { L"A - Extra Move 3", 0x2381140, 0x2381160, indexKOFXISprites_Gato, 0x12 },
    { L"A - Extra Move 4", 0x2381160, 0x2381180, indexKOFXISprites_Gato, 0x13 },
    { L"A - Extra Move 5", 0x2381180, 0x23811a0, indexKOFXISprites_Gato, 0x14 },
    { L"A - Extra Move 6", 0x23811a0, 0x23811c0, indexKOFXISprites_Gato, 0x15 },
    { L"A - Extra Move 7", 0x23811c0, 0x23811e0, indexKOFXISprites_Gato, 0x16 },
    { L"A - Extra Move 8", 0x23811e0, 0x2381200, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_B[] =
{
    { L"Gato B", 0x2381200, 0x2381220, indexKOFXISprites_Gato },
    { L"B - Super Stuff 1", 0x2381220, 0x2381240, indexKOFXISprites_Gato, 0x20 },
    { L"B - Electric Palette", 0x2381240, 0x2381260, indexKOFXISprites_Gato, 0x41 },
    { L"B - Darker Palette", 0x2381260, 0x2381280, indexKOFXISprites_Gato, 0x40 },
    { L"B - Super Stuff 2", 0x2381280, 0x23812a0, indexKOFXISprites_Gato, 0x21 },
    { L"B - Character Extra 1", 0x23812a0, 0x23812c0, indexKOFXISprites_Gato, 0x30 },
    { L"B - Character Extra 2", 0x23812c0, 0x23812e0, indexKOFXISprites_Gato, 0x31 },
    { L"B - Character Extra 3", 0x23812e0, 0x2381300, indexKOFXISprites_Gato, 0x32 },
    { L"B - Extra Move 1", 0x2381300, 0x2381320, indexKOFXISprites_Gato, 0x10 },
    { L"B - Extra Move 2", 0x2381320, 0x2381340, indexKOFXISprites_Gato, 0x11 },
    { L"B - Extra Move 3", 0x2381340, 0x2381360, indexKOFXISprites_Gato, 0x12 },
    { L"B - Extra Move 4", 0x2381360, 0x2381380, indexKOFXISprites_Gato, 0x13 },
    { L"B - Extra Move 5", 0x2381380, 0x23813a0, indexKOFXISprites_Gato, 0x14 },
    { L"B - Extra Move 6", 0x23813a0, 0x23813c0, indexKOFXISprites_Gato, 0x15 },
    { L"B - Extra Move 7", 0x23813c0, 0x23813e0, indexKOFXISprites_Gato, 0x16 },
    { L"B - Extra Move 8", 0x23813e0, 0x2381400, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_C[] =
{
    { L"Gato C", 0x2381400, 0x2381420, indexKOFXISprites_Gato },
    { L"C - Super Stuff 1", 0x2381420, 0x2381440, indexKOFXISprites_Gato, 0x20 },
    { L"C - Electric Palette", 0x2381440, 0x2381460, indexKOFXISprites_Gato, 0x41 },
    { L"C - Darker Palette", 0x2381460, 0x2381480, indexKOFXISprites_Gato, 0x40 },
    { L"C - Super Stuff 2", 0x2381480, 0x23814a0, indexKOFXISprites_Gato, 0x21 },
    { L"C - Character Extra 1", 0x23814a0, 0x23814c0, indexKOFXISprites_Gato, 0x30 },
    { L"C - Character Extra 2", 0x23814c0, 0x23814e0, indexKOFXISprites_Gato, 0x31 },
    { L"C - Character Extra 3", 0x23814e0, 0x2381500, indexKOFXISprites_Gato, 0x32 },
    { L"C - Extra Move 1", 0x2381500, 0x2381520, indexKOFXISprites_Gato, 0x10 },
    { L"C - Extra Move 2", 0x2381520, 0x2381540, indexKOFXISprites_Gato, 0x11 },
    { L"C - Extra Move 3", 0x2381540, 0x2381560, indexKOFXISprites_Gato, 0x12 },
    { L"C - Extra Move 4", 0x2381560, 0x2381580, indexKOFXISprites_Gato, 0x13 },
    { L"C - Extra Move 5", 0x2381580, 0x23815a0, indexKOFXISprites_Gato, 0x14 },
    { L"C - Extra Move 6", 0x23815a0, 0x23815c0, indexKOFXISprites_Gato, 0x15 },
    { L"C - Extra Move 7", 0x23815c0, 0x23815e0, indexKOFXISprites_Gato, 0x16 },
    { L"C - Extra Move 8", 0x23815e0, 0x2381600, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_D[] =
{
    { L"Gato D", 0x2381600, 0x2381620, indexKOFXISprites_Gato },
    { L"D - Super Stuff 1", 0x2381620, 0x2381640, indexKOFXISprites_Gato, 0x20 },
    { L"D - Electric Palette", 0x2381640, 0x2381660, indexKOFXISprites_Gato, 0x41 },
    { L"D - Darker Palette", 0x2381660, 0x2381680, indexKOFXISprites_Gato, 0x40 },
    { L"D - Super Stuff 2", 0x2381680, 0x23816a0, indexKOFXISprites_Gato, 0x21 },
    { L"D - Character Extra 1", 0x23816a0, 0x23816c0, indexKOFXISprites_Gato, 0x30 },
    { L"D - Character Extra 2", 0x23816c0, 0x23816e0, indexKOFXISprites_Gato, 0x31 },
    { L"D - Character Extra 3", 0x23816e0, 0x2381700, indexKOFXISprites_Gato, 0x32 },
    { L"D - Extra Move 1", 0x2381700, 0x2381720, indexKOFXISprites_Gato, 0x10 },
    { L"D - Extra Move 2", 0x2381720, 0x2381740, indexKOFXISprites_Gato, 0x11 },
    { L"D - Extra Move 3", 0x2381740, 0x2381760, indexKOFXISprites_Gato, 0x12 },
    { L"D - Extra Move 4", 0x2381760, 0x2381780, indexKOFXISprites_Gato, 0x13 },
    { L"D - Extra Move 5", 0x2381780, 0x23817a0, indexKOFXISprites_Gato, 0x14 },
    { L"D - Extra Move 6", 0x23817a0, 0x23817c0, indexKOFXISprites_Gato, 0x15 },
    { L"D - Extra Move 7", 0x23817c0, 0x23817e0, indexKOFXISprites_Gato, 0x16 },
    { L"D - Extra Move 8", 0x23817e0, 0x2381800, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_EA[] =
{
    { L"Gato EA", 0x2381800, 0x2381820, indexKOFXISprites_Gato },
    { L"E+A - Super Stuff 1", 0x2381820, 0x2381840, indexKOFXISprites_Gato, 0x20 },
    { L"E+A - Electric Palette", 0x2381840, 0x2381860, indexKOFXISprites_Gato, 0x41 },
    { L"E+A - Darker Palette", 0x2381860, 0x2381880, indexKOFXISprites_Gato, 0x40 },
    { L"E+A - Super Stuff 2", 0x2381880, 0x23818a0, indexKOFXISprites_Gato, 0x21 },
    { L"E+A - Character Extra 1", 0x23818a0, 0x23818c0, indexKOFXISprites_Gato, 0x30 },
    { L"E+A - Character Extra 2", 0x23818c0, 0x23818e0, indexKOFXISprites_Gato, 0x31 },
    { L"E+A - Character Extra 3", 0x23818e0, 0x2381900, indexKOFXISprites_Gato, 0x32 },
    { L"E+A - Extra Move 1", 0x2381900, 0x2381920, indexKOFXISprites_Gato, 0x10 },
    { L"E+A - Extra Move 2", 0x2381920, 0x2381940, indexKOFXISprites_Gato, 0x11 },
    { L"E+A - Extra Move 3", 0x2381940, 0x2381960, indexKOFXISprites_Gato, 0x12 },
    { L"E+A - Extra Move 4", 0x2381960, 0x2381980, indexKOFXISprites_Gato, 0x13 },
    { L"E+A - Extra Move 5", 0x2381980, 0x23819a0, indexKOFXISprites_Gato, 0x14 },
    { L"E+A - Extra Move 6", 0x23819a0, 0x23819c0, indexKOFXISprites_Gato, 0x15 },
    { L"E+A - Extra Move 7", 0x23819c0, 0x23819e0, indexKOFXISprites_Gato, 0x16 },
    { L"E+A - Extra Move 8", 0x23819e0, 0x2381a00, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_EB[] =
{
    { L"Gato EB", 0x2381a00, 0x2381a20, indexKOFXISprites_Gato },
    { L"E+B - Super Stuff 1", 0x2381a20, 0x2381a40, indexKOFXISprites_Gato, 0x20 },
    { L"E+B - Electric Palette", 0x2381a40, 0x2381a60, indexKOFXISprites_Gato, 0x41 },
    { L"E+B - Darker Palette", 0x2381a60, 0x2381a80, indexKOFXISprites_Gato, 0x40 },
    { L"E+B - Super Stuff 2", 0x2381a80, 0x2381aa0, indexKOFXISprites_Gato, 0x21 },
    { L"E+B - Character Extra 1", 0x2381aa0, 0x2381ac0, indexKOFXISprites_Gato, 0x30 },
    { L"E+B - Character Extra 2", 0x2381ac0, 0x2381ae0, indexKOFXISprites_Gato, 0x31 },
    { L"E+B - Character Extra 3", 0x2381ae0, 0x2381b00, indexKOFXISprites_Gato, 0x32 },
    { L"E+B - Extra Move 1", 0x2381b00, 0x2381b20, indexKOFXISprites_Gato, 0x10 },
    { L"E+B - Extra Move 2", 0x2381b20, 0x2381b40, indexKOFXISprites_Gato, 0x11 },
    { L"E+B - Extra Move 3", 0x2381b40, 0x2381b60, indexKOFXISprites_Gato, 0x12 },
    { L"E+B - Extra Move 4", 0x2381b60, 0x2381b80, indexKOFXISprites_Gato, 0x13 },
    { L"E+B - Extra Move 5", 0x2381b80, 0x2381ba0, indexKOFXISprites_Gato, 0x14 },
    { L"E+B - Extra Move 6", 0x2381ba0, 0x2381bc0, indexKOFXISprites_Gato, 0x15 },
    { L"E+B - Extra Move 7", 0x2381bc0, 0x2381be0, indexKOFXISprites_Gato, 0x16 },
    { L"E+B - Extra Move 8", 0x2381be0, 0x2381c00, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_EC[] =
{
    { L"Gato EC", 0x2381c00, 0x2381c20, indexKOFXISprites_Gato },
    { L"E+C - Super Stuff 1", 0x2381c20, 0x2381c40, indexKOFXISprites_Gato, 0x20 },
    { L"E+C - Electric Palette", 0x2381c40, 0x2381c60, indexKOFXISprites_Gato, 0x41 },
    { L"E+C - Darker Palette", 0x2381c60, 0x2381c80, indexKOFXISprites_Gato, 0x40 },
    { L"E+C - Super Stuff 2", 0x2381c80, 0x2381ca0, indexKOFXISprites_Gato, 0x21 },
    { L"E+C - Character Extra 1", 0x2381ca0, 0x2381cc0, indexKOFXISprites_Gato, 0x30 },
    { L"E+C - Character Extra 2", 0x2381cc0, 0x2381ce0, indexKOFXISprites_Gato, 0x31 },
    { L"E+C - Character Extra 3", 0x2381ce0, 0x2381d00, indexKOFXISprites_Gato, 0x32 },
    { L"E+C - Extra Move 1", 0x2381d00, 0x2381d20, indexKOFXISprites_Gato, 0x10 },
    { L"E+C - Extra Move 2", 0x2381d20, 0x2381d40, indexKOFXISprites_Gato, 0x11 },
    { L"E+C - Extra Move 3", 0x2381d40, 0x2381d60, indexKOFXISprites_Gato, 0x12 },
    { L"E+C - Extra Move 4", 0x2381d60, 0x2381d80, indexKOFXISprites_Gato, 0x13 },
    { L"E+C - Extra Move 5", 0x2381d80, 0x2381da0, indexKOFXISprites_Gato, 0x14 },
    { L"E+C - Extra Move 6", 0x2381da0, 0x2381dc0, indexKOFXISprites_Gato, 0x15 },
    { L"E+C - Extra Move 7", 0x2381dc0, 0x2381de0, indexKOFXISprites_Gato, 0x16 },
    { L"E+C - Extra Move 8", 0x2381de0, 0x2381e00, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_ED[] =
{
    { L"Gato ED", 0x2381e00, 0x2381e20, indexKOFXISprites_Gato },
    { L"E+D - Super Stuff 1", 0x2381e20, 0x2381e40, indexKOFXISprites_Gato, 0x20 },
    { L"E+D - Electric Palette", 0x2381e40, 0x2381e60, indexKOFXISprites_Gato, 0x41 },
    { L"E+D - Darker Palette", 0x2381e60, 0x2381e80, indexKOFXISprites_Gato, 0x40 },
    { L"E+D - Super Stuff 2", 0x2381e80, 0x2381ea0, indexKOFXISprites_Gato, 0x21 },
    { L"E+D - Character Extra 1", 0x2381ea0, 0x2381ec0, indexKOFXISprites_Gato, 0x30 },
    { L"E+D - Character Extra 2", 0x2381ec0, 0x2381ee0, indexKOFXISprites_Gato, 0x31 },
    { L"E+D - Character Extra 3", 0x2381ee0, 0x2381f00, indexKOFXISprites_Gato, 0x32 },
    { L"E+D - Extra Move 1", 0x2381f00, 0x2381f20, indexKOFXISprites_Gato, 0x10 },
    { L"E+D - Extra Move 2", 0x2381f20, 0x2381f40, indexKOFXISprites_Gato, 0x11 },
    { L"E+D - Extra Move 3", 0x2381f40, 0x2381f60, indexKOFXISprites_Gato, 0x12 },
    { L"E+D - Extra Move 4", 0x2381f60, 0x2381f80, indexKOFXISprites_Gato, 0x13 },
    { L"E+D - Extra Move 5", 0x2381f80, 0x2381fa0, indexKOFXISprites_Gato, 0x14 },
    { L"E+D - Extra Move 6", 0x2381fa0, 0x2381fc0, indexKOFXISprites_Gato, 0x15 },
    { L"E+D - Extra Move 7", 0x2381fc0, 0x2381fe0, indexKOFXISprites_Gato, 0x16 },
    { L"E+D - Extra Move 8", 0x2381fe0, 0x2382000, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_SA[] =
{
    { L"Gato SA", 0x2382000, 0x2382020, indexKOFXISprites_Gato },
    { L"Start+A - Super Stuff 1", 0x2382020, 0x2382040, indexKOFXISprites_Gato, 0x20 },
    { L"Start+A - Electric Palette", 0x2382040, 0x2382060, indexKOFXISprites_Gato, 0x41 },
    { L"Start+A - Darker Palette", 0x2382060, 0x2382080, indexKOFXISprites_Gato, 0x40 },
    { L"Start+A - Super Stuff 2", 0x2382080, 0x23820a0, indexKOFXISprites_Gato, 0x21 },
    { L"Start+A - Character Extra 1", 0x23820a0, 0x23820c0, indexKOFXISprites_Gato, 0x30 },
    { L"Start+A - Character Extra 2", 0x23820c0, 0x23820e0, indexKOFXISprites_Gato, 0x31 },
    { L"Start+A - Character Extra 3", 0x23820e0, 0x2382100, indexKOFXISprites_Gato, 0x32 },
    { L"Start+A - Extra Move 1", 0x2382100, 0x2382120, indexKOFXISprites_Gato, 0x10 },
    { L"Start+A - Extra Move 2", 0x2382120, 0x2382140, indexKOFXISprites_Gato, 0x11 },
    { L"Start+A - Extra Move 3", 0x2382140, 0x2382160, indexKOFXISprites_Gato, 0x12 },
    { L"Start+A - Extra Move 4", 0x2382160, 0x2382180, indexKOFXISprites_Gato, 0x13 },
    { L"Start+A - Extra Move 5", 0x2382180, 0x23821a0, indexKOFXISprites_Gato, 0x14 },
    { L"Start+A - Extra Move 6", 0x23821a0, 0x23821c0, indexKOFXISprites_Gato, 0x15 },
    { L"Start+A - Extra Move 7", 0x23821c0, 0x23821e0, indexKOFXISprites_Gato, 0x16 },
    { L"Start+A - Extra Move 8", 0x23821e0, 0x2382200, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_SB[] =
{
    { L"Gato SB", 0x2382200, 0x2382220, indexKOFXISprites_Gato },
    { L"Start+B - Super Stuff 1", 0x2382220, 0x2382240, indexKOFXISprites_Gato, 0x20 },
    { L"Start+B - Electric Palette", 0x2382240, 0x2382260, indexKOFXISprites_Gato, 0x41 },
    { L"Start+B - Darker Palette", 0x2382260, 0x2382280, indexKOFXISprites_Gato, 0x40 },
    { L"Start+B - Super Stuff 2", 0x2382280, 0x23822a0, indexKOFXISprites_Gato, 0x21 },
    { L"Start+B - Character Extra 1", 0x23822a0, 0x23822c0, indexKOFXISprites_Gato, 0x30 },
    { L"Start+B - Character Extra 2", 0x23822c0, 0x23822e0, indexKOFXISprites_Gato, 0x31 },
    { L"Start+B - Character Extra 3", 0x23822e0, 0x2382300, indexKOFXISprites_Gato, 0x32 },
    { L"Start+B - Extra Move 1", 0x2382300, 0x2382320, indexKOFXISprites_Gato, 0x10 },
    { L"Start+B - Extra Move 2", 0x2382320, 0x2382340, indexKOFXISprites_Gato, 0x11 },
    { L"Start+B - Extra Move 3", 0x2382340, 0x2382360, indexKOFXISprites_Gato, 0x12 },
    { L"Start+B - Extra Move 4", 0x2382360, 0x2382380, indexKOFXISprites_Gato, 0x13 },
    { L"Start+B - Extra Move 5", 0x2382380, 0x23823a0, indexKOFXISprites_Gato, 0x14 },
    { L"Start+B - Extra Move 6", 0x23823a0, 0x23823c0, indexKOFXISprites_Gato, 0x15 },
    { L"Start+B - Extra Move 7", 0x23823c0, 0x23823e0, indexKOFXISprites_Gato, 0x16 },
    { L"Start+B - Extra Move 8", 0x23823e0, 0x2382400, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_SC[] =
{
    { L"Gato SC", 0x2382400, 0x2382420, indexKOFXISprites_Gato },
    { L"Start+C - Super Stuff 1", 0x2382420, 0x2382440, indexKOFXISprites_Gato, 0x20 },
    { L"Start+C - Electric Palette", 0x2382440, 0x2382460, indexKOFXISprites_Gato, 0x41 },
    { L"Start+C - Darker Palette", 0x2382460, 0x2382480, indexKOFXISprites_Gato, 0x40 },
    { L"Start+C - Super Stuff 2", 0x2382480, 0x23824a0, indexKOFXISprites_Gato, 0x21 },
    { L"Start+C - Character Extra 1", 0x23824a0, 0x23824c0, indexKOFXISprites_Gato, 0x30 },
    { L"Start+C - Character Extra 2", 0x23824c0, 0x23824e0, indexKOFXISprites_Gato, 0x31 },
    { L"Start+C - Character Extra 3", 0x23824e0, 0x2382500, indexKOFXISprites_Gato, 0x32 },
    { L"Start+C - Extra Move 1", 0x2382500, 0x2382520, indexKOFXISprites_Gato, 0x10 },
    { L"Start+C - Extra Move 2", 0x2382520, 0x2382540, indexKOFXISprites_Gato, 0x11 },
    { L"Start+C - Extra Move 3", 0x2382540, 0x2382560, indexKOFXISprites_Gato, 0x12 },
    { L"Start+C - Extra Move 4", 0x2382560, 0x2382580, indexKOFXISprites_Gato, 0x13 },
    { L"Start+C - Extra Move 5", 0x2382580, 0x23825a0, indexKOFXISprites_Gato, 0x14 },
    { L"Start+C - Extra Move 6", 0x23825a0, 0x23825c0, indexKOFXISprites_Gato, 0x15 },
    { L"Start+C - Extra Move 7", 0x23825c0, 0x23825e0, indexKOFXISprites_Gato, 0x16 },
    { L"Start+C - Extra Move 8", 0x23825e0, 0x2382600, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GATO_PALETTES_SD[] =
{
    { L"Gato SD", 0x2382600, 0x2382620, indexKOFXISprites_Gato },
    { L"Start+D - Super Stuff 1", 0x2382620, 0x2382640, indexKOFXISprites_Gato, 0x20 },
    { L"Start+D - Electric Palette", 0x2382640, 0x2382660, indexKOFXISprites_Gato, 0x41 },
    { L"Start+D - Darker Palette", 0x2382660, 0x2382680, indexKOFXISprites_Gato, 0x40 },
    { L"Start+D - Super Stuff 2", 0x2382680, 0x23826a0, indexKOFXISprites_Gato, 0x21 },
    { L"Start+D - Character Extra 1", 0x23826a0, 0x23826c0, indexKOFXISprites_Gato, 0x30 },
    { L"Start+D - Character Extra 2", 0x23826c0, 0x23826e0, indexKOFXISprites_Gato, 0x31 },
    { L"Start+D - Character Extra 3", 0x23826e0, 0x2382700, indexKOFXISprites_Gato, 0x32 },
    { L"Start+D - Extra Move 1", 0x2382700, 0x2382720, indexKOFXISprites_Gato, 0x10 },
    { L"Start+D - Extra Move 2", 0x2382720, 0x2382740, indexKOFXISprites_Gato, 0x11 },
    { L"Start+D - Extra Move 3", 0x2382740, 0x2382760, indexKOFXISprites_Gato, 0x12 },
    { L"Start+D - Extra Move 4", 0x2382760, 0x2382780, indexKOFXISprites_Gato, 0x13 },
    { L"Start+D - Extra Move 5", 0x2382780, 0x23827a0, indexKOFXISprites_Gato, 0x14 },
    { L"Start+D - Extra Move 6", 0x23827a0, 0x23827c0, indexKOFXISprites_Gato, 0x15 },
    { L"Start+D - Extra Move 7", 0x23827c0, 0x23827e0, indexKOFXISprites_Gato, 0x16 },
    { L"Start+D - Extra Move 8", 0x23827e0, 0x2382800, indexKOFXISprites_Gato, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_A[] =
{
    { L"Tizoc/The Griffon A", 0x24e1000, 0x24e1020, indexKOFXISprites_Tizoc },
    { L"A - Super Stuff 1", 0x24e1020, 0x24e1040, indexKOFXISprites_Tizoc, 0x20 },
    { L"A - Electric Palette", 0x24e1040, 0x24e1060, indexKOFXISprites_Tizoc, 0x41 },
    { L"A - Darker Palette", 0x24e1060, 0x24e1080, indexKOFXISprites_Tizoc, 0x40 },
    { L"A - Super Stuff 2", 0x24e1080, 0x24e10a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"A - Character Extra 1", 0x24e10a0, 0x24e10c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"A - Character Extra 2", 0x24e10c0, 0x24e10e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"A - Character Extra 3", 0x24e10e0, 0x24e1100, indexKOFXISprites_Tizoc, 0x32 },
    { L"A - Extra Move 1", 0x24e1100, 0x24e1120, indexKOFXISprites_Tizoc, 0x10 },
    { L"A - Extra Move 2", 0x24e1120, 0x24e1140, indexKOFXISprites_Tizoc, 0x11 },
    { L"A - Extra Move 3", 0x24e1140, 0x24e1160, indexKOFXISprites_Tizoc, 0x12 },
    { L"A - Extra Move 4", 0x24e1160, 0x24e1180, indexKOFXISprites_Tizoc, 0x13 },
    { L"A - Extra Move 5", 0x24e1180, 0x24e11a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"A - Extra Move 6", 0x24e11a0, 0x24e11c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"A - Extra Move 7", 0x24e11c0, 0x24e11e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"A - Extra Move 8", 0x24e11e0, 0x24e1200, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_B[] =
{
    { L"Tizoc/The Griffon B", 0x24e1200, 0x24e1220, indexKOFXISprites_Tizoc },
    { L"B - Super Stuff 1", 0x24e1220, 0x24e1240, indexKOFXISprites_Tizoc, 0x20 },
    { L"B - Electric Palette", 0x24e1240, 0x24e1260, indexKOFXISprites_Tizoc, 0x41 },
    { L"B - Darker Palette", 0x24e1260, 0x24e1280, indexKOFXISprites_Tizoc, 0x40 },
    { L"B - Super Stuff 2", 0x24e1280, 0x24e12a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"B - Character Extra 1", 0x24e12a0, 0x24e12c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"B - Character Extra 2", 0x24e12c0, 0x24e12e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"B - Character Extra 3", 0x24e12e0, 0x24e1300, indexKOFXISprites_Tizoc, 0x32 },
    { L"B - Extra Move 1", 0x24e1300, 0x24e1320, indexKOFXISprites_Tizoc, 0x10 },
    { L"B - Extra Move 2", 0x24e1320, 0x24e1340, indexKOFXISprites_Tizoc, 0x11 },
    { L"B - Extra Move 3", 0x24e1340, 0x24e1360, indexKOFXISprites_Tizoc, 0x12 },
    { L"B - Extra Move 4", 0x24e1360, 0x24e1380, indexKOFXISprites_Tizoc, 0x13 },
    { L"B - Extra Move 5", 0x24e1380, 0x24e13a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"B - Extra Move 6", 0x24e13a0, 0x24e13c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"B - Extra Move 7", 0x24e13c0, 0x24e13e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"B - Extra Move 8", 0x24e13e0, 0x24e1400, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_C[] =
{
    { L"Tizoc/The Griffon C", 0x24e1400, 0x24e1420, indexKOFXISprites_Tizoc },
    { L"C - Super Stuff 1", 0x24e1420, 0x24e1440, indexKOFXISprites_Tizoc, 0x20 },
    { L"C - Electric Palette", 0x24e1440, 0x24e1460, indexKOFXISprites_Tizoc, 0x41 },
    { L"C - Darker Palette", 0x24e1460, 0x24e1480, indexKOFXISprites_Tizoc, 0x40 },
    { L"C - Super Stuff 2", 0x24e1480, 0x24e14a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"C - Character Extra 1", 0x24e14a0, 0x24e14c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"C - Character Extra 2", 0x24e14c0, 0x24e14e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"C - Character Extra 3", 0x24e14e0, 0x24e1500, indexKOFXISprites_Tizoc, 0x32 },
    { L"C - Extra Move 1", 0x24e1500, 0x24e1520, indexKOFXISprites_Tizoc, 0x10 },
    { L"C - Extra Move 2", 0x24e1520, 0x24e1540, indexKOFXISprites_Tizoc, 0x11 },
    { L"C - Extra Move 3", 0x24e1540, 0x24e1560, indexKOFXISprites_Tizoc, 0x12 },
    { L"C - Extra Move 4", 0x24e1560, 0x24e1580, indexKOFXISprites_Tizoc, 0x13 },
    { L"C - Extra Move 5", 0x24e1580, 0x24e15a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"C - Extra Move 6", 0x24e15a0, 0x24e15c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"C - Extra Move 7", 0x24e15c0, 0x24e15e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"C - Extra Move 8", 0x24e15e0, 0x24e1600, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_D[] =
{
    { L"Tizoc/The Griffon D", 0x24e1600, 0x24e1620, indexKOFXISprites_Tizoc },
    { L"D - Super Stuff 1", 0x24e1620, 0x24e1640, indexKOFXISprites_Tizoc, 0x20 },
    { L"D - Electric Palette", 0x24e1640, 0x24e1660, indexKOFXISprites_Tizoc, 0x41 },
    { L"D - Darker Palette", 0x24e1660, 0x24e1680, indexKOFXISprites_Tizoc, 0x40 },
    { L"D - Super Stuff 2", 0x24e1680, 0x24e16a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"D - Character Extra 1", 0x24e16a0, 0x24e16c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"D - Character Extra 2", 0x24e16c0, 0x24e16e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"D - Character Extra 3", 0x24e16e0, 0x24e1700, indexKOFXISprites_Tizoc, 0x32 },
    { L"D - Extra Move 1", 0x24e1700, 0x24e1720, indexKOFXISprites_Tizoc, 0x10 },
    { L"D - Extra Move 2", 0x24e1720, 0x24e1740, indexKOFXISprites_Tizoc, 0x11 },
    { L"D - Extra Move 3", 0x24e1740, 0x24e1760, indexKOFXISprites_Tizoc, 0x12 },
    { L"D - Extra Move 4", 0x24e1760, 0x24e1780, indexKOFXISprites_Tizoc, 0x13 },
    { L"D - Extra Move 5", 0x24e1780, 0x24e17a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"D - Extra Move 6", 0x24e17a0, 0x24e17c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"D - Extra Move 7", 0x24e17c0, 0x24e17e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"D - Extra Move 8", 0x24e17e0, 0x24e1800, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EA[] =
{
    { L"Tizoc/The Griffon EA", 0x24e1800, 0x24e1820, indexKOFXISprites_Tizoc },
    { L"E+A - Super Stuff 1", 0x24e1820, 0x24e1840, indexKOFXISprites_Tizoc, 0x20 },
    { L"E+A - Electric Palette", 0x24e1840, 0x24e1860, indexKOFXISprites_Tizoc, 0x41 },
    { L"E+A - Darker Palette", 0x24e1860, 0x24e1880, indexKOFXISprites_Tizoc, 0x40 },
    { L"E+A - Super Stuff 2", 0x24e1880, 0x24e18a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"E+A - Character Extra 1", 0x24e18a0, 0x24e18c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"E+A - Character Extra 2", 0x24e18c0, 0x24e18e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"E+A - Character Extra 3", 0x24e18e0, 0x24e1900, indexKOFXISprites_Tizoc, 0x32 },
    { L"E+A - Extra Move 1", 0x24e1900, 0x24e1920, indexKOFXISprites_Tizoc, 0x10 },
    { L"E+A - Extra Move 2", 0x24e1920, 0x24e1940, indexKOFXISprites_Tizoc, 0x11 },
    { L"E+A - Extra Move 3", 0x24e1940, 0x24e1960, indexKOFXISprites_Tizoc, 0x12 },
    { L"E+A - Extra Move 4", 0x24e1960, 0x24e1980, indexKOFXISprites_Tizoc, 0x13 },
    { L"E+A - Extra Move 5", 0x24e1980, 0x24e19a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"E+A - Extra Move 6", 0x24e19a0, 0x24e19c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"E+A - Extra Move 7", 0x24e19c0, 0x24e19e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"E+A - Extra Move 8", 0x24e19e0, 0x24e1a00, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EB[] =
{
    { L"Tizoc/The Griffon EB", 0x24e1a00, 0x24e1a20, indexKOFXISprites_Tizoc },
    { L"E+B - Super Stuff 1", 0x24e1a20, 0x24e1a40, indexKOFXISprites_Tizoc, 0x20 },
    { L"E+B - Electric Palette", 0x24e1a40, 0x24e1a60, indexKOFXISprites_Tizoc, 0x41 },
    { L"E+B - Darker Palette", 0x24e1a60, 0x24e1a80, indexKOFXISprites_Tizoc, 0x40 },
    { L"E+B - Super Stuff 2", 0x24e1a80, 0x24e1aa0, indexKOFXISprites_Tizoc, 0x21 },
    { L"E+B - Character Extra 1", 0x24e1aa0, 0x24e1ac0, indexKOFXISprites_Tizoc, 0x30 },
    { L"E+B - Character Extra 2", 0x24e1ac0, 0x24e1ae0, indexKOFXISprites_Tizoc, 0x31 },
    { L"E+B - Character Extra 3", 0x24e1ae0, 0x24e1b00, indexKOFXISprites_Tizoc, 0x32 },
    { L"E+B - Extra Move 1", 0x24e1b00, 0x24e1b20, indexKOFXISprites_Tizoc, 0x10 },
    { L"E+B - Extra Move 2", 0x24e1b20, 0x24e1b40, indexKOFXISprites_Tizoc, 0x11 },
    { L"E+B - Extra Move 3", 0x24e1b40, 0x24e1b60, indexKOFXISprites_Tizoc, 0x12 },
    { L"E+B - Extra Move 4", 0x24e1b60, 0x24e1b80, indexKOFXISprites_Tizoc, 0x13 },
    { L"E+B - Extra Move 5", 0x24e1b80, 0x24e1ba0, indexKOFXISprites_Tizoc, 0x14 },
    { L"E+B - Extra Move 6", 0x24e1ba0, 0x24e1bc0, indexKOFXISprites_Tizoc, 0x15 },
    { L"E+B - Extra Move 7", 0x24e1bc0, 0x24e1be0, indexKOFXISprites_Tizoc, 0x16 },
    { L"E+B - Extra Move 8", 0x24e1be0, 0x24e1c00, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EC[] =
{
    { L"Tizoc/The Griffon EC", 0x24e1c00, 0x24e1c20, indexKOFXISprites_Tizoc },
    { L"E+C - Super Stuff 1", 0x24e1c20, 0x24e1c40, indexKOFXISprites_Tizoc, 0x20 },
    { L"E+C - Electric Palette", 0x24e1c40, 0x24e1c60, indexKOFXISprites_Tizoc, 0x41 },
    { L"E+C - Darker Palette", 0x24e1c60, 0x24e1c80, indexKOFXISprites_Tizoc, 0x40 },
    { L"E+C - Super Stuff 2", 0x24e1c80, 0x24e1ca0, indexKOFXISprites_Tizoc, 0x21 },
    { L"E+C - Character Extra 1", 0x24e1ca0, 0x24e1cc0, indexKOFXISprites_Tizoc, 0x30 },
    { L"E+C - Character Extra 2", 0x24e1cc0, 0x24e1ce0, indexKOFXISprites_Tizoc, 0x31 },
    { L"E+C - Character Extra 3", 0x24e1ce0, 0x24e1d00, indexKOFXISprites_Tizoc, 0x32 },
    { L"E+C - Extra Move 1", 0x24e1d00, 0x24e1d20, indexKOFXISprites_Tizoc, 0x10 },
    { L"E+C - Extra Move 2", 0x24e1d20, 0x24e1d40, indexKOFXISprites_Tizoc, 0x11 },
    { L"E+C - Extra Move 3", 0x24e1d40, 0x24e1d60, indexKOFXISprites_Tizoc, 0x12 },
    { L"E+C - Extra Move 4", 0x24e1d60, 0x24e1d80, indexKOFXISprites_Tizoc, 0x13 },
    { L"E+C - Extra Move 5", 0x24e1d80, 0x24e1da0, indexKOFXISprites_Tizoc, 0x14 },
    { L"E+C - Extra Move 6", 0x24e1da0, 0x24e1dc0, indexKOFXISprites_Tizoc, 0x15 },
    { L"E+C - Extra Move 7", 0x24e1dc0, 0x24e1de0, indexKOFXISprites_Tizoc, 0x16 },
    { L"E+C - Extra Move 8", 0x24e1de0, 0x24e1e00, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_ED[] =
{
    { L"Tizoc/The Griffon ED", 0x24e1e00, 0x24e1e20, indexKOFXISprites_Tizoc },
    { L"E+D - Super Stuff 1", 0x24e1e20, 0x24e1e40, indexKOFXISprites_Tizoc, 0x20 },
    { L"E+D - Electric Palette", 0x24e1e40, 0x24e1e60, indexKOFXISprites_Tizoc, 0x41 },
    { L"E+D - Darker Palette", 0x24e1e60, 0x24e1e80, indexKOFXISprites_Tizoc, 0x40 },
    { L"E+D - Super Stuff 2", 0x24e1e80, 0x24e1ea0, indexKOFXISprites_Tizoc, 0x21 },
    { L"E+D - Character Extra 1", 0x24e1ea0, 0x24e1ec0, indexKOFXISprites_Tizoc, 0x30 },
    { L"E+D - Character Extra 2", 0x24e1ec0, 0x24e1ee0, indexKOFXISprites_Tizoc, 0x31 },
    { L"E+D - Character Extra 3", 0x24e1ee0, 0x24e1f00, indexKOFXISprites_Tizoc, 0x32 },
    { L"E+D - Extra Move 1", 0x24e1f00, 0x24e1f20, indexKOFXISprites_Tizoc, 0x10 },
    { L"E+D - Extra Move 2", 0x24e1f20, 0x24e1f40, indexKOFXISprites_Tizoc, 0x11 },
    { L"E+D - Extra Move 3", 0x24e1f40, 0x24e1f60, indexKOFXISprites_Tizoc, 0x12 },
    { L"E+D - Extra Move 4", 0x24e1f60, 0x24e1f80, indexKOFXISprites_Tizoc, 0x13 },
    { L"E+D - Extra Move 5", 0x24e1f80, 0x24e1fa0, indexKOFXISprites_Tizoc, 0x14 },
    { L"E+D - Extra Move 6", 0x24e1fa0, 0x24e1fc0, indexKOFXISprites_Tizoc, 0x15 },
    { L"E+D - Extra Move 7", 0x24e1fc0, 0x24e1fe0, indexKOFXISprites_Tizoc, 0x16 },
    { L"E+D - Extra Move 8", 0x24e1fe0, 0x24e2000, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SA[] =
{
    { L"Tizoc/The Griffon SA", 0x24e2000, 0x24e2020, indexKOFXISprites_Tizoc },
    { L"Start+A - Super Stuff 1", 0x24e2020, 0x24e2040, indexKOFXISprites_Tizoc, 0x20 },
    { L"Start+A - Electric Palette", 0x24e2040, 0x24e2060, indexKOFXISprites_Tizoc, 0x41 },
    { L"Start+A - Darker Palette", 0x24e2060, 0x24e2080, indexKOFXISprites_Tizoc, 0x40 },
    { L"Start+A - Super Stuff 2", 0x24e2080, 0x24e20a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"Start+A - Character Extra 1", 0x24e20a0, 0x24e20c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"Start+A - Character Extra 2", 0x24e20c0, 0x24e20e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"Start+A - Character Extra 3", 0x24e20e0, 0x24e2100, indexKOFXISprites_Tizoc, 0x32 },
    { L"Start+A - Extra Move 1", 0x24e2100, 0x24e2120, indexKOFXISprites_Tizoc, 0x10 },
    { L"Start+A - Extra Move 2", 0x24e2120, 0x24e2140, indexKOFXISprites_Tizoc, 0x11 },
    { L"Start+A - Extra Move 3", 0x24e2140, 0x24e2160, indexKOFXISprites_Tizoc, 0x12 },
    { L"Start+A - Extra Move 4", 0x24e2160, 0x24e2180, indexKOFXISprites_Tizoc, 0x13 },
    { L"Start+A - Extra Move 5", 0x24e2180, 0x24e21a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"Start+A - Extra Move 6", 0x24e21a0, 0x24e21c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"Start+A - Extra Move 7", 0x24e21c0, 0x24e21e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"Start+A - Extra Move 8", 0x24e21e0, 0x24e2200, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SB[] =
{
    { L"Tizoc/The Griffon SB", 0x24e2200, 0x24e2220, indexKOFXISprites_Tizoc },
    { L"Start+B - Super Stuff 1", 0x24e2220, 0x24e2240, indexKOFXISprites_Tizoc, 0x20 },
    { L"Start+B - Electric Palette", 0x24e2240, 0x24e2260, indexKOFXISprites_Tizoc, 0x41 },
    { L"Start+B - Darker Palette", 0x24e2260, 0x24e2280, indexKOFXISprites_Tizoc, 0x40 },
    { L"Start+B - Super Stuff 2", 0x24e2280, 0x24e22a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"Start+B - Character Extra 1", 0x24e22a0, 0x24e22c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"Start+B - Character Extra 2", 0x24e22c0, 0x24e22e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"Start+B - Character Extra 3", 0x24e22e0, 0x24e2300, indexKOFXISprites_Tizoc, 0x32 },
    { L"Start+B - Extra Move 1", 0x24e2300, 0x24e2320, indexKOFXISprites_Tizoc, 0x10 },
    { L"Start+B - Extra Move 2", 0x24e2320, 0x24e2340, indexKOFXISprites_Tizoc, 0x11 },
    { L"Start+B - Extra Move 3", 0x24e2340, 0x24e2360, indexKOFXISprites_Tizoc, 0x12 },
    { L"Start+B - Extra Move 4", 0x24e2360, 0x24e2380, indexKOFXISprites_Tizoc, 0x13 },
    { L"Start+B - Extra Move 5", 0x24e2380, 0x24e23a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"Start+B - Extra Move 6", 0x24e23a0, 0x24e23c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"Start+B - Extra Move 7", 0x24e23c0, 0x24e23e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"Start+B - Extra Move 8", 0x24e23e0, 0x24e2400, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SC[] =
{
    { L"Tizoc/The Griffon SC", 0x24e2400, 0x24e2420, indexKOFXISprites_Tizoc },
    { L"Start+C - Super Stuff 1", 0x24e2420, 0x24e2440, indexKOFXISprites_Tizoc, 0x20 },
    { L"Start+C - Electric Palette", 0x24e2440, 0x24e2460, indexKOFXISprites_Tizoc, 0x41 },
    { L"Start+C - Darker Palette", 0x24e2460, 0x24e2480, indexKOFXISprites_Tizoc, 0x40 },
    { L"Start+C - Super Stuff 2", 0x24e2480, 0x24e24a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"Start+C - Character Extra 1", 0x24e24a0, 0x24e24c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"Start+C - Character Extra 2", 0x24e24c0, 0x24e24e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"Start+C - Character Extra 3", 0x24e24e0, 0x24e2500, indexKOFXISprites_Tizoc, 0x32 },
    { L"Start+C - Extra Move 1", 0x24e2500, 0x24e2520, indexKOFXISprites_Tizoc, 0x10 },
    { L"Start+C - Extra Move 2", 0x24e2520, 0x24e2540, indexKOFXISprites_Tizoc, 0x11 },
    { L"Start+C - Extra Move 3", 0x24e2540, 0x24e2560, indexKOFXISprites_Tizoc, 0x12 },
    { L"Start+C - Extra Move 4", 0x24e2560, 0x24e2580, indexKOFXISprites_Tizoc, 0x13 },
    { L"Start+C - Extra Move 5", 0x24e2580, 0x24e25a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"Start+C - Extra Move 6", 0x24e25a0, 0x24e25c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"Start+C - Extra Move 7", 0x24e25c0, 0x24e25e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"Start+C - Extra Move 8", 0x24e25e0, 0x24e2600, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SD[] =
{
    { L"Tizoc/The Griffon SD", 0x24e2600, 0x24e2620, indexKOFXISprites_Tizoc },
    { L"Start+D - Super Stuff 1", 0x24e2620, 0x24e2640, indexKOFXISprites_Tizoc, 0x20 },
    { L"Start+D - Electric Palette", 0x24e2640, 0x24e2660, indexKOFXISprites_Tizoc, 0x41 },
    { L"Start+D - Darker Palette", 0x24e2660, 0x24e2680, indexKOFXISprites_Tizoc, 0x40 },
    { L"Start+D - Super Stuff 2", 0x24e2680, 0x24e26a0, indexKOFXISprites_Tizoc, 0x21 },
    { L"Start+D - Character Extra 1", 0x24e26a0, 0x24e26c0, indexKOFXISprites_Tizoc, 0x30 },
    { L"Start+D - Character Extra 2", 0x24e26c0, 0x24e26e0, indexKOFXISprites_Tizoc, 0x31 },
    { L"Start+D - Character Extra 3", 0x24e26e0, 0x24e2700, indexKOFXISprites_Tizoc, 0x32 },
    { L"Start+D - Extra Move 1", 0x24e2700, 0x24e2720, indexKOFXISprites_Tizoc, 0x10 },
    { L"Start+D - Extra Move 2", 0x24e2720, 0x24e2740, indexKOFXISprites_Tizoc, 0x11 },
    { L"Start+D - Extra Move 3", 0x24e2740, 0x24e2760, indexKOFXISprites_Tizoc, 0x12 },
    { L"Start+D - Extra Move 4", 0x24e2760, 0x24e2780, indexKOFXISprites_Tizoc, 0x13 },
    { L"Start+D - Extra Move 5", 0x24e2780, 0x24e27a0, indexKOFXISprites_Tizoc, 0x14 },
    { L"Start+D - Extra Move 6", 0x24e27a0, 0x24e27c0, indexKOFXISprites_Tizoc, 0x15 },
    { L"Start+D - Extra Move 7", 0x24e27c0, 0x24e27e0, indexKOFXISprites_Tizoc, 0x16 },
    { L"Start+D - Extra Move 8", 0x24e27e0, 0x24e2800, indexKOFXISprites_Tizoc, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_A[] =
{
    { L"Ralf A", 0x2680000, 0x2680020, indexKOFXISprites_Ralf },
    { L"A - Super Stuff 1", 0x2680020, 0x2680040, indexKOFXISprites_Ralf, 0x20 },
    { L"A - Electric Palette", 0x2680040, 0x2680060, indexKOFXISprites_Ralf, 0x41 },
    { L"A - Darker Palette", 0x2680060, 0x2680080, indexKOFXISprites_Ralf, 0x40 },
    { L"A - Super Stuff 2", 0x2680080, 0x26800a0, indexKOFXISprites_Ralf, 0x21 },
    { L"A - Character Extra 1", 0x26800a0, 0x26800c0, indexKOFXISprites_Ralf, 0x30 },
    { L"A - Character Extra 2", 0x26800c0, 0x26800e0, indexKOFXISprites_Ralf, 0x31 },
    { L"A - Character Extra 3", 0x26800e0, 0x2680100, indexKOFXISprites_Ralf, 0x32 },
    { L"A - Extra Move 1", 0x2680100, 0x2680120, indexKOFXISprites_Ralf, 0x10 },
    { L"A - Extra Move 2", 0x2680120, 0x2680140, indexKOFXISprites_Ralf, 0x11 },
    { L"A - Extra Move 3", 0x2680140, 0x2680160, indexKOFXISprites_Ralf, 0x12 },
    { L"A - Extra Move 4", 0x2680160, 0x2680180, indexKOFXISprites_Ralf, 0x13 },
    { L"A - Extra Move 5", 0x2680180, 0x26801a0, indexKOFXISprites_Ralf, 0x14 },
    { L"A - Extra Move 6", 0x26801a0, 0x26801c0, indexKOFXISprites_Ralf, 0x15 },
    { L"A - Extra Move 7", 0x26801c0, 0x26801e0, indexKOFXISprites_Ralf, 0x16 },
    { L"A - Extra Move 8", 0x26801e0, 0x2680200, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_B[] =
{
    { L"Ralf B", 0x2680200, 0x2680220, indexKOFXISprites_Ralf },
    { L"B - Super Stuff 1", 0x2680220, 0x2680240, indexKOFXISprites_Ralf, 0x20 },
    { L"B - Electric Palette", 0x2680240, 0x2680260, indexKOFXISprites_Ralf, 0x41 },
    { L"B - Darker Palette", 0x2680260, 0x2680280, indexKOFXISprites_Ralf, 0x40 },
    { L"B - Super Stuff 2", 0x2680280, 0x26802a0, indexKOFXISprites_Ralf, 0x21 },
    { L"B - Character Extra 1", 0x26802a0, 0x26802c0, indexKOFXISprites_Ralf, 0x30 },
    { L"B - Character Extra 2", 0x26802c0, 0x26802e0, indexKOFXISprites_Ralf, 0x31 },
    { L"B - Character Extra 3", 0x26802e0, 0x2680300, indexKOFXISprites_Ralf, 0x32 },
    { L"B - Extra Move 1", 0x2680300, 0x2680320, indexKOFXISprites_Ralf, 0x10 },
    { L"B - Extra Move 2", 0x2680320, 0x2680340, indexKOFXISprites_Ralf, 0x11 },
    { L"B - Extra Move 3", 0x2680340, 0x2680360, indexKOFXISprites_Ralf, 0x12 },
    { L"B - Extra Move 4", 0x2680360, 0x2680380, indexKOFXISprites_Ralf, 0x13 },
    { L"B - Extra Move 5", 0x2680380, 0x26803a0, indexKOFXISprites_Ralf, 0x14 },
    { L"B - Extra Move 6", 0x26803a0, 0x26803c0, indexKOFXISprites_Ralf, 0x15 },
    { L"B - Extra Move 7", 0x26803c0, 0x26803e0, indexKOFXISprites_Ralf, 0x16 },
    { L"B - Extra Move 8", 0x26803e0, 0x2680400, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_C[] =
{
    { L"Ralf C", 0x2680400, 0x2680420, indexKOFXISprites_Ralf },
    { L"C - Super Stuff 1", 0x2680420, 0x2680440, indexKOFXISprites_Ralf, 0x20 },
    { L"C - Electric Palette", 0x2680440, 0x2680460, indexKOFXISprites_Ralf, 0x41 },
    { L"C - Darker Palette", 0x2680460, 0x2680480, indexKOFXISprites_Ralf, 0x40 },
    { L"C - Super Stuff 2", 0x2680480, 0x26804a0, indexKOFXISprites_Ralf, 0x21 },
    { L"C - Character Extra 1", 0x26804a0, 0x26804c0, indexKOFXISprites_Ralf, 0x30 },
    { L"C - Character Extra 2", 0x26804c0, 0x26804e0, indexKOFXISprites_Ralf, 0x31 },
    { L"C - Character Extra 3", 0x26804e0, 0x2680500, indexKOFXISprites_Ralf, 0x32 },
    { L"C - Extra Move 1", 0x2680500, 0x2680520, indexKOFXISprites_Ralf, 0x10 },
    { L"C - Extra Move 2", 0x2680520, 0x2680540, indexKOFXISprites_Ralf, 0x11 },
    { L"C - Extra Move 3", 0x2680540, 0x2680560, indexKOFXISprites_Ralf, 0x12 },
    { L"C - Extra Move 4", 0x2680560, 0x2680580, indexKOFXISprites_Ralf, 0x13 },
    { L"C - Extra Move 5", 0x2680580, 0x26805a0, indexKOFXISprites_Ralf, 0x14 },
    { L"C - Extra Move 6", 0x26805a0, 0x26805c0, indexKOFXISprites_Ralf, 0x15 },
    { L"C - Extra Move 7", 0x26805c0, 0x26805e0, indexKOFXISprites_Ralf, 0x16 },
    { L"C - Extra Move 8", 0x26805e0, 0x2680600, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_D[] =
{
    { L"Ralf D", 0x2680600, 0x2680620, indexKOFXISprites_Ralf },
    { L"D - Super Stuff 1", 0x2680620, 0x2680640, indexKOFXISprites_Ralf, 0x20 },
    { L"D - Electric Palette", 0x2680640, 0x2680660, indexKOFXISprites_Ralf, 0x41 },
    { L"D - Darker Palette", 0x2680660, 0x2680680, indexKOFXISprites_Ralf, 0x40 },
    { L"D - Super Stuff 2", 0x2680680, 0x26806a0, indexKOFXISprites_Ralf, 0x21 },
    { L"D - Character Extra 1", 0x26806a0, 0x26806c0, indexKOFXISprites_Ralf, 0x30 },
    { L"D - Character Extra 2", 0x26806c0, 0x26806e0, indexKOFXISprites_Ralf, 0x31 },
    { L"D - Character Extra 3", 0x26806e0, 0x2680700, indexKOFXISprites_Ralf, 0x32 },
    { L"D - Extra Move 1", 0x2680700, 0x2680720, indexKOFXISprites_Ralf, 0x10 },
    { L"D - Extra Move 2", 0x2680720, 0x2680740, indexKOFXISprites_Ralf, 0x11 },
    { L"D - Extra Move 3", 0x2680740, 0x2680760, indexKOFXISprites_Ralf, 0x12 },
    { L"D - Extra Move 4", 0x2680760, 0x2680780, indexKOFXISprites_Ralf, 0x13 },
    { L"D - Extra Move 5", 0x2680780, 0x26807a0, indexKOFXISprites_Ralf, 0x14 },
    { L"D - Extra Move 6", 0x26807a0, 0x26807c0, indexKOFXISprites_Ralf, 0x15 },
    { L"D - Extra Move 7", 0x26807c0, 0x26807e0, indexKOFXISprites_Ralf, 0x16 },
    { L"D - Extra Move 8", 0x26807e0, 0x2680800, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_EA[] =
{
    { L"Ralf EA", 0x2680800, 0x2680820, indexKOFXISprites_Ralf },
    { L"E+A - Super Stuff 1", 0x2680820, 0x2680840, indexKOFXISprites_Ralf, 0x20 },
    { L"E+A - Electric Palette", 0x2680840, 0x2680860, indexKOFXISprites_Ralf, 0x41 },
    { L"E+A - Darker Palette", 0x2680860, 0x2680880, indexKOFXISprites_Ralf, 0x40 },
    { L"E+A - Super Stuff 2", 0x2680880, 0x26808a0, indexKOFXISprites_Ralf, 0x21 },
    { L"E+A - Character Extra 1", 0x26808a0, 0x26808c0, indexKOFXISprites_Ralf, 0x30 },
    { L"E+A - Character Extra 2", 0x26808c0, 0x26808e0, indexKOFXISprites_Ralf, 0x31 },
    { L"E+A - Character Extra 3", 0x26808e0, 0x2680900, indexKOFXISprites_Ralf, 0x32 },
    { L"E+A - Extra Move 1", 0x2680900, 0x2680920, indexKOFXISprites_Ralf, 0x10 },
    { L"E+A - Extra Move 2", 0x2680920, 0x2680940, indexKOFXISprites_Ralf, 0x11 },
    { L"E+A - Extra Move 3", 0x2680940, 0x2680960, indexKOFXISprites_Ralf, 0x12 },
    { L"E+A - Extra Move 4", 0x2680960, 0x2680980, indexKOFXISprites_Ralf, 0x13 },
    { L"E+A - Extra Move 5", 0x2680980, 0x26809a0, indexKOFXISprites_Ralf, 0x14 },
    { L"E+A - Extra Move 6", 0x26809a0, 0x26809c0, indexKOFXISprites_Ralf, 0x15 },
    { L"E+A - Extra Move 7", 0x26809c0, 0x26809e0, indexKOFXISprites_Ralf, 0x16 },
    { L"E+A - Extra Move 8", 0x26809e0, 0x2680a00, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_EB[] =
{
    { L"Ralf EB", 0x2680a00, 0x2680a20, indexKOFXISprites_Ralf },
    { L"E+B - Super Stuff 1", 0x2680a20, 0x2680a40, indexKOFXISprites_Ralf, 0x20 },
    { L"E+B - Electric Palette", 0x2680a40, 0x2680a60, indexKOFXISprites_Ralf, 0x41 },
    { L"E+B - Darker Palette", 0x2680a60, 0x2680a80, indexKOFXISprites_Ralf, 0x40 },
    { L"E+B - Super Stuff 2", 0x2680a80, 0x2680aa0, indexKOFXISprites_Ralf, 0x21 },
    { L"E+B - Character Extra 1", 0x2680aa0, 0x2680ac0, indexKOFXISprites_Ralf, 0x30 },
    { L"E+B - Character Extra 2", 0x2680ac0, 0x2680ae0, indexKOFXISprites_Ralf, 0x31 },
    { L"E+B - Character Extra 3", 0x2680ae0, 0x2680b00, indexKOFXISprites_Ralf, 0x32 },
    { L"E+B - Extra Move 1", 0x2680b00, 0x2680b20, indexKOFXISprites_Ralf, 0x10 },
    { L"E+B - Extra Move 2", 0x2680b20, 0x2680b40, indexKOFXISprites_Ralf, 0x11 },
    { L"E+B - Extra Move 3", 0x2680b40, 0x2680b60, indexKOFXISprites_Ralf, 0x12 },
    { L"E+B - Extra Move 4", 0x2680b60, 0x2680b80, indexKOFXISprites_Ralf, 0x13 },
    { L"E+B - Extra Move 5", 0x2680b80, 0x2680ba0, indexKOFXISprites_Ralf, 0x14 },
    { L"E+B - Extra Move 6", 0x2680ba0, 0x2680bc0, indexKOFXISprites_Ralf, 0x15 },
    { L"E+B - Extra Move 7", 0x2680bc0, 0x2680be0, indexKOFXISprites_Ralf, 0x16 },
    { L"E+B - Extra Move 8", 0x2680be0, 0x2680c00, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_EC[] =
{
    { L"Ralf EC", 0x2680c00, 0x2680c20, indexKOFXISprites_Ralf },
    { L"E+C - Super Stuff 1", 0x2680c20, 0x2680c40, indexKOFXISprites_Ralf, 0x20 },
    { L"E+C - Electric Palette", 0x2680c40, 0x2680c60, indexKOFXISprites_Ralf, 0x41 },
    { L"E+C - Darker Palette", 0x2680c60, 0x2680c80, indexKOFXISprites_Ralf, 0x40 },
    { L"E+C - Super Stuff 2", 0x2680c80, 0x2680ca0, indexKOFXISprites_Ralf, 0x21 },
    { L"E+C - Character Extra 1", 0x2680ca0, 0x2680cc0, indexKOFXISprites_Ralf, 0x30 },
    { L"E+C - Character Extra 2", 0x2680cc0, 0x2680ce0, indexKOFXISprites_Ralf, 0x31 },
    { L"E+C - Character Extra 3", 0x2680ce0, 0x2680d00, indexKOFXISprites_Ralf, 0x32 },
    { L"E+C - Extra Move 1", 0x2680d00, 0x2680d20, indexKOFXISprites_Ralf, 0x10 },
    { L"E+C - Extra Move 2", 0x2680d20, 0x2680d40, indexKOFXISprites_Ralf, 0x11 },
    { L"E+C - Extra Move 3", 0x2680d40, 0x2680d60, indexKOFXISprites_Ralf, 0x12 },
    { L"E+C - Extra Move 4", 0x2680d60, 0x2680d80, indexKOFXISprites_Ralf, 0x13 },
    { L"E+C - Extra Move 5", 0x2680d80, 0x2680da0, indexKOFXISprites_Ralf, 0x14 },
    { L"E+C - Extra Move 6", 0x2680da0, 0x2680dc0, indexKOFXISprites_Ralf, 0x15 },
    { L"E+C - Extra Move 7", 0x2680dc0, 0x2680de0, indexKOFXISprites_Ralf, 0x16 },
    { L"E+C - Extra Move 8", 0x2680de0, 0x2680e00, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_ED[] =
{
    { L"Ralf ED", 0x2680e00, 0x2680e20, indexKOFXISprites_Ralf },
    { L"E+D - Super Stuff 1", 0x2680e20, 0x2680e40, indexKOFXISprites_Ralf, 0x20 },
    { L"E+D - Electric Palette", 0x2680e40, 0x2680e60, indexKOFXISprites_Ralf, 0x41 },
    { L"E+D - Darker Palette", 0x2680e60, 0x2680e80, indexKOFXISprites_Ralf, 0x40 },
    { L"E+D - Super Stuff 2", 0x2680e80, 0x2680ea0, indexKOFXISprites_Ralf, 0x21 },
    { L"E+D - Character Extra 1", 0x2680ea0, 0x2680ec0, indexKOFXISprites_Ralf, 0x30 },
    { L"E+D - Character Extra 2", 0x2680ec0, 0x2680ee0, indexKOFXISprites_Ralf, 0x31 },
    { L"E+D - Character Extra 3", 0x2680ee0, 0x2680f00, indexKOFXISprites_Ralf, 0x32 },
    { L"E+D - Extra Move 1", 0x2680f00, 0x2680f20, indexKOFXISprites_Ralf, 0x10 },
    { L"E+D - Extra Move 2", 0x2680f20, 0x2680f40, indexKOFXISprites_Ralf, 0x11 },
    { L"E+D - Extra Move 3", 0x2680f40, 0x2680f60, indexKOFXISprites_Ralf, 0x12 },
    { L"E+D - Extra Move 4", 0x2680f60, 0x2680f80, indexKOFXISprites_Ralf, 0x13 },
    { L"E+D - Extra Move 5", 0x2680f80, 0x2680fa0, indexKOFXISprites_Ralf, 0x14 },
    { L"E+D - Extra Move 6", 0x2680fa0, 0x2680fc0, indexKOFXISprites_Ralf, 0x15 },
    { L"E+D - Extra Move 7", 0x2680fc0, 0x2680fe0, indexKOFXISprites_Ralf, 0x16 },
    { L"E+D - Extra Move 8", 0x2680fe0, 0x2681000, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_SA[] =
{
    { L"Ralf SA", 0x2681000, 0x2681020, indexKOFXISprites_Ralf },
    { L"Start+A - Super Stuff 1", 0x2681020, 0x2681040, indexKOFXISprites_Ralf, 0x20 },
    { L"Start+A - Electric Palette", 0x2681040, 0x2681060, indexKOFXISprites_Ralf, 0x41 },
    { L"Start+A - Darker Palette", 0x2681060, 0x2681080, indexKOFXISprites_Ralf, 0x40 },
    { L"Start+A - Super Stuff 2", 0x2681080, 0x26810a0, indexKOFXISprites_Ralf, 0x21 },
    { L"Start+A - Character Extra 1", 0x26810a0, 0x26810c0, indexKOFXISprites_Ralf, 0x30 },
    { L"Start+A - Character Extra 2", 0x26810c0, 0x26810e0, indexKOFXISprites_Ralf, 0x31 },
    { L"Start+A - Character Extra 3", 0x26810e0, 0x2681100, indexKOFXISprites_Ralf, 0x32 },
    { L"Start+A - Extra Move 1", 0x2681100, 0x2681120, indexKOFXISprites_Ralf, 0x10 },
    { L"Start+A - Extra Move 2", 0x2681120, 0x2681140, indexKOFXISprites_Ralf, 0x11 },
    { L"Start+A - Extra Move 3", 0x2681140, 0x2681160, indexKOFXISprites_Ralf, 0x12 },
    { L"Start+A - Extra Move 4", 0x2681160, 0x2681180, indexKOFXISprites_Ralf, 0x13 },
    { L"Start+A - Extra Move 5", 0x2681180, 0x26811a0, indexKOFXISprites_Ralf, 0x14 },
    { L"Start+A - Extra Move 6", 0x26811a0, 0x26811c0, indexKOFXISprites_Ralf, 0x15 },
    { L"Start+A - Extra Move 7", 0x26811c0, 0x26811e0, indexKOFXISprites_Ralf, 0x16 },
    { L"Start+A - Extra Move 8", 0x26811e0, 0x2681200, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_SB[] =
{
    { L"Ralf SB", 0x2681200, 0x2681220, indexKOFXISprites_Ralf },
    { L"Start+B - Super Stuff 1", 0x2681220, 0x2681240, indexKOFXISprites_Ralf, 0x20 },
    { L"Start+B - Electric Palette", 0x2681240, 0x2681260, indexKOFXISprites_Ralf, 0x41 },
    { L"Start+B - Darker Palette", 0x2681260, 0x2681280, indexKOFXISprites_Ralf, 0x40 },
    { L"Start+B - Super Stuff 2", 0x2681280, 0x26812a0, indexKOFXISprites_Ralf, 0x21 },
    { L"Start+B - Character Extra 1", 0x26812a0, 0x26812c0, indexKOFXISprites_Ralf, 0x30 },
    { L"Start+B - Character Extra 2", 0x26812c0, 0x26812e0, indexKOFXISprites_Ralf, 0x31 },
    { L"Start+B - Character Extra 3", 0x26812e0, 0x2681300, indexKOFXISprites_Ralf, 0x32 },
    { L"Start+B - Extra Move 1", 0x2681300, 0x2681320, indexKOFXISprites_Ralf, 0x10 },
    { L"Start+B - Extra Move 2", 0x2681320, 0x2681340, indexKOFXISprites_Ralf, 0x11 },
    { L"Start+B - Extra Move 3", 0x2681340, 0x2681360, indexKOFXISprites_Ralf, 0x12 },
    { L"Start+B - Extra Move 4", 0x2681360, 0x2681380, indexKOFXISprites_Ralf, 0x13 },
    { L"Start+B - Extra Move 5", 0x2681380, 0x26813a0, indexKOFXISprites_Ralf, 0x14 },
    { L"Start+B - Extra Move 6", 0x26813a0, 0x26813c0, indexKOFXISprites_Ralf, 0x15 },
    { L"Start+B - Extra Move 7", 0x26813c0, 0x26813e0, indexKOFXISprites_Ralf, 0x16 },
    { L"Start+B - Extra Move 8", 0x26813e0, 0x2681400, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_SC[] =
{
    { L"Ralf SC", 0x2681400, 0x2681420, indexKOFXISprites_Ralf },
    { L"Start+C - Super Stuff 1", 0x2681420, 0x2681440, indexKOFXISprites_Ralf, 0x20 },
    { L"Start+C - Electric Palette", 0x2681440, 0x2681460, indexKOFXISprites_Ralf, 0x41 },
    { L"Start+C - Darker Palette", 0x2681460, 0x2681480, indexKOFXISprites_Ralf, 0x40 },
    { L"Start+C - Super Stuff 2", 0x2681480, 0x26814a0, indexKOFXISprites_Ralf, 0x21 },
    { L"Start+C - Character Extra 1", 0x26814a0, 0x26814c0, indexKOFXISprites_Ralf, 0x30 },
    { L"Start+C - Character Extra 2", 0x26814c0, 0x26814e0, indexKOFXISprites_Ralf, 0x31 },
    { L"Start+C - Character Extra 3", 0x26814e0, 0x2681500, indexKOFXISprites_Ralf, 0x32 },
    { L"Start+C - Extra Move 1", 0x2681500, 0x2681520, indexKOFXISprites_Ralf, 0x10 },
    { L"Start+C - Extra Move 2", 0x2681520, 0x2681540, indexKOFXISprites_Ralf, 0x11 },
    { L"Start+C - Extra Move 3", 0x2681540, 0x2681560, indexKOFXISprites_Ralf, 0x12 },
    { L"Start+C - Extra Move 4", 0x2681560, 0x2681580, indexKOFXISprites_Ralf, 0x13 },
    { L"Start+C - Extra Move 5", 0x2681580, 0x26815a0, indexKOFXISprites_Ralf, 0x14 },
    { L"Start+C - Extra Move 6", 0x26815a0, 0x26815c0, indexKOFXISprites_Ralf, 0x15 },
    { L"Start+C - Extra Move 7", 0x26815c0, 0x26815e0, indexKOFXISprites_Ralf, 0x16 },
    { L"Start+C - Extra Move 8", 0x26815e0, 0x2681600, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RALF_PALETTES_SD[] =
{
    { L"Ralf SD", 0x2681600, 0x2681620, indexKOFXISprites_Ralf },
    { L"Start+D - Super Stuff 1", 0x2681620, 0x2681640, indexKOFXISprites_Ralf, 0x20 },
    { L"Start+D - Electric Palette", 0x2681640, 0x2681660, indexKOFXISprites_Ralf, 0x41 },
    { L"Start+D - Darker Palette", 0x2681660, 0x2681680, indexKOFXISprites_Ralf, 0x40 },
    { L"Start+D - Super Stuff 2", 0x2681680, 0x26816a0, indexKOFXISprites_Ralf, 0x21 },
    { L"Start+D - Character Extra 1", 0x26816a0, 0x26816c0, indexKOFXISprites_Ralf, 0x30 },
    { L"Start+D - Character Extra 2", 0x26816c0, 0x26816e0, indexKOFXISprites_Ralf, 0x31 },
    { L"Start+D - Character Extra 3", 0x26816e0, 0x2681700, indexKOFXISprites_Ralf, 0x32 },
    { L"Start+D - Extra Move 1", 0x2681700, 0x2681720, indexKOFXISprites_Ralf, 0x10 },
    { L"Start+D - Extra Move 2", 0x2681720, 0x2681740, indexKOFXISprites_Ralf, 0x11 },
    { L"Start+D - Extra Move 3", 0x2681740, 0x2681760, indexKOFXISprites_Ralf, 0x12 },
    { L"Start+D - Extra Move 4", 0x2681760, 0x2681780, indexKOFXISprites_Ralf, 0x13 },
    { L"Start+D - Extra Move 5", 0x2681780, 0x26817a0, indexKOFXISprites_Ralf, 0x14 },
    { L"Start+D - Extra Move 6", 0x26817a0, 0x26817c0, indexKOFXISprites_Ralf, 0x15 },
    { L"Start+D - Extra Move 7", 0x26817c0, 0x26817e0, indexKOFXISprites_Ralf, 0x16 },
    { L"Start+D - Extra Move 8", 0x26817e0, 0x2681800, indexKOFXISprites_Ralf, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_A[] =
{
    { L"Clark A", 0x27c1000, 0x27c1020, indexKOFXISprites_Clark },
    { L"A - Super Stuff 1", 0x27c1020, 0x27c1040, indexKOFXISprites_Clark, 0x20 },
    { L"A - Electric Palette", 0x27c1040, 0x27c1060, indexKOFXISprites_Clark, 0x41 },
    { L"A - Darker Palette", 0x27c1060, 0x27c1080, indexKOFXISprites_Clark, 0x40 },
    { L"A - Super Stuff 2", 0x27c1080, 0x27c10a0, indexKOFXISprites_Clark, 0x21 },
    { L"A - Character Extra 1", 0x27c10a0, 0x27c10c0, indexKOFXISprites_Clark, 0x30 },
    { L"A - Character Extra 2", 0x27c10c0, 0x27c10e0, indexKOFXISprites_Clark, 0x31 },
    { L"A - Character Extra 3", 0x27c10e0, 0x27c1100, indexKOFXISprites_Clark, 0x32 },
    { L"A - Extra Move 1", 0x27c1100, 0x27c1120, indexKOFXISprites_Clark, 0x10 },
    { L"A - Extra Move 2", 0x27c1120, 0x27c1140, indexKOFXISprites_Clark, 0x11 },
    { L"A - Extra Move 3", 0x27c1140, 0x27c1160, indexKOFXISprites_Clark, 0x12 },
    { L"A - Extra Move 4", 0x27c1160, 0x27c1180, indexKOFXISprites_Clark, 0x13 },
    { L"A - Extra Move 5", 0x27c1180, 0x27c11a0, indexKOFXISprites_Clark, 0x14 },
    { L"A - Extra Move 6", 0x27c11a0, 0x27c11c0, indexKOFXISprites_Clark, 0x15 },
    { L"A - Extra Move 7", 0x27c11c0, 0x27c11e0, indexKOFXISprites_Clark, 0x16 },
    { L"A - Extra Move 8", 0x27c11e0, 0x27c1200, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_B[] =
{
    { L"Clark B", 0x27c1200, 0x27c1220, indexKOFXISprites_Clark },
    { L"B - Super Stuff 1", 0x27c1220, 0x27c1240, indexKOFXISprites_Clark, 0x20 },
    { L"B - Electric Palette", 0x27c1240, 0x27c1260, indexKOFXISprites_Clark, 0x41 },
    { L"B - Darker Palette", 0x27c1260, 0x27c1280, indexKOFXISprites_Clark, 0x40 },
    { L"B - Super Stuff 2", 0x27c1280, 0x27c12a0, indexKOFXISprites_Clark, 0x21 },
    { L"B - Character Extra 1", 0x27c12a0, 0x27c12c0, indexKOFXISprites_Clark, 0x30 },
    { L"B - Character Extra 2", 0x27c12c0, 0x27c12e0, indexKOFXISprites_Clark, 0x31 },
    { L"B - Character Extra 3", 0x27c12e0, 0x27c1300, indexKOFXISprites_Clark, 0x32 },
    { L"B - Extra Move 1", 0x27c1300, 0x27c1320, indexKOFXISprites_Clark, 0x10 },
    { L"B - Extra Move 2", 0x27c1320, 0x27c1340, indexKOFXISprites_Clark, 0x11 },
    { L"B - Extra Move 3", 0x27c1340, 0x27c1360, indexKOFXISprites_Clark, 0x12 },
    { L"B - Extra Move 4", 0x27c1360, 0x27c1380, indexKOFXISprites_Clark, 0x13 },
    { L"B - Extra Move 5", 0x27c1380, 0x27c13a0, indexKOFXISprites_Clark, 0x14 },
    { L"B - Extra Move 6", 0x27c13a0, 0x27c13c0, indexKOFXISprites_Clark, 0x15 },
    { L"B - Extra Move 7", 0x27c13c0, 0x27c13e0, indexKOFXISprites_Clark, 0x16 },
    { L"B - Extra Move 8", 0x27c13e0, 0x27c1400, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_C[] =
{
    { L"Clark C", 0x27c1400, 0x27c1420, indexKOFXISprites_Clark },
    { L"C - Super Stuff 1", 0x27c1420, 0x27c1440, indexKOFXISprites_Clark, 0x20 },
    { L"C - Electric Palette", 0x27c1440, 0x27c1460, indexKOFXISprites_Clark, 0x41 },
    { L"C - Darker Palette", 0x27c1460, 0x27c1480, indexKOFXISprites_Clark, 0x40 },
    { L"C - Super Stuff 2", 0x27c1480, 0x27c14a0, indexKOFXISprites_Clark, 0x21 },
    { L"C - Character Extra 1", 0x27c14a0, 0x27c14c0, indexKOFXISprites_Clark, 0x30 },
    { L"C - Character Extra 2", 0x27c14c0, 0x27c14e0, indexKOFXISprites_Clark, 0x31 },
    { L"C - Character Extra 3", 0x27c14e0, 0x27c1500, indexKOFXISprites_Clark, 0x32 },
    { L"C - Extra Move 1", 0x27c1500, 0x27c1520, indexKOFXISprites_Clark, 0x10 },
    { L"C - Extra Move 2", 0x27c1520, 0x27c1540, indexKOFXISprites_Clark, 0x11 },
    { L"C - Extra Move 3", 0x27c1540, 0x27c1560, indexKOFXISprites_Clark, 0x12 },
    { L"C - Extra Move 4", 0x27c1560, 0x27c1580, indexKOFXISprites_Clark, 0x13 },
    { L"C - Extra Move 5", 0x27c1580, 0x27c15a0, indexKOFXISprites_Clark, 0x14 },
    { L"C - Extra Move 6", 0x27c15a0, 0x27c15c0, indexKOFXISprites_Clark, 0x15 },
    { L"C - Extra Move 7", 0x27c15c0, 0x27c15e0, indexKOFXISprites_Clark, 0x16 },
    { L"C - Extra Move 8", 0x27c15e0, 0x27c1600, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_D[] =
{
    { L"Clark D", 0x27c1600, 0x27c1620, indexKOFXISprites_Clark },
    { L"D - Super Stuff 1", 0x27c1620, 0x27c1640, indexKOFXISprites_Clark, 0x20 },
    { L"D - Electric Palette", 0x27c1640, 0x27c1660, indexKOFXISprites_Clark, 0x41 },
    { L"D - Darker Palette", 0x27c1660, 0x27c1680, indexKOFXISprites_Clark, 0x40 },
    { L"D - Super Stuff 2", 0x27c1680, 0x27c16a0, indexKOFXISprites_Clark, 0x21 },
    { L"D - Character Extra 1", 0x27c16a0, 0x27c16c0, indexKOFXISprites_Clark, 0x30 },
    { L"D - Character Extra 2", 0x27c16c0, 0x27c16e0, indexKOFXISprites_Clark, 0x31 },
    { L"D - Character Extra 3", 0x27c16e0, 0x27c1700, indexKOFXISprites_Clark, 0x32 },
    { L"D - Extra Move 1", 0x27c1700, 0x27c1720, indexKOFXISprites_Clark, 0x10 },
    { L"D - Extra Move 2", 0x27c1720, 0x27c1740, indexKOFXISprites_Clark, 0x11 },
    { L"D - Extra Move 3", 0x27c1740, 0x27c1760, indexKOFXISprites_Clark, 0x12 },
    { L"D - Extra Move 4", 0x27c1760, 0x27c1780, indexKOFXISprites_Clark, 0x13 },
    { L"D - Extra Move 5", 0x27c1780, 0x27c17a0, indexKOFXISprites_Clark, 0x14 },
    { L"D - Extra Move 6", 0x27c17a0, 0x27c17c0, indexKOFXISprites_Clark, 0x15 },
    { L"D - Extra Move 7", 0x27c17c0, 0x27c17e0, indexKOFXISprites_Clark, 0x16 },
    { L"D - Extra Move 8", 0x27c17e0, 0x27c1800, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_EA[] =
{
    { L"Clark EA", 0x27c1800, 0x27c1820, indexKOFXISprites_Clark },
    { L"E+A - Super Stuff 1", 0x27c1820, 0x27c1840, indexKOFXISprites_Clark, 0x20 },
    { L"E+A - Electric Palette", 0x27c1840, 0x27c1860, indexKOFXISprites_Clark, 0x41 },
    { L"E+A - Darker Palette", 0x27c1860, 0x27c1880, indexKOFXISprites_Clark, 0x40 },
    { L"E+A - Super Stuff 2", 0x27c1880, 0x27c18a0, indexKOFXISprites_Clark, 0x21 },
    { L"E+A - Character Extra 1", 0x27c18a0, 0x27c18c0, indexKOFXISprites_Clark, 0x30 },
    { L"E+A - Character Extra 2", 0x27c18c0, 0x27c18e0, indexKOFXISprites_Clark, 0x31 },
    { L"E+A - Character Extra 3", 0x27c18e0, 0x27c1900, indexKOFXISprites_Clark, 0x32 },
    { L"E+A - Extra Move 1", 0x27c1900, 0x27c1920, indexKOFXISprites_Clark, 0x10 },
    { L"E+A - Extra Move 2", 0x27c1920, 0x27c1940, indexKOFXISprites_Clark, 0x11 },
    { L"E+A - Extra Move 3", 0x27c1940, 0x27c1960, indexKOFXISprites_Clark, 0x12 },
    { L"E+A - Extra Move 4", 0x27c1960, 0x27c1980, indexKOFXISprites_Clark, 0x13 },
    { L"E+A - Extra Move 5", 0x27c1980, 0x27c19a0, indexKOFXISprites_Clark, 0x14 },
    { L"E+A - Extra Move 6", 0x27c19a0, 0x27c19c0, indexKOFXISprites_Clark, 0x15 },
    { L"E+A - Extra Move 7", 0x27c19c0, 0x27c19e0, indexKOFXISprites_Clark, 0x16 },
    { L"E+A - Extra Move 8", 0x27c19e0, 0x27c1a00, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_EB[] =
{
    { L"Clark EB", 0x27c1a00, 0x27c1a20, indexKOFXISprites_Clark },
    { L"E+B - Super Stuff 1", 0x27c1a20, 0x27c1a40, indexKOFXISprites_Clark, 0x20 },
    { L"E+B - Electric Palette", 0x27c1a40, 0x27c1a60, indexKOFXISprites_Clark, 0x41 },
    { L"E+B - Darker Palette", 0x27c1a60, 0x27c1a80, indexKOFXISprites_Clark, 0x40 },
    { L"E+B - Super Stuff 2", 0x27c1a80, 0x27c1aa0, indexKOFXISprites_Clark, 0x21 },
    { L"E+B - Character Extra 1", 0x27c1aa0, 0x27c1ac0, indexKOFXISprites_Clark, 0x30 },
    { L"E+B - Character Extra 2", 0x27c1ac0, 0x27c1ae0, indexKOFXISprites_Clark, 0x31 },
    { L"E+B - Character Extra 3", 0x27c1ae0, 0x27c1b00, indexKOFXISprites_Clark, 0x32 },
    { L"E+B - Extra Move 1", 0x27c1b00, 0x27c1b20, indexKOFXISprites_Clark, 0x10 },
    { L"E+B - Extra Move 2", 0x27c1b20, 0x27c1b40, indexKOFXISprites_Clark, 0x11 },
    { L"E+B - Extra Move 3", 0x27c1b40, 0x27c1b60, indexKOFXISprites_Clark, 0x12 },
    { L"E+B - Extra Move 4", 0x27c1b60, 0x27c1b80, indexKOFXISprites_Clark, 0x13 },
    { L"E+B - Extra Move 5", 0x27c1b80, 0x27c1ba0, indexKOFXISprites_Clark, 0x14 },
    { L"E+B - Extra Move 6", 0x27c1ba0, 0x27c1bc0, indexKOFXISprites_Clark, 0x15 },
    { L"E+B - Extra Move 7", 0x27c1bc0, 0x27c1be0, indexKOFXISprites_Clark, 0x16 },
    { L"E+B - Extra Move 8", 0x27c1be0, 0x27c1c00, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_EC[] =
{
    { L"Clark EC", 0x27c1c00, 0x27c1c20, indexKOFXISprites_Clark },
    { L"E+C - Super Stuff 1", 0x27c1c20, 0x27c1c40, indexKOFXISprites_Clark, 0x20 },
    { L"E+C - Electric Palette", 0x27c1c40, 0x27c1c60, indexKOFXISprites_Clark, 0x41 },
    { L"E+C - Darker Palette", 0x27c1c60, 0x27c1c80, indexKOFXISprites_Clark, 0x40 },
    { L"E+C - Super Stuff 2", 0x27c1c80, 0x27c1ca0, indexKOFXISprites_Clark, 0x21 },
    { L"E+C - Character Extra 1", 0x27c1ca0, 0x27c1cc0, indexKOFXISprites_Clark, 0x30 },
    { L"E+C - Character Extra 2", 0x27c1cc0, 0x27c1ce0, indexKOFXISprites_Clark, 0x31 },
    { L"E+C - Character Extra 3", 0x27c1ce0, 0x27c1d00, indexKOFXISprites_Clark, 0x32 },
    { L"E+C - Extra Move 1", 0x27c1d00, 0x27c1d20, indexKOFXISprites_Clark, 0x10 },
    { L"E+C - Extra Move 2", 0x27c1d20, 0x27c1d40, indexKOFXISprites_Clark, 0x11 },
    { L"E+C - Extra Move 3", 0x27c1d40, 0x27c1d60, indexKOFXISprites_Clark, 0x12 },
    { L"E+C - Extra Move 4", 0x27c1d60, 0x27c1d80, indexKOFXISprites_Clark, 0x13 },
    { L"E+C - Extra Move 5", 0x27c1d80, 0x27c1da0, indexKOFXISprites_Clark, 0x14 },
    { L"E+C - Extra Move 6", 0x27c1da0, 0x27c1dc0, indexKOFXISprites_Clark, 0x15 },
    { L"E+C - Extra Move 7", 0x27c1dc0, 0x27c1de0, indexKOFXISprites_Clark, 0x16 },
    { L"E+C - Extra Move 8", 0x27c1de0, 0x27c1e00, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_ED[] =
{
    { L"Clark ED", 0x27c1e00, 0x27c1e20, indexKOFXISprites_Clark },
    { L"E+D - Super Stuff 1", 0x27c1e20, 0x27c1e40, indexKOFXISprites_Clark, 0x20 },
    { L"E+D - Electric Palette", 0x27c1e40, 0x27c1e60, indexKOFXISprites_Clark, 0x41 },
    { L"E+D - Darker Palette", 0x27c1e60, 0x27c1e80, indexKOFXISprites_Clark, 0x40 },
    { L"E+D - Super Stuff 2", 0x27c1e80, 0x27c1ea0, indexKOFXISprites_Clark, 0x21 },
    { L"E+D - Character Extra 1", 0x27c1ea0, 0x27c1ec0, indexKOFXISprites_Clark, 0x30 },
    { L"E+D - Character Extra 2", 0x27c1ec0, 0x27c1ee0, indexKOFXISprites_Clark, 0x31 },
    { L"E+D - Character Extra 3", 0x27c1ee0, 0x27c1f00, indexKOFXISprites_Clark, 0x32 },
    { L"E+D - Extra Move 1", 0x27c1f00, 0x27c1f20, indexKOFXISprites_Clark, 0x10 },
    { L"E+D - Extra Move 2", 0x27c1f20, 0x27c1f40, indexKOFXISprites_Clark, 0x11 },
    { L"E+D - Extra Move 3", 0x27c1f40, 0x27c1f60, indexKOFXISprites_Clark, 0x12 },
    { L"E+D - Extra Move 4", 0x27c1f60, 0x27c1f80, indexKOFXISprites_Clark, 0x13 },
    { L"E+D - Extra Move 5", 0x27c1f80, 0x27c1fa0, indexKOFXISprites_Clark, 0x14 },
    { L"E+D - Extra Move 6", 0x27c1fa0, 0x27c1fc0, indexKOFXISprites_Clark, 0x15 },
    { L"E+D - Extra Move 7", 0x27c1fc0, 0x27c1fe0, indexKOFXISprites_Clark, 0x16 },
    { L"E+D - Extra Move 8", 0x27c1fe0, 0x27c2000, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_SA[] =
{
    { L"Clark SA", 0x27c2000, 0x27c2020, indexKOFXISprites_Clark },
    { L"Start+A - Super Stuff 1", 0x27c2020, 0x27c2040, indexKOFXISprites_Clark, 0x20 },
    { L"Start+A - Electric Palette", 0x27c2040, 0x27c2060, indexKOFXISprites_Clark, 0x41 },
    { L"Start+A - Darker Palette", 0x27c2060, 0x27c2080, indexKOFXISprites_Clark, 0x40 },
    { L"Start+A - Super Stuff 2", 0x27c2080, 0x27c20a0, indexKOFXISprites_Clark, 0x21 },
    { L"Start+A - Character Extra 1", 0x27c20a0, 0x27c20c0, indexKOFXISprites_Clark, 0x30 },
    { L"Start+A - Character Extra 2", 0x27c20c0, 0x27c20e0, indexKOFXISprites_Clark, 0x31 },
    { L"Start+A - Character Extra 3", 0x27c20e0, 0x27c2100, indexKOFXISprites_Clark, 0x32 },
    { L"Start+A - Extra Move 1", 0x27c2100, 0x27c2120, indexKOFXISprites_Clark, 0x10 },
    { L"Start+A - Extra Move 2", 0x27c2120, 0x27c2140, indexKOFXISprites_Clark, 0x11 },
    { L"Start+A - Extra Move 3", 0x27c2140, 0x27c2160, indexKOFXISprites_Clark, 0x12 },
    { L"Start+A - Extra Move 4", 0x27c2160, 0x27c2180, indexKOFXISprites_Clark, 0x13 },
    { L"Start+A - Extra Move 5", 0x27c2180, 0x27c21a0, indexKOFXISprites_Clark, 0x14 },
    { L"Start+A - Extra Move 6", 0x27c21a0, 0x27c21c0, indexKOFXISprites_Clark, 0x15 },
    { L"Start+A - Extra Move 7", 0x27c21c0, 0x27c21e0, indexKOFXISprites_Clark, 0x16 },
    { L"Start+A - Extra Move 8", 0x27c21e0, 0x27c2200, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_SB[] =
{
    { L"Clark SB", 0x27c2200, 0x27c2220, indexKOFXISprites_Clark },
    { L"Start+B - Super Stuff 1", 0x27c2220, 0x27c2240, indexKOFXISprites_Clark, 0x20 },
    { L"Start+B - Electric Palette", 0x27c2240, 0x27c2260, indexKOFXISprites_Clark, 0x41 },
    { L"Start+B - Darker Palette", 0x27c2260, 0x27c2280, indexKOFXISprites_Clark, 0x40 },
    { L"Start+B - Super Stuff 2", 0x27c2280, 0x27c22a0, indexKOFXISprites_Clark, 0x21 },
    { L"Start+B - Character Extra 1", 0x27c22a0, 0x27c22c0, indexKOFXISprites_Clark, 0x30 },
    { L"Start+B - Character Extra 2", 0x27c22c0, 0x27c22e0, indexKOFXISprites_Clark, 0x31 },
    { L"Start+B - Character Extra 3", 0x27c22e0, 0x27c2300, indexKOFXISprites_Clark, 0x32 },
    { L"Start+B - Extra Move 1", 0x27c2300, 0x27c2320, indexKOFXISprites_Clark, 0x10 },
    { L"Start+B - Extra Move 2", 0x27c2320, 0x27c2340, indexKOFXISprites_Clark, 0x11 },
    { L"Start+B - Extra Move 3", 0x27c2340, 0x27c2360, indexKOFXISprites_Clark, 0x12 },
    { L"Start+B - Extra Move 4", 0x27c2360, 0x27c2380, indexKOFXISprites_Clark, 0x13 },
    { L"Start+B - Extra Move 5", 0x27c2380, 0x27c23a0, indexKOFXISprites_Clark, 0x14 },
    { L"Start+B - Extra Move 6", 0x27c23a0, 0x27c23c0, indexKOFXISprites_Clark, 0x15 },
    { L"Start+B - Extra Move 7", 0x27c23c0, 0x27c23e0, indexKOFXISprites_Clark, 0x16 },
    { L"Start+B - Extra Move 8", 0x27c23e0, 0x27c2400, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_SC[] =
{
    { L"Clark SC", 0x27c2400, 0x27c2420, indexKOFXISprites_Clark },
    { L"Start+C - Super Stuff 1", 0x27c2420, 0x27c2440, indexKOFXISprites_Clark, 0x20 },
    { L"Start+C - Electric Palette", 0x27c2440, 0x27c2460, indexKOFXISprites_Clark, 0x41 },
    { L"Start+C - Darker Palette", 0x27c2460, 0x27c2480, indexKOFXISprites_Clark, 0x40 },
    { L"Start+C - Super Stuff 2", 0x27c2480, 0x27c24a0, indexKOFXISprites_Clark, 0x21 },
    { L"Start+C - Character Extra 1", 0x27c24a0, 0x27c24c0, indexKOFXISprites_Clark, 0x30 },
    { L"Start+C - Character Extra 2", 0x27c24c0, 0x27c24e0, indexKOFXISprites_Clark, 0x31 },
    { L"Start+C - Character Extra 3", 0x27c24e0, 0x27c2500, indexKOFXISprites_Clark, 0x32 },
    { L"Start+C - Extra Move 1", 0x27c2500, 0x27c2520, indexKOFXISprites_Clark, 0x10 },
    { L"Start+C - Extra Move 2", 0x27c2520, 0x27c2540, indexKOFXISprites_Clark, 0x11 },
    { L"Start+C - Extra Move 3", 0x27c2540, 0x27c2560, indexKOFXISprites_Clark, 0x12 },
    { L"Start+C - Extra Move 4", 0x27c2560, 0x27c2580, indexKOFXISprites_Clark, 0x13 },
    { L"Start+C - Extra Move 5", 0x27c2580, 0x27c25a0, indexKOFXISprites_Clark, 0x14 },
    { L"Start+C - Extra Move 6", 0x27c25a0, 0x27c25c0, indexKOFXISprites_Clark, 0x15 },
    { L"Start+C - Extra Move 7", 0x27c25c0, 0x27c25e0, indexKOFXISprites_Clark, 0x16 },
    { L"Start+C - Extra Move 8", 0x27c25e0, 0x27c2600, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_CLARK_PALETTES_SD[] =
{
    { L"Clark SD", 0x27c2600, 0x27c2620, indexKOFXISprites_Clark },
    { L"Start+D - Super Stuff 1", 0x27c2620, 0x27c2640, indexKOFXISprites_Clark, 0x20 },
    { L"Start+D - Electric Palette", 0x27c2640, 0x27c2660, indexKOFXISprites_Clark, 0x41 },
    { L"Start+D - Darker Palette", 0x27c2660, 0x27c2680, indexKOFXISprites_Clark, 0x40 },
    { L"Start+D - Super Stuff 2", 0x27c2680, 0x27c26a0, indexKOFXISprites_Clark, 0x21 },
    { L"Start+D - Character Extra 1", 0x27c26a0, 0x27c26c0, indexKOFXISprites_Clark, 0x30 },
    { L"Start+D - Character Extra 2", 0x27c26c0, 0x27c26e0, indexKOFXISprites_Clark, 0x31 },
    { L"Start+D - Character Extra 3", 0x27c26e0, 0x27c2700, indexKOFXISprites_Clark, 0x32 },
    { L"Start+D - Extra Move 1", 0x27c2700, 0x27c2720, indexKOFXISprites_Clark, 0x10 },
    { L"Start+D - Extra Move 2", 0x27c2720, 0x27c2740, indexKOFXISprites_Clark, 0x11 },
    { L"Start+D - Extra Move 3", 0x27c2740, 0x27c2760, indexKOFXISprites_Clark, 0x12 },
    { L"Start+D - Extra Move 4", 0x27c2760, 0x27c2780, indexKOFXISprites_Clark, 0x13 },
    { L"Start+D - Extra Move 5", 0x27c2780, 0x27c27a0, indexKOFXISprites_Clark, 0x14 },
    { L"Start+D - Extra Move 6", 0x27c27a0, 0x27c27c0, indexKOFXISprites_Clark, 0x15 },
    { L"Start+D - Extra Move 7", 0x27c27c0, 0x27c27e0, indexKOFXISprites_Clark, 0x16 },
    { L"Start+D - Extra Move 8", 0x27c27e0, 0x27c2800, indexKOFXISprites_Clark, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_A[] =
{
    { L"Whip A", 0x28ed000, 0x28ed020, indexKOFXISprites_Whip },
    { L"A - Super Stuff 1", 0x28ed020, 0x28ed040, indexKOFXISprites_Whip, 0x20 },
    { L"A - Electric Palette", 0x28ed040, 0x28ed060, indexKOFXISprites_Whip, 0x41 },
    { L"A - Darker Palette", 0x28ed060, 0x28ed080, indexKOFXISprites_Whip, 0x40 },
    { L"A - Super Stuff 2", 0x28ed080, 0x28ed0a0, indexKOFXISprites_Whip, 0x21 },
    { L"A - Character Extra 1", 0x28ed0a0, 0x28ed0c0, indexKOFXISprites_Whip, 0x30 },
    { L"A - Character Extra 2", 0x28ed0c0, 0x28ed0e0, indexKOFXISprites_Whip, 0x31 },
    { L"A - Character Extra 3", 0x28ed0e0, 0x28ed100, indexKOFXISprites_Whip, 0x32 },
    { L"A - Extra Move 1", 0x28ed100, 0x28ed120, indexKOFXISprites_Whip, 0x10 },
    { L"A - Extra Move 2", 0x28ed120, 0x28ed140, indexKOFXISprites_Whip, 0x11 },
    { L"A - Extra Move 3", 0x28ed140, 0x28ed160, indexKOFXISprites_Whip, 0x12 },
    { L"A - Extra Move 4", 0x28ed160, 0x28ed180, indexKOFXISprites_Whip, 0x13 },
    { L"A - Extra Move 5", 0x28ed180, 0x28ed1a0, indexKOFXISprites_Whip, 0x14 },
    { L"A - Extra Move 6", 0x28ed1a0, 0x28ed1c0, indexKOFXISprites_Whip, 0x15 },
    { L"A - Extra Move 7", 0x28ed1c0, 0x28ed1e0, indexKOFXISprites_Whip, 0x16 },
    { L"A - Extra Move 8", 0x28ed1e0, 0x28ed200, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_B[] =
{
    { L"Whip B", 0x28ed200, 0x28ed220, indexKOFXISprites_Whip },
    { L"B - Super Stuff 1", 0x28ed220, 0x28ed240, indexKOFXISprites_Whip, 0x20 },
    { L"B - Electric Palette", 0x28ed240, 0x28ed260, indexKOFXISprites_Whip, 0x41 },
    { L"B - Darker Palette", 0x28ed260, 0x28ed280, indexKOFXISprites_Whip, 0x40 },
    { L"B - Super Stuff 2", 0x28ed280, 0x28ed2a0, indexKOFXISprites_Whip, 0x21 },
    { L"B - Character Extra 1", 0x28ed2a0, 0x28ed2c0, indexKOFXISprites_Whip, 0x30 },
    { L"B - Character Extra 2", 0x28ed2c0, 0x28ed2e0, indexKOFXISprites_Whip, 0x31 },
    { L"B - Character Extra 3", 0x28ed2e0, 0x28ed300, indexKOFXISprites_Whip, 0x32 },
    { L"B - Extra Move 1", 0x28ed300, 0x28ed320, indexKOFXISprites_Whip, 0x10 },
    { L"B - Extra Move 2", 0x28ed320, 0x28ed340, indexKOFXISprites_Whip, 0x11 },
    { L"B - Extra Move 3", 0x28ed340, 0x28ed360, indexKOFXISprites_Whip, 0x12 },
    { L"B - Extra Move 4", 0x28ed360, 0x28ed380, indexKOFXISprites_Whip, 0x13 },
    { L"B - Extra Move 5", 0x28ed380, 0x28ed3a0, indexKOFXISprites_Whip, 0x14 },
    { L"B - Extra Move 6", 0x28ed3a0, 0x28ed3c0, indexKOFXISprites_Whip, 0x15 },
    { L"B - Extra Move 7", 0x28ed3c0, 0x28ed3e0, indexKOFXISprites_Whip, 0x16 },
    { L"B - Extra Move 8", 0x28ed3e0, 0x28ed400, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_C[] =
{
    { L"Whip C", 0x28ed400, 0x28ed420, indexKOFXISprites_Whip },
    { L"C - Super Stuff 1", 0x28ed420, 0x28ed440, indexKOFXISprites_Whip, 0x20 },
    { L"C - Electric Palette", 0x28ed440, 0x28ed460, indexKOFXISprites_Whip, 0x41 },
    { L"C - Darker Palette", 0x28ed460, 0x28ed480, indexKOFXISprites_Whip, 0x40 },
    { L"C - Super Stuff 2", 0x28ed480, 0x28ed4a0, indexKOFXISprites_Whip, 0x21 },
    { L"C - Character Extra 1", 0x28ed4a0, 0x28ed4c0, indexKOFXISprites_Whip, 0x30 },
    { L"C - Character Extra 2", 0x28ed4c0, 0x28ed4e0, indexKOFXISprites_Whip, 0x31 },
    { L"C - Character Extra 3", 0x28ed4e0, 0x28ed500, indexKOFXISprites_Whip, 0x32 },
    { L"C - Extra Move 1", 0x28ed500, 0x28ed520, indexKOFXISprites_Whip, 0x10 },
    { L"C - Extra Move 2", 0x28ed520, 0x28ed540, indexKOFXISprites_Whip, 0x11 },
    { L"C - Extra Move 3", 0x28ed540, 0x28ed560, indexKOFXISprites_Whip, 0x12 },
    { L"C - Extra Move 4", 0x28ed560, 0x28ed580, indexKOFXISprites_Whip, 0x13 },
    { L"C - Extra Move 5", 0x28ed580, 0x28ed5a0, indexKOFXISprites_Whip, 0x14 },
    { L"C - Extra Move 6", 0x28ed5a0, 0x28ed5c0, indexKOFXISprites_Whip, 0x15 },
    { L"C - Extra Move 7", 0x28ed5c0, 0x28ed5e0, indexKOFXISprites_Whip, 0x16 },
    { L"C - Extra Move 8", 0x28ed5e0, 0x28ed600, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_D[] =
{
    { L"Whip D", 0x28ed600, 0x28ed620, indexKOFXISprites_Whip },
    { L"D - Super Stuff 1", 0x28ed620, 0x28ed640, indexKOFXISprites_Whip, 0x20 },
    { L"D - Electric Palette", 0x28ed640, 0x28ed660, indexKOFXISprites_Whip, 0x41 },
    { L"D - Darker Palette", 0x28ed660, 0x28ed680, indexKOFXISprites_Whip, 0x40 },
    { L"D - Super Stuff 2", 0x28ed680, 0x28ed6a0, indexKOFXISprites_Whip, 0x21 },
    { L"D - Character Extra 1", 0x28ed6a0, 0x28ed6c0, indexKOFXISprites_Whip, 0x30 },
    { L"D - Character Extra 2", 0x28ed6c0, 0x28ed6e0, indexKOFXISprites_Whip, 0x31 },
    { L"D - Character Extra 3", 0x28ed6e0, 0x28ed700, indexKOFXISprites_Whip, 0x32 },
    { L"D - Extra Move 1", 0x28ed700, 0x28ed720, indexKOFXISprites_Whip, 0x10 },
    { L"D - Extra Move 2", 0x28ed720, 0x28ed740, indexKOFXISprites_Whip, 0x11 },
    { L"D - Extra Move 3", 0x28ed740, 0x28ed760, indexKOFXISprites_Whip, 0x12 },
    { L"D - Extra Move 4", 0x28ed760, 0x28ed780, indexKOFXISprites_Whip, 0x13 },
    { L"D - Extra Move 5", 0x28ed780, 0x28ed7a0, indexKOFXISprites_Whip, 0x14 },
    { L"D - Extra Move 6", 0x28ed7a0, 0x28ed7c0, indexKOFXISprites_Whip, 0x15 },
    { L"D - Extra Move 7", 0x28ed7c0, 0x28ed7e0, indexKOFXISprites_Whip, 0x16 },
    { L"D - Extra Move 8", 0x28ed7e0, 0x28ed800, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_EA[] =
{
    { L"Whip EA", 0x28ed800, 0x28ed820, indexKOFXISprites_Whip },
    { L"E+A - Super Stuff 1", 0x28ed820, 0x28ed840, indexKOFXISprites_Whip, 0x20 },
    { L"E+A - Electric Palette", 0x28ed840, 0x28ed860, indexKOFXISprites_Whip, 0x41 },
    { L"E+A - Darker Palette", 0x28ed860, 0x28ed880, indexKOFXISprites_Whip, 0x40 },
    { L"E+A - Super Stuff 2", 0x28ed880, 0x28ed8a0, indexKOFXISprites_Whip, 0x21 },
    { L"E+A - Character Extra 1", 0x28ed8a0, 0x28ed8c0, indexKOFXISprites_Whip, 0x30 },
    { L"E+A - Character Extra 2", 0x28ed8c0, 0x28ed8e0, indexKOFXISprites_Whip, 0x31 },
    { L"E+A - Character Extra 3", 0x28ed8e0, 0x28ed900, indexKOFXISprites_Whip, 0x32 },
    { L"E+A - Extra Move 1", 0x28ed900, 0x28ed920, indexKOFXISprites_Whip, 0x10 },
    { L"E+A - Extra Move 2", 0x28ed920, 0x28ed940, indexKOFXISprites_Whip, 0x11 },
    { L"E+A - Extra Move 3", 0x28ed940, 0x28ed960, indexKOFXISprites_Whip, 0x12 },
    { L"E+A - Extra Move 4", 0x28ed960, 0x28ed980, indexKOFXISprites_Whip, 0x13 },
    { L"E+A - Extra Move 5", 0x28ed980, 0x28ed9a0, indexKOFXISprites_Whip, 0x14 },
    { L"E+A - Extra Move 6", 0x28ed9a0, 0x28ed9c0, indexKOFXISprites_Whip, 0x15 },
    { L"E+A - Extra Move 7", 0x28ed9c0, 0x28ed9e0, indexKOFXISprites_Whip, 0x16 },
    { L"E+A - Extra Move 8", 0x28ed9e0, 0x28eda00, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_EB[] =
{
    { L"Whip EB", 0x28eda00, 0x28eda20, indexKOFXISprites_Whip },
    { L"E+B - Super Stuff 1", 0x28eda20, 0x28eda40, indexKOFXISprites_Whip, 0x20 },
    { L"E+B - Electric Palette", 0x28eda40, 0x28eda60, indexKOFXISprites_Whip, 0x41 },
    { L"E+B - Darker Palette", 0x28eda60, 0x28eda80, indexKOFXISprites_Whip, 0x40 },
    { L"E+B - Super Stuff 2", 0x28eda80, 0x28edaa0, indexKOFXISprites_Whip, 0x21 },
    { L"E+B - Character Extra 1", 0x28edaa0, 0x28edac0, indexKOFXISprites_Whip, 0x30 },
    { L"E+B - Character Extra 2", 0x28edac0, 0x28edae0, indexKOFXISprites_Whip, 0x31 },
    { L"E+B - Character Extra 3", 0x28edae0, 0x28edb00, indexKOFXISprites_Whip, 0x32 },
    { L"E+B - Extra Move 1", 0x28edb00, 0x28edb20, indexKOFXISprites_Whip, 0x10 },
    { L"E+B - Extra Move 2", 0x28edb20, 0x28edb40, indexKOFXISprites_Whip, 0x11 },
    { L"E+B - Extra Move 3", 0x28edb40, 0x28edb60, indexKOFXISprites_Whip, 0x12 },
    { L"E+B - Extra Move 4", 0x28edb60, 0x28edb80, indexKOFXISprites_Whip, 0x13 },
    { L"E+B - Extra Move 5", 0x28edb80, 0x28edba0, indexKOFXISprites_Whip, 0x14 },
    { L"E+B - Extra Move 6", 0x28edba0, 0x28edbc0, indexKOFXISprites_Whip, 0x15 },
    { L"E+B - Extra Move 7", 0x28edbc0, 0x28edbe0, indexKOFXISprites_Whip, 0x16 },
    { L"E+B - Extra Move 8", 0x28edbe0, 0x28edc00, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_EC[] =
{
    { L"Whip EC", 0x28edc00, 0x28edc20, indexKOFXISprites_Whip },
    { L"E+C - Super Stuff 1", 0x28edc20, 0x28edc40, indexKOFXISprites_Whip, 0x20 },
    { L"E+C - Electric Palette", 0x28edc40, 0x28edc60, indexKOFXISprites_Whip, 0x41 },
    { L"E+C - Darker Palette", 0x28edc60, 0x28edc80, indexKOFXISprites_Whip, 0x40 },
    { L"E+C - Super Stuff 2", 0x28edc80, 0x28edca0, indexKOFXISprites_Whip, 0x21 },
    { L"E+C - Character Extra 1", 0x28edca0, 0x28edcc0, indexKOFXISprites_Whip, 0x30 },
    { L"E+C - Character Extra 2", 0x28edcc0, 0x28edce0, indexKOFXISprites_Whip, 0x31 },
    { L"E+C - Character Extra 3", 0x28edce0, 0x28edd00, indexKOFXISprites_Whip, 0x32 },
    { L"E+C - Extra Move 1", 0x28edd00, 0x28edd20, indexKOFXISprites_Whip, 0x10 },
    { L"E+C - Extra Move 2", 0x28edd20, 0x28edd40, indexKOFXISprites_Whip, 0x11 },
    { L"E+C - Extra Move 3", 0x28edd40, 0x28edd60, indexKOFXISprites_Whip, 0x12 },
    { L"E+C - Extra Move 4", 0x28edd60, 0x28edd80, indexKOFXISprites_Whip, 0x13 },
    { L"E+C - Extra Move 5", 0x28edd80, 0x28edda0, indexKOFXISprites_Whip, 0x14 },
    { L"E+C - Extra Move 6", 0x28edda0, 0x28eddc0, indexKOFXISprites_Whip, 0x15 },
    { L"E+C - Extra Move 7", 0x28eddc0, 0x28edde0, indexKOFXISprites_Whip, 0x16 },
    { L"E+C - Extra Move 8", 0x28edde0, 0x28ede00, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_ED[] =
{
    { L"Whip ED", 0x28ede00, 0x28ede20, indexKOFXISprites_Whip },
    { L"E+D - Super Stuff 1", 0x28ede20, 0x28ede40, indexKOFXISprites_Whip, 0x20 },
    { L"E+D - Electric Palette", 0x28ede40, 0x28ede60, indexKOFXISprites_Whip, 0x41 },
    { L"E+D - Darker Palette", 0x28ede60, 0x28ede80, indexKOFXISprites_Whip, 0x40 },
    { L"E+D - Super Stuff 2", 0x28ede80, 0x28edea0, indexKOFXISprites_Whip, 0x21 },
    { L"E+D - Character Extra 1", 0x28edea0, 0x28edec0, indexKOFXISprites_Whip, 0x30 },
    { L"E+D - Character Extra 2", 0x28edec0, 0x28edee0, indexKOFXISprites_Whip, 0x31 },
    { L"E+D - Character Extra 3", 0x28edee0, 0x28edf00, indexKOFXISprites_Whip, 0x32 },
    { L"E+D - Extra Move 1", 0x28edf00, 0x28edf20, indexKOFXISprites_Whip, 0x10 },
    { L"E+D - Extra Move 2", 0x28edf20, 0x28edf40, indexKOFXISprites_Whip, 0x11 },
    { L"E+D - Extra Move 3", 0x28edf40, 0x28edf60, indexKOFXISprites_Whip, 0x12 },
    { L"E+D - Extra Move 4", 0x28edf60, 0x28edf80, indexKOFXISprites_Whip, 0x13 },
    { L"E+D - Extra Move 5", 0x28edf80, 0x28edfa0, indexKOFXISprites_Whip, 0x14 },
    { L"E+D - Extra Move 6", 0x28edfa0, 0x28edfc0, indexKOFXISprites_Whip, 0x15 },
    { L"E+D - Extra Move 7", 0x28edfc0, 0x28edfe0, indexKOFXISprites_Whip, 0x16 },
    { L"E+D - Extra Move 8", 0x28edfe0, 0x28ee000, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_SA[] =
{
    { L"Whip SA", 0x28ee000, 0x28ee020, indexKOFXISprites_Whip },
    { L"Start+A - Super Stuff 1", 0x28ee020, 0x28ee040, indexKOFXISprites_Whip, 0x20 },
    { L"Start+A - Electric Palette", 0x28ee040, 0x28ee060, indexKOFXISprites_Whip, 0x41 },
    { L"Start+A - Darker Palette", 0x28ee060, 0x28ee080, indexKOFXISprites_Whip, 0x40 },
    { L"Start+A - Super Stuff 2", 0x28ee080, 0x28ee0a0, indexKOFXISprites_Whip, 0x21 },
    { L"Start+A - Character Extra 1", 0x28ee0a0, 0x28ee0c0, indexKOFXISprites_Whip, 0x30 },
    { L"Start+A - Character Extra 2", 0x28ee0c0, 0x28ee0e0, indexKOFXISprites_Whip, 0x31 },
    { L"Start+A - Character Extra 3", 0x28ee0e0, 0x28ee100, indexKOFXISprites_Whip, 0x32 },
    { L"Start+A - Extra Move 1", 0x28ee100, 0x28ee120, indexKOFXISprites_Whip, 0x10 },
    { L"Start+A - Extra Move 2", 0x28ee120, 0x28ee140, indexKOFXISprites_Whip, 0x11 },
    { L"Start+A - Extra Move 3", 0x28ee140, 0x28ee160, indexKOFXISprites_Whip, 0x12 },
    { L"Start+A - Extra Move 4", 0x28ee160, 0x28ee180, indexKOFXISprites_Whip, 0x13 },
    { L"Start+A - Extra Move 5", 0x28ee180, 0x28ee1a0, indexKOFXISprites_Whip, 0x14 },
    { L"Start+A - Extra Move 6", 0x28ee1a0, 0x28ee1c0, indexKOFXISprites_Whip, 0x15 },
    { L"Start+A - Extra Move 7", 0x28ee1c0, 0x28ee1e0, indexKOFXISprites_Whip, 0x16 },
    { L"Start+A - Extra Move 8", 0x28ee1e0, 0x28ee200, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_SB[] =
{
    { L"Whip SB", 0x28ee200, 0x28ee220, indexKOFXISprites_Whip },
    { L"Start+B - Super Stuff 1", 0x28ee220, 0x28ee240, indexKOFXISprites_Whip, 0x20 },
    { L"Start+B - Electric Palette", 0x28ee240, 0x28ee260, indexKOFXISprites_Whip, 0x41 },
    { L"Start+B - Darker Palette", 0x28ee260, 0x28ee280, indexKOFXISprites_Whip, 0x40 },
    { L"Start+B - Super Stuff 2", 0x28ee280, 0x28ee2a0, indexKOFXISprites_Whip, 0x21 },
    { L"Start+B - Character Extra 1", 0x28ee2a0, 0x28ee2c0, indexKOFXISprites_Whip, 0x30 },
    { L"Start+B - Character Extra 2", 0x28ee2c0, 0x28ee2e0, indexKOFXISprites_Whip, 0x31 },
    { L"Start+B - Character Extra 3", 0x28ee2e0, 0x28ee300, indexKOFXISprites_Whip, 0x32 },
    { L"Start+B - Extra Move 1", 0x28ee300, 0x28ee320, indexKOFXISprites_Whip, 0x10 },
    { L"Start+B - Extra Move 2", 0x28ee320, 0x28ee340, indexKOFXISprites_Whip, 0x11 },
    { L"Start+B - Extra Move 3", 0x28ee340, 0x28ee360, indexKOFXISprites_Whip, 0x12 },
    { L"Start+B - Extra Move 4", 0x28ee360, 0x28ee380, indexKOFXISprites_Whip, 0x13 },
    { L"Start+B - Extra Move 5", 0x28ee380, 0x28ee3a0, indexKOFXISprites_Whip, 0x14 },
    { L"Start+B - Extra Move 6", 0x28ee3a0, 0x28ee3c0, indexKOFXISprites_Whip, 0x15 },
    { L"Start+B - Extra Move 7", 0x28ee3c0, 0x28ee3e0, indexKOFXISprites_Whip, 0x16 },
    { L"Start+B - Extra Move 8", 0x28ee3e0, 0x28ee400, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_SC[] =
{
    { L"Whip SC", 0x28ee400, 0x28ee420, indexKOFXISprites_Whip },
    { L"Start+C - Super Stuff 1", 0x28ee420, 0x28ee440, indexKOFXISprites_Whip, 0x20 },
    { L"Start+C - Electric Palette", 0x28ee440, 0x28ee460, indexKOFXISprites_Whip, 0x41 },
    { L"Start+C - Darker Palette", 0x28ee460, 0x28ee480, indexKOFXISprites_Whip, 0x40 },
    { L"Start+C - Super Stuff 2", 0x28ee480, 0x28ee4a0, indexKOFXISprites_Whip, 0x21 },
    { L"Start+C - Character Extra 1", 0x28ee4a0, 0x28ee4c0, indexKOFXISprites_Whip, 0x30 },
    { L"Start+C - Character Extra 2", 0x28ee4c0, 0x28ee4e0, indexKOFXISprites_Whip, 0x31 },
    { L"Start+C - Character Extra 3", 0x28ee4e0, 0x28ee500, indexKOFXISprites_Whip, 0x32 },
    { L"Start+C - Extra Move 1", 0x28ee500, 0x28ee520, indexKOFXISprites_Whip, 0x10 },
    { L"Start+C - Extra Move 2", 0x28ee520, 0x28ee540, indexKOFXISprites_Whip, 0x11 },
    { L"Start+C - Extra Move 3", 0x28ee540, 0x28ee560, indexKOFXISprites_Whip, 0x12 },
    { L"Start+C - Extra Move 4", 0x28ee560, 0x28ee580, indexKOFXISprites_Whip, 0x13 },
    { L"Start+C - Extra Move 5", 0x28ee580, 0x28ee5a0, indexKOFXISprites_Whip, 0x14 },
    { L"Start+C - Extra Move 6", 0x28ee5a0, 0x28ee5c0, indexKOFXISprites_Whip, 0x15 },
    { L"Start+C - Extra Move 7", 0x28ee5c0, 0x28ee5e0, indexKOFXISprites_Whip, 0x16 },
    { L"Start+C - Extra Move 8", 0x28ee5e0, 0x28ee600, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_WHIP_PALETTES_SD[] =
{
    { L"Whip SD", 0x28ee600, 0x28ee620, indexKOFXISprites_Whip },
    { L"Start+D - Super Stuff 1", 0x28ee620, 0x28ee640, indexKOFXISprites_Whip, 0x20 },
    { L"Start+D - Electric Palette", 0x28ee640, 0x28ee660, indexKOFXISprites_Whip, 0x41 },
    { L"Start+D - Darker Palette", 0x28ee660, 0x28ee680, indexKOFXISprites_Whip, 0x40 },
    { L"Start+D - Super Stuff 2", 0x28ee680, 0x28ee6a0, indexKOFXISprites_Whip, 0x21 },
    { L"Start+D - Character Extra 1", 0x28ee6a0, 0x28ee6c0, indexKOFXISprites_Whip, 0x30 },
    { L"Start+D - Character Extra 2", 0x28ee6c0, 0x28ee6e0, indexKOFXISprites_Whip, 0x31 },
    { L"Start+D - Character Extra 3", 0x28ee6e0, 0x28ee700, indexKOFXISprites_Whip, 0x32 },
    { L"Start+D - Extra Move 1", 0x28ee700, 0x28ee720, indexKOFXISprites_Whip, 0x10 },
    { L"Start+D - Extra Move 2", 0x28ee720, 0x28ee740, indexKOFXISprites_Whip, 0x11 },
    { L"Start+D - Extra Move 3", 0x28ee740, 0x28ee760, indexKOFXISprites_Whip, 0x12 },
    { L"Start+D - Extra Move 4", 0x28ee760, 0x28ee780, indexKOFXISprites_Whip, 0x13 },
    { L"Start+D - Extra Move 5", 0x28ee780, 0x28ee7a0, indexKOFXISprites_Whip, 0x14 },
    { L"Start+D - Extra Move 6", 0x28ee7a0, 0x28ee7c0, indexKOFXISprites_Whip, 0x15 },
    { L"Start+D - Extra Move 7", 0x28ee7c0, 0x28ee7e0, indexKOFXISprites_Whip, 0x16 },
    { L"Start+D - Extra Move 8", 0x28ee7e0, 0x28ee800, indexKOFXISprites_Whip, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_A[] =
{
    { L"Athena A", 0x2a9d800, 0x2a9d820, indexKOFXISprites_Athena },
    { L"A - Super Stuff 1", 0x2a9d820, 0x2a9d840, indexKOFXISprites_Athena, 0x20 },
    { L"A - Electric Palette", 0x2a9d840, 0x2a9d860, indexKOFXISprites_Athena, 0x41 },
    { L"A - Darker Palette", 0x2a9d860, 0x2a9d880, indexKOFXISprites_Athena, 0x40 },
    { L"A - Super Stuff 2", 0x2a9d880, 0x2a9d8a0, indexKOFXISprites_Athena, 0x21 },
    { L"A - Character Extra 1", 0x2a9d8a0, 0x2a9d8c0, indexKOFXISprites_Athena, 0x30 },
    { L"A - Character Extra 2", 0x2a9d8c0, 0x2a9d8e0, indexKOFXISprites_Athena, 0x31 },
    { L"A - Character Extra 3", 0x2a9d8e0, 0x2a9d900, indexKOFXISprites_Athena, 0x32 },
    { L"A - Extra Move 1", 0x2a9d900, 0x2a9d920, indexKOFXISprites_Athena, 0x10 },
    { L"A - Extra Move 2", 0x2a9d920, 0x2a9d940, indexKOFXISprites_Athena, 0x11 },
    { L"A - Extra Move 3", 0x2a9d940, 0x2a9d960, indexKOFXISprites_Athena, 0x12 },
    { L"A - Extra Move 4", 0x2a9d960, 0x2a9d980, indexKOFXISprites_Athena, 0x13 },
    { L"A - Extra Move 5", 0x2a9d980, 0x2a9d9a0, indexKOFXISprites_Athena, 0x14 },
    { L"A - Extra Move 6", 0x2a9d9a0, 0x2a9d9c0, indexKOFXISprites_Athena, 0x15 },
    { L"A - Extra Move 7", 0x2a9d9c0, 0x2a9d9e0, indexKOFXISprites_Athena, 0x16 },
    { L"A - Extra Move 8", 0x2a9d9e0, 0x2a9da00, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_B[] =
{
    { L"Athena B", 0x2a9da00, 0x2a9da20, indexKOFXISprites_Athena },
    { L"B - Super Stuff 1", 0x2a9da20, 0x2a9da40, indexKOFXISprites_Athena, 0x20 },
    { L"B - Electric Palette", 0x2a9da40, 0x2a9da60, indexKOFXISprites_Athena, 0x41 },
    { L"B - Darker Palette", 0x2a9da60, 0x2a9da80, indexKOFXISprites_Athena, 0x40 },
    { L"B - Super Stuff 2", 0x2a9da80, 0x2a9daa0, indexKOFXISprites_Athena, 0x21 },
    { L"B - Character Extra 1", 0x2a9daa0, 0x2a9dac0, indexKOFXISprites_Athena, 0x30 },
    { L"B - Character Extra 2", 0x2a9dac0, 0x2a9dae0, indexKOFXISprites_Athena, 0x31 },
    { L"B - Character Extra 3", 0x2a9dae0, 0x2a9db00, indexKOFXISprites_Athena, 0x32 },
    { L"B - Extra Move 1", 0x2a9db00, 0x2a9db20, indexKOFXISprites_Athena, 0x10 },
    { L"B - Extra Move 2", 0x2a9db20, 0x2a9db40, indexKOFXISprites_Athena, 0x11 },
    { L"B - Extra Move 3", 0x2a9db40, 0x2a9db60, indexKOFXISprites_Athena, 0x12 },
    { L"B - Extra Move 4", 0x2a9db60, 0x2a9db80, indexKOFXISprites_Athena, 0x13 },
    { L"B - Extra Move 5", 0x2a9db80, 0x2a9dba0, indexKOFXISprites_Athena, 0x14 },
    { L"B - Extra Move 6", 0x2a9dba0, 0x2a9dbc0, indexKOFXISprites_Athena, 0x15 },
    { L"B - Extra Move 7", 0x2a9dbc0, 0x2a9dbe0, indexKOFXISprites_Athena, 0x16 },
    { L"B - Extra Move 8", 0x2a9dbe0, 0x2a9dc00, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_C[] =
{
    { L"Athena C", 0x2a9dc00, 0x2a9dc20, indexKOFXISprites_Athena },
    { L"C - Super Stuff 1", 0x2a9dc20, 0x2a9dc40, indexKOFXISprites_Athena, 0x20 },
    { L"C - Electric Palette", 0x2a9dc40, 0x2a9dc60, indexKOFXISprites_Athena, 0x41 },
    { L"C - Darker Palette", 0x2a9dc60, 0x2a9dc80, indexKOFXISprites_Athena, 0x40 },
    { L"C - Super Stuff 2", 0x2a9dc80, 0x2a9dca0, indexKOFXISprites_Athena, 0x21 },
    { L"C - Character Extra 1", 0x2a9dca0, 0x2a9dcc0, indexKOFXISprites_Athena, 0x30 },
    { L"C - Character Extra 2", 0x2a9dcc0, 0x2a9dce0, indexKOFXISprites_Athena, 0x31 },
    { L"C - Character Extra 3", 0x2a9dce0, 0x2a9dd00, indexKOFXISprites_Athena, 0x32 },
    { L"C - Extra Move 1", 0x2a9dd00, 0x2a9dd20, indexKOFXISprites_Athena, 0x10 },
    { L"C - Extra Move 2", 0x2a9dd20, 0x2a9dd40, indexKOFXISprites_Athena, 0x11 },
    { L"C - Extra Move 3", 0x2a9dd40, 0x2a9dd60, indexKOFXISprites_Athena, 0x12 },
    { L"C - Extra Move 4", 0x2a9dd60, 0x2a9dd80, indexKOFXISprites_Athena, 0x13 },
    { L"C - Extra Move 5", 0x2a9dd80, 0x2a9dda0, indexKOFXISprites_Athena, 0x14 },
    { L"C - Extra Move 6", 0x2a9dda0, 0x2a9ddc0, indexKOFXISprites_Athena, 0x15 },
    { L"C - Extra Move 7", 0x2a9ddc0, 0x2a9dde0, indexKOFXISprites_Athena, 0x16 },
    { L"C - Extra Move 8", 0x2a9dde0, 0x2a9de00, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_D[] =
{
    { L"Athena D", 0x2a9de00, 0x2a9de20, indexKOFXISprites_Athena },
    { L"D - Super Stuff 1", 0x2a9de20, 0x2a9de40, indexKOFXISprites_Athena, 0x20 },
    { L"D - Electric Palette", 0x2a9de40, 0x2a9de60, indexKOFXISprites_Athena, 0x41 },
    { L"D - Darker Palette", 0x2a9de60, 0x2a9de80, indexKOFXISprites_Athena, 0x40 },
    { L"D - Super Stuff 2", 0x2a9de80, 0x2a9dea0, indexKOFXISprites_Athena, 0x21 },
    { L"D - Character Extra 1", 0x2a9dea0, 0x2a9dec0, indexKOFXISprites_Athena, 0x30 },
    { L"D - Character Extra 2", 0x2a9dec0, 0x2a9dee0, indexKOFXISprites_Athena, 0x31 },
    { L"D - Character Extra 3", 0x2a9dee0, 0x2a9df00, indexKOFXISprites_Athena, 0x32 },
    { L"D - Extra Move 1", 0x2a9df00, 0x2a9df20, indexKOFXISprites_Athena, 0x10 },
    { L"D - Extra Move 2", 0x2a9df20, 0x2a9df40, indexKOFXISprites_Athena, 0x11 },
    { L"D - Extra Move 3", 0x2a9df40, 0x2a9df60, indexKOFXISprites_Athena, 0x12 },
    { L"D - Extra Move 4", 0x2a9df60, 0x2a9df80, indexKOFXISprites_Athena, 0x13 },
    { L"D - Extra Move 5", 0x2a9df80, 0x2a9dfa0, indexKOFXISprites_Athena, 0x14 },
    { L"D - Extra Move 6", 0x2a9dfa0, 0x2a9dfc0, indexKOFXISprites_Athena, 0x15 },
    { L"D - Extra Move 7", 0x2a9dfc0, 0x2a9dfe0, indexKOFXISprites_Athena, 0x16 },
    { L"D - Extra Move 8", 0x2a9dfe0, 0x2a9e000, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_EA[] =
{
    { L"Athena EA", 0x2a9e000, 0x2a9e020, indexKOFXISprites_Athena },
    { L"E+A - Super Stuff 1", 0x2a9e020, 0x2a9e040, indexKOFXISprites_Athena, 0x20 },
    { L"E+A - Electric Palette", 0x2a9e040, 0x2a9e060, indexKOFXISprites_Athena, 0x41 },
    { L"E+A - Darker Palette", 0x2a9e060, 0x2a9e080, indexKOFXISprites_Athena, 0x40 },
    { L"E+A - Super Stuff 2", 0x2a9e080, 0x2a9e0a0, indexKOFXISprites_Athena, 0x21 },
    { L"E+A - Character Extra 1", 0x2a9e0a0, 0x2a9e0c0, indexKOFXISprites_Athena, 0x30 },
    { L"E+A - Character Extra 2", 0x2a9e0c0, 0x2a9e0e0, indexKOFXISprites_Athena, 0x31 },
    { L"E+A - Character Extra 3", 0x2a9e0e0, 0x2a9e100, indexKOFXISprites_Athena, 0x32 },
    { L"E+A - Extra Move 1", 0x2a9e100, 0x2a9e120, indexKOFXISprites_Athena, 0x10 },
    { L"E+A - Extra Move 2", 0x2a9e120, 0x2a9e140, indexKOFXISprites_Athena, 0x11 },
    { L"E+A - Extra Move 3", 0x2a9e140, 0x2a9e160, indexKOFXISprites_Athena, 0x12 },
    { L"E+A - Extra Move 4", 0x2a9e160, 0x2a9e180, indexKOFXISprites_Athena, 0x13 },
    { L"E+A - Extra Move 5", 0x2a9e180, 0x2a9e1a0, indexKOFXISprites_Athena, 0x14 },
    { L"E+A - Extra Move 6", 0x2a9e1a0, 0x2a9e1c0, indexKOFXISprites_Athena, 0x15 },
    { L"E+A - Extra Move 7", 0x2a9e1c0, 0x2a9e1e0, indexKOFXISprites_Athena, 0x16 },
    { L"E+A - Extra Move 8", 0x2a9e1e0, 0x2a9e200, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_EB[] =
{
    { L"Athena EB", 0x2a9e200, 0x2a9e220, indexKOFXISprites_Athena },
    { L"E+B - Super Stuff 1", 0x2a9e220, 0x2a9e240, indexKOFXISprites_Athena, 0x20 },
    { L"E+B - Electric Palette", 0x2a9e240, 0x2a9e260, indexKOFXISprites_Athena, 0x41 },
    { L"E+B - Darker Palette", 0x2a9e260, 0x2a9e280, indexKOFXISprites_Athena, 0x40 },
    { L"E+B - Super Stuff 2", 0x2a9e280, 0x2a9e2a0, indexKOFXISprites_Athena, 0x21 },
    { L"E+B - Character Extra 1", 0x2a9e2a0, 0x2a9e2c0, indexKOFXISprites_Athena, 0x30 },
    { L"E+B - Character Extra 2", 0x2a9e2c0, 0x2a9e2e0, indexKOFXISprites_Athena, 0x31 },
    { L"E+B - Character Extra 3", 0x2a9e2e0, 0x2a9e300, indexKOFXISprites_Athena, 0x32 },
    { L"E+B - Extra Move 1", 0x2a9e300, 0x2a9e320, indexKOFXISprites_Athena, 0x10 },
    { L"E+B - Extra Move 2", 0x2a9e320, 0x2a9e340, indexKOFXISprites_Athena, 0x11 },
    { L"E+B - Extra Move 3", 0x2a9e340, 0x2a9e360, indexKOFXISprites_Athena, 0x12 },
    { L"E+B - Extra Move 4", 0x2a9e360, 0x2a9e380, indexKOFXISprites_Athena, 0x13 },
    { L"E+B - Extra Move 5", 0x2a9e380, 0x2a9e3a0, indexKOFXISprites_Athena, 0x14 },
    { L"E+B - Extra Move 6", 0x2a9e3a0, 0x2a9e3c0, indexKOFXISprites_Athena, 0x15 },
    { L"E+B - Extra Move 7", 0x2a9e3c0, 0x2a9e3e0, indexKOFXISprites_Athena, 0x16 },
    { L"E+B - Extra Move 8", 0x2a9e3e0, 0x2a9e400, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_EC[] =
{
    { L"Athena EC", 0x2a9e400, 0x2a9e420, indexKOFXISprites_Athena },
    { L"E+C - Super Stuff 1", 0x2a9e420, 0x2a9e440, indexKOFXISprites_Athena, 0x20 },
    { L"E+C - Electric Palette", 0x2a9e440, 0x2a9e460, indexKOFXISprites_Athena, 0x41 },
    { L"E+C - Darker Palette", 0x2a9e460, 0x2a9e480, indexKOFXISprites_Athena, 0x40 },
    { L"E+C - Super Stuff 2", 0x2a9e480, 0x2a9e4a0, indexKOFXISprites_Athena, 0x21 },
    { L"E+C - Character Extra 1", 0x2a9e4a0, 0x2a9e4c0, indexKOFXISprites_Athena, 0x30 },
    { L"E+C - Character Extra 2", 0x2a9e4c0, 0x2a9e4e0, indexKOFXISprites_Athena, 0x31 },
    { L"E+C - Character Extra 3", 0x2a9e4e0, 0x2a9e500, indexKOFXISprites_Athena, 0x32 },
    { L"E+C - Extra Move 1", 0x2a9e500, 0x2a9e520, indexKOFXISprites_Athena, 0x10 },
    { L"E+C - Extra Move 2", 0x2a9e520, 0x2a9e540, indexKOFXISprites_Athena, 0x11 },
    { L"E+C - Extra Move 3", 0x2a9e540, 0x2a9e560, indexKOFXISprites_Athena, 0x12 },
    { L"E+C - Extra Move 4", 0x2a9e560, 0x2a9e580, indexKOFXISprites_Athena, 0x13 },
    { L"E+C - Extra Move 5", 0x2a9e580, 0x2a9e5a0, indexKOFXISprites_Athena, 0x14 },
    { L"E+C - Extra Move 6", 0x2a9e5a0, 0x2a9e5c0, indexKOFXISprites_Athena, 0x15 },
    { L"E+C - Extra Move 7", 0x2a9e5c0, 0x2a9e5e0, indexKOFXISprites_Athena, 0x16 },
    { L"E+C - Extra Move 8", 0x2a9e5e0, 0x2a9e600, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_ED[] =
{
    { L"Athena ED", 0x2a9e600, 0x2a9e620, indexKOFXISprites_Athena },
    { L"E+D - Super Stuff 1", 0x2a9e620, 0x2a9e640, indexKOFXISprites_Athena, 0x20 },
    { L"E+D - Electric Palette", 0x2a9e640, 0x2a9e660, indexKOFXISprites_Athena, 0x41 },
    { L"E+D - Darker Palette", 0x2a9e660, 0x2a9e680, indexKOFXISprites_Athena, 0x40 },
    { L"E+D - Super Stuff 2", 0x2a9e680, 0x2a9e6a0, indexKOFXISprites_Athena, 0x21 },
    { L"E+D - Character Extra 1", 0x2a9e6a0, 0x2a9e6c0, indexKOFXISprites_Athena, 0x30 },
    { L"E+D - Character Extra 2", 0x2a9e6c0, 0x2a9e6e0, indexKOFXISprites_Athena, 0x31 },
    { L"E+D - Character Extra 3", 0x2a9e6e0, 0x2a9e700, indexKOFXISprites_Athena, 0x32 },
    { L"E+D - Extra Move 1", 0x2a9e700, 0x2a9e720, indexKOFXISprites_Athena, 0x10 },
    { L"E+D - Extra Move 2", 0x2a9e720, 0x2a9e740, indexKOFXISprites_Athena, 0x11 },
    { L"E+D - Extra Move 3", 0x2a9e740, 0x2a9e760, indexKOFXISprites_Athena, 0x12 },
    { L"E+D - Extra Move 4", 0x2a9e760, 0x2a9e780, indexKOFXISprites_Athena, 0x13 },
    { L"E+D - Extra Move 5", 0x2a9e780, 0x2a9e7a0, indexKOFXISprites_Athena, 0x14 },
    { L"E+D - Extra Move 6", 0x2a9e7a0, 0x2a9e7c0, indexKOFXISprites_Athena, 0x15 },
    { L"E+D - Extra Move 7", 0x2a9e7c0, 0x2a9e7e0, indexKOFXISprites_Athena, 0x16 },
    { L"E+D - Extra Move 8", 0x2a9e7e0, 0x2a9e800, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_SA[] =
{
    { L"Athena SA", 0x2a9e800, 0x2a9e820, indexKOFXISprites_Athena },
    { L"Start+A - Super Stuff 1", 0x2a9e820, 0x2a9e840, indexKOFXISprites_Athena, 0x20 },
    { L"Start+A - Electric Palette", 0x2a9e840, 0x2a9e860, indexKOFXISprites_Athena, 0x41 },
    { L"Start+A - Darker Palette", 0x2a9e860, 0x2a9e880, indexKOFXISprites_Athena, 0x40 },
    { L"Start+A - Super Stuff 2", 0x2a9e880, 0x2a9e8a0, indexKOFXISprites_Athena, 0x21 },
    { L"Start+A - Character Extra 1", 0x2a9e8a0, 0x2a9e8c0, indexKOFXISprites_Athena, 0x30 },
    { L"Start+A - Character Extra 2", 0x2a9e8c0, 0x2a9e8e0, indexKOFXISprites_Athena, 0x31 },
    { L"Start+A - Character Extra 3", 0x2a9e8e0, 0x2a9e900, indexKOFXISprites_Athena, 0x32 },
    { L"Start+A - Extra Move 1", 0x2a9e900, 0x2a9e920, indexKOFXISprites_Athena, 0x10 },
    { L"Start+A - Extra Move 2", 0x2a9e920, 0x2a9e940, indexKOFXISprites_Athena, 0x11 },
    { L"Start+A - Extra Move 3", 0x2a9e940, 0x2a9e960, indexKOFXISprites_Athena, 0x12 },
    { L"Start+A - Extra Move 4", 0x2a9e960, 0x2a9e980, indexKOFXISprites_Athena, 0x13 },
    { L"Start+A - Extra Move 5", 0x2a9e980, 0x2a9e9a0, indexKOFXISprites_Athena, 0x14 },
    { L"Start+A - Extra Move 6", 0x2a9e9a0, 0x2a9e9c0, indexKOFXISprites_Athena, 0x15 },
    { L"Start+A - Extra Move 7", 0x2a9e9c0, 0x2a9e9e0, indexKOFXISprites_Athena, 0x16 },
    { L"Start+A - Extra Move 8", 0x2a9e9e0, 0x2a9ea00, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_SB[] =
{
    { L"Athena SB", 0x2a9ea00, 0x2a9ea20, indexKOFXISprites_Athena },
    { L"Start+B - Super Stuff 1", 0x2a9ea20, 0x2a9ea40, indexKOFXISprites_Athena, 0x20 },
    { L"Start+B - Electric Palette", 0x2a9ea40, 0x2a9ea60, indexKOFXISprites_Athena, 0x41 },
    { L"Start+B - Darker Palette", 0x2a9ea60, 0x2a9ea80, indexKOFXISprites_Athena, 0x40 },
    { L"Start+B - Super Stuff 2", 0x2a9ea80, 0x2a9eaa0, indexKOFXISprites_Athena, 0x21 },
    { L"Start+B - Character Extra 1", 0x2a9eaa0, 0x2a9eac0, indexKOFXISprites_Athena, 0x30 },
    { L"Start+B - Character Extra 2", 0x2a9eac0, 0x2a9eae0, indexKOFXISprites_Athena, 0x31 },
    { L"Start+B - Character Extra 3", 0x2a9eae0, 0x2a9eb00, indexKOFXISprites_Athena, 0x32 },
    { L"Start+B - Extra Move 1", 0x2a9eb00, 0x2a9eb20, indexKOFXISprites_Athena, 0x10 },
    { L"Start+B - Extra Move 2", 0x2a9eb20, 0x2a9eb40, indexKOFXISprites_Athena, 0x11 },
    { L"Start+B - Extra Move 3", 0x2a9eb40, 0x2a9eb60, indexKOFXISprites_Athena, 0x12 },
    { L"Start+B - Extra Move 4", 0x2a9eb60, 0x2a9eb80, indexKOFXISprites_Athena, 0x13 },
    { L"Start+B - Extra Move 5", 0x2a9eb80, 0x2a9eba0, indexKOFXISprites_Athena, 0x14 },
    { L"Start+B - Extra Move 6", 0x2a9eba0, 0x2a9ebc0, indexKOFXISprites_Athena, 0x15 },
    { L"Start+B - Extra Move 7", 0x2a9ebc0, 0x2a9ebe0, indexKOFXISprites_Athena, 0x16 },
    { L"Start+B - Extra Move 8", 0x2a9ebe0, 0x2a9ec00, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_SC[] =
{
    { L"Athena SC", 0x2a9ec00, 0x2a9ec20, indexKOFXISprites_Athena },
    { L"Start+C - Super Stuff 1", 0x2a9ec20, 0x2a9ec40, indexKOFXISprites_Athena, 0x20 },
    { L"Start+C - Electric Palette", 0x2a9ec40, 0x2a9ec60, indexKOFXISprites_Athena, 0x41 },
    { L"Start+C - Darker Palette", 0x2a9ec60, 0x2a9ec80, indexKOFXISprites_Athena, 0x40 },
    { L"Start+C - Super Stuff 2", 0x2a9ec80, 0x2a9eca0, indexKOFXISprites_Athena, 0x21 },
    { L"Start+C - Character Extra 1", 0x2a9eca0, 0x2a9ecc0, indexKOFXISprites_Athena, 0x30 },
    { L"Start+C - Character Extra 2", 0x2a9ecc0, 0x2a9ece0, indexKOFXISprites_Athena, 0x31 },
    { L"Start+C - Character Extra 3", 0x2a9ece0, 0x2a9ed00, indexKOFXISprites_Athena, 0x32 },
    { L"Start+C - Extra Move 1", 0x2a9ed00, 0x2a9ed20, indexKOFXISprites_Athena, 0x10 },
    { L"Start+C - Extra Move 2", 0x2a9ed20, 0x2a9ed40, indexKOFXISprites_Athena, 0x11 },
    { L"Start+C - Extra Move 3", 0x2a9ed40, 0x2a9ed60, indexKOFXISprites_Athena, 0x12 },
    { L"Start+C - Extra Move 4", 0x2a9ed60, 0x2a9ed80, indexKOFXISprites_Athena, 0x13 },
    { L"Start+C - Extra Move 5", 0x2a9ed80, 0x2a9eda0, indexKOFXISprites_Athena, 0x14 },
    { L"Start+C - Extra Move 6", 0x2a9eda0, 0x2a9edc0, indexKOFXISprites_Athena, 0x15 },
    { L"Start+C - Extra Move 7", 0x2a9edc0, 0x2a9ede0, indexKOFXISprites_Athena, 0x16 },
    { L"Start+C - Extra Move 8", 0x2a9ede0, 0x2a9ee00, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ATHENA_PALETTES_SD[] =
{
    { L"Athena SD", 0x2a9ee00, 0x2a9ee20, indexKOFXISprites_Athena },
    { L"Start+D - Super Stuff 1", 0x2a9ee20, 0x2a9ee40, indexKOFXISprites_Athena, 0x20 },
    { L"Start+D - Electric Palette", 0x2a9ee40, 0x2a9ee60, indexKOFXISprites_Athena, 0x41 },
    { L"Start+D - Darker Palette", 0x2a9ee60, 0x2a9ee80, indexKOFXISprites_Athena, 0x40 },
    { L"Start+D - Super Stuff 2", 0x2a9ee80, 0x2a9eea0, indexKOFXISprites_Athena, 0x21 },
    { L"Start+D - Character Extra 1", 0x2a9eea0, 0x2a9eec0, indexKOFXISprites_Athena, 0x30 },
    { L"Start+D - Character Extra 2", 0x2a9eec0, 0x2a9eee0, indexKOFXISprites_Athena, 0x31 },
    { L"Start+D - Character Extra 3", 0x2a9eee0, 0x2a9ef00, indexKOFXISprites_Athena, 0x32 },
    { L"Start+D - Extra Move 1", 0x2a9ef00, 0x2a9ef20, indexKOFXISprites_Athena, 0x10 },
    { L"Start+D - Extra Move 2", 0x2a9ef20, 0x2a9ef40, indexKOFXISprites_Athena, 0x11 },
    { L"Start+D - Extra Move 3", 0x2a9ef40, 0x2a9ef60, indexKOFXISprites_Athena, 0x12 },
    { L"Start+D - Extra Move 4", 0x2a9ef60, 0x2a9ef80, indexKOFXISprites_Athena, 0x13 },
    { L"Start+D - Extra Move 5", 0x2a9ef80, 0x2a9efa0, indexKOFXISprites_Athena, 0x14 },
    { L"Start+D - Extra Move 6", 0x2a9efa0, 0x2a9efc0, indexKOFXISprites_Athena, 0x15 },
    { L"Start+D - Extra Move 7", 0x2a9efc0, 0x2a9efe0, indexKOFXISprites_Athena, 0x16 },
    { L"Start+D - Extra Move 8", 0x2a9efe0, 0x2a9f000, indexKOFXISprites_Athena, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_A[] =
{
    { L"Kensou A", 0x2c52800, 0x2c52820, indexKOFXISprites_Kensou },
    { L"A - Super Stuff 1", 0x2c52820, 0x2c52840, indexKOFXISprites_Kensou, 0x20 },
    { L"A - Electric Palette", 0x2c52840, 0x2c52860, indexKOFXISprites_Kensou, 0x41 },
    { L"A - Darker Palette", 0x2c52860, 0x2c52880, indexKOFXISprites_Kensou, 0x40 },
    { L"A - Super Stuff 2", 0x2c52880, 0x2c528a0, indexKOFXISprites_Kensou, 0x21 },
    { L"A - Character Extra 1", 0x2c528a0, 0x2c528c0, indexKOFXISprites_Kensou, 0x30 },
    { L"A - Character Extra 2", 0x2c528c0, 0x2c528e0, indexKOFXISprites_Kensou, 0x31 },
    { L"A - Character Extra 3", 0x2c528e0, 0x2c52900, indexKOFXISprites_Kensou, 0x32 },
    { L"A - Extra Move 1", 0x2c52900, 0x2c52920, indexKOFXISprites_Kensou, 0x10 },
    { L"A - Extra Move 2", 0x2c52920, 0x2c52940, indexKOFXISprites_Kensou, 0x11 },
    { L"A - Extra Move 3", 0x2c52940, 0x2c52960, indexKOFXISprites_Kensou, 0x12 },
    { L"A - Extra Move 4", 0x2c52960, 0x2c52980, indexKOFXISprites_Kensou, 0x13 },
    { L"A - Extra Move 5", 0x2c52980, 0x2c529a0, indexKOFXISprites_Kensou, 0x14 },
    { L"A - Extra Move 6", 0x2c529a0, 0x2c529c0, indexKOFXISprites_Kensou, 0x15 },
    { L"A - Extra Move 7", 0x2c529c0, 0x2c529e0, indexKOFXISprites_Kensou, 0x16 },
    { L"A - Extra Move 8", 0x2c529e0, 0x2c52a00, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_B[] =
{
    { L"Kensou B", 0x2c52a00, 0x2c52a20, indexKOFXISprites_Kensou },
    { L"B - Super Stuff 1", 0x2c52a20, 0x2c52a40, indexKOFXISprites_Kensou, 0x20 },
    { L"B - Electric Palette", 0x2c52a40, 0x2c52a60, indexKOFXISprites_Kensou, 0x41 },
    { L"B - Darker Palette", 0x2c52a60, 0x2c52a80, indexKOFXISprites_Kensou, 0x40 },
    { L"B - Super Stuff 2", 0x2c52a80, 0x2c52aa0, indexKOFXISprites_Kensou, 0x21 },
    { L"B - Character Extra 1", 0x2c52aa0, 0x2c52ac0, indexKOFXISprites_Kensou, 0x30 },
    { L"B - Character Extra 2", 0x2c52ac0, 0x2c52ae0, indexKOFXISprites_Kensou, 0x31 },
    { L"B - Character Extra 3", 0x2c52ae0, 0x2c52b00, indexKOFXISprites_Kensou, 0x32 },
    { L"B - Extra Move 1", 0x2c52b00, 0x2c52b20, indexKOFXISprites_Kensou, 0x10 },
    { L"B - Extra Move 2", 0x2c52b20, 0x2c52b40, indexKOFXISprites_Kensou, 0x11 },
    { L"B - Extra Move 3", 0x2c52b40, 0x2c52b60, indexKOFXISprites_Kensou, 0x12 },
    { L"B - Extra Move 4", 0x2c52b60, 0x2c52b80, indexKOFXISprites_Kensou, 0x13 },
    { L"B - Extra Move 5", 0x2c52b80, 0x2c52ba0, indexKOFXISprites_Kensou, 0x14 },
    { L"B - Extra Move 6", 0x2c52ba0, 0x2c52bc0, indexKOFXISprites_Kensou, 0x15 },
    { L"B - Extra Move 7", 0x2c52bc0, 0x2c52be0, indexKOFXISprites_Kensou, 0x16 },
    { L"B - Extra Move 8", 0x2c52be0, 0x2c52c00, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_C[] =
{
    { L"Kensou C", 0x2c52c00, 0x2c52c20, indexKOFXISprites_Kensou },
    { L"C - Super Stuff 1", 0x2c52c20, 0x2c52c40, indexKOFXISprites_Kensou, 0x20 },
    { L"C - Electric Palette", 0x2c52c40, 0x2c52c60, indexKOFXISprites_Kensou, 0x41 },
    { L"C - Darker Palette", 0x2c52c60, 0x2c52c80, indexKOFXISprites_Kensou, 0x40 },
    { L"C - Super Stuff 2", 0x2c52c80, 0x2c52ca0, indexKOFXISprites_Kensou, 0x21 },
    { L"C - Character Extra 1", 0x2c52ca0, 0x2c52cc0, indexKOFXISprites_Kensou, 0x30 },
    { L"C - Character Extra 2", 0x2c52cc0, 0x2c52ce0, indexKOFXISprites_Kensou, 0x31 },
    { L"C - Character Extra 3", 0x2c52ce0, 0x2c52d00, indexKOFXISprites_Kensou, 0x32 },
    { L"C - Extra Move 1", 0x2c52d00, 0x2c52d20, indexKOFXISprites_Kensou, 0x10 },
    { L"C - Extra Move 2", 0x2c52d20, 0x2c52d40, indexKOFXISprites_Kensou, 0x11 },
    { L"C - Extra Move 3", 0x2c52d40, 0x2c52d60, indexKOFXISprites_Kensou, 0x12 },
    { L"C - Extra Move 4", 0x2c52d60, 0x2c52d80, indexKOFXISprites_Kensou, 0x13 },
    { L"C - Extra Move 5", 0x2c52d80, 0x2c52da0, indexKOFXISprites_Kensou, 0x14 },
    { L"C - Extra Move 6", 0x2c52da0, 0x2c52dc0, indexKOFXISprites_Kensou, 0x15 },
    { L"C - Extra Move 7", 0x2c52dc0, 0x2c52de0, indexKOFXISprites_Kensou, 0x16 },
    { L"C - Extra Move 8", 0x2c52de0, 0x2c52e00, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_D[] =
{
    { L"Kensou D", 0x2c52e00, 0x2c52e20, indexKOFXISprites_Kensou },
    { L"D - Super Stuff 1", 0x2c52e20, 0x2c52e40, indexKOFXISprites_Kensou, 0x20 },
    { L"D - Electric Palette", 0x2c52e40, 0x2c52e60, indexKOFXISprites_Kensou, 0x41 },
    { L"D - Darker Palette", 0x2c52e60, 0x2c52e80, indexKOFXISprites_Kensou, 0x40 },
    { L"D - Super Stuff 2", 0x2c52e80, 0x2c52ea0, indexKOFXISprites_Kensou, 0x21 },
    { L"D - Character Extra 1", 0x2c52ea0, 0x2c52ec0, indexKOFXISprites_Kensou, 0x30 },
    { L"D - Character Extra 2", 0x2c52ec0, 0x2c52ee0, indexKOFXISprites_Kensou, 0x31 },
    { L"D - Character Extra 3", 0x2c52ee0, 0x2c52f00, indexKOFXISprites_Kensou, 0x32 },
    { L"D - Extra Move 1", 0x2c52f00, 0x2c52f20, indexKOFXISprites_Kensou, 0x10 },
    { L"D - Extra Move 2", 0x2c52f20, 0x2c52f40, indexKOFXISprites_Kensou, 0x11 },
    { L"D - Extra Move 3", 0x2c52f40, 0x2c52f60, indexKOFXISprites_Kensou, 0x12 },
    { L"D - Extra Move 4", 0x2c52f60, 0x2c52f80, indexKOFXISprites_Kensou, 0x13 },
    { L"D - Extra Move 5", 0x2c52f80, 0x2c52fa0, indexKOFXISprites_Kensou, 0x14 },
    { L"D - Extra Move 6", 0x2c52fa0, 0x2c52fc0, indexKOFXISprites_Kensou, 0x15 },
    { L"D - Extra Move 7", 0x2c52fc0, 0x2c52fe0, indexKOFXISprites_Kensou, 0x16 },
    { L"D - Extra Move 8", 0x2c52fe0, 0x2c53000, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_EA[] =
{
    { L"Kensou EA", 0x2c53000, 0x2c53020, indexKOFXISprites_Kensou },
    { L"E+A - Super Stuff 1", 0x2c53020, 0x2c53040, indexKOFXISprites_Kensou, 0x20 },
    { L"E+A - Electric Palette", 0x2c53040, 0x2c53060, indexKOFXISprites_Kensou, 0x41 },
    { L"E+A - Darker Palette", 0x2c53060, 0x2c53080, indexKOFXISprites_Kensou, 0x40 },
    { L"E+A - Super Stuff 2", 0x2c53080, 0x2c530a0, indexKOFXISprites_Kensou, 0x21 },
    { L"E+A - Character Extra 1", 0x2c530a0, 0x2c530c0, indexKOFXISprites_Kensou, 0x30 },
    { L"E+A - Character Extra 2", 0x2c530c0, 0x2c530e0, indexKOFXISprites_Kensou, 0x31 },
    { L"E+A - Character Extra 3", 0x2c530e0, 0x2c53100, indexKOFXISprites_Kensou, 0x32 },
    { L"E+A - Extra Move 1", 0x2c53100, 0x2c53120, indexKOFXISprites_Kensou, 0x10 },
    { L"E+A - Extra Move 2", 0x2c53120, 0x2c53140, indexKOFXISprites_Kensou, 0x11 },
    { L"E+A - Extra Move 3", 0x2c53140, 0x2c53160, indexKOFXISprites_Kensou, 0x12 },
    { L"E+A - Extra Move 4", 0x2c53160, 0x2c53180, indexKOFXISprites_Kensou, 0x13 },
    { L"E+A - Extra Move 5", 0x2c53180, 0x2c531a0, indexKOFXISprites_Kensou, 0x14 },
    { L"E+A - Extra Move 6", 0x2c531a0, 0x2c531c0, indexKOFXISprites_Kensou, 0x15 },
    { L"E+A - Extra Move 7", 0x2c531c0, 0x2c531e0, indexKOFXISprites_Kensou, 0x16 },
    { L"E+A - Extra Move 8", 0x2c531e0, 0x2c53200, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_EB[] =
{
    { L"Kensou EB", 0x2c53200, 0x2c53220, indexKOFXISprites_Kensou },
    { L"E+B - Super Stuff 1", 0x2c53220, 0x2c53240, indexKOFXISprites_Kensou, 0x20 },
    { L"E+B - Electric Palette", 0x2c53240, 0x2c53260, indexKOFXISprites_Kensou, 0x41 },
    { L"E+B - Darker Palette", 0x2c53260, 0x2c53280, indexKOFXISprites_Kensou, 0x40 },
    { L"E+B - Super Stuff 2", 0x2c53280, 0x2c532a0, indexKOFXISprites_Kensou, 0x21 },
    { L"E+B - Character Extra 1", 0x2c532a0, 0x2c532c0, indexKOFXISprites_Kensou, 0x30 },
    { L"E+B - Character Extra 2", 0x2c532c0, 0x2c532e0, indexKOFXISprites_Kensou, 0x31 },
    { L"E+B - Character Extra 3", 0x2c532e0, 0x2c53300, indexKOFXISprites_Kensou, 0x32 },
    { L"E+B - Extra Move 1", 0x2c53300, 0x2c53320, indexKOFXISprites_Kensou, 0x10 },
    { L"E+B - Extra Move 2", 0x2c53320, 0x2c53340, indexKOFXISprites_Kensou, 0x11 },
    { L"E+B - Extra Move 3", 0x2c53340, 0x2c53360, indexKOFXISprites_Kensou, 0x12 },
    { L"E+B - Extra Move 4", 0x2c53360, 0x2c53380, indexKOFXISprites_Kensou, 0x13 },
    { L"E+B - Extra Move 5", 0x2c53380, 0x2c533a0, indexKOFXISprites_Kensou, 0x14 },
    { L"E+B - Extra Move 6", 0x2c533a0, 0x2c533c0, indexKOFXISprites_Kensou, 0x15 },
    { L"E+B - Extra Move 7", 0x2c533c0, 0x2c533e0, indexKOFXISprites_Kensou, 0x16 },
    { L"E+B - Extra Move 8", 0x2c533e0, 0x2c53400, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_EC[] =
{
    { L"Kensou EC", 0x2c53400, 0x2c53420, indexKOFXISprites_Kensou },
    { L"E+C - Super Stuff 1", 0x2c53420, 0x2c53440, indexKOFXISprites_Kensou, 0x20 },
    { L"E+C - Electric Palette", 0x2c53440, 0x2c53460, indexKOFXISprites_Kensou, 0x41 },
    { L"E+C - Darker Palette", 0x2c53460, 0x2c53480, indexKOFXISprites_Kensou, 0x40 },
    { L"E+C - Super Stuff 2", 0x2c53480, 0x2c534a0, indexKOFXISprites_Kensou, 0x21 },
    { L"E+C - Character Extra 1", 0x2c534a0, 0x2c534c0, indexKOFXISprites_Kensou, 0x30 },
    { L"E+C - Character Extra 2", 0x2c534c0, 0x2c534e0, indexKOFXISprites_Kensou, 0x31 },
    { L"E+C - Character Extra 3", 0x2c534e0, 0x2c53500, indexKOFXISprites_Kensou, 0x32 },
    { L"E+C - Extra Move 1", 0x2c53500, 0x2c53520, indexKOFXISprites_Kensou, 0x10 },
    { L"E+C - Extra Move 2", 0x2c53520, 0x2c53540, indexKOFXISprites_Kensou, 0x11 },
    { L"E+C - Extra Move 3", 0x2c53540, 0x2c53560, indexKOFXISprites_Kensou, 0x12 },
    { L"E+C - Extra Move 4", 0x2c53560, 0x2c53580, indexKOFXISprites_Kensou, 0x13 },
    { L"E+C - Extra Move 5", 0x2c53580, 0x2c535a0, indexKOFXISprites_Kensou, 0x14 },
    { L"E+C - Extra Move 6", 0x2c535a0, 0x2c535c0, indexKOFXISprites_Kensou, 0x15 },
    { L"E+C - Extra Move 7", 0x2c535c0, 0x2c535e0, indexKOFXISprites_Kensou, 0x16 },
    { L"E+C - Extra Move 8", 0x2c535e0, 0x2c53600, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_ED[] =
{
    { L"Kensou ED", 0x2c53600, 0x2c53620, indexKOFXISprites_Kensou },
    { L"E+D - Super Stuff 1", 0x2c53620, 0x2c53640, indexKOFXISprites_Kensou, 0x20 },
    { L"E+D - Electric Palette", 0x2c53640, 0x2c53660, indexKOFXISprites_Kensou, 0x41 },
    { L"E+D - Darker Palette", 0x2c53660, 0x2c53680, indexKOFXISprites_Kensou, 0x40 },
    { L"E+D - Super Stuff 2", 0x2c53680, 0x2c536a0, indexKOFXISprites_Kensou, 0x21 },
    { L"E+D - Character Extra 1", 0x2c536a0, 0x2c536c0, indexKOFXISprites_Kensou, 0x30 },
    { L"E+D - Character Extra 2", 0x2c536c0, 0x2c536e0, indexKOFXISprites_Kensou, 0x31 },
    { L"E+D - Character Extra 3", 0x2c536e0, 0x2c53700, indexKOFXISprites_Kensou, 0x32 },
    { L"E+D - Extra Move 1", 0x2c53700, 0x2c53720, indexKOFXISprites_Kensou, 0x10 },
    { L"E+D - Extra Move 2", 0x2c53720, 0x2c53740, indexKOFXISprites_Kensou, 0x11 },
    { L"E+D - Extra Move 3", 0x2c53740, 0x2c53760, indexKOFXISprites_Kensou, 0x12 },
    { L"E+D - Extra Move 4", 0x2c53760, 0x2c53780, indexKOFXISprites_Kensou, 0x13 },
    { L"E+D - Extra Move 5", 0x2c53780, 0x2c537a0, indexKOFXISprites_Kensou, 0x14 },
    { L"E+D - Extra Move 6", 0x2c537a0, 0x2c537c0, indexKOFXISprites_Kensou, 0x15 },
    { L"E+D - Extra Move 7", 0x2c537c0, 0x2c537e0, indexKOFXISprites_Kensou, 0x16 },
    { L"E+D - Extra Move 8", 0x2c537e0, 0x2c53800, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_SA[] =
{
    { L"Kensou SA", 0x2c53800, 0x2c53820, indexKOFXISprites_Kensou },
    { L"Start+A - Super Stuff 1", 0x2c53820, 0x2c53840, indexKOFXISprites_Kensou, 0x20 },
    { L"Start+A - Electric Palette", 0x2c53840, 0x2c53860, indexKOFXISprites_Kensou, 0x41 },
    { L"Start+A - Darker Palette", 0x2c53860, 0x2c53880, indexKOFXISprites_Kensou, 0x40 },
    { L"Start+A - Super Stuff 2", 0x2c53880, 0x2c538a0, indexKOFXISprites_Kensou, 0x21 },
    { L"Start+A - Character Extra 1", 0x2c538a0, 0x2c538c0, indexKOFXISprites_Kensou, 0x30 },
    { L"Start+A - Character Extra 2", 0x2c538c0, 0x2c538e0, indexKOFXISprites_Kensou, 0x31 },
    { L"Start+A - Character Extra 3", 0x2c538e0, 0x2c53900, indexKOFXISprites_Kensou, 0x32 },
    { L"Start+A - Extra Move 1", 0x2c53900, 0x2c53920, indexKOFXISprites_Kensou, 0x10 },
    { L"Start+A - Extra Move 2", 0x2c53920, 0x2c53940, indexKOFXISprites_Kensou, 0x11 },
    { L"Start+A - Extra Move 3", 0x2c53940, 0x2c53960, indexKOFXISprites_Kensou, 0x12 },
    { L"Start+A - Extra Move 4", 0x2c53960, 0x2c53980, indexKOFXISprites_Kensou, 0x13 },
    { L"Start+A - Extra Move 5", 0x2c53980, 0x2c539a0, indexKOFXISprites_Kensou, 0x14 },
    { L"Start+A - Extra Move 6", 0x2c539a0, 0x2c539c0, indexKOFXISprites_Kensou, 0x15 },
    { L"Start+A - Extra Move 7", 0x2c539c0, 0x2c539e0, indexKOFXISprites_Kensou, 0x16 },
    { L"Start+A - Extra Move 8", 0x2c539e0, 0x2c53a00, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_SB[] =
{
    { L"Kensou SB", 0x2c53a00, 0x2c53a20, indexKOFXISprites_Kensou },
    { L"Start+B - Super Stuff 1", 0x2c53a20, 0x2c53a40, indexKOFXISprites_Kensou, 0x20 },
    { L"Start+B - Electric Palette", 0x2c53a40, 0x2c53a60, indexKOFXISprites_Kensou, 0x41 },
    { L"Start+B - Darker Palette", 0x2c53a60, 0x2c53a80, indexKOFXISprites_Kensou, 0x40 },
    { L"Start+B - Super Stuff 2", 0x2c53a80, 0x2c53aa0, indexKOFXISprites_Kensou, 0x21 },
    { L"Start+B - Character Extra 1", 0x2c53aa0, 0x2c53ac0, indexKOFXISprites_Kensou, 0x30 },
    { L"Start+B - Character Extra 2", 0x2c53ac0, 0x2c53ae0, indexKOFXISprites_Kensou, 0x31 },
    { L"Start+B - Character Extra 3", 0x2c53ae0, 0x2c53b00, indexKOFXISprites_Kensou, 0x32 },
    { L"Start+B - Extra Move 1", 0x2c53b00, 0x2c53b20, indexKOFXISprites_Kensou, 0x10 },
    { L"Start+B - Extra Move 2", 0x2c53b20, 0x2c53b40, indexKOFXISprites_Kensou, 0x11 },
    { L"Start+B - Extra Move 3", 0x2c53b40, 0x2c53b60, indexKOFXISprites_Kensou, 0x12 },
    { L"Start+B - Extra Move 4", 0x2c53b60, 0x2c53b80, indexKOFXISprites_Kensou, 0x13 },
    { L"Start+B - Extra Move 5", 0x2c53b80, 0x2c53ba0, indexKOFXISprites_Kensou, 0x14 },
    { L"Start+B - Extra Move 6", 0x2c53ba0, 0x2c53bc0, indexKOFXISprites_Kensou, 0x15 },
    { L"Start+B - Extra Move 7", 0x2c53bc0, 0x2c53be0, indexKOFXISprites_Kensou, 0x16 },
    { L"Start+B - Extra Move 8", 0x2c53be0, 0x2c53c00, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_SC[] =
{
    { L"Kensou SC", 0x2c53c00, 0x2c53c20, indexKOFXISprites_Kensou },
    { L"Start+C - Super Stuff 1", 0x2c53c20, 0x2c53c40, indexKOFXISprites_Kensou, 0x20 },
    { L"Start+C - Electric Palette", 0x2c53c40, 0x2c53c60, indexKOFXISprites_Kensou, 0x41 },
    { L"Start+C - Darker Palette", 0x2c53c60, 0x2c53c80, indexKOFXISprites_Kensou, 0x40 },
    { L"Start+C - Super Stuff 2", 0x2c53c80, 0x2c53ca0, indexKOFXISprites_Kensou, 0x21 },
    { L"Start+C - Character Extra 1", 0x2c53ca0, 0x2c53cc0, indexKOFXISprites_Kensou, 0x30 },
    { L"Start+C - Character Extra 2", 0x2c53cc0, 0x2c53ce0, indexKOFXISprites_Kensou, 0x31 },
    { L"Start+C - Character Extra 3", 0x2c53ce0, 0x2c53d00, indexKOFXISprites_Kensou, 0x32 },
    { L"Start+C - Extra Move 1", 0x2c53d00, 0x2c53d20, indexKOFXISprites_Kensou, 0x10 },
    { L"Start+C - Extra Move 2", 0x2c53d20, 0x2c53d40, indexKOFXISprites_Kensou, 0x11 },
    { L"Start+C - Extra Move 3", 0x2c53d40, 0x2c53d60, indexKOFXISprites_Kensou, 0x12 },
    { L"Start+C - Extra Move 4", 0x2c53d60, 0x2c53d80, indexKOFXISprites_Kensou, 0x13 },
    { L"Start+C - Extra Move 5", 0x2c53d80, 0x2c53da0, indexKOFXISprites_Kensou, 0x14 },
    { L"Start+C - Extra Move 6", 0x2c53da0, 0x2c53dc0, indexKOFXISprites_Kensou, 0x15 },
    { L"Start+C - Extra Move 7", 0x2c53dc0, 0x2c53de0, indexKOFXISprites_Kensou, 0x16 },
    { L"Start+C - Extra Move 8", 0x2c53de0, 0x2c53e00, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KENSOU_PALETTES_SD[] =
{
    { L"Kensou SD", 0x2c53e00, 0x2c53e20, indexKOFXISprites_Kensou },
    { L"Start+D - Super Stuff 1", 0x2c53e20, 0x2c53e40, indexKOFXISprites_Kensou, 0x20 },
    { L"Start+D - Electric Palette", 0x2c53e40, 0x2c53e60, indexKOFXISprites_Kensou, 0x41 },
    { L"Start+D - Darker Palette", 0x2c53e60, 0x2c53e80, indexKOFXISprites_Kensou, 0x40 },
    { L"Start+D - Super Stuff 2", 0x2c53e80, 0x2c53ea0, indexKOFXISprites_Kensou, 0x21 },
    { L"Start+D - Character Extra 1", 0x2c53ea0, 0x2c53ec0, indexKOFXISprites_Kensou, 0x30 },
    { L"Start+D - Character Extra 2", 0x2c53ec0, 0x2c53ee0, indexKOFXISprites_Kensou, 0x31 },
    { L"Start+D - Character Extra 3", 0x2c53ee0, 0x2c53f00, indexKOFXISprites_Kensou, 0x32 },
    { L"Start+D - Extra Move 1", 0x2c53f00, 0x2c53f20, indexKOFXISprites_Kensou, 0x10 },
    { L"Start+D - Extra Move 2", 0x2c53f20, 0x2c53f40, indexKOFXISprites_Kensou, 0x11 },
    { L"Start+D - Extra Move 3", 0x2c53f40, 0x2c53f60, indexKOFXISprites_Kensou, 0x12 },
    { L"Start+D - Extra Move 4", 0x2c53f60, 0x2c53f80, indexKOFXISprites_Kensou, 0x13 },
    { L"Start+D - Extra Move 5", 0x2c53f80, 0x2c53fa0, indexKOFXISprites_Kensou, 0x14 },
    { L"Start+D - Extra Move 6", 0x2c53fa0, 0x2c53fc0, indexKOFXISprites_Kensou, 0x15 },
    { L"Start+D - Extra Move 7", 0x2c53fc0, 0x2c53fe0, indexKOFXISprites_Kensou, 0x16 },
    { L"Start+D - Extra Move 8", 0x2c53fe0, 0x2c54000, indexKOFXISprites_Kensou, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_A[] =
{
    { L"Momoko A", 0x2dd9000, 0x2dd9020, indexKOFXISprites_Momoko },
    { L"A - Super Stuff 1", 0x2dd9020, 0x2dd9040, indexKOFXISprites_Momoko, 0x20 },
    { L"A - Electric Palette", 0x2dd9040, 0x2dd9060, indexKOFXISprites_Momoko, 0x41 },
    { L"A - Darker Palette", 0x2dd9060, 0x2dd9080, indexKOFXISprites_Momoko, 0x40 },
    { L"A - Super Stuff 2", 0x2dd9080, 0x2dd90a0, indexKOFXISprites_Momoko, 0x21 },
    { L"A - Character Extra 1", 0x2dd90a0, 0x2dd90c0, indexKOFXISprites_Momoko, 0x30 },
    { L"A - Character Extra 2", 0x2dd90c0, 0x2dd90e0, indexKOFXISprites_Momoko, 0x31 },
    { L"A - Character Extra 3", 0x2dd90e0, 0x2dd9100, indexKOFXISprites_Momoko, 0x32 },
    { L"A - Extra Move 1", 0x2dd9100, 0x2dd9120, indexKOFXISprites_Momoko, 0x10 },
    { L"A - Extra Move 2", 0x2dd9120, 0x2dd9140, indexKOFXISprites_Momoko, 0x11 },
    { L"A - Extra Move 3", 0x2dd9140, 0x2dd9160, indexKOFXISprites_Momoko, 0x12 },
    { L"A - Extra Move 4", 0x2dd9160, 0x2dd9180, indexKOFXISprites_Momoko, 0x13 },
    { L"A - Extra Move 5", 0x2dd9180, 0x2dd91a0, indexKOFXISprites_Momoko, 0x14 },
    { L"A - Extra Move 6", 0x2dd91a0, 0x2dd91c0, indexKOFXISprites_Momoko, 0x15 },
    { L"A - Extra Move 7", 0x2dd91c0, 0x2dd91e0, indexKOFXISprites_Momoko, 0x16 },
    { L"A - Extra Move 8", 0x2dd91e0, 0x2dd9200, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_B[] =
{
    { L"Momoko B", 0x2dd9200, 0x2dd9220, indexKOFXISprites_Momoko },
    { L"B - Super Stuff 1", 0x2dd9220, 0x2dd9240, indexKOFXISprites_Momoko, 0x20 },
    { L"B - Electric Palette", 0x2dd9240, 0x2dd9260, indexKOFXISprites_Momoko, 0x41 },
    { L"B - Darker Palette", 0x2dd9260, 0x2dd9280, indexKOFXISprites_Momoko, 0x40 },
    { L"B - Super Stuff 2", 0x2dd9280, 0x2dd92a0, indexKOFXISprites_Momoko, 0x21 },
    { L"B - Character Extra 1", 0x2dd92a0, 0x2dd92c0, indexKOFXISprites_Momoko, 0x30 },
    { L"B - Character Extra 2", 0x2dd92c0, 0x2dd92e0, indexKOFXISprites_Momoko, 0x31 },
    { L"B - Character Extra 3", 0x2dd92e0, 0x2dd9300, indexKOFXISprites_Momoko, 0x32 },
    { L"B - Extra Move 1", 0x2dd9300, 0x2dd9320, indexKOFXISprites_Momoko, 0x10 },
    { L"B - Extra Move 2", 0x2dd9320, 0x2dd9340, indexKOFXISprites_Momoko, 0x11 },
    { L"B - Extra Move 3", 0x2dd9340, 0x2dd9360, indexKOFXISprites_Momoko, 0x12 },
    { L"B - Extra Move 4", 0x2dd9360, 0x2dd9380, indexKOFXISprites_Momoko, 0x13 },
    { L"B - Extra Move 5", 0x2dd9380, 0x2dd93a0, indexKOFXISprites_Momoko, 0x14 },
    { L"B - Extra Move 6", 0x2dd93a0, 0x2dd93c0, indexKOFXISprites_Momoko, 0x15 },
    { L"B - Extra Move 7", 0x2dd93c0, 0x2dd93e0, indexKOFXISprites_Momoko, 0x16 },
    { L"B - Extra Move 8", 0x2dd93e0, 0x2dd9400, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_C[] =
{
    { L"Momoko C", 0x2dd9400, 0x2dd9420, indexKOFXISprites_Momoko },
    { L"C - Super Stuff 1", 0x2dd9420, 0x2dd9440, indexKOFXISprites_Momoko, 0x20 },
    { L"C - Electric Palette", 0x2dd9440, 0x2dd9460, indexKOFXISprites_Momoko, 0x41 },
    { L"C - Darker Palette", 0x2dd9460, 0x2dd9480, indexKOFXISprites_Momoko, 0x40 },
    { L"C - Super Stuff 2", 0x2dd9480, 0x2dd94a0, indexKOFXISprites_Momoko, 0x21 },
    { L"C - Character Extra 1", 0x2dd94a0, 0x2dd94c0, indexKOFXISprites_Momoko, 0x30 },
    { L"C - Character Extra 2", 0x2dd94c0, 0x2dd94e0, indexKOFXISprites_Momoko, 0x31 },
    { L"C - Character Extra 3", 0x2dd94e0, 0x2dd9500, indexKOFXISprites_Momoko, 0x32 },
    { L"C - Extra Move 1", 0x2dd9500, 0x2dd9520, indexKOFXISprites_Momoko, 0x10 },
    { L"C - Extra Move 2", 0x2dd9520, 0x2dd9540, indexKOFXISprites_Momoko, 0x11 },
    { L"C - Extra Move 3", 0x2dd9540, 0x2dd9560, indexKOFXISprites_Momoko, 0x12 },
    { L"C - Extra Move 4", 0x2dd9560, 0x2dd9580, indexKOFXISprites_Momoko, 0x13 },
    { L"C - Extra Move 5", 0x2dd9580, 0x2dd95a0, indexKOFXISprites_Momoko, 0x14 },
    { L"C - Extra Move 6", 0x2dd95a0, 0x2dd95c0, indexKOFXISprites_Momoko, 0x15 },
    { L"C - Extra Move 7", 0x2dd95c0, 0x2dd95e0, indexKOFXISprites_Momoko, 0x16 },
    { L"C - Extra Move 8", 0x2dd95e0, 0x2dd9600, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_D[] =
{
    { L"Momoko D", 0x2dd9600, 0x2dd9620, indexKOFXISprites_Momoko },
    { L"D - Super Stuff 1", 0x2dd9620, 0x2dd9640, indexKOFXISprites_Momoko, 0x20 },
    { L"D - Electric Palette", 0x2dd9640, 0x2dd9660, indexKOFXISprites_Momoko, 0x41 },
    { L"D - Darker Palette", 0x2dd9660, 0x2dd9680, indexKOFXISprites_Momoko, 0x40 },
    { L"D - Super Stuff 2", 0x2dd9680, 0x2dd96a0, indexKOFXISprites_Momoko, 0x21 },
    { L"D - Character Extra 1", 0x2dd96a0, 0x2dd96c0, indexKOFXISprites_Momoko, 0x30 },
    { L"D - Character Extra 2", 0x2dd96c0, 0x2dd96e0, indexKOFXISprites_Momoko, 0x31 },
    { L"D - Character Extra 3", 0x2dd96e0, 0x2dd9700, indexKOFXISprites_Momoko, 0x32 },
    { L"D - Extra Move 1", 0x2dd9700, 0x2dd9720, indexKOFXISprites_Momoko, 0x10 },
    { L"D - Extra Move 2", 0x2dd9720, 0x2dd9740, indexKOFXISprites_Momoko, 0x11 },
    { L"D - Extra Move 3", 0x2dd9740, 0x2dd9760, indexKOFXISprites_Momoko, 0x12 },
    { L"D - Extra Move 4", 0x2dd9760, 0x2dd9780, indexKOFXISprites_Momoko, 0x13 },
    { L"D - Extra Move 5", 0x2dd9780, 0x2dd97a0, indexKOFXISprites_Momoko, 0x14 },
    { L"D - Extra Move 6", 0x2dd97a0, 0x2dd97c0, indexKOFXISprites_Momoko, 0x15 },
    { L"D - Extra Move 7", 0x2dd97c0, 0x2dd97e0, indexKOFXISprites_Momoko, 0x16 },
    { L"D - Extra Move 8", 0x2dd97e0, 0x2dd9800, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_EA[] =
{
    { L"Momoko EA", 0x2dd9800, 0x2dd9820, indexKOFXISprites_Momoko },
    { L"E+A - Super Stuff 1", 0x2dd9820, 0x2dd9840, indexKOFXISprites_Momoko, 0x20 },
    { L"E+A - Electric Palette", 0x2dd9840, 0x2dd9860, indexKOFXISprites_Momoko, 0x41 },
    { L"E+A - Darker Palette", 0x2dd9860, 0x2dd9880, indexKOFXISprites_Momoko, 0x40 },
    { L"E+A - Super Stuff 2", 0x2dd9880, 0x2dd98a0, indexKOFXISprites_Momoko, 0x21 },
    { L"E+A - Character Extra 1", 0x2dd98a0, 0x2dd98c0, indexKOFXISprites_Momoko, 0x30 },
    { L"E+A - Character Extra 2", 0x2dd98c0, 0x2dd98e0, indexKOFXISprites_Momoko, 0x31 },
    { L"E+A - Character Extra 3", 0x2dd98e0, 0x2dd9900, indexKOFXISprites_Momoko, 0x32 },
    { L"E+A - Extra Move 1", 0x2dd9900, 0x2dd9920, indexKOFXISprites_Momoko, 0x10 },
    { L"E+A - Extra Move 2", 0x2dd9920, 0x2dd9940, indexKOFXISprites_Momoko, 0x11 },
    { L"E+A - Extra Move 3", 0x2dd9940, 0x2dd9960, indexKOFXISprites_Momoko, 0x12 },
    { L"E+A - Extra Move 4", 0x2dd9960, 0x2dd9980, indexKOFXISprites_Momoko, 0x13 },
    { L"E+A - Extra Move 5", 0x2dd9980, 0x2dd99a0, indexKOFXISprites_Momoko, 0x14 },
    { L"E+A - Extra Move 6", 0x2dd99a0, 0x2dd99c0, indexKOFXISprites_Momoko, 0x15 },
    { L"E+A - Extra Move 7", 0x2dd99c0, 0x2dd99e0, indexKOFXISprites_Momoko, 0x16 },
    { L"E+A - Extra Move 8", 0x2dd99e0, 0x2dd9a00, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_EB[] =
{
    { L"Momoko EB", 0x2dd9a00, 0x2dd9a20, indexKOFXISprites_Momoko },
    { L"E+B - Super Stuff 1", 0x2dd9a20, 0x2dd9a40, indexKOFXISprites_Momoko, 0x20 },
    { L"E+B - Electric Palette", 0x2dd9a40, 0x2dd9a60, indexKOFXISprites_Momoko, 0x41 },
    { L"E+B - Darker Palette", 0x2dd9a60, 0x2dd9a80, indexKOFXISprites_Momoko, 0x40 },
    { L"E+B - Super Stuff 2", 0x2dd9a80, 0x2dd9aa0, indexKOFXISprites_Momoko, 0x21 },
    { L"E+B - Character Extra 1", 0x2dd9aa0, 0x2dd9ac0, indexKOFXISprites_Momoko, 0x30 },
    { L"E+B - Character Extra 2", 0x2dd9ac0, 0x2dd9ae0, indexKOFXISprites_Momoko, 0x31 },
    { L"E+B - Character Extra 3", 0x2dd9ae0, 0x2dd9b00, indexKOFXISprites_Momoko, 0x32 },
    { L"E+B - Extra Move 1", 0x2dd9b00, 0x2dd9b20, indexKOFXISprites_Momoko, 0x10 },
    { L"E+B - Extra Move 2", 0x2dd9b20, 0x2dd9b40, indexKOFXISprites_Momoko, 0x11 },
    { L"E+B - Extra Move 3", 0x2dd9b40, 0x2dd9b60, indexKOFXISprites_Momoko, 0x12 },
    { L"E+B - Extra Move 4", 0x2dd9b60, 0x2dd9b80, indexKOFXISprites_Momoko, 0x13 },
    { L"E+B - Extra Move 5", 0x2dd9b80, 0x2dd9ba0, indexKOFXISprites_Momoko, 0x14 },
    { L"E+B - Extra Move 6", 0x2dd9ba0, 0x2dd9bc0, indexKOFXISprites_Momoko, 0x15 },
    { L"E+B - Extra Move 7", 0x2dd9bc0, 0x2dd9be0, indexKOFXISprites_Momoko, 0x16 },
    { L"E+B - Extra Move 8", 0x2dd9be0, 0x2dd9c00, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_EC[] =
{
    { L"Momoko EC", 0x2dd9c00, 0x2dd9c20, indexKOFXISprites_Momoko },
    { L"E+C - Super Stuff 1", 0x2dd9c20, 0x2dd9c40, indexKOFXISprites_Momoko, 0x20 },
    { L"E+C - Electric Palette", 0x2dd9c40, 0x2dd9c60, indexKOFXISprites_Momoko, 0x41 },
    { L"E+C - Darker Palette", 0x2dd9c60, 0x2dd9c80, indexKOFXISprites_Momoko, 0x40 },
    { L"E+C - Super Stuff 2", 0x2dd9c80, 0x2dd9ca0, indexKOFXISprites_Momoko, 0x21 },
    { L"E+C - Character Extra 1", 0x2dd9ca0, 0x2dd9cc0, indexKOFXISprites_Momoko, 0x30 },
    { L"E+C - Character Extra 2", 0x2dd9cc0, 0x2dd9ce0, indexKOFXISprites_Momoko, 0x31 },
    { L"E+C - Character Extra 3", 0x2dd9ce0, 0x2dd9d00, indexKOFXISprites_Momoko, 0x32 },
    { L"E+C - Extra Move 1", 0x2dd9d00, 0x2dd9d20, indexKOFXISprites_Momoko, 0x10 },
    { L"E+C - Extra Move 2", 0x2dd9d20, 0x2dd9d40, indexKOFXISprites_Momoko, 0x11 },
    { L"E+C - Extra Move 3", 0x2dd9d40, 0x2dd9d60, indexKOFXISprites_Momoko, 0x12 },
    { L"E+C - Extra Move 4", 0x2dd9d60, 0x2dd9d80, indexKOFXISprites_Momoko, 0x13 },
    { L"E+C - Extra Move 5", 0x2dd9d80, 0x2dd9da0, indexKOFXISprites_Momoko, 0x14 },
    { L"E+C - Extra Move 6", 0x2dd9da0, 0x2dd9dc0, indexKOFXISprites_Momoko, 0x15 },
    { L"E+C - Extra Move 7", 0x2dd9dc0, 0x2dd9de0, indexKOFXISprites_Momoko, 0x16 },
    { L"E+C - Extra Move 8", 0x2dd9de0, 0x2dd9e00, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_ED[] =
{
    { L"Momoko ED", 0x2dd9e00, 0x2dd9e20, indexKOFXISprites_Momoko },
    { L"E+D - Super Stuff 1", 0x2dd9e20, 0x2dd9e40, indexKOFXISprites_Momoko, 0x20 },
    { L"E+D - Electric Palette", 0x2dd9e40, 0x2dd9e60, indexKOFXISprites_Momoko, 0x41 },
    { L"E+D - Darker Palette", 0x2dd9e60, 0x2dd9e80, indexKOFXISprites_Momoko, 0x40 },
    { L"E+D - Super Stuff 2", 0x2dd9e80, 0x2dd9ea0, indexKOFXISprites_Momoko, 0x21 },
    { L"E+D - Character Extra 1", 0x2dd9ea0, 0x2dd9ec0, indexKOFXISprites_Momoko, 0x30 },
    { L"E+D - Character Extra 2", 0x2dd9ec0, 0x2dd9ee0, indexKOFXISprites_Momoko, 0x31 },
    { L"E+D - Character Extra 3", 0x2dd9ee0, 0x2dd9f00, indexKOFXISprites_Momoko, 0x32 },
    { L"E+D - Extra Move 1", 0x2dd9f00, 0x2dd9f20, indexKOFXISprites_Momoko, 0x10 },
    { L"E+D - Extra Move 2", 0x2dd9f20, 0x2dd9f40, indexKOFXISprites_Momoko, 0x11 },
    { L"E+D - Extra Move 3", 0x2dd9f40, 0x2dd9f60, indexKOFXISprites_Momoko, 0x12 },
    { L"E+D - Extra Move 4", 0x2dd9f60, 0x2dd9f80, indexKOFXISprites_Momoko, 0x13 },
    { L"E+D - Extra Move 5", 0x2dd9f80, 0x2dd9fa0, indexKOFXISprites_Momoko, 0x14 },
    { L"E+D - Extra Move 6", 0x2dd9fa0, 0x2dd9fc0, indexKOFXISprites_Momoko, 0x15 },
    { L"E+D - Extra Move 7", 0x2dd9fc0, 0x2dd9fe0, indexKOFXISprites_Momoko, 0x16 },
    { L"E+D - Extra Move 8", 0x2dd9fe0, 0x2dda000, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_SA[] =
{
    { L"Momoko SA", 0x2dda000, 0x2dda020, indexKOFXISprites_Momoko },
    { L"Start+A - Super Stuff 1", 0x2dda020, 0x2dda040, indexKOFXISprites_Momoko, 0x20 },
    { L"Start+A - Electric Palette", 0x2dda040, 0x2dda060, indexKOFXISprites_Momoko, 0x41 },
    { L"Start+A - Darker Palette", 0x2dda060, 0x2dda080, indexKOFXISprites_Momoko, 0x40 },
    { L"Start+A - Super Stuff 2", 0x2dda080, 0x2dda0a0, indexKOFXISprites_Momoko, 0x21 },
    { L"Start+A - Character Extra 1", 0x2dda0a0, 0x2dda0c0, indexKOFXISprites_Momoko, 0x30 },
    { L"Start+A - Character Extra 2", 0x2dda0c0, 0x2dda0e0, indexKOFXISprites_Momoko, 0x31 },
    { L"Start+A - Character Extra 3", 0x2dda0e0, 0x2dda100, indexKOFXISprites_Momoko, 0x32 },
    { L"Start+A - Extra Move 1", 0x2dda100, 0x2dda120, indexKOFXISprites_Momoko, 0x10 },
    { L"Start+A - Extra Move 2", 0x2dda120, 0x2dda140, indexKOFXISprites_Momoko, 0x11 },
    { L"Start+A - Extra Move 3", 0x2dda140, 0x2dda160, indexKOFXISprites_Momoko, 0x12 },
    { L"Start+A - Extra Move 4", 0x2dda160, 0x2dda180, indexKOFXISprites_Momoko, 0x13 },
    { L"Start+A - Extra Move 5", 0x2dda180, 0x2dda1a0, indexKOFXISprites_Momoko, 0x14 },
    { L"Start+A - Extra Move 6", 0x2dda1a0, 0x2dda1c0, indexKOFXISprites_Momoko, 0x15 },
    { L"Start+A - Extra Move 7", 0x2dda1c0, 0x2dda1e0, indexKOFXISprites_Momoko, 0x16 },
    { L"Start+A - Extra Move 8", 0x2dda1e0, 0x2dda200, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_SB[] =
{
    { L"Momoko SB", 0x2dda200, 0x2dda220, indexKOFXISprites_Momoko },
    { L"Start+B - Super Stuff 1", 0x2dda220, 0x2dda240, indexKOFXISprites_Momoko, 0x20 },
    { L"Start+B - Electric Palette", 0x2dda240, 0x2dda260, indexKOFXISprites_Momoko, 0x41 },
    { L"Start+B - Darker Palette", 0x2dda260, 0x2dda280, indexKOFXISprites_Momoko, 0x40 },
    { L"Start+B - Super Stuff 2", 0x2dda280, 0x2dda2a0, indexKOFXISprites_Momoko, 0x21 },
    { L"Start+B - Character Extra 1", 0x2dda2a0, 0x2dda2c0, indexKOFXISprites_Momoko, 0x30 },
    { L"Start+B - Character Extra 2", 0x2dda2c0, 0x2dda2e0, indexKOFXISprites_Momoko, 0x31 },
    { L"Start+B - Character Extra 3", 0x2dda2e0, 0x2dda300, indexKOFXISprites_Momoko, 0x32 },
    { L"Start+B - Extra Move 1", 0x2dda300, 0x2dda320, indexKOFXISprites_Momoko, 0x10 },
    { L"Start+B - Extra Move 2", 0x2dda320, 0x2dda340, indexKOFXISprites_Momoko, 0x11 },
    { L"Start+B - Extra Move 3", 0x2dda340, 0x2dda360, indexKOFXISprites_Momoko, 0x12 },
    { L"Start+B - Extra Move 4", 0x2dda360, 0x2dda380, indexKOFXISprites_Momoko, 0x13 },
    { L"Start+B - Extra Move 5", 0x2dda380, 0x2dda3a0, indexKOFXISprites_Momoko, 0x14 },
    { L"Start+B - Extra Move 6", 0x2dda3a0, 0x2dda3c0, indexKOFXISprites_Momoko, 0x15 },
    { L"Start+B - Extra Move 7", 0x2dda3c0, 0x2dda3e0, indexKOFXISprites_Momoko, 0x16 },
    { L"Start+B - Extra Move 8", 0x2dda3e0, 0x2dda400, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_SC[] =
{
    { L"Momoko SC", 0x2dda400, 0x2dda420, indexKOFXISprites_Momoko },
    { L"Start+C - Super Stuff 1", 0x2dda420, 0x2dda440, indexKOFXISprites_Momoko, 0x20 },
    { L"Start+C - Electric Palette", 0x2dda440, 0x2dda460, indexKOFXISprites_Momoko, 0x41 },
    { L"Start+C - Darker Palette", 0x2dda460, 0x2dda480, indexKOFXISprites_Momoko, 0x40 },
    { L"Start+C - Super Stuff 2", 0x2dda480, 0x2dda4a0, indexKOFXISprites_Momoko, 0x21 },
    { L"Start+C - Character Extra 1", 0x2dda4a0, 0x2dda4c0, indexKOFXISprites_Momoko, 0x30 },
    { L"Start+C - Character Extra 2", 0x2dda4c0, 0x2dda4e0, indexKOFXISprites_Momoko, 0x31 },
    { L"Start+C - Character Extra 3", 0x2dda4e0, 0x2dda500, indexKOFXISprites_Momoko, 0x32 },
    { L"Start+C - Extra Move 1", 0x2dda500, 0x2dda520, indexKOFXISprites_Momoko, 0x10 },
    { L"Start+C - Extra Move 2", 0x2dda520, 0x2dda540, indexKOFXISprites_Momoko, 0x11 },
    { L"Start+C - Extra Move 3", 0x2dda540, 0x2dda560, indexKOFXISprites_Momoko, 0x12 },
    { L"Start+C - Extra Move 4", 0x2dda560, 0x2dda580, indexKOFXISprites_Momoko, 0x13 },
    { L"Start+C - Extra Move 5", 0x2dda580, 0x2dda5a0, indexKOFXISprites_Momoko, 0x14 },
    { L"Start+C - Extra Move 6", 0x2dda5a0, 0x2dda5c0, indexKOFXISprites_Momoko, 0x15 },
    { L"Start+C - Extra Move 7", 0x2dda5c0, 0x2dda5e0, indexKOFXISprites_Momoko, 0x16 },
    { L"Start+C - Extra Move 8", 0x2dda5e0, 0x2dda600, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MOMOKO_PALETTES_SD[] =
{
    { L"Momoko SD", 0x2dda600, 0x2dda620, indexKOFXISprites_Momoko },
    { L"Start+D - Super Stuff 1", 0x2dda620, 0x2dda640, indexKOFXISprites_Momoko, 0x20 },
    { L"Start+D - Electric Palette", 0x2dda640, 0x2dda660, indexKOFXISprites_Momoko, 0x41 },
    { L"Start+D - Darker Palette", 0x2dda660, 0x2dda680, indexKOFXISprites_Momoko, 0x40 },
    { L"Start+D - Super Stuff 2", 0x2dda680, 0x2dda6a0, indexKOFXISprites_Momoko, 0x21 },
    { L"Start+D - Character Extra 1", 0x2dda6a0, 0x2dda6c0, indexKOFXISprites_Momoko, 0x30 },
    { L"Start+D - Character Extra 2", 0x2dda6c0, 0x2dda6e0, indexKOFXISprites_Momoko, 0x31 },
    { L"Start+D - Character Extra 3", 0x2dda6e0, 0x2dda700, indexKOFXISprites_Momoko, 0x32 },
    { L"Start+D - Extra Move 1", 0x2dda700, 0x2dda720, indexKOFXISprites_Momoko, 0x10 },
    { L"Start+D - Extra Move 2", 0x2dda720, 0x2dda740, indexKOFXISprites_Momoko, 0x11 },
    { L"Start+D - Extra Move 3", 0x2dda740, 0x2dda760, indexKOFXISprites_Momoko, 0x12 },
    { L"Start+D - Extra Move 4", 0x2dda760, 0x2dda780, indexKOFXISprites_Momoko, 0x13 },
    { L"Start+D - Extra Move 5", 0x2dda780, 0x2dda7a0, indexKOFXISprites_Momoko, 0x14 },
    { L"Start+D - Extra Move 6", 0x2dda7a0, 0x2dda7c0, indexKOFXISprites_Momoko, 0x15 },
    { L"Start+D - Extra Move 7", 0x2dda7c0, 0x2dda7e0, indexKOFXISprites_Momoko, 0x16 },
    { L"Start+D - Extra Move 8", 0x2dda7e0, 0x2dda800, indexKOFXISprites_Momoko, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_A[] =
{
    { L"Vanessa A", 0x2f98000, 0x2f98020, indexKOFXISprites_Vanessa },
    { L"A - Super Stuff 1", 0x2f98020, 0x2f98040, indexKOFXISprites_Vanessa, 0x20 },
    { L"A - Electric Palette", 0x2f98040, 0x2f98060, indexKOFXISprites_Vanessa, 0x41 },
    { L"A - Darker Palette", 0x2f98060, 0x2f98080, indexKOFXISprites_Vanessa, 0x40 },
    { L"A - Super Stuff 2", 0x2f98080, 0x2f980a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"A - Character Extra 1", 0x2f980a0, 0x2f980c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"A - Character Extra 2", 0x2f980c0, 0x2f980e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"A - Character Extra 3", 0x2f980e0, 0x2f98100, indexKOFXISprites_Vanessa, 0x32 },
    { L"A - Extra Move 1", 0x2f98100, 0x2f98120, indexKOFXISprites_Vanessa, 0x10 },
    { L"A - Extra Move 2", 0x2f98120, 0x2f98140, indexKOFXISprites_Vanessa, 0x11 },
    { L"A - Extra Move 3", 0x2f98140, 0x2f98160, indexKOFXISprites_Vanessa, 0x12 },
    { L"A - Extra Move 4", 0x2f98160, 0x2f98180, indexKOFXISprites_Vanessa, 0x13 },
    { L"A - Extra Move 5", 0x2f98180, 0x2f981a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"A - Extra Move 6", 0x2f981a0, 0x2f981c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"A - Extra Move 7", 0x2f981c0, 0x2f981e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"A - Extra Move 8", 0x2f981e0, 0x2f98200, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_B[] =
{
    { L"Vanessa B", 0x2f98200, 0x2f98220, indexKOFXISprites_Vanessa },
    { L"B - Super Stuff 1", 0x2f98220, 0x2f98240, indexKOFXISprites_Vanessa, 0x20 },
    { L"B - Electric Palette", 0x2f98240, 0x2f98260, indexKOFXISprites_Vanessa, 0x41 },
    { L"B - Darker Palette", 0x2f98260, 0x2f98280, indexKOFXISprites_Vanessa, 0x40 },
    { L"B - Super Stuff 2", 0x2f98280, 0x2f982a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"B - Character Extra 1", 0x2f982a0, 0x2f982c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"B - Character Extra 2", 0x2f982c0, 0x2f982e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"B - Character Extra 3", 0x2f982e0, 0x2f98300, indexKOFXISprites_Vanessa, 0x32 },
    { L"B - Extra Move 1", 0x2f98300, 0x2f98320, indexKOFXISprites_Vanessa, 0x10 },
    { L"B - Extra Move 2", 0x2f98320, 0x2f98340, indexKOFXISprites_Vanessa, 0x11 },
    { L"B - Extra Move 3", 0x2f98340, 0x2f98360, indexKOFXISprites_Vanessa, 0x12 },
    { L"B - Extra Move 4", 0x2f98360, 0x2f98380, indexKOFXISprites_Vanessa, 0x13 },
    { L"B - Extra Move 5", 0x2f98380, 0x2f983a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"B - Extra Move 6", 0x2f983a0, 0x2f983c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"B - Extra Move 7", 0x2f983c0, 0x2f983e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"B - Extra Move 8", 0x2f983e0, 0x2f98400, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_C[] =
{
    { L"Vanessa C", 0x2f98400, 0x2f98420, indexKOFXISprites_Vanessa },
    { L"C - Super Stuff 1", 0x2f98420, 0x2f98440, indexKOFXISprites_Vanessa, 0x20 },
    { L"C - Electric Palette", 0x2f98440, 0x2f98460, indexKOFXISprites_Vanessa, 0x41 },
    { L"C - Darker Palette", 0x2f98460, 0x2f98480, indexKOFXISprites_Vanessa, 0x40 },
    { L"C - Super Stuff 2", 0x2f98480, 0x2f984a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"C - Character Extra 1", 0x2f984a0, 0x2f984c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"C - Character Extra 2", 0x2f984c0, 0x2f984e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"C - Character Extra 3", 0x2f984e0, 0x2f98500, indexKOFXISprites_Vanessa, 0x32 },
    { L"C - Extra Move 1", 0x2f98500, 0x2f98520, indexKOFXISprites_Vanessa, 0x10 },
    { L"C - Extra Move 2", 0x2f98520, 0x2f98540, indexKOFXISprites_Vanessa, 0x11 },
    { L"C - Extra Move 3", 0x2f98540, 0x2f98560, indexKOFXISprites_Vanessa, 0x12 },
    { L"C - Extra Move 4", 0x2f98560, 0x2f98580, indexKOFXISprites_Vanessa, 0x13 },
    { L"C - Extra Move 5", 0x2f98580, 0x2f985a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"C - Extra Move 6", 0x2f985a0, 0x2f985c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"C - Extra Move 7", 0x2f985c0, 0x2f985e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"C - Extra Move 8", 0x2f985e0, 0x2f98600, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_D[] =
{
    { L"Vanessa D", 0x2f98600, 0x2f98620, indexKOFXISprites_Vanessa },
    { L"D - Super Stuff 1", 0x2f98620, 0x2f98640, indexKOFXISprites_Vanessa, 0x20 },
    { L"D - Electric Palette", 0x2f98640, 0x2f98660, indexKOFXISprites_Vanessa, 0x41 },
    { L"D - Darker Palette", 0x2f98660, 0x2f98680, indexKOFXISprites_Vanessa, 0x40 },
    { L"D - Super Stuff 2", 0x2f98680, 0x2f986a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"D - Character Extra 1", 0x2f986a0, 0x2f986c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"D - Character Extra 2", 0x2f986c0, 0x2f986e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"D - Character Extra 3", 0x2f986e0, 0x2f98700, indexKOFXISprites_Vanessa, 0x32 },
    { L"D - Extra Move 1", 0x2f98700, 0x2f98720, indexKOFXISprites_Vanessa, 0x10 },
    { L"D - Extra Move 2", 0x2f98720, 0x2f98740, indexKOFXISprites_Vanessa, 0x11 },
    { L"D - Extra Move 3", 0x2f98740, 0x2f98760, indexKOFXISprites_Vanessa, 0x12 },
    { L"D - Extra Move 4", 0x2f98760, 0x2f98780, indexKOFXISprites_Vanessa, 0x13 },
    { L"D - Extra Move 5", 0x2f98780, 0x2f987a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"D - Extra Move 6", 0x2f987a0, 0x2f987c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"D - Extra Move 7", 0x2f987c0, 0x2f987e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"D - Extra Move 8", 0x2f987e0, 0x2f98800, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_EA[] =
{
    { L"Vanessa EA", 0x2f98800, 0x2f98820, indexKOFXISprites_Vanessa },
    { L"E+A - Super Stuff 1", 0x2f98820, 0x2f98840, indexKOFXISprites_Vanessa, 0x20 },
    { L"E+A - Electric Palette", 0x2f98840, 0x2f98860, indexKOFXISprites_Vanessa, 0x41 },
    { L"E+A - Darker Palette", 0x2f98860, 0x2f98880, indexKOFXISprites_Vanessa, 0x40 },
    { L"E+A - Super Stuff 2", 0x2f98880, 0x2f988a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"E+A - Character Extra 1", 0x2f988a0, 0x2f988c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"E+A - Character Extra 2", 0x2f988c0, 0x2f988e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"E+A - Character Extra 3", 0x2f988e0, 0x2f98900, indexKOFXISprites_Vanessa, 0x32 },
    { L"E+A - Extra Move 1", 0x2f98900, 0x2f98920, indexKOFXISprites_Vanessa, 0x10 },
    { L"E+A - Extra Move 2", 0x2f98920, 0x2f98940, indexKOFXISprites_Vanessa, 0x11 },
    { L"E+A - Extra Move 3", 0x2f98940, 0x2f98960, indexKOFXISprites_Vanessa, 0x12 },
    { L"E+A - Extra Move 4", 0x2f98960, 0x2f98980, indexKOFXISprites_Vanessa, 0x13 },
    { L"E+A - Extra Move 5", 0x2f98980, 0x2f989a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"E+A - Extra Move 6", 0x2f989a0, 0x2f989c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"E+A - Extra Move 7", 0x2f989c0, 0x2f989e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"E+A - Extra Move 8", 0x2f989e0, 0x2f98a00, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_EB[] =
{
    { L"Vanessa EB", 0x2f98a00, 0x2f98a20, indexKOFXISprites_Vanessa },
    { L"E+B - Super Stuff 1", 0x2f98a20, 0x2f98a40, indexKOFXISprites_Vanessa, 0x20 },
    { L"E+B - Electric Palette", 0x2f98a40, 0x2f98a60, indexKOFXISprites_Vanessa, 0x41 },
    { L"E+B - Darker Palette", 0x2f98a60, 0x2f98a80, indexKOFXISprites_Vanessa, 0x40 },
    { L"E+B - Super Stuff 2", 0x2f98a80, 0x2f98aa0, indexKOFXISprites_Vanessa, 0x21 },
    { L"E+B - Character Extra 1", 0x2f98aa0, 0x2f98ac0, indexKOFXISprites_Vanessa, 0x30 },
    { L"E+B - Character Extra 2", 0x2f98ac0, 0x2f98ae0, indexKOFXISprites_Vanessa, 0x31 },
    { L"E+B - Character Extra 3", 0x2f98ae0, 0x2f98b00, indexKOFXISprites_Vanessa, 0x32 },
    { L"E+B - Extra Move 1", 0x2f98b00, 0x2f98b20, indexKOFXISprites_Vanessa, 0x10 },
    { L"E+B - Extra Move 2", 0x2f98b20, 0x2f98b40, indexKOFXISprites_Vanessa, 0x11 },
    { L"E+B - Extra Move 3", 0x2f98b40, 0x2f98b60, indexKOFXISprites_Vanessa, 0x12 },
    { L"E+B - Extra Move 4", 0x2f98b60, 0x2f98b80, indexKOFXISprites_Vanessa, 0x13 },
    { L"E+B - Extra Move 5", 0x2f98b80, 0x2f98ba0, indexKOFXISprites_Vanessa, 0x14 },
    { L"E+B - Extra Move 6", 0x2f98ba0, 0x2f98bc0, indexKOFXISprites_Vanessa, 0x15 },
    { L"E+B - Extra Move 7", 0x2f98bc0, 0x2f98be0, indexKOFXISprites_Vanessa, 0x16 },
    { L"E+B - Extra Move 8", 0x2f98be0, 0x2f98c00, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_EC[] =
{
    { L"Vanessa EC", 0x2f98c00, 0x2f98c20, indexKOFXISprites_Vanessa },
    { L"E+C - Super Stuff 1", 0x2f98c20, 0x2f98c40, indexKOFXISprites_Vanessa, 0x20 },
    { L"E+C - Electric Palette", 0x2f98c40, 0x2f98c60, indexKOFXISprites_Vanessa, 0x41 },
    { L"E+C - Darker Palette", 0x2f98c60, 0x2f98c80, indexKOFXISprites_Vanessa, 0x40 },
    { L"E+C - Super Stuff 2", 0x2f98c80, 0x2f98ca0, indexKOFXISprites_Vanessa, 0x21 },
    { L"E+C - Character Extra 1", 0x2f98ca0, 0x2f98cc0, indexKOFXISprites_Vanessa, 0x30 },
    { L"E+C - Character Extra 2", 0x2f98cc0, 0x2f98ce0, indexKOFXISprites_Vanessa, 0x31 },
    { L"E+C - Character Extra 3", 0x2f98ce0, 0x2f98d00, indexKOFXISprites_Vanessa, 0x32 },
    { L"E+C - Extra Move 1", 0x2f98d00, 0x2f98d20, indexKOFXISprites_Vanessa, 0x10 },
    { L"E+C - Extra Move 2", 0x2f98d20, 0x2f98d40, indexKOFXISprites_Vanessa, 0x11 },
    { L"E+C - Extra Move 3", 0x2f98d40, 0x2f98d60, indexKOFXISprites_Vanessa, 0x12 },
    { L"E+C - Extra Move 4", 0x2f98d60, 0x2f98d80, indexKOFXISprites_Vanessa, 0x13 },
    { L"E+C - Extra Move 5", 0x2f98d80, 0x2f98da0, indexKOFXISprites_Vanessa, 0x14 },
    { L"E+C - Extra Move 6", 0x2f98da0, 0x2f98dc0, indexKOFXISprites_Vanessa, 0x15 },
    { L"E+C - Extra Move 7", 0x2f98dc0, 0x2f98de0, indexKOFXISprites_Vanessa, 0x16 },
    { L"E+C - Extra Move 8", 0x2f98de0, 0x2f98e00, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_ED[] =
{
    { L"Vanessa ED", 0x2f98e00, 0x2f98e20, indexKOFXISprites_Vanessa },
    { L"E+D - Super Stuff 1", 0x2f98e20, 0x2f98e40, indexKOFXISprites_Vanessa, 0x20 },
    { L"E+D - Electric Palette", 0x2f98e40, 0x2f98e60, indexKOFXISprites_Vanessa, 0x41 },
    { L"E+D - Darker Palette", 0x2f98e60, 0x2f98e80, indexKOFXISprites_Vanessa, 0x40 },
    { L"E+D - Super Stuff 2", 0x2f98e80, 0x2f98ea0, indexKOFXISprites_Vanessa, 0x21 },
    { L"E+D - Character Extra 1", 0x2f98ea0, 0x2f98ec0, indexKOFXISprites_Vanessa, 0x30 },
    { L"E+D - Character Extra 2", 0x2f98ec0, 0x2f98ee0, indexKOFXISprites_Vanessa, 0x31 },
    { L"E+D - Character Extra 3", 0x2f98ee0, 0x2f98f00, indexKOFXISprites_Vanessa, 0x32 },
    { L"E+D - Extra Move 1", 0x2f98f00, 0x2f98f20, indexKOFXISprites_Vanessa, 0x10 },
    { L"E+D - Extra Move 2", 0x2f98f20, 0x2f98f40, indexKOFXISprites_Vanessa, 0x11 },
    { L"E+D - Extra Move 3", 0x2f98f40, 0x2f98f60, indexKOFXISprites_Vanessa, 0x12 },
    { L"E+D - Extra Move 4", 0x2f98f60, 0x2f98f80, indexKOFXISprites_Vanessa, 0x13 },
    { L"E+D - Extra Move 5", 0x2f98f80, 0x2f98fa0, indexKOFXISprites_Vanessa, 0x14 },
    { L"E+D - Extra Move 6", 0x2f98fa0, 0x2f98fc0, indexKOFXISprites_Vanessa, 0x15 },
    { L"E+D - Extra Move 7", 0x2f98fc0, 0x2f98fe0, indexKOFXISprites_Vanessa, 0x16 },
    { L"E+D - Extra Move 8", 0x2f98fe0, 0x2f99000, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_SA[] =
{
    { L"Vanessa SA", 0x2f99000, 0x2f99020, indexKOFXISprites_Vanessa },
    { L"Start+A - Super Stuff 1", 0x2f99020, 0x2f99040, indexKOFXISprites_Vanessa, 0x20 },
    { L"Start+A - Electric Palette", 0x2f99040, 0x2f99060, indexKOFXISprites_Vanessa, 0x41 },
    { L"Start+A - Darker Palette", 0x2f99060, 0x2f99080, indexKOFXISprites_Vanessa, 0x40 },
    { L"Start+A - Super Stuff 2", 0x2f99080, 0x2f990a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"Start+A - Character Extra 1", 0x2f990a0, 0x2f990c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"Start+A - Character Extra 2", 0x2f990c0, 0x2f990e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"Start+A - Character Extra 3", 0x2f990e0, 0x2f99100, indexKOFXISprites_Vanessa, 0x32 },
    { L"Start+A - Extra Move 1", 0x2f99100, 0x2f99120, indexKOFXISprites_Vanessa, 0x10 },
    { L"Start+A - Extra Move 2", 0x2f99120, 0x2f99140, indexKOFXISprites_Vanessa, 0x11 },
    { L"Start+A - Extra Move 3", 0x2f99140, 0x2f99160, indexKOFXISprites_Vanessa, 0x12 },
    { L"Start+A - Extra Move 4", 0x2f99160, 0x2f99180, indexKOFXISprites_Vanessa, 0x13 },
    { L"Start+A - Extra Move 5", 0x2f99180, 0x2f991a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"Start+A - Extra Move 6", 0x2f991a0, 0x2f991c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"Start+A - Extra Move 7", 0x2f991c0, 0x2f991e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"Start+A - Extra Move 8", 0x2f991e0, 0x2f99200, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_SB[] =
{
    { L"Vanessa SB", 0x2f99200, 0x2f99220, indexKOFXISprites_Vanessa },
    { L"Start+B - Super Stuff 1", 0x2f99220, 0x2f99240, indexKOFXISprites_Vanessa, 0x20 },
    { L"Start+B - Electric Palette", 0x2f99240, 0x2f99260, indexKOFXISprites_Vanessa, 0x41 },
    { L"Start+B - Darker Palette", 0x2f99260, 0x2f99280, indexKOFXISprites_Vanessa, 0x40 },
    { L"Start+B - Super Stuff 2", 0x2f99280, 0x2f992a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"Start+B - Character Extra 1", 0x2f992a0, 0x2f992c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"Start+B - Character Extra 2", 0x2f992c0, 0x2f992e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"Start+B - Character Extra 3", 0x2f992e0, 0x2f99300, indexKOFXISprites_Vanessa, 0x32 },
    { L"Start+B - Extra Move 1", 0x2f99300, 0x2f99320, indexKOFXISprites_Vanessa, 0x10 },
    { L"Start+B - Extra Move 2", 0x2f99320, 0x2f99340, indexKOFXISprites_Vanessa, 0x11 },
    { L"Start+B - Extra Move 3", 0x2f99340, 0x2f99360, indexKOFXISprites_Vanessa, 0x12 },
    { L"Start+B - Extra Move 4", 0x2f99360, 0x2f99380, indexKOFXISprites_Vanessa, 0x13 },
    { L"Start+B - Extra Move 5", 0x2f99380, 0x2f993a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"Start+B - Extra Move 6", 0x2f993a0, 0x2f993c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"Start+B - Extra Move 7", 0x2f993c0, 0x2f993e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"Start+B - Extra Move 8", 0x2f993e0, 0x2f99400, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_SC[] =
{
    { L"Vanessa SC", 0x2f99400, 0x2f99420, indexKOFXISprites_Vanessa },
    { L"Start+C - Super Stuff 1", 0x2f99420, 0x2f99440, indexKOFXISprites_Vanessa, 0x20 },
    { L"Start+C - Electric Palette", 0x2f99440, 0x2f99460, indexKOFXISprites_Vanessa, 0x41 },
    { L"Start+C - Darker Palette", 0x2f99460, 0x2f99480, indexKOFXISprites_Vanessa, 0x40 },
    { L"Start+C - Super Stuff 2", 0x2f99480, 0x2f994a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"Start+C - Character Extra 1", 0x2f994a0, 0x2f994c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"Start+C - Character Extra 2", 0x2f994c0, 0x2f994e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"Start+C - Character Extra 3", 0x2f994e0, 0x2f99500, indexKOFXISprites_Vanessa, 0x32 },
    { L"Start+C - Extra Move 1", 0x2f99500, 0x2f99520, indexKOFXISprites_Vanessa, 0x10 },
    { L"Start+C - Extra Move 2", 0x2f99520, 0x2f99540, indexKOFXISprites_Vanessa, 0x11 },
    { L"Start+C - Extra Move 3", 0x2f99540, 0x2f99560, indexKOFXISprites_Vanessa, 0x12 },
    { L"Start+C - Extra Move 4", 0x2f99560, 0x2f99580, indexKOFXISprites_Vanessa, 0x13 },
    { L"Start+C - Extra Move 5", 0x2f99580, 0x2f995a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"Start+C - Extra Move 6", 0x2f995a0, 0x2f995c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"Start+C - Extra Move 7", 0x2f995c0, 0x2f995e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"Start+C - Extra Move 8", 0x2f995e0, 0x2f99600, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_VANESSA_PALETTES_SD[] =
{
    { L"Vanessa SD", 0x2f99600, 0x2f99620, indexKOFXISprites_Vanessa },
    { L"Start+D - Super Stuff 1", 0x2f99620, 0x2f99640, indexKOFXISprites_Vanessa, 0x20 },
    { L"Start+D - Electric Palette", 0x2f99640, 0x2f99660, indexKOFXISprites_Vanessa, 0x41 },
    { L"Start+D - Darker Palette", 0x2f99660, 0x2f99680, indexKOFXISprites_Vanessa, 0x40 },
    { L"Start+D - Super Stuff 2", 0x2f99680, 0x2f996a0, indexKOFXISprites_Vanessa, 0x21 },
    { L"Start+D - Character Extra 1", 0x2f996a0, 0x2f996c0, indexKOFXISprites_Vanessa, 0x30 },
    { L"Start+D - Character Extra 2", 0x2f996c0, 0x2f996e0, indexKOFXISprites_Vanessa, 0x31 },
    { L"Start+D - Character Extra 3", 0x2f996e0, 0x2f99700, indexKOFXISprites_Vanessa, 0x32 },
    { L"Start+D - Extra Move 1", 0x2f99700, 0x2f99720, indexKOFXISprites_Vanessa, 0x10 },
    { L"Start+D - Extra Move 2", 0x2f99720, 0x2f99740, indexKOFXISprites_Vanessa, 0x11 },
    { L"Start+D - Extra Move 3", 0x2f99740, 0x2f99760, indexKOFXISprites_Vanessa, 0x12 },
    { L"Start+D - Extra Move 4", 0x2f99760, 0x2f99780, indexKOFXISprites_Vanessa, 0x13 },
    { L"Start+D - Extra Move 5", 0x2f99780, 0x2f997a0, indexKOFXISprites_Vanessa, 0x14 },
    { L"Start+D - Extra Move 6", 0x2f997a0, 0x2f997c0, indexKOFXISprites_Vanessa, 0x15 },
    { L"Start+D - Extra Move 7", 0x2f997c0, 0x2f997e0, indexKOFXISprites_Vanessa, 0x16 },
    { L"Start+D - Extra Move 8", 0x2f997e0, 0x2f99800, indexKOFXISprites_Vanessa, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A", 0x30ef000, 0x30ef020, indexKOFXISprites_BlueMary },
    { L"A - Super Stuff 1", 0x30ef020, 0x30ef040, indexKOFXISprites_BlueMary, 0x20 },
    { L"A - Electric Palette", 0x30ef040, 0x30ef060, indexKOFXISprites_BlueMary, 0x41 },
    { L"A - Darker Palette", 0x30ef060, 0x30ef080, indexKOFXISprites_BlueMary, 0x40 },
    { L"A - Super Stuff 2", 0x30ef080, 0x30ef0a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"A - Character Extra 1", 0x30ef0a0, 0x30ef0c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"A - Character Extra 2", 0x30ef0c0, 0x30ef0e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"A - Character Extra 3", 0x30ef0e0, 0x30ef100, indexKOFXISprites_BlueMary, 0x32 },
    { L"A - Extra Move 1", 0x30ef100, 0x30ef120, indexKOFXISprites_BlueMary, 0x10 },
    { L"A - Extra Move 2", 0x30ef120, 0x30ef140, indexKOFXISprites_BlueMary, 0x11 },
    { L"A - Extra Move 3", 0x30ef140, 0x30ef160, indexKOFXISprites_BlueMary, 0x12 },
    { L"A - Extra Move 4", 0x30ef160, 0x30ef180, indexKOFXISprites_BlueMary, 0x13 },
    { L"A - Extra Move 5", 0x30ef180, 0x30ef1a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"A - Extra Move 6", 0x30ef1a0, 0x30ef1c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"A - Extra Move 7", 0x30ef1c0, 0x30ef1e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"A - Extra Move 8", 0x30ef1e0, 0x30ef200, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B", 0x30ef200, 0x30ef220, indexKOFXISprites_BlueMary },
    { L"B - Super Stuff 1", 0x30ef220, 0x30ef240, indexKOFXISprites_BlueMary, 0x20 },
    { L"B - Electric Palette", 0x30ef240, 0x30ef260, indexKOFXISprites_BlueMary, 0x41 },
    { L"B - Darker Palette", 0x30ef260, 0x30ef280, indexKOFXISprites_BlueMary, 0x40 },
    { L"B - Super Stuff 2", 0x30ef280, 0x30ef2a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"B - Character Extra 1", 0x30ef2a0, 0x30ef2c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"B - Character Extra 2", 0x30ef2c0, 0x30ef2e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"B - Character Extra 3", 0x30ef2e0, 0x30ef300, indexKOFXISprites_BlueMary, 0x32 },
    { L"B - Extra Move 1", 0x30ef300, 0x30ef320, indexKOFXISprites_BlueMary, 0x10 },
    { L"B - Extra Move 2", 0x30ef320, 0x30ef340, indexKOFXISprites_BlueMary, 0x11 },
    { L"B - Extra Move 3", 0x30ef340, 0x30ef360, indexKOFXISprites_BlueMary, 0x12 },
    { L"B - Extra Move 4", 0x30ef360, 0x30ef380, indexKOFXISprites_BlueMary, 0x13 },
    { L"B - Extra Move 5", 0x30ef380, 0x30ef3a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"B - Extra Move 6", 0x30ef3a0, 0x30ef3c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"B - Extra Move 7", 0x30ef3c0, 0x30ef3e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"B - Extra Move 8", 0x30ef3e0, 0x30ef400, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C", 0x30ef400, 0x30ef420, indexKOFXISprites_BlueMary },
    { L"C - Super Stuff 1", 0x30ef420, 0x30ef440, indexKOFXISprites_BlueMary, 0x20 },
    { L"C - Electric Palette", 0x30ef440, 0x30ef460, indexKOFXISprites_BlueMary, 0x41 },
    { L"C - Darker Palette", 0x30ef460, 0x30ef480, indexKOFXISprites_BlueMary, 0x40 },
    { L"C - Super Stuff 2", 0x30ef480, 0x30ef4a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"C - Character Extra 1", 0x30ef4a0, 0x30ef4c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"C - Character Extra 2", 0x30ef4c0, 0x30ef4e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"C - Character Extra 3", 0x30ef4e0, 0x30ef500, indexKOFXISprites_BlueMary, 0x32 },
    { L"C - Extra Move 1", 0x30ef500, 0x30ef520, indexKOFXISprites_BlueMary, 0x10 },
    { L"C - Extra Move 2", 0x30ef520, 0x30ef540, indexKOFXISprites_BlueMary, 0x11 },
    { L"C - Extra Move 3", 0x30ef540, 0x30ef560, indexKOFXISprites_BlueMary, 0x12 },
    { L"C - Extra Move 4", 0x30ef560, 0x30ef580, indexKOFXISprites_BlueMary, 0x13 },
    { L"C - Extra Move 5", 0x30ef580, 0x30ef5a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"C - Extra Move 6", 0x30ef5a0, 0x30ef5c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"C - Extra Move 7", 0x30ef5c0, 0x30ef5e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"C - Extra Move 8", 0x30ef5e0, 0x30ef600, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D", 0x30ef600, 0x30ef620, indexKOFXISprites_BlueMary },
    { L"D - Super Stuff 1", 0x30ef620, 0x30ef640, indexKOFXISprites_BlueMary, 0x20 },
    { L"D - Electric Palette", 0x30ef640, 0x30ef660, indexKOFXISprites_BlueMary, 0x41 },
    { L"D - Darker Palette", 0x30ef660, 0x30ef680, indexKOFXISprites_BlueMary, 0x40 },
    { L"D - Super Stuff 2", 0x30ef680, 0x30ef6a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"D - Character Extra 1", 0x30ef6a0, 0x30ef6c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"D - Character Extra 2", 0x30ef6c0, 0x30ef6e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"D - Character Extra 3", 0x30ef6e0, 0x30ef700, indexKOFXISprites_BlueMary, 0x32 },
    { L"D - Extra Move 1", 0x30ef700, 0x30ef720, indexKOFXISprites_BlueMary, 0x10 },
    { L"D - Extra Move 2", 0x30ef720, 0x30ef740, indexKOFXISprites_BlueMary, 0x11 },
    { L"D - Extra Move 3", 0x30ef740, 0x30ef760, indexKOFXISprites_BlueMary, 0x12 },
    { L"D - Extra Move 4", 0x30ef760, 0x30ef780, indexKOFXISprites_BlueMary, 0x13 },
    { L"D - Extra Move 5", 0x30ef780, 0x30ef7a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"D - Extra Move 6", 0x30ef7a0, 0x30ef7c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"D - Extra Move 7", 0x30ef7c0, 0x30ef7e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"D - Extra Move 8", 0x30ef7e0, 0x30ef800, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_EA[] =
{
    { L"Blue Mary EA", 0x30ef800, 0x30ef820, indexKOFXISprites_BlueMary },
    { L"E+A - Super Stuff 1", 0x30ef820, 0x30ef840, indexKOFXISprites_BlueMary, 0x20 },
    { L"E+A - Electric Palette", 0x30ef840, 0x30ef860, indexKOFXISprites_BlueMary, 0x41 },
    { L"E+A - Darker Palette", 0x30ef860, 0x30ef880, indexKOFXISprites_BlueMary, 0x40 },
    { L"E+A - Super Stuff 2", 0x30ef880, 0x30ef8a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"E+A - Character Extra 1", 0x30ef8a0, 0x30ef8c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"E+A - Character Extra 2", 0x30ef8c0, 0x30ef8e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"E+A - Character Extra 3", 0x30ef8e0, 0x30ef900, indexKOFXISprites_BlueMary, 0x32 },
    { L"E+A - Extra Move 1", 0x30ef900, 0x30ef920, indexKOFXISprites_BlueMary, 0x10 },
    { L"E+A - Extra Move 2", 0x30ef920, 0x30ef940, indexKOFXISprites_BlueMary, 0x11 },
    { L"E+A - Extra Move 3", 0x30ef940, 0x30ef960, indexKOFXISprites_BlueMary, 0x12 },
    { L"E+A - Extra Move 4", 0x30ef960, 0x30ef980, indexKOFXISprites_BlueMary, 0x13 },
    { L"E+A - Extra Move 5", 0x30ef980, 0x30ef9a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"E+A - Extra Move 6", 0x30ef9a0, 0x30ef9c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"E+A - Extra Move 7", 0x30ef9c0, 0x30ef9e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"E+A - Extra Move 8", 0x30ef9e0, 0x30efa00, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_EB[] =
{
    { L"Blue Mary EB", 0x30efa00, 0x30efa20, indexKOFXISprites_BlueMary },
    { L"E+B - Super Stuff 1", 0x30efa20, 0x30efa40, indexKOFXISprites_BlueMary, 0x20 },
    { L"E+B - Electric Palette", 0x30efa40, 0x30efa60, indexKOFXISprites_BlueMary, 0x41 },
    { L"E+B - Darker Palette", 0x30efa60, 0x30efa80, indexKOFXISprites_BlueMary, 0x40 },
    { L"E+B - Super Stuff 2", 0x30efa80, 0x30efaa0, indexKOFXISprites_BlueMary, 0x21 },
    { L"E+B - Character Extra 1", 0x30efaa0, 0x30efac0, indexKOFXISprites_BlueMary, 0x30 },
    { L"E+B - Character Extra 2", 0x30efac0, 0x30efae0, indexKOFXISprites_BlueMary, 0x31 },
    { L"E+B - Character Extra 3", 0x30efae0, 0x30efb00, indexKOFXISprites_BlueMary, 0x32 },
    { L"E+B - Extra Move 1", 0x30efb00, 0x30efb20, indexKOFXISprites_BlueMary, 0x10 },
    { L"E+B - Extra Move 2", 0x30efb20, 0x30efb40, indexKOFXISprites_BlueMary, 0x11 },
    { L"E+B - Extra Move 3", 0x30efb40, 0x30efb60, indexKOFXISprites_BlueMary, 0x12 },
    { L"E+B - Extra Move 4", 0x30efb60, 0x30efb80, indexKOFXISprites_BlueMary, 0x13 },
    { L"E+B - Extra Move 5", 0x30efb80, 0x30efba0, indexKOFXISprites_BlueMary, 0x14 },
    { L"E+B - Extra Move 6", 0x30efba0, 0x30efbc0, indexKOFXISprites_BlueMary, 0x15 },
    { L"E+B - Extra Move 7", 0x30efbc0, 0x30efbe0, indexKOFXISprites_BlueMary, 0x16 },
    { L"E+B - Extra Move 8", 0x30efbe0, 0x30efc00, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_EC[] =
{
    { L"Blue Mary EC", 0x30efc00, 0x30efc20, indexKOFXISprites_BlueMary },
    { L"E+C - Super Stuff 1", 0x30efc20, 0x30efc40, indexKOFXISprites_BlueMary, 0x20 },
    { L"E+C - Electric Palette", 0x30efc40, 0x30efc60, indexKOFXISprites_BlueMary, 0x41 },
    { L"E+C - Darker Palette", 0x30efc60, 0x30efc80, indexKOFXISprites_BlueMary, 0x40 },
    { L"E+C - Super Stuff 2", 0x30efc80, 0x30efca0, indexKOFXISprites_BlueMary, 0x21 },
    { L"E+C - Character Extra 1", 0x30efca0, 0x30efcc0, indexKOFXISprites_BlueMary, 0x30 },
    { L"E+C - Character Extra 2", 0x30efcc0, 0x30efce0, indexKOFXISprites_BlueMary, 0x31 },
    { L"E+C - Character Extra 3", 0x30efce0, 0x30efd00, indexKOFXISprites_BlueMary, 0x32 },
    { L"E+C - Extra Move 1", 0x30efd00, 0x30efd20, indexKOFXISprites_BlueMary, 0x10 },
    { L"E+C - Extra Move 2", 0x30efd20, 0x30efd40, indexKOFXISprites_BlueMary, 0x11 },
    { L"E+C - Extra Move 3", 0x30efd40, 0x30efd60, indexKOFXISprites_BlueMary, 0x12 },
    { L"E+C - Extra Move 4", 0x30efd60, 0x30efd80, indexKOFXISprites_BlueMary, 0x13 },
    { L"E+C - Extra Move 5", 0x30efd80, 0x30efda0, indexKOFXISprites_BlueMary, 0x14 },
    { L"E+C - Extra Move 6", 0x30efda0, 0x30efdc0, indexKOFXISprites_BlueMary, 0x15 },
    { L"E+C - Extra Move 7", 0x30efdc0, 0x30efde0, indexKOFXISprites_BlueMary, 0x16 },
    { L"E+C - Extra Move 8", 0x30efde0, 0x30efe00, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_ED[] =
{
    { L"Blue Mary ED", 0x30efe00, 0x30efe20, indexKOFXISprites_BlueMary },
    { L"E+D - Super Stuff 1", 0x30efe20, 0x30efe40, indexKOFXISprites_BlueMary, 0x20 },
    { L"E+D - Electric Palette", 0x30efe40, 0x30efe60, indexKOFXISprites_BlueMary, 0x41 },
    { L"E+D - Darker Palette", 0x30efe60, 0x30efe80, indexKOFXISprites_BlueMary, 0x40 },
    { L"E+D - Super Stuff 2", 0x30efe80, 0x30efea0, indexKOFXISprites_BlueMary, 0x21 },
    { L"E+D - Character Extra 1", 0x30efea0, 0x30efec0, indexKOFXISprites_BlueMary, 0x30 },
    { L"E+D - Character Extra 2", 0x30efec0, 0x30efee0, indexKOFXISprites_BlueMary, 0x31 },
    { L"E+D - Character Extra 3", 0x30efee0, 0x30eff00, indexKOFXISprites_BlueMary, 0x32 },
    { L"E+D - Extra Move 1", 0x30eff00, 0x30eff20, indexKOFXISprites_BlueMary, 0x10 },
    { L"E+D - Extra Move 2", 0x30eff20, 0x30eff40, indexKOFXISprites_BlueMary, 0x11 },
    { L"E+D - Extra Move 3", 0x30eff40, 0x30eff60, indexKOFXISprites_BlueMary, 0x12 },
    { L"E+D - Extra Move 4", 0x30eff60, 0x30eff80, indexKOFXISprites_BlueMary, 0x13 },
    { L"E+D - Extra Move 5", 0x30eff80, 0x30effa0, indexKOFXISprites_BlueMary, 0x14 },
    { L"E+D - Extra Move 6", 0x30effa0, 0x30effc0, indexKOFXISprites_BlueMary, 0x15 },
    { L"E+D - Extra Move 7", 0x30effc0, 0x30effe0, indexKOFXISprites_BlueMary, 0x16 },
    { L"E+D - Extra Move 8", 0x30effe0, 0x30f0000, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_SA[] =
{
    { L"Blue Mary SA", 0x30f0000, 0x30f0020, indexKOFXISprites_BlueMary },
    { L"Start+A - Super Stuff 1", 0x30f0020, 0x30f0040, indexKOFXISprites_BlueMary, 0x20 },
    { L"Start+A - Electric Palette", 0x30f0040, 0x30f0060, indexKOFXISprites_BlueMary, 0x41 },
    { L"Start+A - Darker Palette", 0x30f0060, 0x30f0080, indexKOFXISprites_BlueMary, 0x40 },
    { L"Start+A - Super Stuff 2", 0x30f0080, 0x30f00a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"Start+A - Character Extra 1", 0x30f00a0, 0x30f00c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"Start+A - Character Extra 2", 0x30f00c0, 0x30f00e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"Start+A - Character Extra 3", 0x30f00e0, 0x30f0100, indexKOFXISprites_BlueMary, 0x32 },
    { L"Start+A - Extra Move 1", 0x30f0100, 0x30f0120, indexKOFXISprites_BlueMary, 0x10 },
    { L"Start+A - Extra Move 2", 0x30f0120, 0x30f0140, indexKOFXISprites_BlueMary, 0x11 },
    { L"Start+A - Extra Move 3", 0x30f0140, 0x30f0160, indexKOFXISprites_BlueMary, 0x12 },
    { L"Start+A - Extra Move 4", 0x30f0160, 0x30f0180, indexKOFXISprites_BlueMary, 0x13 },
    { L"Start+A - Extra Move 5", 0x30f0180, 0x30f01a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"Start+A - Extra Move 6", 0x30f01a0, 0x30f01c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"Start+A - Extra Move 7", 0x30f01c0, 0x30f01e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"Start+A - Extra Move 8", 0x30f01e0, 0x30f0200, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_SB[] =
{
    { L"Blue Mary SB", 0x30f0200, 0x30f0220, indexKOFXISprites_BlueMary },
    { L"Start+B - Super Stuff 1", 0x30f0220, 0x30f0240, indexKOFXISprites_BlueMary, 0x20 },
    { L"Start+B - Electric Palette", 0x30f0240, 0x30f0260, indexKOFXISprites_BlueMary, 0x41 },
    { L"Start+B - Darker Palette", 0x30f0260, 0x30f0280, indexKOFXISprites_BlueMary, 0x40 },
    { L"Start+B - Super Stuff 2", 0x30f0280, 0x30f02a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"Start+B - Character Extra 1", 0x30f02a0, 0x30f02c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"Start+B - Character Extra 2", 0x30f02c0, 0x30f02e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"Start+B - Character Extra 3", 0x30f02e0, 0x30f0300, indexKOFXISprites_BlueMary, 0x32 },
    { L"Start+B - Extra Move 1", 0x30f0300, 0x30f0320, indexKOFXISprites_BlueMary, 0x10 },
    { L"Start+B - Extra Move 2", 0x30f0320, 0x30f0340, indexKOFXISprites_BlueMary, 0x11 },
    { L"Start+B - Extra Move 3", 0x30f0340, 0x30f0360, indexKOFXISprites_BlueMary, 0x12 },
    { L"Start+B - Extra Move 4", 0x30f0360, 0x30f0380, indexKOFXISprites_BlueMary, 0x13 },
    { L"Start+B - Extra Move 5", 0x30f0380, 0x30f03a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"Start+B - Extra Move 6", 0x30f03a0, 0x30f03c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"Start+B - Extra Move 7", 0x30f03c0, 0x30f03e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"Start+B - Extra Move 8", 0x30f03e0, 0x30f0400, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_SC[] =
{
    { L"Blue Mary SC", 0x30f0400, 0x30f0420, indexKOFXISprites_BlueMary },
    { L"Start+C - Super Stuff 1", 0x30f0420, 0x30f0440, indexKOFXISprites_BlueMary, 0x20 },
    { L"Start+C - Electric Palette", 0x30f0440, 0x30f0460, indexKOFXISprites_BlueMary, 0x41 },
    { L"Start+C - Darker Palette", 0x30f0460, 0x30f0480, indexKOFXISprites_BlueMary, 0x40 },
    { L"Start+C - Super Stuff 2", 0x30f0480, 0x30f04a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"Start+C - Character Extra 1", 0x30f04a0, 0x30f04c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"Start+C - Character Extra 2", 0x30f04c0, 0x30f04e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"Start+C - Character Extra 3", 0x30f04e0, 0x30f0500, indexKOFXISprites_BlueMary, 0x32 },
    { L"Start+C - Extra Move 1", 0x30f0500, 0x30f0520, indexKOFXISprites_BlueMary, 0x10 },
    { L"Start+C - Extra Move 2", 0x30f0520, 0x30f0540, indexKOFXISprites_BlueMary, 0x11 },
    { L"Start+C - Extra Move 3", 0x30f0540, 0x30f0560, indexKOFXISprites_BlueMary, 0x12 },
    { L"Start+C - Extra Move 4", 0x30f0560, 0x30f0580, indexKOFXISprites_BlueMary, 0x13 },
    { L"Start+C - Extra Move 5", 0x30f0580, 0x30f05a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"Start+C - Extra Move 6", 0x30f05a0, 0x30f05c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"Start+C - Extra Move 7", 0x30f05c0, 0x30f05e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"Start+C - Extra Move 8", 0x30f05e0, 0x30f0600, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_BLUEMARY_PALETTES_SD[] =
{
    { L"Blue Mary SD", 0x30f0600, 0x30f0620, indexKOFXISprites_BlueMary },
    { L"Start+D - Super Stuff 1", 0x30f0620, 0x30f0640, indexKOFXISprites_BlueMary, 0x20 },
    { L"Start+D - Electric Palette", 0x30f0640, 0x30f0660, indexKOFXISprites_BlueMary, 0x41 },
    { L"Start+D - Darker Palette", 0x30f0660, 0x30f0680, indexKOFXISprites_BlueMary, 0x40 },
    { L"Start+D - Super Stuff 2", 0x30f0680, 0x30f06a0, indexKOFXISprites_BlueMary, 0x21 },
    { L"Start+D - Character Extra 1", 0x30f06a0, 0x30f06c0, indexKOFXISprites_BlueMary, 0x30 },
    { L"Start+D - Character Extra 2", 0x30f06c0, 0x30f06e0, indexKOFXISprites_BlueMary, 0x31 },
    { L"Start+D - Character Extra 3", 0x30f06e0, 0x30f0700, indexKOFXISprites_BlueMary, 0x32 },
    { L"Start+D - Extra Move 1", 0x30f0700, 0x30f0720, indexKOFXISprites_BlueMary, 0x10 },
    { L"Start+D - Extra Move 2", 0x30f0720, 0x30f0740, indexKOFXISprites_BlueMary, 0x11 },
    { L"Start+D - Extra Move 3", 0x30f0740, 0x30f0760, indexKOFXISprites_BlueMary, 0x12 },
    { L"Start+D - Extra Move 4", 0x30f0760, 0x30f0780, indexKOFXISprites_BlueMary, 0x13 },
    { L"Start+D - Extra Move 5", 0x30f0780, 0x30f07a0, indexKOFXISprites_BlueMary, 0x14 },
    { L"Start+D - Extra Move 6", 0x30f07a0, 0x30f07c0, indexKOFXISprites_BlueMary, 0x15 },
    { L"Start+D - Extra Move 7", 0x30f07c0, 0x30f07e0, indexKOFXISprites_BlueMary, 0x16 },
    { L"Start+D - Extra Move 8", 0x30f07e0, 0x30f0800, indexKOFXISprites_BlueMary, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_A[] =
{
    { L"Ramon A", 0x3257000, 0x3257020, indexKOFXISprites_Ramon },
    { L"A - Super Stuff 1", 0x3257020, 0x3257040, indexKOFXISprites_Ramon, 0x20 },
    { L"A - Electric Palette", 0x3257040, 0x3257060, indexKOFXISprites_Ramon, 0x41 },
    { L"A - Darker Palette", 0x3257060, 0x3257080, indexKOFXISprites_Ramon, 0x40 },
    { L"A - Super Stuff 2", 0x3257080, 0x32570a0, indexKOFXISprites_Ramon, 0x21 },
    { L"A - Character Extra 1", 0x32570a0, 0x32570c0, indexKOFXISprites_Ramon, 0x30 },
    { L"A - Character Extra 2", 0x32570c0, 0x32570e0, indexKOFXISprites_Ramon, 0x31 },
    { L"A - Character Extra 3", 0x32570e0, 0x3257100, indexKOFXISprites_Ramon, 0x32 },
    { L"A - Extra Move 1", 0x3257100, 0x3257120, indexKOFXISprites_Ramon, 0x10 },
    { L"A - Extra Move 2", 0x3257120, 0x3257140, indexKOFXISprites_Ramon, 0x11 },
    { L"A - Extra Move 3", 0x3257140, 0x3257160, indexKOFXISprites_Ramon, 0x12 },
    { L"A - Extra Move 4", 0x3257160, 0x3257180, indexKOFXISprites_Ramon, 0x13 },
    { L"A - Extra Move 5", 0x3257180, 0x32571a0, indexKOFXISprites_Ramon, 0x14 },
    { L"A - Extra Move 6", 0x32571a0, 0x32571c0, indexKOFXISprites_Ramon, 0x15 },
    { L"A - Extra Move 7", 0x32571c0, 0x32571e0, indexKOFXISprites_Ramon, 0x16 },
    { L"A - Extra Move 8", 0x32571e0, 0x3257200, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_B[] =
{
    { L"Ramon B", 0x3257200, 0x3257220, indexKOFXISprites_Ramon },
    { L"B - Super Stuff 1", 0x3257220, 0x3257240, indexKOFXISprites_Ramon, 0x20 },
    { L"B - Electric Palette", 0x3257240, 0x3257260, indexKOFXISprites_Ramon, 0x41 },
    { L"B - Darker Palette", 0x3257260, 0x3257280, indexKOFXISprites_Ramon, 0x40 },
    { L"B - Super Stuff 2", 0x3257280, 0x32572a0, indexKOFXISprites_Ramon, 0x21 },
    { L"B - Character Extra 1", 0x32572a0, 0x32572c0, indexKOFXISprites_Ramon, 0x30 },
    { L"B - Character Extra 2", 0x32572c0, 0x32572e0, indexKOFXISprites_Ramon, 0x31 },
    { L"B - Character Extra 3", 0x32572e0, 0x3257300, indexKOFXISprites_Ramon, 0x32 },
    { L"B - Extra Move 1", 0x3257300, 0x3257320, indexKOFXISprites_Ramon, 0x10 },
    { L"B - Extra Move 2", 0x3257320, 0x3257340, indexKOFXISprites_Ramon, 0x11 },
    { L"B - Extra Move 3", 0x3257340, 0x3257360, indexKOFXISprites_Ramon, 0x12 },
    { L"B - Extra Move 4", 0x3257360, 0x3257380, indexKOFXISprites_Ramon, 0x13 },
    { L"B - Extra Move 5", 0x3257380, 0x32573a0, indexKOFXISprites_Ramon, 0x14 },
    { L"B - Extra Move 6", 0x32573a0, 0x32573c0, indexKOFXISprites_Ramon, 0x15 },
    { L"B - Extra Move 7", 0x32573c0, 0x32573e0, indexKOFXISprites_Ramon, 0x16 },
    { L"B - Extra Move 8", 0x32573e0, 0x3257400, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_C[] =
{
    { L"Ramon C", 0x3257400, 0x3257420, indexKOFXISprites_Ramon },
    { L"C - Super Stuff 1", 0x3257420, 0x3257440, indexKOFXISprites_Ramon, 0x20 },
    { L"C - Electric Palette", 0x3257440, 0x3257460, indexKOFXISprites_Ramon, 0x41 },
    { L"C - Darker Palette", 0x3257460, 0x3257480, indexKOFXISprites_Ramon, 0x40 },
    { L"C - Super Stuff 2", 0x3257480, 0x32574a0, indexKOFXISprites_Ramon, 0x21 },
    { L"C - Character Extra 1", 0x32574a0, 0x32574c0, indexKOFXISprites_Ramon, 0x30 },
    { L"C - Character Extra 2", 0x32574c0, 0x32574e0, indexKOFXISprites_Ramon, 0x31 },
    { L"C - Character Extra 3", 0x32574e0, 0x3257500, indexKOFXISprites_Ramon, 0x32 },
    { L"C - Extra Move 1", 0x3257500, 0x3257520, indexKOFXISprites_Ramon, 0x10 },
    { L"C - Extra Move 2", 0x3257520, 0x3257540, indexKOFXISprites_Ramon, 0x11 },
    { L"C - Extra Move 3", 0x3257540, 0x3257560, indexKOFXISprites_Ramon, 0x12 },
    { L"C - Extra Move 4", 0x3257560, 0x3257580, indexKOFXISprites_Ramon, 0x13 },
    { L"C - Extra Move 5", 0x3257580, 0x32575a0, indexKOFXISprites_Ramon, 0x14 },
    { L"C - Extra Move 6", 0x32575a0, 0x32575c0, indexKOFXISprites_Ramon, 0x15 },
    { L"C - Extra Move 7", 0x32575c0, 0x32575e0, indexKOFXISprites_Ramon, 0x16 },
    { L"C - Extra Move 8", 0x32575e0, 0x3257600, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_D[] =
{
    { L"Ramon D", 0x3257600, 0x3257620, indexKOFXISprites_Ramon },
    { L"D - Super Stuff 1", 0x3257620, 0x3257640, indexKOFXISprites_Ramon, 0x20 },
    { L"D - Electric Palette", 0x3257640, 0x3257660, indexKOFXISprites_Ramon, 0x41 },
    { L"D - Darker Palette", 0x3257660, 0x3257680, indexKOFXISprites_Ramon, 0x40 },
    { L"D - Super Stuff 2", 0x3257680, 0x32576a0, indexKOFXISprites_Ramon, 0x21 },
    { L"D - Character Extra 1", 0x32576a0, 0x32576c0, indexKOFXISprites_Ramon, 0x30 },
    { L"D - Character Extra 2", 0x32576c0, 0x32576e0, indexKOFXISprites_Ramon, 0x31 },
    { L"D - Character Extra 3", 0x32576e0, 0x3257700, indexKOFXISprites_Ramon, 0x32 },
    { L"D - Extra Move 1", 0x3257700, 0x3257720, indexKOFXISprites_Ramon, 0x10 },
    { L"D - Extra Move 2", 0x3257720, 0x3257740, indexKOFXISprites_Ramon, 0x11 },
    { L"D - Extra Move 3", 0x3257740, 0x3257760, indexKOFXISprites_Ramon, 0x12 },
    { L"D - Extra Move 4", 0x3257760, 0x3257780, indexKOFXISprites_Ramon, 0x13 },
    { L"D - Extra Move 5", 0x3257780, 0x32577a0, indexKOFXISprites_Ramon, 0x14 },
    { L"D - Extra Move 6", 0x32577a0, 0x32577c0, indexKOFXISprites_Ramon, 0x15 },
    { L"D - Extra Move 7", 0x32577c0, 0x32577e0, indexKOFXISprites_Ramon, 0x16 },
    { L"D - Extra Move 8", 0x32577e0, 0x3257800, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_EA[] =
{
    { L"Ramon EA", 0x3257800, 0x3257820, indexKOFXISprites_Ramon },
    { L"E+A - Super Stuff 1", 0x3257820, 0x3257840, indexKOFXISprites_Ramon, 0x20 },
    { L"E+A - Electric Palette", 0x3257840, 0x3257860, indexKOFXISprites_Ramon, 0x41 },
    { L"E+A - Darker Palette", 0x3257860, 0x3257880, indexKOFXISprites_Ramon, 0x40 },
    { L"E+A - Super Stuff 2", 0x3257880, 0x32578a0, indexKOFXISprites_Ramon, 0x21 },
    { L"E+A - Character Extra 1", 0x32578a0, 0x32578c0, indexKOFXISprites_Ramon, 0x30 },
    { L"E+A - Character Extra 2", 0x32578c0, 0x32578e0, indexKOFXISprites_Ramon, 0x31 },
    { L"E+A - Character Extra 3", 0x32578e0, 0x3257900, indexKOFXISprites_Ramon, 0x32 },
    { L"E+A - Extra Move 1", 0x3257900, 0x3257920, indexKOFXISprites_Ramon, 0x10 },
    { L"E+A - Extra Move 2", 0x3257920, 0x3257940, indexKOFXISprites_Ramon, 0x11 },
    { L"E+A - Extra Move 3", 0x3257940, 0x3257960, indexKOFXISprites_Ramon, 0x12 },
    { L"E+A - Extra Move 4", 0x3257960, 0x3257980, indexKOFXISprites_Ramon, 0x13 },
    { L"E+A - Extra Move 5", 0x3257980, 0x32579a0, indexKOFXISprites_Ramon, 0x14 },
    { L"E+A - Extra Move 6", 0x32579a0, 0x32579c0, indexKOFXISprites_Ramon, 0x15 },
    { L"E+A - Extra Move 7", 0x32579c0, 0x32579e0, indexKOFXISprites_Ramon, 0x16 },
    { L"E+A - Extra Move 8", 0x32579e0, 0x3257a00, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_EB[] =
{
    { L"Ramon EB", 0x3257a00, 0x3257a20, indexKOFXISprites_Ramon },
    { L"E+B - Super Stuff 1", 0x3257a20, 0x3257a40, indexKOFXISprites_Ramon, 0x20 },
    { L"E+B - Electric Palette", 0x3257a40, 0x3257a60, indexKOFXISprites_Ramon, 0x41 },
    { L"E+B - Darker Palette", 0x3257a60, 0x3257a80, indexKOFXISprites_Ramon, 0x40 },
    { L"E+B - Super Stuff 2", 0x3257a80, 0x3257aa0, indexKOFXISprites_Ramon, 0x21 },
    { L"E+B - Character Extra 1", 0x3257aa0, 0x3257ac0, indexKOFXISprites_Ramon, 0x30 },
    { L"E+B - Character Extra 2", 0x3257ac0, 0x3257ae0, indexKOFXISprites_Ramon, 0x31 },
    { L"E+B - Character Extra 3", 0x3257ae0, 0x3257b00, indexKOFXISprites_Ramon, 0x32 },
    { L"E+B - Extra Move 1", 0x3257b00, 0x3257b20, indexKOFXISprites_Ramon, 0x10 },
    { L"E+B - Extra Move 2", 0x3257b20, 0x3257b40, indexKOFXISprites_Ramon, 0x11 },
    { L"E+B - Extra Move 3", 0x3257b40, 0x3257b60, indexKOFXISprites_Ramon, 0x12 },
    { L"E+B - Extra Move 4", 0x3257b60, 0x3257b80, indexKOFXISprites_Ramon, 0x13 },
    { L"E+B - Extra Move 5", 0x3257b80, 0x3257ba0, indexKOFXISprites_Ramon, 0x14 },
    { L"E+B - Extra Move 6", 0x3257ba0, 0x3257bc0, indexKOFXISprites_Ramon, 0x15 },
    { L"E+B - Extra Move 7", 0x3257bc0, 0x3257be0, indexKOFXISprites_Ramon, 0x16 },
    { L"E+B - Extra Move 8", 0x3257be0, 0x3257c00, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_EC[] =
{
    { L"Ramon EC", 0x3257c00, 0x3257c20, indexKOFXISprites_Ramon },
    { L"E+C - Super Stuff 1", 0x3257c20, 0x3257c40, indexKOFXISprites_Ramon, 0x20 },
    { L"E+C - Electric Palette", 0x3257c40, 0x3257c60, indexKOFXISprites_Ramon, 0x41 },
    { L"E+C - Darker Palette", 0x3257c60, 0x3257c80, indexKOFXISprites_Ramon, 0x40 },
    { L"E+C - Super Stuff 2", 0x3257c80, 0x3257ca0, indexKOFXISprites_Ramon, 0x21 },
    { L"E+C - Character Extra 1", 0x3257ca0, 0x3257cc0, indexKOFXISprites_Ramon, 0x30 },
    { L"E+C - Character Extra 2", 0x3257cc0, 0x3257ce0, indexKOFXISprites_Ramon, 0x31 },
    { L"E+C - Character Extra 3", 0x3257ce0, 0x3257d00, indexKOFXISprites_Ramon, 0x32 },
    { L"E+C - Extra Move 1", 0x3257d00, 0x3257d20, indexKOFXISprites_Ramon, 0x10 },
    { L"E+C - Extra Move 2", 0x3257d20, 0x3257d40, indexKOFXISprites_Ramon, 0x11 },
    { L"E+C - Extra Move 3", 0x3257d40, 0x3257d60, indexKOFXISprites_Ramon, 0x12 },
    { L"E+C - Extra Move 4", 0x3257d60, 0x3257d80, indexKOFXISprites_Ramon, 0x13 },
    { L"E+C - Extra Move 5", 0x3257d80, 0x3257da0, indexKOFXISprites_Ramon, 0x14 },
    { L"E+C - Extra Move 6", 0x3257da0, 0x3257dc0, indexKOFXISprites_Ramon, 0x15 },
    { L"E+C - Extra Move 7", 0x3257dc0, 0x3257de0, indexKOFXISprites_Ramon, 0x16 },
    { L"E+C - Extra Move 8", 0x3257de0, 0x3257e00, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_ED[] =
{
    { L"Ramon ED", 0x3257e00, 0x3257e20, indexKOFXISprites_Ramon },
    { L"E+D - Super Stuff 1", 0x3257e20, 0x3257e40, indexKOFXISprites_Ramon, 0x20 },
    { L"E+D - Electric Palette", 0x3257e40, 0x3257e60, indexKOFXISprites_Ramon, 0x41 },
    { L"E+D - Darker Palette", 0x3257e60, 0x3257e80, indexKOFXISprites_Ramon, 0x40 },
    { L"E+D - Super Stuff 2", 0x3257e80, 0x3257ea0, indexKOFXISprites_Ramon, 0x21 },
    { L"E+D - Character Extra 1", 0x3257ea0, 0x3257ec0, indexKOFXISprites_Ramon, 0x30 },
    { L"E+D - Character Extra 2", 0x3257ec0, 0x3257ee0, indexKOFXISprites_Ramon, 0x31 },
    { L"E+D - Character Extra 3", 0x3257ee0, 0x3257f00, indexKOFXISprites_Ramon, 0x32 },
    { L"E+D - Extra Move 1", 0x3257f00, 0x3257f20, indexKOFXISprites_Ramon, 0x10 },
    { L"E+D - Extra Move 2", 0x3257f20, 0x3257f40, indexKOFXISprites_Ramon, 0x11 },
    { L"E+D - Extra Move 3", 0x3257f40, 0x3257f60, indexKOFXISprites_Ramon, 0x12 },
    { L"E+D - Extra Move 4", 0x3257f60, 0x3257f80, indexKOFXISprites_Ramon, 0x13 },
    { L"E+D - Extra Move 5", 0x3257f80, 0x3257fa0, indexKOFXISprites_Ramon, 0x14 },
    { L"E+D - Extra Move 6", 0x3257fa0, 0x3257fc0, indexKOFXISprites_Ramon, 0x15 },
    { L"E+D - Extra Move 7", 0x3257fc0, 0x3257fe0, indexKOFXISprites_Ramon, 0x16 },
    { L"E+D - Extra Move 8", 0x3257fe0, 0x3258000, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_SA[] =
{
    { L"Ramon SA", 0x3258000, 0x3258020, indexKOFXISprites_Ramon },
    { L"Start+A - Super Stuff 1", 0x3258020, 0x3258040, indexKOFXISprites_Ramon, 0x20 },
    { L"Start+A - Electric Palette", 0x3258040, 0x3258060, indexKOFXISprites_Ramon, 0x41 },
    { L"Start+A - Darker Palette", 0x3258060, 0x3258080, indexKOFXISprites_Ramon, 0x40 },
    { L"Start+A - Super Stuff 2", 0x3258080, 0x32580a0, indexKOFXISprites_Ramon, 0x21 },
    { L"Start+A - Character Extra 1", 0x32580a0, 0x32580c0, indexKOFXISprites_Ramon, 0x30 },
    { L"Start+A - Character Extra 2", 0x32580c0, 0x32580e0, indexKOFXISprites_Ramon, 0x31 },
    { L"Start+A - Character Extra 3", 0x32580e0, 0x3258100, indexKOFXISprites_Ramon, 0x32 },
    { L"Start+A - Extra Move 1", 0x3258100, 0x3258120, indexKOFXISprites_Ramon, 0x10 },
    { L"Start+A - Extra Move 2", 0x3258120, 0x3258140, indexKOFXISprites_Ramon, 0x11 },
    { L"Start+A - Extra Move 3", 0x3258140, 0x3258160, indexKOFXISprites_Ramon, 0x12 },
    { L"Start+A - Extra Move 4", 0x3258160, 0x3258180, indexKOFXISprites_Ramon, 0x13 },
    { L"Start+A - Extra Move 5", 0x3258180, 0x32581a0, indexKOFXISprites_Ramon, 0x14 },
    { L"Start+A - Extra Move 6", 0x32581a0, 0x32581c0, indexKOFXISprites_Ramon, 0x15 },
    { L"Start+A - Extra Move 7", 0x32581c0, 0x32581e0, indexKOFXISprites_Ramon, 0x16 },
    { L"Start+A - Extra Move 8", 0x32581e0, 0x3258200, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_SB[] =
{
    { L"Ramon SB", 0x3258200, 0x3258220, indexKOFXISprites_Ramon },
    { L"Start+B - Super Stuff 1", 0x3258220, 0x3258240, indexKOFXISprites_Ramon, 0x20 },
    { L"Start+B - Electric Palette", 0x3258240, 0x3258260, indexKOFXISprites_Ramon, 0x41 },
    { L"Start+B - Darker Palette", 0x3258260, 0x3258280, indexKOFXISprites_Ramon, 0x40 },
    { L"Start+B - Super Stuff 2", 0x3258280, 0x32582a0, indexKOFXISprites_Ramon, 0x21 },
    { L"Start+B - Character Extra 1", 0x32582a0, 0x32582c0, indexKOFXISprites_Ramon, 0x30 },
    { L"Start+B - Character Extra 2", 0x32582c0, 0x32582e0, indexKOFXISprites_Ramon, 0x31 },
    { L"Start+B - Character Extra 3", 0x32582e0, 0x3258300, indexKOFXISprites_Ramon, 0x32 },
    { L"Start+B - Extra Move 1", 0x3258300, 0x3258320, indexKOFXISprites_Ramon, 0x10 },
    { L"Start+B - Extra Move 2", 0x3258320, 0x3258340, indexKOFXISprites_Ramon, 0x11 },
    { L"Start+B - Extra Move 3", 0x3258340, 0x3258360, indexKOFXISprites_Ramon, 0x12 },
    { L"Start+B - Extra Move 4", 0x3258360, 0x3258380, indexKOFXISprites_Ramon, 0x13 },
    { L"Start+B - Extra Move 5", 0x3258380, 0x32583a0, indexKOFXISprites_Ramon, 0x14 },
    { L"Start+B - Extra Move 6", 0x32583a0, 0x32583c0, indexKOFXISprites_Ramon, 0x15 },
    { L"Start+B - Extra Move 7", 0x32583c0, 0x32583e0, indexKOFXISprites_Ramon, 0x16 },
    { L"Start+B - Extra Move 8", 0x32583e0, 0x3258400, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_SC[] =
{
    { L"Ramon SC", 0x3258400, 0x3258420, indexKOFXISprites_Ramon },
    { L"Start+C - Super Stuff 1", 0x3258420, 0x3258440, indexKOFXISprites_Ramon, 0x20 },
    { L"Start+C - Electric Palette", 0x3258440, 0x3258460, indexKOFXISprites_Ramon, 0x41 },
    { L"Start+C - Darker Palette", 0x3258460, 0x3258480, indexKOFXISprites_Ramon, 0x40 },
    { L"Start+C - Super Stuff 2", 0x3258480, 0x32584a0, indexKOFXISprites_Ramon, 0x21 },
    { L"Start+C - Character Extra 1", 0x32584a0, 0x32584c0, indexKOFXISprites_Ramon, 0x30 },
    { L"Start+C - Character Extra 2", 0x32584c0, 0x32584e0, indexKOFXISprites_Ramon, 0x31 },
    { L"Start+C - Character Extra 3", 0x32584e0, 0x3258500, indexKOFXISprites_Ramon, 0x32 },
    { L"Start+C - Extra Move 1", 0x3258500, 0x3258520, indexKOFXISprites_Ramon, 0x10 },
    { L"Start+C - Extra Move 2", 0x3258520, 0x3258540, indexKOFXISprites_Ramon, 0x11 },
    { L"Start+C - Extra Move 3", 0x3258540, 0x3258560, indexKOFXISprites_Ramon, 0x12 },
    { L"Start+C - Extra Move 4", 0x3258560, 0x3258580, indexKOFXISprites_Ramon, 0x13 },
    { L"Start+C - Extra Move 5", 0x3258580, 0x32585a0, indexKOFXISprites_Ramon, 0x14 },
    { L"Start+C - Extra Move 6", 0x32585a0, 0x32585c0, indexKOFXISprites_Ramon, 0x15 },
    { L"Start+C - Extra Move 7", 0x32585c0, 0x32585e0, indexKOFXISprites_Ramon, 0x16 },
    { L"Start+C - Extra Move 8", 0x32585e0, 0x3258600, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_RAMON_PALETTES_SD[] =
{
    { L"Ramon SD", 0x3258600, 0x3258620, indexKOFXISprites_Ramon },
    { L"Start+D - Super Stuff 1", 0x3258620, 0x3258640, indexKOFXISprites_Ramon, 0x20 },
    { L"Start+D - Electric Palette", 0x3258640, 0x3258660, indexKOFXISprites_Ramon, 0x41 },
    { L"Start+D - Darker Palette", 0x3258660, 0x3258680, indexKOFXISprites_Ramon, 0x40 },
    { L"Start+D - Super Stuff 2", 0x3258680, 0x32586a0, indexKOFXISprites_Ramon, 0x21 },
    { L"Start+D - Character Extra 1", 0x32586a0, 0x32586c0, indexKOFXISprites_Ramon, 0x30 },
    { L"Start+D - Character Extra 2", 0x32586c0, 0x32586e0, indexKOFXISprites_Ramon, 0x31 },
    { L"Start+D - Character Extra 3", 0x32586e0, 0x3258700, indexKOFXISprites_Ramon, 0x32 },
    { L"Start+D - Extra Move 1", 0x3258700, 0x3258720, indexKOFXISprites_Ramon, 0x10 },
    { L"Start+D - Extra Move 2", 0x3258720, 0x3258740, indexKOFXISprites_Ramon, 0x11 },
    { L"Start+D - Extra Move 3", 0x3258740, 0x3258760, indexKOFXISprites_Ramon, 0x12 },
    { L"Start+D - Extra Move 4", 0x3258760, 0x3258780, indexKOFXISprites_Ramon, 0x13 },
    { L"Start+D - Extra Move 5", 0x3258780, 0x32587a0, indexKOFXISprites_Ramon, 0x14 },
    { L"Start+D - Extra Move 6", 0x32587a0, 0x32587c0, indexKOFXISprites_Ramon, 0x15 },
    { L"Start+D - Extra Move 7", 0x32587c0, 0x32587e0, indexKOFXISprites_Ramon, 0x16 },
    { L"Start+D - Extra Move 8", 0x32587e0, 0x3258800, indexKOFXISprites_Ramon, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_A[] =
{
    { L"Malin A", 0x33b3800, 0x33b3820, indexKOFXISprites_Malin },
    { L"A - Super Stuff 1", 0x33b3820, 0x33b3840, indexKOFXISprites_Malin, 0x20 },
    { L"A - Electric Palette", 0x33b3840, 0x33b3860, indexKOFXISprites_Malin, 0x41 },
    { L"A - Darker Palette", 0x33b3860, 0x33b3880, indexKOFXISprites_Malin, 0x40 },
    { L"A - Super Stuff 2", 0x33b3880, 0x33b38a0, indexKOFXISprites_Malin, 0x21 },
    { L"A - Character Extra 1", 0x33b38a0, 0x33b38c0, indexKOFXISprites_Malin, 0x30 },
    { L"A - Character Extra 2", 0x33b38c0, 0x33b38e0, indexKOFXISprites_Malin, 0x31 },
    { L"A - Character Extra 3", 0x33b38e0, 0x33b3900, indexKOFXISprites_Malin, 0x32 },
    { L"A - Extra Move 1", 0x33b3900, 0x33b3920, indexKOFXISprites_Malin, 0x10 },
    { L"A - Extra Move 2", 0x33b3920, 0x33b3940, indexKOFXISprites_Malin, 0x11 },
    { L"A - Extra Move 3", 0x33b3940, 0x33b3960, indexKOFXISprites_Malin, 0x12 },
    { L"A - Extra Move 4", 0x33b3960, 0x33b3980, indexKOFXISprites_Malin, 0x13 },
    { L"A - Extra Move 5", 0x33b3980, 0x33b39a0, indexKOFXISprites_Malin, 0x14 },
    { L"A - Extra Move 6", 0x33b39a0, 0x33b39c0, indexKOFXISprites_Malin, 0x15 },
    { L"A - Extra Move 7", 0x33b39c0, 0x33b39e0, indexKOFXISprites_Malin, 0x16 },
    { L"A - Extra Move 8", 0x33b39e0, 0x33b3a00, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_B[] =
{
    { L"Malin B", 0x33b3a00, 0x33b3a20, indexKOFXISprites_Malin },
    { L"B - Super Stuff 1", 0x33b3a20, 0x33b3a40, indexKOFXISprites_Malin, 0x20 },
    { L"B - Electric Palette", 0x33b3a40, 0x33b3a60, indexKOFXISprites_Malin, 0x41 },
    { L"B - Darker Palette", 0x33b3a60, 0x33b3a80, indexKOFXISprites_Malin, 0x40 },
    { L"B - Super Stuff 2", 0x33b3a80, 0x33b3aa0, indexKOFXISprites_Malin, 0x21 },
    { L"B - Character Extra 1", 0x33b3aa0, 0x33b3ac0, indexKOFXISprites_Malin, 0x30 },
    { L"B - Character Extra 2", 0x33b3ac0, 0x33b3ae0, indexKOFXISprites_Malin, 0x31 },
    { L"B - Character Extra 3", 0x33b3ae0, 0x33b3b00, indexKOFXISprites_Malin, 0x32 },
    { L"B - Extra Move 1", 0x33b3b00, 0x33b3b20, indexKOFXISprites_Malin, 0x10 },
    { L"B - Extra Move 2", 0x33b3b20, 0x33b3b40, indexKOFXISprites_Malin, 0x11 },
    { L"B - Extra Move 3", 0x33b3b40, 0x33b3b60, indexKOFXISprites_Malin, 0x12 },
    { L"B - Extra Move 4", 0x33b3b60, 0x33b3b80, indexKOFXISprites_Malin, 0x13 },
    { L"B - Extra Move 5", 0x33b3b80, 0x33b3ba0, indexKOFXISprites_Malin, 0x14 },
    { L"B - Extra Move 6", 0x33b3ba0, 0x33b3bc0, indexKOFXISprites_Malin, 0x15 },
    { L"B - Extra Move 7", 0x33b3bc0, 0x33b3be0, indexKOFXISprites_Malin, 0x16 },
    { L"B - Extra Move 8", 0x33b3be0, 0x33b3c00, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_C[] =
{
    { L"Malin C", 0x33b3c00, 0x33b3c20, indexKOFXISprites_Malin },
    { L"C - Super Stuff 1", 0x33b3c20, 0x33b3c40, indexKOFXISprites_Malin, 0x20 },
    { L"C - Electric Palette", 0x33b3c40, 0x33b3c60, indexKOFXISprites_Malin, 0x41 },
    { L"C - Darker Palette", 0x33b3c60, 0x33b3c80, indexKOFXISprites_Malin, 0x40 },
    { L"C - Super Stuff 2", 0x33b3c80, 0x33b3ca0, indexKOFXISprites_Malin, 0x21 },
    { L"C - Character Extra 1", 0x33b3ca0, 0x33b3cc0, indexKOFXISprites_Malin, 0x30 },
    { L"C - Character Extra 2", 0x33b3cc0, 0x33b3ce0, indexKOFXISprites_Malin, 0x31 },
    { L"C - Character Extra 3", 0x33b3ce0, 0x33b3d00, indexKOFXISprites_Malin, 0x32 },
    { L"C - Extra Move 1", 0x33b3d00, 0x33b3d20, indexKOFXISprites_Malin, 0x10 },
    { L"C - Extra Move 2", 0x33b3d20, 0x33b3d40, indexKOFXISprites_Malin, 0x11 },
    { L"C - Extra Move 3", 0x33b3d40, 0x33b3d60, indexKOFXISprites_Malin, 0x12 },
    { L"C - Extra Move 4", 0x33b3d60, 0x33b3d80, indexKOFXISprites_Malin, 0x13 },
    { L"C - Extra Move 5", 0x33b3d80, 0x33b3da0, indexKOFXISprites_Malin, 0x14 },
    { L"C - Extra Move 6", 0x33b3da0, 0x33b3dc0, indexKOFXISprites_Malin, 0x15 },
    { L"C - Extra Move 7", 0x33b3dc0, 0x33b3de0, indexKOFXISprites_Malin, 0x16 },
    { L"C - Extra Move 8", 0x33b3de0, 0x33b3e00, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_D[] =
{
    { L"Malin D", 0x33b3e00, 0x33b3e20, indexKOFXISprites_Malin },
    { L"D - Super Stuff 1", 0x33b3e20, 0x33b3e40, indexKOFXISprites_Malin, 0x20 },
    { L"D - Electric Palette", 0x33b3e40, 0x33b3e60, indexKOFXISprites_Malin, 0x41 },
    { L"D - Darker Palette", 0x33b3e60, 0x33b3e80, indexKOFXISprites_Malin, 0x40 },
    { L"D - Super Stuff 2", 0x33b3e80, 0x33b3ea0, indexKOFXISprites_Malin, 0x21 },
    { L"D - Character Extra 1", 0x33b3ea0, 0x33b3ec0, indexKOFXISprites_Malin, 0x30 },
    { L"D - Character Extra 2", 0x33b3ec0, 0x33b3ee0, indexKOFXISprites_Malin, 0x31 },
    { L"D - Character Extra 3", 0x33b3ee0, 0x33b3f00, indexKOFXISprites_Malin, 0x32 },
    { L"D - Extra Move 1", 0x33b3f00, 0x33b3f20, indexKOFXISprites_Malin, 0x10 },
    { L"D - Extra Move 2", 0x33b3f20, 0x33b3f40, indexKOFXISprites_Malin, 0x11 },
    { L"D - Extra Move 3", 0x33b3f40, 0x33b3f60, indexKOFXISprites_Malin, 0x12 },
    { L"D - Extra Move 4", 0x33b3f60, 0x33b3f80, indexKOFXISprites_Malin, 0x13 },
    { L"D - Extra Move 5", 0x33b3f80, 0x33b3fa0, indexKOFXISprites_Malin, 0x14 },
    { L"D - Extra Move 6", 0x33b3fa0, 0x33b3fc0, indexKOFXISprites_Malin, 0x15 },
    { L"D - Extra Move 7", 0x33b3fc0, 0x33b3fe0, indexKOFXISprites_Malin, 0x16 },
    { L"D - Extra Move 8", 0x33b3fe0, 0x33b4000, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_EA[] =
{
    { L"Malin EA", 0x33b4000, 0x33b4020, indexKOFXISprites_Malin },
    { L"E+A - Super Stuff 1", 0x33b4020, 0x33b4040, indexKOFXISprites_Malin, 0x20 },
    { L"E+A - Electric Palette", 0x33b4040, 0x33b4060, indexKOFXISprites_Malin, 0x41 },
    { L"E+A - Darker Palette", 0x33b4060, 0x33b4080, indexKOFXISprites_Malin, 0x40 },
    { L"E+A - Super Stuff 2", 0x33b4080, 0x33b40a0, indexKOFXISprites_Malin, 0x21 },
    { L"E+A - Character Extra 1", 0x33b40a0, 0x33b40c0, indexKOFXISprites_Malin, 0x30 },
    { L"E+A - Character Extra 2", 0x33b40c0, 0x33b40e0, indexKOFXISprites_Malin, 0x31 },
    { L"E+A - Character Extra 3", 0x33b40e0, 0x33b4100, indexKOFXISprites_Malin, 0x32 },
    { L"E+A - Extra Move 1", 0x33b4100, 0x33b4120, indexKOFXISprites_Malin, 0x10 },
    { L"E+A - Extra Move 2", 0x33b4120, 0x33b4140, indexKOFXISprites_Malin, 0x11 },
    { L"E+A - Extra Move 3", 0x33b4140, 0x33b4160, indexKOFXISprites_Malin, 0x12 },
    { L"E+A - Extra Move 4", 0x33b4160, 0x33b4180, indexKOFXISprites_Malin, 0x13 },
    { L"E+A - Extra Move 5", 0x33b4180, 0x33b41a0, indexKOFXISprites_Malin, 0x14 },
    { L"E+A - Extra Move 6", 0x33b41a0, 0x33b41c0, indexKOFXISprites_Malin, 0x15 },
    { L"E+A - Extra Move 7", 0x33b41c0, 0x33b41e0, indexKOFXISprites_Malin, 0x16 },
    { L"E+A - Extra Move 8", 0x33b41e0, 0x33b4200, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_EB[] =
{
    { L"Malin EB", 0x33b4200, 0x33b4220, indexKOFXISprites_Malin },
    { L"E+B - Super Stuff 1", 0x33b4220, 0x33b4240, indexKOFXISprites_Malin, 0x20 },
    { L"E+B - Electric Palette", 0x33b4240, 0x33b4260, indexKOFXISprites_Malin, 0x41 },
    { L"E+B - Darker Palette", 0x33b4260, 0x33b4280, indexKOFXISprites_Malin, 0x40 },
    { L"E+B - Super Stuff 2", 0x33b4280, 0x33b42a0, indexKOFXISprites_Malin, 0x21 },
    { L"E+B - Character Extra 1", 0x33b42a0, 0x33b42c0, indexKOFXISprites_Malin, 0x30 },
    { L"E+B - Character Extra 2", 0x33b42c0, 0x33b42e0, indexKOFXISprites_Malin, 0x31 },
    { L"E+B - Character Extra 3", 0x33b42e0, 0x33b4300, indexKOFXISprites_Malin, 0x32 },
    { L"E+B - Extra Move 1", 0x33b4300, 0x33b4320, indexKOFXISprites_Malin, 0x10 },
    { L"E+B - Extra Move 2", 0x33b4320, 0x33b4340, indexKOFXISprites_Malin, 0x11 },
    { L"E+B - Extra Move 3", 0x33b4340, 0x33b4360, indexKOFXISprites_Malin, 0x12 },
    { L"E+B - Extra Move 4", 0x33b4360, 0x33b4380, indexKOFXISprites_Malin, 0x13 },
    { L"E+B - Extra Move 5", 0x33b4380, 0x33b43a0, indexKOFXISprites_Malin, 0x14 },
    { L"E+B - Extra Move 6", 0x33b43a0, 0x33b43c0, indexKOFXISprites_Malin, 0x15 },
    { L"E+B - Extra Move 7", 0x33b43c0, 0x33b43e0, indexKOFXISprites_Malin, 0x16 },
    { L"E+B - Extra Move 8", 0x33b43e0, 0x33b4400, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_EC[] =
{
    { L"Malin EC", 0x33b4400, 0x33b4420, indexKOFXISprites_Malin },
    { L"E+C - Super Stuff 1", 0x33b4420, 0x33b4440, indexKOFXISprites_Malin, 0x20 },
    { L"E+C - Electric Palette", 0x33b4440, 0x33b4460, indexKOFXISprites_Malin, 0x41 },
    { L"E+C - Darker Palette", 0x33b4460, 0x33b4480, indexKOFXISprites_Malin, 0x40 },
    { L"E+C - Super Stuff 2", 0x33b4480, 0x33b44a0, indexKOFXISprites_Malin, 0x21 },
    { L"E+C - Character Extra 1", 0x33b44a0, 0x33b44c0, indexKOFXISprites_Malin, 0x30 },
    { L"E+C - Character Extra 2", 0x33b44c0, 0x33b44e0, indexKOFXISprites_Malin, 0x31 },
    { L"E+C - Character Extra 3", 0x33b44e0, 0x33b4500, indexKOFXISprites_Malin, 0x32 },
    { L"E+C - Extra Move 1", 0x33b4500, 0x33b4520, indexKOFXISprites_Malin, 0x10 },
    { L"E+C - Extra Move 2", 0x33b4520, 0x33b4540, indexKOFXISprites_Malin, 0x11 },
    { L"E+C - Extra Move 3", 0x33b4540, 0x33b4560, indexKOFXISprites_Malin, 0x12 },
    { L"E+C - Extra Move 4", 0x33b4560, 0x33b4580, indexKOFXISprites_Malin, 0x13 },
    { L"E+C - Extra Move 5", 0x33b4580, 0x33b45a0, indexKOFXISprites_Malin, 0x14 },
    { L"E+C - Extra Move 6", 0x33b45a0, 0x33b45c0, indexKOFXISprites_Malin, 0x15 },
    { L"E+C - Extra Move 7", 0x33b45c0, 0x33b45e0, indexKOFXISprites_Malin, 0x16 },
    { L"E+C - Extra Move 8", 0x33b45e0, 0x33b4600, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_ED[] =
{
    { L"Malin ED", 0x33b4600, 0x33b4620, indexKOFXISprites_Malin },
    { L"E+D - Super Stuff 1", 0x33b4620, 0x33b4640, indexKOFXISprites_Malin, 0x20 },
    { L"E+D - Electric Palette", 0x33b4640, 0x33b4660, indexKOFXISprites_Malin, 0x41 },
    { L"E+D - Darker Palette", 0x33b4660, 0x33b4680, indexKOFXISprites_Malin, 0x40 },
    { L"E+D - Super Stuff 2", 0x33b4680, 0x33b46a0, indexKOFXISprites_Malin, 0x21 },
    { L"E+D - Character Extra 1", 0x33b46a0, 0x33b46c0, indexKOFXISprites_Malin, 0x30 },
    { L"E+D - Character Extra 2", 0x33b46c0, 0x33b46e0, indexKOFXISprites_Malin, 0x31 },
    { L"E+D - Character Extra 3", 0x33b46e0, 0x33b4700, indexKOFXISprites_Malin, 0x32 },
    { L"E+D - Extra Move 1", 0x33b4700, 0x33b4720, indexKOFXISprites_Malin, 0x10 },
    { L"E+D - Extra Move 2", 0x33b4720, 0x33b4740, indexKOFXISprites_Malin, 0x11 },
    { L"E+D - Extra Move 3", 0x33b4740, 0x33b4760, indexKOFXISprites_Malin, 0x12 },
    { L"E+D - Extra Move 4", 0x33b4760, 0x33b4780, indexKOFXISprites_Malin, 0x13 },
    { L"E+D - Extra Move 5", 0x33b4780, 0x33b47a0, indexKOFXISprites_Malin, 0x14 },
    { L"E+D - Extra Move 6", 0x33b47a0, 0x33b47c0, indexKOFXISprites_Malin, 0x15 },
    { L"E+D - Extra Move 7", 0x33b47c0, 0x33b47e0, indexKOFXISprites_Malin, 0x16 },
    { L"E+D - Extra Move 8", 0x33b47e0, 0x33b4800, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_SA[] =
{
    { L"Malin SA", 0x33b4800, 0x33b4820, indexKOFXISprites_Malin },
    { L"Start+A - Super Stuff 1", 0x33b4820, 0x33b4840, indexKOFXISprites_Malin, 0x20 },
    { L"Start+A - Electric Palette", 0x33b4840, 0x33b4860, indexKOFXISprites_Malin, 0x41 },
    { L"Start+A - Darker Palette", 0x33b4860, 0x33b4880, indexKOFXISprites_Malin, 0x40 },
    { L"Start+A - Super Stuff 2", 0x33b4880, 0x33b48a0, indexKOFXISprites_Malin, 0x21 },
    { L"Start+A - Character Extra 1", 0x33b48a0, 0x33b48c0, indexKOFXISprites_Malin, 0x30 },
    { L"Start+A - Character Extra 2", 0x33b48c0, 0x33b48e0, indexKOFXISprites_Malin, 0x31 },
    { L"Start+A - Character Extra 3", 0x33b48e0, 0x33b4900, indexKOFXISprites_Malin, 0x32 },
    { L"Start+A - Extra Move 1", 0x33b4900, 0x33b4920, indexKOFXISprites_Malin, 0x10 },
    { L"Start+A - Extra Move 2", 0x33b4920, 0x33b4940, indexKOFXISprites_Malin, 0x11 },
    { L"Start+A - Extra Move 3", 0x33b4940, 0x33b4960, indexKOFXISprites_Malin, 0x12 },
    { L"Start+A - Extra Move 4", 0x33b4960, 0x33b4980, indexKOFXISprites_Malin, 0x13 },
    { L"Start+A - Extra Move 5", 0x33b4980, 0x33b49a0, indexKOFXISprites_Malin, 0x14 },
    { L"Start+A - Extra Move 6", 0x33b49a0, 0x33b49c0, indexKOFXISprites_Malin, 0x15 },
    { L"Start+A - Extra Move 7", 0x33b49c0, 0x33b49e0, indexKOFXISprites_Malin, 0x16 },
    { L"Start+A - Extra Move 8", 0x33b49e0, 0x33b4a00, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_SB[] =
{
    { L"Malin SB", 0x33b4a00, 0x33b4a20, indexKOFXISprites_Malin },
    { L"Start+B - Super Stuff 1", 0x33b4a20, 0x33b4a40, indexKOFXISprites_Malin, 0x20 },
    { L"Start+B - Electric Palette", 0x33b4a40, 0x33b4a60, indexKOFXISprites_Malin, 0x41 },
    { L"Start+B - Darker Palette", 0x33b4a60, 0x33b4a80, indexKOFXISprites_Malin, 0x40 },
    { L"Start+B - Super Stuff 2", 0x33b4a80, 0x33b4aa0, indexKOFXISprites_Malin, 0x21 },
    { L"Start+B - Character Extra 1", 0x33b4aa0, 0x33b4ac0, indexKOFXISprites_Malin, 0x30 },
    { L"Start+B - Character Extra 2", 0x33b4ac0, 0x33b4ae0, indexKOFXISprites_Malin, 0x31 },
    { L"Start+B - Character Extra 3", 0x33b4ae0, 0x33b4b00, indexKOFXISprites_Malin, 0x32 },
    { L"Start+B - Extra Move 1", 0x33b4b00, 0x33b4b20, indexKOFXISprites_Malin, 0x10 },
    { L"Start+B - Extra Move 2", 0x33b4b20, 0x33b4b40, indexKOFXISprites_Malin, 0x11 },
    { L"Start+B - Extra Move 3", 0x33b4b40, 0x33b4b60, indexKOFXISprites_Malin, 0x12 },
    { L"Start+B - Extra Move 4", 0x33b4b60, 0x33b4b80, indexKOFXISprites_Malin, 0x13 },
    { L"Start+B - Extra Move 5", 0x33b4b80, 0x33b4ba0, indexKOFXISprites_Malin, 0x14 },
    { L"Start+B - Extra Move 6", 0x33b4ba0, 0x33b4bc0, indexKOFXISprites_Malin, 0x15 },
    { L"Start+B - Extra Move 7", 0x33b4bc0, 0x33b4be0, indexKOFXISprites_Malin, 0x16 },
    { L"Start+B - Extra Move 8", 0x33b4be0, 0x33b4c00, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_SC[] =
{
    { L"Malin SC", 0x33b4c00, 0x33b4c20, indexKOFXISprites_Malin },
    { L"Start+C - Super Stuff 1", 0x33b4c20, 0x33b4c40, indexKOFXISprites_Malin, 0x20 },
    { L"Start+C - Electric Palette", 0x33b4c40, 0x33b4c60, indexKOFXISprites_Malin, 0x41 },
    { L"Start+C - Darker Palette", 0x33b4c60, 0x33b4c80, indexKOFXISprites_Malin, 0x40 },
    { L"Start+C - Super Stuff 2", 0x33b4c80, 0x33b4ca0, indexKOFXISprites_Malin, 0x21 },
    { L"Start+C - Character Extra 1", 0x33b4ca0, 0x33b4cc0, indexKOFXISprites_Malin, 0x30 },
    { L"Start+C - Character Extra 2", 0x33b4cc0, 0x33b4ce0, indexKOFXISprites_Malin, 0x31 },
    { L"Start+C - Character Extra 3", 0x33b4ce0, 0x33b4d00, indexKOFXISprites_Malin, 0x32 },
    { L"Start+C - Extra Move 1", 0x33b4d00, 0x33b4d20, indexKOFXISprites_Malin, 0x10 },
    { L"Start+C - Extra Move 2", 0x33b4d20, 0x33b4d40, indexKOFXISprites_Malin, 0x11 },
    { L"Start+C - Extra Move 3", 0x33b4d40, 0x33b4d60, indexKOFXISprites_Malin, 0x12 },
    { L"Start+C - Extra Move 4", 0x33b4d60, 0x33b4d80, indexKOFXISprites_Malin, 0x13 },
    { L"Start+C - Extra Move 5", 0x33b4d80, 0x33b4da0, indexKOFXISprites_Malin, 0x14 },
    { L"Start+C - Extra Move 6", 0x33b4da0, 0x33b4dc0, indexKOFXISprites_Malin, 0x15 },
    { L"Start+C - Extra Move 7", 0x33b4dc0, 0x33b4de0, indexKOFXISprites_Malin, 0x16 },
    { L"Start+C - Extra Move 8", 0x33b4de0, 0x33b4e00, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MALIN_PALETTES_SD[] =
{
    { L"Malin SD", 0x33b4e00, 0x33b4e20, indexKOFXISprites_Malin },
    { L"Start+D - Super Stuff 1", 0x33b4e20, 0x33b4e40, indexKOFXISprites_Malin, 0x20 },
    { L"Start+D - Electric Palette", 0x33b4e40, 0x33b4e60, indexKOFXISprites_Malin, 0x41 },
    { L"Start+D - Darker Palette", 0x33b4e60, 0x33b4e80, indexKOFXISprites_Malin, 0x40 },
    { L"Start+D - Super Stuff 2", 0x33b4e80, 0x33b4ea0, indexKOFXISprites_Malin, 0x21 },
    { L"Start+D - Character Extra 1", 0x33b4ea0, 0x33b4ec0, indexKOFXISprites_Malin, 0x30 },
    { L"Start+D - Character Extra 2", 0x33b4ec0, 0x33b4ee0, indexKOFXISprites_Malin, 0x31 },
    { L"Start+D - Character Extra 3", 0x33b4ee0, 0x33b4f00, indexKOFXISprites_Malin, 0x32 },
    { L"Start+D - Extra Move 1", 0x33b4f00, 0x33b4f20, indexKOFXISprites_Malin, 0x10 },
    { L"Start+D - Extra Move 2", 0x33b4f20, 0x33b4f40, indexKOFXISprites_Malin, 0x11 },
    { L"Start+D - Extra Move 3", 0x33b4f40, 0x33b4f60, indexKOFXISprites_Malin, 0x12 },
    { L"Start+D - Extra Move 4", 0x33b4f60, 0x33b4f80, indexKOFXISprites_Malin, 0x13 },
    { L"Start+D - Extra Move 5", 0x33b4f80, 0x33b4fa0, indexKOFXISprites_Malin, 0x14 },
    { L"Start+D - Extra Move 6", 0x33b4fa0, 0x33b4fc0, indexKOFXISprites_Malin, 0x15 },
    { L"Start+D - Extra Move 7", 0x33b4fc0, 0x33b4fe0, indexKOFXISprites_Malin, 0x16 },
    { L"Start+D - Extra Move 8", 0x33b4fe0, 0x33b5000, indexKOFXISprites_Malin, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_A[] =
{
    { L"Kasumi A", 0x34e4800, 0x34e4820, indexKOFXISprites_Kasumi },
    { L"A - Super Stuff 1", 0x34e4820, 0x34e4840, indexKOFXISprites_Kasumi, 0x20 },
    { L"A - Electric Palette", 0x34e4840, 0x34e4860, indexKOFXISprites_Kasumi, 0x41 },
    { L"A - Darker Palette", 0x34e4860, 0x34e4880, indexKOFXISprites_Kasumi, 0x40 },
    { L"A - Super Stuff 2", 0x34e4880, 0x34e48a0, indexKOFXISprites_Kasumi, 0x21 },
    { L"A - Character Extra 1", 0x34e48a0, 0x34e48c0, indexKOFXISprites_Kasumi, 0x30 },
    { L"A - Character Extra 2", 0x34e48c0, 0x34e48e0, indexKOFXISprites_Kasumi, 0x31 },
    { L"A - Character Extra 3", 0x34e48e0, 0x34e4900, indexKOFXISprites_Kasumi, 0x32 },
    { L"A - Extra Move 1", 0x34e4900, 0x34e4920, indexKOFXISprites_Kasumi, 0x10 },
    { L"A - Extra Move 2", 0x34e4920, 0x34e4940, indexKOFXISprites_Kasumi, 0x11 },
    { L"A - Extra Move 3", 0x34e4940, 0x34e4960, indexKOFXISprites_Kasumi, 0x12 },
    { L"A - Extra Move 4", 0x34e4960, 0x34e4980, indexKOFXISprites_Kasumi, 0x13 },
    { L"A - Extra Move 5", 0x34e4980, 0x34e49a0, indexKOFXISprites_Kasumi, 0x14 },
    { L"A - Extra Move 6", 0x34e49a0, 0x34e49c0, indexKOFXISprites_Kasumi, 0x15 },
    { L"A - Extra Move 7", 0x34e49c0, 0x34e49e0, indexKOFXISprites_Kasumi, 0x16 },
    { L"A - Extra Move 8", 0x34e49e0, 0x34e4a00, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_B[] =
{
    { L"Kasumi B", 0x34e4a00, 0x34e4a20, indexKOFXISprites_Kasumi },
    { L"B - Super Stuff 1", 0x34e4a20, 0x34e4a40, indexKOFXISprites_Kasumi, 0x20 },
    { L"B - Electric Palette", 0x34e4a40, 0x34e4a60, indexKOFXISprites_Kasumi, 0x41 },
    { L"B - Darker Palette", 0x34e4a60, 0x34e4a80, indexKOFXISprites_Kasumi, 0x40 },
    { L"B - Super Stuff 2", 0x34e4a80, 0x34e4aa0, indexKOFXISprites_Kasumi, 0x21 },
    { L"B - Character Extra 1", 0x34e4aa0, 0x34e4ac0, indexKOFXISprites_Kasumi, 0x30 },
    { L"B - Character Extra 2", 0x34e4ac0, 0x34e4ae0, indexKOFXISprites_Kasumi, 0x31 },
    { L"B - Character Extra 3", 0x34e4ae0, 0x34e4b00, indexKOFXISprites_Kasumi, 0x32 },
    { L"B - Extra Move 1", 0x34e4b00, 0x34e4b20, indexKOFXISprites_Kasumi, 0x10 },
    { L"B - Extra Move 2", 0x34e4b20, 0x34e4b40, indexKOFXISprites_Kasumi, 0x11 },
    { L"B - Extra Move 3", 0x34e4b40, 0x34e4b60, indexKOFXISprites_Kasumi, 0x12 },
    { L"B - Extra Move 4", 0x34e4b60, 0x34e4b80, indexKOFXISprites_Kasumi, 0x13 },
    { L"B - Extra Move 5", 0x34e4b80, 0x34e4ba0, indexKOFXISprites_Kasumi, 0x14 },
    { L"B - Extra Move 6", 0x34e4ba0, 0x34e4bc0, indexKOFXISprites_Kasumi, 0x15 },
    { L"B - Extra Move 7", 0x34e4bc0, 0x34e4be0, indexKOFXISprites_Kasumi, 0x16 },
    { L"B - Extra Move 8", 0x34e4be0, 0x34e4c00, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_C[] =
{
    { L"Kasumi C", 0x34e4c00, 0x34e4c20, indexKOFXISprites_Kasumi },
    { L"C - Super Stuff 1", 0x34e4c20, 0x34e4c40, indexKOFXISprites_Kasumi, 0x20 },
    { L"C - Electric Palette", 0x34e4c40, 0x34e4c60, indexKOFXISprites_Kasumi, 0x41 },
    { L"C - Darker Palette", 0x34e4c60, 0x34e4c80, indexKOFXISprites_Kasumi, 0x40 },
    { L"C - Super Stuff 2", 0x34e4c80, 0x34e4ca0, indexKOFXISprites_Kasumi, 0x21 },
    { L"C - Character Extra 1", 0x34e4ca0, 0x34e4cc0, indexKOFXISprites_Kasumi, 0x30 },
    { L"C - Character Extra 2", 0x34e4cc0, 0x34e4ce0, indexKOFXISprites_Kasumi, 0x31 },
    { L"C - Character Extra 3", 0x34e4ce0, 0x34e4d00, indexKOFXISprites_Kasumi, 0x32 },
    { L"C - Extra Move 1", 0x34e4d00, 0x34e4d20, indexKOFXISprites_Kasumi, 0x10 },
    { L"C - Extra Move 2", 0x34e4d20, 0x34e4d40, indexKOFXISprites_Kasumi, 0x11 },
    { L"C - Extra Move 3", 0x34e4d40, 0x34e4d60, indexKOFXISprites_Kasumi, 0x12 },
    { L"C - Extra Move 4", 0x34e4d60, 0x34e4d80, indexKOFXISprites_Kasumi, 0x13 },
    { L"C - Extra Move 5", 0x34e4d80, 0x34e4da0, indexKOFXISprites_Kasumi, 0x14 },
    { L"C - Extra Move 6", 0x34e4da0, 0x34e4dc0, indexKOFXISprites_Kasumi, 0x15 },
    { L"C - Extra Move 7", 0x34e4dc0, 0x34e4de0, indexKOFXISprites_Kasumi, 0x16 },
    { L"C - Extra Move 8", 0x34e4de0, 0x34e4e00, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_D[] =
{
    { L"Kasumi D", 0x34e4e00, 0x34e4e20, indexKOFXISprites_Kasumi },
    { L"D - Super Stuff 1", 0x34e4e20, 0x34e4e40, indexKOFXISprites_Kasumi, 0x20 },
    { L"D - Electric Palette", 0x34e4e40, 0x34e4e60, indexKOFXISprites_Kasumi, 0x41 },
    { L"D - Darker Palette", 0x34e4e60, 0x34e4e80, indexKOFXISprites_Kasumi, 0x40 },
    { L"D - Super Stuff 2", 0x34e4e80, 0x34e4ea0, indexKOFXISprites_Kasumi, 0x21 },
    { L"D - Character Extra 1", 0x34e4ea0, 0x34e4ec0, indexKOFXISprites_Kasumi, 0x30 },
    { L"D - Character Extra 2", 0x34e4ec0, 0x34e4ee0, indexKOFXISprites_Kasumi, 0x31 },
    { L"D - Character Extra 3", 0x34e4ee0, 0x34e4f00, indexKOFXISprites_Kasumi, 0x32 },
    { L"D - Extra Move 1", 0x34e4f00, 0x34e4f20, indexKOFXISprites_Kasumi, 0x10 },
    { L"D - Extra Move 2", 0x34e4f20, 0x34e4f40, indexKOFXISprites_Kasumi, 0x11 },
    { L"D - Extra Move 3", 0x34e4f40, 0x34e4f60, indexKOFXISprites_Kasumi, 0x12 },
    { L"D - Extra Move 4", 0x34e4f60, 0x34e4f80, indexKOFXISprites_Kasumi, 0x13 },
    { L"D - Extra Move 5", 0x34e4f80, 0x34e4fa0, indexKOFXISprites_Kasumi, 0x14 },
    { L"D - Extra Move 6", 0x34e4fa0, 0x34e4fc0, indexKOFXISprites_Kasumi, 0x15 },
    { L"D - Extra Move 7", 0x34e4fc0, 0x34e4fe0, indexKOFXISprites_Kasumi, 0x16 },
    { L"D - Extra Move 8", 0x34e4fe0, 0x34e5000, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_EA[] =
{
    { L"Kasumi EA", 0x34e5000, 0x34e5020, indexKOFXISprites_Kasumi },
    { L"E+A - Super Stuff 1", 0x34e5020, 0x34e5040, indexKOFXISprites_Kasumi, 0x20 },
    { L"E+A - Electric Palette", 0x34e5040, 0x34e5060, indexKOFXISprites_Kasumi, 0x41 },
    { L"E+A - Darker Palette", 0x34e5060, 0x34e5080, indexKOFXISprites_Kasumi, 0x40 },
    { L"E+A - Super Stuff 2", 0x34e5080, 0x34e50a0, indexKOFXISprites_Kasumi, 0x21 },
    { L"E+A - Character Extra 1", 0x34e50a0, 0x34e50c0, indexKOFXISprites_Kasumi, 0x30 },
    { L"E+A - Character Extra 2", 0x34e50c0, 0x34e50e0, indexKOFXISprites_Kasumi, 0x31 },
    { L"E+A - Character Extra 3", 0x34e50e0, 0x34e5100, indexKOFXISprites_Kasumi, 0x32 },
    { L"E+A - Extra Move 1", 0x34e5100, 0x34e5120, indexKOFXISprites_Kasumi, 0x10 },
    { L"E+A - Extra Move 2", 0x34e5120, 0x34e5140, indexKOFXISprites_Kasumi, 0x11 },
    { L"E+A - Extra Move 3", 0x34e5140, 0x34e5160, indexKOFXISprites_Kasumi, 0x12 },
    { L"E+A - Extra Move 4", 0x34e5160, 0x34e5180, indexKOFXISprites_Kasumi, 0x13 },
    { L"E+A - Extra Move 5", 0x34e5180, 0x34e51a0, indexKOFXISprites_Kasumi, 0x14 },
    { L"E+A - Extra Move 6", 0x34e51a0, 0x34e51c0, indexKOFXISprites_Kasumi, 0x15 },
    { L"E+A - Extra Move 7", 0x34e51c0, 0x34e51e0, indexKOFXISprites_Kasumi, 0x16 },
    { L"E+A - Extra Move 8", 0x34e51e0, 0x34e5200, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_EB[] =
{
    { L"Kasumi EB", 0x34e5200, 0x34e5220, indexKOFXISprites_Kasumi },
    { L"E+B - Super Stuff 1", 0x34e5220, 0x34e5240, indexKOFXISprites_Kasumi, 0x20 },
    { L"E+B - Electric Palette", 0x34e5240, 0x34e5260, indexKOFXISprites_Kasumi, 0x41 },
    { L"E+B - Darker Palette", 0x34e5260, 0x34e5280, indexKOFXISprites_Kasumi, 0x40 },
    { L"E+B - Super Stuff 2", 0x34e5280, 0x34e52a0, indexKOFXISprites_Kasumi, 0x21 },
    { L"E+B - Character Extra 1", 0x34e52a0, 0x34e52c0, indexKOFXISprites_Kasumi, 0x30 },
    { L"E+B - Character Extra 2", 0x34e52c0, 0x34e52e0, indexKOFXISprites_Kasumi, 0x31 },
    { L"E+B - Character Extra 3", 0x34e52e0, 0x34e5300, indexKOFXISprites_Kasumi, 0x32 },
    { L"E+B - Extra Move 1", 0x34e5300, 0x34e5320, indexKOFXISprites_Kasumi, 0x10 },
    { L"E+B - Extra Move 2", 0x34e5320, 0x34e5340, indexKOFXISprites_Kasumi, 0x11 },
    { L"E+B - Extra Move 3", 0x34e5340, 0x34e5360, indexKOFXISprites_Kasumi, 0x12 },
    { L"E+B - Extra Move 4", 0x34e5360, 0x34e5380, indexKOFXISprites_Kasumi, 0x13 },
    { L"E+B - Extra Move 5", 0x34e5380, 0x34e53a0, indexKOFXISprites_Kasumi, 0x14 },
    { L"E+B - Extra Move 6", 0x34e53a0, 0x34e53c0, indexKOFXISprites_Kasumi, 0x15 },
    { L"E+B - Extra Move 7", 0x34e53c0, 0x34e53e0, indexKOFXISprites_Kasumi, 0x16 },
    { L"E+B - Extra Move 8", 0x34e53e0, 0x34e5400, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_EC[] =
{
    { L"Kasumi EC", 0x34e5400, 0x34e5420, indexKOFXISprites_Kasumi },
    { L"E+C - Super Stuff 1", 0x34e5420, 0x34e5440, indexKOFXISprites_Kasumi, 0x20 },
    { L"E+C - Electric Palette", 0x34e5440, 0x34e5460, indexKOFXISprites_Kasumi, 0x41 },
    { L"E+C - Darker Palette", 0x34e5460, 0x34e5480, indexKOFXISprites_Kasumi, 0x40 },
    { L"E+C - Super Stuff 2", 0x34e5480, 0x34e54a0, indexKOFXISprites_Kasumi, 0x21 },
    { L"E+C - Character Extra 1", 0x34e54a0, 0x34e54c0, indexKOFXISprites_Kasumi, 0x30 },
    { L"E+C - Character Extra 2", 0x34e54c0, 0x34e54e0, indexKOFXISprites_Kasumi, 0x31 },
    { L"E+C - Character Extra 3", 0x34e54e0, 0x34e5500, indexKOFXISprites_Kasumi, 0x32 },
    { L"E+C - Extra Move 1", 0x34e5500, 0x34e5520, indexKOFXISprites_Kasumi, 0x10 },
    { L"E+C - Extra Move 2", 0x34e5520, 0x34e5540, indexKOFXISprites_Kasumi, 0x11 },
    { L"E+C - Extra Move 3", 0x34e5540, 0x34e5560, indexKOFXISprites_Kasumi, 0x12 },
    { L"E+C - Extra Move 4", 0x34e5560, 0x34e5580, indexKOFXISprites_Kasumi, 0x13 },
    { L"E+C - Extra Move 5", 0x34e5580, 0x34e55a0, indexKOFXISprites_Kasumi, 0x14 },
    { L"E+C - Extra Move 6", 0x34e55a0, 0x34e55c0, indexKOFXISprites_Kasumi, 0x15 },
    { L"E+C - Extra Move 7", 0x34e55c0, 0x34e55e0, indexKOFXISprites_Kasumi, 0x16 },
    { L"E+C - Extra Move 8", 0x34e55e0, 0x34e5600, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_ED[] =
{
    { L"Kasumi ED", 0x34e5600, 0x34e5620, indexKOFXISprites_Kasumi },
    { L"E+D - Super Stuff 1", 0x34e5620, 0x34e5640, indexKOFXISprites_Kasumi, 0x20 },
    { L"E+D - Electric Palette", 0x34e5640, 0x34e5660, indexKOFXISprites_Kasumi, 0x41 },
    { L"E+D - Darker Palette", 0x34e5660, 0x34e5680, indexKOFXISprites_Kasumi, 0x40 },
    { L"E+D - Super Stuff 2", 0x34e5680, 0x34e56a0, indexKOFXISprites_Kasumi, 0x21 },
    { L"E+D - Character Extra 1", 0x34e56a0, 0x34e56c0, indexKOFXISprites_Kasumi, 0x30 },
    { L"E+D - Character Extra 2", 0x34e56c0, 0x34e56e0, indexKOFXISprites_Kasumi, 0x31 },
    { L"E+D - Character Extra 3", 0x34e56e0, 0x34e5700, indexKOFXISprites_Kasumi, 0x32 },
    { L"E+D - Extra Move 1", 0x34e5700, 0x34e5720, indexKOFXISprites_Kasumi, 0x10 },
    { L"E+D - Extra Move 2", 0x34e5720, 0x34e5740, indexKOFXISprites_Kasumi, 0x11 },
    { L"E+D - Extra Move 3", 0x34e5740, 0x34e5760, indexKOFXISprites_Kasumi, 0x12 },
    { L"E+D - Extra Move 4", 0x34e5760, 0x34e5780, indexKOFXISprites_Kasumi, 0x13 },
    { L"E+D - Extra Move 5", 0x34e5780, 0x34e57a0, indexKOFXISprites_Kasumi, 0x14 },
    { L"E+D - Extra Move 6", 0x34e57a0, 0x34e57c0, indexKOFXISprites_Kasumi, 0x15 },
    { L"E+D - Extra Move 7", 0x34e57c0, 0x34e57e0, indexKOFXISprites_Kasumi, 0x16 },
    { L"E+D - Extra Move 8", 0x34e57e0, 0x34e5800, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_SA[] =
{
    { L"Kasumi SA", 0x34e5800, 0x34e5820, indexKOFXISprites_Kasumi },
    { L"Start+A - Super Stuff 1", 0x34e5820, 0x34e5840, indexKOFXISprites_Kasumi, 0x20 },
    { L"Start+A - Electric Palette", 0x34e5840, 0x34e5860, indexKOFXISprites_Kasumi, 0x41 },
    { L"Start+A - Darker Palette", 0x34e5860, 0x34e5880, indexKOFXISprites_Kasumi, 0x40 },
    { L"Start+A - Super Stuff 2", 0x34e5880, 0x34e58a0, indexKOFXISprites_Kasumi, 0x21 },
    { L"Start+A - Character Extra 1", 0x34e58a0, 0x34e58c0, indexKOFXISprites_Kasumi, 0x30 },
    { L"Start+A - Character Extra 2", 0x34e58c0, 0x34e58e0, indexKOFXISprites_Kasumi, 0x31 },
    { L"Start+A - Character Extra 3", 0x34e58e0, 0x34e5900, indexKOFXISprites_Kasumi, 0x32 },
    { L"Start+A - Extra Move 1", 0x34e5900, 0x34e5920, indexKOFXISprites_Kasumi, 0x10 },
    { L"Start+A - Extra Move 2", 0x34e5920, 0x34e5940, indexKOFXISprites_Kasumi, 0x11 },
    { L"Start+A - Extra Move 3", 0x34e5940, 0x34e5960, indexKOFXISprites_Kasumi, 0x12 },
    { L"Start+A - Extra Move 4", 0x34e5960, 0x34e5980, indexKOFXISprites_Kasumi, 0x13 },
    { L"Start+A - Extra Move 5", 0x34e5980, 0x34e59a0, indexKOFXISprites_Kasumi, 0x14 },
    { L"Start+A - Extra Move 6", 0x34e59a0, 0x34e59c0, indexKOFXISprites_Kasumi, 0x15 },
    { L"Start+A - Extra Move 7", 0x34e59c0, 0x34e59e0, indexKOFXISprites_Kasumi, 0x16 },
    { L"Start+A - Extra Move 8", 0x34e59e0, 0x34e5a00, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_SB[] =
{
    { L"Kasumi SB", 0x34e5a00, 0x34e5a20, indexKOFXISprites_Kasumi },
    { L"Start+B - Super Stuff 1", 0x34e5a20, 0x34e5a40, indexKOFXISprites_Kasumi, 0x20 },
    { L"Start+B - Electric Palette", 0x34e5a40, 0x34e5a60, indexKOFXISprites_Kasumi, 0x41 },
    { L"Start+B - Darker Palette", 0x34e5a60, 0x34e5a80, indexKOFXISprites_Kasumi, 0x40 },
    { L"Start+B - Super Stuff 2", 0x34e5a80, 0x34e5aa0, indexKOFXISprites_Kasumi, 0x21 },
    { L"Start+B - Character Extra 1", 0x34e5aa0, 0x34e5ac0, indexKOFXISprites_Kasumi, 0x30 },
    { L"Start+B - Character Extra 2", 0x34e5ac0, 0x34e5ae0, indexKOFXISprites_Kasumi, 0x31 },
    { L"Start+B - Character Extra 3", 0x34e5ae0, 0x34e5b00, indexKOFXISprites_Kasumi, 0x32 },
    { L"Start+B - Extra Move 1", 0x34e5b00, 0x34e5b20, indexKOFXISprites_Kasumi, 0x10 },
    { L"Start+B - Extra Move 2", 0x34e5b20, 0x34e5b40, indexKOFXISprites_Kasumi, 0x11 },
    { L"Start+B - Extra Move 3", 0x34e5b40, 0x34e5b60, indexKOFXISprites_Kasumi, 0x12 },
    { L"Start+B - Extra Move 4", 0x34e5b60, 0x34e5b80, indexKOFXISprites_Kasumi, 0x13 },
    { L"Start+B - Extra Move 5", 0x34e5b80, 0x34e5ba0, indexKOFXISprites_Kasumi, 0x14 },
    { L"Start+B - Extra Move 6", 0x34e5ba0, 0x34e5bc0, indexKOFXISprites_Kasumi, 0x15 },
    { L"Start+B - Extra Move 7", 0x34e5bc0, 0x34e5be0, indexKOFXISprites_Kasumi, 0x16 },
    { L"Start+B - Extra Move 8", 0x34e5be0, 0x34e5c00, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_SC[] =
{
    { L"Kasumi SC", 0x34e5c00, 0x34e5c20, indexKOFXISprites_Kasumi },
    { L"Start+C - Super Stuff 1", 0x34e5c20, 0x34e5c40, indexKOFXISprites_Kasumi, 0x20 },
    { L"Start+C - Electric Palette", 0x34e5c40, 0x34e5c60, indexKOFXISprites_Kasumi, 0x41 },
    { L"Start+C - Darker Palette", 0x34e5c60, 0x34e5c80, indexKOFXISprites_Kasumi, 0x40 },
    { L"Start+C - Super Stuff 2", 0x34e5c80, 0x34e5ca0, indexKOFXISprites_Kasumi, 0x21 },
    { L"Start+C - Character Extra 1", 0x34e5ca0, 0x34e5cc0, indexKOFXISprites_Kasumi, 0x30 },
    { L"Start+C - Character Extra 2", 0x34e5cc0, 0x34e5ce0, indexKOFXISprites_Kasumi, 0x31 },
    { L"Start+C - Character Extra 3", 0x34e5ce0, 0x34e5d00, indexKOFXISprites_Kasumi, 0x32 },
    { L"Start+C - Extra Move 1", 0x34e5d00, 0x34e5d20, indexKOFXISprites_Kasumi, 0x10 },
    { L"Start+C - Extra Move 2", 0x34e5d20, 0x34e5d40, indexKOFXISprites_Kasumi, 0x11 },
    { L"Start+C - Extra Move 3", 0x34e5d40, 0x34e5d60, indexKOFXISprites_Kasumi, 0x12 },
    { L"Start+C - Extra Move 4", 0x34e5d60, 0x34e5d80, indexKOFXISprites_Kasumi, 0x13 },
    { L"Start+C - Extra Move 5", 0x34e5d80, 0x34e5da0, indexKOFXISprites_Kasumi, 0x14 },
    { L"Start+C - Extra Move 6", 0x34e5da0, 0x34e5dc0, indexKOFXISprites_Kasumi, 0x15 },
    { L"Start+C - Extra Move 7", 0x34e5dc0, 0x34e5de0, indexKOFXISprites_Kasumi, 0x16 },
    { L"Start+C - Extra Move 8", 0x34e5de0, 0x34e5e00, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KASUMI_PALETTES_SD[] =
{
    { L"Kasumi SD", 0x34e5e00, 0x34e5e20, indexKOFXISprites_Kasumi },
    { L"Start+D - Super Stuff 1", 0x34e5e20, 0x34e5e40, indexKOFXISprites_Kasumi, 0x20 },
    { L"Start+D - Electric Palette", 0x34e5e40, 0x34e5e60, indexKOFXISprites_Kasumi, 0x41 },
    { L"Start+D - Darker Palette", 0x34e5e60, 0x34e5e80, indexKOFXISprites_Kasumi, 0x40 },
    { L"Start+D - Super Stuff 2", 0x34e5e80, 0x34e5ea0, indexKOFXISprites_Kasumi, 0x21 },
    { L"Start+D - Character Extra 1", 0x34e5ea0, 0x34e5ec0, indexKOFXISprites_Kasumi, 0x30 },
    { L"Start+D - Character Extra 2", 0x34e5ec0, 0x34e5ee0, indexKOFXISprites_Kasumi, 0x31 },
    { L"Start+D - Character Extra 3", 0x34e5ee0, 0x34e5f00, indexKOFXISprites_Kasumi, 0x32 },
    { L"Start+D - Extra Move 1", 0x34e5f00, 0x34e5f20, indexKOFXISprites_Kasumi, 0x10 },
    { L"Start+D - Extra Move 2", 0x34e5f20, 0x34e5f40, indexKOFXISprites_Kasumi, 0x11 },
    { L"Start+D - Extra Move 3", 0x34e5f40, 0x34e5f60, indexKOFXISprites_Kasumi, 0x12 },
    { L"Start+D - Extra Move 4", 0x34e5f60, 0x34e5f80, indexKOFXISprites_Kasumi, 0x13 },
    { L"Start+D - Extra Move 5", 0x34e5f80, 0x34e5fa0, indexKOFXISprites_Kasumi, 0x14 },
    { L"Start+D - Extra Move 6", 0x34e5fa0, 0x34e5fc0, indexKOFXISprites_Kasumi, 0x15 },
    { L"Start+D - Extra Move 7", 0x34e5fc0, 0x34e5fe0, indexKOFXISprites_Kasumi, 0x16 },
    { L"Start+D - Extra Move 8", 0x34e5fe0, 0x34e6000, indexKOFXISprites_Kasumi, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_A[] =
{
    { L"Eiji A", 0x3609800, 0x3609820, indexKOFXISprites_Eiji },
    { L"A - Super Stuff 1", 0x3609820, 0x3609840, indexKOFXISprites_Eiji, 0x20 },
    { L"A - Electric Palette", 0x3609840, 0x3609860, indexKOFXISprites_Eiji, 0x41 },
    { L"A - Darker Palette", 0x3609860, 0x3609880, indexKOFXISprites_Eiji, 0x40 },
    { L"A - Super Stuff 2", 0x3609880, 0x36098a0, indexKOFXISprites_Eiji, 0x21 },
    { L"A - Character Extra 1", 0x36098a0, 0x36098c0, indexKOFXISprites_Eiji, 0x30 },
    { L"A - Character Extra 2", 0x36098c0, 0x36098e0, indexKOFXISprites_Eiji, 0x31 },
    { L"A - Character Extra 3", 0x36098e0, 0x3609900, indexKOFXISprites_Eiji, 0x32 },
    { L"A - Extra Move 1", 0x3609900, 0x3609920, indexKOFXISprites_Eiji, 0x10 },
    { L"A - Extra Move 2", 0x3609920, 0x3609940, indexKOFXISprites_Eiji, 0x11 },
    { L"A - Extra Move 3", 0x3609940, 0x3609960, indexKOFXISprites_Eiji, 0x12 },
    { L"A - Extra Move 4", 0x3609960, 0x3609980, indexKOFXISprites_Eiji, 0x13 },
    { L"A - Extra Move 5", 0x3609980, 0x36099a0, indexKOFXISprites_Eiji, 0x14 },
    { L"A - Extra Move 6", 0x36099a0, 0x36099c0, indexKOFXISprites_Eiji, 0x15 },
    { L"A - Extra Move 7", 0x36099c0, 0x36099e0, indexKOFXISprites_Eiji, 0x16 },
    { L"A - Extra Move 8", 0x36099e0, 0x3609a00, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_B[] =
{
    { L"Eiji B", 0x3609a00, 0x3609a20, indexKOFXISprites_Eiji },
    { L"B - Super Stuff 1", 0x3609a20, 0x3609a40, indexKOFXISprites_Eiji, 0x20 },
    { L"B - Electric Palette", 0x3609a40, 0x3609a60, indexKOFXISprites_Eiji, 0x41 },
    { L"B - Darker Palette", 0x3609a60, 0x3609a80, indexKOFXISprites_Eiji, 0x40 },
    { L"B - Super Stuff 2", 0x3609a80, 0x3609aa0, indexKOFXISprites_Eiji, 0x21 },
    { L"B - Character Extra 1", 0x3609aa0, 0x3609ac0, indexKOFXISprites_Eiji, 0x30 },
    { L"B - Character Extra 2", 0x3609ac0, 0x3609ae0, indexKOFXISprites_Eiji, 0x31 },
    { L"B - Character Extra 3", 0x3609ae0, 0x3609b00, indexKOFXISprites_Eiji, 0x32 },
    { L"B - Extra Move 1", 0x3609b00, 0x3609b20, indexKOFXISprites_Eiji, 0x10 },
    { L"B - Extra Move 2", 0x3609b20, 0x3609b40, indexKOFXISprites_Eiji, 0x11 },
    { L"B - Extra Move 3", 0x3609b40, 0x3609b60, indexKOFXISprites_Eiji, 0x12 },
    { L"B - Extra Move 4", 0x3609b60, 0x3609b80, indexKOFXISprites_Eiji, 0x13 },
    { L"B - Extra Move 5", 0x3609b80, 0x3609ba0, indexKOFXISprites_Eiji, 0x14 },
    { L"B - Extra Move 6", 0x3609ba0, 0x3609bc0, indexKOFXISprites_Eiji, 0x15 },
    { L"B - Extra Move 7", 0x3609bc0, 0x3609be0, indexKOFXISprites_Eiji, 0x16 },
    { L"B - Extra Move 8", 0x3609be0, 0x3609c00, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_C[] =
{
    { L"Eiji C", 0x3609c00, 0x3609c20, indexKOFXISprites_Eiji },
    { L"C - Super Stuff 1", 0x3609c20, 0x3609c40, indexKOFXISprites_Eiji, 0x20 },
    { L"C - Electric Palette", 0x3609c40, 0x3609c60, indexKOFXISprites_Eiji, 0x41 },
    { L"C - Darker Palette", 0x3609c60, 0x3609c80, indexKOFXISprites_Eiji, 0x40 },
    { L"C - Super Stuff 2", 0x3609c80, 0x3609ca0, indexKOFXISprites_Eiji, 0x21 },
    { L"C - Character Extra 1", 0x3609ca0, 0x3609cc0, indexKOFXISprites_Eiji, 0x30 },
    { L"C - Character Extra 2", 0x3609cc0, 0x3609ce0, indexKOFXISprites_Eiji, 0x31 },
    { L"C - Character Extra 3", 0x3609ce0, 0x3609d00, indexKOFXISprites_Eiji, 0x32 },
    { L"C - Extra Move 1", 0x3609d00, 0x3609d20, indexKOFXISprites_Eiji, 0x10 },
    { L"C - Extra Move 2", 0x3609d20, 0x3609d40, indexKOFXISprites_Eiji, 0x11 },
    { L"C - Extra Move 3", 0x3609d40, 0x3609d60, indexKOFXISprites_Eiji, 0x12 },
    { L"C - Extra Move 4", 0x3609d60, 0x3609d80, indexKOFXISprites_Eiji, 0x13 },
    { L"C - Extra Move 5", 0x3609d80, 0x3609da0, indexKOFXISprites_Eiji, 0x14 },
    { L"C - Extra Move 6", 0x3609da0, 0x3609dc0, indexKOFXISprites_Eiji, 0x15 },
    { L"C - Extra Move 7", 0x3609dc0, 0x3609de0, indexKOFXISprites_Eiji, 0x16 },
    { L"C - Extra Move 8", 0x3609de0, 0x3609e00, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_D[] =
{
    { L"Eiji D", 0x3609e00, 0x3609e20, indexKOFXISprites_Eiji },
    { L"D - Super Stuff 1", 0x3609e20, 0x3609e40, indexKOFXISprites_Eiji, 0x20 },
    { L"D - Electric Palette", 0x3609e40, 0x3609e60, indexKOFXISprites_Eiji, 0x41 },
    { L"D - Darker Palette", 0x3609e60, 0x3609e80, indexKOFXISprites_Eiji, 0x40 },
    { L"D - Super Stuff 2", 0x3609e80, 0x3609ea0, indexKOFXISprites_Eiji, 0x21 },
    { L"D - Character Extra 1", 0x3609ea0, 0x3609ec0, indexKOFXISprites_Eiji, 0x30 },
    { L"D - Character Extra 2", 0x3609ec0, 0x3609ee0, indexKOFXISprites_Eiji, 0x31 },
    { L"D - Character Extra 3", 0x3609ee0, 0x3609f00, indexKOFXISprites_Eiji, 0x32 },
    { L"D - Extra Move 1", 0x3609f00, 0x3609f20, indexKOFXISprites_Eiji, 0x10 },
    { L"D - Extra Move 2", 0x3609f20, 0x3609f40, indexKOFXISprites_Eiji, 0x11 },
    { L"D - Extra Move 3", 0x3609f40, 0x3609f60, indexKOFXISprites_Eiji, 0x12 },
    { L"D - Extra Move 4", 0x3609f60, 0x3609f80, indexKOFXISprites_Eiji, 0x13 },
    { L"D - Extra Move 5", 0x3609f80, 0x3609fa0, indexKOFXISprites_Eiji, 0x14 },
    { L"D - Extra Move 6", 0x3609fa0, 0x3609fc0, indexKOFXISprites_Eiji, 0x15 },
    { L"D - Extra Move 7", 0x3609fc0, 0x3609fe0, indexKOFXISprites_Eiji, 0x16 },
    { L"D - Extra Move 8", 0x3609fe0, 0x360a000, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_EA[] =
{
    { L"Eiji EA", 0x360a000, 0x360a020, indexKOFXISprites_Eiji },
    { L"E+A - Super Stuff 1", 0x360a020, 0x360a040, indexKOFXISprites_Eiji, 0x20 },
    { L"E+A - Electric Palette", 0x360a040, 0x360a060, indexKOFXISprites_Eiji, 0x41 },
    { L"E+A - Darker Palette", 0x360a060, 0x360a080, indexKOFXISprites_Eiji, 0x40 },
    { L"E+A - Super Stuff 2", 0x360a080, 0x360a0a0, indexKOFXISprites_Eiji, 0x21 },
    { L"E+A - Character Extra 1", 0x360a0a0, 0x360a0c0, indexKOFXISprites_Eiji, 0x30 },
    { L"E+A - Character Extra 2", 0x360a0c0, 0x360a0e0, indexKOFXISprites_Eiji, 0x31 },
    { L"E+A - Character Extra 3", 0x360a0e0, 0x360a100, indexKOFXISprites_Eiji, 0x32 },
    { L"E+A - Extra Move 1", 0x360a100, 0x360a120, indexKOFXISprites_Eiji, 0x10 },
    { L"E+A - Extra Move 2", 0x360a120, 0x360a140, indexKOFXISprites_Eiji, 0x11 },
    { L"E+A - Extra Move 3", 0x360a140, 0x360a160, indexKOFXISprites_Eiji, 0x12 },
    { L"E+A - Extra Move 4", 0x360a160, 0x360a180, indexKOFXISprites_Eiji, 0x13 },
    { L"E+A - Extra Move 5", 0x360a180, 0x360a1a0, indexKOFXISprites_Eiji, 0x14 },
    { L"E+A - Extra Move 6", 0x360a1a0, 0x360a1c0, indexKOFXISprites_Eiji, 0x15 },
    { L"E+A - Extra Move 7", 0x360a1c0, 0x360a1e0, indexKOFXISprites_Eiji, 0x16 },
    { L"E+A - Extra Move 8", 0x360a1e0, 0x360a200, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_EB[] =
{
    { L"Eiji EB", 0x360a200, 0x360a220, indexKOFXISprites_Eiji },
    { L"E+B - Super Stuff 1", 0x360a220, 0x360a240, indexKOFXISprites_Eiji, 0x20 },
    { L"E+B - Electric Palette", 0x360a240, 0x360a260, indexKOFXISprites_Eiji, 0x41 },
    { L"E+B - Darker Palette", 0x360a260, 0x360a280, indexKOFXISprites_Eiji, 0x40 },
    { L"E+B - Super Stuff 2", 0x360a280, 0x360a2a0, indexKOFXISprites_Eiji, 0x21 },
    { L"E+B - Character Extra 1", 0x360a2a0, 0x360a2c0, indexKOFXISprites_Eiji, 0x30 },
    { L"E+B - Character Extra 2", 0x360a2c0, 0x360a2e0, indexKOFXISprites_Eiji, 0x31 },
    { L"E+B - Character Extra 3", 0x360a2e0, 0x360a300, indexKOFXISprites_Eiji, 0x32 },
    { L"E+B - Extra Move 1", 0x360a300, 0x360a320, indexKOFXISprites_Eiji, 0x10 },
    { L"E+B - Extra Move 2", 0x360a320, 0x360a340, indexKOFXISprites_Eiji, 0x11 },
    { L"E+B - Extra Move 3", 0x360a340, 0x360a360, indexKOFXISprites_Eiji, 0x12 },
    { L"E+B - Extra Move 4", 0x360a360, 0x360a380, indexKOFXISprites_Eiji, 0x13 },
    { L"E+B - Extra Move 5", 0x360a380, 0x360a3a0, indexKOFXISprites_Eiji, 0x14 },
    { L"E+B - Extra Move 6", 0x360a3a0, 0x360a3c0, indexKOFXISprites_Eiji, 0x15 },
    { L"E+B - Extra Move 7", 0x360a3c0, 0x360a3e0, indexKOFXISprites_Eiji, 0x16 },
    { L"E+B - Extra Move 8", 0x360a3e0, 0x360a400, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_EC[] =
{
    { L"Eiji EC", 0x360a400, 0x360a420, indexKOFXISprites_Eiji },
    { L"E+C - Super Stuff 1", 0x360a420, 0x360a440, indexKOFXISprites_Eiji, 0x20 },
    { L"E+C - Electric Palette", 0x360a440, 0x360a460, indexKOFXISprites_Eiji, 0x41 },
    { L"E+C - Darker Palette", 0x360a460, 0x360a480, indexKOFXISprites_Eiji, 0x40 },
    { L"E+C - Super Stuff 2", 0x360a480, 0x360a4a0, indexKOFXISprites_Eiji, 0x21 },
    { L"E+C - Character Extra 1", 0x360a4a0, 0x360a4c0, indexKOFXISprites_Eiji, 0x30 },
    { L"E+C - Character Extra 2", 0x360a4c0, 0x360a4e0, indexKOFXISprites_Eiji, 0x31 },
    { L"E+C - Character Extra 3", 0x360a4e0, 0x360a500, indexKOFXISprites_Eiji, 0x32 },
    { L"E+C - Extra Move 1", 0x360a500, 0x360a520, indexKOFXISprites_Eiji, 0x10 },
    { L"E+C - Extra Move 2", 0x360a520, 0x360a540, indexKOFXISprites_Eiji, 0x11 },
    { L"E+C - Extra Move 3", 0x360a540, 0x360a560, indexKOFXISprites_Eiji, 0x12 },
    { L"E+C - Extra Move 4", 0x360a560, 0x360a580, indexKOFXISprites_Eiji, 0x13 },
    { L"E+C - Extra Move 5", 0x360a580, 0x360a5a0, indexKOFXISprites_Eiji, 0x14 },
    { L"E+C - Extra Move 6", 0x360a5a0, 0x360a5c0, indexKOFXISprites_Eiji, 0x15 },
    { L"E+C - Extra Move 7", 0x360a5c0, 0x360a5e0, indexKOFXISprites_Eiji, 0x16 },
    { L"E+C - Extra Move 8", 0x360a5e0, 0x360a600, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_ED[] =
{
    { L"Eiji ED", 0x360a600, 0x360a620, indexKOFXISprites_Eiji },
    { L"E+D - Super Stuff 1", 0x360a620, 0x360a640, indexKOFXISprites_Eiji, 0x20 },
    { L"E+D - Electric Palette", 0x360a640, 0x360a660, indexKOFXISprites_Eiji, 0x41 },
    { L"E+D - Darker Palette", 0x360a660, 0x360a680, indexKOFXISprites_Eiji, 0x40 },
    { L"E+D - Super Stuff 2", 0x360a680, 0x360a6a0, indexKOFXISprites_Eiji, 0x21 },
    { L"E+D - Character Extra 1", 0x360a6a0, 0x360a6c0, indexKOFXISprites_Eiji, 0x30 },
    { L"E+D - Character Extra 2", 0x360a6c0, 0x360a6e0, indexKOFXISprites_Eiji, 0x31 },
    { L"E+D - Character Extra 3", 0x360a6e0, 0x360a700, indexKOFXISprites_Eiji, 0x32 },
    { L"E+D - Extra Move 1", 0x360a700, 0x360a720, indexKOFXISprites_Eiji, 0x10 },
    { L"E+D - Extra Move 2", 0x360a720, 0x360a740, indexKOFXISprites_Eiji, 0x11 },
    { L"E+D - Extra Move 3", 0x360a740, 0x360a760, indexKOFXISprites_Eiji, 0x12 },
    { L"E+D - Extra Move 4", 0x360a760, 0x360a780, indexKOFXISprites_Eiji, 0x13 },
    { L"E+D - Extra Move 5", 0x360a780, 0x360a7a0, indexKOFXISprites_Eiji, 0x14 },
    { L"E+D - Extra Move 6", 0x360a7a0, 0x360a7c0, indexKOFXISprites_Eiji, 0x15 },
    { L"E+D - Extra Move 7", 0x360a7c0, 0x360a7e0, indexKOFXISprites_Eiji, 0x16 },
    { L"E+D - Extra Move 8", 0x360a7e0, 0x360a800, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_SA[] =
{
    { L"Eiji SA", 0x360a800, 0x360a820, indexKOFXISprites_Eiji },
    { L"Start+A - Super Stuff 1", 0x360a820, 0x360a840, indexKOFXISprites_Eiji, 0x20 },
    { L"Start+A - Electric Palette", 0x360a840, 0x360a860, indexKOFXISprites_Eiji, 0x41 },
    { L"Start+A - Darker Palette", 0x360a860, 0x360a880, indexKOFXISprites_Eiji, 0x40 },
    { L"Start+A - Super Stuff 2", 0x360a880, 0x360a8a0, indexKOFXISprites_Eiji, 0x21 },
    { L"Start+A - Character Extra 1", 0x360a8a0, 0x360a8c0, indexKOFXISprites_Eiji, 0x30 },
    { L"Start+A - Character Extra 2", 0x360a8c0, 0x360a8e0, indexKOFXISprites_Eiji, 0x31 },
    { L"Start+A - Character Extra 3", 0x360a8e0, 0x360a900, indexKOFXISprites_Eiji, 0x32 },
    { L"Start+A - Extra Move 1", 0x360a900, 0x360a920, indexKOFXISprites_Eiji, 0x10 },
    { L"Start+A - Extra Move 2", 0x360a920, 0x360a940, indexKOFXISprites_Eiji, 0x11 },
    { L"Start+A - Extra Move 3", 0x360a940, 0x360a960, indexKOFXISprites_Eiji, 0x12 },
    { L"Start+A - Extra Move 4", 0x360a960, 0x360a980, indexKOFXISprites_Eiji, 0x13 },
    { L"Start+A - Extra Move 5", 0x360a980, 0x360a9a0, indexKOFXISprites_Eiji, 0x14 },
    { L"Start+A - Extra Move 6", 0x360a9a0, 0x360a9c0, indexKOFXISprites_Eiji, 0x15 },
    { L"Start+A - Extra Move 7", 0x360a9c0, 0x360a9e0, indexKOFXISprites_Eiji, 0x16 },
    { L"Start+A - Extra Move 8", 0x360a9e0, 0x360aa00, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_SB[] =
{
    { L"Eiji SB", 0x360aa00, 0x360aa20, indexKOFXISprites_Eiji },
    { L"Start+B - Super Stuff 1", 0x360aa20, 0x360aa40, indexKOFXISprites_Eiji, 0x20 },
    { L"Start+B - Electric Palette", 0x360aa40, 0x360aa60, indexKOFXISprites_Eiji, 0x41 },
    { L"Start+B - Darker Palette", 0x360aa60, 0x360aa80, indexKOFXISprites_Eiji, 0x40 },
    { L"Start+B - Super Stuff 2", 0x360aa80, 0x360aaa0, indexKOFXISprites_Eiji, 0x21 },
    { L"Start+B - Character Extra 1", 0x360aaa0, 0x360aac0, indexKOFXISprites_Eiji, 0x30 },
    { L"Start+B - Character Extra 2", 0x360aac0, 0x360aae0, indexKOFXISprites_Eiji, 0x31 },
    { L"Start+B - Character Extra 3", 0x360aae0, 0x360ab00, indexKOFXISprites_Eiji, 0x32 },
    { L"Start+B - Extra Move 1", 0x360ab00, 0x360ab20, indexKOFXISprites_Eiji, 0x10 },
    { L"Start+B - Extra Move 2", 0x360ab20, 0x360ab40, indexKOFXISprites_Eiji, 0x11 },
    { L"Start+B - Extra Move 3", 0x360ab40, 0x360ab60, indexKOFXISprites_Eiji, 0x12 },
    { L"Start+B - Extra Move 4", 0x360ab60, 0x360ab80, indexKOFXISprites_Eiji, 0x13 },
    { L"Start+B - Extra Move 5", 0x360ab80, 0x360aba0, indexKOFXISprites_Eiji, 0x14 },
    { L"Start+B - Extra Move 6", 0x360aba0, 0x360abc0, indexKOFXISprites_Eiji, 0x15 },
    { L"Start+B - Extra Move 7", 0x360abc0, 0x360abe0, indexKOFXISprites_Eiji, 0x16 },
    { L"Start+B - Extra Move 8", 0x360abe0, 0x360ac00, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_SC[] =
{
    { L"Eiji SC", 0x360ac00, 0x360ac20, indexKOFXISprites_Eiji },
    { L"Start+C - Super Stuff 1", 0x360ac20, 0x360ac40, indexKOFXISprites_Eiji, 0x20 },
    { L"Start+C - Electric Palette", 0x360ac40, 0x360ac60, indexKOFXISprites_Eiji, 0x41 },
    { L"Start+C - Darker Palette", 0x360ac60, 0x360ac80, indexKOFXISprites_Eiji, 0x40 },
    { L"Start+C - Super Stuff 2", 0x360ac80, 0x360aca0, indexKOFXISprites_Eiji, 0x21 },
    { L"Start+C - Character Extra 1", 0x360aca0, 0x360acc0, indexKOFXISprites_Eiji, 0x30 },
    { L"Start+C - Character Extra 2", 0x360acc0, 0x360ace0, indexKOFXISprites_Eiji, 0x31 },
    { L"Start+C - Character Extra 3", 0x360ace0, 0x360ad00, indexKOFXISprites_Eiji, 0x32 },
    { L"Start+C - Extra Move 1", 0x360ad00, 0x360ad20, indexKOFXISprites_Eiji, 0x10 },
    { L"Start+C - Extra Move 2", 0x360ad20, 0x360ad40, indexKOFXISprites_Eiji, 0x11 },
    { L"Start+C - Extra Move 3", 0x360ad40, 0x360ad60, indexKOFXISprites_Eiji, 0x12 },
    { L"Start+C - Extra Move 4", 0x360ad60, 0x360ad80, indexKOFXISprites_Eiji, 0x13 },
    { L"Start+C - Extra Move 5", 0x360ad80, 0x360ada0, indexKOFXISprites_Eiji, 0x14 },
    { L"Start+C - Extra Move 6", 0x360ada0, 0x360adc0, indexKOFXISprites_Eiji, 0x15 },
    { L"Start+C - Extra Move 7", 0x360adc0, 0x360ade0, indexKOFXISprites_Eiji, 0x16 },
    { L"Start+C - Extra Move 8", 0x360ade0, 0x360ae00, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_EIJI_PALETTES_SD[] =
{
    { L"Eiji SD", 0x360ae00, 0x360ae20, indexKOFXISprites_Eiji },
    { L"Start+D - Super Stuff 1", 0x360ae20, 0x360ae40, indexKOFXISprites_Eiji, 0x20 },
    { L"Start+D - Electric Palette", 0x360ae40, 0x360ae60, indexKOFXISprites_Eiji, 0x41 },
    { L"Start+D - Darker Palette", 0x360ae60, 0x360ae80, indexKOFXISprites_Eiji, 0x40 },
    { L"Start+D - Super Stuff 2", 0x360ae80, 0x360aea0, indexKOFXISprites_Eiji, 0x21 },
    { L"Start+D - Character Extra 1", 0x360aea0, 0x360aec0, indexKOFXISprites_Eiji, 0x30 },
    { L"Start+D - Character Extra 2", 0x360aec0, 0x360aee0, indexKOFXISprites_Eiji, 0x31 },
    { L"Start+D - Character Extra 3", 0x360aee0, 0x360af00, indexKOFXISprites_Eiji, 0x32 },
    { L"Start+D - Extra Move 1", 0x360af00, 0x360af20, indexKOFXISprites_Eiji, 0x10 },
    { L"Start+D - Extra Move 2", 0x360af20, 0x360af40, indexKOFXISprites_Eiji, 0x11 },
    { L"Start+D - Extra Move 3", 0x360af40, 0x360af60, indexKOFXISprites_Eiji, 0x12 },
    { L"Start+D - Extra Move 4", 0x360af60, 0x360af80, indexKOFXISprites_Eiji, 0x13 },
    { L"Start+D - Extra Move 5", 0x360af80, 0x360afa0, indexKOFXISprites_Eiji, 0x14 },
    { L"Start+D - Extra Move 6", 0x360afa0, 0x360afc0, indexKOFXISprites_Eiji, 0x15 },
    { L"Start+D - Extra Move 7", 0x360afc0, 0x360afe0, indexKOFXISprites_Eiji, 0x16 },
    { L"Start+D - Extra Move 8", 0x360afe0, 0x360b000, indexKOFXISprites_Eiji, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_A[] =
{
    { L"K' A", 0x3763800, 0x3763820, indexKOFXISprites_K },
    { L"A - Super Stuff 1", 0x3763820, 0x3763840, indexKOFXISprites_K, 0x20 },
    { L"A - Electric Palette", 0x3763840, 0x3763860, indexKOFXISprites_K, 0x41 },
    { L"A - Darker Palette", 0x3763860, 0x3763880, indexKOFXISprites_K, 0x40 },
    { L"A - Super Stuff 2", 0x3763880, 0x37638a0, indexKOFXISprites_K, 0x21 },
    { L"A - Character Extra 1", 0x37638a0, 0x37638c0, indexKOFXISprites_K, 0x30 },
    { L"A - Character Extra 2", 0x37638c0, 0x37638e0, indexKOFXISprites_K, 0x31 },
    { L"A - Character Extra 3", 0x37638e0, 0x3763900, indexKOFXISprites_K, 0x32 },
    { L"A - Extra Move 1", 0x3763900, 0x3763920, indexKOFXISprites_K, 0x10 },
    { L"A - Extra Move 2", 0x3763920, 0x3763940, indexKOFXISprites_K, 0x11 },
    { L"A - Extra Move 3", 0x3763940, 0x3763960, indexKOFXISprites_K, 0x12 },
    { L"A - Extra Move 4", 0x3763960, 0x3763980, indexKOFXISprites_K, 0x13 },
    { L"A - Extra Move 5", 0x3763980, 0x37639a0, indexKOFXISprites_K, 0x14 },
    { L"A - Extra Move 6", 0x37639a0, 0x37639c0, indexKOFXISprites_K, 0x15 },
    { L"A - Extra Move 7", 0x37639c0, 0x37639e0, indexKOFXISprites_K, 0x16 },
    { L"A - Extra Move 8", 0x37639e0, 0x3763a00, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_B[] =
{
    { L"K' B", 0x3763a00, 0x3763a20, indexKOFXISprites_K },
    { L"B - Super Stuff 1", 0x3763a20, 0x3763a40, indexKOFXISprites_K, 0x20 },
    { L"B - Electric Palette", 0x3763a40, 0x3763a60, indexKOFXISprites_K, 0x41 },
    { L"B - Darker Palette", 0x3763a60, 0x3763a80, indexKOFXISprites_K, 0x40 },
    { L"B - Super Stuff 2", 0x3763a80, 0x3763aa0, indexKOFXISprites_K, 0x21 },
    { L"B - Character Extra 1", 0x3763aa0, 0x3763ac0, indexKOFXISprites_K, 0x30 },
    { L"B - Character Extra 2", 0x3763ac0, 0x3763ae0, indexKOFXISprites_K, 0x31 },
    { L"B - Character Extra 3", 0x3763ae0, 0x3763b00, indexKOFXISprites_K, 0x32 },
    { L"B - Extra Move 1", 0x3763b00, 0x3763b20, indexKOFXISprites_K, 0x10 },
    { L"B - Extra Move 2", 0x3763b20, 0x3763b40, indexKOFXISprites_K, 0x11 },
    { L"B - Extra Move 3", 0x3763b40, 0x3763b60, indexKOFXISprites_K, 0x12 },
    { L"B - Extra Move 4", 0x3763b60, 0x3763b80, indexKOFXISprites_K, 0x13 },
    { L"B - Extra Move 5", 0x3763b80, 0x3763ba0, indexKOFXISprites_K, 0x14 },
    { L"B - Extra Move 6", 0x3763ba0, 0x3763bc0, indexKOFXISprites_K, 0x15 },
    { L"B - Extra Move 7", 0x3763bc0, 0x3763be0, indexKOFXISprites_K, 0x16 },
    { L"B - Extra Move 8", 0x3763be0, 0x3763c00, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_C[] =
{
    { L"K' C", 0x3763c00, 0x3763c20, indexKOFXISprites_K },
    { L"C - Super Stuff 1", 0x3763c20, 0x3763c40, indexKOFXISprites_K, 0x20 },
    { L"C - Electric Palette", 0x3763c40, 0x3763c60, indexKOFXISprites_K, 0x41 },
    { L"C - Darker Palette", 0x3763c60, 0x3763c80, indexKOFXISprites_K, 0x40 },
    { L"C - Super Stuff 2", 0x3763c80, 0x3763ca0, indexKOFXISprites_K, 0x21 },
    { L"C - Character Extra 1", 0x3763ca0, 0x3763cc0, indexKOFXISprites_K, 0x30 },
    { L"C - Character Extra 2", 0x3763cc0, 0x3763ce0, indexKOFXISprites_K, 0x31 },
    { L"C - Character Extra 3", 0x3763ce0, 0x3763d00, indexKOFXISprites_K, 0x32 },
    { L"C - Extra Move 1", 0x3763d00, 0x3763d20, indexKOFXISprites_K, 0x10 },
    { L"C - Extra Move 2", 0x3763d20, 0x3763d40, indexKOFXISprites_K, 0x11 },
    { L"C - Extra Move 3", 0x3763d40, 0x3763d60, indexKOFXISprites_K, 0x12 },
    { L"C - Extra Move 4", 0x3763d60, 0x3763d80, indexKOFXISprites_K, 0x13 },
    { L"C - Extra Move 5", 0x3763d80, 0x3763da0, indexKOFXISprites_K, 0x14 },
    { L"C - Extra Move 6", 0x3763da0, 0x3763dc0, indexKOFXISprites_K, 0x15 },
    { L"C - Extra Move 7", 0x3763dc0, 0x3763de0, indexKOFXISprites_K, 0x16 },
    { L"C - Extra Move 8", 0x3763de0, 0x3763e00, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_D[] =
{
    { L"K' D", 0x3763e00, 0x3763e20, indexKOFXISprites_K },
    { L"D - Super Stuff 1", 0x3763e20, 0x3763e40, indexKOFXISprites_K, 0x20 },
    { L"D - Electric Palette", 0x3763e40, 0x3763e60, indexKOFXISprites_K, 0x41 },
    { L"D - Darker Palette", 0x3763e60, 0x3763e80, indexKOFXISprites_K, 0x40 },
    { L"D - Super Stuff 2", 0x3763e80, 0x3763ea0, indexKOFXISprites_K, 0x21 },
    { L"D - Character Extra 1", 0x3763ea0, 0x3763ec0, indexKOFXISprites_K, 0x30 },
    { L"D - Character Extra 2", 0x3763ec0, 0x3763ee0, indexKOFXISprites_K, 0x31 },
    { L"D - Character Extra 3", 0x3763ee0, 0x3763f00, indexKOFXISprites_K, 0x32 },
    { L"D - Extra Move 1", 0x3763f00, 0x3763f20, indexKOFXISprites_K, 0x10 },
    { L"D - Extra Move 2", 0x3763f20, 0x3763f40, indexKOFXISprites_K, 0x11 },
    { L"D - Extra Move 3", 0x3763f40, 0x3763f60, indexKOFXISprites_K, 0x12 },
    { L"D - Extra Move 4", 0x3763f60, 0x3763f80, indexKOFXISprites_K, 0x13 },
    { L"D - Extra Move 5", 0x3763f80, 0x3763fa0, indexKOFXISprites_K, 0x14 },
    { L"D - Extra Move 6", 0x3763fa0, 0x3763fc0, indexKOFXISprites_K, 0x15 },
    { L"D - Extra Move 7", 0x3763fc0, 0x3763fe0, indexKOFXISprites_K, 0x16 },
    { L"D - Extra Move 8", 0x3763fe0, 0x3764000, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_EA[] =
{
    { L"K' EA", 0x3764000, 0x3764020, indexKOFXISprites_K },
    { L"E+A - Super Stuff 1", 0x3764020, 0x3764040, indexKOFXISprites_K, 0x20 },
    { L"E+A - Electric Palette", 0x3764040, 0x3764060, indexKOFXISprites_K, 0x41 },
    { L"E+A - Darker Palette", 0x3764060, 0x3764080, indexKOFXISprites_K, 0x40 },
    { L"E+A - Super Stuff 2", 0x3764080, 0x37640a0, indexKOFXISprites_K, 0x21 },
    { L"E+A - Character Extra 1", 0x37640a0, 0x37640c0, indexKOFXISprites_K, 0x30 },
    { L"E+A - Character Extra 2", 0x37640c0, 0x37640e0, indexKOFXISprites_K, 0x31 },
    { L"E+A - Character Extra 3", 0x37640e0, 0x3764100, indexKOFXISprites_K, 0x32 },
    { L"E+A - Extra Move 1", 0x3764100, 0x3764120, indexKOFXISprites_K, 0x10 },
    { L"E+A - Extra Move 2", 0x3764120, 0x3764140, indexKOFXISprites_K, 0x11 },
    { L"E+A - Extra Move 3", 0x3764140, 0x3764160, indexKOFXISprites_K, 0x12 },
    { L"E+A - Extra Move 4", 0x3764160, 0x3764180, indexKOFXISprites_K, 0x13 },
    { L"E+A - Extra Move 5", 0x3764180, 0x37641a0, indexKOFXISprites_K, 0x14 },
    { L"E+A - Extra Move 6", 0x37641a0, 0x37641c0, indexKOFXISprites_K, 0x15 },
    { L"E+A - Extra Move 7", 0x37641c0, 0x37641e0, indexKOFXISprites_K, 0x16 },
    { L"E+A - Extra Move 8", 0x37641e0, 0x3764200, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_EB[] =
{
    { L"K' EB", 0x3764200, 0x3764220, indexKOFXISprites_K },
    { L"E+B - Super Stuff 1", 0x3764220, 0x3764240, indexKOFXISprites_K, 0x20 },
    { L"E+B - Electric Palette", 0x3764240, 0x3764260, indexKOFXISprites_K, 0x41 },
    { L"E+B - Darker Palette", 0x3764260, 0x3764280, indexKOFXISprites_K, 0x40 },
    { L"E+B - Super Stuff 2", 0x3764280, 0x37642a0, indexKOFXISprites_K, 0x21 },
    { L"E+B - Character Extra 1", 0x37642a0, 0x37642c0, indexKOFXISprites_K, 0x30 },
    { L"E+B - Character Extra 2", 0x37642c0, 0x37642e0, indexKOFXISprites_K, 0x31 },
    { L"E+B - Character Extra 3", 0x37642e0, 0x3764300, indexKOFXISprites_K, 0x32 },
    { L"E+B - Extra Move 1", 0x3764300, 0x3764320, indexKOFXISprites_K, 0x10 },
    { L"E+B - Extra Move 2", 0x3764320, 0x3764340, indexKOFXISprites_K, 0x11 },
    { L"E+B - Extra Move 3", 0x3764340, 0x3764360, indexKOFXISprites_K, 0x12 },
    { L"E+B - Extra Move 4", 0x3764360, 0x3764380, indexKOFXISprites_K, 0x13 },
    { L"E+B - Extra Move 5", 0x3764380, 0x37643a0, indexKOFXISprites_K, 0x14 },
    { L"E+B - Extra Move 6", 0x37643a0, 0x37643c0, indexKOFXISprites_K, 0x15 },
    { L"E+B - Extra Move 7", 0x37643c0, 0x37643e0, indexKOFXISprites_K, 0x16 },
    { L"E+B - Extra Move 8", 0x37643e0, 0x3764400, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_EC[] =
{
    { L"K' EC", 0x3764400, 0x3764420, indexKOFXISprites_K },
    { L"E+C - Super Stuff 1", 0x3764420, 0x3764440, indexKOFXISprites_K, 0x20 },
    { L"E+C - Electric Palette", 0x3764440, 0x3764460, indexKOFXISprites_K, 0x41 },
    { L"E+C - Darker Palette", 0x3764460, 0x3764480, indexKOFXISprites_K, 0x40 },
    { L"E+C - Super Stuff 2", 0x3764480, 0x37644a0, indexKOFXISprites_K, 0x21 },
    { L"E+C - Character Extra 1", 0x37644a0, 0x37644c0, indexKOFXISprites_K, 0x30 },
    { L"E+C - Character Extra 2", 0x37644c0, 0x37644e0, indexKOFXISprites_K, 0x31 },
    { L"E+C - Character Extra 3", 0x37644e0, 0x3764500, indexKOFXISprites_K, 0x32 },
    { L"E+C - Extra Move 1", 0x3764500, 0x3764520, indexKOFXISprites_K, 0x10 },
    { L"E+C - Extra Move 2", 0x3764520, 0x3764540, indexKOFXISprites_K, 0x11 },
    { L"E+C - Extra Move 3", 0x3764540, 0x3764560, indexKOFXISprites_K, 0x12 },
    { L"E+C - Extra Move 4", 0x3764560, 0x3764580, indexKOFXISprites_K, 0x13 },
    { L"E+C - Extra Move 5", 0x3764580, 0x37645a0, indexKOFXISprites_K, 0x14 },
    { L"E+C - Extra Move 6", 0x37645a0, 0x37645c0, indexKOFXISprites_K, 0x15 },
    { L"E+C - Extra Move 7", 0x37645c0, 0x37645e0, indexKOFXISprites_K, 0x16 },
    { L"E+C - Extra Move 8", 0x37645e0, 0x3764600, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_ED[] =
{
    { L"K' ED", 0x3764600, 0x3764620, indexKOFXISprites_K },
    { L"E+D - Super Stuff 1", 0x3764620, 0x3764640, indexKOFXISprites_K, 0x20 },
    { L"E+D - Electric Palette", 0x3764640, 0x3764660, indexKOFXISprites_K, 0x41 },
    { L"E+D - Darker Palette", 0x3764660, 0x3764680, indexKOFXISprites_K, 0x40 },
    { L"E+D - Super Stuff 2", 0x3764680, 0x37646a0, indexKOFXISprites_K, 0x21 },
    { L"E+D - Character Extra 1", 0x37646a0, 0x37646c0, indexKOFXISprites_K, 0x30 },
    { L"E+D - Character Extra 2", 0x37646c0, 0x37646e0, indexKOFXISprites_K, 0x31 },
    { L"E+D - Character Extra 3", 0x37646e0, 0x3764700, indexKOFXISprites_K, 0x32 },
    { L"E+D - Extra Move 1", 0x3764700, 0x3764720, indexKOFXISprites_K, 0x10 },
    { L"E+D - Extra Move 2", 0x3764720, 0x3764740, indexKOFXISprites_K, 0x11 },
    { L"E+D - Extra Move 3", 0x3764740, 0x3764760, indexKOFXISprites_K, 0x12 },
    { L"E+D - Extra Move 4", 0x3764760, 0x3764780, indexKOFXISprites_K, 0x13 },
    { L"E+D - Extra Move 5", 0x3764780, 0x37647a0, indexKOFXISprites_K, 0x14 },
    { L"E+D - Extra Move 6", 0x37647a0, 0x37647c0, indexKOFXISprites_K, 0x15 },
    { L"E+D - Extra Move 7", 0x37647c0, 0x37647e0, indexKOFXISprites_K, 0x16 },
    { L"E+D - Extra Move 8", 0x37647e0, 0x3764800, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_SA[] =
{
    { L"K' SA", 0x3764800, 0x3764820, indexKOFXISprites_K },
    { L"Start+A - Super Stuff 1", 0x3764820, 0x3764840, indexKOFXISprites_K, 0x20 },
    { L"Start+A - Electric Palette", 0x3764840, 0x3764860, indexKOFXISprites_K, 0x41 },
    { L"Start+A - Darker Palette", 0x3764860, 0x3764880, indexKOFXISprites_K, 0x40 },
    { L"Start+A - Super Stuff 2", 0x3764880, 0x37648a0, indexKOFXISprites_K, 0x21 },
    { L"Start+A - Character Extra 1", 0x37648a0, 0x37648c0, indexKOFXISprites_K, 0x30 },
    { L"Start+A - Character Extra 2", 0x37648c0, 0x37648e0, indexKOFXISprites_K, 0x31 },
    { L"Start+A - Character Extra 3", 0x37648e0, 0x3764900, indexKOFXISprites_K, 0x32 },
    { L"Start+A - Extra Move 1", 0x3764900, 0x3764920, indexKOFXISprites_K, 0x10 },
    { L"Start+A - Extra Move 2", 0x3764920, 0x3764940, indexKOFXISprites_K, 0x11 },
    { L"Start+A - Extra Move 3", 0x3764940, 0x3764960, indexKOFXISprites_K, 0x12 },
    { L"Start+A - Extra Move 4", 0x3764960, 0x3764980, indexKOFXISprites_K, 0x13 },
    { L"Start+A - Extra Move 5", 0x3764980, 0x37649a0, indexKOFXISprites_K, 0x14 },
    { L"Start+A - Extra Move 6", 0x37649a0, 0x37649c0, indexKOFXISprites_K, 0x15 },
    { L"Start+A - Extra Move 7", 0x37649c0, 0x37649e0, indexKOFXISprites_K, 0x16 },
    { L"Start+A - Extra Move 8", 0x37649e0, 0x3764a00, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_SB[] =
{
    { L"K' SB", 0x3764a00, 0x3764a20, indexKOFXISprites_K },
    { L"Start+B - Super Stuff 1", 0x3764a20, 0x3764a40, indexKOFXISprites_K, 0x20 },
    { L"Start+B - Electric Palette", 0x3764a40, 0x3764a60, indexKOFXISprites_K, 0x41 },
    { L"Start+B - Darker Palette", 0x3764a60, 0x3764a80, indexKOFXISprites_K, 0x40 },
    { L"Start+B - Super Stuff 2", 0x3764a80, 0x3764aa0, indexKOFXISprites_K, 0x21 },
    { L"Start+B - Character Extra 1", 0x3764aa0, 0x3764ac0, indexKOFXISprites_K, 0x30 },
    { L"Start+B - Character Extra 2", 0x3764ac0, 0x3764ae0, indexKOFXISprites_K, 0x31 },
    { L"Start+B - Character Extra 3", 0x3764ae0, 0x3764b00, indexKOFXISprites_K, 0x32 },
    { L"Start+B - Extra Move 1", 0x3764b00, 0x3764b20, indexKOFXISprites_K, 0x10 },
    { L"Start+B - Extra Move 2", 0x3764b20, 0x3764b40, indexKOFXISprites_K, 0x11 },
    { L"Start+B - Extra Move 3", 0x3764b40, 0x3764b60, indexKOFXISprites_K, 0x12 },
    { L"Start+B - Extra Move 4", 0x3764b60, 0x3764b80, indexKOFXISprites_K, 0x13 },
    { L"Start+B - Extra Move 5", 0x3764b80, 0x3764ba0, indexKOFXISprites_K, 0x14 },
    { L"Start+B - Extra Move 6", 0x3764ba0, 0x3764bc0, indexKOFXISprites_K, 0x15 },
    { L"Start+B - Extra Move 7", 0x3764bc0, 0x3764be0, indexKOFXISprites_K, 0x16 },
    { L"Start+B - Extra Move 8", 0x3764be0, 0x3764c00, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_SC[] =
{
    { L"K' SC", 0x3764c00, 0x3764c20, indexKOFXISprites_K },
    { L"Start+C - Super Stuff 1", 0x3764c20, 0x3764c40, indexKOFXISprites_K, 0x20 },
    { L"Start+C - Electric Palette", 0x3764c40, 0x3764c60, indexKOFXISprites_K, 0x41 },
    { L"Start+C - Darker Palette", 0x3764c60, 0x3764c80, indexKOFXISprites_K, 0x40 },
    { L"Start+C - Super Stuff 2", 0x3764c80, 0x3764ca0, indexKOFXISprites_K, 0x21 },
    { L"Start+C - Character Extra 1", 0x3764ca0, 0x3764cc0, indexKOFXISprites_K, 0x30 },
    { L"Start+C - Character Extra 2", 0x3764cc0, 0x3764ce0, indexKOFXISprites_K, 0x31 },
    { L"Start+C - Character Extra 3", 0x3764ce0, 0x3764d00, indexKOFXISprites_K, 0x32 },
    { L"Start+C - Extra Move 1", 0x3764d00, 0x3764d20, indexKOFXISprites_K, 0x10 },
    { L"Start+C - Extra Move 2", 0x3764d20, 0x3764d40, indexKOFXISprites_K, 0x11 },
    { L"Start+C - Extra Move 3", 0x3764d40, 0x3764d60, indexKOFXISprites_K, 0x12 },
    { L"Start+C - Extra Move 4", 0x3764d60, 0x3764d80, indexKOFXISprites_K, 0x13 },
    { L"Start+C - Extra Move 5", 0x3764d80, 0x3764da0, indexKOFXISprites_K, 0x14 },
    { L"Start+C - Extra Move 6", 0x3764da0, 0x3764dc0, indexKOFXISprites_K, 0x15 },
    { L"Start+C - Extra Move 7", 0x3764dc0, 0x3764de0, indexKOFXISprites_K, 0x16 },
    { L"Start+C - Extra Move 8", 0x3764de0, 0x3764e00, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_K_PALETTES_SD[] =
{
    { L"K' SD", 0x3764e00, 0x3764e20, indexKOFXISprites_K },
    { L"Start+D - Super Stuff 1", 0x3764e20, 0x3764e40, indexKOFXISprites_K, 0x20 },
    { L"Start+D - Electric Palette", 0x3764e40, 0x3764e60, indexKOFXISprites_K, 0x41 },
    { L"Start+D - Darker Palette", 0x3764e60, 0x3764e80, indexKOFXISprites_K, 0x40 },
    { L"Start+D - Super Stuff 2", 0x3764e80, 0x3764ea0, indexKOFXISprites_K, 0x21 },
    { L"Start+D - Character Extra 1", 0x3764ea0, 0x3764ec0, indexKOFXISprites_K, 0x30 },
    { L"Start+D - Character Extra 2", 0x3764ec0, 0x3764ee0, indexKOFXISprites_K, 0x31 },
    { L"Start+D - Character Extra 3", 0x3764ee0, 0x3764f00, indexKOFXISprites_K, 0x32 },
    { L"Start+D - Extra Move 1", 0x3764f00, 0x3764f20, indexKOFXISprites_K, 0x10 },
    { L"Start+D - Extra Move 2", 0x3764f20, 0x3764f40, indexKOFXISprites_K, 0x11 },
    { L"Start+D - Extra Move 3", 0x3764f40, 0x3764f60, indexKOFXISprites_K, 0x12 },
    { L"Start+D - Extra Move 4", 0x3764f60, 0x3764f80, indexKOFXISprites_K, 0x13 },
    { L"Start+D - Extra Move 5", 0x3764f80, 0x3764fa0, indexKOFXISprites_K, 0x14 },
    { L"Start+D - Extra Move 6", 0x3764fa0, 0x3764fc0, indexKOFXISprites_K, 0x15 },
    { L"Start+D - Extra Move 7", 0x3764fc0, 0x3764fe0, indexKOFXISprites_K, 0x16 },
    { L"Start+D - Extra Move 8", 0x3764fe0, 0x3765000, indexKOFXISprites_K, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_A[] =
{
    { L"Kula A", 0x3901800, 0x3901820, indexKOFXISprites_Kula },
    { L"A - Super Stuff 1", 0x3901820, 0x3901840, indexKOFXISprites_Kula, 0x20 },
    { L"A - Electric Palette", 0x3901840, 0x3901860, indexKOFXISprites_Kula, 0x41 },
    { L"A - Darker Palette", 0x3901860, 0x3901880, indexKOFXISprites_Kula, 0x40 },
    { L"A - Super Stuff 2", 0x3901880, 0x39018a0, indexKOFXISprites_Kula, 0x21 },
    { L"A - Character Extra 1", 0x39018a0, 0x39018c0, indexKOFXISprites_Kula, 0x30 },
    { L"A - Character Extra 2", 0x39018c0, 0x39018e0, indexKOFXISprites_Kula, 0x31 },
    { L"A - Character Extra 3", 0x39018e0, 0x3901900, indexKOFXISprites_Kula, 0x32 },
    { L"A - Extra Move 1", 0x3901900, 0x3901920, indexKOFXISprites_Kula, 0x10 },
    { L"A - Extra Move 2", 0x3901920, 0x3901940, indexKOFXISprites_Kula, 0x11 },
    { L"A - Extra Move 3", 0x3901940, 0x3901960, indexKOFXISprites_Kula, 0x12 },
    { L"A - Extra Move 4", 0x3901960, 0x3901980, indexKOFXISprites_Kula, 0x13 },
    { L"A - Extra Move 5", 0x3901980, 0x39019a0, indexKOFXISprites_Kula, 0x14 },
    { L"A - Extra Move 6", 0x39019a0, 0x39019c0, indexKOFXISprites_Kula, 0x15 },
    { L"A - Extra Move 7", 0x39019c0, 0x39019e0, indexKOFXISprites_Kula, 0x16 },
    { L"A - Extra Move 8", 0x39019e0, 0x3901a00, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_B[] =
{
    { L"Kula B", 0x3901a00, 0x3901a20, indexKOFXISprites_Kula },
    { L"B - Super Stuff 1", 0x3901a20, 0x3901a40, indexKOFXISprites_Kula, 0x20 },
    { L"B - Electric Palette", 0x3901a40, 0x3901a60, indexKOFXISprites_Kula, 0x41 },
    { L"B - Darker Palette", 0x3901a60, 0x3901a80, indexKOFXISprites_Kula, 0x40 },
    { L"B - Super Stuff 2", 0x3901a80, 0x3901aa0, indexKOFXISprites_Kula, 0x21 },
    { L"B - Character Extra 1", 0x3901aa0, 0x3901ac0, indexKOFXISprites_Kula, 0x30 },
    { L"B - Character Extra 2", 0x3901ac0, 0x3901ae0, indexKOFXISprites_Kula, 0x31 },
    { L"B - Character Extra 3", 0x3901ae0, 0x3901b00, indexKOFXISprites_Kula, 0x32 },
    { L"B - Extra Move 1", 0x3901b00, 0x3901b20, indexKOFXISprites_Kula, 0x10 },
    { L"B - Extra Move 2", 0x3901b20, 0x3901b40, indexKOFXISprites_Kula, 0x11 },
    { L"B - Extra Move 3", 0x3901b40, 0x3901b60, indexKOFXISprites_Kula, 0x12 },
    { L"B - Extra Move 4", 0x3901b60, 0x3901b80, indexKOFXISprites_Kula, 0x13 },
    { L"B - Extra Move 5", 0x3901b80, 0x3901ba0, indexKOFXISprites_Kula, 0x14 },
    { L"B - Extra Move 6", 0x3901ba0, 0x3901bc0, indexKOFXISprites_Kula, 0x15 },
    { L"B - Extra Move 7", 0x3901bc0, 0x3901be0, indexKOFXISprites_Kula, 0x16 },
    { L"B - Extra Move 8", 0x3901be0, 0x3901c00, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_C[] =
{
    { L"Kula C", 0x3901c00, 0x3901c20, indexKOFXISprites_Kula },
    { L"C - Super Stuff 1", 0x3901c20, 0x3901c40, indexKOFXISprites_Kula, 0x20 },
    { L"C - Electric Palette", 0x3901c40, 0x3901c60, indexKOFXISprites_Kula, 0x41 },
    { L"C - Darker Palette", 0x3901c60, 0x3901c80, indexKOFXISprites_Kula, 0x40 },
    { L"C - Super Stuff 2", 0x3901c80, 0x3901ca0, indexKOFXISprites_Kula, 0x21 },
    { L"C - Character Extra 1", 0x3901ca0, 0x3901cc0, indexKOFXISprites_Kula, 0x30 },
    { L"C - Character Extra 2", 0x3901cc0, 0x3901ce0, indexKOFXISprites_Kula, 0x31 },
    { L"C - Character Extra 3", 0x3901ce0, 0x3901d00, indexKOFXISprites_Kula, 0x32 },
    { L"C - Extra Move 1", 0x3901d00, 0x3901d20, indexKOFXISprites_Kula, 0x10 },
    { L"C - Extra Move 2", 0x3901d20, 0x3901d40, indexKOFXISprites_Kula, 0x11 },
    { L"C - Extra Move 3", 0x3901d40, 0x3901d60, indexKOFXISprites_Kula, 0x12 },
    { L"C - Extra Move 4", 0x3901d60, 0x3901d80, indexKOFXISprites_Kula, 0x13 },
    { L"C - Extra Move 5", 0x3901d80, 0x3901da0, indexKOFXISprites_Kula, 0x14 },
    { L"C - Extra Move 6", 0x3901da0, 0x3901dc0, indexKOFXISprites_Kula, 0x15 },
    { L"C - Extra Move 7", 0x3901dc0, 0x3901de0, indexKOFXISprites_Kula, 0x16 },
    { L"C - Extra Move 8", 0x3901de0, 0x3901e00, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_D[] =
{
    { L"Kula D", 0x3901e00, 0x3901e20, indexKOFXISprites_Kula },
    { L"D - Super Stuff 1", 0x3901e20, 0x3901e40, indexKOFXISprites_Kula, 0x20 },
    { L"D - Electric Palette", 0x3901e40, 0x3901e60, indexKOFXISprites_Kula, 0x41 },
    { L"D - Darker Palette", 0x3901e60, 0x3901e80, indexKOFXISprites_Kula, 0x40 },
    { L"D - Super Stuff 2", 0x3901e80, 0x3901ea0, indexKOFXISprites_Kula, 0x21 },
    { L"D - Character Extra 1", 0x3901ea0, 0x3901ec0, indexKOFXISprites_Kula, 0x30 },
    { L"D - Character Extra 2", 0x3901ec0, 0x3901ee0, indexKOFXISprites_Kula, 0x31 },
    { L"D - Character Extra 3", 0x3901ee0, 0x3901f00, indexKOFXISprites_Kula, 0x32 },
    { L"D - Extra Move 1", 0x3901f00, 0x3901f20, indexKOFXISprites_Kula, 0x10 },
    { L"D - Extra Move 2", 0x3901f20, 0x3901f40, indexKOFXISprites_Kula, 0x11 },
    { L"D - Extra Move 3", 0x3901f40, 0x3901f60, indexKOFXISprites_Kula, 0x12 },
    { L"D - Extra Move 4", 0x3901f60, 0x3901f80, indexKOFXISprites_Kula, 0x13 },
    { L"D - Extra Move 5", 0x3901f80, 0x3901fa0, indexKOFXISprites_Kula, 0x14 },
    { L"D - Extra Move 6", 0x3901fa0, 0x3901fc0, indexKOFXISprites_Kula, 0x15 },
    { L"D - Extra Move 7", 0x3901fc0, 0x3901fe0, indexKOFXISprites_Kula, 0x16 },
    { L"D - Extra Move 8", 0x3901fe0, 0x3902000, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_EA[] =
{
    { L"Kula EA", 0x3902000, 0x3902020, indexKOFXISprites_Kula },
    { L"E+A - Super Stuff 1", 0x3902020, 0x3902040, indexKOFXISprites_Kula, 0x20 },
    { L"E+A - Electric Palette", 0x3902040, 0x3902060, indexKOFXISprites_Kula, 0x41 },
    { L"E+A - Darker Palette", 0x3902060, 0x3902080, indexKOFXISprites_Kula, 0x40 },
    { L"E+A - Super Stuff 2", 0x3902080, 0x39020a0, indexKOFXISprites_Kula, 0x21 },
    { L"E+A - Character Extra 1", 0x39020a0, 0x39020c0, indexKOFXISprites_Kula, 0x30 },
    { L"E+A - Character Extra 2", 0x39020c0, 0x39020e0, indexKOFXISprites_Kula, 0x31 },
    { L"E+A - Character Extra 3", 0x39020e0, 0x3902100, indexKOFXISprites_Kula, 0x32 },
    { L"E+A - Extra Move 1", 0x3902100, 0x3902120, indexKOFXISprites_Kula, 0x10 },
    { L"E+A - Extra Move 2", 0x3902120, 0x3902140, indexKOFXISprites_Kula, 0x11 },
    { L"E+A - Extra Move 3", 0x3902140, 0x3902160, indexKOFXISprites_Kula, 0x12 },
    { L"E+A - Extra Move 4", 0x3902160, 0x3902180, indexKOFXISprites_Kula, 0x13 },
    { L"E+A - Extra Move 5", 0x3902180, 0x39021a0, indexKOFXISprites_Kula, 0x14 },
    { L"E+A - Extra Move 6", 0x39021a0, 0x39021c0, indexKOFXISprites_Kula, 0x15 },
    { L"E+A - Extra Move 7", 0x39021c0, 0x39021e0, indexKOFXISprites_Kula, 0x16 },
    { L"E+A - Extra Move 8", 0x39021e0, 0x3902200, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_EB[] =
{
    { L"Kula EB", 0x3902200, 0x3902220, indexKOFXISprites_Kula },
    { L"E+B - Super Stuff 1", 0x3902220, 0x3902240, indexKOFXISprites_Kula, 0x20 },
    { L"E+B - Electric Palette", 0x3902240, 0x3902260, indexKOFXISprites_Kula, 0x41 },
    { L"E+B - Darker Palette", 0x3902260, 0x3902280, indexKOFXISprites_Kula, 0x40 },
    { L"E+B - Super Stuff 2", 0x3902280, 0x39022a0, indexKOFXISprites_Kula, 0x21 },
    { L"E+B - Character Extra 1", 0x39022a0, 0x39022c0, indexKOFXISprites_Kula, 0x30 },
    { L"E+B - Character Extra 2", 0x39022c0, 0x39022e0, indexKOFXISprites_Kula, 0x31 },
    { L"E+B - Character Extra 3", 0x39022e0, 0x3902300, indexKOFXISprites_Kula, 0x32 },
    { L"E+B - Extra Move 1", 0x3902300, 0x3902320, indexKOFXISprites_Kula, 0x10 },
    { L"E+B - Extra Move 2", 0x3902320, 0x3902340, indexKOFXISprites_Kula, 0x11 },
    { L"E+B - Extra Move 3", 0x3902340, 0x3902360, indexKOFXISprites_Kula, 0x12 },
    { L"E+B - Extra Move 4", 0x3902360, 0x3902380, indexKOFXISprites_Kula, 0x13 },
    { L"E+B - Extra Move 5", 0x3902380, 0x39023a0, indexKOFXISprites_Kula, 0x14 },
    { L"E+B - Extra Move 6", 0x39023a0, 0x39023c0, indexKOFXISprites_Kula, 0x15 },
    { L"E+B - Extra Move 7", 0x39023c0, 0x39023e0, indexKOFXISprites_Kula, 0x16 },
    { L"E+B - Extra Move 8", 0x39023e0, 0x3902400, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_EC[] =
{
    { L"Kula EC", 0x3902400, 0x3902420, indexKOFXISprites_Kula },
    { L"E+C - Super Stuff 1", 0x3902420, 0x3902440, indexKOFXISprites_Kula, 0x20 },
    { L"E+C - Electric Palette", 0x3902440, 0x3902460, indexKOFXISprites_Kula, 0x41 },
    { L"E+C - Darker Palette", 0x3902460, 0x3902480, indexKOFXISprites_Kula, 0x40 },
    { L"E+C - Super Stuff 2", 0x3902480, 0x39024a0, indexKOFXISprites_Kula, 0x21 },
    { L"E+C - Character Extra 1", 0x39024a0, 0x39024c0, indexKOFXISprites_Kula, 0x30 },
    { L"E+C - Character Extra 2", 0x39024c0, 0x39024e0, indexKOFXISprites_Kula, 0x31 },
    { L"E+C - Character Extra 3", 0x39024e0, 0x3902500, indexKOFXISprites_Kula, 0x32 },
    { L"E+C - Extra Move 1", 0x3902500, 0x3902520, indexKOFXISprites_Kula, 0x10 },
    { L"E+C - Extra Move 2", 0x3902520, 0x3902540, indexKOFXISprites_Kula, 0x11 },
    { L"E+C - Extra Move 3", 0x3902540, 0x3902560, indexKOFXISprites_Kula, 0x12 },
    { L"E+C - Extra Move 4", 0x3902560, 0x3902580, indexKOFXISprites_Kula, 0x13 },
    { L"E+C - Extra Move 5", 0x3902580, 0x39025a0, indexKOFXISprites_Kula, 0x14 },
    { L"E+C - Extra Move 6", 0x39025a0, 0x39025c0, indexKOFXISprites_Kula, 0x15 },
    { L"E+C - Extra Move 7", 0x39025c0, 0x39025e0, indexKOFXISprites_Kula, 0x16 },
    { L"E+C - Extra Move 8", 0x39025e0, 0x3902600, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_ED[] =
{
    { L"Kula ED", 0x3902600, 0x3902620, indexKOFXISprites_Kula },
    { L"E+D - Super Stuff 1", 0x3902620, 0x3902640, indexKOFXISprites_Kula, 0x20 },
    { L"E+D - Electric Palette", 0x3902640, 0x3902660, indexKOFXISprites_Kula, 0x41 },
    { L"E+D - Darker Palette", 0x3902660, 0x3902680, indexKOFXISprites_Kula, 0x40 },
    { L"E+D - Super Stuff 2", 0x3902680, 0x39026a0, indexKOFXISprites_Kula, 0x21 },
    { L"E+D - Character Extra 1", 0x39026a0, 0x39026c0, indexKOFXISprites_Kula, 0x30 },
    { L"E+D - Character Extra 2", 0x39026c0, 0x39026e0, indexKOFXISprites_Kula, 0x31 },
    { L"E+D - Character Extra 3", 0x39026e0, 0x3902700, indexKOFXISprites_Kula, 0x32 },
    { L"E+D - Extra Move 1", 0x3902700, 0x3902720, indexKOFXISprites_Kula, 0x10 },
    { L"E+D - Extra Move 2", 0x3902720, 0x3902740, indexKOFXISprites_Kula, 0x11 },
    { L"E+D - Extra Move 3", 0x3902740, 0x3902760, indexKOFXISprites_Kula, 0x12 },
    { L"E+D - Extra Move 4", 0x3902760, 0x3902780, indexKOFXISprites_Kula, 0x13 },
    { L"E+D - Extra Move 5", 0x3902780, 0x39027a0, indexKOFXISprites_Kula, 0x14 },
    { L"E+D - Extra Move 6", 0x39027a0, 0x39027c0, indexKOFXISprites_Kula, 0x15 },
    { L"E+D - Extra Move 7", 0x39027c0, 0x39027e0, indexKOFXISprites_Kula, 0x16 },
    { L"E+D - Extra Move 8", 0x39027e0, 0x3902800, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_SA[] =
{
    { L"Kula SA", 0x3902800, 0x3902820, indexKOFXISprites_Kula },
    { L"Start+A - Super Stuff 1", 0x3902820, 0x3902840, indexKOFXISprites_Kula, 0x20 },
    { L"Start+A - Electric Palette", 0x3902840, 0x3902860, indexKOFXISprites_Kula, 0x41 },
    { L"Start+A - Darker Palette", 0x3902860, 0x3902880, indexKOFXISprites_Kula, 0x40 },
    { L"Start+A - Super Stuff 2", 0x3902880, 0x39028a0, indexKOFXISprites_Kula, 0x21 },
    { L"Start+A - Character Extra 1", 0x39028a0, 0x39028c0, indexKOFXISprites_Kula, 0x30 },
    { L"Start+A - Character Extra 2", 0x39028c0, 0x39028e0, indexKOFXISprites_Kula, 0x31 },
    { L"Start+A - Character Extra 3", 0x39028e0, 0x3902900, indexKOFXISprites_Kula, 0x32 },
    { L"Start+A - Extra Move 1", 0x3902900, 0x3902920, indexKOFXISprites_Kula, 0x10 },
    { L"Start+A - Extra Move 2", 0x3902920, 0x3902940, indexKOFXISprites_Kula, 0x11 },
    { L"Start+A - Extra Move 3", 0x3902940, 0x3902960, indexKOFXISprites_Kula, 0x12 },
    { L"Start+A - Extra Move 4", 0x3902960, 0x3902980, indexKOFXISprites_Kula, 0x13 },
    { L"Start+A - Extra Move 5", 0x3902980, 0x39029a0, indexKOFXISprites_Kula, 0x14 },
    { L"Start+A - Extra Move 6", 0x39029a0, 0x39029c0, indexKOFXISprites_Kula, 0x15 },
    { L"Start+A - Extra Move 7", 0x39029c0, 0x39029e0, indexKOFXISprites_Kula, 0x16 },
    { L"Start+A - Extra Move 8", 0x39029e0, 0x3902a00, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_SB[] =
{
    { L"Kula SB", 0x3902a00, 0x3902a20, indexKOFXISprites_Kula },
    { L"Start+B - Super Stuff 1", 0x3902a20, 0x3902a40, indexKOFXISprites_Kula, 0x20 },
    { L"Start+B - Electric Palette", 0x3902a40, 0x3902a60, indexKOFXISprites_Kula, 0x41 },
    { L"Start+B - Darker Palette", 0x3902a60, 0x3902a80, indexKOFXISprites_Kula, 0x40 },
    { L"Start+B - Super Stuff 2", 0x3902a80, 0x3902aa0, indexKOFXISprites_Kula, 0x21 },
    { L"Start+B - Character Extra 1", 0x3902aa0, 0x3902ac0, indexKOFXISprites_Kula, 0x30 },
    { L"Start+B - Character Extra 2", 0x3902ac0, 0x3902ae0, indexKOFXISprites_Kula, 0x31 },
    { L"Start+B - Character Extra 3", 0x3902ae0, 0x3902b00, indexKOFXISprites_Kula, 0x32 },
    { L"Start+B - Extra Move 1", 0x3902b00, 0x3902b20, indexKOFXISprites_Kula, 0x10 },
    { L"Start+B - Extra Move 2", 0x3902b20, 0x3902b40, indexKOFXISprites_Kula, 0x11 },
    { L"Start+B - Extra Move 3", 0x3902b40, 0x3902b60, indexKOFXISprites_Kula, 0x12 },
    { L"Start+B - Extra Move 4", 0x3902b60, 0x3902b80, indexKOFXISprites_Kula, 0x13 },
    { L"Start+B - Extra Move 5", 0x3902b80, 0x3902ba0, indexKOFXISprites_Kula, 0x14 },
    { L"Start+B - Extra Move 6", 0x3902ba0, 0x3902bc0, indexKOFXISprites_Kula, 0x15 },
    { L"Start+B - Extra Move 7", 0x3902bc0, 0x3902be0, indexKOFXISprites_Kula, 0x16 },
    { L"Start+B - Extra Move 8", 0x3902be0, 0x3902c00, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_SC[] =
{
    { L"Kula SC", 0x3902c00, 0x3902c20, indexKOFXISprites_Kula },
    { L"Start+C - Super Stuff 1", 0x3902c20, 0x3902c40, indexKOFXISprites_Kula, 0x20 },
    { L"Start+C - Electric Palette", 0x3902c40, 0x3902c60, indexKOFXISprites_Kula, 0x41 },
    { L"Start+C - Darker Palette", 0x3902c60, 0x3902c80, indexKOFXISprites_Kula, 0x40 },
    { L"Start+C - Super Stuff 2", 0x3902c80, 0x3902ca0, indexKOFXISprites_Kula, 0x21 },
    { L"Start+C - Character Extra 1", 0x3902ca0, 0x3902cc0, indexKOFXISprites_Kula, 0x30 },
    { L"Start+C - Character Extra 2", 0x3902cc0, 0x3902ce0, indexKOFXISprites_Kula, 0x31 },
    { L"Start+C - Character Extra 3", 0x3902ce0, 0x3902d00, indexKOFXISprites_Kula, 0x32 },
    { L"Start+C - Extra Move 1", 0x3902d00, 0x3902d20, indexKOFXISprites_Kula, 0x10 },
    { L"Start+C - Extra Move 2", 0x3902d20, 0x3902d40, indexKOFXISprites_Kula, 0x11 },
    { L"Start+C - Extra Move 3", 0x3902d40, 0x3902d60, indexKOFXISprites_Kula, 0x12 },
    { L"Start+C - Extra Move 4", 0x3902d60, 0x3902d80, indexKOFXISprites_Kula, 0x13 },
    { L"Start+C - Extra Move 5", 0x3902d80, 0x3902da0, indexKOFXISprites_Kula, 0x14 },
    { L"Start+C - Extra Move 6", 0x3902da0, 0x3902dc0, indexKOFXISprites_Kula, 0x15 },
    { L"Start+C - Extra Move 7", 0x3902dc0, 0x3902de0, indexKOFXISprites_Kula, 0x16 },
    { L"Start+C - Extra Move 8", 0x3902de0, 0x3902e00, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KULA_PALETTES_SD[] =
{
    { L"Kula SD", 0x3902e00, 0x3902e20, indexKOFXISprites_Kula },
    { L"Start+D - Super Stuff 1", 0x3902e20, 0x3902e40, indexKOFXISprites_Kula, 0x20 },
    { L"Start+D - Electric Palette", 0x3902e40, 0x3902e60, indexKOFXISprites_Kula, 0x41 },
    { L"Start+D - Darker Palette", 0x3902e60, 0x3902e80, indexKOFXISprites_Kula, 0x40 },
    { L"Start+D - Super Stuff 2", 0x3902e80, 0x3902ea0, indexKOFXISprites_Kula, 0x21 },
    { L"Start+D - Character Extra 1", 0x3902ea0, 0x3902ec0, indexKOFXISprites_Kula, 0x30 },
    { L"Start+D - Character Extra 2", 0x3902ec0, 0x3902ee0, indexKOFXISprites_Kula, 0x31 },
    { L"Start+D - Character Extra 3", 0x3902ee0, 0x3902f00, indexKOFXISprites_Kula, 0x32 },
    { L"Start+D - Extra Move 1", 0x3902f00, 0x3902f20, indexKOFXISprites_Kula, 0x10 },
    { L"Start+D - Extra Move 2", 0x3902f20, 0x3902f40, indexKOFXISprites_Kula, 0x11 },
    { L"Start+D - Extra Move 3", 0x3902f40, 0x3902f60, indexKOFXISprites_Kula, 0x12 },
    { L"Start+D - Extra Move 4", 0x3902f60, 0x3902f80, indexKOFXISprites_Kula, 0x13 },
    { L"Start+D - Extra Move 5", 0x3902f80, 0x3902fa0, indexKOFXISprites_Kula, 0x14 },
    { L"Start+D - Extra Move 6", 0x3902fa0, 0x3902fc0, indexKOFXISprites_Kula, 0x15 },
    { L"Start+D - Extra Move 7", 0x3902fc0, 0x3902fe0, indexKOFXISprites_Kula, 0x16 },
    { L"Start+D - Extra Move 8", 0x3902fe0, 0x3903000, indexKOFXISprites_Kula, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_A[] =
{
    { L"Maxima A", 0x3ab6800, 0x3ab6820, indexKOFXISprites_Maxima },
    { L"A - Super Stuff 1", 0x3ab6820, 0x3ab6840, indexKOFXISprites_Maxima, 0x20 },
    { L"A - Electric Palette", 0x3ab6840, 0x3ab6860, indexKOFXISprites_Maxima, 0x41 },
    { L"A - Darker Palette", 0x3ab6860, 0x3ab6880, indexKOFXISprites_Maxima, 0x40 },
    { L"A - Super Stuff 2", 0x3ab6880, 0x3ab68a0, indexKOFXISprites_Maxima, 0x21 },
    { L"A - Character Extra 1", 0x3ab68a0, 0x3ab68c0, indexKOFXISprites_Maxima, 0x30 },
    { L"A - Character Extra 2", 0x3ab68c0, 0x3ab68e0, indexKOFXISprites_Maxima, 0x31 },
    { L"A - Character Extra 3", 0x3ab68e0, 0x3ab6900, indexKOFXISprites_Maxima, 0x32 },
    { L"A - Extra Move 1", 0x3ab6900, 0x3ab6920, indexKOFXISprites_Maxima, 0x10 },
    { L"A - Extra Move 2", 0x3ab6920, 0x3ab6940, indexKOFXISprites_Maxima, 0x11 },
    { L"A - Extra Move 3", 0x3ab6940, 0x3ab6960, indexKOFXISprites_Maxima, 0x12 },
    { L"A - Extra Move 4", 0x3ab6960, 0x3ab6980, indexKOFXISprites_Maxima, 0x13 },
    { L"A - Extra Move 5", 0x3ab6980, 0x3ab69a0, indexKOFXISprites_Maxima, 0x14 },
    { L"A - Extra Move 6", 0x3ab69a0, 0x3ab69c0, indexKOFXISprites_Maxima, 0x15 },
    { L"A - Extra Move 7", 0x3ab69c0, 0x3ab69e0, indexKOFXISprites_Maxima, 0x16 },
    { L"A - Extra Move 8", 0x3ab69e0, 0x3ab6a00, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_B[] =
{
    { L"Maxima B", 0x3ab6a00, 0x3ab6a20, indexKOFXISprites_Maxima },
    { L"B - Super Stuff 1", 0x3ab6a20, 0x3ab6a40, indexKOFXISprites_Maxima, 0x20 },
    { L"B - Electric Palette", 0x3ab6a40, 0x3ab6a60, indexKOFXISprites_Maxima, 0x41 },
    { L"B - Darker Palette", 0x3ab6a60, 0x3ab6a80, indexKOFXISprites_Maxima, 0x40 },
    { L"B - Super Stuff 2", 0x3ab6a80, 0x3ab6aa0, indexKOFXISprites_Maxima, 0x21 },
    { L"B - Character Extra 1", 0x3ab6aa0, 0x3ab6ac0, indexKOFXISprites_Maxima, 0x30 },
    { L"B - Character Extra 2", 0x3ab6ac0, 0x3ab6ae0, indexKOFXISprites_Maxima, 0x31 },
    { L"B - Character Extra 3", 0x3ab6ae0, 0x3ab6b00, indexKOFXISprites_Maxima, 0x32 },
    { L"B - Extra Move 1", 0x3ab6b00, 0x3ab6b20, indexKOFXISprites_Maxima, 0x10 },
    { L"B - Extra Move 2", 0x3ab6b20, 0x3ab6b40, indexKOFXISprites_Maxima, 0x11 },
    { L"B - Extra Move 3", 0x3ab6b40, 0x3ab6b60, indexKOFXISprites_Maxima, 0x12 },
    { L"B - Extra Move 4", 0x3ab6b60, 0x3ab6b80, indexKOFXISprites_Maxima, 0x13 },
    { L"B - Extra Move 5", 0x3ab6b80, 0x3ab6ba0, indexKOFXISprites_Maxima, 0x14 },
    { L"B - Extra Move 6", 0x3ab6ba0, 0x3ab6bc0, indexKOFXISprites_Maxima, 0x15 },
    { L"B - Extra Move 7", 0x3ab6bc0, 0x3ab6be0, indexKOFXISprites_Maxima, 0x16 },
    { L"B - Extra Move 8", 0x3ab6be0, 0x3ab6c00, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_C[] =
{
    { L"Maxima C", 0x3ab6c00, 0x3ab6c20, indexKOFXISprites_Maxima },
    { L"C - Super Stuff 1", 0x3ab6c20, 0x3ab6c40, indexKOFXISprites_Maxima, 0x20 },
    { L"C - Electric Palette", 0x3ab6c40, 0x3ab6c60, indexKOFXISprites_Maxima, 0x41 },
    { L"C - Darker Palette", 0x3ab6c60, 0x3ab6c80, indexKOFXISprites_Maxima, 0x40 },
    { L"C - Super Stuff 2", 0x3ab6c80, 0x3ab6ca0, indexKOFXISprites_Maxima, 0x21 },
    { L"C - Character Extra 1", 0x3ab6ca0, 0x3ab6cc0, indexKOFXISprites_Maxima, 0x30 },
    { L"C - Character Extra 2", 0x3ab6cc0, 0x3ab6ce0, indexKOFXISprites_Maxima, 0x31 },
    { L"C - Character Extra 3", 0x3ab6ce0, 0x3ab6d00, indexKOFXISprites_Maxima, 0x32 },
    { L"C - Extra Move 1", 0x3ab6d00, 0x3ab6d20, indexKOFXISprites_Maxima, 0x10 },
    { L"C - Extra Move 2", 0x3ab6d20, 0x3ab6d40, indexKOFXISprites_Maxima, 0x11 },
    { L"C - Extra Move 3", 0x3ab6d40, 0x3ab6d60, indexKOFXISprites_Maxima, 0x12 },
    { L"C - Extra Move 4", 0x3ab6d60, 0x3ab6d80, indexKOFXISprites_Maxima, 0x13 },
    { L"C - Extra Move 5", 0x3ab6d80, 0x3ab6da0, indexKOFXISprites_Maxima, 0x14 },
    { L"C - Extra Move 6", 0x3ab6da0, 0x3ab6dc0, indexKOFXISprites_Maxima, 0x15 },
    { L"C - Extra Move 7", 0x3ab6dc0, 0x3ab6de0, indexKOFXISprites_Maxima, 0x16 },
    { L"C - Extra Move 8", 0x3ab6de0, 0x3ab6e00, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_D[] =
{
    { L"Maxima D", 0x3ab6e00, 0x3ab6e20, indexKOFXISprites_Maxima },
    { L"D - Super Stuff 1", 0x3ab6e20, 0x3ab6e40, indexKOFXISprites_Maxima, 0x20 },
    { L"D - Electric Palette", 0x3ab6e40, 0x3ab6e60, indexKOFXISprites_Maxima, 0x41 },
    { L"D - Darker Palette", 0x3ab6e60, 0x3ab6e80, indexKOFXISprites_Maxima, 0x40 },
    { L"D - Super Stuff 2", 0x3ab6e80, 0x3ab6ea0, indexKOFXISprites_Maxima, 0x21 },
    { L"D - Character Extra 1", 0x3ab6ea0, 0x3ab6ec0, indexKOFXISprites_Maxima, 0x30 },
    { L"D - Character Extra 2", 0x3ab6ec0, 0x3ab6ee0, indexKOFXISprites_Maxima, 0x31 },
    { L"D - Character Extra 3", 0x3ab6ee0, 0x3ab6f00, indexKOFXISprites_Maxima, 0x32 },
    { L"D - Extra Move 1", 0x3ab6f00, 0x3ab6f20, indexKOFXISprites_Maxima, 0x10 },
    { L"D - Extra Move 2", 0x3ab6f20, 0x3ab6f40, indexKOFXISprites_Maxima, 0x11 },
    { L"D - Extra Move 3", 0x3ab6f40, 0x3ab6f60, indexKOFXISprites_Maxima, 0x12 },
    { L"D - Extra Move 4", 0x3ab6f60, 0x3ab6f80, indexKOFXISprites_Maxima, 0x13 },
    { L"D - Extra Move 5", 0x3ab6f80, 0x3ab6fa0, indexKOFXISprites_Maxima, 0x14 },
    { L"D - Extra Move 6", 0x3ab6fa0, 0x3ab6fc0, indexKOFXISprites_Maxima, 0x15 },
    { L"D - Extra Move 7", 0x3ab6fc0, 0x3ab6fe0, indexKOFXISprites_Maxima, 0x16 },
    { L"D - Extra Move 8", 0x3ab6fe0, 0x3ab7000, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_EA[] =
{
    { L"Maxima EA", 0x3ab7000, 0x3ab7020, indexKOFXISprites_Maxima },
    { L"E+A - Super Stuff 1", 0x3ab7020, 0x3ab7040, indexKOFXISprites_Maxima, 0x20 },
    { L"E+A - Electric Palette", 0x3ab7040, 0x3ab7060, indexKOFXISprites_Maxima, 0x41 },
    { L"E+A - Darker Palette", 0x3ab7060, 0x3ab7080, indexKOFXISprites_Maxima, 0x40 },
    { L"E+A - Super Stuff 2", 0x3ab7080, 0x3ab70a0, indexKOFXISprites_Maxima, 0x21 },
    { L"E+A - Character Extra 1", 0x3ab70a0, 0x3ab70c0, indexKOFXISprites_Maxima, 0x30 },
    { L"E+A - Character Extra 2", 0x3ab70c0, 0x3ab70e0, indexKOFXISprites_Maxima, 0x31 },
    { L"E+A - Character Extra 3", 0x3ab70e0, 0x3ab7100, indexKOFXISprites_Maxima, 0x32 },
    { L"E+A - Extra Move 1", 0x3ab7100, 0x3ab7120, indexKOFXISprites_Maxima, 0x10 },
    { L"E+A - Extra Move 2", 0x3ab7120, 0x3ab7140, indexKOFXISprites_Maxima, 0x11 },
    { L"E+A - Extra Move 3", 0x3ab7140, 0x3ab7160, indexKOFXISprites_Maxima, 0x12 },
    { L"E+A - Extra Move 4", 0x3ab7160, 0x3ab7180, indexKOFXISprites_Maxima, 0x13 },
    { L"E+A - Extra Move 5", 0x3ab7180, 0x3ab71a0, indexKOFXISprites_Maxima, 0x14 },
    { L"E+A - Extra Move 6", 0x3ab71a0, 0x3ab71c0, indexKOFXISprites_Maxima, 0x15 },
    { L"E+A - Extra Move 7", 0x3ab71c0, 0x3ab71e0, indexKOFXISprites_Maxima, 0x16 },
    { L"E+A - Extra Move 8", 0x3ab71e0, 0x3ab7200, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_EB[] =
{
    { L"Maxima EB", 0x3ab7200, 0x3ab7220, indexKOFXISprites_Maxima },
    { L"E+B - Super Stuff 1", 0x3ab7220, 0x3ab7240, indexKOFXISprites_Maxima, 0x20 },
    { L"E+B - Electric Palette", 0x3ab7240, 0x3ab7260, indexKOFXISprites_Maxima, 0x41 },
    { L"E+B - Darker Palette", 0x3ab7260, 0x3ab7280, indexKOFXISprites_Maxima, 0x40 },
    { L"E+B - Super Stuff 2", 0x3ab7280, 0x3ab72a0, indexKOFXISprites_Maxima, 0x21 },
    { L"E+B - Character Extra 1", 0x3ab72a0, 0x3ab72c0, indexKOFXISprites_Maxima, 0x30 },
    { L"E+B - Character Extra 2", 0x3ab72c0, 0x3ab72e0, indexKOFXISprites_Maxima, 0x31 },
    { L"E+B - Character Extra 3", 0x3ab72e0, 0x3ab7300, indexKOFXISprites_Maxima, 0x32 },
    { L"E+B - Extra Move 1", 0x3ab7300, 0x3ab7320, indexKOFXISprites_Maxima, 0x10 },
    { L"E+B - Extra Move 2", 0x3ab7320, 0x3ab7340, indexKOFXISprites_Maxima, 0x11 },
    { L"E+B - Extra Move 3", 0x3ab7340, 0x3ab7360, indexKOFXISprites_Maxima, 0x12 },
    { L"E+B - Extra Move 4", 0x3ab7360, 0x3ab7380, indexKOFXISprites_Maxima, 0x13 },
    { L"E+B - Extra Move 5", 0x3ab7380, 0x3ab73a0, indexKOFXISprites_Maxima, 0x14 },
    { L"E+B - Extra Move 6", 0x3ab73a0, 0x3ab73c0, indexKOFXISprites_Maxima, 0x15 },
    { L"E+B - Extra Move 7", 0x3ab73c0, 0x3ab73e0, indexKOFXISprites_Maxima, 0x16 },
    { L"E+B - Extra Move 8", 0x3ab73e0, 0x3ab7400, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_EC[] =
{
    { L"Maxima EC", 0x3ab7400, 0x3ab7420, indexKOFXISprites_Maxima },
    { L"E+C - Super Stuff 1", 0x3ab7420, 0x3ab7440, indexKOFXISprites_Maxima, 0x20 },
    { L"E+C - Electric Palette", 0x3ab7440, 0x3ab7460, indexKOFXISprites_Maxima, 0x41 },
    { L"E+C - Darker Palette", 0x3ab7460, 0x3ab7480, indexKOFXISprites_Maxima, 0x40 },
    { L"E+C - Super Stuff 2", 0x3ab7480, 0x3ab74a0, indexKOFXISprites_Maxima, 0x21 },
    { L"E+C - Character Extra 1", 0x3ab74a0, 0x3ab74c0, indexKOFXISprites_Maxima, 0x30 },
    { L"E+C - Character Extra 2", 0x3ab74c0, 0x3ab74e0, indexKOFXISprites_Maxima, 0x31 },
    { L"E+C - Character Extra 3", 0x3ab74e0, 0x3ab7500, indexKOFXISprites_Maxima, 0x32 },
    { L"E+C - Extra Move 1", 0x3ab7500, 0x3ab7520, indexKOFXISprites_Maxima, 0x10 },
    { L"E+C - Extra Move 2", 0x3ab7520, 0x3ab7540, indexKOFXISprites_Maxima, 0x11 },
    { L"E+C - Extra Move 3", 0x3ab7540, 0x3ab7560, indexKOFXISprites_Maxima, 0x12 },
    { L"E+C - Extra Move 4", 0x3ab7560, 0x3ab7580, indexKOFXISprites_Maxima, 0x13 },
    { L"E+C - Extra Move 5", 0x3ab7580, 0x3ab75a0, indexKOFXISprites_Maxima, 0x14 },
    { L"E+C - Extra Move 6", 0x3ab75a0, 0x3ab75c0, indexKOFXISprites_Maxima, 0x15 },
    { L"E+C - Extra Move 7", 0x3ab75c0, 0x3ab75e0, indexKOFXISprites_Maxima, 0x16 },
    { L"E+C - Extra Move 8", 0x3ab75e0, 0x3ab7600, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_ED[] =
{
    { L"Maxima ED", 0x3ab7600, 0x3ab7620, indexKOFXISprites_Maxima },
    { L"E+D - Super Stuff 1", 0x3ab7620, 0x3ab7640, indexKOFXISprites_Maxima, 0x20 },
    { L"E+D - Electric Palette", 0x3ab7640, 0x3ab7660, indexKOFXISprites_Maxima, 0x41 },
    { L"E+D - Darker Palette", 0x3ab7660, 0x3ab7680, indexKOFXISprites_Maxima, 0x40 },
    { L"E+D - Super Stuff 2", 0x3ab7680, 0x3ab76a0, indexKOFXISprites_Maxima, 0x21 },
    { L"E+D - Character Extra 1", 0x3ab76a0, 0x3ab76c0, indexKOFXISprites_Maxima, 0x30 },
    { L"E+D - Character Extra 2", 0x3ab76c0, 0x3ab76e0, indexKOFXISprites_Maxima, 0x31 },
    { L"E+D - Character Extra 3", 0x3ab76e0, 0x3ab7700, indexKOFXISprites_Maxima, 0x32 },
    { L"E+D - Extra Move 1", 0x3ab7700, 0x3ab7720, indexKOFXISprites_Maxima, 0x10 },
    { L"E+D - Extra Move 2", 0x3ab7720, 0x3ab7740, indexKOFXISprites_Maxima, 0x11 },
    { L"E+D - Extra Move 3", 0x3ab7740, 0x3ab7760, indexKOFXISprites_Maxima, 0x12 },
    { L"E+D - Extra Move 4", 0x3ab7760, 0x3ab7780, indexKOFXISprites_Maxima, 0x13 },
    { L"E+D - Extra Move 5", 0x3ab7780, 0x3ab77a0, indexKOFXISprites_Maxima, 0x14 },
    { L"E+D - Extra Move 6", 0x3ab77a0, 0x3ab77c0, indexKOFXISprites_Maxima, 0x15 },
    { L"E+D - Extra Move 7", 0x3ab77c0, 0x3ab77e0, indexKOFXISprites_Maxima, 0x16 },
    { L"E+D - Extra Move 8", 0x3ab77e0, 0x3ab7800, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_SA[] =
{
    { L"Maxima SA", 0x3ab7800, 0x3ab7820, indexKOFXISprites_Maxima },
    { L"Start+A - Super Stuff 1", 0x3ab7820, 0x3ab7840, indexKOFXISprites_Maxima, 0x20 },
    { L"Start+A - Electric Palette", 0x3ab7840, 0x3ab7860, indexKOFXISprites_Maxima, 0x41 },
    { L"Start+A - Darker Palette", 0x3ab7860, 0x3ab7880, indexKOFXISprites_Maxima, 0x40 },
    { L"Start+A - Super Stuff 2", 0x3ab7880, 0x3ab78a0, indexKOFXISprites_Maxima, 0x21 },
    { L"Start+A - Character Extra 1", 0x3ab78a0, 0x3ab78c0, indexKOFXISprites_Maxima, 0x30 },
    { L"Start+A - Character Extra 2", 0x3ab78c0, 0x3ab78e0, indexKOFXISprites_Maxima, 0x31 },
    { L"Start+A - Character Extra 3", 0x3ab78e0, 0x3ab7900, indexKOFXISprites_Maxima, 0x32 },
    { L"Start+A - Extra Move 1", 0x3ab7900, 0x3ab7920, indexKOFXISprites_Maxima, 0x10 },
    { L"Start+A - Extra Move 2", 0x3ab7920, 0x3ab7940, indexKOFXISprites_Maxima, 0x11 },
    { L"Start+A - Extra Move 3", 0x3ab7940, 0x3ab7960, indexKOFXISprites_Maxima, 0x12 },
    { L"Start+A - Extra Move 4", 0x3ab7960, 0x3ab7980, indexKOFXISprites_Maxima, 0x13 },
    { L"Start+A - Extra Move 5", 0x3ab7980, 0x3ab79a0, indexKOFXISprites_Maxima, 0x14 },
    { L"Start+A - Extra Move 6", 0x3ab79a0, 0x3ab79c0, indexKOFXISprites_Maxima, 0x15 },
    { L"Start+A - Extra Move 7", 0x3ab79c0, 0x3ab79e0, indexKOFXISprites_Maxima, 0x16 },
    { L"Start+A - Extra Move 8", 0x3ab79e0, 0x3ab7a00, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_SB[] =
{
    { L"Maxima SB", 0x3ab7a00, 0x3ab7a20, indexKOFXISprites_Maxima },
    { L"Start+B - Super Stuff 1", 0x3ab7a20, 0x3ab7a40, indexKOFXISprites_Maxima, 0x20 },
    { L"Start+B - Electric Palette", 0x3ab7a40, 0x3ab7a60, indexKOFXISprites_Maxima, 0x41 },
    { L"Start+B - Darker Palette", 0x3ab7a60, 0x3ab7a80, indexKOFXISprites_Maxima, 0x40 },
    { L"Start+B - Super Stuff 2", 0x3ab7a80, 0x3ab7aa0, indexKOFXISprites_Maxima, 0x21 },
    { L"Start+B - Character Extra 1", 0x3ab7aa0, 0x3ab7ac0, indexKOFXISprites_Maxima, 0x30 },
    { L"Start+B - Character Extra 2", 0x3ab7ac0, 0x3ab7ae0, indexKOFXISprites_Maxima, 0x31 },
    { L"Start+B - Character Extra 3", 0x3ab7ae0, 0x3ab7b00, indexKOFXISprites_Maxima, 0x32 },
    { L"Start+B - Extra Move 1", 0x3ab7b00, 0x3ab7b20, indexKOFXISprites_Maxima, 0x10 },
    { L"Start+B - Extra Move 2", 0x3ab7b20, 0x3ab7b40, indexKOFXISprites_Maxima, 0x11 },
    { L"Start+B - Extra Move 3", 0x3ab7b40, 0x3ab7b60, indexKOFXISprites_Maxima, 0x12 },
    { L"Start+B - Extra Move 4", 0x3ab7b60, 0x3ab7b80, indexKOFXISprites_Maxima, 0x13 },
    { L"Start+B - Extra Move 5", 0x3ab7b80, 0x3ab7ba0, indexKOFXISprites_Maxima, 0x14 },
    { L"Start+B - Extra Move 6", 0x3ab7ba0, 0x3ab7bc0, indexKOFXISprites_Maxima, 0x15 },
    { L"Start+B - Extra Move 7", 0x3ab7bc0, 0x3ab7be0, indexKOFXISprites_Maxima, 0x16 },
    { L"Start+B - Extra Move 8", 0x3ab7be0, 0x3ab7c00, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_SC[] =
{
    { L"Maxima SC", 0x3ab7c00, 0x3ab7c20, indexKOFXISprites_Maxima },
    { L"Start+C - Super Stuff 1", 0x3ab7c20, 0x3ab7c40, indexKOFXISprites_Maxima, 0x20 },
    { L"Start+C - Electric Palette", 0x3ab7c40, 0x3ab7c60, indexKOFXISprites_Maxima, 0x41 },
    { L"Start+C - Darker Palette", 0x3ab7c60, 0x3ab7c80, indexKOFXISprites_Maxima, 0x40 },
    { L"Start+C - Super Stuff 2", 0x3ab7c80, 0x3ab7ca0, indexKOFXISprites_Maxima, 0x21 },
    { L"Start+C - Character Extra 1", 0x3ab7ca0, 0x3ab7cc0, indexKOFXISprites_Maxima, 0x30 },
    { L"Start+C - Character Extra 2", 0x3ab7cc0, 0x3ab7ce0, indexKOFXISprites_Maxima, 0x31 },
    { L"Start+C - Character Extra 3", 0x3ab7ce0, 0x3ab7d00, indexKOFXISprites_Maxima, 0x32 },
    { L"Start+C - Extra Move 1", 0x3ab7d00, 0x3ab7d20, indexKOFXISprites_Maxima, 0x10 },
    { L"Start+C - Extra Move 2", 0x3ab7d20, 0x3ab7d40, indexKOFXISprites_Maxima, 0x11 },
    { L"Start+C - Extra Move 3", 0x3ab7d40, 0x3ab7d60, indexKOFXISprites_Maxima, 0x12 },
    { L"Start+C - Extra Move 4", 0x3ab7d60, 0x3ab7d80, indexKOFXISprites_Maxima, 0x13 },
    { L"Start+C - Extra Move 5", 0x3ab7d80, 0x3ab7da0, indexKOFXISprites_Maxima, 0x14 },
    { L"Start+C - Extra Move 6", 0x3ab7da0, 0x3ab7dc0, indexKOFXISprites_Maxima, 0x15 },
    { L"Start+C - Extra Move 7", 0x3ab7dc0, 0x3ab7de0, indexKOFXISprites_Maxima, 0x16 },
    { L"Start+C - Extra Move 8", 0x3ab7de0, 0x3ab7e00, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAXIMA_PALETTES_SD[] =
{
    { L"Maxima SD", 0x3ab7e00, 0x3ab7e20, indexKOFXISprites_Maxima },
    { L"Start+D - Super Stuff 1", 0x3ab7e20, 0x3ab7e40, indexKOFXISprites_Maxima, 0x20 },
    { L"Start+D - Electric Palette", 0x3ab7e40, 0x3ab7e60, indexKOFXISprites_Maxima, 0x41 },
    { L"Start+D - Darker Palette", 0x3ab7e60, 0x3ab7e80, indexKOFXISprites_Maxima, 0x40 },
    { L"Start+D - Super Stuff 2", 0x3ab7e80, 0x3ab7ea0, indexKOFXISprites_Maxima, 0x21 },
    { L"Start+D - Character Extra 1", 0x3ab7ea0, 0x3ab7ec0, indexKOFXISprites_Maxima, 0x30 },
    { L"Start+D - Character Extra 2", 0x3ab7ec0, 0x3ab7ee0, indexKOFXISprites_Maxima, 0x31 },
    { L"Start+D - Character Extra 3", 0x3ab7ee0, 0x3ab7f00, indexKOFXISprites_Maxima, 0x32 },
    { L"Start+D - Extra Move 1", 0x3ab7f00, 0x3ab7f20, indexKOFXISprites_Maxima, 0x10 },
    { L"Start+D - Extra Move 2", 0x3ab7f20, 0x3ab7f40, indexKOFXISprites_Maxima, 0x11 },
    { L"Start+D - Extra Move 3", 0x3ab7f40, 0x3ab7f60, indexKOFXISprites_Maxima, 0x12 },
    { L"Start+D - Extra Move 4", 0x3ab7f60, 0x3ab7f80, indexKOFXISprites_Maxima, 0x13 },
    { L"Start+D - Extra Move 5", 0x3ab7f80, 0x3ab7fa0, indexKOFXISprites_Maxima, 0x14 },
    { L"Start+D - Extra Move 6", 0x3ab7fa0, 0x3ab7fc0, indexKOFXISprites_Maxima, 0x15 },
    { L"Start+D - Extra Move 7", 0x3ab7fc0, 0x3ab7fe0, indexKOFXISprites_Maxima, 0x16 },
    { L"Start+D - Extra Move 8", 0x3ab7fe0, 0x3ab8000, indexKOFXISprites_Maxima, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_A[] =
{
    { L"Kyo A", 0x3c57800, 0x3c57820, indexKOFXISprites_Kyo },
    { L"A - Super Stuff 1", 0x3c57820, 0x3c57840, indexKOFXISprites_Kyo, 0x20 },
    { L"A - Electric Palette", 0x3c57840, 0x3c57860, indexKOFXISprites_Kyo, 0x41 },
    { L"A - Darker Palette", 0x3c57860, 0x3c57880, indexKOFXISprites_Kyo, 0x40 },
    { L"A - Super Stuff 2", 0x3c57880, 0x3c578a0, indexKOFXISprites_Kyo, 0x21 },
    { L"A - Character Extra 1", 0x3c578a0, 0x3c578c0, indexKOFXISprites_Kyo, 0x30 },
    { L"A - Character Extra 2", 0x3c578c0, 0x3c578e0, indexKOFXISprites_Kyo, 0x31 },
    { L"A - Character Extra 3", 0x3c578e0, 0x3c57900, indexKOFXISprites_Kyo, 0x32 },
    { L"A - Extra Move 1", 0x3c57900, 0x3c57920, indexKOFXISprites_Kyo, 0x10 },
    { L"A - Extra Move 2", 0x3c57920, 0x3c57940, indexKOFXISprites_Kyo, 0x11 },
    { L"A - Extra Move 3", 0x3c57940, 0x3c57960, indexKOFXISprites_Kyo, 0x12 },
    { L"A - Extra Move 4", 0x3c57960, 0x3c57980, indexKOFXISprites_Kyo, 0x13 },
    { L"A - Extra Move 5", 0x3c57980, 0x3c579a0, indexKOFXISprites_Kyo, 0x14 },
    { L"A - Extra Move 6", 0x3c579a0, 0x3c579c0, indexKOFXISprites_Kyo, 0x15 },
    { L"A - Extra Move 7", 0x3c579c0, 0x3c579e0, indexKOFXISprites_Kyo, 0x16 },
    { L"A - Extra Move 8", 0x3c579e0, 0x3c57a00, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_B[] =
{
    { L"Kyo B", 0x3c57a00, 0x3c57a20, indexKOFXISprites_Kyo },
    { L"B - Super Stuff 1", 0x3c57a20, 0x3c57a40, indexKOFXISprites_Kyo, 0x20 },
    { L"B - Electric Palette", 0x3c57a40, 0x3c57a60, indexKOFXISprites_Kyo, 0x41 },
    { L"B - Darker Palette", 0x3c57a60, 0x3c57a80, indexKOFXISprites_Kyo, 0x40 },
    { L"B - Super Stuff 2", 0x3c57a80, 0x3c57aa0, indexKOFXISprites_Kyo, 0x21 },
    { L"B - Character Extra 1", 0x3c57aa0, 0x3c57ac0, indexKOFXISprites_Kyo, 0x30 },
    { L"B - Character Extra 2", 0x3c57ac0, 0x3c57ae0, indexKOFXISprites_Kyo, 0x31 },
    { L"B - Character Extra 3", 0x3c57ae0, 0x3c57b00, indexKOFXISprites_Kyo, 0x32 },
    { L"B - Extra Move 1", 0x3c57b00, 0x3c57b20, indexKOFXISprites_Kyo, 0x10 },
    { L"B - Extra Move 2", 0x3c57b20, 0x3c57b40, indexKOFXISprites_Kyo, 0x11 },
    { L"B - Extra Move 3", 0x3c57b40, 0x3c57b60, indexKOFXISprites_Kyo, 0x12 },
    { L"B - Extra Move 4", 0x3c57b60, 0x3c57b80, indexKOFXISprites_Kyo, 0x13 },
    { L"B - Extra Move 5", 0x3c57b80, 0x3c57ba0, indexKOFXISprites_Kyo, 0x14 },
    { L"B - Extra Move 6", 0x3c57ba0, 0x3c57bc0, indexKOFXISprites_Kyo, 0x15 },
    { L"B - Extra Move 7", 0x3c57bc0, 0x3c57be0, indexKOFXISprites_Kyo, 0x16 },
    { L"B - Extra Move 8", 0x3c57be0, 0x3c57c00, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_C[] =
{
    { L"Kyo C", 0x3c57c00, 0x3c57c20, indexKOFXISprites_Kyo },
    { L"C - Super Stuff 1", 0x3c57c20, 0x3c57c40, indexKOFXISprites_Kyo, 0x20 },
    { L"C - Electric Palette", 0x3c57c40, 0x3c57c60, indexKOFXISprites_Kyo, 0x41 },
    { L"C - Darker Palette", 0x3c57c60, 0x3c57c80, indexKOFXISprites_Kyo, 0x40 },
    { L"C - Super Stuff 2", 0x3c57c80, 0x3c57ca0, indexKOFXISprites_Kyo, 0x21 },
    { L"C - Character Extra 1", 0x3c57ca0, 0x3c57cc0, indexKOFXISprites_Kyo, 0x30 },
    { L"C - Character Extra 2", 0x3c57cc0, 0x3c57ce0, indexKOFXISprites_Kyo, 0x31 },
    { L"C - Character Extra 3", 0x3c57ce0, 0x3c57d00, indexKOFXISprites_Kyo, 0x32 },
    { L"C - Extra Move 1", 0x3c57d00, 0x3c57d20, indexKOFXISprites_Kyo, 0x10 },
    { L"C - Extra Move 2", 0x3c57d20, 0x3c57d40, indexKOFXISprites_Kyo, 0x11 },
    { L"C - Extra Move 3", 0x3c57d40, 0x3c57d60, indexKOFXISprites_Kyo, 0x12 },
    { L"C - Extra Move 4", 0x3c57d60, 0x3c57d80, indexKOFXISprites_Kyo, 0x13 },
    { L"C - Extra Move 5", 0x3c57d80, 0x3c57da0, indexKOFXISprites_Kyo, 0x14 },
    { L"C - Extra Move 6", 0x3c57da0, 0x3c57dc0, indexKOFXISprites_Kyo, 0x15 },
    { L"C - Extra Move 7", 0x3c57dc0, 0x3c57de0, indexKOFXISprites_Kyo, 0x16 },
    { L"C - Extra Move 8", 0x3c57de0, 0x3c57e00, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_D[] =
{
    { L"Kyo D", 0x3c57e00, 0x3c57e20, indexKOFXISprites_Kyo },
    { L"D - Super Stuff 1", 0x3c57e20, 0x3c57e40, indexKOFXISprites_Kyo, 0x20 },
    { L"D - Electric Palette", 0x3c57e40, 0x3c57e60, indexKOFXISprites_Kyo, 0x41 },
    { L"D - Darker Palette", 0x3c57e60, 0x3c57e80, indexKOFXISprites_Kyo, 0x40 },
    { L"D - Super Stuff 2", 0x3c57e80, 0x3c57ea0, indexKOFXISprites_Kyo, 0x21 },
    { L"D - Character Extra 1", 0x3c57ea0, 0x3c57ec0, indexKOFXISprites_Kyo, 0x30 },
    { L"D - Character Extra 2", 0x3c57ec0, 0x3c57ee0, indexKOFXISprites_Kyo, 0x31 },
    { L"D - Character Extra 3", 0x3c57ee0, 0x3c57f00, indexKOFXISprites_Kyo, 0x32 },
    { L"D - Extra Move 1", 0x3c57f00, 0x3c57f20, indexKOFXISprites_Kyo, 0x10 },
    { L"D - Extra Move 2", 0x3c57f20, 0x3c57f40, indexKOFXISprites_Kyo, 0x11 },
    { L"D - Extra Move 3", 0x3c57f40, 0x3c57f60, indexKOFXISprites_Kyo, 0x12 },
    { L"D - Extra Move 4", 0x3c57f60, 0x3c57f80, indexKOFXISprites_Kyo, 0x13 },
    { L"D - Extra Move 5", 0x3c57f80, 0x3c57fa0, indexKOFXISprites_Kyo, 0x14 },
    { L"D - Extra Move 6", 0x3c57fa0, 0x3c57fc0, indexKOFXISprites_Kyo, 0x15 },
    { L"D - Extra Move 7", 0x3c57fc0, 0x3c57fe0, indexKOFXISprites_Kyo, 0x16 },
    { L"D - Extra Move 8", 0x3c57fe0, 0x3c58000, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_EA[] =
{
    { L"Kyo EA", 0x3c58000, 0x3c58020, indexKOFXISprites_Kyo },
    { L"E+A - Super Stuff 1", 0x3c58020, 0x3c58040, indexKOFXISprites_Kyo, 0x20 },
    { L"E+A - Electric Palette", 0x3c58040, 0x3c58060, indexKOFXISprites_Kyo, 0x41 },
    { L"E+A - Darker Palette", 0x3c58060, 0x3c58080, indexKOFXISprites_Kyo, 0x40 },
    { L"E+A - Super Stuff 2", 0x3c58080, 0x3c580a0, indexKOFXISprites_Kyo, 0x21 },
    { L"E+A - Character Extra 1", 0x3c580a0, 0x3c580c0, indexKOFXISprites_Kyo, 0x30 },
    { L"E+A - Character Extra 2", 0x3c580c0, 0x3c580e0, indexKOFXISprites_Kyo, 0x31 },
    { L"E+A - Character Extra 3", 0x3c580e0, 0x3c58100, indexKOFXISprites_Kyo, 0x32 },
    { L"E+A - Extra Move 1", 0x3c58100, 0x3c58120, indexKOFXISprites_Kyo, 0x10 },
    { L"E+A - Extra Move 2", 0x3c58120, 0x3c58140, indexKOFXISprites_Kyo, 0x11 },
    { L"E+A - Extra Move 3", 0x3c58140, 0x3c58160, indexKOFXISprites_Kyo, 0x12 },
    { L"E+A - Extra Move 4", 0x3c58160, 0x3c58180, indexKOFXISprites_Kyo, 0x13 },
    { L"E+A - Extra Move 5", 0x3c58180, 0x3c581a0, indexKOFXISprites_Kyo, 0x14 },
    { L"E+A - Extra Move 6", 0x3c581a0, 0x3c581c0, indexKOFXISprites_Kyo, 0x15 },
    { L"E+A - Extra Move 7", 0x3c581c0, 0x3c581e0, indexKOFXISprites_Kyo, 0x16 },
    { L"E+A - Extra Move 8", 0x3c581e0, 0x3c58200, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_EB[] =
{
    { L"Kyo EB", 0x3c58200, 0x3c58220, indexKOFXISprites_Kyo },
    { L"E+B - Super Stuff 1", 0x3c58220, 0x3c58240, indexKOFXISprites_Kyo, 0x20 },
    { L"E+B - Electric Palette", 0x3c58240, 0x3c58260, indexKOFXISprites_Kyo, 0x41 },
    { L"E+B - Darker Palette", 0x3c58260, 0x3c58280, indexKOFXISprites_Kyo, 0x40 },
    { L"E+B - Super Stuff 2", 0x3c58280, 0x3c582a0, indexKOFXISprites_Kyo, 0x21 },
    { L"E+B - Character Extra 1", 0x3c582a0, 0x3c582c0, indexKOFXISprites_Kyo, 0x30 },
    { L"E+B - Character Extra 2", 0x3c582c0, 0x3c582e0, indexKOFXISprites_Kyo, 0x31 },
    { L"E+B - Character Extra 3", 0x3c582e0, 0x3c58300, indexKOFXISprites_Kyo, 0x32 },
    { L"E+B - Extra Move 1", 0x3c58300, 0x3c58320, indexKOFXISprites_Kyo, 0x10 },
    { L"E+B - Extra Move 2", 0x3c58320, 0x3c58340, indexKOFXISprites_Kyo, 0x11 },
    { L"E+B - Extra Move 3", 0x3c58340, 0x3c58360, indexKOFXISprites_Kyo, 0x12 },
    { L"E+B - Extra Move 4", 0x3c58360, 0x3c58380, indexKOFXISprites_Kyo, 0x13 },
    { L"E+B - Extra Move 5", 0x3c58380, 0x3c583a0, indexKOFXISprites_Kyo, 0x14 },
    { L"E+B - Extra Move 6", 0x3c583a0, 0x3c583c0, indexKOFXISprites_Kyo, 0x15 },
    { L"E+B - Extra Move 7", 0x3c583c0, 0x3c583e0, indexKOFXISprites_Kyo, 0x16 },
    { L"E+B - Extra Move 8", 0x3c583e0, 0x3c58400, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_EC[] =
{
    { L"Kyo EC", 0x3c58400, 0x3c58420, indexKOFXISprites_Kyo },
    { L"E+C - Super Stuff 1", 0x3c58420, 0x3c58440, indexKOFXISprites_Kyo, 0x20 },
    { L"E+C - Electric Palette", 0x3c58440, 0x3c58460, indexKOFXISprites_Kyo, 0x41 },
    { L"E+C - Darker Palette", 0x3c58460, 0x3c58480, indexKOFXISprites_Kyo, 0x40 },
    { L"E+C - Super Stuff 2", 0x3c58480, 0x3c584a0, indexKOFXISprites_Kyo, 0x21 },
    { L"E+C - Character Extra 1", 0x3c584a0, 0x3c584c0, indexKOFXISprites_Kyo, 0x30 },
    { L"E+C - Character Extra 2", 0x3c584c0, 0x3c584e0, indexKOFXISprites_Kyo, 0x31 },
    { L"E+C - Character Extra 3", 0x3c584e0, 0x3c58500, indexKOFXISprites_Kyo, 0x32 },
    { L"E+C - Extra Move 1", 0x3c58500, 0x3c58520, indexKOFXISprites_Kyo, 0x10 },
    { L"E+C - Extra Move 2", 0x3c58520, 0x3c58540, indexKOFXISprites_Kyo, 0x11 },
    { L"E+C - Extra Move 3", 0x3c58540, 0x3c58560, indexKOFXISprites_Kyo, 0x12 },
    { L"E+C - Extra Move 4", 0x3c58560, 0x3c58580, indexKOFXISprites_Kyo, 0x13 },
    { L"E+C - Extra Move 5", 0x3c58580, 0x3c585a0, indexKOFXISprites_Kyo, 0x14 },
    { L"E+C - Extra Move 6", 0x3c585a0, 0x3c585c0, indexKOFXISprites_Kyo, 0x15 },
    { L"E+C - Extra Move 7", 0x3c585c0, 0x3c585e0, indexKOFXISprites_Kyo, 0x16 },
    { L"E+C - Extra Move 8", 0x3c585e0, 0x3c58600, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_ED[] =
{
    { L"Kyo ED", 0x3c58600, 0x3c58620, indexKOFXISprites_Kyo },
    { L"E+D - Super Stuff 1", 0x3c58620, 0x3c58640, indexKOFXISprites_Kyo, 0x20 },
    { L"E+D - Electric Palette", 0x3c58640, 0x3c58660, indexKOFXISprites_Kyo, 0x41 },
    { L"E+D - Darker Palette", 0x3c58660, 0x3c58680, indexKOFXISprites_Kyo, 0x40 },
    { L"E+D - Super Stuff 2", 0x3c58680, 0x3c586a0, indexKOFXISprites_Kyo, 0x21 },
    { L"E+D - Character Extra 1", 0x3c586a0, 0x3c586c0, indexKOFXISprites_Kyo, 0x30 },
    { L"E+D - Character Extra 2", 0x3c586c0, 0x3c586e0, indexKOFXISprites_Kyo, 0x31 },
    { L"E+D - Character Extra 3", 0x3c586e0, 0x3c58700, indexKOFXISprites_Kyo, 0x32 },
    { L"E+D - Extra Move 1", 0x3c58700, 0x3c58720, indexKOFXISprites_Kyo, 0x10 },
    { L"E+D - Extra Move 2", 0x3c58720, 0x3c58740, indexKOFXISprites_Kyo, 0x11 },
    { L"E+D - Extra Move 3", 0x3c58740, 0x3c58760, indexKOFXISprites_Kyo, 0x12 },
    { L"E+D - Extra Move 4", 0x3c58760, 0x3c58780, indexKOFXISprites_Kyo, 0x13 },
    { L"E+D - Extra Move 5", 0x3c58780, 0x3c587a0, indexKOFXISprites_Kyo, 0x14 },
    { L"E+D - Extra Move 6", 0x3c587a0, 0x3c587c0, indexKOFXISprites_Kyo, 0x15 },
    { L"E+D - Extra Move 7", 0x3c587c0, 0x3c587e0, indexKOFXISprites_Kyo, 0x16 },
    { L"E+D - Extra Move 8", 0x3c587e0, 0x3c58800, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_SA[] =
{
    { L"Kyo SA", 0x3c58800, 0x3c58820, indexKOFXISprites_Kyo },
    { L"Start+A - Super Stuff 1", 0x3c58820, 0x3c58840, indexKOFXISprites_Kyo, 0x20 },
    { L"Start+A - Electric Palette", 0x3c58840, 0x3c58860, indexKOFXISprites_Kyo, 0x41 },
    { L"Start+A - Darker Palette", 0x3c58860, 0x3c58880, indexKOFXISprites_Kyo, 0x40 },
    { L"Start+A - Super Stuff 2", 0x3c58880, 0x3c588a0, indexKOFXISprites_Kyo, 0x21 },
    { L"Start+A - Character Extra 1", 0x3c588a0, 0x3c588c0, indexKOFXISprites_Kyo, 0x30 },
    { L"Start+A - Character Extra 2", 0x3c588c0, 0x3c588e0, indexKOFXISprites_Kyo, 0x31 },
    { L"Start+A - Character Extra 3", 0x3c588e0, 0x3c58900, indexKOFXISprites_Kyo, 0x32 },
    { L"Start+A - Extra Move 1", 0x3c58900, 0x3c58920, indexKOFXISprites_Kyo, 0x10 },
    { L"Start+A - Extra Move 2", 0x3c58920, 0x3c58940, indexKOFXISprites_Kyo, 0x11 },
    { L"Start+A - Extra Move 3", 0x3c58940, 0x3c58960, indexKOFXISprites_Kyo, 0x12 },
    { L"Start+A - Extra Move 4", 0x3c58960, 0x3c58980, indexKOFXISprites_Kyo, 0x13 },
    { L"Start+A - Extra Move 5", 0x3c58980, 0x3c589a0, indexKOFXISprites_Kyo, 0x14 },
    { L"Start+A - Extra Move 6", 0x3c589a0, 0x3c589c0, indexKOFXISprites_Kyo, 0x15 },
    { L"Start+A - Extra Move 7", 0x3c589c0, 0x3c589e0, indexKOFXISprites_Kyo, 0x16 },
    { L"Start+A - Extra Move 8", 0x3c589e0, 0x3c58a00, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_SB[] =
{
    { L"Kyo SB", 0x3c58a00, 0x3c58a20, indexKOFXISprites_Kyo },
    { L"Start+B - Super Stuff 1", 0x3c58a20, 0x3c58a40, indexKOFXISprites_Kyo, 0x20 },
    { L"Start+B - Electric Palette", 0x3c58a40, 0x3c58a60, indexKOFXISprites_Kyo, 0x41 },
    { L"Start+B - Darker Palette", 0x3c58a60, 0x3c58a80, indexKOFXISprites_Kyo, 0x40 },
    { L"Start+B - Super Stuff 2", 0x3c58a80, 0x3c58aa0, indexKOFXISprites_Kyo, 0x21 },
    { L"Start+B - Character Extra 1", 0x3c58aa0, 0x3c58ac0, indexKOFXISprites_Kyo, 0x30 },
    { L"Start+B - Character Extra 2", 0x3c58ac0, 0x3c58ae0, indexKOFXISprites_Kyo, 0x31 },
    { L"Start+B - Character Extra 3", 0x3c58ae0, 0x3c58b00, indexKOFXISprites_Kyo, 0x32 },
    { L"Start+B - Extra Move 1", 0x3c58b00, 0x3c58b20, indexKOFXISprites_Kyo, 0x10 },
    { L"Start+B - Extra Move 2", 0x3c58b20, 0x3c58b40, indexKOFXISprites_Kyo, 0x11 },
    { L"Start+B - Extra Move 3", 0x3c58b40, 0x3c58b60, indexKOFXISprites_Kyo, 0x12 },
    { L"Start+B - Extra Move 4", 0x3c58b60, 0x3c58b80, indexKOFXISprites_Kyo, 0x13 },
    { L"Start+B - Extra Move 5", 0x3c58b80, 0x3c58ba0, indexKOFXISprites_Kyo, 0x14 },
    { L"Start+B - Extra Move 6", 0x3c58ba0, 0x3c58bc0, indexKOFXISprites_Kyo, 0x15 },
    { L"Start+B - Extra Move 7", 0x3c58bc0, 0x3c58be0, indexKOFXISprites_Kyo, 0x16 },
    { L"Start+B - Extra Move 8", 0x3c58be0, 0x3c58c00, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_SC[] =
{
    { L"Kyo SC", 0x3c58c00, 0x3c58c20, indexKOFXISprites_Kyo },
    { L"Start+C - Super Stuff 1", 0x3c58c20, 0x3c58c40, indexKOFXISprites_Kyo, 0x20 },
    { L"Start+C - Electric Palette", 0x3c58c40, 0x3c58c60, indexKOFXISprites_Kyo, 0x41 },
    { L"Start+C - Darker Palette", 0x3c58c60, 0x3c58c80, indexKOFXISprites_Kyo, 0x40 },
    { L"Start+C - Super Stuff 2", 0x3c58c80, 0x3c58ca0, indexKOFXISprites_Kyo, 0x21 },
    { L"Start+C - Character Extra 1", 0x3c58ca0, 0x3c58cc0, indexKOFXISprites_Kyo, 0x30 },
    { L"Start+C - Character Extra 2", 0x3c58cc0, 0x3c58ce0, indexKOFXISprites_Kyo, 0x31 },
    { L"Start+C - Character Extra 3", 0x3c58ce0, 0x3c58d00, indexKOFXISprites_Kyo, 0x32 },
    { L"Start+C - Extra Move 1", 0x3c58d00, 0x3c58d20, indexKOFXISprites_Kyo, 0x10 },
    { L"Start+C - Extra Move 2", 0x3c58d20, 0x3c58d40, indexKOFXISprites_Kyo, 0x11 },
    { L"Start+C - Extra Move 3", 0x3c58d40, 0x3c58d60, indexKOFXISprites_Kyo, 0x12 },
    { L"Start+C - Extra Move 4", 0x3c58d60, 0x3c58d80, indexKOFXISprites_Kyo, 0x13 },
    { L"Start+C - Extra Move 5", 0x3c58d80, 0x3c58da0, indexKOFXISprites_Kyo, 0x14 },
    { L"Start+C - Extra Move 6", 0x3c58da0, 0x3c58dc0, indexKOFXISprites_Kyo, 0x15 },
    { L"Start+C - Extra Move 7", 0x3c58dc0, 0x3c58de0, indexKOFXISprites_Kyo, 0x16 },
    { L"Start+C - Extra Move 8", 0x3c58de0, 0x3c58e00, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_KYO_PALETTES_SD[] =
{
    { L"Kyo SD", 0x3c58e00, 0x3c58e20, indexKOFXISprites_Kyo },
    { L"Start+D - Super Stuff 1", 0x3c58e20, 0x3c58e40, indexKOFXISprites_Kyo, 0x20 },
    { L"Start+D - Electric Palette", 0x3c58e40, 0x3c58e60, indexKOFXISprites_Kyo, 0x41 },
    { L"Start+D - Darker Palette", 0x3c58e60, 0x3c58e80, indexKOFXISprites_Kyo, 0x40 },
    { L"Start+D - Super Stuff 2", 0x3c58e80, 0x3c58ea0, indexKOFXISprites_Kyo, 0x21 },
    { L"Start+D - Character Extra 1", 0x3c58ea0, 0x3c58ec0, indexKOFXISprites_Kyo, 0x30 },
    { L"Start+D - Character Extra 2", 0x3c58ec0, 0x3c58ee0, indexKOFXISprites_Kyo, 0x31 },
    { L"Start+D - Character Extra 3", 0x3c58ee0, 0x3c58f00, indexKOFXISprites_Kyo, 0x32 },
    { L"Start+D - Extra Move 1", 0x3c58f00, 0x3c58f20, indexKOFXISprites_Kyo, 0x10 },
    { L"Start+D - Extra Move 2", 0x3c58f20, 0x3c58f40, indexKOFXISprites_Kyo, 0x11 },
    { L"Start+D - Extra Move 3", 0x3c58f40, 0x3c58f60, indexKOFXISprites_Kyo, 0x12 },
    { L"Start+D - Extra Move 4", 0x3c58f60, 0x3c58f80, indexKOFXISprites_Kyo, 0x13 },
    { L"Start+D - Extra Move 5", 0x3c58f80, 0x3c58fa0, indexKOFXISprites_Kyo, 0x14 },
    { L"Start+D - Extra Move 6", 0x3c58fa0, 0x3c58fc0, indexKOFXISprites_Kyo, 0x15 },
    { L"Start+D - Extra Move 7", 0x3c58fc0, 0x3c58fe0, indexKOFXISprites_Kyo, 0x16 },
    { L"Start+D - Extra Move 8", 0x3c58fe0, 0x3c59000, indexKOFXISprites_Kyo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_A[] =
{
    { L"Iori A", 0x3df6000, 0x3df6020, indexKOFXISprites_Iori },
    { L"A - Super Stuff 1", 0x3df6020, 0x3df6040, indexKOFXISprites_Iori, 0x20 },
    { L"A - Electric Palette", 0x3df6040, 0x3df6060, indexKOFXISprites_Iori, 0x41 },
    { L"A - Darker Palette", 0x3df6060, 0x3df6080, indexKOFXISprites_Iori, 0x40 },
    { L"A - Super Stuff 2", 0x3df6080, 0x3df60a0, indexKOFXISprites_Iori, 0x21 },
    { L"A - Character Extra 1", 0x3df60a0, 0x3df60c0, indexKOFXISprites_Iori, 0x30 },
    { L"A - Character Extra 2", 0x3df60c0, 0x3df60e0, indexKOFXISprites_Iori, 0x31 },
    { L"A - Character Extra 3", 0x3df60e0, 0x3df6100, indexKOFXISprites_Iori, 0x32 },
    { L"A - Extra Move 1", 0x3df6100, 0x3df6120, indexKOFXISprites_Iori, 0x10 },
    { L"A - Extra Move 2", 0x3df6120, 0x3df6140, indexKOFXISprites_Iori, 0x11 },
    { L"A - Extra Move 3", 0x3df6140, 0x3df6160, indexKOFXISprites_Iori, 0x12 },
    { L"A - Extra Move 4", 0x3df6160, 0x3df6180, indexKOFXISprites_Iori, 0x13 },
    { L"A - Extra Move 5", 0x3df6180, 0x3df61a0, indexKOFXISprites_Iori, 0x14 },
    { L"A - Extra Move 6", 0x3df61a0, 0x3df61c0, indexKOFXISprites_Iori, 0x15 },
    { L"A - Extra Move 7", 0x3df61c0, 0x3df61e0, indexKOFXISprites_Iori, 0x16 },
    { L"A - Extra Move 8", 0x3df61e0, 0x3df6200, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_B[] =
{
    { L"Iori B", 0x3df6200, 0x3df6220, indexKOFXISprites_Iori },
    { L"B - Super Stuff 1", 0x3df6220, 0x3df6240, indexKOFXISprites_Iori, 0x20 },
    { L"B - Electric Palette", 0x3df6240, 0x3df6260, indexKOFXISprites_Iori, 0x41 },
    { L"B - Darker Palette", 0x3df6260, 0x3df6280, indexKOFXISprites_Iori, 0x40 },
    { L"B - Super Stuff 2", 0x3df6280, 0x3df62a0, indexKOFXISprites_Iori, 0x21 },
    { L"B - Character Extra 1", 0x3df62a0, 0x3df62c0, indexKOFXISprites_Iori, 0x30 },
    { L"B - Character Extra 2", 0x3df62c0, 0x3df62e0, indexKOFXISprites_Iori, 0x31 },
    { L"B - Character Extra 3", 0x3df62e0, 0x3df6300, indexKOFXISprites_Iori, 0x32 },
    { L"B - Extra Move 1", 0x3df6300, 0x3df6320, indexKOFXISprites_Iori, 0x10 },
    { L"B - Extra Move 2", 0x3df6320, 0x3df6340, indexKOFXISprites_Iori, 0x11 },
    { L"B - Extra Move 3", 0x3df6340, 0x3df6360, indexKOFXISprites_Iori, 0x12 },
    { L"B - Extra Move 4", 0x3df6360, 0x3df6380, indexKOFXISprites_Iori, 0x13 },
    { L"B - Extra Move 5", 0x3df6380, 0x3df63a0, indexKOFXISprites_Iori, 0x14 },
    { L"B - Extra Move 6", 0x3df63a0, 0x3df63c0, indexKOFXISprites_Iori, 0x15 },
    { L"B - Extra Move 7", 0x3df63c0, 0x3df63e0, indexKOFXISprites_Iori, 0x16 },
    { L"B - Extra Move 8", 0x3df63e0, 0x3df6400, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_C[] =
{
    { L"Iori C", 0x3df6400, 0x3df6420, indexKOFXISprites_Iori },
    { L"C - Super Stuff 1", 0x3df6420, 0x3df6440, indexKOFXISprites_Iori, 0x20 },
    { L"C - Electric Palette", 0x3df6440, 0x3df6460, indexKOFXISprites_Iori, 0x41 },
    { L"C - Darker Palette", 0x3df6460, 0x3df6480, indexKOFXISprites_Iori, 0x40 },
    { L"C - Super Stuff 2", 0x3df6480, 0x3df64a0, indexKOFXISprites_Iori, 0x21 },
    { L"C - Character Extra 1", 0x3df64a0, 0x3df64c0, indexKOFXISprites_Iori, 0x30 },
    { L"C - Character Extra 2", 0x3df64c0, 0x3df64e0, indexKOFXISprites_Iori, 0x31 },
    { L"C - Character Extra 3", 0x3df64e0, 0x3df6500, indexKOFXISprites_Iori, 0x32 },
    { L"C - Extra Move 1", 0x3df6500, 0x3df6520, indexKOFXISprites_Iori, 0x10 },
    { L"C - Extra Move 2", 0x3df6520, 0x3df6540, indexKOFXISprites_Iori, 0x11 },
    { L"C - Extra Move 3", 0x3df6540, 0x3df6560, indexKOFXISprites_Iori, 0x12 },
    { L"C - Extra Move 4", 0x3df6560, 0x3df6580, indexKOFXISprites_Iori, 0x13 },
    { L"C - Extra Move 5", 0x3df6580, 0x3df65a0, indexKOFXISprites_Iori, 0x14 },
    { L"C - Extra Move 6", 0x3df65a0, 0x3df65c0, indexKOFXISprites_Iori, 0x15 },
    { L"C - Extra Move 7", 0x3df65c0, 0x3df65e0, indexKOFXISprites_Iori, 0x16 },
    { L"C - Extra Move 8", 0x3df65e0, 0x3df6600, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_D[] =
{
    { L"Iori D", 0x3df6600, 0x3df6620, indexKOFXISprites_Iori },
    { L"D - Super Stuff 1", 0x3df6620, 0x3df6640, indexKOFXISprites_Iori, 0x20 },
    { L"D - Electric Palette", 0x3df6640, 0x3df6660, indexKOFXISprites_Iori, 0x41 },
    { L"D - Darker Palette", 0x3df6660, 0x3df6680, indexKOFXISprites_Iori, 0x40 },
    { L"D - Super Stuff 2", 0x3df6680, 0x3df66a0, indexKOFXISprites_Iori, 0x21 },
    { L"D - Character Extra 1", 0x3df66a0, 0x3df66c0, indexKOFXISprites_Iori, 0x30 },
    { L"D - Character Extra 2", 0x3df66c0, 0x3df66e0, indexKOFXISprites_Iori, 0x31 },
    { L"D - Character Extra 3", 0x3df66e0, 0x3df6700, indexKOFXISprites_Iori, 0x32 },
    { L"D - Extra Move 1", 0x3df6700, 0x3df6720, indexKOFXISprites_Iori, 0x10 },
    { L"D - Extra Move 2", 0x3df6720, 0x3df6740, indexKOFXISprites_Iori, 0x11 },
    { L"D - Extra Move 3", 0x3df6740, 0x3df6760, indexKOFXISprites_Iori, 0x12 },
    { L"D - Extra Move 4", 0x3df6760, 0x3df6780, indexKOFXISprites_Iori, 0x13 },
    { L"D - Extra Move 5", 0x3df6780, 0x3df67a0, indexKOFXISprites_Iori, 0x14 },
    { L"D - Extra Move 6", 0x3df67a0, 0x3df67c0, indexKOFXISprites_Iori, 0x15 },
    { L"D - Extra Move 7", 0x3df67c0, 0x3df67e0, indexKOFXISprites_Iori, 0x16 },
    { L"D - Extra Move 8", 0x3df67e0, 0x3df6800, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_EA[] =
{
    { L"Iori EA", 0x3df6800, 0x3df6820, indexKOFXISprites_Iori },
    { L"E+A - Super Stuff 1", 0x3df6820, 0x3df6840, indexKOFXISprites_Iori, 0x20 },
    { L"E+A - Electric Palette", 0x3df6840, 0x3df6860, indexKOFXISprites_Iori, 0x41 },
    { L"E+A - Darker Palette", 0x3df6860, 0x3df6880, indexKOFXISprites_Iori, 0x40 },
    { L"E+A - Super Stuff 2", 0x3df6880, 0x3df68a0, indexKOFXISprites_Iori, 0x21 },
    { L"E+A - Character Extra 1", 0x3df68a0, 0x3df68c0, indexKOFXISprites_Iori, 0x30 },
    { L"E+A - Character Extra 2", 0x3df68c0, 0x3df68e0, indexKOFXISprites_Iori, 0x31 },
    { L"E+A - Character Extra 3", 0x3df68e0, 0x3df6900, indexKOFXISprites_Iori, 0x32 },
    { L"E+A - Extra Move 1", 0x3df6900, 0x3df6920, indexKOFXISprites_Iori, 0x10 },
    { L"E+A - Extra Move 2", 0x3df6920, 0x3df6940, indexKOFXISprites_Iori, 0x11 },
    { L"E+A - Extra Move 3", 0x3df6940, 0x3df6960, indexKOFXISprites_Iori, 0x12 },
    { L"E+A - Extra Move 4", 0x3df6960, 0x3df6980, indexKOFXISprites_Iori, 0x13 },
    { L"E+A - Extra Move 5", 0x3df6980, 0x3df69a0, indexKOFXISprites_Iori, 0x14 },
    { L"E+A - Extra Move 6", 0x3df69a0, 0x3df69c0, indexKOFXISprites_Iori, 0x15 },
    { L"E+A - Extra Move 7", 0x3df69c0, 0x3df69e0, indexKOFXISprites_Iori, 0x16 },
    { L"E+A - Extra Move 8", 0x3df69e0, 0x3df6a00, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_EB[] =
{
    { L"Iori EB", 0x3df6a00, 0x3df6a20, indexKOFXISprites_Iori },
    { L"E+B - Super Stuff 1", 0x3df6a20, 0x3df6a40, indexKOFXISprites_Iori, 0x20 },
    { L"E+B - Electric Palette", 0x3df6a40, 0x3df6a60, indexKOFXISprites_Iori, 0x41 },
    { L"E+B - Darker Palette", 0x3df6a60, 0x3df6a80, indexKOFXISprites_Iori, 0x40 },
    { L"E+B - Super Stuff 2", 0x3df6a80, 0x3df6aa0, indexKOFXISprites_Iori, 0x21 },
    { L"E+B - Character Extra 1", 0x3df6aa0, 0x3df6ac0, indexKOFXISprites_Iori, 0x30 },
    { L"E+B - Character Extra 2", 0x3df6ac0, 0x3df6ae0, indexKOFXISprites_Iori, 0x31 },
    { L"E+B - Character Extra 3", 0x3df6ae0, 0x3df6b00, indexKOFXISprites_Iori, 0x32 },
    { L"E+B - Extra Move 1", 0x3df6b00, 0x3df6b20, indexKOFXISprites_Iori, 0x10 },
    { L"E+B - Extra Move 2", 0x3df6b20, 0x3df6b40, indexKOFXISprites_Iori, 0x11 },
    { L"E+B - Extra Move 3", 0x3df6b40, 0x3df6b60, indexKOFXISprites_Iori, 0x12 },
    { L"E+B - Extra Move 4", 0x3df6b60, 0x3df6b80, indexKOFXISprites_Iori, 0x13 },
    { L"E+B - Extra Move 5", 0x3df6b80, 0x3df6ba0, indexKOFXISprites_Iori, 0x14 },
    { L"E+B - Extra Move 6", 0x3df6ba0, 0x3df6bc0, indexKOFXISprites_Iori, 0x15 },
    { L"E+B - Extra Move 7", 0x3df6bc0, 0x3df6be0, indexKOFXISprites_Iori, 0x16 },
    { L"E+B - Extra Move 8", 0x3df6be0, 0x3df6c00, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_EC[] =
{
    { L"Iori EC", 0x3df6c00, 0x3df6c20, indexKOFXISprites_Iori },
    { L"E+C - Super Stuff 1", 0x3df6c20, 0x3df6c40, indexKOFXISprites_Iori, 0x20 },
    { L"E+C - Electric Palette", 0x3df6c40, 0x3df6c60, indexKOFXISprites_Iori, 0x41 },
    { L"E+C - Darker Palette", 0x3df6c60, 0x3df6c80, indexKOFXISprites_Iori, 0x40 },
    { L"E+C - Super Stuff 2", 0x3df6c80, 0x3df6ca0, indexKOFXISprites_Iori, 0x21 },
    { L"E+C - Character Extra 1", 0x3df6ca0, 0x3df6cc0, indexKOFXISprites_Iori, 0x30 },
    { L"E+C - Character Extra 2", 0x3df6cc0, 0x3df6ce0, indexKOFXISprites_Iori, 0x31 },
    { L"E+C - Character Extra 3", 0x3df6ce0, 0x3df6d00, indexKOFXISprites_Iori, 0x32 },
    { L"E+C - Extra Move 1", 0x3df6d00, 0x3df6d20, indexKOFXISprites_Iori, 0x10 },
    { L"E+C - Extra Move 2", 0x3df6d20, 0x3df6d40, indexKOFXISprites_Iori, 0x11 },
    { L"E+C - Extra Move 3", 0x3df6d40, 0x3df6d60, indexKOFXISprites_Iori, 0x12 },
    { L"E+C - Extra Move 4", 0x3df6d60, 0x3df6d80, indexKOFXISprites_Iori, 0x13 },
    { L"E+C - Extra Move 5", 0x3df6d80, 0x3df6da0, indexKOFXISprites_Iori, 0x14 },
    { L"E+C - Extra Move 6", 0x3df6da0, 0x3df6dc0, indexKOFXISprites_Iori, 0x15 },
    { L"E+C - Extra Move 7", 0x3df6dc0, 0x3df6de0, indexKOFXISprites_Iori, 0x16 },
    { L"E+C - Extra Move 8", 0x3df6de0, 0x3df6e00, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_ED[] =
{
    { L"Iori ED", 0x3df6e00, 0x3df6e20, indexKOFXISprites_Iori },
    { L"E+D - Super Stuff 1", 0x3df6e20, 0x3df6e40, indexKOFXISprites_Iori, 0x20 },
    { L"E+D - Electric Palette", 0x3df6e40, 0x3df6e60, indexKOFXISprites_Iori, 0x41 },
    { L"E+D - Darker Palette", 0x3df6e60, 0x3df6e80, indexKOFXISprites_Iori, 0x40 },
    { L"E+D - Super Stuff 2", 0x3df6e80, 0x3df6ea0, indexKOFXISprites_Iori, 0x21 },
    { L"E+D - Character Extra 1", 0x3df6ea0, 0x3df6ec0, indexKOFXISprites_Iori, 0x30 },
    { L"E+D - Character Extra 2", 0x3df6ec0, 0x3df6ee0, indexKOFXISprites_Iori, 0x31 },
    { L"E+D - Character Extra 3", 0x3df6ee0, 0x3df6f00, indexKOFXISprites_Iori, 0x32 },
    { L"E+D - Extra Move 1", 0x3df6f00, 0x3df6f20, indexKOFXISprites_Iori, 0x10 },
    { L"E+D - Extra Move 2", 0x3df6f20, 0x3df6f40, indexKOFXISprites_Iori, 0x11 },
    { L"E+D - Extra Move 3", 0x3df6f40, 0x3df6f60, indexKOFXISprites_Iori, 0x12 },
    { L"E+D - Extra Move 4", 0x3df6f60, 0x3df6f80, indexKOFXISprites_Iori, 0x13 },
    { L"E+D - Extra Move 5", 0x3df6f80, 0x3df6fa0, indexKOFXISprites_Iori, 0x14 },
    { L"E+D - Extra Move 6", 0x3df6fa0, 0x3df6fc0, indexKOFXISprites_Iori, 0x15 },
    { L"E+D - Extra Move 7", 0x3df6fc0, 0x3df6fe0, indexKOFXISprites_Iori, 0x16 },
    { L"E+D - Extra Move 8", 0x3df6fe0, 0x3df7000, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_SA[] =
{
    { L"Iori SA", 0x3df7000, 0x3df7020, indexKOFXISprites_Iori },
    { L"Start+A - Super Stuff 1", 0x3df7020, 0x3df7040, indexKOFXISprites_Iori, 0x20 },
    { L"Start+A - Electric Palette", 0x3df7040, 0x3df7060, indexKOFXISprites_Iori, 0x41 },
    { L"Start+A - Darker Palette", 0x3df7060, 0x3df7080, indexKOFXISprites_Iori, 0x40 },
    { L"Start+A - Super Stuff 2", 0x3df7080, 0x3df70a0, indexKOFXISprites_Iori, 0x21 },
    { L"Start+A - Character Extra 1", 0x3df70a0, 0x3df70c0, indexKOFXISprites_Iori, 0x30 },
    { L"Start+A - Character Extra 2", 0x3df70c0, 0x3df70e0, indexKOFXISprites_Iori, 0x31 },
    { L"Start+A - Character Extra 3", 0x3df70e0, 0x3df7100, indexKOFXISprites_Iori, 0x32 },
    { L"Start+A - Extra Move 1", 0x3df7100, 0x3df7120, indexKOFXISprites_Iori, 0x10 },
    { L"Start+A - Extra Move 2", 0x3df7120, 0x3df7140, indexKOFXISprites_Iori, 0x11 },
    { L"Start+A - Extra Move 3", 0x3df7140, 0x3df7160, indexKOFXISprites_Iori, 0x12 },
    { L"Start+A - Extra Move 4", 0x3df7160, 0x3df7180, indexKOFXISprites_Iori, 0x13 },
    { L"Start+A - Extra Move 5", 0x3df7180, 0x3df71a0, indexKOFXISprites_Iori, 0x14 },
    { L"Start+A - Extra Move 6", 0x3df71a0, 0x3df71c0, indexKOFXISprites_Iori, 0x15 },
    { L"Start+A - Extra Move 7", 0x3df71c0, 0x3df71e0, indexKOFXISprites_Iori, 0x16 },
    { L"Start+A - Extra Move 8", 0x3df71e0, 0x3df7200, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_SB[] =
{
    { L"Iori SB", 0x3df7200, 0x3df7220, indexKOFXISprites_Iori },
    { L"Start+B - Super Stuff 1", 0x3df7220, 0x3df7240, indexKOFXISprites_Iori, 0x20 },
    { L"Start+B - Electric Palette", 0x3df7240, 0x3df7260, indexKOFXISprites_Iori, 0x41 },
    { L"Start+B - Darker Palette", 0x3df7260, 0x3df7280, indexKOFXISprites_Iori, 0x40 },
    { L"Start+B - Super Stuff 2", 0x3df7280, 0x3df72a0, indexKOFXISprites_Iori, 0x21 },
    { L"Start+B - Character Extra 1", 0x3df72a0, 0x3df72c0, indexKOFXISprites_Iori, 0x30 },
    { L"Start+B - Character Extra 2", 0x3df72c0, 0x3df72e0, indexKOFXISprites_Iori, 0x31 },
    { L"Start+B - Character Extra 3", 0x3df72e0, 0x3df7300, indexKOFXISprites_Iori, 0x32 },
    { L"Start+B - Extra Move 1", 0x3df7300, 0x3df7320, indexKOFXISprites_Iori, 0x10 },
    { L"Start+B - Extra Move 2", 0x3df7320, 0x3df7340, indexKOFXISprites_Iori, 0x11 },
    { L"Start+B - Extra Move 3", 0x3df7340, 0x3df7360, indexKOFXISprites_Iori, 0x12 },
    { L"Start+B - Extra Move 4", 0x3df7360, 0x3df7380, indexKOFXISprites_Iori, 0x13 },
    { L"Start+B - Extra Move 5", 0x3df7380, 0x3df73a0, indexKOFXISprites_Iori, 0x14 },
    { L"Start+B - Extra Move 6", 0x3df73a0, 0x3df73c0, indexKOFXISprites_Iori, 0x15 },
    { L"Start+B - Extra Move 7", 0x3df73c0, 0x3df73e0, indexKOFXISprites_Iori, 0x16 },
    { L"Start+B - Extra Move 8", 0x3df73e0, 0x3df7400, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_SC[] =
{
    { L"Iori SC", 0x3df7400, 0x3df7420, indexKOFXISprites_Iori },
    { L"Start+C - Super Stuff 1", 0x3df7420, 0x3df7440, indexKOFXISprites_Iori, 0x20 },
    { L"Start+C - Electric Palette", 0x3df7440, 0x3df7460, indexKOFXISprites_Iori, 0x41 },
    { L"Start+C - Darker Palette", 0x3df7460, 0x3df7480, indexKOFXISprites_Iori, 0x40 },
    { L"Start+C - Super Stuff 2", 0x3df7480, 0x3df74a0, indexKOFXISprites_Iori, 0x21 },
    { L"Start+C - Character Extra 1", 0x3df74a0, 0x3df74c0, indexKOFXISprites_Iori, 0x30 },
    { L"Start+C - Character Extra 2", 0x3df74c0, 0x3df74e0, indexKOFXISprites_Iori, 0x31 },
    { L"Start+C - Character Extra 3", 0x3df74e0, 0x3df7500, indexKOFXISprites_Iori, 0x32 },
    { L"Start+C - Extra Move 1", 0x3df7500, 0x3df7520, indexKOFXISprites_Iori, 0x10 },
    { L"Start+C - Extra Move 2", 0x3df7520, 0x3df7540, indexKOFXISprites_Iori, 0x11 },
    { L"Start+C - Extra Move 3", 0x3df7540, 0x3df7560, indexKOFXISprites_Iori, 0x12 },
    { L"Start+C - Extra Move 4", 0x3df7560, 0x3df7580, indexKOFXISprites_Iori, 0x13 },
    { L"Start+C - Extra Move 5", 0x3df7580, 0x3df75a0, indexKOFXISprites_Iori, 0x14 },
    { L"Start+C - Extra Move 6", 0x3df75a0, 0x3df75c0, indexKOFXISprites_Iori, 0x15 },
    { L"Start+C - Extra Move 7", 0x3df75c0, 0x3df75e0, indexKOFXISprites_Iori, 0x16 },
    { L"Start+C - Extra Move 8", 0x3df75e0, 0x3df7600, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_IORI_PALETTES_SD[] =
{
    { L"Iori SD", 0x3df7600, 0x3df7620, indexKOFXISprites_Iori },
    { L"Start+D - Super Stuff 1", 0x3df7620, 0x3df7640, indexKOFXISprites_Iori, 0x20 },
    { L"Start+D - Electric Palette", 0x3df7640, 0x3df7660, indexKOFXISprites_Iori, 0x41 },
    { L"Start+D - Darker Palette", 0x3df7660, 0x3df7680, indexKOFXISprites_Iori, 0x40 },
    { L"Start+D - Super Stuff 2", 0x3df7680, 0x3df76a0, indexKOFXISprites_Iori, 0x21 },
    { L"Start+D - Character Extra 1", 0x3df76a0, 0x3df76c0, indexKOFXISprites_Iori, 0x30 },
    { L"Start+D - Character Extra 2", 0x3df76c0, 0x3df76e0, indexKOFXISprites_Iori, 0x31 },
    { L"Start+D - Character Extra 3", 0x3df76e0, 0x3df7700, indexKOFXISprites_Iori, 0x32 },
    { L"Start+D - Extra Move 1", 0x3df7700, 0x3df7720, indexKOFXISprites_Iori, 0x10 },
    { L"Start+D - Extra Move 2", 0x3df7720, 0x3df7740, indexKOFXISprites_Iori, 0x11 },
    { L"Start+D - Extra Move 3", 0x3df7740, 0x3df7760, indexKOFXISprites_Iori, 0x12 },
    { L"Start+D - Extra Move 4", 0x3df7760, 0x3df7780, indexKOFXISprites_Iori, 0x13 },
    { L"Start+D - Extra Move 5", 0x3df7780, 0x3df77a0, indexKOFXISprites_Iori, 0x14 },
    { L"Start+D - Extra Move 6", 0x3df77a0, 0x3df77c0, indexKOFXISprites_Iori, 0x15 },
    { L"Start+D - Extra Move 7", 0x3df77c0, 0x3df77e0, indexKOFXISprites_Iori, 0x16 },
    { L"Start+D - Extra Move 8", 0x3df77e0, 0x3df7800, indexKOFXISprites_Iori, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_A[] =
{
    { L"Shingo A", 0x3fc5800, 0x3fc5820, indexKOFXISprites_Shingo },
    { L"A - Super Stuff 1", 0x3fc5820, 0x3fc5840, indexKOFXISprites_Shingo, 0x20 },
    { L"A - Electric Palette", 0x3fc5840, 0x3fc5860, indexKOFXISprites_Shingo, 0x41 },
    { L"A - Darker Palette", 0x3fc5860, 0x3fc5880, indexKOFXISprites_Shingo, 0x40 },
    { L"A - Super Stuff 2", 0x3fc5880, 0x3fc58a0, indexKOFXISprites_Shingo, 0x21 },
    { L"A - Character Extra 1", 0x3fc58a0, 0x3fc58c0, indexKOFXISprites_Shingo, 0x30 },
    { L"A - Character Extra 2", 0x3fc58c0, 0x3fc58e0, indexKOFXISprites_Shingo, 0x31 },
    { L"A - Character Extra 3", 0x3fc58e0, 0x3fc5900, indexKOFXISprites_Shingo, 0x32 },
    { L"A - Extra Move 1", 0x3fc5900, 0x3fc5920, indexKOFXISprites_Shingo, 0x10 },
    { L"A - Extra Move 2", 0x3fc5920, 0x3fc5940, indexKOFXISprites_Shingo, 0x11 },
    { L"A - Extra Move 3", 0x3fc5940, 0x3fc5960, indexKOFXISprites_Shingo, 0x12 },
    { L"A - Extra Move 4", 0x3fc5960, 0x3fc5980, indexKOFXISprites_Shingo, 0x13 },
    { L"A - Extra Move 5", 0x3fc5980, 0x3fc59a0, indexKOFXISprites_Shingo, 0x14 },
    { L"A - Extra Move 6", 0x3fc59a0, 0x3fc59c0, indexKOFXISprites_Shingo, 0x15 },
    { L"A - Extra Move 7", 0x3fc59c0, 0x3fc59e0, indexKOFXISprites_Shingo, 0x16 },
    { L"A - Extra Move 8", 0x3fc59e0, 0x3fc5a00, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_B[] =
{
    { L"Shingo B", 0x3fc5a00, 0x3fc5a20, indexKOFXISprites_Shingo },
    { L"B - Super Stuff 1", 0x3fc5a20, 0x3fc5a40, indexKOFXISprites_Shingo, 0x20 },
    { L"B - Electric Palette", 0x3fc5a40, 0x3fc5a60, indexKOFXISprites_Shingo, 0x41 },
    { L"B - Darker Palette", 0x3fc5a60, 0x3fc5a80, indexKOFXISprites_Shingo, 0x40 },
    { L"B - Super Stuff 2", 0x3fc5a80, 0x3fc5aa0, indexKOFXISprites_Shingo, 0x21 },
    { L"B - Character Extra 1", 0x3fc5aa0, 0x3fc5ac0, indexKOFXISprites_Shingo, 0x30 },
    { L"B - Character Extra 2", 0x3fc5ac0, 0x3fc5ae0, indexKOFXISprites_Shingo, 0x31 },
    { L"B - Character Extra 3", 0x3fc5ae0, 0x3fc5b00, indexKOFXISprites_Shingo, 0x32 },
    { L"B - Extra Move 1", 0x3fc5b00, 0x3fc5b20, indexKOFXISprites_Shingo, 0x10 },
    { L"B - Extra Move 2", 0x3fc5b20, 0x3fc5b40, indexKOFXISprites_Shingo, 0x11 },
    { L"B - Extra Move 3", 0x3fc5b40, 0x3fc5b60, indexKOFXISprites_Shingo, 0x12 },
    { L"B - Extra Move 4", 0x3fc5b60, 0x3fc5b80, indexKOFXISprites_Shingo, 0x13 },
    { L"B - Extra Move 5", 0x3fc5b80, 0x3fc5ba0, indexKOFXISprites_Shingo, 0x14 },
    { L"B - Extra Move 6", 0x3fc5ba0, 0x3fc5bc0, indexKOFXISprites_Shingo, 0x15 },
    { L"B - Extra Move 7", 0x3fc5bc0, 0x3fc5be0, indexKOFXISprites_Shingo, 0x16 },
    { L"B - Extra Move 8", 0x3fc5be0, 0x3fc5c00, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_C[] =
{
    { L"Shingo C", 0x3fc5c00, 0x3fc5c20, indexKOFXISprites_Shingo },
    { L"C - Super Stuff 1", 0x3fc5c20, 0x3fc5c40, indexKOFXISprites_Shingo, 0x20 },
    { L"C - Electric Palette", 0x3fc5c40, 0x3fc5c60, indexKOFXISprites_Shingo, 0x41 },
    { L"C - Darker Palette", 0x3fc5c60, 0x3fc5c80, indexKOFXISprites_Shingo, 0x40 },
    { L"C - Super Stuff 2", 0x3fc5c80, 0x3fc5ca0, indexKOFXISprites_Shingo, 0x21 },
    { L"C - Character Extra 1", 0x3fc5ca0, 0x3fc5cc0, indexKOFXISprites_Shingo, 0x30 },
    { L"C - Character Extra 2", 0x3fc5cc0, 0x3fc5ce0, indexKOFXISprites_Shingo, 0x31 },
    { L"C - Character Extra 3", 0x3fc5ce0, 0x3fc5d00, indexKOFXISprites_Shingo, 0x32 },
    { L"C - Extra Move 1", 0x3fc5d00, 0x3fc5d20, indexKOFXISprites_Shingo, 0x10 },
    { L"C - Extra Move 2", 0x3fc5d20, 0x3fc5d40, indexKOFXISprites_Shingo, 0x11 },
    { L"C - Extra Move 3", 0x3fc5d40, 0x3fc5d60, indexKOFXISprites_Shingo, 0x12 },
    { L"C - Extra Move 4", 0x3fc5d60, 0x3fc5d80, indexKOFXISprites_Shingo, 0x13 },
    { L"C - Extra Move 5", 0x3fc5d80, 0x3fc5da0, indexKOFXISprites_Shingo, 0x14 },
    { L"C - Extra Move 6", 0x3fc5da0, 0x3fc5dc0, indexKOFXISprites_Shingo, 0x15 },
    { L"C - Extra Move 7", 0x3fc5dc0, 0x3fc5de0, indexKOFXISprites_Shingo, 0x16 },
    { L"C - Extra Move 8", 0x3fc5de0, 0x3fc5e00, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_D[] =
{
    { L"Shingo D", 0x3fc5e00, 0x3fc5e20, indexKOFXISprites_Shingo },
    { L"D - Super Stuff 1", 0x3fc5e20, 0x3fc5e40, indexKOFXISprites_Shingo, 0x20 },
    { L"D - Electric Palette", 0x3fc5e40, 0x3fc5e60, indexKOFXISprites_Shingo, 0x41 },
    { L"D - Darker Palette", 0x3fc5e60, 0x3fc5e80, indexKOFXISprites_Shingo, 0x40 },
    { L"D - Super Stuff 2", 0x3fc5e80, 0x3fc5ea0, indexKOFXISprites_Shingo, 0x21 },
    { L"D - Character Extra 1", 0x3fc5ea0, 0x3fc5ec0, indexKOFXISprites_Shingo, 0x30 },
    { L"D - Character Extra 2", 0x3fc5ec0, 0x3fc5ee0, indexKOFXISprites_Shingo, 0x31 },
    { L"D - Character Extra 3", 0x3fc5ee0, 0x3fc5f00, indexKOFXISprites_Shingo, 0x32 },
    { L"D - Extra Move 1", 0x3fc5f00, 0x3fc5f20, indexKOFXISprites_Shingo, 0x10 },
    { L"D - Extra Move 2", 0x3fc5f20, 0x3fc5f40, indexKOFXISprites_Shingo, 0x11 },
    { L"D - Extra Move 3", 0x3fc5f40, 0x3fc5f60, indexKOFXISprites_Shingo, 0x12 },
    { L"D - Extra Move 4", 0x3fc5f60, 0x3fc5f80, indexKOFXISprites_Shingo, 0x13 },
    { L"D - Extra Move 5", 0x3fc5f80, 0x3fc5fa0, indexKOFXISprites_Shingo, 0x14 },
    { L"D - Extra Move 6", 0x3fc5fa0, 0x3fc5fc0, indexKOFXISprites_Shingo, 0x15 },
    { L"D - Extra Move 7", 0x3fc5fc0, 0x3fc5fe0, indexKOFXISprites_Shingo, 0x16 },
    { L"D - Extra Move 8", 0x3fc5fe0, 0x3fc6000, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_EA[] =
{
    { L"Shingo EA", 0x3fc6000, 0x3fc6020, indexKOFXISprites_Shingo },
    { L"E+A - Super Stuff 1", 0x3fc6020, 0x3fc6040, indexKOFXISprites_Shingo, 0x20 },
    { L"E+A - Electric Palette", 0x3fc6040, 0x3fc6060, indexKOFXISprites_Shingo, 0x41 },
    { L"E+A - Darker Palette", 0x3fc6060, 0x3fc6080, indexKOFXISprites_Shingo, 0x40 },
    { L"E+A - Super Stuff 2", 0x3fc6080, 0x3fc60a0, indexKOFXISprites_Shingo, 0x21 },
    { L"E+A - Character Extra 1", 0x3fc60a0, 0x3fc60c0, indexKOFXISprites_Shingo, 0x30 },
    { L"E+A - Character Extra 2", 0x3fc60c0, 0x3fc60e0, indexKOFXISprites_Shingo, 0x31 },
    { L"E+A - Character Extra 3", 0x3fc60e0, 0x3fc6100, indexKOFXISprites_Shingo, 0x32 },
    { L"E+A - Extra Move 1", 0x3fc6100, 0x3fc6120, indexKOFXISprites_Shingo, 0x10 },
    { L"E+A - Extra Move 2", 0x3fc6120, 0x3fc6140, indexKOFXISprites_Shingo, 0x11 },
    { L"E+A - Extra Move 3", 0x3fc6140, 0x3fc6160, indexKOFXISprites_Shingo, 0x12 },
    { L"E+A - Extra Move 4", 0x3fc6160, 0x3fc6180, indexKOFXISprites_Shingo, 0x13 },
    { L"E+A - Extra Move 5", 0x3fc6180, 0x3fc61a0, indexKOFXISprites_Shingo, 0x14 },
    { L"E+A - Extra Move 6", 0x3fc61a0, 0x3fc61c0, indexKOFXISprites_Shingo, 0x15 },
    { L"E+A - Extra Move 7", 0x3fc61c0, 0x3fc61e0, indexKOFXISprites_Shingo, 0x16 },
    { L"E+A - Extra Move 8", 0x3fc61e0, 0x3fc6200, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_EB[] =
{
    { L"Shingo EB", 0x3fc6200, 0x3fc6220, indexKOFXISprites_Shingo },
    { L"E+B - Super Stuff 1", 0x3fc6220, 0x3fc6240, indexKOFXISprites_Shingo, 0x20 },
    { L"E+B - Electric Palette", 0x3fc6240, 0x3fc6260, indexKOFXISprites_Shingo, 0x41 },
    { L"E+B - Darker Palette", 0x3fc6260, 0x3fc6280, indexKOFXISprites_Shingo, 0x40 },
    { L"E+B - Super Stuff 2", 0x3fc6280, 0x3fc62a0, indexKOFXISprites_Shingo, 0x21 },
    { L"E+B - Character Extra 1", 0x3fc62a0, 0x3fc62c0, indexKOFXISprites_Shingo, 0x30 },
    { L"E+B - Character Extra 2", 0x3fc62c0, 0x3fc62e0, indexKOFXISprites_Shingo, 0x31 },
    { L"E+B - Character Extra 3", 0x3fc62e0, 0x3fc6300, indexKOFXISprites_Shingo, 0x32 },
    { L"E+B - Extra Move 1", 0x3fc6300, 0x3fc6320, indexKOFXISprites_Shingo, 0x10 },
    { L"E+B - Extra Move 2", 0x3fc6320, 0x3fc6340, indexKOFXISprites_Shingo, 0x11 },
    { L"E+B - Extra Move 3", 0x3fc6340, 0x3fc6360, indexKOFXISprites_Shingo, 0x12 },
    { L"E+B - Extra Move 4", 0x3fc6360, 0x3fc6380, indexKOFXISprites_Shingo, 0x13 },
    { L"E+B - Extra Move 5", 0x3fc6380, 0x3fc63a0, indexKOFXISprites_Shingo, 0x14 },
    { L"E+B - Extra Move 6", 0x3fc63a0, 0x3fc63c0, indexKOFXISprites_Shingo, 0x15 },
    { L"E+B - Extra Move 7", 0x3fc63c0, 0x3fc63e0, indexKOFXISprites_Shingo, 0x16 },
    { L"E+B - Extra Move 8", 0x3fc63e0, 0x3fc6400, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_EC[] =
{
    { L"Shingo EC", 0x3fc6400, 0x3fc6420, indexKOFXISprites_Shingo },
    { L"E+C - Super Stuff 1", 0x3fc6420, 0x3fc6440, indexKOFXISprites_Shingo, 0x20 },
    { L"E+C - Electric Palette", 0x3fc6440, 0x3fc6460, indexKOFXISprites_Shingo, 0x41 },
    { L"E+C - Darker Palette", 0x3fc6460, 0x3fc6480, indexKOFXISprites_Shingo, 0x40 },
    { L"E+C - Super Stuff 2", 0x3fc6480, 0x3fc64a0, indexKOFXISprites_Shingo, 0x21 },
    { L"E+C - Character Extra 1", 0x3fc64a0, 0x3fc64c0, indexKOFXISprites_Shingo, 0x30 },
    { L"E+C - Character Extra 2", 0x3fc64c0, 0x3fc64e0, indexKOFXISprites_Shingo, 0x31 },
    { L"E+C - Character Extra 3", 0x3fc64e0, 0x3fc6500, indexKOFXISprites_Shingo, 0x32 },
    { L"E+C - Extra Move 1", 0x3fc6500, 0x3fc6520, indexKOFXISprites_Shingo, 0x10 },
    { L"E+C - Extra Move 2", 0x3fc6520, 0x3fc6540, indexKOFXISprites_Shingo, 0x11 },
    { L"E+C - Extra Move 3", 0x3fc6540, 0x3fc6560, indexKOFXISprites_Shingo, 0x12 },
    { L"E+C - Extra Move 4", 0x3fc6560, 0x3fc6580, indexKOFXISprites_Shingo, 0x13 },
    { L"E+C - Extra Move 5", 0x3fc6580, 0x3fc65a0, indexKOFXISprites_Shingo, 0x14 },
    { L"E+C - Extra Move 6", 0x3fc65a0, 0x3fc65c0, indexKOFXISprites_Shingo, 0x15 },
    { L"E+C - Extra Move 7", 0x3fc65c0, 0x3fc65e0, indexKOFXISprites_Shingo, 0x16 },
    { L"E+C - Extra Move 8", 0x3fc65e0, 0x3fc6600, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_ED[] =
{
    { L"Shingo ED", 0x3fc6600, 0x3fc6620, indexKOFXISprites_Shingo },
    { L"E+D - Super Stuff 1", 0x3fc6620, 0x3fc6640, indexKOFXISprites_Shingo, 0x20 },
    { L"E+D - Electric Palette", 0x3fc6640, 0x3fc6660, indexKOFXISprites_Shingo, 0x41 },
    { L"E+D - Darker Palette", 0x3fc6660, 0x3fc6680, indexKOFXISprites_Shingo, 0x40 },
    { L"E+D - Super Stuff 2", 0x3fc6680, 0x3fc66a0, indexKOFXISprites_Shingo, 0x21 },
    { L"E+D - Character Extra 1", 0x3fc66a0, 0x3fc66c0, indexKOFXISprites_Shingo, 0x30 },
    { L"E+D - Character Extra 2", 0x3fc66c0, 0x3fc66e0, indexKOFXISprites_Shingo, 0x31 },
    { L"E+D - Character Extra 3", 0x3fc66e0, 0x3fc6700, indexKOFXISprites_Shingo, 0x32 },
    { L"E+D - Extra Move 1", 0x3fc6700, 0x3fc6720, indexKOFXISprites_Shingo, 0x10 },
    { L"E+D - Extra Move 2", 0x3fc6720, 0x3fc6740, indexKOFXISprites_Shingo, 0x11 },
    { L"E+D - Extra Move 3", 0x3fc6740, 0x3fc6760, indexKOFXISprites_Shingo, 0x12 },
    { L"E+D - Extra Move 4", 0x3fc6760, 0x3fc6780, indexKOFXISprites_Shingo, 0x13 },
    { L"E+D - Extra Move 5", 0x3fc6780, 0x3fc67a0, indexKOFXISprites_Shingo, 0x14 },
    { L"E+D - Extra Move 6", 0x3fc67a0, 0x3fc67c0, indexKOFXISprites_Shingo, 0x15 },
    { L"E+D - Extra Move 7", 0x3fc67c0, 0x3fc67e0, indexKOFXISprites_Shingo, 0x16 },
    { L"E+D - Extra Move 8", 0x3fc67e0, 0x3fc6800, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_SA[] =
{
    { L"Shingo SA", 0x3fc6800, 0x3fc6820, indexKOFXISprites_Shingo },
    { L"Start+A - Super Stuff 1", 0x3fc6820, 0x3fc6840, indexKOFXISprites_Shingo, 0x20 },
    { L"Start+A - Electric Palette", 0x3fc6840, 0x3fc6860, indexKOFXISprites_Shingo, 0x41 },
    { L"Start+A - Darker Palette", 0x3fc6860, 0x3fc6880, indexKOFXISprites_Shingo, 0x40 },
    { L"Start+A - Super Stuff 2", 0x3fc6880, 0x3fc68a0, indexKOFXISprites_Shingo, 0x21 },
    { L"Start+A - Character Extra 1", 0x3fc68a0, 0x3fc68c0, indexKOFXISprites_Shingo, 0x30 },
    { L"Start+A - Character Extra 2", 0x3fc68c0, 0x3fc68e0, indexKOFXISprites_Shingo, 0x31 },
    { L"Start+A - Character Extra 3", 0x3fc68e0, 0x3fc6900, indexKOFXISprites_Shingo, 0x32 },
    { L"Start+A - Extra Move 1", 0x3fc6900, 0x3fc6920, indexKOFXISprites_Shingo, 0x10 },
    { L"Start+A - Extra Move 2", 0x3fc6920, 0x3fc6940, indexKOFXISprites_Shingo, 0x11 },
    { L"Start+A - Extra Move 3", 0x3fc6940, 0x3fc6960, indexKOFXISprites_Shingo, 0x12 },
    { L"Start+A - Extra Move 4", 0x3fc6960, 0x3fc6980, indexKOFXISprites_Shingo, 0x13 },
    { L"Start+A - Extra Move 5", 0x3fc6980, 0x3fc69a0, indexKOFXISprites_Shingo, 0x14 },
    { L"Start+A - Extra Move 6", 0x3fc69a0, 0x3fc69c0, indexKOFXISprites_Shingo, 0x15 },
    { L"Start+A - Extra Move 7", 0x3fc69c0, 0x3fc69e0, indexKOFXISprites_Shingo, 0x16 },
    { L"Start+A - Extra Move 8", 0x3fc69e0, 0x3fc6a00, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_SB[] =
{
    { L"Shingo SB", 0x3fc6a00, 0x3fc6a20, indexKOFXISprites_Shingo },
    { L"Start+B - Super Stuff 1", 0x3fc6a20, 0x3fc6a40, indexKOFXISprites_Shingo, 0x20 },
    { L"Start+B - Electric Palette", 0x3fc6a40, 0x3fc6a60, indexKOFXISprites_Shingo, 0x41 },
    { L"Start+B - Darker Palette", 0x3fc6a60, 0x3fc6a80, indexKOFXISprites_Shingo, 0x40 },
    { L"Start+B - Super Stuff 2", 0x3fc6a80, 0x3fc6aa0, indexKOFXISprites_Shingo, 0x21 },
    { L"Start+B - Character Extra 1", 0x3fc6aa0, 0x3fc6ac0, indexKOFXISprites_Shingo, 0x30 },
    { L"Start+B - Character Extra 2", 0x3fc6ac0, 0x3fc6ae0, indexKOFXISprites_Shingo, 0x31 },
    { L"Start+B - Character Extra 3", 0x3fc6ae0, 0x3fc6b00, indexKOFXISprites_Shingo, 0x32 },
    { L"Start+B - Extra Move 1", 0x3fc6b00, 0x3fc6b20, indexKOFXISprites_Shingo, 0x10 },
    { L"Start+B - Extra Move 2", 0x3fc6b20, 0x3fc6b40, indexKOFXISprites_Shingo, 0x11 },
    { L"Start+B - Extra Move 3", 0x3fc6b40, 0x3fc6b60, indexKOFXISprites_Shingo, 0x12 },
    { L"Start+B - Extra Move 4", 0x3fc6b60, 0x3fc6b80, indexKOFXISprites_Shingo, 0x13 },
    { L"Start+B - Extra Move 5", 0x3fc6b80, 0x3fc6ba0, indexKOFXISprites_Shingo, 0x14 },
    { L"Start+B - Extra Move 6", 0x3fc6ba0, 0x3fc6bc0, indexKOFXISprites_Shingo, 0x15 },
    { L"Start+B - Extra Move 7", 0x3fc6bc0, 0x3fc6be0, indexKOFXISprites_Shingo, 0x16 },
    { L"Start+B - Extra Move 8", 0x3fc6be0, 0x3fc6c00, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_SC[] =
{
    { L"Shingo SC", 0x3fc6c00, 0x3fc6c20, indexKOFXISprites_Shingo },
    { L"Start+C - Super Stuff 1", 0x3fc6c20, 0x3fc6c40, indexKOFXISprites_Shingo, 0x20 },
    { L"Start+C - Electric Palette", 0x3fc6c40, 0x3fc6c60, indexKOFXISprites_Shingo, 0x41 },
    { L"Start+C - Darker Palette", 0x3fc6c60, 0x3fc6c80, indexKOFXISprites_Shingo, 0x40 },
    { L"Start+C - Super Stuff 2", 0x3fc6c80, 0x3fc6ca0, indexKOFXISprites_Shingo, 0x21 },
    { L"Start+C - Character Extra 1", 0x3fc6ca0, 0x3fc6cc0, indexKOFXISprites_Shingo, 0x30 },
    { L"Start+C - Character Extra 2", 0x3fc6cc0, 0x3fc6ce0, indexKOFXISprites_Shingo, 0x31 },
    { L"Start+C - Character Extra 3", 0x3fc6ce0, 0x3fc6d00, indexKOFXISprites_Shingo, 0x32 },
    { L"Start+C - Extra Move 1", 0x3fc6d00, 0x3fc6d20, indexKOFXISprites_Shingo, 0x10 },
    { L"Start+C - Extra Move 2", 0x3fc6d20, 0x3fc6d40, indexKOFXISprites_Shingo, 0x11 },
    { L"Start+C - Extra Move 3", 0x3fc6d40, 0x3fc6d60, indexKOFXISprites_Shingo, 0x12 },
    { L"Start+C - Extra Move 4", 0x3fc6d60, 0x3fc6d80, indexKOFXISprites_Shingo, 0x13 },
    { L"Start+C - Extra Move 5", 0x3fc6d80, 0x3fc6da0, indexKOFXISprites_Shingo, 0x14 },
    { L"Start+C - Extra Move 6", 0x3fc6da0, 0x3fc6dc0, indexKOFXISprites_Shingo, 0x15 },
    { L"Start+C - Extra Move 7", 0x3fc6dc0, 0x3fc6de0, indexKOFXISprites_Shingo, 0x16 },
    { L"Start+C - Extra Move 8", 0x3fc6de0, 0x3fc6e00, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHINGO_PALETTES_SD[] =
{
    { L"Shingo SD", 0x3fc6e00, 0x3fc6e20, indexKOFXISprites_Shingo },
    { L"Start+D - Super Stuff 1", 0x3fc6e20, 0x3fc6e40, indexKOFXISprites_Shingo, 0x20 },
    { L"Start+D - Electric Palette", 0x3fc6e40, 0x3fc6e60, indexKOFXISprites_Shingo, 0x41 },
    { L"Start+D - Darker Palette", 0x3fc6e60, 0x3fc6e80, indexKOFXISprites_Shingo, 0x40 },
    { L"Start+D - Super Stuff 2", 0x3fc6e80, 0x3fc6ea0, indexKOFXISprites_Shingo, 0x21 },
    { L"Start+D - Character Extra 1", 0x3fc6ea0, 0x3fc6ec0, indexKOFXISprites_Shingo, 0x30 },
    { L"Start+D - Character Extra 2", 0x3fc6ec0, 0x3fc6ee0, indexKOFXISprites_Shingo, 0x31 },
    { L"Start+D - Character Extra 3", 0x3fc6ee0, 0x3fc6f00, indexKOFXISprites_Shingo, 0x32 },
    { L"Start+D - Extra Move 1", 0x3fc6f00, 0x3fc6f20, indexKOFXISprites_Shingo, 0x10 },
    { L"Start+D - Extra Move 2", 0x3fc6f20, 0x3fc6f40, indexKOFXISprites_Shingo, 0x11 },
    { L"Start+D - Extra Move 3", 0x3fc6f40, 0x3fc6f60, indexKOFXISprites_Shingo, 0x12 },
    { L"Start+D - Extra Move 4", 0x3fc6f60, 0x3fc6f80, indexKOFXISprites_Shingo, 0x13 },
    { L"Start+D - Extra Move 5", 0x3fc6f80, 0x3fc6fa0, indexKOFXISprites_Shingo, 0x14 },
    { L"Start+D - Extra Move 6", 0x3fc6fa0, 0x3fc6fc0, indexKOFXISprites_Shingo, 0x15 },
    { L"Start+D - Extra Move 7", 0x3fc6fc0, 0x3fc6fe0, indexKOFXISprites_Shingo, 0x16 },
    { L"Start+D - Extra Move 8", 0x3fc6fe0, 0x3fc7000, indexKOFXISprites_Shingo, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_A[] =
{
    { L"Gai A", 0x40d3000, 0x40d3020, indexKOFXISprites_Gai },
    { L"A - Super Stuff 1", 0x40d3020, 0x40d3040, indexKOFXISprites_Gai, 0x20 },
    { L"A - Electric Palette", 0x40d3040, 0x40d3060, indexKOFXISprites_Gai, 0x41 },
    { L"A - Darker Palette", 0x40d3060, 0x40d3080, indexKOFXISprites_Gai, 0x40 },
    { L"A - Super Stuff 2", 0x40d3080, 0x40d30a0, indexKOFXISprites_Gai, 0x21 },
    { L"A - Character Extra 1", 0x40d30a0, 0x40d30c0, indexKOFXISprites_Gai, 0x30 },
    { L"A - Character Extra 2", 0x40d30c0, 0x40d30e0, indexKOFXISprites_Gai, 0x31 },
    { L"A - Character Extra 3", 0x40d30e0, 0x40d3100, indexKOFXISprites_Gai, 0x32 },
    { L"A - Extra Move 1", 0x40d3100, 0x40d3120, indexKOFXISprites_Gai, 0x10 },
    { L"A - Extra Move 2", 0x40d3120, 0x40d3140, indexKOFXISprites_Gai, 0x11 },
    { L"A - Extra Move 3", 0x40d3140, 0x40d3160, indexKOFXISprites_Gai, 0x12 },
    { L"A - Extra Move 4", 0x40d3160, 0x40d3180, indexKOFXISprites_Gai, 0x13 },
    { L"A - Extra Move 5", 0x40d3180, 0x40d31a0, indexKOFXISprites_Gai, 0x14 },
    { L"A - Extra Move 6", 0x40d31a0, 0x40d31c0, indexKOFXISprites_Gai, 0x15 },
    { L"A - Extra Move 7", 0x40d31c0, 0x40d31e0, indexKOFXISprites_Gai, 0x16 },
    { L"A - Extra Move 8", 0x40d31e0, 0x40d3200, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_B[] =
{
    { L"Gai B", 0x40d3200, 0x40d3220, indexKOFXISprites_Gai },
    { L"B - Super Stuff 1", 0x40d3220, 0x40d3240, indexKOFXISprites_Gai, 0x20 },
    { L"B - Electric Palette", 0x40d3240, 0x40d3260, indexKOFXISprites_Gai, 0x41 },
    { L"B - Darker Palette", 0x40d3260, 0x40d3280, indexKOFXISprites_Gai, 0x40 },
    { L"B - Super Stuff 2", 0x40d3280, 0x40d32a0, indexKOFXISprites_Gai, 0x21 },
    { L"B - Character Extra 1", 0x40d32a0, 0x40d32c0, indexKOFXISprites_Gai, 0x30 },
    { L"B - Character Extra 2", 0x40d32c0, 0x40d32e0, indexKOFXISprites_Gai, 0x31 },
    { L"B - Character Extra 3", 0x40d32e0, 0x40d3300, indexKOFXISprites_Gai, 0x32 },
    { L"B - Extra Move 1", 0x40d3300, 0x40d3320, indexKOFXISprites_Gai, 0x10 },
    { L"B - Extra Move 2", 0x40d3320, 0x40d3340, indexKOFXISprites_Gai, 0x11 },
    { L"B - Extra Move 3", 0x40d3340, 0x40d3360, indexKOFXISprites_Gai, 0x12 },
    { L"B - Extra Move 4", 0x40d3360, 0x40d3380, indexKOFXISprites_Gai, 0x13 },
    { L"B - Extra Move 5", 0x40d3380, 0x40d33a0, indexKOFXISprites_Gai, 0x14 },
    { L"B - Extra Move 6", 0x40d33a0, 0x40d33c0, indexKOFXISprites_Gai, 0x15 },
    { L"B - Extra Move 7", 0x40d33c0, 0x40d33e0, indexKOFXISprites_Gai, 0x16 },
    { L"B - Extra Move 8", 0x40d33e0, 0x40d3400, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_C[] =
{
    { L"Gai C", 0x40d3400, 0x40d3420, indexKOFXISprites_Gai },
    { L"C - Super Stuff 1", 0x40d3420, 0x40d3440, indexKOFXISprites_Gai, 0x20 },
    { L"C - Electric Palette", 0x40d3440, 0x40d3460, indexKOFXISprites_Gai, 0x41 },
    { L"C - Darker Palette", 0x40d3460, 0x40d3480, indexKOFXISprites_Gai, 0x40 },
    { L"C - Super Stuff 2", 0x40d3480, 0x40d34a0, indexKOFXISprites_Gai, 0x21 },
    { L"C - Character Extra 1", 0x40d34a0, 0x40d34c0, indexKOFXISprites_Gai, 0x30 },
    { L"C - Character Extra 2", 0x40d34c0, 0x40d34e0, indexKOFXISprites_Gai, 0x31 },
    { L"C - Character Extra 3", 0x40d34e0, 0x40d3500, indexKOFXISprites_Gai, 0x32 },
    { L"C - Extra Move 1", 0x40d3500, 0x40d3520, indexKOFXISprites_Gai, 0x10 },
    { L"C - Extra Move 2", 0x40d3520, 0x40d3540, indexKOFXISprites_Gai, 0x11 },
    { L"C - Extra Move 3", 0x40d3540, 0x40d3560, indexKOFXISprites_Gai, 0x12 },
    { L"C - Extra Move 4", 0x40d3560, 0x40d3580, indexKOFXISprites_Gai, 0x13 },
    { L"C - Extra Move 5", 0x40d3580, 0x40d35a0, indexKOFXISprites_Gai, 0x14 },
    { L"C - Extra Move 6", 0x40d35a0, 0x40d35c0, indexKOFXISprites_Gai, 0x15 },
    { L"C - Extra Move 7", 0x40d35c0, 0x40d35e0, indexKOFXISprites_Gai, 0x16 },
    { L"C - Extra Move 8", 0x40d35e0, 0x40d3600, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_D[] =
{
    { L"Gai D", 0x40d3600, 0x40d3620, indexKOFXISprites_Gai },
    { L"D - Super Stuff 1", 0x40d3620, 0x40d3640, indexKOFXISprites_Gai, 0x20 },
    { L"D - Electric Palette", 0x40d3640, 0x40d3660, indexKOFXISprites_Gai, 0x41 },
    { L"D - Darker Palette", 0x40d3660, 0x40d3680, indexKOFXISprites_Gai, 0x40 },
    { L"D - Super Stuff 2", 0x40d3680, 0x40d36a0, indexKOFXISprites_Gai, 0x21 },
    { L"D - Character Extra 1", 0x40d36a0, 0x40d36c0, indexKOFXISprites_Gai, 0x30 },
    { L"D - Character Extra 2", 0x40d36c0, 0x40d36e0, indexKOFXISprites_Gai, 0x31 },
    { L"D - Character Extra 3", 0x40d36e0, 0x40d3700, indexKOFXISprites_Gai, 0x32 },
    { L"D - Extra Move 1", 0x40d3700, 0x40d3720, indexKOFXISprites_Gai, 0x10 },
    { L"D - Extra Move 2", 0x40d3720, 0x40d3740, indexKOFXISprites_Gai, 0x11 },
    { L"D - Extra Move 3", 0x40d3740, 0x40d3760, indexKOFXISprites_Gai, 0x12 },
    { L"D - Extra Move 4", 0x40d3760, 0x40d3780, indexKOFXISprites_Gai, 0x13 },
    { L"D - Extra Move 5", 0x40d3780, 0x40d37a0, indexKOFXISprites_Gai, 0x14 },
    { L"D - Extra Move 6", 0x40d37a0, 0x40d37c0, indexKOFXISprites_Gai, 0x15 },
    { L"D - Extra Move 7", 0x40d37c0, 0x40d37e0, indexKOFXISprites_Gai, 0x16 },
    { L"D - Extra Move 8", 0x40d37e0, 0x40d3800, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_EA[] =
{
    { L"Gai EA", 0x40d3800, 0x40d3820, indexKOFXISprites_Gai },
    { L"E+A - Super Stuff 1", 0x40d3820, 0x40d3840, indexKOFXISprites_Gai, 0x20 },
    { L"E+A - Electric Palette", 0x40d3840, 0x40d3860, indexKOFXISprites_Gai, 0x41 },
    { L"E+A - Darker Palette", 0x40d3860, 0x40d3880, indexKOFXISprites_Gai, 0x40 },
    { L"E+A - Super Stuff 2", 0x40d3880, 0x40d38a0, indexKOFXISprites_Gai, 0x21 },
    { L"E+A - Character Extra 1", 0x40d38a0, 0x40d38c0, indexKOFXISprites_Gai, 0x30 },
    { L"E+A - Character Extra 2", 0x40d38c0, 0x40d38e0, indexKOFXISprites_Gai, 0x31 },
    { L"E+A - Character Extra 3", 0x40d38e0, 0x40d3900, indexKOFXISprites_Gai, 0x32 },
    { L"E+A - Extra Move 1", 0x40d3900, 0x40d3920, indexKOFXISprites_Gai, 0x10 },
    { L"E+A - Extra Move 2", 0x40d3920, 0x40d3940, indexKOFXISprites_Gai, 0x11 },
    { L"E+A - Extra Move 3", 0x40d3940, 0x40d3960, indexKOFXISprites_Gai, 0x12 },
    { L"E+A - Extra Move 4", 0x40d3960, 0x40d3980, indexKOFXISprites_Gai, 0x13 },
    { L"E+A - Extra Move 5", 0x40d3980, 0x40d39a0, indexKOFXISprites_Gai, 0x14 },
    { L"E+A - Extra Move 6", 0x40d39a0, 0x40d39c0, indexKOFXISprites_Gai, 0x15 },
    { L"E+A - Extra Move 7", 0x40d39c0, 0x40d39e0, indexKOFXISprites_Gai, 0x16 },
    { L"E+A - Extra Move 8", 0x40d39e0, 0x40d3a00, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_EB[] =
{
    { L"Gai EB", 0x40d3a00, 0x40d3a20, indexKOFXISprites_Gai },
    { L"E+B - Super Stuff 1", 0x40d3a20, 0x40d3a40, indexKOFXISprites_Gai, 0x20 },
    { L"E+B - Electric Palette", 0x40d3a40, 0x40d3a60, indexKOFXISprites_Gai, 0x41 },
    { L"E+B - Darker Palette", 0x40d3a60, 0x40d3a80, indexKOFXISprites_Gai, 0x40 },
    { L"E+B - Super Stuff 2", 0x40d3a80, 0x40d3aa0, indexKOFXISprites_Gai, 0x21 },
    { L"E+B - Character Extra 1", 0x40d3aa0, 0x40d3ac0, indexKOFXISprites_Gai, 0x30 },
    { L"E+B - Character Extra 2", 0x40d3ac0, 0x40d3ae0, indexKOFXISprites_Gai, 0x31 },
    { L"E+B - Character Extra 3", 0x40d3ae0, 0x40d3b00, indexKOFXISprites_Gai, 0x32 },
    { L"E+B - Extra Move 1", 0x40d3b00, 0x40d3b20, indexKOFXISprites_Gai, 0x10 },
    { L"E+B - Extra Move 2", 0x40d3b20, 0x40d3b40, indexKOFXISprites_Gai, 0x11 },
    { L"E+B - Extra Move 3", 0x40d3b40, 0x40d3b60, indexKOFXISprites_Gai, 0x12 },
    { L"E+B - Extra Move 4", 0x40d3b60, 0x40d3b80, indexKOFXISprites_Gai, 0x13 },
    { L"E+B - Extra Move 5", 0x40d3b80, 0x40d3ba0, indexKOFXISprites_Gai, 0x14 },
    { L"E+B - Extra Move 6", 0x40d3ba0, 0x40d3bc0, indexKOFXISprites_Gai, 0x15 },
    { L"E+B - Extra Move 7", 0x40d3bc0, 0x40d3be0, indexKOFXISprites_Gai, 0x16 },
    { L"E+B - Extra Move 8", 0x40d3be0, 0x40d3c00, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_EC[] =
{
    { L"Gai EC", 0x40d3c00, 0x40d3c20, indexKOFXISprites_Gai },
    { L"E+C - Super Stuff 1", 0x40d3c20, 0x40d3c40, indexKOFXISprites_Gai, 0x20 },
    { L"E+C - Electric Palette", 0x40d3c40, 0x40d3c60, indexKOFXISprites_Gai, 0x41 },
    { L"E+C - Darker Palette", 0x40d3c60, 0x40d3c80, indexKOFXISprites_Gai, 0x40 },
    { L"E+C - Super Stuff 2", 0x40d3c80, 0x40d3ca0, indexKOFXISprites_Gai, 0x21 },
    { L"E+C - Character Extra 1", 0x40d3ca0, 0x40d3cc0, indexKOFXISprites_Gai, 0x30 },
    { L"E+C - Character Extra 2", 0x40d3cc0, 0x40d3ce0, indexKOFXISprites_Gai, 0x31 },
    { L"E+C - Character Extra 3", 0x40d3ce0, 0x40d3d00, indexKOFXISprites_Gai, 0x32 },
    { L"E+C - Extra Move 1", 0x40d3d00, 0x40d3d20, indexKOFXISprites_Gai, 0x10 },
    { L"E+C - Extra Move 2", 0x40d3d20, 0x40d3d40, indexKOFXISprites_Gai, 0x11 },
    { L"E+C - Extra Move 3", 0x40d3d40, 0x40d3d60, indexKOFXISprites_Gai, 0x12 },
    { L"E+C - Extra Move 4", 0x40d3d60, 0x40d3d80, indexKOFXISprites_Gai, 0x13 },
    { L"E+C - Extra Move 5", 0x40d3d80, 0x40d3da0, indexKOFXISprites_Gai, 0x14 },
    { L"E+C - Extra Move 6", 0x40d3da0, 0x40d3dc0, indexKOFXISprites_Gai, 0x15 },
    { L"E+C - Extra Move 7", 0x40d3dc0, 0x40d3de0, indexKOFXISprites_Gai, 0x16 },
    { L"E+C - Extra Move 8", 0x40d3de0, 0x40d3e00, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_ED[] =
{
    { L"Gai ED", 0x40d3e00, 0x40d3e20, indexKOFXISprites_Gai },
    { L"E+D - Super Stuff 1", 0x40d3e20, 0x40d3e40, indexKOFXISprites_Gai, 0x20 },
    { L"E+D - Electric Palette", 0x40d3e40, 0x40d3e60, indexKOFXISprites_Gai, 0x41 },
    { L"E+D - Darker Palette", 0x40d3e60, 0x40d3e80, indexKOFXISprites_Gai, 0x40 },
    { L"E+D - Super Stuff 2", 0x40d3e80, 0x40d3ea0, indexKOFXISprites_Gai, 0x21 },
    { L"E+D - Character Extra 1", 0x40d3ea0, 0x40d3ec0, indexKOFXISprites_Gai, 0x30 },
    { L"E+D - Character Extra 2", 0x40d3ec0, 0x40d3ee0, indexKOFXISprites_Gai, 0x31 },
    { L"E+D - Character Extra 3", 0x40d3ee0, 0x40d3f00, indexKOFXISprites_Gai, 0x32 },
    { L"E+D - Extra Move 1", 0x40d3f00, 0x40d3f20, indexKOFXISprites_Gai, 0x10 },
    { L"E+D - Extra Move 2", 0x40d3f20, 0x40d3f40, indexKOFXISprites_Gai, 0x11 },
    { L"E+D - Extra Move 3", 0x40d3f40, 0x40d3f60, indexKOFXISprites_Gai, 0x12 },
    { L"E+D - Extra Move 4", 0x40d3f60, 0x40d3f80, indexKOFXISprites_Gai, 0x13 },
    { L"E+D - Extra Move 5", 0x40d3f80, 0x40d3fa0, indexKOFXISprites_Gai, 0x14 },
    { L"E+D - Extra Move 6", 0x40d3fa0, 0x40d3fc0, indexKOFXISprites_Gai, 0x15 },
    { L"E+D - Extra Move 7", 0x40d3fc0, 0x40d3fe0, indexKOFXISprites_Gai, 0x16 },
    { L"E+D - Extra Move 8", 0x40d3fe0, 0x40d4000, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_SA[] =
{
    { L"Gai SA", 0x40d4000, 0x40d4020, indexKOFXISprites_Gai },
    { L"Start+A - Super Stuff 1", 0x40d4020, 0x40d4040, indexKOFXISprites_Gai, 0x20 },
    { L"Start+A - Electric Palette", 0x40d4040, 0x40d4060, indexKOFXISprites_Gai, 0x41 },
    { L"Start+A - Darker Palette", 0x40d4060, 0x40d4080, indexKOFXISprites_Gai, 0x40 },
    { L"Start+A - Super Stuff 2", 0x40d4080, 0x40d40a0, indexKOFXISprites_Gai, 0x21 },
    { L"Start+A - Character Extra 1", 0x40d40a0, 0x40d40c0, indexKOFXISprites_Gai, 0x30 },
    { L"Start+A - Character Extra 2", 0x40d40c0, 0x40d40e0, indexKOFXISprites_Gai, 0x31 },
    { L"Start+A - Character Extra 3", 0x40d40e0, 0x40d4100, indexKOFXISprites_Gai, 0x32 },
    { L"Start+A - Extra Move 1", 0x40d4100, 0x40d4120, indexKOFXISprites_Gai, 0x10 },
    { L"Start+A - Extra Move 2", 0x40d4120, 0x40d4140, indexKOFXISprites_Gai, 0x11 },
    { L"Start+A - Extra Move 3", 0x40d4140, 0x40d4160, indexKOFXISprites_Gai, 0x12 },
    { L"Start+A - Extra Move 4", 0x40d4160, 0x40d4180, indexKOFXISprites_Gai, 0x13 },
    { L"Start+A - Extra Move 5", 0x40d4180, 0x40d41a0, indexKOFXISprites_Gai, 0x14 },
    { L"Start+A - Extra Move 6", 0x40d41a0, 0x40d41c0, indexKOFXISprites_Gai, 0x15 },
    { L"Start+A - Extra Move 7", 0x40d41c0, 0x40d41e0, indexKOFXISprites_Gai, 0x16 },
    { L"Start+A - Extra Move 8", 0x40d41e0, 0x40d4200, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_SB[] =
{
    { L"Gai SB", 0x40d4200, 0x40d4220, indexKOFXISprites_Gai },
    { L"Start+B - Super Stuff 1", 0x40d4220, 0x40d4240, indexKOFXISprites_Gai, 0x20 },
    { L"Start+B - Electric Palette", 0x40d4240, 0x40d4260, indexKOFXISprites_Gai, 0x41 },
    { L"Start+B - Darker Palette", 0x40d4260, 0x40d4280, indexKOFXISprites_Gai, 0x40 },
    { L"Start+B - Super Stuff 2", 0x40d4280, 0x40d42a0, indexKOFXISprites_Gai, 0x21 },
    { L"Start+B - Character Extra 1", 0x40d42a0, 0x40d42c0, indexKOFXISprites_Gai, 0x30 },
    { L"Start+B - Character Extra 2", 0x40d42c0, 0x40d42e0, indexKOFXISprites_Gai, 0x31 },
    { L"Start+B - Character Extra 3", 0x40d42e0, 0x40d4300, indexKOFXISprites_Gai, 0x32 },
    { L"Start+B - Extra Move 1", 0x40d4300, 0x40d4320, indexKOFXISprites_Gai, 0x10 },
    { L"Start+B - Extra Move 2", 0x40d4320, 0x40d4340, indexKOFXISprites_Gai, 0x11 },
    { L"Start+B - Extra Move 3", 0x40d4340, 0x40d4360, indexKOFXISprites_Gai, 0x12 },
    { L"Start+B - Extra Move 4", 0x40d4360, 0x40d4380, indexKOFXISprites_Gai, 0x13 },
    { L"Start+B - Extra Move 5", 0x40d4380, 0x40d43a0, indexKOFXISprites_Gai, 0x14 },
    { L"Start+B - Extra Move 6", 0x40d43a0, 0x40d43c0, indexKOFXISprites_Gai, 0x15 },
    { L"Start+B - Extra Move 7", 0x40d43c0, 0x40d43e0, indexKOFXISprites_Gai, 0x16 },
    { L"Start+B - Extra Move 8", 0x40d43e0, 0x40d4400, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_SC[] =
{
    { L"Gai SC", 0x40d4400, 0x40d4420, indexKOFXISprites_Gai },
    { L"Start+C - Super Stuff 1", 0x40d4420, 0x40d4440, indexKOFXISprites_Gai, 0x20 },
    { L"Start+C - Electric Palette", 0x40d4440, 0x40d4460, indexKOFXISprites_Gai, 0x41 },
    { L"Start+C - Darker Palette", 0x40d4460, 0x40d4480, indexKOFXISprites_Gai, 0x40 },
    { L"Start+C - Super Stuff 2", 0x40d4480, 0x40d44a0, indexKOFXISprites_Gai, 0x21 },
    { L"Start+C - Character Extra 1", 0x40d44a0, 0x40d44c0, indexKOFXISprites_Gai, 0x30 },
    { L"Start+C - Character Extra 2", 0x40d44c0, 0x40d44e0, indexKOFXISprites_Gai, 0x31 },
    { L"Start+C - Character Extra 3", 0x40d44e0, 0x40d4500, indexKOFXISprites_Gai, 0x32 },
    { L"Start+C - Extra Move 1", 0x40d4500, 0x40d4520, indexKOFXISprites_Gai, 0x10 },
    { L"Start+C - Extra Move 2", 0x40d4520, 0x40d4540, indexKOFXISprites_Gai, 0x11 },
    { L"Start+C - Extra Move 3", 0x40d4540, 0x40d4560, indexKOFXISprites_Gai, 0x12 },
    { L"Start+C - Extra Move 4", 0x40d4560, 0x40d4580, indexKOFXISprites_Gai, 0x13 },
    { L"Start+C - Extra Move 5", 0x40d4580, 0x40d45a0, indexKOFXISprites_Gai, 0x14 },
    { L"Start+C - Extra Move 6", 0x40d45a0, 0x40d45c0, indexKOFXISprites_Gai, 0x15 },
    { L"Start+C - Extra Move 7", 0x40d45c0, 0x40d45e0, indexKOFXISprites_Gai, 0x16 },
    { L"Start+C - Extra Move 8", 0x40d45e0, 0x40d4600, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_GAI_PALETTES_SD[] =
{
    { L"Gai SD", 0x40d4600, 0x40d4620, indexKOFXISprites_Gai },
    { L"Start+D - Super Stuff 1", 0x40d4620, 0x40d4640, indexKOFXISprites_Gai, 0x20 },
    { L"Start+D - Electric Palette", 0x40d4640, 0x40d4660, indexKOFXISprites_Gai, 0x41 },
    { L"Start+D - Darker Palette", 0x40d4660, 0x40d4680, indexKOFXISprites_Gai, 0x40 },
    { L"Start+D - Super Stuff 2", 0x40d4680, 0x40d46a0, indexKOFXISprites_Gai, 0x21 },
    { L"Start+D - Character Extra 1", 0x40d46a0, 0x40d46c0, indexKOFXISprites_Gai, 0x30 },
    { L"Start+D - Character Extra 2", 0x40d46c0, 0x40d46e0, indexKOFXISprites_Gai, 0x31 },
    { L"Start+D - Character Extra 3", 0x40d46e0, 0x40d4700, indexKOFXISprites_Gai, 0x32 },
    { L"Start+D - Extra Move 1", 0x40d4700, 0x40d4720, indexKOFXISprites_Gai, 0x10 },
    { L"Start+D - Extra Move 2", 0x40d4720, 0x40d4740, indexKOFXISprites_Gai, 0x11 },
    { L"Start+D - Extra Move 3", 0x40d4740, 0x40d4760, indexKOFXISprites_Gai, 0x12 },
    { L"Start+D - Extra Move 4", 0x40d4760, 0x40d4780, indexKOFXISprites_Gai, 0x13 },
    { L"Start+D - Extra Move 5", 0x40d4780, 0x40d47a0, indexKOFXISprites_Gai, 0x14 },
    { L"Start+D - Extra Move 6", 0x40d47a0, 0x40d47c0, indexKOFXISprites_Gai, 0x15 },
    { L"Start+D - Extra Move 7", 0x40d47c0, 0x40d47e0, indexKOFXISprites_Gai, 0x16 },
    { L"Start+D - Extra Move 8", 0x40d47e0, 0x40d4800, indexKOFXISprites_Gai, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_A[] =
{
    { L"Sho A", 0x420f800, 0x420f820, indexKOFXISprites_Sho },
    { L"A - Super Stuff 1", 0x420f820, 0x420f840, indexKOFXISprites_Sho, 0x20 },
    { L"A - Electric Palette", 0x420f840, 0x420f860, indexKOFXISprites_Sho, 0x41 },
    { L"A - Darker Palette", 0x420f860, 0x420f880, indexKOFXISprites_Sho, 0x40 },
    { L"A - Super Stuff 2", 0x420f880, 0x420f8a0, indexKOFXISprites_Sho, 0x21 },
    { L"A - Character Extra 1", 0x420f8a0, 0x420f8c0, indexKOFXISprites_Sho, 0x30 },
    { L"A - Character Extra 2", 0x420f8c0, 0x420f8e0, indexKOFXISprites_Sho, 0x31 },
    { L"A - Character Extra 3", 0x420f8e0, 0x420f900, indexKOFXISprites_Sho, 0x32 },
    { L"A - Extra Move 1", 0x420f900, 0x420f920, indexKOFXISprites_Sho, 0x10 },
    { L"A - Extra Move 2", 0x420f920, 0x420f940, indexKOFXISprites_Sho, 0x11 },
    { L"A - Extra Move 3", 0x420f940, 0x420f960, indexKOFXISprites_Sho, 0x12 },
    { L"A - Extra Move 4", 0x420f960, 0x420f980, indexKOFXISprites_Sho, 0x13 },
    { L"A - Extra Move 5", 0x420f980, 0x420f9a0, indexKOFXISprites_Sho, 0x14 },
    { L"A - Extra Move 6", 0x420f9a0, 0x420f9c0, indexKOFXISprites_Sho, 0x15 },
    { L"A - Extra Move 7", 0x420f9c0, 0x420f9e0, indexKOFXISprites_Sho, 0x16 },
    { L"A - Extra Move 8", 0x420f9e0, 0x420fa00, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_B[] =
{
    { L"Sho B", 0x420fa00, 0x420fa20, indexKOFXISprites_Sho },
    { L"B - Super Stuff 1", 0x420fa20, 0x420fa40, indexKOFXISprites_Sho, 0x20 },
    { L"B - Electric Palette", 0x420fa40, 0x420fa60, indexKOFXISprites_Sho, 0x41 },
    { L"B - Darker Palette", 0x420fa60, 0x420fa80, indexKOFXISprites_Sho, 0x40 },
    { L"B - Super Stuff 2", 0x420fa80, 0x420faa0, indexKOFXISprites_Sho, 0x21 },
    { L"B - Character Extra 1", 0x420faa0, 0x420fac0, indexKOFXISprites_Sho, 0x30 },
    { L"B - Character Extra 2", 0x420fac0, 0x420fae0, indexKOFXISprites_Sho, 0x31 },
    { L"B - Character Extra 3", 0x420fae0, 0x420fb00, indexKOFXISprites_Sho, 0x32 },
    { L"B - Extra Move 1", 0x420fb00, 0x420fb20, indexKOFXISprites_Sho, 0x10 },
    { L"B - Extra Move 2", 0x420fb20, 0x420fb40, indexKOFXISprites_Sho, 0x11 },
    { L"B - Extra Move 3", 0x420fb40, 0x420fb60, indexKOFXISprites_Sho, 0x12 },
    { L"B - Extra Move 4", 0x420fb60, 0x420fb80, indexKOFXISprites_Sho, 0x13 },
    { L"B - Extra Move 5", 0x420fb80, 0x420fba0, indexKOFXISprites_Sho, 0x14 },
    { L"B - Extra Move 6", 0x420fba0, 0x420fbc0, indexKOFXISprites_Sho, 0x15 },
    { L"B - Extra Move 7", 0x420fbc0, 0x420fbe0, indexKOFXISprites_Sho, 0x16 },
    { L"B - Extra Move 8", 0x420fbe0, 0x420fc00, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_C[] =
{
    { L"Sho C", 0x420fc00, 0x420fc20, indexKOFXISprites_Sho },
    { L"C - Super Stuff 1", 0x420fc20, 0x420fc40, indexKOFXISprites_Sho, 0x20 },
    { L"C - Electric Palette", 0x420fc40, 0x420fc60, indexKOFXISprites_Sho, 0x41 },
    { L"C - Darker Palette", 0x420fc60, 0x420fc80, indexKOFXISprites_Sho, 0x40 },
    { L"C - Super Stuff 2", 0x420fc80, 0x420fca0, indexKOFXISprites_Sho, 0x21 },
    { L"C - Character Extra 1", 0x420fca0, 0x420fcc0, indexKOFXISprites_Sho, 0x30 },
    { L"C - Character Extra 2", 0x420fcc0, 0x420fce0, indexKOFXISprites_Sho, 0x31 },
    { L"C - Character Extra 3", 0x420fce0, 0x420fd00, indexKOFXISprites_Sho, 0x32 },
    { L"C - Extra Move 1", 0x420fd00, 0x420fd20, indexKOFXISprites_Sho, 0x10 },
    { L"C - Extra Move 2", 0x420fd20, 0x420fd40, indexKOFXISprites_Sho, 0x11 },
    { L"C - Extra Move 3", 0x420fd40, 0x420fd60, indexKOFXISprites_Sho, 0x12 },
    { L"C - Extra Move 4", 0x420fd60, 0x420fd80, indexKOFXISprites_Sho, 0x13 },
    { L"C - Extra Move 5", 0x420fd80, 0x420fda0, indexKOFXISprites_Sho, 0x14 },
    { L"C - Extra Move 6", 0x420fda0, 0x420fdc0, indexKOFXISprites_Sho, 0x15 },
    { L"C - Extra Move 7", 0x420fdc0, 0x420fde0, indexKOFXISprites_Sho, 0x16 },
    { L"C - Extra Move 8", 0x420fde0, 0x420fe00, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_D[] =
{
    { L"Sho D", 0x420fe00, 0x420fe20, indexKOFXISprites_Sho },
    { L"D - Super Stuff 1", 0x420fe20, 0x420fe40, indexKOFXISprites_Sho, 0x20 },
    { L"D - Electric Palette", 0x420fe40, 0x420fe60, indexKOFXISprites_Sho, 0x41 },
    { L"D - Darker Palette", 0x420fe60, 0x420fe80, indexKOFXISprites_Sho, 0x40 },
    { L"D - Super Stuff 2", 0x420fe80, 0x420fea0, indexKOFXISprites_Sho, 0x21 },
    { L"D - Character Extra 1", 0x420fea0, 0x420fec0, indexKOFXISprites_Sho, 0x30 },
    { L"D - Character Extra 2", 0x420fec0, 0x420fee0, indexKOFXISprites_Sho, 0x31 },
    { L"D - Character Extra 3", 0x420fee0, 0x420ff00, indexKOFXISprites_Sho, 0x32 },
    { L"D - Extra Move 1", 0x420ff00, 0x420ff20, indexKOFXISprites_Sho, 0x10 },
    { L"D - Extra Move 2", 0x420ff20, 0x420ff40, indexKOFXISprites_Sho, 0x11 },
    { L"D - Extra Move 3", 0x420ff40, 0x420ff60, indexKOFXISprites_Sho, 0x12 },
    { L"D - Extra Move 4", 0x420ff60, 0x420ff80, indexKOFXISprites_Sho, 0x13 },
    { L"D - Extra Move 5", 0x420ff80, 0x420ffa0, indexKOFXISprites_Sho, 0x14 },
    { L"D - Extra Move 6", 0x420ffa0, 0x420ffc0, indexKOFXISprites_Sho, 0x15 },
    { L"D - Extra Move 7", 0x420ffc0, 0x420ffe0, indexKOFXISprites_Sho, 0x16 },
    { L"D - Extra Move 8", 0x420ffe0, 0x4210000, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_EA[] =
{
    { L"Sho EA", 0x4210000, 0x4210020, indexKOFXISprites_Sho },
    { L"E+A - Super Stuff 1", 0x4210020, 0x4210040, indexKOFXISprites_Sho, 0x20 },
    { L"E+A - Electric Palette", 0x4210040, 0x4210060, indexKOFXISprites_Sho, 0x41 },
    { L"E+A - Darker Palette", 0x4210060, 0x4210080, indexKOFXISprites_Sho, 0x40 },
    { L"E+A - Super Stuff 2", 0x4210080, 0x42100a0, indexKOFXISprites_Sho, 0x21 },
    { L"E+A - Character Extra 1", 0x42100a0, 0x42100c0, indexKOFXISprites_Sho, 0x30 },
    { L"E+A - Character Extra 2", 0x42100c0, 0x42100e0, indexKOFXISprites_Sho, 0x31 },
    { L"E+A - Character Extra 3", 0x42100e0, 0x4210100, indexKOFXISprites_Sho, 0x32 },
    { L"E+A - Extra Move 1", 0x4210100, 0x4210120, indexKOFXISprites_Sho, 0x10 },
    { L"E+A - Extra Move 2", 0x4210120, 0x4210140, indexKOFXISprites_Sho, 0x11 },
    { L"E+A - Extra Move 3", 0x4210140, 0x4210160, indexKOFXISprites_Sho, 0x12 },
    { L"E+A - Extra Move 4", 0x4210160, 0x4210180, indexKOFXISprites_Sho, 0x13 },
    { L"E+A - Extra Move 5", 0x4210180, 0x42101a0, indexKOFXISprites_Sho, 0x14 },
    { L"E+A - Extra Move 6", 0x42101a0, 0x42101c0, indexKOFXISprites_Sho, 0x15 },
    { L"E+A - Extra Move 7", 0x42101c0, 0x42101e0, indexKOFXISprites_Sho, 0x16 },
    { L"E+A - Extra Move 8", 0x42101e0, 0x4210200, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_EB[] =
{
    { L"Sho EB", 0x4210200, 0x4210220, indexKOFXISprites_Sho },
    { L"E+B - Super Stuff 1", 0x4210220, 0x4210240, indexKOFXISprites_Sho, 0x20 },
    { L"E+B - Electric Palette", 0x4210240, 0x4210260, indexKOFXISprites_Sho, 0x41 },
    { L"E+B - Darker Palette", 0x4210260, 0x4210280, indexKOFXISprites_Sho, 0x40 },
    { L"E+B - Super Stuff 2", 0x4210280, 0x42102a0, indexKOFXISprites_Sho, 0x21 },
    { L"E+B - Character Extra 1", 0x42102a0, 0x42102c0, indexKOFXISprites_Sho, 0x30 },
    { L"E+B - Character Extra 2", 0x42102c0, 0x42102e0, indexKOFXISprites_Sho, 0x31 },
    { L"E+B - Character Extra 3", 0x42102e0, 0x4210300, indexKOFXISprites_Sho, 0x32 },
    { L"E+B - Extra Move 1", 0x4210300, 0x4210320, indexKOFXISprites_Sho, 0x10 },
    { L"E+B - Extra Move 2", 0x4210320, 0x4210340, indexKOFXISprites_Sho, 0x11 },
    { L"E+B - Extra Move 3", 0x4210340, 0x4210360, indexKOFXISprites_Sho, 0x12 },
    { L"E+B - Extra Move 4", 0x4210360, 0x4210380, indexKOFXISprites_Sho, 0x13 },
    { L"E+B - Extra Move 5", 0x4210380, 0x42103a0, indexKOFXISprites_Sho, 0x14 },
    { L"E+B - Extra Move 6", 0x42103a0, 0x42103c0, indexKOFXISprites_Sho, 0x15 },
    { L"E+B - Extra Move 7", 0x42103c0, 0x42103e0, indexKOFXISprites_Sho, 0x16 },
    { L"E+B - Extra Move 8", 0x42103e0, 0x4210400, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_EC[] =
{
    { L"Sho EC", 0x4210400, 0x4210420, indexKOFXISprites_Sho },
    { L"E+C - Super Stuff 1", 0x4210420, 0x4210440, indexKOFXISprites_Sho, 0x20 },
    { L"E+C - Electric Palette", 0x4210440, 0x4210460, indexKOFXISprites_Sho, 0x41 },
    { L"E+C - Darker Palette", 0x4210460, 0x4210480, indexKOFXISprites_Sho, 0x40 },
    { L"E+C - Super Stuff 2", 0x4210480, 0x42104a0, indexKOFXISprites_Sho, 0x21 },
    { L"E+C - Character Extra 1", 0x42104a0, 0x42104c0, indexKOFXISprites_Sho, 0x30 },
    { L"E+C - Character Extra 2", 0x42104c0, 0x42104e0, indexKOFXISprites_Sho, 0x31 },
    { L"E+C - Character Extra 3", 0x42104e0, 0x4210500, indexKOFXISprites_Sho, 0x32 },
    { L"E+C - Extra Move 1", 0x4210500, 0x4210520, indexKOFXISprites_Sho, 0x10 },
    { L"E+C - Extra Move 2", 0x4210520, 0x4210540, indexKOFXISprites_Sho, 0x11 },
    { L"E+C - Extra Move 3", 0x4210540, 0x4210560, indexKOFXISprites_Sho, 0x12 },
    { L"E+C - Extra Move 4", 0x4210560, 0x4210580, indexKOFXISprites_Sho, 0x13 },
    { L"E+C - Extra Move 5", 0x4210580, 0x42105a0, indexKOFXISprites_Sho, 0x14 },
    { L"E+C - Extra Move 6", 0x42105a0, 0x42105c0, indexKOFXISprites_Sho, 0x15 },
    { L"E+C - Extra Move 7", 0x42105c0, 0x42105e0, indexKOFXISprites_Sho, 0x16 },
    { L"E+C - Extra Move 8", 0x42105e0, 0x4210600, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_ED[] =
{
    { L"Sho ED", 0x4210600, 0x4210620, indexKOFXISprites_Sho },
    { L"E+D - Super Stuff 1", 0x4210620, 0x4210640, indexKOFXISprites_Sho, 0x20 },
    { L"E+D - Electric Palette", 0x4210640, 0x4210660, indexKOFXISprites_Sho, 0x41 },
    { L"E+D - Darker Palette", 0x4210660, 0x4210680, indexKOFXISprites_Sho, 0x40 },
    { L"E+D - Super Stuff 2", 0x4210680, 0x42106a0, indexKOFXISprites_Sho, 0x21 },
    { L"E+D - Character Extra 1", 0x42106a0, 0x42106c0, indexKOFXISprites_Sho, 0x30 },
    { L"E+D - Character Extra 2", 0x42106c0, 0x42106e0, indexKOFXISprites_Sho, 0x31 },
    { L"E+D - Character Extra 3", 0x42106e0, 0x4210700, indexKOFXISprites_Sho, 0x32 },
    { L"E+D - Extra Move 1", 0x4210700, 0x4210720, indexKOFXISprites_Sho, 0x10 },
    { L"E+D - Extra Move 2", 0x4210720, 0x4210740, indexKOFXISprites_Sho, 0x11 },
    { L"E+D - Extra Move 3", 0x4210740, 0x4210760, indexKOFXISprites_Sho, 0x12 },
    { L"E+D - Extra Move 4", 0x4210760, 0x4210780, indexKOFXISprites_Sho, 0x13 },
    { L"E+D - Extra Move 5", 0x4210780, 0x42107a0, indexKOFXISprites_Sho, 0x14 },
    { L"E+D - Extra Move 6", 0x42107a0, 0x42107c0, indexKOFXISprites_Sho, 0x15 },
    { L"E+D - Extra Move 7", 0x42107c0, 0x42107e0, indexKOFXISprites_Sho, 0x16 },
    { L"E+D - Extra Move 8", 0x42107e0, 0x4210800, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_SA[] =
{
    { L"Sho SA", 0x4210800, 0x4210820, indexKOFXISprites_Sho },
    { L"Start+A - Super Stuff 1", 0x4210820, 0x4210840, indexKOFXISprites_Sho, 0x20 },
    { L"Start+A - Electric Palette", 0x4210840, 0x4210860, indexKOFXISprites_Sho, 0x41 },
    { L"Start+A - Darker Palette", 0x4210860, 0x4210880, indexKOFXISprites_Sho, 0x40 },
    { L"Start+A - Super Stuff 2", 0x4210880, 0x42108a0, indexKOFXISprites_Sho, 0x21 },
    { L"Start+A - Character Extra 1", 0x42108a0, 0x42108c0, indexKOFXISprites_Sho, 0x30 },
    { L"Start+A - Character Extra 2", 0x42108c0, 0x42108e0, indexKOFXISprites_Sho, 0x31 },
    { L"Start+A - Character Extra 3", 0x42108e0, 0x4210900, indexKOFXISprites_Sho, 0x32 },
    { L"Start+A - Extra Move 1", 0x4210900, 0x4210920, indexKOFXISprites_Sho, 0x10 },
    { L"Start+A - Extra Move 2", 0x4210920, 0x4210940, indexKOFXISprites_Sho, 0x11 },
    { L"Start+A - Extra Move 3", 0x4210940, 0x4210960, indexKOFXISprites_Sho, 0x12 },
    { L"Start+A - Extra Move 4", 0x4210960, 0x4210980, indexKOFXISprites_Sho, 0x13 },
    { L"Start+A - Extra Move 5", 0x4210980, 0x42109a0, indexKOFXISprites_Sho, 0x14 },
    { L"Start+A - Extra Move 6", 0x42109a0, 0x42109c0, indexKOFXISprites_Sho, 0x15 },
    { L"Start+A - Extra Move 7", 0x42109c0, 0x42109e0, indexKOFXISprites_Sho, 0x16 },
    { L"Start+A - Extra Move 8", 0x42109e0, 0x4210a00, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_SB[] =
{
    { L"Sho SB", 0x4210a00, 0x4210a20, indexKOFXISprites_Sho },
    { L"Start+B - Super Stuff 1", 0x4210a20, 0x4210a40, indexKOFXISprites_Sho, 0x20 },
    { L"Start+B - Electric Palette", 0x4210a40, 0x4210a60, indexKOFXISprites_Sho, 0x41 },
    { L"Start+B - Darker Palette", 0x4210a60, 0x4210a80, indexKOFXISprites_Sho, 0x40 },
    { L"Start+B - Super Stuff 2", 0x4210a80, 0x4210aa0, indexKOFXISprites_Sho, 0x21 },
    { L"Start+B - Character Extra 1", 0x4210aa0, 0x4210ac0, indexKOFXISprites_Sho, 0x30 },
    { L"Start+B - Character Extra 2", 0x4210ac0, 0x4210ae0, indexKOFXISprites_Sho, 0x31 },
    { L"Start+B - Character Extra 3", 0x4210ae0, 0x4210b00, indexKOFXISprites_Sho, 0x32 },
    { L"Start+B - Extra Move 1", 0x4210b00, 0x4210b20, indexKOFXISprites_Sho, 0x10 },
    { L"Start+B - Extra Move 2", 0x4210b20, 0x4210b40, indexKOFXISprites_Sho, 0x11 },
    { L"Start+B - Extra Move 3", 0x4210b40, 0x4210b60, indexKOFXISprites_Sho, 0x12 },
    { L"Start+B - Extra Move 4", 0x4210b60, 0x4210b80, indexKOFXISprites_Sho, 0x13 },
    { L"Start+B - Extra Move 5", 0x4210b80, 0x4210ba0, indexKOFXISprites_Sho, 0x14 },
    { L"Start+B - Extra Move 6", 0x4210ba0, 0x4210bc0, indexKOFXISprites_Sho, 0x15 },
    { L"Start+B - Extra Move 7", 0x4210bc0, 0x4210be0, indexKOFXISprites_Sho, 0x16 },
    { L"Start+B - Extra Move 8", 0x4210be0, 0x4210c00, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_SC[] =
{
    { L"Sho SC", 0x4210c00, 0x4210c20, indexKOFXISprites_Sho },
    { L"Start+C - Super Stuff 1", 0x4210c20, 0x4210c40, indexKOFXISprites_Sho, 0x20 },
    { L"Start+C - Electric Palette", 0x4210c40, 0x4210c60, indexKOFXISprites_Sho, 0x41 },
    { L"Start+C - Darker Palette", 0x4210c60, 0x4210c80, indexKOFXISprites_Sho, 0x40 },
    { L"Start+C - Super Stuff 2", 0x4210c80, 0x4210ca0, indexKOFXISprites_Sho, 0x21 },
    { L"Start+C - Character Extra 1", 0x4210ca0, 0x4210cc0, indexKOFXISprites_Sho, 0x30 },
    { L"Start+C - Character Extra 2", 0x4210cc0, 0x4210ce0, indexKOFXISprites_Sho, 0x31 },
    { L"Start+C - Character Extra 3", 0x4210ce0, 0x4210d00, indexKOFXISprites_Sho, 0x32 },
    { L"Start+C - Extra Move 1", 0x4210d00, 0x4210d20, indexKOFXISprites_Sho, 0x10 },
    { L"Start+C - Extra Move 2", 0x4210d20, 0x4210d40, indexKOFXISprites_Sho, 0x11 },
    { L"Start+C - Extra Move 3", 0x4210d40, 0x4210d60, indexKOFXISprites_Sho, 0x12 },
    { L"Start+C - Extra Move 4", 0x4210d60, 0x4210d80, indexKOFXISprites_Sho, 0x13 },
    { L"Start+C - Extra Move 5", 0x4210d80, 0x4210da0, indexKOFXISprites_Sho, 0x14 },
    { L"Start+C - Extra Move 6", 0x4210da0, 0x4210dc0, indexKOFXISprites_Sho, 0x15 },
    { L"Start+C - Extra Move 7", 0x4210dc0, 0x4210de0, indexKOFXISprites_Sho, 0x16 },
    { L"Start+C - Extra Move 8", 0x4210de0, 0x4210e00, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHO_PALETTES_SD[] =
{
    { L"Sho SD", 0x4210e00, 0x4210e20, indexKOFXISprites_Sho },
    { L"Start+D - Super Stuff 1", 0x4210e20, 0x4210e40, indexKOFXISprites_Sho, 0x20 },
    { L"Start+D - Electric Palette", 0x4210e40, 0x4210e60, indexKOFXISprites_Sho, 0x41 },
    { L"Start+D - Darker Palette", 0x4210e60, 0x4210e80, indexKOFXISprites_Sho, 0x40 },
    { L"Start+D - Super Stuff 2", 0x4210e80, 0x4210ea0, indexKOFXISprites_Sho, 0x21 },
    { L"Start+D - Character Extra 1", 0x4210ea0, 0x4210ec0, indexKOFXISprites_Sho, 0x30 },
    { L"Start+D - Character Extra 2", 0x4210ec0, 0x4210ee0, indexKOFXISprites_Sho, 0x31 },
    { L"Start+D - Character Extra 3", 0x4210ee0, 0x4210f00, indexKOFXISprites_Sho, 0x32 },
    { L"Start+D - Extra Move 1", 0x4210f00, 0x4210f20, indexKOFXISprites_Sho, 0x10 },
    { L"Start+D - Extra Move 2", 0x4210f20, 0x4210f40, indexKOFXISprites_Sho, 0x11 },
    { L"Start+D - Extra Move 3", 0x4210f40, 0x4210f60, indexKOFXISprites_Sho, 0x12 },
    { L"Start+D - Extra Move 4", 0x4210f60, 0x4210f80, indexKOFXISprites_Sho, 0x13 },
    { L"Start+D - Extra Move 5", 0x4210f80, 0x4210fa0, indexKOFXISprites_Sho, 0x14 },
    { L"Start+D - Extra Move 6", 0x4210fa0, 0x4210fc0, indexKOFXISprites_Sho, 0x15 },
    { L"Start+D - Extra Move 7", 0x4210fc0, 0x4210fe0, indexKOFXISprites_Sho, 0x16 },
    { L"Start+D - Extra Move 8", 0x4210fe0, 0x4211000, indexKOFXISprites_Sho, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_A[] =
{
    { L"Adelheid A", 0x4366800, 0x4366820, indexKOFXISprites_Adelheid },
    { L"A - Super Stuff 1", 0x4366820, 0x4366840, indexKOFXISprites_Adelheid, 0x20 },
    { L"A - Electric Palette", 0x4366840, 0x4366860, indexKOFXISprites_Adelheid, 0x41 },
    { L"A - Darker Palette", 0x4366860, 0x4366880, indexKOFXISprites_Adelheid, 0x40 },
    { L"A - Super Stuff 2", 0x4366880, 0x43668a0, indexKOFXISprites_Adelheid, 0x21 },
    { L"A - Character Extra 1", 0x43668a0, 0x43668c0, indexKOFXISprites_Adelheid, 0x30 },
    { L"A - Character Extra 2", 0x43668c0, 0x43668e0, indexKOFXISprites_Adelheid, 0x31 },
    { L"A - Character Extra 3", 0x43668e0, 0x4366900, indexKOFXISprites_Adelheid, 0x32 },
    { L"A - Extra Move 1", 0x4366900, 0x4366920, indexKOFXISprites_Adelheid, 0x10 },
    { L"A - Extra Move 2", 0x4366920, 0x4366940, indexKOFXISprites_Adelheid, 0x11 },
    { L"A - Extra Move 3", 0x4366940, 0x4366960, indexKOFXISprites_Adelheid, 0x12 },
    { L"A - Extra Move 4", 0x4366960, 0x4366980, indexKOFXISprites_Adelheid, 0x13 },
    { L"A - Extra Move 5", 0x4366980, 0x43669a0, indexKOFXISprites_Adelheid, 0x14 },
    { L"A - Extra Move 6", 0x43669a0, 0x43669c0, indexKOFXISprites_Adelheid, 0x15 },
    { L"A - Extra Move 7", 0x43669c0, 0x43669e0, indexKOFXISprites_Adelheid, 0x16 },
    { L"A - Extra Move 8", 0x43669e0, 0x4366a00, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_B[] =
{
    { L"Adelheid B", 0x4366a00, 0x4366a20, indexKOFXISprites_Adelheid },
    { L"B - Super Stuff 1", 0x4366a20, 0x4366a40, indexKOFXISprites_Adelheid, 0x20 },
    { L"B - Electric Palette", 0x4366a40, 0x4366a60, indexKOFXISprites_Adelheid, 0x41 },
    { L"B - Darker Palette", 0x4366a60, 0x4366a80, indexKOFXISprites_Adelheid, 0x40 },
    { L"B - Super Stuff 2", 0x4366a80, 0x4366aa0, indexKOFXISprites_Adelheid, 0x21 },
    { L"B - Character Extra 1", 0x4366aa0, 0x4366ac0, indexKOFXISprites_Adelheid, 0x30 },
    { L"B - Character Extra 2", 0x4366ac0, 0x4366ae0, indexKOFXISprites_Adelheid, 0x31 },
    { L"B - Character Extra 3", 0x4366ae0, 0x4366b00, indexKOFXISprites_Adelheid, 0x32 },
    { L"B - Extra Move 1", 0x4366b00, 0x4366b20, indexKOFXISprites_Adelheid, 0x10 },
    { L"B - Extra Move 2", 0x4366b20, 0x4366b40, indexKOFXISprites_Adelheid, 0x11 },
    { L"B - Extra Move 3", 0x4366b40, 0x4366b60, indexKOFXISprites_Adelheid, 0x12 },
    { L"B - Extra Move 4", 0x4366b60, 0x4366b80, indexKOFXISprites_Adelheid, 0x13 },
    { L"B - Extra Move 5", 0x4366b80, 0x4366ba0, indexKOFXISprites_Adelheid, 0x14 },
    { L"B - Extra Move 6", 0x4366ba0, 0x4366bc0, indexKOFXISprites_Adelheid, 0x15 },
    { L"B - Extra Move 7", 0x4366bc0, 0x4366be0, indexKOFXISprites_Adelheid, 0x16 },
    { L"B - Extra Move 8", 0x4366be0, 0x4366c00, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_C[] =
{
    { L"Adelheid C", 0x4366c00, 0x4366c20, indexKOFXISprites_Adelheid },
    { L"C - Super Stuff 1", 0x4366c20, 0x4366c40, indexKOFXISprites_Adelheid, 0x20 },
    { L"C - Electric Palette", 0x4366c40, 0x4366c60, indexKOFXISprites_Adelheid, 0x41 },
    { L"C - Darker Palette", 0x4366c60, 0x4366c80, indexKOFXISprites_Adelheid, 0x40 },
    { L"C - Super Stuff 2", 0x4366c80, 0x4366ca0, indexKOFXISprites_Adelheid, 0x21 },
    { L"C - Character Extra 1", 0x4366ca0, 0x4366cc0, indexKOFXISprites_Adelheid, 0x30 },
    { L"C - Character Extra 2", 0x4366cc0, 0x4366ce0, indexKOFXISprites_Adelheid, 0x31 },
    { L"C - Character Extra 3", 0x4366ce0, 0x4366d00, indexKOFXISprites_Adelheid, 0x32 },
    { L"C - Extra Move 1", 0x4366d00, 0x4366d20, indexKOFXISprites_Adelheid, 0x10 },
    { L"C - Extra Move 2", 0x4366d20, 0x4366d40, indexKOFXISprites_Adelheid, 0x11 },
    { L"C - Extra Move 3", 0x4366d40, 0x4366d60, indexKOFXISprites_Adelheid, 0x12 },
    { L"C - Extra Move 4", 0x4366d60, 0x4366d80, indexKOFXISprites_Adelheid, 0x13 },
    { L"C - Extra Move 5", 0x4366d80, 0x4366da0, indexKOFXISprites_Adelheid, 0x14 },
    { L"C - Extra Move 6", 0x4366da0, 0x4366dc0, indexKOFXISprites_Adelheid, 0x15 },
    { L"C - Extra Move 7", 0x4366dc0, 0x4366de0, indexKOFXISprites_Adelheid, 0x16 },
    { L"C - Extra Move 8", 0x4366de0, 0x4366e00, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_D[] =
{
    { L"Adelheid D", 0x4366e00, 0x4366e20, indexKOFXISprites_Adelheid },
    { L"D - Super Stuff 1", 0x4366e20, 0x4366e40, indexKOFXISprites_Adelheid, 0x20 },
    { L"D - Electric Palette", 0x4366e40, 0x4366e60, indexKOFXISprites_Adelheid, 0x41 },
    { L"D - Darker Palette", 0x4366e60, 0x4366e80, indexKOFXISprites_Adelheid, 0x40 },
    { L"D - Super Stuff 2", 0x4366e80, 0x4366ea0, indexKOFXISprites_Adelheid, 0x21 },
    { L"D - Character Extra 1", 0x4366ea0, 0x4366ec0, indexKOFXISprites_Adelheid, 0x30 },
    { L"D - Character Extra 2", 0x4366ec0, 0x4366ee0, indexKOFXISprites_Adelheid, 0x31 },
    { L"D - Character Extra 3", 0x4366ee0, 0x4366f00, indexKOFXISprites_Adelheid, 0x32 },
    { L"D - Extra Move 1", 0x4366f00, 0x4366f20, indexKOFXISprites_Adelheid, 0x10 },
    { L"D - Extra Move 2", 0x4366f20, 0x4366f40, indexKOFXISprites_Adelheid, 0x11 },
    { L"D - Extra Move 3", 0x4366f40, 0x4366f60, indexKOFXISprites_Adelheid, 0x12 },
    { L"D - Extra Move 4", 0x4366f60, 0x4366f80, indexKOFXISprites_Adelheid, 0x13 },
    { L"D - Extra Move 5", 0x4366f80, 0x4366fa0, indexKOFXISprites_Adelheid, 0x14 },
    { L"D - Extra Move 6", 0x4366fa0, 0x4366fc0, indexKOFXISprites_Adelheid, 0x15 },
    { L"D - Extra Move 7", 0x4366fc0, 0x4366fe0, indexKOFXISprites_Adelheid, 0x16 },
    { L"D - Extra Move 8", 0x4366fe0, 0x4367000, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_EA[] =
{
    { L"Adelheid EA", 0x4367000, 0x4367020, indexKOFXISprites_Adelheid },
    { L"E+A - Super Stuff 1", 0x4367020, 0x4367040, indexKOFXISprites_Adelheid, 0x20 },
    { L"E+A - Electric Palette", 0x4367040, 0x4367060, indexKOFXISprites_Adelheid, 0x41 },
    { L"E+A - Darker Palette", 0x4367060, 0x4367080, indexKOFXISprites_Adelheid, 0x40 },
    { L"E+A - Super Stuff 2", 0x4367080, 0x43670a0, indexKOFXISprites_Adelheid, 0x21 },
    { L"E+A - Character Extra 1", 0x43670a0, 0x43670c0, indexKOFXISprites_Adelheid, 0x30 },
    { L"E+A - Character Extra 2", 0x43670c0, 0x43670e0, indexKOFXISprites_Adelheid, 0x31 },
    { L"E+A - Character Extra 3", 0x43670e0, 0x4367100, indexKOFXISprites_Adelheid, 0x32 },
    { L"E+A - Extra Move 1", 0x4367100, 0x4367120, indexKOFXISprites_Adelheid, 0x10 },
    { L"E+A - Extra Move 2", 0x4367120, 0x4367140, indexKOFXISprites_Adelheid, 0x11 },
    { L"E+A - Extra Move 3", 0x4367140, 0x4367160, indexKOFXISprites_Adelheid, 0x12 },
    { L"E+A - Extra Move 4", 0x4367160, 0x4367180, indexKOFXISprites_Adelheid, 0x13 },
    { L"E+A - Extra Move 5", 0x4367180, 0x43671a0, indexKOFXISprites_Adelheid, 0x14 },
    { L"E+A - Extra Move 6", 0x43671a0, 0x43671c0, indexKOFXISprites_Adelheid, 0x15 },
    { L"E+A - Extra Move 7", 0x43671c0, 0x43671e0, indexKOFXISprites_Adelheid, 0x16 },
    { L"E+A - Extra Move 8", 0x43671e0, 0x4367200, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_EB[] =
{
    { L"Adelheid EB", 0x4367200, 0x4367220, indexKOFXISprites_Adelheid },
    { L"E+B - Super Stuff 1", 0x4367220, 0x4367240, indexKOFXISprites_Adelheid, 0x20 },
    { L"E+B - Electric Palette", 0x4367240, 0x4367260, indexKOFXISprites_Adelheid, 0x41 },
    { L"E+B - Darker Palette", 0x4367260, 0x4367280, indexKOFXISprites_Adelheid, 0x40 },
    { L"E+B - Super Stuff 2", 0x4367280, 0x43672a0, indexKOFXISprites_Adelheid, 0x21 },
    { L"E+B - Character Extra 1", 0x43672a0, 0x43672c0, indexKOFXISprites_Adelheid, 0x30 },
    { L"E+B - Character Extra 2", 0x43672c0, 0x43672e0, indexKOFXISprites_Adelheid, 0x31 },
    { L"E+B - Character Extra 3", 0x43672e0, 0x4367300, indexKOFXISprites_Adelheid, 0x32 },
    { L"E+B - Extra Move 1", 0x4367300, 0x4367320, indexKOFXISprites_Adelheid, 0x10 },
    { L"E+B - Extra Move 2", 0x4367320, 0x4367340, indexKOFXISprites_Adelheid, 0x11 },
    { L"E+B - Extra Move 3", 0x4367340, 0x4367360, indexKOFXISprites_Adelheid, 0x12 },
    { L"E+B - Extra Move 4", 0x4367360, 0x4367380, indexKOFXISprites_Adelheid, 0x13 },
    { L"E+B - Extra Move 5", 0x4367380, 0x43673a0, indexKOFXISprites_Adelheid, 0x14 },
    { L"E+B - Extra Move 6", 0x43673a0, 0x43673c0, indexKOFXISprites_Adelheid, 0x15 },
    { L"E+B - Extra Move 7", 0x43673c0, 0x43673e0, indexKOFXISprites_Adelheid, 0x16 },
    { L"E+B - Extra Move 8", 0x43673e0, 0x4367400, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_EC[] =
{
    { L"Adelheid EC", 0x4367400, 0x4367420, indexKOFXISprites_Adelheid },
    { L"E+C - Super Stuff 1", 0x4367420, 0x4367440, indexKOFXISprites_Adelheid, 0x20 },
    { L"E+C - Electric Palette", 0x4367440, 0x4367460, indexKOFXISprites_Adelheid, 0x41 },
    { L"E+C - Darker Palette", 0x4367460, 0x4367480, indexKOFXISprites_Adelheid, 0x40 },
    { L"E+C - Super Stuff 2", 0x4367480, 0x43674a0, indexKOFXISprites_Adelheid, 0x21 },
    { L"E+C - Character Extra 1", 0x43674a0, 0x43674c0, indexKOFXISprites_Adelheid, 0x30 },
    { L"E+C - Character Extra 2", 0x43674c0, 0x43674e0, indexKOFXISprites_Adelheid, 0x31 },
    { L"E+C - Character Extra 3", 0x43674e0, 0x4367500, indexKOFXISprites_Adelheid, 0x32 },
    { L"E+C - Extra Move 1", 0x4367500, 0x4367520, indexKOFXISprites_Adelheid, 0x10 },
    { L"E+C - Extra Move 2", 0x4367520, 0x4367540, indexKOFXISprites_Adelheid, 0x11 },
    { L"E+C - Extra Move 3", 0x4367540, 0x4367560, indexKOFXISprites_Adelheid, 0x12 },
    { L"E+C - Extra Move 4", 0x4367560, 0x4367580, indexKOFXISprites_Adelheid, 0x13 },
    { L"E+C - Extra Move 5", 0x4367580, 0x43675a0, indexKOFXISprites_Adelheid, 0x14 },
    { L"E+C - Extra Move 6", 0x43675a0, 0x43675c0, indexKOFXISprites_Adelheid, 0x15 },
    { L"E+C - Extra Move 7", 0x43675c0, 0x43675e0, indexKOFXISprites_Adelheid, 0x16 },
    { L"E+C - Extra Move 8", 0x43675e0, 0x4367600, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_ED[] =
{
    { L"Adelheid ED", 0x4367600, 0x4367620, indexKOFXISprites_Adelheid },
    { L"E+D - Super Stuff 1", 0x4367620, 0x4367640, indexKOFXISprites_Adelheid, 0x20 },
    { L"E+D - Electric Palette", 0x4367640, 0x4367660, indexKOFXISprites_Adelheid, 0x41 },
    { L"E+D - Darker Palette", 0x4367660, 0x4367680, indexKOFXISprites_Adelheid, 0x40 },
    { L"E+D - Super Stuff 2", 0x4367680, 0x43676a0, indexKOFXISprites_Adelheid, 0x21 },
    { L"E+D - Character Extra 1", 0x43676a0, 0x43676c0, indexKOFXISprites_Adelheid, 0x30 },
    { L"E+D - Character Extra 2", 0x43676c0, 0x43676e0, indexKOFXISprites_Adelheid, 0x31 },
    { L"E+D - Character Extra 3", 0x43676e0, 0x4367700, indexKOFXISprites_Adelheid, 0x32 },
    { L"E+D - Extra Move 1", 0x4367700, 0x4367720, indexKOFXISprites_Adelheid, 0x10 },
    { L"E+D - Extra Move 2", 0x4367720, 0x4367740, indexKOFXISprites_Adelheid, 0x11 },
    { L"E+D - Extra Move 3", 0x4367740, 0x4367760, indexKOFXISprites_Adelheid, 0x12 },
    { L"E+D - Extra Move 4", 0x4367760, 0x4367780, indexKOFXISprites_Adelheid, 0x13 },
    { L"E+D - Extra Move 5", 0x4367780, 0x43677a0, indexKOFXISprites_Adelheid, 0x14 },
    { L"E+D - Extra Move 6", 0x43677a0, 0x43677c0, indexKOFXISprites_Adelheid, 0x15 },
    { L"E+D - Extra Move 7", 0x43677c0, 0x43677e0, indexKOFXISprites_Adelheid, 0x16 },
    { L"E+D - Extra Move 8", 0x43677e0, 0x4367800, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_SA[] =
{
    { L"Adelheid SA", 0x4367800, 0x4367820, indexKOFXISprites_Adelheid },
    { L"Start+A - Super Stuff 1", 0x4367820, 0x4367840, indexKOFXISprites_Adelheid, 0x20 },
    { L"Start+A - Electric Palette", 0x4367840, 0x4367860, indexKOFXISprites_Adelheid, 0x41 },
    { L"Start+A - Darker Palette", 0x4367860, 0x4367880, indexKOFXISprites_Adelheid, 0x40 },
    { L"Start+A - Super Stuff 2", 0x4367880, 0x43678a0, indexKOFXISprites_Adelheid, 0x21 },
    { L"Start+A - Character Extra 1", 0x43678a0, 0x43678c0, indexKOFXISprites_Adelheid, 0x30 },
    { L"Start+A - Character Extra 2", 0x43678c0, 0x43678e0, indexKOFXISprites_Adelheid, 0x31 },
    { L"Start+A - Character Extra 3", 0x43678e0, 0x4367900, indexKOFXISprites_Adelheid, 0x32 },
    { L"Start+A - Extra Move 1", 0x4367900, 0x4367920, indexKOFXISprites_Adelheid, 0x10 },
    { L"Start+A - Extra Move 2", 0x4367920, 0x4367940, indexKOFXISprites_Adelheid, 0x11 },
    { L"Start+A - Extra Move 3", 0x4367940, 0x4367960, indexKOFXISprites_Adelheid, 0x12 },
    { L"Start+A - Extra Move 4", 0x4367960, 0x4367980, indexKOFXISprites_Adelheid, 0x13 },
    { L"Start+A - Extra Move 5", 0x4367980, 0x43679a0, indexKOFXISprites_Adelheid, 0x14 },
    { L"Start+A - Extra Move 6", 0x43679a0, 0x43679c0, indexKOFXISprites_Adelheid, 0x15 },
    { L"Start+A - Extra Move 7", 0x43679c0, 0x43679e0, indexKOFXISprites_Adelheid, 0x16 },
    { L"Start+A - Extra Move 8", 0x43679e0, 0x4367a00, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_SB[] =
{
    { L"Adelheid SB", 0x4367a00, 0x4367a20, indexKOFXISprites_Adelheid },
    { L"Start+B - Super Stuff 1", 0x4367a20, 0x4367a40, indexKOFXISprites_Adelheid, 0x20 },
    { L"Start+B - Electric Palette", 0x4367a40, 0x4367a60, indexKOFXISprites_Adelheid, 0x41 },
    { L"Start+B - Darker Palette", 0x4367a60, 0x4367a80, indexKOFXISprites_Adelheid, 0x40 },
    { L"Start+B - Super Stuff 2", 0x4367a80, 0x4367aa0, indexKOFXISprites_Adelheid, 0x21 },
    { L"Start+B - Character Extra 1", 0x4367aa0, 0x4367ac0, indexKOFXISprites_Adelheid, 0x30 },
    { L"Start+B - Character Extra 2", 0x4367ac0, 0x4367ae0, indexKOFXISprites_Adelheid, 0x31 },
    { L"Start+B - Character Extra 3", 0x4367ae0, 0x4367b00, indexKOFXISprites_Adelheid, 0x32 },
    { L"Start+B - Extra Move 1", 0x4367b00, 0x4367b20, indexKOFXISprites_Adelheid, 0x10 },
    { L"Start+B - Extra Move 2", 0x4367b20, 0x4367b40, indexKOFXISprites_Adelheid, 0x11 },
    { L"Start+B - Extra Move 3", 0x4367b40, 0x4367b60, indexKOFXISprites_Adelheid, 0x12 },
    { L"Start+B - Extra Move 4", 0x4367b60, 0x4367b80, indexKOFXISprites_Adelheid, 0x13 },
    { L"Start+B - Extra Move 5", 0x4367b80, 0x4367ba0, indexKOFXISprites_Adelheid, 0x14 },
    { L"Start+B - Extra Move 6", 0x4367ba0, 0x4367bc0, indexKOFXISprites_Adelheid, 0x15 },
    { L"Start+B - Extra Move 7", 0x4367bc0, 0x4367be0, indexKOFXISprites_Adelheid, 0x16 },
    { L"Start+B - Extra Move 8", 0x4367be0, 0x4367c00, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_SC[] =
{
    { L"Adelheid SC", 0x4367c00, 0x4367c20, indexKOFXISprites_Adelheid },
    { L"Start+C - Super Stuff 1", 0x4367c20, 0x4367c40, indexKOFXISprites_Adelheid, 0x20 },
    { L"Start+C - Electric Palette", 0x4367c40, 0x4367c60, indexKOFXISprites_Adelheid, 0x41 },
    { L"Start+C - Darker Palette", 0x4367c60, 0x4367c80, indexKOFXISprites_Adelheid, 0x40 },
    { L"Start+C - Super Stuff 2", 0x4367c80, 0x4367ca0, indexKOFXISprites_Adelheid, 0x21 },
    { L"Start+C - Character Extra 1", 0x4367ca0, 0x4367cc0, indexKOFXISprites_Adelheid, 0x30 },
    { L"Start+C - Character Extra 2", 0x4367cc0, 0x4367ce0, indexKOFXISprites_Adelheid, 0x31 },
    { L"Start+C - Character Extra 3", 0x4367ce0, 0x4367d00, indexKOFXISprites_Adelheid, 0x32 },
    { L"Start+C - Extra Move 1", 0x4367d00, 0x4367d20, indexKOFXISprites_Adelheid, 0x10 },
    { L"Start+C - Extra Move 2", 0x4367d20, 0x4367d40, indexKOFXISprites_Adelheid, 0x11 },
    { L"Start+C - Extra Move 3", 0x4367d40, 0x4367d60, indexKOFXISprites_Adelheid, 0x12 },
    { L"Start+C - Extra Move 4", 0x4367d60, 0x4367d80, indexKOFXISprites_Adelheid, 0x13 },
    { L"Start+C - Extra Move 5", 0x4367d80, 0x4367da0, indexKOFXISprites_Adelheid, 0x14 },
    { L"Start+C - Extra Move 6", 0x4367da0, 0x4367dc0, indexKOFXISprites_Adelheid, 0x15 },
    { L"Start+C - Extra Move 7", 0x4367dc0, 0x4367de0, indexKOFXISprites_Adelheid, 0x16 },
    { L"Start+C - Extra Move 8", 0x4367de0, 0x4367e00, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_ADELHEID_PALETTES_SD[] =
{
    { L"Adelheid SD", 0x4367e00, 0x4367e20, indexKOFXISprites_Adelheid },
    { L"Start+D - Super Stuff 1", 0x4367e20, 0x4367e40, indexKOFXISprites_Adelheid, 0x20 },
    { L"Start+D - Electric Palette", 0x4367e40, 0x4367e60, indexKOFXISprites_Adelheid, 0x41 },
    { L"Start+D - Darker Palette", 0x4367e60, 0x4367e80, indexKOFXISprites_Adelheid, 0x40 },
    { L"Start+D - Super Stuff 2", 0x4367e80, 0x4367ea0, indexKOFXISprites_Adelheid, 0x21 },
    { L"Start+D - Character Extra 1", 0x4367ea0, 0x4367ec0, indexKOFXISprites_Adelheid, 0x30 },
    { L"Start+D - Character Extra 2", 0x4367ec0, 0x4367ee0, indexKOFXISprites_Adelheid, 0x31 },
    { L"Start+D - Character Extra 3", 0x4367ee0, 0x4367f00, indexKOFXISprites_Adelheid, 0x32 },
    { L"Start+D - Extra Move 1", 0x4367f00, 0x4367f20, indexKOFXISprites_Adelheid, 0x10 },
    { L"Start+D - Extra Move 2", 0x4367f20, 0x4367f40, indexKOFXISprites_Adelheid, 0x11 },
    { L"Start+D - Extra Move 3", 0x4367f40, 0x4367f60, indexKOFXISprites_Adelheid, 0x12 },
    { L"Start+D - Extra Move 4", 0x4367f60, 0x4367f80, indexKOFXISprites_Adelheid, 0x13 },
    { L"Start+D - Extra Move 5", 0x4367f80, 0x4367fa0, indexKOFXISprites_Adelheid, 0x14 },
    { L"Start+D - Extra Move 6", 0x4367fa0, 0x4367fc0, indexKOFXISprites_Adelheid, 0x15 },
    { L"Start+D - Extra Move 7", 0x4367fc0, 0x4367fe0, indexKOFXISprites_Adelheid, 0x16 },
    { L"Start+D - Extra Move 8", 0x4367fe0, 0x4368000, indexKOFXISprites_Adelheid, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_A[] =
{
    { L"Silber A", 0x44b1000, 0x44b1020, indexKOFXISprites_Silber },
    { L"A - Super Stuff 1", 0x44b1020, 0x44b1040, indexKOFXISprites_Silber, 0x20 },
    { L"A - Electric Palette", 0x44b1040, 0x44b1060, indexKOFXISprites_Silber, 0x41 },
    { L"A - Darker Palette", 0x44b1060, 0x44b1080, indexKOFXISprites_Silber, 0x40 },
    { L"A - Super Stuff 2", 0x44b1080, 0x44b10a0, indexKOFXISprites_Silber, 0x21 },
    { L"A - Character Extra 1", 0x44b10a0, 0x44b10c0, indexKOFXISprites_Silber, 0x30 },
    { L"A - Character Extra 2", 0x44b10c0, 0x44b10e0, indexKOFXISprites_Silber, 0x31 },
    { L"A - Character Extra 3", 0x44b10e0, 0x44b1100, indexKOFXISprites_Silber, 0x32 },
    { L"A - Extra Move 1", 0x44b1100, 0x44b1120, indexKOFXISprites_Silber, 0x10 },
    { L"A - Extra Move 2", 0x44b1120, 0x44b1140, indexKOFXISprites_Silber, 0x11 },
    { L"A - Extra Move 3", 0x44b1140, 0x44b1160, indexKOFXISprites_Silber, 0x12 },
    { L"A - Extra Move 4", 0x44b1160, 0x44b1180, indexKOFXISprites_Silber, 0x13 },
    { L"A - Extra Move 5", 0x44b1180, 0x44b11a0, indexKOFXISprites_Silber, 0x14 },
    { L"A - Extra Move 6", 0x44b11a0, 0x44b11c0, indexKOFXISprites_Silber, 0x15 },
    { L"A - Extra Move 7", 0x44b11c0, 0x44b11e0, indexKOFXISprites_Silber, 0x16 },
    { L"A - Extra Move 8", 0x44b11e0, 0x44b1200, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_B[] =
{
    { L"Silber B", 0x44b1200, 0x44b1220, indexKOFXISprites_Silber },
    { L"B - Super Stuff 1", 0x44b1220, 0x44b1240, indexKOFXISprites_Silber, 0x20 },
    { L"B - Electric Palette", 0x44b1240, 0x44b1260, indexKOFXISprites_Silber, 0x41 },
    { L"B - Darker Palette", 0x44b1260, 0x44b1280, indexKOFXISprites_Silber, 0x40 },
    { L"B - Super Stuff 2", 0x44b1280, 0x44b12a0, indexKOFXISprites_Silber, 0x21 },
    { L"B - Character Extra 1", 0x44b12a0, 0x44b12c0, indexKOFXISprites_Silber, 0x30 },
    { L"B - Character Extra 2", 0x44b12c0, 0x44b12e0, indexKOFXISprites_Silber, 0x31 },
    { L"B - Character Extra 3", 0x44b12e0, 0x44b1300, indexKOFXISprites_Silber, 0x32 },
    { L"B - Extra Move 1", 0x44b1300, 0x44b1320, indexKOFXISprites_Silber, 0x10 },
    { L"B - Extra Move 2", 0x44b1320, 0x44b1340, indexKOFXISprites_Silber, 0x11 },
    { L"B - Extra Move 3", 0x44b1340, 0x44b1360, indexKOFXISprites_Silber, 0x12 },
    { L"B - Extra Move 4", 0x44b1360, 0x44b1380, indexKOFXISprites_Silber, 0x13 },
    { L"B - Extra Move 5", 0x44b1380, 0x44b13a0, indexKOFXISprites_Silber, 0x14 },
    { L"B - Extra Move 6", 0x44b13a0, 0x44b13c0, indexKOFXISprites_Silber, 0x15 },
    { L"B - Extra Move 7", 0x44b13c0, 0x44b13e0, indexKOFXISprites_Silber, 0x16 },
    { L"B - Extra Move 8", 0x44b13e0, 0x44b1400, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_C[] =
{
    { L"Silber C", 0x44b1400, 0x44b1420, indexKOFXISprites_Silber },
    { L"C - Super Stuff 1", 0x44b1420, 0x44b1440, indexKOFXISprites_Silber, 0x20 },
    { L"C - Electric Palette", 0x44b1440, 0x44b1460, indexKOFXISprites_Silber, 0x41 },
    { L"C - Darker Palette", 0x44b1460, 0x44b1480, indexKOFXISprites_Silber, 0x40 },
    { L"C - Super Stuff 2", 0x44b1480, 0x44b14a0, indexKOFXISprites_Silber, 0x21 },
    { L"C - Character Extra 1", 0x44b14a0, 0x44b14c0, indexKOFXISprites_Silber, 0x30 },
    { L"C - Character Extra 2", 0x44b14c0, 0x44b14e0, indexKOFXISprites_Silber, 0x31 },
    { L"C - Character Extra 3", 0x44b14e0, 0x44b1500, indexKOFXISprites_Silber, 0x32 },
    { L"C - Extra Move 1", 0x44b1500, 0x44b1520, indexKOFXISprites_Silber, 0x10 },
    { L"C - Extra Move 2", 0x44b1520, 0x44b1540, indexKOFXISprites_Silber, 0x11 },
    { L"C - Extra Move 3", 0x44b1540, 0x44b1560, indexKOFXISprites_Silber, 0x12 },
    { L"C - Extra Move 4", 0x44b1560, 0x44b1580, indexKOFXISprites_Silber, 0x13 },
    { L"C - Extra Move 5", 0x44b1580, 0x44b15a0, indexKOFXISprites_Silber, 0x14 },
    { L"C - Extra Move 6", 0x44b15a0, 0x44b15c0, indexKOFXISprites_Silber, 0x15 },
    { L"C - Extra Move 7", 0x44b15c0, 0x44b15e0, indexKOFXISprites_Silber, 0x16 },
    { L"C - Extra Move 8", 0x44b15e0, 0x44b1600, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_D[] =
{
    { L"Silber D", 0x44b1600, 0x44b1620, indexKOFXISprites_Silber },
    { L"D - Super Stuff 1", 0x44b1620, 0x44b1640, indexKOFXISprites_Silber, 0x20 },
    { L"D - Electric Palette", 0x44b1640, 0x44b1660, indexKOFXISprites_Silber, 0x41 },
    { L"D - Darker Palette", 0x44b1660, 0x44b1680, indexKOFXISprites_Silber, 0x40 },
    { L"D - Super Stuff 2", 0x44b1680, 0x44b16a0, indexKOFXISprites_Silber, 0x21 },
    { L"D - Character Extra 1", 0x44b16a0, 0x44b16c0, indexKOFXISprites_Silber, 0x30 },
    { L"D - Character Extra 2", 0x44b16c0, 0x44b16e0, indexKOFXISprites_Silber, 0x31 },
    { L"D - Character Extra 3", 0x44b16e0, 0x44b1700, indexKOFXISprites_Silber, 0x32 },
    { L"D - Extra Move 1", 0x44b1700, 0x44b1720, indexKOFXISprites_Silber, 0x10 },
    { L"D - Extra Move 2", 0x44b1720, 0x44b1740, indexKOFXISprites_Silber, 0x11 },
    { L"D - Extra Move 3", 0x44b1740, 0x44b1760, indexKOFXISprites_Silber, 0x12 },
    { L"D - Extra Move 4", 0x44b1760, 0x44b1780, indexKOFXISprites_Silber, 0x13 },
    { L"D - Extra Move 5", 0x44b1780, 0x44b17a0, indexKOFXISprites_Silber, 0x14 },
    { L"D - Extra Move 6", 0x44b17a0, 0x44b17c0, indexKOFXISprites_Silber, 0x15 },
    { L"D - Extra Move 7", 0x44b17c0, 0x44b17e0, indexKOFXISprites_Silber, 0x16 },
    { L"D - Extra Move 8", 0x44b17e0, 0x44b1800, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_EA[] =
{
    { L"Silber EA", 0x44b1800, 0x44b1820, indexKOFXISprites_Silber },
    { L"E+A - Super Stuff 1", 0x44b1820, 0x44b1840, indexKOFXISprites_Silber, 0x20 },
    { L"E+A - Electric Palette", 0x44b1840, 0x44b1860, indexKOFXISprites_Silber, 0x41 },
    { L"E+A - Darker Palette", 0x44b1860, 0x44b1880, indexKOFXISprites_Silber, 0x40 },
    { L"E+A - Super Stuff 2", 0x44b1880, 0x44b18a0, indexKOFXISprites_Silber, 0x21 },
    { L"E+A - Character Extra 1", 0x44b18a0, 0x44b18c0, indexKOFXISprites_Silber, 0x30 },
    { L"E+A - Character Extra 2", 0x44b18c0, 0x44b18e0, indexKOFXISprites_Silber, 0x31 },
    { L"E+A - Character Extra 3", 0x44b18e0, 0x44b1900, indexKOFXISprites_Silber, 0x32 },
    { L"E+A - Extra Move 1", 0x44b1900, 0x44b1920, indexKOFXISprites_Silber, 0x10 },
    { L"E+A - Extra Move 2", 0x44b1920, 0x44b1940, indexKOFXISprites_Silber, 0x11 },
    { L"E+A - Extra Move 3", 0x44b1940, 0x44b1960, indexKOFXISprites_Silber, 0x12 },
    { L"E+A - Extra Move 4", 0x44b1960, 0x44b1980, indexKOFXISprites_Silber, 0x13 },
    { L"E+A - Extra Move 5", 0x44b1980, 0x44b19a0, indexKOFXISprites_Silber, 0x14 },
    { L"E+A - Extra Move 6", 0x44b19a0, 0x44b19c0, indexKOFXISprites_Silber, 0x15 },
    { L"E+A - Extra Move 7", 0x44b19c0, 0x44b19e0, indexKOFXISprites_Silber, 0x16 },
    { L"E+A - Extra Move 8", 0x44b19e0, 0x44b1a00, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_EB[] =
{
    { L"Silber EB", 0x44b1a00, 0x44b1a20, indexKOFXISprites_Silber },
    { L"E+B - Super Stuff 1", 0x44b1a20, 0x44b1a40, indexKOFXISprites_Silber, 0x20 },
    { L"E+B - Electric Palette", 0x44b1a40, 0x44b1a60, indexKOFXISprites_Silber, 0x41 },
    { L"E+B - Darker Palette", 0x44b1a60, 0x44b1a80, indexKOFXISprites_Silber, 0x40 },
    { L"E+B - Super Stuff 2", 0x44b1a80, 0x44b1aa0, indexKOFXISprites_Silber, 0x21 },
    { L"E+B - Character Extra 1", 0x44b1aa0, 0x44b1ac0, indexKOFXISprites_Silber, 0x30 },
    { L"E+B - Character Extra 2", 0x44b1ac0, 0x44b1ae0, indexKOFXISprites_Silber, 0x31 },
    { L"E+B - Character Extra 3", 0x44b1ae0, 0x44b1b00, indexKOFXISprites_Silber, 0x32 },
    { L"E+B - Extra Move 1", 0x44b1b00, 0x44b1b20, indexKOFXISprites_Silber, 0x10 },
    { L"E+B - Extra Move 2", 0x44b1b20, 0x44b1b40, indexKOFXISprites_Silber, 0x11 },
    { L"E+B - Extra Move 3", 0x44b1b40, 0x44b1b60, indexKOFXISprites_Silber, 0x12 },
    { L"E+B - Extra Move 4", 0x44b1b60, 0x44b1b80, indexKOFXISprites_Silber, 0x13 },
    { L"E+B - Extra Move 5", 0x44b1b80, 0x44b1ba0, indexKOFXISprites_Silber, 0x14 },
    { L"E+B - Extra Move 6", 0x44b1ba0, 0x44b1bc0, indexKOFXISprites_Silber, 0x15 },
    { L"E+B - Extra Move 7", 0x44b1bc0, 0x44b1be0, indexKOFXISprites_Silber, 0x16 },
    { L"E+B - Extra Move 8", 0x44b1be0, 0x44b1c00, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_EC[] =
{
    { L"Silber EC", 0x44b1c00, 0x44b1c20, indexKOFXISprites_Silber },
    { L"E+C - Super Stuff 1", 0x44b1c20, 0x44b1c40, indexKOFXISprites_Silber, 0x20 },
    { L"E+C - Electric Palette", 0x44b1c40, 0x44b1c60, indexKOFXISprites_Silber, 0x41 },
    { L"E+C - Darker Palette", 0x44b1c60, 0x44b1c80, indexKOFXISprites_Silber, 0x40 },
    { L"E+C - Super Stuff 2", 0x44b1c80, 0x44b1ca0, indexKOFXISprites_Silber, 0x21 },
    { L"E+C - Character Extra 1", 0x44b1ca0, 0x44b1cc0, indexKOFXISprites_Silber, 0x30 },
    { L"E+C - Character Extra 2", 0x44b1cc0, 0x44b1ce0, indexKOFXISprites_Silber, 0x31 },
    { L"E+C - Character Extra 3", 0x44b1ce0, 0x44b1d00, indexKOFXISprites_Silber, 0x32 },
    { L"E+C - Extra Move 1", 0x44b1d00, 0x44b1d20, indexKOFXISprites_Silber, 0x10 },
    { L"E+C - Extra Move 2", 0x44b1d20, 0x44b1d40, indexKOFXISprites_Silber, 0x11 },
    { L"E+C - Extra Move 3", 0x44b1d40, 0x44b1d60, indexKOFXISprites_Silber, 0x12 },
    { L"E+C - Extra Move 4", 0x44b1d60, 0x44b1d80, indexKOFXISprites_Silber, 0x13 },
    { L"E+C - Extra Move 5", 0x44b1d80, 0x44b1da0, indexKOFXISprites_Silber, 0x14 },
    { L"E+C - Extra Move 6", 0x44b1da0, 0x44b1dc0, indexKOFXISprites_Silber, 0x15 },
    { L"E+C - Extra Move 7", 0x44b1dc0, 0x44b1de0, indexKOFXISprites_Silber, 0x16 },
    { L"E+C - Extra Move 8", 0x44b1de0, 0x44b1e00, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_ED[] =
{
    { L"Silber ED", 0x44b1e00, 0x44b1e20, indexKOFXISprites_Silber },
    { L"E+D - Super Stuff 1", 0x44b1e20, 0x44b1e40, indexKOFXISprites_Silber, 0x20 },
    { L"E+D - Electric Palette", 0x44b1e40, 0x44b1e60, indexKOFXISprites_Silber, 0x41 },
    { L"E+D - Darker Palette", 0x44b1e60, 0x44b1e80, indexKOFXISprites_Silber, 0x40 },
    { L"E+D - Super Stuff 2", 0x44b1e80, 0x44b1ea0, indexKOFXISprites_Silber, 0x21 },
    { L"E+D - Character Extra 1", 0x44b1ea0, 0x44b1ec0, indexKOFXISprites_Silber, 0x30 },
    { L"E+D - Character Extra 2", 0x44b1ec0, 0x44b1ee0, indexKOFXISprites_Silber, 0x31 },
    { L"E+D - Character Extra 3", 0x44b1ee0, 0x44b1f00, indexKOFXISprites_Silber, 0x32 },
    { L"E+D - Extra Move 1", 0x44b1f00, 0x44b1f20, indexKOFXISprites_Silber, 0x10 },
    { L"E+D - Extra Move 2", 0x44b1f20, 0x44b1f40, indexKOFXISprites_Silber, 0x11 },
    { L"E+D - Extra Move 3", 0x44b1f40, 0x44b1f60, indexKOFXISprites_Silber, 0x12 },
    { L"E+D - Extra Move 4", 0x44b1f60, 0x44b1f80, indexKOFXISprites_Silber, 0x13 },
    { L"E+D - Extra Move 5", 0x44b1f80, 0x44b1fa0, indexKOFXISprites_Silber, 0x14 },
    { L"E+D - Extra Move 6", 0x44b1fa0, 0x44b1fc0, indexKOFXISprites_Silber, 0x15 },
    { L"E+D - Extra Move 7", 0x44b1fc0, 0x44b1fe0, indexKOFXISprites_Silber, 0x16 },
    { L"E+D - Extra Move 8", 0x44b1fe0, 0x44b2000, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_SA[] =
{
    { L"Silber SA", 0x44b2000, 0x44b2020, indexKOFXISprites_Silber },
    { L"Start+A - Super Stuff 1", 0x44b2020, 0x44b2040, indexKOFXISprites_Silber, 0x20 },
    { L"Start+A - Electric Palette", 0x44b2040, 0x44b2060, indexKOFXISprites_Silber, 0x41 },
    { L"Start+A - Darker Palette", 0x44b2060, 0x44b2080, indexKOFXISprites_Silber, 0x40 },
    { L"Start+A - Super Stuff 2", 0x44b2080, 0x44b20a0, indexKOFXISprites_Silber, 0x21 },
    { L"Start+A - Character Extra 1", 0x44b20a0, 0x44b20c0, indexKOFXISprites_Silber, 0x30 },
    { L"Start+A - Character Extra 2", 0x44b20c0, 0x44b20e0, indexKOFXISprites_Silber, 0x31 },
    { L"Start+A - Character Extra 3", 0x44b20e0, 0x44b2100, indexKOFXISprites_Silber, 0x32 },
    { L"Start+A - Extra Move 1", 0x44b2100, 0x44b2120, indexKOFXISprites_Silber, 0x10 },
    { L"Start+A - Extra Move 2", 0x44b2120, 0x44b2140, indexKOFXISprites_Silber, 0x11 },
    { L"Start+A - Extra Move 3", 0x44b2140, 0x44b2160, indexKOFXISprites_Silber, 0x12 },
    { L"Start+A - Extra Move 4", 0x44b2160, 0x44b2180, indexKOFXISprites_Silber, 0x13 },
    { L"Start+A - Extra Move 5", 0x44b2180, 0x44b21a0, indexKOFXISprites_Silber, 0x14 },
    { L"Start+A - Extra Move 6", 0x44b21a0, 0x44b21c0, indexKOFXISprites_Silber, 0x15 },
    { L"Start+A - Extra Move 7", 0x44b21c0, 0x44b21e0, indexKOFXISprites_Silber, 0x16 },
    { L"Start+A - Extra Move 8", 0x44b21e0, 0x44b2200, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_SB[] =
{
    { L"Silber SB", 0x44b2200, 0x44b2220, indexKOFXISprites_Silber },
    { L"Start+B - Super Stuff 1", 0x44b2220, 0x44b2240, indexKOFXISprites_Silber, 0x20 },
    { L"Start+B - Electric Palette", 0x44b2240, 0x44b2260, indexKOFXISprites_Silber, 0x41 },
    { L"Start+B - Darker Palette", 0x44b2260, 0x44b2280, indexKOFXISprites_Silber, 0x40 },
    { L"Start+B - Super Stuff 2", 0x44b2280, 0x44b22a0, indexKOFXISprites_Silber, 0x21 },
    { L"Start+B - Character Extra 1", 0x44b22a0, 0x44b22c0, indexKOFXISprites_Silber, 0x30 },
    { L"Start+B - Character Extra 2", 0x44b22c0, 0x44b22e0, indexKOFXISprites_Silber, 0x31 },
    { L"Start+B - Character Extra 3", 0x44b22e0, 0x44b2300, indexKOFXISprites_Silber, 0x32 },
    { L"Start+B - Extra Move 1", 0x44b2300, 0x44b2320, indexKOFXISprites_Silber, 0x10 },
    { L"Start+B - Extra Move 2", 0x44b2320, 0x44b2340, indexKOFXISprites_Silber, 0x11 },
    { L"Start+B - Extra Move 3", 0x44b2340, 0x44b2360, indexKOFXISprites_Silber, 0x12 },
    { L"Start+B - Extra Move 4", 0x44b2360, 0x44b2380, indexKOFXISprites_Silber, 0x13 },
    { L"Start+B - Extra Move 5", 0x44b2380, 0x44b23a0, indexKOFXISprites_Silber, 0x14 },
    { L"Start+B - Extra Move 6", 0x44b23a0, 0x44b23c0, indexKOFXISprites_Silber, 0x15 },
    { L"Start+B - Extra Move 7", 0x44b23c0, 0x44b23e0, indexKOFXISprites_Silber, 0x16 },
    { L"Start+B - Extra Move 8", 0x44b23e0, 0x44b2400, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_SC[] =
{
    { L"Silber SC", 0x44b2400, 0x44b2420, indexKOFXISprites_Silber },
    { L"Start+C - Super Stuff 1", 0x44b2420, 0x44b2440, indexKOFXISprites_Silber, 0x20 },
    { L"Start+C - Electric Palette", 0x44b2440, 0x44b2460, indexKOFXISprites_Silber, 0x41 },
    { L"Start+C - Darker Palette", 0x44b2460, 0x44b2480, indexKOFXISprites_Silber, 0x40 },
    { L"Start+C - Super Stuff 2", 0x44b2480, 0x44b24a0, indexKOFXISprites_Silber, 0x21 },
    { L"Start+C - Character Extra 1", 0x44b24a0, 0x44b24c0, indexKOFXISprites_Silber, 0x30 },
    { L"Start+C - Character Extra 2", 0x44b24c0, 0x44b24e0, indexKOFXISprites_Silber, 0x31 },
    { L"Start+C - Character Extra 3", 0x44b24e0, 0x44b2500, indexKOFXISprites_Silber, 0x32 },
    { L"Start+C - Extra Move 1", 0x44b2500, 0x44b2520, indexKOFXISprites_Silber, 0x10 },
    { L"Start+C - Extra Move 2", 0x44b2520, 0x44b2540, indexKOFXISprites_Silber, 0x11 },
    { L"Start+C - Extra Move 3", 0x44b2540, 0x44b2560, indexKOFXISprites_Silber, 0x12 },
    { L"Start+C - Extra Move 4", 0x44b2560, 0x44b2580, indexKOFXISprites_Silber, 0x13 },
    { L"Start+C - Extra Move 5", 0x44b2580, 0x44b25a0, indexKOFXISprites_Silber, 0x14 },
    { L"Start+C - Extra Move 6", 0x44b25a0, 0x44b25c0, indexKOFXISprites_Silber, 0x15 },
    { L"Start+C - Extra Move 7", 0x44b25c0, 0x44b25e0, indexKOFXISprites_Silber, 0x16 },
    { L"Start+C - Extra Move 8", 0x44b25e0, 0x44b2600, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SILBER_PALETTES_SD[] =
{
    { L"Silber SD", 0x44b2600, 0x44b2620, indexKOFXISprites_Silber },
    { L"Start+D - Super Stuff 1", 0x44b2620, 0x44b2640, indexKOFXISprites_Silber, 0x20 },
    { L"Start+D - Electric Palette", 0x44b2640, 0x44b2660, indexKOFXISprites_Silber, 0x41 },
    { L"Start+D - Darker Palette", 0x44b2660, 0x44b2680, indexKOFXISprites_Silber, 0x40 },
    { L"Start+D - Super Stuff 2", 0x44b2680, 0x44b26a0, indexKOFXISprites_Silber, 0x21 },
    { L"Start+D - Character Extra 1", 0x44b26a0, 0x44b26c0, indexKOFXISprites_Silber, 0x30 },
    { L"Start+D - Character Extra 2", 0x44b26c0, 0x44b26e0, indexKOFXISprites_Silber, 0x31 },
    { L"Start+D - Character Extra 3", 0x44b26e0, 0x44b2700, indexKOFXISprites_Silber, 0x32 },
    { L"Start+D - Extra Move 1", 0x44b2700, 0x44b2720, indexKOFXISprites_Silber, 0x10 },
    { L"Start+D - Extra Move 2", 0x44b2720, 0x44b2740, indexKOFXISprites_Silber, 0x11 },
    { L"Start+D - Extra Move 3", 0x44b2740, 0x44b2760, indexKOFXISprites_Silber, 0x12 },
    { L"Start+D - Extra Move 4", 0x44b2760, 0x44b2780, indexKOFXISprites_Silber, 0x13 },
    { L"Start+D - Extra Move 5", 0x44b2780, 0x44b27a0, indexKOFXISprites_Silber, 0x14 },
    { L"Start+D - Extra Move 6", 0x44b27a0, 0x44b27c0, indexKOFXISprites_Silber, 0x15 },
    { L"Start+D - Extra Move 7", 0x44b27c0, 0x44b27e0, indexKOFXISprites_Silber, 0x16 },
    { L"Start+D - Extra Move 8", 0x44b27e0, 0x44b2800, indexKOFXISprites_Silber, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_A[] =
{
    { L"Jyazu A", 0x45fa800, 0x45fa820, indexKOFXISprites_Jyazu },
    { L"A - Super Stuff 1", 0x45fa820, 0x45fa840, indexKOFXISprites_Jyazu, 0x20 },
    { L"A - Electric Palette", 0x45fa840, 0x45fa860, indexKOFXISprites_Jyazu, 0x41 },
    { L"A - Darker Palette", 0x45fa860, 0x45fa880, indexKOFXISprites_Jyazu, 0x40 },
    { L"A - Super Stuff 2", 0x45fa880, 0x45fa8a0, indexKOFXISprites_Jyazu, 0x21 },
    { L"A - Character Extra 1", 0x45fa8a0, 0x45fa8c0, indexKOFXISprites_Jyazu, 0x30 },
    { L"A - Character Extra 2", 0x45fa8c0, 0x45fa8e0, indexKOFXISprites_Jyazu, 0x31 },
    { L"A - Character Extra 3", 0x45fa8e0, 0x45fa900, indexKOFXISprites_Jyazu, 0x32 },
    { L"A - Extra Move 1", 0x45fa900, 0x45fa920, indexKOFXISprites_Jyazu, 0x10 },
    { L"A - Extra Move 2", 0x45fa920, 0x45fa940, indexKOFXISprites_Jyazu, 0x11 },
    { L"A - Extra Move 3", 0x45fa940, 0x45fa960, indexKOFXISprites_Jyazu, 0x12 },
    { L"A - Extra Move 4", 0x45fa960, 0x45fa980, indexKOFXISprites_Jyazu, 0x13 },
    { L"A - Extra Move 5", 0x45fa980, 0x45fa9a0, indexKOFXISprites_Jyazu, 0x14 },
    { L"A - Extra Move 6", 0x45fa9a0, 0x45fa9c0, indexKOFXISprites_Jyazu, 0x15 },
    { L"A - Extra Move 7", 0x45fa9c0, 0x45fa9e0, indexKOFXISprites_Jyazu, 0x16 },
    { L"A - Extra Move 8", 0x45fa9e0, 0x45faa00, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_B[] =
{
    { L"Jyazu B", 0x45faa00, 0x45faa20, indexKOFXISprites_Jyazu },
    { L"B - Super Stuff 1", 0x45faa20, 0x45faa40, indexKOFXISprites_Jyazu, 0x20 },
    { L"B - Electric Palette", 0x45faa40, 0x45faa60, indexKOFXISprites_Jyazu, 0x41 },
    { L"B - Darker Palette", 0x45faa60, 0x45faa80, indexKOFXISprites_Jyazu, 0x40 },
    { L"B - Super Stuff 2", 0x45faa80, 0x45faaa0, indexKOFXISprites_Jyazu, 0x21 },
    { L"B - Character Extra 1", 0x45faaa0, 0x45faac0, indexKOFXISprites_Jyazu, 0x30 },
    { L"B - Character Extra 2", 0x45faac0, 0x45faae0, indexKOFXISprites_Jyazu, 0x31 },
    { L"B - Character Extra 3", 0x45faae0, 0x45fab00, indexKOFXISprites_Jyazu, 0x32 },
    { L"B - Extra Move 1", 0x45fab00, 0x45fab20, indexKOFXISprites_Jyazu, 0x10 },
    { L"B - Extra Move 2", 0x45fab20, 0x45fab40, indexKOFXISprites_Jyazu, 0x11 },
    { L"B - Extra Move 3", 0x45fab40, 0x45fab60, indexKOFXISprites_Jyazu, 0x12 },
    { L"B - Extra Move 4", 0x45fab60, 0x45fab80, indexKOFXISprites_Jyazu, 0x13 },
    { L"B - Extra Move 5", 0x45fab80, 0x45faba0, indexKOFXISprites_Jyazu, 0x14 },
    { L"B - Extra Move 6", 0x45faba0, 0x45fabc0, indexKOFXISprites_Jyazu, 0x15 },
    { L"B - Extra Move 7", 0x45fabc0, 0x45fabe0, indexKOFXISprites_Jyazu, 0x16 },
    { L"B - Extra Move 8", 0x45fabe0, 0x45fac00, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_C[] =
{
    { L"Jyazu C", 0x45fac00, 0x45fac20, indexKOFXISprites_Jyazu },
    { L"C - Super Stuff 1", 0x45fac20, 0x45fac40, indexKOFXISprites_Jyazu, 0x20 },
    { L"C - Electric Palette", 0x45fac40, 0x45fac60, indexKOFXISprites_Jyazu, 0x41 },
    { L"C - Darker Palette", 0x45fac60, 0x45fac80, indexKOFXISprites_Jyazu, 0x40 },
    { L"C - Super Stuff 2", 0x45fac80, 0x45faca0, indexKOFXISprites_Jyazu, 0x21 },
    { L"C - Character Extra 1", 0x45faca0, 0x45facc0, indexKOFXISprites_Jyazu, 0x30 },
    { L"C - Character Extra 2", 0x45facc0, 0x45face0, indexKOFXISprites_Jyazu, 0x31 },
    { L"C - Character Extra 3", 0x45face0, 0x45fad00, indexKOFXISprites_Jyazu, 0x32 },
    { L"C - Extra Move 1", 0x45fad00, 0x45fad20, indexKOFXISprites_Jyazu, 0x10 },
    { L"C - Extra Move 2", 0x45fad20, 0x45fad40, indexKOFXISprites_Jyazu, 0x11 },
    { L"C - Extra Move 3", 0x45fad40, 0x45fad60, indexKOFXISprites_Jyazu, 0x12 },
    { L"C - Extra Move 4", 0x45fad60, 0x45fad80, indexKOFXISprites_Jyazu, 0x13 },
    { L"C - Extra Move 5", 0x45fad80, 0x45fada0, indexKOFXISprites_Jyazu, 0x14 },
    { L"C - Extra Move 6", 0x45fada0, 0x45fadc0, indexKOFXISprites_Jyazu, 0x15 },
    { L"C - Extra Move 7", 0x45fadc0, 0x45fade0, indexKOFXISprites_Jyazu, 0x16 },
    { L"C - Extra Move 8", 0x45fade0, 0x45fae00, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_D[] =
{
    { L"Jyazu D", 0x45fae00, 0x45fae20, indexKOFXISprites_Jyazu },
    { L"D - Super Stuff 1", 0x45fae20, 0x45fae40, indexKOFXISprites_Jyazu, 0x20 },
    { L"D - Electric Palette", 0x45fae40, 0x45fae60, indexKOFXISprites_Jyazu, 0x41 },
    { L"D - Darker Palette", 0x45fae60, 0x45fae80, indexKOFXISprites_Jyazu, 0x40 },
    { L"D - Super Stuff 2", 0x45fae80, 0x45faea0, indexKOFXISprites_Jyazu, 0x21 },
    { L"D - Character Extra 1", 0x45faea0, 0x45faec0, indexKOFXISprites_Jyazu, 0x30 },
    { L"D - Character Extra 2", 0x45faec0, 0x45faee0, indexKOFXISprites_Jyazu, 0x31 },
    { L"D - Character Extra 3", 0x45faee0, 0x45faf00, indexKOFXISprites_Jyazu, 0x32 },
    { L"D - Extra Move 1", 0x45faf00, 0x45faf20, indexKOFXISprites_Jyazu, 0x10 },
    { L"D - Extra Move 2", 0x45faf20, 0x45faf40, indexKOFXISprites_Jyazu, 0x11 },
    { L"D - Extra Move 3", 0x45faf40, 0x45faf60, indexKOFXISprites_Jyazu, 0x12 },
    { L"D - Extra Move 4", 0x45faf60, 0x45faf80, indexKOFXISprites_Jyazu, 0x13 },
    { L"D - Extra Move 5", 0x45faf80, 0x45fafa0, indexKOFXISprites_Jyazu, 0x14 },
    { L"D - Extra Move 6", 0x45fafa0, 0x45fafc0, indexKOFXISprites_Jyazu, 0x15 },
    { L"D - Extra Move 7", 0x45fafc0, 0x45fafe0, indexKOFXISprites_Jyazu, 0x16 },
    { L"D - Extra Move 8", 0x45fafe0, 0x45fb000, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_EA[] =
{
    { L"Jyazu EA", 0x45fb000, 0x45fb020, indexKOFXISprites_Jyazu },
    { L"E+A - Super Stuff 1", 0x45fb020, 0x45fb040, indexKOFXISprites_Jyazu, 0x20 },
    { L"E+A - Electric Palette", 0x45fb040, 0x45fb060, indexKOFXISprites_Jyazu, 0x41 },
    { L"E+A - Darker Palette", 0x45fb060, 0x45fb080, indexKOFXISprites_Jyazu, 0x40 },
    { L"E+A - Super Stuff 2", 0x45fb080, 0x45fb0a0, indexKOFXISprites_Jyazu, 0x21 },
    { L"E+A - Character Extra 1", 0x45fb0a0, 0x45fb0c0, indexKOFXISprites_Jyazu, 0x30 },
    { L"E+A - Character Extra 2", 0x45fb0c0, 0x45fb0e0, indexKOFXISprites_Jyazu, 0x31 },
    { L"E+A - Character Extra 3", 0x45fb0e0, 0x45fb100, indexKOFXISprites_Jyazu, 0x32 },
    { L"E+A - Extra Move 1", 0x45fb100, 0x45fb120, indexKOFXISprites_Jyazu, 0x10 },
    { L"E+A - Extra Move 2", 0x45fb120, 0x45fb140, indexKOFXISprites_Jyazu, 0x11 },
    { L"E+A - Extra Move 3", 0x45fb140, 0x45fb160, indexKOFXISprites_Jyazu, 0x12 },
    { L"E+A - Extra Move 4", 0x45fb160, 0x45fb180, indexKOFXISprites_Jyazu, 0x13 },
    { L"E+A - Extra Move 5", 0x45fb180, 0x45fb1a0, indexKOFXISprites_Jyazu, 0x14 },
    { L"E+A - Extra Move 6", 0x45fb1a0, 0x45fb1c0, indexKOFXISprites_Jyazu, 0x15 },
    { L"E+A - Extra Move 7", 0x45fb1c0, 0x45fb1e0, indexKOFXISprites_Jyazu, 0x16 },
    { L"E+A - Extra Move 8", 0x45fb1e0, 0x45fb200, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_EB[] =
{
    { L"Jyazu EB", 0x45fb200, 0x45fb220, indexKOFXISprites_Jyazu },
    { L"E+B - Super Stuff 1", 0x45fb220, 0x45fb240, indexKOFXISprites_Jyazu, 0x20 },
    { L"E+B - Electric Palette", 0x45fb240, 0x45fb260, indexKOFXISprites_Jyazu, 0x41 },
    { L"E+B - Darker Palette", 0x45fb260, 0x45fb280, indexKOFXISprites_Jyazu, 0x40 },
    { L"E+B - Super Stuff 2", 0x45fb280, 0x45fb2a0, indexKOFXISprites_Jyazu, 0x21 },
    { L"E+B - Character Extra 1", 0x45fb2a0, 0x45fb2c0, indexKOFXISprites_Jyazu, 0x30 },
    { L"E+B - Character Extra 2", 0x45fb2c0, 0x45fb2e0, indexKOFXISprites_Jyazu, 0x31 },
    { L"E+B - Character Extra 3", 0x45fb2e0, 0x45fb300, indexKOFXISprites_Jyazu, 0x32 },
    { L"E+B - Extra Move 1", 0x45fb300, 0x45fb320, indexKOFXISprites_Jyazu, 0x10 },
    { L"E+B - Extra Move 2", 0x45fb320, 0x45fb340, indexKOFXISprites_Jyazu, 0x11 },
    { L"E+B - Extra Move 3", 0x45fb340, 0x45fb360, indexKOFXISprites_Jyazu, 0x12 },
    { L"E+B - Extra Move 4", 0x45fb360, 0x45fb380, indexKOFXISprites_Jyazu, 0x13 },
    { L"E+B - Extra Move 5", 0x45fb380, 0x45fb3a0, indexKOFXISprites_Jyazu, 0x14 },
    { L"E+B - Extra Move 6", 0x45fb3a0, 0x45fb3c0, indexKOFXISprites_Jyazu, 0x15 },
    { L"E+B - Extra Move 7", 0x45fb3c0, 0x45fb3e0, indexKOFXISprites_Jyazu, 0x16 },
    { L"E+B - Extra Move 8", 0x45fb3e0, 0x45fb400, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_EC[] =
{
    { L"Jyazu EC", 0x45fb400, 0x45fb420, indexKOFXISprites_Jyazu },
    { L"E+C - Super Stuff 1", 0x45fb420, 0x45fb440, indexKOFXISprites_Jyazu, 0x20 },
    { L"E+C - Electric Palette", 0x45fb440, 0x45fb460, indexKOFXISprites_Jyazu, 0x41 },
    { L"E+C - Darker Palette", 0x45fb460, 0x45fb480, indexKOFXISprites_Jyazu, 0x40 },
    { L"E+C - Super Stuff 2", 0x45fb480, 0x45fb4a0, indexKOFXISprites_Jyazu, 0x21 },
    { L"E+C - Character Extra 1", 0x45fb4a0, 0x45fb4c0, indexKOFXISprites_Jyazu, 0x30 },
    { L"E+C - Character Extra 2", 0x45fb4c0, 0x45fb4e0, indexKOFXISprites_Jyazu, 0x31 },
    { L"E+C - Character Extra 3", 0x45fb4e0, 0x45fb500, indexKOFXISprites_Jyazu, 0x32 },
    { L"E+C - Extra Move 1", 0x45fb500, 0x45fb520, indexKOFXISprites_Jyazu, 0x10 },
    { L"E+C - Extra Move 2", 0x45fb520, 0x45fb540, indexKOFXISprites_Jyazu, 0x11 },
    { L"E+C - Extra Move 3", 0x45fb540, 0x45fb560, indexKOFXISprites_Jyazu, 0x12 },
    { L"E+C - Extra Move 4", 0x45fb560, 0x45fb580, indexKOFXISprites_Jyazu, 0x13 },
    { L"E+C - Extra Move 5", 0x45fb580, 0x45fb5a0, indexKOFXISprites_Jyazu, 0x14 },
    { L"E+C - Extra Move 6", 0x45fb5a0, 0x45fb5c0, indexKOFXISprites_Jyazu, 0x15 },
    { L"E+C - Extra Move 7", 0x45fb5c0, 0x45fb5e0, indexKOFXISprites_Jyazu, 0x16 },
    { L"E+C - Extra Move 8", 0x45fb5e0, 0x45fb600, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_ED[] =
{
    { L"Jyazu ED", 0x45fb600, 0x45fb620, indexKOFXISprites_Jyazu },
    { L"E+D - Super Stuff 1", 0x45fb620, 0x45fb640, indexKOFXISprites_Jyazu, 0x20 },
    { L"E+D - Electric Palette", 0x45fb640, 0x45fb660, indexKOFXISprites_Jyazu, 0x41 },
    { L"E+D - Darker Palette", 0x45fb660, 0x45fb680, indexKOFXISprites_Jyazu, 0x40 },
    { L"E+D - Super Stuff 2", 0x45fb680, 0x45fb6a0, indexKOFXISprites_Jyazu, 0x21 },
    { L"E+D - Character Extra 1", 0x45fb6a0, 0x45fb6c0, indexKOFXISprites_Jyazu, 0x30 },
    { L"E+D - Character Extra 2", 0x45fb6c0, 0x45fb6e0, indexKOFXISprites_Jyazu, 0x31 },
    { L"E+D - Character Extra 3", 0x45fb6e0, 0x45fb700, indexKOFXISprites_Jyazu, 0x32 },
    { L"E+D - Extra Move 1", 0x45fb700, 0x45fb720, indexKOFXISprites_Jyazu, 0x10 },
    { L"E+D - Extra Move 2", 0x45fb720, 0x45fb740, indexKOFXISprites_Jyazu, 0x11 },
    { L"E+D - Extra Move 3", 0x45fb740, 0x45fb760, indexKOFXISprites_Jyazu, 0x12 },
    { L"E+D - Extra Move 4", 0x45fb760, 0x45fb780, indexKOFXISprites_Jyazu, 0x13 },
    { L"E+D - Extra Move 5", 0x45fb780, 0x45fb7a0, indexKOFXISprites_Jyazu, 0x14 },
    { L"E+D - Extra Move 6", 0x45fb7a0, 0x45fb7c0, indexKOFXISprites_Jyazu, 0x15 },
    { L"E+D - Extra Move 7", 0x45fb7c0, 0x45fb7e0, indexKOFXISprites_Jyazu, 0x16 },
    { L"E+D - Extra Move 8", 0x45fb7e0, 0x45fb800, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_SA[] =
{
    { L"Jyazu SA", 0x45fb800, 0x45fb820, indexKOFXISprites_Jyazu },
    { L"Start+A - Super Stuff 1", 0x45fb820, 0x45fb840, indexKOFXISprites_Jyazu, 0x20 },
    { L"Start+A - Electric Palette", 0x45fb840, 0x45fb860, indexKOFXISprites_Jyazu, 0x41 },
    { L"Start+A - Darker Palette", 0x45fb860, 0x45fb880, indexKOFXISprites_Jyazu, 0x40 },
    { L"Start+A - Super Stuff 2", 0x45fb880, 0x45fb8a0, indexKOFXISprites_Jyazu, 0x21 },
    { L"Start+A - Character Extra 1", 0x45fb8a0, 0x45fb8c0, indexKOFXISprites_Jyazu, 0x30 },
    { L"Start+A - Character Extra 2", 0x45fb8c0, 0x45fb8e0, indexKOFXISprites_Jyazu, 0x31 },
    { L"Start+A - Character Extra 3", 0x45fb8e0, 0x45fb900, indexKOFXISprites_Jyazu, 0x32 },
    { L"Start+A - Extra Move 1", 0x45fb900, 0x45fb920, indexKOFXISprites_Jyazu, 0x10 },
    { L"Start+A - Extra Move 2", 0x45fb920, 0x45fb940, indexKOFXISprites_Jyazu, 0x11 },
    { L"Start+A - Extra Move 3", 0x45fb940, 0x45fb960, indexKOFXISprites_Jyazu, 0x12 },
    { L"Start+A - Extra Move 4", 0x45fb960, 0x45fb980, indexKOFXISprites_Jyazu, 0x13 },
    { L"Start+A - Extra Move 5", 0x45fb980, 0x45fb9a0, indexKOFXISprites_Jyazu, 0x14 },
    { L"Start+A - Extra Move 6", 0x45fb9a0, 0x45fb9c0, indexKOFXISprites_Jyazu, 0x15 },
    { L"Start+A - Extra Move 7", 0x45fb9c0, 0x45fb9e0, indexKOFXISprites_Jyazu, 0x16 },
    { L"Start+A - Extra Move 8", 0x45fb9e0, 0x45fba00, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_SB[] =
{
    { L"Jyazu SB", 0x45fba00, 0x45fba20, indexKOFXISprites_Jyazu },
    { L"Start+B - Super Stuff 1", 0x45fba20, 0x45fba40, indexKOFXISprites_Jyazu, 0x20 },
    { L"Start+B - Electric Palette", 0x45fba40, 0x45fba60, indexKOFXISprites_Jyazu, 0x41 },
    { L"Start+B - Darker Palette", 0x45fba60, 0x45fba80, indexKOFXISprites_Jyazu, 0x40 },
    { L"Start+B - Super Stuff 2", 0x45fba80, 0x45fbaa0, indexKOFXISprites_Jyazu, 0x21 },
    { L"Start+B - Character Extra 1", 0x45fbaa0, 0x45fbac0, indexKOFXISprites_Jyazu, 0x30 },
    { L"Start+B - Character Extra 2", 0x45fbac0, 0x45fbae0, indexKOFXISprites_Jyazu, 0x31 },
    { L"Start+B - Character Extra 3", 0x45fbae0, 0x45fbb00, indexKOFXISprites_Jyazu, 0x32 },
    { L"Start+B - Extra Move 1", 0x45fbb00, 0x45fbb20, indexKOFXISprites_Jyazu, 0x10 },
    { L"Start+B - Extra Move 2", 0x45fbb20, 0x45fbb40, indexKOFXISprites_Jyazu, 0x11 },
    { L"Start+B - Extra Move 3", 0x45fbb40, 0x45fbb60, indexKOFXISprites_Jyazu, 0x12 },
    { L"Start+B - Extra Move 4", 0x45fbb60, 0x45fbb80, indexKOFXISprites_Jyazu, 0x13 },
    { L"Start+B - Extra Move 5", 0x45fbb80, 0x45fbba0, indexKOFXISprites_Jyazu, 0x14 },
    { L"Start+B - Extra Move 6", 0x45fbba0, 0x45fbbc0, indexKOFXISprites_Jyazu, 0x15 },
    { L"Start+B - Extra Move 7", 0x45fbbc0, 0x45fbbe0, indexKOFXISprites_Jyazu, 0x16 },
    { L"Start+B - Extra Move 8", 0x45fbbe0, 0x45fbc00, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_SC[] =
{
    { L"Jyazu SC", 0x45fbc00, 0x45fbc20, indexKOFXISprites_Jyazu },
    { L"Start+C - Super Stuff 1", 0x45fbc20, 0x45fbc40, indexKOFXISprites_Jyazu, 0x20 },
    { L"Start+C - Electric Palette", 0x45fbc40, 0x45fbc60, indexKOFXISprites_Jyazu, 0x41 },
    { L"Start+C - Darker Palette", 0x45fbc60, 0x45fbc80, indexKOFXISprites_Jyazu, 0x40 },
    { L"Start+C - Super Stuff 2", 0x45fbc80, 0x45fbca0, indexKOFXISprites_Jyazu, 0x21 },
    { L"Start+C - Character Extra 1", 0x45fbca0, 0x45fbcc0, indexKOFXISprites_Jyazu, 0x30 },
    { L"Start+C - Character Extra 2", 0x45fbcc0, 0x45fbce0, indexKOFXISprites_Jyazu, 0x31 },
    { L"Start+C - Character Extra 3", 0x45fbce0, 0x45fbd00, indexKOFXISprites_Jyazu, 0x32 },
    { L"Start+C - Extra Move 1", 0x45fbd00, 0x45fbd20, indexKOFXISprites_Jyazu, 0x10 },
    { L"Start+C - Extra Move 2", 0x45fbd20, 0x45fbd40, indexKOFXISprites_Jyazu, 0x11 },
    { L"Start+C - Extra Move 3", 0x45fbd40, 0x45fbd60, indexKOFXISprites_Jyazu, 0x12 },
    { L"Start+C - Extra Move 4", 0x45fbd60, 0x45fbd80, indexKOFXISprites_Jyazu, 0x13 },
    { L"Start+C - Extra Move 5", 0x45fbd80, 0x45fbda0, indexKOFXISprites_Jyazu, 0x14 },
    { L"Start+C - Extra Move 6", 0x45fbda0, 0x45fbdc0, indexKOFXISprites_Jyazu, 0x15 },
    { L"Start+C - Extra Move 7", 0x45fbdc0, 0x45fbde0, indexKOFXISprites_Jyazu, 0x16 },
    { L"Start+C - Extra Move 8", 0x45fbde0, 0x45fbe00, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_JYAZU_PALETTES_SD[] =
{
    { L"Jyazu SD", 0x45fbe00, 0x45fbe20, indexKOFXISprites_Jyazu },
    { L"Start+D - Super Stuff 1", 0x45fbe20, 0x45fbe40, indexKOFXISprites_Jyazu, 0x20 },
    { L"Start+D - Electric Palette", 0x45fbe40, 0x45fbe60, indexKOFXISprites_Jyazu, 0x41 },
    { L"Start+D - Darker Palette", 0x45fbe60, 0x45fbe80, indexKOFXISprites_Jyazu, 0x40 },
    { L"Start+D - Super Stuff 2", 0x45fbe80, 0x45fbea0, indexKOFXISprites_Jyazu, 0x21 },
    { L"Start+D - Character Extra 1", 0x45fbea0, 0x45fbec0, indexKOFXISprites_Jyazu, 0x30 },
    { L"Start+D - Character Extra 2", 0x45fbec0, 0x45fbee0, indexKOFXISprites_Jyazu, 0x31 },
    { L"Start+D - Character Extra 3", 0x45fbee0, 0x45fbf00, indexKOFXISprites_Jyazu, 0x32 },
    { L"Start+D - Extra Move 1", 0x45fbf00, 0x45fbf20, indexKOFXISprites_Jyazu, 0x10 },
    { L"Start+D - Extra Move 2", 0x45fbf20, 0x45fbf40, indexKOFXISprites_Jyazu, 0x11 },
    { L"Start+D - Extra Move 3", 0x45fbf40, 0x45fbf60, indexKOFXISprites_Jyazu, 0x12 },
    { L"Start+D - Extra Move 4", 0x45fbf60, 0x45fbf80, indexKOFXISprites_Jyazu, 0x13 },
    { L"Start+D - Extra Move 5", 0x45fbf80, 0x45fbfa0, indexKOFXISprites_Jyazu, 0x14 },
    { L"Start+D - Extra Move 6", 0x45fbfa0, 0x45fbfc0, indexKOFXISprites_Jyazu, 0x15 },
    { L"Start+D - Extra Move 7", 0x45fbfc0, 0x45fbfe0, indexKOFXISprites_Jyazu, 0x16 },
    { L"Start+D - Extra Move 8", 0x45fbfe0, 0x45fc000, indexKOFXISprites_Jyazu, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_A[] =
{
    { L"Shion A", 0x47cb800, 0x47cb820, indexKOFXISprites_Shion },
    { L"A - Super Stuff 1", 0x47cb820, 0x47cb840, indexKOFXISprites_Shion, 0x20 },
    { L"A - Electric Palette", 0x47cb840, 0x47cb860, indexKOFXISprites_Shion, 0x41 },
    { L"A - Darker Palette", 0x47cb860, 0x47cb880, indexKOFXISprites_Shion, 0x40 },
    { L"A - Super Stuff 2", 0x47cb880, 0x47cb8a0, indexKOFXISprites_Shion, 0x21 },
    { L"A - Character Extra 1", 0x47cb8a0, 0x47cb8c0, indexKOFXISprites_Shion, 0x30 },
    { L"A - Character Extra 2", 0x47cb8c0, 0x47cb8e0, indexKOFXISprites_Shion, 0x31 },
    { L"A - Character Extra 3", 0x47cb8e0, 0x47cb900, indexKOFXISprites_Shion, 0x32 },
    { L"A - Extra Move 1", 0x47cb900, 0x47cb920, indexKOFXISprites_Shion, 0x10 },
    { L"A - Extra Move 2", 0x47cb920, 0x47cb940, indexKOFXISprites_Shion, 0x11 },
    { L"A - Extra Move 3", 0x47cb940, 0x47cb960, indexKOFXISprites_Shion, 0x12 },
    { L"A - Extra Move 4", 0x47cb960, 0x47cb980, indexKOFXISprites_Shion, 0x13 },
    { L"A - Extra Move 5", 0x47cb980, 0x47cb9a0, indexKOFXISprites_Shion, 0x14 },
    { L"A - Extra Move 6", 0x47cb9a0, 0x47cb9c0, indexKOFXISprites_Shion, 0x15 },
    { L"A - Extra Move 7", 0x47cb9c0, 0x47cb9e0, indexKOFXISprites_Shion, 0x16 },
    { L"A - Extra Move 8", 0x47cb9e0, 0x47cba00, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_B[] =
{
    { L"Shion B", 0x47cba00, 0x47cba20, indexKOFXISprites_Shion },
    { L"B - Super Stuff 1", 0x47cba20, 0x47cba40, indexKOFXISprites_Shion, 0x20 },
    { L"B - Electric Palette", 0x47cba40, 0x47cba60, indexKOFXISprites_Shion, 0x41 },
    { L"B - Darker Palette", 0x47cba60, 0x47cba80, indexKOFXISprites_Shion, 0x40 },
    { L"B - Super Stuff 2", 0x47cba80, 0x47cbaa0, indexKOFXISprites_Shion, 0x21 },
    { L"B - Character Extra 1", 0x47cbaa0, 0x47cbac0, indexKOFXISprites_Shion, 0x30 },
    { L"B - Character Extra 2", 0x47cbac0, 0x47cbae0, indexKOFXISprites_Shion, 0x31 },
    { L"B - Character Extra 3", 0x47cbae0, 0x47cbb00, indexKOFXISprites_Shion, 0x32 },
    { L"B - Extra Move 1", 0x47cbb00, 0x47cbb20, indexKOFXISprites_Shion, 0x10 },
    { L"B - Extra Move 2", 0x47cbb20, 0x47cbb40, indexKOFXISprites_Shion, 0x11 },
    { L"B - Extra Move 3", 0x47cbb40, 0x47cbb60, indexKOFXISprites_Shion, 0x12 },
    { L"B - Extra Move 4", 0x47cbb60, 0x47cbb80, indexKOFXISprites_Shion, 0x13 },
    { L"B - Extra Move 5", 0x47cbb80, 0x47cbba0, indexKOFXISprites_Shion, 0x14 },
    { L"B - Extra Move 6", 0x47cbba0, 0x47cbbc0, indexKOFXISprites_Shion, 0x15 },
    { L"B - Extra Move 7", 0x47cbbc0, 0x47cbbe0, indexKOFXISprites_Shion, 0x16 },
    { L"B - Extra Move 8", 0x47cbbe0, 0x47cbc00, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_C[] =
{
    { L"Shion C", 0x47cbc00, 0x47cbc20, indexKOFXISprites_Shion },
    { L"C - Super Stuff 1", 0x47cbc20, 0x47cbc40, indexKOFXISprites_Shion, 0x20 },
    { L"C - Electric Palette", 0x47cbc40, 0x47cbc60, indexKOFXISprites_Shion, 0x41 },
    { L"C - Darker Palette", 0x47cbc60, 0x47cbc80, indexKOFXISprites_Shion, 0x40 },
    { L"C - Super Stuff 2", 0x47cbc80, 0x47cbca0, indexKOFXISprites_Shion, 0x21 },
    { L"C - Character Extra 1", 0x47cbca0, 0x47cbcc0, indexKOFXISprites_Shion, 0x30 },
    { L"C - Character Extra 2", 0x47cbcc0, 0x47cbce0, indexKOFXISprites_Shion, 0x31 },
    { L"C - Character Extra 3", 0x47cbce0, 0x47cbd00, indexKOFXISprites_Shion, 0x32 },
    { L"C - Extra Move 1", 0x47cbd00, 0x47cbd20, indexKOFXISprites_Shion, 0x10 },
    { L"C - Extra Move 2", 0x47cbd20, 0x47cbd40, indexKOFXISprites_Shion, 0x11 },
    { L"C - Extra Move 3", 0x47cbd40, 0x47cbd60, indexKOFXISprites_Shion, 0x12 },
    { L"C - Extra Move 4", 0x47cbd60, 0x47cbd80, indexKOFXISprites_Shion, 0x13 },
    { L"C - Extra Move 5", 0x47cbd80, 0x47cbda0, indexKOFXISprites_Shion, 0x14 },
    { L"C - Extra Move 6", 0x47cbda0, 0x47cbdc0, indexKOFXISprites_Shion, 0x15 },
    { L"C - Extra Move 7", 0x47cbdc0, 0x47cbde0, indexKOFXISprites_Shion, 0x16 },
    { L"C - Extra Move 8", 0x47cbde0, 0x47cbe00, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_D[] =
{
    { L"Shion D", 0x47cbe00, 0x47cbe20, indexKOFXISprites_Shion },
    { L"D - Super Stuff 1", 0x47cbe20, 0x47cbe40, indexKOFXISprites_Shion, 0x20 },
    { L"D - Electric Palette", 0x47cbe40, 0x47cbe60, indexKOFXISprites_Shion, 0x41 },
    { L"D - Darker Palette", 0x47cbe60, 0x47cbe80, indexKOFXISprites_Shion, 0x40 },
    { L"D - Super Stuff 2", 0x47cbe80, 0x47cbea0, indexKOFXISprites_Shion, 0x21 },
    { L"D - Character Extra 1", 0x47cbea0, 0x47cbec0, indexKOFXISprites_Shion, 0x30 },
    { L"D - Character Extra 2", 0x47cbec0, 0x47cbee0, indexKOFXISprites_Shion, 0x31 },
    { L"D - Character Extra 3", 0x47cbee0, 0x47cbf00, indexKOFXISprites_Shion, 0x32 },
    { L"D - Extra Move 1", 0x47cbf00, 0x47cbf20, indexKOFXISprites_Shion, 0x10 },
    { L"D - Extra Move 2", 0x47cbf20, 0x47cbf40, indexKOFXISprites_Shion, 0x11 },
    { L"D - Extra Move 3", 0x47cbf40, 0x47cbf60, indexKOFXISprites_Shion, 0x12 },
    { L"D - Extra Move 4", 0x47cbf60, 0x47cbf80, indexKOFXISprites_Shion, 0x13 },
    { L"D - Extra Move 5", 0x47cbf80, 0x47cbfa0, indexKOFXISprites_Shion, 0x14 },
    { L"D - Extra Move 6", 0x47cbfa0, 0x47cbfc0, indexKOFXISprites_Shion, 0x15 },
    { L"D - Extra Move 7", 0x47cbfc0, 0x47cbfe0, indexKOFXISprites_Shion, 0x16 },
    { L"D - Extra Move 8", 0x47cbfe0, 0x47cc000, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_EA[] =
{
    { L"Shion EA", 0x47cc000, 0x47cc020, indexKOFXISprites_Shion },
    { L"E+A - Super Stuff 1", 0x47cc020, 0x47cc040, indexKOFXISprites_Shion, 0x20 },
    { L"E+A - Electric Palette", 0x47cc040, 0x47cc060, indexKOFXISprites_Shion, 0x41 },
    { L"E+A - Darker Palette", 0x47cc060, 0x47cc080, indexKOFXISprites_Shion, 0x40 },
    { L"E+A - Super Stuff 2", 0x47cc080, 0x47cc0a0, indexKOFXISprites_Shion, 0x21 },
    { L"E+A - Character Extra 1", 0x47cc0a0, 0x47cc0c0, indexKOFXISprites_Shion, 0x30 },
    { L"E+A - Character Extra 2", 0x47cc0c0, 0x47cc0e0, indexKOFXISprites_Shion, 0x31 },
    { L"E+A - Character Extra 3", 0x47cc0e0, 0x47cc100, indexKOFXISprites_Shion, 0x32 },
    { L"E+A - Extra Move 1", 0x47cc100, 0x47cc120, indexKOFXISprites_Shion, 0x10 },
    { L"E+A - Extra Move 2", 0x47cc120, 0x47cc140, indexKOFXISprites_Shion, 0x11 },
    { L"E+A - Extra Move 3", 0x47cc140, 0x47cc160, indexKOFXISprites_Shion, 0x12 },
    { L"E+A - Extra Move 4", 0x47cc160, 0x47cc180, indexKOFXISprites_Shion, 0x13 },
    { L"E+A - Extra Move 5", 0x47cc180, 0x47cc1a0, indexKOFXISprites_Shion, 0x14 },
    { L"E+A - Extra Move 6", 0x47cc1a0, 0x47cc1c0, indexKOFXISprites_Shion, 0x15 },
    { L"E+A - Extra Move 7", 0x47cc1c0, 0x47cc1e0, indexKOFXISprites_Shion, 0x16 },
    { L"E+A - Extra Move 8", 0x47cc1e0, 0x47cc200, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_EB[] =
{
    { L"Shion EB", 0x47cc200, 0x47cc220, indexKOFXISprites_Shion },
    { L"E+B - Super Stuff 1", 0x47cc220, 0x47cc240, indexKOFXISprites_Shion, 0x20 },
    { L"E+B - Electric Palette", 0x47cc240, 0x47cc260, indexKOFXISprites_Shion, 0x41 },
    { L"E+B - Darker Palette", 0x47cc260, 0x47cc280, indexKOFXISprites_Shion, 0x40 },
    { L"E+B - Super Stuff 2", 0x47cc280, 0x47cc2a0, indexKOFXISprites_Shion, 0x21 },
    { L"E+B - Character Extra 1", 0x47cc2a0, 0x47cc2c0, indexKOFXISprites_Shion, 0x30 },
    { L"E+B - Character Extra 2", 0x47cc2c0, 0x47cc2e0, indexKOFXISprites_Shion, 0x31 },
    { L"E+B - Character Extra 3", 0x47cc2e0, 0x47cc300, indexKOFXISprites_Shion, 0x32 },
    { L"E+B - Extra Move 1", 0x47cc300, 0x47cc320, indexKOFXISprites_Shion, 0x10 },
    { L"E+B - Extra Move 2", 0x47cc320, 0x47cc340, indexKOFXISprites_Shion, 0x11 },
    { L"E+B - Extra Move 3", 0x47cc340, 0x47cc360, indexKOFXISprites_Shion, 0x12 },
    { L"E+B - Extra Move 4", 0x47cc360, 0x47cc380, indexKOFXISprites_Shion, 0x13 },
    { L"E+B - Extra Move 5", 0x47cc380, 0x47cc3a0, indexKOFXISprites_Shion, 0x14 },
    { L"E+B - Extra Move 6", 0x47cc3a0, 0x47cc3c0, indexKOFXISprites_Shion, 0x15 },
    { L"E+B - Extra Move 7", 0x47cc3c0, 0x47cc3e0, indexKOFXISprites_Shion, 0x16 },
    { L"E+B - Extra Move 8", 0x47cc3e0, 0x47cc400, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_EC[] =
{
    { L"Shion EC", 0x47cc400, 0x47cc420, indexKOFXISprites_Shion },
    { L"E+C - Super Stuff 1", 0x47cc420, 0x47cc440, indexKOFXISprites_Shion, 0x20 },
    { L"E+C - Electric Palette", 0x47cc440, 0x47cc460, indexKOFXISprites_Shion, 0x41 },
    { L"E+C - Darker Palette", 0x47cc460, 0x47cc480, indexKOFXISprites_Shion, 0x40 },
    { L"E+C - Super Stuff 2", 0x47cc480, 0x47cc4a0, indexKOFXISprites_Shion, 0x21 },
    { L"E+C - Character Extra 1", 0x47cc4a0, 0x47cc4c0, indexKOFXISprites_Shion, 0x30 },
    { L"E+C - Character Extra 2", 0x47cc4c0, 0x47cc4e0, indexKOFXISprites_Shion, 0x31 },
    { L"E+C - Character Extra 3", 0x47cc4e0, 0x47cc500, indexKOFXISprites_Shion, 0x32 },
    { L"E+C - Extra Move 1", 0x47cc500, 0x47cc520, indexKOFXISprites_Shion, 0x10 },
    { L"E+C - Extra Move 2", 0x47cc520, 0x47cc540, indexKOFXISprites_Shion, 0x11 },
    { L"E+C - Extra Move 3", 0x47cc540, 0x47cc560, indexKOFXISprites_Shion, 0x12 },
    { L"E+C - Extra Move 4", 0x47cc560, 0x47cc580, indexKOFXISprites_Shion, 0x13 },
    { L"E+C - Extra Move 5", 0x47cc580, 0x47cc5a0, indexKOFXISprites_Shion, 0x14 },
    { L"E+C - Extra Move 6", 0x47cc5a0, 0x47cc5c0, indexKOFXISprites_Shion, 0x15 },
    { L"E+C - Extra Move 7", 0x47cc5c0, 0x47cc5e0, indexKOFXISprites_Shion, 0x16 },
    { L"E+C - Extra Move 8", 0x47cc5e0, 0x47cc600, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_ED[] =
{
    { L"Shion ED", 0x47cc600, 0x47cc620, indexKOFXISprites_Shion },
    { L"E+D - Super Stuff 1", 0x47cc620, 0x47cc640, indexKOFXISprites_Shion, 0x20 },
    { L"E+D - Electric Palette", 0x47cc640, 0x47cc660, indexKOFXISprites_Shion, 0x41 },
    { L"E+D - Darker Palette", 0x47cc660, 0x47cc680, indexKOFXISprites_Shion, 0x40 },
    { L"E+D - Super Stuff 2", 0x47cc680, 0x47cc6a0, indexKOFXISprites_Shion, 0x21 },
    { L"E+D - Character Extra 1", 0x47cc6a0, 0x47cc6c0, indexKOFXISprites_Shion, 0x30 },
    { L"E+D - Character Extra 2", 0x47cc6c0, 0x47cc6e0, indexKOFXISprites_Shion, 0x31 },
    { L"E+D - Character Extra 3", 0x47cc6e0, 0x47cc700, indexKOFXISprites_Shion, 0x32 },
    { L"E+D - Extra Move 1", 0x47cc700, 0x47cc720, indexKOFXISprites_Shion, 0x10 },
    { L"E+D - Extra Move 2", 0x47cc720, 0x47cc740, indexKOFXISprites_Shion, 0x11 },
    { L"E+D - Extra Move 3", 0x47cc740, 0x47cc760, indexKOFXISprites_Shion, 0x12 },
    { L"E+D - Extra Move 4", 0x47cc760, 0x47cc780, indexKOFXISprites_Shion, 0x13 },
    { L"E+D - Extra Move 5", 0x47cc780, 0x47cc7a0, indexKOFXISprites_Shion, 0x14 },
    { L"E+D - Extra Move 6", 0x47cc7a0, 0x47cc7c0, indexKOFXISprites_Shion, 0x15 },
    { L"E+D - Extra Move 7", 0x47cc7c0, 0x47cc7e0, indexKOFXISprites_Shion, 0x16 },
    { L"E+D - Extra Move 8", 0x47cc7e0, 0x47cc800, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_SA[] =
{
    { L"Shion SA", 0x47cc800, 0x47cc820, indexKOFXISprites_Shion },
    { L"Start+A - Super Stuff 1", 0x47cc820, 0x47cc840, indexKOFXISprites_Shion, 0x20 },
    { L"Start+A - Electric Palette", 0x47cc840, 0x47cc860, indexKOFXISprites_Shion, 0x41 },
    { L"Start+A - Darker Palette", 0x47cc860, 0x47cc880, indexKOFXISprites_Shion, 0x40 },
    { L"Start+A - Super Stuff 2", 0x47cc880, 0x47cc8a0, indexKOFXISprites_Shion, 0x21 },
    { L"Start+A - Character Extra 1", 0x47cc8a0, 0x47cc8c0, indexKOFXISprites_Shion, 0x30 },
    { L"Start+A - Character Extra 2", 0x47cc8c0, 0x47cc8e0, indexKOFXISprites_Shion, 0x31 },
    { L"Start+A - Character Extra 3", 0x47cc8e0, 0x47cc900, indexKOFXISprites_Shion, 0x32 },
    { L"Start+A - Extra Move 1", 0x47cc900, 0x47cc920, indexKOFXISprites_Shion, 0x10 },
    { L"Start+A - Extra Move 2", 0x47cc920, 0x47cc940, indexKOFXISprites_Shion, 0x11 },
    { L"Start+A - Extra Move 3", 0x47cc940, 0x47cc960, indexKOFXISprites_Shion, 0x12 },
    { L"Start+A - Extra Move 4", 0x47cc960, 0x47cc980, indexKOFXISprites_Shion, 0x13 },
    { L"Start+A - Extra Move 5", 0x47cc980, 0x47cc9a0, indexKOFXISprites_Shion, 0x14 },
    { L"Start+A - Extra Move 6", 0x47cc9a0, 0x47cc9c0, indexKOFXISprites_Shion, 0x15 },
    { L"Start+A - Extra Move 7", 0x47cc9c0, 0x47cc9e0, indexKOFXISprites_Shion, 0x16 },
    { L"Start+A - Extra Move 8", 0x47cc9e0, 0x47cca00, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_SB[] =
{
    { L"Shion SB", 0x47cca00, 0x47cca20, indexKOFXISprites_Shion },
    { L"Start+B - Super Stuff 1", 0x47cca20, 0x47cca40, indexKOFXISprites_Shion, 0x20 },
    { L"Start+B - Electric Palette", 0x47cca40, 0x47cca60, indexKOFXISprites_Shion, 0x41 },
    { L"Start+B - Darker Palette", 0x47cca60, 0x47cca80, indexKOFXISprites_Shion, 0x40 },
    { L"Start+B - Super Stuff 2", 0x47cca80, 0x47ccaa0, indexKOFXISprites_Shion, 0x21 },
    { L"Start+B - Character Extra 1", 0x47ccaa0, 0x47ccac0, indexKOFXISprites_Shion, 0x30 },
    { L"Start+B - Character Extra 2", 0x47ccac0, 0x47ccae0, indexKOFXISprites_Shion, 0x31 },
    { L"Start+B - Character Extra 3", 0x47ccae0, 0x47ccb00, indexKOFXISprites_Shion, 0x32 },
    { L"Start+B - Extra Move 1", 0x47ccb00, 0x47ccb20, indexKOFXISprites_Shion, 0x10 },
    { L"Start+B - Extra Move 2", 0x47ccb20, 0x47ccb40, indexKOFXISprites_Shion, 0x11 },
    { L"Start+B - Extra Move 3", 0x47ccb40, 0x47ccb60, indexKOFXISprites_Shion, 0x12 },
    { L"Start+B - Extra Move 4", 0x47ccb60, 0x47ccb80, indexKOFXISprites_Shion, 0x13 },
    { L"Start+B - Extra Move 5", 0x47ccb80, 0x47ccba0, indexKOFXISprites_Shion, 0x14 },
    { L"Start+B - Extra Move 6", 0x47ccba0, 0x47ccbc0, indexKOFXISprites_Shion, 0x15 },
    { L"Start+B - Extra Move 7", 0x47ccbc0, 0x47ccbe0, indexKOFXISprites_Shion, 0x16 },
    { L"Start+B - Extra Move 8", 0x47ccbe0, 0x47ccc00, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_SC[] =
{
    { L"Shion SC", 0x47ccc00, 0x47ccc20, indexKOFXISprites_Shion },
    { L"Start+C - Super Stuff 1", 0x47ccc20, 0x47ccc40, indexKOFXISprites_Shion, 0x20 },
    { L"Start+C - Electric Palette", 0x47ccc40, 0x47ccc60, indexKOFXISprites_Shion, 0x41 },
    { L"Start+C - Darker Palette", 0x47ccc60, 0x47ccc80, indexKOFXISprites_Shion, 0x40 },
    { L"Start+C - Super Stuff 2", 0x47ccc80, 0x47ccca0, indexKOFXISprites_Shion, 0x21 },
    { L"Start+C - Character Extra 1", 0x47ccca0, 0x47cccc0, indexKOFXISprites_Shion, 0x30 },
    { L"Start+C - Character Extra 2", 0x47cccc0, 0x47ccce0, indexKOFXISprites_Shion, 0x31 },
    { L"Start+C - Character Extra 3", 0x47ccce0, 0x47ccd00, indexKOFXISprites_Shion, 0x32 },
    { L"Start+C - Extra Move 1", 0x47ccd00, 0x47ccd20, indexKOFXISprites_Shion, 0x10 },
    { L"Start+C - Extra Move 2", 0x47ccd20, 0x47ccd40, indexKOFXISprites_Shion, 0x11 },
    { L"Start+C - Extra Move 3", 0x47ccd40, 0x47ccd60, indexKOFXISprites_Shion, 0x12 },
    { L"Start+C - Extra Move 4", 0x47ccd60, 0x47ccd80, indexKOFXISprites_Shion, 0x13 },
    { L"Start+C - Extra Move 5", 0x47ccd80, 0x47ccda0, indexKOFXISprites_Shion, 0x14 },
    { L"Start+C - Extra Move 6", 0x47ccda0, 0x47ccdc0, indexKOFXISprites_Shion, 0x15 },
    { L"Start+C - Extra Move 7", 0x47ccdc0, 0x47ccde0, indexKOFXISprites_Shion, 0x16 },
    { L"Start+C - Extra Move 8", 0x47ccde0, 0x47cce00, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_SHION_PALETTES_SD[] =
{
    { L"Shion SD", 0x47cce00, 0x47cce20, indexKOFXISprites_Shion },
    { L"Start+D - Super Stuff 1", 0x47cce20, 0x47cce40, indexKOFXISprites_Shion, 0x20 },
    { L"Start+D - Electric Palette", 0x47cce40, 0x47cce60, indexKOFXISprites_Shion, 0x41 },
    { L"Start+D - Darker Palette", 0x47cce60, 0x47cce80, indexKOFXISprites_Shion, 0x40 },
    { L"Start+D - Super Stuff 2", 0x47cce80, 0x47ccea0, indexKOFXISprites_Shion, 0x21 },
    { L"Start+D - Character Extra 1", 0x47ccea0, 0x47ccec0, indexKOFXISprites_Shion, 0x30 },
    { L"Start+D - Character Extra 2", 0x47ccec0, 0x47ccee0, indexKOFXISprites_Shion, 0x31 },
    { L"Start+D - Character Extra 3", 0x47ccee0, 0x47ccf00, indexKOFXISprites_Shion, 0x32 },
    { L"Start+D - Extra Move 1", 0x47ccf00, 0x47ccf20, indexKOFXISprites_Shion, 0x10 },
    { L"Start+D - Extra Move 2", 0x47ccf20, 0x47ccf40, indexKOFXISprites_Shion, 0x11 },
    { L"Start+D - Extra Move 3", 0x47ccf40, 0x47ccf60, indexKOFXISprites_Shion, 0x12 },
    { L"Start+D - Extra Move 4", 0x47ccf60, 0x47ccf80, indexKOFXISprites_Shion, 0x13 },
    { L"Start+D - Extra Move 5", 0x47ccf80, 0x47ccfa0, indexKOFXISprites_Shion, 0x14 },
    { L"Start+D - Extra Move 6", 0x47ccfa0, 0x47ccfc0, indexKOFXISprites_Shion, 0x15 },
    { L"Start+D - Extra Move 7", 0x47ccfc0, 0x47ccfe0, indexKOFXISprites_Shion, 0x16 },
    { L"Start+D - Extra Move 8", 0x47ccfe0, 0x47cd000, indexKOFXISprites_Shion, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_A[] =
{
    { L"Magaki A", 0x499a000, 0x499a020, indexKOFXISprites_Magaki },
    { L"A - Super Stuff 1", 0x499a020, 0x499a040, indexKOFXISprites_Magaki, 0x20 },
    { L"A - Electric Palette", 0x499a040, 0x499a060, indexKOFXISprites_Magaki, 0x41 },
    { L"A - Darker Palette", 0x499a060, 0x499a080, indexKOFXISprites_Magaki, 0x40 },
    { L"A - Super Stuff 2", 0x499a080, 0x499a0a0, indexKOFXISprites_Magaki, 0x21 },
    { L"A - Character Extra 1", 0x499a0a0, 0x499a0c0, indexKOFXISprites_Magaki, 0x30 },
    { L"A - Character Extra 2", 0x499a0c0, 0x499a0e0, indexKOFXISprites_Magaki, 0x31 },
    { L"A - Character Extra 3", 0x499a0e0, 0x499a100, indexKOFXISprites_Magaki, 0x32 },
    { L"A - Extra Move 1", 0x499a100, 0x499a120, indexKOFXISprites_Magaki, 0x10 },
    { L"A - Extra Move 2", 0x499a120, 0x499a140, indexKOFXISprites_Magaki, 0x11 },
    { L"A - Extra Move 3", 0x499a140, 0x499a160, indexKOFXISprites_Magaki, 0x12 },
    { L"A - Extra Move 4", 0x499a160, 0x499a180, indexKOFXISprites_Magaki, 0x13 },
    { L"A - Extra Move 5", 0x499a180, 0x499a1a0, indexKOFXISprites_Magaki, 0x14 },
    { L"A - Extra Move 6", 0x499a1a0, 0x499a1c0, indexKOFXISprites_Magaki, 0x15 },
    { L"A - Extra Move 7", 0x499a1c0, 0x499a1e0, indexKOFXISprites_Magaki, 0x16 },
    { L"A - Extra Move 8", 0x499a1e0, 0x499a200, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_B[] =
{
    { L"Magaki B", 0x499a200, 0x499a220, indexKOFXISprites_Magaki },
    { L"B - Super Stuff 1", 0x499a220, 0x499a240, indexKOFXISprites_Magaki, 0x20 },
    { L"B - Electric Palette", 0x499a240, 0x499a260, indexKOFXISprites_Magaki, 0x41 },
    { L"B - Darker Palette", 0x499a260, 0x499a280, indexKOFXISprites_Magaki, 0x40 },
    { L"B - Super Stuff 2", 0x499a280, 0x499a2a0, indexKOFXISprites_Magaki, 0x21 },
    { L"B - Character Extra 1", 0x499a2a0, 0x499a2c0, indexKOFXISprites_Magaki, 0x30 },
    { L"B - Character Extra 2", 0x499a2c0, 0x499a2e0, indexKOFXISprites_Magaki, 0x31 },
    { L"B - Character Extra 3", 0x499a2e0, 0x499a300, indexKOFXISprites_Magaki, 0x32 },
    { L"B - Extra Move 1", 0x499a300, 0x499a320, indexKOFXISprites_Magaki, 0x10 },
    { L"B - Extra Move 2", 0x499a320, 0x499a340, indexKOFXISprites_Magaki, 0x11 },
    { L"B - Extra Move 3", 0x499a340, 0x499a360, indexKOFXISprites_Magaki, 0x12 },
    { L"B - Extra Move 4", 0x499a360, 0x499a380, indexKOFXISprites_Magaki, 0x13 },
    { L"B - Extra Move 5", 0x499a380, 0x499a3a0, indexKOFXISprites_Magaki, 0x14 },
    { L"B - Extra Move 6", 0x499a3a0, 0x499a3c0, indexKOFXISprites_Magaki, 0x15 },
    { L"B - Extra Move 7", 0x499a3c0, 0x499a3e0, indexKOFXISprites_Magaki, 0x16 },
    { L"B - Extra Move 8", 0x499a3e0, 0x499a400, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_C[] =
{
    { L"Magaki C", 0x499a400, 0x499a420, indexKOFXISprites_Magaki },
    { L"C - Super Stuff 1", 0x499a420, 0x499a440, indexKOFXISprites_Magaki, 0x20 },
    { L"C - Electric Palette", 0x499a440, 0x499a460, indexKOFXISprites_Magaki, 0x41 },
    { L"C - Darker Palette", 0x499a460, 0x499a480, indexKOFXISprites_Magaki, 0x40 },
    { L"C - Super Stuff 2", 0x499a480, 0x499a4a0, indexKOFXISprites_Magaki, 0x21 },
    { L"C - Character Extra 1", 0x499a4a0, 0x499a4c0, indexKOFXISprites_Magaki, 0x30 },
    { L"C - Character Extra 2", 0x499a4c0, 0x499a4e0, indexKOFXISprites_Magaki, 0x31 },
    { L"C - Character Extra 3", 0x499a4e0, 0x499a500, indexKOFXISprites_Magaki, 0x32 },
    { L"C - Extra Move 1", 0x499a500, 0x499a520, indexKOFXISprites_Magaki, 0x10 },
    { L"C - Extra Move 2", 0x499a520, 0x499a540, indexKOFXISprites_Magaki, 0x11 },
    { L"C - Extra Move 3", 0x499a540, 0x499a560, indexKOFXISprites_Magaki, 0x12 },
    { L"C - Extra Move 4", 0x499a560, 0x499a580, indexKOFXISprites_Magaki, 0x13 },
    { L"C - Extra Move 5", 0x499a580, 0x499a5a0, indexKOFXISprites_Magaki, 0x14 },
    { L"C - Extra Move 6", 0x499a5a0, 0x499a5c0, indexKOFXISprites_Magaki, 0x15 },
    { L"C - Extra Move 7", 0x499a5c0, 0x499a5e0, indexKOFXISprites_Magaki, 0x16 },
    { L"C - Extra Move 8", 0x499a5e0, 0x499a600, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_D[] =
{
    { L"Magaki D", 0x499a600, 0x499a620, indexKOFXISprites_Magaki },
    { L"D - Super Stuff 1", 0x499a620, 0x499a640, indexKOFXISprites_Magaki, 0x20 },
    { L"D - Electric Palette", 0x499a640, 0x499a660, indexKOFXISprites_Magaki, 0x41 },
    { L"D - Darker Palette", 0x499a660, 0x499a680, indexKOFXISprites_Magaki, 0x40 },
    { L"D - Super Stuff 2", 0x499a680, 0x499a6a0, indexKOFXISprites_Magaki, 0x21 },
    { L"D - Character Extra 1", 0x499a6a0, 0x499a6c0, indexKOFXISprites_Magaki, 0x30 },
    { L"D - Character Extra 2", 0x499a6c0, 0x499a6e0, indexKOFXISprites_Magaki, 0x31 },
    { L"D - Character Extra 3", 0x499a6e0, 0x499a700, indexKOFXISprites_Magaki, 0x32 },
    { L"D - Extra Move 1", 0x499a700, 0x499a720, indexKOFXISprites_Magaki, 0x10 },
    { L"D - Extra Move 2", 0x499a720, 0x499a740, indexKOFXISprites_Magaki, 0x11 },
    { L"D - Extra Move 3", 0x499a740, 0x499a760, indexKOFXISprites_Magaki, 0x12 },
    { L"D - Extra Move 4", 0x499a760, 0x499a780, indexKOFXISprites_Magaki, 0x13 },
    { L"D - Extra Move 5", 0x499a780, 0x499a7a0, indexKOFXISprites_Magaki, 0x14 },
    { L"D - Extra Move 6", 0x499a7a0, 0x499a7c0, indexKOFXISprites_Magaki, 0x15 },
    { L"D - Extra Move 7", 0x499a7c0, 0x499a7e0, indexKOFXISprites_Magaki, 0x16 },
    { L"D - Extra Move 8", 0x499a7e0, 0x499a800, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_EA[] =
{
    { L"Magaki EA", 0x499a800, 0x499a820, indexKOFXISprites_Magaki },
    { L"E+A - Super Stuff 1", 0x499a820, 0x499a840, indexKOFXISprites_Magaki, 0x20 },
    { L"E+A - Electric Palette", 0x499a840, 0x499a860, indexKOFXISprites_Magaki, 0x41 },
    { L"E+A - Darker Palette", 0x499a860, 0x499a880, indexKOFXISprites_Magaki, 0x40 },
    { L"E+A - Super Stuff 2", 0x499a880, 0x499a8a0, indexKOFXISprites_Magaki, 0x21 },
    { L"E+A - Character Extra 1", 0x499a8a0, 0x499a8c0, indexKOFXISprites_Magaki, 0x30 },
    { L"E+A - Character Extra 2", 0x499a8c0, 0x499a8e0, indexKOFXISprites_Magaki, 0x31 },
    { L"E+A - Character Extra 3", 0x499a8e0, 0x499a900, indexKOFXISprites_Magaki, 0x32 },
    { L"E+A - Extra Move 1", 0x499a900, 0x499a920, indexKOFXISprites_Magaki, 0x10 },
    { L"E+A - Extra Move 2", 0x499a920, 0x499a940, indexKOFXISprites_Magaki, 0x11 },
    { L"E+A - Extra Move 3", 0x499a940, 0x499a960, indexKOFXISprites_Magaki, 0x12 },
    { L"E+A - Extra Move 4", 0x499a960, 0x499a980, indexKOFXISprites_Magaki, 0x13 },
    { L"E+A - Extra Move 5", 0x499a980, 0x499a9a0, indexKOFXISprites_Magaki, 0x14 },
    { L"E+A - Extra Move 6", 0x499a9a0, 0x499a9c0, indexKOFXISprites_Magaki, 0x15 },
    { L"E+A - Extra Move 7", 0x499a9c0, 0x499a9e0, indexKOFXISprites_Magaki, 0x16 },
    { L"E+A - Extra Move 8", 0x499a9e0, 0x499aa00, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_EB[] =
{
    { L"Magaki EB", 0x499aa00, 0x499aa20, indexKOFXISprites_Magaki },
    { L"E+B - Super Stuff 1", 0x499aa20, 0x499aa40, indexKOFXISprites_Magaki, 0x20 },
    { L"E+B - Electric Palette", 0x499aa40, 0x499aa60, indexKOFXISprites_Magaki, 0x41 },
    { L"E+B - Darker Palette", 0x499aa60, 0x499aa80, indexKOFXISprites_Magaki, 0x40 },
    { L"E+B - Super Stuff 2", 0x499aa80, 0x499aaa0, indexKOFXISprites_Magaki, 0x21 },
    { L"E+B - Character Extra 1", 0x499aaa0, 0x499aac0, indexKOFXISprites_Magaki, 0x30 },
    { L"E+B - Character Extra 2", 0x499aac0, 0x499aae0, indexKOFXISprites_Magaki, 0x31 },
    { L"E+B - Character Extra 3", 0x499aae0, 0x499ab00, indexKOFXISprites_Magaki, 0x32 },
    { L"E+B - Extra Move 1", 0x499ab00, 0x499ab20, indexKOFXISprites_Magaki, 0x10 },
    { L"E+B - Extra Move 2", 0x499ab20, 0x499ab40, indexKOFXISprites_Magaki, 0x11 },
    { L"E+B - Extra Move 3", 0x499ab40, 0x499ab60, indexKOFXISprites_Magaki, 0x12 },
    { L"E+B - Extra Move 4", 0x499ab60, 0x499ab80, indexKOFXISprites_Magaki, 0x13 },
    { L"E+B - Extra Move 5", 0x499ab80, 0x499aba0, indexKOFXISprites_Magaki, 0x14 },
    { L"E+B - Extra Move 6", 0x499aba0, 0x499abc0, indexKOFXISprites_Magaki, 0x15 },
    { L"E+B - Extra Move 7", 0x499abc0, 0x499abe0, indexKOFXISprites_Magaki, 0x16 },
    { L"E+B - Extra Move 8", 0x499abe0, 0x499ac00, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_EC[] =
{
    { L"Magaki EC", 0x499ac00, 0x499ac20, indexKOFXISprites_Magaki },
    { L"E+C - Super Stuff 1", 0x499ac20, 0x499ac40, indexKOFXISprites_Magaki, 0x20 },
    { L"E+C - Electric Palette", 0x499ac40, 0x499ac60, indexKOFXISprites_Magaki, 0x41 },
    { L"E+C - Darker Palette", 0x499ac60, 0x499ac80, indexKOFXISprites_Magaki, 0x40 },
    { L"E+C - Super Stuff 2", 0x499ac80, 0x499aca0, indexKOFXISprites_Magaki, 0x21 },
    { L"E+C - Character Extra 1", 0x499aca0, 0x499acc0, indexKOFXISprites_Magaki, 0x30 },
    { L"E+C - Character Extra 2", 0x499acc0, 0x499ace0, indexKOFXISprites_Magaki, 0x31 },
    { L"E+C - Character Extra 3", 0x499ace0, 0x499ad00, indexKOFXISprites_Magaki, 0x32 },
    { L"E+C - Extra Move 1", 0x499ad00, 0x499ad20, indexKOFXISprites_Magaki, 0x10 },
    { L"E+C - Extra Move 2", 0x499ad20, 0x499ad40, indexKOFXISprites_Magaki, 0x11 },
    { L"E+C - Extra Move 3", 0x499ad40, 0x499ad60, indexKOFXISprites_Magaki, 0x12 },
    { L"E+C - Extra Move 4", 0x499ad60, 0x499ad80, indexKOFXISprites_Magaki, 0x13 },
    { L"E+C - Extra Move 5", 0x499ad80, 0x499ada0, indexKOFXISprites_Magaki, 0x14 },
    { L"E+C - Extra Move 6", 0x499ada0, 0x499adc0, indexKOFXISprites_Magaki, 0x15 },
    { L"E+C - Extra Move 7", 0x499adc0, 0x499ade0, indexKOFXISprites_Magaki, 0x16 },
    { L"E+C - Extra Move 8", 0x499ade0, 0x499ae00, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_ED[] =
{
    { L"Magaki ED", 0x499ae00, 0x499ae20, indexKOFXISprites_Magaki },
    { L"E+D - Super Stuff 1", 0x499ae20, 0x499ae40, indexKOFXISprites_Magaki, 0x20 },
    { L"E+D - Electric Palette", 0x499ae40, 0x499ae60, indexKOFXISprites_Magaki, 0x41 },
    { L"E+D - Darker Palette", 0x499ae60, 0x499ae80, indexKOFXISprites_Magaki, 0x40 },
    { L"E+D - Super Stuff 2", 0x499ae80, 0x499aea0, indexKOFXISprites_Magaki, 0x21 },
    { L"E+D - Character Extra 1", 0x499aea0, 0x499aec0, indexKOFXISprites_Magaki, 0x30 },
    { L"E+D - Character Extra 2", 0x499aec0, 0x499aee0, indexKOFXISprites_Magaki, 0x31 },
    { L"E+D - Character Extra 3", 0x499aee0, 0x499af00, indexKOFXISprites_Magaki, 0x32 },
    { L"E+D - Extra Move 1", 0x499af00, 0x499af20, indexKOFXISprites_Magaki, 0x10 },
    { L"E+D - Extra Move 2", 0x499af20, 0x499af40, indexKOFXISprites_Magaki, 0x11 },
    { L"E+D - Extra Move 3", 0x499af40, 0x499af60, indexKOFXISprites_Magaki, 0x12 },
    { L"E+D - Extra Move 4", 0x499af60, 0x499af80, indexKOFXISprites_Magaki, 0x13 },
    { L"E+D - Extra Move 5", 0x499af80, 0x499afa0, indexKOFXISprites_Magaki, 0x14 },
    { L"E+D - Extra Move 6", 0x499afa0, 0x499afc0, indexKOFXISprites_Magaki, 0x15 },
    { L"E+D - Extra Move 7", 0x499afc0, 0x499afe0, indexKOFXISprites_Magaki, 0x16 },
    { L"E+D - Extra Move 8", 0x499afe0, 0x499b000, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_SA[] =
{
    { L"Magaki SA", 0x499b000, 0x499b020, indexKOFXISprites_Magaki },
    { L"Start+A - Super Stuff 1", 0x499b020, 0x499b040, indexKOFXISprites_Magaki, 0x20 },
    { L"Start+A - Electric Palette", 0x499b040, 0x499b060, indexKOFXISprites_Magaki, 0x41 },
    { L"Start+A - Darker Palette", 0x499b060, 0x499b080, indexKOFXISprites_Magaki, 0x40 },
    { L"Start+A - Super Stuff 2", 0x499b080, 0x499b0a0, indexKOFXISprites_Magaki, 0x21 },
    { L"Start+A - Character Extra 1", 0x499b0a0, 0x499b0c0, indexKOFXISprites_Magaki, 0x30 },
    { L"Start+A - Character Extra 2", 0x499b0c0, 0x499b0e0, indexKOFXISprites_Magaki, 0x31 },
    { L"Start+A - Character Extra 3", 0x499b0e0, 0x499b100, indexKOFXISprites_Magaki, 0x32 },
    { L"Start+A - Extra Move 1", 0x499b100, 0x499b120, indexKOFXISprites_Magaki, 0x10 },
    { L"Start+A - Extra Move 2", 0x499b120, 0x499b140, indexKOFXISprites_Magaki, 0x11 },
    { L"Start+A - Extra Move 3", 0x499b140, 0x499b160, indexKOFXISprites_Magaki, 0x12 },
    { L"Start+A - Extra Move 4", 0x499b160, 0x499b180, indexKOFXISprites_Magaki, 0x13 },
    { L"Start+A - Extra Move 5", 0x499b180, 0x499b1a0, indexKOFXISprites_Magaki, 0x14 },
    { L"Start+A - Extra Move 6", 0x499b1a0, 0x499b1c0, indexKOFXISprites_Magaki, 0x15 },
    { L"Start+A - Extra Move 7", 0x499b1c0, 0x499b1e0, indexKOFXISprites_Magaki, 0x16 },
    { L"Start+A - Extra Move 8", 0x499b1e0, 0x499b200, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_SB[] =
{
    { L"Magaki SB", 0x499b200, 0x499b220, indexKOFXISprites_Magaki },
    { L"Start+B - Super Stuff 1", 0x499b220, 0x499b240, indexKOFXISprites_Magaki, 0x20 },
    { L"Start+B - Electric Palette", 0x499b240, 0x499b260, indexKOFXISprites_Magaki, 0x41 },
    { L"Start+B - Darker Palette", 0x499b260, 0x499b280, indexKOFXISprites_Magaki, 0x40 },
    { L"Start+B - Super Stuff 2", 0x499b280, 0x499b2a0, indexKOFXISprites_Magaki, 0x21 },
    { L"Start+B - Character Extra 1", 0x499b2a0, 0x499b2c0, indexKOFXISprites_Magaki, 0x30 },
    { L"Start+B - Character Extra 2", 0x499b2c0, 0x499b2e0, indexKOFXISprites_Magaki, 0x31 },
    { L"Start+B - Character Extra 3", 0x499b2e0, 0x499b300, indexKOFXISprites_Magaki, 0x32 },
    { L"Start+B - Extra Move 1", 0x499b300, 0x499b320, indexKOFXISprites_Magaki, 0x10 },
    { L"Start+B - Extra Move 2", 0x499b320, 0x499b340, indexKOFXISprites_Magaki, 0x11 },
    { L"Start+B - Extra Move 3", 0x499b340, 0x499b360, indexKOFXISprites_Magaki, 0x12 },
    { L"Start+B - Extra Move 4", 0x499b360, 0x499b380, indexKOFXISprites_Magaki, 0x13 },
    { L"Start+B - Extra Move 5", 0x499b380, 0x499b3a0, indexKOFXISprites_Magaki, 0x14 },
    { L"Start+B - Extra Move 6", 0x499b3a0, 0x499b3c0, indexKOFXISprites_Magaki, 0x15 },
    { L"Start+B - Extra Move 7", 0x499b3c0, 0x499b3e0, indexKOFXISprites_Magaki, 0x16 },
    { L"Start+B - Extra Move 8", 0x499b3e0, 0x499b400, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_SC[] =
{
    { L"Magaki SC", 0x499b400, 0x499b420, indexKOFXISprites_Magaki },
    { L"Start+C - Super Stuff 1", 0x499b420, 0x499b440, indexKOFXISprites_Magaki, 0x20 },
    { L"Start+C - Electric Palette", 0x499b440, 0x499b460, indexKOFXISprites_Magaki, 0x41 },
    { L"Start+C - Darker Palette", 0x499b460, 0x499b480, indexKOFXISprites_Magaki, 0x40 },
    { L"Start+C - Super Stuff 2", 0x499b480, 0x499b4a0, indexKOFXISprites_Magaki, 0x21 },
    { L"Start+C - Character Extra 1", 0x499b4a0, 0x499b4c0, indexKOFXISprites_Magaki, 0x30 },
    { L"Start+C - Character Extra 2", 0x499b4c0, 0x499b4e0, indexKOFXISprites_Magaki, 0x31 },
    { L"Start+C - Character Extra 3", 0x499b4e0, 0x499b500, indexKOFXISprites_Magaki, 0x32 },
    { L"Start+C - Extra Move 1", 0x499b500, 0x499b520, indexKOFXISprites_Magaki, 0x10 },
    { L"Start+C - Extra Move 2", 0x499b520, 0x499b540, indexKOFXISprites_Magaki, 0x11 },
    { L"Start+C - Extra Move 3", 0x499b540, 0x499b560, indexKOFXISprites_Magaki, 0x12 },
    { L"Start+C - Extra Move 4", 0x499b560, 0x499b580, indexKOFXISprites_Magaki, 0x13 },
    { L"Start+C - Extra Move 5", 0x499b580, 0x499b5a0, indexKOFXISprites_Magaki, 0x14 },
    { L"Start+C - Extra Move 6", 0x499b5a0, 0x499b5c0, indexKOFXISprites_Magaki, 0x15 },
    { L"Start+C - Extra Move 7", 0x499b5c0, 0x499b5e0, indexKOFXISprites_Magaki, 0x16 },
    { L"Start+C - Extra Move 8", 0x499b5e0, 0x499b600, indexKOFXISprites_Magaki, 0x17 },
};

const sGame_PaletteDataset KOFXI_A_MAGAKI_PALETTES_SD[] =
{
    { L"Magaki SD", 0x499b600, 0x499b620, indexKOFXISprites_Magaki },
    { L"Start+D - Super Stuff 1", 0x499b620, 0x499b640, indexKOFXISprites_Magaki, 0x20 },
    { L"Start+D - Electric Palette", 0x499b640, 0x499b660, indexKOFXISprites_Magaki, 0x41 },
    { L"Start+D - Darker Palette", 0x499b660, 0x499b680, indexKOFXISprites_Magaki, 0x40 },
    { L"Start+D - Super Stuff 2", 0x499b680, 0x499b6a0, indexKOFXISprites_Magaki, 0x21 },
    { L"Start+D - Character Extra 1", 0x499b6a0, 0x499b6c0, indexKOFXISprites_Magaki, 0x30 },
    { L"Start+D - Character Extra 2", 0x499b6c0, 0x499b6e0, indexKOFXISprites_Magaki, 0x31 },
    { L"Start+D - Character Extra 3", 0x499b6e0, 0x499b700, indexKOFXISprites_Magaki, 0x32 },
    { L"Start+D - Extra Move 1", 0x499b700, 0x499b720, indexKOFXISprites_Magaki, 0x10 },
    { L"Start+D - Extra Move 2", 0x499b720, 0x499b740, indexKOFXISprites_Magaki, 0x11 },
    { L"Start+D - Extra Move 3", 0x499b740, 0x499b760, indexKOFXISprites_Magaki, 0x12 },
    { L"Start+D - Extra Move 4", 0x499b760, 0x499b780, indexKOFXISprites_Magaki, 0x13 },
    { L"Start+D - Extra Move 5", 0x499b780, 0x499b7a0, indexKOFXISprites_Magaki, 0x14 },
    { L"Start+D - Extra Move 6", 0x499b7a0, 0x499b7c0, indexKOFXISprites_Magaki, 0x15 },
    { L"Start+D - Extra Move 7", 0x499b7c0, 0x499b7e0, indexKOFXISprites_Magaki, 0x16 },
    { L"Start+D - Extra Move 8", 0x499b7e0, 0x499b800, indexKOFXISprites_Magaki, 0x17 },
};

const sDescTreeNode KOFXI_A_ASH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_A, ARRAYSIZE(KOFXI_A_ASH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_B, ARRAYSIZE(KOFXI_A_ASH_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_C, ARRAYSIZE(KOFXI_A_ASH_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_D, ARRAYSIZE(KOFXI_A_ASH_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_EA, ARRAYSIZE(KOFXI_A_ASH_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_EB, ARRAYSIZE(KOFXI_A_ASH_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_EC, ARRAYSIZE(KOFXI_A_ASH_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_ED, ARRAYSIZE(KOFXI_A_ASH_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_SA, ARRAYSIZE(KOFXI_A_ASH_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_SB, ARRAYSIZE(KOFXI_A_ASH_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_SC, ARRAYSIZE(KOFXI_A_ASH_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_PALETTES_SD, ARRAYSIZE(KOFXI_A_ASH_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_OSWALD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_A, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_B, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_C, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_D, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_EA, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_EB, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_EC, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_ED, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_SA, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_SB, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_SC, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_PALETTES_SD, ARRAYSIZE(KOFXI_A_OSWALD_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_SHEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_A, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_B, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_C, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_D, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_EA, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_EB, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_EC, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_ED, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_SA, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_SB, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_SC, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_PALETTES_SD, ARRAYSIZE(KOFXI_A_SHEN_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_ELIZABETH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_A, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_B, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_C, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_D, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_EA, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_EB, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_EC, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_ED, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_SA, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_SB, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_SC, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_PALETTES_SD, ARRAYSIZE(KOFXI_A_ELIZABETH_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_DUOLON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_A, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_B, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_C, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_D, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_EA, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_EB, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_EC, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_ED, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_SA, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_SB, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_SC, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_PALETTES_SD, ARRAYSIZE(KOFXI_A_DUOLON_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_A, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_B, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_C, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_D, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_EA, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_EB, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_EC, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_ED, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_SA, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_SB, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_SC, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_PALETTES_SD, ARRAYSIZE(KOFXI_A_BENIMARU_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_A, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_B, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_C, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_D, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_EA, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_EB, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_EC, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_ED, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_SA, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_SB, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_SC, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_PALETTES_SD, ARRAYSIZE(KOFXI_A_TERRY_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_A, ARRAYSIZE(KOFXI_A_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_B, ARRAYSIZE(KOFXI_A_KIM_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_C, ARRAYSIZE(KOFXI_A_KIM_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_D, ARRAYSIZE(KOFXI_A_KIM_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_EA, ARRAYSIZE(KOFXI_A_KIM_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_EB, ARRAYSIZE(KOFXI_A_KIM_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_EC, ARRAYSIZE(KOFXI_A_KIM_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_ED, ARRAYSIZE(KOFXI_A_KIM_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_SA, ARRAYSIZE(KOFXI_A_KIM_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_SB, ARRAYSIZE(KOFXI_A_KIM_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_SC, ARRAYSIZE(KOFXI_A_KIM_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_PALETTES_SD, ARRAYSIZE(KOFXI_A_KIM_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_DUCKKING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_A, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_B, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_C, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_D, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_EA, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_EB, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_EC, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_ED, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_SA, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_SB, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_SC, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_PALETTES_SD, ARRAYSIZE(KOFXI_A_DUCKKING_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_A, ARRAYSIZE(KOFXI_A_RYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_B, ARRAYSIZE(KOFXI_A_RYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_C, ARRAYSIZE(KOFXI_A_RYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_D, ARRAYSIZE(KOFXI_A_RYO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_EA, ARRAYSIZE(KOFXI_A_RYO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_EB, ARRAYSIZE(KOFXI_A_RYO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_EC, ARRAYSIZE(KOFXI_A_RYO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_ED, ARRAYSIZE(KOFXI_A_RYO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_SA, ARRAYSIZE(KOFXI_A_RYO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_SB, ARRAYSIZE(KOFXI_A_RYO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_SC, ARRAYSIZE(KOFXI_A_RYO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_PALETTES_SD, ARRAYSIZE(KOFXI_A_RYO_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_A, ARRAYSIZE(KOFXI_A_YURI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_B, ARRAYSIZE(KOFXI_A_YURI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_C, ARRAYSIZE(KOFXI_A_YURI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_D, ARRAYSIZE(KOFXI_A_YURI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_EA, ARRAYSIZE(KOFXI_A_YURI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_EB, ARRAYSIZE(KOFXI_A_YURI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_EC, ARRAYSIZE(KOFXI_A_YURI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_ED, ARRAYSIZE(KOFXI_A_YURI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_SA, ARRAYSIZE(KOFXI_A_YURI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_SB, ARRAYSIZE(KOFXI_A_YURI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_SC, ARRAYSIZE(KOFXI_A_YURI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_PALETTES_SD, ARRAYSIZE(KOFXI_A_YURI_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_A, ARRAYSIZE(KOFXI_A_KING_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_B, ARRAYSIZE(KOFXI_A_KING_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_C, ARRAYSIZE(KOFXI_A_KING_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_D, ARRAYSIZE(KOFXI_A_KING_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_EA, ARRAYSIZE(KOFXI_A_KING_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_EB, ARRAYSIZE(KOFXI_A_KING_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_EC, ARRAYSIZE(KOFXI_A_KING_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_ED, ARRAYSIZE(KOFXI_A_KING_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_SA, ARRAYSIZE(KOFXI_A_KING_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_SB, ARRAYSIZE(KOFXI_A_KING_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_SC, ARRAYSIZE(KOFXI_A_KING_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_PALETTES_SD, ARRAYSIZE(KOFXI_A_KING_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_BJENET_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_A, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_B, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_C, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_D, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_EA, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_EB, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_EC, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_ED, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_SA, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_SB, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_SC, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_PALETTES_SD, ARRAYSIZE(KOFXI_A_BJENET_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_GATO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_A, ARRAYSIZE(KOFXI_A_GATO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_B, ARRAYSIZE(KOFXI_A_GATO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_C, ARRAYSIZE(KOFXI_A_GATO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_D, ARRAYSIZE(KOFXI_A_GATO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_EA, ARRAYSIZE(KOFXI_A_GATO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_EB, ARRAYSIZE(KOFXI_A_GATO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_EC, ARRAYSIZE(KOFXI_A_GATO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_ED, ARRAYSIZE(KOFXI_A_GATO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_SA, ARRAYSIZE(KOFXI_A_GATO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_SB, ARRAYSIZE(KOFXI_A_GATO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_SC, ARRAYSIZE(KOFXI_A_GATO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_PALETTES_SD, ARRAYSIZE(KOFXI_A_GATO_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_TIZOCTHEGRIFFON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_A, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_B, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_C, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_D, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EA, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EB, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EC, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_ED, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SA, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SB, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SC, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SD, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_A, ARRAYSIZE(KOFXI_A_RALF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_B, ARRAYSIZE(KOFXI_A_RALF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_C, ARRAYSIZE(KOFXI_A_RALF_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_D, ARRAYSIZE(KOFXI_A_RALF_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_EA, ARRAYSIZE(KOFXI_A_RALF_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_EB, ARRAYSIZE(KOFXI_A_RALF_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_EC, ARRAYSIZE(KOFXI_A_RALF_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_ED, ARRAYSIZE(KOFXI_A_RALF_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_SA, ARRAYSIZE(KOFXI_A_RALF_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_SB, ARRAYSIZE(KOFXI_A_RALF_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_SC, ARRAYSIZE(KOFXI_A_RALF_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_PALETTES_SD, ARRAYSIZE(KOFXI_A_RALF_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_A, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_B, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_C, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_D, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_EA, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_EB, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_EC, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_ED, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_SA, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_SB, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_SC, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_PALETTES_SD, ARRAYSIZE(KOFXI_A_CLARK_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_WHIP_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_A, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_B, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_C, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_D, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_EA, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_EB, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_EC, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_ED, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_SA, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_SB, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_SC, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_PALETTES_SD, ARRAYSIZE(KOFXI_A_WHIP_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_A, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_B, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_C, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_D, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_EA, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_EB, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_EC, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_ED, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_SA, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_SB, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_SC, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_PALETTES_SD, ARRAYSIZE(KOFXI_A_ATHENA_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_KENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_A, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_B, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_C, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_D, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_EA, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_EB, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_EC, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_ED, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_SA, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_SB, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_SC, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_PALETTES_SD, ARRAYSIZE(KOFXI_A_KENSOU_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_MOMOKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_A, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_B, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_C, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_D, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_EA, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_EB, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_EC, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_ED, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_SA, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_SB, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_SC, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_PALETTES_SD, ARRAYSIZE(KOFXI_A_MOMOKO_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_VANESSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_A, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_B, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_C, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_D, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_EA, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_EB, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_EC, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_ED, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_SA, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_SB, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_SC, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_PALETTES_SD, ARRAYSIZE(KOFXI_A_VANESSA_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_A, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_B, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_C, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_D, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_EA, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_EB, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_EC, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_ED, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_SA, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_SB, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_SC, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_PALETTES_SD, ARRAYSIZE(KOFXI_A_BLUEMARY_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_RAMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_A, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_B, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_C, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_D, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_EA, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_EB, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_EC, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_ED, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_SA, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_SB, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_SC, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_PALETTES_SD, ARRAYSIZE(KOFXI_A_RAMON_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_MALIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_A, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_B, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_C, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_D, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_EA, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_EB, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_EC, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_ED, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_SA, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_SB, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_SC, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_PALETTES_SD, ARRAYSIZE(KOFXI_A_MALIN_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_KASUMI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_A, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_B, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_C, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_D, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_EA, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_EB, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_EC, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_ED, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_SA, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_SB, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_SC, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_PALETTES_SD, ARRAYSIZE(KOFXI_A_KASUMI_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_EIJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_A, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_B, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_C, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_D, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_EA, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_EB, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_EC, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_ED, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_SA, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_SB, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_SC, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_PALETTES_SD, ARRAYSIZE(KOFXI_A_EIJI_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_K_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_A, ARRAYSIZE(KOFXI_A_K_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_B, ARRAYSIZE(KOFXI_A_K_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_C, ARRAYSIZE(KOFXI_A_K_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_D, ARRAYSIZE(KOFXI_A_K_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_EA, ARRAYSIZE(KOFXI_A_K_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_EB, ARRAYSIZE(KOFXI_A_K_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_EC, ARRAYSIZE(KOFXI_A_K_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_ED, ARRAYSIZE(KOFXI_A_K_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_SA, ARRAYSIZE(KOFXI_A_K_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_SB, ARRAYSIZE(KOFXI_A_K_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_SC, ARRAYSIZE(KOFXI_A_K_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_PALETTES_SD, ARRAYSIZE(KOFXI_A_K_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_KULA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_A, ARRAYSIZE(KOFXI_A_KULA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_B, ARRAYSIZE(KOFXI_A_KULA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_C, ARRAYSIZE(KOFXI_A_KULA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_D, ARRAYSIZE(KOFXI_A_KULA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_EA, ARRAYSIZE(KOFXI_A_KULA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_EB, ARRAYSIZE(KOFXI_A_KULA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_EC, ARRAYSIZE(KOFXI_A_KULA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_ED, ARRAYSIZE(KOFXI_A_KULA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_SA, ARRAYSIZE(KOFXI_A_KULA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_SB, ARRAYSIZE(KOFXI_A_KULA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_SC, ARRAYSIZE(KOFXI_A_KULA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_PALETTES_SD, ARRAYSIZE(KOFXI_A_KULA_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_MAXIMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_A, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_B, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_C, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_D, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_EA, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_EB, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_EC, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_ED, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_SA, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_SB, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_SC, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_PALETTES_SD, ARRAYSIZE(KOFXI_A_MAXIMA_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_A, ARRAYSIZE(KOFXI_A_KYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_B, ARRAYSIZE(KOFXI_A_KYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_C, ARRAYSIZE(KOFXI_A_KYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_D, ARRAYSIZE(KOFXI_A_KYO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_EA, ARRAYSIZE(KOFXI_A_KYO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_EB, ARRAYSIZE(KOFXI_A_KYO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_EC, ARRAYSIZE(KOFXI_A_KYO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_ED, ARRAYSIZE(KOFXI_A_KYO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_SA, ARRAYSIZE(KOFXI_A_KYO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_SB, ARRAYSIZE(KOFXI_A_KYO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_SC, ARRAYSIZE(KOFXI_A_KYO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_PALETTES_SD, ARRAYSIZE(KOFXI_A_KYO_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_A, ARRAYSIZE(KOFXI_A_IORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_B, ARRAYSIZE(KOFXI_A_IORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_C, ARRAYSIZE(KOFXI_A_IORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_D, ARRAYSIZE(KOFXI_A_IORI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_EA, ARRAYSIZE(KOFXI_A_IORI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_EB, ARRAYSIZE(KOFXI_A_IORI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_EC, ARRAYSIZE(KOFXI_A_IORI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_ED, ARRAYSIZE(KOFXI_A_IORI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_SA, ARRAYSIZE(KOFXI_A_IORI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_SB, ARRAYSIZE(KOFXI_A_IORI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_SC, ARRAYSIZE(KOFXI_A_IORI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_PALETTES_SD, ARRAYSIZE(KOFXI_A_IORI_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_SHINGO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_A, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_B, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_C, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_D, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_EA, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_EB, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_EC, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_ED, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_SA, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_SB, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_SC, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_PALETTES_SD, ARRAYSIZE(KOFXI_A_SHINGO_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_GAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_A, ARRAYSIZE(KOFXI_A_GAI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_B, ARRAYSIZE(KOFXI_A_GAI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_C, ARRAYSIZE(KOFXI_A_GAI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_D, ARRAYSIZE(KOFXI_A_GAI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_EA, ARRAYSIZE(KOFXI_A_GAI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_EB, ARRAYSIZE(KOFXI_A_GAI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_EC, ARRAYSIZE(KOFXI_A_GAI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_ED, ARRAYSIZE(KOFXI_A_GAI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_SA, ARRAYSIZE(KOFXI_A_GAI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_SB, ARRAYSIZE(KOFXI_A_GAI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_SC, ARRAYSIZE(KOFXI_A_GAI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_PALETTES_SD, ARRAYSIZE(KOFXI_A_GAI_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_SHO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_A, ARRAYSIZE(KOFXI_A_SHO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_B, ARRAYSIZE(KOFXI_A_SHO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_C, ARRAYSIZE(KOFXI_A_SHO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_D, ARRAYSIZE(KOFXI_A_SHO_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_EA, ARRAYSIZE(KOFXI_A_SHO_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_EB, ARRAYSIZE(KOFXI_A_SHO_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_EC, ARRAYSIZE(KOFXI_A_SHO_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_ED, ARRAYSIZE(KOFXI_A_SHO_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_SA, ARRAYSIZE(KOFXI_A_SHO_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_SB, ARRAYSIZE(KOFXI_A_SHO_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_SC, ARRAYSIZE(KOFXI_A_SHO_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_PALETTES_SD, ARRAYSIZE(KOFXI_A_SHO_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_ADELHEID_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_A, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_B, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_C, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_D, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_EA, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_EB, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_EC, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_ED, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_SA, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_SB, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_SC, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_PALETTES_SD, ARRAYSIZE(KOFXI_A_ADELHEID_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_SILBER_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_A, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_B, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_C, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_D, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_EA, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_EB, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_EC, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_ED, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_SA, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_SB, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_SC, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_PALETTES_SD, ARRAYSIZE(KOFXI_A_SILBER_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_JYAZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_A, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_B, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_C, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_D, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_EA, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_EB, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_EC, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_ED, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_SA, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_SB, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_SC, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_PALETTES_SD, ARRAYSIZE(KOFXI_A_JYAZU_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_SHION_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_A, ARRAYSIZE(KOFXI_A_SHION_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_B, ARRAYSIZE(KOFXI_A_SHION_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_C, ARRAYSIZE(KOFXI_A_SHION_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_D, ARRAYSIZE(KOFXI_A_SHION_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_EA, ARRAYSIZE(KOFXI_A_SHION_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_EB, ARRAYSIZE(KOFXI_A_SHION_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_EC, ARRAYSIZE(KOFXI_A_SHION_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_ED, ARRAYSIZE(KOFXI_A_SHION_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_SA, ARRAYSIZE(KOFXI_A_SHION_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_SB, ARRAYSIZE(KOFXI_A_SHION_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_SC, ARRAYSIZE(KOFXI_A_SHION_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_PALETTES_SD, ARRAYSIZE(KOFXI_A_SHION_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_MAGAKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_A, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_B, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_C, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_D, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_D) },
    { L"E + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_EA, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_EA) },
    { L"E + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_EB, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_EB) },
    { L"E + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_EC, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_EC) },
    { L"E + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_ED, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_ED) },
    { L"Start + A", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_SA, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_SA) },
    { L"Start + B", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_SB, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_SB) },
    { L"Start + C", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_SC, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_SC) },
    { L"Start + D", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_PALETTES_SD, ARRAYSIZE(KOFXI_A_MAGAKI_PALETTES_SD) },
};

const sDescTreeNode KOFXI_A_UNITS[] =
{
    { L"Ash", DESC_NODETYPE_TREE, (void*)KOFXI_A_ASH_COLLECTION, ARRAYSIZE(KOFXI_A_ASH_COLLECTION) },
    { L"Oswald", DESC_NODETYPE_TREE, (void*)KOFXI_A_OSWALD_COLLECTION, ARRAYSIZE(KOFXI_A_OSWALD_COLLECTION) },
    { L"Shen", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHEN_COLLECTION, ARRAYSIZE(KOFXI_A_SHEN_COLLECTION) },
    { L"Elizabeth", DESC_NODETYPE_TREE, (void*)KOFXI_A_ELIZABETH_COLLECTION, ARRAYSIZE(KOFXI_A_ELIZABETH_COLLECTION) },
    { L"Duo Lon", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUOLON_COLLECTION, ARRAYSIZE(KOFXI_A_DUOLON_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOFXI_A_BENIMARU_COLLECTION, ARRAYSIZE(KOFXI_A_BENIMARU_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOFXI_A_TERRY_COLLECTION, ARRAYSIZE(KOFXI_A_TERRY_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOFXI_A_KIM_COLLECTION, ARRAYSIZE(KOFXI_A_KIM_COLLECTION) },
    { L"Duck King", DESC_NODETYPE_TREE, (void*)KOFXI_A_DUCKKING_COLLECTION, ARRAYSIZE(KOFXI_A_DUCKKING_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOFXI_A_RYO_COLLECTION, ARRAYSIZE(KOFXI_A_RYO_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOFXI_A_YURI_COLLECTION, ARRAYSIZE(KOFXI_A_YURI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOFXI_A_KING_COLLECTION, ARRAYSIZE(KOFXI_A_KING_COLLECTION) },
    { L"B. Jenet", DESC_NODETYPE_TREE, (void*)KOFXI_A_BJENET_COLLECTION, ARRAYSIZE(KOFXI_A_BJENET_COLLECTION) },
    { L"Gato", DESC_NODETYPE_TREE, (void*)KOFXI_A_GATO_COLLECTION, ARRAYSIZE(KOFXI_A_GATO_COLLECTION) },
    { L"Tizoc/The Griffon", DESC_NODETYPE_TREE, (void*)KOFXI_A_TIZOCTHEGRIFFON_COLLECTION, ARRAYSIZE(KOFXI_A_TIZOCTHEGRIFFON_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOFXI_A_RALF_COLLECTION, ARRAYSIZE(KOFXI_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOFXI_A_CLARK_COLLECTION, ARRAYSIZE(KOFXI_A_CLARK_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOFXI_A_WHIP_COLLECTION, ARRAYSIZE(KOFXI_A_WHIP_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOFXI_A_ATHENA_COLLECTION, ARRAYSIZE(KOFXI_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOFXI_A_KENSOU_COLLECTION, ARRAYSIZE(KOFXI_A_KENSOU_COLLECTION) },
    { L"Momoko", DESC_NODETYPE_TREE, (void*)KOFXI_A_MOMOKO_COLLECTION, ARRAYSIZE(KOFXI_A_MOMOKO_COLLECTION) },
    { L"Vanessa", DESC_NODETYPE_TREE, (void*)KOFXI_A_VANESSA_COLLECTION, ARRAYSIZE(KOFXI_A_VANESSA_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOFXI_A_BLUEMARY_COLLECTION, ARRAYSIZE(KOFXI_A_BLUEMARY_COLLECTION) },
    { L"Ramon", DESC_NODETYPE_TREE, (void*)KOFXI_A_RAMON_COLLECTION, ARRAYSIZE(KOFXI_A_RAMON_COLLECTION) },
    { L"Malin", DESC_NODETYPE_TREE, (void*)KOFXI_A_MALIN_COLLECTION, ARRAYSIZE(KOFXI_A_MALIN_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)KOFXI_A_KASUMI_COLLECTION, ARRAYSIZE(KOFXI_A_KASUMI_COLLECTION) },
    { L"Eiji", DESC_NODETYPE_TREE, (void*)KOFXI_A_EIJI_COLLECTION, ARRAYSIZE(KOFXI_A_EIJI_COLLECTION) },
    { L"K'", DESC_NODETYPE_TREE, (void*)KOFXI_A_K_COLLECTION, ARRAYSIZE(KOFXI_A_K_COLLECTION) },
    { L"Kula", DESC_NODETYPE_TREE, (void*)KOFXI_A_KULA_COLLECTION, ARRAYSIZE(KOFXI_A_KULA_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAXIMA_COLLECTION, ARRAYSIZE(KOFXI_A_MAXIMA_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOFXI_A_KYO_COLLECTION, ARRAYSIZE(KOFXI_A_KYO_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOFXI_A_IORI_COLLECTION, ARRAYSIZE(KOFXI_A_IORI_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHINGO_COLLECTION, ARRAYSIZE(KOFXI_A_SHINGO_COLLECTION) },
    { L"Gai", DESC_NODETYPE_TREE, (void*)KOFXI_A_GAI_COLLECTION, ARRAYSIZE(KOFXI_A_GAI_COLLECTION) },
    { L"Sho", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHO_COLLECTION, ARRAYSIZE(KOFXI_A_SHO_COLLECTION) },
    { L"Adelheid", DESC_NODETYPE_TREE, (void*)KOFXI_A_ADELHEID_COLLECTION, ARRAYSIZE(KOFXI_A_ADELHEID_COLLECTION) },
    { L"Silber", DESC_NODETYPE_TREE, (void*)KOFXI_A_SILBER_COLLECTION, ARRAYSIZE(KOFXI_A_SILBER_COLLECTION) },
    { L"Jyazu", DESC_NODETYPE_TREE, (void*)KOFXI_A_JYAZU_COLLECTION, ARRAYSIZE(KOFXI_A_JYAZU_COLLECTION) },
    { L"Shion", DESC_NODETYPE_TREE, (void*)KOFXI_A_SHION_COLLECTION, ARRAYSIZE(KOFXI_A_SHION_COLLECTION) },
    { L"Magaki", DESC_NODETYPE_TREE, (void*)KOFXI_A_MAGAKI_COLLECTION, ARRAYSIZE(KOFXI_A_MAGAKI_COLLECTION) },
};

constexpr auto KOFXI_A_NUMUNIT = ARRAYSIZE(KOFXI_A_UNITS);

#define KOFXI_A_EXTRALOC KOFXI_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOFXI_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#pragma once

// To add characters or palette lists:
// * Update the DumpPaletteHeaders code
// * Uncomment the call to it
// * Run PalMod and copy the debug output into the header
// That should be it.  Good luck.

const UINT16 KOF95_A_IMG_UNITS[] =
{
    indexKOF94Sprites_Andy,         // 0x164
    indexKOF94Sprites_Athena,       // 0x165
    indexKOF94Sprites_Benimaru,     // 0x166
    indexKOF94Sprites_Brian,        // 0x167
    indexKOF94Sprites_Chin,         // 0x169
    indexKOF94Sprites_Clark,        // 0x16b
    indexKOF94Sprites_Daimon,       // 0x16c
    indexKOF94Sprites_HeavyD,       // 0x16d
    indexKOF94Sprites_Heidern,      // 0x16e
    indexKOF94Sprites_Joe,          // 0x16f
    indexKOF94Sprites_Kensou,       // 0x170
    indexKOF94Sprites_Kim,          // 0x171
    indexKOF94Sprites_King,         // 0x172
    indexKOF94Sprites_Kyo,          // 0x173
    indexKOF94Sprites_Lucky,        // 0x174
    indexKOF94Sprites_Mai,          // 0x175
    indexKOF94Sprites_Ralf,         // 0x176
    indexKOF94Sprites_Robert,       // 0x177
    indexKOF94Sprites_Ryo,          // 0x179
    indexKOF94Sprites_Takuma,       // 0x17a
    indexKOF94Sprites_Terry,        // 0x17b
    indexKOF94Sprites_Yuri,         // 0x17c
    
    indexKOF95Sprites_Andy,         // 0x22D
    indexKOF95Sprites_Athena,       // 0x22E
    indexKOF95Sprites_Benimaru,     // 0x22F
    indexKOF95Sprites_Billy,        // 0x230
    indexKOF95Sprites_Chang,        // 0x231
    indexKOF95Sprites_Chin,         // 0x232
    indexKOF95Sprites_Choi,         // 0x233
    indexKOF95Sprites_Clark,        // 0x234
    indexKOF95Sprites_Daimon,       // 0x235
    indexKOF95Sprites_Eiji,         // 0x236
    indexKOF95Sprites_Heidern,      // 0x237
    indexKOF95Sprites_Iori,         // 0x238
    indexKOF95Sprites_Joe,          // 0x239
    indexKOF95Sprites_Kensou,       // 0x23A
    indexKOF95Sprites_Kim,          // 0x23B
    indexKOF95Sprites_King,         // 0x23C
    indexKOF95Sprites_Kyo,          // 0x23D
    indexKOF95Sprites_Mai,          // 0x23E
    indexKOF95Sprites_OmegaRugal,   // 0x23F
    indexKOF95Sprites_Ralf,         // 0x240
    indexKOF95Sprites_Robert,       // 0x241
    indexKOF95Sprites_Ryo,          // 0x242
    indexKOF95Sprites_Saisyu,       // 0x243
    indexKOF95Sprites_Takuma,       // 0x244
    indexKOF95Sprites_Terry,        // 0x245
    indexKOF95Sprites_Bonus,        // 0x246
};

const sGame_PaletteDataset KOF95_A_HEIDERN_MAIN_PALETTES[] =
{
    { L"Heidern", 0xd9000, 0xd9020, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 1", 0xd9020, 0xd9040 },
    { L"MAX Flash", 0xd9040, 0xd9060, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 2", 0xd9060, 0xd9080 },
    { L"Electric Palette?", 0xd9080, 0xd90a0, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 4", 0xd90a0, 0xd90c0 },
    { L"Win Portrait?", 0xd90c0, 0xd9120 },
    { L"Extra 5", 0xd9120, 0xd9140 },
    { L"Extra 6", 0xd9140, 0xd9160 },
    { L"Extra 7", 0xd9160, 0xd9180 },
    { L"Extra 8", 0xd9180, 0xd91a0 },
    { L"Extra 9", 0xd91a0, 0xd91c0 },
    { L"Lifebar Portrait", 0xd91c0, 0xd91e0, indexKOF94Sprites_Heidern, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd91e0, 0xd9200, indexKOF94Sprites_Heidern, 0x00 },
};

const sGame_PaletteDataset KOF95_A_HEIDERN_ALT_PALETTES[] =
{
    { L"Heidern", 0xd9200, 0xd9220, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 1", 0xd9220, 0xd9240 },
    { L"MAX Flash", 0xd9240, 0xd9260, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 2", 0xd9260, 0xd9280 },
    { L"Electric Palette?", 0xd9280, 0xd92a0, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 4", 0xd92a0, 0xd92c0 },
    { L"Win Portrait?", 0xd92c0, 0xd9320 },
    { L"Extra 5", 0xd9320, 0xd9340 },
    { L"Extra 6", 0xd9340, 0xd9360 },
    { L"Extra 7", 0xd9360, 0xd9380 },
    { L"Extra 8", 0xd9380, 0xd93a0 },
    { L"Extra 9", 0xd93a0, 0xd93c0 },
    { L"Lifebar Portrait", 0xd93c0, 0xd93e0, indexKOF94Sprites_Heidern, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd93e0, 0xd9400, indexKOF94Sprites_Heidern, 0x00 },
};

const sGame_PaletteDataset KOF95_A_RALF_MAIN_PALETTES[] =
{
    { L"Ralf", 0xd9400, 0xd9420, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Extra 1", 0xd9420, 0xd9440, indexKOF94Sprites_Ralf, 0x01 },
    { L"MAX Flash", 0xd9440, 0xd9460, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"MAX Flash Extra", 0xd9460, 0xd9480, indexKOF94Sprites_Ralf, 0x01 },
    { L"Electric Palette?", 0xd9480, 0xd94a0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Electric Palette? Extra", 0xd94a0, 0xd94c0, indexKOF94Sprites_Ralf, 0x01 },
    { L"Win Portrait?", 0xd94c0, 0xd9520 },
    { L"Extra 5", 0xd9520, 0xd9540 },
    { L"Extra 6", 0xd9540, 0xd9560 },
    { L"Extra 7", 0xd9560, 0xd9580 },
    { L"Extra 8", 0xd9580, 0xd95a0 },
    { L"Extra 9", 0xd95a0, 0xd95c0 },
    { L"Lifebar Portrait", 0xd95c0, 0xd95e0, indexKOF94Sprites_Ralf, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd95e0, 0xd9600, indexKOF94Sprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF95_A_RALF_ALT_PALETTES[] =
{
    { L"Ralf", 0xd9600, 0xd9620, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Extra 1", 0xd9620, 0xd9640, indexKOF94Sprites_Ralf, 0x01 },
    { L"MAX Flash", 0xd9640, 0xd9660, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"MAX Flash Extra", 0xd9660, 0xd9680, indexKOF94Sprites_Ralf, 0x01 },
    { L"Electric Palette?", 0xd9680, 0xd96a0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Electric Palette? Extra", 0xd96a0, 0xd96c0, indexKOF94Sprites_Ralf, 0x01 },
    { L"Win Portrait?", 0xd96c0, 0xd9720 },
    { L"Extra 5", 0xd9720, 0xd9740 },
    { L"Extra 6", 0xd9740, 0xd9760 },
    { L"Extra 7", 0xd9760, 0xd9780 },
    { L"Extra 8", 0xd9780, 0xd97a0 },
    { L"Extra 9", 0xd97a0, 0xd97c0 },
    { L"Lifebar Portrait", 0xd97c0, 0xd97e0, indexKOF94Sprites_Ralf, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd97e0, 0xd9800, indexKOF94Sprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CLARK_MAIN_PALETTES[] =
{
    { L"Clark", 0xd9800, 0xd9820, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Extra 1", 0xd9820, 0xd9840, indexKOF94Sprites_Clark, 0x01 },
    { L"MAX Flash", 0xd9840, 0xd9860, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"MAX Flash Extra", 0xd9860, 0xd9880, indexKOF94Sprites_Clark, 0x01 },
    { L"Electric Palette?", 0xd9880, 0xd98a0, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Electric Palette? Extra", 0xd98a0, 0xd98c0, indexKOF94Sprites_Clark, 0x01 },
    { L"Win Portrait?", 0xd98c0, 0xd9920 },
    { L"Extra 5", 0xd9920, 0xd9940 },
    { L"Extra 6", 0xd9940, 0xd9960 },
    { L"Extra 7", 0xd9960, 0xd9980 },
    { L"Extra 8", 0xd9980, 0xd99a0 },
    { L"Extra 9", 0xd99a0, 0xd99c0 },
    { L"Lifebar Portrait", 0xd99c0, 0xd99e0, indexKOF94Sprites_Clark, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd99e0, 0xd9a00, indexKOF94Sprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CLARK_ALT_PALETTES[] =
{
    { L"Clark", 0xd9a00, 0xd9a20, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Extra 1", 0xd9a20, 0xd9a40, indexKOF94Sprites_Clark, 0x01 },
    { L"MAX Flash", 0xd9a40, 0xd9a60, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"MAX Flash Extra", 0xd9a60, 0xd9a80, indexKOF94Sprites_Clark, 0x01 },
    { L"Electric Palette?", 0xd9a80, 0xd9aa0, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Electric Palette? Extra", 0xd9aa0, 0xd9ac0, indexKOF94Sprites_Clark, 0x01 },
    { L"Win Portrait?", 0xd9ac0, 0xd9b20 },
    { L"Extra 5", 0xd9b20, 0xd9b40 },
    { L"Extra 6", 0xd9b40, 0xd9b60 },
    { L"Extra 7", 0xd9b60, 0xd9b80 },
    { L"Extra 8", 0xd9b80, 0xd9ba0 },
    { L"Extra 9", 0xd9ba0, 0xd9bc0 },
    { L"Lifebar Portrait", 0xd9bc0, 0xd9be0, indexKOF94Sprites_Clark, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd9be0, 0xd9c00, indexKOF94Sprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF95_A_ATHENA_MAIN_PALETTES[] =
{
    { L"Athena", 0xd9c00, 0xd9c20, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 1", 0xd9c20, 0xd9c40 },
    { L"MAX Flash", 0xd9c40, 0xd9c60, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 2", 0xd9c60, 0xd9c80 },
    { L"Electric Palette?", 0xd9c80, 0xd9ca0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 4", 0xd9ca0, 0xd9cc0 },
    { L"Win Portrait?", 0xd9cc0, 0xd9d20 },
    { L"Extra 5", 0xd9d20, 0xd9d40 },
    { L"Extra 6", 0xd9d40, 0xd9d60 },
    { L"Extra 7", 0xd9d60, 0xd9d80 },
    { L"Extra 8", 0xd9d80, 0xd9da0 },
    { L"Extra 9", 0xd9da0, 0xd9dc0 },
    { L"Lifebar Portrait", 0xd9dc0, 0xd9de0, indexKOF94Sprites_Athena, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd9de0, 0xd9e00, indexKOF94Sprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF95_A_ATHENA_ALT_PALETTES[] =
{
    { L"Athena", 0xd9e00, 0xd9e20, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 1", 0xd9e20, 0xd9e40 },
    { L"MAX Flash", 0xd9e40, 0xd9e60, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 2", 0xd9e60, 0xd9e80 },
    { L"Electric Palette?", 0xd9e80, 0xd9ea0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 4", 0xd9ea0, 0xd9ec0 },
    { L"Win Portrait?", 0xd9ec0, 0xd9f20 },
    { L"Extra 5", 0xd9f20, 0xd9f40 },
    { L"Extra 6", 0xd9f40, 0xd9f60 },
    { L"Extra 7", 0xd9f60, 0xd9f80 },
    { L"Extra 8", 0xd9f80, 0xd9fa0 },
    { L"Extra 9", 0xd9fa0, 0xd9fc0 },
    { L"Lifebar Portrait", 0xd9fc0, 0xd9fe0, indexKOF94Sprites_Athena, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xd9fe0, 0xda000, indexKOF94Sprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KENSOU_MAIN_PALETTES[] =
{
    { L"Kensou", 0xda000, 0xda020, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 1", 0xda020, 0xda040 },
    { L"MAX Flash", 0xda040, 0xda060, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 2", 0xda060, 0xda080 },
    { L"Electric Palette?", 0xda080, 0xda0a0, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 4", 0xda0a0, 0xda0c0 },
    { L"Win Portrait?", 0xda0c0, 0xda120 },
    { L"Extra 5", 0xda120, 0xda140 },
    { L"Extra 6", 0xda140, 0xda160 },
    { L"Extra 7", 0xda160, 0xda180 },
    { L"Extra 8", 0xda180, 0xda1a0 },
    { L"Extra 9", 0xda1a0, 0xda1c0 },
    { L"Lifebar Portrait", 0xda1c0, 0xda1e0, indexKOF94Sprites_Kensou, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xda1e0, 0xda200, indexKOF94Sprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KENSOU_ALT_PALETTES[] =
{
    { L"Kensou", 0xda200, 0xda220, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 1", 0xda220, 0xda240 },
    { L"MAX Flash", 0xda240, 0xda260, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 2", 0xda260, 0xda280 },
    { L"Electric Palette?", 0xda280, 0xda2a0, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 4", 0xda2a0, 0xda2c0 },
    { L"Win Portrait?", 0xda2c0, 0xda320 },
    { L"Extra 5", 0xda320, 0xda340 },
    { L"Extra 6", 0xda340, 0xda360 },
    { L"Extra 7", 0xda360, 0xda380 },
    { L"Extra 8", 0xda380, 0xda3a0 },
    { L"Extra 9", 0xda3a0, 0xda3c0 },
    { L"Lifebar Portrait", 0xda3c0, 0xda3e0, indexKOF94Sprites_Kensou, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xda3e0, 0xda400, indexKOF94Sprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CHIN_MAIN_PALETTES[] =
{
    { L"Chin", 0xda400, 0xda420, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 1", 0xda420, 0xda440 },
    { L"MAX Flash", 0xda440, 0xda460, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 2", 0xda460, 0xda480 },
    { L"Electric Palette?", 0xda480, 0xda4a0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 4", 0xda4a0, 0xda4c0 },
    { L"Win Portrait?", 0xda4c0, 0xda520 },
    { L"Extra 5", 0xda520, 0xda540 },
    { L"Extra 6", 0xda540, 0xda560 },
    { L"Extra 7", 0xda560, 0xda580 },
    { L"Extra 8", 0xda580, 0xda5a0 },
    { L"Extra 9", 0xda5a0, 0xda5c0 },
    { L"Lifebar Portrait", 0xda5c0, 0xda5e0, indexKOF94Sprites_Chin, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xda5e0, 0xda600, indexKOF94Sprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CHIN_ALT_PALETTES[] =
{
    { L"Chin", 0xda600, 0xda620, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 1", 0xda620, 0xda640 },
    { L"MAX Flash", 0xda640, 0xda660, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 2", 0xda660, 0xda680 },
    { L"Electric Palette?", 0xda680, 0xda6a0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 4", 0xda6a0, 0xda6c0 },
    { L"Win Portrait?", 0xda6c0, 0xda720 },
    { L"Extra 5", 0xda720, 0xda740 },
    { L"Extra 6", 0xda740, 0xda760 },
    { L"Extra 7", 0xda760, 0xda780 },
    { L"Extra 8", 0xda780, 0xda7a0 },
    { L"Extra 9", 0xda7a0, 0xda7c0 },
    { L"Lifebar Portrait", 0xda7c0, 0xda7e0, indexKOF94Sprites_Chin, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xda7e0, 0xda800, indexKOF94Sprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KYO_MAIN_PALETTES[] =
{
    { L"Kyo", 0xda800, 0xda820, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 1", 0xda820, 0xda840 },
    { L"MAX Flash", 0xda840, 0xda860, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 2", 0xda860, 0xda880 },
    { L"Electric Palette?", 0xda880, 0xda8a0, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 4", 0xda8a0, 0xda8c0 },
    { L"Win Portrait?", 0xda8c0, 0xda920 },
    { L"Extra 5", 0xda920, 0xda940 },
    { L"Extra 6", 0xda940, 0xda960 },
    { L"Extra 7", 0xda960, 0xda980 },
    { L"Extra 8", 0xda980, 0xda9a0 },
    { L"Extra 9", 0xda9a0, 0xda9c0 },
    { L"Lifebar Portrait", 0xda9c0, 0xda9e0, indexKOF94Sprites_Kyo, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xda9e0, 0xdaa00, indexKOF94Sprites_Kyo, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KYO_ALT_PALETTES[] =
{
    { L"Kyo", 0xdaa00, 0xdaa20, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 1", 0xdaa20, 0xdaa40 },
    { L"MAX Flash", 0xdaa40, 0xdaa60, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 2", 0xdaa60, 0xdaa80 },
    { L"Electric Palette?", 0xdaa80, 0xdaaa0, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 4", 0xdaaa0, 0xdaac0 },
    { L"Win Portrait?", 0xdaac0, 0xdab20 },
    { L"Extra 5", 0xdab20, 0xdab40 },
    { L"Extra 6", 0xdab40, 0xdab60 },
    { L"Extra 7", 0xdab60, 0xdab80 },
    { L"Extra 8", 0xdab80, 0xdaba0 },
    { L"Extra 9", 0xdaba0, 0xdabc0 },
    { L"Lifebar Portrait", 0xdabc0, 0xdabe0, indexKOF94Sprites_Kyo, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdabe0, 0xdac00, indexKOF94Sprites_Kyo, 0x00 },
};

const sGame_PaletteDataset KOF95_A_BENIMARU_MAIN_PALETTES[] =
{
    { L"Benimaru", 0xdac00, 0xdac20, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0xdac20, 0xdac40 },
    { L"MAX Flash", 0xdac40, 0xdac60, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0xdac60, 0xdac80 },
    { L"Electric Palette?", 0xdac80, 0xdaca0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0xdaca0, 0xdacc0 },
    { L"Win Portrait?", 0xdacc0, 0xdad20 },
    { L"Extra 5", 0xdad20, 0xdad40 },
    { L"Extra 6", 0xdad40, 0xdad60 },
    { L"Extra 7", 0xdad60, 0xdad80 },
    { L"Extra 8", 0xdad80, 0xdada0 },
    { L"Extra 9", 0xdada0, 0xdadc0 },
    { L"Lifebar Portrait", 0xdadc0, 0xdade0, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdade0, 0xdae00, indexKOF94Sprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF95_A_BENIMARU_ALT_PALETTES[] =
{
    { L"Benimaru", 0xdae00, 0xdae20, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0xdae20, 0xdae40 },
    { L"MAX Flash", 0xdae40, 0xdae60, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0xdae60, 0xdae80 },
    { L"Electric Palette?", 0xdae80, 0xdaea0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0xdaea0, 0xdaec0 },
    { L"Win Portrait?", 0xdaec0, 0xdaf20 },
    { L"Extra 5", 0xdaf20, 0xdaf40 },
    { L"Extra 6", 0xdaf40, 0xdaf60 },
    { L"Extra 7", 0xdaf60, 0xdaf80 },
    { L"Extra 8", 0xdaf80, 0xdafa0 },
    { L"Extra 9", 0xdafa0, 0xdafc0 },
    { L"Lifebar Portrait", 0xdafc0, 0xdafe0, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdafe0, 0xdb000, indexKOF94Sprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF95_A_DAIMON_MAIN_PALETTES[] =
{
    { L"Daimon", 0xdb000, 0xdb020, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 1", 0xdb020, 0xdb040 },
    { L"MAX Flash", 0xdb040, 0xdb060, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 2", 0xdb060, 0xdb080 },
    { L"Electric Palette?", 0xdb080, 0xdb0a0, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 4", 0xdb0a0, 0xdb0c0 },
    { L"Win Portrait?", 0xdb0c0, 0xdb120 },
    { L"Extra 5", 0xdb120, 0xdb140 },
    { L"Extra 6", 0xdb140, 0xdb160 },
    { L"Extra 7", 0xdb160, 0xdb180 },
    { L"Extra 8", 0xdb180, 0xdb1a0 },
    { L"Extra 9", 0xdb1a0, 0xdb1c0 },
    { L"Lifebar Portrait", 0xdb1c0, 0xdb1e0, indexKOF94Sprites_Daimon, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdb1e0, 0xdb200, indexKOF94Sprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF95_A_DAIMON_ALT_PALETTES[] =
{
    { L"Daimon", 0xdb200, 0xdb220, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 1", 0xdb220, 0xdb240 },
    { L"MAX Flash", 0xdb240, 0xdb260, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 2", 0xdb260, 0xdb280 },
    { L"Electric Palette?", 0xdb280, 0xdb2a0, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 4", 0xdb2a0, 0xdb2c0 },
    { L"Win Portrait?", 0xdb2c0, 0xdb320 },
    { L"Extra 5", 0xdb320, 0xdb340 },
    { L"Extra 6", 0xdb340, 0xdb360 },
    { L"Extra 7", 0xdb360, 0xdb380 },
    { L"Extra 8", 0xdb380, 0xdb3a0 },
    { L"Extra 9", 0xdb3a0, 0xdb3c0 },
    { L"Lifebar Portrait", 0xdb3c0, 0xdb3e0, indexKOF94Sprites_Daimon, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdb3e0, 0xdb400, indexKOF94Sprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF95_A_IORI_MAIN_PALETTES[] =
{
    { L"Iori", 0xdb400, 0xdb420, indexKOF95Sprites_Iori, 0x00 },
    { L"Extra 1", 0xdb420, 0xdb440 },
    { L"MAX Flash", 0xdb440, 0xdb460, indexKOF95Sprites_Iori, 0x00 },
    { L"Extra 2", 0xdb460, 0xdb480 },
    { L"Electric Palette?", 0xdb480, 0xdb4a0, indexKOF95Sprites_Iori, 0x00 },
    { L"Extra 4", 0xdb4a0, 0xdb4c0 },
    { L"Win Portrait?", 0xdb4c0, 0xdb520 },
    { L"Extra 5", 0xdb520, 0xdb540 },
    { L"Extra 6", 0xdb540, 0xdb560 },
    { L"Extra 7", 0xdb560, 0xdb580 },
    { L"Extra 8", 0xdb580, 0xdb5a0 },
    { L"Extra 9", 0xdb5a0, 0xdb5c0 },
    { L"Lifebar Portrait", 0xdb5c0, 0xdb5e0, indexKOF95Sprites_Iori, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdb5e0, 0xdb600, indexKOF95Sprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF95_A_IORI_ALT_PALETTES[] =
{
    { L"Iori", 0xdb600, 0xdb620, indexKOF95Sprites_Iori, 0x00 },
    { L"Extra 1", 0xdb620, 0xdb640 },
    { L"MAX Flash", 0xdb640, 0xdb660, indexKOF95Sprites_Iori, 0x00 },
    { L"Extra 2", 0xdb660, 0xdb680 },
    { L"Electric Palette?", 0xdb680, 0xdb6a0, indexKOF95Sprites_Iori, 0x00 },
    { L"Extra 4", 0xdb6a0, 0xdb6c0 },
    { L"Win Portrait?", 0xdb6c0, 0xdb720 },
    { L"Extra 5", 0xdb720, 0xdb740 },
    { L"Extra 6", 0xdb740, 0xdb760 },
    { L"Extra 7", 0xdb760, 0xdb780 },
    { L"Extra 8", 0xdb780, 0xdb7a0 },
    { L"Extra 9", 0xdb7a0, 0xdb7c0 },
    { L"Lifebar Portrait", 0xdb7c0, 0xdb7e0, indexKOF95Sprites_Iori, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdb7e0, 0xdb800, indexKOF95Sprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF95_A_EIJI_MAIN_PALETTES[] =
{
    { L"Eiji", 0xdb800, 0xdb820, indexKOF95Sprites_Eiji, 0x00 },
    { L"Extra 1", 0xdb820, 0xdb840 },
    { L"MAX Flash", 0xdb840, 0xdb860, indexKOF95Sprites_Eiji, 0x00 },
    { L"Extra 2", 0xdb860, 0xdb880 },
    { L"Electric Palette?", 0xdb880, 0xdb8a0, indexKOF95Sprites_Eiji, 0x00 },
    { L"Extra 4", 0xdb8a0, 0xdb8c0 },
    { L"Win Portrait?", 0xdb8c0, 0xdb920 },
    { L"Extra 5", 0xdb920, 0xdb940 },
    { L"Extra 6", 0xdb940, 0xdb960 },
    { L"Extra 7", 0xdb960, 0xdb980 },
    { L"Extra 8", 0xdb980, 0xdb9a0 },
    { L"Extra 9", 0xdb9a0, 0xdb9c0 },
    { L"Lifebar Portrait", 0xdb9c0, 0xdb9e0, indexKOF95Sprites_Eiji, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdb9e0, 0xdba00, indexKOF95Sprites_Eiji, 0x00 },
};

const sGame_PaletteDataset KOF95_A_EIJI_ALT_PALETTES[] =
{
    { L"Eiji", 0xdba00, 0xdba20, indexKOF95Sprites_Eiji, 0x00 },
    { L"Extra 1", 0xdba20, 0xdba40 },
    { L"MAX Flash", 0xdba40, 0xdba60, indexKOF95Sprites_Eiji, 0x00 },
    { L"Extra 2", 0xdba60, 0xdba80 },
    { L"Electric Palette?", 0xdba80, 0xdbaa0, indexKOF95Sprites_Eiji, 0x00 },
    { L"Extra 4", 0xdbaa0, 0xdbac0 },
    { L"Win Portrait?", 0xdbac0, 0xdbb20 },
    { L"Extra 5", 0xdbb20, 0xdbb40 },
    { L"Extra 6", 0xdbb40, 0xdbb60 },
    { L"Extra 7", 0xdbb60, 0xdbb80 },
    { L"Extra 8", 0xdbb80, 0xdbba0 },
    { L"Extra 9", 0xdbba0, 0xdbbc0 },
    { L"Lifebar Portrait", 0xdbbc0, 0xdbbe0, indexKOF95Sprites_Eiji, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdbbe0, 0xdbc00, indexKOF95Sprites_Eiji, 0x00 },
};

const sGame_PaletteDataset KOF95_A_BILLY_MAIN_PALETTES[] =
{
    { L"Billy", 0xdbc00, 0xdbc20, indexKOF95Sprites_Billy, 0x00 },
    { L"Extra 1", 0xdbc20, 0xdbc40 },
    { L"MAX Flash", 0xdbc40, 0xdbc60, indexKOF95Sprites_Billy, 0x00 },
    { L"Extra 2", 0xdbc60, 0xdbc80 },
    { L"Electric Palette?", 0xdbc80, 0xdbca0, indexKOF95Sprites_Billy, 0x00 },
    { L"Extra 4", 0xdbca0, 0xdbcc0 },
    { L"Win Portrait?", 0xdbcc0, 0xdbd20 },
    { L"Extra 5", 0xdbd20, 0xdbd40 },
    { L"Extra 6", 0xdbd40, 0xdbd60 },
    { L"Extra 7", 0xdbd60, 0xdbd80 },
    { L"Extra 8", 0xdbd80, 0xdbda0 },
    { L"Extra 9", 0xdbda0, 0xdbdc0 },
    { L"Lifebar Portrait", 0xdbdc0, 0xdbde0, indexKOF95Sprites_Billy, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdbde0, 0xdbe00, indexKOF95Sprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF95_A_BILLY_ALT_PALETTES[] =
{
    { L"Billy", 0xdbe00, 0xdbe20, indexKOF95Sprites_Billy, 0x00 },
    { L"Extra 1", 0xdbe20, 0xdbe40 },
    { L"MAX Flash", 0xdbe40, 0xdbe60, indexKOF95Sprites_Billy, 0x00 },
    { L"Extra 2", 0xdbe60, 0xdbe80 },
    { L"Electric Palette?", 0xdbe80, 0xdbea0, indexKOF95Sprites_Billy, 0x00 },
    { L"Extra 4", 0xdbea0, 0xdbec0 },
    { L"Win Portrait?", 0xdbec0, 0xdbf20 },
    { L"Extra 5", 0xdbf20, 0xdbf40 },
    { L"Extra 6", 0xdbf40, 0xdbf60 },
    { L"Extra 7", 0xdbf60, 0xdbf80 },
    { L"Extra 8", 0xdbf80, 0xdbfa0 },
    { L"Extra 9", 0xdbfa0, 0xdbfc0 },
    { L"Lifebar Portrait", 0xdbfc0, 0xdbfe0, indexKOF95Sprites_Billy, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdbfe0, 0xdc000, indexKOF95Sprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KIM_MAIN_PALETTES[] =
{
    { L"Kim", 0xdc000, 0xdc020, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 1", 0xdc020, 0xdc040 },
    { L"MAX Flash", 0xdc040, 0xdc060, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 2", 0xdc060, 0xdc080 },
    { L"Electric Palette?", 0xdc080, 0xdc0a0, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 4", 0xdc0a0, 0xdc0c0 },
    { L"Win Portrait?", 0xdc0c0, 0xdc120 },
    { L"Extra 5", 0xdc120, 0xdc140 },
    { L"Extra 6", 0xdc140, 0xdc160 },
    { L"Extra 7", 0xdc160, 0xdc180 },
    { L"Extra 8", 0xdc180, 0xdc1a0 },
    { L"Extra 9", 0xdc1a0, 0xdc1c0 },
    { L"Lifebar Portrait", 0xdc1c0, 0xdc1e0, indexKOF94Sprites_Kim, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdc1e0, 0xdc200, indexKOF94Sprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KIM_ALT_PALETTES[] =
{
    { L"Kim", 0xdc200, 0xdc220, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 1", 0xdc220, 0xdc240 },
    { L"MAX Flash", 0xdc240, 0xdc260, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 2", 0xdc260, 0xdc280 },
    { L"Electric Palette?", 0xdc280, 0xdc2a0, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 4", 0xdc2a0, 0xdc2c0 },
    { L"Win Portrait?", 0xdc2c0, 0xdc320 },
    { L"Extra 5", 0xdc320, 0xdc340 },
    { L"Extra 6", 0xdc340, 0xdc360 },
    { L"Extra 7", 0xdc360, 0xdc380 },
    { L"Extra 8", 0xdc380, 0xdc3a0 },
    { L"Extra 9", 0xdc3a0, 0xdc3c0 },
    { L"Lifebar Portrait", 0xdc3c0, 0xdc3e0, indexKOF94Sprites_Kim, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdc3e0, 0xdc400, indexKOF94Sprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CHANG_MAIN_PALETTES[] =
{
    { L"Chang", 0xdc400, 0xdc420, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0xdc420, 0xdc440, indexKOF95Sprites_Chang, 0x01 },
    { L"MAX Flash", 0xdc440, 0xdc460, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"MAX Flash Extra", 0xdc460, 0xdc480, indexKOF95Sprites_Chang, 0x01 },
    { L"Electric Palette?", 0xdc480, 0xdc4a0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Electric Palette? Extra", 0xdc4a0, 0xdc4c0, indexKOF95Sprites_Chang, 0x01 },
    { L"Win Portrait?", 0xdc4c0, 0xdc520 },
    { L"Extra 5", 0xdc520, 0xdc540 },
    { L"Extra 6", 0xdc540, 0xdc560 },
    { L"Extra 7", 0xdc560, 0xdc580 },
    { L"Extra 8", 0xdc580, 0xdc5a0 },
    { L"Extra 9", 0xdc5a0, 0xdc5c0 },
    { L"Lifebar Portrait", 0xdc5c0, 0xdc5e0, indexKOF95Sprites_Chang, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdc5e0, 0xdc600, indexKOF95Sprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CHANG_ALT_PALETTES[] =
{
    { L"Chang", 0xdc600, 0xdc620, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0xdc620, 0xdc640, indexKOF95Sprites_Chang, 0x01 },
    { L"MAX Flash", 0xdc640, 0xdc660, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"MAX Flash Extra", 0xdc660, 0xdc680, indexKOF95Sprites_Chang, 0x01 },
    { L"Electric Palette?", 0xdc680, 0xdc6a0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Electric Palette? Extra", 0xdc6a0, 0xdc6c0, indexKOF95Sprites_Chang, 0x01 },
    { L"Win Portrait?", 0xdc6c0, 0xdc720 },
    { L"Extra 5", 0xdc720, 0xdc740 },
    { L"Extra 6", 0xdc740, 0xdc760 },
    { L"Extra 7", 0xdc760, 0xdc780 },
    { L"Extra 8", 0xdc780, 0xdc7a0 },
    { L"Extra 9", 0xdc7a0, 0xdc7c0 },
    { L"Lifebar Portrait", 0xdc7c0, 0xdc7e0, indexKOF95Sprites_Chang, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdc7e0, 0xdc800, indexKOF95Sprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CHOI_MAIN_PALETTES[] =
{
    { L"Choi", 0xdc800, 0xdc820, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 1", 0xdc820, 0xdc840 },
    { L"MAX Flash", 0xdc840, 0xdc860, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 2", 0xdc860, 0xdc880 },
    { L"Electric Palette?", 0xdc880, 0xdc8a0, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 4", 0xdc8a0, 0xdc8c0 },
    { L"Win Portrait?", 0xdc8c0, 0xdc920 },
    { L"Extra 5", 0xdc920, 0xdc940 },
    { L"Extra 6", 0xdc940, 0xdc960 },
    { L"Extra 7", 0xdc960, 0xdc980 },
    { L"Extra 8", 0xdc980, 0xdc9a0 },
    { L"Extra 9", 0xdc9a0, 0xdc9c0 },
    { L"Lifebar Portrait", 0xdc9c0, 0xdc9e0, indexKOF95Sprites_Chin, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdc9e0, 0xdca00, indexKOF95Sprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF95_A_CHOI_ALT_PALETTES[] =
{
    { L"Choi", 0xdca00, 0xdca20, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 1", 0xdca20, 0xdca40 },
    { L"MAX Flash", 0xdca40, 0xdca60, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 2", 0xdca60, 0xdca80 },
    { L"Electric Palette?", 0xdca80, 0xdcaa0, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 4", 0xdcaa0, 0xdcac0 },
    { L"Win Portrait?", 0xdcac0, 0xdcb20 },
    { L"Extra 5", 0xdcb20, 0xdcb40 },
    { L"Extra 6", 0xdcb40, 0xdcb60 },
    { L"Extra 7", 0xdcb60, 0xdcb80 },
    { L"Extra 8", 0xdcb80, 0xdcba0 },
    { L"Extra 9", 0xdcba0, 0xdcbc0 },
    { L"Lifebar Portrait", 0xdcbc0, 0xdcbe0, indexKOF95Sprites_Chin, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdcbe0, 0xdcc00, indexKOF95Sprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF95_A_TERRY_MAIN_PALETTES[] =
{
    { L"Terry", 0xdcc00, 0xdcc20, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 1", 0xdcc20, 0xdcc40 },
    { L"MAX Flash", 0xdcc40, 0xdcc60, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 2", 0xdcc60, 0xdcc80 },
    { L"Electric Palette?", 0xdcc80, 0xdcca0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 4", 0xdcca0, 0xdccc0 },
    { L"Win Portrait?", 0xdccc0, 0xdcd20 },
    { L"Extra 5", 0xdcd20, 0xdcd40 },
    { L"Extra 6", 0xdcd40, 0xdcd60 },
    { L"Extra 7", 0xdcd60, 0xdcd80 },
    { L"Extra 8", 0xdcd80, 0xdcda0 },
    { L"Extra 9", 0xdcda0, 0xdcdc0 },
    { L"Lifebar Portrait", 0xdcdc0, 0xdcde0, indexKOF94Sprites_Terry, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdcde0, 0xdce00, indexKOF94Sprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF95_A_TERRY_ALT_PALETTES[] =
{
    { L"Terry", 0xdce00, 0xdce20, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 1", 0xdce20, 0xdce40 },
    { L"MAX Flash", 0xdce40, 0xdce60, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 2", 0xdce60, 0xdce80 },
    { L"Electric Palette?", 0xdce80, 0xdcea0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 4", 0xdcea0, 0xdcec0 },
    { L"Win Portrait?", 0xdcec0, 0xdcf20 },
    { L"Extra 5", 0xdcf20, 0xdcf40 },
    { L"Extra 6", 0xdcf40, 0xdcf60 },
    { L"Extra 7", 0xdcf60, 0xdcf80 },
    { L"Extra 8", 0xdcf80, 0xdcfa0 },
    { L"Extra 9", 0xdcfa0, 0xdcfc0 },
    { L"Lifebar Portrait", 0xdcfc0, 0xdcfe0, indexKOF94Sprites_Terry, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdcfe0, 0xdd000, indexKOF94Sprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF95_A_ANDY_MAIN_PALETTES[] =
{
    { L"Andy", 0xdd000, 0xdd020, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 1", 0xdd020, 0xdd040 },
    { L"MAX Flash", 0xdd040, 0xdd060, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 2", 0xdd060, 0xdd080 },
    { L"Electric Palette?", 0xdd080, 0xdd0a0, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 4", 0xdd0a0, 0xdd0c0 },
    { L"Win Portrait?", 0xdd0c0, 0xdd120 },
    { L"Extra 5", 0xdd120, 0xdd140 },
    { L"Extra 6", 0xdd140, 0xdd160 },
    { L"Extra 7", 0xdd160, 0xdd180 },
    { L"Extra 8", 0xdd180, 0xdd1a0 },
    { L"Extra 9", 0xdd1a0, 0xdd1c0 },
    { L"Lifebar Portrait", 0xdd1c0, 0xdd1e0, indexKOF94Sprites_Andy, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdd1e0, 0xdd200, indexKOF94Sprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF95_A_ANDY_ALT_PALETTES[] =
{
    { L"Andy", 0xdd200, 0xdd220, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 1", 0xdd220, 0xdd240 },
    { L"MAX Flash", 0xdd240, 0xdd260, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 2", 0xdd260, 0xdd280 },
    { L"Electric Palette?", 0xdd280, 0xdd2a0, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 4", 0xdd2a0, 0xdd2c0 },
    { L"Win Portrait?", 0xdd2c0, 0xdd320 },
    { L"Extra 5", 0xdd320, 0xdd340 },
    { L"Extra 6", 0xdd340, 0xdd360 },
    { L"Extra 7", 0xdd360, 0xdd380 },
    { L"Extra 8", 0xdd380, 0xdd3a0 },
    { L"Extra 9", 0xdd3a0, 0xdd3c0 },
    { L"Lifebar Portrait", 0xdd3c0, 0xdd3e0, indexKOF94Sprites_Andy, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdd3e0, 0xdd400, indexKOF94Sprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF95_A_JOE_MAIN_PALETTES[] =
{
    { L"Joe", 0xdd400, 0xdd420, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 1", 0xdd420, 0xdd440 },
    { L"MAX Flash", 0xdd440, 0xdd460, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 2", 0xdd460, 0xdd480 },
    { L"Electric Palette?", 0xdd480, 0xdd4a0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 4", 0xdd4a0, 0xdd4c0 },
    { L"Win Portrait?", 0xdd4c0, 0xdd520 },
    { L"Extra 5", 0xdd520, 0xdd540 },
    { L"Extra 6", 0xdd540, 0xdd560 },
    { L"Extra 7", 0xdd560, 0xdd580 },
    { L"Extra 8", 0xdd580, 0xdd5a0 },
    { L"Extra 9", 0xdd5a0, 0xdd5c0 },
    { L"Lifebar Portrait", 0xdd5c0, 0xdd5e0, indexKOF94Sprites_Joe, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdd5e0, 0xdd600, indexKOF94Sprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF95_A_JOE_ALT_PALETTES[] =
{
    { L"Joe", 0xdd600, 0xdd620, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 1", 0xdd620, 0xdd640 },
    { L"MAX Flash", 0xdd640, 0xdd660, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 2", 0xdd660, 0xdd680 },
    { L"Electric Palette?", 0xdd680, 0xdd6a0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 4", 0xdd6a0, 0xdd6c0 },
    { L"Win Portrait?", 0xdd6c0, 0xdd720 },
    { L"Extra 5", 0xdd720, 0xdd740 },
    { L"Extra 6", 0xdd740, 0xdd760 },
    { L"Extra 7", 0xdd760, 0xdd780 },
    { L"Extra 8", 0xdd780, 0xdd7a0 },
    { L"Extra 9", 0xdd7a0, 0xdd7c0 },
    { L"Lifebar Portrait", 0xdd7c0, 0xdd7e0, indexKOF94Sprites_Joe, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdd7e0, 0xdd800, indexKOF94Sprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF95_A_RYO_MAIN_PALETTES[] =
{
    { L"Ryo", 0xdd800, 0xdd820, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 1", 0xdd820, 0xdd840 },
    { L"MAX Flash", 0xdd840, 0xdd860, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 2", 0xdd860, 0xdd880 },
    { L"Electric Palette?", 0xdd880, 0xdd8a0, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 4", 0xdd8a0, 0xdd8c0 },
    { L"Win Portrait?", 0xdd8c0, 0xdd920 },
    { L"Extra 5", 0xdd920, 0xdd940 },
    { L"Extra 6", 0xdd940, 0xdd960 },
    { L"Extra 7", 0xdd960, 0xdd980 },
    { L"Extra 8", 0xdd980, 0xdd9a0 },
    { L"Extra 9", 0xdd9a0, 0xdd9c0 },
    { L"Lifebar Portrait", 0xdd9c0, 0xdd9e0, indexKOF94Sprites_Ryo, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdd9e0, 0xdda00, indexKOF94Sprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF95_A_RYO_ALT_PALETTES[] =
{
    { L"Ryo", 0xdda00, 0xdda20, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 1", 0xdda20, 0xdda40 },
    { L"MAX Flash", 0xdda40, 0xdda60, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 2", 0xdda60, 0xdda80 },
    { L"Electric Palette?", 0xdda80, 0xddaa0, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 4", 0xddaa0, 0xddac0 },
    { L"Win Portrait?", 0xddac0, 0xddb20 },
    { L"Extra 5", 0xddb20, 0xddb40 },
    { L"Extra 6", 0xddb40, 0xddb60 },
    { L"Extra 7", 0xddb60, 0xddb80 },
    { L"Extra 8", 0xddb80, 0xddba0 },
    { L"Extra 9", 0xddba0, 0xddbc0 },
    { L"Lifebar Portrait", 0xddbc0, 0xddbe0, indexKOF94Sprites_Ryo, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xddbe0, 0xddc00, indexKOF94Sprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF95_A_ROBERT_MAIN_PALETTES[] =
{
    { L"Robert", 0xddc00, 0xddc20, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 1", 0xddc20, 0xddc40 },
    { L"MAX Flash", 0xddc40, 0xddc60, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 2", 0xddc60, 0xddc80 },
    { L"Electric Palette?", 0xddc80, 0xddca0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 4", 0xddca0, 0xddcc0 },
    { L"Win Portrait?", 0xddcc0, 0xddd20 },
    { L"Extra 5", 0xddd20, 0xddd40 },
    { L"Extra 6", 0xddd40, 0xddd60 },
    { L"Extra 7", 0xddd60, 0xddd80 },
    { L"Extra 8", 0xddd80, 0xddda0 },
    { L"Extra 9", 0xddda0, 0xdddc0 },
    { L"Lifebar Portrait", 0xdddc0, 0xddde0, indexKOF94Sprites_Robert, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xddde0, 0xdde00, indexKOF94Sprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF95_A_ROBERT_ALT_PALETTES[] =
{
    { L"Robert", 0xdde00, 0xdde20, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 1", 0xdde20, 0xdde40 },
    { L"MAX Flash", 0xdde40, 0xdde60, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 2", 0xdde60, 0xdde80 },
    { L"Electric Palette?", 0xdde80, 0xddea0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 4", 0xddea0, 0xddec0 },
    { L"Win Portrait?", 0xddec0, 0xddf20 },
    { L"Extra 5", 0xddf20, 0xddf40 },
    { L"Extra 6", 0xddf40, 0xddf60 },
    { L"Extra 7", 0xddf60, 0xddf80 },
    { L"Extra 8", 0xddf80, 0xddfa0 },
    { L"Extra 9", 0xddfa0, 0xddfc0 },
    { L"Lifebar Portrait", 0xddfc0, 0xddfe0, indexKOF94Sprites_Robert, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xddfe0, 0xde000, indexKOF94Sprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF95_A_TAKUMA_MAIN_PALETTES[] =
{
    { L"Takuma", 0xde000, 0xde020, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 1", 0xde020, 0xde040 },
    { L"MAX Flash", 0xde040, 0xde060, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 2", 0xde060, 0xde080 },
    { L"Electric Palette?", 0xde080, 0xde0a0, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 4", 0xde0a0, 0xde0c0 },
    { L"Win Portrait?", 0xde0c0, 0xde120 },
    { L"Extra 5", 0xde120, 0xde140 },
    { L"Extra 6", 0xde140, 0xde160 },
    { L"Extra 7", 0xde160, 0xde180 },
    { L"Extra 8", 0xde180, 0xde1a0 },
    { L"Extra 9", 0xde1a0, 0xde1c0 },
    { L"Lifebar Portrait", 0xde1c0, 0xde1e0, indexKOF94Sprites_Takuma, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xde1e0, 0xde200, indexKOF94Sprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF95_A_TAKUMA_ALT_PALETTES[] =
{
    { L"Takuma", 0xde200, 0xde220, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 1", 0xde220, 0xde240 },
    { L"MAX Flash", 0xde240, 0xde260, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 2", 0xde260, 0xde280 },
    { L"Electric Palette?", 0xde280, 0xde2a0, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 4", 0xde2a0, 0xde2c0 },
    { L"Win Portrait?", 0xde2c0, 0xde320 },
    { L"Extra 5", 0xde320, 0xde340 },
    { L"Extra 6", 0xde340, 0xde360 },
    { L"Extra 7", 0xde360, 0xde380 },
    { L"Extra 8", 0xde380, 0xde3a0 },
    { L"Extra 9", 0xde3a0, 0xde3c0 },
    { L"Lifebar Portrait", 0xde3c0, 0xde3e0, indexKOF94Sprites_Takuma, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xde3e0, 0xde400, indexKOF94Sprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF95_A_YURI_MAIN_PALETTES[] =
{
    { L"Yuri", 0xde400, 0xde420, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 1", 0xde420, 0xde440 },
    { L"MAX Flash", 0xde440, 0xde460, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 2", 0xde460, 0xde480 },
    { L"Electric Palette?", 0xde480, 0xde4a0, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 4", 0xde4a0, 0xde4c0 },
    { L"Win Portrait?", 0xde4c0, 0xde520 },
    { L"Extra 5", 0xde520, 0xde540 },
    { L"Extra 6", 0xde540, 0xde560 },
    { L"Extra 7", 0xde560, 0xde580 },
    { L"Extra 8", 0xde580, 0xde5a0 },
    { L"Extra 9", 0xde5a0, 0xde5c0 },
    { L"Lifebar Portrait", 0xde5c0, 0xde5e0, indexKOF94Sprites_Yuri, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xde5e0, 0xde600, indexKOF94Sprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF95_A_YURI_ALT_PALETTES[] =
{
    { L"Yuri", 0xde600, 0xde620, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 1", 0xde620, 0xde640 },
    { L"MAX Flash", 0xde640, 0xde660, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 2", 0xde660, 0xde680 },
    { L"Electric Palette?", 0xde680, 0xde6a0, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 4", 0xde6a0, 0xde6c0 },
    { L"Win Portrait?", 0xde6c0, 0xde720 },
    { L"Extra 5", 0xde720, 0xde740 },
    { L"Extra 6", 0xde740, 0xde760 },
    { L"Extra 7", 0xde760, 0xde780 },
    { L"Extra 8", 0xde780, 0xde7a0 },
    { L"Extra 9", 0xde7a0, 0xde7c0 },
    { L"Lifebar Portrait", 0xde7c0, 0xde7e0, indexKOF94Sprites_Yuri, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xde7e0, 0xde800, indexKOF94Sprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF95_A_MAI_MAIN_PALETTES[] =
{
    { L"Mai", 0xde800, 0xde820, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 1", 0xde820, 0xde840 },
    { L"MAX Flash", 0xde840, 0xde860, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 2", 0xde860, 0xde880 },
    { L"Electric Palette?", 0xde880, 0xde8a0, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 4", 0xde8a0, 0xde8c0 },
    { L"Win Portrait?", 0xde8c0, 0xde920 },
    { L"Extra 5", 0xde920, 0xde940 },
    { L"Extra 6", 0xde940, 0xde960 },
    { L"Extra 7", 0xde960, 0xde980 },
    { L"Extra 8", 0xde980, 0xde9a0 },
    { L"Extra 9", 0xde9a0, 0xde9c0 },
    { L"Lifebar Portrait", 0xde9c0, 0xde9e0, indexKOF94Sprites_Mai, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xde9e0, 0xdea00, indexKOF94Sprites_Mai, 0x00 },
};

const sGame_PaletteDataset KOF95_A_MAI_ALT_PALETTES[] =
{
    { L"Mai", 0xdea00, 0xdea20, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 1", 0xdea20, 0xdea40 },
    { L"MAX Flash", 0xdea40, 0xdea60, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 2", 0xdea60, 0xdea80 },
    { L"Electric Palette?", 0xdea80, 0xdeaa0, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 4", 0xdeaa0, 0xdeac0 },
    { L"Win Portrait?", 0xdeac0, 0xdeb20 },
    { L"Extra 5", 0xdeb20, 0xdeb40 },
    { L"Extra 6", 0xdeb40, 0xdeb60 },
    { L"Extra 7", 0xdeb60, 0xdeb80 },
    { L"Extra 8", 0xdeb80, 0xdeba0 },
    { L"Extra 9", 0xdeba0, 0xdebc0 },
    { L"Lifebar Portrait", 0xdebc0, 0xdebe0, indexKOF94Sprites_Mai, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdebe0, 0xdec00, indexKOF94Sprites_Mai, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KING_MAIN_PALETTES[] =
{
    { L"King", 0xdec00, 0xdec20, indexKOF94Sprites_King, 0x00 },
    { L"Extra 1", 0xdec20, 0xdec40 },
    { L"MAX Flash", 0xdec40, 0xdec60, indexKOF94Sprites_King, 0x00 },
    { L"Extra 2", 0xdec60, 0xdec80 },
    { L"Electric Palette?", 0xdec80, 0xdeca0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 4", 0xdeca0, 0xdecc0 },
    { L"Win Portrait?", 0xdecc0, 0xded20 },
    { L"Extra 5", 0xded20, 0xded40 },
    { L"Extra 6", 0xded40, 0xded60 },
    { L"Extra 7", 0xded60, 0xded80 },
    { L"Extra 8", 0xded80, 0xdeda0 },
    { L"Extra 9", 0xdeda0, 0xdedc0 },
    { L"Lifebar Portrait", 0xdedc0, 0xdede0, indexKOF94Sprites_King, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdede0, 0xdee00, indexKOF94Sprites_King, 0x00 },
};

const sGame_PaletteDataset KOF95_A_KING_ALT_PALETTES[] =
{
    { L"King", 0xdee00, 0xdee20, indexKOF94Sprites_King, 0x00 },
    { L"Extra 1", 0xdee20, 0xdee40 },
    { L"MAX Flash", 0xdee40, 0xdee60, indexKOF94Sprites_King, 0x00 },
    { L"Extra 2", 0xdee60, 0xdee80 },
    { L"Electric Palette?", 0xdee80, 0xdeea0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 4", 0xdeea0, 0xdeec0 },
    { L"Win Portrait?", 0xdeec0, 0xdef20 },
    { L"Extra 5", 0xdef20, 0xdef40 },
    { L"Extra 6", 0xdef40, 0xdef60 },
    { L"Extra 7", 0xdef60, 0xdef80 },
    { L"Extra 8", 0xdef80, 0xdefa0 },
    { L"Extra 9", 0xdefa0, 0xdefc0 },
    { L"Lifebar Portrait", 0xdefc0, 0xdefe0, indexKOF94Sprites_King, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdefe0, 0xdf000, indexKOF94Sprites_King, 0x00 },
};

const sGame_PaletteDataset KOF95_A_SAISYU_MAIN_PALETTES[] =
{
    { L"Saisyu", 0xdf000, 0xdf020, indexKOF95Sprites_Saisyu, 0x00 },
    { L"Extra 1", 0xdf020, 0xdf040 },
    { L"MAX Flash", 0xdf040, 0xdf060, indexKOF95Sprites_Saisyu, 0x00 },
    { L"Extra 2", 0xdf060, 0xdf080 },
    { L"Electric Palette?", 0xdf080, 0xdf0a0, indexKOF95Sprites_Saisyu, 0x00 },
    { L"Extra 4", 0xdf0a0, 0xdf0c0 },
    { L"Win Portrait?", 0xdf0c0, 0xdf120 },
    { L"Extra 5", 0xdf120, 0xdf140 },
    { L"Extra 6", 0xdf140, 0xdf160 },
    { L"Extra 7", 0xdf160, 0xdf180 },
    { L"Extra 8", 0xdf180, 0xdf1a0 },
    { L"Extra 9", 0xdf1a0, 0xdf1c0 },
    { L"Lifebar Portrait", 0xdf1c0, 0xdf1e0, indexKOF95Sprites_Saisyu, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdf1e0, 0xdf200, indexKOF95Sprites_Saisyu, 0x00 },
};

const sGame_PaletteDataset KOF95_A_SAISYU_ALT_PALETTES[] =
{
    { L"Saisyu", 0xdf200, 0xdf220, indexKOF95Sprites_Saisyu, 0x00 },
    { L"Extra 1", 0xdf220, 0xdf240 },
    { L"MAX Flash", 0xdf240, 0xdf260, indexKOF95Sprites_Saisyu, 0x00 },
    { L"Extra 2", 0xdf260, 0xdf280 },
    { L"Electric Palette?", 0xdf280, 0xdf2a0, indexKOF95Sprites_Saisyu, 0x00 },
    { L"Extra 4", 0xdf2a0, 0xdf2c0 },
    { L"Win Portrait?", 0xdf2c0, 0xdf320 },
    { L"Extra 5", 0xdf320, 0xdf340 },
    { L"Extra 6", 0xdf340, 0xdf360 },
    { L"Extra 7", 0xdf360, 0xdf380 },
    { L"Extra 8", 0xdf380, 0xdf3a0 },
    { L"Extra 9", 0xdf3a0, 0xdf3c0 },
    { L"Lifebar Portrait", 0xdf3c0, 0xdf3e0, indexKOF95Sprites_Saisyu, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdf3e0, 0xdf400, indexKOF95Sprites_Saisyu, 0x00 },
};

const sGame_PaletteDataset KOF95_A_OMEGARUGAL_MAIN_PALETTES[] =
{
    { L"Omega Rugal", 0xdf400, 0xdf420, indexKOF95Sprites_OmegaRugal, 0x00 },
    { L"Extra 1", 0xdf420, 0xdf440, indexKOF95Sprites_OmegaRugal, 0x01 },
    { L"MAX Flash", 0xdf440, 0xdf460, indexKOF95Sprites_OmegaRugal, 0x00 },
    { L"MAX Flash Extra", 0xdf460, 0xdf480, indexKOF95Sprites_OmegaRugal, 0x01 },
    { L"Electric Palette?", 0xdf480, 0xdf4a0, indexKOF95Sprites_OmegaRugal, 0x00 },
    { L"Electric Palette? Extra", 0xdf4a0, 0xdf4c0, indexKOF95Sprites_OmegaRugal, 0x01 },
    { L"Win Portrait?", 0xdf4c0, 0xdf520 },
    { L"Extra 5", 0xdf520, 0xdf540 },
    { L"Extra 6", 0xdf540, 0xdf560 },
    { L"Extra 7", 0xdf560, 0xdf580 },
    { L"Extra 8", 0xdf580, 0xdf5a0 },
    { L"Extra 9", 0xdf5a0, 0xdf5c0 },
    { L"Lifebar Portrait", 0xdf5c0, 0xdf5e0, indexKOF95Sprites_OmegaRugal, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdf5e0, 0xdf600, indexKOF95Sprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF95_A_OMEGARUGAL_ALT_PALETTES[] =
{
    { L"Omega Rugal", 0xdf600, 0xdf620, indexKOF95Sprites_OmegaRugal, 0x00 },
    { L"Extra 1", 0xdf620, 0xdf640, indexKOF95Sprites_OmegaRugal, 0x01 },
    { L"MAX Flash", 0xdf640, 0xdf660, indexKOF95Sprites_OmegaRugal, 0x00 },
    { L"MAX Flash Extra", 0xdf660, 0xdf680, indexKOF95Sprites_OmegaRugal, 0x01 },
    { L"Electric Palette?", 0xdf680, 0xdf6a0, indexKOF95Sprites_OmegaRugal, 0x00 },
    { L"Electric Palette? Extra", 0xdf6a0, 0xdf6c0, indexKOF95Sprites_OmegaRugal, 0x01 },
    { L"Win Portrait?", 0xdf6c0, 0xdf720 },
    { L"Extra 5", 0xdf720, 0xdf740 },
    { L"Extra 6", 0xdf740, 0xdf760 },
    { L"Extra 7", 0xdf760, 0xdf780 },
    { L"Extra 8", 0xdf780, 0xdf7a0 },
    { L"Extra 9", 0xdf7a0, 0xdf7c0 },
    { L"Lifebar Portrait", 0xdf7c0, 0xdf7e0, indexKOF95Sprites_OmegaRugal, 0x20 },
    { L"Extra 10: Monochrome palette?", 0xdf7e0, 0xdf800, indexKOF95Sprites_OmegaRugal, 0x00 },
};

const sDescTreeNode KOF95_A_HEIDERN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_HEIDERN_MAIN_PALETTES, ARRAYSIZE(KOF95_A_HEIDERN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_HEIDERN_ALT_PALETTES, ARRAYSIZE(KOF95_A_HEIDERN_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_RALF_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_RALF_MAIN_PALETTES, ARRAYSIZE(KOF95_A_RALF_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_RALF_ALT_PALETTES, ARRAYSIZE(KOF95_A_RALF_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_CLARK_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_CLARK_MAIN_PALETTES, ARRAYSIZE(KOF95_A_CLARK_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_CLARK_ALT_PALETTES, ARRAYSIZE(KOF95_A_CLARK_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_ATHENA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_ATHENA_MAIN_PALETTES, ARRAYSIZE(KOF95_A_ATHENA_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_ATHENA_ALT_PALETTES, ARRAYSIZE(KOF95_A_ATHENA_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_KENSOU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_KENSOU_MAIN_PALETTES, ARRAYSIZE(KOF95_A_KENSOU_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_KENSOU_ALT_PALETTES, ARRAYSIZE(KOF95_A_KENSOU_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_CHIN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_CHIN_MAIN_PALETTES, ARRAYSIZE(KOF95_A_CHIN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_CHIN_ALT_PALETTES, ARRAYSIZE(KOF95_A_CHIN_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_KYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_KYO_MAIN_PALETTES, ARRAYSIZE(KOF95_A_KYO_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_KYO_ALT_PALETTES, ARRAYSIZE(KOF95_A_KYO_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_BENIMARU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_BENIMARU_MAIN_PALETTES, ARRAYSIZE(KOF95_A_BENIMARU_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_BENIMARU_ALT_PALETTES, ARRAYSIZE(KOF95_A_BENIMARU_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_DAIMON_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_DAIMON_MAIN_PALETTES, ARRAYSIZE(KOF95_A_DAIMON_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_DAIMON_ALT_PALETTES, ARRAYSIZE(KOF95_A_DAIMON_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_IORI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_IORI_MAIN_PALETTES, ARRAYSIZE(KOF95_A_IORI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_IORI_ALT_PALETTES, ARRAYSIZE(KOF95_A_IORI_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_EIJI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_EIJI_MAIN_PALETTES, ARRAYSIZE(KOF95_A_EIJI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_EIJI_ALT_PALETTES, ARRAYSIZE(KOF95_A_EIJI_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_BILLY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_BILLY_MAIN_PALETTES, ARRAYSIZE(KOF95_A_BILLY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_BILLY_ALT_PALETTES, ARRAYSIZE(KOF95_A_BILLY_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_KIM_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_KIM_MAIN_PALETTES, ARRAYSIZE(KOF95_A_KIM_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_KIM_ALT_PALETTES, ARRAYSIZE(KOF95_A_KIM_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_CHANG_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_CHANG_MAIN_PALETTES, ARRAYSIZE(KOF95_A_CHANG_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_CHANG_ALT_PALETTES, ARRAYSIZE(KOF95_A_CHANG_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_CHOI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_CHOI_MAIN_PALETTES, ARRAYSIZE(KOF95_A_CHOI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_CHOI_ALT_PALETTES, ARRAYSIZE(KOF95_A_CHOI_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_TERRY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_TERRY_MAIN_PALETTES, ARRAYSIZE(KOF95_A_TERRY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_TERRY_ALT_PALETTES, ARRAYSIZE(KOF95_A_TERRY_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_ANDY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_ANDY_MAIN_PALETTES, ARRAYSIZE(KOF95_A_ANDY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_ANDY_ALT_PALETTES, ARRAYSIZE(KOF95_A_ANDY_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_JOE_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_JOE_MAIN_PALETTES, ARRAYSIZE(KOF95_A_JOE_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_JOE_ALT_PALETTES, ARRAYSIZE(KOF95_A_JOE_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_RYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_RYO_MAIN_PALETTES, ARRAYSIZE(KOF95_A_RYO_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_RYO_ALT_PALETTES, ARRAYSIZE(KOF95_A_RYO_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_ROBERT_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_ROBERT_MAIN_PALETTES, ARRAYSIZE(KOF95_A_ROBERT_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_ROBERT_ALT_PALETTES, ARRAYSIZE(KOF95_A_ROBERT_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_TAKUMA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_TAKUMA_MAIN_PALETTES, ARRAYSIZE(KOF95_A_TAKUMA_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_TAKUMA_ALT_PALETTES, ARRAYSIZE(KOF95_A_TAKUMA_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_YURI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_YURI_MAIN_PALETTES, ARRAYSIZE(KOF95_A_YURI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_YURI_ALT_PALETTES, ARRAYSIZE(KOF95_A_YURI_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_MAI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_MAI_MAIN_PALETTES, ARRAYSIZE(KOF95_A_MAI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_MAI_ALT_PALETTES, ARRAYSIZE(KOF95_A_MAI_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_KING_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_KING_MAIN_PALETTES, ARRAYSIZE(KOF95_A_KING_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_KING_ALT_PALETTES, ARRAYSIZE(KOF95_A_KING_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_SAISYU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_SAISYU_MAIN_PALETTES, ARRAYSIZE(KOF95_A_SAISYU_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_SAISYU_ALT_PALETTES, ARRAYSIZE(KOF95_A_SAISYU_ALT_PALETTES) },
};

const sDescTreeNode KOF95_A_OMEGARUGAL_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF95_A_OMEGARUGAL_MAIN_PALETTES, ARRAYSIZE(KOF95_A_OMEGARUGAL_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF95_A_OMEGARUGAL_ALT_PALETTES, ARRAYSIZE(KOF95_A_OMEGARUGAL_ALT_PALETTES) },
};

// Everything after this point is hand-crafted

const sGame_PaletteDataset KOF95_A_BONUS_EFFECTS_PALETTES[] =
{
    { L"Main Fire Palette",     0xe6800, 0xe6a00 },
    { L"Orochi Fire Palette",   0xe6a00, 0xe6c00 },
};

const sDescTreeNode KOF95_A_BONUS_COLLECTION[] =
{
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF95_A_BONUS_EFFECTS_PALETTES, ARRAYSIZE(KOF95_A_BONUS_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF95_A_UNITS[] =
{
    { L"Heidern", DESC_NODETYPE_TREE, (void*)KOF95_A_HEIDERN_COLLECTION, ARRAYSIZE(KOF95_A_HEIDERN_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF95_A_RALF_COLLECTION, ARRAYSIZE(KOF95_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF95_A_CLARK_COLLECTION, ARRAYSIZE(KOF95_A_CLARK_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF95_A_ATHENA_COLLECTION, ARRAYSIZE(KOF95_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF95_A_KENSOU_COLLECTION, ARRAYSIZE(KOF95_A_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF95_A_CHIN_COLLECTION, ARRAYSIZE(KOF95_A_CHIN_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF95_A_KYO_COLLECTION, ARRAYSIZE(KOF95_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF95_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF95_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF95_A_DAIMON_COLLECTION, ARRAYSIZE(KOF95_A_DAIMON_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF95_A_IORI_COLLECTION, ARRAYSIZE(KOF95_A_IORI_COLLECTION) },
    { L"Eiji", DESC_NODETYPE_TREE, (void*)KOF95_A_EIJI_COLLECTION, ARRAYSIZE(KOF95_A_EIJI_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)KOF95_A_BILLY_COLLECTION, ARRAYSIZE(KOF95_A_BILLY_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF95_A_KIM_COLLECTION, ARRAYSIZE(KOF95_A_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF95_A_CHANG_COLLECTION, ARRAYSIZE(KOF95_A_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF95_A_CHOI_COLLECTION, ARRAYSIZE(KOF95_A_CHOI_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF95_A_TERRY_COLLECTION, ARRAYSIZE(KOF95_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF95_A_ANDY_COLLECTION, ARRAYSIZE(KOF95_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF95_A_JOE_COLLECTION, ARRAYSIZE(KOF95_A_JOE_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF95_A_RYO_COLLECTION, ARRAYSIZE(KOF95_A_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF95_A_ROBERT_COLLECTION, ARRAYSIZE(KOF95_A_ROBERT_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF95_A_TAKUMA_COLLECTION, ARRAYSIZE(KOF95_A_TAKUMA_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF95_A_YURI_COLLECTION, ARRAYSIZE(KOF95_A_YURI_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF95_A_MAI_COLLECTION, ARRAYSIZE(KOF95_A_MAI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF95_A_KING_COLLECTION, ARRAYSIZE(KOF95_A_KING_COLLECTION) },
    { L"Saisyu", DESC_NODETYPE_TREE, (void*)KOF95_A_SAISYU_COLLECTION, ARRAYSIZE(KOF95_A_SAISYU_COLLECTION) },
    { L"Omega Rugal", DESC_NODETYPE_TREE, (void*)KOF95_A_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF95_A_OMEGARUGAL_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KOF95_A_BONUS_COLLECTION, ARRAYSIZE(KOF95_A_BONUS_COLLECTION) },
};

constexpr auto KOF95_A_NUMUNIT = ARRAYSIZE(KOF95_A_UNITS);

#define KOF95_A_EXTRALOC KOF95_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF95_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

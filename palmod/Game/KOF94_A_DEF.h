#pragma once

// To add characters or palette lists:
// * Update the DumpPaletteHeaders code
// * Uncomment the call to it
// * Run PalMod and copy the debug output into the header
// That should be it.  Good luck.

const UINT16 KOF94_A_IMGIDS_USED[] =
{
    indexKOF94Sprites_Andy,         // 0x164
    indexKOF94Sprites_Athena,       // 0x165
    indexKOF94Sprites_Benimaru,     // 0x166
    indexKOF94Sprites_Brian,        // 0x167
    indexKOF94Sprites_Chang,        // 0x168
    indexKOF94Sprites_Chin,         // 0x169
    indexKOF94Sprites_Choi,         // 0x16a
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
    indexKOF94Sprites_Rugal,        // 0x178
    indexKOF94Sprites_Ryo,          // 0x179
    indexKOF94Sprites_Takuma,       // 0x17a
    indexKOF94Sprites_Terry,        // 0x17b
    indexKOF94Sprites_Yuri,         // 0x17c
    indexKOF94Sprites_Stages,       // 0x17d
    indexKOF94Sprites_Bonus,        // 0x17e

    indexKOF95Sprites_Chang,        // 0x231
    indexKOF95Sprites_Chin,         // 0x232
    indexKOF95Sprites_Choi,         // 0x233
};

const sGame_PaletteDataset KOF94_A_HEIDERN_MAIN_PALETTES[] =
{
    { L"Heidern", 0x176000, 0x176020, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 1", 0x176020, 0x176040 },
    { L"Electric Palette", 0x176040, 0x176060, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 2", 0x176060, 0x176080 },
    { L"Win Portrait", 0x176080, 0x176100, indexKOF94Sprites_Heidern, 0x30 },
    { L"Lifebar Portrait", 0x176100, 0x176120, indexKOF94Sprites_Heidern, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x176120, 0x176140, indexKOF94Sprites_Heidern, 0x20 },
    { L"Darker Palette", 0x176140, 0x176160, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 3", 0x176160, 0x176180 },
    { L"MAX Flash", 0x176180, 0x1761a0, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 4", 0x1761a0, 0x1761c0 },
};

const sGame_PaletteDataset KOF94_A_HEIDERN_ALT_PALETTES[] =
{
    { L"Heidern", 0x1761c0, 0x1761e0, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 1", 0x1761e0, 0x176200 },
    { L"Electric Palette", 0x176200, 0x176220, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 2", 0x176220, 0x176240 },
    { L"Win Portrait", 0x176240, 0x1762c0, indexKOF94Sprites_Heidern, 0x30 },
    { L"Lifebar Portrait", 0x1762c0, 0x1762e0, indexKOF94Sprites_Heidern, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1762e0, 0x176300, indexKOF94Sprites_Heidern, 0x20 },
    { L"Darker Palette", 0x176300, 0x176320, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 3", 0x176320, 0x176340 },
    { L"MAX Flash", 0x176340, 0x176360, indexKOF94Sprites_Heidern, 0x00 },
    { L"Extra 4", 0x176360, 0x176380 },
};

const sGame_PaletteDataset KOF94_A_RALF_MAIN_PALETTES[] =
{
    { L"Ralf", 0x176380, 0x1763a0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Extra 1", 0x1763a0, 0x1763c0, indexKOF94Sprites_Ralf, 0x01 },
    { L"Electric Palette", 0x1763c0, 0x1763e0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x1763e0, 0x176400, indexKOF94Sprites_Ralf, 0x01 },
    { L"Win Portrait", 0x176400, 0x176480, indexKOF94Sprites_Ralf, 0x30 },
    { L"Lifebar Portrait", 0x176480, 0x1764a0, indexKOF94Sprites_Ralf, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1764a0, 0x1764c0, indexKOF94Sprites_Ralf, 0x20 },
    { L"Darker Palette", 0x1764c0, 0x1764e0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x1764e0, 0x176500, indexKOF94Sprites_Ralf, 0x01 },
    { L"MAX Flash", 0x176500, 0x176520, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x176520, 0x176540, indexKOF94Sprites_Ralf, 0x01 },
};

const sGame_PaletteDataset KOF94_A_RALF_ALT_PALETTES[] =
{
    { L"Ralf", 0x176540, 0x176560, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Extra 1", 0x176560, 0x176580, indexKOF94Sprites_Ralf, 0x01 },
    { L"Electric Palette", 0x176580, 0x1765a0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x1765a0, 0x1765c0, indexKOF94Sprites_Ralf, 0x01 },
    { L"Win Portrait", 0x1765c0, 0x176640, indexKOF94Sprites_Ralf, 0x30 },
    { L"Lifebar Portrait", 0x176640, 0x176660, indexKOF94Sprites_Ralf, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x176660, 0x176680, indexKOF94Sprites_Ralf, 0x20 },
    { L"Darker Palette", 0x176680, 0x1766a0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x1766a0, 0x1766c0, indexKOF94Sprites_Ralf, 0x01 },
    { L"MAX Flash", 0x1766c0, 0x1766e0, indexKOF94Sprites_Ralf, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x1766e0, 0x176700, indexKOF94Sprites_Ralf, 0x01 },
};

const sGame_PaletteDataset KOF94_A_CLARK_MAIN_PALETTES[] =
{
    { L"Clark", 0x176700, 0x176720, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Extra 1", 0x176720, 0x176740, indexKOF94Sprites_Clark, 0x01 },
    { L"Electric Palette", 0x176740, 0x176760, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x176760, 0x176780, indexKOF94Sprites_Clark, 0x01 },
    { L"Win Portrait", 0x176780, 0x176800, indexKOF94Sprites_Clark, 0x30 },
    { L"Lifebar Portrait", 0x176800, 0x176820, indexKOF94Sprites_Clark, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x176820, 0x176840, indexKOF94Sprites_Clark, 0x20 },
    { L"Darker Palette", 0x176840, 0x176860, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x176860, 0x176880, indexKOF94Sprites_Clark, 0x01 },
    { L"MAX Flash", 0x176880, 0x1768a0, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x1768a0, 0x1768c0, indexKOF94Sprites_Clark, 0x01 },
};

const sGame_PaletteDataset KOF94_A_CLARK_ALT_PALETTES[] =
{
    { L"Clark", 0x1768c0, 0x1768e0, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Extra 1", 0x1768e0, 0x176900, indexKOF94Sprites_Clark, 0x01 },
    { L"Electric Palette", 0x176900, 0x176920, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x176920, 0x176940, indexKOF94Sprites_Clark, 0x01 },
    { L"Win Portrait", 0x176940, 0x1769c0, indexKOF94Sprites_Clark, 0x30 },
    { L"Lifebar Portrait", 0x1769c0, 0x1769e0, indexKOF94Sprites_Clark, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1769e0, 0x176a00, indexKOF94Sprites_Clark, 0x20 },
    { L"Darker Palette", 0x176a00, 0x176a20, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x176a20, 0x176a40, indexKOF94Sprites_Clark, 0x01 },
    { L"MAX Flash", 0x176a40, 0x176a60, indexKOF94Sprites_Clark, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x176a60, 0x176a80, indexKOF94Sprites_Clark, 0x01 },
};

const sGame_PaletteDataset KOF94_A_ATHENA_MAIN_PALETTES[] =
{
    { L"Athena", 0x176a80, 0x176aa0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 1", 0x176aa0, 0x176ac0 },
    { L"Electric Palette", 0x176ac0, 0x176ae0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 2", 0x176ae0, 0x176b00 },
    { L"Win Portrait", 0x176b00, 0x176b80, indexKOF94Sprites_Athena, 0x30 },
    { L"Lifebar Portrait", 0x176b80, 0x176ba0, indexKOF94Sprites_Athena, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x176ba0, 0x176bc0, indexKOF94Sprites_Athena, 0x20 },
    { L"Darker Palette", 0x176bc0, 0x176be0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 3", 0x176be0, 0x176c00 },
    { L"MAX Flash", 0x176c00, 0x176c20, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 4", 0x176c20, 0x176c40 },
};

const sGame_PaletteDataset KOF94_A_ATHENA_ALT_PALETTES[] =
{
    { L"Athena", 0x176c40, 0x176c60, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 1", 0x176c60, 0x176c80 },
    { L"Electric Palette", 0x176c80, 0x176ca0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 2", 0x176ca0, 0x176cc0 },
    { L"Win Portrait", 0x176cc0, 0x176d40, indexKOF94Sprites_Athena, 0x30 },
    { L"Lifebar Portrait", 0x176d40, 0x176d60, indexKOF94Sprites_Athena, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x176d60, 0x176d80, indexKOF94Sprites_Athena, 0x20 },
    { L"Darker Palette", 0x176d80, 0x176da0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 3", 0x176da0, 0x176dc0 },
    { L"MAX Flash", 0x176dc0, 0x176de0, indexKOF94Sprites_Athena, 0x00 },
    { L"Extra 4", 0x176de0, 0x176e00 },
};

const sGame_PaletteDataset KOF94_A_KENSOU_MAIN_PALETTES[] =
{
    { L"Kensou", 0x176e00, 0x176e20, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x176e20, 0x176e40 },
    { L"Electric Palette", 0x176e40, 0x176e60, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x176e60, 0x176e80 },
    { L"Win Portrait", 0x176e80, 0x176f00, indexKOF94Sprites_Kensou, 0x30 },
    { L"Lifebar Portrait", 0x176f00, 0x176f20, indexKOF94Sprites_Kensou, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x176f20, 0x176f40, indexKOF94Sprites_Kensou, 0x20 },
    { L"Darker Palette", 0x176f40, 0x176f60, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x176f60, 0x176f80 },
    { L"MAX Flash", 0x176f80, 0x176fa0, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x176fa0, 0x176fc0 },
};

const sGame_PaletteDataset KOF94_A_KENSOU_ALT_PALETTES[] =
{
    { L"Kensou", 0x176fc0, 0x176fe0, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x176fe0, 0x177000 },
    { L"Electric Palette", 0x177000, 0x177020, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x177020, 0x177040 },
    { L"Win Portrait", 0x177040, 0x1770c0, indexKOF94Sprites_Kensou, 0x30 },
    { L"Lifebar Portrait", 0x1770c0, 0x1770e0, indexKOF94Sprites_Kensou, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1770e0, 0x177100, indexKOF94Sprites_Kensou, 0x20 },
    { L"Darker Palette", 0x177100, 0x177120, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x177120, 0x177140 },
    { L"MAX Flash", 0x177140, 0x177160, indexKOF94Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x177160, 0x177180 },
};

const sGame_PaletteDataset KOF94_A_CHIN_MAIN_PALETTES[] =
{
    { L"Chin", 0x177180, 0x1771a0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 1", 0x1771a0, 0x1771c0 },
    { L"Electric Palette", 0x1771c0, 0x1771e0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 2", 0x1771e0, 0x177200 },
    { L"Win Portrait", 0x177200, 0x177280, indexKOF94Sprites_Chin, 0x30 },
    { L"Lifebar Portrait", 0x177280, 0x1772a0, indexKOF94Sprites_Chin, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1772a0, 0x1772c0, indexKOF94Sprites_Chin, 0x20 },
    { L"Darker Palette", 0x1772c0, 0x1772e0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 3", 0x1772e0, 0x177300 },
    { L"MAX Flash", 0x177300, 0x177320, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 4", 0x177320, 0x177340 },
};

const sGame_PaletteDataset KOF94_A_CHIN_ALT_PALETTES[] =
{
    { L"Chin", 0x177340, 0x177360, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 1", 0x177360, 0x177380 },
    { L"Electric Palette", 0x177380, 0x1773a0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 2", 0x1773a0, 0x1773c0 },
    { L"Win Portrait", 0x1773c0, 0x177440, indexKOF94Sprites_Chin, 0x30 },
    { L"Lifebar Portrait", 0x177440, 0x177460, indexKOF94Sprites_Chin, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x177460, 0x177480, indexKOF94Sprites_Chin, 0x20 },
    { L"Darker Palette", 0x177480, 0x1774a0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 3", 0x1774a0, 0x1774c0 },
    { L"MAX Flash", 0x1774c0, 0x1774e0, indexKOF94Sprites_Chin, 0x00 },
    { L"Extra 4", 0x1774e0, 0x177500 },
};

const sGame_PaletteDataset KOF94_A_KYO_MAIN_PALETTES[] =
{
    { L"Kyo", 0x177500, 0x177520, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x177520, 0x177540 },
    { L"Electric Palette", 0x177540, 0x177560, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x177560, 0x177580 },
    { L"Win Portrait", 0x177580, 0x177600, indexKOF94Sprites_Kyo, 0x30 },
    { L"Lifebar Portrait", 0x177600, 0x177620, indexKOF94Sprites_Kyo, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x177620, 0x177640, indexKOF94Sprites_Kyo, 0x20 },
    { L"Darker Palette", 0x177640, 0x177660, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x177660, 0x177680 },
    { L"MAX Flash", 0x177680, 0x1776a0, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x1776a0, 0x1776c0 },
};

const sGame_PaletteDataset KOF94_A_KYO_ALT_PALETTES[] =
{
    { L"Kyo", 0x1776c0, 0x1776e0, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x1776e0, 0x177700 },
    { L"Electric Palette", 0x177700, 0x177720, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x177720, 0x177740 },
    { L"Win Portrait", 0x177740, 0x1777c0, indexKOF94Sprites_Kyo, 0x30 },
    { L"Lifebar Portrait", 0x1777c0, 0x1777e0, indexKOF94Sprites_Kyo, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1777e0, 0x177800, indexKOF94Sprites_Kyo, 0x20 },
    { L"Darker Palette", 0x177800, 0x177820, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x177820, 0x177840 },
    { L"MAX Flash", 0x177840, 0x177860, indexKOF94Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x177860, 0x177880 },
};

const sGame_PaletteDataset KOF94_A_BENIMARU_MAIN_PALETTES[] =
{
    { L"Benimaru", 0x177880, 0x1778a0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x1778a0, 0x1778c0 },
    { L"Electric Palette", 0x1778c0, 0x1778e0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x1778e0, 0x177900 },
    { L"Win Portrait", 0x177900, 0x177980, indexKOF94Sprites_Benimaru, 0x30 },
    { L"Lifebar Portrait", 0x177980, 0x1779a0, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1779a0, 0x1779c0, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Darker Palette", 0x1779c0, 0x1779e0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x1779e0, 0x177a00 },
    { L"MAX Flash", 0x177a00, 0x177a20, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x177a20, 0x177a40 },
};

const sGame_PaletteDataset KOF94_A_BENIMARU_ALT_PALETTES[] =
{
    { L"Benimaru", 0x177a40, 0x177a60, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x177a60, 0x177a80 },
    { L"Electric Palette", 0x177a80, 0x177aa0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x177aa0, 0x177ac0 },
    { L"Win Portrait", 0x177ac0, 0x177b40, indexKOF94Sprites_Benimaru, 0x30 },
    { L"Lifebar Portrait", 0x177b40, 0x177b60, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x177b60, 0x177b80, indexKOF94Sprites_Benimaru, 0x20 },
    { L"Darker Palette", 0x177b80, 0x177ba0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x177ba0, 0x177bc0 },
    { L"MAX Flash", 0x177bc0, 0x177be0, indexKOF94Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x177be0, 0x177c00 },
};

const sGame_PaletteDataset KOF94_A_DAIMON_MAIN_PALETTES[] =
{
    { L"Daimon", 0x177c00, 0x177c20, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 1", 0x177c20, 0x177c40 },
    { L"Electric Palette", 0x177c40, 0x177c60, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 2", 0x177c60, 0x177c80 },
    { L"Win Portrait", 0x177c80, 0x177d00, indexKOF94Sprites_Daimon, 0x30 },
    { L"Lifebar Portrait", 0x177d00, 0x177d20, indexKOF94Sprites_Daimon, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x177d20, 0x177d40, indexKOF94Sprites_Daimon, 0x20 },
    { L"Darker Palette", 0x177d40, 0x177d60, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 3", 0x177d60, 0x177d80 },
    { L"MAX Flash", 0x177d80, 0x177da0, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 4", 0x177da0, 0x177dc0 },
};

const sGame_PaletteDataset KOF94_A_DAIMON_ALT_PALETTES[] =
{
    { L"Daimon", 0x177dc0, 0x177de0, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 1", 0x177de0, 0x177e00 },
    { L"Electric Palette", 0x177e00, 0x177e20, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 2", 0x177e20, 0x177e40 },
    { L"Win Portrait", 0x177e40, 0x177ec0, indexKOF94Sprites_Daimon, 0x30 },
    { L"Lifebar Portrait", 0x177ec0, 0x177ee0, indexKOF94Sprites_Daimon, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x177ee0, 0x177f00, indexKOF94Sprites_Daimon, 0x20 },
    { L"Darker Palette", 0x177f00, 0x177f20, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 3", 0x177f20, 0x177f40 },
    { L"MAX Flash", 0x177f40, 0x177f60, indexKOF94Sprites_Daimon, 0x00 },
    { L"Extra 4", 0x177f60, 0x177f80 },
};

const sGame_PaletteDataset KOF94_A_HEAVYD_MAIN_PALETTES[] =
{
    { L"Heavy D!", 0x177f80, 0x177fa0, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 1", 0x177fa0, 0x177fc0 },
    { L"Electric Palette", 0x177fc0, 0x177fe0, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 2", 0x177fe0, 0x178000 },
    { L"Win Portrait", 0x178000, 0x178080, indexKOF94Sprites_HeavyD, 0x30 },
    { L"Lifebar Portrait", 0x178080, 0x1780a0, indexKOF94Sprites_HeavyD, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1780a0, 0x1780c0, indexKOF94Sprites_HeavyD, 0x20 },
    { L"Darker Palette", 0x1780c0, 0x1780e0, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 3", 0x1780e0, 0x178100 },
    { L"MAX Flash", 0x178100, 0x178120, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 4", 0x178120, 0x178140 },
};

const sGame_PaletteDataset KOF94_A_HEAVYD_ALT_PALETTES[] =
{
    { L"Heavy D!", 0x178140, 0x178160, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 1", 0x178160, 0x178180 },
    { L"Electric Palette", 0x178180, 0x1781a0, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 2", 0x1781a0, 0x1781c0 },
    { L"Win Portrait", 0x1781c0, 0x178240, indexKOF94Sprites_HeavyD, 0x30 },
    { L"Lifebar Portrait", 0x178240, 0x178260, indexKOF94Sprites_HeavyD, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x178260, 0x178280, indexKOF94Sprites_HeavyD, 0x20 },
    { L"Darker Palette", 0x178280, 0x1782a0, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 3", 0x1782a0, 0x1782c0 },
    { L"MAX Flash", 0x1782c0, 0x1782e0, indexKOF94Sprites_HeavyD, 0x00 },
    { L"Extra 4", 0x1782e0, 0x178300 },
};

const sGame_PaletteDataset KOF94_A_LUCKY_MAIN_PALETTES[] =
{
    { L"Lucky", 0x178300, 0x178320, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"Extra 1", 0x178320, 0x178340, indexKOF94Sprites_Lucky, 0x01 },
    { L"Electric Palette", 0x178340, 0x178360, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x178360, 0x178380, indexKOF94Sprites_Lucky, 0x01 },
    { L"Win Portrait", 0x178380, 0x178400, indexKOF94Sprites_Lucky, 0x30 },
    { L"Lifebar Portrait", 0x178400, 0x178420, indexKOF94Sprites_Lucky, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x178420, 0x178440, indexKOF94Sprites_Lucky, 0x20 },
    { L"Darker Palette", 0x178440, 0x178460, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x178460, 0x178480, indexKOF94Sprites_Lucky, 0x01 },
    { L"MAX Flash", 0x178480, 0x1784a0, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x1784a0, 0x1784c0, indexKOF94Sprites_Lucky, 0x01 },
};

const sGame_PaletteDataset KOF94_A_LUCKY_ALT_PALETTES[] =
{
    { L"Lucky", 0x1784c0, 0x1784e0, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"Extra 1", 0x1784e0, 0x178500, indexKOF94Sprites_Lucky, 0x01 },
    { L"Electric Palette", 0x178500, 0x178520, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x178520, 0x178540, indexKOF94Sprites_Lucky, 0x01 },
    { L"Win Portrait", 0x178540, 0x1785c0, indexKOF94Sprites_Lucky, 0x30 },
    { L"Lifebar Portrait", 0x1785c0, 0x1785e0, indexKOF94Sprites_Lucky, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1785e0, 0x178600, indexKOF94Sprites_Lucky, 0x20 },
    { L"Darker Palette", 0x178600, 0x178620, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x178620, 0x178640, indexKOF94Sprites_Lucky, 0x01 },
    { L"MAX Flash", 0x178640, 0x178660, indexKOF94Sprites_Lucky, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x178660, 0x178680, indexKOF94Sprites_Lucky, 0x01 },
};

const sGame_PaletteDataset KOF94_A_BRIAN_MAIN_PALETTES[] =
{
    { L"Brian", 0x178680, 0x1786a0, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 1", 0x1786a0, 0x1786c0 },
    { L"Electric Palette", 0x1786c0, 0x1786e0, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 2", 0x1786e0, 0x178700 },
    { L"Win Portrait", 0x178700, 0x178780, indexKOF94Sprites_Brian, 0x30 },
    { L"Lifebar Portrait", 0x178780, 0x1787a0, indexKOF94Sprites_Brian, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1787a0, 0x1787c0, indexKOF94Sprites_Brian, 0x20 },
    { L"Darker Palette", 0x1787c0, 0x1787e0, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 3", 0x1787e0, 0x178800 },
    { L"MAX Flash", 0x178800, 0x178820, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 4", 0x178820, 0x178840 },
};

const sGame_PaletteDataset KOF94_A_BRIAN_ALT_PALETTES[] =
{
    { L"Brian", 0x178840, 0x178860, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 1", 0x178860, 0x178880 },
    { L"Electric Palette", 0x178880, 0x1788a0, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 2", 0x1788a0, 0x1788c0 },
    { L"Win Portrait", 0x1788c0, 0x178940, indexKOF94Sprites_Brian, 0x30 },
    { L"Lifebar Portrait", 0x178940, 0x178960, indexKOF94Sprites_Brian, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x178960, 0x178980, indexKOF94Sprites_Brian, 0x20 },
    { L"Darker Palette", 0x178980, 0x1789a0, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 3", 0x1789a0, 0x1789c0 },
    { L"MAX Flash", 0x1789c0, 0x1789e0, indexKOF94Sprites_Brian, 0x00 },
    { L"Extra 4", 0x1789e0, 0x178a00 },
};

const sGame_PaletteDataset KOF94_A_KIM_MAIN_PALETTES[] =
{
    { L"Kim", 0x178a00, 0x178a20, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 1", 0x178a20, 0x178a40 },
    { L"Electric Palette", 0x178a40, 0x178a60, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 2", 0x178a60, 0x178a80 },
    { L"Win Portrait", 0x178a80, 0x178b00, indexKOF94Sprites_Kim, 0x30 },
    { L"Lifebar Portrait", 0x178b00, 0x178b20, indexKOF94Sprites_Kim, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x178b20, 0x178b40, indexKOF94Sprites_Kim, 0x20 },
    { L"Darker Palette", 0x178b40, 0x178b60, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 3", 0x178b60, 0x178b80 },
    { L"MAX Flash", 0x178b80, 0x178ba0, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 4", 0x178ba0, 0x178bc0 },
};

const sGame_PaletteDataset KOF94_A_KIM_ALT_PALETTES[] =
{
    { L"Kim", 0x178bc0, 0x178be0, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 1", 0x178be0, 0x178c00 },
    { L"Electric Palette", 0x178c00, 0x178c20, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 2", 0x178c20, 0x178c40 },
    { L"Win Portrait", 0x178c40, 0x178cc0, indexKOF94Sprites_Kim, 0x30 },
    { L"Lifebar Portrait", 0x178cc0, 0x178ce0, indexKOF94Sprites_Kim, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x178ce0, 0x178d00, indexKOF94Sprites_Kim, 0x20 },
    { L"Darker Palette", 0x178d00, 0x178d20, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 3", 0x178d20, 0x178d40 },
    { L"MAX Flash", 0x178d40, 0x178d60, indexKOF94Sprites_Kim, 0x00 },
    { L"Extra 4", 0x178d60, 0x178d80 },
};

const sGame_PaletteDataset KOF94_A_CHANG_MAIN_PALETTES[] =
{
    { L"Chang", 0x178d80, 0x178da0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x178da0, 0x178dc0, indexKOF95Sprites_Chang, 0x01 },
    { L"Electric Palette", 0x178dc0, 0x178de0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x178de0, 0x178e00, indexKOF95Sprites_Chang, 0x01 },
    { L"Win Portrait", 0x178e00, 0x178e80, indexKOF94Sprites_Chang, 0x30 },
    { L"Lifebar Portrait", 0x178e80, 0x178ea0, indexKOF94Sprites_Chang, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x178ea0, 0x178ec0, indexKOF95Sprites_Chang, 0x20 },
    { L"Darker Palette", 0x178ec0, 0x178ee0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x178ee0, 0x178f00, indexKOF95Sprites_Chang, 0x01 },
    { L"MAX Flash", 0x178f00, 0x178f20, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x178f20, 0x178f40, indexKOF95Sprites_Chang, 0x01 },
};

const sGame_PaletteDataset KOF94_A_CHANG_ALT_PALETTES[] =
{
    { L"Chang", 0x178f40, 0x178f60, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x178f60, 0x178f80, indexKOF95Sprites_Chang, 0x01 },
    { L"Electric Palette", 0x178f80, 0x178fa0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x178fa0, 0x178fc0, indexKOF95Sprites_Chang, 0x01 },
    { L"Win Portrait", 0x178fc0, 0x179040, indexKOF94Sprites_Chang, 0x30 },
    { L"Lifebar Portrait", 0x179040, 0x179060, indexKOF94Sprites_Chang, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x179060, 0x179080, indexKOF95Sprites_Chang, 0x20 },
    { L"Darker Palette", 0x179080, 0x1790a0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x1790a0, 0x1790c0, indexKOF95Sprites_Chang, 0x01 },
    { L"MAX Flash", 0x1790c0, 0x1790e0, indexKOF95Sprites_Chang, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x1790e0, 0x179100, indexKOF95Sprites_Chang, 0x01 },
};

const sGame_PaletteDataset KOF94_A_CHOI_MAIN_PALETTES[] =
{
    { L"Choi", 0x179100, 0x179120, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 1", 0x179120, 0x179140 },
    { L"Electric Palette", 0x179140, 0x179160, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 2", 0x179160, 0x179180 },
    { L"Win Portrait", 0x179180, 0x179200, indexKOF94Sprites_Choi, 0x30 },
    { L"Lifebar Portrait", 0x179200, 0x179220, indexKOF94Sprites_Choi, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x179220, 0x179240, indexKOF95Sprites_Chin, 0x20 },
    { L"Darker Palette", 0x179240, 0x179260, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 3", 0x179260, 0x179280 },
    { L"MAX Flash", 0x179280, 0x1792a0, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 4", 0x1792a0, 0x1792c0 },
};

const sGame_PaletteDataset KOF94_A_CHOI_ALT_PALETTES[] =
{
    { L"Choi", 0x1792c0, 0x1792e0, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 1", 0x1792e0, 0x179300 },
    { L"Electric Palette", 0x179300, 0x179320, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 2", 0x179320, 0x179340 },
    { L"Win Portrait", 0x179340, 0x1793c0, indexKOF94Sprites_Choi, 0x30 },
    { L"Lifebar Portrait", 0x1793c0, 0x1793e0, indexKOF94Sprites_Choi, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1793e0, 0x179400, indexKOF95Sprites_Chin, 0x20 },
    { L"Darker Palette", 0x179400, 0x179420, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 3", 0x179420, 0x179440 },
    { L"MAX Flash", 0x179440, 0x179460, indexKOF95Sprites_Chin, 0x00 },
    { L"Extra 4", 0x179460, 0x179480 },
};

const sGame_PaletteDataset KOF94_A_TERRY_MAIN_PALETTES[] =
{
    { L"Terry", 0x179480, 0x1794a0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 1", 0x1794a0, 0x1794c0 },
    { L"Electric Palette", 0x1794c0, 0x1794e0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 2", 0x1794e0, 0x179500 },
    { L"Win Portrait", 0x179500, 0x179580, indexKOF94Sprites_Terry, 0x30 },
    { L"Lifebar Portrait", 0x179580, 0x1795a0, indexKOF94Sprites_Terry, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x1795a0, 0x1795c0, indexKOF94Sprites_Terry, 0x20 },
    { L"Darker Palette", 0x1795c0, 0x1795e0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 3", 0x1795e0, 0x179600 },
    { L"MAX Flash", 0x179600, 0x179620, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 4", 0x179620, 0x179640 },
};

const sGame_PaletteDataset KOF94_A_TERRY_ALT_PALETTES[] =
{
    { L"Terry", 0x179640, 0x179660, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 1", 0x179660, 0x179680 },
    { L"Electric Palette", 0x179680, 0x1796a0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 2", 0x1796a0, 0x1796c0 },
    { L"Win Portrait", 0x1796c0, 0x179740, indexKOF94Sprites_Terry, 0x30 },
    { L"Lifebar Portrait", 0x179740, 0x179760, indexKOF94Sprites_Terry, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x179760, 0x179780, indexKOF94Sprites_Terry, 0x20 },
    { L"Darker Palette", 0x179780, 0x1797a0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 3", 0x1797a0, 0x1797c0 },
    { L"MAX Flash", 0x1797c0, 0x1797e0, indexKOF94Sprites_Terry, 0x00 },
    { L"Extra 4", 0x1797e0, 0x179800 },
};

const sGame_PaletteDataset KOF94_A_ANDY_MAIN_PALETTES[] =
{
    { L"Andy", 0x179800, 0x179820, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 1", 0x179820, 0x179840 },
    { L"Electric Palette", 0x179840, 0x179860, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 2", 0x179860, 0x179880 },
    { L"Win Portrait", 0x179880, 0x179900, indexKOF94Sprites_Andy, 0x30 },
    { L"Lifebar Portrait", 0x179900, 0x179920, indexKOF94Sprites_Andy, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x179920, 0x179940, indexKOF94Sprites_Andy, 0x20 },
    { L"Darker Palette", 0x179940, 0x179960, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 3", 0x179960, 0x179980 },
    { L"MAX Flash", 0x179980, 0x1799a0, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 4", 0x1799a0, 0x1799c0 },
};

const sGame_PaletteDataset KOF94_A_ANDY_ALT_PALETTES[] =
{
    { L"Andy", 0x1799c0, 0x1799e0, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 1", 0x1799e0, 0x179a00 },
    { L"Electric Palette", 0x179a00, 0x179a20, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 2", 0x179a20, 0x179a40 },
    { L"Win Portrait", 0x179a40, 0x179ac0, indexKOF94Sprites_Andy, 0x30 },
    { L"Lifebar Portrait", 0x179ac0, 0x179ae0, indexKOF94Sprites_Andy, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x179ae0, 0x179b00, indexKOF94Sprites_Andy, 0x20 },
    { L"Darker Palette", 0x179b00, 0x179b20, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 3", 0x179b20, 0x179b40 },
    { L"MAX Flash", 0x179b40, 0x179b60, indexKOF94Sprites_Andy, 0x00 },
    { L"Extra 4", 0x179b60, 0x179b80 },
};

const sGame_PaletteDataset KOF94_A_JOE_MAIN_PALETTES[] =
{
    { L"Joe", 0x179b80, 0x179ba0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 1", 0x179ba0, 0x179bc0 },
    { L"Electric Palette", 0x179bc0, 0x179be0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 2", 0x179be0, 0x179c00 },
    { L"Win Portrait", 0x179c00, 0x179c80, indexKOF94Sprites_Joe, 0x30 },
    { L"Lifebar Portrait", 0x179c80, 0x179ca0, indexKOF94Sprites_Joe, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x179ca0, 0x179cc0, indexKOF94Sprites_Joe, 0x20 },
    { L"Darker Palette", 0x179cc0, 0x179ce0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 3", 0x179ce0, 0x179d00 },
    { L"MAX Flash", 0x179d00, 0x179d20, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 4", 0x179d20, 0x179d40 },
};

const sGame_PaletteDataset KOF94_A_JOE_ALT_PALETTES[] =
{
    { L"Joe", 0x179d40, 0x179d60, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 1", 0x179d60, 0x179d80 },
    { L"Electric Palette", 0x179d80, 0x179da0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 2", 0x179da0, 0x179dc0 },
    { L"Win Portrait", 0x179dc0, 0x179e40, indexKOF94Sprites_Joe, 0x30 },
    { L"Lifebar Portrait", 0x179e40, 0x179e60, indexKOF94Sprites_Joe, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x179e60, 0x179e80, indexKOF94Sprites_Joe, 0x20 },
    { L"Darker Palette", 0x179e80, 0x179ea0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 3", 0x179ea0, 0x179ec0 },
    { L"MAX Flash", 0x179ec0, 0x179ee0, indexKOF94Sprites_Joe, 0x00 },
    { L"Extra 4", 0x179ee0, 0x179f00 },
};

const sGame_PaletteDataset KOF94_A_RYO_MAIN_PALETTES[] =
{
    { L"Ryo", 0x179f00, 0x179f20, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x179f20, 0x179f40 },
    { L"Electric Palette", 0x179f40, 0x179f60, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x179f60, 0x179f80 },
    { L"Win Portrait", 0x179f80, 0x17a000, indexKOF94Sprites_Ryo, 0x30 },
    { L"Lifebar Portrait", 0x17a000, 0x17a020, indexKOF94Sprites_Ryo, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17a020, 0x17a040, indexKOF94Sprites_Ryo, 0x20 },
    { L"Darker Palette", 0x17a040, 0x17a060, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x17a060, 0x17a080 },
    { L"MAX Flash", 0x17a080, 0x17a0a0, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x17a0a0, 0x17a0c0 },
};

const sGame_PaletteDataset KOF94_A_RYO_ALT_PALETTES[] =
{
    { L"Ryo", 0x17a0c0, 0x17a0e0, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x17a0e0, 0x17a100 },
    { L"Electric Palette", 0x17a100, 0x17a120, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x17a120, 0x17a140 },
    { L"Win Portrait", 0x17a140, 0x17a1c0, indexKOF94Sprites_Ryo, 0x30 },
    { L"Lifebar Portrait", 0x17a1c0, 0x17a1e0, indexKOF94Sprites_Ryo, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17a1e0, 0x17a200, indexKOF94Sprites_Ryo, 0x20 },
    { L"Darker Palette", 0x17a200, 0x17a220, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x17a220, 0x17a240 },
    { L"MAX Flash", 0x17a240, 0x17a260, indexKOF94Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x17a260, 0x17a280 },
};

const sGame_PaletteDataset KOF94_A_ROBERT_MAIN_PALETTES[] =
{
    { L"Robert", 0x17a280, 0x17a2a0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 1", 0x17a2a0, 0x17a2c0 },
    { L"Electric Palette", 0x17a2c0, 0x17a2e0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 2", 0x17a2e0, 0x17a300 },
    { L"Win Portrait", 0x17a300, 0x17a380, indexKOF94Sprites_Robert, 0x30 },
    { L"Lifebar Portrait", 0x17a380, 0x17a3a0, indexKOF94Sprites_Robert, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17a3a0, 0x17a3c0, indexKOF94Sprites_Robert, 0x20 },
    { L"Darker Palette", 0x17a3c0, 0x17a3e0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 3", 0x17a3e0, 0x17a400 },
    { L"MAX Flash", 0x17a400, 0x17a420, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 4", 0x17a420, 0x17a440 },
};

const sGame_PaletteDataset KOF94_A_ROBERT_ALT_PALETTES[] =
{
    { L"Robert", 0x17a440, 0x17a460, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 1", 0x17a460, 0x17a480 },
    { L"Electric Palette", 0x17a480, 0x17a4a0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 2", 0x17a4a0, 0x17a4c0 },
    { L"Win Portrait", 0x17a4c0, 0x17a540, indexKOF94Sprites_Robert, 0x30 },
    { L"Lifebar Portrait", 0x17a540, 0x17a560, indexKOF94Sprites_Robert, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17a560, 0x17a580, indexKOF94Sprites_Robert, 0x20 },
    { L"Darker Palette", 0x17a580, 0x17a5a0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 3", 0x17a5a0, 0x17a5c0 },
    { L"MAX Flash", 0x17a5c0, 0x17a5e0, indexKOF94Sprites_Robert, 0x00 },
    { L"Extra 4", 0x17a5e0, 0x17a600 },
};

const sGame_PaletteDataset KOF94_A_TAKUMA_MAIN_PALETTES[] =
{
    { L"Takuma", 0x17a600, 0x17a620, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x17a620, 0x17a640 },
    { L"Electric Palette", 0x17a640, 0x17a660, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x17a660, 0x17a680 },
    { L"Win Portrait", 0x17a680, 0x17a700, indexKOF94Sprites_Takuma, 0x30 },
    { L"Lifebar Portrait", 0x17a700, 0x17a720, indexKOF94Sprites_Takuma, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17a720, 0x17a740, indexKOF94Sprites_Takuma, 0x20 },
    { L"Darker Palette", 0x17a740, 0x17a760, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x17a760, 0x17a780 },
    { L"MAX Flash", 0x17a780, 0x17a7a0, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x17a7a0, 0x17a7c0 },
};

const sGame_PaletteDataset KOF94_A_TAKUMA_ALT_PALETTES[] =
{
    { L"Takuma", 0x17a7c0, 0x17a7e0, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x17a7e0, 0x17a800 },
    { L"Electric Palette", 0x17a800, 0x17a820, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x17a820, 0x17a840 },
    { L"Win Portrait", 0x17a840, 0x17a8c0, indexKOF94Sprites_Takuma, 0x30 },
    { L"Lifebar Portrait", 0x17a8c0, 0x17a8e0, indexKOF94Sprites_Takuma, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17a8e0, 0x17a900, indexKOF94Sprites_Takuma, 0x20 },
    { L"Darker Palette", 0x17a900, 0x17a920, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x17a920, 0x17a940 },
    { L"MAX Flash", 0x17a940, 0x17a960, indexKOF94Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x17a960, 0x17a980 },
};

const sGame_PaletteDataset KOF94_A_YURI_MAIN_PALETTES[] =
{
    { L"Yuri", 0x17a980, 0x17a9a0, indexKOF94Sprites_Yuri, 0x00, &pairNext },
    { L"Extra 1", 0x17a9a0, 0x17a9c0, indexKOF94Sprites_Yuri, 0x01 },
    { L"Electric Palette", 0x17a9c0, 0x17a9e0, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x17a9e0, 0x17aa00 },
    { L"Win Portrait", 0x17aa00, 0x17aa80, indexKOF94Sprites_Yuri, 0x30 },
    { L"Lifebar Portrait", 0x17aa80, 0x17aaa0, indexKOF94Sprites_Yuri, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17aaa0, 0x17aac0, indexKOF94Sprites_Yuri, 0x20 },
    { L"Darker Palette", 0x17aac0, 0x17aae0, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x17aae0, 0x17ab00 },
    { L"MAX Flash", 0x17ab00, 0x17ab20, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x17ab20, 0x17ab40 },
};

const sGame_PaletteDataset KOF94_A_YURI_ALT_PALETTES[] =
{
    { L"Yuri", 0x17ab40, 0x17ab60, indexKOF94Sprites_Yuri, 0x00, &pairNext },
    { L"Extra 1", 0x17ab60, 0x17ab80, indexKOF94Sprites_Yuri, 0x01 },
    { L"Electric Palette", 0x17ab80, 0x17aba0, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x17aba0, 0x17abc0 },
    { L"Win Portrait", 0x17abc0, 0x17ac40, indexKOF94Sprites_Yuri, 0x30 },
    { L"Lifebar Portrait", 0x17ac40, 0x17ac60, indexKOF94Sprites_Yuri, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17ac60, 0x17ac80, indexKOF94Sprites_Yuri, 0x20 },
    { L"Darker Palette", 0x17ac80, 0x17aca0, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x17aca0, 0x17acc0 },
    { L"MAX Flash", 0x17acc0, 0x17ace0, indexKOF94Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x17ace0, 0x17ad00 },
};

const sGame_PaletteDataset KOF94_A_MAI_MAIN_PALETTES[] =
{
    { L"Mai", 0x17ad00, 0x17ad20, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 1", 0x17ad20, 0x17ad40 },
    { L"Electric Palette", 0x17ad40, 0x17ad60, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 2", 0x17ad60, 0x17ad80 },
    { L"Win Portrait", 0x17ad80, 0x17ae00, indexKOF94Sprites_Mai, 0x30 },
    { L"Lifebar Portrait", 0x17ae00, 0x17ae20, indexKOF94Sprites_Mai, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17ae20, 0x17ae40, indexKOF94Sprites_Mai, 0x20 },
    { L"Darker Palette", 0x17ae40, 0x17ae60, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 3", 0x17ae60, 0x17ae80 },
    { L"MAX Flash", 0x17ae80, 0x17aea0, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 4", 0x17aea0, 0x17aec0 },
};

const sGame_PaletteDataset KOF94_A_MAI_ALT_PALETTES[] =
{
    { L"Mai", 0x17aec0, 0x17aee0, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 1", 0x17aee0, 0x17af00 },
    { L"Electric Palette", 0x17af00, 0x17af20, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 2", 0x17af20, 0x17af40 },
    { L"Win Portrait", 0x17af40, 0x17afc0, indexKOF94Sprites_Mai, 0x30 },
    { L"Lifebar Portrait", 0x17afc0, 0x17afe0, indexKOF94Sprites_Mai, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17afe0, 0x17b000, indexKOF94Sprites_Mai, 0x20 },
    { L"Darker Palette", 0x17b000, 0x17b020, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 3", 0x17b020, 0x17b040 },
    { L"MAX Flash", 0x17b040, 0x17b060, indexKOF94Sprites_Mai, 0x00 },
    { L"Extra 4", 0x17b060, 0x17b080 },
};

const sGame_PaletteDataset KOF94_A_KING_MAIN_PALETTES[] =
{
    { L"King", 0x17b080, 0x17b0a0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 1", 0x17b0a0, 0x17b0c0 },
    { L"Electric Palette", 0x17b0c0, 0x17b0e0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 2", 0x17b0e0, 0x17b100 },
    { L"Win Portrait", 0x17b100, 0x17b180, indexKOF94Sprites_King, 0x30 },
    { L"Lifebar Portrait", 0x17b180, 0x17b1a0, indexKOF94Sprites_King, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17b1a0, 0x17b1c0, indexKOF94Sprites_King, 0x20 },
    { L"Darker Palette", 0x17b1c0, 0x17b1e0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 3", 0x17b1e0, 0x17b200 },
    { L"MAX Flash", 0x17b200, 0x17b220, indexKOF94Sprites_King, 0x00 },
    { L"Extra 4", 0x17b220, 0x17b240 },
};

const sGame_PaletteDataset KOF94_A_KING_ALT_PALETTES[] =
{
    { L"King", 0x17b240, 0x17b260, indexKOF94Sprites_King, 0x00 },
    { L"Extra 1", 0x17b260, 0x17b280 },
    { L"Electric Palette", 0x17b280, 0x17b2a0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 2", 0x17b2a0, 0x17b2c0 },
    { L"Win Portrait", 0x17b2c0, 0x17b340, indexKOF94Sprites_King, 0x30 },
    { L"Lifebar Portrait", 0x17b340, 0x17b360, indexKOF94Sprites_King, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17b360, 0x17b380, indexKOF94Sprites_King, 0x20 },
    { L"Darker Palette", 0x17b380, 0x17b3a0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 3", 0x17b3a0, 0x17b3c0 },
    { L"MAX Flash", 0x17b3c0, 0x17b3e0, indexKOF94Sprites_King, 0x00 },
    { L"Extra 4", 0x17b3e0, 0x17b400 },
};

const sGame_PaletteDataset KOF94_A_RUGAL_MAIN_PALETTES[] =
{
    { L"Rugal", 0x17b400, 0x17b420, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"Extra 1", 0x17b420, 0x17b440, indexKOF94Sprites_Rugal, 0x01 },
    { L"Electric Palette", 0x17b440, 0x17b460, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x17b460, 0x17b480, indexKOF94Sprites_Rugal, 0x01 },
    { L"Win Portrait", 0x17b480, 0x17b500, indexKOF94Sprites_Rugal, 0x30 },
    { L"Lifebar Portrait", 0x17b500, 0x17b520, indexKOF94Sprites_Rugal, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17b520, 0x17b540, indexKOF94Sprites_Rugal, 0x20 },
    { L"Darker Palette", 0x17b540, 0x17b560, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x17b560, 0x17b580, indexKOF94Sprites_Rugal, 0x01 },
    { L"MAX Flash", 0x17b580, 0x17b5a0, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x17b5a0, 0x17b5c0, indexKOF94Sprites_Rugal, 0x01 },
};

const sGame_PaletteDataset KOF94_A_RUGAL_ALT_PALETTES[] =
{
    { L"Rugal", 0x17b5c0, 0x17b5e0, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"Extra 1", 0x17b5e0, 0x17b600, indexKOF94Sprites_Rugal, 0x01 },
    { L"Electric Palette", 0x17b600, 0x17b620, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"Electric Palette Extra", 0x17b620, 0x17b640, indexKOF94Sprites_Rugal, 0x01 },
    { L"Win Portrait", 0x17b640, 0x17b6c0, indexKOF94Sprites_Rugal, 0x30 },
    { L"Lifebar Portrait", 0x17b6c0, 0x17b6e0, indexKOF94Sprites_Rugal, 0x20 },
    { L"Lifebar Portrait Defeated/Grayed", 0x17b6e0, 0x17b700, indexKOF94Sprites_Rugal, 0x20 },
    { L"Darker Palette", 0x17b700, 0x17b720, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"Darker Palette Extra", 0x17b720, 0x17b740, indexKOF94Sprites_Rugal, 0x01 },
    { L"MAX Flash", 0x17b740, 0x17b760, indexKOF94Sprites_Rugal, 0x00, &pairNext },
    { L"MAX Flash Extra", 0x17b760, 0x17b780, indexKOF94Sprites_Rugal, 0x01 },
};

const sDescTreeNode KOF94_A_HEIDERN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_HEIDERN_MAIN_PALETTES, ARRAYSIZE(KOF94_A_HEIDERN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_HEIDERN_ALT_PALETTES, ARRAYSIZE(KOF94_A_HEIDERN_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_RALF_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_RALF_MAIN_PALETTES, ARRAYSIZE(KOF94_A_RALF_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_RALF_ALT_PALETTES, ARRAYSIZE(KOF94_A_RALF_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_CLARK_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CLARK_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CLARK_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CLARK_ALT_PALETTES, ARRAYSIZE(KOF94_A_CLARK_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_ATHENA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_ATHENA_MAIN_PALETTES, ARRAYSIZE(KOF94_A_ATHENA_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_ATHENA_ALT_PALETTES, ARRAYSIZE(KOF94_A_ATHENA_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_KENSOU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KENSOU_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KENSOU_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KENSOU_ALT_PALETTES, ARRAYSIZE(KOF94_A_KENSOU_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_CHIN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CHIN_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CHIN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CHIN_ALT_PALETTES, ARRAYSIZE(KOF94_A_CHIN_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_KYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KYO_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KYO_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KYO_ALT_PALETTES, ARRAYSIZE(KOF94_A_KYO_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_BENIMARU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_BENIMARU_MAIN_PALETTES, ARRAYSIZE(KOF94_A_BENIMARU_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_BENIMARU_ALT_PALETTES, ARRAYSIZE(KOF94_A_BENIMARU_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_DAIMON_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_DAIMON_MAIN_PALETTES, ARRAYSIZE(KOF94_A_DAIMON_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_DAIMON_ALT_PALETTES, ARRAYSIZE(KOF94_A_DAIMON_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_HEAVYD_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_HEAVYD_MAIN_PALETTES, ARRAYSIZE(KOF94_A_HEAVYD_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_HEAVYD_ALT_PALETTES, ARRAYSIZE(KOF94_A_HEAVYD_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_LUCKY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_LUCKY_MAIN_PALETTES, ARRAYSIZE(KOF94_A_LUCKY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_LUCKY_ALT_PALETTES, ARRAYSIZE(KOF94_A_LUCKY_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_BRIAN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_BRIAN_MAIN_PALETTES, ARRAYSIZE(KOF94_A_BRIAN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_BRIAN_ALT_PALETTES, ARRAYSIZE(KOF94_A_BRIAN_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_KIM_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KIM_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KIM_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KIM_ALT_PALETTES, ARRAYSIZE(KOF94_A_KIM_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_CHANG_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CHANG_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CHANG_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CHANG_ALT_PALETTES, ARRAYSIZE(KOF94_A_CHANG_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_CHOI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CHOI_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CHOI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CHOI_ALT_PALETTES, ARRAYSIZE(KOF94_A_CHOI_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_TERRY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_TERRY_MAIN_PALETTES, ARRAYSIZE(KOF94_A_TERRY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_TERRY_ALT_PALETTES, ARRAYSIZE(KOF94_A_TERRY_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_ANDY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_ANDY_MAIN_PALETTES, ARRAYSIZE(KOF94_A_ANDY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_ANDY_ALT_PALETTES, ARRAYSIZE(KOF94_A_ANDY_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_JOE_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_JOE_MAIN_PALETTES, ARRAYSIZE(KOF94_A_JOE_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_JOE_ALT_PALETTES, ARRAYSIZE(KOF94_A_JOE_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_RYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_RYO_MAIN_PALETTES, ARRAYSIZE(KOF94_A_RYO_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_RYO_ALT_PALETTES, ARRAYSIZE(KOF94_A_RYO_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_ROBERT_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_ROBERT_MAIN_PALETTES, ARRAYSIZE(KOF94_A_ROBERT_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_ROBERT_ALT_PALETTES, ARRAYSIZE(KOF94_A_ROBERT_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_TAKUMA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_TAKUMA_MAIN_PALETTES, ARRAYSIZE(KOF94_A_TAKUMA_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_TAKUMA_ALT_PALETTES, ARRAYSIZE(KOF94_A_TAKUMA_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_YURI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_YURI_MAIN_PALETTES, ARRAYSIZE(KOF94_A_YURI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_YURI_ALT_PALETTES, ARRAYSIZE(KOF94_A_YURI_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_MAI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_MAI_MAIN_PALETTES, ARRAYSIZE(KOF94_A_MAI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_MAI_ALT_PALETTES, ARRAYSIZE(KOF94_A_MAI_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_KING_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KING_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KING_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KING_ALT_PALETTES, ARRAYSIZE(KOF94_A_KING_ALT_PALETTES) },
};

const sDescTreeNode KOF94_A_RUGAL_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_RUGAL_MAIN_PALETTES, ARRAYSIZE(KOF94_A_RUGAL_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_RUGAL_ALT_PALETTES, ARRAYSIZE(KOF94_A_RUGAL_ALT_PALETTES) },
};

const sGame_PaletteDataset KOF94_A_BONUS_PALETTES[] =
{
    { L"Fire Palette", 0x17b780, 0x17b980 },
    { L"Gigantic Pressure Palette", 0x17bb00, 0x17bd00 },
};

const sDescTreeNode KOF94_A_BONUS_COLLECTION[] =
{
    { L"Effect Palettes", DESC_NODETYPE_TREE, (void*)KOF94_A_BONUS_PALETTES, ARRAYSIZE(KOF94_A_BONUS_PALETTES) },
};

const sDescTreeNode KOF94_A_UNITS[] =
{
    { L"Heidern", DESC_NODETYPE_TREE, (void*)KOF94_A_HEIDERN_COLLECTION, ARRAYSIZE(KOF94_A_HEIDERN_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF94_A_RALF_COLLECTION, ARRAYSIZE(KOF94_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF94_A_CLARK_COLLECTION, ARRAYSIZE(KOF94_A_CLARK_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF94_A_ATHENA_COLLECTION, ARRAYSIZE(KOF94_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF94_A_KENSOU_COLLECTION, ARRAYSIZE(KOF94_A_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF94_A_CHIN_COLLECTION, ARRAYSIZE(KOF94_A_CHIN_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF94_A_KYO_COLLECTION, ARRAYSIZE(KOF94_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF94_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF94_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF94_A_DAIMON_COLLECTION, ARRAYSIZE(KOF94_A_DAIMON_COLLECTION) },
    { L"Heavy D!", DESC_NODETYPE_TREE, (void*)KOF94_A_HEAVYD_COLLECTION, ARRAYSIZE(KOF94_A_HEAVYD_COLLECTION) },
    { L"Lucky", DESC_NODETYPE_TREE, (void*)KOF94_A_LUCKY_COLLECTION, ARRAYSIZE(KOF94_A_LUCKY_COLLECTION) },
    { L"Brian", DESC_NODETYPE_TREE, (void*)KOF94_A_BRIAN_COLLECTION, ARRAYSIZE(KOF94_A_BRIAN_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF94_A_KIM_COLLECTION, ARRAYSIZE(KOF94_A_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF94_A_CHANG_COLLECTION, ARRAYSIZE(KOF94_A_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF94_A_CHOI_COLLECTION, ARRAYSIZE(KOF94_A_CHOI_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF94_A_TERRY_COLLECTION, ARRAYSIZE(KOF94_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF94_A_ANDY_COLLECTION, ARRAYSIZE(KOF94_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF94_A_JOE_COLLECTION, ARRAYSIZE(KOF94_A_JOE_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF94_A_RYO_COLLECTION, ARRAYSIZE(KOF94_A_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF94_A_ROBERT_COLLECTION, ARRAYSIZE(KOF94_A_ROBERT_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF94_A_TAKUMA_COLLECTION, ARRAYSIZE(KOF94_A_TAKUMA_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF94_A_YURI_COLLECTION, ARRAYSIZE(KOF94_A_YURI_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF94_A_MAI_COLLECTION, ARRAYSIZE(KOF94_A_MAI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF94_A_KING_COLLECTION, ARRAYSIZE(KOF94_A_KING_COLLECTION) },
    { L"Rugal", DESC_NODETYPE_TREE, (void*)KOF94_A_RUGAL_COLLECTION, ARRAYSIZE(KOF94_A_RUGAL_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KOF94_A_BONUS_COLLECTION, ARRAYSIZE(KOF94_A_BONUS_COLLECTION) },
};

constexpr auto KOF94_A_NUMUNIT = ARRAYSIZE(KOF94_A_UNITS);

#define KOF94_A_EXTRALOC KOF94_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF94_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

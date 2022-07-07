#pragma once

const std::vector<uint16_t> DANKUGA_A_IMGIDS_USED =
{
    indexDanKuGa_Azteca,            // 0x00
    indexDanKuGa_Barts,             // 0x01
    indexDanKuGa_Boggy,             // 0x02
    indexDanKuGa_Gekkou,            // 0x03
    indexDanKuGa_Gonzales,          // 0x04
    indexDanKuGa_JMcCoy,            // 0x05
    indexDanKuGa_Kazuya,            // 0x06
    indexDanKuGa_Lihua,             // 0x07
    indexDanKuGa_Liza,              // 0x08
    indexDanKuGa_Marco,             // 0x09
    indexDanKuGa_Wulong,            // 0x0A
    indexDanKuGa_Bonus,             // 0x0B
    indexDanKuGa_General,           // 0x0C
};

const sGame_PaletteDataset DANKUGA_A_KAZUYA_PUNCH_PALETTES[] =
{
    { L"Kazuya Character Punch", 0x2d538, 0x2d578, indexDanKuGa_Kazuya, 0x0 },
    { L"Kazuya Winquote Portrait Punch", 0x47180, 0x471c0, indexDanKuGa_Kazuya, 0x41 },
    { L"Kazuya Select Screen Punch", 0x2e5b8, 0x2e5f8, indexDanKuGa_Kazuya, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_KAZUYA_KICK_PALETTES[] =
{
    { L"Kazuya Character Kick", 0x2d578, 0x2d5b8, indexDanKuGa_Kazuya, 0x0 },
    { L"Kazuya Winquote Portrait Kick", 0x471c0, 0x47200, indexDanKuGa_Kazuya, 0x41 },
    { L"Kazuya Select Screen Kick", 0x2e5f8, 0x2e638, indexDanKuGa_Kazuya, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_KAZUYA_START_PALETTES[] =
{
    { L"Kazuya Character Start", 0x2d5b8, 0x2d5f8, indexDanKuGa_Kazuya, 0x0 },
    { L"Kazuya Winquote Portrait Start", 0x47200, 0x47240, indexDanKuGa_Kazuya, 0x41 },
    { L"Kazuya Select Screen Start", 0x2e638, 0x2e678, indexDanKuGa_Kazuya, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_KAZUYA_OTHER_PALETTES[] =
{
    { L"Kazuya Character Training", 0x2d5f8, 0x2d638, indexDanKuGa_Kazuya, 0x0 },
    { L"Kazuya Winquote Portrait Unused", 0x47240, 0x47280, indexDanKuGa_Kazuya, 0x41 },
};

const sGame_PaletteDataset DANKUGA_A_BARTS_PUNCH_PALETTES[] =
{
    { L"Barts Character Punch", 0x2d638, 0x2d678, indexDanKuGa_Barts, 0x0 },
    { L"Barts Winquote Portrait Punch", 0x47280, 0x472c0 },
    { L"Barts Select Screen Punch", 0x2e678, 0x2e6b8, indexDanKuGa_Barts, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_BARTS_KICK_PALETTES[] =
{
    { L"Barts Character Kick", 0x2d678, 0x2d6b8, indexDanKuGa_Barts, 0x0 },
    { L"Barts Winquote Portrait Kick", 0x472c0, 0x47300 },
    { L"Barts Select Screen Kick", 0x2e6b8, 0x2e6f8, indexDanKuGa_Barts, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_BARTS_START_PALETTES[] =
{
    { L"Barts Character Start", 0x2d6b8, 0x2d6f8, indexDanKuGa_Barts, 0x0 },
    { L"Barts Winquote Portrait Start", 0x47300, 0x47340 },
    { L"Barts Select Screen Start", 0x2e6f8, 0x2e738, indexDanKuGa_Barts, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_BARTS_OTHER_PALETTES[] =
{
    { L"Barts Character Training", 0x2d6f8, 0x2d738, indexDanKuGa_Barts, 0x0 },
    { L"Barts Winquote Portrait Unused", 0x47340, 0x47380 },
};

const sGame_PaletteDataset DANKUGA_A_GEKKOU_PUNCH_PALETTES[] =
{
    { L"Gekkou Character Punch", 0x2d738, 0x2d778, indexDanKuGa_Gekkou, 0x0 },
    { L"Gekkou Winquote Portrait Punch", 0x47380, 0x473c0 },
    { L"Gekkou Select Screen Punch", 0x2e738, 0x2e778, indexDanKuGa_Gekkou, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_GEKKOU_KICK_PALETTES[] =
{
    { L"Gekkou Character Kick", 0x2d778, 0x2d7b8, indexDanKuGa_Gekkou, 0x0 },
    { L"Gekkou Winquote Portrait Kick", 0x473c0, 0x47400 },
    { L"Gekkou Select Screen Kick", 0x2e778, 0x2e7b8, indexDanKuGa_Gekkou, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_GEKKOU_START_PALETTES[] =
{
    { L"Gekkou Character Start", 0x2d7b8, 0x2d7f8, indexDanKuGa_Gekkou, 0x0 },
    { L"Gekkou Winquote Portrait Start", 0x47400, 0x47440 },
    { L"Gekkou Select Screen Start", 0x2e7b8, 0x2e7f8, indexDanKuGa_Gekkou, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_GEKKOU_OTHER_PALETTES[] =
{
    { L"Gekkou Character Training", 0x2d7f8, 0x2d838, indexDanKuGa_Gekkou, 0x0 },
    { L"Gekkou Winquote Portrait Unused", 0x47440, 0x47480 },
};

const sGame_PaletteDataset DANKUGA_A_WULONG_PUNCH_PALETTES[] =
{
    { L"Wulong Character Punch", 0x2d838, 0x2d878, indexDanKuGa_Wulong, 0x0 },
    { L"Wulong Winquote Portrait Punch", 0x47480, 0x474c0 },
    { L"Wulong Select Screen Punch", 0x2e7f8, 0x2e838, indexDanKuGa_Wulong, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_WULONG_KICK_PALETTES[] =
{
    { L"Wulong Character Kick", 0x2d878, 0x2d8b8, indexDanKuGa_Wulong, 0x0 },
    { L"Wulong Winquote Portrait Kick", 0x474c0, 0x47500 },
    { L"Wulong Select Screen Kick", 0x2e838, 0x2e878, indexDanKuGa_Wulong, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_WULONG_START_PALETTES[] =
{
    { L"Wulong Character Start", 0x2d8b8, 0x2d8f8, indexDanKuGa_Wulong, 0x0 },
    { L"Wulong Winquote Portrait Start", 0x47500, 0x47540 },
    { L"Wulong Select Screen Start", 0x2e878, 0x2e8b8, indexDanKuGa_Wulong, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_WULONG_OTHER_PALETTES[] =
{
    { L"Wulong Character Training", 0x2d8f8, 0x2d938, indexDanKuGa_Wulong, 0x0 },
    { L"Wulong Winquote Portrait Unused", 0x47540, 0x47580 },
};

const sGame_PaletteDataset DANKUGA_A_LIHUA_PUNCH_PALETTES[] =
{
    { L"Lihua Character Punch", 0x2d938, 0x2d978, indexDanKuGa_Lihua, 0x0 },
    { L"Lihua Winquote Portrait Punch", 0x47580, 0x475c0 },
    { L"Lihua Select Screen Punch", 0x2e8b8, 0x2e8f8, indexDanKuGa_Lihua, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_LIHUA_KICK_PALETTES[] =
{
    { L"Lihua Character Kick", 0x2d978, 0x2d9b8, indexDanKuGa_Lihua, 0x0 },
    { L"Lihua Winquote Portrait Kick", 0x475c0, 0x47600 },
    { L"Lihua Select Screen Kick", 0x2e8f8, 0x2e938, indexDanKuGa_Lihua, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_LIHUA_START_PALETTES[] =
{
    { L"Lihua Character Start", 0x2d9b8, 0x2d9f8, indexDanKuGa_Lihua, 0x0 },
    { L"Lihua Winquote Portrait Start", 0x47600, 0x47640 },
    { L"Lihua Select Screen Start", 0x2e938, 0x2e978, indexDanKuGa_Lihua, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_LIHUA_OTHER_PALETTES[] =
{
    { L"Lihua Character Training", 0x2d9f8, 0x2da38, indexDanKuGa_Lihua, 0x0 },
    { L"Lihua Winquote Portrait Unused", 0x47640, 0x47680 },
};

const sGame_PaletteDataset DANKUGA_A_LIZA_PUNCH_PALETTES[] =
{
    { L"Liza Character Punch", 0x2da38, 0x2da78, indexDanKuGa_Liza, 0x0 },
    { L"Kiki Character Punch", 0x2e138, 0x2e178 },
    { L"Toto Character Punch", 0x2e1f8, 0x2e238 },
    { L"Liza Winquote Portrait Punch", 0x47680, 0x476c0 },
    { L"Liza Select Screen Punch", 0x2e978, 0x2e9b8, indexDanKuGa_Liza, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_LIZA_KICK_PALETTES[] =
{
    { L"Liza Character Kick", 0x2da78, 0x2dab8, indexDanKuGa_Liza, 0x0 },
    { L"Kiki Character Kick", 0x2e178, 0x2e1b8 },
    { L"Toto Character Kick", 0x2e238, 0x2e278 },
    { L"Liza Winquote Portrait Kick", 0x476c0, 0x47700 },
    { L"Liza Select Screen Kick", 0x2e9b8, 0x2e9f8, indexDanKuGa_Liza, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_LIZA_START_PALETTES[] =
{
    { L"Liza Character Start", 0x2dab8, 0x2daf8, indexDanKuGa_Liza, 0x0 },
    { L"Kiki Character Start", 0x2e1b8, 0x2e1f8 },
    { L"Toto Character Start", 0x2e278, 0x2e2b8 },
    { L"Liza Winquote Portrait Start", 0x47700, 0x47740 },
    { L"Liza Select Screen Start", 0x2e9f8, 0x2ea38, indexDanKuGa_Liza, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_LIZA_OTHER_PALETTES[] =
{
    { L"Liza Character Training", 0x2daf8, 0x2db38, indexDanKuGa_Liza, 0x0 },
    { L"Liza Winquote Portrait Unused", 0x47740, 0x47780 },
};

const sGame_PaletteDataset DANKUGA_A_MCCOY_PUNCH_PALETTES[] =
{
    { L"McCoy Character Punch", 0x2db38, 0x2db78, indexDanKuGa_JMcCoy, 0x0 },
    { L"McCoy Winquote Portrait Punch", 0x47780, 0x477c0 },
    { L"McCoy Select Screen Punch", 0x2ea38, 0x2ea78, indexDanKuGa_JMcCoy, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_MCCOY_KICK_PALETTES[] =
{
    { L"McCoy Character Kick", 0x2db78, 0x2dbb8, indexDanKuGa_JMcCoy, 0x0 },
    { L"McCoy Winquote Portrait Kick", 0x477c0, 0x47800 },
    { L"McCoy Select Screen Kick", 0x2ea78, 0x2eab8, indexDanKuGa_JMcCoy, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_MCCOY_START_PALETTES[] =
{
    { L"McCoy Character Start", 0x2dbb8, 0x2dbf8, indexDanKuGa_JMcCoy, 0x0 },
    { L"McCoy Winquote Portrait Start", 0x47800, 0x47840 },
    { L"McCoy Select Screen Start", 0x2eab8, 0x2eaf8, indexDanKuGa_JMcCoy, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_MCCOY_OTHER_PALETTES[] =
{
    { L"McCoy Character Training", 0x2dbf8, 0x2dc38, indexDanKuGa_JMcCoy, 0x0 },
    { L"McCoy Winquote Portrait Unused", 0x47840, 0x47880 },
};

const sGame_PaletteDataset DANKUGA_A_BOGGY_PUNCH_PALETTES[] =
{
    { L"Boggy Character Punch", 0x2dc38, 0x2dc78, indexDanKuGa_Boggy, 0x0 },
    { L"Boggy Winquote Portrait Punch", 0x47880, 0x478c0 },
    { L"Boggy Select Screen Punch", 0x2eaf8, 0x2eb38, indexDanKuGa_Boggy, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_BOGGY_KICK_PALETTES[] =
{
    { L"Boggy Character Kick", 0x2dc78, 0x2dcb8, indexDanKuGa_Boggy, 0x0 },
    { L"Boggy Winquote Portrait Kick", 0x478c0, 0x47900 },
    { L"Boggy Select Screen Kick", 0x2eb38, 0x2eb78, indexDanKuGa_Boggy, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_BOGGY_START_PALETTES[] =
{
    { L"Boggy Character Start", 0x2dcb8, 0x2dcf8, indexDanKuGa_Boggy, 0x0 },
    { L"Boggy Winquote Portrait Start", 0x47900, 0x47940 },
    { L"Boggy Select Screen Start", 0x2eb78, 0x2ebb8, indexDanKuGa_Boggy, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_BOGGY_OTHER_PALETTES[] =
{
    { L"Boggy Character Training", 0x2dcf8, 0x2dd38, indexDanKuGa_Boggy, 0x0 },
    { L"Boggy Winquote Portrait Unused", 0x47940, 0x47980 },
};

const sGame_PaletteDataset DANKUGA_A_GONZALES_PUNCH_PALETTES[] =
{
    { L"Gonzales Character Punch", 0x2dd38, 0x2dd78, indexDanKuGa_Gonzales, 0x0 },
    { L"Gonzales Winquote Portrait Punch", 0x47980, 0x479c0 },
    { L"Gonzales Select Screen Punch", 0x2ebb8, 0x2ebf8, indexDanKuGa_Gonzales, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_GONZALES_KICK_PALETTES[] =
{
    { L"Gonzales Character Kick", 0x2dd78, 0x2ddb8, indexDanKuGa_Gonzales, 0x0 },
    { L"Gonzales Winquote Portrait Kick", 0x479c0, 0x47a00 },
    { L"Gonzales Select Screen Kick", 0x2ebf8, 0x2ec38, indexDanKuGa_Gonzales, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_GONZALES_START_PALETTES[] =
{
    { L"Gonzales Character Start", 0x2ddb8, 0x2ddf8, indexDanKuGa_Gonzales, 0x0 },
    { L"Gonzales Winquote Portrait Start", 0x47a00, 0x47a40 },
    { L"Gonzales Select Screen Start", 0x2ec38, 0x2ec78, indexDanKuGa_Gonzales, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_GONZALES_OTHER_PALETTES[] =
{
    { L"Gonzales Character Training", 0x2ddf8, 0x2de38, indexDanKuGa_Gonzales, 0x0 },
    { L"Gonzales Winquote Portrait Unused", 0x47a40, 0x47a80 },
};

const sGame_PaletteDataset DANKUGA_A_AZTECA_PUNCH_PALETTES[] =
{
    { L"Azteca Character Punch", 0x2de38, 0x2de78, indexDanKuGa_Azteca, 0x0 },
    { L"Azteca Winquote Portrait Punch", 0x47a80, 0x47ac0 },
    { L"Azteca Select Screen Punch", 0x2ec78, 0x2ecb8, indexDanKuGa_Azteca, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_AZTECA_KICK_PALETTES[] =
{
    { L"Azteca Character Kick", 0x2de78, 0x2deb8, indexDanKuGa_Azteca, 0x0 },
    { L"Azteca Winquote Portrait Kick", 0x47ac0, 0x47b00 },
    { L"Azteca Select Screen Kick", 0x2ecb8, 0x2ecf8, indexDanKuGa_Azteca, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_AZTECA_START_PALETTES[] =
{
    { L"Azteca Character Start", 0x2deb8, 0x2def8, indexDanKuGa_Azteca, 0x0 },
    { L"Azteca Winquote Portrait Start", 0x47b00, 0x47b40 },
    { L"Azteca Select Screen Start", 0x2ecf8, 0x2ed38, indexDanKuGa_Azteca, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_AZTECA_OTHER_PALETTES[] =
{
    { L"Azteca Character Training", 0x2def8, 0x2df38, indexDanKuGa_Azteca, 0x0 },
    { L"Azteca Winquote Portrait Unused", 0x47b40, 0x47b80 },
};

const sGame_PaletteDataset DANKUGA_A_MARCO_PUNCH_PALETTES[] =
{
    { L"Marco Character Punch", 0x2df38, 0x2df78, indexDanKuGa_Marco, 0x0 },
    { L"Marco Winquote Portrait Punch", 0x47b80, 0x47bc0 },
    { L"Marco Select Screen Punch", 0x2ed38, 0x2ed78, indexDanKuGa_Marco, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_MARCO_KICK_PALETTES[] =
{
    { L"Marco Character Kick", 0x2df78, 0x2dfb8, indexDanKuGa_Marco, 0x0 },
    { L"Marco Winquote Portrait Kick", 0x47bc0, 0x47c00 },
    { L"Marco Select Screen Kick", 0x2ed78, 0x2edb8, indexDanKuGa_Marco, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_MARCO_START_PALETTES[] =
{
    { L"Marco Character Start", 0x2dfb8, 0x2dff8, indexDanKuGa_Marco, 0x0 },
    { L"Marco Winquote Portrait Start", 0x47c00, 0x47c40 },
    { L"Marco Select Screen Start", 0x2edb8, 0x2edf8, indexDanKuGa_Marco, 0x40 },
};

const sGame_PaletteDataset DANKUGA_A_MARCO_OTHER_PALETTES[] =
{
    { L"Marco Character Training", 0x2dff8, 0x2e038, indexDanKuGa_Marco, 0x0 },
    { L"Marco Winquote Portrait Unused", 0x47c40, 0x47c80 },
};

const sGame_PaletteDataset DANKUGA_A_GENERAL_PUNCH_PALETTES[] =
{
    { L"General Character Punch", 0x2e038, 0x2e078, indexDanKuGa_General, 0x0 },
    { L"General Winquote Portrait Punch", 0x47c80, 0x47cc0 },
    { L"General Select Screen Punch", 0x2edf8, 0x2ee38 },
};

const sGame_PaletteDataset DANKUGA_A_GENERAL_KICK_PALETTES[] =
{
    { L"General Character Kick", 0x2e078, 0x2e0b8, indexDanKuGa_General, 0x0 },
    { L"General Winquote Portrait Kick", 0x47cc0, 0x47d00 },
    { L"General Select Screen Kick", 0x2ee38, 0x2ee78 },
};

const sGame_PaletteDataset DANKUGA_A_GENERAL_START_PALETTES[] =
{
    { L"General Character Start", 0x2e0b8, 0x2e0f8, indexDanKuGa_General, 0x0 },
    { L"General Winquote Portrait Start", 0x47d00, 0x47d40 },
    { L"General Select Screen Start", 0x2ee78, 0x2eeb8 },
};

const sGame_PaletteDataset DANKUGA_A_GENERAL_OTHER_PALETTES[] =
{
    { L"General Character Training", 0x2e0f8, 0x2e138, indexDanKuGa_General, 0x0 },
    { L"General Winquote Portrait Unused", 0x47d40, 0x47d80 },
};

const sGame_PaletteDataset DANKUGA_A_BONUS_PALETTES_CSN[] =
{
    { L"Kazuya Name", 0x2eeb8, 0x2eef8, indexDanKuGa_Bonus, 0x01 },
    { L"Bartz Name", 0x2eef8, 0x2ef38, indexDanKuGa_Bonus, 0x00 },
    { L"Gekkou Name", 0x2ef38, 0x2ef78 },
    { L"Wulong Name", 0x2ef78, 0x2efb8 },
    { L"Lihua Name", 0x2efb8, 0x2eff8 },
    { L"Liza Name", 0x2eff8, 0x2f038 },
    { L"McCoy Name", 0x2f038, 0x2f078 },
    { L"Boggy Name", 0x2f078, 0x2f0b8 },
    { L"Gonzales Name", 0x2f0b8, 0x2f0f8 },

    { L"Azteca Name", 0x2f0f8, 0x2f138 },
    { L"Marco Name", 0x2f138, 0x2f178 },
    { L"General Name", 0x2f178, 0x2f1b8 },
};

const sGame_PaletteDataset DANKUGA_A_BONUS_PALETTES_OTHER[] =
{
    { L"Menu Background", 0xc2e80, 0xc2ea0 },
};

const sDescTreeNode DANKUGA_A_KAZUYA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_KAZUYA_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_KAZUYA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_KAZUYA_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_KAZUYA_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_KAZUYA_START_PALETTES, ARRAYSIZE(DANKUGA_A_KAZUYA_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_KAZUYA_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_KAZUYA_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_BARTS_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BARTS_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_BARTS_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BARTS_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_BARTS_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BARTS_START_PALETTES, ARRAYSIZE(DANKUGA_A_BARTS_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BARTS_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_BARTS_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_GEKKOU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GEKKOU_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_GEKKOU_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GEKKOU_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_GEKKOU_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GEKKOU_START_PALETTES, ARRAYSIZE(DANKUGA_A_GEKKOU_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GEKKOU_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_GEKKOU_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_WULONG_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_WULONG_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_WULONG_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_WULONG_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_WULONG_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_WULONG_START_PALETTES, ARRAYSIZE(DANKUGA_A_WULONG_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_WULONG_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_WULONG_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_LIHUA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIHUA_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_LIHUA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIHUA_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_LIHUA_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIHUA_START_PALETTES, ARRAYSIZE(DANKUGA_A_LIHUA_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIHUA_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_LIHUA_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_LIZA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIZA_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_LIZA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIZA_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_LIZA_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIZA_START_PALETTES, ARRAYSIZE(DANKUGA_A_LIZA_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIZA_OTHER_PALETTES,ARRAYSIZE(DANKUGA_A_LIZA_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_MCCOY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MCCOY_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_MCCOY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MCCOY_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_MCCOY_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MCCOY_START_PALETTES, ARRAYSIZE(DANKUGA_A_MCCOY_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MCCOY_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_MCCOY_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_BOGGY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BOGGY_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_BOGGY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BOGGY_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_BOGGY_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BOGGY_START_PALETTES, ARRAYSIZE(DANKUGA_A_BOGGY_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BOGGY_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_BOGGY_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_GONZALES_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GONZALES_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_GONZALES_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GONZALES_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_GONZALES_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GONZALES_START_PALETTES, ARRAYSIZE(DANKUGA_A_GONZALES_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GONZALES_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_GONZALES_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_AZTECA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_AZTECA_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_AZTECA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_AZTECA_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_AZTECA_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_AZTECA_START_PALETTES, ARRAYSIZE(DANKUGA_A_AZTECA_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_AZTECA_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_AZTECA_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_MARCO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MARCO_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_MARCO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MARCO_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_MARCO_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MARCO_START_PALETTES, ARRAYSIZE(DANKUGA_A_MARCO_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_MARCO_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_MARCO_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_GENERAL_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GENERAL_PUNCH_PALETTES, ARRAYSIZE(DANKUGA_A_GENERAL_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GENERAL_KICK_PALETTES, ARRAYSIZE(DANKUGA_A_GENERAL_KICK_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE,(void*)DANKUGA_A_GENERAL_START_PALETTES, ARRAYSIZE(DANKUGA_A_GENERAL_START_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_GENERAL_OTHER_PALETTES, ARRAYSIZE(DANKUGA_A_GENERAL_OTHER_PALETTES) },
};

const sDescTreeNode DANKUGA_A_BONUS_COLLECTION[] =
{
    { L"Character Select Names", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BONUS_PALETTES_CSN, ARRAYSIZE(DANKUGA_A_BONUS_PALETTES_CSN) },
    { L"Other", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BONUS_PALETTES_OTHER, ARRAYSIZE(DANKUGA_A_BONUS_PALETTES_OTHER) },
};

const sDescTreeNode DANKUGA_A_UNITS[] =
{
    { L"Kazuya",    DESC_NODETYPE_TREE, (void*)DANKUGA_A_KAZUYA_COLLECTION, ARRAYSIZE(DANKUGA_A_KAZUYA_COLLECTION) },
    { L"Barts",     DESC_NODETYPE_TREE, (void*)DANKUGA_A_BARTS_COLLECTION, ARRAYSIZE(DANKUGA_A_BARTS_COLLECTION) },
    { L"Gekkou",    DESC_NODETYPE_TREE, (void*)DANKUGA_A_GEKKOU_COLLECTION, ARRAYSIZE(DANKUGA_A_GEKKOU_COLLECTION) },
    { L"Wulong",    DESC_NODETYPE_TREE, (void*)DANKUGA_A_WULONG_COLLECTION, ARRAYSIZE(DANKUGA_A_WULONG_COLLECTION) },
    { L"Lihua",     DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIHUA_COLLECTION, ARRAYSIZE(DANKUGA_A_LIHUA_COLLECTION) },
    { L"Liza",      DESC_NODETYPE_TREE, (void*)DANKUGA_A_LIZA_COLLECTION, ARRAYSIZE(DANKUGA_A_LIZA_COLLECTION) },
    { L"McCoy",     DESC_NODETYPE_TREE, (void*)DANKUGA_A_MCCOY_COLLECTION, ARRAYSIZE(DANKUGA_A_MCCOY_COLLECTION) },
    { L"Boggy",     DESC_NODETYPE_TREE, (void*)DANKUGA_A_BOGGY_COLLECTION, ARRAYSIZE(DANKUGA_A_BOGGY_COLLECTION) },
    { L"Gonzales",  DESC_NODETYPE_TREE, (void*)DANKUGA_A_GONZALES_COLLECTION, ARRAYSIZE(DANKUGA_A_GONZALES_COLLECTION) },
    { L"Azteca",    DESC_NODETYPE_TREE, (void*)DANKUGA_A_AZTECA_COLLECTION, ARRAYSIZE(DANKUGA_A_AZTECA_COLLECTION) },
    { L"Marco",     DESC_NODETYPE_TREE, (void*)DANKUGA_A_MARCO_COLLECTION, ARRAYSIZE(DANKUGA_A_MARCO_COLLECTION) },
    { L"General",   DESC_NODETYPE_TREE, (void*)DANKUGA_A_GENERAL_COLLECTION, ARRAYSIZE(DANKUGA_A_GENERAL_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)DANKUGA_A_BONUS_COLLECTION, ARRAYSIZE(DANKUGA_A_BONUS_COLLECTION) },
};

constexpr auto DANKUGA_A_NUMUNIT = ARRAYSIZE(DANKUGA_A_UNITS);
constexpr auto DANKUGA_A_EXTRALOC = DANKUGA_A_NUMUNIT;

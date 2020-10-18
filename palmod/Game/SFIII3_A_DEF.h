#pragma once

const sGame_PaletteDataset SFIII3_A_ALEX_LP_PALETTES[] =
{
    { _T("LP Main"), 0x700600, 0x700680, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("LP Portrait"), 0x763be0, 0x763c00, index3S_CPS3_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_MP_PALETTES[] =
{
    { _T("MP Main"), 0x700680, 0x700700, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("MP Portrait"), 0x763c00, 0x763c20, index3S_CPS3_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_HP_PALETTES[] =
{
    { _T("HP Main"), 0x700700, 0x700780, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("HP Portrait"), 0x763c20, 0x763c40, index3S_CPS3_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_LK_PALETTES[] =
{
    { _T("LK Main"), 0x700780, 0x700800, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("LK Portrait"), 0x763c40, 0x763c60, index3S_CPS3_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_MK_PALETTES[] =
{
    { _T("MK Main"), 0x700800, 0x700880, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("MK Portrait"), 0x763c60, 0x763c80, index3S_CPS3_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_HK_PALETTES[] =
{
    { _T("HK Main"), 0x700880, 0x700900, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("HK Portrait"), 0x763c80, 0x763ca0, index3S_CPS3_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_EX_PALETTES[] =
{
    { _T("EX Main"), 0x700900, 0x700980, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("EX Portrait"), 0x763ca0, 0x763cc0, index3S_CPS3_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x764e00, 0x764e80, index3S_CPS3_Alex, 0 },
    { _T("EX Attack (2)"), 0x76ae00, 0x76ae80, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765c00, 0x765c80, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765c80, 0x765d00, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765d00, 0x765d80, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765d80, 0x765e00, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765e00, 0x765e80, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765e80, 0x765f00, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765f00, 0x765f80, index3S_CPS3_Alex, 0 },
    { _T("????"), 0x765f80, 0x766000, index3S_CPS3_Alex, 0 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_EXTRA_PALETTES[] =
{
    // Warning: this is a paired palette, so if you change this please ensure UpdatePalImg handles that update correctly
    { _T("Flash Chop (shared)"), 0x704A80, 0x704B00, index3S_CPS3_Alex, 0x02 },
};

const sGame_PaletteDataset SFIII3_A_RYU_LP_PALETTES[] =
{
    { _T("LP Main"), 0x700980, 0x700a00, index3S_CPS3_Ryu, 0x00 },
    { _T("LP Portrait"), 0x763cc0, 0x763ce0, index3S_CPS3_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_RYU_MP_PALETTES[] =
{
    { _T("MP Main"), 0x700a00, 0x700a80, index3S_CPS3_Ryu, 0x00 },
    { _T("MP Portrait"), 0x763ce0, 0x763d00, index3S_CPS3_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_RYU_HP_PALETTES[] =
{
    { _T("HP Main"), 0x700a80, 0x700b00, index3S_CPS3_Ryu, 0x00 },
    { _T("HP Portrait"), 0x763d00, 0x763d20, index3S_CPS3_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_RYU_LK_PALETTES[] =
{
    { _T("LK Main"), 0x700b00, 0x700b80, index3S_CPS3_Ryu, 0x00 },
    { _T("LK Portrait"), 0x763d20, 0x763d40, index3S_CPS3_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_RYU_MK_PALETTES[] =
{
    { _T("MK Main"), 0x700b80, 0x700c00, index3S_CPS3_Ryu, 0x00 },
    { _T("MK Portrait"), 0x763d40, 0x763d60, index3S_CPS3_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_RYU_HK_PALETTES[] =
{
    { _T("HK Main"), 0x700c00, 0x700c80, index3S_CPS3_Ryu, 0x00 },
    { _T("HK Portrait"), 0x763d60, 0x763d80, index3S_CPS3_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_RYU_EX_PALETTES[] =
{
    { _T("EX Main"), 0x700c80, 0x700d00, index3S_CPS3_Ryu, 0x00 },
    { _T("EX Portrait"), 0x763d80, 0x763da0, index3S_CPS3_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_RYU_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x764e80, 0x764f00, index3S_CPS3_Ryu, 0 },
    { _T("EX Attack (2)"), 0x76ae80, 0x76af00, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766000, 0x766080, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766080, 0x766100, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766100, 0x766180, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766180, 0x766200, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766200, 0x766280, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766280, 0x766300, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766300, 0x766380, index3S_CPS3_Ryu, 0 },
    { _T("????"), 0x766380, 0x766400, index3S_CPS3_Ryu, 0 },
};

const sGame_PaletteDataset SFIII3_A_RYU_EXTRA_PALETTES[] =
{
    { _T("Hadouken"), 0x704B00, 0x704B80, index3S_CPS3_Ryu, 0x2 },
    { _T("Hadouken Impact"), 0x704B80, 0x704C00, index3S_CPS3_Ryu, 0x03 },
    { _T("Shakunetsu (EX Fireball)"), 0x704C00, 0x704C80, index3S_CPS3_Ryu, 0x04 },
};

const sGame_PaletteDataset SFIII3_A_YUN_LP_PALETTES[] =
{
    { _T("LP Main"), 0x700d00, 0x700d80, index3S_CPS3_Yun, 0x00 },
    { _T("LP Portrait"), 0x763da0, 0x763dc0, index3S_CPS3_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YUN_MP_PALETTES[] =
{
    { _T("MP Main"), 0x700d80, 0x700e00, index3S_CPS3_Yun, 0x00 },
    { _T("MP Portrait"), 0x763dc0, 0x763de0, index3S_CPS3_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YUN_HP_PALETTES[] =
{
    { _T("HP Main"), 0x700e00, 0x700e80, index3S_CPS3_Yun, 0x00 },
    { _T("HP Portrait"), 0x763de0, 0x763e00, index3S_CPS3_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YUN_LK_PALETTES[] =
{
    { _T("LK Main"), 0x700e80, 0x700f00, index3S_CPS3_Yun, 0x00 },
    { _T("LK Portrait"), 0x763e00, 0x763e20, index3S_CPS3_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YUN_MK_PALETTES[] =
{
    { _T("MK Main"), 0x700f00, 0x700f80, index3S_CPS3_Yun, 0x00 },
    { _T("MK Portrait"), 0x763e20, 0x763e40, index3S_CPS3_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YUN_HK_PALETTES[] =
{
    { _T("HK Main"), 0x700f80, 0x701000, index3S_CPS3_Yun, 0x00 },
    { _T("HK Portrait"), 0x763e40, 0x763e60, index3S_CPS3_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YUN_EX_PALETTES[] =
{
    { _T("EX Main"), 0x701000, 0x701080, index3S_CPS3_Yun, 0x00 },
    { _T("EX Portrait"), 0x763e60, 0x763e80, index3S_CPS3_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YUN_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x764f00, 0x764f80, index3S_CPS3_Yun, 0 },
    { _T("EX Attack (2)"), 0x76af00, 0x76af80, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766400, 0x766480, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766480, 0x766500, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766500, 0x766580, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766580, 0x766600, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766600, 0x766680, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766680, 0x766700, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766700, 0x766780, index3S_CPS3_Yun, 0 },
    { _T("????"), 0x766780, 0x766800, index3S_CPS3_Yun, 0 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_LP_PALETTES[] =
{
    { _T("LP Main"), 0x701080, 0x701100, index3S_CPS3_Dudley, 0x00 },
    { _T("LP Portrait"), 0x763e80, 0x763ea0, index3S_CPS3_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_MP_PALETTES[] =
{
    { _T("MP Main"), 0x701100, 0x701180, index3S_CPS3_Dudley, 0x00 },
    { _T("MP Portrait"), 0x763ea0, 0x763ec0, index3S_CPS3_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_HP_PALETTES[] =
{
    { _T("HP Main"), 0x701180, 0x701200, index3S_CPS3_Dudley, 0x00 },
    { _T("HP Portrait"), 0x763ec0, 0x763ee0, index3S_CPS3_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_LK_PALETTES[] =
{
    { _T("LK Main"), 0x701200, 0x701280, index3S_CPS3_Dudley, 0x00 },
    { _T("LK Portrait"), 0x763ee0, 0x763f00, index3S_CPS3_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_MK_PALETTES[] =
{
    { _T("MK Main"), 0x701280, 0x701300, index3S_CPS3_Dudley, 0x00 },
    { _T("MK Portrait"), 0x763f00, 0x763f20, index3S_CPS3_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_HK_PALETTES[] =
{
    { _T("HK Main"), 0x701300, 0x701380, index3S_CPS3_Dudley, 0x00 },
    { _T("HK Portrait"), 0x763f20, 0x763f40, index3S_CPS3_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_EX_PALETTES[] =
{
    { _T("EX Main"), 0x701380, 0x701400, index3S_CPS3_Dudley, 0x00 },
    { _T("EX Portrait"), 0x763f40, 0x763f60, index3S_CPS3_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x764f80, 0x765000, index3S_CPS3_Dudley, 0 },
    { _T("EX Attack (2)"), 0x76af80, 0x76b000, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766800, 0x766880, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766880, 0x766900, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766900, 0x766980, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766980, 0x766a00, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766a00, 0x766a80, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766a80, 0x766b00, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766b00, 0x766b80, index3S_CPS3_Dudley, 0 },
    { _T("????"), 0x766b80, 0x766c00, index3S_CPS3_Dudley, 0 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_EXTRA_PALETTES[] =
{
    { _T("P1 Intro car"), 0x704C80, 0x704D00, index3S_CPS3_Dudley, 0x03 },
    { _T("P2 Intro car + shared rose"), 0x704D80, 0x704E00, index3S_CPS3_Dudley, 0x03 },
    { _T("SA1 wind"), 0x704D00, 0x704D80, index3S_CPS3_Dudley, 0x02 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_LP_PALETTES[] =
{
    { _T("LP Main"), 0x701400, 0x701480, index3S_CPS3_Necro, 0x00 },
    { _T("LP Portrait"), 0x763f60, 0x763f80, index3S_CPS3_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_MP_PALETTES[] =
{
    { _T("MP Main"), 0x701480, 0x701500, index3S_CPS3_Necro, 0x00 },
    { _T("MP Portrait"), 0x763f80, 0x763fa0, index3S_CPS3_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_HP_PALETTES[] =
{
    { _T("HP Main"), 0x701500, 0x701580, index3S_CPS3_Necro, 0x00 },
    { _T("HP Portrait"), 0x763fa0, 0x763fc0, index3S_CPS3_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_LK_PALETTES[] =
{
    { _T("LK Main"), 0x701580, 0x701600, index3S_CPS3_Necro, 0x00 },
    { _T("LK Portrait"), 0x763fc0, 0x763fe0, index3S_CPS3_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_MK_PALETTES[] =
{
    { _T("MK Main"), 0x701600, 0x701680, index3S_CPS3_Necro, 0x00 },
    { _T("MK Portrait"), 0x763fe0, 0x764000, index3S_CPS3_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_HK_PALETTES[] =
{
    { _T("HK Main"), 0x701680, 0x701700, index3S_CPS3_Necro, 0x00 },
    { _T("HK Portrait"), 0x764000, 0x764020, index3S_CPS3_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_EX_PALETTES[] =
{
    { _T("EX Main"), 0x701700, 0x701780, index3S_CPS3_Necro, 0x00 },
    { _T("EX Portrait"), 0x764020, 0x764040, index3S_CPS3_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765000, 0x765080, index3S_CPS3_Necro, 0 },
    { _T("EX Attack (2)"), 0x76b000, 0x76b080, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766c00, 0x766c80, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766c80, 0x766d00, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766d00, 0x766d80, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766d80, 0x766e00, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766e00, 0x766e80, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766e80, 0x766f00, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766f00, 0x766f80, index3S_CPS3_Necro, 0 },
    { _T("????"), 0x766f80, 0x767000, index3S_CPS3_Necro, 0 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_EXTRA_PALETTES[] =
{
    { _T("LP SA1 pulse"), 0x704E00, 0x704E80 },
    { _T("LP SA1 Trails"), 0x704E80, 0x704F00 },
    { _T("LP Effie"), 0x704F00, 0x704F80, index3S_CPS3_Necro, 0x2 },
    { _T("MP SA1 pulse"), 0x704F80, 0x705000 },
    { _T("MP SA1 Trails"), 0x705000, 0x705080 },
    { _T("MP Effie"), 0x705080, 0x705100, index3S_CPS3_Necro, 0x2 },
    { _T("HP SA1 pulse"), 0x705100, 0x705180 },
    { _T("HP SA1 Trails"), 0x705180, 0x705200 },
    { _T("HP Effie"), 0x705200, 0x705280, index3S_CPS3_Necro, 0x2 },
    { _T("LK SA1 pulse"), 0x705280, 0x705300 },
    { _T("LK SA1 Trails"), 0x705300, 0x705380 },
    { _T("LK Effie"), 0x705380, 0x705400, index3S_CPS3_Necro, 0x2 },
    { _T("MK SA1 pulse"), 0x705400, 0x705480  },
    { _T("MK SA1 Trails"), 0x705480, 0x705500 },
    { _T("MK Effie"), 0x705500, 0x705580, index3S_CPS3_Necro, 0x2 },
    { _T("HK SA1 pulse"), 0x705580 , 0x705600  },
    { _T("HK SA1 Trails"), 0x705600, 0x705680 },
    { _T("HK Effie"), 0x705680, 0x705700, index3S_CPS3_Necro, 0x2 },
    { _T("EX SA1 pulse"), 0x705700, 0x705780  },
    { _T("EX SA1 Trails"), 0x705780, 0x705800 },
    { _T("EX Effie"), 0x705800, 0x705880, index3S_CPS3_Necro, 0x2 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_LP_PALETTES[] =
{
    { _T("LP Main"), 0x701780, 0x701800, index3S_CPS3_Hugo, 0x00 },
    { _T("LP Portrait"), 0x764040, 0x764060, index3S_CPS3_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_MP_PALETTES[] =
{
    { _T("MP Main"), 0x701800, 0x701880, index3S_CPS3_Hugo, 0x00 },
    { _T("MP Portrait"), 0x764060, 0x764080, index3S_CPS3_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_HP_PALETTES[] =
{
    { _T("HP Main"), 0x701880, 0x701900, index3S_CPS3_Hugo, 0x00 },
    { _T("HP Portrait"), 0x764080, 0x7640a0, index3S_CPS3_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_LK_PALETTES[] =
{
    { _T("LK Main"), 0x701900, 0x701980, index3S_CPS3_Hugo, 0x00 },
    { _T("LK Portrait"), 0x7640a0, 0x7640c0, index3S_CPS3_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_MK_PALETTES[] =
{
    { _T("MK Main"), 0x701980, 0x701a00, index3S_CPS3_Hugo, 0x00 },
    { _T("MK Portrait"), 0x7640c0, 0x7640e0, index3S_CPS3_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_HK_PALETTES[] =
{
    { _T("HK Main"), 0x701a00, 0x701a80, index3S_CPS3_Hugo, 0x00 },
    { _T("HK Portrait"), 0x7640e0, 0x764100, index3S_CPS3_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_EX_PALETTES[] =
{
    { _T("EX Main"), 0x701a80, 0x701b00, index3S_CPS3_Hugo, 0x00 },
    { _T("EX Portrait"), 0x764100, 0x764120, index3S_CPS3_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765080, 0x765100, index3S_CPS3_Hugo, 0 },
    { _T("EX Attack (2)"), 0x76b080, 0x76b100, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767000, 0x767080, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767080, 0x767100, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767100, 0x767180, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767180, 0x767200, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767200, 0x767280, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767280, 0x767300, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767300, 0x767380, index3S_CPS3_Hugo, 0 },
    { _T("????"), 0x767380, 0x767400, index3S_CPS3_Hugo, 0 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_EXTRA_PALETTES[] =
{
    //Hugo
    { _T("Poison P1"), 0x705880, 0x705900, index3S_CPS3_Hugo, 0x02 },
    { _T("Poison P2"), 0x705900, 0x705980, index3S_CPS3_Hugo, 0x02 },
    { _T("Poison EX"), 0x705980, 0x705A00, index3S_CPS3_Hugo, 0x02 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_LP_PALETTES[] =
{
    { _T("LP Main"), 0x701b00, 0x701b80, index3S_CPS3_Ibuki, 0x00 },
    { _T("LP Portrait"), 0x764120, 0x764140, index3S_CPS3_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_MP_PALETTES[] =
{
    { _T("MP Main"), 0x701b80, 0x701c00, index3S_CPS3_Ibuki, 0x00 },
    { _T("MP Portrait"), 0x764140, 0x764160, index3S_CPS3_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_HP_PALETTES[] =
{
    { _T("HP Main"), 0x701c00, 0x701c80, index3S_CPS3_Ibuki, 0x00 },
    { _T("HP Portrait"), 0x764160, 0x764180, index3S_CPS3_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_LK_PALETTES[] =
{
    { _T("LK Main"), 0x701c80, 0x701d00, index3S_CPS3_Ibuki, 0x00 },
    { _T("LK Portrait"), 0x764180, 0x7641a0, index3S_CPS3_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_MK_PALETTES[] =
{
    { _T("MK Main"), 0x701d00, 0x701d80, index3S_CPS3_Ibuki, 0x00 },
    { _T("MK Portrait"), 0x7641a0, 0x7641c0, index3S_CPS3_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_HK_PALETTES[] =
{
    { _T("HK Main"), 0x701d80, 0x701e00, index3S_CPS3_Ibuki, 0x00 },
    { _T("HK Portrait"), 0x7641c0, 0x7641e0, index3S_CPS3_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_EX_PALETTES[] =
{
    { _T("EX Main"), 0x701e00, 0x701e80, index3S_CPS3_Ibuki, 0x00 },
    { _T("EX Portrait"), 0x7641e0, 0x764200, index3S_CPS3_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765100, 0x765180, index3S_CPS3_Ibuki, 0 },
    { _T("EX Attack (2)"), 0x76b100, 0x76b180, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767400, 0x767480, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767480, 0x767500, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767500, 0x767580, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767580, 0x767600, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767600, 0x767680, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767680, 0x767700, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767700, 0x767780, index3S_CPS3_Ibuki, 0 },
    { _T("????"), 0x767780, 0x767800, index3S_CPS3_Ibuki, 0 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_EXTRA_PALETTES[] =
{
    { _T("LP Extras"), 0x705A00, 0x705A80, index3S_CPS3_Ibuki, 0x02 },
    { _T("LP Extras 2"), 0x705A80, 0x705B00 },
    { _T("MP Extras"), 0x705B00, 0x705B80, index3S_CPS3_Ibuki, 0x02 },
    { _T("MP Extras 2"), 0x705B80, 0x705C00 },
    { _T("HP Extras"), 0x705C00, 0x705C80, index3S_CPS3_Ibuki, 0x02 },
    { _T("HP Extras 2"), 0x705C80, 0x705D00 },
    { _T("LK Extras"), 0x705D00, 0x705D80, index3S_CPS3_Ibuki, 0x02 },
    { _T("LK Extras 2"), 0x705D80, 0x705E00 },
    { _T("MK Extras"), 0x705E00, 0x705E80, index3S_CPS3_Ibuki, 0x02 },
    { _T("MK Extras 2"), 0x705E80, 0x705F00 },
    { _T("HK Extras"), 0x705F00, 0x705F80, index3S_CPS3_Ibuki, 0x02 },
    { _T("HK Extras 2"), 0x705F80, 0x706000 },
    { _T("EX Extras"), 0x706000, 0x706080, index3S_CPS3_Ibuki, 0x02 },
    { _T("EX Extras 2"), 0x706080, 0x706100 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_LP_PALETTES[] =
{
    { _T("LP Main"), 0x701e80, 0x701f00, index3S_CPS3_Elena, 0x00 },
    { _T("LP Portrait"), 0x764200, 0x764220, index3S_CPS3_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_MP_PALETTES[] =
{
    { _T("MP Main"), 0x701f00, 0x701f80, index3S_CPS3_Elena, 0x00 },
    { _T("MP Portrait"), 0x764220, 0x764240, index3S_CPS3_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_HP_PALETTES[] =
{
    { _T("HP Main"), 0x701f80, 0x702000, index3S_CPS3_Elena, 0x00 },
    { _T("HP Portrait"), 0x764240, 0x764260, index3S_CPS3_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_LK_PALETTES[] =
{
    { _T("LK Main"), 0x702000, 0x702080, index3S_CPS3_Elena, 0x00 },
    { _T("LK Portrait"), 0x764260, 0x764280, index3S_CPS3_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_MK_PALETTES[] =
{
    { _T("MK Main"), 0x702080, 0x702100, index3S_CPS3_Elena, 0x00 },
    { _T("MK Portrait"), 0x764280, 0x7642a0, index3S_CPS3_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_HK_PALETTES[] =
{
    { _T("HK Main"), 0x702100, 0x702180, index3S_CPS3_Elena, 0x00 },
    { _T("HK Portrait"), 0x7642a0, 0x7642c0, index3S_CPS3_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_EX_PALETTES[] =
{
    { _T("EX Main"), 0x702180, 0x702200, index3S_CPS3_Elena, 0x00 },
    { _T("EX Portrait"), 0x7642c0, 0x7642e0, index3S_CPS3_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_EXTRA_PALETTES[] =
{
    { _T("Dust"), 0x706100, 0x706180, index3S_CPS3_Elena, 0x02 },
    { _T("Music notes"), 0x706180, 0x706200, index3S_CPS3_Elena, 0x03 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765180, 0x765200, index3S_CPS3_Elena, 0 },
    { _T("EX Attack (2)"), 0x76b180, 0x76b200, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767800, 0x767880, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767880, 0x767900, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767900, 0x767980, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767980, 0x767a00, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767a00, 0x767a80, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767a80, 0x767b00, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767b00, 0x767b80, index3S_CPS3_Elena, 0 },
    { _T("????"), 0x767b80, 0x767c00, index3S_CPS3_Elena, 0 },
};

const sGame_PaletteDataset SFIII3_A_ORO_LP_PALETTES[] =
{
    { _T("LP Main"), 0x702200, 0x702280, index3S_CPS3_Oro, 0x00 },
    { _T("LP Portrait"), 0x7642e0, 0x764300, index3S_CPS3_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ORO_MP_PALETTES[] =
{
    { _T("MP Main"), 0x702280, 0x702300, index3S_CPS3_Oro, 0x00 },
    { _T("MP Portrait"), 0x764300, 0x764320, index3S_CPS3_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ORO_HP_PALETTES[] =
{
    { _T("HP Main"), 0x702300, 0x702380, index3S_CPS3_Oro, 0x00 },
    { _T("HP Portrait"), 0x764320, 0x764340, index3S_CPS3_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ORO_LK_PALETTES[] =
{
    { _T("LK Main"), 0x702380, 0x702400, index3S_CPS3_Oro, 0x00 },
    { _T("LK Portrait"), 0x764340, 0x764360, index3S_CPS3_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ORO_MK_PALETTES[] =
{
    { _T("MK Main"), 0x702400, 0x702480, index3S_CPS3_Oro, 0x00 },
    { _T("MK Portrait"), 0x764360, 0x764380, index3S_CPS3_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ORO_HK_PALETTES[] =
{
    { _T("HK Main"), 0x702480, 0x702500, index3S_CPS3_Oro, 0x00 },
    { _T("HK Portrait"), 0x764380, 0x7643a0, index3S_CPS3_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ORO_EX_PALETTES[] =
{
    { _T("EX Main"), 0x702500, 0x702580, index3S_CPS3_Oro, 0x00 },
    { _T("EX Portrait"), 0x7643a0, 0x7643c0, index3S_CPS3_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_ORO_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765200, 0x765280, index3S_CPS3_Oro, 0 },
    { _T("EX Attack (2)"), 0x76b200, 0x76b280, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767c00, 0x767c80, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767c80, 0x767d00, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767d00, 0x767d80, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767d80, 0x767e00, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767e00, 0x767e80, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767e80, 0x767f00, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767f00, 0x767f80, index3S_CPS3_Oro, 0 },
    { _T("????"), 0x767f80, 0x768000, index3S_CPS3_Oro, 0 },
};

const sGame_PaletteDataset SFIII3_A_ORO_EXTRA_PALETTES[] =
{
    { _T("Tengu Stones"), 0x763100, 0x763180, index3S_CPS3_Oro, 2, &pairHandledInCode },
    // Bricks are folded into the Tengu Stones display
    { _T("Bricks"), 0x763180, 0x7631A0, index3S_CPS3_Oro, 3 },

    { _T("Fireball + Green Yagyou Dama (SA2)"), 0x706280, 0x706300 },
    { _T("Fireball + Yellow Yagyou Dama (SA2)"), 0x706380, 0x706400 },
};

const sGame_PaletteDataset SFIII3_A_YANG_LP_PALETTES[] =
{
    { _T("LP Main"), 0x702580, 0x702600, index3S_CPS3_Yang, 0x00 },
    { _T("LP Portrait"), 0x7643c0, 0x7643e0, index3S_CPS3_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YANG_MP_PALETTES[] =
{
    { _T("MP Main"), 0x702600, 0x702680, index3S_CPS3_Yang, 0x00 },
    { _T("MP Portrait"), 0x7643e0, 0x764400, index3S_CPS3_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YANG_HP_PALETTES[] =
{
    { _T("HP Main"), 0x702680, 0x702700, index3S_CPS3_Yang, 0x00 },
    { _T("HP Portrait"), 0x764400, 0x764420, index3S_CPS3_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YANG_LK_PALETTES[] =
{
    { _T("LK Main"), 0x702700, 0x702780, index3S_CPS3_Yang, 0x00 },
    { _T("LK Portrait"), 0x764420, 0x764440, index3S_CPS3_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YANG_MK_PALETTES[] =
{
    { _T("MK Main"), 0x702780, 0x702800, index3S_CPS3_Yang, 0x00 },
    { _T("MK Portrait"), 0x764440, 0x764460, index3S_CPS3_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YANG_HK_PALETTES[] =
{
    { _T("HK Main"), 0x702800, 0x702880, index3S_CPS3_Yang, 0x00 },
    { _T("HK Portrait"), 0x764460, 0x764480, index3S_CPS3_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YANG_EX_PALETTES[] =
{
    { _T("EX Main"), 0x702880, 0x702900, index3S_CPS3_Yang, 0x00 },
    { _T("EX Portrait"), 0x764480, 0x7644a0, index3S_CPS3_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_YANG_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765280, 0x765300, index3S_CPS3_Yang, 0 },
    { _T("EX Attack (2)"), 0x76b280, 0x76b300, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768000, 0x768080, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768080, 0x768100, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768100, 0x768180, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768180, 0x768200, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768200, 0x768280, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768280, 0x768300, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768300, 0x768380, index3S_CPS3_Yang, 0 },
    { _T("????"), 0x768380, 0x768400, index3S_CPS3_Yang, 0 },
};

const sGame_PaletteDataset SFIII3_A_KEN_LP_PALETTES[] =
{
    { _T("LP Main"), 0x702900, 0x702980, index3S_CPS3_Ken, 0x00 },
    { _T("LP Portrait"), 0x7644a0, 0x7644c0, index3S_CPS3_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_KEN_MP_PALETTES[] =
{
    { _T("MP Main"), 0x702980, 0x702a00, index3S_CPS3_Ken, 0x00 },
    { _T("MP Portrait"), 0x7644c0, 0x7644e0, index3S_CPS3_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_KEN_HP_PALETTES[] =
{
    { _T("HP Main"), 0x702a00, 0x702a80, index3S_CPS3_Ken, 0x00 },
    { _T("HP Portrait"), 0x7644e0, 0x764500, index3S_CPS3_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_KEN_LK_PALETTES[] =
{
    { _T("LK Main"), 0x702a80, 0x702b00, index3S_CPS3_Ken, 0x00 },
    { _T("LK Portrait"), 0x764500, 0x764520, index3S_CPS3_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_KEN_MK_PALETTES[] =
{
    { _T("MK Main"), 0x702b00, 0x702b80, index3S_CPS3_Ken, 0x00 },
    { _T("MK Portrait"), 0x764520, 0x764540, index3S_CPS3_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_KEN_HK_PALETTES[] =
{
    { _T("HK Main"), 0x702b80, 0x702c00, index3S_CPS3_Ken, 0x00 },
    { _T("HK Portrait"), 0x764540, 0x764560, index3S_CPS3_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_KEN_EX_PALETTES[] =
{
    { _T("EX Main"), 0x702c00, 0x702c80, index3S_CPS3_Ken, 0x00 },
    { _T("EX Portrait"), 0x764560, 0x764580, index3S_CPS3_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_KEN_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765300, 0x765380, index3S_CPS3_Ken, 0 },
    { _T("EX Attack (2)"), 0x76b300, 0x76b380, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768400, 0x768480, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768480, 0x768500, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768500, 0x768580, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768580, 0x768600, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768600, 0x768680, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768680, 0x768700, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768700, 0x768780, index3S_CPS3_Ken, 0 },
    { _T("????"), 0x768780, 0x768800, index3S_CPS3_Ken, 0 },
};

const sGame_PaletteDataset SFIII3_A_KEN_EXTRA_PALETTES[] =
{
    { _T("Hadouken"), 0x706400, 0x706480, index3S_CPS3_Ken, 0x02 },
    { _T("Hadouken Impact"), 0x706480, 0x706500, index3S_CPS3_Ken, 0x03 },
    { _T("Shoryuken Flames"), 0x706500, 0x706580, index3S_CPS3_Ken, 0x04 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_LP_PALETTES[] =
{
    { _T("LP Main"), 0x702c80, 0x702d00, index3S_CPS3_Sean, 0x00 },
    { _T("LP Portrait"), 0x764580, 0x7645a0, index3S_CPS3_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_MP_PALETTES[] =
{
    { _T("MP Main"), 0x702d00, 0x702d80, index3S_CPS3_Sean, 0x00 },
    { _T("MP Portrait"), 0x7645a0, 0x7645c0, index3S_CPS3_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_HP_PALETTES[] =
{
    { _T("HP Main"), 0x702d80, 0x702e00, index3S_CPS3_Sean, 0x00 },
    { _T("HP Portrait"), 0x7645c0, 0x7645e0, index3S_CPS3_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_LK_PALETTES[] =
{
    { _T("LK Main"), 0x702e00, 0x702e80, index3S_CPS3_Sean, 0x00 },
    { _T("LK Portrait"), 0x7645e0, 0x764600, index3S_CPS3_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_MK_PALETTES[] =
{
    { _T("MK Main"), 0x702e80, 0x702f00, index3S_CPS3_Sean, 0x00 },
    { _T("MK Portrait"), 0x764600, 0x764620, index3S_CPS3_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_HK_PALETTES[] =
{
    { _T("HK Main"), 0x702f00, 0x702f80, index3S_CPS3_Sean, 0x00 },
    { _T("HK Portrait"), 0x764620, 0x764640, index3S_CPS3_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_EX_PALETTES[] =
{
    { _T("EX Main"), 0x702f80, 0x703000, index3S_CPS3_Sean, 0x00 },
    { _T("EX Portrait"), 0x764640, 0x764660, index3S_CPS3_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765380, 0x765400, index3S_CPS3_Sean, 0 },
    { _T("EX Attack (2)"), 0x76b380, 0x76b400, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768800, 0x768880, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768880, 0x768900, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768900, 0x768980, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768980, 0x768a00, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768a00, 0x768a80, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768a80, 0x768b00, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768b00, 0x768b80, index3S_CPS3_Sean, 0 },
    { _T("????"), 0x768b80, 0x768c00, index3S_CPS3_Sean, 0 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_EXTRA_PALETTES[] =
{
    { L"Hado-Burst", 0x0706580, 0x0706600, index3S_CPS3_Sean, 0x02 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_LP_PALETTES[] =
{
    { _T("LP Main"), 0x703000, 0x703080, index3S_CPS3_Urien, 0x00 },
    { _T("LP Portrait"), 0x764660, 0x764680, index3S_CPS3_Urien, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_MP_PALETTES[] =
{
    { _T("MP Main"), 0x703080, 0x703100, index3S_CPS3_Urien, 0x00 },
    { _T("MP Portrait"), 0x764680, 0x7646a0, index3S_CPS3_Urien, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_HP_PALETTES[] =
{
    { _T("HP Main"), 0x703100, 0x703180, index3S_CPS3_Urien, 0x00 },
    { _T("HP Portrait"), 0x7646a0, 0x7646c0, index3S_CPS3_Urien, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_LK_PALETTES[] =
{
    { _T("LK Main"), 0x703180, 0x703200, index3S_CPS3_Urien, 0x00 },
    { _T("LK Portrait"), 0x7646c0, 0x7646e0, index3S_CPS3_Urien, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_MK_PALETTES[] =
{
    { _T("MK Main"), 0x703200, 0x703280, index3S_CPS3_Urien, 0x00 },
    { _T("MK Portrait"), 0x7646e0, 0x764700, index3S_CPS3_Urien, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_HK_PALETTES[] =
{
    { _T("HK Main"), 0x703280, 0x703300, index3S_CPS3_Urien, 0x00 },
    { _T("HK Portrait"), 0x764700, 0x764720, index3S_CPS3_Urien, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_EX_PALETTES[] =
{
    { _T("EX Main"), 0x703300, 0x703380, index3S_CPS3_Urien, 0x00 },
    { _T("EX Portrait"), 0x764720, 0x764740, index3S_CPS3_Urien, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765400, 0x765480, index3S_CPS3_Urien, 0 },
    { _T("EX Attack (2)"), 0x76b400, 0x76b480, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768c00, 0x768c80, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768c80, 0x768d00, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768d00, 0x768d80, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768d80, 0x768e00, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768e00, 0x768e80, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768e80, 0x768f00, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768f00, 0x768f80, index3S_CPS3_Urien, 0 },
    { _T("????"), 0x768f80, 0x769000, index3S_CPS3_Urien, 0 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_EXTRA_PALETTES[] =
{
    { _T("P1 Intro"), 0x706600, 0x706680, index3S_CPS3_Urien, 0x00, &pairHandledInCode },
    { _T("P1 Suit"), 0x706680, 0x706700, index3S_CPS3_Urien, 0x03 }, // Note that for pairing we use an alt image.
    { _T("P1 SA3 / Fire"), 0x706700, 0x706780 },

    { _T("P2 Intro"), 0x706880, 0x706900, index3S_CPS3_Urien, 0x00, &pairHandledInCode },
    { _T("P2 Suit"), 0x706900, 0x706980, index3S_CPS3_Urien, 0x03 },
    { _T("P2 SA3 / Fire?"), 0x706980, 0x706A00 },

    { _T("Electroball"), 0x706780, 0x706800 },
    { _T("SA2 / Big Electroball"), 0x706800, 0x706880, index3S_CPS3_Urien, 0x04 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_LP_PALETTES[] =
{
    { _T("LP Main"), 0x703380, 0x703400, index3S_CPS3_Gouki, 0x00 },
    { _T("LP Portrait"), 0x764740, 0x764760, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_MP_PALETTES[] =
{
    { _T("MP Main"), 0x703400, 0x703480, index3S_CPS3_Gouki, 0x00 },
    { _T("MP Portrait"), 0x764760, 0x764780, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_HP_PALETTES[] =
{
    { _T("HP Main"), 0x703480, 0x703500, index3S_CPS3_Gouki, 0x00 },
    { _T("HP Portrait"), 0x764780, 0x7647a0, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_LK_PALETTES[] =
{
    { _T("LK Main"), 0x703500, 0x703580, index3S_CPS3_Gouki, 0x00 },
    { _T("LK Portrait"), 0x7647a0, 0x7647c0, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_MK_PALETTES[] =
{
    { _T("MK Main"), 0x703580, 0x703600, index3S_CPS3_Gouki, 0x00 },
    { _T("MK Portrait"), 0x7647c0, 0x7647e0, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_HK_PALETTES[] =
{
    { _T("HK Main"), 0x703600, 0x703680, index3S_CPS3_Gouki, 0x00 },
    { _T("HK Portrait"), 0x7647e0, 0x764800, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_EX_PALETTES[] =
{
    { _T("EX Main"), 0x703680, 0x703700, index3S_CPS3_Gouki, 0x00 },
    { _T("EX Portrait"), 0x764800, 0x764820, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765480, 0x765500, index3S_CPS3_Gouki, 0 },
    { _T("EX Attack (2)"), 0x76b480, 0x76b500, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769000, 0x769080, index3S_CPS3_Gouki, 0 },
    { _T("SA Animation 1/Parry"), 0x769080, 0x769100, index3S_CPS3_Gouki, 0 },
    { _T("SA Animation 2"), 0x769100, 0x769180, index3S_CPS3_Gouki, 0 },
    { _T("SA Animation 3"), 0x769180, 0x769200, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769200, 0x769280, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769280, 0x769300, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769300, 0x769380, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769380, 0x769400, index3S_CPS3_Gouki, 0 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_EXTRA_PALETTES[] =
{
    { _T("Shun Goku Satsu KO Screen"), 0x706b80, 0x706c00, index3S_CPS3_Gouki, 0x0F },

    { _T("Kongou Kokuretzu Zan / Fireball"), 0x706a00, 0x706a80 },
    { _T("Messatsu Go Hadou / Air Fireball"), 0x706a80, 0x706b00 },

    { _T("SA Animation 4"), 0x707900, 0x707980, 0x0D },

    { _T("Burning Effects"), 0x708480, 0x708500, 0x0D },
};

const sGame_PaletteDataset SFIII3_A_SHINGOUKI_LP_PALETTES[] =
{
    { _T("P1 Main"), 0x703700, 0x703780, index3S_CPS3_Gouki, 0x00 },
    { _T("P1 Portrait"), 0x764820, 0x764840, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SHINGOUKI_MP_PALETTES[] =
{
    { _T("P2 Main"), 0x703780, 0x703800, index3S_CPS3_Gouki, 0x00 },
    { _T("P2 Portrait"), 0x764840, 0x764860, index3S_CPS3_Gouki, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_SHINGOUKI_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765500, 0x765580, index3S_CPS3_Gouki, 0 },
    { _T("EX Attack (2)"), 0x76b500, 0x76b580, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769400, 0x769480, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769480, 0x769500, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769500, 0x769580, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769580, 0x769600, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769600, 0x769680, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769680, 0x769700, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769700, 0x769780, index3S_CPS3_Gouki, 0 },
    { _T("????"), 0x769780, 0x769800, index3S_CPS3_Gouki, 0 },
};

const sGame_PaletteDataset SFIII3_A_SHINGOUKI_EXTRA_PALETTES[] =
{
    { _T("Fireball"), 0x706C00, 0x706C80 },
    { _T("Air Fireball"), 0x706C80, 0x706D00 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_LP_PALETTES[] =
{
    { _T("LP Main"), 0x703800, 0x703880, index3S_CPS3_ChunLi, 0x00 },
    { _T("LP Portrait"), 0x764900, 0x764920, index3S_CPS3_ChunLi, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_MP_PALETTES[] =
{
    { _T("MP Main"), 0x703880, 0x703900, index3S_CPS3_ChunLi, 0x00 },
    { _T("MP Portrait"), 0x764920, 0x764940, index3S_CPS3_ChunLi, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_HP_PALETTES[] =
{
    { _T("HP Main"), 0x703900, 0x703980, index3S_CPS3_ChunLi, 0x00 },
    { _T("HP Portrait"), 0x764940, 0x764960, index3S_CPS3_ChunLi, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_LK_PALETTES[] =
{
    { _T("LK Main"), 0x703980, 0x703a00, index3S_CPS3_ChunLi, 0x00 },
    { _T("LK Portrait"), 0x764960, 0x764980, index3S_CPS3_ChunLi, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_MK_PALETTES[] =
{
    { _T("MK Main"), 0x703a00, 0x703a80, index3S_CPS3_ChunLi, 0x00 },
    { _T("MK Portrait"), 0x764980, 0x7649a0, index3S_CPS3_ChunLi, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_HK_PALETTES[] =
{
    { _T("HK Main"), 0x703a80, 0x703b00, index3S_CPS3_ChunLi, 0x00 },
    { _T("HK Portrait"), 0x7649a0, 0x7649c0, index3S_CPS3_ChunLi, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_EX_PALETTES[] =
{
    { _T("EX Main"), 0x703b00, 0x703b80, index3S_CPS3_ChunLi, 0x00 },
    { _T("EX Portrait"), 0x7649c0, 0x7649e0, index3S_CPS3_ChunLi, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765580, 0x765600, index3S_CPS3_ChunLi, 0 },
    { _T("EX Attack (2)"), 0x76b580, 0x76b600, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769800, 0x769880, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769880, 0x769900, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769900, 0x769980, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769980, 0x769a00, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769a00, 0x769a80, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769a80, 0x769b00, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769b00, 0x769b80, index3S_CPS3_ChunLi, 0 },
    { _T("????"), 0x769b80, 0x769c00, index3S_CPS3_ChunLi, 0 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_EXTRA_PALETTES[] =
{
    { _T("Kikouken / Kikou-Shou / Tensei-Ranka"), 0x706D80, 0x706E00, index3S_CPS3_ChunLi, 0x02 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_LP_PALETTES[] =
{
    { _T("LP Main"), 0x703b80, 0x703c00, index3S_CPS3_Makoto, 0x00 },
    { _T("LP Portrait"), 0x7649e0, 0x764a00, index3S_CPS3_Makoto, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_MP_PALETTES[] =
{
    { _T("MP Main"), 0x703c00, 0x703c80, index3S_CPS3_Makoto, 0x00 },
    { _T("MP Portrait"), 0x764a00, 0x764a20, index3S_CPS3_Makoto, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_HP_PALETTES[] =
{
    { _T("HP Main"), 0x703c80, 0x703d00, index3S_CPS3_Makoto, 0x00 },
    { _T("HP Portrait"), 0x764a20, 0x764a40, index3S_CPS3_Makoto, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_LK_PALETTES[] =
{
    { _T("LK Main"), 0x703d00, 0x703d80, index3S_CPS3_Makoto, 0x00 },
    { _T("LK Portrait"), 0x764a40, 0x764a60, index3S_CPS3_Makoto, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_MK_PALETTES[] =
{
    { _T("MK Main"), 0x703d80, 0x703e00, index3S_CPS3_Makoto, 0x00 },
    { _T("MK Portrait"), 0x764a60, 0x764a80, index3S_CPS3_Makoto, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_HK_PALETTES[] =
{
    { _T("HK Main"), 0x703e00, 0x703e80, index3S_CPS3_Makoto, 0x00 },
    { _T("HK Portrait"), 0x764a80, 0x764aa0, index3S_CPS3_Makoto, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_EX_PALETTES[] =
{
    { _T("EX Main"), 0x703e80, 0x703f00, index3S_CPS3_Makoto, 0x00 },
    { _T("EX Portrait"), 0x764aa0, 0x764ac0, index3S_CPS3_Makoto, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765600, 0x765680, index3S_CPS3_Makoto, 0 },
    { _T("EX Attack (2)"), 0x76b600, 0x76b680, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769c00, 0x769c80, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769c80, 0x769d00, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769d00, 0x769d80, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769d80, 0x769e00, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769e00, 0x769e80, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769e80, 0x769f00, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769f00, 0x769f80, index3S_CPS3_Makoto, 0 },
    { _T("????"), 0x769f80, 0x76a000, index3S_CPS3_Makoto, 0 },
};

const sGame_PaletteDataset SFIII3_A_Q_LP_PALETTES[] =
{
    { _T("LP Main"), 0x703f00, 0x703f80, index3S_CPS3_Q, 0x00 },
    { _T("LP Portrait"), 0x764ac0, 0x764ae0, index3S_CPS3_Q, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_Q_MP_PALETTES[] =
{
    { _T("MP Main"), 0x703f80, 0x704000, index3S_CPS3_Q, 0x00 },
    { _T("MP Portrait"), 0x764ae0, 0x764b00, index3S_CPS3_Q, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_Q_HP_PALETTES[] =
{
    { _T("HP Main"), 0x704000, 0x704080, index3S_CPS3_Q, 0x00 },
    { _T("HP Portrait"), 0x764b00, 0x764b20, index3S_CPS3_Q, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_Q_LK_PALETTES[] =
{
    { _T("LK Main"), 0x704080, 0x704100, index3S_CPS3_Q, 0x00 },
    { _T("LK Portrait"), 0x764b20, 0x764b40, index3S_CPS3_Q, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_Q_MK_PALETTES[] =
{
    { _T("MK Main"), 0x704100, 0x704180, index3S_CPS3_Q, 0x00 },
    { _T("MK Portrait"), 0x764b40, 0x764b60, index3S_CPS3_Q, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_Q_HK_PALETTES[] =
{
    { _T("HK Main"), 0x704180, 0x704200, index3S_CPS3_Q, 0x00 },
    { _T("HK Portrait"), 0x764b60, 0x764b80, index3S_CPS3_Q, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_Q_EX_PALETTES[] =
{
    { _T("EX Main"), 0x704200, 0x704280, index3S_CPS3_Q, 0x00 },
    { _T("EX Portrait"), 0x764b80, 0x764ba0, index3S_CPS3_Q, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_Q_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765680, 0x765700, index3S_CPS3_Q, 0 },
    { _T("EX Attack (2)"), 0x76b680, 0x76b700, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a000, 0x76a080, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a080, 0x76a100, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a100, 0x76a180, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a180, 0x76a200, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a200, 0x76a280, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a280, 0x76a300, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a300, 0x76a380, index3S_CPS3_Q, 0 },
    { _T("????"), 0x76a380, 0x76a400, index3S_CPS3_Q, 0 },
};

const sGame_PaletteDataset SFIII3_A_Q_EXTRA_PALETTES[] =
{
    { _T("SA3 charge / all arts burning"), 0x708680, 0x708700 },
    { _T("SA3 main explosion"), 0x708700, 0x708780 },
    { _T("SA3 explosion flames"), 0x708a80, 0x708b00 },

    { _T("Boys"), 0x706E80, 0x706F00 },
    { _T("Girls "), 0x706F00, 0x706F80 },
    { _T("Girls 2?"), 0x706F80, 0x707000 },
    { _T("SA3 Explosion"), 0x707000, 0x707080 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_LP_PALETTES[] =
{
    { _T("LP Main"), 0x704280, 0x704300, index3S_CPS3_Twelve, 0x00 },
    { _T("LP Portrait"), 0x764ba0, 0x764bc0, index3S_CPS3_Twelve, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_MP_PALETTES[] =
{
    { _T("MP Main"), 0x704300, 0x704380, index3S_CPS3_Twelve, 0x00 },
    { _T("MP Portrait"), 0x764bc0, 0x764be0, index3S_CPS3_Twelve, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_HP_PALETTES[] =
{
    { _T("HP Main"), 0x704380, 0x704400, index3S_CPS3_Twelve, 0x00 },
    { _T("HP Portrait"), 0x764be0, 0x764c00, index3S_CPS3_Twelve, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_LK_PALETTES[] =
{
    { _T("LK Main"), 0x704400, 0x704480, index3S_CPS3_Twelve, 0x00 },
    { _T("LK Portrait"), 0x764c00, 0x764c20, index3S_CPS3_Twelve, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_MK_PALETTES[] =
{
    { _T("MK Main"), 0x704480, 0x704500, index3S_CPS3_Twelve, 0x00 },
    { _T("MK Portrait"), 0x764c20, 0x764c40, index3S_CPS3_Twelve, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_HK_PALETTES[] =
{
    { _T("HK Main"), 0x704500, 0x704580, index3S_CPS3_Twelve, 0x00 },
    { _T("HK Portrait"), 0x764c40, 0x764c60, index3S_CPS3_Twelve, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_EX_PALETTES[] =
{
    { _T("EX Main"), 0x704580, 0x704600, index3S_CPS3_Twelve, 0x00 },
    { _T("EX Portrait"), 0x764c60, 0x764c80, index3S_CPS3_Twelve, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765700, 0x765780, index3S_CPS3_Twelve, 0 },
    { _T("EX Attack (2)"), 0x76b700, 0x76b780, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a400, 0x76a480, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a480, 0x76a500, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a500, 0x76a580, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a580, 0x76a600, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a600, 0x76a680, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a680, 0x76a700, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a700, 0x76a780, index3S_CPS3_Twelve, 0 },
    { _T("????"), 0x76a780, 0x76a800, index3S_CPS3_Twelve, 0 },
};

const sGame_PaletteDataset SFIII3_A_REMY_LP_PALETTES[] =
{
    { _T("LP Main"), 0x704600, 0x704680, index3S_CPS3_Remy, 0x00 },
    { _T("LP Portrait"), 0x764c80, 0x764ca0, index3S_CPS3_Remy, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_REMY_MP_PALETTES[] =
{
    { _T("MP Main"), 0x704680, 0x704700, index3S_CPS3_Remy, 0x00 },
    { _T("MP Portrait"), 0x764ca0, 0x764cc0, index3S_CPS3_Remy, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_REMY_HP_PALETTES[] =
{
    { _T("HP Main"), 0x704700, 0x704780, index3S_CPS3_Remy, 0x00 },
    { _T("HP Portrait"), 0x764cc0, 0x764ce0, index3S_CPS3_Remy, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_REMY_LK_PALETTES[] =
{
    { _T("LK Main"), 0x704780, 0x704800, index3S_CPS3_Remy, 0x00 },
    { _T("LK Portrait"), 0x764ce0, 0x764d00, index3S_CPS3_Remy, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_REMY_MK_PALETTES[] =
{
    { _T("MK Main"), 0x704800, 0x704880, index3S_CPS3_Remy, 0x00 },
    { _T("MK Portrait"), 0x764d00, 0x764d20, index3S_CPS3_Remy, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_REMY_HK_PALETTES[] =
{
    { _T("HK Main"), 0x704880, 0x704900, index3S_CPS3_Remy, 0x00 },
    { _T("HK Portrait"), 0x764d20, 0x764d40, index3S_CPS3_Remy, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_REMY_EX_PALETTES[] =
{
    { _T("EX Main"), 0x704900, 0x704980, index3S_CPS3_Remy, 0x00 },
    { _T("EX Portrait"), 0x764d40, 0x764d60, index3S_CPS3_Remy, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_REMY_Support_PALETTES[] =
{
    { _T("EX Attack (1)"), 0x765780, 0x765800, index3S_CPS3_Remy, 0 },
    { _T("EX Attack (2)"), 0x76b780, 0x76b800, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76a800, 0x76a880, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76a880, 0x76a900, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76a900, 0x76a980, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76a980, 0x76aa00, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76aa00, 0x76aa80, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76aa80, 0x76ab00, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76ab00, 0x76ab80, index3S_CPS3_Remy, 0 },
    { _T("????"), 0x76ab80, 0x76ac00, index3S_CPS3_Remy, 0 },
};

const sGame_PaletteDataset SFIII3_A_REMY_EXTRA_PALETTES[] =
{
    { _T("Effects"), 0x707080, 0x707100, index3S_CPS3_Remy, 0x02 },
};

const sGame_PaletteDataset SFIII3_A_HUGO_PORTRAIT_PALETTES[] =
{
    { _T("Hugo portrait (Normal)"), 0x70D380, 0x70D500, index3S_CPS3_Hugo, 0x20 },
    { _T("Hugo portrait (Tinted)"), 0x0712180, 0x0712300, index3S_CPS3_Hugo, 0x20 },
    { _T("Hugo Character Select Icon"), 0x070B900, 0x070B980, index3S_CPS3_Hugo, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_GILL_NORMAL_PALETTES[] =
{
    { _T("Intro facing left"), 0x0700000, 0x0700080, index3S_CPS3_Gill, 0x01 },
    { _T("Intro facing right"), 0x0700080, 0x0700100, index3S_CPS3_Gill, 0x05, &pairNext },
    { _T("Intro Robe"), 0x078F600, 0x078F680, index3S_CPS3_Gill, 0x04 },
    { _T("Ice / Fire"), 0x0704A00, 0x0704A80, index3S_CPS3_Gill, 0x02 },
    { _T("Ice / Fire Impacts"), 0x0704980, 0x0704a00, index3S_CPS3_Gill, 0x03 },
    
    { _T("Seraphic Wings Start"), 0x078AE00, 0x078Ae80, index3S_CPS3_Gill, 0x06 },
    { _T("Seraphic Wings End"), 0x078AE80, 0x078AF00, index3S_CPS3_Gill, 0x07 },
};

const sGame_PaletteDataset SFIII3_A_GILL_PORTRAIT_PALETTES[] =
{
    { _T("Gill portrait (Normal)"), 0x070C680, 0x070C780 },
    { _T("Gill portrait (Tinted)"), 0x0711480, 0x0711580 },
    { _T("Story Mode Icon"), 0x070BF80, 0x070C000, index3S_CPS3_Gill, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_ALEX_PORTRAIT_PALETTES[] =
{
    { _T("Alex portrait (Normal)"), 0x070CD80, 0x070CF00, index3S_CPS3_Alex, 0x20 },
    { _T("Alex portrait (Tinted)"), 0x0711B80, 0x0711D00, index3S_CPS3_Alex, 0x20 },
    { _T("Alex Character Select Icon"), 0x070C180, 0x070C200, index3S_CPS3_Alex, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_RYU_PORTRAIT_PALETTES[] =
{
    { _T("Ryu portrait (Normal)"), 0x070CF00, 0x070D000, index3S_CPS3_Ryu, 0x20 },
    { _T("Ryu portrait (Tinted)"), 0x0711D00, 0x0711E00, index3S_CPS3_Ryu, 0x20 },
    { _T("Ryu Character Select Icon"), 0x070BC00, 0x070BC80, index3S_CPS3_Ryu, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_YUN_PORTRAIT_PALETTES[] =
{
    { _T("Yun portrait (Normal)"), 0x070D000, 0x070D100, index3S_CPS3_Yun, 0x20 },
    { _T("Yun portrait (Tinted)"), 0x0711E00, 0x0711F00, index3S_CPS3_Yun, 0x20 },
    { _T("Yun Character Select Icon"), 0x070BB00, 0x070BB80, index3S_CPS3_Yun, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_DUDLEY_PORTRAIT_PALETTES[] =
{
    { _T("Dudley portrait (Normal)"), 0x070D100, 0x070D200, index3S_CPS3_Dudley, 0x20 },
    { _T("Dudley portrait (Tinted)"), 0x0711F00, 0x0712000, index3S_CPS3_Dudley, 0x20 },
    { _T("Dudley Character Select Icon"), 0x070C280, 0x070C300, index3S_CPS3_Dudley, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_NECRO_PORTRAIT_PALETTES[] =
{
    { _T("Necro portrait (Normal)"), 0x070D200, 0x070D380, index3S_CPS3_Necro, 0x20 },
    { _T("Necro portrait (Tinted)"), 0x0712000, 0x0712180, index3S_CPS3_Necro, 0x20 },
    { _T("Necro Character Select Icon"), 0x070B980, 0x070BA00, index3S_CPS3_Necro, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_IBUKI_PORTRAIT_PALETTES[] =
{
    { _T("Ibuki portrait (Normal)"), 0x070D500, 0x070D680, index3S_CPS3_Ibuki, 0x20 },
    { _T("Ibuki portrait (Tinted)"), 0x0712300, 0x0712480, index3S_CPS3_Ibuki, 0x20 },
    { _T("Ibuki Character Select Icon"), 0x070B880, 0x070B900, index3S_CPS3_Ibuki, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_ELENA_PORTRAIT_PALETTES[] =
{
    { _T("Elena portrait (Normal) 1/2"), 0x70D680, 0x70D880, index3S_CPS3_Elena, 0x20, &pairNext },
    { _T("Elena portrait (Normal) 2/2"), 0x70D880, 0x70DA00, index3S_CPS3_Elena, 0x21, &pairPrevious},
    { _T("Elena portrait (Tinted) 1/2"), 0x712480, 0x712680, index3S_CPS3_Elena, 0x20, &pairNext },
    { _T("Elena portrait (Tinted) 2/2"), 0x712680, 0x712800, index3S_CPS3_Elena, 0x21, &pairPrevious },
    { _T("Elena Character Select Icon"), 0x070C300, 0x070C380, index3S_CPS3_Elena, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_ORO_PORTRAIT_PALETTES[] =
{
    { _T("Oro portrait (Normal)"), 0x070DA00, 0x070DA80, index3S_CPS3_Oro, 0x20 },
    { _T("Oro portrait (Tinted)"), 0x0712800, 0x0712880, index3S_CPS3_Oro, 0x20 },
    { _T("Oro Character Select Icon"), 0x070C000, 0x070C080, index3S_CPS3_Oro, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_YANG_PORTRAIT_PALETTES[] =
{
    { _T("Yang portrait (Normal)"), 0x070DA80, 0x070DB80, index3S_CPS3_Yang, 0x20 },
    { _T("Yang portrait (Tinted)"), 0x0712880, 0x0712980, index3S_CPS3_Yang, 0x20 },
    { _T("Yang Character Select Icon"), 0x070BB80, 0x070BC00, index3S_CPS3_Yang, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_KEN_PORTRAIT_PALETTES[] =
{
    { _T("Ken portrait (Normal)"), 0x070DB80, 0x070DD00, index3S_CPS3_Ken, 0x20 },
    { _T("Ken portrait (Tinted)"), 0x0712980, 0x0712B00, index3S_CPS3_Ken, 0x20 },
    { _T("Ken Character Select Icon"), 0x070C100, 0x070C180, index3S_CPS3_Ken, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_SEAN_PORTRAIT_PALETTES[] =
{
    { _T("Sean portrait (Normal)"), 0x070DD00, 0x070DE80, index3S_CPS3_Sean, 0x20 },
    { _T("Sean portrait (Tinted)"), 0x0712B00, 0x0712C80, index3S_CPS3_Sean, 0x20 },
    { _T("Sean Character Select Icon"), 0x070C200, 0x070C280, index3S_CPS3_Sean, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_URIEN_PORTRAIT_PALETTES[] =
{
    { _T("Urien portrait (Normal)"), 0x070DE80, 0x070DF80, index3S_CPS3_Urien, 0x20 },
    { _T("Urien portrait (Tinted)"), 0x0712C80, 0x0712D80, index3S_CPS3_Urien, 0x20 },
    { _T("Urien Character Select Icon"), 0x070BD00, 0x070BD80, index3S_CPS3_Urien, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_GOUKI_PORTRAIT_PALETTES[] =
{
    { _T("Gouki / Shin Gouki portrait (Normal)"), 0x070DF80, 0x070E080, index3S_CPS3_Gouki, 0x20 },
    { _T("Gouki / Shin Gouki portrait (Tinted)"), 0x0712D80, 0x0712E80, index3S_CPS3_Gouki, 0x20 },
    { _T("Gouki Character Select Icon"), 0x070BE00, 0x070BE80, index3S_CPS3_Gouki, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_SHINGOUKI_PORTRAIT_PALETTES[] =
{
    { _T("Shin Gouki Character Select Icon"), 0x070BE80, 0x070BF00, index3S_CPS3_ShinGouki, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_CHUNLI_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li portrait (Normal)"), 0x070E080, 0x070E200, index3S_CPS3_ChunLi, 0x20 },
    { _T("Chun-Li portrait (Tinted)"), 0x0712E80, 0x0713000, index3S_CPS3_ChunLi, 0x20 },
    { _T("Chun-Li Character Select Icon"), 0x070BC80, 0x070BD00, index3S_CPS3_ChunLi, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_MAKOTO_PORTRAIT_PALETTES[] =
{
    { _T("Makoto portrait (Normal)"), 0x070E200, 0x070E380, index3S_CPS3_Makoto, 0x20 },
    { _T("Makoto portrait (Tinted)"), 0x0713000, 0x0713180, index3S_CPS3_Makoto, 0x20 },
    { _T("Makoto Character Select Icon"), 0x070BA80, 0x070BB00, index3S_CPS3_Makoto, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_Q_PORTRAIT_PALETTES[] =
{
    { _T("Q portrait (Normal)"), 0x070E380, 0x070E400, index3S_CPS3_Q, 0x20 },
    { _T("Q portrait (Tinted)"), 0x0713180, 0x0713200, index3S_CPS3_Q, 0x20 },
    { _T("Q Character Select Icon"), 0x070BD80, 0x070BE00, index3S_CPS3_Q, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_TWELVE_PORTRAIT_PALETTES[] =
{
    { _T("Twelve portrait (Normal)"), 0x070E400, 0x070E480, index3S_CPS3_Twelve, 0x20 },
    { _T("Twelve portrait (Tinted)"), 0x0713200, 0x0713280, index3S_CPS3_Twelve, 0x20 },
    { _T("Twelve Character Select Icon"), 0x070C080, 0x070C100, index3S_CPS3_Twelve, 0x22 },
};

const sGame_PaletteDataset SFIII3_A_REMY_PORTRAIT_PALETTES[] =
{
    { _T("Remy portrait (Normal)"), 0x070E480, 0x070E600, index3S_CPS3_Remy, 0x20 },
    { _T("Remy portrait (Tinted)"), 0x0713280, 0x0713400, index3S_CPS3_Remy, 0x20 },
    { _T("Remy Character Select Icon"), 0x070BA00, 0x070BA80, index3S_CPS3_Remy, 0x22 },
};

const sDescTreeNode SFIII3_A_ALEX_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_LP_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_MP_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_HP_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_LK_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_MK_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_HK_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_EX_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_Support_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_ALEX_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_RYU_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_LP_PALETTES, ARRAYSIZE(SFIII3_A_RYU_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_MP_PALETTES, ARRAYSIZE(SFIII3_A_RYU_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_HP_PALETTES, ARRAYSIZE(SFIII3_A_RYU_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_LK_PALETTES, ARRAYSIZE(SFIII3_A_RYU_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_MK_PALETTES, ARRAYSIZE(SFIII3_A_RYU_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_HK_PALETTES, ARRAYSIZE(SFIII3_A_RYU_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_EX_PALETTES, ARRAYSIZE(SFIII3_A_RYU_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_Support_PALETTES, ARRAYSIZE(SFIII3_A_RYU_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_RYU_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_RYU_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_YUN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_LP_PALETTES, ARRAYSIZE(SFIII3_A_YUN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_MP_PALETTES, ARRAYSIZE(SFIII3_A_YUN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_HP_PALETTES, ARRAYSIZE(SFIII3_A_YUN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_LK_PALETTES, ARRAYSIZE(SFIII3_A_YUN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_MK_PALETTES, ARRAYSIZE(SFIII3_A_YUN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_HK_PALETTES, ARRAYSIZE(SFIII3_A_YUN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_EX_PALETTES, ARRAYSIZE(SFIII3_A_YUN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_Support_PALETTES, ARRAYSIZE(SFIII3_A_YUN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_YUN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII3_A_DUDLEY_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_LP_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_MP_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_HP_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_LK_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_MK_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_HK_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_EX_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_Support_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_DUDLEY_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_NECRO_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_LP_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_MP_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_HP_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_LK_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_MK_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_HK_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_EX_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_Support_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_NECRO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_HUGO_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_LP_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_MP_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_HP_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_LK_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_MK_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_HK_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_EX_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_Support_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_HUGO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_GILL_51_COLLECTION[] =
{
    { _T("Gill stuff (glow is in ROM 10)"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GILL_NORMAL_PALETTES, ARRAYSIZE(SFIII3_A_GILL_NORMAL_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GILL_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_GILL_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII3_A_IBUKI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_LP_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_MP_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_HP_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_LK_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_MK_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_HK_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_EX_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_Support_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_IBUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_ELENA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_LP_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_MP_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_HP_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_LK_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_MK_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_HK_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_EX_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_Support_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_ELENA_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_ORO_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_LP_PALETTES, ARRAYSIZE(SFIII3_A_ORO_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_MP_PALETTES, ARRAYSIZE(SFIII3_A_ORO_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_HP_PALETTES, ARRAYSIZE(SFIII3_A_ORO_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_LK_PALETTES, ARRAYSIZE(SFIII3_A_ORO_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_MK_PALETTES, ARRAYSIZE(SFIII3_A_ORO_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_HK_PALETTES, ARRAYSIZE(SFIII3_A_ORO_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_EX_PALETTES, ARRAYSIZE(SFIII3_A_ORO_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_Support_PALETTES, ARRAYSIZE(SFIII3_A_ORO_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_ORO_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_ORO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_YANG_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_LP_PALETTES, ARRAYSIZE(SFIII3_A_YANG_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_MP_PALETTES, ARRAYSIZE(SFIII3_A_YANG_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_HP_PALETTES, ARRAYSIZE(SFIII3_A_YANG_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_LK_PALETTES, ARRAYSIZE(SFIII3_A_YANG_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_MK_PALETTES, ARRAYSIZE(SFIII3_A_YANG_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_HK_PALETTES, ARRAYSIZE(SFIII3_A_YANG_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_EX_PALETTES, ARRAYSIZE(SFIII3_A_YANG_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_Support_PALETTES, ARRAYSIZE(SFIII3_A_YANG_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_YANG_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII3_A_KEN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_LP_PALETTES, ARRAYSIZE(SFIII3_A_KEN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_MP_PALETTES, ARRAYSIZE(SFIII3_A_KEN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_HP_PALETTES, ARRAYSIZE(SFIII3_A_KEN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_LK_PALETTES, ARRAYSIZE(SFIII3_A_KEN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_MK_PALETTES, ARRAYSIZE(SFIII3_A_KEN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_HK_PALETTES, ARRAYSIZE(SFIII3_A_KEN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_EX_PALETTES, ARRAYSIZE(SFIII3_A_KEN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_Support_PALETTES, ARRAYSIZE(SFIII3_A_KEN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_KEN_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_KEN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_SEAN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_LP_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_MP_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_HP_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_LK_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_MK_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_HK_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_EX_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_Support_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_SEAN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_URIEN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_LP_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_MP_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_HP_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_LK_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_MK_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_HK_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_EX_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_Support_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_URIEN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_GOUKI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_LP_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_MP_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_HP_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_LK_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_MK_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_HK_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_EX_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_Support_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_GOUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_SHINGOUKI_COLLECTION[] =
{
    { _T("P1"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SHINGOUKI_LP_PALETTES, ARRAYSIZE(SFIII3_A_SHINGOUKI_LP_PALETTES) },
    { _T("P2"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SHINGOUKI_MP_PALETTES, ARRAYSIZE(SFIII3_A_SHINGOUKI_MP_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SHINGOUKI_Support_PALETTES, ARRAYSIZE(SFIII3_A_SHINGOUKI_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SHINGOUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_SHINGOUKI_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SHINGOUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_SHINGOUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_CHUNLI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_LP_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_MP_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_HP_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_LK_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_MK_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_HK_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_EX_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_Support_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_CHUNLI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_MAKOTO_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_LP_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_MP_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_HP_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_LK_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_MK_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_HK_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_EX_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_Support_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_MAKOTO_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII3_A_Q_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_LP_PALETTES, ARRAYSIZE(SFIII3_A_Q_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_MP_PALETTES, ARRAYSIZE(SFIII3_A_Q_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_HP_PALETTES, ARRAYSIZE(SFIII3_A_Q_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_LK_PALETTES, ARRAYSIZE(SFIII3_A_Q_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_MK_PALETTES, ARRAYSIZE(SFIII3_A_Q_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_HK_PALETTES, ARRAYSIZE(SFIII3_A_Q_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_EX_PALETTES, ARRAYSIZE(SFIII3_A_Q_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_Support_PALETTES, ARRAYSIZE(SFIII3_A_Q_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_Q_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_Q_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII3_A_TWELVE_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_LP_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_MP_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_HP_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_LK_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_MK_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_HK_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_EX_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_Support_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_TWELVE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII3_A_REMY_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_LP_PALETTES, ARRAYSIZE(SFIII3_A_REMY_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_MP_PALETTES, ARRAYSIZE(SFIII3_A_REMY_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_HP_PALETTES, ARRAYSIZE(SFIII3_A_REMY_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_LK_PALETTES, ARRAYSIZE(SFIII3_A_REMY_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_MK_PALETTES, ARRAYSIZE(SFIII3_A_REMY_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_HK_PALETTES, ARRAYSIZE(SFIII3_A_REMY_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_EX_PALETTES, ARRAYSIZE(SFIII3_A_REMY_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_Support_PALETTES, ARRAYSIZE(SFIII3_A_REMY_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_PORTRAIT_PALETTES, ARRAYSIZE(SFIII3_A_REMY_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_EXTRA_PALETTES, ARRAYSIZE(SFIII3_A_REMY_EXTRA_PALETTES) },
};

const sGame_PaletteDataset SFIII3_A_BONUS_PALETTES[] =
{
    { _T("Select Background"), 0x709D80, 0x709E00, index3S_CPS3_Bonus, 0x0 },
    { _T("Final Results"), 0x70bf00, 0x70bf80, index3S_CPS3_Bonus, 0x01},
    { _T("Vs Text"), 0x70C780, 0x70C880 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_AKUMA_PALETTES[] =
{
    { _T("Gouki Stage (1/5)"), 0x74C180, 0x74C380, index3S_CPS3_Stages, 0x0F, &pairFullyLinkedNode },
    { _T("Gouki Stage (2/5)"), 0x74C380, 0x74C580, index3S_CPS3_Stages, 0x10 },
    { _T("Gouki Stage (3/5)"), 0x74C580, 0x74C780, index3S_CPS3_Stages, 0x11 },
    { _T("Gouki Stage (4/5)"), 0x74C780, 0x74C980, index3S_CPS3_Stages, 0x12 },
    { _T("Gouki Stage (5/5)"), 0x74C980, 0x74CA00, index3S_CPS3_Stages, 0x13 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_AKUMA_FADED_PALETTES[] =
{
    { _T("Gouki Stage (Faded) (1/5)"), 0x74CA00, 0x74CC00, index3S_CPS3_Stages, 0x0F, &pairFullyLinkedNode },
    { _T("Gouki Stage (Faded) (2/5)"), 0x74CC00, 0x74CE00, index3S_CPS3_Stages, 0x10 },
    { _T("Gouki Stage (Faded) (3/5)"), 0x74CE00, 0x74D000, index3S_CPS3_Stages, 0x11 },
    { _T("Gouki Stage (Faded) (4/5)"), 0x74D000, 0x74D200, index3S_CPS3_Stages, 0x12 },
    { _T("Gouki Stage (Faded) (5/5)"), 0x74D200, 0x74D280, index3S_CPS3_Stages, 0x13 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_ELENA_PALETTES[] =
{
    { _T("Elena Stage - Grass"), 0x743380, 0x743400, index3S_CPS3_Stages, 0x00, &pairFullyLinkedNode },
    { _T("Elena Stage - Bushes"), 0x743400, 0x743480, index3S_CPS3_Stages, 0x01 },
    { _T("Elena Stage - Sun"), 0x743480, 0x743500, index3S_CPS3_Stages, 0x02 },
    { _T("Elena Stage - Grass Pond Elephants"), 0x743500, 0x743580, index3S_CPS3_Stages, 0x03 },
    { _T("Elena Stage - Tree Left Side"), 0x743580, 0x743600, index3S_CPS3_Stages, 0x04 },
    { _T("Elena Stage - Tree Right Side"), 0x743600, 0x743680, index3S_CPS3_Stages, 0x05 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_ELENA_FADED_PALETTES[] =
{
    { _T("Elena Stage (Faded) - Grass"), 0x743680, 0x743700, index3S_CPS3_Stages, 0x00, &pairFullyLinkedNode },
    { _T("Elena Stage (Faded) - Bushes"), 0x743700, 0x743780, index3S_CPS3_Stages, 0x01 },
    { _T("Elena Stage (Faded) - Sun"), 0x743780, 0x743800, index3S_CPS3_Stages, 0x02 },
    { _T("Elena Stage (Faded) - Grass Pond Elephants"), 0x743800, 0x743880, index3S_CPS3_Stages, 0x03 },
    { _T("Elena Stage (Faded) - Tree Left Side"), 0x743880, 0x743900, index3S_CPS3_Stages, 0x04 },
    { _T("Elena Stage (Faded) - Tree Right Side"), 0x743900, 0x743980, index3S_CPS3_Stages, 0x05 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_MAKOTO_PALETTES[] =
{
    { _T("Makoto Stage (1/9)"), 0x752F80, 0x753180, index3S_CPS3_Stages, 0x06, &pairFullyLinkedNode },
    { _T("Makoto Stage (2/9)"), 0x753180, 0x753380, index3S_CPS3_Stages, 0x07 },
    { _T("Makoto Stage (3/9)"), 0x753380, 0x753580, index3S_CPS3_Stages, 0x08 },
    { _T("Makoto Stage (4/9)"), 0x753580, 0x753780, index3S_CPS3_Stages, 0x09 },
    { _T("Makoto Stage (5/9)"), 0x753780, 0x753980, index3S_CPS3_Stages, 0x0A },
    { _T("Makoto Stage (6/9)"), 0x753980, 0x753b80, index3S_CPS3_Stages, 0x0B },
    { _T("Makoto Stage (7/9)"), 0x753b80, 0x753d80, index3S_CPS3_Stages, 0x0C },
    { _T("Makoto Stage (8/9)"), 0x753d80, 0x753f80, index3S_CPS3_Stages, 0x0D },
    { _T("Makoto Stage (9/9)"), 0x753f80, 0x754000, index3S_CPS3_Stages, 0x0E },
};

const sGame_PaletteDataset SFIII3_A_STAGES_MAKOTO_FADED_PALETTES[] =
{
    { _T("Makoto Stage (Faded) (1/9)"), 0x754000, 0x754200, index3S_CPS3_Stages, 0x06, &pairFullyLinkedNode },
    { _T("Makoto Stage (Faded) (2/9)"), 0x754200, 0x754400, index3S_CPS3_Stages, 0x07 },
    { _T("Makoto Stage (Faded) (3/9)"), 0x754400, 0x754600, index3S_CPS3_Stages, 0x08 },
    { _T("Makoto Stage (Faded) (4/9)"), 0x754600, 0x754800, index3S_CPS3_Stages, 0x09 },
    { _T("Makoto Stage (Faded) (5/9)"), 0x754800, 0x754A00, index3S_CPS3_Stages, 0x0A },
    { _T("Makoto Stage (Faded) (6/9)"), 0x754A00, 0x754C00, index3S_CPS3_Stages, 0x0B },
    { _T("Makoto Stage (Faded) (7/9)"), 0x754C00, 0x754E00, index3S_CPS3_Stages, 0x0C },
    { _T("Makoto Stage (Faded) (8/9)"), 0x754E00, 0x755000, index3S_CPS3_Stages, 0x0D },
    { _T("Makoto Stage (Faded) (9/9)"), 0x755000, 0x755080, index3S_CPS3_Stages, 0x0E },
};

const sGame_PaletteDataset SFIII3_A_STAGES_YANG_PALETTES[] =
{
    { _T("Yang Stage (1/12)"), 0x732180, 0x732380, index3S_CPS3_Stages, 0x14, &pairFullyLinkedNode },
    { _T("Yang Stage (2/12)"), 0x732380, 0x732580, index3S_CPS3_Stages, 0x15 },
    { _T("Yang Stage (3/12)"), 0x732580, 0x732780, index3S_CPS3_Stages, 0x16 },
    { _T("Yang Stage (4/12)"), 0x732780, 0x732980, index3S_CPS3_Stages, 0x17 },
    { _T("Yang Stage (5/12)"), 0x732980, 0x732B80, index3S_CPS3_Stages, 0x18 },
    { _T("Yang Stage (6/12)"), 0x732B80, 0x732D80, index3S_CPS3_Stages, 0x19 },
    { _T("Yang Stage (7/12)"), 0x732D80, 0x732F80, index3S_CPS3_Stages, 0x1a },
    { _T("Yang Stage (8/12)"), 0x732F80, 0x733180, index3S_CPS3_Stages, 0x1b },
    { _T("Yang Stage (9/12)"), 0x733180, 0x733380, index3S_CPS3_Stages, 0x1c },
    { _T("Yang Stage (10/12)"), 0x733380, 0x733580, index3S_CPS3_Stages, 0x1d },
    { _T("Yang Stage (11/12)"), 0x733580, 0x733780, index3S_CPS3_Stages, 0x1e },
    { _T("Yang Stage (12/12)"), 0x733780, 0x733880, index3S_CPS3_Stages, 0x1f },
};

const sGame_PaletteDataset SFIII3_A_STAGES_YANG_FADED_PALETTES[] =
{
    { _T("Yang Stage (Faded) (1/12)"), 0x733880, 0x733A80, index3S_CPS3_Stages, 0x14, &pairFullyLinkedNode },
    { _T("Yang Stage (Faded) (2/12)"), 0x733A80, 0x733C80, index3S_CPS3_Stages, 0x15 },
    { _T("Yang Stage (Faded) (3/12)"), 0x733C80, 0x733E80, index3S_CPS3_Stages, 0x16 },
    { _T("Yang Stage (Faded) (4/12)"), 0x733E80, 0x734080, index3S_CPS3_Stages, 0x17 },
    { _T("Yang Stage (Faded) (5/12)"), 0x734080, 0x734280, index3S_CPS3_Stages, 0x18 },
    { _T("Yang Stage (Faded) (6/12)"), 0x734280, 0x734480, index3S_CPS3_Stages, 0x19 },
    { _T("Yang Stage (Faded) (7/12)"), 0x734480, 0x734680, index3S_CPS3_Stages, 0x1a },
    { _T("Yang Stage (Faded) (8/12)"), 0x734680, 0x734880, index3S_CPS3_Stages, 0x1b },
    { _T("Yang Stage (Faded) (9/12)"), 0x734880, 0x734A80, index3S_CPS3_Stages, 0x1c },
    { _T("Yang Stage (Faded) (10/12)"), 0x734A80, 0x734C80, index3S_CPS3_Stages, 0x1d },
    { _T("Yang Stage (Faded) (11/12)"), 0x734C80, 0x734E80, index3S_CPS3_Stages, 0x1e },
    { _T("Yang Stage (Faded) (12/12)"), 0x734E80, 0x734F80, index3S_CPS3_Stages, 0x1f },
};

const sGame_PaletteDataset SFIII3_A_STAGES_GILL_PALETTES[] =
{
    { _T("Gill Stage (1/17)"), 0x722B80 + (0 * 0x200), 0x722B80 + (1 * 0x200), index3S_CPS3_Stages, 0x20, &pairFullyLinkedNode },
    { _T("Gill Stage (2/17)"), 0x722B80 + (1 * 0x200), 0x722B80 + (2 * 0x200), index3S_CPS3_Stages, 0x21 },
    { _T("Gill Stage (3/17)"), 0x722B80 + (2 * 0x200), 0x722B80 + (3 * 0x200), index3S_CPS3_Stages, 0x22 },
    { _T("Gill Stage (4/17)"), 0x722B80 + (3 * 0x200), 0x722B80 + (4 * 0x200), index3S_CPS3_Stages, 0x23 },
    { _T("Gill Stage (5/17)"), 0x722B80 + (4 * 0x200), 0x722B80 + (5 * 0x200), index3S_CPS3_Stages, 0x24 },
    { _T("Gill Stage (6/17)"), 0x722B80 + (5 * 0x200), 0x722B80 + (6 * 0x200), index3S_CPS3_Stages, 0x25 },
    { _T("Gill Stage (7/17)"), 0x722B80 + (6 * 0x200), 0x722B80 + (7 * 0x200), index3S_CPS3_Stages, 0x26 },
    { _T("Gill Stage (8/17)"), 0x722B80 + (7 * 0x200), 0x722B80 + (8 * 0x200), index3S_CPS3_Stages, 0x27 },
    { _T("Gill Stage (9/17)"), 0x722B80 + (8 * 0x200), 0x722B80 + (9 * 0x200), index3S_CPS3_Stages, 0x28 },
    { _T("Gill Stage (10/17)"), 0x722B80 + (9 * 0x200), 0x722B80 + (10 * 0x200), index3S_CPS3_Stages, 0x29 },
    { _T("Gill Stage (11/17)"), 0x722B80 + (10 * 0x200), 0x722B80 + (11 * 0x200), index3S_CPS3_Stages, 0x2A },
    { _T("Gill Stage (12/17)"), 0x722B80 + (11 * 0x200), 0x722B80 + (12 * 0x200), index3S_CPS3_Stages, 0x2B },
    { _T("Gill Stage (13/17)"), 0x722B80 + (12 * 0x200), 0x722B80 + (13 * 0x200), index3S_CPS3_Stages, 0x2C },
    { _T("Gill Stage (14/17)"), 0x722B80 + (13 * 0x200), 0x722B80 + (14 * 0x200), index3S_CPS3_Stages, 0x2D },
    { _T("Gill Stage (15/17)"), 0x722B80 + (14 * 0x200), 0x722B80 + (15 * 0x200), index3S_CPS3_Stages, 0x2E },
    { _T("Gill Stage (16/17)"), 0x722B80 + (15 * 0x200), 0x722B80 + (16 * 0x200), index3S_CPS3_Stages, 0x2F },
    { _T("Gill Stage (17/17)"), 0x722B80 + (16 * 0x200), 0x724D80, index3S_CPS3_Stages, 0x30 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_GILL_FADED_PALETTES[] =
{
    { _T("Gill Stage (Faded) (1/17)"), 0x724D80 + (0 * 0x200), 0x724D80 + (1 * 0x200), index3S_CPS3_Stages, 0x20, &pairFullyLinkedNode },
    { _T("Gill Stage (Faded) (2/17)"), 0x724D80 + (1 * 0x200), 0x724D80 + (2 * 0x200), index3S_CPS3_Stages, 0x21 },
    { _T("Gill Stage (Faded) (3/17)"), 0x724D80 + (2 * 0x200), 0x724D80 + (3 * 0x200), index3S_CPS3_Stages, 0x22 },
    { _T("Gill Stage (Faded) (4/17)"), 0x724D80 + (3 * 0x200), 0x724D80 + (4 * 0x200), index3S_CPS3_Stages, 0x23 },
    { _T("Gill Stage (Faded) (5/17)"), 0x724D80 + (4 * 0x200), 0x724D80 + (5 * 0x200), index3S_CPS3_Stages, 0x24 },
    { _T("Gill Stage (Faded) (6/17)"), 0x724D80 + (5 * 0x200), 0x724D80 + (6 * 0x200), index3S_CPS3_Stages, 0x25 },
    { _T("Gill Stage (Faded) (7/17)"), 0x724D80 + (6 * 0x200), 0x724D80 + (7 * 0x200), index3S_CPS3_Stages, 0x26 },
    { _T("Gill Stage (Faded) (8/17)"), 0x724D80 + (7 * 0x200), 0x724D80 + (8 * 0x200), index3S_CPS3_Stages, 0x27 },
    { _T("Gill Stage (Faded) (9/17)"), 0x724D80 + (8 * 0x200), 0x724D80 + (9 * 0x200), index3S_CPS3_Stages, 0x28 },
    { _T("Gill Stage (Faded) (10/17)"), 0x724D80 + (9 * 0x200), 0x724D80 + (10 * 0x200), index3S_CPS3_Stages, 0x29 },
    { _T("Gill Stage (Faded) (11/17)"), 0x724D80 + (10 * 0x200), 0x724D80 + (11 * 0x200), index3S_CPS3_Stages, 0x2A },
    { _T("Gill Stage (Faded) (12/17)"), 0x724D80 + (11 * 0x200), 0x724D80 + (12 * 0x200), index3S_CPS3_Stages, 0x2B },
    { _T("Gill Stage (Faded) (13/17)"), 0x724D80 + (12 * 0x200), 0x724D80 + (13 * 0x200), index3S_CPS3_Stages, 0x2C },
    { _T("Gill Stage (Faded) (14/17)"), 0x724D80 + (13 * 0x200), 0x724D80 + (14 * 0x200), index3S_CPS3_Stages, 0x2D },
    { _T("Gill Stage (Faded) (15/17)"), 0x724D80 + (14 * 0x200), 0x724D80 + (15 * 0x200), index3S_CPS3_Stages, 0x2E },
    { _T("Gill Stage (Faded) (16/17)"), 0x724D80 + (15 * 0x200), 0x724D80 + (16 * 0x200), index3S_CPS3_Stages, 0x2F },
    { _T("Gill Stage (Faded) (17/17)"), 0x724D80 + (16 * 0x200), 0x726F80, index3S_CPS3_Stages, 0x30 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_ALEX_PALETTES[] =
{
    { _T("Alex Stage (1/8)"), 0x72D180 + (0 * 0x200), 0x72D180 + (1 * 0x200), index3S_CPS3_Stages, 0x31, &pairFullyLinkedNode },
    { _T("Alex Stage (2/8)"), 0x72D180 + (1 * 0x200), 0x72D180 + (2 * 0x200), index3S_CPS3_Stages, 0x32 },
    { _T("Alex Stage (3/8)"), 0x72D180 + (2 * 0x200), 0x72D180 + (3 * 0x200), index3S_CPS3_Stages, 0x33 },
    { _T("Alex Stage (4/8)"), 0x72D180 + (3 * 0x200), 0x72D180 + (4 * 0x200), index3S_CPS3_Stages, 0x34 },
    { _T("Alex Stage (5/8)"), 0x72D180 + (4 * 0x200), 0x72D180 + (5 * 0x200), index3S_CPS3_Stages, 0x35 },
    { _T("Alex Stage (6/8)"), 0x72D180 + (5 * 0x200), 0x72D180 + (6 * 0x200), index3S_CPS3_Stages, 0x36 },
    { _T("Alex Stage (7/8)"), 0x72D180 + (6 * 0x200), 0x72D180 + (7 * 0x200), index3S_CPS3_Stages, 0x37 },
    { _T("Alex Stage (8/8)"), 0x72D180 + (7 * 0x200), 0x72E080, index3S_CPS3_Stages, 0x38 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_ALEX_FADED_PALETTES[] =
{
    { _T("Alex Stage (Faded) (1/8)"), 0x72E080 + (0 * 0x200), 0x72E080 + (1 * 0x200), index3S_CPS3_Stages, 0x31, &pairFullyLinkedNode },
    { _T("Alex Stage (Faded) (2/8)"), 0x72E080 + (1 * 0x200), 0x72E080 + (2 * 0x200), index3S_CPS3_Stages, 0x32 },
    { _T("Alex Stage (Faded) (3/8)"), 0x72E080 + (2 * 0x200), 0x72E080 + (3 * 0x200), index3S_CPS3_Stages, 0x33 },
    { _T("Alex Stage (Faded) (4/8)"), 0x72E080 + (3 * 0x200), 0x72E080 + (4 * 0x200), index3S_CPS3_Stages, 0x34 },
    { _T("Alex Stage (Faded) (5/8)"), 0x72E080 + (4 * 0x200), 0x72E080 + (5 * 0x200), index3S_CPS3_Stages, 0x35 },
    { _T("Alex Stage (Faded) (6/8)"), 0x72E080 + (5 * 0x200), 0x72E080 + (6 * 0x200), index3S_CPS3_Stages, 0x36 },
    { _T("Alex Stage (Faded) (7/8)"), 0x72E080 + (6 * 0x200), 0x72E080 + (7 * 0x200), index3S_CPS3_Stages, 0x37 },
    { _T("Alex Stage (Faded) (8/8)"), 0x72E080 + (7 * 0x200), 0x72EF80, index3S_CPS3_Stages, 0x38 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_DUDLEY_PALETTES[] =
{
    { _T("Dudley Stage (1/15)"), 0x734F80 + (0 * 0x200), 0x734F80 + (1 * 0x200), index3S_CPS3_Stages, 0x39, &pairFullyLinkedNode },
    { _T("Dudley Stage (2/15)"), 0x734F80 + (1 * 0x200), 0x734F80 + (2 * 0x200), index3S_CPS3_Stages, 0x3A },
    { _T("Dudley Stage (3/15)"), 0x734F80 + (2 * 0x200), 0x734F80 + (3 * 0x200), index3S_CPS3_Stages, 0x3B },
    { _T("Dudley Stage (4/15)"), 0x734F80 + (3 * 0x200), 0x734F80 + (4 * 0x200), index3S_CPS3_Stages, 0x3C },
    { _T("Dudley Stage (5/15)"), 0x734F80 + (4 * 0x200), 0x734F80 + (5 * 0x200), index3S_CPS3_Stages, 0x3D },
    { _T("Dudley Stage (6/15)"), 0x734F80 + (5 * 0x200), 0x734F80 + (6 * 0x200), index3S_CPS3_Stages, 0x3E },
    { _T("Dudley Stage (7/15)"), 0x734F80 + (6 * 0x200), 0x734F80 + (7 * 0x200), index3S_CPS3_Stages, 0x3F },
    { _T("Dudley Stage (8/15)"), 0x734F80 + (7 * 0x200), 0x734F80 + (8 * 0x200), index3S_CPS3_Stages, 0x40 },
    { _T("Dudley Stage (9/15)"), 0x734F80 + (8 * 0x200), 0x734F80 + (9 * 0x200), index3S_CPS3_Stages, 0x41 },
    { _T("Dudley Stage (10/15)"), 0x734F80 + (9 * 0x200), 0x734F80 + (10 * 0x200), index3S_CPS3_Stages, 0x42 },
    { _T("Dudley Stage (11/15)"), 0x734F80 + (10 * 0x200), 0x734F80 + (11 * 0x200), index3S_CPS3_Stages, 0x43 },
    { _T("Dudley Stage (12/15)"), 0x734F80 + (11 * 0x200), 0x734F80 + (12 * 0x200), index3S_CPS3_Stages, 0x44 },
    { _T("Dudley Stage (13/15)"), 0x734F80 + (12 * 0x200), 0x734F80 + (13 * 0x200), index3S_CPS3_Stages, 0x45 },
    { _T("Dudley Stage (14/15)"), 0x734F80 + (13 * 0x200), 0x734F80 + (14 * 0x200), index3S_CPS3_Stages, 0x46 },
    { _T("Dudley Stage (15/15)"), 0x734F80 + (14 * 0x200), 0x736D80, index3S_CPS3_Stages, 0x47 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_DUDLEY_FADED_PALETTES[] =
{
    { _T("Dudley Stage (Faded) (1/15)"), 0x736D80 + (0 * 0x200), 0x736D80 + (1 * 0x200), index3S_CPS3_Stages, 0x39, &pairFullyLinkedNode },
    { _T("Dudley Stage (Faded) (2/15)"), 0x736D80 + (1 * 0x200), 0x736D80 + (2 * 0x200), index3S_CPS3_Stages, 0x3A },
    { _T("Dudley Stage (Faded) (3/15)"), 0x736D80 + (2 * 0x200), 0x736D80 + (3 * 0x200), index3S_CPS3_Stages, 0x3B },
    { _T("Dudley Stage (Faded) (4/15)"), 0x736D80 + (3 * 0x200), 0x736D80 + (4 * 0x200), index3S_CPS3_Stages, 0x3C },
    { _T("Dudley Stage (Faded) (5/15)"), 0x736D80 + (4 * 0x200), 0x736D80 + (5 * 0x200), index3S_CPS3_Stages, 0x3D },
    { _T("Dudley Stage (Faded) (6/15)"), 0x736D80 + (5 * 0x200), 0x736D80 + (6 * 0x200), index3S_CPS3_Stages, 0x3E },
    { _T("Dudley Stage (Faded) (7/15)"), 0x736D80 + (6 * 0x200), 0x736D80 + (7 * 0x200), index3S_CPS3_Stages, 0x3F },
    { _T("Dudley Stage (Faded) (8/15)"), 0x736D80 + (7 * 0x200), 0x736D80 + (8 * 0x200), index3S_CPS3_Stages, 0x40 },
    { _T("Dudley Stage (Faded) (9/15)"), 0x736D80 + (8 * 0x200), 0x736D80 + (9 * 0x200), index3S_CPS3_Stages, 0x41 },
    { _T("Dudley Stage (Faded) (10/15)"), 0x736D80 + (9 * 0x200), 0x736D80 + (10 * 0x200), index3S_CPS3_Stages, 0x42 },
    { _T("Dudley Stage (Faded) (11/15)"), 0x736D80 + (10 * 0x200), 0x736D80 + (11 * 0x200), index3S_CPS3_Stages, 0x43 },
    { _T("Dudley Stage (Faded) (12/15)"), 0x736D80 + (11 * 0x200), 0x736D80 + (12 * 0x200), index3S_CPS3_Stages, 0x44 },
    { _T("Dudley Stage (Faded) (13/15)"), 0x736D80 + (12 * 0x200), 0x736D80 + (13 * 0x200), index3S_CPS3_Stages, 0x45 },
    { _T("Dudley Stage (Faded) (14/15)"), 0x736D80 + (13 * 0x200), 0x736D80 + (14 * 0x200), index3S_CPS3_Stages, 0x46 },
    { _T("Dudley Stage (Faded) (15/15)"), 0x736D80 + (14 * 0x200), 0x738B80, index3S_CPS3_Stages, 0x47 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_KEN_PALETTES[] =
{
    { _T("Ken Stage (1/8)"), 0x72B380 + (0 * 0x200), 0x72B380 + (1 * 0x200), index3S_CPS3_Stages, 0x31, &pairFullyLinkedNode },
    { _T("Ken Stage (2/8)"), 0x72B380 + (1 * 0x200), 0x72B380 + (2 * 0x200), index3S_CPS3_Stages, 0x32 },
    { _T("Ken Stage (3/8)"), 0x72B380 + (2 * 0x200), 0x72B380 + (3 * 0x200), index3S_CPS3_Stages, 0x33 },
    { _T("Ken Stage (4/8)"), 0x72B380 + (3 * 0x200), 0x72B380 + (4 * 0x200), index3S_CPS3_Stages, 0x34 },
    { _T("Ken Stage (5/8)"), 0x72B380 + (4 * 0x200), 0x72B380 + (5 * 0x200), index3S_CPS3_Stages, 0x35 },
    { _T("Ken Stage (6/8)"), 0x72B380 + (5 * 0x200), 0x72B380 + (6 * 0x200), index3S_CPS3_Stages, 0x36 },
    { _T("Ken Stage (7/8)"), 0x72B380 + (6 * 0x200), 0x72B380 + (7 * 0x200), index3S_CPS3_Stages, 0x37 },
    { _T("Ken Stage (8/8)"), 0x72B380 + (7 * 0x200), 0x72C280, index3S_CPS3_Stages, 0x38 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_KEN_FADED_PALETTES[] =
{
    { _T("Ken Stage (Faded) (1/8)"), 0x72C280 + (0 * 0x200), 0x72C280 + (1 * 0x200), index3S_CPS3_Stages, 0x31, &pairFullyLinkedNode },
    { _T("Ken Stage (Faded) (2/8)"), 0x72C280 + (1 * 0x200), 0x72C280 + (2 * 0x200), index3S_CPS3_Stages, 0x32 },
    { _T("Ken Stage (Faded) (3/8)"), 0x72C280 + (2 * 0x200), 0x72C280 + (3 * 0x200), index3S_CPS3_Stages, 0x33 },
    { _T("Ken Stage (Faded) (4/8)"), 0x72C280 + (3 * 0x200), 0x72C280 + (4 * 0x200), index3S_CPS3_Stages, 0x34 },
    { _T("Ken Stage (Faded) (5/8)"), 0x72C280 + (4 * 0x200), 0x72C280 + (5 * 0x200), index3S_CPS3_Stages, 0x35 },
    { _T("Ken Stage (Faded) (6/8)"), 0x72C280 + (5 * 0x200), 0x72C280 + (6 * 0x200), index3S_CPS3_Stages, 0x36 },
    { _T("Ken Stage (Faded) (7/8)"), 0x72C280 + (6 * 0x200), 0x72C280 + (7 * 0x200), index3S_CPS3_Stages, 0x37 },
    { _T("Ken Stage (Faded) (8/8)"), 0x72C280 + (7 * 0x200), 0x72D180, index3S_CPS3_Stages, 0x38 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_ORO_PALETTES[] =
{
    { _T("Oro Stage (1/7)"), 0x745D80 + (0 * 0x200), 0x745D80 + (1 * 0x200), index3S_CPS3_Stages, 0x48, &pairFullyLinkedNode },
    { _T("Oro Stage (2/7)"), 0x745D80 + (1 * 0x200), 0x745D80 + (2 * 0x200), index3S_CPS3_Stages, 0x49 },
    { _T("Oro Stage (3/7)"), 0x745D80 + (2 * 0x200), 0x745D80 + (3 * 0x200), index3S_CPS3_Stages, 0x4a },
    { _T("Oro Stage (4/7)"), 0x745D80 + (3 * 0x200), 0x745D80 + (4 * 0x200), index3S_CPS3_Stages, 0x4b },
    { _T("Oro Stage (5/7)"), 0x745D80 + (4 * 0x200), 0x745D80 + (5 * 0x200), index3S_CPS3_Stages, 0x4c },
    { _T("Oro Stage (6/7)"), 0x745D80 + (5 * 0x200), 0x745D80 + (6 * 0x200), index3S_CPS3_Stages, 0x4d },
    { _T("Oro Stage (7/7)"), 0x745D80 + (6 * 0x200), 0x746AC0, index3S_CPS3_Stages, 0x4e },
};

const sGame_PaletteDataset SFIII3_A_STAGES_ORO_FADED_PALETTES[] =
{
    { _T("Oro Stage (Faded) (1/7)"), 0x746F80 + (0 * 0x200), 0x746F80 + (1 * 0x200), index3S_CPS3_Stages, 0x48, &pairFullyLinkedNode },
    { _T("Oro Stage (Faded) (2/7)"), 0x746F80 + (1 * 0x200), 0x746F80 + (2 * 0x200), index3S_CPS3_Stages, 0x49 },
    { _T("Oro Stage (Faded) (3/7)"), 0x746F80 + (2 * 0x200), 0x746F80 + (3 * 0x200), index3S_CPS3_Stages, 0x4a },
    { _T("Oro Stage (Faded) (4/7)"), 0x746F80 + (3 * 0x200), 0x746F80 + (4 * 0x200), index3S_CPS3_Stages, 0x4b },
    { _T("Oro Stage (Faded) (5/7)"), 0x746F80 + (4 * 0x200), 0x746F80 + (5 * 0x200), index3S_CPS3_Stages, 0x4c },
    { _T("Oro Stage (Faded) (6/7)"), 0x746F80 + (5 * 0x200), 0x746F80 + (6 * 0x200), index3S_CPS3_Stages, 0x4d },
    { _T("Oro Stage (Faded) (7/7)"), 0x746F80 + (6 * 0x200), 0x747CC0, index3S_CPS3_Stages, 0x4e },
};

const sGame_PaletteDataset SFIII3_A_STAGES_NECRO_PALETTES[] =
{
    { _T("Necro Stage (1/5)"), 0x738B80 + (0 * 0x200), 0x738B80 + (1 * 0x200), index3S_CPS3_Stages, 0x5c, &pairFullyLinkedNode },
    { _T("Necro Stage (2/5)"), 0x738B80 + (1 * 0x200), 0x738B80 + (2 * 0x200), index3S_CPS3_Stages, 0x5d },
    { _T("Necro Stage (3/5)"), 0x738B80 + (2 * 0x200), 0x738B80 + (3 * 0x200), index3S_CPS3_Stages, 0x5e },
    { _T("Necro Stage (4/5)"), 0x738B80 + (3 * 0x200), 0x738B80 + (4 * 0x200), index3S_CPS3_Stages, 0x5f },
    { _T("Necro Stage (5/5)"), 0x738B80 + (4 * 0x200), 0x739400, index3S_CPS3_Stages, 0x60 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_NECRO_FADED_PALETTES[] =
{
    { _T("Necro Stage (Faded) (1/5)"), 0x739400 + (0 * 0x200), 0x739400 + (1 * 0x200), index3S_CPS3_Stages, 0x5c, &pairFullyLinkedNode },
    { _T("Necro Stage (Faded) (2/5)"), 0x739400 + (1 * 0x200), 0x739400 + (2 * 0x200), index3S_CPS3_Stages, 0x5d },
    { _T("Necro Stage (Faded) (3/5)"), 0x739400 + (2 * 0x200), 0x739400 + (3 * 0x200), index3S_CPS3_Stages, 0x5e },
    { _T("Necro Stage (Faded) (4/5)"), 0x739400 + (3 * 0x200), 0x739400 + (4 * 0x200), index3S_CPS3_Stages, 0x5f },
    { _T("Necro Stage (Faded) (5/5)"), 0x739400 + (4 * 0x200), 0x739C80, index3S_CPS3_Stages, 0x60 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_HUGO_PALETTES[] =
{
    { _T("Hugo Stage (1/13)"), 0x73B780 + (0 * 0x200), 0x73B780 + (1 * 0x200), index3S_CPS3_Stages, 0x4f, &pairFullyLinkedNode },
    { _T("Hugo Stage (2/13)"), 0x73B780 + (1 * 0x200), 0x73B780 + (2 * 0x200), index3S_CPS3_Stages, 0x50 },
    { _T("Hugo Stage (3/13)"), 0x73B780 + (2 * 0x200), 0x73B780 + (3 * 0x200), index3S_CPS3_Stages, 0x51 },
    { _T("Hugo Stage (4/13)"), 0x73B780 + (3 * 0x200), 0x73B780 + (4 * 0x200), index3S_CPS3_Stages, 0x52 },
    { _T("Hugo Stage (5/13)"), 0x73B780 + (4 * 0x200), 0x73B780 + (5 * 0x200), index3S_CPS3_Stages, 0x53 },
    { _T("Hugo Stage (6/13)"), 0x73B780 + (5 * 0x200), 0x73B780 + (6 * 0x200), index3S_CPS3_Stages, 0x54 },
    { _T("Hugo Stage (7/13)"), 0x73B780 + (6 * 0x200), 0x73B780 + (7 * 0x200), index3S_CPS3_Stages, 0x55 },
    { _T("Hugo Stage (8/13)"), 0x73B780 + (7 * 0x200), 0x73B780 + (8 * 0x200), index3S_CPS3_Stages, 0x56 },
    { _T("Hugo Stage (9/13)"), 0x73B780 + (8 * 0x200), 0x73B780 + (9 * 0x200), index3S_CPS3_Stages, 0x57 },
    { _T("Hugo Stage (10/13)"), 0x73B780 + (9 * 0x200), 0x73B780 + (10 * 0x200), index3S_CPS3_Stages, 0x58 },
    { _T("Hugo Stage (11/13)"), 0x73B780 + (10 * 0x200), 0x73B780 + (11 * 0x200), index3S_CPS3_Stages, 0x59 },
    { _T("Hugo Stage (12/13)"), 0x73B780 + (11 * 0x200), 0x73B780 + (12 * 0x200), index3S_CPS3_Stages, 0x5a },
    { _T("Hugo Stage (13/13)"), 0x73B780 + (12 * 0x200), 0x73D180, index3S_CPS3_Stages, 0x5b },
};

const sGame_PaletteDataset SFIII3_A_STAGES_HUGO_FADED_PALETTES[] =
{
    { _T("Hugo Stage (Faded) (1/13)"), 0x73D180 + (0 * 0x200), 0x73D180 + (1 * 0x200), index3S_CPS3_Stages, 0x4f, &pairFullyLinkedNode },
    { _T("Hugo Stage (Faded) (2/13)"), 0x73D180 + (1 * 0x200), 0x73D180 + (2 * 0x200), index3S_CPS3_Stages, 0x50 },
    { _T("Hugo Stage (Faded) (3/13)"), 0x73D180 + (2 * 0x200), 0x73D180 + (3 * 0x200), index3S_CPS3_Stages, 0x51 },
    { _T("Hugo Stage (Faded) (4/13)"), 0x73D180 + (3 * 0x200), 0x73D180 + (4 * 0x200), index3S_CPS3_Stages, 0x52 },
    { _T("Hugo Stage (Faded) (5/13)"), 0x73D180 + (4 * 0x200), 0x73D180 + (5 * 0x200), index3S_CPS3_Stages, 0x53 },
    { _T("Hugo Stage (Faded) (6/13)"), 0x73D180 + (5 * 0x200), 0x73D180 + (6 * 0x200), index3S_CPS3_Stages, 0x54 },
    { _T("Hugo Stage (Faded) (7/13)"), 0x73D180 + (6 * 0x200), 0x73D180 + (7 * 0x200), index3S_CPS3_Stages, 0x55 },
    { _T("Hugo Stage (Faded) (8/13)"), 0x73D180 + (7 * 0x200), 0x73D180 + (8 * 0x200), index3S_CPS3_Stages, 0x56 },
    { _T("Hugo Stage (Faded) (9/13)"), 0x73D180 + (8 * 0x200), 0x73D180 + (9 * 0x200), index3S_CPS3_Stages, 0x57 },
    { _T("Hugo Stage (Faded) (10/13)"), 0x73D180 + (9 * 0x200), 0x73D180 + (10 * 0x200), index3S_CPS3_Stages, 0x58 },
    { _T("Hugo Stage (Faded) (11/13)"), 0x73D180 + (10 * 0x200), 0x73D180 + (11 * 0x200), index3S_CPS3_Stages, 0x59 },
    { _T("Hugo Stage (Faded) (12/13)"), 0x73D180 + (11 * 0x200), 0x73D180 + (12 * 0x200), index3S_CPS3_Stages, 0x5a },
    { _T("Hugo Stage (Faded) (13/13)"), 0x73D180 + (12 * 0x200), 0x73EB80, index3S_CPS3_Stages, 0x5b },
};

const sGame_PaletteDataset SFIII3_A_STAGES_IBUKI_PALETTES[] =
{
    { _T("Ibuki Stage (1/10)"), 0x740B80 + (0 * 0x200), 0x740B80 + (1 * 0x200), index3S_CPS3_Stages, 0x61, &pairFullyLinkedNode },
    { _T("Ibuki Stage (2/10)"), 0x740B80 + (1 * 0x200), 0x740B80 + (2 * 0x200), index3S_CPS3_Stages, 0x62 },
    { _T("Ibuki Stage (3/10)"), 0x740B80 + (2 * 0x200), 0x740B80 + (3 * 0x200), index3S_CPS3_Stages, 0x63 },
    { _T("Ibuki Stage (4/10)"), 0x740B80 + (3 * 0x200), 0x740B80 + (4 * 0x200), index3S_CPS3_Stages, 0x64 },
    { _T("Ibuki Stage (5/10)"), 0x740B80 + (4 * 0x200), 0x740B80 + (5 * 0x200), index3S_CPS3_Stages, 0x65 },
    { _T("Ibuki Stage (6/10)"), 0x740B80 + (5 * 0x200), 0x740B80 + (6 * 0x200), index3S_CPS3_Stages, 0x66 },
    { _T("Ibuki Stage (7/10)"), 0x740B80 + (6 * 0x200), 0x740B80 + (7 * 0x200), index3S_CPS3_Stages, 0x67 },
    { _T("Ibuki Stage (8/10)"), 0x740B80 + (7 * 0x200), 0x740B80 + (8 * 0x200), index3S_CPS3_Stages, 0x68 },
    { _T("Ibuki Stage (9/10)"), 0x740B80 + (8 * 0x200), 0x740B80 + (9 * 0x200), index3S_CPS3_Stages, 0x69 },
    { _T("Ibuki Stage (10/10)"), 0x740B80 + (9 * 0x200), 0x741E80, index3S_CPS3_Stages, 0x6a },
};

const sGame_PaletteDataset SFIII3_A_STAGES_IBUKI_FADED_PALETTES[] =
{
    { _T("Ibuki Stage (Faded) (1/10)"), 0x741F80 + (0 * 0x200), 0x741F80 + (1 * 0x200), index3S_CPS3_Stages, 0x61, &pairFullyLinkedNode },
    { _T("Ibuki Stage (Faded) (2/10)"), 0x741F80 + (1 * 0x200), 0x741F80 + (2 * 0x200), index3S_CPS3_Stages, 0x62 },
    { _T("Ibuki Stage (Faded) (3/10)"), 0x741F80 + (2 * 0x200), 0x741F80 + (3 * 0x200), index3S_CPS3_Stages, 0x63 },
    { _T("Ibuki Stage (Faded) (4/10)"), 0x741F80 + (3 * 0x200), 0x741F80 + (4 * 0x200), index3S_CPS3_Stages, 0x64 },
    { _T("Ibuki Stage (Faded) (5/10)"), 0x741F80 + (4 * 0x200), 0x741F80 + (5 * 0x200), index3S_CPS3_Stages, 0x65 },
    { _T("Ibuki Stage (Faded) (6/10)"), 0x741F80 + (5 * 0x200), 0x741F80 + (6 * 0x200), index3S_CPS3_Stages, 0x66 },
    { _T("Ibuki Stage (Faded) (7/10)"), 0x741F80 + (6 * 0x200), 0x741F80 + (7 * 0x200), index3S_CPS3_Stages, 0x67 },
    { _T("Ibuki Stage (Faded) (8/10)"), 0x741F80 + (7 * 0x200), 0x741F80 + (8 * 0x200), index3S_CPS3_Stages, 0x68 },
    { _T("Ibuki Stage (Faded) (9/10)"), 0x741F80 + (8 * 0x200), 0x741F80 + (9 * 0x200), index3S_CPS3_Stages, 0x69 },
    { _T("Ibuki Stage (Faded) (10/10)"), 0x741F80 + (9 * 0x200), 0x743280, index3S_CPS3_Stages, 0x6a },
};

const sGame_PaletteDataset SFIII3_A_STAGES_SEAN_PALETTES[] =
{
    { _T("Sean Stage (1/9)"), 0x743980 + (0 * 0x200), 0x743980 + (1 * 0x200), index3S_CPS3_Stages, 0x73, &pairFullyLinkedNode },
    { _T("Sean Stage (2/9)"), 0x743980 + (1 * 0x200), 0x743980 + (2 * 0x200), index3S_CPS3_Stages, 0x74 },
    { _T("Sean Stage (3/9)"), 0x743980 + (2 * 0x200), 0x743980 + (3 * 0x200), index3S_CPS3_Stages, 0x75 },
    { _T("Sean Stage (4/9)"), 0x743980 + (3 * 0x200), 0x743980 + (4 * 0x200), index3S_CPS3_Stages, 0x76 },
    { _T("Sean Stage (5/9)"), 0x743980 + (4 * 0x200), 0x743980 + (5 * 0x200), index3S_CPS3_Stages, 0x77 },
    { _T("Sean Stage (6/9)"), 0x743980 + (5 * 0x200), 0x743980 + (6 * 0x200), index3S_CPS3_Stages, 0x78 },
    { _T("Sean Stage (7/9)"), 0x743980 + (6 * 0x200), 0x743980 + (7 * 0x200), index3S_CPS3_Stages, 0x79 },
    { _T("Sean Stage (8/9)"), 0x743980 + (7 * 0x200), 0x743980 + (8 * 0x200), index3S_CPS3_Stages, 0x7a },
    { _T("Sean Stage (9/9)"), 0x743980 + (8 * 0x200), 0x744B80, index3S_CPS3_Stages, 0x7b },
};

const sGame_PaletteDataset SFIII3_A_STAGES_SEAN_FADED_PALETTES[] =
{
    { _T("Sean Stage (Faded) (1/9)"), 0x744B80 + (0 * 0x200), 0x744B80 + (1 * 0x200), index3S_CPS3_Stages, 0x73, &pairFullyLinkedNode },
    { _T("Sean Stage (Faded) (2/9)"), 0x744B80 + (1 * 0x200), 0x744B80 + (2 * 0x200), index3S_CPS3_Stages, 0x74 },
    { _T("Sean Stage (Faded) (3/9)"), 0x744B80 + (2 * 0x200), 0x744B80 + (3 * 0x200), index3S_CPS3_Stages, 0x75 },
    { _T("Sean Stage (Faded) (4/9)"), 0x744B80 + (3 * 0x200), 0x744B80 + (4 * 0x200), index3S_CPS3_Stages, 0x76 },
    { _T("Sean Stage (Faded) (5/9)"), 0x744B80 + (4 * 0x200), 0x744B80 + (5 * 0x200), index3S_CPS3_Stages, 0x77 },
    { _T("Sean Stage (Faded) (6/9)"), 0x744B80 + (5 * 0x200), 0x744B80 + (6 * 0x200), index3S_CPS3_Stages, 0x78 },
    { _T("Sean Stage (Faded) (7/9)"), 0x744B80 + (6 * 0x200), 0x744B80 + (7 * 0x200), index3S_CPS3_Stages, 0x79 },
    { _T("Sean Stage (Faded) (8/9)"), 0x744B80 + (7 * 0x200), 0x744B80 + (8 * 0x200), index3S_CPS3_Stages, 0x7a },
    { _T("Sean Stage (Faded) (9/9)"), 0x744B80 + (8 * 0x200), 0x745D80, index3S_CPS3_Stages, 0x7b },
};

const sGame_PaletteDataset SFIII3_A_STAGES_RYU_PALETTES[] =
{
    { _T("Ryu Stage (1/8)"), 0x73EB80 + (0 * 0x200), 0x73EB80 + (1 * 0x200), index3S_CPS3_Stages, 0x6b, &pairFullyLinkedNode },
    { _T("Ryu Stage (2/8)"), 0x73EB80 + (1 * 0x200), 0x73EB80 + (2 * 0x200), index3S_CPS3_Stages, 0x6c },
    { _T("Ryu Stage (3/8)"), 0x73EB80 + (2 * 0x200), 0x73EB80 + (3 * 0x200), index3S_CPS3_Stages, 0x6d },
    { _T("Ryu Stage (4/8)"), 0x73EB80 + (3 * 0x200), 0x73EB80 + (4 * 0x200), index3S_CPS3_Stages, 0x6e },
    { _T("Ryu Stage (5/8)"), 0x73EB80 + (4 * 0x200), 0x73EB80 + (5 * 0x200), index3S_CPS3_Stages, 0x6f },
    { _T("Ryu Stage (6/8)"), 0x73EB80 + (5 * 0x200), 0x73EB80 + (6 * 0x200), index3S_CPS3_Stages, 0x70 },
    { _T("Ryu Stage (7/8)"), 0x73EB80 + (6 * 0x200), 0x73EB80 + (7 * 0x200), index3S_CPS3_Stages, 0x71 },
    { _T("Ryu Stage (8/8)"), 0x73EB80 + (7 * 0x200), 0x73FB80, index3S_CPS3_Stages, 0x72 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_RYU_FADED_PALETTES[] =
{
    { _T("Ryu Stage (Faded) (1/8)"), 0x73FB80 + (0 * 0x200), 0x73FB80 + (1 * 0x200), index3S_CPS3_Stages, 0x6b, &pairFullyLinkedNode },
    { _T("Ryu Stage (Faded) (2/8)"), 0x73FB80 + (1 * 0x200), 0x73FB80 + (2 * 0x200), index3S_CPS3_Stages, 0x6c },
    { _T("Ryu Stage (Faded) (3/8)"), 0x73FB80 + (2 * 0x200), 0x73FB80 + (3 * 0x200), index3S_CPS3_Stages, 0x6d },
    { _T("Ryu Stage (Faded) (4/8)"), 0x73FB80 + (3 * 0x200), 0x73FB80 + (4 * 0x200), index3S_CPS3_Stages, 0x6e },
    { _T("Ryu Stage (Faded) (5/8)"), 0x73FB80 + (4 * 0x200), 0x73FB80 + (5 * 0x200), index3S_CPS3_Stages, 0x6f },
    { _T("Ryu Stage (Faded) (6/8)"), 0x73FB80 + (5 * 0x200), 0x73FB80 + (6 * 0x200), index3S_CPS3_Stages, 0x70 },
    { _T("Ryu Stage (Faded) (7/8)"), 0x73FB80 + (6 * 0x200), 0x73FB80 + (7 * 0x200), index3S_CPS3_Stages, 0x71 },
    { _T("Ryu Stage (Faded) (8/8)"), 0x73FB80 + (7 * 0x200), 0x740B80, index3S_CPS3_Stages, 0x72 },
};

const sGame_PaletteDataset SFIII3_A_STAGES_CHUNLI_PALETTES[] =
{
    { _T("Chun-Li Stage (1/19)"), 0x74E400 + (0 * 0x200), 0x74E400 + (1 * 0x200), index3S_CPS3_Stages, 0x7c, &pairFullyLinkedNode },
    { _T("Chun-Li Stage (2/19)"), 0x74E400 + (1 * 0x200), 0x74E400 + (2 * 0x200), index3S_CPS3_Stages, 0x7d },
    { _T("Chun-Li Stage (3/19)"), 0x74E400 + (2 * 0x200), 0x74E400 + (3 * 0x200), index3S_CPS3_Stages, 0x7e },
    { _T("Chun-Li Stage (4/19)"), 0x74E400 + (3 * 0x200), 0x74E400 + (4 * 0x200), index3S_CPS3_Stages, 0x7f },
    { _T("Chun-Li Stage (5/19)"), 0x74E400 + (4 * 0x200), 0x74E400 + (5 * 0x200), index3S_CPS3_Stages, 0x80 },
    { _T("Chun-Li Stage (6/19)"), 0x74E400 + (5 * 0x200), 0x74E400 + (6 * 0x200), index3S_CPS3_Stages, 0x81 },
    { _T("Chun-Li Stage (7/19)"), 0x74E400 + (6 * 0x200), 0x74E400 + (7 * 0x200), index3S_CPS3_Stages, 0x82 },
    { _T("Chun-Li Stage (8/19)"), 0x74E400 + (7 * 0x200), 0x74E400 + (8 * 0x200), index3S_CPS3_Stages, 0x83 },
    { _T("Chun-Li Stage (9/19)"), 0x74E400 + (8 * 0x200), 0x74E400 + (9 * 0x200), index3S_CPS3_Stages, 0x84 },
    { _T("Chun-Li Stage (10/19)"), 0x74E400 + (9 * 0x200), 0x74E400 + (10 * 0x200), index3S_CPS3_Stages, 0x85 },
    { _T("Chun-Li Stage (11/19)"), 0x74E400 + (10 * 0x200), 0x74E400 + (11 * 0x200), index3S_CPS3_Stages, 0x86 },
    { _T("Chun-Li Stage (12/19)"), 0x74E400 + (11 * 0x200), 0x74E400 + (12 * 0x200), index3S_CPS3_Stages, 0x87 },
    { _T("Chun-Li Stage (13/19)"), 0x74E400 + (12 * 0x200), 0x74E400 + (13 * 0x200), index3S_CPS3_Stages, 0x88 },
    { _T("Chun-Li Stage (14/19)"), 0x74E400 + (13 * 0x200), 0x74E400 + (14 * 0x200), index3S_CPS3_Stages, 0x89 },
    { _T("Chun-Li Stage (15/19)"), 0x74E400 + (14 * 0x200), 0x74E400 + (15 * 0x200), index3S_CPS3_Stages, 0x8a },
    { _T("Chun-Li Stage (16/19)"), 0x74E400 + (15 * 0x200), 0x74E400 + (16 * 0x200), index3S_CPS3_Stages, 0x8b },
    { _T("Chun-Li Stage (17/19)"), 0x74E400 + (16 * 0x200), 0x74E400 + (17 * 0x200), index3S_CPS3_Stages, 0x8c },
    { _T("Chun-Li Stage (18/19)"), 0x74E400 + (17 * 0x200), 0x74E400 + (18 * 0x200), index3S_CPS3_Stages, 0x8d },
    { _T("Chun-Li Stage (19/19)"), 0x74E400 + (18 * 0x200), 0x750900, index3S_CPS3_Stages, 0x8e },
};

const sGame_PaletteDataset SFIII3_A_STAGES_CHUNLI_FADED_PALETTES[] =
{
    { _T("Chun-Li Stage (Faded) (1/19)"), 0x750A00 + (0 * 0x200), 0x750A00 + (1 * 0x200), index3S_CPS3_Stages, 0x7c, &pairFullyLinkedNode },
    { _T("Chun-Li Stage (Faded) (2/19)"), 0x750A00 + (1 * 0x200), 0x750A00 + (2 * 0x200), index3S_CPS3_Stages, 0x7d },
    { _T("Chun-Li Stage (Faded) (3/19)"), 0x750A00 + (2 * 0x200), 0x750A00 + (3 * 0x200), index3S_CPS3_Stages, 0x7e },
    { _T("Chun-Li Stage (Faded) (4/19)"), 0x750A00 + (3 * 0x200), 0x750A00 + (4 * 0x200), index3S_CPS3_Stages, 0x7f },
    { _T("Chun-Li Stage (Faded) (5/19)"), 0x750A00 + (4 * 0x200), 0x750A00 + (5 * 0x200), index3S_CPS3_Stages, 0x80 },
    { _T("Chun-Li Stage (Faded) (6/19)"), 0x750A00 + (5 * 0x200), 0x750A00 + (6 * 0x200), index3S_CPS3_Stages, 0x81 },
    { _T("Chun-Li Stage (Faded) (7/19)"), 0x750A00 + (6 * 0x200), 0x750A00 + (7 * 0x200), index3S_CPS3_Stages, 0x82 },
    { _T("Chun-Li Stage (Faded) (8/19)"), 0x750A00 + (7 * 0x200), 0x750A00 + (8 * 0x200), index3S_CPS3_Stages, 0x83 },
    { _T("Chun-Li Stage (Faded) (9/19)"), 0x750A00 + (8 * 0x200), 0x750A00 + (9 * 0x200), index3S_CPS3_Stages, 0x84 },
    { _T("Chun-Li Stage (Faded) (10/19)"), 0x750A00 + (9 * 0x200), 0x750A00 + (10 * 0x200), index3S_CPS3_Stages, 0x85 },
    { _T("Chun-Li Stage (Faded) (11/19)"), 0x750A00 + (10 * 0x200), 0x750A00 + (11 * 0x200), index3S_CPS3_Stages, 0x86 },
    { _T("Chun-Li Stage (Faded) (12/19)"), 0x750A00 + (11 * 0x200), 0x750A00 + (12 * 0x200), index3S_CPS3_Stages, 0x87 },
    { _T("Chun-Li Stage (Faded) (13/19)"), 0x750A00 + (12 * 0x200), 0x750A00 + (13 * 0x200), index3S_CPS3_Stages, 0x88 },
    { _T("Chun-Li Stage (Faded) (14/19)"), 0x750A00 + (13 * 0x200), 0x750A00 + (14 * 0x200), index3S_CPS3_Stages, 0x89 },
    { _T("Chun-Li Stage (Faded) (15/19)"), 0x750A00 + (14 * 0x200), 0x750A00 + (15 * 0x200), index3S_CPS3_Stages, 0x8a },
    { _T("Chun-Li Stage (Faded) (16/19)"), 0x750A00 + (15 * 0x200), 0x750A00 + (16 * 0x200), index3S_CPS3_Stages, 0x8b },
    { _T("Chun-Li Stage (Faded) (17/19)"), 0x750A00 + (16 * 0x200), 0x750A00 + (17 * 0x200), index3S_CPS3_Stages, 0x8c },
    { _T("Chun-Li Stage (Faded) (18/19)"), 0x750A00 + (17 * 0x200), 0x750A00 + (18 * 0x200), index3S_CPS3_Stages, 0x8d },
    { _T("Chun-Li Stage (Faded) (19/19)"), 0x750A00 + (18 * 0x200), 0x752F00, index3S_CPS3_Stages, 0x8e },
};

const sGame_PaletteDataset SFIII3_A_STAGES_URIEN_PALETTES[] =
{
    { _T("Urien Stage (1/16)"), 0x748200 + (0 * 0x200), 0x748200 + (1 * 0x200), index3S_CPS3_Stages, 0x8f, &pairFullyLinkedNode },
    { _T("Urien Stage (2/16)"), 0x748200 + (1 * 0x200), 0x748200 + (2 * 0x200), index3S_CPS3_Stages, 0x90 },
    { _T("Urien Stage (3/16)"), 0x748200 + (2 * 0x200), 0x748200 + (3 * 0x200), index3S_CPS3_Stages, 0x91 },
    { _T("Urien Stage (4/16)"), 0x748200 + (3 * 0x200), 0x748200 + (4 * 0x200), index3S_CPS3_Stages, 0x92 },
    { _T("Urien Stage (5/16)"), 0x748200 + (4 * 0x200), 0x748200 + (5 * 0x200), index3S_CPS3_Stages, 0x93 },
    { _T("Urien Stage (6/16)"), 0x748200 + (5 * 0x200), 0x748200 + (6 * 0x200), index3S_CPS3_Stages, 0x94 },
    { _T("Urien Stage (7/16)"), 0x748200 + (6 * 0x200), 0x748200 + (7 * 0x200), index3S_CPS3_Stages, 0x95 },
    { _T("Urien Stage (8/16)"), 0x748200 + (7 * 0x200), 0x748200 + (8 * 0x200), index3S_CPS3_Stages, 0x96 },
    { _T("Urien Stage (9/16)"), 0x748200 + (8 * 0x200), 0x748200 + (9 * 0x200), index3S_CPS3_Stages, 0x97 },
    { _T("Urien Stage (10/16)"), 0x748200 + (9 * 0x200), 0x748200 + (10 * 0x200), index3S_CPS3_Stages, 0x98 },
    { _T("Urien Stage (11/16)"), 0x748200 + (10 * 0x200), 0x748200 + (11 * 0x200), index3S_CPS3_Stages, 0x99 },
    { _T("Urien Stage (12/16)"), 0x748200 + (11 * 0x200), 0x748200 + (12 * 0x200), index3S_CPS3_Stages, 0x9a },
    { _T("Urien Stage (13/16)"), 0x748200 + (12 * 0x200), 0x748200 + (13 * 0x200), index3S_CPS3_Stages, 0x9b },
    { _T("Urien Stage (14/16)"), 0x748200 + (13 * 0x200), 0x748200 + (14 * 0x200), index3S_CPS3_Stages, 0x9c },
    { _T("Urien Stage (15/16)"), 0x748200 + (14 * 0x200), 0x748200 + (15 * 0x200), index3S_CPS3_Stages, 0x9d },
    { _T("Urien Stage (16/16)"), 0x748200 + (15 * 0x200), 0x74A180, index3S_CPS3_Stages, 0x9e },
};

const sGame_PaletteDataset SFIII3_A_STAGES_URIEN_FADED_PALETTES[] =
{
    { _T("Urien Stage (Faded) (1/16)"), 0x74A200 + (0 * 0x200), 0x74A200 + (1 * 0x200), index3S_CPS3_Stages, 0x8f, &pairFullyLinkedNode },
    { _T("Urien Stage (Faded) (2/16)"), 0x74A200 + (1 * 0x200), 0x74A200 + (2 * 0x200), index3S_CPS3_Stages, 0x90 },
    { _T("Urien Stage (Faded) (3/16)"), 0x74A200 + (2 * 0x200), 0x74A200 + (3 * 0x200), index3S_CPS3_Stages, 0x91 },
    { _T("Urien Stage (Faded) (4/16)"), 0x74A200 + (3 * 0x200), 0x74A200 + (4 * 0x200), index3S_CPS3_Stages, 0x92 },
    { _T("Urien Stage (Faded) (5/16)"), 0x74A200 + (4 * 0x200), 0x74A200 + (5 * 0x200), index3S_CPS3_Stages, 0x93 },
    { _T("Urien Stage (Faded) (6/16)"), 0x74A200 + (5 * 0x200), 0x74A200 + (6 * 0x200), index3S_CPS3_Stages, 0x94 },
    { _T("Urien Stage (Faded) (7/16)"), 0x74A200 + (6 * 0x200), 0x74A200 + (7 * 0x200), index3S_CPS3_Stages, 0x95 },
    { _T("Urien Stage (Faded) (8/16)"), 0x74A200 + (7 * 0x200), 0x74A200 + (8 * 0x200), index3S_CPS3_Stages, 0x96 },
    { _T("Urien Stage (Faded) (9/16)"), 0x74A200 + (8 * 0x200), 0x74A200 + (9 * 0x200), index3S_CPS3_Stages, 0x97 },
    { _T("Urien Stage (Faded) (10/16)"), 0x74A200 + (9 * 0x200), 0x74A200 + (10 * 0x200), index3S_CPS3_Stages, 0x98 },
    { _T("Urien Stage (Faded) (11/16)"), 0x74A200 + (10 * 0x200), 0x74A200 + (11 * 0x200), index3S_CPS3_Stages, 0x99 },
    { _T("Urien Stage (Faded) (12/16)"), 0x74A200 + (11 * 0x200), 0x74A200 + (12 * 0x200), index3S_CPS3_Stages, 0x9a },
    { _T("Urien Stage (Faded) (13/16)"), 0x74A200 + (12 * 0x200), 0x74A200 + (13 * 0x200), index3S_CPS3_Stages, 0x9b },
    { _T("Urien Stage (Faded) (14/16)"), 0x74A200 + (13 * 0x200), 0x74A200 + (14 * 0x200), index3S_CPS3_Stages, 0x9c },
    { _T("Urien Stage (Faded) (15/16)"), 0x74A200 + (14 * 0x200), 0x74A200 + (15 * 0x200), index3S_CPS3_Stages, 0x9d },
    { _T("Urien Stage (Faded) (16/16)"), 0x74A200 + (15 * 0x200), 0x74C180, index3S_CPS3_Stages, 0x9e },
};

const sGame_PaletteDataset SFIII3_A_STAGES_YUN_PALETTES[] =
{
    { _T("Yun Stage (1/13)"), 0x72EF80 + (0 * 0x200), 0x72EF80 + (1 * 0x200), index3S_CPS3_Stages, 0x9f, &pairFullyLinkedNode },
    { _T("Yun Stage (2/13)"), 0x72EF80 + (1 * 0x200), 0x72EF80 + (2 * 0x200), index3S_CPS3_Stages, 0xa0 },
    { _T("Yun Stage (3/13)"), 0x72EF80 + (2 * 0x200), 0x72EF80 + (3 * 0x200), index3S_CPS3_Stages, 0xa1 },
    { _T("Yun Stage (4/13)"), 0x72EF80 + (3 * 0x200), 0x72EF80 + (4 * 0x200), index3S_CPS3_Stages, 0xa2 },
    { _T("Yun Stage (5/13)"), 0x72EF80 + (4 * 0x200), 0x72EF80 + (5 * 0x200), index3S_CPS3_Stages, 0xa3 },
    { _T("Yun Stage (6/13)"), 0x72EF80 + (5 * 0x200), 0x72EF80 + (6 * 0x200), index3S_CPS3_Stages, 0xa4 },
    { _T("Yun Stage (7/13)"), 0x72EF80 + (6 * 0x200), 0x72EF80 + (7 * 0x200), index3S_CPS3_Stages, 0xa5 },
    { _T("Yun Stage (8/13)"), 0x72EF80 + (7 * 0x200), 0x72EF80 + (8 * 0x200), index3S_CPS3_Stages, 0xa6 },
    { _T("Yun Stage (9/13)"), 0x72EF80 + (8 * 0x200), 0x72EF80 + (9 * 0x200), index3S_CPS3_Stages, 0xa7 },
    { _T("Yun Stage (10/13)"), 0x72EF80 + (9 * 0x200), 0x72EF80 + (10 * 0x200), index3S_CPS3_Stages, 0xa8 },
    { _T("Yun Stage (11/13)"), 0x72EF80 + (10 * 0x200), 0x72EF80 + (11 * 0x200), index3S_CPS3_Stages, 0xa9 },
    { _T("Yun Stage (12/13)"), 0x72EF80 + (11 * 0x200), 0x72EF80 + (12 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Yun Stage (13/13)"), 0x72EF80 + (12 * 0x200), 0x730880, index3S_CPS3_Stages, 0xab },
};

const sGame_PaletteDataset SFIII3_A_STAGES_YUN_FADED_PALETTES[] =
{
    { _T("Yun Stage (Faded) (1/13)"), 0x730880 + (0 * 0x200), 0x730880 + (1 * 0x200), index3S_CPS3_Stages, 0x9f, &pairFullyLinkedNode },
    { _T("Yun Stage (Faded) (2/13)"), 0x730880 + (1 * 0x200), 0x730880 + (2 * 0x200), index3S_CPS3_Stages, 0xa0 },
    { _T("Yun Stage (Faded) (3/13)"), 0x730880 + (2 * 0x200), 0x730880 + (3 * 0x200), index3S_CPS3_Stages, 0xa1 },
    { _T("Yun Stage (Faded) (4/13)"), 0x730880 + (3 * 0x200), 0x730880 + (4 * 0x200), index3S_CPS3_Stages, 0xa2 },
    { _T("Yun Stage (Faded) (5/13)"), 0x730880 + (4 * 0x200), 0x730880 + (5 * 0x200), index3S_CPS3_Stages, 0xa3 },
    { _T("Yun Stage (Faded) (6/13)"), 0x730880 + (5 * 0x200), 0x730880 + (6 * 0x200), index3S_CPS3_Stages, 0xa4 },
    { _T("Yun Stage (Faded) (7/13)"), 0x730880 + (6 * 0x200), 0x730880 + (7 * 0x200), index3S_CPS3_Stages, 0xa5 },
    { _T("Yun Stage (Faded) (8/13)"), 0x730880 + (7 * 0x200), 0x730880 + (8 * 0x200), index3S_CPS3_Stages, 0xa6 },
    { _T("Yun Stage (Faded) (9/13)"), 0x730880 + (8 * 0x200), 0x730880 + (9 * 0x200), index3S_CPS3_Stages, 0xa7 },
    { _T("Yun Stage (Faded) (10/13)"), 0x730880 + (9 * 0x200), 0x730880 + (10 * 0x200), index3S_CPS3_Stages, 0xa8 },
    { _T("Yun Stage (Faded) (11/13)"), 0x730880 + (10 * 0x200), 0x730880 + (11 * 0x200), index3S_CPS3_Stages, 0xa9 },
    { _T("Yun Stage (Faded) (12/13)"), 0x730880 + (11 * 0x200), 0x730880 + (12 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Yun Stage (Faded) (13/13)"), 0x730880 + (12 * 0x200), 0x732180, index3S_CPS3_Stages, 0xab },
};

const sGame_PaletteDataset SFIII3_A_STAGES_REMY_PALETTES[] =
{
    { _T("Remy Stage (1/20)"), 0x755080 + (0 * 0x200), 0x755080 + (1 * 0x200), index3S_CPS3_Stages, 0x9f, &pairFullyLinkedNode },
    { _T("Remy Stage (2/20)"), 0x755080 + (1 * 0x200), 0x755080 + (2 * 0x200), index3S_CPS3_Stages, 0xa0 },
    { _T("Remy Stage (3/20)"), 0x755080 + (2 * 0x200), 0x755080 + (3 * 0x200), index3S_CPS3_Stages, 0xa1 },
    { _T("Remy Stage (4/20)"), 0x755080 + (3 * 0x200), 0x755080 + (4 * 0x200), index3S_CPS3_Stages, 0xa2 },
    { _T("Remy Stage (5/20)"), 0x755080 + (4 * 0x200), 0x755080 + (5 * 0x200), index3S_CPS3_Stages, 0xa3 },
    { _T("Remy Stage (6/20)"), 0x755080 + (5 * 0x200), 0x755080 + (6 * 0x200), index3S_CPS3_Stages, 0xa4 },
    { _T("Remy Stage (7/20)"), 0x755080 + (6 * 0x200), 0x755080 + (7 * 0x200), index3S_CPS3_Stages, 0xa5 },
    { _T("Remy Stage (8/20)"), 0x755080 + (7 * 0x200), 0x755080 + (8 * 0x200), index3S_CPS3_Stages, 0xa6 },
    { _T("Remy Stage (9/20)"), 0x755080 + (8 * 0x200), 0x755080 + (9 * 0x200), index3S_CPS3_Stages, 0xa7 },
    { _T("Remy Stage (10/20)"), 0x755080 + (9 * 0x200), 0x755080 + (10 * 0x200), index3S_CPS3_Stages, 0xa8 },
    { _T("Remy Stage (11/20)"), 0x755080 + (10 * 0x200), 0x755080 + (11 * 0x200), index3S_CPS3_Stages, 0xa9 },
    { _T("Remy Stage (12/20)"), 0x755080 + (11 * 0x200), 0x755080 + (12 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (13/20)"), 0x755080 + (12 * 0x200), 0x755080 + (13 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (14/20)"), 0x755080 + (13 * 0x200), 0x755080 + (14 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (15/20)"), 0x755080 + (14 * 0x200), 0x755080 + (15 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (16/20)"), 0x755080 + (15 * 0x200), 0x755080 + (16 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (17/20)"), 0x755080 + (16 * 0x200), 0x755080 + (17 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (18/20)"), 0x755080 + (17 * 0x200), 0x755080 + (18 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (19/20)"), 0x755080 + (18 * 0x200), 0x755080 + (19 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (20/20)"), 0x755080 + (19 * 0x200), 0x759080, index3S_CPS3_Stages, 0xab },
};

const sGame_PaletteDataset SFIII3_A_STAGES_REMY_FADED_PALETTES[] =
{
    { _T("Remy Stage (Faded) (1/20)"), 0x759080 + (0 * 0x200), 0x759080 + (1 * 0x200), index3S_CPS3_Stages, 0x9f, &pairFullyLinkedNode },
    { _T("Remy Stage (Faded) (2/20)"), 0x759080 + (1 * 0x200), 0x759080 + (2 * 0x200), index3S_CPS3_Stages, 0xa0 },
    { _T("Remy Stage (Faded) (3/20)"), 0x759080 + (2 * 0x200), 0x759080 + (3 * 0x200), index3S_CPS3_Stages, 0xa1 },
    { _T("Remy Stage (Faded) (4/20)"), 0x759080 + (3 * 0x200), 0x759080 + (4 * 0x200), index3S_CPS3_Stages, 0xa2 },
    { _T("Remy Stage (Faded) (5/20)"), 0x759080 + (4 * 0x200), 0x759080 + (5 * 0x200), index3S_CPS3_Stages, 0xa3 },
    { _T("Remy Stage (Faded) (6/20)"), 0x759080 + (5 * 0x200), 0x759080 + (6 * 0x200), index3S_CPS3_Stages, 0xa4 },
    { _T("Remy Stage (Faded) (7/20)"), 0x759080 + (6 * 0x200), 0x759080 + (7 * 0x200), index3S_CPS3_Stages, 0xa5 },
    { _T("Remy Stage (Faded) (8/20)"), 0x759080 + (7 * 0x200), 0x759080 + (8 * 0x200), index3S_CPS3_Stages, 0xa6 },
    { _T("Remy Stage (Faded) (9/20)"), 0x759080 + (8 * 0x200), 0x759080 + (9 * 0x200), index3S_CPS3_Stages, 0xa7 },
    { _T("Remy Stage (Faded) (10/20)"), 0x759080 + (9 * 0x200), 0x759080 + (10 * 0x200), index3S_CPS3_Stages, 0xa8 },
    { _T("Remy Stage (Faded) (11/20)"), 0x759080 + (10 * 0x200), 0x759080 + (11 * 0x200), index3S_CPS3_Stages, 0xa9 },
    { _T("Remy Stage (Faded) (12/20)"), 0x759080 + (11 * 0x200), 0x759080 + (12 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (13/20)"), 0x759080 + (12 * 0x200), 0x759080 + (13 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (14/20)"), 0x759080 + (13 * 0x200), 0x759080 + (14 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (15/20)"), 0x759080 + (14 * 0x200), 0x759080 + (15 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (16/20)"), 0x759080 + (15 * 0x200), 0x759080 + (16 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (17/20)"), 0x759080 + (16 * 0x200), 0x759080 + (17 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (18/20)"), 0x759080 + (17 * 0x200), 0x759080 + (18 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (19/20)"), 0x759080 + (18 * 0x200), 0x759080 + (19 * 0x200), index3S_CPS3_Stages, 0xaa },
    { _T("Remy Stage (Faded) (20/20)"), 0x759080 + (19 * 0x200), 0x75D080, index3S_CPS3_Stages, 0xab },
};

const sDescTreeNode SFIII3_A_STAGE_COLLECTION[] =
{
    { _T("Bonus"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_BONUS_PALETTES, ARRAYSIZE(SFIII3_A_BONUS_PALETTES) },

    { _T("Alex Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_ALEX_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_ALEX_PALETTES) },
    { _T("Alex Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_ALEX_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_ALEX_FADED_PALETTES) },

    { _T("Chun-Li Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_CHUNLI_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_CHUNLI_PALETTES) },
    { _T("Chun-Li Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_CHUNLI_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_CHUNLI_FADED_PALETTES) },

    { _T("Dudley Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_DUDLEY_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_DUDLEY_PALETTES) },
    { _T("Dudley Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_DUDLEY_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_DUDLEY_FADED_PALETTES) },

    { _T("Elena Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_ELENA_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_ELENA_PALETTES) },
    { _T("Elena Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_ELENA_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_ELENA_FADED_PALETTES) },

    { _T("Gill Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_GILL_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_GILL_PALETTES) },
    { _T("Gill Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_GILL_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_GILL_FADED_PALETTES) },

    { _T("Gouki Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_AKUMA_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_AKUMA_PALETTES) },
    { _T("Gouki Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_AKUMA_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_AKUMA_FADED_PALETTES) },

    { _T("Hugo Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_HUGO_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_HUGO_PALETTES) },
    { _T("Hugo Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_HUGO_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_HUGO_FADED_PALETTES) },

    { _T("Ibuki Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_IBUKI_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_IBUKI_PALETTES) },
    { _T("Ibuki Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_IBUKI_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_IBUKI_FADED_PALETTES) },

    { _T("Ken Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_KEN_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_KEN_PALETTES) },
    { _T("Ken Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_KEN_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_KEN_FADED_PALETTES) },

    { _T("Makoto Stage"),           DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_MAKOTO_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_MAKOTO_PALETTES) },
    { _T("Makoto Stage (Faded)"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_MAKOTO_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_MAKOTO_FADED_PALETTES) },

    { _T("Necro Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_NECRO_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_NECRO_PALETTES) },
    { _T("Necro Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_NECRO_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_NECRO_FADED_PALETTES) },

    { _T("Oro Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_ORO_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_ORO_PALETTES) },
    { _T("Oro Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_ORO_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_ORO_FADED_PALETTES) },

    //{ _T("Remy Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_REMY_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_REMY_PALETTES) },
    //{ _T("Remy Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_REMY_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_REMY_FADED_PALETTES) },

    { _T("Ryu Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_RYU_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_RYU_PALETTES) },
    { _T("Ryu Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_RYU_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_RYU_FADED_PALETTES) },

    { _T("Sean Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_SEAN_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_SEAN_PALETTES) },
    { _T("Sean Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_SEAN_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_SEAN_FADED_PALETTES) },

    { _T("Urien Stage"),            DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_URIEN_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_URIEN_PALETTES) },
    { _T("Urien Stage (Faded)"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_URIEN_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_URIEN_FADED_PALETTES) },

    { _T("Yang Stage"),           DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_YANG_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_YANG_PALETTES) },
    { _T("Yang Stage (Faded)"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_YANG_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_YANG_FADED_PALETTES) },

    { _T("Yun Stage"),           DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_YUN_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_YUN_PALETTES) },
    { _T("Yun Stage (Faded)"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGES_YUN_FADED_PALETTES, ARRAYSIZE(SFIII3_A_STAGES_YUN_FADED_PALETTES) },
};

const sGame_PaletteDataset SFIII3_A_GILL_PALETTES_LEFT[] =
{
    { _T("Gill glow 1"), 0x1C86A8, 0x1C8728, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 2"), 0x1C8728, 0x1C87a8, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 3"), 0x1C87A8, 0x1C8828, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 4"), 0x1C8828, 0x1C88a8, index3S_CPS3_Gill, 0x01 },

    { _T("Gill glow 5"), 0x1C88a8, 0x1C8928, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 6"), 0x1C8928, 0x1C89a8, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 7"), 0x1C89a8, 0x1C8a28, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 8"), 0x1C8a28, 0x1C8aa8, index3S_CPS3_Gill, 0x01 },

    { _T("Gill glow 9"),  0x1C8aa8, 0x1C8b28, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 10"), 0x1C8b28, 0x1C8ba8, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 11"), 0x1C8ba8, 0x1C8c28, index3S_CPS3_Gill, 0x01 },
    { _T("Gill glow 12"), 0x1C8c28, 0x1C8ca8, index3S_CPS3_Gill, 0x01 },
};

const sGame_PaletteDataset SFIII3_A_GILL_PALETTES_RIGHT[] =
{
    { _T("Gill glow 1"), 0x1C8ca8, 0x1C8d28, index3S_CPS3_Gill },
    { _T("Gill glow 2"), 0x1C8d28, 0x1C8da8, index3S_CPS3_Gill },
    { _T("Gill glow 3"), 0x1C8da8, 0x1C8e28, index3S_CPS3_Gill },
    { _T("Gill glow 4"), 0x1C8e28, 0x1C8ea8, index3S_CPS3_Gill },

    { _T("Gill glow 5"), 0x1C8ea8, 0x1C8f28, index3S_CPS3_Gill },
    { _T("Gill glow 6"), 0x1C8f28, 0x1C8fa8, index3S_CPS3_Gill },
    { _T("Gill glow 7"), 0x1C8fa8, 0x1C9028, index3S_CPS3_Gill },
    { _T("Gill glow 8"), 0x1C9028, 0x1C90a8, index3S_CPS3_Gill },

    { _T("Gill glow 9"), 0x1C90a8, 0x1C9128, index3S_CPS3_Gill },
    { _T("Gill glow 10"), 0x1C9128, 0x1C91a8, index3S_CPS3_Gill },
    { _T("Gill glow 11"), 0x1C91a8, 0x1C9228, index3S_CPS3_Gill },
    { _T("Gill glow 12"), 0x1C9228, 0x1C92a8, index3S_CPS3_Gill },

};

const sDescTreeNode SFIII3_A_GILL_COLLECTION[] =
{
    { _T("Left"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_GILL_PALETTES_LEFT, ARRAYSIZE(SFIII3_A_GILL_PALETTES_LEFT) },
    { _T("Right"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_GILL_PALETTES_RIGHT, ARRAYSIZE(SFIII3_A_GILL_PALETTES_RIGHT) },
};

const sDescTreeNode SFIII3_A_10_UNITS[] =
{
    { _T("Gill (glow)"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_GILL_COLLECTION, ARRAYSIZE(SFIII3_A_GILL_COLLECTION) },
};

const sDescTreeNode SFIII3_A_51_UNITS[] =
{
    { _T("Alex"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_ALEX_COLLECTION, ARRAYSIZE(SFIII3_A_ALEX_COLLECTION) },
    { _T("Ryu"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_RYU_COLLECTION, ARRAYSIZE(SFIII3_A_RYU_COLLECTION) },
    { _T("Yun"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_YUN_COLLECTION, ARRAYSIZE(SFIII3_A_YUN_COLLECTION) },
    { _T("Dudley"), DESC_NODETYPE_TREE, (void*)SFIII3_A_DUDLEY_COLLECTION, ARRAYSIZE(SFIII3_A_DUDLEY_COLLECTION) },
    { _T("Necro"),  DESC_NODETYPE_TREE, (void*)SFIII3_A_NECRO_COLLECTION, ARRAYSIZE(SFIII3_A_NECRO_COLLECTION) },
    { _T("Hugo"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_HUGO_COLLECTION, ARRAYSIZE(SFIII3_A_HUGO_COLLECTION) },
    { _T("Ibuki"),  DESC_NODETYPE_TREE, (void*)SFIII3_A_IBUKI_COLLECTION, ARRAYSIZE(SFIII3_A_IBUKI_COLLECTION) },
    { _T("Elena"),  DESC_NODETYPE_TREE, (void*)SFIII3_A_ELENA_COLLECTION, ARRAYSIZE(SFIII3_A_ELENA_COLLECTION) },
    { _T("Oro"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_ORO_COLLECTION, ARRAYSIZE(SFIII3_A_ORO_COLLECTION) },
    { _T("Yang"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_YANG_COLLECTION, ARRAYSIZE(SFIII3_A_YANG_COLLECTION) },
    { _T("Ken"),    DESC_NODETYPE_TREE, (void*)SFIII3_A_KEN_COLLECTION, ARRAYSIZE(SFIII3_A_KEN_COLLECTION) },
    { _T("Sean"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_SEAN_COLLECTION, ARRAYSIZE(SFIII3_A_SEAN_COLLECTION) },
    { _T("Urien"),  DESC_NODETYPE_TREE, (void*)SFIII3_A_URIEN_COLLECTION, ARRAYSIZE(SFIII3_A_URIEN_COLLECTION) },
    { _T("Gouki"),  DESC_NODETYPE_TREE, (void*)SFIII3_A_GOUKI_COLLECTION, ARRAYSIZE(SFIII3_A_GOUKI_COLLECTION) },
    { _T("Shin Gouki"), DESC_NODETYPE_TREE, (void*)SFIII3_A_SHINGOUKI_COLLECTION, ARRAYSIZE(SFIII3_A_SHINGOUKI_COLLECTION) },
    { _T("Chun-Li"), DESC_NODETYPE_TREE, (void*)SFIII3_A_CHUNLI_COLLECTION, ARRAYSIZE(SFIII3_A_CHUNLI_COLLECTION) },
    { _T("Makoto"), DESC_NODETYPE_TREE, (void*)SFIII3_A_MAKOTO_COLLECTION, ARRAYSIZE(SFIII3_A_MAKOTO_COLLECTION) },
    { _T("Q"),      DESC_NODETYPE_TREE, (void*)SFIII3_A_Q_COLLECTION, ARRAYSIZE(SFIII3_A_Q_COLLECTION) },
    { _T("Twelve"), DESC_NODETYPE_TREE, (void*)SFIII3_A_TWELVE_COLLECTION, ARRAYSIZE(SFIII3_A_TWELVE_COLLECTION) },
    { _T("Remy"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_REMY_COLLECTION, ARRAYSIZE(SFIII3_A_REMY_COLLECTION) },
    { _T("Bonus and Stage Palettes"), DESC_NODETYPE_TREE, (void*)SFIII3_A_STAGE_COLLECTION, ARRAYSIZE(SFIII3_A_STAGE_COLLECTION) },
    { _T("Gill"),   DESC_NODETYPE_TREE, (void*)SFIII3_A_GILL_51_COLLECTION, ARRAYSIZE(SFIII3_A_GILL_51_COLLECTION) },
};

constexpr auto SFIII3_A_10_NUMUNIT = ARRAYSIZE(SFIII3_A_10_UNITS);
#define SFIII3_A_10_EXTRALOC SFIII3_A_10_NUMUNIT

constexpr auto SFIII3_A_51_NUMUNIT = ARRAYSIZE(SFIII3_A_51_UNITS);
#define SFIII3_A_51_EXTRALOC SFIII3_A_51_NUMUNIT

const UINT8 SFIII3_A_UNITSORT[SFIII3_A_51_NUMUNIT + 1] = //Plus 1 for the extra palettes
{
    index3S_CPS3_Alex, 
    index3S_CPS3_ChunLi, 
    index3S_CPS3_Dudley, 
    index3S_CPS3_Elena, 
    index3S_CPS3_Gouki, 
    index3S_CPS3_Hugo, 
    index3S_CPS3_Ibuki, 
    index3S_CPS3_Ken, 
    index3S_CPS3_Makoto, 
    index3S_CPS3_Necro, 
    index3S_CPS3_Oro, 
    index3S_CPS3_Q, 
    index3S_CPS3_Remy, 
    index3S_CPS3_Ryu, 
    index3S_CPS3_Sean, 
    index3S_CPS3_ShinGouki, 
    index3S_CPS3_Twelve, 
    index3S_CPS3_Urien, 
    index3S_CPS3_Yang, 
    index3S_CPS3_Yun,
    index3S_CPS3_Gill - 1, // the stages being part of Bonus throws this off for now
    index3S_CPS3_Bonus,

    SFIII3_A_51_EXTRALOC //Extra palettes
};

const stExtraDef SFIII3_A_EXTRA[] = 
{
    //Start

    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};

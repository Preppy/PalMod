#pragma once

const sGame_PaletteDataset SFIII2_A_ALEX_LP_PALETTES[] =
{
    { _T("Alex LP"), 0x398700, 0x398780, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("Alex LP Hud"), 0x3cfe60, 0x3cfe80 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_MP_PALETTES[] =
{
    { _T("Alex MP"), 0x398780, 0x398800, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("Alex MP Hud"), 0x3cfe80, 0x3cfea0 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_HP_PALETTES[] =
{
    { _T("Alex HP"), 0x398800, 0x398880, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("Alex HP Hud"), 0x3cfea0, 0x3cfec0 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_LK_PALETTES[] =
{
    { _T("Alex LK"), 0x398880, 0x398900, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("Alex LK Hud"), 0x3cfec0, 0x3cfee0 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_MK_PALETTES[] =
{
    { _T("Alex MK"), 0x398900, 0x398980, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("Alex MK Hud"), 0x3cfee0, 0x3cff00 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_HK_PALETTES[] =
{
    { _T("Alex HK "), 0X398980, 0x398a00, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("Alex HK Hud"), 0x3cff00, 0x3cff20 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_EX_PALETTES[] =
{
    { _T("Alex EX"), 0x398a00, 0x398a80, index3S_CPS3_Alex, 0x00, &pairHandledInCode },
    { _T("Alex EX Hud"), 0x3cff20, 0x3cff40 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_Support_PALETTES[] =
{
    { _T("Alex EX 1"), 0x3d0c00, 0x3d0c80, index3S_CPS3_Alex },
    { _T("Alex EX 2"), 0x3df580, 0x3df600, index3S_CPS3_Alex },

    { _T("Alex SA1"), 0x3d1780, 0x3d1800, index3S_CPS3_Alex },
    { _T("Alex SA2"), 0x3d1800, 0x3d1880, index3S_CPS3_Alex },
    { _T("Alex SA3"), 0x3d1880, 0x3d1900, index3S_CPS3_Alex },
    { _T("Alex SA4"), 0x3d1900, 0x3d1980, index3S_CPS3_Alex },
    { _T("Alex SA5"), 0x3d1980, 0x3d1a00, index3S_CPS3_Alex },
    { _T("Alex SA6"), 0x3d1a00, 0x3d1a80, index3S_CPS3_Alex },
    { _T("Alex SA7"), 0x3d1a80, 0x3d1b00, index3S_CPS3_Alex },
    { _T("Alex SA8"), 0x3d1b00, 0x3d1b80, index3S_CPS3_Alex },

    { _T("Alex Iced Effects"), 0x39c280, 0x39c300, index3S_CPS3_Alex, 0x00 },
    { _T("Alex Burned Effects"), 0x39ca80, 0x39cb00, index3S_CPS3_Alex, 0x00 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_EXTRA_PALETTES[] =
{
    // Warning: this is a paired palette, so if you change this please ensure UpdatePalImg handles that update correctly
    { _T("Alex Flash Chop (shared)"), 0x39b900, 0x39b980, index3S_CPS3_Alex, 0x02 },
};

const sGame_PaletteDataset SFIII2_A_RYU_LP_PALETTES[] =
{
    { _T("Ryu LP"), 0x398a80, 0x398b00, index3S_CPS3_Ryu },
    { _T("Ryu LP Hud"), 0x3cff40, 0x3cff60 },
};

const sGame_PaletteDataset SFIII2_A_RYU_MP_PALETTES[] =
{
    { _T("Ryu MP"), 0x398b00, 0x398b80, index3S_CPS3_Ryu },
    { _T("Ryu MP Hud"), 0x3cff60, 0x3cff80 },
};

const sGame_PaletteDataset SFIII2_A_RYU_HP_PALETTES[] =
{
    { _T("Ryu HP"), 0x398b80, 0x398c00, index3S_CPS3_Ryu },
    { _T("Ryu HP Hud"), 0x3cff80, 0x3cffa0 },
};

const sGame_PaletteDataset SFIII2_A_RYU_LK_PALETTES[] =
{
    { _T("Ryu LK"), 0x398c00, 0x398c80, index3S_CPS3_Ryu },
    { _T("Ryu LK Hud"), 0x3cffa0, 0x3cffc0 },
};

const sGame_PaletteDataset SFIII2_A_RYU_MK_PALETTES[] =
{
    { _T("Ryu MK"), 0x398c80, 0x398d00, index3S_CPS3_Ryu },
    { _T("Ryu MK Hud"), 0x3cffc0, 0x3cffe0 },
};

const sGame_PaletteDataset SFIII2_A_RYU_HK_PALETTES[] =
{
    { _T("Ryu HK"), 0x398d00, 0x398d80, index3S_CPS3_Ryu },
    { _T("Ryu HK Hud"), 0x3cffe0, 0x3d0000 },
};

const sGame_PaletteDataset SFIII2_A_RYU_EX_PALETTES[] =
{
    { _T("Ryu EX"), 0x398d80, 0x398e00, index3S_CPS3_Ryu },
    { _T("Ryu EX Hud"), 0x3d0000, 0x3d0020 },
};

const sGame_PaletteDataset SFIII2_A_RYU_Support_PALETTES[] =
{
    { _T("Ryu EX 1"), 0x3d0c80, 0x3d0d00, index3S_CPS3_Ryu },
    { _T("Ryu EX 2"), 0x3df600, 0x3df680, index3S_CPS3_Ryu },
    { _T("Ryu SA1"), 0x3d1b80, 0x3d1c00, index3S_CPS3_Ryu },
    { _T("Ryu SA2"), 0x3d1c00, 0x3d1c80, index3S_CPS3_Ryu },
    { _T("Ryu SA3"), 0x3d1c80, 0x3d1d00, index3S_CPS3_Ryu },
    { _T("Ryu SA4"), 0x3d1d00, 0x3d1d80, index3S_CPS3_Ryu },
    { _T("Ryu SA5"), 0x3d1d80, 0x3d1e00, index3S_CPS3_Ryu },
    { _T("Ryu SA6"), 0x3d1e00, 0x3d1e80, index3S_CPS3_Ryu },
    { _T("Ryu SA7"), 0x3d1e80, 0x3d1f00, index3S_CPS3_Ryu },
    { _T("Ryu SA8"), 0x3d1f00, 0x3d1f80, index3S_CPS3_Ryu },
    { _T("Ryu Iced Effects"), 0x39c300, 0x39c380, index3S_CPS3_Ryu },
    { _T("Ryu Burned Effects"), 0x39cb00, 0x39cb80, index3S_CPS3_Ryu },
};

const sGame_PaletteDataset SFIII2_A_RYU_EXTRA_PALETTES[] =
{
    { _T("Hadouken"), 0x39b980, 0x39ba00, index3S_CPS3_Ryu, 0x2 },
    { _T("Hadouken Impact"), 0x39ba00, 0x39ba80, index3S_CPS3_Ryu, 0x3 },
    { _T("Shakunetsu (EX Fireball)"), 0x39ba80, 0x39bb00, index3S_CPS3_Ryu, 0x4 },
};

const sGame_PaletteDataset SFIII2_A_YUN_LP_PALETTES[] =
{
    { _T("Yun LP"), 0x398e00, 0x398e80, index3S_CPS3_Yun },
    { _T("Yun LP Hud"), 0x3d0020, 0x3d0040 },
};

const sGame_PaletteDataset SFIII2_A_YUN_MP_PALETTES[] =
{
    { _T("Yun MP"), 0x398e80, 0x398f00, index3S_CPS3_Yun },
    { _T("Yun MP Hud"), 0x3d0040, 0x3d0060 },
};

const sGame_PaletteDataset SFIII2_A_YUN_HP_PALETTES[] =
{
    { _T("Yun HP"), 0x398f00, 0x398f80, index3S_CPS3_Yun },
    { _T("Yun HP Hud"), 0x3d0060, 0x3d0080 },
};

const sGame_PaletteDataset SFIII2_A_YUN_LK_PALETTES[] =
{
    { _T("Yun LK"), 0x398f80, 0x399000, index3S_CPS3_Yun },
    { _T("Yun LK Hud"), 0x3d0080, 0x3d00a0 },
};

const sGame_PaletteDataset SFIII2_A_YUN_MK_PALETTES[] =
{
    { _T("Yun MK"), 0x399000, 0x399080, index3S_CPS3_Yun },
    { _T("Yun MK Hud"), 0x3d00a0, 0x3d00c0 },
};

const sGame_PaletteDataset SFIII2_A_YUN_HK_PALETTES[] =
{
    { _T("Yun HK"), 0x399080, 0x399100, index3S_CPS3_Yun },
    { _T("Yun HK Hud"), 0x3d00c0, 0x3d00e0 },
};

const sGame_PaletteDataset SFIII2_A_YUN_EX_PALETTES[] =
{
    { _T("Yun EX"), 0x399100, 0x399180, index3S_CPS3_Yun },
    { _T("Yun EX Hud"), 0x3d00e0, 0x3d0100 },
};

const sGame_PaletteDataset SFIII2_A_YUN_Support_PALETTES[] =
{
    { _T("Yun Iced Effects"), 0x39c380, 0x39c400, index3S_CPS3_Yun },
    { _T("Yun Burned Effects"), 0x39cb80, 0x39cc00, index3S_CPS3_Yun },
    { _T("Yun SA1"), 0x3d1f80, 0x3d2000, index3S_CPS3_Yun },
    { _T("Yun SA2"), 0x3d2000, 0x3d2080, index3S_CPS3_Yun },
    { _T("Yun SA3"), 0x3d2080, 0x3d2100, index3S_CPS3_Yun },
    { _T("Yun SA4"), 0x3d2100, 0x3d2180, index3S_CPS3_Yun },
    { _T("Yun SA5"), 0x3d2180, 0x3d2200, index3S_CPS3_Yun },
    { _T("Yun SA6"), 0x3d2200, 0x3d2280, index3S_CPS3_Yun },
    { _T("Yun SA7"), 0x3d2280, 0x3d2300, index3S_CPS3_Yun },
    { _T("Yun SA8"), 0x3d2300, 0x3d2380, index3S_CPS3_Yun },

    { _T("Yun EX 1"), 0x3d0d00, 0x3d0d80, index3S_CPS3_Yun },
    { _T("Yun EX 2"), 0x3df680, 0x3df700, index3S_CPS3_Yun },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_LP_PALETTES[] =
{
    { _T("Dudley LP"), 0x399180, 0x399200, index3S_CPS3_Dudley },
    { _T("Dudley LP Hud"), 0x3d0100, 0x3d0120 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_MP_PALETTES[] =
{
    { _T("Dudley MP"), 0x399200, 0x399280, index3S_CPS3_Dudley },
    { _T("Dudley MP Hud"), 0x3d0120, 0x3d0140 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_HP_PALETTES[] =
{
    { _T("Dudley HP"), 0x399280, 0x399300, index3S_CPS3_Dudley },
    { _T("Dudley HP Hud"), 0x3d0140, 0x3d0160 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_LK_PALETTES[] =
{
    { _T("Dudley LK"), 0x399300, 0x399380, index3S_CPS3_Dudley },
    { _T("Dudley LK Hud"), 0x3d0160, 0x3d0180 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_MK_PALETTES[] =
{
    { _T("Dudley MK"), 0x399380, 0x399400, index3S_CPS3_Dudley },
    { _T("Dudley MK Hud"), 0x3d0180, 0x3d01a0 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_HK_PALETTES[] =
{
    { _T("Dudley HK"), 0x399400, 0x399480, index3S_CPS3_Dudley },
    { _T("Dudley HK Hud"), 0x3d01a0, 0x3d01c0 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_EX_PALETTES[] =
{
    { _T("Dudley EX"), 0x399480, 0x399500, index3S_CPS3_Dudley },
    { _T("Dudley EX Hud"), 0x3d01c0, 0x3d01e0 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_Support_PALETTES[] =
{
    { _T("Dudley EX 1"), 0x3d0d80, 0x3d0e00, index3S_CPS3_Dudley },
    { _T("Dudley EX 2"), 0x3df700, 0x3df780, index3S_CPS3_Dudley },

    { _T("Dudley SA1"), 0x3d2380, 0x3d2400, index3S_CPS3_Dudley },
    { _T("Dudley SA2"), 0x3d2400, 0x3d2480, index3S_CPS3_Dudley },
    { _T("Dudley SA3"), 0x3d2480, 0x3d2500, index3S_CPS3_Dudley },
    { _T("Dudley SA4"), 0x3d2500, 0x3d2580, index3S_CPS3_Dudley },
    { _T("Dudley SA5"), 0x3d2580, 0x3d2600, index3S_CPS3_Dudley },
    { _T("Dudley SA6"), 0x3d2600, 0x3d2680, index3S_CPS3_Dudley },
    { _T("Dudley SA7"), 0x3d2680, 0x3d2700, index3S_CPS3_Dudley },
    { _T("Dudley SA8"), 0x3d2700, 0x3d2780, index3S_CPS3_Dudley },

    { _T("Dudley Iced Effects"), 0x39c400, 0x39c480, index3S_CPS3_Dudley },
    { _T("Dudley Burned Effects"), 0x39cc00, 0x39cc80, index3S_CPS3_Dudley },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_EXTRA_PALETTES[] =
{
    { _T("Dudley Intro Car"), 0x39bb00, 0x39bb80, index3S_CPS3_Dudley, 0x03 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_LP_PALETTES[] =
{
    { _T("Necro LP"), 0x399500, 0x399580, index3S_CPS3_Necro },
    { _T("Necro LP Hud"), 0x3d01e0, 0x3d0200 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_MP_PALETTES[] =
{
    { _T("Necro MP"), 0x399580, 0x399600, index3S_CPS3_Necro },
    { _T("Necro MP Hud"), 0x3d0200, 0x3d0220 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_HP_PALETTES[] =
{
    { _T("Necro HP"), 0x399600, 0x399680, index3S_CPS3_Necro },
    { _T("Necro HP Hud"), 0x3d0220, 0x3d0240 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_LK_PALETTES[] =
{
    { _T("Necro LK"), 0x399680, 0x399700, index3S_CPS3_Necro },
    { _T("Necro LK Hud"), 0x3d0240, 0x3d0260 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_MK_PALETTES[] =
{
    { _T("Necro MK"), 0x399700, 0x399780, index3S_CPS3_Necro },
    { _T("Necro MK Hud"), 0x3d0260, 0x3d0280 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_HK_PALETTES[] =
{
    { _T("Necro HK"), 0x399780, 0x399800, index3S_CPS3_Necro },
    { _T("Necro HK Hud"), 0x3d0280, 0x3d02a0 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_EX_PALETTES[] =
{
    { _T("Necro EX"), 0x399800, 0x399880, index3S_CPS3_Necro },
    { _T("Necro EX Hud"), 0x3d02a0, 0x3d02c0 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_Support_PALETTES[] =
{
    { _T("Necro EX 1"), 0x3d0e00, 0x3d0e80, index3S_CPS3_Necro },
    { _T("Necro EX 2"), 0x3df780, 0x3df800, index3S_CPS3_Necro },

    { _T("Necro SA1"), 0x3d2780, 0x3d2800, index3S_CPS3_Necro },
    { _T("Necro SA2"), 0x3d2800, 0x3d2880, index3S_CPS3_Necro },
    { _T("Necro SA3"), 0x3d2880, 0x3d2900, index3S_CPS3_Necro },
    { _T("Necro SA4"), 0x3d2900, 0x3d2980, index3S_CPS3_Necro },
    { _T("Necro SA5"), 0x3d2980, 0x3d2a00, index3S_CPS3_Necro },
    { _T("Necro SA6"), 0x3d2a00, 0x3d2a80, index3S_CPS3_Necro },
    { _T("Necro SA7"), 0x3d2a80, 0x3d2b00, index3S_CPS3_Necro },
    { _T("Necro SA8"), 0x3d2b00, 0x3d2b80, index3S_CPS3_Necro },

    { _T("Necro Iced Effects"), 0x39c480, 0x39c500 },
    { _T("Necro Burned Effects"), 0x39cc80, 0x39cd00 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_EXTRA_PALETTES[] =
{
    { _T("Necro LP SA1 Pulse"), 0x39d880, 0x39d900 },
    { _T("Necro LP SA1 Trails"), 0x39d900, 0x39d980 },
    { _T("Necro LP Effie"), 0x39d980, 0x39da00, index3S_CPS3_Necro, 0x2 },
    { _T("Necro MP SA1 Pulse"), 0x39da00, 0x39da80 },
    { _T("Necro MP SA1 Trails"), 0x39da80, 0x39db00 },
    { _T("Necro MP Effie"), 0x39db00, 0x39db80, index3S_CPS3_Necro, 0x2 },
    { _T("Necro HP SA1 Pulse"), 0x39db80, 0x39dc00 },
    { _T("Necro HP SA1 Trails"), 0x39dc00, 0x39dc80 },
    { _T("Necro HP Effie"), 0x39dc80, 0x39dd00, index3S_CPS3_Necro, 0x2 },
    { _T("Necro LK SA1 Pulse"), 0x39dd00, 0x39dd80 },
    { _T("Necro LK SA1 Trails"), 0x39dd80, 0x39de00 },
    { _T("Necro LK Effie"), 0x39de00, 0x39de80, index3S_CPS3_Necro, 0x2 },
    { _T("Necro MK SA1 Pulse"), 0x39de80, 0x39df00 },
    { _T("Necro MK SA1 Trails"), 0x39df00, 0x39df80 },
    { _T("Necro MK Effie"), 0x39df80, 0x39e000, index3S_CPS3_Necro, 0x2 },
    { _T("Necro HK SA1 Pulse"), 0x39e000, 0x39e080 },
    { _T("Necro HK SA1 Trails"), 0x39e080, 0x39e100 },
    { _T("Necro HK Effie"), 0x39e100, 0x39e180, index3S_CPS3_Necro, 0x2 },
    { _T("Necro EX SA1 Pulse"), 0x39e180, 0x39e200 },
    { _T("Necro EX SA1 Trails"), 0x39e200, 0x39e280 },
    { _T("Necro EX Effie"), 0x39e280, 0x39e300, index3S_CPS3_Necro, 0x2 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_LP_PALETTES[] =
{
    { _T("Hugo LP"), 0x399880, 0x399900, index3S_CPS3_Hugo },
    { _T("Hugo LP Hud"), 0x3d02c0, 0x3d02e0 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_MP_PALETTES[] =
{
    { _T("Hugo MP"), 0x399900, 0x399980, index3S_CPS3_Hugo },
    { _T("Hugo MP Hud"), 0x3d02e0, 0x3d0300 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_HP_PALETTES[] =
{
    { _T("Hugo HP"), 0x399980, 0x399a00, index3S_CPS3_Hugo },
    { _T("Hugo HP Hud"), 0x3d0300, 0x3d0320 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_LK_PALETTES[] =
{
    { _T("Hugo LK"), 0x399a00, 0x399a80, index3S_CPS3_Hugo },
    { _T("Hugo LK Hud"), 0x3d0320, 0x3d0340 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_MK_PALETTES[] =
{
    { _T("Hugo MK"), 0x399a80, 0x399b00, index3S_CPS3_Hugo },
    { _T("Hugo MK Hud"), 0x3d0340, 0x3d0360 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_HK_PALETTES[] =
{
    { _T("Hugo HK"), 0x399b00, 0x399b80, index3S_CPS3_Hugo },
    { _T("Hugo HK Hud"), 0x3d0360, 0x3d0380 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_EX_PALETTES[] =
{
    { _T("Hugo EX"), 0x399b80, 0x399c00, index3S_CPS3_Hugo },
    { _T("Hugo EX Hud"), 0x3d0380, 0x3d03a0 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_Support_PALETTES[] =
{
    { _T("Hugo EX 1"), 0x3d0e80, 0x3d0f00, index3S_CPS3_Hugo },
    { _T("Hugo EX 2"), 0x3df800, 0x3df880, index3S_CPS3_Hugo },

    { _T("Hugo SA1"), 0x3d2b80, 0x3d2c00, index3S_CPS3_Hugo },
    { _T("Hugo SA2"), 0x3d2c00, 0x3d2c80, index3S_CPS3_Hugo },
    { _T("Hugo SA3"), 0x3d2c80, 0x3d2d00, index3S_CPS3_Hugo },
    { _T("Hugo SA4"), 0x3d2d00, 0x3d2d80, index3S_CPS3_Hugo },
    { _T("Hugo SA5"), 0x3d2d80, 0x3d2e00, index3S_CPS3_Hugo },
    { _T("Hugo SA6"), 0x3d2e00, 0x3d2e80, index3S_CPS3_Hugo },
    { _T("Hugo SA7"), 0x3d2e80, 0x3d2f00, index3S_CPS3_Hugo },
    { _T("Hugo SA8"), 0x3d2f00, 0x3d2f80, index3S_CPS3_Hugo },

    { _T("Hugo Iced Effects"), 0x39c500, 0x39c580, index3S_CPS3_Hugo },
    { _T("Hugo Burned Effects"), 0x39cd00, 0x39cd80, index3S_CPS3_Hugo },

};

const sGame_PaletteDataset SFIII2_A_HUGO_EXTRA_PALETTES[] =
{
    //Hugo
    { _T("Poison P1"), 0x3dbe00, 0x3dbe80, index3S_CPS3_Hugo, 0x02 },
    { _T("Poison P2"), 0x3dbe80, 0x3dbf00, index3S_CPS3_Hugo, 0x02 },
    { _T("Poison EX"), 0x3dbf00, 0x3dbf80, index3S_CPS3_Hugo, 0x02 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_LP_PALETTES[] =
{
    { _T("Ibuki LP"), 0x399c00, 0x399c80, index3S_CPS3_Ibuki },
    { _T("Ibuki LP Hud"), 0x3d03a0, 0x3d03c0 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_MP_PALETTES[] =
{
    { _T("Ibuki MP"), 0x399c80, 0x399d00, index3S_CPS3_Ibuki },
    { _T("Ibuki MP Hud"), 0x3d03c0, 0x3d03e0 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_HP_PALETTES[] =
{
    { _T("Ibuki HP"), 0x399d00, 0x399d80, index3S_CPS3_Ibuki },
    { _T("Ibuki HP Hud"), 0x3d03e0, 0x3d0400 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_LK_PALETTES[] =
{
    { _T("Ibuki LK"), 0x399d80, 0x399e00, index3S_CPS3_Ibuki },
    { _T("Ibuki LK Hud"), 0x3d0400, 0x3d0420 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_MK_PALETTES[] =
{
    { _T("Ibuki MK"), 0x399e00, 0x399e80, index3S_CPS3_Ibuki },
    { _T("Ibuki MK Hud"), 0x3d0420, 0x3d0440 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_HK_PALETTES[] =
{
    { _T("Ibuki HK"), 0x399e80, 0x399f00, index3S_CPS3_Ibuki },
    { _T("Ibuki HK Hud"), 0x3d0440, 0x3d0460 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_EX_PALETTES[] =
{
    { _T("Ibuki EX"), 0x399f00, 0x399f80, index3S_CPS3_Ibuki },
    { _T("Ibuki EX Hud"), 0x3d0460, 0x3d0480 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_Support_PALETTES[] =
{
    { _T("Ibuki EX 1"), 0x3d0f00, 0x3d0f80, index3S_CPS3_Ibuki },
    { _T("Ibuki EX 2"), 0x3df880, 0x3df900, index3S_CPS3_Ibuki },

    { _T("Ibuki SA1"), 0x3d2f80, 0x3d3000, index3S_CPS3_Ibuki },
    { _T("Ibuki SA2"), 0x3d3000, 0x3d3080, index3S_CPS3_Ibuki },
    { _T("Ibuki SA3"), 0x3d3080, 0x3d3100, index3S_CPS3_Ibuki },
    { _T("Ibuki SA4"), 0x3d3100, 0x3d3180, index3S_CPS3_Ibuki },
    { _T("Ibuki SA5"), 0x3d3180, 0x3d3200, index3S_CPS3_Ibuki },
    { _T("Ibuki SA6"), 0x3d3200, 0x3d3280, index3S_CPS3_Ibuki },
    { _T("Ibuki SA7"), 0x3d3280, 0x3d3300, index3S_CPS3_Ibuki },
    { _T("Ibuki SA8"), 0x3d3300, 0x3d3380, index3S_CPS3_Ibuki },

    { _T("Ibuki Iced Effects"), 0x39c580, 0x39c600, index3S_CPS3_Ibuki },
    { _T("Ibuki Burned Effects"), 0x39cd80, 0x39ce00, index3S_CPS3_Ibuki },

};

const sGame_PaletteDataset SFIII2_A_IBUKI_EXTRA_PALETTES[] =
{
    { _T("Ibuki LP Extras"), 0x39d180, 0x39d200, index3S_CPS3_Ibuki, 0x02 },
    { _T("Ibuki LP Extras 2"), 0x39d200, 0x39d280 },
    { _T("Ibuki MP Extras"), 0x39d280, 0x39d300, index3S_CPS3_Ibuki, 0x02 },
    { _T("Ibuki MP Extras 2"), 0x39d300, 0x39d380 },
    { _T("Ibuki HP Extras  "), 0x39d380, 0x39d400, index3S_CPS3_Ibuki, 0x02 },
    { _T("Ibuki HP Extras 2"), 0x39d400, 0x39d480 },
    { _T("Ibuki LK Extras"), 0x39d480, 0x39d500, index3S_CPS3_Ibuki, 0x02 },
    { _T("Ibuki LK Extras 2"), 0x39d500, 0x39d580 },
    { _T("Ibuki MK Extras"), 0x39d580, 0x39d600, index3S_CPS3_Ibuki, 0x02 },
    { _T("Ibuki MK Extras 2"), 0x39d600, 0x39d680 },
    { _T("Ibuki HK Extras "), 0x39d680, 0x39d700, index3S_CPS3_Ibuki, 0x02 },
    { _T("Ibuki HK Extras 2"), 0x39d700, 0x39d780 },
    { _T("Ibuki EX Extras "), 0x39d780, 0x39d800, index3S_CPS3_Ibuki, 0x02 },
    { _T("Ibuki EX Extras 2"), 0x39d800, 0x39d880 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_LP_PALETTES[] =
{
    { _T("Elena LP"), 0x399f80, 0x39a000, index3S_CPS3_Elena },
    { _T("Elena LP Hud"), 0x3d0480, 0x3d04a0 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_MP_PALETTES[] =
{
    { _T("Elena MP"), 0x39a000, 0x39a080, index3S_CPS3_Elena },
    { _T("Elena MP Hud"), 0x3d04a0, 0x3d04c0 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_HP_PALETTES[] =
{
    { _T("Elena HP"), 0x39a080, 0x39a100, index3S_CPS3_Elena },
    { _T("Elena HP Hud"), 0x3d04c0, 0x3d04e0 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_LK_PALETTES[] =
{
    { _T("Elena LK"), 0x39a100, 0x39a180, index3S_CPS3_Elena },
    { _T("Elena LK Hud"), 0x3d04e0, 0x3d0500 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_MK_PALETTES[] =
{
    { _T("Elena MK"), 0x39a180, 0x39a200, index3S_CPS3_Elena },
    { _T("Elena MK Hud"), 0x3d0500, 0x3d0520 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_HK_PALETTES[] =
{
    { _T("Elena HK"), 0x39a200, 0x39a280, index3S_CPS3_Elena },
    { _T("Elena HK Hud"), 0x3d0520, 0x3d0540 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_EX_PALETTES[] =
{
    { _T("Elena EX"), 0x39a280, 0x39a300, index3S_CPS3_Elena },
    { _T("Elena EX Hud"), 0x3d0540, 0x3d0560 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_EXTRA_PALETTES[] =
{
    { _T("Elena Dust"), 0x39bb80, 0x39bc00, index3S_CPS3_Elena, 0x02 },
    { _T("Elena Music Notes"), 0x39e300, 0x39e380, index3S_CPS3_Elena, 0x03 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_Support_PALETTES[] =
{
    { _T("Elena EX 1"), 0x3d0f80, 0x3d1000, index3S_CPS3_Elena },
    { _T("Elena EX 2"), 0x3df900, 0x3df980, index3S_CPS3_Elena },

    { _T("Elena SA1"), 0x3d3380, 0x3d3400, index3S_CPS3_Elena },
    { _T("Elena SA2"), 0x3d3400, 0x3d3480, index3S_CPS3_Elena },
    { _T("Elena SA3"), 0x3d3480, 0x3d3500, index3S_CPS3_Elena },
    { _T("Elena SA4"), 0x3d3500, 0x3d3580, index3S_CPS3_Elena },
    { _T("Elena SA5"), 0x3d3580, 0x3d3600, index3S_CPS3_Elena },
    { _T("Elena SA6"), 0x3d3600, 0x3d3680, index3S_CPS3_Elena},
    { _T("Elena SA7"), 0x3d3680, 0x3d3700, index3S_CPS3_Elena },
    { _T("Elena SA8"), 0x3d3700, 0x3d3780, index3S_CPS3_Elena },

    { _T("Elena Iced Effects"), 0x39c600, 0x39c680, index3S_CPS3_Elena },
    { _T("Elena Burned Effects"), 0x39ce00, 0x39ce80, index3S_CPS3_Elena },
};

const sGame_PaletteDataset SFIII2_A_ORO_LP_PALETTES[] =
{
    { _T("Oro LP"), 0x39a300, 0x39a380, index3S_CPS3_Oro },
    { _T("Oro LP Hud"), 0x3d0560, 0x3d0580 },
};

const sGame_PaletteDataset SFIII2_A_ORO_MP_PALETTES[] =
{
    { _T("Oro MP"), 0x39a380, 0x39a400, index3S_CPS3_Oro },
    { _T("Oro MP Hud"), 0x3d0580, 0x3d05a0 },
};

const sGame_PaletteDataset SFIII2_A_ORO_HP_PALETTES[] =
{
    { _T("Oro HP"), 0x39a400, 0x39a480, index3S_CPS3_Oro },
    { _T("Oro HP Hud"), 0x3d05a0, 0x3d05c0 },
};

const sGame_PaletteDataset SFIII2_A_ORO_LK_PALETTES[] =
{
    { _T("Oro LK"), 0x39a480, 0x39a500, index3S_CPS3_Oro },
    { _T("Oro LK Hud"), 0x3d05c0, 0x3d05e0 },
};

const sGame_PaletteDataset SFIII2_A_ORO_MK_PALETTES[] =
{
    { _T("Oro MK"), 0x39a500, 0x39a580, index3S_CPS3_Oro },
    { _T("Oro MK Hud"), 0x3d05e0, 0x3d0600 },
};

const sGame_PaletteDataset SFIII2_A_ORO_HK_PALETTES[] =
{
    { _T("Oro HK"), 0x39a580, 0x39a600, index3S_CPS3_Oro },
    { _T("Oro HK Hud"), 0x3d0600, 0x3d0620 },
};

const sGame_PaletteDataset SFIII2_A_ORO_EX_PALETTES[] =
{
    { _T("Oro EX"), 0x39a600, 0x39a680, index3S_CPS3_Oro },
    { _T("Oro EX Hud"), 0x3d0620, 0x3d0640 },
};

const sGame_PaletteDataset SFIII2_A_ORO_Support_PALETTES[] =
{
    { _T("Oro EX 1"), 0x3d1000, 0x3d1080, index3S_CPS3_Oro },
    { _T("Oro EX 2"), 0x3df980, 0x3dfa00, index3S_CPS3_Oro },

    { _T("Oro SA1"), 0x3d3780, 0x3d3800, index3S_CPS3_Oro },
    { _T("Oro SA2"), 0x3d3800, 0x3d3880, index3S_CPS3_Oro },
    { _T("Oro SA3"), 0x3d3880, 0x3d3900, index3S_CPS3_Oro },
    { _T("Oro SA4"), 0x3d3900, 0x3d3980, index3S_CPS3_Oro },
    { _T("Oro SA5"), 0x3d3980, 0x3d3a00, index3S_CPS3_Oro },
    { _T("Oro SA6"), 0x3d3a00, 0x3d3a80, index3S_CPS3_Oro },
    { _T("Oro SA7"), 0x3d3a80, 0x3d3b00, index3S_CPS3_Oro },
    { _T("Oro SA8"), 0x3d3b00, 0x3d3b80, index3S_CPS3_Oro },

    { _T("Oro Iced Effects"), 0x39c680, 0x39c700, index3S_CPS3_Oro },
    { _T("Oro Burned Effects"), 0x39ce80, 0x39cf00, index3S_CPS3_Oro },
};

const sGame_PaletteDataset SFIII2_A_ORO_EXTRA_PALETTES[] =
{
    { _T("Fireball + Green Yagyou Dama (SA2)"), 0x39bc00, 0x39bc80 },
};

const sGame_PaletteDataset SFIII2_A_YANG_LP_PALETTES[] =
{
    { _T("Yang LP"), 0x39a680, 0x39a700, index3S_CPS3_Yang },
    { _T("Yang LP Hud"), 0x3d0640, 0x3d0660 },
};

const sGame_PaletteDataset SFIII2_A_YANG_MP_PALETTES[] =
{
    { _T("Yang MP"), 0x39a700, 0x39a780, index3S_CPS3_Yang },
    { _T("Yang MP Hud"), 0x3d0660, 0x3d0680 },
};

const sGame_PaletteDataset SFIII2_A_YANG_HP_PALETTES[] =
{
    { _T("Yang HP"), 0x39a780, 0x39a800, index3S_CPS3_Yang },
    { _T("Yang HP Hud"), 0x3d0680, 0x3d06a0 },
};

const sGame_PaletteDataset SFIII2_A_YANG_LK_PALETTES[] =
{
    { _T("Yang LK"), 0x39a800, 0x39a880, index3S_CPS3_Yang },
    { _T("Yang LK Hud"), 0x3d06a0, 0x3d06c0 },
};

const sGame_PaletteDataset SFIII2_A_YANG_MK_PALETTES[] =
{
    { _T("Yang MK"), 0x39a880, 0x39a900, index3S_CPS3_Yang },
    { _T("Yang MK Hud"), 0x3d06c0, 0x3d06e0 },
};

const sGame_PaletteDataset SFIII2_A_YANG_HK_PALETTES[] =
{
    { _T("Yang HK"), 0x39a900, 0x39a980, index3S_CPS3_Yang },
    { _T("Yang HK Hud"), 0x3d06e0, 0x3d0700 },
};

const sGame_PaletteDataset SFIII2_A_YANG_EX_PALETTES[] =
{
    { _T("Yang EX"), 0x39a980, 0x39aa00, index3S_CPS3_Yang },
    { _T("Yang EX Hud"), 0x3d0700, 0x3d0720 },
};

const sGame_PaletteDataset SFIII2_A_YANG_Support_PALETTES[] =
{
    { _T("Yang EX 1"), 0x3d1080, 0x3d1100, index3S_CPS3_Yang },
    { _T("Yang EX 2"), 0x3dfa00, 0x3dfa80, index3S_CPS3_Yang },

    { _T("Yang SA1"), 0x3d3b80, 0x3d3c00, index3S_CPS3_Yang },
    { _T("Yang SA2"), 0x3d3c00, 0x3d3c80, index3S_CPS3_Yang },
    { _T("Yang SA3"), 0x3d3c80, 0x3d3d00, index3S_CPS3_Yang },
    { _T("Yang SA4"), 0x3d3d00, 0x3d3d80, index3S_CPS3_Yang },
    { _T("Yang SA5"), 0x3d3d80, 0x3d3e00, index3S_CPS3_Yang },
    { _T("Yang SA6"), 0x3d3e00, 0x3d3e80, index3S_CPS3_Yang },
    { _T("Yang SA7"), 0x3d3e80, 0x3d3f00, index3S_CPS3_Yang },
    { _T("Yang SA8"), 0x3d3f00, 0x3d3f80, index3S_CPS3_Yang },

    { _T("Yang Iced Effects"), 0x39c700, 0x39c780, index3S_CPS3_Yang },
    { _T("Yang Burned Effects"), 0x39cf00, 0x39cf80, index3S_CPS3_Yang },
};

const sGame_PaletteDataset SFIII2_A_KEN_LP_PALETTES[] =
{
    { _T("Ken LP"), 0x39aa00, 0x39aa80, index3S_CPS3_Ken },
    { _T("Ken LP Hud"), 0x3d0720, 0x3d0740 },
};

const sGame_PaletteDataset SFIII2_A_KEN_MP_PALETTES[] =
{
    { _T("Ken MP"), 0x39aa80, 0x39ab00, index3S_CPS3_Ken },
    { _T("Ken MP Hud"), 0x3d0740, 0x3d0760 },
};

const sGame_PaletteDataset SFIII2_A_KEN_HP_PALETTES[] =
{
    { _T("Ken HP"), 0x39ab00, 0x39ab80, index3S_CPS3_Ken },
    { _T("Ken HP Hud"), 0x3d0760, 0x3d0780 },
};

const sGame_PaletteDataset SFIII2_A_KEN_LK_PALETTES[] =
{
    { _T("Ken LK"), 0x39ab80, 0x39ac00, index3S_CPS3_Ken },
    { _T("Ken LK Hud"), 0x3d0780, 0x3d07a0 },
};

const sGame_PaletteDataset SFIII2_A_KEN_MK_PALETTES[] =
{
    { _T("Ken MK"), 0x39ac00, 0x39ac80, index3S_CPS3_Ken },
    { _T("Ken MK Hud"), 0x3d07a0, 0x3d07c0 },
};

const sGame_PaletteDataset SFIII2_A_KEN_HK_PALETTES[] =
{
    { _T("Ken HK"), 0x39ac80, 0x39ad00, index3S_CPS3_Ken },
    { _T("Ken HK Hud"), 0x3d07c0, 0x3d07e0 },
};

const sGame_PaletteDataset SFIII2_A_KEN_EX_PALETTES[] =
{
    { _T("Ken EX"), 0x39ad00, 0x39ad80, index3S_CPS3_Ken },
    { _T("Ken EX Hud"), 0x3d07e0, 0x3d0800 },
};

const sGame_PaletteDataset SFIII2_A_KEN_Support_PALETTES[] =
{
    { _T("Ken EX 1"), 0x3d1100, 0x3d1180, index3S_CPS3_Ken },
    { _T("Ken EX 2"), 0x3dfa80, 0x3dfb00, index3S_CPS3_Ken },
    { _T("Ken SA1"), 0x3d3f80, 0x3d4000, index3S_CPS3_Ken },
    { _T("Ken SA2"), 0x3d4000, 0x3d4080, index3S_CPS3_Ken },
    { _T("Ken SA3"), 0x3d4080, 0x3d4100, index3S_CPS3_Ken },
    { _T("Ken SA4"), 0x3d4100, 0x3d4180, index3S_CPS3_Ken },
    { _T("Ken SA5"), 0x3d4180, 0x3d4200, index3S_CPS3_Ken },
    { _T("Ken SA6"), 0x3d4200, 0x3d4280, index3S_CPS3_Ken },
    { _T("Ken SA7"), 0x3d4280, 0x3d4300, index3S_CPS3_Ken },
    { _T("Ken SA8"), 0x3d4300, 0x3d4380, index3S_CPS3_Ken },
    { _T("Ken Iced Effects"), 0x39c780, 0x39c800, index3S_CPS3_Ken },
    { _T("Ken Burned Effects"), 0x39cf80, 0x39d000, index3S_CPS3_Ken },
};

const sGame_PaletteDataset SFIII2_A_KEN_EXTRA_PALETTES[] =
{
    { _T("Ken Hadouken"), 0x39bd00, 0x39bd80, index3S_CPS3_Ken, 0x02 },
    { _T("Ken Hadouken Impact"), 0x39bd80, 0x39be00, index3S_CPS3_Ken, 0x03 },
    { _T("Ken Shoryuken Flames"), 0x39be00, 0x39be80, index3S_CPS3_Ken, 0x04 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_LP_PALETTES[] =
{
    { _T("Sean LP"), 0x39ad80, 0x39ae00, index3S_CPS3_Sean },
    { _T("Sean LP Hud"), 0x3d0800, 0x3d0820 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_MP_PALETTES[] =
{
    { _T("Sean MP"), 0x39ae00, 0x39ae80, index3S_CPS3_Sean },
    { _T("Sean MP Hud"), 0x3d0820, 0x3d0840 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_HP_PALETTES[] =
{
    { _T("Sean HP"), 0x39ae80, 0x39af00, index3S_CPS3_Sean },
    { _T("Sean HP Hud"), 0x3d0840, 0x3d0860 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_LK_PALETTES[] =
{
    { _T("Sean LK"), 0x39af00, 0x39af80, index3S_CPS3_Sean },
    { _T("Sean LK Hud"), 0x3d0860, 0x3d0880 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_MK_PALETTES[] =
{
    { _T("Sean MK"), 0x39af80, 0x39b000, index3S_CPS3_Sean },
    { _T("Sean MK Hud"), 0x3d0880, 0x3d08a0 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_HK_PALETTES[] =
{
    { _T("Sean HK"), 0x39b000, 0x39b080, index3S_CPS3_Sean },
    { _T("Sean HK Hud"), 0x3d08a0, 0x3d08c0 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_EX_PALETTES[] =
{
    { _T("Sean EX"), 0x39b080, 0x39b100, index3S_CPS3_Sean },
    { _T("Sean EX Hud"), 0x3d08c0, 0x3d08e0 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_Support_PALETTES[] =
{
    { _T("Sean EX 1"), 0x3d1180, 0x3d1200, index3S_CPS3_Sean },
    { _T("Sean EX 2"), 0x3dfb00, 0x3dfb80, index3S_CPS3_Sean },
    { _T("Sean SA1"), 0x3d4380, 0x3d4400, index3S_CPS3_Sean },
    { _T("Sean SA2"), 0x3d4400, 0x3d4480, index3S_CPS3_Sean },
    { _T("Sean SA3"), 0x3d4480, 0x3d4500, index3S_CPS3_Sean },
    { _T("Sean SA4"), 0x3d4500, 0x3d4580, index3S_CPS3_Sean },
    { _T("Sean SA5"), 0x3d4580, 0x3d4600, index3S_CPS3_Sean },
    { _T("Sean SA6"), 0x3d4600, 0x3d4680, index3S_CPS3_Sean },
    { _T("Sean SA7"), 0x3d4680, 0x3d4700, index3S_CPS3_Sean },
    { _T("Sean SA8"), 0x3d4700, 0x3d4780, index3S_CPS3_Sean },

    { _T("Sean Iced Effects"), 0x39c800, 0x39c880, index3S_CPS3_Sean },
    { _T("Sean Burned Effects"), 0x39d000, 0x39d080, index3S_CPS3_Sean },
};

const sGame_PaletteDataset SFIII2_A_SEAN_EXTRA_PALETTES[] =
{
    { _T("Sean Hadouken"), 0x39be80, 0x39bf00 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_LP_PALETTES[] =
{
    { _T("Urien LP"), 0x39b100, 0x39b180, index3S_CPS3_Urien },
    { _T("Urien LP Hud"), 0x3d08e0, 0x3d0900 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_MP_PALETTES[] =
{
    { _T("Urien MP"), 0x39b180, 0x39b200, index3S_CPS3_Urien },
    { _T("Urien MP Hud"), 0x3d0900, 0x3d0920 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_HP_PALETTES[] =
{
    { _T("Urien HP"), 0x39b200, 0x39b280, index3S_CPS3_Urien },
    { _T("Urien HP Hud"), 0x3d0920, 0x3d0940 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_LK_PALETTES[] =
{
    { _T("Urien LK"), 0x39b280, 0x39b300, index3S_CPS3_Urien },
    { _T("Urien LK Hud"), 0x3d0940, 0x3d0960 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_MK_PALETTES[] =
{
    { _T("Urien MK"), 0x39b300, 0x39b380, index3S_CPS3_Urien },
    { _T("Urien MK Hud"), 0x3d0960, 0x3d0980 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_HK_PALETTES[] =
{
    { _T("Urien HK"), 0x39b380, 0x39b400, index3S_CPS3_Urien },
    { _T("Urien HK Hud"), 0x3d0980, 0x3d09a0 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_EX_PALETTES[] =
{
    { _T("Urien EX"), 0x39b400, 0x39b480, index3S_CPS3_Urien },
    { _T("Urien EX Hud"), 0x3d09a0, 0x3d09c0 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_Support_PALETTES[] =
{
    { _T("Urien EX 1"), 0x3d1200, 0x3d1280, index3S_CPS3_Urien },
    { _T("Urien EX 2"), 0x3dfb80, 0x3dfc00, index3S_CPS3_Urien },
    { _T("Urien SA1"), 0x3d4780, 0x3d4800, index3S_CPS3_Urien },
    { _T("Urien SA2"), 0x3d4800, 0x3d4880, index3S_CPS3_Urien },
    { _T("Urien SA3"), 0x3d4880, 0x3d4900, index3S_CPS3_Urien },
    { _T("Urien SA4"), 0x3d4900, 0x3d4980, index3S_CPS3_Urien },
    { _T("Urien SA5"), 0x3d4980, 0x3d4a00, index3S_CPS3_Urien },
    { _T("Urien SA6"), 0x3d4a00, 0x3d4a80, index3S_CPS3_Urien },
    { _T("Urien SA7"), 0x3d4a80, 0x3d4b00, index3S_CPS3_Urien },
    { _T("Urien SA8"), 0x3d4b00, 0x3d4b80, index3S_CPS3_Urien },
    { _T("Urien Iced Effects"), 0x39c880, 0x39c900, index3S_CPS3_Urien },
    { _T("Urien Burned Effects"), 0x39d080, 0x39d100, index3S_CPS3_Urien },
};

const sGame_PaletteDataset SFIII2_A_URIEN_EXTRA_PALETTES[] =
{
    { _T("P1 Intro"), 0x39bf00, 0x39bf80, index3S_CPS3_Urien, 0x00, &pairHandledInCode },
    { _T("P1 Suit"), 0x39bf80, 0x39c000, index3S_CPS3_Urien, 0x03 }, // Note that for pairing we use an alt image.
    { _T("P1 SA3 / Fire / Blood"), 0x39c000, 0x39c080 },

    { _T("P2 Intro"), 0x3e0280, 0x3e0300, index3S_CPS3_Urien, 0x00, &pairHandledInCode },
    { _T("P2 Suit"), 0x3e0300, 0x3e0380, index3S_CPS3_Urien, 0x03 },
    { _T("P2 SA3 / Fire / Blood"), 0x3e0380, 0x3e0400 },

    { _T("Electroball"), 0x39c080, 0x39c100 },
    { _T("SA2 / Big Electroball"), 0x39c100, 0x39c180, index3S_CPS3_Urien, 0x04 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_LP_PALETTES[] =
{
    { _T("Gouki LP"), 0x39b480, 0x39b500, index3S_CPS3_Gouki },
    { _T("Gouki LP Hud"), 0x3d09c0, 0x3d09e0 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_MP_PALETTES[] =
{
    { _T("Gouki MP"), 0x39b500, 0x39b580, index3S_CPS3_Gouki },
    { _T("Gouki MP Hud"), 0x3d09e0, 0x3d0a00 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_HP_PALETTES[] =
{
    { _T("Gouki HP"), 0x39b580, 0x39b600, index3S_CPS3_Gouki },
    { _T("Gouki HP Hud"), 0x3d0a00, 0x3d0a20 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_LK_PALETTES[] =
{
    { _T("Gouki LK"), 0x39b600, 0x39b680, index3S_CPS3_Gouki },
    { _T("Gouki LK Hud"), 0x3d0a20, 0x3d0a40 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_MK_PALETTES[] =
{
    { _T("Gouki MK"), 0x39b680, 0x39b700, index3S_CPS3_Gouki },
    { _T("Gouki MK Hud"), 0x3d0a40, 0x3d0a60 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_HK_PALETTES[] =
{
    { _T("Gouki HK"), 0x39b700, 0x39b780, index3S_CPS3_Gouki },
    { _T("Gouki HK Hud"), 0x3d0a60, 0x3d0a80 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_EX_PALETTES[] =
{
    { _T("Gouki EX"), 0x39b780, 0x39b800, index3S_CPS3_Gouki },
    { _T("Gouki EX Hud"), 0x3d0a80, 0x3d0aa0 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_Support_PALETTES[] =
{
    { _T("Gouki EX 1"), 0x3d1280, 0x3d1300, index3S_CPS3_Gouki },
    { _T("Gouki EX 2"), 0x3dfc00, 0x3dfc80, index3S_CPS3_Gouki },
    { _T("Gouki SA1"), 0x3d4b80, 0x3d4c00, index3S_CPS3_Gouki },
    { _T("Gouki SA2"), 0x3d4c00, 0x3d4c80, index3S_CPS3_Gouki },
    { _T("Gouki SA3"), 0x3d4c80, 0x3d4d00, index3S_CPS3_Gouki },
    { _T("Gouki SA4"), 0x3d4d00, 0x3d4d80, index3S_CPS3_Gouki },
    { _T("Gouki SA5"), 0x3d4d80, 0x3d4e00, index3S_CPS3_Gouki },
    { _T("Gouki SA6"), 0x3d4e00, 0x3d4e80, index3S_CPS3_Gouki },
    { _T("Gouki SA7"), 0x3d4e80, 0x3d4f00, index3S_CPS3_Gouki },
    { _T("Gouki SA8"), 0x3d4f00, 0x3d4f80, index3S_CPS3_Gouki },

    { _T("Gouki Iced Effects"), 0x39c900, 0x39c980, index3S_CPS3_Gouki },
    { _T("Gouki Burned Effects"), 0x39d100, 0x39d180, index3S_CPS3_Gouki },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_EXTRA_PALETTES[] =
{
    { _T("Kongou Kokuretzu Zan / Fireball"), 0x3dab00, 0x3dab80 },
    { _T("Messatsu Go Hadou / Air Fireball"), 0x3dab80, 0x3dac00 },

    { _T("SA Animation 4"), 0x3dac00, 0x3dac80 },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_LP_PALETTES[] =
{
    { _T("Shin Gouki P1"), 0x3dac80, 0x3dad00, index3S_CPS3_Gouki },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_MP_PALETTES[] =
{
    { _T("Shin Gouki P2"), 0x3dad00, 0x3dad80, index3S_CPS3_Gouki },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_Support_PALETTES[] =
{
    { _T("Shin Gouki EX 1"), 0x3d1300, 0x3d1380, index3S_CPS3_Gouki },
    { _T("Shin Gouki EX 2"), 0x3dfc80, 0x3dfd00, index3S_CPS3_Gouki },

    { _T("Shin Gouki SA1"), 0x3d4f80, 0x3d5000, index3S_CPS3_Gouki },
    { _T("Shin Gouki SA2"), 0x3d5000, 0x3d5080, index3S_CPS3_Gouki },
    { _T("Shin Gouki SA3"), 0x3d5080, 0x3d5100, index3S_CPS3_Gouki },
    { _T("Shin Gouki SA4"), 0x3d5100, 0x3d5180, index3S_CPS3_Gouki },
    { _T("Shin Gouki SA5"), 0x3d5180, 0x3d5200, index3S_CPS3_Gouki },
    { _T("Shin Gouki SA6"), 0x3d5200, 0x3d5280, index3S_CPS3_Gouki },
    { _T("Shin Gouki SA7"), 0x3d5280, 0x3d5300, index3S_CPS3_Gouki },
    { _T("Shin Gouki SA8"), 0x3d5300, 0x3d5380, index3S_CPS3_Gouki },
    { _T("Shin Gouki LP Hud"), 0x3d0aa0, 0x3d0ac0, index3S_CPS3_Gouki },
    { _T("Shin Gouki MP Hud"), 0x3d0ac0, 0x3d0ae0, index3S_CPS3_Gouki },
    { _T("Shin Gouki HP Hud"), 0x3d0ae0, 0x3d0b00, index3S_CPS3_Gouki },
    { _T("Shin Gouki LK Hud"), 0x3d0b00, 0x3d0b20, index3S_CPS3_Gouki },
    { _T("Shin Gouki MK Hud"), 0x3d0b20, 0x3d0b40, index3S_CPS3_Gouki },
    { _T("Shin Gouki HK Hud"), 0x3d0b40, 0x3d0b60, index3S_CPS3_Gouki },
    { _T("Shin Gouki EX Hud"), 0x3d0b60, 0x3d0b80, index3S_CPS3_Gouki },

    { _T("Shin Gouki Iced Effects"), 0x3e0580, 0x3e0600, index3S_CPS3_Gouki },
    { _T("Shin Gouki Fire Effects"), 0x3e0600, 0x3e0680, index3S_CPS3_Gouki },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_EXTRA_PALETTES[] =
{
    { _T("Shin Gouki Fireball"), 0x3e0400, 0x3e0480 },
    { _T("Shin Gouki MGH/Air Fireball"), 0x3e0480, 0x3e0500 },
    { _T("Shin Gouki something"), 0x3e0500, 0x3e0580 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_PORTRAIT_PALETTES[] =
{
    { _T("Hugo Losing Portrait LP"), 0x3ac880, 0x3ac980 },
    { _T("Hugo Losing Portrait MP"), 0x3aca00, 0x3acb00 },
    { _T("Hugo Losing Portrait HP"), 0x3acb80, 0x3acc80 },
    { _T("Hugo Losing Portrait LK"), 0x3acd00, 0x3ace00 },
    { _T("Hugo Losing Portrait MK"), 0x3ace80, 0x3acf80 },
    { _T("Hugo Losing Portrait HK"), 0x3ad000, 0x3ad100 },
    { _T("Hugo Losing Portrait EX"), 0x3ad180, 0x3ad280 },

    { _T("Hugo 1 Winning Portrait LP"), 0x3a5880, 0x3a5900 },
    { _T("Hugo 2 Winning Portrait LP"), 0x3a5900, 0x3a5980 },
    { _T("Hugo 1 Winning Portrait MP"), 0x3a5980, 0x3a5a00 },
    { _T("Hugo 2 Winning Portrait MP"), 0x3a5a00, 0x3a5a80 },
    { _T("Hugo 1 Winning Portrait HP"), 0x3a5a80, 0x3a5b00 },
    { _T("Hugo 2 Winning Portrait HP"), 0x3a5b00, 0x3a5b80 },
    { _T("Hugo 1 Winning Portrait LK"), 0x3a5b80, 0x3a5c00 },
    { _T("Hugo 2 Winning Portrait LK"), 0x3a5c00, 0x3a5c80 },
    { _T("Hugo 1 Winning Portrait MK"), 0x3a5c80, 0x3a5d00 },
    { _T("Hugo 2 Winning Portrait MK"), 0x3a5d00, 0x3a5d80 },
    { _T("Hugo 1 Winning Portrait HK"), 0x3a5d80, 0x3a5e00 },
    { _T("Hugo 2 Winning Portrait HK"), 0x3a5e00, 0x3a5e80 },
    { _T("Hugo 1 Winning Portrait EX"), 0x3a5e80, 0x3a5f00 },
    { _T("Hugo 2 Winning Portrait EX"), 0x3a5f00, 0x3a5f80 },

    { _T("Hugo Icon"), 0x3a0980, 0x3a0a00 },
};

const sGame_PaletteDataset SFIII2_A_GILL_LP_PALETTES[] =
{
    { _T("Facing Left"), 0x398000, 0x398080, index3S_CPS3_Gill, 0x01 },
    { _T("Facing Right"), 0x398080, 0x398100, index3S_CPS3_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII2_A_GILL_MP_PALETTES[] =
{
    { _T("Facing Left"), 0x398100, 0x398180, index3S_CPS3_Gill, 0x01 },
    { _T("Facing Right"), 0x398180, 0x398200, index3S_CPS3_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII2_A_GILL_HP_PALETTES[] =
{
    { _T("Facing Left"), 0x398200, 0x398280, index3S_CPS3_Gill, 0x01 },
    { _T("Facing Right"), 0x398280, 0x398300, index3S_CPS3_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII2_A_GILL_LK_PALETTES[] =
{
    { _T("Facing Left"), 0x398300, 0x398380, index3S_CPS3_Gill, 0x01 },
    { _T("Facing Right"), 0x398380, 0x398400, index3S_CPS3_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII2_A_GILL_MK_PALETTES[] =
{
    { _T("Facing Left"), 0x398400, 0x398480, index3S_CPS3_Gill, 0x01 },
    { _T("Facing Right"), 0x398480, 0x398500, index3S_CPS3_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII2_A_GILL_HK_PALETTES[] =
{
    { _T("Facing Left"), 0x398500, 0x398580, index3S_CPS3_Gill, 0x01 },
    { _T("Facing Right"), 0x398580, 0x398600, index3S_CPS3_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII2_A_GILL_Support_PALETTES[] =
{
    { _T("Gill EX 1"), 0x3d0b80, 0x3d0c00, index3S_CPS3_Gill, 0x01 },
    { _T("Gill EX 2"), 0x3df500, 0x3df580, index3S_CPS3_Gill, 0x01 },

    { _T("Gill SA1"), 0x3d1380, 0x3d1400, index3S_CPS3_Gill, 0x01 },
    { _T("Gill SA2"), 0x3d1400, 0x3d1480, index3S_CPS3_Gill, 0x01 },
    { _T("Gill SA3"), 0x3d1480, 0x3d1500, index3S_CPS3_Gill, 0x01 },
    { _T("Gill SA4"), 0x3d1500, 0x3d1580, index3S_CPS3_Gill, 0x01 },
    { _T("Gill SA5"), 0x3d1580, 0x3d1600, index3S_CPS3_Gill, 0x01 },
    { _T("Gill SA6"), 0x3d1600, 0x3d1680, index3S_CPS3_Gill, 0x01 },
    { _T("Gill SA7"), 0x3d1680, 0x3d1700, index3S_CPS3_Gill, 0x01 },
    { _T("Gill SA8"), 0x3d1700, 0x3d1780, index3S_CPS3_Gill, 0x01 },

    { _T("Gill Right Iced Effects"), 0x39c180, 0x39c200, index3S_CPS3_Gill, 0x01 },
    { _T("Gill Left Iced Effects"), 0x39c200, 0x39c280, index3S_CPS3_Gill, 0x00 },
    { _T("Gill Right Burned Effects"), 0x39c980, 0x39ca00, index3S_CPS3_Gill, 0x01 },
    { _T("Gill Left Burned Effects"), 0x39ca00, 0x39ca80, index3S_CPS3_Gill, 0x00 },
};

const sGame_PaletteDataset SFIII2_A_GILL_EXTRA_PALETTES[] =
{
    { _T("Ice / Fire"), 0x39b880, 0x39b900, index3S_CPS3_Gill, 0x02 },
    { _T("Ice / Fire Impacts"), 0x39b800, 0x39b880, index3S_CPS3_Gill, 0x03 },
};

const sGame_PaletteDataset SFIII2_A_GILL_PORTRAIT_PALETTES[] =
{
    { _T("Gill LP Hud"), 0x3cfd80, 0x3cfda0 },
    { _T("Gill MP Hud"), 0x3cfda0, 0x3cfdc0 },
    { _T("Gill HP Hud"), 0x3cfdc0, 0x3cfde0 },
    { _T("Gill LK Hud"), 0x3cfde0, 0x3cfe00 },
    { _T("Gill MK Hud"), 0x3cfe00, 0x3cfe20 },
    { _T("Gill HK Hud"), 0x3cfe20, 0x3cfe40 },
    { _T("Gill EX Hud (Unused Maybe)"), 0x3cfe40, 0x3cfe60 },

    { _T("Gill Left Losing Portrait"), 0x3a9080, 0x3a9200 },
    { _T("Gill Right Losing Portrait"), 0x3a9200, 0x3a9380 },
    { _T("Gill Left Winning Portrait"), 0x3a3c80, 0x3a3d00 },
    { _T("Gill Right Winning Portrait"), 0x3a3d00, 0x3a3d80 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_PORTRAIT_PALETTES[] =
{
    { _T("Alex Losing Portrait LP"), 0x3a9b00, 0x3a9c00 },
    { _T("Alex Losing Portrait MP"), 0x3a9c00, 0x3a9d00 },
    { _T("Alex Losing Portrait HP"), 0x3a9d00, 0x3a9e00 },
    { _T("Alex Losing Portrait LK"), 0x3a9e00, 0x3a9f00 },
    { _T("Alex Losing Portrait MK"), 0x3a9f00, 0x3aa000 },
    { _T("Alex Losing Portrait HK"), 0x3aa000, 0x3aa100 },
    { _T("Alex Losing Portrait EX"), 0x3aa100, 0x3aa200 },

    { _T("Alex Winning Portrait LP"), 0x3a4000, 0x3a4080 },
    { _T("Alex Winning Portrait MP"), 0x3a4080, 0x3a4100 },
    { _T("Alex Winning Portrait HP"), 0x3a4100, 0x3a4180 },
    { _T("Alex Winning Portrait LK"), 0x3a4180, 0x3a4200 },
    { _T("Alex Winning Portrait MK"), 0x3a4200, 0x3a4280 },
    { _T("Alex Winning Portrait HK"), 0x3a4280, 0x3a4300 },
    { _T("Alex Winning Portrait EX"), 0x3a4300, 0x3a4380 },

    { _T("Alex Character Select Icon"), 0x3a0880, 0x3a0900 },
};

const sGame_PaletteDataset SFIII2_A_RYU_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Losing Portrait LP"), 0x3aa200, 0x3aa380 },
    { _T("Ryu Losing Portrait MP"), 0x3aa380, 0x3aa500 },
    { _T("Ryu Losing Portrait HP"), 0x3aa500, 0x3aa680 },
    { _T("Ryu Losing Portrait LK"), 0x3aa680, 0x3aa800 },
    { _T("Ryu Losing Portrait MK"), 0x3aa800, 0x3aa980 },
    { _T("Ryu Losing Portrait HK"), 0x3aa980, 0x3aab00 },
    { _T("Ryu Losing Portrait EX"), 0x3aab00, 0x3aac80 },

    { _T("Ryu Winning Portrait LP"), 0x3a4380, 0x3a4400 },
    { _T("Ryu Winning Portrait MP"), 0x3a4400, 0x3a4480 },
    { _T("Ryu Winning Portrait HP"), 0x3a4480, 0x3a4500 },
    { _T("Ryu Winning Portrait LK"), 0x3a4500, 0x3a4580 },
    { _T("Ryu Winning Portrait MK"), 0x3a4580, 0x3a4600 },
    { _T("Ryu Winning Portrait HK"), 0x3a4600, 0x3a4680 },
    { _T("Ryu Winning Portrait EX"), 0x3a4680, 0x3a4700 },

    { _T("Ryu Icon"), 0x3a0500, 0x3a0580 },
};

const sGame_PaletteDataset SFIII2_A_YUN_PORTRAIT_PALETTES[] =
{
    { _T("Yun Losing Portrait LP"), 0x3aac80, 0x3aae00 },
    { _T("Yun Losing Portrait MP"), 0x3aae00, 0x3aaf80 },
    { _T("Yun Losing Portrait HP"), 0x3aaf80, 0x3ab100 },
    { _T("Yun Losing Portrait LK"), 0x3ab100, 0x3ab280 },
    { _T("Yun Losing Portrait MK"), 0x3ab280, 0x3ab400 },
    { _T("Yun Losing Portrait HK"), 0x3ab400, 0x3ab580 },
    { _T("Yun Losing Portrait EX"), 0x3ab580, 0x3ab700 },

    { _T("Yun 1 Winning Portrait LP"), 0x3a4700, 0x3a4780 },
    { _T("Yun 2 Winning Portrait LP"), 0x3a4780, 0x3a4800 },
    { _T("Yun 1 Winning Portrait MP"), 0x3a4800, 0x3a4880 },
    { _T("Yun 2 Winning Portrait MP"), 0x3a4880, 0x3a4900 },
    { _T("Yun 1 Winning Portrait HP"), 0x3a4900, 0x3a4980 },
    { _T("Yun 2 Winning Portrait HP"), 0x3a4980, 0x3a4a00 },
    { _T("Yun 1 Winning Portrait LK"), 0x3a4a00, 0x3a4a80 },
    { _T("Yun 2 Winning Portrait LK"), 0x3a4a80, 0x3a4b00 },
    { _T("Yun 1 Winning Portrait MK"), 0x3a4b00, 0x3a4b80 },
    { _T("Yun 2 Winning Portrait MK"), 0x3a4b80, 0x3a4c00 },
    { _T("Yun 1 Winning Portrait HK"), 0x3a4c00, 0x3a4c80 },
    { _T("Yun 2 Winning Portrait HK"), 0x3a4c80, 0x3a4d00 },
    { _T("Yun 1 Winning Portrait EX"), 0x3a4d00, 0x3a4d80 },
    { _T("Yun 2 Winning Portrait EX"), 0x3a4d80, 0x3a4e00 },

    { _T("Yun Icon"), 0x3a0580, 0x3a0600 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_PORTRAIT_PALETTES[] =
{
    { _T("Dudley Losing Portrait LP"), 0x3ab700, 0x3ab880 },
    { _T("Dudley Losing Portrait MP"), 0x3ab880, 0x3aba00 },
    { _T("Dudley Losing Portrait HP"), 0x3aba00, 0x3abb80 },
    { _T("Dudley Losing Portrait LK"), 0x3abb80, 0x3abd00 },
    { _T("Dudley Losing Portrait MK"), 0x3abd00, 0x3abe80 },
    { _T("Dudley Losing Portrait HK"), 0x3abe80, 0x3ac000 },
    { _T("Dudley Losing Portrait EX"), 0x3ac000, 0x3ac180 },

    { _T("Dudley Winning Portrait LP"), 0x3a4e00, 0x3a4e80 },
    { _T("Dudley Butler Winning Portrait LP"), 0x3a4e80, 0x3a4f00 },
    { _T("Dudley Winning Portrait MP"), 0x3a4f00, 0x3a4f80 },
    { _T("Dudley Butler Winning Portrait MP"), 0x3a4f80, 0x3a5000 },
    { _T("Dudley Winning Portrait HP"), 0x3a5000, 0x3a5080 },
    { _T("Dudley Butler Winning Portrait HP"), 0x3a5080, 0x3a5100 },
    { _T("Dudley Winning Portrait LK"), 0x3a5100, 0x3a5180 },
    { _T("Dudley Butler Winning Portrait LK"), 0x3a5180, 0x3a5200 },
    { _T("Dudley Winning Portrait MK"), 0x3a5200, 0x3a5280 },
    { _T("Dudley Butler Winning Portrait MK"), 0x3a5280, 0x3a5300 },
    { _T("Dudley Winning Portrait HK"), 0x3a5300, 0x3a5380 },
    { _T("Dudley Butler Winning Portrait HK"), 0x3a5380, 0x3a5400 },
    { _T("Dudley Winning Portrait EX"), 0x3a5400, 0x3a5480 },
    { _T("Dudley Butler Winning Portrait EX"), 0x3a5480, 0x3a5500 },

    { _T("Dudley Icon"), 0x3a0b00, 0x3a0b80 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_PORTRAIT_PALETTES[] =
{
    { _T("Necro Losing Portrait LP"), 0x3ac180, 0x3ac280 },
    { _T("Necro Losing Portrait MP"), 0x3ac280, 0x3ac380 },
    { _T("Necro Losing Portrait HP"), 0x3ac380, 0x3ac480 },
    { _T("Necro Losing Portrait LK"), 0x3ac480, 0x3ac580 },
    { _T("Necro Losing Portrait MK"), 0x3ac580, 0x3ac680 },
    { _T("Necro Losing Portrait HK"), 0x3ac680, 0x3ac780 },
    { _T("Necro Losing Portrait EX"), 0x3ac780, 0x3ac880 },

    { _T("Necro Winning Portrait LP"), 0x3a5500, 0x3a5580 },
    { _T("Necro Winning Portrait MP"), 0x3a5580, 0x3a5600 },
    { _T("Necro Winning Portrait HP"), 0x3a5600, 0x3a5680 },
    { _T("Necro Winning Portrait LK"), 0x3a5680, 0x3a5700 },
    { _T("Necro Winning Portrait MK"), 0x3a5700, 0x3a5780 },
    { _T("Necro Winning Portrait HK"), 0x3a5780, 0x3a5800 },
    { _T("Necro Winning Portrait EX"), 0x3a5800, 0x3a5880 },

    { _T("Necro Icon"), 0x3a0900, 0x3a0980 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_PORTRAIT_PALETTES[] =
{
    { _T("Ibuki Losing Portrait LP"), 0x3ad300, 0x3ad400 },
    { _T("Ibuki Losing Portrait MP"), 0x3ad400, 0x3ad500 },
    { _T("Ibuki Losing Portrait HP"), 0x3ad500, 0x3ad600 },
    { _T("Ibuki Losing Portrait LK"), 0x3ad600, 0x3ad700 },
    { _T("Ibuki Losing Portrait MK"), 0x3ad700, 0x3ad800 },
    { _T("Ibuki Losing Portrait HK"), 0x3ad800, 0x3ad900 },
    { _T("Ibuki Losing Portrait EX"), 0x3ad900, 0x3ada00 },

    { _T("Ibuki Winning Portrait LP"), 0x3a5f80, 0x3a6000 },
    { _T("Ibuki Winning Portrait MP"), 0x3a6000, 0x3a6080 },
    { _T("Ibuki Winning Portrait HP"), 0x3a6080, 0x3a6100 },
    { _T("Ibuki Winning Portrait LK"), 0x3a6100, 0x3a6180 },
    { _T("Ibuki Winning Portrait MK"), 0x3a6180, 0x3a6200 },
    { _T("Ibuki Winning Portrait HK"), 0x3a6200, 0x3a6280 },
    { _T("Ibuki Winning Portrait EX"), 0x3a6280, 0x3a6300 },

    { _T("Ibuki Icon"), 0x3a0600, 0x3a0680 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_PORTRAIT_PALETTES[] =
{
    { _T("Elena Losing Portrait LP"), 0x3ada00, 0x3adb00 },
    { _T("Elena Losing Portrait MP"), 0x3adb00, 0x3adc00 },
    { _T("Elena Losing Portrait HP"), 0x3adc00, 0x3add00 },
    { _T("Elena Losing Portrait LK"), 0x3add00, 0x3ade00 },
    { _T("Elena Losing Portrait MK"), 0x3ade00, 0x3adf00 },
    { _T("Elena Losing Portrait HK"), 0x3adf00, 0x3ae000 },
    { _T("Elena Losing Portrait EX"), 0x3ae000, 0x3ae100 },

    { _T("Elena 1 Winning Portrait LP"), 0x3a6300, 0x3a6380 },
    { _T("Elena 2 Winning Portrait LP"), 0x3a6380, 0x3a6400 },
    { _T("Elena 1 Winning Portrait MP"), 0x3a6400, 0x3a6480 },
    { _T("Elena 2 Winning Portrait MP"), 0x3a6480, 0x3a6500 },
    { _T("Elena 1 Winning Portrait HP"), 0x3a6500, 0x3a6580 },
    { _T("Elena 2 Winning Portrait HP"), 0x3a6580, 0x3a6600 },
    { _T("Elena 1 Winning Portrait LK"), 0x3a6600, 0x3a6680 },
    { _T("Elena 2 Winning Portrait LK"), 0x3a6680, 0x3a6700 },
    { _T("Elena 1 Winning Portrait MK"), 0x3a6700, 0x3a6780 },
    { _T("Elena 2 Winning Portrait MK"), 0x3a6780, 0x3a6800 },
    { _T("Elena 1 Winning Portrait HK"), 0x3a6800, 0x3a6880 },
    { _T("Elena 2 Winning Portrait HK"), 0x3a6880, 0x3a6900 },
    { _T("Elena 1 Winning Portrait EX"), 0x3a6900, 0x3a6980 },
    { _T("Elena 2 Winning Portrait EX"), 0x3a6980, 0x3a6a00 },

    { _T("Elena Icon"), 0x3a0700, 0x3a0780 },
};

const sGame_PaletteDataset SFIII2_A_ORO_PORTRAIT_PALETTES[] =
{
    { _T("Oro Losing Portrait LP"), 0x3ae100, 0x3ae180 },
    { _T("Oro Losing Portrait MP"), 0x3ae180, 0x3ae200 },
    { _T("Oro Losing Portrait HP"), 0x3ae200, 0x3ae280 },
    { _T("Oro Losing Portrait LK"), 0x3ae280, 0x3ae300 },
    { _T("Oro Losing Portrait MK"), 0x3ae300, 0x3ae380 },
    { _T("Oro Losing Portrait HK"), 0x3ae380, 0x3ae400 },
    { _T("Oro Losing Portrait EX"), 0x3ae400, 0x3ae480 },

    { _T("Oro Winning Portrait LP"), 0x3a6a00, 0x3a6a80 },
    { _T("Oro Winning Portrait MP"), 0x3a6a80, 0x3a6b00 },
    { _T("Oro Winning Portrait HP"), 0x3a6b00, 0x3a6b80 },
    { _T("Oro Winning Portrait LK"), 0x3a6b80, 0x3a6c00 },
    { _T("Oro Winning Portrait MK"), 0x3a6c00, 0x3a6c80 },
    { _T("Oro Winning Portrait HK"), 0x3a6c80, 0x3a6d00 },
    { _T("Oro Winning Portrait EX"), 0x3a6d00, 0x3a6d80 },

    { _T("Oro Icon"), 0x3a0a80, 0x3a0b00 },
};

const sGame_PaletteDataset SFIII2_A_YANG_PORTRAIT_PALETTES[] =
{
    { _T("Yang Losing Portrait LP"), 0x3ae480, 0x3ae580 },
    { _T("Yang Losing Portrait MP"), 0x3ae580, 0x3ae680 },
    { _T("Yang Losing Portrait HP"), 0x3ae680, 0x3ae780 },
    { _T("Yang Losing Portrait LK"), 0x3ae780, 0x3ae880 },
    { _T("Yang Losing Portrait MK"), 0x3ae880, 0x3ae980 },
    { _T("Yang Losing Portrait HK"), 0x3ae980, 0x3aea80 },
    { _T("Yang Losing Portrait EX"), 0x3aea80, 0x3aeb80 },

    { _T("Yang Winning Portrait LP"), 0x3a6d80, 0x3a6e00 },
    { _T("Yang Winning Portrait MP"), 0x3a6e00, 0x3a6e80 },
    { _T("Yang Winning Portrait HP"), 0x3a6e80, 0x3a6f00 },
    { _T("Yang Winning Portrait LK"), 0x3a6f00, 0x3a6f80 },
    { _T("Yang Winning Portrait MK"), 0x3a6f80, 0x3a7000 },
    { _T("Yang Winning Portrait HK"), 0x3a7000, 0x3a7080 },
    { _T("Yang Winning Portrait EX"), 0x3a7080, 0x3a7100 },

    { _T("Yang Icon"), 0x3a0780, 0x3a0800 },
};

const sGame_PaletteDataset SFIII2_A_KEN_PORTRAIT_PALETTES[] =
{
    { _T("Ken Losing Portrait LP"), 0x3aeb80, 0x3aec80 },
    { _T("Ken Losing Portrait MP"), 0x3aec80, 0x3aed80 },
    { _T("Ken Losing Portrait HP"), 0x3aed80, 0x3aee80 },
    { _T("Ken Losing Portrait LK"), 0x3aee80, 0x3aef80 },
    { _T("Ken Losing Portrait MK"), 0x3aef80, 0x3af080 },
    { _T("Ken Losing Portrait HK"), 0x3af080, 0x3af180 },
    { _T("Ken Losing Portrait EX"), 0x3af180, 0x3af280 },

    { _T("Ken Winning Portrait LP"), 0x3a7100, 0x3a7180 },
    { _T("Ken Winning Portrait MP"), 0x3a7180, 0x3a7200 },
    { _T("Ken Winning Portrait HP"), 0x3a7200, 0x3a7280 },
    { _T("Ken Winning Portrait LK"), 0x3a7280, 0x3a7300 },
    { _T("Ken Winning Portrait MK"), 0x3a7300, 0x3a7380 },
    { _T("Ken Winning Portrait HK"), 0x3a7380, 0x3a7400 },
    { _T("Ken Winning Portrait EX"), 0x3a7400, 0x3a7480 },
    
    { _T("Ken Icon"), 0x3a0800, 0x3a0880 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_PORTRAIT_PALETTES[] =
{
    { _T("Sean Losing Portrait LP"), 0x3af280, 0x3af400 },
    { _T("Sean Losing Portrait MP"), 0x3af400, 0x3af580 },
    { _T("Sean Losing Portrait HP"), 0x3af580, 0x3af700 },
    { _T("Sean Losing Portrait LK"), 0x3af700, 0x3af880 },
    { _T("Sean Losing Portrait MK"), 0x3af880, 0x3afa00 },
    { _T("Sean Losing Portrait HK"), 0x3afa00, 0x3afb80 },
    { _T("Sean Losing Portrait EX"), 0x3afb80, 0x3afd00 },

    { _T("Sean 1 Winning Portrait LP"), 0x3a7480, 0x3a7500 },
    { _T("Sean 2 Winning Portrait LP"), 0x3a7500, 0x3a7580 },
    { _T("Sean 1 Winning Portrait MP"), 0x3a7580, 0x3a7600 },
    { _T("Sean 2 Winning Portrait MP"), 0x3a7600, 0x3a7680 },
    { _T("Sean 1 Winning Portrait HP"), 0x3a7680, 0x3a7700 },
    { _T("Sean 2 Winning Portrait HP"), 0x3a7700, 0x3a7780 },
    { _T("Sean 1 Winning Portrait LK"), 0x3a7780, 0x3a7800 },
    { _T("Sean 2 Winning Portrait LK"), 0x3a7800, 0x3a7880 },
    { _T("Sean 1 Winning Portrait MK"), 0x3a7880, 0x3a7900 },
    { _T("Sean 2 Winning Portrait MK"), 0x3a7900, 0x3a7980 },
    { _T("Sean 1 Winning Portrait HK"), 0x3a7980, 0x3a7a00 },
    { _T("Sean 2 Winning Portrait HK"), 0x3a7a00, 0x3a7a80 },
    { _T("Sean 1 Winning Portrait EX"), 0x3a7a80, 0x3a7b00 },
    { _T("Sean 2 Winning Portrait EX"), 0x3a7b00, 0x3a7b80 },

    { _T("Sean Icon"), 0x3a0680, 0x3a0700 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_PORTRAIT_PALETTES[] =
{
    { _T("Urien Losing Portrait LP"), 0x3afd00, 0x3afd80 },
    { _T("Urien Losing Portrait MP"), 0x3afe80, 0x3aff00 },
    { _T("Urien Losing Portrait HP"), 0x3b0000, 0x3b0080 },
    { _T("Urien Losing Portrait LK"), 0x3b0180, 0x3b0200 },
    { _T("Urien Losing Portrait MK"), 0x3b0300, 0x3b0380 },
    { _T("Urien Losing Portrait HK"), 0x3b0480, 0x3b0500 },
    { _T("Urien Losing Portrait EX"), 0x3b0600, 0x3b0680 },

    { _T("Urien 1 Winning Portrait LP"), 0x3a7b80, 0x3a7c00 },
    { _T("Urien 2 Winning Portrait LP"), 0x3a7c00, 0x3a7c80 },
    { _T("Urien 1 Winning Portrait MP"), 0x3a7c80, 0x3a7d00 },
    { _T("Urien 2 Winning Portrait MP"), 0x3a7d00, 0x3a7d80 },
    { _T("Urien 1 Winning Portrait HP"), 0x3a7d80, 0x3a7e00 },
    { _T("Urien 2 Winning Portrait HP"), 0x3a7e00, 0x3a7e80 },
    { _T("Urien 1 Winning Portrait LK"), 0x3a7e80, 0x3a7f00 },
    { _T("Urien 2 Winning Portrait LK"), 0x3a7f00, 0x3a7f80 },
    { _T("Urien 1 Winning Portrait MK"), 0x3a7f80, 0x3a8000 },
    { _T("Urien 2 Winning Portrait MK"), 0x3a8000, 0x3a8080 },
    { _T("Urien 1 Winning Portrait HK"), 0x3a8080, 0x3a8100 },
    { _T("Urien 2 Winning Portrait HK"), 0x3a8100, 0x3a8180 },
    { _T("Urien 1 Winning Portrait EX"), 0x3a8180, 0x3a8200 },
    { _T("Urien 2 Winning Portrait EX"), 0x3a8200, 0x3a8280 },
    
    { _T("Urien Icon"), 0x3a0a00, 0x3a0a80 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_PORTRAIT_PALETTES[] =
{
    { _T("Gouki Losing Portrait LP"), 0x3b0780, 0x3b0880 },
    { _T("Gouki Losing Portrait MP"), 0x3b0900, 0x3b0a00 },
    { _T("Gouki Losing Portrait HP"), 0x3b0a80, 0x3b0b80 },
    { _T("Gouki Losing Portrait LK"), 0x3b0c00, 0x3b0d00 },
    { _T("Gouki Losing Portrait MK"), 0x3b0d80, 0x3b0e80 },
    { _T("Gouki Losing Portrait HK"), 0x3b0f00, 0x3b1000 },
    { _T("Gouki Losing Portrait EX"), 0x3b1080, 0x3b1180 },
    { _T("Gouki Winning Portrait LP"), 0x3a8280, 0x3a8300 },
    { _T("Gouki Winning Portrait MP"), 0x3a8380, 0x3a8400 },
    { _T("Gouki Winning Portrait HP"), 0x3a8480, 0x3a8500 },
    { _T("Gouki Winning Portrait LK"), 0x3a8580, 0x3a8600 },
    { _T("Gouki Winning Portrait MK"), 0x3a8680, 0x3a8700 },
    { _T("Gouki Winning Portrait HK"), 0x3a8780, 0x3a8800 },
    { _T("Gouki Winning Portrait EX"), 0x3a8880, 0x3a8900 },

    { _T("Gouki Icon"), 0x3a0b80, 0x3a0c00 },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_PORTRAIT_PALETTES[] =
{
    { _T("Shin Gouki Losing Portrait P1"), 0x3b1200, 0x3b1300 },
    { _T("Shin Gouki Losing Portrait P2"), 0x3b1380, 0x3b1480 },
    { _T("Shin Gouki Winning Portrait P1"), 0x3a8980, 0x3a8a00 },
    { _T("Shin Gouki Winning Portrait P2"), 0x3a8a80, 0x3a8b00 },
};

const sDescTreeNode SFIII2_A_ALEX_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_LP_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_MP_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_HP_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_LK_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_MK_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_HK_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_EX_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_Support_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_RYU_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_LP_PALETTES, ARRAYSIZE(SFIII2_A_RYU_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_MP_PALETTES, ARRAYSIZE(SFIII2_A_RYU_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_HP_PALETTES, ARRAYSIZE(SFIII2_A_RYU_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_LK_PALETTES, ARRAYSIZE(SFIII2_A_RYU_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_MK_PALETTES, ARRAYSIZE(SFIII2_A_RYU_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_HK_PALETTES, ARRAYSIZE(SFIII2_A_RYU_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_EX_PALETTES, ARRAYSIZE(SFIII2_A_RYU_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_Support_PALETTES, ARRAYSIZE(SFIII2_A_RYU_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_RYU_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_RYU_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_YUN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_LP_PALETTES, ARRAYSIZE(SFIII2_A_YUN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_MP_PALETTES, ARRAYSIZE(SFIII2_A_YUN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_HP_PALETTES, ARRAYSIZE(SFIII2_A_YUN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_LK_PALETTES, ARRAYSIZE(SFIII2_A_YUN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_MK_PALETTES, ARRAYSIZE(SFIII2_A_YUN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_HK_PALETTES, ARRAYSIZE(SFIII2_A_YUN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_EX_PALETTES, ARRAYSIZE(SFIII2_A_YUN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_Support_PALETTES, ARRAYSIZE(SFIII2_A_YUN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_YUN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII2_A_DUDLEY_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_LP_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_MP_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_HP_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_LK_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_MK_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_HK_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_EX_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_Support_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_NECRO_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_LP_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_MP_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_HP_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_LK_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_MK_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_HK_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_EX_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_Support_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_HUGO_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_LP_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_MP_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_HP_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_LK_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_MK_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_HK_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_EX_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_Support_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_GILL_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_LP_PALETTES, ARRAYSIZE(SFIII2_A_GILL_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_MP_PALETTES, ARRAYSIZE(SFIII2_A_GILL_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_HP_PALETTES, ARRAYSIZE(SFIII2_A_GILL_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_LK_PALETTES, ARRAYSIZE(SFIII2_A_GILL_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_MK_PALETTES, ARRAYSIZE(SFIII2_A_GILL_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_HK_PALETTES, ARRAYSIZE(SFIII2_A_GILL_HK_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_Support_PALETTES, ARRAYSIZE(SFIII2_A_GILL_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_GILL_PORTRAIT_PALETTES) },
    { _T("Extra"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_GILL_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_IBUKI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_LP_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_MP_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_HP_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_LK_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_MK_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_HK_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_EX_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_Support_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_ELENA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_LP_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_MP_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_HP_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_LK_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_MK_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_HK_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_EX_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_Support_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_ORO_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_LP_PALETTES, ARRAYSIZE(SFIII2_A_ORO_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_MP_PALETTES, ARRAYSIZE(SFIII2_A_ORO_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_HP_PALETTES, ARRAYSIZE(SFIII2_A_ORO_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_LK_PALETTES, ARRAYSIZE(SFIII2_A_ORO_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_MK_PALETTES, ARRAYSIZE(SFIII2_A_ORO_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_HK_PALETTES, ARRAYSIZE(SFIII2_A_ORO_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_EX_PALETTES, ARRAYSIZE(SFIII2_A_ORO_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_Support_PALETTES, ARRAYSIZE(SFIII2_A_ORO_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_ORO_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_ORO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_YANG_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_LP_PALETTES, ARRAYSIZE(SFIII2_A_YANG_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_MP_PALETTES, ARRAYSIZE(SFIII2_A_YANG_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_HP_PALETTES, ARRAYSIZE(SFIII2_A_YANG_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_LK_PALETTES, ARRAYSIZE(SFIII2_A_YANG_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_MK_PALETTES, ARRAYSIZE(SFIII2_A_YANG_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_HK_PALETTES, ARRAYSIZE(SFIII2_A_YANG_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_EX_PALETTES, ARRAYSIZE(SFIII2_A_YANG_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_Support_PALETTES, ARRAYSIZE(SFIII2_A_YANG_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_YANG_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII2_A_KEN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_LP_PALETTES, ARRAYSIZE(SFIII2_A_KEN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_MP_PALETTES, ARRAYSIZE(SFIII2_A_KEN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_HP_PALETTES, ARRAYSIZE(SFIII2_A_KEN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_LK_PALETTES, ARRAYSIZE(SFIII2_A_KEN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_MK_PALETTES, ARRAYSIZE(SFIII2_A_KEN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_HK_PALETTES, ARRAYSIZE(SFIII2_A_KEN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_EX_PALETTES, ARRAYSIZE(SFIII2_A_KEN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_Support_PALETTES, ARRAYSIZE(SFIII2_A_KEN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_KEN_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_KEN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_SEAN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_LP_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_MP_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_HP_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_LK_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_MK_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_HK_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_EX_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_Support_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_URIEN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_LP_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_MP_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_HP_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_LK_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_MK_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_HK_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_EX_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_Support_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_GOUKI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_LP_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_LP_PALETTES) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_MP_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_MP_PALETTES) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_HP_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_HP_PALETTES) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_LK_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_LK_PALETTES) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_MK_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_MK_PALETTES) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_HK_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_HK_PALETTES) },
    { _T("EX"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_EX_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_EX_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_Support_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_SHINGOUKI_COLLECTION[] =
{
    { _T("P1"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_LP_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_LP_PALETTES) },
    { _T("P2"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_MP_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_MP_PALETTES) },
    { _T("Support"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_Support_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_Support_PALETTES) },
    { _T("Portraits and Select Icon"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_PORTRAIT_PALETTES) },
    { _T("Extras"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_EXTRA_PALETTES) },
};

const sGame_PaletteDataset SFIII2_A_BONUS_PALETTES[] =
{
    { _T("Judgement Girl: Julia"), 0x3dfe00, 0x3dfe80 },
    { _T("Judgement Girl: Fair Libra"), 0x3dfe80, 0x3dff00 },
    { _T("Judgement Girl: Rifa"), 0x3dff00, 0x3dff80 },
    { _T("Judgement Girl: Tonfa"), 0x3dff80, 0x3e0000 },
    { _T("Judgement Girl: Toli"), 0x3e0000, 0x3e0080 },
    { _T("Judgement Girl: Anna"), 0x3e0080, 0x3e0100 },
    { _T("Judgement Girl: Lilly"), 0x3e0100, 0x3e0180 },
    { _T("Judgement Girl: Effie"), 0x3e0180, 0x3e0200 },

    { _T("1P and 2P Cursor"), 0x3a0c00, 0x3a0c80 },
};

const sDescTreeNode SFIII2_A_BONUS_COLLECTION[] =
{
    { _T("Bonus"),   DESC_NODETYPE_TREE, (void*)SFIII2_A_BONUS_PALETTES, ARRAYSIZE(SFIII2_A_BONUS_PALETTES) },
};

const sDescTreeNode SFIII2_A_50_UNITS[] =
{
    { _T("Alex"),   DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_COLLECTION, ARRAYSIZE(SFIII2_A_ALEX_COLLECTION) },
    { _T("Ryu"),    DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_COLLECTION, ARRAYSIZE(SFIII2_A_RYU_COLLECTION) },
    { _T("Yun"),    DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_COLLECTION, ARRAYSIZE(SFIII2_A_YUN_COLLECTION) },
    { _T("Dudley"), DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_COLLECTION, ARRAYSIZE(SFIII2_A_DUDLEY_COLLECTION) },
    { _T("Necro"),  DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_COLLECTION, ARRAYSIZE(SFIII2_A_NECRO_COLLECTION) },
    { _T("Hugo"),   DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_COLLECTION, ARRAYSIZE(SFIII2_A_HUGO_COLLECTION) },
    { _T("Ibuki"),  DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_COLLECTION, ARRAYSIZE(SFIII2_A_IBUKI_COLLECTION) },
    { _T("Elena"),  DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_COLLECTION, ARRAYSIZE(SFIII2_A_ELENA_COLLECTION) },
    { _T("Oro"),    DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_COLLECTION, ARRAYSIZE(SFIII2_A_ORO_COLLECTION) },
    { _T("Yang"),   DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_COLLECTION, ARRAYSIZE(SFIII2_A_YANG_COLLECTION) },
    { _T("Ken"),    DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_COLLECTION, ARRAYSIZE(SFIII2_A_KEN_COLLECTION) },
    { _T("Sean"),   DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_COLLECTION, ARRAYSIZE(SFIII2_A_SEAN_COLLECTION) },
    { _T("Urien"),  DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_COLLECTION, ARRAYSIZE(SFIII2_A_URIEN_COLLECTION) },
    { _T("Gouki"),  DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_COLLECTION, ARRAYSIZE(SFIII2_A_GOUKI_COLLECTION) },
    { _T("Shin Gouki"), DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_COLLECTION, ARRAYSIZE(SFIII2_A_SHINGOUKI_COLLECTION) },
    { _T("Gill"),   DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_COLLECTION, ARRAYSIZE(SFIII2_A_GILL_COLLECTION) },
    { _T("Bonus"), DESC_NODETYPE_TREE, (void*)SFIII2_A_BONUS_COLLECTION, ARRAYSIZE(SFIII2_A_BONUS_COLLECTION) },
};

constexpr auto SFIII2_A_50_NUMUNIT = ARRAYSIZE(SFIII2_A_50_UNITS);
#define SFIII2_A_50_EXTRALOC SFIII2_A_50_NUMUNIT

const stExtraDef SFIII2_A_EXTRA[] = 
{
    //Start
    { UNIT_START_VALUE },

    //Extra
    { INVALID_UNIT_VALUE }
};

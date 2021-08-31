#pragma once

const UINT16 SFIII2_A_IMGIDS_USED[] =
{
    index3SSprites_Alex,
    index3SSprites_Ryu,
    index3SSprites_Yun,
    index3SSprites_Dudley,
    index3SSprites_Necro,
    index3SSprites_Hugo,
    index3SSprites_Ibuki,
    index3SSprites_Elena,
    index3SSprites_Oro,
    index3SSprites_Yang,
    index3SSprites_Ken,
    index3SSprites_Sean,
    index3SSprites_Urien,
    index3SSprites_Gouki,
    index3SSprites_ShinGouki,
    index3SSprites_Gill,
    indexSF2ISprites_Bonus,
    index3SSprites_Bonus, // for judgement girls
};

const sGame_PaletteDataset SFIII2_A_ALEX_LP_PALETTES[] =
{
    { L"Alex LP", 0x398700, 0x398780, index3SSprites_Alex, 0x00, &pairHandledInCode },
    { L"Alex LP Hud", 0x3cfe60, 0x3cfe80, index3SSprites_Alex, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_MP_PALETTES[] =
{
    { L"Alex MP", 0x398780, 0x398800, index3SSprites_Alex, 0x00, &pairHandledInCode },
    { L"Alex MP Hud", 0x3cfe80, 0x3cfea0, index3SSprites_Alex, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_HP_PALETTES[] =
{
    { L"Alex HP", 0x398800, 0x398880, index3SSprites_Alex, 0x00, &pairHandledInCode },
    { L"Alex HP Hud", 0x3cfea0, 0x3cfec0, index3SSprites_Alex, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_LK_PALETTES[] =
{
    { L"Alex LK", 0x398880, 0x398900, index3SSprites_Alex, 0x00, &pairHandledInCode },
    { L"Alex LK Hud", 0x3cfec0, 0x3cfee0, index3SSprites_Alex, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_MK_PALETTES[] =
{
    { L"Alex MK", 0x398900, 0x398980, index3SSprites_Alex, 0x00, &pairHandledInCode },
    { L"Alex MK Hud", 0x3cfee0, 0x3cff00, index3SSprites_Alex, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_HK_PALETTES[] =
{
    { L"Alex HK ", 0X398980, 0x398a00, index3SSprites_Alex, 0x00, &pairHandledInCode },
    { L"Alex HK Hud", 0x3cff00, 0x3cff20, index3SSprites_Alex, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_EX_PALETTES[] =
{
    { L"Alex EX", 0x398a00, 0x398a80, index3SSprites_Alex, 0x00, &pairHandledInCode },
    { L"Alex EX Hud", 0x3cff20, 0x3cff40, index3SSprites_Alex, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_Support_PALETTES[] =
{
    { L"Alex EX 1", 0x3d0c00, 0x3d0c80, index3SSprites_Alex },
    { L"Alex EX 2", 0x3df580, 0x3df600, index3SSprites_Alex },

    { L"Alex SA1", 0x3d1780, 0x3d1800, index3SSprites_Alex },
    { L"Alex SA2", 0x3d1800, 0x3d1880, index3SSprites_Alex },
    { L"Alex SA3", 0x3d1880, 0x3d1900, index3SSprites_Alex },
    { L"Alex SA4", 0x3d1900, 0x3d1980, index3SSprites_Alex },
    { L"Alex SA5", 0x3d1980, 0x3d1a00, index3SSprites_Alex },
    { L"Alex SA6", 0x3d1a00, 0x3d1a80, index3SSprites_Alex },
    { L"Alex SA7", 0x3d1a80, 0x3d1b00, index3SSprites_Alex },
    { L"Alex SA8", 0x3d1b00, 0x3d1b80, index3SSprites_Alex },

    { L"Alex Iced Effects", 0x39c280, 0x39c300, index3SSprites_Alex },
    { L"Alex Burned Effects", 0x39ca80, 0x39cb00, index3SSprites_Alex },
};

const sGame_PaletteDataset SFIII2_A_ALEX_EXTRA_PALETTES[] =
{
    // Warning: this is a paired palette, so if you change this please ensure UpdatePalImg handles that update correctly
    { L"Alex Flash Chop (shared)", 0x39b900, 0x39b980, index3SSprites_Alex, 0x02 },
};

const sGame_PaletteDataset SFIII2_A_ALEX_PORTRAIT_PALETTES[] =
{
    { L"Alex Select Portrait", 0x3a0d80, 0x3a0e00, index3SSprites_Alex, 0x26 },

    { L"Alex Winning Portrait LP", 0x3a4000, 0x3a4080, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait MP", 0x3a4080, 0x3a4100, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait HP", 0x3a4100, 0x3a4180, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait LK", 0x3a4180, 0x3a4200, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait MK", 0x3a4200, 0x3a4280, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait HK", 0x3a4280, 0x3a4300, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait EX", 0x3a4300, 0x3a4380, index3SSprites_Alex, 0x28 },

    { L"Alex Losing Portrait LP", 0x3a9b00, 0x3a9c00, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait MP", 0x3a9c00, 0x3a9d00, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait HP", 0x3a9d00, 0x3a9e00, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait LK", 0x3a9e00, 0x3a9f00, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait MK", 0x3a9f00, 0x3aa000, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait HK", 0x3aa000, 0x3aa100, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait EX", 0x3aa100, 0x3aa200, index3SSprites_Alex, 0x24 },

    { L"Alex Character Select Icon", 0x3a0880, 0x3a0900, index3SSprites_Alex, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_RYU_LP_PALETTES[] =
{
    { L"Ryu LP", 0x398a80, 0x398b00, index3SSprites_Ryu },
    { L"Ryu LP Hud", 0x3cff40, 0x3cff60, index3SSprites_Ryu, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_RYU_MP_PALETTES[] =
{
    { L"Ryu MP", 0x398b00, 0x398b80, index3SSprites_Ryu },
    { L"Ryu MP Hud", 0x3cff60, 0x3cff80, index3SSprites_Ryu, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_RYU_HP_PALETTES[] =
{
    { L"Ryu HP", 0x398b80, 0x398c00, index3SSprites_Ryu },
    { L"Ryu HP Hud", 0x3cff80, 0x3cffa0, index3SSprites_Ryu, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_RYU_LK_PALETTES[] =
{
    { L"Ryu LK", 0x398c00, 0x398c80, index3SSprites_Ryu },
    { L"Ryu LK Hud", 0x3cffa0, 0x3cffc0, index3SSprites_Ryu, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_RYU_MK_PALETTES[] =
{
    { L"Ryu MK", 0x398c80, 0x398d00, index3SSprites_Ryu },
    { L"Ryu MK Hud", 0x3cffc0, 0x3cffe0, index3SSprites_Ryu, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_RYU_HK_PALETTES[] =
{
    { L"Ryu HK", 0x398d00, 0x398d80, index3SSprites_Ryu },
    { L"Ryu HK Hud", 0x3cffe0, 0x3d0000, index3SSprites_Ryu, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_RYU_EX_PALETTES[] =
{
    { L"Ryu EX", 0x398d80, 0x398e00, index3SSprites_Ryu },
    { L"Ryu EX Hud", 0x3d0000, 0x3d0020, index3SSprites_Ryu, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_RYU_Support_PALETTES[] =
{
    { L"Ryu EX 1", 0x3d0c80, 0x3d0d00, index3SSprites_Ryu },
    { L"Ryu EX 2", 0x3df600, 0x3df680, index3SSprites_Ryu },
    { L"Ryu SA1", 0x3d1b80, 0x3d1c00, index3SSprites_Ryu },
    { L"Ryu SA2", 0x3d1c00, 0x3d1c80, index3SSprites_Ryu },
    { L"Ryu SA3", 0x3d1c80, 0x3d1d00, index3SSprites_Ryu },
    { L"Ryu SA4", 0x3d1d00, 0x3d1d80, index3SSprites_Ryu },
    { L"Ryu SA5", 0x3d1d80, 0x3d1e00, index3SSprites_Ryu },
    { L"Ryu SA6", 0x3d1e00, 0x3d1e80, index3SSprites_Ryu },
    { L"Ryu SA7", 0x3d1e80, 0x3d1f00, index3SSprites_Ryu },
    { L"Ryu SA8", 0x3d1f00, 0x3d1f80, index3SSprites_Ryu },
    { L"Ryu Iced Effects", 0x39c300, 0x39c380, index3SSprites_Ryu },
    { L"Ryu Burned Effects", 0x39cb00, 0x39cb80, index3SSprites_Ryu },
};

const sGame_PaletteDataset SFIII2_A_RYU_EXTRA_PALETTES[] =
{
    { L"Hadouken", 0x39b980, 0x39ba00, index3SSprites_Ryu, 0x2 },
    { L"Hadouken Impact", 0x39ba00, 0x39ba80, index3SSprites_Ryu, 0x3 },
    { L"Shakunetsu (EX Fireball)", 0x39ba80, 0x39bb00, index3SSprites_Ryu, 0x4 },
};

const sGame_PaletteDataset SFIII2_A_RYU_PORTRAIT_PALETTES[] =
{
    { L"Ryu Select Portrait", 0x3a0e00, 0x3a0e80, index3SSprites_Ryu, 0x26 },

    { L"Ryu Winning Portrait LP", 0x3a4380, 0x3a4400, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait MP", 0x3a4400, 0x3a4480, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait HP", 0x3a4480, 0x3a4500, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait LK", 0x3a4500, 0x3a4580, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait MK", 0x3a4580, 0x3a4600, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait HK", 0x3a4600, 0x3a4680, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait EX", 0x3a4680, 0x3a4700, index3SSprites_Ryu, 0x28 },

    { L"Ryu Losing Portrait LP", 0x3aa200, 0x3aa380, index3SSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait MP", 0x3aa380, 0x3aa500, index3SSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait HP", 0x3aa500, 0x3aa680, index3SSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait LK", 0x3aa680, 0x3aa800, index3SSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait MK", 0x3aa800, 0x3aa980, index3SSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait HK", 0x3aa980, 0x3aab00, index3SSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait EX", 0x3aab00, 0x3aac80, index3SSprites_Ryu, 0x24 },

    { L"Ryu Character Select Icon", 0x3a0500, 0x3a0580, index3SSprites_Ryu, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_YUN_LP_PALETTES[] =
{
    { L"Yun LP", 0x398e00, 0x398e80, index3SSprites_Yun },
    { L"Yun LP Hud", 0x3d0020, 0x3d0040, index3SSprites_Yun, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YUN_MP_PALETTES[] =
{
    { L"Yun MP", 0x398e80, 0x398f00, index3SSprites_Yun },
    { L"Yun MP Hud", 0x3d0040, 0x3d0060, index3SSprites_Yun, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YUN_HP_PALETTES[] =
{
    { L"Yun HP", 0x398f00, 0x398f80, index3SSprites_Yun },
    { L"Yun HP Hud", 0x3d0060, 0x3d0080, index3SSprites_Yun, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YUN_LK_PALETTES[] =
{
    { L"Yun LK", 0x398f80, 0x399000, index3SSprites_Yun },
    { L"Yun LK Hud", 0x3d0080, 0x3d00a0, index3SSprites_Yun, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YUN_MK_PALETTES[] =
{
    { L"Yun MK", 0x399000, 0x399080, index3SSprites_Yun },
    { L"Yun MK Hud", 0x3d00a0, 0x3d00c0, index3SSprites_Yun, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YUN_HK_PALETTES[] =
{
    { L"Yun HK", 0x399080, 0x399100, index3SSprites_Yun },
    { L"Yun HK Hud", 0x3d00c0, 0x3d00e0, index3SSprites_Yun, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YUN_EX_PALETTES[] =
{
    { L"Yun EX", 0x399100, 0x399180, index3SSprites_Yun },
    { L"Yun EX Hud", 0x3d00e0, 0x3d0100, index3SSprites_Yun, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YUN_Support_PALETTES[] =
{
    { L"Yun Iced Effects", 0x39c380, 0x39c400, index3SSprites_Yun },
    { L"Yun Burned Effects", 0x39cb80, 0x39cc00, index3SSprites_Yun },
    { L"Yun SA1", 0x3d1f80, 0x3d2000, index3SSprites_Yun },
    { L"Yun SA2", 0x3d2000, 0x3d2080, index3SSprites_Yun },
    { L"Yun SA3", 0x3d2080, 0x3d2100, index3SSprites_Yun },
    { L"Yun SA4", 0x3d2100, 0x3d2180, index3SSprites_Yun },
    { L"Yun SA5", 0x3d2180, 0x3d2200, index3SSprites_Yun },
    { L"Yun SA6", 0x3d2200, 0x3d2280, index3SSprites_Yun },
    { L"Yun SA7", 0x3d2280, 0x3d2300, index3SSprites_Yun },
    { L"Yun SA8", 0x3d2300, 0x3d2380, index3SSprites_Yun },

    { L"Yun EX 1", 0x3d0d00, 0x3d0d80, index3SSprites_Yun },
    { L"Yun EX 2", 0x3df680, 0x3df700, index3SSprites_Yun },
};

const sGame_PaletteDataset SFIII2_A_YUN_PORTRAIT_PALETTES[] =
{
    { L"Yun Select Portrait", 0x3a0e80, 0x3a0f00, index3SSprites_Yun, 0x26 },

#ifdef UNJOINED
    { L"Yun 1 Winning Portrait LP", 0x3a4700, 0x3a4780, index3SSprites_Yun, 0x28 },
    { L"Yun 2 Winning Portrait LP", 0x3a4780, 0x3a4800, index3SSprites_Yun, 0x28 },
    { L"Yun 1 Winning Portrait MP", 0x3a4800, 0x3a4880, index3SSprites_Yun, 0x28 },
    { L"Yun 2 Winning Portrait MP", 0x3a4880, 0x3a4900, index3SSprites_Yun, 0x28 },
    { L"Yun 1 Winning Portrait HP", 0x3a4900, 0x3a4980, index3SSprites_Yun, 0x28 },
    { L"Yun 2 Winning Portrait HP", 0x3a4980, 0x3a4a00, index3SSprites_Yun, 0x28 },
    { L"Yun 1 Winning Portrait LK", 0x3a4a00, 0x3a4a80, index3SSprites_Yun, 0x28 },
    { L"Yun 2 Winning Portrait LK", 0x3a4a80, 0x3a4b00, index3SSprites_Yun, 0x28 },
    { L"Yun 1 Winning Portrait MK", 0x3a4b00, 0x3a4b80, index3SSprites_Yun, 0x28 },
    { L"Yun 2 Winning Portrait MK", 0x3a4b80, 0x3a4c00, index3SSprites_Yun, 0x28 },
    { L"Yun 1 Winning Portrait HK", 0x3a4c00, 0x3a4c80, index3SSprites_Yun, 0x28 },
    { L"Yun 2 Winning Portrait HK", 0x3a4c80, 0x3a4d00, index3SSprites_Yun, 0x28 },
    { L"Yun 1 Winning Portrait EX", 0x3a4d00, 0x3a4d80, index3SSprites_Yun, 0x28 },
    { L"Yun 2 Winning Portrait EX", 0x3a4d80, 0x3a4e00, index3SSprites_Yun, 0x28 },
#else
    { L"Yun Winning Portrait LP", 0x3a4700, 0x3a4800, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait MP", 0x3a4800, 0x3a4900, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait HP", 0x3a4900, 0x3a4a00, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait LK", 0x3a4a00, 0x3a4b00, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait MK", 0x3a4b00, 0x3a4c00, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait HK", 0x3a4c00, 0x3a4d00, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait EX", 0x3a4d00, 0x3a4e00, index3SSprites_Yun, 0x28 },
#endif

    { L"Yun Losing Portrait LP", 0x3aac80, 0x3aae00, index3SSprites_Yun, 0x24 },
    { L"Yun Losing Portrait MP", 0x3aae00, 0x3aaf80, index3SSprites_Yun, 0x24 },
    { L"Yun Losing Portrait HP", 0x3aaf80, 0x3ab100, index3SSprites_Yun, 0x24 },
    { L"Yun Losing Portrait LK", 0x3ab100, 0x3ab280, index3SSprites_Yun, 0x24 },
    { L"Yun Losing Portrait MK", 0x3ab280, 0x3ab400, index3SSprites_Yun, 0x24 },
    { L"Yun Losing Portrait HK", 0x3ab400, 0x3ab580, index3SSprites_Yun, 0x24 },
    { L"Yun Losing Portrait EX", 0x3ab580, 0x3ab700, index3SSprites_Yun, 0x24 },

    { L"Yun Character Select Icon", 0x3a0580, 0x3a0600, index3SSprites_Yun, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_LP_PALETTES[] =
{
    { L"Dudley LP", 0x399180, 0x399200, index3SSprites_Dudley },
    { L"Dudley LP Hud", 0x3d0100, 0x3d0120, index3SSprites_Dudley, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_MP_PALETTES[] =
{
    { L"Dudley MP", 0x399200, 0x399280, index3SSprites_Dudley },
    { L"Dudley MP Hud", 0x3d0120, 0x3d0140, index3SSprites_Dudley, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_HP_PALETTES[] =
{
    { L"Dudley HP", 0x399280, 0x399300, index3SSprites_Dudley },
    { L"Dudley HP Hud", 0x3d0140, 0x3d0160, index3SSprites_Dudley, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_LK_PALETTES[] =
{
    { L"Dudley LK", 0x399300, 0x399380, index3SSprites_Dudley },
    { L"Dudley LK Hud", 0x3d0160, 0x3d0180, index3SSprites_Dudley, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_MK_PALETTES[] =
{
    { L"Dudley MK", 0x399380, 0x399400, index3SSprites_Dudley },
    { L"Dudley MK Hud", 0x3d0180, 0x3d01a0, index3SSprites_Dudley, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_HK_PALETTES[] =
{
    { L"Dudley HK", 0x399400, 0x399480, index3SSprites_Dudley },
    { L"Dudley HK Hud", 0x3d01a0, 0x3d01c0, index3SSprites_Dudley, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_EX_PALETTES[] =
{
    { L"Dudley EX", 0x399480, 0x399500, index3SSprites_Dudley },
    { L"Dudley EX Hud", 0x3d01c0, 0x3d01e0, index3SSprites_Dudley, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_Support_PALETTES[] =
{
    { L"Dudley EX 1", 0x3d0d80, 0x3d0e00, index3SSprites_Dudley },
    { L"Dudley EX 2", 0x3df700, 0x3df780, index3SSprites_Dudley },

    { L"Dudley SA1", 0x3d2380, 0x3d2400, index3SSprites_Dudley },
    { L"Dudley SA2", 0x3d2400, 0x3d2480, index3SSprites_Dudley },
    { L"Dudley SA3", 0x3d2480, 0x3d2500, index3SSprites_Dudley },
    { L"Dudley SA4", 0x3d2500, 0x3d2580, index3SSprites_Dudley },
    { L"Dudley SA5", 0x3d2580, 0x3d2600, index3SSprites_Dudley },
    { L"Dudley SA6", 0x3d2600, 0x3d2680, index3SSprites_Dudley },
    { L"Dudley SA7", 0x3d2680, 0x3d2700, index3SSprites_Dudley },
    { L"Dudley SA8", 0x3d2700, 0x3d2780, index3SSprites_Dudley },

    { L"Dudley Iced Effects", 0x39c400, 0x39c480, index3SSprites_Dudley },
    { L"Dudley Burned Effects", 0x39cc00, 0x39cc80, index3SSprites_Dudley },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_EXTRA_PALETTES[] =
{
    { L"Dudley Intro Car", 0x39bb00, 0x39bb80, index3SSprites_Dudley, 0x03 },
};

const sGame_PaletteDataset SFIII2_A_DUDLEY_PORTRAIT_PALETTES[] =
{
    { L"Dudley Select Portrait", 0x3a0f00, 0x3a0f80, index3SSprites_Dudley, 0x26 },

#ifdef UNJOINED
    { L"Dudley Winning Portrait LP", 0x3a4e00, 0x3a4e80, index3SSprites_Dudley, 0x28 },
    { L"Dudley Butler Winning Portrait LP", 0x3a4e80, 0x3a4f00, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait MP", 0x3a4f00, 0x3a4f80, index3SSprites_Dudley, 0x28 },
    { L"Dudley Butler Winning Portrait MP", 0x3a4f80, 0x3a5000 },
    { L"Dudley Winning Portrait HP", 0x3a5000, 0x3a5080, index3SSprites_Dudley, 0x28 },
    { L"Dudley Butler Winning Portrait HP", 0x3a5080, 0x3a5100 },
    { L"Dudley Winning Portrait LK", 0x3a5100, 0x3a5180, index3SSprites_Dudley, 0x28 },
    { L"Dudley Butler Winning Portrait LK", 0x3a5180, 0x3a5200 },
    { L"Dudley Winning Portrait MK", 0x3a5200, 0x3a5280, index3SSprites_Dudley, 0x28 },
    { L"Dudley Butler Winning Portrait MK", 0x3a5280, 0x3a5300 },
    { L"Dudley Winning Portrait HK", 0x3a5300, 0x3a5380, index3SSprites_Dudley, 0x28 },
    { L"Dudley Butler Winning Portrait HK", 0x3a5380, 0x3a5400 },
    { L"Dudley Winning Portrait EX", 0x3a5400, 0x3a5480, index3SSprites_Dudley, 0x28 },
    { L"Dudley Butler Winning Portrait EX", 0x3a5480, 0x3a5500 },
#else
    { L"Dudley Winning Portrait LP", 0x3a4e00, 0x3a4f00, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait MP", 0x3a4f00, 0x3a5000, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait HP", 0x3a5000, 0x3a5100, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait LK", 0x3a5100, 0x3a5200, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait MK", 0x3a5200, 0x3a5300, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait HK", 0x3a5300, 0x3a5400, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait EX", 0x3a5400, 0x3a5500, index3SSprites_Dudley, 0x28 },
#endif

    { L"Dudley Losing Portrait LP", 0x3ab700, 0x3ab880, index3SSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait MP", 0x3ab880, 0x3aba00, index3SSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait HP", 0x3aba00, 0x3abb80, index3SSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait LK", 0x3abb80, 0x3abd00, index3SSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait MK", 0x3abd00, 0x3abe80, index3SSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait HK", 0x3abe80, 0x3ac000, index3SSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait EX", 0x3ac000, 0x3ac180, index3SSprites_Dudley, 0x24 },

    { L"Dudley Character Select Icon", 0x3a0b00, 0x3a0b80, index3SSprites_Dudley, 0x2a },
};


const sGame_PaletteDataset SFIII2_A_NECRO_LP_PALETTES[] =
{
    { L"Necro LP", 0x399500, 0x399580, index3SSprites_Necro },
    { L"Necro LP Hud", 0x3d01e0, 0x3d0200, index3SSprites_Necro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_MP_PALETTES[] =
{
    { L"Necro MP", 0x399580, 0x399600, index3SSprites_Necro },
    { L"Necro MP Hud", 0x3d0200, 0x3d0220, index3SSprites_Necro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_HP_PALETTES[] =
{
    { L"Necro HP", 0x399600, 0x399680, index3SSprites_Necro },
    { L"Necro HP Hud", 0x3d0220, 0x3d0240, index3SSprites_Necro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_LK_PALETTES[] =
{
    { L"Necro LK", 0x399680, 0x399700, index3SSprites_Necro },
    { L"Necro LK Hud", 0x3d0240, 0x3d0260, index3SSprites_Necro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_MK_PALETTES[] =
{
    { L"Necro MK", 0x399700, 0x399780, index3SSprites_Necro },
    { L"Necro MK Hud", 0x3d0260, 0x3d0280, index3SSprites_Necro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_HK_PALETTES[] =
{
    { L"Necro HK", 0x399780, 0x399800, index3SSprites_Necro },
    { L"Necro HK Hud", 0x3d0280, 0x3d02a0, index3SSprites_Necro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_EX_PALETTES[] =
{
    { L"Necro EX", 0x399800, 0x399880, index3SSprites_Necro },
    { L"Necro EX Hud", 0x3d02a0, 0x3d02c0, index3SSprites_Necro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_Support_PALETTES[] =
{
    { L"Necro EX 1", 0x3d0e00, 0x3d0e80, index3SSprites_Necro },
    { L"Necro EX 2", 0x3df780, 0x3df800, index3SSprites_Necro },

    { L"Necro SA1", 0x3d2780, 0x3d2800, index3SSprites_Necro },
    { L"Necro SA2", 0x3d2800, 0x3d2880, index3SSprites_Necro },
    { L"Necro SA3", 0x3d2880, 0x3d2900, index3SSprites_Necro },
    { L"Necro SA4", 0x3d2900, 0x3d2980, index3SSprites_Necro },
    { L"Necro SA5", 0x3d2980, 0x3d2a00, index3SSprites_Necro },
    { L"Necro SA6", 0x3d2a00, 0x3d2a80, index3SSprites_Necro },
    { L"Necro SA7", 0x3d2a80, 0x3d2b00, index3SSprites_Necro },
    { L"Necro SA8", 0x3d2b00, 0x3d2b80, index3SSprites_Necro },

    { L"Necro Iced Effects", 0x39c480, 0x39c500, index3SSprites_Necro },
    { L"Necro Burned Effects", 0x39cc80, 0x39cd00, index3SSprites_Necro },
};

const sGame_PaletteDataset SFIII2_A_NECRO_EXTRA_PALETTES[] =
{
    { L"Necro LP SA1 Pulse", 0x39d880, 0x39d900, index3SSprites_Necro, 0x00 },
    { L"Necro LP SA1 Trails", 0x39d900, 0x39d980, index3SSprites_Necro, 0x00 },
    { L"Necro LP Effie", 0x39d980, 0x39da00, index3SSprites_Necro, 0x2 },
    { L"Necro MP SA1 Pulse", 0x39da00, 0x39da80, index3SSprites_Necro, 0x00 },
    { L"Necro MP SA1 Trails", 0x39da80, 0x39db00, index3SSprites_Necro, 0x00 },
    { L"Necro MP Effie", 0x39db00, 0x39db80, index3SSprites_Necro, 0x2 },
    { L"Necro HP SA1 Pulse", 0x39db80, 0x39dc00, index3SSprites_Necro, 0x00 },
    { L"Necro HP SA1 Trails", 0x39dc00, 0x39dc80, index3SSprites_Necro, 0x00 },
    { L"Necro HP Effie", 0x39dc80, 0x39dd00, index3SSprites_Necro, 0x2 },
    { L"Necro LK SA1 Pulse", 0x39dd00, 0x39dd80, index3SSprites_Necro, 0x00 },
    { L"Necro LK SA1 Trails", 0x39dd80, 0x39de00, index3SSprites_Necro, 0x00 },
    { L"Necro LK Effie", 0x39de00, 0x39de80, index3SSprites_Necro, 0x2 },
    { L"Necro MK SA1 Pulse", 0x39de80, 0x39df00, index3SSprites_Necro, 0x00 },
    { L"Necro MK SA1 Trails", 0x39df00, 0x39df80, index3SSprites_Necro, 0x00 },
    { L"Necro MK Effie", 0x39df80, 0x39e000, index3SSprites_Necro, 0x2 },
    { L"Necro HK SA1 Pulse", 0x39e000, 0x39e080, index3SSprites_Necro, 0x00 },
    { L"Necro HK SA1 Trails", 0x39e080, 0x39e100, index3SSprites_Necro, 0x00 },
    { L"Necro HK Effie", 0x39e100, 0x39e180, index3SSprites_Necro, 0x2 },
    { L"Necro EX SA1 Pulse", 0x39e180, 0x39e200, index3SSprites_Necro, 0x00 },
    { L"Necro EX SA1 Trails", 0x39e200, 0x39e280, index3SSprites_Necro, 0x00 },
    { L"Necro EX Effie", 0x39e280, 0x39e300, index3SSprites_Necro, 0x2 },
};

const sGame_PaletteDataset SFIII2_A_NECRO_PORTRAIT_PALETTES[] =
{
    { L"Necro Select Portrait", 0x3a0f80, 0x3a1000, index3SSprites_Necro, 0x26 },

    { L"Necro Winning Portrait LP", 0x3a5500, 0x3a5580, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait MP", 0x3a5580, 0x3a5600, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait HP", 0x3a5600, 0x3a5680, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait LK", 0x3a5680, 0x3a5700, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait MK", 0x3a5700, 0x3a5780, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait HK", 0x3a5780, 0x3a5800, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait EX", 0x3a5800, 0x3a5880, index3SSprites_Necro, 0x28 },

    { L"Necro Losing Portrait LP", 0x3ac180, 0x3ac280, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait MP", 0x3ac280, 0x3ac380, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait HP", 0x3ac380, 0x3ac480, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait LK", 0x3ac480, 0x3ac580, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait MK", 0x3ac580, 0x3ac680, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait HK", 0x3ac680, 0x3ac780, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait EX", 0x3ac780, 0x3ac880, index3SSprites_Necro, 0x24 },

    { L"Necro Character Select Icon", 0x3a0900, 0x3a0980, index3SSprites_Necro, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_HUGO_LP_PALETTES[] =
{
    { L"Hugo LP", 0x399880, 0x399900, index3SSprites_Hugo },
    { L"Hugo LP Hud", 0x3d02c0, 0x3d02e0, index3SSprites_Hugo, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_MP_PALETTES[] =
{
    { L"Hugo MP", 0x399900, 0x399980, index3SSprites_Hugo },
    { L"Hugo MP Hud", 0x3d02e0, 0x3d0300, index3SSprites_Hugo, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_HP_PALETTES[] =
{
    { L"Hugo HP", 0x399980, 0x399a00, index3SSprites_Hugo },
    { L"Hugo HP Hud", 0x3d0300, 0x3d0320, index3SSprites_Hugo, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_LK_PALETTES[] =
{
    { L"Hugo LK", 0x399a00, 0x399a80, index3SSprites_Hugo },
    { L"Hugo LK Hud", 0x3d0320, 0x3d0340, index3SSprites_Hugo, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_MK_PALETTES[] =
{
    { L"Hugo MK", 0x399a80, 0x399b00, index3SSprites_Hugo },
    { L"Hugo MK Hud", 0x3d0340, 0x3d0360, index3SSprites_Hugo, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_HK_PALETTES[] =
{
    { L"Hugo HK", 0x399b00, 0x399b80, index3SSprites_Hugo },
    { L"Hugo HK Hud", 0x3d0360, 0x3d0380, index3SSprites_Hugo, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_EX_PALETTES[] =
{
    { L"Hugo EX", 0x399b80, 0x399c00, index3SSprites_Hugo },
    { L"Hugo EX Hud", 0x3d0380, 0x3d03a0, index3SSprites_Hugo, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_HUGO_Support_PALETTES[] =
{
    { L"Hugo EX 1", 0x3d0e80, 0x3d0f00, index3SSprites_Hugo },
    { L"Hugo EX 2", 0x3df800, 0x3df880, index3SSprites_Hugo },

    { L"Hugo SA1", 0x3d2b80, 0x3d2c00, index3SSprites_Hugo },
    { L"Hugo SA2", 0x3d2c00, 0x3d2c80, index3SSprites_Hugo },
    { L"Hugo SA3", 0x3d2c80, 0x3d2d00, index3SSprites_Hugo },
    { L"Hugo SA4", 0x3d2d00, 0x3d2d80, index3SSprites_Hugo },
    { L"Hugo SA5", 0x3d2d80, 0x3d2e00, index3SSprites_Hugo },
    { L"Hugo SA6", 0x3d2e00, 0x3d2e80, index3SSprites_Hugo },
    { L"Hugo SA7", 0x3d2e80, 0x3d2f00, index3SSprites_Hugo },
    { L"Hugo SA8", 0x3d2f00, 0x3d2f80, index3SSprites_Hugo },

    { L"Hugo Iced Effects", 0x39c500, 0x39c580, index3SSprites_Hugo },
    { L"Hugo Burned Effects", 0x39cd00, 0x39cd80, index3SSprites_Hugo },
};

const sGame_PaletteDataset SFIII2_A_HUGO_EXTRA_PALETTES[] =
{
    //Hugo
    { L"Poison P1", 0x3dbe00, 0x3dbe80, index3SSprites_Hugo, 0x02 },
    { L"Poison P2", 0x3dbe80, 0x3dbf00, index3SSprites_Hugo, 0x02 },
    { L"Poison EX", 0x3dbf00, 0x3dbf80, index3SSprites_Hugo, 0x02 },

    { L"Poison P1 Winning Portrait", 0x3a0180, 0x3a0200, index3SSprites_Hugo, 0x27 },
    { L"Poison P2 Winning Portrait", 0x3a0200, 0x3a0280, index3SSprites_Hugo, 0x27 },
    { L"Poison EX Winning Portrait", 0x3a0280, 0x3a0300, index3SSprites_Hugo, 0x27 },

};

const sGame_PaletteDataset SFIII2_A_HUGO_PORTRAIT_PALETTES[] =
{
    { L"Hugo Select Portrait", 0x3a1000, 0x3a1080, index3SSprites_Hugo, 0x26 },

#ifdef UNJOINED
    { L"Hugo 1 Winning Portrait LP", 0x3a5880, 0x3a5900, index3SSprites_Hugo, 0x29 },
    { L"Hugo 2 Winning Portrait LP", 0x3a5900, 0x3a5980 },
    { L"Hugo 1 Winning Portrait MP", 0x3a5980, 0x3a5a00, index3SSprites_Hugo, 0x29 },
    { L"Hugo 2 Winning Portrait MP", 0x3a5a00, 0x3a5a80 },
    { L"Hugo 1 Winning Portrait HP", 0x3a5a80, 0x3a5b00, index3SSprites_Hugo, 0x29 },
    { L"Hugo 2 Winning Portrait HP", 0x3a5b00, 0x3a5b80 },
    { L"Hugo 1 Winning Portrait LK", 0x3a5b80, 0x3a5c00, index3SSprites_Hugo, 0x29 },
    { L"Hugo 2 Winning Portrait LK", 0x3a5c00, 0x3a5c80 },
    { L"Hugo 1 Winning Portrait MK", 0x3a5c80, 0x3a5d00, index3SSprites_Hugo, 0x29 },
    { L"Hugo 2 Winning Portrait MK", 0x3a5d00, 0x3a5d80 },
    { L"Hugo 1 Winning Portrait HK", 0x3a5d80, 0x3a5e00, index3SSprites_Hugo, 0x29 },
    { L"Hugo 2 Winning Portrait HK", 0x3a5e00, 0x3a5e80 },
    { L"Hugo 1 Winning Portrait EX", 0x3a5e80, 0x3a5f00, index3SSprites_Hugo, 0x29 },
    { L"Hugo 2 Winning Portrait EX", 0x3a5f00, 0x3a5f80 },
#else
    { L"Hugo Winning Portrait LP", 0x3a5880, 0x3a5980, index3SSprites_Hugo, 0x28 },
    { L"Hugo Winning Portrait MP", 0x3a5980, 0x3a5a80, index3SSprites_Hugo, 0x28 },
    { L"Hugo Winning Portrait HP", 0x3a5a80, 0x3a5b80, index3SSprites_Hugo, 0x28 },
    { L"Hugo Winning Portrait LK", 0x3a5b80, 0x3a5c80, index3SSprites_Hugo, 0x28 },
    { L"Hugo Winning Portrait MK", 0x3a5c80, 0x3a5d80, index3SSprites_Hugo, 0x28 },
    { L"Hugo Winning Portrait HK", 0x3a5d80, 0x3a5e80, index3SSprites_Hugo, 0x28 },
    { L"Hugo Winning Portrait EX", 0x3a5e80, 0x3a5f80, index3SSprites_Hugo, 0x28 },
#endif

    { L"Hugo Losing Portrait LP", 0x3ac880, 0x3ac980, index3SSprites_Hugo, 0x24 },
    { L"Hugo Losing Portrait MP", 0x3aca00, 0x3acb00, index3SSprites_Hugo, 0x24 },
    { L"Hugo Losing Portrait HP", 0x3acb80, 0x3acc80, index3SSprites_Hugo, 0x24 },
    { L"Hugo Losing Portrait LK", 0x3acd00, 0x3ace00, index3SSprites_Hugo, 0x24 },
    { L"Hugo Losing Portrait MK", 0x3ace80, 0x3acf80, index3SSprites_Hugo, 0x24 },
    { L"Hugo Losing Portrait HK", 0x3ad000, 0x3ad100, index3SSprites_Hugo, 0x24 },
    { L"Hugo Losing Portrait EX", 0x3ad180, 0x3ad280, index3SSprites_Hugo, 0x24 },

    { L"Hugo Character Select Icon", 0x3a0980, 0x3a0a00, index3SSprites_Hugo, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_LP_PALETTES[] =
{
    { L"Ibuki LP", 0x399c00, 0x399c80, index3SSprites_Ibuki },
    { L"Ibuki LP Hud", 0x3d03a0, 0x3d03c0, index3SSprites_Ibuki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_MP_PALETTES[] =
{
    { L"Ibuki MP", 0x399c80, 0x399d00, index3SSprites_Ibuki },
    { L"Ibuki MP Hud", 0x3d03c0, 0x3d03e0, index3SSprites_Ibuki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_HP_PALETTES[] =
{
    { L"Ibuki HP", 0x399d00, 0x399d80, index3SSprites_Ibuki },
    { L"Ibuki HP Hud", 0x3d03e0, 0x3d0400, index3SSprites_Ibuki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_LK_PALETTES[] =
{
    { L"Ibuki LK", 0x399d80, 0x399e00, index3SSprites_Ibuki },
    { L"Ibuki LK Hud", 0x3d0400, 0x3d0420, index3SSprites_Ibuki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_MK_PALETTES[] =
{
    { L"Ibuki MK", 0x399e00, 0x399e80, index3SSprites_Ibuki },
    { L"Ibuki MK Hud", 0x3d0420, 0x3d0440, index3SSprites_Ibuki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_HK_PALETTES[] =
{
    { L"Ibuki HK", 0x399e80, 0x399f00, index3SSprites_Ibuki },
    { L"Ibuki HK Hud", 0x3d0440, 0x3d0460, index3SSprites_Ibuki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_EX_PALETTES[] =
{
    { L"Ibuki EX", 0x399f00, 0x399f80, index3SSprites_Ibuki },
    { L"Ibuki EX Hud", 0x3d0460, 0x3d0480, index3SSprites_Ibuki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_Support_PALETTES[] =
{
    { L"Ibuki EX 1", 0x3d0f00, 0x3d0f80, index3SSprites_Ibuki },
    { L"Ibuki EX 2", 0x3df880, 0x3df900, index3SSprites_Ibuki },

    { L"Ibuki SA1", 0x3d2f80, 0x3d3000, index3SSprites_Ibuki },
    { L"Ibuki SA2", 0x3d3000, 0x3d3080, index3SSprites_Ibuki },
    { L"Ibuki SA3", 0x3d3080, 0x3d3100, index3SSprites_Ibuki },
    { L"Ibuki SA4", 0x3d3100, 0x3d3180, index3SSprites_Ibuki },
    { L"Ibuki SA5", 0x3d3180, 0x3d3200, index3SSprites_Ibuki },
    { L"Ibuki SA6", 0x3d3200, 0x3d3280, index3SSprites_Ibuki },
    { L"Ibuki SA7", 0x3d3280, 0x3d3300, index3SSprites_Ibuki },
    { L"Ibuki SA8", 0x3d3300, 0x3d3380, index3SSprites_Ibuki },

    { L"Ibuki Iced Effects", 0x39c580, 0x39c600, index3SSprites_Ibuki },
    { L"Ibuki Burned Effects", 0x39cd80, 0x39ce00, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_EXTRA_PALETTES[] =
{
    { L"Ibuki LP Extras", 0x39d180, 0x39d200, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki LP Extras 2", 0x39d200, 0x39d280 },
    { L"Ibuki MP Extras", 0x39d280, 0x39d300, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki MP Extras 2", 0x39d300, 0x39d380 },
    { L"Ibuki HP Extras  ", 0x39d380, 0x39d400, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki HP Extras 2", 0x39d400, 0x39d480 },
    { L"Ibuki LK Extras", 0x39d480, 0x39d500, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki LK Extras 2", 0x39d500, 0x39d580 },
    { L"Ibuki MK Extras", 0x39d580, 0x39d600, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki MK Extras 2", 0x39d600, 0x39d680 },
    { L"Ibuki HK Extras ", 0x39d680, 0x39d700, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki HK Extras 2", 0x39d700, 0x39d780 },
    { L"Ibuki EX Extras ", 0x39d780, 0x39d800, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki EX Extras 2", 0x39d800, 0x39d880 },
};

const sGame_PaletteDataset SFIII2_A_IBUKI_PORTRAIT_PALETTES[] =
{
    { L"Ibuki Select Portrait", 0x3a1080, 0x3a1100, index3SSprites_Ibuki, 0x26 },

    { L"Ibuki Winning Portrait LP", 0x3a5f80, 0x3a6000, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait MP", 0x3a6000, 0x3a6080, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait HP", 0x3a6080, 0x3a6100, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait LK", 0x3a6100, 0x3a6180, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait MK", 0x3a6180, 0x3a6200, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait HK", 0x3a6200, 0x3a6280, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait EX", 0x3a6280, 0x3a6300, index3SSprites_Ibuki, 0x28 },

    { L"Ibuki Losing Portrait LP", 0x3ad300, 0x3ad400, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait MP", 0x3ad400, 0x3ad500, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait HP", 0x3ad500, 0x3ad600, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait LK", 0x3ad600, 0x3ad700, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait MK", 0x3ad700, 0x3ad800, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait HK", 0x3ad800, 0x3ad900, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait EX", 0x3ad900, 0x3ada00, index3SSprites_Ibuki, 0x24 },

    { L"Ibuki Character Select Icon", 0x3a0600, 0x3a0680, index3SSprites_Ibuki, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_ELENA_LP_PALETTES[] =
{
    { L"Elena LP", 0x399f80, 0x39a000, index3SSprites_Elena },
    { L"Elena LP Hud", 0x3d0480, 0x3d04a0, index3SSprites_Elena, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_MP_PALETTES[] =
{
    { L"Elena MP", 0x39a000, 0x39a080, index3SSprites_Elena },
    { L"Elena MP Hud", 0x3d04a0, 0x3d04c0, index3SSprites_Elena, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_HP_PALETTES[] =
{
    { L"Elena HP", 0x39a080, 0x39a100, index3SSprites_Elena },
    { L"Elena HP Hud", 0x3d04c0, 0x3d04e0, index3SSprites_Elena, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_LK_PALETTES[] =
{
    { L"Elena LK", 0x39a100, 0x39a180, index3SSprites_Elena },
    { L"Elena LK Hud", 0x3d04e0, 0x3d0500, index3SSprites_Elena, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_MK_PALETTES[] =
{
    { L"Elena MK", 0x39a180, 0x39a200, index3SSprites_Elena },
    { L"Elena MK Hud", 0x3d0500, 0x3d0520, index3SSprites_Elena, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_HK_PALETTES[] =
{
    { L"Elena HK", 0x39a200, 0x39a280, index3SSprites_Elena },
    { L"Elena HK Hud", 0x3d0520, 0x3d0540, index3SSprites_Elena, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_EX_PALETTES[] =
{
    { L"Elena EX", 0x39a280, 0x39a300, index3SSprites_Elena },
    { L"Elena EX Hud", 0x3d0540, 0x3d0560, index3SSprites_Elena, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_EXTRA_PALETTES[] =
{
    { L"Elena Dust", 0x39bb80, 0x39bc00, index3SSprites_Elena, 0x02 },
    { L"Elena Music Notes", 0x39e300, 0x39e380, index3SSprites_Elena, 0x03 },
};

const sGame_PaletteDataset SFIII2_A_ELENA_Support_PALETTES[] =
{
    { L"Elena EX 1", 0x3d0f80, 0x3d1000, index3SSprites_Elena },
    { L"Elena EX 2", 0x3df900, 0x3df980, index3SSprites_Elena },

    { L"Elena SA1", 0x3d3380, 0x3d3400, index3SSprites_Elena },
    { L"Elena SA2", 0x3d3400, 0x3d3480, index3SSprites_Elena },
    { L"Elena SA3", 0x3d3480, 0x3d3500, index3SSprites_Elena },
    { L"Elena SA4", 0x3d3500, 0x3d3580, index3SSprites_Elena },
    { L"Elena SA5", 0x3d3580, 0x3d3600, index3SSprites_Elena },
    { L"Elena SA6", 0x3d3600, 0x3d3680, index3SSprites_Elena},
    { L"Elena SA7", 0x3d3680, 0x3d3700, index3SSprites_Elena },
    { L"Elena SA8", 0x3d3700, 0x3d3780, index3SSprites_Elena },

    { L"Elena Iced Effects", 0x39c600, 0x39c680, index3SSprites_Elena },
    { L"Elena Burned Effects", 0x39ce00, 0x39ce80, index3SSprites_Elena },
};

const sGame_PaletteDataset SFIII2_A_ELENA_PORTRAIT_PALETTES[] =
{
    { L"Elena Select Portrait", 0x3a1100, 0x3a1180, index3SSprites_Elena, 0x26 },

#ifdef UNJOINED
    { L"Elena 1 Winning Portrait LP", 0x3a6300, 0x3a6380, index3SSprites_Elena, 0x28 },
    { L"Elena 2 Winning Portrait LP", 0x3a6380, 0x3a6400, index3SSprites_Elena, 0x28 },
    { L"Elena 1 Winning Portrait MP", 0x3a6400, 0x3a6480, index3SSprites_Elena, 0x28 },
    { L"Elena 2 Winning Portrait MP", 0x3a6480, 0x3a6500, index3SSprites_Elena, 0x28 },
    { L"Elena 1 Winning Portrait HP", 0x3a6500, 0x3a6580, index3SSprites_Elena, 0x28 },
    { L"Elena 2 Winning Portrait HP", 0x3a6580, 0x3a6600, index3SSprites_Elena, 0x28 },
    { L"Elena 1 Winning Portrait LK", 0x3a6600, 0x3a6680, index3SSprites_Elena, 0x28 },
    { L"Elena 2 Winning Portrait LK", 0x3a6680, 0x3a6700, index3SSprites_Elena, 0x28 },
    { L"Elena 1 Winning Portrait MK", 0x3a6700, 0x3a6780, index3SSprites_Elena, 0x28 },
    { L"Elena 2 Winning Portrait MK", 0x3a6780, 0x3a6800, index3SSprites_Elena, 0x28 },
    { L"Elena 1 Winning Portrait HK", 0x3a6800, 0x3a6880, index3SSprites_Elena, 0x28 },
    { L"Elena 2 Winning Portrait HK", 0x3a6880, 0x3a6900, index3SSprites_Elena, 0x28 },
    { L"Elena 1 Winning Portrait EX", 0x3a6900, 0x3a6980, index3SSprites_Elena, 0x28 },
    { L"Elena 2 Winning Portrait EX", 0x3a6980, 0x3a6a00, index3SSprites_Elena, 0x28 },
#else
    { L"Elena Winning Portrait LP", 0x3a6300, 0x3a6400, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait MP", 0x3a6400, 0x3a6500, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait HP", 0x3a6500, 0x3a6600, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait LK", 0x3a6600, 0x3a6700, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait MK", 0x3a6700, 0x3a6800, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait HK", 0x3a6800, 0x3a6900, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait EX", 0x3a6900, 0x3a6a00, index3SSprites_Elena, 0x28 },
#endif

    { L"Elena Losing Portrait LP", 0x3ada00, 0x3adb00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait MP", 0x3adb00, 0x3adc00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait HP", 0x3adc00, 0x3add00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait LK", 0x3add00, 0x3ade00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait MK", 0x3ade00, 0x3adf00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait HK", 0x3adf00, 0x3ae000, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait EX", 0x3ae000, 0x3ae100, index3SSprites_Elena, 0x24 },

    { L"Elena Character Select Icon", 0x3a0700, 0x3a0780, index3SSprites_Elena, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_ORO_LP_PALETTES[] =
{
    { L"Oro LP", 0x39a300, 0x39a380, index3SSprites_Oro },
    { L"Oro LP Hud", 0x3d0560, 0x3d0580, index3SSprites_Oro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ORO_MP_PALETTES[] =
{
    { L"Oro MP", 0x39a380, 0x39a400, index3SSprites_Oro },
    { L"Oro MP Hud", 0x3d0580, 0x3d05a0, index3SSprites_Oro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ORO_HP_PALETTES[] =
{
    { L"Oro HP", 0x39a400, 0x39a480, index3SSprites_Oro },
    { L"Oro HP Hud", 0x3d05a0, 0x3d05c0, index3SSprites_Oro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ORO_LK_PALETTES[] =
{
    { L"Oro LK", 0x39a480, 0x39a500, index3SSprites_Oro },
    { L"Oro LK Hud", 0x3d05c0, 0x3d05e0, index3SSprites_Oro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ORO_MK_PALETTES[] =
{
    { L"Oro MK", 0x39a500, 0x39a580, index3SSprites_Oro },
    { L"Oro MK Hud", 0x3d05e0, 0x3d0600, index3SSprites_Oro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ORO_HK_PALETTES[] =
{
    { L"Oro HK", 0x39a580, 0x39a600, index3SSprites_Oro },
    { L"Oro HK Hud", 0x3d0600, 0x3d0620, index3SSprites_Oro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ORO_EX_PALETTES[] =
{
    { L"Oro EX", 0x39a600, 0x39a680, index3SSprites_Oro },
    { L"Oro EX Hud", 0x3d0620, 0x3d0640, index3SSprites_Oro, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_ORO_Support_PALETTES[] =
{
    { L"Oro EX 1", 0x3d1000, 0x3d1080, index3SSprites_Oro },
    { L"Oro EX 2", 0x3df980, 0x3dfa00, index3SSprites_Oro },

    { L"Oro SA1", 0x3d3780, 0x3d3800, index3SSprites_Oro },
    { L"Oro SA2", 0x3d3800, 0x3d3880, index3SSprites_Oro },
    { L"Oro SA3", 0x3d3880, 0x3d3900, index3SSprites_Oro },
    { L"Oro SA4", 0x3d3900, 0x3d3980, index3SSprites_Oro },
    { L"Oro SA5", 0x3d3980, 0x3d3a00, index3SSprites_Oro },
    { L"Oro SA6", 0x3d3a00, 0x3d3a80, index3SSprites_Oro },
    { L"Oro SA7", 0x3d3a80, 0x3d3b00, index3SSprites_Oro },
    { L"Oro SA8", 0x3d3b00, 0x3d3b80, index3SSprites_Oro },

    { L"Oro Iced Effects", 0x39c680, 0x39c700, index3SSprites_Oro },
    { L"Oro Burned Effects", 0x39ce80, 0x39cf00, index3SSprites_Oro },
};

const sGame_PaletteDataset SFIII2_A_ORO_EXTRA_PALETTES[] =
{
    { L"Fireball + Green Yagyou Dama (SA2)", 0x39bc00, 0x39bc80 },
};

const sGame_PaletteDataset SFIII2_A_ORO_PORTRAIT_PALETTES[] =
{
    { L"Oro Select Portrait", 0x3a1180, 0x3a1200, index3SSprites_Oro, 0x26 },

    { L"Oro Winning Portrait LP", 0x3a6a00, 0x3a6a80, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait MP", 0x3a6a80, 0x3a6b00, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait HP", 0x3a6b00, 0x3a6b80, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait LK", 0x3a6b80, 0x3a6c00, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait MK", 0x3a6c00, 0x3a6c80, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait HK", 0x3a6c80, 0x3a6d00, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait EX", 0x3a6d00, 0x3a6d80, index3SSprites_Oro, 0x28 },

    { L"Oro Losing Portrait LP", 0x3ae100, 0x3ae180, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait MP", 0x3ae180, 0x3ae200, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait HP", 0x3ae200, 0x3ae280, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait LK", 0x3ae280, 0x3ae300, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait MK", 0x3ae300, 0x3ae380, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait HK", 0x3ae380, 0x3ae400, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait EX", 0x3ae400, 0x3ae480, index3SSprites_Oro, 0x24 },

    { L"Oro Character Select Icon", 0x3a0a80, 0x3a0b00, index3SSprites_Oro, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_YANG_LP_PALETTES[] =
{
    { L"Yang LP", 0x39a680, 0x39a700, index3SSprites_Yang },
    { L"Yang LP Hud", 0x3d0640, 0x3d0660, index3SSprites_Yang, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YANG_MP_PALETTES[] =
{
    { L"Yang MP", 0x39a700, 0x39a780, index3SSprites_Yang },
    { L"Yang MP Hud", 0x3d0660, 0x3d0680, index3SSprites_Yang, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YANG_HP_PALETTES[] =
{
    { L"Yang HP", 0x39a780, 0x39a800, index3SSprites_Yang },
    { L"Yang HP Hud", 0x3d0680, 0x3d06a0, index3SSprites_Yang, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YANG_LK_PALETTES[] =
{
    { L"Yang LK", 0x39a800, 0x39a880, index3SSprites_Yang },
    { L"Yang LK Hud", 0x3d06a0, 0x3d06c0, index3SSprites_Yang, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YANG_MK_PALETTES[] =
{
    { L"Yang MK", 0x39a880, 0x39a900, index3SSprites_Yang },
    { L"Yang MK Hud", 0x3d06c0, 0x3d06e0, index3SSprites_Yang, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YANG_HK_PALETTES[] =
{
    { L"Yang HK", 0x39a900, 0x39a980, index3SSprites_Yang },
    { L"Yang HK Hud", 0x3d06e0, 0x3d0700, index3SSprites_Yang, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YANG_EX_PALETTES[] =
{
    { L"Yang EX", 0x39a980, 0x39aa00, index3SSprites_Yang },
    { L"Yang EX Hud", 0x3d0700, 0x3d0720, index3SSprites_Yang, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_YANG_Support_PALETTES[] =
{
    { L"Yang EX 1", 0x3d1080, 0x3d1100, index3SSprites_Yang },
    { L"Yang EX 2", 0x3dfa00, 0x3dfa80, index3SSprites_Yang },

    { L"Yang SA1", 0x3d3b80, 0x3d3c00, index3SSprites_Yang },
    { L"Yang SA2", 0x3d3c00, 0x3d3c80, index3SSprites_Yang },
    { L"Yang SA3", 0x3d3c80, 0x3d3d00, index3SSprites_Yang },
    { L"Yang SA4", 0x3d3d00, 0x3d3d80, index3SSprites_Yang },
    { L"Yang SA5", 0x3d3d80, 0x3d3e00, index3SSprites_Yang },
    { L"Yang SA6", 0x3d3e00, 0x3d3e80, index3SSprites_Yang },
    { L"Yang SA7", 0x3d3e80, 0x3d3f00, index3SSprites_Yang },
    { L"Yang SA8", 0x3d3f00, 0x3d3f80, index3SSprites_Yang },

    { L"Yang Iced Effects", 0x39c700, 0x39c780, index3SSprites_Yang },
    { L"Yang Burned Effects", 0x39cf00, 0x39cf80, index3SSprites_Yang },
};

const sGame_PaletteDataset SFIII2_A_YANG_PORTRAIT_PALETTES[] =
{
    { L"Yang Select Portrait", 0x3a1200, 0x3a1280, index3SSprites_Yang, 0x26 },

    { L"Yang Winning Portrait LP", 0x3a6d80, 0x3a6e00, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait MP", 0x3a6e00, 0x3a6e80, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait HP", 0x3a6e80, 0x3a6f00, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait LK", 0x3a6f00, 0x3a6f80, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait MK", 0x3a6f80, 0x3a7000, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait HK", 0x3a7000, 0x3a7080, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait EX", 0x3a7080, 0x3a7100, index3SSprites_Yang, 0x28 },

    { L"Yang Losing Portrait LP", 0x3ae480, 0x3ae580, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait MP", 0x3ae580, 0x3ae680, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait HP", 0x3ae680, 0x3ae780, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait LK", 0x3ae780, 0x3ae880, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait MK", 0x3ae880, 0x3ae980, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait HK", 0x3ae980, 0x3aea80, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait EX", 0x3aea80, 0x3aeb80, index3SSprites_Yang, 0x24 },

    { L"Yang Character Select Icon", 0x3a0780, 0x3a0800, index3SSprites_Yang, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_KEN_LP_PALETTES[] =
{
    { L"Ken LP", 0x39aa00, 0x39aa80, index3SSprites_Ken },
    { L"Ken LP Hud", 0x3d0720, 0x3d0740, index3SSprites_Ken, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_KEN_MP_PALETTES[] =
{
    { L"Ken MP", 0x39aa80, 0x39ab00, index3SSprites_Ken },
    { L"Ken MP Hud", 0x3d0740, 0x3d0760, index3SSprites_Ken, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_KEN_HP_PALETTES[] =
{
    { L"Ken HP", 0x39ab00, 0x39ab80, index3SSprites_Ken },
    { L"Ken HP Hud", 0x3d0760, 0x3d0780, index3SSprites_Ken, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_KEN_LK_PALETTES[] =
{
    { L"Ken LK", 0x39ab80, 0x39ac00, index3SSprites_Ken },
    { L"Ken LK Hud", 0x3d0780, 0x3d07a0, index3SSprites_Ken, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_KEN_MK_PALETTES[] =
{
    { L"Ken MK", 0x39ac00, 0x39ac80, index3SSprites_Ken },
    { L"Ken MK Hud", 0x3d07a0, 0x3d07c0, index3SSprites_Ken, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_KEN_HK_PALETTES[] =
{
    { L"Ken HK", 0x39ac80, 0x39ad00, index3SSprites_Ken },
    { L"Ken HK Hud", 0x3d07c0, 0x3d07e0, index3SSprites_Ken, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_KEN_EX_PALETTES[] =
{
    { L"Ken EX", 0x39ad00, 0x39ad80, index3SSprites_Ken },
    { L"Ken EX Hud", 0x3d07e0, 0x3d0800, index3SSprites_Ken, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_KEN_Support_PALETTES[] =
{
    { L"Ken EX 1", 0x3d1100, 0x3d1180, index3SSprites_Ken },
    { L"Ken EX 2", 0x3dfa80, 0x3dfb00, index3SSprites_Ken },
    { L"Ken SA1", 0x3d3f80, 0x3d4000, index3SSprites_Ken },
    { L"Ken SA2", 0x3d4000, 0x3d4080, index3SSprites_Ken },
    { L"Ken SA3", 0x3d4080, 0x3d4100, index3SSprites_Ken },
    { L"Ken SA4", 0x3d4100, 0x3d4180, index3SSprites_Ken },
    { L"Ken SA5", 0x3d4180, 0x3d4200, index3SSprites_Ken },
    { L"Ken SA6", 0x3d4200, 0x3d4280, index3SSprites_Ken },
    { L"Ken SA7", 0x3d4280, 0x3d4300, index3SSprites_Ken },
    { L"Ken SA8", 0x3d4300, 0x3d4380, index3SSprites_Ken },
    { L"Ken Iced Effects", 0x39c780, 0x39c800, index3SSprites_Ken },
    { L"Ken Burned Effects", 0x39cf80, 0x39d000, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII2_A_KEN_EXTRA_PALETTES[] =
{
    { L"Ken Hadouken", 0x39bd00, 0x39bd80, index3SSprites_Ken, 0x02 },
    { L"Ken Hadouken Impact", 0x39bd80, 0x39be00, index3SSprites_Ken, 0x03 },
    { L"Ken Shoryuken Flames", 0x39be00, 0x39be80, index3SSprites_Ken, 0x04 },
};

const sGame_PaletteDataset SFIII2_A_KEN_PORTRAIT_PALETTES[] =
{
    { L"Ken Select Portrait", 0x3a1280, 0x3a1300, index3SSprites_Ken, 0x26 },

    { L"Ken Winning Portrait LP", 0x3a7100, 0x3a7180, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait MP", 0x3a7180, 0x3a7200, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait HP", 0x3a7200, 0x3a7280, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait LK", 0x3a7280, 0x3a7300, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait MK", 0x3a7300, 0x3a7380, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait HK", 0x3a7380, 0x3a7400, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait EX", 0x3a7400, 0x3a7480, index3SSprites_Ken, 0x28 },

    { L"Ken Losing Portrait LP", 0x3aeb80, 0x3aec80, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait MP", 0x3aec80, 0x3aed80, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait HP", 0x3aed80, 0x3aee80, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait LK", 0x3aee80, 0x3aef80, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait MK", 0x3aef80, 0x3af080, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait HK", 0x3af080, 0x3af180, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait EX", 0x3af180, 0x3af280, index3SSprites_Ken, 0x24 },

    { L"Ken Character Select Icon", 0x3a0800, 0x3a0880, index3SSprites_Ken, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_SEAN_LP_PALETTES[] =
{
    { L"Sean LP", 0x39ad80, 0x39ae00, index3SSprites_Sean },
    { L"Sean LP Hud", 0x3d0800, 0x3d0820, index3SSprites_Sean, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_MP_PALETTES[] =
{
    { L"Sean MP", 0x39ae00, 0x39ae80, index3SSprites_Sean },
    { L"Sean MP Hud", 0x3d0820, 0x3d0840, index3SSprites_Sean, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_HP_PALETTES[] =
{
    { L"Sean HP", 0x39ae80, 0x39af00, index3SSprites_Sean },
    { L"Sean HP Hud", 0x3d0840, 0x3d0860, index3SSprites_Sean, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_LK_PALETTES[] =
{
    { L"Sean LK", 0x39af00, 0x39af80, index3SSprites_Sean },
    { L"Sean LK Hud", 0x3d0860, 0x3d0880, index3SSprites_Sean, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_MK_PALETTES[] =
{
    { L"Sean MK", 0x39af80, 0x39b000, index3SSprites_Sean },
    { L"Sean MK Hud", 0x3d0880, 0x3d08a0, index3SSprites_Sean, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_HK_PALETTES[] =
{
    { L"Sean HK", 0x39b000, 0x39b080, index3SSprites_Sean },
    { L"Sean HK Hud", 0x3d08a0, 0x3d08c0, index3SSprites_Sean, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_EX_PALETTES[] =
{
    { L"Sean EX", 0x39b080, 0x39b100, index3SSprites_Sean },
    { L"Sean EX Hud", 0x3d08c0, 0x3d08e0, index3SSprites_Sean, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_Support_PALETTES[] =
{
    { L"Sean EX 1", 0x3d1180, 0x3d1200, index3SSprites_Sean },
    { L"Sean EX 2", 0x3dfb00, 0x3dfb80, index3SSprites_Sean },
    { L"Sean SA1", 0x3d4380, 0x3d4400, index3SSprites_Sean },
    { L"Sean SA2", 0x3d4400, 0x3d4480, index3SSprites_Sean },
    { L"Sean SA3", 0x3d4480, 0x3d4500, index3SSprites_Sean },
    { L"Sean SA4", 0x3d4500, 0x3d4580, index3SSprites_Sean },
    { L"Sean SA5", 0x3d4580, 0x3d4600, index3SSprites_Sean },
    { L"Sean SA6", 0x3d4600, 0x3d4680, index3SSprites_Sean },
    { L"Sean SA7", 0x3d4680, 0x3d4700, index3SSprites_Sean },
    { L"Sean SA8", 0x3d4700, 0x3d4780, index3SSprites_Sean },

    { L"Sean Iced Effects", 0x39c800, 0x39c880, index3SSprites_Sean },
    { L"Sean Burned Effects", 0x39d000, 0x39d080, index3SSprites_Sean },
};

const sGame_PaletteDataset SFIII2_A_SEAN_EXTRA_PALETTES[] =
{
    { L"Sean Hadouken", 0x39be80, 0x39bf00 },
};

const sGame_PaletteDataset SFIII2_A_SEAN_PORTRAIT_PALETTES[] =
{
    { L"Sean Select Portrait", 0x3a1300, 0x3a1380, index3SSprites_Sean, 0x26 },

#ifdef UNJOINED
    { L"Sean 1 Winning Portrait LP", 0x3a7480, 0x3a7500, index3SSprites_Sean, 0x28 },
    { L"Sean 2 Winning Portrait LP", 0x3a7500, 0x3a7580, index3SSprites_Sean, 0x28 },
    { L"Sean 1 Winning Portrait MP", 0x3a7580, 0x3a7600, index3SSprites_Sean, 0x28 },
    { L"Sean 2 Winning Portrait MP", 0x3a7600, 0x3a7680, index3SSprites_Sean, 0x28 },
    { L"Sean 1 Winning Portrait HP", 0x3a7680, 0x3a7700, index3SSprites_Sean, 0x28 },
    { L"Sean 2 Winning Portrait HP", 0x3a7700, 0x3a7780, index3SSprites_Sean, 0x28 },
    { L"Sean 1 Winning Portrait LK", 0x3a7780, 0x3a7800, index3SSprites_Sean, 0x28 },
    { L"Sean 2 Winning Portrait LK", 0x3a7800, 0x3a7880, index3SSprites_Sean, 0x28 },
    { L"Sean 1 Winning Portrait MK", 0x3a7880, 0x3a7900, index3SSprites_Sean, 0x28 },
    { L"Sean 2 Winning Portrait MK", 0x3a7900, 0x3a7980, index3SSprites_Sean, 0x28 },
    { L"Sean 1 Winning Portrait HK", 0x3a7980, 0x3a7a00, index3SSprites_Sean, 0x28 },
    { L"Sean 2 Winning Portrait HK", 0x3a7a00, 0x3a7a80, index3SSprites_Sean, 0x28 },
    { L"Sean 1 Winning Portrait EX", 0x3a7a80, 0x3a7b00, index3SSprites_Sean, 0x28 },
    { L"Sean 2 Winning Portrait EX", 0x3a7b00, 0x3a7b80, index3SSprites_Sean, 0x28 },
#else
    { L"Sean Winning Portrait LP", 0x3a7480, 0x3a7580, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait MP", 0x3a7580, 0x3a7680, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait HP", 0x3a7680, 0x3a7780, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait LK", 0x3a7780, 0x3a7880, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait MK", 0x3a7880, 0x3a7980, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait HK", 0x3a7980, 0x3a7a80, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait EX", 0x3a7a80, 0x3a7b80, index3SSprites_Sean, 0x28 },
#endif

    { L"Sean Losing Portrait LP", 0x3af280, 0x3af400, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait MP", 0x3af400, 0x3af580, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait HP", 0x3af580, 0x3af700, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait LK", 0x3af700, 0x3af880, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait MK", 0x3af880, 0x3afa00, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait HK", 0x3afa00, 0x3afb80, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait EX", 0x3afb80, 0x3afd00, index3SSprites_Sean, 0x24 },

    { L"Sean Character Select Icon", 0x3a0680, 0x3a0700, index3SSprites_Sean, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_URIEN_LP_PALETTES[] =
{
    { L"Urien LP", 0x39b100, 0x39b180, index3SSprites_Urien },
    { L"Urien LP Hud", 0x3d08e0, 0x3d0900, index3SSprites_Urien, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_MP_PALETTES[] =
{
    { L"Urien MP", 0x39b180, 0x39b200, index3SSprites_Urien },
    { L"Urien MP Hud", 0x3d0900, 0x3d0920, index3SSprites_Urien, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_HP_PALETTES[] =
{
    { L"Urien HP", 0x39b200, 0x39b280, index3SSprites_Urien },
    { L"Urien HP Hud", 0x3d0920, 0x3d0940, index3SSprites_Urien, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_LK_PALETTES[] =
{
    { L"Urien LK", 0x39b280, 0x39b300, index3SSprites_Urien },
    { L"Urien LK Hud", 0x3d0940, 0x3d0960, index3SSprites_Urien, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_MK_PALETTES[] =
{
    { L"Urien MK", 0x39b300, 0x39b380, index3SSprites_Urien },
    { L"Urien MK Hud", 0x3d0960, 0x3d0980, index3SSprites_Urien, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_HK_PALETTES[] =
{
    { L"Urien HK", 0x39b380, 0x39b400, index3SSprites_Urien },
    { L"Urien HK Hud", 0x3d0980, 0x3d09a0, index3SSprites_Urien, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_EX_PALETTES[] =
{
    { L"Urien EX", 0x39b400, 0x39b480, index3SSprites_Urien },
    { L"Urien EX Hud", 0x3d09a0, 0x3d09c0, index3SSprites_Urien, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_Support_PALETTES[] =
{
    { L"Urien EX 1", 0x3d1200, 0x3d1280, index3SSprites_Urien },
    { L"Urien EX 2", 0x3dfb80, 0x3dfc00, index3SSprites_Urien },
    { L"Urien SA1", 0x3d4780, 0x3d4800, index3SSprites_Urien },
    { L"Urien SA2", 0x3d4800, 0x3d4880, index3SSprites_Urien },
    { L"Urien SA3", 0x3d4880, 0x3d4900, index3SSprites_Urien },
    { L"Urien SA4", 0x3d4900, 0x3d4980, index3SSprites_Urien },
    { L"Urien SA5", 0x3d4980, 0x3d4a00, index3SSprites_Urien },
    { L"Urien SA6", 0x3d4a00, 0x3d4a80, index3SSprites_Urien },
    { L"Urien SA7", 0x3d4a80, 0x3d4b00, index3SSprites_Urien },
    { L"Urien SA8", 0x3d4b00, 0x3d4b80, index3SSprites_Urien },
    { L"Urien Iced Effects", 0x39c880, 0x39c900, index3SSprites_Urien },
    { L"Urien Burned Effects", 0x39d080, 0x39d100, index3SSprites_Urien },
};

const sGame_PaletteDataset SFIII2_A_URIEN_EXTRA_PALETTES[] =
{
    { L"P1 Intro", 0x39bf00, 0x39bf80, index3SSprites_Urien, 0x00, &pairHandledInCode },
    { L"P1 Suit", 0x39bf80, 0x39c000, index3SSprites_Urien, 0x03 }, // Note that for pairing we use an alt image.
    { L"P1 SA3 / Fire / Blood", 0x39c000, 0x39c080 },

    { L"P2 Intro", 0x3e0280, 0x3e0300, index3SSprites_Urien, 0x00, &pairHandledInCode },
    { L"P2 Suit", 0x3e0300, 0x3e0380, index3SSprites_Urien, 0x03 },
    { L"P2 SA3 / Fire / Blood", 0x3e0380, 0x3e0400 },

    { L"Electroball", 0x39c080, 0x39c100 },
    { L"SA2 / Big Electroball", 0x39c100, 0x39c180, index3SSprites_Urien, 0x04 },
};

const sGame_PaletteDataset SFIII2_A_URIEN_PORTRAIT_PALETTES[] =
{
    { L"Urien Select Portrait", 0x3a1380, 0x3a1400, index3SSprites_Urien, 0x26 },

#ifdef UNJOINED
    { L"Urien 1 Winning Portrait LP", 0x3a7b80, 0x3a7c00, index3SSprites_Urien, 0x28 },
    { L"Urien 2 Winning Portrait LP", 0x3a7c00, 0x3a7c80, index3SSprites_Urien, 0x28 },
    { L"Urien 1 Winning Portrait MP", 0x3a7c80, 0x3a7d00, index3SSprites_Urien, 0x28 },
    { L"Urien 2 Winning Portrait MP", 0x3a7d00, 0x3a7d80, index3SSprites_Urien, 0x28 },
    { L"Urien 1 Winning Portrait HP", 0x3a7d80, 0x3a7e00, index3SSprites_Urien, 0x28 },
    { L"Urien 2 Winning Portrait HP", 0x3a7e00, 0x3a7e80, index3SSprites_Urien, 0x28 },
    { L"Urien 1 Winning Portrait LK", 0x3a7e80, 0x3a7f00, index3SSprites_Urien, 0x28 },
    { L"Urien 2 Winning Portrait LK", 0x3a7f00, 0x3a7f80, index3SSprites_Urien, 0x28 },
    { L"Urien 1 Winning Portrait MK", 0x3a7f80, 0x3a8000, index3SSprites_Urien, 0x28 },
    { L"Urien 2 Winning Portrait MK", 0x3a8000, 0x3a8080, index3SSprites_Urien, 0x28 },
    { L"Urien 1 Winning Portrait HK", 0x3a8080, 0x3a8100, index3SSprites_Urien, 0x28 },
    { L"Urien 2 Winning Portrait HK", 0x3a8100, 0x3a8180, index3SSprites_Urien, 0x28 },
    { L"Urien 1 Winning Portrait EX", 0x3a8180, 0x3a8200, index3SSprites_Urien, 0x28 },
    { L"Urien 2 Winning Portrait EX", 0x3a8200, 0x3a8280, index3SSprites_Urien, 0x28 },
#else
    { L"Urien Winning Portrait LP", 0x3a7b80, 0x3a7c80, index3SSprites_Urien, 0x28 },
    { L"Urien Winning Portrait MP", 0x3a7c80, 0x3a7d80, index3SSprites_Urien, 0x28 },
    { L"Urien Winning Portrait HP", 0x3a7d80, 0x3a7e80, index3SSprites_Urien, 0x28 },
    { L"Urien Winning Portrait LK", 0x3a7e80, 0x3a7f80, index3SSprites_Urien, 0x28 },
    { L"Urien Winning Portrait MK", 0x3a7f80, 0x3a8080, index3SSprites_Urien, 0x28 },
    { L"Urien Winning Portrait HK", 0x3a8080, 0x3a8180, index3SSprites_Urien, 0x28 },
    { L"Urien Winning Portrait EX", 0x3a8180, 0x3a8280, index3SSprites_Urien, 0x28 },
#endif

    { L"Urien Losing Portrait LP", 0x3afd00, 0x3afd80, index3SSprites_Urien, 0x24 },
    { L"Urien Losing Portrait MP", 0x3afe80, 0x3aff00, index3SSprites_Urien, 0x24 },
    { L"Urien Losing Portrait HP", 0x3b0000, 0x3b0080, index3SSprites_Urien, 0x24 },
    { L"Urien Losing Portrait LK", 0x3b0180, 0x3b0200, index3SSprites_Urien, 0x24 },
    { L"Urien Losing Portrait MK", 0x3b0300, 0x3b0380, index3SSprites_Urien, 0x24 },
    { L"Urien Losing Portrait HK", 0x3b0480, 0x3b0500, index3SSprites_Urien, 0x24 },
    { L"Urien Losing Portrait EX", 0x3b0600, 0x3b0680, index3SSprites_Urien, 0x24 },

    { L"Urien Character Select Icon", 0x3a0a00, 0x3a0a80, index3SSprites_Urien, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_LP_PALETTES[] =
{
    { L"Gouki LP", 0x39b480, 0x39b500, index3SSprites_Gouki },
    { L"Gouki LP Hud", 0x3d09c0, 0x3d09e0, index3SSprites_Gouki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_MP_PALETTES[] =
{
    { L"Gouki MP", 0x39b500, 0x39b580, index3SSprites_Gouki },
    { L"Gouki MP Hud", 0x3d09e0, 0x3d0a00, index3SSprites_Gouki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_HP_PALETTES[] =
{
    { L"Gouki HP", 0x39b580, 0x39b600, index3SSprites_Gouki },
    { L"Gouki HP Hud", 0x3d0a00, 0x3d0a20, index3SSprites_Gouki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_LK_PALETTES[] =
{
    { L"Gouki LK", 0x39b600, 0x39b680, index3SSprites_Gouki },
    { L"Gouki LK Hud", 0x3d0a20, 0x3d0a40, index3SSprites_Gouki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_MK_PALETTES[] =
{
    { L"Gouki MK", 0x39b680, 0x39b700, index3SSprites_Gouki },
    { L"Gouki MK Hud", 0x3d0a40, 0x3d0a60, index3SSprites_Gouki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_HK_PALETTES[] =
{
    { L"Gouki HK", 0x39b700, 0x39b780, index3SSprites_Gouki },
    { L"Gouki HK Hud", 0x3d0a60, 0x3d0a80, index3SSprites_Gouki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_EX_PALETTES[] =
{
    { L"Gouki EX", 0x39b780, 0x39b800, index3SSprites_Gouki },
    { L"Gouki EX Hud", 0x3d0a80, 0x3d0aa0, index3SSprites_Gouki, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_Support_PALETTES[] =
{
    { L"Gouki EX 1 (Unused)", 0x3d1280, 0x3d1300, index3SSprites_Gouki },
    { L"Gouki EX 2 (Unused)", 0x3dfc00, 0x3dfc80, index3SSprites_Gouki },
    { L"Gouki SA1", 0x3d4b80, 0x3d4c00, index3SSprites_Gouki },
    { L"Gouki SA2", 0x3d4c00, 0x3d4c80, index3SSprites_Gouki },
    { L"Gouki SA3", 0x3d4c80, 0x3d4d00, index3SSprites_Gouki },
    { L"Gouki SA4", 0x3d4d00, 0x3d4d80, index3SSprites_Gouki },
    { L"Gouki SA5", 0x3d4d80, 0x3d4e00, index3SSprites_Gouki },
    { L"Gouki SA6", 0x3d4e00, 0x3d4e80, index3SSprites_Gouki },
    { L"Gouki SA7", 0x3d4e80, 0x3d4f00, index3SSprites_Gouki },
    { L"Gouki SA8", 0x3d4f00, 0x3d4f80, index3SSprites_Gouki },

    { L"Gouki Iced Effects", 0x39c900, 0x39c980, index3SSprites_Gouki },
    { L"Gouki Burned Effects", 0x39d100, 0x39d180, index3SSprites_Gouki },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_EXTRA_PALETTES[] =
{
    { L"Kongou Kokuretzu Zan / Fireball", 0x3dab00, 0x3dab80, index3SSprites_Gouki, 0x04 },
    { L"Messatsu Go Hadou / Air Fireball", 0x3dab80, 0x3dac00, index3SSprites_Gouki, 0x03 },

    { L"SA Animation 4", 0x3dac00, 0x3dac80 },
};

const sGame_PaletteDataset SFIII2_A_GOUKI_PORTRAIT_PALETTES[] =
{
    { L"Gouki Select Portrait", 0x3a1400, 0x3a1480, index3SSprites_Gouki, 0x26 },

    { L"Gouki Winning Portrait LP", 0x3a8280, 0x3a8300, index3SSprites_Gouki, 0x28 },
    { L"Gouki Winning Portrait MP", 0x3a8380, 0x3a8400, index3SSprites_Gouki, 0x28 },
    { L"Gouki Winning Portrait HP", 0x3a8480, 0x3a8500, index3SSprites_Gouki, 0x28 },
    { L"Gouki Winning Portrait LK", 0x3a8580, 0x3a8600, index3SSprites_Gouki, 0x28 },
    { L"Gouki Winning Portrait MK", 0x3a8680, 0x3a8700, index3SSprites_Gouki, 0x28 },
    { L"Gouki Winning Portrait HK", 0x3a8780, 0x3a8800, index3SSprites_Gouki, 0x28 },
    { L"Gouki Winning Portrait EX", 0x3a8880, 0x3a8900, index3SSprites_Gouki, 0x28 },

    { L"Gouki Losing Portrait LP", 0x3b0780, 0x3b0880, index3SSprites_Gouki, 0x24 },
    { L"Gouki Losing Portrait MP", 0x3b0900, 0x3b0a00, index3SSprites_Gouki, 0x24 },
    { L"Gouki Losing Portrait HP", 0x3b0a80, 0x3b0b80, index3SSprites_Gouki, 0x24 },
    { L"Gouki Losing Portrait LK", 0x3b0c00, 0x3b0d00, index3SSprites_Gouki, 0x24 },
    { L"Gouki Losing Portrait MK", 0x3b0d80, 0x3b0e80, index3SSprites_Gouki, 0x24 },
    { L"Gouki Losing Portrait HK", 0x3b0f00, 0x3b1000, index3SSprites_Gouki, 0x24 },
    { L"Gouki Losing Portrait EX", 0x3b1080, 0x3b1180, index3SSprites_Gouki, 0x24 },

    { L"Gouki Green Blood Losing Portrait LP", 0x3b0880, 0x3b0900, index3SSprites_Gouki, 0x25 },
    { L"Gouki Green Blood Losing Portrait MP", 0x3b0a00, 0x3b0a80, index3SSprites_Gouki, 0x25 },
    { L"Gouki Green Blood Losing Portrait HP", 0x3b0b80, 0x3b0c00, index3SSprites_Gouki, 0x25 },
    { L"Gouki Green Blood Losing Portrait LK", 0x3b0d00, 0x3b0d80, index3SSprites_Gouki, 0x25 },
    { L"Gouki Green Blood Losing Portrait MK", 0x3b0e80, 0x3b0f00, index3SSprites_Gouki, 0x25 },
    { L"Gouki Green Blood Losing Portrait HK", 0x3b1000, 0x3b1080, index3SSprites_Gouki, 0x25 },
    { L"Gouki Green Blood Losing Portrait EX", 0x3b1180, 0x3b1200, index3SSprites_Gouki, 0x25 },

    { L"Gouki Character Select Icon", 0x3a0b80, 0x3a0c00, index3SSprites_Gouki, 0x2a },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_LP_PALETTES[] =
{
    { L"Shin Gouki P1", 0x3dac80, 0x3dad00, index3SSprites_Gouki },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_MP_PALETTES[] =
{
    { L"Shin Gouki P2", 0x3dad00, 0x3dad80, index3SSprites_Gouki },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_Support_PALETTES[] =
{
    { L"Shin Gouki EX 1 (Unused)", 0x3d1300, 0x3d1380, index3SSprites_Gouki },
    { L"Shin Gouki EX 2 (Unused)", 0x3dfc80, 0x3dfd00, index3SSprites_Gouki },

    { L"Shin Gouki SA1", 0x3d4f80, 0x3d5000, index3SSprites_Gouki },
    { L"Shin Gouki SA2", 0x3d5000, 0x3d5080, index3SSprites_Gouki },
    { L"Shin Gouki SA3", 0x3d5080, 0x3d5100, index3SSprites_Gouki },
    { L"Shin Gouki SA4", 0x3d5100, 0x3d5180, index3SSprites_Gouki },
    { L"Shin Gouki SA5", 0x3d5180, 0x3d5200, index3SSprites_Gouki },
    { L"Shin Gouki SA6", 0x3d5200, 0x3d5280, index3SSprites_Gouki },
    { L"Shin Gouki SA7", 0x3d5280, 0x3d5300, index3SSprites_Gouki },
    { L"Shin Gouki SA8", 0x3d5300, 0x3d5380, index3SSprites_Gouki },

    { L"Shin Gouki LP Hud", 0x3d0aa0, 0x3d0ac0, index3SSprites_Gouki, 0x23 },
    { L"Shin Gouki MP Hud", 0x3d0ac0, 0x3d0ae0, index3SSprites_Gouki, 0x23 },
    { L"Shin Gouki HP Hud", 0x3d0ae0, 0x3d0b00, index3SSprites_Gouki, 0x23 },
    { L"Shin Gouki LK Hud", 0x3d0b00, 0x3d0b20, index3SSprites_Gouki, 0x23 },
    { L"Shin Gouki MK Hud", 0x3d0b20, 0x3d0b40, index3SSprites_Gouki, 0x23 },
    { L"Shin Gouki HK Hud", 0x3d0b40, 0x3d0b60, index3SSprites_Gouki, 0x23 },
    { L"Shin Gouki EX Hud", 0x3d0b60, 0x3d0b80, index3SSprites_Gouki, 0x23 },

    { L"Shin Gouki Iced Effects", 0x3e0580, 0x3e0600, index3SSprites_Gouki },
    { L"Shin Gouki Fire Effects", 0x3e0600, 0x3e0680, index3SSprites_Gouki },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_EXTRA_PALETTES[] =
{
    { L"Shin Gouki Fireball", 0x3e0400, 0x3e0480, index3SSprites_Gouki, 0x04 },
    { L"Shin Gouki MGH/Air Fireball", 0x3e0480, 0x3e0500, index3SSprites_Gouki, 0x03 },
    { L"Shin Gouki something", 0x3e0500, 0x3e0580 },
};

const sGame_PaletteDataset SFIII2_A_SHINGOUKI_PORTRAIT_PALETTES[] =
{
    { L"Shin Gouki Winning Portrait P1/LP", 0x3a8980, 0x3a8a00, index3SSprites_Gouki, 0x28 },
    { L"Shin Gouki Winning Portrait P2/MP", 0x3a8a80, 0x3a8b00, index3SSprites_Gouki, 0x28 },

    { L"Shin Gouki Losing Portrait P1/LP", 0x3b1200, 0x3b1300, index3SSprites_Gouki, 0x24 },
    { L"Shin Gouki Losing Portrait P2/MP", 0x3b1380, 0x3b1480, index3SSprites_Gouki, 0x24 },

    { L"Shin Gouki Green Blood Losing Portrait P1/LP", 0x3b1300, 0x3b1380, index3SSprites_Gouki, 0x25 },
    { L"Shin Gouki Green Blood Losing Portrait P2/MP", 0x3b1480, 0x3b1500, index3SSprites_Gouki, 0x25 },

    { L"Shin Gouki Winning Portrait HP", 0x3a8b80, 0x3a8c00, index3SSprites_Gouki, 0x28 },
    { L"Shin Gouki Winning Portrait LK", 0x3a8c80, 0x3a8d00, index3SSprites_Gouki, 0x28 },
    { L"Shin Gouki Winning Portrait MK", 0x3a8d80, 0x3a8e00, index3SSprites_Gouki, 0x28 },
    { L"Shin Gouki Winning Portrait HK", 0x3a8e80, 0x3a8f00, index3SSprites_Gouki, 0x28 },
    { L"Shin Gouki Winning Portrait EX", 0x3a8f80, 0x3a9000, index3SSprites_Gouki, 0x28 },

    { L"Shin Gouki Losing Portrait HP", 0x3b1500, 0x3b1600, index3SSprites_Gouki, 0x24 },
    { L"Shin Gouki Losing Portrait LK", 0x3b1680, 0x3b1780, index3SSprites_Gouki, 0x24 },
    { L"Shin Gouki Losing Portrait MK", 0x3b1800, 0x3b1900, index3SSprites_Gouki, 0x24 },
    { L"Shin Gouki Losing Portrait HK", 0x3b1980, 0x3b1a80, index3SSprites_Gouki, 0x24 },
    { L"Shin Gouki Losing Portrait EX", 0x3b1b00, 0x3b1c00, index3SSprites_Gouki, 0x24 },


    { L"Shin Gouki Green Blood Losing Portrait HP", 0x3b1600, 0x3b1680, index3SSprites_Gouki, 0x25 },
    { L"Shin Gouki Green Blood Losing Portrait LK", 0x3b1780, 0x3b1800, index3SSprites_Gouki, 0x25 },
    { L"Shin Gouki Green Blood Losing Portrait MK", 0x3b1900, 0x3b1980, index3SSprites_Gouki, 0x25 },
    { L"Shin Gouki Green Blood Losing Portrait HK", 0x3b1a80, 0x3b1b00, index3SSprites_Gouki, 0x25 },
    { L"Shin Gouki Green Blood Losing Portrait EX", 0x3b1c00, 0x3b1c80, index3SSprites_Gouki, 0x25 },
};

const sGame_PaletteDataset SFIII2_A_GILL_LP_PALETTES[] =
{
    { L"Facing Left", 0x398000, 0x398080, index3SSprites_Gill, 0x01 },
    { L"Facing Right", 0x398080, 0x398100, index3SSprites_Gill, 0x0 },
    { L"Gill LP Hud", 0x3cfd80, 0x3cfda0, index3SSprites_Gill, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GILL_MP_PALETTES[] =
{
    { L"Facing Left", 0x398100, 0x398180, index3SSprites_Gill, 0x01 },
    { L"Facing Right", 0x398180, 0x398200, index3SSprites_Gill, 0x0 },
    { L"Gill MP Hud", 0x3cfda0, 0x3cfdc0, index3SSprites_Gill, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GILL_HP_PALETTES[] =
{
    { L"Facing Left", 0x398200, 0x398280, index3SSprites_Gill, 0x01 },
    { L"Facing Right", 0x398280, 0x398300, index3SSprites_Gill, 0x0 },
    { L"Gill HP Hud", 0x3cfdc0, 0x3cfde0, index3SSprites_Gill, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GILL_LK_PALETTES[] =
{
    { L"Facing Left", 0x398300, 0x398380, index3SSprites_Gill, 0x01 },
    { L"Facing Right", 0x398380, 0x398400, index3SSprites_Gill, 0x0 },
    { L"Gill LK Hud", 0x3cfde0, 0x3cfe00, index3SSprites_Gill, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GILL_MK_PALETTES[] =
{
    { L"Facing Left", 0x398400, 0x398480, index3SSprites_Gill, 0x01 },
    { L"Facing Right", 0x398480, 0x398500, index3SSprites_Gill, 0x0 },
    { L"Gill MK Hud", 0x3cfe00, 0x3cfe20, index3SSprites_Gill, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GILL_HK_PALETTES[] =
{
    { L"Facing Left", 0x398500, 0x398580, index3SSprites_Gill, 0x01 },
    { L"Facing Right", 0x398580, 0x398600, index3SSprites_Gill, 0x0 },
    { L"Gill HK Hud", 0x3cfe20, 0x3cfe40, index3SSprites_Gill, 0x23 },
};

const sGame_PaletteDataset SFIII2_A_GILL_Support_PALETTES[] =
{
    { L"Gill EX 1", 0x3d0b80, 0x3d0c00, index3SSprites_Gill, 0x01 },
    { L"Gill EX 2", 0x3df500, 0x3df580, index3SSprites_Gill, 0x01 },

    { L"Gill SA1", 0x3d1380, 0x3d1400, index3SSprites_Gill, 0x01 },
    { L"Gill SA2", 0x3d1400, 0x3d1480, index3SSprites_Gill, 0x01 },
    { L"Gill SA3", 0x3d1480, 0x3d1500, index3SSprites_Gill, 0x01 },
    { L"Gill SA4", 0x3d1500, 0x3d1580, index3SSprites_Gill, 0x01 },
    { L"Gill SA5", 0x3d1580, 0x3d1600, index3SSprites_Gill, 0x01 },
    { L"Gill SA6", 0x3d1600, 0x3d1680, index3SSprites_Gill, 0x01 },
    { L"Gill SA7", 0x3d1680, 0x3d1700, index3SSprites_Gill, 0x01 },
    { L"Gill SA8", 0x3d1700, 0x3d1780, index3SSprites_Gill, 0x01 },

    { L"Gill Right Iced Effects", 0x39c180, 0x39c200, index3SSprites_Gill, 0x01 },
    { L"Gill Left Iced Effects", 0x39c200, 0x39c280, index3SSprites_Gill, 0x00 },
    { L"Gill Right Burned Effects", 0x39c980, 0x39ca00, index3SSprites_Gill, 0x01 },
    { L"Gill Left Burned Effects", 0x39ca00, 0x39ca80, index3SSprites_Gill, 0x00 },
};

const sGame_PaletteDataset SFIII2_A_GILL_EXTRA_PALETTES[] =
{
    { L"Ice / Fire", 0x39b880, 0x39b900, index3SSprites_Gill, 0x02 },
    { L"Ice / Fire Impacts", 0x39b800, 0x39b880, index3SSprites_Gill, 0x03 },
};

const sGame_PaletteDataset SFIII2_A_GILL_PORTRAIT_PALETTES[] =
{
    { L"Gill EX Hud (Unused Maybe)", 0x3cfe40, 0x3cfe60, index3SSprites_Gill, 0x23 },

    { L"Gill Left Select Portrait", 0x3a0d00, 0x3a0d80, index3SSprites_Gill, 0x26 },
    { L"Gill Right Select Portrait", 0x3a2100, 0x3a2180, index3SSprites_Gill, 0x27 },

    { L"Gill Left Winning Portrait", 0x3a3c80, 0x3a3d00, index3SSprites_Gill, 0x28 },
    { L"Gill Right Winning Portrait", 0x3a3d00, 0x3a3d80, index3SSprites_Gill, 0x29 },
    { L"Gill Left Losing Portrait", 0x3a9080, 0x3a9200, index3SSprites_Gill, 0x24 },
    { L"Gill Right Losing Portrait", 0x3a9200, 0x3a9380, index3SSprites_Gill, 0x25 },

    { L"Gill Character Select Icon", 0x3a2080, 0x3a2100, index3SSprites_Gill, 0x2a },
};

const sDescTreeNode SFIII2_A_ALEX_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_LP_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_MP_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_HP_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_LK_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_MK_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_HK_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_EX_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_Support_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_ALEX_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_RYU_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_LP_PALETTES, ARRAYSIZE(SFIII2_A_RYU_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_MP_PALETTES, ARRAYSIZE(SFIII2_A_RYU_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_HP_PALETTES, ARRAYSIZE(SFIII2_A_RYU_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_LK_PALETTES, ARRAYSIZE(SFIII2_A_RYU_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_MK_PALETTES, ARRAYSIZE(SFIII2_A_RYU_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_HK_PALETTES, ARRAYSIZE(SFIII2_A_RYU_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_EX_PALETTES, ARRAYSIZE(SFIII2_A_RYU_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_Support_PALETTES, ARRAYSIZE(SFIII2_A_RYU_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_RYU_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_RYU_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_YUN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_LP_PALETTES, ARRAYSIZE(SFIII2_A_YUN_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_MP_PALETTES, ARRAYSIZE(SFIII2_A_YUN_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_HP_PALETTES, ARRAYSIZE(SFIII2_A_YUN_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_LK_PALETTES, ARRAYSIZE(SFIII2_A_YUN_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_MK_PALETTES, ARRAYSIZE(SFIII2_A_YUN_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_HK_PALETTES, ARRAYSIZE(SFIII2_A_YUN_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_EX_PALETTES, ARRAYSIZE(SFIII2_A_YUN_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_Support_PALETTES, ARRAYSIZE(SFIII2_A_YUN_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_YUN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII2_A_DUDLEY_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_LP_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_MP_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_HP_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_LK_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_MK_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_HK_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_EX_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_Support_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_DUDLEY_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_NECRO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_LP_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_MP_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_HP_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_LK_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_MK_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_HK_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_EX_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_Support_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_NECRO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_HUGO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_LP_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_MP_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_HP_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_LK_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_MK_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_HK_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_EX_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_Support_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_HUGO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_GILL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_LP_PALETTES, ARRAYSIZE(SFIII2_A_GILL_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_MP_PALETTES, ARRAYSIZE(SFIII2_A_GILL_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_HP_PALETTES, ARRAYSIZE(SFIII2_A_GILL_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_LK_PALETTES, ARRAYSIZE(SFIII2_A_GILL_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_MK_PALETTES, ARRAYSIZE(SFIII2_A_GILL_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_HK_PALETTES, ARRAYSIZE(SFIII2_A_GILL_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_Support_PALETTES, ARRAYSIZE(SFIII2_A_GILL_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_GILL_PORTRAIT_PALETTES) },
    { L"Extra", DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_GILL_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_IBUKI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_LP_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_MP_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_HP_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_LK_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_MK_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_HK_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_EX_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_Support_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_IBUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_ELENA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_LP_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_MP_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_HP_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_LK_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_MK_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_HK_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_EX_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_Support_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_ELENA_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_ORO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_LP_PALETTES, ARRAYSIZE(SFIII2_A_ORO_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_MP_PALETTES, ARRAYSIZE(SFIII2_A_ORO_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_HP_PALETTES, ARRAYSIZE(SFIII2_A_ORO_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_LK_PALETTES, ARRAYSIZE(SFIII2_A_ORO_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_MK_PALETTES, ARRAYSIZE(SFIII2_A_ORO_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_HK_PALETTES, ARRAYSIZE(SFIII2_A_ORO_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_EX_PALETTES, ARRAYSIZE(SFIII2_A_ORO_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_Support_PALETTES, ARRAYSIZE(SFIII2_A_ORO_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_ORO_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_ORO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_YANG_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_LP_PALETTES, ARRAYSIZE(SFIII2_A_YANG_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_MP_PALETTES, ARRAYSIZE(SFIII2_A_YANG_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_HP_PALETTES, ARRAYSIZE(SFIII2_A_YANG_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_LK_PALETTES, ARRAYSIZE(SFIII2_A_YANG_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_MK_PALETTES, ARRAYSIZE(SFIII2_A_YANG_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_HK_PALETTES, ARRAYSIZE(SFIII2_A_YANG_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_EX_PALETTES, ARRAYSIZE(SFIII2_A_YANG_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_Support_PALETTES, ARRAYSIZE(SFIII2_A_YANG_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_YANG_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII2_A_KEN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_LP_PALETTES, ARRAYSIZE(SFIII2_A_KEN_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_MP_PALETTES, ARRAYSIZE(SFIII2_A_KEN_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_HP_PALETTES, ARRAYSIZE(SFIII2_A_KEN_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_LK_PALETTES, ARRAYSIZE(SFIII2_A_KEN_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_MK_PALETTES, ARRAYSIZE(SFIII2_A_KEN_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_HK_PALETTES, ARRAYSIZE(SFIII2_A_KEN_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_EX_PALETTES, ARRAYSIZE(SFIII2_A_KEN_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_Support_PALETTES, ARRAYSIZE(SFIII2_A_KEN_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_KEN_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_KEN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_SEAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_LP_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_MP_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_HP_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_LK_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_MK_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_HK_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_EX_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_Support_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_SEAN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_URIEN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_LP_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_MP_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_HP_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_LK_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_MK_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_HK_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_EX_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_Support_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_URIEN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_GOUKI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_LP_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_MP_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_HP_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_LK_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_MK_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_HK_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_HK_PALETTES) },
    { L"EX", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_EX_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_EX_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_Support_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_GOUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII2_A_SHINGOUKI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_LP_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_LP_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_MP_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_MP_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_Support_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII2_A_SHINGOUKI_EXTRA_PALETTES) },
};

const sGame_PaletteDataset SFIII2_A_BONUS_PALETTES[] =
{
    { L"Judgement Girl: Julia", 0x3dfe00, 0x3dfe80, index3SSprites_Bonus, 0x2b },
    { L"Judgement Girl: Fair Libra", 0x3dfe80, 0x3dff00, index3SSprites_Bonus, 0x2a },
    { L"Judgement Girl: Rifa", 0x3dff00, 0x3dff80, index3SSprites_Bonus, 0x2d },
    { L"Judgement Girl: Tonfa", 0x3dff80, 0x3e0000, index3SSprites_Bonus, 0x2f },
    { L"Judgement Girl: Toli", 0x3e0000, 0x3e0080, index3SSprites_Bonus, 0x2e },
    { L"Judgement Girl: Anna", 0x3e0080, 0x3e0100, index3SSprites_Bonus, 0x29 },
    { L"Judgement Girl: Lilly", 0x3e0100, 0x3e0180, index3SSprites_Bonus, 0x2c },
    { L"Judgement Girl: Effie", 0x3e0180, 0x3e0200, index3SSprites_Necro, 0x02 },

    { L"1P and 2P Cursor", 0x3a0c00, 0x3a0c80 },
    { L"Character Select Names", 0x3a0c80, 0x3a0d00 },
    { L"Random Character Icons", 0x3a1480, 0x3a1500, indexSF2ISprites_Bonus, 0x0 },
    { L"Select Screen Text", 0x3a1500, 0x3a1580 },
    { L"Select Screen 1 SuperArt P1", 0x3a1580, 0x3a1600 },
    { L"Select Screen 2 SuperArt P1", 0x3a1600, 0x3a1680 },
    { L"Select Screen 3 SuperArt P1", 0x3a1680, 0x3a1700 },
    { L"Select Screen 1 SuperArt P2", 0x3a1700, 0x3a1780 },
    { L"Select Screen 2 SuperArt P2", 0x3a1780, 0x3a1800 },
    { L"Select Screen 3 SuperArt P2", 0x3a1800, 0x3a1880 },
    { L"Select Screen SuperArt Text", 0x3a1880, 0x3a1900 },
    { L"Select Screen SuperArt Text (Red Unused?)", 0x3a1900, 0x3a1980 },
    { L"Select Screen Buttons and Arrows P1", 0x3a1980, 0x3a1a00 },
    { L"Select Screen Buttons and Arrows P2", 0x3a1a00, 0x3a1a80 },
    { L"Select Screen Map", 0x3a1a80, 0x3a1b00 },
    { L"Select Screen Flag 1", 0x3a1b00, 0x3a1b80 },
    { L"Select Screen Flag 2", 0x3a1b80, 0x3a1c00 },
    { L"Select Screen Flag 3", 0x3a1c00, 0x3a1c80 },
    { L"Select Screen Flag 4", 0x3a1c80, 0x3a1d00 },
    { L"Select Screen Flag 5", 0x3a1d00, 0x3a1d80 },
    { L"Select Screen Flag 6", 0x3a1d80, 0x3a1e00 },
    { L"Select Screen Flag 7", 0x3a1e00, 0x3a1e80 },
    { L"Select Screen Flag 8", 0x3a1e80, 0x3a1f00 },
    { L"Select Screen Flag 9: Brazil", 0x3a1f00, 0x3a1f80 },
    { L"Select Screen VS Text", 0x3a1f80, 0x3a2000 },
    { L"Select Screen Background", 0x3a2000, 0x3a2080 },
};

const sDescTreeNode SFIII2_A_BONUS_COLLECTION[] =
{
    { L"Bonus",   DESC_NODETYPE_TREE, (void*)SFIII2_A_BONUS_PALETTES, ARRAYSIZE(SFIII2_A_BONUS_PALETTES) },
};

const sGame_PaletteDataset SFIII2_A_STAGES_ALEX_PALETTES[] =
{
    { L"Alex Stage (1/8)", 0x3b4f80 + (0 * 0x200), 0x3b4f80 + (1 * 0x200) },
    { L"Alex Stage (2/8)", 0x3b4f80 + (1 * 0x200), 0x3b4f80 + (2 * 0x200) },
    { L"Alex Stage (3/8)", 0x3b4f80 + (2 * 0x200), 0x3b4f80 + (3 * 0x200) },
    { L"Alex Stage (4/8)", 0x3b4f80 + (3 * 0x200), 0x3b4f80 + (4 * 0x200) },
    { L"Alex Stage (5/8)", 0x3b4f80 + (4 * 0x200), 0x3b4f80 + (5 * 0x200) },
    { L"Alex Stage (6/8)", 0x3b4f80 + (5 * 0x200), 0x3b4f80 + (6 * 0x200) },
    { L"Alex Stage (7/8)", 0x3b4f80 + (6 * 0x200), 0x3b4f80 + (7 * 0x200) },
    { L"Alex Stage (8/8)", 0x3b4f80 + (7 * 0x200), 0x3b5f80 },
};

const sGame_PaletteDataset SFIII2_A_STAGES_ALEX_FADED_PALETTES[] =
{
    { L"Alex Stage (Faded) (1/8)", 0x3b5f80 + (0 * 0x200), 0x3b5f80 + (1 * 0x200) },
    { L"Alex Stage (Faded) (2/8)", 0x3b5f80 + (1 * 0x200), 0x3b5f80 + (2 * 0x200) },
    { L"Alex Stage (Faded) (3/8)", 0x3b5f80 + (2 * 0x200), 0x3b5f80 + (3 * 0x200) },
    { L"Alex Stage (Faded) (4/8)", 0x3b5f80 + (3 * 0x200), 0x3b5f80 + (4 * 0x200) },
    { L"Alex Stage (Faded) (5/8)", 0x3b5f80 + (4 * 0x200), 0x3b5f80 + (5 * 0x200) },
    { L"Alex Stage (Faded) (6/8)", 0x3b5f80 + (5 * 0x200), 0x3b5f80 + (6 * 0x200) },
    { L"Alex Stage (Faded) (7/8)", 0x3b5f80 + (6 * 0x200), 0x3b5f80 + (7 * 0x200) },
    { L"Alex Stage (Faded) (8/8)", 0x3b5f80 + (7 * 0x200), 0x3b6e80 },
};

const sGame_PaletteDataset SFIII2_A_STAGES_GILL_PALETTES[] =
{
    { L"Gill Stage (1/12)", 0x3b1d80 + (0 * 0x200), 0x3b1d80 + (1 * 0x200) },
    { L"Gill Stage (2/12)", 0x3b1d80 + (1 * 0x200), 0x3b1d80 + (2 * 0x200) },
    { L"Gill Stage (3/12)", 0x3b1d80 + (2 * 0x200), 0x3b1d80 + (3 * 0x200) },
    { L"Gill Stage (4/12)", 0x3b1d80 + (3 * 0x200), 0x3b1d80 + (4 * 0x200) },
    { L"Gill Stage (5/12)", 0x3b1d80 + (4 * 0x200), 0x3b1d80 + (5 * 0x200) },
    { L"Gill Stage (6/12)", 0x3b1d80 + (5 * 0x200), 0x3b1d80 + (6 * 0x200) },
    { L"Gill Stage (7/12)", 0x3b1d80 + (6 * 0x200), 0x3b1d80 + (7 * 0x200) },
    { L"Gill Stage (8/12)", 0x3b1d80 + (7 * 0x200), 0x3b1d80 + (8 * 0x200) },
    { L"Gill Stage (9/12)", 0x3b1d80 + (8 * 0x200), 0x3b1d80 + (9 * 0x200) },
    { L"Gill Stage (10/12)", 0x3b1d80 + (9 * 0x200), 0x3b1d80 + (10 * 0x200) },
    { L"Gill Stage (11/12)", 0x3b1d80 + (10 * 0x200), 0x3b1d80 + (11 * 0x200) },
    { L"Gill Stage (12/12)", 0x3b1d80 + (11 * 0x200), 0x3b3580 },
};

const sGame_PaletteDataset SFIII2_A_STAGES_GILL_FADED_PALETTES[] =
{
    { L"Gill Stage (Faded) (1/12)", 0x3b3580 + (0 * 0x200), 0x3b3580 + (1 * 0x200) },
    { L"Gill Stage (Faded) (2/12)", 0x3b3580 + (1 * 0x200), 0x3b3580 + (2 * 0x200) },
    { L"Gill Stage (Faded) (3/12)", 0x3b3580 + (2 * 0x200), 0x3b3580 + (3 * 0x200) },
    { L"Gill Stage (Faded) (4/12)", 0x3b3580 + (3 * 0x200), 0x3b3580 + (4 * 0x200) },
    { L"Gill Stage (Faded) (5/12)", 0x3b3580 + (4 * 0x200), 0x3b3580 + (5 * 0x200) },
    { L"Gill Stage (Faded) (6/12)", 0x3b3580 + (5 * 0x200), 0x3b3580 + (6 * 0x200) },
    { L"Gill Stage (Faded) (7/12)", 0x3b3580 + (6 * 0x200), 0x3b3580 + (7 * 0x200) },
    { L"Gill Stage (Faded) (8/12)", 0x3b3580 + (7 * 0x200), 0x3b3580 + (8 * 0x200) },
    { L"Gill Stage (Faded) (9/12)", 0x3b3580 + (8 * 0x200), 0x3b3580 + (9 * 0x200) },
    { L"Gill Stage (Faded) (10/12)", 0x3b3580 + (9 * 0x200), 0x3b3580 + (10 * 0x200) },
    { L"Gill Stage (Faded) (11/12)", 0x3b3580 + (10 * 0x200), 0x3b3580 + (11 * 0x200) },
    { L"Gill Stage (Faded) (12/12)", 0x3b3580 + (11 * 0x200), 0x3b4c80 },
};

const sGame_PaletteDataset SFIII2_A_STAGES_RYU_PALETTES[] =
{
    { L"Ryu Stage (1/7)", 0x3b6e80 + (0 * 0x200), 0x3b6e80 + (1 * 0x200) },
    { L"Ryu Stage (2/7)", 0x3b6e80 + (1 * 0x200), 0x3b6e80 + (2 * 0x200) },
    { L"Ryu Stage (3/7)", 0x3b6e80 + (2 * 0x200), 0x3b6e80 + (3 * 0x200) },
    { L"Ryu Stage (4/7)", 0x3b6e80 + (3 * 0x200), 0x3b6e80 + (4 * 0x200) },
    { L"Ryu Stage (5/7)", 0x3b6e80 + (4 * 0x200), 0x3b6e80 + (5 * 0x200) },
    { L"Ryu Stage (6/7)", 0x3b6e80 + (5 * 0x200), 0x3b6e80 + (6 * 0x200) },
    { L"Ryu Stage (7/7)", 0x3b6e80 + (6 * 0x200), 0x3b7c00 },
};

const sGame_PaletteDataset SFIII2_A_STAGES_RYU_FADED_PALETTES[] =
{
    { L"Ryu Stage (Faded) (1/7)", 0x3b7c00 + (0 * 0x200), 0x3b7c00 + (1 * 0x200) },
    { L"Ryu Stage (Faded) (2/7)", 0x3b7c00 + (1 * 0x200), 0x3b7c00 + (2 * 0x200) },
    { L"Ryu Stage (Faded) (3/7)", 0x3b7c00 + (2 * 0x200), 0x3b7c00 + (3 * 0x200) },
    { L"Ryu Stage (Faded) (4/7)", 0x3b7c00 + (3 * 0x200), 0x3b7c00 + (4 * 0x200) },
    { L"Ryu Stage (Faded) (5/7)", 0x3b7c00 + (4 * 0x200), 0x3b7c00 + (5 * 0x200) },
    { L"Ryu Stage (Faded) (6/7)", 0x3b7c00 + (5 * 0x200), 0x3b7c00 + (6 * 0x200) },
    { L"Ryu Stage (Faded) (7/7)", 0x3b7c00 + (6 * 0x200), 0x3b8980 },
};

const sGame_PaletteDataset SFIII2_A_STAGES_YUN_PALETTES[] =
{
    { L"Yun Stage (1/6)", 0x3b8980 + (0 * 0x200), 0x3b8980 + (1 * 0x200) },
    { L"Yun Stage (2/6)", 0x3b8980 + (1 * 0x200), 0x3b8980 + (2 * 0x200) },
    { L"Yun Stage (3/6)", 0x3b8980 + (2 * 0x200), 0x3b8980 + (3 * 0x200) },
    { L"Yun Stage (4/6)", 0x3b8980 + (3 * 0x200), 0x3b8980 + (4 * 0x200) },
    { L"Yun Stage (5/6)", 0x3b8980 + (4 * 0x200), 0x3b8980 + (5 * 0x200) },
    { L"Yun Stage (6/6)", 0x3b8980 + (5 * 0x200), 0x3b9400 },
};

const sGame_PaletteDataset SFIII2_A_STAGES_YUN_FADED_PALETTES[] =
{
    { L"Yun Stage (Faded) (1/6)", 0x3b9400 + (0 * 0x200), 0x3b9400 + (1 * 0x200) },
    { L"Yun Stage (Faded) (2/6)", 0x3b9400 + (1 * 0x200), 0x3b9400 + (2 * 0x200) },
    { L"Yun Stage (Faded) (3/6)", 0x3b9400 + (2 * 0x200), 0x3b9400 + (3 * 0x200) },
    { L"Yun Stage (Faded) (4/6)", 0x3b9400 + (3 * 0x200), 0x3b9400 + (4 * 0x200) },
    { L"Yun Stage (Faded) (5/6)", 0x3b9400 + (4 * 0x200), 0x3b9400 + (5 * 0x200) },
    { L"Yun Stage (Faded) (6/6)", 0x3b9400 + (5 * 0x200), 0x3b9f80 },
};

const sDescTreeNode SFIII2_A_STAGES_COLLECTION[] =
{
    { L"Alex Stage",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_ALEX_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_ALEX_PALETTES) },
    { L"Alex Stage (Faded)",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_ALEX_FADED_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_ALEX_FADED_PALETTES) },
    { L"Gill Stage",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_GILL_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_GILL_PALETTES) },
    { L"Gill Stage (Faded)",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_GILL_FADED_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_GILL_FADED_PALETTES) },
    { L"Ryu Stage",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_RYU_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_RYU_PALETTES) },
    { L"Ryu Stage (Faded)",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_RYU_FADED_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_RYU_FADED_PALETTES) },
    { L"Yun Stage",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_YUN_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_YUN_PALETTES) },
    { L"Yun Stage (Faded)",   DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_YUN_FADED_PALETTES, ARRAYSIZE(SFIII2_A_STAGES_YUN_FADED_PALETTES) },
};

const sDescTreeNode SFIII2_A_50_UNITS[] =
{
    { L"Alex",   DESC_NODETYPE_TREE, (void*)SFIII2_A_ALEX_COLLECTION, ARRAYSIZE(SFIII2_A_ALEX_COLLECTION) },
    { L"Ryu",    DESC_NODETYPE_TREE, (void*)SFIII2_A_RYU_COLLECTION, ARRAYSIZE(SFIII2_A_RYU_COLLECTION) },
    { L"Yun",    DESC_NODETYPE_TREE, (void*)SFIII2_A_YUN_COLLECTION, ARRAYSIZE(SFIII2_A_YUN_COLLECTION) },
    { L"Dudley", DESC_NODETYPE_TREE, (void*)SFIII2_A_DUDLEY_COLLECTION, ARRAYSIZE(SFIII2_A_DUDLEY_COLLECTION) },
    { L"Necro",  DESC_NODETYPE_TREE, (void*)SFIII2_A_NECRO_COLLECTION, ARRAYSIZE(SFIII2_A_NECRO_COLLECTION) },
    { L"Hugo",   DESC_NODETYPE_TREE, (void*)SFIII2_A_HUGO_COLLECTION, ARRAYSIZE(SFIII2_A_HUGO_COLLECTION) },
    { L"Ibuki",  DESC_NODETYPE_TREE, (void*)SFIII2_A_IBUKI_COLLECTION, ARRAYSIZE(SFIII2_A_IBUKI_COLLECTION) },
    { L"Elena",  DESC_NODETYPE_TREE, (void*)SFIII2_A_ELENA_COLLECTION, ARRAYSIZE(SFIII2_A_ELENA_COLLECTION) },
    { L"Oro",    DESC_NODETYPE_TREE, (void*)SFIII2_A_ORO_COLLECTION, ARRAYSIZE(SFIII2_A_ORO_COLLECTION) },
    { L"Yang",   DESC_NODETYPE_TREE, (void*)SFIII2_A_YANG_COLLECTION, ARRAYSIZE(SFIII2_A_YANG_COLLECTION) },
    { L"Ken",    DESC_NODETYPE_TREE, (void*)SFIII2_A_KEN_COLLECTION, ARRAYSIZE(SFIII2_A_KEN_COLLECTION) },
    { L"Sean",   DESC_NODETYPE_TREE, (void*)SFIII2_A_SEAN_COLLECTION, ARRAYSIZE(SFIII2_A_SEAN_COLLECTION) },
    { L"Urien",  DESC_NODETYPE_TREE, (void*)SFIII2_A_URIEN_COLLECTION, ARRAYSIZE(SFIII2_A_URIEN_COLLECTION) },
    { L"Gouki",  DESC_NODETYPE_TREE, (void*)SFIII2_A_GOUKI_COLLECTION, ARRAYSIZE(SFIII2_A_GOUKI_COLLECTION) },
    { L"Shin Gouki", DESC_NODETYPE_TREE, (void*)SFIII2_A_SHINGOUKI_COLLECTION, ARRAYSIZE(SFIII2_A_SHINGOUKI_COLLECTION) },
    { L"Gill",   DESC_NODETYPE_TREE, (void*)SFIII2_A_GILL_COLLECTION, ARRAYSIZE(SFIII2_A_GILL_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFIII2_A_BONUS_COLLECTION, ARRAYSIZE(SFIII2_A_BONUS_COLLECTION) },
    { L"Stage Palettes", DESC_NODETYPE_TREE, (void*)SFIII2_A_STAGES_COLLECTION, ARRAYSIZE(SFIII2_A_STAGES_COLLECTION) },
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

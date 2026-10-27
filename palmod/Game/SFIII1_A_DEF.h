#pragma once

const std::vector<uint16_t> SFIII1_A_IMGIDS_USED =
{
    index3SSprites_Alex,
    index3SSprites_Ryu,
    index3SSprites_Yun,
    index3SSprites_Dudley,
    index3SSprites_Necro,
    index3SSprites_Hugo,
    index3SSprites_Ibuki,
    index3SSprites_Oro,
    index3SSprites_Yang,
    index3SSprites_Ken,
    index3SSprites_Sean,
    index3SSprites_Gill,
    index3SSprites_Bonus,
    indexSF3NGSprites_Alex,
    indexSF3NGSprites_Ryu,
    indexSF3NGSprites_Yun,
    indexSF3NGSprites_Dudley,
    indexSF3NGSprites_Necro,
    indexSF3NGSprites_Hugo,
    indexSF3NGSprites_Ibuki,
    indexSF3NGSprites_Elena,
    indexSF3NGSprites_Oro,
    indexSF3NGSprites_Yang,
    indexSF3NGSprites_Ken,
    indexSF3NGSprites_Sean,
    indexSF3NGSprites_Gill,
    indexSF3NGSprites_Bonus,
    indexSF3NGSprites_Stages,
    indexSF3NGSprites_Endings,
};

const sGame_PaletteDataset SFIII1_A_ALEX_LP_PALETTES[] =
{
    { L"Alex LP", 0x3d0600, 0x3d0680, index3SSprites_Alex, 0x00 },
    { L"Alex LP HUD", 0x3e50c0, 0x3e50e0, indexSF3NGSprites_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_MP_PALETTES[] =
{
    { L"Alex MP", 0x3d0680, 0x3d0700, index3SSprites_Alex, 0x00 },
    { L"Alex MP HUD", 0x3e50e0, 0x3e5100, indexSF3NGSprites_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_HP_PALETTES[] =
{
    { L"Alex HP", 0x3d0700, 0x3d0780, index3SSprites_Alex, 0x00 },
    { L"Alex HP HUD", 0x3e5100, 0x3e5120, indexSF3NGSprites_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_LK_PALETTES[] =
{
    { L"Alex LK", 0x3d0780, 0x3d0800, index3SSprites_Alex, 0x00 },
    { L"Alex LK HUD", 0x3e5120, 0x3e5140, indexSF3NGSprites_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_MK_PALETTES[] =
{
    { L"Alex MK", 0x3d0800, 0x3d0880, index3SSprites_Alex, 0x00 },
    { L"Alex MK HUD", 0x3e5140, 0x3e5160, indexSF3NGSprites_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_HK_PALETTES[] =
{
    { L"Alex HK", 0x3d0880, 0x3d0900, index3SSprites_Alex, 0x00 },
    { L"Alex HK HUD", 0x3e5160, 0x3e5180, indexSF3NGSprites_Alex, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_Support_PALETTES[] =
{
    { L"Alex Freeze", 0x3d4600, 0x3d4680, index3SSprites_Alex, 0x00 },
    { L"Alex Burning", 0x3d4d00, 0x3d4d80, index3SSprites_Alex, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_EXTRA_PALETTES[] =
{
    // Warning: this is a paired palette, so if you change this please ensure UpdatePalImg handles that update correctly
    { L"Alex Flash", 0x3d3380, 0x3d3400, index3SSprites_Alex, 0x02 },
};

const sGame_PaletteDataset SFIII1_A_RYU_LP_PALETTES[] =
{
    { L"Ryu LP", 0x3d0900, 0x3d0980, index3SSprites_Ryu, 0x00 },
    { L"Ryu LP HUD", 0x3e5180, 0x3e51a0, indexSF3NGSprites_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_RYU_MP_PALETTES[] =
{
    { L"Ryu MP", 0x3d0980, 0x3d0a00, index3SSprites_Ryu, 0x00 },
    { L"Ryu MP HUD", 0x3e51a0, 0x3e51c0, indexSF3NGSprites_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_RYU_HP_PALETTES[] =
{
    { L"Ryu HP", 0x3d0a00, 0x3d0a80, index3SSprites_Ryu, 0x00 },
    { L"Ryu HP HUD", 0x3e51c0, 0x3e51e0, indexSF3NGSprites_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_RYU_LK_PALETTES[] =
{
    { L"Ryu LK", 0x3d0a80, 0x3d0b00, index3SSprites_Ryu, 0x00 },
    { L"Ryu LK HUD", 0x3e51e0, 0x3e5200, indexSF3NGSprites_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_RYU_MK_PALETTES[] =
{
    { L"Ryu MK", 0x3d0b00, 0x3d0b80, index3SSprites_Ryu, 0x00 },
    { L"Ryu MK HUD", 0x3e5200, 0x3e5220, indexSF3NGSprites_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_RYU_HK_PALETTES[] =
{
    { L"Ryu HK", 0x3d0b80, 0x3d0c00, index3SSprites_Ryu, 0x00 },
    { L"Ryu HK HUD", 0x3e5220, 0x3e5240, indexSF3NGSprites_Ryu, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_RYU_Support_PALETTES[] =
{
    { L"Ryu Freeze", 0x3d4680, 0x3d4700, index3SSprites_Ryu, 0x00 },
    { L"Ryu Burning", 0x3d4d80, 0x3d4e00, index3SSprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_RYU_EXTRA_PALETTES[] =
{
    { L"Ryu Hadoken", 0x03d3480, 0x03d3500, index3SSprites_Ryu, 0x05 },
    { L"Ryu Denjin Hadoken Charge", 0x3d3400, 0x3d3480, index3SSprites_Ryu, 0x00 },
    { L"Ryu Flames (unused)", 0x3d3500, 0x3d3580, indexSF3NGSprites_Ryu, 0x40 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_LP_PALETTES[] =
{
    { L"Yun LP", 0x3d0c00, 0x3d0c80, index3SSprites_Yun, 0x00 },
    { L"Yun LP HUD", 0x3e5240, 0x3e5260, indexSF3NGSprites_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_MP_PALETTES[] =
{
    { L"Yun MP", 0x3d0c80, 0x3d0d00, index3SSprites_Yun, 0x00 },
    { L"Yun MP HUD", 0x3e5260, 0x3e5280, indexSF3NGSprites_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_HP_PALETTES[] =
{
    { L"Yun HP", 0x3d0d00, 0x3d0d80, index3SSprites_Yun, 0x00 },
    { L"Yun HP HUD", 0x3e5280, 0x3e52a0, indexSF3NGSprites_Yun, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_LK_PALETTES[] =
{
    { L"Yang LK", 0x3d2100, 0x3d2180, index3SSprites_Yang, 0x10 },
    { L"Yang LK HUD", 0x3e5780, 0x3e57a0, indexSF3NGSprites_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_MK_PALETTES[] =
{
    { L"Yang MK", 0x3d2180, 0x3d2200, index3SSprites_Yang, 0x10 },
    { L"Yang MK HUD", 0x3e57a0, 0x3e57c0, indexSF3NGSprites_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_HK_PALETTES[] =
{
    { L"Yang HK", 0x3d2200, 0x3d2280, index3SSprites_Yang, 0x10 },
    { L"Yang HK HUD", 0x3e57c0, 0x3e57e0, indexSF3NGSprites_Yang, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_Support_PALETTES[] =
{
    { L"Yun Freeze", 0x3d4700, 0x3d4780, index3SSprites_Yun, 0x00 },
    { L"Yun Burning", 0x3d4e00, 0x3d4e80, index3SSprites_Yun, 0x00 },
    { L"Yang Freeze", 0x3d4a80, 0x3d4b00, index3SSprites_Yang, 0x10 },
    { L"Yang Burning", 0x3d5180, 0x3d5200, index3SSprites_Yang, 0x10 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_LP_PALETTES[] =
{
    { L"Dudley LP", 0x3d0f00, 0x3d0f80, index3SSprites_Dudley, 0x00 },
    { L"Dudley LP HUD", 0x3e5300, 0x3e5320, indexSF3NGSprites_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_MP_PALETTES[] =
{
    { L"Dudley MP", 0x3d0f80, 0x3d1000, index3SSprites_Dudley, 0x00 },
    { L"Dudley MP HUD", 0x3e5320, 0x3e5340, indexSF3NGSprites_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_HP_PALETTES[] =
{
    { L"Dudley HP", 0x3d1000, 0x3d1080, index3SSprites_Dudley, 0x00 },
    { L"Dudley HP HUD", 0x3e5340, 0x3e5360, indexSF3NGSprites_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_LK_PALETTES[] =
{
    { L"Dudley LK", 0x3d1080, 0x3d1100, index3SSprites_Dudley, 0x00 },
    { L"Dudley LK HUD", 0x3e5360, 0x3e5380, indexSF3NGSprites_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_MK_PALETTES[] =
{
    { L"Dudley MK", 0x3d1100, 0x3d1180, index3SSprites_Dudley, 0x00 },
    { L"Dudley MK HUD", 0x3e5380, 0x3e53a0, indexSF3NGSprites_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_HK_PALETTES[] =
{
    { L"Dudley HK", 0x3d1180, 0x3d1200, index3SSprites_Dudley, 0x00 },
    { L"Dudley HK HUD", 0x3e53a0, 0x3e53c0, indexSF3NGSprites_Dudley, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_Support_PALETTES[] =
{
    { L"Dudley Freeze", 0x3d4780, 0x3d4800, index3SSprites_Dudley, 0x00 },
    { L"Dudley Burning", 0x3d4e80, 0x3d4f00, index3SSprites_Dudley, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_EXTRA_PALETTES[] =
{
    { L"Dudley Intro Car", 0x3d3580, 0x3d3600, index3SSprites_Dudley, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_LP_PALETTES[] =
{
    { L"Necro LP", 0x3d1200, 0x3d1280, index3SSprites_Necro, 0x00 },
    { L"Necro LP HUD", 0x3e53c0, 0x3e53e0, indexSF3NGSprites_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_MP_PALETTES[] =
{
    { L"Necro MP", 0x3d1280, 0x3d1300, index3SSprites_Necro, 0x00 },
    { L"Necro MP HUD", 0x3e53e0, 0x3e5400, indexSF3NGSprites_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_HP_PALETTES[] =
{
    { L"Necro HP", 0x3d1300, 0x3d1380, index3SSprites_Necro, 0x00 },
    { L"Necro HP HUD", 0x3e5400, 0x3e5420, indexSF3NGSprites_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_LK_PALETTES[] =
{
    { L"Necro LK", 0x3d1380, 0x3d1400, index3SSprites_Necro, 0x00 },
    { L"Necro LK HUD", 0x3e5420, 0x3e5440, indexSF3NGSprites_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_MK_PALETTES[] =
{
    { L"Necro MK", 0x3d1400, 0x3d1480, index3SSprites_Necro, 0x00 },
    { L"Necro MK HUD", 0x3e5440, 0x3e5460, indexSF3NGSprites_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_HK_PALETTES[] =
{
    { L"Necro HK", 0x3d1480, 0x3d1500, index3SSprites_Necro, 0x00 },
    { L"Necro HK HUD", 0x3e5460, 0x3e5480, indexSF3NGSprites_Necro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_Support_PALETTES[] =
{
    { L"Necro Freeze", 0x3d4800, 0x3d4880, index3SSprites_Necro, 0x00 },
    { L"Necro Freeze 2?", 0x3d4880, 0x3d4900, index3SSprites_Necro, 0x00 },
    { L"Necro Burning", 0x3d4f00, 0x3d4f80, index3SSprites_Necro, 0x00 },
    { L"Necro Burning 2?", 0x3d4f80, 0x3d5000, index3SSprites_Necro, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_LP_PALETTES[] =
{
    { L"Beta Hugo LP", 0x3d1500, 0x3d1580, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo LP HUD", 0x3e5480, 0x3e54a0, indexSF3NGSprites_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_MP_PALETTES[] =
{
    { L"Beta Hugo MP", 0x3d1580, 0x3d1600, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo MP HUD", 0x3e54a0, 0x3e54c0, indexSF3NGSprites_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_HP_PALETTES[] =
{
    { L"Beta Hugo HP", 0x3d1600, 0x3d1680, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo HP HUD", 0x3e54c0, 0x3e54e0, indexSF3NGSprites_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_LK_PALETTES[] =
{
    { L"Beta Hugo LK", 0x3d1680, 0x3d1700, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo LK HUD", 0x3e54e0, 0x3e5500, indexSF3NGSprites_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_MK_PALETTES[] =
{
    { L"Beta Hugo MK", 0x3d1700, 0x3d1780, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo MK HUD", 0x3e5500, 0x3e5520, indexSF3NGSprites_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_HK_PALETTES[] =
{
    { L"Beta Hugo HK", 0x3d1780, 0x3d1800, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo HK HUD", 0x3e5520, 0x3e5540, indexSF3NGSprites_Hugo, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_LP_PALETTES[] =
{
    { L"Ibuki LP", 0x3d1800, 0x3d1880, indexSF3NGSprites_Ibuki, 0x00 },
    { L"Ibuki LP HUD", 0x3e5540, 0x3e5560, indexSF3NGSprites_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_MP_PALETTES[] =
{
    { L"Ibuki MP", 0x3d1880, 0x3d1900, indexSF3NGSprites_Ibuki, 0x00 },
    { L"Ibuki MP HUD", 0x3e5560, 0x3e5580, indexSF3NGSprites_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_HP_PALETTES[] =
{
    { L"Ibuki HP", 0x3d1900, 0x3d1980, indexSF3NGSprites_Ibuki, 0x00 },
    { L"Ibuki HP HUD", 0x3e5580, 0x3e55a0, indexSF3NGSprites_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_LK_PALETTES[] =
{
    { L"Ibuki LK", 0x3d1980, 0x3d1a00, indexSF3NGSprites_Ibuki, 0x00 },
    { L"Ibuki LK HUD", 0x3e55a0, 0x3e55c0, indexSF3NGSprites_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_MK_PALETTES[] =
{
    { L"Ibuki MK", 0x3d1a00, 0x3d1a80, indexSF3NGSprites_Ibuki, 0x00 },
    { L"Ibuki MK HUD", 0x3e55c0, 0x3e55e0, indexSF3NGSprites_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_HK_PALETTES[] =
{
    { L"Ibuki HK", 0x3d1a80, 0x3d1b00, indexSF3NGSprites_Ibuki, 0x00 },
    { L"Ibuki HK HUD", 0x3e55e0, 0x3e5600, indexSF3NGSprites_Ibuki, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_Support_PALETTES[] =
{
    { L"Ibuki Freeze", 0x3d4900, 0x3d4980, indexSF3NGSprites_Ibuki, 0x00 },
    { L"Ibuki Burning", 0x3d5000, 0x3d5080, indexSF3NGSprites_Ibuki, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_EXTRA_PALETTES[] =
{
    { L"Ibuki LP Extra 1", 0x3d5300, 0x3d5380, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki LP Extra 2", 0x3d5380, 0x3d5400, index3SSprites_Ibuki, 0x03 },
    { L"Ibuki MP Extra 1", 0x3d5400, 0x3d5480, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki MP Extra 2", 0x3d5480, 0x3d5500, index3SSprites_Ibuki, 0x03 },
    { L"Ibuki HP Extra 1", 0x3d5500, 0x3d5580, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki HP Extra 2", 0x3d5580, 0x3d5600, index3SSprites_Ibuki, 0x03 },
    { L"Ibuki LK Extra 1", 0x3d5600, 0x3d5680, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki LK Extra 2", 0x3d5680, 0x3d5700, index3SSprites_Ibuki, 0x03 },
    { L"Ibuki MK Extra 1", 0x3d5700, 0x3d5780, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki MK Extra 2", 0x3d5780, 0x3d5800, index3SSprites_Ibuki, 0x03 },
    { L"Ibuki HK Extra 1", 0x3d5800, 0x3d5880, index3SSprites_Ibuki, 0x02 },
    { L"Ibuki HK Extra 2", 0x3d5880, 0x3d5900, index3SSprites_Ibuki, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_LP_PALETTES[] =
{
    { L"Elena LP", 0x3d1b00, 0x3d1b80, indexSF3NGSprites_Elena, 0x00 },
    { L"Elena LP HUD", 0x3e5600, 0x3e5620, indexSF3NGSprites_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_MP_PALETTES[] =
{
    { L"Elena MP", 0x3d1b80, 0x3d1c00, indexSF3NGSprites_Elena, 0x00 },
    { L"Elena MP HUD", 0x3e5620, 0x3e5640, indexSF3NGSprites_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_HP_PALETTES[] =
{
    { L"Elena HP", 0x3d1c00, 0x3d1c80, indexSF3NGSprites_Elena, 0x00 },
    { L"Elena HP HUD", 0x3e5640, 0x3e5660, indexSF3NGSprites_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_LK_PALETTES[] =
{
    { L"Elena LK", 0x3d1c80, 0x3d1d00, indexSF3NGSprites_Elena, 0x00 },
    { L"Elena LK HUD", 0x3e5660, 0x3e5680, indexSF3NGSprites_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_MK_PALETTES[] =
{
    { L"Elena MK", 0x3d1d00, 0x3d1d80, indexSF3NGSprites_Elena, 0x00 },
    { L"Elena MK HUD", 0x3e5680, 0x3e56a0, indexSF3NGSprites_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_HK_PALETTES[] =
{
    { L"Elena HK", 0x3d1d80, 0x3d1e00, indexSF3NGSprites_Elena, 0x00 },
    { L"Elena HK HUD", 0x3e56a0, 0x3e56c0, indexSF3NGSprites_Elena, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_Support_PALETTES[] =
{
    { L"Elena Freeze", 0x3d4980, 0x3d4a00, indexSF3NGSprites_Elena, 0x00 },
    { L"Elena Burning", 0x3d5080, 0x3d5100, indexSF3NGSprites_Elena, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_EXTRA_PALETTES[] =
{
    { L"Elena Extra 1/3", 0x3d6200, 0x3d6280 },
    { L"Elena Extra 2/3", 0x3d6280, 0x3d6300 },
    { L"Elena Extra 3/3", 0x3d6300, 0x3d6380 },
};

const sGame_PaletteDataset SFIII1_A_ORO_LP_PALETTES[] =
{
    { L"Oro LP", 0x3d1e00, 0x3d1e80, index3SSprites_Oro, 0x00 },
    { L"Oro LP HUD", 0x3e56c0, 0x3e56e0, indexSF3NGSprites_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ORO_MP_PALETTES[] =
{
    { L"Oro MP", 0x3d1e80, 0x3d1f00, index3SSprites_Oro, 0x00 },
    { L"Oro MP HUD", 0x3e56e0, 0x3e5700, indexSF3NGSprites_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ORO_HP_PALETTES[] =
{
    { L"Oro HP", 0x3d1f00, 0x3d1f80, index3SSprites_Oro, 0x00 },
    { L"Oro HP HUD", 0x3e5700, 0x3e5720, indexSF3NGSprites_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ORO_LK_PALETTES[] =
{
    { L"Oro LK", 0x3d1f80, 0x3d2000, index3SSprites_Oro, 0x00 },
    { L"Oro LK HUD", 0x3e5720, 0x3e5740, indexSF3NGSprites_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ORO_MK_PALETTES[] =
{
    { L"Oro MK", 0x3d2000, 0x3d2080, index3SSprites_Oro, 0x00 },
    { L"Oro MK HUD", 0x3e5740, 0x3e5760, indexSF3NGSprites_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ORO_HK_PALETTES[] =
{
    { L"Oro HK", 0x3d2080, 0x3d2100, index3SSprites_Oro, 0x00 },
    { L"Oro HK HUD", 0x3e5760, 0x3e5780, indexSF3NGSprites_Oro, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_ORO_Support_PALETTES[] =
{
    { L"Oro Freeze / Kishinriki Flicker", 0x3d4a00, 0x3d4a80, index3SSprites_Oro, 0x00 },
    { L"Oro Burning / Kishinriki Glow", 0x3d5100, 0x3d5180, index3SSprites_Oro, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_ORO_EXTRA_PALETTES[] =
{
    { L"Oro Yagyou Dama / Sun Disk Palm", 0x3d3c80, 0x3d3d00, index3SSprites_Oro, 0x04 },
    { L"Oro Extra", 0x3d3d00, 0x3d3d80 },
    { L"Oro Yagyou Dama / Sun Disk Palm (not loaded)", 0x3d3d80, 0x3d3e00, index3SSprites_Oro, 0x05 },
    { L"Oro Tengu Objects 1/2", 0x3d4400, 0x3d4480, indexSF3NGSprites_Bonus, 0x34 },
    { L"Oro Tengu Objects 2/2", 0x3d4480, 0x3d4500, indexSF3NGSprites_Bonus, 0x35 },
};

const sGame_PaletteDataset SFIII1_A_KEN_LP_PALETTES[] =
{
    { L"Ken LP", 0x3d2400, 0x3d2480, index3SSprites_Ken, 0x00 },
    { L"Ken LP HUD", 0x3e5840, 0x3e5860, indexSF3NGSprites_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_KEN_MP_PALETTES[] =
{
    { L"Ken MP", 0x3d2480, 0x3d2500, index3SSprites_Ken, 0x00 },
    { L"Ken MP HUD", 0x3e5860, 0x3e5880, indexSF3NGSprites_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_KEN_HP_PALETTES[] =
{
    { L"Ken HP", 0x3d2500, 0x3d2580, index3SSprites_Ken, 0x00 },
    { L"Ken HP HUD", 0x3e5880, 0x3e58a0, indexSF3NGSprites_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_KEN_LK_PALETTES[] =
{
    { L"Ken LK", 0x3d2580, 0x3d2600, index3SSprites_Ken, 0x00 },
    { L"Ken LK HUD", 0x3e58a0, 0x3e58c0, indexSF3NGSprites_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_KEN_MK_PALETTES[] =
{
    { L"Ken MK", 0x3d2600, 0x3d2680, index3SSprites_Ken, 0x00 },
    { L"Ken MK HUD", 0x3e58c0, 0x3e58e0, indexSF3NGSprites_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_KEN_HK_PALETTES[] =
{
    { L"Ken HK", 0x3d2680, 0x3d2700, index3SSprites_Ken, 0x00 },
    { L"Ken HK HUD", 0x3e58e0, 0x3e5900, indexSF3NGSprites_Ken, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_KEN_Support_PALETTES[] =
{
    { L"Ken Freeze", 0x3d4b00, 0x3d4b80, index3SSprites_Ken, 0x00 },
    { L"Ken Burning", 0x3d5200, 0x3d5280, index3SSprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_KEN_EXTRA_PALETTES[] =
{
    { L"Ken Hadouken", 0x3d3e00, 0x3d3e80, indexSF3NGSprites_Ken, 0x40 },
    { L"Ken Flames (unused)", 0x3d3e80, 0x3d3f00, indexSF3NGSprites_Ken, 0x41 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_LP_PALETTES[] =
{
    { L"Sean LP", 0x3d2700, 0x3d2780, index3SSprites_Sean, 0x00 },
    { L"Sean LP HUD", 0x3e5900, 0x3e5920, indexSF3NGSprites_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_MP_PALETTES[] =
{
    { L"Sean MP", 0x3d2780, 0x3d2800, index3SSprites_Sean, 0x00 },
    { L"Sean MP HUD", 0x3e5920, 0x3e5940, indexSF3NGSprites_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_HP_PALETTES[] =
{
    { L"Sean HP", 0x3d2800, 0x3d2880, index3SSprites_Sean, 0x00 },
    { L"Sean HP HUD", 0x3e5940, 0x3e5960, indexSF3NGSprites_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_LK_PALETTES[] =
{
    { L"Sean LK", 0x3d2880, 0x3d2900, index3SSprites_Sean, 0x00 },
    { L"Sean LK HUD", 0x3e5960, 0x3e5980, indexSF3NGSprites_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_MK_PALETTES[] =
{
    { L"Sean MK", 0x3d2900, 0x3d2980, index3SSprites_Sean, 0x00 },
    { L"Sean MK HUD", 0x3e5980, 0x3e59a0, indexSF3NGSprites_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_HK_PALETTES[] =
{
    { L"Sean HK", 0x3d2980, 0x3d2a00, index3SSprites_Sean, 0x00 },
    { L"Sean HK HUD", 0x3e59a0, 0x3e59c0, indexSF3NGSprites_Sean, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_Support_PALETTES[] =
{
    { L"Sean Freeze", 0x3d4b80, 0x3d4c00, index3SSprites_Sean, 0x00 },
    { L"Sean Burning", 0x3d5280, 0x3d5300, index3SSprites_Sean, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_EXTRA_PALETTES[] =
{
    { L"Sean Hadou Burst", 0x3d3f00, 0x3d3f80, index3SSprites_Sean, 0x02 },
    { L"Sean Hyper Tornado", 0x3d3f80, 0x3d4000, indexSF3NGSprites_Sean, 0x41 },
};

const sGame_PaletteDataset SFIII1_A_GILL_LP_PALETTES[] =
{
    { L"Gill LP Facing Left", 0x3d0000, 0x3d0080, index3SSprites_Gill, 0x01 },
    { L"Gill LP Facing Right", 0x3d0080, 0x3d0100, index3SSprites_Gill, 0x00 },
    { L"Gill LP HUD", 0x3e5000, 0x3e5020, indexSF3NGSprites_Gill, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_GILL_MP_PALETTES[] =
{
    { L"Gill MP Facing Left", 0x3d0100, 0x3d0180, index3SSprites_Gill, 0x01 },
    { L"Gill MP Facing Right", 0x3d0180, 0x3d0200, index3SSprites_Gill, 0x00 },
    { L"Gill MP HUD", 0x3e5020, 0x3e5040, indexSF3NGSprites_Gill, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_GILL_HP_PALETTES[] =
{
    { L"Gill HP Facing Left", 0x3d0200, 0x3d0280, index3SSprites_Gill, 0x01 },
    { L"Gill HP Facing Right", 0x3d0280, 0x3d0300, index3SSprites_Gill, 0x00 },
    { L"Gill HP HUD", 0x3e5040, 0x3e5060, indexSF3NGSprites_Gill, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_GILL_LK_PALETTES[] =
{
    { L"Gill LK Facing Left", 0x3d0300, 0x3d0380, index3SSprites_Gill, 0x01 },
    { L"Gill LK Facing Right", 0x3d0380, 0x3d0400, index3SSprites_Gill, 0x00 },
    { L"Gill LK HUD", 0x3e5060, 0x3e5080, indexSF3NGSprites_Gill, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_GILL_MK_PALETTES[] =
{
    { L"Gill MK Facing Left", 0x3d0400, 0x3d0480, index3SSprites_Gill, 0x01 },
    { L"Gill MK Facing Right", 0x3d0480, 0x3d0500, index3SSprites_Gill, 0x00 },
    { L"Gill MK HUD", 0x3e5080, 0x3e50a0, indexSF3NGSprites_Gill, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_GILL_HK_PALETTES[] =
{
    { L"Gill HK Facing Left", 0x3d0500, 0x3d0580, index3SSprites_Gill, 0x01 },
    { L"Gill HK Facing Right", 0x3d0580, 0x3d0600, index3SSprites_Gill, 0x00 },
    { L"Gill HK HUD", 0x3e50a0, 0x3e50c0, indexSF3NGSprites_Gill, 0x01 },
};

const sGame_PaletteDataset SFIII1_A_GILL_Support_PALETTES[] =
{
    { L"Gill Freeze Right", 0x3d4580, 0x3d4600, index3SSprites_Gill, 0x01 },
    { L"Gill Freeze Left", 0x3d4500, 0x3d4580, index3SSprites_Gill, 0x00 },
    { L"Gill Burning Right", 0x3d4c80, 0x3d4d00, index3SSprites_Gill, 0x01 },
    { L"Gill Burning Left", 0x3d4c00, 0x3d4c80, index3SSprites_Gill, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_GILL_EXTRA_PALETTES[] =
{
    { L"Gill Pyrokinesis / Cryokinesis 1/2", 0x3d3000, 0x3d3080, index3SSprites_Gill, 0x03 },
    { L"Gill Pyrokinesis / Cryokinesis 2/2", 0x3d3080, 0x3d3100, index3SSprites_Gill, 0x02 },
};

const sGame_PaletteDataset SFIII1_A_GILL_PORTRAIT_PALETTES[] =
{
    { L"Gill Left Select Portrait", 0x3e8b80, 0x3e8c00, indexSF3NGSprites_Gill, 0x27 },
    { L"Gill Right Select Portrait", 0x3e8380, 0x3e8400, indexSF3NGSprites_Gill, 0x26 },
    { L"Gill Winning Portrait Left", 0x3ed000, 0x3ed080, indexSF3NGSprites_Gill, 0x28 },
    { L"Gill Winning Portrait Right", 0x3ed080, 0x3ed100, indexSF3NGSprites_Gill, 0x29 },

    { L"Gill Character Select Icon", 0x3e7400, 0x3e7480, indexSF3NGSprites_Gill, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_PORTRAIT_PALETTES[] =
{
    { L"Alex Select Portrait", 0x3e8c00, 0x3e8c80, indexSF3NGSprites_Alex, 0x26 },

    { L"Alex Winning Portrait LP", 0x3ed300, 0x3ed380, indexSF3NGSprites_Alex, 0x28 },
    { L"Alex Winning Portrait MP", 0x3ed380, 0x3ed400, indexSF3NGSprites_Alex, 0x28 },
    { L"Alex Winning Portrait HP", 0x3ed400, 0x3ed480, indexSF3NGSprites_Alex, 0x28 },
    { L"Alex Winning Portrait LK", 0x3ed480, 0x3ed500, indexSF3NGSprites_Alex, 0x28 },
    { L"Alex Winning Portrait MK", 0x3ed500, 0x3ed580, indexSF3NGSprites_Alex, 0x28 },
    { L"Alex Winning Portrait HK", 0x3ed580, 0x3ed600, indexSF3NGSprites_Alex, 0x28 },

    { L"Alex Losing Portrait LP", 0x3f0600, 0x3f0700, indexSF3NGSprites_Alex, 0x24 },
    { L"Alex Losing Portrait MP", 0x3f0700, 0x3f0800, indexSF3NGSprites_Alex, 0x24 },
    { L"Alex Losing Portrait HP", 0x3f0800, 0x3f0900, indexSF3NGSprites_Alex, 0x24 },
    { L"Alex Losing Portrait LK", 0x3f0900, 0x3f0a00, indexSF3NGSprites_Alex, 0x24 },
    { L"Alex Losing Portrait MK", 0x3f0a00, 0x3f0b00, indexSF3NGSprites_Alex, 0x24 },
    { L"Alex Losing Portrait HK", 0x3f0b00, 0x3f0c00, indexSF3NGSprites_Alex, 0x24 },

    { L"Alex Character Select Icon", 0x3e7480, 0x3e7500, indexSF3NGSprites_Alex, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_RYU_PORTRAIT_PALETTES[] =
{
    { L"Ryu Select Portrait", 0x3e8c80, 0x3e8d00, indexSF3NGSprites_Ryu, 0x26 },

    { L"Ryu Winning Portrait LP", 0x3ed600, 0x3ed680, indexSF3NGSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait MP", 0x3ed680, 0x3ed700, indexSF3NGSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait HP", 0x3ed700, 0x3ed780, indexSF3NGSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait LK", 0x3ed780, 0x3ed800, indexSF3NGSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait MK", 0x3ed800, 0x3ed880, indexSF3NGSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait HK", 0x3ed880, 0x3ed900, indexSF3NGSprites_Ryu, 0x28 },

    { L"Ryu Losing Portrait LP", 0x3f0c00, 0x3f0d80, indexSF3NGSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait MP", 0x3f0d80, 0x3f0f00, indexSF3NGSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait HP", 0x3f0f00, 0x3f1080, indexSF3NGSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait LK", 0x3f1080, 0x3f1200, indexSF3NGSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait MK", 0x3f1200, 0x3f1380, indexSF3NGSprites_Ryu, 0x24 },
    { L"Ryu Losing Portrait HK", 0x3f1380, 0x3f1500, indexSF3NGSprites_Ryu, 0x24 },

    { L"Ryu Character Select Icon", 0x3e7500, 0x3e7580, indexSF3NGSprites_Ryu, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_PORTRAIT_PALETTES[] =
{
    { L"Yun Select Portrait", 0x3e8d00, 0x3e8d80, indexSF3NGSprites_Yun, 0x26 },
    { L"Yang Select Portrait", 0x3e9080, 0x3e9100, indexSF3NGSprites_Yang, 0x26 },

    { L"Yun Winning Portrait LP", 0x3ed900, 0x3eda00, indexSF3NGSprites_Yun, 0x28 },
    { L"Yun Winning Portrait MP", 0x3eda00, 0x3edb00, indexSF3NGSprites_Yun, 0x28 },
    { L"Yun Winning Portrait HP", 0x3edb00, 0x3edc00, indexSF3NGSprites_Yun, 0x28 },
    { L"Yang Winning Portrait LK", 0x3efa00, 0x3efa80, indexSF3NGSprites_Yang, 0x28 },
    { L"Yang Winning Portrait MK", 0x3efa80, 0x3efb00, indexSF3NGSprites_Yang, 0x28 },
    { L"Yang Winning Portrait HK", 0x3efb00, 0x3efb80, indexSF3NGSprites_Yang, 0x28 },

    { L"Yun Losing Portrait LP", 0x3f1500, 0x3f1680, indexSF3NGSprites_Yun, 0x24 },
    { L"Yun Losing Portrait MP", 0x3f1680, 0x3f1800, indexSF3NGSprites_Yun, 0x24 },
    { L"Yun Losing Portrait HP", 0x3f1800, 0x3f1980, indexSF3NGSprites_Yun, 0x24 },
    { L"Yang Losing Portrait LK", 0x3f4500, 0x3f4600, indexSF3NGSprites_Yang, 0x24 },
    { L"Yang Losing Portrait MK", 0x3f4600, 0x3f4700, indexSF3NGSprites_Yang, 0x24 },
    { L"Yang Losing Portrait HK", 0x3f4700, 0x3f4800, indexSF3NGSprites_Yang, 0x24 },

    { L"Yun Character Select Icon", 0x3e7580, 0x3e7600, indexSF3NGSprites_Yun, 0x22 },
    { L"Yang Character Select Icon", 0x3e7900, 0x3e7980, indexSF3NGSprites_Yang, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_PORTRAIT_PALETTES[] =
{
    { L"Dudley Select Portrait", 0x3e8d80, 0x3e8e00, indexSF3NGSprites_Dudley, 0x26 },

    { L"Dudley Winning Portrait LP", 0x3edf00, 0x3ee000, indexSF3NGSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait MP", 0x3ee000, 0x3ee100, indexSF3NGSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait HP", 0x3ee100, 0x3ee200, indexSF3NGSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait LK", 0x3ee200, 0x3ee300, indexSF3NGSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait MK", 0x3ee300, 0x3ee400, indexSF3NGSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait HK", 0x3ee400, 0x3ee500, indexSF3NGSprites_Dudley, 0x28 },

    { L"Dudley Losing Portrait LP", 0x3f1e00, 0x3f1f80, indexSF3NGSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait MP", 0x3f1f80, 0x3f2100, indexSF3NGSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait HP", 0x3f2100, 0x3f2280, indexSF3NGSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait LK", 0x3f2280, 0x3f2400, indexSF3NGSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait MK", 0x3f2400, 0x3f2580, indexSF3NGSprites_Dudley, 0x24 },
    { L"Dudley Losing Portrait HK", 0x3f2580, 0x3f2700, indexSF3NGSprites_Dudley, 0x24 },

    { L"Dudley Character Select Icon", 0x3e7600, 0x3e7680, indexSF3NGSprites_Dudley, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_PORTRAIT_PALETTES[] =
{
    { L"Necro Select Portrait", 0x3e8e00, 0x3e8e80, indexSF3NGSprites_Necro, 0x26 },

    { L"Necro Winning Portrait LP", 0x3ee500, 0x3ee580, indexSF3NGSprites_Necro, 0x28 },
    { L"Necro Winning Portrait MP", 0x3ee580, 0x3ee600, indexSF3NGSprites_Necro, 0x28 },
    { L"Necro Winning Portrait HP", 0x3ee600, 0x3ee680, indexSF3NGSprites_Necro, 0x28 },
    { L"Necro Winning Portrait LK", 0x3ee680, 0x3ee700, indexSF3NGSprites_Necro, 0x28 },
    { L"Necro Winning Portrait MK", 0x3ee700, 0x3ee780, indexSF3NGSprites_Necro, 0x28 },
    { L"Necro Winning Portrait HK", 0x3ee780, 0x3ee800, indexSF3NGSprites_Necro, 0x28 },

    { L"Necro Losing Portrait LP", 0x3f2700, 0x3f2800, indexSF3NGSprites_Necro, 0x24 },
    { L"Necro Losing Portrait MP", 0x3f2800, 0x3f2900, indexSF3NGSprites_Necro, 0x24 },
    { L"Necro Losing Portrait HP", 0x3f2900, 0x3f2a00, indexSF3NGSprites_Necro, 0x24 },
    { L"Necro Losing Portrait LK", 0x3f2a00, 0x3f2b00, indexSF3NGSprites_Necro, 0x24 },
    { L"Necro Losing Portrait MK", 0x3f2b00, 0x3f2c00, indexSF3NGSprites_Necro, 0x24 },
    { L"Necro Losing Portrait HK", 0x3f2c00, 0x3f2d00, indexSF3NGSprites_Necro, 0x24 },

    { L"Necro Character Select Icon", 0x3e7680, 0x3e7700, indexSF3NGSprites_Necro, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_PORTRAIT_PALETTES[] =
{
    { L"Ibuki Select Portrait", 0x3e8f00, 0x3e8f80, indexSF3NGSprites_Ibuki, 0x26 },

    { L"Ibuki Winning Portrait LP", 0x3eee00, 0x3eee80, indexSF3NGSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait MP", 0x3eee80, 0x3eef00, indexSF3NGSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait HP", 0x3eef00, 0x3eef80, indexSF3NGSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait LK", 0x3eef80, 0x3ef000, indexSF3NGSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait MK", 0x3ef000, 0x3ef080, indexSF3NGSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait HK", 0x3ef080, 0x3ef100, indexSF3NGSprites_Ibuki, 0x28 },

    { L"Ibuki Losing Portrait LP", 0x3f3600, 0x3f3700, indexSF3NGSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait MP", 0x3f3700, 0x3f3800, indexSF3NGSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait HP", 0x3f3800, 0x3f3900, indexSF3NGSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait LK", 0x3f3900, 0x3f3a00, indexSF3NGSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait MK", 0x3f3a00, 0x3f3b00, indexSF3NGSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait HK", 0x3f3b00, 0x3f3c00, indexSF3NGSprites_Ibuki, 0x24 },

    { L"Ibuki Character Select Icon", 0x3e7780, 0x3e7800, indexSF3NGSprites_Ibuki, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_PORTRAIT_PALETTES[] =
{
    { L"Hugo Character Select Icon", 0x3e7700, 0x3e7780, indexSF3NGSprites_Hugo, 0x22 },
    { L"Hugo Select Portrait", 0x3e8e80, 0x3e8f00, indexSF3NGSprites_Hugo, 0x26 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_PORTRAIT_PALETTES[] =
{
    { L"Elena Select Portrait", 0x3e8f80, 0x3e9000, indexSF3NGSprites_Elena, 0x26 },

    { L"Elena Winning Portrait LP", 0x3ef100, 0x3ef200, indexSF3NGSprites_Elena, 0x28 },
    { L"Elena Winning Portrait MP", 0x3ef200, 0x3ef300, indexSF3NGSprites_Elena, 0x28 },
    { L"Elena Winning Portrait HP", 0x3ef300, 0x3ef400, indexSF3NGSprites_Elena, 0x28 },
    { L"Elena Winning Portrait LK", 0x3ef400, 0x3ef500, indexSF3NGSprites_Elena, 0x28 },
    { L"Elena Winning Portrait MK", 0x3ef500, 0x3ef600, indexSF3NGSprites_Elena, 0x28 },
    { L"Elena Winning Portrait HK", 0x3ef600, 0x3ef700, indexSF3NGSprites_Elena, 0x28 },

    { L"Elena Losing Portrait LP", 0x3f3c00, 0x3f3d00, indexSF3NGSprites_Elena, 0x24 },
    { L"Elena Losing Portrait MP", 0x3f3d00, 0x3f3e00, indexSF3NGSprites_Elena, 0x24 },
    { L"Elena Losing Portrait HP", 0x3f3e00, 0x3f3f00, indexSF3NGSprites_Elena, 0x24 },
    { L"Elena Losing Portrait LK", 0x3f3f00, 0x3f4000, indexSF3NGSprites_Elena, 0x24 },
    { L"Elena Losing Portrait MK", 0x3f4000, 0x3f4100, indexSF3NGSprites_Elena, 0x24 },
    { L"Elena Losing Portrait HK", 0x3f4100, 0x3f4200, indexSF3NGSprites_Elena, 0x24 },

    { L"Elena Character Select Icon", 0x3e7800, 0x3e7880, indexSF3NGSprites_Elena, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_ORO_PORTRAIT_PALETTES[] =
{
    { L"Oro Select Portrait", 0x3e9000, 0x3e9080, indexSF3NGSprites_Oro, 0x26 },

    { L"Oro Winning Portrait LP", 0x3ef700, 0x3ef780, indexSF3NGSprites_Oro, 0x28 },
    { L"Oro Winning Portrait MP", 0x3ef780, 0x3ef800, indexSF3NGSprites_Oro, 0x28 },
    { L"Oro Winning Portrait HP", 0x3ef800, 0x3ef880, indexSF3NGSprites_Oro, 0x28 },
    { L"Oro Winning Portrait LK", 0x3ef880, 0x3ef900, indexSF3NGSprites_Oro, 0x28 },
    { L"Oro Winning Portrait MK", 0x3ef900, 0x3ef980, indexSF3NGSprites_Oro, 0x28 },
    { L"Oro Winning Portrait HK", 0x3ef980, 0x3efa00, indexSF3NGSprites_Oro, 0x28 },

    { L"Oro Losing Portrait LP", 0x3f4200, 0x3f4280, indexSF3NGSprites_Oro, 0x24 },
    { L"Oro Losing Portrait MP", 0x3f4280, 0x3f4300, indexSF3NGSprites_Oro, 0x24 },
    { L"Oro Losing Portrait HP", 0x3f4300, 0x3f4380, indexSF3NGSprites_Oro, 0x24 },
    { L"Oro Losing Portrait LK", 0x3f4380, 0x3f4400, indexSF3NGSprites_Oro, 0x24 },
    { L"Oro Losing Portrait MK", 0x3f4400, 0x3f4480, indexSF3NGSprites_Oro, 0x24 },
    { L"Oro Losing Portrait HK", 0x3f4480, 0x3f4500, indexSF3NGSprites_Oro, 0x24 },

    { L"Oro Character Select Icon", 0x3e7880, 0x3e7900, indexSF3NGSprites_Oro, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_KEN_PORTRAIT_PALETTES[] =
{
    { L"Ken Select Portrait", 0x3e9100, 0x3e9180, indexSF3NGSprites_Ken, 0x26 },

    { L"Ken Winning Portrait LP", 0x3efd00, 0x3efd80, indexSF3NGSprites_Ken, 0x28 },
    { L"Ken Winning Portrait MP", 0x3efd80, 0x3efe00, indexSF3NGSprites_Ken, 0x28 },
    { L"Ken Winning Portrait HP", 0x3efe00, 0x3efe80, indexSF3NGSprites_Ken, 0x28 },
    { L"Ken Winning Portrait LK", 0x3efe80, 0x3eff00, indexSF3NGSprites_Ken, 0x28 },
    { L"Ken Winning Portrait MK", 0x3eff00, 0x3eff80, indexSF3NGSprites_Ken, 0x28 },
    { L"Ken Winning Portrait HK", 0x3eff80, 0x3f0000, indexSF3NGSprites_Ken, 0x28 },

    { L"Ken Losing Portrait LP", 0x3f4b00, 0x3f4c00, indexSF3NGSprites_Ken, 0x24 },
    { L"Ken Losing Portrait MP", 0x3f4c00, 0x3f4d00, indexSF3NGSprites_Ken, 0x24 },
    { L"Ken Losing Portrait HP", 0x3f4d00, 0x3f4e00, indexSF3NGSprites_Ken, 0x24 },
    { L"Ken Losing Portrait LK", 0x3f4e00, 0x3f4f00, indexSF3NGSprites_Ken, 0x24 },
    { L"Ken Losing Portrait MK", 0x3f4f00, 0x3f5000, indexSF3NGSprites_Ken, 0x24 },
    { L"Ken Losing Portrait HK", 0x3f5000, 0x3f5100, indexSF3NGSprites_Ken, 0x24 },

    { L"Ken Character Select Icon", 0x3e7980, 0x3e7a00, indexSF3NGSprites_Ken, 0x22 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_PORTRAIT_PALETTES[] =
{
    { L"Sean Select Portrait", 0x3e9180, 0x3e9200, indexSF3NGSprites_Sean, 0x26 },

    { L"Sean Winning Portrait LP", 0x3f0000, 0x3f0100, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait MP", 0x3f0100, 0x3f0200, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait HP", 0x3f0200, 0x3f0300, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait LK", 0x3f0300, 0x3f0400, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait MK", 0x3f0400, 0x3f0500, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait HK", 0x3f0500, 0x3f0600, index3SSprites_Sean, 0x28 },

    { L"Sean Losing Portrait LP", 0x3f5100, 0x3f5280, indexSF3NGSprites_Sean, 0x24 },
    { L"Sean Losing Portrait MP", 0x3f5280, 0x3f5400, indexSF3NGSprites_Sean, 0x24 },
    { L"Sean Losing Portrait HP", 0x3f5400, 0x3f5580, indexSF3NGSprites_Sean, 0x24 },
    { L"Sean Losing Portrait LK", 0x3f5580, 0x3f5700, indexSF3NGSprites_Sean, 0x24 },
    { L"Sean Losing Portrait MK", 0x3f5700, 0x3f5880, indexSF3NGSprites_Sean, 0x24 },
    { L"Sean Losing Portrait HK", 0x3f5880, 0x3f5a00, indexSF3NGSprites_Sean, 0x24 },

    { L"Sean Character Select Icon", 0x3e7a00, 0x3e7a80, indexSF3NGSprites_Sean, 0x22 },
};

const sDescTreeNode SFIII1_A_ALEX_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_LP_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_MP_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_HP_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_LK_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_MK_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_HK_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_Support_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_ALEX_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII1_A_RYU_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_LP_PALETTES, ARRAYSIZE(SFIII1_A_RYU_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_MP_PALETTES, ARRAYSIZE(SFIII1_A_RYU_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_HP_PALETTES, ARRAYSIZE(SFIII1_A_RYU_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_LK_PALETTES, ARRAYSIZE(SFIII1_A_RYU_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_MK_PALETTES, ARRAYSIZE(SFIII1_A_RYU_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_HK_PALETTES, ARRAYSIZE(SFIII1_A_RYU_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_Support_PALETTES, ARRAYSIZE(SFIII1_A_RYU_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_RYU_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_RYU_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII1_A_YUNYANG_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_LP_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_MP_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_HP_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_LK_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_MK_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_HK_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_Support_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_YUNYANG_PORTRAIT_PALETTES) }, 
};

const sDescTreeNode SFIII1_A_DUDLEY_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_LP_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_MP_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_HP_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_LK_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_MK_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_HK_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_Support_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_DUDLEY_EXTRA_PALETTES) },
};

const sGame_PaletteDataset SFIII1_A_NECRO_ELECTRIC_SNAKE_PALETTES[] =
{
    { L"Necro LP Electric Snake", 0x3d5900, 0x3d5980, indexSF3NGSprites_Necro, 0x40 },
    { L"Necro MP Electric Snake", 0x3d5a80, 0x3d5b00, indexSF3NGSprites_Necro, 0x40 },
    { L"Necro HP Electric Snake", 0x3d5c00, 0x3d5c80, indexSF3NGSprites_Necro, 0x40 },
    { L"Necro LK Electric Snake", 0x3d5d80, 0x3d5e00, indexSF3NGSprites_Necro, 0x40 },
    { L"Necro MK Electric Snake", 0x3d5f00, 0x3d5f80, indexSF3NGSprites_Necro, 0x40 },
    { L"Necro HK Electric Snake", 0x3d6080, 0x3d6100, indexSF3NGSprites_Necro, 0x40 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_MAGNETIC_STORM_FLASH_PALETTES[] =
{
    { L"Necro LP Magnetic Storm Flash", 0x3d5980, 0x3d5a00, indexSF3NGSprites_Necro, 0x41 },
    { L"Necro MP Magnetic Storm Flash", 0x3d5b00, 0x3d5b80, indexSF3NGSprites_Necro, 0x41 },
    { L"Necro HP Magnetic Storm Flash", 0x3d5c80, 0x3d5d00, indexSF3NGSprites_Necro, 0x41 },
    { L"Necro LK Magnetic Storm Flash", 0x3d5e00, 0x3d5e80, indexSF3NGSprites_Necro, 0x41 },
    { L"Necro MK Magnetic Storm Flash", 0x3d5f80, 0x3d6000, indexSF3NGSprites_Necro, 0x41 },
    { L"Necro HK Magnetic Storm Flash", 0x3d6100, 0x3d6180, indexSF3NGSprites_Necro, 0x41 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_MAGNETIC_STORM_SILHOUETTE_PALETTES[] =
{
    { L"Necro LP Magnetic Storm Silhouette", 0x3d5a00, 0x3d5a80, indexSF3NGSprites_Necro, 0x42 },
    { L"Necro MP Magnetic Storm Silhouette", 0x3d5b80, 0x3d5c00, indexSF3NGSprites_Necro, 0x42 },
    { L"Necro HP Magnetic Storm Silhouette", 0x3d5d00, 0x3d5d80, indexSF3NGSprites_Necro, 0x42 },
    { L"Necro LK Magnetic Storm Silhouette", 0x3d5e80, 0x3d5f00, indexSF3NGSprites_Necro, 0x42 },
    { L"Necro MK Magnetic Storm Silhouette", 0x3d6000, 0x3d6080, indexSF3NGSprites_Necro, 0x42 },
    { L"Necro HK Magnetic Storm Silhouette", 0x3d6180, 0x3d6200, indexSF3NGSprites_Necro, 0x42 },
};

const sDescTreeNode SFIII1_A_NECRO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_LP_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_MP_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_HP_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_LK_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_MK_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_HK_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_Support_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_PORTRAIT_PALETTES) },
    { L"Electric Snake", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_ELECTRIC_SNAKE_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_ELECTRIC_SNAKE_PALETTES) },
    { L"Magnetic Storm Flash", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_MAGNETIC_STORM_FLASH_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_MAGNETIC_STORM_FLASH_PALETTES) },
    { L"Magnetic Storm Silhouette", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_MAGNETIC_STORM_SILHOUETTE_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_MAGNETIC_STORM_SILHOUETTE_PALETTES) },
};

const sDescTreeNode SFIII1_A_HUGO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_LP_PALETTES, ARRAYSIZE(SFIII1_A_HUGO_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_MP_PALETTES, ARRAYSIZE(SFIII1_A_HUGO_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_HP_PALETTES, ARRAYSIZE(SFIII1_A_HUGO_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_LK_PALETTES, ARRAYSIZE(SFIII1_A_HUGO_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_MK_PALETTES, ARRAYSIZE(SFIII1_A_HUGO_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_HK_PALETTES, ARRAYSIZE(SFIII1_A_HUGO_HK_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_HUGO_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFIII1_A_GILL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_LP_PALETTES, ARRAYSIZE(SFIII1_A_GILL_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_MP_PALETTES, ARRAYSIZE(SFIII1_A_GILL_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_HP_PALETTES, ARRAYSIZE(SFIII1_A_GILL_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_LK_PALETTES, ARRAYSIZE(SFIII1_A_GILL_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_MK_PALETTES, ARRAYSIZE(SFIII1_A_GILL_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_HK_PALETTES, ARRAYSIZE(SFIII1_A_GILL_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_Support_PALETTES, ARRAYSIZE(SFIII1_A_GILL_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_GILL_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_GILL_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII1_A_IBUKI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_LP_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_MP_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_HP_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_LK_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_MK_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_HK_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_Support_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_IBUKI_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII1_A_ELENA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_LP_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_MP_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_HP_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_LK_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_MK_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_HK_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_Support_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_ELENA_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII1_A_ORO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_LP_PALETTES, ARRAYSIZE(SFIII1_A_ORO_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_MP_PALETTES, ARRAYSIZE(SFIII1_A_ORO_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_HP_PALETTES, ARRAYSIZE(SFIII1_A_ORO_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_LK_PALETTES, ARRAYSIZE(SFIII1_A_ORO_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_MK_PALETTES, ARRAYSIZE(SFIII1_A_ORO_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_HK_PALETTES, ARRAYSIZE(SFIII1_A_ORO_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_Support_PALETTES, ARRAYSIZE(SFIII1_A_ORO_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_ORO_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_ORO_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII1_A_KEN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_LP_PALETTES, ARRAYSIZE(SFIII1_A_KEN_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_MP_PALETTES, ARRAYSIZE(SFIII1_A_KEN_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_HP_PALETTES, ARRAYSIZE(SFIII1_A_KEN_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_LK_PALETTES, ARRAYSIZE(SFIII1_A_KEN_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_MK_PALETTES, ARRAYSIZE(SFIII1_A_KEN_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_HK_PALETTES, ARRAYSIZE(SFIII1_A_KEN_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_Support_PALETTES, ARRAYSIZE(SFIII1_A_KEN_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_KEN_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_KEN_EXTRA_PALETTES) },
};

const sDescTreeNode SFIII1_A_SEAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_LP_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_LP_PALETTES) },
    { L"MP", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_MP_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_MP_PALETTES) },
    { L"HP", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_HP_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_HP_PALETTES) },
    { L"LK", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_LK_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_LK_PALETTES) },
    { L"MK", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_MK_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_MK_PALETTES) },
    { L"HK", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_HK_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_HK_PALETTES) },
    { L"Support", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_Support_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_Support_PALETTES) },
    { L"Portraits and Select Icon", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_PORTRAIT_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_PORTRAIT_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_SEAN_EXTRA_PALETTES) },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND1_PALETTES[] =
{
    { L"Ibuki Stage Round 1 1/5", 0x3c6400, 0x3c6600, indexSF3NGSprites_Stages, 0xa6, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 1 2/5", 0x3c6600, 0x3c6800, indexSF3NGSprites_Stages, 0xa8, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 1 3/5", 0x3c6800, 0x3c6a00, indexSF3NGSprites_Stages, 0xaa, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 1 4/5", 0x3c6a00, 0x3c6c00, indexSF3NGSprites_Stages, 0xac, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 1 5/5", 0x3c6c00, 0x3c6c80, indexSF3NGSprites_Stages, 0xae, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 1 Extras 1/5", 0x3dc800, 0x3dca00, indexSF3NGSprites_Stages, 0xb0 },
    { L"Ibuki Stage Round 1 Extras 2/5", 0x3dca00, 0x3dcc00, indexSF3NGSprites_Stages, 0xb1 },
    { L"Ibuki Stage Round 1 Extras 3/5", 0x3dcc00, 0x3dce00, indexSF3NGSprites_Stages, 0xb2 },
    { L"Ibuki Stage Round 1 Extras 4/5", 0x3dce00, 0x3dd000, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ibuki Stage Round 1 Extras 5/5", 0x3dd000, 0x3dd080, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND1_FADED_PALETTES[] =
{
    { L"Ibuki Stage Round 1 (Faded) 1/5", 0x3c6c80, 0x3c6e80, indexSF3NGSprites_Stages, 0xa7, &pairFullyLinkedNode },
    { L"Ibuki Stage Round 1 (Faded) 2/5", 0x3c6e80, 0x3c7080, indexSF3NGSprites_Stages, 0xa9 },
    { L"Ibuki Stage Round 1 (Faded) 3/5", 0x3c7080, 0x3c7280, indexSF3NGSprites_Stages, 0xab },
    { L"Ibuki Stage Round 1 (Faded) 4/5", 0x3c7280, 0x3c7480, indexSF3NGSprites_Stages, 0xad },
    { L"Ibuki Stage Round 1 (Faded) 5/5", 0x3c7480, 0x3c7500, indexSF3NGSprites_Stages, 0xaf },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND2_PALETTES[] =
{
    { L"Ibuki Stage Round 2 1/5", 0x3c4200, 0x3c4400, indexSF3NGSprites_Stages, 0xb3, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 2 2/5", 0x3c4400, 0x3c4600, indexSF3NGSprites_Stages, 0xb5, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 2 3/5", 0x3c4600, 0x3c4800, indexSF3NGSprites_Stages, 0xb7, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 2 4/5", 0x3c4800, 0x3c4a00, indexSF3NGSprites_Stages, 0xb9, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 2 5/5", 0x3c4a00, 0x3c4a80, indexSF3NGSprites_Stages, 0xbb, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 2 Extras 1/5", 0x3dd080, 0x3dd280, indexSF3NGSprites_Stages, 0xbd },
    { L"Ibuki Stage Round 2 Extras 2/5", 0x3dd280, 0x3dd480, indexSF3NGSprites_Stages, 0xbe },
    { L"Ibuki Stage Round 2 Extras 3/5", 0x3dd480, 0x3dd680, indexSF3NGSprites_Stages, 0xbf },
    { L"Ibuki Stage Round 2 Extras 4/5", 0x3dd680, 0x3dd880, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ibuki Stage Round 2 Extras 5/5", 0x3dd880, 0x3dd900, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND2_FADED_PALETTES[] =
{
    { L"Ibuki Stage Round 2 (Faded) 1/5", 0x3c4a80, 0x3c4c80, indexSF3NGSprites_Stages, 0xb4, &pairFullyLinkedNode },
    { L"Ibuki Stage Round 2 (Faded) 2/5", 0x3c4c80, 0x3c4e80, indexSF3NGSprites_Stages, 0xb6 },
    { L"Ibuki Stage Round 2 (Faded) 3/5", 0x3c4e80, 0x3c5080, indexSF3NGSprites_Stages, 0xb8 },
    { L"Ibuki Stage Round 2 (Faded) 4/5", 0x3c5080, 0x3c5280, indexSF3NGSprites_Stages, 0xba },
    { L"Ibuki Stage Round 2 (Faded) 5/5", 0x3c5280, 0x3c5300, indexSF3NGSprites_Stages, 0xbc },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND3_PALETTES[] =
{
    { L"Ibuki Stage Round 3 1/5", 0x3c5300, 0x3c5500, indexSF3NGSprites_Stages, 0xc0, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 3 2/5", 0x3c5500, 0x3c5700, indexSF3NGSprites_Stages, 0xc2, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 3 3/5", 0x3c5700, 0x3c5900, indexSF3NGSprites_Stages, 0xc4, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 3 4/5", 0x3c5900, 0x3c5b00, indexSF3NGSprites_Stages, 0xc6, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 3 5/5", 0x3c5b00, 0x3c5b80, indexSF3NGSprites_Stages, 0xc8, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ibuki Stage Round 3 Extras 1/5", 0x3dd900, 0x3ddb00, indexSF3NGSprites_Stages, 0xca },
    { L"Ibuki Stage Round 3 Extras 2/5", 0x3ddb00, 0x3ddd00, indexSF3NGSprites_Stages, 0xcb },
    { L"Ibuki Stage Round 3 Extras 3/5", 0x3ddd00, 0x3ddf00, indexSF3NGSprites_Stages, 0xcc },
    { L"Ibuki Stage Round 3 Extras 4/5", 0x3ddf00, 0x3de100, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ibuki Stage Round 3 Extras 5/5", 0x3de100, 0x3de180, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND3_FADED_PALETTES[] =
{
    { L"Ibuki Stage Round 3 (Faded) 1/5", 0x3c5b80, 0x3c5d80, indexSF3NGSprites_Stages, 0xc1, &pairFullyLinkedNode },
    { L"Ibuki Stage Round 3 (Faded) 2/5", 0x3c5d80, 0x3c5f80, indexSF3NGSprites_Stages, 0xc3 },
    { L"Ibuki Stage Round 3 (Faded) 3/5", 0x3c5f80, 0x3c6180, indexSF3NGSprites_Stages, 0xc5 },
    { L"Ibuki Stage Round 3 (Faded) 4/5", 0x3c6180, 0x3c6380, indexSF3NGSprites_Stages, 0xc7 },
    { L"Ibuki Stage Round 3 (Faded) 5/5", 0x3c6380, 0x3c6400, indexSF3NGSprites_Stages, 0xc9 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_GILL_PALETTES[] =
{
    { L"Gill Stage 1/7", 0x3b0000, 0x3b0200, indexSF3NGSprites_Stages, 0x00, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 2/7", 0x3b0200, 0x3b0400, indexSF3NGSprites_Stages, 0x02, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 3/7", 0x3b0400, 0x3b0600, indexSF3NGSprites_Stages, 0x04, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 4/7", 0x3b0600, 0x3b0800, indexSF3NGSprites_Stages, 0x06, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 5/7", 0x3b0800, 0x3b0a00, indexSF3NGSprites_Stages, 0x08, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 6/7", 0x3b0a00, 0x3b0c00, indexSF3NGSprites_Stages, 0x0a, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 7/7", 0x3b0c00, 0x3b0c80, indexSF3NGSprites_Stages, 0x0c, nullptr, &secondaryGreyTintEffects_Skip6 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_GILL_FADED_PALETTES[] =
{
    { L"Gill Stage (Faded) 1/7", 0x3b0c80, 0x3b0e80, indexSF3NGSprites_Stages, 0x01, &pairFullyLinkedNode },
    { L"Gill Stage (Faded) 2/7", 0x3b0e80, 0x3b1080, indexSF3NGSprites_Stages, 0x03 },
    { L"Gill Stage (Faded) 3/7", 0x3b1080, 0x3b1280, indexSF3NGSprites_Stages, 0x05 },
    { L"Gill Stage (Faded) 4/7", 0x3b1280, 0x3b1480, indexSF3NGSprites_Stages, 0x07 },
    { L"Gill Stage (Faded) 5/7", 0x3b1480, 0x3b1680, indexSF3NGSprites_Stages, 0x09 },
    { L"Gill Stage (Faded) 6/7", 0x3b1680, 0x3b1880, indexSF3NGSprites_Stages, 0x0b },
    { L"Gill Stage (Faded) 7/7", 0x3b1880, 0x3b1900, indexSF3NGSprites_Stages, 0x0d },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ALEX_PALETTES[] =
{
    { L"Alex Stage 1/7", 0x3b3800, 0x3b3a00, indexSF3NGSprites_Stages, 0x0e, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip7 },
    { L"Alex Stage 2/7", 0x3b3a00, 0x3b3c00, indexSF3NGSprites_Stages, 0x10, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Alex Stage 3/7", 0x3b3c00, 0x3b3e00, indexSF3NGSprites_Stages, 0x12, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Alex Stage 4/7", 0x3b3e00, 0x3b4000, indexSF3NGSprites_Stages, 0x14, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Alex Stage 5/7", 0x3b4000, 0x3b4200, indexSF3NGSprites_Stages, 0x16, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Alex Stage 6/7", 0x3b4200, 0x3b4400, indexSF3NGSprites_Stages, 0x18, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Alex Stage 7/7", 0x3b4400, 0x3b4600, indexSF3NGSprites_Stages, 0x1a, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Alex Stage Extras", 0x3db680, 0x3db780, indexSF3NGSprites_Stages, 0x1c },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ALEX_FADED_PALETTES[] =
{
    { L"Alex Stage (Faded) 1/7", 0x3b4600, 0x3b4800, indexSF3NGSprites_Stages, 0x0f, &pairFullyLinkedNode },
    { L"Alex Stage (Faded) 2/7", 0x3b4800, 0x3b4a00, indexSF3NGSprites_Stages, 0x11 },
    { L"Alex Stage (Faded) 3/7", 0x3b4a00, 0x3b4c00, indexSF3NGSprites_Stages, 0x13 },
    { L"Alex Stage (Faded) 4/7", 0x3b4c00, 0x3b4e00, indexSF3NGSprites_Stages, 0x15 },
    { L"Alex Stage (Faded) 5/7", 0x3b4e00, 0x3b5000, indexSF3NGSprites_Stages, 0x17 },
    { L"Alex Stage (Faded) 6/7", 0x3b5000, 0x3b5200, indexSF3NGSprites_Stages, 0x19 },
    { L"Alex Stage (Faded) 7/7", 0x3b5200, 0x3b5400, indexSF3NGSprites_Stages, 0x1b },
};

const sGame_PaletteDataset SFIII1_A_STAGE_SEAN_PALETTES[] =
{
    { L"Sean Stage 1/6", 0x3b5400, 0x3b5600, indexSF3NGSprites_Stages, 0x1d, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip7 },
    { L"Sean Stage 2/6", 0x3b5600, 0x3b5800, indexSF3NGSprites_Stages, 0x1f, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Sean Stage 3/6", 0x3b5800, 0x3b5a00, indexSF3NGSprites_Stages, 0x21, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Sean Stage 4/6", 0x3b5a00, 0x3b5c00, indexSF3NGSprites_Stages, 0x23, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Sean Stage 5/6", 0x3b5c00, 0x3b5e00, indexSF3NGSprites_Stages, 0x25, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Sean Stage 6/6", 0x3b5e00, 0x3b6000, indexSF3NGSprites_Stages, 0x27, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Sean Stage Extras 1/2", 0x3dc400, 0x3dc600, indexSF3NGSprites_Stages, 0x29 },
    { L"Sean Stage Extras 2/2", 0x3dc600, 0x3dc800, indexSF3NGSprites_Stages, 0x2a },
};

const sGame_PaletteDataset SFIII1_A_STAGE_SEAN_FADED_PALETTES[] =
{
    { L"Sean Stage (Faded) 1/6", 0x3b6000, 0x3b6200, indexSF3NGSprites_Stages, 0x1e, &pairFullyLinkedNode },
    { L"Sean Stage (Faded) 2/6", 0x3b6200, 0x3b6400, indexSF3NGSprites_Stages, 0x20 },
    { L"Sean Stage (Faded) 3/6", 0x3b6400, 0x3b6600, indexSF3NGSprites_Stages, 0x22 },
    { L"Sean Stage (Faded) 4/6", 0x3b6600, 0x3b6800, indexSF3NGSprites_Stages, 0x24 },
    { L"Sean Stage (Faded) 5/6", 0x3b6800, 0x3b6a00, indexSF3NGSprites_Stages, 0x26 },
    { L"Sean Stage (Faded) 6/6", 0x3b6a00, 0x3b6c00, indexSF3NGSprites_Stages, 0x28 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_RYU_PALETTES[] =
{
    { L"Ryu Stage 1/9", 0x3b6c00, 0x3b6e00, indexSF3NGSprites_Stages, 0x2b, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 2/9", 0x3b6e00, 0x3b7000, indexSF3NGSprites_Stages, 0x2d, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 3/9", 0x3b7000, 0x3b7200, indexSF3NGSprites_Stages, 0x2f, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 4/9", 0x3b7200, 0x3b7400, indexSF3NGSprites_Stages, 0x31, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 5/9", 0x3b7400, 0x3b7600, indexSF3NGSprites_Stages, 0x33, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 6/9", 0x3b7600, 0x3b7800, indexSF3NGSprites_Stages, 0x35, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 7/9", 0x3b7800, 0x3b7a00, indexSF3NGSprites_Stages, 0x37, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 8/9", 0x3b7a00, 0x3b7c00, indexSF3NGSprites_Stages, 0x39, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage 9/9", 0x3b7c00, 0x3b7d80, indexSF3NGSprites_Stages, 0x3b, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Ryu Stage Extras", 0x3dc280, 0x3dc400, indexSF3NGSprites_Stages, 0x3d },
};

const sGame_PaletteDataset SFIII1_A_STAGE_RYU_FADED_PALETTES[] =
{
    { L"Ryu Stage (Faded) 1/9", 0x3b7d80, 0x3b7f80, indexSF3NGSprites_Stages, 0x2c, &pairFullyLinkedNode },
    { L"Ryu Stage (Faded) 2/9", 0x3b7f80, 0x3b8180, indexSF3NGSprites_Stages, 0x2e },
    { L"Ryu Stage (Faded) 3/9", 0x3b8180, 0x3b8380, indexSF3NGSprites_Stages, 0x30 },
    { L"Ryu Stage (Faded) 4/9", 0x3b8380, 0x3b8580, indexSF3NGSprites_Stages, 0x32 },
    { L"Ryu Stage (Faded) 5/9", 0x3b8580, 0x3b8780, indexSF3NGSprites_Stages, 0x34 },
    { L"Ryu Stage (Faded) 6/9", 0x3b8780, 0x3b8980, indexSF3NGSprites_Stages, 0x36 },
    { L"Ryu Stage (Faded) 7/9", 0x3b8980, 0x3b8b80, indexSF3NGSprites_Stages, 0x38 },
    { L"Ryu Stage (Faded) 8/9", 0x3b8b80, 0x3b8d80, indexSF3NGSprites_Stages, 0x3a },
    { L"Ryu Stage (Faded) 9/9", 0x3b8d80, 0x3b8f00, indexSF3NGSprites_Stages, 0x3c },
};

const sGame_PaletteDataset SFIII1_A_STAGE_KEN_PALETTES[] =
{
    { L"Ken Stage 1/7", 0x3b8f00, 0x3b9100, indexSF3NGSprites_Stages, 0x3e, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip8 },
    { L"Ken Stage 2/7", 0x3b9100, 0x3b9300, indexSF3NGSprites_Stages, 0x40, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ken Stage 3/7", 0x3b9300, 0x3b9500, indexSF3NGSprites_Stages, 0x42, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ken Stage 4/7", 0x3b9500, 0x3b9700, indexSF3NGSprites_Stages, 0x44, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ken Stage 5/7", 0x3b9700, 0x3b9900, indexSF3NGSprites_Stages, 0x46, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ken Stage 6/7", 0x3b9900, 0x3b9b00, indexSF3NGSprites_Stages, 0x48, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ken Stage 7/7", 0x3b9b00, 0x3b9c00, indexSF3NGSprites_Stages, 0x4a, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ken Stage Extras 1/2", 0x3db380, 0x3db580, indexSF3NGSprites_Stages, 0x4c },
    { L"Ken Stage Extras 2/2", 0x3db580, 0x3db680, indexSF3NGSprites_Stages, 0x4d },
};

const sGame_PaletteDataset SFIII1_A_STAGE_KEN_FADED_PALETTES[] =
{
    { L"Ken Stage (Faded) 1/7", 0x3b9c00, 0x3b9e00, indexSF3NGSprites_Stages, 0x3f, &pairFullyLinkedNode },
    { L"Ken Stage (Faded) 2/7", 0x3b9e00, 0x3ba000, indexSF3NGSprites_Stages, 0x41 },
    { L"Ken Stage (Faded) 3/7", 0x3ba000, 0x3ba200, indexSF3NGSprites_Stages, 0x43 },
    { L"Ken Stage (Faded) 4/7", 0x3ba200, 0x3ba400, indexSF3NGSprites_Stages, 0x45 },
    { L"Ken Stage (Faded) 5/7", 0x3ba400, 0x3ba600, indexSF3NGSprites_Stages, 0x47 },
    { L"Ken Stage (Faded) 6/7", 0x3ba600, 0x3ba800, indexSF3NGSprites_Stages, 0x49 },
    { L"Ken Stage (Faded) 7/7", 0x3ba800, 0x3ba900, indexSF3NGSprites_Stages, 0x4b },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YUN_PALETTES[] =
{
    { L"Yun Stage 1/6", 0x3ba900, 0x3bab00, indexSF3NGSprites_Stages, 0x4e, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip8 },
    { L"Yun Stage 2/6", 0x3bab00, 0x3bad00, indexSF3NGSprites_Stages, 0x50, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Yun Stage 3/6", 0x3bad00, 0x3baf00, indexSF3NGSprites_Stages, 0x52, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Yun Stage 4/6", 0x3baf00, 0x3bb100, indexSF3NGSprites_Stages, 0x54, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Yun Stage 5/6", 0x3bb100, 0x3bb300, indexSF3NGSprites_Stages, 0x56, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Yun Stage 6/6", 0x3bb300, 0x3bb380, indexSF3NGSprites_Stages, 0x58, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Yun Stage Extras 1/3", 0x3dba80, 0x3dbc80, indexSF3NGSprites_Stages, 0x5a },
    { L"Yun Stage Extras 2/3", 0x3dbc80, 0x3dbe80, indexSF3NGSprites_Stages, 0x5b },
    { L"Yun Stage Extras 3/3", 0x3dbe80, 0x3dbf00, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YUN_FADED_PALETTES[] =
{
    { L"Yun Stage (Faded) 1/6", 0x3bb380, 0x3bb580, indexSF3NGSprites_Stages, 0x4f, &pairFullyLinkedNode },
    { L"Yun Stage (Faded) 2/6", 0x3bb580, 0x3bb780, indexSF3NGSprites_Stages, 0x51 },
    { L"Yun Stage (Faded) 3/6", 0x3bb780, 0x3bb980, indexSF3NGSprites_Stages, 0x53 },
    { L"Yun Stage (Faded) 4/6", 0x3bb980, 0x3bbb80, indexSF3NGSprites_Stages, 0x55 },
    { L"Yun Stage (Faded) 5/6", 0x3bbb80, 0x3bbd80, indexSF3NGSprites_Stages, 0x57 },
    { L"Yun Stage (Faded) 6/6", 0x3bbd80, 0x3bbe00, indexSF3NGSprites_Stages, 0x59 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YANG_PALETTES[] =
{
    { L"Yang Stage 1/4", 0x3bbe00, 0x3bc000, indexSF3NGSprites_Stages, 0x5c, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip4 },
    { L"Yang Stage 2/4", 0x3bc000, 0x3bc200, indexSF3NGSprites_Stages, 0x5e, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Yang Stage 3/4", 0x3bc200, 0x3bc400, indexSF3NGSprites_Stages, 0x60, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Yang Stage 4/4", 0x3bc400, 0x3bc600, indexSF3NGSprites_Stages, 0x62, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Yang Stage Extras", 0x3dbf00, 0x3dc080, indexSF3NGSprites_Stages, 0x64 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YANG_FADED_PALETTES[] =
{
    { L"Yang Stage (Faded) 1/4", 0x3bc600, 0x3bc800, indexSF3NGSprites_Stages, 0x5d, &pairFullyLinkedNode },
    { L"Yang Stage (Faded) 2/4", 0x3bc800, 0x3bca00, indexSF3NGSprites_Stages, 0x5f },
    { L"Yang Stage (Faded) 3/4", 0x3bca00, 0x3bcc00, indexSF3NGSprites_Stages, 0x61 },
    { L"Yang Stage (Faded) 4/4", 0x3bcc00, 0x3bce00, indexSF3NGSprites_Stages, 0x63 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_NIGHT_PALETTES[] =
{
    { L"Dudley Stage Night 1/7", 0x3bce00, 0x3bd000, indexSF3NGSprites_Stages, 0x65, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip8 },
    { L"Dudley Stage Night 2/7", 0x3bd000, 0x3bd200, indexSF3NGSprites_Stages, 0x67, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Dudley Stage Night 3/7", 0x3bd200, 0x3bd400, indexSF3NGSprites_Stages, 0x69, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Dudley Stage Night 4/7", 0x3bd400, 0x3bd600, indexSF3NGSprites_Stages, 0x6b, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Dudley Stage Night 5/7", 0x3bd600, 0x3bd800, indexSF3NGSprites_Stages, 0x6d, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Dudley Stage Night 6/7", 0x3bd800, 0x3bda00, indexSF3NGSprites_Stages, 0x6f, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Dudley Stage Night 7/7", 0x3bda00, 0x3bda80, indexSF3NGSprites_Stages, 0x71, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Dudley Stage Night Extras 1/2", 0x3dad80, 0x3daf80, indexSF3NGSprites_Stages, 0x73 },
    { L"Dudley Stage Night Extras 2/2", 0x3daf80, 0x3db000, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_NIGHT_FADED_PALETTES[] =
{
    { L"Dudley Stage Night (Faded) 1/7", 0x3bda80, 0x3bdc80, indexSF3NGSprites_Stages, 0x66, &pairFullyLinkedNode },
    { L"Dudley Stage Night (Faded) 2/7", 0x3bdc80, 0x3bde80, indexSF3NGSprites_Stages, 0x68 },
    { L"Dudley Stage Night (Faded) 3/7", 0x3bde80, 0x3be080, indexSF3NGSprites_Stages, 0x6a },
    { L"Dudley Stage Night (Faded) 4/7", 0x3be080, 0x3be280, indexSF3NGSprites_Stages, 0x6c },
    { L"Dudley Stage Night (Faded) 5/7", 0x3be280, 0x3be480, indexSF3NGSprites_Stages, 0x6e },
    { L"Dudley Stage Night (Faded) 6/7", 0x3be480, 0x3be680, indexSF3NGSprites_Stages, 0x70 },
    { L"Dudley Stage Night (Faded) 7/7", 0x3be680, 0x3be700, indexSF3NGSprites_Stages, 0x72 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_DAY_PALETTES[] =
{
    { L"Dudley Stage Day 1/6", 0x3be700, 0x3be900, indexSF3NGSprites_Stages, 0x74, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip7 },
    { L"Dudley Stage Day 2/6", 0x3be900, 0x3beb00, indexSF3NGSprites_Stages, 0x76, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Dudley Stage Day 3/6", 0x3beb00, 0x3bed00, indexSF3NGSprites_Stages, 0x78, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Dudley Stage Day 4/6", 0x3bed00, 0x3bef00, indexSF3NGSprites_Stages, 0x7a, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Dudley Stage Day 5/6", 0x3bef00, 0x3bf100, indexSF3NGSprites_Stages, 0x7c, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Dudley Stage Day 6/6", 0x3bf100, 0x3bf300, indexSF3NGSprites_Stages, 0x7e, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Dudley Stage Day Extras 1/2", 0x3db000, 0x3db200, indexSF3NGSprites_Stages, 0x80 },
    { L"Dudley Stage Day Extras 2/2", 0x3db200, 0x3db380, indexSF3NGSprites_Stages, 0x81 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_DAY_FADED_PALETTES[] =
{
    { L"Dudley Stage Day (Faded) 1/6", 0x3bf300, 0x3bf500, indexSF3NGSprites_Stages, 0x75, &pairFullyLinkedNode },
    { L"Dudley Stage Day (Faded) 2/6", 0x3bf500, 0x3bf700, indexSF3NGSprites_Stages, 0x77 },
    { L"Dudley Stage Day (Faded) 3/6", 0x3bf700, 0x3bf900, indexSF3NGSprites_Stages, 0x79 },
    { L"Dudley Stage Day (Faded) 4/6", 0x3bf900, 0x3bfb00, indexSF3NGSprites_Stages, 0x7b },
    { L"Dudley Stage Day (Faded) 5/6", 0x3bfb00, 0x3bfd00, indexSF3NGSprites_Stages, 0x7d },
    { L"Dudley Stage Day (Faded) 6/6", 0x3bfd00, 0x3bff00, indexSF3NGSprites_Stages, 0x7f },
};

const sGame_PaletteDataset SFIII1_A_STAGE_NECRO_PALETTES[] =
{
    { L"Necro Stage 1/7", 0x3bff00, 0x3c0100, indexSF3NGSprites_Stages, 0x82, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip8 },
    { L"Necro Stage 2/7", 0x3c0100, 0x3c0300, indexSF3NGSprites_Stages, 0x84, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Necro Stage 3/7", 0x3c0300, 0x3c0500, indexSF3NGSprites_Stages, 0x86, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Necro Stage 4/7", 0x3c0500, 0x3c0700, indexSF3NGSprites_Stages, 0x88, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Necro Stage 5/7", 0x3c0700, 0x3c0900, indexSF3NGSprites_Stages, 0x8a, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Necro Stage 6/7", 0x3c0900, 0x3c0b00, indexSF3NGSprites_Stages, 0x8c, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Necro Stage 7/7", 0x3c0b00, 0x3c0b80, indexSF3NGSprites_Stages, 0x8e, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Necro Stage Extras 1/2", 0x3da580, 0x3da780, indexSF3NGSprites_Stages, 0x90 },
    { L"Necro Stage Extras 2/2", 0x3da780, 0x3da800, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_NECRO_FADED_PALETTES[] =
{
    { L"Necro Stage (Faded) 1/7", 0x3c0b80, 0x3c0d80, indexSF3NGSprites_Stages, 0x83, &pairFullyLinkedNode },
    { L"Necro Stage (Faded) 2/7", 0x3c0d80, 0x3c0f80, indexSF3NGSprites_Stages, 0x85 },
    { L"Necro Stage (Faded) 3/7", 0x3c0f80, 0x3c1180, indexSF3NGSprites_Stages, 0x87 },
    { L"Necro Stage (Faded) 4/7", 0x3c1180, 0x3c1380, indexSF3NGSprites_Stages, 0x89 },
    { L"Necro Stage (Faded) 5/7", 0x3c1380, 0x3c1580, indexSF3NGSprites_Stages, 0x8b },
    { L"Necro Stage (Faded) 6/7", 0x3c1580, 0x3c1780, indexSF3NGSprites_Stages, 0x8d },
    { L"Necro Stage (Faded) 7/7", 0x3c1780, 0x3c1800, indexSF3NGSprites_Stages, 0x8f },
};

const sGame_PaletteDataset SFIII1_A_STAGE_HUGO_PALETTES[] =
{
    { L"Hugo Stage 1/9", 0x3c1e00, 0x3c2000, indexSF3NGSprites_Stages, 0x91, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 2/9", 0x3c2000, 0x3c2200, indexSF3NGSprites_Stages, 0x93, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 3/9", 0x3c2200, 0x3c2400, indexSF3NGSprites_Stages, 0x95, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 4/9", 0x3c2400, 0x3c2600, indexSF3NGSprites_Stages, 0x97, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 5/9", 0x3c2600, 0x3c2800, indexSF3NGSprites_Stages, 0x99, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 6/9", 0x3c2800, 0x3c2a00, indexSF3NGSprites_Stages, 0x9b, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 7/9", 0x3c2a00, 0x3c2c00, indexSF3NGSprites_Stages, 0x9d, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 8/9", 0x3c2c00, 0x3c2e00, indexSF3NGSprites_Stages, 0x9f, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage 9/9", 0x3c2e00, 0x3c3000, indexSF3NGSprites_Stages, 0xa1, nullptr, &secondaryGreyTintEffects_Skip11 },
    { L"Hugo Stage Extras 1/3", 0x3da000, 0x3da200, indexSF3NGSprites_Stages, 0xa3 },
    { L"Hugo Stage Extras 2/3", 0x3da200, 0x3da400, indexSF3NGSprites_Stages, 0xa4 },
    { L"Hugo Stage Extras 3/3", 0x3da400, 0x3da580, indexSF3NGSprites_Stages, 0xa5 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_HUGO_FADED_PALETTES[] =
{
    { L"Hugo Stage (Faded) 1/9", 0x3c3000, 0x3c3200, indexSF3NGSprites_Stages, 0x92, &pairFullyLinkedNode },
    { L"Hugo Stage (Faded) 2/9", 0x3c3200, 0x3c3400, indexSF3NGSprites_Stages, 0x94 },
    { L"Hugo Stage (Faded) 3/9", 0x3c3400, 0x3c3600, indexSF3NGSprites_Stages, 0x96 },
    { L"Hugo Stage (Faded) 4/9", 0x3c3600, 0x3c3800, indexSF3NGSprites_Stages, 0x98 },
    { L"Hugo Stage (Faded) 5/9", 0x3c3800, 0x3c3a00, indexSF3NGSprites_Stages, 0x9a },
    { L"Hugo Stage (Faded) 6/9", 0x3c3a00, 0x3c3c00, indexSF3NGSprites_Stages, 0x9c },
    { L"Hugo Stage (Faded) 7/9", 0x3c3c00, 0x3c3e00, indexSF3NGSprites_Stages, 0x9e },
    { L"Hugo Stage (Faded) 8/9", 0x3c3e00, 0x3c4000, indexSF3NGSprites_Stages, 0xa0 },
    { L"Hugo Stage (Faded) 9/9", 0x3c4000, 0x3c4200, indexSF3NGSprites_Stages, 0xa2 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND1_PALETTES[] =
{
    { L"Elena Stage 1/6", 0x3c7500, 0x3c7700, indexSF3NGSprites_Stages, 0xcd, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Elena Stage 2/6", 0x3c7700, 0x3c7900, indexSF3NGSprites_Stages, 0xcf, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Elena Stage 3/6", 0x3c7900, 0x3c7b00, indexSF3NGSprites_Stages, 0xd1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Elena Stage 4/6", 0x3c7b00, 0x3c7d00, indexSF3NGSprites_Stages, 0xd3, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Elena Stage 5/6", 0x3c7d00, 0x3c7f00, indexSF3NGSprites_Stages, 0xd5, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Elena Stage 6/6", 0x3c7f00, 0x3c8080, indexSF3NGSprites_Stages, 0xd7, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Elena Stage Round 1 Extras", 0x3da800, 0x3daa00, indexSF3NGSprites_Stages, 0xd9 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND1_FADED_PALETTES[] =
{
    { L"Elena Stage (Faded) 1/6", 0x3c8080, 0x3c8280, indexSF3NGSprites_Stages, 0xce, &pairFullyLinkedNode },
    { L"Elena Stage (Faded) 2/6", 0x3c8280, 0x3c8480, indexSF3NGSprites_Stages, 0xd0 },
    { L"Elena Stage (Faded) 3/6", 0x3c8480, 0x3c8680, indexSF3NGSprites_Stages, 0xd2 },
    { L"Elena Stage (Faded) 4/6", 0x3c8680, 0x3c8880, indexSF3NGSprites_Stages, 0xd4 },
    { L"Elena Stage (Faded) 5/6", 0x3c8880, 0x3c8a80, indexSF3NGSprites_Stages, 0xd6 },
    { L"Elena Stage (Faded) 6/6", 0x3c8a80, 0x3c8c00, indexSF3NGSprites_Stages, 0xd8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND2_PALETTES[] =
{
    { L"Elena Stage Round 2 1/8", 0x3c8c00, 0x3c8e00, indexSF3NGSprites_Stages, 0xda, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 2/8", 0x3c8e00, 0x3c9000, indexSF3NGSprites_Stages, 0xdc, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 3/8", 0x3c9000, 0x3c9200, indexSF3NGSprites_Stages, 0xde, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 4/8", 0x3c9200, 0x3c9400, indexSF3NGSprites_Stages, 0xe0, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 5/8", 0x3c9400, 0x3c9600, indexSF3NGSprites_Stages, 0xe2, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 6/8", 0x3c9600, 0x3c9800, indexSF3NGSprites_Stages, 0xe4, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 7/8", 0x3c9800, 0x3c9a00, indexSF3NGSprites_Stages, 0xe6, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 8/8", 0x3c9a00, 0x3c9c00, indexSF3NGSprites_Stages, 0xe8, nullptr, &secondaryGreyTintEffects_Skip9 },
    { L"Elena Stage Round 2 Extras 1/2", 0x3daa00, 0x3dac00, indexSF3NGSprites_Stages, 0xea },
    { L"Elena Stage Round 2 Extras 2/2", 0x3dac00, 0x3dad80, indexSF3NGSprites_Stages, 0xeb },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND2_FADED_PALETTES[] =
{
    { L"Elena Stage Round 2 (Faded) 1/8", 0x3c9c00, 0x3c9e00, indexSF3NGSprites_Stages, 0xdb, &pairFullyLinkedNode },
    { L"Elena Stage Round 2 (Faded) 2/8", 0x3c9e00, 0x3ca000, indexSF3NGSprites_Stages, 0xdd },
    { L"Elena Stage Round 2 (Faded) 3/8", 0x3ca000, 0x3ca200, indexSF3NGSprites_Stages, 0xdf },
    { L"Elena Stage Round 2 (Faded) 4/8", 0x3ca200, 0x3ca400, indexSF3NGSprites_Stages, 0xe1 },
    { L"Elena Stage Round 2 (Faded) 5/8", 0x3ca400, 0x3ca600, indexSF3NGSprites_Stages, 0xe3 },
    { L"Elena Stage Round 2 (Faded) 6/8", 0x3ca600, 0x3ca800, indexSF3NGSprites_Stages, 0xe5 },
    { L"Elena Stage Round 2 (Faded) 7/8", 0x3ca800, 0x3caa00, indexSF3NGSprites_Stages, 0xe7 },
    { L"Elena Stage Round 2 (Faded) 8/8", 0x3caa00, 0x3cac00, indexSF3NGSprites_Stages, 0xe9 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ORO_PALETTES[] =
{
    { L"Oro Stage 1/6", 0x3cac00, 0x3cae00, indexSF3NGSprites_Stages, 0xec, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Oro Stage 2/6", 0x3cae00, 0x3cb000, indexSF3NGSprites_Stages, 0xee, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Oro Stage 3/6", 0x3cb000, 0x3cb200, indexSF3NGSprites_Stages, 0xf0, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Oro Stage 4/6", 0x3cb200, 0x3cb400, indexSF3NGSprites_Stages, 0xf2, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Oro Stage 5/6", 0x3cb400, 0x3cb600, indexSF3NGSprites_Stages, 0xf4, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Oro Stage 6/6", 0x3cb600, 0x3cb800, indexSF3NGSprites_Stages, 0xf6, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Oro Stage Extras", 0x3dc080, 0x3dc280, indexSF3NGSprites_Stages, 0xf8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ORO_FADED_PALETTES[] =
{
    { L"Oro Stage (Faded) 1/6", 0x3cb800, 0x3cba00, indexSF3NGSprites_Stages, 0xed, &pairFullyLinkedNode },
    { L"Oro Stage (Faded) 2/6", 0x3cba00, 0x3cbc00, indexSF3NGSprites_Stages, 0xef },
    { L"Oro Stage (Faded) 3/6", 0x3cbc00, 0x3cbe00, indexSF3NGSprites_Stages, 0xf1 },
    { L"Oro Stage (Faded) 4/6", 0x3cbe00, 0x3cc000, indexSF3NGSprites_Stages, 0xf3 },
    { L"Oro Stage (Faded) 5/6", 0x3cc000, 0x3cc200, indexSF3NGSprites_Stages, 0xf5 },
    { L"Oro Stage (Faded) 6/6", 0x3cc200, 0x3cc400, indexSF3NGSprites_Stages, 0xf7 },
};

const sDescTreeNode SFIII1_A_STAGE_COLLECTION[] =
{
    { L"Alex Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ALEX_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ALEX_PALETTES) },
    { L"Alex Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ALEX_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ALEX_FADED_PALETTES) },
    { L"Sean Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_SEAN_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_SEAN_PALETTES) },
    { L"Sean Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_SEAN_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_SEAN_FADED_PALETTES) },
    { L"Ryu Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_RYU_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_RYU_PALETTES) },
    { L"Ryu Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_RYU_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_RYU_FADED_PALETTES) },
    { L"Ken Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_KEN_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_KEN_PALETTES) },
    { L"Ken Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_KEN_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_KEN_FADED_PALETTES) },
    { L"Yun Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_YUN_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_YUN_PALETTES) },
    { L"Yun Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_YUN_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_YUN_FADED_PALETTES) },
    { L"Yang Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_YANG_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_YANG_PALETTES) },
    { L"Yang Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_YANG_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_YANG_FADED_PALETTES) },
    { L"Dudley Stage Day", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_DUDLEY_DAY_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_DUDLEY_DAY_PALETTES) },
    { L"Dudley Stage Day (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_DUDLEY_DAY_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_DUDLEY_DAY_FADED_PALETTES) },
    { L"Dudley Stage Night", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_DUDLEY_NIGHT_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_DUDLEY_NIGHT_PALETTES) },
    { L"Dudley Stage Night (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_DUDLEY_NIGHT_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_DUDLEY_NIGHT_FADED_PALETTES) },
    { L"Necro Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_NECRO_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_NECRO_PALETTES) },
    { L"Necro Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_NECRO_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_NECRO_FADED_PALETTES) },
    { L"Ibuki Stage Round 1", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_IBUKI_ROUND1_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_IBUKI_ROUND1_PALETTES) },
    { L"Ibuki Stage Round 1 (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_IBUKI_ROUND1_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_IBUKI_ROUND1_FADED_PALETTES) },
    { L"Ibuki Stage Round 2", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_IBUKI_ROUND2_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_IBUKI_ROUND2_PALETTES) },
    { L"Ibuki Stage Round 2 (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_IBUKI_ROUND2_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_IBUKI_ROUND2_FADED_PALETTES) },
    { L"Ibuki Stage Round 3", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_IBUKI_ROUND3_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_IBUKI_ROUND3_PALETTES) },
    { L"Ibuki Stage Round 3 (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_IBUKI_ROUND3_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_IBUKI_ROUND3_FADED_PALETTES) },
    { L"Hugo Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_HUGO_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_HUGO_PALETTES) },
    { L"Hugo Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_HUGO_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_HUGO_FADED_PALETTES) },
    { L"Elena Stage Round 1", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ELENA_ROUND1_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ELENA_ROUND1_PALETTES) },
    { L"Elena Stage Round 1 (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ELENA_ROUND1_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ELENA_ROUND1_FADED_PALETTES) },
    { L"Elena Stage Round 2", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ELENA_ROUND2_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ELENA_ROUND2_PALETTES) },
    { L"Elena Stage Round 2 (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ELENA_ROUND2_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ELENA_ROUND2_FADED_PALETTES) },
    { L"Oro Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ORO_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ORO_PALETTES) },
    { L"Oro Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_ORO_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_ORO_FADED_PALETTES) },
    { L"Gill Stage", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_GILL_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_GILL_PALETTES) },
    { L"Gill Stage (Faded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_GILL_FADED_PALETTES, ARRAYSIZE(SFIII1_A_STAGE_GILL_FADED_PALETTES) },
};

const sGame_PaletteDataset SFIII1_A_BONUS_INTROPORTS_PALETTES[] =
{
    { L"Yang Intro Panel",  0x3f5a00, 0x3f5a20, indexSF3NGSprites_Bonus, 0x0f },
    { L"Elena Intro Panel", 0x3f5ac0, 0x3f5ae0, indexSF3NGSprites_Bonus, 0x06 },
    { L"Yun Intro Panel",   0x3f5a40, 0x3f5a60, indexSF3NGSprites_Bonus, 0x10 },
    { L"Ken Intro Panel",   0x3f5ae0, 0x3f5b00, indexSF3NGSprites_Bonus, 0x09 },
    { L"Sean Intro Panel",  0x3f5aa0, 0x3f5ac0, indexSF3NGSprites_Bonus, 0x0d },
    { L"Ibuki Intro Panel", 0x3f5a60, 0x3f5a80, indexSF3NGSprites_Bonus, 0x08 },
    { L"Oro Intro Panel",   0x3f5b40, 0x3f5b80, indexSF3NGSprites_Bonus, 0x0b },
    { L"Necro Intro Panel", 0x3f5b20, 0x3f5b40, indexSF3NGSprites_Bonus, 0x0a },
    { L"Dudley Intro Panel", 0x3f5b00, 0x3f5b20, indexSF3NGSprites_Bonus, 0x05 },
    { L"Alex Intro Panel",  0x3f5a20, 0x3f5a40, indexSF3NGSprites_Bonus, 0x01 },
    { L"Ryu Intro Panel",   0x3f5a80, 0x3f5aa0, indexSF3NGSprites_Bonus, 0x0c },
    { L"Gill Intro Panel",  0x3f5b80, 0x3f5c00, indexSF3NGSprites_Bonus, 0x07 },
    { L"Alex Back Portrait 1/10", 0x3f5c00, 0x3f5c80, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 2/10", 0x3f5c80, 0x3f5d00, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 3/10", 0x3f5d00, 0x3f5d80, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 4/10", 0x3f5d80, 0x3f5e00, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 5/10", 0x3f5e00, 0x3f5e80, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 6/10", 0x3f5e80, 0x3f5f00, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 7/10", 0x3f5f00, 0x3f5f80, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 8/10", 0x3f5f80, 0x3f6000, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 9/10", 0x3f6000, 0x3f6080, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Back Portrait 10/10", 0x3f6380, 0x3f6400, indexSF3NGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Side Facing)", 0x3f6480, 0x3f6500, indexSF3NGSprites_Bonus, 0x03 },
    { L"Alex Intro Fist", 0x3f6400, 0x3f6480, indexSF3NGSprites_Bonus, 0x00 },
    { L"Alex Intro/Titlescreen Portrait",           0x3f6500, 0x3f6580, indexSF3NGSprites_Bonus, 0x04 },
    { L"Alex Intro/Titlescreen Portrait (Faded)",   0x3f6080, 0x3f6100, indexSF3NGSprites_Bonus, 0x04 },
    { L"Intro Text", 0x3f6100, 0x3f6120, indexSF3NGSprites_Bonus, 0x0e },
};

const sGame_PaletteDataset SFIII1_A_BONUS_PALETTES[] =
{
    { L"P1 Hitsparks / Guard Sparks / Ibuki Kunai & Slash", 0x3d4280, 0x3d4300, indexSF3NGSprites_Bonus, 0x30 },
    { L"P2 Hitsparks / Guard Sparks", 0x3d4300, 0x3d4380, indexSF3NGSprites_Bonus, 0x30 },
    { L"Debug Hitbox Display", 0x3d4000, 0x3d4080 },
    { L"Parry Mark / Dust / Hit Bursts / Sparkles", 0x3d4080, 0x3d4100, indexSF3NGSprites_Bonus, 0x32 },
    { L"Shared Effects (unused) 1/2", 0x3d4100, 0x3d4180 },
    { L"Stun Effects (Chicks / Cherubs / Reapers / Stars) / Chip Guard", 0x3d4180, 0x3d41c0, indexSF3NGSprites_Bonus, 0x36 },
    { L"Suction Marks", 0x3d41c0, 0x3d4200, indexSF3NGSprites_Bonus, 0x37 },
    { L"Shared Effects (unused) 2/2", 0x3d4200, 0x3d4280 },
    { L"Universal Zap Skeleton", 0x3d4380, 0x3d4400, indexSF3NGSprites_Bonus, 0x31 },

    { L"Parry Flash", 0x3FF47a, 0x3FF47E, indexSF3NGSprites_Bonus, 0x5d },
    { L"Parry Flash (Player Shadow)", 0x3FF7Fa, 0x3FF7FE, indexSF3NGSprites_Bonus, 0x5d },
};

const sGame_PaletteDataset SFIII1_A_BONUS_LOGO_PALETTES[] =
{
    { L"Capcom Logo 1", 0x3ebb80, 0x3ebc00, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 2", 0x3ebc00, 0x3ebc80, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 3", 0x3ebc80, 0x3ebd00, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 4", 0x3ebd00, 0x3ebd80, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 5", 0x3ebd80, 0x3ebe00, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 6", 0x3ebe00, 0x3ebe80, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 7", 0x3ebe80, 0x3ebf00, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 8", 0x3ebf00, 0x3ebf80, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 9", 0x3ebf80, 0x3ec000, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 10", 0x3ec000, 0x3ec080, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 11", 0x3ec080, 0x3ec100, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 12", 0x3ec100, 0x3ec180, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 13", 0x3ec180, 0x3ec200, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 14", 0x3ec200, 0x3ec280, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 15", 0x3ec280, 0x3ec300, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 16", 0x3ec300, 0x3ec380, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 17", 0x3ec380, 0x3ec400, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 18", 0x3ec400, 0x3ec480, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 19", 0x3ec480, 0x3ec500, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 20", 0x3ec500, 0x3ec580, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 21", 0x3ec580, 0x3ec600, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 22", 0x3ec600, 0x3ec680, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 23", 0x3ec680, 0x3ec700, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 24", 0x3ec700, 0x3ec780, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 25", 0x3ec780, 0x3ec800, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 26", 0x3ec800, 0x3ec880, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 27", 0x3ec880, 0x3ec900, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 28", 0x3ec900, 0x3ec980, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 29", 0x3ec980, 0x3eca00, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 30", 0x3eca00, 0x3eca80, indexSF3NGSprites_Bonus, 0x11 },
    { L"Capcom Logo 31", 0x3eca80, 0x3ecb00, indexSF3NGSprites_Bonus, 0x11 },

    { L"SF3 Logo - Lightning / Light Effects", 0x3f6200, 0x3f6280, indexSF3NGSprites_Bonus, 0x54 },
    { L"SF3 Logo - III", 0x3f6280, 0x3f6300, indexSF3NGSprites_Bonus, 0x12, &pairNextAndNext },
    { L"SF3 Logo - Street Fighter", 0x3f6180, 0x3f6200, indexSF3NGSprites_Bonus, 0x14 },
    { L"SF3 Logo - New Generation", 0x3f6300, 0x3f6380, indexSF3NGSprites_Bonus, 0x13 },
};

const sGame_PaletteDataset SFIII1_A_BONUS_JUDGES_PALETTES[] =
{
    { L"Julia", 0x3ff080, 0x3ff100, index3SSprites_Bonus, 0x2b },
    { L"Fair Libra", 0x3ff100, 0x3ff180, index3SSprites_Bonus, 0x2a },
    { L"Rifa", 0x3ff180, 0x3ff200, index3SSprites_Bonus, 0x2d },
    { L"Tonfa", 0x3ff200, 0x3ff280, index3SSprites_Bonus, 0x2f },
    { L"Toli", 0x3ff280, 0x3ff300, index3SSprites_Bonus, 0x2e },
    { L"Anna", 0x3ff300, 0x3ff380, index3SSprites_Bonus, 0x29 },
    { L"Lilly", 0x3ff380, 0x3ff400, index3SSprites_Bonus, 0x2c },
};

const sGame_PaletteDataset SFIII1_A_BONUS_ROUNDCALL_PALETTES[] =
{
    { L"Old Result Texts (unused)", 0x3ea000, 0x3ea080, indexSF3NGSprites_Bonus, 0x41 },
    { L"Round Call (unused colours) 1/4", 0x3ea080, 0x3ea100, indexSF3NGSprites_Bonus, 0x40 },
    { L"Round Call (unused colours) 2/4", 0x3ea100, 0x3ea180, indexSF3NGSprites_Bonus, 0x40 },
    { L"Round Call (unused colours) 3/4", 0x3ea180, 0x3ea200, indexSF3NGSprites_Bonus, 0x40 },
    { L"Round Call (unused colours) 4/4", 0x3ea200, 0x3ea280, indexSF3NGSprites_Bonus, 0x40 },
    { L"Round Call (ROUND / FIGHT)", 0x3ea280, 0x3ea300, indexSF3NGSprites_Bonus, 0x40 },
};

const sGame_PaletteDataset SFIII1_A_BONUS_HUD_PALETTES[] =
{
    { L"HUD Text Layer 0", 0x3e7000, 0x3e7020, indexSF3NGSprites_Bonus, 0x80, &pairFullyLinkedNode },
    { L"HUD Life Bars 1 / Stun Gauge / STUN", 0x3e7020, 0x3e7040, indexSF3NGSprites_Bonus, 0x81 },
    { L"HUD Life Bars 2", 0x3e7040, 0x3e7060, indexSF3NGSprites_Bonus, 0x82 },
    { L"HUD Text Layer 3", 0x3e7060, 0x3e7080, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"HUD Super Meter (No Stock) / MAX Letters", 0x3e7080, 0x3e70a0, indexSF3NGSprites_Bonus, 0x83 },
    { L"HUD Super Meter (Stocked)", 0x3e70a0, 0x3e70c0, indexSF3NGSprites_Bonus, 0x84 },
    { L"HUD Combo / Bonus Digits", 0x3e70c0, 0x3e70e0, indexSF3NGSprites_Bonus, 0x85 },
    { L"HUD Round Bonus Tally (VITAL / TIME / BONUS)", 0x3e70e0, 0x3e7100, indexSF3NGSprites_Bonus, 0x86 },
    { L"HUD Win Mark (Chip)", 0x3e7100, 0x3e7120, indexSF3NGSprites_Bonus, 0x87 },
    { L"HUD Credit Text (FREE PLAY / INSERT COIN)", 0x3e7120, 0x3e7140, indexSF3NGSprites_Bonus, 0x88 },
    { L"HUD Player Names", 0x3e7140, 0x3e7160, indexSF3NGSprites_Bonus, 0x89 },
    { L"HUD Pts / PERFECT Tally Blink", 0x3e7160, 0x3e7180, indexSF3NGSprites_Bonus, 0x8a },
    { L"HUD Large Digits", 0x3e7180, 0x3e71a0, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"HUD Timer", 0x3e71a0, 0x3e71c0, indexSF3NGSprites_Bonus, 0x8b },
    { L"HUD Super Meter Frame (No Stock) / Stun Pips / Win Marks", 0x3e71c0, 0x3e71e0, indexSF3NGSprites_Bonus, 0x8c },
    { L"HUD Super Meter Frame (Stocked)", 0x3e71e0, 0x3e7200, indexSF3NGSprites_Bonus, 0x8d },
    { L"HUD Text Layer 16", 0x3e7200, 0x3e7220, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"HUD Super Art Numerals", 0x3e7220, 0x3e7240, indexSF3NGSprites_Bonus, 0x8e },
    { L"HUD Text Layer 18", 0x3e7240, 0x3e7260, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"HUD Score / HIT COMBO / Bonus Text", 0x3e7260, 0x3e7280, indexSF3NGSprites_Bonus, 0x8f },
    { L"HUD K.O. Text", 0x3e7280, 0x3e72a0, indexSF3NGSprites_Bonus, 0x90 },
    { L"HUD K.O. Text (Blink)", 0x3e72a0, 0x3e72c0, indexSF3NGSprites_Bonus, 0x91 },
    { L"HUD Result Text (YOU WIN / DOUBLE K.O. / PERFECT! / Final Colour)", 0x3e72c0, 0x3e72e0, indexSF3NGSprites_Bonus, 0x92 },
    { L"HUD Result Text (Blink)", 0x3e72e0, 0x3e7300, indexSF3NGSprites_Bonus, 0x93 },
    { L"HUD YOU LOSE Text", 0x3e7300, 0x3e7320, indexSF3NGSprites_Bonus, 0x94 },
    { L"HUD YOU LOSE Text (Blink)", 0x3e7320, 0x3e7340, indexSF3NGSprites_Bonus, 0x95 },
    { L"HUD TIME OVER / JUDGEMENT / Winner Name Text", 0x3e7340, 0x3e7360, indexSF3NGSprites_Bonus, 0x96 },
    { L"HUD TIME OVER / JUDGEMENT / Winner Name Text (Blink)", 0x3e7360, 0x3e7380, indexSF3NGSprites_Bonus, 0x97 },
    { L"HUD PERFECT Tally Blink", 0x3e7380, 0x3e73a0, indexSF3NGSprites_Bonus, 0x98 },
    { L"HUD Text Layer 29", 0x3e73a0, 0x3e73c0, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"HUD Text Layer 30", 0x3e73c0, 0x3e73e0, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"HUD Text Layer 31", 0x3e73e0, 0x3e7400, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_BONUS_SELECT_PALETTES[] =
{
    { L"Character Names", 0x3e7a80, 0x3e7b00, indexSF3NGSprites_Bonus, 0x60 },
    { L"PLAYER SELECT / SUPER ARTS SELECT / Route ?", 0x3e7b00, 0x3e7b80, indexSF3NGSprites_Bonus, 0x61 },
    { L"VS Logo (Sliding In / Outline)", 0x3e7b80, 0x3e7c00, indexSF3NGSprites_Bonus, 0x62 },
    { L"Super Art Names (1P, front)", 0x3e7c00, 0x3e7c80, indexSF3NGSprites_Bonus, 0x63 },
    { L"Super Art Commands (1P)", 0x3e7c80, 0x3e7d00, indexSF3NGSprites_Bonus, 0x64 },
    { L"Super Art Plate 1", 0x3e7d00, 0x3e7d80, indexSF3NGSprites_Bonus, 0x65 },
    { L"Super Art Plate 2", 0x3e7d80, 0x3e7e00, indexSF3NGSprites_Bonus, 0x66 },
    { L"Super Art Plate 3", 0x3e7e00, 0x3e7e80, indexSF3NGSprites_Bonus, 0x67 },
    { L"Super Art Plate 4", 0x3e7e80, 0x3e7f00, indexSF3NGSprites_Bonus, 0x68 },
    { L"Face Cursor 1/3 / VS Logo Flash (White)", 0x3e7f00, 0x3e7f80, indexSF3NGSprites_Bonus, 0x69 },
    { L"Face Cursor 2/3 / VS Logo Flash (Pale Yellow)", 0x3e7f80, 0x3e8000, indexSF3NGSprites_Bonus, 0x69 },
    { L"Face Cursor 3/3 / VS Logo Flash (Orange)", 0x3e8000, 0x3e8080, indexSF3NGSprites_Bonus, 0x69 },
    { L"Super Art Names (2P, front)", 0x3e8080, 0x3e8100, indexSF3NGSprites_Bonus, 0x63 },
    { L"Super Art Names (2P, middle)", 0x3e8100, 0x3e8180, indexSF3NGSprites_Bonus, 0x63 },
    { L"Super Art Names (2P, back)", 0x3e8180, 0x3e8200, indexSF3NGSprites_Bonus, 0x63 },
    { L"Super Art Names (1P, middle)", 0x3e8200, 0x3e8280, indexSF3NGSprites_Bonus, 0x63 },
    { L"Super Art Names (1P, back)", 0x3e8280, 0x3e8300, indexSF3NGSprites_Bonus, 0x63 },
    { L"Super Art Commands (2P)", 0x3e8300, 0x3e8380, indexSF3NGSprites_Bonus, 0x64 },
    { L"Character Select (unused) 1/4", 0x3e8400, 0x3e8480, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Character Select (unused) 2/4", 0x3e8480, 0x3e8500, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Super Art Plate 5", 0x3e8500, 0x3e8580, indexSF3NGSprites_Bonus, 0x6a },
    { L"Character Select (unused) 3/4", 0x3e8580, 0x3e8600, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Character Select (unused) 4/4", 0x3e8600, 0x3e8680, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Face Cursor (Picked) / Route Panel Flash", 0x3e8680, 0x3e8700, indexSF3NGSprites_Bonus, 0x6b },
    { L"Super Art Numeral I / Cross / Route Defeated Portraits / VS Logo", 0x3e8700, 0x3e8780, indexSF3NGSprites_Bonus, 0x6c },
    { L"Super Art Plate 6", 0x3e8780, 0x3e8800, indexSF3NGSprites_Bonus, 0x6d },
    { L"Super Art Plate 7", 0x3e8800, 0x3e8880, indexSF3NGSprites_Bonus, 0x6e },
    { L"Super Art Plate 8", 0x3e8880, 0x3e8900, indexSF3NGSprites_Bonus, 0x6f },
    { L"Super Art Plate 9", 0x3e8900, 0x3e8980, indexSF3NGSprites_Bonus, 0x70 },
    { L"Super Art Plate 10", 0x3e8980, 0x3e8a00, indexSF3NGSprites_Bonus, 0x71 },
    { L"Super Art Plate 11", 0x3e8a00, 0x3e8a80, indexSF3NGSprites_Bonus, 0x72 },
    { L"Super Art Plate 12", 0x3e8a80, 0x3e8b00, indexSF3NGSprites_Bonus, 0x73 },
    { L"Super Art Plate 13", 0x3e8b00, 0x3e8b80, indexSF3NGSprites_Bonus, 0x74 },
    { L"Country Name Letters", 0x3eb980, 0x3eba00, indexSF3NGSprites_Bonus, 0x75 },
};

const sGame_PaletteDataset SFIII1_A_BONUS_SUPER_ART_PALETTES[] =
{
    { L"Super Art KO Flash 1/4", 0x3ff400, 0x3ff47a, indexSF3NGSprites_Bonus, 0x58 },
    { L"Super Art KO Flash 2/4", 0x3ff480, 0x3ff500, indexSF3NGSprites_Bonus, 0x59 },
    { L"Super Art KO Flash 3/4", 0x3ff500, 0x3ff580, indexSF3NGSprites_Bonus, 0x5a },
    { L"Super Art KO Flash 4/4", 0x3ff580, 0x3ff600, indexSF3NGSprites_Bonus, 0x5b },
    { L"Super Art Screens (unused) 1/2", 0x3ff600, 0x3ff680, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Super Art Backdrop", 0x3ff680, 0x3ff700, indexSF3NGSprites_Bonus, 0x5c },
    { L"Super Art Screens (unused) 2/2", 0x3ff700, 0x3ff780, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Super Art KO Flash 1/4 (Player Shadow)", 0x3ff780, 0x3ff7fa, indexSF3NGSprites_Bonus, 0x58 },
    { L"Super Art KO Flash 2/4 (Player Shadow)", 0x3ff800, 0x3ff880, indexSF3NGSprites_Bonus, 0x59 },
    { L"Super Art KO Flash 3/4 (Player Shadow)", 0x3ff880, 0x3ff900, indexSF3NGSprites_Bonus, 0x5a },
    { L"Super Art KO Flash 4/4 (Player Shadow)", 0x3ff900, 0x3ff980, indexSF3NGSprites_Bonus, 0x5b },
    { L"Super Art Screens (unused) 1/2 (Player Shadow)", 0x3ff980, 0x3ffa00, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Super Art Backdrop (Player Shadow)", 0x3ffa00, 0x3ffa80, indexSF3NGSprites_Bonus, 0x5c },
    { L"Super Art Screens (unused) 2/2 (Player Shadow)", 0x3ffa80, 0x3ffb00, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_BONUS_SCREENS_PALETTES[] =
{
    { L"Win Screen / Ranking Background", 0x3eb800, 0x3eb980, indexSF3NGSprites_Bonus, 0x50 },
    { L"Select Screen Background", 0x3eba00, 0x3eba80, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 1/9", 0x3ea300, 0x3ea380, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 2/9", 0x3ea380, 0x3ea400, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 3/9", 0x3ea400, 0x3ea480, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 4/9", 0x3ea480, 0x3ea500, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 5/9", 0x3ea500, 0x3ea580, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 6/9", 0x3ea580, 0x3ea600, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 7/9", 0x3ea600, 0x3ea680, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 8/9", 0x3ea680, 0x3ea700, indexSF3NGSprites_Bonus, 0x51 },
    { L"Stage Marker Light 9/9", 0x3ea700, 0x3ea780, indexSF3NGSprites_Bonus, 0x51 },
    { L"Game Over Background", 0x3eba80, 0x3ebb00, indexSF3NGSprites_Bonus, 0x51 },
    { L"Recycle Screen", 0x3ebb00, 0x3ebb80, indexSF3NGSprites_Bonus, 0x52 },
    { L"Win Message", 0x3ff000, 0x3ff080, indexSF3NGSprites_Bonus, 0x53 },
    { L"VS Screen Background", 0x3ecb00, 0x3ecd00, indexSF3NGSprites_Bonus, 0x56 },
    { L"VS Screen Lightning", 0x3ecd00, 0x3ecd80, indexSF3NGSprites_Bonus, 0x57 },
    { L"CONTINUE? / GAME OVER / Ranking SCORE / WINS", 0x3ea780, 0x3ea800, indexSF3NGSprites_Bonus, 0x55 },
    { L"Ranking Numerals / Suffixes (1st-6th)", 0x3ea800, 0x3ea880, indexSF3NGSprites_Bonus, 0x42 },
    { L"CONTINUE? / Ranking / Name Entry Flash", 0x3ea880, 0x3ea900, indexSF3NGSprites_Bonus, 0x55 },
    { L"Ranking Names / Name Entry Letters / Crowns / Game Over Rank", 0x3ea900, 0x3ea980, indexSF3NGSprites_Bonus, 0x43 },
    { L"Ranking Score Digits", 0x3ea980, 0x3eaa00, indexSF3NGSprites_Bonus, 0x44 },
    { L"Ranking Bars", 0x3eaa00, 0x3eaa80, indexSF3NGSprites_Bonus, 0x45 },
    { L"Ranking Logo (RANKING / Brush Stroke)", 0x3eaa80, 0x3eab00, indexSF3NGSprites_Bonus, 0x46 },
    { L"Ranking Faces LP", 0x3eab00, 0x3ead00, indexSF3NGSprites_Bonus, 0x47 },
    { L"Ranking Faces MP", 0x3ead00, 0x3eaf00, indexSF3NGSprites_Bonus, 0x47 },
    { L"Ranking Faces HP", 0x3eaf00, 0x3eb100, indexSF3NGSprites_Bonus, 0x47 },
    { L"Ranking Faces LK", 0x3eb100, 0x3eb300, indexSF3NGSprites_Bonus, 0x47 },
    { L"Ranking Faces MK", 0x3eb300, 0x3eb500, indexSF3NGSprites_Bonus, 0x47 },
    { L"Ranking Faces HK", 0x3eb500, 0x3eb700, indexSF3NGSprites_Bonus, 0x47 },
};

const sDescTreeNode SFIII1_A_BONUS_COLLECTION[] =
{
    { L"Intro Portraits",   DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_INTROPORTS_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_INTROPORTS_PALETTES) },
    { L"Logo",              DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_LOGO_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_LOGO_PALETTES) },
    { L"Bonus",             DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_PALETTES) },
    { L"Judges",            DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_JUDGES_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_JUDGES_PALETTES) },
    { L"Screens",           DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_SCREENS_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_SCREENS_PALETTES) },
    { L"Character Select",  DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_SELECT_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_SELECT_PALETTES) },
    { L"HUD (Text Layer)",  DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_HUD_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_HUD_PALETTES) },
    { L"Super Art Screens", DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_SUPER_ART_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_SUPER_ART_PALETTES) },
    { L"Round Call",        DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_ROUNDCALL_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_ROUNDCALL_PALETTES) },
};

const sGame_PaletteDataset SFIII1_A_ENDING_ALEX_PALETTES[] =
{
    { L"Alex Ending 1/4", 0x3fc380, 0x3fc500, indexSF3NGSprites_Endings, 0x00, &pairFullyLinkedNode },
    { L"Alex Ending 2/4", 0x3fd780, 0x3fd980, indexSF3NGSprites_Endings, 0x01 },
    { L"Alex Ending 3/4", 0x3fd980, 0x3fdb80, indexSF3NGSprites_Endings, 0x02 },
    { L"Alex Ending 4/4", 0x3fdb80, 0x3fdc80, indexSF3NGSprites_Endings, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_RYU_PALETTES[] =
{
    { L"Ryu Ending 1/3", 0x3fd200, 0x3fd400, indexSF3NGSprites_Endings, 0x04, &pairFullyLinkedNode },
    { L"Ryu Ending 2/3", 0x3fd400, 0x3fd600, indexSF3NGSprites_Endings, 0x05 },
    { L"Ryu Ending 3/3", 0x3fd600, 0x3fd780, indexSF3NGSprites_Endings, 0x06 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_YUNYANG_PALETTES[] =
{
    { L"Yun / Yang Ending 1/6", 0x3f7d00, 0x3f7f00, indexSF3NGSprites_Endings, 0x07, &pairFullyLinkedNode },
    { L"Yun / Yang Ending 2/6", 0x3f7f00, 0x3f8100, indexSF3NGSprites_Endings, 0x08 },
    { L"Yun / Yang Ending 3/6", 0x3f8100, 0x3f8300, indexSF3NGSprites_Endings, 0x09 },
    { L"Yun / Yang Ending 4/6", 0x3f8300, 0x3f8500, indexSF3NGSprites_Endings, 0x0a },
    { L"Yun / Yang Ending 5/6", 0x3f8500, 0x3f8600, indexSF3NGSprites_Endings, 0x0b },
    { L"Yun / Yang Ending 6/6", 0x3f8700, 0x3f8900, indexSF3NGSprites_Endings, 0x0c },
};

const sGame_PaletteDataset SFIII1_A_ENDING_DUDLEY_PALETTES[] =
{
    { L"Dudley Ending 1/5", 0x3f7300, 0x3f7380, indexSF3NGSprites_Endings, 0x0d, &pairFullyLinkedNode },
    { L"Dudley Ending 2/5", 0x3f8900, 0x3f8b00, indexSF3NGSprites_Endings, 0x0e },
    { L"Dudley Ending 3/5", 0x3f8b00, 0x3f8d00, indexSF3NGSprites_Endings, 0x0f },
    { L"Dudley Ending 4/5", 0x3f8d00, 0x3f8f00, indexSF3NGSprites_Endings, 0x10 },
    { L"Dudley Ending 5/5", 0x3f8f00, 0x3f9080, indexSF3NGSprites_Endings, 0x11 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_NECROORO_PALETTES[] =
{
    { L"Necro / Oro Ending 1/8", 0x3fc000, 0x3fc200, indexSF3NGSprites_Endings, 0x12, &pairFullyLinkedNode },
    { L"Necro / Oro Ending 2/8", 0x3fc200, 0x3fc380, indexSF3NGSprites_Endings, 0x13 },
    { L"Necro / Oro Ending 3/8", 0x3fc500, 0x3fc700, indexSF3NGSprites_Endings, 0x14 },
    { L"Necro / Oro Ending 4/8", 0x3fc700, 0x3fc800, indexSF3NGSprites_Endings, 0x15 },
    { L"Necro / Oro Ending 5/8", 0x3fc880, 0x3fc900, indexSF3NGSprites_Endings, 0x16 },
    { L"Necro / Oro Ending 6/8", 0x3fca80, 0x3fcc80, indexSF3NGSprites_Endings, 0x17 },
    { L"Necro / Oro Ending 7/8", 0x3fdc80, 0x3fde80, indexSF3NGSprites_Endings, 0x18 },
    { L"Necro / Oro Ending 8/8", 0x3fde80, 0x3fdf00, indexSF3NGSprites_Endings, 0x19 },
    { L"Necro Ending (Effie)", 0x3ffb80, 0x3ffc00, indexSF3NGSprites_Endings, 0x1a },
};

const sGame_PaletteDataset SFIII1_A_ENDING_IBUKI_PALETTES[] =
{
    { L"Ibuki Ending 1/7", 0x3f9080, 0x3f9180, indexSF3NGSprites_Endings, 0x1b, &pairFullyLinkedNode },
    { L"Ibuki Ending 2/7", 0x3f9200, 0x3f9400, indexSF3NGSprites_Endings, 0x1c },
    { L"Ibuki Ending 3/7", 0x3f9480, 0x3f9680, indexSF3NGSprites_Endings, 0x1d },
    { L"Ibuki Ending 4/7", 0x3f9680, 0x3f9880, indexSF3NGSprites_Endings, 0x1e },
    { L"Ibuki Ending 5/7", 0x3f9880, 0x3f9a80, indexSF3NGSprites_Endings, 0x1f },
    { L"Ibuki Ending 6/7", 0x3f9a80, 0x3f9c80, indexSF3NGSprites_Endings, 0x20 },
    { L"Ibuki Ending 7/7", 0x3fa400, 0x3fa480, indexSF3NGSprites_Endings, 0x21 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_ELENA_PALETTES[] =
{
    { L"Elena Ending 1/4", 0x3f9c80, 0x3f9e80, indexSF3NGSprites_Endings, 0x22, &pairFullyLinkedNode },
    { L"Elena Ending 2/4", 0x3f9e80, 0x3fa080, indexSF3NGSprites_Endings, 0x23 },
    { L"Elena Ending 3/4", 0x3fa080, 0x3fa280, indexSF3NGSprites_Endings, 0x24 },
    { L"Elena Ending 4/4", 0x3fa280, 0x3fa400, indexSF3NGSprites_Endings, 0x25 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_KEN_PALETTES[] =
{
    { L"Ken Ending 1/7", 0x3f7080, 0x3f7280, indexSF3NGSprites_Endings, 0x26, &pairFullyLinkedNode },
    { L"Ken Ending 2/7", 0x3f7280, 0x3f7300, indexSF3NGSprites_Endings, 0x27 },
    { L"Ken Ending 3/7", 0x3f7380, 0x3f7580, indexSF3NGSprites_Endings, 0x28 },
    { L"Ken Ending 4/7", 0x3f7600, 0x3f7800, indexSF3NGSprites_Endings, 0x29 },
    { L"Ken Ending 5/7", 0x3f7800, 0x3f7a00, indexSF3NGSprites_Endings, 0x2a },
    { L"Ken Ending 6/7", 0x3f7a00, 0x3f7b00, indexSF3NGSprites_Endings, 0x2b },
    { L"Ken Ending 7/7", 0x3f7b80, 0x3f7d00, indexSF3NGSprites_Endings, 0x2c },
};

const sGame_PaletteDataset SFIII1_A_ENDING_SEAN_PALETTES[] =
{
    { L"Sean Ending 1/3", 0x3fcc80, 0x3fce80, indexSF3NGSprites_Endings, 0x2d, &pairFullyLinkedNode },
    { L"Sean Ending 2/3", 0x3fce80, 0x3fd080, indexSF3NGSprites_Endings, 0x2e },
    { L"Sean Ending 3/3", 0x3fd080, 0x3fd200, indexSF3NGSprites_Endings, 0x2f },
};

const sGame_PaletteDataset SFIII1_A_ENDING_LETTERBOX_PALETTES[] =
{
    { L"Ending Letterbox Bars", 0x3ffb00, 0x3ffb80, indexSF3NGSprites_Endings, 0x30 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_NOPICTURE_3F7000_PALETTES[] =
{
    { L"Ending Palette (no picture, 3F7000) 1/7", 0x3f7000, 0x3f7080, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3F7000) 2/7", 0x3f7580, 0x3f7600, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3F7000) 3/7", 0x3f7b00, 0x3f7b80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3F7000) 4/7", 0x3f8600, 0x3f8700, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3F7000) 5/7", 0x3f9180, 0x3f9200, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3F7000) 6/7", 0x3f9400, 0x3f9480, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3F7000) 7/7", 0x3fa480, 0x3fa580, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_NOPICTURE_3FC000_PALETTES[] =
{
    { L"Ending Palette (no picture, 3FC000) 1/3", 0x3fc800, 0x3fc880, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3FC000) 2/3", 0x3fc900, 0x3fca80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Ending Palette (no picture, 3FC000) 3/3", 0x3fdf00, 0x3fdf80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sGame_PaletteDataset SFIII1_A_ENDING_UNUSED_PALETTES_NOT_LOADED_PALETTES[] =
{
    { L"Unused Ending Palettes 1/14", 0x3fa580, 0x3fa780, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 2/14", 0x3fa780, 0x3fa980, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 3/14", 0x3fa980, 0x3fab80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 4/14", 0x3fab80, 0x3fad80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 5/14", 0x3fad80, 0x3faf80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 6/14", 0x3faf80, 0x3fb180, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 7/14", 0x3fb180, 0x3fb380, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 8/14", 0x3fb380, 0x3fb580, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 9/14", 0x3fb580, 0x3fb780, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 10/14", 0x3fb780, 0x3fb980, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 11/14", 0x3fb980, 0x3fbb80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 12/14", 0x3fbb80, 0x3fbd80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 13/14", 0x3fbd80, 0x3fbf80, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
    { L"Unused Ending Palettes 14/14", 0x3fbf80, 0x3fc000, indexSF3NGSprites_Bonus, INVALID_UNIT_VALUE_8 },
};

const sDescTreeNode SFIII1_A_ENDINGS_COLLECTION[] =
{
    { L"Alex Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_ALEX_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_ALEX_PALETTES) },
    { L"Ryu Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_RYU_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_RYU_PALETTES) },
    { L"Yun / Yang Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_YUNYANG_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_YUNYANG_PALETTES) },
    { L"Dudley Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_DUDLEY_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_DUDLEY_PALETTES) },
    { L"Necro / Oro Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_NECROORO_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_NECROORO_PALETTES) },
    { L"Ibuki Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_IBUKI_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_IBUKI_PALETTES) },
    { L"Elena Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_ELENA_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_ELENA_PALETTES) },
    { L"Ken Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_KEN_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_KEN_PALETTES) },
    { L"Sean Ending", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_SEAN_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_SEAN_PALETTES) },
    { L"Ending Letterbox", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_LETTERBOX_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_LETTERBOX_PALETTES) },
    { L"Ending Palettes Without A Picture (3F7000)", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_NOPICTURE_3F7000_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_NOPICTURE_3F7000_PALETTES) },
    { L"Ending Palettes Without A Picture (3FC000)", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_NOPICTURE_3FC000_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_NOPICTURE_3FC000_PALETTES) },
    { L"Unused Ending Palettes (not loaded)", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDING_UNUSED_PALETTES_NOT_LOADED_PALETTES, ARRAYSIZE(SFIII1_A_ENDING_UNUSED_PALETTES_NOT_LOADED_PALETTES) },
};

const sDescTreeNode SFIII1_A_50_UNITS[] =
{
    { L"Alex",   DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_COLLECTION, ARRAYSIZE(SFIII1_A_ALEX_COLLECTION) },
    { L"Ryu",    DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_COLLECTION, ARRAYSIZE(SFIII1_A_RYU_COLLECTION) },
    { L"Yun/Yang", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_COLLECTION, ARRAYSIZE(SFIII1_A_YUNYANG_COLLECTION) },
    { L"Dudley", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_COLLECTION, ARRAYSIZE(SFIII1_A_DUDLEY_COLLECTION) },
    { L"Necro",  DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_COLLECTION, ARRAYSIZE(SFIII1_A_NECRO_COLLECTION) },
    { L"Ibuki",  DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_COLLECTION, ARRAYSIZE(SFIII1_A_IBUKI_COLLECTION) },
    { L"Elena",  DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_COLLECTION, ARRAYSIZE(SFIII1_A_ELENA_COLLECTION) },
    { L"Oro",    DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_COLLECTION, ARRAYSIZE(SFIII1_A_ORO_COLLECTION) },
    { L"Ken",    DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_COLLECTION, ARRAYSIZE(SFIII1_A_KEN_COLLECTION) },
    { L"Sean",   DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_COLLECTION, ARRAYSIZE(SFIII1_A_SEAN_COLLECTION) },
    { L"Gill",   DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_COLLECTION, ARRAYSIZE(SFIII1_A_GILL_COLLECTION) },
    { L"Hugo (unplayable)", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_COLLECTION, ARRAYSIZE(SFIII1_A_HUGO_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_COLLECTION, ARRAYSIZE(SFIII1_A_STAGE_COLLECTION) },
    { L"Endings", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDINGS_COLLECTION, ARRAYSIZE(SFIII1_A_ENDINGS_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_COLLECTION, ARRAYSIZE(SFIII1_A_BONUS_COLLECTION) },
};

// The simm4.0/4.1 pair, which the directory set reads after simm5.0/5.1 (so from 0x400000): the character effect palettes (after-images)
const sGame_PaletteDataset SFIII1_A_EFFECTS_ALEX_AFTERIMAGE_PALETTES[] =
{
    { L"Alex Parry Flash 1 / Super Art After-Image 1", 0x584400, 0x584480, indexSF3NGSprites_Alex, 0x30 },
    { L"Alex Parry Flash 2 / Super Art After-Image 2", 0x584480, 0x584500, indexSF3NGSprites_Alex, 0x30 },
    { L"Alex Super Art After-Image 3", 0x584500, 0x584580, indexSF3NGSprites_Alex, 0x31 },
    { L"Alex Super Art After-Image 4 (2P)", 0x584580, 0x584600, indexSF3NGSprites_Alex, 0x31 },
    { L"Alex Unused 1/4", 0x584600, 0x584680, indexSF3NGSprites_Alex, 0x31 },
    { L"Alex Unused 2/4", 0x584680, 0x584700, indexSF3NGSprites_Alex, 0x31 },
    { L"Alex Unused 3/4", 0x584700, 0x584780, indexSF3NGSprites_Alex, 0x31 },
    { L"Alex Unused 4/4", 0x584780, 0x584800, indexSF3NGSprites_Alex, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_RYU_AFTERIMAGE_PALETTES[] =
{
    { L"Ryu Parry Flash 1 / Super Art After-Image 1", 0x584800, 0x584880, indexSF3NGSprites_Ryu, 0x30 },
    { L"Ryu Parry Flash 2 / Super Art After-Image 2", 0x584880, 0x584900, indexSF3NGSprites_Ryu, 0x30 },
    { L"Ryu Super Art After-Image 3", 0x584900, 0x584980, indexSF3NGSprites_Ryu, 0x31 },
    { L"Ryu Super Art After-Image 4 (2P)", 0x584980, 0x584a00, indexSF3NGSprites_Ryu, 0x31 },
    { L"Ryu Unused 1/4", 0x584a00, 0x584a80, indexSF3NGSprites_Ryu, 0x31 },
    { L"Ryu Unused 2/4", 0x584a80, 0x584b00, indexSF3NGSprites_Ryu, 0x31 },
    { L"Ryu Unused 3/4", 0x584b00, 0x584b80, indexSF3NGSprites_Ryu, 0x31 },
    { L"Ryu Unused 4/4", 0x584b80, 0x584c00, indexSF3NGSprites_Ryu, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_YUN_AFTERIMAGE_PALETTES[] =
{
    { L"Yun Parry Flash 1 / Super Art After-Image 1", 0x584c00, 0x584c80, indexSF3NGSprites_Yun, 0x30 },
    { L"Yun Parry Flash 2 / Super Art After-Image 2", 0x584c80, 0x584d00, indexSF3NGSprites_Yun, 0x30 },
    { L"Yun Super Art After-Image 3", 0x584d00, 0x584d80, indexSF3NGSprites_Yun, 0x31 },
    { L"Yun Super Art After-Image 4 (2P)", 0x584d80, 0x584e00, indexSF3NGSprites_Yun, 0x31 },
    { L"Yun Genei Jin Shadow 1 (1P)", 0x584e00, 0x584e80, indexSF3NGSprites_Yun, 0x32 },
    { L"Yun Genei Jin Shadow 1 (2P)", 0x584e80, 0x584f00, indexSF3NGSprites_Yun, 0x32 },
    { L"Yun Genei Jin Shadow 2 (1P)", 0x584f00, 0x584f80, indexSF3NGSprites_Yun, 0x32 },
    { L"Yun Genei Jin Shadow 2 (2P)", 0x584f80, 0x585000, indexSF3NGSprites_Yun, 0x32 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_YANG_AFTERIMAGE_PALETTES[] =
{
    { L"Yang Parry Flash 1 / Super Art After-Image 1", 0x586800, 0x586880, indexSF3NGSprites_Yang, 0x30 },
    { L"Yang Parry Flash 2 / Super Art After-Image 2", 0x586880, 0x586900, indexSF3NGSprites_Yang, 0x30 },
    { L"Yang Super Art After-Image 3", 0x586900, 0x586980, indexSF3NGSprites_Yang, 0x31 },
    { L"Yang Super Art After-Image 4 (2P)", 0x586980, 0x586a00, indexSF3NGSprites_Yang, 0x31 },
    { L"Yang Genei Jin Shadow 1 (1P)", 0x586a00, 0x586a80, indexSF3NGSprites_Yang, 0x32 },
    { L"Yang Genei Jin Shadow 1 (2P)", 0x586a80, 0x586b00, indexSF3NGSprites_Yang, 0x32 },
    { L"Yang Genei Jin Shadow 2 (1P)", 0x586b00, 0x586b80, indexSF3NGSprites_Yang, 0x32 },
    { L"Yang Genei Jin Shadow 2 (2P)", 0x586b80, 0x586c00, indexSF3NGSprites_Yang, 0x32 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_DUDLEY_AFTERIMAGE_PALETTES[] =
{
    { L"Dudley Parry Flash 1 / Super Art After-Image 1", 0x585000, 0x585080, indexSF3NGSprites_Dudley, 0x30 },
    { L"Dudley Parry Flash 2 / Super Art After-Image 2", 0x585080, 0x585100, indexSF3NGSprites_Dudley, 0x30 },
    { L"Dudley Super Art After-Image 3", 0x585100, 0x585180, indexSF3NGSprites_Dudley, 0x31 },
    { L"Dudley Super Art After-Image 4 (2P)", 0x585180, 0x585200, indexSF3NGSprites_Dudley, 0x31 },
    { L"Dudley Unused 1/4", 0x585200, 0x585280, indexSF3NGSprites_Dudley, 0x31 },
    { L"Dudley Unused 2/4", 0x585280, 0x585300, indexSF3NGSprites_Dudley, 0x31 },
    { L"Dudley Unused 3/4", 0x585300, 0x585380, indexSF3NGSprites_Dudley, 0x31 },
    { L"Dudley Unused 4/4", 0x585380, 0x585400, indexSF3NGSprites_Dudley, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_NECRO_AFTERIMAGE_PALETTES[] =
{
    { L"Necro Parry Flash 1 / Super Art After-Image 1", 0x585400, 0x585480, indexSF3NGSprites_Necro, 0x30 },
    { L"Necro Parry Flash 2 / Super Art After-Image 2", 0x585480, 0x585500, indexSF3NGSprites_Necro, 0x30 },
    { L"Necro Super Art After-Image 3", 0x585500, 0x585580, indexSF3NGSprites_Necro, 0x31 },
    { L"Necro Super Art After-Image 4 (2P)", 0x585580, 0x585600, indexSF3NGSprites_Necro, 0x31 },
    { L"Necro Unused 1/4", 0x585600, 0x585680, indexSF3NGSprites_Necro, 0x31 },
    { L"Necro Unused 2/4", 0x585680, 0x585700, indexSF3NGSprites_Necro, 0x31 },
    { L"Necro Unused 3/4", 0x585700, 0x585780, indexSF3NGSprites_Necro, 0x31 },
    { L"Necro Unused 4/4", 0x585780, 0x585800, indexSF3NGSprites_Necro, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_IBUKI_AFTERIMAGE_PALETTES[] =
{
    { L"Ibuki Parry Flash 1 / Super Art After-Image 1", 0x585c00, 0x585c80, indexSF3NGSprites_Ibuki, 0x30 },
    { L"Ibuki Parry Flash 2 / Super Art After-Image 2", 0x585c80, 0x585d00, indexSF3NGSprites_Ibuki, 0x30 },
    { L"Ibuki Super Art After-Image 3", 0x585d00, 0x585d80, indexSF3NGSprites_Ibuki, 0x31 },
    { L"Ibuki Super Art After-Image 4 (2P)", 0x585d80, 0x585e00, indexSF3NGSprites_Ibuki, 0x31 },
    { L"Ibuki Unused 1/4", 0x585e00, 0x585e80, indexSF3NGSprites_Ibuki, 0x31 },
    { L"Ibuki Unused 2/4", 0x585e80, 0x585f00, indexSF3NGSprites_Ibuki, 0x31 },
    { L"Ibuki Unused 3/4", 0x585f00, 0x585f80, indexSF3NGSprites_Ibuki, 0x31 },
    { L"Ibuki Unused 4/4", 0x585f80, 0x586000, indexSF3NGSprites_Ibuki, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_ELENA_AFTERIMAGE_PALETTES[] =
{
    { L"Elena Parry Flash 1 / Super Art After-Image 1", 0x586000, 0x586080, indexSF3NGSprites_Elena, 0x30 },
    { L"Elena Parry Flash 2 / Super Art After-Image 2", 0x586080, 0x586100, indexSF3NGSprites_Elena, 0x30 },
    { L"Elena Super Art After-Image 3", 0x586100, 0x586180, indexSF3NGSprites_Elena, 0x31 },
    { L"Elena Super Art After-Image 4 (2P)", 0x586180, 0x586200, indexSF3NGSprites_Elena, 0x31 },
    { L"Elena Unused 1/4", 0x586200, 0x586280, indexSF3NGSprites_Elena, 0x31 },
    { L"Elena Unused 2/4", 0x586280, 0x586300, indexSF3NGSprites_Elena, 0x31 },
    { L"Elena Unused 3/4", 0x586300, 0x586380, indexSF3NGSprites_Elena, 0x31 },
    { L"Elena Unused 4/4", 0x586380, 0x586400, indexSF3NGSprites_Elena, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_ORO_AFTERIMAGE_PALETTES[] =
{
    { L"Oro Parry Flash 1 / Super Art After-Image 1", 0x586400, 0x586480, indexSF3NGSprites_Oro, 0x30 },
    { L"Oro Parry Flash 2 / Super Art After-Image 2", 0x586480, 0x586500, indexSF3NGSprites_Oro, 0x30 },
    { L"Oro Super Art After-Image 3", 0x586500, 0x586580, indexSF3NGSprites_Oro, 0x31 },
    { L"Oro Super Art After-Image 4 (2P)", 0x586580, 0x586600, indexSF3NGSprites_Oro, 0x31 },
    { L"Oro Unused 1/4", 0x586600, 0x586680, indexSF3NGSprites_Oro, 0x31 },
    { L"Oro Unused 2/4", 0x586680, 0x586700, indexSF3NGSprites_Oro, 0x31 },
    { L"Oro Unused 3/4", 0x586700, 0x586780, indexSF3NGSprites_Oro, 0x31 },
    { L"Oro Unused 4/4", 0x586780, 0x586800, indexSF3NGSprites_Oro, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_KEN_AFTERIMAGE_PALETTES[] =
{
    { L"Ken Parry Flash 1 / Super Art After-Image 1", 0x586c00, 0x586c80, indexSF3NGSprites_Ken, 0x30 },
    { L"Ken Parry Flash 2 / Super Art After-Image 2", 0x586c80, 0x586d00, indexSF3NGSprites_Ken, 0x30 },
    { L"Ken Super Art After-Image 3", 0x586d00, 0x586d80, indexSF3NGSprites_Ken, 0x31 },
    { L"Ken Super Art After-Image 4 (2P)", 0x586d80, 0x586e00, indexSF3NGSprites_Ken, 0x31 },
    { L"Ken Unused 1/4", 0x586e00, 0x586e80, indexSF3NGSprites_Ken, 0x31 },
    { L"Ken Unused 2/4", 0x586e80, 0x586f00, indexSF3NGSprites_Ken, 0x31 },
    { L"Ken Unused 3/4", 0x586f00, 0x586f80, indexSF3NGSprites_Ken, 0x31 },
    { L"Ken Unused 4/4", 0x586f80, 0x587000, indexSF3NGSprites_Ken, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_SEAN_AFTERIMAGE_PALETTES[] =
{
    { L"Sean Parry Flash 1 / Super Art After-Image 1", 0x587000, 0x587080, indexSF3NGSprites_Sean, 0x30 },
    { L"Sean Parry Flash 2 / Super Art After-Image 2", 0x587080, 0x587100, indexSF3NGSprites_Sean, 0x30 },
    { L"Sean Super Art After-Image 3", 0x587100, 0x587180, indexSF3NGSprites_Sean, 0x31 },
    { L"Sean Super Art After-Image 4 (2P)", 0x587180, 0x587200, indexSF3NGSprites_Sean, 0x31 },
    { L"Sean Unused 1/4", 0x587200, 0x587280, indexSF3NGSprites_Sean, 0x31 },
    { L"Sean Unused 2/4", 0x587280, 0x587300, indexSF3NGSprites_Sean, 0x31 },
    { L"Sean Unused 3/4", 0x587300, 0x587380, indexSF3NGSprites_Sean, 0x31 },
    { L"Sean Unused 4/4", 0x587380, 0x587400, indexSF3NGSprites_Sean, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_GILL_AFTERIMAGE_PALETTES[] =
{
    { L"Gill Parry Flash 1 / Super Art After-Image 1", 0x584000, 0x584080, indexSF3NGSprites_Gill, 0x30 },
    { L"Gill Parry Flash 2 / Super Art After-Image 2", 0x584080, 0x584100, indexSF3NGSprites_Gill, 0x30 },
    { L"Gill Super Art After-Image 3", 0x584100, 0x584180, indexSF3NGSprites_Gill, 0x31 },
    { L"Gill Super Art After-Image 4 (2P)", 0x584180, 0x584200, indexSF3NGSprites_Gill, 0x31 },
    { L"Gill Unused 1/4", 0x584200, 0x584280, indexSF3NGSprites_Gill, 0x31 },
    { L"Gill Unused 2/4", 0x584280, 0x584300, indexSF3NGSprites_Gill, 0x31 },
    { L"Gill Unused 3/4", 0x584300, 0x584380, indexSF3NGSprites_Gill, 0x31 },
    { L"Gill Unused 4/4", 0x584380, 0x584400, indexSF3NGSprites_Gill, 0x31 },
};

const sGame_PaletteDataset SFIII1_A_EFFECTS_HUGO_AFTERIMAGE_PALETTES[] =
{
    { L"Hugo Parry Flash 1 / Super Art After-Image 1", 0x585800, 0x585880, indexSF3NGSprites_Hugo, 0x30 },
    { L"Hugo Parry Flash 2 / Super Art After-Image 2", 0x585880, 0x585900, indexSF3NGSprites_Hugo, 0x30 },
    { L"Hugo Super Art After-Image 3", 0x585900, 0x585980, indexSF3NGSprites_Hugo, 0x31 },
    { L"Hugo Super Art After-Image 4 (2P)", 0x585980, 0x585a00, indexSF3NGSprites_Hugo, 0x31 },
    { L"Hugo Unused 1/4", 0x585a00, 0x585a80, indexSF3NGSprites_Hugo, 0x31 },
    { L"Hugo Unused 2/4", 0x585a80, 0x585b00, indexSF3NGSprites_Hugo, 0x31 },
    { L"Hugo Unused 3/4", 0x585b00, 0x585b80, indexSF3NGSprites_Hugo, 0x31 },
    { L"Hugo Unused 4/4", 0x585b80, 0x585c00, indexSF3NGSprites_Hugo, 0x31 },
};

const sDescTreeNode SFIII1_A_EFFECTS_COLLECTION[] =
{
    { L"Alex Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_ALEX_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_ALEX_AFTERIMAGE_PALETTES) },
    { L"Ryu Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_RYU_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_RYU_AFTERIMAGE_PALETTES) },
    { L"Yun Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_YUN_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_YUN_AFTERIMAGE_PALETTES) },
    { L"Yang Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_YANG_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_YANG_AFTERIMAGE_PALETTES) },
    { L"Dudley Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_DUDLEY_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_DUDLEY_AFTERIMAGE_PALETTES) },
    { L"Necro Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_NECRO_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_NECRO_AFTERIMAGE_PALETTES) },
    { L"Ibuki Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_IBUKI_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_IBUKI_AFTERIMAGE_PALETTES) },
    { L"Elena Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_ELENA_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_ELENA_AFTERIMAGE_PALETTES) },
    { L"Oro Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_ORO_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_ORO_AFTERIMAGE_PALETTES) },
    { L"Ken Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_KEN_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_KEN_AFTERIMAGE_PALETTES) },
    { L"Sean Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_SEAN_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_SEAN_AFTERIMAGE_PALETTES) },
    { L"Gill Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_GILL_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_GILL_AFTERIMAGE_PALETTES) },
    { L"Hugo (unplayable) Parry / After-Images", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_HUGO_AFTERIMAGE_PALETTES, ARRAYSIZE(SFIII1_A_EFFECTS_HUGO_AFTERIMAGE_PALETTES) },
};

const sDescTreeNode SFIII1_A_DIR_UNITS[] =
{
    { L"Alex",   DESC_NODETYPE_TREE, (void*)SFIII1_A_ALEX_COLLECTION, ARRAYSIZE(SFIII1_A_ALEX_COLLECTION) },
    { L"Ryu",    DESC_NODETYPE_TREE, (void*)SFIII1_A_RYU_COLLECTION, ARRAYSIZE(SFIII1_A_RYU_COLLECTION) },
    { L"Yun/Yang", DESC_NODETYPE_TREE, (void*)SFIII1_A_YUNYANG_COLLECTION, ARRAYSIZE(SFIII1_A_YUNYANG_COLLECTION) },
    { L"Dudley", DESC_NODETYPE_TREE, (void*)SFIII1_A_DUDLEY_COLLECTION, ARRAYSIZE(SFIII1_A_DUDLEY_COLLECTION) },
    { L"Necro",  DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_COLLECTION, ARRAYSIZE(SFIII1_A_NECRO_COLLECTION) },
    { L"Ibuki",  DESC_NODETYPE_TREE, (void*)SFIII1_A_IBUKI_COLLECTION, ARRAYSIZE(SFIII1_A_IBUKI_COLLECTION) },
    { L"Elena",  DESC_NODETYPE_TREE, (void*)SFIII1_A_ELENA_COLLECTION, ARRAYSIZE(SFIII1_A_ELENA_COLLECTION) },
    { L"Oro",    DESC_NODETYPE_TREE, (void*)SFIII1_A_ORO_COLLECTION, ARRAYSIZE(SFIII1_A_ORO_COLLECTION) },
    { L"Ken",    DESC_NODETYPE_TREE, (void*)SFIII1_A_KEN_COLLECTION, ARRAYSIZE(SFIII1_A_KEN_COLLECTION) },
    { L"Sean",   DESC_NODETYPE_TREE, (void*)SFIII1_A_SEAN_COLLECTION, ARRAYSIZE(SFIII1_A_SEAN_COLLECTION) },
    { L"Gill",   DESC_NODETYPE_TREE, (void*)SFIII1_A_GILL_COLLECTION, ARRAYSIZE(SFIII1_A_GILL_COLLECTION) },
    { L"Hugo (unplayable)", DESC_NODETYPE_TREE, (void*)SFIII1_A_HUGO_COLLECTION, ARRAYSIZE(SFIII1_A_HUGO_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)SFIII1_A_STAGE_COLLECTION, ARRAYSIZE(SFIII1_A_STAGE_COLLECTION) },
    { L"Endings", DESC_NODETYPE_TREE, (void*)SFIII1_A_ENDINGS_COLLECTION, ARRAYSIZE(SFIII1_A_ENDINGS_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_COLLECTION, ARRAYSIZE(SFIII1_A_BONUS_COLLECTION) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SFIII1_A_EFFECTS_COLLECTION, ARRAYSIZE(SFIII1_A_EFFECTS_COLLECTION) },
};

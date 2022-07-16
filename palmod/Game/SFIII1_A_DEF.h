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
    index3SSprites_Elena,
    index3SSprites_Oro,
    index3SSprites_Yang,
    index3SSprites_Ken,
    index3SSprites_Sean,
    index3SSprites_Gill,
    indexSF3NGSprites_Bonus,
};

const sGame_PaletteDataset SFIII1_A_ALEX_LP_PALETTES[] =
{
    { L"Alex LP", 0x3d0600, 0x3d0680, index3SSprites_Alex, 0x00 },
    { L"Alex LP HUD", 0x3e50c0, 0x3e50e0 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_MP_PALETTES[] =
{
    { L"Alex MP", 0x3d0680, 0x3d0700, index3SSprites_Alex, 0x00 },
    { L"Alex MP HUD", 0x3e50e0, 0x3e5100 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_HP_PALETTES[] =
{
    { L"Alex HP", 0x3d0700, 0x3d0780, index3SSprites_Alex, 0x00 },
    { L"Alex HP HUD", 0x3e5100, 0x3e5120 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_LK_PALETTES[] =
{
    { L"Alex LK", 0x3d0780, 0x3d0800, index3SSprites_Alex, 0x00 },
    { L"Alex LK HUD", 0x3e5120, 0x3e5140 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_MK_PALETTES[] =
{
    { L"Alex MK", 0x3d0800, 0x3d0880, index3SSprites_Alex, 0x00 },
    { L"Alex MK HUD", 0x3e5140, 0x3e5160 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_HK_PALETTES[] =
{
    { L"Alex HK", 0x3d0880, 0x3d0900, index3SSprites_Alex, 0x00 },
    { L"Alex HK HUD", 0x3e5160, 0x3e5180 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_Support_PALETTES[] =
{
    { L"Alex Freeze", 0x3d4600, 0x3d4680, index3SSprites_Alex },
    { L"Alex Burning", 0x3d4d00, 0x3d4d80, index3SSprites_Alex },
};

const sGame_PaletteDataset SFIII1_A_ALEX_EXTRA_PALETTES[] =
{
    // Warning: this is a paired palette, so if you change this please ensure UpdatePalImg handles that update correctly
    { L"Alex Flash", 0x3d3380, 0x3d3400, index3SSprites_Alex, 0x02 },
};

const sGame_PaletteDataset SFIII1_A_RYU_LP_PALETTES[] =
{
    { L"Ryu LP", 0x3d0900, 0x3d0980, index3SSprites_Ryu },
    { L"Ryu LP HUD", 0x3e5180, 0x3e51a0 },
};

const sGame_PaletteDataset SFIII1_A_RYU_MP_PALETTES[] =
{
    { L"Ryu MP", 0x3d0980, 0x3d0a00, index3SSprites_Ryu },
    { L"Ryu MP HUD", 0x3e51a0, 0x3e51c0 },
};

const sGame_PaletteDataset SFIII1_A_RYU_HP_PALETTES[] =
{
    { L"Ryu HP", 0x3d0a00, 0x3d0a80, index3SSprites_Ryu },
    { L"Ryu HP HUD", 0x3e51c0, 0x3e51e0 },
};

const sGame_PaletteDataset SFIII1_A_RYU_LK_PALETTES[] =
{
    { L"Ryu LK", 0x3d0a80, 0x3d0b00, index3SSprites_Ryu },
    { L"Ryu LK HUD", 0x3e51e0, 0x3e5200 },
};

const sGame_PaletteDataset SFIII1_A_RYU_MK_PALETTES[] =
{
    { L"Ryu MK", 0x3d0b00, 0x3d0b80, index3SSprites_Ryu },
    { L"Ryu MK HUD", 0x3e5200, 0x3e5220 },
};

const sGame_PaletteDataset SFIII1_A_RYU_HK_PALETTES[] =
{
    { L"Ryu HK", 0x3d0b80, 0x3d0c00, index3SSprites_Ryu },
    { L"Ryu HK HUD", 0x3e5220, 0x3e5240 },
};

const sGame_PaletteDataset SFIII1_A_RYU_Support_PALETTES[] =
{
    { L"Ryu Freeze", 0x3d4680, 0x3d4700, index3SSprites_Ryu },
    { L"Ryu Burning", 0x3d4d80, 0x3d4e00, index3SSprites_Ryu },
};

const sGame_PaletteDataset SFIII1_A_RYU_EXTRA_PALETTES[] =
{
    { L"Ryu Hadoken", 0x03d3480, 0x03d3500, index3SSprites_Ryu, 0x5 },
    { L"Ryu Denjin Hadoken Charge", 0x3d3400, 0x3d3480, index3SSprites_Ryu },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_LP_PALETTES[] =
{
    { L"Yun LP", 0x3d0c00, 0x3d0c80, index3SSprites_Yun },
    { L"Yun LP HUD", 0x3e5240, 0x3e5260 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_MP_PALETTES[] =
{
    { L"Yun MP", 0x3d0c80, 0x3d0d00, index3SSprites_Yun },
    { L"Yun MP HUD", 0x3e5260, 0x3e5280 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_HP_PALETTES[] =
{
    { L"Yun HP", 0x3d0d00, 0x3d0d80, index3SSprites_Yun },
    { L"Yun HP HUD", 0x3e5280, 0x3e52a0 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_LK_PALETTES[] =
{
    { L"Yang LK", 0x3d2100, 0x3d2180, index3SSprites_Yang, 0x10 },
    { L"Yang LK HUD", 0x3e5780, 0x3e57a0 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_MK_PALETTES[] =
{
    { L"Yang MK", 0x3d2180, 0x3d2200, index3SSprites_Yang, 0x10 },
    { L"Yang MK HUD", 0x3e57a0, 0x3e57c0 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_HK_PALETTES[] =
{
    { L"Yang HK", 0x3d2200, 0x3d2280, index3SSprites_Yang, 0x10 },
    { L"Yang HK HUD", 0x3e57c0, 0x3e57e0 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_Support_PALETTES[] =
{
    { L"Yun Freeze", 0x3d4700, 0x3d4780, index3SSprites_Yun },
    { L"Yun Burning", 0x3d4e00, 0x3d4e80, index3SSprites_Yun },
    { L"Yang Freeze", 0x3d4a80, 0x3d4b00, index3SSprites_Yang, 0x10 },
    { L"Yang Burning", 0x3d5180, 0x3d5200, index3SSprites_Yang, 0x10 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_LP_PALETTES[] =
{
    { L"Dudley LP", 0x3d0f00, 0x3d0f80, index3SSprites_Dudley },
    { L"Dudley LP HUD", 0x3e5300, 0x3e5320 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_MP_PALETTES[] =
{
    { L"Dudley MP", 0x3d0f80, 0x3d1000, index3SSprites_Dudley },
    { L"Dudley MP HUD", 0x3e5320, 0x3e5340 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_HP_PALETTES[] =
{
    { L"Dudley HP", 0x3d1000, 0x3d1080, index3SSprites_Dudley },
    { L"Dudley HP HUD", 0x3e5340, 0x3e5360 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_LK_PALETTES[] =
{
    { L"Dudley LK", 0x3d1080, 0x3d1100, index3SSprites_Dudley },
    { L"Dudley LK HUD", 0x3e5360, 0x3e5380 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_MK_PALETTES[] =
{
    { L"Dudley MK", 0x3d1100, 0x3d1180, index3SSprites_Dudley },
    { L"Dudley MK HUD", 0x3e5380, 0x3e53a0 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_HK_PALETTES[] =
{
    { L"Dudley HK", 0x3d1180, 0x3d1200, index3SSprites_Dudley },
    { L"Dudley HK HUD", 0x3e53a0, 0x3e53c0 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_Support_PALETTES[] =
{
    { L"Dudley Freeze", 0x3d4780, 0x3d4800, index3SSprites_Dudley },
    { L"Dudley Burning", 0x3d4e80, 0x3d4f00, index3SSprites_Dudley },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_EXTRA_PALETTES[] =
{
    { L"Dudley Intro Car", 0x3d3580, 0x3d3600, index3SSprites_Dudley, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_LP_PALETTES[] =
{
    { L"Necro LP", 0x3d1200, 0x3d1280, index3SSprites_Necro },
    { L"Necro LP HUD", 0x3e53c0, 0x3e53e0 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_MP_PALETTES[] =
{
    { L"Necro MP", 0x3d1280, 0x3d1300, index3SSprites_Necro },
    { L"Necro MP HUD", 0x3e53e0, 0x3e5400 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_HP_PALETTES[] =
{
    { L"Necro HP", 0x3d1300, 0x3d1380, index3SSprites_Necro },
    { L"Necro HP HUD", 0x3e5400, 0x3e5420 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_LK_PALETTES[] =
{
    { L"Necro LK", 0x3d1380, 0x3d1400, index3SSprites_Necro },
    { L"Necro LK HUD", 0x3e5420, 0x3e5440 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_MK_PALETTES[] =
{
    { L"Necro MK", 0x3d1400, 0x3d1480, index3SSprites_Necro },
    { L"Necro MK HUD", 0x3e5440, 0x3e5460 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_HK_PALETTES[] =
{
    { L"Necro HK", 0x3d1480, 0x3d1500, index3SSprites_Necro },
    { L"Necro HK HUD", 0x3e5460, 0x3e5480 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_Support_PALETTES[] =
{
    { L"Necro Freeze", 0x3d4800, 0x3d4880, index3SSprites_Necro },
    { L"Necro Freeze 2?", 0x3d4880, 0x3d4900, index3SSprites_Necro },
    { L"Necro Burning", 0x3d4f00, 0x3d4f80, index3SSprites_Necro },
    { L"Necro Burning 2?", 0x3d4f80, 0x3d5000, index3SSprites_Necro },
};

const sGame_PaletteDataset SFIII1_A_NECRO_EXTRA_PALETTES[] =
{
    { L"Necro LP SA1 Pulse", 0x3d5980, 0x3d5a00, index3SSprites_Necro, 0x00 },
    { L"Necro LP SA1 Trails", 0x3d5a00, 0x3d5a80, index3SSprites_Necro, 0x00 },
    { L"Necro MP SA1 Pulse", 0x3d5b00, 0x3d5b80, index3SSprites_Necro, 0x00 },
    { L"Necro MP SA1 Trails", 0x3d5b80, 0x3d5c00, index3SSprites_Necro, 0x00 },
    { L"Necro HP SA1 Pulse", 0x3d5c80, 0x3d5d00, index3SSprites_Necro, 0x00 },
    { L"Necro HP SA1 Trails", 0x3d5d00, 0x3d5d80, index3SSprites_Necro, 0x00 },
    { L"Necro LK SA1 Pulse", 0x3d5e00, 0x3d5e80, index3SSprites_Necro, 0x00 },
    { L"Necro LK SA1 Trails", 0x3d5e80, 0x3d5f00, index3SSprites_Necro, 0x00 },
    { L"Necro MK SA1 Trails", 0x3d5f80, 0x3d6000, index3SSprites_Necro, 0x00 },
    { L"Necro MK SA1 Trails", 0x3d6000, 0x3d6080, index3SSprites_Necro, 0x00 },
    { L"Necro HK SA1 Trails", 0x3d6100, 0x3d6180, index3SSprites_Necro, 0x00 },
    { L"Necro HK SA1 Trails", 0x3d6180, 0x3d6200, index3SSprites_Necro, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_LP_PALETTES[] =
{
    { L"Beta Hugo LP", 0x3d1500, 0x3d1580, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo LP HUD", 0x3e5480, 0x3e54a0 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_MP_PALETTES[] =
{
    { L"Beta Hugo MP", 0x3d1580, 0x3d1600, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo MP HUD", 0x3e54a0, 0x3e54c0 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_HP_PALETTES[] =
{
    { L"Beta Hugo HP", 0x3d1600, 0x3d1680, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo HP HUD", 0x3e54c0, 0x3e54e0 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_LK_PALETTES[] =
{
    { L"Beta Hugo LK", 0x3d1680, 0x3d1700, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo LK HUD", 0x3e54e0, 0x3e5500 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_MK_PALETTES[] =
{
    { L"Beta Hugo MK", 0x3d1700, 0x3d1780, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo MK HUD", 0x3e5500, 0x3e5520 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_HK_PALETTES[] =
{
    { L"Beta Hugo HK", 0x3d1780, 0x3d1800, index3SSprites_Hugo, 0x03 },
    { L"Beta Hugo HK HUD", 0x3e5520, 0x3e5540 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_LP_PALETTES[] =
{
    { L"Ibuki LP", 0x3d1800, 0x3d1880, index3SSprites_Ibuki },
    { L"Ibuki LP HUD", 0x3e5540, 0x3e5560 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_MP_PALETTES[] =
{
    { L"Ibuki MP", 0x3d1880, 0x3d1900, index3SSprites_Ibuki },
    { L"Ibuki MP HUD", 0x3e5560, 0x3e5580 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_HP_PALETTES[] =
{
    { L"Ibuki HP", 0x3d1900, 0x3d1980, index3SSprites_Ibuki },
    { L"Ibuki HP HUD", 0x3e5580, 0x3e55a0 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_LK_PALETTES[] =
{
    { L"Ibuki LK", 0x3d1980, 0x3d1a00, index3SSprites_Ibuki },
    { L"Ibuki LK HUD", 0x3e55a0, 0x3e55c0 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_MK_PALETTES[] =
{
    { L"Ibuki MK", 0x3d1a00, 0x3d1a80, index3SSprites_Ibuki },
    { L"Ibuki MK HUD", 0x3e55c0, 0x3e55e0 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_HK_PALETTES[] =
{
    { L"Ibuki HK", 0x3d1a80, 0x3d1b00, index3SSprites_Ibuki },
    { L"Ibuki HK HUD", 0x3e55e0, 0x3e5600 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_Support_PALETTES[] =
{
    { L"Ibuki Freeze", 0x3d4900, 0x3d4980, index3SSprites_Ibuki },
    { L"Ibuki Burning", 0x3d5000, 0x3d5080, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_ELENA_LP_PALETTES[] =
{
    { L"Elena LP", 0x3d1b00, 0x3d1b80, index3SSprites_Elena, 0x05 },
    { L"Elena LP HUD", 0x3e5600, 0x3e5620 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_MP_PALETTES[] =
{
    { L"Elena MP", 0x3d1b80, 0x3d1c00, index3SSprites_Elena, 0x05 },
    { L"Elena MP HUD", 0x3e5620, 0x3e5640 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_HP_PALETTES[] =
{
    { L"Elena HP", 0x3d1c00, 0x3d1c80, index3SSprites_Elena, 0x05 },
    { L"Elena HP HUD", 0x3e5640, 0x3e5660 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_LK_PALETTES[] =
{
    { L"Elena LK", 0x3d1c80, 0x3d1d00, index3SSprites_Elena, 0x05 },
    { L"Elena LK HUD", 0x3e5660, 0x3e5680 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_MK_PALETTES[] =
{
    { L"Elena MK", 0x3d1d00, 0x3d1d80, index3SSprites_Elena, 0x05 },
    { L"Elena MK HUD", 0x3e5680, 0x3e56a0 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_HK_PALETTES[] =
{
    { L"Elena HK", 0x3d1d80, 0x3d1e00, index3SSprites_Elena, 0x05 },
    { L"Elena HK HUD", 0x3e56a0, 0x3e56c0 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_Support_PALETTES[] =
{
    { L"Elena Freeze", 0x3d4980, 0x3d4a00, index3SSprites_Elena, 0x05 },
    { L"Elena Burning", 0x3d5080, 0x3d5100, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ORO_LP_PALETTES[] =
{
    { L"Oro LP", 0x3d1e00, 0x3d1e80, index3SSprites_Oro },
    { L"Oro LP HUD", 0x3e56c0, 0x3e56e0 },
};

const sGame_PaletteDataset SFIII1_A_ORO_MP_PALETTES[] =
{
    { L"Oro MP", 0x3d1e80, 0x3d1f00, index3SSprites_Oro },
    { L"Oro MP HUD", 0x3e56e0, 0x3e5700 },
};

const sGame_PaletteDataset SFIII1_A_ORO_HP_PALETTES[] =
{
    { L"Oro HP", 0x3d1f00, 0x3d1f80, index3SSprites_Oro },
    { L"Oro HP HUD", 0x3e5700, 0x3e5720 },
};

const sGame_PaletteDataset SFIII1_A_ORO_LK_PALETTES[] =
{
    { L"Oro LK", 0x3d1f80, 0x3d2000, index3SSprites_Oro },
    { L"Oro LK HUD", 0x3e5720, 0x3e5740 },
};

const sGame_PaletteDataset SFIII1_A_ORO_MK_PALETTES[] =
{
    { L"Oro MK", 0x3d2000, 0x3d2080, index3SSprites_Oro },
    { L"Oro MK HUD", 0x3e5740, 0x3e5760 },
};

const sGame_PaletteDataset SFIII1_A_ORO_HK_PALETTES[] =
{
    { L"Oro HK", 0x3d2080, 0x3d2100, index3SSprites_Oro },
    { L"Oro HK HUD", 0x3e5760, 0x3e5780 },
};

const sGame_PaletteDataset SFIII1_A_ORO_Support_PALETTES[] =
{
    { L"Oro Freeze", 0x3d4a00, 0x3d4a80, index3SSprites_Oro },
    { L"Oro Burning", 0x3d5100, 0x3d5180, index3SSprites_Oro },
};

const sGame_PaletteDataset SFIII1_A_ORO_EXTRA_PALETTES[] =
{
    { L"Oro SA?", 0x3d3c00, 0x3d3d00 },
};

const sGame_PaletteDataset SFIII1_A_KEN_LP_PALETTES[] =
{
    { L"Ken LP", 0x3d2400, 0x3d2480, index3SSprites_Ken },
    { L"Ken LP HUD", 0x3e5840, 0x3e5860 },
};

const sGame_PaletteDataset SFIII1_A_KEN_MP_PALETTES[] =
{
    { L"Ken MP", 0x3d2480, 0x3d2500, index3SSprites_Ken },
    { L"Ken MP HUD", 0x3e5860, 0x3e5880 },
};

const sGame_PaletteDataset SFIII1_A_KEN_HP_PALETTES[] =
{
    { L"Ken HP", 0x3d2500, 0x3d2580, index3SSprites_Ken },
    { L"Ken HP HUD", 0x3e5880, 0x3e58a0 },
};

const sGame_PaletteDataset SFIII1_A_KEN_LK_PALETTES[] =
{
    { L"Ken LK", 0x3d2580, 0x3d2600, index3SSprites_Ken },
    { L"Ken LK HUD", 0x3e58a0, 0x3e58c0 },
};

const sGame_PaletteDataset SFIII1_A_KEN_MK_PALETTES[] =
{
    { L"Ken MK", 0x3d2600, 0x3d2680, index3SSprites_Ken },
    { L"Ken MK HUD", 0x3e58c0, 0x3e58e0 },
};

const sGame_PaletteDataset SFIII1_A_KEN_HK_PALETTES[] =
{
    { L"Ken HK", 0x3d2680, 0x3d2700, index3SSprites_Ken },
    { L"Ken HK HUD", 0x3e58e0, 0x3e5900 },
};

const sGame_PaletteDataset SFIII1_A_KEN_Support_PALETTES[] =
{
    { L"Ken Freeze", 0x3d4b00, 0x3d4b80, index3SSprites_Ken },
    { L"Ken Burning", 0x3d5200, 0x3d5280, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII1_A_SEAN_LP_PALETTES[] =
{
    { L"Sean LP", 0x3d2700, 0x3d2780, index3SSprites_Sean },
    { L"Sean LP HUD", 0x3e5900, 0x3e5920 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_MP_PALETTES[] =
{
    { L"Sean MP", 0x3d2780, 0x3d2800, index3SSprites_Sean },
    { L"Sean MP HUD", 0x3e5920, 0x3e5940 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_HP_PALETTES[] =
{
    { L"Sean HP", 0x3d2800, 0x3d2880, index3SSprites_Sean },
    { L"Sean HP HUD", 0x3e5940, 0x3e5960 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_LK_PALETTES[] =
{
    { L"Sean LK", 0x3d2880, 0x3d2900, index3SSprites_Sean },
    { L"Sean LK HUD", 0x3e5960, 0x3e5980 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_MK_PALETTES[] =
{
    { L"Sean MK", 0x3d2900, 0x3d2980, index3SSprites_Sean },
    { L"Sean MK HUD", 0x3e5980, 0x3e59a0 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_HK_PALETTES[] =
{
    { L"Sean HK", 0x3d2980, 0x3d2a00, index3SSprites_Sean },
    { L"Sean HK HUD", 0x3e59a0, 0x3e59c0 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_Support_PALETTES[] =
{
    { L"Sean Freeze", 0x3d4b80, 0x3d4c00, index3SSprites_Sean },
    { L"Sean Burning", 0x3d5280, 0x3d5300, index3SSprites_Sean },
};

const sGame_PaletteDataset SFIII1_A_GILL_LP_PALETTES[] =
{
    { L"Gill LP Facing Left", 0x3d0000, 0x3d0080, index3SSprites_Gill, 0x01 },
    { L"Gill LP Facing Right", 0x3d0080, 0x3d0100, index3SSprites_Gill, 0x0 },
    { L"Gill LP HUD", 0x3e5000, 0x3e5020 },
};

const sGame_PaletteDataset SFIII1_A_GILL_MP_PALETTES[] =
{
    { L"Gill MP Facing Left", 0x3d0100, 0x3d0180, index3SSprites_Gill, 0x01 },
    { L"Gill MP Facing Right", 0x3d0180, 0x3d0200, index3SSprites_Gill, 0x0 },
    { L"Gill MP HUD", 0x3e5020, 0x3e5040 },
};

const sGame_PaletteDataset SFIII1_A_GILL_HP_PALETTES[] =
{
    { L"Gill HP Facing Left", 0x3d0200, 0x3d0280, index3SSprites_Gill, 0x01 },
    { L"Gill HP Facing Right", 0x3d0280, 0x3d0300, index3SSprites_Gill, 0x0 },
    { L"Gill HP HUD", 0x3e5040, 0x3e5060 },
};

const sGame_PaletteDataset SFIII1_A_GILL_LK_PALETTES[] =
{
    { L"Gill LK Facing Left", 0x3d0300, 0x3d0380, index3SSprites_Gill, 0x01 },
    { L"Gill LK Facing Right", 0x3d0380, 0x3d0400, index3SSprites_Gill, 0x0 },
    { L"Gill LK HUD", 0x3e5060, 0x3e5080 },
};

const sGame_PaletteDataset SFIII1_A_GILL_MK_PALETTES[] =
{
    { L"Gill MK Facing Left", 0x3d0400, 0x3d0480, index3SSprites_Gill, 0x01 },
    { L"Gill MK Facing Right", 0x3d0480, 0x3d0500, index3SSprites_Gill, 0x0 },
    { L"Gill MK HUD", 0x3e5080, 0x3e50a0 },
};

const sGame_PaletteDataset SFIII1_A_GILL_HK_PALETTES[] =
{
    { L"Gill HK Facing Left", 0x3d0500, 0x3d0580, index3SSprites_Gill, 0x01 },
    { L"Gill HK Facing Right", 0x3d0580, 0x3d0600, index3SSprites_Gill, 0x0 },
    { L"Gill HK HUD", 0x3e50a0, 0x3e50c0 },
};

const sGame_PaletteDataset SFIII1_A_GILL_Support_PALETTES[] =
{
    { L"Gill Freeze Right", 0x3d4580, 0x3d4600, index3SSprites_Gill, 0x01 },
    { L"Gill Freeze Left", 0x3d4500, 0x3d4580, index3SSprites_Gill, 0x00 },
    { L"Gill Burning Right", 0x3d4c80, 0x3d4d00, index3SSprites_Gill, 0x01 },
    { L"Gill Burning Left", 0x3d4c00, 0x3d4c80, index3SSprites_Gill, 0x00 },
};

const sGame_PaletteDataset SFIII1_A_GILL_PORTRAIT_PALETTES[] =
{
    { L"Gill Left Select Portrait", 0x3e8b80, 0x3e8c00, index3SSprites_Gill, 0x26 },
    { L"Gill Right Select Portrait", 0x3e8380, 0x3e8400, index3SSprites_Gill, 0x27 },
    { L"Gill Winning Portrait Left", 0x3ed000, 0x3ed080, index3SSprites_Gill, 0x28 },
    { L"Gill Winning Portrait Right", 0x3ed080, 0x3ed100, index3SSprites_Gill, 0x29 },

    { L"Gill Character Select Icon", 0x3e7400, 0x3e7480 },
};

const sGame_PaletteDataset SFIII1_A_ALEX_PORTRAIT_PALETTES[] =
{
    { L"Alex Select Portrait", 0x3e8c00, 0x3e8c80, index3SSprites_Alex, 0x26 },

    { L"Alex Winning Portrait LP", 0x3ed300, 0x3ed380, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait MP", 0x3ed380, 0x3ed400, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait HP", 0x3ed400, 0x3ed480, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait LK", 0x3ed480, 0x3ed500, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait MK", 0x3ed500, 0x3ed580, index3SSprites_Alex, 0x28 },
    { L"Alex Winning Portrait HK", 0x3ed580, 0x3ed600, index3SSprites_Alex, 0x28 },

    { L"Alex Losing Portrait LP", 0x3f0600, 0x3f0700, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait MP", 0x3f0700, 0x3f0800, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait HP", 0x3f0800, 0x3f0900, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait LK", 0x3f0900, 0x3f0a00, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait MK", 0x3f0a00, 0x3f0b00, index3SSprites_Alex, 0x24 },
    { L"Alex Losing Portrait HK", 0x3f0b00, 0x3f0c00, index3SSprites_Alex, 0x24 },

    { L"Alex Character Select Icon", 0x3e7480, 0x3e7500 },
};

const sGame_PaletteDataset SFIII1_A_RYU_PORTRAIT_PALETTES[] =
{
    { L"Ryu Select Portrait", 0x3e8c80, 0x3e8d00, index3SSprites_Ryu, 0x26 },

    { L"Ryu Winning Portrait LP", 0x3ed600, 0x3ed680, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait MP", 0x3ed680, 0x3ed700, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait HP", 0x3ed700, 0x3ed780, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait LK", 0x3ed780, 0x3ed800, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait MK", 0x3ed800, 0x3ed880, index3SSprites_Ryu, 0x28 },
    { L"Ryu Winning Portrait HK", 0x3ed880, 0x3ed900, index3SSprites_Ryu, 0x28 },

    { L"Ryu Losing Portrait LP", 0x3f0c00, 0x3f0d80, index3SSprites_Ryu, 0x2b },
    { L"Ryu Losing Portrait MP", 0x3f0d80, 0x3f0f00, index3SSprites_Ryu, 0x2b },
    { L"Ryu Losing Portrait HP", 0x3f0f00, 0x3f1080, index3SSprites_Ryu, 0x2b },
    { L"Ryu Losing Portrait LK", 0x3f1080, 0x3f1200, index3SSprites_Ryu, 0x2b },
    { L"Ryu Losing Portrait MK", 0x3f1200, 0x3f1380, index3SSprites_Ryu, 0x2b },
    { L"Ryu Losing Portrait HK", 0x3f1380, 0x3f1500, index3SSprites_Ryu, 0x2b },

    { L"Ryu Character Select Icon", 0x3e7500, 0x3e7580 },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_PORTRAIT_PALETTES[] =
{
    { L"Yun Select Portrait", 0x3e8d00, 0x3e8d80, index3SSprites_Yun, 0x26 },
    { L"Yang Select Portrait", 0x3e9080, 0x3e9100, index3SSprites_Yang, 0x26 },

    { L"Yun Winning Portrait LP", 0x3ed900, 0x3eda00, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait MP", 0x3eda00, 0x3edb00, index3SSprites_Yun, 0x28 },
    { L"Yun Winning Portrait HP", 0x3edb00, 0x3edc00, index3SSprites_Yun, 0x28 },
    { L"Yang Winning Portrait LK", 0x3efa00, 0x3efa80, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait MK", 0x3efa80, 0x3efb00, index3SSprites_Yang, 0x28 },
    { L"Yang Winning Portrait HK", 0x3efb00, 0x3efb80, index3SSprites_Yang, 0x28 },

    { L"Yun Losing Portrait LP", 0x3f1500, 0x3f1680, index3SSprites_Yun, 0x2b },
    { L"Yun Losing Portrait MP", 0x3f1680, 0x3f1800, index3SSprites_Yun, 0x2b },
    { L"Yun Losing Portrait HP", 0x3f1800, 0x3f1980, index3SSprites_Yun, 0x2b },
    { L"Yang Losing Portrait LK", 0x3f4500, 0x3f4600, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait MK", 0x3f4600, 0x3f4700, index3SSprites_Yang, 0x24 },
    { L"Yang Losing Portrait HK", 0x3f4700, 0x3f4800, index3SSprites_Yang, 0x24 },

    { L"Yun Character Select Icon", 0x3e7580, 0x3e7600 },
    { L"Yang Character Select Icon", 0x3e7900, 0x3e7980 },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_PORTRAIT_PALETTES[] =
{
    { L"Dudley Select Portrait", 0x3e8d80, 0x3e8e00, index3SSprites_Dudley, 0x26 },

    { L"Dudley Winning Portrait LP", 0x3edf00, 0x3ee000, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait MP", 0x3ee000, 0x3ee100, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait HP", 0x3ee100, 0x3ee200, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait LK", 0x3ee200, 0x3ee300, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait MK", 0x3ee300, 0x3ee400, index3SSprites_Dudley, 0x28 },
    { L"Dudley Winning Portrait HK", 0x3ee400, 0x3ee500, index3SSprites_Dudley, 0x28 },

    { L"Dudley Losing Portrait LP", 0x3f1e00, 0x3f1f80, index3SSprites_Dudley, 0x2b },
    { L"Dudley Losing Portrait MP", 0x3f1f80, 0x3f2100, index3SSprites_Dudley, 0x2b },
    { L"Dudley Losing Portrait HP", 0x3f2100, 0x3f2280, index3SSprites_Dudley, 0x2b },
    { L"Dudley Losing Portrait LK", 0x3f2280, 0x3f2400, index3SSprites_Dudley, 0x2b },
    { L"Dudley Losing Portrait MK", 0x3f2400, 0x3f2580, index3SSprites_Dudley, 0x2b },
    { L"Dudley Losing Portrait HK", 0x3f2580, 0x3f2700, index3SSprites_Dudley, 0x2b },

    { L"Dudley Character Select Icon", 0x3e7600, 0x3e7680 },
};

const sGame_PaletteDataset SFIII1_A_NECRO_PORTRAIT_PALETTES[] =
{
    { L"Necro Select Portrait", 0x3e8e00, 0x3e8e80, index3SSprites_Necro, 0x26 },

    { L"Necro Winning Portrait LP", 0x3ee500, 0x3ee580, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait MP", 0x3ee580, 0x3ee600, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait HP", 0x3ee600, 0x3ee680, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait LK", 0x3ee680, 0x3ee700, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait MK", 0x3ee700, 0x3ee780, index3SSprites_Necro, 0x28 },
    { L"Necro Winning Portrait HK", 0x3ee780, 0x3ee800, index3SSprites_Necro, 0x28 },

    { L"Necro Losing Portrait LP", 0x3f2700, 0x3f2800, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait MP", 0x3f2800, 0x3f2900, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait HP", 0x3f2900, 0x3f2a00, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait LK", 0x3f2a00, 0x3f2b00, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait MK", 0x3f2b00, 0x3f2c00, index3SSprites_Necro, 0x24 },
    { L"Necro Losing Portrait HK", 0x3f2c00, 0x3f2d00, index3SSprites_Necro, 0x24 },

    { L"Necro Character Select Icon", 0x3e7680, 0x3e7700 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_PORTRAIT_PALETTES[] =
{
    { L"Ibuki Select Portrait", 0x3e8f00, 0x3e8f80, index3SSprites_Ibuki, 0x26 },

    { L"Ibuki Winning Portrait LP", 0x3eee00, 0x3eee80, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait MP", 0x3eee80, 0x3eef00, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait HP", 0x3eef00, 0x3eef80, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait LK", 0x3eef80, 0x3ef000, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait MK", 0x3ef000, 0x3ef080, index3SSprites_Ibuki, 0x28 },
    { L"Ibuki Winning Portrait HK", 0x3ef080, 0x3ef100, index3SSprites_Ibuki, 0x28 },

    { L"Ibuki Losing Portrait LP", 0x3f3600, 0x3f3700, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait MP", 0x3f3700, 0x3f3800, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait HP", 0x3f3800, 0x3f3900, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait LK", 0x3f3900, 0x3f3a00, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait MK", 0x3f3a00, 0x3f3b00, index3SSprites_Ibuki, 0x24 },
    { L"Ibuki Losing Portrait HK", 0x3f3b00, 0x3f3c00, index3SSprites_Ibuki, 0x24 },

    { L"Ibuki Character Select Icon", 0x3e7780, 0x3e7800 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_PORTRAIT_PALETTES[] =
{
    { L"Hugo Character Select Icon", 0x3e7700, 0x3e7780 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_PORTRAIT_PALETTES[] =
{
    { L"Elena Select Portrait", 0x3e8f80, 0x3e9000, index3SSprites_Elena, 0x26 },

    { L"Elena Winning Portrait LP", 0x3ef100, 0x3ef200, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait MP", 0x3ef200, 0x3ef300, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait HP", 0x3ef300, 0x3ef400, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait LK", 0x3ef400, 0x3ef500, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait MK", 0x3ef500, 0x3ef600, index3SSprites_Elena, 0x28 },
    { L"Elena Winning Portrait HK", 0x3ef600, 0x3ef700, index3SSprites_Elena, 0x28 },

    { L"Elena Losing Portrait LP", 0x3f3c00, 0x3f3d00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait MP", 0x3f3d00, 0x3f3e00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait HP", 0x3f3e00, 0x3f3f00, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait LK", 0x3f3f00, 0x3f4000, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait MK", 0x3f4000, 0x3f4100, index3SSprites_Elena, 0x24 },
    { L"Elena Losing Portrait HK", 0x3f4100, 0x3f4200, index3SSprites_Elena, 0x24 },

    { L"Elena Character Select Icon", 0x3e7800, 0x3e7880 },
};

const sGame_PaletteDataset SFIII1_A_ORO_PORTRAIT_PALETTES[] =
{
    { L"Oro Select Portrait", 0x3e9000, 0x3e9080, index3SSprites_Oro, 0x26 },

    { L"Oro Winning Portrait LP", 0x3ef700, 0x3ef780, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait MP", 0x3ef780, 0x3ef800, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait HP", 0x3ef800, 0x3ef880, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait LK", 0x3ef880, 0x3ef900, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait MK", 0x3ef900, 0x3ef980, index3SSprites_Oro, 0x28 },
    { L"Oro Winning Portrait HK", 0x3ef980, 0x3efa00, index3SSprites_Oro, 0x28 },

    { L"Oro Losing Portrait LP", 0x3f4200, 0x3f4280, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait MP", 0x3f4280, 0x3f4300, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait HP", 0x3f4300, 0x3f4380, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait LK", 0x3f4380, 0x3f4400, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait MK", 0x3f4400, 0x3f4480, index3SSprites_Oro, 0x24 },
    { L"Oro Losing Portrait HK", 0x3f4480, 0x3f4500, index3SSprites_Oro, 0x24 },

    { L"Oro Character Select Icon", 0x3e7880, 0x3e7900 },
};

const sGame_PaletteDataset SFIII1_A_KEN_PORTRAIT_PALETTES[] =
{
    { L"Ken Select Portrait", 0x3e9100, 0x3e9180, index3SSprites_Ken, 0x26 },

    { L"Ken Winning Portrait LP", 0x3efd00, 0x3efd80, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait MP", 0x3efd80, 0x3efe00, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait HP", 0x3efe00, 0x3efe80, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait LK", 0x3efe80, 0x3eff00, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait MK", 0x3eff00, 0x3eff80, index3SSprites_Ken, 0x28 },
    { L"Ken Winning Portrait HK", 0x3eff80, 0x3f0000, index3SSprites_Ken, 0x28 },

    { L"Ken Losing Portrait LP", 0x3f4b00, 0x3f4c00, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait MP", 0x3f4c00, 0x3f4d00, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait HP", 0x3f4d00, 0x3f4e00, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait LK", 0x3f4e00, 0x3f4f00, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait MK", 0x3f4f00, 0x3f5000, index3SSprites_Ken, 0x24 },
    { L"Ken Losing Portrait HK", 0x3f5000, 0x3f5100, index3SSprites_Ken, 0x24 },

    { L"Ken Character Select Icon", 0x3e7980, 0x3e7a00 },
};

const sGame_PaletteDataset SFIII1_A_SEAN_PORTRAIT_PALETTES[] =
{
    { L"Sean Select Portrait", 0x3e9180, 0x3e9200, index3SSprites_Sean, 0x26 },

    { L"Sean Winning Portrait LP", 0x3f0000, 0x3f0100, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait MP", 0x3f0100, 0x3f0200, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait HP", 0x3f0200, 0x3f0300, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait LK", 0x3f0300, 0x3f0400, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait MK", 0x3f0400, 0x3f0500, index3SSprites_Sean, 0x28 },
    { L"Sean Winning Portrait HK", 0x3f0500, 0x3f0600, index3SSprites_Sean, 0x28 },

    { L"Sean Losing Portrait LP", 0x3f5100, 0x3f5280, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait MP", 0x3f5280, 0x3f5400, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait HP", 0x3f5400, 0x3f5580, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait LK", 0x3f5580, 0x3f5700, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait MK", 0x3f5700, 0x3f5880, index3SSprites_Sean, 0x24 },
    { L"Sean Losing Portrait HK", 0x3f5880, 0x3f5a00, index3SSprites_Sean, 0x24 },

    { L"Sean Character Select Icon", 0x3e7a00, 0x3e7a80 },
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
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFIII1_A_NECRO_EXTRA_PALETTES, ARRAYSIZE(SFIII1_A_NECRO_EXTRA_PALETTES) },
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
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND1_PALETTES[] =
{
    { L"Ibuki Stage Round 1 1/5", 0x3c6400, 0x3c6600, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 1 2/5", 0x3c6600, 0x3c6800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 1 3/5", 0x3c6800, 0x3c6a00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 1 4/5", 0x3c6a00, 0x3c6c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 1 5/5", 0x3c6c00, 0x3c6c80, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND1_FADED_PALETTES[] =
{
    { L"Ibuki Stage Round 1 (Faded) 1/5", 0x3c6c80, 0x3c6e80 },
    { L"Ibuki Stage Round 1 (Faded) 2/5", 0x3c6e80, 0x3c7080 },
    { L"Ibuki Stage Round 1 (Faded) 3/5", 0x3c7080, 0x3c7280 },
    { L"Ibuki Stage Round 1 (Faded) 4/5", 0x3c7280, 0x3c7480 },
    { L"Ibuki Stage Round 1 (Faded) 5/5", 0x3c7480, 0x3c7500 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND2_PALETTES[] =
{
    { L"Ibuki Stage Round 2 1/5", 0x3c4200, 0x3c4400, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 2 2/5", 0x3c4400, 0x3c4600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 2 3/5", 0x3c4600, 0x3c4800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 2 4/5", 0x3c4800, 0x3c4a00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 2 5/5", 0x3c4a00, 0x3c4a80, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND2_FADED_PALETTES[] =
{
    { L"Ibuki Stage Round 2 (Faded) 1/5", 0x3c4a80, 0x3c4c80 },
    { L"Ibuki Stage Round 2 (Faded) 2/5", 0x3c4c80, 0x3c4e80 },
    { L"Ibuki Stage Round 2 (Faded) 3/5", 0x3c4e80, 0x3c5080 },
    { L"Ibuki Stage Round 2 (Faded) 4/5", 0x3c5080, 0x3c5280 },
    { L"Ibuki Stage Round 2 (Faded) 5/5", 0x3c5280, 0x3c5300 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND3_PALETTES[] =
{
    { L"Ibuki Stage Round 3 1/5", 0x3c5300, 0x3c5500, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 3 2/5", 0x3c5500, 0x3c5700, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 3 3/5", 0x3c5700, 0x3c5900, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 3 4/5", 0x3c5900, 0x3c5b00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
    { L"Ibuki Stage Round 3 5/5", 0x3c5b00, 0x3c5b80, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip4 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_IBUKI_ROUND3_FADED_PALETTES[] =
{
    { L"Ibuki Stage Round 3 (Faded) 1/5", 0x3c5b80, 0x3c5d80 },
    { L"Ibuki Stage Round 3 (Faded) 2/5", 0x3c5d80, 0x3c5f80 },
    { L"Ibuki Stage Round 3 (Faded) 3/5", 0x3c5f80, 0x3c6180 },
    { L"Ibuki Stage Round 3 (Faded) 4/5", 0x3c6180, 0x3c6380 },
    { L"Ibuki Stage Round 3 (Faded) 5/5", 0x3c6380, 0x3c6400 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_GILL_PALETTES[] =
{
    { L"Gill Stage 1/7", 0x3b0000, 0x3b0200, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 2/7", 0x3b0200, 0x3b0400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 3/7", 0x3b0400, 0x3b0600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 4/7", 0x3b0600, 0x3b0800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 5/7", 0x3b0800, 0x3b0a00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 6/7", 0x3b0a00, 0x3b0c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Gill Stage 7/7", 0x3b0c00, 0x3b0c80, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_GILL_FADED_PALETTES[] =
{
    { L"Gill Stage (Faded) 1/7", 0x3b0c80, 0x3b0e80 },
    { L"Gill Stage (Faded) 2/7", 0x3b0e80, 0x3b1080 },
    { L"Gill Stage (Faded) 3/7", 0x3b1080, 0x3b1280 },
    { L"Gill Stage (Faded) 4/7", 0x3b1280, 0x3b1480 },
    { L"Gill Stage (Faded) 5/7", 0x3b1480, 0x3b1680 },
    { L"Gill Stage (Faded) 6/7", 0x3b1680, 0x3b1880 },
    { L"Gill Stage (Faded) 7/7", 0x3b1880, 0x3b1900 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ALEX_PALETTES[] =
{
    { L"Alex Stage 1/7", 0x3b3800, 0x3b3a00, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Alex Stage 2/7", 0x3b3a00, 0x3b3c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Alex Stage 3/7", 0x3b3c00, 0x3b3e00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Alex Stage 4/7", 0x3b3e00, 0x3b4000, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Alex Stage 5/7", 0x3b4000, 0x3b4200, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Alex Stage 6/7", 0x3b4200, 0x3b4400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Alex Stage 7/7", 0x3b4400, 0x3b4600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ALEX_FADED_PALETTES[] =
{
    { L"Alex Stage (Faded) 1/7", 0x3b4600, 0x3b4800 },
    { L"Alex Stage (Faded) 2/7", 0x3b4800, 0x3b4a00 },
    { L"Alex Stage (Faded) 3/7", 0x3b4a00, 0x3b4c00 },
    { L"Alex Stage (Faded) 4/7", 0x3b4c00, 0x3b4e00 },
    { L"Alex Stage (Faded) 5/7", 0x3b4e00, 0x3b5000 },
    { L"Alex Stage (Faded) 6/7", 0x3b5000, 0x3b5200 },
    { L"Alex Stage (Faded) 7/7", 0x3b5200, 0x3b5400 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_SEAN_PALETTES[] =
{
    { L"Sean Stage 1/6", 0x3b5400, 0x3b5600, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip5 },
    { L"Sean Stage 2/6", 0x3b5600, 0x3b5800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Sean Stage 3/6", 0x3b5800, 0x3b5a00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Sean Stage 4/6", 0x3b5a00, 0x3b5c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Sean Stage 5/6", 0x3b5c00, 0x3b5e00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Sean Stage 6/6", 0x3b5e00, 0x3b6000, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_SEAN_FADED_PALETTES[] =
{
    { L"Sean Stage (Faded) 1/6", 0x3b6000, 0x3b6200 },
    { L"Sean Stage (Faded) 2/6", 0x3b6200, 0x3b6400 },
    { L"Sean Stage (Faded) 3/6", 0x3b6400, 0x3b6600 },
    { L"Sean Stage (Faded) 4/6", 0x3b6600, 0x3b6800 },
    { L"Sean Stage (Faded) 5/6", 0x3b6800, 0x3b6a00 },
    { L"Sean Stage (Faded) 6/6", 0x3b6a00, 0x3b6c00 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_RYU_PALETTES[] =
{
    { L"Ryu Stage 1/9", 0x3b6c00, 0x3b6e00, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 2/9", 0x3b6e00, 0x3b7000, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 3/9", 0x3b7000, 0x3b7200, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 4/9", 0x3b7200, 0x3b7400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 5/9", 0x3b7400, 0x3b7600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 6/9", 0x3b7600, 0x3b7800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 7/9", 0x3b7800, 0x3b7a00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 8/9", 0x3b7a00, 0x3b7c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Ryu Stage 9/9", 0x3b7c00, 0x3b7d80, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_RYU_FADED_PALETTES[] =
{
    { L"Ryu Stage (Faded) 1/9", 0x3b7d80, 0x3b7f80 },
    { L"Ryu Stage (Faded) 2/9", 0x3b7f80, 0x3b8180 },
    { L"Ryu Stage (Faded) 3/9", 0x3b8180, 0x3b8380 },
    { L"Ryu Stage (Faded) 4/9", 0x3b8380, 0x3b8580 },
    { L"Ryu Stage (Faded) 5/9", 0x3b8580, 0x3b8780 },
    { L"Ryu Stage (Faded) 6/9", 0x3b8780, 0x3b8980 },
    { L"Ryu Stage (Faded) 7/9", 0x3b8980, 0x3b8b80 },
    { L"Ryu Stage (Faded) 8/9", 0x3b8b80, 0x3b8d80 },
    { L"Ryu Stage (Faded) 9/9", 0x3b8d80, 0x3b8f00 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_KEN_PALETTES[] =
{
    { L"Ken Stage 1/7", 0x3b8f00, 0x3b9100, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Ken Stage 2/7", 0x3b9100, 0x3b9300, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Ken Stage 3/7", 0x3b9300, 0x3b9500, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Ken Stage 4/7", 0x3b9500, 0x3b9700, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Ken Stage 5/7", 0x3b9700, 0x3b9900, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Ken Stage 6/7", 0x3b9900, 0x3b9b00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Ken Stage 7/7", 0x3b9b00, 0x3b9c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_KEN_FADED_PALETTES[] =
{
    { L"Ken Stage (Faded) 1/7", 0x3b9c00, 0x3b9e00 },
    { L"Ken Stage (Faded) 2/7", 0x3b9e00, 0x3ba000 },
    { L"Ken Stage (Faded) 3/7", 0x3ba000, 0x3ba200 },
    { L"Ken Stage (Faded) 4/7", 0x3ba200, 0x3ba400 },
    { L"Ken Stage (Faded) 5/7", 0x3ba400, 0x3ba600 },
    { L"Ken Stage (Faded) 6/7", 0x3ba600, 0x3ba800 },
    { L"Ken Stage (Faded) 7/7", 0x3ba800, 0x3ba900 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YUN_PALETTES[] =
{
    { L"Yun Stage 1/6", 0x3ba900, 0x3bab00, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip5 },
    { L"Yun Stage 2/6", 0x3bab00, 0x3bad00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Yun Stage 3/6", 0x3bad00, 0x3baf00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Yun Stage 4/6", 0x3baf00, 0x3bb100, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Yun Stage 5/6", 0x3bb100, 0x3bb300, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Yun Stage 6/6", 0x3bb300, 0x3bb380, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YUN_FADED_PALETTES[] =
{
    { L"Yun Stage (Faded) 1/6", 0x3bb380, 0x3bb580 },
    { L"Yun Stage (Faded) 2/6", 0x3bb580, 0x3bb780 },
    { L"Yun Stage (Faded) 3/6", 0x3bb780, 0x3bb980 },
    { L"Yun Stage (Faded) 4/6", 0x3bb980, 0x3bbb80 },
    { L"Yun Stage (Faded) 5/6", 0x3bbb80, 0x3bbd80 },
    { L"Yun Stage (Faded) 6/6", 0x3bbd80, 0x3bbe00 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YANG_PALETTES[] =
{
    { L"Yang Stage 1/4", 0x3bbe00, 0x3bc000, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip3 },
    { L"Yang Stage 2/4", 0x3bc000, 0x3bc200, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip3 },
    { L"Yang Stage 3/4", 0x3bc200, 0x3bc400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip3 },
    { L"Yang Stage 4/4", 0x3bc400, 0x3bc600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip3 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_YANG_FADED_PALETTES[] =
{
    { L"Yang Stage (Faded) 1/4", 0x3bc600, 0x3bc800 },
    { L"Yang Stage (Faded) 2/4", 0x3bc800, 0x3bca00 },
    { L"Yang Stage (Faded) 3/4", 0x3bca00, 0x3bcc00 },
    { L"Yang Stage (Faded) 4/4", 0x3bcc00, 0x3bce00 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_NIGHT_PALETTES[] =
{
    { L"Dudley Stage Night 1/7", 0x3bce00, 0x3bd000, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Dudley Stage Night 2/7", 0x3bd000, 0x3bd200, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Dudley Stage Night 3/7", 0x3bd200, 0x3bd400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Dudley Stage Night 4/7", 0x3bd400, 0x3bd600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Dudley Stage Night 5/7", 0x3bd600, 0x3bd800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Dudley Stage Night 6/7", 0x3bd800, 0x3bda00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Dudley Stage Night 7/7", 0x3bda00, 0x3bda80, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_NIGHT_FADED_PALETTES[] =
{
    { L"Dudley Stage Night (Faded) 1/7", 0x3bda80, 0x3bdc80 },
    { L"Dudley Stage Night (Faded) 2/7", 0x3bdc80, 0x3bde80 },
    { L"Dudley Stage Night (Faded) 3/7", 0x3bde80, 0x3be080 },
    { L"Dudley Stage Night (Faded) 4/7", 0x3be080, 0x3be280 },
    { L"Dudley Stage Night (Faded) 5/7", 0x3be280, 0x3be480 },
    { L"Dudley Stage Night (Faded) 6/7", 0x3be480, 0x3be680 },
    { L"Dudley Stage Night (Faded) 7/7", 0x3be680, 0x3be700 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_DAY_PALETTES[] =
{
    { L"Dudley Stage Day 1/6", 0x3be700, 0x3be900, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip5 },
    { L"Dudley Stage Day 2/6", 0x3be900, 0x3beb00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Dudley Stage Day 3/6", 0x3beb00, 0x3bed00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Dudley Stage Day 4/6", 0x3bed00, 0x3bef00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Dudley Stage Day 5/6", 0x3bef00, 0x3bf100, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Dudley Stage Day 6/6", 0x3bf100, 0x3bf300, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_DUDLEY_DAY_FADED_PALETTES[] =
{
    { L"Dudley Stage Day (Faded) 1/6", 0x3bf300, 0x3bf500 },
    { L"Dudley Stage Day (Faded) 2/6", 0x3bf500, 0x3bf700 },
    { L"Dudley Stage Day (Faded) 3/6", 0x3bf700, 0x3bf900 },
    { L"Dudley Stage Day (Faded) 4/6", 0x3bf900, 0x3bfb00 },
    { L"Dudley Stage Day (Faded) 5/6", 0x3bfb00, 0x3bfd00 },
    { L"Dudley Stage Day (Faded) 6/6", 0x3bfd00, 0x3bff00 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_NECRO_PALETTES[] =
{
    { L"Necro Stage 1/7", 0x3bff00, 0x3c0100, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip6 },
    { L"Necro Stage 2/7", 0x3c0100, 0x3c0300, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Necro Stage 3/7", 0x3c0300, 0x3c0500, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Necro Stage 4/7", 0x3c0500, 0x3c0700, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Necro Stage 5/7", 0x3c0700, 0x3c0900, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Necro Stage 6/7", 0x3c0900, 0x3c0b00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
    { L"Necro Stage 7/7", 0x3c0b00, 0x3c0b80, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip6 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_NECRO_FADED_PALETTES[] =
{
    { L"Necro Stage (Faded) 1/7", 0x3c0b80, 0x3c0d80 },
    { L"Necro Stage (Faded) 2/7", 0x3c0d80, 0x3c0f80 },
    { L"Necro Stage (Faded) 3/7", 0x3c0f80, 0x3c1180 },
    { L"Necro Stage (Faded) 4/7", 0x3c1180, 0x3c1380 },
    { L"Necro Stage (Faded) 5/7", 0x3c1380, 0x3c1580 },
    { L"Necro Stage (Faded) 6/7", 0x3c1580, 0x3c1780 },
    { L"Necro Stage (Faded) 7/7", 0x3c1780, 0x3c1800 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_HUGO_PALETTES[] =
{
    { L"Hugo Stage 1/9", 0x3c1e00, 0x3c2000, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 2/9", 0x3c2000, 0x3c2200, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 3/9", 0x3c2200, 0x3c2400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 4/9", 0x3c2400, 0x3c2600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 5/9", 0x3c2600, 0x3c2800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 6/9", 0x3c2800, 0x3c2a00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 7/9", 0x3c2a00, 0x3c2c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 8/9", 0x3c2c00, 0x3c2e00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
    { L"Hugo Stage 9/9", 0x3c2e00, 0x3c3000, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip8 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_HUGO_FADED_PALETTES[] =
{
    { L"Hugo Stage (Faded) 1/9", 0x3c3000, 0x3c3200 },
    { L"Hugo Stage (Faded) 2/9", 0x3c3200, 0x3c3400 },
    { L"Hugo Stage (Faded) 3/9", 0x3c3400, 0x3c3600 },
    { L"Hugo Stage (Faded) 4/9", 0x3c3600, 0x3c3800 },
    { L"Hugo Stage (Faded) 5/9", 0x3c3800, 0x3c3a00 },
    { L"Hugo Stage (Faded) 6/9", 0x3c3a00, 0x3c3c00 },
    { L"Hugo Stage (Faded) 7/9", 0x3c3c00, 0x3c3e00 },
    { L"Hugo Stage (Faded) 8/9", 0x3c3e00, 0x3c4000 },
    { L"Hugo Stage (Faded) 9/9", 0x3c4000, 0x3c4200 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND1_PALETTES[] =
{
    { L"Elena Stage 1/6", 0x3c7500, 0x3c7700, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip5 },
    { L"Elena Stage 2/6", 0x3c7700, 0x3c7900, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Elena Stage 3/6", 0x3c7900, 0x3c7b00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Elena Stage 4/6", 0x3c7b00, 0x3c7d00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Elena Stage 5/6", 0x3c7d00, 0x3c7f00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Elena Stage 6/6", 0x3c7f00, 0x3c8080, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND1_FADED_PALETTES[] =
{
    { L"Elena Stage (Faded) 1/6", 0x3c8080, 0x3c8280 },
    { L"Elena Stage (Faded) 2/6", 0x3c8280, 0x3c8480 },
    { L"Elena Stage (Faded) 3/6", 0x3c8480, 0x3c8680 },
    { L"Elena Stage (Faded) 4/6", 0x3c8680, 0x3c8880 },
    { L"Elena Stage (Faded) 5/6", 0x3c8880, 0x3c8a80 },
    { L"Elena Stage (Faded) 6/6", 0x3c8a80, 0x3c8c00 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND2_PALETTES[] =
{
    { L"Elena Stage Round 2 1/8", 0x3c8c00, 0x3c8e00, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip7 },
    { L"Elena Stage Round 2 2/8", 0x3c8e00, 0x3c9000, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Elena Stage Round 2 3/8", 0x3c9000, 0x3c9200, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Elena Stage Round 2 4/8", 0x3c9200, 0x3c9400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Elena Stage Round 2 5/8", 0x3c9400, 0x3c9600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Elena Stage Round 2 6/8", 0x3c9600, 0x3c9800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Elena Stage Round 2 7/8", 0x3c9800, 0x3c9a00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip7 },
    { L"Elena Stage Round 2 8/8", 0x3c9a00, 0x3c9c00, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip7 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ELENA_ROUND2_FADED_PALETTES[] =
{
    { L"Elena Stage Round 2 (Faded) 1/8", 0x3c9c00, 0x3c9e00 },
    { L"Elena Stage Round 2 (Faded) 2/8", 0x3c9e00, 0x3ca000 },
    { L"Elena Stage Round 2 (Faded) 3/8", 0x3ca000, 0x3ca200 },
    { L"Elena Stage Round 2 (Faded) 4/8", 0x3ca200, 0x3ca400 },
    { L"Elena Stage Round 2 (Faded) 5/8", 0x3ca400, 0x3ca600 },
    { L"Elena Stage Round 2 (Faded) 6/8", 0x3ca600, 0x3ca800 },
    { L"Elena Stage Round 2 (Faded) 7/8", 0x3ca800, 0x3caa00 },
    { L"Elena Stage Round 2 (Faded) 8/8", 0x3caa00, 0x3cac00 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ORO_PALETTES[] =
{
    { L"Oro Stage 1/6", 0x3cac00, 0x3cae00, indexSF3NGSprites_Bonus, -1, &pairFullyLinkedNode, &secondaryGreyTintEffects_Skip5 },
    { L"Oro Stage 2/6", 0x3cae00, 0x3cb000, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Oro Stage 3/6", 0x3cb000, 0x3cb200, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Oro Stage 4/6", 0x3cb200, 0x3cb400, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Oro Stage 5/6", 0x3cb400, 0x3cb600, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
    { L"Oro Stage 6/6", 0x3cb600, 0x3cb800, indexSF3NGSprites_Bonus, -1, nullptr, &secondaryGreyTintEffects_Skip5 },
};

const sGame_PaletteDataset SFIII1_A_STAGE_ORO_FADED_PALETTES[] =
{
    { L"Oro Stage (Faded) 1/6", 0x3cb800, 0x3cba00 },
    { L"Oro Stage (Faded) 2/6", 0x3cba00, 0x3cbc00 },
    { L"Oro Stage (Faded) 3/6", 0x3cbc00, 0x3cbe00 },
    { L"Oro Stage (Faded) 4/6", 0x3cbe00, 0x3cc000 },
    { L"Oro Stage (Faded) 5/6", 0x3cc000, 0x3cc200 },
    { L"Oro Stage (Faded) 6/6", 0x3cc200, 0x3cc400 },
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
    { L"P1 Hitsparks/Other", 0x3d4280, 0x3d4300 },
    { L"P2 Hitsparks/Other", 0x3d4300, 0x3d4380 },
    { L"Super Startup/Impact/Dust/Whatever", 0x3d4000, 0x3d4200 },
    { L"Universal Zap Skeleton", 0x3d4380, 0x3d4400 },

    { L"Parry Flash", 0x3FF47a, 0x3FF47E },
    { L"Parry Flash (Player Shadow)", 0x3FF7Fa, 0x3FF7FE },
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

    { L"SF3 Logo - Lightning Effect", 0x3f6200, 0x3f6280 },
    { L"SF3 Logo - III", 0x3f6280, 0x3f6300, indexSF3NGSprites_Bonus, 0x12, &pairNextAndNext },
    { L"SF3 Logo - Street Fighter", 0x3f6180, 0x3f6200, indexSF3NGSprites_Bonus, 0x14 },
    { L"SF3 Logo - New Generation", 0x3f6300, 0x3f6380, indexSF3NGSprites_Bonus, 0x13 },
};

const sDescTreeNode SFIII1_A_BONUS_COLLECTION[] =
{
    { L"Intro Portraits",   DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_INTROPORTS_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_INTROPORTS_PALETTES) },
    { L"Logo",              DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_LOGO_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_LOGO_PALETTES) },
    { L"Bonus",             DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_PALETTES) },
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
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_COLLECTION, ARRAYSIZE(SFIII1_A_BONUS_COLLECTION) },
};

constexpr auto SFIII1_A_50_NUMUNIT = ARRAYSIZE(SFIII1_A_50_UNITS);
constexpr auto SFIII1_A_50_EXTRALOC = SFIII1_A_50_NUMUNIT;

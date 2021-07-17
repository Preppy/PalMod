#pragma once

const UINT16 SFIII1_A_IMGIDS_USED[] =
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
    indexSFNGSprites_Bonus,
};

const sGame_PaletteDataset SFIII1_A_ALEX_LP_PALETTES[] =
{
    { L"Alex LP", 0x3d0600, 0x3d0680, index3SSprites_Alex, 0x00, &pairHandledInCode },
};

const sGame_PaletteDataset SFIII1_A_ALEX_MP_PALETTES[] =
{
    { L"Alex MP", 0x3d0680, 0x3d0700, index3SSprites_Alex, 0x00, &pairHandledInCode },
};

const sGame_PaletteDataset SFIII1_A_ALEX_HP_PALETTES[] =
{
    { L"Alex HP", 0x3d0700, 0x3d0780, index3SSprites_Alex, 0x00, &pairHandledInCode },
};

const sGame_PaletteDataset SFIII1_A_ALEX_LK_PALETTES[] =
{
    { L"Alex LK", 0x3d0780, 0x3d0800, index3SSprites_Alex, 0x00, &pairHandledInCode },
};

const sGame_PaletteDataset SFIII1_A_ALEX_MK_PALETTES[] =
{
    { L"Alex MK", 0x3d0800, 0x3d0880, index3SSprites_Alex, 0x00, &pairHandledInCode },
};

const sGame_PaletteDataset SFIII1_A_ALEX_HK_PALETTES[] =
{
    { L"Alex HK", 0x3d0880, 0x3d0900, index3SSprites_Alex, 0x00, &pairHandledInCode },
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
};

const sGame_PaletteDataset SFIII1_A_RYU_MP_PALETTES[] =
{
    { L"Ryu MP", 0x3d0980, 0x3d0a00, index3SSprites_Ryu },
};

const sGame_PaletteDataset SFIII1_A_RYU_HP_PALETTES[] =
{
   { L"Ryu HP", 0x3d0a00, 0x3d0a80, index3SSprites_Ryu },
};

const sGame_PaletteDataset SFIII1_A_RYU_LK_PALETTES[] =
{
    { L"Ryu LK", 0x3d0a80, 0x3d0b00, index3SSprites_Ryu },
};

const sGame_PaletteDataset SFIII1_A_RYU_MK_PALETTES[] =
{
    { L"Ryu MK", 0x3d0b00, 0x3d0b80, index3SSprites_Ryu },
};

const sGame_PaletteDataset SFIII1_A_RYU_HK_PALETTES[] =
{
    { L"Ryu HK", 0x3d0b80, 0x3d0c00, index3SSprites_Ryu },
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
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_MP_PALETTES[] =
{
    { L"Yun MP", 0x3d0c80, 0x3d0d00, index3SSprites_Yun },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_HP_PALETTES[] =
{
    { L"Yun HP", 0x3d0d00, 0x3d0d80, index3SSprites_Yun },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_LK_PALETTES[] =
{
    { L"Yang LK", 0x3d2100, 0x3d2180, index3SSprites_Yang },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_MK_PALETTES[] =
{
    { L"Yang MK", 0x3d2180, 0x3d2200, index3SSprites_Yang },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_HK_PALETTES[] =
{
    { L"Yang HK", 0x3d2200, 0x3d2280, index3SSprites_Yang },
};

const sGame_PaletteDataset SFIII1_A_YUNYANG_Support_PALETTES[] =
{
    { L"Yun Freeze", 0x3d4700, 0x3d4780, index3SSprites_Yun },
    { L"Yun Burning", 0x3d4e00, 0x3d4e80, index3SSprites_Yun },
    { L"Yang Freeze", 0x3d4a80, 0x3d4b00, index3SSprites_Yang },
    { L"Yang Burning", 0x3d5180, 0x3d5200, index3SSprites_Yang },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_LP_PALETTES[] =
{
    { L"Dudley LP", 0x3d0f00, 0x3d0f80, index3SSprites_Dudley },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_MP_PALETTES[] =
{
    { L"Dudley MP", 0x3d0f80, 0x3d1000, index3SSprites_Dudley },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_HP_PALETTES[] =
{
    { L"Dudley HP", 0x3d1000, 0x3d1080, index3SSprites_Dudley },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_LK_PALETTES[] =
{
    { L"Dudley LK", 0x3d1080, 0x3d1100, index3SSprites_Dudley },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_MK_PALETTES[] =
{
    { L"Dudley MK", 0x3d1100, 0x3d1180, index3SSprites_Dudley },
};

const sGame_PaletteDataset SFIII1_A_DUDLEY_HK_PALETTES[] =
{
    { L"Dudley HK", 0x3d1180, 0x3d1200, index3SSprites_Dudley },
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
};

const sGame_PaletteDataset SFIII1_A_NECRO_MP_PALETTES[] =
{
    { L"Necro MP", 0x3d1280, 0x3d1300, index3SSprites_Necro },
};

const sGame_PaletteDataset SFIII1_A_NECRO_HP_PALETTES[] =
{
    { L"Necro HP", 0x3d1300, 0x3d1380, index3SSprites_Necro },
};

const sGame_PaletteDataset SFIII1_A_NECRO_LK_PALETTES[] =
{
    { L"Necro LK", 0x3d1380, 0x3d1400, index3SSprites_Necro },
};

const sGame_PaletteDataset SFIII1_A_NECRO_MK_PALETTES[] =
{
    { L"Necro MK", 0x3d1400, 0x3d1480, index3SSprites_Necro },
};

const sGame_PaletteDataset SFIII1_A_NECRO_HK_PALETTES[] =
{
    { L"Necro HK", 0x3d1480, 0x3d1500, index3SSprites_Necro },
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
};

const sGame_PaletteDataset SFIII1_A_HUGO_MP_PALETTES[] =
{
    { L"Beta Hugo MP", 0x3d1580, 0x3d1600, index3SSprites_Hugo, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_HP_PALETTES[] =
{
    { L"Beta Hugo HP", 0x3d1600, 0x3d1680, index3SSprites_Hugo, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_LK_PALETTES[] =
{
    { L"Beta Hugo LK", 0x3d1680, 0x3d1700, index3SSprites_Hugo, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_MK_PALETTES[] =
{
    { L"Beta Hugo MK", 0x3d1700, 0x3d1780, index3SSprites_Hugo, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_HUGO_HK_PALETTES[] =
{
    { L"Beta Hugo HK", 0x3d1780, 0x3d1800, index3SSprites_Hugo, 0x03 },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_LP_PALETTES[] =
{
    { L"Ibuki LP", 0x3d1800, 0x3d1880, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_MP_PALETTES[] =
{
    { L"Ibuki MP", 0x3d1880, 0x3d1900, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_HP_PALETTES[] =
{
    { L"Ibuki HP", 0x3d1900, 0x3d1980, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_LK_PALETTES[] =
{
    { L"Ibuki LK", 0x3d1980, 0x3d1a00, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_MK_PALETTES[] =
{
    { L"Ibuki MK", 0x3d1a00, 0x3d1a80, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_HK_PALETTES[] =
{
    { L"Ibuki HK", 0x3d1a80, 0x3d1b00, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_IBUKI_Support_PALETTES[] =
{
    { L"Ibuki Freeze", 0x3d4900, 0x3d4980, index3SSprites_Ibuki },
    { L"Ibuki Burning", 0x3d5000, 0x3d5080, index3SSprites_Ibuki },
};

const sGame_PaletteDataset SFIII1_A_ELENA_LP_PALETTES[] =
{
    { L"Elena LP", 0x3d1b00, 0x3d1b80, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_MP_PALETTES[] =
{
    { L"Elena MP", 0x3d1b80, 0x3d1c00, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_HP_PALETTES[] =
{
    { L"Elena HP", 0x3d1c00, 0x3d1c80, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_LK_PALETTES[] =
{
    { L"Elena LK", 0x3d1c80, 0x3d1d00, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_MK_PALETTES[] =
{
    { L"Elena MK", 0x3d1d00, 0x3d1d80, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_HK_PALETTES[] =
{
    { L"Elena HK", 0x3d1d80, 0x3d1e00, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ELENA_Support_PALETTES[] =
{
    { L"Elena Freeze", 0x3d4980, 0x3d4a00, index3SSprites_Elena, 0x05 },
    { L"Elena Burning", 0x3d5080, 0x3d5100, index3SSprites_Elena, 0x05 },
};

const sGame_PaletteDataset SFIII1_A_ORO_LP_PALETTES[] =
{
    { L"Oro LP", 0x3d1e00, 0x3d1e80, index3SSprites_Oro },
};

const sGame_PaletteDataset SFIII1_A_ORO_MP_PALETTES[] =
{
    { L"Oro MP", 0x3d1e80, 0x3d1f00, index3SSprites_Oro },
};

const sGame_PaletteDataset SFIII1_A_ORO_HP_PALETTES[] =
{
    { L"Oro HP", 0x3d1f00, 0x3d1f80, index3SSprites_Oro },
};

const sGame_PaletteDataset SFIII1_A_ORO_LK_PALETTES[] =
{
    { L"Oro LK", 0x3d1f80, 0x3d2000, index3SSprites_Oro },
};

const sGame_PaletteDataset SFIII1_A_ORO_MK_PALETTES[] =
{
    { L"Oro MK", 0x3d2000, 0x3d2080, index3SSprites_Oro },
};

const sGame_PaletteDataset SFIII1_A_ORO_HK_PALETTES[] =
{
    { L"Oro HK", 0x3d2080, 0x3d2100, index3SSprites_Oro },
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
};

const sGame_PaletteDataset SFIII1_A_KEN_MP_PALETTES[] =
{
    { L"Ken MP", 0x3d2480, 0x3d2500, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII1_A_KEN_HP_PALETTES[] =
{
    { L"Ken HP", 0x3d2500, 0x3d2580, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII1_A_KEN_LK_PALETTES[] =
{
    { L"Ken LK", 0x3d2580, 0x3d2600, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII1_A_KEN_MK_PALETTES[] =
{
    { L"Ken MK", 0x3d2600, 0x3d2680, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII1_A_KEN_HK_PALETTES[] =
{
    { L"Ken HK", 0x3d2680, 0x3d2700, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII1_A_KEN_Support_PALETTES[] =
{
    { L"Ken Freeze", 0x3d4b00, 0x3d4b80, index3SSprites_Ken },
    { L"Ken Burning", 0x3d5200, 0x3d5280, index3SSprites_Ken },
};

const sGame_PaletteDataset SFIII1_A_SEAN_LP_PALETTES[] =
{
    { L"Sean LP", 0x3d2700, 0x3d2780, index3SSprites_Sean },
};

const sGame_PaletteDataset SFIII1_A_SEAN_MP_PALETTES[] =
{
    { L"Sean MP", 0x3d2780, 0x3d2800, index3SSprites_Sean },
};

const sGame_PaletteDataset SFIII1_A_SEAN_HP_PALETTES[] =
{
    { L"Sean HP", 0x3d2800, 0x3d2880, index3SSprites_Sean },
};

const sGame_PaletteDataset SFIII1_A_SEAN_LK_PALETTES[] =
{
    { L"Sean LK", 0x3d2880, 0x3d2900, index3SSprites_Sean },
};

const sGame_PaletteDataset SFIII1_A_SEAN_MK_PALETTES[] =
{
    { L"Sean MK", 0x3d2900, 0x3d2980, index3SSprites_Sean },
};

const sGame_PaletteDataset SFIII1_A_SEAN_HK_PALETTES[] =
{
    { L"Sean HK", 0x3d2980, 0x3d2a00, index3SSprites_Sean },
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
};

const sGame_PaletteDataset SFIII1_A_GILL_MP_PALETTES[] =
{
    { L"Gill MP Facing Left", 0x3d0100, 0x3d0180, index3SSprites_Gill, 0x01 },
    { L"Gill MP Facing Right", 0x3d0180, 0x3d0200, index3SSprites_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII1_A_GILL_HP_PALETTES[] =
{
    { L"Gill HP Facing Left", 0x3d0200, 0x3d0280, index3SSprites_Gill, 0x01 },
    { L"Gill HP Facing Right", 0x3d0280, 0x3d0300, index3SSprites_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII1_A_GILL_LK_PALETTES[] =
{
    { L"Gill LK Facing Left", 0x3d0300, 0x3d0380, index3SSprites_Gill, 0x01 },
    { L"Gill LK Facing Right", 0x3d0380, 0x3d0400, index3SSprites_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII1_A_GILL_MK_PALETTES[] =
{
    { L"Gill MK Facing Left", 0x3d0400, 0x3d0480, index3SSprites_Gill, 0x01 },
    { L"Gill MK Facing Right", 0x3d0480, 0x3d0500, index3SSprites_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII1_A_GILL_HK_PALETTES[] =
{
    { L"Gill HK Facing Left", 0x3d0500, 0x3d0580, index3SSprites_Gill, 0x01 },
    { L"Gill HK Facing Right", 0x3d0580, 0x3d0600, index3SSprites_Gill, 0x0 },
};

const sGame_PaletteDataset SFIII1_A_GILL_Support_PALETTES[] =
{
    { L"Gill Freeze Right", 0x3d4580, 0x3d4600, index3SSprites_Gill, 0x01 },
    { L"Gill Freeze Left", 0x3d4500, 0x3d4580, index3SSprites_Gill, 0x00 },
    { L"Gill Burning Right", 0x3d4c80, 0x3d4d00, index3SSprites_Gill, 0x01 },
    { L"Gill Burning Left", 0x3d4c00, 0x3d4c80, index3SSprites_Gill, 0x00 },
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
};

const sGame_PaletteDataset SFIII1_A_BONUS_INTROPORTS_PALETTES[] =
{
    { L"Yang Intro Panel",  0x3f5a00, 0x3f5a20, indexSFNGSprites_Bonus, 0x0f },
    { L"Elena Intro Panel", 0x3f5ac0, 0x3f5ae0, indexSFNGSprites_Bonus, 0x06 },
    { L"Yun Intro Panel",   0x3f5a40, 0x3f5a60, indexSFNGSprites_Bonus, 0x10 },
    { L"Ken Intro Panel",   0x3f5ae0, 0x3f5b00, indexSFNGSprites_Bonus, 0x09 },
    { L"Sean Intro Panel",  0x3f5aa0, 0x3f5ac0, indexSFNGSprites_Bonus, 0x0d },
    { L"Ibuki Intro Panel", 0x3f5a60, 0x3f5a80, indexSFNGSprites_Bonus, 0x08 },
    { L"Oro Intro Panel",   0x3f5b40, 0x3f5b80, indexSFNGSprites_Bonus, 0x0b },
    { L"Necro Intro Panel", 0x3f5b20, 0x3f5b40, indexSFNGSprites_Bonus, 0x0a },
    { L"Dudley Intro Panel", 0x3f5b00, 0x3f5b20, indexSFNGSprites_Bonus, 0x05 },
    { L"Alex Intro Panel",  0x3f5a20, 0x3f5a40, indexSFNGSprites_Bonus, 0x01 },
    { L"Ryu Intro Panel",   0x3f5a80, 0x3f5aa0, indexSFNGSprites_Bonus, 0x0c },
    { L"Gill Intro Panel",  0x3f5b80, 0x3f5c00, indexSFNGSprites_Bonus, 0x07 },
    { L"Alex Intro Portrait (Facing Back)",             0x3f6000, 0x3f6080, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 1/8)", 0x3f5c00, 0x3f5c80, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 2/8)", 0x3f5c80, 0x3f5d00, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 3/8)", 0x3f5d00, 0x3f5d80, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 4/8)", 0x3f5d80, 0x3f5e00, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 5/8)", 0x3f5e00, 0x3f5e80, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 6/8)", 0x3f5e80, 0x3f5f00, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 7/8)", 0x3f5f00, 0x3f5f80, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Facing Back -Tinted 8/8)", 0x3f5f80, 0x3f6000, indexSFNGSprites_Bonus, 0x02 },
    { L"Alex Intro Portrait (Side Facing)", 0x3f6480, 0x3f6500, indexSFNGSprites_Bonus, 0x03 },
    { L"Alex Intro Fist", 0x3f6400, 0x3f6480, indexSFNGSprites_Bonus, 0x00 },
    { L"Alex Intro/Titlescreen Portrait",           0x3f6500, 0x3f6580, indexSFNGSprites_Bonus, 0x04 },
    { L"Alex Intro/Titlescreen Portrait (Faded)",   0x3f6080, 0x3f6100, indexSFNGSprites_Bonus, 0x04 },
    { L"Intro Text", 0x3f6100, 0x3f6120, indexSFNGSprites_Bonus, 0x0e },
};

const sGame_PaletteDataset SFIII1_A_BONUS_PALETTES[] =
{
    { L"P1 Hitsparks/Other", 0x3d4280, 0x3d4300 },
    { L"P2 Hitsparks/Other", 0x3d4300, 0x3d4380 },
    { L"Super Startup/Impact/Dust/Whatever", 0x3d4000, 0x3d4200 },
    { L"Universal Zap Skeleton", 0x3d4380, 0x3d4400 },
};

const sDescTreeNode SFIII1_A_BONUS_COLLECTION[] =
{
    { L"Intro Portraits",   DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_INTROPORTS_PALETTES, ARRAYSIZE(SFIII1_A_BONUS_INTROPORTS_PALETTES) },
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
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFIII1_A_BONUS_COLLECTION, ARRAYSIZE(SFIII1_A_BONUS_COLLECTION) },
};

constexpr auto SFIII1_A_50_NUMUNIT = ARRAYSIZE(SFIII1_A_50_UNITS);
#define SFIII1_A_50_EXTRALOC SFIII1_A_50_NUMUNIT

const stExtraDef SFIII1_A_EXTRA[] = 
{
    //Start
    { UNIT_START_VALUE },

    //Extra
    { INVALID_UNIT_VALUE }
};

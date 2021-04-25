#pragma once

// This header contains the hand-crafted portrait palettes first and then auto-generated character palettes.

#pragma region hand-crafted palettes

const UINT16 RBFF2_A_IMG_UNITS[] =
{
    indexRBFFSSprites_Andy,         // 0x133
    indexRBFFSSprites_Billy,        // 0x134
    indexRBFFSSprites_BlueMary,     // 0x135
    indexRBFFSSprites_Bob,          // 0x136
    indexRBFFSSprites_Cheng,        // 0x137
    indexRBFFSSprites_Chonrei,      // 0x138
    indexRBFFSSprites_Chonshu,      // 0x139
    indexRBFFSSprites_DuckKing,     // 0x13a
    indexRBFFSSprites_Franco,       // 0x13b
    indexRBFFSSprites_Geese,        // 0x13c
    indexRBFFSSprites_Hon,          // 0x13d

    indexRBFFSSprites_Kim,          // 0x13f
    indexRBFFSSprites_Krauser,      // 0x140
    indexRBFFSSprites_Laurence,     // 0x141
    indexRBFFSSprites_Mai,          // 0x142
    indexRBFFSSprites_Sokaku,       // 0x143

    indexRBFFSSprites_Tung,         // 0x145
    indexRBFFSSprites_Yamazaki,     // 0x146

    indexRBFF2Sprites_Alfred,       // 0x1f2
    indexRBFF2Sprites_Rick,         // 0x1f3
    indexRBFF2Sprites_Xiangfei,     // 0x1f4

    indexRBFF2Sprites_Terry,        // 0x205

    indexRBFF2Sprites_Andy,         // 0x276
    indexRBFF2Sprites_Billy,        // 0x277
    indexRBFF2Sprites_BlueMary,     // 0x278
    indexRBFF2Sprites_Bob,          // 0x279
    indexRBFF2Sprites_Cheng,        // 0x27A
    indexRBFF2Sprites_Chonrei,      // 0x27B
    indexRBFF2Sprites_Chonshu,      // 0x27C
    indexRBFF2Sprites_DuckKing,     // 0x27D
    indexRBFF2Sprites_Franco,       // 0x27E
    indexRBFF2Sprites_Geese,        // 0x27F
    indexRBFF2Sprites_HonFu,        // 0x280
    indexRBFF2Sprites_Joe,          // 0x281
    indexRBFF2Sprites_Kim,          // 0x282
    indexRBFF2Sprites_Krauser,      // 0x283
    indexRBFF2Sprites_Laurence,     // 0x284
    indexRBFF2Sprites_Mai,          // 0x285
    indexRBFF2Sprites_Sokaku,       // 0x286
    indexRBFF2Sprites_Tung,         // 0x287
    indexRBFF2Sprites_Yamazaki,     // 0x288
};

const sGame_PaletteDataset RBFF2_A_TERRY_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6000, 0xd6020 },
    { L"Select Portrait", 0xd6600, 0xd6620 },
    { L"Ending Portrait", 0xfa200, 0xfa220 },
    { L"Ending Extra Portrait", 0xfa800, 0xfa820 },
};

const sGame_PaletteDataset RBFF2_A_TERRY_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6020, 0xd6040 },
    { L"Select Portrait", 0xd6620, 0xd6640 },
    { L"Ending Portrait", 0xfa220, 0xfa240 },
    { L"Ending Extra Portrait", 0xfa820, 0xfa840 },
};

const sGame_PaletteDataset RBFF2_A_ANDY_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6040, 0xd6060 },
    { L"Select Portrait", 0xd6640, 0xd6660 },
    { L"Ending Portrait", 0xfa240, 0xfa260 },
    { L"Ending Extra Portrait", 0xfa840, 0xfa860 },
};

const sGame_PaletteDataset RBFF2_A_ANDY_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6060, 0xd6080 },
    { L"Select Portrait", 0xd6660, 0xd6680 },
    { L"Ending Portrait", 0xfa260, 0xfa280 },
    { L"Ending Extra Portrait", 0xfa860, 0xfa880 },
};

const sGame_PaletteDataset RBFF2_A_JOE_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6080, 0xd60a0 },
    { L"Select Portrait", 0xd6680, 0xd66a0 },
    { L"Ending Portrait", 0xfa280, 0xfa2a0 },
    { L"Ending Extra Portrait", 0xfa880, 0xfa8a0 },
};

const sGame_PaletteDataset RBFF2_A_JOE_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd60a0, 0xd60c0 },
    { L"Select Portrait", 0xd66a0, 0xd66c0 },
    { L"Ending Portrait", 0xfa2a0, 0xfa2c0 },
    { L"Ending Extra Portrait", 0xfa8a0, 0xfa8c0 },
};

const sGame_PaletteDataset RBFF2_A_MAI_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd60c0, 0xd60e0 },
    { L"Select Portrait", 0xd66c0, 0xd66e0 },
    { L"Ending Portrait", 0xfa2c0, 0xfa2e0 },
    { L"Ending Extra Portrait", 0xfa8c0, 0xfa8e0 },
};

const sGame_PaletteDataset RBFF2_A_MAI_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd60e0, 0xd6100 },
    { L"Select Portrait", 0xd66e0, 0xd6700 },
    { L"Ending Portrait", 0xfa2e0, 0xfa300 },
    { L"Ending Extra Portrait", 0xfa8e0, 0xfa900 },
};

const sGame_PaletteDataset RBFF2_A_GEESE_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6100, 0xd6120 },
    { L"Select Portrait", 0xd6700, 0xd6720 },
    { L"Ending Portrait", 0xfa300, 0xfa320 },
    { L"Ending Extra Portrait", 0xfa900, 0xfa920 },
};

const sGame_PaletteDataset RBFF2_A_GEESE_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6120, 0xd6140 },
    { L"Select Portrait", 0xd6720, 0xd6740 },
    { L"Ending Portrait", 0xfa320, 0xfa340 },
    { L"Ending Extra Portrait", 0xfa920, 0xfa940 },
};

const sGame_PaletteDataset RBFF2_A_SOKAKU_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6140, 0xd6160 },
    { L"Select Portrait", 0xd6740, 0xd6760 },
    { L"Ending Portrait", 0xfa340, 0xfa360 },
    { L"Ending Extra Portrait", 0xfa940, 0xfa960 },
};

const sGame_PaletteDataset RBFF2_A_SOKAKU_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6160, 0xd6180 },
    { L"Select Portrait", 0xd6760, 0xd6780 },
    { L"Ending Portrait", 0xfa360, 0xfa380 },
    { L"Ending Extra Portrait", 0xfa960, 0xfa980 },
};

const sGame_PaletteDataset RBFF2_A_BOB_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6180, 0xd61a0 },
    { L"Select Portrait", 0xd6780, 0xd67a0 },
    { L"Ending Portrait", 0xfa380, 0xfa3a0 },
    { L"Ending Extra Portrait", 0xfa980, 0xfa9a0 },
};

const sGame_PaletteDataset RBFF2_A_BOB_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd61a0, 0xd61c0 },
    { L"Select Portrait", 0xd67a0, 0xd67c0 },
    { L"Ending Portrait", 0xfa3a0, 0xfa3c0 },
    { L"Ending Extra Portrait", 0xfa9a0, 0xfa9c0 },
};

const sGame_PaletteDataset RBFF2_A_HONFU_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd61c0, 0xd61e0 },
    { L"Select Portrait", 0xd67c0, 0xd67e0 },
    { L"Ending Portrait", 0xfa3c0, 0xfa3e0 },
    { L"Ending Extra Portrait", 0xfa9c0, 0xfa9e0 },
};

const sGame_PaletteDataset RBFF2_A_HONFU_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd61e0, 0xd6200 },
    { L"Select Portrait", 0xd67e0, 0xd6800 },
    { L"Ending Portrait", 0xfa3e0, 0xfa400 },
    { L"Ending Extra Portrait", 0xfa9e0, 0xfaa00 },
};

const sGame_PaletteDataset RBFF2_A_BLUEMARY_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6200, 0xd6220 },
    { L"Select Portrait", 0xd6800, 0xd6820 },
    { L"Ending Portrait", 0xfa400, 0xfa420 },
    { L"Ending Extra Portrait", 0xfaa00, 0xfaa20 },
};

const sGame_PaletteDataset RBFF2_A_BLUEMARY_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6220, 0xd6240 },
    { L"Select Portrait", 0xd6820, 0xd6840 },
    { L"Ending Portrait", 0xfa420, 0xfa440 },
    { L"Ending Extra Portrait", 0xfaa20, 0xfaa40 },
};

const sGame_PaletteDataset RBFF2_A_FRANCO_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6240, 0xd6260 },
    { L"Select Portrait", 0xd6840, 0xd6860 },
    { L"Ending Portrait", 0xfa440, 0xfa460 },
    { L"Ending Extra Portrait", 0xfaa40, 0xfaa60 },
};

const sGame_PaletteDataset RBFF2_A_FRANCO_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6260, 0xd6280 },
    { L"Select Portrait", 0xd6860, 0xd6880 },
    { L"Ending Portrait", 0xfa460, 0xfa480 },
    { L"Ending Extra Portrait", 0xfaa60, 0xfaa80 },
};

const sGame_PaletteDataset RBFF2_A_YAMAZAKI_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6280, 0xd62a0 },
    { L"Select Portrait", 0xd6880, 0xd68a0 },
    { L"Ending Portrait", 0xfa480, 0xfa4a0 },
    { L"Ending Extra Portrait", 0xfaa80, 0xfaaa0 },
};

const sGame_PaletteDataset RBFF2_A_YAMAZAKI_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd62a0, 0xd62c0 },
    { L"Select Portrait", 0xd68a0, 0xd68c0 },
    { L"Ending Portrait", 0xfa4a0, 0xfa4c0 },
    { L"Ending Extra Portrait", 0xfaaa0, 0xfaac0 },
};

const sGame_PaletteDataset RBFF2_A_CHONREI_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6300, 0xd6320 },
    { L"Select Portrait", 0xd6900, 0xd6920 },
    { L"Ending Portrait", 0xfa500, 0xfa520 },
    { L"Ending Extra Portrait", 0xfab00, 0xfab20 },
};

const sGame_PaletteDataset RBFF2_A_CHONREI_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6320, 0xd6340 },
    { L"Select Portrait", 0xd6920, 0xd6940 },
    { L"Ending Portrait", 0xfa520, 0xfa540 },
    { L"Ending Extra Portrait", 0xfab20, 0xfab40 },
};

const sGame_PaletteDataset RBFF2_A_CHONSHU_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd62c0, 0xd62e0 },
    { L"Select Portrait", 0xd68c0, 0xd68e0 },
    { L"Ending Portrait", 0xfa4c0, 0xfa4e0 },
    { L"Ending Extra Portrait", 0xfaac0, 0xfaae0 },
};

const sGame_PaletteDataset RBFF2_A_CHONSHU_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd62e0, 0xd6300 },
    { L"Select Portrait", 0xd68e0, 0xd6900 },
    { L"Ending Portrait", 0xfa4e0, 0xfa500 },
    { L"Ending Extra Portrait", 0xfaae0, 0xfab00 },
};

const sGame_PaletteDataset RBFF2_A_DUCKKING_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6340, 0xd6360 },
    { L"Select Portrait", 0xd6940, 0xd6960 },
    { L"Ending Portrait", 0xfa540, 0xfa560 },
    { L"Ending Extra Portrait", 0xfab40, 0xfab60 },
};

const sGame_PaletteDataset RBFF2_A_DUCKKING_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6360, 0xd6380 },
    { L"Select Portrait", 0xd6960, 0xd6980 },
    { L"Ending Portrait", 0xfa560, 0xfa580 },
    { L"Ending Extra Portrait", 0xfab60, 0xfab80 },
};

const sGame_PaletteDataset RBFF2_A_KIM_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6380, 0xd63a0 },
    { L"Select Portrait", 0xd6980, 0xd69a0 },
    { L"Ending Portrait", 0xfa580, 0xfa5a0 },
    { L"Ending Extra Portrait", 0xfab80, 0xfaba0 },
};

const sGame_PaletteDataset RBFF2_A_KIM_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd63a0, 0xd63c0 },
    { L"Select Portrait", 0xd69a0, 0xd69c0 },
    { L"Ending Portrait", 0xfa5a0, 0xfa5c0 },
    { L"Ending Extra Portrait", 0xfaba0, 0xfabc0 },
};

const sGame_PaletteDataset RBFF2_A_BILLY_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd63c0, 0xd63e0 },
    { L"Select Portrait", 0xd69c0, 0xd69e0 },
    { L"Ending Portrait", 0xfa5c0, 0xfa5e0 },
    { L"Ending Extra Portrait", 0xfabc0, 0xfabe0 },
};

const sGame_PaletteDataset RBFF2_A_BILLY_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd63e0, 0xd6400 },
    { L"Select Portrait", 0xd69e0, 0xd6a00 },
    { L"Ending Portrait", 0xfa5e0, 0xfa600 },
    { L"Ending Extra Portrait", 0xfabe0, 0xfac00 },
};

const sGame_PaletteDataset RBFF2_A_CHENG_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6400, 0xd6420 },
    { L"Select Portrait", 0xd6a00, 0xd6a20 },
    { L"Ending Portrait", 0xfa600, 0xfa620 },
    { L"Ending Extra Portrait", 0xfac00, 0xfac20 },
};

const sGame_PaletteDataset RBFF2_A_CHENG_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6420, 0xd6440 },
    { L"Select Portrait", 0xd6a20, 0xd6a40 },
    { L"Ending Portrait", 0xfa620, 0xfa640 },
    { L"Ending Extra Portrait", 0xfac20, 0xfac40 },
};

const sGame_PaletteDataset RBFF2_A_TUNG_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6440, 0xd6460 },
    { L"Select Portrait", 0xd6a40, 0xd6a60 },
    { L"Ending Portrait", 0xfa640, 0xfa660 },
    { L"Ending Extra Portrait", 0xfac40, 0xfac60 },
};

const sGame_PaletteDataset RBFF2_A_TUNG_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6460, 0xd6480 },
    { L"Select Portrait", 0xd6a60, 0xd6a80 },
    { L"Ending Portrait", 0xfa660, 0xfa680 },
    { L"Ending Extra Portrait", 0xfac60, 0xfac80 },
};

const sGame_PaletteDataset RBFF2_A_LAURENCE_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6480, 0xd64a0 },
    { L"Select Portrait", 0xd6a80, 0xd6aa0 },
    { L"Ending Portrait", 0xfa680, 0xfa6a0 },
    { L"Ending Extra Portrait", 0xfac80, 0xfaca0 },
};

const sGame_PaletteDataset RBFF2_A_LAURENCE_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd64a0, 0xd64c0 },
    { L"Select Portrait", 0xd6aa0, 0xd6ac0 },
    { L"Ending Portrait", 0xfa6a0, 0xfa6c0 },
    { L"Ending Extra Portrait", 0xfaca0, 0xfacc0 },
};

const sGame_PaletteDataset RBFF2_A_KRAUSER_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd64c0, 0xd64e0 },
    { L"Select Portrait", 0xd6ac0, 0xd6ae0 },
    { L"Ending Portrait", 0xfa6c0, 0xfa6e0 },
    { L"Ending Extra Portrait", 0xfacc0, 0xface0 },
};

const sGame_PaletteDataset RBFF2_A_KRAUSER_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd64e0, 0xd6500 },
    { L"Select Portrait", 0xd6ae0, 0xd6b00 },
    { L"Ending Portrait", 0xfa6e0, 0xfa700 },
    { L"Ending Extra Portrait", 0xface0, 0xfad00 },
};

const sGame_PaletteDataset RBFF2_A_RICK_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6500, 0xd6520 },
    { L"Select Portrait", 0xd6b00, 0xd6b20 },
    { L"Ending Portrait", 0xfa700, 0xfa720 },
    { L"Ending Extra Portrait", 0xfad00, 0xfad20 },
};

const sGame_PaletteDataset RBFF2_A_RICK_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6520, 0xd6540 },
    { L"Select Portrait", 0xd6b20, 0xd6b40 },
    { L"Ending Portrait", 0xfa720, 0xfa740 },
    { L"Ending Extra Portrait", 0xfad20, 0xfad40 },
};

const sGame_PaletteDataset RBFF2_A_XIANGFEI_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6540, 0xd6560 },
    { L"Select Portrait", 0xd6b40, 0xd6b60 },
    { L"Ending Portrait", 0xfa740, 0xfa760 },
    { L"Ending Extra Portrait", 0xfad40, 0xfad60 },
};

const sGame_PaletteDataset RBFF2_A_XIANGFEI_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd6560, 0xd6580 },
    { L"Select Portrait", 0xd6b60, 0xd6b80 },
    { L"Ending Portrait", 0xfa760, 0xfa780 },
    { L"Ending Extra Portrait", 0xfad60, 0xfad80 },
};

const sGame_PaletteDataset RBFF2_A_ALFRED_PORTRAIT_PALETTES_P1[] =
{
    { L"Lifebar Portrait", 0xd6580, 0xd65a0 },
    { L"Select Portrait", 0xd6b80, 0xd6ba0 },
};

const sGame_PaletteDataset RBFF2_A_ALFRED_PORTRAIT_PALETTES_P2[] =
{
    { L"Lifebar Portrait", 0xd65a0, 0xd65c0 },
    { L"Select Portrait", 0xd6ba0, 0xd6bc0 },
};

const sGame_PaletteDataset RBFF2_A_StartSelectScreen_PALETTES[] =
{
    { L"Terry - Start Select Icon", 0xd6c00, 0xd6c20 },
    { L"Andy - Start Select Icon", 0xd6c20, 0xd6c40 },
    { L"Joe - Start Select Icon", 0xd6c40, 0xd6c60 },
    { L"Mai - Start Select Icon", 0xd6c60, 0xd6c80 },
    { L"Geese - Start Select Icon", 0xd6c80, 0xd6ca0 },
    { L"Sokaku - Start Select Icon", 0xd6ca0, 0xd6cc0 },
    { L"Bob - Start Select Icon", 0xd6cc0, 0xd6ce0 },
    { L"Hon-Fu - Start Select Icon", 0xd6ce0, 0xd6d00 },
    { L"Blue Mary - Start Select Icon", 0xd6d00, 0xd6d20 },
    { L"Franco - Start Select Icon", 0xd6d20, 0xd6d40 },
    { L"Yamazaki - Start Select Icon", 0xd6d40, 0xd6d60 },
    { L"Chonshu - Start Select Icon", 0xd6d60, 0xd6d80 },
    { L"Chonrei - Start Select Icon", 0xd6d80, 0xd6da0 },
    { L"Duck King - Start Select Icon", 0xd6da0, 0xd6dc0 },
    { L"Kim - Start Select Icon", 0xd6dc0, 0xd6de0 },
    { L"Billy - Start Select Icon", 0xd6de0, 0xd6e00 },
    { L"Cheng - Start Select Icon", 0xd6e00, 0xd6e20 },
    { L"Tung - Start Select Icon", 0xd6e20, 0xd6e40 },
    { L"Laurence - Start Select Icon", 0xd6e40, 0xd6e60 },
    { L"Krauser - Start Select Icon", 0xd6e60, 0xd6e80 },
    { L"Rick - Start Select Icon", 0xd6e80, 0xd6ea0 },
    { L"XiangFei - Start Select Icon", 0xd6ea0, 0xd6ec0 },
};

const sGame_PaletteDataset RBFF2_A_SelectScreen_PALETTES[] =
{
    { L"Terry - Select Icon", 0xd9200, 0xd9220 },
    { L"Joe - Select Icon", 0xd9220, 0xd9240 },
    { L"Kim - Select Icon", 0xd9240, 0xd9260 },
    { L"Blue Mary - Select Icon", 0xd9260, 0xd9280 },
    { L"Andy - Select Icon", 0xd9280, 0xd92a0 },
    { L"Sokaku - Select Icon", 0xd92a0, 0xd92c0 },
    { L"Hon-Fu - Select Icon", 0xd92c0, 0xd92e0 },
    { L"Chonshu - Select Icon", 0xd92e0, 0xd9300 },
    { L"Billy - Select Icon", 0xd9300, 0xd9320 },
    { L"Geese - Select Icon", 0xd9320, 0xd9340 },
    { L"Krauser - Select Icon", 0xd9340, 0xd9360 },
    { L"Laurence - Select Icon", 0xd9360, 0xd9380 },
    { L"Bob - Select Icon", 0xd9380, 0xd93a0 },
    { L"Cheng - Select Icon", 0xd93a0, 0xd93c0 },
    { L"Tung - Select Icon", 0xd93c0, 0xd93e0 },
    { L"Chonrei - Select Icon", 0xd93e0, 0xd9400 },
    { L"Yamazaki - Select Icon", 0xd9400, 0xd9420 },
    { L"Mai - Select Icon", 0xd9420, 0xd9440 },
    { L"Duck King - Select Icon", 0xd9440, 0xd9460 },
    { L"Franco - Select Icon", 0xd9460, 0xd9480 },
    // These two are just black: don't expose
    //{ L"Rick - Select Icon", 0xd9480, 0xd94a0 },
    //{ L"XiangFei - Select Icon", 0xd94a0, 0xd94c0 },
};

const sDescTreeNode RBFF2_A_BONUS_COLLECTION[] =
{
    { L"Start Select Icons", DESC_NODETYPE_TREE, (void*)RBFF2_A_StartSelectScreen_PALETTES, ARRAYSIZE(RBFF2_A_StartSelectScreen_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)RBFF2_A_SelectScreen_PALETTES, ARRAYSIZE(RBFF2_A_SelectScreen_PALETTES) },
};

#pragma endregion
// above is hand-crafted palettes

#pragma region auto-generated palettes
// These headers are produced via DumpPaletteHeaders - update that if you need to make changes.

const sGame_PaletteDataset RBFF2_A_TERRY_PALETTES_P1[] =
{
    { L"Main Palette", 0xd0000, 0xd0020, indexRBFF2Sprites_Terry },
    { L"Background Palette", 0xd0020, 0xd0040, indexRBFF2Sprites_Terry },
    { L"Extra Palette 2", 0xd0040, 0xd0060 },
    { L"Extra Palette 3", 0xd0060, 0xd0080 },
    { L"Extra Palette 4", 0xd0080, 0xd00a0 },
    { L"Extra Palette 5", 0xd00a0, 0xd00c0 },
    { L"Extra Palette 6", 0xd00c0, 0xd00e0 },
    { L"Extra Palette 7", 0xd00e0, 0xd0100 },
    { L"Extra Palette 8", 0xd0100, 0xd0120 },
    { L"Extra Palette 9", 0xd0120, 0xd0140 },
    { L"Extra Palette 10", 0xd0140, 0xd0160 },
    { L"Extra Palette 11", 0xd0160, 0xd0180, indexRBFF2Sprites_Terry },
    { L"Burn Palette", 0xd0180, 0xd01a0, indexRBFF2Sprites_Terry },
    { L"Purple Burn Palette", 0xd01a0, 0xd01c0, indexRBFF2Sprites_Terry },
    { L"Electricity Palette", 0xd01c0, 0xd01e0, indexRBFF2Sprites_Terry },
    { L"Break Shot/Background Palette 2", 0xd01e0, 0xd0200, indexRBFF2Sprites_Terry },
};

const sGame_PaletteDataset RBFF2_A_TERRY_PALETTES_P2[] =
{
    { L"Main Palette", 0xd0200, 0xd0220, indexRBFF2Sprites_Terry },
    { L"Background Palette", 0xd0220, 0xd0240, indexRBFF2Sprites_Terry },
    { L"Extra Palette 2", 0xd0240, 0xd0260 },
    { L"Extra Palette 3", 0xd0260, 0xd0280 },
    { L"Extra Palette 4", 0xd0280, 0xd02a0 },
    { L"Extra Palette 5", 0xd02a0, 0xd02c0 },
    { L"Extra Palette 6", 0xd02c0, 0xd02e0 },
    { L"Extra Palette 7", 0xd02e0, 0xd0300 },
    { L"Extra Palette 8", 0xd0300, 0xd0320 },
    { L"Extra Palette 9", 0xd0320, 0xd0340 },
    { L"Extra Palette 10", 0xd0340, 0xd0360 },
    { L"Extra Palette 11", 0xd0360, 0xd0380, indexRBFF2Sprites_Terry },
    { L"Burn Palette", 0xd0380, 0xd03a0, indexRBFF2Sprites_Terry },
    { L"Purple Burn Palette", 0xd03a0, 0xd03c0, indexRBFF2Sprites_Terry },
    { L"Electricity Palette", 0xd03c0, 0xd03e0, indexRBFF2Sprites_Terry },
    { L"Break Shot/Background Palette 2", 0xd03e0, 0xd0400, indexRBFF2Sprites_Terry },
};

const sGame_PaletteDataset RBFF2_A_ANDY_PALETTES_P1[] =
{
    { L"Main Palette", 0xd0400, 0xd0420, indexRBFFSSprites_Andy },
    { L"Background Palette", 0xd0420, 0xd0440, indexRBFFSSprites_Andy },
    { L"Extra Palette 2", 0xd0440, 0xd0460 },
    { L"Extra Palette 3", 0xd0460, 0xd0480 },
    { L"Extra Palette 4", 0xd0480, 0xd04a0, indexRBFFSSprites_Andy },
    { L"Extra Palette 5", 0xd04a0, 0xd04c0 },
    { L"Extra Palette 6", 0xd04c0, 0xd04e0 },
    { L"Extra Palette 7", 0xd04e0, 0xd0500 },
    { L"Extra Palette 8", 0xd0500, 0xd0520 },
    { L"Extra Palette 9", 0xd0520, 0xd0540 },
    { L"Extra Palette 10", 0xd0540, 0xd0560 },
    { L"Extra Palette 11", 0xd0560, 0xd0580, indexRBFFSSprites_Andy },
    { L"Burn Palette", 0xd0580, 0xd05a0, indexRBFFSSprites_Andy },
    { L"Purple Burn Palette", 0xd05a0, 0xd05c0, indexRBFFSSprites_Andy },
    { L"Electricity Palette", 0xd05c0, 0xd05e0, indexRBFFSSprites_Andy },
    { L"Break Shot/Background Palette 2", 0xd05e0, 0xd0600, indexRBFFSSprites_Andy },
};

const sGame_PaletteDataset RBFF2_A_ANDY_PALETTES_P2[] =
{
    { L"Main Palette", 0xd0600, 0xd0620, indexRBFFSSprites_Andy },
    { L"Background Palette", 0xd0620, 0xd0640, indexRBFFSSprites_Andy },
    { L"Extra Palette 2", 0xd0640, 0xd0660 },
    { L"Extra Palette 3", 0xd0660, 0xd0680 },
    { L"Extra Palette 4", 0xd0680, 0xd06a0, indexRBFFSSprites_Andy },
    { L"Extra Palette 5", 0xd06a0, 0xd06c0 },
    { L"Extra Palette 6", 0xd06c0, 0xd06e0 },
    { L"Extra Palette 7", 0xd06e0, 0xd0700 },
    { L"Extra Palette 8", 0xd0700, 0xd0720 },
    { L"Extra Palette 9", 0xd0720, 0xd0740 },
    { L"Extra Palette 10", 0xd0740, 0xd0760 },
    { L"Extra Palette 11", 0xd0760, 0xd0780, indexRBFFSSprites_Andy },
    { L"Burn Palette", 0xd0780, 0xd07a0, indexRBFFSSprites_Andy },
    { L"Purple Burn Palette", 0xd07a0, 0xd07c0, indexRBFFSSprites_Andy },
    { L"Electricity Palette", 0xd07c0, 0xd07e0, indexRBFFSSprites_Andy },
    { L"Break Shot/Background Palette 2", 0xd07e0, 0xd0800, indexRBFFSSprites_Andy },
};

const sGame_PaletteDataset RBFF2_A_JOE_PALETTES_P1[] =
{
    { L"Main Palette", 0xd0800, 0xd0820, indexRBFF2Sprites_Joe },
    { L"Background Palette", 0xd0820, 0xd0840, indexRBFF2Sprites_Joe },
    { L"Extra Palette 2", 0xd0840, 0xd0860 },
    { L"Extra Palette 3", 0xd0860, 0xd0880 },
    { L"Extra Palette 4", 0xd0880, 0xd08a0 },
    { L"Extra Palette 5", 0xd08a0, 0xd08c0 },
    { L"Extra Palette 6", 0xd08c0, 0xd08e0, indexRBFF2Sprites_Joe },
    { L"Extra Palette 7", 0xd08e0, 0xd0900 },
    { L"Extra Palette 8", 0xd0900, 0xd0920 },
    { L"Extra Palette 9", 0xd0920, 0xd0940, indexRBFF2Sprites_Joe },
    { L"Extra Palette 10", 0xd0940, 0xd0960 },
    { L"Extra Palette 11", 0xd0960, 0xd0980, indexRBFF2Sprites_Joe },
    { L"Burn Palette", 0xd0980, 0xd09a0, indexRBFF2Sprites_Joe },
    { L"Purple Burn Palette", 0xd09a0, 0xd09c0, indexRBFF2Sprites_Joe },
    { L"Electricity Palette", 0xd09c0, 0xd09e0, indexRBFF2Sprites_Joe },
    { L"Break Shot/Background Palette 2", 0xd09e0, 0xd0a00, indexRBFF2Sprites_Joe },
};

const sGame_PaletteDataset RBFF2_A_JOE_PALETTES_P2[] =
{
    { L"Main Palette", 0xd0a00, 0xd0a20, indexRBFF2Sprites_Joe },
    { L"Background Palette", 0xd0a20, 0xd0a40, indexRBFF2Sprites_Joe },
    { L"Extra Palette 2", 0xd0a40, 0xd0a60 },
    { L"Extra Palette 3", 0xd0a60, 0xd0a80 },
    { L"Extra Palette 4", 0xd0a80, 0xd0aa0 },
    { L"Extra Palette 5", 0xd0aa0, 0xd0ac0 },
    { L"Extra Palette 6", 0xd0ac0, 0xd0ae0, indexRBFF2Sprites_Joe },
    { L"Extra Palette 7", 0xd0ae0, 0xd0b00 },
    { L"Extra Palette 8", 0xd0b00, 0xd0b20 },
    { L"Extra Palette 9", 0xd0b20, 0xd0b40, indexRBFF2Sprites_Joe },
    { L"Extra Palette 10", 0xd0b40, 0xd0b60 },
    { L"Extra Palette 11", 0xd0b60, 0xd0b80, indexRBFF2Sprites_Joe },
    { L"Burn Palette", 0xd0b80, 0xd0ba0, indexRBFF2Sprites_Joe },
    { L"Purple Burn Palette", 0xd0ba0, 0xd0bc0, indexRBFF2Sprites_Joe },
    { L"Electricity Palette", 0xd0bc0, 0xd0be0, indexRBFF2Sprites_Joe },
    { L"Break Shot/Background Palette 2", 0xd0be0, 0xd0c00, indexRBFF2Sprites_Joe },
};

const sGame_PaletteDataset RBFF2_A_MAI_PALETTES_P1[] =
{
    { L"Main Palette", 0xd0c00, 0xd0c20, indexRBFFSSprites_Mai },
    { L"Background Palette", 0xd0c20, 0xd0c40, indexRBFFSSprites_Mai },
    { L"Extra Palette 2", 0xd0c40, 0xd0c60 },
    { L"Extra Palette 3", 0xd0c60, 0xd0c80 },
    { L"Extra Palette 4", 0xd0c80, 0xd0ca0, indexRBFFSSprites_Mai },
    { L"Extra Palette 5", 0xd0ca0, 0xd0cc0 },
    { L"Extra Palette 6", 0xd0cc0, 0xd0ce0 },
    { L"Extra Palette 7", 0xd0ce0, 0xd0d00 },
    { L"Extra Palette 8", 0xd0d00, 0xd0d20 },
    { L"Extra Palette 9", 0xd0d20, 0xd0d40 },
    { L"Extra Palette 10", 0xd0d40, 0xd0d60 },
    { L"Extra Palette 11", 0xd0d60, 0xd0d80, indexRBFFSSprites_Mai },
    { L"Burn Palette", 0xd0d80, 0xd0da0, indexRBFFSSprites_Mai },
    { L"Purple Burn Palette", 0xd0da0, 0xd0dc0, indexRBFFSSprites_Mai },
    { L"Electricity Palette", 0xd0dc0, 0xd0de0, indexRBFFSSprites_Mai },
    { L"Break Shot/Background Palette 2", 0xd0de0, 0xd0e00, indexRBFFSSprites_Mai },
};

const sGame_PaletteDataset RBFF2_A_MAI_PALETTES_P2[] =
{
    { L"Main Palette", 0xd0e00, 0xd0e20, indexRBFFSSprites_Mai },
    { L"Background Palette", 0xd0e20, 0xd0e40, indexRBFFSSprites_Mai },
    { L"Extra Palette 2", 0xd0e40, 0xd0e60 },
    { L"Extra Palette 3", 0xd0e60, 0xd0e80 },
    { L"Extra Palette 4", 0xd0e80, 0xd0ea0, indexRBFFSSprites_Mai },
    { L"Extra Palette 5", 0xd0ea0, 0xd0ec0 },
    { L"Extra Palette 6", 0xd0ec0, 0xd0ee0 },
    { L"Extra Palette 7", 0xd0ee0, 0xd0f00 },
    { L"Extra Palette 8", 0xd0f00, 0xd0f20 },
    { L"Extra Palette 9", 0xd0f20, 0xd0f40 },
    { L"Extra Palette 10", 0xd0f40, 0xd0f60 },
    { L"Extra Palette 11", 0xd0f60, 0xd0f80, indexRBFFSSprites_Mai },
    { L"Burn Palette", 0xd0f80, 0xd0fa0, indexRBFFSSprites_Mai },
    { L"Purple Burn Palette", 0xd0fa0, 0xd0fc0, indexRBFFSSprites_Mai },
    { L"Electricity Palette", 0xd0fc0, 0xd0fe0, indexRBFFSSprites_Mai },
    { L"Break Shot/Background Palette 2", 0xd0fe0, 0xd1000, indexRBFFSSprites_Mai },
};

const sGame_PaletteDataset RBFF2_A_GEESE_PALETTES_P1[] =
{
    { L"Main Palette", 0xd1000, 0xd1020, indexRBFFSSprites_Geese },
    { L"Background Palette", 0xd1020, 0xd1040, indexRBFFSSprites_Geese },
    { L"Extra Palette 2", 0xd1040, 0xd1060 },
    { L"Extra Palette 3", 0xd1060, 0xd1080 },
    { L"Extra Palette 4", 0xd1080, 0xd10a0 },
    { L"Extra Palette 5", 0xd10a0, 0xd10c0 },
    { L"Extra Palette 6", 0xd10c0, 0xd10e0, indexRBFFSSprites_Geese },
    { L"Extra Palette 7", 0xd10e0, 0xd1100 },
    { L"Extra Palette 8", 0xd1100, 0xd1120 },
    { L"Extra Palette 9", 0xd1120, 0xd1140 },
    { L"Extra Palette 10", 0xd1140, 0xd1160 },
    { L"Extra Palette 11", 0xd1160, 0xd1180, indexRBFFSSprites_Geese },
    { L"Burn Palette", 0xd1180, 0xd11a0, indexRBFFSSprites_Geese },
    { L"Purple Burn Palette", 0xd11a0, 0xd11c0, indexRBFFSSprites_Geese },
    { L"Electricity Palette", 0xd11c0, 0xd11e0, indexRBFFSSprites_Geese },
    { L"Break Shot/Background Palette 2", 0xd11e0, 0xd1200, indexRBFFSSprites_Geese },
};

const sGame_PaletteDataset RBFF2_A_GEESE_PALETTES_P2[] =
{
    { L"Main Palette", 0xd1200, 0xd1220, indexRBFFSSprites_Geese },
    { L"Background Palette", 0xd1220, 0xd1240, indexRBFFSSprites_Geese },
    { L"Extra Palette 2", 0xd1240, 0xd1260 },
    { L"Extra Palette 3", 0xd1260, 0xd1280 },
    { L"Extra Palette 4", 0xd1280, 0xd12a0 },
    { L"Extra Palette 5", 0xd12a0, 0xd12c0 },
    { L"Extra Palette 6", 0xd12c0, 0xd12e0, indexRBFFSSprites_Geese },
    { L"Extra Palette 7", 0xd12e0, 0xd1300 },
    { L"Extra Palette 8", 0xd1300, 0xd1320 },
    { L"Extra Palette 9", 0xd1320, 0xd1340 },
    { L"Extra Palette 10", 0xd1340, 0xd1360 },
    { L"Extra Palette 11", 0xd1360, 0xd1380, indexRBFFSSprites_Geese },
    { L"Burn Palette", 0xd1380, 0xd13a0, indexRBFFSSprites_Geese },
    { L"Purple Burn Palette", 0xd13a0, 0xd13c0, indexRBFFSSprites_Geese },
    { L"Electricity Palette", 0xd13c0, 0xd13e0, indexRBFFSSprites_Geese },
    { L"Break Shot/Background Palette 2", 0xd13e0, 0xd1400, indexRBFFSSprites_Geese },
};

const sGame_PaletteDataset RBFF2_A_SOKAKU_PALETTES_P1[] =
{
    { L"Main Palette", 0xd1400, 0xd1420, indexRBFFSSprites_Sokaku },
    { L"Background Palette", 0xd1420, 0xd1440, indexRBFFSSprites_Sokaku },
    { L"Extra Palette 2", 0xd1440, 0xd1460 },
    { L"Extra Palette 3", 0xd1460, 0xd1480 },
    { L"Extra Palette 4", 0xd1480, 0xd14a0 },
    { L"Extra Palette 5", 0xd14a0, 0xd14c0, indexRBFFSSprites_Sokaku },
    { L"Extra Palette 6", 0xd14c0, 0xd14e0 },
    { L"Extra Palette 7", 0xd14e0, 0xd1500 },
    { L"Extra Palette 8", 0xd1500, 0xd1520 },
    { L"Extra Palette 9", 0xd1520, 0xd1540 },
    { L"Extra Palette 10", 0xd1540, 0xd1560 },
    { L"Extra Palette 11", 0xd1560, 0xd1580, indexRBFFSSprites_Sokaku },
    { L"Burn Palette", 0xd1580, 0xd15a0, indexRBFFSSprites_Sokaku },
    { L"Purple Burn Palette", 0xd15a0, 0xd15c0, indexRBFFSSprites_Sokaku },
    { L"Electricity Palette", 0xd15c0, 0xd15e0, indexRBFFSSprites_Sokaku },
    { L"Break Shot/Background Palette 2", 0xd15e0, 0xd1600, indexRBFFSSprites_Sokaku },
};

const sGame_PaletteDataset RBFF2_A_SOKAKU_PALETTES_P2[] =
{
    { L"Main Palette", 0xd1600, 0xd1620, indexRBFFSSprites_Sokaku },
    { L"Background Palette", 0xd1620, 0xd1640, indexRBFFSSprites_Sokaku },
    { L"Extra Palette 2", 0xd1640, 0xd1660 },
    { L"Extra Palette 3", 0xd1660, 0xd1680 },
    { L"Extra Palette 4", 0xd1680, 0xd16a0 },
    { L"Extra Palette 5", 0xd16a0, 0xd16c0, indexRBFFSSprites_Sokaku },
    { L"Extra Palette 6", 0xd16c0, 0xd16e0 },
    { L"Extra Palette 7", 0xd16e0, 0xd1700 },
    { L"Extra Palette 8", 0xd1700, 0xd1720 },
    { L"Extra Palette 9", 0xd1720, 0xd1740 },
    { L"Extra Palette 10", 0xd1740, 0xd1760 },
    { L"Extra Palette 11", 0xd1760, 0xd1780, indexRBFFSSprites_Sokaku },
    { L"Burn Palette", 0xd1780, 0xd17a0, indexRBFFSSprites_Sokaku },
    { L"Purple Burn Palette", 0xd17a0, 0xd17c0, indexRBFFSSprites_Sokaku },
    { L"Electricity Palette", 0xd17c0, 0xd17e0, indexRBFFSSprites_Sokaku },
    { L"Break Shot/Background Palette 2", 0xd17e0, 0xd1800, indexRBFFSSprites_Sokaku },
};

const sGame_PaletteDataset RBFF2_A_BOB_PALETTES_P1[] =
{
    { L"Main Palette", 0xd1800, 0xd1820, indexRBFFSSprites_Bob },
    { L"Background Palette", 0xd1820, 0xd1840, indexRBFFSSprites_Bob },
    { L"Extra Palette 2", 0xd1840, 0xd1860 },
    { L"Extra Palette 3", 0xd1860, 0xd1880 },
    { L"Extra Palette 4", 0xd1880, 0xd18a0 },
    { L"Extra Palette 5", 0xd18a0, 0xd18c0 },
    { L"Extra Palette 6", 0xd18c0, 0xd18e0 },
    { L"Extra Palette 7", 0xd18e0, 0xd1900 },
    { L"Extra Palette 8", 0xd1900, 0xd1920 },
    { L"Extra Palette 9", 0xd1920, 0xd1940 },
    { L"Extra Palette 10", 0xd1940, 0xd1960 },
    { L"Extra Palette 11", 0xd1960, 0xd1980, indexRBFFSSprites_Bob },
    { L"Burn Palette", 0xd1980, 0xd19a0, indexRBFFSSprites_Bob },
    { L"Purple Burn Palette", 0xd19a0, 0xd19c0, indexRBFFSSprites_Bob },
    { L"Electricity Palette", 0xd19c0, 0xd19e0, indexRBFFSSprites_Bob },
    { L"Break Shot/Background Palette 2", 0xd19e0, 0xd1a00, indexRBFFSSprites_Bob },
};

const sGame_PaletteDataset RBFF2_A_BOB_PALETTES_P2[] =
{
    { L"Main Palette", 0xd1a00, 0xd1a20, indexRBFFSSprites_Bob },
    { L"Background Palette", 0xd1a20, 0xd1a40, indexRBFFSSprites_Bob },
    { L"Extra Palette 2", 0xd1a40, 0xd1a60 },
    { L"Extra Palette 3", 0xd1a60, 0xd1a80 },
    { L"Extra Palette 4", 0xd1a80, 0xd1aa0 },
    { L"Extra Palette 5", 0xd1aa0, 0xd1ac0 },
    { L"Extra Palette 6", 0xd1ac0, 0xd1ae0 },
    { L"Extra Palette 7", 0xd1ae0, 0xd1b00 },
    { L"Extra Palette 8", 0xd1b00, 0xd1b20 },
    { L"Extra Palette 9", 0xd1b20, 0xd1b40 },
    { L"Extra Palette 10", 0xd1b40, 0xd1b60 },
    { L"Extra Palette 11", 0xd1b60, 0xd1b80, indexRBFFSSprites_Bob },
    { L"Burn Palette", 0xd1b80, 0xd1ba0, indexRBFFSSprites_Bob },
    { L"Purple Burn Palette", 0xd1ba0, 0xd1bc0, indexRBFFSSprites_Bob },
    { L"Electricity Palette", 0xd1bc0, 0xd1be0, indexRBFFSSprites_Bob },
    { L"Break Shot/Background Palette 2", 0xd1be0, 0xd1c00, indexRBFFSSprites_Bob },
};

const sGame_PaletteDataset RBFF2_A_HONFU_PALETTES_P1[] =
{
    { L"Main Palette", 0xd1c00, 0xd1c20, indexRBFFSSprites_Hon },
    { L"Background Palette", 0xd1c20, 0xd1c40, indexRBFFSSprites_Hon },
    { L"Extra Palette 2", 0xd1c40, 0xd1c60, indexRBFFSSprites_Hon },
    { L"Extra Palette 3", 0xd1c60, 0xd1c80 },
    { L"Extra Palette 4", 0xd1c80, 0xd1ca0 },
    { L"Extra Palette 5", 0xd1ca0, 0xd1cc0 },
    { L"Extra Palette 6", 0xd1cc0, 0xd1ce0 },
    { L"Extra Palette 7", 0xd1ce0, 0xd1d00 },
    { L"Extra Palette 8", 0xd1d00, 0xd1d20 },
    { L"Extra Palette 9", 0xd1d20, 0xd1d40 },
    { L"Extra Palette 10", 0xd1d40, 0xd1d60 },
    { L"Extra Palette 11", 0xd1d60, 0xd1d80, indexRBFFSSprites_Hon },
    { L"Burn Palette", 0xd1d80, 0xd1da0, indexRBFFSSprites_Hon },
    { L"Purple Burn Palette", 0xd1da0, 0xd1dc0, indexRBFFSSprites_Hon },
    { L"Electricity Palette", 0xd1dc0, 0xd1de0, indexRBFFSSprites_Hon },
    { L"Break Shot/Background Palette 2", 0xd1de0, 0xd1e00, indexRBFFSSprites_Hon },
};

const sGame_PaletteDataset RBFF2_A_HONFU_PALETTES_P2[] =
{
    { L"Main Palette", 0xd1e00, 0xd1e20, indexRBFFSSprites_Hon },
    { L"Background Palette", 0xd1e20, 0xd1e40, indexRBFFSSprites_Hon },
    { L"Extra Palette 2", 0xd1e40, 0xd1e60, indexRBFFSSprites_Hon },
    { L"Extra Palette 3", 0xd1e60, 0xd1e80 },
    { L"Extra Palette 4", 0xd1e80, 0xd1ea0 },
    { L"Extra Palette 5", 0xd1ea0, 0xd1ec0 },
    { L"Extra Palette 6", 0xd1ec0, 0xd1ee0 },
    { L"Extra Palette 7", 0xd1ee0, 0xd1f00 },
    { L"Extra Palette 8", 0xd1f00, 0xd1f20 },
    { L"Extra Palette 9", 0xd1f20, 0xd1f40 },
    { L"Extra Palette 10", 0xd1f40, 0xd1f60 },
    { L"Extra Palette 11", 0xd1f60, 0xd1f80, indexRBFFSSprites_Hon },
    { L"Burn Palette", 0xd1f80, 0xd1fa0, indexRBFFSSprites_Hon },
    { L"Purple Burn Palette", 0xd1fa0, 0xd1fc0, indexRBFFSSprites_Hon },
    { L"Electricity Palette", 0xd1fc0, 0xd1fe0, indexRBFFSSprites_Hon },
    { L"Break Shot/Background Palette 2", 0xd1fe0, 0xd2000, indexRBFFSSprites_Hon },
};

const sGame_PaletteDataset RBFF2_A_BLUEMARY_PALETTES_P1[] =
{
    { L"Main Palette", 0xd2000, 0xd2020, indexRBFFSSprites_BlueMary },
    { L"Background Palette", 0xd2020, 0xd2040, indexRBFFSSprites_BlueMary },
    { L"Extra Palette 2", 0xd2040, 0xd2060 },
    { L"Extra Palette 3", 0xd2060, 0xd2080 },
    { L"Extra Palette 4", 0xd2080, 0xd20a0 },
    { L"Extra Palette 5", 0xd20a0, 0xd20c0 },
    { L"Extra Palette 6", 0xd20c0, 0xd20e0 },
    { L"Extra Palette 7", 0xd20e0, 0xd2100 },
    { L"Extra Palette 8", 0xd2100, 0xd2120 },
    { L"Extra Palette 9", 0xd2120, 0xd2140 },
    { L"Extra Palette 10", 0xd2140, 0xd2160 },
    { L"Extra Palette 11", 0xd2160, 0xd2180, indexRBFFSSprites_BlueMary },
    { L"Burn Palette", 0xd2180, 0xd21a0, indexRBFFSSprites_BlueMary },
    { L"Purple Burn Palette", 0xd21a0, 0xd21c0, indexRBFFSSprites_BlueMary },
    { L"Electricity Palette", 0xd21c0, 0xd21e0, indexRBFFSSprites_BlueMary },
    { L"Break Shot/Background Palette 2", 0xd21e0, 0xd2200, indexRBFFSSprites_BlueMary },
};

const sGame_PaletteDataset RBFF2_A_BLUEMARY_PALETTES_P2[] =
{
    { L"Main Palette", 0xd2200, 0xd2220, indexRBFFSSprites_BlueMary },
    { L"Background Palette", 0xd2220, 0xd2240, indexRBFFSSprites_BlueMary },
    { L"Extra Palette 2", 0xd2240, 0xd2260 },
    { L"Extra Palette 3", 0xd2260, 0xd2280 },
    { L"Extra Palette 4", 0xd2280, 0xd22a0 },
    { L"Extra Palette 5", 0xd22a0, 0xd22c0 },
    { L"Extra Palette 6", 0xd22c0, 0xd22e0 },
    { L"Extra Palette 7", 0xd22e0, 0xd2300 },
    { L"Extra Palette 8", 0xd2300, 0xd2320 },
    { L"Extra Palette 9", 0xd2320, 0xd2340 },
    { L"Extra Palette 10", 0xd2340, 0xd2360 },
    { L"Extra Palette 11", 0xd2360, 0xd2380, indexRBFFSSprites_BlueMary },
    { L"Burn Palette", 0xd2380, 0xd23a0, indexRBFFSSprites_BlueMary },
    { L"Purple Burn Palette", 0xd23a0, 0xd23c0, indexRBFFSSprites_BlueMary },
    { L"Electricity Palette", 0xd23c0, 0xd23e0, indexRBFFSSprites_BlueMary },
    { L"Break Shot/Background Palette 2", 0xd23e0, 0xd2400, indexRBFFSSprites_BlueMary },
};

const sGame_PaletteDataset RBFF2_A_FRANCO_PALETTES_P1[] =
{
    { L"Main Palette", 0xd2400, 0xd2420, indexRBFFSSprites_Franco },
    { L"Background Palette", 0xd2420, 0xd2440, indexRBFFSSprites_Franco },
    { L"Extra Palette 2", 0xd2440, 0xd2460 },
    { L"Extra Palette 3", 0xd2460, 0xd2480, indexRBFFSSprites_Franco },
    { L"Extra Palette 4", 0xd2480, 0xd24a0 },
    { L"Extra Palette 5", 0xd24a0, 0xd24c0 },
    { L"Extra Palette 6", 0xd24c0, 0xd24e0, indexRBFFSSprites_Franco },
    { L"Extra Palette 7", 0xd24e0, 0xd2500, indexRBFFSSprites_Franco },
    { L"Extra Palette 8", 0xd2500, 0xd2520 },
    { L"Extra Palette 9", 0xd2520, 0xd2540 },
    { L"Extra Palette 10", 0xd2540, 0xd2560 },
    { L"Extra Palette 11", 0xd2560, 0xd2580, indexRBFFSSprites_Franco },
    { L"Burn Palette", 0xd2580, 0xd25a0, indexRBFFSSprites_Franco },
    { L"Purple Burn Palette", 0xd25a0, 0xd25c0, indexRBFFSSprites_Franco },
    { L"Electricity Palette", 0xd25c0, 0xd25e0, indexRBFFSSprites_Franco },
    { L"Break Shot/Background Palette 2", 0xd25e0, 0xd2600, indexRBFFSSprites_Franco },
};

const sGame_PaletteDataset RBFF2_A_FRANCO_PALETTES_P2[] =
{
    { L"Main Palette", 0xd2600, 0xd2620, indexRBFFSSprites_Franco },
    { L"Background Palette", 0xd2620, 0xd2640, indexRBFFSSprites_Franco },
    { L"Extra Palette 2", 0xd2640, 0xd2660 },
    { L"Extra Palette 3", 0xd2660, 0xd2680, indexRBFFSSprites_Franco },
    { L"Extra Palette 4", 0xd2680, 0xd26a0 },
    { L"Extra Palette 5", 0xd26a0, 0xd26c0 },
    { L"Extra Palette 6", 0xd26c0, 0xd26e0, indexRBFFSSprites_Franco },
    { L"Extra Palette 7", 0xd26e0, 0xd2700, indexRBFFSSprites_Franco },
    { L"Extra Palette 8", 0xd2700, 0xd2720 },
    { L"Extra Palette 9", 0xd2720, 0xd2740 },
    { L"Extra Palette 10", 0xd2740, 0xd2760 },
    { L"Extra Palette 11", 0xd2760, 0xd2780, indexRBFFSSprites_Franco },
    { L"Burn Palette", 0xd2780, 0xd27a0, indexRBFFSSprites_Franco },
    { L"Purple Burn Palette", 0xd27a0, 0xd27c0, indexRBFFSSprites_Franco },
    { L"Electricity Palette", 0xd27c0, 0xd27e0, indexRBFFSSprites_Franco },
    { L"Break Shot/Background Palette 2", 0xd27e0, 0xd2800, indexRBFFSSprites_Franco },
};

const sGame_PaletteDataset RBFF2_A_YAMAZAKI_PALETTES_P1[] =
{
    { L"Main Palette", 0xd2800, 0xd2820, indexRBFFSSprites_Yamazaki },
    { L"Background Palette", 0xd2820, 0xd2840, indexRBFFSSprites_Yamazaki },
    { L"Extra Palette 2", 0xd2840, 0xd2860 },
    { L"Extra Palette 3", 0xd2860, 0xd2880 },
    { L"Extra Palette 4", 0xd2880, 0xd28a0 },
    { L"Extra Palette 5", 0xd28a0, 0xd28c0, indexRBFFSSprites_Yamazaki },
    { L"Extra Palette 6", 0xd28c0, 0xd28e0, indexRBFFSSprites_Yamazaki },
    { L"Extra Palette 7", 0xd28e0, 0xd2900 },
    { L"Extra Palette 8", 0xd2900, 0xd2920 },
    { L"Extra Palette 9", 0xd2920, 0xd2940 },
    { L"Extra Palette 10", 0xd2940, 0xd2960 },
    { L"Extra Palette 11", 0xd2960, 0xd2980, indexRBFFSSprites_Yamazaki },
    { L"Burn Palette", 0xd2980, 0xd29a0, indexRBFFSSprites_Yamazaki },
    { L"Purple Burn Palette", 0xd29a0, 0xd29c0, indexRBFFSSprites_Yamazaki },
    { L"Electricity Palette", 0xd29c0, 0xd29e0, indexRBFFSSprites_Yamazaki },
    { L"Break Shot/Background Palette 2", 0xd29e0, 0xd2a00, indexRBFFSSprites_Yamazaki },
};

const sGame_PaletteDataset RBFF2_A_YAMAZAKI_PALETTES_P2[] =
{
    { L"Main Palette", 0xd2a00, 0xd2a20, indexRBFFSSprites_Yamazaki },
    { L"Background Palette", 0xd2a20, 0xd2a40, indexRBFFSSprites_Yamazaki },
    { L"Extra Palette 2", 0xd2a40, 0xd2a60 },
    { L"Extra Palette 3", 0xd2a60, 0xd2a80 },
    { L"Extra Palette 4", 0xd2a80, 0xd2aa0 },
    { L"Extra Palette 5", 0xd2aa0, 0xd2ac0, indexRBFFSSprites_Yamazaki },
    { L"Extra Palette 6", 0xd2ac0, 0xd2ae0, indexRBFFSSprites_Yamazaki },
    { L"Extra Palette 7", 0xd2ae0, 0xd2b00 },
    { L"Extra Palette 8", 0xd2b00, 0xd2b20 },
    { L"Extra Palette 9", 0xd2b20, 0xd2b40 },
    { L"Extra Palette 10", 0xd2b40, 0xd2b60 },
    { L"Extra Palette 11", 0xd2b60, 0xd2b80, indexRBFFSSprites_Yamazaki },
    { L"Burn Palette", 0xd2b80, 0xd2ba0, indexRBFFSSprites_Yamazaki },
    { L"Purple Burn Palette", 0xd2ba0, 0xd2bc0, indexRBFFSSprites_Yamazaki },
    { L"Electricity Palette", 0xd2bc0, 0xd2be0, indexRBFFSSprites_Yamazaki },
    { L"Break Shot/Background Palette 2", 0xd2be0, 0xd2c00, indexRBFFSSprites_Yamazaki },
};

const sGame_PaletteDataset RBFF2_A_CHONREI_PALETTES_P1[] =
{
    { L"Main Palette", 0xd2c00, 0xd2c20, indexRBFFSSprites_Chonrei },
    { L"Background Palette", 0xd2c20, 0xd2c40, indexRBFFSSprites_Chonrei },
    { L"Extra Palette 2", 0xd2c40, 0xd2c60 },
    { L"Extra Palette 3", 0xd2c60, 0xd2c80 },
    { L"Extra Palette 4", 0xd2c80, 0xd2ca0 },
    { L"Extra Palette 5", 0xd2ca0, 0xd2cc0 },
    { L"Extra Palette 6", 0xd2cc0, 0xd2ce0 },
    { L"Extra Palette 7", 0xd2ce0, 0xd2d00 },
    { L"Extra Palette 8", 0xd2d00, 0xd2d20 },
    { L"Extra Palette 9", 0xd2d20, 0xd2d40 },
    { L"Extra Palette 10", 0xd2d40, 0xd2d60 },
    { L"Extra Palette 11", 0xd2d60, 0xd2d80, indexRBFFSSprites_Chonrei },
    { L"Burn Palette", 0xd2d80, 0xd2da0, indexRBFFSSprites_Chonrei },
    { L"Purple Burn Palette", 0xd2da0, 0xd2dc0, indexRBFFSSprites_Chonrei },
    { L"Electricity Palette", 0xd2dc0, 0xd2de0, indexRBFFSSprites_Chonrei },
    { L"Break Shot/Background Palette 2", 0xd2de0, 0xd2e00, indexRBFFSSprites_Chonrei },
};

const sGame_PaletteDataset RBFF2_A_CHONREI_PALETTES_P2[] =
{
    { L"Main Palette", 0xd2e00, 0xd2e20, indexRBFFSSprites_Chonrei },
    { L"Background Palette", 0xd2e20, 0xd2e40, indexRBFFSSprites_Chonrei },
    { L"Extra Palette 2", 0xd2e40, 0xd2e60 },
    { L"Extra Palette 3", 0xd2e60, 0xd2e80 },
    { L"Extra Palette 4", 0xd2e80, 0xd2ea0 },
    { L"Extra Palette 5", 0xd2ea0, 0xd2ec0 },
    { L"Extra Palette 6", 0xd2ec0, 0xd2ee0 },
    { L"Extra Palette 7", 0xd2ee0, 0xd2f00 },
    { L"Extra Palette 8", 0xd2f00, 0xd2f20 },
    { L"Extra Palette 9", 0xd2f20, 0xd2f40 },
    { L"Extra Palette 10", 0xd2f40, 0xd2f60 },
    { L"Extra Palette 11", 0xd2f60, 0xd2f80, indexRBFFSSprites_Chonrei },
    { L"Burn Palette", 0xd2f80, 0xd2fa0, indexRBFFSSprites_Chonrei },
    { L"Purple Burn Palette", 0xd2fa0, 0xd2fc0, indexRBFFSSprites_Chonrei },
    { L"Electricity Palette", 0xd2fc0, 0xd2fe0, indexRBFFSSprites_Chonrei },
    { L"Break Shot/Background Palette 2", 0xd2fe0, 0xd3000, indexRBFFSSprites_Chonrei },
};

const sGame_PaletteDataset RBFF2_A_CHONSHU_PALETTES_P1[] =
{
    { L"Main Palette", 0xd3000, 0xd3020, indexRBFFSSprites_Chonshu },
    { L"Background Palette", 0xd3020, 0xd3040, indexRBFFSSprites_Chonshu },
    { L"Extra Palette 2", 0xd3040, 0xd3060 },
    { L"Extra Palette 3", 0xd3060, 0xd3080 },
    { L"Extra Palette 4", 0xd3080, 0xd30a0 },
    { L"Extra Palette 5", 0xd30a0, 0xd30c0 },
    { L"Extra Palette 6", 0xd30c0, 0xd30e0 },
    { L"Extra Palette 7", 0xd30e0, 0xd3100 },
    { L"Extra Palette 8", 0xd3100, 0xd3120 },
    { L"Extra Palette 9", 0xd3120, 0xd3140 },
    { L"Extra Palette 10", 0xd3140, 0xd3160 },
    { L"Extra Palette 11", 0xd3160, 0xd3180, indexRBFFSSprites_Chonshu },
    { L"Burn Palette", 0xd3180, 0xd31a0, indexRBFFSSprites_Chonshu },
    { L"Purple Burn Palette", 0xd31a0, 0xd31c0, indexRBFFSSprites_Chonshu },
    { L"Electricity Palette", 0xd31c0, 0xd31e0, indexRBFFSSprites_Chonshu },
    { L"Break Shot/Background Palette 2", 0xd31e0, 0xd3200, indexRBFFSSprites_Chonshu },
};

const sGame_PaletteDataset RBFF2_A_CHONSHU_PALETTES_P2[] =
{
    { L"Main Palette", 0xd3200, 0xd3220, indexRBFFSSprites_Chonshu },
    { L"Background Palette", 0xd3220, 0xd3240, indexRBFFSSprites_Chonshu },
    { L"Extra Palette 2", 0xd3240, 0xd3260 },
    { L"Extra Palette 3", 0xd3260, 0xd3280 },
    { L"Extra Palette 4", 0xd3280, 0xd32a0 },
    { L"Extra Palette 5", 0xd32a0, 0xd32c0 },
    { L"Extra Palette 6", 0xd32c0, 0xd32e0 },
    { L"Extra Palette 7", 0xd32e0, 0xd3300 },
    { L"Extra Palette 8", 0xd3300, 0xd3320 },
    { L"Extra Palette 9", 0xd3320, 0xd3340 },
    { L"Extra Palette 10", 0xd3340, 0xd3360 },
    { L"Extra Palette 11", 0xd3360, 0xd3380, indexRBFFSSprites_Chonshu },
    { L"Burn Palette", 0xd3380, 0xd33a0, indexRBFFSSprites_Chonshu },
    { L"Purple Burn Palette", 0xd33a0, 0xd33c0, indexRBFFSSprites_Chonshu },
    { L"Electricity Palette", 0xd33c0, 0xd33e0, indexRBFFSSprites_Chonshu },
    { L"Break Shot/Background Palette 2", 0xd33e0, 0xd3400, indexRBFFSSprites_Chonshu },
};

const sGame_PaletteDataset RBFF2_A_DUCKKING_PALETTES_P1[] =
{
    { L"Main Palette", 0xd3400, 0xd3420, indexRBFFSSprites_DuckKing },
    { L"Background Palette", 0xd3420, 0xd3440, indexRBFFSSprites_DuckKing },
    { L"Extra Palette 2", 0xd3440, 0xd3460 },
    { L"Extra Palette 3", 0xd3460, 0xd3480 },
    { L"Extra Palette 4", 0xd3480, 0xd34a0, indexRBFFSSprites_DuckKing },
    { L"Extra Palette 5", 0xd34a0, 0xd34c0 },
    { L"Extra Palette 6", 0xd34c0, 0xd34e0 },
    { L"Extra Palette 7", 0xd34e0, 0xd3500 },
    { L"Extra Palette 8", 0xd3500, 0xd3520 },
    { L"Extra Palette 9", 0xd3520, 0xd3540 },
    { L"Extra Palette 10", 0xd3540, 0xd3560 },
    { L"Extra Palette 11", 0xd3560, 0xd3580, indexRBFFSSprites_DuckKing },
    { L"Burn Palette", 0xd3580, 0xd35a0, indexRBFFSSprites_DuckKing },
    { L"Purple Burn Palette", 0xd35a0, 0xd35c0, indexRBFFSSprites_DuckKing },
    { L"Electricity Palette", 0xd35c0, 0xd35e0, indexRBFFSSprites_DuckKing },
    { L"Break Shot/Background Palette 2", 0xd35e0, 0xd3600, indexRBFFSSprites_DuckKing },
};

const sGame_PaletteDataset RBFF2_A_DUCKKING_PALETTES_P2[] =
{
    { L"Main Palette", 0xd3600, 0xd3620, indexRBFFSSprites_DuckKing },
    { L"Background Palette", 0xd3620, 0xd3640, indexRBFFSSprites_DuckKing },
    { L"Extra Palette 2", 0xd3640, 0xd3660 },
    { L"Extra Palette 3", 0xd3660, 0xd3680 },
    { L"Extra Palette 4", 0xd3680, 0xd36a0, indexRBFFSSprites_DuckKing },
    { L"Extra Palette 5", 0xd36a0, 0xd36c0 },
    { L"Extra Palette 6", 0xd36c0, 0xd36e0 },
    { L"Extra Palette 7", 0xd36e0, 0xd3700 },
    { L"Extra Palette 8", 0xd3700, 0xd3720 },
    { L"Extra Palette 9", 0xd3720, 0xd3740 },
    { L"Extra Palette 10", 0xd3740, 0xd3760 },
    { L"Extra Palette 11", 0xd3760, 0xd3780, indexRBFFSSprites_DuckKing },
    { L"Burn Palette", 0xd3780, 0xd37a0, indexRBFFSSprites_DuckKing },
    { L"Purple Burn Palette", 0xd37a0, 0xd37c0, indexRBFFSSprites_DuckKing },
    { L"Electricity Palette", 0xd37c0, 0xd37e0, indexRBFFSSprites_DuckKing },
    { L"Break Shot/Background Palette 2", 0xd37e0, 0xd3800, indexRBFFSSprites_DuckKing },
};

const sGame_PaletteDataset RBFF2_A_KIM_PALETTES_P1[] =
{
    { L"Main Palette", 0xd3800, 0xd3820, indexRBFFSSprites_Kim },
    { L"Background Palette", 0xd3820, 0xd3840, indexRBFFSSprites_Kim },
    { L"Extra Palette 2", 0xd3840, 0xd3860 },
    { L"Extra Palette 3", 0xd3860, 0xd3880, indexRBFFSSprites_Kim },
    { L"Extra Palette 4", 0xd3880, 0xd38a0 },
    { L"Extra Palette 5", 0xd38a0, 0xd38c0, indexRBFFSSprites_Kim },
    { L"Extra Palette 6", 0xd38c0, 0xd38e0, indexRBFFSSprites_Kim },
    { L"Extra Palette 7", 0xd38e0, 0xd3900 },
    { L"Extra Palette 8", 0xd3900, 0xd3920 },
    { L"Extra Palette 9", 0xd3920, 0xd3940 },
    { L"Extra Palette 10", 0xd3940, 0xd3960 },
    { L"Extra Palette 11", 0xd3960, 0xd3980, indexRBFFSSprites_Kim },
    { L"Burn Palette", 0xd3980, 0xd39a0, indexRBFFSSprites_Kim },
    { L"Purple Burn Palette", 0xd39a0, 0xd39c0, indexRBFFSSprites_Kim },
    { L"Electricity Palette", 0xd39c0, 0xd39e0, indexRBFFSSprites_Kim },
    { L"Break Shot/Background Palette 2", 0xd39e0, 0xd3a00, indexRBFFSSprites_Kim },
};

const sGame_PaletteDataset RBFF2_A_KIM_PALETTES_P2[] =
{
    { L"Main Palette", 0xd3a00, 0xd3a20, indexRBFFSSprites_Kim },
    { L"Background Palette", 0xd3a20, 0xd3a40, indexRBFFSSprites_Kim },
    { L"Extra Palette 2", 0xd3a40, 0xd3a60 },
    { L"Extra Palette 3", 0xd3a60, 0xd3a80, indexRBFFSSprites_Kim },
    { L"Extra Palette 4", 0xd3a80, 0xd3aa0 },
    { L"Extra Palette 5", 0xd3aa0, 0xd3ac0, indexRBFFSSprites_Kim },
    { L"Extra Palette 6", 0xd3ac0, 0xd3ae0, indexRBFFSSprites_Kim },
    { L"Extra Palette 7", 0xd3ae0, 0xd3b00 },
    { L"Extra Palette 8", 0xd3b00, 0xd3b20 },
    { L"Extra Palette 9", 0xd3b20, 0xd3b40 },
    { L"Extra Palette 10", 0xd3b40, 0xd3b60 },
    { L"Extra Palette 11", 0xd3b60, 0xd3b80, indexRBFFSSprites_Kim },
    { L"Burn Palette", 0xd3b80, 0xd3ba0, indexRBFFSSprites_Kim },
    { L"Purple Burn Palette", 0xd3ba0, 0xd3bc0, indexRBFFSSprites_Kim },
    { L"Electricity Palette", 0xd3bc0, 0xd3be0, indexRBFFSSprites_Kim },
    { L"Break Shot/Background Palette 2", 0xd3be0, 0xd3c00, indexRBFFSSprites_Kim },
};

const sGame_PaletteDataset RBFF2_A_BILLY_PALETTES_P1[] =
{
    { L"Main Palette", 0xd3c00, 0xd3c20, indexRBFFSSprites_Billy },
    { L"Background Palette", 0xd3c20, 0xd3c40, indexRBFFSSprites_Billy },
    { L"Extra Palette 2", 0xd3c40, 0xd3c60 },
    { L"Extra Palette 3", 0xd3c60, 0xd3c80 },
    { L"Extra Palette 4", 0xd3c80, 0xd3ca0 },
    { L"Extra Palette 5", 0xd3ca0, 0xd3cc0 },
    { L"Extra Palette 6", 0xd3cc0, 0xd3ce0 },
    { L"Extra Palette 7", 0xd3ce0, 0xd3d00 },
    { L"Extra Palette 8", 0xd3d00, 0xd3d20 },
    { L"Extra Palette 9", 0xd3d20, 0xd3d40 },
    { L"Extra Palette 10", 0xd3d40, 0xd3d60 },
    { L"Extra Palette 11", 0xd3d60, 0xd3d80, indexRBFFSSprites_Billy },
    { L"Burn Palette", 0xd3d80, 0xd3da0, indexRBFFSSprites_Billy },
    { L"Purple Burn Palette", 0xd3da0, 0xd3dc0, indexRBFFSSprites_Billy },
    { L"Electricity Palette", 0xd3dc0, 0xd3de0, indexRBFFSSprites_Billy },
    { L"Break Shot/Background Palette 2", 0xd3de0, 0xd3e00, indexRBFFSSprites_Billy },
};

const sGame_PaletteDataset RBFF2_A_BILLY_PALETTES_P2[] =
{
    { L"Main Palette", 0xd3e00, 0xd3e20, indexRBFFSSprites_Billy },
    { L"Background Palette", 0xd3e20, 0xd3e40, indexRBFFSSprites_Billy },
    { L"Extra Palette 2", 0xd3e40, 0xd3e60 },
    { L"Extra Palette 3", 0xd3e60, 0xd3e80 },
    { L"Extra Palette 4", 0xd3e80, 0xd3ea0 },
    { L"Extra Palette 5", 0xd3ea0, 0xd3ec0 },
    { L"Extra Palette 6", 0xd3ec0, 0xd3ee0 },
    { L"Extra Palette 7", 0xd3ee0, 0xd3f00 },
    { L"Extra Palette 8", 0xd3f00, 0xd3f20 },
    { L"Extra Palette 9", 0xd3f20, 0xd3f40 },
    { L"Extra Palette 10", 0xd3f40, 0xd3f60 },
    { L"Extra Palette 11", 0xd3f60, 0xd3f80, indexRBFFSSprites_Billy },
    { L"Burn Palette", 0xd3f80, 0xd3fa0, indexRBFFSSprites_Billy },
    { L"Purple Burn Palette", 0xd3fa0, 0xd3fc0, indexRBFFSSprites_Billy },
    { L"Electricity Palette", 0xd3fc0, 0xd3fe0, indexRBFFSSprites_Billy },
    { L"Break Shot/Background Palette 2", 0xd3fe0, 0xd4000, indexRBFFSSprites_Billy },
};

const sGame_PaletteDataset RBFF2_A_CHENG_PALETTES_P1[] =
{
    { L"Main Palette", 0xd4000, 0xd4020, indexRBFFSSprites_Cheng },
    { L"Background Palette", 0xd4020, 0xd4040, indexRBFFSSprites_Cheng },
    { L"Extra Palette 2", 0xd4040, 0xd4060 },
    { L"Extra Palette 3", 0xd4060, 0xd4080 },
    { L"Extra Palette 4", 0xd4080, 0xd40a0 },
    { L"Extra Palette 5", 0xd40a0, 0xd40c0 },
    { L"Extra Palette 6", 0xd40c0, 0xd40e0 },
    { L"Extra Palette 7", 0xd40e0, 0xd4100 },
    { L"Extra Palette 8", 0xd4100, 0xd4120 },
    { L"Extra Palette 9", 0xd4120, 0xd4140 },
    { L"Extra Palette 10", 0xd4140, 0xd4160 },
    { L"Extra Palette 11", 0xd4160, 0xd4180, indexRBFFSSprites_Cheng },
    { L"Burn Palette", 0xd4180, 0xd41a0, indexRBFFSSprites_Cheng },
    { L"Purple Burn Palette", 0xd41a0, 0xd41c0, indexRBFFSSprites_Cheng },
    { L"Electricity Palette", 0xd41c0, 0xd41e0, indexRBFFSSprites_Cheng },
    { L"Break Shot/Background Palette 2", 0xd41e0, 0xd4200, indexRBFFSSprites_Cheng },
};

const sGame_PaletteDataset RBFF2_A_CHENG_PALETTES_P2[] =
{
    { L"Main Palette", 0xd4200, 0xd4220, indexRBFFSSprites_Cheng },
    { L"Background Palette", 0xd4220, 0xd4240, indexRBFFSSprites_Cheng },
    { L"Extra Palette 2", 0xd4240, 0xd4260 },
    { L"Extra Palette 3", 0xd4260, 0xd4280 },
    { L"Extra Palette 4", 0xd4280, 0xd42a0 },
    { L"Extra Palette 5", 0xd42a0, 0xd42c0 },
    { L"Extra Palette 6", 0xd42c0, 0xd42e0 },
    { L"Extra Palette 7", 0xd42e0, 0xd4300 },
    { L"Extra Palette 8", 0xd4300, 0xd4320 },
    { L"Extra Palette 9", 0xd4320, 0xd4340 },
    { L"Extra Palette 10", 0xd4340, 0xd4360 },
    { L"Extra Palette 11", 0xd4360, 0xd4380, indexRBFFSSprites_Cheng },
    { L"Burn Palette", 0xd4380, 0xd43a0, indexRBFFSSprites_Cheng },
    { L"Purple Burn Palette", 0xd43a0, 0xd43c0, indexRBFFSSprites_Cheng },
    { L"Electricity Palette", 0xd43c0, 0xd43e0, indexRBFFSSprites_Cheng },
    { L"Break Shot/Background Palette 2", 0xd43e0, 0xd4400, indexRBFFSSprites_Cheng },
};

const sGame_PaletteDataset RBFF2_A_TUNG_PALETTES_P1[] =
{
    { L"Main Palette", 0xd4400, 0xd4420, indexRBFFSSprites_Tung },
    { L"Background Palette", 0xd4420, 0xd4440, indexRBFFSSprites_Tung },
    { L"Extra Palette 2", 0xd4440, 0xd4460 },
    { L"Extra Palette 3", 0xd4460, 0xd4480, indexRBFFSSprites_Tung },
    { L"Extra Palette 4", 0xd4480, 0xd44a0, indexRBFFSSprites_Tung },
    { L"Extra Palette 5", 0xd44a0, 0xd44c0 },
    { L"Extra Palette 6", 0xd44c0, 0xd44e0 },
    { L"Extra Palette 7", 0xd44e0, 0xd4500 },
    { L"Extra Palette 8", 0xd4500, 0xd4520 },
    { L"Extra Palette 9", 0xd4520, 0xd4540 },
    { L"Extra Palette 10", 0xd4540, 0xd4560 },
    { L"Extra Palette 11", 0xd4560, 0xd4580, indexRBFFSSprites_Tung },
    { L"Burn Palette", 0xd4580, 0xd45a0, indexRBFFSSprites_Tung },
    { L"Purple Burn Palette", 0xd45a0, 0xd45c0, indexRBFFSSprites_Tung },
    { L"Electricity Palette", 0xd45c0, 0xd45e0, indexRBFFSSprites_Tung },
    { L"Break Shot/Background Palette 2", 0xd45e0, 0xd4600, indexRBFFSSprites_Tung },
};

const sGame_PaletteDataset RBFF2_A_TUNG_PALETTES_P2[] =
{
    { L"Main Palette", 0xd4600, 0xd4620, indexRBFFSSprites_Tung },
    { L"Background Palette", 0xd4620, 0xd4640, indexRBFFSSprites_Tung },
    { L"Extra Palette 2", 0xd4640, 0xd4660 },
    { L"Extra Palette 3", 0xd4660, 0xd4680, indexRBFFSSprites_Tung },
    { L"Extra Palette 4", 0xd4680, 0xd46a0, indexRBFFSSprites_Tung },
    { L"Extra Palette 5", 0xd46a0, 0xd46c0 },
    { L"Extra Palette 6", 0xd46c0, 0xd46e0 },
    { L"Extra Palette 7", 0xd46e0, 0xd4700 },
    { L"Extra Palette 8", 0xd4700, 0xd4720 },
    { L"Extra Palette 9", 0xd4720, 0xd4740 },
    { L"Extra Palette 10", 0xd4740, 0xd4760 },
    { L"Extra Palette 11", 0xd4760, 0xd4780, indexRBFFSSprites_Tung },
    { L"Burn Palette", 0xd4780, 0xd47a0, indexRBFFSSprites_Tung },
    { L"Purple Burn Palette", 0xd47a0, 0xd47c0, indexRBFFSSprites_Tung },
    { L"Electricity Palette", 0xd47c0, 0xd47e0, indexRBFFSSprites_Tung },
    { L"Break Shot/Background Palette 2", 0xd47e0, 0xd4800, indexRBFFSSprites_Tung },
};

const sGame_PaletteDataset RBFF2_A_LAURENCE_PALETTES_P1[] =
{
    { L"Main Palette", 0xd4800, 0xd4820, indexRBFFSSprites_Laurence },
    { L"Background Palette", 0xd4820, 0xd4840, indexRBFFSSprites_Laurence },
    { L"Extra Palette 2", 0xd4840, 0xd4860 },
    { L"Extra Palette 3", 0xd4860, 0xd4880 },
    { L"Extra Palette 4", 0xd4880, 0xd48a0 },
    { L"Extra Palette 5", 0xd48a0, 0xd48c0 },
    { L"Extra Palette 6", 0xd48c0, 0xd48e0, indexRBFFSSprites_Laurence },
    { L"Extra Palette 7", 0xd48e0, 0xd4900 },
    { L"Extra Palette 8", 0xd4900, 0xd4920 },
    { L"Extra Palette 9", 0xd4920, 0xd4940 },
    { L"Extra Palette 10", 0xd4940, 0xd4960 },
    { L"Extra Palette 11", 0xd4960, 0xd4980, indexRBFFSSprites_Laurence },
    { L"Burn Palette", 0xd4980, 0xd49a0, indexRBFFSSprites_Laurence },
    { L"Purple Burn Palette", 0xd49a0, 0xd49c0, indexRBFFSSprites_Laurence },
    { L"Electricity Palette", 0xd49c0, 0xd49e0, indexRBFFSSprites_Laurence },
    { L"Break Shot/Background Palette 2", 0xd49e0, 0xd4a00, indexRBFFSSprites_Laurence },
};

const sGame_PaletteDataset RBFF2_A_LAURENCE_PALETTES_P2[] =
{
    { L"Main Palette", 0xd4a00, 0xd4a20, indexRBFFSSprites_Laurence },
    { L"Background Palette", 0xd4a20, 0xd4a40, indexRBFFSSprites_Laurence },
    { L"Extra Palette 2", 0xd4a40, 0xd4a60 },
    { L"Extra Palette 3", 0xd4a60, 0xd4a80 },
    { L"Extra Palette 4", 0xd4a80, 0xd4aa0 },
    { L"Extra Palette 5", 0xd4aa0, 0xd4ac0 },
    { L"Extra Palette 6", 0xd4ac0, 0xd4ae0, indexRBFFSSprites_Laurence },
    { L"Extra Palette 7", 0xd4ae0, 0xd4b00 },
    { L"Extra Palette 8", 0xd4b00, 0xd4b20 },
    { L"Extra Palette 9", 0xd4b20, 0xd4b40 },
    { L"Extra Palette 10", 0xd4b40, 0xd4b60 },
    { L"Extra Palette 11", 0xd4b60, 0xd4b80, indexRBFFSSprites_Laurence },
    { L"Burn Palette", 0xd4b80, 0xd4ba0, indexRBFFSSprites_Laurence },
    { L"Purple Burn Palette", 0xd4ba0, 0xd4bc0, indexRBFFSSprites_Laurence },
    { L"Electricity Palette", 0xd4bc0, 0xd4be0, indexRBFFSSprites_Laurence },
    { L"Break Shot/Background Palette 2", 0xd4be0, 0xd4c00, indexRBFFSSprites_Laurence },
};

const sGame_PaletteDataset RBFF2_A_KRAUSER_PALETTES_P1[] =
{
    { L"Main Palette", 0xd4c00, 0xd4c20, indexRBFFSSprites_Krauser },
    { L"Background Palette", 0xd4c20, 0xd4c40, indexRBFFSSprites_Krauser },
    { L"Extra Palette 2", 0xd4c40, 0xd4c60 },
    { L"Extra Palette 3", 0xd4c60, 0xd4c80 },
    { L"Extra Palette 4", 0xd4c80, 0xd4ca0 },
    { L"Extra Palette 5", 0xd4ca0, 0xd4cc0 },
    { L"Extra Palette 6", 0xd4cc0, 0xd4ce0 },
    { L"Extra Palette 7", 0xd4ce0, 0xd4d00, indexRBFFSSprites_Krauser },
    { L"Extra Palette 8", 0xd4d00, 0xd4d20 },
    { L"Extra Palette 9", 0xd4d20, 0xd4d40 },
    { L"Extra Palette 10", 0xd4d40, 0xd4d60 },
    { L"Extra Palette 11", 0xd4d60, 0xd4d80, indexRBFFSSprites_Krauser },
    { L"Burn Palette", 0xd4d80, 0xd4da0, indexRBFFSSprites_Krauser },
    { L"Purple Burn Palette", 0xd4da0, 0xd4dc0, indexRBFFSSprites_Krauser },
    { L"Electricity Palette", 0xd4dc0, 0xd4de0, indexRBFFSSprites_Krauser },
    { L"Break Shot/Background Palette 2", 0xd4de0, 0xd4e00, indexRBFFSSprites_Krauser },
};

const sGame_PaletteDataset RBFF2_A_KRAUSER_PALETTES_P2[] =
{
    { L"Main Palette", 0xd4e00, 0xd4e20, indexRBFFSSprites_Krauser },
    { L"Background Palette", 0xd4e20, 0xd4e40, indexRBFFSSprites_Krauser },
    { L"Extra Palette 2", 0xd4e40, 0xd4e60 },
    { L"Extra Palette 3", 0xd4e60, 0xd4e80 },
    { L"Extra Palette 4", 0xd4e80, 0xd4ea0 },
    { L"Extra Palette 5", 0xd4ea0, 0xd4ec0 },
    { L"Extra Palette 6", 0xd4ec0, 0xd4ee0 },
    { L"Extra Palette 7", 0xd4ee0, 0xd4f00, indexRBFFSSprites_Krauser },
    { L"Extra Palette 8", 0xd4f00, 0xd4f20 },
    { L"Extra Palette 9", 0xd4f20, 0xd4f40 },
    { L"Extra Palette 10", 0xd4f40, 0xd4f60 },
    { L"Extra Palette 11", 0xd4f60, 0xd4f80, indexRBFFSSprites_Krauser },
    { L"Burn Palette", 0xd4f80, 0xd4fa0, indexRBFFSSprites_Krauser },
    { L"Purple Burn Palette", 0xd4fa0, 0xd4fc0, indexRBFFSSprites_Krauser },
    { L"Electricity Palette", 0xd4fc0, 0xd4fe0, indexRBFFSSprites_Krauser },
    { L"Break Shot/Background Palette 2", 0xd4fe0, 0xd5000, indexRBFFSSprites_Krauser },
};

const sGame_PaletteDataset RBFF2_A_RICK_PALETTES_P1[] =
{
    { L"Main Palette", 0xd5000, 0xd5020, indexRBFF2Sprites_Rick },
    { L"Background Palette", 0xd5020, 0xd5040, indexRBFF2Sprites_Rick },
    { L"Extra Palette 2", 0xd5040, 0xd5060 },
    { L"Extra Palette 3", 0xd5060, 0xd5080 },
    { L"Extra Palette 4", 0xd5080, 0xd50a0 },
    { L"Extra Palette 5", 0xd50a0, 0xd50c0 },
    { L"Extra Palette 6", 0xd50c0, 0xd50e0 },
    { L"Extra Palette 7", 0xd50e0, 0xd5100 },
    { L"Extra Palette 8", 0xd5100, 0xd5120 },
    { L"Extra Palette 9", 0xd5120, 0xd5140 },
    { L"Extra Palette 10", 0xd5140, 0xd5160 },
    { L"Extra Palette 11", 0xd5160, 0xd5180, indexRBFF2Sprites_Rick },
    { L"Burn Palette", 0xd5180, 0xd51a0, indexRBFF2Sprites_Rick },
    { L"Purple Burn Palette", 0xd51a0, 0xd51c0, indexRBFF2Sprites_Rick },
    { L"Electricity Palette", 0xd51c0, 0xd51e0, indexRBFF2Sprites_Rick },
    { L"Break Shot/Background Palette 2", 0xd51e0, 0xd5200, indexRBFF2Sprites_Rick },
};

const sGame_PaletteDataset RBFF2_A_RICK_PALETTES_P2[] =
{
    { L"Main Palette", 0xd5200, 0xd5220, indexRBFF2Sprites_Rick },
    { L"Background Palette", 0xd5220, 0xd5240, indexRBFF2Sprites_Rick },
    { L"Extra Palette 2", 0xd5240, 0xd5260 },
    { L"Extra Palette 3", 0xd5260, 0xd5280 },
    { L"Extra Palette 4", 0xd5280, 0xd52a0 },
    { L"Extra Palette 5", 0xd52a0, 0xd52c0 },
    { L"Extra Palette 6", 0xd52c0, 0xd52e0 },
    { L"Extra Palette 7", 0xd52e0, 0xd5300 },
    { L"Extra Palette 8", 0xd5300, 0xd5320 },
    { L"Extra Palette 9", 0xd5320, 0xd5340 },
    { L"Extra Palette 10", 0xd5340, 0xd5360 },
    { L"Extra Palette 11", 0xd5360, 0xd5380, indexRBFF2Sprites_Rick },
    { L"Burn Palette", 0xd5380, 0xd53a0, indexRBFF2Sprites_Rick },
    { L"Purple Burn Palette", 0xd53a0, 0xd53c0, indexRBFF2Sprites_Rick },
    { L"Electricity Palette", 0xd53c0, 0xd53e0, indexRBFF2Sprites_Rick },
    { L"Break Shot/Background Palette 2", 0xd53e0, 0xd5400, indexRBFF2Sprites_Rick },
};

const sGame_PaletteDataset RBFF2_A_XIANGFEI_PALETTES_P1[] =
{
    { L"Main Palette", 0xd5400, 0xd5420, indexRBFF2Sprites_Xiangfei },
    { L"Background Palette", 0xd5420, 0xd5440, indexRBFF2Sprites_Xiangfei },
    { L"Extra Palette 2", 0xd5440, 0xd5460 },
    { L"Extra Palette 3", 0xd5460, 0xd5480 },
    { L"Extra Palette 4", 0xd5480, 0xd54a0, indexRBFF2Sprites_Xiangfei },
    { L"Extra Palette 5", 0xd54a0, 0xd54c0, indexRBFF2Sprites_Xiangfei },
    { L"Extra Palette 6", 0xd54c0, 0xd54e0 },
    { L"Extra Palette 7", 0xd54e0, 0xd5500 },
    { L"Extra Palette 8", 0xd5500, 0xd5520 },
    { L"Extra Palette 9", 0xd5520, 0xd5540 },
    { L"Extra Palette 10", 0xd5540, 0xd5560 },
    { L"Extra Palette 11", 0xd5560, 0xd5580, indexRBFF2Sprites_Xiangfei },
    { L"Burn Palette", 0xd5580, 0xd55a0, indexRBFF2Sprites_Xiangfei },
    { L"Purple Burn Palette", 0xd55a0, 0xd55c0, indexRBFF2Sprites_Xiangfei },
    { L"Electricity Palette", 0xd55c0, 0xd55e0, indexRBFF2Sprites_Xiangfei },
    { L"Break Shot/Background Palette 2", 0xd55e0, 0xd5600, indexRBFF2Sprites_Xiangfei },
};

const sGame_PaletteDataset RBFF2_A_XIANGFEI_PALETTES_P2[] =
{
    { L"Main Palette", 0xd5600, 0xd5620, indexRBFF2Sprites_Xiangfei },
    { L"Background Palette", 0xd5620, 0xd5640, indexRBFF2Sprites_Xiangfei },
    { L"Extra Palette 2", 0xd5640, 0xd5660 },
    { L"Extra Palette 3", 0xd5660, 0xd5680 },
    { L"Extra Palette 4", 0xd5680, 0xd56a0, indexRBFF2Sprites_Xiangfei },
    { L"Extra Palette 5", 0xd56a0, 0xd56c0, indexRBFF2Sprites_Xiangfei },
    { L"Extra Palette 6", 0xd56c0, 0xd56e0 },
    { L"Extra Palette 7", 0xd56e0, 0xd5700 },
    { L"Extra Palette 8", 0xd5700, 0xd5720 },
    { L"Extra Palette 9", 0xd5720, 0xd5740 },
    { L"Extra Palette 10", 0xd5740, 0xd5760 },
    { L"Extra Palette 11", 0xd5760, 0xd5780, indexRBFF2Sprites_Xiangfei },
    { L"Burn Palette", 0xd5780, 0xd57a0, indexRBFF2Sprites_Xiangfei },
    { L"Purple Burn Palette", 0xd57a0, 0xd57c0, indexRBFF2Sprites_Xiangfei },
    { L"Electricity Palette", 0xd57c0, 0xd57e0, indexRBFF2Sprites_Xiangfei },
    { L"Break Shot/Background Palette 2", 0xd57e0, 0xd5800, indexRBFF2Sprites_Xiangfei },
};

const sGame_PaletteDataset RBFF2_A_ALFRED_PALETTES_P1[] =
{
    { L"Main Palette", 0xd5800, 0xd5820, indexRBFF2Sprites_Alfred },
    { L"Background Palette", 0xd5820, 0xd5840, indexRBFF2Sprites_Alfred },
    { L"Extra Palette 2", 0xd5840, 0xd5860 },
    { L"Extra Palette 3", 0xd5860, 0xd5880 },
    { L"Extra Palette 4", 0xd5880, 0xd58a0 },
    { L"Extra Palette 5", 0xd58a0, 0xd58c0, indexRBFF2Sprites_Alfred },
    { L"Extra Palette 6", 0xd58c0, 0xd58e0 },
    { L"Extra Palette 7", 0xd58e0, 0xd5900 },
    { L"Extra Palette 8", 0xd5900, 0xd5920 },
    { L"Extra Palette 9", 0xd5920, 0xd5940 },
    { L"Extra Palette 10", 0xd5940, 0xd5960 },
    { L"Extra Palette 11", 0xd5960, 0xd5980, indexRBFF2Sprites_Alfred },
    { L"Burn Palette", 0xd5980, 0xd59a0, indexRBFF2Sprites_Alfred },
    { L"Purple Burn Palette", 0xd59a0, 0xd59c0, indexRBFF2Sprites_Alfred },
    { L"Electricity Palette", 0xd59c0, 0xd59e0, indexRBFF2Sprites_Alfred },
    { L"Break Shot/Background Palette 2", 0xd59e0, 0xd5a00, indexRBFF2Sprites_Alfred },
};

const sGame_PaletteDataset RBFF2_A_ALFRED_PALETTES_P2[] =
{
    { L"Main Palette", 0xd5a00, 0xd5a20, indexRBFF2Sprites_Alfred },
    { L"Background Palette", 0xd5a20, 0xd5a40, indexRBFF2Sprites_Alfred },
    { L"Extra Palette 2", 0xd5a40, 0xd5a60 },
    { L"Extra Palette 3", 0xd5a60, 0xd5a80 },
    { L"Extra Palette 4", 0xd5a80, 0xd5aa0 },
    { L"Extra Palette 5", 0xd5aa0, 0xd5ac0, indexRBFF2Sprites_Alfred },
    { L"Extra Palette 6", 0xd5ac0, 0xd5ae0 },
    { L"Extra Palette 7", 0xd5ae0, 0xd5b00 },
    { L"Extra Palette 8", 0xd5b00, 0xd5b20 },
    { L"Extra Palette 9", 0xd5b20, 0xd5b40 },
    { L"Extra Palette 10", 0xd5b40, 0xd5b60 },
    { L"Extra Palette 11", 0xd5b60, 0xd5b80, indexRBFF2Sprites_Alfred },
    { L"Burn Palette", 0xd5b80, 0xd5ba0, indexRBFF2Sprites_Alfred },
    { L"Purple Burn Palette", 0xd5ba0, 0xd5bc0, indexRBFF2Sprites_Alfred },
    { L"Electricity Palette", 0xd5bc0, 0xd5be0, indexRBFF2Sprites_Alfred },
    { L"Break Shot/Background Palette 2", 0xd5be0, 0xd5c00, indexRBFF2Sprites_Alfred },
};

const sDescTreeNode RBFF2_A_TERRY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_TERRY_PALETTES_P1, ARRAYSIZE(RBFF2_A_TERRY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_TERRY_PALETTES_P2, ARRAYSIZE(RBFF2_A_TERRY_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_TERRY_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_TERRY_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_TERRY_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_TERRY_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_ANDY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_ANDY_PALETTES_P1, ARRAYSIZE(RBFF2_A_ANDY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_ANDY_PALETTES_P2, ARRAYSIZE(RBFF2_A_ANDY_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_ANDY_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_ANDY_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_ANDY_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_ANDY_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_JOE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_JOE_PALETTES_P1, ARRAYSIZE(RBFF2_A_JOE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_JOE_PALETTES_P2, ARRAYSIZE(RBFF2_A_JOE_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_JOE_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_JOE_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_JOE_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_JOE_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_MAI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_MAI_PALETTES_P1, ARRAYSIZE(RBFF2_A_MAI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_MAI_PALETTES_P2, ARRAYSIZE(RBFF2_A_MAI_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_MAI_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_MAI_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_MAI_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_MAI_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_GEESE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_GEESE_PALETTES_P1, ARRAYSIZE(RBFF2_A_GEESE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_GEESE_PALETTES_P2, ARRAYSIZE(RBFF2_A_GEESE_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_GEESE_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_GEESE_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_GEESE_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_GEESE_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_SOKAKU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_SOKAKU_PALETTES_P1, ARRAYSIZE(RBFF2_A_SOKAKU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_SOKAKU_PALETTES_P2, ARRAYSIZE(RBFF2_A_SOKAKU_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_SOKAKU_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_SOKAKU_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_SOKAKU_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_SOKAKU_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_BOB_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_BOB_PALETTES_P1, ARRAYSIZE(RBFF2_A_BOB_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_BOB_PALETTES_P2, ARRAYSIZE(RBFF2_A_BOB_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_BOB_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_BOB_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_BOB_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_BOB_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_HONFU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_HONFU_PALETTES_P1, ARRAYSIZE(RBFF2_A_HONFU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_HONFU_PALETTES_P2, ARRAYSIZE(RBFF2_A_HONFU_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_HONFU_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_HONFU_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_HONFU_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_HONFU_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_BLUEMARY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_BLUEMARY_PALETTES_P1, ARRAYSIZE(RBFF2_A_BLUEMARY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_BLUEMARY_PALETTES_P2, ARRAYSIZE(RBFF2_A_BLUEMARY_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_BLUEMARY_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_BLUEMARY_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_BLUEMARY_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_BLUEMARY_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_FRANCO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_FRANCO_PALETTES_P1, ARRAYSIZE(RBFF2_A_FRANCO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_FRANCO_PALETTES_P2, ARRAYSIZE(RBFF2_A_FRANCO_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_FRANCO_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_FRANCO_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_FRANCO_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_FRANCO_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_YAMAZAKI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_YAMAZAKI_PALETTES_P1, ARRAYSIZE(RBFF2_A_YAMAZAKI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_YAMAZAKI_PALETTES_P2, ARRAYSIZE(RBFF2_A_YAMAZAKI_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_YAMAZAKI_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_YAMAZAKI_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_YAMAZAKI_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_YAMAZAKI_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_CHONREI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONREI_PALETTES_P1, ARRAYSIZE(RBFF2_A_CHONREI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONREI_PALETTES_P2, ARRAYSIZE(RBFF2_A_CHONREI_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONREI_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_CHONREI_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONREI_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_CHONREI_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_CHONSHU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONSHU_PALETTES_P1, ARRAYSIZE(RBFF2_A_CHONSHU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONSHU_PALETTES_P2, ARRAYSIZE(RBFF2_A_CHONSHU_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONSHU_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_CHONSHU_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONSHU_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_CHONSHU_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_DUCKKING_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_DUCKKING_PALETTES_P1, ARRAYSIZE(RBFF2_A_DUCKKING_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_DUCKKING_PALETTES_P2, ARRAYSIZE(RBFF2_A_DUCKKING_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_DUCKKING_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_DUCKKING_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_DUCKKING_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_DUCKKING_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_KIM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_KIM_PALETTES_P1, ARRAYSIZE(RBFF2_A_KIM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_KIM_PALETTES_P2, ARRAYSIZE(RBFF2_A_KIM_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_KIM_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_KIM_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_KIM_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_KIM_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_BILLY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_BILLY_PALETTES_P1, ARRAYSIZE(RBFF2_A_BILLY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_BILLY_PALETTES_P2, ARRAYSIZE(RBFF2_A_BILLY_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_BILLY_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_BILLY_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_BILLY_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_BILLY_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_CHENG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHENG_PALETTES_P1, ARRAYSIZE(RBFF2_A_CHENG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHENG_PALETTES_P2, ARRAYSIZE(RBFF2_A_CHENG_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHENG_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_CHENG_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHENG_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_CHENG_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_TUNG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_TUNG_PALETTES_P1, ARRAYSIZE(RBFF2_A_TUNG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_TUNG_PALETTES_P2, ARRAYSIZE(RBFF2_A_TUNG_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_TUNG_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_TUNG_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_TUNG_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_TUNG_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_LAURENCE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_LAURENCE_PALETTES_P1, ARRAYSIZE(RBFF2_A_LAURENCE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_LAURENCE_PALETTES_P2, ARRAYSIZE(RBFF2_A_LAURENCE_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_LAURENCE_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_LAURENCE_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_LAURENCE_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_LAURENCE_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_KRAUSER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_KRAUSER_PALETTES_P1, ARRAYSIZE(RBFF2_A_KRAUSER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_KRAUSER_PALETTES_P2, ARRAYSIZE(RBFF2_A_KRAUSER_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_KRAUSER_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_KRAUSER_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_KRAUSER_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_KRAUSER_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_RICK_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_RICK_PALETTES_P1, ARRAYSIZE(RBFF2_A_RICK_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_RICK_PALETTES_P2, ARRAYSIZE(RBFF2_A_RICK_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_RICK_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_RICK_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_RICK_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_RICK_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_XIANGFEI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_XIANGFEI_PALETTES_P1, ARRAYSIZE(RBFF2_A_XIANGFEI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_XIANGFEI_PALETTES_P2, ARRAYSIZE(RBFF2_A_XIANGFEI_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_XIANGFEI_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_XIANGFEI_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_XIANGFEI_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_XIANGFEI_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_ALFRED_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RBFF2_A_ALFRED_PALETTES_P1, ARRAYSIZE(RBFF2_A_ALFRED_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RBFF2_A_ALFRED_PALETTES_P2, ARRAYSIZE(RBFF2_A_ALFRED_PALETTES_P2) },
    { L"P1 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_ALFRED_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_ALFRED_PORTRAIT_PALETTES_P1) },
    { L"P2 Portraits", DESC_NODETYPE_TREE, (void*)RBFF2_A_ALFRED_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_ALFRED_PORTRAIT_PALETTES_P2) },
};

const sDescTreeNode RBFF2_A_UNITS[] =
{
    { L"Terry", DESC_NODETYPE_TREE, (void*)RBFF2_A_TERRY_COLLECTION, ARRAYSIZE(RBFF2_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)RBFF2_A_ANDY_COLLECTION, ARRAYSIZE(RBFF2_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)RBFF2_A_JOE_COLLECTION, ARRAYSIZE(RBFF2_A_JOE_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)RBFF2_A_MAI_COLLECTION, ARRAYSIZE(RBFF2_A_MAI_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)RBFF2_A_GEESE_COLLECTION, ARRAYSIZE(RBFF2_A_GEESE_COLLECTION) },
    { L"Sokaku", DESC_NODETYPE_TREE, (void*)RBFF2_A_SOKAKU_COLLECTION, ARRAYSIZE(RBFF2_A_SOKAKU_COLLECTION) },
    { L"Bob", DESC_NODETYPE_TREE, (void*)RBFF2_A_BOB_COLLECTION, ARRAYSIZE(RBFF2_A_BOB_COLLECTION) },
    { L"Hon Fu", DESC_NODETYPE_TREE, (void*)RBFF2_A_HONFU_COLLECTION, ARRAYSIZE(RBFF2_A_HONFU_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)RBFF2_A_BLUEMARY_COLLECTION, ARRAYSIZE(RBFF2_A_BLUEMARY_COLLECTION) },
    { L"Franco", DESC_NODETYPE_TREE, (void*)RBFF2_A_FRANCO_COLLECTION, ARRAYSIZE(RBFF2_A_FRANCO_COLLECTION) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)RBFF2_A_YAMAZAKI_COLLECTION, ARRAYSIZE(RBFF2_A_YAMAZAKI_COLLECTION) },
    { L"Chonrei", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONREI_COLLECTION, ARRAYSIZE(RBFF2_A_CHONREI_COLLECTION) },
    { L"Chonshu", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHONSHU_COLLECTION, ARRAYSIZE(RBFF2_A_CHONSHU_COLLECTION) },
    { L"Duck King", DESC_NODETYPE_TREE, (void*)RBFF2_A_DUCKKING_COLLECTION, ARRAYSIZE(RBFF2_A_DUCKKING_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)RBFF2_A_KIM_COLLECTION, ARRAYSIZE(RBFF2_A_KIM_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)RBFF2_A_BILLY_COLLECTION, ARRAYSIZE(RBFF2_A_BILLY_COLLECTION) },
    { L"Cheng", DESC_NODETYPE_TREE, (void*)RBFF2_A_CHENG_COLLECTION, ARRAYSIZE(RBFF2_A_CHENG_COLLECTION) },
    { L"Tung", DESC_NODETYPE_TREE, (void*)RBFF2_A_TUNG_COLLECTION, ARRAYSIZE(RBFF2_A_TUNG_COLLECTION) },
    { L"Laurence", DESC_NODETYPE_TREE, (void*)RBFF2_A_LAURENCE_COLLECTION, ARRAYSIZE(RBFF2_A_LAURENCE_COLLECTION) },
    { L"Krauser", DESC_NODETYPE_TREE, (void*)RBFF2_A_KRAUSER_COLLECTION, ARRAYSIZE(RBFF2_A_KRAUSER_COLLECTION) },
    { L"Rick", DESC_NODETYPE_TREE, (void*)RBFF2_A_RICK_COLLECTION, ARRAYSIZE(RBFF2_A_RICK_COLLECTION) },
    { L"XiangFei", DESC_NODETYPE_TREE, (void*)RBFF2_A_XIANGFEI_COLLECTION, ARRAYSIZE(RBFF2_A_XIANGFEI_COLLECTION) },
    { L"Alfred", DESC_NODETYPE_TREE, (void*)RBFF2_A_ALFRED_COLLECTION, ARRAYSIZE(RBFF2_A_ALFRED_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)RBFF2_A_BONUS_COLLECTION, ARRAYSIZE(RBFF2_A_BONUS_COLLECTION) },
};

#pragma endregion

constexpr auto RBFF2_A_NUMUNIT = ARRAYSIZE(RBFF2_A_UNITS);

#define RBFF2_A_EXTRALOC RBFF2_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef RBFF2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

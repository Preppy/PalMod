#pragma once

const std::vector<uint16_t> CVS1_A_IMGIDS_USED =
{
    indexCVS2Sprites_Akuma,
    indexCVS2Sprites_Athena,
    indexCVS2Sprites_Balrog,
    indexCVS2Sprites_Benimaru,
    indexCVS2Sprites_Blanka,
    indexCVS2Sprites_Cammy,
    indexCVS2Sprites_Chang,
    indexCVS2Sprites_ChunLi,
    indexCVS2Sprites_Dan,
    indexCVS2Sprites_Dhalsim,
    indexCVS2Sprites_EHonda,
    indexCVS2Sprites_Eagle,
    indexCVS2Sprites_EvilRyu,
    indexCVS2Sprites_Geese,
    indexCVS2Sprites_GodRugal,
    indexCVS2Sprites_Guile,
    indexCVS2Sprites_Hibiki,
    indexCVS2Sprites_Iori,
    indexCVS2Sprites_Joe,
    indexCVS2Sprites_Ken,
    indexCVS2Sprites_Kim,
    indexCVS2Sprites_King,
    indexCVS2Sprites_Kyo,
    indexCVS2Sprites_Kyosuke,
    indexCVS2Sprites_MBison,
    indexCVS2Sprites_Mai,
    indexCVS2Sprites_Maki,
    indexCVS2Sprites_Morrigan,
    indexCVS2Sprites_Nakoruru,
    indexCVS2Sprites_OrochiIori,
    indexCVS2Sprites_Raiden,
    indexCVS2Sprites_Rock,
    indexCVS2Sprites_Rolento,
    indexCVS2Sprites_Rugal,
    indexCVS2Sprites_Ryo,
    indexCVS2Sprites_Ryu,
    indexCVS2Sprites_RyuhakuTodoh,
    indexCVS2Sprites_RyujiYamazaki,
    indexCVS2Sprites_Sagat,
    indexCVS2Sprites_Sakura,
    indexCVS2Sprites_ShinAkuma,
    indexCVS2Sprites_Terry,
    indexCVS2Sprites_Vega,
    indexCVS2Sprites_Vice,
    indexCVS2Sprites_Yun,
    indexCVS2Sprites_Yuri,
    indexCVS2Sprites_Zangief,
    indexCVS2Sprites_Bonus,     // 0x30
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_LP[] =
{
    { L"Ryu LP", 0x8b6d00, 0x8b6d20, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu LP Extra 1", 0x8b6d20, 0x8b6d40, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu LP Extra 2", 0x8b6d40, 0x8b6d60, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu LP Extra 3", 0x8b6d60, 0x8b6d80, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu LP Extra 4", 0x8b6d80, 0x8b6da0, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_MP[] =
{
    { L"Ryu MP", 0x8b6da0, 0x8b6dc0, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu MP Extra 1", 0x8b6dc0, 0x8b6de0, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu MP Extra 2", 0x8b6de0, 0x8b6e00, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu MP Extra 3", 0x8b6e00, 0x8b6e20, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu MP Extra 4", 0x8b6e20, 0x8b6e40, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_HP[] =
{
    { L"Ryu HP", 0x8b6e40, 0x8b6e60, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu HP Extra 1", 0x8b6e60, 0x8b6e80, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu HP Extra 2", 0x8b6e80, 0x8b6ea0, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu HP Extra 3", 0x8b6ea0, 0x8b6ec0, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu HP Extra 4", 0x8b6ec0, 0x8b6ee0, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_LK[] =
{
    { L"Ryu LK", 0x8b6ee0, 0x8b6f00, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu LK Extra 1", 0x8b6f00, 0x8b6f20, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu LK Extra 2", 0x8b6f20, 0x8b6f40, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu LK Extra 3", 0x8b6f40, 0x8b6f60, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu LK Extra 4", 0x8b6f60, 0x8b6f80, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_MK[] =
{
    { L"Ryu MK", 0x8b6f80, 0x8b6fa0, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu MK Extra 1", 0x8b6fa0, 0x8b6fc0, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu MK Extra 2", 0x8b6fc0, 0x8b6fe0, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu MK Extra 3", 0x8b6fe0, 0x8b7000, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu MK Extra 4", 0x8b7000, 0x8b7020, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_HK[] =
{
    { L"Ryu HK", 0x8b7020, 0x8b7040, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu HK Extra 1", 0x8b7040, 0x8b7060, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu HK Extra 2", 0x8b7060, 0x8b7080, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu HK Extra 3", 0x8b7080, 0x8b70a0, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu HK Extra 4", 0x8b70a0, 0x8b70c0, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_3P[] =
{
    { L"Ryu 3P", 0x8b70c0, 0x8b70e0, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu 3P Extra 1", 0x8b70e0, 0x8b7100, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu 3P Extra 2", 0x8b7100, 0x8b7120, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu 3P Extra 3", 0x8b7120, 0x8b7140, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu 3P Extra 4", 0x8b7140, 0x8b7160, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYU_PALETTES_3K[] =
{
    { L"Ryu 3K", 0x8b7160, 0x8b7180, indexCVS2Sprites_Ryu, 0x00 },
    { L"Ryu 3K Extra 1", 0x8b7180, 0x8b71a0, indexCVS2Sprites_Ryu, 0x01 },
    { L"Ryu 3K Extra 2", 0x8b71a0, 0x8b71c0, indexCVS2Sprites_Ryu, 0x02 },
    { L"Ryu 3K Extra 3", 0x8b71c0, 0x8b71e0, indexCVS2Sprites_Ryu, 0x03 },
    { L"Ryu 3K Extra 4", 0x8b71e0, 0x8b7200, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_LP[] =
{
    { L"Ken LP", 0x96f6e0, 0x96f700, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken LP Extra 1", 0x96f700, 0x96f720, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken LP Extra 2", 0x96f720, 0x96f740 },
    { L"Ken LP Extra 3", 0x96f740, 0x96f760, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken LP Extra 4", 0x96f760, 0x96f780, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_MP[] =
{
    { L"Ken MP", 0x96f780, 0x96f7a0, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken MP Extra 1", 0x96f7a0, 0x96f7c0, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken MP Extra 2", 0x96f7c0, 0x96f7e0 },
    { L"Ken MP Extra 3", 0x96f7e0, 0x96f800, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken MP Extra 4", 0x96f800, 0x96f820, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_HP[] =
{
    { L"Ken HP", 0x96f820, 0x96f840, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken HP Extra 1", 0x96f840, 0x96f860, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken HP Extra 2", 0x96f860, 0x96f880 },
    { L"Ken HP Extra 3", 0x96f880, 0x96f8a0, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken HP Extra 4", 0x96f8a0, 0x96f8c0, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_LK[] =
{
    { L"Ken LK", 0x96f8c0, 0x96f8e0, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken LK Extra 1", 0x96f8e0, 0x96f900, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken LK Extra 2", 0x96f900, 0x96f920 },
    { L"Ken LK Extra 3", 0x96f920, 0x96f940, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken LK Extra 4", 0x96f940, 0x96f960, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_MK[] =
{
    { L"Ken MK", 0x96f960, 0x96f980, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken MK Extra 1", 0x96f980, 0x96f9a0, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken MK Extra 2", 0x96f9a0, 0x96f9c0 },
    { L"Ken MK Extra 3", 0x96f9c0, 0x96f9e0, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken MK Extra 4", 0x96f9e0, 0x96fa00, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_HK[] =
{
    { L"Ken HK", 0x96fa00, 0x96fa20, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken HK Extra 1", 0x96fa20, 0x96fa40, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken HK Extra 2", 0x96fa40, 0x96fa60 },
    { L"Ken HK Extra 3", 0x96fa60, 0x96fa80, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken HK Extra 4", 0x96fa80, 0x96faa0, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_3P[] =
{
    { L"Ken 3P", 0x96faa0, 0x96fac0, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken 3P Extra 1", 0x96fac0, 0x96fae0, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken 3P Extra 2", 0x96fae0, 0x96fb00 },
    { L"Ken 3P Extra 3", 0x96fb00, 0x96fb20, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken 3P Extra 4", 0x96fb20, 0x96fb40, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KEN_PALETTES_3K[] =
{
    { L"Ken 3K", 0x96fb40, 0x96fb60, indexCVS2Sprites_Ken, 0x00 },
    { L"Ken 3K Extra 1", 0x96fb60, 0x96fb80, indexCVS2Sprites_Ken, 0x02 },
    { L"Ken 3K Extra 2", 0x96fb80, 0x96fba0 },
    { L"Ken 3K Extra 3", 0x96fba0, 0x96fbc0, indexCVS2Sprites_Ken, 0x03 },
    { L"Ken 3K Extra 4", 0x96fbc0, 0x96fbe0, indexCVS2Sprites_Ken, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_LP[] =
{
    { L"Chun-Li LP", 0x9f2820, 0x9f2840, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li LP Extra 1", 0x9f2840, 0x9f2860, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li LP Extra 2", 0x9f2860, 0x9f2880 },
    { L"Chun-Li LP Extra 3", 0x9f2880, 0x9f28a0, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li LP Extra 4", 0x9f28a0, 0x9f28c0 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_MP[] =
{
    { L"Chun-Li MP", 0x9f28c0, 0x9f28e0, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li MP Extra 1", 0x9f28e0, 0x9f2900, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li MP Extra 2", 0x9f2900, 0x9f2920 },
    { L"Chun-Li MP Extra 3", 0x9f2920, 0x9f2940, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li MP Extra 4", 0x9f2940, 0x9f2960 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_HP[] =
{
    { L"Chun-Li HP", 0x9f2960, 0x9f2980, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li HP Extra 1", 0x9f2980, 0x9f29a0, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li HP Extra 2", 0x9f29a0, 0x9f29c0 },
    { L"Chun-Li HP Extra 3", 0x9f29c0, 0x9f29e0, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li HP Extra 4", 0x9f29e0, 0x9f2a00 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_LK[] =
{
    { L"Chun-Li LK", 0x9f2a00, 0x9f2a20, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li LK Extra 1", 0x9f2a20, 0x9f2a40, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li LK Extra 2", 0x9f2a40, 0x9f2a60 },
    { L"Chun-Li LK Extra 3", 0x9f2a60, 0x9f2a80, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li LK Extra 4", 0x9f2a80, 0x9f2aa0 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_MK[] =
{
    { L"Chun-Li MK", 0x9f2aa0, 0x9f2ac0, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li MK Extra 1", 0x9f2ac0, 0x9f2ae0, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li MK Extra 2", 0x9f2ae0, 0x9f2b00 },
    { L"Chun-Li MK Extra 3", 0x9f2b00, 0x9f2b20, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li MK Extra 4", 0x9f2b20, 0x9f2b40 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_HK[] =
{
    { L"Chun-Li HK", 0x9f2b40, 0x9f2b60, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li HK Extra 1", 0x9f2b60, 0x9f2b80, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li HK Extra 2", 0x9f2b80, 0x9f2ba0 },
    { L"Chun-Li HK Extra 3", 0x9f2ba0, 0x9f2bc0, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li HK Extra 4", 0x9f2bc0, 0x9f2be0 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_3P[] =
{
    { L"Chun-Li 3P", 0x9f2be0, 0x9f2c00, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li 3P Extra 1", 0x9f2c00, 0x9f2c20, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li 3P Extra 2", 0x9f2c20, 0x9f2c40 },
    { L"Chun-Li 3P Extra 3", 0x9f2c40, 0x9f2c60, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li 3P Extra 4", 0x9f2c60, 0x9f2c80 },
};

const sGame_PaletteDataset CVS1_A_CHUNLI_PALETTES_3K[] =
{
    { L"Chun-Li 3K", 0x9f2c80, 0x9f2ca0, indexCVS2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun-Li 3K Extra 1", 0x9f2ca0, 0x9f2cc0, indexCVS2Sprites_ChunLi, 0x11 },
    { L"Chun-Li 3K Extra 2", 0x9f2cc0, 0x9f2ce0 },
    { L"Chun-Li 3K Extra 3", 0x9f2ce0, 0x9f2d00, indexCVS2Sprites_ChunLi, 0x03 },
    { L"Chun-Li 3K Extra 4", 0x9f2d00, 0x9f2d20 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_LP[] =
{
    { L"Guile LP", 0xa8c3c0, 0xa8c3e0, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile LP Extra 1", 0xa8c3e0, 0xa8c400, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile LP Extra 2", 0xa8c400, 0xa8c420, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile LP Extra 3", 0xa8c420, 0xa8c440, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile LP Extra 4", 0xa8c440, 0xa8c460, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_MP[] =
{
    { L"Guile MP", 0xa8c460, 0xa8c480, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile MP Extra 1", 0xa8c480, 0xa8c4a0, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile MP Extra 2", 0xa8c4a0, 0xa8c4c0, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile MP Extra 3", 0xa8c4c0, 0xa8c4e0, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile MP Extra 4", 0xa8c4e0, 0xa8c500, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_HP[] =
{
    { L"Guile HP", 0xa8c500, 0xa8c520, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile HP Extra 1", 0xa8c520, 0xa8c540, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile HP Extra 2", 0xa8c540, 0xa8c560, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile HP Extra 3", 0xa8c560, 0xa8c580, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile HP Extra 4", 0xa8c580, 0xa8c5a0, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_LK[] =
{
    { L"Guile LK", 0xa8c5a0, 0xa8c5c0, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile LK Extra 1", 0xa8c5c0, 0xa8c5e0, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile LK Extra 2", 0xa8c5e0, 0xa8c600, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile LK Extra 3", 0xa8c600, 0xa8c620, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile LK Extra 4", 0xa8c620, 0xa8c640, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_MK[] =
{
    { L"Guile MK", 0xa8c640, 0xa8c660, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile MK Extra 1", 0xa8c660, 0xa8c680, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile MK Extra 2", 0xa8c680, 0xa8c6a0, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile MK Extra 3", 0xa8c6a0, 0xa8c6c0, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile MK Extra 4", 0xa8c6c0, 0xa8c6e0, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_HK[] =
{
    { L"Guile HK", 0xa8c6e0, 0xa8c700, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile HK Extra 1", 0xa8c700, 0xa8c720, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile HK Extra 2", 0xa8c720, 0xa8c740, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile HK Extra 3", 0xa8c740, 0xa8c760, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile HK Extra 4", 0xa8c760, 0xa8c780, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_3P[] =
{
    { L"Guile 3P", 0xa8c780, 0xa8c7a0, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile 3P Extra 1", 0xa8c7a0, 0xa8c7c0, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile 3P Extra 2", 0xa8c7c0, 0xa8c7e0, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile 3P Extra 3", 0xa8c7e0, 0xa8c800, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile 3P Extra 4", 0xa8c800, 0xa8c820, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GUILE_PALETTES_3K[] =
{
    { L"Guile 3K", 0xa8c820, 0xa8c840, indexCVS2Sprites_Guile, 0x00 },
    { L"Guile 3K Extra 1", 0xa8c840, 0xa8c860, indexCVS2Sprites_Guile, 0x01 },
    { L"Guile 3K Extra 2", 0xa8c860, 0xa8c880, indexCVS2Sprites_Guile, 0x02 },
    { L"Guile 3K Extra 3", 0xa8c880, 0xa8c8a0, indexCVS2Sprites_Guile, 0x03 },
    { L"Guile 3K Extra 4", 0xa8c8a0, 0xa8c8c0, indexCVS2Sprites_Guile, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_LP[] =
{
    { L"Zangief LP", 0xb7c1e0, 0xb7c200, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief LP Extra 1", 0xb7c200, 0xb7c220, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief LP Extra 2", 0xb7c220, 0xb7c240, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief LP Extra 3", 0xb7c240, 0xb7c260, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief LP Extra 4", 0xb7c260, 0xb7c280, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_MP[] =
{
    { L"Zangief MP", 0xb7c280, 0xb7c2a0, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief MP Extra 1", 0xb7c2a0, 0xb7c2c0, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief MP Extra 2", 0xb7c2c0, 0xb7c2e0, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief MP Extra 3", 0xb7c2e0, 0xb7c300, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief MP Extra 4", 0xb7c300, 0xb7c320, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_HP[] =
{
    { L"Zangief HP", 0xb7c320, 0xb7c340, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief HP Extra 1", 0xb7c340, 0xb7c360, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief HP Extra 2", 0xb7c360, 0xb7c380, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief HP Extra 3", 0xb7c380, 0xb7c3a0, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief HP Extra 4", 0xb7c3a0, 0xb7c3c0, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_LK[] =
{
    { L"Zangief LK", 0xb7c3c0, 0xb7c3e0, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief LK Extra 1", 0xb7c3e0, 0xb7c400, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief LK Extra 2", 0xb7c400, 0xb7c420, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief LK Extra 3", 0xb7c420, 0xb7c440, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief LK Extra 4", 0xb7c440, 0xb7c460, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_MK[] =
{
    { L"Zangief MK", 0xb7c460, 0xb7c480, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief MK Extra 1", 0xb7c480, 0xb7c4a0, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief MK Extra 2", 0xb7c4a0, 0xb7c4c0, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief MK Extra 3", 0xb7c4c0, 0xb7c4e0, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief MK Extra 4", 0xb7c4e0, 0xb7c500, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_HK[] =
{
    { L"Zangief HK", 0xb7c500, 0xb7c520, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief HK Extra 1", 0xb7c520, 0xb7c540, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief HK Extra 2", 0xb7c540, 0xb7c560, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief HK Extra 3", 0xb7c560, 0xb7c580, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief HK Extra 4", 0xb7c580, 0xb7c5a0, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_3P[] =
{
    { L"Zangief 3P", 0xb7c5a0, 0xb7c5c0, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief 3P Extra 1", 0xb7c5c0, 0xb7c5e0, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief 3P Extra 2", 0xb7c5e0, 0xb7c600, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief 3P Extra 3", 0xb7c600, 0xb7c620, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief 3P Extra 4", 0xb7c620, 0xb7c640, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_ZANGIEF_PALETTES_3K[] =
{
    { L"Zangief 3K", 0xb7c640, 0xb7c660, indexCVS2Sprites_Zangief, 0x00 },
    { L"Zangief 3K Extra 1", 0xb7c660, 0xb7c680, indexCVS2Sprites_Zangief, 0x01 },
    { L"Zangief 3K Extra 2", 0xb7c680, 0xb7c6a0, indexCVS2Sprites_Zangief, 0x02 },
    { L"Zangief 3K Extra 3", 0xb7c6a0, 0xb7c6c0, indexCVS2Sprites_Zangief, 0x03 },
    { L"Zangief 3K Extra 4", 0xb7c6c0, 0xb7c6e0, indexCVS2Sprites_Zangief, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_LP[] =
{
    { L"Dhalsim LP", 0xc37180, 0xc371a0, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim LP Extra 1", 0xc371a0, 0xc371c0, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim LP Extra 2", 0xc371c0, 0xc371e0, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim LP Extra 3", 0xc371e0, 0xc37200, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim LP Extra 4", 0xc37200, 0xc37220, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_MP[] =
{
    { L"Dhalsim MP", 0xc37220, 0xc37240, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim MP Extra 1", 0xc37240, 0xc37260, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim MP Extra 2", 0xc37260, 0xc37280, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim MP Extra 3", 0xc37280, 0xc372a0, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim MP Extra 4", 0xc372a0, 0xc372c0, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_HP[] =
{
    { L"Dhalsim HP", 0xc372c0, 0xc372e0, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim HP Extra 1", 0xc372e0, 0xc37300, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim HP Extra 2", 0xc37300, 0xc37320, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim HP Extra 3", 0xc37320, 0xc37340, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim HP Extra 4", 0xc37340, 0xc37360, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_LK[] =
{
    { L"Dhalsim LK", 0xc37360, 0xc37380, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim LK Extra 1", 0xc37380, 0xc373a0, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim LK Extra 2", 0xc373a0, 0xc373c0, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim LK Extra 3", 0xc373c0, 0xc373e0, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim LK Extra 4", 0xc373e0, 0xc37400, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_MK[] =
{
    { L"Dhalsim MK", 0xc37400, 0xc37420, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim MK Extra 1", 0xc37420, 0xc37440, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim MK Extra 2", 0xc37440, 0xc37460, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim MK Extra 3", 0xc37460, 0xc37480, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim MK Extra 4", 0xc37480, 0xc374a0, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_HK[] =
{
    { L"Dhalsim HK", 0xc374a0, 0xc374c0, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim HK Extra 1", 0xc374c0, 0xc374e0, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim HK Extra 2", 0xc374e0, 0xc37500, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim HK Extra 3", 0xc37500, 0xc37520, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim HK Extra 4", 0xc37520, 0xc37540, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_3P[] =
{
    { L"Dhalsim 3P", 0xc37540, 0xc37560, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim 3P Extra 1", 0xc37560, 0xc37580, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim 3P Extra 2", 0xc37580, 0xc375a0, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim 3P Extra 3", 0xc375a0, 0xc375c0, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim 3P Extra 4", 0xc375c0, 0xc375e0, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DHALSIM_PALETTES_3K[] =
{
    { L"Dhalsim 3K", 0xc375e0, 0xc37600, indexCVS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim 3K Extra 1", 0xc37600, 0xc37620, indexCVS2Sprites_Dhalsim, 0x01 },
    { L"Dhalsim 3K Extra 2", 0xc37620, 0xc37640, indexCVS2Sprites_Dhalsim, 0x02 },
    { L"Dhalsim 3K Extra 3", 0xc37640, 0xc37660, indexCVS2Sprites_Dhalsim, 0x03 },
    { L"Dhalsim 3K Extra 4", 0xc37660, 0xc37680, indexCVS2Sprites_Dhalsim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_LP[] =
{
    { L"E. Honda LP", 0xcc16a0, 0xcc16c0, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda LP Extra 1", 0xcc16c0, 0xcc16e0, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda LP Extra 2", 0xcc16e0, 0xcc1700, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda LP Extra 3", 0xcc1700, 0xcc1720, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda LP Extra 4", 0xcc1720, 0xcc1740, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_MP[] =
{
    { L"E. Honda MP", 0xcc1740, 0xcc1760, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda MP Extra 1", 0xcc1760, 0xcc1780, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda MP Extra 2", 0xcc1780, 0xcc17a0, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda MP Extra 3", 0xcc17a0, 0xcc17c0, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda MP Extra 4", 0xcc17c0, 0xcc17e0, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_HP[] =
{
    { L"E. Honda HP", 0xcc17e0, 0xcc1800, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda HP Extra 1", 0xcc1800, 0xcc1820, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda HP Extra 2", 0xcc1820, 0xcc1840, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda HP Extra 3", 0xcc1840, 0xcc1860, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda HP Extra 4", 0xcc1860, 0xcc1880, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_LK[] =
{
    { L"E. Honda LK", 0xcc1880, 0xcc18a0, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda LK Extra 1", 0xcc18a0, 0xcc18c0, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda LK Extra 2", 0xcc18c0, 0xcc18e0, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda LK Extra 3", 0xcc18e0, 0xcc1900, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda LK Extra 4", 0xcc1900, 0xcc1920, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_MK[] =
{
    { L"E. Honda MK", 0xcc1920, 0xcc1940, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda MK Extra 1", 0xcc1940, 0xcc1960, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda MK Extra 2", 0xcc1960, 0xcc1980, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda MK Extra 3", 0xcc1980, 0xcc19a0, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda MK Extra 4", 0xcc19a0, 0xcc19c0, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_HK[] =
{
    { L"E. Honda HK", 0xcc19c0, 0xcc19e0, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda HK Extra 1", 0xcc19e0, 0xcc1a00, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda HK Extra 2", 0xcc1a00, 0xcc1a20, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda HK Extra 3", 0xcc1a20, 0xcc1a40, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda HK Extra 4", 0xcc1a40, 0xcc1a60, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_3P[] =
{
    { L"E. Honda 3P", 0xcc1a60, 0xcc1a80, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda 3P Extra 1", 0xcc1a80, 0xcc1aa0, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda 3P Extra 2", 0xcc1aa0, 0xcc1ac0, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda 3P Extra 3", 0xcc1ac0, 0xcc1ae0, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda 3P Extra 4", 0xcc1ae0, 0xcc1b00, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EHONDA_PALETTES_3K[] =
{
    { L"E. Honda 3K", 0xcc1b00, 0xcc1b20, indexCVS2Sprites_EHonda, 0x00 },
    { L"E. Honda 3K Extra 1", 0xcc1b20, 0xcc1b40, indexCVS2Sprites_EHonda, 0x01 },
    { L"E. Honda 3K Extra 2", 0xcc1b40, 0xcc1b60, indexCVS2Sprites_EHonda, 0x02 },
    { L"E. Honda 3K Extra 3", 0xcc1b60, 0xcc1b80, indexCVS2Sprites_EHonda, 0x03 },
    { L"E. Honda 3K Extra 4", 0xcc1b80, 0xcc1ba0, indexCVS2Sprites_EHonda, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_LP[] =
{
    { L"Blanka LP", 0xda7220, 0xda7240, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka LP Extra 1", 0xda7240, 0xda7260, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka LP Extra 2", 0xda7260, 0xda7280, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka LP Extra 3", 0xda7280, 0xda72a0, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka LP Extra 4", 0xda72a0, 0xda72c0, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_MP[] =
{
    { L"Blanka MP", 0xda72c0, 0xda72e0, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka MP Extra 1", 0xda72e0, 0xda7300, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka MP Extra 2", 0xda7300, 0xda7320, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka MP Extra 3", 0xda7320, 0xda7340, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka MP Extra 4", 0xda7340, 0xda7360, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_HP[] =
{
    { L"Blanka HP", 0xda7360, 0xda7380, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka HP Extra 1", 0xda7380, 0xda73a0, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka HP Extra 2", 0xda73a0, 0xda73c0, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka HP Extra 3", 0xda73c0, 0xda73e0, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka HP Extra 4", 0xda73e0, 0xda7400, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_LK[] =
{
    { L"Blanka LK", 0xda7400, 0xda7420, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka LK Extra 1", 0xda7420, 0xda7440, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka LK Extra 2", 0xda7440, 0xda7460, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka LK Extra 3", 0xda7460, 0xda7480, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka LK Extra 4", 0xda7480, 0xda74a0, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_MK[] =
{
    { L"Blanka MK", 0xda74a0, 0xda74c0, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka MK Extra 1", 0xda74c0, 0xda74e0, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka MK Extra 2", 0xda74e0, 0xda7500, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka MK Extra 3", 0xda7500, 0xda7520, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka MK Extra 4", 0xda7520, 0xda7540, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_HK[] =
{
    { L"Blanka HK", 0xda7540, 0xda7560, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka HK Extra 1", 0xda7560, 0xda7580, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka HK Extra 2", 0xda7580, 0xda75a0, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka HK Extra 3", 0xda75a0, 0xda75c0, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka HK Extra 4", 0xda75c0, 0xda75e0, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_3P[] =
{
    { L"Blanka 3P", 0xda75e0, 0xda7600, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka 3P Extra 1", 0xda7600, 0xda7620, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka 3P Extra 2", 0xda7620, 0xda7640, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka 3P Extra 3", 0xda7640, 0xda7660, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka 3P Extra 4", 0xda7660, 0xda7680, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BLANKA_PALETTES_3K[] =
{
    { L"Blanka 3K", 0xda7680, 0xda76a0, indexCVS2Sprites_Blanka, 0x00, &pairNext },
    { L"Blanka 3K Extra 1", 0xda76a0, 0xda76c0, indexCVS2Sprites_Blanka, 0x01 },
    { L"Blanka 3K Extra 2", 0xda76c0, 0xda76e0, indexCVS2Sprites_Blanka, 0x02 },
    { L"Blanka 3K Extra 3", 0xda76e0, 0xda7700, indexCVS2Sprites_Blanka, 0x03 },
    { L"Blanka 3K Extra 4", 0xda7700, 0xda7720, indexCVS2Sprites_Blanka, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_LP[] =
{
    { L"Claw LP", 0xe588a0, 0xe588c0, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw LP Extra 1", 0xe588c0, 0xe588e0, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw LP Extra 2", 0xe588e0, 0xe58900, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw LP Extra 3", 0xe58900, 0xe58920, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw LP Extra 4", 0xe58920, 0xe58940, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_MP[] =
{
    { L"Claw MP", 0xe58940, 0xe58960, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw MP Extra 1", 0xe58960, 0xe58980, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw MP Extra 2", 0xe58980, 0xe589a0, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw MP Extra 3", 0xe589a0, 0xe589c0, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw MP Extra 4", 0xe589c0, 0xe589e0, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_HP[] =
{
    { L"Claw HP", 0xe589e0, 0xe58a00, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw HP Extra 1", 0xe58a00, 0xe58a20, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw HP Extra 2", 0xe58a20, 0xe58a40, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw HP Extra 3", 0xe58a40, 0xe58a60, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw HP Extra 4", 0xe58a60, 0xe58a80, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_LK[] =
{
    { L"Claw LK", 0xe58a80, 0xe58aa0, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw LK Extra 1", 0xe58aa0, 0xe58ac0, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw LK Extra 2", 0xe58ac0, 0xe58ae0, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw LK Extra 3", 0xe58ae0, 0xe58b00, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw LK Extra 4", 0xe58b00, 0xe58b20, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_MK[] =
{
    { L"Claw MK", 0xe58b20, 0xe58b40, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw MK Extra 1", 0xe58b40, 0xe58b60, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw MK Extra 2", 0xe58b60, 0xe58b80, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw MK Extra 3", 0xe58b80, 0xe58ba0, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw MK Extra 4", 0xe58ba0, 0xe58bc0, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_HK[] =
{
    { L"Claw HK", 0xe58bc0, 0xe58be0, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw HK Extra 1", 0xe58be0, 0xe58c00, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw HK Extra 2", 0xe58c00, 0xe58c20, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw HK Extra 3", 0xe58c20, 0xe58c40, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw HK Extra 4", 0xe58c40, 0xe58c60, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_3P[] =
{
    { L"Claw 3P", 0xe58c60, 0xe58c80, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw 3P Extra 1", 0xe58c80, 0xe58ca0, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw 3P Extra 2", 0xe58ca0, 0xe58cc0, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw 3P Extra 3", 0xe58cc0, 0xe58ce0, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw 3P Extra 4", 0xe58ce0, 0xe58d00, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CLAW_PALETTES_3K[] =
{
    { L"Claw 3K", 0xe58d00, 0xe58d20, indexCVS2Sprites_Vega, 0x00 },
    { L"Claw 3K Extra 1", 0xe58d20, 0xe58d40, indexCVS2Sprites_Vega, 0x01 },
    { L"Claw 3K Extra 2", 0xe58d40, 0xe58d60, indexCVS2Sprites_Vega, 0x02 },
    { L"Claw 3K Extra 3", 0xe58d60, 0xe58d80, indexCVS2Sprites_Vega, 0x03 },
    { L"Claw 3K Extra 4", 0xe58d80, 0xe58da0, indexCVS2Sprites_Vega, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_LP[] =
{
    { L"Sagat LP", 0xed45c0, 0xed45e0, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat LP Extra 1", 0xed45e0, 0xed4600, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat LP Extra 2", 0xed4600, 0xed4620, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat LP Extra 3", 0xed4620, 0xed4640, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat LP Extra 4", 0xed4640, 0xed4660, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_MP[] =
{
    { L"Sagat MP", 0xed4660, 0xed4680, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat MP Extra 1", 0xed4680, 0xed46a0, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat MP Extra 2", 0xed46a0, 0xed46c0, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat MP Extra 3", 0xed46c0, 0xed46e0, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat MP Extra 4", 0xed46e0, 0xed4700, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_HP[] =
{
    { L"Sagat HP", 0xed4700, 0xed4720, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat HP Extra 1", 0xed4720, 0xed4740, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat HP Extra 2", 0xed4740, 0xed4760, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat HP Extra 3", 0xed4760, 0xed4780, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat HP Extra 4", 0xed4780, 0xed47a0, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_LK[] =
{
    { L"Sagat LK", 0xed47a0, 0xed47c0, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat LK Extra 1", 0xed47c0, 0xed47e0, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat LK Extra 2", 0xed47e0, 0xed4800, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat LK Extra 3", 0xed4800, 0xed4820, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat LK Extra 4", 0xed4820, 0xed4840, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_MK[] =
{
    { L"Sagat MK", 0xed4840, 0xed4860, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat MK Extra 1", 0xed4860, 0xed4880, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat MK Extra 2", 0xed4880, 0xed48a0, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat MK Extra 3", 0xed48a0, 0xed48c0, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat MK Extra 4", 0xed48c0, 0xed48e0, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_HK[] =
{
    { L"Sagat HK", 0xed48e0, 0xed4900, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat HK Extra 1", 0xed4900, 0xed4920, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat HK Extra 2", 0xed4920, 0xed4940, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat HK Extra 3", 0xed4940, 0xed4960, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat HK Extra 4", 0xed4960, 0xed4980, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_3P[] =
{
    { L"Sagat 3P", 0xed4980, 0xed49a0, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat 3P Extra 1", 0xed49a0, 0xed49c0, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat 3P Extra 2", 0xed49c0, 0xed49e0, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat 3P Extra 3", 0xed49e0, 0xed4a00, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat 3P Extra 4", 0xed4a00, 0xed4a20, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAGAT_PALETTES_3K[] =
{
    { L"Sagat 3K", 0xed4a20, 0xed4a40, indexCVS2Sprites_Sagat, 0x00 },
    { L"Sagat 3K Extra 1", 0xed4a40, 0xed4a60, indexCVS2Sprites_Sagat, 0x01 },
    { L"Sagat 3K Extra 2", 0xed4a60, 0xed4a80, indexCVS2Sprites_Sagat, 0x02 },
    { L"Sagat 3K Extra 3", 0xed4a80, 0xed4aa0, indexCVS2Sprites_Sagat, 0x03 },
    { L"Sagat 3K Extra 4", 0xed4aa0, 0xed4ac0, indexCVS2Sprites_Sagat, 0x04 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_LP[] =
{
    { L"Dictator LP", 0xf7c3e0, 0xf7c420, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator LP Extra 2", 0xf7c420, 0xf7c440, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator LP Extra 3", 0xf7c440, 0xf7c460 },
    { L"Dictator LP Extra 4", 0xf7c460, 0xf7c480 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_MP[] =
{
    { L"Dictator MP", 0xf7c480, 0xf7c4c0, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator MP Extra 2", 0xf7c4c0, 0xf7c4e0, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator MP Extra 3", 0xf7c4e0, 0xf7c500 },
    { L"Dictator MP Extra 4", 0xf7c500, 0xf7c520 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_HP[] =
{
    { L"Dictator HP", 0xf7c520, 0xf7c560, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator HP Extra 2", 0xf7c560, 0xf7c580, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator HP Extra 3", 0xf7c580, 0xf7c5a0 },
    { L"Dictator HP Extra 4", 0xf7c5a0, 0xf7c5c0 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_LK[] =
{
    { L"Dictator LK", 0xf7c5c0, 0xf7c600, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator LK Extra 2", 0xf7c600, 0xf7c620, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator LK Extra 3", 0xf7c620, 0xf7c640 },
    { L"Dictator LK Extra 4", 0xf7c640, 0xf7c660 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_MK[] =
{
    { L"Dictator MK", 0xf7c660, 0xf7c6a0, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator MK Extra 2", 0xf7c6a0, 0xf7c6c0, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator MK Extra 3", 0xf7c6c0, 0xf7c6e0 },
    { L"Dictator MK Extra 4", 0xf7c6e0, 0xf7c700 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_HK[] =
{
    { L"Dictator HK", 0xf7c700, 0xf7c740, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator HK Extra 2", 0xf7c740, 0xf7c760, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator HK Extra 3", 0xf7c760, 0xf7c780 },
    { L"Dictator HK Extra 4", 0xf7c780, 0xf7c7a0 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_3P[] =
{
    { L"Dictator 3P", 0xf7c7a0, 0xf7c7e0, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator 3P Extra 2", 0xf7c7e0, 0xf7c800, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator 3P Extra 3", 0xf7c800, 0xf7c820 },
    { L"Dictator 3P Extra 4", 0xf7c820, 0xf7c840 },
};

const sGame_PaletteDataset CVS1_A_DICTATOR_PALETTES_3K[] =
{
    { L"Dictator 3K", 0xf7c840, 0xf7c880, indexCVS2Sprites_MBison, 0x00 },
    { L"Dictator 3K Extra 2", 0xf7c880, 0xf7c8a0, indexCVS2Sprites_MBison, 0x02 },
    { L"Dictator 3K Extra 3", 0xf7c8a0, 0xf7c8c0 },
    { L"Dictator 3K Extra 4", 0xf7c8c0, 0xf7c8e0 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_LP[] =
{
    { L"Sakura LP", 0x1011c20, 0x1011c40, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura LP Extra 1", 0x1011c40, 0x1011c60, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura LP Extra 2", 0x1011c60, 0x1011c80, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura LP Extra 3", 0x1011c80, 0x1011ca0, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura LP Extra 4", 0x1011ca0, 0x1011cc0, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_MP[] =
{
    { L"Sakura MP", 0x1011cc0, 0x1011ce0, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura MP Extra 1", 0x1011ce0, 0x1011d00, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura MP Extra 2", 0x1011d00, 0x1011d20, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura MP Extra 3", 0x1011d20, 0x1011d40, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura MP Extra 4", 0x1011d40, 0x1011d60, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_HP[] =
{
    { L"Sakura HP", 0x1011d60, 0x1011d80, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura HP Extra 1", 0x1011d80, 0x1011da0, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura HP Extra 2", 0x1011da0, 0x1011dc0, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura HP Extra 3", 0x1011dc0, 0x1011de0, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura HP Extra 4", 0x1011de0, 0x1011e00, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_LK[] =
{
    { L"Sakura LK", 0x1011e00, 0x1011e20, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura LK Extra 1", 0x1011e20, 0x1011e40, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura LK Extra 2", 0x1011e40, 0x1011e60, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura LK Extra 3", 0x1011e60, 0x1011e80, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura LK Extra 4", 0x1011e80, 0x1011ea0, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_MK[] =
{
    { L"Sakura MK", 0x1011ea0, 0x1011ec0, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura MK Extra 1", 0x1011ec0, 0x1011ee0, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura MK Extra 2", 0x1011ee0, 0x1011f00, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura MK Extra 3", 0x1011f00, 0x1011f20, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura MK Extra 4", 0x1011f20, 0x1011f40, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_HK[] =
{
    { L"Sakura HK", 0x1011f40, 0x1011f60, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura HK Extra 1", 0x1011f60, 0x1011f80, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura HK Extra 2", 0x1011f80, 0x1011fa0, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura HK Extra 3", 0x1011fa0, 0x1011fc0, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura HK Extra 4", 0x1011fc0, 0x1011fe0, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_3P[] =
{
    { L"Sakura 3P", 0x1011fe0, 0x1012000, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura 3P Extra 1", 0x1012000, 0x1012020, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura 3P Extra 2", 0x1012020, 0x1012040, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura 3P Extra 3", 0x1012040, 0x1012060, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura 3P Extra 4", 0x1012060, 0x1012080, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_SAKURA_PALETTES_3K[] =
{
    { L"Sakura 3K", 0x1012080, 0x10120a0, indexCVS2Sprites_Sakura, 0x00 },
    { L"Sakura 3K Extra 1", 0x10120a0, 0x10120c0, indexCVS2Sprites_Sakura, 0x01 },
    { L"Sakura 3K Extra 2", 0x10120c0, 0x10120e0, indexCVS2Sprites_Sakura, 0x02 },
    { L"Sakura 3K Extra 3", 0x10120e0, 0x1012100, indexCVS2Sprites_Sakura, 0x03 },
    { L"Sakura 3K Extra 4", 0x1012100, 0x1012120, indexCVS2Sprites_Sakura, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_LP[] =
{
    { L"Cammy LP", 0x1098c20, 0x1098c40, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy LP Extra 1", 0x1098c40, 0x1098c60, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy LP Extra 2", 0x1098c60, 0x1098c80, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy LP Extra 3", 0x1098c80, 0x1098ca0, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy LP Extra 4", 0x1098ca0, 0x1098cc0, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_MP[] =
{
    { L"Cammy MP", 0x1098cc0, 0x1098ce0, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy MP Extra 1", 0x1098ce0, 0x1098d00, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy MP Extra 2", 0x1098d00, 0x1098d20, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy MP Extra 3", 0x1098d20, 0x1098d40, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy MP Extra 4", 0x1098d40, 0x1098d60, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_HP[] =
{
    { L"Cammy HP", 0x1098d60, 0x1098d80, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy HP Extra 1", 0x1098d80, 0x1098da0, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy HP Extra 2", 0x1098da0, 0x1098dc0, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy HP Extra 3", 0x1098dc0, 0x1098de0, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy HP Extra 4", 0x1098de0, 0x1098e00, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_LK[] =
{
    { L"Cammy LK", 0x1098e00, 0x1098e20, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy LK Extra 1", 0x1098e20, 0x1098e40, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy LK Extra 2", 0x1098e40, 0x1098e60, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy LK Extra 3", 0x1098e60, 0x1098e80, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy LK Extra 4", 0x1098e80, 0x1098ea0, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_MK[] =
{
    { L"Cammy MK", 0x1098ea0, 0x1098ec0, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy MK Extra 1", 0x1098ec0, 0x1098ee0, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy MK Extra 2", 0x1098ee0, 0x1098f00, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy MK Extra 3", 0x1098f00, 0x1098f20, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy MK Extra 4", 0x1098f20, 0x1098f40, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_HK[] =
{
    { L"Cammy HK", 0x1098f40, 0x1098f60, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy HK Extra 1", 0x1098f60, 0x1098f80, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy HK Extra 2", 0x1098f80, 0x1098fa0, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy HK Extra 3", 0x1098fa0, 0x1098fc0, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy HK Extra 4", 0x1098fc0, 0x1098fe0, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_3P[] =
{
    { L"Cammy 3P", 0x1098fe0, 0x1099000, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy 3P Extra 1", 0x1099000, 0x1099020, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy 3P Extra 2", 0x1099020, 0x1099040, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy 3P Extra 3", 0x1099040, 0x1099060, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy 3P Extra 4", 0x1099060, 0x1099080, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_CAMMY_PALETTES_3K[] =
{
    { L"Cammy 3K", 0x1099080, 0x10990a0, indexCVS2Sprites_Cammy, 0x00 },
    { L"Cammy 3K Extra 1", 0x10990a0, 0x10990c0, indexCVS2Sprites_Cammy, 0x01 },
    { L"Cammy 3K Extra 2", 0x10990c0, 0x10990e0, indexCVS2Sprites_Cammy, 0x02 },
    { L"Cammy 3K Extra 3", 0x10990e0, 0x1099100, indexCVS2Sprites_Cammy, 0x03 },
    { L"Cammy 3K Extra 4", 0x1099100, 0x1099120, indexCVS2Sprites_Cammy, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_LP[] =
{
    { L"Akuma LP", 0x1141920, 0x1141940, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma LP Extra 1", 0x1141940, 0x1141960 },
    { L"Akuma LP Extra 2", 0x1141960, 0x1141980 },
    { L"Akuma LP Extra 3", 0x1141980, 0x11419a0 },
    { L"Akuma LP Extra 4", 0x11419a0, 0x11419c0, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_MP[] =
{
    { L"Akuma MP", 0x11419c0, 0x11419e0, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma MP Extra 1", 0x11419e0, 0x1141a00 },
    { L"Akuma MP Extra 2", 0x1141a00, 0x1141a20 },
    { L"Akuma MP Extra 3", 0x1141a20, 0x1141a40 },
    { L"Akuma MP Extra 4", 0x1141a40, 0x1141a60, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_HP[] =
{
    { L"Akuma HP", 0x1141a60, 0x1141a80, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma HP Extra 1", 0x1141a80, 0x1141aa0 },
    { L"Akuma HP Extra 2", 0x1141aa0, 0x1141ac0 },
    { L"Akuma HP Extra 3", 0x1141ac0, 0x1141ae0 },
    { L"Akuma HP Extra 4", 0x1141ae0, 0x1141b00, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_LK[] =
{
    { L"Akuma LK", 0x1141b00, 0x1141b20, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma LK Extra 1", 0x1141b20, 0x1141b40 },
    { L"Akuma LK Extra 2", 0x1141b40, 0x1141b60 },
    { L"Akuma LK Extra 3", 0x1141b60, 0x1141b80 },
    { L"Akuma LK Extra 4", 0x1141b80, 0x1141ba0, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_MK[] =
{
    { L"Akuma MK", 0x1141ba0, 0x1141bc0, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma MK Extra 1", 0x1141bc0, 0x1141be0 },
    { L"Akuma MK Extra 2", 0x1141be0, 0x1141c00 },
    { L"Akuma MK Extra 3", 0x1141c00, 0x1141c20 },
    { L"Akuma MK Extra 4", 0x1141c20, 0x1141c40, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_HK[] =
{
    { L"Akuma HK", 0x1141c40, 0x1141c60, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma HK Extra 1", 0x1141c60, 0x1141c80 },
    { L"Akuma HK Extra 2", 0x1141c80, 0x1141ca0 },
    { L"Akuma HK Extra 3", 0x1141ca0, 0x1141cc0 },
    { L"Akuma HK Extra 4", 0x1141cc0, 0x1141ce0, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_3P[] =
{
    { L"Akuma 3P", 0x1141ce0, 0x1141d00, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma 3P Extra 1", 0x1141d00, 0x1141d20 },
    { L"Akuma 3P Extra 2", 0x1141d20, 0x1141d40 },
    { L"Akuma 3P Extra 3", 0x1141d40, 0x1141d60 },
    { L"Akuma 3P Extra 4", 0x1141d60, 0x1141d80, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_AKUMA_PALETTES_3K[] =
{
    { L"Akuma 3K", 0x1141d80, 0x1141da0, indexCVS2Sprites_Akuma, 0x00 },
    { L"Akuma 3K Extra 1", 0x1141da0, 0x1141dc0 },
    { L"Akuma 3K Extra 2", 0x1141dc0, 0x1141de0 },
    { L"Akuma 3K Extra 3", 0x1141de0, 0x1141e00 },
    { L"Akuma 3K Extra 4", 0x1141e00, 0x1141e20, indexCVS2Sprites_Akuma, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_LP[] =
{
    { L"Morrigan LP", 0x11f23a0, 0x11f23c0, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan LP Extra 1", 0x11f23c0, 0x11f23e0, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan LP Extra 2", 0x11f23e0, 0x11f2400, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan LP Extra 3", 0x11f2400, 0x11f2420, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan LP Extra 4", 0x11f2420, 0x11f2440, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_MP[] =
{
    { L"Morrigan MP", 0x11f2440, 0x11f2460, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan MP Extra 1", 0x11f2460, 0x11f2480, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan MP Extra 2", 0x11f2480, 0x11f24a0, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan MP Extra 3", 0x11f24a0, 0x11f24c0, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan MP Extra 4", 0x11f24c0, 0x11f24e0, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_HP[] =
{
    { L"Morrigan HP", 0x11f24e0, 0x11f2500, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan HP Extra 1", 0x11f2500, 0x11f2520, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan HP Extra 2", 0x11f2520, 0x11f2540, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan HP Extra 3", 0x11f2540, 0x11f2560, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan HP Extra 4", 0x11f2560, 0x11f2580, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_LK[] =
{
    { L"Morrigan LK", 0x11f2580, 0x11f25a0, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan LK Extra 1", 0x11f25a0, 0x11f25c0, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan LK Extra 2", 0x11f25c0, 0x11f25e0, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan LK Extra 3", 0x11f25e0, 0x11f2600, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan LK Extra 4", 0x11f2600, 0x11f2620, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_MK[] =
{
    { L"Morrigan MK", 0x11f2620, 0x11f2640, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan MK Extra 1", 0x11f2640, 0x11f2660, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan MK Extra 2", 0x11f2660, 0x11f2680, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan MK Extra 3", 0x11f2680, 0x11f26a0, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan MK Extra 4", 0x11f26a0, 0x11f26c0, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_HK[] =
{
    { L"Morrigan HK", 0x11f26c0, 0x11f26e0, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan HK Extra 1", 0x11f26e0, 0x11f2700, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan HK Extra 2", 0x11f2700, 0x11f2720, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan HK Extra 3", 0x11f2720, 0x11f2740, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan HK Extra 4", 0x11f2740, 0x11f2760, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_3P[] =
{
    { L"Morrigan 3P", 0x11f2760, 0x11f2780, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan 3P Extra 1", 0x11f2780, 0x11f27a0, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan 3P Extra 2", 0x11f27a0, 0x11f27c0, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan 3P Extra 3", 0x11f27c0, 0x11f27e0, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan 3P Extra 4", 0x11f27e0, 0x11f2800, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MORRIGAN_PALETTES_3K[] =
{
    { L"Morrigan 3K", 0x11f2800, 0x11f2820, indexCVS2Sprites_Morrigan, 0x00 },
    { L"Morrigan 3K Extra 1", 0x11f2820, 0x11f2840, indexCVS2Sprites_Morrigan, 0x01 },
    { L"Morrigan 3K Extra 2", 0x11f2840, 0x11f2860, indexCVS2Sprites_Morrigan, 0x02 },
    { L"Morrigan 3K Extra 3", 0x11f2860, 0x11f2880, indexCVS2Sprites_Morrigan, 0x03 },
    { L"Morrigan 3K Extra 4", 0x11f2880, 0x11f28a0, indexCVS2Sprites_Morrigan, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_LP[] =
{
    { L"Evil Ryu LP", 0x1299180, 0x12991a0, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu LP Extra 1", 0x12991a0, 0x12991c0, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu LP Extra 2", 0x12991c0, 0x12991e0, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu LP Extra 3", 0x12991e0, 0x1299200, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu LP Extra 4", 0x1299200, 0x1299220, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_MP[] =
{
    { L"Evil Ryu MP", 0x1299220, 0x1299240, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu MP Extra 1", 0x1299240, 0x1299260, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu MP Extra 2", 0x1299260, 0x1299280, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu MP Extra 3", 0x1299280, 0x12992a0, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu MP Extra 4", 0x12992a0, 0x12992c0, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_HP[] =
{
    { L"Evil Ryu HP", 0x12992c0, 0x12992e0, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu HP Extra 1", 0x12992e0, 0x1299300, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu HP Extra 2", 0x1299300, 0x1299320, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu HP Extra 3", 0x1299320, 0x1299340, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu HP Extra 4", 0x1299340, 0x1299360, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_LK[] =
{
    { L"Evil Ryu LK", 0x1299360, 0x1299380, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu LK Extra 1", 0x1299380, 0x12993a0, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu LK Extra 2", 0x12993a0, 0x12993c0, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu LK Extra 3", 0x12993c0, 0x12993e0, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu LK Extra 4", 0x12993e0, 0x1299400, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_MK[] =
{
    { L"Evil Ryu MK", 0x1299400, 0x1299420, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu MK Extra 1", 0x1299420, 0x1299440, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu MK Extra 2", 0x1299440, 0x1299460, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu MK Extra 3", 0x1299460, 0x1299480, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu MK Extra 4", 0x1299480, 0x12994a0, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_HK[] =
{
    { L"Evil Ryu HK", 0x12994a0, 0x12994c0, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu HK Extra 1", 0x12994c0, 0x12994e0, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu HK Extra 2", 0x12994e0, 0x1299500, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu HK Extra 3", 0x1299500, 0x1299520, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu HK Extra 4", 0x1299520, 0x1299540, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_3P[] =
{
    { L"Evil Ryu 3P", 0x1299540, 0x1299560, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu 3P Extra 1", 0x1299560, 0x1299580, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu 3P Extra 2", 0x1299580, 0x12995a0, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu 3P Extra 3", 0x12995a0, 0x12995c0, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu 3P Extra 4", 0x12995c0, 0x12995e0, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_EVILRYU_PALETTES_3K[] =
{
    { L"Evil Ryu 3K", 0x12995e0, 0x1299600, indexCVS2Sprites_Ryu, 0x00 },
    { L"Evil Ryu 3K Extra 1", 0x1299600, 0x1299620, indexCVS2Sprites_Ryu, 0x01 },
    { L"Evil Ryu 3K Extra 2", 0x1299620, 0x1299640, indexCVS2Sprites_Ryu, 0x02 },
    { L"Evil Ryu 3K Extra 3", 0x1299640, 0x1299660, indexCVS2Sprites_Ryu, 0x03 },
    { L"Evil Ryu 3K Extra 4", 0x1299660, 0x1299680, indexCVS2Sprites_Ryu, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_LP[] =
{
    { L"Kyo LP", 0x13e54e0, 0x13e5500, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo LP Extra 1", 0x13e5500, 0x13e5520, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo LP Extra 2", 0x13e5520, 0x13e5540, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo LP Extra 3", 0x13e5540, 0x13e5560, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo LP Extra 4", 0x13e5560, 0x13e5580, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_MP[] =
{
    { L"Kyo MP", 0x13e5580, 0x13e55a0, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo MP Extra 1", 0x13e55a0, 0x13e55c0, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo MP Extra 2", 0x13e55c0, 0x13e55e0, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo MP Extra 3", 0x13e55e0, 0x13e5600, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo MP Extra 4", 0x13e5600, 0x13e5620, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_HP[] =
{
    { L"Kyo HP", 0x13e5620, 0x13e5640, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo HP Extra 1", 0x13e5640, 0x13e5660, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo HP Extra 2", 0x13e5660, 0x13e5680, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo HP Extra 3", 0x13e5680, 0x13e56a0, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo HP Extra 4", 0x13e56a0, 0x13e56c0, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_LK[] =
{
    { L"Kyo LK", 0x13e56c0, 0x13e56e0, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo LK Extra 1", 0x13e56e0, 0x13e5700, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo LK Extra 2", 0x13e5700, 0x13e5720, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo LK Extra 3", 0x13e5720, 0x13e5740, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo LK Extra 4", 0x13e5740, 0x13e5760, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_MK[] =
{
    { L"Kyo MK", 0x13e5760, 0x13e5780, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo MK Extra 1", 0x13e5780, 0x13e57a0, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo MK Extra 2", 0x13e57a0, 0x13e57c0, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo MK Extra 3", 0x13e57c0, 0x13e57e0, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo MK Extra 4", 0x13e57e0, 0x13e5800, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_HK[] =
{
    { L"Kyo HK", 0x13e5800, 0x13e5820, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo HK Extra 1", 0x13e5820, 0x13e5840, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo HK Extra 2", 0x13e5840, 0x13e5860, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo HK Extra 3", 0x13e5860, 0x13e5880, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo HK Extra 4", 0x13e5880, 0x13e58a0, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_3P[] =
{
    { L"Kyo 3P", 0x13e58a0, 0x13e58c0, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo 3P Extra 1", 0x13e58c0, 0x13e58e0, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo 3P Extra 2", 0x13e58e0, 0x13e5900, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo 3P Extra 3", 0x13e5900, 0x13e5920, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo 3P Extra 4", 0x13e5920, 0x13e5940, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KYO_PALETTES_3K[] =
{
    { L"Kyo 3K", 0x13e5940, 0x13e5960, indexCVS2Sprites_Kyo, 0x00 },
    { L"Kyo 3K Extra 1", 0x13e5960, 0x13e5980, indexCVS2Sprites_Kyo, 0x01 },
    { L"Kyo 3K Extra 2", 0x13e5980, 0x13e59a0, indexCVS2Sprites_Kyo, 0x02 },
    { L"Kyo 3K Extra 3", 0x13e59a0, 0x13e59c0, indexCVS2Sprites_Kyo, 0x03 },
    { L"Kyo 3K Extra 4", 0x13e59c0, 0x13e59e0, indexCVS2Sprites_Kyo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_LP[] =
{
    { L"Iori LP", 0x14dd0c0, 0x14dd0e0, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd0e0, 0x14dd100, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd100, 0x14dd120, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd120, 0x14dd140, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4", 0x14dd140, 0x14dd160 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_MP[] =
{
    { L"Iori MP", 0x14dd160, 0x14dd180, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd180, 0x14dd1a0, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd1a0, 0x14dd1c0, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd1c0, 0x14dd1e0, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4", 0x14dd1e0, 0x14dd200 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_HP[] =
{
    { L"Iori HP", 0x14dd200, 0x14dd220, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd220, 0x14dd240, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd240, 0x14dd260, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd260, 0x14dd280, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4", 0x14dd280, 0x14dd2a0 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_LK[] =
{
    { L"Iori LK", 0x14dd2a0, 0x14dd2c0, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd2c0, 0x14dd2e0, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd2e0, 0x14dd300, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd300, 0x14dd320, indexCVS2Sprites_Iori, 0x03 },
    { L"LK Extra 4", 0x14dd320, 0x14dd340 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_MK[] =
{
    { L"Iori MK", 0x14dd340, 0x14dd360, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd360, 0x14dd380, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd380, 0x14dd3a0, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd3a0, 0x14dd3c0, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4", 0x14dd3c0, 0x14dd3e0 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_HK[] =
{
    { L"Iori HK", 0x14dd3e0, 0x14dd400, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd400, 0x14dd420, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd420, 0x14dd440, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd440, 0x14dd460, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4", 0x14dd460, 0x14dd480 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_3P[] =
{
    { L"Iori 3P", 0x14dd480, 0x14dd4a0, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd4a0, 0x14dd4c0, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd4c0, 0x14dd4e0, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd4e0, 0x14dd500, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4", 0x14dd500, 0x14dd520 },
};

const sGame_PaletteDataset CVS1_A_IORI_PALETTES_3K[] =
{
    { L"Iori 3K", 0x14dd520, 0x14dd540, indexCVS2Sprites_Iori, 0x00, &pairNext },
    { L"Extra 1: Teeth", 0x14dd540, 0x14dd560, indexCVS2Sprites_Iori, 0x01 },
    { L"Extra 2: One for the Road", 0x14dd560, 0x14dd580, indexCVS2Sprites_Iori, 0x04 },
    { L"Extra 3: Dark Thrust", 0x14dd580, 0x14dd5a0, indexCVS2Sprites_Iori, 0x03 },
    { L"Extra 4", 0x14dd5a0, 0x14dd5c0 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_LP[] =
{
    { L"Terry LP", 0x1591e40, 0x1591e60, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry LP Extra 1", 0x1591e60, 0x1591e80, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry LP Extra 2", 0x1591e80, 0x1591ea0, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry LP Extra 3", 0x1591ea0, 0x1591ec0 },
    { L"Terry LP Extra 4", 0x1591ec0, 0x1591ee0 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_MP[] =
{
    { L"Terry MP", 0x1591ee0, 0x1591f00, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry MP Extra 1", 0x1591f00, 0x1591f20, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry MP Extra 2", 0x1591f20, 0x1591f40, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry MP Extra 3", 0x1591f40, 0x1591f60 },
    { L"Terry MP Extra 4", 0x1591f60, 0x1591f80 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_HP[] =
{
    { L"Terry HP", 0x1591f80, 0x1591fa0, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry HP Extra 1", 0x1591fa0, 0x1591fc0, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry HP Extra 2", 0x1591fc0, 0x1591fe0, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry HP Extra 3", 0x1591fe0, 0x1592000 },
    { L"Terry HP Extra 4", 0x1592000, 0x1592020 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_LK[] =
{
    { L"Terry LK", 0x1592020, 0x1592040, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry LK Extra 1", 0x1592040, 0x1592060, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry LK Extra 2", 0x1592060, 0x1592080, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry LK Extra 3", 0x1592080, 0x15920a0 },
    { L"Terry LK Extra 4", 0x15920a0, 0x15920c0 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_MK[] =
{
    { L"Terry MK", 0x15920c0, 0x15920e0, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry MK Extra 1", 0x15920e0, 0x1592100, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry MK Extra 2", 0x1592100, 0x1592120, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry MK Extra 3", 0x1592120, 0x1592140 },
    { L"Terry MK Extra 4", 0x1592140, 0x1592160 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_HK[] =
{
    { L"Terry HK", 0x1592160, 0x1592180, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry HK Extra 1", 0x1592180, 0x15921a0, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry HK Extra 2", 0x15921a0, 0x15921c0, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry HK Extra 3", 0x15921c0, 0x15921e0 },
    { L"Terry HK Extra 4", 0x15921e0, 0x1592200 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_3P[] =
{
    { L"Terry 3P", 0x1592200, 0x1592220, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry 3P Extra 1", 0x1592220, 0x1592240, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry 3P Extra 2", 0x1592240, 0x1592260, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry 3P Extra 3", 0x1592260, 0x1592280 },
    { L"Terry 3P Extra 4", 0x1592280, 0x15922a0 },
};

const sGame_PaletteDataset CVS1_A_TERRY_PALETTES_3K[] =
{
    { L"Terry 3K", 0x15922a0, 0x15922c0, indexCVS2Sprites_Terry, 0x00 },
    { L"Terry 3K Extra 1", 0x15922c0, 0x15922e0, indexCVS2Sprites_Terry, 0x01 },
    { L"Terry 3K Extra 2", 0x15922e0, 0x1592300, indexCVS2Sprites_Terry, 0x02 },
    { L"Terry 3K Extra 3", 0x1592300, 0x1592320 },
    { L"Terry 3K Extra 4", 0x1592320, 0x1592340 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_LP[] =
{
    { L"Ryo LP", 0x164ea20, 0x164ea40, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo LP Extra 1", 0x164ea40, 0x164ea60, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo LP Extra 2", 0x164ea60, 0x164ea80, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo LP Extra 3", 0x164ea80, 0x164eaa0, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo LP Extra 4", 0x164eaa0, 0x164eac0, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_MP[] =
{
    { L"Ryo MP", 0x164eac0, 0x164eae0, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo MP Extra 1", 0x164eae0, 0x164eb00, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo MP Extra 2", 0x164eb00, 0x164eb20, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo MP Extra 3", 0x164eb20, 0x164eb40, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo MP Extra 4", 0x164eb40, 0x164eb60, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_HP[] =
{
    { L"Ryo HP", 0x164eb60, 0x164eb80, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo HP Extra 1", 0x164eb80, 0x164eba0, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo HP Extra 2", 0x164eba0, 0x164ebc0, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo HP Extra 3", 0x164ebc0, 0x164ebe0, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo HP Extra 4", 0x164ebe0, 0x164ec00, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_LK[] =
{
    { L"Ryo LK", 0x164ec00, 0x164ec20, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo LK Extra 1", 0x164ec20, 0x164ec40, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo LK Extra 2", 0x164ec40, 0x164ec60, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo LK Extra 3", 0x164ec60, 0x164ec80, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo LK Extra 4", 0x164ec80, 0x164eca0, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_MK[] =
{
    { L"Ryo MK", 0x164eca0, 0x164ecc0, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo MK Extra 1", 0x164ecc0, 0x164ece0, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo MK Extra 2", 0x164ece0, 0x164ed00, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo MK Extra 3", 0x164ed00, 0x164ed20, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo MK Extra 4", 0x164ed20, 0x164ed40, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_HK[] =
{
    { L"Ryo HK", 0x164ed40, 0x164ed60, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo HK Extra 1", 0x164ed60, 0x164ed80, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo HK Extra 2", 0x164ed80, 0x164eda0, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo HK Extra 3", 0x164eda0, 0x164edc0, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo HK Extra 4", 0x164edc0, 0x164ede0, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_3P[] =
{
    { L"Ryo 3P", 0x164ede0, 0x164ee00, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo 3P Extra 1", 0x164ee00, 0x164ee20, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo 3P Extra 2", 0x164ee20, 0x164ee40, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo 3P Extra 3", 0x164ee40, 0x164ee60, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo 3P Extra 4", 0x164ee60, 0x164ee80, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RYO_PALETTES_3K[] =
{
    { L"Ryo 3K", 0x164ee80, 0x164eea0, indexCVS2Sprites_Ryo, 0x00 },
    { L"Ryo 3K Extra 1", 0x164eea0, 0x164eec0, indexCVS2Sprites_Ryo, 0x01 },
    { L"Ryo 3K Extra 2", 0x164eec0, 0x164eee0, indexCVS2Sprites_Ryo, 0x02 },
    { L"Ryo 3K Extra 3", 0x164eee0, 0x164ef00, indexCVS2Sprites_Ryo, 0x03 },
    { L"Ryo 3K Extra 4", 0x164ef00, 0x164ef20, indexCVS2Sprites_Ryo, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_LP[] =
{
    { L"Mai LP", 0x178f940, 0x178f960, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai LP Extra 1", 0x178f960, 0x178f980, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai LP Extra 2", 0x178f980, 0x178f9a0, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai LP Extra 3", 0x178f9a0, 0x178f9c0, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai LP Extra 4", 0x178f9c0, 0x178f9e0, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_MP[] =
{
    { L"Mai MP", 0x178f9e0, 0x178fa00, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai MP Extra 1", 0x178fa00, 0x178fa20, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai MP Extra 2", 0x178fa20, 0x178fa40, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai MP Extra 3", 0x178fa40, 0x178fa60, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai MP Extra 4", 0x178fa60, 0x178fa80, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_HP[] =
{
    { L"Mai HP", 0x178fa80, 0x178faa0, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai HP Extra 1", 0x178faa0, 0x178fac0, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai HP Extra 2", 0x178fac0, 0x178fae0, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai HP Extra 3", 0x178fae0, 0x178fb00, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai HP Extra 4", 0x178fb00, 0x178fb20, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_LK[] =
{
    { L"Mai LK", 0x178fb20, 0x178fb40, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai LK Extra 1", 0x178fb40, 0x178fb60, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai LK Extra 2", 0x178fb60, 0x178fb80, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai LK Extra 3", 0x178fb80, 0x178fba0, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai LK Extra 4", 0x178fba0, 0x178fbc0, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_MK[] =
{
    { L"Mai MK", 0x178fbc0, 0x178fbe0, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai MK Extra 1", 0x178fbe0, 0x178fc00, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai MK Extra 2", 0x178fc00, 0x178fc20, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai MK Extra 3", 0x178fc20, 0x178fc40, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai MK Extra 4", 0x178fc40, 0x178fc60, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_HK[] =
{
    { L"Mai HK", 0x178fc60, 0x178fc80, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai HK Extra 1", 0x178fc80, 0x178fca0, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai HK Extra 2", 0x178fca0, 0x178fcc0, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai HK Extra 3", 0x178fcc0, 0x178fce0, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai HK Extra 4", 0x178fce0, 0x178fd00, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_3P[] =
{
    { L"Mai 3P", 0x178fd00, 0x178fd20, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai 3P Extra 1", 0x178fd20, 0x178fd40, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai 3P Extra 2", 0x178fd40, 0x178fd60, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai 3P Extra 3", 0x178fd60, 0x178fd80, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai 3P Extra 4", 0x178fd80, 0x178fda0, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_MAI_PALETTES_3K[] =
{
    { L"Mai 3K", 0x178fda0, 0x178fdc0, indexCVS2Sprites_Mai, 0x00 },
    { L"Mai 3K Extra 1", 0x178fdc0, 0x178fde0, indexCVS2Sprites_Mai, 0x01 },
    { L"Mai 3K Extra 2", 0x178fde0, 0x178fe00, indexCVS2Sprites_Mai, 0x02 },
    { L"Mai 3K Extra 3", 0x178fe00, 0x178fe20, indexCVS2Sprites_Mai, 0x03 },
    { L"Mai 3K Extra 4", 0x178fe20, 0x178fe40, indexCVS2Sprites_Mai, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_LP[] =
{
    { L"Kim LP", 0x180ff40, 0x180ff60, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim LP Extra 1", 0x180ff60, 0x180ff80, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim LP Extra 2", 0x180ff80, 0x180ffa0, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim LP Extra 3", 0x180ffa0, 0x180ffc0, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim LP Extra 4", 0x180ffc0, 0x180ffe0, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_MP[] =
{
    { L"Kim MP", 0x180ffe0, 0x1810000, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim MP Extra 1", 0x1810000, 0x1810020, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim MP Extra 2", 0x1810020, 0x1810040, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim MP Extra 3", 0x1810040, 0x1810060, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim MP Extra 4", 0x1810060, 0x1810080, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_HP[] =
{
    { L"Kim HP", 0x1810080, 0x18100a0, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim HP Extra 1", 0x18100a0, 0x18100c0, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim HP Extra 2", 0x18100c0, 0x18100e0, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim HP Extra 3", 0x18100e0, 0x1810100, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim HP Extra 4", 0x1810100, 0x1810120, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_LK[] =
{
    { L"Kim LK", 0x1810120, 0x1810140, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim LK Extra 1", 0x1810140, 0x1810160, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim LK Extra 2", 0x1810160, 0x1810180, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim LK Extra 3", 0x1810180, 0x18101a0, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim LK Extra 4", 0x18101a0, 0x18101c0, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_MK[] =
{
    { L"Kim MK", 0x18101c0, 0x18101e0, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim MK Extra 1", 0x18101e0, 0x1810200, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim MK Extra 2", 0x1810200, 0x1810220, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim MK Extra 3", 0x1810220, 0x1810240, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim MK Extra 4", 0x1810240, 0x1810260, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_HK[] =
{
    { L"Kim HK", 0x1810260, 0x1810280, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim HK Extra 1", 0x1810280, 0x18102a0, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim HK Extra 2", 0x18102a0, 0x18102c0, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim HK Extra 3", 0x18102c0, 0x18102e0, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim HK Extra 4", 0x18102e0, 0x1810300, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_3P[] =
{
    { L"Kim 3P", 0x1810300, 0x1810320, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim 3P Extra 1", 0x1810320, 0x1810340, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim 3P Extra 2", 0x1810340, 0x1810360, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim 3P Extra 3", 0x1810360, 0x1810380, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim 3P Extra 4", 0x1810380, 0x18103a0, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KIM_PALETTES_3K[] =
{
    { L"Kim 3K", 0x18103a0, 0x18103c0, indexCVS2Sprites_Kim, 0x00, &pairNext },
    { L"Kim 3K Extra 1", 0x18103c0, 0x18103e0, indexCVS2Sprites_Kim, 0x01 },
    { L"Kim 3K Extra 2", 0x18103e0, 0x1810400, indexCVS2Sprites_Kim, 0x02 },
    { L"Kim 3K Extra 3", 0x1810400, 0x1810420, indexCVS2Sprites_Kim, 0x03 },
    { L"Kim 3K Extra 4", 0x1810420, 0x1810440, indexCVS2Sprites_Kim, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_LP[] =
{
    { L"Geese LP", 0x18d57c0, 0x18d57e0, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese LP Extra 1", 0x18d57e0, 0x18d5800, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese LP Extra 2", 0x18d5800, 0x18d5820, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese LP Extra 3", 0x18d5820, 0x18d5840, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese LP Extra 4", 0x18d5840, 0x18d5860, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_MP[] =
{
    { L"Geese MP", 0x18d5860, 0x18d5880, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese MP Extra 1", 0x18d5880, 0x18d58a0, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese MP Extra 2", 0x18d58a0, 0x18d58c0, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese MP Extra 3", 0x18d58c0, 0x18d58e0, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese MP Extra 4", 0x18d58e0, 0x18d5900, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_HP[] =
{
    { L"Geese HP", 0x18d5900, 0x18d5920, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese HP Extra 1", 0x18d5920, 0x18d5940, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese HP Extra 2", 0x18d5940, 0x18d5960, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese HP Extra 3", 0x18d5960, 0x18d5980, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese HP Extra 4", 0x18d5980, 0x18d59a0, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_LK[] =
{
    { L"Geese LK", 0x18d59a0, 0x18d59c0, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese LK Extra 1", 0x18d59c0, 0x18d59e0, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese LK Extra 2", 0x18d59e0, 0x18d5a00, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese LK Extra 3", 0x18d5a00, 0x18d5a20, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese LK Extra 4", 0x18d5a20, 0x18d5a40, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_MK[] =
{
    { L"Geese MK", 0x18d5a40, 0x18d5a60, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese MK Extra 1", 0x18d5a60, 0x18d5a80, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese MK Extra 2", 0x18d5a80, 0x18d5aa0, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese MK Extra 3", 0x18d5aa0, 0x18d5ac0, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese MK Extra 4", 0x18d5ac0, 0x18d5ae0, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_HK[] =
{
    { L"Geese HK", 0x18d5ae0, 0x18d5b00, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese HK Extra 1", 0x18d5b00, 0x18d5b20, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese HK Extra 2", 0x18d5b20, 0x18d5b40, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese HK Extra 3", 0x18d5b40, 0x18d5b60, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese HK Extra 4", 0x18d5b60, 0x18d5b80, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_3P[] =
{
    { L"Geese 3P", 0x18d5b80, 0x18d5ba0, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese 3P Extra 1", 0x18d5ba0, 0x18d5bc0, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese 3P Extra 2", 0x18d5bc0, 0x18d5be0, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese 3P Extra 3", 0x18d5be0, 0x18d5c00, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese 3P Extra 4", 0x18d5c00, 0x18d5c20, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_GEESE_PALETTES_3K[] =
{
    { L"Geese 3K", 0x18d5c20, 0x18d5c40, indexCVS2Sprites_Geese, 0x00, &pairNext3 },
    { L"Geese 3K Extra 1", 0x18d5c40, 0x18d5c60, indexCVS2Sprites_Geese, 0x01 },
    { L"Geese 3K Extra 2", 0x18d5c60, 0x18d5c80, indexCVS2Sprites_Geese, 0x02 },
    { L"Geese 3K Extra 3", 0x18d5c80, 0x18d5ca0, indexCVS2Sprites_Geese, 0x03 },
    { L"Geese 3K Extra 4", 0x18d5ca0, 0x18d5cc0, indexCVS2Sprites_Geese, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_LP[] =
{
    { L"Yamazaki LP", 0x19de900, 0x19de920, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki LP Extra 1", 0x19de920, 0x19de940, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki LP Extra 2", 0x19de940, 0x19de960, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki LP Extra 3", 0x19de960, 0x19de980, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki LP Extra 4", 0x19de980, 0x19de9a0, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_MP[] =
{
    { L"Yamazaki MP", 0x19de9a0, 0x19de9c0, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki MP Extra 1", 0x19de9c0, 0x19de9e0, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki MP Extra 2", 0x19de9e0, 0x19dea00, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki MP Extra 3", 0x19dea00, 0x19dea20, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki MP Extra 4", 0x19dea20, 0x19dea40, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_HP[] =
{
    { L"Yamazaki HP", 0x19dea40, 0x19dea60, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki HP Extra 1", 0x19dea60, 0x19dea80, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki HP Extra 2", 0x19dea80, 0x19deaa0, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki HP Extra 3", 0x19deaa0, 0x19deac0, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki HP Extra 4", 0x19deac0, 0x19deae0, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_LK[] =
{
    { L"Yamazaki LK", 0x19deae0, 0x19deb00, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki LK Extra 1", 0x19deb00, 0x19deb20, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki LK Extra 2", 0x19deb20, 0x19deb40, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki LK Extra 3", 0x19deb40, 0x19deb60, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki LK Extra 4", 0x19deb60, 0x19deb80, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_MK[] =
{
    { L"Yamazaki MK", 0x19deb80, 0x19deba0, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki MK Extra 1", 0x19deba0, 0x19debc0, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki MK Extra 2", 0x19debc0, 0x19debe0, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki MK Extra 3", 0x19debe0, 0x19dec00, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki MK Extra 4", 0x19dec00, 0x19dec20, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_HK[] =
{
    { L"Yamazaki HK", 0x19dec20, 0x19dec40, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki HK Extra 1", 0x19dec40, 0x19dec60, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki HK Extra 2", 0x19dec60, 0x19dec80, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki HK Extra 3", 0x19dec80, 0x19deca0, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki HK Extra 4", 0x19deca0, 0x19decc0, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_3P[] =
{
    { L"Yamazaki 3P", 0x19decc0, 0x19dece0, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki 3P Extra 1", 0x19dece0, 0x19ded00, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki 3P Extra 2", 0x19ded00, 0x19ded20, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki 3P Extra 3", 0x19ded20, 0x19ded40, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki 3P Extra 4", 0x19ded40, 0x19ded60, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YAMAZAKI_PALETTES_3K[] =
{
    { L"Yamazaki 3K", 0x19ded60, 0x19ded80, indexCVS2Sprites_RyujiYamazaki, 0x00, &pairNext },
    { L"Yamazaki 3K Extra 1", 0x19ded80, 0x19deda0, indexCVS2Sprites_RyujiYamazaki, 0x01 },
    { L"Yamazaki 3K Extra 2", 0x19deda0, 0x19dedc0, indexCVS2Sprites_RyujiYamazaki, 0x02 },
    { L"Yamazaki 3K Extra 3", 0x19dedc0, 0x19dede0, indexCVS2Sprites_RyujiYamazaki, 0x03 },
    { L"Yamazaki 3K Extra 4", 0x19dede0, 0x19dee00, indexCVS2Sprites_RyujiYamazaki, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_LP[] =
{
    { L"Raiden LP", 0x1ac14e0, 0x1ac1500, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden LP Extra 1", 0x1ac1500, 0x1ac1520, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden LP Extra 2", 0x1ac1520, 0x1ac1540, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden LP Extra 3", 0x1ac1540, 0x1ac1560, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden LP Extra 4", 0x1ac1560, 0x1ac1580, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_MP[] =
{
    { L"Raiden MP", 0x1ac1580, 0x1ac15a0, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden MP Extra 1", 0x1ac15a0, 0x1ac15c0, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden MP Extra 2", 0x1ac15c0, 0x1ac15e0, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden MP Extra 3", 0x1ac15e0, 0x1ac1600, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden MP Extra 4", 0x1ac1600, 0x1ac1620, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_HP[] =
{
    { L"Raiden HP", 0x1ac1620, 0x1ac1640, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden HP Extra 1", 0x1ac1640, 0x1ac1660, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden HP Extra 2", 0x1ac1660, 0x1ac1680, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden HP Extra 3", 0x1ac1680, 0x1ac16a0, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden HP Extra 4", 0x1ac16a0, 0x1ac16c0, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_LK[] =
{
    { L"Raiden LK", 0x1ac16c0, 0x1ac16e0, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden LK Extra 1", 0x1ac16e0, 0x1ac1700, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden LK Extra 2", 0x1ac1700, 0x1ac1720, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden LK Extra 3", 0x1ac1720, 0x1ac1740, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden LK Extra 4", 0x1ac1740, 0x1ac1760, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_MK[] =
{
    { L"Raiden MK", 0x1ac1760, 0x1ac1780, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden MK Extra 1", 0x1ac1780, 0x1ac17a0, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden MK Extra 2", 0x1ac17a0, 0x1ac17c0, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden MK Extra 3", 0x1ac17c0, 0x1ac17e0, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden MK Extra 4", 0x1ac17e0, 0x1ac1800, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_HK[] =
{
    { L"Raiden HK", 0x1ac1800, 0x1ac1820, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden HK Extra 1", 0x1ac1820, 0x1ac1840, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden HK Extra 2", 0x1ac1840, 0x1ac1860, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden HK Extra 3", 0x1ac1860, 0x1ac1880, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden HK Extra 4", 0x1ac1880, 0x1ac18a0, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_3P[] =
{
    { L"Raiden 3P", 0x1ac18a0, 0x1ac18c0, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden 3P Extra 1", 0x1ac18c0, 0x1ac18e0, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden 3P Extra 2", 0x1ac18e0, 0x1ac1900, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden 3P Extra 3", 0x1ac1900, 0x1ac1920, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden 3P Extra 4", 0x1ac1920, 0x1ac1940, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RAIDEN_PALETTES_3K[] =
{
    { L"Raiden 3K", 0x1ac1940, 0x1ac1960, indexCVS2Sprites_Raiden, 0x00 },
    { L"Raiden 3K Extra 1", 0x1ac1960, 0x1ac1980, indexCVS2Sprites_Raiden, 0x01 },
    { L"Raiden 3K Extra 2", 0x1ac1980, 0x1ac19a0, indexCVS2Sprites_Raiden, 0x02 },
    { L"Raiden 3K Extra 3", 0x1ac19a0, 0x1ac19c0, indexCVS2Sprites_Raiden, 0x03 },
    { L"Raiden 3K Extra 4", 0x1ac19c0, 0x1ac19e0, indexCVS2Sprites_Raiden, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_LP[] =
{
    { L"Rugal LP", 0x1bcc3e0, 0x1bcc400, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal LP Extra 1", 0x1bcc400, 0x1bcc420, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal LP Extra 2", 0x1bcc420, 0x1bcc440, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal LP Extra 3", 0x1bcc440, 0x1bcc460, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal LP Extra 4", 0x1bcc460, 0x1bcc480, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_MP[] =
{
    { L"Rugal MP", 0x1bcc480, 0x1bcc4a0, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal MP Extra 1", 0x1bcc4a0, 0x1bcc4c0, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal MP Extra 2", 0x1bcc4c0, 0x1bcc4e0, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal MP Extra 3", 0x1bcc4e0, 0x1bcc500, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal MP Extra 4", 0x1bcc500, 0x1bcc520, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_HP[] =
{
    { L"Rugal HP", 0x1bcc520, 0x1bcc540, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal HP Extra 1", 0x1bcc540, 0x1bcc560, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal HP Extra 2", 0x1bcc560, 0x1bcc580, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal HP Extra 3", 0x1bcc580, 0x1bcc5a0, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal HP Extra 4", 0x1bcc5a0, 0x1bcc5c0, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_LK[] =
{
    { L"Rugal LK", 0x1bcc5c0, 0x1bcc5e0, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal LK Extra 1", 0x1bcc5e0, 0x1bcc600, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal LK Extra 2", 0x1bcc600, 0x1bcc620, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal LK Extra 3", 0x1bcc620, 0x1bcc640, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal LK Extra 4", 0x1bcc640, 0x1bcc660, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_MK[] =
{
    { L"Rugal MK", 0x1bcc660, 0x1bcc680, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal MK Extra 1", 0x1bcc680, 0x1bcc6a0, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal MK Extra 2", 0x1bcc6a0, 0x1bcc6c0, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal MK Extra 3", 0x1bcc6c0, 0x1bcc6e0, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal MK Extra 4", 0x1bcc6e0, 0x1bcc700, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_HK[] =
{
    { L"Rugal HK", 0x1bcc700, 0x1bcc720, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal HK Extra 1", 0x1bcc720, 0x1bcc740, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal HK Extra 2", 0x1bcc740, 0x1bcc760, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal HK Extra 3", 0x1bcc760, 0x1bcc780, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal HK Extra 4", 0x1bcc780, 0x1bcc7a0, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_3P[] =
{
    { L"Rugal 3P", 0x1bcc7a0, 0x1bcc7c0, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal 3P Extra 1", 0x1bcc7c0, 0x1bcc7e0, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal 3P Extra 2", 0x1bcc7e0, 0x1bcc800, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal 3P Extra 3", 0x1bcc800, 0x1bcc820, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal 3P Extra 4", 0x1bcc820, 0x1bcc840, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_RUGAL_PALETTES_3K[] =
{
    { L"Rugal 3K", 0x1bcc840, 0x1bcc860, indexCVS2Sprites_Rugal, 0x00 },
    { L"Rugal 3K Extra 1", 0x1bcc860, 0x1bcc880, indexCVS2Sprites_Rugal, 0x01 },
    { L"Rugal 3K Extra 2", 0x1bcc880, 0x1bcc8a0, indexCVS2Sprites_Rugal, 0x02 },
    { L"Rugal 3K Extra 3", 0x1bcc8a0, 0x1bcc8c0, indexCVS2Sprites_Rugal, 0x03 },
    { L"Rugal 3K Extra 4", 0x1bcc8c0, 0x1bcc8e0, indexCVS2Sprites_Rugal, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_LP[] =
{
    { L"Vice LP", 0x1cadc20, 0x1cadc40, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice LP Extra 1", 0x1cadc40, 0x1cadc60, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice LP Extra 2", 0x1cadc60, 0x1cadc80, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice LP Extra 3", 0x1cadc80, 0x1cadca0, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice LP Extra 4", 0x1cadca0, 0x1cadcc0, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_MP[] =
{
    { L"Vice MP", 0x1cadcc0, 0x1cadce0, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice MP Extra 1", 0x1cadce0, 0x1cadd00, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice MP Extra 2", 0x1cadd00, 0x1cadd20, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice MP Extra 3", 0x1cadd20, 0x1cadd40, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice MP Extra 4", 0x1cadd40, 0x1cadd60, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_HP[] =
{
    { L"Vice HP", 0x1cadd60, 0x1cadd80, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice HP Extra 1", 0x1cadd80, 0x1cadda0, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice HP Extra 2", 0x1cadda0, 0x1caddc0, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice HP Extra 3", 0x1caddc0, 0x1cadde0, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice HP Extra 4", 0x1cadde0, 0x1cade00, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_LK[] =
{
    { L"Vice LK", 0x1cade00, 0x1cade20, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice LK Extra 1", 0x1cade20, 0x1cade40, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice LK Extra 2", 0x1cade40, 0x1cade60, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice LK Extra 3", 0x1cade60, 0x1cade80, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice LK Extra 4", 0x1cade80, 0x1cadea0, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_MK[] =
{
    { L"Vice MK", 0x1cadea0, 0x1cadec0, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice MK Extra 1", 0x1cadec0, 0x1cadee0, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice MK Extra 2", 0x1cadee0, 0x1cadf00, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice MK Extra 3", 0x1cadf00, 0x1cadf20, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice MK Extra 4", 0x1cadf20, 0x1cadf40, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_HK[] =
{
    { L"Vice HK", 0x1cadf40, 0x1cadf60, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice HK Extra 1", 0x1cadf60, 0x1cadf80, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice HK Extra 2", 0x1cadf80, 0x1cadfa0, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice HK Extra 3", 0x1cadfa0, 0x1cadfc0, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice HK Extra 4", 0x1cadfc0, 0x1cadfe0, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_3P[] =
{
    { L"Vice 3P", 0x1cadfe0, 0x1cae000, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice 3P Extra 1", 0x1cae000, 0x1cae020, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice 3P Extra 2", 0x1cae020, 0x1cae040, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice 3P Extra 3", 0x1cae040, 0x1cae060, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice 3P Extra 4", 0x1cae060, 0x1cae080, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_VICE_PALETTES_3K[] =
{
    { L"Vice 3K", 0x1cae080, 0x1cae0a0, indexCVS2Sprites_Vice, 0x00, &pairNextAndNext },
    { L"Vice 3K Extra 1", 0x1cae0a0, 0x1cae0c0, indexCVS2Sprites_Vice, 0x01 },
    { L"Vice 3K Extra 2", 0x1cae0c0, 0x1cae0e0, indexCVS2Sprites_Vice, 0x02 },
    { L"Vice 3K Extra 3", 0x1cae0e0, 0x1cae100, indexCVS2Sprites_Vice, 0x03 },
    { L"Vice 3K Extra 4", 0x1cae100, 0x1cae120, indexCVS2Sprites_Vice, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_LP[] =
{
    { L"Benimaru LP", 0x1d81b40, 0x1d81b60, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru LP Extra 1", 0x1d81b60, 0x1d81b80, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru LP Extra 2", 0x1d81b80, 0x1d81ba0, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru LP Extra 3", 0x1d81ba0, 0x1d81bc0, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru LP Extra 4", 0x1d81bc0, 0x1d81be0, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_MP[] =
{
    { L"Benimaru MP", 0x1d81be0, 0x1d81c00, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru MP Extra 1", 0x1d81c00, 0x1d81c20, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru MP Extra 2", 0x1d81c20, 0x1d81c40, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru MP Extra 3", 0x1d81c40, 0x1d81c60, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru MP Extra 4", 0x1d81c60, 0x1d81c80, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_HP[] =
{
    { L"Benimaru HP", 0x1d81c80, 0x1d81ca0, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru HP Extra 1", 0x1d81ca0, 0x1d81cc0, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru HP Extra 2", 0x1d81cc0, 0x1d81ce0, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru HP Extra 3", 0x1d81ce0, 0x1d81d00, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru HP Extra 4", 0x1d81d00, 0x1d81d20, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_LK[] =
{
    { L"Benimaru LK", 0x1d81d20, 0x1d81d40, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru LK Extra 1", 0x1d81d40, 0x1d81d60, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru LK Extra 2", 0x1d81d60, 0x1d81d80, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru LK Extra 3", 0x1d81d80, 0x1d81da0, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru LK Extra 4", 0x1d81da0, 0x1d81dc0, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_MK[] =
{
    { L"Benimaru MK", 0x1d81dc0, 0x1d81de0, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru MK Extra 1", 0x1d81de0, 0x1d81e00, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru MK Extra 2", 0x1d81e00, 0x1d81e20, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru MK Extra 3", 0x1d81e20, 0x1d81e40, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru MK Extra 4", 0x1d81e40, 0x1d81e60, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_HK[] =
{
    { L"Benimaru HK", 0x1d81e60, 0x1d81e80, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru HK Extra 1", 0x1d81e80, 0x1d81ea0, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru HK Extra 2", 0x1d81ea0, 0x1d81ec0, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru HK Extra 3", 0x1d81ec0, 0x1d81ee0, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru HK Extra 4", 0x1d81ee0, 0x1d81f00, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_3P[] =
{
    { L"Benimaru 3P", 0x1d81f00, 0x1d81f20, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru 3P Extra 1", 0x1d81f20, 0x1d81f40, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru 3P Extra 2", 0x1d81f40, 0x1d81f60, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru 3P Extra 3", 0x1d81f60, 0x1d81f80, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru 3P Extra 4", 0x1d81f80, 0x1d81fa0, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BENIMARU_PALETTES_3K[] =
{
    { L"Benimaru 3K", 0x1d81fa0, 0x1d81fc0, indexCVS2Sprites_Benimaru, 0x00, &pairNext },
    { L"Benimaru 3K Extra 1", 0x1d81fc0, 0x1d81fe0, indexCVS2Sprites_Benimaru, 0x01 },
    { L"Benimaru 3K Extra 2", 0x1d81fe0, 0x1d82000, indexCVS2Sprites_Benimaru, 0x02 },
    { L"Benimaru 3K Extra 3", 0x1d82000, 0x1d82020, indexCVS2Sprites_Benimaru, 0x03 },
    { L"Benimaru 3K Extra 4", 0x1d82020, 0x1d82040, indexCVS2Sprites_Benimaru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_LP[] =
{
    { L"Yuri LP", 0x1e093e0, 0x1e09400, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri LP Extra 1", 0x1e09400, 0x1e09420, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri LP Extra 2", 0x1e09420, 0x1e09440 },
    { L"Yuri LP Extra 3", 0x1e09440, 0x1e09460, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri LP Extra 4", 0x1e09460, 0x1e09480, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_MP[] =
{
    { L"Yuri MP", 0x1e09480, 0x1e094a0, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri MP Extra 1", 0x1e094a0, 0x1e094c0, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri MP Extra 2", 0x1e094c0, 0x1e094e0 },
    { L"Yuri MP Extra 3", 0x1e094e0, 0x1e09500, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri MP Extra 4", 0x1e09500, 0x1e09520, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_HP[] =
{
    { L"Yuri HP", 0x1e09520, 0x1e09540, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri HP Extra 1", 0x1e09540, 0x1e09560, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri HP Extra 2", 0x1e09560, 0x1e09580 },
    { L"Yuri HP Extra 3", 0x1e09580, 0x1e095a0, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri HP Extra 4", 0x1e095a0, 0x1e095c0, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_LK[] =
{
    { L"Yuri LK", 0x1e095c0, 0x1e095e0, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri LK Extra 1", 0x1e095e0, 0x1e09600, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri LK Extra 2", 0x1e09600, 0x1e09620 },
    { L"Yuri LK Extra 3", 0x1e09620, 0x1e09640, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri LK Extra 4", 0x1e09640, 0x1e09660, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_MK[] =
{
    { L"Yuri MK", 0x1e09660, 0x1e09680, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri MK Extra 1", 0x1e09680, 0x1e096a0, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri MK Extra 2", 0x1e096a0, 0x1e096c0 },
    { L"Yuri MK Extra 3", 0x1e096c0, 0x1e096e0, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri MK Extra 4", 0x1e096e0, 0x1e09700, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_HK[] =
{
    { L"Yuri HK", 0x1e09700, 0x1e09720, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri HK Extra 1", 0x1e09720, 0x1e09740, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri HK Extra 2", 0x1e09740, 0x1e09760 },
    { L"Yuri HK Extra 3", 0x1e09760, 0x1e09780, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri HK Extra 4", 0x1e09780, 0x1e097a0, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_3P[] =
{
    { L"Yuri 3P", 0x1e097a0, 0x1e097c0, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri 3P Extra 1", 0x1e097c0, 0x1e097e0, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri 3P Extra 2", 0x1e097e0, 0x1e09800 },
    { L"Yuri 3P Extra 3", 0x1e09800, 0x1e09820, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri 3P Extra 4", 0x1e09820, 0x1e09840, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_YURI_PALETTES_3K[] =
{
    { L"Yuri 3K", 0x1e09840, 0x1e09860, indexCVS2Sprites_Yuri, 0x00 },
    { L"Yuri 3K Extra 1", 0x1e09860, 0x1e09880, indexCVS2Sprites_Yuri, 0x02 },
    { L"Yuri 3K Extra 2", 0x1e09880, 0x1e098a0 },
    { L"Yuri 3K Extra 3", 0x1e098a0, 0x1e098c0, indexCVS2Sprites_Yuri, 0x03 },
    { L"Yuri 3K Extra 4", 0x1e098c0, 0x1e098e0, indexCVS2Sprites_Yuri, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_LP[] =
{
    { L"King LP", 0x1e8c3a0, 0x1e8c3c0, indexCVS2Sprites_King, 0x00 },
    { L"King LP Extra 1", 0x1e8c3c0, 0x1e8c3e0, indexCVS2Sprites_King, 0x01 },
    { L"King LP Extra 2", 0x1e8c3e0, 0x1e8c400, indexCVS2Sprites_King, 0x02 },
    { L"King LP Extra 3", 0x1e8c400, 0x1e8c420, indexCVS2Sprites_King, 0x03 },
    { L"King LP Extra 4", 0x1e8c420, 0x1e8c440, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_MP[] =
{
    { L"King MP", 0x1e8c440, 0x1e8c460, indexCVS2Sprites_King, 0x00 },
    { L"King MP Extra 1", 0x1e8c460, 0x1e8c480, indexCVS2Sprites_King, 0x01 },
    { L"King MP Extra 2", 0x1e8c480, 0x1e8c4a0, indexCVS2Sprites_King, 0x02 },
    { L"King MP Extra 3", 0x1e8c4a0, 0x1e8c4c0, indexCVS2Sprites_King, 0x03 },
    { L"King MP Extra 4", 0x1e8c4c0, 0x1e8c4e0, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_HP[] =
{
    { L"King HP", 0x1e8c4e0, 0x1e8c500, indexCVS2Sprites_King, 0x00 },
    { L"King HP Extra 1", 0x1e8c500, 0x1e8c520, indexCVS2Sprites_King, 0x01 },
    { L"King HP Extra 2", 0x1e8c520, 0x1e8c540, indexCVS2Sprites_King, 0x02 },
    { L"King HP Extra 3", 0x1e8c540, 0x1e8c560, indexCVS2Sprites_King, 0x03 },
    { L"King HP Extra 4", 0x1e8c560, 0x1e8c580, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_LK[] =
{
    { L"King LK", 0x1e8c580, 0x1e8c5a0, indexCVS2Sprites_King, 0x00 },
    { L"King LK Extra 1", 0x1e8c5a0, 0x1e8c5c0, indexCVS2Sprites_King, 0x01 },
    { L"King LK Extra 2", 0x1e8c5c0, 0x1e8c5e0, indexCVS2Sprites_King, 0x02 },
    { L"King LK Extra 3", 0x1e8c5e0, 0x1e8c600, indexCVS2Sprites_King, 0x03 },
    { L"King LK Extra 4", 0x1e8c600, 0x1e8c620, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_MK[] =
{
    { L"King MK", 0x1e8c620, 0x1e8c640, indexCVS2Sprites_King, 0x00 },
    { L"King MK Extra 1", 0x1e8c640, 0x1e8c660, indexCVS2Sprites_King, 0x01 },
    { L"King MK Extra 2", 0x1e8c660, 0x1e8c680, indexCVS2Sprites_King, 0x02 },
    { L"King MK Extra 3", 0x1e8c680, 0x1e8c6a0, indexCVS2Sprites_King, 0x03 },
    { L"King MK Extra 4", 0x1e8c6a0, 0x1e8c6c0, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_HK[] =
{
    { L"King HK", 0x1e8c6c0, 0x1e8c6e0, indexCVS2Sprites_King, 0x00 },
    { L"King HK Extra 1", 0x1e8c6e0, 0x1e8c700, indexCVS2Sprites_King, 0x01 },
    { L"King HK Extra 2", 0x1e8c700, 0x1e8c720, indexCVS2Sprites_King, 0x02 },
    { L"King HK Extra 3", 0x1e8c720, 0x1e8c740, indexCVS2Sprites_King, 0x03 },
    { L"King HK Extra 4", 0x1e8c740, 0x1e8c760, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_3P[] =
{
    { L"King 3P", 0x1e8c760, 0x1e8c780, indexCVS2Sprites_King, 0x00 },
    { L"King 3P Extra 1", 0x1e8c780, 0x1e8c7a0, indexCVS2Sprites_King, 0x01 },
    { L"King 3P Extra 2", 0x1e8c7a0, 0x1e8c7c0, indexCVS2Sprites_King, 0x02 },
    { L"King 3P Extra 3", 0x1e8c7c0, 0x1e8c7e0, indexCVS2Sprites_King, 0x03 },
    { L"King 3P Extra 4", 0x1e8c7e0, 0x1e8c800, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_KING_PALETTES_3K[] =
{
    { L"King 3K", 0x1e8c800, 0x1e8c820, indexCVS2Sprites_King, 0x00 },
    { L"King 3K Extra 1", 0x1e8c820, 0x1e8c840, indexCVS2Sprites_King, 0x01 },
    { L"King 3K Extra 2", 0x1e8c840, 0x1e8c860, indexCVS2Sprites_King, 0x02 },
    { L"King 3K Extra 3", 0x1e8c860, 0x1e8c880, indexCVS2Sprites_King, 0x03 },
    { L"King 3K Extra 4", 0x1e8c880, 0x1e8c8a0, indexCVS2Sprites_King, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_LP[] =
{
    { L"Nakoruru LP", 0x1f3cb40, 0x1f3cb60, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru LP Extra 1", 0x1f3cb60, 0x1f3cb80, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru LP Extra 2", 0x1f3cb80, 0x1f3cba0, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru LP Extra 3", 0x1f3cba0, 0x1f3cbc0, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru LP Extra 4", 0x1f3cbc0, 0x1f3cbe0, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_MP[] =
{
    { L"Nakoruru MP", 0x1f3cbe0, 0x1f3cc00, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru MP Extra 1", 0x1f3cc00, 0x1f3cc20, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru MP Extra 2", 0x1f3cc20, 0x1f3cc40, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru MP Extra 3", 0x1f3cc40, 0x1f3cc60, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru MP Extra 4", 0x1f3cc60, 0x1f3cc80, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_HP[] =
{
    { L"Nakoruru HP", 0x1f3cc80, 0x1f3cca0, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru HP Extra 1", 0x1f3cca0, 0x1f3ccc0, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru HP Extra 2", 0x1f3ccc0, 0x1f3cce0, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru HP Extra 3", 0x1f3cce0, 0x1f3cd00, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru HP Extra 4", 0x1f3cd00, 0x1f3cd20, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_LK[] =
{
    { L"Nakoruru LK", 0x1f3cd20, 0x1f3cd40, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru LK Extra 1", 0x1f3cd40, 0x1f3cd60, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru LK Extra 2", 0x1f3cd60, 0x1f3cd80, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru LK Extra 3", 0x1f3cd80, 0x1f3cda0, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru LK Extra 4", 0x1f3cda0, 0x1f3cdc0, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_MK[] =
{
    { L"Nakoruru MK", 0x1f3cdc0, 0x1f3cde0, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru MK Extra 1", 0x1f3cde0, 0x1f3ce00, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru MK Extra 2", 0x1f3ce00, 0x1f3ce20, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru MK Extra 3", 0x1f3ce20, 0x1f3ce40, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru MK Extra 4", 0x1f3ce40, 0x1f3ce60, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_HK[] =
{
    { L"Nakoruru HK", 0x1f3ce60, 0x1f3ce80, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru HK Extra 1", 0x1f3ce80, 0x1f3cea0, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru HK Extra 2", 0x1f3cea0, 0x1f3cec0, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru HK Extra 3", 0x1f3cec0, 0x1f3cee0, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru HK Extra 4", 0x1f3cee0, 0x1f3cf00, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_3P[] =
{
    { L"Nakoruru 3P", 0x1f3cf00, 0x1f3cf20, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru 3P Extra 1", 0x1f3cf20, 0x1f3cf40, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru 3P Extra 2", 0x1f3cf40, 0x1f3cf60, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru 3P Extra 3", 0x1f3cf60, 0x1f3cf80, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru 3P Extra 4", 0x1f3cf80, 0x1f3cfa0, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_NAKORURU_PALETTES_3K[] =
{
    { L"Nakoruru 3K", 0x1f3cfa0, 0x1f3cfc0, indexCVS2Sprites_Nakoruru, 0x00, &pairNextAndNext },
    { L"Nakoruru 3K Extra 1", 0x1f3cfc0, 0x1f3cfe0, indexCVS2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru 3K Extra 2", 0x1f3cfe0, 0x1f3d000, indexCVS2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru 3K Extra 3", 0x1f3d000, 0x1f3d020, indexCVS2Sprites_Nakoruru, 0x03 },
    { L"Nakoruru 3K Extra 4", 0x1f3d020, 0x1f3d040, indexCVS2Sprites_Nakoruru, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_LP[] =
{
    { L"Orochi Iori LP", 0x202f480, 0x202f4a0, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori LP Extra 1", 0x202f4a0, 0x202f4c0, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori LP Extra 2", 0x202f4c0, 0x202f4e0, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori LP Extra 3", 0x202f4e0, 0x202f500, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori LP Extra 4", 0x202f500, 0x202f520, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_MP[] =
{
    { L"Orochi Iori MP", 0x202f520, 0x202f540, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori MP Extra 1", 0x202f540, 0x202f560, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori MP Extra 2", 0x202f560, 0x202f580, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori MP Extra 3", 0x202f580, 0x202f5a0, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori MP Extra 4", 0x202f5a0, 0x202f5c0, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_HP[] =
{
    { L"Orochi Iori HP", 0x202f5c0, 0x202f5e0, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori HP Extra 1", 0x202f5e0, 0x202f600, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori HP Extra 2", 0x202f600, 0x202f620, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori HP Extra 3", 0x202f620, 0x202f640, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori HP Extra 4", 0x202f640, 0x202f660, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_LK[] =
{
    { L"Orochi Iori LK", 0x202f660, 0x202f680, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori LK Extra 1", 0x202f680, 0x202f6a0, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori LK Extra 2", 0x202f6a0, 0x202f6c0, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori LK Extra 3", 0x202f6c0, 0x202f6e0, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori LK Extra 4", 0x202f6e0, 0x202f700, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_MK[] =
{
    { L"Orochi Iori MK", 0x202f700, 0x202f720, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori MK Extra 1", 0x202f720, 0x202f740, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori MK Extra 2", 0x202f740, 0x202f760, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori MK Extra 3", 0x202f760, 0x202f780, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori MK Extra 4", 0x202f780, 0x202f7a0, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_HK[] =
{
    { L"Orochi Iori HK", 0x202f7a0, 0x202f7c0, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori HK Extra 1", 0x202f7c0, 0x202f7e0, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori HK Extra 2", 0x202f7e0, 0x202f800, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori HK Extra 3", 0x202f800, 0x202f820, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori HK Extra 4", 0x202f820, 0x202f840, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_3P[] =
{
    { L"Orochi Iori 3P", 0x202f840, 0x202f860, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori 3P Extra 1", 0x202f860, 0x202f880, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori 3P Extra 2", 0x202f880, 0x202f8a0, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori 3P Extra 3", 0x202f8a0, 0x202f8c0, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori 3P Extra 4", 0x202f8c0, 0x202f8e0, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_OROCHIIORI_PALETTES_3K[] =
{
    { L"Orochi Iori 3K", 0x202f8e0, 0x202f900, indexCVS2Sprites_OrochiIori, 0x00, &pairNext },
    { L"Orochi Iori 3K Extra 1", 0x202f900, 0x202f920, indexCVS2Sprites_OrochiIori, 0x01 },
    { L"Orochi Iori 3K Extra 2", 0x202f920, 0x202f940, indexCVS2Sprites_OrochiIori, 0x02 },
    { L"Orochi Iori 3K Extra 3", 0x202f940, 0x202f960, indexCVS2Sprites_OrochiIori, 0x03 },
    { L"Orochi Iori 3K Extra 4", 0x202f960, 0x202f980, indexCVS2Sprites_OrochiIori, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_LP[] =
{
    { L"Boxer LP", 0x20bc180, 0x20bc1a0, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer LP Extra 1", 0x20bc1a0, 0x20bc1c0, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer LP Extra 2", 0x20bc1c0, 0x20bc1e0, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer LP Extra 3", 0x20bc1e0, 0x20bc200, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer LP Extra 4", 0x20bc200, 0x20bc220, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_MP[] =
{
    { L"Boxer MP", 0x20bc220, 0x20bc240, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer MP Extra 1", 0x20bc240, 0x20bc260, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer MP Extra 2", 0x20bc260, 0x20bc280, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer MP Extra 3", 0x20bc280, 0x20bc2a0, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer MP Extra 4", 0x20bc2a0, 0x20bc2c0, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_HP[] =
{
    { L"Boxer HP", 0x20bc2c0, 0x20bc2e0, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer HP Extra 1", 0x20bc2e0, 0x20bc300, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer HP Extra 2", 0x20bc300, 0x20bc320, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer HP Extra 3", 0x20bc320, 0x20bc340, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer HP Extra 4", 0x20bc340, 0x20bc360, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_LK[] =
{
    { L"Boxer LK", 0x20bc360, 0x20bc380, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer LK Extra 1", 0x20bc380, 0x20bc3a0, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer LK Extra 2", 0x20bc3a0, 0x20bc3c0, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer LK Extra 3", 0x20bc3c0, 0x20bc3e0, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer LK Extra 4", 0x20bc3e0, 0x20bc400, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_MK[] =
{
    { L"Boxer MK", 0x20bc400, 0x20bc420, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer MK Extra 1", 0x20bc420, 0x20bc440, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer MK Extra 2", 0x20bc440, 0x20bc460, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer MK Extra 3", 0x20bc460, 0x20bc480, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer MK Extra 4", 0x20bc480, 0x20bc4a0, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_HK[] =
{
    { L"Boxer HK", 0x20bc4a0, 0x20bc4c0, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer HK Extra 1", 0x20bc4c0, 0x20bc4e0, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer HK Extra 2", 0x20bc4e0, 0x20bc500, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer HK Extra 3", 0x20bc500, 0x20bc520, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer HK Extra 4", 0x20bc520, 0x20bc540, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_3P[] =
{
    { L"Boxer 3P", 0x20bc540, 0x20bc560, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer 3P Extra 1", 0x20bc560, 0x20bc580, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer 3P Extra 2", 0x20bc580, 0x20bc5a0, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer 3P Extra 3", 0x20bc5a0, 0x20bc5c0, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer 3P Extra 4", 0x20bc5c0, 0x20bc5e0, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_A_BOXER_PALETTES_3K[] =
{
    { L"Boxer 3K", 0x20bc5e0, 0x20bc600, indexCVS2Sprites_Balrog, 0x00, &pairNext },
    { L"Boxer 3K Extra 1", 0x20bc600, 0x20bc620, indexCVS2Sprites_Balrog, 0x01 },
    { L"Boxer 3K Extra 2", 0x20bc620, 0x20bc640, indexCVS2Sprites_Balrog, 0x02 },
    { L"Boxer 3K Extra 3", 0x20bc640, 0x20bc660, indexCVS2Sprites_Balrog, 0x03 },
    { L"Boxer 3K Extra 4", 0x20bc660, 0x20bc680, indexCVS2Sprites_Balrog, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_LP[] =
{
    { L"Joe LP", 0x1bb0000 + (0x0 * 0x20), 0x1bb0000 + (0x01 * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe LP Extra 1", 0x1bb0000 + (0x01 * 0x20), 0x1bb0000 + (0x02 * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe LP Extra 2", 0x1bb0000 + (0x02 * 0x20), 0x1bb0000 + (0x03 * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe LP Extra 3", 0x1bb0000 + (0x03 * 0x20), 0x1bb0000 + (0x04 * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe LP Extra 4", 0x1bb0000 + (0x04 * 0x20), 0x1bb0000 + (0x05 * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_MP[] =
{
    { L"Joe MP", 0x1bb0000 + (0x05 * 0x20), 0x1bb0000 + (0x06 * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe MP Extra 1", 0x1bb0000 + (0x06 * 0x20), 0x1bb0000 + (0x07 * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe MP Extra 2", 0x1bb0000 + (0x07 * 0x20), 0x1bb0000 + (0x08 * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe MP Extra 3", 0x1bb0000 + (0x08 * 0x20), 0x1bb0000 + (0x09 * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe MP Extra 4", 0x1bb0000 + (0x09 * 0x20), 0x1bb0000 + (0x0a * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_HP[] =
{
    { L"Joe HP", 0x1bb0000 + (0x0a * 0x20), 0x1bb0000 + (0x0b * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe HP Extra 1", 0x1bb0000 + (0x0b * 0x20), 0x1bb0000 + (0x0c * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe HP Extra 2", 0x1bb0000 + (0x0c * 0x20), 0x1bb0000 + (0x0d * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe HP Extra 3", 0x1bb0000 + (0x0d * 0x20), 0x1bb0000 + (0x0e * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe HP Extra 4", 0x1bb0000 + (0x0e * 0x20), 0x1bb0000 + (0x0f * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_LK[] =
{
    { L"Joe LK", 0x1bb0000 + (0x0f * 0x20), 0x1bb0000 + (0x10 * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe LK Extra 1", 0x1bb0000 + (0x10 * 0x20), 0x1bb0000 + (0x11 * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe LK Extra 2", 0x1bb0000 + (0x11 * 0x20), 0x1bb0000 + (0x12 * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe LK Extra 3", 0x1bb0000 + (0x12 * 0x20), 0x1bb0000 + (0x13 * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe LK Extra 4", 0x1bb0000 + (0x13 * 0x20), 0x1bb0000 + (0x14 * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_MK[] =
{
    { L"Joe MK", 0x1bb0000 + (0x14 * 0x20), 0x1bb0000 + (0x15 * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe MK Extra 1", 0x1bb0000 + (0x15 * 0x20), 0x1bb0000 + (0x16 * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe MK Extra 2", 0x1bb0000 + (0x16 * 0x20), 0x1bb0000 + (0x17 * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe MK Extra 3", 0x1bb0000 + (0x17 * 0x20), 0x1bb0000 + (0x18 * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe MK Extra 4", 0x1bb0000 + (0x18 * 0x20), 0x1bb0000 + (0x19 * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_HK[] =
{
    { L"Joe HK", 0x1bb0000 + (0x19 * 0x20), 0x1bb0000 + (0x1a * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe HK Extra 1", 0x1bb0000 + (0x1a * 0x20), 0x1bb0000 + (0x1b * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe HK Extra 2", 0x1bb0000 + (0x1b * 0x20), 0x1bb0000 + (0x1c * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe HK Extra 3", 0x1bb0000 + (0x1c * 0x20), 0x1bb0000 + (0x1d * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe HK Extra 4", 0x1bb0000 + (0x1d * 0x20), 0x1bb0000 + (0x1e * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_3P[] =
{
    { L"Joe 3P", 0x1bb0000 + (0x1e * 0x20), 0x1bb0000 + (0x1f * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe 3P Extra 1", 0x1bb0000 + (0x1f * 0x20), 0x1bb0000 + (0x20 * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe 3P Extra 2", 0x1bb0000 + (0x20 * 0x20), 0x1bb0000 + (0x21 * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe 3P Extra 3", 0x1bb0000 + (0x21 * 0x20), 0x1bb0000 + (0x22 * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe 3P Extra 4", 0x1bb0000 + (0x22 * 0x20), 0x1bb0000 + (0x23 * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_JOE_PALETTES_3K[] =
{
    { L"Joe 3K", 0x1bb0000 + (0x23 * 0x20), 0x1bb0000 + (0x24 * 0x20), indexCVS2Sprites_Joe, 0x00 },
    { L"Joe 3K Extra 1", 0x1bb0000 + (0x24 * 0x20), 0x1bb0000 + (0x25 * 0x20), indexCVS2Sprites_Joe, 0x01 },
    { L"Joe 3K Extra 2", 0x1bb0000 + (0x25 * 0x20), 0x1bb0000 + (0x26 * 0x20), indexCVS2Sprites_Joe, 0x02 },
    { L"Joe 3K Extra 3", 0x1bb0000 + (0x26 * 0x20), 0x1bb0000 + (0x27 * 0x20), indexCVS2Sprites_Joe, 0x03 },
    { L"Joe 3K Extra 4", 0x1bb0000 + (0x27 * 0x20), 0x1bb0000 + (0x28 * 0x20), indexCVS2Sprites_Joe, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_LP[] =
{
    { L"Dan LP", 0x1af17c0 + (0x00 * 0x20), 0x1af17c0 + (0x01 * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan LP Extra 1", 0x1af17c0 + (0x01 * 0x20), 0x1af17c0 + (0x02 * 0x20) },
    { L"Dan LP Extra 2", 0x1af17c0 + (0x02 * 0x20), 0x1af17c0 + (0x03 * 0x20) },
    { L"Dan LP Extra 3", 0x1af17c0 + (0x03 * 0x20), 0x1af17c0 + (0x04 * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan LP Extra 4", 0x1af17c0 + (0x04 * 0x20), 0x1af17c0 + (0x05 * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_MP[] =
{
    { L"Dan MP", 0x1af17c0 + (0x05 * 0x20), 0x1af17c0 + (0x06 * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan MP Extra 1", 0x1af17c0 + (0x06 * 0x20), 0x1af17c0 + (0x07 * 0x20) },
    { L"Dan MP Extra 2", 0x1af17c0 + (0x07 * 0x20), 0x1af17c0 + (0x08 * 0x20) },
    { L"Dan MP Extra 3", 0x1af17c0 + (0x08 * 0x20), 0x1af17c0 + (0x09 * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan MP Extra 4", 0x1af17c0 + (0x09 * 0x20), 0x1af17c0 + (0x0a * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_HP[] =
{
    { L"Dan HP", 0x1af17c0 + (0x0a * 0x20), 0x1af17c0 + (0x0b * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan HP Extra 1", 0x1af17c0 + (0x0b * 0x20), 0x1af17c0 + (0x0c * 0x20) },
    { L"Dan HP Extra 2", 0x1af17c0 + (0x0c * 0x20), 0x1af17c0 + (0x0d * 0x20) },
    { L"Dan HP Extra 3", 0x1af17c0 + (0x0d * 0x20), 0x1af17c0 + (0x0e * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan HP Extra 4", 0x1af17c0 + (0x0e * 0x20), 0x1af17c0 + (0x0f * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_LK[] =
{
    { L"Dan LK", 0x1af17c0 + (0x0f * 0x20), 0x1af17c0 + (0x10 * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan LK Extra 1", 0x1af17c0 + (0x10 * 0x20), 0x1af17c0 + (0x11 * 0x20) },
    { L"Dan LK Extra 2", 0x1af17c0 + (0x11 * 0x20), 0x1af17c0 + (0x12 * 0x20) },
    { L"Dan LK Extra 3", 0x1af17c0 + (0x12 * 0x20), 0x1af17c0 + (0x13 * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan LK Extra 4", 0x1af17c0 + (0x13 * 0x20), 0x1af17c0 + (0x14 * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_MK[] =
{
    { L"Dan MK", 0x1af17c0 + (0x14 * 0x20), 0x1af17c0 + (0x15 * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan MK Extra 1", 0x1af17c0 + (0x15 * 0x20), 0x1af17c0 + (0x16 * 0x20) },
    { L"Dan MK Extra 2", 0x1af17c0 + (0x16 * 0x20), 0x1af17c0 + (0x17 * 0x20) },
    { L"Dan MK Extra 3", 0x1af17c0 + (0x17 * 0x20), 0x1af17c0 + (0x18 * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan MK Extra 4", 0x1af17c0 + (0x18 * 0x20), 0x1af17c0 + (0x19 * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_HK[] =
{
    { L"Dan HK", 0x1af17c0 + (0x19 * 0x20), 0x1af17c0 + (0x1a * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan HK Extra 1", 0x1af17c0 + (0x1a * 0x20), 0x1af17c0 + (0x1b * 0x20) },
    { L"Dan HK Extra 2", 0x1af17c0 + (0x1b * 0x20), 0x1af17c0 + (0x1c * 0x20) },
    { L"Dan HK Extra 3", 0x1af17c0 + (0x1c * 0x20), 0x1af17c0 + (0x1d * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan HK Extra 4", 0x1af17c0 + (0x1d * 0x20), 0x1af17c0 + (0x1e * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_3P[] =
{
    { L"Dan 3P", 0x1af17c0 + (0x1e * 0x20), 0x1af17c0 + (0x1f * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan 3P Extra 1", 0x1af17c0 + (0x1f * 0x20), 0x1af17c0 + (0x20 * 0x20) },
    { L"Dan 3P Extra 2", 0x1af17c0 + (0x20 * 0x20), 0x1af17c0 + (0x21 * 0x20) },
    { L"Dan 3P Extra 3", 0x1af17c0 + (0x21 * 0x20), 0x1af17c0 + (0x22 * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan 3P Extra 4", 0x1af17c0 + (0x22 * 0x20), 0x1af17c0 + (0x23 * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sGame_PaletteDataset CVS1_S_DAN_PALETTES_3K[] =
{
    { L"Dan 3K", 0x1af17c0 + (0x23 * 0x20), 0x1af17c0 + (0x24 * 0x20), indexCVS2Sprites_Dan, 0x00 },
    { L"Dan 3K Extra 1", 0x1af17c0 + (0x24 * 0x20), 0x1af17c0 + (0x25 * 0x20) },
    { L"Dan 3K Extra 2", 0x1af17c0 + (0x25 * 0x20), 0x1af17c0 + (0x26 * 0x20) },
    { L"Dan 3K Extra 3", 0x1af17c0 + (0x26 * 0x20), 0x1af17c0 + (0x27 * 0x20), indexCVS2Sprites_Dan, 0x03 },
    { L"Dan 3K Extra 4", 0x1af17c0 + (0x27 * 0x20), 0x1af17c0 + (0x28 * 0x20), indexCVS2Sprites_Dan, 0x04 },
};

const sDescTreeNode CVS1_A_RYU_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_LP, ARRAYSIZE(CVS1_A_RYU_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_MP, ARRAYSIZE(CVS1_A_RYU_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_HP, ARRAYSIZE(CVS1_A_RYU_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_LK, ARRAYSIZE(CVS1_A_RYU_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_MK, ARRAYSIZE(CVS1_A_RYU_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_HK, ARRAYSIZE(CVS1_A_RYU_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_3P, ARRAYSIZE(CVS1_A_RYU_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_PALETTES_3K, ARRAYSIZE(CVS1_A_RYU_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_KEN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_LP, ARRAYSIZE(CVS1_A_KEN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_MP, ARRAYSIZE(CVS1_A_KEN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_HP, ARRAYSIZE(CVS1_A_KEN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_LK, ARRAYSIZE(CVS1_A_KEN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_MK, ARRAYSIZE(CVS1_A_KEN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_HK, ARRAYSIZE(CVS1_A_KEN_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_3P, ARRAYSIZE(CVS1_A_KEN_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_PALETTES_3K, ARRAYSIZE(CVS1_A_KEN_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_CHUNLI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_LP, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_MP, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_HP, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_LK, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_MK, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_HK, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_3P, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_PALETTES_3K, ARRAYSIZE(CVS1_A_CHUNLI_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_GUILE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_LP, ARRAYSIZE(CVS1_A_GUILE_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_MP, ARRAYSIZE(CVS1_A_GUILE_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_HP, ARRAYSIZE(CVS1_A_GUILE_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_LK, ARRAYSIZE(CVS1_A_GUILE_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_MK, ARRAYSIZE(CVS1_A_GUILE_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_HK, ARRAYSIZE(CVS1_A_GUILE_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_3P, ARRAYSIZE(CVS1_A_GUILE_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_PALETTES_3K, ARRAYSIZE(CVS1_A_GUILE_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_ZANGIEF_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_LP, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_MP, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_HP, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_LK, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_MK, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_HK, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_3P, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_PALETTES_3K, ARRAYSIZE(CVS1_A_ZANGIEF_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_DHALSIM_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_LP, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_MP, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_HP, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_LK, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_MK, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_HK, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_3P, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_PALETTES_3K, ARRAYSIZE(CVS1_A_DHALSIM_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_EHONDA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_LP, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_MP, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_HP, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_LK, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_MK, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_HK, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_3P, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_PALETTES_3K, ARRAYSIZE(CVS1_A_EHONDA_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_BLANKA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_LP, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_MP, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_HP, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_LK, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_MK, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_HK, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_3P, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_PALETTES_3K, ARRAYSIZE(CVS1_A_BLANKA_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_CLAW_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_LP, ARRAYSIZE(CVS1_A_CLAW_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_MP, ARRAYSIZE(CVS1_A_CLAW_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_HP, ARRAYSIZE(CVS1_A_CLAW_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_LK, ARRAYSIZE(CVS1_A_CLAW_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_MK, ARRAYSIZE(CVS1_A_CLAW_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_HK, ARRAYSIZE(CVS1_A_CLAW_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_3P, ARRAYSIZE(CVS1_A_CLAW_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_PALETTES_3K, ARRAYSIZE(CVS1_A_CLAW_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_SAGAT_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_LP, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_MP, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_HP, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_LK, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_MK, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_HK, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_3P, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_PALETTES_3K, ARRAYSIZE(CVS1_A_SAGAT_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_DICTATOR_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_LP, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_MP, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_HP, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_LK, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_MK, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_HK, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_3P, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_PALETTES_3K, ARRAYSIZE(CVS1_A_DICTATOR_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_SAKURA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_LP, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_MP, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_HP, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_LK, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_MK, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_HK, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_3P, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_PALETTES_3K, ARRAYSIZE(CVS1_A_SAKURA_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_CAMMY_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_LP, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_MP, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_HP, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_LK, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_MK, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_HK, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_3P, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_PALETTES_3K, ARRAYSIZE(CVS1_A_CAMMY_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_AKUMA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_LP, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_MP, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_HP, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_LK, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_MK, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_HK, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_3P, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_PALETTES_3K, ARRAYSIZE(CVS1_A_AKUMA_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_MORRIGAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_LP, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_MP, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_HP, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_LK, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_MK, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_HK, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_3P, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_PALETTES_3K, ARRAYSIZE(CVS1_A_MORRIGAN_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_EVILRYU_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_LP, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_MP, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_HP, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_LK, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_MK, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_HK, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_3P, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_PALETTES_3K, ARRAYSIZE(CVS1_A_EVILRYU_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_KYO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_LP, ARRAYSIZE(CVS1_A_KYO_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_MP, ARRAYSIZE(CVS1_A_KYO_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_HP, ARRAYSIZE(CVS1_A_KYO_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_LK, ARRAYSIZE(CVS1_A_KYO_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_MK, ARRAYSIZE(CVS1_A_KYO_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_HK, ARRAYSIZE(CVS1_A_KYO_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_3P, ARRAYSIZE(CVS1_A_KYO_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_PALETTES_3K, ARRAYSIZE(CVS1_A_KYO_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_IORI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_LP, ARRAYSIZE(CVS1_A_IORI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_MP, ARRAYSIZE(CVS1_A_IORI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_HP, ARRAYSIZE(CVS1_A_IORI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_LK, ARRAYSIZE(CVS1_A_IORI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_MK, ARRAYSIZE(CVS1_A_IORI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_HK, ARRAYSIZE(CVS1_A_IORI_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_3P, ARRAYSIZE(CVS1_A_IORI_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_PALETTES_3K, ARRAYSIZE(CVS1_A_IORI_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_TERRY_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_LP, ARRAYSIZE(CVS1_A_TERRY_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_MP, ARRAYSIZE(CVS1_A_TERRY_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_HP, ARRAYSIZE(CVS1_A_TERRY_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_LK, ARRAYSIZE(CVS1_A_TERRY_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_MK, ARRAYSIZE(CVS1_A_TERRY_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_HK, ARRAYSIZE(CVS1_A_TERRY_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_3P, ARRAYSIZE(CVS1_A_TERRY_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_PALETTES_3K, ARRAYSIZE(CVS1_A_TERRY_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_RYO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_LP, ARRAYSIZE(CVS1_A_RYO_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_MP, ARRAYSIZE(CVS1_A_RYO_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_HP, ARRAYSIZE(CVS1_A_RYO_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_LK, ARRAYSIZE(CVS1_A_RYO_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_MK, ARRAYSIZE(CVS1_A_RYO_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_HK, ARRAYSIZE(CVS1_A_RYO_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_3P, ARRAYSIZE(CVS1_A_RYO_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_PALETTES_3K, ARRAYSIZE(CVS1_A_RYO_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_MAI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_LP, ARRAYSIZE(CVS1_A_MAI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_MP, ARRAYSIZE(CVS1_A_MAI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_HP, ARRAYSIZE(CVS1_A_MAI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_LK, ARRAYSIZE(CVS1_A_MAI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_MK, ARRAYSIZE(CVS1_A_MAI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_HK, ARRAYSIZE(CVS1_A_MAI_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_3P, ARRAYSIZE(CVS1_A_MAI_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_PALETTES_3K, ARRAYSIZE(CVS1_A_MAI_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_KIM_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_LP, ARRAYSIZE(CVS1_A_KIM_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_MP, ARRAYSIZE(CVS1_A_KIM_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_HP, ARRAYSIZE(CVS1_A_KIM_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_LK, ARRAYSIZE(CVS1_A_KIM_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_MK, ARRAYSIZE(CVS1_A_KIM_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_HK, ARRAYSIZE(CVS1_A_KIM_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_3P, ARRAYSIZE(CVS1_A_KIM_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_PALETTES_3K, ARRAYSIZE(CVS1_A_KIM_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_GEESE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_LP, ARRAYSIZE(CVS1_A_GEESE_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_MP, ARRAYSIZE(CVS1_A_GEESE_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_HP, ARRAYSIZE(CVS1_A_GEESE_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_LK, ARRAYSIZE(CVS1_A_GEESE_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_MK, ARRAYSIZE(CVS1_A_GEESE_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_HK, ARRAYSIZE(CVS1_A_GEESE_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_3P, ARRAYSIZE(CVS1_A_GEESE_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_PALETTES_3K, ARRAYSIZE(CVS1_A_GEESE_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_YAMAZAKI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_LP, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_MP, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_HP, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_LK, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_MK, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_HK, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_3P, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_PALETTES_3K, ARRAYSIZE(CVS1_A_YAMAZAKI_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_RAIDEN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_LP, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_MP, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_HP, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_LK, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_MK, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_HK, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_3P, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_PALETTES_3K, ARRAYSIZE(CVS1_A_RAIDEN_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_RUGAL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_LP, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_MP, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_HP, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_LK, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_MK, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_HK, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_3P, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_PALETTES_3K, ARRAYSIZE(CVS1_A_RUGAL_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_VICE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_LP, ARRAYSIZE(CVS1_A_VICE_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_MP, ARRAYSIZE(CVS1_A_VICE_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_HP, ARRAYSIZE(CVS1_A_VICE_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_LK, ARRAYSIZE(CVS1_A_VICE_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_MK, ARRAYSIZE(CVS1_A_VICE_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_HK, ARRAYSIZE(CVS1_A_VICE_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_3P, ARRAYSIZE(CVS1_A_VICE_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_PALETTES_3K, ARRAYSIZE(CVS1_A_VICE_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_BENIMARU_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_LP, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_MP, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_HP, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_LK, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_MK, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_HK, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_3P, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_PALETTES_3K, ARRAYSIZE(CVS1_A_BENIMARU_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_YURI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_LP, ARRAYSIZE(CVS1_A_YURI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_MP, ARRAYSIZE(CVS1_A_YURI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_HP, ARRAYSIZE(CVS1_A_YURI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_LK, ARRAYSIZE(CVS1_A_YURI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_MK, ARRAYSIZE(CVS1_A_YURI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_HK, ARRAYSIZE(CVS1_A_YURI_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_3P, ARRAYSIZE(CVS1_A_YURI_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_PALETTES_3K, ARRAYSIZE(CVS1_A_YURI_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_KING_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_LP, ARRAYSIZE(CVS1_A_KING_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_MP, ARRAYSIZE(CVS1_A_KING_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_HP, ARRAYSIZE(CVS1_A_KING_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_LK, ARRAYSIZE(CVS1_A_KING_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_MK, ARRAYSIZE(CVS1_A_KING_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_HK, ARRAYSIZE(CVS1_A_KING_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_3P, ARRAYSIZE(CVS1_A_KING_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_PALETTES_3K, ARRAYSIZE(CVS1_A_KING_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_NAKORURU_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_LP, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_MP, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_HP, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_LK, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_MK, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_HK, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_3P, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_PALETTES_3K, ARRAYSIZE(CVS1_A_NAKORURU_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_OROCHIIORI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_LP, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_MP, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_HP, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_LK, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_MK, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_HK, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_3P, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_PALETTES_3K, ARRAYSIZE(CVS1_A_OROCHIIORI_PALETTES_3K) },
};

const sDescTreeNode CVS1_A_BOXER_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_LP, ARRAYSIZE(CVS1_A_BOXER_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_MP, ARRAYSIZE(CVS1_A_BOXER_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_HP, ARRAYSIZE(CVS1_A_BOXER_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_LK, ARRAYSIZE(CVS1_A_BOXER_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_MK, ARRAYSIZE(CVS1_A_BOXER_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_HK, ARRAYSIZE(CVS1_A_BOXER_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_3P, ARRAYSIZE(CVS1_A_BOXER_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_PALETTES_3K, ARRAYSIZE(CVS1_A_BOXER_PALETTES_3K) },
};

const sDescTreeNode CVS1_S_JOE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_LP, ARRAYSIZE(CVS1_S_JOE_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_MP, ARRAYSIZE(CVS1_S_JOE_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_HP, ARRAYSIZE(CVS1_S_JOE_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_LK, ARRAYSIZE(CVS1_S_JOE_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_MK, ARRAYSIZE(CVS1_S_JOE_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_HK, ARRAYSIZE(CVS1_S_JOE_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_3P, ARRAYSIZE(CVS1_S_JOE_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_PALETTES_3K, ARRAYSIZE(CVS1_S_JOE_PALETTES_3K) },
};

const sDescTreeNode CVS1_S_DAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_LP, ARRAYSIZE(CVS1_S_DAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_MP, ARRAYSIZE(CVS1_S_DAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_HP, ARRAYSIZE(CVS1_S_DAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_LK, ARRAYSIZE(CVS1_S_DAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_MK, ARRAYSIZE(CVS1_S_DAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_HK, ARRAYSIZE(CVS1_S_DAN_PALETTES_HK) },
    { L"3P", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_3P, ARRAYSIZE(CVS1_S_DAN_PALETTES_3P) },
    { L"3K", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_PALETTES_3K, ARRAYSIZE(CVS1_S_DAN_PALETTES_3K) },
};


const sDescTreeNode CVS1_A_UNITS[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_COLLECTION, ARRAYSIZE(CVS1_A_RYU_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_COLLECTION, ARRAYSIZE(CVS1_A_KEN_COLLECTION) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_COLLECTION, ARRAYSIZE(CVS1_A_CHUNLI_COLLECTION) },
    { L"Guile", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_COLLECTION, ARRAYSIZE(CVS1_A_GUILE_COLLECTION) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_COLLECTION, ARRAYSIZE(CVS1_A_ZANGIEF_COLLECTION) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_COLLECTION, ARRAYSIZE(CVS1_A_DHALSIM_COLLECTION) },
    { L"E. Honda", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_COLLECTION, ARRAYSIZE(CVS1_A_EHONDA_COLLECTION) },
    { L"Blanka", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_COLLECTION, ARRAYSIZE(CVS1_A_BLANKA_COLLECTION) },
    { L"Claw", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_COLLECTION, ARRAYSIZE(CVS1_A_CLAW_COLLECTION) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_COLLECTION, ARRAYSIZE(CVS1_A_SAGAT_COLLECTION) },
    { L"Dictator", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_COLLECTION, ARRAYSIZE(CVS1_A_DICTATOR_COLLECTION) },
    { L"Sakura", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_COLLECTION, ARRAYSIZE(CVS1_A_SAKURA_COLLECTION) },
    { L"Cammy", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_COLLECTION, ARRAYSIZE(CVS1_A_CAMMY_COLLECTION) },
    { L"Akuma", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_COLLECTION, ARRAYSIZE(CVS1_A_AKUMA_COLLECTION) },
    { L"Morrigan", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_COLLECTION, ARRAYSIZE(CVS1_A_MORRIGAN_COLLECTION) },
    { L"Evil Ryu", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_COLLECTION, ARRAYSIZE(CVS1_A_EVILRYU_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_COLLECTION, ARRAYSIZE(CVS1_A_KYO_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_COLLECTION, ARRAYSIZE(CVS1_A_IORI_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_COLLECTION, ARRAYSIZE(CVS1_A_TERRY_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_COLLECTION, ARRAYSIZE(CVS1_A_RYO_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_COLLECTION, ARRAYSIZE(CVS1_A_MAI_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_COLLECTION, ARRAYSIZE(CVS1_A_KIM_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_COLLECTION, ARRAYSIZE(CVS1_A_GEESE_COLLECTION) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_COLLECTION, ARRAYSIZE(CVS1_A_YAMAZAKI_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_COLLECTION, ARRAYSIZE(CVS1_A_RAIDEN_COLLECTION) },
    { L"Rugal", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_COLLECTION, ARRAYSIZE(CVS1_A_RUGAL_COLLECTION) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_COLLECTION, ARRAYSIZE(CVS1_A_VICE_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_COLLECTION, ARRAYSIZE(CVS1_A_BENIMARU_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_COLLECTION, ARRAYSIZE(CVS1_A_YURI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_COLLECTION, ARRAYSIZE(CVS1_A_KING_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_COLLECTION, ARRAYSIZE(CVS1_A_NAKORURU_COLLECTION) },
    { L"Orochi Iori", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_COLLECTION, ARRAYSIZE(CVS1_A_OROCHIIORI_COLLECTION) },
    { L"Boxer", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_COLLECTION, ARRAYSIZE(CVS1_A_BOXER_COLLECTION) },
};

const sDescTreeNode CVS1_S_UNITS[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)CVS1_A_RYU_COLLECTION, ARRAYSIZE(CVS1_A_RYU_COLLECTION), -(0x8b6d00 - 0x290c00) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)CVS1_A_KEN_COLLECTION, ARRAYSIZE(CVS1_A_KEN_COLLECTION), -(0x96f6e0 - 0x349ce0) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)CVS1_A_CHUNLI_COLLECTION, ARRAYSIZE(CVS1_A_CHUNLI_COLLECTION), -(0x9f2820 - 0x3cd440) },
    { L"Guile", DESC_NODETYPE_TREE, (void*)CVS1_A_GUILE_COLLECTION, ARRAYSIZE(CVS1_A_GUILE_COLLECTION), -(0xa8c3c0 - 0x4676a0) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)CVS1_A_ZANGIEF_COLLECTION, ARRAYSIZE(CVS1_A_ZANGIEF_COLLECTION), -(0xb7c1e0 - 0x557920) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)CVS1_A_DHALSIM_COLLECTION, ARRAYSIZE(CVS1_A_DHALSIM_COLLECTION), -(0xc37180 - 0x612ae0) },
    { L"E. Honda", DESC_NODETYPE_TREE, (void*)CVS1_A_EHONDA_COLLECTION, ARRAYSIZE(CVS1_A_EHONDA_COLLECTION), -(0xcc16a0 - 0x69d860) },
    { L"Blanka", DESC_NODETYPE_TREE, (void*)CVS1_A_BLANKA_COLLECTION, ARRAYSIZE(CVS1_A_BLANKA_COLLECTION), -(0xda7220 - 0x7836c0) },
    { L"Claw", DESC_NODETYPE_TREE, (void*)CVS1_A_CLAW_COLLECTION, ARRAYSIZE(CVS1_A_CLAW_COLLECTION), -(0xe588a0 - 0x8351c0) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)CVS1_A_SAGAT_COLLECTION, ARRAYSIZE(CVS1_A_SAGAT_COLLECTION), -(0xed45c0 - 0x8b1860) },
    { L"Dictator", DESC_NODETYPE_TREE, (void*)CVS1_A_DICTATOR_COLLECTION, ARRAYSIZE(CVS1_A_DICTATOR_COLLECTION), -(0xf7c3e0 - 0x959920) },
    { L"Sakura", DESC_NODETYPE_TREE, (void*)CVS1_A_SAKURA_COLLECTION, ARRAYSIZE(CVS1_A_SAKURA_COLLECTION), -(0x1011c20 - 0x9ef360) },
    { L"Cammy", DESC_NODETYPE_TREE, (void*)CVS1_A_CAMMY_COLLECTION, ARRAYSIZE(CVS1_A_CAMMY_COLLECTION), -(0x1098c20 - 0xa76b00) },
    { L"Akuma", DESC_NODETYPE_TREE, (void*)CVS1_A_AKUMA_COLLECTION, ARRAYSIZE(CVS1_A_AKUMA_COLLECTION), -(0x1141920 - 0xb20040) },
    { L"Morrigan", DESC_NODETYPE_TREE, (void*)CVS1_A_MORRIGAN_COLLECTION, ARRAYSIZE(CVS1_A_MORRIGAN_COLLECTION), -(0x11f23a0 - 0xbd0d80) },
    { L"Evil Ryu", DESC_NODETYPE_TREE, (void*)CVS1_A_EVILRYU_COLLECTION, ARRAYSIZE(CVS1_A_EVILRYU_COLLECTION), -(0x1299180 - 0xc780e0) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)CVS1_A_KYO_COLLECTION, ARRAYSIZE(CVS1_A_KYO_COLLECTION), -(0x13e54e0 - 0xdc4660) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)CVS1_A_IORI_COLLECTION, ARRAYSIZE(CVS1_A_IORI_COLLECTION), -(0x14dd0c0 - 0xebc700) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)CVS1_A_TERRY_COLLECTION, ARRAYSIZE(CVS1_A_TERRY_COLLECTION), -(0x1591e40 - 0xf71880) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)CVS1_A_RYO_COLLECTION, ARRAYSIZE(CVS1_A_RYO_COLLECTION), -(0x164ea20 - 0x102e7a0) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)CVS1_A_MAI_COLLECTION, ARRAYSIZE(CVS1_A_MAI_COLLECTION), -(0x178f940 - 0x116faa0) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)CVS1_A_KIM_COLLECTION, ARRAYSIZE(CVS1_A_KIM_COLLECTION), -(0x180ff40 - 0x11f0940) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)CVS1_A_GEESE_COLLECTION, ARRAYSIZE(CVS1_A_GEESE_COLLECTION), -(0x18d57c0 - 0x12b64a0) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)CVS1_A_YAMAZAKI_COLLECTION, ARRAYSIZE(CVS1_A_YAMAZAKI_COLLECTION), -(0x19de900 - 0x13bfc40) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)CVS1_A_RAIDEN_COLLECTION, ARRAYSIZE(CVS1_A_RAIDEN_COLLECTION), -(0x1ac14e0 - 0x14a2a20) },
    // Note that Rugal is slightly color tweaked from vanilla CvS1
    { L"Rugal", DESC_NODETYPE_TREE, (void*)CVS1_A_RUGAL_COLLECTION, ARRAYSIZE(CVS1_A_RUGAL_COLLECTION), -(0x1bcc3e0 - 0x15ae240) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)CVS1_A_VICE_COLLECTION, ARRAYSIZE(CVS1_A_VICE_COLLECTION), -(0x1cadc20 - 0x1690360) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)CVS1_A_BENIMARU_COLLECTION, ARRAYSIZE(CVS1_A_BENIMARU_COLLECTION), -(0x1d81b40 - 0x1764a60) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)CVS1_A_YURI_COLLECTION, ARRAYSIZE(CVS1_A_YURI_COLLECTION), -(0x1e093e0 - 0x17ecba0) },
    { L"King", DESC_NODETYPE_TREE, (void*)CVS1_A_KING_COLLECTION, ARRAYSIZE(CVS1_A_KING_COLLECTION), -(0x1e8c3a0 - 0x1870300) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)CVS1_A_NAKORURU_COLLECTION, ARRAYSIZE(CVS1_A_NAKORURU_COLLECTION), -(0x1f3cb40 - 0x19212a0) },
    { L"Orochi Iori", DESC_NODETYPE_TREE, (void*)CVS1_A_OROCHIIORI_COLLECTION, ARRAYSIZE(CVS1_A_OROCHIIORI_COLLECTION), -(0x202f480 - 0x1a13f80) },
    { L"Boxer", DESC_NODETYPE_TREE, (void*)CVS1_A_BOXER_COLLECTION, ARRAYSIZE(CVS1_A_BOXER_COLLECTION), -(0x20bc180 - 0x1aa1000) },

    // No shift needed for these two
    { L"Dan", DESC_NODETYPE_TREE, (void*)CVS1_S_DAN_COLLECTION, ARRAYSIZE(CVS1_S_DAN_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)CVS1_S_JOE_COLLECTION, ARRAYSIZE(CVS1_S_JOE_COLLECTION) },
};

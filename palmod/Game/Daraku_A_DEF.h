#pragma once

const std::vector<uint16_t> DARAKU_A_IMGIDS_USED =
{
    indexDarakuSprites_Carlos,          // 0xa0
    indexDarakuSprites_Cool,            // 0xa1
    indexDarakuSprites_Haiji,           // 0xa2
    indexDarakuSprites_Harry,           // 0xa3
    indexDarakuSprites_Roche,           // 0xa4
    indexDarakuSprites_Taro,            // 0xa5
    indexDarakuSprites_Torao,           // 0xa6
    indexDarakuSprites_Trigger,         // 0xa7
    indexDarakuSprites_Yuiran,          // 0xa8
    indexDarakuSprites_Yuiren,          // 0xa9
    indexDarakuSprites_Bonus,           // 0xaa
};

const sGame_PaletteDataset Daraku_A_Yuiren_P1_PALETTES[] =
{
    { L"Yuiren Stage P1", 0x85c8, 0x8648, indexDarakuSprites_Yuiren, 0x00 },
    { L"Yuiran Stage P1", 0x8648, 0x86c8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Cool Stage P1", 0x86c8, 0x8748, indexDarakuSprites_Yuiren, 0x00 },
    { L"Harry Stage P1", 0x8748, 0x87c8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Taro Stage P1", 0x87c8, 0x8848, indexDarakuSprites_Yuiren, 0x00 },
    { L"Roche Stage P1", 0x8848, 0x88c8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Torao Stage P1", 0x88c8, 0x8948, indexDarakuSprites_Yuiren, 0x00 },
    { L"Haiji Stage P1", 0x8948, 0x89c8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Trigger Stage P1", 0x89c8, 0x8a48, indexDarakuSprites_Yuiren, 0x00 },
    { L"Carlos Stage P1", 0x8a48, 0x8ac8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Base Palette P1", 0x8d48, 0x8dc8, indexDarakuSprites_Yuiren, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Yuiren_P2_PALETTES[] =
{
    { L"Yuiren Stage P2", 0x8dc8, 0x8e48, indexDarakuSprites_Yuiren, 0x00 },
    { L"Yuiran Stage P2", 0x8e48, 0x8ec8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Cool Stage P2", 0x8ec8, 0x8f48, indexDarakuSprites_Yuiren, 0x00 },
    { L"Harry Stage P2", 0x8f48, 0x8fc8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Taro Stage P2", 0x8fc8, 0x9048, indexDarakuSprites_Yuiren, 0x00 },
    { L"Roche Stage P2", 0x9048, 0x90c8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Torao Stage P2", 0x90c8, 0x9148, indexDarakuSprites_Yuiren, 0x00 },
    { L"Haiji Stage P2", 0x9148, 0x91c8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Trigger Stage P2", 0x91c8, 0x9248, indexDarakuSprites_Yuiren, 0x00 },
    { L"Carlos Stage P2", 0x9248, 0x92c8, indexDarakuSprites_Yuiren, 0x00 },
    { L"Base Palette P2", 0x92c8, 0x9348, indexDarakuSprites_Yuiren, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Yuiren_SHARED_PALETTES[] =
{
    // -Shared (Yuiren/Yuiran)-
    { L"???1", 0x8ac8, 0x8b48, indexDarakuSprites_Yuiren, 0x00 },
    { L"Harry Stage Outline/Burning", 0x8b48, 0x8bc8, indexDarakuSprites_Yuiren, 0x00 },
    { L"MAX/Super Flash", 0x8bc8, 0x8c48, indexDarakuSprites_Yuiren, 0x00 },
    { L"Trigger Stage Outline", 0x8c48, 0x8cc8, indexDarakuSprites_Yuiren, 0x00 },
    { L"???2", 0x8cc8, 0x8d48, indexDarakuSprites_Yuiren, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Yuiren_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar/Selected Icon", 0xdfc8, 0xe008, indexDarakuSprites_Yuiren, 0x10 },
    { L"Select P1", 0xeb88, 0xef88, indexDarakuSprites_Yuiren, 0x20 },
    { L"Select P2", 0xef88, 0xf388, indexDarakuSprites_Yuiren, 0x21 },
    { L"Victory P1", 0x1d1c8, 0x1d5c8, indexDarakuSprites_Yuiren, 0x30 },
    { L"Victory P2", 0x1d5c8, 0x1d9c8, indexDarakuSprites_Yuiren, 0x31 },
};

const sGame_PaletteDataset Daraku_A_Yuiran_P1_PALETTES[] =
{
    // -P1-
    { L"Yuiren Stage P1", 0x9348, 0x9388, indexDarakuSprites_Yuiran, 0x00 },
    { L"Yuiran Stage P1", 0x9388, 0x93c8, indexDarakuSprites_Yuiran, 0x00 },
    { L"Cool Stage P1", 0x93c8, 0x9408, indexDarakuSprites_Yuiran, 0x00 },
    { L"Harry Stage P1", 0x9408, 0x9448, indexDarakuSprites_Yuiran, 0x00 },
    { L"Taro Stage P1", 0x9448, 0x9488, indexDarakuSprites_Yuiran, 0x00 },
    { L"Roche Stage P1", 0x9488, 0x94c8, indexDarakuSprites_Yuiran, 0x00 },
    { L"Torao Stage P1", 0x94c8, 0x9508, indexDarakuSprites_Yuiran, 0x00 },
    { L"Haiji Stage P1", 0x9508, 0x9548, indexDarakuSprites_Yuiran, 0x00 },
    { L"Trigger Stage P1", 0x9548, 0x9588, indexDarakuSprites_Yuiran, 0x00 },
    { L"Carlos Stage P1", 0x9588, 0x95c8, indexDarakuSprites_Yuiran, 0x00 },
    { L"Base Palette P1", 0x9608, 0x9648, indexDarakuSprites_Yuiran, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Yuiran_P2_PALETTES[] =
{
    // -P2-
    { L"Yuiren Stage P2", 0x9648, 0x9688, indexDarakuSprites_Yuiran, 0x00 },
    { L"Yuiran Stage P2", 0x9688, 0x96c8, indexDarakuSprites_Yuiran, 0x00 },
    { L"Cool Stage P2", 0x96c8, 0x9708, indexDarakuSprites_Yuiran, 0x00 },
    { L"Harry Stage P2", 0x9708, 0x9748, indexDarakuSprites_Yuiran, 0x00 },
    { L"Taro Stage P2", 0x9748, 0x9788, indexDarakuSprites_Yuiran, 0x00 },
    { L"Roche Stage P2", 0x9788, 0x97c8, indexDarakuSprites_Yuiran, 0x00 },
    { L"Torao Stage P2", 0x97c8, 0x9808, indexDarakuSprites_Yuiran, 0x00 },
    { L"Haiji Stage P2", 0x9808, 0x9848, indexDarakuSprites_Yuiran, 0x00 },
    { L"Trigger Stage P2", 0x9848, 0x9888, indexDarakuSprites_Yuiran, 0x00 },
    { L"Carlos Stage P2", 0x9888, 0x98c8, indexDarakuSprites_Yuiran, 0x00 },
    { L"Base Palette P2", 0x98c8, 0x9908, indexDarakuSprites_Yuiran, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Yuiran_SHARED_PALETTES[] =
{
    // -Shared (Yuiran)-
    { L"???1", 0x95c8, 0x9608, indexDarakuSprites_Yuiran, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Yuiran_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar", 0xe008, 0xe048, indexDarakuSprites_Yuiran, 0x10 },
    { L"Select P1", 0xf388, 0xf788, indexDarakuSprites_Yuiran, 0x20 },
    { L"Select P2", 0xf788, 0xfb88, indexDarakuSprites_Yuiran, 0x21 },
    { L"Victory P1", 0x1d9c8, 0x1ddc8, indexDarakuSprites_Yuiran, 0x30 },
    { L"Victory P2", 0x1ddc8, 0x1e1c8, indexDarakuSprites_Yuiran, 0x31 },
};

const sGame_PaletteDataset Daraku_A_Cool_P1_PALETTES[] =
{
    // -P1-
    { L"Yuiren Stage P1", 0x9908, 0x9948, indexDarakuSprites_Cool, 0x00 },
    { L"Yuiran Stage P1", 0x9948, 0x9988, indexDarakuSprites_Cool, 0x00 },
    { L"Cool Stage P1", 0x9988, 0x99c8, indexDarakuSprites_Cool, 0x00 },
    { L"Harry Stage P1", 0x99c8, 0x9a08, indexDarakuSprites_Cool, 0x00 },
    { L"Taro Stage P1", 0x9a08, 0x9a48, indexDarakuSprites_Cool, 0x00 },
    { L"Roche Stage P1", 0x9a48, 0x9a88, indexDarakuSprites_Cool, 0x00 },
    { L"Torao Stage P1", 0x9a88, 0x9ac8, indexDarakuSprites_Cool, 0x00 },
    { L"Haiji Stage P1", 0x9ac8, 0x9b08, indexDarakuSprites_Cool, 0x00 },
    { L"Trigger Stage P1", 0x9b08, 0x9b48, indexDarakuSprites_Cool, 0x00 },
    { L"Carlos Stage P1", 0x9b48, 0x9b88, indexDarakuSprites_Cool, 0x00 },
    { L"Base Palette P1", 0x9cc8, 0x9d08, indexDarakuSprites_Cool, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Cool_P2_PALETTES[] =
{
    // -P2-
    { L"Yuiren Stage P2", 0x9d08, 0x9d48, indexDarakuSprites_Cool, 0x00 },
    { L"Yuiran Stage P2", 0x9d48, 0x9d88, indexDarakuSprites_Cool, 0x00 },
    { L"Cool Stage P2", 0x9d88, 0x9dc8, indexDarakuSprites_Cool, 0x00 },
    { L"Harry Stage P2", 0x9dc8, 0x9e08, indexDarakuSprites_Cool, 0x00 },
    { L"Taro Stage P2", 0x9e08, 0x9e48, indexDarakuSprites_Cool, 0x00 },
    { L"Roche Stage P2", 0x9e48, 0x9e88, indexDarakuSprites_Cool, 0x00 },
    { L"Torao Stage P2", 0x9e88, 0x9ec8, indexDarakuSprites_Cool, 0x00 },
    { L"Haiji Stage P2", 0x9ec8, 0x9f08, indexDarakuSprites_Cool, 0x00 },
    { L"Trigger Stage P2", 0x9f08, 0x9f48, indexDarakuSprites_Cool, 0x00 },
    { L"Carlos Stage P2", 0x9f48, 0x9f88, indexDarakuSprites_Cool, 0x00 },
    { L"Base Palette P2", 0x9f88, 0x9fc8, indexDarakuSprites_Cool, 0x00 },
};

const sGame_PaletteDataset Daraku_A_Cool_SHARED_PALETTES[] =
{
    // -Shared-
    { L"???1", 0x9b88, 0x9bc8, indexDarakuSprites_Cool, 0x00 },
    { L"Harry Stage Outline/Burning", 0x9bc8, 0x9c08, indexDarakuSprites_Cool, 0x00 },
    { L"MAX/Super Flash", 0x9c08, 0x9c48, indexDarakuSprites_Cool, 0x00 },
    { L"Trigger Stage Outline", 0x9c48, 0x9c88, indexDarakuSprites_Cool, 0x00 },
    { L"???2", 0x9c88, 0x9cc8, indexDarakuSprites_Cool, 0x00 },
    { L"Darts and Feathers 1", 0x9fc8, 0xa008, indexDarakuSprites_Cool, 0x01 },
    { L"Darts and Feathers 2", 0xa008, 0xa048, indexDarakuSprites_Cool, 0x01 },
};

const sGame_PaletteDataset Daraku_A_Cool_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar", 0xe048, 0xe088, indexDarakuSprites_Cool, 0x10 },
    { L"Select P1", 0xfb88, 0xff88, indexDarakuSprites_Cool, 0x20 },
    { L"Select P2", 0xff88, 0x10388, indexDarakuSprites_Cool, 0x21 },
    { L"Victory P1", 0x1e1c8, 0x1e5c8, indexDarakuSprites_Cool, 0x30 },
    { L"Victory P2", 0x1e5c8, 0x1e9c8, indexDarakuSprites_Cool, 0x31 },
};

const sGame_PaletteDataset Daraku_A_HarryNess_P1_PALETTES[] =
{
    // -P1-
    { L"Yuiren Stage P1", 0xa048, 0xa088, indexDarakuSprites_Harry, 0x00 },
    { L"Yuiran Stage P1", 0xa088, 0xa0c8, indexDarakuSprites_Harry, 0x00 },
    { L"Cool Stage P1", 0xa0c8, 0xa108, indexDarakuSprites_Harry, 0x00 },
    { L"Harry Stage P1", 0xa108, 0xa148, indexDarakuSprites_Harry, 0x00 },
    { L"Taro Stage P1", 0xa148, 0xa188, indexDarakuSprites_Harry, 0x00 },
    { L"Roche Stage P1", 0xa188, 0xa1c8, indexDarakuSprites_Harry, 0x00 },
    { L"Torao Stage P1", 0xa1c8, 0xa208, indexDarakuSprites_Harry, 0x00 },
    { L"Haiji Stage P1", 0xa208, 0xa248, indexDarakuSprites_Harry, 0x00 },
    { L"Trigger Stage P1", 0xa248, 0xa288, indexDarakuSprites_Harry, 0x00 },
    { L"Carlos Stage P1", 0xa288, 0xa2c8, indexDarakuSprites_Harry, 0x00 },
    { L"Base Palette P1", 0xa408, 0xa448, indexDarakuSprites_Harry, 0x00 },
};

const sGame_PaletteDataset Daraku_A_HarryNess_P2_PALETTES[] =
{
    // -P2-
    { L"Yuiren Stage P2", 0xa448, 0xa488, indexDarakuSprites_Harry, 0x00 },
    { L"Yuiran Stage P2", 0xa488, 0xa4c8, indexDarakuSprites_Harry, 0x00 },
    { L"Cool Stage P2", 0xa4c8, 0xa508, indexDarakuSprites_Harry, 0x00 },
    { L"Harry Stage P2", 0xa508, 0xa548, indexDarakuSprites_Harry, 0x00 },
    { L"Taro Stage P2", 0xa548, 0xa588, indexDarakuSprites_Harry, 0x00 },
    { L"Roche Stage P2", 0xa588, 0xa5c8, indexDarakuSprites_Harry, 0x00 },
    { L"Torao Stage P2", 0xa5c8, 0xa608, indexDarakuSprites_Harry, 0x00 },
    { L"Haiji Stage P2", 0xa608, 0xa648, indexDarakuSprites_Harry, 0x00 },
    { L"Trigger Stage P2", 0xa648, 0xa688, indexDarakuSprites_Harry, 0x00 },
    { L"Carlos Stage P2", 0xa688, 0xa6c8, indexDarakuSprites_Harry, 0x00 },
    { L"Base Palette P2", 0xa6c8, 0xa708, indexDarakuSprites_Harry, 0x00 },
};

const sGame_PaletteDataset Daraku_A_HarryNess_SHARED_PALETTES[] =
{
    // -Shared-
    { L"???1", 0xa2c8, 0xa308, indexDarakuSprites_Harry, 0x00 },
    { L"Harry Stage Outline/Burning", 0xa308, 0xa348, indexDarakuSprites_Harry, 0x00 },
    { L"MAX/Super Flash", 0xa348, 0xa388, indexDarakuSprites_Harry, 0x00 },
    { L"Trigger Stage Outline", 0xa388, 0xa3c8, indexDarakuSprites_Harry, 0x00 },
    { L"???2", 0xa3c8, 0xa408, indexDarakuSprites_Harry, 0x00 },
    { L"Wild Boar Flash/Ring", 0xa708, 0xa748 },
    { L"Wild Boar Dust", 0xa748, 0xa788 },
    { L"Rockets", 0xa788, 0xa808, indexDarakuSprites_Harry, 0x01 },
};

const sGame_PaletteDataset Daraku_A_HarryNess_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar", 0xe088, 0xe0c8, indexDarakuSprites_Harry, 0x10 },
    { L"Select P1", 0x10388, 0x10788, indexDarakuSprites_Harry, 0x20 },
    { L"Select P2", 0x10788, 0x10b88, indexDarakuSprites_Harry, 0x21 },
    { L"Victory P1", 0x1e9c8, 0x1edc8, indexDarakuSprites_Harry, 0x30 },
    { L"Victory P2", 0x1edc8, 0x1f1c8, indexDarakuSprites_Harry, 0x31 },
};

const sGame_PaletteDataset Daraku_A_Taro_P1_PALETTES[] =
{
    // -P1-
    { L"Yuiren Stage P1", 0xa808, 0xa888, indexDarakuSprites_Taro, 0x00 },
    { L"Yuiran Stage P1", 0xa888, 0xa908, indexDarakuSprites_Taro, 0x00 },
    { L"Cool Stage P1", 0xa908, 0xa988, indexDarakuSprites_Taro, 0x00 },
    { L"Harry Stage P1", 0xa988, 0xaa08, indexDarakuSprites_Taro, 0x00 },
    { L"Taro Stage P1", 0xaa08, 0xaa88, indexDarakuSprites_Taro, 0x00 },
    { L"Roche Stage P1", 0xaa88, 0xab08, indexDarakuSprites_Taro, 0x00 },
    { L"Torao Stage P1", 0xab08, 0xab88, indexDarakuSprites_Taro, 0x00 },
    { L"Haiji Stage P1", 0xab88, 0xac08, indexDarakuSprites_Taro, 0x00 },
    { L"Trigger Stage P1", 0xac08, 0xac88, indexDarakuSprites_Taro, 0x00 },
    { L"Carlos Stage P1", 0xac88, 0xad08, indexDarakuSprites_Taro, 0x00 },
    { L"Base Palette P1", 0xaf88, 0xb008, indexDarakuSprites_Taro, 0x00 },
};

const sGame_PaletteDataset Daraku_A_TARO_P2_PALETTES[] =
{
    // -P2-
    { L"Yuiren Stage P2", 0xb008, 0xb088, indexDarakuSprites_Taro, 0x00 },
    { L"Yuiran Stage P2", 0xb088, 0xb108, indexDarakuSprites_Taro, 0x00 },
    { L"Cool Stage P2", 0xb108, 0xb188, indexDarakuSprites_Taro, 0x00 },
    { L"Harry Stage P2", 0xb188, 0xb208, indexDarakuSprites_Taro, 0x00 },
    { L"Taro Stage P2", 0xb208, 0xb288, indexDarakuSprites_Taro, 0x00 },
    { L"Roche Stage P2", 0xb288, 0xb308, indexDarakuSprites_Taro, 0x00 },
    { L"Torao Stage P2", 0xb308, 0xb388, indexDarakuSprites_Taro, 0x00 },
    { L"Haiji Stage P2", 0xb388, 0xb408, indexDarakuSprites_Taro, 0x00 },
    { L"Trigger Stage P2", 0xb408, 0xb488, indexDarakuSprites_Taro, 0x00 },
    { L"Carlos Stage P2", 0xb488, 0xb508, indexDarakuSprites_Taro, 0x00 },
    { L"Base Palette P2", 0xb588, 0xb608, indexDarakuSprites_Taro, 0x00 },
};

const sGame_PaletteDataset Daraku_A_TARO_SHARED_PALETTES[] =
{
    // -Shared-
    { L"???1", 0xad08, 0xad88, indexDarakuSprites_Taro, 0x00 },
    { L"Harry Stage Outline/Burning", 0xad88, 0xae08, indexDarakuSprites_Taro, 0x00 },
    { L"MAX/Super Flash", 0xae08, 0xae88, indexDarakuSprites_Taro, 0x00 },
    { L"Trigger Stage Outline", 0xae88, 0xaf08, indexDarakuSprites_Taro, 0x00 },
    { L"???2", 0xaf08, 0xaf88, indexDarakuSprites_Taro, 0x00 },
    { L"???3", 0xb508, 0xb588, indexDarakuSprites_Taro, 0x00 },
    { L"???4", 0xb608, 0xb688, indexDarakuSprites_Taro, 0x00 },
    { L"Intro Cat", 0xb688, 0xb6c8, indexDarakuSprites_Taro, 0x01 },
    { L"???6", 0xb6c8, 0xb748, indexDarakuSprites_Taro, 0x00 },
};

const sGame_PaletteDataset Daraku_A_TARO_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar", 0xe0c8, 0xe108, indexDarakuSprites_Taro, 0x10 },
    { L"Select P1", 0x10b88, 0x10f88, indexDarakuSprites_Taro, 0x20 },
    { L"Select P2", 0x10f88, 0x11388, indexDarakuSprites_Taro, 0x21 },
    { L"Victory P1", 0x1f1c8, 0x1f5c8, indexDarakuSprites_Taro, 0x30 },
    { L"Victory P2", 0x1f5c8, 0x1f9c8, indexDarakuSprites_Taro, 0x31 },
};

const sGame_PaletteDataset Daraku_A_RuccioRoche_P1_PALETTES[] =
{
    // -P1-
    { L"Yuiren Stage P1", 0xb748, 0xb788, indexDarakuSprites_Roche, 0x00 },
    { L"Yuiran Stage P1", 0xb788, 0xb7c8, indexDarakuSprites_Roche, 0x00 },
    { L"Cool Stage P1", 0xb7c8, 0xb808, indexDarakuSprites_Roche, 0x00 },
    { L"Harry Stage P1", 0xb808, 0xb848, indexDarakuSprites_Roche, 0x00 },
    { L"Taro Stage P1", 0xb848, 0xb888, indexDarakuSprites_Roche, 0x00 },
    { L"Roche Stage P1", 0xb888, 0xb8c8, indexDarakuSprites_Roche, 0x00 },
    { L"Torao Stage P1", 0xb8c8, 0xb908, indexDarakuSprites_Roche, 0x00 },
    { L"Haiji Stage P1", 0xb908, 0xb948, indexDarakuSprites_Roche, 0x00 },
    { L"Trigger Stage P1", 0xb948, 0xb988, indexDarakuSprites_Roche, 0x00 },
    { L"Carlos Stage P1", 0xb988, 0xb9c8, indexDarakuSprites_Roche, 0x00 },
    { L"Base Palette P1", 0xbb08, 0xbb48, indexDarakuSprites_Roche, 0x00 },
};

const sGame_PaletteDataset Daraku_A_RuccioRoche_P2_PALETTES[] =
{
    // -P2-
    { L"Yuiren Stage P2", 0xbb48, 0xbb88, indexDarakuSprites_Roche, 0x00 },
    { L"Yuiran Stage P2", 0xbb88, 0xbbc8, indexDarakuSprites_Roche, 0x00 },
    { L"Cool Stage P2", 0xbbc8, 0xbc08, indexDarakuSprites_Roche, 0x00 },
    { L"Harry Stage P2", 0xbc08, 0xbc48, indexDarakuSprites_Roche, 0x00 },
    { L"Taro Stage P2", 0xbc48, 0xbc88, indexDarakuSprites_Roche, 0x00 },
    { L"Roche Stage P2", 0xbc88, 0xbcc8, indexDarakuSprites_Roche, 0x00 },
    { L"Torao Stage P2", 0xbcc8, 0xbd08, indexDarakuSprites_Roche, 0x00 },
    { L"Haiji Stage P2", 0xbd08, 0xbd48, indexDarakuSprites_Roche, 0x00 },
    { L"Trigger Stage P2", 0xbd48, 0xbd88, indexDarakuSprites_Roche, 0x00 },
    { L"Carlos Stage P2", 0xbd88, 0xbdc8, indexDarakuSprites_Roche, 0x00 },
    { L"Base Palette P2", 0xbdc8, 0xbe08, indexDarakuSprites_Roche, 0x00 },
};

const sGame_PaletteDataset Daraku_A_RuccioRoche_SHARED_PALETTES[] =
{
    // -Shared-
    { L"???1", 0xb9c8, 0xba08, indexDarakuSprites_Roche, 0x00 },
    { L"Harry Stage Outline/Burning", 0xba08, 0xba48, indexDarakuSprites_Roche, 0x00 },
    { L"MAX/Super Flash", 0xba48, 0xba88, indexDarakuSprites_Roche, 0x00 },
    { L"Trigger Stage Outline", 0xba88, 0xbac8, indexDarakuSprites_Roche, 0x00 },
    { L"???2", 0xbac8, 0xbb08, indexDarakuSprites_Roche, 0x00 },
};

const sGame_PaletteDataset Daraku_A_RuccioRoche_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar/Selected Icon", 0xe108, 0xe148, indexDarakuSprites_Roche, 0x10 },
    { L"Select P1", 0x11388, 0x11788, indexDarakuSprites_Roche, 0x20 },
    { L"Select P2", 0x11788, 0x11b88, indexDarakuSprites_Roche, 0x21 },
    { L"Victory P1", 0x1f9c8, 0x1fdc8, indexDarakuSprites_Roche, 0x30 },
    { L"Victory P2", 0x1fdc8, 0x201c8, indexDarakuSprites_Roche, 0x31 },
};

const sGame_PaletteDataset Daraku_A_ToraoOnigawara_P1_PALETTES[] =
{
    // -P1-
    { L"Yuiren Stage P1", 0xbe08, 0xbe48, indexDarakuSprites_Torao, 0x00 },
    { L"Yuiran Stage P1", 0xbe48, 0xbe88, indexDarakuSprites_Torao, 0x00 },
    { L"Cool Stage P1", 0xbe88, 0xbec8, indexDarakuSprites_Torao, 0x00 },
    { L"Harry Stage P1", 0xbec8, 0xbf08, indexDarakuSprites_Torao, 0x00 },
    { L"Taro Stage P1", 0xbf08, 0xbf48, indexDarakuSprites_Torao, 0x00 },
    { L"Roche Stage P1", 0xbf48, 0xbf88, indexDarakuSprites_Torao, 0x00 },
    { L"Torao Stage P1", 0xbf88, 0xbfc8, indexDarakuSprites_Torao, 0x00 },
    { L"Haiji Stage P1", 0xbfc8, 0xc008, indexDarakuSprites_Torao, 0x00 },
    { L"Trigger Stage P1", 0xc008, 0xc048, indexDarakuSprites_Torao, 0x00 },
    { L"Carlos Stage P1", 0xc048, 0xc088, indexDarakuSprites_Torao, 0x00 },
    { L"Base Palette P1", 0xc1c8, 0xc208, indexDarakuSprites_Torao, 0x00 },
};

const sGame_PaletteDataset Daraku_A_ToraoOnigawara_P2_PALETTES[] =
{
    // -P2-
    { L"Yuiren Stage P2", 0xc208, 0xc248, indexDarakuSprites_Torao, 0x00 },
    { L"Yuiran Stage P2", 0xc248, 0xc288, indexDarakuSprites_Torao, 0x00 },
    { L"Cool Stage P2", 0xc288, 0xc2c8, indexDarakuSprites_Torao, 0x00 },
    { L"Harry Stage P2", 0xc2c8, 0xc308, indexDarakuSprites_Torao, 0x00 },
    { L"Taro Stage P2", 0xc308, 0xc348, indexDarakuSprites_Torao, 0x00 },
    { L"Roche Stage P2", 0xc348, 0xc388, indexDarakuSprites_Torao, 0x00 },
    { L"Torao Stage P2", 0xc388, 0xc3c8, indexDarakuSprites_Torao, 0x00 },
    { L"Haiji Stage P2", 0xc3c8, 0xc408, indexDarakuSprites_Torao, 0x00 },
    { L"Trigger Stage P2", 0xc408, 0xc448, indexDarakuSprites_Torao, 0x00 },
    { L"Carlos Stage P2", 0xc448, 0xc488, indexDarakuSprites_Torao, 0x00 },
    { L"Base Palette P2", 0xc488, 0xc4c8, indexDarakuSprites_Torao, 0x00 },
};

const sGame_PaletteDataset Daraku_A_ToraoOnigawara_SHARED_PALETTES[] =
{
    // -Shared-
    { L"???1", 0xc088, 0xc0c8, indexDarakuSprites_Torao, 0x00 },
    { L"Harry Stage Outline/Burning", 0xc0c8, 0xc108, indexDarakuSprites_Torao, 0x00 },
    { L"MAX/Super Flash", 0xc108, 0xc148, indexDarakuSprites_Torao, 0x00 },
    { L"Trigger Stage Outline", 0xc148, 0xc188, indexDarakuSprites_Torao, 0x00 },
    { L"???2", 0xc188, 0xc1c8, indexDarakuSprites_Torao, 0x00 },
    { L"???3", 0xc4c8, 0xc508, indexDarakuSprites_Torao, 0x00 },
    { L"Intro Rock", 0xc508, 0xc548, indexDarakuSprites_Torao, 0x01 },
    { L"???5", 0xc548, 0xc588, indexDarakuSprites_Torao, 0x00 },
    { L"Red Flash", 0xc588, 0xc5c8, indexDarakuSprites_Torao, 0x00 },
};

const sGame_PaletteDataset Daraku_A_ToraoOnigawara_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar", 0xe148, 0xe188, indexDarakuSprites_Torao, 0x10 },
    { L"Select P1", 0x11f88, 0x12388, indexDarakuSprites_Torao, 0x20 },
    { L"Select P2", 0x11b88, 0x11f88, indexDarakuSprites_Torao, 0x21 },
    { L"Victory P1", 0x201c8, 0x205c8, indexDarakuSprites_Torao, 0x30 },
    { L"Victory P2", 0x205c8, 0x209c8, indexDarakuSprites_Torao, 0x31 },
};

const sGame_PaletteDataset Daraku_A_HaijiMibu_P1_PALETTES[] =
{
    // -P1-
    { L"Yuiren Stage P1", 0xc5c8, 0xc608, indexDarakuSprites_Haiji, 0x00 },
    { L"Yuiran Stage P1", 0xc608, 0xc648, indexDarakuSprites_Haiji, 0x00 },
    { L"Cool Stage P1", 0xc648, 0xc688, indexDarakuSprites_Haiji, 0x00 },
    { L"Harry Stage P1", 0xc688, 0xc6c8, indexDarakuSprites_Haiji, 0x00 },
    { L"Taro Stage P1", 0xc6c8, 0xc708, indexDarakuSprites_Haiji, 0x00 },
    { L"Roche Stage P1", 0xc708, 0xc748, indexDarakuSprites_Haiji, 0x00 },
    { L"Torao Stage P1", 0xc748, 0xc788, indexDarakuSprites_Haiji, 0x00 },
    { L"Haiji Stage P1", 0xc788, 0xc7c8, indexDarakuSprites_Haiji, 0x00 },
    { L"Trigger Stage P1", 0xc7c8, 0xc808, indexDarakuSprites_Haiji, 0x00 },
    { L"Carlos Stage P1", 0xc808, 0xc848, indexDarakuSprites_Haiji, 0x00 },
    { L"Base Palette P1", 0xc988, 0xc9c8, indexDarakuSprites_Haiji, 0x00 },
};

const sGame_PaletteDataset Daraku_A_HaijiMibu_P2_PALETTES[] =
{
    // -P2-
    { L"Yuiren Stage P2", 0xc9c8, 0xca08, indexDarakuSprites_Haiji, 0x00 },
    { L"Yuiran Stage P2", 0xca08, 0xca48, indexDarakuSprites_Haiji, 0x00 },
    { L"Cool Stage P2", 0xca48, 0xca88, indexDarakuSprites_Haiji, 0x00 },
    { L"Harry Stage P2", 0xca88, 0xcac8, indexDarakuSprites_Haiji, 0x00 },
    { L"Taro Stage P2", 0xcac8, 0xcb08, indexDarakuSprites_Haiji, 0x00 },
    { L"Roche Stage P2", 0xcb08, 0xcb48, indexDarakuSprites_Haiji, 0x00 },
    { L"Torao Stage P2", 0xcb48, 0xcb88, indexDarakuSprites_Haiji, 0x00 },
    { L"Haiji Stage P2", 0xcb88, 0xcbc8, indexDarakuSprites_Haiji, 0x00 },
    { L"Trigger Stage P2", 0xcbc8, 0xcc08, indexDarakuSprites_Haiji, 0x00 },
    { L"Carlos Stage P2", 0xcc08, 0xcc48, indexDarakuSprites_Haiji, 0x00 },
    { L"Base Palette P2", 0xcc88, 0xccc8, indexDarakuSprites_Haiji, 0x00 },
};

const sGame_PaletteDataset Daraku_A_HaijiMibu_SHARED_PALETTES[] =
{
    // -Shared-
    { L"???1", 0xc848, 0xc888, indexDarakuSprites_Haiji, 0x00 },
    { L"Harry Stage Outline/Burning", 0xc888, 0xc8c8, indexDarakuSprites_Haiji, 0x00 },
    { L"MAX/Super Flash", 0xc8c8, 0xc908, indexDarakuSprites_Haiji, 0x00 },
    { L"Trigger Stage Outline", 0xc908, 0xc948, indexDarakuSprites_Haiji, 0x00 },
    { L"???2", 0xc948, 0xc988, indexDarakuSprites_Haiji, 0x00 },
    { L"Red Flash", 0xcc48, 0xcc88, indexDarakuSprites_Haiji, 0x00 },
};

const sGame_PaletteDataset Daraku_A_HaijiMibu_PORTRAIT_PALETTES[] =
{
    // -Portraits-
    { L"Lifebar", 0xe188, 0xe1c8, indexDarakuSprites_Haiji, 0x10 },
    { L"Select P1", 0x12388, 0x12788, indexDarakuSprites_Haiji, 0x20 },
    { L"Select P2", 0x12788, 0x12b88, indexDarakuSprites_Haiji, 0x21 },
    { L"Victory P1", 0x209c8, 0x20dc8, indexDarakuSprites_Haiji, 0x30 },
    { L"Victory P2", 0x20dc8, 0x211c8, indexDarakuSprites_Haiji, 0x31 },
};

const sGame_PaletteDataset Daraku_A_Trigger_PALETTES[] =
{
    // -Palettes-
    { L"Trigger Stage Palette", 0xccc8, 0xcd08, indexDarakuSprites_Trigger, 0x00 },
    { L"Trigger Stage Outline", 0xcd08, 0xcd48, indexDarakuSprites_Trigger, 0x00 },
    { L"Harry Stage Outline/Burning", 0xcd48, 0xcd88, indexDarakuSprites_Trigger, 0x00 },
    { L"MAX/Super Flash", 0xcd88, 0xcdc8, indexDarakuSprites_Trigger, 0x00 },
    { L"???1", 0xcdc8, 0xce08, indexDarakuSprites_Trigger, 0x00 },
    { L"Base Palette", 0xce08, 0xce48, indexDarakuSprites_Trigger, 0x00 },
    { L"Lifebar Portrait", 0xe1c8, 0xe208, indexDarakuSprites_Trigger, 0x10 },
    { L"Victory Portrait", 0x211c8, 0x215c8, indexDarakuSprites_Trigger, 0x30 },
};

const sGame_PaletteDataset Daraku_A_Carlos_PALETTES[] =
{
    // -Palettes-
    { L"Carlos Stage Palette", 0xce48, 0xcec8, indexDarakuSprites_Carlos, 0x00 },
    { L"Harry Stage Outline/Burning", 0xcec8, 0xcf48, indexDarakuSprites_Carlos, 0x00 },
    { L"MAX/Super Flash", 0xcf48, 0xcfc8, indexDarakuSprites_Carlos, 0x00 },
    { L"???1", 0xcfc8, 0xd048, indexDarakuSprites_Carlos, 0x00 },
    { L"???2", 0xd048, 0xd0c8, indexDarakuSprites_Carlos, 0x00 },
    { L"Base Palette", 0xd0c8, 0xd148, indexDarakuSprites_Carlos, 0x00 },
    { L"Lifebar Portrait", 0xe208, 0xe248, indexDarakuSprites_Carlos, 0x10 },
    { L"Victory Portrait", 0x215c8, 0x219c8, indexDarakuSprites_Carlos, 0x30 },
};

const sGame_PaletteDataset Daraku_A_Stages_Yuiren_Palettes[] =
{
    // -Yuiren-
    { L"Yuiren Stage", 0x748, 0xb48 },
    { L"Front Layer Objects", 0xb48, 0xf48 },
    { L"Stage Super Flash", 0xf48, 0x1348 },
};

const sGame_PaletteDataset Daraku_A_Stages_Yuiran_Palettes[] =
{
    // -Yuiran-
    { L"Yuiran Stage", 0x1348, 0x1748 },
    { L"Stage Super Flash", 0x1748, 0x1b48 },
};

const sGame_PaletteDataset Daraku_A_Stages_Cool_Palettes[] =
{
    // -Cool-
    { L"Cool 1/2", 0x1b48, 0x1f48 },
    { L"Cool 2/2", 0x1f48, 0x2348 },
    { L"Stage Super Flash", 0x2388, 0x2788 },
};

const sGame_PaletteDataset Daraku_A_Stages_Harry_Palettes[] =
{
    // -Harry-
    { L"Harry 1/3", 0x2788, 0x2b88 },
    { L"Harry 2/3", 0x2b88, 0x2f88 },
    { L"Harry 3/3", 0x2f88, 0x3388 },
    { L"Stage Super Flash", 0x3388, 0x3788 },
};

const sGame_PaletteDataset Daraku_A_Stages_Taro_Palettes[] =
{
    // -Taro-
    { L"Taro 1/2", 0x3788, 0x3b88 },
    { L"Taro 2/2", 0x3b88, 0x3f88 },
    { L"Front Layer Object 1/2", 0x3f88, 0x3fc8 },
    { L"Front Layer Object 2/2", 0x3fc8, 0x4008 },
    { L"Stage Super Flash", 0x4008, 0x4408 },
};

const sGame_PaletteDataset Daraku_A_Stages_Roche_Palettes[] =
{
    // -Roche-
    { L"Roche 1/2", 0x4408, 0x4808 },
    { L"Roche 2/2", 0x4808, 0x4ac8 },
    { L"Front Layer Objects", 0x4ac8, 0x4b88 },
    { L"Stage Super Flash", 0x4b88, 0x4f88 },
};

const sGame_PaletteDataset Daraku_A_Stages_Torao_Palettes[] =
{
    // -Torao-
    { L"Torao 1/2", 0x4f88, 0x5388 },
    { L"Torao 2/2", 0x5388, 0x5788 },
    { L"Puddle", 0x5788, 0x5b88 },
    { L"Background Objects", 0x5b88, 0x5c88 },
    { L"Stage Super Flash", 0x5c88, 0x6088 },
};

const sGame_PaletteDataset Daraku_A_Stages_Haiji_Palettes[] =
{
    // -Haiji-
    { L"Haiji 1/2", 0x6088, 0x6488 },
    { L"Haiji 2/2", 0x6488, 0x6888 },
    { L"Background Lights", 0x6888, 0x69c8 },
    { L"Stage Super Flash", 0x69c8, 0x6dc8 },
};

const sGame_PaletteDataset Daraku_A_Stages_Trigger_Palettes[] =
{
    // -Trigger-
    { L"Trigger 1/2", 0x6dc8, 0x71c8 },
    { L"Trigger 2/2", 0x71c8, 0x75c8 },
    { L"Stage Super Flash", 0x75c8, 0x79c8 },
};

const sGame_PaletteDataset Daraku_A_Stages_Carlos_Palettes[] =
{
    // -Carlos-
    { L"Carlos 1/2", 0x79c8, 0x7dc8 },
    { L"Carlos 2/2", 0x7dc8, 0x81c8 },
    { L"Stage Super Flash", 0x81c8, 0x85c8 },
};

const sGame_PaletteDataset Daraku_A_Stages_StageExtras_Palettes[] =
{
    // -Stage Extras-
    { L"Yuiren/Roche/Taro/Trigger Dust 1", 0x1ce08, 0x1ce48 },
    { L"Yuiren/Yuiran/Taro/Roche/Trigger Dust 2", 0x1cf48, 0x1cf88 },
    { L"Yuiran/Cool/Harry Dust 1", 0x1ce88, 0x1cec8 },
    { L"Cool/Harry Dust 2", 0x1cfc8, 0x1d008 },
    { L"Torao/Haiji/Carlos Dust", 0x1cec8, 0x1cf08 },
    { L"Flies", 0x2348, 0x2388 },
};

const sGame_PaletteDataset Daraku_A_Cutscenes_Arcade_Palettes[] =
{
    // -Arcade-
    { L"Cool Prefight", 0x13b88, 0x13f88, indexDarakuSprites_Bonus, 0x20 },
    { L"Harry Prefight", 0x13f88, 0x14388, indexDarakuSprites_Bonus, 0x21 },
    { L"Taro Prefight", 0x14388, 0x14788, indexDarakuSprites_Bonus, 0x22 },
    { L"Roche Prefight", 0x14788, 0x14b88, indexDarakuSprites_Bonus, 0x23 },
    { L"Torao Prefight", 0x14b88, 0x14f88, indexDarakuSprites_Bonus, 0x24 },
    { L"Haiji Prefight", 0x14f88, 0x15388, indexDarakuSprites_Bonus, 0x25 },
    { L"Trigger Prefight", 0x15388, 0x15788, indexDarakuSprites_Bonus, 0x26 },
    { L"Trigger Intro", 0x15788, 0x15b88, indexDarakuSprites_Bonus, 0x27 },
    { L"Carlos Elevator Intro", 0x15b88, 0x15f88, indexDarakuSprites_Bonus, 0x28 },
};

const sGame_PaletteDataset Daraku_A_Cutscenes_ConceptArt_Palettes[] =
{
    // -Concept Art-
    { L"Palette 1", 0x19588, 0x19988, indexDarakuSprites_Bonus, 0x29 },
    { L"Palette 2", 0x19988, 0x19d88, indexDarakuSprites_Bonus, 0x2a },
    { L"Palette 3", 0x19d88, 0x1a188, indexDarakuSprites_Bonus, 0x2b },
    { L"Palette 4", 0x1a188, 0x1a588, indexDarakuSprites_Bonus, 0x2c },
}; 
const sGame_PaletteDataset Daraku_A_Cutscenes_Demo_Palettes[] =
{
    // -Demo-
    { L"The Steel Hearts Screen", 0x18d48, 0x19148, indexDarakuSprites_Bonus, 0x2d },
    { L"Title Screen (Japan)", 0x18c88, 0x18cc8, indexDarakuSprites_Bonus, 0x2e },
    { L"Title Screen (World)", 0x18cc8, 0x18d08, indexDarakuSprites_Bonus, 0x2f },
    { L"Unused Title Screens", 0x19148, 0x19548, indexDarakuSprites_Bonus, 0x30 },
    { L"Best Score Ranking", 0xe388, 0xe788, indexDarakuSprites_Bonus, 0x31 },
    { L"Game Over Background", 0x13a08, 0x13a48, indexDarakuSprites_Bonus, 0x32 },
};

const sGame_PaletteDataset Daraku_A_Cutscenes_Intro_Palettes[] =
{
    // -Intro-
    { L"Psikyo Logo", 0x18c48, 0x18c88, indexDarakuSprites_Bonus, 0x00 },
    { L"Intro Text", 0x18c08, 0x18c48, indexDarakuSprites_Bonus, 0x01 },
    { L"Scrolling Building", 0x15f88, 0x16388, indexDarakuSprites_Bonus, 0x02 },
    { L"Black Bar", 0x16388, 0x163c8, indexDarakuSprites_Bonus, 0x03 },
    { L"Cool", 0x16bc8, 0x16fc8, indexDarakuSprites_Bonus, 0x04 },
    { L"Harry", 0x16fc8, 0x173c8, indexDarakuSprites_Bonus, 0x05 },
    { L"Taro", 0x173c8, 0x177c8, indexDarakuSprites_Bonus, 0x06 },
    { L"Roche", 0x177c8, 0x17bc8, indexDarakuSprites_Bonus, 0x07 },
    { L"Torao", 0x17bc8, 0x17fc8, indexDarakuSprites_Bonus, 0x08 },
    { L"Haiji", 0x17fc8, 0x183c8, indexDarakuSprites_Bonus, 0x09 },
    { L"The Fallen Angels Text", 0x187c8, 0x18808, indexDarakuSprites_Bonus, 0x0a },
};

const sGame_PaletteDataset Daraku_A_Cutscenes_Shared_Palettes[] =
{
    // -Shared-
    { L"Yuiren", 0x163c8, 0x167c8, indexDarakuSprites_Bonus, 0x0b },
    { L"Yuiran", 0x167c8, 0x16bc8, indexDarakuSprites_Bonus, 0x0c },
    { L"Carlos", 0x183c8, 0x187c8, indexDarakuSprites_Bonus, 0x0d },
    { L"Carlos Waiting", 0x18808, 0x18c08, indexDarakuSprites_Bonus, 0x0e },
};

const sGame_PaletteDataset Daraku_A_BonusPalettes_CharacterSelect[] =
{
    // -Character Select-
    { L"Character Bios", 0x12b88, 0x12f88, indexDarakuSprites_Bonus, 0x0f },
    { L"Background", 0xe788, 0xeb88, indexDarakuSprites_Bonus, 0x10 },
    { L"HERE COMES NEW CHALLENGER", 0x135c8, 0x139c8, indexDarakuSprites_Bonus, 0x11 },
    { L"1P Select Icon", 0x12f88, 0x12fc8, indexDarakuSprites_Bonus, 0x12 },
    { L"2P Select Icon", 0x12fc8, 0x13008, indexDarakuSprites_Bonus, 0x13 },
    { L"1P Select Background", 0x13008, 0x13048, indexDarakuSprites_Bonus, 0x14 },
    { L"2P Select Background", 0x13088, 0x130c8, indexDarakuSprites_Bonus, 0x15 },
    { L"Select Icons", 0x130c8, 0x13308, indexDarakuSprites_Bonus, 0x16 },
    { L"Selected Icons", 0x13388, 0x13508, indexDarakuSprites_Bonus, 0x17 },
};

const sGame_PaletteDataset Daraku_A_BonusPalettes_HUD[] =
{
    // -HUD-
    { L"Lifebar", 0xdbc8, 0xdfc8, indexDarakuSprites_Bonus, 0x18 },
    { L"Lifebar (Low Health)", 0xd548, 0xd948, indexDarakuSprites_Bonus, 0x18 },
    { L"Lifebar (Low Health Flash)", 0xd948, 0xd9c8, indexDarakuSprites_Bonus, 0x1a },
    { L"Lifebar (Damage Taken)", 0xd9c8, 0xda08, indexDarakuSprites_Bonus, 0x1b },
    { L"Character Names", 0xe288, 0xe2c8, indexDarakuSprites_Bonus, 0x1c },
    { L"Timer", 0xe248, 0xe288, indexDarakuSprites_Bonus, 0x1d },
    { L"Win Icons", 0xe2c8, 0xe308, indexDarakuSprites_Bonus, 0x1e },
    { L"1P Icon", 0xe308, 0xe348, indexDarakuSprites_Bonus, 0x1f },

    { L"2P Icon", 0xe348, 0xe388, indexDarakuSprites_Bonus, 0x33 },
    { L"POW/MAX Meter", 0xdb08, 0xdb48, indexDarakuSprites_Bonus, 0x34 },
    { L"MAX/Guard Flash", 0xdb48, 0xdb88, indexDarakuSprites_Bonus, 0x35 },
    { L"Guard Count", 0xda48, 0xda88, indexDarakuSprites_Bonus, 0x36 },
};

const sGame_PaletteDataset Daraku_A_BonusPalettes_InGameEffects[] =
{
    // -In-Game Effects-
    { L"Sweat", 0x1cc88, 0x1ccc8, indexDarakuSprites_Bonus, 0x37 },
    { L"Explosions", 0x1ccc8, 0x1cd08, indexDarakuSprites_Bonus, 0x38 },
    { L"Blocksparks (Light)", 0x1cd08, 0x1cd48, indexDarakuSprites_Bonus, 0x39 },
    { L"Blocksparks (Heavy)", 0x1cd48, 0x1cd88, indexDarakuSprites_Bonus, 0x3a },
    { L"Hitsparks", 0x1cd88, 0x1cdc8, indexDarakuSprites_Bonus, 0x3b },
    { L"Blood", 0x1d048, 0x1d088, indexDarakuSprites_Bonus, 0x3c },
    { L"Ground Waves", 0x1d088, 0x1d0c8, indexDarakuSprites_Bonus, 0x3d },
    { L"POW Charge Waves", 0x1d188, 0x1d1c8, indexDarakuSprites_Bonus, 0x3e },
    { L"Impact Effect", 0x1d008, 0x1d048, indexDarakuSprites_Bonus, 0x3f },
};


const sGame_PaletteDataset Daraku_A_BonusPalettes_InGameTexts[] =
{
    // -In Game Texts-
    { L"Rounds KO and Continue", 0x13548, 0x13588, indexDarakuSprites_Bonus, 0x40 },
    { L"WIN", 0x13b48, 0x13b88, indexDarakuSprites_Bonus, 0x41 },
    { L"YOU LOSE", 0x139c8, 0x13a08, indexDarakuSprites_Bonus, 0x42 },
    { L"Game Over", 0x13588, 0x135c8, indexDarakuSprites_Bonus, 0x43 },
    { L"Prefight Character Names", 0x13a48, 0x13a88, indexDarakuSprites_Bonus, 0x44 },
    { L"NEXT MATCH", 0x13a88, 0x13ac8, indexDarakuSprites_Bonus, 0x45 },
};

const sGame_PaletteDataset Daraku_A_BonusPalettes_Victory[] =
{
    // -Victory Backgrounds-
    { L"Yuiren Stage", 0x1a5c8, 0x1a988, indexDarakuSprites_Bonus, 0x46 },
    { L"Yuiran Stage", 0x1a988, 0x1ac88, indexDarakuSprites_Bonus, 0x47 },
    { L"Cool Stage", 0x1ac88, 0x1b088, indexDarakuSprites_Bonus, 0x48 },
    { L"Harry Stage", 0x1b088, 0x1b488, indexDarakuSprites_Bonus, 0x49 },
    { L"Taro Stage", 0x1b488, 0x1b888, indexDarakuSprites_Bonus, 0x4a },
    { L"Roche Stage", 0x1b888, 0x1bc88, indexDarakuSprites_Bonus, 0x4b },
    { L"Torao Stage", 0x1bc88, 0x1c088, indexDarakuSprites_Bonus, 0x4c },
    { L"Haiji Stage", 0x1c088, 0x1c488, indexDarakuSprites_Bonus, 0x4d },
    { L"Trigger Stage", 0x1c488, 0x1c888, indexDarakuSprites_Bonus, 0x4e },
    { L"Carlos Stage", 0x1c888, 0x1cc88, indexDarakuSprites_Bonus, 0x4f },
};

const sDescTreeNode Daraku_A_Yuiren_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiren_P1_PALETTES, ARRAYSIZE(Daraku_A_Yuiren_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiren_P2_PALETTES, ARRAYSIZE(Daraku_A_Yuiren_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiren_SHARED_PALETTES, ARRAYSIZE(Daraku_A_Yuiren_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiren_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_Yuiren_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Yuiran_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiran_P1_PALETTES, ARRAYSIZE(Daraku_A_Yuiran_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiran_P2_PALETTES, ARRAYSIZE(Daraku_A_Yuiran_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiran_SHARED_PALETTES, ARRAYSIZE(Daraku_A_Yuiran_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiran_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_Yuiran_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Cool_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_Cool_P1_PALETTES, ARRAYSIZE(Daraku_A_Cool_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_Cool_P2_PALETTES, ARRAYSIZE(Daraku_A_Cool_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_Cool_SHARED_PALETTES, ARRAYSIZE(Daraku_A_Cool_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_Cool_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_Cool_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Harry_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_HarryNess_P1_PALETTES, ARRAYSIZE(Daraku_A_HarryNess_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_HarryNess_P2_PALETTES, ARRAYSIZE(Daraku_A_HarryNess_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_HarryNess_SHARED_PALETTES, ARRAYSIZE(Daraku_A_HarryNess_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_HarryNess_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_HarryNess_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Taro_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_Taro_P1_PALETTES, ARRAYSIZE(Daraku_A_Taro_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_TARO_P2_PALETTES, ARRAYSIZE(Daraku_A_TARO_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_TARO_SHARED_PALETTES, ARRAYSIZE(Daraku_A_TARO_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_TARO_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_TARO_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Ruccio_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_RuccioRoche_P1_PALETTES, ARRAYSIZE(Daraku_A_RuccioRoche_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_RuccioRoche_P2_PALETTES, ARRAYSIZE(Daraku_A_RuccioRoche_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_RuccioRoche_SHARED_PALETTES, ARRAYSIZE(Daraku_A_RuccioRoche_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_RuccioRoche_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_RuccioRoche_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Torao_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_ToraoOnigawara_P1_PALETTES, ARRAYSIZE(Daraku_A_ToraoOnigawara_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_ToraoOnigawara_P2_PALETTES, ARRAYSIZE(Daraku_A_ToraoOnigawara_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_ToraoOnigawara_SHARED_PALETTES, ARRAYSIZE(Daraku_A_ToraoOnigawara_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_ToraoOnigawara_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_ToraoOnigawara_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Haiji_COLLECTION[] =
{
    { L"P1",            DESC_NODETYPE_TREE, (void*)Daraku_A_HaijiMibu_P1_PALETTES, ARRAYSIZE(Daraku_A_HaijiMibu_P1_PALETTES) },
    { L"P2",            DESC_NODETYPE_TREE, (void*)Daraku_A_HaijiMibu_P2_PALETTES, ARRAYSIZE(Daraku_A_HaijiMibu_P2_PALETTES) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_HaijiMibu_SHARED_PALETTES, ARRAYSIZE(Daraku_A_HaijiMibu_SHARED_PALETTES) },
    { L"Portraits",     DESC_NODETYPE_TREE, (void*)Daraku_A_HaijiMibu_PORTRAIT_PALETTES, ARRAYSIZE(Daraku_A_HaijiMibu_PORTRAIT_PALETTES) },
};

const sDescTreeNode Daraku_A_Trigger_COLLECTION[] =
{
    { L"Palettes",      DESC_NODETYPE_TREE, (void*)Daraku_A_Trigger_PALETTES, ARRAYSIZE(Daraku_A_Trigger_PALETTES) },
};

const sDescTreeNode Daraku_A_Carlos_COLLECTION[] =
{
    { L"Palettes",      DESC_NODETYPE_TREE, (void*)Daraku_A_Carlos_PALETTES, ARRAYSIZE(Daraku_A_Carlos_PALETTES) },
};

const sDescTreeNode Daraku_A_Stages_COLLECTION[] =
{
    { L"Yuiren",        DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Yuiren_Palettes, ARRAYSIZE(Daraku_A_Stages_Yuiren_Palettes) },
    { L"Yuiran",        DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Yuiran_Palettes, ARRAYSIZE(Daraku_A_Stages_Yuiran_Palettes) },
    { L"Cool",          DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Cool_Palettes, ARRAYSIZE(Daraku_A_Stages_Cool_Palettes) },
    { L"Harry",         DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Harry_Palettes, ARRAYSIZE(Daraku_A_Stages_Harry_Palettes) },
    { L"Taro",          DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Taro_Palettes, ARRAYSIZE(Daraku_A_Stages_Taro_Palettes) },
    { L"Roche",         DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Roche_Palettes, ARRAYSIZE(Daraku_A_Stages_Roche_Palettes) },
    { L"Torao",         DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Torao_Palettes, ARRAYSIZE(Daraku_A_Stages_Torao_Palettes) },
    { L"Haiji",         DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Haiji_Palettes, ARRAYSIZE(Daraku_A_Stages_Haiji_Palettes) },
    { L"Trigger",       DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Trigger_Palettes, ARRAYSIZE(Daraku_A_Stages_Trigger_Palettes) },
    { L"Carlos",        DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_Carlos_Palettes, ARRAYSIZE(Daraku_A_Stages_Carlos_Palettes) },
    { L"Stage Extras",  DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_StageExtras_Palettes, ARRAYSIZE(Daraku_A_Stages_StageExtras_Palettes) },
};

const sDescTreeNode Daraku_A_Cutscenes_COLLECTION[] =
{
    { L"Demo",          DESC_NODETYPE_TREE, (void*)Daraku_A_Cutscenes_Demo_Palettes, ARRAYSIZE(Daraku_A_Cutscenes_Demo_Palettes) },
    { L"Intro",         DESC_NODETYPE_TREE, (void*)Daraku_A_Cutscenes_Intro_Palettes, ARRAYSIZE(Daraku_A_Cutscenes_Intro_Palettes) },
    { L"Arcade",        DESC_NODETYPE_TREE, (void*)Daraku_A_Cutscenes_Arcade_Palettes, ARRAYSIZE(Daraku_A_Cutscenes_Arcade_Palettes) },
    { L"Shared",        DESC_NODETYPE_TREE, (void*)Daraku_A_Cutscenes_Shared_Palettes, ARRAYSIZE(Daraku_A_Cutscenes_Shared_Palettes) },
    { L"Concept Art",   DESC_NODETYPE_TREE, (void*)Daraku_A_Cutscenes_ConceptArt_Palettes, ARRAYSIZE(Daraku_A_Cutscenes_ConceptArt_Palettes) },
};

const sDescTreeNode Daraku_A_Bonus_COLLECTION[] =
{
    { L"In Game Effects",       DESC_NODETYPE_TREE, (void*)Daraku_A_BonusPalettes_InGameEffects, ARRAYSIZE(Daraku_A_BonusPalettes_InGameEffects) },
    { L"HUD",                   DESC_NODETYPE_TREE, (void*)Daraku_A_BonusPalettes_HUD, ARRAYSIZE(Daraku_A_BonusPalettes_HUD) },
    { L"In Game Texts",         DESC_NODETYPE_TREE, (void*)Daraku_A_BonusPalettes_InGameTexts, ARRAYSIZE(Daraku_A_BonusPalettes_InGameTexts) },
    { L"Character Select",      DESC_NODETYPE_TREE, (void*)Daraku_A_BonusPalettes_CharacterSelect, ARRAYSIZE(Daraku_A_BonusPalettes_CharacterSelect) },
    { L"Victory Backgrounds",   DESC_NODETYPE_TREE, (void*)Daraku_A_BonusPalettes_Victory, ARRAYSIZE(Daraku_A_BonusPalettes_Victory) },
};

const sDescTreeNode Daraku_A_UNITS[] =
{
    { L"Yuiren",                DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiren_COLLECTION, ARRAYSIZE(Daraku_A_Yuiren_COLLECTION) },
    { L"Yuiran",                DESC_NODETYPE_TREE, (void*)Daraku_A_Yuiran_COLLECTION, ARRAYSIZE(Daraku_A_Yuiran_COLLECTION) },
    { L"Cool",                  DESC_NODETYPE_TREE, (void*)Daraku_A_Cool_COLLECTION, ARRAYSIZE(Daraku_A_Cool_COLLECTION) },
    { L"Harry Ness",            DESC_NODETYPE_TREE, (void*)Daraku_A_Harry_COLLECTION, ARRAYSIZE(Daraku_A_Harry_COLLECTION) },
    { L"Taro",                  DESC_NODETYPE_TREE, (void*)Daraku_A_Taro_COLLECTION, ARRAYSIZE(Daraku_A_Taro_COLLECTION) },
    { L"Ruccio Roche",          DESC_NODETYPE_TREE, (void*)Daraku_A_Ruccio_COLLECTION, ARRAYSIZE(Daraku_A_Ruccio_COLLECTION) },
    { L"Torao Onigawara",       DESC_NODETYPE_TREE, (void*)Daraku_A_Torao_COLLECTION, ARRAYSIZE(Daraku_A_Torao_COLLECTION) },
    { L"Haiji Mibu",            DESC_NODETYPE_TREE, (void*)Daraku_A_Haiji_COLLECTION, ARRAYSIZE(Daraku_A_Haiji_COLLECTION) },
    { L"Trigger",               DESC_NODETYPE_TREE, (void*)Daraku_A_Trigger_COLLECTION, ARRAYSIZE(Daraku_A_Trigger_COLLECTION) },
    { L"Carlos",                DESC_NODETYPE_TREE, (void*)Daraku_A_Carlos_COLLECTION, ARRAYSIZE(Daraku_A_Carlos_COLLECTION) },
    { L"Stages",                DESC_NODETYPE_TREE, (void*)Daraku_A_Stages_COLLECTION, ARRAYSIZE(Daraku_A_Stages_COLLECTION) },
    { L"Cutscenes",             DESC_NODETYPE_TREE, (void*)Daraku_A_Cutscenes_COLLECTION, ARRAYSIZE(Daraku_A_Cutscenes_COLLECTION) },
    { L"Bonus Palettes",        DESC_NODETYPE_TREE, (void*)Daraku_A_Bonus_COLLECTION, ARRAYSIZE(Daraku_A_Bonus_COLLECTION) },
};

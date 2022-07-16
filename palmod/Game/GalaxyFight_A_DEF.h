#pragma once

const std::vector<uint16_t> GalaxyFight_A_IMGIDS_USED =
{
    indexGalaxyFightSprites_Alvan,          // 0x89
    indexGalaxyFightSprites_BonusKun,       // 0x8a
    indexGalaxyFightSprites_Felden,         // 0x8b
    indexGalaxyFightSprites_GDone,          // 0x8c
    indexGalaxyFightSprites_Gunter,         // 0x8d
    indexGalaxyFightSprites_Juri,           // 0x8e
    indexGalaxyFightSprites_Kazuma,         // 0x8f
    indexGalaxyFightSprites_Musafar,        // 0x90
    indexGalaxyFightSprites_Rolf,           // 0x91
    indexGalaxyFightSprites_Roomi,          // 0x92
    indexGalaxyFightSprites_Rouwe,          // 0x93
    indexGalaxyFightSprites_Yacopu,         // 0x94
    indexGalaxyFightSprites_Extra,          // 0x95
    indexGalaxyFightSprites_Stages,         // 0x96
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetAirrassTemple[] =
{
    { L"Rolf P1", 0x11509e, 0x1150be, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11521e, 0x11523e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fbfe, 0x11fc1e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fd7e, 0x11fd9e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x11539e, 0x1153be, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11551e, 0x11553e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11fefe, 0x11ff1e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x12007e, 0x12009e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetAirrassSpaceStation[] =
{
    { L"Rolf P1", 0x1150be, 0x1150de, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11523e, 0x11525e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fc1e, 0x11fc3e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fd9e, 0x11fdbe, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x1153be, 0x1153de, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11553e, 0x11555e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11ff1e, 0x11ff3e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x12009e, 0x1200be, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetLezaar[] =
{
    { L"Rolf P1", 0x1150de, 0x1150fe, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11525e, 0x11527e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fc3e, 0x11fc5e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fdbe, 0x11fdde, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x1153de, 0x1153fe, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11555e, 0x11557e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11ff3e, 0x11ff5e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x1200be, 0x1200de, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetLuteciaForest[] =
{
    { L"Rolf P1", 0x1150fe, 0x11511e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11527e, 0x11529e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fc5e, 0x11fc7e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fdde, 0x11fdfe, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x1153fe, 0x11541e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11557e, 0x11559e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11ff5e, 0x11ff7e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x1200de, 0x1200fe, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetGuljeff[] =
{
    { L"Rolf P1", 0x11511e, 0x11513e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11529e, 0x1152be, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fc7e, 0x11fc9e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fdfe, 0x11fe1e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x11541e, 0x11543e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11559e, 0x1155be, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11ff7e, 0x11ff9e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x1200fe, 0x12011e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetRozalis[] =
{
    { L"Rolf P1", 0x11513e, 0x11515e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x1152be, 0x1152de, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fc9e, 0x11fcbe, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fe1e, 0x11fe3e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x11543e, 0x11545e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x1155be, 0x1155de, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11ff9e, 0x11ffbe, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x12011e, 0x12013e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetMani[] =
{
    { L"Rolf P1", 0x11515e, 0x11517e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x1152de, 0x1152fe, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fcbe, 0x11fcde, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fe3e, 0x11fe5e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x11545e, 0x11547e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x1155de, 0x1155fe, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11ffbe, 0x11ffde, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x12013e, 0x12015e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetFakir[] =
{
    { L"Rolf P1", 0x11517e, 0x11519e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x1152fe, 0x11531e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fcde, 0x11fcfe, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fe5e, 0x11fe7e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x11547e, 0x11549e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x1155fe, 0x11561e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x11ffde, 0x11fffe, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x12015e, 0x12017e, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetTheAbsolute[] =
{
    { L"Rolf P1", 0x11519e, 0x1151be, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11531e, 0x11533e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2", 0x11549e, 0x1154be, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11561e, 0x11563e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetLuteciaWaterfall[] =
{
    { L"Rolf P1", 0x1151be, 0x1151de, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11533e, 0x11535e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2", 0x1154be, 0x1154de, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11563e, 0x11565e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetForgottenPlains[] =
{
    { L"Rolf P1", 0x1151de, 0x1151fe, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11535e, 0x11537e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2", 0x1154de, 0x1154fe, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11565e, 0x11567e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_PlanetVerazques[] =
{
    { L"Rolf P1", 0x1151fe, 0x11521e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x11537e, 0x11539e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P1 - Win Portrait 1", 0x11fd5e, 0x11fd7e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P1 - Win Portrait 2", 0x11fede, 0x11fefe, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
    { L"Rolf P2", 0x1154fe, 0x11551e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x11567e, 0x11569e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2 - Win Portrait 1", 0x12005e, 0x12007e, indexGalaxyFightSprites_Rolf, 0x42, &pairNext },
    { L"Rolf P2 - Win Portrait 2", 0x1201de, 0x1201fe, indexGalaxyFightSprites_Rolf, 0x43, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_SelectYacopu[] =
{
    { L"Rolf P1", 0x117dbe, 0x117dde, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P1 - Extra", 0x117dde, 0x117dfe, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
    { L"Rolf P2", 0x117e3e, 0x117e5e, indexGalaxyFightSprites_Rolf, 0x00, &pairNext },
    { L"Rolf P2 - Extra", 0x117e5e, 0x117e7e, indexGalaxyFightSprites_Rolf, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_Portraits[] =
{
    { L"Rolf P1 - Lose Portrait", 0x11f63e, 0x11f69e, indexGalaxyFightSprites_Rolf, 0x40 },
    { L"Rolf P2 - Lose Portrait", 0x11f69e, 0x11f6fe, indexGalaxyFightSprites_Rolf, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Rolf_Extras[] =
{
    { L"Rolf - Burned 1", 0x117efe, 0x117f1e, indexGalaxyFightSprites_Rolf, 0x08 },
    { L"Rolf - Burned 2", 0x117f3e, 0x117f5e, indexGalaxyFightSprites_Rolf, 0x09 },
    { L"Rolf - Burned 3", 0x117ebe, 0x117ede, indexGalaxyFightSprites_Rolf, 0x08 },
    { L"Rolf - Zapped 1", 0x117f5e, 0x117f7e, indexGalaxyFightSprites_Rolf, 0x08 },
    { L"Rolf - Zapped 2", 0x117f1e, 0x117f3e, indexGalaxyFightSprites_Rolf, 0x0a },
    { L"Rolf - Zapped 3", 0x117ede, 0x117efe, indexGalaxyFightSprites_Rolf, 0x08 },
    { L"Rolf - Rolf Shot", 0x11e1be, 0x11e1de, indexGalaxyFightSprites_Rolf, 0x0b },
    { L"Rolf - Striking Napalm", 0x11e35e, 0x11e37e, indexGalaxyFightSprites_Rolf, 0x0c },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetAirrassTemple[] =
{
    { L"Kazuma P1", 0x114a9e, 0x114abe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114f1e, 0x114f3e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114c1e, 0x114c3e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114d9e, 0x114dbe, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetAirrassSpaceStation[] =
{
    { L"Kazuma P1", 0x114abe, 0x114ade, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114f3e, 0x114f5e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114c3e, 0x114c5e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114dbe, 0x114dde, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetLezaar[] =
{
    { L"Kazuma P1", 0x114ade, 0x114afe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114f5e, 0x114f7e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114c5e, 0x114c7e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114dde, 0x114dfe, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetLuteciaForest[] =
{
    { L"Kazuma P1", 0x114afe, 0x114b1e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114f7e, 0x114f9e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114c7e, 0x114c9e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114dfe, 0x114e1e, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetGuljeff[] =
{
    { L"Kazuma P1", 0x114b1e, 0x114b3e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114f9e, 0x114fbe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114c9e, 0x114cbe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114e1e, 0x114e3e, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetRozalis[] =
{
    { L"Kazuma P1", 0x114b3e, 0x114b5e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114fbe, 0x114fde, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114cbe, 0x114cde, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114e3e, 0x114e5e, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetMani[] =
{
    { L"Kazuma P1", 0x114b5e, 0x114b7e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114fde, 0x114ffe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114cde, 0x114cfe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114e5e, 0x114e7e, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetFakir[] =
{
    { L"Kazuma P1", 0x114b7e, 0x114b9e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x114ffe, 0x11501e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114cfe, 0x114d1e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114e7e, 0x114e9e, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetTheAbsolute[] =
{
    { L"Kazuma P1", 0x114b9e, 0x114bbe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x11501e, 0x11503e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114d1e, 0x114d3e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114e9e, 0x114ebe, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetLuteciaWaterfall[] =
{
    { L"Kazuma P1", 0x114bbe, 0x114bde, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x11503e, 0x11505e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114d3e, 0x114d5e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114ebe, 0x114ede, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetForgottenPlains[] =
{
    { L"Kazuma P1", 0x114bde, 0x114bfe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x11505e, 0x11507e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114d5e, 0x114d7e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114ede, 0x114efe, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_PlanetVerazques[] =
{
    { L"Kazuma P1", 0x114bfe, 0x114c1e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x11507e, 0x11509e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x114d7e, 0x114d9e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x114efe, 0x114f1e, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_SelectYacopu[] =
{
    { L"Kazuma P1", 0x117bbe, 0x117bde, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P1 - Shadow Ninja", 0x117c9e, 0x117cbe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2", 0x117bde, 0x117bfe, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma P2 - Shadow Ninja", 0x117c7e, 0x117c9e, indexGalaxyFightSprites_Kazuma, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_Portraits[] =
{
    { L"Kazuma P1 - Lose Portrait", 0x11f5be, 0x11f5fe, indexGalaxyFightSprites_Kazuma, 0x40 },
    { L"Kazuma P2 - Lose Portrait", 0x11f5fe, 0x11f63e, indexGalaxyFightSprites_Kazuma, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Kazuma_Extras[] =
{
    { L"Kazuma - Burned 1", 0x117d3e, 0x117d5e, indexGalaxyFightSprites_Kazuma, 0x08 },
    { L"Kazuma - Burned 2", 0x117d5e, 0x117d7e, indexGalaxyFightSprites_Kazuma, 0x09 },
    { L"Kazuma - Burned 3", 0x117d7e, 0x117d9e, indexGalaxyFightSprites_Kazuma, 0x08 },
    { L"Kazuma - Zapped 1", 0x117cfe, 0x117d1e, indexGalaxyFightSprites_Kazuma, 0x08 },
    { L"Kazuma - Zapped 2", 0x117d1e, 0x117d3e, indexGalaxyFightSprites_Kazuma, 0x0a },
    { L"Kazuma - Zapped 3", 0x117cde, 0x117cfe, indexGalaxyFightSprites_Kazuma, 0x08 },
    { L"Kazuma - White Flash", 0x117c3e, 0x117c5e, indexGalaxyFightSprites_Kazuma, 0x00 },
    { L"Kazuma - Shadow Ninja Fireball 1", 0x11dffe, 0x11e01e, indexGalaxyFightSprites_Kazuma, 0x0b },
    { L"Kazuma - Shadow Ninja Fireball 2", 0x11e05e, 0x11e07e, indexGalaxyFightSprites_Kazuma, 0x0b },
    { L"Kazuma - Shadow Ninja Fireball 3", 0x11e01e, 0x11e03e, indexGalaxyFightSprites_Kazuma, 0x0b },
    { L"Kazuma - Shadow Ninja Fireball 4", 0x11e03e, 0x11e05e, indexGalaxyFightSprites_Kazuma, 0x0b },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetAirrassTemple[] =
{
    { L"Roomi P1", 0x11599e, 0x1159be, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115b1e, 0x115b3e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetAirrassSpaceStation[] =
{
    { L"Roomi P1", 0x1159be, 0x1159de, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115b3e, 0x115b5e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetLezaar[] =
{
    { L"Roomi P1", 0x1159de, 0x1159fe, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115b5e, 0x115b7e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetLuteciaForest[] =
{
    { L"Roomi P1", 0x1159fe, 0x115a1e, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115b7e, 0x115b9e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetGuljeff[] =
{
    { L"Roomi P1", 0x115a1e, 0x115a3e, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115b9e, 0x115bbe, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetRozalis[] =
{
    { L"Roomi P1", 0x115a3e, 0x115a5e, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115bbe, 0x115bde, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetMani[] =
{
    { L"Roomi P1", 0x115a5e, 0x115a7e, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115bde, 0x115bfe, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetFakir[] =
{
    { L"Roomi P1", 0x115a7e, 0x115a9e, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115bfe, 0x115c1e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetTheAbsolute[] =
{
    { L"Roomi P1", 0x115a9e, 0x115abe, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115c1e, 0x115c3e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetLuteciaWaterfall[] =
{
    { L"Roomi P1", 0x115abe, 0x115ade, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115c3e, 0x115c5e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetForgottenPlains[] =
{
    { L"Roomi P1", 0x115ade, 0x115afe, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115c5e, 0x115c7e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_PlanetVerazques[] =
{
    { L"Roomi P1", 0x115afe, 0x115b1e, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x115c7e, 0x115c9e, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_SelectYacopu[] =
{
    { L"Roomi P1", 0x1183be, 0x1183de, indexGalaxyFightSprites_Roomi, 0x00 },
    { L"Roomi P2", 0x1184be, 0x1184de, indexGalaxyFightSprites_Roomi, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_Portraits[] =
{
    { L"Roomi P1 - Lose Portrait", 0x11f77e, 0x11f7be, indexGalaxyFightSprites_Roomi, 0x40 },
    { L"Roomi P2 - Lose Portrait", 0x11f7be, 0x11f7fe, indexGalaxyFightSprites_Roomi, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Roomi_Extras[] =
{
    { L"Roomi P1 - Burned 1", 0x1183de, 0x1183fe, indexGalaxyFightSprites_Roomi, 0x08 },
    { L"Roomi P1 - Burned 2", 0x11841e, 0x11843e, indexGalaxyFightSprites_Roomi, 0x09 },
    { L"Roomi P1 - Burned 3", 0x1183fe, 0x11841e, indexGalaxyFightSprites_Roomi, 0x08 },
    { L"Roomi P1 - Zapped 1", 0x11845e, 0x11847e, indexGalaxyFightSprites_Roomi, 0x08 },
    { L"Roomi P1 - Zapped 2", 0x11847e, 0x11849e, indexGalaxyFightSprites_Roomi, 0x0a },
    { L"Roomi P1 - Zapped 3", 0x11843e, 0x11845e, indexGalaxyFightSprites_Roomi, 0x08 },
    { L"Roomi P2 - Burned 1", 0x1184de, 0x1184fe, indexGalaxyFightSprites_Roomi, 0x08 },
    { L"Roomi P2 - Burned 2", 0x11851e, 0x11853e, indexGalaxyFightSprites_Roomi, 0x09 },
    { L"Roomi P2 - Burned 3", 0x1184fe, 0x11851e, indexGalaxyFightSprites_Roomi, 0x08 },
    { L"Roomi P2 - Zapped 1", 0x11855e, 0x11857e, indexGalaxyFightSprites_Roomi, 0x08 },
    { L"Roomi P2 - Zapped 2", 0x11857e, 0x11859e, indexGalaxyFightSprites_Roomi, 0x0a },
    { L"Roomi P2 - Zapped 3", 0x11853e, 0x11855e, indexGalaxyFightSprites_Roomi, 0x08 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetAirrassTemple[] =
{
    { L"Juri P1", 0x11569e, 0x1156be, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11581e, 0x11583e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetAirrassSpaceStation[] =
{
    { L"Juri P1", 0x1156be, 0x1156de, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11583e, 0x11585e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetLezaar[] =
{
    { L"Juri P1", 0x1156de, 0x1156fe, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11585e, 0x11587e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetLuteciaForest[] =
{
    { L"Juri P1", 0x1156fe, 0x11571e, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11587e, 0x11589e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetGuljeff[] =
{
    { L"Juri P1", 0x11571e, 0x11573e, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11589e, 0x1158be, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetRozalis[] =
{
    { L"Juri P1", 0x11573e, 0x11575e, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x1158be, 0x1158de, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetMani[] =
{
    { L"Juri P1", 0x11575e, 0x11577e, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x1158de, 0x1158fe, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetFakir[] =
{
    { L"Juri P1", 0x11577e, 0x11579e, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x1158fe, 0x11591e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetTheAbsolute[] =
{
    { L"Juri P1", 0x11579e, 0x1157be, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11591e, 0x11593e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetLuteciaWaterfall[] =
{
    { L"Juri P1", 0x1157be, 0x1157de, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11593e, 0x11595e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetForgottenPlains[] =
{
    { L"Juri P1", 0x1157de, 0x1157fe, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11595e, 0x11597e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_PlanetVerazques[] =
{
    { L"Juri P1", 0x1157fe, 0x11581e, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x11597e, 0x11599e, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_SelectYacopu[] =
{
    { L"Juri P1", 0x117fbe, 0x117fde, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2", 0x1181be, 0x1181de, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_Portraits[] =
{
    { L"Juri P1 - Lose Portrait", 0x11f6fe, 0x11f73e, indexGalaxyFightSprites_Juri, 0x40 },
    { L"Juri P2 - Lose Portrait", 0x11f73e, 0x11f77e, indexGalaxyFightSprites_Juri, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Juri_Extras[] =
{
    { L"Juri P1 - Burned 1", 0x117fde, 0x117ffe, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P1 - Burned 2", 0x117ffe, 0x11801e, indexGalaxyFightSprites_Juri, 0x09 },
    { L"Juri P1 - Burned 3", 0x11801e, 0x11803e, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P1 - Zapped 1", 0x11803e, 0x11805e, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P1 - Zapped 2", 0x11805e, 0x11807e, indexGalaxyFightSprites_Juri, 0x0a },
    { L"Juri P1 - Zapped 3", 0x11807e, 0x11809e, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P1 - Galactica Cyclone", 0x11809e, 0x1180be, indexGalaxyFightSprites_Juri, 0x00 },
    { L"Juri P2 - Burned 1", 0x1181de, 0x1181fe, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P2 - Burned 2", 0x1181fe, 0x11821e, indexGalaxyFightSprites_Juri, 0x09 },
    { L"Juri P2 - Burned 3", 0x11821e, 0x11823e, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P2 - Zapped 1", 0x11823e, 0x11825e, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P2 - Zapped 2", 0x11825e, 0x11827e, indexGalaxyFightSprites_Juri, 0x0a },
    { L"Juri P2 - Zapped 3", 0x11827e, 0x11829e, indexGalaxyFightSprites_Juri, 0x08 },
    { L"Juri P2 - Galactica Cyclone", 0x11829e, 0x1182be, indexGalaxyFightSprites_Juri, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetAirrassTemple[] =
{
    { L"G.Done P1", 0x11659e, 0x1165be, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116a1e, 0x116a3e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11671e, 0x11673e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x11689e, 0x1168be, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetAirrassSpaceStation[] =
{
    { L"G.Done P1", 0x1165be, 0x1165de, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116a3e, 0x116a5e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11673e, 0x11675e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x1168be, 0x1168de, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetLezaar[] =
{
    { L"G.Done P1", 0x1165de, 0x1165fe, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116a5e, 0x116a7e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11675e, 0x11677e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x1168de, 0x1168fe, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetLuteciaForest[] =
{
    { L"G.Done P1", 0x1165fe, 0x11661e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116a7e, 0x116a9e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11677e, 0x11679e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x1168fe, 0x11691e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetGuljeff[] =
{
    { L"G.Done P1", 0x11661e, 0x11663e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116a9e, 0x116abe, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11679e, 0x1167be, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x11691e, 0x11693e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetRozalis[] =
{
    { L"G.Done P1", 0x11663e, 0x11665e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116abe, 0x116ade, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x1167be, 0x1167de, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x11693e, 0x11695e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetMani[] =
{
    { L"G.Done P1", 0x11665e, 0x11667e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116ade, 0x116afe, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x1167de, 0x1167fe, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x11695e, 0x11697e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetFakir[] =
{
    { L"G.Done P1", 0x11667e, 0x11669e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116afe, 0x116b1e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x1167fe, 0x11681e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x11697e, 0x11699e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetTheAbsolute[] =
{
    { L"G.Done P1", 0x11669e, 0x1166be, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116b1e, 0x116b3e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11681e, 0x11683e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x11699e, 0x1169be, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetLuteciaWaterfall[] =
{
    { L"G.Done P1", 0x1166be, 0x1166de, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116b3e, 0x116b5e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11683e, 0x11685e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x1169be, 0x1169de, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetForgottenPlains[] =
{
    { L"G.Done P1", 0x1166de, 0x1166fe, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116b5e, 0x116b7e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11685e, 0x11687e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x1169de, 0x1169fe, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_PlanetVerazques[] =
{
    { L"G.Done P1", 0x1166fe, 0x11671e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x116b7e, 0x116b9e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x11687e, 0x11689e, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x1169fe, 0x116a1e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_SelectYacopu[] =
{
    { L"G.Done P1", 0x118bbe, 0x118bde, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P1 - Extra", 0x118d5e, 0x118d7e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
    { L"G.Done P2", 0x118bde, 0x118bfe, indexGalaxyFightSprites_GDone, 0x00, &pairNext },
    { L"G.Done P2 - Extra", 0x118bfe, 0x118c1e, indexGalaxyFightSprites_GDone, 0x01, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_Portraits[] =
{
    { L"G.Done P1 - Lose Portrait", 0x11f8be, 0x11f8fe, indexGalaxyFightSprites_GDone, 0x40 },
    { L"G.Done P2 - Lose Portrait", 0x11f8fe, 0x11f93e, indexGalaxyFightSprites_GDone, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_GDone_Extras[] =
{
    { L"G.Done - Burned 1", 0x118cbe, 0x118cde, indexGalaxyFightSprites_GDone, 0x08 },
    { L"G.Done - Burned 2", 0x118c7e, 0x118c9e, indexGalaxyFightSprites_GDone, 0x09 },
    { L"G.Done - Burned 3", 0x118cde, 0x118cfe, indexGalaxyFightSprites_GDone, 0x08 },
    { L"G.Done - Zapped 1", 0x118d1e, 0x118d3e, indexGalaxyFightSprites_GDone, 0x08 },
    { L"G.Done - Zapped 2", 0x118c1e, 0x118c3e, indexGalaxyFightSprites_GDone, 0x0a },
    { L"G.Done - Zapped 3", 0x118cfe, 0x118d1e, indexGalaxyFightSprites_GDone, 0x08 },
    { L"G.Done - Final Mega Driver", 0x11e97e, 0x11e99e, indexGalaxyFightSprites_GDone, 0x0b },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetAirrassTemple[] =
{
    { L"Alvan P1", 0x11629e, 0x1162be, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11641e, 0x11643e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetAirrassSpaceStation[] =
{
    { L"Alvan P1", 0x1162be, 0x1162de, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11643e, 0x11645e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetLezaar[] =
{
    { L"Alvan P1", 0x1162de, 0x1162fe, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11645e, 0x11647e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetLuteciaForest[] =
{
    { L"Alvan P1", 0x1162fe, 0x11631e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11647e, 0x11649e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetGuljeff[] =
{
    { L"Alvan P1", 0x11631e, 0x11633e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11649e, 0x1164be, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetRozalis[] =
{
    { L"Alvan P1", 0x11633e, 0x11635e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x1164be, 0x1164de, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetMani[] =
{
    { L"Alvan P1", 0x11635e, 0x11637e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x1164de, 0x1164fe, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetFakir[] =
{
    { L"Alvan P1", 0x11637e, 0x11639e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x1164fe, 0x11651e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetTheAbsolute[] =
{
    { L"Alvan P1", 0x11639e, 0x1163be, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11651e, 0x11653e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetLuteciaWaterfall[] =
{
    { L"Alvan P1", 0x1163be, 0x1163de, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11653e, 0x11655e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetForgottenPlains[] =
{
    { L"Alvan P1", 0x1163de, 0x1163fe, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11655e, 0x11657e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_PlanetVerazques[] =
{
    { L"Alvan P1", 0x1163fe, 0x11641e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x11657e, 0x11659e, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_SelectYacopu[] =
{
    { L"Alvan P1", 0x1187be, 0x1187de, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2", 0x1189be, 0x1189de, indexGalaxyFightSprites_Alvan, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_Portraits[] =
{
    { L"Alvan P1 - Lose Portrait", 0x11f83e, 0x11f87e, indexGalaxyFightSprites_Alvan, 0x40 },
    { L"Alvan P2 - Lose Portrait", 0x11f87e, 0x11f8be, indexGalaxyFightSprites_Alvan, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Alvan_Extras[] =
{
    { L"Alvan P1 - Burned 1",           0x1188be, 0x1188de, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P1 - Burned 2",           0x11887e, 0x11889e, indexGalaxyFightSprites_Alvan, 0x09 },
    { L"Alvan P1 - Burned 3",           0x1188de, 0x1188fe, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P1 - Zapped 1",           0x11891e, 0x11893e, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P1 - Zapped 2",           0x11881e, 0x11883e, indexGalaxyFightSprites_Alvan, 0x0a },
    { L"Alvan P1 - Zapped 3",           0x1188fe, 0x11891e, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P1 - Cape",               0x11e67e, 0x11e69e, indexGalaxyFightSprites_Alvan, 0x0f },
    { L"Alvan P1 - Super Al-Bang",      0x1187fe, 0x11881e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan P2 - Burned 1",           0x118abe, 0x118ade, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P2 - Burned 2",           0x118a7e, 0x118a9e, indexGalaxyFightSprites_Alvan, 0x09 },
    { L"Alvan P2 - Burned 3",           0x118ade, 0x118afe, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P2 - Zapped 1",           0x118b1e, 0x118b3e, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P2 - Zapped 2",           0x118a1e, 0x118a3e, indexGalaxyFightSprites_Alvan, 0x0a },
    { L"Alvan P2 - Zapped 3",           0x118afe, 0x118b1e, indexGalaxyFightSprites_Alvan, 0x08 },
    { L"Alvan P2 - Cape",               0x11e77e, 0x11e79e, indexGalaxyFightSprites_Alvan, 0x0f },
    { L"Alvan P2 - Super Al-Bang",      0x1189fe, 0x118a1e, indexGalaxyFightSprites_Alvan, 0x00 },
    { L"Alvan - Al-Blast Attacks",      0x11e5be, 0x11e5de, indexGalaxyFightSprites_Alvan, 0x0b },
    { L"Alvan - Anti-Air Al-Blast",     0x11e65e, 0x11e67e, indexGalaxyFightSprites_Alvan, 0x0e },
    { L"Alvan - Al-Thunder Attacks",    0x11e61e, 0x11e63e, indexGalaxyFightSprites_Alvan, 0x0d },
    { L"Alvan - Al-Fire",               0x11e63e, 0x11e65e, indexGalaxyFightSprites_Alvan, 0x0c },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetAirrassTemple[] =
{
    { L"Gunter P1", 0x115c9e, 0x115cbe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x115f9e, 0x115fbe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115e1e, 0x115e3e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11611e, 0x11613e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetAirrassSpaceStation[] =
{
    { L"Gunter P1", 0x115cbe, 0x115cde, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x115fbe, 0x115fde, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115e3e, 0x115e5e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11613e, 0x11615e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetLezaar[] =
{
    { L"Gunter P1", 0x115cde, 0x115cfe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x115fde, 0x115ffe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115e5e, 0x115e7e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11615e, 0x11617e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetLuteciaForest[] =
{
    { L"Gunter P1", 0x115cfe, 0x115d1e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x115ffe, 0x11601e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115e7e, 0x115e9e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11617e, 0x11619e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetGuljeff[] =
{
    { L"Gunter P1", 0x115d1e, 0x115d3e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x11601e, 0x11603e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115e9e, 0x115ebe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11619e, 0x1161be, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetRozalis[] =
{
    { L"Gunter P1", 0x115d3e, 0x115d5e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x11603e, 0x11605e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115ebe, 0x115ede, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x1161be, 0x1161de, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetMani[] =
{
    { L"Gunter P1", 0x115d5e, 0x115d7e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x11605e, 0x11607e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115ede, 0x115efe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x1161de, 0x1161fe, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetFakir[] =
{
    { L"Gunter P1", 0x115d7e, 0x115d9e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x11607e, 0x11609e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115efe, 0x115f1e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x1161fe, 0x11621e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetTheAbsolute[] =
{
    { L"Gunter P1", 0x115d9e, 0x115dbe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x11609e, 0x1160be, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115f1e, 0x115f3e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11621e, 0x11623e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetLuteciaWaterfall[] =
{
    { L"Gunter P1", 0x115dbe, 0x115dde, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x1160be, 0x1160de, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115f3e, 0x115f5e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11623e, 0x11625e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetForgottenPlains[] =
{
    { L"Gunter P1", 0x115dde, 0x115dfe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x1160de, 0x1160fe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115f5e, 0x115f7e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11625e, 0x11627e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_PlanetVerazques[] =
{
    { L"Gunter P1", 0x115dfe, 0x115e1e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x1160fe, 0x11611e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x115f7e, 0x115f9e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11627e, 0x11629e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_SelectYacopu[] =
{
    { L"Gunter P1", 0x1185be, 0x1185de, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P1 - Blocking", 0x1185fe, 0x11861e, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2", 0x1185de, 0x1185fe, indexGalaxyFightSprites_Gunter, 0x00 },
    { L"Gunter P2 - Blocking", 0x11861e, 0x11863e, indexGalaxyFightSprites_Gunter, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_Portraits[] =
{
    { L"Gunter P1 - Lose Portrait", 0x11f7fe, 0x11f81e, indexGalaxyFightSprites_Gunter, 0x40 },
    { L"Gunter P2 - Lose Portrait", 0x11f81e, 0x11f83e, indexGalaxyFightSprites_Gunter, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Gunter_Extras[] =
{
    { L"Gunter - Burned 1", 0x1186de, 0x1186fe, indexGalaxyFightSprites_Gunter, 0x08 },
    { L"Gunter - Burned 2", 0x1186be, 0x1186de, indexGalaxyFightSprites_Gunter, 0x09 },
    { L"Gunter - Zapped 1", 0x11867e, 0x11869e, indexGalaxyFightSprites_Gunter, 0x08 },
    { L"Gunter - Zapped 2", 0x11869e, 0x1186be, indexGalaxyFightSprites_Gunter, 0x0a },
    { L"Gunter - Zapped 3", 0x11865e, 0x11867e, indexGalaxyFightSprites_Gunter, 0x08 },
    { L"Gunter - Bull Breath", 0x11e43e, 0x11e45e, indexGalaxyFightSprites_Gunter, 0x0b },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetAirrassTemple[] =
{
    { L"Musafar P1", 0x116b9e, 0x116bbe, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116d1e, 0x116d3e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116e9e, 0x116ebe, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11701e, 0x11703e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x11719e, 0x1171be, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11731e, 0x11733e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x11749e, 0x1174be, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11761e, 0x11763e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x11779e, 0x1177be, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x11791e, 0x11793e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetAirrassSpaceStation[] =
{
    { L"Musafar P1", 0x116bbe, 0x116bde, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116d3e, 0x116d5e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116ebe, 0x116ede, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11703e, 0x11705e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x1171be, 0x1171de, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11733e, 0x11735e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x1174be, 0x1174de, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11763e, 0x11765e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x1177be, 0x1177de, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x11793e, 0x11795e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetLezaar[] =
{
    { L"Musafar P1", 0x116bde, 0x116bfe, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116d5e, 0x116d7e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116ede, 0x116efe, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11705e, 0x11707e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x1171de, 0x1171fe, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11735e, 0x11737e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x1174de, 0x1174fe, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11765e, 0x11767e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x1177de, 0x1177fe, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x11795e, 0x11797e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetLuteciaForest[] =
{
    { L"Musafar P1", 0x116bfe, 0x116c1e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116d7e, 0x116d9e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116efe, 0x116f1e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11707e, 0x11709e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x1171fe, 0x11721e, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11737e, 0x11739e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x1174fe, 0x11751e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11767e, 0x11769e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x1177fe, 0x11781e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x11797e, 0x11799e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetGuljeff[] =
{
    { L"Musafar P1", 0x116c1e, 0x116c3e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116d9e, 0x116dbe, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116f1e, 0x116f3e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11709e, 0x1170be, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x11721e, 0x11723e, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11739e, 0x1173be, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x11751e, 0x11753e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11769e, 0x1176be, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x11781e, 0x11783e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x11799e, 0x1179be, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetRozalis[] =
{
    { L"Musafar P1", 0x116c3e, 0x116c5e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116dbe, 0x116dde, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116f3e, 0x116f5e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x1170be, 0x1170de, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x11723e, 0x11725e, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x1173be, 0x1173de, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x11753e, 0x11755e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x1176be, 0x1176de, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x11783e, 0x11785e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x1179be, 0x1179de, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetMani[] =
{
    { L"Musafar P1", 0x116c5e, 0x116c7e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116dde, 0x116dfe, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116f5e, 0x116f7e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x1170de, 0x1170fe, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x11725e, 0x11727e, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x1173de, 0x1173fe, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x11755e, 0x11757e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x1176de, 0x1176fe, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x11785e, 0x11787e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x1179de, 0x1179fe, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetFakir[] =
{
    { L"Musafar P1", 0x116c7e, 0x116c9e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116dfe, 0x116e1e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116f7e, 0x116f9e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x1170fe, 0x11711e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x11727e, 0x11729e, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x1173fe, 0x11741e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x11757e, 0x11759e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x1176fe, 0x11771e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x11787e, 0x11789e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x1179fe, 0x117a1e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetTheAbsolute[] =
{
    { L"Musafar P1", 0x116c9e, 0x116cbe, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116e1e, 0x116e3e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116f9e, 0x116fbe, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11711e, 0x11713e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x11729e, 0x1172be, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11741e, 0x11743e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x11759e, 0x1175be, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11771e, 0x11773e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x11789e, 0x1178be, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x117a1e, 0x117a3e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetLuteciaWaterfall[] =
{
    { L"Musafar P1", 0x116cbe, 0x116cde, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116e3e, 0x116e5e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116fbe, 0x116fde, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11713e, 0x11715e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x1172be, 0x1172de, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11743e, 0x11745e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x1175be, 0x1175de, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11773e, 0x11775e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x1178be, 0x1178de, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x117a3e, 0x117a5e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetForgottenPlains[] =
{
    { L"Musafar P1", 0x116cde, 0x116cfe, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116e5e, 0x116e7e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116fde, 0x116ffe, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11715e, 0x11717e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x1172de, 0x1172fe, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11745e, 0x11747e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x1175de, 0x1175fe, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11775e, 0x11777e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x1178de, 0x1178fe, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x117a5e, 0x117a7e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_PlanetVerazques[] =
{
    { L"Musafar P1", 0x116cfe, 0x116d1e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x116e7e, 0x116e9e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x116ffe, 0x11701e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x11717e, 0x11719e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x1172fe, 0x11731e, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x11747e, 0x11749e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x1175fe, 0x11761e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x11777e, 0x11779e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x1178fe, 0x11791e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x117a7e, 0x117a9e, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_SelectYacopu[] =
{
    { L"Musafar P1", 0x118dbe, 0x118dde, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P1 - Extra 1", 0x118dde, 0x118dfe, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P1 - Extra 2", 0x118dfe, 0x118e1e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P1 - Extra 3", 0x118e1e, 0x118e3e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P1 - Extra 4", 0x118e3e, 0x118e5e, indexGalaxyFightSprites_Musafar, 0x04 },
    { L"Musafar P2", 0x118f1e, 0x118f3e, indexGalaxyFightSprites_Musafar, 0x00, &pairNext4Palettes },
    { L"Musafar P2 - Extra 1", 0x118f3e, 0x118f5e, indexGalaxyFightSprites_Musafar, 0x01 },
    { L"Musafar P2 - Extra 2", 0x118f5e, 0x118f7e, indexGalaxyFightSprites_Musafar, 0x02 },
    { L"Musafar P2 - Extra 3", 0x118f7e, 0x118f9e, indexGalaxyFightSprites_Musafar, 0x03 },
    { L"Musafar P2 - Extra 4", 0x118f9e, 0x118fbe, indexGalaxyFightSprites_Musafar, 0x04 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_Portraits[] =
{
    { L"Musafar P1 - Lose Portrait", 0x11f93e, 0x11f97e, indexGalaxyFightSprites_Musafar, 0x40 },
    { L"Musafar P2 - Lose Portrait", 0x11f97e, 0x11f9be, indexGalaxyFightSprites_Musafar, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Musafar_Extras[] =
{
    { L"Musafar - Burned 1", 0x118ebe, 0x118ede, indexGalaxyFightSprites_Musafar, 0x08 },
    { L"Musafar - Burned 2/Zapped 1", 0x118e9e, 0x118ebe, indexGalaxyFightSprites_Musafar, 0x09 },
    { L"Musafar - Burned 3/Zapped 2", 0x118e5e, 0x118e7e, indexGalaxyFightSprites_Musafar, 0x08 },
    { L"Musafar - Zapped 3", 0x118e7e, 0x118e9e, indexGalaxyFightSprites_Musafar, 0x08 },
    { L"Musafar - Defeated Body", 0x11eabe, 0x11eade, indexGalaxyFightSprites_Musafar, 0x08 },
    { L"Musafar - Musafar Punch", 0x11ea7e, 0x11ea9e, indexGalaxyFightSprites_Musafar, 0x0c },
    { L"Musafar - Musafar Missile", 0x11ea9e, 0x11eabe, indexGalaxyFightSprites_Musafar, 0x0b },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetAirrassTemple[] =
{
    { L"Bonus-Kun", 0x117a9e, 0x117abe, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11f9fe, 0x11fa1e, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fafe, 0x11fb1e, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetAirrassSpaceStation[] =
{
    { L"Bonus-Kun", 0x117abe, 0x117ade, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11fa1e, 0x11fa3e, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fb1e, 0x11fb3e, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetLezaar[] =
{
    { L"Bonus-Kun", 0x117ade, 0x117afe, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11fa3e, 0x11fa5e, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fb3e, 0x11fb5e, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetLuteciaForest[] =
{
    { L"Bonus-Kun", 0x117afe, 0x117b1e, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11fa5e, 0x11fa7e, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fb5e, 0x11fb7e, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetGuljeff[] =
{
    { L"Bonus-Kun", 0x117b1e, 0x117b3e, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11fa7e, 0x11fa9e, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fb7e, 0x11fb9e, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetRozalis[] =
{
    { L"Bonus-Kun", 0x117b3e, 0x117b5e, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11fa9e, 0x11fabe, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fb9e, 0x11fbbe, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetMani[] =
{
    { L"Bonus-Kun", 0x117b5e, 0x117b7e, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11fabe, 0x11fade, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fbbe, 0x11fbde, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetFakir[] =
{
    { L"Bonus-Kun", 0x117b7e, 0x117b9e, indexGalaxyFightSprites_BonusKun, 0x00 },
    { L"Bonus-Kun - Lose Portrait 1", 0x11fade, 0x11fafe, indexGalaxyFightSprites_BonusKun, 0x40, &pairNext },
    { L"Bonus-Kun - Lose Portrait 2", 0x11fbde, 0x11fbfe, indexGalaxyFightSprites_BonusKun, 0x41, &pairPrevious },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_PlanetVerazques[] =
{
    { L"Bonus-Kun", 0x11ddbe, 0x11ddde, indexGalaxyFightSprites_BonusKun, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_BonusKun_Extras[] =
{
    { L"Bonus-Kun - Burned 1", 0x11ddde, 0x11ddfe, indexGalaxyFightSprites_BonusKun, 0x08 },
    { L"Bonus-Kun - Burned 2", 0x11ddfe, 0x11de1e, indexGalaxyFightSprites_BonusKun, 0x09 },
    { L"Bonus-Kun - Zapped 1", 0x11de1e, 0x11de3e, indexGalaxyFightSprites_BonusKun, 0x08 },
    { L"Bonus-Kun - Zapped 2", 0x11de3e, 0x11de5e, indexGalaxyFightSprites_BonusKun, 0x0a },
    { L"Bonus-Kun - Fireball", 0x11f05e, 0x11f07e, indexGalaxyFightSprites_BonusKun, 0x0b },
};

const sGame_PaletteDataset GalaxyFight_A_Yacopu_PlanetLuteciaWaterfall[] =
{
    { L"Yacopu P1", 0x1191be, 0x1191de, indexGalaxyFightSprites_Yacopu, 0x00 },
    { L"Yacopu P2", 0x1192be, 0x1192de, indexGalaxyFightSprites_Yacopu, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Yacopu_Portraits[] =
{
    { L"Yacopu - Lose Portrait", 0x11f9de, 0x11f9fe, indexGalaxyFightSprites_Yacopu, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Yacopu_Extras[] =
{
    { L"Yacopu P1 - Burned 1", 0x1191de, 0x1191fe, indexGalaxyFightSprites_Yacopu, 0x08 },
    { L"Yacopu P1 - Burned 2", 0x1191fe, 0x11921e, indexGalaxyFightSprites_Yacopu, 0x09 },
    { L"Yacopu P1 - Zapped 1", 0x11921e, 0x11923e, indexGalaxyFightSprites_Yacopu, 0x08 },
    { L"Yacopu P1 - Zapped 2", 0x11923e, 0x11925e, indexGalaxyFightSprites_Yacopu, 0x0a },
    { L"Yacopu P2 - Burned 1", 0x1192de, 0x1192fe, indexGalaxyFightSprites_Yacopu, 0x08 },
    { L"Yacopu P2 - Burned 2", 0x1192fe, 0x11931e, indexGalaxyFightSprites_Yacopu, 0x09 },
    { L"Yacopu P2 - Zapped 1", 0x11931e, 0x11933e, indexGalaxyFightSprites_Yacopu, 0x08 },
    { L"Yacopu P2 - Zapped 2", 0x11933e, 0x11935e, indexGalaxyFightSprites_Yacopu, 0x0a },
};

const sGame_PaletteDataset GalaxyFight_A_Felden_PlanetTheAbsolute[] =
{
    { L"Felden", 0x118fbe, 0x118fde, indexGalaxyFightSprites_Felden, 0x00 },
    { L"Felden - (Alt.)", 0x11ebbe, 0x11ebde, indexGalaxyFightSprites_Felden, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Felden_Portraits[] =
{
    { L"Felden - Lose Portrait", 0x11f9be, 0x11f9de, indexGalaxyFightSprites_Felden, 0x40 },
};

const sGame_PaletteDataset GalaxyFight_A_Felden_Extras[] =
{
    { L"Felden - Burned 1",                 0x118ffe, 0x11901e, indexGalaxyFightSprites_Felden, 0x08 },
    { L"Felden - Burned 2",                 0x118fde, 0x118ffe, indexGalaxyFightSprites_Felden, 0x09 },
    { L"Felden - Zapped 1",                 0x11903e, 0x11905e, indexGalaxyFightSprites_Felden, 0x08 },
    { L"Felden - Zapped 2",                 0x11901e, 0x11903e, indexGalaxyFightSprites_Felden, 0x0a },
    { L"Felden - Zapped 3",                 0x11905e, 0x11907e, indexGalaxyFightSprites_Felden, 0x0a },
    { L"Felden - Flame Attacks 1",          0x11907e, 0x11909e, indexGalaxyFightSprites_Felden, 0x0e, &pairNext3Palettes },
    { L"Felden - Flame Attacks 2",          0x1190be, 0x1190de, indexGalaxyFightSprites_Felden, 0x0f },
    { L"Felden - Flame Attacks 3",          0x11909e, 0x1190be, indexGalaxyFightSprites_Felden, 0x10 },
    { L"Felden - Flame Attacks 4",          0x1190de, 0x1190fe, indexGalaxyFightSprites_Felden, 0x11 },
    { L"Felden - Solar Meteor",             0x11ec1e, 0x11ec3e, indexGalaxyFightSprites_Felden, 0x15 },
    { L"Felden - Solar Meteor Impact",      0x11ec3e, 0x11ec5e, indexGalaxyFightSprites_Felden, 0x16 },
    { L"Felden - Kinetic Storm",            0x11ecfe, 0x11ed1e, indexGalaxyFightSprites_Felden, 0x13 },
    { L"Felden - Big Bang Flame",           0x11ec7e, 0x11ec9e, indexGalaxyFightSprites_Felden, 0x0c },
    { L"Felden - Big Bang",                 0x11ecde, 0x11ecfe, indexGalaxyFightSprites_Felden, 0x0b },
    { L"Felden - Flame Chop",               0x11ebfe, 0x11ec1e, indexGalaxyFightSprites_Felden, 0x12 },
    { L"Felden - Chaos Punch",              0x11ecbe, 0x11ecde, indexGalaxyFightSprites_Felden, 0x0d },
    { L"Felden - Shield",                   0x11ebde, 0x11ebfe, indexGalaxyFightSprites_Felden, 0x14 },
    { L"Felden - Defeated Changing Pal 1",    0x1190fe, 0x11911e, indexGalaxyFightSprites_Felden, 0x08 },
    { L"Felden - Defeated Changing Pal 2",    0x11911e, 0x11913e, indexGalaxyFightSprites_Felden, 0x08 },
    { L"Felden - Defeated Changing Pal 3",    0x11913e, 0x11915e, indexGalaxyFightSprites_Felden, 0x08 },
    { L"Felden - Defeated Changing Pal 4",    0x11915e, 0x11917e, indexGalaxyFightSprites_Felden, 0x08 },
    { L"Felden - Defeated Changing Pal 5",    0x11917e, 0x11919e, indexGalaxyFightSprites_Felden, 0x08 },
};

const sGame_PaletteDataset GalaxyFight_A_Rouwe_PlanetForgottenPlains[] =
{
    { L"Rouwe", 0x11dbbe, 0x11dbde, indexGalaxyFightSprites_Rouwe, 0x00 },
    { L"Rouwe - (Alt.)", 0x11dbde, 0x11dbfe, indexGalaxyFightSprites_Rouwe, 0x00 },
};

const sGame_PaletteDataset GalaxyFight_A_Rouwe_Extras[] =
{
    { L"Rouwe - Burned 1", 0x11dcbe, 0x11dcde, indexGalaxyFightSprites_Rouwe, 0x08 },
    { L"Rouwe - Burned 2", 0x11dc7e, 0x11dc9e, indexGalaxyFightSprites_Rouwe, 0x09 },
    { L"Rouwe - Burned 3", 0x11dcde, 0x11dcfe, indexGalaxyFightSprites_Rouwe, 0x08 },
    { L"Rouwe - Zapped 1", 0x11dd1e, 0x11dd3e, indexGalaxyFightSprites_Rouwe, 0x08 },
    { L"Rouwe - Zapped 2", 0x11dc1e, 0x11dc3e, indexGalaxyFightSprites_Rouwe, 0x0a },
    { L"Rouwe - Zapped 3", 0x11dcfe, 0x11dd1e, indexGalaxyFightSprites_Rouwe, 0x08 },
    { L"Rouwe - Wind Storm", 0x11edbe, 0x11edde, indexGalaxyFightSprites_Rouwe, 0x0b },
};

const sDescTreeNode GalaxyFight_A_Rolf_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetMani, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetFakir, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_Rolf_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_SelectYacopu, ARRAYSIZE(GalaxyFight_A_Rolf_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_Portraits, ARRAYSIZE(GalaxyFight_A_Rolf_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_Extras, ARRAYSIZE(GalaxyFight_A_Rolf_Extras) },
};

const sDescTreeNode GalaxyFight_A_Kazuma_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetMani, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetFakir, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_Kazuma_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_SelectYacopu, ARRAYSIZE(GalaxyFight_A_Kazuma_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_Portraits, ARRAYSIZE(GalaxyFight_A_Kazuma_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_Extras, ARRAYSIZE(GalaxyFight_A_Kazuma_Extras) },
};

const sDescTreeNode GalaxyFight_A_Roomi_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetMani, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetFakir, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_Roomi_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_SelectYacopu, ARRAYSIZE(GalaxyFight_A_Roomi_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_Portraits, ARRAYSIZE(GalaxyFight_A_Roomi_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_Extras, ARRAYSIZE(GalaxyFight_A_Roomi_Extras) },
};

const sDescTreeNode GalaxyFight_A_Juri_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_Juri_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_Juri_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_Juri_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_Juri_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_Juri_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_Juri_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetMani, ARRAYSIZE(GalaxyFight_A_Juri_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetFakir, ARRAYSIZE(GalaxyFight_A_Juri_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Juri_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Juri_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Juri_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_Juri_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_SelectYacopu, ARRAYSIZE(GalaxyFight_A_Juri_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_Portraits, ARRAYSIZE(GalaxyFight_A_Juri_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_Extras, ARRAYSIZE(GalaxyFight_A_Juri_Extras) },
};

const sDescTreeNode GalaxyFight_A_GDone_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_GDone_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_GDone_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_GDone_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_GDone_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_GDone_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_GDone_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetMani, ARRAYSIZE(GalaxyFight_A_GDone_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetFakir, ARRAYSIZE(GalaxyFight_A_GDone_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_GDone_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_GDone_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_GDone_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_GDone_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_SelectYacopu, ARRAYSIZE(GalaxyFight_A_GDone_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_Portraits, ARRAYSIZE(GalaxyFight_A_GDone_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_Extras, ARRAYSIZE(GalaxyFight_A_GDone_Extras) },
};

const sDescTreeNode GalaxyFight_A_Alvan_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetMani, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetFakir, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_Alvan_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_SelectYacopu, ARRAYSIZE(GalaxyFight_A_Alvan_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_Portraits, ARRAYSIZE(GalaxyFight_A_Alvan_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_Extras, ARRAYSIZE(GalaxyFight_A_Alvan_Extras) },
};

const sDescTreeNode GalaxyFight_A_Gunter_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetMani, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetFakir, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_Gunter_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_SelectYacopu, ARRAYSIZE(GalaxyFight_A_Gunter_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_Portraits, ARRAYSIZE(GalaxyFight_A_Gunter_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_Extras, ARRAYSIZE(GalaxyFight_A_Gunter_Extras) },
};

const sDescTreeNode GalaxyFight_A_Musafar_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetMani, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetFakir, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetFakir) },
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetTheAbsolute) },
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetLuteciaWaterfall) },
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetForgottenPlains) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_Musafar_PlanetVerazques) },
    { L"Select/Yacopu", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_SelectYacopu, ARRAYSIZE(GalaxyFight_A_Musafar_SelectYacopu) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_Portraits, ARRAYSIZE(GalaxyFight_A_Musafar_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_Extras, ARRAYSIZE(GalaxyFight_A_Musafar_Extras) },
};

const sDescTreeNode GalaxyFight_A_BonusKun_COLLECTION[] =
{
    { L"Planet Airrass - Temple", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetAirrassTemple, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetAirrassTemple) },
    { L"Planet Airrass - Space Station", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetAirrassSpaceStation, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetAirrassSpaceStation) },
    { L"Planet Lezaar", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetLezaar, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetLezaar) },
    { L"Planet Lutecia - Forest", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetLuteciaForest, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetLuteciaForest) },
    { L"Planet Guljeff", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetGuljeff, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetGuljeff) },
    { L"Planet Rozalis", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetRozalis, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetRozalis) },
    { L"Planet Mani", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetMani, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetMani) },
    { L"Planet Fakir", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetFakir, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetFakir) },
    { L"Planet Verazques", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_PlanetVerazques, ARRAYSIZE(GalaxyFight_A_BonusKun_PlanetVerazques) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_Extras, ARRAYSIZE(GalaxyFight_A_BonusKun_Extras) },
};

const sDescTreeNode GalaxyFight_A_Yacopu_COLLECTION[] =
{
    { L"Planet Lutecia - Waterfall", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Yacopu_PlanetLuteciaWaterfall, ARRAYSIZE(GalaxyFight_A_Yacopu_PlanetLuteciaWaterfall) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Yacopu_Portraits, ARRAYSIZE(GalaxyFight_A_Yacopu_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Yacopu_Extras, ARRAYSIZE(GalaxyFight_A_Yacopu_Extras) },
};

const sDescTreeNode GalaxyFight_A_Felden_COLLECTION[] =
{
    { L"Planet The Absolute", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Felden_PlanetTheAbsolute, ARRAYSIZE(GalaxyFight_A_Felden_PlanetTheAbsolute) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Felden_Portraits, ARRAYSIZE(GalaxyFight_A_Felden_Portraits) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Felden_Extras, ARRAYSIZE(GalaxyFight_A_Felden_Extras) },
};

const sDescTreeNode GalaxyFight_A_Rouwe_COLLECTION[] =
{
    { L"Planet Forgotten Plains", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rouwe_PlanetForgottenPlains, ARRAYSIZE(GalaxyFight_A_Rouwe_PlanetForgottenPlains) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rouwe_Extras, ARRAYSIZE(GalaxyFight_A_Rouwe_Extras) },
};

const sDescTreeNode GalaxyFight_A_UNITS[] =
{
    { L"Rolf",      DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rolf_COLLECTION,       ARRAYSIZE(GalaxyFight_A_Rolf_COLLECTION) },
    { L"Kazuma",    DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Kazuma_COLLECTION,     ARRAYSIZE(GalaxyFight_A_Kazuma_COLLECTION) },
    { L"Roomi",     DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Roomi_COLLECTION,      ARRAYSIZE(GalaxyFight_A_Roomi_COLLECTION) },
    { L"Juri",      DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Juri_COLLECTION,       ARRAYSIZE(GalaxyFight_A_Juri_COLLECTION) },
    { L"G.Done",    DESC_NODETYPE_TREE, (void*)GalaxyFight_A_GDone_COLLECTION,      ARRAYSIZE(GalaxyFight_A_GDone_COLLECTION) },
    { L"Alvan",     DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Alvan_COLLECTION,      ARRAYSIZE(GalaxyFight_A_Alvan_COLLECTION) },
    { L"Gunter",    DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Gunter_COLLECTION,     ARRAYSIZE(GalaxyFight_A_Gunter_COLLECTION) },
    { L"Musafar",   DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Musafar_COLLECTION,    ARRAYSIZE(GalaxyFight_A_Musafar_COLLECTION) },
    { L"Bonus Kun", DESC_NODETYPE_TREE, (void*)GalaxyFight_A_BonusKun_COLLECTION,   ARRAYSIZE(GalaxyFight_A_BonusKun_COLLECTION) },
    { L"Yacopu",    DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Yacopu_COLLECTION,     ARRAYSIZE(GalaxyFight_A_Yacopu_COLLECTION) },
    { L"Felden",    DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Felden_COLLECTION,     ARRAYSIZE(GalaxyFight_A_Felden_COLLECTION) },
    { L"Rouwe",     DESC_NODETYPE_TREE, (void*)GalaxyFight_A_Rouwe_COLLECTION,      ARRAYSIZE(GalaxyFight_A_Rouwe_COLLECTION) },
};

constexpr auto GalaxyFight_A_NUMUNIT = ARRAYSIZE(GalaxyFight_A_UNITS);
constexpr auto GalaxyFight_A_EXTRALOC = GalaxyFight_A_NUMUNIT;

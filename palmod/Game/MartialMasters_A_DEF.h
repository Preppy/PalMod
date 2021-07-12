#pragma once

const UINT16 MartialMasters_A_IMGIDS_USED[] =
{
    indexMartialMastersSprites_Crane,           // 0x00
    indexMartialMastersSprites_DrunkMaster,     // 0x01
    indexMartialMastersSprites_GhostKick,       // 0x02
    indexMartialMastersSprites_LotusMaster,     // 0x03
    indexMartialMastersSprites_MasterHuang,     // 0x04
    indexMartialMastersSprites_Monk,            // 0x05
    indexMartialMastersSprites_MonkeyBoy,       // 0x06
    indexMartialMastersSprites_RedSnake,        // 0x07
    indexMartialMastersSprites_Reika,           // 0x08
    indexMartialMastersSprites_Saojin,          // 0x09
    indexMartialMastersSprites_Scorpion,        // 0x0A
    indexMartialMastersSprites_Tiger,           // 0x0B
    indexMartialMastersSprites_TrueLotusMaster, // 0x0C
    indexMartialMastersSprites_Bonus,           // 0x0D
};

// CHARACTERS

// Master Huang
const sGame_PaletteDataset MartialMasters_Palettes_MasterHuang_Core[] =
{
    { L"Master Huang A", 0x35f660, 0x35f6a0, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang B", 0x35f6e0, 0x35f720, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang C", 0x35f7a0, 0x35f7e0, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang D", 0x35f820, 0x35f860, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang AB", 0x35f720, 0x35f760, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang AC", 0x35f7e0, 0x35f820, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang BD", 0x35f6a0, 0x35f6e0, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang CD", 0x35f760, 0x35f7a0, indexMartialMastersSprites_MasterHuang },
};

const sGame_PaletteDataset MartialMasters_Palettes_MasterHuang_Extras[] =
{
    { L"Master Huang Spirit Awakening", 0x35f900, 0x35f920, indexMartialMastersSprites_MasterHuang, 0x08 },
    { L"Master Huang Supertrail 1", 0x35f9a0, 0x35f9e0, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang Supertrail 2", 0x35f920, 0x35f960, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang Supergrabtrail", 0x35f960, 0x35f9a0, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang Fire Flash", 0x35f9e0, 0x35fa20, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang Shadow Flash 1", 0x35fa20, 0x35fa60, indexMartialMastersSprites_MasterHuang },
    { L"Master Huang Shadow Flash 2", 0x35fa60, 0x35faa0, indexMartialMastersSprites_MasterHuang },
};

const sGame_PaletteDataset MartialMasters_Palettes_MasterHuang_Unused[] =
{
    { L"Master Huang Unused 1", 0x35f860, 0x35f8a0 },
    { L"Master Huang Unused 2", 0x35f8a0, 0x35f8e0 },
    { L"Master Huang Unused 3", 0x35f8e0, 0x35f900 },
};

// Drunk Master

const sGame_PaletteDataset MartialMasters_Palettes_DrunkMaster_Core[] =
{
    { L"Drunk Master A", 0x36a1b8, 0x36a1f8, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master B", 0x369ff8, 0x36a038, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master C", 0x36a0b8, 0x36a0f8, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master D", 0x36a138, 0x36a178, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master AB", 0x36a038, 0x36a078, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master AC", 0x36a0f8, 0x36a138, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master AD", 0x36a178, 0x36a1b8, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master BC", 0x369f78, 0x369fb8, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master BD", 0x369fb8, 0x369ff8, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master CD", 0x36a078, 0x36a0b8, indexMartialMastersSprites_DrunkMaster },
};

const sGame_PaletteDataset MartialMasters_Palettes_DrunkMaster_Extras[] =
{
    { L"Drunk Master Supertrail", 0x36a2b8, 0x36a2f8, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master Fire Flash", 0x36a2f8, 0x36a338, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master Shadow Flash 1", 0x36a338, 0x36a378, indexMartialMastersSprites_DrunkMaster },
    { L"Drunk Master Shadow Flash 2", 0x36a378, 0x36a3b8, indexMartialMastersSprites_DrunkMaster },
};

const sGame_PaletteDataset MartialMasters_Palettes_DrunkMaster_Unused[] =
{
    { L"Drunk Master Unused 1", 0x36a1f8, 0x36a238 },
    { L"Drunk Master Unused 2", 0x36a238, 0x36a278 },
    { L"Drunk Master Unused 3", 0x36a278, 0x36a2b8 },
};

//Crane

const sGame_PaletteDataset MartialMasters_Palettes_Crane_Core[] =
{
    { L"Crane A", 0x3ab636, 0x3ab676, indexMartialMastersSprites_Crane },
    { L"Crane B", 0x3ab6b6, 0x3ab6f6, indexMartialMastersSprites_Crane },
    { L"Crane C", 0x3ab776, 0x3ab7b6, indexMartialMastersSprites_Crane },
    { L"Crane D", 0x3ab7f6, 0x3ab836, indexMartialMastersSprites_Crane },
    { L"Crane AB", 0x3ab6f6, 0x3ab736, indexMartialMastersSprites_Crane },
    { L"Crane AC", 0x3ab7b6, 0x3ab7f6, indexMartialMastersSprites_Crane },
    { L"Crane BD", 0x3ab676, 0x3ab6b6, indexMartialMastersSprites_Crane },
    { L"Crane CD", 0x3ab736, 0x3ab776, indexMartialMastersSprites_Crane },
};

const sGame_PaletteDataset MartialMasters_Palettes_Crane_Extras[] =
{
    { L"Crane Supertrail", 0x3ab8b6, 0x3ab8f6, indexMartialMastersSprites_Crane },
    { L"Crane Fire Flash", 0x3ab8f6, 0x3ab936, indexMartialMastersSprites_Crane },
    { L"Crane Shadow Flash 1", 0x3ab936, 0x3ab976, indexMartialMastersSprites_Crane },
    { L"Crane Shadow Flash 2", 0x3ab976, 0x3ab9b6, indexMartialMastersSprites_Crane },
};

const sGame_PaletteDataset MartialMasters_Palettes_Crane_Unused[] =
{
    { L"Crane Unused 1", 0x3ab836, 0x3ab876 },
    { L"Crane Unused 2", 0x3ab876, 0x3ab8b6 },
};

//Ghost Kick

const sGame_PaletteDataset MartialMasters_Palettes_GhostKick_Core[] =
{
    { L"Ghost Kick A", 0x3a3a32, 0x3a3a72, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick B", 0x3a3ab2, 0x3a3af2, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick C", 0x3a3b72, 0x3a3bb2, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick D", 0x3a3bf2, 0x3a3c32, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick AB", 0x3a3af2, 0x3a3b32, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick AC", 0x3a3bb2, 0x3a3bf2, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick BD", 0x3a3a72, 0x3a3ab2, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick CD", 0x3a3b32, 0x3a3b72, indexMartialMastersSprites_GhostKick },
};

const sGame_PaletteDataset MartialMasters_Palettes_GhostKick_Extras[] =
{
    { L"Ghost Kick Intro Extra", 0x3a3cf2, 0x3a3d32, indexMartialMastersSprites_Bonus, 0x07 },
    { L"Ghost Kick Supertrail", 0x3a3d72, 0x3a3db2, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick Fire Flash", 0x3a3db2, 0x3a3df2, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick Shadow Flash 1", 0x3a3df2, 0x3a3e32, indexMartialMastersSprites_GhostKick },
    { L"Ghost Kick Shadow Flash 2", 0x3a3e32, 0x3a3e72, indexMartialMastersSprites_GhostKick },
};

const sGame_PaletteDataset MartialMasters_Palettes_GhostKick_Unused[] =
{
    { L"Ghost Kick Unused 1", 0x3a3c32, 0x3a3c72 },
    { L"Ghost Kick Unused 2", 0x3a3c72, 0x3a3cb2 },
    { L"Ghost Kick Unused Intro 1", 0x3a3cb2, 0x3a3cf2 },
    { L"Ghost Kick Unused Intro 2", 0x3a3d32, 0x3a3d72 },
};

//Tiger

const sGame_PaletteDataset MartialMasters_Palettes_Tiger_Core[] =
{
    { L"Tiger A", 0x37e910, 0x37e950, indexMartialMastersSprites_Tiger },
    { L"Tiger B", 0x37e990, 0x37e9d0, indexMartialMastersSprites_Tiger },
    { L"Tiger C", 0x37ea50, 0x37ea90, indexMartialMastersSprites_Tiger },
    { L"Tiger D", 0x37ead0, 0x37eb10, indexMartialMastersSprites_Tiger },
    { L"Tiger AB", 0x37e9d0, 0x37ea10, indexMartialMastersSprites_Tiger },
    { L"Tiger AC", 0x37ea90, 0x37ead0, indexMartialMastersSprites_Tiger },
    { L"Tiger AD", 0x37eb10, 0x37eb50, indexMartialMastersSprites_Tiger },
    { L"Tiger BD", 0x37e950, 0x37e990, indexMartialMastersSprites_Tiger },
    { L"Tiger CD", 0x37ea10, 0x37ea50, indexMartialMastersSprites_Tiger },
};

const sGame_PaletteDataset MartialMasters_Palettes_Tiger_Extras[] =
{
    { L"Tiger Supertrail", 0x37ec50, 0x37ec90, indexMartialMastersSprites_Tiger },
    { L"Tiger Fire Flash", 0x37ec90, 0x37ecd0, indexMartialMastersSprites_Tiger },
    { L"Tiger Shadow Flash 1", 0x37ecd0, 0x37ed10, indexMartialMastersSprites_Tiger },
    { L"Tiger Shadow Flash 2", 0x37ed10, 0x37ed50, indexMartialMastersSprites_Tiger },
};

const sGame_PaletteDataset MartialMasters_Palettes_Tiger_Unused[] =
{
    { L"Tiger Unused 1", 0x37eb50, 0x37eb90 },
    { L"Tiger Unused 2", 0x37eb90, 0x37ebd0 },
    { L"Tiger Unused 3", 0x37ebd0, 0x37ec10 },
    { L"Tiger Unused 4", 0x37ec10, 0x37ec50 },
};

// Reika

const sGame_PaletteDataset MartialMasters_Palettes_Reika_Core[] =
{
    { L"Reika A", 0x38e082, 0x38e0a2, indexMartialMastersSprites_Reika },
    { L"Reika B", 0x38e102, 0x38e122, indexMartialMastersSprites_Reika },
    { L"Reika C", 0x38e1c2, 0x38e1e2, indexMartialMastersSprites_Reika },
    { L"Reika D", 0x38e242, 0x38e262, indexMartialMastersSprites_Reika },
    { L"Reika AB", 0x38e142, 0x38e162, indexMartialMastersSprites_Reika },
    { L"Reika AC", 0x38e202, 0x38e222, indexMartialMastersSprites_Reika },
    { L"Reika BD", 0x38e0c2, 0x38e0e2, indexMartialMastersSprites_Reika },
    { L"Reika CD", 0x38e182, 0x38e1a2, indexMartialMastersSprites_Reika },
};

const sGame_PaletteDataset MartialMasters_Palettes_Reika_Extras[] =
{
    { L"Reika Fireball", 0x38e322, 0x38e342, indexMartialMastersSprites_Reika, 0x08 },
    { L"Reika Supertrail", 0x38e3c2, 0x38e3e2, indexMartialMastersSprites_Reika },
    { L"Reika Fire Flash", 0x38e402, 0x38e422, indexMartialMastersSprites_Reika },
    { L"Reika Shadow Flash 1", 0x38e442, 0x38e462, indexMartialMastersSprites_Reika },
    { L"Reika Shadow Flash 2", 0x38e482, 0x38e4a2, indexMartialMastersSprites_Reika },
};

const sGame_PaletteDataset MartialMasters_Palettes_Reika_Unused[] =
{
    { L"Reika A Extra", 0x38e0a2, 0x38e0c2 },
    { L"Reika B Extra", 0x38e122, 0x38e142 },
    { L"Reika C Extra", 0x38e1e2, 0x38e202 },
    { L"Reika D Extra", 0x38e262, 0x38e282 },
    { L"Reika AB Extra", 0x38e162, 0x38e182 },
    { L"Reika AC Extra", 0x38e222, 0x38e242 },
    { L"Reika BD Extra", 0x38e0e2, 0x38e102 },
    { L"Reika CD Extra", 0x38e1a2, 0x38e1c2 },
    { L"Reika Unused 1", 0x38e282, 0x38e2a2, indexMartialMastersSprites_Reika },
    { L"Reika Unused 1 Extra", 0x38e2a2, 0x38e2c2 },
    { L"Reika Unused 2", 0x38e2c2, 0x38e2e2, indexMartialMastersSprites_Reika },
    { L"Reika Unused 2 Extra", 0x38e2e2, 0x38e302 },
    { L"Reika Unused 3", 0x38e302, 0x38e322, indexMartialMastersSprites_Reika },
    { L"Reika Unused 4", 0x38e342, 0x38e362, indexMartialMastersSprites_Reika },
    { L"Reika Unused 4 Extra", 0x38e362, 0x38e382 },
    { L"Reika Unused 5", 0x38e382, 0x38e3a2, indexMartialMastersSprites_Reika },
    { L"Reika Unused 5 Extra", 0x38e3a2, 0x38e3c2 },
    { L"Reika Supertrail Extra", 0x38e3e2, 0x38e402 },
    { L"Reika Fire Flash Extra", 0x38e422, 0x38e442 },
    { L"Reika Shadow Flash 1 Extra", 0x38e462, 0x38e482 },
    { L"Reika Shadow Flash 2 Extra", 0x38e4a2, 0x38e4c2 },
};

//Scorpion

const sGame_PaletteDataset MartialMasters_Palettes_Scorpion_Core[] =
{
    { L"Scorpion A", 0x373b2a, 0x373b6a, indexMartialMastersSprites_Scorpion },
    { L"Scorpion B", 0x373baa, 0x373bea, indexMartialMastersSprites_Scorpion },
    { L"Scorpion C", 0x373c6a, 0x373caa, indexMartialMastersSprites_Scorpion },
    { L"Scorpion D", 0x373cea, 0x373d2a, indexMartialMastersSprites_Scorpion },
    { L"Scorpion AB", 0x373bea, 0x373c2a, indexMartialMastersSprites_Scorpion },
    { L"Scorpion AC", 0x373caa, 0x373cea, indexMartialMastersSprites_Scorpion },
    { L"Scorpion BD", 0x373b6a, 0x373baa, indexMartialMastersSprites_Scorpion },
    { L"Scorpion CD", 0x373c2a, 0x373c6a, indexMartialMastersSprites_Scorpion },
};

const sGame_PaletteDataset MartialMasters_Palettes_Scorpion_Extras[] =
{
    { L"Scorpion Supertrail", 0x373e6a, 0x373eaa, indexMartialMastersSprites_Scorpion },
    { L"Scorpion Fire Flash", 0x373eaa, 0x373eea, indexMartialMastersSprites_Scorpion },
    { L"Scorpion Shadow Flash 1", 0x373eea, 0x373f2a, indexMartialMastersSprites_Scorpion },
    { L"Scorpion Shadow Flash 2", 0x373f2a, 0x373f6a, indexMartialMastersSprites_Scorpion },
};

const sGame_PaletteDataset MartialMasters_Palettes_Scorpion_Unused[] =
{
    { L"Scorpion Unused 1", 0x373d2a, 0x373d6a, indexMartialMastersSprites_Scorpion },
    { L"Scorpion Unused 2", 0x373d6a, 0x373daa, indexMartialMastersSprites_Scorpion },
    { L"Scorpion Unused 3", 0x373daa, 0x373dea, indexMartialMastersSprites_Scorpion },
    { L"Scorpion Unused 4", 0x373dea, 0x373e2a, indexMartialMastersSprites_Scorpion },
    { L"Scorpion Unused 5", 0x373e2a, 0x373e6a, indexMartialMastersSprites_Scorpion },
};


//Red Snake

const sGame_PaletteDataset MartialMasters_Palettes_RedSnake_Core[] =
{
    { L"Red Snake A", 0x3b62f4, 0x3b6334, indexMartialMastersSprites_RedSnake },
    { L"Red Snake B", 0x3b6134, 0x3b6174, indexMartialMastersSprites_RedSnake },
    { L"Red Snake C", 0x3b61f4, 0x3b6234, indexMartialMastersSprites_RedSnake },
    { L"Red Snake D", 0x3b6274, 0x3b62b4, indexMartialMastersSprites_RedSnake },
    { L"Red Snake AB", 0x3b6174, 0x3b61b4, indexMartialMastersSprites_RedSnake },
    { L"Red Snake AC", 0x3b6234, 0x3b6274, indexMartialMastersSprites_RedSnake },
    { L"Red Snake AD", 0x3b62b4, 0x3b62f4, indexMartialMastersSprites_RedSnake },
    { L"Red Snake BC", 0x3b60b4, 0x3b60f4, indexMartialMastersSprites_RedSnake },
    { L"Red Snake BD", 0x3b60f4, 0x3b6134, indexMartialMastersSprites_RedSnake },
    { L"Red Snake CD", 0x3b61b4, 0x3b61f4, indexMartialMastersSprites_RedSnake },
};

const sGame_PaletteDataset MartialMasters_Palettes_RedSnake_Extras[] =
{
    { L"Red Snake Supertrail 1", 0x3b63b4, 0x3b63f4, indexMartialMastersSprites_RedSnake },
    { L"Red Snake Supertrail 2", 0x3b6374, 0x3b63b4, indexMartialMastersSprites_RedSnake },
    { L"Red Snake Supergrabtrail", 0x3b63f4, 0x3b6434, indexMartialMastersSprites_RedSnake },
    { L"Red Snake Fire Flash", 0x3b6434, 0x3b6474, indexMartialMastersSprites_RedSnake },
    { L"Red Snake Shadow Flash 1", 0x3b6474, 0x3b64b4, indexMartialMastersSprites_RedSnake },
    { L"Red Snake Shadow Flash 2", 0x3b64b4, 0x3b64f4, indexMartialMastersSprites_RedSnake },
};

const sGame_PaletteDataset MartialMasters_Palettes_RedSnake_Unused[] =
{
    { L"Red Snake Unused Supertrail", 0x3b6334, 0x3b6374 },
};

//Monkey Boy

const sGame_PaletteDataset MartialMasters_Palettes_MonkeyBoy_Core[] =
{
    { L"Monkey Boy A", 0x3970a4, 0x3970c4, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy B", 0x397124, 0x397144, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy C", 0x3971e4, 0x397204, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy D", 0x397264, 0x397284, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy AB", 0x397164, 0x397184, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy AC", 0x397224, 0x397244, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy BD", 0x3970e4, 0x397104, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy CD", 0x3971a4, 0x3971c4, indexMartialMastersSprites_MonkeyBoy },
};

const sGame_PaletteDataset MartialMasters_Palettes_MonkeyBoy_Extras[] =
{
    { L"Monkey Boy Food/Monkeys", 0x397364, 0x3973e4, indexMartialMastersSprites_MonkeyBoy, 0x08 },
    { L"Monkey Boy Intro Extra", 0x397324, 0x397364, indexMartialMastersSprites_Bonus, 0x07 },
    { L"Monkey Boy Supertrail", 0x3973e4, 0x397404, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy Fire Flash", 0x397424, 0x397444, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy Shadow Flash 1", 0x397464, 0x397484, indexMartialMastersSprites_MonkeyBoy },
    { L"Monkey Boy Shadow Flash 2", 0x3974a4, 0x3974c4, indexMartialMastersSprites_MonkeyBoy },
};

const sGame_PaletteDataset MartialMasters_Palettes_MonkeyBoy_Unused[] =
{
    { L"Monkey Boy A Extra", 0x3970c4, 0x3970e4 },
    { L"Monkey Boy B Extra", 0x397144, 0x397164 },
    { L"Monkey Boy C Extra", 0x397204, 0x397224 },
    { L"Monkey Boy D Extra", 0x397284, 0x3972a4 },
    { L"Monkey Boy AB Extra", 0x397184, 0x3971a4 },
    { L"Monkey Boy AC Extra", 0x397244, 0x397264 },
    { L"Monkey Boy BD Extra", 0x397104, 0x397124 },
    { L"Monkey Boy CD Extra", 0x3971c4, 0x3971e4 },
    { L"Monkey Boy Unused 1", 0x3972a4, 0x3972c4 },
    { L"Monkey Boy Unused 1 Extra", 0x3972c4, 0x3972e4 },
    { L"Monkey Boy Unused 2", 0x3972e4, 0x397304 },
    { L"Monkey Boy Unused 2 Extra", 0x397304, 0x397324 },
    { L"Monkey Boy Supertrail Extra", 0x397404, 0x397424 },
    { L"Monkey Boy Fire Flash Extra", 0x397444, 0x397464 },
    { L"Monkey Boy Shadow Flash 1 Extra", 0x397484, 0x3974a4 },
    { L"Monkey Boy Shadow Flash 2 Extra", 0x3974c4, 0x3974e4 },
};

//Monk

const sGame_PaletteDataset MartialMasters_Palettes_Monk_Core[] =
{
    { L"Monk A", 0x385e02, 0x385e42, indexMartialMastersSprites_Monk },
    { L"Monk B", 0x385e82, 0x385ec2, indexMartialMastersSprites_Monk },
    { L"Monk C", 0x385f42, 0x385f82, indexMartialMastersSprites_Monk },
    { L"Monk D", 0x385fc2, 0x386002, indexMartialMastersSprites_Monk },
    { L"Monk AB", 0x385ec2, 0x385f02, indexMartialMastersSprites_Monk },
    { L"Monk AC", 0x385f82, 0x385fc2, indexMartialMastersSprites_Monk },
    { L"Monk BD", 0x385e42, 0x385e82, indexMartialMastersSprites_Monk },
    { L"Monk CD", 0x385f02, 0x385f42, indexMartialMastersSprites_Monk },
};

const sGame_PaletteDataset MartialMasters_Palettes_Monk_Extras[] =
{
    { L"Monk Cauldron", 0x386082, 0x3860c2, indexMartialMastersSprites_Monk, 0x08 },
    { L"Monk Burning Cauldron", 0x3860c2, 0x386102, indexMartialMastersSprites_Monk, 0x08 },
    { L"Monk Supertrail", 0x386142, 0x386182, indexMartialMastersSprites_Monk },
    { L"Monk Fire Flash", 0x386182, 0x3861c2, indexMartialMastersSprites_Monk },
    { L"Monk Shadow Flash 1", 0x3861c2, 0x386202, indexMartialMastersSprites_Monk },
    { L"Monk Shadow Flash 2", 0x386202, 0x386242, indexMartialMastersSprites_Monk },
};

const sGame_PaletteDataset MartialMasters_Palettes_Monk_Unused[] =
{
    { L"Monk Unknown", 0x386102, 0x386142 },
    { L"Monk Unused 1", 0x386002, 0x386042 },
    { L"Monk Unused 2", 0x386042, 0x386082 },
};

//Lotus Master

const sGame_PaletteDataset MartialMasters_Palettes_LotusMaster_Core[] =
{
    { L"Lotus Master A", 0x3ca682, 0x3ca6c2, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master B", 0x3ca702, 0x3ca742, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master C", 0x3ca7c2, 0x3ca802, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master D", 0x3ca842, 0x3ca882, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master AB", 0x3ca742, 0x3ca782, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master AC", 0x3ca802, 0x3ca842, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master AD", 0x3ca882, 0x3ca8c2, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master BD", 0x3ca6c2, 0x3ca702, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master CD", 0x3ca782, 0x3ca7c2, indexMartialMastersSprites_LotusMaster },
};

const sGame_PaletteDataset MartialMasters_Palettes_LotusMaster_Extras[] =
{
    { L"Lotus Master Intro 1", 0x3ca942, 0x3ca982, indexMartialMastersSprites_LotusMaster, 0x0a },
    { L"Lotus Master Fire Flash/Intro 2", 0x3caa02, 0x3caa42, indexMartialMastersSprites_LotusMaster, 0x08 },
    { L"Lotus Master Lotus Effects", 0x3ca922, 0x3ca942, indexMartialMastersSprites_LotusMaster, 0x09 },
    { L"Lotus Master Supertrail", 0x3ca9c2, 0x3caa02, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master Shadow Flash 1", 0x3caa42, 0x3caa82, indexMartialMastersSprites_LotusMaster },
    { L"Lotus Master Shadow Flash 2", 0x3caa82, 0x3caac2, indexMartialMastersSprites_LotusMaster },
};

const sGame_PaletteDataset MartialMasters_Palettes_LotusMaster_Unused[] =
{
    { L"Lotus Master Unused", 0x3ca8c2, 0x3ca8e2 },
    { L"Lotus Master Unused Extra", 0x3ca8e2, 0x3ca902 },
    { L"Lotus Master Intro (Boss)", 0x3ca902, 0x3ca922 },
    { L"Lotus Master Firesparks (Boss)", 0x3ca982, 0x3ca9a2 },
    { L"Lotus Master Firesparks (Boss)", 0x3ca9a2, 0x3ca9c2 },
};

//Saojin
const sGame_PaletteDataset MartialMasters_Palettes_Saojin_Core[] =
{
    { L"Saojin A", 0x3c0ff8, 0x3c1038, indexMartialMastersSprites_Saojin },
    { L"Saojin B", 0x3c1078, 0x3c10b8, indexMartialMastersSprites_Saojin },
    { L"Saojin C", 0x3c1138, 0x3c1178, indexMartialMastersSprites_Saojin },
    { L"Saojin D", 0x3c11b8, 0x3c11f8, indexMartialMastersSprites_Saojin },
    { L"Saojin AB", 0x3c10b8, 0x3c10f8, indexMartialMastersSprites_Saojin },
    { L"Saojin AC", 0x3c1178, 0x3c11b8, indexMartialMastersSprites_Saojin },
    { L"Saojin BD", 0x3c1038, 0x3c1078, indexMartialMastersSprites_Saojin },
    { L"Saojin CD", 0x3c10f8, 0x3c1138, indexMartialMastersSprites_Saojin },
};

const sGame_PaletteDataset MartialMasters_Palettes_Saojin_Extras[] =
{
    { L"Saojin Followers/Win Extra", 0x3c1278, 0x3c12f8, indexMartialMastersSprites_Saojin, 0x08 },
    { L"Saojin Supertrail", 0x3c1338, 0x3c1378, indexMartialMastersSprites_Saojin },
    { L"Saojin Fire Flash", 0x3c1378, 0x3c13b8, indexMartialMastersSprites_Saojin },
    { L"Saojin Shadow Flash 1", 0x3c13b8, 0x3c13f8, indexMartialMastersSprites_Saojin },
    { L"Saojin Shadow Flash 2", 0x3c13f8, 0x3c1438, indexMartialMastersSprites_Saojin },
};

const sGame_PaletteDataset MartialMasters_Palettes_Saojin_Unused[] =
{
    { L"Saojin Unused 1", 0x3c11f8, 0x3c1238 },
    { L"Saojin Unused 2", 0x3c1238, 0x3c1278 },
    { L"Saojin Unused 3", 0x3c12f8, 0x3c1338 },
};

//True Lotus Master

const sGame_PaletteDataset MartialMasters_Palettes_TrueLotusMaster_Core[] =
{
    { L"True Lotus Master A", 0x3caac2, 0x3cab02, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master B", 0x3cab42, 0x3cab82, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master C", 0x3cac02, 0x3cac42, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master D", 0x3cac82, 0x3cacc2, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master AB", 0x3cab82, 0x3cabc2, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master AC", 0x3cac42, 0x3cac82, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master AD", 0x3cacc2, 0x3cad02, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master BD", 0x3cab02, 0x3cab42, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master CD", 0x3cabc2, 0x3cac02, indexMartialMastersSprites_TrueLotusMaster },
};

const sGame_PaletteDataset MartialMasters_Palettes_TrueLotusMaster_Extras[] =
{
    { L"True Lotus Master Intro 1", 0x3cad42, 0x3cad82, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master Intro 2", 0x3cad82, 0x3cadc2, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master Fire Flash/Effects", 0x3cae42, 0x3cae82, indexMartialMastersSprites_LotusMaster, 0x08 },
    { L"True Lotus Master Firesparks", 0x3cadc2, 0x3cae02, indexMartialMastersSprites_TrueLotusMaster, 0x08 },
    { L"True Lotus Master Supertrail", 0x3cae02, 0x3cae42, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master Shadow Flash 1", 0x3cae82, 0x3caec2, indexMartialMastersSprites_TrueLotusMaster },
    { L"True Lotus Master Shadow Flash 2", 0x3caec2, 0x3caf02, indexMartialMastersSprites_TrueLotusMaster },
};

const sGame_PaletteDataset MartialMasters_Palettes_TrueLotusMaster_Unused[] =
{
    { L"True Lotus Master Unused", 0x3cad02, 0x3cad42 },
};

//Portraits

const sGame_PaletteDataset MartialMasters_Palettes_Portraits_SelectScreen[] =
{
    { L"Master Huang Select Portrait",      0x347608, 0x347648, indexMartialMastersSprites_MasterHuang, 0x40 },
    { L"Drunk Master Select Portrait",      0x347648, 0x347688, indexMartialMastersSprites_DrunkMaster, 0x40 },
    { L"Crane Select Portrait",             0x347808, 0x347848, indexMartialMastersSprites_Crane, 0x40 },
    { L"Ghost Kick Select Portrait",        0x3477c8, 0x347808, indexMartialMastersSprites_GhostKick, 0x40 },
    { L"Tiger Select Portrait",             0x3476c8, 0x347708, indexMartialMastersSprites_Tiger, 0x40 },
    { L"Reika Select Portrait",             0x347748, 0x347788, indexMartialMastersSprites_Reika, 0x40 },
    { L"Scorpion Select Portrait",          0x347688, 0x3476c8, indexMartialMastersSprites_Scorpion, 0x40 },
    { L"Red Snake Select Portrait",         0x347848, 0x347888, indexMartialMastersSprites_RedSnake, 0x40 },
    { L"Monk Select Portrait",              0x347708, 0x347748, indexMartialMastersSprites_Monk, 0x40 },
    { L"Monkey Boy Select Portrait",        0x347788, 0x3477c8, indexMartialMastersSprites_MonkeyBoy, 0x40 },
    { L"Lotus Master Select Portrait",      0x3478c8, 0x347908, indexMartialMastersSprites_LotusMaster, 0x40 },
    { L"Saojin Select Portrait",            0x347888, 0x3478c8, indexMartialMastersSprites_Saojin, 0x40 },
    { L"True Lotus Master Select Portrait", 0x347908, 0x347948, indexMartialMastersSprites_LotusMaster, 0x40 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Portraits_WinScreen[] =
{
    { L"Master Huang Win Portrait",         0x347a48, 0x347a88, indexMartialMastersSprites_MasterHuang, 0x41 },
    { L"Drunk Master Win Portrait",         0x347a88, 0x347ac8, indexMartialMastersSprites_DrunkMaster, 0x41 },
    { L"Crane Win Portrait",                0x347c48, 0x347c88, indexMartialMastersSprites_Crane, 0x41 },
    { L"Ghost Kick Win Portrait",           0x347c08, 0x347c48, indexMartialMastersSprites_GhostKick, 0x41 },
    { L"Tiger Win Portrait",                0x347b08, 0x347b48, indexMartialMastersSprites_Tiger, 0x41 },
    { L"Reika Win Portrait",                0x347b88, 0x347bc8, indexMartialMastersSprites_Reika, 0x41 },
    { L"Scorpion Win Portrait",             0x347ac8, 0x347b08, indexMartialMastersSprites_Scorpion, 0x41 },
    { L"Red Snake Win Portrait",            0x347c88, 0x347cc8, indexMartialMastersSprites_RedSnake, 0x41 },
    { L"Monk Win Portrait",                 0x347b48, 0x347b88, indexMartialMastersSprites_Monk, 0x41 },
    { L"Monkey Boy Win Portrait",           0x347bc8, 0x347c08, indexMartialMastersSprites_MonkeyBoy, 0x41 },
    { L"Lotus Master Win Portrait",         0x347d08, 0x347d48, indexMartialMastersSprites_LotusMaster, 0x41 },
    { L"Saojin Win Portrait",               0x347cc8, 0x347d08, indexMartialMastersSprites_Saojin, 0x41 },
    { L"True Lotus Master Win Portrait",    0x347d48, 0x347d88, indexMartialMastersSprites_LotusMaster, 0x41 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Portraits_ScorePortraits[] =
{
    { L"Master Huang Score Portrait",       0x347048, 0x347088, indexMartialMastersSprites_MasterHuang, 0x41 },
    { L"Drunk Master Score Portrait",       0x347088, 0x3470c8, indexMartialMastersSprites_DrunkMaster, 0x41 },
    { L"Crane Score Portrait",              0x347248, 0x347288, indexMartialMastersSprites_Crane, 0x41 },
    { L"Ghost Kick Score Portrait",         0x347208, 0x347248, indexMartialMastersSprites_GhostKick, 0x41 },
    { L"Tiger Score Portrait",              0x347108, 0x347148, indexMartialMastersSprites_Tiger, 0x41 },
    { L"Reika Score Portrait",              0x347188, 0x3471c8, indexMartialMastersSprites_Reika, 0x41 },
    { L"Scorpion Score Portrait",           0x3470c8, 0x347108, indexMartialMastersSprites_Scorpion, 0x41 },
    { L"Red Snake Score Portrait",          0x347288, 0x3472c8, indexMartialMastersSprites_RedSnake, 0x41 },
    { L"Monk Score Portrait",               0x347148, 0x347188, indexMartialMastersSprites_Monk, 0x41 },
    { L"Monkey Boy Score Portrait",         0x3471c8, 0x347208, indexMartialMastersSprites_MonkeyBoy, 0x41 },
    { L"Lotus Master Score Portrait",       0x347308, 0x347348, indexMartialMastersSprites_LotusMaster, 0x41 },
    { L"Saojin Score Portrait",             0x3472c8, 0x347308, indexMartialMastersSprites_Saojin, 0x41 },
    { L"True Lotus Master Score Portrait",  0x347348, 0x347388, indexMartialMastersSprites_LotusMaster, 0x41 },
};

//STAGES

const sGame_PaletteDataset MartialMasters_Palettes_Stages_MasterHuang[] =
{
    { L"Master Huang Stage 1/2", 0x359cc8, 0x359d08 },
    { L"Master Huang Stage 2/2", 0x359d22, 0x359e22 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_DrunkMaster[] =
{
    { L"Drunk Master Stage 1/2", 0x35a4f6, 0x35a536 },
    { L"Drunk Master Stage 2/2", 0x35a550, 0x35a5d0 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_Crane[] =
{
    { L"Crane Stage 1/2", 0x35d81e, 0x35d85e },
    { L"Crane Stage 2/2", 0x35d878, 0x35d978 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_GhostKick[] =
{
    { L"Ghost Kick Stage 1/2", 0x35cf7e, 0x35cfbe },
    { L"Ghost Kick Stage 2/2", 0x35cfd8, 0x35d118 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_Tiger[] =
{
    { L"Tiger Stage 1/2", 0x35b24c, 0x35b28c },
    { L"Tiger Stage 2/2", 0x35b2b0, 0x35b390 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_Reika[] =
{
    { L"Reika Stage 1/2", 0x35c038, 0x35c078 },
    { L"Reika Stage 2/2", 0x35c092, 0x35c252 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_Scorpion[] =
{
    { L"Scorpion Stage 1/2", 0x35abfe, 0x35ac3e },
    { L"Scorpion Stage 2/2", 0x35ac58, 0x35ad58 },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_RedSnake[] =
{
    { L"Red Snake Stage 1/2", 0x35e042, 0x35e082 },
    { L"Red Snake Stage 2/2", 0x35e09c, 0x35e1dc },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_MonkeyBoy[] =
{
    { L"Monkey Boy Stage 1/2", 0x35c840, 0x35c880 },
    { L"Monkey Boy Stage 2/2", 0x35c89a, 0x35c99a },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_Monk[] =
{
    { L"Monk Stage 1/2", 0x35b9f0, 0x35bab0 },
    { L"Monk Stage 2/2", 0x35baca, 0x35bcca },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_LotusMaster[] =
{
    { L"Lotus Master Stage 1/2", 0x35ea94, 0x35eb94 },
    { L"Lotus Master Stage 2/2", 0x35ec5e, 0x35ed9e },
};

const sGame_PaletteDataset MartialMasters_Palettes_Stages_TrueLotusMaster[] =
{
    { L"True Lotus Master Stage 1/2", 0x35f356, 0x35f416 },
    { L"True Lotus Master Stage 2/2", 0x35f42e, 0x35f4ee },
};

// BONUS
const sGame_PaletteDataset MartialMasters_Palettes_Bonus_SelectScreen[] =
{
    { L"Main Menu Logo", 0x347fc8, 0x348008, indexMartialMastersSprites_Bonus, 0x05 },
    { L"Select Background", 0x347988, 0x3479c8, indexMartialMastersSprites_Bonus, 0x00, &pairNextAndNext },
    { L"Player Select Text", 0x347948, 0x347988, indexMartialMastersSprites_Bonus, 0x04 },
    { L"Select Icons", 0x3473c8, 0x347588, indexMartialMastersSprites_Bonus, 0x02 },
    { L"Select Names", 0x347a08, 0x347a28, indexMartialMastersSprites_Bonus, 0x03 },
    { L"Select Cursor 1/2", 0x347588, 0x3475a8, indexMartialMastersSprites_Bonus, 0x01 },
    { L"Select Cursor 2/2", 0x3475c8, 0x3475e8, indexMartialMastersSprites_Bonus, 0x01 },
    { L"VS Text", 0x3479c8, 0x347a08, indexMartialMastersSprites_Bonus, 0x06 },
    { L"Score Icons", 0x347388, 0x3473c8 },
};

const sDescTreeNode MartialMasters_A_MasterHuang_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_MasterHuang_Core, ARRAYSIZE(MartialMasters_Palettes_MasterHuang_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_MasterHuang_Extras, ARRAYSIZE(MartialMasters_Palettes_MasterHuang_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_MasterHuang_Unused, ARRAYSIZE(MartialMasters_Palettes_MasterHuang_Unused) },
};

const sDescTreeNode MartialMasters_A_DrunkMaster_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_DrunkMaster_Core, ARRAYSIZE(MartialMasters_Palettes_DrunkMaster_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_DrunkMaster_Extras, ARRAYSIZE(MartialMasters_Palettes_DrunkMaster_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_DrunkMaster_Unused, ARRAYSIZE(MartialMasters_Palettes_DrunkMaster_Unused) },
};

const sDescTreeNode MartialMasters_A_Crane_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Crane_Core, ARRAYSIZE(MartialMasters_Palettes_Crane_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Crane_Extras, ARRAYSIZE(MartialMasters_Palettes_Crane_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Crane_Unused, ARRAYSIZE(MartialMasters_Palettes_Crane_Unused) },
};

const sDescTreeNode MartialMasters_A_GhostKick_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_GhostKick_Core, ARRAYSIZE(MartialMasters_Palettes_GhostKick_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_GhostKick_Extras, ARRAYSIZE(MartialMasters_Palettes_GhostKick_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_GhostKick_Unused, ARRAYSIZE(MartialMasters_Palettes_GhostKick_Unused) },
};

const sDescTreeNode MartialMasters_A_Tiger_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Tiger_Core, ARRAYSIZE(MartialMasters_Palettes_Tiger_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Tiger_Extras, ARRAYSIZE(MartialMasters_Palettes_Tiger_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Tiger_Unused, ARRAYSIZE(MartialMasters_Palettes_Tiger_Unused) },
};

const sDescTreeNode MartialMasters_A_Reika_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Reika_Core, ARRAYSIZE(MartialMasters_Palettes_Reika_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Reika_Extras, ARRAYSIZE(MartialMasters_Palettes_Reika_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Reika_Unused, ARRAYSIZE(MartialMasters_Palettes_Reika_Unused) },
};

const sDescTreeNode MartialMasters_A_Scorpion_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Scorpion_Core, ARRAYSIZE(MartialMasters_Palettes_Scorpion_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Scorpion_Extras, ARRAYSIZE(MartialMasters_Palettes_Scorpion_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Scorpion_Unused, ARRAYSIZE(MartialMasters_Palettes_Scorpion_Unused) },
};

const sDescTreeNode MartialMasters_A_RedSnake_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_RedSnake_Core, ARRAYSIZE(MartialMasters_Palettes_RedSnake_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_RedSnake_Extras, ARRAYSIZE(MartialMasters_Palettes_RedSnake_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_RedSnake_Unused, ARRAYSIZE(MartialMasters_Palettes_RedSnake_Unused) },
};

const sDescTreeNode MartialMasters_A_MonkeyBoy_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_MonkeyBoy_Core, ARRAYSIZE(MartialMasters_Palettes_MonkeyBoy_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_MonkeyBoy_Extras, ARRAYSIZE(MartialMasters_Palettes_MonkeyBoy_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_MonkeyBoy_Unused, ARRAYSIZE(MartialMasters_Palettes_MonkeyBoy_Unused) },
};

const sDescTreeNode MartialMasters_A_Monk_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Monk_Core, ARRAYSIZE(MartialMasters_Palettes_Monk_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Monk_Extras, ARRAYSIZE(MartialMasters_Palettes_Monk_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Monk_Unused, ARRAYSIZE(MartialMasters_Palettes_Monk_Unused) },
};

const sDescTreeNode MartialMasters_A_LotusMaster_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_LotusMaster_Core, ARRAYSIZE(MartialMasters_Palettes_LotusMaster_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_LotusMaster_Extras, ARRAYSIZE(MartialMasters_Palettes_LotusMaster_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_LotusMaster_Unused, ARRAYSIZE(MartialMasters_Palettes_LotusMaster_Unused) },
};

const sDescTreeNode MartialMasters_A_Saojin_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Saojin_Core, ARRAYSIZE(MartialMasters_Palettes_Saojin_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Saojin_Extras, ARRAYSIZE(MartialMasters_Palettes_Saojin_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Saojin_Unused, ARRAYSIZE(MartialMasters_Palettes_Saojin_Unused) },
};

const sDescTreeNode MartialMasters_A_TrueLotusMaster_COLLECTION[] =
{
    { L"Core", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_TrueLotusMaster_Core, ARRAYSIZE(MartialMasters_Palettes_TrueLotusMaster_Core) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_TrueLotusMaster_Extras, ARRAYSIZE(MartialMasters_Palettes_TrueLotusMaster_Extras) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_TrueLotusMaster_Unused, ARRAYSIZE(MartialMasters_Palettes_TrueLotusMaster_Unused) },
};

const sDescTreeNode MartialMasters_A_PORTRAITS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Portraits_SelectScreen, ARRAYSIZE(MartialMasters_Palettes_Portraits_SelectScreen) },
    { L"Win Screen", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Portraits_WinScreen, ARRAYSIZE(MartialMasters_Palettes_Portraits_WinScreen) },
    { L"Score Portraits", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Portraits_ScorePortraits, ARRAYSIZE(MartialMasters_Palettes_Portraits_ScorePortraits) },
};

const sDescTreeNode MartialMasters_A_STAGES_COLLECTION[] =
{
    { L"Master Huang", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_MasterHuang, ARRAYSIZE(MartialMasters_Palettes_Stages_MasterHuang) },
    { L"Drunk Master", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_DrunkMaster, ARRAYSIZE(MartialMasters_Palettes_Stages_DrunkMaster) },
    { L"Crane", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_Crane, ARRAYSIZE(MartialMasters_Palettes_Stages_Crane) },
    { L"Ghost Kick", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_GhostKick, ARRAYSIZE(MartialMasters_Palettes_Stages_GhostKick) },
    { L"Tiger", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_Tiger, ARRAYSIZE(MartialMasters_Palettes_Stages_Tiger) },
    { L"Reika", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_Reika, ARRAYSIZE(MartialMasters_Palettes_Stages_Reika) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_Scorpion, ARRAYSIZE(MartialMasters_Palettes_Stages_Scorpion) },
    { L"Red Snake", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_RedSnake, ARRAYSIZE(MartialMasters_Palettes_Stages_RedSnake) },
    { L"Monkey Boy", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_MonkeyBoy, ARRAYSIZE(MartialMasters_Palettes_Stages_MonkeyBoy) },
    { L"Monk", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_Monk, ARRAYSIZE(MartialMasters_Palettes_Stages_Monk) },
    { L"Lotus Master", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_LotusMaster, ARRAYSIZE(MartialMasters_Palettes_Stages_LotusMaster) },
    { L"True Lotus Master", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Stages_TrueLotusMaster, ARRAYSIZE(MartialMasters_Palettes_Stages_TrueLotusMaster) },
};

const sDescTreeNode MartialMasters_A_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)MartialMasters_Palettes_Bonus_SelectScreen, ARRAYSIZE(MartialMasters_Palettes_Bonus_SelectScreen) },
};

const sDescTreeNode MartialMasters_A_UNITS[] =
{
    { L"Master Huang", DESC_NODETYPE_TREE, (void*)MartialMasters_A_MasterHuang_COLLECTION, ARRAYSIZE(MartialMasters_A_MasterHuang_COLLECTION) },
    { L"Drunk Master", DESC_NODETYPE_TREE, (void*)MartialMasters_A_DrunkMaster_COLLECTION, ARRAYSIZE(MartialMasters_A_DrunkMaster_COLLECTION) },
    { L"Crane", DESC_NODETYPE_TREE, (void*)MartialMasters_A_Crane_COLLECTION, ARRAYSIZE(MartialMasters_A_Crane_COLLECTION) },
    { L"Ghost Kick", DESC_NODETYPE_TREE, (void*)MartialMasters_A_GhostKick_COLLECTION, ARRAYSIZE(MartialMasters_A_GhostKick_COLLECTION) },
    { L"Tiger", DESC_NODETYPE_TREE, (void*)MartialMasters_A_Tiger_COLLECTION, ARRAYSIZE(MartialMasters_A_Tiger_COLLECTION) },
    { L"Reika", DESC_NODETYPE_TREE, (void*)MartialMasters_A_Reika_COLLECTION, ARRAYSIZE(MartialMasters_A_Reika_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MartialMasters_A_Scorpion_COLLECTION, ARRAYSIZE(MartialMasters_A_Scorpion_COLLECTION) },
    { L"Red Snake", DESC_NODETYPE_TREE, (void*)MartialMasters_A_RedSnake_COLLECTION, ARRAYSIZE(MartialMasters_A_RedSnake_COLLECTION) },
    { L"Monkey Boy", DESC_NODETYPE_TREE, (void*)MartialMasters_A_MonkeyBoy_COLLECTION, ARRAYSIZE(MartialMasters_A_MonkeyBoy_COLLECTION) },
    { L"Monk", DESC_NODETYPE_TREE, (void*)MartialMasters_A_Monk_COLLECTION, ARRAYSIZE(MartialMasters_A_Monk_COLLECTION) },
    { L"Lotus Master", DESC_NODETYPE_TREE, (void*)MartialMasters_A_LotusMaster_COLLECTION, ARRAYSIZE(MartialMasters_A_LotusMaster_COLLECTION) },
    { L"Saojin", DESC_NODETYPE_TREE, (void*)MartialMasters_A_Saojin_COLLECTION, ARRAYSIZE(MartialMasters_A_Saojin_COLLECTION) },
    { L"True Lotus Master", DESC_NODETYPE_TREE, (void*)MartialMasters_A_TrueLotusMaster_COLLECTION, ARRAYSIZE(MartialMasters_A_TrueLotusMaster_COLLECTION) },

    { L"Portraits", DESC_NODETYPE_TREE, (void*)MartialMasters_A_PORTRAITS_COLLECTION, ARRAYSIZE(MartialMasters_A_PORTRAITS_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)MartialMasters_A_STAGES_COLLECTION, ARRAYSIZE(MartialMasters_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MartialMasters_A_BONUS_COLLECTION, ARRAYSIZE(MartialMasters_A_BONUS_COLLECTION) },
};

constexpr auto MartialMasters_A_NUMUNIT = ARRAYSIZE(MartialMasters_A_UNITS);

#define MartialMasters_A_EXTRALOC MartialMasters_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MartialMasters_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

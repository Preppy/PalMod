#pragma once

const std::vector<uint16_t> SFA3_A_IMGIDS_USED =
{
    // MVC2 Assets
    indexCPS2Sprites_Ryu,          // 0x00
    indexCPS2Sprites_Zangief,      // 0x01
    indexCPS2Sprites_ChunLi,       // 0x1B
    indexCPS2Sprites_Akuma,        // 0x1E
    indexCPS2Sprites_Charlie,      // 0x21
    indexCPS2Sprites_Sakura,       // 0x22
    indexCPS2Sprites_Dan,          // 0x23
    indexCPS2Sprites_Cammy,        // 0x24
    indexCPS2Sprites_Dhalsim,      // 0x25
    indexCPS2Sprites_Bison,        // 0x26
    indexCPS2Sprites_Ken,          // 0x27
    // SFA3 Unique
    indexCPS2Sprites_Adon,         // 0x3D
    indexCPS2Sprites_Sodom,        // 0x3E
    indexCPS2Sprites_Guy,          // 0x3F
    indexCPS2Sprites_Birdie,       // 0x40
    indexCPS2Sprites_Rose,         // 0x41
    indexCPS2Sprites_Sagat,        // 0x42
    indexCPS2Sprites_Rolento,      // 0x43
    indexCPS2Sprites_Gen,          // 0x44
    indexCPS2Sprites_Balrog,       // 0x45
    indexCPS2Sprites_EHonda,       // 0x46
    indexCPS2Sprites_Blanka,       // 0x47
    indexCPS2Sprites_RMika,        // 0x48
    indexCPS2Sprites_Cody,         // 0x49
    indexCPS2Sprites_Vega,         // 0x4A
    indexCPS2Sprites_Karin,        // 0x4B
    indexCPS2Sprites_Juni,         // 0x4C
    indexCPS2Sprites_Juli,         // 0x4D
    indexCPS2Sprites_SFA3Assets,   // 0x4e - SFA3 HUD, stages
    indexCPS2Sprites_SFA3_Portraits, // 0x66
    indexSFA3Sprites_Stages,        // 0xeb
};

const sGame_PaletteDataset SFA3_A_RYU_XISMP[] =
{
    { L"X-Ism Punch", 0x2c0d2, 0x2c0f2, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Punch Extra 1: Hadouken", 0x2c0f2, 0x2c112, indexCPS2Sprites_Ryu, 0x01 },
    { L"X-Ism Punch Extra 2: Fire Hadouken", 0x2c112, 0x2c132 },
    { L"X-Ism Punch Super Trail Light", 0x2c132, 0x2c152, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c152, 0x2c172, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_XISMK[] =
{
    { L"X-Ism Kick", 0x2c172, 0x2c192, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Kick Extra 1: Hadouken", 0x2c192, 0x2c1b2, indexCPS2Sprites_Ryu, 0x01 },
    { L"X-Ism Kick Extra 2: Fire Hadouken", 0x2c1b2, 0x2c1d2 },
    { L"X-Ism Kick Super Trail Light", 0x2c1d2, 0x2c1f2, indexCPS2Sprites_Ryu, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c1f2, 0x2c212, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMP[] =
{
    { L"A-Ism Punch", 0x2c212, 0x2c232, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Punch Extra 1: Hadouken", 0x2c232, 0x2c252, indexCPS2Sprites_Ryu, 0x01 },
    { L"A-Ism Punch Extra 2: Fire Hadouken", 0x2c252, 0x2c272 },
    { L"A-Ism Punch Super Trail Light", 0x2c272, 0x2c292, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2c292, 0x2c2b2, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMK[] =
{
    { L"A-Ism Kick", 0x2c2b2, 0x2c2d2, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Kick Extra 1: Hadouken", 0x2c2d2, 0x2c2f2, indexCPS2Sprites_Ryu, 0x01 },
    { L"A-Ism Kick Extra 2: Fire Hadouken", 0x2c2f2, 0x2c312 },
    { L"A-Ism Kick Super Trail Light", 0x2c312, 0x2c332, indexCPS2Sprites_Ryu, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2c332, 0x2c352, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMP[] =
{
    { L"V-Ism Punch", 0x2c352, 0x2c372, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Punch Extra 1: Hadouken", 0x2c372, 0x2c392, indexCPS2Sprites_Ryu, 0x01 },
    { L"V-Ism Punch Extra 2: Fire Hadouken", 0x2c392, 0x2c3b2 },
    { L"V-Ism Punch Super Trail Light", 0x2c3b2, 0x2c3d2, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2c3d2, 0x2c3f2, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMK[] =
{
    { L"V-Ism Kick", 0x2c3f2, 0x2c412, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Kick Extra 1: Hadouken", 0x2c412, 0x2c432, indexCPS2Sprites_Ryu, 0x01 },
    { L"V-Ism Kick Extra 2: Fire Hadouken", 0x2c432, 0x2c452 },
    { L"V-Ism Kick Super Trail Light", 0x2c452, 0x2c472, indexCPS2Sprites_Ryu, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2c472, 0x2c492, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_STATUS[] =
{
    { L"Burned 1", 0x32a12 + 0x00, 0x32a12 + 0x20, indexCPS2Sprites_Ryu },
    { L"Burned 2", 0x32a12 + 0x20, 0x32a12 + 0x40, indexCPS2Sprites_Ryu },
    { L"Psycho Crusher Burned 1", 0x32a12 + 0x40, 0x32a12 + 0x60, indexCPS2Sprites_Ryu },
    { L"Psycho Crusher Burned 2", 0x32a12 + 0x60, 0x32a12 + 0x80, indexCPS2Sprites_Ryu },
    { L"V-Ism P1 After Effect 1", 0x32a12 + 0x80, 0x32a12 + 0xA0, indexCPS2Sprites_Ryu },
    { L"V-Ism P1 After Effect 2", 0x32a12 + 0xA0, 0x32a12 + 0xC0, indexCPS2Sprites_Ryu },
    { L"V-Ism P2 After Effect 1", 0x32a12 + 0xC0, 0x32a12 + 0xE0, indexCPS2Sprites_Ryu },
    { L"V-Ism P2 After Effect 2", 0x32a12 + 0xe0, 0x32a12 + 0x100, indexCPS2Sprites_Ryu },
    { L"X-Ism Punch Zapped", 0x32a12 + 0x100, 0x32a12 + 0x120, indexCPS2Sprites_Ryu, 0xa0 },
    { L"X-Ism Kick Zapped", 0x32a12 + 0x120, 0x32a12 + 0x140, indexCPS2Sprites_Ryu, 0xa0 },
    { L"A-Ism Punch Zapped", 0x32a12 + 0x140, 0x32a12 + 0x160, indexCPS2Sprites_Ryu, 0xa0 },
    { L"A-Ism Kick Zapped", 0x32a12 + 0x160, 0x32a12 + 0x180, indexCPS2Sprites_Ryu, 0xa0 },
    { L"V-Ism Punch Zapped", 0x32a12 + 0x180, 0x32a12 + 0x1A0, indexCPS2Sprites_Ryu, 0xa0 },
    { L"V-Ism Kick Zapped", 0x32a12 + 0x1A0, 0x32a12 + 0x1C0, indexCPS2Sprites_Ryu, 0xa0 },
    { L"Zapped Skeleton", 0x32a12 + 0x1C0, 0x32a12 + 0x1E0, indexCPS2Sprites_Ryu, 0xa1 },
    { L"X-Ism Punch Mash", 0x32a12 + 0x1e0, 0x32a12 + 0x200, indexCPS2Sprites_Ryu },
    { L"X-Ism Kick Mash", 0x32a12 + 0x200, 0x32a12 + 0x220, indexCPS2Sprites_Ryu },
    { L"A-Ism Punch Mash", 0x32a12 + 0x220, 0x32a12 + 0x240, indexCPS2Sprites_Ryu },
    { L"A-Ism Kick Mash", 0x32a12 + 0x240, 0x32a12 + 0x260, indexCPS2Sprites_Ryu },
    { L"V-Ism Punch Mash", 0x32a12 + 0x260, 0x32a12 + 0x280, indexCPS2Sprites_Ryu },
    { L"V-Ism Kick Mash", 0x32a12 + 0x280, 0x32a12 + 0x2A0, indexCPS2Sprites_Ryu },
    { L"Priority Win", 0x32a12 + 0x2A0, 0x32a12 + 0x2C0, indexCPS2Sprites_Ryu },
    { L"Damage Reduction", 0x32a12 + 0x2C0, 0x32a12 + 0x2E0, indexCPS2Sprites_Ryu },
    { L"Just Defend", 0x32a12 + 0x2e0, 0x32a12 + 0x300, indexCPS2Sprites_Ryu },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMP[] =
{
    { L"X-Ism Punch", 0x2c492, 0x2c4b2, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Punch Extra 1: Hadouken", 0x2c4b2, 0x2c4d2, indexCPS2Sprites_Ken, 0x01 },
    { L"X-Ism Punch Extra 2: Shoryuken Flames", 0x2c4d2, 0x2c4f2, indexCPS2Sprites_Ken, 0x08 },
    { L"X-Ism Punch Super Trail Light", 0x2c4f2, 0x2c512, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c512, 0x2c532, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMK[] =
{
    { L"X-Ism Kick", 0x2c532, 0x2c552, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Kick Extra 1: Hadouken", 0x2c552, 0x2c572, indexCPS2Sprites_Ken, 0x01 },
    { L"X-Ism Kick Extra 2: Shoryuken Flames", 0x2c572, 0x2c592, indexCPS2Sprites_Ken, 0x08 },
    { L"X-Ism Kick Super Trail Light", 0x2c592, 0x2c5b2, indexCPS2Sprites_Ken, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c5b2, 0x2c5d2, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMP[] =
{
    { L"A-Ism Punch", 0x2c5d2, 0x2c5f2, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Punch Extra 1: Hadouken", 0x2c5f2, 0x2c612, indexCPS2Sprites_Ken, 0x01 },
    { L"A-Ism Punch Extra 2: Shoryuken Flames", 0x2c612, 0x2c632, indexCPS2Sprites_Ken, 0x08 },
    { L"A-Ism Punch Super Trail Light", 0x2c632, 0x2c652, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2c652, 0x2c672, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMK[] =
{
    { L"A-Ism Kick", 0x2c672, 0x2c692, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Kick Extra 1: Hadouken", 0x2c692, 0x2c6b2, indexCPS2Sprites_Ken, 0x01 },
    { L"A-Ism Kick Extra 2: Shoryuken Flames", 0x2c6b2, 0x2c6d2, indexCPS2Sprites_Ken, 0x08 },
    { L"A-Ism Kick Super Trail Light", 0x2c6d2, 0x2c6f2, indexCPS2Sprites_Ken, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2c6f2, 0x2c712, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMP[] =
{
    { L"V-Ism Punch", 0x2c712, 0x2c732, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Punch Extra 1: Hadouken", 0x2c732, 0x2c752, indexCPS2Sprites_Ken, 0x01 },
    { L"V-Ism Punch Extra 2: Shoryuken Flames", 0x2c752, 0x2c772, indexCPS2Sprites_Ken, 0x08 },
    { L"V-Ism Punch Super Trail Light", 0x2c772, 0x2c792, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2c792, 0x2c7b2, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMK[] =
{
    { L"V-Ism Kick", 0x2c7b2, 0x2c7d2, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Kick Extra 1: Hadouken", 0x2c7d2, 0x2c7f2, indexCPS2Sprites_Ken, 0x01 },
    { L"V-Ism Kick Extra 2: Shoryuken Flames", 0x2c7f2, 0x2c812, indexCPS2Sprites_Ken, 0x08 },
    { L"V-Ism Kick Super Trail Light", 0x2c812, 0x2c832, indexCPS2Sprites_Ken, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2c832, 0x2c852, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_STATUS[] =
{
    { L"Burned 1", 0x32d12 + 0x00, 0x32d12 + 0x20, indexCPS2Sprites_Ken },
    { L"Burned 2", 0x32d12 + 0x20, 0x32d12 + 0x40, indexCPS2Sprites_Ken },
    { L"Psycho Crusher Burned 1", 0x32d12 + 0x40, 0x32d12 + 0x60, indexCPS2Sprites_Ken },
    { L"Psycho Crusher Burned 2", 0x32d12 + 0x60, 0x32d12 + 0x80, indexCPS2Sprites_Ken },
    { L"V-Ism P1 After Effect 1", 0x32d12 + 0x80, 0x32d12 + 0xA0, indexCPS2Sprites_Ken },
    { L"V-Ism P1 After Effect 2", 0x32d12 + 0xA0, 0x32d12 + 0xC0, indexCPS2Sprites_Ken },
    { L"V-Ism P2 After Effect 1", 0x32d12 + 0xC0, 0x32d12 + 0xE0, indexCPS2Sprites_Ken },
    { L"V-Ism P2 After Effect 2", 0x32d12 + 0xe0, 0x32d12 + 0x100, indexCPS2Sprites_Ken },
    { L"X-Ism Punch Zapped", 0x32d12 + 0x100, 0x32d12 + 0x120, indexCPS2Sprites_Ken, 0xa0 },
    { L"X-Ism Kick Zapped", 0x32d12 + 0x120, 0x32d12 + 0x140, indexCPS2Sprites_Ken, 0xa0 },
    { L"A-Ism Punch Zapped", 0x32d12 + 0x140, 0x32d12 + 0x160, indexCPS2Sprites_Ken, 0xa0 },
    { L"A-Ism Kick Zapped", 0x32d12 + 0x160, 0x32d12 + 0x180, indexCPS2Sprites_Ken, 0xa0 },
    { L"V-Ism Punch Zapped", 0x32d12 + 0x180, 0x32d12 + 0x1A0, indexCPS2Sprites_Ken, 0xa0 },
    { L"V-Ism Kick Zapped", 0x32d12 + 0x1A0, 0x32d12 + 0x1C0, indexCPS2Sprites_Ken, 0xa0 },
    { L"Zapped Skeleton", 0x32d12 + 0x1C0, 0x32d12 + 0x1E0, indexCPS2Sprites_Ken, 0xa1 },
    { L"X-Ism Punch Mash", 0x32d12 + 0x1e0, 0x32d12 + 0x200, indexCPS2Sprites_Ken },
    { L"X-Ism Kick Mash", 0x32d12 + 0x200, 0x32d12 + 0x220, indexCPS2Sprites_Ken },
    { L"A-Ism Punch Mash", 0x32d12 + 0x220, 0x32d12 + 0x240, indexCPS2Sprites_Ken },
    { L"A-Ism Kick Mash", 0x32d12 + 0x240, 0x32d12 + 0x260, indexCPS2Sprites_Ken },
    { L"V-Ism Punch Mash", 0x32d12 + 0x260, 0x32d12 + 0x280, indexCPS2Sprites_Ken },
    { L"V-Ism Kick Mash", 0x32d12 + 0x280, 0x32d12 + 0x2A0, indexCPS2Sprites_Ken },
    { L"Priority Win", 0x32d12 + 0x2A0, 0x32d12 + 0x2C0, indexCPS2Sprites_Ken },
    { L"Damage Reduction", 0x32d12 + 0x2C0, 0x32d12 + 0x2E0, indexCPS2Sprites_Ken },
    { L"Just Defend", 0x32d12 + 0x2e0, 0x32d12 + 0x300, indexCPS2Sprites_Ken },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMP[] =
{
    { L"X-Ism Punch", 0x2c852, 0x2c872, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2c872, 0x2c892, indexCPS2Sprites_Akuma, 0x0c },
    { L"X-Ism Punch Extra 2", 0x2c892, 0x2c8b2 },
    { L"X-Ism Punch Teleport 1", 0x4A852, 0x4A872, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Punch Teleport 2", 0x4A872, 0x4A892, indexCPS2Sprites_Akuma, 0x00 },

    { L"X-Ism Punch Super Trail Light", 0x2c8b2, 0x2c8d2, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c8d2, 0x2c8f2, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMK[] =
{
    { L"X-Ism Kick", 0x2c8f2, 0x2c912, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2c912, 0x2c932, indexCPS2Sprites_Akuma, 0x0c },
    { L"X-Ism Kick Extra 2", 0x2c932, 0x2c952 },
    { L"X-Ism Kick Teleport 1", 0x4A8F2, 0x4A912, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Kick Teleport 2", 0x4A912, 0x4A932, indexCPS2Sprites_Akuma, 0x00 },

    { L"X-Ism Kick Super Trail Light", 0x2c952, 0x2c972, indexCPS2Sprites_Akuma, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c972, 0x2c992, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMP[] =
{
    { L"A-Ism Punch", 0x2c992, 0x2c9b2, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2c9b2, 0x2c9d2, indexCPS2Sprites_Akuma, 0x0c },
    { L"A-Ism Punch Extra 2", 0x2c9d2, 0x2c9f2 },
    { L"A-Ism Punch Teleport 1", 0x4A992, 0x4A9B2, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Punch Teleport 2", 0x4A9B2, 0x4A9D2, indexCPS2Sprites_Akuma, 0x00 },

    { L"A-Ism Punch Super Trail Light", 0x2c9f2, 0x2ca12, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ca12, 0x2ca32, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMK[] =
{
    { L"A-Ism Kick", 0x2ca32, 0x2ca52, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2ca52, 0x2ca72, indexCPS2Sprites_Akuma, 0x0c },
    { L"A-Ism Kick Extra 2", 0x2ca72, 0x2ca92 },
    { L"A-Ism Kick Teleport 1", 0x4AA32, 0x4AA52, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Kick Teleport 2", 0x4AA52, 0x4AA72, indexCPS2Sprites_Akuma, 0x00 },

    { L"A-Ism Kick Super Trail Light", 0x2ca92, 0x2cab2, indexCPS2Sprites_Akuma, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2cab2, 0x2cad2, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMP[] =
{
    { L"V-Ism Punch", 0x2cad2, 0x2caf2, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2caf2, 0x2cb12, indexCPS2Sprites_Akuma, 0x0c },
    { L"V-Ism Punch Extra 2", 0x2cb12, 0x2cb32 },
    { L"V-Ism Punch Teleport 1", 0x4AAD2, 0x4AAF2, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Punch Teleport 2", 0x4AAF2, 0x4AB12, indexCPS2Sprites_Akuma, 0x00 },

    { L"V-Ism Punch Super Trail Light", 0x2cb32, 0x2cb52, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2cb52, 0x2cb72, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMK[] =
{
    { L"V-Ism Kick", 0x2cb72, 0x2cb92, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2cb92, 0x2cbb2, indexCPS2Sprites_Akuma, 0x0c },
    { L"V-Ism Kick Extra 2", 0x2cbb2, 0x2cbd2 },
    { L"V-Ism Kick Teleport 1", 0x4AB72, 0x4AB92, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Kick Teleport 2", 0x4AB92, 0x4ABB2, indexCPS2Sprites_Akuma, 0x00 },

    { L"V-Ism Kick Super Trail Light", 0x2cbd2, 0x2cbf2, indexCPS2Sprites_Akuma, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2cbf2, 0x2cc12, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_STATUS[] =
{
    { L"Burned 1", 0x33012 + 0x00, 0x33012 + 0x20, indexCPS2Sprites_Akuma },
    { L"Burned 2", 0x33012 + 0x20, 0x33012 + 0x40, indexCPS2Sprites_Akuma },
    { L"Psycho Crusher Burned 1", 0x33012 + 0x40, 0x33012 + 0x60, indexCPS2Sprites_Akuma },
    { L"Psycho Crusher Burned 2", 0x33012 + 0x60, 0x33012 + 0x80, indexCPS2Sprites_Akuma },
    { L"V-Ism P1 After Effect 1", 0x33012 + 0x80, 0x33012 + 0xA0, indexCPS2Sprites_Akuma },
    { L"V-Ism P1 After Effect 2", 0x33012 + 0xA0, 0x33012 + 0xC0, indexCPS2Sprites_Akuma },
    { L"V-Ism P2 After Effect 1", 0x33012 + 0xC0, 0x33012 + 0xE0, indexCPS2Sprites_Akuma },
    { L"V-Ism P2 After Effect 2", 0x33012 + 0xe0, 0x33012 + 0x100, indexCPS2Sprites_Akuma },
    { L"X-Ism Punch Zapped", 0x33012 + 0x100, 0x33012 + 0x120, indexCPS2Sprites_Akuma, 0xa0 },
    { L"X-Ism Kick Zapped", 0x33012 + 0x120, 0x33012 + 0x140, indexCPS2Sprites_Akuma, 0xa0 },
    { L"A-Ism Punch Zapped", 0x33012 + 0x140, 0x33012 + 0x160, indexCPS2Sprites_Akuma, 0xa0 },
    { L"A-Ism Kick Zapped", 0x33012 + 0x160, 0x33012 + 0x180, indexCPS2Sprites_Akuma, 0xa0 },
    { L"V-Ism Punch Zapped", 0x33012 + 0x180, 0x33012 + 0x1A0, indexCPS2Sprites_Akuma, 0xa0 },
    { L"V-Ism Kick Zapped", 0x33012 + 0x1A0, 0x33012 + 0x1C0, indexCPS2Sprites_Akuma, 0xa0 },
    { L"Zapped Skeleton", 0x33012 + 0x1C0, 0x33012 + 0x1E0, indexCPS2Sprites_Akuma, 0xa1 },
    { L"X-Ism Punch Mash", 0x33012 + 0x1e0, 0x33012 + 0x200, indexCPS2Sprites_Akuma },
    { L"X-Ism Kick Mash", 0x33012 + 0x200, 0x33012 + 0x220, indexCPS2Sprites_Akuma },
    { L"A-Ism Punch Mash", 0x33012 + 0x220, 0x33012 + 0x240, indexCPS2Sprites_Akuma },
    { L"A-Ism Kick Mash", 0x33012 + 0x240, 0x33012 + 0x260, indexCPS2Sprites_Akuma },
    { L"V-Ism Punch Mash", 0x33012 + 0x260, 0x33012 + 0x280, indexCPS2Sprites_Akuma },
    { L"V-Ism Kick Mash", 0x33012 + 0x280, 0x33012 + 0x2A0, indexCPS2Sprites_Akuma },
    { L"Priority Win", 0x33012 + 0x2A0, 0x33012 + 0x2C0, indexCPS2Sprites_Akuma },
    { L"Damage Reduction", 0x33012 + 0x2C0, 0x33012 + 0x2E0, indexCPS2Sprites_Akuma },
    { L"Just Defend", 0x33012 + 0x2e0, 0x33012 + 0x300, indexCPS2Sprites_Akuma },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMP[] =
{
    { L"X-Ism Punch", 0x2cc12, 0x2cc32, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Punch Sonic Boom", 0x2cc32, 0x2cc52, indexCPS2Sprites_Charlie, 0x01 },
    { L"X-Ism Punch Flash Kick", 0x2cc52, 0x2cc72, indexCPS2Sprites_Charlie, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2cc72, 0x2cc92, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2cc92, 0x2ccb2, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMK[] =
{
    { L"X-Ism Kick", 0x2ccb2, 0x2ccd2, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Kick Sonic Boom", 0x2ccd2, 0x2ccf2, indexCPS2Sprites_Charlie, 0x01 },
    { L"X-Ism Kick Flash Kick", 0x2ccf2, 0x2cd12, indexCPS2Sprites_Charlie, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2cd12, 0x2cd32, indexCPS2Sprites_Charlie, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2cd32, 0x2cd52, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMP[] =
{
    { L"A-Ism Punch", 0x2cd52, 0x2cd72, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Punch Sonic Boom", 0x2cd72, 0x2cd92, indexCPS2Sprites_Charlie, 0x01 },
    { L"A-Ism Punch Flash Kick", 0x2cd92, 0x2cdb2, indexCPS2Sprites_Charlie, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2cdb2, 0x2cdd2, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2cdd2, 0x2cdf2, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMK[] =
{
    { L"A-Ism Kick", 0x2cdf2, 0x2ce12, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Kick Sonic Boom", 0x2ce12, 0x2ce32, indexCPS2Sprites_Charlie, 0x01 },
    { L"A-Ism Kick Flash Kick", 0x2ce32, 0x2ce52, indexCPS2Sprites_Charlie, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2ce52, 0x2ce72, indexCPS2Sprites_Charlie, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ce72, 0x2ce92, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMP[] =
{
    { L"V-Ism Punch", 0x2ce92, 0x2ceb2, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Punch Sonic Boom", 0x2ceb2, 0x2ced2, indexCPS2Sprites_Charlie, 0x01 },
    { L"V-Ism Punch Flash Kick", 0x2ced2, 0x2cef2, indexCPS2Sprites_Charlie, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2cef2, 0x2cf12, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2cf12, 0x2cf32, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMK[] =
{
    { L"V-Ism Kick", 0x2cf32, 0x2cf52, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Kick Sonic Boom", 0x2cf52, 0x2cf72, indexCPS2Sprites_Charlie, 0x01 },
    { L"V-Ism Kick Flash Kick", 0x2cf72, 0x2cf92, indexCPS2Sprites_Charlie, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2cf92, 0x2cfb2, indexCPS2Sprites_Charlie, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2cfb2, 0x2cfd2, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_STATUS[] =
{
    { L"Burned 1", 0x33312 + 0x00, 0x33312 + 0x20, indexCPS2Sprites_Charlie },
    { L"Burned 2", 0x33312 + 0x20, 0x33312 + 0x40, indexCPS2Sprites_Charlie },
    { L"Psycho Crusher Burned 1", 0x33312 + 0x40, 0x33312 + 0x60, indexCPS2Sprites_Charlie },
    { L"Psycho Crusher Burned 2", 0x33312 + 0x60, 0x33312 + 0x80, indexCPS2Sprites_Charlie },
    { L"V-Ism P1 After Effect 1", 0x33312 + 0x80, 0x33312 + 0xA0, indexCPS2Sprites_Charlie },
    { L"V-Ism P1 After Effect 2", 0x33312 + 0xA0, 0x33312 + 0xC0, indexCPS2Sprites_Charlie },
    { L"V-Ism P2 After Effect 1", 0x33312 + 0xC0, 0x33312 + 0xE0, indexCPS2Sprites_Charlie },
    { L"V-Ism P2 After Effect 2", 0x33312 + 0xe0, 0x33312 + 0x100, indexCPS2Sprites_Charlie },
    { L"X-Ism Punch Zapped", 0x33312 + 0x100, 0x33312 + 0x120, indexCPS2Sprites_Charlie, 0xa0 },
    { L"X-Ism Kick Zapped", 0x33312 + 0x120, 0x33312 + 0x140, indexCPS2Sprites_Charlie, 0xa0 },
    { L"A-Ism Punch Zapped", 0x33312 + 0x140, 0x33312 + 0x160, indexCPS2Sprites_Charlie, 0xa0 },
    { L"A-Ism Kick Zapped", 0x33312 + 0x160, 0x33312 + 0x180, indexCPS2Sprites_Charlie, 0xa0 },
    { L"V-Ism Punch Zapped", 0x33312 + 0x180, 0x33312 + 0x1A0, indexCPS2Sprites_Charlie, 0xa0 },
    { L"V-Ism Kick Zapped", 0x33312 + 0x1A0, 0x33312 + 0x1C0, indexCPS2Sprites_Charlie, 0xa0 },
    { L"Zapped Skeleton", 0x33312 + 0x1C0, 0x33312 + 0x1E0, indexCPS2Sprites_Charlie, 0xa1 },
    { L"X-Ism Punch Mash", 0x33312 + 0x1e0, 0x33312 + 0x200, indexCPS2Sprites_Charlie },
    { L"X-Ism Kick Mash", 0x33312 + 0x200, 0x33312 + 0x220, indexCPS2Sprites_Charlie },
    { L"A-Ism Punch Mash", 0x33312 + 0x220, 0x33312 + 0x240, indexCPS2Sprites_Charlie },
    { L"A-Ism Kick Mash", 0x33312 + 0x240, 0x33312 + 0x260, indexCPS2Sprites_Charlie },
    { L"V-Ism Punch Mash", 0x33312 + 0x260, 0x33312 + 0x280, indexCPS2Sprites_Charlie },
    { L"V-Ism Kick Mash", 0x33312 + 0x280, 0x33312 + 0x2A0, indexCPS2Sprites_Charlie },
    { L"Priority Win", 0x33312 + 0x2A0, 0x33312 + 0x2C0, indexCPS2Sprites_Charlie },
    { L"Damage Reduction", 0x33312 + 0x2C0, 0x33312 + 0x2E0, indexCPS2Sprites_Charlie },
    { L"Just Defend", 0x33312 + 0x2e0, 0x33312 + 0x300, indexCPS2Sprites_Charlie },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_XISMP[] =
{
    { L"X-Ism Punch", 0x2cfd2, 0x2cff2, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"X-Ism Punch Keiokuken (shades)", 0x2cff2, 0x2d012, indexCPS2Sprites_ChunLi, 0x01, &pairPrevious },
    { L"X-Ism Punch Extra 2", 0x2d012, 0x2d032, indexCPS2Sprites_ChunLi, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2d032, 0x2d052, indexCPS2Sprites_ChunLi, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d052, 0x2d072, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_XISMK[] =
{
    { L"X-Ism Kick", 0x2d072, 0x2d092, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"X-Ism Kick Keiokuken (shades)", 0x2d092, 0x2d0b2, indexCPS2Sprites_ChunLi, 0x01, &pairPrevious },
    { L"X-Ism Kick Extra 2", 0x2d0b2, 0x2d0d2, indexCPS2Sprites_ChunLi, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2d0d2, 0x2d0f2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d0f2, 0x2d112, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMP[] =
{
    { L"A-Ism Punch", 0x2d112, 0x2d132, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Punch Keiokuken (shades)", 0x2d132, 0x2d152, indexCPS2Sprites_ChunLi, 0x0F, &pairPrevious },
    { L"A-Ism Punch Extra 2", 0x2d152, 0x2d172, indexCPS2Sprites_ChunLi, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2d172, 0x2d192, indexCPS2Sprites_ChunLi, 0x0c },
    { L"A-Ism Punch Super Trail Dark", 0x2d192, 0x2d1b2, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMK[] =
{
    { L"A-Ism Kick", 0x2d1b2, 0x2d1d2, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Kick Keiokuken (shades)", 0x2d1d2, 0x2d1f2, indexCPS2Sprites_ChunLi, 0x0F, &pairPrevious },
    { L"A-Ism Kick Extra 2", 0x2d1f2, 0x2d212, indexCPS2Sprites_ChunLi, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2d212, 0x2d232, indexCPS2Sprites_ChunLi, 0x0c },
    { L"A-Ism Kick Super Trail Dark", 0x2d232, 0x2d252, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMP[] =
{
    { L"V-Ism Punch", 0x2d252, 0x2d272, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Punch Keiokuken (shades)", 0x2d272, 0x2d292, indexCPS2Sprites_ChunLi, 0x0F, &pairPrevious },
    { L"V-Ism Punch Extra 2", 0x2d292, 0x2d2b2, indexCPS2Sprites_ChunLi, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2d2b2, 0x2d2d2, indexCPS2Sprites_ChunLi, 0x0c },
    { L"V-Ism Punch Super Trail Dark", 0x2d2d2, 0x2d2f2, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMK[] =
{
    { L"V-Ism Kick", 0x2d2f2, 0x2d312, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Kick Keiokuken (shades)", 0x2d312, 0x2d332, indexCPS2Sprites_ChunLi, 0x0F, &pairPrevious },
    { L"V-Ism Kick Extra 2", 0x2d332, 0x2d352, indexCPS2Sprites_ChunLi, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2d352, 0x2d372, indexCPS2Sprites_ChunLi, 0x0c },
    { L"V-Ism Kick Super Trail Dark", 0x2d372, 0x2d392, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_STATUS[] =
{
    { L"A/V-Ism Burned 1", 0x33612 + 0x00, 0x33612 + 0x20, indexCPS2Sprites_ChunLi, 0x0C },
    { L"A/V-Ism Burned 2", 0x33612 + 0x20, 0x33612 + 0x40, indexCPS2Sprites_ChunLi, 0x0C },
    { L"X-Ism Burned 1", 0x33912, 0x33932, indexCPS2Sprites_ChunLi },
    { L"X-Ism Burned 2", 0x33932, 0x33952, indexCPS2Sprites_ChunLi },
    { L"A/V-Ism Psycho Crusher Burned 1", 0x33612 + 0x40, 0x33612 + 0x60, indexCPS2Sprites_ChunLi, 0x0C },
    { L"A/V-Ism Psycho Crusher Burned 2", 0x33612 + 0x60, 0x33612 + 0x80, indexCPS2Sprites_ChunLi, 0x0C },
    { L"X-Ism Psycho Crusher Burned 1", 0x33952, 0x33972, indexCPS2Sprites_ChunLi },
    { L"X-Ism Psycho Crusher Burned 2", 0x33972, 0x33992, indexCPS2Sprites_ChunLi },

    { L"V-Ism P1 After Effect 1", 0x33612 + 0x80, 0x33612 + 0xA0, indexCPS2Sprites_ChunLi, 0x0C },
    { L"V-Ism P1 After Effect 2", 0x33612 + 0xA0, 0x33612 + 0xC0, indexCPS2Sprites_ChunLi, 0x0C },
    { L"V-Ism P2 After Effect 1", 0x33612 + 0xC0, 0x33612 + 0xE0, indexCPS2Sprites_ChunLi, 0x0C },
    { L"V-Ism P2 After Effect 2", 0x33612 + 0xe0, 0x33612 + 0x100, indexCPS2Sprites_ChunLi, 0x0C },
    { L"X-Ism Punch Zapped", 0x33612 + 0x100, 0x33612 + 0x120, indexCPS2Sprites_ChunLi, 0xa0 },
    { L"X-Ism Kick Zapped", 0x33612 + 0x120, 0x33612 + 0x140, indexCPS2Sprites_ChunLi, 0xa0 },
    { L"A-Ism Punch Zapped", 0x33612 + 0x140, 0x33612 + 0x160, indexCPS2Sprites_ChunLi, 0xa2 },
    { L"A-Ism Kick Zapped", 0x33612 + 0x160, 0x33612 + 0x180, indexCPS2Sprites_ChunLi, 0xa2},
    { L"V-Ism Punch Zapped", 0x33612 + 0x180, 0x33612 + 0x1A0, indexCPS2Sprites_ChunLi, 0xa2 },
    { L"V-Ism Kick Zapped", 0x33612 + 0x1A0, 0x33612 + 0x1C0, indexCPS2Sprites_ChunLi, 0xa2 },
    { L"Zapped Skeleton", 0x33612 + 0x1C0, 0x33612 + 0x1E0, indexCPS2Sprites_ChunLi, 0xa1 },
    { L"X-Ism Punch Mash", 0x33612 + 0x1e0, 0x33612 + 0x200, indexCPS2Sprites_ChunLi },
    { L"X-Ism Kick Mash", 0x33612 + 0x200, 0x33612 + 0x220, indexCPS2Sprites_ChunLi },
    { L"A-Ism Punch Mash", 0x33612 + 0x220, 0x33612 + 0x240, indexCPS2Sprites_ChunLi, 0x0C },
    { L"A-Ism Kick Mash", 0x33612 + 0x240, 0x33612 + 0x260, indexCPS2Sprites_ChunLi, 0x0C },
    { L"V-Ism Punch Mash", 0x33612 + 0x260, 0x33612 + 0x280, indexCPS2Sprites_ChunLi, 0x0C },
    { L"V-Ism Kick Mash", 0x33612 + 0x280, 0x33612 + 0x2A0, indexCPS2Sprites_ChunLi, 0x0C },
    { L"A/V-Ism Priority Win", 0x33612 + 0x2A0, 0x33612 + 0x2C0, indexCPS2Sprites_ChunLi, 0x0C },
    { L"X-Ism Priority Win", 0x33992, 0x339b2, indexCPS2Sprites_ChunLi },
    { L"A/V-Ism Damage Reduction", 0x33612 + 0x2C0, 0x33612 + 0x2E0, indexCPS2Sprites_ChunLi, 0x0C },
    { L"X-Ism Damage Reduction", 0x339b2, 0x339d2, indexCPS2Sprites_ChunLi },
    { L"A/V-Ism Just Defend", 0x33612 + 0x2e0, 0x33612 + 0x300, indexCPS2Sprites_ChunLi, 0x0C },
    { L"X-Ism Just Defend", 0x339d2, 0x339f2, indexCPS2Sprites_ChunLi },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMP[] =
{
    { L"X-Ism Punch", 0x2d392, 0x2d3b2, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2d3b2, 0x2d3d2, indexCPS2Sprites_Adon, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2d3d2, 0x2d3f2 },
    { L"X-Ism Punch Super Trail Light", 0x2d3f2, 0x2d412, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d412, 0x2d432, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMK[] =
{
    { L"X-Ism Kick", 0x2d432, 0x2d452, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2d452, 0x2d472, indexCPS2Sprites_Adon, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2d472, 0x2d492 },
    { L"X-Ism Kick Super Trail Light", 0x2d492, 0x2d4b2, indexCPS2Sprites_Adon, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d4b2, 0x2d4d2, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMP[] =
{
    { L"A-Ism Punch", 0x2d4d2, 0x2d4f2, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2d4f2, 0x2d512, indexCPS2Sprites_Adon, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2d512, 0x2d532 },
    { L"A-Ism Punch Super Trail Light", 0x2d532, 0x2d552, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2d552, 0x2d572, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMK[] =
{
    { L"A-Ism Kick", 0x2d572, 0x2d592, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2d592, 0x2d5b2, indexCPS2Sprites_Adon, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2d5b2, 0x2d5d2 },
    { L"A-Ism Kick Super Trail Light", 0x2d5d2, 0x2d5f2, indexCPS2Sprites_Adon, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2d5f2, 0x2d612, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMP[] =
{
    { L"V-Ism Punch", 0x2d612, 0x2d632, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2d632, 0x2d652, indexCPS2Sprites_Adon, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2d652, 0x2d672 },
    { L"V-Ism Punch Super Trail Light", 0x2d672, 0x2d692, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2d692, 0x2d6b2, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMK[] =
{
    { L"V-Ism Kick", 0x2d6b2, 0x2d6d2, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2d6d2, 0x2d6f2, indexCPS2Sprites_Adon, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2d6f2, 0x2d712 },
    { L"V-Ism Kick Super Trail Light", 0x2d712, 0x2d732, indexCPS2Sprites_Adon, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2d732, 0x2d752, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_STATUS[] =
{
    { L"Burned 1", 0x339f2 + 0x00, 0x339f2 + 0x20, indexCPS2Sprites_Adon },
    { L"Burned 2", 0x339f2 + 0x20, 0x339f2 + 0x40, indexCPS2Sprites_Adon },
    { L"Psycho Crusher Burned 1", 0x339f2 + 0x40, 0x339f2 + 0x60, indexCPS2Sprites_Adon },
    { L"Psycho Crusher Burned 2", 0x339f2 + 0x60, 0x339f2 + 0x80, indexCPS2Sprites_Adon },
    { L"V-Ism P1 After Effect 1", 0x339f2 + 0x80, 0x339f2 + 0xA0, indexCPS2Sprites_Adon },
    { L"V-Ism P1 After Effect 2", 0x339f2 + 0xA0, 0x339f2 + 0xC0, indexCPS2Sprites_Adon },
    { L"V-Ism P2 After Effect 1", 0x339f2 + 0xC0, 0x339f2 + 0xE0, indexCPS2Sprites_Adon },
    { L"V-Ism P2 After Effect 2", 0x339f2 + 0xe0, 0x339f2 + 0x100, indexCPS2Sprites_Adon },
    { L"X-Ism Punch Zapped", 0x339f2 + 0x100, 0x339f2 + 0x120, indexCPS2Sprites_Adon, 0xa0 },
    { L"X-Ism Kick Zapped", 0x339f2 + 0x120, 0x339f2 + 0x140, indexCPS2Sprites_Adon, 0xa0 },
    { L"A-Ism Punch Zapped", 0x339f2 + 0x140, 0x339f2 + 0x160, indexCPS2Sprites_Adon, 0xa0 },
    { L"A-Ism Kick Zapped", 0x339f2 + 0x160, 0x339f2 + 0x180, indexCPS2Sprites_Adon, 0xa0 },
    { L"V-Ism Punch Zapped", 0x339f2 + 0x180, 0x339f2 + 0x1A0, indexCPS2Sprites_Adon, 0xa0 },
    { L"V-Ism Kick Zapped", 0x339f2 + 0x1A0, 0x339f2 + 0x1C0, indexCPS2Sprites_Adon, 0xa0 },
    { L"Zapped Skeleton", 0x339f2 + 0x1C0, 0x339f2 + 0x1E0, indexCPS2Sprites_Adon, 0xa1 },
    { L"X-Ism Punch Mash", 0x339f2 + 0x1e0, 0x339f2 + 0x200, indexCPS2Sprites_Adon },
    { L"X-Ism Kick Mash", 0x339f2 + 0x200, 0x339f2 + 0x220, indexCPS2Sprites_Adon },
    { L"A-Ism Punch Mash", 0x339f2 + 0x220, 0x339f2 + 0x240, indexCPS2Sprites_Adon },
    { L"A-Ism Kick Mash", 0x339f2 + 0x240, 0x339f2 + 0x260, indexCPS2Sprites_Adon },
    { L"V-Ism Punch Mash", 0x339f2 + 0x260, 0x339f2 + 0x280, indexCPS2Sprites_Adon },
    { L"V-Ism Kick Mash", 0x339f2 + 0x280, 0x339f2 + 0x2A0, indexCPS2Sprites_Adon },
    { L"Priority Win", 0x339f2 + 0x2A0, 0x339f2 + 0x2C0, indexCPS2Sprites_Adon },
    { L"Damage Reduction", 0x339f2 + 0x2C0, 0x339f2 + 0x2E0, indexCPS2Sprites_Adon },
    { L"Just Defend", 0x339f2 + 0x2e0, 0x339f2 + 0x300, indexCPS2Sprites_Adon },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMP[] =
{
    { L"X-Ism Punch", 0x2d752, 0x2d772, indexCPS2Sprites_Sodom, 0x00, &pairNext },
    { L"X-Ism Punch Swords", 0x02D772, 0x02D792, indexCPS2Sprites_Sodom, 0x01, &pairPrevious },
    { L"X-Ism Punch Intro", 0x2d792, 0x2d7b2, indexCPS2Sprites_Sodom, 0x03 },
    { L"X-Ism Punch Super Trail", 0x2d7b2, 0x2d7d2, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Punch Super Trail Swords", 0x2d7d2, 0x2d7f2, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMK[] =
{
    { L"X-Ism Kick", 0x2d7f2, 0x2d812, indexCPS2Sprites_Sodom, 0x00, &pairNext },
    { L"X-Ism Kick Swords", 0x02D812, 0x02D832, indexCPS2Sprites_Sodom, 0x01, &pairPrevious },
    { L"X-Ism Kick Intro", 0x2d832, 0x2d852, indexCPS2Sprites_Sodom, 0x03 },
    { L"X-Ism Kick Super Trail", 0x2d852, 0x2d872, indexCPS2Sprites_Sodom, 0x00 },
    { L"X-Ism Kick Super Trail Swords", 0x2d872, 0x2d892, indexCPS2Sprites_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMP[] =
{
    { L"A-Ism Punch", 0x2d892, 0x2d8b2, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"A-Ism Punch Slashes", 0x02D8B2, 0x02D8D2, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"A-Ism Punch Intro", 0x2d8d2, 0x2d8f2, indexCPS2Sprites_Sodom, 0x03 },
    { L"A-Ism Punch Super Trail", 0x2d8f2, 0x2d912, indexCPS2Sprites_Sodom, 0x01 },
    { L"A-Ism Punch Super Trail Swords", 0x2d912, 0x2d932, indexCPS2Sprites_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMK[] =
{
    { L"A-Ism Kick", 0x2d932, 0x2d952, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"A-Ism Kick Slashes", 0x02D952, 0x02D972, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"A-Ism Kick Intro", 0x2d972, 0x2d992, indexCPS2Sprites_Sodom, 0x03 },
    { L"A-Ism Kick Super Trail", 0x2d992, 0x2d9b2, indexCPS2Sprites_Sodom, 0x01 },
    { L"A-Ism Kick Super Trail Swords", 0x2d9b2, 0x2d9d2, indexCPS2Sprites_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMP[] =
{
    { L"V-Ism Punch", 0x2d9d2, 0x2d9f2, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"V-Ism Punch Slashes", 0x02D9F2, 0x02DA12, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"V-Ism Punch Intro", 0x2da12, 0x2da32, indexCPS2Sprites_Sodom, 0x03 },
    { L"V-Ism Punch Super Trail", 0x2da32, 0x2da52, indexCPS2Sprites_Sodom, 0x01 },
    { L"V-Ism Punch Super Trail Swords", 0x2da52, 0x2da72, indexCPS2Sprites_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMK[] =
{
    { L"V-Ism Kick", 0x2da72, 0x2da92, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"V-Ism Kick Slashes", 0x02DA92, 0x02DAB2, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"V-Ism Kick Intro", 0x2dab2, 0x2dad2, indexCPS2Sprites_Sodom, 0x03 },
    { L"V-Ism Kick Super Trail", 0x2dad2, 0x2daf2, indexCPS2Sprites_Sodom, 0x01 },
    { L"V-Ism Kick Super Trail Swords", 0x2daf2, 0x2db12, indexCPS2Sprites_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_STATUS[] =
{
    { L"Burned 1", 0x33cf2 + 0x00, 0x33cf2 + 0x20, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Swords Burned 1", 0x33ff2, 0x34012, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Burned 2", 0x33cf2 + 0x20, 0x33cf2 + 0x40, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Swords Burned 2", 0x34012, 0x34032, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Psycho Crusher Burned 1", 0x33cf2 + 0x40, 0x33cf2 + 0x60, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Swords Psycho Crusher Burned 1", 0x34032, 0x34052, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Psycho Crusher Burned 2", 0x33cf2 + 0x60, 0x33cf2 + 0x80, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Swords Psycho Crusher Burned 2", 0x34052, 0x34072, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"V-Ism P1 After Effect 1", 0x33cf2 + 0x80, 0x33cf2 + 0xA0, indexCPS2Sprites_Sodom },
    { L"V-Ism P1 After Effect 2", 0x33cf2 + 0xA0, 0x33cf2 + 0xC0, indexCPS2Sprites_Sodom },
    { L"V-Ism P2 After Effect 1", 0x33cf2 + 0xC0, 0x33cf2 + 0xE0, indexCPS2Sprites_Sodom },
    { L"V-Ism P2 After Effect 2", 0x33cf2 + 0xe0, 0x33cf2 + 0x100, indexCPS2Sprites_Sodom },
    { L"X-Ism Punch Zapped", 0x33cf2 + 0x100, 0x33cf2 + 0x120, indexCPS2Sprites_Sodom, 0xa2 },
    { L"X-Ism Kick Zapped", 0x33cf2 + 0x120, 0x33cf2 + 0x140, indexCPS2Sprites_Sodom, 0xa2 },
    { L"A-Ism Punch Zapped", 0x33cf2 + 0x140, 0x33cf2 + 0x160, indexCPS2Sprites_Sodom, 0xa0 },
    { L"A-Ism Kick Zapped", 0x33cf2 + 0x160, 0x33cf2 + 0x180, indexCPS2Sprites_Sodom, 0xa0 },
    { L"V-Ism Punch Zapped", 0x33cf2 + 0x180, 0x33cf2 + 0x1A0, indexCPS2Sprites_Sodom, 0xa0 },
    { L"V-Ism Kick Zapped", 0x33cf2 + 0x1A0, 0x33cf2 + 0x1C0, indexCPS2Sprites_Sodom, 0xa0 },
    { L"Zapped Skeleton", 0x33cf2 + 0x1C0, 0x33cf2 + 0x1E0, indexCPS2Sprites_Sodom, 0xa1 },
    { L"X-Ism Punch Mash", 0x33cf2 + 0x1e0, 0x33cf2 + 0x200, indexCPS2Sprites_Sodom, 0x00, &pairNext },
    { L"Swords X-Ism Punch Mash", 0x34072, 0x34092, indexCPS2Sprites_Sodom, 0x01, &pairPrevious },
    { L"X-Ism Kick Mash", 0x33cf2 + 0x200, 0x33cf2 + 0x220, indexCPS2Sprites_Sodom, 0x00, &pairNext },
    { L"Swords X-Ism Kick Mash", 0x34092, 0x340b2, indexCPS2Sprites_Sodom, 0x01, &pairPrevious },
    { L"A-Ism Punch Mash", 0x33cf2 + 0x220, 0x33cf2 + 0x240, indexCPS2Sprites_Sodom, 0x02 },
    { L"A-Ism Kick Mash", 0x33cf2 + 0x240, 0x33cf2 + 0x260, indexCPS2Sprites_Sodom, 0x02 },
    { L"V-Ism Punch Mash", 0x33cf2 + 0x260, 0x33cf2 + 0x280, indexCPS2Sprites_Sodom, 0x02 },
    { L"V-Ism Kick Mash", 0x33cf2 + 0x280, 0x33cf2 + 0x2A0, indexCPS2Sprites_Sodom, 0x02 },
    { L"Priority Win", 0x33cf2 + 0x2A0, 0x33cf2 + 0x2C0, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Swords Priority Win", 0x34132, 0x34152, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Damage Reduction", 0x33cf2 + 0x2C0, 0x33cf2 + 0x2E0, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Swords Damage Reduction", 0x34152, 0x34172, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Just Defend", 0x33cf2 + 0x2e0, 0x33cf2 + 0x300, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Swords Just Defend", 0x34172, 0x34192, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMP[] =
{
    { L"X-Ism Punch", 0x2db12, 0x2db32, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2db32, 0x2db52 },
    { L"X-Ism Punch Extra 2: Barrels", 0x2db52, 0x2db72, indexCPS2Sprites_Guy, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2db72, 0x2db92, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2db92, 0x2dbb2, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMK[] =
{
    { L"X-Ism Kick", 0x2dbb2, 0x2dbd2, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2dbd2, 0x2dbf2 },
    { L"X-Ism Kick Extra 2: Barrels", 0x2dbf2, 0x2dc12, indexCPS2Sprites_Guy, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2dc12, 0x2dc32, indexCPS2Sprites_Guy, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2dc32, 0x2dc52, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMP[] =
{
    { L"A-Ism Punch", 0x2dc52, 0x2dc72, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2dc72, 0x2dc92 },
    { L"A-Ism Punch Extra 2: Barrels", 0x2dc92, 0x2dcb2, indexCPS2Sprites_Guy, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2dcb2, 0x2dcd2, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2dcd2, 0x2dcf2, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMK[] =
{
    { L"A-Ism Kick", 0x2dcf2, 0x2dd12, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2dd12, 0x2dd32 },
    { L"A-Ism Kick Extra 2: Barrels", 0x2dd32, 0x2dd52, indexCPS2Sprites_Guy, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2dd52, 0x2dd72, indexCPS2Sprites_Guy, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2dd72, 0x2dd92, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMP[] =
{
    { L"V-Ism Punch", 0x2dd92, 0x2ddb2, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ddb2, 0x2ddd2 },
    { L"V-Ism Punch Extra 2: Barrels", 0x2ddd2, 0x2ddf2, indexCPS2Sprites_Guy, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2ddf2, 0x2de12, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2de12, 0x2de32, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMK[] =
{
    { L"V-Ism Kick", 0x2de32, 0x2de52, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2de52, 0x2de72 },
    { L"V-Ism Kick Extra 2: Barrels", 0x2de72, 0x2de92, indexCPS2Sprites_Guy, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2de92, 0x2deb2, indexCPS2Sprites_Guy, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2deb2, 0x2ded2, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_STATUS[] =
{
    { L"Burned 1", 0x34192 + 0x00, 0x34192 + 0x20, indexCPS2Sprites_Guy },
    { L"Burned 2", 0x34192 + 0x20, 0x34192 + 0x40, indexCPS2Sprites_Guy },
    { L"Psycho Crusher Burned 1", 0x34192 + 0x40, 0x34192 + 0x60, indexCPS2Sprites_Guy },
    { L"Psycho Crusher Burned 2", 0x34192 + 0x60, 0x34192 + 0x80, indexCPS2Sprites_Guy },
    { L"V-Ism P1 After Effect 1", 0x34192 + 0x80, 0x34192 + 0xA0, indexCPS2Sprites_Guy },
    { L"V-Ism P1 After Effect 2", 0x34192 + 0xA0, 0x34192 + 0xC0, indexCPS2Sprites_Guy },
    { L"V-Ism P2 After Effect 1", 0x34192 + 0xC0, 0x34192 + 0xE0, indexCPS2Sprites_Guy },
    { L"V-Ism P2 After Effect 2", 0x34192 + 0xe0, 0x34192 + 0x100, indexCPS2Sprites_Guy },
    { L"X-Ism Punch Zapped", 0x34192 + 0x100, 0x34192 + 0x120, indexCPS2Sprites_Guy, 0x03 },
    { L"X-Ism Kick Zapped", 0x34192 + 0x120, 0x34192 + 0x140, indexCPS2Sprites_Guy, 0x03 },
    { L"A-Ism Punch Zapped", 0x34192 + 0x140, 0x34192 + 0x160, indexCPS2Sprites_Guy, 0x03 },
    { L"A-Ism Kick Zapped", 0x34192 + 0x160, 0x34192 + 0x180, indexCPS2Sprites_Guy, 0x03 },
    { L"V-Ism Punch Zapped", 0x34192 + 0x180, 0x34192 + 0x1A0, indexCPS2Sprites_Guy, 0x03 },
    { L"V-Ism Kick Zapped", 0x34192 + 0x1A0, 0x34192 + 0x1C0, indexCPS2Sprites_Guy, 0x03 },
    { L"Zapped Skeleton", 0x34192 + 0x1C0, 0x34192 + 0x1E0, indexCPS2Sprites_Guy, 0x04 },
    { L"X-Ism Punch Mash", 0x34192 + 0x1e0, 0x34192 + 0x200, indexCPS2Sprites_Guy },
    { L"X-Ism Kick Mash", 0x34192 + 0x200, 0x34192 + 0x220, indexCPS2Sprites_Guy },
    { L"A-Ism Punch Mash", 0x34192 + 0x220, 0x34192 + 0x240, indexCPS2Sprites_Guy },
    { L"A-Ism Kick Mash", 0x34192 + 0x240, 0x34192 + 0x260, indexCPS2Sprites_Guy },
    { L"V-Ism Punch Mash", 0x34192 + 0x260, 0x34192 + 0x280, indexCPS2Sprites_Guy },
    { L"V-Ism Kick Mash", 0x34192 + 0x280, 0x34192 + 0x2A0, indexCPS2Sprites_Guy },
    { L"Priority Win", 0x34192 + 0x2A0, 0x34192 + 0x2C0, indexCPS2Sprites_Guy },
    { L"Damage Reduction", 0x34192 + 0x2C0, 0x34192 + 0x2E0, indexCPS2Sprites_Guy },
    { L"Just Defend", 0x34192 + 0x2e0, 0x34192 + 0x300, indexCPS2Sprites_Guy },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMP[] =
{
    { L"X-Ism Punch", 0x2ded2, 0x2def2, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2def2, 0x2df12, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Punch Extra 2", 0x2df12, 0x2df32 },

    { L"X-Ism Punch Extra 3", 0x4abd2, 0x4abf2, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Punch Extra 4", 0x4abf2, 0x4ac12, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Punch Extra 5", 0x4ac12, 0x4ac32, indexCPS2Sprites_Birdie, 0x00 },

    { L"X-Ism Punch Super Trail Light", 0x2df32, 0x2df52, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2df52, 0x2df72, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMK[] =
{
    { L"X-Ism Kick", 0x2df72, 0x2df92, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2df92, 0x2dfb2, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Kick Extra 2", 0x2dfb2, 0x2dfd2 },

    { L"X-Ism Kick Extra 3", 0x4ac32, 0x4ac52, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Kick Extra 4", 0x4ac52, 0x4ac72, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Kick Extra 5", 0x4ac72, 0x4ac92, indexCPS2Sprites_Birdie, 0x00 },

    { L"X-Ism Kick Super Trail Light", 0x2dfd2, 0x2dff2, indexCPS2Sprites_Birdie, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2dff2, 0x2e012, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMP[] =
{
    { L"A-Ism Punch", 0x2e012, 0x2e032, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2e032, 0x2e052, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Punch Extra 2", 0x2e052, 0x2e072 },

    { L"A-Ism Punch Extra 3", 0x4ac92, 0x4acb2, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Punch Extra 4", 0x4acb2, 0x4acd2, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Punch Extra 5", 0x4acd2, 0x4acf2, indexCPS2Sprites_Birdie, 0x00 },

    { L"A-Ism Punch Super Trail Light", 0x2e072, 0x2e092, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e092, 0x2e0b2, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMK[] =
{
    { L"A-Ism Kick", 0x2e0b2, 0x2e0d2, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2e0d2, 0x2e0f2, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Kick Extra 2", 0x2e0f2, 0x2e112 },

    { L"A-Ism Kick Extra 3", 0x4acf2, 0x4ad12, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Kick Extra 4", 0x4ad12, 0x4ad32, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Kick Extra 5", 0x4ad32, 0x4ad52, indexCPS2Sprites_Birdie, 0x00 },

    { L"A-Ism Kick Super Trail Light", 0x2e112, 0x2e132, indexCPS2Sprites_Birdie, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e132, 0x2e152, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMP[] =
{
    { L"V-Ism Punch", 0x2e152, 0x2e172, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2e172, 0x2e192, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Punch Extra 2", 0x2e192, 0x2e1b2 },

    { L"V-Ism Punch Extra 3", 0x4ad52, 0x4ad72, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Punch Extra 4", 0x4ad72, 0x4ad92, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Punch Extra 5", 0x4ad92, 0x4adb2, indexCPS2Sprites_Birdie, 0x00 },

    { L"V-Ism Punch Super Trail Light", 0x2e1b2, 0x2e1d2, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e1d2, 0x2e1f2, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMK[] =
{
    { L"V-Ism Kick", 0x2e1f2, 0x2e212, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2e212, 0x2e232, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Kick Extra 2", 0x2e232, 0x2e252 },
    { L"V-Ism Kick Extra 3", 0x4adb2, 0x4add2, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Kick Extra 4", 0x4add2, 0x4adf2, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Kick Extra 5", 0x4adf2, 0x4ae12, indexCPS2Sprites_Birdie, 0x00 },

    { L"V-Ism Kick Super Trail Light", 0x2e252, 0x2e272, indexCPS2Sprites_Birdie, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e272, 0x2e292, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_STATUS[] =
{
    { L"Burned 1", 0x34492 + 0x00, 0x34492 + 0x20, indexCPS2Sprites_Birdie },
    { L"Burned 2", 0x34492 + 0x20, 0x34492 + 0x40, indexCPS2Sprites_Birdie },
    { L"Psycho Crusher Burned 1", 0x34492 + 0x40, 0x34492 + 0x60, indexCPS2Sprites_Birdie },
    { L"Psycho Crusher Burned 2", 0x34492 + 0x60, 0x34492 + 0x80, indexCPS2Sprites_Birdie },
    { L"V-Ism P1 After Effect 1", 0x34492 + 0x80, 0x34492 + 0xA0, indexCPS2Sprites_Birdie },
    { L"V-Ism P1 After Effect 2", 0x34492 + 0xA0, 0x34492 + 0xC0, indexCPS2Sprites_Birdie },
    { L"V-Ism P2 After Effect 1", 0x34492 + 0xC0, 0x34492 + 0xE0, indexCPS2Sprites_Birdie },
    { L"V-Ism P2 After Effect 2", 0x34492 + 0xe0, 0x34492 + 0x100, indexCPS2Sprites_Birdie },
    { L"X-Ism Punch Zapped", 0x34492 + 0x100, 0x34492 + 0x120, indexCPS2Sprites_Birdie, 0xa0 },
    { L"X-Ism Kick Zapped", 0x34492 + 0x120, 0x34492 + 0x140, indexCPS2Sprites_Birdie, 0xa0 },
    { L"A-Ism Punch Zapped", 0x34492 + 0x140, 0x34492 + 0x160, indexCPS2Sprites_Birdie, 0xa0 },
    { L"A-Ism Kick Zapped", 0x34492 + 0x160, 0x34492 + 0x180, indexCPS2Sprites_Birdie, 0xa0 },
    { L"V-Ism Punch Zapped", 0x34492 + 0x180, 0x34492 + 0x1A0, indexCPS2Sprites_Birdie, 0xa0 },
    { L"V-Ism Kick Zapped", 0x34492 + 0x1A0, 0x34492 + 0x1C0, indexCPS2Sprites_Birdie, 0xa0 },
    { L"Zapped Skeleton", 0x34492 + 0x1C0, 0x34492 + 0x1E0, indexCPS2Sprites_Birdie, 0xa1 },
    { L"X-Ism Punch Mash", 0x34492 + 0x1e0, 0x34492 + 0x200, indexCPS2Sprites_Birdie },
    { L"X-Ism Kick Mash", 0x34492 + 0x200, 0x34492 + 0x220, indexCPS2Sprites_Birdie },
    { L"A-Ism Punch Mash", 0x34492 + 0x220, 0x34492 + 0x240, indexCPS2Sprites_Birdie },
    { L"A-Ism Kick Mash", 0x34492 + 0x240, 0x34492 + 0x260, indexCPS2Sprites_Birdie },
    { L"V-Ism Punch Mash", 0x34492 + 0x260, 0x34492 + 0x280, indexCPS2Sprites_Birdie },
    { L"V-Ism Kick Mash", 0x34492 + 0x280, 0x34492 + 0x2A0, indexCPS2Sprites_Birdie },
    { L"Priority Win", 0x34492 + 0x2A0, 0x34492 + 0x2C0, indexCPS2Sprites_Birdie },
    { L"Damage Reduction", 0x34492 + 0x2C0, 0x34492 + 0x2E0, indexCPS2Sprites_Birdie },
    { L"Just Defend", 0x34492 + 0x2e0, 0x34492 + 0x300, indexCPS2Sprites_Birdie },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMP[] =
{
    { L"X-Ism Punch", 0x2e292, 0x2e2b2, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Punch Soul Power", 0x2e2b2, 0x2e2d2, indexCPS2Sprites_Rose, 0x02 },
    { L"X-Ism Punch Extra 2", 0x2e2d2, 0x2e2f2 },
    { L"X-Ism Punch Super Trail Light", 0x2e2f2, 0x2e312, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2e312, 0x2e332, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Punch Dress Winpose", 0x4ae12, 0x4ae32, indexCPS2Sprites_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMK[] =
{
    { L"X-Ism Kick", 0x2e332, 0x2e352, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Kick Soul Power", 0x2e352, 0x2e372, indexCPS2Sprites_Rose, 0x02 },
    { L"X-Ism Kick Extra 2", 0x2e372, 0x2e392 },
    { L"X-Ism Kick Super Trail Light", 0x2e392, 0x2e3b2, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2e3b2, 0x2e3d2, indexCPS2Sprites_Rose, 0x00 },
    { L"X-Ism Kick Dress Winpose", 0x4ae32, 0x4ae52, indexCPS2Sprites_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMP[] =
{
    { L"A-Ism Punch", 0x2e3d2, 0x2e3f2, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Punch Soul Power", 0x2e3f2, 0x2e412, indexCPS2Sprites_Rose, 0x02 },
    { L"A-Ism Punch Extra 2", 0x2e412, 0x2e432 },
    { L"A-Ism Punch Super Trail Light", 0x2e432, 0x2e452, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e452, 0x2e472, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Punch Dress Winpose", 0x4ae52, 0x4ae72, indexCPS2Sprites_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMK[] =
{
    { L"A-Ism Kick", 0x2e472, 0x2e492, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Kick Soul Power", 0x2e492, 0x2e4b2, indexCPS2Sprites_Rose, 0x02 },
    { L"A-Ism Kick Extra 2", 0x2e4b2, 0x2e4d2 },
    { L"A-Ism Kick Super Trail Light", 0x2e4d2, 0x2e4f2, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e4f2, 0x2e512, indexCPS2Sprites_Rose, 0x00 },
    { L"A-Ism Kick Dress Winpose", 0x4ae72, 0x4ae92, indexCPS2Sprites_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMP[] =
{
    { L"V-Ism Punch", 0x2e512, 0x2e532, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Punch Soul Power", 0x2e532, 0x2e552, indexCPS2Sprites_Rose, 0x02 },
    { L"V-Ism Punch Extra 2", 0x2e552, 0x2e572 },
    { L"V-Ism Punch Super Trail Light", 0x2e572, 0x2e592, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e592, 0x2e5b2, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Punch Dress Winpose", 0x4ae92, 0x4aeb2, indexCPS2Sprites_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMK[] =
{
    { L"V-Ism Kick", 0x2e5b2, 0x2e5d2, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Kick Soul Power", 0x2e5d2, 0x2e5f2, indexCPS2Sprites_Rose, 0x02 },
    { L"V-Ism Kick Extra 2", 0x2e5f2, 0x2e612 },
    { L"V-Ism Kick Super Trail Light", 0x2e612, 0x2e632, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e632, 0x2e652, indexCPS2Sprites_Rose, 0x00 },
    { L"V-Ism Kick Dress Winpose", 0x4aeb2, 0x4aed2, indexCPS2Sprites_Rose, 1 },
};
    
const sGame_PaletteDataset SFA3_A_ROSE_STATUS[] =
{
    { L"Burned 1", 0x34792 + 0x00, 0x34792 + 0x20, indexCPS2Sprites_Rose },
    { L"Burned 2", 0x34792 + 0x20, 0x34792 + 0x40, indexCPS2Sprites_Rose },
    { L"Psycho Crusher Burned 1", 0x34792 + 0x40, 0x34792 + 0x60, indexCPS2Sprites_Rose },
    { L"Psycho Crusher Burned 2", 0x34792 + 0x60, 0x34792 + 0x80, indexCPS2Sprites_Rose },
    { L"V-Ism P1 After Effect 1", 0x34792 + 0x80, 0x34792 + 0xA0, indexCPS2Sprites_Rose },
    { L"V-Ism P1 After Effect 2", 0x34792 + 0xA0, 0x34792 + 0xC0, indexCPS2Sprites_Rose },
    { L"V-Ism P2 After Effect 1", 0x34792 + 0xC0, 0x34792 + 0xE0, indexCPS2Sprites_Rose },
    { L"V-Ism P2 After Effect 2", 0x34792 + 0xe0, 0x34792 + 0x100, indexCPS2Sprites_Rose },
    { L"X-Ism Punch Zapped", 0x34792 + 0x100, 0x34792 + 0x120, indexCPS2Sprites_Rose, 0xa0 },
    { L"X-Ism Kick Zapped", 0x34792 + 0x120, 0x34792 + 0x140, indexCPS2Sprites_Rose, 0xa0 },
    { L"A-Ism Punch Zapped", 0x34792 + 0x140, 0x34792 + 0x160, indexCPS2Sprites_Rose, 0xa0 },
    { L"A-Ism Kick Zapped", 0x34792 + 0x160, 0x34792 + 0x180, indexCPS2Sprites_Rose, 0xa0 },
    { L"V-Ism Punch Zapped", 0x34792 + 0x180, 0x34792 + 0x1A0, indexCPS2Sprites_Rose, 0xa0 },
    { L"V-Ism Kick Zapped", 0x34792 + 0x1A0, 0x34792 + 0x1C0, indexCPS2Sprites_Rose, 0xa0 },
    { L"Zapped Skeleton", 0x34792 + 0x1C0, 0x34792 + 0x1E0, indexCPS2Sprites_Rose, 0xa1 },
    { L"X-Ism Punch Mash", 0x34792 + 0x1e0, 0x34792 + 0x200, indexCPS2Sprites_Rose },
    { L"X-Ism Kick Mash", 0x34792 + 0x200, 0x34792 + 0x220, indexCPS2Sprites_Rose },
    { L"A-Ism Punch Mash", 0x34792 + 0x220, 0x34792 + 0x240, indexCPS2Sprites_Rose },
    { L"A-Ism Kick Mash", 0x34792 + 0x240, 0x34792 + 0x260, indexCPS2Sprites_Rose },
    { L"V-Ism Punch Mash", 0x34792 + 0x260, 0x34792 + 0x280, indexCPS2Sprites_Rose },
    { L"V-Ism Kick Mash", 0x34792 + 0x280, 0x34792 + 0x2A0, indexCPS2Sprites_Rose },
    { L"Priority Win", 0x34792 + 0x2A0, 0x34792 + 0x2C0, indexCPS2Sprites_Rose },
    { L"Damage Reduction", 0x34792 + 0x2C0, 0x34792 + 0x2E0, indexCPS2Sprites_Rose },
    { L"Just Defend", 0x34792 + 0x2e0, 0x34792 + 0x300, indexCPS2Sprites_Rose },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMP[] =
{
    { L"X-Ism Punch", 0x2e652, 0x2e672, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2e672, 0x2e692, indexCPS2Sprites_Bison, 0x08 },
    { L"X-Ism Punch Extra 2", 0x2e692, 0x2e6b2, indexCPS2Sprites_Bison, 0x09 },
    { L"X-Ism Punch Teleport", 0x4aed2, 0x4aef2 },
    { L"X-Ism Punch Extra 3", 0x4aef2, 0x4af12 },
    { L"X-Ism Punch Extra 4", 0x4af12, 0x4af32 },
    { L"X-Ism Punch Extra 5", 0x4af32, 0x4af52 },

    { L"X-Ism Punch Super Trail Light", 0x2e6b2, 0x2e6d2, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2e6d2, 0x2e6f2, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMK[] =
{
    { L"X-Ism Kick", 0x2e6f2, 0x2e712, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2e712, 0x2e732, indexCPS2Sprites_Bison, 0x08 },
    { L"X-Ism Kick Extra 2", 0x2e732, 0x2e752, indexCPS2Sprites_Bison, 0x09 },
    { L"X-Ism Kick Teleport", 0x4af52, 0x4af72 },
    { L"X-Ism Kick Extra 3", 0x4af72, 0x4af92 },
    { L"X-Ism Kick Extra 4", 0x4af92, 0x4afb2 },
    { L"X-Ism Kick Extra 5", 0x4afb2, 0x4afd2 },

    { L"X-Ism Kick Super Trail Light", 0x2e752, 0x2e772, indexCPS2Sprites_Bison, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2e772, 0x2e792, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMP[] =
{
    { L"A-Ism Punch", 0x2e792, 0x2e7b2, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2e7b2, 0x2e7d2, indexCPS2Sprites_Bison, 0x08 },
    { L"A-Ism Punch Extra 2", 0x2e7d2, 0x2e7f2, indexCPS2Sprites_Bison, 0x09 },
    { L"A-Ism Punch Teleport", 0x4afd2, 0x4aff2 },
    { L"A-Ism Punch Extra 3", 0x4aff2, 0x4b012 },
    { L"A-Ism Punch Extra 4", 0x4b012, 0x4b032 },
    { L"A-Ism Punch Extra 5", 0x4b032, 0x4b052 },

    { L"A-Ism Punch Super Trail Light", 0x2e7f2, 0x2e812, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e812, 0x2e832, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMK[] =
{
    { L"A-Ism Kick", 0x2e832, 0x2e852, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2e852, 0x2e872, indexCPS2Sprites_Bison, 0x08 },
    { L"A-Ism Kick Extra 2", 0x2e872, 0x2e892, indexCPS2Sprites_Bison, 0x09 },
    { L"A-Ism Kick Teleport", 0x4b052, 0x4b072 },
    { L"A-Ism Kick Extra 3", 0x4b072, 0x4b092 },
    { L"A-Ism Kick Extra 4", 0x4b092, 0x4b0b2 },
    { L"A-Ism Kick Extra 5", 0x4b0b2, 0x4b0d2 },

    { L"A-Ism Kick Super Trail Light", 0x2e892, 0x2e8b2, indexCPS2Sprites_Bison, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e8b2, 0x2e8d2, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMP[] =
{
    { L"V-Ism Punch", 0x2e8d2, 0x2e8f2, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2e8f2, 0x2e912, indexCPS2Sprites_Bison, 0x08 },
    { L"V-Ism Punch Extra 2", 0x2e912, 0x2e932, indexCPS2Sprites_Bison, 0x09 },
    { L"V-Ism Punch Teleport", 0x4b0d2, 0x4b0f2 },
    { L"V-Ism Punch Extra 3", 0x4b0f2, 0x4b112 },
    { L"V-Ism Punch Extra 4", 0x4b112, 0x4b132 },
    { L"V-Ism Punch Extra 5", 0x4b132, 0x4b152 },

    { L"V-Ism Punch Super Trail Light", 0x2e932, 0x2e952, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e952, 0x2e972, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMK[] =
{
    { L"V-Ism Kick", 0x2e972, 0x2e992, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2e992, 0x2e9b2, indexCPS2Sprites_Bison, 0x08 },
    { L"V-Ism Kick Extra 2", 0x2e9b2, 0x2e9d2, indexCPS2Sprites_Bison, 0x09 },
    { L"V-Ism Kick Teleport", 0x4b152, 0x4b172 },
    { L"V-Ism Kick Extra 3", 0x4b172, 0x4b192 },
    { L"V-Ism Kick Extra 4", 0x4b192, 0x4b1b2 },
    { L"V-Ism Kick Extra 5", 0x4b1b2, 0x4b1d2 },

    { L"V-Ism Kick Super Trail Light", 0x2e9d2, 0x2e9f2, indexCPS2Sprites_Bison, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e9f2, 0x2ea12, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_STATUS[] =
{
    { L"Burned 1", 0x34a92 + 0x00, 0x34a92 + 0x20, indexCPS2Sprites_Bison },
    { L"Burned 2", 0x34a92 + 0x20, 0x34a92 + 0x40, indexCPS2Sprites_Bison },
    { L"Psycho Crusher Burned 1", 0x34a92 + 0x40, 0x34a92 + 0x60, indexCPS2Sprites_Bison },
    { L"Psycho Crusher Burned 2", 0x34a92 + 0x60, 0x34a92 + 0x80, indexCPS2Sprites_Bison },
    { L"V-Ism P1 After Effect 1", 0x34a92 + 0x80, 0x34a92 + 0xA0, indexCPS2Sprites_Bison },
    { L"V-Ism P1 After Effect 2", 0x34a92 + 0xA0, 0x34a92 + 0xC0, indexCPS2Sprites_Bison },
    { L"V-Ism P2 After Effect 1", 0x34a92 + 0xC0, 0x34a92 + 0xE0, indexCPS2Sprites_Bison },
    { L"V-Ism P2 After Effect 2", 0x34a92 + 0xe0, 0x34a92 + 0x100, indexCPS2Sprites_Bison },
    { L"X-Ism Punch Zapped", 0x34a92 + 0x100, 0x34a92 + 0x120, indexCPS2Sprites_Bison, 0xa0 },
    { L"X-Ism Kick Zapped", 0x34a92 + 0x120, 0x34a92 + 0x140, indexCPS2Sprites_Bison, 0xa0 },
    { L"A-Ism Punch Zapped", 0x34a92 + 0x140, 0x34a92 + 0x160, indexCPS2Sprites_Bison, 0xa0 },
    { L"A-Ism Kick Zapped", 0x34a92 + 0x160, 0x34a92 + 0x180, indexCPS2Sprites_Bison, 0xa0 },
    { L"V-Ism Punch Zapped", 0x34a92 + 0x180, 0x34a92 + 0x1A0, indexCPS2Sprites_Bison, 0xa0 },
    { L"V-Ism Kick Zapped", 0x34a92 + 0x1A0, 0x34a92 + 0x1C0, indexCPS2Sprites_Bison, 0xa0 },
    { L"Zapped Skeleton", 0x34a92 + 0x1C0, 0x34a92 + 0x1E0, indexCPS2Sprites_Bison, 0xa1 },
    { L"X-Ism Punch Mash", 0x34a92 + 0x1e0, 0x34a92 + 0x200, indexCPS2Sprites_Bison },
    { L"X-Ism Kick Mash", 0x34a92 + 0x200, 0x34a92 + 0x220, indexCPS2Sprites_Bison },
    { L"A-Ism Punch Mash", 0x34a92 + 0x220, 0x34a92 + 0x240, indexCPS2Sprites_Bison },
    { L"A-Ism Kick Mash", 0x34a92 + 0x240, 0x34a92 + 0x260, indexCPS2Sprites_Bison },
    { L"V-Ism Punch Mash", 0x34a92 + 0x260, 0x34a92 + 0x280, indexCPS2Sprites_Bison },
    { L"V-Ism Kick Mash", 0x34a92 + 0x280, 0x34a92 + 0x2A0, indexCPS2Sprites_Bison },
    { L"Priority Win", 0x34a92 + 0x2A0, 0x34a92 + 0x2C0, indexCPS2Sprites_Bison },
    { L"Damage Reduction", 0x34a92 + 0x2C0, 0x34a92 + 0x2E0, indexCPS2Sprites_Bison },
    { L"Just Defend", 0x34a92 + 0x2e0, 0x34a92 + 0x300, indexCPS2Sprites_Bison },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMP[] =
{
    { L"X-Ism Punch", 0x2ea12, 0x2ea32, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2ea32, 0x2ea52, indexCPS2Sprites_Sagat, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2ea52, 0x2ea72, indexCPS2Sprites_Sagat, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2ea72, 0x2ea92, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2ea92, 0x2eab2, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMK[] =
{
    { L"X-Ism Kick", 0x2eab2, 0x2ead2, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2ead2, 0x2eaf2, indexCPS2Sprites_Sagat, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2eaf2, 0x2eb12, indexCPS2Sprites_Sagat, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2eb12, 0x2eb32, indexCPS2Sprites_Sagat, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2eb32, 0x2eb52, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMP[] =
{
    { L"A-Ism Punch", 0x2eb52, 0x2eb72, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2eb72, 0x2eb92, indexCPS2Sprites_Sagat, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2eb92, 0x2ebb2, indexCPS2Sprites_Sagat, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2ebb2, 0x2ebd2, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ebd2, 0x2ebf2, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMK[] =
{
    { L"A-Ism Kick", 0x2ebf2, 0x2ec12, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2ec12, 0x2ec32, indexCPS2Sprites_Sagat, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2ec32, 0x2ec52, indexCPS2Sprites_Sagat, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2ec52, 0x2ec72, indexCPS2Sprites_Sagat, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ec72, 0x2ec92, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMP[] =
{
    { L"V-Ism Punch", 0x2ec92, 0x2ecb2, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ecb2, 0x2ecd2, indexCPS2Sprites_Sagat, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2ecd2, 0x2ecf2, indexCPS2Sprites_Sagat, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2ecf2, 0x2ed12, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2ed12, 0x2ed32, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMK[] =
{
    { L"V-Ism Kick", 0x2ed32, 0x2ed52, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2ed52, 0x2ed72, indexCPS2Sprites_Sagat, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2ed72, 0x2ed92, indexCPS2Sprites_Sagat, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2ed92, 0x2edb2, indexCPS2Sprites_Sagat, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2edb2, 0x2edd2, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_STATUS[] =
{
    { L"Burned 1", 0x34d92 + 0x00, 0x34d92 + 0x20, indexCPS2Sprites_Sagat },
    { L"Burned 2", 0x34d92 + 0x20, 0x34d92 + 0x40, indexCPS2Sprites_Sagat },
    { L"Psycho Crusher Burned 1", 0x34d92 + 0x40, 0x34d92 + 0x60, indexCPS2Sprites_Sagat },
    { L"Psycho Crusher Burned 2", 0x34d92 + 0x60, 0x34d92 + 0x80, indexCPS2Sprites_Sagat },
    { L"V-Ism P1 After Effect 1", 0x34d92 + 0x80, 0x34d92 + 0xA0, indexCPS2Sprites_Sagat },
    { L"V-Ism P1 After Effect 2", 0x34d92 + 0xA0, 0x34d92 + 0xC0, indexCPS2Sprites_Sagat },
    { L"V-Ism P2 After Effect 1", 0x34d92 + 0xC0, 0x34d92 + 0xE0, indexCPS2Sprites_Sagat },
    { L"V-Ism P2 After Effect 2", 0x34d92 + 0xe0, 0x34d92 + 0x100, indexCPS2Sprites_Sagat },
    { L"X-Ism Punch Zapped", 0x34d92 + 0x100, 0x34d92 + 0x120, indexCPS2Sprites_Sagat, 0xa0 },
    { L"X-Ism Kick Zapped", 0x34d92 + 0x120, 0x34d92 + 0x140, indexCPS2Sprites_Sagat, 0xa0 },
    { L"A-Ism Punch Zapped", 0x34d92 + 0x140, 0x34d92 + 0x160, indexCPS2Sprites_Sagat, 0xa0 },
    { L"A-Ism Kick Zapped", 0x34d92 + 0x160, 0x34d92 + 0x180, indexCPS2Sprites_Sagat, 0xa0 },
    { L"V-Ism Punch Zapped", 0x34d92 + 0x180, 0x34d92 + 0x1A0, indexCPS2Sprites_Sagat, 0xa0 },
    { L"V-Ism Kick Zapped", 0x34d92 + 0x1A0, 0x34d92 + 0x1C0, indexCPS2Sprites_Sagat, 0xa0 },
    { L"Zapped Skeleton", 0x34d92 + 0x1C0, 0x34d92 + 0x1E0, indexCPS2Sprites_Sagat, 0xa1 },
    { L"X-Ism Punch Mash", 0x34d92 + 0x1e0, 0x34d92 + 0x200, indexCPS2Sprites_Sagat },
    { L"X-Ism Kick Mash", 0x34d92 + 0x200, 0x34d92 + 0x220, indexCPS2Sprites_Sagat },
    { L"A-Ism Punch Mash", 0x34d92 + 0x220, 0x34d92 + 0x240, indexCPS2Sprites_Sagat },
    { L"A-Ism Kick Mash", 0x34d92 + 0x240, 0x34d92 + 0x260, indexCPS2Sprites_Sagat },
    { L"V-Ism Punch Mash", 0x34d92 + 0x260, 0x34d92 + 0x280, indexCPS2Sprites_Sagat },
    { L"V-Ism Kick Mash", 0x34d92 + 0x280, 0x34d92 + 0x2A0, indexCPS2Sprites_Sagat },
    { L"Priority Win", 0x34d92 + 0x2A0, 0x34d92 + 0x2C0, indexCPS2Sprites_Sagat },
    { L"Damage Reduction", 0x34d92 + 0x2C0, 0x34d92 + 0x2E0, indexCPS2Sprites_Sagat },
    { L"Just Defend", 0x34d92 + 0x2e0, 0x34d92 + 0x300, indexCPS2Sprites_Sagat },
};

const sGame_PaletteDataset SFA3_A_SAGAT_SHARED[] =
{
    { L"Ryu v Sagat (CPU) Intro", 0x4b1d2, 0x4b1f2, indexCPS2Sprites_Sagat, 0x03 },
    { L"Ryu v Sagat (CPU) Intro Alt 1 (Unused)", 0x4b1f2, 0x4b212, indexCPS2Sprites_Sagat, 0x03 },
    { L"Ryu v Sagat (CPU) Intro Alt 2 (Unused)", 0x4b212, 0x4b232, indexCPS2Sprites_Sagat, 0x03 },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMP[] =
{
    { L"X-Ism Punch", 0x2edd2, 0x2edf2, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2edf2, 0x2ee12, indexCPS2Sprites_Dan, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2ee12, 0x2ee32, indexCPS2Sprites_Dan, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2ee32, 0x2ee52, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2ee52, 0x2ee72, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMK[] =
{
    { L"X-Ism Kick", 0x2ee72, 0x2ee92, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2ee92, 0x2eeb2, indexCPS2Sprites_Dan, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2eeb2, 0x2eed2, indexCPS2Sprites_Dan, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2eed2, 0x2eef2, indexCPS2Sprites_Dan, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2eef2, 0x2ef12, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMP[] =
{
    { L"A-Ism Punch", 0x2ef12, 0x2ef32, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2ef32, 0x2ef52, indexCPS2Sprites_Dan, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2ef52, 0x2ef72, indexCPS2Sprites_Dan, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2ef72, 0x2ef92, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ef92, 0x2efb2, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMK[] =
{
    { L"A-Ism Kick", 0x2efb2, 0x2efd2, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2efd2, 0x2eff2, indexCPS2Sprites_Dan, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2eff2, 0x2f012, indexCPS2Sprites_Dan, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2f012, 0x2f032, indexCPS2Sprites_Dan, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f032, 0x2f052, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMP[] =
{
    { L"V-Ism Punch", 0x2f052, 0x2f072, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f072, 0x2f092, indexCPS2Sprites_Dan, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2f092, 0x2f0b2, indexCPS2Sprites_Dan, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2f0b2, 0x2f0d2, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f0d2, 0x2f0f2, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMK[] =
{
    { L"V-Ism Kick", 0x2f0f2, 0x2f112, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f112, 0x2f132, indexCPS2Sprites_Dan, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2f132, 0x2f152, indexCPS2Sprites_Dan, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2f152, 0x2f172, indexCPS2Sprites_Dan, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f172, 0x2f192, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_STATUS[] =
{
    { L"Burned 1", 0x35092 + 0x00, 0x35092 + 0x20, indexCPS2Sprites_Dan },
    { L"Burned 2", 0x35092 + 0x20, 0x35092 + 0x40, indexCPS2Sprites_Dan },
    { L"Psycho Crusher Burned 1", 0x35092 + 0x40, 0x35092 + 0x60, indexCPS2Sprites_Dan },
    { L"Psycho Crusher Burned 2", 0x35092 + 0x60, 0x35092 + 0x80, indexCPS2Sprites_Dan },
    { L"V-Ism P1 After Effect 1", 0x35092 + 0x80, 0x35092 + 0xA0, indexCPS2Sprites_Dan },
    { L"V-Ism P1 After Effect 2", 0x35092 + 0xA0, 0x35092 + 0xC0, indexCPS2Sprites_Dan },
    { L"V-Ism P2 After Effect 1", 0x35092 + 0xC0, 0x35092 + 0xE0, indexCPS2Sprites_Dan },
    { L"V-Ism P2 After Effect 2", 0x35092 + 0xe0, 0x35092 + 0x100, indexCPS2Sprites_Dan },
    { L"X-Ism Punch Zapped", 0x35092 + 0x100, 0x35092 + 0x120, indexCPS2Sprites_Dan, 0xa0 },
    { L"X-Ism Kick Zapped", 0x35092 + 0x120, 0x35092 + 0x140, indexCPS2Sprites_Dan, 0xa0 },
    { L"A-Ism Punch Zapped", 0x35092 + 0x140, 0x35092 + 0x160, indexCPS2Sprites_Dan, 0xa0 },
    { L"A-Ism Kick Zapped", 0x35092 + 0x160, 0x35092 + 0x180, indexCPS2Sprites_Dan, 0xa0 },
    { L"V-Ism Punch Zapped", 0x35092 + 0x180, 0x35092 + 0x1A0, indexCPS2Sprites_Dan, 0xa0 },
    { L"V-Ism Kick Zapped", 0x35092 + 0x1A0, 0x35092 + 0x1C0, indexCPS2Sprites_Dan, 0xa0 },
    { L"Zapped Skeleton", 0x35092 + 0x1C0, 0x35092 + 0x1E0, indexCPS2Sprites_Dan, 0xa1 },
    { L"X-Ism Punch Mash", 0x35092 + 0x1e0, 0x35092 + 0x200, indexCPS2Sprites_Dan },
    { L"X-Ism Kick Mash", 0x35092 + 0x200, 0x35092 + 0x220, indexCPS2Sprites_Dan },
    { L"A-Ism Punch Mash", 0x35092 + 0x220, 0x35092 + 0x240, indexCPS2Sprites_Dan },
    { L"A-Ism Kick Mash", 0x35092 + 0x240, 0x35092 + 0x260, indexCPS2Sprites_Dan },
    { L"V-Ism Punch Mash", 0x35092 + 0x260, 0x35092 + 0x280, indexCPS2Sprites_Dan },
    { L"V-Ism Kick Mash", 0x35092 + 0x280, 0x35092 + 0x2A0, indexCPS2Sprites_Dan },
    { L"Priority Win", 0x35092 + 0x2A0, 0x35092 + 0x2C0, indexCPS2Sprites_Dan },
    { L"Damage Reduction", 0x35092 + 0x2C0, 0x35092 + 0x2E0, indexCPS2Sprites_Dan },
    { L"Just Defend", 0x35092 + 0x2e0, 0x35092 + 0x300, indexCPS2Sprites_Dan },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMP[] =
{
    { L"X-Ism Punch", 0x2f192, 0x2f1b2, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f1b2, 0x2f1d2, indexCPS2Sprites_Sakura, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2f1d2, 0x2f1f2, indexCPS2Sprites_Sakura, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2f1f2, 0x2f212, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f212, 0x2f232, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMK[] =
{
    { L"X-Ism Kick", 0x2f232, 0x2f252, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f252, 0x2f272, indexCPS2Sprites_Sakura, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2f272, 0x2f292, indexCPS2Sprites_Sakura, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2f292, 0x2f2b2, indexCPS2Sprites_Sakura, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2f2b2, 0x2f2d2, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMP[] =
{
    { L"A-Ism Punch", 0x2f2d2, 0x2f2f2, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2f2f2, 0x2f312, indexCPS2Sprites_Sakura, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2f312, 0x2f332, indexCPS2Sprites_Sakura, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2f332, 0x2f352, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2f352, 0x2f372, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMK[] =
{
    { L"A-Ism Kick", 0x2f372, 0x2f392, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2f392, 0x2f3b2, indexCPS2Sprites_Sakura, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2f3b2, 0x2f3d2, indexCPS2Sprites_Sakura, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2f3d2, 0x2f3f2, indexCPS2Sprites_Sakura, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f3f2, 0x2f412, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMP[] =
{
    { L"V-Ism Punch", 0x2f412, 0x2f432, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f432, 0x2f452, indexCPS2Sprites_Sakura, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2f452, 0x2f472, indexCPS2Sprites_Sakura, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2f472, 0x2f492, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f492, 0x2f4b2, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMK[] =
{
    { L"V-Ism Kick", 0x2f4b2, 0x2f4d2, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f4d2, 0x2f4f2, indexCPS2Sprites_Sakura, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2f4f2, 0x2f512, indexCPS2Sprites_Sakura, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2f512, 0x2f532, indexCPS2Sprites_Sakura, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f532, 0x2f552, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_STATUS[] =
{
    { L"Burned 1", 0x35392 + 0x00, 0x35392 + 0x20, indexCPS2Sprites_Sakura },
    { L"Burned 2", 0x35392 + 0x20, 0x35392 + 0x40, indexCPS2Sprites_Sakura },
    { L"Psycho Crusher Burned 1", 0x35392 + 0x40, 0x35392 + 0x60, indexCPS2Sprites_Sakura },
    { L"Psycho Crusher Burned 2", 0x35392 + 0x60, 0x35392 + 0x80, indexCPS2Sprites_Sakura },
    { L"V-Ism P1 After Effect 1", 0x35392 + 0x80, 0x35392 + 0xA0, indexCPS2Sprites_Sakura },
    { L"V-Ism P1 After Effect 2", 0x35392 + 0xA0, 0x35392 + 0xC0, indexCPS2Sprites_Sakura },
    { L"V-Ism P2 After Effect 1", 0x35392 + 0xC0, 0x35392 + 0xE0, indexCPS2Sprites_Sakura },
    { L"V-Ism P2 After Effect 2", 0x35392 + 0xe0, 0x35392 + 0x100, indexCPS2Sprites_Sakura },
    { L"X-Ism Punch Zapped", 0x35392 + 0x100, 0x35392 + 0x120, indexCPS2Sprites_Sakura, 0xa0 },
    { L"X-Ism Kick Zapped", 0x35392 + 0x120, 0x35392 + 0x140, indexCPS2Sprites_Sakura, 0xa0 },
    { L"A-Ism Punch Zapped", 0x35392 + 0x140, 0x35392 + 0x160, indexCPS2Sprites_Sakura, 0xa0 },
    { L"A-Ism Kick Zapped", 0x35392 + 0x160, 0x35392 + 0x180, indexCPS2Sprites_Sakura, 0xa0 },
    { L"V-Ism Punch Zapped", 0x35392 + 0x180, 0x35392 + 0x1A0, indexCPS2Sprites_Sakura, 0xa0 },
    { L"V-Ism Kick Zapped", 0x35392 + 0x1A0, 0x35392 + 0x1C0, indexCPS2Sprites_Sakura, 0xa0 },
    { L"Zapped Skeleton", 0x35392 + 0x1C0, 0x35392 + 0x1E0, indexCPS2Sprites_Sakura, 0xa1 },
    { L"X-Ism Punch Mash", 0x35392 + 0x1e0, 0x35392 + 0x200, indexCPS2Sprites_Sakura },
    { L"X-Ism Kick Mash", 0x35392 + 0x200, 0x35392 + 0x220, indexCPS2Sprites_Sakura },
    { L"A-Ism Punch Mash", 0x35392 + 0x220, 0x35392 + 0x240, indexCPS2Sprites_Sakura },
    { L"A-Ism Kick Mash", 0x35392 + 0x240, 0x35392 + 0x260, indexCPS2Sprites_Sakura },
    { L"V-Ism Punch Mash", 0x35392 + 0x260, 0x35392 + 0x280, indexCPS2Sprites_Sakura },
    { L"V-Ism Kick Mash", 0x35392 + 0x280, 0x35392 + 0x2A0, indexCPS2Sprites_Sakura },
    { L"Priority Win", 0x35392 + 0x2A0, 0x35392 + 0x2C0, indexCPS2Sprites_Sakura },
    { L"Damage Reduction", 0x35392 + 0x2C0, 0x35392 + 0x2E0, indexCPS2Sprites_Sakura },
    { L"Just Defend", 0x35392 + 0x2e0, 0x35392 + 0x300, indexCPS2Sprites_Sakura },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMP[] =
{
    { L"X-Ism Punch", 0x2f552, 0x2f572, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f572, 0x2f592, indexCPS2Sprites_Rolento, 0x08 },
    { L"X-Ism Punch Extra 2", 0x2f592, 0x2f5b2, indexCPS2Sprites_Rolento, 0x09 },
    { L"X-Ism Punch Super Trail Light", 0x2f5b2, 0x2f5d2, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f5d2, 0x2f5f2, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMK[] =
{
    { L"X-Ism Kick", 0x2f5f2, 0x2f612, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f612, 0x2f632, indexCPS2Sprites_Rolento, 0x08 },
    { L"X-Ism Kick Extra 2", 0x2f632, 0x2f652, indexCPS2Sprites_Rolento, 0x09 },
    { L"X-Ism Kick Super Trail Light", 0x2f652, 0x2f672, indexCPS2Sprites_Rolento, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2f672, 0x2f692, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMP[] =
{
    { L"A-Ism Punch", 0x2f692, 0x2f6b2, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2f6b2, 0x2f6d2, indexCPS2Sprites_Rolento, 0x08 },
    { L"A-Ism Punch Extra 2", 0x2f6d2, 0x2f6f2, indexCPS2Sprites_Rolento, 0x09 },
    { L"A-Ism Punch Super Trail Light", 0x2f6f2, 0x2f712, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2f712, 0x2f732, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMK[] =
{
    { L"A-Ism Kick", 0x2f732, 0x2f752, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2f752, 0x2f772, indexCPS2Sprites_Rolento, 0x08 },
    { L"A-Ism Kick Extra 2", 0x2f772, 0x2f792, indexCPS2Sprites_Rolento, 0x09 },
    { L"A-Ism Kick Super Trail Light", 0x2f792, 0x2f7b2, indexCPS2Sprites_Rolento, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f7b2, 0x2f7d2, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMP[] =
{
    { L"V-Ism Punch", 0x2f7d2, 0x2f7f2, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f7f2, 0x2f812, indexCPS2Sprites_Rolento, 0x08 },
    { L"V-Ism Punch Extra 2", 0x2f812, 0x2f832, indexCPS2Sprites_Rolento, 0x09 },
    { L"V-Ism Punch Super Trail Light", 0x2f832, 0x2f852, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f852, 0x2f872, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMK[] =
{
    { L"V-Ism Kick", 0x2f872, 0x2f892, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f892, 0x2f8b2, indexCPS2Sprites_Rolento, 0x08 },
    { L"V-Ism Kick Extra 2", 0x2f8b2, 0x2f8d2, indexCPS2Sprites_Rolento, 0x09 },
    { L"V-Ism Kick Super Trail Light", 0x2f8d2, 0x2f8f2, indexCPS2Sprites_Rolento, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f8f2, 0x2f912, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_STATUS[] =
{
    { L"Burned 1", 0x35692 + 0x00, 0x35692 + 0x20, indexCPS2Sprites_Rolento },
    { L"Burned 2", 0x35692 + 0x20, 0x35692 + 0x40, indexCPS2Sprites_Rolento },
    { L"Psycho Crusher Burned 1", 0x35692 + 0x40, 0x35692 + 0x60, indexCPS2Sprites_Rolento },
    { L"Psycho Crusher Burned 2", 0x35692 + 0x60, 0x35692 + 0x80, indexCPS2Sprites_Rolento },
    { L"V-Ism P1 After Effect 1", 0x35692 + 0x80, 0x35692 + 0xA0, indexCPS2Sprites_Rolento },
    { L"V-Ism P1 After Effect 2", 0x35692 + 0xA0, 0x35692 + 0xC0, indexCPS2Sprites_Rolento },
    { L"V-Ism P2 After Effect 1", 0x35692 + 0xC0, 0x35692 + 0xE0, indexCPS2Sprites_Rolento },
    { L"V-Ism P2 After Effect 2", 0x35692 + 0xe0, 0x35692 + 0x100, indexCPS2Sprites_Rolento },
    { L"X-Ism Punch Zapped", 0x35692 + 0x100, 0x35692 + 0x120, indexCPS2Sprites_Rolento, 0xa0 },
    { L"X-Ism Kick Zapped", 0x35692 + 0x120, 0x35692 + 0x140, indexCPS2Sprites_Rolento, 0xa0 },
    { L"A-Ism Punch Zapped", 0x35692 + 0x140, 0x35692 + 0x160, indexCPS2Sprites_Rolento, 0xa0 },
    { L"A-Ism Kick Zapped", 0x35692 + 0x160, 0x35692 + 0x180, indexCPS2Sprites_Rolento, 0xa0 },
    { L"V-Ism Punch Zapped", 0x35692 + 0x180, 0x35692 + 0x1A0, indexCPS2Sprites_Rolento, 0xa0 },
    { L"V-Ism Kick Zapped", 0x35692 + 0x1A0, 0x35692 + 0x1C0, indexCPS2Sprites_Rolento, 0xa0 },
    { L"Zapped Skeleton", 0x35692 + 0x1C0, 0x35692 + 0x1E0, indexCPS2Sprites_Rolento, 0xa1 },
    { L"X-Ism Punch Mash", 0x35692 + 0x1e0, 0x35692 + 0x200, indexCPS2Sprites_Rolento },
    { L"X-Ism Kick Mash", 0x35692 + 0x200, 0x35692 + 0x220, indexCPS2Sprites_Rolento },
    { L"A-Ism Punch Mash", 0x35692 + 0x220, 0x35692 + 0x240, indexCPS2Sprites_Rolento },
    { L"A-Ism Kick Mash", 0x35692 + 0x240, 0x35692 + 0x260, indexCPS2Sprites_Rolento },
    { L"V-Ism Punch Mash", 0x35692 + 0x260, 0x35692 + 0x280, indexCPS2Sprites_Rolento },
    { L"V-Ism Kick Mash", 0x35692 + 0x280, 0x35692 + 0x2A0, indexCPS2Sprites_Rolento },
    { L"Priority Win", 0x35692 + 0x2A0, 0x35692 + 0x2C0, indexCPS2Sprites_Rolento },
    { L"Damage Reduction", 0x35692 + 0x2C0, 0x35692 + 0x2E0, indexCPS2Sprites_Rolento },
    { L"Just Defend", 0x35692 + 0x2e0, 0x35692 + 0x300, indexCPS2Sprites_Rolento },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_SHARED[] =
{
    { L"Grenade Flash", 0x4b232, 0x4b252 },
    { L"Win Pose", 0x4b252, 0x4b272 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMP[] =
{
    { L"X-Ism Punch", 0x2f912, 0x2f932, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f932, 0x2f952, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"X-Ism Punch Sally", 0x2f952, 0x2f972, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"X-Ism Punch Teleport 1", 0x4b272, 0x4b292, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Teleport 2", 0x4b292, 0x4b2b2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Teleport 3", 0x4b2b2, 0x4b2d2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Teleport 4", 0x4b2d2, 0x4b2f2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Teleport 5", 0x4b2f2, 0x4b312, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Super Trail Light", 0x2f972, 0x2f992, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f992, 0x2f9b2, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMK[] =
{
    { L"X-Ism Kick", 0x2f9b2, 0x2f9d2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f9d2, 0x2f9f2, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"X-Ism Kick Sally", 0x2f9f2, 0x2fa12, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"X-Ism Kick Teleport 1", 0x4b312, 0x4b332, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Teleport 2", 0x4b332, 0x4b352, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Teleport 3", 0x4b352, 0x4b372, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Teleport 4", 0x4b372, 0x4b392, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Teleport 5", 0x4b392, 0x4b3b2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Super Trail Light", 0x2fa12, 0x2fa32, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2fa32, 0x2fa52, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMP[] =
{
    { L"A-Ism Punch", 0x2fa52, 0x2fa72, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2fa72, 0x2fa92, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"A-Ism Punch Sally", 0x2fa92, 0x2fab2, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"A-Ism Punch Teleport 1", 0x4b3b2, 0x4b3d2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Teleport 2", 0x4b3d2, 0x4b3f2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Teleport 3", 0x4b3f2, 0x4b412, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Teleport 4", 0x4b412, 0x4b432, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Teleport 5", 0x4b432, 0x4b452, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Super Trail Light", 0x2fab2, 0x2fad2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2fad2, 0x2faf2, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMK[] =
{
    { L"A-Ism Kick", 0x2faf2, 0x2fb12, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2fb12, 0x2fb32, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"A-Ism Kick Sally", 0x2fb32, 0x2fb52, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"A-Ism Kick Teleport 1", 0x4b452, 0x4b472, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Teleport 2", 0x4b472, 0x4b492, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Teleport 3", 0x4b492, 0x4b4b2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Teleport 4", 0x4b4b2, 0x4b4d2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Teleport 5", 0x4b4d2, 0x4b4f2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Super Trail Light", 0x2fb52, 0x2fb72, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2fb72, 0x2fb92, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMP[] =
{
    { L"V-Ism Punch", 0x2fb92, 0x2fbb2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2fbb2, 0x2fbd2, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"V-Ism Punch Sally", 0x2fbd2, 0x2fbf2, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"V-Ism Punch Teleport 1", 0x4b4f2, 0x4b512, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Teleport 2", 0x4b512, 0x4b532, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Teleport 3", 0x4b532, 0x4b552, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Teleport 4", 0x4b552, 0x4b572, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Teleport 5", 0x4b572, 0x4b592, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Super Trail Light", 0x2fbf2, 0x2fc12, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2fc12, 0x2fc32, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMK[] =
{
    { L"V-Ism Kick", 0x2fc32, 0x2fc52, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2fc52, 0x2fc72, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"V-Ism Kick Sally", 0x2fc72, 0x2fc92, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"V-Ism Kick Teleport 1", 0x4b592, 0x4b5b2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Teleport 2", 0x4b5b2, 0x4b5d2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Teleport 3", 0x4b5d2, 0x4b5f2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Teleport 4", 0x4b5f2, 0x4b612, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Teleport 5", 0x4b612, 0x4b632, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Super Trail Light", 0x2fc92, 0x2fcb2, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2fcb2, 0x2fcd2, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_STATUS[] =
{
    { L"Burned 1", 0x35992 + 0x00, 0x35992 + 0x20, indexCPS2Sprites_Dhalsim },
    { L"Burned 2", 0x35992 + 0x20, 0x35992 + 0x40, indexCPS2Sprites_Dhalsim },
    { L"Psycho Crusher Burned 1", 0x35992 + 0x40, 0x35992 + 0x60, indexCPS2Sprites_Dhalsim },
    { L"Psycho Crusher Burned 2", 0x35992 + 0x60, 0x35992 + 0x80, indexCPS2Sprites_Dhalsim },
    { L"V-Ism P1 After Effect 1", 0x35992 + 0x80, 0x35992 + 0xA0, indexCPS2Sprites_Dhalsim },
    { L"V-Ism P1 After Effect 2", 0x35992 + 0xA0, 0x35992 + 0xC0, indexCPS2Sprites_Dhalsim },
    { L"V-Ism P2 After Effect 1", 0x35992 + 0xC0, 0x35992 + 0xE0, indexCPS2Sprites_Dhalsim },
    { L"V-Ism P2 After Effect 2", 0x35992 + 0xe0, 0x35992 + 0x100, indexCPS2Sprites_Dhalsim },
    { L"X-Ism Punch Zapped", 0x35992 + 0x100, 0x35992 + 0x120, indexCPS2Sprites_Dhalsim, 0xa0 },
    { L"X-Ism Kick Zapped", 0x35992 + 0x120, 0x35992 + 0x140, indexCPS2Sprites_Dhalsim, 0xa0 },
    { L"A-Ism Punch Zapped", 0x35992 + 0x140, 0x35992 + 0x160, indexCPS2Sprites_Dhalsim, 0xa0 },
    { L"A-Ism Kick Zapped", 0x35992 + 0x160, 0x35992 + 0x180, indexCPS2Sprites_Dhalsim, 0xa0 },
    { L"V-Ism Punch Zapped", 0x35992 + 0x180, 0x35992 + 0x1A0, indexCPS2Sprites_Dhalsim, 0xa0 },
    { L"V-Ism Kick Zapped", 0x35992 + 0x1A0, 0x35992 + 0x1C0, indexCPS2Sprites_Dhalsim, 0xa0 },
    { L"Zapped Skeleton", 0x35992 + 0x1C0, 0x35992 + 0x1E0, indexCPS2Sprites_Dhalsim, 0xa1 },
    { L"X-Ism Punch Mash", 0x35992 + 0x1e0, 0x35992 + 0x200, indexCPS2Sprites_Dhalsim },
    { L"X-Ism Kick Mash", 0x35992 + 0x200, 0x35992 + 0x220, indexCPS2Sprites_Dhalsim },
    { L"A-Ism Punch Mash", 0x35992 + 0x220, 0x35992 + 0x240, indexCPS2Sprites_Dhalsim },
    { L"A-Ism Kick Mash", 0x35992 + 0x240, 0x35992 + 0x260, indexCPS2Sprites_Dhalsim },
    { L"V-Ism Punch Mash", 0x35992 + 0x260, 0x35992 + 0x280, indexCPS2Sprites_Dhalsim },
    { L"V-Ism Kick Mash", 0x35992 + 0x280, 0x35992 + 0x2A0, indexCPS2Sprites_Dhalsim },
    { L"Priority Win", 0x35992 + 0x2A0, 0x35992 + 0x2C0, indexCPS2Sprites_Dhalsim },
    { L"Damage Reduction", 0x35992 + 0x2C0, 0x35992 + 0x2E0, indexCPS2Sprites_Dhalsim },
    { L"Just Defend", 0x35992 + 0x2e0, 0x35992 + 0x300, indexCPS2Sprites_Dhalsim },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMP[] =
{
    { L"X-Ism Punch", 0x2fcd2, 0x2fcf2, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2fcf2, 0x2fd12, indexCPS2Sprites_Zangief, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2fd12, 0x2fd32 },
    { L"X-Ism Punch Super Trail Light", 0x2fd32, 0x2fd52, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2fd52, 0x2fd72, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMK[] =
{
    { L"X-Ism Kick", 0x2fd72, 0x2fd92, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2fd92, 0x2fdb2, indexCPS2Sprites_Zangief, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2fdb2, 0x2fdd2 },
    { L"X-Ism Kick Super Trail Light", 0x2fdd2, 0x2fdf2, indexCPS2Sprites_Zangief, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2fdf2, 0x2fe12, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMP[] =
{
    { L"A-Ism Punch", 0x2fe12, 0x2fe32, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2fe32, 0x2fe52, indexCPS2Sprites_Zangief, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2fe52, 0x2fe72 },
    { L"A-Ism Punch Super Trail Light", 0x2fe72, 0x2fe92, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2fe92, 0x2feb2, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMK[] =
{
    { L"A-Ism Kick", 0x2feb2, 0x2fed2, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2fed2, 0x2fef2, indexCPS2Sprites_Zangief, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2fef2, 0x2ff12 },
    { L"A-Ism Kick Super Trail Light", 0x2ff12, 0x2ff32, indexCPS2Sprites_Zangief, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ff32, 0x2ff52, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMP[] =
{
    { L"V-Ism Punch", 0x2ff52, 0x2ff72, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ff72, 0x2ff92, indexCPS2Sprites_Zangief, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2ff92, 0x2ffb2 },
    { L"V-Ism Punch Super Trail Light", 0x2ffb2, 0x2ffd2, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2ffd2, 0x2fff2, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMK[] =
{
    { L"V-Ism Kick", 0x2fff2, 0x30012, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30012, 0x30032, indexCPS2Sprites_Zangief, 0x01 },
    { L"V-Ism Kick Extra 2", 0x30032, 0x30052 },
    { L"V-Ism Kick Super Trail Light", 0x30052, 0x30072, indexCPS2Sprites_Zangief, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30072, 0x30092, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_STATUS[] =
{
    { L"Burned 1", 0x35c92 + 0x00, 0x35c92 + 0x20, indexCPS2Sprites_Zangief },
    { L"Burned 2", 0x35c92 + 0x20, 0x35c92 + 0x40, indexCPS2Sprites_Zangief },
    { L"Psycho Crusher Burned 1", 0x35c92 + 0x40, 0x35c92 + 0x60, indexCPS2Sprites_Zangief },
    { L"Psycho Crusher Burned 2", 0x35c92 + 0x60, 0x35c92 + 0x80, indexCPS2Sprites_Zangief },
    { L"V-Ism P1 After Effect 1", 0x35c92 + 0x80, 0x35c92 + 0xA0, indexCPS2Sprites_Zangief },
    { L"V-Ism P1 After Effect 2", 0x35c92 + 0xA0, 0x35c92 + 0xC0, indexCPS2Sprites_Zangief },
    { L"V-Ism P2 After Effect 1", 0x35c92 + 0xC0, 0x35c92 + 0xE0, indexCPS2Sprites_Zangief },
    { L"V-Ism P2 After Effect 2", 0x35c92 + 0xe0, 0x35c92 + 0x100, indexCPS2Sprites_Zangief },
    { L"X-Ism Punch Zapped", 0x35c92 + 0x100, 0x35c92 + 0x120, indexCPS2Sprites_Zangief, 0xa0 },
    { L"X-Ism Kick Zapped", 0x35c92 + 0x120, 0x35c92 + 0x140, indexCPS2Sprites_Zangief, 0xa0 },
    { L"A-Ism Punch Zapped", 0x35c92 + 0x140, 0x35c92 + 0x160, indexCPS2Sprites_Zangief, 0xa0 },
    { L"A-Ism Kick Zapped", 0x35c92 + 0x160, 0x35c92 + 0x180, indexCPS2Sprites_Zangief, 0xa0 },
    { L"V-Ism Punch Zapped", 0x35c92 + 0x180, 0x35c92 + 0x1A0, indexCPS2Sprites_Zangief, 0xa0 },
    { L"V-Ism Kick Zapped", 0x35c92 + 0x1A0, 0x35c92 + 0x1C0, indexCPS2Sprites_Zangief, 0xa0 },
    { L"Zapped Skeleton", 0x35c92 + 0x1C0, 0x35c92 + 0x1E0, indexCPS2Sprites_Zangief, 0xa1 },
    { L"X-Ism Punch Mash", 0x35c92 + 0x1e0, 0x35c92 + 0x200, indexCPS2Sprites_Zangief },
    { L"X-Ism Kick Mash", 0x35c92 + 0x200, 0x35c92 + 0x220, indexCPS2Sprites_Zangief },
    { L"A-Ism Punch Mash", 0x35c92 + 0x220, 0x35c92 + 0x240, indexCPS2Sprites_Zangief },
    { L"A-Ism Kick Mash", 0x35c92 + 0x240, 0x35c92 + 0x260, indexCPS2Sprites_Zangief },
    { L"V-Ism Punch Mash", 0x35c92 + 0x260, 0x35c92 + 0x280, indexCPS2Sprites_Zangief },
    { L"V-Ism Kick Mash", 0x35c92 + 0x280, 0x35c92 + 0x2A0, indexCPS2Sprites_Zangief },
    { L"Priority Win", 0x35c92 + 0x2A0, 0x35c92 + 0x2C0, indexCPS2Sprites_Zangief },
    { L"Damage Reduction", 0x35c92 + 0x2C0, 0x35c92 + 0x2E0, indexCPS2Sprites_Zangief },
    { L"Just Defend", 0x35c92 + 0x2e0, 0x35c92 + 0x300, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMP[] =
{
    { L"X-Ism Punch", 0x30092, 0x300b2, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Punch Extra 1", 0x300b2, 0x300d2 },
    { L"X-Ism Punch Extra 2", 0x300d2, 0x300f2 },
    { L"X-Ism Punch Super Trail Light", 0x300f2, 0x30112, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30112, 0x30132, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMK[] =
{
    { L"X-Ism Kick", 0x30132, 0x30152, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30152, 0x30172 },
    { L"X-Ism Kick Extra 2", 0x30172, 0x30192 },
    { L"X-Ism Kick Super Trail Light", 0x30192, 0x301b2, indexCPS2Sprites_Gen, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x301b2, 0x301d2, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMP[] =
{
    { L"A-Ism Punch", 0x301d2, 0x301f2, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Punch Extra 1", 0x301f2, 0x30212 },
    { L"A-Ism Punch Extra 2", 0x30212, 0x30232 },
    { L"A-Ism Punch Super Trail Light", 0x30232, 0x30252, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30252, 0x30272, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMK[] =
{
    { L"A-Ism Kick", 0x30272, 0x30292, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30292, 0x302b2 },
    { L"A-Ism Kick Extra 2", 0x302b2, 0x302d2 },
    { L"A-Ism Kick Super Trail Light", 0x302d2, 0x302f2, indexCPS2Sprites_Gen, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x302f2, 0x30312, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMP[] =
{
    { L"V-Ism Punch", 0x30312, 0x30332, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30332, 0x30352 },
    { L"V-Ism Punch Extra 2", 0x30352, 0x30372 },
    { L"V-Ism Punch Super Trail Light", 0x30372, 0x30392, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30392, 0x303b2, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMK[] =
{
    { L"V-Ism Kick", 0x303b2, 0x303d2, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Kick Extra 1", 0x303d2, 0x303f2 },
    { L"V-Ism Kick Extra 2", 0x303f2, 0x30412 },
    { L"V-Ism Kick Super Trail Light", 0x30412, 0x30432, indexCPS2Sprites_Gen, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30432, 0x30452, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_STATUS[] =
{
    { L"Burned 1", 0x35f92 + 0x00, 0x35f92 + 0x20, indexCPS2Sprites_Gen },
    { L"Burned 2", 0x35f92 + 0x20, 0x35f92 + 0x40, indexCPS2Sprites_Gen },
    { L"Psycho Crusher Burned 1", 0x35f92 + 0x40, 0x35f92 + 0x60, indexCPS2Sprites_Gen },
    { L"Psycho Crusher Burned 2", 0x35f92 + 0x60, 0x35f92 + 0x80, indexCPS2Sprites_Gen },
    { L"V-Ism P1 After Effect 1", 0x35f92 + 0x80, 0x35f92 + 0xA0, indexCPS2Sprites_Gen },
    { L"V-Ism P1 After Effect 2", 0x35f92 + 0xA0, 0x35f92 + 0xC0, indexCPS2Sprites_Gen },
    { L"V-Ism P2 After Effect 1", 0x35f92 + 0xC0, 0x35f92 + 0xE0, indexCPS2Sprites_Gen },
    { L"V-Ism P2 After Effect 2", 0x35f92 + 0xe0, 0x35f92 + 0x100, indexCPS2Sprites_Gen },
    { L"X-Ism Punch Zapped", 0x35f92 + 0x100, 0x35f92 + 0x120, indexCPS2Sprites_Gen, 0xa0 },
    { L"X-Ism Kick Zapped", 0x35f92 + 0x120, 0x35f92 + 0x140, indexCPS2Sprites_Gen, 0xa0 },
    { L"A-Ism Punch Zapped", 0x35f92 + 0x140, 0x35f92 + 0x160, indexCPS2Sprites_Gen, 0xa0 },
    { L"A-Ism Kick Zapped", 0x35f92 + 0x160, 0x35f92 + 0x180, indexCPS2Sprites_Gen, 0xa0 },
    { L"V-Ism Punch Zapped", 0x35f92 + 0x180, 0x35f92 + 0x1A0, indexCPS2Sprites_Gen, 0xa0 },
    { L"V-Ism Kick Zapped", 0x35f92 + 0x1A0, 0x35f92 + 0x1C0, indexCPS2Sprites_Gen, 0xa0 },
    { L"Zapped Skeleton", 0x35f92 + 0x1C0, 0x35f92 + 0x1E0, indexCPS2Sprites_Gen, 0xa1 },
    { L"X-Ism Punch Mash", 0x35f92 + 0x1e0, 0x35f92 + 0x200, indexCPS2Sprites_Gen },
    { L"X-Ism Kick Mash", 0x35f92 + 0x200, 0x35f92 + 0x220, indexCPS2Sprites_Gen },
    { L"A-Ism Punch Mash", 0x35f92 + 0x220, 0x35f92 + 0x240, indexCPS2Sprites_Gen },
    { L"A-Ism Kick Mash", 0x35f92 + 0x240, 0x35f92 + 0x260, indexCPS2Sprites_Gen },
    { L"V-Ism Punch Mash", 0x35f92 + 0x260, 0x35f92 + 0x280, indexCPS2Sprites_Gen },
    { L"V-Ism Kick Mash", 0x35f92 + 0x280, 0x35f92 + 0x2A0, indexCPS2Sprites_Gen },
    { L"Priority Win", 0x35f92 + 0x2A0, 0x35f92 + 0x2C0, indexCPS2Sprites_Gen },
    { L"Damage Reduction", 0x35f92 + 0x2C0, 0x35f92 + 0x2E0, indexCPS2Sprites_Gen },
    { L"Just Defend", 0x35f92 + 0x2e0, 0x35f92 + 0x300, indexCPS2Sprites_Gen },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMP[] =
{
    { L"X-Ism Punch", 0x30452, 0x30472, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30472, 0x30492 },
    { L"X-Ism Punch Extra 2", 0x30492, 0x304b2 },
    { L"X-Ism Punch Super Trail Light", 0x304b2, 0x304d2, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x304d2, 0x304f2, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMK[] =
{
    { L"X-Ism Kick", 0x304f2, 0x30512, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30512, 0x30532 },
    { L"X-Ism Kick Extra 2", 0x30532, 0x30552 },
    { L"X-Ism Kick Super Trail Light", 0x30552, 0x30572, indexCPS2Sprites_Balrog, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30572, 0x30592, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMP[] =
{
    { L"A-Ism Punch", 0x30592, 0x305b2, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Punch Extra 1", 0x305b2, 0x305d2 },
    { L"A-Ism Punch Extra 2", 0x305d2, 0x305f2 },
    { L"A-Ism Punch Super Trail Light", 0x305f2, 0x30612, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30612, 0x30632, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMK[] =
{
    { L"A-Ism Kick", 0x30632, 0x30652, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30652, 0x30672 },
    { L"A-Ism Kick Extra 2", 0x30672, 0x30692 },
    { L"A-Ism Kick Super Trail Light", 0x30692, 0x306b2, indexCPS2Sprites_Balrog, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x306b2, 0x306d2, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMP[] =
{
    { L"V-Ism Punch", 0x306d2, 0x306f2, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Punch Extra 1", 0x306f2, 0x30712 },
    { L"V-Ism Punch Extra 2", 0x30712, 0x30732 },
    { L"V-Ism Punch Super Trail Light", 0x30732, 0x30752, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30752, 0x30772, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMK[] =
{
    { L"V-Ism Kick", 0x30772, 0x30792, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30792, 0x307b2 },
    { L"V-Ism Kick Extra 2", 0x307b2, 0x307d2 },
    { L"V-Ism Kick Super Trail Light", 0x307d2, 0x307f2, indexCPS2Sprites_Balrog, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x307f2, 0x30812, indexCPS2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_STATUS[] =
{
    { L"Burned 1", 0x36292 + 0x00, 0x36292 + 0x20, indexCPS2Sprites_Balrog },
    { L"Burned 2", 0x36292 + 0x20, 0x36292 + 0x40, indexCPS2Sprites_Balrog },
    { L"Psycho Crusher Burned 1", 0x36292 + 0x40, 0x36292 + 0x60, indexCPS2Sprites_Balrog },
    { L"Psycho Crusher Burned 2", 0x36292 + 0x60, 0x36292 + 0x80, indexCPS2Sprites_Balrog },
    { L"V-Ism P1 After Effect 1", 0x36292 + 0x80, 0x36292 + 0xA0, indexCPS2Sprites_Balrog },
    { L"V-Ism P1 After Effect 2", 0x36292 + 0xA0, 0x36292 + 0xC0, indexCPS2Sprites_Balrog },
    { L"V-Ism P2 After Effect 1", 0x36292 + 0xC0, 0x36292 + 0xE0, indexCPS2Sprites_Balrog },
    { L"V-Ism P2 After Effect 2", 0x36292 + 0xe0, 0x36292 + 0x100, indexCPS2Sprites_Balrog },
    { L"X-Ism Punch Zapped", 0x36292 + 0x100, 0x36292 + 0x120, indexCPS2Sprites_Balrog, 0xa0 },
    { L"X-Ism Kick Zapped", 0x36292 + 0x120, 0x36292 + 0x140, indexCPS2Sprites_Balrog, 0xa0 },
    { L"A-Ism Punch Zapped", 0x36292 + 0x140, 0x36292 + 0x160, indexCPS2Sprites_Balrog, 0xa0 },
    { L"A-Ism Kick Zapped", 0x36292 + 0x160, 0x36292 + 0x180, indexCPS2Sprites_Balrog, 0xa0 },
    { L"V-Ism Punch Zapped", 0x36292 + 0x180, 0x36292 + 0x1A0, indexCPS2Sprites_Balrog, 0xa0 },
    { L"V-Ism Kick Zapped", 0x36292 + 0x1A0, 0x36292 + 0x1C0, indexCPS2Sprites_Balrog, 0xa0 },
    { L"Zapped Skeleton", 0x36292 + 0x1C0, 0x36292 + 0x1E0, indexCPS2Sprites_Balrog, 0xa1 },
    { L"X-Ism Punch Mash", 0x36292 + 0x1e0, 0x36292 + 0x200, indexCPS2Sprites_Balrog },
    { L"X-Ism Kick Mash", 0x36292 + 0x200, 0x36292 + 0x220, indexCPS2Sprites_Balrog },
    { L"A-Ism Punch Mash", 0x36292 + 0x220, 0x36292 + 0x240, indexCPS2Sprites_Balrog },
    { L"A-Ism Kick Mash", 0x36292 + 0x240, 0x36292 + 0x260, indexCPS2Sprites_Balrog },
    { L"V-Ism Punch Mash", 0x36292 + 0x260, 0x36292 + 0x280, indexCPS2Sprites_Balrog },
    { L"V-Ism Kick Mash", 0x36292 + 0x280, 0x36292 + 0x2A0, indexCPS2Sprites_Balrog },
    { L"Priority Win", 0x36292 + 0x2A0, 0x36292 + 0x2C0, indexCPS2Sprites_Balrog },
    { L"Damage Reduction", 0x36292 + 0x2C0, 0x36292 + 0x2E0, indexCPS2Sprites_Balrog },
    { L"Just Defend", 0x36292 + 0x2e0, 0x36292 + 0x300, indexCPS2Sprites_Balrog },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMP[] =
{
    { L"X-Ism Punch", 0x30812, 0x30832, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30832, 0x30852, indexCPS2Sprites_Cammy, 0x01 },
    { L"X-Ism Punch Extra 2", 0x30852, 0x30872, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Punch Super Trail Light", 0x30872, 0x30892, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30892, 0x308b2, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMK[] =
{
    { L"X-Ism Kick", 0x308b2, 0x308d2, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Kick Extra 1", 0x308d2, 0x308f2, indexCPS2Sprites_Cammy, 0x01 },
    { L"X-Ism Kick Extra 2", 0x308f2, 0x30912, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Kick Super Trail Light", 0x30912, 0x30932, indexCPS2Sprites_Cammy, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30932, 0x30952, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMP[] =
{
    { L"A-Ism Punch", 0x30952, 0x30972, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Punch Extra 1", 0x30972, 0x30992, indexCPS2Sprites_Cammy, 0x01 },
    { L"A-Ism Punch Extra 2", 0x30992, 0x309b2, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Punch Super Trail Light", 0x309b2, 0x309d2, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x309d2, 0x309f2, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMK[] =
{
    { L"A-Ism Kick", 0x309f2, 0x30a12, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30a12, 0x30a32, indexCPS2Sprites_Cammy, 0x01 },
    { L"A-Ism Kick Extra 2", 0x30a32, 0x30a52, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Kick Super Trail Light", 0x30a52, 0x30a72, indexCPS2Sprites_Cammy, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x30a72, 0x30a92, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMP[] =
{
    { L"V-Ism Punch", 0x30a92, 0x30ab2, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30ab2, 0x30ad2, indexCPS2Sprites_Cammy, 0x01 },
    { L"V-Ism Punch Extra 2", 0x30ad2, 0x30af2, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Punch Super Trail Light", 0x30af2, 0x30b12, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30b12, 0x30b32, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMK[] =
{
    { L"V-Ism Kick", 0x30b32, 0x30b52, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30b52, 0x30b72, indexCPS2Sprites_Cammy, 0x01 },
    { L"V-Ism Kick Extra 2", 0x30b72, 0x30b92, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Kick Super Trail Light", 0x30b92, 0x30bb2, indexCPS2Sprites_Cammy, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30bb2, 0x30bd2, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_STATUS[] =
{
    { L"Burned 1", 0x36592 + 0x00, 0x36592 + 0x20, indexCPS2Sprites_Cammy },
    { L"Burned 2", 0x36592 + 0x20, 0x36592 + 0x40, indexCPS2Sprites_Cammy },
    { L"Psycho Crusher Burned 1", 0x36592 + 0x40, 0x36592 + 0x60, indexCPS2Sprites_Cammy },
    { L"Psycho Crusher Burned 2", 0x36592 + 0x60, 0x36592 + 0x80, indexCPS2Sprites_Cammy },
    { L"V-Ism P1 After Effect 1", 0x36592 + 0x80, 0x36592 + 0xA0, indexCPS2Sprites_Cammy },
    { L"V-Ism P1 After Effect 2", 0x36592 + 0xA0, 0x36592 + 0xC0, indexCPS2Sprites_Cammy },
    { L"V-Ism P2 After Effect 1", 0x36592 + 0xC0, 0x36592 + 0xE0, indexCPS2Sprites_Cammy },
    { L"V-Ism P2 After Effect 2", 0x36592 + 0xe0, 0x36592 + 0x100, indexCPS2Sprites_Cammy },
    { L"X-Ism Punch Zapped", 0x36592 + 0x100, 0x36592 + 0x120, indexCPS2Sprites_Cammy, 0xa0 },
    { L"X-Ism Kick Zapped", 0x36592 + 0x120, 0x36592 + 0x140, indexCPS2Sprites_Cammy, 0xa0 },
    { L"A-Ism Punch Zapped", 0x36592 + 0x140, 0x36592 + 0x160, indexCPS2Sprites_Cammy, 0xa0 },
    { L"A-Ism Kick Zapped", 0x36592 + 0x160, 0x36592 + 0x180, indexCPS2Sprites_Cammy, 0xa0 },
    { L"V-Ism Punch Zapped", 0x36592 + 0x180, 0x36592 + 0x1A0, indexCPS2Sprites_Cammy, 0xa0 },
    { L"V-Ism Kick Zapped", 0x36592 + 0x1A0, 0x36592 + 0x1C0, indexCPS2Sprites_Cammy, 0xa0 },
    { L"Zapped Skeleton", 0x36592 + 0x1C0, 0x36592 + 0x1E0, indexCPS2Sprites_Cammy, 0xa1 },
    { L"X-Ism Punch Mash", 0x36592 + 0x1e0, 0x36592 + 0x200, indexCPS2Sprites_Cammy },
    { L"X-Ism Kick Mash", 0x36592 + 0x200, 0x36592 + 0x220, indexCPS2Sprites_Cammy },
    { L"A-Ism Punch Mash", 0x36592 + 0x220, 0x36592 + 0x240, indexCPS2Sprites_Cammy },
    { L"A-Ism Kick Mash", 0x36592 + 0x240, 0x36592 + 0x260, indexCPS2Sprites_Cammy },
    { L"V-Ism Punch Mash", 0x36592 + 0x260, 0x36592 + 0x280, indexCPS2Sprites_Cammy },
    { L"V-Ism Kick Mash", 0x36592 + 0x280, 0x36592 + 0x2A0, indexCPS2Sprites_Cammy },
    { L"Priority Win", 0x36592 + 0x2A0, 0x36592 + 0x2C0, indexCPS2Sprites_Cammy },
    { L"Damage Reduction", 0x36592 + 0x2C0, 0x36592 + 0x2E0, indexCPS2Sprites_Cammy },
    { L"Just Defend", 0x36592 + 0x2e0, 0x36592 + 0x300, indexCPS2Sprites_Cammy },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMP[] =
{
    { L"X-Ism Punch", 0x30bd2, 0x30bf2, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30bf2, 0x30c12 },
    { L"X-Ism Punch Extra 2", 0x30c12, 0x30c32 },
    { L"X-Ism Punch Super Trail Light", 0x30c32, 0x30c52, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30c52, 0x30c72, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMK[] =
{
    { L"X-Ism Kick", 0x30c72, 0x30c92, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30c92, 0x30cb2 },
    { L"X-Ism Kick Extra 2", 0x30cb2, 0x30cd2 },
    { L"X-Ism Kick Super Trail Light", 0x30cd2, 0x30cf2, indexCPS2Sprites_EHonda, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30cf2, 0x30d12, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMP[] =
{
    { L"A-Ism Punch", 0x30d12, 0x30d32, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Punch Extra 1", 0x30d32, 0x30d52 },
    { L"A-Ism Punch Extra 2", 0x30d52, 0x30d72 },
    { L"A-Ism Punch Super Trail Light", 0x30d72, 0x30d92, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30d92, 0x30db2, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMK[] =
{
    { L"A-Ism Kick", 0x30db2, 0x30dd2, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30dd2, 0x30df2 },
    { L"A-Ism Kick Extra 2", 0x30df2, 0x30e12 },
    { L"A-Ism Kick Super Trail Light", 0x30e12, 0x30e32, indexCPS2Sprites_EHonda, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x30e32, 0x30e52, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMP[] =
{
    { L"V-Ism Punch", 0x30e52, 0x30e72, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30e72, 0x30e92 },
    { L"V-Ism Punch Extra 2", 0x30e92, 0x30eb2 },
    { L"V-Ism Punch Super Trail Light", 0x30eb2, 0x30ed2, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30ed2, 0x30ef2, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMK[] =
{
    { L"V-Ism Kick", 0x30ef2, 0x30f12, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30f12, 0x30f32 },
    { L"V-Ism Kick Extra 2", 0x30f32, 0x30f52 },
    { L"V-Ism Kick Super Trail Light", 0x30f52, 0x30f72, indexCPS2Sprites_EHonda, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30f72, 0x30f92, indexCPS2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_STATUS[] =
{
    { L"Burned 1", 0x36892 + 0x00, 0x36892 + 0x20, indexCPS2Sprites_EHonda },
    { L"Burned 2", 0x36892 + 0x20, 0x36892 + 0x40, indexCPS2Sprites_EHonda },
    { L"Psycho Crusher Burned 1", 0x36892 + 0x40, 0x36892 + 0x60, indexCPS2Sprites_EHonda },
    { L"Psycho Crusher Burned 2", 0x36892 + 0x60, 0x36892 + 0x80, indexCPS2Sprites_EHonda },
    { L"V-Ism P1 After Effect 1", 0x36892 + 0x80, 0x36892 + 0xA0, indexCPS2Sprites_EHonda },
    { L"V-Ism P1 After Effect 2", 0x36892 + 0xA0, 0x36892 + 0xC0, indexCPS2Sprites_EHonda },
    { L"V-Ism P2 After Effect 1", 0x36892 + 0xC0, 0x36892 + 0xE0, indexCPS2Sprites_EHonda },
    { L"V-Ism P2 After Effect 2", 0x36892 + 0xe0, 0x36892 + 0x100, indexCPS2Sprites_EHonda },
    { L"X-Ism Punch Zapped", 0x36892 + 0x100, 0x36892 + 0x120, indexCPS2Sprites_EHonda, 0xa0 },
    { L"X-Ism Kick Zapped", 0x36892 + 0x120, 0x36892 + 0x140, indexCPS2Sprites_EHonda, 0xa0 },
    { L"A-Ism Punch Zapped", 0x36892 + 0x140, 0x36892 + 0x160, indexCPS2Sprites_EHonda, 0xa0 },
    { L"A-Ism Kick Zapped", 0x36892 + 0x160, 0x36892 + 0x180, indexCPS2Sprites_EHonda, 0xa0 },
    { L"V-Ism Punch Zapped", 0x36892 + 0x180, 0x36892 + 0x1A0, indexCPS2Sprites_EHonda, 0xa0 },
    { L"V-Ism Kick Zapped", 0x36892 + 0x1A0, 0x36892 + 0x1C0, indexCPS2Sprites_EHonda, 0xa0 },
    { L"Zapped Skeleton", 0x36892 + 0x1C0, 0x36892 + 0x1E0, indexCPS2Sprites_EHonda, 0xa1 },
    { L"X-Ism Punch Mash", 0x36892 + 0x1e0, 0x36892 + 0x200, indexCPS2Sprites_EHonda },
    { L"X-Ism Kick Mash", 0x36892 + 0x200, 0x36892 + 0x220, indexCPS2Sprites_EHonda },
    { L"A-Ism Punch Mash", 0x36892 + 0x220, 0x36892 + 0x240, indexCPS2Sprites_EHonda },
    { L"A-Ism Kick Mash", 0x36892 + 0x240, 0x36892 + 0x260, indexCPS2Sprites_EHonda },
    { L"V-Ism Punch Mash", 0x36892 + 0x260, 0x36892 + 0x280, indexCPS2Sprites_EHonda },
    { L"V-Ism Kick Mash", 0x36892 + 0x280, 0x36892 + 0x2A0, indexCPS2Sprites_EHonda },
    { L"Priority Win", 0x36892 + 0x2A0, 0x36892 + 0x2C0, indexCPS2Sprites_EHonda },
    { L"Damage Reduction", 0x36892 + 0x2C0, 0x36892 + 0x2E0, indexCPS2Sprites_EHonda },
    { L"Just Defend", 0x36892 + 0x2e0, 0x36892 + 0x300, indexCPS2Sprites_EHonda },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMP[] =
{
    { L"X-Ism Punch", 0x30f92, 0x30fb2, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30fb2, 0x30fd2 },
    { L"X-Ism Punch Extra 2", 0x30fd2, 0x30ff2 },
    { L"X-Ism Punch Extra 3", 0x4b632, 0x4b652, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Punch Extra 4", 0x4b6f2, 0x4b712 },

    { L"X-Ism Punch Super Trail Light", 0x30ff2, 0x31012, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31012, 0x31032, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMK[] =
{
    { L"X-Ism Kick", 0x31032, 0x31052, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Kick Extra 1", 0x31052, 0x31072 },
    { L"X-Ism Kick Extra 2", 0x31072, 0x31092 },
    { L"X-Ism Kick Extra 3", 0x4b652, 0x4b672, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Kick Extra 4", 0x4b712, 0x4b732 },
    { L"X-Ism Kick Super Trail Light", 0x31092, 0x310b2, indexCPS2Sprites_Blanka, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x310b2, 0x310d2, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMP[] =
{
    { L"A-Ism Punch", 0x310d2, 0x310f2, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Punch Extra 1", 0x310f2, 0x31112 },
    { L"A-Ism Punch Extra 2", 0x31112, 0x31132 },
    { L"A-Ism Punch Extra 3", 0x4b672, 0x4b692, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Punch Extra 4", 0x4b732, 0x4b752 },

    { L"A-Ism Punch Super Trail Light", 0x31132, 0x31152, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31152, 0x31172, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMK[] =
{
    { L"A-Ism Kick", 0x31172, 0x31192, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Kick Extra 1", 0x31192, 0x311b2 },
    { L"A-Ism Kick Extra 2", 0x311b2, 0x311d2 },
    { L"A-Ism Kick Extra 3", 0x4b692, 0x4b6b2, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Kick Extra 4", 0x4b752, 0x4b772 },
    { L"A-Ism Kick Super Trail Light", 0x311d2, 0x311f2, indexCPS2Sprites_Blanka, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x311f2, 0x31212, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMP[] =
{
    { L"V-Ism Punch", 0x31212, 0x31232, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Punch Extra 1", 0x31232, 0x31252 },
    { L"V-Ism Punch Extra 2", 0x31252, 0x31272 },
    { L"V-Ism Punch Extra 3", 0x4b6b2, 0x4b6d2, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Punch Extra 4", 0x4b772, 0x4b792 },
    { L"V-Ism Punch Super Trail Light", 0x31272, 0x31292, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31292, 0x312b2, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMK[] =
{
    { L"V-Ism Kick", 0x312b2, 0x312d2, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Kick Extra 1", 0x312d2, 0x312f2 },
    { L"V-Ism Kick Extra 2", 0x312f2, 0x31312 },
    { L"V-Ism Kick Extra 3", 0x4b6d2, 0x4b6f2, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Kick Extra 4", 0x4b792, 0x4b7b2 },
    { L"V-Ism Kick Super Trail Light", 0x31312, 0x31332, indexCPS2Sprites_Blanka, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31332, 0x31352, indexCPS2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_STATUS[] =
{
    { L"Burned 1", 0x36b92 + 0x00, 0x36b92 + 0x20, indexCPS2Sprites_Blanka },
    { L"Burned 2", 0x36b92 + 0x20, 0x36b92 + 0x40, indexCPS2Sprites_Blanka },
    { L"Psycho Crusher Burned 1", 0x36b92 + 0x40, 0x36b92 + 0x60, indexCPS2Sprites_Blanka },
    { L"Psycho Crusher Burned 2", 0x36b92 + 0x60, 0x36b92 + 0x80, indexCPS2Sprites_Blanka },
    { L"V-Ism P1 After Effect 1", 0x36b92 + 0x80, 0x36b92 + 0xA0, indexCPS2Sprites_Blanka },
    { L"V-Ism P1 After Effect 2", 0x36b92 + 0xA0, 0x36b92 + 0xC0, indexCPS2Sprites_Blanka },
    { L"V-Ism P2 After Effect 1", 0x36b92 + 0xC0, 0x36b92 + 0xE0, indexCPS2Sprites_Blanka },
    { L"V-Ism P2 After Effect 2", 0x36b92 + 0xe0, 0x36b92 + 0x100, indexCPS2Sprites_Blanka },
    { L"X-Ism Punch Zapped", 0x36b92 + 0x100, 0x36b92 + 0x120, indexCPS2Sprites_Blanka, 0xa0 },
    { L"X-Ism Kick Zapped", 0x36b92 + 0x120, 0x36b92 + 0x140, indexCPS2Sprites_Blanka, 0xa0 },
    { L"A-Ism Punch Zapped", 0x36b92 + 0x140, 0x36b92 + 0x160, indexCPS2Sprites_Blanka, 0xa0 },
    { L"A-Ism Kick Zapped", 0x36b92 + 0x160, 0x36b92 + 0x180, indexCPS2Sprites_Blanka, 0xa0 },
    { L"V-Ism Punch Zapped", 0x36b92 + 0x180, 0x36b92 + 0x1A0, indexCPS2Sprites_Blanka, 0xa0 },
    { L"V-Ism Kick Zapped", 0x36b92 + 0x1A0, 0x36b92 + 0x1C0, indexCPS2Sprites_Blanka, 0xa0 },
    { L"Zapped Skeleton", 0x36b92 + 0x1C0, 0x36b92 + 0x1E0, indexCPS2Sprites_Blanka, 0xa1 },
    { L"X-Ism Punch Mash", 0x36b92 + 0x1e0, 0x36b92 + 0x200, indexCPS2Sprites_Blanka },
    { L"X-Ism Kick Mash", 0x36b92 + 0x200, 0x36b92 + 0x220, indexCPS2Sprites_Blanka },
    { L"A-Ism Punch Mash", 0x36b92 + 0x220, 0x36b92 + 0x240, indexCPS2Sprites_Blanka },
    { L"A-Ism Kick Mash", 0x36b92 + 0x240, 0x36b92 + 0x260, indexCPS2Sprites_Blanka },
    { L"V-Ism Punch Mash", 0x36b92 + 0x260, 0x36b92 + 0x280, indexCPS2Sprites_Blanka },
    { L"V-Ism Kick Mash", 0x36b92 + 0x280, 0x36b92 + 0x2A0, indexCPS2Sprites_Blanka },
    { L"Priority Win", 0x36b92 + 0x2A0, 0x36b92 + 0x2C0, indexCPS2Sprites_Blanka },
    { L"Damage Reduction", 0x36b92 + 0x2C0, 0x36b92 + 0x2E0, indexCPS2Sprites_Blanka },
    { L"Just Defend", 0x36b92 + 0x2e0, 0x36b92 + 0x300, indexCPS2Sprites_Blanka },
};

const sGame_PaletteDataset SFA3_A_RMIKA_XISMP[] =
{
    { L"X-Ism Punch", 0x31352, 0x31372, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Punch Extra 1", 0x31372, 0x31392 },
    { L"X-Ism Punch Extra 2: Wrestling Ring / Tire", 0x31392, 0x313b2, indexCPS2Sprites_RMika, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x313b2, 0x313d2, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x313d2, 0x313f2, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_XISMK[] =
{
    { L"X-Ism Kick", 0x313f2, 0x31412, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Kick Extra 1", 0x31412, 0x31432 },
    { L"X-Ism Kick Extra 2: Wrestling Ring / Tire", 0x31432, 0x31452, indexCPS2Sprites_RMika, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x31452, 0x31472, indexCPS2Sprites_RMika, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31472, 0x31492, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMP[] =
{
    { L"A-Ism Punch", 0x31492, 0x314b2, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Punch Extra 1", 0x314b2, 0x314d2 },
    { L"A-Ism Punch Extra 2: Wrestling Ring / Tire", 0x314d2, 0x314f2, indexCPS2Sprites_RMika, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x314f2, 0x31512, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31512, 0x31532, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMK[] =
{
    { L"A-Ism Kick", 0x31532, 0x31552, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Kick Extra 1", 0x31552, 0x31572 },
    { L"A-Ism Kick Extra 2: Wrestling Ring / Tire", 0x31572, 0x31592, indexCPS2Sprites_RMika, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x31592, 0x315b2, indexCPS2Sprites_RMika, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x315b2, 0x315d2, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMP[] =
{
    { L"V-Ism Punch", 0x315d2, 0x315f2, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Punch Extra 1", 0x315f2, 0x31612 },
    { L"V-Ism Punch Extra 2: Wrestling Ring / Tire", 0x31612, 0x31632, indexCPS2Sprites_RMika, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x31632, 0x31652, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31652, 0x31672, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMK[] =
{
    { L"V-Ism Kick", 0x31672, 0x31692, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Kick Extra 1", 0x31692, 0x316b2 },
    { L"V-Ism Kick Extra 2: Wrestling Ring / Tire", 0x316b2, 0x316d2, indexCPS2Sprites_RMika, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x316d2, 0x316f2, indexCPS2Sprites_RMika, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x316f2, 0x31712, indexCPS2Sprites_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_STATUS[] =
{
    { L"Burned 1", 0x36e92 + 0x00, 0x36e92 + 0x20, indexCPS2Sprites_RMika },
    { L"Burned 2", 0x36e92 + 0x20, 0x36e92 + 0x40, indexCPS2Sprites_RMika },
    { L"Psycho Crusher Burned 1", 0x36e92 + 0x40, 0x36e92 + 0x60, indexCPS2Sprites_RMika },
    { L"Psycho Crusher Burned 2", 0x36e92 + 0x60, 0x36e92 + 0x80, indexCPS2Sprites_RMika },
    { L"V-Ism P1 After Effect 1", 0x36e92 + 0x80, 0x36e92 + 0xA0, indexCPS2Sprites_RMika },
    { L"V-Ism P1 After Effect 2", 0x36e92 + 0xA0, 0x36e92 + 0xC0, indexCPS2Sprites_RMika },
    { L"V-Ism P2 After Effect 1", 0x36e92 + 0xC0, 0x36e92 + 0xE0, indexCPS2Sprites_RMika },
    { L"V-Ism P2 After Effect 2", 0x36e92 + 0xe0, 0x36e92 + 0x100, indexCPS2Sprites_RMika },
    { L"X-Ism Punch Zapped", 0x36e92 + 0x100, 0x36e92 + 0x120, indexCPS2Sprites_RMika, 0xa0 },
    { L"X-Ism Kick Zapped", 0x36e92 + 0x120, 0x36e92 + 0x140, indexCPS2Sprites_RMika, 0xa0 },
    { L"A-Ism Punch Zapped", 0x36e92 + 0x140, 0x36e92 + 0x160, indexCPS2Sprites_RMika, 0xa0 },
    { L"A-Ism Kick Zapped", 0x36e92 + 0x160, 0x36e92 + 0x180, indexCPS2Sprites_RMika, 0xa0 },
    { L"V-Ism Punch Zapped", 0x36e92 + 0x180, 0x36e92 + 0x1A0, indexCPS2Sprites_RMika, 0xa0 },
    { L"V-Ism Kick Zapped", 0x36e92 + 0x1A0, 0x36e92 + 0x1C0, indexCPS2Sprites_RMika, 0xa0 },
    { L"Zapped Skeleton", 0x36e92 + 0x1C0, 0x36e92 + 0x1E0, indexCPS2Sprites_RMika, 0xa1 },
    { L"X-Ism Punch Mash", 0x36e92 + 0x1e0, 0x36e92 + 0x200, indexCPS2Sprites_RMika },
    { L"X-Ism Kick Mash", 0x36e92 + 0x200, 0x36e92 + 0x220, indexCPS2Sprites_RMika },
    { L"A-Ism Punch Mash", 0x36e92 + 0x220, 0x36e92 + 0x240, indexCPS2Sprites_RMika },
    { L"A-Ism Kick Mash", 0x36e92 + 0x240, 0x36e92 + 0x260, indexCPS2Sprites_RMika },
    { L"V-Ism Punch Mash", 0x36e92 + 0x260, 0x36e92 + 0x280, indexCPS2Sprites_RMika },
    { L"V-Ism Kick Mash", 0x36e92 + 0x280, 0x36e92 + 0x2A0, indexCPS2Sprites_RMika },
    { L"Priority Win", 0x36e92 + 0x2A0, 0x36e92 + 0x2C0, indexCPS2Sprites_RMika },
    { L"Damage Reduction", 0x36e92 + 0x2C0, 0x36e92 + 0x2E0, indexCPS2Sprites_RMika },
    { L"Just Defend", 0x36e92 + 0x2e0, 0x36e92 + 0x300, indexCPS2Sprites_RMika },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMP[] =
{
    { L"X-Ism Punch", 0x31712, 0x31732, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Punch Dagger/Cyclone", 0x31732, 0x31752, indexCPS2Sprites_Cody, 0x01 },
    { L"X-Ism Punch Extra 2: Edi E.", 0x31752, 0x31772, indexCPS2Sprites_Cody, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x31772, 0x31792, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31792, 0x317b2, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMK[] =
{
    { L"X-Ism Kick", 0x317b2, 0x317d2, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Kick Dagger/Cyclone", 0x317d2, 0x317f2, indexCPS2Sprites_Cody, 0x01 },
    { L"X-Ism Kick Extra 2: Edi E.", 0x317f2, 0x31812, indexCPS2Sprites_Cody, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x31812, 0x31832, indexCPS2Sprites_Cody, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31832, 0x31852, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMP[] =
{
    { L"A-Ism Punch", 0x31852, 0x31872, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Punch Dagger/Cyclone", 0x31872, 0x31892, indexCPS2Sprites_Cody, 0x01 },
    { L"A-Ism Punch Extra 2: Edi E.", 0x31892, 0x318b2, indexCPS2Sprites_Cody, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x318b2, 0x318d2, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x318d2, 0x318f2, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMK[] =
{
    { L"A-Ism Kick", 0x318f2, 0x31912, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Kick Dagger/Cyclone", 0x31912, 0x31932, indexCPS2Sprites_Cody, 0x01 },
    { L"A-Ism Kick Extra 2: Edi E.", 0x31932, 0x31952, indexCPS2Sprites_Cody, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x31952, 0x31972, indexCPS2Sprites_Cody, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x31972, 0x31992, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMP[] =
{
    { L"V-Ism Punch", 0x31992, 0x319b2, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Punch Dagger/Cyclone", 0x319b2, 0x319d2, indexCPS2Sprites_Cody, 0x01 },
    { L"V-Ism Punch Extra 2: Edi E.", 0x319d2, 0x319f2, indexCPS2Sprites_Cody, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x319f2, 0x31a12, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31a12, 0x31a32, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMK[] =
{
    { L"V-Ism Kick", 0x31a32, 0x31a52, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Kick Dagger/Cyclone", 0x31a52, 0x31a72, indexCPS2Sprites_Cody, 0x01 },
    { L"V-Ism Kick Extra 2: Edi E.", 0x31a72, 0x31a92, indexCPS2Sprites_Cody, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x31a92, 0x31ab2, indexCPS2Sprites_Cody, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31ab2, 0x31ad2, indexCPS2Sprites_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_STATUS[] =
{
    { L"Burned 1", 0x37192 + 0x00, 0x37192 + 0x20, indexCPS2Sprites_Cody },
    { L"Burned 2", 0x37192 + 0x20, 0x37192 + 0x40, indexCPS2Sprites_Cody },
    { L"Psycho Crusher Burned 1", 0x37192 + 0x40, 0x37192 + 0x60, indexCPS2Sprites_Cody },
    { L"Psycho Crusher Burned 2", 0x37192 + 0x60, 0x37192 + 0x80, indexCPS2Sprites_Cody },
    { L"V-Ism P1 After Effect 1", 0x37192 + 0x80, 0x37192 + 0xA0, indexCPS2Sprites_Cody },
    { L"V-Ism P1 After Effect 2", 0x37192 + 0xA0, 0x37192 + 0xC0, indexCPS2Sprites_Cody },
    { L"V-Ism P2 After Effect 1", 0x37192 + 0xC0, 0x37192 + 0xE0, indexCPS2Sprites_Cody },
    { L"V-Ism P2 After Effect 2", 0x37192 + 0xe0, 0x37192 + 0x100, indexCPS2Sprites_Cody },
    { L"X-Ism Punch Zapped", 0x37192 + 0x100, 0x37192 + 0x120, indexCPS2Sprites_Cody, 0x03 },
    { L"X-Ism Kick Zapped", 0x37192 + 0x120, 0x37192 + 0x140, indexCPS2Sprites_Cody, 0x03 },
    { L"A-Ism Punch Zapped", 0x37192 + 0x140, 0x37192 + 0x160, indexCPS2Sprites_Cody, 0x03 },
    { L"A-Ism Kick Zapped", 0x37192 + 0x160, 0x37192 + 0x180, indexCPS2Sprites_Cody, 0x03 },
    { L"V-Ism Punch Zapped", 0x37192 + 0x180, 0x37192 + 0x1A0, indexCPS2Sprites_Cody, 0x03 },
    { L"V-Ism Kick Zapped", 0x37192 + 0x1A0, 0x37192 + 0x1C0, indexCPS2Sprites_Cody, 0x03 },
    { L"Zapped Skeleton", 0x37192 + 0x1C0, 0x37192 + 0x1E0, indexCPS2Sprites_Cody, 0x04 },
    { L"X-Ism Punch Mash", 0x37192 + 0x1e0, 0x37192 + 0x200, indexCPS2Sprites_Cody },
    { L"X-Ism Kick Mash", 0x37192 + 0x200, 0x37192 + 0x220, indexCPS2Sprites_Cody },
    { L"A-Ism Punch Mash", 0x37192 + 0x220, 0x37192 + 0x240, indexCPS2Sprites_Cody },
    { L"A-Ism Kick Mash", 0x37192 + 0x240, 0x37192 + 0x260, indexCPS2Sprites_Cody },
    { L"V-Ism Punch Mash", 0x37192 + 0x260, 0x37192 + 0x280, indexCPS2Sprites_Cody },
    { L"V-Ism Kick Mash", 0x37192 + 0x280, 0x37192 + 0x2A0, indexCPS2Sprites_Cody },
    { L"Priority Win", 0x37192 + 0x2A0, 0x37192 + 0x2C0, indexCPS2Sprites_Cody },
    { L"Damage Reduction", 0x37192 + 0x2C0, 0x37192 + 0x2E0, indexCPS2Sprites_Cody },
    { L"Just Defend", 0x37192 + 0x2e0, 0x37192 + 0x300, indexCPS2Sprites_Cody },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMP[] =
{
    { L"X-Ism Punch", 0x31ad2, 0x31af2, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"X-Ism Punch Claws", 0x031AF2, 0x031B12, indexCPS2Sprites_Vega, 1, &pairPrevious },
    { L"X-Ism Punch Extra 2", 0x31b12, 0x31b32 },
    { L"X-Ism Punch Super Trail Light", 0x31b32, 0x31b52, indexCPS2Sprites_Vega, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31b52, 0x31b72, indexCPS2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMK[] =
{
    { L"X-Ism Kick", 0x31b72, 0x31b92, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"X-Ism Kick Claws", 0x031B92, 0x031BB2, indexCPS2Sprites_Vega, 1, &pairPrevious },
    { L"X-Ism Kick Extra 2", 0x31bb2, 0x31bd2 },
    { L"X-Ism Kick Super Trail Light", 0x31bd2, 0x31bf2, indexCPS2Sprites_Vega, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31bf2, 0x31c12, indexCPS2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMP[] =
{
    { L"A-Ism Punch", 0x31c12, 0x31c32, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"A-Ism Punch Claws", 0x031C32, 0x031C52, indexCPS2Sprites_Vega, 1 },
    { L"A-Ism Punch Extra 2", 0x31c52, 0x31c72 },
    { L"A-Ism Punch Super Trail Light", 0x31c72, 0x31c92, indexCPS2Sprites_Vega, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31c92, 0x31cb2, indexCPS2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMK[] =
{
    { L"A-Ism Kick", 0x31cb2, 0x31cd2, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"A-Ism Kick Claws", 0x031CD2, 0x031CF2, indexCPS2Sprites_Vega, 1 },
    { L"A-Ism Kick Extra 2", 0x31cf2, 0x31d12 },
    { L"A-Ism Kick Super Trail Light", 0x31d12, 0x31d32, indexCPS2Sprites_Vega, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x31d32, 0x31d52, indexCPS2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMP[] =
{
    { L"V-Ism Punch", 0x31d52, 0x31d72, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"V-Ism Punch Claws", 0x031D72, 0x031D92, indexCPS2Sprites_Vega, 1 },
    { L"V-Ism Punch Extra 2", 0x31d92, 0x31db2 },
    { L"V-Ism Punch Super Trail Light", 0x31db2, 0x31dd2, indexCPS2Sprites_Vega, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31dd2, 0x31df2, indexCPS2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMK[] =
{
    { L"V-Ism Kick", 0x31df2, 0x31e12, indexCPS2Sprites_Vega, 0x00, &pairNext },
    { L"V-Ism Kick Claws", 0x031E12, 0x031E32, indexCPS2Sprites_Vega, 1 },
    { L"V-Ism Kick Extra 2", 0x31e32, 0x31e52 },
    { L"V-Ism Kick Super Trail Light", 0x31e52, 0x31e72, indexCPS2Sprites_Vega, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31e72, 0x31e92, indexCPS2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_STATUS[] =
{
    { L"Burned 1", 0x37492 + 0x00, 0x37492 + 0x20, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw Burned 1", 0x37792, 0x377b2, indexCPS2Sprites_Vega, 1 },
    { L"Burned 2", 0x37492 + 0x20, 0x37492 + 0x40, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw Burned 2", 0x377b2, 0x377d2, indexCPS2Sprites_Vega, 1 },
    { L"Psycho Crusher Burned 1", 0x37492 + 0x40, 0x37492 + 0x60, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw Psycho Crusher Burned 1", 0x377d2, 0x377f2, indexCPS2Sprites_Vega, 1 },
    { L"Psycho Crusher Burned 2", 0x37492 + 0x60, 0x37492 + 0x80, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw Psycho Crusher Burned 2", 0x377f2, 0x37812, indexCPS2Sprites_Vega, 1 },
    { L"V-Ism P1 After Effect 1", 0x37492 + 0x80, 0x37492 + 0xA0, indexCPS2Sprites_Vega },
    { L"V-Ism P1 After Effect 2", 0x37492 + 0xA0, 0x37492 + 0xC0, indexCPS2Sprites_Vega },
    { L"V-Ism P2 After Effect 1", 0x37492 + 0xC0, 0x37492 + 0xE0, indexCPS2Sprites_Vega },
    { L"V-Ism P2 After Effect 2", 0x37492 + 0xe0, 0x37492 + 0x100, indexCPS2Sprites_Vega },
    { L"X-Ism Punch Zapped", 0x37492 + 0x100, 0x37492 + 0x120, indexCPS2Sprites_Vega, 0xa0 },
    { L"X-Ism Kick Zapped", 0x37492 + 0x120, 0x37492 + 0x140, indexCPS2Sprites_Vega, 0xa0 },
    { L"A-Ism Punch Zapped", 0x37492 + 0x140, 0x37492 + 0x160, indexCPS2Sprites_Vega, 0xa0 },
    { L"A-Ism Kick Zapped", 0x37492 + 0x160, 0x37492 + 0x180, indexCPS2Sprites_Vega, 0xa0 },
    { L"V-Ism Punch Zapped", 0x37492 + 0x180, 0x37492 + 0x1A0, indexCPS2Sprites_Vega, 0xa0 },
    { L"V-Ism Kick Zapped", 0x37492 + 0x1A0, 0x37492 + 0x1C0, indexCPS2Sprites_Vega, 0xa0 },
    { L"Zapped Skeleton", 0x37492 + 0x1C0, 0x37492 + 0x1E0, indexCPS2Sprites_Vega, 0xa1 },
    { L"X-Ism Punch Mash", 0x37492 + 0x1e0, 0x37492 + 0x200, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw X-Ism Punch Mash", 0x37812, 0x37832, indexCPS2Sprites_Vega, 1 },
    { L"X-Ism Kick Mash", 0x37492 + 0x200, 0x37492 + 0x220, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw X-Ism Kick Mash", 0x37832, 0x37852, indexCPS2Sprites_Vega, 1 },
    { L"A-Ism Punch Mash", 0x37492 + 0x220, 0x37492 + 0x240, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw A-Ism Punch Mash", 0x37852, 0x37872, indexCPS2Sprites_Vega, 1 },
    { L"A-Ism Kick Mash", 0x37492 + 0x240, 0x37492 + 0x260, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw A-Ism Kick Mash", 0x37872, 0x37892, indexCPS2Sprites_Vega, 1 },
    { L"V-Ism Punch Mash", 0x37492 + 0x260, 0x37492 + 0x280, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw V-Ism Punch Mash", 0x37892, 0x378b2, indexCPS2Sprites_Vega, 1 },
    { L"V-Ism Kick Mash", 0x37492 + 0x280, 0x37492 + 0x2A0, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw V-Ism Kick Mash", 0x378b2, 0x378d2, indexCPS2Sprites_Vega, 1 },
    { L"Priority Win", 0x37492 + 0x2A0, 0x37492 + 0x2C0, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw Priority Win", 0x378d2, 0x378f2, indexCPS2Sprites_Vega, 1 },
    { L"Damage Reduction", 0x37492 + 0x2C0, 0x37492 + 0x2E0, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw Damage Reduction", 0x378f2, 0x37912, indexCPS2Sprites_Vega, 1 },
    { L"Just Defend", 0x37492 + 0x2e0, 0x37492 + 0x300, indexCPS2Sprites_Vega, 0, &pairNext },
        { L"Claw Just Defend", 0x37912, 0x37932, indexCPS2Sprites_Vega, 1 },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMP[] =
{
    { L"X-Ism Punch", 0x31e92, 0x31eb2, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Punch Extra 1: Helicopter", 0x31eb2, 0x31ed2, indexCPS2Sprites_Karin, 0x02, &pairNext },
    { L"X-Ism Punch Extra 2: Butler", 0x31ed2, 0x31ef2, indexCPS2Sprites_Karin, 0x03, &pairPrevious },
    { L"X-Ism Punch Super Trail Light", 0x31ef2, 0x31f12, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31f12, 0x31f32, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMK[] =
{
    { L"X-Ism Kick", 0x31f32, 0x31f52, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Kick Extra 1: Helicopter", 0x31f52, 0x31f72, indexCPS2Sprites_Karin, 0x02, &pairNext },
    { L"X-Ism Kick Extra 2: Butler", 0x31f72, 0x31f92, indexCPS2Sprites_Karin, 0x03, &pairPrevious },
    { L"X-Ism Kick Super Trail Light", 0x31f92, 0x31fb2, indexCPS2Sprites_Karin, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31fb2, 0x31fd2, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMP[] =
{
    { L"A-Ism Punch", 0x31fd2, 0x31ff2, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Punch Extra 1: Helicopter", 0x31ff2, 0x32012, indexCPS2Sprites_Karin, 0x02, &pairNext },
    { L"A-Ism Punch Extra 2: Butler", 0x32012, 0x32032, indexCPS2Sprites_Karin, 0x03, &pairPrevious },
    { L"A-Ism Punch Super Trail Light", 0x32032, 0x32052, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x32052, 0x32072, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMK[] =
{
    { L"A-Ism Kick", 0x32072, 0x32092, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Kick Extra 1: Helicopter", 0x32092, 0x320b2, indexCPS2Sprites_Karin, 0x02, &pairNext },
    { L"A-Ism Kick Extra 2: Butler", 0x320b2, 0x320d2, indexCPS2Sprites_Karin, 0x03, &pairPrevious },
    { L"A-Ism Kick Super Trail Light", 0x320d2, 0x320f2, indexCPS2Sprites_Karin, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x320f2, 0x32112, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMP[] =
{
    { L"V-Ism Punch", 0x32112, 0x32132, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Punch Extra 1: Helicopter", 0x32132, 0x32152, indexCPS2Sprites_Karin, 0x02, &pairNext },
    { L"V-Ism Punch Extra 2: Butler", 0x32152, 0x32172, indexCPS2Sprites_Karin, 0x03, &pairPrevious },
    { L"V-Ism Punch Super Trail Light", 0x32172, 0x32192, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32192, 0x321b2, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMK[] =
{
    { L"V-Ism Kick", 0x321b2, 0x321d2, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Kick Extra 1: Helicopter", 0x321d2, 0x321f2, indexCPS2Sprites_Karin, 0x02, &pairNext },
    { L"V-Ism Kick Extra 2: Butler", 0x321f2, 0x32212, indexCPS2Sprites_Karin, 0x03, &pairPrevious },
    { L"V-Ism Kick Super Trail Light", 0x32212, 0x32232, indexCPS2Sprites_Karin, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x32232, 0x32252, indexCPS2Sprites_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_STATUS[] =
{
    { L"Burned 1", 0x37932 + 0x00, 0x37932 + 0x20, indexCPS2Sprites_Karin },
    { L"Burned 2", 0x37932 + 0x20, 0x37932 + 0x40, indexCPS2Sprites_Karin },
    { L"Psycho Crusher Burned 1", 0x37932 + 0x40, 0x37932 + 0x60, indexCPS2Sprites_Karin },
    { L"Psycho Crusher Burned 2", 0x37932 + 0x60, 0x37932 + 0x80, indexCPS2Sprites_Karin },
    { L"V-Ism P1 After Effect 1", 0x37932 + 0x80, 0x37932 + 0xA0, indexCPS2Sprites_Karin },
    { L"V-Ism P1 After Effect 2", 0x37932 + 0xA0, 0x37932 + 0xC0, indexCPS2Sprites_Karin },
    { L"V-Ism P2 After Effect 1", 0x37932 + 0xC0, 0x37932 + 0xE0, indexCPS2Sprites_Karin },
    { L"V-Ism P2 After Effect 2", 0x37932 + 0xe0, 0x37932 + 0x100, indexCPS2Sprites_Karin },
    { L"X-Ism Punch Zapped", 0x37932 + 0x100, 0x37932 + 0x120, indexCPS2Sprites_Karin, 0xa0 },
    { L"X-Ism Kick Zapped", 0x37932 + 0x120, 0x37932 + 0x140, indexCPS2Sprites_Karin, 0xa0 },
    { L"A-Ism Punch Zapped", 0x37932 + 0x140, 0x37932 + 0x160, indexCPS2Sprites_Karin, 0xa0 },
    { L"A-Ism Kick Zapped", 0x37932 + 0x160, 0x37932 + 0x180, indexCPS2Sprites_Karin, 0xa0 },
    { L"V-Ism Punch Zapped", 0x37932 + 0x180, 0x37932 + 0x1A0, indexCPS2Sprites_Karin, 0xa0 },
    { L"V-Ism Kick Zapped", 0x37932 + 0x1A0, 0x37932 + 0x1C0, indexCPS2Sprites_Karin, 0xa0 },
    { L"Zapped Skeleton", 0x37932 + 0x1C0, 0x37932 + 0x1E0, indexCPS2Sprites_Karin, 0xa1 },
    { L"X-Ism Punch Mash", 0x37932 + 0x1e0, 0x37932 + 0x200, indexCPS2Sprites_Karin },
    { L"X-Ism Kick Mash", 0x37932 + 0x200, 0x37932 + 0x220, indexCPS2Sprites_Karin },
    { L"A-Ism Punch Mash", 0x37932 + 0x220, 0x37932 + 0x240, indexCPS2Sprites_Karin },
    { L"A-Ism Kick Mash", 0x37932 + 0x240, 0x37932 + 0x260, indexCPS2Sprites_Karin },
    { L"V-Ism Punch Mash", 0x37932 + 0x260, 0x37932 + 0x280, indexCPS2Sprites_Karin },
    { L"V-Ism Kick Mash", 0x37932 + 0x280, 0x37932 + 0x2A0, indexCPS2Sprites_Karin },
    { L"Priority Win", 0x37932 + 0x2A0, 0x37932 + 0x2C0, indexCPS2Sprites_Karin },
    { L"Damage Reduction", 0x37932 + 0x2C0, 0x37932 + 0x2E0, indexCPS2Sprites_Karin },
    { L"Just Defend", 0x37932 + 0x2e0, 0x37932 + 0x300, indexCPS2Sprites_Karin },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMP[] =
{
    { L"X-Ism Punch", 0x32252, 0x32272, indexCPS2Sprites_Juli, 0x00, &pairNext },
    { L"X-Ism Punch Extra 1: Body", 0x32272, 0x32292, indexCPS2Sprites_Juli, 0x01, &pairPrevious },
    { L"X-Ism Punch Extra 2: Psycho Charge", 0x32292, 0x322b2, indexCPS2Sprites_Juli, 0x02 },
    { L"X-Ism Punch : Psycho Charge Beta 1", 0x4b832, 0x4b872 },
    { L"X-Ism Punch : Psycho Charge Beta 2", 0x4b872, 0x4b8b2 },
    { L"X-Ism Punch : Psycho Charge Beta 3", 0x4b8b2, 0x4b8f2 },


    { L"X-Ism Punch Super Trail Light", 0x322b2, 0x322d2, indexCPS2Sprites_Juli, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x322d2, 0x322f2, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMK[] =
{
    { L"X-Ism Kick", 0x322f2, 0x32312, indexCPS2Sprites_Juli, 0x00, &pairNext },
    { L"X-Ism Kick Extra 1: Body", 0x32312, 0x32332, indexCPS2Sprites_Juli, 0x01, &pairPrevious },
    { L"X-Ism Kick Extra 2: Psycho Charge", 0x32332, 0x32352, indexCPS2Sprites_Juli, 0x02 },
    { L"X-Ism Kick : Psycho Charge Beta 1", 0x4b8f2, 0x4b932 },
    { L"X-Ism Kick : Psycho Charge Beta 2", 0x4b932, 0x4b972 },
    { L"X-Ism Kick : Psycho Charge Beta 3", 0x4b972, 0x4b9b2 },
        
    { L"X-Ism Kick Super Trail Light", 0x32352, 0x32372, indexCPS2Sprites_Juli, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x32372, 0x32392, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMP[] =
{
    { L"A-Ism Punch", 0x32392, 0x323b2, indexCPS2Sprites_Juli, 0x00, &pairNext },
    { L"A-Ism Punch Extra 1: Body", 0x323b2, 0x323d2, indexCPS2Sprites_Juli, 0x01, &pairPrevious },
    { L"A-Ism Punch Extra 2: Psycho Charge", 0x323d2, 0x323f2, indexCPS2Sprites_Juli, 0x02 },
    { L"A-Ism Punch : Psycho Charge Beta 1", 0x4b9b2, 0x4b9f2 },
    { L"A-Ism Punch : Psycho Charge Beta 2", 0x4b9f2, 0x4ba32 },
    { L"A-Ism Punch : Psycho Charge Beta 3", 0x4ba32, 0x4ba72 },

    { L"A-Ism Punch Super Trail Light", 0x323f2, 0x32412, indexCPS2Sprites_Juli, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x32412, 0x32432, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMK[] =
{
    { L"A-Ism Kick", 0x32432, 0x32452, indexCPS2Sprites_Juli, 0x00, &pairNext },
    { L"A-Ism Kick Extra 1: Body", 0x32452, 0x32472, indexCPS2Sprites_Juli, 0x01, &pairPrevious },
    { L"A-Ism Kick Extra 2: Psycho Charge", 0x32472, 0x32492, indexCPS2Sprites_Juli, 0x02 },
    { L"A-Ism Kick : Psycho Charge Beta 1", 0x4ba72, 0x4bab2 },
    { L"A-Ism Kick : Psycho Charge Beta 2", 0x4bab2, 0x4baf2 },
    { L"A-Ism Kick : Psycho Charge Beta 3", 0x4baf2, 0x4bb32 },

    { L"A-Ism Kick Super Trail Light", 0x32492, 0x324b2, indexCPS2Sprites_Juli, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x324b2, 0x324d2, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMP[] =
{
    { L"V-Ism Punch", 0x324d2, 0x324f2, indexCPS2Sprites_Juli, 0x00, &pairNext },
    { L"V-Ism Punch Extra 1: Body", 0x324f2, 0x32512, indexCPS2Sprites_Juli, 0x01, &pairPrevious },
    { L"V-Ism Punch Extra 2: Psycho Charge", 0x32512, 0x32532, indexCPS2Sprites_Juli, 0x02 },
    { L"V-Ism Punch : Psycho Charge Beta 1", 0x4bb32, 0x4bb72 },
    { L"V-Ism Punch : Psycho Charge Beta 2", 0x4bb72, 0x4bbb2 },
    { L"V-Ism Punch : Psycho Charge Beta 3", 0x4bbb2, 0x4bbf2 },

    { L"V-Ism Punch Super Trail Light", 0x32532, 0x32552, indexCPS2Sprites_Juli, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32552, 0x32572, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMK[] =
{
    { L"V-Ism Kick", 0x32572, 0x32592, indexCPS2Sprites_Juli, 0x00, &pairNext },
    { L"V-Ism Kick Extra 1: Body", 0x32592, 0x325b2, indexCPS2Sprites_Juli, 0x01, &pairPrevious },
    { L"V-Ism Kick Extra 2: Psycho Charge", 0x325b2, 0x325d2, indexCPS2Sprites_Juli, 0x02 },
    { L"V-Ism Kick : Psycho Charge Beta 1", 0x4bbf2, 0x4bc32 },
    { L"V-Ism Kick : Psycho Charge Beta 2", 0x4bc32, 0x4bc72 },
    { L"V-Ism Kick : Psycho Charge Beta 3", 0x4bc72, 0x4bcb2 },

    { L"V-Ism Kick Super Trail Light", 0x325d2, 0x325f2, indexCPS2Sprites_Juli, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x325f2, 0x32612, indexCPS2Sprites_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_STATUS[] =
{
    { L"Burned 1", 0x37ff2 + 0x00, 0x37ff2 + 0x20, indexCPS2Sprites_Juli },
    { L"Burned 2", 0x37ff2 + 0x20, 0x37ff2 + 0x40, indexCPS2Sprites_Juli },
    { L"Psycho Crusher Burned 1", 0x37ff2 + 0x40, 0x37ff2 + 0x60, indexCPS2Sprites_Juli },
    { L"Psycho Crusher Burned 2", 0x37ff2 + 0x60, 0x37ff2 + 0x80, indexCPS2Sprites_Juli },
    { L"V-Ism P1 After Effect 1", 0x37ff2 + 0x80, 0x37ff2 + 0xA0, indexCPS2Sprites_Juli },
    { L"V-Ism P1 After Effect 2", 0x37ff2 + 0xA0, 0x37ff2 + 0xC0, indexCPS2Sprites_Juli },
    { L"V-Ism P2 After Effect 1", 0x37ff2 + 0xC0, 0x37ff2 + 0xE0, indexCPS2Sprites_Juli },
    { L"V-Ism P2 After Effect 2", 0x37ff2 + 0xe0, 0x37ff2 + 0x100, indexCPS2Sprites_Juli },
    { L"X-Ism Punch Zapped", 0x37ff2 + 0x100, 0x37ff2 + 0x120, indexCPS2Sprites_Juli, 0xa0 },
    { L"X-Ism Kick Zapped", 0x37ff2 + 0x120, 0x37ff2 + 0x140, indexCPS2Sprites_Juli, 0xa0 },
    { L"A-Ism Punch Zapped", 0x37ff2 + 0x140, 0x37ff2 + 0x160, indexCPS2Sprites_Juli, 0xa0 },
    { L"A-Ism Kick Zapped", 0x37ff2 + 0x160, 0x37ff2 + 0x180, indexCPS2Sprites_Juli, 0xa0 },
    { L"V-Ism Punch Zapped", 0x37ff2 + 0x180, 0x37ff2 + 0x1A0, indexCPS2Sprites_Juli, 0xa0 },
    { L"V-Ism Kick Zapped", 0x37ff2 + 0x1A0, 0x37ff2 + 0x1C0, indexCPS2Sprites_Juli, 0xa0 },
    { L"Zapped Skeleton", 0x37ff2 + 0x1C0, 0x37ff2 + 0x1E0, indexCPS2Sprites_Juli, 0xa1 },
    { L"X-Ism Punch Mash", 0x37ff2 + 0x1e0, 0x37ff2 + 0x200, indexCPS2Sprites_Juli },
    { L"X-Ism Kick Mash", 0x37ff2 + 0x200, 0x37ff2 + 0x220, indexCPS2Sprites_Juli },
    { L"A-Ism Punch Mash", 0x37ff2 + 0x220, 0x37ff2 + 0x240, indexCPS2Sprites_Juli },
    { L"A-Ism Kick Mash", 0x37ff2 + 0x240, 0x37ff2 + 0x260, indexCPS2Sprites_Juli },
    { L"V-Ism Punch Mash", 0x37ff2 + 0x260, 0x37ff2 + 0x280, indexCPS2Sprites_Juli },
    { L"V-Ism Kick Mash", 0x37ff2 + 0x280, 0x37ff2 + 0x2A0, indexCPS2Sprites_Juli },

        { L"Body X-Ism Punch Mash", 0x382f2, 0x38312 },
        { L"Body X-Ism Kick Mash", 0x38312, 0x38332 },
        { L"Body A-Ism Punch Mash", 0x38332, 0x38352 },
        { L"Body A-Ism Kick Mash", 0x38352, 0x38372 },
        { L"Body V-Ism Punch Mash", 0x38372, 0x38392 },
        { L"Body V-Ism Kick Mash", 0x38392, 0x383b2 },

    { L"Priority Win", 0x37ff2 + 0x2A0, 0x37ff2 + 0x2C0, indexCPS2Sprites_Juli },
    { L"Damage Reduction", 0x37ff2 + 0x2C0, 0x37ff2 + 0x2E0, indexCPS2Sprites_Juli },
    { L"Just Defend", 0x37ff2 + 0x2e0, 0x37ff2 + 0x300, indexCPS2Sprites_Juli },
};

const sGame_PaletteDataset SFA3_A_JUNI_XISMP[] =
{
    { L"X-Ism Punch", 0x32612, 0x32632, indexCPS2Sprites_Juni, 0x00, &pairNext },
    { L"X-Ism Punch Extra 1: Body", 0x32632, 0x32652, indexCPS2Sprites_Juni, 0x01, &pairPrevious },
    { L"X-Ism Punch Extra 2: Psycho Charge", 0x32652, 0x32672, indexCPS2Sprites_Juni, 0x02 },
    { L"X-Ism Punch : Psycho Charge Alpha 1", 0x4bd92, 0x4bdd2 },
    { L"X-Ism Punch : Psycho Charge Alpha 2", 0x4bdd2, 0x4be12 },
    { L"X-Ism Punch : Psycho Charge Alpha 3", 0x4be12, 0x4be52 },

    { L"X-Ism Punch Super Trail Light", 0x32672, 0x32692, indexCPS2Sprites_Juni, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x32692, 0x326b2, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_XISMK[] =
{
    { L"X-Ism Kick", 0x326b2, 0x326d2, indexCPS2Sprites_Juni, 0x00, &pairNext },
    { L"X-Ism Kick Extra 1: Body", 0x326d2, 0x326f2, indexCPS2Sprites_Juni, 0x01, &pairPrevious },
    { L"X-Ism Kick Extra 2: Psycho Charge", 0x326f2, 0x32712, indexCPS2Sprites_Juni, 0x02 },
    { L"X-Ism Kick : Psycho Charge Alpha 1", 0x4be52, 0x4be92 },
    { L"X-Ism Kick : Psycho Charge Alpha 2", 0x4be92, 0x4bed2 },
    { L"X-Ism Kick : Psycho Charge Alpha 3", 0x4bed2, 0x4bf12 },

    { L"X-Ism Kick Super Trail Light", 0x32712, 0x32732, indexCPS2Sprites_Juni, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x32732, 0x32752, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMP[] =
{
    { L"A-Ism Punch", 0x32752, 0x32772, indexCPS2Sprites_Juni, 0x00, &pairNext },
    { L"A-Ism Punch Extra 1: Body", 0x32772, 0x32792, indexCPS2Sprites_Juni, 0x01, &pairPrevious },
    { L"A-Ism Punch Extra 2: Psycho Charge", 0x32792, 0x327b2, indexCPS2Sprites_Juni, 0x02 },
    { L"A-Ism Punch : Psycho Charge Alpha 1", 0x4bf12, 0x4bf52 },
    { L"A-Ism Punch : Psycho Charge Alpha 2", 0x4bf52, 0x4bf92 },
    { L"A-Ism Punch : Psycho Charge Alpha 3", 0x4bf92, 0x4bfd2 },

    { L"A-Ism Punch Super Trail Light", 0x327b2, 0x327d2, indexCPS2Sprites_Juni, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x327d2, 0x327f2, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMK[] =
{
    { L"A-Ism Kick", 0x327f2, 0x32812, indexCPS2Sprites_Juni, 0x00, &pairNext },
    { L"A-Ism Kick Extra 1: Body", 0x32812, 0x32832, indexCPS2Sprites_Juni, 0x01, &pairPrevious },
    { L"A-Ism Kick Extra 2: Psycho Charge", 0x32832, 0x32852, indexCPS2Sprites_Juni, 0x02 },
    { L"A-Ism Kick : Psycho Charge Alpha 1", 0x4bfd2, 0x4c012 },
    { L"A-Ism Kick : Psycho Charge Alpha 2", 0x4c012, 0x4c052 },
    { L"A-Ism Kick : Psycho Charge Alpha 3", 0x4c052, 0x4c092 },

    { L"A-Ism Kick Super Trail Light", 0x32852, 0x32872, indexCPS2Sprites_Juni, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x32872, 0x32892, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMP[] =
{
    { L"V-Ism Punch", 0x32892, 0x328b2, indexCPS2Sprites_Juni, 0x00, &pairNext },
    { L"V-Ism Punch Extra 1: Body", 0x328b2, 0x328d2, indexCPS2Sprites_Juni, 0x01, &pairPrevious },
    { L"V-Ism Punch Extra 2: Psycho Charge", 0x328d2, 0x328f2, indexCPS2Sprites_Juni, 0x02 },
    { L"V-Ism Punch : Psycho Charge Alpha 1", 0x4c092, 0x4c0d2 },
    { L"V-Ism Punch : Psycho Charge Alpha 2", 0x4c0d2, 0x4c112 },
    { L"V-Ism Punch : Psycho Charge Alpha 3", 0x4c112, 0x4c152 },

    { L"V-Ism Punch Super Trail Light", 0x328f2, 0x32912, indexCPS2Sprites_Juni, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32912, 0x32932, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMK[] =
{
    { L"V-Ism Kick", 0x32932, 0x32952, indexCPS2Sprites_Juni, 0x00, &pairNext },
    { L"V-Ism Kick Extra 1: Body", 0x32952, 0x32972, indexCPS2Sprites_Juni, 0x01, &pairPrevious },
    { L"V-Ism Kick Extra 2: Psycho Charge", 0x32972, 0x32992, indexCPS2Sprites_Juni, 0x02 },
    { L"V-Ism Kick : Psycho Charge Alpha 1", 0x4c152, 0x4c192 },
    { L"V-Ism Kick : Psycho Charge Alpha 2", 0x4c192, 0x4c1d2 },
    { L"V-Ism Kick : Psycho Charge Alpha 3", 0x4c1d2, 0x4c212 },

    { L"V-Ism Kick Super Trail Light", 0x32992, 0x329b2, indexCPS2Sprites_Juni, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x329b2, 0x329d2, indexCPS2Sprites_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_STATUS[] =
{
    { L"Burned 1", 0x37c32 + 0x00, 0x37c32 + 0x20, indexCPS2Sprites_Juni },
    { L"Burned 2", 0x37c32 + 0x20, 0x37c32 + 0x40, indexCPS2Sprites_Juni },
    { L"Psycho Crusher Burned 1", 0x37c32 + 0x40, 0x37c32 + 0x60, indexCPS2Sprites_Juni },
    { L"Psycho Crusher Burned 2", 0x37c32 + 0x60, 0x37c32 + 0x80, indexCPS2Sprites_Juni },
    { L"V-Ism P1 After Effect 1", 0x37c32 + 0x80, 0x37c32 + 0xA0, indexCPS2Sprites_Juni },
    { L"V-Ism P1 After Effect 2", 0x37c32 + 0xA0, 0x37c32 + 0xC0, indexCPS2Sprites_Juni },
    { L"V-Ism P2 After Effect 1", 0x37c32 + 0xC0, 0x37c32 + 0xE0, indexCPS2Sprites_Juni },
    { L"V-Ism P2 After Effect 2", 0x37c32 + 0xe0, 0x37c32 + 0x100, indexCPS2Sprites_Juni },
    { L"X-Ism Punch Zapped", 0x37c32 + 0x100, 0x37c32 + 0x120, indexCPS2Sprites_Juni, 0xa0 },
    { L"X-Ism Kick Zapped", 0x37c32 + 0x120, 0x37c32 + 0x140, indexCPS2Sprites_Juni, 0xa0 },
    { L"A-Ism Punch Zapped", 0x37c32 + 0x140, 0x37c32 + 0x160, indexCPS2Sprites_Juni, 0xa0 },
    { L"A-Ism Kick Zapped", 0x37c32 + 0x160, 0x37c32 + 0x180, indexCPS2Sprites_Juni, 0xa0 },
    { L"V-Ism Punch Zapped", 0x37c32 + 0x180, 0x37c32 + 0x1A0, indexCPS2Sprites_Juni, 0xa0 },
    { L"V-Ism Kick Zapped", 0x37c32 + 0x1A0, 0x37c32 + 0x1C0, indexCPS2Sprites_Juni, 0xa0 },
    { L"Zapped Skeleton", 0x37c32 + 0x1C0, 0x37c32 + 0x1E0, indexCPS2Sprites_Juni, 0xa1 },
    { L"X-Ism Punch Mash", 0x37c32 + 0x1e0, 0x37c32 + 0x200, indexCPS2Sprites_Juni, 0x00, &pairNext },
        { L"Body X-Ism Punch Mash", 0x37f32, 0x37f52, indexCPS2Sprites_Juni, 0x01 },
    { L"X-Ism Kick Mash", 0x37c32 + 0x200, 0x37c32 + 0x220, indexCPS2Sprites_Juni, 0x00, &pairNext },
        { L"Body X-Ism Kick Mash", 0x37f52, 0x37f72, indexCPS2Sprites_Juni, 0x01 },
    { L"A-Ism Punch Mash", 0x37c32 + 0x220, 0x37c32 + 0x240, indexCPS2Sprites_Juni, 0x00, &pairNext },
        { L"Body A-Ism Punch Mash", 0x37f72, 0x37f92, indexCPS2Sprites_Juni, 0x01 },
    { L"A-Ism Kick Mash", 0x37c32 + 0x240, 0x37c32 + 0x260, indexCPS2Sprites_Juni, 0x00, &pairNext },
        { L"Body A-Ism Kick Mash", 0x37f92, 0x37fb2, indexCPS2Sprites_Juni, 0x01 },
    { L"V-Ism Punch Mash", 0x37c32 + 0x260, 0x37c32 + 0x280, indexCPS2Sprites_Juni, 0x00, &pairNext },
        { L"Body V-Ism Punch Mash", 0x37fb2, 0x37fd2, indexCPS2Sprites_Juni, 0x01 },
    { L"V-Ism Kick Mash", 0x37c32 + 0x280, 0x37c32 + 0x2A0, indexCPS2Sprites_Juni, 0x00, &pairNext },
        { L"Body V-Ism Kick Mash", 0x37fd2, 0x37ff2, indexCPS2Sprites_Juni, 0x01 },

    { L"Priority Win", 0x37c32 + 0x2A0, 0x37c32 + 0x2C0, indexCPS2Sprites_Juni },
    { L"Damage Reduction", 0x37c32 + 0x2C0, 0x37c32 + 0x2E0, indexCPS2Sprites_Juni },
    { L"Just Defend", 0x37c32 + 0x2e0, 0x37c32 + 0x300, indexCPS2Sprites_Juni },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_TITLES[] =
{
    { L"Title Screen 1.0.0 - Initial Fade", 0x5fa52, 0x5fa72, indexCPS2Sprites_SFA3Assets, 0xd1 },
    { L"Title Screen 1.0.1 - Main 1", 0x3bc92, 0x3bcb2, indexCPS2Sprites_SFA3Assets, 0xd1 },
    { L"Title Screen 1.0.2 - Main 2", 0x5bbf2, 0x5bc12, indexCPS2Sprites_SFA3Assets, 0xd1 },
    { L"Title Screen 1.1 - Fade 1", 0x5bbd2, 0x5bbf2, indexCPS2Sprites_SFA3Assets, 0xd1 },
    { L"Title Screen 1.2 - Fade 2", 0x5bbb2, 0x5bbd2, indexCPS2Sprites_SFA3Assets, 0xd1 },
    { L"Title Screen 1.3 - Fade 3", 0x5bb92, 0x5bbb2, indexCPS2Sprites_SFA3Assets, 0xd1 },
    { L"Title Screen 2.0.1 - Main 1", 0x3bcb2, 0x3bcd2, indexCPS2Sprites_SFA3Assets, 0xd2 },
    { L"Title Screen 2.0.2 - Main 2", 0x5bc72, 0x5bc92, indexCPS2Sprites_SFA3Assets, 0xd2 },
    { L"Title Screen 2.1 - Fade 1", 0x5bc52, 0x5bc72, indexCPS2Sprites_SFA3Assets, 0xd2 },
    { L"Title Screen 2.2 - Fade 2", 0x5bc32, 0x5bc52, indexCPS2Sprites_SFA3Assets, 0xd2 },
    { L"Title Screen 2.3 - Fade 3", 0x5bc12, 0x5bc32, indexCPS2Sprites_SFA3Assets, 0xd2 },
    { L"Title Screen 3.0 - Main", 0x5bcf2, 0x5bd12, indexCPS2Sprites_SFA3Assets, 0xd3 },
    { L"Title Screen 3.1 - Fade 1", 0x5bcd2, 0x5bcf2, indexCPS2Sprites_SFA3Assets, 0xd3 },
    { L"Title Screen 3.2 - Fade 2", 0x5bcb2, 0x5bcd2, indexCPS2Sprites_SFA3Assets, 0xd3 },
    { L"Title Screen 3.3 - Fade 3", 0x5bc92, 0x5bcb2, indexCPS2Sprites_SFA3Assets, 0xd3 },
    { L"Title Screen 4.0 - Main", 0x5bd72, 0x5bd92, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 4.1 - Fade 1", 0x5bd52, 0x5bd72, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 4.2 - Fade 2", 0x5bd32, 0x5bd52, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 4.3.1 - Animation Main 1", 0x3bcf2, 0x3bd12, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 4.3.2 - Animation Main 2", 0x5bd12, 0x5bd32, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 4.4 - Animation 1", 0x3bd12, 0x3bd32, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 4.5 - Animation 2", 0x3bd32, 0x3bd52, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 4.6 - Animation 3", 0x3bd52, 0x3bd72, indexCPS2Sprites_SFA3Assets, 0xd4 },
    { L"Title Screen 5.0 - Main", 0x5bdf2, 0x5be12, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 5.1 - Fade 1", 0x5bdd2, 0x5bdf2, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 5.2 - Fade 2", 0x5bdb2, 0x5bdd2, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 5.3.1 - Animation Main 1", 0x5bd92, 0x5bdb2, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 5.3.2 - Animation Main 2", 0x3bd72, 0x3bd92, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 5.4 - Animation 1", 0x3bd92, 0x3bdb2, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 5.5 - Animation 2", 0x3bdb2, 0x3bdd2, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 5.6 - Animation 3", 0x3bdd2, 0x3bdf2, indexCPS2Sprites_SFA3Assets, 0xd5 },
    { L"Title Screen 8x8 1.0 - Main", 0x628b2, 0x628d2, indexCPS2Sprites_SFA3Assets, 0xcd },
    { L"Title Screen 8x8 1.1 - Fade 1", 0x62892, 0x628b2, indexCPS2Sprites_SFA3Assets, 0xcd },
    { L"Title Screen 8x8 1.2 - Fade 2", 0x62872, 0x62892, indexCPS2Sprites_SFA3Assets, 0xcd },
    { L"Title Screen 8x8 1.3 - Fade 3", 0x62852, 0x62872, indexCPS2Sprites_SFA3Assets, 0xcd },
    { L"Title Screen 32x32 1.0 - Cream Main", 0x648f2, 0x64912, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 1.1 - Cream Fade 1", 0x648d2, 0x648f2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 1.2 - Cream Fade 2", 0x648b2, 0x648d2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 2.0 - Red Main", 0x649d2, 0x649f2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 2.1 - Red Fade 1", 0x649b2, 0x649d2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 2.2 - Red Fade 2", 0x64992, 0x649b2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 3.0 - Green Main", 0x64a32, 0x64a52, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 3.1 - Green Fade 1", 0x64a12, 0x64a32, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 3.2 - Green Fade 2", 0x649f2, 0x64a12, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 4.0 - Blue Main", 0x64a92, 0x64ab2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 4.1 - Blue Fade 1", 0x64a72, 0x64a92, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 4.2 - Blue Fade 2", 0x64a52, 0x64a72, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 5.0 - Light Blue Main", 0x64af2, 0x64b12, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 5.1 - Light Blue Fade 1", 0x64ad2, 0x64af2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 5.2 - Light Blue Fade 2", 0x64ab2, 0x64ad2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 32x32 0.4 - Shared Fade 3", 0x64892, 0x648b2, indexCPS2Sprites_SFA3Assets, 0xd0 },
    { L"Title Screen 16x16 1.1.0 - Main", 0x63b92, 0x63bb2, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.1.1 - Fade 1", 0x63b72, 0x63b92, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.1.2 - Fade 2", 0x63b52, 0x63b72, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.1.3 - Fade 3", 0x63b32, 0x63b52, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.1 - Animation 1", 0x635f2, 0x63612, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.2 - Animation 2", 0x63612, 0x63632, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.3 - Animation 3", 0x63632, 0x63652, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.4 - Animation 4", 0x63652, 0x63672, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.5 - Animation 5", 0x63672, 0x63692, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.6 - Animation 6", 0x63692, 0x636b2, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.7 - Animation 7", 0x636b2, 0x636d2, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.8 - Animation 8", 0x636d2, 0x636f2, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.9 - Animation 9", 0x636f2, 0x63712, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.10 - Animation 10", 0x63712, 0x63732, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.11 - Animation 11", 0x63732, 0x63752, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.12 - Animation 12", 0x63752, 0x63772, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.13 - Animation 13", 0x63772, 0x63792, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 1.2.14 - Animation 14", 0x63792, 0x637b2, indexCPS2Sprites_SFA3Assets, 0xce },
    { L"Title Screen 16x16 2.1.0 - Main", 0x63c12, 0x63c32, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.1.1 - Fade 1", 0x63bf2, 0x63c12, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.1.2 - Fade 2", 0x63bd2, 0x63bf2, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.1.3 - Fade 3", 0x63bb2, 0x63bd2, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.1 - Animation 1", 0x637b2, 0x637d2, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.2 - Animation 2", 0x637d2, 0x637f2, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.3 - Animation 3", 0x637f2, 0x63812, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.4 - Animation 4", 0x63812, 0x63832, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.5 - Animation 5", 0x63832, 0x63852, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.6 - Animation 6", 0x63852, 0x63872, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.7 - Animation 7", 0x63872, 0x63892, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.8 - Animation 8", 0x63892, 0x638b2, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.9 - Animation 9", 0x638b2, 0x638d2, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.10 - Animation 10", 0x638d2, 0x638f2, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.11 - Animation 11", 0x638f2, 0x63912, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.12 - Animation 12", 0x63912, 0x63932, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.13 - Animation 13", 0x63932, 0x63952, indexCPS2Sprites_SFA3Assets, 0xcf },
    { L"Title Screen 16x16 2.2.14 - Animation 14", 0x63952, 0x63972, indexCPS2Sprites_SFA3Assets, 0xcf },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_BONUS[] =
{
    { L"Capcom Intro Logo", 0x40172, 0x40192, indexCPS2Sprites_SFA3Assets, 0xd6 },
    { L"Capcom Logo 2", 0x3bc72, 0x3bc92, indexCPS2Sprites_SFA3Assets, 0xd6 },
    { L"QSound", 0x49fb2, 0x4a072, indexCPS2Sprites_SFA3Assets, 0xc1 },
    { L"Title Screen Text 1", 0x3bc52, 0x3bc72, indexCPS2Sprites_SFA3Assets, 0xd7 },
    { L"Title Screen Text 2", 0x3c052, 0x3c072, indexCPS2Sprites_SFA3Assets, 0xd8 },
    { L"Main Text", 0x3c452, 0x3c472, indexCPS2Sprites_SFA3Assets, 0xd9 },
    { L"X-Ism Screen Transition", 0x5fad2, 0x5faf2, indexCPS2Sprites_SFA3Assets, 0xc8 },
    { L"A-Ism Screen Transition", 0x5faf2, 0x5fb12, indexCPS2Sprites_SFA3Assets, 0xc6 },
    { L"V-Ism Screen Transition", 0x5fb12, 0x5fb32, indexCPS2Sprites_SFA3Assets, 0xc7 },
    { L"X-Ism Finish 1", 0x65412, 0x65432, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 2", 0x65432, 0x65452, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 3", 0x65452, 0x65472, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 4", 0x65472, 0x65492, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 5", 0x65492, 0x654b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 6", 0x654b2, 0x654d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 7", 0x654d2, 0x654f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 8", 0x654f2, 0x65512, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 9", 0x65512, 0x65532, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 10", 0x65532, 0x65552, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 11", 0x65552, 0x65572, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 12", 0x65572, 0x65592, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 13", 0x65592, 0x655b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 14", 0x655b2, 0x655d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 15", 0x655d2, 0x655f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 16", 0x655f2, 0x65612, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 17", 0x65612, 0x65632, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 18", 0x65632, 0x65652, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 19", 0x65652, 0x65672, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 20", 0x65672, 0x65692, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 21", 0x65692, 0x656b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 22", 0x656b2, 0x656d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 23", 0x656d2, 0x656f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 24", 0x656f2, 0x65712, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 25", 0x65712, 0x65732, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 26", 0x65732, 0x65752, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 27", 0x65752, 0x65772, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"X-Ism Finish 28", 0x65772, 0x65792, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 1", 0x65e92, 0x65eb2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 2", 0x65eb2, 0x65ed2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 3", 0x65ed2, 0x65ef2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 4", 0x65ef2, 0x65f12, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 5", 0x65f12, 0x65f32, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 6", 0x65f32, 0x65f52, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 7", 0x65f52, 0x65f72, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 8", 0x65f72, 0x65f92, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 9", 0x65f92, 0x65fb2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 10", 0x65fb2, 0x65fd2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 11", 0x65fd2, 0x65ff2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 12", 0x65ff2, 0x66012, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 13", 0x66012, 0x66032, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 14", 0x66032, 0x66052, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 15", 0x66052, 0x66072, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 16", 0x66072, 0x66092, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 17", 0x66092, 0x660b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 18", 0x660b2, 0x660d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 19", 0x660d2, 0x660f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 20", 0x660f2, 0x66112, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 21", 0x66112, 0x66132, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 22", 0x66132, 0x66152, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 23", 0x66152, 0x66172, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 24", 0x66172, 0x66192, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 25", 0x66192, 0x661b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 26", 0x661b2, 0x661d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 27", 0x661d2, 0x661f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"A-Ism Finish 28", 0x661f2, 0x66212, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 1", 0x66212, 0x66232, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 2", 0x66232, 0x66252, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 3", 0x66252, 0x66272, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 4", 0x66272, 0x66292, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 5", 0x66292, 0x662b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 6", 0x662b2, 0x662d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 7", 0x662d2, 0x662f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 8", 0x662f2, 0x66312, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 9", 0x66312, 0x66332, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 10", 0x66332, 0x66352, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 11", 0x66352, 0x66372, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 12", 0x66372, 0x66392, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 13", 0x66392, 0x663b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 14", 0x663b2, 0x663d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 15", 0x663d2, 0x663f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 16", 0x663f2, 0x66412, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 17", 0x66412, 0x66432, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 18", 0x66432, 0x66452, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 19", 0x66452, 0x66472, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 20", 0x66472, 0x66492, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 21", 0x66492, 0x664b2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 22", 0x664b2, 0x664d2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 23", 0x664d2, 0x664f2, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 24", 0x664f2, 0x66512, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 25", 0x66512, 0x66532, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 26", 0x66532, 0x66552, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 27", 0x66552, 0x66572, indexCPS2Sprites_SFA3Assets, 0xca },
    { L"V-Ism Finish 28", 0x66572, 0x66592, indexCPS2Sprites_SFA3Assets, 0xca },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_CSEL[] =
{
    { L"Character Select Icons", 0x3c1b2, 0x3c2f2, indexCPS2Sprites_SFA3Assets, 0xbd },
    { L"Ism Select - X-Ism 1", 0x5ef32, 0x5ef52, indexCPS2Sprites_SFA3Assets, 0xc0 },
    { L"Ism Select - X-Ism 2", 0x5ef52, 0x5ef72, indexCPS2Sprites_SFA3Assets, 0xc0 },
    { L"Ism Select - X-Ism 3", 0x5ef72, 0x5ef92, indexCPS2Sprites_SFA3Assets, 0xc0 },
    { L"Ism Select - X-Ism 4", 0x5ef92, 0x5efb2, indexCPS2Sprites_SFA3Assets, 0xc0 },
    { L"Ism Select - A-Ism 1", 0x5efb2, 0x5efd2, indexCPS2Sprites_SFA3Assets, 0xbe },
    { L"Ism Select - A-Ism 2", 0x5efd2, 0x5eff2, indexCPS2Sprites_SFA3Assets, 0xbe },
    { L"Ism Select - A-Ism 3", 0x5eff2, 0x5f012, indexCPS2Sprites_SFA3Assets, 0xbe },
    { L"Ism Select - A-Ism 4", 0x5f012, 0x5f032, indexCPS2Sprites_SFA3Assets, 0xbe },
    { L"Ism Select - V-Ism 1", 0x5f032, 0x5f052, indexCPS2Sprites_SFA3Assets, 0xbf },
    { L"Ism Select - V-Ism 2", 0x5f052, 0x5f072, indexCPS2Sprites_SFA3Assets, 0xbf },
    { L"Ism Select - V-Ism 3", 0x5f072, 0x5f092, indexCPS2Sprites_SFA3Assets, 0xbf },
    { L"Ism Select - V-Ism 4", 0x5f092, 0x5f0b2, indexCPS2Sprites_SFA3Assets, 0xbf },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_CGROUP1[] =
{
    { L"Character Select & VS", 0x5e852, 0x5e9b2, indexCPS2Sprites_SFA3Assets, 0xda },
    { L"Character Select VS BG 16x16", 0x63cf2, 0x63d12, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Character Select VS BG 32x32", 0x64b32, 0x64b52, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Story Mode", 0x5fb32, 0x5fbb2, indexCPS2Sprites_SFA3Assets, 0xc9 },
    { L"Story Mode BG 16x16", 0x63d12, 0x63d32, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Story Mode BG 32x32", 0x64b52, 0x64b72, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Arcade Ladder", 0x5e352, 0x5e452, indexCPS2Sprites_SFA3Assets, 0xba },
    { L"Arcade Ladder BG 16x16", 0x63cd2, 0x63cf2, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Arcade Ladder BG 32x32", 0x64b12, 0x64b32, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Map Locations 1", 0x5cf32, 0x5cf52, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 2", 0x5cf52, 0x5cf72, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 3", 0x5cf72, 0x5cf92, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 4", 0x5cf92, 0x5cfb2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 5", 0x5cfb2, 0x5cfd2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 6", 0x5cfd2, 0x5cff2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 7", 0x5cff2, 0x5d012, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 8", 0x5d012, 0x5d032, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 9", 0x5d032, 0x5d052, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 10", 0x5d052, 0x5d072, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 11", 0x5d072, 0x5d092, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 12", 0x5d092, 0x5d0b2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 13", 0x5d0b2, 0x5d0d2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Section 1 - 1", 0x5ce72, 0x5ce92, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 2", 0x5ce92, 0x5ceb2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 3", 0x5ceb2, 0x5ced2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 4", 0x5ced2, 0x5cef2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 5", 0x5cef2, 0x5cf12, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 6", 0x5cf12, 0x5cf32, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 2 - 1", 0x5cc32, 0x5cc52, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 2", 0x5cc52, 0x5cc72, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 3", 0x5cc72, 0x5cc92, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 4", 0x5cc92, 0x5ccb2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 5", 0x5ccb2, 0x5ccd2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 6", 0x5ccd2, 0x5ccf2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 7", 0x5ccf2, 0x5cd12, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 8", 0x5cd12, 0x5cd32, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 9", 0x5cd32, 0x5cd52, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 10", 0x5cd52, 0x5cd72, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 11", 0x5cd72, 0x5cd92, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 12", 0x5cd92, 0x5cdb2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 13", 0x5cdb2, 0x5cdd2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 3 - 1", 0x5cdd2, 0x5cdf2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 2", 0x5cdf2, 0x5ce12, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 3", 0x5ce12, 0x5ce32, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 4", 0x5ce32, 0x5ce52, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 5", 0x5ce52, 0x5ce72, indexCPS2Sprites_SFA3Assets, 0xc5 },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_CGROUP2[] =
{
    { L"Character Select & VS", 0x5e9b2, 0x5eb12, indexCPS2Sprites_SFA3Assets, 0xda },
    { L"Character Select VS BG 16x16", 0x63d52, 0x63d72, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Character Select VS BG 32x32", 0x64b92, 0x64bb2, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Story Mode", 0x5fbb2, 0x5fc32, indexCPS2Sprites_SFA3Assets, 0xc9 },
    { L"Story Mode BG 16x16", 0x63d72, 0x63d92, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Story Mode BG 32x32", 0x64bb2, 0x64bd2, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Arcade Ladder", 0x5e452, 0x5e552, indexCPS2Sprites_SFA3Assets, 0xba },
    { L"Arcade Ladder BG 16x16", 0x63d32, 0x63d52, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Arcade Ladder BG 32x32", 0x64b72, 0x64b92, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Map Locations 1", 0x5d3d2, 0x5d3f2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 2", 0x5d3f2, 0x5d412, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 3", 0x5d412, 0x5d432, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 4", 0x5d432, 0x5d452, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 5", 0x5d452, 0x5d472, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 6", 0x5d472, 0x5d492, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 7", 0x5d492, 0x5d4b2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 8", 0x5d4b2, 0x5d4d2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 9", 0x5d4d2, 0x5d4f2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 10", 0x5d4f2, 0x5d512, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 11", 0x5d512, 0x5d532, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 12", 0x5d532, 0x5d552, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 13", 0x5d552, 0x5d572, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Section 1 - 1", 0x5d312, 0x5d332, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 2", 0x5d332, 0x5d352, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 3", 0x5d352, 0x5d372, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 4", 0x5d372, 0x5d392, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 5", 0x5d392, 0x5d3b2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 6", 0x5d3b2, 0x5d3d2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 2 - 1", 0x5d0d2, 0x5d0f2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 2", 0x5d0f2, 0x5d112, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 3", 0x5d112, 0x5d132, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 4", 0x5d132, 0x5d152, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 5", 0x5d152, 0x5d172, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 6", 0x5d172, 0x5d192, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 7", 0x5d192, 0x5d1b2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 8", 0x5d1b2, 0x5d1d2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 9", 0x5d1d2, 0x5d1f2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 10", 0x5d1f2, 0x5d212, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 11", 0x5d212, 0x5d232, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 12", 0x5d232, 0x5d252, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 13", 0x5d252, 0x5d272, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 3 - 1", 0x5d272, 0x5d292, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 2", 0x5d292, 0x5d2b2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 3", 0x5d2b2, 0x5d2d2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 4", 0x5d2d2, 0x5d2f2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 5", 0x5d2f2, 0x5d312, indexCPS2Sprites_SFA3Assets, 0xc5 },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_CGROUP3[] =
{
    { L"Character Select & VS", 0x5eb12, 0x5ec72, indexCPS2Sprites_SFA3Assets, 0xda },
    { L"Character Select VS BG 16x16", 0x63db2, 0x63dd2, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Character Select VS BG 32x32", 0x64bf2, 0x64c12, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Story Mode", 0x5fc32, 0x5fcb2, indexCPS2Sprites_SFA3Assets, 0xc9 },
    { L"Story Mode BG 16x16", 0x63dd2, 0x63df2, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Story Mode BG 32x32", 0x64c12, 0x64c32, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Arcade Ladder", 0x5e552, 0x5e652, indexCPS2Sprites_SFA3Assets, 0xba },
    { L"Arcade Ladder BG 16x16", 0x63d92, 0x63db2, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Arcade Ladder BG 32x32", 0x64bd2, 0x64bf2, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Map Locations 1", 0x5d872, 0x5d892, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 2", 0x5d892, 0x5d8b2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 3", 0x5d8b2, 0x5d8d2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 4", 0x5d8d2, 0x5d8f2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 5", 0x5d8f2, 0x5d912, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 6", 0x5d912, 0x5d932, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 7", 0x5d932, 0x5d952, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 8", 0x5d952, 0x5d972, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 9", 0x5d972, 0x5d992, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 10", 0x5d992, 0x5d9b2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 11", 0x5d9b2, 0x5d9d2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 12", 0x5d9d2, 0x5d9f2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 13", 0x5d9f2, 0x5da12, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Section 1 - 1", 0x5d7b2, 0x5d7d2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 2", 0x5d7d2, 0x5d7f2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 3", 0x5d7f2, 0x5d812, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 4", 0x5d812, 0x5d832, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 5", 0x5d832, 0x5d852, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 6", 0x5d852, 0x5d872, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 2 - 1", 0x5d572, 0x5d592, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 2", 0x5d592, 0x5d5b2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 3", 0x5d5b2, 0x5d5d2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 4", 0x5d5d2, 0x5d5f2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 5", 0x5d5f2, 0x5d612, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 6", 0x5d612, 0x5d632, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 7", 0x5d632, 0x5d652, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 8", 0x5d652, 0x5d672, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 9", 0x5d672, 0x5d692, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 10", 0x5d692, 0x5d6b2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 11", 0x5d6b2, 0x5d6d2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 12", 0x5d6d2, 0x5d6f2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 13", 0x5d6f2, 0x5d712, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 3 - 1", 0x5d712, 0x5d732, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 2", 0x5d732, 0x5d752, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 3", 0x5d752, 0x5d772, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 4", 0x5d772, 0x5d792, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 5", 0x5d792, 0x5d7b2, indexCPS2Sprites_SFA3Assets, 0xc5 },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_CGROUP4[] =
{
    { L"Character Select & VS", 0x5ec72, 0x5edd2, indexCPS2Sprites_SFA3Assets, 0xda },
    { L"Character Select VS BG 16x16", 0x63e12, 0x63e32, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Character Select VS BG 32x32", 0x64c52, 0x64c72, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Story Mode", 0x5fcb2, 0x5fd32, indexCPS2Sprites_SFA3Assets, 0xc9 },
    { L"Story Mode BG 16x16", 0x63e32, 0x63e52, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Story Mode BG 32x32", 0x64c72, 0x64c92, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Arcade Ladder", 0x5e652, 0x5e752, indexCPS2Sprites_SFA3Assets, 0xba },
    { L"Arcade Ladder BG 16x16", 0x63df2, 0x63e12, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Arcade Ladder BG 32x32", 0x64c32, 0x64c52, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Map Locations 1", 0x5dd12, 0x5dd32, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 2", 0x5dd32, 0x5dd52, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 3", 0x5dd52, 0x5dd72, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 4", 0x5dd72, 0x5dd92, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 5", 0x5dd92, 0x5ddb2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 6", 0x5ddb2, 0x5ddd2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 7", 0x5ddd2, 0x5ddf2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 8", 0x5ddf2, 0x5de12, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 9", 0x5de12, 0x5de32, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 10", 0x5de32, 0x5de52, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 11", 0x5de52, 0x5de72, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 12", 0x5de72, 0x5de92, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 13", 0x5de92, 0x5deb2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Section 1 - 1", 0x5dc52, 0x5dc72, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 2", 0x5dc72, 0x5dc92, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 3", 0x5dc92, 0x5dcb2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 4", 0x5dcb2, 0x5dcd2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 5", 0x5dcd2, 0x5dcf2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 6", 0x5dcf2, 0x5dd12, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 2 - 1", 0x5da12, 0x5da32, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 2", 0x5da32, 0x5da52, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 3", 0x5da52, 0x5da72, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 4", 0x5da72, 0x5da92, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 5", 0x5da92, 0x5dab2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 6", 0x5dab2, 0x5dad2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 7", 0x5dad2, 0x5daf2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 8", 0x5daf2, 0x5db12, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 9", 0x5db12, 0x5db32, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 10", 0x5db32, 0x5db52, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 11", 0x5db52, 0x5db72, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 12", 0x5db72, 0x5db92, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 13", 0x5db92, 0x5dbb2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 3 - 1", 0x5dbb2, 0x5dbd2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 2", 0x5dbd2, 0x5dbf2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 3", 0x5dbf2, 0x5dc12, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 4", 0x5dc12, 0x5dc32, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 5", 0x5dc32, 0x5dc52, indexCPS2Sprites_SFA3Assets, 0xc5 },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_CGROUP5[] =
{
    { L"Character Select & VS", 0x5edd2, 0x5ef32, indexCPS2Sprites_SFA3Assets, 0xda },
    { L"Character Select VS BG 16x16", 0x63e72, 0x63e92, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Character Select VS BG 32x32", 0x64cb2, 0x64cd2, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Story Mode", 0x5fd32, 0x5fdb2, indexCPS2Sprites_SFA3Assets, 0xc9 },
    { L"Story Mode BG 16x16", 0x63e92, 0x63eb2, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Story Mode BG 32x32", 0x64cd2, 0x64cf2, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Arcade Ladder", 0x5e752, 0x5e852, indexCPS2Sprites_SFA3Assets, 0xba },
    { L"Arcade Ladder BG 16x16", 0x63e52, 0x63e72, indexCPS2Sprites_SFA3Assets, 0xbb },
    { L"Arcade Ladder BG 32x32", 0x64c92, 0x64cb2, indexCPS2Sprites_SFA3Assets, 0xbc },
    { L"Map Locations 1", 0x5e1b2, 0x5e1d2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 2", 0x5e1d2, 0x5e1f2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 3", 0x5e1f2, 0x5e212, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 4", 0x5e212, 0x5e232, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 5", 0x5e232, 0x5e252, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 6", 0x5e252, 0x5e272, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 7", 0x5e272, 0x5e292, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 8", 0x5e292, 0x5e2b2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 9", 0x5e2b2, 0x5e2d2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 10", 0x5e2d2, 0x5e2f2, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 11", 0x5e2f2, 0x5e312, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 12", 0x5e312, 0x5e332, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Locations 13", 0x5e332, 0x5e352, indexCPS2Sprites_SFA3Assets, 0xc2 },
    { L"Map Section 1 - 1", 0x5e0f2, 0x5e112, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 2", 0x5e112, 0x5e132, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 3", 0x5e132, 0x5e152, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 4", 0x5e152, 0x5e172, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 5", 0x5e172, 0x5e192, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 1 - 6", 0x5e192, 0x5e1b2, indexCPS2Sprites_SFA3Assets, 0xc3 },
    { L"Map Section 2 - 1", 0x5deb2, 0x5ded2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 2", 0x5ded2, 0x5def2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 3", 0x5def2, 0x5df12, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 4", 0x5df12, 0x5df32, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 5", 0x5df32, 0x5df52, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 6", 0x5df52, 0x5df72, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 7", 0x5df72, 0x5df92, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 8", 0x5df92, 0x5dfb2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 9", 0x5dfb2, 0x5dfd2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 10", 0x5dfd2, 0x5dff2, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 11", 0x5dff2, 0x5e012, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 12", 0x5e012, 0x5e032, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 2 - 13", 0x5e032, 0x5e052, indexCPS2Sprites_SFA3Assets, 0xc4 },
    { L"Map Section 3 - 1", 0x5e052, 0x5e072, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 2", 0x5e072, 0x5e092, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 3", 0x5e092, 0x5e0b2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 4", 0x5e0b2, 0x5e0d2, indexCPS2Sprites_SFA3Assets, 0xc5 },
    { L"Map Section 3 - 5", 0x5e0d2, 0x5e0f2, indexCPS2Sprites_SFA3Assets, 0xc5 },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_ROUND[] =
{
    { L"Japan (Sunset) - Ryu (Start)", 0x5f112, 0x5f132, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Japan (Sunset) - Ryu (Finish)", 0x5f412, 0x5f432, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"USA (Hotel) - Ken (Start)", 0x5f132, 0x5f152, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"USA (Hotel) - Ken (Finish)", 0x5f432, 0x5f452, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Japan (Cave) - Akuma (Start)", 0x5f152, 0x5f172, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Japan (Cave) - Akuma (Finish)", 0x5f452, 0x5f472, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"USA (Hangar) - Nash (Start)", 0x5f172, 0x5f192, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"USA (Hangar) - Nash (Finish)", 0x5f472, 0x5f492, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"China - Chun-Li (Start)", 0x5f192, 0x5f1b2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"China - Chun-Li (Finish)", 0x5f492, 0x5f4b2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Thailand (Temple) - Adon (Start)", 0x5f1b2, 0x5f1d2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Thailand (Temple) - Adon (Finish)", 0x5f4b2, 0x5f4d2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"USA (Japanese) - Sodom (Start)", 0x5f1d2, 0x5f1f2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"USA (Japanese) - Sodom (Finish)", 0x5f4d2, 0x5f4f2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"USA (Metro City) - Guy (Start)", 0x5f1f2, 0x5f212, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"USA (Metro City) - Guy (Finish)", 0x5f4f2, 0x5f512, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"England - Birdie (Start)", 0x5f212, 0x5f232, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"England - Birdie (Finish)", 0x5f512, 0x5f532, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Italy - Rose (Start)", 0x5f232, 0x5f252, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Italy - Rose (Finish)", 0x5f532, 0x5f552, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Point 48106 - M.Bison & Juni/Juli (Start)", 0x5f252, 0x5f272, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Point 48106 - M.Bison & Juni/Juli (Finish)", 0x5f552, 0x5f572, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Thailand (Statue) - Sagat (Start)", 0x5f272, 0x5f292, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Thailand (Statue) - Sagat (Finish)", 0x5f572, 0x5f592, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Japan (Swings) - Dan (Start)", 0x5f292, 0x5f2b2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Japan (Swings) - Dan (Finish)", 0x5f592, 0x5f5b2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Japan (Market) - Karin & Sakura (Start)", 0x5f2b2, 0x5f2d2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Japan (Market) - Karin & Sakura (Finish)", 0x5f5b2, 0x5f5d2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"USA (Military) - Rolento (Start)", 0x5f2d2, 0x5f2f2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"USA (Military) - Rolento (Finish)", 0x5f5d2, 0x5f5f2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"India - Dhalsim (Start)", 0x5f2f2, 0x5f312, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"India - Dhalsim (Finish)", 0x5f5f2, 0x5f612, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"USSR - Zangief (Start)", 0x5f312, 0x5f332, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"USSR - Zangief (Finish)", 0x5f612, 0x5f632, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Hong Kong - Gen (Start)", 0x5f332, 0x5f352, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Hong Kong - Gen (Finish)", 0x5f632, 0x5f652, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Greece - Cammy (Start)", 0x5f352, 0x5f372, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Greece - Cammy (Finish)", 0x5f652, 0x5f672, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Japan (Sumo Ring) - E.Honda (Start)", 0x5f372, 0x5f392, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Japan (Sumo Ring) - E.Honda (Finish)", 0x5f672, 0x5f692, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Brazil - Blanka (Start)", 0x5f392, 0x5f3b2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Brazil - Blanka (Finish)", 0x5f692, 0x5f6b2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Japan (Seaside) - R.Mika (Start)", 0x5f3b2, 0x5f3d2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Japan (Seaside) - R.Mika (Finish)", 0x5f6b2, 0x5f6d2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"USA (Prison) - Cody (Start)", 0x5f3d2, 0x5f3f2, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"USA (Prison) - Cody (Finish)", 0x5f6d2, 0x5f6f2, indexCPS2Sprites_SFA3Assets, 0xcb },
    { L"Spain - Vega (Start)", 0x5f3f2, 0x5f412, indexCPS2Sprites_SFA3Assets, 0xcc },
    { L"Spain - Vega (Finish)", 0x5f6f2, 0x5f712, indexCPS2Sprites_SFA3Assets, 0xcb },
};

const sGame_PaletteDataset SFA3_A_PALETTES_BONUS_DOLLS[] =
{
    { L"X-Ism Punch", 0x4c2d2, 0x4c332, indexCPS2Sprites_SFA3Assets, 0xdb },
    { L"X-Ism Kick", 0x4c332, 0x4c392, indexCPS2Sprites_SFA3Assets, 0xdb },
    { L"A-Ism Punch", 0x4c392, 0x4c3f2, indexCPS2Sprites_SFA3Assets, 0xdb },
    { L"A-Ism Kick", 0x4c3f2, 0x4c452, indexCPS2Sprites_SFA3Assets, 0xdb },
    { L"V-Ism Punch", 0x4c452, 0x4c4b2, indexCPS2Sprites_SFA3Assets, 0xdb },
    { L"V-Ism Kick", 0x4c4b2, 0x4c512, indexCPS2Sprites_SFA3Assets, 0xdb },
};

#ifdef USE_OLD_STYLE_SFA3_STAGES
const sGame_PaletteDataset SFA3_A_STAGES_AKUMA_NODE[] =
{
    { L"Rear Cave Wall", 0x3C812, 0x3C8D2, indexCPS2Sprites_SFA3Assets, 0x0A },
    { L"Rear Candle Glows 1", 0x61392, 0x613B2, indexCPS2Sprites_SFA3Assets, 0x0B },
    { L"Rear Candle Glows 2", 0x613B2, 0x613D2, indexCPS2Sprites_SFA3Assets, 0x0B },
    { L"Right Cave Wall Ceiling", 0x47CD2, 0x47CF2, indexCPS2Sprites_SFA3Assets, 0x0C },
    { L"Hang Tags / Shadow", 0x38612, 0x38632, indexCPS2Sprites_SFA3Assets, 0x0D },
    { L"Right Candles Glow 1", 0x4C572, 0x4C592, indexCPS2Sprites_SFA3Assets, 0x0E },
    { L"Right Candles Glow 2", 0x4C5B2, 0x4C5D2, indexCPS2Sprites_SFA3Assets, 0x0E },
    { L"Wall Glow", 0x385B2, 0x385D2, indexCPS2Sprites_SFA3Assets, 0x0F },
    { L"Main Ground", 0x40F32, 0x41012, indexCPS2Sprites_SFA3Assets, 0x10 },
    { L"Left Candles Glow 1", 0x62A52, 0x62A72, indexCPS2Sprites_SFA3Assets, 0x11 },
    { L"Left Candles Glow 2", 0x62A72, 0x62A92, indexCPS2Sprites_SFA3Assets, 0x11 },
    { L"Left Rope Candles 1", 0x4C552, 0x4C572, indexCPS2Sprites_SFA3Assets, 0x12 },
    { L"Left Rope Candles 2", 0x4C592, 0x4C5B2, indexCPS2Sprites_SFA3Assets, 0x12 },
    { L"Unknown Sprites 1", 0x38572, 0x38592 },
    { L"Unknown Sprites 2", 0x38592, 0x385B2 },
    { L"Unknown Sprites 3", 0x385D2, 0x385F2 },
    { L"Unknown Sprites 4", 0x385F2, 0x38612 },
};

const sGame_PaletteDataset SFA3_A_STAGES_KEN_NODE[] =
{
    { L"Read Building 1", 0x3C4F2, 0x3C6D2, indexCPS2Sprites_SFA3Assets, 0x13 },
    { L"Rear Building 2", 0x3C6D2, 0x3C812, indexCPS2Sprites_SFA3Assets, 0x14 },
    { L"Left Building / Palms 1", 0x40B32, 0x40D32, indexCPS2Sprites_SFA3Assets, 0x15 },
    { L"Left Building / Palms 2", 0x40D32, 0x40F32, indexCPS2Sprites_SFA3Assets, 0x16 },
    
    { L"Fountain / Flags / Palms 1", 0x47932, 0x47B32, indexCPS2Sprites_SFA3Assets, 0x17 },
    { L"Fountain / Flags / Palms 2", 0x47B32, 0x47CD2, indexCPS2Sprites_SFA3Assets, 0x18 },
    { L"Fountain Stream", 0x38512, 0x38532, indexCPS2Sprites_SFA3Assets, 0x19 },
    { L"Bartender", 0x384D2, 0x384F2, indexCPS2Sprites_SFA3Assets, 0x1a },
    { L"Girls Lounging", 0x384B2, 0x384D2, indexCPS2Sprites_SFA3Assets, 0x1b },
    { L"Couple @ Table", 0x384F2, 0x38512, indexCPS2Sprites_SFA3Assets, 0x1c },
    { L"Plants?", 0x38532, 0x38552, indexCPS2Sprites_SFA3Assets, 0x1d },
    { L"Post & Statue", 0x38552, 0x38572, indexCPS2Sprites_SFA3Assets, 0x1e },
};

const sGame_PaletteDataset SFA3_A_STAGES_RYU_NODE[] =
{
    { L"Sunset / Sea", 0x3C4B2, 0x3C4F2, indexCPS2Sprites_SFA3Assets, 0x00 },
    { L"Castle", 0x383F2, 0x38432, indexCPS2Sprites_SFA3Assets, 0x03 },
    { L"Forest / Cliff Tree / Waterfall Hill", 0x477F2, 0x47932, indexCPS2Sprites_SFA3Assets, 0x04 },
    { L"Waterfall Landing Anim 1", 0x63FB2, 0x63FD2, indexCPS2Sprites_SFA3Assets, 0x01 },
    { L"Waterfall Landing Anim 2", 0x63FD2, 0x63FF2, indexCPS2Sprites_SFA3Assets, 0x01 },
    { L"Waterfall Landing Anim 3", 0x63FF2, 0x64012, indexCPS2Sprites_SFA3Assets, 0x01 },
    { L"Waterfall Landing Anim 4", 0x64012, 0x64032, indexCPS2Sprites_SFA3Assets, 0x01 },
    { L"Waterfall Stream Anim 1", 0x63F32, 0x63F52, indexCPS2Sprites_SFA3Assets, 0x02 },
    { L"Waterfall Stream Anim 2", 0x63F52, 0x63F72, indexCPS2Sprites_SFA3Assets, 0x02 },
    { L"Waterfall Stream Anim 3", 0x63F72, 0x63F92, indexCPS2Sprites_SFA3Assets, 0x02 },
    { L"Waterfall Stream Anim 4", 0x63F92, 0x63FB2, indexCPS2Sprites_SFA3Assets, 0x02 },
    { L"Main Ground / Big Tree Branches", 0x40992, 0x40B32, indexCPS2Sprites_SFA3Assets, 0x05 },
    { L"Tree Trunk Right Side", 0x38452, 0x38472, indexCPS2Sprites_SFA3Assets, 0x06 },
    { L"Tree Leaves", 0x38472, 0x38492, indexCPS2Sprites_SFA3Assets, 0x07 },
    { L"Grass Left Side", 0x38432, 0x38452, indexCPS2Sprites_SFA3Assets, 0x08 },
    { L"Fighter Shadow", 0x38492, 0x384B2, indexCPS2Sprites_SFA3Assets, 0x09 },
};

const sGame_PaletteDataset SFA3_A_STAGES_NASH_NODE[] =
{
    { L"Cockpit/Top (Plane)/Landing Gear", 0x47CF2, 0x47DF2, indexCPS2Sprites_SFA3Assets, 0x1f },
    { L"Plane and Floor Part 1", 0x41012, 0x41212, indexCPS2Sprites_SFA3Assets, 0x20 },
    { L"Plane and Floor Part 2", 0x41212, 0x413D2, indexCPS2Sprites_SFA3Assets, 0x21 },
    { L"Rear Windows Metal Ceiling Part 1", 0x3C8D2, 0x3CA72, indexCPS2Sprites_SFA3Assets, 0x22 },
    { L"Rear Windows Metal Ceiling Part 2", 0x3CAD2, 0x3CC72, indexCPS2Sprites_SFA3Assets, 0x23 },
    { L"Mechanic Spectators", 0x38632, 0x38652, indexCPS2Sprites_SFA3Assets, 0x25 },
    { L"Rolling Stairs Thing", 0x38652, 0x38672, indexCPS2Sprites_SFA3Assets, 0x24 },
    { L"Missile", 0x38672, 0x38692, indexCPS2Sprites_SFA3Assets, 0x26 },
    { L"Missile Tails", 0x38692, 0x386B2, indexCPS2Sprites_SFA3Assets, 0x27 },
    { L"Missile Heads", 0x386B2, 0x386D2, indexCPS2Sprites_SFA3Assets, 0x28 },
    { L"Under Plane???", 0x386D2, 0x386F2, indexCPS2Sprites_SFA3Assets, 0x29 },
};

const sGame_PaletteDataset SFA3_A_STAGES_CHUNLI_NODE[] =
{
    { L"Far Background - 8x8 (1/2)", 0x3CC72, 0x3CE72, indexCPS2Sprites_SFA3Assets, 0x2A },
    { L"Far Background - 8x8 (2/2)", 0x3CE72, 0x3CFD2, indexCPS2Sprites_SFA3Assets, 0x2B },
    { L"Mid Background - 16x16 (1/2)", 0x413D2, 0x415D2, indexCPS2Sprites_SFA3Assets, 0x2C },
    { L"Mid Background - 16x16 (2/2)", 0x415D2, 0x417D2, indexCPS2Sprites_SFA3Assets, 0x2D },
    { L"Close Background - 32x32", 0x47DF2, 0x47ED2, indexCPS2Sprites_SFA3Assets, 0x2E },
    { L"Instructor", 0x386F2, 0x38712, indexCPS2Sprites_SFA3Assets, 0x2F },
    { L"Lamp Post", 0x38712, 0x38732, indexCPS2Sprites_SFA3Assets, 0x30 },
    { L"Sign", 0x38732, 0x38752, indexCPS2Sprites_SFA3Assets, 0x31 },
    { L"Flag", 0x38752, 0x38772, indexCPS2Sprites_SFA3Assets, 0x32 },
    { L"Tree", 0x38772, 0x38792, indexCPS2Sprites_SFA3Assets, 0x33 },
    { L"Shadow", 0x38792, 0x387B2, indexCPS2Sprites_SFA3Assets, 0x34 },
};
#endif

const sGame_PaletteDataset SFA3_A_STAGES_AKUMA_NODE[] =
{
    { L"8BG.0.0.0", 0x3c812, 0x3c8d2, indexSFA3Sprites_Stages, 0x00, &pairFullyLinkedNode },
    { L"32BG.0.0.0", 0x47cd2, 0x47cf2, indexSFA3Sprites_Stages, 0x04 },
    { L"16BG.0.0.0", 0x40f32, 0x41012, indexSFA3Sprites_Stages, 0x02 },
    { L"SS.0.0.0", 0x38572, 0x38632, indexSFA3Sprites_Stages, 0x05 },
};

const sGame_PaletteDataset SFA3_A_STAGES_AKUMA_NODE_ANIMATION[] =
{
    { L"8BG.1.1.1", 0x61392, 0x613b2, indexSFA3Sprites_Stages, 0x01, &pairNextAndNext },
    { L"16BG.1.1.1", 0x62a52, 0x62a72, indexSFA3Sprites_Stages, 0x03 },
    { L"SS.1.1.1", 0x4c552, 0x4c592, indexSFA3Sprites_Stages, 0x06 },
    
    { L"8BG.1.2.1", 0x613b2, 0x613d2, indexSFA3Sprites_Stages, 0x01, &pairNextAndNext },
    { L"16BG.1.2.1", 0x62a72, 0x62a92, indexSFA3Sprites_Stages, 0x03 },
    { L"SS.1.2.1", 0x4c592, 0x4c5d2, indexSFA3Sprites_Stages, 0x06 },
};

const sGame_PaletteDataset SFA3_A_STAGES_BIRDIE_NODE[] =
{
    { L"32BG.0.0.0", 0x48552, 0x485d2, indexSFA3Sprites_Stages, 0x07, &pairFullyLinkedNode },
    { L"8BG.0.0.1", 0x3d952, 0x3dab2, indexSFA3Sprites_Stages, 0x08 },
    { L"8BG.0.0.2", 0x3dab2, 0x3dbf2, indexSFA3Sprites_Stages, 0x09 },
    { L"16BG.0.0.1", 0x42292, 0x42492, indexSFA3Sprites_Stages, 0x0a },
    { L"16BG.0.0.2", 0x42492, 0x42692, indexSFA3Sprites_Stages, 0x0b },
    { L"SS.0.0.0", 0x389f2, 0x38ab2, indexSFA3Sprites_Stages, 0x0c },
};

const sGame_PaletteDataset SFA3_A_STAGES_BIRDIE_NODE_ANIMATION[] =
{
    { L"SS.1.1.1", 0x4c6d2, 0x4c6f2, indexSFA3Sprites_Stages, 0x0d },
    { L"SS.1.2.1", 0x4c6f2, 0x4c712, indexSFA3Sprites_Stages, 0x0d },
    { L"SS.1.3.1", 0x4c712, 0x4c732, indexSFA3Sprites_Stages, 0x0d },
    { L"SS.1.4.1", 0x4c732, 0x4c752, indexSFA3Sprites_Stages, 0x0d },
    { L"SS.1.5.1", 0x4c752, 0x4c772, indexSFA3Sprites_Stages, 0x0d },
};

const sGame_PaletteDataset SFA3_A_STAGES_CHUNLI_NODE[] =
{
    { L"8BG.0.0.1", 0x3cc72, 0x3ce72, indexSFA3Sprites_Stages, 0x0e, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x3ce72, 0x3cfd2, indexSFA3Sprites_Stages, 0x0f },
    { L"16BG.0.0.1", 0x413d2, 0x415d2, indexSFA3Sprites_Stages, 0x10 },
    { L"16BG.0.0.2", 0x415d2, 0x417d2, indexSFA3Sprites_Stages, 0x11 },
    { L"SS.0.0.0", 0x386f2, 0x387b2, indexSFA3Sprites_Stages, 0x12 },
    { L"32BG.0.0.0", 0x47df2, 0x47ed2, indexSFA3Sprites_Stages, 0x13 },
};

const sGame_PaletteDataset SFA3_A_STAGES_DAN_NODE[] =
{
    { L"32BG.0.0.0", 0x489f2, 0x48b52, indexSFA3Sprites_Stages, 0x14, &pairFullyLinkedNode },
    { L"SS.0.0.0", 0x38cf2, 0x38db2, indexSFA3Sprites_Stages, 0x15 },
    { L"8BG.0.0.1", 0x3e0d2, 0x3e2d2, indexSFA3Sprites_Stages, 0x16 },
    { L"8BG.0.0.2", 0x3e2d2, 0x3e492, indexSFA3Sprites_Stages, 0x17 },
    { L"16BG.0.0.1", 0x42ef2, 0x43092, indexSFA3Sprites_Stages, 0x18 },
    { L"16BG.0.0.2", 0x43092, 0x431b2, indexSFA3Sprites_Stages, 0x19 },
};

const sGame_PaletteDataset SFA3_A_STAGES_GUY_NODE[] =
{
    { L"32BG.0.0.0", 0x484b2, 0x48552, indexSFA3Sprites_Stages, 0x1a, &pairFullyLinkedNode },
    { L"SS.0.0.0", 0x38932, 0x389f2, indexSFA3Sprites_Stages, 0x1b },
    { L"8BG.0.0.1", 0x3d692, 0x3d852, indexSFA3Sprites_Stages, 0x1e },
    { L"8BG.0.0.2", 0x3d852, 0x3d952, indexSFA3Sprites_Stages, 0x1f },
    { L"16BG.0.0.1", 0x41eb2, 0x420b2, indexSFA3Sprites_Stages, 0x20 },
    { L"16BG.0.0.2", 0x420b2, 0x42292, indexSFA3Sprites_Stages, 0x21 },
};

const sGame_PaletteDataset SFA3_A_STAGES_GUY_NODE_ANIMATION[] =
{
    { L"SS.1.1.1", 0x4c652, 0x4c672, indexSFA3Sprites_Stages, 0x1c },
    { L"SS.1.1.2", 0x4c692, 0x4c6b2, indexSFA3Sprites_Stages, 0x1c },
    { L"SS.1.2.1", 0x4c672, 0x4c692, indexSFA3Sprites_Stages, 0x1d},
    { L"SS.1.2.2", 0x4c6b2, 0x4c6d2, indexSFA3Sprites_Stages, 0x1d },
};

const sGame_PaletteDataset SFA3_A_STAGES_KEN_NODE[] =
{
    { L"8BG.0.0.1", 0x3c4f2, 0x3c6d2, indexSFA3Sprites_Stages, 0x22, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x3c6d2, 0x3c812, indexSFA3Sprites_Stages, 0x23 },
    { L"16BG.0.0.1", 0x40b32, 0x40d32, indexSFA3Sprites_Stages, 0x24 },
    { L"16BG.0.0.2", 0x40d32, 0x40f32, indexSFA3Sprites_Stages, 0x25 },
    { L"32BG.0.0.1", 0x47932, 0x47b32, indexSFA3Sprites_Stages, 0x26 },
    { L"32BG.0.0.2", 0x47b32, 0x47cd2, indexSFA3Sprites_Stages, 0x27 },
    { L"SS.0.0.0", 0x384b2, 0x38572, indexSFA3Sprites_Stages, 0x28 },
};

const sGame_PaletteDataset SFA3_A_STAGES_NASH_NODE[] =
{
    { L"8BG.0.0.1", 0x3c8d2, 0x3cad2, indexSFA3Sprites_Stages, 0x29, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x3cad2, 0x3cc72, indexSFA3Sprites_Stages, 0x2a },
    { L"32BG.0.0.0", 0x47cf2, 0x47df2, indexSFA3Sprites_Stages, 0x2b },
    { L"16BG.0.0.1", 0x41012, 0x41212, indexSFA3Sprites_Stages, 0x2c },
    { L"16BG.0.0.2", 0x41212, 0x413d2, indexSFA3Sprites_Stages, 0x2d },
    { L"SS.0.0.0", 0x38632, 0x386f2, indexSFA3Sprites_Stages, 0x2e },
};

const sGame_PaletteDataset SFA3_A_STAGES_ROSE_NODE[] =
{
    { L"32BG.0.0.1", 0x485d2, 0x487b2, indexSFA3Sprites_Stages, 0x2f, &pairFullyLinkedNode },
    { L"32BG.0.0.2", 0x487b2, 0x488d2, indexSFA3Sprites_Stages, 0x3a },
    { L"16BG.0.0.1", 0x42692, 0x42892, indexSFA3Sprites_Stages, 0x30 },
    { L"16BG.0.0.2", 0x42892, 0x42a92, indexSFA3Sprites_Stages, 0x31 },
    { L"8BG.0.0.1", 0x3dbf2, 0x3ddb2, indexSFA3Sprites_Stages, 0x32 },
    { L"8BG.0.0.2", 0x3ddb2, 0x3ded2, indexSFA3Sprites_Stages, 0x33 },
    { L"8BG.0.0.3", 0x61c12, 0x61c32, indexSFA3Sprites_Stages, 0x34 },
    { L"SS.0.0.0", 0x38ab2, 0x38b72, indexSFA3Sprites_Stages, 0x37 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ROSE_NODE_ANIMATION[] =
{
    { L"8BG.1.1.1", 0x61b92, 0x61bb2, indexSFA3Sprites_Stages, 0x35, &pairNext },
    { L"8BG.1.1.2", 0x61bd2, 0x61bf2, indexSFA3Sprites_Stages, 0x36 },
    { L"8BG.1.2.1", 0x61bb2, 0x61bd2, indexSFA3Sprites_Stages, 0x35, &pairNext },
    { L"8BG.1.2.2", 0x61bf2, 0x61c12, indexSFA3Sprites_Stages, 0x36 },
    { L"SS.1.1.1", 0x4c7d2, 0x4c7f2, indexSFA3Sprites_Stages, 0x38, &pairNext },
    { L"SS.1.1.2", 0x4c772, 0x4c792, indexSFA3Sprites_Stages, 0x39 },
    { L"SS.1.2.1", 0x4c7f2, 0x4c812, indexSFA3Sprites_Stages, 0x38, &pairNext },
    { L"SS.1.2.2", 0x4c792, 0x4c7b2, indexSFA3Sprites_Stages, 0x39 },
};

const sGame_PaletteDataset SFA3_A_STAGES_RYU_NODE[] =
{
    { L"8BG.0.0.0", 0x3c4b2, 0x3c4f2, indexSFA3Sprites_Stages, 0x3b, &pairFullyLinkedNode },
    { L"32BG.0.0.0", 0x477f2, 0x47932, indexSFA3Sprites_Stages, 0x3c },
    { L"16BG.0.0.0", 0x40992, 0x40b32 , indexSFA3Sprites_Stages, 0x3f},
    { L"SS.0.0.0", 0x383f2, 0x384b2, indexSFA3Sprites_Stages, 0x40 },
};

const sGame_PaletteDataset SFA3_A_STAGES_RYU_NODE_ANIMATION[] =
{
    { L"32BG.1.1.1", 0x63f32, 0x63f52, indexSFA3Sprites_Stages, 0x3d, &pairNext },
    { L"32BG.1.1.2", 0x63fb2, 0x63fd2, indexSFA3Sprites_Stages, 0x3e },
    { L"32BG.1.2.1", 0x63f52, 0x63f72, indexSFA3Sprites_Stages, 0x3d, &pairNext },
    { L"32BG.1.2.2", 0x63fd2, 0x63ff2, indexSFA3Sprites_Stages, 0x3e },
    { L"32BG.1.3.1", 0x63f72, 0x63f92, indexSFA3Sprites_Stages, 0x3d, &pairNext },
    { L"32BG.1.3.2", 0x63ff2, 0x64012, indexSFA3Sprites_Stages, 0x3e },
    { L"32BG.1.4.1", 0x63f92, 0x63fb2, indexSFA3Sprites_Stages, 0x3d, &pairNext },
    { L"32BG.1.4.2", 0x64012, 0x64032, indexSFA3Sprites_Stages, 0x3e },
};

const sGame_PaletteDataset SFA3_A_STAGES_SAGAT_NODE[] =
{
    { L"8BG.0.0.0", 0x3def2, 0x3e0d2, indexSFA3Sprites_Stages, 0x41, &pairFullyLinkedNode },
    { L"16BG.0.0.1", 0x42b12, 0x42d12, indexSFA3Sprites_Stages, 0x42 },
    { L"16BG.0.0.2", 0x42d12, 0x42ef2, indexSFA3Sprites_Stages, 0x43 },
    { L"32BG.0.0.0", 0x488f2, 0x489f2, indexSFA3Sprites_Stages, 0x44 },
    { L"SS.0.0.0", 0x38C32, 0x38CF2, indexSFA3Sprites_Stages, 0x45 },
};

const sGame_PaletteDataset SFA3_A_STAGES_SAKURA_NODE[] =
{
    { L"32BG.0.0.0", 0x48b52, 0x48bd2, indexSFA3Sprites_Stages, 0x46, &pairFullyLinkedNode },
    { L"16BG.0.0.1", 0x431b2, 0x433b2, indexSFA3Sprites_Stages, 0x47 },
    { L"16BG.0.0.2", 0x433b2, 0x435b2, indexSFA3Sprites_Stages, 0x48 },
    { L"8BG.0.0.1", 0x3e492, 0x3e692, indexSFA3Sprites_Stages, 0x49 },
    { L"8BG.0.0.2", 0x3e692, 0x3e852, indexSFA3Sprites_Stages, 0x4a },
    { L"SS.0.0.0", 0x38db2, 0x38e72, indexSFA3Sprites_Stages, 0x4b },
};

const sGame_PaletteDataset SFA3_A_STAGES_BLANKA_NODE[] =
{
    { L"8BG.0.0.0", 0x3f412, 0x3f492, indexSFA3Sprites_Stages, 0x4c, &pairFullyLinkedNode },
    { L"32BG.0.0.0", 0x49732, 0x49832, indexSFA3Sprites_Stages, 0x4d },
    { L"SS.0.0.0", 0x393b2, 0x39472, indexSFA3Sprites_Stages, 0x4e },
    { L"16BG.0.0.0", 0x44b32, 0x44bf2, indexSFA3Sprites_Stages, 0x4f },
};

const sGame_PaletteDataset SFA3_A_STAGES_CAMMY_NODE[] =
{
    { L"8BG.0.0.0", 0x3ef12, 0x3f052, indexSFA3Sprites_Stages, 0x50, &pairFullyLinkedNode },
    { L"32BG.0.0.0", 0x494b2, 0x49632, indexSFA3Sprites_Stages, 0x55 },
    { L"16BG.0.0.1", 0x443d2, 0x445d2, indexSFA3Sprites_Stages, 0x56 },
    { L"16BG.0.0.2", 0x445d2, 0x447d2, indexSFA3Sprites_Stages, 0x57 },
    { L"SS.0.0.0", 0x39232, 0x392f2, indexSFA3Sprites_Stages, 0x58 },
};

const sGame_PaletteDataset SFA3_A_STAGES_CAMMY_NODE_ANIMATION[] =
{
    { L"8BG.1.1.1", 0x61fd2, 0x61ff2, indexSFA3Sprites_Stages, 0x51, &pairNext3Palettes },
    { L"8BG.1.1.2", 0x62092, 0x620b2, indexSFA3Sprites_Stages, 0x52 },
    { L"8BG.1.1.3", 0x62152, 0x62172, indexSFA3Sprites_Stages, 0x53 },
    { L"8BG.1.1.4", 0x62212, 0x62232, indexSFA3Sprites_Stages, 0x54 },
    { L"8BG.1.2.1", 0x61ff2, 0x62012, indexSFA3Sprites_Stages, 0x51, &pairNext3Palettes },
    { L"8BG.1.2.2", 0x620b2, 0x620d2, indexSFA3Sprites_Stages, 0x52 },
    { L"8BG.1.2.3", 0x62172, 0x62192, indexSFA3Sprites_Stages, 0x53 },
    { L"8BG.1.2.4", 0x62232, 0x62252, indexSFA3Sprites_Stages, 0x54 },
    { L"8BG.1.3.1", 0x62012, 0x62032, indexSFA3Sprites_Stages, 0x51, &pairNext3Palettes },
    { L"8BG.1.3.2", 0x620d2, 0x620f2, indexSFA3Sprites_Stages, 0x52 },
    { L"8BG.1.3.3", 0x62192, 0x621b2, indexSFA3Sprites_Stages, 0x53 },
    { L"8BG.1.3.4", 0x62252, 0x62272, indexSFA3Sprites_Stages, 0x54 },
    { L"8BG.1.4.1", 0x62032, 0x62052, indexSFA3Sprites_Stages, 0x51, &pairNext3Palettes },
    { L"8BG.1.4.2", 0x620f2, 0x62112, indexSFA3Sprites_Stages, 0x52 },
    { L"8BG.1.4.3", 0x621b2, 0x621d2, indexSFA3Sprites_Stages, 0x53 },
    { L"8BG.1.4.4", 0x62272, 0x62292, indexSFA3Sprites_Stages, 0x54 },
    { L"8BG.1.5.1", 0x62052, 0x62072, indexSFA3Sprites_Stages, 0x51, &pairNext3Palettes },
    { L"8BG.1.5.2", 0x62112, 0x62132, indexSFA3Sprites_Stages, 0x52 },
    { L"8BG.1.5.3", 0x621d2, 0x621f2, indexSFA3Sprites_Stages, 0x53 },
    { L"8BG.1.5.4", 0x62292, 0x622b2, indexSFA3Sprites_Stages, 0x54 },
    { L"8BG.1.6.1", 0x62072, 0x62092, indexSFA3Sprites_Stages, 0x51, &pairNext3Palettes },
    { L"8BG.1.6.2", 0x62132, 0x62152, indexSFA3Sprites_Stages, 0x52 },
    { L"8BG.1.6.3", 0x621f2, 0x62212, indexSFA3Sprites_Stages, 0x53 },
    { L"8BG.1.6.4", 0x622b2, 0x622d2, indexSFA3Sprites_Stages, 0x54 },
};

const sGame_PaletteDataset SFA3_A_STAGES_CODY_NODE[] =
{
    { L"32BG.0.0.0", 0x499b2, 0x49b12, indexSFA3Sprites_Stages, 0x59, &pairFullyLinkedNode },
    { L"16BG.0.0.1", 0x451d2, 0x453d2, indexSFA3Sprites_Stages, 0x5a },
    { L"8BG.0.0.0", 0x3f852, 0x3f912, indexSFA3Sprites_Stages, 0x5b },
    { L"SS.0.0.0", 0x39532, 0x395f2, indexSFA3Sprites_Stages, 0x5c },
    { L"16BG.0.0.2", 0x44ff2, 0x451d2, indexSFA3Sprites_Stages, 0x5d },
};

const sGame_PaletteDataset SFA3_A_STAGES_DHALSIM_NODE[] =
{
    { L"8BG.0.0.0", 0x3eb92, 0x3ebd2, indexSFA3Sprites_Stages, 0x5e, &pairFullyLinkedNode },
    { L"SS.0.0.0", 0x38f32, 0x38ff2, indexSFA3Sprites_Stages, 0x5f },
    { L"32BG.0.0.1", 0x48cd2, 0x48e72, indexSFA3Sprites_Stages, 0x60 },
    { L"32BG.0.0.2", 0x48e72, 0x48f52, indexSFA3Sprites_Stages, 0x61 },
    { L"16BG.0.0.1", 0x439b2, 0x43bb2, indexSFA3Sprites_Stages, 0x62 },
    { L"16BG.0.0.2", 0x43bb2, 0x43db2, indexSFA3Sprites_Stages, 0x63 },
    { L"16BG.0.0.3", 0x62d52, 0x62dd2, indexSFA3Sprites_Stages, 0x64 },
};

const sGame_PaletteDataset SFA3_A_STAGES_GEN_NODE[] =
{
    { L"32BG.0.0.0", 0x49312, 0x49492, indexSFA3Sprites_Stages, 0x65, &pairFullyLinkedNode },
    { L"SS.0.0.0", 0x390b2, 0x39172, indexSFA3Sprites_Stages, 0x66 },
    { L"8BG.0.0.1", 0x3ecd2, 0x3edf2, indexSFA3Sprites_Stages, 0x68 },
    { L"8BG.0.0.2", 0x3edf2, 0x3eef2, indexSFA3Sprites_Stages, 0x69 },
    { L"16BG.0.0.1", 0x43f52, 0x44112, indexSFA3Sprites_Stages, 0x6a },
    { L"16BG.0.0.2", 0x44112, 0x441d2, indexSFA3Sprites_Stages, 0x6b },
    { L"16BG.0.0.3", 0x441d2, 0x44352, indexSFA3Sprites_Stages, 0x6c },
};

const sGame_PaletteDataset SFA3_A_STAGES_GEN_NODE_ANIMATION[] =
{
    { L"SS.1.1.1", 0x4cad2, 0x4caf2, indexSFA3Sprites_Stages, 0x67 },
    { L"SS.1.2.1", 0x4caf2, 0x4cb12, indexSFA3Sprites_Stages, 0x67 },
    { L"SS.1.3.1", 0x4cb12, 0x4cb32, indexSFA3Sprites_Stages, 0x67 },
    { L"SS.1.4.1", 0x4cb32, 0x4cb52, indexSFA3Sprites_Stages, 0x67 },
};

const sGame_PaletteDataset SFA3_A_STAGES_KARIN_NODE[] =
{
    { L"32BG.0.0.0", 0x49c12, 0x49cb2, indexSFA3Sprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"16BG.0.0.1", 0x457d2, 0x459d2, indexSFA3Sprites_Stages, 0x6e },
    { L"16BG.0.0.2", 0x459d2, 0x45bd2, indexSFA3Sprites_Stages, 0x6f },
    { L"8BG.0.0.1", 0x3f952, 0x3fb52, indexSFA3Sprites_Stages, 0x70 },
    { L"8BG.0.0.2", 0x3fb52, 0x3fd12, indexSFA3Sprites_Stages, 0x71 },
    { L"SS.0.0.0", 0x396b2, 0x39772, indexSFA3Sprites_Stages, 0x72 },
};

const sGame_PaletteDataset SFA3_A_STAGES_KARIN_NODE_ANIMATION[] =
{
    { L"SS.1.1.1", 0x4cd92, 0x4cdb2, indexSFA3Sprites_Stages, 0x73 },
    { L"SS.1.2.1", 0x4cdb2, 0x4cdd2, indexSFA3Sprites_Stages, 0x73 },
};

const sGame_PaletteDataset SFA3_A_STAGES_RMIKA_NODE[] =
{
    { L"32BG.0.0.0", 0x49832, 0x499b2, indexSFA3Sprites_Stages, 0x74, &pairFullyLinkedNode },
    { L"8BG.0.0.1", 0x3f492, 0x3f672, indexSFA3Sprites_Stages, 0x75 },
    { L"8BG.0.0.2", 0x3f672, 0x3f852, indexSFA3Sprites_Stages, 0x76 },
    { L"16BG.0.0.1", 0x44bf2, 0x44df2, indexSFA3Sprites_Stages, 0x77 },
    { L"16BG.0.0.2", 0x44df2, 0x44ff2, indexSFA3Sprites_Stages, 0x78 },
    { L"SS.0.0.0", 0x39472, 0x39532, indexSFA3Sprites_Stages, 0x79 },
};

const sGame_PaletteDataset SFA3_A_STAGES_VEGA_NODE[] =
{
    { L"32BG.0.0.0", 0x49b12, 0x49c12, indexSFA3Sprites_Stages, 0x7a, &pairFullyLinkedNode },
    { L"16BG.0.0.1", 0x453d2, 0x455d2, indexSFA3Sprites_Stages, 0x7b },
    { L"16BG.0.0.2", 0x455d2, 0x457d2, indexSFA3Sprites_Stages, 0x7c },
    { L"SS.0.0.0", 0x395f2, 0x396b2, indexSFA3Sprites_Stages, 0x7d },
    { L"8BG.0.0.0", 0x3f912, 0x3f952, indexSFA3Sprites_Stages, 0x7e },
};

const sGame_PaletteDataset SFA3_A_STAGES_ZANGIEF_NODE[] =
{
    { L"8BG.0.0.0", 0x3ebd2, 0x3ecd2, indexSFA3Sprites_Stages, 0x7f, &pairFullyLinkedNode },
    { L"32BG.0.0.0", 0x48f52, 0x490d2, indexSFA3Sprites_Stages, 0x81 },
    { L"16BG.0.0.0", 0x43db2, 0x43f52, indexSFA3Sprites_Stages, 0x85 },
    { L"SS.0.0.0", 0x38ff2, 0x390b2, indexSFA3Sprites_Stages, 0x86 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ZANGIEF_NODE_ANIMATION[] =
{
    { L"8BG.1.1.1", 0x61e32, 0x61e92, indexSFA3Sprites_Stages, 0x80 },
    { L"8BG.1.2.1", 0x61e92, 0x61ef2, indexSFA3Sprites_Stages, 0x80 },
    { L"8BG.1.3.1", 0x61ef2, 0x61f52, indexSFA3Sprites_Stages, 0x80 },
    { L"32BG.1.1.1", 0x490d2, 0x491f2, indexSFA3Sprites_Stages, 0x82 },
    { L"32BG.1.2.1", 0x491f2, 0x49312, indexSFA3Sprites_Stages, 0x82 },
    { L"32BG.2.1.1", 0x64192, 0x641b2, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.2.1", 0x641b2, 0x641d2, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.3.1", 0x641d2, 0x641f2, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.4.1", 0x641f2, 0x64212, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.5.1", 0x64212, 0x64232, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.6.1", 0x64232, 0x64252, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.7.1", 0x64252, 0x64272, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.8.1", 0x64272, 0x64292, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.9.1", 0x64292, 0x642b2, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.2.10.1", 0x642b2, 0x642d2, indexSFA3Sprites_Stages, 0x83 },
    { L"32BG.3.1.1", 0x642d2, 0x642f2, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.2.1", 0x642f2, 0x64312, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.3.1", 0x64312, 0x64332, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.4.1", 0x64332, 0x64352, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.5.1", 0x64352, 0x64372, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.6.1", 0x64372, 0x64392, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.7.1", 0x64392, 0x643b2, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.8.1", 0x643b2, 0x643d2, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.9.1", 0x643d2, 0x643f2, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.10.1", 0x643f2, 0x64412, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.11.1", 0x64412, 0x64432, indexSFA3Sprites_Stages, 0x84 },
    { L"32BG.3.12.1", 0x64432, 0x64452, indexSFA3Sprites_Stages, 0x84 },
    { L"16BG.1.1.1", 0x62dd2, 0x62f72, indexSFA3Sprites_Stages, 0x85 },
    { L"16BG.1.2.1", 0x62f72, 0x63112, indexSFA3Sprites_Stages, 0x85 },
    { L"16BG.1.3.1", 0x63112, 0x632b2, indexSFA3Sprites_Stages, 0x85 },
    { L"SS.1.1.1", 0x4c892, 0x4c952, indexSFA3Sprites_Stages, 0x86 },
    { L"SS.1.2.1", 0x4c952, 0x4ca12, indexSFA3Sprites_Stages, 0x86 },
    { L"SS.1.3.1", 0x4ca12, 0x4cad2, indexSFA3Sprites_Stages, 0x86 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ADON_NODE[] =
{
    { L"32x32 Pt1", 0x47ED2, 0x480D2, indexCPS2Sprites_SFA3Assets, 0x3b, &pairFullyLinkedNode },
    { L"32x32 Pt2", 0x480D2, 0x48112, indexCPS2Sprites_SFA3Assets, 0x3c },
    { L"16x16 Pt1", 0x417D2, 0x419D2, indexCPS2Sprites_SFA3Assets, 0x39 },
    { L"16x16 Pt2", 0x419D2, 0x41BD2, indexCPS2Sprites_SFA3Assets, 0x3a },
    { L"Obj Pt1", 0x387B2, 0x387F2, indexCPS2Sprites_SFA3Assets, 0x35 },
    { L"8x8 Pt1", 0x3CFD2, 0x3D1D2, indexCPS2Sprites_SFA3Assets, 0x36 },
    { L"8x8 Pt2", 0x3D1D2, 0x3D312, indexCPS2Sprites_SFA3Assets, 0x37 },
    { L"Obj Pt2", 0x387F2, 0x38872, indexCPS2Sprites_SFA3Assets, 0x38 },
};

const sGame_PaletteDataset SFA3_A_STAGES_MBISON_NODE[] =
{
    { L"16BG.0.0.0", 0x42a92, 0x42b12, indexSFA3Sprites_Stages, 0x9b, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x3ded2, 0x3def2, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.0.0.0", 0x488d2, 0x488f2, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.0.0.0", 0x38b72, 0x38c32, indexSFA3Sprites_Stages, 0x9a },
};

const sGame_PaletteDataset SFA3_A_STAGES_MBISON_NODE_ANIMATION[] =
{
    { L"16BG.1.1.1", 0x62b52, 0x62bd2, indexSFA3Sprites_Stages, 0x9b },
    { L"8BG.1.1.1", 0x61c32, 0x61c52, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.1.1", 0x640b2, 0x640d2, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.1.1", 0x4c812, 0x4c832, indexSFA3Sprites_Stages, 0x9a },
    { L"16BG.1.2.1", 0x62bd2, 0x62c52, indexSFA3Sprites_Stages, 0x9b },
    { L"8BG.1.2.1", 0x61c52, 0x61c72, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.2.1", 0x640d2, 0x640f2, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.2.1", 0x4c832, 0x4c852, indexSFA3Sprites_Stages, 0x9a },
    { L"16BG.1.3.1", 0x62c52, 0x62cd2, indexSFA3Sprites_Stages, 0x9b },
    { L"8BG.1.3.1", 0x61c72, 0x61c92, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.3.1", 0x640f2, 0x64112, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.3.1", 0x4c852, 0x4c872, indexSFA3Sprites_Stages, 0x9a },
    { L"16BG.1.4.1", 0x62cd2, 0x62d52, indexSFA3Sprites_Stages, 0x9b },
    { L"8BG.1.4.1", 0x61c92, 0x61cb2, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.4.1", 0x64112, 0x64132, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.4.1", 0x4c872, 0x4c892, indexSFA3Sprites_Stages, 0x9a },
};

const sGame_PaletteDataset SFA3_A_STAGES_JUNIJULI_NODE[] =
{
    { L"16BG.0.0.0", 0x44352, 0x443d2, indexSFA3Sprites_Stages, 0x97, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x3eef2, 0x3ef12, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.0.0.0", 0x49492, 0x494b2, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.0.0.0", 0x39172, 0x39232, indexSFA3Sprites_Stages, 0x9a },
};

const sGame_PaletteDataset SFA3_A_STAGES_JUNIJULI_NODE_ANIMATION[] =
{
    { L"16BG.1.1.1", 0x632b2, 0x63332, indexSFA3Sprites_Stages, 0x97 },
    { L"8BG.1.1.1", 0x61f52, 0x61f72, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.1.1", 0x64812, 0x64832, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.1.1", 0x4cb52, 0x4cb72, indexSFA3Sprites_Stages, 0x9a },
    { L"16BG.1.2.1", 0x63332, 0x633b2, indexSFA3Sprites_Stages, 0x97 },
    { L"8BG.1.2.1", 0x61f72, 0x61f92, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.2.1", 0x64832, 0x64852, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.2.1", 0x4cb72, 0x4cb92, indexSFA3Sprites_Stages, 0x9a },
    { L"16BG.1.3.1", 0x633b2, 0x63432, indexSFA3Sprites_Stages, 0x97 },
    { L"8BG.1.3.1", 0x61f92, 0x61fb2, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.3.1", 0x64852, 0x64872, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.3.1", 0x4cb92, 0x4cbb2, indexSFA3Sprites_Stages, 0x9a },
    { L"16BG.1.4.1", 0x63432, 0x634b2, indexSFA3Sprites_Stages, 0x97 },
    { L"8BG.1.4.1", 0x61fb2, 0x61fd2, indexSFA3Sprites_Stages, 0x98 },
    { L"32BG.1.4.1", 0x64872, 0x64892, indexSFA3Sprites_Stages, 0x99 },
    { L"SS.1.4.1", 0x4cbb2, 0x4cbd2, indexSFA3Sprites_Stages, 0x9a },
};

const sGame_PaletteDataset SFA3_A_STAGES_SODOM_NODE[] =
{
    { L"16BG.0.0.1", 0x41bd2, 0x41dd2, indexSFA3Sprites_Stages, 0xa2, &pairFullyLinkedNode },
    { L"16BG.0.0.2", 0x41dd2, 0x41eb2, indexSFA3Sprites_Stages, 0xa3 },
    { L"32BG.0.0.1", 0x48112, 0x48312, indexSFA3Sprites_Stages, 0xa7 },
    { L"32BG.0.0.2", 0x48312, 0x484b2, indexSFA3Sprites_Stages, 0xa8 },
    { L"8BG.0.0.1", 0x3d312, 0x3d512, indexSFA3Sprites_Stages, 0xab },
    { L"8BG.0.0.2", 0x3d512, 0x3d692, indexSFA3Sprites_Stages, 0xac },
    { L"SS.0.0.0", 0x38872, 0x38932, indexSFA3Sprites_Stages, 0xc0 },
};

const sGame_PaletteDataset SFA3_A_STAGES_SODOM_NODE_ANIMATION[] =
{
    { L"16BG.1.1.1", 0x62b12, 0x62b32, indexSFA3Sprites_Stages, 0xa4 },
    { L"16BG.2.1.1", 0x62a92, 0x62ab2, indexSFA3Sprites_Stages, 0xa5 },
    { L"16BG.2.2.1", 0x62ab2, 0x62ad2, indexSFA3Sprites_Stages, 0xa6 },
    { L"16BG.2.1.2", 0x62ad2, 0x62af2, indexSFA3Sprites_Stages, 0xa5 },
    { L"16BG.2.2.2", 0x62af2, 0x62b12, indexSFA3Sprites_Stages, 0xa6 },
    { L"32BG.1.1.1", 0x64032, 0x64052, indexSFA3Sprites_Stages, 0xa9 },
    { L"32BG.1.2.1", 0x64052, 0x64072, indexSFA3Sprites_Stages, 0xaa },
    { L"32BG.1.1.2", 0x64072, 0x64092, indexSFA3Sprites_Stages, 0xa9 },
    { L"32BG.1.2.2", 0x64092, 0x640b2, indexSFA3Sprites_Stages, 0xaa },
    { L"8BG.1.1.1", 0x61832, 0x61852, indexSFA3Sprites_Stages, 0xad },
    { L"8BG.1.2.1", 0x61852, 0x61872, indexSFA3Sprites_Stages, 0xad },
    { L"8BG.1.1.2", 0x61872, 0x61892, indexSFA3Sprites_Stages, 0xae },
    { L"8BG.1.2.2", 0x61892, 0x618b2, indexSFA3Sprites_Stages, 0xae },
    { L"8BG.1.1.3", 0x618b2, 0x618d2, indexSFA3Sprites_Stages, 0xaf },
    { L"8BG.1.2.3", 0x618d2, 0x618f2, indexSFA3Sprites_Stages, 0xaf },
    { L"8BG.1.1.4", 0x617b2, 0x617d2, indexSFA3Sprites_Stages, 0xb0 },
    { L"8BG.1.2.4", 0x617d2, 0x617f2, indexSFA3Sprites_Stages, 0xb0 },
    { L"8BG.1.1.5", 0x617f2, 0x61812, indexSFA3Sprites_Stages, 0xb1 },
    { L"8BG.1.2.5", 0x61812, 0x61832, indexSFA3Sprites_Stages, 0xb1 },
    { L"8BG.1.1.6", 0x618f2, 0x61912, indexSFA3Sprites_Stages, 0xb2 },
    { L"8BG.1.2.6", 0x61912, 0x61932, indexSFA3Sprites_Stages, 0xb2 },
    { L"8BG.1.1.7", 0x61932, 0x61952, indexSFA3Sprites_Stages, 0xb3 },
    { L"8BG.1.2.7", 0x61952, 0x61972, indexSFA3Sprites_Stages, 0xb3 },
    { L"8BG.1.1.8", 0x619b2, 0x619d2, indexSFA3Sprites_Stages, 0xb4 },
    { L"8BG.1.2.8", 0x619d2, 0x619f2, indexSFA3Sprites_Stages, 0xb4 },
    { L"8BG.2.1.1", 0x614b2, 0x614d2, indexSFA3Sprites_Stages, 0xb5 },
    { L"8BG.2.2.1", 0x614d2, 0x614f2, indexSFA3Sprites_Stages, 0xb5 },
    { L"8BG.2.3.1", 0x61b12, 0x61b32, indexSFA3Sprites_Stages, 0xb5 },
    { L"8BG.2.1.2", 0x614f2, 0x61512, indexSFA3Sprites_Stages, 0xb6 },
    { L"8BG.2.2.2", 0x61512, 0x61532, indexSFA3Sprites_Stages, 0xb6 },
    { L"8BG.2.3.2", 0x61b32, 0x61b52, indexSFA3Sprites_Stages, 0xb6 },
    { L"8BG.2.1.3", 0x61632, 0x61652, indexSFA3Sprites_Stages, 0xb7 },
    { L"8BG.2.2.3", 0x61652, 0x61672, indexSFA3Sprites_Stages, 0xb7 },
    { L"8BG.2.3.3", 0x61672, 0x61692, indexSFA3Sprites_Stages, 0xb7 },
    { L"8BG.2.1.4", 0x61692, 0x616b2, indexSFA3Sprites_Stages, 0xb8 },
    { L"8BG.2.2.4", 0x616b2, 0x616d2, indexSFA3Sprites_Stages, 0xb8 },
    { L"8BG.2.3.4", 0x616d2, 0x616f2, indexSFA3Sprites_Stages, 0xb8 },
    { L"8BG.2.1.5", 0x616f2, 0x61712, indexSFA3Sprites_Stages, 0xb9 },
    { L"8BG.2.2.5", 0x61712, 0x61732, indexSFA3Sprites_Stages, 0xb9 },
    { L"8BG.2.3.5", 0x61732, 0x61752, indexSFA3Sprites_Stages, 0xb9 },
    { L"8BG.2.1.6", 0x61752, 0x61772, indexSFA3Sprites_Stages, 0xba },
    { L"8BG.2.2.6", 0x61772, 0x61792, indexSFA3Sprites_Stages, 0xba },
    { L"8BG.2.3.6", 0x61792, 0x617b2, indexSFA3Sprites_Stages, 0xba },
    { L"8BG.2.1.7", 0x61532, 0x61552, indexSFA3Sprites_Stages, 0xbb },
    { L"8BG.2.2.7", 0x61552, 0x61572, indexSFA3Sprites_Stages, 0xbb },
    { L"8BG.2.3.7", 0x61572, 0x61592, indexSFA3Sprites_Stages, 0xbb },
    { L"8BG.2.1.8", 0x619f2, 0x61a12, indexSFA3Sprites_Stages, 0xbc },
    { L"8BG.2.2.8", 0x61a12, 0x61a32, indexSFA3Sprites_Stages, 0xbc },
    { L"8BG.2.3.8", 0x61a32, 0x61a52, indexSFA3Sprites_Stages, 0xbc },
    { L"8BG.3.1.1", 0x61592, 0x615b2, indexSFA3Sprites_Stages, 0xbd },
    { L"8BG.3.2.1", 0x615b2, 0x615d2, indexSFA3Sprites_Stages, 0xbd },
    { L"8BG.3.3.1", 0x615d2, 0x615f2, indexSFA3Sprites_Stages, 0xbd },
    { L"8BG.3.4.1", 0x615f2, 0x61612, indexSFA3Sprites_Stages, 0xbd },
    { L"8BG.3.5.1", 0x61612, 0x61632, indexSFA3Sprites_Stages, 0xbd },
    { L"8BG.4.1.1", 0x61a52, 0x61a72, indexSFA3Sprites_Stages, 0xbe },
    { L"8BG.4.2.1", 0x61a72, 0x61a92, indexSFA3Sprites_Stages, 0xbe },
    { L"8BG.4.3.1", 0x61a92, 0x61ab2, indexSFA3Sprites_Stages, 0xbe },
    { L"8BG.4.4.1", 0x61ab2, 0x61ad2, indexSFA3Sprites_Stages, 0xbe },
    { L"8BG.4.5.1", 0x61ad2, 0x61af2, indexSFA3Sprites_Stages, 0xbe },
    { L"8BG.4.6.1", 0x61af2, 0x61b12, indexSFA3Sprites_Stages, 0xbe },
    { L"8BG.5.1.1", 0x613d2, 0x613f2, indexSFA3Sprites_Stages, 0xbf },
    { L"8BG.5.2.1", 0x613f2, 0x61412, indexSFA3Sprites_Stages, 0xbf },
    { L"8BG.5.3.1", 0x61412, 0x61432, indexSFA3Sprites_Stages, 0xbf },
    { L"8BG.5.4.1", 0x61432, 0x61452, indexSFA3Sprites_Stages, 0xbf },
    { L"8BG.5.5.1", 0x61452, 0x61472, indexSFA3Sprites_Stages, 0xbf },
    { L"8BG.5.6.1", 0x61472, 0x61492, indexSFA3Sprites_Stages, 0xbf },
    { L"SS.1.1.1", 0x4c5d2, 0x4c5f2, indexSFA3Sprites_Stages, 0xc1 },
    { L"SS.1.2.1", 0x4c5f2, 0x4c612, indexSFA3Sprites_Stages, 0xc1 },
    { L"SS.1.1.2", 0x4c612, 0x4c632, indexSFA3Sprites_Stages, 0xc2 },
    { L"SS.1.2.2", 0x4c632, 0x4c652, indexSFA3Sprites_Stages, 0xc2 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ROLENTO_NODE[] =
{
    { L"32BG.0.0.0", 0x48bd2, 0x48cd2, indexSFA3Sprites_Stages, 0x9c, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x61cb2, 0x61e32, indexSFA3Sprites_Stages, 0x9e },
    { L"16BG.0.0.1", 0x435b2, 0x437b2, indexSFA3Sprites_Stages, 0x9f },
    { L"16BG.0.0.2", 0x437b2, 0x439b2, indexSFA3Sprites_Stages, 0xa0 },
    { L"SS.0.0.0", 0x38e72, 0x38f32, indexSFA3Sprites_Stages, 0xa1 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ROLENTO_NODE_ANIMATION[] =
{
    { L"32BG.1.1.1", 0x64132, 0x64152, indexSFA3Sprites_Stages, 0x9d },
    { L"32BG.1.2.1", 0x64152, 0x64172, indexSFA3Sprites_Stages, 0x9d },
    { L"32BG.1.3.1", 0x64172, 0x64192, indexSFA3Sprites_Stages, 0x9d },
};

const sGame_PaletteDataset SFA3_A_STAGES_EHONDA_NODE[] =
{
    { L"32BG.0.0.0", 0x49632, 0x49732, indexSFA3Sprites_Stages, 0x87, &pairFullyLinkedNode },
    { L"16BG.0.0.1", 0x447d2, 0x449d2, indexSFA3Sprites_Stages, 0x88 },
    { L"16BG.0.0.2", 0x449d2, 0x44b32, indexSFA3Sprites_Stages, 0x89 },
    { L"8BG.0.0.1", 0x3f052, 0x3f252, indexSFA3Sprites_Stages, 0x8c },
    { L"8BG.0.0.2", 0x3f252, 0x3f412, indexSFA3Sprites_Stages, 0x8d },
    { L"SS.0.0.1", 0x392f2, 0x393b2, indexSFA3Sprites_Stages, 0x92 },
    { L"SS.0.0.2", 0x4cd52, 0x4cd92, indexSFA3Sprites_Stages, 0x93 },
};

const sGame_PaletteDataset SFA3_A_STAGES_EHONDA_NODE_ANIMATION[] =
{
    { L"16BG.1.1.1", 0x634b2, 0x634d2, indexSFA3Sprites_Stages, 0x8a },
    { L"16BG.1.2.1", 0x634d2, 0x634f2, indexSFA3Sprites_Stages, 0x8a },
    { L"16BG.1.3.1", 0x634f2, 0x63512, indexSFA3Sprites_Stages, 0x8a },
    { L"16BG.1.1.2", 0x63512, 0x63532, indexSFA3Sprites_Stages, 0x8b },
    { L"16BG.1.2.2", 0x63532, 0x63552, indexSFA3Sprites_Stages, 0x8b },
    { L"16BG.1.3.2", 0x63552, 0x63572, indexSFA3Sprites_Stages, 0x8b },
    { L"8BG.1.1.1", 0x622d2, 0x62352, indexSFA3Sprites_Stages, 0x8e },
    { L"8BG.1.2.1", 0x62352, 0x623d2, indexSFA3Sprites_Stages, 0x8e },
    { L"8BG.1.3.1", 0x623d2, 0x62452, indexSFA3Sprites_Stages, 0x8e },
    { L"8BG.1.4.1", 0x62452, 0x624d2, indexSFA3Sprites_Stages, 0x8e },
    { L"8BG.1.5.1", 0x624d2, 0x62552, indexSFA3Sprites_Stages, 0x8e },
    { L"8BG.1.6.1", 0x62552, 0x625d2, indexSFA3Sprites_Stages, 0x8e },
    { L"8BG.2.1.1", 0x625d2, 0x62612, indexSFA3Sprites_Stages, 0x8f },
    { L"8BG.2.2.1", 0x62612, 0x62652, indexSFA3Sprites_Stages, 0x8f },
    { L"8BG.2.3.1", 0x62652, 0x62692, indexSFA3Sprites_Stages, 0x8f },
    { L"8BG.2.4.1", 0x62692, 0x626d2, indexSFA3Sprites_Stages, 0x8f },
    { L"8BG.2.5.1", 0x626d2, 0x62712, indexSFA3Sprites_Stages, 0x8f },
    { L"8BG.2.6.1", 0x62712, 0x62752, indexSFA3Sprites_Stages, 0x8f },
    { L"8BG.2.7.1", 0x62752, 0x62792, indexSFA3Sprites_Stages, 0x8f },
    { L"8BG.3.1.1", 0x62792, 0x627b2, indexSFA3Sprites_Stages, 0x90 },
    { L"8BG.3.2.1", 0x627b2, 0x627d2, indexSFA3Sprites_Stages, 0x90 },
    { L"8BG.3.3.1", 0x627d2, 0x627f2, indexSFA3Sprites_Stages, 0x90 },
    { L"8BG.3.1.2", 0x627f2, 0x62812, indexSFA3Sprites_Stages, 0x91 },
    { L"8BG.3.2.2", 0x62812, 0x62832, indexSFA3Sprites_Stages, 0x91 },
    { L"8BG.3.3.2", 0x62832, 0x62852, indexSFA3Sprites_Stages, 0x91 },
    { L"SS.1.1.1", 0x4ccd2, 0x4ccf2, indexSFA3Sprites_Stages, 0x94 },
    { L"SS.1.2.1", 0x4ccf2, 0x4cd12, indexSFA3Sprites_Stages, 0x94 },
    { L"SS.1.3.1", 0x4cd12, 0x4cd32, indexSFA3Sprites_Stages, 0x94 },
    { L"SS.1.4.1", 0x4cd32, 0x4cd52, indexSFA3Sprites_Stages, 0x94 },
    { L"SS.1.1.2", 0x4cbd2, 0x4cbf2, indexSFA3Sprites_Stages, 0x95 },
    { L"SS.1.2.2", 0x4cbf2, 0x4cc12, indexSFA3Sprites_Stages, 0x95 },
    { L"SS.1.3.2", 0x4cc12, 0x4cc32, indexSFA3Sprites_Stages, 0x95 },
    { L"SS.1.4.2", 0x4cc32, 0x4cc52, indexSFA3Sprites_Stages, 0x95 },
    { L"SS.1.1.3", 0x4cc52, 0x4cc72, indexSFA3Sprites_Stages, 0x96 },
    { L"SS.1.2.3", 0x4cc72, 0x4cc92, indexSFA3Sprites_Stages, 0x96 },
    { L"SS.1.3.3", 0x4cc92, 0x4ccb2, indexSFA3Sprites_Stages, 0x96 },
    { L"SS.1.4.3", 0x4ccb2, 0x4ccd2, indexSFA3Sprites_Stages, 0x96 },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ce12, 0x4ce92, indexCPS2Sprites_SFA3Assets, 0xb4 },
    { L"X-Ism Kick", 0x4ce92, 0x4cf12, indexCPS2Sprites_SFA3Assets, 0xb4 },
    { L"A-Ism Punch", 0x4cf12, 0x4cf92, indexCPS2Sprites_SFA3Assets, 0xb4 },
    { L"A-Ism Kick", 0x4cf92, 0x4d012, indexCPS2Sprites_SFA3Assets, 0xb4 },
    { L"V-Ism Punch", 0x4d012, 0x4d092, indexCPS2Sprites_SFA3Assets, 0xb4 },
    { L"V-Ism Kick", 0x4d092, 0x4d112, indexCPS2Sprites_SFA3Assets, 0xb4 },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d112, 0x4d192, indexCPS2Sprites_SFA3Assets, 0xaf },
    { L"X-Ism Kick", 0x4d192, 0x4d212, indexCPS2Sprites_SFA3Assets, 0xaf },
    { L"A-Ism Punch", 0x4d212, 0x4d292, indexCPS2Sprites_SFA3Assets, 0xaf },
    { L"A-Ism Kick", 0x4d292, 0x4d312, indexCPS2Sprites_SFA3Assets, 0xaf },
    { L"V-Ism Punch", 0x4d312, 0x4d392, indexCPS2Sprites_SFA3Assets, 0xaf },
    { L"V-Ism Kick", 0x4d392, 0x4d412, indexCPS2Sprites_SFA3Assets, 0xaf },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d412, 0x4d492, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"X-Ism Kick", 0x4d492, 0x4d512, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"A-Ism Punch", 0x4d512, 0x4d592, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"A-Ism Kick", 0x4d592, 0x4d612, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"V-Ism Punch", 0x4d612, 0x4d692, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"V-Ism Kick", 0x4d692, 0x4d712, indexCPS2Sprites_SFA3Assets, 0xa1 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d712, 0x4d792, indexCPS2Sprites_SFA3Assets, 0xa5 },
    { L"X-Ism Kick", 0x4d792, 0x4d812, indexCPS2Sprites_SFA3Assets, 0xa5 },
    { L"A-Ism Punch", 0x4d812, 0x4d892, indexCPS2Sprites_SFA3Assets, 0xa5 },
    { L"A-Ism Kick", 0x4d892, 0x4d912, indexCPS2Sprites_SFA3Assets, 0xa5 },
    { L"V-Ism Punch", 0x4d912, 0x4d992, indexCPS2Sprites_SFA3Assets, 0xa5 },
    { L"V-Ism Kick", 0x4d992, 0x4da12, indexCPS2Sprites_SFA3Assets, 0xa5 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4da12, 0x4da92, indexCPS2Sprites_SFA3Assets, 0xa6 },
    { L"X-Ism Kick", 0x4da92, 0x4db12, indexCPS2Sprites_SFA3Assets, 0xa6 },
    { L"A-Ism Punch", 0x4db12, 0x4db92, indexCPS2Sprites_SFA3Assets, 0xa7 },
    { L"A-Ism Kick", 0x4db92, 0x4dc12, indexCPS2Sprites_SFA3Assets, 0xa7 },
    { L"V-Ism Punch", 0x4dc12, 0x4dc92, indexCPS2Sprites_SFA3Assets, 0xa7 },
    { L"V-Ism Kick", 0x4dc92, 0x4dd12, indexCPS2Sprites_SFA3Assets, 0xa7 },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4dd12, 0x4dd92, indexCPS2Sprites_SFA3Assets, 0xa0 },
    { L"X-Ism Kick", 0x4dd92, 0x4de12, indexCPS2Sprites_SFA3Assets, 0xa0 },
    { L"A-Ism Punch", 0x4de12, 0x4de92, indexCPS2Sprites_SFA3Assets, 0xa0 },
    { L"A-Ism Kick", 0x4de92, 0x4df12, indexCPS2Sprites_SFA3Assets, 0xa0 },
    { L"V-Ism Punch", 0x4df12, 0x4df92, indexCPS2Sprites_SFA3Assets, 0xa0 },
    { L"V-Ism Kick", 0x4df92, 0x4e012, indexCPS2Sprites_SFA3Assets, 0xa0 },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e012, 0x4e092, indexCPS2Sprites_SFA3Assets, 0xb7 },
    { L"X-Ism Kick", 0x4e092, 0x4e112, indexCPS2Sprites_SFA3Assets, 0xb7 },
    { L"A-Ism Punch", 0x4e112, 0x4e192, indexCPS2Sprites_SFA3Assets, 0xb7 },
    { L"A-Ism Kick", 0x4e192, 0x4e212, indexCPS2Sprites_SFA3Assets, 0xb7 },
    { L"V-Ism Punch", 0x4e212, 0x4e292, indexCPS2Sprites_SFA3Assets, 0xb7 },
    { L"V-Ism Kick", 0x4e292, 0x4e312, indexCPS2Sprites_SFA3Assets, 0xb7 },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e312, 0x4e392, indexCPS2Sprites_SFA3Assets, 0xad },
    { L"X-Ism Kick", 0x4e392, 0x4e412, indexCPS2Sprites_SFA3Assets, 0xad },
    { L"A-Ism Punch", 0x4e412, 0x4e492, indexCPS2Sprites_SFA3Assets, 0xad },
    { L"A-Ism Kick", 0x4e492, 0x4e512, indexCPS2Sprites_SFA3Assets, 0xad },
    { L"V-Ism Punch", 0x4e512, 0x4e592, indexCPS2Sprites_SFA3Assets, 0xad },
    { L"V-Ism Kick", 0x4e592, 0x4e612, indexCPS2Sprites_SFA3Assets, 0xad },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e612, 0x4e692, indexCPS2Sprites_SFA3Assets, 0xa2 },
    { L"X-Ism Kick", 0x4e692, 0x4e712, indexCPS2Sprites_SFA3Assets, 0xa2 },
    { L"A-Ism Punch", 0x4e712, 0x4e792, indexCPS2Sprites_SFA3Assets, 0xa2 },
    { L"A-Ism Kick", 0x4e792, 0x4e812, indexCPS2Sprites_SFA3Assets, 0xa2 },
    { L"V-Ism Punch", 0x4e812, 0x4e892, indexCPS2Sprites_SFA3Assets, 0xa2 },
    { L"V-Ism Kick", 0x4e892, 0x4e912, indexCPS2Sprites_SFA3Assets, 0xa2 },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e912, 0x4e992, indexCPS2Sprites_SFA3Assets, 0xb3 },
    { L"X-Ism Kick", 0x4e992, 0x4ea12, indexCPS2Sprites_SFA3Assets, 0xb3 },
    { L"A-Ism Punch", 0x4ea12, 0x4ea92, indexCPS2Sprites_SFA3Assets, 0xb3 },
    { L"A-Ism Kick", 0x4ea92, 0x4eb12, indexCPS2Sprites_SFA3Assets, 0xb3 },
    { L"V-Ism Punch", 0x4eb12, 0x4eb92, indexCPS2Sprites_SFA3Assets, 0xb3 },
    { L"V-Ism Kick", 0x4eb92, 0x4ec12, indexCPS2Sprites_SFA3Assets, 0xb3 },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ec12, 0x4ec92, indexCPS2Sprites_SFA3Assets, 0xb0 },
    { L"X-Ism Kick", 0x4ec92, 0x4ed12, indexCPS2Sprites_SFA3Assets, 0xb0 },
    { L"A-Ism Punch", 0x4ed12, 0x4ed92, indexCPS2Sprites_SFA3Assets, 0xb0 },
    { L"A-Ism Kick", 0x4ed92, 0x4ee12, indexCPS2Sprites_SFA3Assets, 0xb0 },
    { L"V-Ism Punch", 0x4ee12, 0x4ee92, indexCPS2Sprites_SFA3Assets, 0xb0 },
    { L"V-Ism Kick", 0x4ee92, 0x4ef12, indexCPS2Sprites_SFA3Assets, 0xb0 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ef12, 0x4ef92, indexCPS2Sprites_SFA3Assets, 0xb5 },
    { L"X-Ism Kick", 0x4ef92, 0x4f012, indexCPS2Sprites_SFA3Assets, 0xb5 },
    { L"A-Ism Punch", 0x4f012, 0x4f092, indexCPS2Sprites_SFA3Assets, 0xb5 },
    { L"A-Ism Kick", 0x4f092, 0x4f112, indexCPS2Sprites_SFA3Assets, 0xb5 },
    { L"V-Ism Punch", 0x4f112, 0x4f192, indexCPS2Sprites_SFA3Assets, 0xb5 },
    { L"V-Ism Kick", 0x4f192, 0x4f212, indexCPS2Sprites_SFA3Assets, 0xb5 },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f212, 0x4f292, indexCPS2Sprites_SFA3Assets, 0xa9 },
    { L"X-Ism Kick", 0x4f292, 0x4f312, indexCPS2Sprites_SFA3Assets, 0xa9 },
    { L"A-Ism Punch", 0x4f312, 0x4f392, indexCPS2Sprites_SFA3Assets, 0xa9 },
    { L"A-Ism Kick", 0x4f392, 0x4f412, indexCPS2Sprites_SFA3Assets, 0xa9 },
    { L"V-Ism Punch", 0x4f412, 0x4f492, indexCPS2Sprites_SFA3Assets, 0xa9 },
    { L"V-Ism Kick", 0x4f492, 0x4f512, indexCPS2Sprites_SFA3Assets, 0xa9 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f512, 0x4f592, indexCPS2Sprites_SFA3Assets, 0xb6 },
    { L"X-Ism Kick", 0x4f592, 0x4f612, indexCPS2Sprites_SFA3Assets, 0xb6 },
    { L"A-Ism Punch", 0x4f612, 0x4f692, indexCPS2Sprites_SFA3Assets, 0xb6 },
    { L"A-Ism Kick", 0x4f692, 0x4f712, indexCPS2Sprites_SFA3Assets, 0xb6 },
    { L"V-Ism Punch", 0x4f712, 0x4f792, indexCPS2Sprites_SFA3Assets, 0xb6 },
    { L"V-Ism Kick", 0x4f792, 0x4f812, indexCPS2Sprites_SFA3Assets, 0xb6 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f812, 0x4f892, indexCPS2Sprites_SFA3Assets, 0xb2 },
    { L"X-Ism Kick", 0x4f892, 0x4f912, indexCPS2Sprites_SFA3Assets, 0xb2 },
    { L"A-Ism Punch", 0x4f912, 0x4f992, indexCPS2Sprites_SFA3Assets, 0xb2 },
    { L"A-Ism Kick", 0x4f992, 0x4fa12, indexCPS2Sprites_SFA3Assets, 0xb2 },
    { L"V-Ism Punch", 0x4fa12, 0x4fa92, indexCPS2Sprites_SFA3Assets, 0xb2 },
    { L"V-Ism Kick", 0x4fa92, 0x4fb12, indexCPS2Sprites_SFA3Assets, 0xb2 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4fb12, 0x4fb92, indexCPS2Sprites_SFA3Assets, 0xaa },
    { L"X-Ism Kick", 0x4fb92, 0x4fc12, indexCPS2Sprites_SFA3Assets, 0xaa },
    { L"A-Ism Punch", 0x4fc12, 0x4fc92, indexCPS2Sprites_SFA3Assets, 0xaa },
    { L"A-Ism Kick", 0x4fc92, 0x4fd12, indexCPS2Sprites_SFA3Assets, 0xaa },
    { L"V-Ism Punch", 0x4fd12, 0x4fd92, indexCPS2Sprites_SFA3Assets, 0xaa },
    { L"V-Ism Kick", 0x4fd92, 0x4fe12, indexCPS2Sprites_SFA3Assets, 0xaa },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4fe12, 0x4fe92, indexCPS2Sprites_SFA3Assets, 0xb9 },
    { L"X-Ism Kick", 0x4fe92, 0x4ff12, indexCPS2Sprites_SFA3Assets, 0xb9 },
    { L"A-Ism Punch", 0x4ff12, 0x4ff92, indexCPS2Sprites_SFA3Assets, 0xb9 },
    { L"A-Ism Kick", 0x4ff92, 0x50012, indexCPS2Sprites_SFA3Assets, 0xb9 },
    { L"V-Ism Punch", 0x50012, 0x50092, indexCPS2Sprites_SFA3Assets, 0xb9 },
    { L"V-Ism Kick", 0x50092, 0x50112, indexCPS2Sprites_SFA3Assets, 0xb9 },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50112, 0x50192, indexCPS2Sprites_SFA3Assets, 0xac },
    { L"X-Ism Kick", 0x50192, 0x50212, indexCPS2Sprites_SFA3Assets, 0xac },
    { L"A-Ism Punch", 0x50212, 0x50292, indexCPS2Sprites_SFA3Assets, 0xac },
    { L"A-Ism Kick", 0x50292, 0x50312, indexCPS2Sprites_SFA3Assets, 0xac },
    { L"V-Ism Punch", 0x50312, 0x50392, indexCPS2Sprites_SFA3Assets, 0xac },
    { L"V-Ism Kick", 0x50392, 0x50412, indexCPS2Sprites_SFA3Assets, 0xac },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50a12, 0x50a92, indexCPS2Sprites_SFA3Assets, 0xa4 },
    { L"X-Ism Kick", 0x50a92, 0x50b12, indexCPS2Sprites_SFA3Assets, 0xa4 },
    { L"A-Ism Punch", 0x50b12, 0x50b92, indexCPS2Sprites_SFA3Assets, 0xa4 },
    { L"A-Ism Kick", 0x50b92, 0x50c12, indexCPS2Sprites_SFA3Assets, 0xa4 },
    { L"V-Ism Punch", 0x50c12, 0x50c92, indexCPS2Sprites_SFA3Assets, 0xa4 },
    { L"V-Ism Kick", 0x50c92, 0x50d12, indexCPS2Sprites_SFA3Assets, 0xa4 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50d12, 0x50d92, indexCPS2Sprites_SFA3Assets, 0xab },
    { L"X-Ism Kick", 0x50d92, 0x50e12, indexCPS2Sprites_SFA3Assets, 0xab },
    { L"A-Ism Punch", 0x50e12, 0x50e92, indexCPS2Sprites_SFA3Assets, 0xab },
    { L"A-Ism Kick", 0x50e92, 0x50f12, indexCPS2Sprites_SFA3Assets, 0xab },
    { L"V-Ism Punch", 0x50f12, 0x50f92, indexCPS2Sprites_SFA3Assets, 0xab },
    { L"V-Ism Kick", 0x50f92, 0x51012, indexCPS2Sprites_SFA3Assets, 0xab },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51012, 0x51092, indexCPS2Sprites_SFA3Assets, 0xa3 },
    { L"X-Ism Kick", 0x51092, 0x51112, indexCPS2Sprites_SFA3Assets, 0xa3 },
    { L"A-Ism Punch", 0x51112, 0x51192, indexCPS2Sprites_SFA3Assets, 0xa3 },
    { L"A-Ism Kick", 0x51192, 0x51212, indexCPS2Sprites_SFA3Assets, 0xa3 },
    { L"V-Ism Punch", 0x51212, 0x51292, indexCPS2Sprites_SFA3Assets, 0xa3 },
    { L"V-Ism Kick", 0x51292, 0x51312, indexCPS2Sprites_SFA3Assets, 0xa3 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51312, 0x51392, indexCPS2Sprites_SFA3Assets, 0xb1 },
    { L"X-Ism Kick", 0x51392, 0x51412, indexCPS2Sprites_SFA3Assets, 0xb1 },
    { L"A-Ism Punch", 0x51412, 0x51492, indexCPS2Sprites_SFA3Assets, 0xb1 },
    { L"A-Ism Kick", 0x51492, 0x51512, indexCPS2Sprites_SFA3Assets, 0xb1 },
    { L"V-Ism Punch", 0x51512, 0x51592, indexCPS2Sprites_SFA3Assets, 0xb1 },
    { L"V-Ism Kick", 0x51592, 0x51612, indexCPS2Sprites_SFA3Assets, 0xb1 },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51612, 0x51692, indexCPS2Sprites_SFA3Assets, 0xa8 },
    { L"X-Ism Kick", 0x51692, 0x51712, indexCPS2Sprites_SFA3Assets, 0xa8 },
    { L"A-Ism Punch", 0x51712, 0x51792, indexCPS2Sprites_SFA3Assets, 0xa8 },
    { L"A-Ism Kick", 0x51792, 0x51812, indexCPS2Sprites_SFA3Assets, 0xa8 },
    { L"V-Ism Punch", 0x51812, 0x51892, indexCPS2Sprites_SFA3Assets, 0xa8 },
    { L"V-Ism Kick", 0x51892, 0x51912, indexCPS2Sprites_SFA3Assets, 0xa8 },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51912, 0x51992, indexCPS2Sprites_SFA3Assets, 0xb8 },
    { L"X-Ism Kick", 0x51992, 0x51a12, indexCPS2Sprites_SFA3Assets, 0xb8 },
    { L"A-Ism Punch", 0x51a12, 0x51a92, indexCPS2Sprites_SFA3Assets, 0xb8 },
    { L"A-Ism Kick", 0x51a92, 0x51b12, indexCPS2Sprites_SFA3Assets, 0xb8 },
    { L"V-Ism Punch", 0x51b12, 0x51b92, indexCPS2Sprites_SFA3Assets, 0xb8 },
    { L"V-Ism Kick", 0x51b92, 0x51c12, indexCPS2Sprites_SFA3Assets, 0xb8 },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51c12, 0x51c92, indexCPS2Sprites_SFA3Assets, 0xae },
    { L"X-Ism Kick", 0x51c92, 0x51d12, indexCPS2Sprites_SFA3Assets, 0xae },
    { L"A-Ism Punch", 0x51d12, 0x51d92, indexCPS2Sprites_SFA3Assets, 0xae },
    { L"A-Ism Kick", 0x51d92, 0x51e12, indexCPS2Sprites_SFA3Assets, 0xae },
    { L"V-Ism Punch", 0x51e12, 0x51e92, indexCPS2Sprites_SFA3Assets, 0xae },
    { L"V-Ism Kick", 0x51e92, 0x51f12, indexCPS2Sprites_SFA3Assets, 0xae },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x51f92, 0x52072, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ryu },
    { L"X-Ism Kick", 0x52092, 0x52172, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ryu },
    { L"A-Ism Punch", 0x52192, 0x52272, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ryu },
    { L"A-Ism Kick", 0x52292, 0x52372, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ryu },
    { L"V-Ism Punch", 0x52392, 0x52472, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ryu },
    { L"V-Ism Kick", 0x52492, 0x52572, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ryu },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x52592, 0x52692, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ken },
    { L"X-Ism Kick", 0x52692, 0x52792, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ken },
    { L"A-Ism Punch", 0x52792, 0x52892, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ken },
    { L"A-Ism Kick", 0x52892, 0x52992, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ken },
    { L"V-Ism Punch", 0x52992, 0x52a92, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ken },
    { L"V-Ism Kick", 0x52a92, 0x52b92, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Ken },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x52b92, 0x52bf2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Akuma },
    { L"X-Ism Kick", 0x52c92, 0x52cf2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Akuma },
    { L"A-Ism Punch", 0x52d92, 0x52df2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Akuma },
    { L"A-Ism Kick", 0x52e92, 0x52ef2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Akuma },
    { L"V-Ism Punch", 0x52f92, 0x52ff2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Akuma },
    { L"V-Ism Kick", 0x53092, 0x530f2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Akuma },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53192, 0x53292, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Charlie },
    { L"X-Ism Kick", 0x53292, 0x53392, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Charlie },
    { L"A-Ism Punch", 0x53392, 0x53492, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Charlie },
    { L"A-Ism Kick", 0x53492, 0x53592, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Charlie },
    { L"V-Ism Punch", 0x53592, 0x53692, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Charlie },
    { L"V-Ism Kick", 0x53692, 0x53792, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Charlie },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53792, 0x537f2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
    { L"X-Ism Kick", 0x53892, 0x538f2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
    { L"A-Ism Punch", 0x53992, 0x53a52, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_ChunLi },
    { L"A-Ism Kick", 0x53a92, 0x53b52, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_ChunLi },
    { L"V-Ism Punch", 0x53b92, 0x53c52, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_ChunLi },
    { L"V-Ism Kick", 0x53c92, 0x53d52, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_ChunLi },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53d92, 0x53e12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Adon },
    { L"X-Ism Kick", 0x53e92, 0x53f12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Adon },
    { L"A-Ism Punch", 0x53f92, 0x54012, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Adon },
    { L"A-Ism Kick", 0x54092, 0x54112, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Adon },
    { L"V-Ism Punch", 0x54192, 0x54212, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Adon },
    { L"V-Ism Kick", 0x54292, 0x54312, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Adon },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54392, 0x54492, indexCPS2Sprites_SFA3_Portraits, 0x3c },
    { L"X-Ism Kick", 0x54492, 0x54592, indexCPS2Sprites_SFA3_Portraits, 0x3c },
    { L"A-Ism Punch", 0x54592, 0x54692, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sodom },
    { L"A-Ism Kick", 0x54692, 0x54792, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sodom },
    { L"V-Ism Punch", 0x54792, 0x54892, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sodom },
    { L"V-Ism Kick", 0x54892, 0x54992, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sodom },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54992, 0x54a32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Guy },
    { L"X-Ism Kick", 0x54a92, 0x54b32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Guy },
    { L"A-Ism Punch", 0x54b92, 0x54c32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Guy },
    { L"A-Ism Kick", 0x54c92, 0x54d32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Guy },
    { L"V-Ism Punch", 0x54d92, 0x54e32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Guy },
    { L"V-Ism Kick", 0x54e92, 0x54f32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Guy },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54f92, 0x55072, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Birdie },
    { L"X-Ism Kick", 0x55092, 0x55172, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Birdie },
    { L"A-Ism Punch", 0x55192, 0x55272, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Birdie },
    { L"A-Ism Kick", 0x55292, 0x55372, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Birdie },
    { L"V-Ism Punch", 0x55392, 0x55472, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Birdie },
    { L"V-Ism Kick", 0x55492, 0x55572, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Birdie },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x55592, 0x55652, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rose },
    { L"X-Ism Kick", 0x55692, 0x55752, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rose },
    { L"A-Ism Punch", 0x55792, 0x55852, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rose },
    { L"A-Ism Kick", 0x55892, 0x55952, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rose },
    { L"V-Ism Punch", 0x55992, 0x55a52, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rose },
    { L"V-Ism Kick", 0x55a92, 0x55b52, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rose },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x55b92, 0x55c72, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Bison },
    { L"X-Ism Kick", 0x55c92, 0x55d72, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Bison },
    { L"A-Ism Punch", 0x55d92, 0x55e72, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Bison },
    { L"A-Ism Kick", 0x55e92, 0x55f72, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Bison },
    { L"V-Ism Punch", 0x55f92, 0x56072, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Bison },
    { L"V-Ism Kick", 0x56092, 0x56172, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Bison },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56192, 0x561b2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sagat },
    { L"X-Ism Kick", 0x56292, 0x562b2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sagat },
    { L"A-Ism Punch", 0x56392, 0x563b2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sagat },
    { L"A-Ism Kick", 0x56492, 0x564b2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sagat },
    { L"V-Ism Punch", 0x56592, 0x565b2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sagat },
    { L"V-Ism Kick", 0x56692, 0x566b2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sagat },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56792, 0x56832, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dan },
    { L"X-Ism Kick", 0x56892, 0x56932, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dan },
    { L"A-Ism Punch", 0x56992, 0x56a32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dan },
    { L"A-Ism Kick", 0x56a92, 0x56b32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dan },
    { L"V-Ism Punch", 0x56b92, 0x56c32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dan },
    { L"V-Ism Kick", 0x56c92, 0x56d32, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dan },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56d92, 0x56e12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sakura },
    { L"X-Ism Kick", 0x56e92, 0x56f12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sakura },
    { L"A-Ism Punch", 0x56f92, 0x57012, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sakura },
    { L"A-Ism Kick", 0x57092, 0x57112, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sakura },
    { L"V-Ism Punch", 0x57192, 0x57212, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sakura },
    { L"V-Ism Kick", 0x57292, 0x57312, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Sakura },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57392, 0x57472, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rolento },
    { L"X-Ism Kick", 0x57492, 0x57572, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rolento },
    { L"A-Ism Punch", 0x57592, 0x57672, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rolento },
    { L"A-Ism Kick", 0x57692, 0x57772, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rolento },
    { L"V-Ism Punch", 0x57792, 0x57872, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rolento },
    { L"V-Ism Kick", 0x57892, 0x57972, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Rolento },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57992, 0x57a12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dhalsim },
    { L"X-Ism Kick", 0x57a92, 0x57b12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dhalsim },
    { L"A-Ism Punch", 0x57b92, 0x57c12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dhalsim },
    { L"A-Ism Kick", 0x57c92, 0x57d12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dhalsim },
    { L"V-Ism Punch", 0x57d92, 0x57e12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dhalsim },
    { L"V-Ism Kick", 0x57e92, 0x57f12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Dhalsim },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57f92, 0x57fd2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Zangief },
    { L"X-Ism Kick", 0x58092, 0x580d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Zangief },
    { L"A-Ism Punch", 0x58192, 0x581d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Zangief },
    { L"A-Ism Kick", 0x58292, 0x582d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Zangief },
    { L"V-Ism Punch", 0x58392, 0x583d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Zangief },
    { L"V-Ism Kick", 0x58492, 0x584d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x58592, 0x58612, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Gen },
    { L"X-Ism Kick", 0x58692, 0x58712, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Gen },
    { L"A-Ism Punch", 0x58792, 0x58812, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Gen },
    { L"A-Ism Kick", 0x58892, 0x58912, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Gen },
    { L"V-Ism Punch", 0x58992, 0x58a12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Gen },
    { L"V-Ism Kick", 0x58a92, 0x58b12, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Gen },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59192, 0x59232, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cammy },
    { L"X-Ism Kick", 0x59292, 0x59332, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cammy },
    { L"A-Ism Punch", 0x59392, 0x59432, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cammy },
    { L"A-Ism Kick", 0x59492, 0x59532, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cammy },
    { L"V-Ism Punch", 0x59592, 0x59632, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cammy },
    { L"V-Ism Kick", 0x59692, 0x59732, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cammy },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59792, 0x597d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_EHonda },
    { L"X-Ism Kick", 0x59892, 0x598d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_EHonda },
    { L"A-Ism Punch", 0x59992, 0x599d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_EHonda },
    { L"A-Ism Kick", 0x59a92, 0x59ad2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_EHonda },
    { L"V-Ism Punch", 0x59b92, 0x59bd2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_EHonda },
    { L"V-Ism Kick", 0x59c92, 0x59cd2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_EHonda },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59d92, 0x59dd2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Blanka },
    { L"X-Ism Kick", 0x59e92, 0x59ed2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Blanka },
    { L"A-Ism Punch", 0x59f92, 0x59fd2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Blanka },
    { L"A-Ism Kick", 0x5a092, 0x5a0d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Blanka },
    { L"V-Ism Punch", 0x5a192, 0x5a1d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Blanka },
    { L"V-Ism Kick", 0x5a292, 0x5a2d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Blanka },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5a392, 0x5a412, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_RMika },
    { L"X-Ism Kick", 0x5a492, 0x5a512, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_RMika },
    { L"A-Ism Punch", 0x5a592, 0x5a612, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_RMika },
    { L"A-Ism Kick", 0x5a692, 0x5a712, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_RMika },
    { L"V-Ism Punch", 0x5a792, 0x5a812, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_RMika },
    { L"V-Ism Kick", 0x5a892, 0x5a912, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_RMika },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5a992, 0x5a9d2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cody },
    { L"X-Ism Kick", 0x5aa92, 0x5aad2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cody },
    { L"A-Ism Punch", 0x5ab92, 0x5abd2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cody },
    { L"A-Ism Kick", 0x5ac92, 0x5acd2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cody },
    { L"V-Ism Punch", 0x5ad92, 0x5add2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cody },
    { L"V-Ism Kick", 0x5ae92, 0x5aed2, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Cody },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5af92, 0x5b052, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Vega },
    { L"X-Ism Kick", 0x5b092, 0x5b152, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Vega },
    { L"A-Ism Punch", 0x5b192, 0x5b252, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Vega },
    { L"A-Ism Kick", 0x5b292, 0x5b352, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Vega },
    { L"V-Ism Punch", 0x5b392, 0x5b452, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Vega },
    { L"V-Ism Kick", 0x5b492, 0x5b552, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Vega },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5b592, 0x5b692, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Karin },
    { L"X-Ism Kick", 0x5b692, 0x5b792, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Karin },
    { L"A-Ism Punch", 0x5b792, 0x5b892, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Karin },
    { L"A-Ism Kick", 0x5b892, 0x5b992, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Karin },
    { L"V-Ism Punch", 0x5b992, 0x5ba92, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Karin },
    { L"V-Ism Kick", 0x5ba92, 0x5bb92, indexCPS2Sprites_SFA3_Portraits, indexCPS2Sprites_Karin },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES_UNUSED[] =
{
    { L"X-Ism Punch Alt", 0x50412, 0x50492, indexCPS2Sprites_SFA3Assets, 0xa6 },
    { L"X-Ism Kick Alt", 0x50492, 0x50512, indexCPS2Sprites_SFA3Assets, 0xa6 },
    { L"A-Ism Punch Alt", 0x50512, 0x50592, indexCPS2Sprites_SFA3Assets, 0xa6 },
    { L"A-Ism Kick Alt", 0x50592, 0x50612, indexCPS2Sprites_SFA3Assets, 0xa6 },
    { L"V-Ism Punch Alt", 0x50612, 0x50692, indexCPS2Sprites_SFA3Assets, 0xa6 },
    { L"V-Ism Kick Alt", 0x50692, 0x50712, indexCPS2Sprites_SFA3Assets, 0xa6 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES_UNUSED[] =
{
    { L"X-Ism Punch Alt", 0x58b92, 0x58bf2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
    { L"X-Ism Kick Alt", 0x58c92, 0x58cf2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
    { L"A-Ism Punch Alt", 0x58d92, 0x58df2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
    { L"A-Ism Kick Alt", 0x58e92, 0x58ef2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
    { L"V-Ism Punch Alt", 0x58f92, 0x58ff2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
    { L"V-Ism Kick Alt", 0x59092, 0x590f2, indexCPS2Sprites_SFA3_Portraits, 0x1c },
};

const sGame_PaletteDataset SFA3_A_SHINGOUKI_PORTRAIT_SELECT_PALETTES_UNUSED[] =
{
    { L"X-Ism Punch", 0x50712, 0x50792, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"X-Ism Kick", 0x50792, 0x50812, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"A-Ism Punch", 0x50812, 0x50892, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"A-Ism Kick", 0x50892, 0x50912, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"V-Ism Punch", 0x50912, 0x50992, indexCPS2Sprites_SFA3Assets, 0xa1 },
    { L"V-Ism Kick", 0x50992, 0x50a12, indexCPS2Sprites_SFA3Assets, 0xa1 },
};

const sDescTreeNode SFA3_A_RYU_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_XISMP,      ARRAYSIZE(SFA3_A_RYU_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_XISMK,      ARRAYSIZE(SFA3_A_RYU_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_AISMP,      ARRAYSIZE(SFA3_A_RYU_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_AISMK,      ARRAYSIZE(SFA3_A_RYU_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_VISMP,      ARRAYSIZE(SFA3_A_RYU_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_VISMK,      ARRAYSIZE(SFA3_A_RYU_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_STATUS,     ARRAYSIZE(SFA3_A_RYU_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_RYU_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_RYU_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_KEN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_XISMP,      ARRAYSIZE(SFA3_A_KEN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_XISMK,      ARRAYSIZE(SFA3_A_KEN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_AISMP,      ARRAYSIZE(SFA3_A_KEN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_AISMK,      ARRAYSIZE(SFA3_A_KEN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_VISMP,      ARRAYSIZE(SFA3_A_KEN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_VISMK,      ARRAYSIZE(SFA3_A_KEN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_STATUS,     ARRAYSIZE(SFA3_A_KEN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_KEN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_KEN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_GOUKI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_XISMP,      ARRAYSIZE(SFA3_A_GOUKI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_XISMK,      ARRAYSIZE(SFA3_A_GOUKI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_AISMP,      ARRAYSIZE(SFA3_A_GOUKI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_AISMK,      ARRAYSIZE(SFA3_A_GOUKI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_VISMP,      ARRAYSIZE(SFA3_A_GOUKI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_VISMK,      ARRAYSIZE(SFA3_A_GOUKI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_STATUS,     ARRAYSIZE(SFA3_A_GOUKI_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_AKUMA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_AKUMA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_AKUMA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_AKUMA_PORTRAIT_WIN_PALETTES) },

    { L"Shin Gouki Select Portraits (Unused)", DESC_NODETYPE_TREE, (void*)SFA3_A_SHINGOUKI_PORTRAIT_SELECT_PALETTES_UNUSED, ARRAYSIZE(SFA3_A_SHINGOUKI_PORTRAIT_SELECT_PALETTES_UNUSED) },
};

const sDescTreeNode SFA3_A_CHARLIE_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_XISMP,      ARRAYSIZE(SFA3_A_CHARLIE_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_XISMK,      ARRAYSIZE(SFA3_A_CHARLIE_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_AISMP,      ARRAYSIZE(SFA3_A_CHARLIE_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_AISMK,      ARRAYSIZE(SFA3_A_CHARLIE_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_VISMP,      ARRAYSIZE(SFA3_A_CHARLIE_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_VISMK,      ARRAYSIZE(SFA3_A_CHARLIE_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_STATUS,     ARRAYSIZE(SFA3_A_CHARLIE_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CHARLIE_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CHARLIE_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_CHUNLI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_XISMP,      ARRAYSIZE(SFA3_A_CHUNLI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_XISMK,      ARRAYSIZE(SFA3_A_CHUNLI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_AISMP,      ARRAYSIZE(SFA3_A_CHUNLI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_AISMK,      ARRAYSIZE(SFA3_A_CHUNLI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_VISMP,      ARRAYSIZE(SFA3_A_CHUNLI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_VISMK,      ARRAYSIZE(SFA3_A_CHUNLI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_STATUS,     ARRAYSIZE(SFA3_A_CHUNLI_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES) },

    { L"Unused Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES_UNUSED, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES_UNUSED) },
    { L"Unused Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES_UNUSED, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES_UNUSED) },
};

const sDescTreeNode SFA3_A_ADON_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_XISMP,      ARRAYSIZE(SFA3_A_ADON_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_XISMK,      ARRAYSIZE(SFA3_A_ADON_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_AISMP,      ARRAYSIZE(SFA3_A_ADON_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_AISMK,      ARRAYSIZE(SFA3_A_ADON_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_VISMP,      ARRAYSIZE(SFA3_A_ADON_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_VISMK,      ARRAYSIZE(SFA3_A_ADON_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_STATUS,     ARRAYSIZE(SFA3_A_ADON_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ADON_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ADON_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_SODOM_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_XISMP,      ARRAYSIZE(SFA3_A_SODOM_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_XISMK,      ARRAYSIZE(SFA3_A_SODOM_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_AISMP,      ARRAYSIZE(SFA3_A_SODOM_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_AISMK,      ARRAYSIZE(SFA3_A_SODOM_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_VISMP,      ARRAYSIZE(SFA3_A_SODOM_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_VISMK,      ARRAYSIZE(SFA3_A_SODOM_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_STATUS,     ARRAYSIZE(SFA3_A_SODOM_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_SODOM_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_SODOM_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_GUY_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_XISMP,      ARRAYSIZE(SFA3_A_GUY_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_XISMK,      ARRAYSIZE(SFA3_A_GUY_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_AISMP,      ARRAYSIZE(SFA3_A_GUY_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_AISMK,      ARRAYSIZE(SFA3_A_GUY_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_VISMP,      ARRAYSIZE(SFA3_A_GUY_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_VISMK,      ARRAYSIZE(SFA3_A_GUY_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_STATUS,     ARRAYSIZE(SFA3_A_GUY_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_GUY_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_GUY_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_BIRDIE_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_XISMP,      ARRAYSIZE(SFA3_A_BIRDIE_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_XISMK,      ARRAYSIZE(SFA3_A_BIRDIE_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_AISMP,      ARRAYSIZE(SFA3_A_BIRDIE_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_AISMK,      ARRAYSIZE(SFA3_A_BIRDIE_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_VISMP,      ARRAYSIZE(SFA3_A_BIRDIE_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_VISMK,      ARRAYSIZE(SFA3_A_BIRDIE_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_STATUS,     ARRAYSIZE(SFA3_A_BIRDIE_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_BIRDIE_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_BIRDIE_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_ROSE_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMP,      ARRAYSIZE(SFA3_A_ROSE_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMK,      ARRAYSIZE(SFA3_A_ROSE_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMP,      ARRAYSIZE(SFA3_A_ROSE_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMK,      ARRAYSIZE(SFA3_A_ROSE_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMP,      ARRAYSIZE(SFA3_A_ROSE_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMK,      ARRAYSIZE(SFA3_A_ROSE_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_STATUS,     ARRAYSIZE(SFA3_A_ROSE_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ROSE_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ROSE_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_MBISON_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_XISMP,      ARRAYSIZE(SFA3_A_MBISON_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_XISMK,      ARRAYSIZE(SFA3_A_MBISON_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_AISMP,      ARRAYSIZE(SFA3_A_MBISON_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_AISMK,      ARRAYSIZE(SFA3_A_MBISON_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_VISMP,      ARRAYSIZE(SFA3_A_MBISON_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_VISMK,      ARRAYSIZE(SFA3_A_MBISON_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_STATUS,     ARRAYSIZE(SFA3_A_MBISON_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_MBISON_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_MBISON_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_SAGAT_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_XISMP,      ARRAYSIZE(SFA3_A_SAGAT_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_XISMK,      ARRAYSIZE(SFA3_A_SAGAT_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_AISMP,      ARRAYSIZE(SFA3_A_SAGAT_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_AISMK,      ARRAYSIZE(SFA3_A_SAGAT_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_VISMP,      ARRAYSIZE(SFA3_A_SAGAT_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_VISMK,      ARRAYSIZE(SFA3_A_SAGAT_VISMK) },
    { L"Shared",         DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_SHARED,     ARRAYSIZE(SFA3_A_SAGAT_SHARED) },

    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_STATUS,     ARRAYSIZE(SFA3_A_SAGAT_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_SAGAT_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_SAGAT_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_DAN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_XISMP,      ARRAYSIZE(SFA3_A_DAN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_XISMK,      ARRAYSIZE(SFA3_A_DAN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_AISMP,      ARRAYSIZE(SFA3_A_DAN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_AISMK,      ARRAYSIZE(SFA3_A_DAN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_VISMP,      ARRAYSIZE(SFA3_A_DAN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_VISMK,      ARRAYSIZE(SFA3_A_DAN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_STATUS,     ARRAYSIZE(SFA3_A_DAN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_DAN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_DAN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_SAKURA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_XISMP,      ARRAYSIZE(SFA3_A_SAKURA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_XISMK,      ARRAYSIZE(SFA3_A_SAKURA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_AISMP,      ARRAYSIZE(SFA3_A_SAKURA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_AISMK,      ARRAYSIZE(SFA3_A_SAKURA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_VISMP,      ARRAYSIZE(SFA3_A_SAKURA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_VISMK,      ARRAYSIZE(SFA3_A_SAKURA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_STATUS,     ARRAYSIZE(SFA3_A_SAKURA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_SAKURA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_SAKURA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_ROLENTO_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_XISMP,      ARRAYSIZE(SFA3_A_ROLENTO_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_XISMK,      ARRAYSIZE(SFA3_A_ROLENTO_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_AISMP,      ARRAYSIZE(SFA3_A_ROLENTO_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_AISMK,      ARRAYSIZE(SFA3_A_ROLENTO_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_VISMP,      ARRAYSIZE(SFA3_A_ROLENTO_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_VISMK,      ARRAYSIZE(SFA3_A_ROLENTO_VISMK) },
    { L"Shared",         DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_SHARED,     ARRAYSIZE(SFA3_A_ROLENTO_SHARED) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_STATUS,     ARRAYSIZE(SFA3_A_ROLENTO_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ROLENTO_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ROLENTO_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_DHALSIM_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_XISMP,      ARRAYSIZE(SFA3_A_DHALSIM_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_XISMK,      ARRAYSIZE(SFA3_A_DHALSIM_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_AISMP,      ARRAYSIZE(SFA3_A_DHALSIM_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_AISMK,      ARRAYSIZE(SFA3_A_DHALSIM_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_VISMP,      ARRAYSIZE(SFA3_A_DHALSIM_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_VISMK,      ARRAYSIZE(SFA3_A_DHALSIM_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_STATUS,     ARRAYSIZE(SFA3_A_DHALSIM_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_DHALSIM_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_DHALSIM_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_ZANGIEF_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_XISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_XISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_AISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_AISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_VISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_VISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_STATUS,     ARRAYSIZE(SFA3_A_ZANGIEF_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ZANGIEF_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ZANGIEF_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_GEN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_XISMP,      ARRAYSIZE(SFA3_A_GEN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_XISMK,      ARRAYSIZE(SFA3_A_GEN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_AISMP,      ARRAYSIZE(SFA3_A_GEN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_AISMK,      ARRAYSIZE(SFA3_A_GEN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_VISMP,      ARRAYSIZE(SFA3_A_GEN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_VISMK,      ARRAYSIZE(SFA3_A_GEN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_STATUS,     ARRAYSIZE(SFA3_A_GEN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_GEN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_GEN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_BALROG_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_XISMP,      ARRAYSIZE(SFA3_A_BALROG_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_XISMK,      ARRAYSIZE(SFA3_A_BALROG_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_AISMP,      ARRAYSIZE(SFA3_A_BALROG_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_AISMK,      ARRAYSIZE(SFA3_A_BALROG_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_VISMP,      ARRAYSIZE(SFA3_A_BALROG_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_VISMK,      ARRAYSIZE(SFA3_A_BALROG_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_STATUS,     ARRAYSIZE(SFA3_A_BALROG_STATUS) },
};

const sDescTreeNode SFA3_A_CAMMY_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_XISMP,      ARRAYSIZE(SFA3_A_CAMMY_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_XISMK,      ARRAYSIZE(SFA3_A_CAMMY_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_AISMP,      ARRAYSIZE(SFA3_A_CAMMY_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_AISMK,      ARRAYSIZE(SFA3_A_CAMMY_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_VISMP,      ARRAYSIZE(SFA3_A_CAMMY_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_VISMK,      ARRAYSIZE(SFA3_A_CAMMY_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_STATUS,     ARRAYSIZE(SFA3_A_CAMMY_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CAMMY_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CAMMY_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_EHONDA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_XISMP,      ARRAYSIZE(SFA3_A_EHONDA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_XISMK,      ARRAYSIZE(SFA3_A_EHONDA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_AISMP,      ARRAYSIZE(SFA3_A_EHONDA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_AISMK,      ARRAYSIZE(SFA3_A_EHONDA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_VISMP,      ARRAYSIZE(SFA3_A_EHONDA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_VISMK,      ARRAYSIZE(SFA3_A_EHONDA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_STATUS,     ARRAYSIZE(SFA3_A_EHONDA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_EHONDA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_EHONDA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_BLANKA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_XISMP,      ARRAYSIZE(SFA3_A_BLANKA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_XISMK,      ARRAYSIZE(SFA3_A_BLANKA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_AISMP,      ARRAYSIZE(SFA3_A_BLANKA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_AISMK,      ARRAYSIZE(SFA3_A_BLANKA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_VISMP,      ARRAYSIZE(SFA3_A_BLANKA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_VISMK,      ARRAYSIZE(SFA3_A_BLANKA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_STATUS,     ARRAYSIZE(SFA3_A_BLANKA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_BLANKA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_BLANKA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_RMIKA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_XISMP,      ARRAYSIZE(SFA3_A_RMIKA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_XISMK,      ARRAYSIZE(SFA3_A_RMIKA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_AISMP,      ARRAYSIZE(SFA3_A_RMIKA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_AISMK,      ARRAYSIZE(SFA3_A_RMIKA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_VISMP,      ARRAYSIZE(SFA3_A_RMIKA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_VISMK,      ARRAYSIZE(SFA3_A_RMIKA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_STATUS,     ARRAYSIZE(SFA3_A_RMIKA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_RMIKA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_RMIKA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_CODY_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_XISMP,      ARRAYSIZE(SFA3_A_CODY_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_XISMK,      ARRAYSIZE(SFA3_A_CODY_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_AISMP,      ARRAYSIZE(SFA3_A_CODY_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_AISMK,      ARRAYSIZE(SFA3_A_CODY_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_VISMP,      ARRAYSIZE(SFA3_A_CODY_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_VISMK,      ARRAYSIZE(SFA3_A_CODY_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_STATUS,     ARRAYSIZE(SFA3_A_CODY_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CODY_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CODY_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_VEGA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMP,      ARRAYSIZE(SFA3_A_VEGA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMK,      ARRAYSIZE(SFA3_A_VEGA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMP,      ARRAYSIZE(SFA3_A_VEGA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMK,      ARRAYSIZE(SFA3_A_VEGA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMP,      ARRAYSIZE(SFA3_A_VEGA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMK,      ARRAYSIZE(SFA3_A_VEGA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_STATUS,     ARRAYSIZE(SFA3_A_VEGA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_VEGA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_VEGA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_KARIN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_XISMP,      ARRAYSIZE(SFA3_A_KARIN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_XISMK,      ARRAYSIZE(SFA3_A_KARIN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_AISMP,      ARRAYSIZE(SFA3_A_KARIN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_AISMK,      ARRAYSIZE(SFA3_A_KARIN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_VISMP,      ARRAYSIZE(SFA3_A_KARIN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_VISMK,      ARRAYSIZE(SFA3_A_KARIN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_STATUS,     ARRAYSIZE(SFA3_A_KARIN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_KARIN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_KARIN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_JULI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_XISMP,      ARRAYSIZE(SFA3_A_JULI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_XISMK,      ARRAYSIZE(SFA3_A_JULI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_AISMP,      ARRAYSIZE(SFA3_A_JULI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_AISMK,      ARRAYSIZE(SFA3_A_JULI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_VISMP,      ARRAYSIZE(SFA3_A_JULI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_VISMK,      ARRAYSIZE(SFA3_A_JULI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_STATUS,     ARRAYSIZE(SFA3_A_JULI_STATUS) },
};

const sDescTreeNode SFA3_A_JUNI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_XISMP,      ARRAYSIZE(SFA3_A_JUNI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_XISMK,      ARRAYSIZE(SFA3_A_JUNI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_AISMP,      ARRAYSIZE(SFA3_A_JUNI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_AISMK,      ARRAYSIZE(SFA3_A_JUNI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_VISMP,      ARRAYSIZE(SFA3_A_JUNI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_VISMK,      ARRAYSIZE(SFA3_A_JUNI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_STATUS,     ARRAYSIZE(SFA3_A_JUNI_STATUS) }, 
};

const sDescTreeNode SFA3_A_BONUS_COLLECTION[] =
{
    { L"Character Select", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_CSEL,       ARRAYSIZE(SFA3_A_PALETTES_BONUS_CSEL) },
    { L"Character Group 1", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_CGROUP1,   ARRAYSIZE(SFA3_A_PALETTES_BONUS_CGROUP1) },
    { L"Character Group 2", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_CGROUP2,   ARRAYSIZE(SFA3_A_PALETTES_BONUS_CGROUP2) },
    { L"Character Group 3", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_CGROUP3,   ARRAYSIZE(SFA3_A_PALETTES_BONUS_CGROUP3) },
    { L"Character Group 4", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_CGROUP4,   ARRAYSIZE(SFA3_A_PALETTES_BONUS_CGROUP4) },
    { L"Character Group 5", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_CGROUP5,   ARRAYSIZE(SFA3_A_PALETTES_BONUS_CGROUP5) },
    { L"Round Text", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_ROUND,            ARRAYSIZE(SFA3_A_PALETTES_BONUS_ROUND) },
    { L"Shadaloo Dolls", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_DOLLS,        ARRAYSIZE(SFA3_A_PALETTES_BONUS_DOLLS) },
    { L"Title Screen", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_TITLES,         ARRAYSIZE(SFA3_A_PALETTES_BONUS_TITLES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_PALETTES_BONUS_BONUS,        ARRAYSIZE(SFA3_A_PALETTES_BONUS_BONUS) },
};

const sDescTreeNode SFA3_A_STAGES_COLLECTION[] =
{
    { L"Adon Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ADON_NODE, ARRAYSIZE(SFA3_A_STAGES_ADON_NODE) },

    { L"Akuma Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_AKUMA_NODE, ARRAYSIZE(SFA3_A_STAGES_AKUMA_NODE) },
        { L"Akuma Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_AKUMA_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_AKUMA_NODE_ANIMATION) },
    { L"Birdie Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_BIRDIE_NODE, ARRAYSIZE(SFA3_A_STAGES_BIRDIE_NODE) },
        { L"Birdie Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_BIRDIE_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_BIRDIE_NODE_ANIMATION) },
    { L"Blanka Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_BLANKA_NODE, ARRAYSIZE(SFA3_A_STAGES_BLANKA_NODE) },
    { L"Cammy Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_CAMMY_NODE, ARRAYSIZE(SFA3_A_STAGES_CAMMY_NODE) },
        { L"Cammy Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_CAMMY_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_CAMMY_NODE_ANIMATION) },
    { L"Chun-Li Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_CHUNLI_NODE, ARRAYSIZE(SFA3_A_STAGES_CHUNLI_NODE) },
    { L"Cody Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_CODY_NODE, ARRAYSIZE(SFA3_A_STAGES_CODY_NODE) },
    { L"Dan Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_DAN_NODE, ARRAYSIZE(SFA3_A_STAGES_DAN_NODE) },
    { L"Dhalsim Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_DHALSIM_NODE, ARRAYSIZE(SFA3_A_STAGES_DHALSIM_NODE) },
    { L"E.Honda Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_EHONDA_NODE, ARRAYSIZE(SFA3_A_STAGES_EHONDA_NODE) },
        { L"E.Honda Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_EHONDA_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_EHONDA_NODE_ANIMATION) },
    { L"Gen Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_GEN_NODE, ARRAYSIZE(SFA3_A_STAGES_GEN_NODE) },
        { L"Gen Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_GEN_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_GEN_NODE_ANIMATION) },
    { L"Guy Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_GUY_NODE, ARRAYSIZE(SFA3_A_STAGES_GUY_NODE) },
        { L"Guy Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_GUY_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_GUY_NODE_ANIMATION) },
    { L"Juni/Juli Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_JUNIJULI_NODE, ARRAYSIZE(SFA3_A_STAGES_JUNIJULI_NODE) },
        { L"Juni/Juli Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_JUNIJULI_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_JUNIJULI_NODE_ANIMATION) },
    { L"Karin Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_KARIN_NODE, ARRAYSIZE(SFA3_A_STAGES_KARIN_NODE) },
        { L"Karin Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_KARIN_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_KARIN_NODE_ANIMATION) },
    { L"Ken Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_KEN_NODE, ARRAYSIZE(SFA3_A_STAGES_KEN_NODE) },
    { L"M.Bison Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_MBISON_NODE, ARRAYSIZE(SFA3_A_STAGES_MBISON_NODE) },
        { L"M.Bison Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_MBISON_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_MBISON_NODE_ANIMATION) },
    { L"Nash Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_NASH_NODE, ARRAYSIZE(SFA3_A_STAGES_NASH_NODE) },
    { L"R.Mika Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_RMIKA_NODE, ARRAYSIZE(SFA3_A_STAGES_RMIKA_NODE) },
    { L"Rolento Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ROLENTO_NODE, ARRAYSIZE(SFA3_A_STAGES_ROLENTO_NODE) },
        { L"Rolento Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ROLENTO_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_ROLENTO_NODE_ANIMATION) },
    { L"Rose Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ROSE_NODE, ARRAYSIZE(SFA3_A_STAGES_ROSE_NODE) },
        { L"Rose Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ROSE_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_ROSE_NODE_ANIMATION) },
    { L"Ryu Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_RYU_NODE, ARRAYSIZE(SFA3_A_STAGES_RYU_NODE) },
        { L"Ryu Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_RYU_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_RYU_NODE_ANIMATION) },
    { L"Sakura Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_SAKURA_NODE, ARRAYSIZE(SFA3_A_STAGES_SAKURA_NODE) },
    { L"Sagat Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_SAGAT_NODE, ARRAYSIZE(SFA3_A_STAGES_SAGAT_NODE) },
    { L"Sodom Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_SODOM_NODE, ARRAYSIZE(SFA3_A_STAGES_SODOM_NODE) },
        { L"Sodom Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_SODOM_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_SODOM_NODE_ANIMATION) },
    { L"Vega Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_VEGA_NODE, ARRAYSIZE(SFA3_A_STAGES_VEGA_NODE) },
    { L"Zangief Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ZANGIEF_NODE, ARRAYSIZE(SFA3_A_STAGES_ZANGIEF_NODE) },
        { L"Zangief Stage Animations", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ZANGIEF_NODE_ANIMATION, ARRAYSIZE(SFA3_A_STAGES_ZANGIEF_NODE_ANIMATION) },
};

#define k_sfa3NameKey_ChunLi L"Chun-Li"
#define k_sfa3NameKey_Sodom L"Sodom"

const sDescTreeNode SFA3_A_UNITS[] =
{
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_COLLECTION,          ARRAYSIZE(SFA3_A_ADON_COLLECTION) },
    { L"Balrog",          DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_COLLECTION,        ARRAYSIZE(SFA3_A_BALROG_COLLECTION) },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA3_A_BIRDIE_COLLECTION) },
    { L"Blanka",          DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_COLLECTION,        ARRAYSIZE(SFA3_A_BLANKA_COLLECTION) },
    { L"Cammy",           DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_COLLECTION,         ARRAYSIZE(SFA3_A_CAMMY_COLLECTION) },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA3_A_CHARLIE_COLLECTION) },
    { k_sfa3NameKey_ChunLi, DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_COLLECTION,      ARRAYSIZE(SFA3_A_CHUNLI_COLLECTION) },
    { L"Cody",            DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_COLLECTION,          ARRAYSIZE(SFA3_A_CODY_COLLECTION) },
    { L"Dan",             DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_COLLECTION,           ARRAYSIZE(SFA3_A_DAN_COLLECTION) },
    { L"Dhalsim",         DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA3_A_DHALSIM_COLLECTION) },
    { L"E. Honda",        DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_COLLECTION,        ARRAYSIZE(SFA3_A_EHONDA_COLLECTION) },
    { L"Gen",             DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_COLLECTION,           ARRAYSIZE(SFA3_A_GEN_COLLECTION) },
    { L"Gouki",           DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_COLLECTION,         ARRAYSIZE(SFA3_A_GOUKI_COLLECTION) },
    { L"Guy",             DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_COLLECTION,           ARRAYSIZE(SFA3_A_GUY_COLLECTION) },
    { L"Juni",            DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_COLLECTION,          ARRAYSIZE(SFA3_A_JUNI_COLLECTION) },
    { L"Juli",            DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_COLLECTION,          ARRAYSIZE(SFA3_A_JULI_COLLECTION) },
    { L"Karin",           DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_COLLECTION,         ARRAYSIZE(SFA3_A_KARIN_COLLECTION) },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_COLLECTION,           ARRAYSIZE(SFA3_A_KEN_COLLECTION) },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_COLLECTION,        ARRAYSIZE(SFA3_A_MBISON_COLLECTION) },
    { L"R. Mika",         DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_COLLECTION,         ARRAYSIZE(SFA3_A_RMIKA_COLLECTION) },
    { L"Rolento",         DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA3_A_ROLENTO_COLLECTION) },
    { L"Rose",            DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_COLLECTION,          ARRAYSIZE(SFA3_A_ROSE_COLLECTION) },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_COLLECTION,           ARRAYSIZE(SFA3_A_RYU_COLLECTION) },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA3_A_SAGAT_COLLECTION) },
    { L"Sakura",          DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA3_A_SAKURA_COLLECTION) },
    { k_sfa3NameKey_Sodom, DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_COLLECTION,        ARRAYSIZE(SFA3_A_SODOM_COLLECTION) },
    { L"Vega",            DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_COLLECTION,          ARRAYSIZE(SFA3_A_VEGA_COLLECTION) },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA3_A_ZANGIEF_COLLECTION) },
    { L"Bonus Palettes",  DESC_NODETYPE_TREE, (void*)SFA3_A_BONUS_COLLECTION,         ARRAYSIZE(SFA3_A_BONUS_COLLECTION) },
    { L"Stages",          DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_COLLECTION,        ARRAYSIZE(SFA3_A_STAGES_COLLECTION) },
};

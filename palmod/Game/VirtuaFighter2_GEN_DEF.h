#pragma once

const std::vector<uint16_t> VirtuaFighter2_GEN_IMGIDS_USED =
{
    indexVF2GenSprites_Akira,           // 0x95
    indexVF2GenSprites_Dural,           // 0x96
    indexVF2GenSprites_Jacky,           // 0x97
    indexVF2GenSprites_Jeffry,          // 0x98
    indexVF2GenSprites_Kage,            // 0x99
    indexVF2GenSprites_Lau,             // 0x9a
    indexVF2GenSprites_Pai,             // 0x9b
    indexVF2GenSprites_Sarah,           // 0x9c
    indexVF2GenSprites_Wolf,            // 0x9d
    indexVF2GenSprites_Stages,          // 0x9e
    indexVF2GenSprites_Bonus,           // 0x9f
};

const sGame_PaletteDataset VirtuaFighter2_GEN_AkiraYuki_Palettes[] =
{
    // -Palettes-
    { L"Akira P1", 0x10122, 0x10142, indexVF2GenSprites_Akira, 0x00 },
    { L"Akira P2", 0x10142, 0x10162, indexVF2GenSprites_Akira, 0x00 },
    { L"Akira Up+A", 0x10162, 0x10182, indexVF2GenSprites_Akira, 0x00 },
    { L"Akira Down+A", 0x10182, 0x101a2, indexVF2GenSprites_Akira, 0x00 },
    { L"Akira Up+C", 0x101a2, 0x101c2, indexVF2GenSprites_Akira, 0x00 },
    { L"Akira Down+C", 0x101c2, 0x101e2, indexVF2GenSprites_Akira, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_AkiraYuki_Portraits[] =
{
    // -Portraits-
    { L"Portrait (All)", 0xd266, 0xd286, indexVF2GenSprites_Akira, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_PaiChan_Palettes[] =
{
    // -Palettes-
    { L"Pai P1", 0x101e2, 0x10202, indexVF2GenSprites_Pai, 0x00 },
    { L"Pai P2", 0x10202, 0x10222, indexVF2GenSprites_Pai, 0x00 },
    { L"Pai Up+A", 0x10222, 0x10242, indexVF2GenSprites_Pai, 0x00 },
    { L"Pai Down+A", 0x10242, 0x10262, indexVF2GenSprites_Pai, 0x00 },
    { L"Pai Up+C", 0x10262, 0x10282, indexVF2GenSprites_Pai, 0x00 },
    { L"Pai Down+C", 0x10282, 0x102a2, indexVF2GenSprites_Pai, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_PaiChan_Portraits[] =
{
    // -Portraits-
    { L"Portrait P1", 0xd286, 0xd2a6, indexVF2GenSprites_Pai, 0x40 },
    { L"Portrait P2", 0xd2a6, 0xd2c6, indexVF2GenSprites_Pai, 0x40 },
    { L"Portrait Up+A", 0xd2c6, 0xd2e6, indexVF2GenSprites_Pai, 0x40 },
    { L"Portrait Down+A", 0xd2e6, 0xd306, indexVF2GenSprites_Pai, 0x40 },
    { L"Portrait Up+C", 0xd306, 0xd326, indexVF2GenSprites_Pai, 0x40 },
    { L"Portrait Down+C", 0xd326, 0xd346, indexVF2GenSprites_Pai, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_LauChan_Palettes[] =
{
    // -Palettes-
    { L"Lau P1", 0x102a2, 0x102c2, indexVF2GenSprites_Lau, 0x00 },
    { L"Lau P2", 0x102c2, 0x102e2, indexVF2GenSprites_Lau, 0x00 },
    { L"Lau Up+A", 0x102e2, 0x10302, indexVF2GenSprites_Lau, 0x00 },
    { L"Lau Down+A", 0x10302, 0x10322, indexVF2GenSprites_Lau, 0x00 },
    { L"Lau Up+C", 0x10322, 0x10342, indexVF2GenSprites_Lau, 0x00 },
    { L"Lau Down+C", 0x10342, 0x10362, indexVF2GenSprites_Lau, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_LauChan_Portraits[] =
{
    // -Portraits-
    { L"Portrait (All)", 0xd346, 0xd366, indexVF2GenSprites_Lau, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_WolfHawkfield_Palettes[] =
{
    // -Palettes-
    { L"Wolf P1", 0x10362, 0x10382, indexVF2GenSprites_Wolf, 0x00 },
    { L"Wolf P2", 0x10382, 0x103a2, indexVF2GenSprites_Wolf, 0x00 },
    { L"Wolf Up+A", 0x103a2, 0x103c2, indexVF2GenSprites_Wolf, 0x00 },
    { L"Wolf Down+A", 0x103c2, 0x103e2, indexVF2GenSprites_Wolf, 0x00 },
    { L"Wolf Up+C", 0x103e2, 0x10402, indexVF2GenSprites_Wolf, 0x00 },
    { L"Wolf Down+C", 0x10402, 0x10422, indexVF2GenSprites_Wolf, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_WolfHawkfield_Portraits[] =
{
    // -Portraits-
    { L"Portrait (All)", 0xd366, 0xd386, indexVF2GenSprites_Wolf, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_JeffryMcWild_Palettes[] =
{
    // -Palettes-
    { L"Jeffry P1", 0x10422, 0x10442, indexVF2GenSprites_Jeffry, 0x00 },
    { L"Jeffry P2", 0x10442, 0x10462, indexVF2GenSprites_Jeffry, 0x00 },
    { L"Jeffry Up+A", 0x10462, 0x10482, indexVF2GenSprites_Jeffry, 0x00 },
    { L"Jeffry Down+A", 0x10482, 0x104a2, indexVF2GenSprites_Jeffry, 0x00 },
    { L"Jeffry Up+C", 0x104a2, 0x104c2, indexVF2GenSprites_Jeffry, 0x00 },
    { L"Jeffry Down+C", 0x104c2, 0x104e2, indexVF2GenSprites_Jeffry, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_JeffryMcWild_Portraits[] =
{
    // -Portraits-
    { L"Portrait (All)", 0xd386, 0xd3a6, indexVF2GenSprites_Jeffry, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_KageMaru_Palettes[] =
{
    // -Palettes-
    { L"Kage P1", 0x104e2, 0x10502, indexVF2GenSprites_Kage, 0x00 },
    { L"Kage P2", 0x10502, 0x10522, indexVF2GenSprites_Kage, 0x00 },
    { L"Kage Up+A", 0x10522, 0x10542, indexVF2GenSprites_Kage, 0x00 },
    { L"Kage Down+A", 0x10542, 0x10562, indexVF2GenSprites_Kage, 0x00 },
    { L"Kage Up+C", 0x10562, 0x10582, indexVF2GenSprites_Kage, 0x00 },
    { L"Kage Down+C", 0x10582, 0x105a2, indexVF2GenSprites_Kage, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_KageMaru_Portraits[] =
{
    // -Portraits-
    { L"Portrait P1", 0xd3a6, 0xd3c6, indexVF2GenSprites_Kage, 0x40 },
    { L"Portrait P2", 0xd3c6, 0xd3e6, indexVF2GenSprites_Kage, 0x40 },
    { L"Portrait Up+A", 0xd3e6, 0xd406, indexVF2GenSprites_Kage, 0x40 },
    { L"Portrait Down+A", 0xd406, 0xd426, indexVF2GenSprites_Kage, 0x40 },
    { L"Portrait Up+C", 0xd426, 0xd446, indexVF2GenSprites_Kage, 0x40 },
    { L"Portrait Down+C", 0xd446, 0xd466, indexVF2GenSprites_Kage, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_SarahBryant_Palettes[] =
{
    // -Palettes-
    { L"Sarah P1", 0x105a2, 0x105c2, indexVF2GenSprites_Sarah, 0x00 },
    { L"Sarah P2", 0x105c2, 0x105e2, indexVF2GenSprites_Sarah, 0x00 },
    { L"Sarah Up+A", 0x105e2, 0x10602, indexVF2GenSprites_Sarah, 0x00 },
    { L"Sarah Down+A", 0x10602, 0x10622, indexVF2GenSprites_Sarah, 0x00 },
    { L"Sarah Up+C", 0x10622, 0x10642, indexVF2GenSprites_Sarah, 0x00 },
    { L"Sarah Down+C", 0x10642, 0x10662, indexVF2GenSprites_Sarah, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_SarahBryant_Portraits[] =
{
    // -Portraits-
    { L"Portrait (All)", 0xd466, 0xd486, indexVF2GenSprites_Sarah, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_JackyBryant_Palettes[] =
{
    // -Palettes-
    { L"Jacky P1", 0x10662, 0x10682, indexVF2GenSprites_Jacky, 0x00 },
    { L"Jacky P2", 0x10682, 0x106a2, indexVF2GenSprites_Jacky, 0x00 },
    { L"Jacky Up+A", 0x106a2, 0x106c2, indexVF2GenSprites_Jacky, 0x00 },
    { L"Jacky Down+A", 0x106c2, 0x106e2, indexVF2GenSprites_Jacky, 0x00 },
    { L"Jacky Up+C", 0x106e2, 0x10702, indexVF2GenSprites_Jacky, 0x00 },
    { L"Jacky Down+C", 0x10702, 0x10722, indexVF2GenSprites_Jacky, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_JackyBryant_Portraits[] =
{
    // -Portraits
    { L"Portrait (All)", 0xd486, 0xd4a6, indexVF2GenSprites_Jacky, 0x40 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Dural_Palettes[] =
{
    // -Palettes-
    { L"Dural P1", 0x10722, 0x10742, indexVF2GenSprites_Dural, 0x00 },
    { L"Dural P2", 0x10742, 0x10762, indexVF2GenSprites_Dural, 0x00 },
    { L"Dural Up+A", 0x10762, 0x10782, indexVF2GenSprites_Dural, 0x00 },
    { L"Dural Down+A", 0x10782, 0x107a2, indexVF2GenSprites_Dural, 0x00 },
    { L"Dural Up+C", 0x107a2, 0x107c2, indexVF2GenSprites_Dural, 0x00 },
    { L"Dural Down+C", 0x107c2, 0x107e2, indexVF2GenSprites_Dural, 0x00 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Dural_Portraits[] =
{
    // -Portraits-
    { L"Portrait P1", 0xd4a6, 0xd4c6, indexVF2GenSprites_Dural, 0x40 },
    { L"Portrait P2", 0xd4c6, 0xd4e6, indexVF2GenSprites_Dural, 0x40 },
    { L"Portrait Up+A", 0xd4e6, 0xd506, indexVF2GenSprites_Dural, 0x40 },
    { L"Portrait Down+A", 0xd506, 0xd526, indexVF2GenSprites_Dural, 0x40 },
    { L"Portrait Up+C", 0xd526, 0xd546, indexVF2GenSprites_Dural, 0x40 },
    { L"Portrait Down+C", 0xd546, 0xd566, indexVF2GenSprites_Dural, 0x40 },
};

const sDescTreeNode VirtuaFighter2_GEN_AkiraYuki_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_AkiraYuki_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_AkiraYuki_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_AkiraYuki_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_AkiraYuki_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_PaiChan_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_PaiChan_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_PaiChan_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_PaiChan_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_PaiChan_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_LauChan_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_LauChan_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_LauChan_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_LauChan_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_LauChan_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_WolfHawkfield_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_WolfHawkfield_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_WolfHawkfield_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_WolfHawkfield_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_WolfHawkfield_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_JeffryMcWild_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_JeffryMcWild_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_JeffryMcWild_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_JeffryMcWild_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_JeffryMcWild_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_KageMaru_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_KageMaru_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_KageMaru_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_KageMaru_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_KageMaru_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_SarahBryant_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_SarahBryant_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_SarahBryant_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_SarahBryant_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_SarahBryant_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_JackyBryant_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_JackyBryant_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_JackyBryant_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_JackyBryant_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_JackyBryant_Portraits) },
};

const sDescTreeNode VirtuaFighter2_GEN_Dural_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Dural_Palettes, ARRAYSIZE(VirtuaFighter2_GEN_Dural_Palettes) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Dural_Portraits, ARRAYSIZE(VirtuaFighter2_GEN_Dural_Portraits) },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Stages_Statue[] =
{
    // -Statue-
    { L"Statue (Noon) Sky/HUD", 0xfe82, 0xfea2, indexVF2GenSprites_Stages, 0x00 },
    { L"Statue (Noon) Stage", 0xfea2, 0xfec2, indexVF2GenSprites_Stages, 0x01 },
    { L"Statue (Morning) Sky/HUD", 0xfec2, 0xfee2, indexVF2GenSprites_Stages, 0x00 },
    { L"Statue (Morning) Stage", 0xfee2, 0xff02, indexVF2GenSprites_Stages, 0x01 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Stages_Temple[] =
{
    // -Temple-
    { L"Temple (Day) Sky/HUD", 0xff02, 0xff22, indexVF2GenSprites_Stages, 0x02 },
    { L"Temple (Day) Stage", 0xff22, 0xff42, indexVF2GenSprites_Stages, 0x03 },
    { L"Temple (Dawn) Sky/HUD", 0xff42, 0xff62, indexVF2GenSprites_Stages, 0x02 },
    { L"Temple (Dawn) Stage", 0xff62, 0xff82, indexVF2GenSprites_Stages, 0x03 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Stages_Colosseum[] =
{
    // -Colosseum-
    { L"Colosseum (Night) Sky/HUD", 0xff82, 0xffa2, indexVF2GenSprites_Stages, 0x04 },
    { L"Colosseum (Night) Stage", 0xffa2, 0xffc2, indexVF2GenSprites_Stages, 0x05 },
    { L"Colosseum (Day) Sky/HUD", 0xffc2, 0xffe2, indexVF2GenSprites_Stages, 0x04 },
    { L"Colosseum (Day) Stage", 0xffe2, 0x10002, indexVF2GenSprites_Stages, 0x05 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Stages_Beach[] =
{
    // -Beach-
    { L"Beach (Day) Sky/HUD", 0x10002, 0x10022, indexVF2GenSprites_Stages, 0x06 },
    { L"Beach (Day) Stage", 0x10022, 0x10042, indexVF2GenSprites_Stages, 0x07 },
    { L"Beach (Dawn) Sky/HUD", 0x10042, 0x10062, indexVF2GenSprites_Stages, 0x06 },
    { L"Beach (Dawn) Stage", 0x10062, 0x10082, indexVF2GenSprites_Stages, 0x07 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Stages_Underwater[] =
{
    // -Underwater City-
    { L"Underwater City Sky/HUD", 0x10082, 0x100a2, indexVF2GenSprites_Stages, 0x08 },
    { L"Underwater City Stage", 0x100a2, 0x100c2, indexVF2GenSprites_Stages, 0x09 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Bonus_MainMenu[] =
{
    // -Main Menu-
    { L"Title Screen 1/2", 0xd566, 0xd586, indexVF2GenSprites_Bonus, 0x00, &pairNext },
    { L"Title Screen 2/2", 0xd586, 0xd5a6, indexVF2GenSprites_Bonus, 0x01 },
    { L"Title Screen (Faded) 1/2", 0xd5a6, 0xd5c6, indexVF2GenSprites_Bonus, 0x00, &pairNext },
    { L"Title Screen (Faded) 2/2", 0xd5c6, 0xd5e6, indexVF2GenSprites_Bonus, 0x01 },
    { L"Mode Select Text", 0xd5e6, 0xd606, indexVF2GenSprites_Bonus, 0x02 },
    { L"Selected Text/Borders", 0xd606, 0xd626, indexVF2GenSprites_Bonus, 0x03 },
    { L"Faded Text/Selected Option", 0xd626, 0xd646, indexVF2GenSprites_Bonus, 0x04 },
    { L"VS Win Count/Faded Text", 0xd646, 0xd666, indexVF2GenSprites_Bonus, 0x05 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Bonus_CharSel[] =
{
    // -Character Select-
    { L"Background (Arcade)", 0xd202, 0xd222, indexVF2GenSprites_Bonus, 0x06, &pairNext2 },
    { L"Background (VS)", 0xd222, 0xd242, indexVF2GenSprites_Bonus, 0x06, &pairNext },
    { L"Select Portraits", 0xd242, 0xd262, indexVF2GenSprites_Bonus, 0x08 },
};

const sGame_PaletteDataset VirtuaFighter2_GEN_Bonus_Arcade[] =
{
    // -Arcade Mode-
    { L"Rankings and Name Entry", 0xd666, 0xd686, indexVF2GenSprites_Bonus, 0x09 },
    { L"GAME CLEAR/Demo Stage 1/2", 0xd686, 0xd6a6, indexVF2GenSprites_Bonus, 0x0a },
    { L"GAME CLEAR/Demo Stage 2/2", 0xd6a6, 0xd6c6, indexVF2GenSprites_Bonus, 0x0b },
    { L"TRY NEXT STAGE", 0xd6c6, 0xd6e6, indexVF2GenSprites_Bonus, 0x0c },
    { L"WINNER/Win Quotes", 0xd6e6, 0xd706, indexVF2GenSprites_Bonus, 0x0d },
    { L"GAME OVER/Losing Text", 0xd706, 0xd726, indexVF2GenSprites_Bonus, 0x0e },
};

const sDescTreeNode VirtuaFighter2_GEN_Stages_COLLECTION[] =
{
    { L"Statue", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Stages_Statue, ARRAYSIZE(VirtuaFighter2_GEN_Stages_Statue) },
    { L"Temple", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Stages_Temple, ARRAYSIZE(VirtuaFighter2_GEN_Stages_Temple) },
    { L"Colosseum", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Stages_Colosseum, ARRAYSIZE(VirtuaFighter2_GEN_Stages_Colosseum) },
    { L"Beach", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Stages_Beach, ARRAYSIZE(VirtuaFighter2_GEN_Stages_Beach) },
    { L"Underwater City", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Stages_Underwater, ARRAYSIZE(VirtuaFighter2_GEN_Stages_Underwater) },
};

const sDescTreeNode VirtuaFighter2_GEN_Bonus_COLLECTION[] =
{
    { L"Main Menu",         DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Bonus_MainMenu, ARRAYSIZE(VirtuaFighter2_GEN_Bonus_MainMenu) },
    { L"Character Select",  DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Bonus_CharSel, ARRAYSIZE(VirtuaFighter2_GEN_Bonus_CharSel) },
    { L"Arcade Mode",       DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Bonus_Arcade, ARRAYSIZE(VirtuaFighter2_GEN_Bonus_Arcade) },
};

const sDescTreeNode VirtuaFighter2_GEN_UNITS[] =
{
    { L"Akira Yuki", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_AkiraYuki_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_AkiraYuki_COLLECTION) },
    { L"Pai Chan", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_PaiChan_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_PaiChan_COLLECTION) },
    { L"Lau Chan", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_LauChan_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_LauChan_COLLECTION) },
    { L"Wolf Hawkfield", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_WolfHawkfield_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_WolfHawkfield_COLLECTION) },
    { L"Jeffry McWild", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_JeffryMcWild_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_JeffryMcWild_COLLECTION) },
    { L"Kage Maru", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_KageMaru_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_KageMaru_COLLECTION) },
    { L"Sarah Bryant", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_SarahBryant_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_SarahBryant_COLLECTION) },
    { L"Jacky Bryant", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_JackyBryant_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_JackyBryant_COLLECTION) },
    { L"Dural", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Dural_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_Dural_COLLECTION) },
    
    { L"Stages", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Stages_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_Stages_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)VirtuaFighter2_GEN_Bonus_COLLECTION, ARRAYSIZE(VirtuaFighter2_GEN_Bonus_COLLECTION) },
};

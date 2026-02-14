#pragma once

const std::vector<uint16_t> MK2_SEGA_IMGIDS_USED =
{
    indexSegaMK2Sprites_Baraka,         // 0x36
    indexSegaMK2Sprites_Jax,            // 0x37
    indexSegaMK2Sprites_JohnnyCage,     // 0x38
    indexSegaMK2Sprites_Kintaro,        // 0x39
    indexSegaMK2Sprites_Kitana,         // 0x3a
    indexSegaMK2Sprites_KungLao,        // 0x3b
    indexSegaMK2Sprites_LiuKang,        // 0x3c
    indexSegaMK2Sprites_Mileena,        // 0x3d
    indexSegaMK2Sprites_Raiden,         // 0x3e
    indexSegaMK2Sprites_Reptile,        // 0x3f
    indexSegaMK2Sprites_Scorpion,       // 0x40
    indexSegaMK2Sprites_ShangTsung,     // 0x41
    indexSegaMK2Sprites_ShaoKahn,       // 0x42
    indexSegaMK2Sprites_Smoke,          // 0x43
    indexSegaMK2Sprites_SubZero,        // 0x44
    indexSegaMK2Sprites_Bonus,          // 0x45
};

const sGame_PaletteDataset MK2_SEGA_LiuKang_P1[] =
{
    { L"Liu Kang P1", 0x70440, 0x70460, indexSegaMK2Sprites_LiuKang, 0x00 },
    { L"Dragon Bite P1", 0x704c0, 0x704e0, indexSegaMK2Sprites_LiuKang, 0x02 },
};

const sGame_PaletteDataset MK2_SEGA_LiuKang_P2[] =
{
    { L"Liu Kang P2", 0x70460, 0x70480, indexSegaMK2Sprites_LiuKang, 0x00 },
    { L"Dragon Bite P2", 0x704e0, 0x70500, indexSegaMK2Sprites_LiuKang, 0x02 },
};

const sGame_PaletteDataset MK2_SEGA_LiuKang_Extras[] =
{
    { L"Frozen/Shock", 0x704a0, 0x704c0, indexSegaMK2Sprites_LiuKang, 0x00 },
    { L"Soul Steal", 0x70480, 0x704a0, indexSegaMK2Sprites_LiuKang, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_Baraka_P1[] =
{
    { L"Baraka P1", 0x70500, 0x70520, indexSegaMK2Sprites_Baraka, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Baraka_P2[] =
{
    { L"Baraka P2", 0x70520, 0x70540, indexSegaMK2Sprites_Baraka, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Baraka_Extras[] =
{
    { L"Frozen/Shock", 0x70540, 0x70560, indexSegaMK2Sprites_Baraka, 0x00 },
    { L"Soul Steal", 0x70560, 0x70580, indexSegaMK2Sprites_Baraka, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_Kitana_P1[] =
{
    { L"Kitana P1", 0x70580, 0x705a0, indexSegaMK2Sprites_Kitana, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Kitana_P2[] =
{
    { L"Kitana P2", 0x705a0, 0x705c0, indexSegaMK2Sprites_Kitana, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Kitana_Extras[] =
{
    { L"Frozen/Shock", 0x705e0, 0x70600 , indexSegaMK2Sprites_Kitana, 0x00 },
    { L"Soul Steal", 0x705c0, 0x705e0, indexSegaMK2Sprites_Kitana, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_Mileena_P1[] =
{
    { L"Mileena P1", 0x70600, 0x70620, indexSegaMK2Sprites_Mileena, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Mileena_P2[] =
{
    { L"Mileena P2", 0x70620, 0x70640, indexSegaMK2Sprites_Mileena, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Mileena_Extras[] =
{
    { L"Frozen/Shock", 0x70660, 0x70680, indexSegaMK2Sprites_Mileena, 0x00 },
    { L"Soul Steal", 0x70640, 0x70660, indexSegaMK2Sprites_Kitana, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_KungLao_P1[] =
{
    { L"Kung Lao P1", 0x70680, 0x706a0, indexSegaMK2Sprites_KungLao, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_KungLao_P2[] =
{
    { L"Kung Lao P2", 0x706a0, 0x706c0, indexSegaMK2Sprites_KungLao, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_KungLao_Extras[] =
{
    { L"Frozen/Shock", 0x706c0, 0x706e0, indexSegaMK2Sprites_KungLao, 0x00 },
    { L"Soul Steal", 0x706e0, 0x70700, indexSegaMK2Sprites_KungLao, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_JohnnyCage_P1[] =
{
    { L"Johnny Cage P1", 0x70700, 0x70720, indexSegaMK2Sprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_JohnnyCage_P2[] =
{
    { L"Johnny Cage P2", 0x70720, 0x70740, indexSegaMK2Sprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_JohnnyCage_Extras[] =
{
    { L"Frozen/Shock", 0x70760, 0x70780, indexSegaMK2Sprites_JohnnyCage, 0x00 },
    { L"Soul Steal", 0x70740, 0x70760, indexSegaMK2Sprites_JohnnyCage, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_Rayden_P1[] =
{
    { L"Raiden P1", 0x70780, 0x707a0, indexSegaMK2Sprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Rayden_P2[] =
{
    { L"Raiden P2", 0x707a0, 0x707c0, indexSegaMK2Sprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Rayden_Extras[] =
{
    { L"Frozen/Shock", 0x707c0, 0x707e0, indexSegaMK2Sprites_Raiden, 0x00 },
    { L"Soul Steal", 0x707e0, 0x70800, indexSegaMK2Sprites_Raiden, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_Jax_P1[] =
{
    { L"Jax P1", 0x70800, 0x70820, indexSegaMK2Sprites_Jax, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Jax_P2[] =
{
    { L"Jax P2", 0x70820, 0x70840, indexSegaMK2Sprites_Jax, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Jax_Extras[] =
{
    { L"Frozen/Shock", 0x70860, 0x70880, indexSegaMK2Sprites_Jax, 0x00 },
    { L"Soul Steal", 0x70840, 0x70860, indexSegaMK2Sprites_Jax, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_SubZero_P1[] =
{
    { L"Sub-Zero P1", 0x70880, 0x708a0, indexSegaMK2Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_SubZero_P2[] =
{
    { L"Sub-Zero P2", 0x708a0, 0x708c0, indexSegaMK2Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_SubZero_Extras[] =
{
    { L"Frozen/Shock", 0x708e0, 0x70900, indexSegaMK2Sprites_SubZero, 0x00 },
    { L"Soul Steal", 0x708c0, 0x708e0, indexSegaMK2Sprites_SubZero, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_Scorpion_P1[] =
{
    { L"Scorpion P1", 0x70900, 0x70920, indexSegaMK2Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Scorpion_P2[] =
{
    { L"Scorpion P2", 0x70920, 0x70940, indexSegaMK2Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Scorpion_Extras[] =
{
    { L"Frozen/Shock", 0x70960, 0x70980, indexSegaMK2Sprites_Scorpion, 0x00 },
    { L"Soul Steal", 0x70940, 0x70960, indexSegaMK2Sprites_SubZero, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_Reptile_P1[] =
{
    { L"Reptile P1", 0x70980, 0x709a0, indexSegaMK2Sprites_Reptile, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Reptile_P2[] =
{
    { L"Reptile P2", 0x709a0, 0x709c0, indexSegaMK2Sprites_Reptile, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Reptile_Extras[] =
{
    { L"Frozen/Shock", 0x709e0, 0x70a00, indexSegaMK2Sprites_Reptile, 0x00 },
    { L"Soul Steal", 0x709c0, 0x709e0, indexSegaMK2Sprites_SubZero, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_ShangTsung_P1[] =
{
    { L"Shang Tsung P1", 0x70b80, 0x70ba0, indexSegaMK2Sprites_ShangTsung, 0x00 },
    { L"Soul Steal P1", 0x70c00, 0x70c20, indexSegaMK2Sprites_ShangTsung, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_ShangTsung_P2[] =
{
    { L"Shang Tsung P2", 0x70ba0, 0x70bc0, indexSegaMK2Sprites_ShangTsung, 0x00 },
    { L"Soul Steal P2", 0x70be0, 0x70c00, indexSegaMK2Sprites_ShangTsung, 0x01 },
};

const sGame_PaletteDataset MK2_SEGA_ShangTsung_Extras[] =
{
    { L"Frozen/Shock", 0x70bc0, 0x70be0, indexSegaMK2Sprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_ShangTsung_P1Morphs[] =
{
    { L"Kung Lao P1", 0x70c20, 0x70c40, indexSegaMK2Sprites_ShangTsung, 0x14 },
    { L"Kung Lao P2", 0x70c60, 0x70c80, indexSegaMK2Sprites_ShangTsung, 0x14 },
    { L"Liu Kang P1", 0x70ca0, 0x70cc0, indexSegaMK2Sprites_ShangTsung, 0x15 },
    { L"Liu Kang P2", 0x70ce0, 0x70d00, indexSegaMK2Sprites_ShangTsung, 0x15 },
    { L"Johnny Cage P1", 0x70d20, 0x70d40, indexSegaMK2Sprites_ShangTsung, 0x12 },
    { L"Johnny Cage P2", 0x70d60, 0x70d80, indexSegaMK2Sprites_ShangTsung, 0x12 },
    { L"Baraka P1", 0x70da0, 0x70dc0, indexSegaMK2Sprites_ShangTsung, 0x10 },
    { L"Baraka P2", 0x70de0, 0x70e00, indexSegaMK2Sprites_ShangTsung, 0x10 },
    { L"Kitana P1", 0x70e20, 0x70e40, indexSegaMK2Sprites_ShangTsung, 0x13 },
    { L"Kitana P2", 0x70e60, 0x70e80, indexSegaMK2Sprites_ShangTsung, 0x13 },
    { L"Mileena P1", 0x70ea0, 0x70ec0, indexSegaMK2Sprites_ShangTsung, 0x16 },
    { L"Mileena P2", 0x70ee0, 0x70f00, indexSegaMK2Sprites_ShangTsung, 0x16 },
    { L"Raiden P1", 0x70f20, 0x70f40, indexSegaMK2Sprites_ShangTsung, 0x17 },
    { L"Raiden P2", 0x70f60, 0x70f80, indexSegaMK2Sprites_ShangTsung, 0x17 },
    { L"Sub-Zero P1", 0x70fa0, 0x70fc0, indexSegaMK2Sprites_ShangTsung, 0x1a },
    { L"Sub-Zero P2", 0x70fe0, 0x71000, indexSegaMK2Sprites_ShangTsung, 0x1a },
    { L"Reptile P1", 0x71020, 0x71040, indexSegaMK2Sprites_ShangTsung, 0x18 },
    { L"Reptile P2", 0x71060, 0x71080, indexSegaMK2Sprites_ShangTsung, 0x18 },
    { L"Scorpion P1", 0x710a0, 0x710c0, indexSegaMK2Sprites_ShangTsung, 0x19 },
    { L"Scorpion P2", 0x710e0, 0x71100, indexSegaMK2Sprites_ShangTsung, 0x19 },
    { L"Jax P1", 0x71120, 0x71140, indexSegaMK2Sprites_ShangTsung, 0x11 },
    { L"Jax P2", 0x71160, 0x71180, indexSegaMK2Sprites_ShangTsung, 0x11 },
};

const sGame_PaletteDataset MK2_SEGA_ShangTsung_P2Morphs[] =
{
    { L"Kung Lao P1", 0x70c40, 0x70c60, indexSegaMK2Sprites_ShangTsung, 0x14 },
    { L"Kung Lao P2", 0x70c80, 0x70ca0, indexSegaMK2Sprites_ShangTsung, 0x14 },
    { L"Liu Kang P1", 0x70cc0, 0x70ce0, indexSegaMK2Sprites_ShangTsung, 0x15 },
    { L"Liu Kang P2", 0x70d00, 0x70d20, indexSegaMK2Sprites_ShangTsung, 0x15 },
    { L"Johnny Cage P1", 0x70d40, 0x70d60, indexSegaMK2Sprites_ShangTsung, 0x12 },
    { L"Johnny Cage P2", 0x70d80, 0x70da0, indexSegaMK2Sprites_ShangTsung, 0x12 },
    { L"Baraka P1", 0x70dc0, 0x70de0, indexSegaMK2Sprites_ShangTsung, 0x10 },
    { L"Baraka P2", 0x70e00, 0x70e20, indexSegaMK2Sprites_ShangTsung, 0x10 },
    { L"Kitana P1", 0x70e40, 0x70e60, indexSegaMK2Sprites_ShangTsung, 0x13 },
    { L"Kitana P2", 0x70e80, 0x70ea0, indexSegaMK2Sprites_ShangTsung, 0x13 },
    { L"Mileena P1", 0x70ec0, 0x70ee0, indexSegaMK2Sprites_ShangTsung, 0x16 },
    { L"Mileena P2", 0x70f00, 0x70f20, indexSegaMK2Sprites_ShangTsung, 0x16 },
    { L"Raiden P1", 0x70f40, 0x70f60, indexSegaMK2Sprites_ShangTsung, 0x17 },
    { L"Raiden P2", 0x70f80, 0x70fa0, indexSegaMK2Sprites_ShangTsung, 0x17 },
    { L"Sub-Zero P1", 0x70fc0, 0x70fe0, indexSegaMK2Sprites_ShangTsung, 0x1a },
    { L"Sub-Zero P2", 0x71000, 0x71020, indexSegaMK2Sprites_ShangTsung, 0x1a },
    { L"Reptile P1", 0x71040, 0x71060, indexSegaMK2Sprites_ShangTsung, 0x18 },
    { L"Reptile P2", 0x71080, 0x710a0, indexSegaMK2Sprites_ShangTsung, 0x18 },
    { L"Scorpion P1", 0x710c0, 0x710e0, indexSegaMK2Sprites_ShangTsung, 0x19 },
    { L"Scorpion P2", 0x71100, 0x71120, indexSegaMK2Sprites_ShangTsung, 0x19 },
    { L"Jax P1", 0x71140, 0x71160, indexSegaMK2Sprites_ShangTsung, 0x11 },
    { L"Jax P2", 0x71180, 0x711a0, indexSegaMK2Sprites_ShangTsung, 0x11 },
};

const sGame_PaletteDataset MK2_SEGA_Kintaro_Palettes[] =
{
    { L"Kintaro", 0x70a00, 0x70a20, indexSegaMK2Sprites_Kintaro, 0x00 },
    { L"Frozen/Shock", 0x70a20, 0x70a40, indexSegaMK2Sprites_Kintaro, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_ShaoKahn_Palettes[] =
{
    { L"Shao Kahn", 0x70a40, 0x70a60, indexSegaMK2Sprites_ShaoKahn, 0x00 },
    { L"Frozen/Shock", 0x70a80, 0x70aa0, indexSegaMK2Sprites_ShaoKahn, 0x00 },
    { L"Arcade Mode Loss", 0x70a60, 0x70a80, indexSegaMK2Sprites_ShaoKahn, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Smoke_Palettes[] =
{
    { L"Smoke", 0x70aa0, 0x70ac0, indexSegaMK2Sprites_Smoke, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Jade_Palettes[] =
{
    { L"Jade", 0x70ac0, 0x70ae0, indexSegaMK2Sprites_Kitana, 0x00 },
};

const sGame_PaletteDataset MK2_SEGA_Fatalities_Default[] =
{
    { L"Burning Skeleton", 0x70ae0, 0x70b00, indexSegaMK2Sprites_Bonus, 0x10 },
    { L"Frozen (Fatality)", 0x70b20, 0x70b40, indexSegaMK2Sprites_Bonus, 0x13 },
    { L"Dead Pool Skeleton", 0x70b60, 0x70b80, indexSegaMK2Sprites_Bonus, 0x11 },
    { L"Fergality", 0x70b00, 0x70b20, indexSegaMK2Sprites_Bonus, 0x12 },
    // Comment Stages out.  Suffers from compression like MK1Gen and U/MK3Gen do.
};

const sGame_PaletteDataset MK2_SEGA_Stages_DeadPool[] =
{
    { L"Main Layer", 0x70240, 0x70260 },
    { L"HUD Layer", 0x70260, 0x70280 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_KombatTomb[] =
{
    { L"Main Layer", 0x70280, 0x702a0 },
    { L"HUD Layer", 0x702a0, 0x702c0 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_Wasteland[] =
{
    { L"Main Layer", 0x702c0, 0x702e0 },
    { L"HUD Layer", 0x702e0, 0x70300 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_TheTower[] =
{
    { L"Main Layer", 0x70340, 0x70360 },
    { L"HUD Layer", 0x70360, 0x70380 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_TheLivingForest[] =
{
    { L"Main Layer", 0x70300, 0x70320 },
    { L"HUD Layer", 0x70320, 0x70340 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_TheArmory[] =
{
    { L"Main Layer", 0x70380, 0x703a0 },
    { L"HUD Layer", 0x703a0, 0x703c0 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_ThePitII[] =
{
    { L"Main Layer", 0x701a0, 0x701c0 },
    { L"HUD Layer", 0x701c0, 0x701e0 },
    { L"Stage Fatality", 0x701e0, 0x70200 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_ThePortal[] =
{
    { L"Main Layer", 0x703c0, 0x703e0 },
    { L"HUD Layer", 0x703e0, 0x70400 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_KahnsArena[] =
{
    { L"Main Layer", 0x70200, 0x70220 },
    { L"HUD Layer", 0x70220, 0x70240 },
};

const sGame_PaletteDataset MK2_SEGA_Stages_ThePortalSecret[] =
{
    { L"Main Layer", 0x70400, 0x70420 },
    { L"HUD Layer", 0x70420, 0x70440 },
};

const sGame_PaletteDataset MK2_SEGA_BonusPalettes_Logos[] =
{
    { L"Copyright Information", 0x7306a, 0x7308a, indexSegaMK2Sprites_Bonus, 0x08 },
    { L"MIDWAY PRESENTS", 0x73704, 0x73724, indexSegaMK2Sprites_Bonus, 0x09 },
    { L"A Probe Development", 0x73724, 0x73744, indexSegaMK2Sprites_Bonus, 0x06 },
    { L"Akklaim Logo", 0x746f8, 0x74718, indexSegaMK2Sprites_Bonus, 0x07 },
};

const sGame_PaletteDataset MK2_SEGA_BonusPalettes_TitleScreen[] =
{
    { L"Intro Background 1/3", 0x70100, 0x70120, indexSegaMK2Sprites_Bonus, 0x0a, &pairNextAndNext },
    { L"Intro Background 2/3", 0x70120, 0x70140, indexSegaMK2Sprites_Bonus, 0x0b },
    { L"Intro Background 3/3", 0x70140, 0x70160, indexSegaMK2Sprites_Bonus, 0x0c },
    { L"Intro Background Flash", 0x70180, 0x701a0, indexSegaMK2Sprites_Bonus, 0x0d },
    { L"MORTAL KOMBAT II Logo", 0x70160, 0x70180, indexSegaMK2Sprites_Bonus, 0x0f },
    { L"Menu Screen", 0x700c0, 0x700e0, indexSegaMK2Sprites_Bonus, 0x0e },
};

const sGame_PaletteDataset MK2_SEGA_BonusPalettes_CharacterSelect[] =
{
    { L"Background/Select Cursor", 0x70080, 0x700a0, indexSegaMK2Sprites_Bonus, 0x04, &pairNext },
    { L"Character Portraits", 0x700a0, 0x700c0, indexSegaMK2Sprites_Bonus, 0x05, &pairPrevious },
};

const sGame_PaletteDataset MK2_SEGA_BonusPalettes_ArcadeTower[] =
{
    { L"Mountain", 0x70000, 0x70020, indexSegaMK2Sprites_Bonus, 0x01, &pairNextAndNext },
    { L"Shao Kahn", 0x70040, 0x70060, indexSegaMK2Sprites_Bonus, 0x03 },
    { L"Portraits", 0x70020, 0x70040, indexSegaMK2Sprites_Bonus, 0x02 },
    { L"Kontinue Screen", 0x700e0, 0x70100, indexSegaMK2Sprites_Bonus, 0x00 },
};

const sDescTreeNode MK2_SEGA_LiuKang_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_LiuKang_P1, ARRAYSIZE(MK2_SEGA_LiuKang_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_LiuKang_P2, ARRAYSIZE(MK2_SEGA_LiuKang_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_LiuKang_Extras, ARRAYSIZE(MK2_SEGA_LiuKang_Extras) },
};

const sDescTreeNode MK2_SEGA_Baraka_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Baraka_P1, ARRAYSIZE(MK2_SEGA_Baraka_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Baraka_P2, ARRAYSIZE(MK2_SEGA_Baraka_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Baraka_Extras, ARRAYSIZE(MK2_SEGA_Baraka_Extras) },
};

const sDescTreeNode MK2_SEGA_Kitana_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Kitana_P1, ARRAYSIZE(MK2_SEGA_Kitana_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Kitana_P2, ARRAYSIZE(MK2_SEGA_Kitana_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Kitana_Extras, ARRAYSIZE(MK2_SEGA_Kitana_Extras) },
};

const sDescTreeNode MK2_SEGA_Mileena_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Mileena_P1, ARRAYSIZE(MK2_SEGA_Mileena_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Mileena_P2, ARRAYSIZE(MK2_SEGA_Mileena_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Mileena_Extras, ARRAYSIZE(MK2_SEGA_Mileena_Extras) },
};

const sDescTreeNode MK2_SEGA_KungLao_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_KungLao_P1, ARRAYSIZE(MK2_SEGA_KungLao_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_KungLao_P2, ARRAYSIZE(MK2_SEGA_KungLao_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_KungLao_Extras, ARRAYSIZE(MK2_SEGA_KungLao_Extras) },
};

const sDescTreeNode MK2_SEGA_JohnnyCage_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_JohnnyCage_P1, ARRAYSIZE(MK2_SEGA_JohnnyCage_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_JohnnyCage_P2, ARRAYSIZE(MK2_SEGA_JohnnyCage_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_JohnnyCage_Extras, ARRAYSIZE(MK2_SEGA_JohnnyCage_Extras) },
};

const sDescTreeNode MK2_SEGA_Rayden_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Rayden_P1, ARRAYSIZE(MK2_SEGA_Rayden_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Rayden_P2, ARRAYSIZE(MK2_SEGA_Rayden_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Rayden_Extras, ARRAYSIZE(MK2_SEGA_Rayden_Extras) },
};

const sDescTreeNode MK2_SEGA_Jax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Jax_P1, ARRAYSIZE(MK2_SEGA_Jax_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Jax_P2, ARRAYSIZE(MK2_SEGA_Jax_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Jax_Extras, ARRAYSIZE(MK2_SEGA_Jax_Extras) },
};

const sDescTreeNode MK2_SEGA_SubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_SubZero_P1, ARRAYSIZE(MK2_SEGA_SubZero_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_SubZero_P2, ARRAYSIZE(MK2_SEGA_SubZero_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_SubZero_Extras, ARRAYSIZE(MK2_SEGA_SubZero_Extras) },
};

const sDescTreeNode MK2_SEGA_Scorpion_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Scorpion_P1, ARRAYSIZE(MK2_SEGA_Scorpion_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Scorpion_P2, ARRAYSIZE(MK2_SEGA_Scorpion_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Scorpion_Extras, ARRAYSIZE(MK2_SEGA_Scorpion_Extras) },
};

const sDescTreeNode MK2_SEGA_Reptile_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Reptile_P1, ARRAYSIZE(MK2_SEGA_Reptile_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Reptile_P2, ARRAYSIZE(MK2_SEGA_Reptile_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Reptile_Extras, ARRAYSIZE(MK2_SEGA_Reptile_Extras) },
};

const sDescTreeNode MK2_SEGA_ShangTsung_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShangTsung_P1, ARRAYSIZE(MK2_SEGA_ShangTsung_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShangTsung_P2, ARRAYSIZE(MK2_SEGA_ShangTsung_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShangTsung_Extras, ARRAYSIZE(MK2_SEGA_ShangTsung_Extras) },
    { L"P1 Morphs", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShangTsung_P1Morphs, ARRAYSIZE(MK2_SEGA_ShangTsung_P1Morphs) },
    { L"P2 Morphs", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShangTsung_P2Morphs, ARRAYSIZE(MK2_SEGA_ShangTsung_P2Morphs) },
};

const sDescTreeNode MK2_SEGA_Kintaro_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Kintaro_Palettes, ARRAYSIZE(MK2_SEGA_Kintaro_Palettes) },
};

const sDescTreeNode MK2_SEGA_ShaoKahn_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShaoKahn_Palettes, ARRAYSIZE(MK2_SEGA_ShaoKahn_Palettes) },
};

const sDescTreeNode MK2_SEGA_Smoke_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Smoke_Palettes, ARRAYSIZE(MK2_SEGA_Smoke_Palettes) },
};

const sDescTreeNode MK2_SEGA_Jade_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Jade_Palettes, ARRAYSIZE(MK2_SEGA_Jade_Palettes) },
};

const sDescTreeNode MK2_SEGA_Fatalities_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Fatalities_Default, ARRAYSIZE(MK2_SEGA_Fatalities_Default) },
};

const sDescTreeNode MK2_SEGA_Stages_COLLECTION[] =
{
    { L"Dead Pool", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_DeadPool, ARRAYSIZE(MK2_SEGA_Stages_DeadPool) },
    { L"Kombat Tomb", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_KombatTomb, ARRAYSIZE(MK2_SEGA_Stages_KombatTomb) },
    { L"Wasteland", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_Wasteland, ARRAYSIZE(MK2_SEGA_Stages_Wasteland) },
    { L"The Tower", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_TheTower, ARRAYSIZE(MK2_SEGA_Stages_TheTower) },
    { L"The Living Forest", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_TheLivingForest, ARRAYSIZE(MK2_SEGA_Stages_TheLivingForest) },
    { L"The Armory", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_TheArmory, ARRAYSIZE(MK2_SEGA_Stages_TheArmory) },
    { L"The Pit II", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_ThePitII, ARRAYSIZE(MK2_SEGA_Stages_ThePitII) },
    { L"The Portal", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_ThePortal, ARRAYSIZE(MK2_SEGA_Stages_ThePortal) },
    { L"Kahn's Arena", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_KahnsArena, ARRAYSIZE(MK2_SEGA_Stages_KahnsArena) },
    { L"The Portal (Secret)", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_ThePortalSecret, ARRAYSIZE(MK2_SEGA_Stages_ThePortalSecret) },
};

const sDescTreeNode MK2_SEGA_BonusPalettes_COLLECTION[] =
{
    { L"Logos", DESC_NODETYPE_TREE, (void*)MK2_SEGA_BonusPalettes_Logos, ARRAYSIZE(MK2_SEGA_BonusPalettes_Logos) },
    { L"Title Screen", DESC_NODETYPE_TREE, (void*)MK2_SEGA_BonusPalettes_TitleScreen, ARRAYSIZE(MK2_SEGA_BonusPalettes_TitleScreen) },
    { L"Character Select", DESC_NODETYPE_TREE, (void*)MK2_SEGA_BonusPalettes_CharacterSelect, ARRAYSIZE(MK2_SEGA_BonusPalettes_CharacterSelect) },
    { L"Arcade Tower", DESC_NODETYPE_TREE, (void*)MK2_SEGA_BonusPalettes_ArcadeTower, ARRAYSIZE(MK2_SEGA_BonusPalettes_ArcadeTower) },
};

const sDescTreeNode MK2_SEGA_UNITS[] =
{
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK2_SEGA_LiuKang_COLLECTION, ARRAYSIZE(MK2_SEGA_LiuKang_COLLECTION) },
    { L"Baraka", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Baraka_COLLECTION, ARRAYSIZE(MK2_SEGA_Baraka_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Kitana_COLLECTION, ARRAYSIZE(MK2_SEGA_Kitana_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Mileena_COLLECTION, ARRAYSIZE(MK2_SEGA_Mileena_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)MK2_SEGA_KungLao_COLLECTION, ARRAYSIZE(MK2_SEGA_KungLao_COLLECTION) },
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK2_SEGA_JohnnyCage_COLLECTION, ARRAYSIZE(MK2_SEGA_JohnnyCage_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Rayden_COLLECTION, ARRAYSIZE(MK2_SEGA_Rayden_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Jax_COLLECTION, ARRAYSIZE(MK2_SEGA_Jax_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK2_SEGA_SubZero_COLLECTION, ARRAYSIZE(MK2_SEGA_SubZero_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Scorpion_COLLECTION, ARRAYSIZE(MK2_SEGA_Scorpion_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Reptile_COLLECTION, ARRAYSIZE(MK2_SEGA_Reptile_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShangTsung_COLLECTION, ARRAYSIZE(MK2_SEGA_ShangTsung_COLLECTION) },
    { L"Kintaro", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Kintaro_COLLECTION, ARRAYSIZE(MK2_SEGA_Kintaro_COLLECTION) },
    { L"Shao Kahn", DESC_NODETYPE_TREE, (void*)MK2_SEGA_ShaoKahn_COLLECTION, ARRAYSIZE(MK2_SEGA_ShaoKahn_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Smoke_COLLECTION, ARRAYSIZE(MK2_SEGA_Smoke_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Jade_COLLECTION, ARRAYSIZE(MK2_SEGA_Jade_COLLECTION) },
    { L"Fatalities", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Fatalities_COLLECTION, ARRAYSIZE(MK2_SEGA_Fatalities_COLLECTION) },
    // These are compressed and thus commented out for now
    //    { L"Stages", DESC_NODETYPE_TREE, (void*)MK2_SEGA_Stages_COLLECTION, ARRAYSIZE(MK2_SEGA_Stages_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK2_SEGA_BonusPalettes_COLLECTION, ARRAYSIZE(MK2_SEGA_BonusPalettes_COLLECTION) },
};

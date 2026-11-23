#pragma once

// Rev 1.1 palettes begin at around 0xa4dd4
// Rev 1.4: no data
// Rev 2.1: First official release, adds Smoke and Jade.
// Rev 3.1: Adds Noob Saibot
// Rev 3.2: EU, no data.

// rom sort order:
// P2 kung lao, liu kang, johnny cage, baraka, raiden, jax, shang tsung, reptile, scorpion, kitana, mileena

const std::vector<uint16_t> MK2_A_IMGIDS_USED =
{
    indexMK2ASprites_Baraka,            // 0x6c
    indexMK2ASprites_Jade,              // 0x6d
    indexMK2ASprites_Jax,               // 0x6e
    indexMK2ASprites_JohnnyCage,        // 0x6f
    indexMK2ASprites_Kintaro,           // 0x70
    indexMK2ASprites_Kitana,            // 0x71
    indexMK2ASprites_KungLao,           // 0x72
    indexMK2ASprites_LiuKang,           // 0x73
    indexMK2ASprites_Mileena,           // 0x74
    indexMK2ASprites_NoobSaibot,        // 0x75
    indexMK2ASprites_Raiden,            // 0x76
    indexMK2ASprites_Reptile,           // 0x77
    indexMK2ASprites_Scorpion,          // 0x78
    indexMK2ASprites_ShangTsung,        // 0x79
    indexMK2ASprites_ShaoKahn,          // 0x7a
    indexMK2ASprites_Smoke,             // 0x7b
    indexMK2ASprites_SubZero,           // 0x7c
    indexMK2ASprites_Bonus,             // 0x7d
    indexMK2ASprites_Stages,            // 0x7e
};

const sGame_PaletteDataset MK2_A_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0x5b918, 0x5b998, indexMK2ASprites_LiuKang },
    { L"Gibs", 0x5ba1c, 0x5ba9c },
};

const sGame_PaletteDataset MK2_A_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0x21164, 0x211e4, indexMK2ASprites_LiuKang },
    { L"Gibs", 0x21a1c, 0x21a9c },
};

const sGame_PaletteDataset MK2_A_LIUKANG_PALETTES_SHARED[] =
{
    { L"Dragon Morph", 0x5e9a4, 0x5ea1a },
    { L"Dragon", 0x5ea1c, 0x5ea9c },
    { L"Babality", 0x60ee0, 0x60f60 },
    { L"Friendship", 0x61246, 0x61266 },
    { L"Liu Kang Fireball", 0x5b99a, 0x5ba1a, indexMK2ASprites_LiuKang, 0x01 },
};

const sGame_PaletteDataset MK2_A_LiuKang_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x22308, 0x22388, indexMK2ASprites_LiuKang },
};

const sGame_PaletteDataset MK2_A_KUNGLAO_PALETTES_P1[] =
{
    { L"Kung Lao P1", 0x5b77c, 0x5b7fc, indexMK2ASprites_KungLao },
    { L"Gibs", 0x5b880, 0x5b8f6 },
};

const sGame_PaletteDataset MK2_A_KUNGLAO_PALETTES_P2[] =
{
    { L"Kung Lao P2", 0x210e2, 0x21162, indexMK2ASprites_KungLao },
    { L"Gibs", 0x21daa, 0x21e20 },
};

const sGame_PaletteDataset MK2_A_KungLao_Effects[] =
{
    { L"Hat Throw", 0x5b7fe, 0x5b87e },
    { L"Spin", 0x5b8f8, 0x5b916 },
    { L"Hat Slice", 0x60cdc, 0x60d5c },
    { L"Babality", 0x611c4, 0x61244 },
};

const sGame_PaletteDataset MK2_A_KungLao_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x22286, 0x22306, indexMK2ASprites_KungLao },
};

const sGame_PaletteDataset MK2_A_JOHNNYCAGE_PALETTES_P1[] =
{
    { L"Johnny Cage P1", 0x5ba9e, 0x5bb1e, indexMK2ASprites_JohnnyCage },
    { L"Gibs", 0x5bba2, 0x5bc22 },
};

const sGame_PaletteDataset MK2_A_JOHNNYCAGE_PALETTES_P2[] =
{
    { L"Johnny Cage P2", 0x211e6, 0x21266, indexMK2ASprites_JohnnyCage },
    { L"Gibs", 0x21a9e, 0x21b1e },
};

const sGame_PaletteDataset MK2_A_JohnnyCage_Effects[] =
{
    { L"Shadow Trail", 0x3bf12, 0x3bf92 },
    { L"Red Shadow Trail", 0x3bf94, 0x3c014 },
    { L"Forceball", 0x5bb20, 0x5bba0 },
    { L"Friendship", 0x60b36, 0x60b76 },
    { L"Babality", 0x60f62, 0x60fda },
};

const sGame_PaletteDataset MK2_A_JohnnyCage_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x2238a, 0x2240a, indexMK2ASprites_JohnnyCage },
};

const sGame_PaletteDataset MK2_A_REPTILE_PALETTES_P1[] =
{
    { L"Reptile P1", 0x5c984, 0x5ca04, indexMK2ASprites_Reptile },
    { L"Gibs", 0x21f26, 0x21fa6 },
};

const sGame_PaletteDataset MK2_A_REPTILE_PALETTES_P2[] =
{
    { L"Reptile P2", 0x21574, 0x215f4, indexMK2ASprites_Reptile },
    { L"Gibs", 0x21fa8, 0x22028 },
};

const sGame_PaletteDataset MK2_A_Reptile_Effects[] =
{
    { L"Forceball", 0x5ca88, 0x5cac8 },
    { L"Unmasked Face", 0x5caec, 0x5cb2c },
    { L"Tongue Lash", 0x5cb2e, 0x5cb3e },
    { L"Acid Spit", 0x5cc46, 0x5cc66 },
};

const sGame_PaletteDataset MK2_A_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0x5c902, 0x5c982, indexMK2ASprites_SubZero },
    { L"Gibs", 0x21e22, 0x21ea2 },
};

const sGame_PaletteDataset MK2_A_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0x214f2, 0x21572, indexMK2ASprites_SubZero },
    { L"Gibs", 0x21ea4, 0x21f24 },
};

const sGame_PaletteDataset MK2_A_SubZero_Effects[] =
{
    { L"Ice Ball/Ground Freeze", 0x5cc04, 0x5cc44 },
    { L"Ice Shatter", 0x60d5e, 0x60dde },
    { L"Ice Grenade", 0x61466, 0x61486 },
};

const sGame_PaletteDataset MK2_A_SHANGTSUNG_PALETTES_P1[] =
{
    { L"Shang Tsung P1", 0x5c088, 0x5c108, indexMK2ASprites_ShangTsung },
    { L"Gibs", 0x5c18c, 0x5c20c },
};

const sGame_PaletteDataset MK2_A_SHANGTSUNG_PALETTES_P2[] =
{
    { L"Shang Tsung P2", 0x21470, 0x214f0, indexMK2ASprites_ShangTsung },
    { L"Gibs", 0x21d28, 0x21da8 },
};

const sGame_PaletteDataset MK2_A_ShangTsung_Effects[] =
{
    { L"Flaming Skull", 0x5c10a, 0x5c18a },
    { L"Friendship", 0x60c18, 0x60c58 },
    { L"Babality", 0x60de0, 0x60e5c },
};

const sGame_PaletteDataset MK2_A_ShangTsung_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x22510, 0x22590, indexMK2ASprites_ShangTsung },
};

const sGame_PaletteDataset MK2_A_ShangTsung_SoulSteal[] =
{
    { L"Kung Lao", 0x3b1e0, 0x3b258 },
    { L"Liu Kang", 0x3b25a, 0x3b2d8 },
    { L"Johnny Cage", 0x3b2da, 0x3b35a },
    { L"Baraka", 0x3b35c, 0x3b3dc },
    { L"Female Ninjas", 0x3b3de, 0x3b45e },
    { L"Raiden", 0x3b460, 0x3b4e0 },
    { L"Shang Tsung", 0x3b4e2, 0x3b562 },
    { L"Sub-Zero", 0x3b564, 0x3b5e0 },
    { L"Reptile", 0x3b5e2, 0x3b65e },
    { L"Scorpion", 0x3b660, 0x3b6dc },
    { L"Jax", 0x3b6de, 0x3b75e },
    { L"Soul Steal", 0x60a4c, 0x60a8c },
    { L"Soul Steal Corpse", 0x609ca, 0x60a4a },
};

const sGame_PaletteDataset MK2_A_ShangTsung_Morphs[] =
{
    { L"Mileena", 0x5c20e, 0x5c28e },
    { L"Sub-Zero", 0x5c290, 0x5c30a },
    { L"Johnny Cage", 0x5c30c, 0x5c388 },
    { L"Reptile", 0x5c38a, 0x5c40a },
    { L"Kung Lao", 0x5c40c, 0x5c48c },
    { L"Jax", 0x5c48e, 0x5c508 },
    { L"Kitana", 0x5c50c, 0x5c58c },
    { L"Scorpion", 0x5c58e, 0x5c60a },
    { L"Liu Kang", 0x5c60c, 0x5c68c },
    { L"Raiden", 0x5c68e, 0x5c70e },
    { L"Baraka", 0x5c710, 0x5c790 },
};

const sGame_PaletteDataset MK2_A_KITANA_PALETTES_P1[] =
{
    { L"Kitana P1", 0x5bdaa, 0x5be2a, indexMK2ASprites_Kitana },
    { L"Gibs", 0x5c006, 0x5c086 },
};

const sGame_PaletteDataset MK2_A_KITANA_PALETTES_P2[] =
{
    { L"Kitana P2", 0x21678, 0x216f8, indexMK2ASprites_Kitana },
    { L"Gibs", 0x5bf84, 0x5c004 },
};

const sGame_PaletteDataset MK2_A_Kitana_Effects[] =
{
    { L"Fan Lift", 0x5beae, 0x5bebe },
    { L"Fan", 0x5bf02, 0x5bf82 },
    { L"Babality", 0x61140, 0x611c2 },
};

const sGame_PaletteDataset MK2_A_Kitana_Shared[] =
{
    { L"Female Ninja Frozen/Electrocuted", 0x2248e, 0x2250e, indexMK2ASprites_Kitana },
    { L"Female Ninja Friendship", 0x60bac, 0x60c16 },
};

const sGame_PaletteDataset MK2_A_JAX_PALETTES_P1[] =
{
    { L"Jax P1", 0x5cc68, 0x5cce8, indexMK2ASprites_Jax },
    { L"Gibs", 0x5cd2c, 0x5cdac },
};

const sGame_PaletteDataset MK2_A_JAX_PALETTES_P2[] =
{
    { L"Jax P2", 0x213ee, 0x2146e, indexMK2ASprites_Jax },
    { L"Gibs", 0x220ac, 0x2212c },
};

const sGame_PaletteDataset MK2_A_Jax_Effects[] =
{
    { L"Energy Wave", 0x5ccea, 0x5cd08 },
    { L"Ground Pound", 0x5cd0a, 0x5cd2a },
    { L"Head Clap Gibs", 0x5e584, 0x5e604 },
    { L"Babality", 0x60fdc, 0x6103e },
};

const sGame_PaletteDataset MK2_A_Jax_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x22696, 0x22716, indexMK2ASprites_Jax },
};

const sGame_PaletteDataset MK2_A_MILEENA_PALETTES_P1[] =
{
    { L"Mileena P1", 0x5be2c, 0x5beac, indexMK2ASprites_Mileena },
    { L"Gibs", 0x21ba2, 0x21c22 },
};

const sGame_PaletteDataset MK2_A_MILEENA_PALETTES_P2[] =
{
    { L"Mileena P2", 0x216fa, 0x2177a, indexMK2ASprites_Mileena },
    { L"Gibs", 0x21ca6, 0x21d26 },
};

const sGame_PaletteDataset MK2_A_Mileena_Effects[] =
{
    { L"Sai Throw", 0x5bec0, 0x5bf00 },
    { L"Man Eater", 0x61488, 0x614bc },
    { L"Babality", 0x610c2, 0x6113e },
};

const sGame_PaletteDataset MK2_A_BARAKA_PALETTES_P1[] =
{
    { L"Baraka P1", 0x5bc24, 0x5bca4, indexMK2ASprites_Baraka },
    { L"Gibs", 0x21b20, 0x21ba0 },
};

const sGame_PaletteDataset MK2_A_BARAKA_PALETTES_P2[] =
{
    { L"Baraka P2", 0x212ea, 0x2136a, indexMK2ASprites_Baraka },
    { L"Gibs", 0x5bd28, 0x5bda8 },
};

const sGame_PaletteDataset MK2_A_Baraka_Effects[] =
{
    { L"Blade Spark", 0x5bca6, 0x5bd26 },
    { L"Friendship", 0x60b78, 0x60baa },
    { L"Babality", 0x61040, 0x610c0 },
};

const sGame_PaletteDataset MK2_A_Baraka_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x2240c, 0x2248c, indexMK2ASprites_Baraka },
};

const sGame_PaletteDataset MK2_A_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0x5ca06, 0x5ca86, indexMK2ASprites_Scorpion },
    { L"Gibs", 0x5cb82, 0x5cc02 },
};

const sGame_PaletteDataset MK2_A_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x215f6, 0x21676, indexMK2ASprites_Scorpion },
    { L"Gibs", 0x2202a, 0x220aa },
};

const sGame_PaletteDataset MK2_A_Scorpion_Effects[] =
{
    { L"Spear", 0x5caca, 0x5caea },
    { L"Skull", 0x5cb40, 0x5cb80 },
    { L"Toasty Fatality", 0x6003c, 0x600b2 },
};

const sGame_PaletteDataset MK2_A_Scorpion_StatusEffects[] =
{
    { L"Male Ninja Frozen/Electrocuted", 0x22614, 0x22694, indexMK2ASprites_Scorpion },
};

const sGame_PaletteDataset MK2_A_RAIDEN_PALETTES_P1[] =
{
    { L"Raiden P1", 0x5c792, 0x5c812, indexMK2ASprites_Raiden },
    { L"Gibs", 0x5c814, 0x5c894 },
};

const sGame_PaletteDataset MK2_A_RAIDEN_PALETTES_P2[] =
{
    { L"Raiden P2", 0x2136c, 0x213ec, indexMK2ASprites_Raiden },
    { L"Gibs", 0x2199a, 0x21a1a },
};

const sGame_PaletteDataset MK2_A_Raiden_Effects[] =
{
    { L"Lightning/Teleport", 0x5c896, 0x5c900 },
    { L"Friendship", 0x60c5a, 0x60cda },
    { L"Babality", 0x60e5e, 0x60ede },
};

const sGame_PaletteDataset MK2_A_Raiden_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x22592, 0x22612, indexMK2ASprites_Raiden },
};

const sGame_PaletteDataset MK2_A_KINTARO_PALETTES[] =
{
    { L"Kintaro", 0x5cdd0, 0x5ce50, indexMK2ASprites_Kintaro },
};

const sGame_PaletteDataset MK2_A_Kintaro_Effects[] =
{
    { L"Fireball Glow", 0x14d10, 0x14d90 },
    { L"Fireball", 0x5cdae, 0x5cdce },
};

const sGame_PaletteDataset MK2_A_Kintaro_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x22204, 0x22284, indexMK2ASprites_Kintaro },
};

const sGame_PaletteDataset MK2_A_SHAOKAHN_PALETTES[] =
{
    { L"Shao Kahn", 0x5ce52, 0x5ced2, indexMK2ASprites_ShaoKahn },
};

const sGame_PaletteDataset MK2_A_ShaoKahn_Effects[] =
{
    { L"Shoulder Tackle", 0x3cea2, 0x3cf22, indexMK2ASprites_ShaoKahn },
    { L"Javelin", 0x5ced4, 0x5cf14 },
    { L"Defeated", 0x5cf58, 0x5cfb8 },
    { L"Rock Debris", 0x34ab6, 0x34b0c },
};

const sGame_PaletteDataset MK2_A_ShaoKahn_StatusEffects[] =
{
    { L"Frozen/Electrocuted", 0x22182, 0x22202, indexMK2ASprites_ShaoKahn },
};

const sGame_PaletteDataset MK2_A_SMOKE_PALETTES[] =
{
    { L"Smoke", 0x2177c, 0x217fc, indexMK2ASprites_Smoke },
};

const sGame_PaletteDataset MK2_A_NOOB_PALETTES[] =
{
    { L"Noob Saibot", 0x217fe, 0x2187e, indexMK2ASprites_NoobSaibot },
};

const sGame_PaletteDataset MK2_A_JADE_PALETTES[] =
{
    { L"Jade", 0x5FA24, 0x5FAa4, indexMK2ASprites_Jade},
};

const sGame_PaletteDataset MK2_A_BonusPalettes_AttractMode[] =
{
    { L"Lightning 1", 0x3acaa, 0x3ad26 },
    { L"Lightning 2", 0x3ad28, 0x3ada4 },
    { L"Lightning 3", 0x3ada6, 0x3ae22 },
    { L"MK Dragon 1", 0x58a7e, 0x58ae4 },
    { L"MK Dragon 2", 0x58ae6, 0x58b26 },
    { L"MK Dragon 3", 0x58b28, 0x58b66 },
    { L"MK Dragon 4", 0x58b68, 0x58ba8 },
    { L"MK Dragon 5", 0x58baa, 0x58bea },
    { L"MK Dragon 6", 0x58bec, 0x58c66 },
    { L"Stone BG 1-1", 0x594fe, 0x59524 },
    { L"Stone BG 1-2", 0x59526, 0x59546 },
    { L"Stone BG 1-3", 0x59548, 0x5956f },
    { L"Stone BG 2-1", 0x5ad76, 0x5ad9c },
    { L"Stone BG 2-2", 0x5ad9e, 0x5adc4 },
    { L"\"MIDWAY PRESENTS\"", 0x5e606, 0x5e626 },
    { L"MK2 Logo 1", 0x5fe3c, 0x5febc },
    { L"MK2 Logo 2", 0x5ff3c, 0x5ffbc },
    { L"Lightning 4", 0x5febe, 0x5ff3a },
    { L"Lightning 5", 0x5ffbe, 0x6003a },
    { L"MK2 Secondary Logo Fade 1 (Top)", 0x601fe, 0x6023e },
    { L"MK2 Secondary Logo Fade 1 (Bottom)", 0x60240, 0x60280 },
    { L"MK2 Secondary Logo Fade 2 (Top)", 0x60282, 0x602c2 },
    { L"MK2 Secondary Logo Fade 2 (Bottom)", 0x602c4, 0x60304 },
    { L"MK2 Secondary Logo Fade 3 (Top)", 0x60306, 0x60346 },
    { L"MK2 Secondary Logo Fade 3 (Bottom)", 0x60348, 0x60388 },
    { L"MK2 Secondary Logo Fade 4 (Top)", 0x6038a, 0x603c8 },
    { L"MK2 Secondary Logo Fade 4 (Bottom)", 0x603ca, 0x6040a },
    { L"MK2 Secondary Logo (Top)", 0x6040c, 0x6048c },
    { L"MK2 Secondary Logo (Bottom)", 0x6048e, 0x6050e },
    { L"Promotional CD", 0x6278a, 0x62988 },
};

const sGame_PaletteDataset MK2_A_BonusPalettes_InGame[] =
{
    { L"Blood 1", 0x5e54a, 0x5e568 },
    { L"Blood 2", 0x5e56a, 0x5e582 },
    { L"HUD", 0x5e628, 0x5e6a8 },
    { L"Win Symbol 1", 0x5e7ce, 0x5e828 },
    { L"Win Symbol 2", 0x5e82a, 0x5e896 },
    { L"Win Symbol 3", 0x5e898, 0x5e90e },
    { L"Dan \"Toasty\" Forden", 0x5faa6, 0x5fb26 },
    { L"Font Colors 1/Lifebar", 0x5fcbd, 0x5fcc9 },
    { L"Font Colors 2/Shadows", 0x5fccb, 0x5fcd7 },
    { L"Smoke", 0x601dc, 0x601fc },
    { L"Gibs 1", 0x61542, 0x615ba },
    { L"Gibs 2", 0x600b4, 0x6012e },
};

const sDescTreeNode MK2_A_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_PALETTES_P1, ARRAYSIZE(MK2_A_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_PALETTES_P2, ARRAYSIZE(MK2_A_LIUKANG_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_PALETTES_SHARED, ARRAYSIZE(MK2_A_LIUKANG_PALETTES_SHARED) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_LiuKang_StatusEffects, ARRAYSIZE(MK2_A_LiuKang_StatusEffects) },
};

const sDescTreeNode MK2_A_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_KUNGLAO_PALETTES_P1, ARRAYSIZE(MK2_A_KUNGLAO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_KUNGLAO_PALETTES_P2, ARRAYSIZE(MK2_A_KUNGLAO_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_KungLao_Effects, ARRAYSIZE(MK2_A_KungLao_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_KungLao_StatusEffects, ARRAYSIZE(MK2_A_KungLao_StatusEffects) },
};

const sDescTreeNode MK2_A_JOHNNYCAGE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_JOHNNYCAGE_PALETTES_P1, ARRAYSIZE(MK2_A_JOHNNYCAGE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_JOHNNYCAGE_PALETTES_P2, ARRAYSIZE(MK2_A_JOHNNYCAGE_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_JohnnyCage_Effects, ARRAYSIZE(MK2_A_JohnnyCage_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_JohnnyCage_StatusEffects, ARRAYSIZE(MK2_A_JohnnyCage_StatusEffects) },
};

const sDescTreeNode MK2_A_REPTILE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_REPTILE_PALETTES_P1, ARRAYSIZE(MK2_A_REPTILE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_REPTILE_PALETTES_P2, ARRAYSIZE(MK2_A_REPTILE_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Reptile_Effects, ARRAYSIZE(MK2_A_Reptile_Effects) },
};

const sDescTreeNode MK2_A_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_SUBZERO_PALETTES_P1, ARRAYSIZE(MK2_A_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_SUBZERO_PALETTES_P2, ARRAYSIZE(MK2_A_SUBZERO_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_SubZero_Effects, ARRAYSIZE(MK2_A_SubZero_Effects) },
};

const sDescTreeNode MK2_A_SHANGTSUNG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_SHANGTSUNG_PALETTES_P1, ARRAYSIZE(MK2_A_SHANGTSUNG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_SHANGTSUNG_PALETTES_P2, ARRAYSIZE(MK2_A_SHANGTSUNG_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_ShangTsung_Effects, ARRAYSIZE(MK2_A_ShangTsung_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_ShangTsung_StatusEffects, ARRAYSIZE(MK2_A_ShangTsung_StatusEffects) },
    { L"Soul Steal", DESC_NODETYPE_TREE, (void*)MK2_A_ShangTsung_SoulSteal, ARRAYSIZE(MK2_A_ShangTsung_SoulSteal) },
    { L"Morphs", DESC_NODETYPE_TREE, (void*)MK2_A_ShangTsung_Morphs, ARRAYSIZE(MK2_A_ShangTsung_Morphs) },
};

const sDescTreeNode MK2_A_KITANA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_KITANA_PALETTES_P1, ARRAYSIZE(MK2_A_KITANA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_KITANA_PALETTES_P2, ARRAYSIZE(MK2_A_KITANA_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Kitana_Effects, ARRAYSIZE(MK2_A_Kitana_Effects) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK2_A_Kitana_Shared, ARRAYSIZE(MK2_A_Kitana_Shared) },
};

const sDescTreeNode MK2_A_JAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_JAX_PALETTES_P1, ARRAYSIZE(MK2_A_JAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_JAX_PALETTES_P2, ARRAYSIZE(MK2_A_JAX_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Jax_Effects, ARRAYSIZE(MK2_A_Jax_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Jax_StatusEffects, ARRAYSIZE(MK2_A_Jax_StatusEffects) },
};

const sDescTreeNode MK2_A_MILEENA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_MILEENA_PALETTES_P1, ARRAYSIZE(MK2_A_MILEENA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_MILEENA_PALETTES_P2, ARRAYSIZE(MK2_A_MILEENA_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Mileena_Effects, ARRAYSIZE(MK2_A_Mileena_Effects) },
};

const sDescTreeNode MK2_A_BARAKA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_BARAKA_PALETTES_P1, ARRAYSIZE(MK2_A_BARAKA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_BARAKA_PALETTES_P2, ARRAYSIZE(MK2_A_BARAKA_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Baraka_Effects, ARRAYSIZE(MK2_A_Baraka_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Baraka_StatusEffects, ARRAYSIZE(MK2_A_Baraka_StatusEffects) },
};

const sDescTreeNode MK2_A_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_SCORPION_PALETTES_P1, ARRAYSIZE(MK2_A_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_SCORPION_PALETTES_P2, ARRAYSIZE(MK2_A_SCORPION_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Scorpion_Effects, ARRAYSIZE(MK2_A_Scorpion_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Scorpion_StatusEffects, ARRAYSIZE(MK2_A_Scorpion_StatusEffects) },
};

const sDescTreeNode MK2_A_RAIDEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_RAIDEN_PALETTES_P1, ARRAYSIZE(MK2_A_RAIDEN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_RAIDEN_PALETTES_P2, ARRAYSIZE(MK2_A_RAIDEN_PALETTES_P2) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Raiden_Effects, ARRAYSIZE(MK2_A_Raiden_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Raiden_StatusEffects, ARRAYSIZE(MK2_A_Raiden_StatusEffects) },
};

const sDescTreeNode MK2_A_KINTARO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_KINTARO_PALETTES, ARRAYSIZE(MK2_A_KINTARO_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Kintaro_Effects, ARRAYSIZE(MK2_A_Kintaro_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_Kintaro_StatusEffects, ARRAYSIZE(MK2_A_Kintaro_StatusEffects) },
};

const sDescTreeNode MK2_A_SHAOKAHN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_SHAOKAHN_PALETTES, ARRAYSIZE(MK2_A_SHAOKAHN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_A_ShaoKahn_Effects, ARRAYSIZE(MK2_A_ShaoKahn_Effects) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MK2_A_ShaoKahn_StatusEffects, ARRAYSIZE(MK2_A_ShaoKahn_StatusEffects) },
};

const sDescTreeNode MK2_A_SMOKE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_SMOKE_PALETTES, ARRAYSIZE(MK2_A_SMOKE_PALETTES) },
};

const sDescTreeNode MK2_A_NOOB_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_NOOB_PALETTES, ARRAYSIZE(MK2_A_NOOB_PALETTES) },
};

const sDescTreeNode MK2_A_JADE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_JADE_PALETTES, ARRAYSIZE(MK2_A_JADE_PALETTES) },
};

const sDescTreeNode MK2_A_BONUS_COLLECTION[] =
{
    { L"Attract Mode", DESC_NODETYPE_TREE, (void*)MK2_A_BonusPalettes_AttractMode, ARRAYSIZE(MK2_A_BonusPalettes_AttractMode) },
    { L"In-Game", DESC_NODETYPE_TREE, (void*)MK2_A_BonusPalettes_InGame, ARRAYSIZE(MK2_A_BonusPalettes_InGame) },
};

const sDescTreeNode MK2_A_UNITS[] =
{
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_COLLECTION, ARRAYSIZE(MK2_A_LIUKANG_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)MK2_A_KUNGLAO_COLLECTION, ARRAYSIZE(MK2_A_KUNGLAO_COLLECTION) },
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK2_A_JOHNNYCAGE_COLLECTION, ARRAYSIZE(MK2_A_JOHNNYCAGE_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK2_A_REPTILE_COLLECTION, ARRAYSIZE(MK2_A_REPTILE_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK2_A_SUBZERO_COLLECTION, ARRAYSIZE(MK2_A_SUBZERO_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK2_A_SHANGTSUNG_COLLECTION, ARRAYSIZE(MK2_A_SHANGTSUNG_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)MK2_A_KITANA_COLLECTION, ARRAYSIZE(MK2_A_KITANA_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)MK2_A_JAX_COLLECTION, ARRAYSIZE(MK2_A_JAX_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)MK2_A_MILEENA_COLLECTION, ARRAYSIZE(MK2_A_MILEENA_COLLECTION) },
    { L"Baraka", DESC_NODETYPE_TREE, (void*)MK2_A_BARAKA_COLLECTION, ARRAYSIZE(MK2_A_BARAKA_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK2_A_SCORPION_COLLECTION, ARRAYSIZE(MK2_A_SCORPION_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK2_A_RAIDEN_COLLECTION, ARRAYSIZE(MK2_A_RAIDEN_COLLECTION) },

    { L"Kintaro", DESC_NODETYPE_TREE, (void*)MK2_A_KINTARO_COLLECTION, ARRAYSIZE(MK2_A_KINTARO_COLLECTION) },
    { L"Shao Kahn", DESC_NODETYPE_TREE, (void*)MK2_A_SHAOKAHN_COLLECTION, ARRAYSIZE(MK2_A_SHAOKAHN_COLLECTION) },

    { L"Jade", DESC_NODETYPE_TREE, (void*)MK2_A_JADE_COLLECTION, ARRAYSIZE(MK2_A_JADE_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)MK2_A_SMOKE_COLLECTION, ARRAYSIZE(MK2_A_SMOKE_COLLECTION) },
    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)MK2_A_NOOB_COLLECTION, ARRAYSIZE(MK2_A_NOOB_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_BONUS_COLLECTION, ARRAYSIZE(MK2_A_BONUS_COLLECTION) },
};

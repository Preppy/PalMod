#pragma once

// To add characters or palette lists:
// * Update the breakersCharacterList array.
// * Uncomment DumpAllCharacters in InitDescTree
// * Run PalMod: the new headers will be printed to debug out
// That should be it.  Good luck.

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_A[] =
{
    { L"Sho A", 0x135eaa, 0x135eca, indexBreakersSprites_Sho },
    { L"Sho A Super Trail", 0x135f4a, 0x135f6a, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_B[] =
{
    { L"Sho B", 0x135eca, 0x135eea, indexBreakersSprites_Sho },
    { L"Sho B Super Trail", 0x135f6a, 0x135f8a, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_C[] =
{
    { L"Sho C", 0x135eea, 0x135f0a, indexBreakersSprites_Sho },
    { L"Sho C Super Trail", 0x135f8a, 0x135faa, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_SHO_PALETTES_D[] =
{
    { L"Sho D", 0x135f0a, 0x135f2a, indexBreakersSprites_Sho },
    { L"Sho D Super Trail", 0x135fca, 0x135fea, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_JIN_PALETTES[] =
{
    { L"Jin", 0x135f2a, 0x135f4a, indexBreakersSprites_Sho },
    { L"Jin Super Trail", 0x135faa, 0x135fca, indexBreakersSprites_Sho },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_A[] =
{
    { L"Dao A", 0x13ee5a, 0x13ee7a, indexBreakersSprites_DaoLong },
    { L"Dao A Super Trail", 0x13eefa, 0x13ef1a, indexBreakersSprites_DaoLong },
    { L"Dao A Fireball", 0x13f05a, 0x13f07a },
    { L"Dao A Bright", 0x13f0da, 0x13f0fa, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_B[] =
{
    { L"Dao B", 0x13ee7a, 0x13ee9a, indexBreakersSprites_DaoLong },
    { L"Dao B Super Trail", 0x13ef1a, 0x13ef3a, indexBreakersSprites_DaoLong },
    { L"Dao B Fireball", 0x13f07a, 0x13f09a },
    { L"Dao B Bright", 0x13f0fa, 0x13f11a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_C[] =
{
    { L"Dao C", 0x13ee9a, 0x13eeba, indexBreakersSprites_DaoLong },
    { L"Dao C Super Trail", 0x13ef3a, 0x13ef5a, indexBreakersSprites_DaoLong },
    { L"Dao C Fireball", 0x13f09a, 0x13f0ba },
    { L"Dao C Bright", 0x13f11a, 0x13f13a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_D[] =
{
    { L"Dao D", 0x13eeba, 0x13eeda, indexBreakersSprites_DaoLong },
    { L"Dao D Super Trail", 0x13ef5a, 0x13ef7a, indexBreakersSprites_DaoLong },
    { L"Dao D Fireball", 0x13f0ba, 0x13f0da },
    { L"Dao D Bright", 0x13f13a, 0x13f15a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_LIU_PALETTES[] =
{
    { L"Liu", 0x13eeda, 0x13eefa, indexBreakersSprites_DaoLong },
    { L"Liu Super Trail", 0x13ef7a, 0x13ef9a, indexBreakersSprites_DaoLong },
    { L"Liu-Khai CPU ONLY Bright", 0x13f15a, 0x13f17a, indexBreakersSprites_DaoLong },
};

const sGame_PaletteDataset BREAKERS_A_DAO_PALETTES_SHARED[] =
{
    { L"Dao Super Fireball Charge", 0x13ee1a, 0x13ee3a },
    { L"Dao Super Fireball", 0x13f17a, 0x13f19a },
};  

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_A[] =
{
    { L"Condor A", 0x146778, 0x146798, indexBreakersSprites_Condor },
    { L"Condor A Super Trail", 0x146818, 0x146838, indexBreakersSprites_Condor },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_B[] =
{
    { L"Condor B", 0x146798, 0x1467b8, indexBreakersSprites_Condor },
    { L"Condor B Super Trail", 0x146838, 0x146858, indexBreakersSprites_Condor },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_C[] =
{
    { L"Condor C", 0x1467b8, 0x1467d8, indexBreakersSprites_Condor },
    { L"Condor C Super Trail", 0x146858, 0x146878, indexBreakersSprites_Condor },
};

const sGame_PaletteDataset BREAKERS_A_CONDOR_PALETTES_D[] =
{
    { L"Condor D", 0x1467d8, 0x1467f8, indexBreakersSprites_Condor },
    { L"Condor D Super Trail", 0x146878, 0x146898, indexBreakersSprites_Condor },
};

const sGame_PaletteDataset BREAKERS_A_GIGARS_PALETTES[] =
{
    { L"Gigars", 0x1467f8, 0x146818, indexBreakersSprites_Condor },
    { L"Gigars Super Trail", 0x146898, 0x1468b8, indexBreakersSprites_Condor },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_A[] =
{
    { L"Tia A", 0x1524a8, 0x1524c8, indexBreakersSprites_Tia },
    { L"Tia A Super Trail", 0x152548, 0x152568, indexBreakersSprites_Tia },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_B[] =
{
    { L"Tia B", 0x1524c8, 0x1524e8, indexBreakersSprites_Tia },
    { L"Tia B Super Trail", 0x152568, 0x152588, indexBreakersSprites_Tia },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_C[] =
{
    { L"Tia C", 0x1524e8, 0x152508, indexBreakersSprites_Tia },
    { L"Tia C Super Trail", 0x152588, 0x1525a8, indexBreakersSprites_Tia },
};

const sGame_PaletteDataset BREAKERS_A_TIA_PALETTES_D[] =
{
    { L"Tia D", 0x152508, 0x152528, indexBreakersSprites_Tia },
    { L"Tia D Super Trail", 0x1525a8, 0x1525c8, indexBreakersSprites_Tia },
};

const sGame_PaletteDataset BREAKERS_A_SHELLY_PALETTES[] =
{
    { L"Shelly", 0x152528, 0x152548, indexBreakersSprites_Tia },
    { L"Shelly Super Trail", 0x1525c8, 0x1525e8, indexBreakersSprites_Tia },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_A[] =
{
    { L"Rila A", 0x15b354, 0x15b374, indexBreakersSprites_Rila },
    { L"Rila A Super Trail", 0x15b3f4, 0x15b414, indexBreakersSprites_Rila },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_B[] =
{
    { L"Rila B", 0x15b374, 0x15b394, indexBreakersSprites_Rila },
    { L"Rila B Super Trail", 0x15b414, 0x15b434, indexBreakersSprites_Rila },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_C[] =
{
    { L"Rila C", 0x15b394, 0x15b3b4, indexBreakersSprites_Rila },
    { L"Rila C Super Trail", 0x15b434, 0x15b454, indexBreakersSprites_Rila },
};

const sGame_PaletteDataset BREAKERS_A_RILA_PALETTES_D[] =
{
    { L"Rila D", 0x15b3b4, 0x15b3d4, indexBreakersSprites_Rila },
    { L"Rila D Super Trail", 0x15b454, 0x15b474, indexBreakersSprites_Rila },
};

const sGame_PaletteDataset BREAKERS_A_SANDRA_PALETTES[] =
{
    { L"Sandra", 0x15b3d4, 0x15b3f4, indexBreakersSprites_Rila },
    { L"Sandra Super Trail", 0x15b474, 0x15b494, indexBreakersSprites_Rila },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_A[] =
{
    { L"Alsion A", 0x164206, 0x164226, indexBreakersSprites_AlsionIII },
    { L"Alsion A Super Trail", 0x1642a6, 0x1642c6, indexBreakersSprites_AlsionIII },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_B[] =
{
    { L"Alsion B", 0x164226, 0x164246, indexBreakersSprites_AlsionIII },
    { L"Alsion B Super Trail", 0x1642c6, 0x1642e6, indexBreakersSprites_AlsionIII },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_C[] =
{
    { L"Alsion C", 0x164246, 0x164266, indexBreakersSprites_AlsionIII },
    { L"Alsion C Super Trail", 0x1642e6, 0x164306, indexBreakersSprites_AlsionIII },
};

const sGame_PaletteDataset BREAKERS_A_ALSION_PALETTES_D[] =
{
    { L"Alsion D", 0x164266, 0x164286, indexBreakersSprites_AlsionIII },
    { L"Alsion D Super Trail", 0x164306, 0x164326, indexBreakersSprites_AlsionIII },
};

const sGame_PaletteDataset BREAKERS_A_ATOUM_PALETTES[] =
{
    { L"Atoum", 0x164286, 0x1642a6, indexBreakersSprites_AlsionIII },
    { L"Atoum Super Trail", 0x164326, 0x164346, indexBreakersSprites_AlsionIII },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_A[] =
{
    { L"Pielle A", 0x16d222, 0x16d242, indexBreakersSprites_Pielle },
    { L"Pielle A Super Trail", 0x16d2c2, 0x16d2e2, indexBreakersSprites_Pielle },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_B[] =
{
    { L"Pielle B", 0x16d242, 0x16d262, indexBreakersSprites_Pielle },
    { L"Pielle B Super Trail", 0x16d2e2, 0x16d302, indexBreakersSprites_Pielle },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_C[] =
{
    { L"Pielle C", 0x16d262, 0x16d282, indexBreakersSprites_Pielle },
    { L"Pielle C Super Trail", 0x16d302, 0x16d322, indexBreakersSprites_Pielle },
};

const sGame_PaletteDataset BREAKERS_A_PIELLE_PALETTES_D[] =
{
    { L"Pielle D", 0x16d282, 0x16d2a2, indexBreakersSprites_Pielle },
    { L"Pielle D Super Trail", 0x16d322, 0x16d342, indexBreakersSprites_Pielle },
};

const sGame_PaletteDataset BREAKERS_A_GEORGE_PALETTES[] =
{
    { L"George", 0x16d2a2, 0x16d2c2, indexBreakersSprites_Pielle },
    { L"George Super Trail", 0x16d342, 0x16d362, indexBreakersSprites_Pielle },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_A[] =
{
    { L"Maherl A", 0x177288, 0x1772a8, indexBreakersSprites_Maherl },
    { L"Maherl A Super Trail", 0x177328, 0x177348, indexBreakersSprites_Maherl },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_B[] =
{
    { L"Maherl B", 0x1772a8, 0x1772c8, indexBreakersSprites_Maherl },
    { L"Maherl B Super Trail", 0x177348, 0x177368, indexBreakersSprites_Maherl },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_C[] =
{
    { L"Maherl C", 0x1772c8, 0x1772e8, indexBreakersSprites_Maherl },
    { L"Maherl C Super Trail", 0x177368, 0x177388, indexBreakersSprites_Maherl },
};

const sGame_PaletteDataset BREAKERS_A_MAHERL_PALETTES_D[] =
{
    { L"Maherl D", 0x1772e8, 0x177308, indexBreakersSprites_Maherl },
    { L"Maherl D Super Trail", 0x177388, 0x1773a8, indexBreakersSprites_Maherl },
};

const sGame_PaletteDataset BREAKERS_A_JAVA_PALETTES[] =
{
    { L"Javar", 0x177308, 0x177328, indexBreakersSprites_Maherl },
    { L"Javar Super Trail", 0x1773a8, 0x1773c8, indexBreakersSprites_Maherl },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_A[] =
{
    { L"Saizo A", 0x1897fe, 0x18981e, indexBreakersSprites_Saizo },
    { L"Saizo A Super Trail", 0x18989e, 0x1898be, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_B[] =
{
    { L"Saizo B", 0x18981e, 0x18983e, indexBreakersSprites_Saizo },
    { L"Saizo B Super Trail", 0x1898be, 0x1898de, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_C[] =
{
    { L"Saizo C", 0x18983e, 0x18985e, indexBreakersSprites_Saizo },
    { L"Saizo C Super Trail", 0x1898de, 0x1898fe, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_SAIZO_PALETTES_D[] =
{
    { L"Saizo D", 0x18985e, 0x18987e, indexBreakersSprites_Saizo },
    { L"Saizo D Super Trail", 0x1898fe, 0x18991e, indexBreakersSprites_Saizo },
};

const sGame_PaletteDataset BREAKERS_A_YUKIKAGE_PALETTES[] =
{
    { L"Yukikage", 0x18987e, 0x18989e, indexBreakersSprites_Saizo },
    { L"Yukikage Super Trail", 0x18991e, 0x18993e, indexBreakersSprites_Saizo },
};

const sDescTreeNode BREAKERS_A_SHO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_A, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_B, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_C, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_PALETTES_D, ARRAYSIZE(BREAKERS_A_SHO_PALETTES_D) },
    { L"Jin", DESC_NODETYPE_TREE, (void*)BREAKERS_A_JIN_PALETTES, ARRAYSIZE(BREAKERS_A_JIN_PALETTES) },
};

const sDescTreeNode BREAKERS_A_DAO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_A, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_B, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_C, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_D, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_D) },
    { L"Liu", DESC_NODETYPE_TREE, (void*)BREAKERS_A_LIU_PALETTES, ARRAYSIZE(BREAKERS_A_LIU_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_PALETTES_SHARED, ARRAYSIZE(BREAKERS_A_DAO_PALETTES_SHARED) },
};

const sDescTreeNode BREAKERS_A_CONDOR_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_A, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_B, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_C, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_PALETTES_D, ARRAYSIZE(BREAKERS_A_CONDOR_PALETTES_D) },
    { L"Gigars", DESC_NODETYPE_TREE, (void*)BREAKERS_A_GIGARS_PALETTES, ARRAYSIZE(BREAKERS_A_GIGARS_PALETTES) },
};

const sDescTreeNode BREAKERS_A_TIA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_A, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_B, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_C, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_PALETTES_D, ARRAYSIZE(BREAKERS_A_TIA_PALETTES_D) },
    { L"Shelly", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHELLY_PALETTES, ARRAYSIZE(BREAKERS_A_SHELLY_PALETTES) },
};

const sDescTreeNode BREAKERS_A_RILA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_A, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_B, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_C, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_PALETTES_D, ARRAYSIZE(BREAKERS_A_RILA_PALETTES_D) },
    { L"Sandra", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SANDRA_PALETTES, ARRAYSIZE(BREAKERS_A_SANDRA_PALETTES) },
};

const sDescTreeNode BREAKERS_A_ALSION_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_A, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_B, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_C, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_PALETTES_D, ARRAYSIZE(BREAKERS_A_ALSION_PALETTES_D) },
    { L"Atoum", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ATOUM_PALETTES, ARRAYSIZE(BREAKERS_A_ATOUM_PALETTES) },
};

const sDescTreeNode BREAKERS_A_PIELLE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_A, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_B, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_C, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_PALETTES_D, ARRAYSIZE(BREAKERS_A_PIELLE_PALETTES_D) },
    { L"George", DESC_NODETYPE_TREE, (void*)BREAKERS_A_GEORGE_PALETTES, ARRAYSIZE(BREAKERS_A_GEORGE_PALETTES) },
};

const sDescTreeNode BREAKERS_A_MAHERL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_A, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_B, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_C, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_PALETTES_D, ARRAYSIZE(BREAKERS_A_MAHERL_PALETTES_D) },
    { L"Java", DESC_NODETYPE_TREE, (void*)BREAKERS_A_JAVA_PALETTES, ARRAYSIZE(BREAKERS_A_JAVA_PALETTES) },
};

const sDescTreeNode BREAKERS_A_SAIZO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_A, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_B, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_C, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_PALETTES_D, ARRAYSIZE(BREAKERS_A_SAIZO_PALETTES_D) },
    { L"Yukikage", DESC_NODETYPE_TREE, (void*)BREAKERS_A_YUKIKAGE_PALETTES, ARRAYSIZE(BREAKERS_A_YUKIKAGE_PALETTES) },
};

const sDescTreeNode BREAKERS_A_UNITS[] =
{
    { L"Alsion", DESC_NODETYPE_TREE, (void*)BREAKERS_A_ALSION_COLLECTION, ARRAYSIZE(BREAKERS_A_ALSION_COLLECTION) },
    { L"Condor", DESC_NODETYPE_TREE, (void*)BREAKERS_A_CONDOR_COLLECTION, ARRAYSIZE(BREAKERS_A_CONDOR_COLLECTION) },
    { L"Dao", DESC_NODETYPE_TREE, (void*)BREAKERS_A_DAO_COLLECTION, ARRAYSIZE(BREAKERS_A_DAO_COLLECTION) },
    { L"Maherl", DESC_NODETYPE_TREE, (void*)BREAKERS_A_MAHERL_COLLECTION, ARRAYSIZE(BREAKERS_A_MAHERL_COLLECTION) },
    { L"Pielle", DESC_NODETYPE_TREE, (void*)BREAKERS_A_PIELLE_COLLECTION, ARRAYSIZE(BREAKERS_A_PIELLE_COLLECTION) },
    { L"Rila", DESC_NODETYPE_TREE, (void*)BREAKERS_A_RILA_COLLECTION, ARRAYSIZE(BREAKERS_A_RILA_COLLECTION) },
    { L"Saizo", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SAIZO_COLLECTION, ARRAYSIZE(BREAKERS_A_SAIZO_COLLECTION) },
    { L"Sho", DESC_NODETYPE_TREE, (void*)BREAKERS_A_SHO_COLLECTION, ARRAYSIZE(BREAKERS_A_SHO_COLLECTION) },
    { L"Tia", DESC_NODETYPE_TREE, (void*)BREAKERS_A_TIA_COLLECTION, ARRAYSIZE(BREAKERS_A_TIA_COLLECTION) },
};

constexpr auto BREAKERS_A_NUMUNIT = ARRAYSIZE(BREAKERS_A_UNITS);

#define BREAKERS_A_EXTRALOC BREAKERS_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef BREAKERS_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#pragma once

const sGame_PaletteDataset MMPR_TMEGAZORD_PALETTES_A[] =
{
    { L"Thunder Megazord A", 0x141c24, 0x141c64, indexMMPRSprites_ThunderMegazord },
};

const sGame_PaletteDataset MMPR_TMEGAZORD_PALETTES_B[] =
{
    { L"Thunder Megazord B", 0x141c64, 0x141ca4, indexMMPRSprites_ThunderMegazord },
};

const sDescTreeNode MMPR_TMEGAZORD_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_TMEGAZORD_PALETTES_A, ARRAYSIZE(MMPR_TMEGAZORD_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_TMEGAZORD_PALETTES_B, ARRAYSIZE(MMPR_TMEGAZORD_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_MTIGERZORD_PALETTES_A[] =
{
    { L"Mega Tigerzord A", 0x141ca4, 0x141ce4, indexMMPRSprites_MegaTigerzord },
};

const sGame_PaletteDataset MMPR_MTIGERZORD_PALETTES_B[] =
{
    { L"Mega Tigerzord B", 0x141ce4, 0x141d24, indexMMPRSprites_MegaTigerzord },
};

const sDescTreeNode MMPR_MTIGERZORD_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_MTIGERZORD_PALETTES_A, ARRAYSIZE(MMPR_MTIGERZORD_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_MTIGERZORD_PALETTES_B, ARRAYSIZE(MMPR_MTIGERZORD_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_SMEGAZORD_PALETTES_A[] =
{
    { L"Shogun Megazord A", 0x141d24, 0x141d64, indexMMPRSprites_ShogunMegazord },
};

const sGame_PaletteDataset MMPR_SMEGAZORD_PALETTES_B[] =
{
    { L"Shogun Megazord B", 0x141d64, 0x141da4, indexMMPRSprites_ShogunMegazord },
};

const sDescTreeNode MMPR_SMEGAZORD_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_SMEGAZORD_PALETTES_A, ARRAYSIZE(MMPR_SMEGAZORD_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_SMEGAZORD_PALETTES_B, ARRAYSIZE(MMPR_SMEGAZORD_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_NMEGAZORD_PALETTES_A[] =
{
    { L"Ninja Megazord A", 0x141e24, 0x141e64, indexMMPRSprites_NinjaMegazord },
};

const sGame_PaletteDataset MMPR_NMEGAZORD_PALETTES_B[] =
{
    { L"Ninja Megazord B", 0x141e64, 0x141ea4, indexMMPRSprites_NinjaMegazord },
};

const sDescTreeNode MMPR_NMEGAZORD_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_NMEGAZORD_PALETTES_A, ARRAYSIZE(MMPR_NMEGAZORD_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_NMEGAZORD_PALETTES_B, ARRAYSIZE(MMPR_NMEGAZORD_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_LIPSYNCER_PALETTES_A[] =
{
    { L"Lip Syncer A", 0x141da4, 0x141de4, indexMMPRSprites_LipSyncer },
};

const sGame_PaletteDataset MMPR_LIPSYNCER_PALETTES_B[] =
{
    { L"Lip Syncer B", 0x141de4, 0x141e24, indexMMPRSprites_LipSyncer },
};

const sDescTreeNode MMPR_LIPSYNCER_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_LIPSYNCER_PALETTES_A, ARRAYSIZE(MMPR_LIPSYNCER_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_LIPSYNCER_PALETTES_B, ARRAYSIZE(MMPR_LIPSYNCER_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_GOLDAR_PALETTES_A[] =
{
    { L"Goldar A", 0x141ea4, 0x141ee4, indexMMPRSprites_Goldar },
};

const sGame_PaletteDataset MMPR_GOLDAR_PALETTES_B[] =
{
    { L"Goldar B", 0x141ee4, 0x141f24, indexMMPRSprites_Goldar },
};

const sDescTreeNode MMPR_GOLDAR_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_GOLDAR_PALETTES_A, ARRAYSIZE(MMPR_GOLDAR_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_GOLDAR_PALETTES_B, ARRAYSIZE(MMPR_GOLDAR_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_SILVERHORNS_PALETTES_A[] =
{
    { L"Silver Horns A", 0x141f24, 0x141f64, indexMMPRSprites_SilverHorns },
};

const sGame_PaletteDataset MMPR_SILVERHORNS_PALETTES_B[] =
{
    { L"Silver Horns B", 0x141f64, 0x141fa4, indexMMPRSprites_SilverHorns },
};

const sDescTreeNode MMPR_SILVERHORNS_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_SILVERHORNS_PALETTES_A, ARRAYSIZE(MMPR_SILVERHORNS_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_SILVERHORNS_PALETTES_B, ARRAYSIZE(MMPR_SILVERHORNS_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_LORDZEDD_PALETTES_A[] =
{
    { L"Lord Zedd A", 0x141fa4, 0x141fe4, indexMMPRSprites_LordZedd },
};

const sGame_PaletteDataset MMPR_LORDZEDD_PALETTES_B[] =
{
    { L"Lord Zedd B", 0x141fe4, 0x142024, indexMMPRSprites_LordZedd },
};

const sDescTreeNode MMPR_LORDZEDD_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_LORDZEDD_PALETTES_A, ARRAYSIZE(MMPR_LORDZEDD_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_LORDZEDD_PALETTES_B, ARRAYSIZE(MMPR_LORDZEDD_PALETTES_B) },
};

const sGame_PaletteDataset MMPR_IVANOOZE_PALETTES_A[] =
{
    { L"Ivan Ooze A", 0x141b24, 0x141b64, indexMMPRSprites_IvanOoze },
};

const sGame_PaletteDataset MMPR_IVANOOZE_PALETTES_B[] =
{
    { L"Ivan Ooze B", 0x141b64, 0x141ba4, indexMMPRSprites_IvanOoze },
};

const sDescTreeNode MMPR_IVANOOZE_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)MMPR_IVANOOZE_PALETTES_A, ARRAYSIZE(MMPR_IVANOOZE_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)MMPR_IVANOOZE_PALETTES_B, ARRAYSIZE(MMPR_IVANOOZE_PALETTES_B) },
};

const sDescTreeNode MMPR_SNES_UNITS[] =
{
    { L"Thunder Megazord",  DESC_NODETYPE_TREE, (void*)MMPR_TMEGAZORD_COLLECTION,   ARRAYSIZE(MMPR_TMEGAZORD_COLLECTION) },
    { L"Mega Tigerzord",    DESC_NODETYPE_TREE, (void*)MMPR_MTIGERZORD_COLLECTION,  ARRAYSIZE(MMPR_MTIGERZORD_COLLECTION) },
    { L"Shogun Megazord",   DESC_NODETYPE_TREE, (void*)MMPR_SMEGAZORD_COLLECTION,   ARRAYSIZE(MMPR_SMEGAZORD_COLLECTION) },
    { L"Ninja Megazord",    DESC_NODETYPE_TREE, (void*)MMPR_NMEGAZORD_COLLECTION,   ARRAYSIZE(MMPR_NMEGAZORD_COLLECTION) },
    { L"Lip Syncer",        DESC_NODETYPE_TREE, (void*)MMPR_LIPSYNCER_COLLECTION,   ARRAYSIZE(MMPR_LIPSYNCER_COLLECTION) },
    { L"Goldar",            DESC_NODETYPE_TREE, (void*)MMPR_GOLDAR_COLLECTION,      ARRAYSIZE(MMPR_GOLDAR_COLLECTION) },
    { L"Silver Horns",      DESC_NODETYPE_TREE, (void*)MMPR_SILVERHORNS_COLLECTION, ARRAYSIZE(MMPR_SILVERHORNS_COLLECTION) },
    { L"Lord Zedd",         DESC_NODETYPE_TREE, (void*)MMPR_LORDZEDD_COLLECTION,    ARRAYSIZE(MMPR_LORDZEDD_COLLECTION) },
    { L"Ivan Ooze",         DESC_NODETYPE_TREE, (void*)MMPR_IVANOOZE_COLLECTION,    ARRAYSIZE(MMPR_IVANOOZE_COLLECTION) },
};

constexpr auto MMPR_SNES_NUMUNIT = ARRAYSIZE(MMPR_SNES_UNITS);

#define MMPR_SNES_EXTRALOC MMPR_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MMPR_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

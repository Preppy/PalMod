#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MVC2_A_BLACKHEART_PALETTES. 
// * Update every array using MVC2_A_NUMUNIT below
// That should be it.  Good luck.


enum SupportedMVC2_A_PaletteListIndex
{
    indexMVC2ABlackheart,
    indexMVC2ACable,
    indexMVC2ASentinel,
    indexMVC2ALast
};

constexpr auto MVC2_A_NUMUNIT = indexMVC2ALast;

#define MVC2_A_EXTRALOC MVC2_A_NUMUNIT

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_LP[] =
{
    { "Cable LP", 0x3c2d5a2, 0x3c2d5c2, indexCPS2_Cable, 0 },
    { "01 LP (Extra - 01)", 0x3c2d5c2, 0x3c2d5e2, indexCPS2_Cable, 1 },
    { "02 LP (Extra - 02)", 0x3c2d5e2, 0x3c2d602, indexCPS2_Cable, 2 },
    { "03 LP (Extra - 03)", 0x3c2d602, 0x3c2d622, indexCPS2_Cable, 3 },
    { "04 LP (Extra - 04)", 0x3c2d622, 0x3c2d642, indexCPS2_Cable, 4 },
    { "05 LP (Extra - 05)", 0x3c2d642, 0x3c2d662, indexCPS2_Cable, 5 },
    { "06 LP (Extra - 06)", 0x3c2d662, 0x3c2d682, indexCPS2_Cable, 6 },
    { "07 LP (Extra - 07)", 0x3c2d682, 0x3c2d6a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_LK[] =
{
    { "Cable LK", 0x3c2d6a2, 0x3c2d6c2, indexCPS2_Cable, 0 },
    { "01 LK (Extra - 09)", 0x3c2d6c2, 0x3c2d6e2, indexCPS2_Cable, 1 },
    { "02 LK (Extra - 0a)", 0x3c2d6e2, 0x3c2d702, indexCPS2_Cable, 2 },
    { "03 LK (Extra - 0b)", 0x3c2d702, 0x3c2d722, indexCPS2_Cable, 3 },
    { "04 LK (Extra - 0c)", 0x3c2d722, 0x3c2d742, indexCPS2_Cable, 4 },
    { "05 LK (Extra - 0d)", 0x3c2d742, 0x3c2d762, indexCPS2_Cable, 5 },
    { "06 LK (Extra - 0e)", 0x3c2d762, 0x3c2d782, indexCPS2_Cable, 6 },
    { "07 LK (Extra - 0f)", 0x3c2d782, 0x3c2d7a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_HP[] =
{
    { "Cable HP", 0x3c2d7a2, 0x3c2d7c2, indexCPS2_Cable, 0 },
    { "01 HP (Extra - 11)", 0x3c2d7c2, 0x3c2d7e2, indexCPS2_Cable, 1 },
    { "02 HP (Extra - 12)", 0x3c2d7e2, 0x3c2d802, indexCPS2_Cable, 2 },
    { "03 HP (Extra - 13)", 0x3c2d802, 0x3c2d822, indexCPS2_Cable, 3 },
    { "04 HP (Extra - 14)", 0x3c2d822, 0x3c2d842, indexCPS2_Cable, 4 },
    { "05 HP (Extra - 15)", 0x3c2d842, 0x3c2d862, indexCPS2_Cable, 5 },
    { "06 HP (Extra - 16)", 0x3c2d862, 0x3c2d882, indexCPS2_Cable, 6 },
    { "07 HP (Extra - 17)", 0x3c2d882, 0x3c2d8a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_HK[] =
{
    { "Cable HK", 0x3c2d8a2, 0x3c2d8c2, indexCPS2_Cable, 0 },
    { "01 HK (Extra - 19)", 0x3c2d8c2, 0x3c2d8e2, indexCPS2_Cable, 1 },
    { "02 HK (Extra - 1a)", 0x3c2d8e2, 0x3c2d902, indexCPS2_Cable, 2 },
    { "03 HK (Extra - 1b)", 0x3c2d902, 0x3c2d922, indexCPS2_Cable, 3 },
    { "04 HK (Extra - 1c)", 0x3c2d922, 0x3c2d942, indexCPS2_Cable, 4 },
    { "05 HK (Extra - 1d)", 0x3c2d942, 0x3c2d962, indexCPS2_Cable, 5 },
    { "06 HK (Extra - 1e)", 0x3c2d962, 0x3c2d982, indexCPS2_Cable, 6 },
    { "07 HK (Extra - 1f)", 0x3c2d982, 0x3c2d9a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_A1[] =
{
    { "Cable A1", 0x3c2d9a2, 0x3c2d9c2, indexCPS2_Cable, 0 },
    { "01 A1 (Extra - 21)", 0x3c2d9c2, 0x3c2d9e2, indexCPS2_Cable, 1 },
    { "02 A1 (Extra - 22)", 0x3c2d9e2, 0x3c2da02, indexCPS2_Cable, 2 },
    { "03 A1 (Extra - 23)", 0x3c2da02, 0x3c2da22, indexCPS2_Cable, 3 },
    { "04 A1 (Extra - 24)", 0x3c2da22, 0x3c2da42, indexCPS2_Cable, 4 },
    { "05 A1 (Extra - 25)", 0x3c2da42, 0x3c2da62, indexCPS2_Cable, 5 },
    { "06 A1 (Extra - 26)", 0x3c2da62, 0x3c2da82, indexCPS2_Cable, 6 },
    { "07 A1 (Extra - 27)", 0x3c2da82, 0x3c2daa2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_A2[] =
{
    { "Cable A2", 0x3c2daa2, 0x3c2dac2, indexCPS2_Cable, 0 },
    { "01 A2 (Extra - 29)", 0x3c2dac2, 0x3c2dae2, indexCPS2_Cable, 1 },
    { "02 A2 (Extra - 2a)", 0x3c2dae2, 0x3c2db02, indexCPS2_Cable, 2 },
    { "03 A2 (Extra - 2b)", 0x3c2db02, 0x3c2db22, indexCPS2_Cable, 3 },
    { "04 A2 (Extra - 2c)", 0x3c2db22, 0x3c2db42, indexCPS2_Cable, 4 },
    { "05 A2 (Extra - 2d)", 0x3c2db42, 0x3c2db62, indexCPS2_Cable, 5 },
    { "06 A2 (Extra - 2e)", 0x3c2db62, 0x3c2db82, indexCPS2_Cable, 6 },
    { "07 A2 (Extra - 2f)", 0x3c2db82, 0x3c2dba2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_SHARED[] =
{
    { "Status Effect 0", 0x3c2dba2, 0x3c2dbc2, indexCPS2_Cable, 0 },
    { "Status Effect 1", 0x3c2dbc2, 0x3c2dbe2, indexCPS2_Cable, 0 },
    { "Status Effect 2", 0x3c2dbe2, 0x3c2dc02, indexCPS2_Cable, 0 },
    { "Status Effect 3", 0x3c2dc02, 0x3c2dc22, indexCPS2_Cable, 0 },
    { "Status Effect 4", 0x3c2dc22, 0x3c2dc42, indexCPS2_Cable, 0 },
    { "Status Effect 5", 0x3c2dc42, 0x3c2dc62, indexCPS2_Cable, 0 },
    { "Status Effect 6", 0x3c2dc62, 0x3c2dc82, indexCPS2_Cable, 0 },
    { "Status Effect 7", 0x3c2dc82, 0x3c2dca2, indexCPS2_Cable, 0 },
};

const sDescTreeNode MVC2_A_CABLE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_LP, ARRAYSIZE(MVC2_A_CABLE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_LK, ARRAYSIZE(MVC2_A_CABLE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_HP, ARRAYSIZE(MVC2_A_CABLE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_HK, ARRAYSIZE(MVC2_A_CABLE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_A1, ARRAYSIZE(MVC2_A_CABLE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_A2, ARRAYSIZE(MVC2_A_CABLE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CABLE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_LP[] =
{
    { "Sentinel LP", 0x545e422, 0x545e442, indexCPS2_Sentinel, 0 },
    { "01 LP (Extra - 01)", 0x545e442, 0x545e462, indexCPS2_Sentinel, 1 },
    { "02 LP (Extra - 02)", 0x545e462, 0x545e482, indexCPS2_Sentinel, 2 },
    { "03 LP (Extra - 03)", 0x545e482, 0x545e4a2, indexCPS2_Sentinel, 3 },
    { "04 LP (Extra - 04)", 0x545e4a2, 0x545e4c2, indexCPS2_Sentinel, 4 },
    { "05 LP (Extra - 05)", 0x545e4c2, 0x545e4e2, indexCPS2_Sentinel, 5 },
    { "06 LP (Extra - 06)", 0x545e4e2, 0x545e502, indexCPS2_Sentinel, 6 },
    { "07 LP (Extra - 07)", 0x545e502, 0x545e522, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_LK[] =
{
    { "Sentinel LK", 0x545e522, 0x545e542, indexCPS2_Sentinel, 0 },
    { "01 LK (Extra - 09)", 0x545e542, 0x545e562, indexCPS2_Sentinel, 1 },
    { "02 LK (Extra - 0a)", 0x545e562, 0x545e582, indexCPS2_Sentinel, 2 },
    { "03 LK (Extra - 0b)", 0x545e582, 0x545e5a2, indexCPS2_Sentinel, 3 },
    { "04 LK (Extra - 0c)", 0x545e5a2, 0x545e5c2, indexCPS2_Sentinel, 4 },
    { "05 LK (Extra - 0d)", 0x545e5c2, 0x545e5e2, indexCPS2_Sentinel, 5 },
    { "06 LK (Extra - 0e)", 0x545e5e2, 0x545e602, indexCPS2_Sentinel, 6 },
    { "07 LK (Extra - 0f)", 0x545e602, 0x545e622, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_HP[] =
{
    { "Sentinel HP", 0x545e622, 0x545e642, indexCPS2_Sentinel, 0 },
    { "01 HP (Extra - 11)", 0x545e642, 0x545e662, indexCPS2_Sentinel, 1 },
    { "02 HP (Extra - 12)", 0x545e662, 0x545e682, indexCPS2_Sentinel, 2 },
    { "03 HP (Extra - 13)", 0x545e682, 0x545e6a2, indexCPS2_Sentinel, 3 },
    { "04 HP (Extra - 14)", 0x545e6a2, 0x545e6c2, indexCPS2_Sentinel, 4 },
    { "05 HP (Extra - 15)", 0x545e6c2, 0x545e6e2, indexCPS2_Sentinel, 5 },
    { "06 HP (Extra - 16)", 0x545e6e2, 0x545e702, indexCPS2_Sentinel, 6 },
    { "07 HP (Extra - 17)", 0x545e702, 0x545e722, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_HK[] =
{
    { "Sentinel HK", 0x545e722, 0x545e742, indexCPS2_Sentinel, 0 },
    { "01 HK (Extra - 19)", 0x545e742, 0x545e762, indexCPS2_Sentinel, 1 },
    { "02 HK (Extra - 1a)", 0x545e762, 0x545e782, indexCPS2_Sentinel, 2 },
    { "03 HK (Extra - 1b)", 0x545e782, 0x545e7a2, indexCPS2_Sentinel, 3 },
    { "04 HK (Extra - 1c)", 0x545e7a2, 0x545e7c2, indexCPS2_Sentinel, 4 },
    { "05 HK (Extra - 1d)", 0x545e7c2, 0x545e7e2, indexCPS2_Sentinel, 5 },
    { "06 HK (Extra - 1e)", 0x545e7e2, 0x545e802, indexCPS2_Sentinel, 6 },
    { "07 HK (Extra - 1f)", 0x545e802, 0x545e822, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_A1[] =
{
    { "Sentinel A1", 0x545e822, 0x545e842, indexCPS2_Sentinel, 0 },
    { "01 A1 (Extra - 21)", 0x545e842, 0x545e862, indexCPS2_Sentinel, 1 },
    { "02 A1 (Extra - 22)", 0x545e862, 0x545e882, indexCPS2_Sentinel, 2 },
    { "03 A1 (Extra - 23)", 0x545e882, 0x545e8a2, indexCPS2_Sentinel, 3 },
    { "04 A1 (Extra - 24)", 0x545e8a2, 0x545e8c2, indexCPS2_Sentinel, 4 },
    { "05 A1 (Extra - 25)", 0x545e8c2, 0x545e8e2, indexCPS2_Sentinel, 5 },
    { "06 A1 (Extra - 26)", 0x545e8e2, 0x545e902, indexCPS2_Sentinel, 6 },
    { "07 A1 (Extra - 27)", 0x545e902, 0x545e922, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_A2[] =
{
    { "Sentinel A2", 0x545e922, 0x545e942, indexCPS2_Sentinel, 0 },
    { "01 A2 (Extra - 29)", 0x545e942, 0x545e962, indexCPS2_Sentinel, 1 },
    { "02 A2 (Extra - 2a)", 0x545e962, 0x545e982, indexCPS2_Sentinel, 2 },
    { "03 A2 (Extra - 2b)", 0x545e982, 0x545e9a2, indexCPS2_Sentinel, 3 },
    { "04 A2 (Extra - 2c)", 0x545e9a2, 0x545e9c2, indexCPS2_Sentinel, 4 },
    { "05 A2 (Extra - 2d)", 0x545e9c2, 0x545e9e2, indexCPS2_Sentinel, 5 },
    { "06 A2 (Extra - 2e)", 0x545e9e2, 0x545ea02, indexCPS2_Sentinel, 6 },
    { "07 A2 (Extra - 2f)", 0x545ea02, 0x545ea22, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_SHARED[] =
{
    { "Status Effect 0 1", 0x545ea22, 0x545ea42, indexCPS2_Sentinel, 0 },
    { "Status Effect 0 2", 0x545ea42, 0x545ea62, indexCPS2_Sentinel, 1 },
    { "Status Effect 1 1", 0x545ea62, 0x545ea82, indexCPS2_Sentinel, 0 },
    { "Status Effect 1 2", 0x545ea82, 0x545eaa2, indexCPS2_Sentinel, 1 },
    { "Status Effect 2 1", 0x545eaa2, 0x545eac2, indexCPS2_Sentinel, 0 },
    { "Status Effect 2 2", 0x545eac2, 0x545eae2, indexCPS2_Sentinel, 1 },
    { "Status Effect 3 1", 0x545eae2, 0x545eb02, indexCPS2_Sentinel, 0 },
    { "Status Effect 3 2", 0x545eb02, 0x545eb22, indexCPS2_Sentinel, 1 },
    { "Status Effect 4 1", 0x545eb22, 0x545eb42, indexCPS2_Sentinel, 0 },
    { "Status Effect 4 2", 0x545eb42, 0x545eb62, indexCPS2_Sentinel, 1 },
    { "Status Effect 5 1", 0x545eb62, 0x545eb82, indexCPS2_Sentinel, 0 },
    { "Status Effect 5 2", 0x545eb82, 0x545eba2, indexCPS2_Sentinel, 1 },
    { "Status Effect 6 1", 0x545eba2, 0x545ebc2, indexCPS2_Sentinel, 0 },
    { "Status Effect 6 2", 0x545ebc2, 0x545ebe2, indexCPS2_Sentinel, 1 },
    { "Status Effect 7 1", 0x545ebe2, 0x545ec02, indexCPS2_Sentinel, 0 },
    { "Status Effect 7 2", 0x545ec02, 0x545ec22, indexCPS2_Sentinel, 1 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_EXTRAS[] =
{
    { "Extra 0x12", 0x545ec42, 0x545ec62 },
    { "Extra 0x13", 0x545ec62, 0x545ec82 },
};

const sDescTreeNode MVC2_A_SENTINEL_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_LP, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_LK, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_HP, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_HK, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_A1, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_A2, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_A2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_EXTRAS) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_LP[] =
{
    { "Blackheart LP", 0x5585402, 0x5585422, indexCPS2_Blackheart, 0 },
    { "01 LP (Extra - 01)", 0x5585422, 0x5585442, indexCPS2_Blackheart, 1 },
    { "02 LP (Extra - 02)", 0x5585442, 0x5585462, indexCPS2_Blackheart, 2 },
    { "03 LP (Extra - 03)", 0x5585462, 0x5585482, indexCPS2_Blackheart, 3 },
    { "04 LP (Extra - 04)", 0x5585482, 0x55854a2, indexCPS2_Blackheart, 4 },
    { "05 LP (Extra - 05)", 0x55854a2, 0x55854c2, indexCPS2_Blackheart, 5 },
    { "06 LP (Extra - 06)", 0x55854c2, 0x55854e2, indexCPS2_Blackheart, 6 },
    { "07 LP (Extra - 07)", 0x55854e2, 0x5585502, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_LK[] =
{
    { "Blackheart LK", 0x5585502, 0x5585522, indexCPS2_Blackheart, 0 },
    { "01 LK (Extra - 09)", 0x5585522, 0x5585542, indexCPS2_Blackheart, 1 },
    { "02 LK (Extra - 0a)", 0x5585542, 0x5585562, indexCPS2_Blackheart, 2 },
    { "03 LK (Extra - 0b)", 0x5585562, 0x5585582, indexCPS2_Blackheart, 3 },
    { "04 LK (Extra - 0c)", 0x5585582, 0x55855a2, indexCPS2_Blackheart, 4 },
    { "05 LK (Extra - 0d)", 0x55855a2, 0x55855c2, indexCPS2_Blackheart, 5 },
    { "06 LK (Extra - 0e)", 0x55855c2, 0x55855e2, indexCPS2_Blackheart, 6 },
    { "07 LK (Extra - 0f)", 0x55855e2, 0x5585602, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_HP[] =
{
    { "Blackheart HP", 0x5585602, 0x5585622, indexCPS2_Blackheart, 0 },
    { "01 HP (Extra - 11)", 0x5585622, 0x5585642, indexCPS2_Blackheart, 1 },
    { "02 HP (Extra - 12)", 0x5585642, 0x5585662, indexCPS2_Blackheart, 2 },
    { "03 HP (Extra - 13)", 0x5585662, 0x5585682, indexCPS2_Blackheart, 3 },
    { "04 HP (Extra - 14)", 0x5585682, 0x55856a2, indexCPS2_Blackheart, 4 },
    { "05 HP (Extra - 15)", 0x55856a2, 0x55856c2, indexCPS2_Blackheart, 5 },
    { "06 HP (Extra - 16)", 0x55856c2, 0x55856e2, indexCPS2_Blackheart, 6 },
    { "07 HP (Extra - 17)", 0x55856e2, 0x5585702, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_HK[] =
{
    { "Blackheart HK", 0x5585702, 0x5585722, indexCPS2_Blackheart, 0 },
    { "01 HK (Extra - 19)", 0x5585722, 0x5585742, indexCPS2_Blackheart, 1 },
    { "02 HK (Extra - 1a)", 0x5585742, 0x5585762, indexCPS2_Blackheart, 2 },
    { "03 HK (Extra - 1b)", 0x5585762, 0x5585782, indexCPS2_Blackheart, 3 },
    { "04 HK (Extra - 1c)", 0x5585782, 0x55857a2, indexCPS2_Blackheart, 4 },
    { "05 HK (Extra - 1d)", 0x55857a2, 0x55857c2, indexCPS2_Blackheart, 5 },
    { "06 HK (Extra - 1e)", 0x55857c2, 0x55857e2, indexCPS2_Blackheart, 6 },
    { "07 HK (Extra - 1f)", 0x55857e2, 0x5585802, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_A1[] =
{
    { "Blackheart A1", 0x5585802, 0x5585822, indexCPS2_Blackheart, 0 },
    { "01 A1 (Extra - 21)", 0x5585822, 0x5585842, indexCPS2_Blackheart, 1 },
    { "02 A1 (Extra - 22)", 0x5585842, 0x5585862, indexCPS2_Blackheart, 2 },
    { "03 A1 (Extra - 23)", 0x5585862, 0x5585882, indexCPS2_Blackheart, 3 },
    { "04 A1 (Extra - 24)", 0x5585882, 0x55858a2, indexCPS2_Blackheart, 4 },
    { "05 A1 (Extra - 25)", 0x55858a2, 0x55858c2, indexCPS2_Blackheart, 5 },
    { "06 A1 (Extra - 26)", 0x55858c2, 0x55858e2, indexCPS2_Blackheart, 6 },
    { "07 A1 (Extra - 27)", 0x55858e2, 0x5585902, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_A2[] =
{
    { "Blackheart A2", 0x5585902, 0x5585922, indexCPS2_Blackheart, 0 },
    { "01 A2 (Extra - 29)", 0x5585922, 0x5585942, indexCPS2_Blackheart, 1 },
    { "02 A2 (Extra - 2a)", 0x5585942, 0x5585962, indexCPS2_Blackheart, 2 },
    { "03 A2 (Extra - 2b)", 0x5585962, 0x5585982, indexCPS2_Blackheart, 3 },
    { "04 A2 (Extra - 2c)", 0x5585982, 0x55859a2, indexCPS2_Blackheart, 4 },
    { "05 A2 (Extra - 2d)", 0x55859a2, 0x55859c2, indexCPS2_Blackheart, 5 },
    { "06 A2 (Extra - 2e)", 0x55859c2, 0x55859e2, indexCPS2_Blackheart, 6 },
    { "07 A2 (Extra - 2f)", 0x55859e2, 0x5585a02, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_SHARED[] =
{
    { "Status Effect 0", 0x5585a02, 0x5585a22, indexCPS2_Blackheart, 0 },
    { "Status Effect 1", 0x5585a22, 0x5585a42, indexCPS2_Blackheart, 0 },
    { "Status Effect 2", 0x5585a42, 0x5585a62, indexCPS2_Blackheart, 0 },
    { "Status Effect 3", 0x5585a62, 0x5585a82, indexCPS2_Blackheart, 0 },
    { "Status Effect 4", 0x5585a82, 0x5585aa2, indexCPS2_Blackheart, 0 },
    { "Status Effect 5", 0x5585aa2, 0x5585ac2, indexCPS2_Blackheart, 0 },
    { "Status Effect 6", 0x5585ac2, 0x5585ae2, indexCPS2_Blackheart, 0 },
    { "Status Effect 7", 0x5585ae2, 0x5585b02, indexCPS2_Blackheart, 0 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_EXTRAS[] =
{
    { "Extra 0x9", 0x5585b02, 0x5585b22 },
    { "Extra 0xa", 0x5585b22, 0x5585b42 },
    { "Extra 0xb", 0x5585b42, 0x5585b62 },
    { "Extra 0xc", 0x5585b62, 0x5585b82 },
    { "Extra 0xd", 0x5585b82, 0x5585ba2, indexCPS2_Blackheart, 2 },
    { "Extra 0xe", 0x5585ba2, 0x5585bc2, indexCPS2_Blackheart, 1 },
    { "Extra 0xf", 0x5585bc2, 0x5585be2 },
    { "Extra 0x10", 0x5585be2, 0x5585c02, indexCPS2_Blackheart, 8 },
    //unused{ "Extra 0x11", 0x5585c02, 0x5585c22, indexCPS2_Blackheart, 0 },
    { "Extra 0x12", 0x5585c22, 0x5585c42 },
    { "Extra 0x13", 0x5585c42, 0x5585c62, indexCPS2_Blackheart, 11 },
    { "Extra 0x14", 0x5585c62, 0x5585c82, indexCPS2_Blackheart, 12 },
    //{ "Extra 0x15", 0x5585c82, 0x5585ca2, indexCPS2_Blackheart, 0 },
    //{ "Extra 0x16", 0x5585ca2, 0x5585cc2, indexCPS2_Blackheart, 0 },
    //{ "Extra 0x17", 0x5585cc2, 0x5585ce2, indexCPS2_Blackheart, 0 },
    //{ "Extra 0x18", 0x5585ce2, 0x5585d02, indexCPS2_Blackheart, 0 },
    { "Extra 0x19", 0x5585d02, 0x5585d22, indexCPS2_Blackheart, 2 },
    { "Extra 0x1a", 0x5585d22, 0x5585d42 },
    { "Extra 0x1b", 0x5585d42, 0x5585d62 },
};

const sDescTreeNode MVC2_A_BLACKHEART_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_LP, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_LK, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_HP, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_HK, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_A1, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_A2, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_A2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_EXTRAS) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_SHARED, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_SHARED) },
};

const UINT8 MVC2_A_UNITSORT[MVC2_A_NUMUNIT + 1] = // Plus 1 for the extra palettes
{
    indexMVC2ABlackheart,
    indexMVC2ACable,
    indexMVC2ASentinel,

    MVC2_A_EXTRALOC // Extra palettes
};

const sDescTreeNode MVC2_A_UNITS[MVC2_A_NUMUNIT] =
{
    { "Blackheart",                   DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_COLLECTION,       ARRAYSIZE(MVC2_A_BLACKHEART_COLLECTION) },
    { "Cable",                        DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_COLLECTION,       ARRAYSIZE(MVC2_A_CABLE_COLLECTION) },
    { "Sentinel",                     DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_COLLECTION,       ARRAYSIZE(MVC2_A_SENTINEL_COLLECTION) },
};

// We extend this array with data groveled from the MVC2e.txt extensible extras file, if any.
const stExtraDef MVC2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

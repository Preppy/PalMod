#pragma once

const std::vector<uint16_t> MK1_A_IMGIDS_USED =
{
};

const sGame_PaletteDataset MK1_A_JOHNNYCAGE_PALETTES_P1[] =
{
    { L"Johnny Cage P1", 0xd3362, 0xd33e2 },
};

const sGame_PaletteDataset MK1_A_JOHNNYCAGE_PALETTES_P2[] =
{
    { L"Johnny Cage P2", 0x90850, 0x908d0 },
};

const sGame_PaletteDataset MK1_A_JOHNNYCAGE_PALETTES_SHARED[] =
{
    { L"Frozen Johnny Cage", 0x9ac54, 0x9acd4 },
    { L"Johnny Cage Forceball", 0xd33e4, 0xd3464 },
};

const sGame_PaletteDataset MK1_A_KANO_PALETTES_P1[] =
{
    { L"Kano P1", 0xd3466, 0xd34e6 },
};

const sGame_PaletteDataset MK1_A_KANO_PALETTES_P2[] =
{
    { L"Kano P2", 0x908d2, 0x90952 },
};

const sGame_PaletteDataset MK1_A_KANO_PALETTES_SHARED[] =
{
    { L"Frozen Kano", 0x9ad58, 0x9add8 },
    { L"Kano Blue Knives", 0xd34e8, 0xd3568 },
};

const sGame_PaletteDataset MK1_A_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0xd37f4, 0xd3874 },
};

const sGame_PaletteDataset MK1_A_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0x90ada, 0x90b5a },
};

const sGame_PaletteDataset MK1_A_SUBZERO_PALETTES_SHARED[] =
{
    { L"Frozen Sub-Zero", 0x9aede, 0x9af5e },
    { L"Sub-Zero Ice Ball", 0xd3876, 0xd38f6 },
};

const sGame_PaletteDataset MK1_A_SONYA_PALETTES_P1[] =
{
    { L"Sonya P1", 0xd3e0c, 0xd3e8c },
};

const sGame_PaletteDataset MK1_A_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0x90b5c, 0x90bdc },
};

const sGame_PaletteDataset MK1_A_SONYA_PALETTES_SHARED[] =
{
    { L"Frozen Sonya", 0x9af60, 0x9afe0 },
    { L"Sonya Ring Toss", 0xd3e8e, 0xd3f0e },
};

const sGame_PaletteDataset MK1_A_RAIDEN_PALETTES_P1[] =
{
    { L"Raiden P1", 0xd356a, 0xd35ea },
};

const sGame_PaletteDataset MK1_A_RAIDEN_PALETTES_P2[] =
{
    { L"Raiden P2", 0x90954, 0x909d4 },
};

const sGame_PaletteDataset MK1_A_RAIDEN_PALETTES_SHARED[] =
{
    { L"Frozen Raiden", 0x9adda, 0x9ae5a },
};

const sGame_PaletteDataset MK1_A_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0xd366e, 0xd36ee },
};

const sGame_PaletteDataset MK1_A_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0x909d6, 0x90a56 },
};

const sGame_PaletteDataset MK1_A_LIUKANG_PALETTES_SHARED[] =
{
    { L"Frozen Liu Kang", 0x9acd6, 0x9ad56 },
    { L"Liu Kang Fireball", 0xd36f0, 0xd3770 },
};

const sGame_PaletteDataset MK1_A_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0xd3772, 0xd37f2 },
};

const sGame_PaletteDataset MK1_A_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x90a58, 0x90ad8 },
};

const sGame_PaletteDataset MK1_A_SCORPION_PALETTES_SHARED[] =
{
    { L"Frozen Scorpion", 0x9ae5c, 0x9aedc },
};

const sGame_PaletteDataset MK1_A_GORO_PALETTES[] =
{
    { L"Goro", 0xd397a, 0xd39fa },
    { L"Frozen Goro", 0x9afe2, 0x9b062 },
};

const sGame_PaletteDataset MK1_A_SHANGTSUNG_PALETTES[] =
{
    { L"Shang Tsung", 0xd3ff8, 0xd4078 },
    { L"Frozen Shang Tsung", 0x9b064, 0x9b0e4 },
};

const sGame_PaletteDataset MK1_A_REPTILE_PALETTES[] =
{
    { L"Reptile", 0x907ce, 0x9084e },
};

const sDescTreeNode MK1_A_JOHNNYCAGE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_PALETTES_P1, ARRAYSIZE(MK1_A_JOHNNYCAGE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_PALETTES_P2, ARRAYSIZE(MK1_A_JOHNNYCAGE_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_PALETTES_SHARED, ARRAYSIZE(MK1_A_JOHNNYCAGE_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_KANO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_PALETTES_P1, ARRAYSIZE(MK1_A_KANO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_PALETTES_P2, ARRAYSIZE(MK1_A_KANO_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_PALETTES_SHARED, ARRAYSIZE(MK1_A_KANO_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_PALETTES_P1, ARRAYSIZE(MK1_A_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_PALETTES_P2, ARRAYSIZE(MK1_A_SUBZERO_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_PALETTES_SHARED, ARRAYSIZE(MK1_A_SUBZERO_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_SONYA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_PALETTES_P1, ARRAYSIZE(MK1_A_SONYA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_PALETTES_P2, ARRAYSIZE(MK1_A_SONYA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_PALETTES_SHARED, ARRAYSIZE(MK1_A_SONYA_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_PALETTES_P1, ARRAYSIZE(MK1_A_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_PALETTES_P2, ARRAYSIZE(MK1_A_LIUKANG_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_PALETTES_SHARED, ARRAYSIZE(MK1_A_LIUKANG_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_PALETTES_P1, ARRAYSIZE(MK1_A_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_PALETTES_P2, ARRAYSIZE(MK1_A_SCORPION_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_PALETTES_SHARED, ARRAYSIZE(MK1_A_SCORPION_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_RAIDEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_PALETTES_P1, ARRAYSIZE(MK1_A_RAIDEN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_PALETTES_P2, ARRAYSIZE(MK1_A_RAIDEN_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_PALETTES_SHARED, ARRAYSIZE(MK1_A_RAIDEN_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_GORO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_A_GORO_PALETTES, ARRAYSIZE(MK1_A_GORO_PALETTES) },
};

const sDescTreeNode MK1_A_SHANGTSUNG_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_A_SHANGTSUNG_PALETTES, ARRAYSIZE(MK1_A_SHANGTSUNG_PALETTES) },
};

const sDescTreeNode MK1_A_REPTILE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_A_REPTILE_PALETTES, ARRAYSIZE(MK1_A_REPTILE_PALETTES) },
};

const sDescTreeNode MK1_A_UNITS[] =
{
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_COLLECTION, ARRAYSIZE(MK1_A_JOHNNYCAGE_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_COLLECTION, ARRAYSIZE(MK1_A_KANO_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_COLLECTION, ARRAYSIZE(MK1_A_SUBZERO_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_COLLECTION, ARRAYSIZE(MK1_A_SONYA_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_COLLECTION, ARRAYSIZE(MK1_A_RAIDEN_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_COLLECTION, ARRAYSIZE(MK1_A_LIUKANG_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_COLLECTION, ARRAYSIZE(MK1_A_SCORPION_COLLECTION) },
    { L"Goro", DESC_NODETYPE_TREE, (void*)MK1_A_GORO_COLLECTION, ARRAYSIZE(MK1_A_GORO_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK1_A_SHANGTSUNG_COLLECTION, ARRAYSIZE(MK1_A_SHANGTSUNG_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK1_A_REPTILE_COLLECTION, ARRAYSIZE(MK1_A_REPTILE_COLLECTION) },
};

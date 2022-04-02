#pragma once

// transparency color is the last color on cps2 graphics
// the first 2 bytes of a palette on ST is how many palette lines it has

const std::vector<UINT16> HSF2_A_IMGIDS_USED =
{
    indexSF2Sprites_Ryu,
    indexSF2Sprites_EHonda,
    indexSF2Sprites_Blanka,
    indexSF2Sprites_Guile,
    indexSF2Sprites_Ken,
    indexSF2Sprites_ChunLi,
    indexSF2Sprites_Zangief,
    indexSF2Sprites_Dhalsim,
    indexSF2Sprites_Bison,
    indexSF2Sprites_Sagat,
    indexSF2Sprites_Balrog,
    indexSF2Sprites_Vega,
    indexSF2Sprites_Cammy,
    indexSF2Sprites_THawk,
    indexSF2Sprites_FeiLong,
    indexSF2Sprites_DeeJay,
    indexSF2Sprites_Gouki,
    indexSF2Sprites_Bonus,
    indexSF2Sprites_Stages,
};

const sGame_PaletteDataset HSF2_A_RYU_PALETTES_JAB[] =
{
    { L"Ryu ST Jab", 0x43f9e, 0x83FBE, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Jab Super Trail 1", 0x43fde, 0x43ffe, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Jab Super Trail 2", 0x43ffe, 0x4401E, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Jab Super Trail 3", 0x4401e, 0x4403E, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Strong", 0x44040, 0x44060, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Strong Super Trail 1", 0x44080, 0x440A0, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Strong Super Trail 2", 0x440A0, 0x440C0, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Strong Super Trail 3", 0x440C0, 0x440E0, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Fierce", 0x440e2, 0x44102, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Fierce Super Trail 1", 0x44122, 0x44142, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Fierce Super Trail 2", 0x44142, 0x44162, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Fierce Super Trail 3", 0x44162, 0x44182, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Short", 0x44184, 0x441A4, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Short Super Trail 1", 0x441c4, 0x441e4, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Short Super Trail 2", 0x441e4, 0x44204, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Short Super Trail 3", 0x44204, 0x44224, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Forward", 0x44226, 0x44246, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Forward Super Trail 1", 0x44266, 0x44286, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Forward Super Trail 2", 0x44286, 0x442A6, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Forward Super Trail 3", 0x442A6, 0x442C6, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Roundhouse", 0x442c8, 0x442e8, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Roundhouse Super Trail 1", 0x44308, 0x44328, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Roundhouse Super Trail 2", 0x44328, 0x44348, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Roundhouse Super Trail 3", 0x44348, 0x44368, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Start", 0x4436a, 0x4438a, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Start Super Trail 1", 0x443aa, 0x443ca, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Start Super Trail 2", 0x443ca, 0x443ea, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Start Super Trail 3", 0x443ea, 0x4440A, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Hold", 0x4440c, 0x4442c, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Hold Super Trail 1", 0x4444c, 0x4446c, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Hold Super Trail 2", 0x4446c, 0x4448c, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu ST Hold Super Trail 3", 0x4448c, 0x444ac, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu SSF2 Palette 1", 0x444ae, 0x444ce, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu SSF2 Palette 2/Start", 0x44550, 0x44570, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu WW Palette 1", 0x445f2, 0x44612, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu WW Palette 2", 0x44694, 0x446b4, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu CE Palette 1", 0x44736, 0x44756, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu CE Palette 2", 0x447d8, 0x447F8, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu HF Palette 1", 0x4487a, 0x4489a, indexSF2Sprites_Ryu, 0x00 },
    { L"Ryu HF Palette 2", 0x4491c, 0x4493c, indexSF2Sprites_Ryu, 0x00 },
};

const sDescTreeNode HSF2_A_RYU_COLLECTION[] =
{
    { L"Unsorted",    DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_PALETTES_JAB,    ARRAYSIZE(HSF2_A_RYU_PALETTES_JAB) },
};

const sGame_PaletteDataset HSF2_A_RYU_PORTRAIT_PALETTES[] =
{
    { L"Ryu ST Portrait Jab 1/2", 0x2CE98, 0x2CF18, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Jab 2/2", 0x2d398, 0x2d418, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Strong 1/2", 0x2cf18, 0x2CF98, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Strong 2/2", 0x2d418, 0x2D498, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Fierce 1/2", 0x2CF98, 0x2D018, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Fierce 2/2", 0x2D498, 0x2D518, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Short 1/2", 0x2D018, 0x2D098, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Short 2/2", 0x2D518, 0x2D598, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Forward 1/2", 0x2D098, 0x2D118, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Forward 2/2", 0x2D598, 0x2D618, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Roundhouse 1/2", 0x2D118, 0x2D198, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Roundhouse 2/2", 0x2D618, 0x2D698, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Start 1/2", 0x2D198, 0x2D218, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Start 2/2", 0x2D698, 0x2D718, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Hold 1/2", 0x2D218, 0x2D298, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Hold 2/2", 0x2D718, 0x2D798, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu SSF2 Portrait Palette 1 1/2", 0x2D298, 0x2D318, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu SSF2 Portrait Palette 2/2", 0x2D798, 0x2D818, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu SSF2 Portrait Palette Start 1/2", 0x2D318, 0x2D398, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu SSF2 Portrait Palette Start 2/2", 0x2D818, 0x2D898, indexSF2Sprites_Ryu, 0x11 },
};

const sDescTreeNode HSF2_A_RYU_PORTRAIT_COLLECTION[] =
{
    { L"Portraits",    DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_RYU_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_UNITS_03[] =
{
    { L"Ryu",         DESC_NODETYPE_TREE, (void*)HSF2_A_RYU_PORTRAIT_COLLECTION,           ARRAYSIZE(HSF2_A_RYU_PORTRAIT_COLLECTION) },
};

constexpr auto HSF2_A_NUMUNIT_03 = ARRAYSIZE(HSF2_A_UNITS_03);
constexpr auto HSF2_A_EXTRALOC_03 = HSF2_A_NUMUNIT_03;

const sDescTreeNode HSF2_A_UNITS_04[] =
{
    { L"Ryu",         DESC_NODETYPE_TREE, (void*)HSF2_A_RYU_COLLECTION,        ARRAYSIZE(HSF2_A_RYU_COLLECTION) },
};

constexpr auto HSF2_A_NUMUNIT_04 = ARRAYSIZE(HSF2_A_UNITS_04);
constexpr auto HSF2_A_EXTRALOC_04 = HSF2_A_NUMUNIT_04;

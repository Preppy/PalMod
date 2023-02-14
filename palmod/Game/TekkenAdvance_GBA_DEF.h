#pragma once

const std::vector<uint16_t> TekkenAdvance_GBA_IMGIDS_USED =
{
};

const sGame_PaletteDataset TekkenAdvance_GBA_XIAOYU_A_PALETTES[] =
{
    { L"Xiaoyu A", 0x751ca4, 0x751cc4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_XIAOYU_R_PALETTES[] =
{
    { L"Xiaoyu R", 0x751cc4, 0x751ce4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_XIAOYU_START_PALETTES[] =
{
    { L"Xiaoyu START", 0x751ce4, 0x751d04 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_YOSHIMITSU_A_PALETTES[] =
{
    { L"Yoshimitsu A", 0x751be4, 0x751c04 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_YOSHIMITSU_R_PALETTES[] =
{
    { L"Yoshimitsu R", 0x751c04, 0x751c24 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_YOSHIMITSU_START_PALETTES[] =
{
    { L"Yoshimitsu START", 0x751c24, 0x751c44 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_NINA_A_PALETTES[] =
{
    { L"Nina A", 0x751b24, 0x751b44 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_NINA_R_PALETTES[] =
{
    { L"Nina R", 0x751b44, 0x751b64 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_NINA_START_PALETTES[] =
{
    { L"Nina START", 0x751b64, 0x751b84 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_LAW_A_PALETTES[] =
{
    { L"Law A", 0x751ac4, 0x751ae4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_LAW_R_PALETTES[] =
{
    { L"Law R", 0x751ae4, 0x751b04 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_LAW_START_PALETTES[] =
{
    { L"Law START", 0x751b04, 0x751b24 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_GUNJACK_A_PALETTES[] =
{
    { L"Gunjack A", 0x751b84, 0x751ba4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_GUNJACK_R_PALETTES[] =
{
    { L"Gunjack R", 0x751ba4, 0x751bc4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_GUNJACK_START_PALETTES[] =
{
    { L"Gunjack START", 0x751bc4, 0x751be4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_HWOARANG_A_PALETTES[] =
{
    { L"Hwoarang A", 0x751d04, 0x751d24 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_HWOARANG_R_PALETTES[] =
{
    { L"Hwoarang R", 0x751d24, 0x751d44 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_HWOARANG_START_PALETTES[] =
{
    { L"Hwoarang START", 0x751d44, 0x751d64 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_HEIHACHI_A_PALETTES[] =
{
    { L"Heihachi A", 0x751a44, 0x751a64 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_HEIHACHI_R_PALETTES[] =
{
    { L"Heihachi R", 0x751a64, 0x751a84 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_HEIHACHI_START_PALETTES[] =
{
    { L"Heihachi START", 0x751a84, 0x751aa4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_PAUL_A_PALETTES[] =
{
    { L"Paul A", 0x7519e4, 0x751a04 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_PAUL_R_PALETTES[] =
{
    { L"Paul R", 0x751a04, 0x751a24 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_PAUL_START_PALETTES[] =
{
    { L"Paul START", 0x751a24, 0x751a44 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_KING_A_PALETTES[] =
{
    { L"King A", 0x751c44, 0x751c64 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_KING_R_PALETTES[] =
{
    { L"King R", 0x751c64, 0x751c84 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_KING_START_PALETTES[] =
{
    { L"King START", 0x751c84, 0x751ca4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_JIN_A_PALETTES[] =
{
    { L"Jin A", 0x751984, 0x7519a4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_JIN_R_PALETTES[] =
{
    { L"Jin R", 0x7519a4, 0x7519c4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_JIN_START_PALETTES[] =
{
    { L"Jin START", 0x7519c4, 0x7519e4 },
};

const sGame_PaletteDataset TekkenAdvance_GBA_BONUS_BONUS_PALETTES[] =
{
    { L"Tekken Advance logo", 0x760c1c, 0x760c9c },
    { L"Common Text", 0x754584, 0x7546e4 },
    { L"Common FX", 0x765604, 0x765684 },
};

const sDescTreeNode TekkenAdvance_GBA_XIAOYU_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_XIAOYU_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_XIAOYU_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_XIAOYU_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_XIAOYU_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_XIAOYU_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_XIAOYU_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_YOSHIMITSU_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_YOSHIMITSU_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_YOSHIMITSU_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_YOSHIMITSU_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_YOSHIMITSU_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_YOSHIMITSU_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_YOSHIMITSU_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_NINA_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_NINA_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_NINA_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_NINA_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_NINA_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_NINA_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_NINA_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_LAW_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_LAW_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_LAW_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_LAW_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_LAW_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_LAW_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_LAW_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_GUNJACK_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_GUNJACK_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_GUNJACK_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_GUNJACK_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_GUNJACK_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_GUNJACK_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_GUNJACK_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_HWOARANG_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HWOARANG_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_HWOARANG_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HWOARANG_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_HWOARANG_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HWOARANG_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_HWOARANG_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_HEIHACHI_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HEIHACHI_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_HEIHACHI_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HEIHACHI_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_HEIHACHI_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HEIHACHI_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_HEIHACHI_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_PAUL_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_PAUL_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_PAUL_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_PAUL_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_PAUL_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_PAUL_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_PAUL_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_KING_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_KING_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_KING_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_KING_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_KING_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_KING_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_KING_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_JIN_COLLECTION[] =
{
    { L"A",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_JIN_A_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_JIN_A_PALETTES) },
    { L"R",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_JIN_R_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_JIN_R_PALETTES) },
    { L"Start",   DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_JIN_START_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_JIN_START_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_BONUS_COLLECTION[] =
{
    { L"In-Game Extras",    DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_BONUS_BONUS_PALETTES, ARRAYSIZE(TekkenAdvance_GBA_BONUS_BONUS_PALETTES) },
};

const sDescTreeNode TekkenAdvance_GBA_UNITS[] =
{
    { L"Xiaoyu",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_XIAOYU_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_XIAOYU_COLLECTION) },
    { L"Yoshimitsu",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_YOSHIMITSU_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_YOSHIMITSU_COLLECTION) },
    { L"Nina",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_NINA_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_NINA_COLLECTION) },
    { L"Law",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_LAW_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_LAW_COLLECTION) },
    { L"Gunjack",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_GUNJACK_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_GUNJACK_COLLECTION) },
    { L"Hwoarang",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HWOARANG_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_HWOARANG_COLLECTION) },
    { L"Heihachi",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_HEIHACHI_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_HEIHACHI_COLLECTION) },
    { L"Paul",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_PAUL_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_PAUL_COLLECTION) },
    { L"King",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_KING_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_KING_COLLECTION) },
    { L"Jin",           DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_JIN_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_JIN_COLLECTION) },

    { L"Bonus Palettes",             DESC_NODETYPE_TREE, (void*)TekkenAdvance_GBA_BONUS_COLLECTION, ARRAYSIZE(TekkenAdvance_GBA_BONUS_COLLECTION) },
};

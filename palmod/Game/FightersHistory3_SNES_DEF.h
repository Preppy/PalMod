#pragma once

const std::vector<uint16_t> FightersHistory3_SNES_IMGIDS_USED =
{
    indexKarnovsRSprites_Clown,         // 0x00
    indexKarnovsRSprites_Feilin,        // 0x01
    indexKarnovsRSprites_Karnov,        // 0x03
    indexKarnovsRSprites_Lee,           // 0x04
    indexKarnovsRSprites_Mizoguchi,     // 0x07
    indexKarnovsRSprites_Ryoko,         // 0x09
    indexKarnovsRSprites_Yungmie,       // 0x0b
    indexKarnovsRSprites_Zazie,         // 0x0c
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_Y[] =
{
    { L"Mizoguchi Y", 0x845a0, 0x845c0, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi Y weakspot", 0x845c0, 0x845e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_X[] =
{
    { L"Mizoguchi X", 0x845e0, 0x84600, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi X weakspot", 0x84600, 0x84620 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_B[] =
{
    { L"Mizoguchi B", 0x84620, 0x84640, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi B weakspot", 0x84640, 0x84660 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_A[] =
{
    { L"Mizoguchi A", 0x84660, 0x84680, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi A weakspot", 0x84680, 0x846a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_START[] =
{
    { L"Mizoguchi START", 0x846a0, 0x846c0, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi START weakspot", 0x846c0, 0x846e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_LRY[] =
{
    { L"Mizoguchi L/R+Y", 0x846e0, 0x84700, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi L/R+Y weakspot", 0x84700, 0x84720 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_LRX[] =
{
    { L"Mizoguchi L/R+X", 0x84720, 0x84740, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi L/R+X weakspot", 0x84740, 0x84760 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_LRB[] =
{
    { L"Mizoguchi L/R+B", 0x84760, 0x84780, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi L/R+B weakspot", 0x84780, 0x847a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_LRA[] =
{
    { L"Mizoguchi L/R+A", 0x847a0, 0x847c0, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi L/R+A weakspot", 0x847c0, 0x847e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Mizoguchi_LRSTART[] =
{
    { L"Mizoguchi L/R+START", 0x847e0, 0x84800, indexKarnovsRSprites_Mizoguchi, 0x00, &pairNext },
    { L"Mizoguchi L/R+START weakspot", 0x84800, 0x84820 },
};

const sDescTreeNode FightersHistory3_SNES_Mizoguchi_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_Y, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_X, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_B, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_A, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_START, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_LRY, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_LRX, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_LRB, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_LRA, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_Y[] =
{
    { L"Yungmie Y", 0x84860, 0x84880, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie Y weakspot", 0x84880, 0x848a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_X[] =
{
    { L"Yungmie X", 0x848a0, 0x848c0, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie X weakspot", 0x848c0, 0x848e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_B[] =
{
    { L"Yungmie B", 0x848e0, 0x84900, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie B weakspot", 0x84900, 0x84920 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_A[] =
{
    { L"Yungmie A", 0x84920, 0x84940, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie A weakspot", 0x84940, 0x84960 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_START[] =
{
    { L"Yungmie START", 0x84960, 0x84980, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie START weakspot", 0x84980, 0x849a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_LRY[] =
{
    { L"Yungmie L/R+Y", 0x849a0, 0x849c0, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie L/R+Y weakspot", 0x849c0, 0x849e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_LRX[] =
{
    { L"Yungmie L/R+X", 0x849e0, 0x84a00, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie L/R+X weakspot", 0x84a00, 0x84a20 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_LRB[] =
{
    { L"Yungmie L/R+B", 0x84a20, 0x84a40, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie L/R+B weakspot", 0x84a40, 0x84a60 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_LRA[] =
{
    { L"Yungmie L/R+A", 0x84a60, 0x84a80, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie L/R+A weakspot", 0x84a80, 0x84aa0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Yungmie_LRSTART[] =
{
    { L"Yungmie L/R+START", 0x84aa0, 0x84ac0, indexKarnovsRSprites_Yungmie, 0x00, &pairNext },
    { L"Yungmie L/R+START weakspot", 0x84ac0, 0x84ae0 },
};

const sDescTreeNode FightersHistory3_SNES_Yungmie_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_Y, ARRAYSIZE(FightersHistory3_SNES_Yungmie_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_X, ARRAYSIZE(FightersHistory3_SNES_Yungmie_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_B, ARRAYSIZE(FightersHistory3_SNES_Yungmie_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_A, ARRAYSIZE(FightersHistory3_SNES_Yungmie_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_START, ARRAYSIZE(FightersHistory3_SNES_Yungmie_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_LRY, ARRAYSIZE(FightersHistory3_SNES_Yungmie_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_LRX, ARRAYSIZE(FightersHistory3_SNES_Yungmie_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_LRB, ARRAYSIZE(FightersHistory3_SNES_Yungmie_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_LRA, ARRAYSIZE(FightersHistory3_SNES_Yungmie_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Yungmie_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_Y[] =
{
    { L"Lee Y", 0x84b20, 0x84b40, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee Y weakspot", 0x84b40, 0x84b60 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_X[] =
{
    { L"Lee X", 0x84b60, 0x84b80, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee X weakspot", 0x84b80, 0x84ba0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_B[] =
{
    { L"Lee B", 0x84ba0, 0x84bc0, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee B weakspot", 0x84bc0, 0x84be0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_A[] =
{
    { L"Lee A", 0x84be0, 0x84c00, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee A weakspot", 0x84c00, 0x84c20 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_START[] =
{
    { L"Lee START", 0x84c20, 0x84c40, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee START weakspot", 0x84c40, 0x84c60 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_LRY[] =
{
    { L"Lee L/R+Y", 0x84c60, 0x84c80, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee L/R+Y weakspot", 0x84c80, 0x84ca0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_LRX[] =
{
    { L"Lee L/R+X", 0x84ca0, 0x84cc0, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee L/R+X weakspot", 0x84cc0, 0x84ce0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_LRB[] =
{
    { L"Lee L/R+B", 0x84ce0, 0x84d00, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee L/R+B weakspot", 0x84d00, 0x84d20 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_LRA[] =
{
    { L"Lee L/R+A", 0x84d20, 0x84d40, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee L/R+A weakspot", 0x84d40, 0x84d60 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Lee_LRSTART[] =
{
    { L"Lee L/R+START", 0x84d60, 0x84d80, indexKarnovsRSprites_Lee, 0x00, &pairNext },
    { L"Lee L/R+START weakspot", 0x84d80, 0x84da0 },
};

const sDescTreeNode FightersHistory3_SNES_Lee_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_Y, ARRAYSIZE(FightersHistory3_SNES_Lee_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_X, ARRAYSIZE(FightersHistory3_SNES_Lee_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_B, ARRAYSIZE(FightersHistory3_SNES_Lee_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_A, ARRAYSIZE(FightersHistory3_SNES_Lee_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_START, ARRAYSIZE(FightersHistory3_SNES_Lee_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_LRY, ARRAYSIZE(FightersHistory3_SNES_Lee_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_LRX, ARRAYSIZE(FightersHistory3_SNES_Lee_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_LRB, ARRAYSIZE(FightersHistory3_SNES_Lee_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_LRA, ARRAYSIZE(FightersHistory3_SNES_Lee_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Lee_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_Y[] =
{
    { L"Zazie Y", 0x84de0, 0x84e00, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie Y weakspot", 0x84e00, 0x84e20, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_X[] =
{
    { L"Zazie X", 0x84e20, 0x84e40, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie X weakspot", 0x84e40, 0x84e60, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_B[] =
{
    { L"Zazie B", 0x84e60, 0x84e80, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie B weakspot", 0x84e80, 0x84ea0, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_A[] =
{
    { L"Zazie A", 0x84ea0, 0x84ec0, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie A weakspot", 0x84ec0, 0x84ee0, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_START[] =
{
    { L"Zazie START", 0x84ee0, 0x84f00, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie START weakspot", 0x84f00, 0x84f20, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_LRY[] =
{
    { L"Zazie L/R+Y", 0x84f20, 0x84f40, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie L/R+Y weakspot", 0x84f40, 0x84f60, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_LRX[] =
{
    { L"Zazie L/R+X", 0x84f60, 0x84f80, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie L/R+X weakspot", 0x84f80, 0x84fa0, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_LRB[] =
{
    { L"Zazie L/R+B", 0x84fa0, 0x84fc0, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie L/R+B weakspot", 0x84fc0, 0x84fe0, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_LRA[] =
{
    { L"Zazie L/R+A", 0x84fe0, 0x85000, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie L/R+A weakspot", 0x85000, 0x85020, indexKarnovsRSprites_Zazie, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Zazie_LRSTART[] =
{
    { L"Zazie L/R+START", 0x85020, 0x85040, indexKarnovsRSprites_Zazie, 0x00, &pairNext },
    { L"Zazie L/R+START weakspot", 0x85040, 0x85060, indexKarnovsRSprites_Zazie, 0x01 },
};

const sDescTreeNode FightersHistory3_SNES_Zazie_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_Y, ARRAYSIZE(FightersHistory3_SNES_Zazie_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_X, ARRAYSIZE(FightersHistory3_SNES_Zazie_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_B, ARRAYSIZE(FightersHistory3_SNES_Zazie_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_A, ARRAYSIZE(FightersHistory3_SNES_Zazie_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_START, ARRAYSIZE(FightersHistory3_SNES_Zazie_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_LRY, ARRAYSIZE(FightersHistory3_SNES_Zazie_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_LRX, ARRAYSIZE(FightersHistory3_SNES_Zazie_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_LRB, ARRAYSIZE(FightersHistory3_SNES_Zazie_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_LRA, ARRAYSIZE(FightersHistory3_SNES_Zazie_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Zazie_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_Y[] =
{
    { L"Feilin Y", 0x850a0, 0x850c0, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin Y weakspot", 0x850c0, 0x850e0, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_X[] =
{
    { L"Feilin X", 0x850e0, 0x85100, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin X weakspot", 0x85100, 0x85120, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_B[] =
{
    { L"Feilin B", 0x85120, 0x85140, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin B weakspot", 0x85140, 0x85160, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_A[] =
{
    { L"Feilin A", 0x85160, 0x85180, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin A weakspot", 0x85180, 0x851a0, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_START[] =
{
    { L"Feilin START", 0x851a0, 0x851c0, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin START weaskpot", 0x851c0, 0x851e0, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_LRY[] =
{
    { L"Feilin L/R+Y", 0x851e0, 0x85200, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin L/R+Y weakspot", 0x85200, 0x85220, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_LRX[] =
{
    { L"Feilin L/R+X", 0x85220, 0x85240, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin L/R+X weakspot", 0x85240, 0x85260, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_LRB[] =
{
    { L"Feilin L/R+B", 0x85260, 0x85280, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin L/R+B weakspot", 0x85280, 0x852a0, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_LRA[] =
{
    { L"Feilin L/R+A", 0x852a0, 0x852c0, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin L/R+A weakspot", 0x852c0, 0x852e0, indexKarnovsRSprites_Feilin, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Feilin_LRSTART[] =
{
    { L"Feilin L/R+START", 0x852e0, 0x85300, indexKarnovsRSprites_Feilin, 0x00, &pairNext },
    { L"Feilin L/R+START weakspot", 0x85300, 0x85320, indexKarnovsRSprites_Feilin, 0x01 },
};

const sDescTreeNode FightersHistory3_SNES_Feilin_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_Y, ARRAYSIZE(FightersHistory3_SNES_Feilin_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_X, ARRAYSIZE(FightersHistory3_SNES_Feilin_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_B, ARRAYSIZE(FightersHistory3_SNES_Feilin_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_A, ARRAYSIZE(FightersHistory3_SNES_Feilin_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_START, ARRAYSIZE(FightersHistory3_SNES_Feilin_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_LRY, ARRAYSIZE(FightersHistory3_SNES_Feilin_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_LRX, ARRAYSIZE(FightersHistory3_SNES_Feilin_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_LRB, ARRAYSIZE(FightersHistory3_SNES_Feilin_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_LRA, ARRAYSIZE(FightersHistory3_SNES_Feilin_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Feilin_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_Y[] =
{
    { L"Ryoko Y", 0x85360, 0x85380, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko Y weakspot", 0x85380, 0x853a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_X[] =
{
    { L"Ryoko X", 0x853a0, 0x853c0, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko X weakspot", 0x853c0, 0x853e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_B[] =
{
    { L"Ryoko B", 0x853e0, 0x85400, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko B weakspot", 0x85400, 0x85420 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_A[] =
{
    { L"Ryoko A", 0x85420, 0x85440, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko A weakspot", 0x85440, 0x85460 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_START[] =
{
    { L"Ryoko START", 0x85460, 0x85480, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko START weakspot", 0x85480, 0x854a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_LRY[] =
{
    { L"Ryoko L/R+Y", 0x854a0, 0x854c0, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko L/R+Y weakspot", 0x854c0, 0x854e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_LRX[] =
{
    { L"Ryoko L/R+X", 0x854e0, 0x85500, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko L/R+X weakspot", 0x85500, 0x85520 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_LRB[] =
{
    { L"Ryoko L/R+B", 0x85520, 0x85540, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko L/R+B weakspot", 0x85540, 0x85560 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_LRA[] =
{
    { L"Ryoko L/R+A", 0x85560, 0x85580, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko L/R+A weakspot", 0x85580, 0x855a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Ryoko_LRSTART[] =
{
    { L"Ryoko L/R+START", 0x855a0, 0x855c0, indexKarnovsRSprites_Ryoko, 0x00, &pairNext },
    { L"Ryoko L/R+START weakspot", 0x855c0, 0x855e0 },
};

const sDescTreeNode FightersHistory3_SNES_Ryoko_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_Y, ARRAYSIZE(FightersHistory3_SNES_Ryoko_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_X, ARRAYSIZE(FightersHistory3_SNES_Ryoko_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_B, ARRAYSIZE(FightersHistory3_SNES_Ryoko_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_A, ARRAYSIZE(FightersHistory3_SNES_Ryoko_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_START, ARRAYSIZE(FightersHistory3_SNES_Ryoko_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_LRY, ARRAYSIZE(FightersHistory3_SNES_Ryoko_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_LRX, ARRAYSIZE(FightersHistory3_SNES_Ryoko_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_LRB, ARRAYSIZE(FightersHistory3_SNES_Ryoko_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_LRA, ARRAYSIZE(FightersHistory3_SNES_Ryoko_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Ryoko_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_Y[] =
{
    { L"Clown Y", 0x85620, 0x85640, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown Y weakspot", 0x85640, 0x85660 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_X[] =
{
    { L"Clown X", 0x85660, 0x85680, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown X weakspot", 0x85680, 0x856a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_B[] =
{
    { L"Clown B", 0x856a0, 0x856c0, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown B weakspot", 0x856c0, 0x856e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_A[] =
{
    { L"Clown A", 0x856e0, 0x85700, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown A weakspot", 0x85700, 0x85720 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_START[] =
{
    { L"Clown START", 0x85720, 0x85740, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown START weakspot", 0x85740, 0x85760 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_LRY[] =
{
    { L"Clown L/R+Y", 0x85760, 0x85780, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown L/R+Y weakspot", 0x85780, 0x857a0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_LRX[] =
{
    { L"Clown L/R+X", 0x857a0, 0x857c0, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown L/R+X weakspot", 0x857c0, 0x857e0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_LRB[] =
{
    { L"Clown L/R+B", 0x857e0, 0x85800, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown L/R+B weakspot", 0x85800, 0x85820 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_LRA[] =
{
    { L"Clown L/R+A", 0x85820, 0x85840, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown L/R+A weakspot", 0x85840, 0x85860 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Clown_LRSTART[] =
{
    { L"Clown L/R+START", 0x85860, 0x85880, indexKarnovsRSprites_Clown, 0x00, &pairNext },
    { L"Clown L/R+START weakspot", 0x85880, 0x858a0 },
};

const sDescTreeNode FightersHistory3_SNES_Clown_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_Y, ARRAYSIZE(FightersHistory3_SNES_Clown_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_X, ARRAYSIZE(FightersHistory3_SNES_Clown_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_B, ARRAYSIZE(FightersHistory3_SNES_Clown_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_A, ARRAYSIZE(FightersHistory3_SNES_Clown_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_START, ARRAYSIZE(FightersHistory3_SNES_Clown_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_LRY, ARRAYSIZE(FightersHistory3_SNES_Clown_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_LRX, ARRAYSIZE(FightersHistory3_SNES_Clown_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_LRB, ARRAYSIZE(FightersHistory3_SNES_Clown_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_LRA, ARRAYSIZE(FightersHistory3_SNES_Clown_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Clown_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_Y[] =
{
    { L"Karnov Y", 0x858e0, 0x85900, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov Y weakspot", 0x85900, 0x85920, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_X[] =
{
    { L"Karnov X", 0x85920, 0x85940, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov X weakspot", 0x85940, 0x85960, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_B[] =
{
    { L"Karnov B", 0x85960, 0x85980, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov B weakspot", 0x85980, 0x859a0, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_A[] =
{
    { L"Karnov A", 0x859a0, 0x859c0, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov A weakspot", 0x859c0, 0x859e0, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_START[] =
{
    { L"Karnov START", 0x859e0, 0x85a00, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov START weakspot", 0x85a00, 0x85a20, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_LRY[] =
{
    { L"Karnov L/R+Y", 0x85a20, 0x85a40, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov L/R+Y weakspot", 0x85a40, 0x85a60, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_LRX[] =
{
    { L"Karnov L/R+X", 0x85a60, 0x85a80, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov L/R+X weakspot", 0x85a80, 0x85aa0, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_LRB[] =
{
    { L"Karnov L/R+B", 0x85aa0, 0x85ac0, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov L/R+B weakspot", 0x85ac0, 0x85ae0, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_LRA[] =
{
    { L"Karnov L/R+A", 0x85ae0, 0x85b00, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov L/R+A weakspot", 0x85b00, 0x85b20, indexKarnovsRSprites_Karnov, 0x01 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Karnov_LRSTART[] =
{
    { L"Karnov L/R+START", 0x85b20, 0x85b40, indexKarnovsRSprites_Karnov, 0x00, &pairNext },
    { L"Karnov L/R+START weakspot", 0x85b40, 0x85b60, indexKarnovsRSprites_Karnov, 0x01 },
};

const sDescTreeNode FightersHistory3_SNES_Karnov_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_Y, ARRAYSIZE(FightersHistory3_SNES_Karnov_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_X, ARRAYSIZE(FightersHistory3_SNES_Karnov_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_B, ARRAYSIZE(FightersHistory3_SNES_Karnov_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_A, ARRAYSIZE(FightersHistory3_SNES_Karnov_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_START, ARRAYSIZE(FightersHistory3_SNES_Karnov_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_LRY, ARRAYSIZE(FightersHistory3_SNES_Karnov_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_LRX, ARRAYSIZE(FightersHistory3_SNES_Karnov_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_LRB, ARRAYSIZE(FightersHistory3_SNES_Karnov_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_LRA, ARRAYSIZE(FightersHistory3_SNES_Karnov_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Karnov_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_Y[] =
{
    { L"Chelnov Y", 0x85ba0, 0x85bc0, -1, -1, &pairNext },
    { L"Chelnov Y weakspot", 0x85bc0, 0x85be0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_X[] =
{
    { L"Chelnov X", 0x85be0, 0x85c00, -1, -1, &pairNext },
    { L"Chelnov X weakspot", 0x85c00, 0x85c20 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_B[] =
{
    { L"Chelnov B", 0x85c20, 0x85c40, -1, -1, &pairNext },
    { L"Chelnov B weakspot", 0x85c40, 0x85c60 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_A[] =
{
    { L"Chelnov A", 0x85c60, 0x85c80, -1, -1, &pairNext },
    { L"Chelnov A weakspot", 0x85c80, 0x85ca0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_START[] =
{
    { L"Chelnov START", 0x85ca0, 0x85cc0, -1, -1, &pairNext },
    { L"Chelnov START weakspot", 0x85cc0, 0x85ce0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_LRY[] =
{
    { L"Chelnov L/R+Y", 0x85ce0, 0x85d00, -1, -1, &pairNext },
    { L"Chelnov L/R+Y weakspot", 0x85d00, 0x85d20 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_LRX[] =
{
    { L"Chelnov L/R+X", 0x85d20, 0x85d40, -1, -1, &pairNext },
    { L"Chelnov L/R+X weakspot", 0x85d40, 0x85d60 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_LRB[] =
{
    { L"Chelnov L/R+B", 0x85d60, 0x85d80, -1, -1, &pairNext },
    { L"Chelnov L/R+B weakspot", 0x85d80, 0x85da0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_LRA[] =
{
    { L"Chelnov L/R+A", 0x85da0, 0x85dc0, -1, -1, &pairNext },
    { L"Chelnov L/R+A weakspot", 0x85dc0, 0x85de0 },
};

const sGame_PaletteDataset FightersHistory3_SNES_Chelnov_LRSTART[] =
{
    { L"Chelnov L/R+START", 0x85de0, 0x85e00, -1, -1, &pairNext },
    { L"Chelnov L/R+START weakspot", 0x85e00, 0x85e20 },
};

const sDescTreeNode FightersHistory3_SNES_Chelnov_COLLECTION[] =
{
    { L"Y",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_Y, ARRAYSIZE(FightersHistory3_SNES_Chelnov_Y) },
    { L"X",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_X, ARRAYSIZE(FightersHistory3_SNES_Chelnov_X) },
    { L"B",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_B, ARRAYSIZE(FightersHistory3_SNES_Chelnov_B) },
    { L"A",         DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_A, ARRAYSIZE(FightersHistory3_SNES_Chelnov_A) },
    { L"START",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_START, ARRAYSIZE(FightersHistory3_SNES_Chelnov_START) },
    { L"L/R+Y",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_LRY, ARRAYSIZE(FightersHistory3_SNES_Chelnov_LRY) },
    { L"L/R+X",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_LRX, ARRAYSIZE(FightersHistory3_SNES_Chelnov_LRX) },
    { L"L/R+B",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_LRB, ARRAYSIZE(FightersHistory3_SNES_Chelnov_LRB) },
    { L"L/R+A",     DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_LRA, ARRAYSIZE(FightersHistory3_SNES_Chelnov_LRA) },
    { L"L/R+START", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_LRSTART, ARRAYSIZE(FightersHistory3_SNES_Chelnov_LRSTART) },
};

const sGame_PaletteDataset FightersHistory3_SNES_CharExtras[] =
{
    { L"Mizoguchi Effects", 0x80200, 0x80220 },
    { L"Yungmie Effects", 0x80220, 0x80240 },
    { L"Lee Effects", 0x80240, 0x80260 },
    { L"Zazie Effects", 0x80260, 0x80280 },
    { L"Feilin Effects", 0x80280, 0x802a0 },
    { L"Ryoko Effects", 0x802a0, 0x802c0 },
    { L"Clown Effects", 0x802c0, 0x802e0 },
    { L"Karnov Effects", 0x802e0, 0x80300 },
    { L"Chelnov Effects", 0x80300, 0x80320 },
};

const sDescTreeNode FightersHistory3_SNES_CharExtras_COLLECTION[] =
{
    { L"Effects", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_CharExtras, ARRAYSIZE(FightersHistory3_SNES_CharExtras) },
};

const sGame_PaletteDataset FightersHistory3_SNES_Bonus[] =
{
    { L"Hitsparks/Dust/Shadows", 0x80420, 0x80440 },
    { L"Title logo 1", 0x826c0, 0x826e0, -1, -1, &pairNext },
    { L"Title logo 2", 0x860e0, 0x86100 },
};

const sDescTreeNode FightersHistory3_SNES_Bonus_COLLECTION[] =
{
    { L"Bonus", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Bonus, ARRAYSIZE(FightersHistory3_SNES_Bonus) },
};

const sDescTreeNode FightersHistory3_SNES_UNITS[] =
{
    { L"Mizoguchi", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Mizoguchi_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Mizoguchi_COLLECTION) },
    { L"Yungmie", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Yungmie_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Yungmie_COLLECTION) },
    { L"Lee", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Lee_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Lee_COLLECTION) },
    { L"Zazie", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Zazie_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Zazie_COLLECTION) },
    { L"Feilin", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Feilin_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Feilin_COLLECTION) },
    { L"Ryoko", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Ryoko_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Ryoko_COLLECTION) },
    { L"Clown", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Clown_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Clown_COLLECTION) },
    { L"Karnov", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Karnov_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Karnov_COLLECTION) },
    { L"Chelnov", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Chelnov_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Chelnov_COLLECTION) },

    { L"Character Extras", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_CharExtras_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_CharExtras_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)FightersHistory3_SNES_Bonus_COLLECTION, ARRAYSIZE(FightersHistory3_SNES_Bonus_COLLECTION) },
};

#pragma once

const UINT16 KOF01_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_K,
    indexKOFSprites_02UM_Maxima,
    indexKOFSprites_02UM_Whip,
    indexKOFSprites_02UM_Lin,
    indexKOFSprites_02UM_KyoKusa,
    indexKOFSprites_02UM_Benimaru,
    indexKOF03Sprites_Goro,
    indexKOFSprites_02UM_Shingo,
    indexKOFSprites_02UM_Iori,
    indexKOFSprites_02UM_Vanessa,
    indexKOFSprites_02UM_Seth,
    indexKOFSprites_02UM_Ramon,
    indexKOFSprites_02UM_Leona,
    indexKOFSprites_02UM_Ralf,
    indexKOFSprites_02UM_Clark,
    indexKOFSprites_02UM_Terry,
    indexKOFSprites_02UM_Andy,
    indexKOFSprites_02UM_Joe,
    indexKOFSprites_02UM_BlueMary,
    indexKOFSprites_02UM_Ryo,
    indexKOFSprites_02UM_Robert,
    indexKOFSprites_02UM_Yuri,
    indexKOFSprites_02UM_Takuma,
    indexKOFSprites_02UM_King,
    indexKOFSprites_02UM_Mai,
    indexKOFSprites_02UM_Hinako,
    indexKOF01Sprites_Xiangfei,
    indexKOFSprites_02UM_Kula,
    indexKOFSprites_02UM_K9999,
    indexKOFSprites_02UM_Angel,
    indexKOFSprites_02UM_Kensou,
    indexKOFSprites_02UM_Chin,
    indexKOFSprites_02UM_Kim,
    indexKOFSprites_02UM_Chang,
    indexKOFSprites_02UM_Choi,
    indexKOFSprites_02UM_MayLee,
    indexKOFSprites_02UM_CloneZero,
    indexKOFSprites_02UM_Igniz,
    indexKOFSprites_02UM_Daimon,
    indexKOFSprites_02UM_Bao,
    indexKOFSprites_02UM_Foxy,
    indexKOFSprites_02UM_Athena,
    indexKOFSprites_02UM_ZeroOG,

    indexKOF01Sprites_Athena,       // 0x147
    indexKOF01Sprites_Bao,          // 0x148
    indexKOF01Sprites_Foxy,         // 0x149

    indexKOF01Sprites_Andy,         // 0x1af
    indexKOF01Sprites_Angel,        // 0x1b0
    // indexKOF01Sprites_Athena,    // 0x147
    // indexKOF01Sprites_Bao,       // 0x148
    indexKOF01Sprites_Benimaru,     // 0x1b1
    indexKOF01Sprites_BlueMary,     // 0x1b2
    indexKOF01Sprites_Chang,        // 0x1b3
    indexKOF01Sprites_Chin,         // 0x1b4
    indexKOF01Sprites_Choi,         // 0x1b5
    indexKOF01Sprites_Clark,        // 0x1b6
    // indexKOF01Sprites_Foxy,      // 0x149
    indexKOF01Sprites_GoroDaimon,   // 0x1b7
    indexKOF01Sprites_Heidern,      // 0x1b8
    indexKOF01Sprites_Hinako,       // 0x1b9
    indexKOF01Sprites_Igniz,        // 0x1ba
    indexKOF01Sprites_Iori,         // 0x1bb
    indexKOF01Sprites_Joe,          // 0x1bc
    indexKOF01Sprites_K,            // 0x1bd
    indexKOF01Sprites_K9999,        // 0x1be
    indexKOF01Sprites_Kensou,       // 0x1bf
    indexKOF01Sprites_Kim,          // 0x1c0
    indexKOF01Sprites_King,         // 0x1c1
    indexKOF01Sprites_Kula,         // 0x1c2
    indexKOF01Sprites_Kyo,          // 0x1c3
    indexKOF01Sprites_Leona,        // 0x1c4
    indexKOF01Sprites_Lin,          // 0x1c5
    indexKOF01Sprites_Mai,          // 0x1c6
    indexKOF01Sprites_Maxima,       // 0x1c7
    indexKOF01Sprites_MayLee,       // 0x1c8
    indexKOF01Sprites_Ralf,         // 0x1c9
    indexKOF01Sprites_Ramon,        // 0x1ca
    indexKOF01Sprites_Robert,       // 0x1cb
    indexKOF01Sprites_Ryo,          // 0x1cc
    indexKOF01Sprites_Seth,         // 0x1cd
    indexKOF01Sprites_Shingo,       // 0x1ce
    indexKOF01Sprites_Takuma,       // 0x1cf
    indexKOF01Sprites_Terry,        // 0x1d0
    indexKOF01Sprites_Vanessa,      // 0x1d1
    // indexKOF01Sprites_Xiangfei,  // 47
    indexKOF01Sprites_Whip,         // 0x1d2
    indexKOF01Sprites_Yuri,         // 0x1d3
    indexKOF01Sprites_Zero,         // 0x1d4
};

const sGame_PaletteDataset KOF01_A_K_PALETTES_P[] =
{
    { L"K' P", 0x387122, 0x387142, indexKOFSprites_02UM_K, 0x00 },
};

const sGame_PaletteDataset KOF01_A_K_PALETTES_K[] =
{
    { L"K' K", 0x387322, 0x387342, indexKOFSprites_02UM_K, 0x00 },
};

const sDescTreeNode KOF01_A_K_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_K_PALETTES_P, ARRAYSIZE(KOF01_A_K_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_K_PALETTES_K, ARRAYSIZE(KOF01_A_K_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_MAXIMA_PALETTES_P[] =
{
    { L"Maxima P", 0x387522, 0x387542, indexKOFSprites_02UM_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF01_A_MAXIMA_PALETTES_K[] =
{
    { L"Maxima K", 0x387722, 0x387742, indexKOFSprites_02UM_Maxima, 0x00 },
};

const sDescTreeNode KOF01_A_MAXIMA_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMA_PALETTES_P, ARRAYSIZE(KOF01_A_MAXIMA_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMA_PALETTES_K, ARRAYSIZE(KOF01_A_MAXIMA_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Whip_PALETTES_P[] =
{
    { L"Whip P", 0x387922, 0x387942, indexKOFSprites_02UM_Whip, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Whip_PALETTES_K[] =
{
    { L"Whip K", 0x387b22, 0x387b42, indexKOFSprites_02UM_Whip, 0x00 },
};

const sDescTreeNode KOF01_A_Whip_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Whip_PALETTES_P, ARRAYSIZE(KOF01_A_Whip_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Whip_PALETTES_K, ARRAYSIZE(KOF01_A_Whip_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Lin_PALETTES_P[] =
{
    { L"Lin P", 0x387d22, 0x387d42, indexKOFSprites_02UM_Lin, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Lin_PALETTES_K[] =
{
    { L"Lin K", 0x387f22, 0x387f42, indexKOFSprites_02UM_Lin, 0x00 },
};

const sDescTreeNode KOF01_A_Lin_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Lin_PALETTES_P, ARRAYSIZE(KOF01_A_Lin_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Lin_PALETTES_K, ARRAYSIZE(KOF01_A_Lin_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Kyo_PALETTES_P[] =
{
    { L"Kyo P", 0x388122, 0x388142, indexKOFSprites_02UM_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Kyo_PALETTES_K[] =
{
    { L"Kyo K", 0x388322, 0x388342, indexKOFSprites_02UM_KyoKusa, 0x00 },
};

const sDescTreeNode KOF01_A_Kyo_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Kyo_PALETTES_P, ARRAYSIZE(KOF01_A_Kyo_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Kyo_PALETTES_K, ARRAYSIZE(KOF01_A_Kyo_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Benimaru_PALETTES_P[] =
{
    { L"Benimaru P", 0x388522, 0x388542, indexKOFSprites_02UM_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Benimaru_PALETTES_K[] =
{
    { L"Benimaru K", 0x388722, 0x388742, indexKOFSprites_02UM_Benimaru, 0x00 },
};

const sDescTreeNode KOF01_A_Benimaru_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Benimaru_PALETTES_P, ARRAYSIZE(KOF01_A_Benimaru_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Benimaru_PALETTES_K, ARRAYSIZE(KOF01_A_Benimaru_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Goro_PALETTES_P[] =
{
    { L"Goro P", 0x388922, 0x388942, indexKOFSprites_02UM_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Goro_PALETTES_K[] =
{
    { L"Goro K", 0x388b22, 0x388b42, indexKOFSprites_02UM_Daimon, 0x00 },
};

const sDescTreeNode KOF01_A_Goro_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Goro_PALETTES_P, ARRAYSIZE(KOF01_A_Goro_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Goro_PALETTES_K, ARRAYSIZE(KOF01_A_Goro_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Shingo_PALETTES_P[] =
{
    { L"Shingo P", 0x388d22, 0x388d42, indexKOFSprites_02UM_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Shingo_PALETTES_K[] =
{
    { L"Shingo K", 0x388f22, 0x388f42, indexKOFSprites_02UM_Shingo, 0x00 },
};

const sDescTreeNode KOF01_A_Shingo_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Shingo_PALETTES_P, ARRAYSIZE(KOF01_A_Shingo_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Shingo_PALETTES_K, ARRAYSIZE(KOF01_A_Shingo_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Iori_PALETTES_P[] =
{
    { L"Iori P", 0x389122, 0x389142, indexKOFSprites_02UM_Iori, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Iori_PALETTES_K[] =
{
    { L"Iori K", 0x389322, 0x389342, indexKOFSprites_02UM_Iori, 0x00 },
};

const sDescTreeNode KOF01_A_Iori_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Iori_PALETTES_P, ARRAYSIZE(KOF01_A_Iori_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Iori_PALETTES_K, ARRAYSIZE(KOF01_A_Iori_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Vanessa_PALETTES_P[] =
{
    { L"Vanessa P", 0x389522, 0x389542, indexKOFSprites_02UM_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Vanessa_PALETTES_K[] =
{
    { L"Vanessa K", 0x389722, 0x389742, indexKOFSprites_02UM_Vanessa, 0x00 },
};

const sDescTreeNode KOF01_A_Vanessa_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Vanessa_PALETTES_P, ARRAYSIZE(KOF01_A_Vanessa_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Vanessa_PALETTES_K, ARRAYSIZE(KOF01_A_Vanessa_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Seth_PALETTES_P[] =
{
    { L"Seth P", 0x389922, 0x389942, indexKOFSprites_02UM_Seth, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Seth_PALETTES_K[] =
{
    { L"Seth K", 0x389b22, 0x389b42, indexKOFSprites_02UM_Seth, 0x00 },
};

const sDescTreeNode KOF01_A_Seth_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Seth_PALETTES_P, ARRAYSIZE(KOF01_A_Seth_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Seth_PALETTES_K, ARRAYSIZE(KOF01_A_Seth_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Ramon_PALETTES_P[] =
{
    { L"Ramon P", 0x389d22, 0x389d42, indexKOFSprites_02UM_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Ramon_PALETTES_K[] =
{
    { L"Ramon K", 0x389f22, 0x389f42, indexKOFSprites_02UM_Ramon, 0x00 },
};

const sDescTreeNode KOF01_A_Ramon_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Ramon_PALETTES_P, ARRAYSIZE(KOF01_A_Ramon_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Ramon_PALETTES_K, ARRAYSIZE(KOF01_A_Ramon_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Leona_PALETTES_P[] =
{
    { L"Leona P", 0x38a122, 0x38a142, indexKOFSprites_02UM_Leona, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Leona_PALETTES_K[] =
{
    { L"Leona K", 0x38a322, 0x38a342, indexKOFSprites_02UM_Leona, 0x00 },
};

const sDescTreeNode KOF01_A_Leona_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Leona_PALETTES_P, ARRAYSIZE(KOF01_A_Leona_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Leona_PALETTES_K, ARRAYSIZE(KOF01_A_Leona_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Ralf_PALETTES_P[] =
{
    { L"Ralf P", 0x38a522, 0x38a542, indexKOFSprites_02UM_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Ralf_PALETTES_K[] =
{
    { L"Ralf K", 0x38a722, 0x38a742, indexKOFSprites_02UM_Ralf, 0x00 },
};

const sDescTreeNode KOF01_A_Ralf_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Ralf_PALETTES_P, ARRAYSIZE(KOF01_A_Ralf_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Ralf_PALETTES_K, ARRAYSIZE(KOF01_A_Ralf_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Clark_PALETTES_P[] =
{
    { L"Clark P", 0x38a922, 0x38a942, indexKOFSprites_02UM_Clark, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Clark_PALETTES_K[] =
{
    { L"Clark K", 0x38ab22, 0x38ab42, indexKOFSprites_02UM_Clark, 0x00 },
};

const sDescTreeNode KOF01_A_Clark_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Clark_PALETTES_P, ARRAYSIZE(KOF01_A_Clark_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Clark_PALETTES_K, ARRAYSIZE(KOF01_A_Clark_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Heidern_PALETTES_P[] =
{
    { L"Heidern P", 0x38ad22, 0x38ad42, indexKOF01Sprites_Heidern, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Heidern_PALETTES_K[] =
{
    { L"Heidern K", 0x38af22, 0x38af42, indexKOF01Sprites_Heidern, 0x00 },
};

const sDescTreeNode KOF01_A_Heidern_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Heidern_PALETTES_P, ARRAYSIZE(KOF01_A_Heidern_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Heidern_PALETTES_K, ARRAYSIZE(KOF01_A_Heidern_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Terry_PALETTES_P[] =
{
    { L"Terry P", 0x38b122, 0x38b142, indexKOFSprites_02UM_Terry, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Terry_PALETTES_K[] =
{
    { L"Terry K", 0x38b322, 0x38b342, indexKOFSprites_02UM_Terry, 0x00 },
};

const sDescTreeNode KOF01_A_Terry_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Terry_PALETTES_P, ARRAYSIZE(KOF01_A_Terry_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Terry_PALETTES_K, ARRAYSIZE(KOF01_A_Terry_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Andy_PALETTES_P[] =
{
    { L"Andy P", 0x38b522, 0x38b542, indexKOFSprites_02UM_Andy, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Andy_PALETTES_K[] =
{
    { L"Andy K", 0x38b722, 0x38b742, indexKOFSprites_02UM_Andy, 0x00 },
};

const sDescTreeNode KOF01_A_Andy_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Andy_PALETTES_P, ARRAYSIZE(KOF01_A_Andy_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Andy_PALETTES_K, ARRAYSIZE(KOF01_A_Andy_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Joe_PALETTES_P[] =
{
    { L"Joe P", 0x38b922, 0x38b942, indexKOFSprites_02UM_Joe, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Joe_PALETTES_K[] =
{
    { L"Joe K", 0x38bb22, 0x38bb42, indexKOFSprites_02UM_Joe, 0x00 },
};

const sDescTreeNode KOF01_A_Joe_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Joe_PALETTES_P, ARRAYSIZE(KOF01_A_Joe_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Joe_PALETTES_K, ARRAYSIZE(KOF01_A_Joe_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Mary_PALETTES_P[] =
{
    { L"Mary P", 0x38bd22, 0x38bd42, indexKOFSprites_02UM_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Mary_PALETTES_K[] =
{
    { L"Mary K", 0x38bf22, 0x38bf42, indexKOFSprites_02UM_BlueMary, 0x00 },
};

const sDescTreeNode KOF01_A_Mary_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Mary_PALETTES_P, ARRAYSIZE(KOF01_A_Mary_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Mary_PALETTES_K, ARRAYSIZE(KOF01_A_Mary_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Ryo_PALETTES_P[] =
{
    { L"Ryo P", 0x38c122, 0x38c142, indexKOFSprites_02UM_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Ryo_PALETTES_K[] =
{
    { L"Ryo K", 0x38c322, 0x38c342, indexKOFSprites_02UM_Ryo, 0x00 },
};

const sDescTreeNode KOF01_A_Ryo_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Ryo_PALETTES_P, ARRAYSIZE(KOF01_A_Ryo_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Ryo_PALETTES_K, ARRAYSIZE(KOF01_A_Ryo_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Robert_PALETTES_P[] =
{
    { L"Robert P", 0x38c522, 0x38c542, indexKOFSprites_02UM_Robert, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Robert_PALETTES_K[] =
{
    { L"Robert K", 0x38c722, 0x38c742, indexKOFSprites_02UM_Robert, 0x00 },
};

const sDescTreeNode KOF01_A_Robert_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Robert_PALETTES_P, ARRAYSIZE(KOF01_A_Robert_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Robert_PALETTES_K, ARRAYSIZE(KOF01_A_Robert_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Yuri_PALETTES_P[] =
{
    { L"Yuri P", 0x38c922, 0x38c942, indexKOFSprites_02UM_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Yuri_PALETTES_K[] =
{
    { L"Yuri K", 0x38cb22, 0x38cb42, indexKOFSprites_02UM_Yuri, 0x00 },
};

const sDescTreeNode KOF01_A_Yuri_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Yuri_PALETTES_P, ARRAYSIZE(KOF01_A_Yuri_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Yuri_PALETTES_K, ARRAYSIZE(KOF01_A_Yuri_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Takuma_PALETTES_P[] =
{
    { L"Takuma P", 0x38cd22, 0x38cd42, indexKOFSprites_02UM_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Takuma_PALETTES_K[] =
{
    { L"Takuma K", 0x38cf22, 0x38cf42, indexKOFSprites_02UM_Takuma, 0x00 },
};

const sDescTreeNode KOF01_A_Takuma_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Takuma_PALETTES_P, ARRAYSIZE(KOF01_A_Takuma_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Takuma_PALETTES_K, ARRAYSIZE(KOF01_A_Takuma_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_King_PALETTES_P[] =
{
    { L"King P", 0x38d122, 0x38d142, indexKOFSprites_02UM_King, 0x00 },
};

const sGame_PaletteDataset KOF01_A_King_PALETTES_K[] =
{
    { L"King K", 0x38d322, 0x38d342, indexKOFSprites_02UM_King, 0x00 },
};

const sDescTreeNode KOF01_A_King_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_King_PALETTES_P, ARRAYSIZE(KOF01_A_King_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_King_PALETTES_K, ARRAYSIZE(KOF01_A_King_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Mai_PALETTES_P[] =
{
    { L"Mai P", 0x38d522, 0x38d542, indexKOFSprites_02UM_Mai, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Mai_PALETTES_K[] =
{
    { L"Mai K", 0x38d722, 0x38d742, indexKOFSprites_02UM_Mai, 0x00 },
};

const sDescTreeNode KOF01_A_Mai_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Mai_PALETTES_P, ARRAYSIZE(KOF01_A_Mai_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Mai_PALETTES_K, ARRAYSIZE(KOF01_A_Mai_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Hinako_PALETTES_P[] =
{
    { L"Hinako P", 0x38d922, 0x38d942, indexKOFSprites_02UM_Hinako, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Hinako_PALETTES_K[] =
{
    { L"Hinako K", 0x38db22, 0x38db42, indexKOFSprites_02UM_Hinako, 0x00 },
};

const sDescTreeNode KOF01_A_Hinako_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Hinako_PALETTES_P, ARRAYSIZE(KOF01_A_Hinako_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Hinako_PALETTES_K, ARRAYSIZE(KOF01_A_Hinako_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Xiangfei_PALETTES_P[] =
{
    { L"Xiangfei P", 0x38dd22, 0x38dd42, indexKOF01Sprites_Xiangfei, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Xiangfei_PALETTES_K[] =
{
    { L"Xiangfei K", 0x38df22, 0x38df42, indexKOF01Sprites_Xiangfei, 0x00 },
};

const sDescTreeNode KOF01_A_Xiangfei_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Xiangfei_PALETTES_P, ARRAYSIZE(KOF01_A_Xiangfei_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Xiangfei_PALETTES_K, ARRAYSIZE(KOF01_A_Xiangfei_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Kula_PALETTES_P[] =
{
    { L"Kula P", 0x38e122, 0x38e142, indexKOFSprites_02UM_Kula, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Kula_PALETTES_K[] =
{
    { L"Kula K", 0x38e322, 0x38e342, indexKOFSprites_02UM_Kula, 0x00 },
};

const sDescTreeNode KOF01_A_Kula_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Kula_PALETTES_P, ARRAYSIZE(KOF01_A_Kula_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Kula_PALETTES_K, ARRAYSIZE(KOF01_A_Kula_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Foxy_PALETTES_P[] =
{
    { L"Foxy P", 0x38e522, 0x38e542, indexKOF01Sprites_Foxy, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Foxy_PALETTES_K[] =
{
    { L"Foxy K", 0x38e722, 0x38e742, indexKOF01Sprites_Foxy, 0x00 },
};

const sDescTreeNode KOF01_A_Foxy_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Foxy_PALETTES_P, ARRAYSIZE(KOF01_A_Foxy_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Foxy_PALETTES_K, ARRAYSIZE(KOF01_A_Foxy_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_K9999_PALETTES_P[] =
{
    { L"K9999 P", 0x38e922, 0x38e942, indexKOFSprites_02UM_K9999, 0x00 },
};

const sGame_PaletteDataset KOF01_A_K9999_PALETTES_K[] =
{
    { L"K9999 K", 0x38eb22, 0x38eb42, indexKOFSprites_02UM_K9999, 0x00 },
};

const sDescTreeNode KOF01_A_K9999_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_K9999_PALETTES_P, ARRAYSIZE(KOF01_A_K9999_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_K9999_PALETTES_K, ARRAYSIZE(KOF01_A_K9999_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Angel_PALETTES_P[] =
{
    { L"Angel P", 0x38ed22, 0x38ed42, indexKOFSprites_02UM_Angel, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Angel_PALETTES_K[] =
{
    { L"Angel K", 0x38ef22, 0x38ef42, indexKOFSprites_02UM_Angel, 0x00 },
};

const sDescTreeNode KOF01_A_Angel_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Angel_PALETTES_P, ARRAYSIZE(KOF01_A_Angel_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Angel_PALETTES_K, ARRAYSIZE(KOF01_A_Angel_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Athena_PALETTES_P[] =
{
    { L"Athena P", 0x38f122, 0x38f142, indexKOF01Sprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Athena_PALETTES_K[] =
{
    { L"Athena K", 0x38f322, 0x38f342, indexKOF01Sprites_Athena, 0x00 },
};

const sDescTreeNode KOF01_A_Athena_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Athena_PALETTES_P, ARRAYSIZE(KOF01_A_Athena_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Athena_PALETTES_K, ARRAYSIZE(KOF01_A_Athena_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Kensou_PALETTES_P[] =
{
    { L"Kensou P", 0x38f522, 0x38f542, indexKOFSprites_02UM_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Kensou_PALETTES_K[] =
{
    { L"Kensou K", 0x38f722, 0x38f742, indexKOFSprites_02UM_Kensou, 0x00 },
};

const sDescTreeNode KOF01_A_Kensou_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Kensou_PALETTES_P, ARRAYSIZE(KOF01_A_Kensou_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Kensou_PALETTES_K, ARRAYSIZE(KOF01_A_Kensou_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Chin_PALETTES_P[] =
{
    { L"Chin P", 0x38f922, 0x38f942, indexKOFSprites_02UM_Chin, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Chin_PALETTES_K[] =
{
    { L"Chin K", 0x38fb22, 0x38fb42, indexKOFSprites_02UM_Chin, 0x00 },
};

const sDescTreeNode KOF01_A_Chin_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Chin_PALETTES_P, ARRAYSIZE(KOF01_A_Chin_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Chin_PALETTES_K, ARRAYSIZE(KOF01_A_Chin_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Bao_PALETTES_P[] =
{
    { L"Bao P", 0x38fd22, 0x38fd42, indexKOFSprites_02UM_Bao, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Bao_PALETTES_K[] =
{
    { L"Bao K", 0x38ff22, 0x38ff42, indexKOFSprites_02UM_Bao, 0x00 },
};

const sDescTreeNode KOF01_A_Bao_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Bao_PALETTES_P, ARRAYSIZE(KOF01_A_Bao_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Bao_PALETTES_K, ARRAYSIZE(KOF01_A_Bao_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Kim_PALETTES_P[] =
{
    { L"Kim P", 0x390122, 0x390142, indexKOFSprites_02UM_Kim, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Kim_PALETTES_K[] =
{
    { L"Kim K", 0x390322, 0x390342, indexKOFSprites_02UM_Kim, 0x00 },
};

const sDescTreeNode KOF01_A_Kim_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Kim_PALETTES_P, ARRAYSIZE(KOF01_A_Kim_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Kim_PALETTES_K, ARRAYSIZE(KOF01_A_Kim_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Chang_PALETTES_P[] =
{
    { L"Chang P", 0x390522, 0x390542, indexKOFSprites_02UM_Chang, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Chang_PALETTES_K[] =
{
    { L"Chang K", 0x390722, 0x390742, indexKOFSprites_02UM_Chang, 0x00 },
};

const sDescTreeNode KOF01_A_Chang_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Chang_PALETTES_P, ARRAYSIZE(KOF01_A_Chang_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Chang_PALETTES_K, ARRAYSIZE(KOF01_A_Chang_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Choi_PALETTES_P[] =
{
    { L"Choi P", 0x390922, 0x390942, indexKOFSprites_02UM_Choi, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Choi_PALETTES_K[] =
{
    { L"Choi K", 0x390b22, 0x390b42, indexKOFSprites_02UM_Choi, 0x00 },
};

const sDescTreeNode KOF01_A_Choi_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Choi_PALETTES_P, ARRAYSIZE(KOF01_A_Choi_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Choi_PALETTES_K, ARRAYSIZE(KOF01_A_Choi_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_MayLee_PALETTES_P[] =
{
    { L"May Lee P", 0x390d22, 0x390d42, indexKOFSprites_02UM_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF01_A_MayLee_PALETTES_K[] =
{
    { L"May Lee K", 0x390f22, 0x390f42, indexKOFSprites_02UM_MayLee, 0x00 },
};

const sDescTreeNode KOF01_A_MayLee_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_MayLee_PALETTES_P, ARRAYSIZE(KOF01_A_MayLee_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_MayLee_PALETTES_K, ARRAYSIZE(KOF01_A_MayLee_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Zero_PALETTES_P[] =
{
    { L"Zero P", 0x391122, 0x391142, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"Zero Assist A P", 0x391922, 0x391942, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"Zero Assist B P", 0x391d22, 0x391d42, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"Zero Assist C P: Striker Lon", 0x392122, 0x392142, indexKOFSprites_02UM_ZeroOG, 0x1b },
};

const sGame_PaletteDataset KOF01_A_Zero_PALETTES_K[] =
{
    { L"Zero K", 0x391322, 0x391342, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"Zero Assist A K", 0x391b22, 0x391b42, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"Zero Assist B K", 0x391f22, 0x391f42, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"Zero Assist C K: Striker Lon", 0x392322, 0x392342, indexKOFSprites_02UM_ZeroOG, 0x1b },
};

const sDescTreeNode KOF01_A_Zero_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Zero_PALETTES_P, ARRAYSIZE(KOF01_A_Zero_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Zero_PALETTES_K, ARRAYSIZE(KOF01_A_Zero_PALETTES_K) },
};

const sGame_PaletteDataset KOF01_A_Igniz_PALETTES_P[] =
{
    { L"Igniz P", 0x391522, 0x391542, indexKOFSprites_02UM_Igniz, 0x00 },
};

const sGame_PaletteDataset KOF01_A_Igniz_PALETTES_K[] =
{
    { L"Igniz K", 0x391722, 0x391742, indexKOFSprites_02UM_Igniz, 0x00 },
};

const sDescTreeNode KOF01_A_Igniz_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)KOF01_A_Igniz_PALETTES_P, ARRAYSIZE(KOF01_A_Igniz_PALETTES_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)KOF01_A_Igniz_PALETTES_K, ARRAYSIZE(KOF01_A_Igniz_PALETTES_K) },
};

const sDescTreeNode KOF01_A_UNITS[] =
{
    { L"K'", DESC_NODETYPE_TREE, (void*)KOF01_A_K_COLLECTION, ARRAYSIZE(KOF01_A_K_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMA_COLLECTION, ARRAYSIZE(KOF01_A_MAXIMA_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOF01_A_Whip_COLLECTION, ARRAYSIZE(KOF01_A_Whip_COLLECTION) },
    { L"Lin", DESC_NODETYPE_TREE, (void*)KOF01_A_Lin_COLLECTION, ARRAYSIZE(KOF01_A_Lin_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF01_A_Kyo_COLLECTION, ARRAYSIZE(KOF01_A_Kyo_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF01_A_Benimaru_COLLECTION, ARRAYSIZE(KOF01_A_Benimaru_COLLECTION) },
    { L"Goro Daimon", DESC_NODETYPE_TREE, (void*)KOF01_A_Goro_COLLECTION, ARRAYSIZE(KOF01_A_Goro_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF01_A_Shingo_COLLECTION, ARRAYSIZE(KOF01_A_Shingo_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF01_A_Iori_COLLECTION, ARRAYSIZE(KOF01_A_Iori_COLLECTION) },
    { L"Vanessa", DESC_NODETYPE_TREE, (void*)KOF01_A_Vanessa_COLLECTION, ARRAYSIZE(KOF01_A_Vanessa_COLLECTION) },
    { L"Seth", DESC_NODETYPE_TREE, (void*)KOF01_A_Seth_COLLECTION, ARRAYSIZE(KOF01_A_Seth_COLLECTION) },
    { L"Ramon", DESC_NODETYPE_TREE, (void*)KOF01_A_Ramon_COLLECTION, ARRAYSIZE(KOF01_A_Ramon_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF01_A_Leona_COLLECTION, ARRAYSIZE(KOF01_A_Leona_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF01_A_Ralf_COLLECTION, ARRAYSIZE(KOF01_A_Ralf_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF01_A_Clark_COLLECTION, ARRAYSIZE(KOF01_A_Clark_COLLECTION) },
    { L"Heidern", DESC_NODETYPE_TREE, (void*)KOF01_A_Heidern_COLLECTION, ARRAYSIZE(KOF01_A_Heidern_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF01_A_Terry_COLLECTION, ARRAYSIZE(KOF01_A_Terry_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF01_A_Andy_COLLECTION, ARRAYSIZE(KOF01_A_Andy_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF01_A_Joe_COLLECTION, ARRAYSIZE(KOF01_A_Joe_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF01_A_Mary_COLLECTION, ARRAYSIZE(KOF01_A_Mary_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF01_A_Ryo_COLLECTION, ARRAYSIZE(KOF01_A_Ryo_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF01_A_Robert_COLLECTION, ARRAYSIZE(KOF01_A_Robert_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF01_A_Yuri_COLLECTION, ARRAYSIZE(KOF01_A_Yuri_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF01_A_Takuma_COLLECTION, ARRAYSIZE(KOF01_A_Takuma_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF01_A_King_COLLECTION, ARRAYSIZE(KOF01_A_King_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF01_A_Mai_COLLECTION, ARRAYSIZE(KOF01_A_Mai_COLLECTION) },
    { L"Hinako", DESC_NODETYPE_TREE, (void*)KOF01_A_Hinako_COLLECTION, ARRAYSIZE(KOF01_A_Hinako_COLLECTION) },
    { L"Xiangfei", DESC_NODETYPE_TREE, (void*)KOF01_A_Xiangfei_COLLECTION, ARRAYSIZE(KOF01_A_Xiangfei_COLLECTION) },
    { L"Kula", DESC_NODETYPE_TREE, (void*)KOF01_A_Kula_COLLECTION, ARRAYSIZE(KOF01_A_Kula_COLLECTION) },
    { L"Foxy", DESC_NODETYPE_TREE, (void*)KOF01_A_Foxy_COLLECTION, ARRAYSIZE(KOF01_A_Foxy_COLLECTION) },
    { L"K9999", DESC_NODETYPE_TREE, (void*)KOF01_A_K9999_COLLECTION, ARRAYSIZE(KOF01_A_K9999_COLLECTION) },
    { L"Angel", DESC_NODETYPE_TREE, (void*)KOF01_A_Angel_COLLECTION, ARRAYSIZE(KOF01_A_Angel_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF01_A_Athena_COLLECTION, ARRAYSIZE(KOF01_A_Athena_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF01_A_Kensou_COLLECTION, ARRAYSIZE(KOF01_A_Kensou_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF01_A_Chin_COLLECTION, ARRAYSIZE(KOF01_A_Chin_COLLECTION) },
    { L"Bao", DESC_NODETYPE_TREE, (void*)KOF01_A_Bao_COLLECTION, ARRAYSIZE(KOF01_A_Bao_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF01_A_Kim_COLLECTION, ARRAYSIZE(KOF01_A_Kim_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF01_A_Chang_COLLECTION, ARRAYSIZE(KOF01_A_Chang_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF01_A_Choi_COLLECTION, ARRAYSIZE(KOF01_A_Choi_COLLECTION) },
    { L"May Lee", DESC_NODETYPE_TREE, (void*)KOF01_A_MayLee_COLLECTION, ARRAYSIZE(KOF01_A_MayLee_COLLECTION) },
    { L"Zero", DESC_NODETYPE_TREE, (void*)KOF01_A_Zero_COLLECTION, ARRAYSIZE(KOF01_A_Zero_COLLECTION) },
    { L"Igniz", DESC_NODETYPE_TREE, (void*)KOF01_A_Igniz_COLLECTION, ARRAYSIZE(KOF01_A_Igniz_COLLECTION) },
};

constexpr auto KOF01_A_NUMUNIT = ARRAYSIZE(KOF01_A_UNITS);
#define KOF01_A_EXTRALOC KOF01_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF01_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

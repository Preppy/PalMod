#pragma once

const UINT16 DDRAGON_A_IMGIDS_USED[] =
{
    indexDDragonSprites_Abobo,              // 0x22,
    indexDDragonSprites_Amon,               // 0x23,
    indexDDragonSprites_Billy,              // 0x24,
    indexDDragonSprites_Burnov,             // 0x25,
    indexDDragonSprites_ChengFu,            // 0x26,
    indexDDragonSprites_Duke,               // 0x27,
    indexDDragonSprites_Dulton,             // 0x28,
    indexDDragonSprites_Eddie,              // 0x29,
    indexDDragonSprites_Jimmy,              // 0x2A,
    indexDDragonSprites_Marian,             // 0x2B,
    indexDDragonSprites_Rebecca,            // 0x2C,
    indexDDragonSprites_Shuko,              // 0x2D,
};

// CHARACTERS
const sGame_PaletteDataset DOUBLEDRAGON_A_BILLY_A[] =
{
    { L"Billy A", 0x11c240, 0x11c260, indexDDragonSprites_Billy, 0x00 },
    { L"Dragon Billy A", 0x11c200, 0x11c220, indexDDragonSprites_Billy, 0x80 },
    { L"Billy Select Portrait/Icon A", 0x110bd0, 0x110bf0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BILLY_B[] =
{
    { L"Billy B", 0x11c440, 0x11c460, indexDDragonSprites_Billy, 0x00 },
    { L"Dragon Billy B", 0x11c400, 0x11c420, indexDDragonSprites_Billy, 0x80 },
    { L"Billy Select Portrait/Icon B", 0x110d50, 0x110d70 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BILLY_C[] =
{
    { L"Billy C", 0x11ca40, 0x11ca60, indexDDragonSprites_Billy, 0x00 },
    { L"Dragon Billy C", 0x11ca00, 0x11ca20, indexDDragonSprites_Billy, 0x80 },
    { L"Billy Select Portrait/Icon C", 0x110ed0, 0x110ef0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BILLY_D[] =
{
    { L"Billy D", 0x11cc40, 0x11cc60, indexDDragonSprites_Billy, 0x00 },
    { L"Dragon Billy D", 0x11cc00, 0x11cc20, indexDDragonSprites_Billy, 0x80 },
    { L"Billy Select Portrait/Icon D", 0x111050, 0x111070 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_JIMMY_A[] =
{
    { L"Jimmy A", 0x11c260, 0x11c280, indexDDragonSprites_Jimmy, 0x00 },
    { L"Dragon Jimmy A", 0x11c220, 0x11c240, indexDDragonSprites_Jimmy, 0x08 },
    { L"Jimmy Select Portrait/Icon A", 0x110bf0, 0x110c10 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_JIMMY_B[] =
{
    { L"Jimmy B", 0x11c460, 0x11c480, indexDDragonSprites_Jimmy, 0x00 },
    { L"Dragon Jimmy B", 0x11c420, 0x11c440, indexDDragonSprites_Jimmy, 0x08 },
    { L"Jimmy Select Portrait/Icon B", 0x110d70, 0x110d90 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_JIMMY_C[] =
{
    { L"Jimmy C", 0x11ca60, 0x11ca80, indexDDragonSprites_Jimmy, 0x00 },
    { L"Dragon Jimmy C", 0x11ca20, 0x11ca40, indexDDragonSprites_Jimmy, 0x08 },
    { L"Jimmy Select Portrait/Icon C", 0x110ef0, 0x110f10 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_JIMMY_D[] =
{
    { L"Jimmy D", 0x11cc60, 0x11cc80, indexDDragonSprites_Jimmy, 0x00 },
    { L"Dragon Jimmy D", 0x11cc20, 0x11cc40, indexDDragonSprites_Jimmy, 0x08 },
    { L"Jimmy Select Portrait/Icon D", 0x111070, 0x111090 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_MARIAN_A[] =
{
    { L"Marian A", 0x11c280, 0x11c2a0, indexDDragonSprites_Marian, 0x00 },
    { L"Marian Select Portrait/Icon A", 0x110c10, 0x110c30 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_MARIAN_B[] =
{
    { L"Marian B", 0x11c480, 0x11c4a0, indexDDragonSprites_Marian, 0x00 },
    { L"Marian Select Portrait/Icon B", 0x110d90, 0x110db0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_MARIAN_C[] =
{
    { L"Marian C", 0x11ca80, 0x11caa0, indexDDragonSprites_Marian, 0x00 },
    { L"Marian Select Portrait/Icon C", 0x110f10, 0x110f30 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_MARIAN_D[] =
{
    { L"Marian D", 0x11cc80, 0x11cca0, indexDDragonSprites_Marian, 0x00 },
    { L"Marian Select Portrait/Icon D", 0x111090, 0x1110b0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_ABOBO_A[] =
{
    { L"Abobo A", 0x11c2a0, 0x11c2c0, indexDDragonSprites_Abobo, 0x00 },
    { L"Abobo Select Portrait/Icon A", 0x110c30, 0x110c50 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_ABOBO_B[] =
{
    { L"Abobo B", 0x11c4a0, 0x11c4c0, indexDDragonSprites_Abobo, 0x00 },
    { L"Abobo Select Portrait/Icon B", 0x110db0, 0x110dd0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_ABOBO_C[] =
{
    { L"Abobo C", 0x11caa0, 0x11cac0, indexDDragonSprites_Abobo, 0x00 },
    { L"Abobo Select Portrait/Icon C", 0x110f30, 0x110f50 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_ABOBO_D[] =
{
    { L"Abobo D", 0x11cca0, 0x11ccc0, indexDDragonSprites_Abobo, 0x00 },
    { L"Abobo Select Portrait/Icon D", 0x1110b0, 0x1110d0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_REBECCA_A[] =
{
    { L"Rebecca A", 0x11c2c0, 0x11c2e0, indexDDragonSprites_Rebecca, 0x00 },
    { L"Rebecca Select Portrait/Icon A", 0x110c50, 0x110c70 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_REBECCA_B[] =
{
    { L"Rebecca B", 0x11c4c0, 0x11c4e0, indexDDragonSprites_Rebecca, 0x00 },
    { L"Rebecca Select Portrait/Icon B", 0x110dd0, 0x110df0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_REBECCA_C[] =
{
    { L"Rebecca C", 0x11cac0, 0x11cae0, indexDDragonSprites_Rebecca, 0x00 },
    { L"Rebecca Select Portrait/Icon C", 0x110f50, 0x110f70 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_REBECCA_D[] =
{
    { L"Rebecca D", 0x11ccc0, 0x11cce0, indexDDragonSprites_Rebecca, 0x00 },
    { L"Rebecca Select Portrait/Icon D", 0x1110d0, 0x1110f0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_AMON_A[] =
{
    { L"Amon A", 0x11c2e0, 0x11c300, indexDDragonSprites_Amon, 0x00 },
    { L"Amon Select Portrait/Icon A", 0x110c70, 0x110c90 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_AMON_B[] =
{
    { L"Amon B", 0x11c4e0, 0x11c500, indexDDragonSprites_Amon, 0x00 },
    { L"Amon Select Portrait/Icon B", 0x110df0, 0x110e10 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_AMON_C[] =
{
    { L"Amon C", 0x11cae0, 0x11cb00, indexDDragonSprites_Amon, 0x00 },
    { L"Amon Select Portrait/Icon C", 0x110f70, 0x110f90 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_AMON_D[] =
{
    { L"Amon D", 0x11cce0, 0x11cd00, indexDDragonSprites_Amon, 0x00 },
    { L"Amon Select Portrait/Icon D", 0x1110f0, 0x111110 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_CHENGFU_A[] =
{
    { L"Cheng-Fu A", 0x11c300, 0x11c320, indexDDragonSprites_ChengFu, 0x00 },
    { L"Cheng-Fu Select Portrait/Icon A", 0x110c90, 0x110cb0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_CHENGFU_B[] =
{
    { L"Cheng-Fu B", 0x11c500, 0x11c520, indexDDragonSprites_ChengFu, 0x00 },
    { L"Cheng-Fu Select Portrait/Icon B", 0x110e10, 0x110e30 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_CHENGFU_C[] =
{
    { L"Cheng-Fu C", 0x11cb00, 0x11cb20, indexDDragonSprites_ChengFu, 0x00 },
    { L"Cheng-Fu Select Portrait/Icon C", 0x110f90, 0x110fb0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_CHENGFU_D[] =
{
    { L"Cheng-Fu D", 0x11cd00, 0x11cd20, indexDDragonSprites_ChengFu, 0x00 },
    { L"Cheng-Fu Select Portrait/Icon D", 0x111110, 0x111130 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DUKE_A[] =
{
    { L"Duke A", 0x11c320, 0x11c340, indexDDragonSprites_Duke, 0x00 },
    { L"Duke Select Portrait/Icon A", 0x110cb0, 0x110cd0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DUKE_B[] =
{
    { L"Duke B", 0x11c520, 0x11c540, indexDDragonSprites_Duke, 0x00 },
    { L"Duke Select Portrait/Icon B", 0x110e30, 0x110e50 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DUKE_C[] =
{
    { L"Duke C", 0x11cb20, 0x11cb40, indexDDragonSprites_Duke, 0x00 },
    { L"Duke Select Portrait/Icon C", 0x110fb0, 0x110fd0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DUKE_D[] =
{
    { L"Duke D", 0x11cd20, 0x11cd40, indexDDragonSprites_Duke, 0x00 },
    { L"Duke Select Portrait/Icon D", 0x111130, 0x111150 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_SHUKO_A[] =
{
    { L"Shuko A", 0x11c340, 0x11c360, indexDDragonSprites_Shuko, 0x00 },
    { L"Shuko Select Portrait/Icon A", 0x110cd0, 0x110cf0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_SHUKO_B[] =
{
    { L"Shuko B", 0x11c540, 0x11c560, indexDDragonSprites_Shuko, 0x00 },
    { L"Shuko Select Portrait/Icon B", 0x110e50, 0x110e70 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_SHUKO_C[] =
{
    { L"Shuko C", 0x11cb40, 0x11cb60, indexDDragonSprites_Shuko, 0x00 },
    { L"Shuko Select Portrait/Icon C", 0x110fd0, 0x110ff0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_SHUKO_D[] =
{
    { L"Shuko D", 0x11cd40, 0x11cd60, indexDDragonSprites_Shuko, 0x00 },
    { L"Shuko Select Portrait/Icon D", 0x111150, 0x111170 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_EDDIE_A[] =
{
    { L"Eddie A", 0x11c360, 0x11c380, indexDDragonSprites_Eddie, 0x00 },
    { L"Eddie Intro A", 0x11c3c0, 0x11c3e0 },
    { L"Eddie Select Portrait/Icon A", 0x110cf0, 0x110d10 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_EDDIE_B[] =
{
    { L"Eddie B", 0x11c560, 0x11c580, indexDDragonSprites_Eddie, 0x00 },
    { L"Eddie Intro B", 0x11c5c0, 0x11c5e0 },
    { L"Eddie Select Portrait/Icon B", 0x110e70, 0x110e90 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_EDDIE_C[] =
{
    { L"Eddie C", 0x11cb60, 0x11cb80, indexDDragonSprites_Eddie, 0x00 },
    { L"Eddie Intro C", 0x11cbc0, 0x11cbe0 },
    { L"Eddie Select Portrait/Icon C", 0x110ff0, 0x111010 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_EDDIE_D[] =
{
    { L"Eddie D", 0x11cd60, 0x11cd80, indexDDragonSprites_Eddie, 0x00 },
    { L"Eddie Intro D", 0x11cdc0, 0x11cde0 },
    { L"Eddie Select Portrait/Icon D", 0x111170, 0x111190 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DULTON_A[] =
{
    { L"Dulton A", 0x11c380, 0x11c3a0, indexDDragonSprites_Dulton, 0x00 },
    { L"Dulton Intro A", 0x11c3e0, 0x11c400 },
    { L"Dulton Select Portrait/Icon A", 0x110d10, 0x110d30 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DULTON_B[] =
{
    { L"Dulton B", 0x11c580, 0x11c5a0, indexDDragonSprites_Dulton, 0x00 },
    { L"Dulton Intro B", 0x11c5e0, 0x11c600 },
    { L"Dulton Select Portrait/Icon B", 0x110e90, 0x110eb0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DULTON_C[] =
{
    { L"Dulton C", 0x11cb80, 0x11cba0, indexDDragonSprites_Dulton, 0x00 },
    { L"Dulton Intro C", 0x11cbe0, 0x11cc00 },
    { L"Dulton Select Portrait/Icon C", 0x111010, 0x111030 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_DULTON_D[] =
{
    { L"Dulton D", 0x11cd80, 0x11cda0, indexDDragonSprites_Dulton, 0x00 },
    { L"Dulton Intro D", 0x11cde0, 0x11ce00 },
    { L"Dulton Select Portrait/Icon D", 0x111190, 0x1111b0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BURNOV_A[] =
{
    { L"Burnov A", 0x11c3a0, 0x11c3c0, indexDDragonSprites_Burnov, 0x00 },
    { L"Burnov Select Portrait/Icon A", 0x110d30, 0x110d50 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BURNOV_B[] =
{
    { L"Burnov B", 0x11c5a0, 0x11c5c0, indexDDragonSprites_Burnov, 0x00 },
    { L"Burnov Select Portrait/Icon B", 0x110eb0, 0x110ed0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BURNOV_C[] =
{
    { L"Burnov C", 0x11cba0, 0x11cbc0, indexDDragonSprites_Burnov, 0x00 },
    { L"Burnov Select Portrait/Icon C", 0x111030, 0x111050 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BURNOV_D[] =
{
    { L"Burnov D", 0x11cda0, 0x11cdc0, indexDDragonSprites_Burnov, 0x00 },
    { L"Burnov Select Portrait/Icon D", 0x1111b0, 0x1111d0 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BONUS_Hud[] =
{
    { L"P1 Lifebar", 0x11c000, 0x11c020 },
    { L"P2 Lifebar", 0x11c020, 0x11c040 },
    { L"Hud 1/2", 0x11c040, 0x11c060 },
    { L"Hud 2/2", 0x11c060, 0x11c080 },
    { L"Timer 1/2", 0x11c0c0, 0x11c0e0 },
    { L"Timer 2/2", 0x11c0e0, 0x11c100 },
    { L"Low Timer", 0x11c0a0, 0x11c0c0 },
    { L"Hud P1 Orb", 0x11c080, 0x11c0a0 },
    { L"Hud P2 Orb", 0x11c140, 0x11c160 },

    { L"Hits/Score Text", 0x11c860, 0x11c880 },
    { L"Win Board", 0x11c880, 0x11c8a0 },
    { L"Various Effects", 0x11d000, 0x11d080 },
};

const sGame_PaletteDataset DOUBLEDRAGON_A_BONUS_MainMenu[] =
{
    { L"Continue Text", 0x11c100, 0x11c120 },
    { L"Insert Coin Text", 0x11c120, 0x11c140 },
    { L"White Button", 0x1111d0, 0x1111f0 },
    { L"Mini A Button", 0x11c1c0, 0x11c1e0 },
    { L"Screen Text 1/Mini B Button", 0x11c180, 0x11c1a0 },
    { L"Score Text/Mini C Button", 0x11c160, 0x11c180 },
    { L"Screen Text 2", 0x11c1a0, 0x11c1c0 },

    { L"Select Names Text", 0x11c820, 0x11c840 },
    { L"States Board", 0x11c800, 0x11c820 },
    { L"Double Dragon Logo", 0x11c8a0, 0x11c900 },
    { L"Tutorial Joystick", 0x11c920, 0x11c940 },
    { L"Tutorial A Button", 0x11c940, 0x11c960 },
    { L"Tutorial B Button", 0x11c960, 0x11c980 },
    { L"Tutorial C Button", 0x11c980, 0x11c9a0 },
    { L"Tutorial D Button", 0x11c9a0, 0x11c9c0 },
    { L"1P/2P Select Cursor", 0x11c9c0, 0x11c9e0 },
};

const sDescTreeNode DOUBLEDRAGON_A_BILLY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BILLY_A, ARRAYSIZE(DOUBLEDRAGON_A_BILLY_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BILLY_B, ARRAYSIZE(DOUBLEDRAGON_A_BILLY_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BILLY_C, ARRAYSIZE(DOUBLEDRAGON_A_BILLY_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BILLY_D, ARRAYSIZE(DOUBLEDRAGON_A_BILLY_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_JIMMY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_JIMMY_A, ARRAYSIZE(DOUBLEDRAGON_A_JIMMY_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_JIMMY_B, ARRAYSIZE(DOUBLEDRAGON_A_JIMMY_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_JIMMY_C, ARRAYSIZE(DOUBLEDRAGON_A_JIMMY_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_JIMMY_D, ARRAYSIZE(DOUBLEDRAGON_A_JIMMY_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_MARIAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_MARIAN_A, ARRAYSIZE(DOUBLEDRAGON_A_MARIAN_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_MARIAN_B, ARRAYSIZE(DOUBLEDRAGON_A_MARIAN_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_MARIAN_C, ARRAYSIZE(DOUBLEDRAGON_A_MARIAN_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_MARIAN_D, ARRAYSIZE(DOUBLEDRAGON_A_MARIAN_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_ABOBO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_ABOBO_A, ARRAYSIZE(DOUBLEDRAGON_A_ABOBO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_ABOBO_B, ARRAYSIZE(DOUBLEDRAGON_A_ABOBO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_ABOBO_C, ARRAYSIZE(DOUBLEDRAGON_A_ABOBO_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_ABOBO_D, ARRAYSIZE(DOUBLEDRAGON_A_ABOBO_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_REBECCA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_REBECCA_A, ARRAYSIZE(DOUBLEDRAGON_A_REBECCA_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_REBECCA_B, ARRAYSIZE(DOUBLEDRAGON_A_REBECCA_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_REBECCA_C, ARRAYSIZE(DOUBLEDRAGON_A_REBECCA_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_REBECCA_D, ARRAYSIZE(DOUBLEDRAGON_A_REBECCA_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_AMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_AMON_A, ARRAYSIZE(DOUBLEDRAGON_A_AMON_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_AMON_B, ARRAYSIZE(DOUBLEDRAGON_A_AMON_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_AMON_C, ARRAYSIZE(DOUBLEDRAGON_A_AMON_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_AMON_D, ARRAYSIZE(DOUBLEDRAGON_A_AMON_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_CHENGFU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_CHENGFU_A, ARRAYSIZE(DOUBLEDRAGON_A_CHENGFU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_CHENGFU_B, ARRAYSIZE(DOUBLEDRAGON_A_CHENGFU_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_CHENGFU_C, ARRAYSIZE(DOUBLEDRAGON_A_CHENGFU_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_CHENGFU_D, ARRAYSIZE(DOUBLEDRAGON_A_CHENGFU_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_DUKE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DUKE_A, ARRAYSIZE(DOUBLEDRAGON_A_DUKE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DUKE_B, ARRAYSIZE(DOUBLEDRAGON_A_DUKE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DUKE_C, ARRAYSIZE(DOUBLEDRAGON_A_DUKE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DUKE_D, ARRAYSIZE(DOUBLEDRAGON_A_DUKE_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_SHUKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_SHUKO_A, ARRAYSIZE(DOUBLEDRAGON_A_SHUKO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_SHUKO_B, ARRAYSIZE(DOUBLEDRAGON_A_SHUKO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_SHUKO_C, ARRAYSIZE(DOUBLEDRAGON_A_SHUKO_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_SHUKO_D, ARRAYSIZE(DOUBLEDRAGON_A_SHUKO_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_EDDIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_EDDIE_A, ARRAYSIZE(DOUBLEDRAGON_A_EDDIE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_EDDIE_B, ARRAYSIZE(DOUBLEDRAGON_A_EDDIE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_EDDIE_C, ARRAYSIZE(DOUBLEDRAGON_A_EDDIE_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_EDDIE_D, ARRAYSIZE(DOUBLEDRAGON_A_EDDIE_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_DULTON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DULTON_A, ARRAYSIZE(DOUBLEDRAGON_A_DULTON_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DULTON_B, ARRAYSIZE(DOUBLEDRAGON_A_DULTON_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DULTON_C, ARRAYSIZE(DOUBLEDRAGON_A_DULTON_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DULTON_D, ARRAYSIZE(DOUBLEDRAGON_A_DULTON_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_BURNOV_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BURNOV_A, ARRAYSIZE(DOUBLEDRAGON_A_BURNOV_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BURNOV_B, ARRAYSIZE(DOUBLEDRAGON_A_BURNOV_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BURNOV_C, ARRAYSIZE(DOUBLEDRAGON_A_BURNOV_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BURNOV_D, ARRAYSIZE(DOUBLEDRAGON_A_BURNOV_D) },
};

const sDescTreeNode DOUBLEDRAGON_A_BONUS_COLLECTION[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BONUS_Hud, ARRAYSIZE(DOUBLEDRAGON_A_BONUS_Hud) },
    { L"Main Menu", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BONUS_MainMenu, ARRAYSIZE(DOUBLEDRAGON_A_BONUS_MainMenu) }, 
};

const sDescTreeNode DOUBLEDRAGON_A_UNITS[] =
{
    { L"Billy", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BILLY_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_BILLY_COLLECTION) },
    { L"Jimmy", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_JIMMY_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_JIMMY_COLLECTION) },
    { L"Marian", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_MARIAN_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_MARIAN_COLLECTION) },
    { L"Abobo", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_ABOBO_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_ABOBO_COLLECTION) },
    { L"Rebecca", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_REBECCA_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_REBECCA_COLLECTION) },
    { L"Amon", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_AMON_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_AMON_COLLECTION) },
    { L"Cheng-Fu", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_CHENGFU_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_CHENGFU_COLLECTION) },
    { L"Duke", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DUKE_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_DUKE_COLLECTION) },
    { L"Shuko", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_SHUKO_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_SHUKO_COLLECTION) },
    { L"Eddie", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_EDDIE_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_EDDIE_COLLECTION) },
    { L"Dulton", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_DULTON_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_DULTON_COLLECTION) },
    { L"Burnov", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BURNOV_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_BURNOV_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)DOUBLEDRAGON_A_BONUS_COLLECTION, ARRAYSIZE(DOUBLEDRAGON_A_BONUS_COLLECTION) },
};

constexpr auto DOUBLEDRAGON_A_NUMUNIT = ARRAYSIZE(DOUBLEDRAGON_A_UNITS);
#define DOUBLEDRAGON_A_EXTRALOC DOUBLEDRAGON_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef DOUBLEDRAGON_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

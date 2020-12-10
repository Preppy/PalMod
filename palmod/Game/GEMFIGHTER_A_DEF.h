#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of GEMFIGHTER_A_RYU_PALETTES_A. 
// * Update every array using GEMFIGHTER_A_NUMUNITS below
// That should be it.  Good luck.

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_A[] =
{
    { L"Ryu A", 0x99e6, 0x9a06, indexCPS2_SPF_Ryu, 0x00 },
    { L"Ryu Portrait A", 0xc226, 0xc286 },
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_B[] =
{
    { L"Ryu B", 0x9a86, 0x9aa6, indexCPS2_SPF_Ryu, 0x00 },
    { L"Ryu Portrait B", 0xc286, 0xc2e6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_C[] =
{
    { L"Ryu C", 0x9b26, 0x9b46, indexCPS2_SPF_Ryu, 0x00 },
    { L"Ryu Portrait C", 0xc2e6, 0xc346 },
};

const sGame_PaletteDataset GEMFIGHTER_A_RYU_PALETTES_X3[] =
{
    { L"Ryu x3", 0x9bc6, 0x9be6, indexCPS2_SPF_Ryu, 0x00 },
    { L"Ryu Portrait x3", 0xc346, 0xc3a6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_A[] =
{
    { L"Ken A", 0x9c66, 0x9c86, indexCPS2_SPF_Ken, 0x00 },
    { L"Ken Portrait A", 0xc406, 0xc466 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_B[] =
{
    { L"Ken B", 0x9d06, 0x9d26, indexCPS2_SPF_Ken, 0x00 },
    { L"Ken Portrait B", 0xc466, 0xc4c6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_C[] =
{
    { L"Ken C", 0x9da6, 0x9dc6, indexCPS2_SPF_Ken, 0x00 },
    { L"Ken Portrait C", 0xc4c6, 0xc526 },
};

const sGame_PaletteDataset GEMFIGHTER_A_KEN_PALETTES_X3[] =
{
    { L"Ken x3", 0x9e46, 0x9e66, indexCPS2_SPF_Ken, 0x00 },
    { L"Ken Portrait x3", 0xc526, 0xc586 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_A[] =
{
    { L"Chun-Li A", 0x9ee6, 0x9f06 },
    { L"Chun-Li A: Kikouken", 0x9f26, 0x9f46 },
    { L"Chun-Li A: Kikou Shou", 0x9f46, 0x9f66 },
#ifdef SHOWSUITS
    { L"Chun-Li A: Jill Suit", 0x2c0ba, 0x2c0da },
    { L"Chun-Li A: Jill Guns", 0x2c13a, 0x2c15a },
    { L"Chun-Li A: Cheerleader Suit", 0x2c1ba, 0x2c1da },
    { L"Chun-Li A: Cheerleader Suit extra", 0x2c23a, 0x2c25a },
    { L"Chun-Li A: Traffic Suit", 0x2c2ba, 0x2c2da },
    { L"Chun-Li A: Traffic Spot", 0x2c33a, 0x2c35a },
    { L"Chun-Li A: Bikers", 0x2c3ba, 0x2c3da },
    { L"Chun-Li A: After-4s Suit", 0x2c43a, 0x2c45a },
    { L"Chun-Li A: 4s Flower thing", 0x2c4ba, 0x2c4da },
#endif
    { L"Chun-Li Portrait A", 0xc586, 0xc5e6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_B[] =
{
    { L"Chun-Li B", 0x9f86, 0x9fa6 },
    { L"Chun-Li B: Kikouken", 0x9fc6, 0x9fe6 },
    { L"Chun-Li B: Kikou Shou", 0x9fe6, 0xa006 },
#ifdef SHOWSUITS
    { L"Chun-Li B: Jill Suit", 0x2c0da, 0x2c0fa },
    { L"Chun-Li B: Jill Guns", 0x2c15a, 0x2c17a },
    { L"Chun-Li B: Cheerleader Suit", 0x2c1da, 0x2c1fa },
    { L"Chun-Li B: Cheerleader Suit extra", 0x2c25a, 0x2c27a },
    { L"Chun-Li B: Traffic Suit", 0x2c2da, 0x2c2fa },
    { L"Chun-Li B: Traffic Spot", 0x2c35a, 0x2c37a },
    { L"Chun-Li B: Bikers", 0x2c3da, 0x2c3fa },
    { L"Chun-Li B: After-4s Suit", 0x2c45a, 0x2c47a },
    { L"Chun-Li B: 4s Flower thing", 0x2c4da, 0x2c4fa },
#endif
    { L"Chun-Li Portrait B", 0xc5e6, 0xc646 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_C[] =
{
    { L"Chun-Li C", 0xa026, 0xa046 },
    { L"Chun-Li C: Kikouken", 0xa066, 0xa086 },
    { L"Chun-Li C: Kikou Shou", 0xa086, 0xa0a6 },
#ifdef SHOWSUITS
    { L"Chun-Li C: Jill Suit", 0x2c0fa, 0x2c11a },
    { L"Chun-Li C: Jill Guns", 0x2c17a, 0x2c19a },
    { L"Chun-Li C: Cheerleader Suit", 0x2c1fa, 0x2c21a },
    { L"Chun-Li C: Cheerleader Suit extra", 0x2c27a, 0x2c29a },
    { L"Chun-Li C: Traffic Suit", 0x2c2fa, 0x2c31a },
    { L"Chun-Li C: Traffic Spot", 0x2c37a, 0x2c39a },
    { L"Chun-Li C: Bikers", 0x2c3fa, 0x2c41a },
    { L"Chun-Li C: After-4s Suit", 0x2c47a, 0x2c49a },
    { L"Chun-Li C: 4s Flower thing", 0x2c4fa, 0x2c51a },
#endif
    { L"Chun-Li Portrait C", 0xc646, 0xc6a6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_CHUNLI_PALETTES_X3[] =
{
    { L"Chun-Li x3", 0xa0c6, 0xa0e6 },
    { L"Chun-Li x3: Kikouken", 0xa106, 0xa126 },
    { L"Chun-Li x3: Kikou Shou", 0xa126, 0xa146 },
#ifdef SHOWSUITS
    { L"Chun-Li x3: Jill Suit", 0x2c11a, 0x2c13a },
    { L"Chun-Li x3: Jill Guns", 0x2c19a, 0x2c1ba },
    { L"Chun-Li x3: Cheerleader Suit", 0x2c21a, 0x2c23a },
    { L"Chun-Li x3: Cheerleader Suit extra", 0x2c29a, 0x2c2ba },
    { L"Chun-Li x3: Traffic Suit", 0x2c31a, 0x2c33a },
    { L"Chun-Li x3: Traffic Spot", 0x2c39a, 0x2c3ba },
    { L"Chun-Li x3: Bikers", 0x2c41a, 0x2c43a },
    { L"Chun-Li x3: After-4s Suit", 0x2c49a, 0x2c4ba },
    { L"Chun-Li x3: 4s Flower thing", 0x2c51a, 0x2c53a },
#endif
    { L"Chun-Li Portrait x3", 0xc6a6, 0xc706 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_A[] =
{
    { L"Sakura A", 0xa166, 0xa186 },
    { L"Sakura Portrait A", 0xc706, 0xc766 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_B[] =
{
    { L"Sakura B", 0xa206, 0xa226 },
    { L"Sakura Portrait B", 0xc766, 0xc7c6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_C[] =
{
    { L"Sakura C", 0xa2a6, 0xa2c6 },
    { L"Sakura Portrait C", 0xc7c6, 0xc826 },
};

const sGame_PaletteDataset GEMFIGHTER_A_SAKURA_PALETTES_X3[] =
{
    { L"Sakura x3", 0xa346, 0xa366 },
    { L"Sakura Portrait x3", 0xc826, 0xc886 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_A[] =
{
    { L"Morrigan A", 0xa3e6, 0xa406 },
    { L"Morrigan Portrait A", 0xc886, 0xc8e6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_B[] =
{
    { L"Morrigan B", 0xa486, 0xa4a6 },
    { L"Morrigan Portrait B", 0xc8e6, 0xc946 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_C[] =
{
    { L"Morrigan C", 0xa526, 0xa546 },
    { L"Morrigan Portrait C", 0xc946, 0xc9a6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_MORRIGAN_PALETTES_X3[] =
{
    { L"Morrigan x3", 0xa5c6, 0xa5e6 },
    { L"Morrigan Portrait x3", 0xc9a6, 0xca06 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_A[] =
{
    { L"Hsien-Ko A", 0xa666, 0xa686 },
    { L"Hsien-Ko A: Weapons & Extras", 0xa686, 0xa6a6 },
    { L"Hsien-Ko Portrait A", 0xca06, 0xca66 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_B[] =
{
    { L"Hsien-Ko B", 0xa706, 0xa726 },
    { L"Hsien-Ko B: Weapons & Extras", 0xa726, 0xa746 },
    { L"Hsien-Ko Portrait B", 0xca66, 0xcac6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_C[] =
{
    { L"Hsien-Ko C", 0xa7a6, 0xa7c6 },
    { L"Hsien-Ko C: Weapons & Extras", 0xa7c6, 0xa7e6 },
    { L"Hsien-Ko Portrait C", 0xcac6, 0xcb26 },
};

const sGame_PaletteDataset GEMFIGHTER_A_HSIENKO_PALETTES_X3[] =
{
    { L"Hsien-Ko x3", 0xa846, 0xa866 },
    { L"Hsien-Ko x3: Weapons & Extras", 0xa866, 0xa886 },
    { L"Hsien-Ko Portrait x3", 0xcb26, 0xcb86 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_A[] =
{
    { L"Felicia A", 0xa8e6, 0xa906 },
    { L"Felicia A: Rolling Buckler & Claws", 0xa926, 0xa946 },
    { L"Felicia A: Megaman Shot & Sand Splash", 0xa946, 0xa966 },
    { L"Felicia Portrait A", 0xcb86, 0xcbe6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_B[] =
{
    { L"Felicia B", 0xa986, 0xa9a6 },
    { L"Felicia B: Rolling Buckler & Claws", 0xa9c6, 0xa9e6 },
    { L"Felicia B: Megaman Shot & Sand Splash", 0xa9e6, 0xaa06 },
    { L"Felicia Portrait B", 0xcbe6, 0xcc46 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_C[] =
{
    { L"Felicia C", 0xaa26, 0xaa46 },
    { L"Felicia C: Rolling Buckler & Claws", 0xaa66, 0xaa86 },
    { L"Felicia C: Megaman Shot & Sand Splash", 0xaa86, 0xaaa6 },
    { L"Felicia Portrait C", 0xcc46, 0xcca6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_FELICIA_PALETTES_X3[] =
{
    { L"Felicia x3", 0xaac6, 0xaae6 },
    { L"Felicia x3: Rolling Buckler & Claws", 0xab06, 0xab26 },
    { L"Felicia x3: Megaman Shot & Sand Splash", 0xab26, 0xab46 },
    { L"Felicia Portrait x3", 0xcca6, 0xcd06 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_A[] =
{
    { L"Tessa A", 0xab66, 0xab86 },
    { L"Tessa A: Dragon Attacks", 0xab86, 0xaba6 },
    { L"Tessa A: Broom Attacks", 0xaba6, 0xabc6 },
    { L"Tessa A: Special Effects", 0xabc6, 0xabe6 },
    { L"Tessa Portrait A", 0xcd06, 0xcd66 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_B[] =
{
    { L"Tessa B", 0xac06, 0xac26 },
    { L"Tessa B: Dragon Attacks", 0xac26, 0xac46 },
    { L"Tessa B: Broom Attacks", 0xac46, 0xac66 },
    { L"Tessa B: Special Effects", 0xac66, 0xac86 },
    { L"Tessa Portrait B", 0xcd66, 0xcdc6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_C[] =
{
    { L"Tessa C", 0xaca6, 0xacc6 },
    { L"Tessa C: Dragon Attacks", 0xacc6, 0xace6 },
    { L"Tessa C: Broom Attacks", 0xace6, 0xad06 },
    { L"Tessa C: Special Effects", 0xad06, 0xad26 },
    { L"Tessa Portrait C", 0xcdc6, 0xce26 },
};

const sGame_PaletteDataset GEMFIGHTER_A_TESSA_PALETTES_X3[] =
{
    { L"Tessa x3", 0xad46, 0xad66 },
    { L"Tessa x3: Dragon Attacks", 0xad66, 0xad86 },
    { L"Tessa x3: Broom Attacks", 0xad86, 0xada6 },
    { L"Tessa x3: Special Effects", 0xada6, 0xadc6 },
    { L"Tessa Portrait x3", 0xce26, 0xce86 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_A[] =
{
    { L"Ibuki A", 0xade6, 0xae06 },
    { L"Ibuki A: Extras 1", 0xae26, 0xae46 },
    { L"Ibuki A: Extras 2", 0xae46, 0xae66 },
    { L"Ibuki Portrait A", 0xce86, 0xcee6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_B[] =
{
    { L"Ibuki B", 0xae86, 0xaea6 },
    { L"Ibuki B: Extras 1", 0xaec6, 0xaee6 },
    { L"Ibuki B: Extras 2", 0xaee6, 0xaf06 },
    { L"Ibuki Portrait B", 0xcee6, 0xcf46 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_C[] =
{
    { L"Ibuki C", 0xaf26, 0xaf46 },
    { L"Ibuki C: Extras 1", 0xaf66, 0xaf86 },
    { L"Ibuki C: Extras 2", 0xaf86, 0xafa6 },
    { L"Ibuki Portrait C", 0xcf46, 0xcfa6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_IBUKI_PALETTES_X3[] =
{
    { L"Ibuki x3", 0xafc6, 0xafe6 },
    { L"Ibuki x3: Extras 1", 0xb006, 0xb026 },
    { L"Ibuki x3: Extras 2", 0xb026, 0xb046 },
    { L"Ibuki Portrait x3", 0xcfa6, 0xd006 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_A[] =
{
    { L"Zangief A", 0xb066, 0xb086, indexCPS2_SPF_Zangief, 0x00 },
    { L"Zangief Portrait A", 0xd006, 0xd066 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_B[] =
{
    { L"Zangief B", 0xb106, 0xb126, indexCPS2_SPF_Zangief, 0x00 },
    { L"Zangief Portrait B", 0xd066, 0xd0c6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_C[] =
{
    { L"Zangief C", 0xb1a6, 0xb1c6, indexCPS2_SPF_Zangief, 0x00 },
    { L"Zangief Portrait C", 0xd0c6, 0xd126 },
};

const sGame_PaletteDataset GEMFIGHTER_A_ZANGIEF_PALETTES_X3[] =
{
    { L"Zangief x3", 0xb246, 0xb266, indexCPS2_SPF_Zangief, 0x00 },
    { L"Zangief Portrait x3", 0xd126, 0xd186 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_A[] =
{
    { L"Dan A", 0xb2e6, 0xb306 },
    { L"Dan Portrait A", 0xd186, 0xd1e6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_B[] =
{
    { L"Dan B", 0xb386, 0xb3a6 },
    { L"Dan Portrait B", 0xd1e6, 0xd246 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_C[] =
{
    { L"Dan C", 0xb426, 0xb446 },
    { L"Dan Portrait C", 0xd246, 0xd2a6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_DAN_PALETTES_X3[] =
{
    { L"Dan x3", 0xb4c6, 0xb4e6 },
    { L"Dan Portrait x3", 0xd2a6, 0xd306 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_A[] =
{
    { L"Akuma A", 0xb566, 0xb586 },
    { L"Akuma A: Super Trail", 0xb5e6, 0xb606 },
    { L"Akuma Portrait A", 0xd306, 0xd366 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_B[] =
{
    { L"Akuma B", 0xb606, 0xb626 },
    { L"Akuma B: Super Trail", 0xb686, 0xb6a6 },
    { L"Akuma Portrait B", 0xd366, 0xd3c6 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_C[] =
{
    { L"Akuma C", 0xb6a6, 0xb6c6 },
    { L"Akuma C: Super Trail", 0xb726, 0xb746 },
    { L"Akuma Portrait C", 0xd3c6, 0xd426 },
};

const sGame_PaletteDataset GEMFIGHTER_A_AKUMA_PALETTES_X3[] =
{
    { L"Akuma x3", 0xb746, 0xb766 },
    { L"Akuma x3: Super Trail", 0xb7c6, 0xb7e6 },
    { L"Akuma Portrait x3", 0xd426, 0xd486 },
};

const sDescTreeNode GEMFIGHTER_A_RYU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_RYU_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_KEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_KEN_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_CHUNLI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_SAKURA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_SAKURA_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_MORRIGAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_HSIENKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_FELICIA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_FELICIA_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_TESSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_TESSA_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_IBUKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_IBUKI_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_ZANGIEF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_DAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_DAN_PALETTES_X3) },
};

const sDescTreeNode GEMFIGHTER_A_AKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_A, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_B, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_C, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_C) },
    { L"X3", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_PALETTES_X3, ARRAYSIZE(GEMFIGHTER_A_AKUMA_PALETTES_X3) },
};

const sGame_PaletteDataset GEMFIGHTER_A_CARDS_ARCADE_PALETTES[] =
{
    { L"Ryu Arcade Card", 0xd4e6, 0xd506 },
    { L"Ken Arcade Card", 0xd506, 0xd526 },
    { L"Chun-Li Arcade Card", 0xd526, 0xd546 },
    { L"Sakura Arcade Card", 0xd546, 0xd566 },
    { L"Morrigan Arcade Card", 0xd566, 0xd586 },
    { L"Hsien-Ko Arcade Card", 0xd586, 0xd5a6 },
    { L"Felicia Arcade Card", 0xd5a6, 0xd5c6 },
    { L"Tessa Arcade Card", 0xd5c6, 0xd5e6 },
    { L"Ibuki Arcade Card", 0xd5e6, 0xd606 },
    { L"Zangief Arcade Card", 0xd606, 0xd626 },
    { L"Dan Arcade Card", 0xd626, 0xd646 },
    { L"Akuma Arcade Card", 0xd646, 0xd666 }, 
};

const sGame_PaletteDataset GEMFIGHTER_A_CARDS_DEFEATED_PALETTES[] =
{
    { L"Ryu Defeated Card", 0xd926, 0xd946 },
    { L"Ken Defeated Card", 0xd946, 0xd966 },
    { L"Chun-Li Defeated Card", 0xd966, 0xd986 },
    { L"Sakura Defeated Card", 0xd986, 0xd9a6 },
    { L"Morrigan Defeated Card", 0xd9a6, 0xd9c6 },
    { L"Hsien-Ko Defeated Card", 0xd9c6, 0xd9e6 },
    { L"Felicia Defeated Card", 0xd9e6, 0xda06 },
    { L"Tessa Defeated Card", 0xda06, 0xda26 },
    { L"Ibuki Defeated Card", 0xda26, 0xda46 },
    { L"Zangief Defeated Card", 0xda46, 0xda66 },
    { L"Dan Defeated Card", 0xda66, 0xda86 },
    { L"Akuma Defeated Card", 0xda86, 0xdaa6 },
};

const sDescTreeNode GEMFIGHTER_A_CARDS_COLLECTION[] =
{
    { L"Arcade Cards", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CARDS_ARCADE_PALETTES, ARRAYSIZE(GEMFIGHTER_A_CARDS_ARCADE_PALETTES) },
    { L"Defeated Cards", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CARDS_DEFEATED_PALETTES, ARRAYSIZE(GEMFIGHTER_A_CARDS_DEFEATED_PALETTES) },
};

const sGame_PaletteDataset GEMFIGHTER_A_INTRO_PALETTES[] =
{
    { L"Intro/Menu/??? Text", 0xe042, 0xe102 },
    { L"Intro Big Gem", 0xe102, 0xe142 },
    { L"Ken Intro", 0xe142, 0xe1a2 },
    { L"Ryu Intro", 0xe242, 0xe2a2 },
    { L"Blue Ken 1/2 Intro", 0xe1a2, 0xe1e2 },
    { L"Blue Ken 2/2 Intro", 0xe2a2, 0xe2c2 },
    { L"Blue Ryu Intro", 0xe1e2, 0xe242 },
    { L"Intro Bars", 0xe2c2, 0xe2e2 },
    { L"Lightning Intro", 0xe2e2, 0xe302 },
    { L"Morrigan 1 Intro", 0xe302, 0xe362 },
    { L"Morrigan Bats & Effects Intro", 0xe6c2, 0xe702 },
    { L"Geisha Morrigan Intro", 0xe362, 0xe402 },
    { L"Pastry Chef Morrigan Intro", 0xe402, 0xe4a2 },
    { L"Maid Morrigan Intro", 0xe4a2, 0xe562 },
    { L"Nurse Morrigan Intro", 0xe562, 0xe6c2 },
    { L"Ibuki 1/2 Intro", 0xe702, 0xe7a2 },
    { L"Ibuki 2/2 Intro", 0xe802, 0xe822 },
    { L"Chun-Li Intro", 0xe7a2, 0xe802 },
    { L"Bench Chair Intro", 0xe862, 0xe882 },
    { L"Felicia Intro", 0xe822, 0xe862 },
    { L"Tessa Gem Intro", 0xe882, 0xe8a2 },
    { L"Hsien-Ko Intro", 0xe8a2, 0xe8e2 },
    { L"Ibuki & Hsien-Ko Shadow Intro", 0xe902, 0xe922 },
    { L"Chun-Li & Felicia Shadow Intro", 0xe922, 0xe942 },
    { L"NO MERCY Text Intro", 0xea82, 0xeb02 },

    { L"Ryu End Intro", 0xeb02, 0xeb62 },
    { L"Ken End Intro", 0xeb62, 0xebc2 },
    { L"Chun-Li End Intro", 0xebc2, 0xec22 },
    { L"Sakura End Intro", 0xec22, 0xec82 },
    { L"Morrigan End Intro", 0xec82, 0xece2 },
    { L"Hsien-Ko End Intro", 0xece2, 0xed42 },
    { L"Felicia End Intro", 0xed42, 0xeda2 },
    { L"Tessa End Intro", 0xeda2, 0xee02 },
    { L"Ibuki End Intro", 0xee02, 0xee62 },
    { L"Zangief End Intro", 0xee62, 0xeec2 },
    { L"Bikini Sakura Intro", 0xef02, 0xefa2 },
    { L"Sun's Light", 0xefa2, 0xefc2 },
    { L"??? Intro", 0xea42, 0xea82 },
    { L"??? 2 Intro", 0xeec2, 0xef02 },
    { L"??? 3 Intro", 0xefc2, 0xefe2 },
};

const sDescTreeNode GEMFIGHTER_A_INTROS_COLLECTION[] =
{
    { L"Intro Palettes", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_INTRO_PALETTES, ARRAYSIZE(GEMFIGHTER_A_INTRO_PALETTES) },
};

const sGame_PaletteDataset GEMFIGHTER_A_BONUS_PALETTES[] =
{
    { L"Insert Coin / Char Names / After Battle Text / Timer Numbers", 0xbde6, 0xbe06 },
    { L"HUD", 0xbe66, 0xbe86 },
    { L"Intro Cascade Gems", 0xbf26, 0xbf66 },


    { L"Char Select Back Card", 0xd7a6, 0xd7c6 },
    { L"Player Select Text", 0xd806, 0xd826 },
    { L"Character Names Select/VS", 0xd826, 0xd846, indexCPS2_SPF_Bonus, 0x00 },


    { L"Logo G 1", 0xdd02, 0xdd22 },
    { L"Logo E 1", 0xdd82, 0xdda2 },
    { L"Logo T", 0xdda2, 0xddc2 },
    { L"Logo M", 0xddc2, 0xdde2 },
    { L"Logo F", 0xdde2, 0xde02 },
    { L"Logo E 2", 0xde02, 0xde22 },
    { L"Logo R", 0xde22, 0xde42 },
    { L"Logo 'Boom'", 0xde42, 0xde62 },
    { L"Logo Sign", 0xde62, 0xde82 },
    { L"Logo Kunai", 0xde82, 0xdea2 },
    { L"Logo G 2", 0xdea2, 0xdec2 },
    { L"Logo H", 0xdec2, 0xdee2 },
    { L"Logo Sun", 0xdf02, 0xdf22 },
    //{ L"???", 0xdf22, 0xdf42 },
    //{ L"Unknown Part 3", 0xdf42, 0xdf62 },
    //{ L"Unknown too", 0xdf62, 0xdf82 },
    //{ L"Unknown", 0xdf82, 0xdfa2 },
    { L"Logo Paw", 0xdfa2, 0xdfc2 },
    { L"Logo Super", 0xdfc2, 0xdfe2 },
    { L"Intro Felicia Rock", 0xdfe2, 0xe002 },
    { L"Intro Felicia ", 0xe002, 0xe022 },
};

const sDescTreeNode GEMFIGHTER_A_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_BONUS_PALETTES, ARRAYSIZE(GEMFIGHTER_A_BONUS_PALETTES) },
};

const sDescTreeNode GEMFIGHTER_A_UNITS[] =
{
    { L"Akuma", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_AKUMA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_AKUMA_COLLECTION) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CHUNLI_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_CHUNLI_COLLECTION) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_DAN_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_DAN_COLLECTION) },
    { L"Felicia", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_FELICIA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_FELICIA_COLLECTION) },
    { L"Hsien-Ko", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_HSIENKO_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_HSIENKO_COLLECTION) },
    { L"Ibuki", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_IBUKI_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_IBUKI_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_KEN_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_KEN_COLLECTION) },
    { L"Morrigan", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_MORRIGAN_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_MORRIGAN_COLLECTION) },
    { L"Sakura", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_SAKURA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_SAKURA_COLLECTION) },
    { L"Ryu", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_RYU_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_RYU_COLLECTION) },
    { L"Tessa", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_TESSA_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_TESSA_COLLECTION) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_ZANGIEF_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_ZANGIEF_COLLECTION) },

    { L"Cards", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_CARDS_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_CARDS_COLLECTION) },

    { L"Intros", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_INTROS_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_INTROS_COLLECTION) },

    { L"Bonus Stuff", DESC_NODETYPE_TREE, (void*)GEMFIGHTER_A_BONUS_COLLECTION, ARRAYSIZE(GEMFIGHTER_A_BONUS_COLLECTION) },
};

constexpr auto GEMFIGHTER_A_NUMUNITS = ARRAYSIZE(GEMFIGHTER_A_UNITS);

#define GEMFIGHTER_A_EXTRALOC GEMFIGHTER_A_NUMUNITS

// We extend this array with data groveled from the extras file, if any.
const stExtraDef GEMFIGHTER_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SPF2T_A_RYU_PALETTES_A. 
// * Update every array using SPF2T_A_NUMUNITS below
// That should be it.  Good luck.

const UINT16 SPF2T_A_IMG_UNITS[] =
{
    indexCPS2_SPF_Ryu,      // 0x59
    indexCPS2_SPF_ChunLi,   // 0x5b
    indexCPS2_SPF_HsienKo,  // 0x5e
    indexCPS2_SPF_Felicia,  // 0x5f
    indexCPS2_SPF_Dan,      // 0x63
    indexCPS2_SPF_Akuma,    // 0x64

    indexPuzzleFighter_Akuma,       // 0x96
    indexPuzzleFighter_Anita,       // 0x97
    indexPuzzleFighter_ChunLi,      // 0x98
    indexPuzzleFighter_Dan,         // 0x99
    indexPuzzleFighter_Devilotte,   // 0x9A
    indexPuzzleFighter_Donovan,     // 0x9B
    indexPuzzleFighter_Felicia,     // 0x9C
    indexPuzzleFighter_HsienKo,     // 0x9D
    indexPuzzleFighter_Ken,         // 0x9E
    indexPuzzleFighter_LeiLei,      // 0x9F
    indexPuzzleFighter_Morrigan,    // 0xA0
    indexPuzzleFighter_Ryu,         // 0xA1
    indexPuzzleFighter_Sakura,      // 0xA2
    indexPuzzleFighter_Bonus,       // 0xA3 
};

const sGame_PaletteDataset SPF2T_A_RYU_PALETTES_A[] =
{
    { L"Ryu A", 0x0201fe, 0x02021e, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu A: Supertrail 1", 0x02021e, 0x02023e, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu A: Supertrail 2", 0x02023e, 0x02025e, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu A: Hadouken", 0x02025e, 0x02027e },
};

const sGame_PaletteDataset SPF2T_A_RYU_PALETTES_B[] =
{
    { L"Ryu B", 0x02027e, 0x02029e, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu B: Supertrail 1", 0x02029e, 0x0202be, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu B: Supertrail 2", 0x0202be, 0x0202de, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu B: Hadouken", 0x0202de, 0x0202fe },
};

const sGame_PaletteDataset SPF2T_A_KEN_PALETTES_A[] =
{
    { L"Ken A", 0x0202fe, 0x02031e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken A: Shoryuken Flames", 0x02031e, 0x02033e },
    { L"Ken A: Supertrail 1", 0x02033e, 0x02035e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken A: Supertrail 2", 0x02035e, 0x02037e, indexPuzzleFighter_Ken, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_KEN_PALETTES_B[] =
{
    { L"Ken B", 0x02037e, 0x02039e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken B: Shoryuken Flames", 0x02039e, 0x0203be },
    { L"Ken B: Supertrail 1", 0x0203be, 0x0203de, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken B: Supertrail 2", 0x0203de, 0x0203fe, indexPuzzleFighter_Ken, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_CHUNLI_PALETTES_A[] =
{
    { L"Chun-Li A", 0x0200fe, 0x02011e, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li A: Kikouken", 0x02011e, 0x02013e },
    { L"Chun-Li A: Supertrail 1", 0x02013e, 0x02015e, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li A: Supertrail 2", 0x02015e, 0x02017e, indexPuzzleFighter_ChunLi, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_CHUNLI_PALETTES_B[] =
{
    { L"Chun-Li B", 0x02017e, 0x02019e, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li B: Kikouken", 0x02019e, 0x0201be },
    { L"Chun-Li B: Supertrail 1", 0x0201be, 0x0201de, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li B: Supertrail 2", 0x0201de, 0x0201fe, indexPuzzleFighter_ChunLi, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_SAKURA_PALETTES_A[] =
{
    { L"Sakura A", 0x0206fe, 0x02071e, indexPuzzleFighter_Sakura, 0x00 },
    { L"Sakura A: Unused Hadouken", 0x02071e, 0x02073e },
    { L"Sakura A: Hadouken", 0x02073e, 0x02075e },
    { L"Sakura A: Supertrail", 0x02075e, 0x02077e, indexPuzzleFighter_Sakura, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_SAKURA_PALETTES_B[] =
{
    { L"Sakura B", 0x02077e, 0x02079e, indexPuzzleFighter_Sakura, 0x00 },
    { L"Sakura B: Unused Hadouken", 0x02079e, 0x0207be },
    { L"Sakura B: Hadouken", 0x0207be, 0x0207de },
    { L"Sakura B: Supertrail", 0x0207de, 0x0207fe, indexPuzzleFighter_Sakura, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_MORRIGAN_PALETTES_A[] =
{
    { L"Morrigan A", 0x01fffe, 0x02001e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan A: Shadow Blade", 0x02001e, 0x02003e },
    { L"Morrigan A: Red Pal", 0x02003e, 0x02005e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan A: Sparkles", 0x02005e, 0x02007e },
};

const sGame_PaletteDataset SPF2T_A_MORRIGAN_PALETTES_B[] =
{
    { L"Morrigan B", 0x02007e, 0x02009e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan B: Shadow Blade", 0x02009e, 0x0200be },
    { L"Morrigan B: Red Pal", 0x0200be, 0x0200de, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan B: Sparkles", 0x0200de, 0x0200fe },
};

const sGame_PaletteDataset SPF2T_A_HSIENKO_PALETTES_A[] =
{
    { L"Lei-Lei A", 0x0203fe, 0x02041e, indexCPS2_SPF_HsienKo, 0x00 },
    { L"Lei-Lei A: Weapons", 0x02041e, 0x02043e },
    { L"Lei-Lei A: Intermission Extra", 0x02043e, 0x02045e },
    { L"Lei-Lei A: Lin-Lin", 0x02045e, 0x02047e },
};

const sGame_PaletteDataset SPF2T_A_HSIENKO_PALETTES_B[] =
{
    { L"Lei-Lei B", 0x02047e, 0x02049e, indexCPS2_SPF_HsienKo, 0x00 },
    { L"Lei-Lei B: Weapons", 0x02049e, 0x0204be },
    { L"Lei-Lei B: Intermission Extra", 0x0204be, 0x0204de },
    { L"Lei-Lei B: Lin-Lin", 0x0204de, 0x0204fe },
};

const sGame_PaletteDataset SPF2T_A_FELICIA_PALETTES_A[] =
{
    { L"Felicia A", 0x0205fe, 0x02061e, indexCPS2_SPF_Felicia, 0x00 },
    { L"Felicia A: Unused Pal 1", 0x02061e, 0x02063e },
    { L"Felicia A: Dust", 0x02063e, 0x02065e },
    { L"Felicia A: Sand Splash", 0x02065e, 0x02067e },
};

const sGame_PaletteDataset SPF2T_A_FELICIA_PALETTES_B[] =
{
    { L"Felicia B", 0x02067e, 0x02069e, indexCPS2_SPF_Felicia, 0x00 },
    { L"Felicia B: Unused Pal 1", 0x02069e, 0x0206be },
    { L"Felicia B: Dust", 0x0206be, 0x0206de },
    { L"Felicia B: Sand Splash", 0x0206de, 0x0206fe },
};

const sGame_PaletteDataset SPF2T_A_DAN_PALETTES_A[] =
{
    { L"Dan A", 0x0209fe, 0x020a1e, indexCPS2_SPF_Dan, 0x00 },
    { L"Dan A: Gadoken", 0x020a1e, 0x020a3e },
    { L"Dan A: Supertrail 1", 0x020a3e, 0x020a5e, indexCPS2_SPF_Dan, 0x00 },
    { L"Dan A: Supertrail 2", 0x020a5e, 0x020a7e, indexCPS2_SPF_Dan, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_DAN_PALETTES_B[] =
{
    { L"Dan B", 0x020a7e, 0x020a9e, indexCPS2_SPF_Dan, 0x00 },
    { L"Dan B: Gadoken", 0x020a9e, 0x020abe },
    { L"Dan B: Supertrail 1", 0x020abe, 0x020ade, indexCPS2_SPF_Dan, 0x00 },
    { L"Dan B: Supertrail 2", 0x020ade, 0x020afe, indexCPS2_SPF_Dan, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_AKUMA_PALETTES_A[] =
{
    { L"Gouki A", 0x0208fe, 0x02091e, indexCPS2_SPF_Akuma, 0x00 },
    { L"Gouki A: Gou-Hadouken", 0x02091e, 0x02093e },
    { L"Gouki A: Supertrail 1", 0x02093e, 0x02095e, indexCPS2_SPF_Akuma, 0x00 },
    { L"Gouki A: Supertrail 2", 0x02095e, 0x02097e, indexCPS2_SPF_Akuma, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_AKUMA_PALETTES_B[] =
{
    { L"Gouki B", 0x02097e, 0x02099e, indexCPS2_SPF_Akuma, 0x00 },
    { L"Gouki B: Gou-Hadouken", 0x02099e, 0x0209be },
    { L"Gouki B: Supertrail 1", 0x0209be, 0x0209de, indexCPS2_SPF_Akuma, 0x00 },
    { L"Gouki B: Supertrail 2", 0x0209de, 0x0209fe, indexCPS2_SPF_Akuma, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_DONOVAN_PALETTES_A[] =
{
    { L"Donovan A", 0x0204fe, 0x02051e },
    { L"Donovan A: Anita", 0x02051e, 0x02053e },
    { L"Donovan A: Dhylec Blade", 0x02053e, 0x02055e },
    { L"Donovan A: Unused Pal", 0x02055e, 0x02057e },
};

const sGame_PaletteDataset SPF2T_A_DONOVAN_PALETTES_B[] =
{
    { L"Donovan B", 0x02057e, 0x02059e },
    { L"Donovan B: Anita", 0x02059e, 0x0205be },
    { L"Donovan B: Dhylec Blade", 0x0205be, 0x0205de },
    { L"Donovan B: Unused Pal", 0x0205de, 0x0205fe },
};

const sGame_PaletteDataset SPF2T_A_DEVILOT_PALETTES_A[] =
{
    { L"Devilot A", 0x0207fe, 0x02081e },
    { L"Devilot A: Dave", 0x02081e, 0x02083e },
    { L"Devilot A: Xavier", 0x02083e, 0x02085e },
    { L"Devilot A: Laser Gun", 0x02085e, 0x02087e },
};

const sGame_PaletteDataset SPF2T_A_DEVILOT_PALETTES_B[] =
{
    { L"Devilot B", 0x02087e, 0x02089e },
    { L"Devilot B: Dave", 0x02089e, 0x0208be },
    { L"Devilot B: Xavier", 0x0208be, 0x0208de },
    { L"Devilot B: Laser Gun", 0x0208de, 0x0208fe },
};

const sGame_PaletteDataset SPF2T_A_BONUS_CSI_PALETTES[] =
{
    { L"Morrigan", 0x252be, 0x252de, indexPuzzleFighter_Morrigan, 0x40 },
    { L"Chun-Li", 0x252de, 0x252fe, indexPuzzleFighter_ChunLi, 0x40 },
    { L"Ryu", 0x252fe, 0x2531e, indexPuzzleFighter_Ryu, 0x40 },
    { L"Ken", 0x2531e, 0x2533e, indexPuzzleFighter_Ken, 0x40 },
    { L"Lei Lei", 0x2533e, 0x2535e, indexPuzzleFighter_LeiLei, 0x40 },
    { L"Donovan", 0x2535e, 0x2537e, indexPuzzleFighter_Donovan, 0x40 },
    { L"Felicia", 0x2537e, 0x2539e, indexPuzzleFighter_Felicia, 0x40 },
    { L"Sakura", 0x2539e, 0x253be, indexPuzzleFighter_Sakura, 0x40 },
    { L"Devilot", 0x253be, 0x253de, indexPuzzleFighter_Devilotte, 0x40 },
    { L"Gouki", 0x253de, 0x253fe, indexPuzzleFighter_Akuma, 0x40 },
    { L"Dan", 0x253fe, 0x2541e, indexPuzzleFighter_Dan, 0x40 },
};

const sGame_PaletteDataset SPF2T_A_BONUS_CSIFADED_PALETTES[] =
{
    { L"Morrigan", 0x2541e, 0x2543e, indexPuzzleFighter_Morrigan, 0x40 },
    { L"Chun-Li", 0x2543e, 0x2545e, indexPuzzleFighter_ChunLi, 0x40 },
    { L"Ryu", 0x2545e, 0x2547e, indexPuzzleFighter_Ryu, 0x40 },
    { L"Ken", 0x2547e, 0x2549e, indexPuzzleFighter_Ken, 0x40 },
    { L"Lei Lei", 0x2549e, 0x254be, indexPuzzleFighter_LeiLei, 0x40 },
    { L"Donovan", 0x254be, 0x254de, indexPuzzleFighter_Donovan, 0x40 },
    { L"Felicia", 0x254de, 0x254fe, indexPuzzleFighter_Felicia, 0x40 },
    { L"Sakura", 0x254fe, 0x2551e, indexPuzzleFighter_Sakura, 0x40 },
    { L"Devilot", 0x2551e, 0x2553e, indexPuzzleFighter_Devilotte, 0x40 },
    { L"Gouki", 0x2553e, 0x2555e, indexPuzzleFighter_Akuma, 0x40 },
    { L"Dan", 0x2555e, 0x2557e, indexPuzzleFighter_Dan, 0x40 },
};

const sGame_PaletteDataset SPF2T_A_BONUS_BONUS_PALETTES[] =
{
    { L"Character Select Counter Gem Stuff", 0x220be, 0x220de, indexPuzzleFighter_Bonus, 0x00 },
    { L"Title Screen", 0x212be, 0x2133e },
    { L"VS Screen Transition Main", 0x2179e, 0x217be },
    { L"VS Screen Transition Flash", 0x20bde, 0x20bfe },
    { L"Red Super Gem", 0x020afe, 0x020b1e },
    { L"Blue Super Gem", 0x020b1e, 0x020b3e },
    { L"Yellow Super Gem", 0x020b3e, 0x020b5e },
    { L"Green Super Gem", 0x020b5e, 0x020b7e },
    { L"Unknown Super Gem", 0x020b7e, 0x020b9e },
    { L"V Icon/Metal Gem", 0x020b9e, 0x020bbe },
    { L"Unknown 1", 0x020bbe, 0x020bde },
    { L"Warning/Damage Icon", 0x20bfe, 0x20c1e, indexPuzzleFighter_Bonus, 0x01 },
    { L"Win Character Text", 0x20c1e, 0x20c3e },
    { L"Unknown 2", 0x20c3e, 0x20c7e },
    { L"Hitsparks/Burning Effects", 0x20c7e, 0x20c9e },
    { L"Blue-Burning Effects", 0x20c9e, 0x20cbe },
    { L"Unknown 3", 0x20cbe, 0x20cfe },
};

const sDescTreeNode SPF2T_A_RYU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_RYU_PALETTES_A, ARRAYSIZE(SPF2T_A_RYU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_RYU_PALETTES_B, ARRAYSIZE(SPF2T_A_RYU_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_KEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_KEN_PALETTES_A, ARRAYSIZE(SPF2T_A_KEN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_KEN_PALETTES_B, ARRAYSIZE(SPF2T_A_KEN_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_CHUNLI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_CHUNLI_PALETTES_A, ARRAYSIZE(SPF2T_A_CHUNLI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_CHUNLI_PALETTES_B, ARRAYSIZE(SPF2T_A_CHUNLI_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_SAKURA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_SAKURA_PALETTES_A, ARRAYSIZE(SPF2T_A_SAKURA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_SAKURA_PALETTES_B, ARRAYSIZE(SPF2T_A_SAKURA_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_MORRIGAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_MORRIGAN_PALETTES_A, ARRAYSIZE(SPF2T_A_MORRIGAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_MORRIGAN_PALETTES_B, ARRAYSIZE(SPF2T_A_MORRIGAN_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_HSIENKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_HSIENKO_PALETTES_A, ARRAYSIZE(SPF2T_A_HSIENKO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_HSIENKO_PALETTES_B, ARRAYSIZE(SPF2T_A_HSIENKO_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_FELICIA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_FELICIA_PALETTES_A, ARRAYSIZE(SPF2T_A_FELICIA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_FELICIA_PALETTES_B, ARRAYSIZE(SPF2T_A_FELICIA_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_DAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_DAN_PALETTES_A, ARRAYSIZE(SPF2T_A_DAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_DAN_PALETTES_B, ARRAYSIZE(SPF2T_A_DAN_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_AKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_AKUMA_PALETTES_A, ARRAYSIZE(SPF2T_A_AKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_AKUMA_PALETTES_B, ARRAYSIZE(SPF2T_A_AKUMA_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_DONOVAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_DONOVAN_PALETTES_A, ARRAYSIZE(SPF2T_A_DONOVAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_DONOVAN_PALETTES_B, ARRAYSIZE(SPF2T_A_DONOVAN_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_DEVILOT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_DEVILOT_PALETTES_A, ARRAYSIZE(SPF2T_A_DEVILOT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_DEVILOT_PALETTES_B, ARRAYSIZE(SPF2T_A_DEVILOT_PALETTES_B) },
};

const sDescTreeNode SPF2T_A_BONUS_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_CSI_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_CSI_PALETTES) },
    { L"Character Select Icons (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_CSIFADED_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_CSIFADED_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_BONUS_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_BONUS_PALETTES) },
};

const sDescTreeNode SPF2T_A_UNITS[] =
{
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SPF2T_A_CHUNLI_COLLECTION, ARRAYSIZE(SPF2T_A_CHUNLI_COLLECTION) },
    { L"Dan Hibiki", DESC_NODETYPE_TREE, (void*)SPF2T_A_DAN_COLLECTION, ARRAYSIZE(SPF2T_A_DAN_COLLECTION) },
    { L"Donovan", DESC_NODETYPE_TREE, (void*)SPF2T_A_DONOVAN_COLLECTION, ARRAYSIZE(SPF2T_A_DONOVAN_COLLECTION) },
    { L"Felicia", DESC_NODETYPE_TREE, (void*)SPF2T_A_FELICIA_COLLECTION, ARRAYSIZE(SPF2T_A_FELICIA_COLLECTION) },
    { L"Lei-Lei", DESC_NODETYPE_TREE, (void*)SPF2T_A_HSIENKO_COLLECTION, ARRAYSIZE(SPF2T_A_HSIENKO_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SPF2T_A_KEN_COLLECTION, ARRAYSIZE(SPF2T_A_KEN_COLLECTION) },
    { L"Morrigan Aensland", DESC_NODETYPE_TREE, (void*)SPF2T_A_MORRIGAN_COLLECTION, ARRAYSIZE(SPF2T_A_MORRIGAN_COLLECTION) },
    { L"Sakura Kasugano", DESC_NODETYPE_TREE, (void*)SPF2T_A_SAKURA_COLLECTION, ARRAYSIZE(SPF2T_A_SAKURA_COLLECTION) },
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SPF2T_A_RYU_COLLECTION, ARRAYSIZE(SPF2T_A_RYU_COLLECTION) },
    { L"Princess Devilot", DESC_NODETYPE_TREE, (void*)SPF2T_A_DEVILOT_COLLECTION, ARRAYSIZE(SPF2T_A_DEVILOT_COLLECTION) },
    { L"Gouki", DESC_NODETYPE_TREE, (void*)SPF2T_A_AKUMA_COLLECTION, ARRAYSIZE(SPF2T_A_AKUMA_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_COLLECTION, ARRAYSIZE(SPF2T_A_BONUS_COLLECTION) },
};

constexpr auto SPF2T_A_NUMUNITS = ARRAYSIZE(SPF2T_A_UNITS);

#define SPF2T_A_EXTRALOC SPF2T_A_NUMUNITS

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SPF2T_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

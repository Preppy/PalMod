#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SPF2T_A_RYU_PALETTES_A. 
// * Update every array using SPF2T_A_NUMUNITS below
// That should be it.  Good luck.

const UINT16 SPF2T_A_IMGIDS_USED[] =
{
    indexCPS2Sprites_SPF_Ryu,      // 0x59
    indexCPS2Sprites_SPF_ChunLi,   // 0x5b
    indexCPS2Sprites_SPF_HsienKo,  // 0x5e
    indexCPS2Sprites_SPF_Felicia,  // 0x5f
    indexCPS2Sprites_SPF_Dan,      // 0x63
    indexCPS2Sprites_SPF_Akuma,    // 0x64

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
    { L"Ryu A: Portrait", 0x2b6de, 0x2b75e },
};

const sGame_PaletteDataset SPF2T_A_RYU_PALETTES_B[] =
{
    { L"Ryu B", 0x02027e, 0x02029e, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu B: Supertrail 1", 0x02029e, 0x0202be, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu B: Supertrail 2", 0x0202be, 0x0202de, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu B: Hadouken", 0x0202de, 0x0202fe },
    { L"Ryu B: Portrait", 0x2b75e, 0x2b7de },
};

const sGame_PaletteDataset SPF2T_A_KEN_PALETTES_A[] =
{
    { L"Ken A", 0x0202fe, 0x02031e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken A: Shoryuken Flames", 0x02031e, 0x02033e },
    { L"Ken A: Supertrail 1", 0x02033e, 0x02035e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken A: Supertrail 2", 0x02035e, 0x02037e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken A: Portrait", 0x2a7be, 0x2a83e },
};

const sGame_PaletteDataset SPF2T_A_KEN_PALETTES_B[] =
{
    { L"Ken B", 0x02037e, 0x02039e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken B: Shoryuken Flames", 0x02039e, 0x0203be },
    { L"Ken B: Supertrail 1", 0x0203be, 0x0203de, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken B: Supertrail 2", 0x0203de, 0x0203fe, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken B: Portrait", 0x2ad7e, 0x2adfe },
};

const sGame_PaletteDataset SPF2T_A_CHUNLI_PALETTES_A[] =
{
    { L"Chun-Li A", 0x0200fe, 0x02011e, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li A: Kikouken", 0x02011e, 0x02013e },
    { L"Chun-Li A: Supertrail 1", 0x02013e, 0x02015e, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li A: Supertrail 2", 0x02015e, 0x02017e, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li A: Portrait", 0x2a6de, 0x2a75e },
};

const sGame_PaletteDataset SPF2T_A_CHUNLI_PALETTES_B[] =
{
    { L"Chun-Li B", 0x02017e, 0x02019e, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li B: Kikouken", 0x02019e, 0x0201be },
    { L"Chun-Li B: Supertrail 1", 0x0201be, 0x0201de, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li B: Supertrail 2", 0x0201de, 0x0201fe, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li B: Portrait", 0x2ac9e, 0x2ad1e },
};

const sGame_PaletteDataset SPF2T_A_SAKURA_PALETTES_A[] =
{
    { L"Sakura A", 0x0206fe, 0x02071e, indexPuzzleFighter_Sakura, 0x00 },
    { L"Sakura A: Unused Hadouken", 0x02071e, 0x02073e },
    { L"Sakura A: Hadouken", 0x02073e, 0x02075e },
    { L"Sakura A: Supertrail", 0x02075e, 0x02077e, indexPuzzleFighter_Sakura, 0x00 },
    { L"Sakura A: Portrait", 0x2a9be, 0x2aa1e },
};

const sGame_PaletteDataset SPF2T_A_SAKURA_PALETTES_B[] =
{
    { L"Sakura B", 0x02077e, 0x02079e, indexPuzzleFighter_Sakura, 0x00 },
    { L"Sakura B: Unused Hadouken", 0x02079e, 0x0207be },
    { L"Sakura B: Hadouken", 0x0207be, 0x0207de },
    { L"Sakura B: Supertrail", 0x0207de, 0x0207fe, indexPuzzleFighter_Sakura, 0x00 },
    { L"Sakura B: Portrait", 0x2af7e, 0x2afde },
};

const sGame_PaletteDataset SPF2T_A_MORRIGAN_PALETTES_A[] =
{
    { L"Morrigan A", 0x01fffe, 0x02001e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan A: Shadow Blade", 0x02001e, 0x02003e },
    { L"Morrigan A: Red Pal", 0x02003e, 0x02005e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan A: Sparkles", 0x02005e, 0x02007e },
    { L"Morrigan A: Portrait", 0x2a65e, 0x2a6de },
};

const sGame_PaletteDataset SPF2T_A_MORRIGAN_PALETTES_B[] =
{
    { L"Morrigan B", 0x02007e, 0x02009e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan B: Shadow Blade", 0x02009e, 0x0200be },
    { L"Morrigan B: Red Pal", 0x0200be, 0x0200de, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan B: Sparkles", 0x0200de, 0x0200fe },
    { L"Morrigan B: Portrait", 0x2ac1e, 0x2ac9e },
};

const sGame_PaletteDataset SPF2T_A_HSIENKO_PALETTES_A[] =
{
    { L"Lei-Lei A", 0x0203fe, 0x02041e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei A: Weapons", 0x02041e, 0x02043e },
    { L"Lei-Lei A: Intermission Extra", 0x02043e, 0x02045e },
    { L"Lei-Lei A: Lin-Lin", 0x02045e, 0x02047e },
    { L"Lei-Lei A: Portrait", 0x2a83e, 0x2a89e },
};

const sGame_PaletteDataset SPF2T_A_HSIENKO_PALETTES_B[] =
{
    { L"Lei-Lei B", 0x02047e, 0x02049e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei B: Weapons", 0x02049e, 0x0204be },
    { L"Lei-Lei B: Intermission Extra", 0x0204be, 0x0204de },
    { L"Lei-Lei B: Lin-Lin", 0x0204de, 0x0204fe },
    { L"Lei-Lei B: Portrait", 0x2adfe, 0x2ae5e },
};

const sGame_PaletteDataset SPF2T_A_FELICIA_PALETTES_A[] =
{
    { L"Felicia A", 0x0205fe, 0x02061e, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia A: Unused Pal 1", 0x02061e, 0x02063e },
    { L"Felicia A: Dust", 0x02063e, 0x02065e },
    { L"Felicia A: Sand Splash", 0x02065e, 0x02067e },
    { L"Felicia A: Portrait", 0x2a93e, 0x2a9be },
};

const sGame_PaletteDataset SPF2T_A_FELICIA_PALETTES_B[] =
{
    { L"Felicia B", 0x02067e, 0x02069e, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia B: Unused Pal 1", 0x02069e, 0x0206be },
    { L"Felicia B: Dust", 0x0206be, 0x0206de },
    { L"Felicia B: Sand Splash", 0x0206de, 0x0206fe },
    { L"Felicia B: Portrait", 0x2aefe, 0x2af7e },
};

const sGame_PaletteDataset SPF2T_A_DAN_PALETTES_A[] =
{
    { L"Dan A", 0x0209fe, 0x020a1e, indexCPS2Sprites_SPF_Dan, 0x00 },
    { L"Dan A: Tears", 0x020a1e, 0x020a3e },
    { L"Dan A: Supertrail 1", 0x020a3e, 0x020a5e, indexCPS2Sprites_SPF_Dan, 0x00 },
    { L"Dan A: Supertrail 2", 0x020a5e, 0x020a7e, indexCPS2Sprites_SPF_Dan, 0x00 },
    { L"Dan A: Portrait", 0x2abbe, 0x2ac1e },
};

const sGame_PaletteDataset SPF2T_A_DAN_PALETTES_B[] =
{
    { L"Dan B", 0x020a7e, 0x020a9e, indexCPS2Sprites_SPF_Dan, 0x00 },
    { L"Dan B: Tears", 0x020a9e, 0x020abe },
    { L"Dan B: Supertrail 1", 0x020abe, 0x020ade, indexCPS2Sprites_SPF_Dan, 0x00 },
    { L"Dan B: Supertrail 2", 0x020ade, 0x020afe, indexCPS2Sprites_SPF_Dan, 0x00 },
    { L"Dan B: Portrait", 0x2b17e, 0x2b1de },
};

const sGame_PaletteDataset SPF2T_A_AKUMA_PALETTES_A[] =
{
    { L"Gouki A", 0x0208fe, 0x02091e, indexCPS2Sprites_SPF_Akuma, 0x00 },
    { L"Gouki A: Unused Hadouken", 0x02091e, 0x02093e },
    { L"Gouki A: Supertrail 1", 0x02093e, 0x02095e, indexCPS2Sprites_SPF_Akuma, 0x00 },
    { L"Gouki A: Supertrail 2", 0x02095e, 0x02097e, indexCPS2Sprites_SPF_Akuma, 0x00 },
    { L"Gouki A: Portrait", 0x2ab5e, 0x2abbe },
};

const sGame_PaletteDataset SPF2T_A_AKUMA_PALETTES_B[] =
{
    { L"Gouki B", 0x02097e, 0x02099e, indexCPS2Sprites_SPF_Akuma, 0x00 },
    { L"Gouki B: Unused Hadouken", 0x02099e, 0x0209be },
    { L"Gouki B: Supertrail 1", 0x0209be, 0x0209de, indexCPS2Sprites_SPF_Akuma, 0x00 },
    { L"Gouki B: Supertrail 2", 0x0209de, 0x0209fe, indexCPS2Sprites_SPF_Akuma, 0x00 },
    { L"Gouki B: Portrait", 0x2b11e, 0x2b17e },
};

const sGame_PaletteDataset SPF2T_A_DONOVAN_PALETTES_A[] =
{
    { L"Donovan A", 0x0204fe, 0x02051e },
    { L"Donovan A: Anita", 0x02051e, 0x02053e },
    { L"Donovan A: Dhylec Blade", 0x02053e, 0x02055e },
    { L"Donovan A: Unused Pal", 0x02055e, 0x02057e },
    { L"Donovan A: Portrait", 0x2a89e, 0x2a93e },
};

const sGame_PaletteDataset SPF2T_A_DONOVAN_PALETTES_B[] =
{
    { L"Donovan B", 0x02057e, 0x02059e },
    { L"Donovan B: Anita", 0x02059e, 0x0205be },
    { L"Donovan B: Dhylec Blade", 0x0205be, 0x0205de },
    { L"Donovan B: Unused Pal", 0x0205de, 0x0205fe },
    { L"Donovan B: Portrait", 0x2ae5e, 0x2aefe },
};

const sGame_PaletteDataset SPF2T_A_DEVILOT_PALETTES_A[] =
{
    { L"Devilot A", 0x0207fe, 0x02081e },
    { L"Devilot A: Dave", 0x02081e, 0x02083e },
    { L"Devilot A: Xavier", 0x02083e, 0x02085e },
    { L"Devilot A: Laser Gun", 0x02085e, 0x02087e },
    { L"Devilot A: Portrait", 0x2aa1e, 0x2ab5e },
};

const sGame_PaletteDataset SPF2T_A_DEVILOT_PALETTES_B[] =
{
    { L"Devilot B", 0x02087e, 0x02089e },
    { L"Devilot B: Dave", 0x02089e, 0x0208be },
    { L"Devilot B: Xavier", 0x0208be, 0x0208de },
    { L"Devilot B: Laser Gun", 0x0208de, 0x0208fe },
    { L"Devilot B: Portrait", 0x2afde, 0x2b11e },
};

#ifdef USE_AS_SEPARATED
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
#endif

#ifdef MOVED_TO_A_NEW_SECTION
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
#endif

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_CHUNLI_NORMAL[] =
{
    //Chun-Li Stage
    { L"Chun-Li Stage (1/4)", 0x226be, 0x228be },
    { L"Chun-Li Stage (2/4)", 0x25ebe, 0x25fde },
    { L"Chun-Li Stage (3/4)", 0x20dde, 0x20dfe },
    { L"Chun-Li Stage (4/4)", 0x20e1e, 0x20e3e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_CHUNLI_FADED[] =
{
    // Chun-Li Stage (Faded)
    { L"Chun-Li Stage (1/4) (Faded)", 0x228be, 0x22abe },
    { L"Chun-Li Stage (2/4) (Faded)", 0x260be, 0x261de },
    { L"Chun-Li Stage (3/4) (Faded)", 0x20dfe, 0x20e1e },
    { L"Chun-Li Stage (4/4) (Faded)", 0x2b39e, 0x2b3be },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_DAN_NORMAL[] =
{
    // Dan Stage
    { L"Dan Stage (1/2)", 0x24abe, 0x24cbe },
    { L"Dan Stage (2/2)", 0x283fe, 0x2843e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_DAN_FADED[] =
{
    // Dan Stage (Faded)
    { L"Dan Stage (1/2) (Faded)", 0x24cbe, 0x24ebe },
    { L"Dan Stage (2/2) (Faded)", 0x285fe, 0x2863e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_DONOVAN_NORMAL[] =
{
    // Donovan Stage
    { L"Donovan Stage (1/3)", 0x236be, 0x238be },
    { L"Donovan Stage (2/3)", 0x26ebe, 0x26efe },
    { L"Donovan Stage (3/3)", 0x20fde, 0x2101e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_DONOVAN_FADED[] =
{
    // Donovan Stage (Faded)
    { L"Donovan Stage (1/3) (Faded)", 0x238be, 0x23abe },
    { L"Donovan Stage (2/3) (Faded)", 0x270be, 0x270fe },
    { L"Donovan Stage (3/3) (Faded)", 0x2b5be, 0x2b5fe },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_FELICIA_NORMAL[] =
{
    // Felicia Stage
    { L"Felicia Stage (1/3)", 0x23abe, 0x23cbe },
    { L"Felicia Stage (2/3)", 0x273de, 0x2745e },
    { L"Felicia Stage (3/3)", 0x2105e, 0x2107e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_FELICIA_FADED[] =
{
    // Felicia Stage (Faded)
    { L"Felicia Stage (1/3) (Faded)", 0x23cbe, 0x23ebe },
    { L"Felicia Stage (2/3) (Faded)", 0x274de, 0x2765e },
    { L"Felicia Stage (3/3) (Faded)", 0x2107e, 0x2109e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_LEILEI_NORMAL[] =
{
    // Lei-Lei Stage
    { L"Lei-Lei Stage (1/4)", 0x232be, 0x234be },
    { L"Lei-Lei Stage (2/4)", 0x26abe, 0x26cbe },
    { L"Lei-Lei Stage (3/4)", 0x20f5e, 0x20f7e },
    { L"Lei-Lei Stage (4/4)", 0x20f9e, 0x20fbe },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_LEILEI_FADED[] =
{
    // Lei-Lei Stage (Faded)
    { L"Lei-Lei Stage (1/4) (Faded)", 0x234be, 0x236be },
    { L"Lei-Lei Stage (2/4) (Faded)", 0x26cbe, 0x26ebe },
    { L"Lei-Lei Stage (3/4) (Faded)", 0x20f7e, 0x20f9e },
    { L"Lei-Lei Stage (4/4) (Faded)", 0x2a1be, 0x2a1de },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_KEN_NORMAL[] =
{
    // Ken Stage
    { L"Ken Stage (1/2)", 0x22ebe, 0x230be },
    { L"Ken Stage (2/2)", 0x267fe, 0x2683e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_KEN_FADED[] =
{
    // Ken Stage (Faded)
    { L"Ken Stage (1/2) (Faded)", 0x230be, 0x232be },
    { L"Ken Stage (2/2) (Faded)", 0x269fe, 0x26a3e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_MORRIGAN_NORMAL[] =
{
    // Morrigan Stage
    { L"Morrigan Stage (1/3)", 0x222be, 0x224be },
    { L"Morrigan Stage (2/3)", 0x25abe, 0x25afe },
    { L"Morrigan Stage (3/3)", 0x20d5e, 0x20d7e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_MORRIGAN_FADED[] =
{
    // Morrigan Stage (Faded)
    { L"Morrigan Stage (1/3) (Faded)", 0x224be, 0x226be },
    { L"Morrigan Stage (2/3) (Faded)", 0x25cbe, 0x25cfe },
    { L"Morrigan Stage (3/3) (Faded)", 0x2b59e, 0x2b5be },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_SAKURA_NORMAL[] =
{
    // Sakura Stage
    { L"Sakura Stage (1/3)", 0x23ebe, 0x240be },
    { L"Sakura Stage (2/3)", 0x276be, 0x276fe },
    { L"Sakura Stage (3/3)", 0x210de, 0x2113e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_SAKURA_FADED[] =
{
    // Sakura Stage (Faded)
    { L"Sakura Stage (1/3) (Faded)", 0x240be, 0x242be },
    { L"Sakura Stage (2/3) (Faded)", 0x278be, 0x278fe },
    { L"Sakura Stage (3/3) (Faded)", 0x2b41e, 0x2b47e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_RYU_NORMAL[] =
{
    // Ryu Stage
    { L"Ryu Stage (1/3)", 0x22abe, 0x22cbe },
    { L"Ryu Stage (2/3)", 0x262be, 0x2637e },
    { L"Ryu Stage (3/3)", 0x20e5e, 0x20ebe },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_RYU_FADED[] =
{
    // Ryu Stage (Faded)
    { L"Ryu Stage (1/3) (Faded)", 0x22cbe, 0x22ebe },
    { L"Ryu Stage (2/3) (Faded)", 0x264be, 0x2657e },
    { L"Ryu Stage (3/3) (Faded)", 0x2b3be, 0x2b41e },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_DEVILOT_NORMAL[] =
{
    // Princess Devilot Stage
    { L"Princess Devilot Stage (1/3)", 0x242be, 0x244be },
    { L"Princess Devilot Stage (2/3)", 0x27abe, 0x27cbe },
    { L"Princess Devilot Stage (3/3)", 0x2113e, 0x211be },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_DEVILOT_FADED[] =
{
    // Princess Devilot Stage (Faded)
    { L"Princess Devilot Stage (1/3) (Faded)", 0x244be, 0x246be },
    { L"Princess Devilot Stage (2/3) (Faded)", 0x27cbe, 0x27ebe },
    { L"Princess Devilot Stage (3/3) (Faded)", 0x2b47e, 0x2b4fe },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_GOUKI_NORMAL[] =
{
    // Gouki Stage
    { L"Gouki Stage (1/2)", 0x246be, 0x248be },
    { L"Gouki Stage (2/2)", 0x280be, 0x282be },
};

const sGame_PaletteDataset SPF2T_A_STAGE_PALETTES_GOUKI_FADED[] =
{
    // Gouki Stage (Faded)
    { L"Gouki Stage (1/2) (Faded)", 0x248be, 0x24abe },
    { L"Gouki Stage (2/2) (Faded)", 0x27ebe, 0x280be },
};

const sGame_PaletteDataset SPF2T_A_CHUNLI_PALETTES_EFFECTS[] =
{
    //Chun-Li
    { L"Chun-Li: Burning", 0x294be, 0x294de, indexPuzzleFighter_ChunLi, 0x00 },
    { L"Chun-Li: Blue-Burning", 0x2951e, 0x2953e, indexPuzzleFighter_ChunLi, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_DAN_PALETTES_EFFECTS[] =
{
    // Dan
    { L"Dan: Burning", 0x2a13e, 0x2a15e, indexPuzzleFighter_Dan, 0x00 },
    { L"Dan: Blue-Burning", 0x2a19e, 0x2a1be, indexPuzzleFighter_Dan, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_DONOVAN_PALETTES_EFFECTS[] =
{
    // Donovan
    { L"Donovan: Burning", 0x298de, 0x298fe, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: Blue-Burning", 0x2993e, 0x2995e, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: EX Flash 01", 0x2999e, 0x299be, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: EX Flash 02", 0x299be, 0x299de, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: EX Flash 03", 0x299de, 0x299fe, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: EX Flash 04", 0x299fe, 0x29a1e, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: EX Flash 05", 0x29a1e, 0x29a3e, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: EX Flash 06", 0x29a3e, 0x29a5e, indexPuzzleFighter_Donovan, 0x00 },
    { L"Donovan: EX Flash 07", 0x29a5e, 0x29a7e, indexPuzzleFighter_Donovan, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_FELICIA_PALETTES_EFFECTS[] =
{
    // Felicia
    { L"Felicia: Burning", 0x29a7e, 0x29a9e, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: Blue-Burning", 0x29ade, 0x29afe, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: EX Flash 01", 0x29b9e, 0x29bbe, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: EX Flash 02", 0x29bbe, 0x29bde, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: EX Flash 03", 0x29bde, 0x29bfe, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: EX Flash 04", 0x29bfe, 0x29c1e, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: EX Flash 05", 0x29c1e, 0x29c3e, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: EX Flash 06", 0x29c3e, 0x29c5e, indexCPS2Sprites_SPF_Felicia, 0x00 },
    { L"Felicia: EX Flash 07", 0x29c5e, 0x29c7e, indexCPS2Sprites_SPF_Felicia, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_LEILEI_PALETTES_EFFECTS[] =
{
    // Lei-Lei
    { L"Lei-Lei: Burning", 0x2973e, 0x2975e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: Blue-Burning", 0x2979e, 0x297be, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: EX Flash 01", 0x297fe, 0x2981e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: EX Flash 02", 0x2981e, 0x2983e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: EX Flash 03", 0x2983e, 0x2985e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: EX Flash 04", 0x2985e, 0x2987e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: EX Flash 05", 0x2987e, 0x2989e, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: EX Flash 06", 0x2989e, 0x298be, indexCPS2Sprites_SPF_HsienKo, 0x00 },
    { L"Lei-Lei: EX Flash 07", 0x298be, 0x298de, indexCPS2Sprites_SPF_HsienKo, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_KEN_PALETTES_EFFECTS[] =
{
    // Ken
    { L"Ken: Burning", 0x2963e, 0x2965e, indexPuzzleFighter_Ken, 0x00 },
    { L"Ken: Blue-Burning", 0x2969e, 0x296be, indexPuzzleFighter_Ken, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_MORRIGAN_PALETTES_EFFECTS[] =
{
    // Morrigan
    { L"Morrigan: Burning", 0x292be, 0x292de, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: Blue-Burning", 0x2931e, 0x2933e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: EX Flash 01", 0x293de, 0x293fe, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: EX Flash 02", 0x293fe, 0x2941e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: EX Flash 03", 0x2941e, 0x2943e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: EX Flash 04", 0x2943e, 0x2945e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: EX Flash 05", 0x2945e, 0x2947e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: EX Flash 06", 0x2947e, 0x2949e, indexPuzzleFighter_Morrigan, 0x00 },
    { L"Morrigan: EX Flash 07", 0x2949e, 0x294be, indexPuzzleFighter_Morrigan, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_SAKURA_PALETTES_EFFECTS[] =
{
    // Sakura
    { L"Sakura: Burning", 0x29c7e, 0x29c9e, indexPuzzleFighter_Sakura, 0x00 },
    { L"Sakura: Blue-Burning", 0x29cde, 0x29cfe, indexPuzzleFighter_Sakura, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_RYU_PALETTES_EFFECTS[] =
{
    // Ryu
    { L"Ryu: Burning", 0x2953e, 0x2955e, indexPuzzleFighter_Ryu, 0x00 },
    { L"Ryu: Blue-Burning", 0x2959e, 0x295be, indexPuzzleFighter_Ryu, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_DEVILOT_PALETTES_EFFECTS[] =
{
    // Princess Devilot
    { L"Devilot: Burning", 0x29d7e, 0x29d9e, indexPuzzleFighter_Devilotte, 0x00 },
    { L"Devilot: Dave Burning", 0x29d9e, 0x29dbe, indexPuzzleFighter_Devilotte, 0x00 },
    { L"Devilot: Xavier Burning", 0x29dbe, 0x29dde, indexPuzzleFighter_Devilotte, 0x00 },
    { L"Devilot: Blue-Burning", 0x29dde, 0x29dfe, indexPuzzleFighter_Devilotte, 0x00 },
    { L"Devilot: Dave Blue-Burning", 0x29dfe, 0x29e1e, indexPuzzleFighter_Devilotte, 0x00 },
    { L"Devilot: Xavier Blue-Burning", 0x29e1e, 0x29e3e, indexPuzzleFighter_Devilotte, 0x00 },
};

const sGame_PaletteDataset SPF2T_A_GOUKI_PALETTES_EFFECTS[] =
{
    // Gouki
    { L"Gouki: Gou-Hadouken", 0x2a0fe, 0x2a11e, indexPuzzleFighter_Akuma, 0x00 },
    { L"Gouki: Fire Gou-Hadouken", 0x2a11e, 0x2a13e, indexPuzzleFighter_Akuma, 0x00 },
    { L"Gouki: Burning", 0x29efe, 0x29f1e, indexPuzzleFighter_Akuma, 0x00 },
    { L"Gouki: Blue-Burning", 0x29f5e, 0x29f7e, indexPuzzleFighter_Akuma, 0x00 },
};

const sDescTreeNode SPF2T_A_RYU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_RYU_PALETTES_A, ARRAYSIZE(SPF2T_A_RYU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_RYU_PALETTES_B, ARRAYSIZE(SPF2T_A_RYU_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_RYU_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_RYU_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_KEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_KEN_PALETTES_A, ARRAYSIZE(SPF2T_A_KEN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_KEN_PALETTES_B, ARRAYSIZE(SPF2T_A_KEN_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_KEN_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_KEN_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_CHUNLI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_CHUNLI_PALETTES_A, ARRAYSIZE(SPF2T_A_CHUNLI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_CHUNLI_PALETTES_B, ARRAYSIZE(SPF2T_A_CHUNLI_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_CHUNLI_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_CHUNLI_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_SAKURA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_SAKURA_PALETTES_A, ARRAYSIZE(SPF2T_A_SAKURA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_SAKURA_PALETTES_B, ARRAYSIZE(SPF2T_A_SAKURA_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_SAKURA_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_SAKURA_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_MORRIGAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_MORRIGAN_PALETTES_A, ARRAYSIZE(SPF2T_A_MORRIGAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_MORRIGAN_PALETTES_B, ARRAYSIZE(SPF2T_A_MORRIGAN_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_MORRIGAN_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_MORRIGAN_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_HSIENKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_HSIENKO_PALETTES_A, ARRAYSIZE(SPF2T_A_HSIENKO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_HSIENKO_PALETTES_B, ARRAYSIZE(SPF2T_A_HSIENKO_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_LEILEI_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_LEILEI_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_FELICIA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_FELICIA_PALETTES_A, ARRAYSIZE(SPF2T_A_FELICIA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_FELICIA_PALETTES_B, ARRAYSIZE(SPF2T_A_FELICIA_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_FELICIA_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_FELICIA_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_DAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_DAN_PALETTES_A, ARRAYSIZE(SPF2T_A_DAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_DAN_PALETTES_B, ARRAYSIZE(SPF2T_A_DAN_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_DAN_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_DAN_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_AKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_AKUMA_PALETTES_A, ARRAYSIZE(SPF2T_A_AKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_AKUMA_PALETTES_B, ARRAYSIZE(SPF2T_A_AKUMA_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_GOUKI_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_GOUKI_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_DONOVAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_DONOVAN_PALETTES_A, ARRAYSIZE(SPF2T_A_DONOVAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_DONOVAN_PALETTES_B, ARRAYSIZE(SPF2T_A_DONOVAN_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_DONOVAN_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_DONOVAN_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_DEVILOT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SPF2T_A_DEVILOT_PALETTES_A, ARRAYSIZE(SPF2T_A_DEVILOT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SPF2T_A_DEVILOT_PALETTES_B, ARRAYSIZE(SPF2T_A_DEVILOT_PALETTES_B) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SPF2T_A_DEVILOT_PALETTES_EFFECTS, ARRAYSIZE(SPF2T_A_DEVILOT_PALETTES_EFFECTS) },
};

const sDescTreeNode SPF2T_A_STAGE_COLLECTION[] =
{
    { L"Chun-Li Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_CHUNLI_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_CHUNLI_NORMAL) },
    { L"Chun-Li Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_CHUNLI_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_CHUNLI_FADED) },
    { L"Dan Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_DAN_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_DAN_NORMAL) },
    { L"Dan Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_DAN_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_DAN_FADED) },
    { L"Donovan Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_DONOVAN_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_DONOVAN_NORMAL) },
    { L"Donovan Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_DONOVAN_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_DONOVAN_FADED) },
    { L"Felicia Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_FELICIA_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_FELICIA_NORMAL) },
    { L"Felicia Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_FELICIA_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_FELICIA_FADED) },
    { L"Lei-Lei Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_LEILEI_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_LEILEI_NORMAL) },
    { L"Lei-Lei Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_LEILEI_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_LEILEI_FADED) },
    { L"Ken Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_KEN_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_KEN_NORMAL) },
    { L"Ken Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_KEN_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_KEN_FADED) },
    { L"Morrigan Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_MORRIGAN_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_MORRIGAN_NORMAL) },
    { L"Morrigan Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_MORRIGAN_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_MORRIGAN_FADED) },
    { L"Sakura Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_SAKURA_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_SAKURA_NORMAL) },
    { L"Sakura Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_SAKURA_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_SAKURA_FADED) },
    { L"Ryu Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_RYU_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_RYU_NORMAL) },
    { L"Ryu Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_RYU_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_RYU_FADED) },
    { L"Princess Devilot Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_DEVILOT_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_DEVILOT_NORMAL) },
    { L"Princess Devilot Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_DEVILOT_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_DEVILOT_FADED) },
    { L"Gouki Stage (Normal)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_GOUKI_NORMAL, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_GOUKI_NORMAL) },
    { L"Gouki Stage (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_PALETTES_GOUKI_FADED, ARRAYSIZE(SPF2T_A_STAGE_PALETTES_GOUKI_FADED) },
};

const sGame_PaletteDataset SPF2T_A_BONUS_INTRO_PALETTES[] =
{
	//Intro/Main Menu
    { L"Recycle Screen", 0x286be, 0x286de },
    { L"QSound Screen", 0x24ebe, 0x24f3e },
    { L"Capcom Logo", 0x2219e, 0x221be },
    { L"Intro Background", 0x256be, 0x256de },
    { L"Intro Background Faded", 0x256de, 0x256fe },
    { L"Title Screen", 0x212be, 0x2133e },
    { L"Level Select", 0x216be, 0x2171e },
    { L"Mode Select", 0x2171e, 0x2175e },
};

const sGame_PaletteDataset SPF2T_A_BONUS_TUTORIAL_PALETTES[] =
{
	// Tutorial
    { L"Tutorial Dan", 0x21c3e, 0x21c5e },
    { L"Tutorial Dan: Tears", 0x21c5e, 0x21c7e },
    { L"Tutorial Dan: Supertrail 1", 0x21c7e, 0x21c9e },
    { L"Tutorial Dan: Supertrail 2", 0x21c9e, 0x21cbe },
    { L"Tutorial: Puzzle Dojo", 0x21f9e, 0x21fbe },
    { L"Tutorial: Joystick & Buttons", 0x21dfe, 0x21e3e },
    { L"Tutorial: Super Gems", 0x21abe, 0x21b3e },
    { L"Tutorial: Metal Gems", 0x21b5e, 0x21b7e },
};

const sGame_PaletteDataset SPF2T_A_BONUS_SELECT_PALETTES[] =
{
    //Select Screen
    { L"Select Screen Background", 0x3225e, 0x3235e },
    { L"Select Portrait Background", 0x217de, 0x217fe },
    { L"Select Character Names", 0x217be, 0x217de },
    { L"Character Select Counter Gem Stuff", 0x220be, 0x220de, indexPuzzleFighter_Bonus, 0x00 },
    { L"Character Select Icons", 0x252be, 0x2541e },
    { L"Character Select Icons (Faded)", 0x2541e, 0x2557e },
    { L"Select Icons Background", 0x21f1e, 0x21f3e },
    { L"Select Cursor", 0x218be, 0x218de },
    { L"Random Select Icon", 0x2187e, 0x2189e },
    { L"Player Select", 0x2567e, 0x2569e },
    { L"Stage Text", 0x2569e, 0x256be },
};

const sGame_PaletteDataset SPF2T_A_BONUS_VS_PALETTES[] =
{
    //VS Screen
    { L"VS Screen Transition Main", 0x2179e, 0x217be },
    { L"VS Screen Transition Flash", 0x20bde, 0x20bfe },
    { L"Random VS Icon", 0x2559e, 0x255be },
    { L"VS Text (1/31)", 0x02a21e, 0x02a23e },
    { L"VS Text (2/31)", 0x02a23e, 0x02a25e },
    { L"VS Text (3/31)", 0x02a25e, 0x02a27e },
    { L"VS Text (4/31)", 0x02a27e, 0x02a29e },
    { L"VS Text (5/31)", 0x02a29e, 0x02a2be },
    { L"VS Text (6/31)", 0x02a2be, 0x02a2de },
    { L"VS Text (7/31)", 0x02a2de, 0x02a2fe },
    { L"VS Text (8/31)", 0x02a2fe, 0x02a31e },
    { L"VS Text (9/31)", 0x02a31e, 0x02a33e },
    { L"VS Text (10/31)", 0x02a33e, 0x02a35e },
    { L"VS Text (11/31)", 0x02a35e, 0x02a37e },
    { L"VS Text (12/31)", 0x02a37e, 0x02a39e },
    { L"VS Text (13/31)", 0x02a39e, 0x02a3be },
    { L"VS Text (14/31)", 0x02a3be, 0x02a3de },
    { L"VS Text (15/31)", 0x02a3de, 0x02a3fe },
    { L"VS Text (16/31)", 0x02a3fe, 0x02a41e },
    { L"VS Text (17/31)", 0x02a41e, 0x02a43e },
    { L"VS Text (18/31)", 0x02a43e, 0x02a45e },
    { L"VS Text (19/31)", 0x02a45e, 0x02a47e },
    { L"VS Text (20/31)", 0x02a47e, 0x02a49e },
    { L"VS Text (21/31)", 0x02a49e, 0x02a4be },
    { L"VS Text (22/31)", 0x02a4be, 0x02a4de },
    { L"VS Text (23/31)", 0x02a4de, 0x02a4fe },
    { L"VS Text (24/31)", 0x02a4fe, 0x02a51e },
    { L"VS Text (25/31)", 0x02a51e, 0x02a53e },
    { L"VS Text (26/31)", 0x02a53e, 0x02a55e },
    { L"VS Text (27/31)", 0x02a55e, 0x02a57e },
    { L"VS Text (28/31)", 0x02a57e, 0x02a59e },
    { L"VS Text (29/31)", 0x02a59e, 0x02a5be },
    { L"VS Text (30/31)", 0x02a5be, 0x02a5de },
    { L"VS Text (31/31)", 0x02a5de, 0x02a5fe },
};

const sGame_PaletteDataset SPF2T_A_BONUS_INGAME_PALETTES[] =
{
    //Ingame Extras
    { L"Hitsparks/Burning Effects", 0x20c7e, 0x20c9e },
    { L"Blue-Burning Effects", 0x20c9e, 0x20cbe },
    { L"Super Gems", 0x20afe, 0x20b7e },
    { L"V Icon/Metal Gem", 0x20b9e, 0x020bbe },
    { L"Caution/Warning/Danger", 0x20bfe, 0x20c1e, indexPuzzleFighter_Bonus, 0x01 },
    { L"Winscreen Text", 0x20c1e, 0x20c3e },
};

const sGame_PaletteDataset SPF2T_A_BONUS_VAMPS_PALETTES[] =
{
    //Vampire Saviour Unused Palettes-- *Can use VSAV Previews hehe*
    { L"Phobos", 0x2a01e, 0x2a03e },
    { L"Pyron", 0x2a03e, 0x2a05e },
    { L"Gallon", 0x2a05e, 0x2a07e },
    { L"Aulbath", 0x2a07e, 0x2a09e },
    { L"Felicia", 0x2a09e, 0x2a0be },
    { L"Demitri", 0x2a0be, 0x2a0de },
    { L"Morrigan", 0x2a0de, 0x2a0fe },
};

const sDescTreeNode SPF2T_A_BONUS_COLLECTION[] =
{
    // Removed as we moved to a joined presentation
    //{ L"Character Select Icons", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_CSI_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_CSI_PALETTES) },
    //{ L"Character Select Icons (Faded)", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_CSIFADED_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_CSIFADED_PALETTES) },
    //{ L"Bonus", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_BONUS_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_BONUS_PALETTES) },

    { L"Intro/Main Menu", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_INTRO_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_INTRO_PALETTES) },
    { L"Tutorial", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_TUTORIAL_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_TUTORIAL_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_SELECT_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_SELECT_PALETTES) },
    { L"VS Screen", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_VS_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_VS_PALETTES) },
    { L"In-Game Extras", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_INGAME_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_INGAME_PALETTES) },
    { L"Vampire Saviour Unused", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_VAMPS_PALETTES, ARRAYSIZE(SPF2T_A_BONUS_VAMPS_PALETTES) },
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
    { L"Stages", DESC_NODETYPE_TREE, (void*)SPF2T_A_STAGE_COLLECTION, ARRAYSIZE(SPF2T_A_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SPF2T_A_BONUS_COLLECTION, ARRAYSIZE(SPF2T_A_BONUS_COLLECTION) },
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

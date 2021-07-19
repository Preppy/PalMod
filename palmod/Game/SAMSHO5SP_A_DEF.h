#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SAMSHO5SP_A_Amakusa_PALETTE_A. 
// * Update every array using SAMSHO5SP_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 SAMSHO5SP_A_IMGIDS_USED[] =
{
    indexSamSho5Sprites_Amakusa,
    indexSamSho5Sprites_Basara,
    indexSamSho5Sprites_Charlotte,
    indexSamSho5Sprites_Enja,
    indexSamSho5Sprites_Gaira,
    indexSamSho5Sprites_Galford,
    indexSamSho5Sprites_Gaoh,
    indexSamSho5Sprites_Genjuro,
    indexSamSho5Sprites_Hanzo,
    indexSamSho5Sprites_Haohmaru,
    indexSamSho5Sprites_Jubei,
    indexSamSho5Sprites_Kazuki,
    indexSamSho5Sprites_Kusaregedo,
    indexSamSho5Sprites_Kyoshiro,
    indexSamSho5Sprites_Mina,
    indexSamSho5Sprites_Mizuki,
    indexSamSho5Sprites_Nakoruru,
    indexSamSho5Sprites_Rasetsumaru,
    indexSamSho5Sprites_Rera,
    indexSamSho5Sprites_Rimururu,
    indexSamSho5Sprites_Shizumaru,
    indexSamSho5Sprites_Sogetsu,
    indexSamSho5Sprites_Suija,
    indexSamSho5Sprites_TamTam,
    indexSamSho5Sprites_Ukyo,
    indexSamSho5Sprites_Yoshitora,
    indexSamSho5Sprites_Yunfei,
    indexSamSho5Sprites_Zankuro,
    indexSamSho5Sprites_Portrait,
    indexSamSho5Sprites_Bonus
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_A[] =
{
    { L"Amakusa A (Normal)",                0xe0000, 0xe0040, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (Rage)",                  0xe0040, 0xe0080, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (SON)",                   0xe0240, 0xe0280, indexSamSho5Sprites_Amakusa },

    { L"Amakusa A (Burning)",               0xe00c0, 0xe0100, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (Shocked)",               0xe0100, 0xe0140, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (Frozen/Wet)",            0xe0140, 0xe0180, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (Ki)",                    0xe0180, 0xe01c0, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (Issen Trail)",           0xe0200, 0xe0240, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (Tenshou Fuu'ou Jin)",    0xe0280, 0xe0290 },
    { L"Amakusa A (Misc Poses/Effects)",    0xe02a0, 0xe02c0 },
    { L"Amakusa A (Oumagatoki/Misc)",       0xe02c0, 0xe02e0 },
    { L"Amakusa A (Nanji/Misc)",            0xe0300, 0xe0320 },
    { L"Amakusa A (Orb Slash Effect)",      0xe0390, 0xe03a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_B[] =
{
    { L"Amakusa B (Normal)", 0xe0400, 0xe0440, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Rage)", 0xe0440, 0xe0480, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (SON)", 0xe0640, 0xe0680, indexSamSho5Sprites_Amakusa },

    { L"Amakusa B (Burning)", 0xe04c0, 0xe0500, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Shocked)", 0xe0500, 0xe0540, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Frozen/Wet)", 0xe0540, 0xe0580, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Ki)", 0xe0580, 0xe05c0, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Issen Trail)", 0xe0600, 0xe0640, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Tenshou Fuu'ou Jin)", 0xe0680, 0xe0690 },
    { L"Amakusa B (Misc Poses/Effects)", 0xe06a0, 0xe06c0 },
    { L"Amakusa B (Oumagatoki/Misc)", 0xe06c0, 0xe06e0 },
    { L"Amakusa B (Nanji/Misc)", 0xe0700, 0xe0720 },
    { L"Amakusa B (Orb Slash Effect)", 0xe0790, 0xe07a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_C[] =
{
    { L"Amakusa C (Normal)", 0xe0800, 0xe0840, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Rage)", 0xe0840, 0xe0880, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (SON)", 0xe0a40, 0xe0a80, indexSamSho5Sprites_Amakusa },

    { L"Amakusa C (Burning)", 0xe08c0, 0xe0900, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Shocked)", 0xe0900, 0xe0940, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Frozen/Wet)", 0xe0940, 0xe0980, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Ki)", 0xe0980, 0xe09c0, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Issen Trail)", 0xe0a00, 0xe0a40, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Tenshou Fuu'ou Jin)", 0xe0a80, 0xe0a90 },
    { L"Amakusa C (Misc Poses/Effects)", 0xe0aa0, 0xe0ac0 },
    { L"Amakusa C (Oumagatoki/Misc)", 0xe0ac0, 0xe0ae0 },
    { L"Amakusa C (Nanji/Misc)", 0xe0b00, 0xe0b20 },
    { L"Amakusa C (Orb Slash Effect)", 0xe0b90, 0xe0ba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_D[] =
{
    { L"Amakusa D (Normal)", 0xe0c00, 0xe0c40, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Rage)", 0xe0c40, 0xe0c80, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (SON)", 0xe0e40, 0xe0e80, indexSamSho5Sprites_Amakusa },

    { L"Amakusa D (Burning)", 0xe0cc0, 0xe0d00, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Shocked)", 0xe0d00, 0xe0d40, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Frozen/Wet)", 0xe0d40, 0xe0d80, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Ki)", 0xe0d80, 0xe0dc0, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Issen Trail)", 0xe0e00, 0xe0e40, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Tenshou Fuu'ou Jin)", 0xe0e80, 0xe0e90 },
    { L"Amakusa D (Misc Poses/Effects)", 0xe0ea0, 0xe0ec0 },
    { L"Amakusa D (Oumagatoki/Misc)", 0xe0ec0, 0xe0ee0 },
    { L"Amakusa D (Nanji/Misc)", 0xe0f00, 0xe0f20 },
    { L"Amakusa D (Orb Slash Effect)", 0xe0f90, 0xe0fa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_A[] =
{
    { L"Basara A (Normal/Rage)", 0xdd000, 0xdd040, indexSamSho5Sprites_Basara },
    { L"Basara A (SON)", 0xdd240, 0xdd280, indexSamSho5Sprites_Basara },

    { L"Basara A (Burning)", 0xdd0c0, 0xdd100, indexSamSho5Sprites_Basara },
    { L"Basara A (Shocked)", 0xdd100, 0xdd140, indexSamSho5Sprites_Basara },
    { L"Basara A (Frozen/Wet)", 0xdd140, 0xdd180, indexSamSho5Sprites_Basara },
    { L"Basara A (Ki)", 0xdd180, 0xdd1c0, indexSamSho5Sprites_Basara },
    { L"Basara A (Nuedama/Sashiashi)", 0xdd1c0, 0xdd1e0 },
    { L"Basara A (Issen Trail)", 0xdd200, 0xdd240, indexSamSho5Sprites_Basara },
    { L"Basara A (Bats)", 0xdd280, 0xdd2a0 },
    { L"Basara A (Kagaribi)", 0xdd2a0, 0xdd2c0 },
    { L"Basara A (Kage Damashi)", 0xdd300, 0xdd340, indexSamSho5Sprites_Basara },
    { L"Basara A (Chisashi/Sorashi)", 0xdd340, 0xdd350 },
    { L"Basara A (Slash Effects)", 0xdd350, 0xdd360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_B[] =
{
    { L"Basara B (Normal/Rage)", 0xdd400, 0xdd440, indexSamSho5Sprites_Basara },
    { L"Basara B (SON)", 0xdd640, 0xdd680, indexSamSho5Sprites_Basara },

    { L"Basara B (Burning)", 0xdd4c0, 0xdd500, indexSamSho5Sprites_Basara },
    { L"Basara B (Shocked)", 0xdd500, 0xdd540, indexSamSho5Sprites_Basara },
    { L"Basara B (Frozen/Wet)", 0xdd540, 0xdd580, indexSamSho5Sprites_Basara },
    { L"Basara B (Ki)", 0xdd580, 0xdd5c0, indexSamSho5Sprites_Basara },
    { L"Basara B (Nuedama/Sashiashi)", 0xdd5c0, 0xdd5e0 },
    { L"Basara B (Issen Trail)", 0xdd600, 0xdd640, indexSamSho5Sprites_Basara },
    { L"Basara B (Bats)", 0xdd680, 0xdd6a0 },
    { L"Basara B (Kagaribi)", 0xdd6a0, 0xdd6c0 },
    { L"Basara B (Kage Damashi)", 0xdd700, 0xdd740, indexSamSho5Sprites_Basara },
    { L"Basara B (Chisashi/Sorashi)", 0xdd740, 0xdd750 },
    { L"Basara B (Slash Effects)", 0xdd750, 0xdd760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_C[] =
{
    { L"Basara C (Normal/Rage)", 0xdd800, 0xdd840, indexSamSho5Sprites_Basara },
    { L"Basara C (SON)", 0xdda40, 0xdda80, indexSamSho5Sprites_Basara },

    { L"Basara C (Burning)", 0xdd8c0, 0xdd900, indexSamSho5Sprites_Basara },
    { L"Basara C (Shocked)", 0xdd900, 0xdd940, indexSamSho5Sprites_Basara },
    { L"Basara C (Frozen/Wet)", 0xdd940, 0xdd980, indexSamSho5Sprites_Basara },
    { L"Basara C (Ki)", 0xdd980, 0xdd9c0, indexSamSho5Sprites_Basara },
    { L"Basara C (Nuedama/Sashiashi)", 0xdd9c0, 0xdd9e0 },
    { L"Basara C (Issen Trail)", 0xdda00, 0xdda40, indexSamSho5Sprites_Basara },
    { L"Basara C (Bats)", 0xdda80, 0xddaa0 },
    { L"Basara C (Kagaribi)", 0xddaa0, 0xddac0 },
    { L"Basara C (Kage Damashi)", 0xddb00, 0xddb40, indexSamSho5Sprites_Basara },
    { L"Basara C (Chisashi/Sorashi)", 0xddb40, 0xddb50 },
    { L"Basara C (Slash Effects)", 0xddb50, 0xddb60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_D[] =
{
    { L"Basara D (Normal/Rage)", 0xddc00, 0xddc40, indexSamSho5Sprites_Basara },
    { L"Basara D (SON)", 0xdde40, 0xdde80, indexSamSho5Sprites_Basara },

    { L"Basara D (Burning)", 0xddcc0, 0xddd00, indexSamSho5Sprites_Basara },
    { L"Basara D (Shocked)", 0xddd00, 0xddd40, indexSamSho5Sprites_Basara },
    { L"Basara D (Frozen/Wet)", 0xddd40, 0xddd80, indexSamSho5Sprites_Basara },
    { L"Basara D (Ki)", 0xddd80, 0xdddc0, indexSamSho5Sprites_Basara },
    { L"Basara D (Nuedama/Sashiashi)", 0xdddc0, 0xddde0 },
    { L"Basara D (Issen Trail)", 0xdde00, 0xdde40, indexSamSho5Sprites_Basara },
    { L"Basara D (Bats)", 0xdde80, 0xddea0 },
    { L"Basara D (Kagaribi)", 0xddea0, 0xddec0 },
    { L"Basara D (Kage Damashi)", 0xddf00, 0xddf40, indexSamSho5Sprites_Basara },
    { L"Basara D (Chisashi/Sorashi)", 0xddf40, 0xddf50 },
    { L"Basara D (Slash Effects)", 0xddf50, 0xddf60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_A[] =
{
    { L"Charlotte A (Normal)", 0xe3000, 0xe3040, indexSamSho5Sprites_Charlotte, 0x00, &pairNext12 },
    { L"Charlotte A (Rage)", 0xe3040, 0xe3080, indexSamSho5Sprites_Charlotte, 0x00, &pairNext11 },
    { L"Charlotte A (SON)", 0xe3240, 0xe3280, indexSamSho5Sprites_Charlotte, 0x00, &pairNext10 },

    { L"Charlotte A (WFT Flower 1)", 0xe3080, 0xe30a0 },
    { L"Charlotte A (WFT Flower 2)", 0xe30a0, 0xe30c0 },

    { L"Charlotte A (Burning)", 0xe30c0, 0xe3100, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A (Shocked)", 0xe3100, 0xe3140, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A (Frozen/Wet)", 0xe3140, 0xe3180, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A (Ki)", 0xe3180, 0xe31c0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A (Issen Trail)", 0xe3200, 0xe3240, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A (Power Gradation/Bayonette Lunge)", 0xe3280, 0xe32a0 },
    { L"Charlotte A (Lion Lance)", 0xe32a0, 0xe32c0 },
    { L"Charlotte A (Rose)", 0xe32e0, 0xe3300, indexSamSho5Sprites_Charlotte, 0x01 },
    { L"Charlotte A (Splash Fount 1)", 0xe3340, 0xe3350 },
    { L"Charlotte A (Slash Effect)", 0xe3350, 0xe3360 },
    { L"Charlotte A (Splash Fount 2)", 0xe3360, 0xe3370 },
    { L"Charlotte A (WFT/Overkill Slash Effect)", 0xe3370, 0xe3380 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_B[] =
{
    { L"Charlotte B (Normal)", 0xe3400, 0xe3440, indexSamSho5Sprites_Charlotte, 0x00, &pairNext12 },
    { L"Charlotte B (Rage)", 0xe3440, 0xe3480, indexSamSho5Sprites_Charlotte, 0x00, &pairNext11 },
    { L"Charlotte B (SON)", 0xe3640, 0xe3680, indexSamSho5Sprites_Charlotte, 0x00, &pairNext10 },

    { L"Charlotte B (WFT Flower 1)", 0xe3480, 0xe34a0 },
    { L"Charlotte B (WFT Flower 2)", 0xe34a0, 0xe34c0 },

    { L"Charlotte B (Burning)", 0xe34c0, 0xe3500, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Shocked)", 0xe3500, 0xe3540, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Frozen/Wet)", 0xe3540, 0xe3580, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Ki)", 0xe3580, 0xe35c0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Issen Trail)", 0xe3600, 0xe3640, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Power Gradation/Bayonette Lunge)", 0xe3680, 0xe36a0 },
    { L"Charlotte B (Lion Lance)", 0xe36a0, 0xe36c0 },
    { L"Charlotte B (Rose)", 0xe36e0, 0xe3700, indexSamSho5Sprites_Charlotte, 0x01 },
    { L"Charlotte B (Splash Fount 1)", 0xe3740, 0xe3750 },
    { L"Charlotte B (Slash Effect)", 0xe3750, 0xe3760 },
    { L"Charlotte B (Splash Fount 2)", 0xe3760, 0xe3770 },
    { L"Charlotte B (WFT/Overkill Slash Effect)", 0xe3770, 0xe3780 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_C[] =
{
    { L"Charlotte C (Normal)", 0xe3800, 0xe3840, indexSamSho5Sprites_Charlotte, 0x00, &pairNext12 },
    { L"Charlotte C (Rage)", 0xe3840, 0xe3880, indexSamSho5Sprites_Charlotte, 0x00, &pairNext11 },
    { L"Charlotte C (SON)", 0xe3a40, 0xe3a80, indexSamSho5Sprites_Charlotte, 0x00, &pairNext10 },

    { L"Charlotte C (WFT Flower 1)", 0xe3880, 0xe38a0 },
    { L"Charlotte C (WFT Flower 2)", 0xe38a0, 0xe38c0 },

    { L"Charlotte C (Burning)", 0xe38c0, 0xe3900, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Shocked)", 0xe3900, 0xe3940, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Frozen/Wet)", 0xe3940, 0xe3980, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Ki)", 0xe3980, 0xe39c0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Issen Trail)", 0xe3a00, 0xe3a40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Power Gradation/Bayonette Lunge)", 0xe3a80, 0xe3aa0 },
    { L"Charlotte C (Lion Lance)", 0xe3aa0, 0xe3ac0 },
    { L"Charlotte C (Rose)", 0xe3ae0, 0xe3b00, indexSamSho5Sprites_Charlotte, 0x01 },
    { L"Charlotte C (Splash Fount 1)", 0xe3b40, 0xe3b50 },
    { L"Charlotte C (Slash Effect)", 0xe3b50, 0xe3b60 },
    { L"Charlotte C (Splash Fount 2)", 0xe3b60, 0xe3b70 },
    { L"Charlotte C (WFT/Overkill Slash Effect)", 0xe3b70, 0xe3b80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_D[] =
{
    { L"Charlotte D (Normal)", 0xe3c00, 0xe3c40, indexSamSho5Sprites_Charlotte, 0x00, &pairNext12 },
    { L"Charlotte D (Rage)", 0xe3c40, 0xe3c80, indexSamSho5Sprites_Charlotte, 0x00, &pairNext11 },
    { L"Charlotte D (SON)", 0xe3e40, 0xe3e80, indexSamSho5Sprites_Charlotte, 0x00, &pairNext10 },

    { L"Charlotte D (WFT Flower 1)", 0xe3c80, 0xe3ca0 },
    { L"Charlotte D (WFT Flower 2)", 0xe3ca0, 0xe3cc0 },

    { L"Charlotte D (Burning)", 0xe3cc0, 0xe3d00, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Shocked)", 0xe3d00, 0xe3d40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Frozen/Wet)", 0xe3d40, 0xe3d80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Ki)", 0xe3d80, 0xe3dc0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Issen Trail)", 0xe3e00, 0xe3e40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Power Gradation/Bayonette Lunge)", 0xe3e80, 0xe3ea0 },
    { L"Charlotte D (Lion Lance)", 0xe3ea0, 0xe3ec0 },
    { L"Charlotte D (Rose)", 0xe3ee0, 0xe3f00, indexSamSho5Sprites_Charlotte, 0x01 },
    { L"Charlotte D (Splash Fount 1)", 0xe3f40, 0xe3f50 },
    { L"Charlotte D (Slash Effect)", 0xe3f50, 0xe3f60 },
    { L"Charlotte D (Splash Fount 2)", 0xe3f60, 0xe3f70 },
    { L"Charlotte D (WFT/Overkill Slash Effect)", 0xe3f70, 0xe3f80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_A[] =
{
    { L"Enja A (Normal)", 0xe9000, 0xe9040, indexSamSho5Sprites_Enja },
    { L"Enja A (Rage)", 0xe9040, 0xe9080, indexSamSho5Sprites_Enja },
    { L"Enja A (SON)", 0xe9240, 0xe9280, indexSamSho5Sprites_Enja },

    { L"Enja A (Burning)", 0xe90c0, 0xe9100, indexSamSho5Sprites_Enja },
    { L"Enja A (Shocked)", 0xe9100, 0xe9140, indexSamSho5Sprites_Enja },
    { L"Enja A (Frozen/Wet)", 0xe9140, 0xe9180, indexSamSho5Sprites_Enja },
    { L"Enja A (Ki)", 0xe9180, 0xe91c0, indexSamSho5Sprites_Enja },
    { L"Enja A (Issen Trail)", 0xe9200, 0xe9240, indexSamSho5Sprites_Enja },
    { L"Enja A (Special Effects 1)", 0xe9300, 0xe9320 },
    { L"Enja A (Special Effects 2)", 0xe9320, 0xe9340 },
    { L"Enja A (Slash/Misc Effects)", 0xe9340, 0xe9360 },

    { L"Enja A (WFT Whiff)", 0xe9380, 0xe93a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_B[] =
{
    { L"Enja B (Normal)", 0xe9400, 0xe9440, indexSamSho5Sprites_Enja },
    { L"Enja B (Rage)", 0xe9440, 0xe9480, indexSamSho5Sprites_Enja },
    { L"Enja B (SON)", 0xe9640, 0xe9680, indexSamSho5Sprites_Enja },

    { L"Enja B (Burning)", 0xe94c0, 0xe9500, indexSamSho5Sprites_Enja },
    { L"Enja B (Shocked)", 0xe9500, 0xe9540, indexSamSho5Sprites_Enja },
    { L"Enja B (Frozen/Wet)", 0xe9540, 0xe9580, indexSamSho5Sprites_Enja },
    { L"Enja B (Ki)", 0xe9580, 0xe95c0, indexSamSho5Sprites_Enja },
    { L"Enja B (Issen Trail)", 0xe9600, 0xe9640, indexSamSho5Sprites_Enja },
    { L"Enja B (Special Effects 1)", 0xe9700, 0xe9720 },
    { L"Enja B (Special Effects 2)", 0xe9720, 0xe9740 },
    { L"Enja B (Slash/Misc Effects)", 0xe9740, 0xe9760 },

    { L"Enja B (WFT Whiff)", 0xe9780, 0xe97a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_C[] =
{
    { L"Enja C (Normal)", 0xe9800, 0xe9840, indexSamSho5Sprites_Enja },
    { L"Enja C (Rage)", 0xe9840, 0xe9880, indexSamSho5Sprites_Enja },
    { L"Enja C (SON)", 0xe9a40, 0xe9a80, indexSamSho5Sprites_Enja },

    { L"Enja C (Burning)", 0xe98c0, 0xe9900, indexSamSho5Sprites_Enja },
    { L"Enja C (Shocked)", 0xe9900, 0xe9940, indexSamSho5Sprites_Enja },
    { L"Enja C (Frozen/Wet)", 0xe9940, 0xe9980, indexSamSho5Sprites_Enja },
    { L"Enja C (Ki)", 0xe9980, 0xe99c0, indexSamSho5Sprites_Enja },
    { L"Enja C (Issen Trail)", 0xe9a00, 0xe9a40, indexSamSho5Sprites_Enja },
    { L"Enja C (Special Effects 1)", 0xe9b00, 0xe9b20 },
    { L"Enja C (Special Effects 2)", 0xe9b20, 0xe9b40 },
    { L"Enja C (Slash/Misc Effects)", 0xe9b40, 0xe9b60 },

    { L"Enja C (WFT Whiff)", 0xe9b80, 0xe9ba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_D[] =
{
    { L"Enja D (Normal)", 0xe9c00, 0xe9c40, indexSamSho5Sprites_Enja },
    { L"Enja D (Rage)", 0xe9c40, 0xe9c80, indexSamSho5Sprites_Enja },
    { L"Enja D (SON)", 0xe9e40, 0xe9e80, indexSamSho5Sprites_Enja },

    { L"Enja D (Burning)", 0xe9cc0, 0xe9d00, indexSamSho5Sprites_Enja },
    { L"Enja D (Shocked)", 0xe9d00, 0xe9d40, indexSamSho5Sprites_Enja },
    { L"Enja D (Frozen/Wet)", 0xe9d40, 0xe9d80, indexSamSho5Sprites_Enja },
    { L"Enja D (Ki)", 0xe9d80, 0xe9dc0, indexSamSho5Sprites_Enja },
    { L"Enja D (Issen Trail)", 0xe9e00, 0xe9e40, indexSamSho5Sprites_Enja },
    { L"Enja D (Special Effects 1)", 0xe9f00, 0xe9f20 },
    { L"Enja D (Special Effects 2)", 0xe9f20, 0xe9f40 },
    { L"Enja D (Slash/Misc Effects)", 0xe9f40, 0xe9f60 },

    { L"Enja D (WFT Whiff)", 0xe9f80, 0xe9fa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_A[] =
{
    { L"Gaira A (Normal)", 0xdf000, 0xdf040, indexSamSho5Sprites_Gaira },
    { L"Gaira A (Rage)", 0xdf040, 0xdf080, indexSamSho5Sprites_Gaira },
    { L"Gaira A (SON)", 0xdf240, 0xdf280, indexSamSho5Sprites_Gaira },

    { L"Gaira A (Enshinsatsu)", 0xdf080, 0xdf090 },
    { L"Gaira A (Burning)", 0xdf0c0, 0xdf100, indexSamSho5Sprites_Gaira },
    { L"Gaira A (Shocked)", 0xdf100, 0xdf140, indexSamSho5Sprites_Gaira },
    { L"Gaira A (Frozen/Wet)", 0xdf140, 0xdf180, indexSamSho5Sprites_Gaira },
    { L"Gaira A (Ki)", 0xdf180, 0xdf1c0, indexSamSho5Sprites_Gaira },
    { L"Gaira A (Beads Slash Effect)", 0xdf1c0, 0xdf1e0 },
    { L"Gaira A (Jishin Gan/Overkill)", 0xdf1e0, 0xdf200 },
    { L"Gaira A (Issen Trail)", 0xdf200, 0xdf240, indexSamSho5Sprites_Gaira },
    { L"Gaira A (Niou Bakushin Satsu 1)", 0xdf280, 0xdf290 },
    { L"Gaira A (Niou Bakushin Satsu 2)", 0xdf2c0, 0xdf2d0 },
    { L"Gaira A (Standing Bell Pose)", 0xdf2e0, 0xdf300 },
    { L"Gaira A (Stone Gaira/Overkill)", 0xdf300, 0xdf320 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_B[] =
{
    { L"Gaira B (Normal)", 0xdf400, 0xdf440, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Rage)", 0xdf440, 0xdf480, indexSamSho5Sprites_Gaira },
    { L"Gaira B (SON)", 0xdf640, 0xdf680, indexSamSho5Sprites_Gaira },

    { L"Gaira B (Enshinsatsu)", 0xdf480, 0xdf490 },
    { L"Gaira B (Burning)", 0xdf4c0, 0xdf500, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Shocked)", 0xdf500, 0xdf540, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Frozen/Wet)", 0xdf540, 0xdf580, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Ki)", 0xdf580, 0xdf5c0, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Beads Slash Effect)", 0xdf5c0, 0xdf5e0 },
    { L"Gaira B (Jishin Gan/Overkill)", 0xdf5e0, 0xdf600 },
    { L"Gaira B (Issen Trail)", 0xdf600, 0xdf640, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Niou Bakushin Satsu 1)", 0xdf680, 0xdf690 },
    { L"Gaira B (Niou Bakushin Satsu 2)", 0xdf6c0, 0xdf6d0 },
    { L"Gaira B (Standing Bell Pose)", 0xdf6e0, 0xdf700 },
    { L"Gaira B (Stone Gaira/Overkill)", 0xdf700, 0xdf720 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_C[] =
{
    { L"Gaira C (Normal)", 0xdf800, 0xdf840, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Rage)", 0xdf840, 0xdf880, indexSamSho5Sprites_Gaira },
    { L"Gaira C (SON)", 0xdfa40, 0xdfa80, indexSamSho5Sprites_Gaira },

    { L"Gaira C (Enshinsatsu)", 0xdf880, 0xdf890 },
    { L"Gaira C (Burning)", 0xdf8c0, 0xdf900, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Shocked)", 0xdf900, 0xdf940, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Frozen/Wet)", 0xdf940, 0xdf980, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Ki)", 0xdf980, 0xdf9c0, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Beads Slash Effect)", 0xdf9c0, 0xdf9e0 },
    { L"Gaira C (Jishin Gan/Overkill)", 0xdf9e0, 0xdfa00 },
    { L"Gaira C (Issen Trail)", 0xdfa00, 0xdfa40, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Niou Bakushin Satsu 1)", 0xdfa80, 0xdfa90 },
    { L"Gaira C (Niou Bakushin Satsu 2)", 0xdfac0, 0xdfad0 },
    { L"Gaira C (Standing Bell Pose)", 0xdfae0, 0xdfb00 },
    { L"Gaira C (Stone Gaira/Overkill)", 0xdfb00, 0xdfb20 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_D[] =
{
    { L"Gaira D (Normal)", 0xdfc00, 0xdfc40, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Rage)", 0xdfc40, 0xdfc80, indexSamSho5Sprites_Gaira },
    { L"Gaira D (SON)", 0xdfe40, 0xdfe80, indexSamSho5Sprites_Gaira },

    { L"Gaira D (Enshinsatsu)", 0xdfc80, 0xdfc90 },
    { L"Gaira D (Burning)", 0xdfcc0, 0xdfd00, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Shocked)", 0xdfd00, 0xdfd40, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Frozen/Wet)", 0xdfd40, 0xdfd80, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Ki)", 0xdfd80, 0xdfdc0, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Beads Slash Effect)", 0xdfdc0, 0xdfde0 },
    { L"Gaira D (Jishin Gan/Overkill)", 0xdfde0, 0xdfe00 },
    { L"Gaira D (Issen Trail)", 0xdfe00, 0xdfe40, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Niou Bakushin Satsu 1)", 0xdfe80, 0xdfe90 },
    { L"Gaira D (Niou Bakushin Satsu 2)", 0xdfec0, 0xdfed0 },
    { L"Gaira D (Standing Bell Pose)", 0xdfee0, 0xdff00 },
    { L"Gaira D (Stone Gaira/Overkill)", 0xdff00, 0xdff20 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_A[] =
{
    { L"Galford A (Normal)", 0xd9000, 0xd9040, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford A (Rage)", 0xd9040, 0xd9080, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford A (SON)", 0xd9240, 0xd9280, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy A", 0xd9280, 0xd92A0, indexSamSho5Sprites_Galford, 1 },

    { L"Galford A (Burning)", 0xd90c0, 0xd9100, indexSamSho5Sprites_Galford },
    { L"Galford A (Shocked)", 0xd9100, 0xd9140, indexSamSho5Sprites_Galford },
    { L"Galford A (Frozen/Wet)", 0xd9140, 0xd9180, indexSamSho5Sprites_Galford },
    { L"Galford A (Ki)", 0xd9180, 0xd91c0, indexSamSho5Sprites_Galford },
    { L"Galford A (Issen Trail)", 0xd9200, 0xd9240, indexSamSho5Sprites_Galford },
    { L"Galford A (Plasma Factor)", 0xd92a0, 0xd92c0 },
    { L"Galford A (Plasma Blade)", 0xd92c0, 0xd92e0 },
    { L"Galford A (Strike Heads/Poppy)", 0xd92e0, 0xd9300 },
    { L"Galford A (Replica Effect)", 0xd9320, 0xd9340 },
    { L"Galford A (Replica Attack/Slash Effects)", 0xd9340, 0xd9360 },
    { L"Galford A (Imitate Replica)", 0xd9360, 0xd9380 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_B[] =
{
    { L"Galford B (Normal)", 0xd9400, 0xd9440, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford B (Rage)", 0xd9440, 0xd9480, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford B (SON)", 0xd9640, 0xd9680, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy B", 0xd9680, 0xd96A0, indexSamSho5Sprites_Galford, 1 },

    { L"Galford B (Burning)", 0xd94c0, 0xd9500, indexSamSho5Sprites_Galford },
    { L"Galford B (Shocked)", 0xd9500, 0xd9540, indexSamSho5Sprites_Galford },
    { L"Galford B (Frozen/Wet)", 0xd9540, 0xd9580, indexSamSho5Sprites_Galford },
    { L"Galford B (Ki)", 0xd9580, 0xd95c0, indexSamSho5Sprites_Galford },
    { L"Galford B (Issen Trail)", 0xd9600, 0xd9640, indexSamSho5Sprites_Galford },
    { L"Galford B (Plasma Factor)", 0xd96a0, 0xd96c0 },
    { L"Galford B (Plasma Blade)", 0xd96c0, 0xd96e0 },
    { L"Galford B (Strike Heads/Poppy)", 0xd96e0, 0xd9700 },
    { L"Galford B (Replica Effect)", 0xd9720, 0xd9740 },
    { L"Galford B (Replica Attack/Slash Effects)", 0xd9740, 0xd9760 },
    { L"Galford B (Imitate Replica)", 0xd9760, 0xd9780 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_C[] =
{
    { L"Galford C (Normal)", 0xd9800, 0xd9840, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford C (Rage)", 0xd9840, 0xd9880, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford C (SON)", 0xd9a40, 0xd9a80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy C", 0xd9A80, 0xd9AA0, indexSamSho5Sprites_Galford, 1 },

    { L"Galford C (Burning)", 0xd98c0, 0xd9900, indexSamSho5Sprites_Galford },
    { L"Galford C (Shocked)", 0xd9900, 0xd9940, indexSamSho5Sprites_Galford },
    { L"Galford C (Frozen/Wet)", 0xd9940, 0xd9980, indexSamSho5Sprites_Galford },
    { L"Galford C (Ki)", 0xd9980, 0xd99c0, indexSamSho5Sprites_Galford },
    { L"Galford C (Issen Trail)", 0xd9a00, 0xd9a40, indexSamSho5Sprites_Galford },
    { L"Galford C (Plasma Factor)", 0xd9aa0, 0xd9ac0 },
    { L"Galford C (Plasma Blade)", 0xd9ac0, 0xd9ae0 },
    { L"Galford C (Strike Heads/Poppy)", 0xd9ae0, 0xd9b00 },
    { L"Galford C (Replica Effect)", 0xd9b20, 0xd9b40 },
    { L"Galford C (Replica Attack/Slash Effects)", 0xd9b40, 0xd9b60 },
    { L"Galford C (Imitate Replica)", 0xd9b60, 0xd9b80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_D[] =
{
    { L"Galford D (Normal)", 0xd9c00, 0xd9c40, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford D (Rage)", 0xd9c40, 0xd9c80, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford D (SON)", 0xd9e40, 0xd9e80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy D", 0xd9e80, 0xd9eA0, indexSamSho5Sprites_Galford, 1 },

    { L"Galford D (Burning)", 0xd9cc0, 0xd9d00, indexSamSho5Sprites_Galford },
    { L"Galford D (Shocked)", 0xd9d00, 0xd9d40, indexSamSho5Sprites_Galford },
    { L"Galford D (Frozen/Wet)", 0xd9d40, 0xd9d80, indexSamSho5Sprites_Galford },
    { L"Galford D (Ki)", 0xd9d80, 0xd9dc0, indexSamSho5Sprites_Galford },
    { L"Galford D (Issen Trail)", 0xd9e00, 0xd9e40, indexSamSho5Sprites_Galford },
    { L"Galford D (Plasma Factor)", 0xd9ea0, 0xd9ec0 },
    { L"Galford D (Plasma Blade)", 0xd9ec0, 0xd9ee0 },
    { L"Galford D (Strike Heads/Poppy)", 0xd9ee0, 0xd9f00 },
    { L"Galford D (Replica Effect)", 0xd9f20, 0xd9f40 },
    { L"Galford D (Replica Attack/Slash Effects)", 0xd9f40, 0xd9f60 },
    { L"Galford D (Imitate Replica)", 0xd9f60, 0xd9f80 },
};
const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_A[] =
{
    { L"Gaoh A (Normal)", 0xef000, 0xef040, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Rage)", 0xef040, 0xef080, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (SON)", 0xef240, 0xef280, indexSamSho5Sprites_Gaoh },

    { L"Gaoh A (Burning)", 0xef0c0, 0xef100, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Shocked)", 0xef100, 0xef140, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Frozen/Wet)", 0xef140, 0xef180, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Ki)", 0xef180, 0xef1c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Issen Trail)", 0xef200, 0xef240, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Overkill 1)", 0xef280, 0xef2c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Overkill 2)", 0xef2c0, 0xef2e0 },
    { L"Gaoh A (Overkill 3)", 0xef2e0, 0xef300 },
    { L"Gaoh A (Slash Effects)", 0xef340, 0xef360 },
    { L"Gaoh A (Misc Specials)", 0xef360, 0xef380 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_B[] =
{
    { L"Gaoh B (Normal)", 0xef400, 0xef440, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Rage)", 0xef440, 0xef480, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (SON)", 0xef640, 0xef680, indexSamSho5Sprites_Gaoh },

    { L"Gaoh B (Burning)", 0xef4c0, 0xef500, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Shocked)", 0xef500, 0xef540, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Frozen/Wet)", 0xef540, 0xef580, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Ki)", 0xef580, 0xef5c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Issen Trail)", 0xef600, 0xef640, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Overkill 1)", 0xef680, 0xef6c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Overkill 2)", 0xef6c0, 0xef6e0 },
    { L"Gaoh B (Overkill 3)", 0xef6e0, 0xef700 },
    { L"Gaoh B (Slash Effects)", 0xef740, 0xef760 },
    { L"Gaoh B (Misc Specials)", 0xef760, 0xef780 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_C[] =
{
    { L"Gaoh C (Normal)", 0xef800, 0xef840, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Rage)", 0xef840, 0xef880, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (SON)", 0xefa40, 0xefa80, indexSamSho5Sprites_Gaoh },

    { L"Gaoh C (Burning)", 0xef8c0, 0xef900, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Shocked)", 0xef900, 0xef940, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Frozen/Wet)", 0xef940, 0xef980, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Ki)", 0xef980, 0xef9c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Issen Trail)", 0xefa00, 0xefa40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Overkill 1)", 0xefa80, 0xefac0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Overkill 2)", 0xefac0, 0xefae0 },
    { L"Gaoh C (Overkill 3)", 0xefae0, 0xefb00 },
    { L"Gaoh C (Slash Effects)", 0xefb40, 0xefb60 },
    { L"Gaoh C (Misc Specials)", 0xefb60, 0xefb80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_D[] =
{
    { L"Gaoh D (Normal)", 0xefc00, 0xefc40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Rage)", 0xefc40, 0xefc80, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (SON)", 0xefe40, 0xefe80, indexSamSho5Sprites_Gaoh },

    { L"Gaoh D (Burning)", 0xefcc0, 0xefd00, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Shocked)", 0xefd00, 0xefd40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Frozen/Wet)", 0xefd40, 0xefd80, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Ki)", 0xefd80, 0xefdc0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Issen Trail)", 0xefe00, 0xefe40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Overkill 1)", 0xefe80, 0xefec0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Overkill 2)", 0xefec0, 0xefee0 },
    { L"Gaoh D (Overkill 3)", 0xefee0, 0xeff00 },
    { L"Gaoh D (Slash Effects)", 0xeff40, 0xeff60 },
    { L"Gaoh D (Misc Specials)", 0xeff60, 0xeff80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_A[] =
{
    { L"Genjuro A (Normal)", 0xdc000, 0xdc040, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (Rage)", 0xdc040, 0xdc080, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (SON)", 0xdc240, 0xdc280, indexSamSho5Sprites_Genjuro },

    { L"Genjuro A (Darkest Card Effects)", 0xdc0a0, 0xdc0c0 },
    { L"Genjuro A (Burning)", 0xdc0c0, 0xdc100, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (Shocked)", 0xdc100, 0xdc140, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (Frozen/Wet)", 0xdc140, 0xdc180, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (Ki)", 0xdc180, 0xdc1c0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (Colored Card Effect)", 0xdc1c0, 0xdc1e0 },
    { L"Genjuro A (Darker Card Effect)", 0xdc1e0, 0xdc200 },
    { L"Genjuro A (Issen Trail)", 0xdc200, 0xdc240, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (Oukazan 1)", 0xdc280, 0xdc2a0 },
    { L"Genjuro A (Bowl/Specials Slash Effect)", 0xdc2a0, 0xdc2c0 },
    { L"Genjuro A (Oukazan 2/Slash Effects)", 0xdc340, 0xdc360 },
    { L"Genjuro A (White & Blue Card)", 0xdc3e0, 0xdc400 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_B[] =
{
    { L"Genjuro B (Normal)", 0xdc400, 0xdc440, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Rage)", 0xdc440, 0xdc480, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (SON)", 0xdc640, 0xdc680, indexSamSho5Sprites_Genjuro },

    { L"Genjuro B (Darkest Card Effects)", 0xdc4a0, 0xdc4c0 },
    { L"Genjuro B (Burning)", 0xdc4c0, 0xdc500, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Shocked)", 0xdc500, 0xdc540, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Frozen/Wet)", 0xdc540, 0xdc580, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Ki)", 0xdc580, 0xdc5c0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Colored Card Effect)", 0xdc5c0, 0xdc5e0 },
    { L"Genjuro B (Darker Card Effect)", 0xdc5e0, 0xdc600 },
    { L"Genjuro B (Issen Trail)", 0xdc600, 0xdc640, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Oukazan 1)", 0xdc680, 0xdc6a0 },
    { L"Genjuro B (Bowl/Specials Slash Effect)", 0xdc6a0, 0xdc6c0 },
    { L"Genjuro B (Oukazan 2/Slash Effects)", 0xdc740, 0xdc760 },
    { L"Genjuro B (White & Blue Card)", 0xdc7e0, 0xdc800 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_C[] =
{
    { L"Genjuro C (Normal)", 0xdc800, 0xdc840, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Rage)", 0xdc840, 0xdc880, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (SON)", 0xdca40, 0xdca80, indexSamSho5Sprites_Genjuro },

    { L"Genjuro C (Darkest Card Effects)", 0xdc8a0, 0xdc8c0 },
    { L"Genjuro C (Burning)", 0xdc8c0, 0xdc900, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Shocked)", 0xdc900, 0xdc940, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Frozen/Wet)", 0xdc940, 0xdc980, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Ki)", 0xdc980, 0xdc9c0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Colored Card Effect)", 0xdc9c0, 0xdc9e0 },
    { L"Genjuro C (Darker Card Effect)", 0xdc9e0, 0xdca00 },
    { L"Genjuro C (Issen Trail)", 0xdca00, 0xdca40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Oukazan 1)", 0xdca80, 0xdcaa0 },
    { L"Genjuro C (Bowl/Specials Slash Effect)", 0xdcaa0, 0xdcac0 },
    { L"Genjuro C (Oukazan 2/Slash Effects)", 0xdcb40, 0xdcb60 },
    { L"Genjuro C (White & Blue Card)", 0xdcbe0, 0xdcc00 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_D[] =
{
    { L"Genjuro D (Normal)", 0xdcc00, 0xdcc40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Rage)", 0xdcc40, 0xdcc80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (SON)", 0xdce40, 0xdce80, indexSamSho5Sprites_Genjuro },

    { L"Genjuro D (Darkest Card Effects)", 0xdcca0, 0xdccc0 },
    { L"Genjuro D (Burning)", 0xdccc0, 0xdcd00, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Shocked)", 0xdcd00, 0xdcd40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Frozen/Wet)", 0xdcd40, 0xdcd80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Ki)", 0xdcd80, 0xdcdc0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Colored Card Effect)", 0xdcdc0, 0xdcde0 },
    { L"Genjuro D (Darker Card Effect)", 0xdcde0, 0xdce00 },
    { L"Genjuro D (Issen Trail)", 0xdce00, 0xdce40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Oukazan 1)", 0xdce80, 0xdcea0 },
    { L"Genjuro D (Bowl/Specials Slash Effect)", 0xdcea0, 0xdcec0 },
    { L"Genjuro D (Oukazan 2/Slash Effects)", 0xdcf40, 0xdcf60 },
    { L"Genjuro D (White & Blue Card)", 0xdcfe0, 0xdd000 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_A[] =
{
    { L"Hanzo A (Normal)", 0xd8000, 0xd8040, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (Rage)", 0xd8040, 0xd8080, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (SON)", 0xd8240, 0xd8280, indexSamSho5Sprites_Hanzo },

    { L"Hanzo A (Burning)", 0xd80c0, 0xd8100, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (Shocked)", 0xd8100, 0xd8140, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (Frozen/Wet)", 0xd8140, 0xd8180, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (Ki)", 0xd8180, 0xd81c0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (Issen Trail)", 0xd8200, 0xd8240, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (Baku'en Ryuu/Mozu Otoshi)", 0xd8280, 0xd82a0 },
    { L"Hanzo A (Bone Break Effect)", 0xd82a0, 0xd82c0 },
    { L"Hanzo A (Ninpou Effect/Shuriken)", 0xd8320, 0xd8340 },
    { L"Hanzo A (Flame Pose/Slash Effects)", 0xd8340, 0xd8360 },
    { L"Hanzo A (Migawari no Jutsu)", 0xd8360, 0xd8380 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_B[] =
{
    { L"Hanzo B (Normal)", 0xd8400, 0xd8440, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Rage)", 0xd8440, 0xd8480, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (SON)", 0xd8640, 0xd8680, indexSamSho5Sprites_Hanzo },

    { L"Hanzo B (Burning)", 0xd84c0, 0xd8500, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Shocked)", 0xd8500, 0xd8540, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Frozen/Wet)", 0xd8540, 0xd8580, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Ki)", 0xd8580, 0xd85c0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Issen Trail)", 0xd8600, 0xd8640, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Baku'en Ryuu/Mozu Otoshi)", 0xd8680, 0xd86a0 },
    { L"Hanzo B (Bone Break Effect)", 0xd86a0, 0xd86c0 },
    { L"Hanzo B (Ninpou Effect/Shuriken)", 0xd8720, 0xd8740 },
    { L"Hanzo B (Flame Pose/Slash Effects)", 0xd8740, 0xd8760 },
    { L"Hanzo B (Migawari no Jutsu)", 0xd8760, 0xd8780 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_C[] =
{
    { L"Hanzo C (Normal)", 0xd8800, 0xd8840, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Rage)", 0xd8840, 0xd8880, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (SON)", 0xd8a40, 0xd8a80, indexSamSho5Sprites_Hanzo },

    { L"Hanzo C (Burning)", 0xd88c0, 0xd8900, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Shocked)", 0xd8900, 0xd8940, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Frozen/Wet)", 0xd8940, 0xd8980, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Ki)", 0xd8980, 0xd89c0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Issen Trail)", 0xd8a00, 0xd8a40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Baku'en Ryuu/Mozu Otoshi)", 0xd8a80, 0xd8aa0 },
    { L"Hanzo C (Bone Break Effect)", 0xd8aa0, 0xd8ac0 },
    { L"Hanzo C (Ninpou Effect/Shuriken)", 0xd8b20, 0xd8b40 },
    { L"Hanzo C (Flame Pose/Slash Effects)", 0xd8b40, 0xd8b60 },
    { L"Hanzo C (Migawari no Jutsu)", 0xd8b60, 0xd8b80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_D[] =
{
    { L"Hanzo D (Normal)", 0xd8c00, 0xd8c40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Rage)", 0xd8c40, 0xd8c80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (SON)", 0xd8e40, 0xd8e80, indexSamSho5Sprites_Hanzo },

    { L"Hanzo D (Burning)", 0xd8cc0, 0xd8d00, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Shocked)", 0xd8d00, 0xd8d40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Frozen/Wet)", 0xd8d40, 0xd8d80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Ki)", 0xd8d80, 0xd8dc0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Issen Trail)", 0xd8e00, 0xd8e40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Baku'en Ryuu/Mozu Otoshi)", 0xd8e80, 0xd8ea0 },
    { L"Hanzo D (Bone Break Effect)", 0xd8ea0, 0xd8ec0 },
    { L"Hanzo D (Ninpou Effect/Shuriken)", 0xd8f20, 0xd8f40 },
    { L"Hanzo D (Flame Pose/Slash Effects)", 0xd8f40, 0xd8f60 },
    { L"Hanzo D (Migawari no Jutsu)", 0xd8f60, 0xd8f80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_A[] =
{
    { L"Haohmaru A (Normal)", 0xd5000, 0xd5040, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Rage)", 0xd5040, 0xd5080, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (SON)", 0xd5240, 0xd5280, indexSamSho5Sprites_Haohmaru },

    { L"Haohmaru A (Burning)", 0xd50c0, 0xd5100, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Shocked)", 0xd5100, 0xd5140, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Frozen/Wet)", 0xd5140, 0xd5180, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Ki)", 0xd5180, 0xd51c0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Senpuuretsuzan)", 0xd51c0, 0xd51e0 },
    { L"Haohmaru A (Kogetsuzan/Resshinzan)", 0xd51e0, 0xd5200 },
    { L"Haohmaru A (Issen Trail)", 0xd5200, 0xd5240, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Overkill)", 0xd5280, 0xd52a0 },
    { L"Haohmaru A (Kogetsuzan Trail)", 0xd52c0, 0xd5300, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Slash Effects)", 0xd5340, 0xd5360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_B[] =
{
    { L"Haohmaru B (Normal)", 0xd5400, 0xd5440, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Rage)", 0xd5440, 0xd5480, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (SON)", 0xd5640, 0xd5680, indexSamSho5Sprites_Haohmaru },

    { L"Haohmaru B (Burning)", 0xd54c0, 0xd5500, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Shocked)", 0xd5500, 0xd5540, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Frozen/Wet)", 0xd5540, 0xd5580, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Ki)", 0xd5580, 0xd55c0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Senpuuretsuzan)", 0xd55c0, 0xd55e0 },
    { L"Haohmaru B (Kogetsuzan/Resshinzan)", 0xd55e0, 0xd5600 },
    { L"Haohmaru B (Issen Trail)", 0xd5600, 0xd5640, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Overkill)", 0xd5680, 0xd56a0 },
    { L"Haohmaru B (Kogetsuzan Trail)", 0xd56c0, 0xd5700, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Slash Effects)", 0xd5740, 0xd5760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_C[] =
{
    { L"Haohmaru C (Normal)", 0xd5800, 0xd5840, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Rage)", 0xd5840, 0xd5880, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (SON)", 0xd5a40, 0xd5a80, indexSamSho5Sprites_Haohmaru },

    { L"Haohmaru C (Burning)", 0xd58c0, 0xd5900, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Shocked)", 0xd5900, 0xd5940, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Frozen/Wet)", 0xd5940, 0xd5980, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Ki)", 0xd5980, 0xd59c0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Senpuuretsuzan)", 0xd59c0, 0xd59e0 },
    { L"Haohmaru C (Kogetsuzan/Resshinzan)", 0xd59e0, 0xd5a00 },
    { L"Haohmaru C (Issen Trail)", 0xd5a00, 0xd5a40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Overkill)", 0xd5a80, 0xd5aa0 },
    { L"Haohmaru C (Kogetsuzan Trail)", 0xd5ac0, 0xd5b00, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Slash Effects)", 0xd5b40, 0xd5b60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_D[] =
{
    { L"Haohmaru D (Normal)", 0xd5c00, 0xd5c40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Rage)", 0xd5c40, 0xd5c80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (SON)", 0xd5e40, 0xd5e80, indexSamSho5Sprites_Haohmaru },

    { L"Haohmaru D (Burning)", 0xd5cc0, 0xd5d00, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Shocked)", 0xd5d00, 0xd5d40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Frozen/Wet)", 0xd5d40, 0xd5d80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Ki)", 0xd5d80, 0xd5dc0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Senpuuretsuzan)", 0xd5dc0, 0xd5de0 },
    { L"Haohmaru D (Kogetsuzan/Resshinzan)", 0xd5de0, 0xd5e00 },
    { L"Haohmaru D (Issen Trail)", 0xd5e00, 0xd5e40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Overkill)", 0xd5e80, 0xd5ea0 },
    { L"Haohmaru D (Kogetsuzan Trail)", 0xd5ec0, 0xd5f00, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Slash Effects)", 0xd5f40, 0xd5f60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_A[] =
{
    { L"Jubei A (Normal)", 0xe1000, 0xe1040, indexSamSho5Sprites_Jubei },
    { L"Jubei A (Rage)", 0xe1040, 0xe1080, indexSamSho5Sprites_Jubei },
    { L"Jubei A (SON)", 0xe1240, 0xe1280, indexSamSho5Sprites_Jubei },

    { L"Jubei A (Burning)", 0xe10c0, 0xe1100, indexSamSho5Sprites_Jubei },
    { L"Jubei A (Shocked)", 0xe1100, 0xe1140, indexSamSho5Sprites_Jubei },
    { L"Jubei A (Frozen/Wet)", 0xe1140, 0xe1180, indexSamSho5Sprites_Jubei },
    { L"Jubei A (Ki)", 0xe1180, 0xe11c0, indexSamSho5Sprites_Jubei },
    { L"Jubei A (Issen Trail)", 0xe1200, 0xe1240, indexSamSho5Sprites_Jubei },
    { L"Jubei A (Assorted Specials 1)", 0xe1280, 0xe1290 },
    { L"Jubei A (Shingantou Flash Effect)", 0xe1290, 0xe12a0 },
    { L"Jubei A (Assorted Specials 2)", 0xe12a0, 0xe12b0 },
    { L"Jubei A (Fireball Slash Effect)", 0xe12b0, 0xe12c0 },
    { L"Jubei A (Overkill Effect)", 0xe12c0, 0xe12d0 },
    { L"Jubei A (Slash Effect/Bird 1)", 0xe1340, 0xe1360 },
    { L"Jubei A (Bird 2)", 0xe1380, 0xe13a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_B[] =
{
    { L"Jubei B (Normal)", 0xe1400, 0xe1440, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Rage)", 0xe1440, 0xe1480, indexSamSho5Sprites_Jubei },
    { L"Jubei B (SON)", 0xe1640, 0xe1680, indexSamSho5Sprites_Jubei },

    { L"Jubei B (Burning)", 0xe14c0, 0xe1500, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Shocked)", 0xe1500, 0xe1540, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Frozen/Wet)", 0xe1540, 0xe1580, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Ki)", 0xe1580, 0xe15c0, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Issen Trail)", 0xe1600, 0xe1640, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Assorted Specials 1)", 0xe1680, 0xe1690 },
    { L"Jubei B (Shingantou Flash Effect)", 0xe1690, 0xe16a0 },
    { L"Jubei B (Assorted Specials 2)", 0xe16a0, 0xe16b0 },
    { L"Jubei B (Fireball Slash Effect)", 0xe16b0, 0xe16c0 },
    { L"Jubei B (Overkill Effect)", 0xe16c0, 0xe16d0 },
    { L"Jubei B (Slash Effect/Bird 1)", 0xe1740, 0xe1760 },
    { L"Jubei B (Bird 2)", 0xe1780, 0xe17a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_C[] =
{
    { L"Jubei C (Normal)", 0xe1800, 0xe1840, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Rage)", 0xe1840, 0xe1880, indexSamSho5Sprites_Jubei },
    { L"Jubei C (SON)", 0xe1a40, 0xe1a80, indexSamSho5Sprites_Jubei },

    { L"Jubei C (Burning)", 0xe18c0, 0xe1900, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Shocked)", 0xe1900, 0xe1940, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Frozen/Wet)", 0xe1940, 0xe1980, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Ki)", 0xe1980, 0xe19c0, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Issen Trail)", 0xe1a00, 0xe1a40, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Assorted Specials 1)", 0xe1a80, 0xe1a90 },
    { L"Jubei C (Shingantou Flash Effect)", 0xe1a90, 0xe1aa0 },
    { L"Jubei C (Assorted Specials 2)", 0xe1aa0, 0xe1ab0 },
    { L"Jubei C (Fireball Slash Effect)", 0xe1ab0, 0xe1ac0 },
    { L"Jubei C (Overkill Effect)", 0xe1ac0, 0xe1ad0 },
    { L"Jubei C (Slash Effect/Bird 1)", 0xe1b40, 0xe1b60 },
    { L"Jubei C (Bird 2)", 0xe1b80, 0xe1ba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_D[] =
{
    { L"Jubei D (Normal)", 0xe1c00, 0xe1c40, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Rage)", 0xe1c40, 0xe1c80, indexSamSho5Sprites_Jubei },
    { L"Jubei D (SON)", 0xe1e40, 0xe1e80, indexSamSho5Sprites_Jubei },

    { L"Jubei D (Burning)", 0xe1cc0, 0xe1d00, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Shocked)", 0xe1d00, 0xe1d40, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Frozen/Wet)", 0xe1d40, 0xe1d80, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Ki)", 0xe1d80, 0xe1dc0, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Issen Trail)", 0xe1e00, 0xe1e40, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Assorted Specials 1)", 0xe1e80, 0xe1e90 },
    { L"Jubei D (Shingantou Flash Effect)", 0xe1e90, 0xe1ea0 },
    { L"Jubei D (Assorted Specials 2)", 0xe1ea0, 0xe1eb0 },
    { L"Jubei D (Fireball Slash Effect)", 0xe1eb0, 0xe1ec0 },
    { L"Jubei D (Overkill Effect)", 0xe1ec0, 0xe1ed0 },
    { L"Jubei D (Slash Effect/Bird 1)", 0xe1f40, 0xe1f60 },
    { L"Jubei D (Bird 2)", 0xe1f80, 0xe1fa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_A[] =
{
    { L"Kazuki A (Normal)", 0xe5000, 0xe5040, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (Rage)", 0xe5040, 0xe5080, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (SON)", 0xe5240, 0xe5280, indexSamSho5Sprites_Kazuki },

    { L"Kazuki A (Burning)", 0xe50c0, 0xe5100, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (Shocked)", 0xe5100, 0xe5140, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (Frozen/Wet)", 0xe5140, 0xe5180, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (Ki)", 0xe5180, 0xe51c0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (Issen Trail)", 0xe5200, 0xe5240, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (Special Effects 1)", 0xe5300, 0xe5320 },
    { L"Kazuki A (Special Effects 2)", 0xe5320, 0xe5340 },
    { L"Kazuki A (Slash Effect/Saien)", 0xe5340, 0xe5360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_B[] =
{
    { L"Kazuki B (Normal)", 0xe5400, 0xe5440, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Rage)", 0xe5440, 0xe5480, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (SON)", 0xe5640, 0xe5680, indexSamSho5Sprites_Kazuki },

    { L"Kazuki B (Burning)", 0xe54c0, 0xe5500, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Shocked)", 0xe5500, 0xe5540, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Frozen/Wet)", 0xe5540, 0xe5580, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Ki)", 0xe5580, 0xe55c0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Issen Trail)", 0xe5600, 0xe5640, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Special Effects 1)", 0xe5700, 0xe5720 },
    { L"Kazuki B (Special Effects 2)", 0xe5720, 0xe5740 },
    { L"Kazuki B (Slash Effect/Saien)", 0xe5740, 0xe5760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_C[] =
{
    { L"Kazuki C (Normal)", 0xe5800, 0xe5840, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Rage)", 0xe5840, 0xe5880, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (SON)", 0xe5a40, 0xe5a80, indexSamSho5Sprites_Kazuki },

    { L"Kazuki C (Burning)", 0xe58c0, 0xe5900, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Shocked)", 0xe5900, 0xe5940, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Frozen/Wet)", 0xe5940, 0xe5980, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Ki)", 0xe5980, 0xe59c0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Issen Trail)", 0xe5a00, 0xe5a40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Special Effects 1)", 0xe5b00, 0xe5b20 },
    { L"Kazuki C (Special Effects 2)", 0xe5b20, 0xe5b40 },
    { L"Kazuki C (Slash Effect/Saien)", 0xe5b40, 0xe5b60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_D[] =
{
    { L"Kazuki D (Normal)", 0xe5c00, 0xe5c40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Rage)", 0xe5c40, 0xe5c80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (SON)", 0xe5e40, 0xe5e80, indexSamSho5Sprites_Kazuki },

    { L"Kazuki D (Burning)", 0xe5cc0, 0xe5d00, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Shocked)", 0xe5d00, 0xe5d40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Frozen/Wet)", 0xe5d40, 0xe5d80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Ki)", 0xe5d80, 0xe5dc0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Issen Trail)", 0xe5e00, 0xe5e40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Special Effects 1)", 0xe5f00, 0xe5f20 },
    { L"Kazuki D (Special Effects 2)", 0xe5f20, 0xe5f40 },
    { L"Kazuki D (Slash Effect/Saien)", 0xe5f40, 0xe5f60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_A[] =
{
    { L"Kusaregedo A (Normal)", 0xee000, 0xee040, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (Rage)", 0xee040, 0xee080, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (SON)", 0xee240, 0xee280, indexSamSho5Sprites_Kusaregedo },

    { L"Kusaregedo A (Burning)", 0xee0c0, 0xee100, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (Shocked)", 0xee100, 0xee140, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (Frozen/Wet)", 0xee140, 0xee180, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (Ki)", 0xee180, 0xee1c0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (Issen Trail)", 0xee200, 0xee240, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (Overkill 1/Doro Nage)", 0xee280, 0xee2a0 },
    { L"Kusaregedo A (Far 5B Slash Effect)", 0xee360, 0xee380 },
    { L"Kusaregedo A (Overkill 2/Misc Effects)", 0xee380, 0xee3a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_B[] =
{
    { L"Kusaregedo B (Normal)", 0xee400, 0xee440, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Rage)", 0xee440, 0xee480, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (SON)", 0xee640, 0xee680, indexSamSho5Sprites_Kusaregedo },

    { L"Kusaregedo B (Burning)", 0xee4c0, 0xee500, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Shocked)", 0xee500, 0xee540, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Frozen/Wet)", 0xee540, 0xee580, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Ki)", 0xee580, 0xee5c0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Issen Trail)", 0xee600, 0xee640, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Overkill 1/Doro Nage)", 0xee680, 0xee6a0 },
    { L"Kusaregedo B (Far 5B Slash Effect)", 0xee760, 0xee780 },
    { L"Kusaregedo B (Overkill 2/Misc Effects)", 0xee780, 0xee7a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_C[] =
{
    { L"Kusaregedo C (Normal)", 0xee800, 0xee840, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Rage)", 0xee840, 0xee880, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (SON)", 0xeea40, 0xeea80, indexSamSho5Sprites_Kusaregedo },

    { L"Kusaregedo C (Burning)", 0xee8c0, 0xee900, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Shocked)", 0xee900, 0xee940, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Frozen/Wet)", 0xee940, 0xee980, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Ki)", 0xee980, 0xee9c0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Issen Trail)", 0xeea00, 0xeea40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Overkill 1/Doro Nage)", 0xeea80, 0xeeaa0 },
    { L"Kusaregedo C (Far 5B Slash Effect)", 0xeeb60, 0xeeb80 },
    { L"Kusaregedo C (Overkill 2/Misc Effects)", 0xeeb80, 0xeeba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_D[] =
{
    { L"Kusaregedo D (Normal)", 0xeec00, 0xeec40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Rage)", 0xeec40, 0xeec80, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (SON)", 0xeee40, 0xeee80, indexSamSho5Sprites_Kusaregedo },

    { L"Kusaregedo D (Burning)", 0xeecc0, 0xeed00, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Shocked)", 0xeed00, 0xeed40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Frozen/Wet)", 0xeed40, 0xeed80, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Ki)", 0xeed80, 0xeedc0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Issen Trail)", 0xeee00, 0xeee40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Overkill 1/Doro Nage)", 0xeee80, 0xeeea0 },
    { L"Kusaregedo D (Far 5B Slash Effect)", 0xeef60, 0xeef80 },
    { L"Kusaregedo D (Overkill 2/Misc Effects)", 0xeef80, 0xeefa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_A[] =
{
    { L"Kyoshiro A (Normal)", 0xda000, 0xda040, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro A (Rage)", 0xda040, 0xda080, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro A (SON)", 0xda240, 0xda280, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro A (Toad)", 0xda280, 0xda2a0, indexSamSho5Sprites_Kyoshiro, 1 },

    { L"Kyoshiro A (Burning)", 0xda0c0, 0xda100, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro A (Shocked)", 0xda100, 0xda140, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro A (Frozen/Wet)", 0xda140, 0xda180, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro A (Ki)", 0xda180, 0xda1c0, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro A (Ootsunami)", 0xda1c0, 0xda1e0 },
    { L"Kyoshiro A (Toad Effect/Overkill)", 0xda1e0, 0xda200, indexSamSho5Sprites_Kyoshiro, 0x1 },
    { L"Kyoshiro A (Issen Trail)", 0xda200, 0xda240, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro A (Choubi Jishi/Kaen Kyokubu)", 0xda2a0, 0xda2c0 },
    { L"Kyoshiro A (Overkill Curtains)", 0xda320, 0xda340 },
    { L"Kyoshiro A (Spin/Slash Effects)", 0xda340, 0xda360 },
    { L"Kyoshiro A (Overkill Kuroko)", 0xda380, 0xda3a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_B[] =
{
    { L"Kyoshiro B (Normal)", 0xda400, 0xda440, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro B (Rage)", 0xda440, 0xda480, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro B (SON)", 0xda640, 0xda680, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro B (Toad)", 0xda680, 0xda6a0, indexSamSho5Sprites_Kyoshiro, 1 },

    { L"Kyoshiro B (Burning)", 0xda4c0, 0xda500, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro B (Shocked)", 0xda500, 0xda540, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro B (Frozen/Wet)", 0xda540, 0xda580, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro B (Ki)", 0xda580, 0xda5c0, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro B (Ootsunami)", 0xda5c0, 0xda5e0 },
    { L"Kyoshiro B (Toad Effect/Overkill)", 0xda5e0, 0xda600, indexSamSho5Sprites_Kyoshiro, 0x1 },
    { L"Kyoshiro B (Issen Trail)", 0xda600, 0xda640, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro B (Choubi Jishi/Kaen Kyokubu)", 0xda6a0, 0xda6c0 },
    { L"Kyoshiro B (Overkill Curtains)", 0xda720, 0xda740 },
    { L"Kyoshiro B (Spin/Slash Effects)", 0xda740, 0xda760 },
    { L"Kyoshiro B (Overkill Kuroko)", 0xda780, 0xda7a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_C[] =
{
    { L"Kyoshiro C (Normal)", 0xda800, 0xda840, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro C (Rage)", 0xda840, 0xda880, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro C (SON)", 0xdaa40, 0xdaa80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro C (Toad)", 0xdaa80, 0xdaaa0, indexSamSho5Sprites_Kyoshiro, 1 },

    { L"Kyoshiro C (Burning)", 0xda8c0, 0xda900, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro C (Shocked)", 0xda900, 0xda940, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro C (Frozen/Wet)", 0xda940, 0xda980, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro C (Ki)", 0xda980, 0xda9c0, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro C (Ootsunami)", 0xda9c0, 0xda9e0 },
    { L"Kyoshiro C (Toad Effect/Overkill)", 0xda9e0, 0xdaa00, indexSamSho5Sprites_Kyoshiro, 0x1 },
    { L"Kyoshiro C (Issen Trail)", 0xdaa00, 0xdaa40, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro C (Choubi Jishi/Kaen Kyokubu)", 0xdaaa0, 0xdaac0 },
    { L"Kyoshiro C (Overkill Curtains)", 0xdab20, 0xdab40 },
    { L"Kyoshiro C (Spin/Slash Effects)", 0xdab40, 0xdab60 },
    { L"Kyoshiro C (Overkill Kuroko)", 0xdab80, 0xdaba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_D[] =
{
    { L"Kyoshiro D (Normal)", 0xdac00, 0xdac40, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro D (Rage)", 0xdac40, 0xdac80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro D (SON)", 0xdae40, 0xdae80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro D (Toad)", 0xdae80, 0xdaea0, indexSamSho5Sprites_Kyoshiro, 1 },

    { L"Kyoshiro D (Burning)", 0xdacc0, 0xdad00, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro D (Shocked)", 0xdad00, 0xdad40, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro D (Frozen/Wet)", 0xdad40, 0xdad80, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro D (Ki)", 0xdad80, 0xdadc0, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro D (Ootsunami)", 0xdadc0, 0xdade0 },
    { L"Kyoshiro D (Toad Effect/Overkill)", 0xdade0, 0xdae00, indexSamSho5Sprites_Kyoshiro, 0x1 },
    { L"Kyoshiro D (Issen Trail)", 0xdae00, 0xdae40, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro D (Choubi Jishi/Kaen Kyokubu)", 0xdaea0, 0xdaec0 },
    { L"Kyoshiro D (Overkill Curtains)", 0xdaf20, 0xdaf40 },
    { L"Kyoshiro D (Spin/Slash Effects)", 0xdaf40, 0xdaf60 },
    { L"Kyoshiro D (Overkill Kuroko)", 0xdaf80, 0xdafa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_A[] =
{
    { L"Mina A (Normal)", 0xed000, 0xed040, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina A (Rage)", 0xed040, 0xed080, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina A (SON)", 0xed240, 0xed280, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru A", 0xed280, 0xed2A0, indexSamSho5Sprites_Mina, 1 },

    { L"Mina A (Burning)", 0xed0c0, 0xed100, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina A (Shocked)", 0xed100, 0xed140, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina A (Frozen/Wet)", 0xed140, 0xed180, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina A (Ki)", 0xed180, 0xed1c0, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina A (Issen Trail)", 0xed200, 0xed240, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina A (Sleeping Champuru)", 0xed2a0, 0xed2c0 },
    { L"Mina A (Champuru Tears)", 0xed2c0, 0xed2e0 },
    { L"Mina A (Mina Gown and Hat)", 0xed320, 0xed340 },
    { L"Mina A (Normal Arrow Effect)", 0xed360, 0xed380 },
    { L"Mina A (Misc Specials)", 0xed380, 0xed3a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_B[] =
{
    { L"Mina B (Normal)", 0xed400, 0xed440, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina B (Rage)", 0xed440, 0xed480, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina B (SON)", 0xed640, 0xed680, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru B", 0xed680, 0xed6A0, indexSamSho5Sprites_Mina, 1 },

    { L"Mina B (Burning)", 0xed4c0, 0xed500, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina B (Shocked)", 0xed500, 0xed540, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina B (Frozen/Wet)", 0xed540, 0xed580, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina B (Ki)", 0xed580, 0xed5c0, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina B (Issen Trail)", 0xed600, 0xed640, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina B (Sleeping Champuru)", 0xed6a0, 0xed6c0 },
    { L"Mina B (Champuru Tears)", 0xed6c0, 0xed6e0 },
    { L"Mina B (Mina Gown and Hat)", 0xed720, 0xed740 },
    { L"Mina B (Normal Arrow Effect)", 0xed760, 0xed780 },
    { L"Mina B (Misc Specials)", 0xed780, 0xed7a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_C[] =
{
    { L"Mina C (Normal)", 0xed800, 0xed840, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina C (Rage)", 0xed840, 0xed880, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina C (SON)", 0xeda40, 0xeda80, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru C", 0xeda80, 0xedaA0, indexSamSho5Sprites_Mina, 1 },

    { L"Mina C (Burning)", 0xed8c0, 0xed900, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina C (Shocked)", 0xed900, 0xed940, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina C (Frozen/Wet)", 0xed940, 0xed980, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina C (Ki)", 0xed980, 0xed9c0, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina C (Issen Trail)", 0xeda00, 0xeda40, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina C (Sleeping Champuru)", 0xedaa0, 0xedac0 },
    { L"Mina C (Champuru Tears)", 0xedac0, 0xedae0 },
    { L"Mina C (Mina Gown and Hat)", 0xedb20, 0xedb40 },
    { L"Mina C (Normal Arrow Effect)", 0xedb60, 0xedb80 },
    { L"Mina C (Misc Specials)", 0xedb80, 0xedba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_D[] =
{
    { L"Mina D (Normal)", 0xedc00, 0xedc40, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina D (Rage)", 0xedc40, 0xedc80, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina D (SON)", 0xede40, 0xede80, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru D", 0xede80, 0xedeA0, indexSamSho5Sprites_Mina, 1 },

    { L"Mina D (Burning)", 0xedcc0, 0xedd00, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina D (Shocked)", 0xedd00, 0xedd40, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina D (Frozen/Wet)", 0xedd40, 0xedd80, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina D (Ki)", 0xedd80, 0xeddc0, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina D (Issen Trail)", 0xede00, 0xede40, indexSamSho5Sprites_Mina, 0x00 },
    { L"Mina D (Sleeping Champuru)", 0xedea0, 0xedec0 },
    { L"Mina D (Champuru Tears)", 0xedec0, 0xedee0 },
    { L"Mina D (Mina Gown and Hat)", 0xedf20, 0xedf40 },
    { L"Mina D (Normal Arrow Effect)", 0xedf60, 0xedf80 },
    { L"Mina D (Misc Specials)", 0xedf80, 0xedfa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_A[] =
{
    { L"Mizuki A (Normal)", 0xf0000, 0xf0040, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (Rage)", 0xf0040, 0xf0080, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (SON)", 0xf0240, 0xf0280, indexSamSho5Sprites_Mizuki },

    { L"Mizuki A (Juka Soudan)", 0xf0080, 0xf00a0 },
    { L"Mizuki A (Misc Explosion Effects)", 0xf00a0, 0xf00c0 },
    { L"Mizuki A (Burning)", 0xf00c0, 0xf0100, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (Shocked)", 0xf0100, 0xf0140, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (Frozen/Wet)", 0xf0140, 0xf0180, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (Ki)", 0xf0180, 0xf01c0, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (Issen Trail)", 0xf0200, 0xf0240, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (Seal 1)", 0xf0280, 0xf02a0 },
    { L"Mizuki A (Seal 2)", 0xf02a0, 0xf02c0 },
    { L"Mizuki A (Seal 3)", 0xf02c0, 0xf02e0 },
    { L"Mizuki A (WFT Seal/Smoke Effect)", 0xf02e0, 0xf0300 },
    { L"Mizuki A (Wand Glow 1)", 0xf0300, 0xf0320 },
    { L"Mizuki A (Wand Glow 2)", 0xf0320, 0xf0340 },
    { L"Mizuki A (Wand Glow 3)", 0xf0340, 0xf0360 },
    { L"Mizuki A (Pig)", 0xf0360, 0xf0380 },
    { L"Mizuki A (Slash Effects)", 0xf0380, 0xf03a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_B[] =
{
    { L"Mizuki B (Normal)", 0xf0400, 0xf0440, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Rage)", 0xf0440, 0xf0480, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (SON)", 0xf0640, 0xf0680, indexSamSho5Sprites_Mizuki },

    { L"Mizuki B (Juka Soudan)", 0xf0480, 0xf04a0 },
    { L"Mizuki B (Misc Explosion Effects)", 0xf04a0, 0xf04c0 },
    { L"Mizuki B (Burning)", 0xf04c0, 0xf0500, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Shocked)", 0xf0500, 0xf0540, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Frozen/Wet)", 0xf0540, 0xf0580, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Ki)", 0xf0580, 0xf05c0, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Issen Trail)", 0xf0600, 0xf0640, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Seal 1)", 0xf0680, 0xf06a0 },
    { L"Mizuki B (Seal 2)", 0xf06a0, 0xf06c0 },
    { L"Mizuki B (Seal 3)", 0xf06c0, 0xf06e0 },
    { L"Mizuki B (WFT Seal/Smoke Effect)", 0xf06e0, 0xf0700 },
    { L"Mizuki B (Wand Glow 1)", 0xf0700, 0xf0720 },
    { L"Mizuki B (Wand Glow 2)", 0xf0720, 0xf0740 },
    { L"Mizuki B (Wand Glow 3)", 0xf0740, 0xf0760 },
    { L"Mizuki B (Pig)", 0xf0760, 0xf0780 },
    { L"Mizuki B (Slash Effects)", 0xf0780, 0xf07a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_C[] =
{
    { L"Mizuki C (Normal)", 0xf0800, 0xf0840, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Rage)", 0xf0840, 0xf0880, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (SON)", 0xf0a40, 0xf0a80, indexSamSho5Sprites_Mizuki },

    { L"Mizuki C (Juka Soudan)", 0xf0880, 0xf08a0 },
    { L"Mizuki C (Misc Explosion Effects)", 0xf08a0, 0xf08c0 },
    { L"Mizuki C (Burning)", 0xf08c0, 0xf0900, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Shocked)", 0xf0900, 0xf0940, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Frozen/Wet)", 0xf0940, 0xf0980, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Ki)", 0xf0980, 0xf09c0, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Issen Trail)", 0xf0a00, 0xf0a40, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Seal 1)", 0xf0a80, 0xf0aa0 },
    { L"Mizuki C (Seal 2)", 0xf0aa0, 0xf0ac0 },
    { L"Mizuki C (Seal 3)", 0xf0ac0, 0xf0ae0 },
    { L"Mizuki C (WFT Seal/Smoke Effect)", 0xf0ae0, 0xf0b00 },
    { L"Mizuki C (Wand Glow 1)", 0xf0b00, 0xf0b20 },
    { L"Mizuki C (Wand Glow 2)", 0xf0b20, 0xf0b40 },
    { L"Mizuki C (Wand Glow 3)", 0xf0b40, 0xf0b60 },
    { L"Mizuki C (Pig)", 0xf0b60, 0xf0b80 },
    { L"Mizuki C (Slash Effects)", 0xf0b80, 0xf0ba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_D[] =
{
    { L"Mizuki D (Normal)", 0xf0c00, 0xf0c40, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Rage)", 0xf0c40, 0xf0c80, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (SON)", 0xf0e40, 0xf0e80, indexSamSho5Sprites_Mizuki },

    { L"Mizuki D (Juka Soudan)", 0xf0c80, 0xf0ca0 },
    { L"Mizuki D (Misc Explosion Effects)", 0xf0ca0, 0xf0cc0 },
    { L"Mizuki D (Burning)", 0xf0cc0, 0xf0d00 },
    { L"Mizuki D (Shocked)", 0xf0d00, 0xf0d40, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Frozen/Wet)", 0xf0d40, 0xf0d80, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Ki)", 0xf0d80, 0xf0dc0, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Issen Trail)", 0xf0e00, 0xf0e40, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Seal 1)", 0xf0e80, 0xf0ea0 },
    { L"Mizuki D (Seal 2)", 0xf0ea0, 0xf0ec0 },
    { L"Mizuki D (Seal 3)", 0xf0ec0, 0xf0ee0 },
    { L"Mizuki D (WFT Seal/Smoke Effect)", 0xf0ee0, 0xf0f00 },
    { L"Mizuki D (Wand Glow 1)", 0xf0f00, 0xf0f20 },
    { L"Mizuki D (Wand Glow 2)", 0xf0f20, 0xf0f40 },
    { L"Mizuki D (Wand Glow 3)", 0xf0f40, 0xf0f60 },
    { L"Mizuki D (Pig)", 0xf0f60, 0xf0f80 },
    { L"Mizuki D (Slash Effects)", 0xf0f80, 0xf0fa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_A[] =
{
    { L"Nakoruru A (Normal)", 0xd6000, 0xd6040, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru A (Rage)", 0xd6040, 0xd6080, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru A (SON)", 0xd6240, 0xd6280, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha A", 0xd6280, 0xd62A0, indexSamSho5Sprites_Nakoruru, 1 },

    { L"Nakoruru A (Burning)", 0xd60c0, 0xd6100, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru A (Shocked)", 0xd6100, 0xd6140, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru A (Frozen/Wet)", 0xd6140, 0xd6180, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru A (Ki)", 0xd6180, 0xd61c0, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru A (Annu/Rera Mutsube)", 0xd62e0, 0xd6300 },
    { L"Nakoruru A (Kamui Rimse/Slash Effect)", 0xd6340, 0xd6360 },
    { L"Nakoruru A (Issen Trail)", 0xd6200, 0xd6240, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru A (Elerushi Kamui Rimse)", 0xd6360, 0xd6380 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_B[] =
{
    { L"Nakoruru B (Normal)", 0xd6400, 0xd6440, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru B (Rage)", 0xd6440, 0xd6480, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru B (SON)", 0xd6640, 0xd6680, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha B", 0xd6680, 0xd66A0, indexSamSho5Sprites_Nakoruru, 1 },

    { L"Nakoruru B (Burning)", 0xd64c0, 0xd6500, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru B (Shocked)", 0xd6500, 0xd6540, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru B (Frozen/Wet)", 0xd6540, 0xd6580, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru B (Ki)", 0xd6580, 0xd65c0, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru B (Annu/Rera Mutsube)", 0xd66e0, 0xd6700 },
    { L"Nakoruru B (Kamui Rimse/Slash Effect)", 0xd6740, 0xd6760 },
    { L"Nakoruru B (Issen Trail)", 0xd6600, 0xd6640, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru B (Elerushi Kamui Rimse)", 0xd6760, 0xd6780 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_C[] =
{
    { L"Nakoruru C (Normal)", 0xd6800, 0xd6840, indexSamSho5Sprites_Nakoruru, 0, &pairNext3  },
    { L"Nakoruru C (Rage)", 0xd6840, 0xd6880, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru C (SON)", 0xd6a40, 0xd6a80, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha C", 0xd6a80, 0xd6aA0, indexSamSho5Sprites_Nakoruru, 1 },

    { L"Nakoruru C (Burning)", 0xd68c0, 0xd6900, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru C (Shocked)", 0xd6900, 0xd6940, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru C (Frozen/Wet)", 0xd6940, 0xd6980, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru C (Ki)", 0xd6980, 0xd69c0, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru C (Annu/Rera Mutsube)", 0xd6ae0, 0xd6b00 },
    { L"Nakoruru C (Issen Trail)", 0xd6a00, 0xd6a40 },
    { L"Nakoruru C (Kamui Rimse/Slash Effect)", 0xd6b40, 0xd6b60, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru C (Elerushi Kamui Rimse)", 0xd6b60, 0xd6b80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_D[] =
{
    { L"Nakoruru D (Normal)", 0xd6c00, 0xd6c40, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru D (Rage)", 0xd6c40, 0xd6c80, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru D (SON)", 0xd6e40, 0xd6e80, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha D", 0xd6e80, 0xd6eA0, indexSamSho5Sprites_Nakoruru, 1 },

    { L"Nakoruru D (Burning)", 0xd6cc0, 0xd6d00, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru D (Shocked)", 0xd6d00, 0xd6d40, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru D (Frozen/Wet)", 0xd6d40, 0xd6d80, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru D (Ki)", 0xd6d80, 0xd6dc0, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru D (Annu/Rera Mutsube)", 0xd6ee0, 0xd6f00 },
    { L"Nakoruru D (Kamui Rimse/Slash Effect)", 0xd6f40, 0xd6f60 },
    { L"Nakoruru D (Issen Trail)", 0xd6e00, 0xd6e40, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru D (Elerushi Kamui Rimse)", 0xd6f60, 0xd6f80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_A[] =
{
    { L"Rasetsumaru A (Normal)", 0xe7000, 0xe7040, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (Rage)", 0xe7040, 0xe7080, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (SON)", 0xe7240, 0xe7280, indexSamSho5Sprites_Rasetsumaru },

    { L"Rasetsumaru A (Burning)", 0xe70c0, 0xe7100, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (Shocked)", 0xe7100, 0xe7140, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (Frozen/Wet)", 0xe7140, 0xe7180, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (Ki)", 0xe7180, 0xe71c0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (Senpuuretsuzan)", 0xe71c0, 0xe71e0 },
    { L"Rasetsumaru A (Misc Specials)", 0xe71e0, 0xe7200 },
    { L"Rasetsumaru A (Issen Trail)", 0xe7200, 0xe7240, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (Overkill)", 0xe7280, 0xe72a0 },
    { L"Rasetsumaru A (Slash Effects)", 0xe7340, 0xe7360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_B[] =
{
    { L"Rasetsumaru B (Normal)", 0xe7400, 0xe7440, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Rage)", 0xe7440, 0xe7480, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (SON)", 0xe7640, 0xe7680, indexSamSho5Sprites_Rasetsumaru },

    { L"Rasetsumaru B (Burning)", 0xe74c0, 0xe7500, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Shocked)", 0xe7500, 0xe7540, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Frozen/Wet)", 0xe7540, 0xe7580, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Ki)", 0xe7580, 0xe75c0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Senpuuretsuzan)", 0xe75c0, 0xe75e0 },
    { L"Rasetsumaru B (Misc Specials)", 0xe75e0, 0xe7600 },
    { L"Rasetsumaru B (Issen Trail)", 0xe7600, 0xe7640, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Overkill)", 0xe7680, 0xe76a0 },
    { L"Rasetsumaru B (Slash Effects)", 0xe7740, 0xe7760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_C[] =
{
    { L"Rasetsumaru C (Normal)", 0xe7800, 0xe7840, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Rage)", 0xe7840, 0xe7880, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (SON)", 0xe7a40, 0xe7a80, indexSamSho5Sprites_Rasetsumaru },

    { L"Rasetsumaru C (Burning)", 0xe78c0, 0xe7900, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Shocked)", 0xe7900, 0xe7940, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Frozen/Wet)", 0xe7940, 0xe7980, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Ki)", 0xe7980, 0xe79c0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Senpuuretsuzan)", 0xe79c0, 0xe79e0 },
    { L"Rasetsumaru C (Misc Specials)", 0xe79e0, 0xe7a00 },
    { L"Rasetsumaru C (Issen Trail)", 0xe7a00, 0xe7a40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Overkill)", 0xe7a80, 0xe7aa0 },
    { L"Rasetsumaru C (Slash Effects)", 0xe7b40, 0xe7b60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_D[] =
{
    { L"Rasetsumaru D (Normal)", 0xe7c00, 0xe7c40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Rage)", 0xe7c40, 0xe7c80, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (SON)", 0xe7e40, 0xe7e80, indexSamSho5Sprites_Rasetsumaru },

    { L"Rasetsumaru D (Burning)", 0xe7cc0, 0xe7d00, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Shocked)", 0xe7d00, 0xe7d40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Frozen/Wet)", 0xe7d40, 0xe7d80, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Ki)", 0xe7d80, 0xe7dc0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Senpuuretsuzan)", 0xe7dc0, 0xe7de0 },
    { L"Rasetsumaru D (Misc Specials)", 0xe7de0, 0xe7e00 },
    { L"Rasetsumaru D (Issen Trail)", 0xe7e00, 0xe7e40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Overkill)", 0xe7e80, 0xe7ea0 },
    { L"Rasetsumaru D (Slash Effects)", 0xe7f40, 0xe7f60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_A[] =
{
    { L"Rera A (Normal)", 0xe8000, 0xe8040, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera A (Rage)", 0xe8040, 0xe8080, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera A (SON)", 0xe8240, 0xe8280, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru A", 0xe82A0, 0xe82C0, indexSamSho5Sprites_Rera, 1 },

    { L"Rera A (WFT Trail)", 0xe8080, 0xe80c0, indexSamSho5Sprites_Rera },
    { L"Rera A (Burning)", 0xe80c0, 0xe8100, indexSamSho5Sprites_Rera },
    { L"Rera A (Shocked)", 0xe8100, 0xe8140, indexSamSho5Sprites_Rera },
    { L"Rera A (Frozen/Wet)", 0xe8140, 0xe8180, indexSamSho5Sprites_Rera },
    { L"Rera A (Ki)", 0xe8180, 0xe81c0, indexSamSho5Sprites_Rera },
    { L"Rera A (Issen Trail)", 0xe8200, 0xe8240, indexSamSho5Sprites_Rera },
    { L"Rera A (Overkill)", 0xe82c0, 0xe82e0 },
    { L"Rera A (Bunri Kougeki)", 0xe82e0, 0xe8300 },
    { L"Rera A (Slash/Misc Effects)", 0xe8340, 0xe8360 },
    { L"Rera A (Imeru Shikite)", 0xe8360, 0xe8380 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_B[] =
{
    { L"Rera B (Normal)", 0xe8400, 0xe8440, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera B (Rage)", 0xe8440, 0xe8480, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera B (SON)", 0xe8640, 0xe8680, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru B", 0xe86A0, 0xe86C0, indexSamSho5Sprites_Rera, 1 },

    { L"Rera B (WFT Trail)", 0xe8480, 0xe84c0, indexSamSho5Sprites_Rera },
    { L"Rera B (Burning)", 0xe84c0, 0xe8500, indexSamSho5Sprites_Rera },
    { L"Rera B (Shocked)", 0xe8500, 0xe8540, indexSamSho5Sprites_Rera },
    { L"Rera B (Frozen/Wet)", 0xe8540, 0xe8580, indexSamSho5Sprites_Rera },
    { L"Rera B (Ki)", 0xe8580, 0xe85c0, indexSamSho5Sprites_Rera },
    { L"Rera B (Issen Trail)", 0xe8600, 0xe8640, indexSamSho5Sprites_Rera },
    { L"Rera B (Overkill)", 0xe86c0, 0xe86e0 },
    { L"Rera B (Bunri Kougeki)", 0xe86e0, 0xe8700 },
    { L"Rera B (Slash/Misc Effects)", 0xe8740, 0xe8760 },
    { L"Rera B (Imeru Shikite)", 0xe8760, 0xe8780 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_C[] =
{
    { L"Rera C (Normal)", 0xe8800, 0xe8840, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera C (Rage)", 0xe8840, 0xe8880, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera C (SON)", 0xe8a40, 0xe8a80, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru C", 0xe8aA0, 0xe8aC0, indexSamSho5Sprites_Rera, 1 },

    { L"Rera C (WFT Trail)", 0xe8880, 0xe88c0, indexSamSho5Sprites_Rera },
    { L"Rera C (Burning)", 0xe88c0, 0xe8900, indexSamSho5Sprites_Rera },
    { L"Rera C (Shocked)", 0xe8900, 0xe8940, indexSamSho5Sprites_Rera },
    { L"Rera C (Frozen/Wet)", 0xe8940, 0xe8980, indexSamSho5Sprites_Rera },
    { L"Rera C (Ki)", 0xe8980, 0xe89c0, indexSamSho5Sprites_Rera },
    { L"Rera C (Issen Trail)", 0xe8a00, 0xe8a40, indexSamSho5Sprites_Rera },
    { L"Rera C (Overkill)", 0xe8ac0, 0xe8ae0 },
    { L"Rera C (Bunri Kougeki)", 0xe8ae0, 0xe8b00 },
    { L"Rera C (Slash/Misc Effects)", 0xe8b40, 0xe8b60 },
    { L"Rera C (Imeru Shikite)", 0xe8b60, 0xe8b80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_D[] =
{
    { L"Rera D (Normal)", 0xe8c00, 0xe8c40, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera D (Rage)", 0xe8c40, 0xe8c80, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera D (SON)", 0xe8e40, 0xe8e80, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru D", 0xe8eA0, 0xe8eC0, indexSamSho5Sprites_Rera, 1 },

    { L"Rera D (WFT Trail)", 0xe8c80, 0xe8cc0, indexSamSho5Sprites_Rera },
    { L"Rera D (Burning)", 0xe8cc0, 0xe8d00, indexSamSho5Sprites_Rera },
    { L"Rera D (Shocked)", 0xe8d00, 0xe8d40, indexSamSho5Sprites_Rera },
    { L"Rera D (Frozen/Wet)", 0xe8d40, 0xe8d80, indexSamSho5Sprites_Rera },
    { L"Rera D (Ki)", 0xe8d80, 0xe8dc0, indexSamSho5Sprites_Rera },
    { L"Rera D (Issen Trail)", 0xe8e00, 0xe8e40, indexSamSho5Sprites_Rera },
    { L"Rera D (Overkill)", 0xe8ec0, 0xe8ee0 },
    { L"Rera D (Bunri Kougeki)", 0xe8ee0, 0xe8f00 },
    { L"Rera D (Slash/Misc Effects)", 0xe8f40, 0xe8f60 },
    { L"Rera D (Imeru Shikite)", 0xe8f60, 0xe8f80 }, 
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_A[] =
{
    { L"Rimururu A (Normal)", 0xd7000, 0xd7040, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (Rage)", 0xd7040, 0xd7080, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (SON)", 0xd7240, 0xd7280, indexSamSho5Sprites_Rimururu },
    { L"Konru A", 0xd72C0, 0xd72E0, indexSamSho5Sprites_Rimururu, 0x01 },

    { L"Rimururu A (Burning)", 0xd70c0, 0xd7100, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (Shocked)", 0xd7100, 0xd7140, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (Frozen/Wet)", 0xd7140, 0xd7180, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (Ki)", 0xd7180, 0xd71c0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (Issen Trail)", 0xd7200, 0xd7240, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (Slash Effects)", 0xd7340, 0xd7360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_B[] =
{
    { L"Rimururu B (Normal)", 0xd7400, 0xd7440, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Rage)", 0xd7440, 0xd7480, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (SON)", 0xd7640, 0xd7680, indexSamSho5Sprites_Rimururu },
    { L"Konru B", 0xd76C0, 0xd76E0, indexSamSho5Sprites_Rimururu, 0x01 },

    { L"Rimururu B (Burning)", 0xd74c0, 0xd7500, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Shocked)", 0xd7500, 0xd7540, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Frozen/Wet)", 0xd7540, 0xd7580, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Ki)", 0xd7580, 0xd75c0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Issen Trail)", 0xd7600, 0xd7640, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Slash Effects)", 0xd7740, 0xd7760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_C[] =
{
    { L"Rimururu C (Normal)", 0xd7800, 0xd7840, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Rage)", 0xd7840, 0xd7880, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (SON)", 0xd7a40, 0xd7a80, indexSamSho5Sprites_Rimururu },
    { L"Konru C", 0xd7aC0, 0xd7aE0, indexSamSho5Sprites_Rimururu, 0x01 },

    { L"Rimururu C (Burning)", 0xd78c0, 0xd7900, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Shocked)", 0xd7900, 0xd7940, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Frozen/Wet)", 0xd7940, 0xd7980, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Ki)", 0xd7980, 0xd79c0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Issen Trail)", 0xd7a00, 0xd7a40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Slash Effects)", 0xd7b40, 0xd7b60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_D[] =
{
    { L"Rimururu D (Normal)", 0xd7c00, 0xd7c40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Rage)", 0xd7c40, 0xd7c80, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (SON)", 0xd7e40, 0xd7e80, indexSamSho5Sprites_Rimururu },
    { L"Konru D", 0xd7eC0, 0xd7eE0, indexSamSho5Sprites_Rimururu, 0x01 },

    { L"Rimururu D (Burning)", 0xd7cc0, 0xd7d00, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Shocked)", 0xd7d00, 0xd7d40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Frozen/Wet)", 0xd7d40, 0xd7d80, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Ki)", 0xd7d80, 0xd7dc0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Issen Trail)", 0xd7e00, 0xd7e40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Slash Effects)", 0xd7f40, 0xd7f60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_A[] =
{
    { L"Shizumaru A (Normal)", 0xde000, 0xde040, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Rage)", 0xde040, 0xde080, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (SON)", 0xde240, 0xde280, indexSamSho5Sprites_Shizumaru },

    { L"Shizumaru A (Burning)", 0xde0c0, 0xde100, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Shocked)", 0xde100, 0xde140, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Frozen/Wet)", 0xde140, 0xde180, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Ki)", 0xde180, 0xde1c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Issen Trail)", 0xde200, 0xde240, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Overkill Zankuro)", 0xde280, 0xde2c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Slash Effects)", 0xde2d0, 0xde2e0 },
    { L"Shizumaru A (Overkill Projectile)", 0xde2e0, 0xde300 },
    { L"Shizumaru A (Hitouryuu Kinjite)", 0xde340, 0xde350 },
    { L"Shizumaru A (Baiu Ensatsujin)", 0xde350, 0xde360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_B[] =
{
    { L"Shizumaru B (Normal)", 0xde400, 0xde440, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Rage)", 0xde440, 0xde480, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (SON)", 0xde640, 0xde680, indexSamSho5Sprites_Shizumaru },

    { L"Shizumaru B (Burning)", 0xde4c0, 0xde500, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Shocked)", 0xde500, 0xde540, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Frozen/Wet)", 0xde540, 0xde580, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Ki)", 0xde580, 0xde5c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Issen Trail)", 0xde600, 0xde640, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Overkill Zankuro)", 0xde680, 0xde6c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Slash Effects)", 0xde6d0, 0xde6e0 },
    { L"Shizumaru B (Overkill Projectile)", 0xde6e0, 0xde700 },
    { L"Shizumaru B (Hitouryuu Kinjite)", 0xde740, 0xde750 },
    { L"Shizumaru B (Baiu Ensatsujin)", 0xde750, 0xde760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_C[] =
{
    { L"Shizumaru C (Normal)", 0xde800, 0xde840, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Rage)", 0xde840, 0xde880, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (SON)", 0xdea40, 0xdea80, indexSamSho5Sprites_Shizumaru },

    { L"Shizumaru C (Burning)", 0xde8c0, 0xde900, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Shocked)", 0xde900, 0xde940, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Frozen/Wet)", 0xde940, 0xde980, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Ki)", 0xde980, 0xde9c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Issen Trail)", 0xdea00, 0xdea40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Overkill Zankuro)", 0xdea80, 0xdeac0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Slash Effects)", 0xdead0, 0xdeae0 },
    { L"Shizumaru C (Overkill Projectile)", 0xdeae0, 0xdeb00 },
    { L"Shizumaru C (Hitouryuu Kinjite)", 0xdeb40, 0xdeb50 },
    { L"Shizumaru C (Baiu Ensatsujin)", 0xdeb50, 0xdeb60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_D[] =
{
    { L"Shizumaru D (Normal)", 0xdec00, 0xdec40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Rage)", 0xdec40, 0xdec80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (SON)", 0xdee40, 0xdee80, indexSamSho5Sprites_Shizumaru },

    { L"Shizumaru D (Burning)", 0xdecc0, 0xded00, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Shocked)", 0xded00, 0xded40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Frozen/Wet)", 0xded40, 0xded80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Ki)", 0xded80, 0xdedc0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Issen Trail)", 0xdee00, 0xdee40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Overkill Zankuro)", 0xdee80, 0xdeec0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Slash Effects)", 0xdeed0, 0xdeee0 },
    { L"Shizumaru D (Overkill Projectile)", 0xdeee0, 0xdef00 },
    { L"Shizumaru D (Hitouryuu Kinjite)", 0xdef40, 0xdef50 },
    { L"Shizumaru D (Baiu Ensatsujin)", 0xdef50, 0xdef60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_A[] =
{
    { L"Sogetsu A (Normal)", 0xe6000, 0xe6040, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (Rage)", 0xe6040, 0xe6080, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (SON)", 0xe6240, 0xe6280, indexSamSho5Sprites_Sogetsu },

    { L"Sogetsu A (Tsuki-gakure 1)", 0xe6080, 0xe60a0 },
    { L"Sogetsu A (Tsuki-gakure 2)", 0xe60a0, 0xe60c0 },
    { L"Sogetsu A (Burning)", 0xe60c0, 0xe6100, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (Shocked)", 0xe6100, 0xe6140, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (Frozen/Wet)", 0xe6140, 0xe6180, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (Ki)", 0xe6180, 0xe61c0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (Issen Trail)", 0xe6200, 0xe6240, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (Water Specials/Slash Effect)", 0xe6340, 0xe6360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_B[] =
{
    { L"Sogetsu B (Normal)", 0xe6400, 0xe6440, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Rage)", 0xe6440, 0xe6480, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (SON)", 0xe6640, 0xe6680, indexSamSho5Sprites_Sogetsu },

    { L"Sogetsu B (Tsuki-gakure 1)", 0xe6480, 0xe64a0 },
    { L"Sogetsu B (Tsuki-gakure 2)", 0xe64a0, 0xe64c0 },
    { L"Sogetsu B (Burning)", 0xe64c0, 0xe6500, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Shocked)", 0xe6500, 0xe6540, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Frozen/Wet)", 0xe6540, 0xe6580, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Ki)", 0xe6580, 0xe65c0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Issen Trail)", 0xe6600, 0xe6640, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Water Specials/Slash Effect)", 0xe6740, 0xe6760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_C[] =
{
    { L"Sogetsu C (Normal)", 0xe6800, 0xe6840, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Rage)", 0xe6840, 0xe6880, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (SON)", 0xe6a40, 0xe6a80, indexSamSho5Sprites_Sogetsu },

    { L"Sogetsu C (Tsuki-gakure 1)", 0xe6880, 0xe68a0 },
    { L"Sogetsu C (Tsuki-gakure 2)", 0xe68a0, 0xe68c0 },
    { L"Sogetsu C (Burning)", 0xe68c0, 0xe6900, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Shocked)", 0xe6900, 0xe6940, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Frozen/Wet)", 0xe6940, 0xe6980, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Ki)", 0xe6980, 0xe69c0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Issen Trail)", 0xe6a00, 0xe6a40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Water Specials/Slash Effect)", 0xe6b40, 0xe6b60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_D[] =
{
    { L"Sogetsu D (Normal)", 0xe6c00, 0xe6c40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Rage)", 0xe6c40, 0xe6c80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (SON)", 0xe6e40, 0xe6e80, indexSamSho5Sprites_Sogetsu },

    { L"Sogetsu D (Tsuki-gakure 1)", 0xe6c80, 0xe6ca0 },
    { L"Sogetsu D (Tsuki-gakure 2)", 0xe6ca0, 0xe6cc0 },
    { L"Sogetsu D (Burning)", 0xe6cc0, 0xe6d00, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Shocked)", 0xe6d00, 0xe6d40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Frozen/Wet)", 0xe6d40, 0xe6d80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Ki)", 0xe6d80, 0xe6dc0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Issen Trail)", 0xe6e00, 0xe6e40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Water Specials/Slash Effect)", 0xe6f40, 0xe6f60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_A[] =
{
    { L"Suija A (Normal)", 0xea000, 0xea040, indexSamSho5Sprites_Suija },
    { L"Suija A (Rage)", 0xea040, 0xea080, indexSamSho5Sprites_Suija },
    { L"Suija A (SON)", 0xea240, 0xea280, indexSamSho5Sprites_Suija },

    { L"Suija A (Burning)", 0xea0c0, 0xea100, indexSamSho5Sprites_Suija },
    { L"Suija A (Shocked)", 0xea100, 0xea140, indexSamSho5Sprites_Suija },
    { L"Suija A (Frozen/Wet)", 0xea140, 0xea180, indexSamSho5Sprites_Suija },
    { L"Suija A (Ki)", 0xea180, 0xea1c0, indexSamSho5Sprites_Suija },
    { L"Suija A (Slash Effect/Engetsu 1)", 0xea1c0, 0xea1e0 },
    { L"Suija A (Getsurinha 1)", 0xea1e0, 0xea200 },
    { L"Suija A (Issen Trail)", 0xea200, 0xea240, indexSamSho5Sprites_Suija },
    { L"Suija A (Getsurinha 2)", 0xea300, 0xea320 },
    { L"Suija A (Getsurinha 3)", 0xea320, 0xea340 },
    { L"Suija A (Misc Effects)", 0xea340, 0xea360 },
    { L"Suija A (Engetsu 2)", 0xea360, 0xea380 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_B[] =
{
    { L"Suija B (Normal)", 0xea400, 0xea440, indexSamSho5Sprites_Suija },
    { L"Suija B (Rage)", 0xea440, 0xea480, indexSamSho5Sprites_Suija },
    { L"Suija B (SON)", 0xea640, 0xea680, indexSamSho5Sprites_Suija },

    { L"Suija B (Burning)", 0xea4c0, 0xea500, indexSamSho5Sprites_Suija },
    { L"Suija B (Shocked)", 0xea500, 0xea540, indexSamSho5Sprites_Suija },
    { L"Suija B (Frozen/Wet)", 0xea540, 0xea580, indexSamSho5Sprites_Suija },
    { L"Suija B (Ki)", 0xea580, 0xea5c0, indexSamSho5Sprites_Suija },
    { L"Suija B (Slash Effect/Engetsu 1)", 0xea5c0, 0xea5e0 },
    { L"Suija B (Getsurinha 1)", 0xea5e0, 0xea600 },
    { L"Suija B (Issen Trail)", 0xea600, 0xea640, indexSamSho5Sprites_Suija },
    { L"Suija B (Getsurinha 2)", 0xea700, 0xea720 },
    { L"Suija B (Getsurinha 3)", 0xea720, 0xea740 },
    { L"Suija B (Misc Effects)", 0xea740, 0xea760 },
    { L"Suija B (Engetsu 2)", 0xea760, 0xea780 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_C[] =
{
    { L"Suija C (Normal)", 0xea800, 0xea840, indexSamSho5Sprites_Suija },
    { L"Suija C (Rage)", 0xea840, 0xea880, indexSamSho5Sprites_Suija },
    { L"Suija C (SON)", 0xeaa40, 0xeaa80, indexSamSho5Sprites_Suija },

    { L"Suija C (Burning)", 0xea8c0, 0xea900, indexSamSho5Sprites_Suija },
    { L"Suija C (Shocked)", 0xea900, 0xea940, indexSamSho5Sprites_Suija },
    { L"Suija C (Frozen/Wet)", 0xea940, 0xea980, indexSamSho5Sprites_Suija },
    { L"Suija C (Ki)", 0xea980, 0xea9c0, indexSamSho5Sprites_Suija },
    { L"Suija C (Slash Effect/Engetsu 1)", 0xea9c0, 0xea9e0 },
    { L"Suija C (Getsurinha 1)", 0xea9e0, 0xeaa00 },
    { L"Suija C (Issen Trail)", 0xeaa00, 0xeaa40, indexSamSho5Sprites_Suija },
    { L"Suija C (Getsurinha 2)", 0xeab00, 0xeab20 },
    { L"Suija C (Getsurinha 3)", 0xeab20, 0xeab40 },
    { L"Suija C (Misc Effects)", 0xeab40, 0xeab60 },
    { L"Suija C (Engetsu 2)", 0xeab60, 0xeab80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_D[] =
{
    { L"Suija D (Normal)", 0xeac00, 0xeac40, indexSamSho5Sprites_Suija },
    { L"Suija D (Rage)", 0xeac40, 0xeac80, indexSamSho5Sprites_Suija },
    { L"Suija D (SON)", 0xeae40, 0xeae80, indexSamSho5Sprites_Suija },

    { L"Suija D (Burning)", 0xeacc0, 0xead00, indexSamSho5Sprites_Suija },
    { L"Suija D (Shocked)", 0xead00, 0xead40, indexSamSho5Sprites_Suija },
    { L"Suija D (Frozen/Wet)", 0xead40, 0xead80, indexSamSho5Sprites_Suija },
    { L"Suija D (Ki)", 0xead80, 0xeadc0, indexSamSho5Sprites_Suija },
    { L"Suija D (Slash Effect/Engetsu 1)", 0xeadc0, 0xeade0 },
    { L"Suija D (Getsurinha 1)", 0xeade0, 0xeae00 },
    { L"Suija D (Issen Trail)", 0xeae00, 0xeae40, indexSamSho5Sprites_Suija },
    { L"Suija D (Getsurinha 2)", 0xeaf00, 0xeaf20 },
    { L"Suija D (Getsurinha 3)", 0xeaf20, 0xeaf40 },
    { L"Suija D (Misc Effects)", 0xeaf40, 0xeaf60 },
    { L"Suija D (Engetsu 2)", 0xeaf60, 0xeaf80 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_A[] =
{
    { L"Tam Tam A (Normal)", 0xe4000, 0xe4040, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (Rage)", 0xe4040, 0xe4080, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (SON)", 0xe4240, 0xe4280, indexSamSho5Sprites_TamTam },

    { L"Tam Tam A (Overkill Mask)", 0xe4080, 0xe40a0 },

    { L"Tam Tam A (Burning)", 0xe40c0, 0xe4100, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (Shocked)", 0xe4100, 0xe4140, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (Frozen/Wet)", 0xe4140, 0xe4180, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (Ki)", 0xe4180, 0xe41c0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (Issen Trail)", 0xe4200, 0xe4240, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (Magnsa Dios Zarl)", 0xe4280, 0xe42a0 },
    { L"Tam Tam A (WFT/Overkill Tribesmen)", 0xe42a0, 0xe42c0 },
    { L"Tam Tam A (Ahau Gaburu/Overkill)", 0xe42c0, 0xe4300 },
    { L"Tam Tam A (Cham Cham)", 0xe4300, 0xe4320 },
    { L"Tam Tam A (Ahau Gaburu Startup)", 0xe4340, 0xe4350 },
    { L"Tam Tam A (Slash Effect/Misc)", 0xe4350, 0xe4360 },
    { L"Tam Tam A (Ahau Gaburu Tribesmen)", 0xe4380, 0xe4390 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_B[] =
{
    { L"Tam Tam B (Normal)", 0xe4400, 0xe4440, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Rage)", 0xe4440, 0xe4480, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (SON)", 0xe4640, 0xe4680, indexSamSho5Sprites_TamTam },

    { L"Tam Tam B (Overkill Mask)", 0xe4480, 0xe44a0 },

    { L"Tam Tam B (Burning)", 0xe44c0, 0xe4500, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Shocked)", 0xe4500, 0xe4540, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Frozen/Wet)", 0xe4540, 0xe4580, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Ki)", 0xe4580, 0xe45c0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Issen Trail)", 0xe4600, 0xe4640, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Magnsa Dios Zarl)", 0xe4680, 0xe46a0 },
    { L"Tam Tam B (WFT/Overkill Tribesmen)", 0xe46a0, 0xe46c0 },
    { L"Tam Tam B (Ahau Gaburu/Overkill)", 0xe46c0, 0xe4700 },
    { L"Tam Tam B (Cham Cham)", 0xe4700, 0xe4720 },
    { L"Tam Tam B (Ahau Gaburu Startup)", 0xe4740, 0xe4750 },
    { L"Tam Tam B (Slash Effect/Misc)", 0xe4750, 0xe4760 },
    { L"Tam Tam B (Ahau Gaburu Tribesmen)", 0xe4780, 0xe4790 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_C[] =
{
    { L"Tam Tam C (Normal)", 0xe4800, 0xe4840, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Rage)", 0xe4840, 0xe4880, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (SON)", 0xe4a40, 0xe4a80, indexSamSho5Sprites_TamTam },

    { L"Tam Tam C (Overkill Mask)", 0xe4880, 0xe48a0 },

    { L"Tam Tam C (Burning)", 0xe48c0, 0xe4900, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Shocked)", 0xe4900, 0xe4940, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Frozen/Wet)", 0xe4940, 0xe4980, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Ki)", 0xe4980, 0xe49c0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Issen Trail)", 0xe4a00, 0xe4a40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Magnsa Dios Zarl)", 0xe4a80, 0xe4aa0 },
    { L"Tam Tam C (WFT/Overkill Tribesmen)", 0xe4aa0, 0xe4ac0 },
    { L"Tam Tam C (Ahau Gaburu/Overkill)", 0xe4ac0, 0xe4b00 },
    { L"Tam Tam C (Cham Cham)", 0xe4b00, 0xe4b20 },
    { L"Tam Tam C (Ahau Gaburu Startup)", 0xe4b40, 0xe4b50 },
    { L"Tam Tam C (Slash Effect/Misc)", 0xe4b50, 0xe4b60 },
    { L"Tam Tam C (Ahau Gaburu Tribesmen)", 0xe4b80, 0xe4b90 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_D[] =
{
    { L"Tam Tam D (Normal)", 0xe4c00, 0xe4c40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Rage)", 0xe4c40, 0xe4c80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (SON)", 0xe4e40, 0xe4e80, indexSamSho5Sprites_TamTam },

    { L"Tam Tam D (Overkill Mask)", 0xe4c80, 0xe4ca0 },

    { L"Tam Tam D (Burning)", 0xe4cc0, 0xe4d00, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Shocked)", 0xe4d00, 0xe4d40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Frozen/Wet)", 0xe4d40, 0xe4d80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Ki)", 0xe4d80, 0xe4dc0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Issen Trail)", 0xe4e00, 0xe4e40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Magnsa Dios Zarl)", 0xe4e80, 0xe4ea0 },
    { L"Tam Tam D (WFT/Overkill Tribesmen)", 0xe4ea0, 0xe4ec0 },
    { L"Tam Tam D (Ahau Gaburu/Overkill)", 0xe4ec0, 0xe4f00 },
    { L"Tam Tam D (Cham Cham)", 0xe4f00, 0xe4f20 },
    { L"Tam Tam D (Ahau Gaburu Startup)", 0xe4f40, 0xe4f50 },
    { L"Tam Tam D (Slash Effect/Misc)", 0xe4f50, 0xe4f60 },
    { L"Tam Tam D (Ahau Gaburu Tribesmen)", 0xe4f80, 0xe4f90 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_A[] =
{
    { L"Ukyo A (Normal)", 0xdb000, 0xdb040, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Rage)", 0xdb040, 0xdb080, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (SON)", 0xdb240, 0xdb280, indexSamSho5Sprites_Ukyo },

    { L"Ukyo A (Tsubame Gaeshi Trail)", 0xdb0a0, 0xdb0c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Burning)", 0xdb0c0, 0xdb100, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Shocked)", 0xdb100, 0xdb140, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Frozen/Wet)", 0xdb140, 0xdb180, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Ki)", 0xdb180, 0xdb1c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Tsubame Gaeshi Flame)", 0xdb1c0, 0xdb1e0 },
    { L"Ukyo A (Issen Trail)", 0xdb200, 0xdb240, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Zanzou Fumikomi)", 0xdb280, 0xdb2a0 },
    { L"Ukyo A (Overkill Symbols)", 0xdb2e0, 0xdb300 },
    { L"Ukyo A (HiKen/Slash Effects)", 0xdb340, 0xdb360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_B[] =
{
    { L"Ukyo B (Normal)", 0xdb400, 0xdb440, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Rage)", 0xdb440, 0xdb480, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (SON)", 0xdb640, 0xdb680, indexSamSho5Sprites_Ukyo },

    { L"Ukyo B (Tsubame Gaeshi Trail)", 0xdb4a0, 0xdb4c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Burning)", 0xdb4c0, 0xdb500, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Shocked)", 0xdb500, 0xdb540, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Frozen/Wet)", 0xdb540, 0xdb580, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Ki)", 0xdb580, 0xdb5c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Tsubame Gaeshi Flame)", 0xdb5c0, 0xdb5e0 },
    { L"Ukyo B (Issen Trail)", 0xdb600, 0xdb640, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Zanzou Fumikomi)", 0xdb680, 0xdb6a0 },
    { L"Ukyo B (Overkill Symbols)", 0xdb6e0, 0xdb700 },
    { L"Ukyo B (HiKen/Slash Effects)", 0xdb740, 0xdb760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_C[] =
{
    { L"Ukyo C (Normal)", 0xdb800, 0xdb840, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Rage)", 0xdb840, 0xdb880, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (SON)", 0xdba40, 0xdba80, indexSamSho5Sprites_Ukyo },

    { L"Ukyo C (Tsubame Gaeshi Trail)", 0xdb8a0, 0xdb8c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Burning)", 0xdb8c0, 0xdb900, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Shocked)", 0xdb900, 0xdb940, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Frozen/Wet)", 0xdb940, 0xdb980, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Ki)", 0xdb980, 0xdb9c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Tsubame Gaeshi Flame)", 0xdb9c0, 0xdb9e0 },
    { L"Ukyo C (Issen Trail)", 0xdba00, 0xdba40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Zanzou Fumikomi)", 0xdba80, 0xdbaa0 },
    { L"Ukyo C (Overkill Symbols)", 0xdbae0, 0xdbb00 },
    { L"Ukyo C (HiKen/Slash Effects)", 0xdbb40, 0xdbb60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_D[] =
{
    { L"Ukyo D (Normal)", 0xdbc00, 0xdbc40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Rage)", 0xdbc40, 0xdbc80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (SON)", 0xdbe40, 0xdbe80, indexSamSho5Sprites_Ukyo },

    { L"Ukyo D (Tsubame Gaeshi Trail)", 0xdbca0, 0xdbcc0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Burning)", 0xdbcc0, 0xdbd00, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Shocked)", 0xdbd00, 0xdbd40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Frozen/Wet)", 0xdbd40, 0xdbd80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Ki)", 0xdbd80, 0xdbdc0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Tsubame Gaeshi Flame)", 0xdbdc0, 0xdbde0 },
    { L"Ukyo D (Issen Trail)", 0xdbe00, 0xdbe40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Zanzou Fumikomi)", 0xdbe80, 0xdbea0 },
    { L"Ukyo D (Overkill Symbols)", 0xdbee0, 0xdbf00 },
    { L"Ukyo D (HiKen/Slash Effects)", 0xdbf40, 0xdbf60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_A[] =
{
    { L"Yoshitora A (Normal)", 0xeb000, 0xeb040, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (Rage)", 0xeb040, 0xeb080, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (SON)", 0xeb240, 0xeb280, indexSamSho5Sprites_Yoshitora },

    { L"Yoshitora A (Burning)", 0xeb0c0, 0xeb100, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (Shocked)", 0xeb100, 0xeb140, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (Frozen/Wet)", 0xeb140, 0xeb180, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (Ki)", 0xeb180, 0xeb1c0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (Asagao)", 0xeb1c0, 0xeb1e0 },
    { L"Yoshitora A (WFT)", 0xeb1e0, 0xeb200 },
    { L"Yoshitora A (Issen Trail)", 0xeb200, 0xeb240, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (Nadeshko/Misc)", 0xeb280, 0xeb2a0 },
    { L"Yoshitora A (Nadeshko Flower)", 0xeb2a0, 0xeb2c0 },
    { L"Yoshitora A (Tsubaki)", 0xeb2c0, 0xeb2e0 },
    { L"Yoshitora A (Tsubaki Flower)", 0xeb2e0, 0xeb300 },
    { L"Yoshitora A (Shirayuri/Slash Effects)", 0xeb300, 0xeb320 },
    { L"Yoshitora A (Botan & 7th Sword)", 0xeb320, 0xeb340 },
    { L"Yoshitora A (Wives Dresses)", 0xeb340, 0xeb360 },
    { L"Yoshitora A (Wives Misc)", 0xeb360, 0xeb380 },
    { L"Yoshitora A (Yuugao)", 0xeb380, 0xeb3a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_B[] =
{
    { L"Yoshitora B (Normal)", 0xeb400, 0xeb440, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Rage)", 0xeb440, 0xeb480, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (SON)", 0xeb640, 0xeb680, indexSamSho5Sprites_Yoshitora },

    { L"Yoshitora B (Burning)", 0xeb4c0, 0xeb500, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Shocked)", 0xeb500, 0xeb540, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Frozen/Wet)", 0xeb540, 0xeb580, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Ki)", 0xeb580, 0xeb5c0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Asagao)", 0xeb5c0, 0xeb5e0 },
    { L"Yoshitora B (WFT)", 0xeb5e0, 0xeb600 },
    { L"Yoshitora B (Issen Trail)", 0xeb600, 0xeb640, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Nadeshko/Misc)", 0xeb680, 0xeb6a0 },
    { L"Yoshitora B (Nadeshko Flower)", 0xeb6a0, 0xeb6c0 },
    { L"Yoshitora B (Tsubaki)", 0xeb6c0, 0xeb6e0 },
    { L"Yoshitora B (Tsubaki Flower)", 0xeb6e0, 0xeb700 },
    { L"Yoshitora B (Shirayuri/Slash Effects)", 0xeb700, 0xeb720 },
    { L"Yoshitora B (Botan & 7th Sword)", 0xeb720, 0xeb740 },
    { L"Yoshitora B (Wives Dresses)", 0xeb740, 0xeb760 },
    { L"Yoshitora B (Wives Misc)", 0xeb760, 0xeb780 },
    { L"Yoshitora B (Yuugao)", 0xeb780, 0xeb7a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_C[] =
{
    { L"Yoshitora C (Normal)", 0xeb800, 0xeb840, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Rage)", 0xeb840, 0xeb880, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (SON)", 0xeba40, 0xeba80, indexSamSho5Sprites_Yoshitora },

    { L"Yoshitora C (Burning)", 0xeb8c0, 0xeb900, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Shocked)", 0xeb900, 0xeb940, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Frozen/Wet)", 0xeb940, 0xeb980, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Ki)", 0xeb980, 0xeb9c0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Asagao)", 0xeb9c0, 0xeb9e0 },
    { L"Yoshitora C (WFT)", 0xeb9e0, 0xeba00 },
    { L"Yoshitora C (Issen Trail)", 0xeba00, 0xeba40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Nadeshko/Misc)", 0xeba80, 0xebaa0 },
    { L"Yoshitora C (Nadeshko Flower)", 0xebaa0, 0xebac0 },
    { L"Yoshitora C (Tsubaki)", 0xebac0, 0xebae0 },
    { L"Yoshitora C (Tsubaki Flower)", 0xebae0, 0xebb00 },
    { L"Yoshitora C (Shirayuri/Slash Effects)", 0xebb00, 0xebb20 },
    { L"Yoshitora C (Botan & 7th Sword)", 0xebb20, 0xebb40 },
    { L"Yoshitora C (Wives Dresses)", 0xebb40, 0xebb60 },
    { L"Yoshitora C (Wives Misc)", 0xebb60, 0xebb80 },
    { L"Yoshitora C (Yuugao)", 0xebb80, 0xebba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_D[] =
{
    { L"Yoshitora D (Normal)", 0xebc00, 0xebc40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Rage)", 0xebc40, 0xebc80, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (SON)", 0xebe40, 0xebe80, indexSamSho5Sprites_Yoshitora },

    { L"Yoshitora D (Burning)", 0xebcc0, 0xebd00, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Shocked)", 0xebd00, 0xebd40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Frozen/Wet)", 0xebd40, 0xebd80, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Ki)", 0xebd80, 0xebdc0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Asagao)", 0xebdc0, 0xebde0 },
    { L"Yoshitora D (WFT)", 0xebde0, 0xebe00 },
    { L"Yoshitora D (Issen Trail)", 0xebe00, 0xebe40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Nadeshko/Misc)", 0xebe80, 0xebea0 },
    { L"Yoshitora D (Nadeshko Flower)", 0xebea0, 0xebec0 },
    { L"Yoshitora D (Tsubaki)", 0xebec0, 0xebee0 },
    { L"Yoshitora D (Tsubaki Flower)", 0xebee0, 0xebf00 },
    { L"Yoshitora D (Shirayuri/Slash Effects)", 0xebf00, 0xebf20 },
    { L"Yoshitora D (Botan & 7th Sword)", 0xebf20, 0xebf40 },
    { L"Yoshitora D (Wives Dresses)", 0xebf40, 0xebf60 },
    { L"Yoshitora D (Wives Misc)", 0xebf60, 0xebf80 },
    { L"Yoshitora D (Yuugao)", 0xebf80, 0xebfa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_A[] =
{
    { L"Yunfei A (Normal)", 0xec000, 0xec040, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (Rage)", 0xec040, 0xec080, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (SON)", 0xec240, 0xec280, indexSamSho5Sprites_Yunfei },

    { L"Yunfei A (Burning)", 0xec0c0, 0xec100, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (Shocked)", 0xec100, 0xec140, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (Frozen/Wet)", 0xec140, 0xec180, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (Ki)", 0xec180, 0xec1c0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (Issen Trail)", 0xec200, 0xec240, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (WFT1)", 0xec2c0, 0xec2e0 },
    { L"Yunfei A (Overkill/WFT2)", 0xec300, 0xec340 },
    { L"Yunfei A (Slash Effects/Tenkoku Houra)", 0xec340, 0xec360 },
    { L"Yunfei A (Misc Specials)", 0xec360, 0xec380 },
    { L"Yunfei A (WFT3)", 0xec380, 0xec3a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_B[] =
{
    { L"Yunfei B (Normal)", 0xec400, 0xec440, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Rage)", 0xec440, 0xec480, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (SON)", 0xec640, 0xec680, indexSamSho5Sprites_Yunfei },

    { L"Yunfei B (Burning)", 0xec4c0, 0xec500, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Shocked)", 0xec500, 0xec540, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Frozen/Wet)", 0xec540, 0xec580, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Ki)", 0xec580, 0xec5c0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Issen Trail)", 0xec600, 0xec640, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (WFT1)", 0xec6c0, 0xec6e0 },
    { L"Yunfei B (Overkill/WFT2)", 0xec700, 0xec740 },
    { L"Yunfei B (Slash Effects/Tenkoku Houra)", 0xec740, 0xec760 },
    { L"Yunfei B (Misc Specials)", 0xec760, 0xec780 },
    { L"Yunfei B (WFT3)", 0xec780, 0xec7a0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_C[] =
{
    { L"Yunfei C (Normal)", 0xec800, 0xec840, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Rage)", 0xec840, 0xec880, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (SON)", 0xeca40, 0xeca80, indexSamSho5Sprites_Yunfei },

    { L"Yunfei C (Burning)", 0xec8c0, 0xec900, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Shocked)", 0xec900, 0xec940, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Frozen/Wet)", 0xec940, 0xec980, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Ki)", 0xec980, 0xec9c0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Issen Trail)", 0xeca00, 0xeca40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (WFT1)", 0xecac0, 0xecae0 },
    { L"Yunfei C (Overkill/WFT2)", 0xecb00, 0xecb40 },
    { L"Yunfei C (Slash Effects/Tenkoku Houra)", 0xecb40, 0xecb60 },
    { L"Yunfei C (Misc Specials)", 0xecb60, 0xecb80 },
    { L"Yunfei C (WFT3)", 0xecb80, 0xecba0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_D[] =
{
    { L"Yunfei D (Normal)", 0xecc00, 0xecc40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Rage)", 0xecc40, 0xecc80, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (SON)", 0xece40, 0xece80, indexSamSho5Sprites_Yunfei },

    { L"Yunfei D (Burning)", 0xeccc0, 0xecd00, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Shocked)", 0xecd00, 0xecd40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Frozen/Wet)", 0xecd40, 0xecd80, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Ki)", 0xecd80, 0xecdc0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Issen Trail)", 0xece00, 0xece40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (WFT1)", 0xecec0, 0xecee0 },
    { L"Yunfei D (Overkill/WFT2)", 0xecf00, 0xecf40 },
    { L"Yunfei D (Slash Effects/Tenkoku Houra)", 0xecf40, 0xecf60 },
    { L"Yunfei D (Misc Specials)", 0xecf60, 0xecf80 },
    { L"Yunfei D (WFT3)", 0xecf80, 0xecfa0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_A[] =
{
    { L"Zankuro A (Normal)", 0xe2000, 0xe2040, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (Rage)", 0xe2040, 0xe2080, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (SON)", 0xe2240, 0xe2280, indexSamSho5Sprites_Zankuro },

    { L"Zankuro A (Burning)", 0xe20c0, 0xe2100, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (Shocked)", 0xe2100, 0xe2140, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (Frozen/Wet)", 0xe2140, 0xe2180, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (Ki)", 0xe2180, 0xe21c0, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (Issen Trail)", 0xe2200, 0xe2240, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (Overkill Beam)", 0xe22a0, 0xe22c0 },
    { L"Zankuro A (Overkill Startup)", 0xe22c0, 0xe22e0 },
    { L"Zankuro A (Slash Effect)", 0xe2310, 0xe2320 },
    { L"Zankuro A (Mugen-ryuu Tenhouzan)", 0xe2320, 0xe2340 },
    { L"Zankuro A (Assorted Specials)", 0xe2340, 0xe2360 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_B[] =
{
    { L"Zankuro B (Normal)", 0xe2400, 0xe2440, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Rage)", 0xe2440, 0xe2480, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (SON)", 0xe2640, 0xe2680, indexSamSho5Sprites_Zankuro },

    { L"Zankuro B (Burning)", 0xe24c0, 0xe2500, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Shocked)", 0xe2500, 0xe2540, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Frozen/Wet)", 0xe2540, 0xe2580, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Ki)", 0xe2580, 0xe25c0, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Issen Trail)", 0xe2600, 0xe2640, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Overkill Beam)", 0xe26a0, 0xe26c0 },
    { L"Zankuro B (Overkill Startup)", 0xe26c0, 0xe26e0 },
    { L"Zankuro B (Slash Effect)", 0xe2710, 0xe2720 },
    { L"Zankuro B (Mugen-ryuu Tenhouzan)", 0xe2720, 0xe2740 },
    { L"Zankuro B (Assorted Specials)", 0xe2740, 0xe2760 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_C[] =
{
    { L"Zankuro C (Normal)", 0xe2800, 0xe2840, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Rage)", 0xe2840, 0xe2880, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (SON)", 0xe2a40, 0xe2a80, indexSamSho5Sprites_Zankuro },

    { L"Zankuro C (Burning)", 0xe28c0, 0xe2900, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Shocked)", 0xe2900, 0xe2940, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Frozen/Wet)", 0xe2940, 0xe2980, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Ki)", 0xe2980, 0xe29c0, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Issen Trail)", 0xe2a00, 0xe2a40, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Overkill Beam)", 0xe2aa0, 0xe2ac0 },
    { L"Zankuro C (Overkill Startup)", 0xe2ac0, 0xe2ae0 },
    { L"Zankuro C (Slash Effect)", 0xe2b10, 0xe2b20 },
    { L"Zankuro C (Mugen-ryuu Tenhouzan)", 0xe2b20, 0xe2b40 },
    { L"Zankuro C (Assorted Specials)", 0xe2b40, 0xe2b60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_D[] =
{
    { L"Zankuro D (Normal)", 0xe2c00, 0xe2c40, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Rage)", 0xe2c40, 0xe2c80, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (SON)", 0xe2e40, 0xe2e80, indexSamSho5Sprites_Zankuro },

    { L"Zankuro D (Burning)", 0xe2cc0, 0xe2d00, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Shocked)", 0xe2d00, 0xe2d40, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Frozen/Wet)", 0xe2d40, 0xe2d80, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Ki)", 0xe2d80, 0xe2dc0, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Issen Trail)", 0xe2e00, 0xe2e40, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Overkill Beam)", 0xe2ea0, 0xe2ec0 },
    { L"Zankuro D (Overkill Startup)", 0xe2ec0, 0xe2ee0 },
    { L"Zankuro D (Slash Effect)", 0xe2f10, 0xe2f20 },
    { L"Zankuro D (Mugen-ryuu Tenhouzan)", 0xe2f20, 0xe2f40 },
    { L"Zankuro D (Assorted Specials)", 0xe2f40, 0xe2f60 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_PORTRAITS[] =
{
    { L"Amakusa A (Portrait)", 0xe03a0, 0xe03e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Portrait)", 0xe07a0, 0xe07e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Portrait)", 0xe0ba0, 0xe0be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Portrait)", 0xe0fa0, 0xe0fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_PORTRAITS[] =
{
    { L"Basara A (Portrait)", 0xdd3a0, 0xdd3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
    { L"Basara B (Portrait)", 0xdd7a0, 0xdd7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
    { L"Basara C (Portrait)", 0xddba0, 0xddbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
    { L"Basara D (Portrait)", 0xddfa0, 0xddfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_PORTRAITS[] =
{
    { L"Charlotte A (Portrait)", 0xe33a0, 0xe33e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Portrait)", 0xe37a0, 0xe37e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Portrait)", 0xe3ba0, 0xe3be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Portrait)", 0xe3fa0, 0xe3fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_PORTRAITS[] =
{
    { L"Enja A (Portrait)", 0xe93a0, 0xe93e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
    { L"Enja B (Portrait)", 0xe97a0, 0xe97e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
    { L"Enja C (Portrait)", 0xe9ba0, 0xe9be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
    { L"Enja D (Portrait)", 0xe9fa0, 0xe9fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_PORTRAITS[] =
{
    { L"Gaira A (Portrait)", 0xdf3a0, 0xdf3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Portrait)", 0xdf7a0, 0xdf7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Portrait)", 0xdfba0, 0xdfbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Portrait)", 0xdffa0, 0xdffe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_PORTRAITS[] =
{
    { L"Galford A (Portrait)", 0xd93a0, 0xd93e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
    { L"Galford B (Portrait)", 0xd97a0, 0xd97e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
    { L"Galford C (Portrait)", 0xd9ba0, 0xd9be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
    { L"Galford D (Portrait)", 0xd9fa0, 0xd9fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_PORTRAITS[] =
{
    { L"Gaoh A (Portrait)", 0xef3a0, 0xef3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Portrait)", 0xef7a0, 0xef7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Portrait)", 0xefba0, 0xefbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Portrait)", 0xeffa0, 0xeffe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_PORTRAITS[] =
{
    { L"Genjuro A (Portrait)", 0xdc3a0, 0xdc3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Portrait)", 0xdc7a0, 0xdc7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Portrait)", 0xdcba0, 0xdcbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Portrait)", 0xdcfa0, 0xdcfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_PORTRAITS[] =
{
    { L"Hanzo A (Portrait)", 0xd83a0, 0xd83e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Portrait)", 0xd87a0, 0xd87e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Portrait)", 0xd8ba0, 0xd8be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Portrait)", 0xd8fa0, 0xd8fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_PORTRAITS[] =
{
    { L"Haohmaru A (Portrait)", 0xd53a0, 0xd53e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Portrait)", 0xd57a0, 0xd57e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Portrait)", 0xd5ba0, 0xd5be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Portrait)", 0xd5fa0, 0xd5fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_PORTRAITS[] =
{
    { L"Jubei A (Portrait)", 0xe13a0, 0xe13e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Portrait)", 0xe17a0, 0xe17e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Portrait)", 0xe1ba0, 0xe1be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Portrait)", 0xe1fa0, 0xe1fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_PORTRAITS[] =
{
    { L"Kazuki A (Portrait)", 0xe53a0, 0xe53e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Portrait)", 0xe57a0, 0xe57e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Portrait)", 0xe5ba0, 0xe5be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Portrait)", 0xe5fa0, 0xe5fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_PORTRAITS[] =
{
    { L"Kusaregedo A (Portrait)", 0xee3a0, 0xee3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Portrait)", 0xee7a0, 0xee7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Portrait)", 0xeeba0, 0xeebe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Portrait)", 0xeefa0, 0xeefe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_PORTRAITS[] =
{
    { L"Kyoshiro A (Portrait)", 0xda3a0, 0xda3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro B (Portrait)", 0xda7a0, 0xda7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro C (Portrait)", 0xdaba0, 0xdabe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro D (Portrait)", 0xdafa0, 0xdafe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_PORTRAITS[] =
{
    { L"Mina A (Portrait)", 0xed3a0, 0xed3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
    { L"Mina B (Portrait)", 0xed7a0, 0xed7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
    { L"Mina C (Portrait)", 0xedba0, 0xedbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
    { L"Mina D (Portrait)", 0xedfa0, 0xedfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_PORTRAITS[] =
{
    { L"Mizuki A (Portrait)", 0xf03a0, 0xf03e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Portrait)", 0xf07a0, 0xf07e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Portrait)", 0xf0ba0, 0xf0be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Portrait)", 0xf0fa0, 0xf0fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_PORTRAITS[] =
{
    { L"Nakoruru A (Portrait)", 0xd63a0, 0xd63e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru B (Portrait)", 0xd67a0, 0xd67e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru C (Portrait)", 0xd6ba0, 0xd6be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru D (Portrait)", 0xd6fa0, 0xd6fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_PORTRAITS[] =
{
    { L"Rasetsumaru A (Portrait)", 0xe73a0, 0xe73e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Portrait)", 0xe77a0, 0xe77e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Portrait)", 0xe7ba0, 0xe7be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Portrait)", 0xe7fa0, 0xe7fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_PORTRAITS[] =
{
    { L"Rera A (Portrait)", 0xe83a0, 0xe83e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
    { L"Rera B (Portrait)", 0xe87a0, 0xe87e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
    { L"Rera C (Portrait)", 0xe8ba0, 0xe8be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
    { L"Rera D (Portrait)", 0xe8fa0, 0xe8fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_PORTRAITS[] =
{
    { L"Rimururu A (Portrait)", 0xd73a0, 0xd73e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Portrait)", 0xd77a0, 0xd77e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Portrait)", 0xd7ba0, 0xd7be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Portrait)", 0xd7fa0, 0xd7fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_PORTRAITS[] =
{
    { L"Shizumaru A (Portrait)", 0xde3a0, 0xde3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Portrait)", 0xde7a0, 0xde7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Portrait)", 0xdeba0, 0xdebe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Portrait)", 0xdefa0, 0xdefe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_PORTRAITS[] =
{
    { L"Sogetsu A (Portrait)", 0xe63a0, 0xe63e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Portrait)", 0xe67a0, 0xe67e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Portrait)", 0xe6ba0, 0xe6be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Portrait)", 0xe6fa0, 0xe6fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_PORTRAITS[] =
{
    { L"Suija A (Portrait)", 0xea3a0, 0xea3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
    { L"Suija B (Portrait)", 0xea7a0, 0xea7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
    { L"Suija C (Portrait)", 0xeaba0, 0xeabe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
    { L"Suija D (Portrait)", 0xeafa0, 0xeafe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_PORTRAITS[] =
{
    { L"Tam Tam A (Portrait)", 0xe43a0, 0xe43e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Portrait)", 0xe47a0, 0xe47e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Portrait)", 0xe4ba0, 0xe4be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Portrait)", 0xe4fa0, 0xe4fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_PORTRAITS[] =
{
    { L"Ukyo A (Portrait)", 0xdb3a0, 0xdb3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Portrait)", 0xdb7a0, 0xdb7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Portrait)", 0xdbba0, 0xdbbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Portrait)", 0xdbfa0, 0xdbfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_PORTRAITS[] =
{
    { L"Yoshitora A (Portrait)", 0xeb3a0, 0xeb3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Portrait)", 0xeb7a0, 0xeb7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Portrait)", 0xebba0, 0xebbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Portrait)", 0xebfa0, 0xebfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_PORTRAITS[] =
{
    { L"Yunfei A (Portrait)", 0xec3a0, 0xec3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Portrait)", 0xec7a0, 0xec7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Portrait)", 0xecba0, 0xecbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Portrait)", 0xecfa0, 0xecfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_PORTRAITS[] =
{
    { L"Zankuro A (Portrait)", 0xe23a0, 0xe23e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Portrait)", 0xe27a0, 0xe27e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Portrait)", 0xe2ba0, 0xe2be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Portrait)", 0xe2fa0, 0xe2fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_BONUS_PALETTES[] =
{
    { L"Blood",                 0xd4600, 0xd4620, indexSamSho5Sprites_Bonus, 0x00 },
    { L"Blood 2 (unused ? )",   0xd4620, 0xd4640, indexSamSho5Sprites_Bonus, 0x00 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_HUD_PALETTES[] =
{
   { L"Timer/Names/Rage Active Bar/New Challenger", 0xd40c0, 0xd40e0, indexSamSho5Sprites_Bonus, 0x08 },
   { L"KO/POW",                                     0xd4020, 0xd4040, indexSamSho5Sprites_Bonus, 0x04 },
   { L"Counter Text",                               0xd4040, 0xd4060, indexSamSho5Sprites_Bonus, 0x05 },
   { L"Top Bar",                                    0xd4060, 0xd4080, indexSamSho5Sprites_Bonus, 0x02 },
   { L"Low Health",                                 0xd4080, 0xd40a0, indexSamSho5Sprites_Bonus, 0x01 },
   { L"Bottom bar",                                 0xd40a0, 0xd40c0, indexSamSho5Sprites_Bonus, 0x03 },
   { L"Generic text",                               0xd4000, 0xd4020 },
   { L"Round Wins",                                 0xd4100, 0xd4120 },
   { L"Rage Meter Flash (1/8)",                     0xd4120, 0xd4140, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Flash (2/8)",                     0xfbe40, 0xfbe60, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Flash (3/8)",                     0xfbe60, 0xfbe80, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Flash (4/8)",                     0xfbe80, 0xfbea0, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Flash (5/8)",                     0xfbea0, 0xfbec0, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Flash (6/8)",                     0xfbec0, 0xfbee0, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Flash (7/8)",                     0xfbee0, 0xfbf00, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Flash (8/8)",                     0xfbf00, 0xfbf20, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Full Flash (1/8)",                0xd4140, 0xd4160, indexSamSho5Sprites_Bonus, 0x06 },
   { L"Rage Meter Full Flash (2/8)",                0xfbf20, 0xfbf40, indexSamSho5Sprites_Bonus, 0x06 },
};

const sDescTreeNode SAMSHO5SP_A_Amakusa_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Basara_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Charlotte_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Enja_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Gaira_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Galford_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Gaoh_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Genjuro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Hanzo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Haohmaru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Jubei_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Kazuki_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Kusaregedo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Kyoshiro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Mina_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Mizuki_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Nakoruru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Rasetsumaru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Rera_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Rimururu_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Shizumaru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Sogetsu_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Suija_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_TamTam_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Ukyo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Yoshitora_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Yunfei_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_Zankuro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5SP_A_BONUS_COLLECTION[] =
{
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_BONUS_PALETTES, ARRAYSIZE(SAMSHOW5SP_A_BONUS_PALETTES) },
    { L"HUD",   DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_HUD_PALETTES,   ARRAYSIZE(SAMSHOW5SP_A_HUD_PALETTES) },
};

const sDescTreeNode SAMSHO5SP_A_UNITS[] =
{
    { L"Amakusa", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Amakusa_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Amakusa_COLLECTION) },
    { L"Basara", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Basara_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Basara_COLLECTION) },
    { L"Charlotte", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Charlotte_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Charlotte_COLLECTION) },
    { L"Enja", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Enja_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Enja_COLLECTION) },
    { L"Gaira", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Gaira_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Gaira_COLLECTION) },
    { L"Galford", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Galford_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Galford_COLLECTION) },
    { L"Gaoh", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Gaoh_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Gaoh_COLLECTION) },
    { L"Genjuro", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Genjuro_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Genjuro_COLLECTION) },
    { L"Hanzo", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Hanzo_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Hanzo_COLLECTION) },
    { L"Haohmaru", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Haohmaru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Haohmaru_COLLECTION) },
    { L"Jubei", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Jubei_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Jubei_COLLECTION) },
    { L"Kazuki", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Kazuki_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Kazuki_COLLECTION) },
    { L"Kusaregedo", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Kusaregedo_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Kusaregedo_COLLECTION) },
    { L"Kyoshiro", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Kyoshiro_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Kyoshiro_COLLECTION) },
    { L"Mina", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Mina_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Mina_COLLECTION) },
    { L"Mizuki", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Mizuki_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Mizuki_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Nakoruru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Nakoruru_COLLECTION) },
    { L"Rasetsumaru", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Rasetsumaru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Rasetsumaru_COLLECTION) },
    { L"Rera", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Rera_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Rera_COLLECTION) },
    { L"Rimururu", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Rimururu_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Rimururu_COLLECTION) },
    { L"Shizumaru", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Shizumaru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Shizumaru_COLLECTION) },
    { L"Sogetsu", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Sogetsu_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Sogetsu_COLLECTION) },
    { L"Suija", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Suija_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Suija_COLLECTION) },
    { L"Tam Tam", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_TamTam_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_TamTam_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Ukyo_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Ukyo_COLLECTION) },
    { L"Yoshitora", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Yoshitora_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Yoshitora_COLLECTION) },
    { L"Yunfei", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Yunfei_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Yunfei_COLLECTION) },
    { L"Zankuro", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Zankuro_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Zankuro_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_BONUS_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_BONUS_COLLECTION) },
};

constexpr auto SAMSHO5SP_A_NUMUNIT = ARRAYSIZE(SAMSHO5SP_A_UNITS);

#define SAMSHO5SP_A_EXTRALOC SAMSHO5SP_A_NUMUNIT



// We extend this array with data groveled from the extras file, if any.
const stExtraDef SAMSHO5SP_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

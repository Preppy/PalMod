#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SAMSHO5SP_A_Amakusa_PALETTE_A. 
// * Update every array using SAMSHO5SP_A_NUMUNIT below
// That should be it.  Good luck.

constexpr auto SAMSHO5SP_A_NUMUNIT = indexSamSho5_A_Last;

#define SAMSHO5SP_A_EXTRALOC SAMSHO5SP_A_NUMUNIT

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_A[] =
{
    { _T("Amakusa A (Normal)"), 0x00e0000, 0x00e0040, indexSamSho5Sprites_Amakusa },
    { _T("Amakusa A (Rage)"), 0x00e0040, 0x00e0080, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_B[] =
{
    { _T("Amakusa B (Normal)"), 0x00e0400, 0x00e0440, indexSamSho5Sprites_Amakusa },
    { _T("Amakusa B (Rage)"), 0x00e0440, 0x00e0480, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_C[] =
{
    { _T("Amakusa C (Normal)"), 0x00e0800, 0x00e0840, indexSamSho5Sprites_Amakusa },
    { _T("Amakusa C (Rage)"), 0x00e0840, 0x00e0880, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_D[] =
{
    { _T("Amakusa D (Normal)"), 0x00e0c00, 0x00e0c40, indexSamSho5Sprites_Amakusa },
    { _T("Amakusa D (Rage)"), 0x00e0c40, 0x00e0c80, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_A[] =
{
    { _T("Basara A (Normal/Rage)"), 0x00dd000, 0x00dd040, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_B[] =
{
    { _T("Basara B (Normal/Rage)"), 0x00dd400, 0x00dd440, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_C[] =
{
    { _T("Basara C (Normal/Rage)"), 0x00dd800, 0x00dd840, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_D[] =
{
    { _T("Basara D (Normal/Rage)"), 0x00ddc00, 0x00ddc40, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_A[] =
{
    { _T("Charlotte A (Normal)"), 0x00e3000, 0x00e3040, indexSamSho5Sprites_Charlotte },
    { _T("Charlotte A (Rage)"), 0x00e3040, 0x00e3080, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_B[] =
{
    { _T("Charlotte B (Normal)"), 0x00e3400, 0x00e3440, indexSamSho5Sprites_Charlotte },
    { _T("Charlotte B (Rage)"), 0x00e3440, 0x00e3480, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_C[] =
{
    { _T("Charlotte C (Normal)"), 0x00e3800, 0x00e3840, indexSamSho5Sprites_Charlotte },
    { _T("Charlotte C (Rage)"), 0x00e3840, 0x00e3880, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_D[] =
{
    { _T("Charlotte D (Normal)"), 0x00e3c00, 0x00e3c40, indexSamSho5Sprites_Charlotte },
    { _T("Charlotte D (Rage)"), 0x00e3c40, 0x00e3c80, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_A[] =
{
    { _T("Enja A (Normal)"), 0x00e9000, 0x00e9040, indexSamSho5Sprites_Enja },
    { _T("Enja A (Rage)"), 0x00e9040, 0x00e9080, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_B[] =
{
    { _T("Enja B (Normal)"), 0x00e9400, 0x00e9440, indexSamSho5Sprites_Enja },
    { _T("Enja B (Rage)"), 0x00e9440, 0x00e9480, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_C[] =
{
    { _T("Enja C (Normal)"), 0x00e9800, 0x00e9840, indexSamSho5Sprites_Enja },
    { _T("Enja C (Rage)"), 0x00e9840, 0x00e9880, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_D[] =
{
    { _T("Enja D (Normal)"), 0x00e9c00, 0x00e9c40, indexSamSho5Sprites_Enja },
    { _T("Enja D (Rage)"), 0x00e9c40, 0x00e9c80, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_A[] =
{
    { _T("Gaira A (Normal)"), 0x00df000, 0x00df040, indexSamSho5Sprites_Gaira },
    { _T("Gaira A (Rage)"), 0x00df040, 0x00df080, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_B[] =
{
    { _T("Gaira B (Normal)"), 0x00df400, 0x00df440, indexSamSho5Sprites_Gaira },
    { _T("Gaira B (Rage)"), 0x00df440, 0x00df480, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_C[] =
{
    { _T("Gaira C (Normal)"), 0x00df800, 0x00df840, indexSamSho5Sprites_Gaira },
    { _T("Gaira C (Rage)"), 0x00df840, 0x00df880, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_D[] =
{
    { _T("Gaira D (Normal)"), 0x00dfc00, 0x00dfc40, indexSamSho5Sprites_Gaira },
    { _T("Gaira D (Rage)"), 0x00dfc40, 0x00dfc80, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_A[] =
{
    { _T("Galford A (Normal)"), 0x00d9000, 0x00d9040, indexSamSho5Sprites_Galford },
    { _T("Galford A (Rage)"), 0x00d9040, 0x00d9080, indexSamSho5Sprites_Galford },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_B[] =
{
    { _T("Galford B (Normal)"), 0x00d9400, 0x00d9440, indexSamSho5Sprites_Galford },
    { _T("Galford B (Rage)"), 0x00d9440, 0x00d9480, indexSamSho5Sprites_Galford },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_C[] =
{
    { _T("Galford C (Normal)"), 0x00d9800, 0x00d9840, indexSamSho5Sprites_Galford },
    { _T("Galford C (Rage)"), 0x00d9840, 0x00d9880, indexSamSho5Sprites_Galford },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_D[] =
{
    { _T("Galford D (Normal)"), 0x00d9c00, 0x00d9c40, indexSamSho5Sprites_Galford },
    { _T("Galford D (Rage)"), 0x00d9c40, 0x00d9c80, indexSamSho5Sprites_Galford },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_A[] =
{
    { _T("Gaoh A (Normal)"), 0x00ef000, 0x00ef040, indexSamSho5Sprites_Gaoh },
    { _T("Gaoh A (Rage)"), 0x00ef040, 0x00ef080, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_B[] =
{
    { _T("Gaoh B (Normal)"), 0x00ef400, 0x00ef440, indexSamSho5Sprites_Gaoh },
    { _T("Gaoh B (Rage)"), 0x00ef440, 0x00ef480, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_C[] =
{
    { _T("Gaoh C (Normal)"), 0x00ef800, 0x00ef840, indexSamSho5Sprites_Gaoh },
    { _T("Gaoh C (Rage)"), 0x00ef840, 0x00ef880, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_D[] =
{
    { _T("Gaoh D (Normal)"), 0x00efc00, 0x00efc40, indexSamSho5Sprites_Gaoh },
    { _T("Gaoh D (Rage)"), 0x00efc40, 0x00efc80, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_A[] =
{
    { _T("Genjuro A (Normal)"), 0x00dc000, 0x00dc040, indexSamSho5Sprites_Genjuro },
    { _T("Genjuro A (Rage)"), 0x00dc040, 0x00dc080, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_B[] =
{
    { _T("Genjuro B (Normal)"), 0x00dc400, 0x00dc440, indexSamSho5Sprites_Genjuro },
    { _T("Genjuro B (Rage)"), 0x00dc440, 0x00dc480, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_C[] =
{
    { _T("Genjuro C (Normal)"), 0x00dc800, 0x00dc840, indexSamSho5Sprites_Genjuro },
    { _T("Genjuro C (Rage)"), 0x00dc840, 0x00dc880, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_D[] =
{
    { _T("Genjuro D (Normal)"), 0x00dcc00, 0x00dcc40, indexSamSho5Sprites_Genjuro },
    { _T("Genjuro D (Rage)"), 0x00dcc40, 0x00dcc80, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_A[] =
{
    { _T("Hanzo A (Normal)"), 0x00d8000, 0x00d8040, indexSamSho5Sprites_Hanzo },
    { _T("Hanzo A (Rage)"), 0x00d8040, 0x00d8080, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_B[] =
{
    { _T("Hanzo B (Normal)"), 0x00d8400, 0x00d8440, indexSamSho5Sprites_Hanzo },
    { _T("Hanzo B (Rage)"), 0x00d8440, 0x00d8480, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_C[] =
{
    { _T("Hanzo C (Normal)"), 0x00d8800, 0x00d8840, indexSamSho5Sprites_Hanzo },
    { _T("Hanzo C (Rage)"), 0x00d8840, 0x00d8880, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_D[] =
{
    { _T("Hanzo D (Normal)"), 0x00d8c00, 0x00d8c40, indexSamSho5Sprites_Hanzo },
    { _T("Hanzo D (Rage)"), 0x00d8c40, 0x00d8c80, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_A[] =
{
    { _T("Haohmaru A (Normal)"), 0x00d5000, 0x00d5040, indexSamSho5Sprites_Haohmaru },
    { _T("Haohmaru A (Rage)"), 0x00d5040, 0x00d5080, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_B[] =
{
    { _T("Haohmaru B (Normal)"), 0x00d5400, 0x00d5440, indexSamSho5Sprites_Haohmaru },
    { _T("Haohmaru B (Rage)"), 0x00d5440, 0x00d5480, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_C[] =
{
    { _T("Haohmaru C (Normal)"), 0x00d5800, 0x00d5840, indexSamSho5Sprites_Haohmaru },
    { _T("Haohmaru C (Rage)"), 0x00d5840, 0x00d5880, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_D[] =
{
    { _T("Haohmaru D (Normal)"), 0x00d5c00, 0x00d5c40, indexSamSho5Sprites_Haohmaru },
    { _T("Haohmaru D (Rage)"), 0x00d5c40, 0x00d5c80, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_A[] =
{
    { _T("Jubei A (Normal)"), 0x00e1000, 0x00e1040, indexSamSho5Sprites_Jubei },
    { _T("Jubei A (Rage)"), 0x00e1040, 0x00e1080, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_B[] =
{
    { _T("Jubei B (Normal)"), 0x00e1400, 0x00e1440, indexSamSho5Sprites_Jubei },
    { _T("Jubei B (Rage)"), 0x00e1440, 0x00e1480, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_C[] =
{
    { _T("Jubei C (Normal)"), 0x00e1800, 0x00e1840, indexSamSho5Sprites_Jubei },
    { _T("Jubei C (Rage)"), 0x00e1840, 0x00e1880, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_D[] =
{
    { _T("Jubei D (Normal)"), 0x00e1c00, 0x00e1c40, indexSamSho5Sprites_Jubei },
    { _T("Jubei D (Rage)"), 0x00e1c40, 0x00e1c80, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_A[] =
{
    { _T("Kazuki A (Normal)"), 0x00e5000, 0x00e5040, indexSamSho5Sprites_Kazuki },
    { _T("Kazuki A (Rage)"), 0x00e5040, 0x00e5080, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_B[] =
{
    { _T("Kazuki B (Normal)"), 0x00e5400, 0x00e5440, indexSamSho5Sprites_Kazuki },
    { _T("Kazuki B (Rage)"), 0x00e5440, 0x00e5480, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_C[] =
{
    { _T("Kazuki C (Normal)"), 0x00e5800, 0x00e5840, indexSamSho5Sprites_Kazuki },
    { _T("Kazuki C (Rage)"), 0x00e5840, 0x00e5880, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_D[] =
{
    { _T("Kazuki D (Normal)"), 0x00e5c00, 0x00e5c40, indexSamSho5Sprites_Kazuki },
    { _T("Kazuki D (Rage)"), 0x00e5c40, 0x00e5c80, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_A[] =
{
    { _T("Kusaregedo A (Normal)"), 0x00ee000, 0x00ee040, indexSamSho5Sprites_Kusaregedo },
    { _T("Kusaregedo A (Rage)"), 0x00ee040, 0x00ee080, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_B[] =
{
    { _T("Kusaregedo B (Normal)"), 0x00ee400, 0x00ee440, indexSamSho5Sprites_Kusaregedo },
    { _T("Kusaregedo B (Rage)"), 0x00ee440, 0x00ee480, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_C[] =
{
    { _T("Kusaregedo C (Normal)"), 0x00ee800, 0x00ee840, indexSamSho5Sprites_Kusaregedo },
    { _T("Kusaregedo C (Rage)"), 0x00ee840, 0x00ee880, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_D[] =
{
    { _T("Kusaregedo D (Normal)"), 0x00eec00, 0x00eec40, indexSamSho5Sprites_Kusaregedo },
    { _T("Kusaregedo D (Rage)"), 0x00eec40, 0x00eec80, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_A[] =
{
    { _T("Kyoshiro A (Normal)"), 0x00da000, 0x00da040, indexSamSho5Sprites_Kyoshiro },
    { _T("Kyoshiro A (Rage)"), 0x00da040, 0x00da080, indexSamSho5Sprites_Kyoshiro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_B[] =
{
    { _T("Kyoshiro B (Normal)"), 0x00da400, 0x00da440, indexSamSho5Sprites_Kyoshiro },
    { _T("Kyoshiro B (Rage)"), 0x00da440, 0x00da480, indexSamSho5Sprites_Kyoshiro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_C[] =
{
    { _T("Kyoshiro C (Normal)"), 0x00da800, 0x00da840, indexSamSho5Sprites_Kyoshiro },
    { _T("Kyoshiro C (Rage)"), 0x00da840, 0x00da880, indexSamSho5Sprites_Kyoshiro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_D[] =
{
    { _T("Kyoshiro D (Normal)"), 0x00dac00, 0x00dac40, indexSamSho5Sprites_Kyoshiro },
    { _T("Kyoshiro D (Rage)"), 0x00dac40, 0x00dac80, indexSamSho5Sprites_Kyoshiro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_A[] =
{
    { _T("Mina A (Normal)"), 0x00ed000, 0x00ed040, indexSamSho5Sprites_Mina },
    { _T("Mina A (Rage)"), 0x00ed040, 0x00ed080, indexSamSho5Sprites_Mina },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_B[] =
{
    { _T("Mina B (Normal)"), 0x00ed400, 0x00ed440, indexSamSho5Sprites_Mina },
    { _T("Mina B (Rage)"), 0x00ed440, 0x00ed480, indexSamSho5Sprites_Mina },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_C[] =
{
    { _T("Mina C (Normal)"), 0x00ed800, 0x00ed840, indexSamSho5Sprites_Mina },
    { _T("Mina C (Rage)"), 0x00ed840, 0x00ed880, indexSamSho5Sprites_Mina },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_D[] =
{
    { _T("Mina D (Normal)"), 0x00edc00, 0x00edc40, indexSamSho5Sprites_Mina },
    { _T("Mina D (Rage)"), 0x00edc40, 0x00edc80, indexSamSho5Sprites_Mina },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_A[] =
{
    { _T("Mizuki A (Normal)"), 0x00f0000, 0x00f0040, indexSamSho5Sprites_Mizuki },
    { _T("Mizuki A (Rage)"), 0x00f0040, 0x00f0080, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_B[] =
{
    { _T("Mizuki B (Normal)"), 0x00f0400, 0x00f0440, indexSamSho5Sprites_Mizuki },
    { _T("Mizuki B (Rage)"), 0x00f0440, 0x00f0480, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_C[] =
{
    { _T("Mizuki C (Normal)"), 0x00f0800, 0x00f0840, indexSamSho5Sprites_Mizuki },
    { _T("Mizuki C (Rage)"), 0x00f0840, 0x00f0880, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_D[] =
{
    { _T("Mizuki D (Normal)"), 0x00f0c00, 0x00f0c40, indexSamSho5Sprites_Mizuki },
    { _T("Mizuki D (Rage)"), 0x00f0c40, 0x00f0c80, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_A[] =
{
    { _T("Nakoruru A (Normal)"), 0x00d6000, 0x00d6040, indexSamSho5Sprites_Nakoruru },
    { _T("Nakoruru A (Rage)"), 0x00d6040, 0x00d6080, indexSamSho5Sprites_Nakoruru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_B[] =
{
    { _T("Nakoruru B (Normal)"), 0x00d6400, 0x00d6440, indexSamSho5Sprites_Nakoruru },
    { _T("Nakoruru B (Rage)"), 0x00d6440, 0x00d6480, indexSamSho5Sprites_Nakoruru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_C[] =
{
    { _T("Nakoruru C (Normal)"), 0x00d6800, 0x00d6840, indexSamSho5Sprites_Nakoruru },
    { _T("Nakoruru C (Rage)"), 0x00d6840, 0x00d6880, indexSamSho5Sprites_Nakoruru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_D[] =
{
    { _T("Nakoruru D (Normal)"), 0x00d6c00, 0x00d6c40, indexSamSho5Sprites_Nakoruru },
    { _T("Nakoruru D (Rage)"), 0x00d6c40, 0x00d6c80, indexSamSho5Sprites_Nakoruru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_A[] =
{
    { _T("Rasetsumaru A (Normal)"), 0x00e7000, 0x00e7040, indexSamSho5Sprites_Rasetsumaru },
    { _T("Rasetsumaru A (Rage)"), 0x00e7040, 0x00e7080, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_B[] =
{
    { _T("Rasetsumaru B (Normal)"), 0x00e7400, 0x00e7440, indexSamSho5Sprites_Rasetsumaru },
    { _T("Rasetsumaru B (Rage)"), 0x00e7440, 0x00e7480, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_C[] =
{
    { _T("Rasetsumaru C (Normal)"), 0x00e7800, 0x00e7840, indexSamSho5Sprites_Rasetsumaru },
    { _T("Rasetsumaru C (Rage)"), 0x00e7840, 0x00e7880, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_D[] =
{
    { _T("Rasetsumaru D (Normal)"), 0x00e7c00, 0x00e7c40, indexSamSho5Sprites_Rasetsumaru },
    { _T("Rasetsumaru D (Rage)"), 0x00e7c40, 0x00e7c80, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_A[] =
{
    { _T("Rera A (Normal)"), 0x00e8000, 0x00e8040, indexSamSho5Sprites_Rera },
    { _T("Rera A (Rage)"), 0x00e8040, 0x00e8080, indexSamSho5Sprites_Rera },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_B[] =
{
    { _T("Rera B (Normal)"), 0x00e8400, 0x00e8440, indexSamSho5Sprites_Rera },
    { _T("Rera B (Rage)"), 0x00e8440, 0x00e8480, indexSamSho5Sprites_Rera },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_C[] =
{
    { _T("Rera C (Normal)"), 0x00e8800, 0x00e8840, indexSamSho5Sprites_Rera },
    { _T("Rera C (Rage)"), 0x00e8840, 0x00e8880, indexSamSho5Sprites_Rera },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_D[] =
{
    { _T("Rera D (Normal)"), 0x00e8c00, 0x00e8c40, indexSamSho5Sprites_Rera },
    { _T("Rera D (Rage)"), 0x00e8c40, 0x00e8c80, indexSamSho5Sprites_Rera },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_A[] =
{
    { _T("Rimururu A (Normal)"), 0x00d7000, 0x00d7040, indexSamSho5Sprites_Rimururu },
    { _T("Rimururu A (Rage)"), 0x00d7040, 0x00d7080, indexSamSho5Sprites_Rimururu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_B[] =
{
    { _T("Rimururu B (Normal)"), 0x00d7400, 0x00d7440, indexSamSho5Sprites_Rimururu },
    { _T("Rimururu B (Rage)"), 0x00d7440, 0x00d7480, indexSamSho5Sprites_Rimururu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_C[] =
{
    { _T("Rimururu C (Normal)"), 0x00d7800, 0x00d7840, indexSamSho5Sprites_Rimururu },
    { _T("Rimururu C (Rage)"), 0x00d7840, 0x00d7880, indexSamSho5Sprites_Rimururu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_D[] =
{
    { _T("Rimururu D (Normal)"), 0x00d7c00, 0x00d7c40, indexSamSho5Sprites_Rimururu },
    { _T("Rimururu D (Rage)"), 0x00d7c40, 0x00d7c80, indexSamSho5Sprites_Rimururu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_A[] =
{
    { _T("Shizumaru A (Normal)"), 0x00de000, 0x00de040, indexSamSho5Sprites_Shizumaru },
    { _T("Shizumaru A (Rage)"), 0x00de040, 0x00de080, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_B[] =
{
    { _T("Shizumaru B (Normal)"), 0x00de400, 0x00de440, indexSamSho5Sprites_Shizumaru },
    { _T("Shizumaru B (Rage)"), 0x00de440, 0x00de480, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_C[] =
{
    { _T("Shizumaru C (Normal)"), 0x00de800, 0x00de840, indexSamSho5Sprites_Shizumaru },
    { _T("Shizumaru C (Rage)"), 0x00de840, 0x00de880, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_D[] =
{
    { _T("Shizumaru D (Normal)"), 0x00dec00, 0x00dec40, indexSamSho5Sprites_Shizumaru },
    { _T("Shizumaru D (Rage)"), 0x00dec40, 0x00dec80, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_A[] =
{
    { _T("Sogetsu A (Normal)"), 0x00e6000, 0x00e6040, indexSamSho5Sprites_Sogetsu },
    { _T("Sogetsu A (Rage)"), 0x00e6040, 0x00e6080, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_B[] =
{
    { _T("Sogetsu B (Normal)"), 0x00e6400, 0x00e6440, indexSamSho5Sprites_Sogetsu },
    { _T("Sogetsu B (Rage)"), 0x00e6440, 0x00e6480, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_C[] =
{
    { _T("Sogetsu C (Normal)"), 0x00e6800, 0x00e6840, indexSamSho5Sprites_Sogetsu },
    { _T("Sogetsu C (Rage)"), 0x00e6840, 0x00e6880, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_D[] =
{
    { _T("Sogetsu D (Normal)"), 0x00e6c00, 0x00e6c40, indexSamSho5Sprites_Sogetsu },
    { _T("Sogetsu D (Rage)"), 0x00e6c40, 0x00e6c80, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_A[] =
{
    { _T("Suija A (Normal)"), 0x00ea000, 0x00ea040, indexSamSho5Sprites_Suija },
    { _T("Suija A (Rage)"), 0x00ea040, 0x00ea080, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_B[] =
{
    { _T("Suija B (Normal)"), 0x00ea400, 0x00ea440, indexSamSho5Sprites_Suija },
    { _T("Suija B (Rage)"), 0x00ea440, 0x00ea480, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_C[] =
{
    { _T("Suija C (Normal)"), 0x00ea800, 0x00ea840, indexSamSho5Sprites_Suija },
    { _T("Suija C (Rage)"), 0x00ea840, 0x00ea880, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_D[] =
{
    { _T("Suija D (Normal)"), 0x00eac00, 0x00eac40, indexSamSho5Sprites_Suija },
    { _T("Suija D (Rage)"), 0x00eac40, 0x00eac80, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_A[] =
{
    { _T("Tam Tam A (Normal)"), 0x00e4000, 0x00e4040, indexSamSho5Sprites_TamTam },
    { _T("Tam Tam A (Rage)"), 0x00e4040, 0x00e4080, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_B[] =
{
    { _T("Tam Tam B (Normal)"), 0x00e4400, 0x00e4440, indexSamSho5Sprites_TamTam },
    { _T("Tam Tam B (Rage)"), 0x00e4440, 0x00e4480, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_C[] =
{
    { _T("Tam Tam C (Normal)"), 0x00e4800, 0x00e4840, indexSamSho5Sprites_TamTam },
    { _T("Tam Tam C (Rage)"), 0x00e4840, 0x00e4880, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_D[] =
{
    { _T("Tam Tam D (Normal)"), 0x00e4c00, 0x00e4c40, indexSamSho5Sprites_TamTam },
    { _T("Tam Tam D (Rage)"), 0x00e4c40, 0x00e4c80, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_A[] =
{
    { _T("Ukyo A (Normal)"), 0x00db000, 0x00db040, indexSamSho5Sprites_Ukyo },
    { _T("Ukyo A (Rage)"), 0x00db040, 0x00db080, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_B[] =
{
    { _T("Ukyo B (Normal)"), 0x00db400, 0x00db440, indexSamSho5Sprites_Ukyo },
    { _T("Ukyo B (Rage)"), 0x00db440, 0x00db480, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_C[] =
{
    { _T("Ukyo C (Normal)"), 0x00db800, 0x00db840, indexSamSho5Sprites_Ukyo },
    { _T("Ukyo C (Rage)"), 0x00db840, 0x00db880, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_D[] =
{
    { _T("Ukyo D (Normal)"), 0x00dbc00, 0x00dbc40, indexSamSho5Sprites_Ukyo },
    { _T("Ukyo D (Rage)"), 0x00dbc40, 0x00dbc80, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_A[] =
{
    { _T("Yoshitora A (Normal)"), 0x00eb000, 0x00eb040, indexSamSho5Sprites_Yoshitora },
    { _T("Yoshitora A (Rage)"), 0x00eb040, 0x00eb080, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_B[] =
{
    { _T("Yoshitora B (Normal)"), 0x00eb400, 0x00eb440, indexSamSho5Sprites_Yoshitora },
    { _T("Yoshitora B (Rage)"), 0x00eb440, 0x00eb480, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_C[] =
{
    { _T("Yoshitora C (Normal)"), 0x00eb800, 0x00eb840, indexSamSho5Sprites_Yoshitora },
    { _T("Yoshitora C (Rage)"), 0x00eb840, 0x00eb880, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_D[] =
{
    { _T("Yoshitora D (Normal)"), 0x00ebc00, 0x00ebc40, indexSamSho5Sprites_Yoshitora },
    { _T("Yoshitora D (Rage)"), 0x00ebc40, 0x00ebc80, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_A[] =
{
    { _T("Yunfei A (Normal)"), 0x00ec000, 0x00ec040, indexSamSho5Sprites_Yunfei },
    { _T("Yunfei A (Rage)"), 0x00ec040, 0x00ec080, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_B[] =
{
    { _T("Yunfei B (Normal)"), 0x00ec400, 0x00ec440, indexSamSho5Sprites_Yunfei },
    { _T("Yunfei B (Rage)"), 0x00ec440, 0x00ec480, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_C[] =
{
    { _T("Yunfei C (Normal)"), 0x00ec800, 0x00ec840, indexSamSho5Sprites_Yunfei },
    { _T("Yunfei C (Rage)"), 0x00ec840, 0x00ec880, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_D[] =
{
    { _T("Yunfei D (Normal)"), 0x00ecc00, 0x00ecc40, indexSamSho5Sprites_Yunfei },
    { _T("Yunfei D (Rage)"), 0x00ecc40, 0x00ecc80, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_A[] =
{
    { _T("Zankuro A (Normal)"), 0x00e2000, 0x00e2040, indexSamSho5Sprites_Zankuro },
    { _T("Zankuro A (Rage)"), 0x00e2040, 0x00e2080, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_B[] =
{
    { _T("Zankuro B (Normal)"), 0x00e2400, 0x00e2440, indexSamSho5Sprites_Zankuro },
    { _T("Zankuro B (Rage)"), 0x00e2440, 0x00e2480, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_C[] =
{
    { _T("Zankuro C (Normal)"), 0x00e2800, 0x00e2840, indexSamSho5Sprites_Zankuro },
    { _T("Zankuro C (Rage)"), 0x00e2840, 0x00e2880, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_D[] =
{
    { _T("Zankuro D (Normal)"), 0x00e2c00, 0x00e2c40, indexSamSho5Sprites_Zankuro },
    { _T("Zankuro D (Rage)"), 0x00e2c40, 0x00e2c80, indexSamSho5Sprites_Zankuro },
};

const sDescTreeNode SAMSHO5SP_A_Amakusa_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Amakusa_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Amakusa_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Basara_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Basara_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Basara_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Charlotte_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Charlotte_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Charlotte_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Enja_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Enja_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Enja_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Gaira_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaira_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Gaira_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Galford_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Galford_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Galford_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Gaoh_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Gaoh_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Gaoh_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Genjuro_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Genjuro_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Genjuro_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Hanzo_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Hanzo_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Hanzo_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Haohmaru_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Haohmaru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Haohmaru_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Jubei_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Jubei_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Jubei_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Kazuki_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kazuki_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Kazuki_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Kusaregedo_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kusaregedo_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Kusaregedo_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Kyoshiro_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Kyoshiro_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Kyoshiro_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Mina_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mina_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Mina_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Mizuki_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Mizuki_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Mizuki_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Nakoruru_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Nakoruru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Nakoruru_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Rasetsumaru_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rasetsumaru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Rasetsumaru_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Rera_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rera_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Rera_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Rimururu_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Rimururu_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Rimururu_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Shizumaru_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Shizumaru_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Shizumaru_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Sogetsu_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Sogetsu_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Sogetsu_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Suija_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Suija_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Suija_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_TamTam_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_TamTam_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_TamTam_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Ukyo_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Ukyo_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Ukyo_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Yoshitora_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yoshitora_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Yoshitora_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Yunfei_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Yunfei_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Yunfei_PALETTES_D) },
};

const sDescTreeNode SAMSHO5SP_A_Zankuro_COLLECTION[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_A, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_B, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_C, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_C) },
    { _T("D"), DESC_NODETYPE_TREE, (void*)SAMSHOW5SP_A_Zankuro_PALETTES_D, ARRAYSIZE(SAMSHOW5SP_A_Zankuro_PALETTES_D) },
};

const UINT8 SAMSHO5SP_A_UNITSORT[SAMSHO5SP_A_NUMUNIT + 1] // Plus 1 for extras
{
    indexSamSho5_A_Amakusa,
    indexSamSho5_A_Basara,
    indexSamSho5_A_Charlotte,
    indexSamSho5_A_Enja,
    indexSamSho5_A_Gaira,
    indexSamSho5_A_Galford,
    indexSamSho5_A_Gaoh,
    indexSamSho5_A_Genjuro,
    indexSamSho5_A_Hanzo,
    indexSamSho5_A_Haohmaru,
    indexSamSho5_A_Jubei,
    indexSamSho5_A_Kazuki,
    indexSamSho5_A_Kusaregedo,
    indexSamSho5_A_Kyoshiro,
    indexSamSho5_A_Mina,
    indexSamSho5_A_Mizuki,
    indexSamSho5_A_Nakoruru,
    indexSamSho5_A_Rasetsumaru,
    indexSamSho5_A_Rera,
    indexSamSho5_A_Rimururu,
    indexSamSho5_A_Shizumaru,
    indexSamSho5_A_Sogetsu,
    indexSamSho5_A_Suija,
    indexSamSho5_A_TamTam,
    indexSamSho5_A_Ukyo,
    indexSamSho5_A_Yoshitora,
    indexSamSho5_A_Yunfei,
    indexSamSho5_A_Zankuro,

    SAMSHO5SP_A_EXTRALOC
};

const sDescTreeNode SAMSHO5SP_A_UNITS[SAMSHO5SP_A_NUMUNIT] =
{
    { _T("Amakusa"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Amakusa_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Amakusa_COLLECTION) },
    { _T("Basara"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Basara_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Basara_COLLECTION) },
    { _T("Charlotte"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Charlotte_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Charlotte_COLLECTION) },
    { _T("Enja"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Enja_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Enja_COLLECTION) },
    { _T("Gaira"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Gaira_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Gaira_COLLECTION) },
    { _T("Galford"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Galford_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Galford_COLLECTION) },
    { _T("Gaoh"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Gaoh_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Gaoh_COLLECTION) },
    { _T("Genjuro"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Genjuro_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Genjuro_COLLECTION) },
    { _T("Hanzo"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Hanzo_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Hanzo_COLLECTION) },
    { _T("Haohmaru"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Haohmaru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Haohmaru_COLLECTION) },
    { _T("Jubei"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Jubei_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Jubei_COLLECTION) },
    { _T("Kazuki"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Kazuki_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Kazuki_COLLECTION) },
    { _T("Kusaregedo"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Kusaregedo_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Kusaregedo_COLLECTION) },
    { _T("Kyoshiro"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Kyoshiro_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Kyoshiro_COLLECTION) },
    { _T("Mina"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Mina_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Mina_COLLECTION) },
    { _T("Mizuki"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Mizuki_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Mizuki_COLLECTION) },
    { _T("Nakoruru"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Nakoruru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Nakoruru_COLLECTION) },
    { _T("Rasetsumaru"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Rasetsumaru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Rasetsumaru_COLLECTION) },
    { _T("Rera"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Rera_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Rera_COLLECTION) },
    { _T("Rimururu"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Rimururu_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Rimururu_COLLECTION) },
    { _T("Shizumaru"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Shizumaru_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Shizumaru_COLLECTION) },
    { _T("Sogetsu"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Sogetsu_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Sogetsu_COLLECTION) },
    { _T("Suija"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Suija_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Suija_COLLECTION) },
    { _T("TamTam"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_TamTam_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_TamTam_COLLECTION) },
    { _T("Ukyo"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Ukyo_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Ukyo_COLLECTION) },
    { _T("Yoshitora"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Yoshitora_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Yoshitora_COLLECTION) },
    { _T("Yunfei"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Yunfei_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Yunfei_COLLECTION) },
    { _T("Zankura"), DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Zankuro_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Zankuro_COLLECTION) },
};

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SAMSHO5SP_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

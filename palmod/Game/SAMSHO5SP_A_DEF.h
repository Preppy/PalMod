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
    { L"Amakusa A (Normal)", 0x00e0000, 0x00e0040, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (Rage)", 0x00e0040, 0x00e0080, indexSamSho5Sprites_Amakusa },
    { L"Amakusa A (SON)", 0x00e0240, 0x00e0280, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_B[] =
{
    { L"Amakusa B (Normal)", 0x00e0400, 0x00e0440, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Rage)", 0x00e0440, 0x00e0480, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (SON)", 0x00e0640, 0x00e0680, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_C[] =
{
    { L"Amakusa C (Normal)", 0x00e0800, 0x00e0840, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Rage)", 0x00e0840, 0x00e0880, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (SON)", 0x00e0a40, 0x00e0a80, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_D[] =
{
    { L"Amakusa D (Normal)", 0x00e0c00, 0x00e0c40, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Rage)", 0x00e0c40, 0x00e0c80, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (SON)", 0x00e0e40, 0x00e0e80, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_A[] =
{
    { L"Basara A (Normal/Rage)", 0x00dd000, 0x00dd040, indexSamSho5Sprites_Basara },
    { L"Basara A (SON)", 0x00dd240, 0x00dd280, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_B[] =
{
    { L"Basara B (Normal/Rage)", 0x00dd400, 0x00dd440, indexSamSho5Sprites_Basara },
    { L"Basara B (SON)", 0x00dd640, 0x00dd680, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_C[] =
{
    { L"Basara C (Normal/Rage)", 0x00dd800, 0x00dd840, indexSamSho5Sprites_Basara },
    { L"Basara C (SON)", 0x00dda40, 0x00dda80, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_D[] =
{
    { L"Basara D (Normal/Rage)", 0x00ddc00, 0x00ddc40, indexSamSho5Sprites_Basara },
    { L"Basara D (SON)", 0x00dde40, 0x00dde80, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_A[] =
{
    { L"Charlotte A (Normal)", 0x00e3000, 0x00e3040, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A (Rage)", 0x00e3040, 0x00e3080, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A (SON)", 0x00e3240, 0x00e3280, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_B[] =
{
    { L"Charlotte B (Normal)", 0x00e3400, 0x00e3440, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Rage)", 0x00e3440, 0x00e3480, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (SON)", 0x00e3640, 0x00e3680, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_C[] =
{
    { L"Charlotte C (Normal)", 0x00e3800, 0x00e3840, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Rage)", 0x00e3840, 0x00e3880, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (SON)", 0x00e3a40, 0x00e3a80, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_D[] =
{
    { L"Charlotte D (Normal)", 0x00e3c00, 0x00e3c40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Rage)", 0x00e3c40, 0x00e3c80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (SON)", 0x00e3e40, 0x00e3e80, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_A[] =
{
    { L"Enja A (Normal)", 0x00e9000, 0x00e9040, indexSamSho5Sprites_Enja },
    { L"Enja A (Rage)", 0x00e9040, 0x00e9080, indexSamSho5Sprites_Enja },
    { L"Enja A (SON)", 0x00e9240, 0x00e9280, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_B[] =
{
    { L"Enja B (Normal)", 0x00e9400, 0x00e9440, indexSamSho5Sprites_Enja },
    { L"Enja B (Rage)", 0x00e9440, 0x00e9480, indexSamSho5Sprites_Enja },
    { L"Enja B (SON)", 0x00e9640, 0x00e9680, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_C[] =
{
    { L"Enja C (Normal)", 0x00e9800, 0x00e9840, indexSamSho5Sprites_Enja },
    { L"Enja C (Rage)", 0x00e9840, 0x00e9880, indexSamSho5Sprites_Enja },
    { L"Enja C (SON)", 0x00e9a40, 0x00e9a80, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_D[] =
{
    { L"Enja D (Normal)", 0x00e9c00, 0x00e9c40, indexSamSho5Sprites_Enja },
    { L"Enja D (Rage)", 0x00e9c40, 0x00e9c80, indexSamSho5Sprites_Enja },
    { L"Enja D (SON)", 0x00e9e40, 0x00e9e80, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_A[] =
{
    { L"Gaira A (Normal)", 0x00df000, 0x00df040, indexSamSho5Sprites_Gaira },
    { L"Gaira A (Rage)", 0x00df040, 0x00df080, indexSamSho5Sprites_Gaira },
    { L"Gaira A (SON)", 0x00df240, 0x00df280, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_B[] =
{
    { L"Gaira B (Normal)", 0x00df400, 0x00df440, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Rage)", 0x00df440, 0x00df480, indexSamSho5Sprites_Gaira },
    { L"Gaira B (SON)", 0x00df640, 0x00df680, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_C[] =
{
    { L"Gaira C (Normal)", 0x00df800, 0x00df840, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Rage)", 0x00df840, 0x00df880, indexSamSho5Sprites_Gaira },
    { L"Gaira C (SON)", 0x00dfa40, 0x00dfa80, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_D[] =
{
    { L"Gaira D (Normal)", 0x00dfc00, 0x00dfc40, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Rage)", 0x00dfc40, 0x00dfc80, indexSamSho5Sprites_Gaira },
    { L"Gaira D (SON)", 0x00dfe40, 0x00dfe80, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_A[] =
{
    { L"Galford A (Normal)", 0x00d9000, 0x00d9040, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford A (Rage)", 0x00d9040, 0x00d9080, indexSamSho5Sprites_Galford, 0, &pairNextNext },
    { L"Galford A (SON)", 0x00d9240, 0x00d9280, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy A", 0x00d9280, 0x00d92A0, indexSamSho5Sprites_Galford, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_B[] =
{
    { L"Galford B (Normal)", 0x00d9400, 0x00d9440, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford B (Rage)", 0x00d9440, 0x00d9480, indexSamSho5Sprites_Galford, 0, &pairNextNext },
    { L"Galford B (SON)", 0x00d9640, 0x00d9680, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy B", 0x00d9680, 0x00d96A0, indexSamSho5Sprites_Galford, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_C[] =
{
    { L"Galford C (Normal)", 0x00d9800, 0x00d9840, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford C (Rage)", 0x00d9840, 0x00d9880, indexSamSho5Sprites_Galford, 0, &pairNextNext },
    { L"Galford C (SON)", 0x00d9a40, 0x00d9a80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy C", 0x00d9A80, 0x00d9AA0, indexSamSho5Sprites_Galford, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_D[] =
{
    { L"Galford D (Normal)", 0x00d9c00, 0x00d9c40, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford D (Rage)", 0x00d9c40, 0x00d9c80, indexSamSho5Sprites_Galford, 0, &pairNextNext },
    { L"Galford D (SON)", 0x00d9e40, 0x00d9e80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy D", 0x00d9e80, 0x00d9eA0, indexSamSho5Sprites_Galford, 1 },
};
const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_A[] =
{
    { L"Gaoh A (Normal)", 0x00ef000, 0x00ef040, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (Rage)", 0x00ef040, 0x00ef080, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A (SON)", 0x00ef240, 0x00ef280, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_B[] =
{
    { L"Gaoh B (Normal)", 0x00ef400, 0x00ef440, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Rage)", 0x00ef440, 0x00ef480, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (SON)", 0x00ef640, 0x00ef680, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_C[] =
{
    { L"Gaoh C (Normal)", 0x00ef800, 0x00ef840, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Rage)", 0x00ef840, 0x00ef880, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (SON)", 0x00efa40, 0x00efa80, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_D[] =
{
    { L"Gaoh D (Normal)", 0x00efc00, 0x00efc40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Rage)", 0x00efc40, 0x00efc80, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (SON)", 0x00efe40, 0x00efe80, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_A[] =
{
    { L"Genjuro A (Normal)", 0x00dc000, 0x00dc040, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (Rage)", 0x00dc040, 0x00dc080, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A (SON)", 0x00dc240, 0x00dc280, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_B[] =
{
    { L"Genjuro B (Normal)", 0x00dc400, 0x00dc440, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Rage)", 0x00dc440, 0x00dc480, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (SON)", 0x00dc640, 0x00dc680, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_C[] =
{
    { L"Genjuro C (Normal)", 0x00dc800, 0x00dc840, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Rage)", 0x00dc840, 0x00dc880, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (SON)", 0x00dca40, 0x00dca80, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_D[] =
{
    { L"Genjuro D (Normal)", 0x00dcc00, 0x00dcc40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Rage)", 0x00dcc40, 0x00dcc80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (SON)", 0x00dce40, 0x00dce80, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_A[] =
{
    { L"Hanzo A (Normal)", 0x00d8000, 0x00d8040, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (Rage)", 0x00d8040, 0x00d8080, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A (SON)", 0x00d8240, 0x00d8280, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_B[] =
{
    { L"Hanzo B (Normal)", 0x00d8400, 0x00d8440, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Rage)", 0x00d8440, 0x00d8480, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (SON)", 0x00d8640, 0x00d8680, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_C[] =
{
    { L"Hanzo C (Normal)", 0x00d8800, 0x00d8840, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Rage)", 0x00d8840, 0x00d8880, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (SON)", 0x00d8a40, 0x00d8a80, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_D[] =
{
    { L"Hanzo D (Normal)", 0x00d8c00, 0x00d8c40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Rage)", 0x00d8c40, 0x00d8c80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (SON)", 0x00d8e40, 0x00d8e80, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_A[] =
{
    { L"Haohmaru A (Normal)", 0x00d5000, 0x00d5040, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (Rage)", 0x00d5040, 0x00d5080, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A (SON)", 0x00d5240, 0x00d5280, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_B[] =
{
    { L"Haohmaru B (Normal)", 0x00d5400, 0x00d5440, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Rage)", 0x00d5440, 0x00d5480, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (SON)", 0x00d5640, 0x00d5680, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_C[] =
{
    { L"Haohmaru C (Normal)", 0x00d5800, 0x00d5840, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Rage)", 0x00d5840, 0x00d5880, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (SON)", 0x00d5a40, 0x00d5a80, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_D[] =
{
    { L"Haohmaru D (Normal)", 0x00d5c00, 0x00d5c40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Rage)", 0x00d5c40, 0x00d5c80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (SON)", 0x00d5e40, 0x00d5e80, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_A[] =
{
    { L"Jubei A (Normal)", 0x00e1000, 0x00e1040, indexSamSho5Sprites_Jubei },
    { L"Jubei A (Rage)", 0x00e1040, 0x00e1080, indexSamSho5Sprites_Jubei },
    { L"Jubei A (SON)", 0x00e1240, 0x00e1280, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_B[] =
{
    { L"Jubei B (Normal)", 0x00e1400, 0x00e1440, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Rage)", 0x00e1440, 0x00e1480, indexSamSho5Sprites_Jubei },
    { L"Jubei B (SON)", 0x00e1640, 0x00e1680, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_C[] =
{
    { L"Jubei C (Normal)", 0x00e1800, 0x00e1840, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Rage)", 0x00e1840, 0x00e1880, indexSamSho5Sprites_Jubei },
    { L"Jubei C (SON)", 0x00e1a40, 0x00e1a80, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_D[] =
{
    { L"Jubei D (Normal)", 0x00e1c00, 0x00e1c40, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Rage)", 0x00e1c40, 0x00e1c80, indexSamSho5Sprites_Jubei },
    { L"Jubei D (SON)", 0x00e1e40, 0x00e1e80, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_A[] =
{
    { L"Kazuki A (Normal)", 0x00e5000, 0x00e5040, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (Rage)", 0x00e5040, 0x00e5080, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A (SON)", 0x00e5240, 0x00e5280, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_B[] =
{
    { L"Kazuki B (Normal)", 0x00e5400, 0x00e5440, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Rage)", 0x00e5440, 0x00e5480, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (SON)", 0x00e5640, 0x00e5680, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_C[] =
{
    { L"Kazuki C (Normal)", 0x00e5800, 0x00e5840, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Rage)", 0x00e5840, 0x00e5880, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (SON)", 0x00e5a40, 0x00e5a80, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_D[] =
{
    { L"Kazuki D (Normal)", 0x00e5c00, 0x00e5c40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Rage)", 0x00e5c40, 0x00e5c80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (SON)", 0x00e5e40, 0x00e5e80, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_A[] =
{
    { L"Kusaregedo A (Normal)", 0x00ee000, 0x00ee040, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (Rage)", 0x00ee040, 0x00ee080, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A (SON)", 0x00ee240, 0x00ee280, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_B[] =
{
    { L"Kusaregedo B (Normal)", 0x00ee400, 0x00ee440, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Rage)", 0x00ee440, 0x00ee480, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (SON)", 0x00ee640, 0x00ee680, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_C[] =
{
    { L"Kusaregedo C (Normal)", 0x00ee800, 0x00ee840, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Rage)", 0x00ee840, 0x00ee880, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (SON)", 0x00eea40, 0x00eea80, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_D[] =
{
    { L"Kusaregedo D (Normal)", 0x00eec00, 0x00eec40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Rage)", 0x00eec40, 0x00eec80, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (SON)", 0x00eee40, 0x00eee80, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_A[] =
{
    { L"Kyoshiro A (Normal)", 0x00da000, 0x00da040, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro A (Rage)", 0x00da040, 0x00da080, indexSamSho5Sprites_Kyoshiro, 0, &pairNextNext },
    { L"Kyoshiro A (SON)", 0x00da240, 0x00da280, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro A (Toad)", 0x00da280, 0x00da2a0, indexSamSho5Sprites_Kyoshiro, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_B[] =
{
    { L"Kyoshiro B (Normal)", 0x00da400, 0x00da440, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro B (Rage)", 0x00da440, 0x00da480, indexSamSho5Sprites_Kyoshiro, 0, &pairNextNext },
    { L"Kyoshiro B (SON)", 0x00da640, 0x00da680, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro B (Toad)", 0x00da680, 0x00da6a0, indexSamSho5Sprites_Kyoshiro, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_C[] =
{
    { L"Kyoshiro C (Normal)", 0x00da800, 0x00da840, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro C (Rage)", 0x00da840, 0x00da880, indexSamSho5Sprites_Kyoshiro, 0, &pairNextNext },
    { L"Kyoshiro C (SON)", 0x00daa40, 0x00daa80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro C (Toad)", 0x00daa80, 0x00daaa0, indexSamSho5Sprites_Kyoshiro, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_D[] =
{
    { L"Kyoshiro D (Normal)", 0x00dac00, 0x00dac40, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro D (Rage)", 0x00dac40, 0x00dac80, indexSamSho5Sprites_Kyoshiro, 0, &pairNextNext },
    { L"Kyoshiro D (SON)", 0x00dae40, 0x00dae80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Kyoshiro D (Toad)", 0x00dae80, 0x00daea0, indexSamSho5Sprites_Kyoshiro, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_A[] =
{
    { L"Mina A (Normal)", 0x00ed000, 0x00ed040, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina A (Rage)", 0x00ed040, 0x00ed080, indexSamSho5Sprites_Mina, 0, &pairNextNext },
    { L"Mina A (SON)", 0x00ed240, 0x00ed280, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru A", 0x00ed280, 0x00ed2A0, indexSamSho5Sprites_Mina, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_B[] =
{
    { L"Mina B (Normal)", 0x00ed400, 0x00ed440, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina B (Rage)", 0x00ed440, 0x00ed480, indexSamSho5Sprites_Mina, 0, &pairNextNext },
    { L"Mina B (SON)", 0x00ed640, 0x00ed680, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru B", 0x00ed680, 0x00ed6A0, indexSamSho5Sprites_Mina, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_C[] =
{
    { L"Mina C (Normal)", 0x00ed800, 0x00ed840, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina C (Rage)", 0x00ed840, 0x00ed880, indexSamSho5Sprites_Mina, 0, &pairNextNext },
    { L"Mina C (SON)", 0x00eda40, 0x00eda80, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru C", 0x00eda80, 0x00edaA0, indexSamSho5Sprites_Mina, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_D[] =
{
    { L"Mina D (Normal)", 0x00edc00, 0x00edc40, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina D (Rage)", 0x00edc40, 0x00edc80, indexSamSho5Sprites_Mina, 0, &pairNextNext },
    { L"Mina D (SON)", 0x00ede40, 0x00ede80, indexSamSho5Sprites_Mina, 0, &pairNext },
    { L"Chanpuru D", 0x00ede80, 0x00edeA0, indexSamSho5Sprites_Mina, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_A[] =
{
    { L"Mizuki A (Normal)", 0x00f0000, 0x00f0040, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (Rage)", 0x00f0040, 0x00f0080, indexSamSho5Sprites_Mizuki },
    { L"Mizuki A (SON)", 0x00f0240, 0x00f0280, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_B[] =
{
    { L"Mizuki B (Normal)", 0x00f0400, 0x00f0440, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Rage)", 0x00f0440, 0x00f0480, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (SON)", 0x00f0640, 0x00f0680, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_C[] =
{
    { L"Mizuki C (Normal)", 0x00f0800, 0x00f0840, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Rage)", 0x00f0840, 0x00f0880, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (SON)", 0x00f0a40, 0x00f0a80, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_D[] =
{
    { L"Mizuki D (Normal)", 0x00f0c00, 0x00f0c40, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Rage)", 0x00f0c40, 0x00f0c80, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (SON)", 0x00f0e40, 0x00f0e80, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_A[] =
{
    { L"Nakoruru A (Normal)", 0x00d6000, 0x00d6040, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru A (Rage)", 0x00d6040, 0x00d6080, indexSamSho5Sprites_Nakoruru, 0, &pairNextNext },
    { L"Nakoruru A (SON)", 0x00d6240, 0x00d6280, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha A", 0x00d6280, 0x00d62A0, indexSamSho5Sprites_Nakoruru, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_B[] =
{
    { L"Nakoruru B (Normal)", 0x00d6400, 0x00d6440, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru B (Rage)", 0x00d6440, 0x00d6480, indexSamSho5Sprites_Nakoruru, 0, &pairNextNext },
    { L"Nakoruru B (SON)", 0x00d6640, 0x00d6680, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha B", 0x00d6680, 0x00d66A0, indexSamSho5Sprites_Nakoruru, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_C[] =
{
    { L"Nakoruru C (Normal)", 0x00d6800, 0x00d6840, indexSamSho5Sprites_Nakoruru, 0, &pairNext3  },
    { L"Nakoruru C (Rage)", 0x00d6840, 0x00d6880, indexSamSho5Sprites_Nakoruru, 0, &pairNextNext },
    { L"Nakoruru C (SON)", 0x00d6a40, 0x00d6a80, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha C", 0x00d6a80, 0x00d6aA0, indexSamSho5Sprites_Nakoruru, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_D[] =
{
    { L"Nakoruru D (Normal)", 0x00d6c00, 0x00d6c40, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru D (Rage)", 0x00d6c40, 0x00d6c80, indexSamSho5Sprites_Nakoruru, 0, &pairNextNext },
    { L"Nakoruru D (SON)", 0x00d6e40, 0x00d6e80, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha D", 0x00d6e80, 0x00d6eA0, indexSamSho5Sprites_Nakoruru, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_A[] =
{
    { L"Rasetsumaru A (Normal)", 0x00e7000, 0x00e7040, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (Rage)", 0x00e7040, 0x00e7080, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A (SON)", 0x00e7240, 0x00e7280, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_B[] =
{
    { L"Rasetsumaru B (Normal)", 0x00e7400, 0x00e7440, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Rage)", 0x00e7440, 0x00e7480, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (SON)", 0x00e7640, 0x00e7680, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_C[] =
{
    { L"Rasetsumaru C (Normal)", 0x00e7800, 0x00e7840, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Rage)", 0x00e7840, 0x00e7880, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (SON)", 0x00e7a40, 0x00e7a80, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_D[] =
{
    { L"Rasetsumaru D (Normal)", 0x00e7c00, 0x00e7c40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Rage)", 0x00e7c40, 0x00e7c80, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (SON)", 0x00e7e40, 0x00e7e80, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_A[] =
{
    { L"Rera A (Normal)", 0x00e8000, 0x00e8040, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera A (Rage)", 0x00e8040, 0x00e8080, indexSamSho5Sprites_Rera, 0, &pairNextNext },
    { L"Rera A (SON)", 0x00e8240, 0x00e8280, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru A", 0x00e82A0, 0x00e82C0, indexSamSho5Sprites_Rera, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_B[] =
{
    { L"Rera B (Normal)", 0x00e8400, 0x00e8440, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera B (Rage)", 0x00e8440, 0x00e8480, indexSamSho5Sprites_Rera, 0, &pairNextNext },
    { L"Rera B (SON)", 0x00e8640, 0x00e8680, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru B", 0x00e86A0, 0x00e86C0, indexSamSho5Sprites_Rera, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_C[] =
{
    { L"Rera C (Normal)", 0x00e8800, 0x00e8840, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera C (Rage)", 0x00e8840, 0x00e8880, indexSamSho5Sprites_Rera, 0, &pairNextNext },
    { L"Rera C (SON)", 0x00e8a40, 0x00e8a80, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru C", 0x00e8aA0, 0x00e8aC0, indexSamSho5Sprites_Rera, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_D[] =
{
    { L"Rera D (Normal)", 0x00e8c00, 0x00e8c40, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera D (Rage)", 0x00e8c40, 0x00e8c80, indexSamSho5Sprites_Rera, 0, &pairNextNext },
    { L"Rera D (SON)", 0x00e8e40, 0x00e8e80, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru D", 0x00e8eA0, 0x00e8eC0, indexSamSho5Sprites_Rera, 1 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_A[] =
{
    { L"Rimururu A (Normal)", 0x00d7000, 0x00d7040, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (Rage)", 0x00d7040, 0x00d7080, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A (SON)", 0x00d7240, 0x00d7280, indexSamSho5Sprites_Rimururu },
    { L"Konru A", 0x00d72C0, 0x00d72E0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_B[] =
{
    { L"Rimururu B (Normal)", 0x00d7400, 0x00d7440, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Rage)", 0x00d7440, 0x00d7480, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (SON)", 0x00d7640, 0x00d7680, indexSamSho5Sprites_Rimururu },
    { L"Konru B", 0x00d76C0, 0x00d76E0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_C[] =
{
    { L"Rimururu C (Normal)", 0x00d7800, 0x00d7840, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Rage)", 0x00d7840, 0x00d7880, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (SON)", 0x00d7a40, 0x00d7a80, indexSamSho5Sprites_Rimururu },
    { L"Konru C", 0x00d7aC0, 0x00d7aE0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_D[] =
{
    { L"Rimururu D (Normal)", 0x00d7c00, 0x00d7c40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Rage)", 0x00d7c40, 0x00d7c80, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (SON)", 0x00d7e40, 0x00d7e80, indexSamSho5Sprites_Rimururu },
    { L"Konru D", 0x00d7eC0, 0x00d7eE0 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_A[] =
{
    { L"Shizumaru A (Normal)", 0x00de000, 0x00de040, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (Rage)", 0x00de040, 0x00de080, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A (SON)", 0x00de240, 0x00de280, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_B[] =
{
    { L"Shizumaru B (Normal)", 0x00de400, 0x00de440, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Rage)", 0x00de440, 0x00de480, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (SON)", 0x00de640, 0x00de680, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_C[] =
{
    { L"Shizumaru C (Normal)", 0x00de800, 0x00de840, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Rage)", 0x00de840, 0x00de880, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (SON)", 0x00dea40, 0x00dea80, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_D[] =
{
    { L"Shizumaru D (Normal)", 0x00dec00, 0x00dec40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Rage)", 0x00dec40, 0x00dec80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (SON)", 0x00dee40, 0x00dee80, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_A[] =
{
    { L"Sogetsu A (Normal)", 0x00e6000, 0x00e6040, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (Rage)", 0x00e6040, 0x00e6080, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A (SON)", 0x00e6240, 0x00e6280, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_B[] =
{
    { L"Sogetsu B (Normal)", 0x00e6400, 0x00e6440, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Rage)", 0x00e6440, 0x00e6480, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (SON)", 0x00e6640, 0x00e6680, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_C[] =
{
    { L"Sogetsu C (Normal)", 0x00e6800, 0x00e6840, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Rage)", 0x00e6840, 0x00e6880, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (SON)", 0x00e6a40, 0x00e6a80, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_D[] =
{
    { L"Sogetsu D (Normal)", 0x00e6c00, 0x00e6c40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Rage)", 0x00e6c40, 0x00e6c80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (SON)", 0x00e6e40, 0x00e6e80, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_A[] =
{
    { L"Suija A (Normal)", 0x00ea000, 0x00ea040, indexSamSho5Sprites_Suija },
    { L"Suija A (Rage)", 0x00ea040, 0x00ea080, indexSamSho5Sprites_Suija },
    { L"Suija A (SON)", 0x00ea240, 0x00ea280, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_B[] =
{
    { L"Suija B (Normal)", 0x00ea400, 0x00ea440, indexSamSho5Sprites_Suija },
    { L"Suija B (Rage)", 0x00ea440, 0x00ea480, indexSamSho5Sprites_Suija },
    { L"Suija B (SON)", 0x00ea640, 0x00ea680, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_C[] =
{
    { L"Suija C (Normal)", 0x00ea800, 0x00ea840, indexSamSho5Sprites_Suija },
    { L"Suija C (Rage)", 0x00ea840, 0x00ea880, indexSamSho5Sprites_Suija },
    { L"Suija C (SON)", 0x00eaa40, 0x00eaa80, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_D[] =
{
    { L"Suija D (Normal)", 0x00eac00, 0x00eac40, indexSamSho5Sprites_Suija },
    { L"Suija D (Rage)", 0x00eac40, 0x00eac80, indexSamSho5Sprites_Suija },
    { L"Suija D (SON)", 0x00eae40, 0x00eae80, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_A[] =
{
    { L"Tam Tam A (Normal)", 0x00e4000, 0x00e4040, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (Rage)", 0x00e4040, 0x00e4080, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A (SON)", 0x00e4240, 0x00e4280, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_B[] =
{
    { L"Tam Tam B (Normal)", 0x00e4400, 0x00e4440, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Rage)", 0x00e4440, 0x00e4480, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (SON)", 0x00e4640, 0x00e4680, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_C[] =
{
    { L"Tam Tam C (Normal)", 0x00e4800, 0x00e4840, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Rage)", 0x00e4840, 0x00e4880, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (SON)", 0x00e4a40, 0x00e4a80, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_D[] =
{
    { L"Tam Tam D (Normal)", 0x00e4c00, 0x00e4c40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Rage)", 0x00e4c40, 0x00e4c80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (SON)", 0x00e4e40, 0x00e4e80, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_A[] =
{
    { L"Ukyo A (Normal)", 0x00db000, 0x00db040, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (Rage)", 0x00db040, 0x00db080, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A (SON)", 0x00db240, 0x00db280, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_B[] =
{
    { L"Ukyo B (Normal)", 0x00db400, 0x00db440, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Rage)", 0x00db440, 0x00db480, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (SON)", 0x00db640, 0x00db680, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_C[] =
{
    { L"Ukyo C (Normal)", 0x00db800, 0x00db840, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Rage)", 0x00db840, 0x00db880, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (SON)", 0x00dba40, 0x00dba80, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_D[] =
{
    { L"Ukyo D (Normal)", 0x00dbc00, 0x00dbc40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Rage)", 0x00dbc40, 0x00dbc80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (SON)", 0x00dbe40, 0x00dbe80, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_A[] =
{
    { L"Yoshitora A (Normal)", 0x00eb000, 0x00eb040, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (Rage)", 0x00eb040, 0x00eb080, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A (SON)", 0x00eb240, 0x00eb280, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_B[] =
{
    { L"Yoshitora B (Normal)", 0x00eb400, 0x00eb440, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Rage)", 0x00eb440, 0x00eb480, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (SON)", 0x00eb640, 0x00eb680, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_C[] =
{
    { L"Yoshitora C (Normal)", 0x00eb800, 0x00eb840, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Rage)", 0x00eb840, 0x00eb880, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (SON)", 0x00eba40, 0x00eba80, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_D[] =
{
    { L"Yoshitora D (Normal)", 0x00ebc00, 0x00ebc40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Rage)", 0x00ebc40, 0x00ebc80, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (SON)", 0x00ebe40, 0x00ebe80, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_A[] =
{
    { L"Yunfei A (Normal)", 0x00ec000, 0x00ec040, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (Rage)", 0x00ec040, 0x00ec080, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A (SON)", 0x00ec240, 0x00ec280, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_B[] =
{
    { L"Yunfei B (Normal)", 0x00ec400, 0x00ec440, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Rage)", 0x00ec440, 0x00ec480, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (SON)", 0x00ec640, 0x00ec680, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_C[] =
{
    { L"Yunfei C (Normal)", 0x00ec800, 0x00ec840, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Rage)", 0x00ec840, 0x00ec880, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (SON)", 0x00eca40, 0x00eca80, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_D[] =
{
    { L"Yunfei D (Normal)", 0x00ecc00, 0x00ecc40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Rage)", 0x00ecc40, 0x00ecc80, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (SON)", 0x00ece40, 0x00ece80, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_A[] =
{
    { L"Zankuro A (Normal)", 0x00e2000, 0x00e2040, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (Rage)", 0x00e2040, 0x00e2080, indexSamSho5Sprites_Zankuro },
    { L"Zankuro A (SON)", 0x00e2240, 0x00e2280, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_B[] =
{
    { L"Zankuro B (Normal)", 0x00e2400, 0x00e2440, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Rage)", 0x00e2440, 0x00e2480, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (SON)", 0x00e2640, 0x00e2680, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_C[] =
{
    { L"Zankuro C (Normal)", 0x00e2800, 0x00e2840, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Rage)", 0x00e2840, 0x00e2880, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (SON)", 0x00e2a40, 0x00e2a80, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_D[] =
{
    { L"Zankuro D (Normal)", 0x00e2c00, 0x00e2c40, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Rage)", 0x00e2c40, 0x00e2c80, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (SON)", 0x00e2e40, 0x00e2e80, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Amakusa_PALETTES_PORTRAITS[] =
{
    { L"Amakusa A (Portrait)", 0x00e03a0, 0x00e03e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
    { L"Amakusa B (Portrait)", 0x00e07a0, 0x00e07e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
    { L"Amakusa C (Portrait)", 0x00e0ba0, 0x00e0be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
    { L"Amakusa D (Portrait)", 0x00e0fa0, 0x00e0fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Amakusa },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Basara_PALETTES_PORTRAITS[] =
{
    { L"Basara A (Portrait)", 0x00dd3a0, 0x00dd3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
    { L"Basara B (Portrait)", 0x00dd7a0, 0x00dd7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
    { L"Basara C (Portrait)", 0x00ddba0, 0x00ddbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
    { L"Basara D (Portrait)", 0x00ddfa0, 0x00ddfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Basara },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Charlotte_PALETTES_PORTRAITS[] =
{
    { L"Charlotte A (Portrait)", 0x00e33a0, 0x00e33e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B (Portrait)", 0x00e37a0, 0x00e37e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C (Portrait)", 0x00e3ba0, 0x00e3be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D (Portrait)", 0x00e3fa0, 0x00e3fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Charlotte },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Enja_PALETTES_PORTRAITS[] =
{
    { L"Enja A (Portrait)", 0x00e93a0, 0x00e93e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
    { L"Enja B (Portrait)", 0x00e97a0, 0x00e97e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
    { L"Enja C (Portrait)", 0x00e9ba0, 0x00e9be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
    { L"Enja D (Portrait)", 0x00e9fa0, 0x00e9fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Enja },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaira_PALETTES_PORTRAITS[] =
{
    { L"Gaira A (Portrait)", 0x00df3a0, 0x00df3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
    { L"Gaira B (Portrait)", 0x00df7a0, 0x00df7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
    { L"Gaira C (Portrait)", 0x00dfba0, 0x00dfbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
    { L"Gaira D (Portrait)", 0x00dffa0, 0x00dffe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaira },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Galford_PALETTES_PORTRAITS[] =
{
    { L"Galford A (Portrait)", 0x00d93a0, 0x00d93e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
    { L"Galford B (Portrait)", 0x00d97a0, 0x00d97e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
    { L"Galford C (Portrait)", 0x00d9ba0, 0x00d9be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
    { L"Galford D (Portrait)", 0x00d9fa0, 0x00d9fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Galford },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Gaoh_PALETTES_PORTRAITS[] =
{
    { L"Gaoh A (Portrait)", 0x00ef3a0, 0x00ef3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B (Portrait)", 0x00ef7a0, 0x00ef7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C (Portrait)", 0x00efba0, 0x00efbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D (Portrait)", 0x00effa0, 0x00effe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Gaoh },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Genjuro_PALETTES_PORTRAITS[] =
{
    { L"Genjuro A (Portrait)", 0x00dc3a0, 0x00dc3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B (Portrait)", 0x00dc7a0, 0x00dc7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C (Portrait)", 0x00dcba0, 0x00dcbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D (Portrait)", 0x00dcfa0, 0x00dcfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Genjuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Hanzo_PALETTES_PORTRAITS[] =
{
    { L"Hanzo A (Portrait)", 0x00d83a0, 0x00d83e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B (Portrait)", 0x00d87a0, 0x00d87e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C (Portrait)", 0x00d8ba0, 0x00d8be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D (Portrait)", 0x00d8fa0, 0x00d8fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Hanzo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Haohmaru_PALETTES_PORTRAITS[] =
{
    { L"Haohmaru A (Portrait)", 0x00d53a0, 0x00d53e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B (Portrait)", 0x00d57a0, 0x00d57e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C (Portrait)", 0x00d5ba0, 0x00d5be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D (Portrait)", 0x00d5fa0, 0x00d5fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Jubei_PALETTES_PORTRAITS[] =
{
    { L"Jubei A (Portrait)", 0x00e13a0, 0x00e13e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
    { L"Jubei B (Portrait)", 0x00e17a0, 0x00e17e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
    { L"Jubei C (Portrait)", 0x00e1ba0, 0x00e1be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
    { L"Jubei D (Portrait)", 0x00e1fa0, 0x00e1fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Jubei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kazuki_PALETTES_PORTRAITS[] =
{
    { L"Kazuki A (Portrait)", 0x00e53a0, 0x00e53e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B (Portrait)", 0x00e57a0, 0x00e57e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C (Portrait)", 0x00e5ba0, 0x00e5be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D (Portrait)", 0x00e5fa0, 0x00e5fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kazuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kusaregedo_PALETTES_PORTRAITS[] =
{
    { L"Kusaregedo A (Portrait)", 0x00ee3a0, 0x00ee3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B (Portrait)", 0x00ee7a0, 0x00ee7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C (Portrait)", 0x00eeba0, 0x00eebe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D (Portrait)", 0x00eefa0, 0x00eefe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kusaregedo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Kyoshiro_PALETTES_PORTRAITS[] =
{
    { L"Kyoshiro A (Portrait)", 0x00da3a0, 0x00da3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro B (Portrait)", 0x00da7a0, 0x00da7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro C (Portrait)", 0x00daba0, 0x00dabe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
    { L"Kyoshiro D (Portrait)", 0x00dafa0, 0x00dafe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Kyoshiro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mina_PALETTES_PORTRAITS[] =
{
    { L"Mina A (Portrait)", 0x00ed3a0, 0x00ed3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
    { L"Mina B (Portrait)", 0x00ed7a0, 0x00ed7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
    { L"Mina C (Portrait)", 0x00edba0, 0x00edbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
    { L"Mina D (Portrait)", 0x00edfa0, 0x00edfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mina },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Mizuki_PALETTES_PORTRAITS[] =
{
    { L"Mizuki A (Portrait)", 0x00f03a0, 0x00f03e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
    { L"Mizuki B (Portrait)", 0x00f07a0, 0x00f07e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
    { L"Mizuki C (Portrait)", 0x00f0ba0, 0x00f0be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
    { L"Mizuki D (Portrait)", 0x00f0fa0, 0x00f0fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Mizuki },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Nakoruru_PALETTES_PORTRAITS[] =
{
    { L"Nakoruru A (Portrait)", 0x00d63a0, 0x00d63e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru B (Portrait)", 0x00d67a0, 0x00d67e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru C (Portrait)", 0x00d6ba0, 0x00d6be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
    { L"Nakoruru D (Portrait)", 0x00d6fa0, 0x00d6fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Nakoruru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rasetsumaru_PALETTES_PORTRAITS[] =
{
    { L"Rasetsumaru A (Portrait)", 0x00e73a0, 0x00e73e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B (Portrait)", 0x00e77a0, 0x00e77e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C (Portrait)", 0x00e7ba0, 0x00e7be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D (Portrait)", 0x00e7fa0, 0x00e7fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rasetsumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rera_PALETTES_PORTRAITS[] =
{
    { L"Rera A (Portrait)", 0x00e83a0, 0x00e83e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
    { L"Rera B (Portrait)", 0x00e87a0, 0x00e87e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
    { L"Rera C (Portrait)", 0x00e8ba0, 0x00e8be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
    { L"Rera D (Portrait)", 0x00e8fa0, 0x00e8fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rera },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Rimururu_PALETTES_PORTRAITS[] =
{
    { L"Rimururu A (Portrait)", 0x00d73a0, 0x00d73e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B (Portrait)", 0x00d77a0, 0x00d77e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C (Portrait)", 0x00d7ba0, 0x00d7be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D (Portrait)", 0x00d7fa0, 0x00d7fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Rimururu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Shizumaru_PALETTES_PORTRAITS[] =
{
    { L"Shizumaru A (Portrait)", 0x00de3a0, 0x00de3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B (Portrait)", 0x00de7a0, 0x00de7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C (Portrait)", 0x00deba0, 0x00debe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D (Portrait)", 0x00defa0, 0x00defe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Shizumaru },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Sogetsu_PALETTES_PORTRAITS[] =
{
    { L"Sogetsu A (Portrait)", 0x00e63a0, 0x00e63e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B (Portrait)", 0x00e67a0, 0x00e67e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C (Portrait)", 0x00e6ba0, 0x00e6be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D (Portrait)", 0x00e6fa0, 0x00e6fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Sogetsu },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Suija_PALETTES_PORTRAITS[] =
{
    { L"Suija A (Portrait)", 0x00ea3a0, 0x00ea3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
    { L"Suija B (Portrait)", 0x00ea7a0, 0x00ea7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
    { L"Suija C (Portrait)", 0x00eaba0, 0x00eabe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
    { L"Suija D (Portrait)", 0x00eafa0, 0x00eafe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Suija },
};

const sGame_PaletteDataset SAMSHOW5SP_A_TamTam_PALETTES_PORTRAITS[] =
{
    { L"Tam Tam A (Portrait)", 0x00e43a0, 0x00e43e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B (Portrait)", 0x00e47a0, 0x00e47e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C (Portrait)", 0x00e4ba0, 0x00e4be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D (Portrait)", 0x00e4fa0, 0x00e4fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_TamTam },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Ukyo_PALETTES_PORTRAITS[] =
{
    { L"Ukyo A (Portrait)", 0x00db3a0, 0x00db3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B (Portrait)", 0x00db7a0, 0x00db7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C (Portrait)", 0x00dbba0, 0x00dbbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D (Portrait)", 0x00dbfa0, 0x00dbfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Ukyo },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yoshitora_PALETTES_PORTRAITS[] =
{
    { L"Yoshitora A (Portrait)", 0x00eb3a0, 0x00eb3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B (Portrait)", 0x00eb7a0, 0x00eb7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C (Portrait)", 0x00ebba0, 0x00ebbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D (Portrait)", 0x00ebfa0, 0x00ebfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yoshitora },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Yunfei_PALETTES_PORTRAITS[] =
{
    { L"Yunfei A (Portrait)", 0x00ec3a0, 0x00ec3e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B (Portrait)", 0x00ec7a0, 0x00ec7e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C (Portrait)", 0x00ecba0, 0x00ecbe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D (Portrait)", 0x00ecfa0, 0x00ecfe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Yunfei },
};

const sGame_PaletteDataset SAMSHOW5SP_A_Zankuro_PALETTES_PORTRAITS[] =
{
    { L"Zankuro A (Portrait)", 0x00e23a0, 0x00e23e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
    { L"Zankuro B (Portrait)", 0x00e27a0, 0x00e27e0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
    { L"Zankuro C (Portrait)", 0x00e2ba0, 0x00e2be0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
    { L"Zankuro D (Portrait)", 0x00e2fa0, 0x00e2fe0, indexSamSho5Sprites_Portrait, indexSamSho5Sprites_Zankuro },
};

const sGame_PaletteDataset SAMSHOW5SP_A_BONUS_PALETTES[] =
{
    { L"Blood", 0xd4600, 0xd4620 },
    { L"Blood 2 (unused ? )", 0xd4620, 0xd4640 },
};

const sGame_PaletteDataset SAMSHOW5SP_A_HUD_PALETTES[] =
{
   { L"Generic text", 0xd4000, 0xd4020 },
   { L"KO/POW", 0xd4020, 0xd4040 },
   { L"Counter Text", 0xd4040, 0xd4060 },
   { L"Top Bar", 0xd4060, 0xd4080 },
   { L"Low Health", 0xd4080, 0xd40a0 },
   { L"Bottom bar", 0xd40a0, 0xd40c0 },
   { L"Timer/Names/Rage Active Bar/New Challenger", 0xd40c0, 0xd40e0 },
   { L"Round Wins", 0xd4100, 0xd4120 },
   { L"Rage Meter Flash (1/8)", 0xd4120, 0xd4140 },
   { L"Rage Meter Flash (2/8)", 0xfbe40, 0xfbe60 },
   { L"Rage Meter Flash (3/8)", 0xfbe60, 0xfbe80 },
   { L"Rage Meter Flash (4/8)", 0xfbe80, 0xfbea0 },
   { L"Rage Meter Flash (5/8)", 0xfbea0, 0xfbec0 },
   { L"Rage Meter Flash (6/8)", 0xfbec0, 0xfbee0 },
   { L"Rage Meter Flash (7/8)", 0xfbee0, 0xfbf00 },
   { L"Rage Meter Flash (8/8)", 0xfbf00, 0xfbf20 },
   { L"Rage Meter Full Flash (1/8)", 0xd4140, 0xd4160 },
   { L"Rage Meter Full Flash (2/8)", 0xfbf20, 0xfbf40 },
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
    indexSamSho5_A_Bonus,

    SAMSHO5SP_A_EXTRALOC
};

const sDescTreeNode SAMSHO5SP_A_UNITS[SAMSHO5SP_A_NUMUNIT] =
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
    { L"TamTam", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_TamTam_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_TamTam_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Ukyo_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Ukyo_COLLECTION) },
    { L"Yoshitora", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Yoshitora_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Yoshitora_COLLECTION) },
    { L"Yunfei", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Yunfei_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Yunfei_COLLECTION) },
    { L"Zankura", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_Zankuro_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_Zankuro_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SAMSHO5SP_A_BONUS_COLLECTION, ARRAYSIZE(SAMSHO5SP_A_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SAMSHO5SP_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

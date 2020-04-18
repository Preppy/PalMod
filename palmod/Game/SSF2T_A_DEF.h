#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SSF2T_A_RYU_PALETTES. 
// * Update every array using SSF2T_A_NUMUNIT below
// * Update the index lookups in Game_SSF2T_A_.cpp that are marked - look for usage of indexSSF2TRyu to find them
// That should be it.  Good luck.

enum SupportedSSF2TPaletteListIndex
{
    indexSSF2TRyu,
    indexSSF2TEHonda,
    indexSSF2TBlanka,
    indexSSF2TGuile,
    indexSSF2TKen,
    indexSSF2TChunLi,
    indexSSF2TZangief,
    indexSSF2TDhalsim,
    indexSSF2TMBison,
    indexSSF2TSagat,
    indexSSF2TBalrog,
    indexSSF2TVega,
    indexSSF2TCammy,
    indexSSF2TTHawk,
    indexSSF2TFeiLong,
    indexSSF2TDeeJay,
    indexSSF2TGouki,
    indexSSF2TLast
};

#define SSF2T_A_EXTRALOC SSF2T_A_NUMUNIT

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES[] =
{
    {"Jab", 0x03fb2c, 0x03fb4c, 0x00 },
    {"Strong", 0x03fbce, 0x03fbee, 0x00 },
    {"Fierce", 0x03fc70, 0x03fc90, 0x00 },
    {"Short", 0x03fd12, 0x03fd32, 0x00 },
    {"Forward", 0x03fdb4, 0x03fdd4, 0x00 },
    {"Roundhouse", 0x03fe56, 0x03fe76, 0x00 },
    {"Start", 0x03fef8, 0x03ff18, 0x00 },
    {"Hold", 0x03ff9a, 0x03ffba, 0x00 },
    {"Old 1P", 0x04003c, 0x04005c, 0x00 },
    {"Old 2P", 0x0400de, 0x0400fe, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES[] =
{
    {"Jab", 0x040198, 0x0401b8, 0x01 },
    {"Strong", 0x04023a, 0x04025a, 0x01 },
    {"Fierce", 0x0402dc, 0x0402fc, 0x01 },
    {"Short", 0x04037e, 0x04039e, 0x01 },
    {"Forward", 0x040420, 0x040440, 0x01 },
    {"Roundhouse", 0x0404c2, 0x0404e2, 0x01 },
    {"Start", 0x040564, 0x040584, 0x01 },
    {"Hold", 0x040606, 0x040626, 0x01 },
    {"Old 1P", 0x0406a8, 0x0406c8, 0x01 },
    {"Old 2P", 0x04074a, 0x04076a, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES[] =
{
    {"Jab", 0x040804, 0x040824, 0x02 },
    {"Strong", 0x0408a4, 0x0408c4, 0x02 },
    {"Fierce", 0x040944, 0x040964, 0x02 },
    {"Short", 0x0409e4, 0x040a04, 0x02 },
    {"Forward", 0x040a84, 0x040aa4, 0x02 },
    {"Roundhouse", 0x040b24, 0x040b44, 0x02 },
    {"Start", 0x040bc4, 0x040be4, 0x02 },
    {"Hold", 0x040c64, 0x040c84, 0x02 },
    {"Old 1P", 0x040d04, 0x040d24, 0x02 },
    {"Old 2P", 0x040da6, 0x040dc6, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES[] =
{
    {"Jab", 0x040e60, 0x040e80, 0x03 },
    {"Strong", 0x040f02, 0x040f22, 0x03 },
    {"Fierce", 0x040fa4, 0x040fc4, 0x03 },
    {"Short", 0x041046, 0x041066, 0x03 },
    {"Forward", 0x0410e8, 0x041108, 0x03 },
    {"Roundhouse", 0x04118a, 0x0411aa, 0x03 },
    {"Start", 0x04122c, 0x04124c, 0x03 },
    {"Hold", 0x0412ce, 0x0412ee, 0x03 },
    {"Old 1P", 0x041370, 0x041390, 0x03 },
    {"Old 2P", 0x041412, 0x041432, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES[] =
{
    {"Jab", 0x0414cc, 0x0414ec, 0x04 },
    {"Strong", 0x04156e, 0x04158e, 0x04 },
    {"Fierce", 0x041610, 0x041630, 0x04 },
    {"Short", 0x0416b2, 0x0416d2, 0x04 },
    {"Forward", 0x041754, 0x041774, 0x04 },
    {"Roundhouse", 0x0417f6, 0x041816, 0x04 },
    {"Start", 0x041898, 0x0418b8, 0x04 },
    {"Hold", 0x04193a, 0x04195a, 0x04 },
    {"Old 1P", 0x0419dc, 0x0419fc, 0x04 },
    {"Old 2P", 0x041a7e, 0x041a9e, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES[] =
{
    {"Jab", 0x041b38, 0x041b58, 0x05 },
    {"Strong", 0x041bda, 0x041bfa, 0x05 },
    {"Fierce", 0x041c7c, 0x041c9c, 0x05 },
    {"Short", 0x041d1e, 0x041d3e, 0x05 },
    {"Forward", 0x041dc0, 0x041de0, 0x05 },
    {"Roundhouse", 0x041e62, 0x041e82, 0x05 },
    {"Start", 0x041f04, 0x041f24, 0x05 },
    {"Hold", 0x041fa6, 0x041fc6, 0x05 },
    {"Old 1P", 0x042048, 0x042068, 0x05 },
    {"Old 2P", 0x0420ea, 0x04210a, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES[] =
{
    {"Jab", 0x0421a4, 0x0421c4, 0x06 },
    {"Strong", 0x042246, 0x042266, 0x06 },
    {"Fierce", 0x0422e8, 0x042308, 0x06 },
    {"Short", 0x04238a, 0x0423aa, 0x06 },
    {"Forward", 0x04242c, 0x04244c, 0x06 },
    {"Roundhouse", 0x0424ce, 0x0424ee, 0x06 },
    {"Start", 0x042570, 0x042590, 0x06 },
    {"Hold", 0x042612, 0x042632, 0x06 },
    {"Old 1P", 0x0426b4, 0x0426d4, 0x06 },
    {"Old 2P", 0x042756, 0x042776, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES[] =
{
    {"Jab", 0x042810, 0x042830, 0x07 },
    {"Strong", 0x0428b2, 0x0428d2, 0x07 },
    {"Fierce", 0x042954, 0x042974, 0x07 },
    {"Short", 0x0429f6, 0x042a16, 0x07 },
    {"Forward", 0x042a98, 0x042ab8, 0x07 },
    {"Roundhouse", 0x042b3a, 0x042b5a, 0x07 },
    {"Start", 0x042bdc, 0x042bfc, 0x07 },
    {"Hold", 0x042c7e, 0x042c9e, 0x07 },
    {"Old 1P", 0x042d20, 0x042d40, 0x07 },
    {"Old 2P", 0x042dc2, 0x042de2, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES[] =
{
    {"Jab", 0x042e7c, 0x042e9c, 0x08 },
    {"Strong", 0x042f1e, 0x042f3e, 0x08 },
    {"Fierce", 0x042fc0, 0x042fe0, 0x08 },
    {"Short", 0x043062, 0x043082, 0x08 },
    {"Forward", 0x043104, 0x043124, 0x08 },
    {"Roundhouse", 0x0431a6, 0x0431c6, 0x08 },
    {"Start", 0x043248, 0x043268, 0x08 },
    {"Hold", 0x0432ea, 0x04330a, 0x08 },
    {"Old 1P", 0x04338c, 0x0433ac, 0x08 },
    {"Old 2P", 0x04342e, 0x04344e, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES[] =
{
    {"Jab", 0x0434e8, 0x043508, 0x09 },
    {"Strong", 0x04358a, 0x0435aa, 0x09 },
    {"Fierce", 0x04362c, 0x04364c, 0x09 },
    {"Short", 0x0436ce, 0x0436ee, 0x09 },
    {"Forward", 0x043770, 0x043790, 0x09 },
    {"Roundhouse", 0x043812, 0x043832, 0x09 },
    {"Start", 0x0438b4, 0x0438d4, 0x09 },
    {"Hold", 0x043956, 0x043976, 0x09 },
    {"Old 1P", 0x0439f8, 0x043a18, 0x09 },
    {"Old 2P", 0x043a9a, 0x043aba, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES[] =
{
    {"Jab", 0x043b54, 0x043b74, 0x0a },
    {"Strong", 0x043bf6, 0x043c16, 0x0a },
    {"Fierce", 0x043c98, 0x043cb8, 0x0a },
    {"Short", 0x043d3a, 0x043d5a, 0x0a },
    {"Forward", 0x043ddc, 0x043dfc, 0x0a },
    {"Roundhouse", 0x043e7e, 0x043e9e, 0x0a },
    {"Start", 0x043f20, 0x043f40, 0x0a },
    {"Hold", 0x043fc2, 0x043fe2, 0x0a },
    {"Old 1P", 0x044064, 0x044084, 0x0a },
    {"Old 2P", 0x044106, 0x044126, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES[] =
{
    {"Jab", 0x0441c0, 0x0441e0, 0x0b },
    {"Strong", 0x044262, 0x044282, 0x0b },
    {"Fierce", 0x044304, 0x044324, 0x0b },
    {"Short", 0x0443a6, 0x0443c6, 0x0b },
    {"Forward", 0x044448, 0x044468, 0x0b },
    {"Roundhouse", 0x0444ea, 0x04450a, 0x0b },
    {"Start", 0x04458c, 0x0445ac, 0x0b },
    {"Hold", 0x04462e, 0x04464e, 0x0b },
    {"Old 1P", 0x0446d0, 0x0446f0, 0x0b },
    {"Old 2P", 0x044772, 0x044792, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES[] =
{
    {"Jab", 0x04482c, 0x04484c, 0x0c },
    {"Strong", 0x0448ce, 0x0448ee, 0x0c },
    {"Fierce", 0x044970, 0x044990, 0x0c },
    {"Short", 0x044a12, 0x044a32, 0x0c },
    {"Forward", 0x044ab4, 0x044ad4, 0x0c },
    {"Roundhouse", 0x044b56, 0x044b76, 0x0c },
    {"Start", 0x044bf8, 0x044c18, 0x0c },
    {"Hold", 0x044c9a, 0x044cba, 0x0c },
    {"Old 1P", 0x044d3c, 0x044d5c, 0x0c },
    {"Old 2P", 0x044dde, 0x044dfe, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES[] =
{
    {"Jab", 0x044e98, 0x044eb8, 0x0d },
    {"Strong", 0x044f3a, 0x044f5a, 0x0d },
    {"Fierce", 0x044fdc, 0x044ffc, 0x0d },
    {"Short", 0x04507e, 0x04509e, 0x0d },
    {"Forward", 0x045120, 0x045140, 0x0d },
    {"Roundhouse", 0x0451c2, 0x0451e2, 0x0d },
    {"Start", 0x045264, 0x045284, 0x0d },
    {"Hold", 0x045306, 0x045326, 0x0d },
    {"Old 1P", 0x0453a8, 0x0453c8, 0x0d },
    {"Old 2P", 0x04544a, 0x04546a, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES[] =
{
    {"Jab", 0x045504, 0x045524, 0x0e },
    {"Strong", 0x0455a6, 0x0455c6, 0x0e },
    {"Fierce", 0x045648, 0x045668, 0x0e },
    {"Short", 0x0456ea, 0x04570a, 0x0e },
    {"Forward", 0x04578c, 0x0457ac, 0x0e },
    {"Roundhouse", 0x04582e, 0x04584e, 0x0e },
    {"Start", 0x0458d0, 0x0458f0, 0x0e },
    {"Hold", 0x045972, 0x045992, 0x0e },
    {"Old 1P", 0x045a14, 0x045a34, 0x0e },
    {"Old 2P", 0x045ab6, 0x045ad6, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES[] =
{
    {"Jab", 0x045b70, 0x045b90, 0x0f },
    {"Strong", 0x045c12, 0x045c32, 0x0f },
    {"Fierce", 0x045cb4, 0x045cd4, 0x0f },
    {"Short", 0x045d56, 0x045d76, 0x0f },
    {"Forward", 0x045df8, 0x045e18, 0x0f },
    {"Roundhouse", 0x045e9a, 0x045eba, 0x0f },
    {"Start", 0x045f3c, 0x045f5c, 0x0f },
    {"Hold", 0x045fde, 0x045ffe, 0x0f },
    {"Old 1P", 0x046080, 0x0460a0, 0x0f },
    {"Old 2P", 0x046122, 0x046142, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES[] =
{
    {"1P", 0x0461dc, 0x0461fc, 0x10 },
    {"2P", 0x04627e, 0x04629e, 0x10 },
    // These were used for PalMod 2008 but are clearly not for the Gouki sprite itself at least.
    //{"Fierce", 0x046322, 0x046342, 0x10 },
    //{"Short", 0x0463c4, 0x0463e4, 0x10 },
    //{"Forward", 0x046466, 0x046486, 0x10 },
    //{"Roundhouse", 0x046508, 0x046528, 0x10 },
    //{"Start", 0x0465aa, 0x0465ca, 0x10 },
    //{"Hold", 0x04664c, 0x04666c, 0x10 },
    //{"Old 1P", 0x0466ee, 0x04670e, 0x10 },
    //{"Old 2P", 0x046790, 0x0467b0, 0x10 },
};

const sDescTreeNode SSF2T_A_RYU_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_PALETTES, ARRAYSIZE(SSF2T_A_RYU_PALETTES) },
};

const sDescTreeNode SSF2T_A_EHONDA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_PALETTES, ARRAYSIZE(SSF2T_A_EHONDA_PALETTES) },
};

const sDescTreeNode SSF2T_A_BLANKA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_PALETTES, ARRAYSIZE(SSF2T_A_BLANKA_PALETTES) },
};

const sDescTreeNode SSF2T_A_GUILE_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_PALETTES, ARRAYSIZE(SSF2T_A_GUILE_PALETTES) },
};

const sDescTreeNode SSF2T_A_KEN_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_PALETTES, ARRAYSIZE(SSF2T_A_KEN_PALETTES) },
};

const sDescTreeNode SSF2T_A_CHUNLI_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_PALETTES, ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES) },
};

const sDescTreeNode SSF2T_A_ZANGIEF_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_PALETTES, ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES) },
};

const sDescTreeNode SSF2T_A_DHALSIM_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_PALETTES, ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES) },
};

const sDescTreeNode SSF2T_A_MBISON_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_PALETTES, ARRAYSIZE(SSF2T_A_MBISON_PALETTES) },
};

const sDescTreeNode SSF2T_A_SAGAT_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_PALETTES, ARRAYSIZE(SSF2T_A_SAGAT_PALETTES) },
};

const sDescTreeNode SSF2T_A_BALROG_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_PALETTES, ARRAYSIZE(SSF2T_A_BALROG_PALETTES) },
};

const sDescTreeNode SSF2T_A_VEGA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_PALETTES, ARRAYSIZE(SSF2T_A_VEGA_PALETTES) },
};

const sDescTreeNode SSF2T_A_CAMMY_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_PALETTES, ARRAYSIZE(SSF2T_A_CAMMY_PALETTES) },
};

const sDescTreeNode SSF2T_A_THAWK_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_PALETTES, ARRAYSIZE(SSF2T_A_THAWK_PALETTES) },
};

const sDescTreeNode SSF2T_A_FEILONG_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_PALETTES, ARRAYSIZE(SSF2T_A_FEILONG_PALETTES) },
};

const sDescTreeNode SSF2T_A_DEEJAY_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PALETTES, ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES) },
};

const sDescTreeNode SSF2T_A_GOUKI_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES, ARRAYSIZE(SSF2T_A_GOUKI_PALETTES) },
};

const UINT8 SSF2T_A_UNITSORT[SSF2T_A_NUMUNIT + 1] = // Plus 1 for the extra palettes
{
    indexSSF2TRyu,
    indexSSF2TEHonda,
    indexSSF2TBlanka,
    indexSSF2TGuile,
    indexSSF2TKen,
    indexSSF2TChunLi,
    indexSSF2TZangief,
    indexSSF2TDhalsim,
    indexSSF2TMBison,
    indexSSF2TSagat,
    indexSSF2TBalrog,
    indexSSF2TVega,
    indexSSF2TCammy,
    indexSSF2TTHawk,
    indexSSF2TFeiLong,
    indexSSF2TDeeJay,
    indexSSF2TGouki,

    SSF2T_A_EXTRALOC // Extra palettes
};

const sDescTreeNode SSF2T_UNITS[SSF2T_A_NUMUNIT] =
{
    { "Ryu", DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_COLLECTION, ARRAYSIZE(SSF2T_A_RYU_COLLECTION) },
    { "E-Honda", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_COLLECTION, ARRAYSIZE(SSF2T_A_EHONDA_COLLECTION) },
    { "Blanka", DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_COLLECTION, ARRAYSIZE(SSF2T_A_BLANKA_COLLECTION) },
    { "Guile", DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_COLLECTION, ARRAYSIZE(SSF2T_A_GUILE_COLLECTION) },
    { "Ken", DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_COLLECTION, ARRAYSIZE(SSF2T_A_KEN_COLLECTION) },
    { "Chun-Li", DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_COLLECTION, ARRAYSIZE(SSF2T_A_CHUNLI_COLLECTION) },
    { "Zangief", DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_COLLECTION, ARRAYSIZE(SSF2T_A_ZANGIEF_COLLECTION) },
    { "Dhalsim", DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_COLLECTION, ARRAYSIZE(SSF2T_A_DHALSIM_COLLECTION) },
    { "M.Bison", DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_COLLECTION, ARRAYSIZE(SSF2T_A_MBISON_COLLECTION) },
    { "Sagat", DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_COLLECTION, ARRAYSIZE(SSF2T_A_SAGAT_COLLECTION) },
    { "Balrog", DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_COLLECTION, ARRAYSIZE(SSF2T_A_BALROG_COLLECTION) },
    { "Vega", DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_COLLECTION, ARRAYSIZE(SSF2T_A_VEGA_COLLECTION) },
    { "Cammy", DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_COLLECTION, ARRAYSIZE(SSF2T_A_CAMMY_COLLECTION) },
    { "T-Hawk", DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_COLLECTION, ARRAYSIZE(SSF2T_A_THAWK_COLLECTION) },
    { "Fei Long", DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_COLLECTION, ARRAYSIZE(SSF2T_A_FEILONG_COLLECTION) },
    { "Dee Jay", DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_COLLECTION, ARRAYSIZE(SSF2T_A_DEEJAY_COLLECTION) },
    { "Gouki", DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_COLLECTION, ARRAYSIZE(SSF2T_A_GOUKI_COLLECTION) },
};

// We extend this array with data groveled from the SSF2Te.txt extensible extras file, if any.
const stExtraDef SSF2T_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

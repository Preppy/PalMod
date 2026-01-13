#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFTM_A_RYU_PALETTE_P1. 
// * Update every array using SFTM_A_NUMUNIT below
// That should be it.  Good luck.

const std::vector<uint16_t> SFTM_A_IMGIDS_USED =
{
    indexSFTMSprites_Akuma,    // 0xbb
    indexSFTMSprites_Arkane,   // 0xbc
    indexSFTMSprites_Balrog,   // 0xbd
    indexSFTMSprites_Blade,    // 0xbe
    indexSFTMSprites_Cammy,    // 0xbf
    indexSFTMSprites_ChunLi,   // 0xc0
    indexSFTMSprites_EHonda,   // 0xc1
    indexSFTMSprites_F7,       // 0xc2
    indexSFTMSprites_Guile,    // 0xc3
    indexSFTMSprites_Ken,      // 0xc4
    indexSFTMSprites_Khyber,   // 0xc5
    indexSFTMSprites_MBison,   // 0xc6
    indexSFTMSprites_Ryu,      // 0xc7
    indexSFTMSprites_Sagat,    // 0xc8
    indexSFTMSprites_Sawada,   // 0xc9
    indexSFTMSprites_Vega,     // 0xca
    indexSFTMSprites_Zangief,  // 0xcb
};

// these two are in flipped order on the rom
const sGame_PaletteDataset SFTM_A_SAGAT_PALETTE_P2[] =
{
    { L"Sagat", 0xff1f, 0x1021f, indexSFTMSprites_Sagat },
};

const sGame_PaletteDataset SFTM_A_SAGAT_PALETTE_P1[] =
{
    { L"Sagat", 0x1021f, 0x1051f, indexSFTMSprites_Sagat },
};

const sGame_PaletteDataset SFTM_A_RYU_PALETTE_P1[] =
{
    { L"Ryu", 0x1051f, 0x1081f, indexSFTMSprites_Ryu },
};

const sGame_PaletteDataset SFTM_A_RYU_PALETTE_P2[] =
{
    { L"Ryu", 0x1081f, 0x10b1f, indexSFTMSprites_Ryu },
};

const sGame_PaletteDataset SFTM_A_VEGA_PALETTE_P1[] =
{
    // WARNING: uneven pairing.  this should not be paired and is turned off at the Collection level
    { L"Vega", 0x10b1f, 0x10e1f, indexSFTMSprites_Vega, 0x00, &pairNext2 },
};

const sGame_PaletteDataset SFTM_A_VEGA_PALETTE_P2[] =
{
    // WARNING: uneven pairing.  this should not be paired and is turned off at the Collection level
    { L"Vega", 0x10e1f, 0x1111f, indexSFTMSprites_Vega, 0x00, &pairNext },
};

const sGame_PaletteDataset SFTM_A_VEGA_PALETTE_MASK[] =
{
    { L"Mask", 0x1771f, 0x17a1f, indexSFTMSprites_Vega, 0x01 },
};

const sGame_PaletteDataset SFTM_A_HONDA_PALETTE_P1[] =
{
    { L"Honda", 0x1111f, 0x1141f, indexSFTMSprites_EHonda },
};

const sGame_PaletteDataset SFTM_A_HONDA_PALETTE_P2[] =
{
    { L"Honda", 0x1141f, 0x1171f, indexSFTMSprites_EHonda },
};

const sGame_PaletteDataset SFTM_A_ZANGIEF_PALETTE_P1[] =
{
    { L"Zangief", 0x1171f, 0x11a1f, indexSFTMSprites_Zangief },
};

const sGame_PaletteDataset SFTM_A_ZANGIEF_PALETTE_P2[] =
{
    { L"Zangief", 0x11a1f, 0x11d1f, indexSFTMSprites_Zangief },
};

const sGame_PaletteDataset SFTM_A_BISON_PALETTE_P1[] =
{
    { L"M. Bison", 0x11d1f, 0x1201f, indexSFTMSprites_MBison },
};

const sGame_PaletteDataset SFTM_A_BISON_PALETTE_P2[] =
{
    { L"M. Bison", 0x1201f, 0x1231f, indexSFTMSprites_MBison },
};

const sGame_PaletteDataset SFTM_A_BISON_PALETTE_SUPER[] =
{
    { L"Super Bison", 0x1231f, 0x1261f, indexSFTMSprites_MBison },
};

const sGame_PaletteDataset SFTM_A_CAMMY_PALETTE_P1[] =
{
    { L"Cammy", 0x1261f, 0x1291f, indexSFTMSprites_Cammy },
};

const sGame_PaletteDataset SFTM_A_CAMMY_PALETTE_P2[] =
{
    { L"Cammy", 0x1291f, 0x12c1f, indexSFTMSprites_Cammy },
};

const sGame_PaletteDataset SFTM_A_BALROG_PALETTE_P1[] =
{
    { L"Balrog", 0x12c1f, 0x12f1f, indexSFTMSprites_Balrog },
};

const sGame_PaletteDataset SFTM_A_BALROG_PALETTE_P2[] =
{
    { L"Balrog", 0x12f1f, 0x1321f, indexSFTMSprites_Balrog },
};

const sGame_PaletteDataset SFTM_A_GUILE_PALETTE_P1[] =
{
    { L"Guile", 0x1321f, 0x1351f, indexSFTMSprites_Guile },
};

const sGame_PaletteDataset SFTM_A_GUILE_PALETTE_P2[] =
{
    { L"Guile", 0x1351f, 0x1381f, indexSFTMSprites_Guile },
};

const sGame_PaletteDataset SFTM_A_AKUMA_PALETTE_P1[] =
{
    { L"Akuma", 0x1381f, 0x13b1f, indexSFTMSprites_Akuma },
};

const sGame_PaletteDataset SFTM_A_AKUMA_PALETTE_P2[] =
{
    { L"Akuma", 0x13b1f, 0x13e1f, indexSFTMSprites_Akuma },
};

// These two are backwards on the ROM
const sGame_PaletteDataset SFTM_A_KEN_PALETTE_P2[] =
{
    { L"Ken", 0x13e1f, 0x1411f, indexSFTMSprites_Ken },
};

const sGame_PaletteDataset SFTM_A_KEN_PALETTE_P1[] =
{
    { L"Ken", 0x1411f, 0x1441f, indexSFTMSprites_Ken },
};

const sGame_PaletteDataset SFTM_A_CHUNLI_PALETTE_P1[] =
{
    { L"Chun-Li", 0x1441f, 0x1471f, indexSFTMSprites_ChunLi },
};

const sGame_PaletteDataset SFTM_A_CHUNLI_PALETTE_P2[] =
{
    { L"Chun-Li", 0x1471f, 0x14a1f, indexSFTMSprites_ChunLi },
};

const sGame_PaletteDataset SFTM_A_BLADE_PALETTE_P1[] =
{
    { L"Blade", 0x14a1f, 0x14d1f, indexSFTMSprites_Blade },
};

const sGame_PaletteDataset SFTM_A_BLADE_PALETTE_P2[] =
{
    { L"Blade", 0x14d1f, 0x1501f, indexSFTMSprites_Blade },
};

const sGame_PaletteDataset SFTM_A_KHYBER_PALETTE_P1[] =
{
    { L"Khyber", 0x1501f, 0x1531f, indexSFTMSprites_Khyber },
};

const sGame_PaletteDataset SFTM_A_KHYBER_PALETTE_P2[] =
{
    { L"Khyber", 0x1531f, 0x1561f, indexSFTMSprites_Khyber },
};

const sGame_PaletteDataset SFTM_A_ARKANE_PALETTE_P1[] =
{
    { L"Arkane", 0x1561f, 0x1591f, indexSFTMSprites_Arkane },
};

const sGame_PaletteDataset SFTM_A_ARKANE_PALETTE_P2[] =
{
    { L"Arkane", 0x1591f, 0x15c1f, indexSFTMSprites_Arkane },
};

const sGame_PaletteDataset SFTM_A_F7_PALETTE_P1[] =
{
    { L"F7", 0x15c1f, 0x15f1f, indexSFTMSprites_F7 },
};

const sGame_PaletteDataset SFTM_A_F7_PALETTE_P2[] =
{
    { L"F7", 0x15f1f, 0x1621f, indexSFTMSprites_F7 },
};

const sGame_PaletteDataset SFTM_A_SAWADA_PALETTE_P1[] =
{
    { L"Sawada", 0x1621f, 0x1651f, indexSFTMSprites_Sawada },
};

const sGame_PaletteDataset SFTM_A_SAWADA_PALETTE_P2[] =
{
    { L"Sawada", 0x1651f, 0x1681f, indexSFTMSprites_Sawada },
};

const sDescTreeNode SFTM_A_RYU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_RYU_PALETTE_P1, ARRAYSIZE(SFTM_A_RYU_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_RYU_PALETTE_P2, ARRAYSIZE(SFTM_A_RYU_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_VEGA_COLLECTION[] =
{
    // Suffix added to prevent auto-pairing
    { L"P1_", DESC_NODETYPE_TREE, (void*)SFTM_A_VEGA_PALETTE_P1, ARRAYSIZE(SFTM_A_VEGA_PALETTE_P1) },
    { L"P2_", DESC_NODETYPE_TREE, (void*)SFTM_A_VEGA_PALETTE_P2, ARRAYSIZE(SFTM_A_VEGA_PALETTE_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)SFTM_A_VEGA_PALETTE_MASK, ARRAYSIZE(SFTM_A_VEGA_PALETTE_MASK) },
};

const sDescTreeNode SFTM_A_HONDA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_HONDA_PALETTE_P1, ARRAYSIZE(SFTM_A_HONDA_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_HONDA_PALETTE_P2, ARRAYSIZE(SFTM_A_HONDA_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_ZANGIEF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_ZANGIEF_PALETTE_P1, ARRAYSIZE(SFTM_A_ZANGIEF_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_ZANGIEF_PALETTE_P2, ARRAYSIZE(SFTM_A_ZANGIEF_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_BISON_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_BISON_PALETTE_P1, ARRAYSIZE(SFTM_A_BISON_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_BISON_PALETTE_P2, ARRAYSIZE(SFTM_A_BISON_PALETTE_P2) },
    { L"Super", DESC_NODETYPE_TREE, (void*)SFTM_A_BISON_PALETTE_SUPER, ARRAYSIZE(SFTM_A_BISON_PALETTE_SUPER) },
};

const sDescTreeNode SFTM_A_CAMMY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_CAMMY_PALETTE_P1, ARRAYSIZE(SFTM_A_CAMMY_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_CAMMY_PALETTE_P2, ARRAYSIZE(SFTM_A_CAMMY_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_BALROG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_BALROG_PALETTE_P1, ARRAYSIZE(SFTM_A_BALROG_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_BALROG_PALETTE_P2, ARRAYSIZE(SFTM_A_BALROG_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_GUILE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_GUILE_PALETTE_P1, ARRAYSIZE(SFTM_A_GUILE_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_GUILE_PALETTE_P2, ARRAYSIZE(SFTM_A_GUILE_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_AKUMA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_AKUMA_PALETTE_P1, ARRAYSIZE(SFTM_A_AKUMA_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_AKUMA_PALETTE_P2, ARRAYSIZE(SFTM_A_AKUMA_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_KEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_KEN_PALETTE_P1, ARRAYSIZE(SFTM_A_KEN_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_KEN_PALETTE_P2, ARRAYSIZE(SFTM_A_KEN_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_CHUNLI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_CHUNLI_PALETTE_P1, ARRAYSIZE(SFTM_A_CHUNLI_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_CHUNLI_PALETTE_P2, ARRAYSIZE(SFTM_A_CHUNLI_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_BLADE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_BLADE_PALETTE_P1, ARRAYSIZE(SFTM_A_BLADE_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_BLADE_PALETTE_P2, ARRAYSIZE(SFTM_A_BLADE_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_KHYBER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_KHYBER_PALETTE_P1, ARRAYSIZE(SFTM_A_KHYBER_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_KHYBER_PALETTE_P2, ARRAYSIZE(SFTM_A_KHYBER_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_ARKANE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_ARKANE_PALETTE_P1, ARRAYSIZE(SFTM_A_ARKANE_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_ARKANE_PALETTE_P2, ARRAYSIZE(SFTM_A_ARKANE_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_F7_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_F7_PALETTE_P1, ARRAYSIZE(SFTM_A_F7_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_F7_PALETTE_P2, ARRAYSIZE(SFTM_A_F7_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_SAWADA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_SAWADA_PALETTE_P1, ARRAYSIZE(SFTM_A_SAWADA_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_SAWADA_PALETTE_P2, ARRAYSIZE(SFTM_A_SAWADA_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_SAGAT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SFTM_A_SAGAT_PALETTE_P1, ARRAYSIZE(SFTM_A_SAGAT_PALETTE_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SFTM_A_SAGAT_PALETTE_P2, ARRAYSIZE(SFTM_A_SAGAT_PALETTE_P2) },
};

const sDescTreeNode SFTM_A_UNITS[] =
{
    { L"Sagat", DESC_NODETYPE_TREE, (void*)SFTM_A_SAGAT_COLLECTION, ARRAYSIZE(SFTM_A_SAGAT_COLLECTION) },
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SFTM_A_RYU_COLLECTION, ARRAYSIZE(SFTM_A_RYU_COLLECTION) },
    { L"Vega", DESC_NODETYPE_TREE, (void*)SFTM_A_VEGA_COLLECTION, ARRAYSIZE(SFTM_A_VEGA_COLLECTION) },
    { L"E. Honda", DESC_NODETYPE_TREE, (void*)SFTM_A_HONDA_COLLECTION, ARRAYSIZE(SFTM_A_HONDA_COLLECTION) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)SFTM_A_ZANGIEF_COLLECTION, ARRAYSIZE(SFTM_A_ZANGIEF_COLLECTION) },
    { L"M. Bison", DESC_NODETYPE_TREE, (void*)SFTM_A_BISON_COLLECTION, ARRAYSIZE(SFTM_A_BISON_COLLECTION) },
    { L"Cammy", DESC_NODETYPE_TREE, (void*)SFTM_A_CAMMY_COLLECTION, ARRAYSIZE(SFTM_A_CAMMY_COLLECTION) },
    { L"Balrog", DESC_NODETYPE_TREE, (void*)SFTM_A_BALROG_COLLECTION, ARRAYSIZE(SFTM_A_BALROG_COLLECTION) },
    { L"Guile", DESC_NODETYPE_TREE, (void*)SFTM_A_GUILE_COLLECTION, ARRAYSIZE(SFTM_A_GUILE_COLLECTION) },
    { L"Akuma", DESC_NODETYPE_TREE, (void*)SFTM_A_AKUMA_COLLECTION, ARRAYSIZE(SFTM_A_AKUMA_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SFTM_A_KEN_COLLECTION, ARRAYSIZE(SFTM_A_KEN_COLLECTION) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SFTM_A_CHUNLI_COLLECTION, ARRAYSIZE(SFTM_A_CHUNLI_COLLECTION) },
    { L"Blade", DESC_NODETYPE_TREE, (void*)SFTM_A_BLADE_COLLECTION, ARRAYSIZE(SFTM_A_BLADE_COLLECTION) },
    { L"Khyber", DESC_NODETYPE_TREE, (void*)SFTM_A_KHYBER_COLLECTION, ARRAYSIZE(SFTM_A_KHYBER_COLLECTION) },
    { L"Arkane", DESC_NODETYPE_TREE, (void*)SFTM_A_ARKANE_COLLECTION, ARRAYSIZE(SFTM_A_ARKANE_COLLECTION) },
    { L"F7", DESC_NODETYPE_TREE, (void*)SFTM_A_F7_COLLECTION, ARRAYSIZE(SFTM_A_F7_COLLECTION) },
    { L"Sawada", DESC_NODETYPE_TREE, (void*)SFTM_A_SAWADA_COLLECTION, ARRAYSIZE(SFTM_A_SAWADA_COLLECTION) },
};

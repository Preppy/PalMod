#pragma once

// DBZEB uses two sets of palettes, the second is used in gameplay, unsure where the first is used
// marking the first set as (Unused?) until thats figured out, so the order of palettes will look backwards according to their location
//decent amount of character extras are missing from the main extras tree, used in DBZEB_DS_TRANSFORMATION_MAJINBUU, DBZEB_DS_TRANSFORMATION_DABURA & DBZEB_DS_TRANSFORMATION_MAJUUB

const std::vector<UINT16> DBZEB_3DS_IMGIDS_USED =
{
    indexDBZEB_Android18,                   // 0x2D
    indexDBZEB_Bardock,                     // 0x2E
    indexDBZEB_Beerus,                      // 0x2F
    indexDBZEB_Broly,                       // 0x30
    indexDBZEB_CaptainGinyu,                // 0x31
    indexDBZEB_Cell,                        // 0x32
    indexDBZEB_Frieza,                      // 0x33
    indexDBZEB_FutureTrunks,                // 0x34
    indexDBZEB_Gohan,                       // 0x35
    indexDBZEB_GohanSSJ1,                   // 0x36
    indexDBZEB_Goku,                        // 0x37
    indexDBZEB_GokuSSJ1,                    // 0x38
    indexDBZEB_GokuSSJG,                    // 0x39
    indexDBZEB_GokuSSJB,                    // 0x3A
    indexDBZEB_Gotenks,                     // 0x3B
    indexDBZEB_KidBuu,                      // 0x3C
    indexDBZEB_KidGohan,                    // 0x3D
    indexDBZEB_KidGohanSSJ2,                // 0x3E
    indexDBZEB_Krillin,                     // 0x3F
    indexDBZEB_MajinBuu,                    // 0x40
    indexDBZEB_Nappa,                       // 0x41
    indexDBZEB_Piccolo,                     // 0x42
    indexDBZEB_Raditz,                      // 0x43
    indexDBZEB_Vegeta,                      // 0x44
    indexDBZEB_VegetaSSJ1,                  // 0x45
    indexDBZEB_ZAssists,                    // 0x46
    indexDBZEB_Bonus,                       // 0x47
};

const sGame_PaletteDataset DBZEB_DS_BARDOCK_P1[] =
{
    { L"Bardock P1",            0xc9af20, 0xc9b320, indexDBZEB_Bardock, 0x00 },
    { L"Bardock P1 (Unused?)",  0xC981A0, 0xC985A0, indexDBZEB_Bardock, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_BARDOCK_P2[] =
{
    { L"Bardock P2",            0xc9b330, 0xc9b730, indexDBZEB_Bardock, 0x00 },
    { L"Bardock P2 (Unused?)",  0xC985B0, 0xC989B0, indexDBZEB_Bardock, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_BARDOCK_EXTRAS[] =
{
    { L"Extra 1",           0xc9b740, 0xc9bb40 }, //Extra 1
    { L"Extra 2",           0xc9bb50, 0xc9bf50 }, //Extra 2
    { L"Extra 3",           0xc9bf60, 0xc9c360 }, //Extra 3
    { L"Extra 4",           0xc9cb90, 0xc9cf90 }, //Extra 6
    { L"Extra 5",           0xc9d3b0, 0xc9d7b0 }, //Extra 8
    { L"Extra 6",           0xc9d7c0, 0xc9dbc0 }, //Extra 9

    { L"Extra 1 (Unused?)", 0xC989C0, 0xC98DC0 },
    { L"Extra 2 (Unused?)", 0xC98DD0, 0xC991D0 },
    { L"Extra 3 (Unused?)", 0xC991E0, 0xC995E0 },
    { L"Extra 4 (Unused?)", 0xC995F0, 0xC999F0 },
    { L"Extra 5 (Unused?)", 0xC99A00, 0xC99E00 },
    { L"Extra 6 (Unused?)", 0xC99E10, 0xC9A210 },
    { L"Extra 7 (Unused?)", 0xC9A220, 0xC9A620 },
    { L"Extra 8 (Unused?)", 0xC9A630, 0xC9AA30 },
    { L"Extra 9 (Unused?)", 0xC9AA40, 0xC9AE40 },
};

const sDescTreeNode DBZEB_DS_BARDOCK_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BARDOCK_P1,     ARRAYSIZE(DBZEB_DS_BARDOCK_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BARDOCK_P2,     ARRAYSIZE(DBZEB_DS_BARDOCK_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_BARDOCK_EXTRAS, ARRAYSIZE(DBZEB_DS_BARDOCK_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_BEERUS_P1[] =
{
    { L"Beerus P1",             0xe02750, 0xe02b50, indexDBZEB_Beerus, 0x00 },
    { L"Beerus P1 (Unused?)",   0xdff190, 0xdff590, indexDBZEB_Beerus, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_BEERUS_P2[] =
{
    { L"Beerus P2",             0xe02b60, 0xe02f60, indexDBZEB_Beerus, 0x00 },
    { L"Beerus P2 (Unused?)",   0xdff5a0, 0xdff9a0, indexDBZEB_Beerus, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_BEERUS_EXTRAS[] =
{
    { L"Extra 1",               0xe02f70, 0xe03370 }, //Extra 1
    { L"Extra 2",               0xe03380, 0xe03780 }, //Extra 2
    { L"Extra 3",               0xe03790, 0xe03b90 }, //Extra 3
    { L"Extra 4",               0xe03ba0, 0xe03fa0 }, //Extra 4
    { L"Extra 5",               0xe03fb0, 0xe043b0 }, //Extra 5
    { L"Extra 6",               0xe04be0, 0xe04fe0 }, //Extra 8
    { L"Extra 7",               0xe05400, 0xe05800 }, //Extra 10
    { L"Extra 8",               0xe05810, 0xe05c10 }, //Extra 11

    { L"Extra 1 (Unused?)",     0xdff9b0, 0xdffdb0 },
    { L"Extra 2 (Unused?)",     0xdffdc0, 0xe001c0 },
    { L"Extra 3 (Unused?)",     0xe001d0, 0xe005d0 },
    { L"Extra 4 (Unused?)",     0xe005e0, 0xe009e0 },
    { L"Extra 5 (Unused?)",     0xe009f0, 0xE00DF0 },
    { L"Extra 6 (Unused?)",     0xe00e00, 0xe01200 },
    { L"Extra 7 (Unused?)",     0xe01210, 0xe01610 },
    { L"Extra 8 (Unused?)",     0xe01620, 0xe01a20 },
    { L"Extra 9 (Unused?)",     0xe01a30, 0xe01e30 },
    { L"Extra 10 (Unused?)",    0xe01e40, 0xe02240 },
    { L"Extra 11 (Unused?)",    0xe02250, 0xe02650 },
};

const sDescTreeNode DBZEB_DS_BEERUS_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BEERUS_P1,      ARRAYSIZE(DBZEB_DS_BEERUS_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BEERUS_P2,      ARRAYSIZE(DBZEB_DS_BEERUS_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_BEERUS_EXTRAS,  ARRAYSIZE(DBZEB_DS_BEERUS_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_BROLY_P1[] =
{
    { L"Broly P1",              0x10e40c0, 0x10e44c0, indexDBZEB_Broly, 0x00 },
    { L"Broly P1 (Unused?)",    0x10e1340, 0x10e1740, indexDBZEB_Broly, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_BROLY_P2[] =
{
    { L"Broly P2",              0x10e44d0, 0x10e48d0, indexDBZEB_Broly, 0x00 },
    { L"Broly P2 (Unused?)",    0x10e1750, 0x10e1b50, indexDBZEB_Broly, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_BROLY_EXTRAS[] =
{
    { L"Extra 1",               0x10e48e0, 0x10e4ce0 }, //Extra 1
    { L"Extra 2",               0x10e4cf0, 0x10E50F0 }, //Extra 2
    { L"Extra 3",               0x10e5100, 0x10e5500 }, //Extra 3
    { L"Extra 4",               0x10e5d30, 0x10e6130 }, //Extra 6
    { L"Extra 5",               0x10e6550, 0x10e6950 }, //Extra 8
    { L"Extra 6",               0x10e6960, 0x10e6d60 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x10e1b60, 0x10e1f60 },
    { L"Extra 2 (Unused?)",     0x10e1f70, 0x10e2370 },
    { L"Extra 3 (Unused?)",     0x10e2380, 0x10e2780 },
    { L"Extra 4 (Unused?)",     0x10e2790, 0x10e2b90 },
    { L"Extra 5 (Unused?)",     0x10e2ba0, 0x10e2fa0 },
    { L"Extra 6 (Unused?)",     0x10e2fb0, 0x10e33b0 },
    { L"Extra 7 (Unused?)",     0x10e33c0, 0x10e37c0 },
    { L"Extra 8 (Unused?)",     0x10e37d0, 0x10e3bd0 },
    { L"Extra 9 (Unused?)",     0x10e3be0, 0x10e3fe0 },
};

const sDescTreeNode DBZEB_DS_BROLY_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BROLY_P1,      ARRAYSIZE(DBZEB_DS_BROLY_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BROLY_P2,      ARRAYSIZE(DBZEB_DS_BROLY_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_BROLY_EXTRAS,  ARRAYSIZE(DBZEB_DS_BROLY_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_KIDBUU_P1[] =
{
    { L"Kid Buu P1",            0x11c5570, 0x11C5970, indexDBZEB_KidBuu, 0x00 },
    { L"Kid Buu P1 (Unused?)",  0x11c27f0, 0x11C2BF0, indexDBZEB_KidBuu, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KIDBUU_P2[] =
{
    { L"Kid Buu P2",            0x11c5980, 0x11c5d80, indexDBZEB_KidBuu, 0x00 },
    { L"Kid Buu P2 (Unused?)",  0x11c2c00, 0x11c3000, indexDBZEB_KidBuu, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KIDBUU_EXTRAS[] =
{
    { L"Extra 1",               0x11c5d90, 0x11c6190 }, //Extra 1
    { L"Extra 2",               0x11c61a0, 0x11c65a0 }, //Extra 2
    { L"Extra 3",               0x11c65b0, 0x11c69b0 }, //Extra 3
    { L"Extra 4",               0x11c71e0, 0x11c75e0 }, //Extra 6
    { L"Extra 5",               0x11c7a00, 0x11c7e00 }, //Extra 8
    { L"Extra 6",               0x11c7e10, 0x11c8210 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x11c3010, 0x11c3410 },
    { L"Extra 2 (Unused?)",     0x11c3420, 0x11c3820 },
    { L"Extra 3 (Unused?)",     0x11c3830, 0x11c3c30 },
    { L"Extra 4 (Unused?)",     0x11c3c40, 0x11c4040 },
    { L"Extra 5 (Unused?)",     0x11c4050, 0x11c4450 },
    { L"Extra 6 (Unused?)",     0x11c4460, 0x11c4860 },
    { L"Extra 7 (Unused?)",     0x11c4870, 0x11c4c70 },
    { L"Extra 8 (Unused?)",     0x11c4c80, 0x11c5080 },
    { L"Extra 9 (Unused?)",     0x11c5090, 0x11c5490 },
};

const sDescTreeNode DBZEB_DS_KIDBUU_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDBUU_P1,      ARRAYSIZE(DBZEB_DS_KIDBUU_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDBUU_P2,      ARRAYSIZE(DBZEB_DS_KIDBUU_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDBUU_EXTRAS,  ARRAYSIZE(DBZEB_DS_KIDBUU_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_MAJINBUU_P1[] =
{
    { L"Majin Buu P1",             0x1469a30, 0x1469e30, indexDBZEB_MajinBuu, 0x00 },
    { L"Majin Buu P1 (Unused?)",   0x1466cb0, 0x14670b0, indexDBZEB_MajinBuu, 0x00 }
};

const sGame_PaletteDataset DBZEB_DS_MAJINBUU_P2[] =
{
    { L"Majin Buu P2",             0x1469e40, 0x146a240, indexDBZEB_MajinBuu, 0x00 },
    { L"Majin Buu P2 (Unused?)",   0x14670c0, 0x14674c0, indexDBZEB_MajinBuu, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_MAJINBUU_EXTRAS[] =
{
    { L"Extra 1",               0x146a250, 0x146a650 }, //Extra 1
    { L"Extra 2",               0x146a660, 0x146aa60 }, //Extra 2
    { L"Extra 3",               0x146aa70, 0x146ae70 }, //Extra 3
    { L"Extra 4",               0x146b6a0, 0x146baa0 }, //Extra 6
    { L"Extra 5",               0x146bec0, 0x146c2c0 }, //Extra 9
    { L"Extra 6",               0x146c2d0, 0x146c6d0 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x14674d0, 0x14678d0 },
    { L"Extra 2 (Unused?)",     0x14678e0, 0x1467ce0 },
    { L"Extra 3 (Unused?)",     0x1467cf0, 0x14680f0 },
    { L"Extra 4 (Unused?)",     0x1468100, 0x1468500 },
    { L"Extra 5 (Unused?)",     0x1468510, 0x1468910 },
    { L"Extra 6 (Unused?)",     0x1468920, 0x1468d20 },
    { L"Extra 7 (Unused?)",     0x1468d30, 0x1469130 },
    { L"Extra 9 (Unused?)",     0x1469140, 0x1469540 },
    { L"Extra 10 (Unused?)",    0x1469550, 0x1469950 },
};

const sGame_PaletteDataset DBZEB_DS_TRANSFORMATION_MAJINBUU[] =
{
    { L"Bardock",                       0xc9c370, 0xc9c770 },
    { L"Beerus",                        0xe043c0, 0xe047c0 },
    { L"Broly",                         0x10e5510, 0x10e5910 },
    { L"Kid Buu",                       0x11c69c0, 0x11c6dc0 },
    { L"Majin Buu",                     0x146ae80, 0x146b280 },
    { L"Cell",                          0x16886e0, 0x1688ae0 },
    { L"Krillin",                       0x1784e70, 0x1785270 },
    { L"Frieza",                        0x18c8b50, 0x18c8f50 },
    { L"Gohan",                         0x1a400d0, 0x1a404d0 },
    { L"Gohan (Super Saiyan)",          0x1bb8dc0, 0x1bb91c0 },
    { L"Goku (Super Saiyan God)",       0x1d2c9f0, 0x1d2cdf0 },
    { L"Goku",                          0x1ea03a0, 0x1ea07a0 },
    { L"Goku (Super Saiyan)",           0x2045900, 0x2045d00 },
    { L"Captian Ginyu",                 0x226a960, 0x226ad60 },
    { L"Kid Gohan",                     0x237a460, 0x237a860 },
    { L"Kid Gohan (Super Saiyan 2)",    0x24c6990, 0x24c6d90 },
    { L"Gotenks",                       0x25fa430, 0x25fa830 },
    { L"Android 18",                    0x2717850, 0x2717c50 },
    { L"Nappa",                         0x296b730, 0x296bb30 },
    { L"Piccolo",                       0x2b14270, 0x2b14670 },
    { L"Radtiz",                        0x2cd33c0, 0x2cd37c0 },
    { L"Goku (Super Saiyan Blue)",      0x2e6ed40, 0x2e6f140 },
    { L"Future Trunks",                 0x300ea50, 0x300ee50 },
    { L"Vegeta",				        0x315c190, 0x315c590 },
    { L"Vegeta (Super Saiyan)",	        0x32c4320, 0x32c4720 },
};

const sDescTreeNode DBZEB_DS_MAJINBUU_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_MAJINBUU_P1,                ARRAYSIZE(DBZEB_DS_MAJINBUU_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_MAJINBUU_P2,                ARRAYSIZE(DBZEB_DS_MAJINBUU_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_MAJINBUU_EXTRAS,            ARRAYSIZE(DBZEB_DS_MAJINBUU_EXTRAS) },
    { L"Majin Buu Transformations", DESC_NODETYPE_TREE, (void*)DBZEB_DS_TRANSFORMATION_MAJINBUU, ARRAYSIZE(DBZEB_DS_TRANSFORMATION_MAJINBUU) },  
};

const sGame_PaletteDataset DBZEB_DS_CELL_P1[] =
{
    { L"Cell P1",           0x1686e80, 0x1687280, indexDBZEB_Cell, 0x00 },
    { L"Cell P1 (Unused?)", 0x1683ce0, 0x16840e0, indexDBZEB_Cell, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_CELL_P2[] =
{
    { L"Cell P2",           0x1687290, 0x1687690, indexDBZEB_Cell, 0x00 },
    { L"Cell P2 (Unused?)", 0x16840f0, 0x16844f0, indexDBZEB_Cell, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_CELL_EXTRAS[] =
{
    { L"Extra 1",               0x16876a0, 0x1687aa0 }, //Extra 1
    { L"Extra 2",               0x1687ab0, 0x1687eb0 }, //Extra 2
    { L"Extra 3",               0x1687ec0, 0x16882c0 }, //Extra 3
    { L"Extra 4",               0x16882d0, 0x16886d0 }, //Extra 4
    { L"Extra 5",               0x1688f00, 0x1689300 }, //Extra 7
    { L"Extra 6",               0x1689720, 0x1689b20 }, //Extra 9
    { L"Extra 7",               0x1689b30, 0x1689f30 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x1684500, 0x1684900 },
    { L"Extra 2 (Unused?)",     0x1684910, 0x1684d10 },
    { L"Extra 3 (Unused?)",     0x1684d20, 0x1685120 },
    { L"Extra 4 (Unused?)",     0x1685130, 0x1685530 },
    { L"Extra 5 (Unused?)",     0x1685540, 0x1685940 },
    { L"Extra 6 (Unused?)",     0x1685950, 0x1685d50 },
    { L"Extra 7 (Unused?)",     0x1685d60, 0x1686160 },
    { L"Extra 8 (Unused?)",     0x1686170, 0x1686570 },
    { L"Extra 9 (Unused?)",     0x1686580, 0x1686980 },
    { L"Extra 10 (Unused?)",    0x1686990, 0x1686d90 },
};

const sDescTreeNode DBZEB_DS_CELL_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_CELL_P1,      ARRAYSIZE(DBZEB_DS_CELL_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_CELL_P2,      ARRAYSIZE(DBZEB_DS_CELL_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_CELL_EXTRAS,  ARRAYSIZE(DBZEB_DS_CELL_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_KRILLIN_P1[] =
{
    { L"Krillin P1",            0x1783610, 0x1783a10, indexDBZEB_Krillin, 0x00 },
    { L"Krillin P1 (Unused?)",  0x1780470, 0x1780870, indexDBZEB_Krillin, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KRILLIN_P2[] =
{
    { L"Krillin P2",            0x1783a20, 0x1783e20, indexDBZEB_Krillin, 0x00 },
    { L"Krillin P2 (Unused?)",  0x1780880, 0x1780c80, indexDBZEB_Krillin, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KRILLIN_EXTRAS[] =
{
    { L"Extra 1",               0x1783e30, 0x1784230 }, //Extra 1
    { L"Extra 2",               0x1784240, 0x1784640 }, //Extra 2
    { L"Extra 3",               0x1784650, 0x1784a50 }, //Extra 3
    { L"Extra 4",               0x1784a60, 0x1784e60 }, //Extra 4
    { L"Extra 5",               0x1785690, 0x1785a90 }, //Extra 7
    { L"Extra 6",               0x1785eb0, 0x17862b0 }, //Extra 9
    { L"Extra 7",               0x17862c0, 0x17866c0 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x1780c90, 0x1781090 },
    { L"Extra 2 (Unused?)",     0x17810a0, 0x17814a0 },
    { L"Extra 3 (Unused?)",     0x17814b0, 0x17818b0 },
    { L"Extra 4 (Unused?)",     0x17818c0, 0x1781cc0 },
    { L"Extra 5 (Unused?)",     0x1781cd0, 0x17820d0 },
    { L"Extra 6 (Unused?)",     0x17820e0, 0x17824e0 },
    { L"Extra 7 (Unused?)",     0x17824f0, 0x17828f0 },
    { L"Extra 8 (Unused?)",     0x1782900, 0x1782d00 },
    { L"Extra 9 (Unused?)",     0x1782d10, 0x1783110 },
    { L"Extra 10 (Unused?)",    0x1783120, 0x1783520 },
};

const sDescTreeNode DBZEB_DS_KRILLIN_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KRILLIN_P1,      ARRAYSIZE(DBZEB_DS_KRILLIN_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KRILLIN_P2,      ARRAYSIZE(DBZEB_DS_KRILLIN_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_KRILLIN_EXTRAS,  ARRAYSIZE(DBZEB_DS_KRILLIN_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_FRIEZA_P1[] =
{
    { L"Frieza P1",             0x18c6ee0, 0x18c72e0, indexDBZEB_Frieza, 0x00 },
    { L"Frieza P1 (Unused?)",   0x18c3920, 0x18c3d20, indexDBZEB_Frieza, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_FRIEZA_P2[] =
{
    { L"Frieza P2",             0x18c72f0, 0x18c76f0, indexDBZEB_Frieza, 0x00 },
    { L"Frieza P2 (Unused?)",   0x18c3d30, 0x18c4130, indexDBZEB_Frieza, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_FRIEZA_EXTRAS[] =
{
    { L"Extra 1",               0x18c7700, 0x18c7b00 }, //Extra 1
    { L"Extra 2",               0x18c7b10, 0x18c7f10 }, //Extra 2
    { L"Extra 3",               0x18c7f20, 0x18c8320, indexDBZEB_Frieza, 0x03 }, //Extra 3
    { L"Extra 4",               0x18c8740, 0x18c8b40 }, //Extra 5
    { L"Extra 5",               0x18c8330, 0x18c8730 }, //Extra 4
    { L"Extra 6",               0x18c9370, 0x18c9770 }, //Extra 8
    { L"Extra 7",               0x18c9b90, 0x18c9f90 }, //Extra 10
    { L"Extra 8",               0x18c9fa0, 0x18ca3a0 }, //Extra 11

    { L"Extra 1 (Unused?)",     0x18c4140, 0x18c4540 },
    { L"Extra 2 (Unused?)",     0x18c4550, 0x18c4950 },
    { L"Extra 3 (Unused?)",     0x18c4960, 0x18c4d60, indexDBZEB_Frieza, 0x03 },
    { L"Extra 4 (Unused?)",     0x18c4d70, 0x18c5170 },
    { L"Extra 5 (Unused?)",     0x18c5180, 0x18c5580 },
    { L"Extra 6 (Unused?)",     0x18c5590, 0x18c5990 },
    { L"Extra 7 (Unused?)",     0x18c59a0, 0x18c5da0 },
    { L"Extra 8 (Unused?)",     0x18c5db0, 0x18c61b0 },
    { L"Extra 9 (Unused?)",     0x18c61c0, 0x18c65c0 },
    { L"Extra 10 (Unused?)",    0x18c65d0, 0x18c69d0 },
    { L"Extra 11 (Unused?)",    0x18c69e0, 0x18c6de0 },
};

const sDescTreeNode DBZEB_DS_FRIEZA_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_FRIEZA_P1,      ARRAYSIZE(DBZEB_DS_FRIEZA_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_FRIEZA_P2,      ARRAYSIZE(DBZEB_DS_FRIEZA_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_FRIEZA_EXTRAS,  ARRAYSIZE(DBZEB_DS_FRIEZA_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_GOHAN_P1[] =
{
    { L"Gohan P1",              0x1a3e870, 0x1a3ec70, indexDBZEB_Gohan, 0x00 },
    { L"Gohan P1 (Unused?)",    0x1a3b6d0, 0x1a3bad0, indexDBZEB_Gohan, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOHAN_P2[] =
{
    { L"Gohan P2",              0x1a3ec80, 0x1a3f080, indexDBZEB_Gohan, 0x00 },
    { L"Gohan P2 (Unused?)",    0x1a3bae0, 0x1a3bee0, indexDBZEB_Gohan, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOHAN_EXTRAS[] =
{
    { L"Extra 1",               0x1a3f090, 0x1a3f490 }, //Extra 1
    { L"Extra 2",               0x1a3f4a0, 0x1a3f8a0 }, //Extra 2
    { L"Extra 3",               0x1a3f8b0, 0x1a3fcb0 }, //Extra 3
    { L"Extra 4",               0x1a3fcc0, 0x1a400c0 }, //Extra 4
    { L"Extra 5",               0x1a408f0, 0x1a40cf0 }, //Extra 7
    { L"Extra 6",               0x1a41110, 0x1a41510 }, //Extra 9
    { L"Extra 7",               0x1a41520, 0x1a41920 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x1a3bef0, 0x1a3c2f0 },
    { L"Extra 2 (Unused?)",     0x1a3c300, 0x1a3c700 },
    { L"Extra 3 (Unused?)",     0x1a3c710, 0x1a3cb10 },
    { L"Extra 4 (Unused?)",     0x1a3cb20, 0x1a3cf20 },
    { L"Extra 5 (Unused?)",     0x1a3cf30, 0x1a3d330 },
    { L"Extra 6 (Unused?)",     0x1a3d340, 0x1a3d740 },
    { L"Extra 7 (Unused?)",     0x1a3d750, 0x1a3db50 },
    { L"Extra 8 (Unused?)",     0x1a3db60, 0x1a3df60 },
    { L"Extra 9 (Unused?)",     0x1a3df70, 0x1a3e370 },
    { L"Extra 10 (Unused?)",    0x1a3e380, 0x1a3e780 },
};

const sDescTreeNode DBZEB_DS_GOHAN_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHAN_P1,      ARRAYSIZE(DBZEB_DS_GOHAN_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHAN_P2,      ARRAYSIZE(DBZEB_DS_GOHAN_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHAN_EXTRAS,  ARRAYSIZE(DBZEB_DS_GOHAN_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_GOHANSS_P1[] =
{
    { L"Gohan (Super Saiyan) P1",           0x1bb7560, 0x1bb7960, indexDBZEB_GohanSSJ1, 0x00 },
    { L"Gohan (Super Saiyan) P1 (Unused?)", 0x1bb43c0, 0x1bb47c0, indexDBZEB_GohanSSJ1, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOHANSS_P2[] =
{
    { L"Gohan (Super Saiyan) P2",           0x1bb7970, 0x1bb7d70, indexDBZEB_GohanSSJ1, 0x00 },
    { L"Gohan (Super Saiyan) P2 (Unused?)", 0x1bb47d0, 0x1bb4bd0, indexDBZEB_GohanSSJ1, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOHANSS_EXTRAS[] =
{
    { L"Extra 1",               0x1bb7d80, 0x1bb8180 }, //Extra 1
    { L"Extra 2",               0x1bb8190, 0x1bb8590 }, //Extra 2
    { L"Extra 3",               0x1bb85a0, 0x1bb89a0 }, //Extra 3
    { L"Extra 4",               0x1bb89b0, 0x1bb8db0 }, //Extra 4
    { L"Extra 5",               0x1bb95e0, 0x1bb99e0 }, //Extra 7
    { L"Extra 6",               0x1bb9e00, 0x1bba200 }, //Extra 9
    { L"Extra 7",               0x1bba210, 0x1bba610 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x1bb4be0, 0x1bb4fe0 },
    { L"Extra 2 (Unused?)",     0x1bb4ff0, 0x1bb53f0 },
    { L"Extra 3 (Unused?)",     0x1bb5400, 0x1bb5800 },
    { L"Extra 4 (Unused?)",     0x1bb5810, 0x1bb5c10 },
    { L"Extra 5 (Unused?)",     0x1bb5c20, 0x1bb6020 },
    { L"Extra 6 (Unused?)",     0x1bb6030, 0x1bb6430 },
    { L"Extra 7 (Unused?)",     0x1bb6440, 0x1bb6840 },
    { L"Extra 8 (Unused?)",     0x1bb6850, 0x1bb6c50 },
    { L"Extra 9 (Unused?)",     0x1bb6c60, 0x1bb7060 },
    { L"Extra 10 (Unused?)",    0x1bb7070, 0x1bb7470 },
};

const sDescTreeNode DBZEB_DS_GOHANSS_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHANSS_P1,      ARRAYSIZE(DBZEB_DS_GOHANSS_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHANSS_P2,      ARRAYSIZE(DBZEB_DS_GOHANSS_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHANSS_EXTRAS,  ARRAYSIZE(DBZEB_DS_GOHANSS_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSSG_P1[] =
{
    { L"Goku (Super Saiyan God) P1",           0x1d2b5a0, 0x1d2b9a0, indexDBZEB_GokuSSJG, 0x00 },
    { L"Goku (Super Saiyan God) P1 (Unused?)", 0x1d28820, 0x1d28c20, indexDBZEB_GokuSSJG, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSSG_P2[] =
{
    { L"Goku (Super Saiyan God) P2",           0x1d2b9b0, 0x1d2bdb0, indexDBZEB_GokuSSJG, 0x00 },
    { L"Goku (Super Saiyan God) P2 (Unused?)", 0x1d28c30, 0x1d29030, indexDBZEB_GokuSSJG, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSSG_EXTRAS[] =
{
    { L"Extra 1",               0x1d2bdc0, 0x1d2c1c0 }, //Extra 1
    { L"Extra 2",               0x1d2c1d0, 0x1d2c5d0 }, //Extra 2
    { L"Extra 3",               0x1d2c5e0, 0x1d2c9e0 }, //Extra 3
    { L"Extra 4",               0x1d2d210, 0x1d2d610 }, //Extra 6
    { L"Extra 5",               0x1d2da30, 0x1d2de30 }, //Extra 8
    { L"Extra 6",               0x1d2de40, 0x1d2e240 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x1d29040, 0x1d29440 },
    { L"Extra 2 (Unused?)",     0x1d29450, 0x1d29850 },
    { L"Extra 3 (Unused?)",     0x1d29860, 0x1d29c60 },
    { L"Extra 4 (Unused?)",     0x1d29c70, 0x1d2a070 },
    { L"Extra 5 (Unused?)",     0x1d2a080, 0x1d2a480 },
    { L"Extra 6 (Unused?)",     0x1d2a490, 0x1d2a890 },
    { L"Extra 7 (Unused?)",     0x1d2a8a0, 0x1d2aca0 },
    { L"Extra 8 (Unused?)",     0x1d2acb0, 0x1d2b0b0 },
    { L"Extra 9 (Unused?)",     0x1d2b0c0, 0x1d2b4c0 },
};

const sDescTreeNode DBZEB_DS_GOKUSSG_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSG_P1,      ARRAYSIZE(DBZEB_DS_GOKUSSG_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSG_P2,      ARRAYSIZE(DBZEB_DS_GOKUSSG_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSG_EXTRAS,  ARRAYSIZE(DBZEB_DS_GOKUSSG_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_GOKU_P1[] =
{
    { L"Goku P1",           0x1e9eb40, 0x1e9ef40, indexDBZEB_Goku, 0x00 },
    { L"Goku P1 (Unused?)", 0x1e9b9a0, 0x1e9bda0, indexDBZEB_Goku, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKU_P2[] =
{
    { L"Goku P2",           0x1e9ef50, 0x1e9f350, indexDBZEB_Goku, 0x00 },
    { L"Goku P2 (Unused?)", 0x1e9bdb0, 0x1e9c1b0, indexDBZEB_Goku, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKU_EXTRAS[] =
{
    { L"Extra 1",               0x1e9f360, 0x1e9f760 }, //Extra 1
    { L"Extra 2",               0x1e9f770, 0x1e9fb70 }, //Extra 2
    { L"Extra 3",               0x1e9fb80, 0x1e9ff80 }, //Extra 3
    { L"Extra 4",               0x1e9ff90, 0x1ea0390 }, //Extra 4
    { L"Extra 5",               0x1ea0bc0, 0x1ea0fc0 }, //Extra 7
    { L"Extra 6",               0x1ea0fd0, 0x1ea13d0 }, //Extra 9
    { L"Extra 7",               0x1ea17f0, 0x1ea1bf0 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x1e9c1c0, 0x1e9c5c0 },
    { L"Extra 2 (Unused?)",     0x1e9c5d0, 0x1e9c9d0 },
    { L"Extra 3 (Unused?)",     0x1e9c9e0, 0x1e9cde0 },
    { L"Extra 4 (Unused?)",     0x1e9cdf0, 0x1e9d1f0 },
    { L"Extra 5 (Unused?)",     0x1e9d200, 0x1e9d600 },
    { L"Extra 6 (Unused?)",     0x1e9d610, 0x1e9da10 },
    { L"Extra 7 (Unused?)",     0x1e9da20, 0x1e9de20 },
    { L"Extra 8 (Unused?)",     0x1e9de30, 0x1e9e230 },
    { L"Extra 9 (Unused?)",     0x1e9e240, 0x1e9e640 },
    { L"Extra 10 (Unused?)",    0x1e9e650, 0x1e9ea50 },
};

const sDescTreeNode DBZEB_DS_GOKU_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKU_P1,      ARRAYSIZE(DBZEB_DS_GOKU_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKU_P2,      ARRAYSIZE(DBZEB_DS_GOKU_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKU_EXTRAS,  ARRAYSIZE(DBZEB_DS_GOKU_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSS_P1[] =
{
    { L"Goku (Super Saiyan) P1",            0x20444b0, 0x20448b0, indexDBZEB_GokuSSJ1, 0x00 },
    { L"Goku (Super Saiyan) P1 (Unused?)",  0x2041730, 0x2041b30, indexDBZEB_GokuSSJ1, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSS_P2[] =
{
    { L"Goku (Super Saiyan) P2",            0x20448c0, 0x2044cc0, indexDBZEB_GokuSSJ1, 0x00 },
    { L"Goku (Super Saiyan) P2 (Unused?)",  0x2041b40, 0x2041f40, indexDBZEB_GokuSSJ1, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSS_EXTRAS[] =
{
    { L"Extra 1",               0x2044cd0, 0x20450d0 }, //Extra 1
    { L"Extra 2",               0x20450e0, 0x20454e0 }, //Extra 2
    { L"Extra 3",               0x20454f0, 0x20458f0 }, //Extra 3
    { L"Extra 4",               0x2046120, 0x2046520 }, //Extra 6
    { L"Extra 5",               0x2046940, 0x2046d40 }, //Extra 8
    { L"Extra 6",               0x2046d50, 0x2047150 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x2041f50, 0x2042350 },
    { L"Extra 2 (Unused?)",     0x2042360, 0x2042760 },
    { L"Extra 3 (Unused?)",     0x2042770, 0x2042b70 },
    { L"Extra 4 (Unused?)",     0x2042b80, 0x2042f80 },
    { L"Extra 5 (Unused?)",     0x2042f90, 0x2043390 },
    { L"Extra 6 (Unused?)",     0x20433a0, 0x20437a0 },
    { L"Extra 7 (Unused?)",     0x20437b0, 0x2043bb0 },
    { L"Extra 8 (Unused?)",     0x2043bc0, 0x2043fc0 },
    { L"Extra 9 (Unused?)",     0x2043fd0, 0x20443d0 },
};

const sDescTreeNode DBZEB_DS_GOKUSS_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSS_P1,      ARRAYSIZE(DBZEB_DS_GOKUSS_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSS_P2,      ARRAYSIZE(DBZEB_DS_GOKUSS_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSS_EXTRAS,  ARRAYSIZE(DBZEB_DS_GOKUSS_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_CAPGINYU_P1[] =
{
    { L"Captain Ginyu P1",              0x2268cf0, 0x22690f0, indexDBZEB_CaptainGinyu, 0x00 },
    { L"Captain Ginyu P1 (Unused?)",    0x2265730, 0x2265b30, indexDBZEB_CaptainGinyu, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_CAPGINYU_P2[] =
{
    { L"Captain Ginyu P2",              0x2269100, 0x2269500, indexDBZEB_CaptainGinyu, 0x00 },
    { L"Captain Ginyu P2 (Unused?)",    0x2265b40, 0x2265f40, indexDBZEB_CaptainGinyu, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_CAPGINYU_EXTRAS[] =
{
    { L"Extra 1",               0x2269510, 0x2269910 }, //Extra 1
    { L"Extra 2",               0x2269920, 0x2269d20 }, //Extra 2
    { L"Extra 3",               0x2269d30, 0x226a130 }, //Extra 3
    { L"Extra 4",               0x226a140, 0x226a540 }, //Extra 4
    { L"Extra 5",               0x226a550, 0x226a950 }, //Extra 5
    { L"Extra 6",               0x226b180, 0x226b580 }, //Extra 8
    { L"Extra 7",               0x226b9a0, 0x226bda0 }, //Extra 10
    { L"Extra 8",               0x226bdb0, 0x226c1b0 }, //Extra 11

    { L"Extra 1 (Unused?)",     0x2265f50, 0x2266350 },
    { L"Extra 2 (Unused?)",     0x2266360, 0x2266760 },
    { L"Extra 3 (Unused?)",     0x2266770, 0x2266b70 },
    { L"Extra 4 (Unused?)",     0x2266b80, 0x2266f80 },
    { L"Extra 5 (Unused?)",     0x2266f90, 0x2267390 },
    { L"Extra 6 (Unused?)",     0x22673a0, 0x22677a0 },
    { L"Extra 7 (Unused?)",     0x22677b0, 0x2267bb0 },
    { L"Extra 8 (Unused?)",     0x2267bc0, 0x2267fc0 },
    { L"Extra 9 (Unused?)",     0x2267fd0, 0x22683d0 },
    { L"Extra 10 (Unused?)",    0x22683e0, 0x22687e0 },
    { L"Extra 11 (Unused?)",    0x22687f0, 0x2268bf0 },
};

const sDescTreeNode DBZEB_DS_CAPGINYU_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_CAPGINYU_P1,      ARRAYSIZE(DBZEB_DS_CAPGINYU_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_CAPGINYU_P2,      ARRAYSIZE(DBZEB_DS_CAPGINYU_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_CAPGINYU_EXTRAS,  ARRAYSIZE(DBZEB_DS_CAPGINYU_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_KIDGOHAN_P1[] =
{
    { L"Kid Gohan P1",             0x2379010, 0x2379410, indexDBZEB_KidGohan, 0x00 },
    { L"Kid Gohan P1 (Unused?)",   0x2376290, 0x2376690, indexDBZEB_KidGohan, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KIDGOHAN_P2[] =
{
    { L"Kid Gohan P2",             0x2379420, 0x2379820, indexDBZEB_KidGohan, 0x00 },
    { L"Kid Gohan P2 (Unused?)",   0x23766a0, 0x2376aa0, indexDBZEB_KidGohan, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KIDGOHAN_EXTRAS[] =
{
    { L"Extra 1",               0x2379830, 0x2379c30 }, //Extra 1
    { L"Extra 2",               0x2379c40, 0x237a040 }, //Extra 2
    { L"Extra 3",               0x237a050, 0x237a450 }, //Extra 3
    { L"Extra 4",               0x237ac80, 0x237b080 }, //Extra 6
    { L"Extra 5",               0x237b4a0, 0x237b8a0 }, //Extra 8
    { L"Extra 6",               0x237b8b0, 0x237bcb0 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x2376ab0, 0x2376eb0 },
    { L"Extra 2 (Unused?)",     0x2376ec0, 0x23772c0 },
    { L"Extra 3 (Unused?)",     0x23772d0, 0x23776d0 },
    { L"Extra 4 (Unused?)",     0x23776e0, 0x2377ae0 },
    { L"Extra 5 (Unused?)",     0x2377af0, 0x2377ef0 },
    { L"Extra 6 (Unused?)",     0x2377f00, 0x2378300 },
    { L"Extra 7 (Unused?)",     0x2378310, 0x2378710 },
    { L"Extra 8 (Unused?)",     0x2378720, 0x2378b20 },
    { L"Extra 9 (Unused?)",     0x2378b30, 0x2378f30 },
};

const sDescTreeNode DBZEB_DS_KIDGOHAN_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHAN_P1,      ARRAYSIZE(DBZEB_DS_KIDGOHAN_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHAN_P2,      ARRAYSIZE(DBZEB_DS_KIDGOHAN_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHAN_EXTRAS,  ARRAYSIZE(DBZEB_DS_KIDGOHAN_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_KIDGOHANSS2_P1[] =
{
    { L"Kid Gohan (Super Saiyan 2) P1",            0x24c4d20, 0x24c5120, indexDBZEB_KidGohan, 0x00 },
    { L"Kid Gohan (Super Saiyan 2) P1 (Unused?)",  0x24c1760, 0x24c1b60, indexDBZEB_KidGohan, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KIDGOHANSS2_P2[] =
{
    { L"Kid Gohan (Super Saiyan 2) P2",            0x24c5130, 0x24c5530, indexDBZEB_KidGohan, 0x00 },
    { L"Kid Gohan (Super Saiyan 2) P2 (Unused?)",  0x24c1b70, 0x24c1f70, indexDBZEB_KidGohan, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_KIDGOHANSS2_EXTRAS[] =
{
    { L"Extra 1",               0x24c5540, 0x24c5940 }, //Extra 1
    { L"Extra 2",               0x24c5950, 0x24c5d50 }, //Extra 2
    { L"Extra 3",               0x24c5d60, 0x24c6160 }, //Extra 3
    { L"Extra 4",               0x24c6170, 0x24c6570 }, //Extra 4
    { L"Extra 5",               0x24c6580, 0x24c6980 }, //Extra 5
    { L"Extra 6",               0x24c71b0, 0x24c75b0 }, //Extra 8
    { L"Extra 7",               0x24c79d0, 0x24c7dd0 }, //Extra 10
    { L"Extra 8",               0x24c7de0, 0x24c81e0 }, //Extra 11

    { L"Extra 1 (Unused?)",     0x24c1f80, 0x24c2380 },
    { L"Extra 2 (Unused?)",     0x24c2390, 0x24c2790 },
    { L"Extra 3 (Unused?)",     0x24c27a0, 0x24c2ba0 },
    { L"Extra 4 (Unused?)",     0x24c2bb0, 0x24c2fb0 },
    { L"Extra 5 (Unused?)",     0x24c2fc0, 0x24c33c0 },
    { L"Extra 6 (Unused?)",     0x24c33d0, 0x24c37d0 },
    { L"Extra 7 (Unused?)",     0x24c37e0, 0x24c3be0 },
    { L"Extra 8 (Unused?)",     0x24c3bf0, 0x24c3ff0 },
    { L"Extra 9 (Unused?)",     0x24c4000, 0x24c4400 },
    { L"Extra 10 (Unused?)",    0x24c4410, 0x24c4810 },
    { L"Extra 11 (Unused?)",    0x24c4820, 0x24c4c20 },
};

const sDescTreeNode DBZEB_DS_KIDGOHANSS2_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHANSS2_P1,      ARRAYSIZE(DBZEB_DS_KIDGOHANSS2_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHANSS2_P2,      ARRAYSIZE(DBZEB_DS_KIDGOHANSS2_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHANSS2_EXTRAS,  ARRAYSIZE(DBZEB_DS_KIDGOHANSS2_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_GOTENKS_P1[] =
{
    { L"Gotenks P1",            0x25f87c0, 0x25f8bc0, indexDBZEB_Gotenks, 0x00 },
    { L"Gotenks P1 (Unused?)",  0x25f5200, 0x25f5600, indexDBZEB_Gotenks, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOTENKS_P2[] =
{
    { L"Gotenks P2",            0x25f8bd0, 0x25f8fd0, indexDBZEB_Gotenks, 0x00 },
    { L"Gotenks P2 (Unused?)",  0x25f5610, 0x25f5a10, indexDBZEB_Gotenks, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOTENKS_EXTRAS[] =
{
    { L"Extra 1",               0x25f8fe0, 0x25f93e0 }, //Extra 1
    { L"Extra 2",               0x25f93f0, 0x25f97f0 }, //Extra 2
    { L"Extra 3",               0x25f9800, 0x25f9c00 }, //Extra 3
    { L"Extra 4",               0x25f9c10, 0x25fa010 }, //Extra 4
    { L"Extra 5",               0x25fa020, 0x25fa420 }, //Extra 5
    { L"Extra 6",               0x25fac50, 0x25fb050 }, //Extra 8
    { L"Extra 7",               0x25fb470, 0x25fb870 }, //Extra 10
    { L"Extra 8",               0x25fb880, 0x25fbc80 }, //Extra 11

    { L"Extra 1 (Unused?)",     0x25f5a20, 0x25f5e20 },
    { L"Extra 2 (Unused?)",     0x25f5e30, 0x25f6230 },
    { L"Extra 3 (Unused?)",     0x25f6240, 0x25f6640 },
    { L"Extra 4 (Unused?)",     0x25f6650, 0x25f6a50 },
    { L"Extra 5 (Unused?)",     0x25f6a60, 0x25f6e60 },
    { L"Extra 6 (Unused?)",     0x25f6e70, 0x25f7270 },
    { L"Extra 7 (Unused?)",     0x25f7280, 0x25f7680 },
    { L"Extra 8 (Unused?)",     0x25f7690, 0x25f7a90 },
    { L"Extra 9 (Unused?)",     0x25f7aa0, 0x25f7ea0 },
    { L"Extra 10 (Unused?)",    0x25f7eb0, 0x25f82b0 },
    { L"Extra 11 (Unused?)",    0x25f82c0, 0x25f86c0 },
};

const sDescTreeNode DBZEB_DS_GOTENKS_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOTENKS_P1,      ARRAYSIZE(DBZEB_DS_GOTENKS_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOTENKS_P2,      ARRAYSIZE(DBZEB_DS_GOTENKS_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOTENKS_EXTRAS,  ARRAYSIZE(DBZEB_DS_GOTENKS_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_ANDROID18_P1[] =
{
    { L"Android 18 P1",             0x2715ff0, 0x27163f0, indexDBZEB_Android18, 0x00 },
    { L"Android 18 P1 (Unused?)",   0x2712e50, 0x2713250, indexDBZEB_Android18, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_ANDROID18_P2[] =
{
    { L"Android 18 P2",             0x2716400, 0x2716800, indexDBZEB_Android18, 0x00 },
    { L"Android 18 P2 (Unused?)",   0x2713260, 0x2713660, indexDBZEB_Android18, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_ANDROID18_EXTRAS[] =
{
    { L"Extra 1",               0x2716810, 0x2716c10 }, //Extra 1
    { L"Extra 2",               0x2716c20, 0x2717020 }, //Extra 2
    { L"Extra 3",               0x2717030, 0x2717430 }, //Extra 3
    { L"Extra 4",               0x2717440, 0x2717840 }, //Extra 4
    { L"Extra 5",               0x2718070, 0x2718470 }, //Extra 7
    { L"Extra 6",               0x2718890, 0x2718c90 }, //Extra 9
    { L"Extra 7",               0x2718ca0, 0x27190a0 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x2713670, 0x2713a70 },
    { L"Extra 2 (Unused?)",     0x2713a80, 0x2713e80 },
    { L"Extra 3 (Unused?)",     0x2713e90, 0x2714290 },
    { L"Extra 4 (Unused?)",     0x27142a0, 0x27146a0 },
    { L"Extra 5 (Unused?)",     0x27146b0, 0x2714ab0 },
    { L"Extra 6 (Unused?)",     0x2714ac0, 0x2714ec0 },
    { L"Extra 7 (Unused?)",     0x2714ed0, 0x27152d0 },
    { L"Extra 8 (Unused?)",     0x27152e0, 0x27156e0 },
    { L"Extra 9 (Unused?)",     0x27156f0, 0x2715af0 },
    { L"Extra 10 (Unused?)",    0x2715b00, 0x2715f00 },
};

const sDescTreeNode DBZEB_DS_ANDROID18_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_ANDROID18_P1,      ARRAYSIZE(DBZEB_DS_ANDROID18_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_ANDROID18_P2,      ARRAYSIZE(DBZEB_DS_ANDROID18_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_ANDROID18_EXTRAS,  ARRAYSIZE(DBZEB_DS_ANDROID18_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_NAPPA_P1[] =
{
    { L"Nappa P1",              0x296a2e0, 0x296a6e0, indexDBZEB_Nappa, 0x00 },
    { L"Nappa P1 (Unused?)",    0x2967560, 0x2967960, indexDBZEB_Nappa, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_NAPPA_P2[] =
{
    { L"Nappa P2",              0x296a6f0, 0x296aaf0, indexDBZEB_Nappa, 0x00 },
    { L"Nappa P2 (Unused?)",    0x2967970, 0x2967d70, indexDBZEB_Nappa, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_NAPPA_EXTRAS[] =
{
    { L"Extra 1",               0x296ab00, 0x296af00 }, //Extra 1
    { L"Extra 2",               0x296af10, 0x296b310 }, //Extra 2
    { L"Extra 3",               0x296b320, 0x296b720 }, //Extra 3
    { L"Extra 4",               0x296bf50, 0x296c350 }, //Extra 6
    { L"Extra 5",               0x296c770, 0x296cb70 }, //Extra 8
    { L"Extra 6",               0x296cb80, 0x296cf80 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x2967d80, 0x2968180 },
    { L"Extra 2 (Unused?)",     0x2968190, 0x2968590 },
    { L"Extra 3 (Unused?)",     0x29685a0, 0x29689a0 },
    { L"Extra 4 (Unused?)",     0x29689b0, 0x2968db0 },
    { L"Extra 5 (Unused?)",     0x2968dc0, 0x29691c0 },
    { L"Extra 6 (Unused?)",     0x29691d0, 0x29695d0 },
    { L"Extra 7 (Unused?)",     0x29695e0, 0x29699e0 },
    { L"Extra 8 (Unused?)",     0x29699f0, 0x2969df0 },
    { L"Extra 9 (Unused?)",     0x2969e00, 0x296a200 },
};

const sDescTreeNode DBZEB_DS_NAPPA_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_NAPPA_P1,      ARRAYSIZE(DBZEB_DS_NAPPA_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_NAPPA_P2,      ARRAYSIZE(DBZEB_DS_NAPPA_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_NAPPA_EXTRAS,  ARRAYSIZE(DBZEB_DS_NAPPA_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_PICCOLO_P1[] =
{
    { L"Piccolo P1",            0x2b12e20, 0x2b13220, indexDBZEB_Piccolo, 0x00 },
    { L"Piccolo P1 (Unused?)",  0x2b100a0, 0x2b104a0, indexDBZEB_Piccolo, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_PICCOLO_P2[] =
{
    { L"Piccolo P2",            0x2b13230, 0x2b13630, indexDBZEB_Piccolo, 0x00 },
    { L"Piccolo P2 (Unused?)",  0x2b104b0, 0x2b108b0, indexDBZEB_Piccolo, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_PICCOLO_EXTRAS[] =
{
    { L"Extra 1",               0x2b13640, 0x2b13a40 }, //Extra 1
    { L"Extra 2",               0x2b13a50, 0x2b13e50 }, //Extra 2
    { L"Extra 3",               0x2b13e60, 0x2b14260 }, //Extra 3
    { L"Extra 4",               0x2b14a90, 0x2b14e90 }, //Extra 6
    { L"Extra 5",               0x2b152b0, 0x2b156b0 }, //Extra 8
    { L"Extra 6",               0x2b156c0, 0x2b15ac0 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x2b108c0, 0x2b10cc0 },
    { L"Extra 2 (Unused?)",     0x2b10cd0, 0x2b110d0 },
    { L"Extra 3 (Unused?)",     0x2b110e0, 0x2b114e0 },
    { L"Extra 4 (Unused?)",     0x2b114f0, 0x2b118f0 },
    { L"Extra 5 (Unused?)",     0x2b11900, 0x2b11d00 },
    { L"Extra 6 (Unused?)",     0x2b11d10, 0x2b12110 },
    { L"Extra 7 (Unused?)",     0x2b12120, 0x2b12520 },
    { L"Extra 8 (Unused?)",     0x2b12530, 0x2b12930 },
    { L"Extra 9 (Unused?)",     0x2b12940, 0x2b12d40 },
};

const sDescTreeNode DBZEB_DS_PICCOLO_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_PICCOLO_P1,      ARRAYSIZE(DBZEB_DS_PICCOLO_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_PICCOLO_P2,      ARRAYSIZE(DBZEB_DS_PICCOLO_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_PICCOLO_EXTRAS,  ARRAYSIZE(DBZEB_DS_PICCOLO_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_RADITZ_P1[] =
{
    { L"Raditz P1",             0x2cd1f70, 0x2cd2370, indexDBZEB_Raditz, 0x00 },
    { L"Raditz P1 (Unused?)",   0x2ccf1f0, 0x2ccf5f0, indexDBZEB_Raditz, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_RADITZ_P2[] =
{
    { L"Raditz P2",             0x2cd2380, 0x2cd2780, indexDBZEB_Raditz, 0x00 },
    { L"Raditz P2 (Unused?)",   0x2ccf600, 0x2ccfa00, indexDBZEB_Raditz, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_RADITZ_EXTRAS[] =
{
    { L"Extra 1",               0x2cd2790, 0x2cd2b90 }, //Extra 1
    { L"Extra 2",               0x2cd2ba0, 0x2cd2fa0 }, //Extra 2
    { L"Extra 3",               0x2cd2fb0, 0x2cd33b0 }, //Extra 3
    { L"Extra 4",               0x2cd3be0, 0x2cd3fe0 }, //Extra 6
    { L"Extra 5",               0x2cd4400, 0x2cd4800 }, //Extra 8
    { L"Extra 6",               0x2cd4810, 0x2cd4c10 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x2ccfa10, 0x2ccfe10 },
    { L"Extra 2 (Unused?)",     0x2ccfe20, 0x2cd0220 },
    { L"Extra 3 (Unused?)",     0x2cd0230, 0x2cd0630 },
    { L"Extra 4 (Unused?)",     0x2cd0640, 0x2cd0a40 },
    { L"Extra 5 (Unused?)",     0x2cd0a50, 0x2cd0e50 },
    { L"Extra 6 (Unused?)",     0x2cd0e60, 0x2cd1260 },
    { L"Extra 7 (Unused?)",     0x2cd1270, 0x2cd1670 },
    { L"Extra 8 (Unused?)",     0x2cd1680, 0x2cd1a80 },
    { L"Extra 9 (Unused?)",     0x2cd1a90, 0x2cd1e90 },
};

const sDescTreeNode DBZEB_DS_RADITZ_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_RADITZ_P1,      ARRAYSIZE(DBZEB_DS_RADITZ_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_RADITZ_P2,      ARRAYSIZE(DBZEB_DS_RADITZ_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_RADITZ_EXTRAS,  ARRAYSIZE(DBZEB_DS_RADITZ_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSSB_P1[] =
{
    { L"Goku (Super Saiyan Blue) P1",           0x2e6d8f0, 0x2e6dcf0, indexDBZEB_GokuSSJB, 0x00 },
    { L"Goku (Super Saiyan Blue) P1 (Unused?)", 0x2e6ab70, 0x2e6af70, indexDBZEB_GokuSSJB, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSSB_P2[] =
{
    { L"Goku (Super Saiyan Blue) P2",           0x2e6dd00, 0x2e6e100, indexDBZEB_GokuSSJB, 0x00 },
    { L"Goku (Super Saiyan Blue) P2 (Unused?)", 0x2e6af80, 0x2e6b380, indexDBZEB_GokuSSJB, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_GOKUSSB_EXTRAS[] =
{
    { L"Extra 1",               0x2e6e110, 0x2e6e510 }, //Extra 1
    { L"Extra 2",               0x2e6e520, 0x2e6e920 }, //Extra 2
    { L"Extra 3",               0x2e6e930, 0x2e6ed30 }, //Extra 3
    { L"Extra 4",               0x2e6f560, 0x2e6f960 }, //Extra 6
    { L"Extra 5",               0x2e6fd80, 0x2e70180 }, //Extra 8
    { L"Extra 6",               0x2e70190, 0x2e70590 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x2e6b390, 0x2e6b790 },
    { L"Extra 2 (Unused?)",     0x2e6b7a0, 0x2e6bba0 },
    { L"Extra 3 (Unused?)",     0x2e6bbb0, 0x2e6bfb0 },
    { L"Extra 4 (Unused?)",     0x2e6bfc0, 0x2e6c3c0 },
    { L"Extra 5 (Unused?)",     0x2e6c3d0, 0x2e6c7d0 },
    { L"Extra 6 (Unused?)",     0x2e6c7e0, 0x2e6cbe0 },
    { L"Extra 7 (Unused?)",     0x2e6cbf0, 0x2e6cff0 },
    { L"Extra 8 (Unused?)",     0x2e6d000, 0x2e6d400 },
    { L"Extra 9 (Unused?)",     0x2e6d410, 0x2e6d810 },
};

const sDescTreeNode DBZEB_DS_GOKUSSB_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSB_P1,      ARRAYSIZE(DBZEB_DS_GOKUSSB_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSB_P2,      ARRAYSIZE(DBZEB_DS_GOKUSSB_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSB_EXTRAS,  ARRAYSIZE(DBZEB_DS_GOKUSSB_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_FTRUNKS_P1[] =
{
    { L"Future Trunks P1",              0x300d600, 0x300da00, indexDBZEB_FutureTrunks, 0x00 },
    { L"Future Trunks P1 (Unused?)",    0x300a880, 0x300ac80, indexDBZEB_FutureTrunks, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_FTRUNKS_P2[] =
{
    { L"Future Trunks P2",              0x300da10, 0x300de10, indexDBZEB_FutureTrunks, 0x00 },
    { L"Future Trunks P2 (Unused?)",    0x300ac90, 0x300b090, indexDBZEB_FutureTrunks, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_FTRUNKS_EXTRAS[] =
{
    { L"Extra 1",               0x300de20, 0x300e220 }, //Extra 1
    { L"Extra 2",               0x300e230, 0x300e630 }, //Extra 2
    { L"Extra 3",               0x300e640, 0x300ea40 }, //Extra 3
    { L"Extra 4",               0x300f270, 0x300f670 }, //Extra 6
    { L"Extra 5",               0x300fa90, 0x300fe90 }, //Extra 8
    { L"Extra 6",               0x300fea0, 0x30102a0 }, //Extra 9

    { L"Extra 1 (Unused?)",     0x300b0a0, 0x300b4a0 },
    { L"Extra 2 (Unused?)",     0x300b4b0, 0x300b8b0 },
    { L"Extra 3 (Unused?)",     0x300b8c0, 0x300bcc0 },
    { L"Extra 4 (Unused?)",     0x300bcd0, 0x300c0d0 },
    { L"Extra 5 (Unused?)",     0x300c0e0, 0x300c4e0 },
    { L"Extra 6 (Unused?)",     0x300c4f0, 0x300c8f0 },
    { L"Extra 7 (Unused?)",     0x300c900, 0x300cd00 },
    { L"Extra 8 (Unused?)",     0x300cd10, 0x300d110 },
    { L"Extra 9 (Unused?)",     0x300d120, 0x300d520 },
};

const sDescTreeNode DBZEB_DS_FTRUNKS_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_FTRUNKS_P1,      ARRAYSIZE(DBZEB_DS_FTRUNKS_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_FTRUNKS_P2,      ARRAYSIZE(DBZEB_DS_FTRUNKS_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_FTRUNKS_EXTRAS,  ARRAYSIZE(DBZEB_DS_FTRUNKS_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_VEGETA_P1[] =
{
    { L"Vegeta P1",             0x315a930, 0x315ad30, indexDBZEB_Vegeta, 0x00 },
    { L"Vegeta P1 (Unused?)",   0x3157790, 0x3157b90, indexDBZEB_Vegeta, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_VEGETA_P2[] =
{
    { L"Vegeta P2",             0x315ad40, 0x315b140, indexDBZEB_Vegeta, 0x00 },
    { L"Vegeta P2 (Unused?)",   0x3157ba0, 0x3157fa0, indexDBZEB_Vegeta, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_VEGETA_EXTRAS[] =
{
    { L"Extra 1",               0x315b150, 0x315b550 }, //Extra 1
    { L"Extra 2",               0x315b560, 0x315b960 }, //Extra 2
    { L"Extra 3",               0x315b970, 0x315bd70 }, //Extra 3
    { L"Extra 4",               0x315bd80, 0x315c180 }, //Extra 4
    { L"Extra 5",               0x315c9b0, 0x315cdb0 }, //Extra 7
    { L"Extra 6",               0x315d1d0, 0x315d5d0 }, //Extra 9
    { L"Extra 7",               0x315d5e0, 0x315d9e0 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x3157fb0, 0x31583b0 },
    { L"Extra 2 (Unused?)",     0x31583c0, 0x31587c0 },
    { L"Extra 3 (Unused?)",     0x31587d0, 0x3158bd0 },
    { L"Extra 4 (Unused?)",     0x3158be0, 0x3158fe0 },
    { L"Extra 5 (Unused?)",     0x3158ff0, 0x31593f0 },
    { L"Extra 6 (Unused?)",     0x3159400, 0x3159800 },
    { L"Extra 7 (Unused?)",     0x3159810, 0x3159c10 },
    { L"Extra 8 (Unused?)",     0x3159c20, 0x315a020 },
    { L"Extra 9 (Unused?)",     0x315a030, 0x315a430 },
    { L"Extra 10 (Unused?)",    0x315a440, 0x315a840 },
};

const sDescTreeNode DBZEB_DS_VEGETA_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETA_P1,      ARRAYSIZE(DBZEB_DS_VEGETA_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETA_P2,      ARRAYSIZE(DBZEB_DS_VEGETA_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETA_EXTRAS,  ARRAYSIZE(DBZEB_DS_VEGETA_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_VEGETASS_P1[] =
{
    { L"Vegeta (Super Saiyan) P1",              0x32c2ac0, 0x32c2ec0, indexDBZEB_Vegeta, 0x00 },
    { L"Vegeta (Super Saiyan) P1 (Unused?)",    0x32bf920, 0x32bfd20, indexDBZEB_Vegeta, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_VEGETASS_P2[] =
{
    { L"Vegeta (Super Saiyan) P2",              0x32c2ed0, 0x32c32d0, indexDBZEB_Vegeta, 0x00 },
    { L"Vegeta (Super Saiyan) P2 (Unused?)",    0x32bfd30, 0x32c0130, indexDBZEB_Vegeta, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_VEGETASS_EXTRAS[] =
{
    { L"Extra 1",               0x32c32e0, 0x32c36e0 }, //Extra 1
    { L"Extra 2",               0x32c36f0, 0x32c3af0 }, //Extra 2
    { L"Extra 3",               0x32c3b00, 0x32c3f00 }, //Extra 3
    { L"Extra 4",               0x32c3f10, 0x32c4310 }, //Extra 4
    { L"Extra 5",               0x32c4b40, 0x32c4f40 }, //Extra 7
    { L"Extra 6",               0x32c5360, 0x32c5760 }, //Extra 9
    { L"Extra 7",               0x32c5770, 0x32c5b70 }, //Extra 10

    { L"Extra 1 (Unused?)",     0x32c0140, 0x32c0540 },
    { L"Extra 2 (Unused?)",     0x32c0550, 0x32c0950 },
    { L"Extra 3 (Unused?)",     0x32c0960, 0x32c0d60 },
    { L"Extra 4 (Unused?)",     0x32c0d70, 0x32c1170 },
    { L"Extra 5 (Unused?)",     0x32c1180, 0x32c1580 },
    { L"Extra 6 (Unused?)",     0x32c1590, 0x32c1990 },
    { L"Extra 7 (Unused?)",     0x32c19a0, 0x32c1da0 },
    { L"Extra 8 (Unused?)",     0x32c1db0, 0x32c21b0 },
    { L"Extra 9 (Unused?)",     0x32c21c0, 0x32c25c0 },
    { L"Extra 10 (Unused?)",    0x32c25d0, 0x32c29d0 },
};

const sDescTreeNode DBZEB_DS_VEGETASS_COLLECTION[] =
{
    { L"P1",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETASS_P1,      ARRAYSIZE(DBZEB_DS_VEGETASS_P1) },
    { L"P2",        DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETASS_P2,      ARRAYSIZE(DBZEB_DS_VEGETASS_P2) },
    { L"Extras",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETASS_EXTRAS,  ARRAYSIZE(DBZEB_DS_VEGETASS_EXTRAS) },
};

const sGame_PaletteDataset DBZEB_DS_ZASSIST[] =
{
    { L"Android 8",                         0x1570C0E0, 0x1570C4E0, indexDBZEB_ZAssists, 0x00 },
    { L"Android 13 (Fusion)",               0x15764720, 0x15764B20, indexDBZEB_ZAssists, 0x01 },
    { L"Android 16",                        0x1575A4B0, 0x1575A8B0, indexDBZEB_ZAssists, 0x02 },
    { L"Android 17",                        0x1574F750, 0x1574FB50, indexDBZEB_ZAssists, 0x03 },
    { L"Android 19",                        0x1574B160, 0x1574B560, indexDBZEB_ZAssists, 0x04 },
    { L"Babidi",                            0x155E10A0, 0x155E14A0, indexDBZEB_ZAssists, 0x05 },
    { L"Baby Goku",                         0x156E1E90, 0x156E2290, indexDBZEB_ZAssists, 0x06 },
    { L"Bojack (Transformed)",              0x155F1360, 0x155F1760, indexDBZEB_ZAssists, 0x07 },
    { L"Bubbles",                           0x155F9060, 0x155F9460, indexDBZEB_ZAssists, 0x08 },
    { L"Bulma",                             0x1560A150, 0x1560A550, indexDBZEB_ZAssists, 0x09 },
    { L"Burter",                            0x15610FA0, 0x156113A0, indexDBZEB_ZAssists, 0x0a },
    { L"Cell Jr.",                          0x1561B180, 0x1561B580, indexDBZEB_ZAssists, 0x0b },
    { L"Cell (1st Form)",                   0x156188F0, 0x15618CF0, indexDBZEB_ZAssists, 0x0c },
    { L"Cell (2nd Form)",                   0x156361E0, 0x156365E0, indexDBZEB_ZAssists, 0x0d },
    { L"Chi-Chi",                           0x1591F460, 0x1591F860, indexDBZEB_ZAssists, 0x0e },
    { L"Chi-Chi (Unused?) (1/5)",           0x1563E6A0, 0x1563EAA0, indexDBZEB_ZAssists, 0x0e }, // may be used for other regions, rom is stuck in USA
    { L"Chi-Chi (Unused?) (2/5)",           0x159248D0, 0x15924CD0, indexDBZEB_ZAssists, 0x0e },
    { L"Chi-Chi (Unused?) (3/5)",           0x15929D00, 0x1592A100, indexDBZEB_ZAssists, 0x0e },
    { L"Chi-Chi (Unused?) (4/5)",           0x1592F120, 0x1592F520, indexDBZEB_ZAssists, 0x0e },
    { L"Chi-Chi (Unused?) (5/5)",           0x159345D0, 0x159349D0, indexDBZEB_ZAssists, 0x0e },
    { L"Chiaotzu",                          0x1564A980, 0x1564AD80, indexDBZEB_ZAssists, 0x0f },
    { L"Chilled",                           0x156395B0, 0x156399B0, indexDBZEB_ZAssists, 0x10 },
    { L"Cooler (Final Form)",               0x15791030, 0x15791430, indexDBZEB_ZAssists, 0x11 },
    { L"Dabura",                            0x15652870, 0x15652C70, indexDBZEB_ZAssists, 0x12 },
    { L"Dende",                             0x1565B190, 0x1565B590, indexDBZEB_ZAssists, 0x13 },
    { L"Devilman",                          0x155D8040, 0x155D8440, indexDBZEB_ZAssists, 0x14 },
    { L"Dodoria",                           0x1566AAB0, 0x1566AEB0, indexDBZEB_ZAssists, 0x15 },
    { L"Dr. Briefs",                        0x156591F0, 0x156595F0, indexDBZEB_ZAssists, 0x16 },
    { L"Dr. Gero",                          0x1565FCE0, 0x156600E0, indexDBZEB_ZAssists, 0x17 },
    { L"Dr. Wheelo",                        0x1567AC30, 0x1567B030, indexDBZEB_ZAssists, 0x18 },
    { L"Eis Shenron",                       0x158B2180, 0x158B2580, indexDBZEB_ZAssists, 0x19 },
    { L"Flying Nimbus",                     0x15773110, 0x15773510, indexDBZEB_ZAssists, 0x1a },
    { L"Fortuneteller Baba",                0x158C4F90, 0x158C5390, indexDBZEB_ZAssists, 0x1b },
    { L"Frieza (1st Form)",                 0x156876F0, 0x15687AF0, indexDBZEB_ZAssists, 0x1c },
    { L"Frieza (2nd Form)",                 0x1568F730, 0x1568FB30, indexDBZEB_ZAssists, 0x1d },
    { L"Frieza (3rd Form)",                 0x1569BB30, 0x1569BF30, indexDBZEB_ZAssists, 0x1e },
    { L"Garlic Jr.",                        0x156A88A0, 0x156A8CA0, indexDBZEB_ZAssists, 0x1f },
    { L"General Blue",                      0x155E9610, 0x155E9A10, indexDBZEB_ZAssists, 0x20 },
    { L"Gine",                              0x156CDE80, 0x156CE280, indexDBZEB_ZAssists, 0x21 },
    { L"Gogeta (Super Saiyan 4)",           0x156C04C0, 0x156C08C0, indexDBZEB_ZAssists, 0x22 },
    { L"Goku (GT) (Super Saiyan 4)",        0x156ED370, 0x156ED770, indexDBZEB_ZAssists, 0x23 },
    { L"Golden Frieza",                     0x156B46B0, 0x156B4AB0, indexDBZEB_ZAssists, 0x24 },
    { L"Goten",                             0x156F6130, 0x156F6530, indexDBZEB_ZAssists, 0x25 },
    { L"Grand Elder Guru",                  0x15686330, 0x15686730, indexDBZEB_ZAssists, 0x26 },
    { L"Grandpa Gohan",                     0x15814240, 0x15814640, indexDBZEB_ZAssists, 0x27 },
    { L"Great Ape",                         0x157C56C0, 0x157C5AC0, indexDBZEB_ZAssists, 0x28 },
    { L"Great Saiyaman",                    0x15701250, 0x15701650, indexDBZEB_ZAssists, 0x29 },
    { L"Guldo",                             0x156F0BD0, 0x156F0FD0, indexDBZEB_ZAssists, 0x2a },
    { L"Haze Shenron",                      0x15803790, 0x15803B90, indexDBZEB_ZAssists, 0x2b },
    { L"Hirudegarn (Unused?)",              0x15718B10, 0x15718F10, indexDBZEB_ZAssists, 0x2c },
    { L"Hirudegarn",                        0x15725630, 0x15725A30, indexDBZEB_ZAssists, 0x2c },
    { L"Jackie Chun",                       0x1572C930, 0x1572CD30, indexDBZEB_ZAssists, 0x2d },
    { L"Jaco",                              0x157318B0, 0x15731CB0, indexDBZEB_ZAssists, 0x2e },
    { L"Jeice",                             0x15747750, 0x15747B50, indexDBZEB_ZAssists, 0x2f },
    { L"Karin",                             0x15785A10, 0x15785E10, indexDBZEB_ZAssists, 0x30 },
    { L"Kibito",                            0x15770850, 0x15770C50, indexDBZEB_ZAssists, 0x31 },
    { L"Kid Gohan",                         0x15703B30, 0x15703F30, indexDBZEB_ZAssists, 0x32 },
    { L"Kid Goku",                          0x156E4330, 0x156E4730, indexDBZEB_ZAssists, 0x33 },
    { L"King Kai",                          0x15769FD0, 0x1576A3D0, indexDBZEB_ZAssists, 0x34 },
    { L"King Piccolo",                      0x157CF670, 0x157CFA70, indexDBZEB_ZAssists, 0x35 },
    { L"Launch",                            0x1579AB10, 0x1579AF10, indexDBZEB_ZAssists, 0x36 },
    { L"Majin Vegeta",                      0x158DE720, 0x158DEB20, indexDBZEB_ZAssists, 0x37 },
    { L"Majuub",                            0x158B8B20, 0x158B8F20, indexDBZEB_ZAssists, 0x38 },
    { L"Master Roshi",                      0x15782D20, 0x15783120, indexDBZEB_ZAssists, 0x39 },
    { L"Mecha Frieza",                      0x1579ECE0, 0x1579F0E0, indexDBZEB_ZAssists, 0x40 },
    { L"Mercenary Tao",                     0x1589CEB0, 0x1589D2B0, indexDBZEB_ZAssists, 0x41 },
    { L"Mercenary Tao (Extra 1)",           0x1589CAA0, 0x1589CEA0, indexDBZEB_ZAssists, 0x42 },
    { L"Meta-Cooler",                       0x157A9990, 0x157A9D90, indexDBZEB_ZAssists, 0x43 },
    { L"Mighty Mask (Trunks and Goten)",    0x157A6CF0, 0x157A70F0, indexDBZEB_ZAssists, 0x44 },
    { L"Monster Carrot",                    0x15895890, 0x15895C90, indexDBZEB_ZAssists, 0x45 },
    { L"Mr. Popo",                          0x157ABE90, 0x157AC290, indexDBZEB_ZAssists, 0x46 },
    { L"Mr. Satan",                         0x1580CB20, 0x1580CF20, indexDBZEB_ZAssists, 0x47 },
    { L"Naturon Shenron",                   0x15648E20, 0x15649220, indexDBZEB_ZAssists, 0x48 },
    { L"Nuova Shenron",                     0x15889060, 0x15889460, indexDBZEB_ZAssists, 0x49 },
    { L"Oceanus Shenron",                   0x157FB2C0, 0x157FB6C0, indexDBZEB_ZAssists, 0x4a },
    { L"Old Kai",                           0x157F26E0, 0x157F2AE0, indexDBZEB_ZAssists, 0x4b },
    { L"Omega Shenron",                     0x1587AA30, 0x1587AE30, indexDBZEB_ZAssists, 0x4c },
    { L"Oolong",                            0x158C7300, 0x158C7700, indexDBZEB_ZAssists, 0x4d },
    { L"Pan",                               0x157C7FA0, 0x157C83A0, indexDBZEB_ZAssists, 0x4e },
    { L"Pikkon",                            0x157D64E0, 0x157D68E0, indexDBZEB_ZAssists, 0x4f },
    { L"Pilaf Machine",                     0x157E1DB0, 0x157E21B0, indexDBZEB_ZAssists, 0x50 },
    { L"Puar",                              0x157E3F90, 0x157E4390, indexDBZEB_ZAssists, 0x51 },
    { L"Rage Shenron",                      0x158CC770, 0x158CCB70, indexDBZEB_ZAssists, 0x52 },
    { L"Recoome",                           0x157EF010, 0x157EF410, indexDBZEB_ZAssists, 0x53 },
    { L"Saibamen",                          0x15806300, 0x15806700, indexDBZEB_ZAssists, 0x54 },
    { L"Shenron",                           0x1586A6F0, 0x1586AAF0, indexDBZEB_ZAssists, 0x55 },
    { L"Shin",                              0x158710B0, 0x158714B0, indexDBZEB_ZAssists, 0x56 },
    { L"Spopovich",                         0x15882830, 0x15882C30, indexDBZEB_ZAssists, 0x57 },
    { L"Super 17",                          0x15743580, 0x15743980, indexDBZEB_ZAssists, 0x58 },
    { L"Super Buu",                         0x155F5E70, 0x155F6270, indexDBZEB_ZAssists, 0x59 },
    { L"Super Gogeta",                      0x156C93D0, 0x156C97D0, indexDBZEB_ZAssists, 0x5a },
    { L"Super Janemba",                     0x1573A490, 0x1573A890, indexDBZEB_ZAssists, 0x5b },
    { L"Super Vegito",                      0x158D11A0, 0x158D15A0, indexDBZEB_ZAssists, 0x5c },
    { L"Tapion",                            0x1588C210, 0x1588C610, indexDBZEB_ZAssists, 0x5d },
    { L"Tien Shinhan",                      0x15892260, 0x15892660, indexDBZEB_ZAssists, 0x5e },
    { L"Trunks",                            0x1589FBA0, 0x1589FFA0, indexDBZEB_ZAssists, 0x5f },
    { L"Turles",                            0x158A8C00, 0x158A9000, indexDBZEB_ZAssists, 0x60 },
        { L"Turtle",                            0x158BF490, 0x158BF890, indexDBZEB_ZAssists, 0x61 },
    { L"Uub",                               0x158BBF40, 0x158BC340, indexDBZEB_ZAssists, 0x62 },
    { L"Vegeta (GT) (Super Saiyan 4)",      0x158D8920, 0x158D8D20, indexDBZEB_ZAssists, 0x63 },
    { L"Vegeta (SSGSS)",                    0x158ED5E0, 0x158ED9E0, indexDBZEB_ZAssists, 0x64 },
    { L"Videl",                             0x158E1410, 0x158E1810, indexDBZEB_ZAssists, 0x65 },
    { L"Whis",                              0x158F31B0, 0x158F35B0, indexDBZEB_ZAssists, 0x66 },
    { L"World Tournament Announcer",        0x155DCEB0, 0x155DD2B0, indexDBZEB_ZAssists, 0x67 },
    { L"Yajirobe",                          0x158F8220, 0x158F8620, indexDBZEB_ZAssists, 0x68 },
    { L"Yakon",                             0x1590D850, 0x1590DC50, indexDBZEB_ZAssists, 0x69 },
    { L"Yamcha",                            0x158FF240, 0x158FF640, indexDBZEB_ZAssists, 0x6a },
    { L"Yamu",                              0x15911440, 0x15911840, indexDBZEB_ZAssists, 0x6b },
    { L"Zarbon",                            0x15919F40, 0x1591A340, indexDBZEB_ZAssists, 0x6c },
};

const sGame_PaletteDataset DBZEB_DS_TRANSFORMATION_DABURA[] =
{
    { L"Bardock",                       0xc9c780, 0xc9cb80, indexDBZEB_Bardock, 0x00 }, //taken from main extras, sorted here for easy of accesses 
    { L"Beerus",                        0xe047d0, 0xe04bd0, indexDBZEB_Beerus, 0x00 },
    { L"Broly",                         0x10e5920, 0x10e5d20, indexDBZEB_Broly, 0x00 },
    { L"Kid Buu",                       0x11c6dd0, 0x11c71d0, indexDBZEB_KidBuu, 0x00 },
    { L"Majin Buu",                     0x146b290, 0x146b690, indexDBZEB_MajinBuu, 0x00 },
    { L"Cell",                          0x1688af0, 0x1688ef0, indexDBZEB_Cell, 0x00 },
    { L"Krillin",                       0x1785280, 0x1785680, indexDBZEB_Krillin, 0x00 },
    { L"Frieza",                        0x18c8f60, 0x18c9360, indexDBZEB_Frieza, 0x00 },
    { L"Gohan",                         0x1a404e0, 0x1a408e0, indexDBZEB_Gohan, 0x00 },
    { L"Gohan (Super Saiyan)",          0x1bb91d0, 0x1bb95d0, indexDBZEB_GohanSSJ1, 0x00 },
    { L"Goku (Super Saiyan God)",       0x1d2ce00, 0x1d2d200, indexDBZEB_GokuSSJG, 0x00 },
    { L"Goku",                          0x1ea07b0, 0x1ea0bb0, indexDBZEB_Goku, 0x00 },
    { L"Goku (Super Saiyan)",           0x2045d10, 0x2046110, indexDBZEB_GokuSSJ1, 0x00 },
    { L"Captain Ginyu",                 0x226ad70, 0x226b170, indexDBZEB_CaptainGinyu, 0x00 },
    { L"Kid Gohan",                     0x237a870, 0x237ac70, indexDBZEB_KidGohan, 0x00 },
    { L"Kid Gohan (Super Saiyan 2)",    0x24c6da0, 0x24c71a0, indexDBZEB_KidGohan, 0x00 },
    { L"Gotenks",                       0x25fa840, 0x25fac40, indexDBZEB_Gotenks, 0x00 },
    { L"Android 18",                    0x2717c60, 0x2718060, indexDBZEB_Android18, 0x00 },
    { L"Nappa",                         0x296bb40, 0x296bf40, indexDBZEB_Nappa, 0x00 },
    { L"Piccolo",                       0x2b14680, 0x2b14a80, indexDBZEB_Piccolo, 0x00 },
    { L"Raditz",                        0x2cd37d0, 0x2cd3bd0, indexDBZEB_Raditz, 0x00 },
    { L"Goku (Super Saiyan Blue)",      0x2e6f150, 0x2e6f550, indexDBZEB_GokuSSJB, 0x00 },
    { L"Future Trunks",                 0x300ee60, 0x300f260, indexDBZEB_FutureTrunks, 0x00 },
    { L"Vegeta",                        0x315c5a0, 0x315c9a0, indexDBZEB_Vegeta, 0x00 },
    { L"Vegeta (Super Saiyan)",         0x32c4730, 0x32c4b30, indexDBZEB_Vegeta, 0x00 },
};

const sGame_PaletteDataset DBZEB_DS_TRANSFORMATION_MAJUUB[] =
{
    { L"Bardock",                       0xc9cfa0, 0xc9d3a0 }, //taken from main extras, sorted here for easy of accesses 
    { L"Beerus",                        0xe04ff0, 0xE053F0 },
    { L"Broly",                         0x10e6140, 0x10e6540 },
    { L"Kid Buu",                       0x11c75f0, 0x11C79F0 },
    { L"Majin Buu",                     0x146bab0, 0x146beb0 },
    { L"Cell",                          0x1689310, 0x1689710 },
    { L"Krillin",                       0x1785aa0, 0x1785ea0 },
    { L"Frieza",                        0x18c9780, 0x18c9b80 },
    { L"Gohan",                         0x1a40d00, 0x1a41100 },
    { L"Gohan (Super Saiyan)",          0x1bb99f0, 0x1bb9df0 },
    { L"Goku (Super Saiyan God)",       0x1d2d620, 0x1d2da20 },
    { L"Goku",                          0x1ea13e0, 0x1ea17e0 },
    { L"Goku (Super Saiyan)",           0x2046530, 0x2046930 },
    { L"Captain Ginyu",                 0x226b590, 0x226b990 },
    { L"Kid Gohan",                     0x237b090, 0x237b490 },
    { L"Kid Gohan (Super Saiyan 2)",    0x24c75c0, 0x24c79c0 },
    { L"Gotenks",                       0x25fb060, 0x25fb460 },
    { L"Android 18",                    0x2718480, 0x2718880 },
    { L"Nappa",                         0x296c360, 0x296c760 },
    { L"Piccolo",                       0x2b14ea0, 0x2b152a0 },
    { L"Raditz",                        0x2cd3ff0, 0x2cd43f0 },
    { L"Goku (Super Saiyan Blue)",      0x2e6f970, 0x2e6fd70 },
    { L"Future Trunks ",                0x300f680, 0x300fa80 },
    { L"Vegeta",                        0x315cdc0, 0x315d1c0 },
    { L"Vegeta (Super Saiyan)",         0x32c4f50, 0x32c5350 },
};

const sDescTreeNode DBZEB_DS_ZASSIST_COLLECTION[] =
{
    { L"Z Assists",                 DESC_NODETYPE_TREE, (void*)DBZEB_DS_ZASSIST,         ARRAYSIZE(DBZEB_DS_ZASSIST) },
    { L"Dabura Transformations",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_TRANSFORMATION_DABURA,  ARRAYSIZE(DBZEB_DS_TRANSFORMATION_DABURA) },
    { L"Majuub Transformations",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_TRANSFORMATION_MAJUUB,  ARRAYSIZE(DBZEB_DS_TRANSFORMATION_MAJUUB) },

};
const sDescTreeNode DBZEB_DS_UNITS[] =
{
// Order by rom, used when defining palettes:
/*
    { L"Bardock",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_BARDOCK_COLLECTION,         ARRAYSIZE(DBZEB_DS_BARDOCK_COLLECTION) },
    { L"Beerus",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BEERUS_COLLECTION,          ARRAYSIZE(DBZEB_DS_BEERUS_COLLECTION) },
    { L"Broly",                         DESC_NODETYPE_TREE, (void*)DBZEB_DS_BROLY_COLLECTION,           ARRAYSIZE(DBZEB_DS_BROLY_COLLECTION) },
    { L"Kid Buu",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDBUU_COLLECTION,          ARRAYSIZE(DBZEB_DS_KIDBUU_COLLECTION) },
    { L"Majin Buu",                     DESC_NODETYPE_TREE, (void*)DBZEB_DS_MAJINBUU_COLLECTION,        ARRAYSIZE(DBZEB_DS_MAJINBUU_COLLECTION) },
    { L"Cell",                          DESC_NODETYPE_TREE, (void*)DBZEB_DS_CELL_COLLECTION,            ARRAYSIZE(DBZEB_DS_CELL_COLLECTION) },
    { L"Krillin",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_KRILLIN_COLLECTION,         ARRAYSIZE(DBZEB_DS_KRILLIN_COLLECTION) },
    { L"Frieza",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_FRIEZA_COLLECTION,          ARRAYSIZE(DBZEB_DS_FRIEZA_COLLECTION) },
    { L"Gohan",                         DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHAN_COLLECTION,           ARRAYSIZE(DBZEB_DS_GOHAN_COLLECTION) },
    { L"Gohan (Super Saiyan)",          DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHANSS_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOHANSS_COLLECTION) },
    { L"Goku (Super Saiyan God)",       DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSG_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOKUSSG_COLLECTION) },
    { L"Goku",                          DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKU_COLLECTION,            ARRAYSIZE(DBZEB_DS_GOKU_COLLECTION) },
    { L"Goku (Super Saiyan)",           DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSS_COLLECTION,          ARRAYSIZE(DBZEB_DS_GOKUSS_COLLECTION) },
    { L"Captain Ginyu",                 DESC_NODETYPE_TREE, (void*)DBZEB_DS_CAPGINYU_COLLECTION,        ARRAYSIZE(DBZEB_DS_CAPGINYU_COLLECTION) },
    { L"Kid Gohan",                     DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHAN_COLLECTION,        ARRAYSIZE(DBZEB_DS_KIDGOHAN_COLLECTION) },
    { L"Kid Gohan (Super Saiyan 2)",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHANSS2_COLLECTION,     ARRAYSIZE(DBZEB_DS_KIDGOHANSS2_COLLECTION) },
    { L"Gotenks",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOTENKS_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOTENKS_COLLECTION) },
    { L"Android 18",                    DESC_NODETYPE_TREE, (void*)DBZEB_DS_ANDROID18_COLLECTION,       ARRAYSIZE(DBZEB_DS_ANDROID18_COLLECTION) },
    { L"Nappa",                         DESC_NODETYPE_TREE, (void*)DBZEB_DS_NAPPA_COLLECTION,           ARRAYSIZE(DBZEB_DS_NAPPA_COLLECTION) },
    { L"Piccolo",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_PICCOLO_COLLECTION,         ARRAYSIZE(DBZEB_DS_PICCOLO_COLLECTION) },
    { L"Raditz",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_RADITZ_COLLECTION,          ARRAYSIZE(DBZEB_DS_RADITZ_COLLECTION) },
    { L"Goku (Super Saiyan Blue)",      DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSB_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOKUSSB_COLLECTION) },
    { L"Future Trunks",                 DESC_NODETYPE_TREE, (void*)DBZEB_DS_FTRUNKS_COLLECTION,         ARRAYSIZE(DBZEB_DS_FTRUNKS_COLLECTION) },
    { L"Vegeta",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETA_COLLECTION,          ARRAYSIZE(DBZEB_DS_VEGETA_COLLECTION) },
    { L"Vegeta (Super Saiyan)",         DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETASS_COLLECTION,        ARRAYSIZE(DBZEB_DS_VEGETASS_COLLECTION) },
    { L"Z Assists",                     DESC_NODETYPE_TREE, (void*)DBZEB_DS_ZASSIST_COLLECTION,         ARRAYSIZE(DBZEB_DS_ZASSIST_COLLECTION) },
*/

// Order by name, shown to the user:
    { L"Android 18",                    DESC_NODETYPE_TREE, (void*)DBZEB_DS_ANDROID18_COLLECTION,       ARRAYSIZE(DBZEB_DS_ANDROID18_COLLECTION) },
    { L"Bardock",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_BARDOCK_COLLECTION,         ARRAYSIZE(DBZEB_DS_BARDOCK_COLLECTION) },
    { L"Beerus",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_BEERUS_COLLECTION,          ARRAYSIZE(DBZEB_DS_BEERUS_COLLECTION) },
    { L"Broly",                         DESC_NODETYPE_TREE, (void*)DBZEB_DS_BROLY_COLLECTION,           ARRAYSIZE(DBZEB_DS_BROLY_COLLECTION) },
    { L"Captain Ginyu",                 DESC_NODETYPE_TREE, (void*)DBZEB_DS_CAPGINYU_COLLECTION,        ARRAYSIZE(DBZEB_DS_CAPGINYU_COLLECTION) },
    { L"Cell",                          DESC_NODETYPE_TREE, (void*)DBZEB_DS_CELL_COLLECTION,            ARRAYSIZE(DBZEB_DS_CELL_COLLECTION) },
    { L"Frieza",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_FRIEZA_COLLECTION,          ARRAYSIZE(DBZEB_DS_FRIEZA_COLLECTION) },
    { L"Future Trunks",                 DESC_NODETYPE_TREE, (void*)DBZEB_DS_FTRUNKS_COLLECTION,         ARRAYSIZE(DBZEB_DS_FTRUNKS_COLLECTION) },
    { L"Gohan",                         DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHAN_COLLECTION,           ARRAYSIZE(DBZEB_DS_GOHAN_COLLECTION) },
    { L"Gohan (Super Saiyan)",          DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOHANSS_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOHANSS_COLLECTION) },
    { L"Goku",                          DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKU_COLLECTION,            ARRAYSIZE(DBZEB_DS_GOKU_COLLECTION) },
    { L"Goku (Super Saiyan)",           DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSS_COLLECTION,          ARRAYSIZE(DBZEB_DS_GOKUSS_COLLECTION) },
    { L"Goku (Super Saiyan God)",       DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSG_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOKUSSG_COLLECTION) },
    { L"Goku (Super Saiyan Blue)",      DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOKUSSB_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOKUSSB_COLLECTION) },
    { L"Gotenks",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_GOTENKS_COLLECTION,         ARRAYSIZE(DBZEB_DS_GOTENKS_COLLECTION) },
    { L"Kid Buu",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDBUU_COLLECTION,          ARRAYSIZE(DBZEB_DS_KIDBUU_COLLECTION) },
    { L"Kid Gohan",                     DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHAN_COLLECTION,		ARRAYSIZE(DBZEB_DS_KIDGOHAN_COLLECTION) },
    { L"Kid Gohan (Super Saiyan 2)",    DESC_NODETYPE_TREE, (void*)DBZEB_DS_KIDGOHANSS2_COLLECTION,		ARRAYSIZE(DBZEB_DS_KIDGOHANSS2_COLLECTION) },
    { L"Krillin",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_KRILLIN_COLLECTION,         ARRAYSIZE(DBZEB_DS_KRILLIN_COLLECTION) },
    { L"Majin Buu",                     DESC_NODETYPE_TREE, (void*)DBZEB_DS_MAJINBUU_COLLECTION,        ARRAYSIZE(DBZEB_DS_MAJINBUU_COLLECTION) },
    { L"Nappa",                         DESC_NODETYPE_TREE, (void*)DBZEB_DS_NAPPA_COLLECTION,           ARRAYSIZE(DBZEB_DS_NAPPA_COLLECTION) },
    { L"Piccolo",                       DESC_NODETYPE_TREE, (void*)DBZEB_DS_PICCOLO_COLLECTION,         ARRAYSIZE(DBZEB_DS_PICCOLO_COLLECTION) },
    { L"Raditz",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_RADITZ_COLLECTION,          ARRAYSIZE(DBZEB_DS_RADITZ_COLLECTION) },
    { L"Vegeta",                        DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETA_COLLECTION,          ARRAYSIZE(DBZEB_DS_VEGETA_COLLECTION) },
    { L"Vegeta (Super Saiyan)",         DESC_NODETYPE_TREE, (void*)DBZEB_DS_VEGETASS_COLLECTION,        ARRAYSIZE(DBZEB_DS_VEGETASS_COLLECTION) },
    { L"Z Assists",                     DESC_NODETYPE_TREE, (void*)DBZEB_DS_ZASSIST_COLLECTION,         ARRAYSIZE(DBZEB_DS_ZASSIST_COLLECTION) },
};

constexpr auto DBZEB_DS_NUMUNIT = ARRAYSIZE(DBZEB_DS_UNITS);

#define DBZEB_DS_EXTRALOC DBZEB_DS_NUMUNIT

// We extend this array with data groveled from the extensiBle extras file, if any.
const stExtraDef DBZEB_DS_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
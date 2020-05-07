#pragma once

#define XMVSF_A_PALSZ 16

// Editor's note:
// Some characters have more than P/K colors available.  Those don't appear to be used
// and may have been part of getting ready for the console release.

enum SupportedPaletteListIndexXMVSF
{
    indexXCammy,
    indexXCharlie,
    indexXChunLi,
    indexXChunLiSFA,
    indexXCyclops,
    indexXDhalsim,
    indexXGambit,
    indexXGouki,
    indexXJuggernaut,
    indexXKen,
    indexXMBison,
    indexXMagneto,
    indexXRogue,
    indexXRyu,
    indexXSabretooth,
    indexXStorm,
    indexXWolverine,
    indexXZangief,
    indexXApocalypse,
    indexXMVSFLast
};

constexpr auto XMVSF_A_NUMUNIT = indexXMVSFLast;

#define XMVSF_A_EXTRALOC XMVSF_A_NUMUNIT

// Sprite reference:
// https://www.zytor.com/~johannax/jigsaw/sf/xvsf.html

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x14d7c, 0x14d9c, 0x07, 0x00, true },
    { "P1 claw", 0x14d9c, 0x14dbc, 0x07, 0x01 },
    { "P1 slash FX", 0x14dbc, 0x14ddc, 0x07, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x14ddc, 0x14dfc, 0x07, 0x00, true },
    { "P2 claw",       0x14dfc, 0x14e1c, 0x07, 0x01 },
    { "P2 slash FX",   0x14e1c, 0x14e3c, 0x07, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_Extras[] =
{
    { "Portrait", 0x1bdfc, 0x1be7c },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x14e3c, 0x14e5c, 0x06, 0x00 },
    { "P1 HK", 0x14e5c, 0x14e7c, 0x06, 0x01 },
    { "P1 optic FX", 0x14e7c, 0x14e9c, 0x06, 0x02 },

    { "P1 Intro 1", 0x17fdc, 0x17ffc, indexCPS2_Cyclops, 12 }, // Intro animation: cycles from 1 to 7 and back.
    { "P1 Intro 2", 0x17ffc, 0x1801c, indexCPS2_Cyclops, 12 },
    { "P1 Intro 3", 0x1801c, 0x1803c, indexCPS2_Cyclops, 12 },
    { "P1 Intro 4", 0x1803c, 0x1805c, indexCPS2_Cyclops, 12 },
    { "P1 Intro 5", 0x1805c, 0x1807c, indexCPS2_Cyclops, 12 },
    { "P1 Intro 6", 0x1807c, 0x1809c, indexCPS2_Cyclops, 12 },
    { "P1 Intro 7", 0x1809c, 0x180Bc, indexCPS2_Cyclops, 12 },
    { "P1 Intro 8", 0x180Bc, 0x180Dc, indexCPS2_Cyclops, 12 },

    { "P1 Optic Blast 1", 0x1827c, 0x1829c, indexCPS2_Cyclops, 13 },
    { "P1 Optic Blast 2", 0x1829c, 0x182Bc, indexCPS2_Cyclops, 13 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x14e9c, 0x14ebc, 0x06, 0x00 },
    { "P2 HK", 0x14ebc, 0x14edc, 0x06, 0x01 },
    { "P2 optic FX", 0x14edc, 0x14efc, 0x06, 0x02 },

    { "P2 Intro 1", 0x180dc, 0x180fc, indexCPS2_Cyclops, 12 },
    { "P2 Intro 2", 0x180fc, 0x1811c, indexCPS2_Cyclops, 12 },
    { "P2 Intro 3", 0x1811c, 0x1813c, indexCPS2_Cyclops, 12 },
    { "P2 Intro 4", 0x1813c, 0x1815c, indexCPS2_Cyclops, 12 },
    { "P2 Intro 5", 0x1815c, 0x1817c, indexCPS2_Cyclops, 12 },
    { "P2 Intro 6", 0x1817c, 0x1819c, indexCPS2_Cyclops, 12 },
    { "P2 Intro 7", 0x1819c, 0x181Bc, indexCPS2_Cyclops, 12 },
    { "P2 Intro 8", 0x181Bc, 0x181Dc, indexCPS2_Cyclops, 12 },

    { "P2 Optic Blast 1", 0x182bc, 0x182dc, indexCPS2_Cyclops, 13 },
    { "P2 Optic Blast 2", 0x182dc, 0x182fc, indexCPS2_Cyclops, 13 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_Extras[] =
{
    { "Palette (06)", 0x14efc, 0x14f1c },
    { "Palette (07)", 0x14f1c, 0x14f3c },
    { "? optic FX", 0x14f3c, 0x14f5c, 0x06, 0x02 },
    { "Palette (09)", 0x14f5c, 0x14f7c },
    { "Palette (0A)", 0x14f7c, 0x14f9c },
    { "? optic FX", 0x14f9c, 0x14fbc, 0x06, 0x02 },
    { "Portrait", 0x1be9c, 0x1bf1c },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x14fbc, 0x14fdc, 0x2a, 0x00 },
    { "Palette (01)",   0x14fdc, 0x14ffc, 0x2a, 0x00 },
    { "Palette (02)",   0x14ffc, 0x1501c, 0x2a, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1501c, 0x1503c, 0x2a, 0x00 },
    { "Palette (04)",  0x1503c, 0x1505c, 0x2a, 0x00 },
    { "Palette (05)",  0x1505c, 0x1507c, 0x2a, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1507c, 0x1509c, 0x2a, 0x00 },  
    { "Palette (07)", 0x1509c, 0x150bc, 0x2a, 0x00 },
    { "Palette (08)", 0x150bc, 0x150dc, 0x2a, 0x00 },
    { "Palette (09)", 0x150dc, 0x150fc, 0x2a, 0x00 },
    { "Palette (0A)", 0x150fc, 0x1511c, 0x2a, 0x00 },
    { "Palette (0B)", 0x1511c, 0x1513c, 0x2a, 0x00 },
    { "Palette (0C)", 0x1513c, 0x1515c, 0x2a, 0x00 },
    { "Palette (0D)", 0x1515c, 0x1517c, 0x2a, 0x00 },
    { "Palette (0E)", 0x1517c, 0x1519c, 0x2a, 0x00 },
    { "Palette (0F)", 0x1519c, 0x151bc, 0x2a, 0x00 },
    { "Palette (10)", 0x151bc, 0x151dc, 0x2a, 0x00 },
    { "Palette (11)", 0x151dc, 0x151fc, 0x2a, 0x00 },
    { "Palette (12)", 0x151fc, 0x1521c, 0x2a, 0x00 },
    { "Palette (13)", 0x1521c, 0x1523c, 0x2a, 0x00 },
    { "Palette (14)", 0x1523c, 0x1525c, 0x2a, 0x00 },
    { "Palette (15)", 0x1525c, 0x1527c, 0x2a, 0x00 },
    { "Palette (16)", 0x1527c, 0x1529c, 0x2a, 0x00 },
    { "Palette (17)", 0x1529c, 0x152bc, 0x2a, 0x00 },
    { "Palette (18)", 0x152bc, 0x152dc, 0x2a, 0x00 },
    { "Palette (19)", 0x152dc, 0x152fc, 0x2a, 0x00 },
    { "Palette (1A)", 0x152fc, 0x1531c, 0x2a, 0x00 },

    { "Portrait", 0x1bf3c, 0x1bfbc },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x153dc, 0x153fc, 0x28, 0x00 },
    { "P1 slash FX", 0x153fc, 0x1541c, 0x28, 0x01 },
    { "P1 card FX", 0x1541c, 0x1543c, 0x28, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1543c, 0x1545c, 0x28, 0x00 },
    { "P2 slash FX", 0x1545c, 0x1547c, 0x28, 0x01 },
    { "P2 card FX", 0x1547c, 0x1549c, 0x28, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_Extras[] =
{
    { "Portrait", 0x1c07c, 0x1c0fc },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1549c, 0x154bc, 0x2b, 0x00 },
    { "P1 slash FX", 0x154bc, 0x154dc, 0x2b, 0x01 },
    { "P1 Birdy", 0x154dc, 0x154fc, 0x2b, 0x02 },
    { "P1 Getaway car", 0x1555c, 0x1557c, 0x2b, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x154fc, 0x1551c, 0x2b, 0x00 },
    { "P2 slash FX", 0x1551c, 0x1553c, 0x2b, 0x01 },
    { "P2 Birdy", 0x1553c, 0x1555c, 0x2b, 0x02 },
    { "P2 Getaway car", 0x1557c, 0x1559c, 0x2b, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_Extras[] =
{
    { "Portrait", 0x1c11c, 0x1c19c },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1559c, 0x155bc, 0x29, 0x00 },
    { "Palette (01)", 0x155bc, 0x155dc },
    { "P1 ground FX", 0x155dc, 0x155fc, 0x29, 0x02 },

    { "P1 Cyttorak Power-Up 1?", 0x184bc, 0x184dc, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 2?", 0x184dc, 0x184fc, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 3?", 0x184fc, 0x1851c, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 4?", 0x1851c, 0x1853c, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 5?", 0x1853c, 0x1855c, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 6?", 0x1855c, 0x1857c, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 7?", 0x1857c, 0x1859c, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 8?", 0x1859c, 0x185Bc, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 9?", 0x185Bc, 0x185Dc, indexCPS2_Juggy, 11 },
    { "P1 Cyttorak Power-Up 10?", 0x185Dc, 0x185Fc, indexCPS2_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x155fc, 0x1561c, 0x29, 0x00 },
    { "Palette (04)", 0x1561c, 0x1563c },
    { "P2 ground FX", 0x1563c, 0x1565c, 0x29, 0x02 },

    { "P2 Cyttorak Power-Up 1?", 0x185fc, 0x1861c, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 2?", 0x1861c, 0x1863c, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 3?", 0x1863c, 0x1865c, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 4?", 0x1865c, 0x1867c, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 5?", 0x1867c, 0x1869c, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 6?", 0x1869c, 0x186Bc, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 7?", 0x186Bc, 0x186Dc, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 8?", 0x186Dc, 0x186Fc, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 9?", 0x186Fc, 0x1871c, indexCPS2_Juggy, 11 },
    { "P2 Cyttorak Power-Up 10?", 0x1871c, 0x1873c, indexCPS2_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1565c, 0x1567c, 0x29, 0x00 },
    { "Palette (07)", 0x1567c, 0x1569c, 0x29, 0x00 },
    { "Palette (08)", 0x1569c, 0x156bc, 0x29, 0x00 },
    { "Portrait", 0x1c1bc, 0x1c23c },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15fdc, 0x15ffc, 0x26, 0x00 },
    { "P1 psycho FX", 0x15ffc, 0x1601c },
    { "Palette (02)", 0x1601c, 0x1603c },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1603c, 0x1605c, 0x26, 0x00 },
    { "P2 psycho FX", 0x1605c, 0x1607c },
    { "Palette (05)", 0x1607c, 0x1609c },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_Extras[] =
{
    { "Portrait", 0x1c6bc, 0x1c73c },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x156bc, 0x156dc, 0x2c, 0x00 },
    { "P1 magnetic FX", 0x156dc, 0x156fc, 0x2c, 0x01 },
    { "P1 magnetic FX 2", 0x156fc, 0x1571c, 0x2c, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1571c, 0x1573c, 0x2c, 0x00 },
    { "P2 magnetic FX", 0x1573c, 0x1575c, 0x2c, 0x01 },
    { "P2 magnetic FX 2", 0x1575c, 0x1577c, 0x2c, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_Extras[] =
{
    { "Portrait", 0x1c25c, 0x1c2dc },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1531c, 0x1533c, 0x0a, 0x0C },
    { "Palette (01)", 0x1533c, 0x1535c, 0x0a, 0x0C },
    { "P1 ground FX", 0x1535c, 0x1537c, 0x0a, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1537c, 0x1539c, 0x0a, 0x0C },
    { "Palette (04)", 0x1539c, 0x153bc, 0x0a, 0x0C },
    { "P2 ground FX", 0x153bc, 0x153dc, 0x0a, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_Extras[] =
{
    { "Portrait", 0x1bfdc, 0x1c05c },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1589c, 0x158bc, 0x00, 0x00 },
    { "P1 fireballs", 0x158bc, 0x158dc, 0x00, 0x01 },
    { "P1 shoryuken", 0x158dc, 0x158fc, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x158fc, 0x1591c, 0x00, 0x00 },
    { "P2 fireballs", 0x1591c, 0x1593c, 0x00, 0x01 },
    { "P2 shoryuken", 0x1593c, 0x1595c, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_Extras[] =
{
    { "Palette (06)",           0x1595c, 0x1597c, 0x00, 0x00 },
    { "Palette (07) fireballs", 0x1597c, 0x1599c, 0x00, 0x01 },
    { "Palette (08) shoryuken", 0x1599c, 0x159bc, 0x27, 0x02 },
    { "Palette (09)",           0x159bc, 0x159dc, 0x00, 0x00 },
    { "Palette (0A) fireballs", 0x159dc, 0x159fc, 0x00, 0x01 },
    { "Palette (0B) shoryuken", 0x159fc, 0x15a1c, 0x27, 0x02 },
    { "Portrait",               0x1c39c, 0x1c41c },
};

const sGame_PaletteDataset XMVSF_A_Apocalypse_PALETTES[] =
{
    { "Small Body (intro)",     0x157dc, 0x157fc, 0x4f, 0x00 }, // confirmed
    { "Giant Head",             0x1579c, 0x157bc, 0x4f, 1 }, // confirmed
    { "Giant Body",             0x606e,   0x60ae, 0x4f, 0x03 }, // confirmed
    { "Giant Arm",              0x1577c, 0x1579c, 0x4f, 2 }, // confirmed
    { "Shoulder Guns",          0x157bc, 0x157dc, 0x4f, 4 }, // confirmed

    { "Shockwave",              0x157fc, 0x1581c }, // confirmed
    { "?",                      0x1581c, 0x1583c }, // unclear
    { "Drones",                 0x1583c, 0x1585c, 0x4f, 0x05 }, // confirmed
    { "Hand: Mace and Drill",   0x1585c, 0x1587c }, // confirmed
    { "Shoulder Lasers",        0x1587c, 0x1589c }, // confirmed
};

const sGame_PaletteDataset XMVSF_A_Apocalypse_PALETTES_Extras[] =
{
    { "Portrait", 0x1c2fc, 0x1c37c },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15a1c, 0x15a3c, 0x27, 0x00 },
    { "P1 fireballs", 0x15a3c, 0x15a5c, 0x27, 0x01 },
    { "P1 shoryuken", 0x15a5c, 0x15a7c, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15a7c, 0x15a9c, 0x27, 0x00 },
    { "P2 fireballs", 0x15a9c, 0x15abc, 0x27, 0x01 },
    { "P2 shoryuken", 0x15abc, 0x15adc, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_Extras[] =
{
    { "Palette (06)",           0x15adc, 0x15afc, 0x27, 0x00 },
    { "Palette (07) fireballs", 0x15afc, 0x15b1c, 0x27, 0x01 },
    { "Palette (08) shoryuken", 0x15b1c, 0x15b3c, 0x27, 0x02 },
    { "Palette (09)",           0x15b3c, 0x15b5c, 0x27, 0x00 },
    { "Palette (0A) fireballs", 0x15b5c, 0x15b7c, 0x27, 0x01 },
    { "Palette (0B) shoryuken", 0x15b7c, 0x15b9c, 0x27, 0x02 },
    { "Portrait",               0x1c43c, 0x1c4bc },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15c5c, 0x15c7c, 0x25, 0x00 },
    { "P1 fire FX", 0x15c7c, 0x15c9c, 0x25, 0x01 },
    { "P1 Sally", 0x15c9c, 0x15cbc, 0x25, 0x02 },

    { "P1 Teleport 1", 0x1895c, 0x1897c, indexCPS2_Dhalsim, 11 },
    { "P1 Teleport 2", 0x1897c, 0x1899c, indexCPS2_Dhalsim, 11 },
    { "P1 Teleport 3", 0x1899c, 0x189Bc, indexCPS2_Dhalsim, 11 },
    { "P1 Teleport 4", 0x189Bc, 0x189Dc, indexCPS2_Dhalsim, 11 },
    { "P1 Teleport 5", 0x189Dc, 0x189Fc, indexCPS2_Dhalsim, 11 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15cbc, 0x15cdc, 0x25, 0x00 },
    { "P2 fire FX", 0x15cdc, 0x15cfc, 0x25, 0x01 },
    { "P2 Sally", 0x15cfc, 0x15d1c, 0x25, 0x02 },

    { "P2 Teleport 1", 0x189Fc, 0x18A1c, indexCPS2_Dhalsim, 11 },
    { "P2 Teleport 2", 0x18A1c, 0x18A3c, indexCPS2_Dhalsim, 11 },
    { "P2 Teleport 3", 0x18A3c, 0x18A5c, indexCPS2_Dhalsim, 11 },
    { "P2 Teleport 4", 0x18A5c, 0x18A7c, indexCPS2_Dhalsim, 11 },
    { "P2 Teleport 5", 0x18A7c, 0x18A9c, indexCPS2_Dhalsim, 11 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_Extras[] =
{
    { "Palette (06)", 0x15d1c, 0x15d3c, 0x25, 0x00 },
    { "Palette (07)", 0x15d3c, 0x15d5c, 0x25, 0x00 },
    { "Portrait", 0x1c57c, 0x1c5fc },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15d5c, 0x15d7c, 0x01, 0x00 },
    { "P1 Banishing Fist", 0x15d7c, 0x15d9c, 0x01, 0x01 },
    { "Palette (02)", 0x15d9c, 0x15dbc },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15dbc, 0x15ddc, 0x01, 0x00 },
    { "P2 Banishing Fist", 0x15ddc, 0x15dfc, 0x01, 0x01 },
    { "Palette (05)", 0x15dfc, 0x15e1c },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_Extras[] =
{
    { "Palette (06)", 0x15e1c, 0x15e3c, 0x01, 0x00 },
    { "Palette (07) Banishing Fist", 0x15e3c, 0x15e5c, 0x01, 0x01 },
    { "Palette (08)", 0x15e5c, 0x15e7c },
    { "Palette (09)", 0x15e7c, 0x15e9c, 0x01, 0x00 },
    { "Palette (0A) Banishing Fist", 0x15e9c, 0x15ebc, 0x01, 0x01 },
    { "Palette (0B)", 0x15ebc, 0x15edc },
    { "Palette (0C)", 0x15edc, 0x15efc, 0x01, 0x00 },
    { "Palette (0D) Banishing Fist", 0x15efc, 0x15f1c, 0x01, 0x01 },
    { "Palette (0E)", 0x15f1c, 0x15f3c },
    { "Palette (0F)", 0x15f3c, 0x15f5c, 0x01, 0x00 },
    { "Palette (10) Banishing Fist", 0x15f5c, 0x15f7c, 0x01, 0x01 },
    { "Palette (11)", 0x15f7c, 0x15f9c },
    { "Palette (12)", 0x15f9c, 0x15fbc },
    { "Palette (13)", 0x15fbc, 0x15fdc },
    { "Portrait", 0x1c61c, 0x1c69c },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1609c, 0x160bc, 0x1e, 0x00 },
    { "P1 fireballs", 0x160bc, 0x160dc, 0x1e, 0x01 },
    { "P1 shoryuken", 0x160dc, 0x160fc, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x160fc, 0x1611c, 0x1e, 0x00 },
    { "P2 fireballs", 0x1611c, 0x1613c, 0x1e, 0x01 },
    { "P2 shoryuken", 0x1613c, 0x1615c, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1615c, 0x1617c, 0x1e, 0x00 },
    { "Palette (07)", 0x1617c, 0x1619c },
    { "Palette (08)", 0x1619c, 0x161bc },
    { "Palette (09)", 0x161bc, 0x161dc, 0x1e, 0x00 },
    { "Palette (0A)", 0x161dc, 0x161fc },
    { "Palette (0B)", 0x161fc, 0x1621c },
    { "Portrait", 0x1c75c, 0x1c7dc },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1621c, 0x1623c, 0x21, 0x00 },
    { "P1 Sonic Booms", 0x1623c, 0x1625c, 0x21, 0x01 },
    { "P1 Flash Kicks", 0x1625c, 0x1627c, 0x21, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1627c, 0x1629c, 0x21, 0x00 },
    { "P2 Sonic Booms", 0x1629c, 0x162bc, 0x21, 0x01 },
    { "P2 Flash Kicks", 0x162bc, 0x162dc, 0x21, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_Extras[] =
{
    { "Palette (06)", 0x162dc, 0x162fc, 0x21, 0x00 },
    { "? Sonic Booms", 0x162fc, 0x1631c, 0x21, 0x01 },
    { "? Flash Kicks", 0x1631c, 0x1633c, 0x21, 0x02 },
    { "Palette (09)", 0x1633c, 0x1635c, 0x21, 0x00 },
    { "? Sonic Booms", 0x1635c, 0x1637c, 0x21, 0x01 },
    { "? Flash Kicks", 0x1637c, 0x1639c, 0x21, 0x02 },
    { "Portrait", 0x1c7fc, 0x1c87c },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1639c, 0x163bc, 0x24, 0x00 },
    { "P1 psycho FX", 0x163bc, 0x163dc, 0x24, 0x01 },
    { "Palette (02)", 0x163dc, 0x163fc, 0x24, 0x00 },

    { "P1 Cannon Revenge 1", 0x18b1c, 0x18b3c, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 2", 0x18b3c, 0x18b5c, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 3", 0x18b5c, 0x18b7c, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 4", 0x18b7c, 0x18b9c, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 5", 0x18b9c, 0x18bbc, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 6", 0x18bbc, 0x18bdc, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 7", 0x18bdc, 0x18bfc, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 8", 0x18bfc, 0x18c1c, indexCPS2_Cammy, 11 },
    { "P1 Cannon Revenge 9", 0x18c1c, 0x18c3c, indexCPS2_Cammy, 11 },

};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x163fc, 0x1641c, 0x24, 0x00 },
    { "P2 psycho FX", 0x1641c, 0x1643c, 0x24, 0x01 },
    { "Palette (05)", 0x1643c, 0x1645c, 0x24, 0x00 },

    { "P2 Cannon Revenge 1", 0x18c3c, 0x18c5c, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 2", 0x18c5c, 0x18c7c, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 3", 0x18c7c, 0x18c9c, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 4", 0x18c9c, 0x18cbc, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 5", 0x18cbc, 0x18cdc, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 6", 0x18cdc, 0x18cfc, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 7", 0x18cfc, 0x18d1c, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 8", 0x18d1c, 0x18d3c, indexCPS2_Cammy, 11 },
    { "P2 Cannon Revenge 9", 0x18d3c, 0x18d5c, indexCPS2_Cammy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1645c, 0x1647c },
    { "Palette (07)", 0x1647c, 0x1649c },
    { "Palette (08)", 0x1649c, 0x164bc },
    { "Portrait", 0x1c89c, 0x1c91c },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15b9c, 0x15bbc, 0x1b, 0x00 },
    { "P1 Kick FX", 0x15bbc, 0x15bdc, 0x1b, 0x01 },
    { "P1 Kikosho", 0x15bdc, 0x15bfc, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15bfc, 0x15c1c, 0x1b, 0x00 },
    { "P2 Kick FX", 0x15c1c, 0x15c3c, 0x1b, 0x01 },
    { "P2 Kikosho", 0x15c3c, 0x15c5c, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_Extras[] =
{
    { "Portrait", 0x1c4dc, 0x1c55c },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x164bc, 0x164dc, 0x1b, 0x0C },
    { "P1 Kick FX", 0x164dc, 0x164fc, 0x1b, 0x01 },
    { "P1 Kikosho", 0x164fc, 0x1651c, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P2[] =
{
    { "P2 Kick Colors", 0x1651c, 0x1653c, 0x1b, 0x0C },
    { "P2 Kick FX", 0x1653c, 0x1655c, 0x1b, 0x01 },
    { "P2 Kikosho", 0x1655c, 0x1657c, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_Extras[] =
{
    { "Portrait", 0x1c93c, 0x1c9bc },
};

const sGame_PaletteDataset XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x16a7c, 0x16a9c, indexCPS2_Wolverine },
    { "Burning 2", 0x16a9c, 0x16abc, indexCPS2_Wolverine },
    { "Shocked 1", 0x16abc, 0x16adc, indexCPS2_Wolverine },
    { "Shocked 2", 0x16adc, 0x16afc, indexCPS2_Wolverine },
    { "Dark Burning 1", 0x16afc, 0x16b1c, indexCPS2_Wolverine },
    { "Dark Burning 2", 0x16b1c, 0x16b3c, indexCPS2_Wolverine },
    { "Kinectic Charged 1", 0x16b3c, 0x16b5c, indexCPS2_Wolverine },
    { "Kinectic Charged 2", 0x16b5c, 0x16b7c, indexCPS2_Wolverine },
    { "Kinectic Charged 3", 0x16b7c, 0x16b9c, indexCPS2_Wolverine },
};

const sGame_PaletteDataset XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x16b9c, 0x16bbc, indexCPS2_Cyclops },
    { "Burning 2", 0x16bbc, 0x16bdc, indexCPS2_Cyclops },
    { "Shocked 1", 0x16bdc, 0x16bfc, indexCPS2_Cyclops },
    { "Shocked 2", 0x16bfc, 0x16c1c, indexCPS2_Cyclops },
    { "Dark Burning 1", 0x16c1c, 0x16c3c, indexCPS2_Cyclops },
    { "Dark Burning 2", 0x16c3c, 0x16c5c, indexCPS2_Cyclops },
    { "Kinectic Charged 1", 0x16c5c, 0x16c7c, indexCPS2_Cyclops },
    { "Kinectic Charged 2", 0x16c7c, 0x16c9c, indexCPS2_Cyclops },
    { "Kinectic Charged 3", 0x16c9c, 0x16cbc, indexCPS2_Cyclops },
};

const sGame_PaletteDataset XMVSF_A_STORM_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x16cbc, 0x16cdc, indexCPS2_Storm },
    { "Burning 2", 0x16cdc, 0x16cfc, indexCPS2_Storm },
    { "Shocked 1", 0x16cfc, 0x16d1c, indexCPS2_Storm },
    { "Shocked 2", 0x16d1c, 0x16d3c, indexCPS2_Storm },
    { "Dark Burning 1", 0x16d3c, 0x16d5c, indexCPS2_Storm },
    { "Dark Burning 2", 0x16d5c, 0x16d7c, indexCPS2_Storm },
    { "Kinectic Charged 1", 0x16d7c, 0x16d9c, indexCPS2_Storm },
    { "Kinectic Charged 2", 0x16d9c, 0x16dbc, indexCPS2_Storm },
    { "Kinectic Charged 3", 0x16dbc, 0x16ddc, indexCPS2_Storm },
};

const sGame_PaletteDataset XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x16ddc, 0x16dfc, indexCPS2_Rogue },
    { "Burning 2", 0x16dfc, 0x16e1c, indexCPS2_Rogue },
    { "Shocked 1", 0x16e1c, 0x16e3c, indexCPS2_Rogue },
    { "Shocked 2", 0x16e3c, 0x16e5c, indexCPS2_Rogue },
    { "Dark Burning 1", 0x16e5c, 0x16e7c, indexCPS2_Rogue },
    { "Dark Burning 2", 0x16e7c, 0x16e9c, indexCPS2_Rogue },
    { "Kinectic Charged 1", 0x16e9c, 0x16ebc, indexCPS2_Rogue },
    { "Kinectic Charged 2", 0x16ebc, 0x16edc, indexCPS2_Rogue },
    { "Kinectic Charged 3", 0x16edc, 0x16efc, indexCPS2_Rogue },
};

const sGame_PaletteDataset XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x16efc, 0x16f1c, indexCPS2_Gambit },
    { "Burning 2", 0x16f1c, 0x16f3c, indexCPS2_Gambit },
    { "Shocked 1", 0x16f3c, 0x16f5c, indexCPS2_Gambit },
    { "Shocked 2", 0x16f5c, 0x16f7c, indexCPS2_Gambit },
    { "Dark Burning 1", 0x16f7c, 0x16f9c, indexCPS2_Gambit },
    { "Dark Burning 2", 0x16f9c, 0x16fbc, indexCPS2_Gambit },
    { "Kinectic Charged 1", 0x16fbc, 0x16fdc, indexCPS2_Gambit },
    { "Kinectic Charged 2", 0x16fdc, 0x16ffc, indexCPS2_Gambit },
    { "Kinectic Charged 3", 0x16ffc, 0x1701c, indexCPS2_Gambit },
};

const sGame_PaletteDataset XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x1701c, 0x1703c, indexCPS2_Sabretooth },
    { "Burning 2", 0x1703c, 0x1705c, indexCPS2_Sabretooth },
    { "Shocked 1", 0x1705c, 0x1707c, indexCPS2_Sabretooth },
    { "Shocked 2", 0x1707c, 0x1709c, indexCPS2_Sabretooth },
    { "Dark Burning 1", 0x1709c, 0x170bc, indexCPS2_Sabretooth },
    { "Dark Burning 2", 0x170bc, 0x170dc, indexCPS2_Sabretooth },
    { "Kinectic Charged 1", 0x170dc, 0x170fc, indexCPS2_Sabretooth },
    { "Kinectic Charged 2", 0x170fc, 0x1711c, indexCPS2_Sabretooth },
    { "Kinectic Charged 3", 0x1711c, 0x1713c, indexCPS2_Sabretooth },
};

const sGame_PaletteDataset XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x1713c, 0x1715c, indexCPS2_Juggy },
    { "Burning 2", 0x1715c, 0x1717c, indexCPS2_Juggy },
    { "Shocked 1", 0x1717c, 0x1719c, indexCPS2_Juggy },
    { "Shocked 2", 0x1719c, 0x171bc, indexCPS2_Juggy },
    { "Dark Burning 1", 0x171bc, 0x171dc, indexCPS2_Juggy },
    { "Dark Burning 2", 0x171dc, 0x171fc, indexCPS2_Juggy },
    { "Kinectic Charged 1", 0x171fc, 0x1721c, indexCPS2_Juggy },
    { "Kinectic Charged 2", 0x1721c, 0x1723c, indexCPS2_Juggy },
    { "Kinectic Charged 3", 0x1723c, 0x1725c, indexCPS2_Juggy },
};

const sGame_PaletteDataset XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x1725c, 0x1727c, indexCPS2_Magneto },
    { "Burning 2", 0x1727c, 0x1729c, indexCPS2_Magneto },
    { "Shocked 1", 0x1729c, 0x172bc, indexCPS2_Magneto },
    { "Shocked 2", 0x172bc, 0x172dc, indexCPS2_Magneto },
    { "Dark Burning 1", 0x172dc, 0x172fc, indexCPS2_Magneto },
    { "Dark Burning 2", 0x172fc, 0x1731c, indexCPS2_Magneto },
    { "Kinectic Charged 1", 0x1731c, 0x1733c, indexCPS2_Magneto },
    { "Kinectic Charged 2", 0x1733c, 0x1735c, indexCPS2_Magneto },
    { "Kinectic Charged 3", 0x1735c, 0x1737c, indexCPS2_Magneto },
};

const sGame_PaletteDataset XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x1737c, 0x1739c, indexCPS2_Apocalypse },
    { "Burning 2", 0x1739c, 0x173bc, indexCPS2_Apocalypse },
    { "Shocked 1", 0x173bc, 0x173dc, indexCPS2_Apocalypse },
    { "Shocked 2", 0x173dc, 0x173fc, indexCPS2_Apocalypse },
    { "Dark Burning 1", 0x173fc, 0x1741c, indexCPS2_Apocalypse },
    { "Dark Burning 2", 0x1741c, 0x1743c, indexCPS2_Apocalypse },
    { "Kinectic Charged 1", 0x1743c, 0x1745c, indexCPS2_Apocalypse },
    { "Kinectic Charged 2", 0x1745c, 0x1747c, indexCPS2_Apocalypse },
    { "Kinectic Charged 3", 0x1747c, 0x1749c, indexCPS2_Apocalypse },
};

const sGame_PaletteDataset XMVSF_A_RYU_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x1749c, 0x174bc, indexCPS2_Ryu },
    { "Burning 2", 0x174bc, 0x174dc, indexCPS2_Ryu },
    { "Shocked 1", 0x174dc, 0x174fc, indexCPS2_Ryu },
    { "Shocked 2", 0x174fc, 0x1751c, indexCPS2_Ryu },
    { "Dark Burning 1", 0x1751c, 0x1753c, indexCPS2_Ryu },
    { "Dark Burning 2", 0x1753c, 0x1755c, indexCPS2_Ryu },
    { "Kinectic Charged 1", 0x1755c, 0x1757c, indexCPS2_Ryu },
    { "Kinectic Charged 2", 0x1757c, 0x1759c, indexCPS2_Ryu },
    { "Kinectic Charged 3", 0x1759c, 0x175bc, indexCPS2_Ryu },
};

const sGame_PaletteDataset XMVSF_A_KEN_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x175bc, 0x175dc, indexCPS2_Ken },
    { "Burning 2", 0x175dc, 0x175fc, indexCPS2_Ken },
    { "Shocked 1", 0x175fc, 0x1761c, indexCPS2_Ken },
    { "Shocked 2", 0x1761c, 0x1763c, indexCPS2_Ken },
    { "Dark Burning 1", 0x1763c, 0x1765c, indexCPS2_Ken },
    { "Dark Burning 2", 0x1765c, 0x1767c, indexCPS2_Ken },
    { "Kinectic Charged 1", 0x1767c, 0x1769c, indexCPS2_Ken },
    { "Kinectic Charged 2", 0x1769c, 0x176bc, indexCPS2_Ken },
    { "Kinectic Charged 3", 0x176bc, 0x176dc, indexCPS2_Ken },
};

const sGame_PaletteDataset XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x176dc, 0x176fc, indexCPS2_ChunLi },
    { "Burning 2", 0x176fc, 0x1771c, indexCPS2_ChunLi },
    { "Shocked 1", 0x1771c, 0x1773c, indexCPS2_ChunLi },
    { "Shocked 2", 0x1773c, 0x1775c, indexCPS2_ChunLi },
    { "Dark Burning 1", 0x1775c, 0x1777c, indexCPS2_ChunLi },
    { "Dark Burning 2", 0x1777c, 0x1779c, indexCPS2_ChunLi },
    { "Kinectic Charged 1", 0x1779c, 0x177bc, indexCPS2_ChunLi },
    { "Kinectic Charged 2", 0x177bc, 0x177dc, indexCPS2_ChunLi },
    { "Kinectic Charged 3", 0x177dc, 0x177fc, indexCPS2_ChunLi },
};

const sGame_PaletteDataset XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x177fc, 0x1781c, indexCPS2_Dhalsim },
    { "Burning 2", 0x1781c, 0x1783c, indexCPS2_Dhalsim },
    { "Shocked 1", 0x1783c, 0x1785c, indexCPS2_Dhalsim },
    { "Shocked 2", 0x1785c, 0x1787c, indexCPS2_Dhalsim },
    { "Dark Burning 1", 0x1787c, 0x1789c, indexCPS2_Dhalsim },
    { "Dark Burning 2", 0x1789c, 0x178bc, indexCPS2_Dhalsim },
    { "Kinectic Charged 1", 0x178bc, 0x178dc, indexCPS2_Dhalsim },
    { "Kinectic Charged 2", 0x178dc, 0x178fc, indexCPS2_Dhalsim },
    { "Kinectic Charged 3", 0x178fc, 0x1791c, indexCPS2_Dhalsim },
};

const sGame_PaletteDataset XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x1791c, 0x1793c, indexCPS2_Zangief },
    { "Burning 2", 0x1793c, 0x1795c, indexCPS2_Zangief },
    { "Shocked 1", 0x1795c, 0x1797c, indexCPS2_Zangief },
    { "Shocked 2", 0x1797c, 0x1799c, indexCPS2_Zangief },
    { "Dark Burning 1", 0x1799c, 0x179bc, indexCPS2_Zangief },
    { "Dark Burning 2", 0x179bc, 0x179dc, indexCPS2_Zangief },
    { "Kinectic Charged 1", 0x179dc, 0x179fc, indexCPS2_Zangief },
    { "Kinectic Charged 2", 0x179fc, 0x17a1c, indexCPS2_Zangief },
    { "Kinectic Charged 3", 0x17a1c, 0x17a3c, indexCPS2_Zangief },
};

const sGame_PaletteDataset XMVSF_A_MBISON_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x17a3c, 0x17a5c, indexCPS2_Bison },
    { "Burning 2", 0x17a5c, 0x17a7c, indexCPS2_Bison },
    { "Shocked 1", 0x17a7c, 0x17a9c, indexCPS2_Bison },
    { "Shocked 2", 0x17a9c, 0x17abc, indexCPS2_Bison },
    { "Dark Burning 1", 0x17abc, 0x17adc, indexCPS2_Bison },
    { "Dark Burning 2", 0x17adc, 0x17afc, indexCPS2_Bison },
    { "Kinectic Charged 1", 0x17afc, 0x17b1c, indexCPS2_Bison },
    { "Kinectic Charged 2", 0x17b1c, 0x17b3c, indexCPS2_Bison },
    { "Kinectic Charged 3", 0x17b3c, 0x17b5c, indexCPS2_Bison },
};

const sGame_PaletteDataset XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x17b5c, 0x17b7c, indexCPS2_Akuma },
    { "Burning 2", 0x17b7c, 0x17b9c, indexCPS2_Akuma },
    { "Shocked 1", 0x17b9c, 0x17bbc, indexCPS2_Akuma },
    { "Shocked 2", 0x17bbc, 0x17bdc, indexCPS2_Akuma },
    { "Dark Burning 1", 0x17bdc, 0x17bfc, indexCPS2_Akuma },
    { "Dark Burning 2", 0x17bfc, 0x17c1c, indexCPS2_Akuma },
    { "Kinectic Charged 1", 0x17c1c, 0x17c3c, indexCPS2_Akuma },
    { "Kinectic Charged 2", 0x17c3c, 0x17c5c, indexCPS2_Akuma },
    { "Kinectic Charged 3", 0x17c5c, 0x17c7c, indexCPS2_Akuma },
};

const sGame_PaletteDataset XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x17c7c, 0x17c9c, indexCPS2_Charlie },
    { "Burning 2", 0x17c9c, 0x17cbc, indexCPS2_Charlie },
    { "Shocked 1", 0x17cbc, 0x17cdc, indexCPS2_Charlie },
    { "Shocked 2", 0x17cdc, 0x17cfc, indexCPS2_Charlie },
    { "Dark Burning 1", 0x17cfc, 0x17d1c, indexCPS2_Charlie },
    { "Dark Burning 2", 0x17d1c, 0x17d3c, indexCPS2_Charlie },
    { "Kinectic Charged 1", 0x17d3c, 0x17d5c, indexCPS2_Charlie },
    { "Kinectic Charged 2", 0x17d5c, 0x17d7c, indexCPS2_Charlie },
    { "Kinectic Charged 3", 0x17d7c, 0x17d9c, indexCPS2_Charlie },
};

const sGame_PaletteDataset XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x17d9c, 0x17dbc, indexCPS2_Cammy },
    { "Burning 2", 0x17dbc, 0x17ddc, indexCPS2_Cammy },
    { "Shocked 1", 0x17ddc, 0x17dfc, indexCPS2_Cammy },
    { "Shocked 2", 0x17dfc, 0x17e1c, indexCPS2_Cammy },
    { "Dark Burning 1", 0x17e1c, 0x17e3c, indexCPS2_Cammy },
    { "Dark Burning 2", 0x17e3c, 0x17e5c, indexCPS2_Cammy },
    { "Kinectic Charged 1", 0x17e5c, 0x17e7c, indexCPS2_Cammy },
    { "Kinectic Charged 2", 0x17e7c, 0x17e9c, indexCPS2_Cammy },
    { "Kinectic Charged 3", 0x17e9c, 0x17ebc, indexCPS2_Cammy },
};

const sGame_PaletteDataset XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS[] =
{
    { "Burning 1", 0x17ebc, 0x17edc, indexCPS2_ChunLi, 0x0C },
    { "Burning 2", 0x17edc, 0x17efc, indexCPS2_ChunLi, 0x0C },
    { "Shocked 1", 0x17efc, 0x17f1c, indexCPS2_ChunLi, 0x0C },
    { "Shocked 2", 0x17f1c, 0x17f3c, indexCPS2_ChunLi, 0x0C },
    { "Dark Burning 1", 0x17f3c, 0x17f5c, indexCPS2_ChunLi, 0x0C },
    { "Dark Burning 2", 0x17f5c, 0x17f7c, indexCPS2_ChunLi, 0x0C },
    { "Kinectic Charged 1", 0x17f7c, 0x17f9c, indexCPS2_ChunLi, 0x0C },
    { "Kinectic Charged 2", 0x17f9c, 0x17fbc, indexCPS2_ChunLi, 0x0C },
    { "Kinectic Charged 3", 0x17fbc, 0x17fdc, indexCPS2_ChunLi, 0x0C },
};

const sDescTreeNode XMVSF_A_WOLVERINE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P1, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P2, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CYCLOPS_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P2) },
    { "Extra", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_STORM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P1, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P2, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Storm_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_STORM_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_STORM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_ROGUE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P1, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P2, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_GAMBIT_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_SABRETOOTH_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P1, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P2, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_JUGGERNAUT_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P1, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P2, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_MAGNETO_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P1, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P2, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_APOCALYPSE_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void *)XMVSF_A_Apocalypse_PALETTES, ARRAYSIZE(XMVSF_A_Apocalypse_PALETTES) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Apocalypse_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Apocalypse_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_RYU_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_RYU_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_RYU_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_KEN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ken_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_KEN_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_KEN_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_DHALSIM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P1, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P2, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_ZANGIEF_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P1, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P2, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_MBISON_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P1, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P2, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_Extras, ARRAYSIZE(XMVSF_A_MBison_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_MBISON_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_MBISON_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_GOUKI_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHARLIE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P1, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P2, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CAMMY_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHUNLI_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_Extras, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHUNLISFA_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_Extras, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_Extras) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_UNITS[XMVSF_A_NUMUNIT] =
{
   { "Cammy", DESC_NODETYPE_TREE, (void*)XMVSF_A_CAMMY_COLLECTION, ARRAYSIZE(XMVSF_A_CAMMY_COLLECTION) },
   { "Charlie", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHARLIE_COLLECTION, ARRAYSIZE(XMVSF_A_CHARLIE_COLLECTION) },
   { "Chun-Li", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLI_COLLECTION, ARRAYSIZE(XMVSF_A_CHUNLI_COLLECTION) },
   { "Chun-Li (SFA)", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLISFA_COLLECTION, ARRAYSIZE(XMVSF_A_CHUNLISFA_COLLECTION) },
   { "Cyclops", DESC_NODETYPE_TREE, (void*)XMVSF_A_CYCLOPS_COLLECTION, ARRAYSIZE(XMVSF_A_CYCLOPS_COLLECTION) },
   { "Dhalsim", DESC_NODETYPE_TREE, (void*)XMVSF_A_DHALSIM_COLLECTION, ARRAYSIZE(XMVSF_A_DHALSIM_COLLECTION) },
   { "Gambit", DESC_NODETYPE_TREE, (void*)XMVSF_A_GAMBIT_COLLECTION, ARRAYSIZE(XMVSF_A_GAMBIT_COLLECTION) },
   { "Gouki", DESC_NODETYPE_TREE, (void*)XMVSF_A_GOUKI_COLLECTION, ARRAYSIZE(XMVSF_A_GOUKI_COLLECTION) },
   { "Juggernaut", DESC_NODETYPE_TREE, (void*)XMVSF_A_JUGGERNAUT_COLLECTION, ARRAYSIZE(XMVSF_A_JUGGERNAUT_COLLECTION) },
   { "Ken", DESC_NODETYPE_TREE, (void*)XMVSF_A_KEN_COLLECTION, ARRAYSIZE(XMVSF_A_KEN_COLLECTION) },
   { "M. Bison", DESC_NODETYPE_TREE, (void*)XMVSF_A_MBISON_COLLECTION, ARRAYSIZE(XMVSF_A_MBISON_COLLECTION) },
   { "Magneto", DESC_NODETYPE_TREE, (void*)XMVSF_A_MAGNETO_COLLECTION, ARRAYSIZE(XMVSF_A_MAGNETO_COLLECTION) },
   { "Rogue", DESC_NODETYPE_TREE, (void*)XMVSF_A_ROGUE_COLLECTION, ARRAYSIZE(XMVSF_A_ROGUE_COLLECTION) },
   { "Ryu", DESC_NODETYPE_TREE, (void*)XMVSF_A_RYU_COLLECTION, ARRAYSIZE(XMVSF_A_RYU_COLLECTION) },
   { "Sabretooth", DESC_NODETYPE_TREE, (void*)XMVSF_A_SABRETOOTH_COLLECTION, ARRAYSIZE(XMVSF_A_SABRETOOTH_COLLECTION) },
   { "Storm", DESC_NODETYPE_TREE, (void*)XMVSF_A_STORM_COLLECTION, ARRAYSIZE(XMVSF_A_STORM_COLLECTION) },
   { "Wolverine", DESC_NODETYPE_TREE, (void*)XMVSF_A_WOLVERINE_COLLECTION, ARRAYSIZE(XMVSF_A_WOLVERINE_COLLECTION) },
   { "Zangief", DESC_NODETYPE_TREE, (void*)XMVSF_A_ZANGIEF_COLLECTION, ARRAYSIZE(XMVSF_A_ZANGIEF_COLLECTION) },
   { "Apocalypse", DESC_NODETYPE_TREE, (void*)XMVSF_A_APOCALYPSE_COLLECTION, ARRAYSIZE(XMVSF_A_APOCALYPSE_COLLECTION) },
};

// WARNING: If this sort doesn't match XMVSF_A_UNITS very bad things will happen.
const UINT32 XMVSF_A_UNITLOC[XMVSF_A_NUMUNIT + 1] =
{
    0x1639C, // Cammy
    0x1621C, // Charlie
    0x15B9C, // Chun-Li
    0x164BC, // Chun-Li (SFA)
    0x14E3C, // Cyclops
    0x15C5C, // Dhalsim 
    0x153DC, // Gambit
    0x1609C, // Gouki
    0x1559C, // Juggernaut
    0x15A1C, // Ken
    0x15FDC, // M. Bison
    0x156BC, // Magneto
    0x1531C, // Rogue
    0x1589C, // Ryu
    0x1549C, // Sabretooth
    0x14FBC, // Storm
    0x14D7C, // Wolverine
    0x15D5C, // Zangief
    0x157DC, // Apocalypse
    0x1657C, // End of Apocalypse range...?  This value is unclear.
};

/*
These are the ROM locations sorted by layout rather than alphabetically:
    0x14D7C, // Wolverine
    0x14E3C, // Cyclops
    0x14FBC, // Storm
    0x1531C, // Rogue
    0x153DC, // Gambit
    0x1549C, // Sabretooth
    0x1559C, // Juggernaut
    0x156BC, // Magneto
    0x157DC, // Apocalypse
    0x1589C, // Ryu
    0x15A1C, // Ken
    0x15B9C, // Chun-Li
    0x15C5C, // Dhalsim 
    0x15D5C, // Zangief
    0x15FDC, // M. Bison
    0x1609C, // Gouki
    0x1621C, // Charlie
    0x1639C, // Cammy
    0x164BC, // Chun-Li (SFA)
    0x1657C,
*/

// We extend this array with data groveled from the xmvsfe.txt extensible extras file, if any.
const stExtraDef XMVSF_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

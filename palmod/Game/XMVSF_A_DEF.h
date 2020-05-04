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

const UINT32 XMVSF_A_TRUE_UNITLOC[XMVSF_A_NUMUNIT + 1] =
{
    0x14D7C, // Wolverine
    0x14E3C, // Cyclops
    0x14FBC, // Storm
    0x1531C, // Rogue
    0x153DC, // GAMBIT
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
};

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x14d7c, 0x14d8c, 0x07, 0x00, true },
    { "P1 claw", 0x14d9c, 0x14dac, 0x07, 0x01 },
    { "P1 slash FX", 0x14dbc, 0x14dcc, 0x07, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x14ddc, 0x14dec, 0x07, 0x00, true },
    { "P2 claw", 0x14dfc, 0x14e0c, 0x07, 0x01 },
    { "P2 slash FX", 0x14e1c, 0x14e2c, 0x07, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_Extras[] =
{
    { "Portrait", 0x1bdfc, 0x1be3c },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x14e3c, 0x14e4c, 0x06, 0x00 },
    { "P1 HK", 0x14e5c, 0x14e6c, 0x06, 0x01 },
    { "P1 optic FX", 0x14e7c, 0x14e8c, 0x06, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x14e9c, 0x14eac, 0x06, 0x00 },
    { "P2 HK", 0x14ebc, 0x14ecc, 0x06, 0x01 },
    { "P2 optic FX", 0x14edc, 0x14eec, 0x06, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_Extras[] =
{
    { "Palette (06)", 0x14efc, 0x14f0c },
    { "Palette (07)", 0x14f1c, 0x14f2c },
    { "? optic FX", 0x14f3c, 0x14f4c, 0x06, 0x02 },
    { "Palette (09)", 0x14f5c, 0x14f6c },
    { "Palette (0A)", 0x14f7c, 0x14f8c },
    { "? optic FX", 0x14f9c, 0x14fac, 0x06, 0x02 },
    { "Portrait", 0x1be9c, 0x1bedc },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x14fbc, 0x14fcc, 0x2a, 0x00 },
    { "Palette (01)", 0x14fdc, 0x14fec, 0x2a, 0x00 },
    { "Palette (02)", 0x14ffc, 0x1500c, 0x2a, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1501c, 0x1502c, 0x2a, 0x00 },
    { "Palette (04)", 0x1503c, 0x1504c, 0x2a, 0x00 },
    { "Palette (05)", 0x1505c, 0x1506c, 0x2a, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1507c, 0x1508c, 0x2a, 0x00 },
    { "Palette (07)", 0x1509c, 0x150ac, 0x2a, 0x00 },
    { "Palette (08)", 0x150bc, 0x150cc, 0x2a, 0x00 },
    { "Palette (09)", 0x150dc, 0x150ec, 0x2a, 0x00 },
    { "Palette (0A)", 0x150fc, 0x1510c, 0x2a, 0x00 },
    { "Palette (0B)", 0x1511c, 0x1512c, 0x2a, 0x00 },
    { "Palette (0C)", 0x1513c, 0x1514c, 0x2a, 0x00 },
    { "Palette (0D)", 0x1515c, 0x1516c, 0x2a, 0x00 },
    { "Palette (0E)", 0x1517c, 0x1518c, 0x2a, 0x00 },
    { "Palette (0F)", 0x1519c, 0x151ac, 0x2a, 0x00 },
    { "Palette (10)", 0x151bc, 0x151cc, 0x2a, 0x00 },
    { "Palette (11)", 0x151dc, 0x151ec, 0x2a, 0x00 },
    { "Palette (12)", 0x151fc, 0x1520c, 0x2a, 0x00 },
    { "Palette (13)", 0x1521c, 0x1522c, 0x2a, 0x00 },
    { "Palette (14)", 0x1523c, 0x1524c, 0x2a, 0x00 },
    { "Palette (15)", 0x1525c, 0x1526c, 0x2a, 0x00 },
    { "Palette (16)", 0x1527c, 0x1528c, 0x2a, 0x00 },
    { "Palette (17)", 0x1529c, 0x152ac, 0x2a, 0x00 },
    { "Palette (18)", 0x152bc, 0x152cc, 0x2a, 0x00 },
    { "Palette (19)", 0x152dc, 0x152ec, 0x2a, 0x00 },
    { "Palette (1A)", 0x152fc, 0x1530c, 0x2a, 0x00 },
    { "Portrait", 0x1bf3c, 0x1bf7c },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x153dc, 0x153ec, 0x28, 0x00 },
    { "P1 slash FX", 0x153fc, 0x1540c, 0x28, 0x01 },
    { "P1 card FX", 0x1541c, 0x1542c, 0x28, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1543c, 0x1544c, 0x28, 0x00 },
    { "P2 slash FX", 0x1545c, 0x1546c, 0x28, 0x01 },
    { "P2 card FX", 0x1547c, 0x1548c, 0x28, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_Extras[] =
{
    { "Portrait", 0x1c07c, 0x1c0bc },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1549c, 0x154ac, 0x2b, 0x00 },
    { "P1 slash FX", 0x154bc, 0x154cc, 0x2b, 0x01 },
    { "P1 Birdy", 0x154dc, 0x154ec, 0x2b, 0x02 },
    { "P1 Getaway car", 0x1555c, 0x1556c, 0x2b, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x154fc, 0x1550c, 0x2b, 0x00 },
    { "P2 slash FX", 0x1551c, 0x1552c, 0x2b, 0x01 },
    { "P2 Birdy", 0x1553c, 0x1554c, 0x2b, 0x02 },
    { "P2 Getaway car", 0x1557c, 0x1558c, 0x2b, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_Extras[] =
{
    { "Portrait", 0x1c11c, 0x1c15c },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1559c, 0x155ac, 0x29, 0x00 },
    { "Palette (01)", 0x155bc, 0x155cc },
    { "P1 ground FX", 0x155dc, 0x155ec, 0x29, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x155fc, 0x1560c, 0x29, 0x00 },
    { "Palette (04)", 0x1561c, 0x1562c },
    { "P2 ground FX", 0x1563c, 0x1564c, 0x29, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1565c, 0x1566c, 0x29, 0x00 },
    { "Palette (07)", 0x1567c, 0x1568c, 0x29, 0x00 },
    { "Palette (08)", 0x1569c, 0x156ac, 0x29, 0x00 },
    { "Portrait", 0x1c1bc, 0x1c1fc },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15fdc, 0x15fec, 0x26, 0x00 },
    { "P1 psycho FX", 0x15ffc, 0x1600c },
    { "Palette (02)", 0x1601c, 0x1602c },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1603c, 0x1604c, 0x26, 0x00 },
    { "P2 psycho FX", 0x1605c, 0x1606c },
    { "Palette (05)", 0x1607c, 0x1608c },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_Extras[] =
{
    { "Portrait", 0x1c6bc, 0x1c6fc },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x156bc, 0x156cc, 0x2c, 0x00 },
    { "P1 magnetic FX", 0x156dc, 0x156ec, 0x2c, 0x01 },
    { "P2 magnetic FX 2", 0x156fc, 0x1570c, 0x2c, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1571c, 0x1572c, 0x2c, 0x00 },
    { "P2 magnetic FX", 0x1573c, 0x1574c, 0x2c, 0x01 },
    { "P2 magnetic FX 2", 0x1575c, 0x1576c, 0x2c, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1577c, 0x1578c },
    { "Palette (07)", 0x1579c, 0x157ac },
    { "Palette (08)", 0x157bc, 0x157cc },
    { "Portrait", 0x1c25c, 0x1c29c },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1531c, 0x1532c, 0x0a, 0x00 },
    { "Palette (01)", 0x1533c, 0x1534c },
    { "P1 ground FX", 0x1535c, 0x1536c, 0x0a, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1537c, 0x1538c, 0x0a, 0x00 },
    { "Palette (04)", 0x1539c, 0x153ac },
    { "P2 ground FX", 0x153bc, 0x153cc, 0x0a, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_Extras[] =
{
    { "Portrait", 0x1bfdc, 0x1c01c },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1589c, 0x158ac, 0x00, 0x00 },
    { "P1 fireballs", 0x158bc, 0x158cc, 0x00, 0x01 },
    { "P1 shoryuken", 0x158dc, 0x158ec, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x158fc, 0x1590c, 0x00, 0x00 },
    { "P2 fireballs", 0x1591c, 0x1592c, 0x00, 0x01 },
    { "P2 shoryuken", 0x1593c, 0x1594c, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1595c, 0x1596c, 0x00, 0x00 },
    { "Palette (07) fireballs", 0x1597c, 0x1598c, 0x00, 0x01 },
    { "Palette (08) shoryuken", 0x1599c, 0x159ac, 0x27, 0x02 },
    { "Palette (09)", 0x159bc, 0x159cc, 0x00, 0x00 },
    { "Palette (0A) fireballs", 0x159dc, 0x159ec, 0x00, 0x01 },
    { "Palette (0B) shoryuken", 0x159fc, 0x15a0c, 0x27, 0x02 },
    { "Portrait", 0x1c39c, 0x1c3dc },
};

const sGame_PaletteDataset XMVSF_A_Apocalypse_PALETTES[] =
{
    { "Small Body (intro)", 0x157dc, 0x157ec, 0x4f, 0x00 },
    { "Drones", 0x1583c, 0x1584c, 0x4f, 0x05 },
    { "Angry Drones", 0x157fc, 0x1580c, 0x4f, 0x05 },
    { "?", 0x1581c, 0x1582c },
    { "?", 0x1585c, 0x1586c },
    { "Giant Body?", 0x1587c, 0x1588c },
};

const sGame_PaletteDataset XMVSF_A_Apocalypse_PALETTES_Extras[] =
{
    { "Portrait", 0x1c2fc, 0x1c33c },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15a1c, 0x15a2c, 0x27, 0x00 },
    { "P1 fireballs", 0x15a3c, 0x15a4c, 0x27, 0x01 },
    { "P1 shoryuken", 0x15a5c, 0x15a6c, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15a7c, 0x15a8c, 0x27, 0x00 },
    { "P2 fireballs", 0x15a9c, 0x15aac, 0x27, 0x01 },
    { "P2 shoryuken", 0x15abc, 0x15acc, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_Extras[] =
{
    { "Palette (06)", 0x15adc, 0x15aec, 0x27, 0x00 },
    { "Palette (07) fireballs", 0x15afc, 0x15b0c, 0x27, 0x01 },
    { "Palette (08) shoryuken", 0x15b1c, 0x15b2c, 0x27, 0x02 },
    { "Palette (09)", 0x15b3c, 0x15b4c, 0x27, 0x00 },
    { "Palette (0A) fireballs", 0x15b5c, 0x15b6c, 0x27, 0x01 },
    { "Palette (0B) shoryuken", 0x15b7c, 0x15b8c, 0x27, 0x02 },
    { "Portrait", 0x1c43c, 0x1c47c },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15c5c, 0x15c6c, 0x25, 0x00 },
    { "P1 fire FX", 0x15c7c, 0x15c8c, 0x25, 0x01 },
    { "P1 Sally", 0x15c9c, 0x15cac, 0x25, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15cbc, 0x15ccc, 0x25, 0x00 },
    { "P2 fire FX", 0x15cdc, 0x15cec, 0x25, 0x01 },
    { "P2 Sally", 0x15cfc, 0x15d0c, 0x25, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_Extras[] =
{
    { "Palette (06)", 0x15d1c, 0x15d2c, 0x25, 0x00 },
    { "Palette (07)", 0x15d3c, 0x15d4c, 0x25, 0x00 },
    { "Portrait", 0x1c57c, 0x1c5bc },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15d5c, 0x15d6c, 0x01, 0x00 },
    { "P1 Banishing Fist", 0x15d7c, 0x15d8c, 0x01, 0x01 },
    { "Palette (02)", 0x15d9c, 0x15dac },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15dbc, 0x15dcc, 0x01, 0x00 },
    { "P2 Banishing Fist", 0x15ddc, 0x15dec, 0x01, 0x01 },
    { "Palette (05)", 0x15dfc, 0x15e0c },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_Extras[] =
{
    { "Palette (06)", 0x15e1c, 0x15e2c, 0x01, 0x00 },
    { "Palette (07) Banishing Fist", 0x15e3c, 0x15e4c, 0x01, 0x01 },
    { "Palette (08)", 0x15e5c, 0x15e6c },
    { "Palette (09)", 0x15e7c, 0x15e8c, 0x01, 0x00 },
    { "Palette (0A) Banishing Fist", 0x15e9c, 0x15eac, 0x01, 0x01 },
    { "Palette (0B)", 0x15ebc, 0x15ecc },
    { "Palette (0C)", 0x15edc, 0x15eec, 0x01, 0x00 },
    { "Palette (0D) Banishing Fist", 0x15efc, 0x15f0c, 0x01, 0x01 },
    { "Palette (0E)", 0x15f1c, 0x15f2c },
    { "Palette (0F)", 0x15f3c, 0x15f4c, 0x01, 0x00 },
    { "Palette (10) Banishing Fist", 0x15f5c, 0x15f6c, 0x01, 0x01 },
    { "Palette (11)", 0x15f7c, 0x15f8c },
    { "Palette (12)", 0x15f9c, 0x15fac },
    { "Palette (13)", 0x15fbc, 0x15fcc },
    { "Portrait", 0x1c61c, 0x1c65c },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1609c, 0x160ac, 0x1e, 0x00 },
    { "P1 fireballs", 0x160bc, 0x160cc, 0x1e, 0x01 },
    { "P1 shoryuken", 0x160dc, 0x160ec, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x160fc, 0x1610c, 0x1e, 0x00 },
    { "P2 fireballs", 0x1611c, 0x1612c, 0x1e, 0x01 },
    { "P2 shoryuken", 0x1613c, 0x1614c, 0x27, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1615c, 0x1616c, 0x1e, 0x00 },
    { "Palette (07)", 0x1617c, 0x1618c },
    { "Palette (08)", 0x1619c, 0x161ac },
    { "Palette (09)", 0x161bc, 0x161cc, 0x1e, 0x00 },
    { "Palette (0A)", 0x161dc, 0x161ec },
    { "Palette (0B)", 0x161fc, 0x1620c },
    { "Portrait", 0x1c75c, 0x1c79c },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1621c, 0x1622c, 0x21, 0x00 },
    { "P1 Sonic Booms", 0x1623c, 0x1624c, 0x21, 0x01 },
    { "P1 Flash Kicks", 0x1625c, 0x1626c, 0x21, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1627c, 0x1628c, 0x21, 0x00 },
    { "P2 Sonic Booms", 0x1629c, 0x162ac, 0x21, 0x01 },
    { "P2 Flash Kicks", 0x162bc, 0x162cc, 0x21, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_Extras[] =
{
    { "Palette (06)", 0x162dc, 0x162ec, 0x21, 0x00 },
    { "? Sonic Booms", 0x162fc, 0x1630c, 0x21, 0x01 },
    { "? Flash Kicks", 0x1631c, 0x1632c, 0x21, 0x02 },
    { "Palette (09)", 0x1633c, 0x1634c, 0x21, 0x00 },
    { "? Sonic Booms", 0x1635c, 0x1636c, 0x21, 0x01 },
    { "? Flash Kicks", 0x1637c, 0x1638c, 0x21, 0x02 },
    { "Portrait", 0x1c7fc, 0x1c83c },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x1639c, 0x163ac, 0x24, 0x00 },
    { "P1 psycho FX", 0x163bc, 0x163cc, 0x24, 0x01 },
    { "Palette (02)", 0x163dc, 0x163ec, 0x24, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x163fc, 0x1640c, 0x24, 0x00 },
    { "P2 psycho FX", 0x1641c, 0x1642c, 0x24, 0x01 },
    { "Palette (05)", 0x1643c, 0x1644c, 0x24, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_Extras[] =
{
    { "Palette (06)", 0x1645c, 0x1646c },
    { "Palette (07)", 0x1647c, 0x1648c },
    { "Palette (08)", 0x1649c, 0x164ac },
    { "Portrait", 0x1c89c, 0x1c8dc },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x15b9c, 0x15bac, 0x1b, 0x00 },
    { "P1 Kick FX", 0x15bbc, 0x15bcc, 0x1b, 0x01 },
    { "P1 Kikosho", 0x15bdc, 0x15bec, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15bfc, 0x15c0c, 0x1b, 0x00 },
    { "P2 Kick FX", 0x15c1c, 0x15c2c, 0x1b, 0x01 },
    { "P2 Kikosho", 0x15c3c, 0x15c4c, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_Extras[] =
{
    { "Portrait", 0x1c4dc, 0x1c51c },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P1[] =
{
    { "P1 Punch Color", 0x164bc, 0x164cc, 0x1b, 0x04 },
    { "P1 Kick FX", 0x164dc, 0x164ec, 0x1b, 0x01 },
    { "P1 Kikosho", 0x164fc, 0x1650c, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P2[] =
{
    { "P2 Kick Colors", 0x1651c, 0x1652c, 0x1b, 0x04 },
    { "P2 Kick FX", 0x1653c, 0x1654c, 0x1b, 0x01 },
    { "P2 Kikosho", 0x1655c, 0x1656c, 0x1b, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_Extras[] =
{
    { "Portrait", 0x1c93c, 0x1c97c },
};

const sDescTreeNode XMVSF_A_WOLVERINE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P1, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P2, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_CYCLOPS_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P2) },
    { "Extra", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_STORM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P1, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P2, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Storm_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_ROGUE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P1, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P2, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_GAMBIT_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_SABRETOOTH_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P1, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P2, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_JUGGERNAUT_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P1, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P2, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_MAGNETO_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P1, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P2, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_APOCALYPSE_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void *)XMVSF_A_Apocalypse_PALETTES, ARRAYSIZE(XMVSF_A_Apocalypse_PALETTES) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Apocalypse_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Apocalypse_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_RYU_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_KEN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ken_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_DHALSIM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P1, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P2, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_ZANGIEF_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P1, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P2, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_MBISON_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P1, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P2, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_Extras, ARRAYSIZE(XMVSF_A_MBison_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_GOUKI_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_CHARLIE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P1, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P2, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_CAMMY_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_CHUNLI_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_Extras, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_Extras) },
};

const sDescTreeNode XMVSF_A_CHUNLISFA_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_Extras, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_Extras) },
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
    0x153DC, // GAMBIT
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
    0x1657C, // ... ?
};


// We extend this array with data groveled from the xmvsfe.txt extensible extras file, if any.
const stExtraDef XMVSF_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

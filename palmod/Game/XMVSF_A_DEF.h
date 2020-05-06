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
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x14e9c, 0x14ebc, 0x06, 0x00 },
    { "P2 HK", 0x14ebc, 0x14edc, 0x06, 0x01 },
    { "P2 optic FX", 0x14edc, 0x14efc, 0x06, 0x02 },
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
    { "Palette (01)", 0x14fdc, 0x14ffc, 0x2a, 0x00 },
    { "Palette (02)", 0x14ffc, 0x1501c, 0x2a, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1501c, 0x1503c, 0x2a, 0x00 },
    { "Palette (04)", 0x1503c, 0x1505c, 0x2a, 0x00 },
    { "Palette (05)", 0x1505c, 0x1507c, 0x2a, 0x00 },
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
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x155fc, 0x1561c, 0x29, 0x00 },
    { "Palette (04)", 0x1561c, 0x1563c },
    { "P2 ground FX", 0x1563c, 0x1565c, 0x29, 0x02 },
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
    { "P1 Punch Color", 0x1531c, 0x1533c, 0x0a, 0x00 },
    { "Palette (01)", 0x1533c, 0x1535c },
    { "P1 ground FX", 0x1535c, 0x1537c, 0x0a, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x1537c, 0x1539c, 0x0a, 0x00 },
    { "Palette (04)", 0x1539c, 0x153bc },
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
    { "Small Body (intro)", 0x157dc, 0x157fc, 0x4f, 0x00 }, // confirmed
    { "Giant Head", 0x1579c, 0x157bc, 0x4f, 1 }, // confirmed
    { "Giant Body", 0x606e, 0x60ae, 0x4f, 0x03 }, // confirmed
    { "Giant Arm", 0x1577c, 0x1579c, 0x4f, 2 }, // confirmed
    { "Shoulder Guns", 0x157bc, 0x157dc, 0x4f, 4 }, // confirmed

    { "Shockwave",       0x157fc, 0x1581c }, // confirmed
    { "?",                  0x1581c, 0x1583c }, // unclear
    { "Drones",             0x1583c, 0x1585c, 0x4f, 0x05 }, // confirmed
    { "Hand: Mace and Drill",                  0x1585c, 0x1587c }, // confirmed
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
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x15cbc, 0x15cdc, 0x25, 0x00 },
    { "P2 fire FX", 0x15cdc, 0x15cfc, 0x25, 0x01 },
    { "P2 Sally", 0x15cfc, 0x15d1c, 0x25, 0x02 },
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
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P2[] =
{
    { "P2 Kick Color", 0x163fc, 0x1641c, 0x24, 0x00 },
    { "P2 psycho FX", 0x1641c, 0x1643c, 0x24, 0x01 },
    { "Palette (05)", 0x1643c, 0x1645c, 0x24, 0x00 },
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
    0x1657C, // End of Apocalypse range...?  This value is unclear.
};

/*
These are the ROM locations sorted by layout rather than alphabetically:
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
*/

// We extend this array with data groveled from the xmvsfe.txt extensible extras file, if any.
const stExtraDef XMVSF_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

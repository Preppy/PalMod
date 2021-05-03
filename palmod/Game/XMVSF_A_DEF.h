#pragma once

// Editor's note:
// Some characters have more than P/K colors available.  Those don't appear to be used
// and may have been part of getting ready for the console release.

// Sprite reference:
// https://www.zytor.com/~johannax/jigsaw/sf/xvsf.html

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P1[] =
{
    { L"P1 Punch Color",    0x14d7a, 0x14d9a, indexCPS2_Wolverine, 0x00, &pairNext },
    { L"P1 claw",           0x14d9a, 0x14dba, indexCPS2_Wolverine, 0x01 },
    { L"P1 slash FX",       0x14dba, 0x14dda, indexCPS2_Wolverine, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x14dda, 0x14dfa, indexCPS2_Wolverine, 0x00, &pairNext },
    { L"P2 claw",       0x14dfa, 0x14e1a, indexCPS2_Wolverine, 0x01 },
    { L"P2 slash FX",   0x14e1a, 0x14e3a, indexCPS2_Wolverine, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P1[] =
{
    { L"P1 Punch Color",    0x14e3a, 0x14e5a, indexCPS2_Cyclops, 0x00 },
    { L"P1 HK",             0x14e5a, 0x14e7a, indexCPS2_Cyclops, 0x01 },
    { L"P1 optic FX",       0x14e7a, 0x14e9a, indexCPS2_Cyclops, 0x02 },

    { L"P1 Intro 1", 0x17fda, 0x17ffa, indexCPS2_Cyclops, 12 }, // Intro animation: cycles from 1 to 7 and back.
    { L"P1 Intro 2", 0x17ffa, 0x1801a, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 3", 0x1801a, 0x1803a, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 4", 0x1803a, 0x1805a, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 5", 0x1805a, 0x1807a, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 6", 0x1807a, 0x1809a, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 7", 0x1809a, 0x180Ba, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 8", 0x180Ba, 0x180Da, indexCPS2_Cyclops, 12 },

    { L"P1 Optic Blast 1", 0x1827a, 0x1829a, indexCPS2_Cyclops, 13 },
    { L"P1 Optic Blast 2", 0x1829a, 0x182Ba, indexCPS2_Cyclops, 13 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x14e9a, 0x14eba, indexCPS2_Cyclops, 0x00 },
    { L"P2 HK", 0x14eba, 0x14eda, indexCPS2_Cyclops, 0x01 },
    { L"P2 optic FX", 0x14eda, 0x14efa, indexCPS2_Cyclops, 0x02 },

    { L"P2 Intro 1", 0x180da, 0x180fa, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 2", 0x180fa, 0x1811a, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 3", 0x1811a, 0x1813a, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 4", 0x1813a, 0x1815a, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 5", 0x1815a, 0x1817a, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 6", 0x1817a, 0x1819a, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 7", 0x1819a, 0x181Ba, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 8", 0x181Ba, 0x181Da, indexCPS2_Cyclops, 12 },

    { L"P2 Optic Blast 1", 0x182ba, 0x182da, indexCPS2_Cyclops, 13 },
    { L"P2 Optic Blast 2", 0x182da, 0x182fa, indexCPS2_Cyclops, 13 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x14efa, 0x14f1a },
    { L"Palette (07)", 0x14f1a, 0x14f3a },
    { L"? optic FX", 0x14f3a, 0x14f5a, indexCPS2_Cyclops, 0x02 },
    { L"Palette (09)", 0x14f5a, 0x14f7a },
    { L"Palette (0A)", 0x14f7a, 0x14f9a },
    { L"? optic FX", 0x14f9a, 0x14fba, indexCPS2_Cyclops, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x14fba, 0x14fda, indexCPS2_Storm, 0x00 },
    { L"Palette (01)",   0x14fda, 0x14ffa, indexCPS2_Storm, 0x00 },
    { L"Palette (02)",   0x14ffa, 0x1501a, indexCPS2_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x1501a, 0x1503a, indexCPS2_Storm, 0x00 },
    { L"Palette (04)",  0x1503a, 0x1505a, indexCPS2_Storm, 0x00 },
    { L"Palette (05)",  0x1505a, 0x1507a, indexCPS2_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1507a, 0x1509a, indexCPS2_Storm, 0x00 },
    { L"Palette (07)", 0x1509a, 0x150ba, indexCPS2_Storm, 0x00 },
    { L"Palette (08)", 0x150ba, 0x150da, indexCPS2_Storm, 0x00 },
    { L"Palette (09)", 0x150da, 0x150fa, indexCPS2_Storm, 0x00 },
    { L"Palette (0A)", 0x150fa, 0x1511a, indexCPS2_Storm, 0x00 },
    { L"Palette (0B)", 0x1511a, 0x1513a, indexCPS2_Storm, 0x00 },
    { L"Palette (0C)", 0x1513a, 0x1515a, indexCPS2_Storm, 0x00 },
    { L"Palette (0D)", 0x1515a, 0x1517a, indexCPS2_Storm, 0x00 },
    { L"Palette (0E)", 0x1517a, 0x1519a, indexCPS2_Storm, 0x00 },
    { L"Palette (0F)", 0x1519a, 0x151ba, indexCPS2_Storm, 0x00 },
    { L"Palette (10)", 0x151ba, 0x151da, indexCPS2_Storm, 0x00 },
    { L"Palette (11)", 0x151da, 0x151fa, indexCPS2_Storm, 0x00 },
    { L"Palette (12)", 0x151fa, 0x1521a, indexCPS2_Storm, 0x00 },
    { L"Palette (13)", 0x1521a, 0x1523a, indexCPS2_Storm, 0x00 },
    { L"Palette (14)", 0x1523a, 0x1525a, indexCPS2_Storm, 0x00 },
    { L"Palette (15)", 0x1525a, 0x1527a, indexCPS2_Storm, 0x00 },
    { L"Palette (16)", 0x1527a, 0x1529a, indexCPS2_Storm, 0x00 },
    { L"Palette (17)", 0x1529a, 0x152ba, indexCPS2_Storm, 0x00 },
    { L"Palette (18)", 0x152ba, 0x152da, indexCPS2_Storm, 0x00 },
    { L"Palette (19)", 0x152da, 0x152fa, indexCPS2_Storm, 0x00 },
    { L"Palette (1A)", 0x152fa, 0x1531a, indexCPS2_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x153da, 0x153fa, indexCPS2_Gambit, 0x00 },
    { L"P1 slash FX", 0x153fa, 0x1541a, indexCPS2_Gambit, 0x01 },
    { L"P1 card FX", 0x1541a, 0x1543a, indexCPS2_Gambit, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x1543a, 0x1545a, indexCPS2_Gambit, 0x00 },
    { L"P2 slash FX", 0x1545a, 0x1547a, indexCPS2_Gambit, 0x01 },
    { L"P2 card FX", 0x1547a, 0x1549a, indexCPS2_Gambit, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x1549a, 0x154ba, indexCPS2_Sabretooth, 0x00 },
    { L"P1 slash FX", 0x154ba, 0x154da, indexCPS2_Sabretooth, 0x01 },
    { L"P1 Birdy", 0x154da, 0x154fa, indexCPS2_Sabretooth, 0x02 },
    { L"P1 Getaway car", 0x1555a, 0x1557a, indexCPS2_Sabretooth, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x154fa, 0x1551a, indexCPS2_Sabretooth, 0x00 },
    { L"P2 slash FX", 0x1551a, 0x1553a, indexCPS2_Sabretooth, 0x01 },
    { L"P2 Birdy", 0x1553a, 0x1555a, indexCPS2_Sabretooth, 0x02 },
    { L"P2 Getaway car", 0x1557a, 0x1559a, indexCPS2_Sabretooth, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x1559a, 0x155ba, indexCPS2_Juggy, 0x00 },
    { L"Palette (01)", 0x155ba, 0x155da },
    { L"P1 ground FX", 0x155da, 0x155fa, indexCPS2_Juggy, 0x02 },

    { L"P1 Cyttorak Power-Up 1?", 0x184ba, 0x184da, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 2?", 0x184da, 0x184fa, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 3?", 0x184fa, 0x1851a, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 4?", 0x1851a, 0x1853a, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 5?", 0x1853a, 0x1855a, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 6?", 0x1855a, 0x1857a, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 7?", 0x1857a, 0x1859a, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 8?", 0x1859a, 0x185Ba, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 9?", 0x185Ba, 0x185Da, indexCPS2_Juggy, 11 },
    { L"P1 Cyttorak Power-Up 10?", 0x185Da, 0x185Fa, indexCPS2_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x155fa, 0x1561a, indexCPS2_Juggy, 0x00 },
    { L"Palette (04)", 0x1561a, 0x1563a },
    { L"P2 ground FX", 0x1563a, 0x1565a, indexCPS2_Juggy, 0x02 },

    { L"P2 Cyttorak Power-Up 1?", 0x185fa, 0x1861a, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 2?", 0x1861a, 0x1863a, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 3?", 0x1863a, 0x1865a, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 4?", 0x1865a, 0x1867a, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 5?", 0x1867a, 0x1869a, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 6?", 0x1869a, 0x186Ba, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 7?", 0x186Ba, 0x186Da, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 8?", 0x186Da, 0x186Fa, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 9?", 0x186Fa, 0x1871a, indexCPS2_Juggy, 11 },
    { L"P2 Cyttorak Power-Up 10?", 0x1871a, 0x1873a, indexCPS2_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1565a, 0x1567a, indexCPS2_Juggy, 0x00 },
    { L"Palette (07)", 0x1567a, 0x1569a, indexCPS2_Juggy, 0x00 },
    { L"Palette (08)", 0x1569a, 0x156ba, indexCPS2_Juggy, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x15fda, 0x15ffa, indexCPS2_Bison, 0x00 },
    { L"P1 psycho FX", 0x15ffa, 0x1601a, indexCPS2_Bison, 0x08 },
    { L"Palette (02)", 0x1601a, 0x1603a, indexCPS2_Bison, 0x09 },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x1603a, 0x1605a, indexCPS2_Bison, 0x00 },
    { L"P2 psycho FX", 0x1605a, 0x1607a, indexCPS2_Bison, 0x08 },
    { L"Palette (05)", 0x1607a, 0x1609a, indexCPS2_Bison, 0x09 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x156ba, 0x156da, indexCPS2_Magneto, 0x00 },
    { L"P1 magnetic FX", 0x156da, 0x156fa, indexCPS2_Magneto, 0x01 },
    { L"P1 magnetic FX 2", 0x156fa, 0x1571a, indexCPS2_Magneto, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x1571a, 0x1573a, indexCPS2_Magneto, 0x00 },
    { L"P2 magnetic FX", 0x1573a, 0x1575a, indexCPS2_Magneto, 0x01 },
    { L"P2 magnetic FX 2", 0x1575a, 0x1577a, indexCPS2_Magneto, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x1531a, 0x1533a, indexCPS2_Rogue, 0x0c },
    { L"Palette (01)", 0x1533a, 0x1535a, indexCPS2_Rogue, 0x0c },
    { L"P1 ground FX", 0x1535a, 0x1537a, indexCPS2_Rogue, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x1537a, 0x1539a, indexCPS2_Rogue, 0x0c },
    { L"Palette (04)", 0x1539a, 0x153ba, indexCPS2_Rogue, 0x0c },
    { L"P2 ground FX", 0x153ba, 0x153da, indexCPS2_Rogue, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x1589a, 0x158ba, indexCPS2_Ryu, 0x00 },
    { L"P1 fireballs", 0x158ba, 0x158da, indexCPS2_Ryu, 0x01 },
    { L"P1 Extra 2", 0x158da, 0x158fa },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x158fa, 0x1591a, indexCPS2_Ryu, 0x00 },
    { L"P2 fireballs", 0x1591a, 0x1593a, indexCPS2_Ryu, 0x01 },
    { L"P2 Extra 2", 0x1593a, 0x1595a },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_Extras[] =
{
    { L"Palette (06)",           0x1595a, 0x1597a, indexCPS2_Ryu, 0x00 },
    { L"Palette (07) fireballs", 0x1597a, 0x1599a, indexCPS2_Ryu, 0x01 },
    { L"Palette (08)",           0x1599a, 0x159ba },
    { L"Palette (09)",           0x159ba, 0x159da, indexCPS2_Ryu, 0x00 },
    { L"Palette (0A) fireballs", 0x159da, 0x159fa, indexCPS2_Ryu, 0x01 },
    { L"Palette (0B)",           0x159fa, 0x15a1a },
};

const sGame_PaletteDataset XMVSF_A_Apocalypse_PALETTES[] =
{
    { L"Small Body (intro)",     0x157da, 0x157fa, indexCPS2_Apocalypse, 0x00 }, // confirmed
    { L"Giant Head",             0x1579a, 0x157ba, indexCPS2_Apocalypse, 1 }, // confirmed
    { L"Giant Body",             0x606c,   0x60ac, indexCPS2_Apocalypse, 0x03 }, // confirmed
    { L"Giant Arm",              0x1577a, 0x1579a, indexCPS2_Apocalypse, 2 }, // confirmed
    { L"Shoulder Guns",          0x157ba, 0x157da, indexCPS2_Apocalypse, 4 }, // confirmed

    { L"Shockwave",              0x157fa, 0x1581a }, // confirmed
    { L"?",                      0x1581a, 0x1583a }, // unclear
    { L"Drones",                 0x1583a, 0x1585a, indexCPS2_Apocalypse, 0x05 }, // confirmed
    { L"Hand: Mace and Drill",   0x1585a, 0x1587a }, // confirmed
    { L"Shoulder Lasers",        0x1587a, 0x1589a }, // confirmed
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x15a1a, 0x15a3a, indexCPS2_Ken, 0x00 },
    { L"P1 fireballs", 0x15a3a, 0x15a5a, indexCPS2_Ken, 0x01 },
    { L"P1 shoryuken", 0x15a5a, 0x15a7a, indexCPS2_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x15a7a, 0x15a9a, indexCPS2_Ken, 0x00 },
    { L"P2 fireballs", 0x15a9a, 0x15aba, indexCPS2_Ken, 0x01 },
    { L"P2 shoryuken", 0x15aba, 0x15ada, indexCPS2_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_Extras[] =
{
    { L"Palette (06)",           0x15ada, 0x15afa, indexCPS2_Ken, 0x00 },
    { L"Palette (07) fireballs", 0x15afa, 0x15b1a, indexCPS2_Ken, 0x01 },
    { L"Palette (08) shoryuken", 0x15b1a, 0x15b3a, indexCPS2_Ken, 0x02 },
    { L"Palette (09)",           0x15b3a, 0x15b5a, indexCPS2_Ken, 0x00 },
    { L"Palette (0A) fireballs", 0x15b5a, 0x15b7a, indexCPS2_Ken, 0x01 },
    { L"Palette (0B) shoryuken", 0x15b7a, 0x15b9a, indexCPS2_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x15c5a, 0x15c7a, indexCPS2_Dhalsim, 0x00 },
    { L"P1 fire FX", 0x15c7a, 0x15c9a, indexCPS2_Dhalsim, 0x01 },
    { L"P1 Sally", 0x15c9a, 0x15cba, indexCPS2_Dhalsim, 0x02 },

    { L"P1 Teleport 1", 0x1895a, 0x1897a, indexCPS2_Dhalsim, 11 },
    { L"P1 Teleport 2", 0x1897a, 0x1899a, indexCPS2_Dhalsim, 11 },
    { L"P1 Teleport 3", 0x1899a, 0x189Ba, indexCPS2_Dhalsim, 11 },
    { L"P1 Teleport 4", 0x189Ba, 0x189Da, indexCPS2_Dhalsim, 11 },
    { L"P1 Teleport 5", 0x189Da, 0x189Fa, indexCPS2_Dhalsim, 11 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x15cba, 0x15cda, indexCPS2_Dhalsim, 0x00 },
    { L"P2 fire FX", 0x15cda, 0x15cfa, indexCPS2_Dhalsim, 0x01 },
    { L"P2 Sally", 0x15cfa, 0x15d1a, indexCPS2_Dhalsim, 0x02 },

    { L"P2 Teleport 1", 0x189Fa, 0x18A1a, indexCPS2_Dhalsim, 11 },
    { L"P2 Teleport 2", 0x18A1a, 0x18A3a, indexCPS2_Dhalsim, 11 },
    { L"P2 Teleport 3", 0x18A3a, 0x18A5a, indexCPS2_Dhalsim, 11 },
    { L"P2 Teleport 4", 0x18A5a, 0x18A7a, indexCPS2_Dhalsim, 11 },
    { L"P2 Teleport 5", 0x18A7a, 0x18A9a, indexCPS2_Dhalsim, 11 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x15d1a, 0x15d3a, indexCPS2_Dhalsim, 0x00 },
    { L"Palette (07)", 0x15d3a, 0x15d5a, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x15d5a, 0x15d7a, indexCPS2_Zangief, 0x00 },
    { L"P1 Banishing Fist", 0x15d7a, 0x15d9a, indexCPS2_Zangief, 0x01 },
    { L"Palette (02)", 0x15d9a, 0x15dba },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x15dba, 0x15dda, indexCPS2_Zangief, 0x00 },
    { L"P2 Banishing Fist", 0x15dda, 0x15dfa, indexCPS2_Zangief, 0x01 },
    { L"Palette (05)", 0x15dfa, 0x15e1a },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x15e1a, 0x15e3a, indexCPS2_Zangief, 0x00 },
    { L"Palette (07) Banishing Fist", 0x15e3a, 0x15e5a, indexCPS2_Zangief, 0x01 },
    { L"Palette (08)", 0x15e5a, 0x15e7a },
    { L"Palette (09)", 0x15e7a, 0x15e9a, indexCPS2_Zangief, 0x00 },
    { L"Palette (0A) Banishing Fist", 0x15e9a, 0x15eba, indexCPS2_Zangief, 0x01 },
    { L"Palette (0B)", 0x15eba, 0x15eda },
    { L"Palette (0C)", 0x15eda, 0x15efa, indexCPS2_Zangief, 0x00 },
    { L"Palette (0D) Banishing Fist", 0x15efa, 0x15f1a, indexCPS2_Zangief, 0x01 },
    { L"Palette (0E)", 0x15f1a, 0x15f3a },
    { L"Palette (0F)", 0x15f3a, 0x15f5a, indexCPS2_Zangief, 0x00 },
    { L"Palette (10) Banishing Fist", 0x15f5a, 0x15f7a, indexCPS2_Zangief, 0x01 },
    { L"Palette (11)", 0x15f7a, 0x15f9a },
    { L"Palette (12)", 0x15f9a, 0x15fba },
    { L"Palette (13)", 0x15fba, 0x15fda },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x1609a, 0x160ba, indexCPS2_Akuma, 0x00 },
    { L"P1 fireballs", 0x160ba, 0x160da, indexCPS2_Akuma, 0x01 },
    { L"P1 Extra 2", 0x160da, 0x160fa },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x160fa, 0x1611a, indexCPS2_Akuma, 0x00 },
    { L"P2 fireballs", 0x1611a, 0x1613a, indexCPS2_Akuma, 0x01 },
    { L"P2 Extra 2", 0x1613a, 0x1615a },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1615a, 0x1617a, indexCPS2_Akuma, 0x00 },
    { L"Palette (07) fireballs", 0x1617a, 0x1619a, indexCPS2_Akuma, 0x01 },
    { L"Palette (08)", 0x1619a, 0x161ba },
    { L"Palette (09)", 0x161ba, 0x161da, indexCPS2_Akuma, 0x00 },
    { L"Palette (0A) fireballs", 0x161da, 0x161fa, indexCPS2_Akuma, 0x01 },
    { L"Palette (0B)", 0x161fa, 0x1621a },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x1621a, 0x1623a, indexCPS2_Charlie, 0x00 },
    { L"P1 Sonic Booms", 0x1623a, 0x1625a, indexCPS2_Charlie, 0x01 },
    { L"P1 Flash Kicks", 0x1625a, 0x1627a, indexCPS2_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x1627a, 0x1629a, indexCPS2_Charlie, 0x00 },
    { L"P2 Sonic Booms", 0x1629a, 0x162ba, indexCPS2_Charlie, 0x01 },
    { L"P2 Flash Kicks", 0x162ba, 0x162da, indexCPS2_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x162da, 0x162fa, indexCPS2_Charlie, 0x00 },
    { L"? Sonic Booms", 0x162fa, 0x1631a, indexCPS2_Charlie, 0x01 },
    { L"? Flash Kicks", 0x1631a, 0x1633a, indexCPS2_Charlie, 0x02 },
    { L"Palette (09)", 0x1633a, 0x1635a, indexCPS2_Charlie, 0x00 },
    { L"? Sonic Booms", 0x1635a, 0x1637a, indexCPS2_Charlie, 0x01 },
    { L"? Flash Kicks", 0x1637a, 0x1639a, indexCPS2_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x1639a, 0x163ba, indexCPS2_Cammy, 0x00 },
    { L"P1 psycho FX", 0x163ba, 0x163da, indexCPS2_Cammy, 0x01 },
    { L"Palette (02)", 0x163da, 0x163fa, indexCPS2_Cammy, 0x00 },

    { L"P1 Cannon Revenge 1", 0x18b1a, 0x18b3a, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 2", 0x18b3a, 0x18b5a, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 3", 0x18b5a, 0x18b7a, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 4", 0x18b7a, 0x18b9a, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 5", 0x18b9a, 0x18bba, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 6", 0x18bba, 0x18bda, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 7", 0x18bda, 0x18bfa, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 8", 0x18bfa, 0x18c1a, indexCPS2_Cammy, 11 },
    { L"P1 Cannon Revenge 9", 0x18c1a, 0x18c3a, indexCPS2_Cammy, 11 },

};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x163fa, 0x1641a, indexCPS2_Cammy, 0x00 },
    { L"P2 psycho FX", 0x1641a, 0x1643a, indexCPS2_Cammy, 0x01 },
    { L"Palette (05)", 0x1643a, 0x1645a, indexCPS2_Cammy, 0x00 },

    { L"P2 Cannon Revenge 1", 0x18c3a, 0x18c5a, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 2", 0x18c5a, 0x18c7a, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 3", 0x18c7a, 0x18c9a, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 4", 0x18c9a, 0x18cba, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 5", 0x18cba, 0x18cda, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 6", 0x18cda, 0x18cfa, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 7", 0x18cfa, 0x18d1a, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 8", 0x18d1a, 0x18d3a, indexCPS2_Cammy, 11 },
    { L"P2 Cannon Revenge 9", 0x18d3a, 0x18d5a, indexCPS2_Cammy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1645a, 0x1647a },
    { L"Palette (07)", 0x1647a, 0x1649a },
    { L"Palette (08)", 0x1649a, 0x164ba },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x15b9a, 0x15bba, indexCPS2_ChunLi, 0x00, &pairNext },
    { L"P1 Keiokuken (shades)", 0x15bba, 0x15bda, indexCPS2_ChunLi, 0x01 },
    { L"P1 Kikosho", 0x15bda, 0x15bfa, indexCPS2_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P2[] =
{
    { L"P2 Kick Color", 0x15bfa, 0x15c1a, indexCPS2_ChunLi, 0x00, &pairNext },
    { L"P2 Keiokuken (shades)", 0x15c1a, 0x15c3a, indexCPS2_ChunLi, 0x01 },
    { L"P2 Kikosho", 0x15c3a, 0x15c5a, indexCPS2_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P1[] =
{
    { L"P1 Punch Color", 0x164ba, 0x164da, indexCPS2_ChunLi, 0x0C, &pairNext },
    { L"P1 Keiokuken (shades)", 0x164da, 0x164fa, indexCPS2_ChunLi, 0x0F },
    { L"P1 Kikosho", 0x164fa, 0x1651a, indexCPS2_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P2[] =
{
    { L"P2 Kick Colors", 0x1651a, 0x1653a, indexCPS2_ChunLi, 0x0C, &pairNext },
    { L"P2 Keiokuken (shades)", 0x1653a, 0x1655a, indexCPS2_ChunLi, 0x0F },
    { L"P2 Kikosho", 0x1655a, 0x1657a, indexCPS2_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16a7a, 0x16a9a, indexCPS2_Wolverine },
    { L"Burning 2", 0x16a9a, 0x16aba, indexCPS2_Wolverine },
    { L"Shocked 1", 0x16aba, 0x16ada, indexCPS2_Wolverine },
    { L"Shocked 2", 0x16ada, 0x16afa, indexCPS2_Wolverine },
    { L"Dark Burning 1", 0x16afa, 0x16b1a, indexCPS2_Wolverine },
    { L"Dark Burning 2", 0x16b1a, 0x16b3a, indexCPS2_Wolverine },
    { L"Kinectic Charged 1", 0x16b3a, 0x16b5a, indexCPS2_Wolverine },
    { L"Kinectic Charged 2", 0x16b5a, 0x16b7a, indexCPS2_Wolverine },
    { L"Kinectic Charged 3", 0x16b7a, 0x16b9a, indexCPS2_Wolverine },
};

const sGame_PaletteDataset XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16b9a, 0x16bba, indexCPS2_Cyclops },
    { L"Burning 2", 0x16bba, 0x16bda, indexCPS2_Cyclops },
    { L"Shocked 1", 0x16bda, 0x16bfa, indexCPS2_Cyclops },
    { L"Shocked 2", 0x16bfa, 0x16c1a, indexCPS2_Cyclops },
    { L"Dark Burning 1", 0x16c1a, 0x16c3a, indexCPS2_Cyclops },
    { L"Dark Burning 2", 0x16c3a, 0x16c5a, indexCPS2_Cyclops },
    { L"Kinectic Charged 1", 0x16c5a, 0x16c7a, indexCPS2_Cyclops },
    { L"Kinectic Charged 2", 0x16c7a, 0x16c9a, indexCPS2_Cyclops },
    { L"Kinectic Charged 3", 0x16c9a, 0x16cba, indexCPS2_Cyclops },
};

const sGame_PaletteDataset XMVSF_A_STORM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16cba, 0x16cda, indexCPS2_Storm },
    { L"Burning 2", 0x16cda, 0x16cfa, indexCPS2_Storm },
    { L"Shocked 1", 0x16cfa, 0x16d1a, indexCPS2_Storm },
    { L"Shocked 2", 0x16d1a, 0x16d3a, indexCPS2_Storm },
    { L"Dark Burning 1", 0x16d3a, 0x16d5a, indexCPS2_Storm },
    { L"Dark Burning 2", 0x16d5a, 0x16d7a, indexCPS2_Storm },
    { L"Kinectic Charged 1", 0x16d7a, 0x16d9a, indexCPS2_Storm },
    { L"Kinectic Charged 2", 0x16d9a, 0x16dba, indexCPS2_Storm },
    { L"Kinectic Charged 3", 0x16dba, 0x16dda, indexCPS2_Storm },
};

const sGame_PaletteDataset XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16dda, 0x16dfa, indexCPS2_Rogue },
    { L"Burning 2", 0x16dfa, 0x16e1a, indexCPS2_Rogue },
    { L"Shocked 1", 0x16e1a, 0x16e3a, indexCPS2_Rogue },
    { L"Shocked 2", 0x16e3a, 0x16e5a, indexCPS2_Rogue },
    { L"Dark Burning 1", 0x16e5a, 0x16e7a, indexCPS2_Rogue },
    { L"Dark Burning 2", 0x16e7a, 0x16e9a, indexCPS2_Rogue },
    { L"Kinectic Charged 1", 0x16e9a, 0x16eba, indexCPS2_Rogue },
    { L"Kinectic Charged 2", 0x16eba, 0x16eda, indexCPS2_Rogue },
    { L"Kinectic Charged 3", 0x16eda, 0x16efa, indexCPS2_Rogue },
};

const sGame_PaletteDataset XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16efa, 0x16f1a, indexCPS2_Gambit },
    { L"Burning 2", 0x16f1a, 0x16f3a, indexCPS2_Gambit },
    { L"Shocked 1", 0x16f3a, 0x16f5a, indexCPS2_Gambit },
    { L"Shocked 2", 0x16f5a, 0x16f7a, indexCPS2_Gambit },
    { L"Dark Burning 1", 0x16f7a, 0x16f9a, indexCPS2_Gambit },
    { L"Dark Burning 2", 0x16f9a, 0x16fba, indexCPS2_Gambit },
    { L"Kinectic Charged 1", 0x16fba, 0x16fda, indexCPS2_Gambit },
    { L"Kinectic Charged 2", 0x16fda, 0x16ffa, indexCPS2_Gambit },
    { L"Kinectic Charged 3", 0x16ffa, 0x1701a, indexCPS2_Gambit },
};

const sGame_PaletteDataset XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1701a, 0x1703a, indexCPS2_Sabretooth },
    { L"Burning 2", 0x1703a, 0x1705a, indexCPS2_Sabretooth },
    { L"Shocked 1", 0x1705a, 0x1707a, indexCPS2_Sabretooth },
    { L"Shocked 2", 0x1707a, 0x1709a, indexCPS2_Sabretooth },
    { L"Dark Burning 1", 0x1709a, 0x170ba, indexCPS2_Sabretooth },
    { L"Dark Burning 2", 0x170ba, 0x170da, indexCPS2_Sabretooth },
    { L"Kinectic Charged 1", 0x170da, 0x170fa, indexCPS2_Sabretooth },
    { L"Kinectic Charged 2", 0x170fa, 0x1711a, indexCPS2_Sabretooth },
    { L"Kinectic Charged 3", 0x1711a, 0x1713a, indexCPS2_Sabretooth },
};

const sGame_PaletteDataset XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1713a, 0x1715a, indexCPS2_Juggy },
    { L"Burning 2", 0x1715a, 0x1717a, indexCPS2_Juggy },
    { L"Shocked 1", 0x1717a, 0x1719a, indexCPS2_Juggy },
    { L"Shocked 2", 0x1719a, 0x171ba, indexCPS2_Juggy },
    { L"Dark Burning 1", 0x171ba, 0x171da, indexCPS2_Juggy },
    { L"Dark Burning 2", 0x171da, 0x171fa, indexCPS2_Juggy },
    { L"Kinectic Charged 1", 0x171fa, 0x1721a, indexCPS2_Juggy },
    { L"Kinectic Charged 2", 0x1721a, 0x1723a, indexCPS2_Juggy },
    { L"Kinectic Charged 3", 0x1723a, 0x1725a, indexCPS2_Juggy },
};

const sGame_PaletteDataset XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1725a, 0x1727a, indexCPS2_Magneto },
    { L"Burning 2", 0x1727a, 0x1729a, indexCPS2_Magneto },
    { L"Shocked 1", 0x1729a, 0x172ba, indexCPS2_Magneto },
    { L"Shocked 2", 0x172ba, 0x172da, indexCPS2_Magneto },
    { L"Dark Burning 1", 0x172da, 0x172fa, indexCPS2_Magneto },
    { L"Dark Burning 2", 0x172fa, 0x1731a, indexCPS2_Magneto },
    { L"Kinectic Charged 1", 0x1731a, 0x1733a, indexCPS2_Magneto },
    { L"Kinectic Charged 2", 0x1733a, 0x1735a, indexCPS2_Magneto },
    { L"Kinectic Charged 3", 0x1735a, 0x1737a, indexCPS2_Magneto },
};

const sGame_PaletteDataset XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1737a, 0x1739a, indexCPS2_Apocalypse },
    { L"Burning 2", 0x1739a, 0x173ba, indexCPS2_Apocalypse },
    { L"Shocked 1", 0x173ba, 0x173da, indexCPS2_Apocalypse },
    { L"Shocked 2", 0x173da, 0x173fa, indexCPS2_Apocalypse },
    { L"Dark Burning 1", 0x173fa, 0x1741a, indexCPS2_Apocalypse },
    { L"Dark Burning 2", 0x1741a, 0x1743a, indexCPS2_Apocalypse },
    { L"Kinectic Charged 1", 0x1743a, 0x1745a, indexCPS2_Apocalypse },
    { L"Kinectic Charged 2", 0x1745a, 0x1747a, indexCPS2_Apocalypse },
    { L"Kinectic Charged 3", 0x1747a, 0x1749a, indexCPS2_Apocalypse },
};

const sGame_PaletteDataset XMVSF_A_RYU_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1749a, 0x174ba, indexCPS2_Ryu },
    { L"Burning 2", 0x174ba, 0x174da, indexCPS2_Ryu },
    { L"Shocked 1", 0x174da, 0x174fa, indexCPS2_Ryu },
    { L"Shocked 2", 0x174fa, 0x1751a, indexCPS2_Ryu },
    { L"Dark Burning 1", 0x1751a, 0x1753a, indexCPS2_Ryu },
    { L"Dark Burning 2", 0x1753a, 0x1755a, indexCPS2_Ryu },
    { L"Kinectic Charged 1", 0x1755a, 0x1757a, indexCPS2_Ryu },
    { L"Kinectic Charged 2", 0x1757a, 0x1759a, indexCPS2_Ryu },
    { L"Kinectic Charged 3", 0x1759a, 0x175ba, indexCPS2_Ryu },
};

const sGame_PaletteDataset XMVSF_A_KEN_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x175ba, 0x175da, indexCPS2_Ken },
    { L"Burning 2", 0x175da, 0x175fa, indexCPS2_Ken },
    { L"Shocked 1", 0x175fa, 0x1761a, indexCPS2_Ken },
    { L"Shocked 2", 0x1761a, 0x1763a, indexCPS2_Ken },
    { L"Dark Burning 1", 0x1763a, 0x1765a, indexCPS2_Ken },
    { L"Dark Burning 2", 0x1765a, 0x1767a, indexCPS2_Ken },
    { L"Kinectic Charged 1", 0x1767a, 0x1769a, indexCPS2_Ken },
    { L"Kinectic Charged 2", 0x1769a, 0x176ba, indexCPS2_Ken },
    { L"Kinectic Charged 3", 0x176ba, 0x176da, indexCPS2_Ken },
};

const sGame_PaletteDataset XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x176da, 0x176fa, indexCPS2_ChunLi },
    { L"Burning 2", 0x176fa, 0x1771a, indexCPS2_ChunLi },
    { L"Shocked 1", 0x1771a, 0x1773a, indexCPS2_ChunLi },
    { L"Shocked 2", 0x1773a, 0x1775a, indexCPS2_ChunLi },
    { L"Dark Burning 1", 0x1775a, 0x1777a, indexCPS2_ChunLi },
    { L"Dark Burning 2", 0x1777a, 0x1779a, indexCPS2_ChunLi },
    { L"Kinectic Charged 1", 0x1779a, 0x177ba, indexCPS2_ChunLi },
    { L"Kinectic Charged 2", 0x177ba, 0x177da, indexCPS2_ChunLi },
    { L"Kinectic Charged 3", 0x177da, 0x177fa, indexCPS2_ChunLi },
};

const sGame_PaletteDataset XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x177fa, 0x1781a, indexCPS2_Dhalsim },
    { L"Burning 2", 0x1781a, 0x1783a, indexCPS2_Dhalsim },
    { L"Shocked 1", 0x1783a, 0x1785a, indexCPS2_Dhalsim },
    { L"Shocked 2", 0x1785a, 0x1787a, indexCPS2_Dhalsim },
    { L"Dark Burning 1", 0x1787a, 0x1789a, indexCPS2_Dhalsim },
    { L"Dark Burning 2", 0x1789a, 0x178ba, indexCPS2_Dhalsim },
    { L"Kinectic Charged 1", 0x178ba, 0x178da, indexCPS2_Dhalsim },
    { L"Kinectic Charged 2", 0x178da, 0x178fa, indexCPS2_Dhalsim },
    { L"Kinectic Charged 3", 0x178fa, 0x1791a, indexCPS2_Dhalsim },
};

const sGame_PaletteDataset XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1791a, 0x1793a, indexCPS2_Zangief },
    { L"Burning 2", 0x1793a, 0x1795a, indexCPS2_Zangief },
    { L"Shocked 1", 0x1795a, 0x1797a, indexCPS2_Zangief },
    { L"Shocked 2", 0x1797a, 0x1799a, indexCPS2_Zangief },
    { L"Dark Burning 1", 0x1799a, 0x179ba, indexCPS2_Zangief },
    { L"Dark Burning 2", 0x179ba, 0x179da, indexCPS2_Zangief },
    { L"Kinectic Charged 1", 0x179da, 0x179fa, indexCPS2_Zangief },
    { L"Kinectic Charged 2", 0x179fa, 0x17a1a, indexCPS2_Zangief },
    { L"Kinectic Charged 3", 0x17a1a, 0x17a3a, indexCPS2_Zangief },
};

const sGame_PaletteDataset XMVSF_A_MBISON_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17a3a, 0x17a5a, indexCPS2_Bison },
    { L"Burning 2", 0x17a5a, 0x17a7a, indexCPS2_Bison },
    { L"Shocked 1", 0x17a7a, 0x17a9a, indexCPS2_Bison },
    { L"Shocked 2", 0x17a9a, 0x17aba, indexCPS2_Bison },
    { L"Dark Burning 1", 0x17aba, 0x17ada, indexCPS2_Bison },
    { L"Dark Burning 2", 0x17ada, 0x17afa, indexCPS2_Bison },
    { L"Kinectic Charged 1", 0x17afa, 0x17b1a, indexCPS2_Bison },
    { L"Kinectic Charged 2", 0x17b1a, 0x17b3a, indexCPS2_Bison },
    { L"Kinectic Charged 3", 0x17b3a, 0x17b5a, indexCPS2_Bison },
};

const sGame_PaletteDataset XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17b5a, 0x17b7a, indexCPS2_Akuma },
    { L"Burning 2", 0x17b7a, 0x17b9a, indexCPS2_Akuma },
    { L"Shocked 1", 0x17b9a, 0x17bba, indexCPS2_Akuma },
    { L"Shocked 2", 0x17bba, 0x17bda, indexCPS2_Akuma },
    { L"Dark Burning 1", 0x17bda, 0x17bfa, indexCPS2_Akuma },
    { L"Dark Burning 2", 0x17bfa, 0x17c1a, indexCPS2_Akuma },
    { L"Kinectic Charged 1", 0x17c1a, 0x17c3a, indexCPS2_Akuma },
    { L"Kinectic Charged 2", 0x17c3a, 0x17c5a, indexCPS2_Akuma },
    { L"Kinectic Charged 3", 0x17c5a, 0x17c7a, indexCPS2_Akuma },
};

const sGame_PaletteDataset XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17c7a, 0x17c9a, indexCPS2_Charlie },
    { L"Burning 2", 0x17c9a, 0x17cba, indexCPS2_Charlie },
    { L"Shocked 1", 0x17cba, 0x17cda, indexCPS2_Charlie },
    { L"Shocked 2", 0x17cda, 0x17cfa, indexCPS2_Charlie },
    { L"Dark Burning 1", 0x17cfa, 0x17d1a, indexCPS2_Charlie },
    { L"Dark Burning 2", 0x17d1a, 0x17d3a, indexCPS2_Charlie },
    { L"Kinectic Charged 1", 0x17d3a, 0x17d5a, indexCPS2_Charlie },
    { L"Kinectic Charged 2", 0x17d5a, 0x17d7a, indexCPS2_Charlie },
    { L"Kinectic Charged 3", 0x17d7a, 0x17d9a, indexCPS2_Charlie },
};

const sGame_PaletteDataset XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17d9a, 0x17dba, indexCPS2_Cammy },
    { L"Burning 2", 0x17dba, 0x17dda, indexCPS2_Cammy },
    { L"Shocked 1", 0x17dda, 0x17dfa, indexCPS2_Cammy },
    { L"Shocked 2", 0x17dfa, 0x17e1a, indexCPS2_Cammy },
    { L"Dark Burning 1", 0x17e1a, 0x17e3a, indexCPS2_Cammy },
    { L"Dark Burning 2", 0x17e3a, 0x17e5a, indexCPS2_Cammy },
    { L"Kinectic Charged 1", 0x17e5a, 0x17e7a, indexCPS2_Cammy },
    { L"Kinectic Charged 2", 0x17e7a, 0x17e9a, indexCPS2_Cammy },
    { L"Kinectic Charged 3", 0x17e9a, 0x17eba, indexCPS2_Cammy },
};

const sGame_PaletteDataset XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17eba, 0x17eda, indexCPS2_ChunLi, 0x0c },
    { L"Burning 2", 0x17eda, 0x17efa, indexCPS2_ChunLi, 0x0c },
    { L"Shocked 1", 0x17efa, 0x17f1a, indexCPS2_ChunLi, 0x0c },
    { L"Shocked 2", 0x17f1a, 0x17f3a, indexCPS2_ChunLi, 0x0c },
    { L"Dark Burning 1", 0x17f3a, 0x17f5a, indexCPS2_ChunLi, 0x0c },
    { L"Dark Burning 2", 0x17f5a, 0x17f7a, indexCPS2_ChunLi, 0x0c },
    { L"Kinectic Charged 1", 0x17f7a, 0x17f9a, indexCPS2_ChunLi, 0x0c },
    { L"Kinectic Charged 2", 0x17f9a, 0x17fba, indexCPS2_ChunLi, 0x0c },
    { L"Kinectic Charged 3", 0x17fba, 0x17fda, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset XMVSF_A_BONUS_CSI_PALETTES[] =
{
    { L"Cammy",     0x19C9a, 0x19CBa, indexCPS2_Cammy, 0x3a },
    { L"Charlie",   0x19CBa, 0x19CDa, indexCPS2_Charlie, 0x3a },
    { L"Chun-Li",   0x19DDa, 0x19DFa, indexCPS2_ChunLi, 0x3a },
    { L"Cyclops",   0x19BFa, 0x19C1a, indexCPS2_Cyclops, 0x3a },
    { L"Dhalsim",   0x19E5a, 0x19E7a, indexCPS2_Dhalsim, 0x3a },
    { L"Gambit",    0x19C5a, 0x19C7a, indexCPS2_Gambit, 0x3a },
    { L"Gouki",     0x19E9a, 0x19EBa, indexCPS2_Akuma, 0x3a },
    { L"Juggernaut", 0x19E3a, 0x19E5a, indexCPS2_Juggy, 0x3a },
    { L"Ken",       0x19C3a, 0x19C5a, indexCPS2_Ken, 0x3a },
    { L"M.Bison",   0x19E7a, 0x19E9a, indexCPS2_Bison, 0x3a },
    { L"Magneto",   0x19E1a, 0x19E3a, indexCPS2_Magneto, 0x3a },
    { L"Rogue",     0x19C7a, 0x19C9a, indexCPS2_Rogue, 0x3a },
    { L"Ryu",       0x19C1a, 0x19C3a, indexCPS2_Ryu, 0x3a },
    { L"Sabretooth", 0x19D9a, 0x19DBa, indexCPS2_Sabretooth, 0x3a },
    { L"Storm",     0x19DBa, 0x19DDa, indexCPS2_Storm, 0x3a },
    { L"Wolverine", 0x19BDa, 0x19BFa, indexCPS2_Wolverine, 0x3a },
    { L"Zangief",   0x19DFa, 0x19E1a, indexCPS2_Zangief, 0x3a },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES[] =
{
    { L"Cammy",         0x1c89a, 0x1c93a, indexCPS2_Cammy, 0x38 },
    { L"Charlie",       0x1c7fa, 0x1c89a, indexCPS2_Charlie, 0x38 },
    { L"Chun-Li",       0x1c4da, 0x1c57a, indexCPS2_ChunLi, 0x38 },
    { L"Chun-Li (SFA)", 0x1c93a, 0x1c9da, indexCPS2_ChunLi, 0x39 },
    { L"Cyclops",       0x1be9a, 0x1bf3a, indexCPS2_Cyclops, 0x38 },
    { L"Dhalsim",       0x1c57a, 0x1c61a, indexCPS2_Dhalsim, 0x38 },
    { L"Gambit",        0x1c07a, 0x1c11a, indexCPS2_Gambit, 0x38 },
    { L"Gouki",         0x1c75a, 0x1c7fa, indexCPS2_Akuma, 0x38 },
    { L"Juggernaut",    0x1c1ba, 0x1c25a, indexCPS2_Juggy, 0x38 },
    { L"Ken",           0x1c43a, 0x1c4da, indexCPS2_Ken, 0x38 },
    { L"M.Bison",       0x1c6ba, 0x1c75a, indexCPS2_Bison, 0x38 },
    { L"Magneto",       0x1c25a, 0x1c2fa, indexCPS2_Magneto, 0x38 },
    { L"Rogue",         0x1bfda, 0x1c07a, indexCPS2_Rogue, 0x38 },
    { L"Ryu",           0x1c39a, 0x1c43a, indexCPS2_Ryu, 0x38 },
    { L"Sabretooth",    0x1c11a, 0x1c1ba, indexCPS2_Sabretooth, 0x38 },
    { L"Storm",         0x1bf3a, 0x1bfda, indexCPS2_Storm, 0x38 },
    { L"Wolverine",     0x1bdfa, 0x1be9a, indexCPS2_Wolverine, 0x38 },
    { L"Zangief",       0x1c61a, 0x1c6ba, indexCPS2_Zangief, 0x38 },
    { L"Apocalypse",    0x1c2fa, 0x1c39a, indexCPS2_Apocalypse, 0x38 },
};

const sDescTreeNode XMVSF_A_WOLVERINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P1, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P2, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CYCLOPS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P2) },
    { L"Extra", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_STORM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P1, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P2, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Storm_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_STORM_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_STORM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_ROGUE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P1, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P2, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_GAMBIT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_SABRETOOTH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P1, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P2, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_JUGGERNAUT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P1, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P2, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_MAGNETO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P1, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P2, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_APOCALYPSE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void *)XMVSF_A_Apocalypse_PALETTES, ARRAYSIZE(XMVSF_A_Apocalypse_PALETTES) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_RYU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_RYU_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_RYU_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_KEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ken_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_KEN_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_KEN_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_DHALSIM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P1, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P2, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_ZANGIEF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P1, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P2, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_MBISON_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P1, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P2, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_MBISON_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_MBISON_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_GOUKI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHARLIE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P1, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P2, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CAMMY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHUNLI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHUNLISFA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_BONUS_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_CSI_PALETTES, ARRAYSIZE(XMVSF_A_BONUS_CSI_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES) },
};

const sDescTreeNode XMVSF_A_UNITS[] =
{
   { L"Cammy", DESC_NODETYPE_TREE, (void*)XMVSF_A_CAMMY_COLLECTION, ARRAYSIZE(XMVSF_A_CAMMY_COLLECTION) },
   { L"Charlie", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHARLIE_COLLECTION, ARRAYSIZE(XMVSF_A_CHARLIE_COLLECTION) },
   { L"Chun-Li", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLI_COLLECTION, ARRAYSIZE(XMVSF_A_CHUNLI_COLLECTION) },
   { L"Chun-Li (SFA)", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLISFA_COLLECTION, ARRAYSIZE(XMVSF_A_CHUNLISFA_COLLECTION) },
   { L"Cyclops", DESC_NODETYPE_TREE, (void*)XMVSF_A_CYCLOPS_COLLECTION, ARRAYSIZE(XMVSF_A_CYCLOPS_COLLECTION) },
   { L"Dhalsim", DESC_NODETYPE_TREE, (void*)XMVSF_A_DHALSIM_COLLECTION, ARRAYSIZE(XMVSF_A_DHALSIM_COLLECTION) },
   { L"Gambit", DESC_NODETYPE_TREE, (void*)XMVSF_A_GAMBIT_COLLECTION, ARRAYSIZE(XMVSF_A_GAMBIT_COLLECTION) },
   { L"Gouki", DESC_NODETYPE_TREE, (void*)XMVSF_A_GOUKI_COLLECTION, ARRAYSIZE(XMVSF_A_GOUKI_COLLECTION) },
   { L"Juggernaut", DESC_NODETYPE_TREE, (void*)XMVSF_A_JUGGERNAUT_COLLECTION, ARRAYSIZE(XMVSF_A_JUGGERNAUT_COLLECTION) },
   { L"Ken", DESC_NODETYPE_TREE, (void*)XMVSF_A_KEN_COLLECTION, ARRAYSIZE(XMVSF_A_KEN_COLLECTION) },
   { L"M. Bison", DESC_NODETYPE_TREE, (void*)XMVSF_A_MBISON_COLLECTION, ARRAYSIZE(XMVSF_A_MBISON_COLLECTION) },
   { L"Magneto", DESC_NODETYPE_TREE, (void*)XMVSF_A_MAGNETO_COLLECTION, ARRAYSIZE(XMVSF_A_MAGNETO_COLLECTION) },
   { L"Rogue", DESC_NODETYPE_TREE, (void*)XMVSF_A_ROGUE_COLLECTION, ARRAYSIZE(XMVSF_A_ROGUE_COLLECTION) },
   { L"Ryu", DESC_NODETYPE_TREE, (void*)XMVSF_A_RYU_COLLECTION, ARRAYSIZE(XMVSF_A_RYU_COLLECTION) },
   { L"Sabretooth", DESC_NODETYPE_TREE, (void*)XMVSF_A_SABRETOOTH_COLLECTION, ARRAYSIZE(XMVSF_A_SABRETOOTH_COLLECTION) },
   { L"Storm", DESC_NODETYPE_TREE, (void*)XMVSF_A_STORM_COLLECTION, ARRAYSIZE(XMVSF_A_STORM_COLLECTION) },
   { L"Wolverine", DESC_NODETYPE_TREE, (void*)XMVSF_A_WOLVERINE_COLLECTION, ARRAYSIZE(XMVSF_A_WOLVERINE_COLLECTION) },
   { L"Zangief", DESC_NODETYPE_TREE, (void*)XMVSF_A_ZANGIEF_COLLECTION, ARRAYSIZE(XMVSF_A_ZANGIEF_COLLECTION) },
   { L"Apocalypse", DESC_NODETYPE_TREE, (void*)XMVSF_A_APOCALYPSE_COLLECTION, ARRAYSIZE(XMVSF_A_APOCALYPSE_COLLECTION) },
   { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_COLLECTION, ARRAYSIZE(XMVSF_A_BONUS_COLLECTION) },
};

constexpr auto XMVSF_A_NUMUNIT = ARRAYSIZE(XMVSF_A_UNITS);

#define XMVSF_A_EXTRALOC XMVSF_A_NUMUNIT

// This is the alphabetically sorted list of ROM locations:
/*
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
*/

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

#pragma once

// Editor's note:
// Some characters have more than P/K colors available.  Those don't appear to be used
// and may have been part of getting ready for the console release.

// Sprite reference:
// https://www.zytor.com/~johannax/jigsaw/sf/xvsf.html

const std::vector<uint16_t> XMVSF_A_IMGIDS_USED =
{
    indexCPS2Sprites_Ryu,          // 0x00
    indexCPS2Sprites_Zangief,      // 0x01
    indexCPS2Sprites_Cyclops,      // 0x06
    indexCPS2Sprites_Wolverine,    // 0x07
    indexCPS2Sprites_Rogue,        // 0x0A
    indexCPS2Sprites_ChunLi,       // 0x1B
    indexCPS2Sprites_Akuma,        // 0x1E
    indexCPS2Sprites_Charlie,      // 0x21
    indexCPS2Sprites_Cammy,        // 0x24
    indexCPS2Sprites_Dhalsim,      // 0x25
    indexCPS2Sprites_Bison,        // 0x26
    indexCPS2Sprites_Ken,          // 0x27
    indexCPS2Sprites_Gambit,       // 0x28
    indexCPS2Sprites_Juggy,        // 0x29
    indexCPS2Sprites_Storm,        // 0x2A
    indexCPS2Sprites_Sabretooth,   // 0x2B
    indexCPS2Sprites_Magneto,      // 0x2C
    indexCPS2Sprites_Apocalypse,   // 0x4f
    indexCPS2Sprites_XMVSFAssets,  // 0x50 - XMVSF HUD, stages

    indexCPS2Sprites_Bonus,         // 0xea
};

#pragma region SecondaryPaletteEffects

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Cammy =
{
    // For the (03) / Extra 0x02 coat palette, CapCom only changes the main jacket color
    // (colors 8-12) for different buttons, and they're not tied to the main palette.
    // So we'll just leave this alone for now, although arguably at least updating her hair makes sense.

    // counter flash
    { SUPP_NODE, 0x03, 9,
        MOD_TINT, 1, 15, 1, 0, 8, 15 }, // blue + 15
    { SUPP_NODE, 0x04, 9,
        MOD_TINT, 1, 15, 1, 0, 6, 14 }, // blue + 14
    { SUPP_NODE, 0x05, 9,
        MOD_TINT, 1, 15, 1, 0, 4, 10 }, // blue + 10
    { SUPP_NODE, 0x06, 9,
        MOD_TINT, 1, 15, 1, 0, 2, 7 }, // blue + 7
    { SUPP_NODE, 0x07, 9,
        MOD_TINT, 1, 15, 1, 0, 0, 4 }, // blue + 3
    { SUPP_NODE, 0x08, 9 },  // xcopy
    { SUPP_NODE, 0x09, 9,
        MOD_TINT, 1, 15, 1, NEG + 1, NEG + 1, 3 }, // dark blue + 3
    { SUPP_NODE, 0x0a, 9,
        MOD_TINT, 1, 15, 1, NEG + 2, NEG + 2, 5 }, // dark blue + 5
    { SUPP_NODE, 0x0b, 9,
        MOD_TINT, 1, 15, 1, NEG + 4, NEG + 4, 7 }, // dark blue + 7
};

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Cyclops =
{
    // there are 8 intro frames
    { SUPP_NODE, 0x03, 8,
        MOD_LUM, 1, 15, NEG + 3 },
    { SUPP_NODE, 0x04, 8,
        MOD_LUM, 1, 15, NEG + 7 },
    { SUPP_NODE, 0x05, 8,
        MOD_LUM, 1, 15, NEG + 11 },
    { SUPP_NODE, 0x06, 8,
        MOD_LUM, 1, 15, NEG + 17 },
    { SUPP_NODE, 0x07, 8,
        MOD_LUM, 1, 15, NEG + 24 },
    { SUPP_NODE, 0x08, 8,
        MOD_LUM, 1, 15, NEG + 30 },
    { SUPP_NODE, 0x09, 8,
        MOD_LUM, 1, 15, NEG + 33 },
    { SUPP_NODE, 0x0a, 8,
        MOD_LUM, 1, 15, NEG + 39 },

    // Mega Optic Blast Stance
    // default color slightly darkened
    { SUPP_NODE, 0x0b, 2,
        MOD_LUM, 1, 15, NEG + 2 },
    // default color with red tint
    { SUPP_NODE, 0x0c, 2,
        MOD_TINT, 1, 15, 1, 5, NEG + 1, NEG + 1 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Dhalsim =
{
    // 5 teleport frames
    { SUPP_NODE, 0x03, 5,
        MOD_LUM, 1, 15, 15 },
    { SUPP_NODE, 0x04, 5,
        MOD_LUM, 1, 15, 27 },
    { SUPP_NODE, 0x05, 5,
        MOD_LUM, 1, 15, 42 },
    { SUPP_NODE, 0x06, 5,
        MOD_LUM, 1, 15, 65 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Gambit =
{
    // 5 win pose frames
    { SUPP_NODE, 0x03, 5,
        MOD_LUM, 1, 15, 10 },
    { SUPP_NODE, 0x04, 5,
        MOD_LUM, 1, 15, 5 },
    { SUPP_NODE, 0x05, 5 },
    { SUPP_NODE, 0x06, 5,
        MOD_LUM, 1, 15, 5 + NEG },
    { SUPP_NODE, 0x07, 5,
        MOD_LUM, 1, 15, 10 + NEG },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Juggernaut =
{
    // 8 Power-up frames
    { SUPP_NODE, 0x05, 10,
        MOD_LUM, 1, 15, 6 },
    { SUPP_NODE, 0x06, 10,
        MOD_LUM, 1, 15, 12 },
    { SUPP_NODE, 0x07, 10,
        MOD_LUM, 1, 15, 15 },
    { SUPP_NODE, 0x08, 10,
        MOD_LUM, 1, 15, 18 },
    { SUPP_NODE, 0x09, 10,
        MOD_LUM, 1, 15, 12 },
    { SUPP_NODE, 0x0a, 10,
        MOD_LUM, 1, 15, 7 },
    { SUPP_NODE, 0x0b, 10,
        MOD_LUM, 1, 15, 4 },
    { SUPP_NODE, 0x0c, 10 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Rogue =
{
    // Dash shadows
    { SUPP_NODE, 0x03, 8,
        MOD_LUM, 1, 15, NEG + 8 },
    { SUPP_NODE, 0x04, 8,
        MOD_LUM, 1, 15, NEG + 12 },
    // Winpose skin
    { SUPP_NODE, 0x05, 8,
        MOD_COPY, 2, 4, 2 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Storm =
{
    // two palettes of shine cycle
    { SUPP_NODE, 0x01, 28,
        MOD_SAT, 1, 15, NEG + 40 },
    { SUPP_NODE, 0x02, 28,
        MOD_SAT, 1, 15, NEG + 60 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_XMVSF_Wolverine =
{
    // his berserker barrage trails a bit of his costume.
    { SUPP_NODE | SUPP_NODE_NOCOPY, 2, 8,
        MOD_COPY,  2, 1, 12,
        MOD_COPY, 11, 1, 13,
        MOD_COPY, 10, 1, 14,
        MOD_COPY,  9, 1, 15 },
};

const stPaletteProcessingInformation secondaryXMVSFCammyEffects{ paletteBuddy_XMVSF_Cammy };
const stPaletteProcessingInformation secondaryXMVSFCyclopsEffects{ paletteBuddy_XMVSF_Cyclops };
const stPaletteProcessingInformation secondaryXMVSFDhalsimEffects{ paletteBuddy_XMVSF_Dhalsim };
const stPaletteProcessingInformation secondaryXMVSFGambitEffects{ paletteBuddy_XMVSF_Gambit };
const stPaletteProcessingInformation secondaryXMVSFJuggernautEffects{ paletteBuddy_XMVSF_Juggernaut };
const stPaletteProcessingInformation secondaryXMVSFRogueEffects{ paletteBuddy_XMVSF_Rogue };
const stPaletteProcessingInformation secondaryXMVSFStormEffects{ paletteBuddy_XMVSF_Storm };
const stPaletteProcessingInformation secondaryXMVSFWolverineEffects{ paletteBuddy_XMVSF_Wolverine };

#pragma endregion 

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P1[] =
{
    { L"Punch Color",    0x14d7a, 0x14d9a, indexCPS2Sprites_Wolverine, 0x00, &pairNext, &secondaryXMVSFWolverineEffects },
    { L"Claws",          0x14d9a, 0x14dba, indexCPS2Sprites_Wolverine, 0x01 },
    { L"Slash FX",       0x14dba, 0x14dda, indexCPS2Sprites_Wolverine, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Wolverine_PALETTES_P2[] =
{
    { L"Kick Color",     0x14dda, 0x14dfa, indexCPS2Sprites_Wolverine, 0x00, &pairNext, &secondaryXMVSFWolverineEffects },
    { L"Claws",          0x14dfa, 0x14e1a, indexCPS2Sprites_Wolverine, 0x01 },
    { L"Slash FX",       0x14e1a, 0x14e3a, indexCPS2Sprites_Wolverine, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P1[] =
{
    { L"Punch Color",    0x14e3a, 0x14e5a, indexCPS2Sprites_Cyclops, 0x00, &pairNext, &secondaryXMVSFCyclopsEffects },
    { L"HK",             0x14e5a, 0x14e7a, indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic FX",       0x14e7a, 0x14e9a, indexCPS2Sprites_Cyclops, 0x02 },

    { L"Intro 1", 0x17fda, 0x17ffa, indexCPS2Sprites_Cyclops, 12 }, // Intro animation: cycles from 1 to 7 and back.
    { L"Intro 2", 0x17ffa, 0x1801a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 3", 0x1801a, 0x1803a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 4", 0x1803a, 0x1805a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 5", 0x1805a, 0x1807a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 6", 0x1807a, 0x1809a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 7", 0x1809a, 0x180Ba, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 8", 0x180Ba, 0x180Da, indexCPS2Sprites_Cyclops, 12 },

    { L"Optic Blast 1", 0x1827a, 0x1829a, indexCPS2Sprites_Cyclops, 13 },
    { L"Optic Blast 2", 0x1829a, 0x182Ba, indexCPS2Sprites_Cyclops, 13 },

    { L"Laser FX Unused?", 0x14f3a, 0x14f5a, indexCPS2Sprites_Cyclops, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_P2[] =
{
    { L"Kick Color", 0x14e9a, 0x14eba, indexCPS2Sprites_Cyclops, 0x00, &pairNext, &secondaryXMVSFCyclopsEffects },
    { L"HK", 0x14eba, 0x14eda, indexCPS2Sprites_Cyclops, 0x01 },
    { L"Optic FX", 0x14eda, 0x14efa, indexCPS2Sprites_Cyclops, 0x02 },

    { L"Intro 1", 0x180da, 0x180fa, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 2", 0x180fa, 0x1811a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 3", 0x1811a, 0x1813a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 4", 0x1813a, 0x1815a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 5", 0x1815a, 0x1817a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 6", 0x1817a, 0x1819a, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 7", 0x1819a, 0x181Ba, indexCPS2Sprites_Cyclops, 12 },
    { L"Intro 8", 0x181Ba, 0x181Da, indexCPS2Sprites_Cyclops, 12 },

    { L"Optic Blast 1", 0x182ba, 0x182da, indexCPS2Sprites_Cyclops, 13 },
    { L"Optic Blast 2", 0x182da, 0x182fa, indexCPS2Sprites_Cyclops, 13 },

    { L"Laser FX Unused?", 0x14f9a, 0x14fba, indexCPS2Sprites_Cyclops, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cyclops_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x14efa, 0x14f1a, indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"Palette (07)", 0x14f1a, 0x14f3a, indexCPS2Sprites_Cyclops, 0x01 },
    { L"Palette (09)", 0x14f5a, 0x14f7a, indexCPS2Sprites_Cyclops, 0x00, &pairNext },
    { L"Palette (0A)", 0x14f7a, 0x14f9a, indexCPS2Sprites_Cyclops, 0x01 },

    { L"Optic Blast / Optic Bullet (Shared) 1", 0x181da, 0x181fa, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 2", 0x181fa, 0x1821a, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 3 Unused?", 0x1821a, 0x1823a, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 4", 0x1823a, 0x1825a, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet (Shared) 5 Unused?", 0x1825a, 0x1827a, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Taunt", 0x182fa, 0x1831a },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P1[] =
{
    { L"Punch Color", 0x14fba, 0x14fda, indexCPS2Sprites_Storm, 0x00, nullptr, &secondaryXMVSFStormEffects },
    { L"Palette (01)",   0x14fda, 0x14ffa, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (02)",   0x14ffa, 0x1501a, indexCPS2Sprites_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_P2[] =
{
    { L"Kick Color", 0x1501a, 0x1503a, indexCPS2Sprites_Storm, 0x00, nullptr, &secondaryXMVSFStormEffects },
    { L"Palette (04)",  0x1503a, 0x1505a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (05)",  0x1505a, 0x1507a, indexCPS2Sprites_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Storm_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1507a, 0x1509a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (07)", 0x1509a, 0x150ba, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (08)", 0x150ba, 0x150da, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (09)", 0x150da, 0x150fa, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (0A)", 0x150fa, 0x1511a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (0B)", 0x1511a, 0x1513a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (0C)", 0x1513a, 0x1515a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (0D)", 0x1515a, 0x1517a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (0E)", 0x1517a, 0x1519a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (0F)", 0x1519a, 0x151ba, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (10)", 0x151ba, 0x151da, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (11)", 0x151da, 0x151fa, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (12)", 0x151fa, 0x1521a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (13)", 0x1521a, 0x1523a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (14)", 0x1523a, 0x1525a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (15)", 0x1525a, 0x1527a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (16)", 0x1527a, 0x1529a, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (17)", 0x1529a, 0x152ba, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (18)", 0x152ba, 0x152da, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (19)", 0x152da, 0x152fa, indexCPS2Sprites_Storm, 0x00 },
    { L"Palette (1A)", 0x152fa, 0x1531a, indexCPS2Sprites_Storm, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P1[] =
{
    { L"Punch Color", 0x153da, 0x153fa, indexCPS2Sprites_Gambit, 0x00, nullptr, &secondaryXMVSFGambitEffects },
    { L"Kinetic Card // Trick Card", 0x153fa, 0x1541a, indexCPS2Sprites_Gambit, 0x01 },
    { L"Cajun Strike", 0x1541a, 0x1543a, indexCPS2Sprites_Gambit, 0x02 },

    // le tournament es finit
    { L"Glow Effects 1", 0x1e63a, 0x1e65a, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 2", 0x1e65a, 0x1e67a, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 3", 0x1e67a, 0x1e69a, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 4", 0x1e69a, 0x1e6ba, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 5", 0x1e6ba, 0x1e6da, indexCPS2Sprites_Gambit, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Gambit_PALETTES_P2[] =
{
    { L"Kick Color", 0x1543a, 0x1545a, indexCPS2Sprites_Gambit, 0x00, nullptr, &secondaryXMVSFGambitEffects },
    { L"Kinetic Card // Trick Card", 0x1545a, 0x1547a, indexCPS2Sprites_Gambit, 0x01 },
    { L"Cajun Strike", 0x1547a, 0x1549a, indexCPS2Sprites_Gambit, 0x02 },

    { L"Glow Effects 1", 0x1e6da, 0x1e6fa, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 2", 0x1e6fa, 0x1e71a, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 3", 0x1e71a, 0x1e73a, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 4", 0x1e73a, 0x1e75a, indexCPS2Sprites_Gambit, 0x00 },
    { L"Glow Effects 5", 0x1e75a, 0x1e77a, indexCPS2Sprites_Gambit, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P1[] =
{
    { L"Punch Color", 0x1549a, 0x154ba, indexCPS2Sprites_Sabretooth, 0x00, &pairNextAndNext },
    { L"Slash FX", 0x154ba, 0x154da, indexCPS2Sprites_Sabretooth, 0x01 },
    { L"Birdy", 0x154da, 0x154fa, indexCPS2Sprites_Sabretooth, 0x02 },
    { L"Getaway car", 0x1555a, 0x1557a, indexCPS2Sprites_Sabretooth, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Sabretooth_PALETTES_P2[] =
{
    { L"Kick Color", 0x154fa, 0x1551a, indexCPS2Sprites_Sabretooth, 0x00, &pairNextAndNext },
    { L"Slash FX", 0x1551a, 0x1553a, indexCPS2Sprites_Sabretooth, 0x01 },
    { L"Birdy", 0x1553a, 0x1555a, indexCPS2Sprites_Sabretooth, 0x02 },
    { L"Getaway car", 0x1557a, 0x1559a, indexCPS2Sprites_Sabretooth, 0x03 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P1[] =
{
    { L"Punch Color", 0x1559a, 0x155ba, indexCPS2Sprites_Juggy, 0x00, nullptr, &secondaryXMVSFJuggernautEffects },
    { L"Palette (01)", 0x155ba, 0x155da },
    { L"Ground FX", 0x155da, 0x155fa, indexCPS2Sprites_Juggy, 0x02 },

    { L"Juggernaut Headcrush Frame 1", 0x184ba, 0x184da, indexCPS2Sprites_Juggy, 0x00 },
    { L"Juggernaut Headcrush Frame 2", 0x184da, 0x184fa, indexCPS2Sprites_Juggy, 0x00 },
    { L"Cyttorak Power-Up 1", 0x184fa, 0x1851a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 2", 0x1851a, 0x1853a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 3", 0x1853a, 0x1855a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 4", 0x1855a, 0x1857a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 5", 0x1857a, 0x1859a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 6", 0x1859a, 0x185Ba, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 7", 0x185Ba, 0x185Da, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 8", 0x185Da, 0x185Fa, indexCPS2Sprites_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_P2[] =
{
    { L"Kick Color", 0x155fa, 0x1561a, indexCPS2Sprites_Juggy, 0x00, nullptr, &secondaryXMVSFJuggernautEffects },
    { L"Palette (04)", 0x1561a, 0x1563a },
    { L"Ground FX", 0x1563a, 0x1565a, indexCPS2Sprites_Juggy, 0x02 },

    { L"Juggernaut Headcrush Frame 1", 0x185fa, 0x1861a, indexCPS2Sprites_Juggy, 0x00 },
    { L"Juggernaut Headcrush Frame 2", 0x1861a, 0x1863a, indexCPS2Sprites_Juggy, 0x00 },
    { L"Cyttorak Power-Up 1", 0x1863a, 0x1865a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 2", 0x1865a, 0x1867a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 3", 0x1867a, 0x1869a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 4", 0x1869a, 0x186Ba, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 5", 0x186Ba, 0x186Da, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 6", 0x186Da, 0x186Fa, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 7", 0x186Fa, 0x1871a, indexCPS2Sprites_Juggy, 11 },
    { L"Cyttorak Power-Up 8", 0x1871a, 0x1873a, indexCPS2Sprites_Juggy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Juggernaut_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1565a, 0x1567a, indexCPS2Sprites_Juggy, 0x00 },
    { L"Palette (07)", 0x1567a, 0x1569a, indexCPS2Sprites_Juggy, 0x00 },
    { L"Palette (08)", 0x1569a, 0x156ba, indexCPS2Sprites_Juggy, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P1[] =
{
    { L"Punch Color", 0x15fda, 0x15ffa, indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho FX 1", 0x15ffa, 0x1601a, indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 2", 0x1601a, 0x1603a, indexCPS2Sprites_Bison, 0x09 },
    { L"Psycho FX 3", 0x18a9a, 0x18aba, indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 4", 0x18aba, 0x18ada, indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset XMVSF_A_MBison_PALETTES_P2[] =
{
    { L"Kick Color", 0x1603a, 0x1605a, indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho FX 1", 0x1605a, 0x1607a, indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 2", 0x1607a, 0x1609a, indexCPS2Sprites_Bison, 0x09 },
    { L"Psycho FX 3", 0x18ada, 0x18afa, indexCPS2Sprites_Bison, 0x08 },
    { L"Psycho FX 4", 0x18afa, 0x18b1a, indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P1[] =
{
    { L"Punch Color", 0x156ba, 0x156da, indexCPS2Sprites_Magneto, 0x00 },
    { L"Magnetic FX", 0x156da, 0x156fa, indexCPS2Sprites_Magneto, 0x01 },
    { L"Magnetic FX 2", 0x156fa, 0x1571a, indexCPS2Sprites_Magneto, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Magneto_PALETTES_P2[] =
{
    { L"Kick Color", 0x1571a, 0x1573a, indexCPS2Sprites_Magneto, 0x00 },
    { L"Magnetic FX", 0x1573a, 0x1575a, indexCPS2Sprites_Magneto, 0x01 },
    { L"Magnetic FX 2", 0x1575a, 0x1577a, indexCPS2Sprites_Magneto, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P1[] =
{
    { L"Punch Color", 0x1531a, 0x1533a, indexCPS2Sprites_Rogue, 0x0c, nullptr, &secondaryXMVSFRogueEffects },
    { L"Palette (01)", 0x1533a, 0x1535a, indexCPS2Sprites_Rogue, 0x0c },
    { L"Ground FX", 0x1535a, 0x1537a, indexCPS2Sprites_Rogue, 0x02 },

    // If you change the position of these (0x03 / 0x04), you will need to update secondaryXMVSFRogueEffects
    { L"Glow Effects 1", 0x1e57a, 0x1e59a, indexCPS2Sprites_Rogue, 0x0c },
    { L"Glow Effects 2", 0x1e59a, 0x1e5ba, indexCPS2Sprites_Rogue, 0x0c },

    { L"Winposes", 0x1e5fa, 0x1e61a, indexCPS2Sprites_Rogue, 0x0b },
};

const sGame_PaletteDataset XMVSF_A_Rogue_PALETTES_P2[] =
{
    { L"Kick Color", 0x1537a, 0x1539a, indexCPS2Sprites_Rogue, 0x0c, nullptr, &secondaryXMVSFRogueEffects },
    { L"Palette (04)", 0x1539a, 0x153ba, indexCPS2Sprites_Rogue, 0x0c },
    { L"Ground FX", 0x153ba, 0x153da, indexCPS2Sprites_Rogue, 0x02 },

    // If you change the position of these (0x03 / 0x04), you will need to update secondaryXMVSFRogueEffects
    { L"Glow Effects 1", 0x1e5ba, 0x1e5da, indexCPS2Sprites_Rogue, 0x0c },
    { L"Glow Effects 2", 0x1e5da, 0x1e5fa, indexCPS2Sprites_Rogue, 0x0c },

    { L"Winposes", 0x1e61a, 0x1e63a, indexCPS2Sprites_Rogue, 0x0b },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P1[] =
{
    { L"Punch Color", 0x1589a, 0x158ba, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken", 0x158ba, 0x158da, indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2", 0x158da, 0x158fa },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_P2[] =
{
    { L"Kick Color", 0x158fa, 0x1591a, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadouken", 0x1591a, 0x1593a, indexCPS2Sprites_Ryu, 0x01 },
    { L"Extra 2", 0x1593a, 0x1595a },
};

const sGame_PaletteDataset XMVSF_A_Ryu_PALETTES_Extras[] =
{
    { L"Palette (06)",           0x1595a, 0x1597a, indexCPS2Sprites_Ryu, 0x00 },
    { L"Palette (07) Hadouken", 0x1597a, 0x1599a, indexCPS2Sprites_Ryu, 0x01 },
    { L"Palette (08)",           0x1599a, 0x159ba },
    { L"Palette (09)",           0x159ba, 0x159da, indexCPS2Sprites_Ryu, 0x00 },
    { L"Palette (0A) Hadouken", 0x159da, 0x159fa, indexCPS2Sprites_Ryu, 0x01 },
    { L"Palette (0B)",           0x159fa, 0x15a1a },
};

const sGame_PaletteDataset XMVSF_A_Apocalypse_PALETTES[] =
{
    { L"Small Body (intro)",     0x157da, 0x157fa, indexCPS2Sprites_Apocalypse, 0x00 }, // confirmed
    { L"Giant Head",             0x1579a, 0x157ba, indexCPS2Sprites_Apocalypse, 1 }, // confirmed
    { L"Giant Body",             0x606c,   0x60ac, indexCPS2Sprites_Apocalypse, 0x03 }, // confirmed
    { L"Giant Arm",              0x1577a, 0x1579a, indexCPS2Sprites_Apocalypse, 2 }, // confirmed
    { L"Shoulder Guns",          0x157ba, 0x157da, indexCPS2Sprites_Apocalypse, 4 }, // confirmed

    { L"Shockwave",              0x157fa, 0x1581a }, // confirmed
    { L"?",                      0x1581a, 0x1583a }, // unclear
    { L"Drones",                 0x1583a, 0x1585a, indexCPS2Sprites_Apocalypse, 0x05 }, // confirmed
    { L"Hand: Mace and Drill",   0x1585a, 0x1587a, indexCPS2Sprites_Apocalypse, 0x06 }, // confirmed
    { L"Shoulder Lasers",        0x1587a, 0x1589a }, // confirmed
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P1[] =
{
    { L"Punch Color", 0x15a1a, 0x15a3a, indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken", 0x15a3a, 0x15a5a, indexCPS2Sprites_Ken, 0x10 },
    { L"Shoryuken", 0x15a5a, 0x15a7a, indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_P2[] =
{
    { L"Kick Color", 0x15a7a, 0x15a9a, indexCPS2Sprites_Ken, 0x00 },
    { L"Hadouken", 0x15a9a, 0x15aba, indexCPS2Sprites_Ken, 0x10 },
    { L"Shoryuken", 0x15aba, 0x15ada, indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Ken_PALETTES_Extras[] =
{
    { L"Palette (06)",           0x15ada, 0x15afa, indexCPS2Sprites_Ken, 0x00 },
    { L"Palette (07) Hadouken", 0x15afa, 0x15b1a, indexCPS2Sprites_Ken, 0x10 },
    { L"Palette (08) Shoryuken", 0x15b1a, 0x15b3a, indexCPS2Sprites_Ken, 0x02 },
    { L"Palette (09)",           0x15b3a, 0x15b5a, indexCPS2Sprites_Ken, 0x00 },
    { L"Palette (0A) Hadouken", 0x15b5a, 0x15b7a, indexCPS2Sprites_Ken, 0x10 },
    { L"Palette (0B) Shoryuken", 0x15b7a, 0x15b9a, indexCPS2Sprites_Ken, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P1[] =
{
    { L"Punch Color", 0x15c5a, 0x15c7a, indexCPS2Sprites_Dhalsim, 0x00, nullptr, &secondaryXMVSFDhalsimEffects },
    { L"Fire FX", 0x15c7a, 0x15c9a, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally", 0x15c9a, 0x15cba, indexCPS2Sprites_Dhalsim, 0x02 },

    { L"Teleport 1", 0x1895a, 0x1897a, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 2", 0x1897a, 0x1899a, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 3", 0x1899a, 0x189Ba, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 4", 0x189Ba, 0x189Da, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 5", 0x189Da, 0x189Fa, indexCPS2Sprites_Dhalsim, 11 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_P2[] =
{
    { L"Kick Color", 0x15cba, 0x15cda, indexCPS2Sprites_Dhalsim, 0x00, nullptr, &secondaryXMVSFDhalsimEffects },
    { L"Fire FX", 0x15cda, 0x15cfa, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Sally", 0x15cfa, 0x15d1a, indexCPS2Sprites_Dhalsim, 0x02 },

    { L"Teleport 1", 0x189Fa, 0x18A1a, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 2", 0x18A1a, 0x18A3a, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 3", 0x18A3a, 0x18A5a, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 4", 0x18A5a, 0x18A7a, indexCPS2Sprites_Dhalsim, 11 },
    { L"Teleport 5", 0x18A7a, 0x18A9a, indexCPS2Sprites_Dhalsim, 11 },
};

const sGame_PaletteDataset XMVSF_A_Dhalsim_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x15d1a, 0x15d3a, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Palette (07)", 0x15d3a, 0x15d5a, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P1[] =
{
    { L"Punch Color", 0x15d5a, 0x15d7a, indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x15d7a, 0x15d9a, indexCPS2Sprites_Zangief, 0x01 },
    { L"Palette (02)", 0x15d9a, 0x15dba },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_P2[] =
{
    { L"Kick Color", 0x15dba, 0x15dda, indexCPS2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x15dda, 0x15dfa, indexCPS2Sprites_Zangief, 0x01 },
    { L"Palette (05)", 0x15dfa, 0x15e1a },
};

const sGame_PaletteDataset XMVSF_A_Zangief_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x15e1a, 0x15e3a, indexCPS2Sprites_Zangief, 0x00 },
    { L"Palette (07) Banishing Fist", 0x15e3a, 0x15e5a, indexCPS2Sprites_Zangief, 0x01 },
    { L"Palette (08)", 0x15e5a, 0x15e7a },
    { L"Palette (09)", 0x15e7a, 0x15e9a, indexCPS2Sprites_Zangief, 0x00 },
    { L"Palette (0A) Banishing Fist", 0x15e9a, 0x15eba, indexCPS2Sprites_Zangief, 0x01 },
    { L"Palette (0B)", 0x15eba, 0x15eda },
    { L"Palette (0C)", 0x15eda, 0x15efa, indexCPS2Sprites_Zangief, 0x00 },
    { L"Palette (0D) Banishing Fist", 0x15efa, 0x15f1a, indexCPS2Sprites_Zangief, 0x01 },
    { L"Palette (0E)", 0x15f1a, 0x15f3a },
    { L"Palette (0F)", 0x15f3a, 0x15f5a, indexCPS2Sprites_Zangief, 0x00 },
    { L"Palette (10) Banishing Fist", 0x15f5a, 0x15f7a, indexCPS2Sprites_Zangief, 0x01 },
    { L"Palette (11)", 0x15f7a, 0x15f9a },
    { L"Palette (12)", 0x15f9a, 0x15fba },
    { L"Palette (13)", 0x15fba, 0x15fda },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P1[] =
{
    { L"Punch Color", 0x1609a, 0x160ba, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadouken", 0x160ba, 0x160da, indexCPS2Sprites_Akuma, 0x01 },
    { L"Zankuu Hadouken", 0x160da, 0x160fa, indexCPS2Sprites_Akuma, 0x01 },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_P2[] =
{
    { L"Kick Color", 0x160fa, 0x1611a, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadouken", 0x1611a, 0x1613a, indexCPS2Sprites_Akuma, 0x01 },
    { L"Zankuu Hadouken", 0x1613a, 0x1615a, indexCPS2Sprites_Akuma, 0x01 },
};

const sGame_PaletteDataset XMVSF_A_Gouki_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1615a, 0x1617a, indexCPS2Sprites_Akuma, 0x00 },
    { L"Palette (07) Hadouken", 0x1617a, 0x1619a, indexCPS2Sprites_Akuma, 0x01 },
    { L"Palette (08) Zankuu Hadouken", 0x1619a, 0x161ba, indexCPS2Sprites_Akuma, 0x01 },
    { L"Palette (09)", 0x161ba, 0x161da, indexCPS2Sprites_Akuma, 0x00 },
    { L"Palette (0A) Hadouken", 0x161da, 0x161fa, indexCPS2Sprites_Akuma, 0x01 },
    { L"Palette (0B) Zankuu Hadouken", 0x161fa, 0x1621a, indexCPS2Sprites_Akuma, 0x01 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P1[] =
{
    { L"Punch Color", 0x1621a, 0x1623a, indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Booms", 0x1623a, 0x1625a, indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kicks", 0x1625a, 0x1627a, indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_P2[] =
{
    { L"Kick Color", 0x1627a, 0x1629a, indexCPS2Sprites_Charlie, 0x00 },
    { L"Sonic Booms", 0x1629a, 0x162ba, indexCPS2Sprites_Charlie, 0x01 },
    { L"Flash Kicks", 0x162ba, 0x162da, indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Charlie_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x162da, 0x162fa, indexCPS2Sprites_Charlie, 0x00 },
    { L"? Sonic Booms", 0x162fa, 0x1631a, indexCPS2Sprites_Charlie, 0x01 },
    { L"? Flash Kicks", 0x1631a, 0x1633a, indexCPS2Sprites_Charlie, 0x02 },
    { L"Palette (09)", 0x1633a, 0x1635a, indexCPS2Sprites_Charlie, 0x00 },
    { L"? Sonic Booms", 0x1635a, 0x1637a, indexCPS2Sprites_Charlie, 0x01 },
    { L"? Flash Kicks", 0x1637a, 0x1639a, indexCPS2Sprites_Charlie, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P1[] =
{
    { L"Punch Color", 0x1639a, 0x163ba, indexCPS2Sprites_Cammy, 0x00, nullptr, &secondaryXMVSFCammyEffects },
    { L"Psycho FX", 0x163ba, 0x163da, indexCPS2Sprites_Cammy, 0x01 },
    { L"Coat", 0x163da, 0x163fa, indexCPS2Sprites_Cammy, 0x02 },

    { L"Cannon Revenge 1", 0x18b1a, 0x18b3a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 2", 0x18b3a, 0x18b5a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 3", 0x18b5a, 0x18b7a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 4", 0x18b7a, 0x18b9a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 5", 0x18b9a, 0x18bba, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 6", 0x18bba, 0x18bda, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 7", 0x18bda, 0x18bfa, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 8", 0x18bfa, 0x18c1a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 9", 0x18c1a, 0x18c3a, indexCPS2Sprites_Cammy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_P2[] =
{
    { L"Kick Color", 0x163fa, 0x1641a, indexCPS2Sprites_Cammy, 0x00, nullptr, &secondaryXMVSFCammyEffects },
    { L"Psycho FX", 0x1641a, 0x1643a, indexCPS2Sprites_Cammy, 0x01 },
    { L"Coat", 0x1643a, 0x1645a, indexCPS2Sprites_Cammy, 0x02 },

    { L"Cannon Revenge 1", 0x18c3a, 0x18c5a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 2", 0x18c5a, 0x18c7a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 3", 0x18c7a, 0x18c9a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 4", 0x18c9a, 0x18cba, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 5", 0x18cba, 0x18cda, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 6", 0x18cda, 0x18cfa, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 7", 0x18cfa, 0x18d1a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 8", 0x18d1a, 0x18d3a, indexCPS2Sprites_Cammy, 11 },
    { L"Cannon Revenge 9", 0x18d3a, 0x18d5a, indexCPS2Sprites_Cammy, 11 },
};

const sGame_PaletteDataset XMVSF_A_Cammy_PALETTES_Extras[] =
{
    { L"Palette (06)", 0x1645a, 0x1647a, indexCPS2Sprites_Cammy, 0x00 },
    { L"Palette (07)", 0x1647a, 0x1649a, indexCPS2Sprites_Cammy, 0x00 },
    { L"Palette (08)", 0x1649a, 0x164ba, indexCPS2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P1[] =
{
    { L"Punch Color", 0x15b9a, 0x15bba, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)", 0x15bba, 0x15bda, indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho", 0x15bda, 0x15bfa, indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLi_PALETTES_P2[] =
{
    { L"Kick Color", 0x15bfa, 0x15c1a, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Keiokuken (shades)", 0x15c1a, 0x15c3a, indexCPS2Sprites_ChunLi, 0x01 },
    { L"Lightning Kicks / Kikouken / Kikosho", 0x15c3a, 0x15c5a, indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P1[] =
{
    { L"Punch Color", 0x164ba, 0x164da, indexCPS2Sprites_ChunLi, 0x0C, &pairNext },
    { L"Keiokuken (shades)", 0x164da, 0x164fa, indexCPS2Sprites_ChunLi, 0x0F },
    { L"Lightning Kicks / Kikouken / Kikosho", 0x164fa, 0x1651a, indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_ChunLiSFA_PALETTES_P2[] =
{
    { L"Kick Colors", 0x1651a, 0x1653a, indexCPS2Sprites_ChunLi, 0x0C, &pairNext },
    { L"Keiokuken (shades)", 0x1653a, 0x1655a, indexCPS2Sprites_ChunLi, 0x0F },
    { L"Lightning Kicks / Kikouken / Kikosho", 0x1655a, 0x1657a, indexCPS2Sprites_ChunLi, 0x02 },
};

const sGame_PaletteDataset XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16a7a, 0x16a9a, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Burning 2", 0x16a9a, 0x16aba, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Shocked 1", 0x16aba, 0x16ada, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Shocked 2", 0x16ada, 0x16afa, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Dark Burning 1", 0x16afa, 0x16b1a, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Dark Burning 2", 0x16b1a, 0x16b3a, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Kinetic Charged 1", 0x16b3a, 0x16b5a, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Kinetic Charged 2", 0x16b5a, 0x16b7a, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Kinetic Charged 3", 0x16b7a, 0x16b9a, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Super Trail 1", 0x165fa, 0x1661a, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Super Trail 2", 0x1661a, 0x1663a, indexCPS2Sprites_Wolverine, 0x80 },
};

const sGame_PaletteDataset XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16b9a, 0x16bba, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Burning 2", 0x16bba, 0x16bda, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Shocked 1", 0x16bda, 0x16bfa, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Shocked 2", 0x16bfa, 0x16c1a, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Dark Burning 1", 0x16c1a, 0x16c3a, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Dark Burning 2", 0x16c3a, 0x16c5a, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Kinetic Charged 1", 0x16c5a, 0x16c7a, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Kinetic Charged 2", 0x16c7a, 0x16c9a, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Kinetic Charged 3", 0x16c9a, 0x16cba, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Super Trail 1", 0x1663a, 0x1665a, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Super Trail 2", 0x1665a, 0x1667a, indexCPS2Sprites_Cyclops, 0x80 },
};

const sGame_PaletteDataset XMVSF_A_STORM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16cba, 0x16cda, indexCPS2Sprites_Storm },
    { L"Burning 2", 0x16cda, 0x16cfa, indexCPS2Sprites_Storm },
    { L"Shocked 1", 0x16cfa, 0x16d1a, indexCPS2Sprites_Storm },
    { L"Shocked 2", 0x16d1a, 0x16d3a, indexCPS2Sprites_Storm },
    { L"Dark Burning 1", 0x16d3a, 0x16d5a, indexCPS2Sprites_Storm },
    { L"Dark Burning 2", 0x16d5a, 0x16d7a, indexCPS2Sprites_Storm },
    { L"Kinetic Charged 1", 0x16d7a, 0x16d9a, indexCPS2Sprites_Storm },
    { L"Kinetic Charged 2", 0x16d9a, 0x16dba, indexCPS2Sprites_Storm },
    { L"Kinetic Charged 3", 0x16dba, 0x16dda, indexCPS2Sprites_Storm },
    { L"Super Trail 1", 0x1667a, 0x1669a, indexCPS2Sprites_Storm },
    { L"Super Trail 2", 0x1669a, 0x166ba, indexCPS2Sprites_Storm },
};

const sGame_PaletteDataset XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16dda, 0x16dfa, indexCPS2Sprites_Rogue, 0x0c },
    { L"Burning 2", 0x16dfa, 0x16e1a, indexCPS2Sprites_Rogue, 0x0c },
    { L"Shocked 1", 0x16e1a, 0x16e3a, indexCPS2Sprites_Rogue, 0x0c },
    { L"Shocked 2", 0x16e3a, 0x16e5a, indexCPS2Sprites_Rogue, 0x0c },
    { L"Dark Burning 1", 0x16e5a, 0x16e7a, indexCPS2Sprites_Rogue, 0x0c },
    { L"Dark Burning 2", 0x16e7a, 0x16e9a, indexCPS2Sprites_Rogue, 0x0c },
    { L"Kinetic Charged 1", 0x16e9a, 0x16eba, indexCPS2Sprites_Rogue, 0x0c },
    { L"Kinetic Charged 2", 0x16eba, 0x16eda, indexCPS2Sprites_Rogue, 0x0c },
    { L"Kinetic Charged 3", 0x16eda, 0x16efa, indexCPS2Sprites_Rogue, 0x0c },
    { L"Super Trail 1", 0x166ba, 0x166da, indexCPS2Sprites_Rogue, 0x0c },
    { L"Super Trail 2", 0x166da, 0x166fa, indexCPS2Sprites_Rogue, 0x0c },
};

const sGame_PaletteDataset XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x16efa, 0x16f1a, indexCPS2Sprites_Gambit },
    { L"Burning 2", 0x16f1a, 0x16f3a, indexCPS2Sprites_Gambit },
    { L"Shocked 1", 0x16f3a, 0x16f5a, indexCPS2Sprites_Gambit },
    { L"Shocked 2", 0x16f5a, 0x16f7a, indexCPS2Sprites_Gambit },
    { L"Dark Burning 1", 0x16f7a, 0x16f9a, indexCPS2Sprites_Gambit },
    { L"Dark Burning 2", 0x16f9a, 0x16fba, indexCPS2Sprites_Gambit },
    { L"Kinetic Charged 1", 0x16fba, 0x16fda, indexCPS2Sprites_Gambit },
    { L"Kinetic Charged 2", 0x16fda, 0x16ffa, indexCPS2Sprites_Gambit },
    { L"Kinetic Charged 3", 0x16ffa, 0x1701a, indexCPS2Sprites_Gambit },
    { L"Super Trail 1", 0x166fa, 0x1671a, indexCPS2Sprites_Gambit },
    { L"Super Trail 2", 0x1671a, 0x1673a, indexCPS2Sprites_Gambit },
};

const sGame_PaletteDataset XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1701a, 0x1703a, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Burning 2", 0x1703a, 0x1705a, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Shocked 1", 0x1705a, 0x1707a, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Shocked 2", 0x1707a, 0x1709a, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Dark Burning 1", 0x1709a, 0x170ba, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Dark Burning 2", 0x170ba, 0x170da, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Kinetic Charged 1", 0x170da, 0x170fa, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Kinetic Charged 2", 0x170fa, 0x1711a, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Kinetic Charged 3", 0x1711a, 0x1713a, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Super Trail 1", 0x1673a, 0x1675a, indexCPS2Sprites_Sabretooth, 0x80 },
    { L"Super Trail 2", 0x1675a, 0x1677a, indexCPS2Sprites_Sabretooth, 0x80 },
};

const sGame_PaletteDataset XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1713a, 0x1715a, indexCPS2Sprites_Juggy },
    { L"Burning 2", 0x1715a, 0x1717a, indexCPS2Sprites_Juggy },
    { L"Shocked 1", 0x1717a, 0x1719a, indexCPS2Sprites_Juggy },
    { L"Shocked 2", 0x1719a, 0x171ba, indexCPS2Sprites_Juggy },
    { L"Dark Burning 1", 0x171ba, 0x171da, indexCPS2Sprites_Juggy },
    { L"Dark Burning 2", 0x171da, 0x171fa, indexCPS2Sprites_Juggy },
    { L"Kinetic Charged 1", 0x171fa, 0x1721a, indexCPS2Sprites_Juggy },
    { L"Kinetic Charged 2", 0x1721a, 0x1723a, indexCPS2Sprites_Juggy },
    { L"Kinetic Charged 3", 0x1723a, 0x1725a, indexCPS2Sprites_Juggy },
    { L"Super Trail 1", 0x1677a, 0x1679a, indexCPS2Sprites_Juggy },
    { L"Super Trail 2", 0x1679a, 0x167ba, indexCPS2Sprites_Juggy },
};

const sGame_PaletteDataset XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1725a, 0x1727a, indexCPS2Sprites_Magneto },
    { L"Burning 2", 0x1727a, 0x1729a, indexCPS2Sprites_Magneto },
    { L"Shocked 1", 0x1729a, 0x172ba, indexCPS2Sprites_Magneto },
    { L"Shocked 2", 0x172ba, 0x172da, indexCPS2Sprites_Magneto },
    { L"Dark Burning 1", 0x172da, 0x172fa, indexCPS2Sprites_Magneto },
    { L"Dark Burning 2", 0x172fa, 0x1731a, indexCPS2Sprites_Magneto },
    { L"Kinetic Charged 1", 0x1731a, 0x1733a, indexCPS2Sprites_Magneto },
    { L"Kinetic Charged 2", 0x1733a, 0x1735a, indexCPS2Sprites_Magneto },
    { L"Kinetic Charged 3", 0x1735a, 0x1737a, indexCPS2Sprites_Magneto },
    { L"Super Trail 1", 0x167ba, 0x167da, indexCPS2Sprites_Magneto },
    { L"Super Trail 2", 0x167da, 0x167fa, indexCPS2Sprites_Magneto },
};

const sGame_PaletteDataset XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1737a, 0x1739a, indexCPS2Sprites_Apocalypse },
    { L"Burning 2", 0x1739a, 0x173ba, indexCPS2Sprites_Apocalypse },
    { L"Shocked 1", 0x173ba, 0x173da, indexCPS2Sprites_Apocalypse },
    { L"Shocked 2", 0x173da, 0x173fa, indexCPS2Sprites_Apocalypse },
    { L"Dark Burning 1", 0x173fa, 0x1741a, indexCPS2Sprites_Apocalypse },
    { L"Dark Burning 2", 0x1741a, 0x1743a, indexCPS2Sprites_Apocalypse },
    { L"Kinetic Charged 1", 0x1743a, 0x1745a, indexCPS2Sprites_Apocalypse },
    { L"Kinetic Charged 2", 0x1745a, 0x1747a, indexCPS2Sprites_Apocalypse },
    { L"Kinetic Charged 3", 0x1747a, 0x1749a, indexCPS2Sprites_Apocalypse },
};

const sGame_PaletteDataset XMVSF_A_RYU_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1749a, 0x174ba, indexCPS2Sprites_Ryu },
    { L"Burning 2", 0x174ba, 0x174da, indexCPS2Sprites_Ryu },
    { L"Shocked 1", 0x174da, 0x174fa, indexCPS2Sprites_Ryu },
    { L"Shocked 2", 0x174fa, 0x1751a, indexCPS2Sprites_Ryu },
    { L"Dark Burning 1", 0x1751a, 0x1753a, indexCPS2Sprites_Ryu },
    { L"Dark Burning 2", 0x1753a, 0x1755a, indexCPS2Sprites_Ryu },
    { L"Kinetic Charged 1", 0x1755a, 0x1757a, indexCPS2Sprites_Ryu },
    { L"Kinetic Charged 2", 0x1757a, 0x1759a, indexCPS2Sprites_Ryu },
    { L"Kinetic Charged 3", 0x1759a, 0x175ba, indexCPS2Sprites_Ryu },
    { L"Super Trail 1", 0x167fa, 0x1681a, indexCPS2Sprites_Ryu },
    { L"Super Trail 2", 0x1681a, 0x1683a, indexCPS2Sprites_Ryu },
};

const sGame_PaletteDataset XMVSF_A_KEN_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x175ba, 0x175da, indexCPS2Sprites_Ken },
    { L"Burning 2", 0x175da, 0x175fa, indexCPS2Sprites_Ken },
    { L"Shocked 1", 0x175fa, 0x1761a, indexCPS2Sprites_Ken },
    { L"Shocked 2", 0x1761a, 0x1763a, indexCPS2Sprites_Ken },
    { L"Dark Burning 1", 0x1763a, 0x1765a, indexCPS2Sprites_Ken },
    { L"Dark Burning 2", 0x1765a, 0x1767a, indexCPS2Sprites_Ken },
    { L"Kinetic Charged 1", 0x1767a, 0x1769a, indexCPS2Sprites_Ken },
    { L"Kinetic Charged 2", 0x1769a, 0x176ba, indexCPS2Sprites_Ken },
    { L"Kinetic Charged 3", 0x176ba, 0x176da, indexCPS2Sprites_Ken },
    { L"Super Trail 1", 0x1683a, 0x1685a, indexCPS2Sprites_Ken },
    { L"Super Trail 2", 0x1685a, 0x1687a, indexCPS2Sprites_Ken },
};

const sGame_PaletteDataset XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x176da, 0x176fa, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Burning 2", 0x176fa, 0x1771a, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Shocked 1", 0x1771a, 0x1773a, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Shocked 2", 0x1773a, 0x1775a, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Dark Burning 1", 0x1775a, 0x1777a, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Dark Burning 2", 0x1777a, 0x1779a, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Kinetic Charged 1", 0x1779a, 0x177ba, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Kinetic Charged 2", 0x177ba, 0x177da, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Kinetic Charged 3", 0x177da, 0x177fa, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Super Trail 1", 0x1687a, 0x1689a, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Super Trail 2", 0x1689a, 0x168ba, indexCPS2Sprites_ChunLi, 0x80 },
};

const sGame_PaletteDataset XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x177fa, 0x1781a, indexCPS2Sprites_Dhalsim },
    { L"Burning 2", 0x1781a, 0x1783a, indexCPS2Sprites_Dhalsim },
    { L"Shocked 1", 0x1783a, 0x1785a, indexCPS2Sprites_Dhalsim },
    { L"Shocked 2", 0x1785a, 0x1787a, indexCPS2Sprites_Dhalsim },
    { L"Dark Burning 1", 0x1787a, 0x1789a, indexCPS2Sprites_Dhalsim },
    { L"Dark Burning 2", 0x1789a, 0x178ba, indexCPS2Sprites_Dhalsim },
    { L"Kinetic Charged 1", 0x178ba, 0x178da, indexCPS2Sprites_Dhalsim },
    { L"Kinetic Charged 2", 0x178da, 0x178fa, indexCPS2Sprites_Dhalsim },
    { L"Kinetic Charged 3", 0x178fa, 0x1791a, indexCPS2Sprites_Dhalsim },
    { L"Super Trail 1", 0x168ba, 0x168da, indexCPS2Sprites_Dhalsim },
    { L"Super Trail 2", 0x168da, 0x168fa, indexCPS2Sprites_Dhalsim },
};

const sGame_PaletteDataset XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x1791a, 0x1793a, indexCPS2Sprites_Zangief },
    { L"Burning 2", 0x1793a, 0x1795a, indexCPS2Sprites_Zangief },
    { L"Shocked 1", 0x1795a, 0x1797a, indexCPS2Sprites_Zangief },
    { L"Shocked 2", 0x1797a, 0x1799a, indexCPS2Sprites_Zangief },
    { L"Dark Burning 1", 0x1799a, 0x179ba, indexCPS2Sprites_Zangief },
    { L"Dark Burning 2", 0x179ba, 0x179da, indexCPS2Sprites_Zangief },
    { L"Kinetic Charged 1", 0x179da, 0x179fa, indexCPS2Sprites_Zangief },
    { L"Kinetic Charged 2", 0x179fa, 0x17a1a, indexCPS2Sprites_Zangief },
    { L"Kinetic Charged 3", 0x17a1a, 0x17a3a, indexCPS2Sprites_Zangief },
    { L"Super Trail 1", 0x168fa, 0x1691a, indexCPS2Sprites_Zangief },
    { L"Super Trail 2", 0x1691a, 0x1693a, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset XMVSF_A_MBISON_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17a3a, 0x17a5a, indexCPS2Sprites_Bison },
    { L"Burning 2", 0x17a5a, 0x17a7a, indexCPS2Sprites_Bison },
    { L"Shocked 1", 0x17a7a, 0x17a9a, indexCPS2Sprites_Bison },
    { L"Shocked 2", 0x17a9a, 0x17aba, indexCPS2Sprites_Bison },
    { L"Dark Burning 1", 0x17aba, 0x17ada, indexCPS2Sprites_Bison },
    { L"Dark Burning 2", 0x17ada, 0x17afa, indexCPS2Sprites_Bison },
    { L"Kinetic Charged 1", 0x17afa, 0x17b1a, indexCPS2Sprites_Bison },
    { L"Kinetic Charged 2", 0x17b1a, 0x17b3a, indexCPS2Sprites_Bison },
    { L"Kinetic Charged 3", 0x17b3a, 0x17b5a, indexCPS2Sprites_Bison },
    { L"Super Trail 1", 0x1693a, 0x1695a, indexCPS2Sprites_Bison },
    { L"Super Trail 2", 0x1695a, 0x1697a, indexCPS2Sprites_Bison },
};

const sGame_PaletteDataset XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17b5a, 0x17b7a, indexCPS2Sprites_Akuma },
    { L"Burning 2", 0x17b7a, 0x17b9a, indexCPS2Sprites_Akuma },
    { L"Shocked 1", 0x17b9a, 0x17bba, indexCPS2Sprites_Akuma },
    { L"Shocked 2", 0x17bba, 0x17bda, indexCPS2Sprites_Akuma },
    { L"Dark Burning 1", 0x17bda, 0x17bfa, indexCPS2Sprites_Akuma },
    { L"Dark Burning 2", 0x17bfa, 0x17c1a, indexCPS2Sprites_Akuma },
    { L"Kinetic Charged 1", 0x17c1a, 0x17c3a, indexCPS2Sprites_Akuma },
    { L"Kinetic Charged 2", 0x17c3a, 0x17c5a, indexCPS2Sprites_Akuma },
    { L"Kinetic Charged 3", 0x17c5a, 0x17c7a, indexCPS2Sprites_Akuma },
    { L"Super Trail 1", 0x1697a, 0x1699a, indexCPS2Sprites_Akuma },
    { L"Super Trail 2", 0x1699a, 0x169ba, indexCPS2Sprites_Akuma },
};

const sGame_PaletteDataset XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17c7a, 0x17c9a, indexCPS2Sprites_Charlie },
    { L"Burning 2", 0x17c9a, 0x17cba, indexCPS2Sprites_Charlie },
    { L"Shocked 1", 0x17cba, 0x17cda, indexCPS2Sprites_Charlie },
    { L"Shocked 2", 0x17cda, 0x17cfa, indexCPS2Sprites_Charlie },
    { L"Dark Burning 1", 0x17cfa, 0x17d1a, indexCPS2Sprites_Charlie },
    { L"Dark Burning 2", 0x17d1a, 0x17d3a, indexCPS2Sprites_Charlie },
    { L"Kinetic Charged 1", 0x17d3a, 0x17d5a, indexCPS2Sprites_Charlie },
    { L"Kinetic Charged 2", 0x17d5a, 0x17d7a, indexCPS2Sprites_Charlie },
    { L"Kinetic Charged 3", 0x17d7a, 0x17d9a, indexCPS2Sprites_Charlie },
    { L"Super Trail 1", 0x169ba, 0x169da, indexCPS2Sprites_Charlie },
    { L"Super Trail 2", 0x169da, 0x169fa, indexCPS2Sprites_Charlie },
};

const sGame_PaletteDataset XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17d9a, 0x17dba, indexCPS2Sprites_Cammy },
    { L"Burning 2", 0x17dba, 0x17dda, indexCPS2Sprites_Cammy },
    { L"Shocked 1", 0x17dda, 0x17dfa, indexCPS2Sprites_Cammy },
    { L"Shocked 2", 0x17dfa, 0x17e1a, indexCPS2Sprites_Cammy },
    { L"Dark Burning 1", 0x17e1a, 0x17e3a, indexCPS2Sprites_Cammy },
    { L"Dark Burning 2", 0x17e3a, 0x17e5a, indexCPS2Sprites_Cammy },
    { L"Kinetic Charged 1", 0x17e5a, 0x17e7a, indexCPS2Sprites_Cammy },
    { L"Kinetic Charged 2", 0x17e7a, 0x17e9a, indexCPS2Sprites_Cammy },
    { L"Kinetic Charged 3", 0x17e9a, 0x17eba, indexCPS2Sprites_Cammy },
    { L"Super Trail 1", 0x169fa, 0x16a1a, indexCPS2Sprites_Cammy },
    { L"Super Trail 2", 0x16a1a, 0x16a3a, indexCPS2Sprites_Cammy },
};

const sGame_PaletteDataset XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x17eba, 0x17eda, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Burning 2", 0x17eda, 0x17efa, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Shocked 1", 0x17efa, 0x17f1a, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Shocked 2", 0x17f1a, 0x17f3a, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Dark Burning 1", 0x17f3a, 0x17f5a, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Dark Burning 2", 0x17f5a, 0x17f7a, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Kinetic Charged 1", 0x17f7a, 0x17f9a, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Kinetic Charged 2", 0x17f9a, 0x17fba, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Kinetic Charged 3", 0x17fba, 0x17fda, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Super Trail 1", 0x16a3a, 0x16a5a, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Super Trail 2", 0x16a5a, 0x16a7a, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset XMVSF_A_BONUS_CSI_PALETTES[] =
{
    { L"Cammy",     0x19C9a, 0x19CBa, indexCPS2Sprites_Cammy, 0x3a },
    { L"Charlie",   0x19CBa, 0x19CDa, indexCPS2Sprites_Charlie, 0x3a },
    { L"Chun-Li",   0x19DDa, 0x19DFa, indexCPS2Sprites_ChunLi, 0x3a },
    { L"Cyclops",   0x19BFa, 0x19C1a, indexCPS2Sprites_Cyclops, 0x3a },
    { L"Dhalsim",   0x19E5a, 0x19E7a, indexCPS2Sprites_Dhalsim, 0x3a },
    { L"Gambit",    0x19C5a, 0x19C7a, indexCPS2Sprites_Gambit, 0x3a },
    { L"Gouki",     0x19E9a, 0x19EBa, indexCPS2Sprites_Akuma, 0x3a },
    { L"Juggernaut", 0x19E3a, 0x19E5a, indexCPS2Sprites_Juggy, 0x3a },
    { L"Ken",       0x19C3a, 0x19C5a, indexCPS2Sprites_Ken, 0x3a },
    { L"M.Bison",   0x19E7a, 0x19E9a, indexCPS2Sprites_Bison, 0x3a },
    { L"Magneto",   0x19E1a, 0x19E3a, indexCPS2Sprites_Magneto, 0x3a },
    { L"Rogue",     0x19C7a, 0x19C9a, indexCPS2Sprites_Rogue, 0x3a },
    { L"Ryu",       0x19C1a, 0x19C3a, indexCPS2Sprites_Ryu, 0x3a },
    { L"Sabretooth", 0x19D9a, 0x19DBa, indexCPS2Sprites_Sabretooth, 0x3a },
    { L"Storm",     0x19DBa, 0x19DDa, indexCPS2Sprites_Storm, 0x3a },
    { L"Wolverine", 0x19BDa, 0x19BFa, indexCPS2Sprites_Wolverine, 0x3a },
    { L"Zangief",   0x19DFa, 0x19E1a, indexCPS2Sprites_Zangief, 0x3a },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_VSP[] =
{
    { L"Cammy (Punch)",          0x1ad1a, 0x1adba, indexCPS2Sprites_Cammy, 0x3b },
    { L"Charlie (Punch)",        0x1ac7a, 0x1ad1a, indexCPS2Sprites_Charlie, 0x3b },
    { L"Chun-Li (Punch)",        0x1a95a, 0x1a9fa, indexCPS2Sprites_ChunLi, 0x3b },
    { L"Chun-Li (SFA) (Punch)",  0x1adba, 0x1ae5a, indexCPS2Sprites_ChunLi, 0x3c },
    { L"Cyclops (Punch)",        0x1a31a, 0x1a3ba, indexCPS2Sprites_Cyclops, 0x3b },
    { L"Dhalsim (Punch)",        0x1a9fa, 0x1aa9a, indexCPS2Sprites_Dhalsim, 0x3b },
    { L"Gambit (Punch)",         0x1a4fa, 0x1a59a, indexCPS2Sprites_Gambit, 0x3b },
    { L"Gouki (Punch)",          0x1abda, 0x1ac7a, indexCPS2Sprites_Akuma, 0x3b },
    { L"Juggernaut (Punch)",     0x1a63a, 0x1a6da, indexCPS2Sprites_Juggy, 0x3b },
    { L"Ken (Punch)",            0x1a8ba, 0x1a95a, indexCPS2Sprites_Ken, 0x3b },
    { L"M. Bison (Punch)",       0x1ab3a, 0x1abda, indexCPS2Sprites_Bison, 0x3b },
    { L"Magneto (Punch)",        0x1a6da, 0x1a77a, indexCPS2Sprites_Magneto, 0x3b },
    { L"Rogue (Punch)",          0x1a45a, 0x1a4fa, indexCPS2Sprites_Rogue, 0x3b },
    { L"Ryu (Punch)",            0x1a81a, 0x1a8ba, indexCPS2Sprites_Ryu, 0x3b },
    { L"Sabretooth (Punch)",     0x1a59a, 0x1a63a, indexCPS2Sprites_Sabretooth, 0x3b },
    { L"Storm (Punch)",          0x1a3ba, 0x1a45a, indexCPS2Sprites_Storm, 0x3b },
    { L"Wolverine (Punch)",      0x1a27a, 0x1a31a, indexCPS2Sprites_Wolverine, 0x3b },
    { L"Zangief (Punch)",        0x1aa9a, 0x1ab3a, indexCPS2Sprites_Zangief, 0x3b },
    { L"Apocalypse (Punch)",     0x1a77a, 0x1a81a, indexCPS2Sprites_Apocalypse, 0x3b },

    // 0x1ae9a: Kick set 
    { L"Cammy (Kick)",          0x1ad1a + 0xc20, 0x1adba + 0xc20, indexCPS2Sprites_Cammy, 0x3b },
    { L"Charlie (Kick)",        0x1ac7a + 0xc20, 0x1ad1a + 0xc20, indexCPS2Sprites_Charlie, 0x3b },
    { L"Chun-Li (Kick)",        0x1a95a + 0xc20, 0x1a9fa + 0xc20, indexCPS2Sprites_ChunLi, 0x3b },
    { L"Chun-Li (SFA) (Kick)",  0x1adba + 0xc20, 0x1ae5a + 0xc20, indexCPS2Sprites_ChunLi, 0x3c },
    { L"Cyclops (Kick)",        0x1a31a + 0xc20, 0x1a3ba + 0xc20, indexCPS2Sprites_Cyclops, 0x3b },
    { L"Dhalsim (Kick)",        0x1a9fa + 0xc20, 0x1aa9a + 0xc20, indexCPS2Sprites_Dhalsim, 0x3b },
    { L"Gambit (Kick)",         0x1a4fa + 0xc20, 0x1a59a + 0xc20, indexCPS2Sprites_Gambit, 0x3b },
    { L"Gouki (Kick)",          0x1abda + 0xc20, 0x1ac7a + 0xc20, indexCPS2Sprites_Akuma, 0x3b },
    { L"Juggernaut (Kick)",     0x1a63a + 0xc20, 0x1a6da + 0xc20, indexCPS2Sprites_Juggy, 0x3b },
    { L"Ken (Kick)",            0x1a8ba + 0xc20, 0x1a95a + 0xc20, indexCPS2Sprites_Ken, 0x3b },
    { L"M. Bison (Kick)",       0x1ab3a + 0xc20, 0x1abda + 0xc20, indexCPS2Sprites_Bison, 0x3b },
    { L"Magneto (Kick)",        0x1a6da + 0xc20, 0x1a77a + 0xc20, indexCPS2Sprites_Magneto, 0x3b },
    { L"Rogue (Kick)",          0x1a45a + 0xc20, 0x1a4fa + 0xc20, indexCPS2Sprites_Rogue, 0x3b },
    { L"Ryu (Kick)",            0x1a81a + 0xc20, 0x1a8ba + 0xc20, indexCPS2Sprites_Ryu, 0x3b },
    { L"Sabretooth (Kick)",     0x1a59a + 0xc20, 0x1a63a + 0xc20, indexCPS2Sprites_Sabretooth, 0x3b },
    { L"Storm (Kick)",          0x1a3ba + 0xc20, 0x1a45a + 0xc20, indexCPS2Sprites_Storm, 0x3b },
    { L"Wolverine (Kick)",      0x1ae9a, 0x1a31a + 0xc20, indexCPS2Sprites_Wolverine, 0x3b },
    { L"Zangief (Kick)",        0x1aa9a + 0xc20, 0x1ab3a + 0xc20, indexCPS2Sprites_Zangief, 0x3b },
    { L"Apocalypse (Kick)",     0x1a77a + 0xc20, 0x1a81a + 0xc20, indexCPS2Sprites_Apocalypse, 0x3b },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES[] =
{
    // 0x1bf3a wolvie to 0x1c9da chun sfa
    { L"Cammy (Punch)",         0x1c89a, 0x1c93a, indexCPS2Sprites_Cammy, 0x38 },
    { L"Charlie (Punch)",       0x1c7fa, 0x1c89a, indexCPS2Sprites_Charlie, 0x38 },
    { L"Chun-Li (Punch)",       0x1c4da, 0x1c57a, indexCPS2Sprites_ChunLi, 0x38 },
    { L"Chun-Li (SFA) (Punch)", 0x1c93a, 0x1c9da, indexCPS2Sprites_ChunLi, 0x39 },
    { L"Cyclops (Punch)",       0x1be9a, 0x1bf3a, indexCPS2Sprites_Cyclops, 0x38 },
    { L"Dhalsim (Punch)",       0x1c57a, 0x1c61a, indexCPS2Sprites_Dhalsim, 0x38 },
    { L"Gambit (Punch)",        0x1c07a, 0x1c11a, indexCPS2Sprites_Gambit, 0x38 },
    { L"Gouki (Punch)",         0x1c75a, 0x1c7fa, indexCPS2Sprites_Akuma, 0x38 },
    { L"Juggernaut (Punch)",    0x1c1ba, 0x1c25a, indexCPS2Sprites_Juggy, 0x38 },
    { L"Ken (Punch)",           0x1c43a, 0x1c4da, indexCPS2Sprites_Ken, 0x38 },
    { L"M.Bison (Punch)",       0x1c6ba, 0x1c75a, indexCPS2Sprites_Bison, 0x38 },
    { L"Magneto (Punch)",       0x1c25a, 0x1c2fa, indexCPS2Sprites_Magneto, 0x38 },
    { L"Rogue (Punch)",         0x1bfda, 0x1c07a, indexCPS2Sprites_Rogue, 0x38 },
    { L"Ryu (Punch)",           0x1c39a, 0x1c43a, indexCPS2Sprites_Ryu, 0x38 },
    { L"Sabretooth (Punch)",    0x1c11a, 0x1c1ba, indexCPS2Sprites_Sabretooth, 0x38 },
    { L"Storm (Punch)",         0x1bf3a, 0x1bfda, indexCPS2Sprites_Storm, 0x38 },
    { L"Wolverine (Punch)",     0x1bdfa, 0x1be9a, indexCPS2Sprites_Wolverine, 0x38 },
    { L"Zangief (Punch)",       0x1c61a, 0x1c6ba, indexCPS2Sprites_Zangief, 0x38 },
    { L"Apocalypse (Punch)",    0x1c2fa, 0x1c39a, indexCPS2Sprites_Apocalypse, 0x38 },

    { L"Cammy (Kick)",         0x1c89a + 0xBE0, 0x1c93a + 0xBE0, indexCPS2Sprites_Cammy, 0x38 },
    { L"Charlie (Kick)",       0x1c7fa + 0xBE0, 0x1c89a + 0xBE0, indexCPS2Sprites_Charlie, 0x38 },
    { L"Chun-Li (Kick)",       0x1c4da + 0xBE0, 0x1c57a + 0xBE0, indexCPS2Sprites_ChunLi, 0x38 },
    { L"Chun-Li (SFA) (Kick)", 0x1c93a + 0xBE0, 0x1c9da + 0xBE0, indexCPS2Sprites_ChunLi, 0x39 },
    { L"Cyclops (Kick)",       0x1be9a + 0xBE0, 0x1bf3a + 0xBE0, indexCPS2Sprites_Cyclops, 0x38 },
    { L"Dhalsim (Kick)",       0x1c57a + 0xBE0, 0x1c61a + 0xBE0, indexCPS2Sprites_Dhalsim, 0x38 },
    { L"Gambit (Kick)",        0x1c07a + 0xBE0, 0x1c11a + 0xBE0, indexCPS2Sprites_Gambit, 0x38 },
    { L"Gouki (Kick)",         0x1c75a + 0xBE0, 0x1c7fa + 0xBE0, indexCPS2Sprites_Akuma, 0x38 },
    { L"Juggernaut (Kick)",    0x1c1ba + 0xBE0, 0x1c25a + 0xBE0, indexCPS2Sprites_Juggy, 0x38 },
    { L"Ken (Kick)",           0x1c43a + 0xBE0, 0x1c4da + 0xBE0, indexCPS2Sprites_Ken, 0x38 },
    { L"M.Bison (Kick)",       0x1c6ba + 0xBE0, 0x1c75a + 0xBE0, indexCPS2Sprites_Bison, 0x38 },
    { L"Magneto (Kick)",       0x1c25a + 0xBE0, 0x1c2fa + 0xBE0, indexCPS2Sprites_Magneto, 0x38 },
    { L"Rogue (Kick)",         0x1bfda + 0xBE0, 0x1c07a + 0xBE0, indexCPS2Sprites_Rogue, 0x38 },
    { L"Ryu (Kick)",           0x1c39a + 0xBE0, 0x1c43a + 0xBE0, indexCPS2Sprites_Ryu, 0x38 },
    { L"Sabretooth (Kick)",    0x1c11a + 0xBE0, 0x1c1ba + 0xBE0, indexCPS2Sprites_Sabretooth, 0x38 },
    { L"Storm (Kick)",         0x1bf3a + 0xBE0, 0x1bfda + 0xBE0, indexCPS2Sprites_Storm, 0x38 },
    { L"Wolverine (Kick)",     0x1bdfa + 0xBE0, 0x1be9a + 0xBE0, indexCPS2Sprites_Wolverine, 0x38 },
    { L"Zangief (Kick)",       0x1c61a + 0xBE0, 0x1c6ba + 0xBE0, indexCPS2Sprites_Zangief, 0x38 },
    { L"Apocalypse (Kick)",    0x1c2fa + 0xBE0, 0x1c39a + 0xBE0, indexCPS2Sprites_Apocalypse, 0x38 },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_CONTINUE[] =
{
    { L"Wolverine", 0x1d5ba, 0x1d65a, indexCPS2Sprites_Wolverine, 0x38 },
    { L"Cyclops", 0x1d65a, 0x1d6fa, indexCPS2Sprites_Cyclops, 0x38 },
    { L"Storm", 0x1d6fa, 0x1d79a, indexCPS2Sprites_Storm, 0x38 },
    { L"Rogue", 0x1d79a, 0x1d83a, indexCPS2Sprites_Rogue, 0x38 },
    { L"Gambit", 0x1d83a, 0x1d8da, indexCPS2Sprites_Gambit, 0x38 },
    { L"Sabretooth", 0x1d8da, 0x1d97a, indexCPS2Sprites_Sabretooth, 0x38 },
    { L"Juggernaut", 0x1d97a, 0x1da1a, indexCPS2Sprites_Juggy, 0x38 },
    { L"Magneto", 0x1da1a, 0x1daba, indexCPS2Sprites_Magneto, 0x38 },
    { L"Apocalypse", 0x1daba, 0x1db5a, indexCPS2Sprites_Apocalypse, 0x38 },
    { L"Ryu", 0x1db5a, 0x1dbfa, indexCPS2Sprites_Ryu, 0x38 },
    { L"Ken", 0x1dbfa, 0x1dc9a, indexCPS2Sprites_Ken, 0x38 },
    { L"Chun-Li", 0x1dc9a, 0x1dd3a, indexCPS2Sprites_ChunLi, 0x38 },
    { L"Dhalsim", 0x1dd3a, 0x1ddda, indexCPS2Sprites_Dhalsim, 0x38 },
    { L"Zangief", 0x1ddda, 0x1de7a, indexCPS2Sprites_Zangief, 0x38 },
    { L"M.Bison", 0x1de7a, 0x1df1a, indexCPS2Sprites_Bison, 0x38 },
    { L"Gouki", 0x1df1a, 0x1dfba, indexCPS2Sprites_Akuma, 0x38 },
    { L"Charlie", 0x1dfba, 0x1e05a, indexCPS2Sprites_Charlie, 0x38 },
    { L"Cammy", 0x1e05a, 0x1e0fa, indexCPS2Sprites_Cammy, 0x38 },
    { L"Chun-Li (SFA)", 0x1e0fa, 0x1e19a, indexCPS2Sprites_ChunLi, 0x39 },
};

const sGame_PaletteDataset XMVSF_A_BONUS_INTRO_PALETTES[] =
{
    { L"Q Sound Logo", 0x133a4, 0x13404, indexCPS2Sprites_XMVSFAssets, 0x0f },
    { L"Q Sound Text", 0x13424, 0x13444, indexCPS2Sprites_XMVSFAssets, 0x10 },
    { L"Intro Capcom Logo", 0x13484, 0x134a4, indexCPS2Sprites_XMVSFAssets, 0x0d },
    { L"Intro Ryu Logo", 0x13404, 0x13424, indexCPS2Sprites_XMVSFAssets, 0x12 },
    { L"Intro Ryu/Capcom BG", 0x139a4, 0x139e4, indexCPS2Sprites_XMVSFAssets, 0x11 },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_INTRO[] =
{
    { L"Ken (Intro)", 0x20426, 0x20506, indexCPS2Sprites_XMVSFAssets, 0x03 },
    { L"Gambit (Intro)", 0x20506, 0x205C6, indexCPS2Sprites_XMVSFAssets, 0x02 },
    { L"Cammy (Intro)", 0x20746, 0x207C6, indexCPS2Sprites_XMVSFAssets, 0x00 },
    { L"Rogue (Intro)", 0x207C6, 0x20866, indexCPS2Sprites_XMVSFAssets, 0x04 },
    { L"Ryu & Cyclops (Intro)", 0x20946, 0x20AE6, indexCPS2Sprites_XMVSFAssets, 0x01 },

    { L"Ken & Gambit BG Sprites", 0x205c6, 0x205e6, indexCPS2Sprites_XMVSFAssets, 0x06 },
    { L"Cammy & Rogue BG Sprites", 0x20866, 0x208a6, indexCPS2Sprites_XMVSFAssets, 0x08 },

    { L"Ken & Gambit BG 1", 0x13d24, 0x13d44, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 2", 0x13d44, 0x13d64, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 3", 0x13d64, 0x13d84, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 4", 0x13d84, 0x13da4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 5", 0x13da4, 0x13dc4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 6", 0x13dc4, 0x13de4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 7", 0x13de4, 0x13e04, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 8", 0x13e04, 0x13e24, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 9", 0x13e24, 0x13e44, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 10", 0x13e44, 0x13e64, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 11", 0x13e64, 0x13e84, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 12", 0x13e84, 0x13ea4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 13", 0x13ea4, 0x13ec4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 14", 0x13ec4, 0x13ee4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 15", 0x13ee4, 0x13f04, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 16", 0x13f04, 0x13f24, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 17", 0x13f24, 0x13f44, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 18", 0x13f44, 0x13f64, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 19", 0x13f64, 0x13f84, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 20", 0x13f84, 0x13fa4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 21", 0x13fa4, 0x13fc4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 22", 0x13fc4, 0x13fe4, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 23", 0x13fe4, 0x14004, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 24", 0x14004, 0x14024, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 25", 0x14024, 0x14044, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Ken & Gambit BG 26", 0x14044, 0x14064, indexCPS2Sprites_XMVSFAssets, 0x05 },
    { L"Rogue & Cammy BG 1", 0x13964, 0x13984, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 2", 0x14244, 0x14264, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 3", 0x14264, 0x14284, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 4", 0x14284, 0x142a4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 5", 0x142a4, 0x142c4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 6", 0x142c4, 0x142e4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 7", 0x142e4, 0x14304, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 8", 0x14304, 0x14324, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 9", 0x14324, 0x14344, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 10", 0x14344, 0x14364, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 11", 0x14364, 0x14384, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 12", 0x14384, 0x143a4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 13", 0x143a4, 0x143c4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 14", 0x143c4, 0x143e4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 15", 0x143e4, 0x14404, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 16", 0x14404, 0x14424, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 17", 0x14424, 0x14444, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 18", 0x14444, 0x14464, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 19", 0x14464, 0x14484, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 20", 0x14484, 0x144a4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 21", 0x144a4, 0x144c4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 22", 0x144c4, 0x144e4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 23", 0x144e4, 0x14504, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 24", 0x14504, 0x14524, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 25", 0x14524, 0x14544, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 26", 0x14544, 0x14564, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 27", 0x14564, 0x14584, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Rogue & Cammy BG 28", 0x14584, 0x145a4, indexCPS2Sprites_XMVSFAssets, 0x07 },
    { L"Ryu & Cyclops First BG", 0x13984, 0x139a4, indexCPS2Sprites_XMVSFAssets, 0x09 },
    { L"Ryu & Cyclops BG 16x16 1", 0x13464, 0x13484, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 16x16 2", 0x13844, 0x13864, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 16x16 3", 0x13864, 0x13884, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 16x16 4", 0x13884, 0x138a4, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 16x16 5", 0x138a4, 0x138c4, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 16x16 6", 0x138c4, 0x138e4, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 16x16 7", 0x138e4, 0x13904, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 16x16 8", 0x13904, 0x13924, indexCPS2Sprites_XMVSFAssets, 0x0a },
    { L"Ryu & Cyclops BG 32x32 1", 0x13944, 0x13964, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 2", 0x14064, 0x14084, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 3", 0x14084, 0x140a4, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 4", 0x140a4, 0x140c4, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 5", 0x140c4, 0x140e4, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 6", 0x140e4, 0x14104, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 7", 0x14104, 0x14124, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 8", 0x14124, 0x14144, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 9", 0x14144, 0x14164, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 10", 0x14164, 0x14184, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 11", 0x14184, 0x141a4, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 12", 0x141a4, 0x141c4, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 13", 0x141c4, 0x141e4, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 14", 0x141e4, 0x14204, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 15", 0x14204, 0x14224, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Ryu & Cyclops BG 32x32 16", 0x14224, 0x14244, indexCPS2Sprites_XMVSFAssets, 0x0b },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_HUD[] =
{
    { L"Timer Super Bar BG 1", 0x1473a, 0x1475a, indexCPS2Sprites_XMVSFAssets, 0x2a },
    { L"Timer Super Bar BG 2", 0x14b1a, 0x14b3a, indexCPS2Sprites_XMVSFAssets, 0x2a },
    { L"Timer Super Bar BG 3", 0x14b3a, 0x14b5a, indexCPS2Sprites_XMVSFAssets, 0x2a },
    { L"Timer Super Bar BG 4", 0x14b5a, 0x14b7a, indexCPS2Sprites_XMVSFAssets, 0x2a },
    { L"Names & 2nd Character Health 1", 0x1475a, 0x1477a, indexCPS2Sprites_XMVSFAssets, 0x28 },
    { L"Names & 2nd Character Health 2", 0x14a7a, 0x14a9a, indexCPS2Sprites_XMVSFAssets, 0x28 },
    { L"Names & 2nd Character Health 3", 0x14a9a, 0x14aba, indexCPS2Sprites_XMVSFAssets, 0x28 },
    { L"Names & 2nd Character Health 4", 0x14aba, 0x14ada, indexCPS2Sprites_XMVSFAssets, 0x28 },
    { L"Names & 2nd Character Health 5", 0x14ada, 0x14afa, indexCPS2Sprites_XMVSFAssets, 0x28 },
    { L"Health & Super Bar 1", 0x1471a, 0x1473a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 2", 0x1477a, 0x1479a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 3", 0x1479a, 0x147ba, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 4", 0x147ba, 0x147da, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 5", 0x147da, 0x147fa, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 6", 0x147fa, 0x1481a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 7", 0x1481a, 0x1483a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 8", 0x1483a, 0x1485a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 9", 0x1485a, 0x1487a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 10", 0x1487a, 0x1489a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 11", 0x1489a, 0x148ba, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 12", 0x148ba, 0x148da, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 13", 0x148da, 0x148fa, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 14", 0x148fa, 0x1491a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 15", 0x1491a, 0x1493a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 16", 0x1493a, 0x1495a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 17", 0x1495a, 0x1497a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 18", 0x1497a, 0x1499a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 19", 0x1499a, 0x149ba, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 20", 0x149ba, 0x149da, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 21", 0x149da, 0x149fa, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 22", 0x149fa, 0x14a1a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 23", 0x14a1a, 0x14a3a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 24", 0x14a3a, 0x14a5a, indexCPS2Sprites_XMVSFAssets, 0x27 },
    { L"Health & Super Bar 25", 0x14a5a, 0x14a7a, indexCPS2Sprites_XMVSFAssets, 0x27 },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_MTEXT[] =
{
    { L"WIN", 0x211e6, 0x21206, indexCPS2Sprites_XMVSFAssets, 0x1b },
    { L"KO", 0x21206, 0x21226, indexCPS2Sprites_XMVSFAssets, 0x18 },
    { L"PERFECT 1", 0x21226, 0x21246, indexCPS2Sprites_XMVSFAssets, 0x19 },
    { L"PERFECT 2", 0x212c6, 0x212e6, indexCPS2Sprites_XMVSFAssets, 0x19 },
    { L"PERFECT 3", 0x212e6, 0x21306, indexCPS2Sprites_XMVSFAssets, 0x19 },
    { L"PERFECT 4", 0x21306, 0x21326, indexCPS2Sprites_XMVSFAssets, 0x19 },
    { L"PERFECT 5", 0x21326, 0x21346, indexCPS2Sprites_XMVSFAssets, 0x19 },
    { L"TIME OVER", 0x21286, 0x212a6, indexCPS2Sprites_XMVSFAssets, 0x1a },
    { L"DRAW GAME", 0x212a6, 0x212c6, indexCPS2Sprites_XMVSFAssets, 0x17 },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_TEXT[] =
{
    { L"Intro Text", 0x14afa, 0x14b1a, indexCPS2Sprites_XMVSFAssets, 0x2b },
    { L"Various Text", 0x146da, 0x146fa, indexCPS2Sprites_XMVSFAssets, 0x2f },
    { L"Character Select, Screen Wipe, Fight", 0x19b5a, 0x19b7a, indexCPS2Sprites_XMVSFAssets, 0x24 },
    { L"Character Select & VS Screen Names", 0x19b7a, 0x19b9a, indexCPS2Sprites_XMVSFAssets, 0x25 },
    { L"HUD Text", 0x146fa, 0x1471a, indexCPS2Sprites_XMVSFAssets, 0x29 },
    { L"Round Finish Score", 0x1e2fa, 0x1e31a, indexCPS2Sprites_XMVSFAssets, 0x2d },
    // Uses 'CPS2 Test Menu Text' Preview
        { L"Test Menu Text 1", 0xfccc, 0xfcec, indexCPS2Sprites_Bonus, 0x00 },
    // Uses 'CPS2 Test Menu Text' Preview
        { L"Test Menu Text 2", 0xfcec, 0xfd0c, indexCPS2Sprites_Bonus, 0x00 },
    { L"Credit Roll Titles", 0x14d3a, 0x14d5a, indexCPS2Sprites_XMVSFAssets, 0x26 },
    // Uses 'CPS2 Test Menu Text' Preview
        { L"Credit Roll Thank You For Playing", 0xfd2c, 0xfd4c, indexCPS2Sprites_Bonus, 0x00 },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_TITLE[] =
{
    { L"X-Men Logo", 0x1e77a, 0x1e79a, indexCPS2Sprites_XMVSFAssets, 0x16, &pairNext },
    { L"Street Fighter Logo", 0x1e7ba, 0x1e7da, indexCPS2Sprites_XMVSFAssets, 0x13, &pairPrevious },
    { L"Shadow", 0x1e79a, 0x1e7ba, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 1", 0x20fe6, 0x21006, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 2", 0x21006, 0x21026, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 3", 0x21026, 0x21046, indexCPS2Sprites_XMVSFAssets, 0x14},
    { L"Shadow Fades 4", 0x21046, 0x21066, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 5", 0x21066, 0x21086, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 6", 0x21086, 0x210a6, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 7", 0x210a6, 0x210c6, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 8", 0x210c6, 0x210e6, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 9", 0x210e6, 0x21106, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 10", 0x21106, 0x21126, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 11", 0x21126, 0x21146, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 12", 0x21146, 0x21166, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 13", 0x21166, 0x21186, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"Shadow Fades 14", 0x21186, 0x211a6, indexCPS2Sprites_XMVSFAssets, 0x14 },
    { L"VS 1", 0x1e7fa, 0x1e81a, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS 2", 0x211a6, 0x211c6, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 1", 0x20d06, 0x20d26, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 2", 0x20d26, 0x20d46, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 3", 0x20d46, 0x20d66, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 4", 0x20d66, 0x20d86, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 5", 0x20d86, 0x20da6, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 6", 0x20da6, 0x20dc6, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 7", 0x20dc6, 0x20de6, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 8", 0x20de6, 0x20e06, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Fades 9", 0x20e06, 0x20e26, indexCPS2Sprites_XMVSFAssets, 0x15 },
    { L"VS Design 1", 0x1e81a, 0x1e83a, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design 2", 0x211c6, 0x211e6, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 1", 0x20e26, 0x20e46, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 2", 0x20e46, 0x20e66, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 3", 0x20e66, 0x20e86, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 4", 0x20e86, 0x20ea6, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 5", 0x20ea6, 0x20ec6, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 6", 0x20ec6, 0x20ee6, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 7", 0x20ee6, 0x20f06, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 8", 0x20f06, 0x20f26, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 9", 0x20f26, 0x20f46, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 10", 0x20f46, 0x20f66, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 11", 0x20f66, 0x20f86, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 12", 0x20f86, 0x20fa6, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 13", 0x20fa6, 0x20fc6, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"VS Design Fades 14", 0x20fc6, 0x20fe6, indexCPS2Sprites_XMVSFAssets, 0x0e },
    { L"Logo BG", 0x1e7da, 0x1e7fa, indexCPS2Sprites_XMVSFAssets, 0x0c },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_CHARSELECT[] =
{
    { L"Character Select Main BG", 0x10fac, 0x10fcc, indexCPS2Sprites_XMVSFAssets, 0x1e },
    { L"Character Select Frame", 0x1088c, 0x1090c, indexCPS2Sprites_XMVSFAssets, 0x1f },
    { L"Character Select Ring 1", 0x19eba, 0x19eda, indexCPS2Sprites_XMVSFAssets, 0x23 },
    { L"Character Select Ring 2", 0x1a0da, 0x1a0fa, indexCPS2Sprites_XMVSFAssets, 0x23 },
    { L"Character Select Ring Selected Flash", 0x19eda, 0x19efa, indexCPS2Sprites_XMVSFAssets, 0x23 },
    { L"Character Select Icon BG", 0x10c8c, 0x10CAC, indexCPS2Sprites_XMVSFAssets, 0x21 },
    { L"Character Select Icon BG Flash", 0x10CAC, 0x10CCC, indexCPS2Sprites_XMVSFAssets, 0x21 },
    { L"Character Select Icon BG Selected", 0x10CCC, 0x10cec, indexCPS2Sprites_XMVSFAssets, 0x21 },
    { L"Character Select Icon BG Akuma", 0x19bba, 0x19bda, indexCPS2Sprites_XMVSFAssets, 0x20 },
    { L"Portrait BG and Mode Select", 0x19f1a, 0x19f3a, indexCPS2Sprites_XMVSFAssets, 0x22 },
    { L"Mode Select Text", 0x19f3a, 0x19f5a, indexCPS2Sprites_XMVSFAssets, 0x2c },
    { L"Character Select Beam 1", 0x1a03a, 0x1A05A, indexCPS2Sprites_XMVSFAssets, 0x1d },
    { L"Character Select Beam 2", 0x1A05A, 0x1A07A, indexCPS2Sprites_XMVSFAssets, 0x1d },
    { L"Character Select Beam 3", 0x1A07A, 0x1A09A, indexCPS2Sprites_XMVSFAssets, 0x1d },
    { L"Character Select Beam 4", 0x1A09A, 0x1A0BA, indexCPS2Sprites_XMVSFAssets, 0x1d },
    { L"Character Select Beam 5", 0x1A0BA, 0x1A0DA, indexCPS2Sprites_XMVSFAssets, 0x1d },
};

const sGame_PaletteDataset XMVSF_A_BONUS_PORTRAIT_PALETTES_BONUS[] =
{
    { L"Super Portrait BG", 0x1ba9a, 0x1baba, indexCPS2Sprites_XMVSFAssets, 0x1c },
    { L"X-Factor Finish 1", 0x1172c, 0x1174c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 2", 0x1174c, 0x1176c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 3", 0x1176c, 0x1178c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 4", 0x1178c, 0x117ac, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 5", 0x117ac, 0x117cc, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 6", 0x117cc, 0x117ec, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 7", 0x117ec, 0x1180c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 8", 0x1180c, 0x1182c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 9", 0x1182c, 0x1184c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 10", 0x1184c, 0x1186c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 11", 0x1186c, 0x1188c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 12", 0x1188c, 0x118ac, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 13", 0x118ac, 0x118cc, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 14", 0x118cc, 0x118ec, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 15", 0x118ec, 0x1190c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 16", 0x1190c, 0x1192c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 17", 0x1192c, 0x1194c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 18", 0x1194c, 0x1196c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 19", 0x1196c, 0x1198c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 20", 0x1198c, 0x119ac, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 21", 0x119ac, 0x119cc, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"X-Factor Finish 22", 0x119cc, 0x119ec, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 1", 0x1132c, 0x1134c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 2", 0x1134c, 0x1136c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 3", 0x1136c, 0x1138c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 4", 0x1138c, 0x113ac, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 5", 0x113ac, 0x113cc, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 6", 0x113cc, 0x113ec, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 7", 0x113ec, 0x1140c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 8", 0x1140c, 0x1142c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 9", 0x1142c, 0x1144c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 10", 0x1144c, 0x1146c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 11", 0x1146c, 0x1148c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 12", 0x1148c, 0x114ac, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 13", 0x114ac, 0x114cc, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 14", 0x114cc, 0x114ec, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 15", 0x114ec, 0x1150c, indexCPS2Sprites_XMVSFAssets, 0x0b },
    { L"Super Finish 16", 0x1150c, 0x1152c, indexCPS2Sprites_XMVSFAssets, 0x0b },

    { L"VS Background 1", 0x10cec, 0x10d0c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 2", 0x10d0c, 0x10d2c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 3", 0x10d2c, 0x10d4c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 4", 0x10d4c, 0x10d6c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 5", 0x10d6c, 0x10d8c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 6", 0x10d8c, 0x10dac, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 7", 0x10dac, 0x10dcc, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 8", 0x10dcc, 0x10dec, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 9", 0x10dec, 0x10e0c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 10", 0x10e0c, 0x10e2c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 11", 0x10e2c, 0x10e4c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 12", 0x10e4c, 0x10e6c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 13", 0x10e6c, 0x10e8c, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"VS Background 14", 0x10e8c, 0x10eac, indexCPS2Sprites_XMVSFAssets, 0x30 },
    { L"Screen Transition 1", 0x10f2c, 0x10f4c, indexCPS2Sprites_XMVSFAssets, 0x2e },
    { L"Screen Transition 2", 0x11a98, 0x11ab8, indexCPS2Sprites_XMVSFAssets, 0x2e },
    { L"Screen Transition 3", 0x1e1da, 0x1e1fa, indexCPS2Sprites_XMVSFAssets, 0x2e },
    { L"Win Screen BG 1", 0x10eac, 0x10f2c, indexCPS2Sprites_XMVSFAssets, 0x31 },
    { L"Win Screen BG 2", 0x10f8c, 0x10fac, indexCPS2Sprites_XMVSFAssets, 0x32 },
    { L"Win Screen BG 3", 0x10fcc, 0x110ac, indexCPS2Sprites_XMVSFAssets, 0x33 },
    { L"Win Screen BG 4.1", 0x1e23a, 0x1e25a, indexCPS2Sprites_XMVSFAssets, 0x34 },
    { L"Win Screen BG 4.2", 0x1122c, 0x1124c, indexCPS2Sprites_XMVSFAssets, 0x34 },

    // the 'continue screen' hexes use the 'win screen' previews
    { L"Continue Screen BG 1", 0x110ac, 0x1112c, indexCPS2Sprites_XMVSFAssets, 0x31 },
    { L"Continue Screen BG 2", 0x1118c, 0x111ac, indexCPS2Sprites_XMVSFAssets, 0x32 },
    { L"Continue Screen BG 3", 0x1124c, 0x1132c, indexCPS2Sprites_XMVSFAssets, 0x33 },
    { L"Continue Screen BG 4", 0x111cc, 0x111ec, indexCPS2Sprites_XMVSFAssets, 0x34 },
};

const sDescTreeNode XMVSF_A_WOLVERINE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P1, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Wolverine_PALETTES_P2, ARRAYSIZE(XMVSF_A_Wolverine_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_WOLVERINE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CYCLOPS_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_P2) },
    { L"Extra", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cyclops_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cyclops_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CYCLOPS_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_STORM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P1, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_P2, ARRAYSIZE(XMVSF_A_Storm_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Storm_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Storm_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_STORM_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_STORM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_ROGUE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P1, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Rogue_PALETTES_P2, ARRAYSIZE(XMVSF_A_Rogue_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_ROGUE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_GAMBIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gambit_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gambit_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_GAMBIT_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_SABRETOOTH_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P1, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Sabretooth_PALETTES_P2, ARRAYSIZE(XMVSF_A_Sabretooth_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_SABRETOOTH_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_JUGGERNAUT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P1, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_P2, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Juggernaut_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Juggernaut_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_JUGGY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_MAGNETO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P1, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Magneto_PALETTES_P2, ARRAYSIZE(XMVSF_A_Magneto_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_MAGNETO_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_APOCALYPSE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void *)XMVSF_A_Apocalypse_PALETTES, ARRAYSIZE(XMVSF_A_Apocalypse_PALETTES) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_APOCALYPSE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_RYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ryu_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ryu_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_RYU_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_RYU_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_KEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P1, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_P2, ARRAYSIZE(XMVSF_A_Ken_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Ken_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Ken_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_KEN_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_KEN_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_DHALSIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P1, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_P2, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Dhalsim_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Dhalsim_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_DHALSIM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_ZANGIEF_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P1, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_P2, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Zangief_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Zangief_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_ZANGIEF_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_MBISON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P1, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_MBison_PALETTES_P2, ARRAYSIZE(XMVSF_A_MBison_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_MBISON_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_MBISON_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_GOUKI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P1, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_P2, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Gouki_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Gouki_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_GOUKI_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHARLIE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P1, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_P2, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Charlie_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Charlie_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHARLIE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CAMMY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P1, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_P2, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void *)XMVSF_A_Cammy_PALETTES_Extras, ARRAYSIZE(XMVSF_A_Cammy_PALETTES_Extras) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CAMMY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void *)XMVSF_A_ChunLi_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLi_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHUNLI_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_CHUNLISFA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P1, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P1) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)XMVSF_A_ChunLiSFA_PALETTES_P2, ARRAYSIZE(XMVSF_A_ChunLiSFA_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS, ARRAYSIZE(XMVSF_A_CHUNLISFA_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode XMVSF_A_BONUS_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_CSI_PALETTES, ARRAYSIZE(XMVSF_A_BONUS_CSI_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES) },
    { L"Continue Portraits", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_CONTINUE, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_CONTINUE) },
    { L"Versus / Super Portraits", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_VSP, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_VSP) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_INTRO, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_INTRO) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_HUD, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_HUD) },
    { L"Match Text", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_MTEXT, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_MTEXT) },
    { L"Text", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_TEXT, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_TEXT) },
    { L"Intro", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_INTRO_PALETTES, ARRAYSIZE(XMVSF_A_BONUS_INTRO_PALETTES) },
    { L"Title Screen", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_TITLE, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_TITLE) },
    { L"Character Select", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_CHARSELECT, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_CHARSELECT) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_PORTRAIT_PALETTES_BONUS, ARRAYSIZE(XMVSF_A_BONUS_PORTRAIT_PALETTES_BONUS) },
};

const sGame_PaletteDataset XMVSF_A_STAGES_APOCALYPSE_PALETTES[] =
{
    { L"Backgrounds 1/2",       0xb1ac, 0xb3ac, indexCPS2Sprites_XMVSFAssets, 0x3c, &pairFullyLinkedNode },
    { L"Backgrounds 2/2",       0xb3ac, 0xb5ac, indexCPS2Sprites_XMVSFAssets, 0x3d },

    // these are sets of 3-step cycles until the end of 9
    { L"Animation Cycles 1/9",  0x1dac, 0x1f8c, indexCPS2Sprites_XMVSFAssets, 0x35 },
    { L"Animation Cycles 2/9",  0x1f8c, 0x216c, indexCPS2Sprites_XMVSFAssets, 0x36 },
    // this one truncates
    { L"Animation Cycles 3/9",  0x216c, 0x22ec, indexCPS2Sprites_XMVSFAssets, 0x37 },

    { L"Animation Cycles 4/9",  0x234c, 0x252c, indexCPS2Sprites_XMVSFAssets, 0x38 },
    { L"Animation Cycles 5/9",  0x252c, 0x270c, indexCPS2Sprites_XMVSFAssets, 0x39 },
    { L"Animation Cycles 6/9",  0x270c, 0x28ec, indexCPS2Sprites_XMVSFAssets, 0x3a },
        // Are these used?  I don't see usage.
        { L"Animation Cycles 7/9",  0x28ec, 0x2acc },
        { L"Animation Cycles 8/9",  0x2acc, 0x2cac },
    { L"Animation Cycles 9/9",  0x2cac, 0x2e2c, indexCPS2Sprites_XMVSFAssets, 0x3b },

    { L"Floor",                 0xb5ac, 0xb6cc, indexCPS2Sprites_XMVSFAssets, 0x3e },

    { L"Sprites 1/2",           0x18d5a, 0x18f5a, indexCPS2Sprites_XMVSFAssets, 0x3f, &pairNext },
    { L"Sprites 2/2",           0x18f5a, 0x1907a, indexCPS2Sprites_XMVSFAssets, 0x40 },

    //{ L"Sprites: Cells 1/2",    0x2e2c, 0x302c },
    //{ L"Sprites: Cells 2/2",    0x302c, 0x306c },
};

// Showdown in the Park
const sGame_PaletteDataset XMVSF_A_STAGES_RIVER_PALETTES[] =
{
    { L"Sky",           0x31ac, 0x326c, indexCPS2Sprites_XMVSFAssets, 0x8a, &pairFullyLinkedNode },
    { L"Background",    0x326c, 0x346c, indexCPS2Sprites_XMVSFAssets, 0x88 },

    // Commenting out since it's not understood
    //{ L"Unused?",       0x66ec, 0x686c },

    { L"Trees",         0xb76c, 0xb78c, indexCPS2Sprites_XMVSFAssets, 0x8c },

    { L"Sprites",       0x1907a, 0x190ba, indexCPS2Sprites_XMVSFAssets, 0x8b },

    { L"Ground",        0x64ac , 0x64cc, indexCPS2Sprites_XMVSFAssets, 0x89 },
};

const sGame_PaletteDataset XMVSF_A_STAGES_DEATHVALLEY_PALETTES[] =
{
    { L"Sky",           0x346c, 0x356c, indexCPS2Sprites_XMVSFAssets, 0x54, &pairFullyLinkedNode },
    
    { L"Mountains",     0xbacc, 0xbc0c, indexCPS2Sprites_XMVSFAssets, 0x53 },
    
    { L"Foreground",    0x686c, 0x696c, indexCPS2Sprites_XMVSFAssets, 0x52 },
    
    // Commenting out since we don't know what these are
    //{ L"Unused? 1",     0x6a2c, 0x6c2c },
    //{ L"Unused? 2",     0x6c2c, 0x6c6c },
    
    // These is a Beast version and a Blanka version
    { L"Sprites",       0x1915a, 0x1923a, indexCPS2Sprites_XMVSFAssets, 0x55 },
};

const sGame_PaletteDataset XMVSF_A_STAGES_CATARACT_PALETTES[] =
{
    { L"Sky",           0x3a6c, 0x3bcc, indexCPS2Sprites_XMVSFAssets, 0x9e, &pairFullyLinkedNode },
    { L"Foliage",       0x6e2c, 0x702c, indexCPS2Sprites_XMVSFAssets, 0x9c },
    { L"Sprites",       0x1923a, 0x1931a, indexCPS2Sprites_XMVSFAssets, 0x9f },
    { L"Foreground",    0xc0cc, 0xc2cc, indexCPS2Sprites_XMVSFAssets, 0x9d },
};

const sGame_PaletteDataset XMVSF_A_STAGES_HILLTOP_PALETTES[] =
{
    { L"Sky",           0x3c6c, 0x3ccc, indexCPS2Sprites_XMVSFAssets, 0x6c, &pairFullyLinkedNode },
    { L"Middle Layer",  0xc76c, 0xc7ec, indexCPS2Sprites_XMVSFAssets, 0x6e },
    { L"Tree",          0x746c, 0x74ac, indexCPS2Sprites_XMVSFAssets, 0x6b }, // BUG BUG: This is not using the right preview

    { L"Sprites",       0x193fa, 0x194ba, indexCPS2Sprites_XMVSFAssets, 0x6d },

    // Fairly subtle
    { L"Leaves",        0x3f8c, 0x3fcc, indexCPS2Sprites_XMVSFAssets, 0x6a },
};

const sGame_PaletteDataset XMVSF_A_STAGES_MANHATTAN_PALETTES[] =
{
    { L"Sky Animation Cycle", 0x846c, 0x862c, indexCPS2Sprites_XMVSFAssets, 0x65, &pairFullyLinkedNode },
    { L"Background Buildings Animation Cycle", 0x866c, 0x884c, indexCPS2Sprites_XMVSFAssets, 0x5e },

    { L"Sewer Inset",           0x42ec, 0x432c },

    { L"Background Buildings",  0x406c, 0x41cc, indexCPS2Sprites_XMVSFAssets, 0x5d },

    // also stoplight and street ground
    { L"Back Sewer Walls",  0xcdac, 0xcecc, indexCPS2Sprites_XMVSFAssets, 0x5f },

    // NOTE: These are used on different layers (512/2048), need to merge!
    { L"Tunnel and Ground Animation Cycle 1/5",         0x7b2c, 0x7c6c, indexCPS2Sprites_XMVSFAssets, 0x69 }, // BUGBUG: Maybe fork now that we need new images?
        { L"Tunnel and Ground Animation Cycle 2/5",     0x7c6c, 0x7d4c },
        { L"Tunnel and Ground Animation Cycle 3/5",     0x7d4c, 0x7e2c },
        { L"Tunnel and Ground Animation Cycle 4/5",     0x7e2c, 0x7f0c },
        { L"Tunnel and Ground Animation Cycle 5/5",     0x7f0c, 0x7fec },

    { L"Hole Edge Animation Cycle", 0x806c, 0x816c },

    //{ L"Police Cars and Smoon", 0x79ac, 0x7a6c },
    { L"Sewer Walls",               0x7a6c, 0x7b2c, indexCPS2Sprites_XMVSFAssets, 0x64 },

    { L"Building Parts",            0xcacc, 0xcccc, indexCPS2Sprites_XMVSFAssets, 0x60 },
    { L"Stoplight Animation",       0xcccc, 0xccec },

    { L"Left Buildings Animation Cycle 1/2", 0xd0cc, 0xd28c, indexCPS2Sprites_XMVSFAssets, 0x61 },
        { L"Left Buildings Animation Cycle 2/2", 0xcecc, 0xd0cc, indexCPS2Sprites_XMVSFAssets, 0x61 },

    { L"Right Building Animation Cycle",  0xd2cc, 0xd4ac, indexCPS2Sprites_XMVSFAssets, 0x63 },

    { L"Police Cars and Moon",      0x786c, 0x7a6c, indexCPS2Sprites_XMVSFAssets, 0x62 },

    { L"Sprites 1/2",               0x194da, 0x195fa, indexCPS2Sprites_XMVSFAssets, 0x66, &pairNext },
    { L"Sprites 2/2",               0x195fa, 0x196fa, indexCPS2Sprites_XMVSFAssets, 0x68 },

    { L"Ripple Animation",          0x7fec, 0x806c },
    // Unclear
    //{ L"Unused? 2",                 0x432c, 0x446c },
};

const sGame_PaletteDataset XMVSF_A_STAGES_MIDNIGHTPLANT_PALETTES[] =
{
    { L"Sky",           0x446c, 0x44ac, indexCPS2Sprites_XMVSFAssets, 0x86, &pairFullyLinkedNode },
    { L"Factory 1/2",   0xd4cc, 0xd6ac, indexCPS2Sprites_XMVSFAssets, 0x83 },
    { L"Factory 2/2",   0xd6ac, 0xd88c, indexCPS2Sprites_XMVSFAssets, 0x84 },
    { L"Foreground",    0x886c, 0x896c, indexCPS2Sprites_XMVSFAssets, 0x85 },

    // Note that the left smokestack starts smoking after a little damage is done
    { L"Sprites",       0x196fa, 0x197da, indexCPS2Sprites_XMVSFAssets, 0x87 },

    // This doesn't seem used
    //{ L"Unused?",       0x478c, 0x486c },
};

// Note that the transition is a color wash across all palettes
const sGame_PaletteDataset XMVSF_A_STAGES_RAGINGINFERNO_PALETTES[] =
{
    { L"Background Animation Cycle", 0x486c, 0x49cc, indexCPS2Sprites_XMVSFAssets, 0x6f, &pairFullyLinkedNode },

    { L"Middle Buildings 1/2",      0xd8cc, 0xdaac, indexCPS2Sprites_XMVSFAssets, 0x7e },
    { L"Middle Buildings 2/2",      0xdaac, 0xdc6c, indexCPS2Sprites_XMVSFAssets, 0x7f },
    { L"Middle Animation Cycles 1/7", 0xdccc, 0xdecc, indexCPS2Sprites_XMVSFAssets, 0x77 },
    { L"Middle Animation Cycles 2/7", 0xdecc, 0xe06c, indexCPS2Sprites_XMVSFAssets, 0x78 },
    //{ L"anim3", 0xe0cc, 0xe06c },
    { L"Middle Animation Cycles 3/7", 0xe0cc, 0xe2cc, indexCPS2Sprites_XMVSFAssets, 0x79 },
    { L"Middle Animation Cycles 4/7", 0xe2cc, 0xe46c, indexCPS2Sprites_XMVSFAssets, 0x7a },
    { L"Middle Animation Cycles 5/7", 0xe4cc, 0xe6cc, indexCPS2Sprites_XMVSFAssets, 0x7b },
    { L"Middle Animation Cycles 6/7", 0xe6cc, 0xe86c, indexCPS2Sprites_XMVSFAssets, 0x7c },

    { L"Middle Animation Cycles 7/7", 0xe8cc, 0xe96c, indexCPS2Sprites_XMVSFAssets, 0x7d },

    { L"Structure 1/2 Animation Cycles", 0x912c, 0x928c, indexCPS2Sprites_XMVSFAssets, 0x81 },
    { L"Structure 2/2 Animation Cycles", 0x92ac, 0x942c, indexCPS2Sprites_XMVSFAssets, 0x82 },

    { L"Factory",                   0x8c6c, 0x8e2c, indexCPS2Sprites_XMVSFAssets, 0x70 },
    { L"Factory Animations 1",      0x946c, 0x95cc, indexCPS2Sprites_XMVSFAssets, 0x71 },
    { L"Factory Animations 2",      0x95ec, 0x974c, indexCPS2Sprites_XMVSFAssets, 0x72 },
    { L"Factory Animations 3",      0x976c, 0x980c, indexCPS2Sprites_XMVSFAssets, 0x73 },
    { L"Factory Animations 4",      0x986c, 0x99cc, indexCPS2Sprites_XMVSFAssets, 0x74 },
    { L"Factory Animations 5",      0x99ec, 0x9b4c, indexCPS2Sprites_XMVSFAssets, 0x75 },

    { L"Ground Animation Cycle",    0x904c, 0x910c, indexCPS2Sprites_XMVSFAssets, 0x76 },

    // helicopters
    { L"Helicopters",               0x197fa, 0x1981a, indexCPS2Sprites_XMVSFAssets, 0x80 },
};

const sGame_PaletteDataset XMVSF_A_STAGES_CODERED_PALETTES[] =
{
    { L"Sky",               0x4c6c, 0x4cec, indexCPS2Sprites_XMVSFAssets, 0x47, &pairFullyLinkedNode },
    { L"Animation Cycle 1", 0x506c, 0x514c },
    { L"Animation Cycle 2", 0x514c, 0x522c },
    { L"Hangar 1/2",        0x9c6c, 0x9e6c, indexCPS2Sprites_XMVSFAssets, 0x44 },
    { L"Hangar 2/2",        0x9e6c, 0xa04c, indexCPS2Sprites_XMVSFAssets, 0x45 },
    { L"Animation Cycle 3", 0xa04c, 0xa14c, indexCPS2Sprites_XMVSFAssets, 0x41 },
    { L"Animation Cycle 4", 0xa14c, 0xa34c, indexCPS2Sprites_XMVSFAssets, 0x42 },
    { L"Animation Cycle 5", 0xa34c, 0xa54c, indexCPS2Sprites_XMVSFAssets, 0x43 },
    { L"Animation Cycle 6", 0xa54c, 0xa5ac },

    // Jet looks like a very intense animation cycle, plus 3 unknown palettes
    { L"Jet 1/2",           0xeccc, 0xeecc, indexCPS2Sprites_XMVSFAssets, 0x46 },
    { L"Jet 2/2",           0xeecc, 0xf0cc },

    { L"Sprites",           0x198ba, 0x1999a, indexCPS2Sprites_XMVSFAssets, 0x48 },
};

const sGame_PaletteDataset XMVSF_A_STAGES_DEADORLIVE_PALETTES[] =
{
    { L"Background 1/3",    0xf0cc, 0xf2cc, indexCPS2Sprites_XMVSFAssets, 0x49, &pairFullyLinkedNode },
    { L"Background 2/3",    0xf2cc, 0xf4cc, indexCPS2Sprites_XMVSFAssets, 0x4a },
    { L"Background 3/3",    0xf4cc, 0xf62c, indexCPS2Sprites_XMVSFAssets, 0x4b },

    { L"Stage Elements 1/3", 0x546c, 0x552c, indexCPS2Sprites_XMVSFAssets, 0x4f },
    { L"Stage Elements 2/3", 0x586c, 0x598c, indexCPS2Sprites_XMVSFAssets, 0x50 },
    { L"Stage Elements 3/3", 0x598c, 0x5b4c, indexCPS2Sprites_XMVSFAssets, 0x51 },

    { L"People",            0xa5ac, 0xa70c, indexCPS2Sprites_XMVSFAssets, 0x4c },
    { L"Skylights",         0xa9ac, 0xa9ec, indexCPS2Sprites_XMVSFAssets, 0x4d },

    { L"Sprites",           0x1999a, 0x19a7a, indexCPS2Sprites_XMVSFAssets, 0x4e },
};

const sGame_PaletteDataset XMVSF_A_STAGES_MALLMAYHEM_PALETTES[] =
{
    { L"Mall 1/2",      0xadac, 0xafac, indexCPS2Sprites_XMVSFAssets, 0x56, &pairFullyLinkedNode },
    { L"Mall 2/2",      0xafac, 0xb1ac, indexCPS2Sprites_XMVSFAssets, 0x57 },

    { L"Middle 1/2",    0x5c6c, 0x5e6c, indexCPS2Sprites_XMVSFAssets, 0x58 },
    { L"Middle 2/2",    0x5e6c, 0x606c, indexCPS2Sprites_XMVSFAssets, 0x59 },

    { L"People 1/2",    0xf8cc, 0xfacc, indexCPS2Sprites_XMVSFAssets, 0x5a },
    { L"People 2/2",    0xfacc, 0xfccc, indexCPS2Sprites_XMVSFAssets, 0x5b },

    { L"Sprites",       0x19a7a, 0x19b5a, indexCPS2Sprites_XMVSFAssets, 0x5c },
};

const sGame_PaletteDataset XMVSF_A_STAGES_TEMPLE_PALETTES[] =
{
    { L"Sky",               0xc2cc, 0xc3ec, indexCPS2Sprites_XMVSFAssets, 0x9a, &pairFullyLinkedNode },
    { L"Floor Buildings",   0x706c, 0x726c, indexCPS2Sprites_XMVSFAssets, 0x99 },
    { L"Big Statue",        0x726c, 0x746c, indexCPS2Sprites_XMVSFAssets, 0x98 },

    { L"Sprites",           0x1931a, 0x193fa, indexCPS2Sprites_XMVSFAssets, 0x9b },
};

const sGame_PaletteDataset XMVSF_A_STAGES_PREVIEW_PALETTES[] =
{
    // Previews are a silghtly different order and I don't know why
    { L"Apocalypse Now!",       0xfd8c, 0xfe8c, indexCPS2Sprites_XMVSFAssets, 0x8d },
    { L"Showdown in the Park",  0xfe8c, 0xff8c, indexCPS2Sprites_XMVSFAssets, 0x95 },
    { L"Death Valley",          0xff8c, 0x1008c, indexCPS2Sprites_XMVSFAssets, 0x90 },
    { L"The Cataract",          0x1008c, 0x1018c, indexCPS2Sprites_XMVSFAssets, 0x97 },
    { L"Temple of Fists",       0x1018c, 0x1028c, indexCPS2Sprites_XMVSFAssets, 0x96 },
    { L"On the Hilltop",        0x1028c, 0x1034c, indexCPS2Sprites_XMVSFAssets, 0x93 },
    { L"Manhattan",             0x1038c, 0x103ec, indexCPS2Sprites_XMVSFAssets, 0x92 },
    { L"Raging Inferno",        0x1048c, 0x1058c, indexCPS2Sprites_XMVSFAssets, 0x94 },
    { L"Code Red",              0x1058c, 0x1068c, indexCPS2Sprites_XMVSFAssets, 0x8e },
    { L"Dead or Live The Show", 0x1068c, 0x1078c, indexCPS2Sprites_XMVSFAssets, 0x8f },
    { L"Mall Mayhem",           0x1078c, 0x1088c, indexCPS2Sprites_XMVSFAssets, 0x91 },
};

const sDescTreeNode XMVSF_A_STAGE_COLLECTION[] =
{
    { L"Apocalypse Now!",               DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_APOCALYPSE_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_APOCALYPSE_PALETTES) },
    // aka River Bridge
    { L"Showdown in the Park",          DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_RIVER_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_RIVER_PALETTES) },
    { L"Death Valley",                  DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_DEATHVALLEY_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_DEATHVALLEY_PALETTES) },
    { L"The Cataract",                  DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_CATARACT_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_CATARACT_PALETTES) },
    { L"On the Hilltop",                DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_HILLTOP_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_HILLTOP_PALETTES) },
    { L"Manhattan",                     DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_MANHATTAN_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_MANHATTAN_PALETTES) },
    { L"Raging Inferno (Start)",        DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_MIDNIGHTPLANT_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_MIDNIGHTPLANT_PALETTES) },
    { L"Raging Inferno (Exploded)",     DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_RAGINGINFERNO_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_RAGINGINFERNO_PALETTES) },

    // Airplane hangar stage
    { L"Code Red",                      DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_CODERED_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_CODERED_PALETTES) },
    // TV show
    { L"Dead Or Live The Show",         DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_DEADORLIVE_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_DEADORLIVE_PALETTES) },
    { L"Mall Mayhem",                   DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_MALLMAYHEM_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_MALLMAYHEM_PALETTES) },
    { L"Temple of Fists",               DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_TEMPLE_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_TEMPLE_PALETTES) },

    { L"Stage Previews",                DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGES_PREVIEW_PALETTES, ARRAYSIZE(XMVSF_A_STAGES_PREVIEW_PALETTES) },
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
   { L"Akuma", DESC_NODETYPE_TREE, (void*)XMVSF_A_GOUKI_COLLECTION, ARRAYSIZE(XMVSF_A_GOUKI_COLLECTION) },
   { L"Apocalypse", DESC_NODETYPE_TREE, (void*)XMVSF_A_APOCALYPSE_COLLECTION, ARRAYSIZE(XMVSF_A_APOCALYPSE_COLLECTION) },
   { L"Stages", DESC_NODETYPE_TREE, (void*)XMVSF_A_STAGE_COLLECTION, ARRAYSIZE(XMVSF_A_STAGE_COLLECTION) },
   { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)XMVSF_A_BONUS_COLLECTION, ARRAYSIZE(XMVSF_A_BONUS_COLLECTION) },
};

// This is the alphabetically sorted list of ROM locations:
/*
    0x1639a, // Cammy
    0x1621a, // Charlie
    0x15B9a, // Chun-Li
    0x164Ba, // Chun-Li (SFA)
    0x14E3a, // Cyclops
    0x15C5a, // Dhalsim 
    0x153Da, // Gambit
    0x1609a, // Gouki
    0x1559a, // Juggernaut
    0x15A1a, // Ken
    0x15FDa, // M. Bison
    0x156Ba, // Magneto
    0x1531a, // Rogue
    0x1589a, // Ryu
    0x1549a, // Sabretooth
    0x14FBa, // Storm
    0x14D7a, // Wolverine
    0x15D5a, // Zangief
    0x157Da, // Apocalypse
    0x1657a, // End of Apocalypse range...?  This value is unclear.
*/

/*
These are the ROM locations sorted by layout rather than alphabetically:
    0x14D7a, // Wolverine
    0x14E3a, // Cyclops
    0x14FBa, // Storm
    0x1531a, // Rogue
    0x153Da, // Gambit
    0x1549a, // Sabretooth
    0x1559a, // Juggernaut
    0x156Ba, // Magneto
    0x157Da, // Apocalypse
    0x1589a, // Ryu
    0x15A1a, // Ken
    0x15B9a, // Chun-Li
    0x15C5a, // Dhalsim 
    0x15D5a, // Zangief
    0x15FDa, // M. Bison
    0x1609a, // Gouki
    0x1621a, // Charlie
    0x1639a, // Cammy
    0x164Ba, // Chun-Li (SFA)
    0x1657a,
*/

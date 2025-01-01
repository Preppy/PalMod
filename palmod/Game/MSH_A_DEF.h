#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MSH_A_BLACKHEART_PALETTES. 
// * Update every array using MSH_A_NUMUNIT below
// That should be it.  Good luck.

#ifdef LOOKINGFORSORTORDER

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P1[] =
    { L"Spider-Man P1",  0x61C0c, 0x61C2c, 0x0C },
const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P1[] =
{ L"Captain America P1", 0x61CEc, 0x61D0c, indexCPS2Sprites_CapAm, 0, &pairNext },
const sGame_PaletteDataset MSH_A_HULK_PALETTES_P1[] =
    { L"Hulk P1",        0x61DCc, 0x61DEc, 0x0D },
const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P1[] =
    { L"Iron Man P1",    0x61EAc, 0x61ECc, 0x33 },
const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P1[] =
    { L"Wolverine P1",   0x61F8c, 0x61FAc, 0x07, 0, &pairNext },
const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P1[] =
    { L"Psylocke P1",    0x6206c, 0x6208c, 0x08 },
const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P1[] =
    { L"Blackheart P1",  0x6214c, 0x6216c, 0x35 },
const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P1[] =
    { L"Juggernaut P1",  0x6230c, 0x6232c, 0x29 },
    shuma at 0x6222e here
const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P1[] =
    { L"Magneto P1",     0x623Ec, 0x6240c, 0x2C },
const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P1[] =
    { L"Dr. Doom P1",    0x624Cc, 0x624Ec, 0x0F },
const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P1[] =
    { L"Thanos P1",      0x6264c, 0x6266c, 0x36 },
    followed by Anita
    extras
    spidey extras until 62c0e
    3 iron man shades
    many blackheart palettes
    shuma stuff around 63b8e
    p2 shuma at 641ae

#endif

#pragma region SecondaryPaletteEffects

const std::vector<std::vector<uint16_t>> paletteBuddy_MSH_Blackheart =
{
    // 16 intro palettes starting at 9, last 3 minus about 4 LUM per step
    // Note that we're updating the eyes in reference to the primary palette:
    // the actual game logic does not do this which looks weird in practice.
    { SUPP_NODE, 9, 0 },
    { SUPP_NODE, 10, 0, MOD_LUM, 13, 3, NEG + 4 },
    { SUPP_NODE, 11, 0, MOD_LUM, 13, 3, NEG + 7 },
    { SUPP_NODE, 12, 0, MOD_LUM, 13, 3, NEG + 10 },
    { SUPP_NODE, 13, 0, MOD_LUM, 13, 3, NEG + 14 },
    { SUPP_NODE, 14, 0, MOD_LUM, 13, 3, NEG + 17 },
    { SUPP_NODE, 15, 0, MOD_LUM, 13, 3, NEG + 20 },
    { SUPP_NODE, 16, 0, MOD_LUM, 13, 3, NEG + 24 },
    { SUPP_NODE, 17, 0, MOD_LUM, 13, 3, NEG + 27 },
    { SUPP_NODE, 18, 0, MOD_LUM, 13, 3, NEG + 30 },
    { SUPP_NODE, 19, 0, MOD_LUM, 13, 3, NEG + 34 },
    { SUPP_NODE, 20, 0, MOD_LUM, 13, 3, NEG + 37 },
    { SUPP_NODE, 21, 0, MOD_LUM, 13, 3, NEG + 40 },
    { SUPP_NODE, 22, 0, MOD_LUM, 13, 3, NEG + 44 },
    { SUPP_NODE, 23, 0, MOD_LUM, 13, 3, NEG + 44 },
    { SUPP_NODE, 24, 0, MOD_LUM, 13, 3, NEG + 47 },

    // 3 Armageddon Portal Flashing Palettes
    { SUPP_NODE, 25, 0, MOD_COPY, 14, 1, 13 },
    { SUPP_NODE, 26, 0, MOD_LUM, 13, 1, NEG + 50 },
    { SUPP_NODE, 27, 0, MOD_WHITE, 13, 1 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSH_Shuma =
{
    // Dash/Guard: Extra 01
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x01, 8,
        MOD_COPY, 1, 8, 1 },

    // Stance (after FP): 5 frames
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x03, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x04, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x05, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x06, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x07, 0x30, MOD_COPY, 2, 7, 2 },

    // Stone Drop (d+HK): 5 frames
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x08, 0x30,
        MOD_COPY, 9, 3, 9 },
    { SUPP_NODE, 0x09, 0x30,
        MOD_SAT, 1, 8, NEG + 70,
        MOD_LUM, 1, 8, 5 },
    { SUPP_NODE, 0x0a, 0x30,
        MOD_SAT, 1, 8, NEG + 55,
        MOD_LUM, 1, 8, 5 },
    { SUPP_NODE, 0x0b, 0x30,
        MOD_SAT, 1, 8, NEG + 30,
        MOD_LUM, 1, 8, 5 },
    { SUPP_NODE, 0x0c, 0x30 },
    
    // 10 unused super trail palettes
    // 10 grab frame palettes, not tied to main color

    // HP Flash frames: 7 frames
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x21, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x22, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x23, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x24, 0x30, MOD_COPY, 2, 7, 2 },
    // HP flash
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x25, 0x30,
        MOD_COPY, 2, 10, 2,
        MOD_LUM, 9, 1, NEG + 5, //darken eye shine, 
        MOD_COPY, 2, 2, 14, //match and lighten the last 2 shades
        MOD_LUM, 14, 2, 20, MOD_LUM, 14, 1, 10,
        MOD_SAT, 14, 2, 40, MOD_SAT, 14, 1, 20, },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x26, 0x30, MOD_COPY, 2, 7, 2 },
    // Winpose: eye is different color, but i don't know how that works
    // Saturation is maxed, but the other transforms are unclear
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x27, 0x30, MOD_COPY, 2, 7, 2 },

    // Chaos Dimension: 5 paired frames: normal, dash, repeat
    // Chaos frame 1
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x28, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 40,
        MOD_LUM, 2, 7, 10,
        MOD_LUM, 9, 3, 10
    },

    // Dash frame 1
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x29, 0x30,
        MOD_COPY, 2, 7, 2,
        MOD_SAT, 2, 7, NEG + 40,
        MOD_LUM, 2, 7, 10,
    },

    // Chaos frame 2
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x2a, 0x30, 
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 30,
        MOD_LUM, 2, 7, 20
    },

    // Dash frame 2
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x2b, 0x30,
        MOD_COPY, 2, 7, 2,
        MOD_SAT, 2, 7, NEG + 30,
        MOD_LUM, 2, 7, 20 },

    // Chaos frame 3
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x2c, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 20,
        MOD_LUM, 2, 7, 20 },

    // Dash frame 3
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x2d, 0x30,
        MOD_COPY, 2, 7, 2,
        MOD_SAT, 2, 7, NEG + 20,
        MOD_LUM, 2, 7, 20 },

    // Chaos frame 4
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x2e, 0x30,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 7, 1, 2,
        MOD_COPY, 9, 3, 9,
        MOD_SAT, 2, 1, 40,
        MOD_LUM, 2, 1, 40,
        MOD_SAT, 3, 6, 60,
        MOD_LUM, 3, 6, 50,
    },

    // Dash frame 4
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x2f, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 7, 1, 2,
        MOD_SAT, 2, 1, 40,
        MOD_LUM, 2, 1, 40,
        MOD_SAT, 3, 6, 60,
        MOD_LUM, 3, 6, 50,
    },
            
    // Chaos frame 5
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x30, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 7, 1, 2,
        MOD_COPY, 9, 3, 9,
        MOD_SAT, 2, 1, 30,
        MOD_LUM, 2, 1, 20,
        MOD_SAT, 3, 6, 50,
        MOD_LUM, 3, 6, 30
    },

    // Dash frame 5
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x31, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 7, 1, 2,
        MOD_SAT, 2, 1, 30,
        MOD_LUM, 2, 1, 20,
        MOD_SAT, 3, 6, 50,
        MOD_LUM, 3, 6, 30
    },

    // Mystic Smash Shadows
    { SUPP_NODE, 0x32, 0x30,
        MOD_LUM, 1, 15, NEG + 10,
        MOD_SAT, 1, 15, NEG + 100
    },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSH_Spidey =
{
    // Taunt balloon: we don't touch

    // Intro
    { SUPP_NODE, 0x03, 16,
        MOD_LUM, 01, 10, NEG + 29 },
    { SUPP_NODE, 0x04, 16,
        MOD_LUM, 01, 10, NEG + 23 },
    { SUPP_NODE, 0x05, 16,
        MOD_LUM, 01, 10, NEG + 17 },
    { SUPP_NODE, 0x06, 16,
        MOD_LUM, 01, 10, NEG + 12 },
    { SUPP_NODE, 0x07, 16,
        MOD_LUM, 01, 10, NEG + 8 },
    { SUPP_NODE, 0x08, 16,
        MOD_LUM, 01, 10, NEG + 7 },
    { SUPP_NODE, 0x09, 16,
        MOD_LUM, 01, 10, NEG + 5 },
    { SUPP_NODE, 0x0a, 16,
        MOD_LUM, 01, 10, NEG + 3 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSH_Wolverine =
{
    // his berserker barrage trails a bit of his costume.
    { SUPP_NODE | SUPP_NODE_NOCOPY, 2, 8,
        MOD_COPY,  2, 1, 12,
        MOD_COPY, 11, 1, 13,
        MOD_COPY, 10, 1, 14,
        MOD_COPY,  9, 1, 15 },
};

const stPaletteProcessingInformation secondaryMSHBlackheartEffects{ paletteBuddy_MSH_Blackheart };
const stPaletteProcessingInformation secondaryMSHShumaEffects{ paletteBuddy_MSH_Shuma };
const stPaletteProcessingInformation secondaryMSHSpideyEffects{ paletteBuddy_MSH_Spidey };
const stPaletteProcessingInformation secondaryMSHWolverineEffects{ paletteBuddy_MSH_Wolverine };

#pragma endregion

const std::vector<uint16_t> MSH_A_IMGIDS_USED =
{
    indexCPS2Sprites_Wolverine,
    indexCPS2Sprites_Psylocke,
    indexCPS2Sprites_CapAm,
    indexCPS2Sprites_Spidey,
    indexCPS2Sprites_Hulk,
    indexCPS2Sprites_DrDoom,
    indexCPS2Sprites_Juggy,
    indexCPS2Sprites_Magneto,
    indexCPS2Sprites_Shuma,
    indexCPS2Sprites_IronMan,
    indexCPS2Sprites_Blackheart,
    indexCPS2Sprites_Thanos,
    indexCPS2Sprites_Anita,
    indexCPS2Sprites_MSHAssets,     // 0x52 - MSH HUD, stages

    indexCPS2Sprites_STAkuma,       // used by anita
};

const sGame_PaletteDataset MSH_A_ANITA_PALETTES_P1[] =
{
    // she also uses an akuma sprite and another helper sprite
    { L"P1 Main", 0x6272c, 0x6274c, indexCPS2Sprites_Anita },
    { L"P1 Sword", 0x6274c, 0x6276c, indexCPS2Sprites_Anita, 0x03 },
    { L"P1 Lin-Lin", 0x0666ec, 0x06670c, indexCPS2Sprites_Anita, 0x04 },
};

const sGame_PaletteDataset MSH_A_ANITA_PALETTES_P2[] =
{
    { L"P2 Main", 0x627Ac, 0x627Cc, indexCPS2Sprites_Anita },
    { L"P2 Sword", 0x627Cc, 0x627Ec, indexCPS2Sprites_Anita, 0x03 },
    { L"P2 Lin-Lin", 0x0667cc, 0x0667ec, indexCPS2Sprites_Anita, 0x04 },
};

const sGame_PaletteDataset MSH_A_ANITA_PALETTES_SHARED[] =
{
    { L"Shared Gouki", 0x0667ec, 0x06680c, indexCPS2Sprites_STAkuma },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P1[] =
{
    { L"P1 Main", 0x6214c, 0x6216c, indexCPS2Sprites_Blackheart, 0x00, nullptr, &secondaryMSHBlackheartEffects },

    { L"P1 HP / HK Demons", 0x62F2c, 0x62F4c, indexCPS2Sprites_Blackheart, 0x02 },
    { L"P1 HP / HK Ground Throw", 0x6330c, 0x6332c, indexCPS2Sprites_Blackheart, 0x0C },
    { L"P1 Dark Thunder", 0x62F8c, 0x62FAc, indexCPS2Sprites_Blackheart, 0x01 },
    { L"P1 Inferno Effect/Portal", 0x62fac, 0x62fcc, indexCPS2Sprites_Blackheart, 0x09 },
    { L"P1 Winpose Flame", 0x62f4c, 0x62f6c, indexCPS2Sprites_Blackheart, 0x10  },
    { L"P1 Armageddon Meteors", 0x632Ec, 0x6330c, indexCPS2Sprites_Blackheart, 0x0B },
    { L"P1 Heart of Darkness Fire Pillar", 0x631ec, 0x6320c, indexCPS2Sprites_Blackheart, 0x0A  },
    { L"P1 Heart of Darkness Demons", 0x6216c, 0x621ac, indexCPS2Sprites_Blackheart, 0x0e },

    //these are all palettes that just change the eye(s) and portal
    //BH gets stuck on a few of these until hit, this is fine if we assume the user has "Process Supplement Palettes" enabled
    { L"P1 Intro (1/16) / H.O.D. Eyes Glow (1/2)", 0x62cec, 0x62d0c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (2/16) / H.O.D. Eyes Glow (2/2)", 0x62d0c, 0x62d2c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (3/16) / post-H.O.D.", 0x62d2c, 0x62d4c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (4/16)", 0x62d4c, 0x62d6c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (5/16)", 0x62d6c, 0x62d8c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (6/16)", 0x62d8c, 0x62dac, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (7/16)", 0x62dac, 0x62dcc, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (8/16)", 0x62dcc, 0x62dec, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (9/16)", 0x62dec, 0x62e0c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (10/16)", 0x62e0c, 0x62e2c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (11/16)", 0x62e2c, 0x62e4c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (12/16)", 0x62e4c, 0x62e6c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (13/16)", 0x62e6c, 0x62e8c, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (14/16)", 0x62e8c, 0x62eac, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (15/16)", 0x62eac, 0x62ecc, indexCPS2Sprites_Blackheart },
    { L"P1 Intro (16/16)", 0x62ecc, 0x62eec, indexCPS2Sprites_Blackheart },
    { L"P1 Armageddon Portal Flashing (1/3)", 0x6326c, 0x6328c, indexCPS2Sprites_Blackheart },
    { L"P1 Armageddon Portal Flashing (2/3)", 0x6328c, 0x632ac, indexCPS2Sprites_Blackheart },
    { L"P1 Armageddon Portal Flashing (3/3)", 0x632ac, 0x632cc, indexCPS2Sprites_Blackheart },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P2[] =
{
    { L"P2 Main",  0x621Cc, 0x621Ec, indexCPS2Sprites_Blackheart, 0x00, nullptr, &secondaryMSHBlackheartEffects },

    { L"P2 HP / HK Demons",  0x6372c, 0x6374c, indexCPS2Sprites_Blackheart, 0x02 },
    { L"P2 HP / HK Ground Throw", 0x63b0c, 0x63b2c, indexCPS2Sprites_Blackheart, 0x0C },
    { L"P2 Dark Thunder",  0x6378c, 0x637Ac, indexCPS2Sprites_Blackheart, 0x01 },
    { L"P2 Inferno Effect/Portal", 0x637ac, 0x637cc, indexCPS2Sprites_Blackheart, 0x09 },
    { L"P2 Winpose Flame", 0x6374c, 0x6376c, indexCPS2Sprites_Blackheart, 0x10  },
    { L"P2 Armageddon Meteors", 0x63AEc, 0x63B0c, indexCPS2Sprites_Blackheart, 0x0B },
    { L"P2 Heart of Darkness Fire Pillar", 0x639ec, 0x63a0c, indexCPS2Sprites_Blackheart, 0x0A  },
    { L"P2 Heart of Darkness Demons", 0x621Ec, 0x6222c, indexCPS2Sprites_Blackheart, 0x0e },

    //these are all palettes that just change the eye(s) and portal
    //BH gets stuck on a few of these until hit, this is fine if we assume the user has "Process Supplement Palettes" enabled
    { L"P2 Intro (1/16) / H.O.D. Eyes Glow (1/2)", 0x634ec, 0x6350c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (2/16) / H.O.D. Eyes Glow (2/2)", 0x6350c, 0x6352c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (3/16) / post-H.O.D.", 0x6352c, 0x6354c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (4/16)", 0x6354c, 0x6356c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (5/16)", 0x6356c, 0x6358c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (6/16)", 0x6358c, 0x635ac, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (7/16)", 0x635ac, 0x635cc, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (8/16)", 0x635cc, 0x635ec, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (9/16)", 0x635ec, 0x6360c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (10/16)", 0x6360c, 0x6362c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (11/16)", 0x6362c, 0x6364c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (12/16)", 0x6364c, 0x6366c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (13/16)", 0x6366c, 0x6368c, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (14/16)", 0x6368c, 0x636ac, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (15/16)", 0x636ac, 0x636cc, indexCPS2Sprites_Blackheart },
    { L"P2 Intro (16/16)", 0x636cc, 0x636ec, indexCPS2Sprites_Blackheart },
    { L"P2 Armageddon Portal Flashing (1/3)", 0x63a6c, 0x63a8c, indexCPS2Sprites_Blackheart },
    { L"P2 Armageddon Portal Flashing (2/3)", 0x63a8c, 0x63aac, indexCPS2Sprites_Blackheart },
    { L"P2 Armageddon Portal Flashing (3/3)", 0x63aac, 0x63acc, indexCPS2Sprites_Blackheart },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P1[] =
{
    { L"P1 Main", 0x61CEc, 0x61D0c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P1 Shield", 0x61D0c, 0x61D2c, indexCPS2Sprites_CapAm, 1 },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P2[] =
{
    { L"P2 Main", 0x61D6c, 0x61D8c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P2 Shield", 0x61D8c, 0x61DAc, indexCPS2Sprites_CapAm, 1 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P1[] =
{
    { L"P1 Main", 0x624cc, 0x624ec, indexCPS2Sprites_DrDoom },
    { L"P1 Flames + jHP", 0x624ec, 0x6250c, indexCPS2Sprites_DrDoom, 0x08 },
    { L"P1 Interrupted Normals", 0x6250c, 0x6252c, indexCPS2Sprites_DrDoom, 0x02 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P2[] =
{
    { L"P2 Main", 0x6254c, 0x6256c, indexCPS2Sprites_DrDoom },
    { L"P2 Flames + jHP", 0x6256c, 0x6258c, indexCPS2Sprites_DrDoom, 0x08 },
    { L"P2 Interrupted Normals", 0x6258c, 0x625ac, indexCPS2Sprites_DrDoom, 0x02 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_EXTRAS[] =
{
    { L"Normals (1/3)", 0x653ac, 0x653cc, indexCPS2Sprites_DrDoom, 0x01 },
    { L"Normals (2/3)", 0x6538c, 0x653ac, indexCPS2Sprites_DrDoom, 0x01 },
    { L"Normals (3/3)", 0x6536c, 0x6538c, indexCPS2Sprites_DrDoom, 0x01 },
    { L"Photon Shot/Array (1/3)", 0x6534c, 0x6536c, indexCPS2Sprites_DrDoom, 0x09 },
    { L"Photon Shot/Array (2/3)", 0x6532c, 0x6534c, indexCPS2Sprites_DrDoom, 0x09 },
    { L"Photon Shot/Array (3/3)", 0x6530c, 0x6532c, indexCPS2Sprites_DrDoom, 0x09 },
    { L"Plasma Beam (1/3)", 0x652ec, 0x6530c, indexCPS2Sprites_DrDoom, 0x04 },
    { L"Plasma Beam (2/3)", 0x652cc, 0x652ec, indexCPS2Sprites_DrDoom, 0x04 },
    { L"Plasma Beam (3/3)", 0x652ac, 0x652cc, indexCPS2Sprites_DrDoom, 0x04 },
    { L"Copy of base (for glimmer/fade)", 0x6518c, 0x651ac, indexCPS2Sprites_DrDoom },
    { L"Attack glimmer (1/2)", 0x6526c, 0x6528c, indexCPS2Sprites_DrDoom },
    { L"Attack glimmer (2/2)", 0x6528c, 0x652ac, indexCPS2Sprites_DrDoom },
    { L"Intro/Winpose fade in (1/6)", 0x6524c, 0x6526c, indexCPS2Sprites_DrDoom },
    { L"Intro/Winpose fade in (2/6)", 0x6522c, 0x6524c, indexCPS2Sprites_DrDoom },
    { L"Intro/Winpose fade in (3/6)", 0x6520c, 0x6522c, indexCPS2Sprites_DrDoom },
    { L"Intro/Winpose fade in (4/6)", 0x651ec, 0x6520c, indexCPS2Sprites_DrDoom },
    { L"Intro/Winpose fade in (5/6)", 0x651cc, 0x651ec, indexCPS2Sprites_DrDoom },
    { L"Intro/Winpose fade in (6/6)", 0x651ac, 0x651cc, indexCPS2Sprites_DrDoom },
    { L"Winpose chair + butler", 0x650ac, 0x650cc, indexCPS2Sprites_DrDoom, 0x0e },
    { L"Winpose chair + butler (fade in 1/6)", 0x6516c, 0x6518c, indexCPS2Sprites_DrDoom, 0x0e },
    { L"Winpose chair + butler (fade in 2/6)", 0x6514c, 0x6516c, indexCPS2Sprites_DrDoom, 0x0e },
    { L"Winpose chair + butler (fade in 3/6)", 0x6512c, 0x6514c, indexCPS2Sprites_DrDoom, 0x0e },
    { L"Winpose chair + butler (fade in 4/6)", 0x6510c, 0x6512c, indexCPS2Sprites_DrDoom, 0x0e },
    { L"Winpose chair + butler (fade in 5/6)", 0x650ec, 0x6510c, indexCPS2Sprites_DrDoom, 0x0e },
    { L"Winpose chair + butler (fade in 6/6)", 0x650cc, 0x650ec, indexCPS2Sprites_DrDoom, 0x0e },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_UNUSED[] =
{
    // large batch of likely unused palettes
    { L"P2 Copy of base (for glimmer/fade)", 0x653cc, 0x653ec, indexCPS2Sprites_DrDoom },
    { L"P2 Attack glimmer (1/2)", 0x654ac, 0x654cc, indexCPS2Sprites_DrDoom },
    { L"P2 Attack glimmer (2/2)", 0x654cc, 0x654ec, indexCPS2Sprites_DrDoom },
    { L"P2 Intro/Winpose fade in (1/6)", 0x6548c, 0x654ac, indexCPS2Sprites_DrDoom },
    { L"P2 Intro/Winpose fade in (2/6)", 0x6546c, 0x6548c, indexCPS2Sprites_DrDoom },
    { L"P2 Intro/Winpose fade in (3/6)", 0x6544c, 0x6546c, indexCPS2Sprites_DrDoom },
    { L"P2 Intro/Winpose fade in (4/6)", 0x6542c, 0x6544c, indexCPS2Sprites_DrDoom },
    { L"P2 Intro/Winpose fade in (5/6)", 0x6540c, 0x6542c, indexCPS2Sprites_DrDoom },
    { L"P2 Intro/Winpose fade in (6/6)", 0x653ec, 0x6540c, indexCPS2Sprites_DrDoom },
    { L"P? Main", 0x625cc, 0x625ec, indexCPS2Sprites_DrDoom },
    { L"P? Flames + jHP", 0x625ec, 0x6260c, indexCPS2Sprites_DrDoom, 0x08 },
    { L"P? Interrupted Normals", 0x6260c, 0x6262c, indexCPS2Sprites_DrDoom, 0x02 },
    { L"P? Copy of base (for glimmer/fade)", 0x654ec, 0x6550c, indexCPS2Sprites_DrDoom },
    { L"P? Attack glimmer (1/2)", 0x655cc, 0x655ec, indexCPS2Sprites_DrDoom },
    { L"P? Attack glimmer (2/2)", 0x655ec, 0x6560c, indexCPS2Sprites_DrDoom },
    { L"P? Intro/Winpose fade in (1/6)", 0x655ac, 0x655cc, indexCPS2Sprites_DrDoom },
    { L"P? Intro/Winpose fade in (2/6)", 0x6558c, 0x655ac, indexCPS2Sprites_DrDoom },
    { L"P? Intro/Winpose fade in (3/6)", 0x6556c, 0x6558c, indexCPS2Sprites_DrDoom },
    { L"P? Intro/Winpose fade in (4/6)", 0x6554c, 0x6556c, indexCPS2Sprites_DrDoom },
    { L"P? Intro/Winpose fade in (5/6)", 0x6552c, 0x6554c, indexCPS2Sprites_DrDoom },
    { L"P? Intro/Winpose fade in (6/6)", 0x6550c, 0x6552c, indexCPS2Sprites_DrDoom },
    { L"Unused?", 0x6508c, 0x650ac },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_P1[] =
{
    { L"P1 Main", 0x61DCc, 0x61DEc, indexCPS2Sprites_Hulk },
    { L"P1 Gamma Charge / Clap", 0x61DEc, 0x61E0c, indexCPS2Sprites_Hulk, 1 },
    { L"P1 Gamma Crush", 0x61E0c, 0x61E2c, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_P2[] =
{
    { L"P2 Main", 0x61E4c, 0x61E6c, indexCPS2Sprites_Hulk },
    { L"P2 Gamma Charge / Clap", 0x61E6c, 0x61E8c, indexCPS2Sprites_Hulk, 1 },
    { L"P2 Gamma Crush", 0x61E8c, 0x61EAc, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P1[] =
{
    { L"P1 Main", 0x61EAc, 0x61ECc, indexCPS2Sprites_IronMan },
    { L"P1 Proton Cannon", 0x61ECc, 0x61EEc, indexCPS2Sprites_IronMan, 1 },
    { L"P1 Proton Canon laser / unibeam", 0x61EEc, 0x61F0c, indexCPS2Sprites_IronMan, 2 },

    { L"P1 Unknown", 0x6324c, 0x6326c, indexCPS2Sprites_IronMan },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P2[] =
{
    { L"P2 Main", 0x61F2c, 0x61F4c, indexCPS2Sprites_IronMan },
    { L"P2 Proton Cannon", 0x61F4c, 0x61F6c, indexCPS2Sprites_IronMan, 1 },
    { L"P2 Proton Canon laser / unibeam", 0x61F6c, 0x61F8c, indexCPS2Sprites_IronMan, 2 },

    { L"P2 Unknown", 0x63a4c, 0x63a6c, indexCPS2Sprites_IronMan },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_SHARED[] =
{
    { L"End Pose Glimmer 1/3", 0x62c8c, 0x62cac, indexCPS2Sprites_IronMan },
    { L"End Pose Glimmer 2/3", 0x62cac, 0x62ccc, indexCPS2Sprites_IronMan },
    { L"End Pose Glimmer 3/3", 0x62ccc, 0x62cec, indexCPS2Sprites_IronMan },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P1[] =
{
    { L"P1 Main", 0x6230c, 0x6232c, indexCPS2Sprites_Juggy },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P2[] =
{
    { L"P2 Main", 0x6238c, 0x623Ac, indexCPS2Sprites_Juggy },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_EXTRAS[] =
{
    { L"P1 + P2 Extra (Super Armor) / Burning 1/2 Dark", 0x6EC6c, 0x6EC8c, indexCPS2Sprites_Juggy, 11 },

    { L"Space Gem Armor 1 (Shared)", 0x64ECc, 0x64EEc, indexCPS2Sprites_Juggy },
    { L"Space Gem Armor 2 (Shared)", 0x64EEc, 0x64F0c, indexCPS2Sprites_Juggy },
    { L"Space Gem Armor 3 (Shared)", 0x64F0c, 0x64F2c, indexCPS2Sprites_Juggy },
    { L"Space Gem Armor 4 (Shared)", 0x64F2c, 0x64F4c, indexCPS2Sprites_Juggy },
    { L"Space Gem Armor 5 (Shared)", 0x64F4c, 0x64F6c, indexCPS2Sprites_Juggy },
    { L"Space Gem Armor 6 (Shared)", 0x64F6c, 0x64F8c, indexCPS2Sprites_Juggy },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P1[] =
{
    { L"P1 Main", 0x623Ec, 0x6240c, indexCPS2Sprites_Magneto },
    { L"P1 Extras 1 (EMD / Supers)", 0x6240c, 0x6242c, indexCPS2Sprites_Magneto, 1 },
    { L"P1 Extras 2 (Normals)", 0x6242c, 0x6244c, indexCPS2Sprites_Magneto, 2 },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P2[] =
{
    { L"P2 Main", 0x6246c, 0x6248c, indexCPS2Sprites_Magneto },
    { L"P2 Extras 1 (EMD / Supers)", 0x6248c, 0x624Ac, indexCPS2Sprites_Magneto, 1 },
    { L"P2 Extras 2 (Normals)", 0x624Ac, 0x624Cc, indexCPS2Sprites_Magneto, 2 },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P1[] =
{
    { L"P1 Main", 0x6206c, 0x6208c, indexCPS2Sprites_Psylocke },
    { L"P1 Extras 1", 0x6208c, 0x620Ac, indexCPS2Sprites_Psylocke, 1 },
    { L"P1 Extras 2", 0x620Ac, 0x620Cc, indexCPS2Sprites_Psylocke, 2 },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P2[] =
{
    { L"P2 Main", 0x620Ec, 0x6210c, indexCPS2Sprites_Psylocke },
    { L"P2 Extras 1", 0x6210c, 0x6212c, indexCPS2Sprites_Psylocke, 1 },
    { L"P2 Extras 2", 0x6212c, 0x6214c, indexCPS2Sprites_Psylocke, 2 },
};

const sGame_PaletteDataset MSH_A_SHUMA_PALETTES_P1[] =
{
    { L"P1 Main", 0x6222c, 0x6224c, indexCPS2Sprites_Shuma, 0x00, &pairNext, &secondaryMSHShumaEffects },
    { L"P1 Dash Frame / Guard Frame", 0x6224c, 0x6226c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P1 FP / jFP / cFP / Intro", 0x6226c, 0x6228c, indexCPS2Sprites_Shuma, 0x09, &pairNextFlipped35 },

    { L"P1 Unused 1", 0x63bac + (0 * 0x20), 0x63bcc + (0 * 0x20) },
    { L"P1 Unused 2", 0x63bac + (1 * 0x20), 0x63bcc + (1 * 0x20) },
    { L"P1 Unused 3", 0x63bac + (2 * 0x20), 0x63bcc + (2 * 0x20) },
    { L"P1 Unused 4", 0x63bac + (3 * 0x20), 0x63bcc + (3 * 0x20) },
    { L"P1 Unused 5", 0x63bac + (4 * 0x20), 0x63bcc + (4 * 0x20) },

    { L"P1 Stone Drop (d+HK) Frames 1", 0x63bac + (5 * 0x20), 0x63bcc + (5 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P1 Stone Drop (d+HK) Frames 2", 0x63bac + (6 * 0x20), 0x63bcc + (6 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P1 Stone Drop (d+HK) Frames 3", 0x63bac + (7 * 0x20), 0x63bcc + (7 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P1 Stone Drop (d+HK) Frames 4", 0x63bac + (8 * 0x20), 0x63bcc + (8 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P1 Unused Stone Drop (d+HK) Frames 5", 0x63bac + (9 * 0x20), 0x63bcc + (9 * 0x20), indexCPS2Sprites_Shuma, 0x04 },

    { L"P1 Unused 1", 0x63bac + (10 * 0x20), 0x63bcc + (10 * 0x20) },
    { L"P1 Unused 2", 0x63bac + (11 * 0x20), 0x63bcc + (11 * 0x20) },
    { L"P1 Unused 3", 0x63bac + (12 * 0x20), 0x63bcc + (12 * 0x20) },
    { L"P1 Unused 4", 0x63bac + (13 * 0x20), 0x63bcc + (13 * 0x20) },
    { L"P1 Unused 5", 0x63bac + (14 * 0x20), 0x63bcc + (14 * 0x20) },
    { L"P1 Unused 6", 0x63bac + (15 * 0x20), 0x63bcc + (15 * 0x20) },
    { L"P1 Unused 7", 0x63bac + (16 * 0x20), 0x63bcc + (16 * 0x20) },
    { L"P1 Unused 8", 0x63bac + (17 * 0x20), 0x63bcc + (17 * 0x20) },
    { L"P1 Unused 9", 0x63bac + (18 * 0x20), 0x63bcc + (18 * 0x20) },
    { L"P1 Unused 10", 0x63bac + (19 * 0x20), 0x63bcc + (19 * 0x20) },

    { L"P1 HK grab 1", 0x63bac + (20 * 0x20), 0x63bcc + (20 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 2", 0x63bac + (21 * 0x20), 0x63bcc + (21 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 3", 0x63bac + (22 * 0x20), 0x63bcc + (22 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 4", 0x63bac + (23 * 0x20), 0x63bcc + (23 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 5", 0x63bac + (24 * 0x20), 0x63bcc + (24 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 6", 0x63bac + (25 * 0x20), 0x63bcc + (25 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 7", 0x63bac + (26 * 0x20), 0x63bcc + (26 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 8", 0x63bac + (27 * 0x20), 0x63bcc + (27 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 9", 0x63bac + (28 * 0x20), 0x63bcc + (28 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P1 HK grab 10", 0x63bac + (29 * 0x20), 0x63bcc + (29 * 0x20), indexCPS2Sprites_Shuma, 0x05 },

    { L"P1 Unused 1", 0x63bac + (30 * 0x20), 0x63bcc + (30 * 0x20) },
    { L"P1 Unused 2", 0x63bac + (31 * 0x20), 0x63bcc + (31 * 0x20) },
    { L"P1 Unused 3", 0x63bac + (32 * 0x20), 0x63bcc + (32 * 0x20) },
    { L"P1 Unused 4", 0x63bac + (33 * 0x20), 0x63bcc + (33 * 0x20) },
    { L"P1 HP Flash Frame", 0x63bac + (34 * 0x20), 0x63bcc + (34 * 0x20), indexCPS2Sprites_Shuma, 0x06, &pairPrevious35 },
    { L"P1 Winpose", 0x63bac + (35 * 0x20), 0x63bcc + (35 * 0x20), indexCPS2Sprites_Shuma, 0x07 },
    { L"P1 Unused 5", 0x63bac + (36 * 0x20), 0x63bcc + (36 * 0x20) },

    { L"P1 Chaos Dimension Frame 1", 0x63bac + (37 * 0x20), 0x63bcc + (37 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P1 Chaos Dimension (Dash) Frame 1", 0x63bac + (42 * 0x20), 0x63bcc + (42 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P1 Chaos Dimension Frame 2", 0x63bac + (38 * 0x20), 0x63bcc + (38 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P1 Chaos Dimension (Dash) Frame 2", 0x63bac + (43 * 0x20), 0x63bcc + (43 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P1 Chaos Dimension Frame 3", 0x63bac + (39 * 0x20), 0x63bcc + (39 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P1 Chaos Dimension (Dash) Frame 3", 0x63bac + (44 * 0x20), 0x63bcc + (44 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P1 Chaos Dimension Frame 4", 0x63bac + (40 * 0x20), 0x63bcc + (40 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P1 Chaos Dimension (Dash) Frame 4", 0x63bac + (45 * 0x20), 0x63bcc + (45 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P1 Chaos Dimension Frame 5", 0x63bac + (41 * 0x20), 0x63bcc + (41 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P1 Chaos Dimension (Dash) Frame 5", 0x63bac + (46 * 0x20), 0x63bcc + (46 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },

    { L"P1 Mystic Smash Shadows", 0x63bac + (47 * 0x20), 0x63bcc + (47 * 0x20), indexCPS2Sprites_Shuma, 0x08 },
};

const sGame_PaletteDataset MSH_A_SHUMA_PALETTES_P2[] =
{
    { L"P2 Main", 0x622Ac, 0x622Cc, indexCPS2Sprites_Shuma, 0x00, &pairNext, &secondaryMSHShumaEffects },
    { L"P2 Dash Frame / Guard Frame", 0x622Cc, 0x622Ec, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P2 FP / jFP / cFP / Intro", 0x622ec, 0x6230c, indexCPS2Sprites_Shuma, 0x09, &pairNextFlipped35 },

    { L"P2 Unused 1", 0x641ac + (0 * 0x20), 0x641cc + (0 * 0x20) },
    { L"P2 Unused 2", 0x641ac + (1 * 0x20), 0x641cc + (1 * 0x20) },
    { L"P2 Unused 3", 0x641ac + (2 * 0x20), 0x641cc + (2 * 0x20) },
    { L"P2 Unused 4", 0x641ac + (3 * 0x20), 0x641cc + (3 * 0x20) },
    { L"P2 Unused 5", 0x641ac + (4 * 0x20), 0x641cc + (4 * 0x20) },

    { L"P2 Stone Drop (d+HK) Frames 1", 0x641ac + (5 * 0x20), 0x641cc + (5 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P2 Stone Drop (d+HK) Frames 2", 0x641ac + (6 * 0x20), 0x641cc + (6 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P2 Stone Drop (d+HK) Frames 3", 0x641ac + (7 * 0x20), 0x641cc + (7 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P2 Stone Drop (d+HK) Frames 4", 0x641ac + (8 * 0x20), 0x641cc + (8 * 0x20), indexCPS2Sprites_Shuma, 0x04 },
    { L"P2 Unused Stone Drop (d+HK) Frames 5", 0x641ac + (9 * 0x20), 0x641cc + (9 * 0x20), indexCPS2Sprites_Shuma, 0x04 },

    { L"P2 Unused 1", 0x641ac + (10 * 0x20), 0x641cc + (10 * 0x20) },
    { L"P2 Unused 2", 0x641ac + (11 * 0x20), 0x641cc + (11 * 0x20) },
    { L"P2 Unused 3", 0x641ac + (12 * 0x20), 0x641cc + (12 * 0x20) },
    { L"P2 Unused 4", 0x641ac + (13 * 0x20), 0x641cc + (13 * 0x20) },
    { L"P2 Unused 5", 0x641ac + (14 * 0x20), 0x641cc + (14 * 0x20) },
    { L"P2 Unused 6", 0x641ac + (15 * 0x20), 0x641cc + (15 * 0x20) },
    { L"P2 Unused 7", 0x641ac + (16 * 0x20), 0x641cc + (16 * 0x20) },
    { L"P2 Unused 8", 0x641ac + (17 * 0x20), 0x641cc + (17 * 0x20) },
    { L"P2 Unused 9", 0x641ac + (18 * 0x20), 0x641cc + (18 * 0x20) },
    { L"P2 Unused 10", 0x641ac + (19 * 0x20), 0x641cc + (19 * 0x20) },

    { L"P2 HK grab 1", 0x641ac + (20 * 0x20), 0x641cc + (20 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 2", 0x641ac + (21 * 0x20), 0x641cc + (21 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 3", 0x641ac + (22 * 0x20), 0x641cc + (22 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 4", 0x641ac + (23 * 0x20), 0x641cc + (23 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 5", 0x641ac + (24 * 0x20), 0x641cc + (24 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 6", 0x641ac + (25 * 0x20), 0x641cc + (25 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 7", 0x641ac + (26 * 0x20), 0x641cc + (26 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 8", 0x641ac + (27 * 0x20), 0x641cc + (27 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 9", 0x641ac + (28 * 0x20), 0x641cc + (28 * 0x20), indexCPS2Sprites_Shuma, 0x05 },
    { L"P2 HK grab 10", 0x641ac + (29 * 0x20), 0x641cc + (29 * 0x20), indexCPS2Sprites_Shuma, 0x05 },

    { L"P2 Unused 1", 0x641ac + (30 * 0x20), 0x641cc + (30 * 0x20) },
    { L"P2 Unused 2", 0x641ac + (31 * 0x20), 0x641cc + (31 * 0x20) },
    { L"P2 Unused 3", 0x641ac + (32 * 0x20), 0x641cc + (32 * 0x20) },
    { L"P2 Unused 4", 0x641ac + (33 * 0x20), 0x641cc + (33 * 0x20) },
    { L"P2 HP Flash Frames", 0x641ac + (34 * 0x20), 0x641cc + (34 * 0x20), indexCPS2Sprites_Shuma, 0x06, &pairPrevious35 },
    { L"P2 Winpose", 0x641ac + (35 * 0x20), 0x641cc + (35 * 0x20), indexCPS2Sprites_Shuma, 0x07 },
    { L"P2 Unused 5", 0x641ac + (36 * 0x20), 0x641cc + (36 * 0x20) },

    { L"P2 Chaos Dimension Frame 1", 0x641ac + (37 * 0x20), 0x641cc + (37 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P2 Chaos Dimension (Dash) Frame 1", 0x641ac + (42 * 0x20), 0x641cc + (42 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P2 Chaos Dimension Frame 2", 0x641ac + (38 * 0x20), 0x641cc + (38 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P2 Chaos Dimension (Dash) Frame 2", 0x641ac + (43 * 0x20), 0x641cc + (43 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P2 Chaos Dimension Frame 3", 0x641ac + (39 * 0x20), 0x641cc + (39 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P2 Chaos Dimension (Dash) Frame 3", 0x641ac + (44 * 0x20), 0x641cc + (44 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P2 Chaos Dimension Frame 4", 0x641ac + (40 * 0x20), 0x641cc + (40 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P2 Chaos Dimension (Dash) Frame 4", 0x641ac + (45 * 0x20), 0x641cc + (45 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P2 Chaos Dimension Frame 5", 0x641ac + (41 * 0x20), 0x641cc + (41 * 0x20), indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P2 Chaos Dimension (Dash) Frame 5", 0x641ac + (46 * 0x20), 0x641cc + (46 * 0x20), indexCPS2Sprites_Shuma, 0x01, &pairPrevious },

    { L"P2 Mystic Smash Shadows", 0x641ac + (47 * 0x20), 0x641cc + (47 * 0x20), indexCPS2Sprites_Shuma, 0x08 },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P1[] =
{
    { L"P1 Main", 0x61C0c, 0x61C2c, indexCPS2Sprites_Spidey, 0x00, &pairNext, &secondaryMSHSpideyEffects },
    { L"P1 Spider-sense / Webs", 0x61C2c, 0x61C4c, indexCPS2Sprites_Spidey, 2, &pairPrevious },
    { L"P1 Taunt Balloon", 0x61C4c, 0x61C6c, indexCPS2Sprites_Spidey, 0xd },

    { L"P1 Intro - Frame 1", 0x6280c, 0x6282c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Intro - Frame 2", 0x6282c, 0x6284c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Intro - Frame 3", 0x6284c, 0x6286c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Intro - Frame 4", 0x6286c, 0x6288c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Intro - Frame 5", 0x6288c, 0x628ac, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Intro - Frame 6", 0x628ac, 0x628cc, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Intro - Frame 7", 0x628cc, 0x628ec, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Intro - Frame 8", 0x628ec, 0x6290c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P1 Spider symbol", 0x6290c, 0x6292c, indexCPS2Sprites_Spidey, 0x0c },
    { L"P1 Spider symbol + taunt", 0x6292c, 0x6294c, indexCPS2Sprites_Spidey, 0x0d },
    { L"P1 HEY!", 0x6294c, 0x6296c, indexCPS2Sprites_Spidey, 0x0e },
    { L"P1 Do your job!", 0x6296c, 0x6298c, indexCPS2Sprites_Spidey, 0x0f },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P2[] =
{
    { L"P2 Main", 0x61C8c, 0x61CAc, indexCPS2Sprites_Spidey, 0x00, &pairNext, &secondaryMSHSpideyEffects },
    { L"P2 Spider-sense / Webs", 0x61CAc, 0x61CCc, indexCPS2Sprites_Spidey, 2, &pairPrevious },
    { L"P2 Taunt Balloon", 0x61CCc, 0x61CEc, indexCPS2Sprites_Spidey, 0xd },

    { L"P2 Intro - Frame 1", 0x62a0c, 0x62a2c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Intro - Frame 2", 0x62a2c, 0x62a4c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Intro - Frame 3", 0x62a4c, 0x62a6c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Intro - Frame 4", 0x62a6c, 0x62a8c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Intro - Frame 5", 0x62a8c, 0x62aac, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Intro - Frame 6", 0x62aac, 0x62acc, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Intro - Frame 7", 0x62acc, 0x62aec, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Intro - Frame 8", 0x62aec, 0x62b0c, indexCPS2Sprites_Spidey, 0x0b },
    { L"P2 Spider symbol", 0x62b0c, 0x62b2c, indexCPS2Sprites_Spidey, 0x0c },
    { L"P2 Spider symbol + taunt", 0x62b2c, 0x62b4c, indexCPS2Sprites_Spidey, 0x0d },
    { L"P2 HEY!", 0x62b4c, 0x62b6c, indexCPS2Sprites_Spidey, 0x0e },
    { L"P2 Do your job!", 0x62b6c, 0x62b8c, indexCPS2Sprites_Spidey, 0x0f },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P1[] =
{
    { L"P1 Main", 0x6264c, 0x6266c, indexCPS2Sprites_Thanos, 0x00, &pairNext },
    { L"P1 Gems", 0x6266c, 0x6268c, indexCPS2Sprites_Thanos, 0x1, &pairPreviousFlipped },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P2[] =
{
    { L"P2 Main", 0x626Cc, 0x626Ec, indexCPS2Sprites_Thanos, 0x00, &pairNext },
    { L"P2 Gems", 0x626Ec, 0x6270c, indexCPS2Sprites_Thanos, 0x01, &pairPreviousFlipped },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_EXTRAS[] =
{
    { L"Recovery/Terraxia fade in", 0x6560c, 0x6562c, indexCPS2Sprites_Thanos, 0x0A, &pairNext },
    { L"Recovery/Winpose (Gems)", 0x6564c, 0x6566c, indexCPS2Sprites_Thanos, 0x0B, &pairPrevious },
    { L"Terraxia White frame", 0x6562c, 0x6564c, indexCPS2Sprites_Thanos, 0x0E },
    { L"Terraxia tan frame/Power Gem projectile flash", 0x656ac, 0x656cc, indexCPS2Sprites_Thanos, 0x0E },
    { L"Terraxia bright frame", 0x656cc, 0x656ec, indexCPS2Sprites_Thanos, 0x0E },
    { L"Terraxia final frame (P1 ONLY - P2 uses base)", 0x656ec, 0x6570c, indexCPS2Sprites_Thanos, 0x0E },	// P2 uses the base palette here
    { L"Winpose flashing", 0x6566c, 0x6568c, indexCPS2Sprites_Thanos, 0x10 },
    { L"MP Grab/Soul Gem (1/2)/Standing HP", 0x6576c, 0x6578c, indexCPS2Sprites_Thanos, 0x08 },
    { L"MP Grab/Soul Gem (2/2)", 0x6578c, 0x657ac, indexCPS2Sprites_Thanos, 0x07 },
    { L"Jumping HP", 0x657ec, 0x6580c, indexCPS2Sprites_Thanos, 0x06 },
    { L"Fire", 0x657ac, 0x657cc, indexCPS2Sprites_Thanos, 0x03 },
    { L"Rocks", 0x6572c, 0x6574c, indexCPS2Sprites_Thanos, 0x0C },
    { L"Death Sphere", 0x658cc, 0x658ec, indexCPS2Sprites_Thanos, 0x02 },
    { L"Bubble/Time Gem", 0x6580c, 0x6582c, indexCPS2Sprites_Thanos, 0x04 },
    { L"Bubble/Reality Gem", 0x6582c, 0x6584c, indexCPS2Sprites_Thanos, 0x04 },
    { L"Bubble/Soul Gem", 0x6584c, 0x6586c, indexCPS2Sprites_Thanos, 0x04 },
    { L"Bubble/Mind Gem", 0x6586c, 0x6588c, indexCPS2Sprites_Thanos, 0x04 },
    { L"Bubble/Power Gem/Titan Crush", 0x6588c, 0x658ac, indexCPS2Sprites_Thanos, 0x05 },
    { L"Bubble/Space Gem", 0x658ac, 0x658cc, indexCPS2Sprites_Thanos, 0x04 },
    { L"Time Gem projectile", 0x6574c, 0x6576c, indexCPS2Sprites_Thanos, 0x0F },
    { L"Power Gem projectile", 0x6570c, 0x6572c, indexCPS2Sprites_Thanos, 0x09 },
    { L"Space Gem portal/rocks/j2HK", 0x657cc, 0x657ec, indexCPS2Sprites_Thanos, 0x0D },

    { L"Unknown", 0x6590c, 0x6592c },
    { L"Unknown 2", 0x658ec, 0x6590c },
    { L"Unknown 3", 0x6568c, 0x656ac },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P1[] =
{
    { L"P1 Main", 0x61F8c, 0x61FAc, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMSHWolverineEffects },
    { L"P1 Claws", 0x61FAc, 0x61FCc, indexCPS2Sprites_Wolverine, 1 },
    { L"P1 Berserker Barrage", 0x61FCc, 0x61FEc, indexCPS2Sprites_Wolverine, 2 },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P2[] =
{
    { L"P2 Main", 0x6200c, 0x6202c, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMSHWolverineEffects },
    { L"P2 Claws", 0x6202c, 0x6204c, indexCPS2Sprites_Wolverine, 1 },
    { L"P2 Berserker Barrage", 0x6204c, 0x6206c, indexCPS2Sprites_Wolverine, 2 },
};

const sGame_PaletteDataset MSH_A_CSP_PALETTES[] =
{
    { L"Spider-Man P1 CSP",      0x000b180 - 0x02, 0x000b300 - 0x02, indexCPS2Sprites_Spidey, indexCSP2Images_MSH_CSPs },
    { L"Spider-Man P2 CSP",      0x000b380 - 0x02, 0x000b500 - 0x02, indexCPS2Sprites_Spidey, indexCSP2Images_MSH_CSPs },
    { L"Captain America P1 CSP", 0x000b580 - 0x02, 0x000b780 - 0x02, indexCPS2Sprites_CapAm, indexCSP2Images_MSH_CSPs },
    { L"Captain America P2 CSP", 0x000b780 - 0x02, 0x000b980 - 0x02, indexCPS2Sprites_CapAm, indexCSP2Images_MSH_CSPs },
    { L"Hulk P1 CSP",            0x000b980 - 0x02, 0x000b9e0 - 0x02, indexCPS2Sprites_Hulk, indexCSP2Images_MSH_CSPs },
    { L"Hulk P2 CSP",            0x000bb80 - 0x02, 0x000bbe0 - 0x02, indexCPS2Sprites_Hulk, indexCSP2Images_MSH_CSPs },
    { L"Iron Man P1 CSP",        0x000bd80 - 0x02, 0x000bf00 - 0x02, indexCPS2Sprites_IronMan, indexCSP2Images_MSH_CSPs },
    { L"Iron Man P2 CSP",        0x000bf80 - 0x02, 0x000c100 - 0x02, indexCPS2Sprites_IronMan, indexCSP2Images_MSH_CSPs },
    { L"Wolverine P1 CSP",       0x000c180 - 0x02, 0x000c360 - 0x02, indexCPS2Sprites_Wolverine, indexCSP2Images_MSH_CSPs },
    { L"Wolverine P2 CSP",       0x000c380 - 0x02, 0x000c560 - 0x02, indexCPS2Sprites_Wolverine, indexCSP2Images_MSH_CSPs },
    { L"Psylocke P1 CSP",        0x000c580 - 0x02, 0x000c6a0 - 0x02, indexCPS2Sprites_Psylocke, indexCSP2Images_MSH_CSPs },
    { L"Psylocke P2 CSP",        0x000c780 - 0x02, 0x000c8a0 - 0x02, indexCPS2Sprites_Psylocke, indexCSP2Images_MSH_CSPs },
    { L"Blackheart P1 CSP",      0x000c980 - 0x02, 0x000c9c0 - 0x02, indexCPS2Sprites_Blackheart, indexCSP2Images_MSH_CSPs },
    { L"Blackheart P2 CSP",      0x000cb80 - 0x02, 0x000cbc0 - 0x02, indexCPS2Sprites_Blackheart, indexCSP2Images_MSH_CSPs },
    { L"Shuma-Gorath P1 CSP",    0x000cd80 - 0x02, 0x000ce80 - 0x02, indexCPS2Sprites_Shuma, indexCSP2Images_MSH_CSPs },
    { L"Shuma-Gorath P2 CSP",    0x000cf80 - 0x02, 0x000d080 - 0x02, indexCPS2Sprites_Shuma, indexCSP2Images_MSH_CSPs },
    { L"Juggernaut P1 CSP",      0x000d180 - 0x02, 0x000d280 - 0x02, indexCPS2Sprites_Juggy, indexCSP2Images_MSH_CSPs },
    { L"Juggernaut P2 CSP",      0x000d380 - 0x02, 0x000d480 - 0x02, indexCPS2Sprites_Juggy, indexCSP2Images_MSH_CSPs },
    { L"Magneto P1 CSP",         0x000d580 - 0x02, 0x000d780 - 0x02, indexCPS2Sprites_Magneto, indexCSP2Images_MSH_CSPs },
    { L"Magneto P2 CSP",         0x000d780 - 0x02, 0x000d980 - 0x02, indexCPS2Sprites_Magneto, indexCSP2Images_MSH_CSPs },
    { L"Dr. Doom P1 CSP",        0x000d980 - 0x02, 0x000db60 - 0x02, indexCPS2Sprites_DrDoom, indexCSP2Images_MSH_CSPs },
    { L"Dr. Doom P2 CSP",        0x000db80 - 0x02, 0x000dd60 - 0x02, indexCPS2Sprites_DrDoom, indexCSP2Images_MSH_CSPs },
    { L"Thanos P1 CSP",          0x000dd80 - 0x02, 0x000df80 - 0x02, indexCPS2Sprites_Thanos, indexCSP2Images_MSH_CSPs },
    { L"Thanos P2 CSP",          0x000df80 - 0x02, 0x000e180 - 0x02, indexCPS2Sprites_Thanos, indexCSP2Images_MSH_CSPs },
};

const sGame_PaletteDataset MSH_A_VSP_PALETTES[] =
{
    { L"Spider-Man P1 VSP",         0x75F0 - 0x02, 0x7770 - 0x02, indexCPS2Sprites_Spidey, indexCSP2Images_MSH_VSPs },
    { L"Spider-Man P2 VSP",         0x88C0 - 0x02, 0x8a40 - 0x02, indexCPS2Sprites_Spidey, indexCSP2Images_MSH_VSPs },
    { L"Captain America P1 VSP",    0x7770 - 0x02, 0x7970 - 0x02, indexCPS2Sprites_CapAm, indexCSP2Images_MSH_VSPs },
    { L"Captain America P2 VSP",    0x8a40 - 0x02, 0x8C40 - 0x02, indexCPS2Sprites_CapAm, indexCSP2Images_MSH_VSPs },
    { L"Hulk P1 VSP",               0x7970 - 0x02, 0x79D0 - 0x02, indexCPS2Sprites_Hulk, indexCSP2Images_MSH_VSPs },
    { L"Hulk P2 VSP",               0x8C40 - 0x02, 0x8CA0 - 0x02, indexCPS2Sprites_Hulk, indexCSP2Images_MSH_VSPs },
    { L"Iron Man P1 VSP",           0x79D0 - 0x02, 0x7B50 - 0x02, indexCPS2Sprites_IronMan, indexCSP2Images_MSH_VSPs },
    { L"Iron Man P2 VSP",           0x8CA0 - 0x02, 0x8E20 - 0x02, indexCPS2Sprites_IronMan, indexCSP2Images_MSH_VSPs },
    { L"Wolverine P1 VSP",          0x7B50 - 0x02, 0x7D30 - 0x02, indexCPS2Sprites_Wolverine, indexCSP2Images_MSH_VSPs },
    { L"Wolverine P2 VSP",          0x8E20 - 0x02, 0x9000 - 0x02, indexCPS2Sprites_Wolverine, indexCSP2Images_MSH_VSPs },
    { L"Psylocke P1 VSP",           0x7D30 - 0x02, 0x7E50 - 0x02, indexCPS2Sprites_Psylocke, indexCSP2Images_MSH_VSPs },
    { L"Psylocke P2 VSP",           0x9000 - 0x02, 0x9120 - 0x02, indexCPS2Sprites_Psylocke, indexCSP2Images_MSH_VSPs },
    { L"Blackheart P1 VSP",         0x7E50 - 0x02, 0x7E90 - 0x02, indexCPS2Sprites_Blackheart, indexCSP2Images_MSH_VSPs },
    { L"Blackheart P2 VSP",         0x9120 - 0x02, 0x9160 - 0x02, indexCPS2Sprites_Blackheart, indexCSP2Images_MSH_VSPs },
    { L"Shuma-Gorath P1 VSP",       0x7E90 - 0x02, 0x7F90 - 0x02, indexCPS2Sprites_Shuma, indexCSP2Images_MSH_VSPs },
    { L"Shuma-Gorath P2 VSP",       0x9160 - 0x02, 0x9260 - 0x02, indexCPS2Sprites_Shuma, indexCSP2Images_MSH_VSPs },
    { L"Juggernaut P1 VSP",         0x7F90 - 0x02, 0x8090 - 0x02, indexCPS2Sprites_Juggy, indexCSP2Images_MSH_VSPs },
    { L"Juggernaut P2 VSP",         0x9260 - 0x02, 0x9360 - 0x02, indexCPS2Sprites_Juggy, indexCSP2Images_MSH_VSPs },
    { L"Magneto P1 VSP 1/2",        0x8090 - 0x02, 0x8290 - 0x02, indexCPS2Sprites_Magneto, indexCSP2Images_MSH_VSPs, &pairNext },
    { L"Magneto P1 VSP 2/2",        0x8290 - 0x02, 0x82B0 - 0x02, indexCPS2Sprites_Magneto, 0x91 },
    { L"Magneto P2 VSP 1/2",        0x9360 - 0x02, 0x9560 - 0x02, indexCPS2Sprites_Magneto, indexCSP2Images_MSH_VSPs, &pairNext },
    { L"Magneto P2 VSP 2/2",        0x9560 - 0x02, 0x9580 - 0x02, indexCPS2Sprites_Magneto, 0x91 },
    { L"Dr. Doom P1 VSP",           0x82B0 - 0x02, 0x8490 - 0x02, indexCPS2Sprites_DrDoom, indexCSP2Images_MSH_VSPs },
    { L"Dr. Doom P2 VSP",           0x9580 - 0x02, 0x9760 - 0x02, indexCPS2Sprites_DrDoom, indexCSP2Images_MSH_VSPs },
    { L"Thanos P1 VSP",             0x8490 - 0x02, 0x8630 - 0x02, indexCPS2Sprites_Thanos, indexCSP2Images_MSH_VSPs },
    { L"Thanos P2 VSP",             0x9760 - 0x02, 0x9900 - 0x02, indexCPS2Sprites_Thanos, indexCSP2Images_MSH_VSPs },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c, 0x6e38c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Burning 2/2 Light", 0x6e38c, 0x6e3ac, indexCPS2Sprites_Spidey, 0x80 },
    { L"Iced 1/2 Dark",     0x6e3ac, 0x6e3cc, indexCPS2Sprites_Spidey, 0x80 },
    { L"Iced 2/2 Light",    0x6e3cc, 0x6e3ec, indexCPS2Sprites_Spidey, 0x80 },
    { L"Stun Demons? 1/2",  0x6e3ec, 0x6e40c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Stun Demons? 2/2",  0x6e40c, 0x6e42c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Soul Drain? 1/2",   0x6e42c, 0x6e44c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Soul Drain? 2/2",   0x6e44c, 0x6e46c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6620c, 0x6622c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6640c, 0x6642c, indexCPS2Sprites_Spidey, 0x80 },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x01), 0x6e38c + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Burning 1/2 Dark",  0x6e36c + (0x100 * 0x02), 0x6e38c + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x01), 0x6e3ac + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Burning 2/2 Light", 0x6e38c + (0x100 * 0x02), 0x6e3ac + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x01), 0x6e3cc + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x02), 0x6e3cc + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x01), 0x6e3ec + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Iced 2/2 Light",    0x6e3cc + (0x100 * 0x02), 0x6e3ec + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x01), 0x6e40c + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x02), 0x6e40c + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x01), 0x6e42c + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Stun Demons? 2/2",  0x6e40c + (0x100 * 0x02), 0x6e42c + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x01), 0x6e44c + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Soul Drain? 1/2",   0x6e42c + (0x100 * 0x02), 0x6e44c + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x01), 0x6e46c + (0x100 * 0x01), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Soul Drain? 2/2",   0x6e44c + (0x100 * 0x02), 0x6e46c + (0x100 * 0x02), indexCPS2Sprites_CapAm, 0x01 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6622c, 0x6624c, indexCPS2Sprites_CapAm, 0x80 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6642c, 0x6644c, indexCPS2Sprites_CapAm, 0x80 },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x03), 0x6e38c + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x03), 0x6e3ac + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x03), 0x6e3cc + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x03), 0x6e3ec + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x03), 0x6e40c + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x03), 0x6e42c + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x03), 0x6e44c + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x03), 0x6e46c + (0x100 * 0x03), indexCPS2Sprites_Hulk, 0x00 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6624c, 0x6626c, indexCPS2Sprites_Hulk, 0x00 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6644c, 0x6646c, indexCPS2Sprites_Hulk, 0x00 },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x04), 0x6e38c + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x04), 0x6e3ac + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x04), 0x6e3cc + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x04), 0x6e3ec + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x04), 0x6e40c + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x04), 0x6e42c + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x04), 0x6e44c + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x04), 0x6e46c + (0x100 * 0x04), indexCPS2Sprites_IronMan, 0x00 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6626c, 0x6628c, indexCPS2Sprites_IronMan, 0x00 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6646c, 0x6648c, indexCPS2Sprites_IronMan, 0x00 },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x05), 0x6e38c + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x05), 0x6e3ac + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x05), 0x6e3cc + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x05), 0x6e3ec + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x05), 0x6e40c + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x05), 0x6e42c + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x05), 0x6e44c + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x05), 0x6e46c + (0x100 * 0x05), indexCPS2Sprites_Wolverine, 0x80 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6628c, 0x662ac, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6648c, 0x664ac, indexCPS2Sprites_Wolverine, 0x80 },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x06), 0x6e38c + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x06), 0x6e3ac + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x06), 0x6e3cc + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x06), 0x6e3ec + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x06), 0x6e40c + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x06), 0x6e42c + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x06), 0x6e44c + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x06), 0x6e46c + (0x100 * 0x06), indexCPS2Sprites_Psylocke, 0x00 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x662ac, 0x662cc, indexCPS2Sprites_Psylocke, 0x00 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x664ac, 0x664cc, indexCPS2Sprites_Psylocke, 0x00 },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x07), 0x6e38c + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x07), 0x6e3ac + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x07), 0x6e3cc + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x07), 0x6e3ec + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x07), 0x6e40c + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x07), 0x6e42c + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x07), 0x6e44c + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x07), 0x6e46c + (0x100 * 0x07), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x662cc, 0x662ec, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x664cc, 0x664ec, indexCPS2Sprites_Blackheart, 0x00 },
};

const sGame_PaletteDataset MSH_A_SHUMA_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x08), 0x6e38c + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x08), 0x6e3ac + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x08), 0x6e3cc + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x08), 0x6e3ec + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x08), 0x6e40c + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x08), 0x6e42c + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x08), 0x6e44c + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x08), 0x6e46c + (0x100 * 0x08), indexCPS2Sprites_Shuma, 0x80 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x662ec, 0x6630c, indexCPS2Sprites_Shuma, 0x80 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x664ec, 0x6650c, indexCPS2Sprites_Shuma, 0x80 },
};

const sGame_PaletteDataset MSH_A_JUGGERNAUT_PALETTES_STATUS[] =
{
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x09), 0x6e3ac + (0x100 * 0x09), indexCPS2Sprites_Juggy, 0x00 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x09), 0x6e3cc + (0x100 * 0x09), indexCPS2Sprites_Juggy, 0x00 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x09), 0x6e3ec + (0x100 * 0x09), indexCPS2Sprites_Juggy, 0x00 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x09), 0x6e40c + (0x100 * 0x09), indexCPS2Sprites_Juggy, 0x00 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x09), 0x6e42c + (0x100 * 0x09), indexCPS2Sprites_Juggy, 0x00 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x09), 0x6e44c + (0x100 * 0x09), indexCPS2Sprites_Juggy, 0x00 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x09), 0x6e46c + (0x100 * 0x09), indexCPS2Sprites_Juggy, 0x00 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6630c, 0x6632c, indexCPS2Sprites_Juggy, 0x00 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6650c, 0x6652c, indexCPS2Sprites_Juggy, 0x00 },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x0a), 0x6e38c + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x0a), 0x6e3ac + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x0a), 0x6e3cc + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x0a), 0x6e3ec + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x0a), 0x6e40c + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x0a), 0x6e42c + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x0a), 0x6e44c + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x0a), 0x6e46c + (0x100 * 0x0a), indexCPS2Sprites_Magneto, 0x00 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6632c, 0x6634c, indexCPS2Sprites_Magneto, 0x00 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6652c, 0x6654c, indexCPS2Sprites_Magneto, 0x00 },
};

const sGame_PaletteDataset MSH_A_DOOM_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x0b), 0x6e38c + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x0b), 0x6e3ac + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x0b), 0x6e3cc + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x0b), 0x6e3ec + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x0b), 0x6e40c + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x0b), 0x6e42c + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x0b), 0x6e44c + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x0b), 0x6e46c + (0x100 * 0x0b), indexCPS2Sprites_DrDoom, 0x00 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6634c, 0x6636c, indexCPS2Sprites_DrDoom},
    { L"Soul Gem Slowdown 2/2 Blue", 0x6654c, 0x6656c, indexCPS2Sprites_DrDoom, 0x00 },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36c + (0x100 * 0x0c), 0x6e38c + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Burning 2/2 Light", 0x6e38c + (0x100 * 0x0c), 0x6e3ac + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Iced 1/2 Dark",     0x6e3ac + (0x100 * 0x0c), 0x6e3cc + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Iced 2/2 Light",    0x6e3cc + (0x100 * 0x0c), 0x6e3ec + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Stun Demons? 1/2",  0x6e3ec + (0x100 * 0x0c), 0x6e40c + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Stun Demons? 2/2",  0x6e40c + (0x100 * 0x0c), 0x6e42c + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Soul Drain? 1/2",   0x6e42c + (0x100 * 0x0c), 0x6e44c + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Soul Drain? 2/2",   0x6e44c + (0x100 * 0x0c), 0x6e46c + (0x100 * 0x0c), indexCPS2Sprites_Thanos, 0x80 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6636c, 0x6638c, indexCPS2Sprites_Thanos, 0x80 },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6656c, 0x6658c, indexCPS2Sprites_Thanos, 0x80 },
};

const sGame_PaletteDataset MSH_A_BONUS_GEMS_PALETTES[] =
{
    { L"Time Gem, Soul Gem",    0x6A72c, 0x6A74c },
    { L"Space Gem, Power Gem",  0x6A74c, 0x6A76c },
    { L"Reality Gem",           0x6B66c, 0x6B68c },
    { L"Mind Gem",              0x6B60c, 0x6B62c },
};

const sGame_PaletteDataset MSH_A_BONUS_MINDGEM_PALETTES[] =
{
    // Thanos Mind Gem status effect - MSH
    { L"Spider-Man P1",             0x65E0c, 0x65E2c, indexCPS2Sprites_Spidey },
    { L"Captain America P1",        0x65E2c, 0x65E4c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Captain America P1 Shield", 0x65FAc, 0x65FCc, indexCPS2Sprites_CapAm, 0x01, &pairPrevious },
    { L"Hulk P1",                   0x65E4c, 0x65E6c, indexCPS2Sprites_Hulk },
    { L"Iron Man P1",               0x65E6c, 0x65E8c, indexCPS2Sprites_IronMan },
    { L"Wolverine P1",              0x65E8c, 0x65EAc, indexCPS2Sprites_Wolverine },
    { L"Psylocke P1",               0x65EAc, 0x65ECc, indexCPS2Sprites_Psylocke },
    { L"Blackheart P1",             0x65ECc, 0x65EEc, indexCPS2Sprites_Blackheart },
    { L"Shuma-Gorath P1",           0x65EEc, 0x65F0c, indexCPS2Sprites_Shuma },
    { L"Juggernaut P1",             0x65F0c, 0x65F2c, indexCPS2Sprites_Juggy },
    { L"Magneto P1",                0x65F2c, 0x65F4c, indexCPS2Sprites_Magneto },
    { L"Dr. Doom P1",               0x65F4c, 0x65F6c, indexCPS2Sprites_DrDoom },
    { L"Thanos P1",                 0x65F6c, 0x65F8c, indexCPS2Sprites_Thanos },
    { L"Anita P1",                  0x65F8c, 0x65FAc, indexCPS2Sprites_Anita },

    { L"Spider-Man P2",             0x6600c, 0x6602c, indexCPS2Sprites_Spidey },
    { L"Captain America P2",        0x6602c, 0x6604c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Captain America P2 Shield", 0x661Ac, 0x661Cc, indexCPS2Sprites_CapAm, 0x01, &pairPrevious },
    { L"Hulk P2",                   0x6604c, 0x6606c, indexCPS2Sprites_Hulk },
    { L"Iron Man P2",               0x6606c, 0x6608c, indexCPS2Sprites_IronMan },
    { L"Wolverine P2",              0x6608c, 0x660Ac, indexCPS2Sprites_Wolverine },
    { L"Psylocke P2",               0x660Ac, 0x660Cc, indexCPS2Sprites_Psylocke },
    { L"Blackheart P2",             0x660Cc, 0x660Ec, indexCPS2Sprites_Blackheart },
    { L"Shuma-Gorath P2",           0x660Ec, 0x6610c, indexCPS2Sprites_Shuma },
    { L"Juggernaut P2",             0x6610c, 0x6612c, indexCPS2Sprites_Juggy },
    { L"Magneto P2",                0x6612c, 0x6614c, indexCPS2Sprites_Magneto },
    { L"Dr. Doom P2",               0x6614c, 0x6616c, indexCPS2Sprites_DrDoom },
    { L"Thanos P2",                 0x6616c, 0x6618c, indexCPS2Sprites_Thanos },
    { L"Anita P2",                  0x6618c, 0x661Ac, indexCPS2Sprites_Anita },
};

const sGame_PaletteDataset MSH_A_BONUS_CSI_PALETTES[] =
{
#ifndef WantIndividualPalettes
    { L"Character Select Icons", 0x6b2ec, 0x6b48c, indexCPS2Sprites_MSHAssets, 0x1f },
#else
    { L"Spider-Man",        0x6B2Ea, 0x6B30a },
    { L"Captain America",   0x6B30a, 0x6B32a },
    { L"Hulk",              0x6B32a, 0x6B34a },
    { L"Iron Man",          0x6B34a, 0x6B36a },
    { L"Wolverine",         0x6B36a, 0x6B3Aa },
    //{ L"Wolverine Pt.2",  0x6B38a, 0x6B3Aa },
    { L"Psylocke",          0x6B3Aa, 0x6B3Ea },
    //{ L"Psylocke Pt.2",   0x6B3Ca, 0x6B3Ea },
    { L"BlackHeart",        0x6B3Ea, 0x6B40a },
    { L"Shuma-Gorath",      0x6B40a, 0x6B42a },
    { L"Juggernaut",        0x6B42a, 0x6B44a },
    { L"Magneto",           0x6B44a, 0x6B46a },
#endif
};

const sGame_PaletteDataset MSH_A_BONUS_TITLE_05_PALETTES[] =
{
    { L"Title Screen Gems",                 0x6CB0c, 0x6CBCc, indexCPS2Sprites_MSHAssets, 0x02 },
    { L"Title Screen Outline",              0x6CC6c, 0x6CC8c, indexCPS2Sprites_MSHAssets, 0x03, &pairNext3Palettes },
    { L"Title Screen Fill",                 0x75B40 - 0x02, 0x75BC0 - 0x02, indexCPS2Sprites_MSHAssets, 0x04 },
    { L"Title Screen Marvel Sparkles",      0x6C00c, 0x6C02c, indexCPS2Sprites_MSHAssets, 0x07 },
    { L"Title Screen Marvel Comics",        0x6CBCc, 0x6CBEc, indexCPS2Sprites_MSHAssets, 0x05 },
    { L"Title Screen Marvel Fill Moving",   0x6CBEc, 0x6CC6c, indexCPS2Sprites_MSHAssets, 0x06 },
    { L"Virtual Audio QSound",              0x75AE0 - 0x02, 0x75B40 - 0x02, indexCPS2Sprites_MSHAssets, 0x0a },

    { L"Ryu Globe",                         0x758E0 - 0x02, 0x75900 - 0x02, indexCPS2Sprites_MSHAssets, 0x0c },
    { L"Capcom Logo",                       0x6CA6c, 0x6CA8c, indexCPS2Sprites_MSHAssets, 0x0d },
    { L"Intro Spiderman",                   0x6C3Ac, 0x6C40c, indexCPS2Sprites_MSHAssets, 0x10 },
    { L"Intro Wolverine",                   0x6C5Ec, 0x6C6Ec, indexCPS2Sprites_MSHAssets, 0x13 },
    { L"Intro CapAmerica",                  0x6C42c, 0x6C5Cc, indexCPS2Sprites_MSHAssets, 0x16 },
    { L"Spinning Gems",                     0x6C7Cc, 0x6C88c, indexCPS2Sprites_MSHAssets, 0x0e },
    { L"Flying Gems (Psylocke Hulk)",       0x6C88c, 0x6C94c, indexCPS2Sprites_MSHAssets, 0x0f },
    { L"Gem Ripple",                        0x6C72c, 0x6C74c, indexCPS2Sprites_MSHAssets, 0x1e },
};

const sGame_PaletteDataset MSH_A_BONUS_05_VSNAME_PALETTES[] =
{
    //{ L"Dr. Doom Vs Name",  0x6108C, 0x610AC },
    { L"Character VS Names", 0x60f4c, 0x610cc, indexCPS2Sprites_MSHAssets, 0x20 },
};

const sGame_PaletteDataset MSH_A_BONUS_TITLE_06_PALETTES[] =
{
    { L"Title Screen Space BG",         0x7340 - 0x02, 0x7380 - 0x02, indexCPS2Sprites_MSHAssets, 0x00, &pairNext },
    { L"Title Screen Gauntlet",         0x22A0 - 0x02, 0x22E0 - 0x02, indexCPS2Sprites_MSHAssets, 0x01 },
    { L"QSound Text",                   0x10B00 - 0x02, 0x10B20 - 0x02, indexCPS2Sprites_MSHAssets, 0x0b },
    { L"Intro Ironman BG",              0x7220 - 0x02, 0x7240 - 0x02, indexCPS2Sprites_MSHAssets, 0x08 },
    { L"Intro Magnus BG",               0x7300 - 0x02, 0x7320 - 0x02, indexCPS2Sprites_MSHAssets, 0x09 },
    { L"Intro Blackheart",              0x1280 - 0x02, 0x12C0 - 0x02, indexCPS2Sprites_MSHAssets, 0x14 },
    { L"Intro: BH vs Wolv BG",          0x71E0 - 0x02, 0x7200 - 0x02, indexCPS2Sprites_MSHAssets, 0x15 },
    { L"Intro Psylocke Pt1",            0x0E80 - 0x02, 0x1080 - 0x02, indexCPS2Sprites_MSHAssets, 0x1b, &pairNext },
    { L"Intro Psylocke Pt2",            0x1080 - 0x02, 0x1280 - 0x02, indexCPS2Sprites_MSHAssets, 0x1c },
    { L"Intro: Psylocke BG",            0x7200 - 0x02, 0x7220 - 0x02, indexCPS2Sprites_MSHAssets, 0x1d },
    { L"Intro Ironman Pt1 Frame 1",     0xA80 - 0x02, 0xAA0 - 0x02, indexCPS2Sprites_MSHAssets, 0x19, &pairNext4 },
    { L"Intro Ironman Pt2 Frame 1",     0xAA0 - 0x02, 0xAC0 - 0x02, indexCPS2Sprites_MSHAssets, 0x19, &pairNext4 },
    { L"Intro Ironman Pt1 Frame 2",     0xAE0 - 0x02, 0xB00 - 0x02, indexCPS2Sprites_MSHAssets, 0x19, &pairNext4 },
    { L"Intro Ironman Pt1 Frame 3",     0xB00 - 0x02, 0xB20 - 0x02, indexCPS2Sprites_MSHAssets, 0x19, &pairNext4 },
    { L"Intro Ironman Pt1 Frame 4",     0xB20 - 0x02, 0xB40 - 0x02, indexCPS2Sprites_MSHAssets, 0x1a },
    { L"Intro Ironman Pt2 Frame 2",     0xB60 - 0x02, 0xB80 - 0x02, indexCPS2Sprites_MSHAssets, 0x1a },
    { L"Intro Ironman Pt2 Frame 3",     0xB80 - 0x02, 0xBA0 - 0x02, indexCPS2Sprites_MSHAssets, 0x1a },
    { L"Intro Ironman Pt2 Frame 4",     0xBA0 - 0x02, 0xBC0 - 0x02, indexCPS2Sprites_MSHAssets, 0x1a },
    { L"Intro Shuma",                   0x1680 - 0x02, 0x1800 - 0x02, indexCPS2Sprites_MSHAssets, 0x17 },
    { L"Intro: Cap vs Shuma BG",        0x7240 - 0x02, 0x7260 - 0x02, indexCPS2Sprites_MSHAssets, 0x18 },
    { L"Intro Juggernaut",              0x1A80 - 0x02, 0x1C20 - 0x02, indexCPS2Sprites_MSHAssets, 0x11 },
    { L"Intro: Spiderman vs Juggs BG",  0x7260 - 0x02, 0x7280 - 0x02, indexCPS2Sprites_MSHAssets, 0x12 },
};


// This is present but using a base palette not effects colors
//{ L"Soul Gem Slowdown 1/2", 0x6638c, 0x663ac, indexCPS2Sprites_Anita },
//{ L"Soul Gem Slowdown 2/2", 0x6658c, 0x665ac, indexCPS2Sprites_Anita },
// This is present but not correct for the ST Akuma sprite
//{ L"Soul Gem Slowdown 1/2", 0x663ac, 0x663cc, indexCPS2Sprites_STAkuma },
//{ L"Soul Gem Slowdown 2/2", 0x665ac, 0x665cc, indexCPS2Sprites_STAkuma },

const sDescTreeNode MSH_A_ANITA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_PALETTES_P1,            ARRAYSIZE(MSH_A_ANITA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_PALETTES_P2,            ARRAYSIZE(MSH_A_ANITA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_PALETTES_SHARED,    ARRAYSIZE(MSH_A_ANITA_PALETTES_SHARED) },
};

const sDescTreeNode MSH_A_BLACKHEART_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_PALETTES_P1,       ARRAYSIZE(MSH_A_BLACKHEART_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_PALETTES_P2,       ARRAYSIZE(MSH_A_BLACKHEART_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_PALETTES_STATUS, ARRAYSIZE(MSH_A_BLACKHEART_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_CAPTAINAMERICA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_PALETTES_P1,   ARRAYSIZE(MSH_A_CAPTAINAMERICA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_PALETTES_P2,   ARRAYSIZE(MSH_A_CAPTAINAMERICA_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_PALETTES_STATUS, ARRAYSIZE(MSH_A_CAPTAINAMERICA_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_DRDOOM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_P1,           ARRAYSIZE(MSH_A_DRDOOM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_P2,           ARRAYSIZE(MSH_A_DRDOOM_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_EXTRAS,   ARRAYSIZE(MSH_A_DRDOOM_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_DOOM_PALETTES_STATUS, ARRAYSIZE(MSH_A_DOOM_PALETTES_STATUS) },
    { L"Unused", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_UNUSED,   ARRAYSIZE(MSH_A_DRDOOM_PALETTES_UNUSED) },
};

const sDescTreeNode MSH_A_HULK_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_HULK_PALETTES_P1,             ARRAYSIZE(MSH_A_HULK_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_HULK_PALETTES_P2,             ARRAYSIZE(MSH_A_HULK_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_HULK_PALETTES_STATUS, ARRAYSIZE(MSH_A_HULK_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_IRONMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_P1,          ARRAYSIZE(MSH_A_IRONMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_P2,          ARRAYSIZE(MSH_A_IRONMAN_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_SHARED,  ARRAYSIZE(MSH_A_IRONMAN_PALETTES_SHARED) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_STATUS, ARRAYSIZE(MSH_A_IRONMAN_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_JUGGY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_P1,            ARRAYSIZE(MSH_A_JUGGY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_P2,            ARRAYSIZE(MSH_A_JUGGY_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_EXTRAS,    ARRAYSIZE(MSH_A_JUGGY_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGERNAUT_PALETTES_STATUS, ARRAYSIZE(MSH_A_JUGGERNAUT_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_MAGNETO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_PALETTES_P1,          ARRAYSIZE(MSH_A_MAGNETO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_PALETTES_P2,          ARRAYSIZE(MSH_A_MAGNETO_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_PALETTES_STATUS, ARRAYSIZE(MSH_A_MAGNETO_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_PSYLOCKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_PALETTES_P1,         ARRAYSIZE(MSH_A_PSYLOCKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_PALETTES_P2,         ARRAYSIZE(MSH_A_PSYLOCKE_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_PALETTES_STATUS, ARRAYSIZE(MSH_A_PSYLOCKE_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_SHUMA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_PALETTES_P1,            ARRAYSIZE(MSH_A_SHUMA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_PALETTES_P2,            ARRAYSIZE(MSH_A_SHUMA_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_PALETTES_STATUS, ARRAYSIZE(MSH_A_SHUMA_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_SPIDERMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_PALETTES_P1,        ARRAYSIZE(MSH_A_SPIDERMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_PALETTES_P2,        ARRAYSIZE(MSH_A_SPIDERMAN_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_PALETTES_STATUS, ARRAYSIZE(MSH_A_SPIDERMAN_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_THANOS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_P1,           ARRAYSIZE(MSH_A_THANOS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_P2,           ARRAYSIZE(MSH_A_THANOS_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_EXTRAS,   ARRAYSIZE(MSH_A_THANOS_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_STATUS, ARRAYSIZE(MSH_A_THANOS_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_WOLVERINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_PALETTES_P1,        ARRAYSIZE(MSH_A_WOLVERINE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_PALETTES_P2,        ARRAYSIZE(MSH_A_WOLVERINE_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_PALETTES_STATUS, ARRAYSIZE(MSH_A_WOLVERINE_PALETTES_STATUS) },
};

const sDescTreeNode MSH_A_CSP_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSH_A_CSP_PALETTES,           ARRAYSIZE(MSH_A_CSP_PALETTES) },
};

const sDescTreeNode MSH_A_VSP_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSH_A_VSP_PALETTES,           ARRAYSIZE(MSH_A_VSP_PALETTES) },
};

const sDescTreeNode MSH_A_BONUS_05_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_CSI_PALETTES, ARRAYSIZE(MSH_A_BONUS_CSI_PALETTES) },
    { L"Gems", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_GEMS_PALETTES, ARRAYSIZE(MSH_A_BONUS_GEMS_PALETTES) },
    { L"Mind Gem Effects", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_MINDGEM_PALETTES, ARRAYSIZE(MSH_A_BONUS_MINDGEM_PALETTES) },
    { L"Title Screen (05 elements)", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_TITLE_05_PALETTES, ARRAYSIZE(MSH_A_BONUS_TITLE_05_PALETTES) },
    { L"VS Names", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_05_VSNAME_PALETTES, ARRAYSIZE(MSH_A_BONUS_05_VSNAME_PALETTES) },
};

const sDescTreeNode MSH_A_BONUS_06_COLLECTION[] =
{
    { L"Title Screen (06 elements)", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_TITLE_06_PALETTES, ARRAYSIZE(MSH_A_BONUS_TITLE_06_PALETTES) },
};

const sDescTreeNode MSH_UNITS_05[] =
{
    { L"Blackheart",                    DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_COLLECTION,       ARRAYSIZE(MSH_A_BLACKHEART_COLLECTION) },
    { L"Captain America",               DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_COLLECTION,   ARRAYSIZE(MSH_A_CAPTAINAMERICA_COLLECTION) },
    { L"Doctor Doom",                   DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_COLLECTION,           ARRAYSIZE(MSH_A_DRDOOM_COLLECTION) },
    { L"Hulk",                          DESC_NODETYPE_TREE, (void*)MSH_A_HULK_COLLECTION,             ARRAYSIZE(MSH_A_HULK_COLLECTION) },
    { L"Iron Man",                      DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_COLLECTION,          ARRAYSIZE(MSH_A_IRONMAN_COLLECTION) },
    { L"Juggernaut",                    DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_COLLECTION,            ARRAYSIZE(MSH_A_JUGGY_COLLECTION) },
    { L"Magneto",                       DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_COLLECTION,          ARRAYSIZE(MSH_A_MAGNETO_COLLECTION) },
    { L"Psylocke",                      DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_COLLECTION,         ARRAYSIZE(MSH_A_PSYLOCKE_COLLECTION) },
    { L"Shuma-Gorath",                  DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_COLLECTION,            ARRAYSIZE(MSH_A_SHUMA_COLLECTION) },
    { L"Spider-Man",                    DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_COLLECTION,        ARRAYSIZE(MSH_A_SPIDERMAN_COLLECTION) },
    { L"Thanos",                        DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_COLLECTION,           ARRAYSIZE(MSH_A_THANOS_COLLECTION) },
    { L"Wolverine",                     DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_COLLECTION,        ARRAYSIZE(MSH_A_WOLVERINE_COLLECTION) },
    { L"Anita (Japan-only)",            DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_COLLECTION,            ARRAYSIZE(MSH_A_ANITA_COLLECTION) },
    { L"Bonus Palettes",                DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_05_COLLECTION,         ARRAYSIZE(MSH_A_BONUS_05_COLLECTION) },
};

const sDescTreeNode MSH_UNITS_06[] =
{
    { L"Character Select Portraits",    DESC_NODETYPE_TREE, (void*)MSH_A_CSP_COLLECTION,              ARRAYSIZE(MSH_A_CSP_COLLECTION) },
    { L"Victory Screen Portraits",      DESC_NODETYPE_TREE, (void*)MSH_A_VSP_COLLECTION,              ARRAYSIZE(MSH_A_VSP_COLLECTION) },
    { L"Bonus Palettes",                DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_06_COLLECTION,         ARRAYSIZE(MSH_A_BONUS_06_COLLECTION) },
};

const sDescTreeNode MSH_UNITS_STEAM[] =
{
    { L"Blackheart",                    DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_COLLECTION,       ARRAYSIZE(MSH_A_BLACKHEART_COLLECTION) },
    { L"Captain America",               DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_COLLECTION,   ARRAYSIZE(MSH_A_CAPTAINAMERICA_COLLECTION) },
    { L"Doctor Doom",                   DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_COLLECTION,           ARRAYSIZE(MSH_A_DRDOOM_COLLECTION) },
    { L"Hulk",                          DESC_NODETYPE_TREE, (void*)MSH_A_HULK_COLLECTION,             ARRAYSIZE(MSH_A_HULK_COLLECTION) },
    { L"Iron Man",                      DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_COLLECTION,          ARRAYSIZE(MSH_A_IRONMAN_COLLECTION) },
    { L"Juggernaut",                    DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_COLLECTION,            ARRAYSIZE(MSH_A_JUGGY_COLLECTION) },
    { L"Magneto",                       DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_COLLECTION,          ARRAYSIZE(MSH_A_MAGNETO_COLLECTION) },
    { L"Psylocke",                      DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_COLLECTION,         ARRAYSIZE(MSH_A_PSYLOCKE_COLLECTION) },
    { L"Shuma-Gorath",                  DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_COLLECTION,            ARRAYSIZE(MSH_A_SHUMA_COLLECTION) },
    { L"Spider-Man",                    DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_COLLECTION,        ARRAYSIZE(MSH_A_SPIDERMAN_COLLECTION) },
    { L"Thanos",                        DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_COLLECTION,           ARRAYSIZE(MSH_A_THANOS_COLLECTION) },
    { L"Wolverine",                     DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_COLLECTION,        ARRAYSIZE(MSH_A_WOLVERINE_COLLECTION) },
    { L"Anita (Japan-only)",            DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_COLLECTION,            ARRAYSIZE(MSH_A_ANITA_COLLECTION) },
    { L"Character Select Portraits",    DESC_NODETYPE_TREE, (void*)MSH_A_CSP_COLLECTION,              ARRAYSIZE(MSH_A_CSP_COLLECTION) },
    { L"Victory Screen Portraits",      DESC_NODETYPE_TREE, (void*)MSH_A_VSP_COLLECTION,              ARRAYSIZE(MSH_A_VSP_COLLECTION) },
    { L"ROM05 Bonus Palettes",          DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_05_COLLECTION,         ARRAYSIZE(MSH_A_BONUS_05_COLLECTION) },
    { L"ROM06 Bonus Palettes",          DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_06_COLLECTION,         ARRAYSIZE(MSH_A_BONUS_06_COLLECTION) },
};

#pragma once

const std::vector<uint16_t> MSHVSF_A_IMGIDS_USED =
{
    indexCPS2Sprites_Ryu,
    indexCPS2Sprites_Zangief,
    indexCPS2Sprites_Cyclops,
    indexCPS2Sprites_Wolverine,
    indexCPS2Sprites_CapAm,
    indexCPS2Sprites_Spidey,
    indexCPS2Sprites_Hulk,
    indexCPS2Sprites_Akuma,
    indexCPS2Sprites_ChunLi,
    indexCPS2Sprites_Charlie,
    indexCPS2Sprites_Sakura,
    indexCPS2Sprites_Dan,
    indexCPS2Sprites_Dhalsim,      // 0x25
    indexCPS2Sprites_Bison,        // 0x26
    indexCPS2Sprites_Ken,          // 0x27
    indexCPS2Sprites_Shuma,        // 0x2D
    indexCPS2Sprites_OmegaRed,     // 0x30
    indexCPS2Sprites_Blackheart,   // 0x35
    indexCPS2Sprites_Apocalypse,   // 0x4f
    indexCPS2Sprites_Norimaro,     // 0x53
    indexCPS2Sprites_CyberAkuma,   // 0x54 - Cyber Gouki
    indexCPS2Sprites_MSHVSFAssets, // 0x55 - HUD, stages
};

#pragma region SecondaryPaletteEffects

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Cyclops =
{
    // there are 8 intro frames
    { SUPP_NODE, 0x04, 8,
        MOD_LUM, 1, 15, NEG + 3 },
    { SUPP_NODE, 0x05, 8,
        MOD_LUM, 1, 15, NEG + 7 },
    { SUPP_NODE, 0x06, 8,
        MOD_LUM, 1, 15, NEG + 11 },
    { SUPP_NODE, 0x07, 8,
        MOD_LUM, 1, 15, NEG + 17 },
    { SUPP_NODE, 0x08, 8,
        MOD_LUM, 1, 15, NEG + 24 },
    { SUPP_NODE, 0x09, 8,
        MOD_LUM, 1, 15, NEG + 30 },
    { SUPP_NODE, 0x0a, 8,
        MOD_LUM, 1, 15, NEG + 33 },
    { SUPP_NODE, 0x0b, 8,
        MOD_LUM, 1, 15, NEG + 39 },

    // Mega Optic Blast Stance
    // default color slightly darkened
    { SUPP_NODE, 0x0c, 2,
        MOD_LUM, 1, 15, NEG + 2 },
    // default color with red tint
    { SUPP_NODE, 0x0d, 2,
        MOD_TINT, 1, 15, 1, 5, NEG + 1, NEG + 1 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Dhalsim =
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
    // last frame is solid white, ignore
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Norimaro =
{
    // Throw rage
    { SUPP_NODE, 0x01, 2,
        MOD_TINT, 2, 5, 1, 3, NEG + 3, NEG + 3 },
    // Stunned: brightened version of normal palette
    { SUPP_NODE, 0x02, 2,
        MOD_LUM, 1, 15, 20 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_OmegaRed =
{
    //Omega Red: intro frames
    { SUPP_NODE, 0x01, 4,
            MOD_LUM, 1, 15, 25 + NEG },
    { SUPP_NODE, 0x02, 4,
            MOD_LUM, 1, 15, 12 + NEG },
    { SUPP_NODE, 0x03, 4,
            MOD_LUM, 1, 15, 9 + NEG },
    { SUPP_NODE, 0x04, 4,
            MOD_LUM, 1, 15, 5 + NEG },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Sakura =
{
    //Kei should have the same outfit
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x03, 0,
        MOD_COPY, 9, 7, 9 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Shuma =
{
    // We don't expose the unused blue palettes here, so this sort is different than MSH
    // 
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

    // 10 unexposed blue palettes
    // 10 unchanged life drain palettes

    // HP Flash frames: 7 frames
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x17, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x18, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x19, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1a, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1b, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1c, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1d, 0x30, MOD_COPY, 2, 7, 2 },

    // Chaos Dimension: 5 paired frames: same sort as MvC2
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1e, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 65,
        MOD_LUM, 2, 7, 17,
        MOD_LUM, 9, 3, 10 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1f, 0x30,
        MOD_COPY, 1, 8, 1,
        MOD_LUM, 1, 8, 5 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x20, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 45,
        MOD_LUM, 2, 7, 13 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x21, 0x30,
        MOD_COPY, 1, 8, 1,
        MOD_LUM, 1, 8, 10 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x22, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 35,
        MOD_LUM, 2, 7, 14 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x23, 0x30,
        MOD_COPY, 1, 8, 1,
        MOD_LUM, 1, 8, 15 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x24, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_COPY, 9, 3, 9,
        MOD_SAT, 2, 7, NEG + 25,
        MOD_LUM, 2, 7, 17 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x25, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_LUM, 1, 8, 20 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x26, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_COPY, 9, 3, 9,
        MOD_SAT, 2, 7, NEG + 15,
        MOD_LUM, 2, 7, 20,
        MOD_LUM, 9, 3, 10 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x27, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_LUM, 1, 8, 25 },

    // Mystic Smash Shadows
    { SUPP_NODE, 0x28, 0x30,
        MOD_LUM, 1, 15, NEG + 20 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Spidey =
{
    // Taunt balloon: we don't touch

    // Intros 1-8
    { SUPP_NODE, 0x07, 16,
        MOD_LUM, 01, 10, NEG + 29 },
    { SUPP_NODE, 0x08, 16,
        MOD_LUM, 01, 10, NEG + 23 },
    { SUPP_NODE, 0x09, 16,
        MOD_LUM, 01, 10, NEG + 17 },
    { SUPP_NODE, 0x0a, 16,
        MOD_LUM, 01, 10, NEG + 12 },
    { SUPP_NODE, 0x0b, 16,
        MOD_LUM, 01, 10, NEG + 8 },
    { SUPP_NODE, 0x0c, 16,
        MOD_LUM, 01, 10, NEG + 7 },
    { SUPP_NODE, 0x0d, 16,
        MOD_LUM, 01, 10, NEG + 5 },
    { SUPP_NODE, 0x0e, 16,
        MOD_LUM, 01, 10, NEG + 3 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Wolverine =
{
    // his berserker barrage trails a bit of his costume.
    { SUPP_NODE | SUPP_NODE_NOCOPY, 2, 8,
        MOD_COPY,  2, 1, 12,
        MOD_COPY, 11, 1, 13,
        MOD_COPY, 10, 1, 14,
        MOD_COPY,  9, 1, 15 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Zangief =
{
    // 3 FAB rage palettes
    { SUPP_NODE, 0x03, 3,
        MOD_TINT, 1, 7, 1, 2, NEG + 2, NEG + 2 }, // ~15% tint
    { SUPP_NODE, 0x04, 3,
        MOD_TINT, 1, 7, 1, 4, NEG + 4, NEG + 4 }, // ~35% tint
    { SUPP_NODE, 0x05, 3,
        MOD_TINT, 1, 7, 1, 7, NEG + 6, NEG + 6 }, // ~75% tint
};

const stPaletteProcessingInformation secondaryMSHVSFCyclopsEffects{ paletteBuddy_MSHVSF_Cyclops };
const stPaletteProcessingInformation secondaryMSHVSFDhalsimEffects{ paletteBuddy_MSHVSF_Dhalsim };
const stPaletteProcessingInformation secondaryMSHVSFNorimaroEffects{ paletteBuddy_MSHVSF_Norimaro };
const stPaletteProcessingInformation secondaryMSHVSFOmegaRedEffects{ paletteBuddy_MSHVSF_OmegaRed };
const stPaletteProcessingInformation secondaryMSHVSFSakuraEffects{ paletteBuddy_MSHVSF_Sakura };
const stPaletteProcessingInformation secondaryMSHVSFShumaEffects{ paletteBuddy_MSHVSF_Shuma };
const stPaletteProcessingInformation secondaryMSHVSFSpideyEffects{ paletteBuddy_MSHVSF_Spidey };
const stPaletteProcessingInformation secondaryMSHVSFWolverineEffects{ paletteBuddy_MSHVSF_Wolverine };
const stPaletteProcessingInformation secondaryMSHVSFZangiefEffects{ paletteBuddy_MSHVSF_Zangief };

#pragma endregion

const sGame_PaletteDataset MSHVSF_A_APOCALYPSE_PALETTES_SHARED[] =
{
    { L"Small Body (Intro)", 0x71ECc, 0x71EEc, indexCPS2Sprites_Apocalypse, 0x00 },
    { L"Giant Head",         0x71E8c, 0x71EAc, indexCPS2Sprites_Apocalypse, 0x01 },
    { L"Giant Body",         0x59EF2, 0x59F32, indexCPS2Sprites_Apocalypse, 0x03 },
    { L"Giant Arm",          0x71E6c, 0x71E8c, indexCPS2Sprites_Apocalypse, 0x02 },
    { L"Shoulder Gun",       0x71EAc, 0x71ECc, indexCPS2Sprites_Apocalypse, 0x04 },
    { L"Shockwave",          0x71EEc, 0x71F0c },
    { L"?",                  0x71F0c, 0x71F2c },
    { L"Apocalypse Drone",   0x71F2c, 0x71F4c, indexCPS2Sprites_Apocalypse, 0x05 },
    { L"Hand: Mace and Drill", 0x71F4c, 0x71F6c, indexCPS2Sprites_Apocalypse, 0x06 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",             0x7340c, 0x7342c, indexCPS2Sprites_Spidey, 0x00, &pairNext },
    { L"P Spider-sense / Webs", 0x7342c, 0x7344c, indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"P Spotlight 1",         0x7344c, 0x7346c, indexCPS2Sprites_Spidey, 13 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",             0x7346c, 0x7348c, indexCPS2Sprites_Spidey, 0x00, &pairNext },
    { L"K Spider-sense / Webs", 0x7348c, 0x734Ac, indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"K Spotlight 1",         0x734Ac, 0x734cc, indexCPS2Sprites_Spidey, 13 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",       0x7258c, 0x725Ac, indexCPS2Sprites_Blackheart },
    { L"Unused Dark Thunder",    0x725Ac, 0x725Cc, indexCPS2Sprites_Blackheart, 0x01 },
    { L"P HP/HK Demons (hurt)", 0x725Cc, 0x725Ec, indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x725Ec, 0x7260c, indexCPS2Sprites_Blackheart },
    { L"Unused Dark Thunder",    0x7260c, 0x7262c, indexCPS2Sprites_Blackheart, 0x01 },
    { L"K HP/HK Demons (hurt)", 0x7262c, 0x7264c, indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",        0x7334c, 0x7336c, indexCPS2Sprites_Blackheart },
    { L"Unused Dark Thunder",     0x7336c, 0x7338c, indexCPS2Sprites_Blackheart, 0x01 },
    { L"P HP/HK Demons (hurt)", 0x7338c, 0x733Ac, indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",          0x733Ac, 0x733Cc, indexCPS2Sprites_Blackheart },
    { L"Unused Dark Thunder",      0x733cc, 0x733ec, indexCPS2Sprites_Blackheart, 0x01 },
    { L"K HP/HK Demons (hurt)", 0x733Ec, 0x7340c, indexCPS2Sprites_Blackheart, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED[] =
{
    //{ L"P Extras 1?", 0x76BEc, 0x76C0c }, // doesn't match mvc2 anything bugbug
    { L"P HP/HK Demons", 0x769Cc, 0x769Ec, indexCPS2Sprites_Blackheart, 0x02 },
    { L"K HP/HK Demons", 0x76B4c, 0x76B6c, indexCPS2Sprites_Blackheart, 0x02 },
    { L"Dark Thunder (HCF+P)", 0x769Ec, 0x76A0c, indexCPS2Sprites_Blackheart, 0x01 },
    { L"Thunder Inferno (HCB+LP)", 0x76A0c, 0x76A2c, indexCPS2Sprites_Blackheart, 0x09 },
    { L"Ice Inferno (HCB+MP)", 0x76A2c, 0x76A4c, indexCPS2Sprites_Blackheart, 0x08 },
    { L"Flame Inferno (HCB+HP)", 0x76A4c, 0x76A6c, indexCPS2Sprites_Blackheart, 0x0A },
    { L"Armageddon Meteors (QCF+3P)", 0x76A8c, 0x76AAc, indexCPS2Sprites_Blackheart, 0x0B },
    { L"Heart of Darkness (QCF+3K)", 0x76BAc, 0x76BCc },
    { L"P Intro Demons/H.O.D.", 0x76bec, 0x76c2c, indexCPS2Sprites_Blackheart, 0x0e },
    { L"K Intro Demons/H.O.D.", 0x76c2c, 0x76c6c, indexCPS2Sprites_Blackheart, 0x0e },
    { L"j.MP Lightning (All)", 0x76BCc, 0x76BEc, indexCPS2Sprites_Blackheart, 0x0D },
    { L"MP Lightning (All)", 0x76b8c, 0x76bac, indexCPS2Sprites_Blackheart, 0x0f },
    { L"Fire Hand Win Pose (All)", 0x76b6c, 0x76b8c, indexCPS2Sprites_Blackheart, 0x10 },
    { L"MP/HP Throw (Ground)", 0x76AAc, 0x76ACc, indexCPS2Sprites_Blackheart, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",           0x7210c, 0x7212c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P Shield",                  0x7212c, 0x7214c, indexCPS2Sprites_CapAm, 1 },
    { L"P Charging Star",           0x7214c, 0x7216c, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",            0x7216c, 0x7218c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"K Shield",                  0x7218c, 0x721Ac, indexCPS2Sprites_CapAm, 1 },
    { L"K Charging Star",           0x721Ac, 0x721Cc, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",   0x727Cc, 0x727Ec, indexCPS2Sprites_ChunLi, 0, &pairNext },
    { L"P Keiokuken (shades)", 0x727Ec, 0x7280c, indexCPS2Sprites_ChunLi, 1 },
    { L"P Lightning Kicks / Kikouken / Kikosho", 0x7280c, 0x7282c, indexCPS2Sprites_ChunLi, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",    0x7282c, 0x7284c, indexCPS2Sprites_ChunLi, 0, &pairNext },
    { L"K Keiokuken (shades)", 0x7284c, 0x7286c, indexCPS2Sprites_ChunLi, 1 },
    { L"K Lightning Kicks / Kikouken / Kikosho", 0x7286c, 0x7288c, indexCPS2Sprites_ChunLi, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette", 0x72ECc, 0x72EEc, indexCPS2Sprites_CyberAkuma, 0, &pairNext },
    { L"P Machinery, Hadouken 2", 0x72F0c, 0x72F2c, indexCPS2Sprites_CyberAkuma, 1 },
    { L"P Hadouken 1 Tatsu Flames", 0x72EEc, 0x72F0c, indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette", 0x72F2c, 0x72F4c, indexCPS2Sprites_CyberAkuma, 0, &pairNext },
    { L"K Machinery, Hadouken 2", 0x72F6c, 0x72F8c, indexCPS2Sprites_CyberAkuma, 1 },
    { L"K Hadouken 1 Tatsu Flames", 0x72F4c, 0x72F6c, indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette", 0x71F8c, 0x71FAc, indexCPS2Sprites_Cyclops, 0, &pairNext, &secondaryMSHVSFCyclopsEffects },
    { L"P HK Extra", 0x71FAc, 0x71FCc, indexCPS2Sprites_Cyclops, 1 },
    { L"P Optic Blast Super", 0x71FCc, 0x71FEc, indexCPS2Sprites_Cyclops, 2 },
    // ? don't know what this maps to
    // ? don't know what this maps to
    { L"P Laser FX", 0x7208C, 0x720AC, indexCPS2Sprites_Cyclops, 3 },
    { L"P Intro 1", 0x7616c, 0x7618c, indexCPS2Sprites_Cyclops, 12 },
    { L"P Intro 2", 0x7618c, 0x761Ac, indexCPS2Sprites_Cyclops, 12 },
    { L"P Intro 3", 0x761Ac, 0x761Cc, indexCPS2Sprites_Cyclops, 12 },
    { L"P Intro 4", 0x761Cc, 0x761Ec, indexCPS2Sprites_Cyclops, 12 },
    { L"P Intro 5", 0x761Ec, 0x7620c, indexCPS2Sprites_Cyclops, 12 },
    { L"P Intro 6", 0x7620c, 0x7622c, indexCPS2Sprites_Cyclops, 12 },
    { L"P Intro 7", 0x7622c, 0x7624c, indexCPS2Sprites_Cyclops, 12 },
    { L"P Intro 8", 0x7624c, 0x7626c, indexCPS2Sprites_Cyclops, 12 },
    { L"P Extra Lighting", 0x7640c, 0x7642c, indexCPS2Sprites_Cyclops, 13 },
    { L"P Optic Light Extra / MK/HK Grab", 0x7642c, 0x7644c, indexCPS2Sprites_Cyclops, 13 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette", 0x71FEc, 0x7200c, indexCPS2Sprites_Cyclops, 0, &pairNext, &secondaryMSHVSFCyclopsEffects },
    { L"K HK Extra", 0x7200c, 0x7202c, indexCPS2Sprites_Cyclops, 1 },
    { L"K Optic Blast Super", 0x7202c, 0x7204c, indexCPS2Sprites_Cyclops, 2 },
    // ? don't know what this maps to
    // ? don't know what this maps to
    { L"K Laser FX", 0x720Ec, 0x7210c, indexCPS2Sprites_Cyclops, 3 },
    { L"K Intro 1", 0x7626c, 0x7628c, indexCPS2Sprites_Cyclops, 12 },
    { L"K Intro 2", 0x7628c, 0x762Ac, indexCPS2Sprites_Cyclops, 12 },
    { L"K Intro 3", 0x762Ac, 0x762Cc, indexCPS2Sprites_Cyclops, 12 },
    { L"K Intro 4", 0x762Cc, 0x762Ec, indexCPS2Sprites_Cyclops, 12 },
    { L"K Intro 5", 0x762Ec, 0x7630c, indexCPS2Sprites_Cyclops, 12 },
    { L"K Intro 6", 0x7630c, 0x7632c, indexCPS2Sprites_Cyclops, 12 },
    { L"K Intro 7", 0x7632c, 0x7634c, indexCPS2Sprites_Cyclops, 12 },
    { L"K Intro 8", 0x7634c, 0x7636c, indexCPS2Sprites_Cyclops, 12 },
    { L"K Extra Lighting 2", 0x7644c, 0x7646c, indexCPS2Sprites_Cyclops, 13 },
    { L"K Optic Light Extra / MK/HK Grab", 0x7646c, 0x7648c, indexCPS2Sprites_Cyclops, 13 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_SHARED[] =
{
    { L"Optic Blast / Optic Bullet 1/5 (shared)", 0x7636c, 0x7638c, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 2/5 (shared)", 0x7638c, 0x763Ac, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 3/5 (shared)", 0x763ac, 0x763cc, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 4/5 (shared)", 0x763cc, 0x763ec, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 5/5 (shared)", 0x763ec, 0x7640c, indexCPS2Sprites_Cyclops, 0x0b },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",         0x72E0c, 0x72E2c, indexCPS2Sprites_Dan },
    { L"P gadoken blue",    0x72E2c, 0x72E4c, indexCPS2Sprites_Dan, 1 },
    { L"P gadoken red",     0x72E4c, 0x72E6c, indexCPS2Sprites_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",         0x72E6c, 0x72E8c, indexCPS2Sprites_Dan },
    { L"K gadoken blue",    0x72E8c, 0x72EAc, indexCPS2Sprites_Dan, 1 },
    { L"K gadoken red",     0x72Eac, 0x72Ecc, indexCPS2Sprites_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",     0x7310c, 0x7312c, indexCPS2Sprites_Sakura },
    { L"P Hadouken",    0x7312c, 0x7314c, indexCPS2Sprites_Ken, 0x01 },
    { L"P Shouoken",    0x7314c, 0x7316c, indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",     0x7316c, 0x7318c, indexCPS2Sprites_Sakura },
    { L"K Hadouken",    0x7318c, 0x731Ac, indexCPS2Sprites_Ken, 0x01 },
    { L"K Shouoken",    0x731ac, 0x731cc, indexCPS2Sprites_Sakura, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",             0x7288c, 0x728Ac, indexCPS2Sprites_Dhalsim, 0x00, nullptr, &secondaryMSHVSFDhalsimEffects },
    { L"P Flames",              0x728Ac, 0x728Cc, indexCPS2Sprites_Dhalsim, 1 },
    { L"P Sally",               0x728Cc, 0x728Ec, indexCPS2Sprites_Dhalsim, 2 },
    { L"P Teleport 1",          0x76CCc, 0x76CEc, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P Teleport 2",          0x76CEc, 0x76D0c, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P Teleport 3",          0x76D0c, 0x76D2c, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P Teleport 4",          0x76D2c, 0x76D4c, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P Teleport 5 (Unused)", 0x76D4c, 0x76D6c, indexCPS2Sprites_Dhalsim, 0xb }, // This is just the all-white frame.

};
const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x728Ec, 0x7290c, indexCPS2Sprites_Dhalsim, 0x00, nullptr, &secondaryMSHVSFDhalsimEffects },
    { L"K Flames",              0x7290c, 0x7292c, indexCPS2Sprites_Dhalsim, 1 },
    { L"K Sally",               0x7292c, 0x7294c, indexCPS2Sprites_Dhalsim, 2 },
    { L"K Teleport 1",          0x76D6c, 0x76D8c, indexCPS2Sprites_Dhalsim, 0xb },
    { L"K Teleport 2",          0x76D8c, 0x76DAc, indexCPS2Sprites_Dhalsim, 0xb },
    { L"K Teleport 3",          0x76DAc, 0x76DCc, indexCPS2Sprites_Dhalsim, 0xb },
    { L"K Teleport 4",          0x76DCc, 0x76DEc, indexCPS2Sprites_Dhalsim, 0xb },
    { L"K Teleport 5 (Unused)", 0x76Dec, 0x76e0c, indexCPS2Sprites_Dhalsim, 0xb },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",      0x72BCc, 0x72BEc, indexCPS2Sprites_Akuma },
    { L"Hadouken",              0x72BEc, 0x72C0c, indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       0x72C0c, 0x72C2c, indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",       0x72C2c, 0x72C4c, indexCPS2Sprites_Akuma },
    { L"Hadouken",              0x72C4c, 0x72C6c, indexCPS2Sprites_Akuma, 1 },
    { L"Zankuu Hadouken",       0x72C6c, 0x72C8c, indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",         0x721Cc, 0x721Ec, indexCPS2Sprites_Hulk },
    { L"P Gamma Charge/j.HP",     0x721Ec, 0x7220c, indexCPS2Sprites_Hulk, 1 },
    { L"P Gamma Slam/Gamma Wave", 0x7220c, 0x7222c, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",          0x7222c, 0x7224c, indexCPS2Sprites_Hulk },
    { L"K Gamma Charge/j.HP",     0x7224c, 0x7226c, indexCPS2Sprites_Hulk, 1 },
    { L"K Gamma Slam/Gamma Wave", 0x7226c, 0x7228c, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_SHARED[] =
{
    { L"Super Armor", 0x77f2c, 0x77f4c, indexCPS2Sprites_Hulk, 0x00 },
    { L"Gamma Crush", 0x77f4c, 0x77f6c, indexCPS2Sprites_Hulk, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",        0x7270c, 0x7272c, indexCPS2Sprites_Ken },
    { L"P Hadouken",             0x7272c, 0x7274c, indexCPS2Sprites_Ken, 1 },
    { L"P Shoryuken",            0x7274c, 0x7276c, indexCPS2Sprites_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",       0x7276c, 0x7278c, indexCPS2Sprites_Ken },
    { L"K Hadouken",           0x7278c, 0x727Ac, indexCPS2Sprites_Ken, 1 },
    { L"K Shoryuken",          0x727Ac, 0x727Cc, indexCPS2Sprites_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",       0x72B0c, 0x72B2c, indexCPS2Sprites_Bison },
    { L"P Extras 01",           0x72B2c, 0x72B4c, indexCPS2Sprites_Bison, 0x08 },
    { L"P Extras 02",           0x7708c, 0x770Ac, indexCPS2Sprites_Bison, 0x08 },
    { L"P Extras 03",           0x72B4c, 0x72B6c, indexCPS2Sprites_Bison, 0x09 },
    { L"P Extras 04",           0x770Ac, 0x770Cc, indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x72B6c, 0x72B8c, indexCPS2Sprites_Bison },
    { L"K Extras 01",           0x72B8c, 0x72BAc, indexCPS2Sprites_Bison, 0x08 },
    { L"K Extras 02",           0x770Cc, 0x770Ec, indexCPS2Sprites_Bison, 0x08 },
    { L"K Extras 03",           0x72BAc, 0x72BCc, indexCPS2Sprites_Bison, 0x09 },
    { L"K Extras 04",           0x770Ec, 0x7710c, indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",       0x72F8c, 0x72FAc, indexCPS2Sprites_Zangief },
    { L"P Vodka Fire",          0x72FAc, 0x72FCc, indexCPS2Sprites_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x72FEc, 0x7300c, indexCPS2Sprites_Zangief },
    { L"K Vodka Fire",          0x7300c, 0x7302c, indexCPS2Sprites_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED[] =
{
    { L"P+K Super Armor",      0x7304c, 0x7306c, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",       0x72D4c, 0x72D6c, indexCPS2Sprites_Norimaro, 0x00, nullptr, &secondaryMSHVSFNorimaroEffects },
    { L"Big Head Dash/Grab",     0x7716c, 0x7718c, indexCPS2Sprites_Norimaro, 0x02 },
    { L"Stunned",                0x7712c, 0x7714c, indexCPS2Sprites_Norimaro, 0x03 },
    { L"Variety Items",          0x72d6c, 0x72dac },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x72DAc, 0x72DCc, indexCPS2Sprites_Norimaro, 0x00, nullptr, &secondaryMSHVSFNorimaroEffects },
    { L"Big Head Dash/Grab",     0x7718c, 0x771ac, indexCPS2Sprites_Norimaro, 0x02 },
    { L"Stunned",                0x7714c, 0x7716c, indexCPS2Sprites_Norimaro, 0x03 },
    { L"Variety Items",          0x72dcc, 0x72e0c },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_EXTRAS[] =
{
    { L"Extras 04",              0x7710c, 0x7712c },
    { L"Unused Super",           0x771ac, 0x7728c },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",       0x7240c, 0x7242c, indexCPS2Sprites_OmegaRed, 0x00, nullptr, &secondaryMSHVSFOmegaRedEffects },
    { L"P Intro 1", 0x764Ac, 0x764Cc, indexCPS2Sprites_OmegaRed },
    { L"P Intro 2", 0x764Cc, 0x764Ec, indexCPS2Sprites_OmegaRed },
    { L"P Intro 3", 0x764Ec, 0x7650c, indexCPS2Sprites_OmegaRed },
    { L"P Intro 4", 0x7650c, 0x7652c, indexCPS2Sprites_OmegaRed },
    { L"P Intro Shockwave 1", 0x7242c, 0x7244c, indexCPS2Sprites_OmegaRed, 0x01 },
    { L"P Intro Shockwave 2", 0x7244c, 0x7246c, indexCPS2Sprites_OmegaRed, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",       0x7246c, 0x7248c, indexCPS2Sprites_OmegaRed, 0x00, nullptr, &secondaryMSHVSFOmegaRedEffects },
    { L"K Intro 1", 0x7652c, 0x7654c, indexCPS2Sprites_OmegaRed },
    { L"K Intro 2", 0x7654c, 0x7656c, indexCPS2Sprites_OmegaRed },
    { L"K Intro 3", 0x7656c, 0x7658c, indexCPS2Sprites_OmegaRed },
    { L"K Intro 4", 0x7658c, 0x765Ac, indexCPS2Sprites_OmegaRed },
    { L"K Intro Shockwave 1", 0x7248c, 0x724Ac, indexCPS2Sprites_OmegaRed, 0x01 },
    { L"K Intro Shockwave 2", 0x724Ac, 0x724Cc, indexCPS2Sprites_OmegaRed, 0x02 },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_SHARED[] =
{
    { L"Intro Extras",      0x765ac, 0x765cc },
};
    
const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",         0x7264c, 0x7266c, indexCPS2Sprites_Ryu },
    { L"P Hadouken",        0x7266c, 0x7268c, indexCPS2Sprites_Ryu, 1 },
    { L"P Extra 2",         0x7268c, 0x726Ac },
};

const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",         0x726Ac, 0x726Cc, indexCPS2Sprites_Ryu },
    { L"K Hadouken",        0x726Cc, 0x726Ec, indexCPS2Sprites_Ryu, 1 },
    { L"K Extra 2",         0x726Ec, 0x7270c },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",         0x72C8c, 0x72CAc, indexCPS2Sprites_Sakura, 0x00, nullptr, &secondaryMSHVSFSakuraEffects },
    { L"P Hadouken",        0x72CAc, 0x72CCc, indexCPS2Sprites_Sakura, 0x01 },
    { L"P Shouoken",        0x72ccc, 0x72cec, indexCPS2Sprites_Sakura, 0x02 },
    { L"P Friend (Kei)",    0x77FCc, 0x77FEc, indexCPS2Sprites_Sakura, 0x09, &pairNext },
    { L"P Bag",             0x77FEc, 0x7800c, indexCPS2Sprites_Sakura, 0x0a },

    { L"P Dark Sakura?",    0x77F6c, 0x77F8c, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",         0x72CEc, 0x72D0c, indexCPS2Sprites_Sakura, 0x00, nullptr, &secondaryMSHVSFSakuraEffects },
    { L"K Hadouken",        0x72D0c, 0x72D2c, indexCPS2Sprites_Sakura, 0x01 },
    { L"K Shouoken",        0x72d2c, 0x72d4c, indexCPS2Sprites_Sakura, 0x02 },
    { L"K Friend (Kei)",    0x7800c, 0x7802c, indexCPS2Sprites_Sakura, 0x09, &pairNext },
    { L"K Bag",             0x7802c, 0x7804c, indexCPS2Sprites_Sakura, 0x0a },

    { L"K Dark Sakura?",    0x77F8c, 0x77Fac, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_SHARED[] =
{
    { L"Winpose - Cherry Blossoms",  0x77Fac, 0x77Fcc, indexCPS2Sprites_Sakura, 0x08 },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",       0x731Cc, 0x731Ec, indexCPS2Sprites_Charlie },
    { L"P Sonic Boom", 0x731Ec, 0x7320c, indexCPS2Sprites_Charlie, 1 },
    { L"P Flash Kick", 0x7320c, 0x7322c, indexCPS2Sprites_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x7322c, 0x7324c, indexCPS2Sprites_Charlie },
    { L"K Sonic Boom", 0x7324c, 0x7326c, indexCPS2Sprites_Charlie, 1 },
    { L"K Flash Kick", 0x7326c, 0x7328c, indexCPS2Sprites_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",        0x7234c, 0x7236c, indexCPS2Sprites_Shuma, 0x00, &pairNext, &secondaryMSHVSFShumaEffects },
    { L"P Dash Frame / Guard Frame", 0x7236c, 0x7238c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P FP / jFP / cFP / Intro", 0x7238c, 0x723Ac, indexCPS2Sprites_Shuma, 0x09, &pairNext25 },

    { L"P Unknown 1", 0x7728c, 0x772Ac },
    { L"P Unknown 2", 0x772Ac, 0x772Cc },
    { L"P Unknown 3", 0x772Cc, 0x772Ec },
    { L"P Unknown 4", 0x772Ec, 0x7730c },
    { L"P Unknown 5", 0x7730c, 0x7732c },

    { L"P Stone Drop 1", 0x7732c, 0x7734c, indexCPS2Sprites_Shuma, 0x04 },
    { L"P Stone Drop 2", 0x7734c, 0x7736c, indexCPS2Sprites_Shuma, 0x04 },
    { L"P Stone Drop 3", 0x7736c, 0x7738c, indexCPS2Sprites_Shuma, 0x04 },
    { L"P Stone Drop 4", 0x7738c, 0x773Ac, indexCPS2Sprites_Shuma, 0x04 },
    { L"P Stone Drop 5", 0x773Ac, 0x773Cc, indexCPS2Sprites_Shuma, 0x04 },

    // Unused blue region

    // HK grab region
    { L"P Life Drain 1", 0x7750c, 0x7752c, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 2", 0x7752c, 0x7754c, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 3", 0x7754c, 0x7756c, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 4", 0x7756c, 0x7758c, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 5", 0x7758c, 0x775Ac, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 6", 0x775Ac, 0x775Cc, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 7", 0x775Cc, 0x775Ec, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 8", 0x775Ec, 0x7760c, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 9", 0x7760c, 0x7762c, indexCPS2Sprites_Shuma, 0x05 },
    { L"P Life Drain 10", 0x7762c, 0x7764c, indexCPS2Sprites_Shuma, 0x05 },

    // HP flash
    { L"P Unknown 1", 0x7764c, 0x7766c },
    { L"P Unknown 2", 0x7766c, 0x7768c },
    { L"P Unknown 3", 0x7768c, 0x776Ac },
    { L"P Unknown 4", 0x776Ac, 0x776Cc },
    { L"P HP Flash", 0x776Cc, 0x776Ec, indexCPS2Sprites_Shuma, 0x06, &pairPrevious25 },
    { L"P Winpose", 0x776Ec, 0x7770c, indexCPS2Sprites_Shuma, 0x07 },
    { L"P Unknown 5", 0x7770c, 0x7772c },

    { L"P Chaos Dimension 1", 0x7772c, 0x7774c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P Chaos Dimension Dash 1", 0x7774c, 0x7776c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P Chaos Dimension 2", 0x7776c, 0x7778c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P Chaos Dimension Dash 2", 0x7778c, 0x777Ac, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P Chaos Dimension 3", 0x777Ac, 0x777Cc, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P Chaos Dimension Dash 3", 0x777Cc, 0x777Ec, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P Chaos Dimension 4", 0x777Ec, 0x7780c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P Chaos Dimension Dash 4", 0x7780c, 0x7782c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"P Chaos Dimension 5", 0x7782c, 0x7784c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"P Chaos Dimension Dash 5", 0x7784c, 0x7786c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },

    { L"P Mystic Smash Shadows", 0x7786c, 0x7788c, indexCPS2Sprites_Shuma, 0x08 },

    // { L"P Extra 11", 0x79C0c, 0x79C2c, indexCPS2Sprites_Shuma },//  this is shuma but doesn't fit.  excising until somebody tells me why they want it
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette", 0x723Ac, 0x723Cc, indexCPS2Sprites_Shuma, 0x00, &pairNext, &secondaryMSHVSFShumaEffects },
    { L"K Dash Frame / Guard Frame", 0x723Cc, 0x723Ec, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"K FP / jFP / cFP / Intro", 0x723Ec, 0x7240c, indexCPS2Sprites_Shuma, 0x09, &pairNext25 },

    { L"K Unknown 1", 0x7788c, 0x778Ac },
    { L"K Unknown 2", 0x778Ac, 0x778Cc },
    { L"K Unknown 3", 0x778Cc, 0x778Ec },
    { L"K Unknown 4", 0x778Ec, 0x7790c },
    { L"K Unknown 5", 0x7790c, 0x7792c },

    { L"K Stone Drop 1", 0x7792c, 0x7794c, indexCPS2Sprites_Shuma, 0x04 },
    { L"K Stone Drop 2", 0x7794c, 0x7796c, indexCPS2Sprites_Shuma, 0x04 },
    { L"K Stone Drop 3", 0x7796c, 0x7798c, indexCPS2Sprites_Shuma, 0x04 },
    { L"K Stone Drop 4", 0x7798c, 0x779Ac, indexCPS2Sprites_Shuma, 0x04 },
    { L"K Stone Drop 5", 0x779Ac, 0x779Cc, indexCPS2Sprites_Shuma, 0x04 },

    // unused 'blue range': 799ce-77b0e

    // HK grab region
    { L"K Life Drain 1", 0x77B0c, 0x77B2c, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 2", 0x77B2c, 0x77B4c, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 3", 0x77B4c, 0x77B6c, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 4", 0x77B6c, 0x77B8c, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 5", 0x77B8c, 0x77BAc, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 6", 0x77BAc, 0x77BCc, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 7", 0x77BCc, 0x77BEc, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 8", 0x77BEc, 0x77C0c, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 9", 0x77C0c, 0x77C2c, indexCPS2Sprites_Shuma, 0x05 },
    { L"K Life Drain 10", 0x77C2c, 0x77C4c, indexCPS2Sprites_Shuma, 0x05 },

    // HP flash
    { L"K Unknown 1", 0x77C4c, 0x77C6c },
    { L"K Unknown 2", 0x77C6c, 0x77C8c },
    { L"K Unknown 3", 0x77C8c, 0x77CAc },
    { L"K Unknown 4", 0x77CAc, 0x77CCc },
    { L"K HP Flash", 0x77CCc, 0x77CEc, indexCPS2Sprites_Shuma, 0x06, &pairPrevious25 },
    { L"K Winpose", 0x77CEc, 0x77D0c, indexCPS2Sprites_Shuma, 0x07 },
    { L"K Unknown 5", 0x77D0c, 0x77D2c },

    { L"K Chaos Dimension 1", 0x77D2c, 0x77D4c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"K Chaos Dimension Dash 1", 0x77D4c, 0x77D6c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"K Chaos Dimension 2", 0x77D6c, 0x77D8c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"K Chaos Dimension Dash 2", 0x77D8c, 0x77DAc, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"K Chaos Dimension 3", 0x77DAc, 0x77DCc, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"K Chaos Dimension Dash 3", 0x77DCc, 0x77DEc, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"K Chaos Dimension 4", 0x77DEc, 0x77E0c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"K Chaos Dimension Dash 4", 0x77E0c, 0x77E2c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },
    { L"K Chaos Dimension 5", 0x77E2c, 0x77E4c, indexCPS2Sprites_Shuma, 0x00, &pairNext },
    { L"K Chaos Dimension Dash 5", 0x77E4c, 0x77E6c, indexCPS2Sprites_Shuma, 0x01, &pairPrevious },

    { L"K Mystic Smash Shadows", 0x77E6c, 0x77E8c, indexCPS2Sprites_Shuma, 0x08 },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{ // 2 is web
    { L"P Palette", 0x724Cc, 0x724Ec, indexCPS2Sprites_Spidey, 0x00, &pairNext, &secondaryMSHVSFSpideyEffects },
    { L"P Spider-sense / Webs", 0x724Ec, 0x7250c, indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"P Spotlight 1", 0x7250c, 0x7252c, indexCPS2Sprites_Spidey, 13 },
    { L"P Spotlight 2", 0x766cc, 0x766ec, indexCPS2Sprites_Spidey, 0x0c },
    { L"P Spotlight 3 + Taunt 1", 0x766ec, 0x7670c, indexCPS2Sprites_Spidey, 0x0d },
    { L"P HEY!", 0x7670c, 0x7672c, indexCPS2Sprites_Spidey, 0x0e },
    { L"P Do your job!", 0x7672c, 0x7674c, indexCPS2Sprites_Spidey, 0x0f },
    { L"P Intro 1", 0x765Cc, 0x765Ec, indexCPS2Sprites_Spidey, 0x0B },
    { L"P Intro 2", 0x765Ec, 0x7660c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P Intro 3", 0x7660c, 0x7662c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P Intro 4", 0x7662c, 0x7664c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P Intro 5", 0x7664c, 0x7666c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P Intro 6", 0x7666c, 0x7668c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P Intro 7", 0x7668c, 0x766Ac, indexCPS2Sprites_Spidey, 0x0B },
    { L"P Intro 8", 0x766Ac, 0x766Cc, indexCPS2Sprites_Spidey, 0x0B },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette", 0x7252c, 0x7254c, indexCPS2Sprites_Spidey, 0x00, &pairNext, &secondaryMSHVSFSpideyEffects },
    { L"K Spider-sense / Webs", 0x7254c, 0x7256c, indexCPS2Sprites_Spidey, 0x02, &pairPrevious },
    { L"K Spotlight 1", 0x7256c, 0x7258c, indexCPS2Sprites_Spidey, 13 },
    { L"K Spotlight 2", 0x768cc, 0x768ec, indexCPS2Sprites_Spidey, 0x0c },
    { L"K Spotlight 3 + Taunt 1", 0x768ec, 0x7690c, indexCPS2Sprites_Spidey, 0x0d },
    { L"K HEY!", 0x7690c, 0x7692c, indexCPS2Sprites_Spidey, 0x0e },
    { L"K Do your job!", 0x7692c, 0x7694c, indexCPS2Sprites_Spidey, 0x0f },
    { L"K Intro 1", 0x767Cc, 0x767Ec, indexCPS2Sprites_Spidey, 0x0B },
    { L"K Intro 2", 0x767Ec, 0x7680c, indexCPS2Sprites_Spidey, 0x0B },
    { L"K Intro 3", 0x7680c, 0x7682c, indexCPS2Sprites_Spidey, 0x0B },
    { L"K Intro 4", 0x7682c, 0x7684c, indexCPS2Sprites_Spidey, 0x0B },
    { L"K Intro 5", 0x7684c, 0x7686c, indexCPS2Sprites_Spidey, 0x0B },
    { L"K Intro 6", 0x7686c, 0x7688c, indexCPS2Sprites_Spidey, 0x0B },
    { L"K Intro 7", 0x7688c, 0x768Ac, indexCPS2Sprites_Spidey, 0x0B },
    { L"K Intro 8", 0x768Ac, 0x768Cc, indexCPS2Sprites_Spidey, 0x0B },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",        0x7328c, 0x732Ac, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P Shield", 0x732Ac, 0x732Cc, indexCPS2Sprites_CapAm, 1 },
    { L"P Charging Star", 0x732Cc, 0x732Ec, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x732Ec, 0x7330c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"K Shield", 0x7330c, 0x7332c, indexCPS2Sprites_CapAm, 1 },
    { L"K Charging Star", 0x7332c, 0x7334c, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",       0x7228c, 0x722Ac, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMSHVSFWolverineEffects },
    { L"P Claws", 0x722Ac, 0x722Cc, indexCPS2Sprites_Wolverine, 1 },
    { L"P Extras 1", 0x722Cc, 0x722Ec, indexCPS2Sprites_Wolverine, 2 },
    { L"P Extras 2 (Fatal Claw)", 0x7804c, 0x7806c },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x722Ec, 0x7230c, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMSHVSFWolverineEffects },
    { L"K Claws", 0x7230c, 0x7232c, indexCPS2Sprites_Wolverine, 1 },
    { L"K Extras 1", 0x7232c, 0x7234c, indexCPS2Sprites_Wolverine, 2 },
    { L"K Extras 2 (Fatal Claw)", 0x7806c, 0x7808c },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P Palette",   0x7294c, 0x7296c, indexCPS2Sprites_Zangief, 0x00, nullptr, &secondaryMSHVSFZangiefEffects },
    { L"P Banishing Fist",  0x7296c, 0x7298c, indexCPS2Sprites_Zangief, 1 },
    { L"P Extra 2",         0x7298c, 0x729Ac },
    { L"P FAB 1",           0x72A4c, 0x72A6c, indexCPS2Sprites_Zangief },
    { L"P FAB 2",           0x72A6c, 0x72A8c, indexCPS2Sprites_Zangief },
    { L"P FAB 3",           0x72A8c, 0x72AAc, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"K Palette",        0x729Ac, 0x729Cc, indexCPS2Sprites_Zangief, 0x00, nullptr, &secondaryMSHVSFZangiefEffects },
    { L"K Banishing Fist",      0x729Cc, 0x729Ec, indexCPS2Sprites_Zangief, 1 },
    { L"K Extra 2",             0x729Ec, 0x72A0c },
    { L"K FAB 1",               0x72AAc, 0x72ACc, indexCPS2Sprites_Zangief },
    { L"K FAB 2",               0x72ACc, 0x72AEc, indexCPS2Sprites_Zangief },
    { L"K FAB 3",               0x72AEc, 0x72B0c, indexCPS2Sprites_Zangief },
};

#ifdef UNKNOWN_STATUS_PALETES
    // maybe cyber akuma? unclear
    { L"Burning Light", 0x73acc + (0 * 0x20), 0x73aec + (0 * 0x20), indexCPS2Sprites_Akuma },
    { L"Burning Dark",   0x73acc + (1 * 0x20), 0x73aec + (1 * 0x20), indexCPS2Sprites_Akuma },
    { L"Shocked Light",  0x73acc + (2 * 0x20), 0x73aec + (2 * 0x20), indexCPS2Sprites_Akuma },
    { L"Shocked Dark",   0x73acc + (3 * 0x20), 0x73aec + (3 * 0x20), indexCPS2Sprites_Akuma },
    { L"Dark Burn Light",0x73acc + (4 * 0x20), 0x73aec + (4 * 0x20), indexCPS2Sprites_Akuma },
    { L"Dark Burn Dark", 0x73acc + (5 * 0x20), 0x73aec + (5 * 0x20), indexCPS2Sprites_Akuma },
    { L"Kinetic 1 (Unused)",      0x73acc + (6 * 0x20), 0x73aec + (6 * 0x20), indexCPS2Sprites_Akuma },
    { L"Kinetic 2 (Unused)",      0x73acc + (7 * 0x20), 0x73aec + (7 * 0x20), indexCPS2Sprites_Akuma },
    { L"Kinetic 3 (Unused)",      0x73acc + (8 * 0x20), 0x73aec + (8 * 0x20), indexCPS2Sprites_Akuma },
#endif

const sGame_PaletteDataset MSHVSF_A_DAN_STATUS[] =
{
    { L"Burn Light", 0x74c0c, 0x74c2c, indexCPS2Sprites_Dan, 0x00 },
    { L"Burn Dark", 0x74c2c, 0x74c4c, indexCPS2Sprites_Dan, 0x00 },
    { L"Shocked Light", 0x74c4c, 0x74c6c, indexCPS2Sprites_Dan, 0x00 },
    { L"Shocked Dark", 0x74c6c, 0x74c8c, indexCPS2Sprites_Dan, 0x00 },
    { L"Dark Burn Light", 0x74c8c, 0x74cac, indexCPS2Sprites_Dan, 0x00 },
    { L"Dark Burn Dark", 0x74cac, 0x74ccc, indexCPS2Sprites_Dan, 0x00 },
    { L"Light Super Trail", 0x739cc, 0x739ec, indexCPS2Sprites_Dan, 0x00 },
    { L"Dark Super Trail", 0x739ec, 0x73a0c, indexCPS2Sprites_Dan, 0x00 },
    { L"Death Factor Light", 0x758cc, 0x758ec, indexCPS2Sprites_Dan, 0x00 },
    { L"Death Factor Dark", 0x758ec, 0x7590c, indexCPS2Sprites_Dan, 0x00 },
    { L"Energy Drain Light", 0x7590c, 0x7592c, indexCPS2Sprites_Dan, 0x00 },
    { L"Energy Drain Dark", 0x7592c, 0x7594c, indexCPS2Sprites_Dan, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75ecc, 0x75eec, indexCPS2Sprites_Dan, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75eec, 0x75f0c, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CYBERAKUMA_STATUS[] =
{
    { L"Burn Light", 0x74ccc, 0x74cec, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Machinery - Burn Light", 0x74dec, 0x74e0c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Burn Dark", 0x74cec, 0x74d0c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Machinery - Burn Dark", 0x74e0c, 0x74e2c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Shocked Light", 0x74d0c, 0x74d2c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Machinery - Shocked Light", 0x74e2c, 0x74e4c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Shocked Dark", 0x74d2c, 0x74d4c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Machinery - Shocked Dark", 0x74e4c, 0x74e6c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Dark Burn Light", 0x74d4c, 0x74d6c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Machinery - Dark Burn Light", 0x74e6c, 0x74e8c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Dark Burn Dark", 0x74d6c, 0x74d8c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Machinery - Dark Burn Dark", 0x74e8c, 0x74eac, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },

    { L"Light Super Trail", 0x73a0c, 0x73a2c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Arm Light Super Trail", 0x73a4c, 0x73a6c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Dark Super Trail", 0x73a2c, 0x73a4c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Arm Dark Super Trail", 0x73a6c, 0x73a8c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Death Factor Light", 0x7594c, 0x7596c, indexCPS2Sprites_CyberAkuma, 0x80 },
    { L"Death Factor Dark", 0x7596c, 0x7598c, indexCPS2Sprites_CyberAkuma, 0x80 },
    { L"Energy Drain Light", 0x7598c, 0x759ac, indexCPS2Sprites_CyberAkuma, 0x80 },
    { L"Energy Drain Dark", 0x759ac, 0x759cc, indexCPS2Sprites_CyberAkuma, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75f0c, 0x75f2c, indexCPS2Sprites_CyberAkuma, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75f2c, 0x75f4c, indexCPS2Sprites_CyberAkuma, 0x80 },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_STATUS[] =
{
    { L"Burning Light",  0x74eac + (0 * 0x20), 0x74eac + (1 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Burning Dark",   0x74eac + (1 * 0x20), 0x74eac + (2 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Shocked Light",  0x74eac + (2 * 0x20), 0x74eac + (3 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Shocked Dark",   0x74eac + (3 * 0x20), 0x74eac + (4 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Dark Burn Light",0x74eac + (4 * 0x20), 0x74eac + (5 * 0x20), indexCPS2Sprites_Charlie, 0x00 },
    { L"Dark Burn Dark", 0x74eac + (5 * 0x20), 0x74eac + (6 * 0x20), indexCPS2Sprites_Charlie, 0x00 },

    { L"Light Super Trail", 0x73a8c, 0x73aac, indexCPS2Sprites_Charlie, 0x00 },
    { L"Dark Super Trail", 0x73aac, 0x73acc, indexCPS2Sprites_Charlie, 0x00 },
    { L"Death Factor Light", 0x759cc, 0x759ec, indexCPS2Sprites_Charlie, 0x00 },
    { L"Death Factor Dark", 0x759ec, 0x75a0c, indexCPS2Sprites_Charlie, 0x00 },
    { L"Energy Drain Light", 0x75a0c, 0x75a2c, indexCPS2Sprites_Charlie, 0x00 },
    { L"Energy Drain Dark", 0x75a2c, 0x75a4c, indexCPS2Sprites_Charlie, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75f4c, 0x75f6c, indexCPS2Sprites_Charlie, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75f6c, 0x75f8c, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_STATUS[] =
{
    { L"Burning Light",  0x73acc + (9 * 0x20), 0x73aec + (9 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Burning Dark",   0x73acc + (10 * 0x20), 0x73aec + (10 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Shocked Light",  0x73acc + (11 * 0x20), 0x73aec + (11 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Shocked Dark",   0x73acc + (12 * 0x20), 0x73aec + (12 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Dark Burn Light",0x73acc + (13 * 0x20), 0x73aec + (13 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Dark Burn Dark", 0x73acc + (14 * 0x20), 0x73aec + (14 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Kinetic 1 (Unused)",      0x73acc + (15 * 0x20), 0x73aec + (15 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Kinetic 2 (Unused)",      0x73acc + (16 * 0x20), 0x73aec + (16 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Kinetic 3 (Unused)",      0x73acc + (17 * 0x20), 0x73aec + (17 * 0x20), indexCPS2Sprites_Cyclops, 0x80 },
    { L"Light Super Trail", 0x7350c, 0x7352c, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Dark Super Trail", 0x7352c, 0x7354c, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Death Factor Light", 0x74fcc, 0x74fec, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Death Factor Dark", 0x74fec, 0x7500c, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Energy Drain Light", 0x7500c, 0x7502c, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Energy Drain Dark", 0x7502c, 0x7504c, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75a4c, 0x75a6c, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75a6c, 0x75a8c, indexCPS2Sprites_Cyclops, 0x80 },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAINAMERICA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (18 * 0x20), 0x73aec + (18 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Burning Light",  0x73acc + (24 * 0x20), 0x73aec + (24 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Burning Dark",   0x73acc + (19 * 0x20), 0x73aec + (19 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Burning Dark",   0x73acc + (25 * 0x20), 0x73aec + (25 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Shocked Light",  0x73acc + (20 * 0x20), 0x73aec + (20 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Shocked Light",  0x73acc + (26 * 0x20), 0x73aec + (26 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Shocked Dark",   0x73acc + (21 * 0x20), 0x73aec + (21 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Shocked Dark",   0x73acc + (27 * 0x20), 0x73aec + (27 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Dark Burn Light",0x73acc + (22 * 0x20), 0x73aec + (22 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Dark Burn Light",0x73acc + (28 * 0x20), 0x73aec + (28 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Dark Burn Dark", 0x73acc + (23 * 0x20), 0x73aec + (23 * 0x20), indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Dark Burn Dark", 0x73acc + (29 * 0x20), 0x73aec + (29 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },

    { L"Light Super Trail", 0x7354c, 0x7356c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Super Trail (Unused)", 0x7358c, 0x735ac, indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Dark Super Trail", 0x7356c, 0x7358c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Super Trail (Unused)", 0x735ac, 0x735cc, indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },

    { L"Death Factor Light", 0x7504c, 0x7506c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Death Factor Light", 0x750cc + (0 * 0x20), 0x750cc + (1 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Death Factor Dark", 0x7506c, 0x7508c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Death Factor Dark", 0x750cc + (1 * 0x20), 0x750cc + (2 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Energy Drain Light", 0x7508c, 0x750ac, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Energy Drain Light", 0x750cc + (2 * 0x20), 0x750cc + (3 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Energy Drain Dark", 0x750ac, 0x750cc, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Energy Drain Dark", 0x750cc + (3 * 0x20), 0x750cc + (4 * 0x20), indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },

    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75a8c, 0x75aac, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Blackheart/Mephisto HP/HK Demons 1", 0x75acc, 0x75aec, indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75aac, 0x75acc, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Shield Blackheart/Mephisto HP/HK Demons 2", 0x75aec, 0x75b0c, indexCPS2Sprites_CapAm, 0x01, &pairPreviousFlipped },
};

const sGame_PaletteDataset MSHVSF_A_HULK_STATUS[] =
{
    { L"Burning Light",  0x73acc + (30 * 0x20), 0x73aec + (30 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Burning Dark",   0x73acc + (31 * 0x20), 0x73aec + (31 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Shocked Light",  0x73acc + (32 * 0x20), 0x73aec + (32 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Shocked Dark",   0x73acc + (33 * 0x20), 0x73aec + (33 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Dark Burn Light",0x73acc + (34 * 0x20), 0x73aec + (34 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (35 * 0x20), 0x73aec + (35 * 0x20), indexCPS2Sprites_Hulk, 0x00 },
    { L"Light Super Trail", 0x735cc, 0x735ec, indexCPS2Sprites_Hulk, 0x00 },
    { L"Dark Super Trail", 0x735ec, 0x7360c, indexCPS2Sprites_Hulk, 0x00 },
    { L"Death Factor Light", 0x7514c, 0x7516c, indexCPS2Sprites_Hulk, 0x00 },
    { L"Death Factor Dark", 0x7516c, 0x7518c, indexCPS2Sprites_Hulk, 0x00 },
    { L"Energy Drain Light", 0x7518c, 0x751ac, indexCPS2Sprites_Hulk, 0x00 },
    { L"Energy Drain Dark", 0x751ac, 0x751cc, indexCPS2Sprites_Hulk, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75b0c, 0x75b2c, indexCPS2Sprites_Hulk, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75b2c, 0x75b4c, indexCPS2Sprites_Hulk, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_STATUS[] =
{
    { L"Burning Light",  0x73acc + (36 * 0x20), 0x73aec + (36 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Burning Light", 0x73acc + (0 * 0x20), 0x73aec + (0 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Burning Dark",   0x73acc + (37 * 0x20), 0x73aec + (37 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Burning Dark",   0x73acc + (1 * 0x20), 0x73aec + (1 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Shocked Light",  0x73acc + (38 * 0x20), 0x73aec + (38 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Shocked Light",  0x73acc + (2 * 0x20), 0x73aec + (2 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Shocked Dark",   0x73acc + (39 * 0x20), 0x73aec + (39 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Shocked Dark",   0x73acc + (3 * 0x20), 0x73aec + (3 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Dark Burn Light",0x73acc + (40 * 0x20), 0x73aec + (40 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Dark Burn Light",0x73acc + (4 * 0x20), 0x73aec + (4 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Dark Burn Dark", 0x73acc + (41 * 0x20), 0x73aec + (41 * 0x20), indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Dark Burn Dark", 0x73acc + (5 * 0x20), 0x73aec + (5 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },

    // Unused but there
    //{ L"Kinetic 1 (Unused)",      0x73acc + (6 * 0x20), 0x73aec + (6 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    //{ L"Kinetic 2 (Unused)",      0x73acc + (7 * 0x20), 0x73aec + (7 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    //{ L"Kinetic 3 (Unused)",      0x73acc + (8 * 0x20), 0x73aec + (8 * 0x20), indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },

    { L"Light Super Trail", 0x7360c, 0x7362c, indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Light Super Trail (Unused)", 0x734cc, 0x734ec, indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Dark Super Trail", 0x7362c, 0x7364c, indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Claws Dark Super Trail (Unused)", 0x734ec, 0x7350c, indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Death Factor Light", 0x751cc, 0x751ec, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Death Factor Dark", 0x751ec, 0x7520c, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Energy Drain Light", 0x7520c, 0x7522c, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Energy Drain Dark", 0x7522c, 0x7524c, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75b4c, 0x75b6c, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75b6c, 0x75b8c, indexCPS2Sprites_Wolverine, 0x80 },
};

const sGame_PaletteDataset MSHVSF_A_SHUMA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (42 * 0x20), 0x73aec + (42 * 0x20), indexCPS2Sprites_Shuma, 0x80 },
    { L"Burning Dark",   0x73acc + (43 * 0x20), 0x73aec + (43 * 0x20), indexCPS2Sprites_Shuma, 0x80 },
    { L"Shocked Light",  0x73acc + (44 * 0x20), 0x73aec + (44 * 0x20), indexCPS2Sprites_Shuma, 0x80 },
    { L"Shocked Dark",   0x73acc + (45 * 0x20), 0x73aec + (45 * 0x20), indexCPS2Sprites_Shuma, 0x80 },
    { L"Dark Burn Light",0x73acc + (46 * 0x20), 0x73aec + (46 * 0x20), indexCPS2Sprites_Shuma, 0x80 },
    { L"Dark Burn Dark", 0x73acc + (47 * 0x20), 0x73aec + (47 * 0x20), indexCPS2Sprites_Shuma, 0x80 },
    { L"Light Super Trail", 0x7364c, 0x7366c, indexCPS2Sprites_Shuma, 0x80 },
    { L"Dark Super Trail", 0x7366c, 0x7368c, indexCPS2Sprites_Shuma, 0x80 },
    { L"Death Factor Light", 0x7524c, 0x7526c, indexCPS2Sprites_Shuma, 0x80 },
    { L"Death Factor Dark", 0x7526c, 0x7528c, indexCPS2Sprites_Shuma, 0x80 },
    { L"Energy Drain Light", 0x7528c, 0x752ac, indexCPS2Sprites_Shuma, 0x80 },
    { L"Energy Drain Dark", 0x752ac, 0x752cc, indexCPS2Sprites_Shuma, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75b8c, 0x75bac, indexCPS2Sprites_Shuma, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75bac, 0x75bcc, indexCPS2Sprites_Shuma, 0x80 },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_STATUS[] =
{
    { L"Burning Light",  0x73acc + (48 * 0x20), 0x73aec + (48 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Burning Dark",   0x73acc + (49 * 0x20), 0x73aec + (49 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Shocked Light",  0x73acc + (50 * 0x20), 0x73aec + (50 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Shocked Dark",   0x73acc + (51 * 0x20), 0x73aec + (51 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Dark Burn Light",0x73acc + (52 * 0x20), 0x73aec + (52 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (53 * 0x20), 0x73aec + (53 * 0x20), indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Light Super Trail", 0x7368c, 0x736ac, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Dark Super Trail", 0x736ac, 0x736cc, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Death Factor Light", 0x752cc, 0x752ec, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Death Factor Dark", 0x752ec, 0x7530c, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Energy Drain Light", 0x7530c, 0x7532c, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Energy Drain Dark", 0x7532c, 0x7534c, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75bcc, 0x75bec, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75bec, 0x75c0c, indexCPS2Sprites_OmegaRed, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SPIDEY_STATUS[] =
{
    { L"Burning Light",  0x73acc + (54 * 0x20), 0x73aec + (54 * 0x20), indexCPS2Sprites_Spidey, 0x80 },
    { L"Burning Dark",   0x73acc + (55 * 0x20), 0x73aec + (55 * 0x20), indexCPS2Sprites_Spidey, 0x80 },
    { L"Shocked Light",  0x73acc + (56 * 0x20), 0x73aec + (56 * 0x20), indexCPS2Sprites_Spidey, 0x80 },
    { L"Shocked Dark",   0x73acc + (57 * 0x20), 0x73aec + (57 * 0x20), indexCPS2Sprites_Spidey, 0x80 },
    { L"Dark Burn Light",0x73acc + (58 * 0x20), 0x73aec + (58 * 0x20), indexCPS2Sprites_Spidey, 0x80 },
    { L"Dark Burn Dark", 0x73acc + (59 * 0x20), 0x73aec + (59 * 0x20), indexCPS2Sprites_Spidey, 0x80 },
    { L"Light Super Trail", 0x736cc, 0x736ec, indexCPS2Sprites_Spidey, 0x80 },
    { L"Dark Super Trail", 0x736ec, 0x7370c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Death Factor Light", 0x7534c, 0x7536c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Death Factor Dark", 0x7536c, 0x7538c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Energy Drain Light", 0x7538c, 0x753ac, indexCPS2Sprites_Spidey, 0x80 },
    { L"Energy Drain Dark", 0x753ac, 0x753cc, indexCPS2Sprites_Spidey, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75c0c, 0x75c2c, indexCPS2Sprites_Spidey, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75c2c, 0x75c4c, indexCPS2Sprites_Spidey, 0x80 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_STATUS[] =
{
    { L"Burning Light",  0x73acc + (60 * 0x20), 0x73aec + (60 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Burning Dark",   0x73acc + (61 * 0x20), 0x73aec + (61 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Shocked Light",  0x73acc + (62 * 0x20), 0x73aec + (62 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Shocked Dark",   0x73acc + (63 * 0x20), 0x73aec + (63 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Dark Burn Light",0x73acc + (64 * 0x20), 0x73aec + (64 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (65 * 0x20), 0x73aec + (65 * 0x20), indexCPS2Sprites_Blackheart, 0x00 },
    { L"Light Super Trail", 0x7370c, 0x7372c, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Dark Super Trail", 0x7372c, 0x7374c, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Death Factor Light", 0x753cc, 0x753ec, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Death Factor Dark", 0x753ec, 0x7540c, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Energy Drain Light", 0x7540c, 0x7542c, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Energy Drain Dark", 0x7542c, 0x7544c, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75c4c, 0x75c6c, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75c6c, 0x75c8c, indexCPS2Sprites_Blackheart, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_RYU_STATUS[] =
{
    { L"Burning Light",  0x73acc + (66 * 0x20), 0x73aec + (66 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Burning Dark",   0x73acc + (67 * 0x20), 0x73aec + (67 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Shocked Light",  0x73acc + (68 * 0x20), 0x73aec + (68 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Shocked Dark",   0x73acc + (69 * 0x20), 0x73aec + (69 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Dark Burn Light",0x73acc + (70 * 0x20), 0x73aec + (70 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (71 * 0x20), 0x73aec + (71 * 0x20), indexCPS2Sprites_Ryu, 0x00 },
    { L"Light Super Trail", 0x7374c, 0x7376c, indexCPS2Sprites_Ryu, 0x00 },
    { L"Dark Super Trail", 0x7376c, 0x7378c, indexCPS2Sprites_Ryu, 0x00 },
    { L"Death Factor Light", 0x7544c, 0x7546c, indexCPS2Sprites_Ryu, 0x00 },
    { L"Death Factor Dark", 0x7546c, 0x7548c, indexCPS2Sprites_Ryu, 0x00 },
    { L"Energy Drain Light", 0x7548c, 0x754ac, indexCPS2Sprites_Ryu, 0x00 },
    { L"Energy Drain Dark", 0x754ac, 0x754cc, indexCPS2Sprites_Ryu, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75c8c, 0x75cac, indexCPS2Sprites_Ryu, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75cac, 0x75ccc, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_STATUS[] =
{
    { L"Burning Light",  0x73acc + (72 * 0x20), 0x73aec + (72 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Burning Dark",   0x73acc + (73 * 0x20), 0x73aec + (73 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Shocked Light",  0x73acc + (74 * 0x20), 0x73aec + (74 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Shocked Dark",   0x73acc + (75 * 0x20), 0x73aec + (75 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Dark Burn Light",0x73acc + (76 * 0x20), 0x73aec + (76 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (77 * 0x20), 0x73aec + (77 * 0x20), indexCPS2Sprites_Ken, 0x00 },
    { L"Light Super Trail", 0x7378c, 0x737ac, indexCPS2Sprites_Ken, 0x00 },
    { L"Dark Super Trail", 0x737ac, 0x737cc, indexCPS2Sprites_Ken, 0x00 },
    { L"Death Factor Light", 0x754cc, 0x754ec, indexCPS2Sprites_Ken, 0x00 },
    { L"Death Factor Dark", 0x754ec, 0x7550c, indexCPS2Sprites_Ken, 0x00 },
    { L"Energy Drain Light", 0x7550c, 0x7552c, indexCPS2Sprites_Ken, 0x00 },
    { L"Energy Drain Dark", 0x7552c, 0x7554c, indexCPS2Sprites_Ken, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75ccc, 0x75cec, indexCPS2Sprites_Ken, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75cec, 0x75d0c, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_STATUS[] =
{
    { L"Burning Light",  0x73acc + (78 * 0x20), 0x73aec + (78 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Burning Dark",   0x73acc + (79 * 0x20), 0x73aec + (79 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Shocked Light",  0x73acc + (80 * 0x20), 0x73aec + (80 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Shocked Dark",   0x73acc + (81 * 0x20), 0x73aec + (81 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Dark Burn Light",0x73acc + (82 * 0x20), 0x73aec + (82 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Dark Burn Dark", 0x73acc + (83 * 0x20), 0x73aec + (83 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Kinetic 1 (Unused)",      0x73acc + (84 * 0x20), 0x73aec + (84 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Kinetic 2 (Unused)",      0x73acc + (85 * 0x20), 0x73aec + (85 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Kinetic 3 (Unused)",      0x73acc + (86 * 0x20), 0x73aec + (86 * 0x20), indexCPS2Sprites_ChunLi, 0x80 },
    { L"Light Super Trail", 0x737cc, 0x737ec, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Dark Super Trail", 0x737ec, 0x7380c, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Death Factor Light", 0x7554c, 0x7556c, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Death Factor Dark", 0x7556c, 0x7558c, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Energy Drain Light", 0x7558c, 0x755ac, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Energy Drain Dark", 0x755ac, 0x755cc, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75d0c, 0x75d2c, indexCPS2Sprites_ChunLi, 0x80 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75d2c, 0x75d4c, indexCPS2Sprites_ChunLi, 0x80 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_STATUS[] =
{
    { L"Burning Light",   0x73acc + (87 * 0x20), 0x73aec + (87 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Burning Dark",    0x73acc + (88 * 0x20), 0x73aec + (88 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Shocked Light",   0x73acc + (89 * 0x20), 0x73aec + (89 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Shocked Dark",    0x73acc + (90 * 0x20), 0x73aec + (90 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Dark Burn Light", 0x73acc + (91 * 0x20), 0x73aec + (91 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Dark Burn Dark",  0x73acc + (92 * 0x20), 0x73aec + (92 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kinetic 1 (Unused)",      0x73acc + (93 * 0x20), 0x73aec + (93 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kinetic 2 (Unused)",      0x73acc + (94 * 0x20), 0x73aec + (94 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kinetic 3 (Unused)",      0x73acc + (95 * 0x20), 0x73aec + (95 * 0x20), indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Light Super Trail", 0x7380c, 0x7382c, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Dark Super Trail", 0x7382c, 0x7384c, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Death Factor Light", 0x755cc, 0x755ec, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Death Factor Dark", 0x755ec, 0x7560c, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Energy Drain Light", 0x7560c, 0x7562c, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Energy Drain Dark", 0x7562c, 0x7564c, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75d4c, 0x75d6c, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75d6c, 0x75d8c, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_STATUS[] =
{
    { L"Burning Light",  0x73acc + (96 * 0x20), 0x73aec + (96 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Burning Dark",   0x73acc + (97 * 0x20), 0x73aec + (97 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Shocked Light",  0x73acc + (98 * 0x20), 0x73aec + (98 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Shocked Dark",   0x73acc + (99 * 0x20), 0x73aec + (99 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Dark Burn Light",0x73acc + (100 * 0x20), 0x73aec + (100 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (101 * 0x20), 0x73aec + (101 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Kinetic 1 (Unused)",      0x73acc + (102 * 0x20), 0x73aec + (102 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Kinetic 2 (Unused)",      0x73acc + (103 * 0x20), 0x73aec + (103 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Kinetic 3 (Unused)",      0x73acc + (104 * 0x20), 0x73aec + (104 * 0x20), indexCPS2Sprites_Zangief, 0x00 },
    { L"Light Super Trail", 0x7384c, 0x7386c, indexCPS2Sprites_Zangief, 0x00 },
    { L"Dark Super Trail", 0x7386c, 0x7388c, indexCPS2Sprites_Zangief, 0x00 },
    { L"Death Factor Light", 0x7564c, 0x7566c, indexCPS2Sprites_Zangief, 0x00 },
    { L"Death Factor Dark", 0x7566c, 0x7568c, indexCPS2Sprites_Zangief, 0x00 },
    { L"Energy Drain Light", 0x7568c, 0x756ac, indexCPS2Sprites_Zangief, 0x00 },
    { L"Energy Drain Dark", 0x756ac, 0x756cc, indexCPS2Sprites_Zangief, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75d8c, 0x75dac, indexCPS2Sprites_Zangief, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75dac, 0x75dcc, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_BISON_STATUS[] =
{
    { L"Burning Light",  0x73acc + (105 * 0x20), 0x73aec + (105 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Burning Dark",   0x73acc + (106 * 0x20), 0x73aec + (106 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Shocked Light",  0x73acc + (107 * 0x20), 0x73aec + (107 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Burning Light",  0x73acc + (108 * 0x20), 0x73aec + (108 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Burning Dark",   0x73acc + (109 * 0x20), 0x73aec + (109 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (110 * 0x20), 0x73aec + (110 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Kinetic 1 (Unused)",      0x73acc + (111 * 0x20), 0x73aec + (111 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Kinetic 2 (Unused)",      0x73acc + (112 * 0x20), 0x73aec + (112 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Kinetic 3 (Unused)",      0x73acc + (113 * 0x20), 0x73aec + (113 * 0x20), indexCPS2Sprites_Bison, 0x00 },
    { L"Light Super Trail", 0x7388c, 0x738ac, indexCPS2Sprites_Bison, 0x00 },
    { L"Dark Super Trail", 0x738ac, 0x738cc, indexCPS2Sprites_Bison, 0x00 },
    { L"Death Factor Light", 0x756cc, 0x756ec, indexCPS2Sprites_Bison, 0x00 },
    { L"Death Factor Dark", 0x756ec, 0x7570c , indexCPS2Sprites_Bison, 0x00},
    { L"Energy Drain Light", 0x7570c, 0x7572c, indexCPS2Sprites_Bison, 0x00 },
    { L"Energy Drain Dark", 0x7572c, 0x7574c, indexCPS2Sprites_Bison, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75dcc, 0x75dec, indexCPS2Sprites_Bison, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75dec, 0x75e0c, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (114 * 0x20), 0x73aec + (114 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Burning Dark",   0x73acc + (115 * 0x20), 0x73aec + (115 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Shocked Light",  0x73acc + (116 * 0x20), 0x73aec + (116 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Shocked Dark",   0x73acc + (117 * 0x20), 0x73aec + (117 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Burn Light",0x73acc + (118 * 0x20), 0x73aec + (118 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (119 * 0x20), 0x73aec + (119 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 1 (Unused)",      0x73acc + (120 * 0x20), 0x73aec + (120 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 2 (Unused)",      0x73acc + (121 * 0x20), 0x73aec + (121 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Kinetic 3 (Unused)",      0x73acc + (122 * 0x20), 0x73aec + (122 * 0x20), indexCPS2Sprites_Akuma, 0x00 },
    { L"Light Super Trail", 0x738cc, 0x738ec, indexCPS2Sprites_Akuma, 0x00 },
    { L"Dark Super Trail", 0x738ec, 0x7390c, indexCPS2Sprites_Akuma, 0x00 },
    { L"Death Factor Light", 0x7574c, 0x7576c, indexCPS2Sprites_Akuma, 0x00 },
    { L"Death Factor Dark", 0x7576c, 0x7578c, indexCPS2Sprites_Akuma, 0x00 },
    { L"Energy Drain Light", 0x7578c, 0x757ac, indexCPS2Sprites_Akuma, 0x00 },
    { L"Energy Drain Dark", 0x757ac, 0x757cc, indexCPS2Sprites_Akuma, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75e0c, 0x75e2c, indexCPS2Sprites_Akuma, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75e2c, 0x75e4c, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (123 * 0x20), 0x73aec + (123 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Burning Dark",   0x73acc + (124 * 0x20), 0x73aec + (124 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Shocked Light",  0x73acc + (125 * 0x20), 0x73aec + (125 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Shocked Dark",   0x73acc + (126 * 0x20), 0x73aec + (126 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Dark Burn Light",0x73acc + (127 * 0x20), 0x73aec + (127 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (128 * 0x20), 0x73aec + (128 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Kinetic 1 (Unused)",      0x73acc + (129 * 0x20), 0x73aec + (129 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Kinetic 2 (Unused)",      0x73acc + (130 * 0x20), 0x73aec + (130 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Kinetic 3 (Unused)",      0x73acc + (131 * 0x20), 0x73aec + (131 * 0x20), indexCPS2Sprites_Sakura, 0x00 },
    { L"Sakura Light Super Trail", 0x7390c, 0x7392c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Sakura Dark Super Trail", 0x7392c, 0x7394c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Dark Sakura Light Super Trail", 0x7394c, 0x7396c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Dark Sakura Dark Super Trail", 0x7396c, 0x7398c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Death Factor Light", 0x757cc, 0x757ec, indexCPS2Sprites_Sakura, 0x00 },
    { L"Death Factor Dark", 0x757ec, 0x7580c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Energy Drain Light", 0x7580c, 0x7582c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Energy Drain Dark", 0x7582c, 0x7584c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75e4c, 0x75e6c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75e6c, 0x75e8c , indexCPS2Sprites_Sakura, 0x00},
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_STATUS[] =
{
    { L"Burning Light",  0x73acc + (132 * 0x20), 0x73aec + (132 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Burning Dark",   0x73acc + (133 * 0x20), 0x73aec + (133 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Shocked Light",  0x73acc + (134 * 0x20), 0x73aec + (134 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Shocked Dark",   0x73acc + (135 * 0x20), 0x73aec + (135 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Dark Burn Light",0x73acc + (136 * 0x20), 0x73aec + (136 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Dark Burn Dark", 0x73acc + (137 * 0x20), 0x73aec + (137 * 0x20), indexCPS2Sprites_Norimaro, 0x00 },
    { L"Light Super Trail", 0x7398c, 0x739ac, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Dark Super Trail", 0x739ac, 0x739cc, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Death Factor Light", 0x7584c, 0x7586c, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Death Factor Dark", 0x7586c, 0x7588c, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Energy Drain Light", 0x7588c, 0x758ac, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Energy Drain Dark", 0x758ac, 0x758cc, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 1", 0x75e8c, 0x75eac, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Blackheart/Mephisto HP/HK Demons 2", 0x75eac, 0x75ecc, indexCPS2Sprites_Norimaro, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CSI_PALETTES[] =
{
    { L"Zangief CSI", 0x7990c, 0x7992c, indexCPS2Sprites_Zangief, 0x30 },
    { L"M. Bison CSI", 0x7992c, 0x7994c, indexCPS2Sprites_Bison, 0x30 },
    { L"Dhalsim CSI", 0x798Ec, 0x7990c, indexCPS2Sprites_Dhalsim, 0x30 },
    { L"Sakura CSI", 0x7996c, 0x7998c, indexCPS2Sprites_Sakura, 0x30 },
    { L"Akuma CSI", 0x7994c, 0x7996c, indexCPS2Sprites_Akuma, 0x30 },
    { L"Chun-Li CSI", 0x798Cc, 0x798Ec, indexCPS2Sprites_ChunLi, 0x30 },
    { L"Cyclops CSI", 0x7978c, 0x797Ac, indexCPS2Sprites_Cyclops, 0x30 },
    { L"Spider-Man CSI", 0x7984c, 0x7986c, indexCPS2Sprites_Spidey, 0x30 },
    { L"Captain America CSI", 0x797Ac, 0x797Cc, indexCPS2Sprites_CapAm, 0x30 },
    { L"Ken CSI", 0x798Ac, 0x798Cc, indexCPS2Sprites_Ken, 0x30 },
    { L"Ryu CSI", 0x7988c, 0x798Ac, indexCPS2Sprites_Ryu, 0x30 },
    { L"Dan CSI", 0x799Ac, 0x799Cc, indexCPS2Sprites_Dan, 0x30 },
    { L"Shuma-Gorath CSI", 0x7980c, 0x7982c, indexCPS2Sprites_Shuma, 0x30 },
    { L"Wolverine CSI", 0x797Ec, 0x7980c, indexCPS2Sprites_Wolverine, 0x30 },
    { L"Hulk CSI", 0x797Cc, 0x797Ec, indexCPS2Sprites_Hulk, 0x30 },
    { L"Blackheart CSI", 0x7986c, 0x7988c, indexCPS2Sprites_Blackheart, 0x30 },
    { L"Norimaro CSI", 0x7998c, 0x799Ac, indexCPS2Sprites_Norimaro, 0x30 },
    { L"Omega Red CSI", 0x7982c, 0x7984c, indexCPS2Sprites_OmegaRed, 0x30 },
    { L"MSHvSF Logo", 0x7a2ec, 0x7a30c },
};

const sGame_PaletteDataset MSHVSF_A_CHARSELECT_PALETTES[] =
{
    { L"Mode Select 1", 0x799cc, 0x799ec, indexCPS2Sprites_MSHVSFAssets, 0x39 },
    { L"Mode Select 2", 0x7a00c, 0x7a02c, indexCPS2Sprites_MSHVSFAssets, 0x39 },
    { L"Mode Select 3", 0x7a02c, 0x7a04c, indexCPS2Sprites_MSHVSFAssets, 0x39 },
    { L"Mode Select 4", 0x7a04c, 0x7a06c, indexCPS2Sprites_MSHVSFAssets, 0x39 },
    { L"Mode Select 5", 0x7a06c, 0x7a08c, indexCPS2Sprites_MSHVSFAssets, 0x39 },
    { L"Mode Select 6", 0x7a08c, 0x7a0ac, indexCPS2Sprites_MSHVSFAssets, 0x39 },
    { L"Mode Select 7", 0x7a0ac, 0x7a0cc, indexCPS2Sprites_MSHVSFAssets, 0x39 },
    { L"P Select Ring 1", 0x79a0c, 0x79a2c, indexCPS2Sprites_MSHVSFAssets, 0x2e },
    { L"P Select Ring 2", 0x7a10c, 0x7a12c, indexCPS2Sprites_MSHVSFAssets, 0x2e },
    { L"P Select Ring 3", 0x7a12c, 0x7a14c, indexCPS2Sprites_MSHVSFAssets, 0x2e },
    { L"P Select Ring 4", 0x7a14c, 0x7a16c, indexCPS2Sprites_MSHVSFAssets, 0x2e },
    { L"P Select Ring 5", 0x7a16c, 0x7a18c, indexCPS2Sprites_MSHVSFAssets, 0x2e },
    { L"P Select Ring 6", 0x7a18c, 0x7a1ac, indexCPS2Sprites_MSHVSFAssets, 0x2e },
    { L"K Select Ring 1", 0x79a2c, 0x79a4c, indexCPS2Sprites_MSHVSFAssets, 0x2f },
    { L"K Select Ring 2", 0x7a1ac, 0x7a1cc, indexCPS2Sprites_MSHVSFAssets, 0x2f },
    { L"K Select Ring 3", 0x7a1cc, 0x7a1ec, indexCPS2Sprites_MSHVSFAssets, 0x2f },
    { L"K Select Ring 4", 0x7a1ec, 0x7a20c, indexCPS2Sprites_MSHVSFAssets, 0x2f },
    { L"K Select Ring 5", 0x7a20c, 0x7a22c, indexCPS2Sprites_MSHVSFAssets, 0x2f },
    { L"K Select Ring 6", 0x7a22c, 0x7a24c, indexCPS2Sprites_MSHVSFAssets, 0x2f },
    { L"Character Name 1", 0x79a4c, 0x79a6c, indexCPS2Sprites_MSHVSFAssets, 0x38 },
    { L"Character Name 2", 0x7a26c, 0x7a28c, indexCPS2Sprites_MSHVSFAssets, 0x38 },
    { L"Character Name 3", 0x7a28c, 0x7a2ac, indexCPS2Sprites_MSHVSFAssets, 0x38 },
    { L"Character Select Frame", 0x67a92, 0x67ab2, indexCPS2Sprites_MSHVSFAssets, 0x2d },
    { L"Character Select Extras 1", 0x799ec, 0x79a0c, indexCPS2Sprites_MSHVSFAssets, 0x2c },
};

const sGame_PaletteDataset MSHVSF_A_SSP_PALETTES[] =
{
    // P to K SSP is diff 0x10E0
    { L"A. Spider-Man P SSP", 0x7DA4c, 0x7DA8c, indexCPS2Sprites_Spidey, 0x31 },
    { L"A. Spider-Man K SSP", 0x7EB2c, 0x7EB6c, indexCPS2Sprites_Spidey, 0x31 },
    { L"Akuma P SSP", 0x7D40c, 0x7D48c, indexCPS2Sprites_Akuma, 0x31 },
    { L"Akuma K SSP", 0x7E4Ec, 0x7E56c, indexCPS2Sprites_Akuma, 0x31 },
    { L"Blackheart P SSP", 0x7CFAc, 0x7D02c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Blackheart K SSP", 0x7E08c, 0x7E10c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Captain America P SSP", 0x7CBEc, 0x7CC8c, indexCPS2Sprites_CapAm, 0x31 },
    { L"Captain America K SSP", 0x7DCCc, 0x7DD6c, indexCPS2Sprites_CapAm, 0x31 },
    { L"Chun-Li P SSP", 0x7D18c, 0x7D20c, indexCPS2Sprites_ChunLi, 0x31 },
    { L"Chun-Li K SSP", 0x7E26c, 0x7E2Ec, indexCPS2Sprites_ChunLi, 0x31 },
    { L"Cyber Akuma P SSP", 0x7D68c, 0x7D70c, indexCPS2Sprites_CyberAkuma, 0x31 },
    { L"Cyber Akuma K SSP", 0x7E76c, 0x7E7Ec, indexCPS2Sprites_CyberAkuma, 0x31 },
    { L"Cyclops P SSP", 0x7CB4c, 0x7CBEc, indexCPS2Sprites_Cyclops, 0x31 },
    { L"Cyclops K SSP", 0x7DC2c, 0x7DCCc, indexCPS2Sprites_Cyclops, 0x31 },
    { L"Dan P SSP", 0x7D5Ec, 0x7D66c, indexCPS2Sprites_Dan, 0x31 },
    { L"Dan K SSP", 0x7E6Cc, 0x7E74c, indexCPS2Sprites_Dan, 0x31 },
    { L"Dark Sakura P SSP", 0x7D7Cc, 0x7D84c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Dark Sakura K SSP", 0x7E8Ac, 0x7E92c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Dhalsim P SSP", 0x7D22c, 0x7D2Ac, indexCPS2Sprites_Dhalsim, 0x31 },
    { L"Dhalsim K SSP", 0x7E30c, 0x7E38c, indexCPS2Sprites_Dhalsim, 0x31 },
    { L"Hulk P SSP", 0x7CC8c, 0x7CCEc, indexCPS2Sprites_Hulk, 0x31 },
    { L"Hulk K SSP", 0x7DD6c, 0x7DDCc, indexCPS2Sprites_Hulk, 0x31 },
    { L"Ken P SSP", 0x7D0EC, 0x7D18C, indexCPS2Sprites_Ken, 0x31 },
    { L"Ken K SSP", 0x7E1CC, 0x7E26C, indexCPS2Sprites_Ken, 0x31 },
    { L"M. Bison P SSP", 0x7D36c, 0x7D3Ec, indexCPS2Sprites_Bison, 0x31 },
    { L"M. Bison K SSP", 0x7E44c, 0x7E4Cc, indexCPS2Sprites_Bison, 0x31 },
    { L"Mech Zangief P SSP", 0x7D72c, 0x7D78c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Mech Zangief K SSP", 0x7E80c, 0x7E86c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Mephisto P SSP", 0x7D9Ac, 0x7DA2c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Mephisto K SSP", 0x7EA8c, 0x7EB0c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Norimaro P SSP", 0x7D54c, 0x7D5Ec, indexCPS2Sprites_Norimaro, 0x31 },
    { L"Norimaro K SSP", 0x7E62c, 0x7E6Cc, indexCPS2Sprites_Norimaro, 0x31 },
    { L"Omega Red P SSP", 0x7CE6c, 0x7CEEc, indexCPS2Sprites_OmegaRed, 0x31 },
    { L"Omega Red K SSP", 0x7DF4c, 0x7DFCc, indexCPS2Sprites_OmegaRed, 0x31 },
    { L"Ryu P SSP", 0x7D04c, 0x7D0Cc, indexCPS2Sprites_Ryu, 0x31 },
    { L"Ryu K SSP", 0x7E12c, 0x7E1Ac, indexCPS2Sprites_Ryu, 0x31 },
    { L"Sakura P SSP", 0x7D4Ac, 0x7D52c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Sakura K SSP", 0x7E58c, 0x7E60c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Shadow P SSP", 0x7D86c, 0x7D90c, indexCPS2Sprites_Charlie, 0x31 },
    { L"Shadow K SSP", 0x7E94c, 0x7E9Ec, indexCPS2Sprites_Charlie, 0x31 },
    { L"Shuma-Gorath P SSP", 0x7CDCc, 0x7CE2c, indexCPS2Sprites_Shuma, 0x31 },
    { L"Shuma-Gorath K SSP", 0x7DEAc, 0x7DF0c, indexCPS2Sprites_Shuma, 0x31 },
    { L"Spider-Man P SSP", 0x7CF0c, 0x7CF4c, indexCPS2Sprites_Spidey, 0x31 },
    { L"Spider-Man K SSP", 0x7DFEc, 0x7E02c, indexCPS2Sprites_Spidey, 0x31 },
    { L"US Agent P SSP", 0x7D90c, 0x7D9Ac, indexCPS2Sprites_CapAm, 0x31 },
    { L"US Agent K SSP", 0x7E9Ec, 0x7EA8c, indexCPS2Sprites_CapAm, 0x31 },
    { L"Wolverine P SSP", 0x7CD2c, 0x7CDAc, indexCPS2Sprites_Wolverine, 0x31 },
    { L"Wolverine K SSP", 0x7DE0c, 0x7DE8c, indexCPS2Sprites_Wolverine, 0x31 },
    { L"Zangief P SSP", 0x7D2Cc, 0x7D32c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Zangief K SSP", 0x7E3Ac, 0x7E40c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Apocalypse P SSP", 0x7CAAc, 0x7CB0c, 0x4F, 0x31 },
    { L"Apocalypse K SSP", 0x7DB8c, 0x7DBEc, 0x4F, 0x31 },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_UNPORT_PALETTES[] =
{
    { L"Apocalypse", 0x7be2c, 0x7becc },
    { L"Cyclops", 0x7becc, 0x7bf6c },
    { L"Captain America", 0x7bf6c, 0x7bfec },
    { L"Hulk", 0x7c00c, 0x7c06c },
    { L"Wolverine", 0x7c0ac, 0x7c14c },
    { L"Shuma-Gorath", 0x7c14c, 0x7c1cc },
    { L"Omega Red", 0x7c1ec, 0x7c24c },
    { L"Spider-Man", 0x7c28c, 0x7c2cc },
    { L"Blackheart", 0x7c32c, 0x7c36c },
    { L"Ryu", 0x7c3cc, 0x7c44c },
    { L"Ken", 0x7c46c, 0x7c50c },
    { L"Chun Li", 0x7c50c, 0x7c5ac },
    { L"Dhalsim", 0x7c5ac, 0x7c64c },
    { L"Zangief", 0x7c64c, 0x7c6ac },
    { L"M. Bison", 0x7c6ec, 0x7c78c },
    { L"Akuma", 0x7c78c, 0x7c7ec },
    { L"Sakura", 0x7c82c, 0x7c8cc },
    { L"Dan", 0x7c96c, 0x7ca0c },
    { L"Cyber Akuma", 0x7ca0c, 0x7caac },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES[] =
{
    // P to K VSPs are also a difference of 0x10E0
    { L"A. Spider-Man P VSP", 0x7FD4c, 0x7FD8c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"Akuma P VSP", 0x7F70c, 0x7F78c, indexCPS2Sprites_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P VSP", 0x7F2Ac, 0x7F2Ec, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P VSP", 0x7EEEc, 0x7EF8c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Captain America K VSP Part 1", 0x7FFCc, 0x80000 },
    { L"Chun-Li P VSP", 0x7F48c, 0x7F4Ec, indexCPS2Sprites_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P VSP", 0x7F98c, 0x7FA2c, indexCPS2Sprites_CyberAkuma, indexMSHVSF_VSP },
    { L"Cyclops P VSP", 0x7EE4c, 0x7EEEc, indexCPS2Sprites_Cyclops, indexMSHVSF_VSP },
    { L"Cyclops K VSP", 0x7FF2c, 0x7FFCc, indexCPS2Sprites_Cyclops, indexMSHVSF_VSP },
    { L"Dan P VSP", 0x7F8Ec, 0x7F98c, indexCPS2Sprites_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P VSP", 0x7FACc, 0x7FB6c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P VSP", 0x7F52c, 0x7F5Cc, indexCPS2Sprites_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P VSP", 0x7EF8c, 0x7EFEc, indexCPS2Sprites_Hulk, indexMSHVSF_VSP },
    { L"Ken P VSP", 0x7F3Ec, 0x7F48c, indexCPS2Sprites_Ken, indexMSHVSF_VSP },
    { L"Omega Red P VSP", 0x7F16c, 0x7F20c, indexCPS2Sprites_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P VSP", 0x7F66c, 0x7F70c, indexCPS2Sprites_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P VSP", 0x7FA2c, 0x7FACc, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P VSP", 0x7FCAc, 0x7FCEc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P VSP", 0x7F84c, 0x7F8Ec, indexCPS2Sprites_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P VSP", 0x7F34c, 0x7F3Ec, indexCPS2Sprites_Ryu, indexMSHVSF_VSP },
    { L"Sakura P VSP", 0x7F7Ac, 0x7F84c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Shadow P VSP", 0x7FB6c, 0x7FC0c, indexCPS2Sprites_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P VSP", 0x7F0Cc, 0x7F14c, indexCPS2Sprites_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P VSP", 0x7F20c, 0x7F24c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"U.S Agent P VSP", 0x7FC0c, 0x7FCAc, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P VSP", 0x7F02c, 0x7F0Cc, indexCPS2Sprites_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P VSP", 0x7F5Cc, 0x7F66c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Apocalypse P VSP", 0x7EDAc, 0x7EE4c, indexCPS2Sprites_Apocalypse, indexMSHVSF_VSP },
    { L"Apocalypse K VSP", 0x7FE8c, 0x7FF2c, indexCPS2Sprites_Apocalypse, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES_7B[] =
{
    { L"A. Spider-Man K VSP", 0xe2c, 0xe6c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP  },
    { L"Akuma K VSP", 0x7ec, 0x86c, indexCPS2Sprites_Akuma, indexMSHVSF_VSP },
    { L"Blackheart K VSP", 0x38c, 0x3cc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Captain America K VSP Part 2", 0x000, 0x06c },
    { L"Chun-Li K VSP", 0x56c, 0x5cc, indexCPS2Sprites_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma K VSP", 0xA6c, 0xB0c, indexCPS2Sprites_CyberAkuma, indexMSHVSF_VSP },
    { L"Dan K VSP", 0x9cc, 0xa6c, indexCPS2Sprites_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura K VSP", 0xbac, 0xc4c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim K VSP", 0x60c, 0x6ac, indexCPS2Sprites_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk K VSP", 0x06c, 0x0cc, indexCPS2Sprites_Hulk, indexMSHVSF_VSP },
    { L"Ken K VSP", 0x4cc, 0x56c, indexCPS2Sprites_Ken, indexMSHVSF_VSP },
    { L"Omega Red K VSP", 0x24c, 0x2ec, indexCPS2Sprites_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison K VSP", 0x74c, 0x7ec, indexCPS2Sprites_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief K VSP", 0xb0c, 0xbac, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Mephisto K VSP", 0xd8c, 0xdcc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro K VSP", 0x92c, 0x9cc, indexCPS2Sprites_Norimaro, indexMSHVSF_VSP },
    { L"Ryu K VSP", 0x42c, 0x4cc, indexCPS2Sprites_Ryu, indexMSHVSF_VSP },
    { L"Sakura K VSP", 0x88c, 0x92c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Shadow K VSP", 0xC4c, 0xCEc, indexCPS2Sprites_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath K VSP", 0x1ac, 0x22c, indexCPS2Sprites_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man K VSP", 0x2ec, 0x32c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"US Agent K VSP", 0xcec, 0xd8c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Wolverine K VSP", 0x10c, 0x1ac, indexCPS2Sprites_Wolverine, indexMSHVSF_VSP },
    { L"Zangief K VSP", 0x6ac, 0x74c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES_STEAM[] =
{
    // P to K VSPs are also a difference of 0x10E0
    { L"A. Spider-Man P VSP", 0x7FD4c, 0x7FD8c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    // This is slightly ugly, but unifying them into one unit allows us to rejoin the otherwise split CaptAm Kick palette
    { L"A. Spider-Man K VSP", 0x80000 + 0xe2c, 0x80000 + 0xe6c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP  },
    { L"Akuma P VSP", 0x7F70c, 0x7F78c, indexCPS2Sprites_Akuma, indexMSHVSF_VSP },
    { L"Akuma K VSP", 0x80000 + 0x7ec, 0x80000 + 0x86c, indexCPS2Sprites_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P VSP", 0x7F2Ac, 0x7F2Ec, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Blackheart K VSP", 0x80000 + 0x38c, 0x80000 + 0x3cc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P VSP", 0x7EEEc, 0x7EF8c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Captain America K VSP", 0x7FFCc, 0x80000 + 0x8006c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Chun-Li P VSP", 0x7F48c, 0x7F4Ec, indexCPS2Sprites_ChunLi, indexMSHVSF_VSP },
    { L"Chun-Li K VSP", 0x80000 + 0x56c, 0x80000 + 0x5cc, indexCPS2Sprites_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P VSP", 0x7F98c, 0x7FA2c, indexCPS2Sprites_CyberAkuma, indexMSHVSF_VSP },
    { L"Cyber Akuma K VSP", 0x80000 + 0xA6c, 0x80000 + 0xB0c, indexCPS2Sprites_CyberAkuma, indexMSHVSF_VSP },
    { L"Cyclops P VSP", 0x7EE4c, 0x7EEEc, indexCPS2Sprites_Cyclops, indexMSHVSF_VSP },
    { L"Cyclops K VSP", 0x7FF2c, 0x7FFCc, indexCPS2Sprites_Cyclops, indexMSHVSF_VSP },
    { L"Dan P VSP", 0x7F8Ec, 0x7F98c, indexCPS2Sprites_Dan, indexMSHVSF_VSP },
    { L"Dan K VSP", 0x80000 + 0x9cc, 0x80000 + 0xa6c, indexCPS2Sprites_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P VSP", 0x7FACc, 0x7FB6c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Dark Sakura K VSP", 0x80000 + 0xbac, 0x80000 + 0xc4c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P VSP", 0x7F52c, 0x7F5Cc, indexCPS2Sprites_Dhalsim, indexMSHVSF_VSP },
    { L"Dhalsim K VSP", 0x80000 + 0x60c, 0x80000 + 0x6ac, indexCPS2Sprites_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P VSP", 0x7EF8c, 0x7EFEc, indexCPS2Sprites_Hulk, indexMSHVSF_VSP },
    { L"Hulk K VSP", 0x80000 + 0x06c, 0x80000 + 0x0cc, indexCPS2Sprites_Hulk, indexMSHVSF_VSP },
    { L"Ken P VSP", 0x7F3Ec, 0x7F48c, indexCPS2Sprites_Ken, indexMSHVSF_VSP },
    { L"Ken K VSP", 0x80000 + 0x4cc, 0x80000 + 0x56c, indexCPS2Sprites_Ken, indexMSHVSF_VSP },
    { L"Omega Red P VSP", 0x7F16c, 0x7F20c, indexCPS2Sprites_OmegaRed, indexMSHVSF_VSP },
    { L"Omega Red K VSP", 0x80000 + 0x24c, 0x80000 + 0x2ec, indexCPS2Sprites_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P VSP", 0x7F66c, 0x7F70c, indexCPS2Sprites_Bison, indexMSHVSF_VSP },
    { L"M. Bison K VSP", 0x80000 + 0x74c, 0x80000 + 0x7ec, indexCPS2Sprites_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P VSP", 0x7FA2c, 0x7FACc, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Mech Zangief K VSP", 0x80000 + 0xb0c, 0x80000 + 0xbac, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P VSP", 0x7FCAc, 0x7FCEc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Mephisto K VSP", 0x80000 + 0xd8c, 0x80000 + 0xdcc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P VSP", 0x7F84c, 0x7F8Ec, indexCPS2Sprites_Norimaro, indexMSHVSF_VSP },
    { L"Norimaro K VSP", 0x80000 + 0x92c, 0x80000 + 0x9cc, indexCPS2Sprites_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P VSP", 0x7F34c, 0x7F3Ec, indexCPS2Sprites_Ryu, indexMSHVSF_VSP },
    { L"Ryu K VSP", 0x80000 + 0x42c, 0x80000 + 0x4cc, indexCPS2Sprites_Ryu, indexMSHVSF_VSP },
    { L"Sakura P VSP", 0x7F7Ac, 0x7F84c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Sakura K VSP", 0x80000 + 0x88c, 0x80000 + 0x92c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Shadow P VSP", 0x7FB6c, 0x7FC0c, indexCPS2Sprites_Charlie, indexMSHVSF_VSP },
    { L"Shadow K VSP", 0x80000 + 0xC4c, 0x80000 + 0xCEc, indexCPS2Sprites_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P VSP", 0x7F0Cc, 0x7F14c, indexCPS2Sprites_Shuma, indexMSHVSF_VSP },
    { L"Shuma-Gorath K VSP", 0x80000 + 0x1ac, 0x80000 + 0x22c, indexCPS2Sprites_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P VSP", 0x7F20c, 0x7F24c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"Spider-Man K VSP", 0x80000 + 0x2ec, 0x80000 + 0x32c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"U.S Agent P VSP", 0x7FC0c, 0x7FCAc, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"US Agent K VSP", 0x80000 + 0xcec, 0x80000 + 0xd8c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P VSP", 0x7F02c, 0x7F0Cc, indexCPS2Sprites_Wolverine, indexMSHVSF_VSP },
    { L"Wolverine K VSP", 0x80000 + 0x10c, 0x80000 + 0x1ac, indexCPS2Sprites_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P VSP", 0x7F5Cc, 0x7F66c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Zangief K VSP", 0x80000 + 0x6ac, 0x80000 + 0x74c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Apocalypse P VSP", 0x7EDAc, 0x7EE4c, indexCPS2Sprites_Apocalypse, indexMSHVSF_VSP },
    { L"Apocalypse K VSP", 0x7FE8c, 0x7FF2c, indexCPS2Sprites_Apocalypse, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_CSP_PALETTES_7B[] =
{
    { L"Apocalypse", 0xf6c, 0x100c, indexCPS2Sprites_Apocalypse, indexMSHVSF_VSP },
    { L"Cyclops", 0x100c, 0x10ac, indexCPS2Sprites_Cyclops, indexMSHVSF_VSP },
    { L"Captain America", 0x10ac, 0x114c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Hulk", 0x114c, 0x11ec, indexCPS2Sprites_Hulk, indexMSHVSF_VSP },
    { L"Wolverine", 0x11ec, 0x128c, indexCPS2Sprites_Wolverine, indexMSHVSF_VSP },
    { L"Shuma-Gorath", 0x128c, 0x132c, indexCPS2Sprites_Shuma, indexMSHVSF_VSP },
    { L"Omega Red", 0x132c, 0x13cc, indexCPS2Sprites_OmegaRed, indexMSHVSF_VSP },
    { L"Spider-Man", 0x13cc, 0x146c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"Blackheart", 0x146c, 0x150c, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Ryu", 0x150c, 0x15ac, indexCPS2Sprites_Ryu, indexMSHVSF_VSP },
    { L"Ken", 0x15ac, 0x164c, indexCPS2Sprites_Ken, indexMSHVSF_VSP },
    { L"Chun-Li", 0x164c, 0x16ec, indexCPS2Sprites_ChunLi, indexMSHVSF_VSP },
    { L"Dhalsim", 0x16ec, 0x178c, indexCPS2Sprites_Dhalsim, indexMSHVSF_VSP },
    { L"Zangief", 0x178c, 0x182c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"M. Bison", 0x182c, 0x18cc, indexCPS2Sprites_Bison, indexMSHVSF_VSP },
    { L"Akuma", 0x18cc, 0x196c, indexCPS2Sprites_Akuma, indexMSHVSF_VSP },
    { L"Sakura", 0x196c, 0x1a0c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Norimaro", 0x1a0c, 0x1aac, indexCPS2Sprites_Norimaro, indexMSHVSF_VSP },
    { L"Dan", 0x1aac, 0x1b4c, indexCPS2Sprites_Dan, indexMSHVSF_VSP },
    { L"Cyber Akuma", 0x1b4c, 0x1bec, indexCPS2Sprites_CyberAkuma, indexMSHVSF_VSP },
    { L"Mech Zangief", 0x1bec, 0x1c8c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Dark Sakura", 0x1c8c, 0x1d2c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Shadow", 0x1d2c, 0x1dac, indexCPS2Sprites_Charlie, indexMSHVSF_VSP },
};

// Extra - Not Needed v
//    { L"Temple of Fists - Uknown [PL#600.2]", 0x60472, 0x60552 },

const sGame_PaletteDataset MSHVSF_A_BONUS_HUD_PALETTES[] =
{
    { L"Main HUD", 0x71a4c, 0x71a8c, indexCPS2Sprites_MSHVSFAssets, 0x18 },
    { L"HUD Text / Meter Level 0", 0x7198c, 0x719ac, indexCPS2Sprites_MSHVSFAssets, 0x19 },
    { L"Game Text / VS Screen Text / Win Quotes", 0x719ac, 0x719cc, indexCPS2Sprites_MSHVSFAssets, 0x1d },
    { L"Offscreen Icons", 0x719cc, 0x719ec, indexCPS2Sprites_MSHVSFAssets, 0x1a },
    { L"Assist Icons", 0x71c8c, 0x71cec, indexCPS2Sprites_MSHVSFAssets, 0x17 },
    { L"Super Bar/HUD BG Lvl 0-1", 0x71a8c, 0x71b0c, indexCPS2Sprites_MSHVSFAssets, 0x1e },
    { L"Super Bar/HUD BG Lvl 2", 0x71b0c, 0x71b8c, indexCPS2Sprites_MSHVSFAssets, 0x1e },
    { L"Super Bar/HUD BG Lvl 3", 0x71b8c, 0x71c0c, indexCPS2Sprites_MSHVSFAssets, 0x1e },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_INTRO_PALETTES[] =
{
    { L"Capcom Intro Logo", 0x6dd2a, 0x6dd4a, indexCPS2Sprites_MSHVSFAssets, 0x35 },
    { L"Q-Sound Logo", 0x6da0a, 0x6da4a, indexCPS2Sprites_MSHVSFAssets, 0x36 },
    { L"Q-Sound Text", 0x63dd2, 0x63df2, indexCPS2Sprites_MSHVSFAssets, 0x3a },
    { L"Ryu/Globe Logo", 0x6d92a, 0x6d94a, indexCPS2Sprites_MSHVSFAssets, 0x37 },
    { L"Spider-Man Intro Portrait", 0x6d94a, 0x6d9ca, indexCPS2Sprites_MSHVSFAssets, 0x34 },
    { L"Spider-Man Intro BG 1", 0x6de6a, 0x6de8a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 2", 0x6e72a, 0x6e74a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 3", 0x6e74a, 0x6e76a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 4", 0x6e76a, 0x6e78a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 5", 0x6e78a, 0x6e7aa, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 6", 0x6e7aa, 0x6e7ca, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 7", 0x6e7ca, 0x6e7ea, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 8", 0x6e7ea, 0x6e80a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 9", 0x6e80a, 0x6e82a , indexCPS2Sprites_MSHVSFAssets, 0x33},
    { L"Spider-Man Intro BG 10", 0x6e82a, 0x6e84a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 11", 0x6e84a, 0x6e86a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 12", 0x6e86a, 0x6e88a, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 13", 0x6e88a, 0x6e8aa, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Spider-Man Intro BG 14", 0x6e8aa, 0x6e8ca, indexCPS2Sprites_MSHVSFAssets, 0x33 },
    { L"Ryu Intro Portrait", 0x6d9ca, 0x6da0a, indexCPS2Sprites_MSHVSFAssets, 0x32 },
    { L"Ryu Intro BG 1", 0x6de8a, 0x6deaa, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 2", 0x6e8ca, 0x6e8ea, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 3", 0x6e8ea, 0x6e90a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 4", 0x6e90a, 0x6e92a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 5", 0x6e92a, 0x6e94a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 6", 0x6e94a, 0x6e96a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 7", 0x6e96a, 0x6e98a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 8", 0x6e98a, 0x6e9aa, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 9", 0x6e9aa, 0x6e9ca, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 10", 0x6e9ca, 0x6e9ea, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 11", 0x6e9ea, 0x6ea0a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 12", 0x6ea0a, 0x6ea2a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 13", 0x6ea2a, 0x6ea4a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Ryu Intro BG 14", 0x6ea4a, 0x6ea6a, indexCPS2Sprites_MSHVSFAssets, 0x31 },
    { L"Intro BG 1", 0x70e8a, 0x70eaa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 2", 0x70eaa, 0x70eca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 3", 0x70eca, 0x70eea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 4", 0x70eea, 0x70f0a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 5", 0x70f0a, 0x70f2a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 6", 0x70f2a, 0x70f4a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 7", 0x70f4a, 0x70f6a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 8", 0x70f6a, 0x70f8a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 9", 0x70f8a, 0x70faa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 10", 0x70faa, 0x70fca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 11", 0x70fca, 0x70fea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 12", 0x70fea, 0x7100a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 13", 0x7100a, 0x7102a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 14", 0x7102a, 0x7104a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 15", 0x7104a, 0x7106a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 16", 0x7106a, 0x7108a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 17", 0x7108a, 0x710aa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 18", 0x710aa, 0x710ca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 19", 0x710ca, 0x710ea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 20", 0x710ea, 0x7110a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 21", 0x7110a, 0x7112a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 22", 0x7112a, 0x7114a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 23", 0x7114a, 0x7116a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 24", 0x7116a, 0x7118a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 25", 0x7118a, 0x711aa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 26", 0x711aa, 0x711ca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 27", 0x711ca, 0x711ea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 28", 0x711ea, 0x7120a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 29", 0x7120a, 0x7122a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 30", 0x7122a, 0x7124a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 31", 0x7124a, 0x7126a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 32", 0x7126a, 0x7128a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 33", 0x7128a, 0x712aa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 34", 0x712aa, 0x712ca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 35", 0x712ca, 0x712ea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 36", 0x712ea, 0x7130a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 37", 0x7130a, 0x7132a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 38", 0x7132a, 0x7134a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 39", 0x7134a, 0x7136a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 40", 0x7136a, 0x7138a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 41", 0x7138a, 0x713aa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 42", 0x713aa, 0x713ca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 43", 0x713ca, 0x713ea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 44", 0x713ea, 0x7140a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 45", 0x7140a, 0x7142a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 46", 0x7142a, 0x7144a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 47", 0x7144a, 0x7146a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 48", 0x7146a, 0x7148a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 49", 0x7148a, 0x714aa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 50", 0x714aa, 0x714ca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 51", 0x714ca, 0x714ea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 52", 0x714ea, 0x7150a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 53", 0x7150a, 0x7152a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 54", 0x7152a, 0x7154a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 55", 0x7154a, 0x7156a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 56", 0x7156a, 0x7158a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 57", 0x7158a, 0x715aa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 58", 0x715aa, 0x715ca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 59", 0x715ca, 0x715ea, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 60", 0x715ea, 0x7160a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 61", 0x7160a, 0x7162a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 62", 0x7162a, 0x7164a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 63", 0x7164a, 0x7166a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 64", 0x7166a, 0x7168a, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 65", 0x7168a, 0x716aa, indexCPS2Sprites_MSHVSFAssets, 0x30 },
    { L"Intro BG 66", 0x716aa, 0x716ca, indexCPS2Sprites_MSHVSFAssets, 0x30 },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_HITSPARK_PALETTES[] =
{
    { L"P Hit Sparks", 0x200c, 0x202c },
    { L"K Hit Sparks", 0x1fec, 0x200c },
    { L"Dark Fire, Hit/Block, Super, Shadow", 0x202c, 0x204c },
    { L"Wall Press/Ground Press", 0x204c, 0x206c },
    { L"Dust, Dash & Super Jump", 0x206c, 0x208c },
    { L"Fire Hits, Electric", 0x208c, 0x20ac },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_7bCSEL_PALETTES[] =
{
    { L"Character Select BG", 0xa09c, 0xa0fc, indexCPS2Sprites_MSHVSFAssets, 0x2b },
    { L"Character Select Extras 2", 0x9fdc, 0x9ffc, indexCPS2Sprites_MSHVSFAssets, 0x2c },
    { L"Character Select Extras 3", 0x9ffc, 0xa01c, indexCPS2Sprites_MSHVSFAssets, 0x2c },
    { L"Character Select Extras 4", 0xa01c, 0xa03c, indexCPS2Sprites_MSHVSFAssets, 0x2c },
    { L"Character Select Extras 5", 0xa03c, 0xa05c, indexCPS2Sprites_MSHVSFAssets, 0x2c },
    { L"Character Select Extras 6", 0xa05c, 0xa07c, indexCPS2Sprites_MSHVSFAssets, 0x2c },
    { L"Character Select Extras 7", 0xa07c, 0xA09C, indexCPS2Sprites_MSHVSFAssets, 0x2c },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_7bTITLE_PALETTES[] =
{
    { L"Marvel Intro Logo Small", 0x212c, 0x214c, indexCPS2Sprites_MSHVSFAssets, 0x3b },
    { L"Marvel Intro Logo Large", 0x214c, 0x21cc, indexCPS2Sprites_MSHVSFAssets, 0x3c },
    { L"Street Fighter Logo", 0x21cc, 0x228c, indexCPS2Sprites_MSHVSFAssets, 0x3d },
    { L"VS Logo 1", 0x22ec, 0x230c, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 2", 0x2aac, 0x2acc, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 3", 0x2a8c, 0x2aac, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 4", 0x2a6c, 0x2a8c, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 5", 0x2a4c, 0x2a6c, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 6", 0x2a2c, 0x2a4c, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 7", 0x2a0c, 0x2a2c, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 8", 0x29ec, 0x2a0c, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 9", 0x29cc, 0x29ec, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 10", 0x29ac, 0x29cc, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 11", 0x298c, 0x29ac, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"VS Logo 12", 0x296c, 0x298c, indexCPS2Sprites_MSHVSFAssets, 0x3e },
    { L"Logo Flash 1", 0x22ac, 0x22ec, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 2", 0x304c, 0x308c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 3", 0x292c, 0x296c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 4", 0x28ec, 0x292c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 5", 0x28ac, 0x28ec, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 6", 0x286c, 0x28ac, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 7", 0x282c, 0x286c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 8", 0x27ec, 0x282c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 9", 0x27ac, 0x27ec, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 10", 0x276c, 0x27ac, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 11", 0x272c, 0x276c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 12", 0x26ec, 0x272c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 13", 0x26ac, 0x26ec, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 14", 0x266c, 0x26ac, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 15", 0x262c, 0x266c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 16", 0x25ec, 0x262c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 17", 0x25ac, 0x25ec, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 18", 0x256c, 0x25ac, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 19", 0x252c, 0x256c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 20", 0x24ec, 0x252c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 21", 0x24ac, 0x24ec, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 22", 0x246c, 0x24ac, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 23", 0x242c, 0x246c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 24", 0x23ec, 0x242c, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 25", 0x23ac, 0x23ec, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Logo Flash 26", 0x236c, 0x23ac, indexCPS2Sprites_MSHVSFAssets, 0x3f },
    { L"Background 1", 0x230c, 0x236c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 2", 0x308c, 0x30ec, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 3", 0x2e2c, 0x2e8c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 4", 0x2dcc, 0x2e2c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 5", 0x2d6c, 0x2dcc, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 6", 0x2d0c, 0x2d6c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 7", 0x2cac, 0x2d0c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 8", 0x2c4c, 0x2cac, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 9", 0x2bec, 0x2c4c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 10", 0x2b8c, 0x2bec, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 11", 0x2b2c, 0x2b8c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
    { L"Background 12", 0x2acc, 0x2b2c, indexCPS2Sprites_MSHVSFAssets, 0x40 },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_7bBONUS_PALETTES[] =
{
    { L"Win Screen MSHvSF Logo", 0x1e2c, 0x1f4c, indexCPS2Sprites_MSHVSFAssets, 0x43 },
    { L"Win Screen Text Box", 0x1f8c, 0x1fac, indexCPS2Sprites_MSHVSFAssets, 0x44 },
    { L"Win Screen Border", 0x1fac, 0x1fec, indexCPS2Sprites_MSHVSFAssets, 0x42 },
    { L"Win Screen BG", 0xa0fc, 0xa13c, indexCPS2Sprites_MSHVSFAssets, 0x41 },

    { L"VS Screen FB # 1", 0x75fc, 0x761c, indexCPS2Sprites_MSHVSFAssets, 0x25 },
    { L"VS Screen VS Text 1", 0x7b7c, 0x7b9c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 2", 0x7b9c, 0x7bbc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 3", 0x7bbc, 0x7bdc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 4", 0x7bdc, 0x7bfc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 5", 0x7bfc, 0x7c1c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 6", 0x7c1c, 0x7c3c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 7", 0x7c3c, 0x7c5c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 8", 0x7c5c, 0x7c7c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 9", 0x7c7c, 0x7c9c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 10", 0x7c9c, 0x7cbc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 11", 0x7cbc, 0x7cdc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 12", 0x7cdc, 0x7cfc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 13", 0x7cfc, 0x7d1c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 14", 0x7d1c, 0x7d3c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 15", 0x7d3c, 0x7d5c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 16", 0x7d5c, 0x7d7c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 17", 0x7d7c, 0x7d9c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 18", 0x7d9c, 0x7dbc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 19", 0x7dbc, 0x7ddc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 20", 0x7ddc, 0x7dfc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 21", 0x7dfc, 0x7e1c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 22", 0x7e1c, 0x7e3c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 23", 0x7e3c, 0x7e5c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 24", 0x7e5c, 0x7e7c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 25", 0x7e7c, 0x7e9c, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 26", 0x7e9c, 0x7ebc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 27", 0x7ebc, 0x7edc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen VS Text 28", 0x7edc, 0x7efc, indexCPS2Sprites_MSHVSFAssets, 0x24 },
    { L"VS Screen FB #2 / READY", 0x737c, 0x739c, indexCPS2Sprites_MSHVSFAssets, 0x26 },
    { L"FIGHT 1", 0x777c, 0x779c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 2", 0x779c, 0x77bc, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 3", 0x77bc, 0x77dc, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 4", 0x77dc, 0x77fc, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 5", 0x77fc, 0x781c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 6", 0x781c, 0x783c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 7", 0x783c, 0x785c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 8", 0x785c, 0x787c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 9", 0x787c, 0x789c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 10", 0x789c, 0x78bc, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 11", 0x78bc, 0x78dc, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 12", 0x78dc, 0x78fc, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 13", 0x78fc, 0x791c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 14", 0x791c, 0x793c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 15", 0x793c, 0x795c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 16", 0x795c, 0x797c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 17", 0x797c, 0x799c, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"FIGHT 18", 0x799c, 0x79bc, indexCPS2Sprites_MSHVSFAssets, 0x20 },
    { L"KO 1", 0x7efc, 0x7f1c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 2", 0x7f1c, 0x7f3c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 3", 0x7f3c, 0x7f5c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 4", 0x7f5c, 0x7f7c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 5", 0x7f7c, 0x7f9c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 6", 0x7f9c, 0x7fbc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 7", 0x7fbc, 0x7fdc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 8", 0x7fdc, 0x7ffc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 9", 0x7ffc, 0x801c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 10", 0x801c, 0x803c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 11", 0x803c, 0x805c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 12", 0x805c, 0x807c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 13", 0x807c, 0x809c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 14", 0x809c, 0x80bc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 15", 0x80bc, 0x80dc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 16", 0x80dc, 0x80fc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 17", 0x80fc, 0x811c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 18", 0x811c, 0x813c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 19", 0x813c, 0x815c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 20", 0x815c, 0x817c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 21", 0x817c, 0x819c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 22", 0x819c, 0x81bc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 23", 0x81bc, 0x81dc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 24", 0x81dc, 0x81fc, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 25", 0x81fc, 0x821c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 26", 0x821c, 0x823c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 27", 0x823c, 0x825c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"KO 28", 0x825c, 0x827c, indexCPS2Sprites_MSHVSFAssets, 0x21 },
    { L"PERFECT 1", 0x82bc, 0x82dc, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 2", 0x82dc, 0x82fc, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 3", 0x82fc, 0x831c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 4", 0x831c, 0x833c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 5", 0x833c, 0x835c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 6", 0x835c, 0x837c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 7", 0x837c, 0x839c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 8", 0x839c, 0x83bc, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 9", 0x83bc, 0x83dc, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 10", 0x83dc, 0x83fc, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 11", 0x83fc, 0x841c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 12", 0x841c, 0x843c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 13", 0x843c, 0x845c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 14", 0x845c, 0x847c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"PERFECT 15", 0x847c, 0x849c, indexCPS2Sprites_MSHVSFAssets, 0x22 },
    { L"WIN 1", 0x849c, 0x84bc, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 2", 0x84bc, 0x84dc, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 3", 0x84dc, 0x84fc, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 4", 0x84fc, 0x851c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 5", 0x851c, 0x853c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 6", 0x853c, 0x855c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 7", 0x855c, 0x857c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 8", 0x857c, 0x859c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 9", 0x859c, 0x85bc, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 10", 0x85bc, 0x85dc, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 11", 0x85dc, 0x85fc, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 12", 0x85fc, 0x861c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 13", 0x861c, 0x863c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 14", 0x863c, 0x865c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 15", 0x865c, 0x867c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 16", 0x867c, 0x869c, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"WIN 17", 0x869c, 0x86bc, indexCPS2Sprites_MSHVSFAssets, 0x27 },
    { L"TIME OVER 1", 0x827c, 0x829c, indexCPS2Sprites_MSHVSFAssets, 0x23 },
    { L"TIME OVER 2", 0x829c, 0x82bc, indexCPS2Sprites_MSHVSFAssets, 0x23 },
    { L"DRAW GAME", 0x86bc, 0x86dc, indexCPS2Sprites_MSHVSFAssets, 0x1f },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_6aBONUS_PALETTES[] =
{
    { L"Super Background 1", 0x6f02a, 0x6f04a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 2", 0x6f04a, 0x6f06a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 3", 0x6f06a, 0x6f08a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 4", 0x6f08a, 0x6f0aa, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 5", 0x6f0aa, 0x6f0ca, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 6", 0x6f0ca, 0x6f0ea, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 7", 0x6f0ea, 0x6f10a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 8", 0x6f10a, 0x6f12a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 9", 0x6f12a, 0x6f14a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 10", 0x6f14a, 0x6f16a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 11", 0x6f16a, 0x6f18a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 12", 0x6f18a, 0x6f1aa, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 13", 0x6f1aa, 0x6f1ca, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background 14", 0x6f1ca, 0x6f1ea, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Floor 1", 0x6eaaa, 0x6eaca, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 2", 0x6eaca, 0x6eaea, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 3", 0x6eaea, 0x6eb0a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 4", 0x6eb0a, 0x6eb2a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 5", 0x6eb2a, 0x6eb4a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 6", 0x6eb4a, 0x6eb6a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 7", 0x6eb6a, 0x6eb8a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 8", 0x6eb8a, 0x6ebaa, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 9", 0x6ebaa, 0x6ebca, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 10", 0x6ebca, 0x6ebea, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 11", 0x6ebea, 0x6ec0a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 12", 0x6ec0a, 0x6ec2a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 13", 0x6ec2a, 0x6ec4a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor 14", 0x6ec4a, 0x6ec6a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Background 15 (Unused)", 0x6efea, 0x6f00a, indexCPS2Sprites_MSHVSFAssets, 0x1b },
    { L"Super Background Alt 1", 0x6f22a, 0x6f24a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 2", 0x6f24a, 0x6f26a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 3", 0x6f26a, 0x6f28a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 4", 0x6f28a, 0x6f2aa, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 5", 0x6f2aa, 0x6f2ca, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 6", 0x6f2ca, 0x6f2ea, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 7", 0x6f2ea, 0x6f30a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 8", 0x6f30a, 0x6f32a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 9", 0x6f32a, 0x6f34a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 10", 0x6f34a, 0x6f36a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 11", 0x6f36a, 0x6f38a, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 12", 0x6f38a, 0x6f3aa, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 13", 0x6f3aa, 0x6f3ca, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Background Alt 14", 0x6f3ca, 0x6f3ea, indexCPS2Sprites_MSHVSFAssets, 0x1b, &pairNext14 },
    { L"Super Floor Alt. 1", 0x6ecaa, 0x6ecca, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 2", 0x6ecca, 0x6ecea, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 3", 0x6ecea, 0x6ed0a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 4", 0x6ed0a, 0x6ed2a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 5", 0x6ed2a, 0x6ed4a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 6", 0x6ed4a, 0x6ed6a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 7", 0x6ed6a, 0x6ed8a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 8", 0x6ed8a, 0x6edaa, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 9", 0x6edaa, 0x6edca, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 10", 0x6edca, 0x6edea, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 11", 0x6edea, 0x6ee0a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 12", 0x6ee0a, 0x6ee2a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 13", 0x6ee2a, 0x6ee4a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Floor Alt. 14", 0x6ee4a, 0x6ee6a, indexCPS2Sprites_MSHVSFAssets, 0x1c, &pairPrevious14 },
    { L"Super Background Alt 15 (Unused)", 0x6f00a, 0x6f02a, indexCPS2Sprites_MSHVSFAssets, 0x1b },

    { L"Crossover Floor 1", 0x6eeaa, 0x6eeca, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 2", 0x6eeca, 0x6eeea, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 3", 0x6eeea, 0x6ef0a, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 4", 0x6ef0a, 0x6ef2a, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 5", 0x6ef2a, 0x6ef4a, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 6", 0x6ef4a, 0x6ef6a, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 7", 0x6ef6a, 0x6ef8a, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 8", 0x6ef8a, 0x6efaa, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 9", 0x6efaa, 0x6efca, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover Floor 10", 0x6efca, 0x6efea, indexCPS2Sprites_MSHVSFAssets, 0x2a, &pairNext10 },
    { L"Crossover BG 1", 0x6f42a, 0x6f48a, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 2", 0x6f48a, 0x6f4ea, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 3", 0x6f4ea, 0x6f54a, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 4", 0x6f54a, 0x6f5aa, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 5", 0x6f5aa, 0x6f60a, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 6", 0x6f60a, 0x6f66a, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 7", 0x6f66a, 0x6f6ca, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 8", 0x6f6ca, 0x6f72a, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 9", 0x6f72a, 0x6f78a, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },
    { L"Crossover BG 10", 0x6f78a, 0x6f7ea, indexCPS2Sprites_MSHVSFAssets, 0x29, &pairPrevious10 },

    { L"Super KO BG/New Challenger 1", 0x6f7ea, 0x6f80a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 2", 0x6f80a, 0x6f82a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 3", 0x6f82a, 0x6f84a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 4", 0x6f84a, 0x6f86a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 5", 0x6f86a, 0x6f88a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 6", 0x6f88a, 0x6f8aa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 7", 0x6f8aa, 0x6f8ca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 8", 0x6f8ca, 0x6f8ea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 9", 0x6f8ea, 0x6f90a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 10", 0x6f90a, 0x6f92a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 11", 0x6f92a, 0x6f94a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 12", 0x6f94a, 0x6f96a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 13", 0x6f96a, 0x6f98a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 14", 0x6f98a, 0x6f9aa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 15", 0x6f9aa, 0x6f9ca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 16", 0x6f9ca, 0x6f9ea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 17", 0x6f9ea, 0x6fa0a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 18", 0x6fa0a, 0x6fa2a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 19", 0x6fa2a, 0x6fa4a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 20", 0x6fa4a, 0x6fa6a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 21", 0x6fa6a, 0x6fa8a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 22", 0x6fa8a, 0x6faaa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 23", 0x6faaa, 0x6faca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 24", 0x6faca, 0x6faea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 25", 0x6faea, 0x6fb0a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 26", 0x6fb0a, 0x6fb2a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 27", 0x6fb2a, 0x6fb4a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 28", 0x6fb4a, 0x6fb6a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 29", 0x6fb6a, 0x6fb8a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 30", 0x6fb8a, 0x6fbaa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 31", 0x6fbaa, 0x6fbca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 32", 0x6fbca, 0x6fbea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 33", 0x6fbea, 0x6fc0a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 34", 0x6fc0a, 0x6fc2a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 35", 0x6fc2a, 0x6fc4a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 36", 0x6fc4a, 0x6fc6a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 37", 0x6fc6a, 0x6fc8a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 38", 0x6fc8a, 0x6fcaa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 39", 0x6fcaa, 0x6fcca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 40", 0x6fcca, 0x6fcea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 41", 0x6fcea, 0x6fd0a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 42", 0x6fd0a, 0x6fd2a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 43", 0x6fd2a, 0x6fd4a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 44", 0x6fd4a, 0x6fd6a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 45", 0x6fd6a, 0x6fd8a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 46", 0x6fd8a, 0x6fdaa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 47", 0x6fdaa, 0x6fdca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 48", 0x6fdca, 0x6fdea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 49", 0x6fdea, 0x6fe0a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 50", 0x6fe0a, 0x6fe2a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 51", 0x6fe2a, 0x6fe4a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 52", 0x6fe4a, 0x6fe6a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 53", 0x6fe6a, 0x6fe8a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 54", 0x6fe8a, 0x6feaa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 55", 0x6feaa, 0x6feca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 56", 0x6feca, 0x6feea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 57", 0x6feea, 0x6ff0a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 58", 0x6ff0a, 0x6ff2a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 59", 0x6ff2a, 0x6ff4a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 60", 0x6ff4a, 0x6ff6a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 61", 0x6ff6a, 0x6ff8a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 62", 0x6ff8a, 0x6ffaa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 63", 0x6ffaa, 0x6ffca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 64", 0x6ffca, 0x6ffea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 65", 0x6ffea, 0x7000a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 66", 0x7000a, 0x7002a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 67", 0x7002a, 0x7004a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 68", 0x7004a, 0x7006a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 69", 0x7006a, 0x7008a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 70", 0x7008a, 0x700aa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 71", 0x700aa, 0x700ca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 72", 0x700ca, 0x700ea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 73", 0x700ea, 0x7010a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 74", 0x7010a, 0x7012a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 75", 0x7012a, 0x7014a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 76", 0x7014a, 0x7016a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 77", 0x7016a, 0x7018a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 78", 0x7018a, 0x701aa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 79", 0x701aa, 0x701ca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 80", 0x701ca, 0x701ea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 81", 0x701ea, 0x7020a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 82", 0x7020a, 0x7022a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 83", 0x7022a, 0x7024a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 84", 0x7024a, 0x7026a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 85", 0x7026a, 0x7028a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 86", 0x7028a, 0x702aa, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 87", 0x702aa, 0x702ca, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 88", 0x702ca, 0x702ea, indexCPS2Sprites_MSHVSFAssets, 0x28 },
    { L"Super KO BG/New Challenger 89", 0x702ea, 0x7030a, indexCPS2Sprites_MSHVSFAssets, 0x28 },
};

const sDescTreeNode MSHVSF_A_APOCALYPSE_COLLECTION[] =
{
    //{ L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH) },
    //{ L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_SHARED,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_AKUMA_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION[] =
{
    { L"Blackheart Punch", DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH,   ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH)  },
    { L"Blackheart Kick",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK,    ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK)   },
    { L"Mephisto Punch",   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH,     ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH)    },
    { L"Mephisto Kick",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK,      ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK)     },
    { L"Shared Palettes",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_CAPTAIN_AMERICA_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CHUNLI_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CYBER_AKUMA_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CYCLOPS_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_DAN_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_DARK_SAKURA_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_DHALSIM_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_HULK_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_HULK_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_KEN_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_MBIPSON_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_MECH_ZANGIEF_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_NORIMARO_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_EXTRAS,           ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_EXTRAS) },
};

const sDescTreeNode MSHVSF_A_OMEGARED_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_RYU_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SAKURA_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_SHARED,     ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_SHADOW_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SHUMAGORATH_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SPIDERMAN_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_USAGENT_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_WOLVERINE_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_ZANGIEF_COLLECTION[] =
{
    { L"Punch",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { L"Kick",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK) },
};

// It would make sense to move the under the specific character, but that doesn't quite work since 
// palette swaps like USAgent share the status effects with the core palette
const sDescTreeNode MSHVSF_A_STATUS_COLLECTION[] =
{
    { L"Akuma",                     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_STATUS,            ARRAYSIZE(MSHVSF_A_AKUMA_STATUS) },
    { L"Blackheart/Mephisto",       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_STATUS,       ARRAYSIZE(MSHVSF_A_BLACKHEART_STATUS) },
    { L"Captain America/US Agent",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAINAMERICA_STATUS,   ARRAYSIZE(MSHVSF_A_CAPTAINAMERICA_STATUS) },
    { L"Chun-Li",                   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_STATUS,           ARRAYSIZE(MSHVSF_A_CHUNLI_STATUS) },
    { L"Cyclops",                   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_STATUS,          ARRAYSIZE(MSHVSF_A_CYCLOPS_STATUS) },
    { L"Dhalsim",                   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_STATUS,          ARRAYSIZE(MSHVSF_A_DHALSIM_STATUS) },
    { L"Hulk",                      DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_STATUS,             ARRAYSIZE(MSHVSF_A_HULK_STATUS) },
    { L"Ken",                       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_STATUS,              ARRAYSIZE(MSHVSF_A_KEN_STATUS) },
    { L"M.Bison",                   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BISON_STATUS,            ARRAYSIZE(MSHVSF_A_BISON_STATUS) },
    { L"Norimaro",                  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_STATUS,         ARRAYSIZE(MSHVSF_A_NORIMARO_STATUS) },
    { L"Omega Red",                 DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_STATUS,         ARRAYSIZE(MSHVSF_A_OMEGARED_STATUS) },
    { L"Ryu",                       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_STATUS,              ARRAYSIZE(MSHVSF_A_RYU_STATUS) },
    { L"Sakura/Dark Sakura",        DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_STATUS,           ARRAYSIZE(MSHVSF_A_SAKURA_STATUS) },
    { L"Shadow",                    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_STATUS,           ARRAYSIZE(MSHVSF_A_SHADOW_STATUS) },
    { L"Shuma-Gorath",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMA_STATUS,            ARRAYSIZE(MSHVSF_A_SHUMA_STATUS) },
    { L"Spider-Man/Armored Spider-Man", DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDEY_STATUS,           ARRAYSIZE(MSHVSF_A_SPIDEY_STATUS) },
    { L"Wolverine",                 DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_STATUS,        ARRAYSIZE(MSHVSF_A_WOLVERINE_STATUS) },
    { L"Zangief",                   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_STATUS,          ARRAYSIZE(MSHVSF_A_ZANGIEF_STATUS) },

    { L"Dan",                       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_STATUS,              ARRAYSIZE(MSHVSF_A_DAN_STATUS) },
    { L"Cyber Akuma",               DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBERAKUMA_STATUS,       ARRAYSIZE(MSHVSF_A_CYBERAKUMA_STATUS) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION[] = // 6a
{
    { L"Character Select Icons",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSI_PALETTES,    ARRAYSIZE(MSHVSF_A_CSI_PALETTES) },
    { L"Character Select",          DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHARSELECT_PALETTES, ARRAYSIZE(MSHVSF_A_CHARSELECT_PALETTES) },
    { L"HUD",                       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_HUD_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_HUD_PALETTES) },
    { L"Intro / Attract Mode",      DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_INTRO_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_INTRO_PALETTES) },
    { L"Super Screen Portraits",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SSP_PALETTES,    ARRAYSIZE(MSHVSF_A_SSP_PALETTES) },
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES) },
    { L"Unused Character Portraits", DESC_NODETYPE_TREE,   (void*)MSHVSF_A_BONUS_UNPORT_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_UNPORT_PALETTES) },
    { L"Bonus Palettes",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_6aBONUS_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_6aBONUS_PALETTES) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION_STEAM[] =
{
    { L"Character Select Icons",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSI_PALETTES,    ARRAYSIZE(MSHVSF_A_CSI_PALETTES) },
    { L"Character Select",          DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHARSELECT_PALETTES, ARRAYSIZE(MSHVSF_A_CHARSELECT_PALETTES) },
    { L"HUD",                       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_HUD_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_HUD_PALETTES) },
    { L"Intro / Attract Mode",      DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_INTRO_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_INTRO_PALETTES) },
    { L"Super Screen Portraits",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SSP_PALETTES,    ARRAYSIZE(MSHVSF_A_SSP_PALETTES) },
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES_STEAM, ARRAYSIZE(MSHVSF_A_VSP_PALETTES_STEAM) },
    { L"Unused Character Portraits", DESC_NODETYPE_TREE,   (void*)MSHVSF_A_BONUS_UNPORT_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_UNPORT_PALETTES) },
    { L"Bonus Palettes",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_6aBONUS_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_6aBONUS_PALETTES) },
};

const sDescTreeNode MSHVSF_A_CSP_COLLECTION_7B[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSP_PALETTES_7B,    ARRAYSIZE(MSHVSF_A_CSP_PALETTES_7B) },
};

const sDescTreeNode MSHVSF_A_VSP_COLLECTION_7B[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES_7B,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES_7B) },
};

const sDescTreeNode MSHVSF_A_7B_BONUS_COLLECTION[] =
{
    { L"Character Select", DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_7bCSEL_PALETTES,     ARRAYSIZE(MSHVSF_A_BONUS_7bCSEL_PALETTES) },
    { L"Hit Sparks",  DESC_NODETYPE_TREE,      (void*)MSHVSF_A_BONUS_HITSPARK_PALETTES,   ARRAYSIZE(MSHVSF_A_BONUS_HITSPARK_PALETTES) },
    { L"Title Screen",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_7bTITLE_PALETTES,    ARRAYSIZE(MSHVSF_A_BONUS_7bTITLE_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE,   (void*)MSHVSF_A_BONUS_7bBONUS_PALETTES,    ARRAYSIZE(MSHVSF_A_BONUS_7bBONUS_PALETTES) },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_APOCALYPSE_PALETTES[] =
{
    { L"Sky",                   0x5f032, 0x5f092, indexCPS2Sprites_MSHVSFAssets, 0x51, &pairFullyLinkedNode },
    
    // these are sets of 3-step cycles until the end of 9
    { L"Animation Cycles 1/9",  0x55db2, 0x55f92, indexCPS2Sprites_MSHVSFAssets, 0x45 },
    { L"Animation Cycles 2/9",  0x55f92, 0x56172, indexCPS2Sprites_MSHVSFAssets, 0x46 },
    // this one truncates
    { L"Animation Cycles 3/9",  0x56172, 0x562f2, indexCPS2Sprites_MSHVSFAssets, 0x47 },

    { L"Animation Cycles 4/9",  0x56352, 0x56532, indexCPS2Sprites_MSHVSFAssets, 0x48 },
    { L"Animation Cycles 5/9",  0x56532, 0x56712, indexCPS2Sprites_MSHVSFAssets, 0x49 },
    { L"Animation Cycles 6/9",  0x56712, 0x568f2, indexCPS2Sprites_MSHVSFAssets, 0x4a },
                { L"Animation Cycles 7/9",  0x568f2, 0x56ad2 },
                { L"Animation Cycles 8/9",  0x56ad2, 0x56cb2 },
    { L"Animation Cycles 9/9",  0x56cb2, 0x56e32, indexCPS2Sprites_MSHVSFAssets, 0x4b },

    { L"Floor Animation 1 1/3",     0x5f432, 0x5f452, indexCPS2Sprites_MSHVSFAssets, 0x4e },
        { L"Floor Animation 1 2/3", 0x5f452, 0x5f472, indexCPS2Sprites_MSHVSFAssets, 0x4e },
        { L"Floor Animation 1 3/3", 0x5f472, 0x5f492, indexCPS2Sprites_MSHVSFAssets, 0x4e },
    { L"Floor Animation 2 1/3",     0x5f492, 0x5f4b2, indexCPS2Sprites_MSHVSFAssets, 0x4f },
        { L"Floor Animation 2 2/3", 0x5f4b2, 0x5f4d2, indexCPS2Sprites_MSHVSFAssets, 0x4f },
        { L"Floor Animation 2 3/3", 0x5f4d2, 0x5f4f2, indexCPS2Sprites_MSHVSFAssets, 0x4f },
    { L"Floor Animation 3 1/3",     0x5f4f2, 0x5f512, indexCPS2Sprites_MSHVSFAssets, 0x50 },
        { L"Floor Animation 3 2/3", 0x5f512, 0x5f532, indexCPS2Sprites_MSHVSFAssets, 0x50 },
        { L"Floor Animation 3 3/3", 0x5f532, 0x5f552, indexCPS2Sprites_MSHVSFAssets, 0x50 },

    { L"Cells and Floor 1/2",       0x7814c, 0x7834c, indexCPS2Sprites_MSHVSFAssets, 0x4c, &pairNext },
    { L"Cells and Floor 2/2",       0x7834c, 0x7846c, indexCPS2Sprites_MSHVSFAssets, 0x4d },

    // Leaving out unused/unknown chunks
    // after sky: lines 4-7 seem like floor animation cycle palettes?
    //{ L"Unused? 1",                 0x5f092, 0x5f232 },
    // after the many animation cycles
    //{ L"Unused? Animation Cycle",   0x56e32, 0x56ef2 },
    //{ L"Unused? 2", 0x559b2, 0x55bb2 },
    //{ L"Unused? 3", 0x55bb2, 0x55db2 },
    //{ L"Unused? 4", 0x5f232, 0x5f432 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_RIVER_PALETTES[] =
{
    { L"Background Sky",            0x56EF2, 0x570F2, indexCPS2Sprites_MSHVSFAssets, 0x00, &pairFullyLinkedNode },
    { L"Background Reflection",     0x570F2, 0x572F2, indexCPS2Sprites_MSHVSFAssets, 0x01 },
    { L"Ridge Trees",               0x5F552, 0x5F652, indexCPS2Sprites_MSHVSFAssets, 0x02 },
    { L"Bridge",                    0x5A2F2, 0x5A352, indexCPS2Sprites_MSHVSFAssets, 0x03 },
    { L"People Crater Water Posts", 0x7846c, 0x7854c, indexCPS2Sprites_MSHVSFAssets, 0x04 },
    // We think it's for Showdown, but it seems unused
    //{ L"Unknown",                   0x5A4F2, 0x5A6F2 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_DEATHVALLEY_PALETTES[] =
{
    { L"Sky BG",                               0x573F2, 0x57412, indexCPS2Sprites_MSHVSFAssets, 0x0e, &pairFullyLinkedNode },
    { L"Mountain MG",                          0x5F972, 0x5F992, indexCPS2Sprites_MSHVSFAssets, 0x0f },
    { L"Floor/Cave FG",                        0x5A6F2, 0x5A712, indexCPS2Sprites_MSHVSFAssets, 0x10 },
    { L"CenterPiece FG",                       0x5A752, 0x5A772, indexCPS2Sprites_MSHVSFAssets, 0x11 },
    { L"Sprites [Beast, Blanka, Fire/Smoke]",  0x7854C, 0x785AC, indexCPS2Sprites_MSHVSFAssets, 0x12 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_CATARACT_PALETTES[] =
{
    { L"Background",            0x57812, 0x57a12, indexCPS2Sprites_MSHVSFAssets, 0xa1, &pairFullyLinkedNode },
    // Commenting out since we don't have an assocation
    //{ L"Background (Unused?)",  0x57a12, 0x57af2 },
    { L"Middle 1/2",            0x5ab72, 0x5ad72, indexCPS2Sprites_MSHVSFAssets, 0xa4 },
    { L"Middle 2/2",            0x5ad72, 0x5aef2, indexCPS2Sprites_MSHVSFAssets, 0xa5 },
    
    { L"Foreground Plants",     0x5fe92, 0x60092, indexCPS2Sprites_MSHVSFAssets, 0xa3 },
    { L"Foreground",            0x60092, 0x60152, indexCPS2Sprites_MSHVSFAssets, 0xa2 },

    { L"Sprites",               0x785ac, 0x7870c, indexCPS2Sprites_MSHVSFAssets, 0xa6 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_HILLTOP_PALETTES[] =
{
    { L"Background Sky",            0x57AF2, 0x57B52, indexCPS2Sprites_MSHVSFAssets, 0x7f, &pairFullyLinkedNode },
    { L"Foreground plants 1/2?",    0x57b52, 0x57d52 },
    { L"Foreground plants 2/2?",    0x57d52, 0x57ef2 },

    { L"Middle Leaves",             0x605f2, 0x60672, indexCPS2Sprites_MSHVSFAssets, 0x80 },

    { L"Tree Trunk",                0x5B2F2, 0x5B392, indexCPS2Sprites_MSHVSFAssets, 0x82 },

    // First line is the ground leaves
    { L"Sprites",                   0x787EC, 0x7888c, indexCPS2Sprites_MSHVSFAssets, 0x81 },
    //{ L"Owls",                      0x7882C, 0x7886C },
    //{ L"Unknown 2?",                0x7886c, 0x7888c },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_MANHATTAN_PALETTES[] =
{
    { L"Sky",               0x5b972, 0x5b9b2, indexCPS2Sprites_MSHVSFAssets, 0x75, &pairFullyLinkedNode },
    { L"Sewer Inset",       0x58172, 0x581b2, indexCPS2Sprites_MSHVSFAssets, 0x74 },

    { L"Back Sewer Walls",  0x60c32, 0x60d52, indexCPS2Sprites_MSHVSFAssets, 0x6b },

    { L"Building Skyline and Sewer Walls",  0x5b8f2, 0x5b972, indexCPS2Sprites_MSHVSFAssets, 0x6c },

    { L"Middle Buildings",                  0x57ef2, 0x57f92, indexCPS2Sprites_MSHVSFAssets, 0x70 },

    { L"Tunnel and Ground Animation Cycle 1/6",             0x5b9b2, 0x5ba92, indexCPS2Sprites_MSHVSFAssets, 0x77 },
        // Also has some coverage of police car aspects, lines 2 and 7 of 7
        { L"Tunnel and Ground Animation Cycle 2/6",         0x5baf2, 0x5bbd2, indexCPS2Sprites_MSHVSFAssets, 0x77 },

    { L"Tunnel and Ground Animation Cycle 3/6",             0x5bbd2, 0x5bcb2, indexCPS2Sprites_MSHVSFAssets, 0x77 },
        { L"Tunnel and Ground Animation Cycle 4/6",         0x5bcb2, 0x5bd92, indexCPS2Sprites_MSHVSFAssets, 0x77 },
        { L"Tunnel and Ground Animation Cycle 5/6",         0x5bd92, 0x5be72, indexCPS2Sprites_MSHVSFAssets, 0x77 },
        { L"Tunnel and Ground Animation Cycle 6/6",         0x581b2, 0x58292, indexCPS2Sprites_MSHVSFAssets, 0x77 },
    
    { L"Background Hole Edge Animation Cycle 1/10",         0x5ba92, 0x5bab2, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Background Hole Edge Animation Cycle 2/10",     0x58292, 0x582b2, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 3/10",    0x5bef2, 0x5bf12, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 4/10",    0x5bf12, 0x5bf32, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 5/10",    0x5bf32, 0x5bf52, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 6/10",    0x5bf52, 0x5bf72, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 7/10",    0x5bf72, 0x5bf92, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 8/10",    0x5bf92, 0x5bfb2, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 9/10",    0x5bfb2, 0x5bfd2, indexCPS2Sprites_MSHVSFAssets, 0x6a },
        { L"Underground Hole Edge Animation Cycle 10/10",   0x5bfd2, 0x5bff2, indexCPS2Sprites_MSHVSFAssets, 0x6a },

    { L"Left Buildings",    0x60952, 0x60b52, indexCPS2Sprites_MSHVSFAssets, 0x6f },
    // Lines 1234 building
    // Lines 23 rat
    // Line 5 stoplight
    { L"Right Buildings",   0x60b52, 0x60c32, indexCPS2Sprites_MSHVSFAssets, 0x72 },

    { L"Cafe and Bar Animation Cycle 1/16",         0x60d52, 0x60d72, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 2/16",     0x60d72, 0x60d92, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 3/16",     0x60d92, 0x60db2, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 4/16",     0x60db2, 0x60dd2, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 5/16",     0x60dd2, 0x60df2, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 6/16",     0x60df2, 0x60e12, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 7/16",     0x60e12, 0x60e32, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 8/16",     0x60e32, 0x60e52, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 9/16",     0x60e52, 0x60e72, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 10/16",    0x60e72, 0x60e92, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 11/16",    0x60e92, 0x60eb2, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 12/16",    0x60eb2, 0x60ed2, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 13/16",    0x60ed2, 0x60ef2, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 14/16",    0x60ef2, 0x60f12, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 15/16",    0x60f12, 0x60f32, indexCPS2Sprites_MSHVSFAssets, 0x6d },
        { L"Cafe and Bar Animation Cycle 16/16",    0x60f32, 0x60f52, indexCPS2Sprites_MSHVSFAssets, 0x6d },

    { L"Police Cars",                       0x5b6f2, 0x5b8f2, indexCPS2Sprites_MSHVSFAssets, 0x71 },

    { L"Ground Animation Cycle 1/2",        0x5bab2, 0x5baf2, indexCPS2Sprites_MSHVSFAssets, 0x6e },
        { L"Ground Animation Cycle 2/2",    0x582b2, 0x582f2, indexCPS2Sprites_MSHVSFAssets, 0x6e },

    // window and water
    { L"Window Lighting Animation Cycles",  0x60f52, 0x61152 },

    { L"Ripple Animation",                  0x5be72, 0x5bef2, indexCPS2Sprites_MSHVSFAssets, 0x73 },

    { L"Sprites",                           0x788cc, 0x789cc, indexCPS2Sprites_MSHVSFAssets, 0x76 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_MIDNIGHTPLANT_PALETTES[] =
{
    { L"Background: Sky and Factory",   0x582f2, 0x58332, indexCPS2Sprites_MSHVSFAssets, 0x7a, &pairFullyLinkedNode },

    { L"Middle Layer 1/2",              0x61152, 0x61352, indexCPS2Sprites_MSHVSFAssets, 0x7c },
    { L"Middle Layer 2/2",              0x61352, 0x61552, indexCPS2Sprites_MSHVSFAssets, 0x7d },

    { L"Animation cycle 1",             0x61552, 0x61652, indexCPS2Sprites_MSHVSFAssets, 0x78 },
    { L"Animation cycle 2",             0x61672, 0x61712, indexCPS2Sprites_MSHVSFAssets, 0x79 },

    { L"Sprites",                       0x78a8c, 0x78b4c, indexCPS2Sprites_MSHVSFAssets, 0x7e },

    { L"Foreground",                    0x5c6f2, 0x5c7f2, indexCPS2Sprites_MSHVSFAssets, 0x7b },
};

// For Raging Inferno we are missing some of the fire palettes.  
// They loosely do not appear to be in rom 06 or 07...?
const sGame_PaletteDataset MSHVSF_A_STAGES_RAGINGINFERNO_PALETTES[] =
{
    { L"Background",                        0x586f2, 0x58732, indexCPS2Sprites_MSHVSFAssets, 0x83, &pairFullyLinkedNode },
    { L"Background Animation Cycle",        0x58732, 0x587f2 },

    { L"Middle Buildings 1/2",              0x61952, 0x61b52, indexCPS2Sprites_MSHVSFAssets, 0x92 },
    { L"Middle Buildings 2/2",              0x61b52, 0x61d52, indexCPS2Sprites_MSHVSFAssets, 0x93 },
    { L"Middle Animation Cycles 1/8",       0x61d52, 0x61f52, indexCPS2Sprites_MSHVSFAssets, 0x8a },
    { L"Middle Animation Cycles 2/8",       0x61f52, 0x62152, indexCPS2Sprites_MSHVSFAssets, 0x8b },
    { L"Middle Animation Cycles 3/8",       0x62152, 0x62352, indexCPS2Sprites_MSHVSFAssets, 0x8c },
    { L"Middle Animation Cycles 4/8",       0x62352, 0x62552, indexCPS2Sprites_MSHVSFAssets, 0x8d },
    { L"Middle Animation Cycles 5/8",       0x62552, 0x62752, indexCPS2Sprites_MSHVSFAssets, 0x8e },
    { L"Middle Animation Cycles 6/8",       0x62752, 0x62952, indexCPS2Sprites_MSHVSFAssets, 0x8f },
    { L"Middle Animation Cycles 7/8",       0x62952, 0x62b52, indexCPS2Sprites_MSHVSFAssets, 0x90 },
    { L"Middle Animation Cycles 8/8",       0x62b52, 0x62d52, indexCPS2Sprites_MSHVSFAssets, 0x91 },

    // Commenting out since we don't know where these are used if at all
    //{ L"Unused? Foreground 1/2",            0x5ccb2, 0x5ceb2 },
    //{ L"Unused? Foreground 2/2",            0x5ceb2, 0x5cef2 },

    { L"Foreground Animation Cycles 1/6",   0x5cef2, 0x5d0f2, indexCPS2Sprites_MSHVSFAssets, 0x84 },
    { L"Foreground Animation Cycles 2/6",   0x5d0f2, 0x5d292, indexCPS2Sprites_MSHVSFAssets, 0x85 },
    { L"Foreground Animation Cycles 3/6",   0x5d2f2, 0x5d4f2, indexCPS2Sprites_MSHVSFAssets, 0x86 },
    { L"Foreground Animation Cycles 4/6",   0x5d4f2, 0x5d692, indexCPS2Sprites_MSHVSFAssets, 0x87 },
    { L"Foreground Animation Cycles 5/6",   0x5d6f2, 0x5d8f2, indexCPS2Sprites_MSHVSFAssets, 0x88 },
    { L"Foreground Animation Cycles 6/6",   0x5d8f2, 0x5da92, indexCPS2Sprites_MSHVSFAssets, 0x89 },

    { L"Sprites (helicopters)",             0x78b4c, 0x78c0c, indexCPS2Sprites_MSHVSFAssets, 0x94 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_CODERED_PALETTES[] =
{
    { L"Sky",               0x58af2, 0x58b72, indexCPS2Sprites_MSHVSFAssets, 0x58, &pairFullyLinkedNode },
    { L"Animation Cycle 1", 0x58ef2, 0x58fd2 },
    { L"Animation Cycle 2", 0x58fd2, 0x590b2 },
    { L"Hangar 1/2",        0x5daf2, 0x5dcf2, indexCPS2Sprites_MSHVSFAssets, 0x55 },
    { L"Hangar 2/2",        0x5dcf2, 0x5ded2, indexCPS2Sprites_MSHVSFAssets, 0x56 },
    { L"Animation Cycle 3", 0x5ded2, 0x5dfd2, indexCPS2Sprites_MSHVSFAssets, 0x52 },
    { L"Animation Cycle 4", 0x5dfd2, 0x5e1d2, indexCPS2Sprites_MSHVSFAssets, 0x53 },
    { L"Animation Cycle 5", 0x5e1d2, 0x5e3d2, indexCPS2Sprites_MSHVSFAssets, 0x54 },
    { L"Animation Cycle 6", 0x5e3d2, 0x5e432 },
    
    // Jet (their Blackbird) looks like a very intense animation cycle, plus 3 unknown palettes
    { L"Jet 1/2",           0x62d52, 0x62f52, indexCPS2Sprites_MSHVSFAssets, 0x57 },
    { L"Jet 2/2",           0x62f52, 0x63152 },

    { L"Sprites (trucks)",  0x78cac, 0x78ccc, indexCPS2Sprites_MSHVSFAssets, 0x59 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_NIGHTCOOKING_PALETTES[] =
{
    { L"Background 1/2",                    0x63152, 0x63352, indexCPS2Sprites_MSHVSFAssets, 0x5a, &pairFullyLinkedNode },
    { L"Background 2/2",                    0x63352, 0x63552, indexCPS2Sprites_MSHVSFAssets, 0x5b },
    { L"Left Box Animation 1/2",            0x63552, 0x63572, indexCPS2Sprites_MSHVSFAssets, 0x5f },
        { L"Left Box Animation 2/2",        0x63572, 0x63592, indexCPS2Sprites_MSHVSFAssets, 0x5f },
    { L"Right Balcony Animation 1/2",       0x63592, 0x635b2, indexCPS2Sprites_MSHVSFAssets, 0x64 },
        { L"Right Balcony Animation 2/2",   0x635b2, 0x635d2, indexCPS2Sprites_MSHVSFAssets, 0x64 },
    { L"Right Bleachers Animation 1/2",     0x635d2, 0x635f2, indexCPS2Sprites_MSHVSFAssets, 0x65 },
        { L"Right Bleachers Animation 2/2", 0x635f2, 0x63612, indexCPS2Sprites_MSHVSFAssets, 0x65 },
    { L"TV Screen Animations",              0x63612, 0x63712, indexCPS2Sprites_MSHVSFAssets, 0x69 },

    { L"People and Items",          0x5e432, 0x5e632, indexCPS2Sprites_MSHVSFAssets, 0x63 },
    { L"More People",               0x5e632, 0x5e6b2, indexCPS2Sprites_MSHVSFAssets, 0x62 },
    { L"Unknown Animation Cycle",   0x5e6b2, 0x5e6d2 },
    { L"Ceiling Animation 1/2",     0x5e832, 0x5e852, indexCPS2Sprites_MSHVSFAssets, 0x5c },
        { L"Ceiling Animation 2/2", 0x5e852, 0x5e872, indexCPS2Sprites_MSHVSFAssets, 0x5c },
    { L"Moon Animation 1/2",        0x5e872, 0x5e892, indexCPS2Sprites_MSHVSFAssets, 0x61 },
        { L"Moon Animation 2/2",    0x5e892, 0x5e8b2, indexCPS2Sprites_MSHVSFAssets, 0x61 },

    { L"Cooking Items 1/2", 0x592f2, 0x594f2, indexCPS2Sprites_MSHVSFAssets, 0x5d },
    { L"Cooking Items 2/2", 0x594f2, 0x595f2, indexCPS2Sprites_MSHVSFAssets, 0x5e },
    
    { L"Left NIGHT COOKING Sign Animation 1/6",     0x596f2, 0x59712, indexCPS2Sprites_MSHVSFAssets, 0x60 },
        { L"Left NIGHT COOKING Sign Animation 2/6", 0x59712, 0x59732, indexCPS2Sprites_MSHVSFAssets, 0x60 },
        { L"Left NIGHT COOKING Sign Animation 3/6", 0x59732, 0x59752, indexCPS2Sprites_MSHVSFAssets, 0x60 },
        { L"Left NIGHT COOKING Sign Animation 4/6", 0x59752, 0x59772, indexCPS2Sprites_MSHVSFAssets, 0x60 },
        { L"Left NIGHT COOKING Sign Animation 5/6", 0x59772, 0x59792, indexCPS2Sprites_MSHVSFAssets, 0x60 },
        { L"Left NIGHT COOKING Sign Animation 6/6", 0x59792, 0x597b2, indexCPS2Sprites_MSHVSFAssets, 0x60 },

    { L"Stars Animation 1/8", 0x597b2, 0x597d2, indexCPS2Sprites_MSHVSFAssets, 0x68 },
        { L"Stars Animation 2/8", 0x597d2, 0x597f2, indexCPS2Sprites_MSHVSFAssets, 0x68 },
        { L"Stars Animation 3/8", 0x597f2, 0x59812, indexCPS2Sprites_MSHVSFAssets, 0x68 },
        { L"Stars Animation 4/8", 0x59812, 0x59832, indexCPS2Sprites_MSHVSFAssets, 0x68 },
        { L"Stars Animation 5/8", 0x59832, 0x59852, indexCPS2Sprites_MSHVSFAssets, 0x68 },
        { L"Stars Animation 6/8", 0x59852, 0x59872, indexCPS2Sprites_MSHVSFAssets, 0x68 },
        { L"Stars Animation 7/8", 0x59872, 0x59892, indexCPS2Sprites_MSHVSFAssets, 0x68 },
        { L"Stars Animation 8/8", 0x59892, 0x598b2, indexCPS2Sprites_MSHVSFAssets, 0x68 },
    
    { L"Right NIGHT COOKING Sign Animation 1/8", 0x598b2, 0x598d2, indexCPS2Sprites_MSHVSFAssets, 0x66 },
        { L"Right NIGHT COOKING Sign Animation 2/8", 0x598d2, 0x598f2, indexCPS2Sprites_MSHVSFAssets, 0x66 },
        { L"Right NIGHT COOKING Sign Animation 3/8", 0x598f2, 0x59912, indexCPS2Sprites_MSHVSFAssets, 0x66 },
        { L"Right NIGHT COOKING Sign Animation 4/8", 0x59912, 0x59932, indexCPS2Sprites_MSHVSFAssets, 0x66 },
        { L"Right NIGHT COOKING Sign Animation 5/8", 0x59932, 0x59952, indexCPS2Sprites_MSHVSFAssets, 0x66 },
        { L"Right NIGHT COOKING Sign Animation 6/8", 0x59952, 0x59972, indexCPS2Sprites_MSHVSFAssets, 0x66 },
        { L"Right NIGHT COOKING Sign Animation 7/8", 0x59972, 0x59992, indexCPS2Sprites_MSHVSFAssets, 0x66 },
        { L"Right NIGHT COOKING Sign Animation 8/8", 0x59992, 0x599b2, indexCPS2Sprites_MSHVSFAssets, 0x66 },

    { L"Sprites", 0x78d8c, 0x78ecc, indexCPS2Sprites_MSHVSFAssets, 0x67 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_MALLMAYHEM_PALETTES[] =
{
    { L"Mall PL#400.1",                     0x5EC32, 0x5ee32, indexCPS2Sprites_MSHVSFAssets, 0x05, &pairFullyLinkedNode },
    { L"Mall PL#400.2",                     0x5Ee32, 0x5F032, indexCPS2Sprites_MSHVSFAssets, 0x06 },
    { L"Mall PL#200.1",                     0x59AF2, 0x59cF2, indexCPS2Sprites_MSHVSFAssets, 0x07 },
    { L"Mall PL#200.2",                     0x59cF2, 0x59EF2, indexCPS2Sprites_MSHVSFAssets, 0x08 },
    { L"Mall PL#190 [Megaman]",             0x7926C, 0x7930C, indexCPS2Sprites_MSHVSFAssets, 0x0c },
    { L"Mall PL#600.1",                     0x63952, 0x63b52, indexCPS2Sprites_MSHVSFAssets, 0x0a },
    { L"Mall PL#600.2",                     0x63b52, 0x63D52, indexCPS2Sprites_MSHVSFAssets, 0x0b },
    { L"Mall PL#190 [Spectators LS]",       0x7930C, 0x7934C, indexCPS2Sprites_MSHVSFAssets, 0x09 },
    { L"Mall PL#190 [RS Sprites: Lady]",    0x7934C, 0x7936C, indexCPS2Sprites_MSHVSFAssets, 0x0d },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_TEMPLE_PALETTES[] =
{
    { L"Temple of Fists - Sky BG [PL#600.1]",           0x60152, 0x602B2, indexCPS2Sprites_MSHVSFAssets, 0x13, &pairFullyLinkedNode },
    { L"Temple of Fists - Floor Buildings [PL#400.1]",  0x5AEF2, 0x5B0F2, indexCPS2Sprites_MSHVSFAssets, 0x14 },
    { L"Temple of Fists - Big Statue [PL#400.2]",       0x5B0F2, 0x5B2B2, indexCPS2Sprites_MSHVSFAssets, 0x15 },
    { L"Temple of Fists - Sprites [PL#190]",            0x7870C, 0x787EC, indexCPS2Sprites_MSHVSFAssets, 0x16 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_PREVIEW_PALETTES[] =
{
    // Previews are a silghtly different order and I don't know why
    { L"Apocalypse Now!",   0x64f32, 0x65132, indexCPS2Sprites_MSHVSFAssets, 0x95 },
    { L"Showdown in the Park", 0x65132, 0x65332, indexCPS2Sprites_MSHVSFAssets, 0x9e },
    { L"Death Valley",      0x65332, 0x65532, indexCPS2Sprites_MSHVSFAssets, 0x97 },
    { L"The Cataract",      0x65532, 0x65732, indexCPS2Sprites_MSHVSFAssets, 0xa0 },
    { L"Temple of Fists",   0x65732, 0x65932, indexCPS2Sprites_MSHVSFAssets, 0x9f },
    { L"On the Hilltop",    0x65932, 0x65b32, indexCPS2Sprites_MSHVSFAssets, 0x9c },
    { L"Manhattan",         0x65b32, 0x65d32, indexCPS2Sprites_MSHVSFAssets, 0x99 },
    // the two "factory" preview palettes are almost the same
    { L"Midnight Plant",    0x65d32, 0x65f32, indexCPS2Sprites_MSHVSFAssets, 0x9a },
    { L"Code Red",          0x65f32, 0x66132, indexCPS2Sprites_MSHVSFAssets, 0x96 },
    { L"Night Cooking",     0x66132, 0x66332, indexCPS2Sprites_MSHVSFAssets, 0x9b },
    { L"Mall Mayhem",       0x66332, 0x66532, indexCPS2Sprites_MSHVSFAssets, 0x98 },
    { L"Raging Inferno",    0x66532, 0x66732, indexCPS2Sprites_MSHVSFAssets, 0x9d },
};

const sDescTreeNode MSHVSF_A_STAGE_COLLECTION[] =
{
    { L"Apocalypse Now!",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_APOCALYPSE_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_APOCALYPSE_PALETTES) },
    { L"Showdown in the Park",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_RIVER_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_RIVER_PALETTES) },
    { L"Death Valley",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_DEATHVALLEY_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_DEATHVALLEY_PALETTES) },
    { L"The Cataract",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_CATARACT_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_CATARACT_PALETTES) },
    { L"On the Hilltop",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_HILLTOP_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_HILLTOP_PALETTES) },
    { L"Manhattan",                     DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_MANHATTAN_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_MANHATTAN_PALETTES) },
    { L"Midnight Plant",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_MIDNIGHTPLANT_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_MIDNIGHTPLANT_PALETTES) },
    // Midnight Plant exploded
    { L"Raging Inferno",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_RAGINGINFERNO_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_RAGINGINFERNO_PALETTES) },
    // Airplane hangar stage
    { L"Code Red",                      DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_CODERED_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_CODERED_PALETTES) },
    // TV show
    { L"Dead Or Live The Show",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_NIGHTCOOKING_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_NIGHTCOOKING_PALETTES) },
    { L"Mall Mayhem",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_MALLMAYHEM_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_MALLMAYHEM_PALETTES) },
    { L"Temple of Fists",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_TEMPLE_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_TEMPLE_PALETTES) },

    { L"Stage Previews",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_PREVIEW_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_PREVIEW_PALETTES) },
};

#define k_pszBlackheartUnit L"Blackheart/Mephisto"

const sDescTreeNode MSHVSF_A_UNITS_6A[] =
{
    { L"Akuma",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_AKUMA_COLLECTION,               ARRAYSIZE(MSHVSF_A_AKUMA_COLLECTION) },
    { L"Armored Spider-Man",    DESC_NODETYPE_TREE, (void*)MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION) },
    { k_pszBlackheartUnit,      DESC_NODETYPE_TREE, (void*)MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION) },
    { L"Captain America",       DESC_NODETYPE_TREE, (void*)MSHVSF_A_CAPTAIN_AMERICA_COLLECTION,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_COLLECTION) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_CHUNLI_COLLECTION,              ARRAYSIZE(MSHVSF_A_CHUNLI_COLLECTION) },
    { L"Cyber Akuma",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYBER_AKUMA_COLLECTION,         ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_COLLECTION) },
    { L"Cyclops",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYCLOPS_COLLECTION,             ARRAYSIZE(MSHVSF_A_CYCLOPS_COLLECTION) },
    { L"Dan",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_DAN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_DAN_COLLECTION) },
    { L"Dark Sakura",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_DARK_SAKURA_COLLECTION,         ARRAYSIZE(MSHVSF_A_DARK_SAKURA_COLLECTION) },
    { L"Dhalsim",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_DHALSIM_COLLECTION,             ARRAYSIZE(MSHVSF_A_DHALSIM_COLLECTION) },
    { L"Hulk",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_HULK_COLLECTION,                ARRAYSIZE(MSHVSF_A_HULK_COLLECTION) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_KEN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_KEN_COLLECTION) },
    { L"M. Bison",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_MBIPSON_COLLECTION,             ARRAYSIZE(MSHVSF_A_MBIPSON_COLLECTION) },
    { L"Mech-Zangief",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_MECH_ZANGIEF_COLLECTION,        ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_COLLECTION) },
    { L"Norimaro",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_NORIMARO_COLLECTION,            ARRAYSIZE(MSHVSF_A_NORIMARO_COLLECTION) },
    { L"Omega Red",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_OMEGARED_COLLECTION,            ARRAYSIZE(MSHVSF_A_OMEGARED_COLLECTION) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_RYU_COLLECTION,                 ARRAYSIZE(MSHVSF_A_RYU_COLLECTION) },
    { L"Sakura",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_SAKURA_COLLECTION,              ARRAYSIZE(MSHVSF_A_SAKURA_COLLECTION) },
    { L"Shadow",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHADOW_COLLECTION,              ARRAYSIZE(MSHVSF_A_SHADOW_COLLECTION) },
    { L"Shuma-Gorath",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHUMAGORATH_COLLECTION,         ARRAYSIZE(MSHVSF_A_SHUMAGORATH_COLLECTION) },
    { L"Spider-Man",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_SPIDERMAN_COLLECTION,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_COLLECTION) },
    { L"U.S. Agent",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_USAGENT_COLLECTION,             ARRAYSIZE(MSHVSF_A_USAGENT_COLLECTION) },
    { L"Wolverine",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_WOLVERINE_COLLECTION,           ARRAYSIZE(MSHVSF_A_WOLVERINE_COLLECTION) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_ZANGIEF_COLLECTION,             ARRAYSIZE(MSHVSF_A_ZANGIEF_COLLECTION) },
    { L"Apocalypse",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_APOCALYPSE_COLLECTION,          ARRAYSIZE(MSHVSF_A_APOCALYPSE_COLLECTION) },
    { L"Status Effects",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_STATUS_COLLECTION,              ARRAYSIZE(MSHVSF_A_STATUS_COLLECTION) },
    { L"Bonus Palettes",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION,               ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION) },
    { L"Stages",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGE_COLLECTION,               ARRAYSIZE(MSHVSF_A_STAGE_COLLECTION) },
};

const sDescTreeNode MSHVSF_A_UNITS_7B[] =
{
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_VSP_COLLECTION_7B, ARRAYSIZE(MSHVSF_A_VSP_COLLECTION_7B) },
    { L"Continue Screen Portraits",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_CSP_COLLECTION_7B, ARRAYSIZE(MSHVSF_A_CSP_COLLECTION_7B) },
    { L"Bonus Palettes",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_7B_BONUS_COLLECTION, ARRAYSIZE(MSHVSF_A_7B_BONUS_COLLECTION) },
};

const sDescTreeNode MSHVSF_A_UNITS_MONO[] =
{
    { L"Akuma",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_AKUMA_COLLECTION,               ARRAYSIZE(MSHVSF_A_AKUMA_COLLECTION) },
    { L"Armored Spider-Man",    DESC_NODETYPE_TREE, (void*)MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION) },
    { k_pszBlackheartUnit,      DESC_NODETYPE_TREE, (void*)MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION) },
    { L"Captain America",       DESC_NODETYPE_TREE, (void*)MSHVSF_A_CAPTAIN_AMERICA_COLLECTION,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_COLLECTION) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_CHUNLI_COLLECTION,              ARRAYSIZE(MSHVSF_A_CHUNLI_COLLECTION) },
    { L"Cyber Akuma",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYBER_AKUMA_COLLECTION,         ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_COLLECTION) },
    { L"Cyclops",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYCLOPS_COLLECTION,             ARRAYSIZE(MSHVSF_A_CYCLOPS_COLLECTION) },
    { L"Dan",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_DAN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_DAN_COLLECTION) },
    { L"Dark Sakura",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_DARK_SAKURA_COLLECTION,         ARRAYSIZE(MSHVSF_A_DARK_SAKURA_COLLECTION) },
    { L"Dhalsim",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_DHALSIM_COLLECTION,             ARRAYSIZE(MSHVSF_A_DHALSIM_COLLECTION) },
    { L"Hulk",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_HULK_COLLECTION,                ARRAYSIZE(MSHVSF_A_HULK_COLLECTION) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_KEN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_KEN_COLLECTION) },
    { L"M. Bison",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_MBIPSON_COLLECTION,             ARRAYSIZE(MSHVSF_A_MBIPSON_COLLECTION) },
    { L"Mech-Zangief",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_MECH_ZANGIEF_COLLECTION,        ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_COLLECTION) },
    { L"Norimaro",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_NORIMARO_COLLECTION,            ARRAYSIZE(MSHVSF_A_NORIMARO_COLLECTION) },
    { L"Omega Red",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_OMEGARED_COLLECTION,            ARRAYSIZE(MSHVSF_A_OMEGARED_COLLECTION) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_RYU_COLLECTION,                 ARRAYSIZE(MSHVSF_A_RYU_COLLECTION) },
    { L"Sakura",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_SAKURA_COLLECTION,              ARRAYSIZE(MSHVSF_A_SAKURA_COLLECTION) },
    { L"Shadow",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHADOW_COLLECTION,              ARRAYSIZE(MSHVSF_A_SHADOW_COLLECTION) },
    { L"Shuma-Gorath",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHUMAGORATH_COLLECTION,         ARRAYSIZE(MSHVSF_A_SHUMAGORATH_COLLECTION) },
    { L"Spider-Man",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_SPIDERMAN_COLLECTION,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_COLLECTION) },
    { L"U.S. Agent",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_USAGENT_COLLECTION,             ARRAYSIZE(MSHVSF_A_USAGENT_COLLECTION) },
    { L"Wolverine",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_WOLVERINE_COLLECTION,           ARRAYSIZE(MSHVSF_A_WOLVERINE_COLLECTION) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_ZANGIEF_COLLECTION,             ARRAYSIZE(MSHVSF_A_ZANGIEF_COLLECTION) },
    { L"Apocalypse",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_APOCALYPSE_COLLECTION,          ARRAYSIZE(MSHVSF_A_APOCALYPSE_COLLECTION) },
    { L"Status Effects",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_STATUS_COLLECTION,              ARRAYSIZE(MSHVSF_A_STATUS_COLLECTION) },
    { L"Stages",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGE_COLLECTION,               ARRAYSIZE(MSHVSF_A_STAGE_COLLECTION) },
    { L"Continue Screen Portraits",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_CSP_COLLECTION_7B,         ARRAYSIZE(MSHVSF_A_CSP_COLLECTION_7B) },
    { L"ROM06 Bonus Palettes",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION_STEAM,         ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION_STEAM) },
    { L"ROM07 Bonus Palettes",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_7B_BONUS_COLLECTION,            ARRAYSIZE(MSHVSF_A_7B_BONUS_COLLECTION) },
};
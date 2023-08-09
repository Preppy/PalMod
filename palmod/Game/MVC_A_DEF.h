#pragma once

// *****************************************************************************************************************
// 
//  WARNING: If you rearrange character's palettes, make sure you don't break the post palette processing being
//  done for that character.  You should double-check that after any reorganization.
// 
// *****************************************************************************************************************

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MVC_A_RYU_PALETTES. 
// * Update every array using MVC_A_NUMUNIT below
// That should be it.  Good luck.

const std::vector<uint16_t> MVC_A_IMGIDS_USED =
{
    // Main Roster
    indexCPS2Sprites_Ryu,          // 0x00
    indexCPS2Sprites_Zangief,      // 0x01
    indexCPS2Sprites_Morrigan,     // 0x03
    indexCPS2Sprites_Strider,      // 0x05
    indexCPS2Sprites_Wolverine,    // 0x07
    indexCPS2Sprites_CapAm,        // 0x0B, // Captain America
    indexCPS2Sprites_Spidey,       // 0x0C, // Spider-Man
    indexCPS2Sprites_Hulk,         // 0x0D
    indexCPS2Sprites_Venom,        // 0x0E
    indexCPS2Sprites_ChunLi,       // 0x1B
    indexCPS2Sprites_Megaman,      // 0x1C
    indexCPS2Sprites_Roll,         // 0x1D
    indexCPS2Sprites_Gambit,       // 0x28
    indexCPS2Sprites_WarMachine,   // 0x2E
    indexCPS2Sprites_Jin,          // 0x37
    indexCPS2Sprites_CapCom,       // 0x38, // Captain Commando
    // MvC1 Unique
    indexCPS2Sprites_Onslaught,    // 0x3B
    indexCPS2Sprites_MVCAssets,    // 0x3C
    // Transforms
    indexCPS2Sprites_Akuma,        // 0x1E, // Gouki
    indexCPS2Sprites_Ken,          // 0x27
    // Assists
    indexCPS2Sprites_Cyclops,      // 0x06
    indexCPS2Sprites_Psylocke,     // 0x08
    indexCPS2Sprites_Iceman,       // 0x09
    indexCPS2Sprites_Rogue,        // 0x0A
    indexCPS2Sprites_Charlie,      // 0x21, // Charlie/Nash/Shadow
    indexCPS2Sprites_Bison,        // 0x26  // used for Chun-Li's ending
    indexCPS2Sprites_Juggy,        // 0x29, // Juggernaut
    indexCPS2Sprites_Storm,        // 0x2A
    indexCPS2Sprites_Magneto,      // 0x2C
    indexCPS2Sprites_Colossus,     // 0x32
    indexCPS2Sprites_Sentinel,     //
    indexCPS2Sprites_Anita,        // 0x51
};

// ROM layout information:

// 0x38xxx large body Onslaught sprites
// 0x39xxx+ unknown
// 0x47xxx assist icons
// 0x48xxx characters
// 0x49xxx end of MM 2 and onslaught, then hidden characters
// 0x4Axxx unknown
// 0x4Bxxx onslaught
// 0x4Cxxx megaman extras
// 0x4Dxxx megaman + roll extras
// 0x4Exxx roll extras
// 0x4Fxxx shadow lady glimmer, most unknown
// 0x50xxx end of SL glimmer, assists
// 0x51xxx assists (Anita K+)
// 0x52xxx CSP/Duos
// 0x53xxx super portraits
// 0x54xxx super portraits cont
// 0x55xxx super portraits then VSPs
// 0x56xxx VSPs
// 0x57xxx VSPs
// 0x58xxx VSPs
// 0x59xxx unknown

#if dontcompilethis

    Educated guess at sort order based upon VSPs.Agrees with CSIs.
    War Machine
    Captain America
    Hulk
    Wolverine
    Gambit
    Venom
    Spider - Man
    Roll
    Ryu
    Captain Commando
    Chun - Li
    Jin
    Zangief
    Strider Hiryu
    Morrigan
    Megaman
    Onslaught
    Red Venom
    Orange Hulk
    Gold War Machine
    Shadow Lady
    Lilith
    Ken
    Gouki
    Mech - Zangief

    Assist CSI layout.Differs from character sprite palette layout.
    0x047d84 Juggernaut
    0x047da4 Magneto
    0x047dc4 Psylocke
    0x047de4 Cyclops
    0x047e04 Colossus
    0x047e24 Thor
    0x047e44 U.S.Agent
    0x047e64 Iceman
    0x047e84 Rogue
    0x047ea4 Jubilee
    0x047ec4 Storm
    0x047f04 Arthur
    0x047f24 Michelle Heart
    0x047f44 Ton - Pooh
    0x047f64 Saki
    0x047f84 Unknown Soldier
    0x047fa4 Lou
    0x047fc4 Anita
    0x047fe4 Pure and Fur
    0x048004 Devilot
#endif

#pragma region SecondaryPaletteEffects

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_CaptainCommando =
{
    // the taunt shares most of his coloring
    { SUPP_NODE | SUPP_NODE_NOCOPY, 4, 8,
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 3, 12, 3
    },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Gambit =
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

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Jin =
{
    // these are for the 6 towel taunt palettes
    { SUPP_NODE, 0x9, 6,
        MOD_TINT, 2, 4, 2, 0, NEG + 1, NEG + 1 },
    { SUPP_NODE, 0xa, 6,
        MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2 },
    { SUPP_NODE, 0xb, 6,
        MOD_TINT, 2, 4, 2, 0, NEG + 3, NEG + 3 },
    { SUPP_NODE, 0xc, 6,
        MOD_TINT, 2, 4, 2, 0, NEG + 4, NEG + 4 },
    { SUPP_NODE, 0xd, 6,
        MOD_TINT, 2, 4, 2, 0, NEG + 5, NEG + 5 },
    { SUPP_NODE, 0xe, 6,
        MOD_TINT, 2, 4, 2, 0, NEG + 6, NEG + 6 },

    // power-up flash: 6 frames
        // first palette is solid white, sixth is gold
    { SUPP_NODE, 0x10, 6,
        MOD_LUM, 1, 15, 32 },
    { SUPP_NODE, 0x11, 6,
        MOD_LUM, 1, 15, 25 },
    { SUPP_NODE, 0x12, 6,
        MOD_LUM, 1, 15, 16 },
    { SUPP_NODE, 0x13, 6,
        MOD_LUM, 1, 15, 10 },

    //SUPP_NODE_EX, Dest Palette, Dest Inc, Src Start, Src Amt, Dst Index
    // the "player" hands for blodia vulcan
    { SUPP_NODE, 0x15, 3,
        MOD_COPY, 6, 10, 6,
        MOD_LUM, 6, 10, 10 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Megaman =
{
    // 9 frames intro animation
    { SUPP_NODE, 0x05, 0x57,
        MOD_LUM, 1, 15, NEG + 25 },
    { SUPP_NODE, 0x06, 0x57,
        MOD_LUM, 1, 15, NEG + 7 },
    { SUPP_NODE, 0x07, 0x57,
        MOD_LUM, 1, 15, NEG + 5 },
    { SUPP_NODE, 0x08, 0x57 },
    { SUPP_NODE, 0x09, 0x57,
        MOD_LUM, 1, 15, 5 },
    { SUPP_NODE, 0x0a, 0x57,
        MOD_LUM, 1, 15, 10 },
    { SUPP_NODE, 0x0b, 0x57,
        MOD_LUM, 1, 15, 16 },
    { SUPP_NODE, 0x0c, 0x57,
        MOD_LUM, 1, 15, 22 },

    // 9 frames hyper megaman: darkened version of the main palette
    { SUPP_NODE, 0x4e, 0x57,
        MOD_LUM, 1, 15, NEG + 35 },
    { SUPP_NODE, 0x4f, 0x57,
        MOD_LUM, 1, 15, NEG + 27 },
    { SUPP_NODE, 0x50, 0x57,
        MOD_LUM, 1, 15, NEG + 21 },
    { SUPP_NODE, 0x51, 0x57 },
    { SUPP_NODE, 0x52, 0x57,
        MOD_LUM, 1, 15, 13 },
    { SUPP_NODE, 0x53, 0x57,
        MOD_LUM, 1, 15, 21 },
    { SUPP_NODE, 0x54, 0x57,
        MOD_LUM, 1, 15, 27 },
    { SUPP_NODE, 0x55, 0x57,
        MOD_LUM, 1, 15, 35 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Lilith =
{
    // the lilith join poses should match her core palette
    { SUPP_NODE, 0x09, 9 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x0a, 9,
        MOD_COPY, 2, 1, 2,
        MOD_COPY, 3, 1, 4,
        MOD_COPY, 4, 1, 3,
        MOD_COPY, 10, 1, 12,
        MOD_COPY, 11, 1, 11,
        MOD_COPY, 12, 1, 10,
    },

    // lilith phase-in intro: 4 frames
    { SUPP_NODE, 0x03, 9,
            MOD_LUM, 1, 15, 22 },
    { SUPP_NODE, 0x04, 9,
            MOD_LUM, 1, 15, 16 },
    { SUPP_NODE, 0x05, 9,
            MOD_LUM, 1, 15, 7 },
    { SUPP_NODE, 0x06, 9,
            MOD_LUM, 1, 15, 3 },

    // Taunt: uses slightly different shadings
    { SUPP_NODE, 0x0b, 9,
            MOD_COPY, 10, 1, 11,
            MOD_COPY, 11, 1, 12,
            MOD_COPY, 11, 1, 13,
            MOD_COPY, 12, 1, 14,
            MOD_LUM, 10, 1, NEG + 5,
            MOD_LUM, 11, 1, 5,
            MOD_LUM, 12, 1, NEG + 5,
            MOD_LUM, 13, 1, 5,
    },
};

// This is for the Lilith that is part of Morrigan
const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_LilithMorrigan =
{
    // the morrigan join poses should match her core lilith palette
    { SUPP_NODE, 0x06, 9 },
    { SUPP_NODE, 0x07, 9,
        MOD_WHITE, 1, 1 }
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Morrigan =
{
    // the morrigan intro and join poses should match her core morrigan palette
    { SUPP_NODE, 0x0b, 9 }, // Morrigan Join Pose 1
    { SUPP_NODE, 0x0c, 9,   // Morrigan Join Pose 2
        MOD_WHITE, 1, 1 },

    // Morrigan phase-in intro: 4 frames
    { SUPP_NODE, 0x05, 9,
            MOD_LUM, 1, 15, 22 },
    { SUPP_NODE, 0x06, 9,
            MOD_LUM, 1, 15, 13 },
    { SUPP_NODE, 0x07, 9,
            MOD_LUM, 1, 15, 7 },
    { SUPP_NODE, 0x08, 9 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x0d, 9,  // Taunt: share the body and hair, ignore the cloak
            MOD_COPY, 1, 9, 1 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_MorriganLilith =
{
    // the lilith join poses should match her core morrigan palette
    { SUPP_NODE, 0x08, 9 }, // Lilith Join Pose 1
    { SUPP_NODE, 0x09, 9,   // Lilith Join Pose 2
        MOD_WHITE, 1, 1 }
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Roll =
{
    // 9 frames intro animation
    { SUPP_NODE, 0x05, 0x57,
        MOD_LUM, 1, 15, NEG + 25 },
    { SUPP_NODE, 0x06, 0x57,
        MOD_LUM, 1, 15, NEG + 7 },
    { SUPP_NODE, 0x07, 0x57,
        MOD_LUM, 1, 15, NEG + 5 },
    { SUPP_NODE, 0x08, 0x57 },
    { SUPP_NODE, 0x09, 0x57,
        MOD_LUM, 1, 15, 5 },
    { SUPP_NODE, 0x0a, 0x57,
        MOD_LUM, 1, 15, 10 },
    { SUPP_NODE, 0x0b, 0x57,
        MOD_LUM, 1, 15, 16 },
    { SUPP_NODE, 0x0c, 0x57,
        MOD_LUM, 1, 15, 22 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_RyuKen =
{
    // Ryu Ken and Ken background should share the same outfit
    { SUPP_NODE | SUPP_NODE_NOCOPY, 6, 8,
        MOD_COPY,  9, 5, 9 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_ShadowLady =
{
    // Infinity legs
    { SUPP_NODE | SUPP_NODE_NOCOPY, 1, 8,
        MOD_COPY, 1, 5, 1,
        MOD_COPY, 8, 6, 6,
        MOD_COPY, 8, 4, 12,
        MOD_LUM, 1, 1, 12,
        MOD_LUM, 6, 9, 12 },
        
    // 8 frames glimmer
    { SUPP_NODE, 3, 8,
        MOD_LUM, 14, 1, NEG + 10 },
    { SUPP_NODE, 4, 8,
        MOD_LUM, 14, 1, NEG + 7 },
    { SUPP_NODE, 5, 8,
        MOD_LUM, 14, 1, NEG + 4 },
    { SUPP_NODE, 6, 8 },
    { SUPP_NODE, 7, 8,
        MOD_LUM, 14, 1, 16 },
    { SUPP_NODE, 8, 8,
        MOD_LUM, 14, 1, 33 },
    { SUPP_NODE, 9, 8,
        MOD_LUM, 14, 1, 50 },
    { SUPP_NODE, 10, 8,
        MOD_LUM, 14, 1, NEG + 10 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Spidey =
{
    // Intro 1-8
    { SUPP_NODE, 0x02, 16,
        MOD_LUM, 01, 10, NEG + 29 },
    { SUPP_NODE, 0x03, 16,
        MOD_LUM, 01, 10, NEG + 23 },
    { SUPP_NODE, 0x04, 16,
        MOD_LUM, 01, 10, NEG + 17 },
    { SUPP_NODE, 0x05, 16,
        MOD_LUM, 01, 10, NEG + 12 },
    { SUPP_NODE, 0x06, 16,
        MOD_LUM, 01, 10, NEG + 8 },
    { SUPP_NODE, 0x07, 16,
        MOD_LUM, 01, 10, NEG + 7 },
    { SUPP_NODE, 0x08, 16,
        MOD_LUM, 01, 10, NEG + 5 },
    { SUPP_NODE, 0x09, 16,
        MOD_LUM, 01, 10, NEG + 3 },

    // Taunt balloon: we don't touch
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MVC_Wolverine =
{
    // his berserker barrage trails a bit of his costume.
    { SUPP_NODE | SUPP_NODE_NOCOPY, 2, 8,
        MOD_COPY,  2, 1, 12,
        MOD_COPY, 11, 1, 13,
        MOD_COPY, 10, 1, 14,
        MOD_COPY,  9, 1, 15 },
};

const stPaletteProcessingInformation secondaryMVCCaptainCommandoPalettes{ paletteBuddy_MVC_CaptainCommando };
const stPaletteProcessingInformation secondaryMVCGambitEffects{ paletteBuddy_MVC_Gambit };
const stPaletteProcessingInformation secondaryMVCJinPalettes{ paletteBuddy_MVC_Jin };
const stPaletteProcessingInformation secondaryMVCLilithPalettes{ paletteBuddy_MVC_Lilith };
const stPaletteProcessingInformation secondaryMVCLilithMorriganPalettes{ paletteBuddy_MVC_LilithMorrigan };
const stPaletteProcessingInformation secondaryMVCMegamanPalettes{ paletteBuddy_MVC_Megaman };
const stPaletteProcessingInformation secondaryMVCMorriganPalettes{ paletteBuddy_MVC_Morrigan };
const stPaletteProcessingInformation secondaryMVCMorriganLilithPalettes{ paletteBuddy_MVC_MorriganLilith };
const stPaletteProcessingInformation secondaryMVCRollPalettes{ paletteBuddy_MVC_Roll };
const stPaletteProcessingInformation secondaryMVCRyuKenPalettes{ paletteBuddy_MVC_RyuKen };
const stPaletteProcessingInformation secondaryMVCShadowLadyEffects{ paletteBuddy_MVC_ShadowLady };
const stPaletteProcessingInformation secondaryMVCSpideyEffects{ paletteBuddy_MVC_Spidey };
const stPaletteProcessingInformation secondaryMVCWolverineEffects{ paletteBuddy_MVC_Wolverine };

#pragma endregion

const sGame_PaletteDataset MVC_A_RYU_PALETTES_P[] =
{
    { L"P Ryu", 0x487c2, 0x487e2, indexCPS2Sprites_Ryu, 0x09 },
    { L"P Ryu Hadouken", 0x487e2, 0x48802, indexCPS2Sprites_Ryu, 1 },
    { L"P Ryu Extra", 0x48802, 0x48822 },

    { L"P Ken", 0x4ec42, 0x4ec62, indexCPS2Sprites_Ryu, 0x09, nullptr, &secondaryMVCRyuKenPalettes },
    { L"P Ken Hakouken", 0x4ec62, 0x4ec82, indexCPS2Sprites_Ken, 1 },
    { L"P Ken Shoryuken", 0x4ec82, 0x4eca2, indexCPS2Sprites_Ken, 2 },

    { L"P Akuma", 0x4ed02, 0x4ed22, indexCPS2Sprites_Ryu, 0x09 },
    { L"P Akuma Hadouken", 0x4ed22, 0x4ed42, indexCPS2Sprites_Akuma, 1 },
    { L"P Akuma Extra", 0x4ed42, 0x4ed62 },

    { L"P Ken (Intro)", 0x4ebC2, 0x4ebE2, indexCPS2Sprites_Ryu, 0xa },
    { L"P Sean (Intro)", 0x4ebE2, 0x4ec02, indexCPS2Sprites_Ryu, 0xb },
};

const sGame_PaletteDataset MVC_A_RYU_PALETTES_K[] =
{
    { L"K Ryu", 0x48822, 0x48842, indexCPS2Sprites_Ryu, 0x09 },
    { L"K Ryu Hadouken", 0x48842, 0x48862, indexCPS2Sprites_Ryu, 1 },
    { L"K Ryu Extra", 0x48862, 0x48882 },

    { L"K Ken", 0x4eca2, 0x4ecc2, indexCPS2Sprites_Ryu, 0x09, nullptr, &secondaryMVCRyuKenPalettes },
    { L"K Ken Hadouken", 0x4ecc2, 0x4ece2, indexCPS2Sprites_Ken, 1 },
    { L"K Ken Shoryuken", 0x4ece2, 0x4ed02, indexCPS2Sprites_Ken, 2 },

    { L"K Akuma", 0x4ed62, 0x4ed82, indexCPS2Sprites_Ryu, 0x09 },
    { L"K Akuma Hadouken", 0x4ed82, 0x4eda2, indexCPS2Sprites_Akuma, 1 },
    { L"K Akuma Extra", 0x4eda2, 0x4edc2 },

    { L"K Ken (Intro)", 0x4ec02, 0x4ec22, indexCPS2Sprites_Ryu, 0xa },
    { L"K Sean (Intro)", 0x4ec22, 0x4ec42, indexCPS2Sprites_Ryu, 0xb },
};

// Unused zangief palettes?
// { L"P Unknown 1", 0x48b02, 0x48b22 },
// { L"P Palette 2", 0x48cc2, 0x48ce2 },
// { L"K Unknown 1", 0x48b62, 0x48b82 },
// { L"K Unknown 2", 0x48d22, 0x48d42 },

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_P[] =
{
    { L"P Zangief Palette", 0x48ac2, 0x48ae2, indexCPS2Sprites_Zangief },
    { L"P Zangief Banishing Fist", 0x48ae2, 0x48b02, indexCPS2Sprites_Zangief, 1 },

    { L"P Zangief SPD Rage 1", 0x48bc2, 0x48be2, indexCPS2Sprites_Zangief },
    { L"P Zangief SPD Rage 2", 0x48be2, 0x48c02, indexCPS2Sprites_Zangief },
    { L"P Zangief SPD Rage 3", 0x48c02, 0x48c22, indexCPS2Sprites_Zangief },

    { L"P Mech-Gief Palette", 0x48c82, 0x48ca2, indexCPS2Sprites_Zangief },
    { L"P Mech-Gief Vodka Fire", 0x48ca2, 0x48cc2, indexCPS2Sprites_Zangief, 3 },

    { L"P Mech-Gief SPD Rage 1", 0x48D42, 0x48D62, indexCPS2Sprites_Zangief },
    { L"P Mech-Gief SPD Rage 2", 0x48D62, 0x48D82, indexCPS2Sprites_Zangief },
    { L"P Mech-Gief SPD Rage 3", 0x48D82, 0x48DA2, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_K[] =
{
    { L"K Zangief Palette", 0x48b22, 0x48b42, indexCPS2Sprites_Zangief },
    { L"K Zangief Banishing Fist", 0x48b42, 0x48b62, indexCPS2Sprites_Zangief, 1 },

    { L"K Zangief SPD Rage 1", 0x48c22, 0x48c42, indexCPS2Sprites_Zangief },
    { L"K Zangief SPD Rage 2", 0x48c42, 0x48c62, indexCPS2Sprites_Zangief },
    { L"K Zangief SPD Rage 3", 0x48c62, 0x48c82, indexCPS2Sprites_Zangief },

    { L"K Mech-Gief Palette", 0x48ce2, 0x48d02, indexCPS2Sprites_Zangief },
    { L"K Mech-Gief Vodka Fire", 0x48d02, 0x48d22, indexCPS2Sprites_Zangief, 3 },

    { L"K Mech-Gief SPD Rage 1", 0x48DA2, 0x48DC2, indexCPS2Sprites_Zangief },
    { L"K Mech-Gief SPD Rage 2", 0x48DC2, 0x48DE2, indexCPS2Sprites_Zangief },
    { L"K Mech-Gief SPD Rage 3", 0x48DE2, 0x48E02, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_P[] =
{
    { L"P Palette", 0x492e2, 0x49302, indexCPS2Sprites_ChunLi, 0x00, &pairNext, &secondaryMVCShadowLadyEffects },
    { L"P Infinity Legs", 0x49302, 0x49322, indexCPS2Sprites_ChunLi, 0x1 },
    { L"P Shadow Leg Flash", 0x49322, 0x49342, indexCPS2Sprites_ChunLi, 0x0D },

    { L"P Glimmer 1", 0x4ff62, 0x4ff82, indexCPS2Sprites_ChunLi },
    { L"P Glimmer 2", 0x4ff82, 0x4ffa2, indexCPS2Sprites_ChunLi },
    { L"P Glimmer 3", 0x4ffa2, 0x4ffc2, indexCPS2Sprites_ChunLi },
    { L"P Glimmer 4", 0x4ffc2, 0x4ffe2, indexCPS2Sprites_ChunLi },
    { L"P Glimmer 5", 0x4ffe2, 0x50002, indexCPS2Sprites_ChunLi },
    { L"P Glimmer 6", 0x50002, 0x50022, indexCPS2Sprites_ChunLi },
    { L"P Glimmer 7", 0x50022, 0x50042, indexCPS2Sprites_ChunLi },
    { L"P Glimmer 8", 0x50122, 0x50142, indexCPS2Sprites_ChunLi }, // this range jumping to xx122 is odd.

    { L"P Laser?", 0x50142, 0x50162 },
    { L"P Missiles", 0x50162, 0x50182 },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_K[] =
{
    { L"K Palette", 0x49342, 0x49362, indexCPS2Sprites_ChunLi, 0x00, &pairNext, &secondaryMVCShadowLadyEffects },
    { L"K Infinity Legs", 0x49362, 0x49382, indexCPS2Sprites_ChunLi, 0x1 },
    { L"K Shadow Leg Flash", 0x49382, 0x493a2, indexCPS2Sprites_ChunLi, 0x0D },

    { L"K Glimmer 1", 0x50042, 0x50062, indexCPS2Sprites_ChunLi },
    { L"K Glimmer 2", 0x50062, 0x50082, indexCPS2Sprites_ChunLi },
    { L"K Glimmer 3", 0x50082, 0x500A2, indexCPS2Sprites_ChunLi },
    { L"K Glimmer 4", 0x500A2, 0x500C2, indexCPS2Sprites_ChunLi },
    { L"K Glimmer 5", 0x500C2, 0x500E2, indexCPS2Sprites_ChunLi },
    { L"K Glimmer 6", 0x500E2, 0x50102, indexCPS2Sprites_ChunLi },
    { L"K Glimmer 7", 0x50102, 0x50122, indexCPS2Sprites_ChunLi },
    { L"K Glimmer 8", 0x50182, 0x501A2, indexCPS2Sprites_ChunLi }, // this range is odd?

    { L"K Laser?", 0x501A2, 0x501C2 },
    { L"K Missiles", 0x501C2, 0x501E2 },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_P[] =
{
    { L"P Palette", 0x48942, 0x48962, indexCPS2Sprites_ChunLi, 0, &pairNext },
    { L"P Keiokuken (shades)", 0x48962, 0x48982, indexCPS2Sprites_ChunLi, 1 },
    { L"P Lightning Kicks / Kikouken / Kikosho", 0x48982, 0x489a2, indexCPS2Sprites_ChunLi, 2 },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_K[] =
{
    { L"K Palette", 0x489a2, 0x489c2, indexCPS2Sprites_ChunLi, 0, &pairNext },
    { L"K Keiokuken (shades)", 0x489c2, 0x489e2, indexCPS2Sprites_ChunLi, 1 },
    { L"K Lightning Kicks / Kikouken / Kikosho", 0x489e2, 0x48a02, indexCPS2Sprites_ChunLi, 2 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_P[] =
{
    { L"P Palette", 0x48a02, 0x48a22, indexCPS2Sprites_Jin, 0x00, nullptr, &secondaryMVCJinPalettes },
    { L"P Blodia FX", 0x48a22, 0x48a42, indexCPS2Sprites_Jin, 1 },
    { L"P Blodia Punch", 0x48a42, 0x48a62, indexCPS2Sprites_Jin, 2 },

    { L"P Saotome Shine / Meikyou Shishui 1", 0x4f3e2, 0x4f402, indexCPS2Sprites_Jin },
    { L"P Saotome Shine / Meikyou Shishui 2", 0x4f402, 0x4f422, indexCPS2Sprites_Jin },
    { L"P Saotome Shine / Meikyou Shishui 3", 0x4f422, 0x4f442, indexCPS2Sprites_Jin },
    { L"P Saotome Shine / Meikyou Shishui 4", 0x4f442, 0x4f462, indexCPS2Sprites_Jin },
    { L"P Saotome Shine / Meikyou Shishui 5", 0x4f462, 0x4f482, indexCPS2Sprites_Jin },
    { L"P Saotome Shine / Meikyou Shishui 6", 0x4f482, 0x4f4a2, indexCPS2Sprites_Jin },

    { L"P Burning Taunt 1", 0x4f7A2, 0x4f7C2, indexCPS2Sprites_Jin, 15 },
    { L"P Burning Taunt 2", 0x4f7C2, 0x4f7E2, indexCPS2Sprites_Jin, 15  },
    { L"P Burning Taunt 3", 0x4f7E2, 0x4f802, indexCPS2Sprites_Jin, 15  },
    { L"P Burning Taunt 4", 0x4f802, 0x4f822, indexCPS2Sprites_Jin, 15  },
    { L"P Burning Taunt 5", 0x4f822, 0x4f842, indexCPS2Sprites_Jin, 15  },
    { L"P Burning Taunt 6", 0x4f842, 0x4f862, indexCPS2Sprites_Jin, 15  },

    { L"P Power-up Flash 1", 0x4f562, 0x4f582, indexCPS2Sprites_Jin, 11 },
    { L"P Power-up Flash 2", 0x4f582, 0x4f5a2, indexCPS2Sprites_Jin, 11 },
    { L"P Power-up Flash 3", 0x4f5a2, 0x4f5c2, indexCPS2Sprites_Jin, 11 },
    { L"P Power-up Flash 4", 0x4f5c2, 0x4f5e2, indexCPS2Sprites_Jin, 11 },
    { L"P Power-up Flash 5", 0x4f5e2, 0x4f602, indexCPS2Sprites_Jin, 11 },
    { L"P Power-up Flash 6", 0x4f602, 0x4f622, indexCPS2Sprites_Jin, 11 },

    { L"P Vulcan Super (Hands)", 0x4f6e2, 0x4f702, indexCPS2Sprites_Jin, 12 },
    { L"P Vulcan Super (Muzzle Flash)", 0x4f702, 0x4f722, indexCPS2Sprites_Jin, 13 },
    { L"P Vulcan Super (Inside of Blodia)", 0x4f722, 0x4f742, indexCPS2Sprites_Jin, 14 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_K[] =
{
    { L"K Palette", 0x48a62, 0x48a82, indexCPS2Sprites_Jin, 0x00, nullptr, &secondaryMVCJinPalettes },
    { L"K Blodia FX", 0x48a82, 0x48aa2, indexCPS2Sprites_Jin, 1 },
    { L"K Blodia Punch", 0x48aa2, 0x48ac2, indexCPS2Sprites_Jin, 2 },

    { L"K Saotome Shine / Meikyou Shishui 1", 0x4f4a2, 0x4f4C2, indexCPS2Sprites_Jin },
    { L"K Saotome Shine / Meikyou Shishui 2", 0x4f4c2, 0x4f4e2, indexCPS2Sprites_Jin },
    { L"K Saotome Shine / Meikyou Shishui 3", 0x4f4e2, 0x4f502, indexCPS2Sprites_Jin },
    { L"K Saotome Shine / Meikyou Shishui 4", 0x4f502, 0x4f522, indexCPS2Sprites_Jin },
    { L"K Saotome Shine / Meikyou Shishui 5", 0x4f522, 0x4f542, indexCPS2Sprites_Jin },
    { L"K Saotome Shine / Meikyou Shishui 6", 0x4f542, 0x4f562, indexCPS2Sprites_Jin },

    { L"K Burning Taunt 1", 0x4f862, 0x4f882, indexCPS2Sprites_Jin, 15  },
    { L"K Burning Taunt 2", 0x4f882, 0x4f8A2, indexCPS2Sprites_Jin, 15  },
    { L"K Burning Taunt 3", 0x4f8A2, 0x4f8C2, indexCPS2Sprites_Jin, 15  },
    { L"K Burning Taunt 4", 0x4f8C2, 0x4f8E2, indexCPS2Sprites_Jin, 15  },
    { L"K Burning Taunt 5", 0x4f8E2, 0x4f902, indexCPS2Sprites_Jin, 15  },
    { L"K Burning Taunt 6", 0x4f902, 0x4f922, indexCPS2Sprites_Jin, 15  },

    { L"K Power-up Flash 1", 0x4f622, 0x4f642, indexCPS2Sprites_Jin, 11 },
    { L"K Power-up Flash 2", 0x4f642, 0x4f662, indexCPS2Sprites_Jin, 11 },
    { L"K Power-up Flash 3", 0x4f662, 0x4f682, indexCPS2Sprites_Jin, 11 },
    { L"K Power-up Flash 4", 0x4f682, 0x4f6a2, indexCPS2Sprites_Jin, 11 },
    { L"K Power-up Flash 5", 0x4f6a2, 0x4f6c2, indexCPS2Sprites_Jin, 11 },
    { L"K Power-up Flash 6", 0x4f6c2, 0x4f6e2, indexCPS2Sprites_Jin, 11 },

    { L"K Vulcan Super (Hands)", 0x4f742, 0x4f762, indexCPS2Sprites_Jin, 12 },
    { L"K Vulcan Super (Muzzle Flash)", 0x4f762, 0x4f782, indexCPS2Sprites_Jin, 13 },
    { L"K Vulcan Super (Inside of Blodia)", 0x4f782, 0x4f7A2, indexCPS2Sprites_Jin, 14 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_EXTRAS[] =
{
    { L"Ending Transformation", 0x4f922, 0x4f942, indexCPS2Sprites_Jin },
};

// Note that since this is eleventy palettes, the code is substituting the default Megaman sprite when 0xff is supplied.  
// To unwind that we would want to specify the correct sprites to use everywhere.  MM is 0x1C .
const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_P[] =
{
    { L"P Palette", 0x48f82, 0x48fa2, indexCPS2Sprites_Megaman, 0x00, nullptr, &secondaryMVCMegamanPalettes },
    { L"P Rush/Eddie", 0x48fa2, 0x48fc2, indexCPS2Sprites_Megaman, 0x01, &pairNext },
    { L"P Beat", 0x48fc2, 0x48fe2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious },

    { L"P Hair", 0x4c042, 0x4c062, indexCPS2Sprites_Megaman, 0x26 }, // 09
    { L"P Teleport / Death Animation", 0x4c062, 0x4c082, indexCPS2Sprites_Megaman, 0x0B }, // 0A

    { L"P Intro 1", 0x4c082, 0x4c0a2, indexCPS2Sprites_Megaman }, // 0B
    { L"P Intro 2", 0x4c0a2, 0x4c0c2, indexCPS2Sprites_Megaman },
    { L"P Intro 3", 0x4c0c2, 0x4c0e2, indexCPS2Sprites_Megaman },
    { L"P Intro 4", 0x4c0e2, 0x4c102, indexCPS2Sprites_Megaman },
    { L"P Intro 5", 0x4c102, 0x4c122, indexCPS2Sprites_Megaman },
    { L"P Intro 6", 0x4c122, 0x4c142, indexCPS2Sprites_Megaman },
    { L"P Intro 7", 0x4c142, 0x4c162, indexCPS2Sprites_Megaman },
    { L"P Intro 8", 0x4c162, 0x4c182, indexCPS2Sprites_Megaman },
    { L"P Intro 9", 0x4c182, 0x4c1a2, indexCPS2Sprites_Megaman },

    { L"P Rush 1", 0x4c1a2, 0x4c1c2, indexCPS2Sprites_Megaman, 1, &pairNext9 }, // 14
    { L"P Rush 2", 0x4c1c2, 0x4c1e2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush 3", 0x4c1e2, 0x4c202, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush 4", 0x4c202, 0x4c222, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush 5", 0x4c222, 0x4c242, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush 6", 0x4c242, 0x4c262, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush 7", 0x4c262, 0x4c282, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush 8", 0x4c282, 0x4c2a2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush 9", 0x4c2a2, 0x4c2c2, indexCPS2Sprites_Megaman, 1, &pairNext9 },

    { L"P Beat 1", 0x4c2c2, 0x4c2e2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 }, // 1D
    { L"P Beat 2", 0x4c2e2, 0x4c302, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 3", 0x4c302, 0x4c322, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 4", 0x4c322, 0x4c342, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 5", 0x4c342, 0x4c362, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 6", 0x4c362, 0x4c382, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 7", 0x4c382, 0x4c3a2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 8", 0x4c3a2, 0x4c3c2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 9", 0x4c3c2, 0x4c3e2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },

    { L"P Beat Plane 1", 0x4c3e2, 0x4c402, indexCPS2Sprites_Megaman, 0x24 }, // 26
    { L"P Beat Plane 2", 0x4c402, 0x4c422, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 3", 0x4c422, 0x4c442, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 4", 0x4c442, 0x4c462, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 5", 0x4c462, 0x4c482, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 6", 0x4c482, 0x4c4a2, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 7", 0x4c4a2, 0x4c4c2, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 8", 0x4c4c2, 0x4c4e2, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 9", 0x4c4e2, 0x4c502, indexCPS2Sprites_Megaman, 0x24 },

    { L"P Charged HP 1", 0x4c502, 0x4c522, indexCPS2Sprites_Megaman }, // 2F
    { L"P Charged HP 2", 0x4c522, 0x4c542, indexCPS2Sprites_Megaman },
    { L"P Charged HP 3", 0x4c542, 0x4c562, indexCPS2Sprites_Megaman },
    { L"P Charged HP 4", 0x4c562, 0x4c582, indexCPS2Sprites_Megaman },
    { L"P Charged HP 5", 0x4c582, 0x4c5a2, indexCPS2Sprites_Megaman },
    { L"P Charged HP 6", 0x4c5a2, 0x4c5c2, indexCPS2Sprites_Megaman },
    { L"P Charged HP 7", 0x4c5c2, 0x4c5e2, indexCPS2Sprites_Megaman },
    { L"P Charged HP 8", 0x4c5e2, 0x4c602, indexCPS2Sprites_Megaman },
    { L"P Charged HP 9", 0x4c602, 0x4c622, indexCPS2Sprites_Megaman },

    { L"P Rush Drill 1", 0x4c622, 0x4c642, indexCPS2Sprites_Roll, 0x0B, &pairNext9 }, // 38
    { L"P Rush Drill 2", 0x4c642, 0x4c662, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 3", 0x4c662, 0x4c682, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 4", 0x4c682, 0x4c6a2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 5", 0x4c6a2, 0x4c6c2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 6", 0x4c6c2, 0x4c6e2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 7", 0x4c6e2, 0x4c702, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 8", 0x4c702, 0x4c722, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 9", 0x4c722, 0x4c742, indexCPS2Sprites_Roll, 0x0B },

    { L"P Rush Drill Metal 1", 0x4c9e2 + 0x0, 0x4c9e2 + 0x20, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 2", 0x4c9e2 + 0x20, 0x4c9e2 + 0x40, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 3", 0x4c9e2 + 0x40, 0x4c9e2 + 0x060, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 4", 0x4c9e2 + 0x060, 0x4c9e2 + 0x080, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 5", 0x4c9e2 + 0x080, 0x4c9e2 + 0x0A0, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 6", 0x4c9e2 + 0x0A0, 0x4c9e2 + 0x0C0, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 7", 0x4c9e2 + 0x0C0, 0x4c9e2 + 0x0E0, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 8", 0x4c9e2 + 0x0E0, 0x4c9e2 + 0x100, indexCPS2Sprites_Roll, 0x0C },

    { L"P Teleport Intro", 0x4c742, 0x4c762, indexCPS2Sprites_Megaman, 0x0D }, // 41
    { L"P Dr Light", 0x4c762, 0x4c782, indexCPS2Sprites_Megaman, 0x25 }, // 42

    { L"P Hyper Megaman Armor 1", 0x4c782, 0x4c7a2, indexCPS2Sprites_Megaman, 0x27, &pairNext9 }, // 43
    { L"P Hyper Megaman Armor 2", 0x4c7a2, 0x4c7c2, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"P Hyper Megaman Armor 3", 0x4c7c2, 0x4c7e2, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"P Hyper Megaman Armor 4", 0x4c7e2, 0x4c802, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"P Hyper Megaman Armor 5", 0x4c802, 0x4c822, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"P Hyper Megaman Armor 6", 0x4c822, 0x4c842, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"P Hyper Megaman Armor 7", 0x4c842, 0x4c862, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"P Hyper Megaman Armor 8", 0x4c862, 0x4c882, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"P Hyper Megaman Armor 9", 0x4c882, 0x4c8a2, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },

    { L"P Hyper Megaman 1", 0x4c8a2, 0x4c8c2, indexCPS2Sprites_Megaman, 0x28 }, // 4C
    { L"P Hyper Megaman 2", 0x4c8c2, 0x4c8e2, indexCPS2Sprites_Megaman, 0x28 },
    { L"P Hyper Megaman 3", 0x4c8e2, 0x4c902, indexCPS2Sprites_Megaman, 0x28 },
    { L"P Hyper Megaman 4", 0x4c902, 0x4c922, indexCPS2Sprites_Megaman, 0x28 },
    { L"P Hyper Megaman 5", 0x4c922, 0x4c942, indexCPS2Sprites_Megaman, 0x28 },
    { L"P Hyper Megaman 6", 0x4c942, 0x4c962, indexCPS2Sprites_Megaman, 0x28 },
    { L"P Hyper Megaman 7", 0x4c962, 0x4c982, indexCPS2Sprites_Megaman, 0x28 },
    { L"P Hyper Megaman 8", 0x4c982, 0x4c9a2, indexCPS2Sprites_Megaman, 0x28 },
    { L"P Hyper Megaman 9", 0x4c9a2, 0x4c9c2, indexCPS2Sprites_Megaman, 0x28 },

    { L"P Hyper Megaman Missiles", 0x4c9c2, 0x4c9e2, indexCPS2Sprites_Megaman, 0x29 }, // 55

    { L"P Roll Win Pose", 0x4cae2, 0x4cb02, indexCPS2Sprites_Roll }, // 5E
    { L"P Magnetic Megaman", 0x4cb02, 0x4cb22, indexCPS2Sprites_Megaman }, // 5F
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_K[] =
{
    { L"K Palette", 0x48fe2, 0x49002, indexCPS2Sprites_Megaman, 0x00, nullptr, &secondaryMVCMegamanPalettes },
    { L"K Rush/Eddie", 0x49002, 0x49022, indexCPS2Sprites_Megaman, 0x01, &pairNext },
    { L"K Beat", 0x49022, 0x49042, indexCPS2Sprites_Megaman, 0x2, &pairPrevious },

    { L"K Hair", 0x4cb22, 0x4cb42, indexCPS2Sprites_Megaman, 0x26 },
    { L"K Teleport Intro / Death Animation", 0x4cb42, 0x4cb62, indexCPS2Sprites_Megaman, 0x0B },

    { L"K Intro 1", 0x4cb62, 0x4cb82, indexCPS2Sprites_Megaman },
    { L"K Intro 2", 0x4cb82, 0x4cba2, indexCPS2Sprites_Megaman },
    { L"K Intro 3", 0x4cba2, 0x4cbc2, indexCPS2Sprites_Megaman },
    { L"K Intro 4", 0x4cbc2, 0x4cbe2, indexCPS2Sprites_Megaman },
    { L"K Intro 5", 0x4cbe2, 0x4cc02, indexCPS2Sprites_Megaman },
    { L"K Intro 6", 0x4cc02, 0x4cc22, indexCPS2Sprites_Megaman },
    { L"K Intro 7", 0x4cc22, 0x4cc42, indexCPS2Sprites_Megaman },
    { L"K Intro 8", 0x4cc42, 0x4cc62, indexCPS2Sprites_Megaman },
    { L"K Intro 9", 0x4cc62, 0x4cc82, indexCPS2Sprites_Megaman },

    { L"K Rush 1", 0x4cc82, 0x4cca2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 2", 0x4cca2, 0x4ccc2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 3", 0x4ccc2, 0x4cce2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 4", 0x4cce2, 0x4cd02, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 5", 0x4cd02, 0x4cd22, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 6", 0x4cd22, 0x4cd42, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 7", 0x4cd42, 0x4cd62, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 8", 0x4cd62, 0x4cd82, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush 9", 0x4cd82, 0x4cda2, indexCPS2Sprites_Megaman, 1, &pairNext9 },

    { L"K Beat 1", 0x4cda2, 0x4cdc2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 2", 0x4cdc2, 0x4cde2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 3", 0x4cde2, 0x4ce02, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 4", 0x4ce02, 0x4ce22, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 5", 0x4ce22, 0x4ce42, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 6", 0x4ce42, 0x4ce62, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 7", 0x4ce62, 0x4ce82, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 8", 0x4ce82, 0x4cea2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 9", 0x4cea2, 0x4cec2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },

    { L"K Beat Plane 1", 0x4cec2, 0x4cee2, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 2", 0x4cee2, 0x4cf02, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 3", 0x4cf02, 0x4cf22, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 4", 0x4cf22, 0x4cf42, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 5", 0x4cf42, 0x4cf62, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 6", 0x4cf62, 0x4cf82, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 7", 0x4cf82, 0x4cfa2, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 8", 0x4cfa2, 0x4cfc2, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 9", 0x4cfc2, 0x4cfe2, indexCPS2Sprites_Megaman, 0x24 },

    { L"K Charged HP 1", 0x4cfe2, 0x4d002, indexCPS2Sprites_Megaman },
    { L"K Charged HP 2", 0x4d002, 0x4d022, indexCPS2Sprites_Megaman },
    { L"K Charged HP 3", 0x4d022, 0x4d042, indexCPS2Sprites_Megaman },
    { L"K Charged HP 4", 0x4d042, 0x4d062, indexCPS2Sprites_Megaman },
    { L"K Charged HP 5", 0x4d062, 0x4d082, indexCPS2Sprites_Megaman },
    { L"K Charged HP 6", 0x4d082, 0x4d0a2, indexCPS2Sprites_Megaman },
    { L"K Charged HP 7", 0x4d0a2, 0x4d0c2, indexCPS2Sprites_Megaman },
    { L"K Charged HP 8", 0x4d0c2, 0x4d0e2, indexCPS2Sprites_Megaman },
    { L"K Charged HP 9", 0x4d0e2, 0x4d102, indexCPS2Sprites_Megaman },

    { L"K Rush Drill 1", 0x4d102, 0x4d122, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 2", 0x4d122, 0x4d142, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 3", 0x4d142, 0x4d162, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 4", 0x4d162, 0x4d182, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 5", 0x4d182, 0x4d1a2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 6", 0x4d1a2, 0x4d1c2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 7", 0x4d1c2, 0x4d1e2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 8", 0x4d1e2, 0x4d202, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 9", 0x4d202, 0x4d222, indexCPS2Sprites_Roll, 0x0B }, // 97

    // Presented out of order because they are associated
    { L"K Rush Drill Metal 1", 0x4d4c2 + 0x0, 0x4d4c2 + 0x20, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 2", 0x4d4c2 + 0x20, 0x4d4c2 + 0x40, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 3", 0x4d4c2 + 0x40, 0x4d4c2 + 0x060, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 4", 0x4d4c2 + 0x060, 0x4d4c2 + 0x080, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 5", 0x4d4c2 + 0x080, 0x4d4c2 + 0x0A0, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 6", 0x4d4c2 + 0x0A0, 0x4d4c2 + 0x0C0, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 7", 0x4d4c2 + 0x0C0, 0x4d4c2 + 0x0E0, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 8", 0x4d4c2 + 0x0E0, 0x4d4c2 + 0x100, indexCPS2Sprites_Roll, 0x0C },


    { L"K Teleport Intro", 0x4d222, 0x4d242, indexCPS2Sprites_Megaman, 0x0D },
    { L"K Dr Light", 0x4d242, 0x4d262, indexCPS2Sprites_Megaman, 0x25 },

    { L"K Hyper Megaman Armor 1", 0x4d262, 0x4d282, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 2", 0x4d282, 0x4d2a2, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 3", 0x4d2a2, 0x4d2c2, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 4", 0x4d2c2, 0x4d2e2, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 5", 0x4d2e2, 0x4d302, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 6", 0x4d302, 0x4d322, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 7", 0x4d322, 0x4d342, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 8", 0x4d342, 0x4d362, indexCPS2Sprites_Megaman, 0x27, &pairNext9 },
    { L"K Hyper Megaman Armor 9", 0x4d362, 0x4d382, indexCPS2Sprites_Megaman, 0x27, &pairNext9 }, // a2

    { L"K Hyper Megaman 1", 0x4d382, 0x4d3a2, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 2", 0x4d3a2, 0x4d3c2, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 3", 0x4d3c2, 0x4d3e2, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 4", 0x4d3e2, 0x4d402, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 5", 0x4d402, 0x4d422, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 6", 0x4d422, 0x4d442, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 7", 0x4d442, 0x4d462, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 8", 0x4d462, 0x4d482, indexCPS2Sprites_Megaman, 0x28 },
    { L"K Hyper Megaman 9", 0x4d482, 0x4d4a2, indexCPS2Sprites_Megaman, 0x28 }, // ab

    { L"K Hyper Megaman Missiles", 0x4d4a2, 0x4d4c2, indexCPS2Sprites_Megaman, 0x29 }, // ac

    { L"K Roll Win Pose", 0x4d5c2, 0x4d5e2, indexCPS2Sprites_Roll },
    { L"K Magnetic Megaman", 0x4d5e2, 0x4d602, indexCPS2Sprites_Megaman },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_EXTRAS[] =
{
    // { L"Megaman FX", 0x590E2, 0x59142 }, ?

    // This contains unpaired or unconfirmed palettes
    { L"P Megaman Extra", 0x4e0a2, 0x4e0c2, indexCPS2Sprites_Megaman },
    { L"P Magnetic Megaman", 0x4e0c2, 0x4e0e2, indexCPS2Sprites_Megaman },

    { L"P ? 1", 0x4de62, 0x4de82, indexCPS2Sprites_Megaman },
    { L"P ? 2", 0x4de82, 0x4dea2, indexCPS2Sprites_Megaman },
    { L"P ? 3", 0x4dea2, 0x4dec2, indexCPS2Sprites_Megaman },
    { L"P ? 4", 0x4dec2, 0x4dee2, indexCPS2Sprites_Megaman },
    { L"P ? 5", 0x4dee2, 0x4df02, indexCPS2Sprites_Megaman },
    { L"P ? 6", 0x4df02, 0x4df22, indexCPS2Sprites_Megaman },
    { L"P ? 7", 0x4df22, 0x4df42, indexCPS2Sprites_Megaman },
    { L"P ? 8", 0x4df42, 0x4df62, indexCPS2Sprites_Megaman },
    { L"P ? 9", 0x4df62, 0x4df82, indexCPS2Sprites_Megaman },

    { L"K ? 1", 0x4e942, 0x4e962, indexCPS2Sprites_Megaman },
    { L"K ? 2", 0x4e962, 0x4e982, indexCPS2Sprites_Megaman },
    { L"K ? 3", 0x4e982, 0x4e9a2, indexCPS2Sprites_Megaman },
    { L"K ? 4", 0x4e9a2, 0x4e9c2, indexCPS2Sprites_Megaman },
    { L"K ? 5", 0x4e9c2, 0x4e9e2, indexCPS2Sprites_Megaman },
    { L"K ? 6", 0x4e9e2, 0x4ea02, indexCPS2Sprites_Megaman },
    { L"K ? 7", 0x4ea02, 0x4ea22, indexCPS2Sprites_Megaman },
    { L"K ? 8", 0x4ea22, 0x4ea42, indexCPS2Sprites_Megaman },
    { L"K ? 9", 0x4ea42, 0x4ea62, indexCPS2Sprites_Megaman }, //54ish
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_P[] =
{
    { L"P Palette", 0x48702, 0x48722, indexCPS2Sprites_Roll, 0x00, nullptr, &secondaryMVCRollPalettes },
    { L"P Rush/Eddie", 0x48722, 0x48742, indexCPS2Sprites_Megaman, 0x01, &pairNext },
    { L"P Beat", 0x48742, 0x48762, indexCPS2Sprites_Megaman, 0x2, &pairPrevious },

    { L"P Megaman Hair", 0x4d602, 0x4d622, indexCPS2Sprites_Megaman, 0x26 },
    { L"P Intro / Death Animation", 0x4d622, 0x4d642, indexCPS2Sprites_Megaman, 0x0B },

    { L"P Intro 1", 0x4d642, 0x4d662, indexCPS2Sprites_Roll },
    { L"P Intro 2", 0x4d662, 0x4d682, indexCPS2Sprites_Roll },
    { L"P Intro 3", 0x4d682, 0x4d6a2, indexCPS2Sprites_Roll },
    { L"P Intro 4", 0x4d6a2, 0x4d6c2, indexCPS2Sprites_Roll },
    { L"P Intro 5", 0x4d6c2, 0x4d6e2, indexCPS2Sprites_Roll },
    { L"P Intro 6", 0x4d6e2, 0x4d702, indexCPS2Sprites_Roll },
    { L"P Intro 7", 0x4d702, 0x4d722, indexCPS2Sprites_Roll },
    { L"P Intro 8", 0x4d722, 0x4d742, indexCPS2Sprites_Roll },
    { L"P Intro 9", 0x4d742, 0x4d762, indexCPS2Sprites_Roll },

    { L"P Rush/Eddie 1", 0x4d762, 0x4d782, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 2", 0x4d782, 0x4d7a2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 3", 0x4d7a2, 0x4d7c2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 4", 0x4d7c2, 0x4d7e2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 5", 0x4d7e2, 0x4d802, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 6", 0x4d802, 0x4d822, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 7", 0x4d822, 0x4d842, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 8", 0x4d842, 0x4d862, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"P Rush/Eddie 9", 0x4d862, 0x4d882, indexCPS2Sprites_Megaman, 1, &pairNext9 },

    { L"P Beat 1", 0x4d882, 0x4d8a2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 2", 0x4d8a2, 0x4d8c2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 3", 0x4d8c2, 0x4d8e2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 4", 0x4d8e2, 0x4d902, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 5", 0x4d902, 0x4d922, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 6", 0x4d922, 0x4d942, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 7", 0x4d942, 0x4d962, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 8", 0x4d962, 0x4d982, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"P Beat 9", 0x4d982, 0x4d9a2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },

    { L"P Beat Plane 1", 0x4d9a2, 0x4d9c2, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 2", 0x4d9c2, 0x4d9e2, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 3", 0x4d9e2, 0x4da02, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 4", 0x4da02, 0x4da22, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 5", 0x4da22, 0x4da42, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 6", 0x4da42, 0x4da62, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 7", 0x4da62, 0x4da82, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 8", 0x4da82, 0x4daa2, indexCPS2Sprites_Megaman, 0x24 },
    { L"P Beat Plane 9", 0x4daa2, 0x4dac2, indexCPS2Sprites_Megaman, 0x24 },

    { L"P Rush Drill 1", 0x4dbe2, 0x4dc02, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 2", 0x4dc02, 0x4dc22, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 3", 0x4dc22, 0x4dc42, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 4", 0x4dc42, 0x4dc62, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 5", 0x4dc62, 0x4dc82, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 6", 0x4dc82, 0x4dca2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 7", 0x4dca2, 0x4dcc2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 8", 0x4dcc2, 0x4dce2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"P Rush Drill 9", 0x4dce2, 0x4dd02, indexCPS2Sprites_Roll, 0x0B },

    { L"P Rush Drill Metal 1", 0x4dfa2, 0x4dfc2, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 2", 0x4dfc2, 0x4dfe2, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 3", 0x4dfe2, 0x4e002, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 4", 0x4e002, 0x4e022, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 5", 0x4e022, 0x4e042, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 6", 0x4e042, 0x4e062, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 7", 0x4e062, 0x4e082, indexCPS2Sprites_Roll, 0x0C },
    { L"P Rush Drill Metal 8", 0x4e082, 0x4e0a2, indexCPS2Sprites_Roll, 0x0C },

    { L"P Teleport Intro", 0x4dd02, 0x4dd22, indexCPS2Sprites_Megaman, 0x0D },
    { L"P Dr Light", 0x4dd22, 0x4dd42, indexCPS2Sprites_Megaman, 0x25 },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_K[] =
{
    { L"K Palette", 0x48762, 0x48782, indexCPS2Sprites_Roll, 0x00, nullptr, &secondaryMVCRollPalettes },
    { L"K Rush/Eddie", 0x48782, 0x487a2, indexCPS2Sprites_Megaman, 0x01, &pairNext },
    { L"K Beat", 0x487a2, 0x487c2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious }, // 09 : these numbers align to the mvc2 extra ids as identified in the Palette Variant Full spreadsheet

    { L"K Megaman Hair", 0x4e0e2, 0x4e102, indexCPS2Sprites_Megaman, 0x26 },
    { L"K Intro / Death Animation", 0x4e102, 0x4e122, indexCPS2Sprites_Megaman, 0x0B },

    { L"K Intro 1", 0x4e122, 0x4e142, indexCPS2Sprites_Roll },
    { L"K Intro 2", 0x4e142, 0x4e162, indexCPS2Sprites_Roll },
    { L"K Intro 3", 0x4e162, 0x4e182, indexCPS2Sprites_Roll },
    { L"K Intro 4", 0x4e182, 0x4e1a2, indexCPS2Sprites_Roll },
    { L"K Intro 5", 0x4e1a2, 0x4e1c2, indexCPS2Sprites_Roll },
    { L"K Intro 6", 0x4e1c2, 0x4e1e2, indexCPS2Sprites_Roll },
    { L"K Intro 7", 0x4e1e2, 0x4e202, indexCPS2Sprites_Roll },
    { L"K Intro 8", 0x4e202, 0x4e222, indexCPS2Sprites_Roll },
    { L"K Intro 9", 0x4e222, 0x4e242, indexCPS2Sprites_Roll },

    { L"K Rush/Eddie 1", 0x4e242, 0x4e262, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 2", 0x4e262, 0x4e282, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 3", 0x4e282, 0x4e2a2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 4", 0x4e2a2, 0x4e2c2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 5", 0x4e2c2, 0x4e2e2, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 6", 0x4e2e2, 0x4e302, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 7", 0x4e302, 0x4e322, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 8", 0x4e322, 0x4e342, indexCPS2Sprites_Megaman, 1, &pairNext9 },
    { L"K Rush/Eddie 9", 0x4e342, 0x4e362, indexCPS2Sprites_Megaman, 1, &pairNext9 },

    { L"K Beat 1", 0x4e362, 0x4e382, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 2", 0x4e382, 0x4e3a2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 3", 0x4e3a2, 0x4e3c2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 4", 0x4e3c2, 0x4e3e2, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 5", 0x4e3e2, 0x4e402, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 6", 0x4e402, 0x4e422, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 7", 0x4e422, 0x4e442, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 8", 0x4e442, 0x4e462, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },
    { L"K Beat 9", 0x4e462, 0x4e482, indexCPS2Sprites_Megaman, 0x2, &pairPrevious9 },

    { L"K Beat Plane 1", 0x4e482, 0x4e4a2, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 2", 0x4e4a2, 0x4e4c2, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 3", 0x4e4c2, 0x4e4e2, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 4", 0x4e4e2, 0x4e502, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 5", 0x4e502, 0x4e522, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 6", 0x4e522, 0x4e542, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 7", 0x4e542, 0x4e562, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 8", 0x4e562, 0x4e582, indexCPS2Sprites_Megaman, 0x24 },
    { L"K Beat Plane 9", 0x4e582, 0x4e5a2, indexCPS2Sprites_Megaman, 0x24 },

    { L"K Rush Drill 1", 0x4e6c2, 0x4e6e2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 2", 0x4e6e2, 0x4e702, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 3", 0x4e702, 0x4e722, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 4", 0x4e722, 0x4e742, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 5", 0x4e742, 0x4e762, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 6", 0x4e762, 0x4e782, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 7", 0x4e782, 0x4e7a2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 8", 0x4e7a2, 0x4e7c2, indexCPS2Sprites_Roll, 0x0B, &pairNext9 },
    { L"K Rush Drill 9", 0x4e7c2, 0x4e7e2, indexCPS2Sprites_Roll, 0x0B },

    { L"K Rush Drill Metal 1", 0x4ea82, 0x4eaa2, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 2", 0x4eaa2, 0x4eac2, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 3", 0x4eac2, 0x4eae2, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 4", 0x4eae2, 0x4eb02, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 5", 0x4eb02, 0x4eb22, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 6", 0x4eb22, 0x4eb42, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 7", 0x4eb42, 0x4eb62, indexCPS2Sprites_Roll, 0x0C },
    { L"K Rush Drill Metal 8", 0x4eb62, 0x4eb82, indexCPS2Sprites_Roll, 0x0C },

    { L"K Teleport Intro", 0x4e7e2, 0x4e802, indexCPS2Sprites_Megaman, 0x0D },
    { L"K Dr Light", 0x4e802, 0x4e822, indexCPS2Sprites_Megaman, 0x25 },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_EXTRAS[] =
{
    { L"P Charging Roll 1", 0x4dac2, 0x4dae2, indexCPS2Sprites_Roll },
    { L"P Charging Roll 2", 0x4dae2, 0x4db02, indexCPS2Sprites_Roll },
    { L"P Charging Roll 3", 0x4db02, 0x4db22, indexCPS2Sprites_Roll },
    { L"P Charging Roll 4", 0x4db22, 0x4db42, indexCPS2Sprites_Roll },
    { L"P Charging Roll 5", 0x4db42, 0x4db62, indexCPS2Sprites_Roll },
    { L"P Charging Roll 6", 0x4db62, 0x4db82, indexCPS2Sprites_Roll },
    { L"P Charging Roll 7", 0x4db82, 0x4dba2, indexCPS2Sprites_Roll },
    { L"P Charging Roll 8", 0x4dba2, 0x4dbc2, indexCPS2Sprites_Roll },
    { L"P Charging Roll 9", 0x4dbc2, 0x4dbe2, indexCPS2Sprites_Roll },

    { L"P Hyper Roll Armor 1", 0x4dd42, 0x4dd62 },
    { L"P Hyper Roll Armor 2", 0x4dd62, 0x4dd82 },
    { L"P Hyper Roll Armor 3", 0x4dd82, 0x4dda2 },
    { L"P Hyper Roll Armor 4", 0x4dda2, 0x4ddc2 },
    { L"P Hyper Roll Armor 5", 0x4ddc2, 0x4dde2 },
    { L"P Hyper Roll Armor 6", 0x4dde2, 0x4de02 },
    { L"P Hyper Roll Armor 7", 0x4de02, 0x4de22 },
    { L"P Hyper Roll Armor 8", 0x4de22, 0x4de42 },
    { L"P Hyper Roll Armor 9", 0x4de42, 0x4de62 },

    // 0x4DE64-0x4DF64 are Megaman

    { L"P Hyper Roll Missiles", 0x4df82, 0x4dfa2 },

    { L"K Charging Roll 1", 0x4e5a2, 0x4e5c2, indexCPS2Sprites_Roll },
    { L"K Charging Roll 2", 0x4e5c2, 0x4e5e2, indexCPS2Sprites_Roll },
    { L"K Charging Roll 3", 0x4e5e2, 0x4e602, indexCPS2Sprites_Roll },
    { L"K Charging Roll 4", 0x4e602, 0x4e622, indexCPS2Sprites_Roll },
    { L"K Charging Roll 5", 0x4e622, 0x4e642, indexCPS2Sprites_Roll },
    { L"K Charging Roll 6", 0x4e642, 0x4e662, indexCPS2Sprites_Roll },
    { L"K Charging Roll 7", 0x4e662, 0x4e682, indexCPS2Sprites_Roll },
    { L"K Charging Roll 8", 0x4e682, 0x4e6a2, indexCPS2Sprites_Roll },
    { L"K Charging Roll 9", 0x4e6a2, 0x4e6c2, indexCPS2Sprites_Roll },

    { L"K Hyper Roll Armor 1", 0x4e822, 0x4e842 },
    { L"K Hyper Roll Armor 2", 0x4e842, 0x4e862 },
    { L"K Hyper Roll Armor 3", 0x4e862, 0x4e882 },
    { L"K Hyper Roll Armor 4", 0x4e882, 0x4e8a2 },
    { L"K Hyper Roll Armor 5", 0x4e8a2, 0x4e8c2 },
    { L"K Hyper Roll Armor 6", 0x4e8c2, 0x4e8e2 },
    { L"K Hyper Roll Armor 7", 0x4e8e2, 0x4e902 },
    { L"K Hyper Roll Armor 8", 0x4e902, 0x4e922 },
    { L"K Hyper Roll Armor 9", 0x4e922, 0x4e942 },

    { L"K Hyper Roll Missiles", 0x4ea62, 0x4ea82 },

    { L"K Megaman", 0x4eb82, 0x4eba2, indexCPS2Sprites_Megaman },
    { L"K Magnetic Shockwave Megaman", 0x4eba2, 0x4ebc2, indexCPS2Sprites_Megaman },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_CHARLES[] =
{
    { L"Charles (Intro)", 0x49082, 0x490a2, indexCPS2Sprites_Onslaught, 0x1 },
    { L"Charles (Defeated)", 0x4C002, 0x4C022, indexCPS2Sprites_Onslaught, 0x07 },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_PHASE1[] =
{
    { L"Main Body", 0x49042, 0x49062, indexCPS2Sprites_Onslaught },

    { L"Main Body Glimmer 1", 0x4BBC2, 0x4BBE2, indexCPS2Sprites_Onslaught },
    { L"Main Body Glimmer 2", 0x4BBE2, 0x4BC02, indexCPS2Sprites_Onslaught },
    { L"Main Body Glimmer 3", 0x4BC02, 0x4BC22, indexCPS2Sprites_Onslaught },

    { L"Teleport 1", 0x4BC62, 0x4BC82, indexCPS2Sprites_Onslaught },
    { L"Teleport 2", 0x4BC82, 0x4BCA2, indexCPS2Sprites_Onslaught },

    { L"Body Ram (Body)", 0x4BD22, 0x4BD42, indexCPS2Sprites_Onslaught, 0x08, &pairNext },
    { L"Body Ram (Effect)", 0x4BD42, 0x4BD62, indexCPS2Sprites_Onslaught, 0x09 },

    { L"Bystander 1", 0x4BD62, 0x4BD82, indexCPS2Sprites_Onslaught, 0x0B },
    { L"Bystander 2", 0x4BD82, 0x4BDA2, indexCPS2Sprites_Onslaught, 0x0B },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_PHASE2[] =
{
    { L"Main Body", 0x38DF8, 0x38E18, indexCPS2Sprites_Onslaught, 0x3 },
    { L"Main Body & Arm", 0x4BBA2, 0x4BBC2, indexCPS2Sprites_Onslaught, 0x4 },
    { L"Head / Neck", 0x4BFA2, 0x4BFC2, indexCPS2Sprites_Onslaught, 0x0F },
    { L"Hurt Flash 1", 0x4BE22, 0x4BE42, indexCPS2Sprites_Onslaught, 0x0C },
    { L"Hurt Flash 2", 0x4BE42, 0x4BE62, indexCPS2Sprites_Onslaught, 0x0C },
    { L"Hurt Flash 3", 0x4BE62, 0x4BE82, indexCPS2Sprites_Onslaught, 0x0C },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_EXTRAS[] =
{
    { L"Magnetic Shockwave", 0x4BC42, 0x4BC62, indexCPS2Sprites_Onslaught, 0x06 },
    { L"Magnetic Tempest", 0x4BCC2, 0x4BCE2, indexCPS2Sprites_Onslaught, 0x0A },
    { L"Hyper Grav", 0x4BCA2, 0x4BCC2, indexCPS2Sprites_Onslaught, 0x5 },
    { L"Sparkles", 0x49062, 0x49082, indexCPS2Sprites_Onslaught, 0x2 },
    { L"Mind Blast (StartUp)", 0x4BDC2, 0x4BDE2, indexCPS2Sprites_Onslaught, 0x0D },
    { L"Mind Blast (Beam 1, 1st Form)", 0x4BDE2, 0x4BE02, indexCPS2Sprites_Onslaught, 0x0E },
    { L"Mind Blast (Beam 2, 1st Form)",  0x4BE02, 0x4BE22, indexCPS2Sprites_Onslaught, 0x0E },
    { L"KO Orbs 1", 0x4BFC2, 0x4BFE2, indexCPS2Sprites_Onslaught, 0x20 },
    { L"KO Orbs 2", 0x4BFE2, 0x4C002, indexCPS2Sprites_Onslaught, 0x20 },
    { L"Sentinel", 0x4BD02, 0x4BD22, indexCPS2Sprites_Sentinel, 0xc },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_P[] =
{
    { L"P Palette", 0x481c2, 0x481e2, indexCPS2Sprites_WarMachine },
    { L"P Proton Cannon / War Destroyer", 0x481e2, 0x48202, indexCPS2Sprites_WarMachine, 1 },
    { L"P Beams/Blasts/Effect", 0x48202, 0x48222, indexCPS2Sprites_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_K[] =
{
    { L"K Palette", 0x48222, 0x48242, indexCPS2Sprites_WarMachine },
    { L"K Proton Cannon / War Destroyer", 0x48242, 0x48262, indexCPS2Sprites_WarMachine, 1 },
    { L"K Beams / Blasts / Effect", 0x48262, 0x48282, indexCPS2Sprites_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_P[] =
{
    { L"P Palette", 0x49222, 0x49242, indexCPS2Sprites_WarMachine },
    { L"P Proton Cannon / War Destroyer", 0x49242, 0x49262, indexCPS2Sprites_WarMachine, 1 },
    { L"P Beams / Blasts / Effect", 0x49262, 0x49282, indexCPS2Sprites_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_K[] =
{
    { L"K Palette", 0x49282, 0x492a2, indexCPS2Sprites_WarMachine },
    { L"K Proton Cannon / War Destroyer", 0x492a2, 0x492c2, indexCPS2Sprites_WarMachine, 1 },
    { L"K Beams / Blasts / Effect", 0x492c2, 0x492e2, indexCPS2Sprites_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_EXTRAS[] =
{
    { L"Armor P+K Shared", 0x501e2, 0x50202, indexCPS2Sprites_WarMachine },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_P[] =
{
    { L"P Palette", 0x48282, 0x482a2, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P Shield", 0x482a2, 0x482c2, indexCPS2Sprites_CapAm, 1 },
    { L"P Charging Star", 0x482c2, 0x482e2, indexCPS2Sprites_CapAm, 2 },
    { L"P Eagle", 0x591E2, 0x59202, indexCPS2Sprites_CapAm, 3 },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_K[] =
{
    { L"K Palette", 0x482e2, 0x48302, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"K Shield", 0x48302, 0x48322, indexCPS2Sprites_CapAm, 1 },
    { L"K Charging Star", 0x48322, 0x48342, indexCPS2Sprites_CapAm, 2 },
    { L"K Eagle", 0x59202, 0x59222, indexCPS2Sprites_CapAm, 3 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_P[] =
{
    { L"P Palette", 0x48342, 0x48362, indexCPS2Sprites_Hulk },
    { L"P Charge", 0x48362, 0x48382, indexCPS2Sprites_Hulk, 1 },
    { L"P Gamma Quake", 0x48382, 0x483a2, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_K[] =
{
    { L"K Palette", 0x483a2, 0x483c2, indexCPS2Sprites_Hulk },
    { L"K Charge", 0x483c2, 0x483e2, indexCPS2Sprites_Hulk, 1 },
    { L"K Gamma Quake", 0x483e2, 0x48402, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_EXTRAS[] =
{
    { L"Hulk Armor P+K Shared", 0x4F3A2, 0x4F3C2, indexCPS2Sprites_Hulk },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_P[] =
{
    { L"P Palette", 0x49162, 0x49182, indexCPS2Sprites_Hulk },
    { L"P Charge", 0x49182, 0x491a2, indexCPS2Sprites_Hulk, 1 },
    { L"P Gamma Quake", 0x491a2, 0x491c2, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_K[] =
{
    { L"K Palette", 0x491c2, 0x491e2, indexCPS2Sprites_Hulk },
    { L"K Charge", 0x491e2, 0x49202, indexCPS2Sprites_Hulk, 1 },
    { L"K Gamma Quake", 0x49202, 0x49222, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_P[] =
{
    { L"P Palette", 0x48402, 0x48422, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMVCWolverineEffects },
    { L"P Claws", 0x48422, 0x48442, indexCPS2Sprites_Wolverine, 1 },
    { L"P Berserker FX", 0x48442, 0x48462, indexCPS2Sprites_Wolverine, 2 },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_K[] =
{
    { L"K Palette", 0x48462, 0x48482, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMVCWolverineEffects },
    { L"K Claws", 0x48482, 0x484a2, indexCPS2Sprites_Wolverine, 1 },
    { L"K Berserker FX", 0x484a2, 0x484c2, indexCPS2Sprites_Wolverine, 2 },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_P[] =
{
    { L"P Palette", 0x48582, 0x485a2, indexCPS2Sprites_Venom, 0, &pairNext  },
    { L"P Taunt/Hurt", 0x485a2, 0x485c2, indexCPS2Sprites_Venom, 1 },
    { L"P Web", 0x485c2, 0x485e2, indexCPS2Sprites_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_K[] =
{
    { L"K Palette", 0x485e2, 0x48602, indexCPS2Sprites_Venom, 0, &pairNext  },
    { L"K Taunt/Hurt", 0x48602, 0x48622, indexCPS2Sprites_Venom, 1 },
    { L"K Web", 0x48622, 0x48642, indexCPS2Sprites_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_P[] =
{
    { L"P Palette", 0x490a2, 0x490c2, indexCPS2Sprites_Venom, 0, &pairNext  },
    { L"P Taunt/Hurt", 0x490c2, 0x490e2, indexCPS2Sprites_Venom, 1 },
    { L"P Web", 0x490e2, 0x49102, indexCPS2Sprites_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_K[] =
{
    { L"K Palette", 0x49102, 0x49122, indexCPS2Sprites_Venom, 0, &pairNext  },
    { L"K Taunt", 0x49122, 0x49142, indexCPS2Sprites_Venom, 1 },
    { L"K Web", 0x49142, 0x49162, indexCPS2Sprites_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_P[] =
{
    { L"P Palette", 0x48642, 0x48662, indexCPS2Sprites_Spidey, 0, nullptr, &secondaryMVCSpideyEffects },
    { L"P Web", 0x48682, 0x486a2, indexCPS2Sprites_Spidey, 2 },

    { L"P Intro 1", 0x4B822, 0x4B842, indexCPS2Sprites_Spidey, 11 },
    { L"P Intro 2", 0x4B842, 0x4B862, indexCPS2Sprites_Spidey, 11 },
    { L"P Intro 3", 0x4B862, 0x4B882, indexCPS2Sprites_Spidey, 11 },
    { L"P Intro 4", 0x4B882, 0x4B8A2, indexCPS2Sprites_Spidey, 11 },
    { L"P Intro 5", 0x4B8A2, 0x4B8C2, indexCPS2Sprites_Spidey, 11 },
    { L"P Intro 6", 0x4B8C2, 0x4B8E2, indexCPS2Sprites_Spidey, 11 },
    { L"P Intro 7", 0x4B8E2, 0x4B902, indexCPS2Sprites_Spidey, 11 },
    { L"P Intro 8", 0x4B902, 0x4B922, indexCPS2Sprites_Spidey, 11 },
    { L"P Spiderlight (1/3)", 0x48662, 0x48682, indexCPS2Sprites_Spidey, 0x0C },
    { L"P Spiderlight (2/3)", 0x4B922, 0x4B942, indexCPS2Sprites_Spidey, 12 },
    { L"P Spiderlight (3/3)/Taunt (C'mon Pal!)", 0x4B942, 0x4B962, indexCPS2Sprites_Spidey, 13 },
    { L"P Taunt (Hey!)", 0x4B962, 0x4B982, indexCPS2Sprites_Spidey, 0x0e },
    { L"P Taunt (Do Your Job!)", 0x4B982, 0x4b9a2, indexCPS2Sprites_Spidey, 0x0f },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_K[] =
{
    { L"Kick Palette", 0x486a2, 0x486c2, indexCPS2Sprites_Spidey, 0, nullptr, &secondaryMVCSpideyEffects },
    { L"K Web", 0x486e2, 0x48702, indexCPS2Sprites_Spidey, 2 },
    { L"K Intro 1", 0x4BA22, 0x4BA42, indexCPS2Sprites_Spidey, 11 },
    { L"K Intro 2", 0x4BA42, 0x4BA62, indexCPS2Sprites_Spidey, 11 },
    { L"K Intro 3", 0x4BA62, 0x4BA82, indexCPS2Sprites_Spidey, 11 },
    { L"K Intro 4", 0x4BA82, 0x4BAA2, indexCPS2Sprites_Spidey, 11 },
    { L"K Intro 5", 0x4BAA2, 0x4BAC2, indexCPS2Sprites_Spidey, 11 },
    { L"K Intro 6", 0x4BAC2, 0x4BAE2, indexCPS2Sprites_Spidey, 11 },
    { L"K Intro 7", 0x4BAE2, 0x4BB02, indexCPS2Sprites_Spidey, 11 },
    { L"K Intro 8", 0x4BB02, 0x4BB22, indexCPS2Sprites_Spidey, 11 },
    { L"K Spiderlight (1/3)", 0x486c2, 0x486e2, indexCPS2Sprites_Spidey, 0x0C },
    { L"K Spiderlight (2/3)", 0x4BB22, 0x4BB42, indexCPS2Sprites_Spidey, 12 },
    { L"K Spiderlight (3/3)/Taunt (C'mon Pal!)", 0x4BB42, 0x4BB62, indexCPS2Sprites_Spidey, 13 },
    { L"K Taunt (Hey!)", 0x4bb62, 0x4bb82, indexCPS2Sprites_Spidey, 0x0e },
    { L"K Taunt (Do Your Job!)", 0x4bb82, 0x4bba2, indexCPS2Sprites_Spidey, 0x0f },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_P[] =
{
    { L"P Palette",  0x48882, 0x488a2, indexCPS2Sprites_CapCom, 0x00, nullptr, &secondaryMVCCaptainCommandoPalettes },
    { L"P Ninjas", 0x488a2, 0x488c2, indexCPS2Sprites_CapCom, 1, &pairNext },
    { L"P Hoover", 0x488c2, 0x488e2, indexCPS2Sprites_CapCom, 2 },
    { L"P Suit Intro", 0x4F302, 0x4F322, indexCPS2Sprites_CapCom, 0x0F },
    { L"P Taunt", 0x4F342, 0x4F362, indexCPS2Sprites_CapCom, 14 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_K[] =
{
    { L"K Palette",  0x488e2, 0x48902, indexCPS2Sprites_CapCom, 0x00, nullptr, &secondaryMVCCaptainCommandoPalettes },
    { L"K Ninjas", 0x48902, 0x48922, indexCPS2Sprites_CapCom, 1, &pairNext },
    { L"K Hoover", 0x48922, 0x48942, indexCPS2Sprites_CapCom, 2 },
    { L"K Suit Intro", 0x4F322, 0x4F342, indexCPS2Sprites_CapCom, 0x0F },
    { L"K Taunt", 0x4F362, 0x4F382, indexCPS2Sprites_CapCom, 14 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_EXTRAS[] =
{
    { L"Elect Grab", 0x4F2E2, 0x4F302, indexCPS2Sprites_CapCom, 12 },

    { L"Silhouette", 0x4F382, 0x4F3A2, indexCPS2Sprites_CapCom, 13 },
    { L"Paint Rays 1", 0x4F262, 0x4F282, indexCPS2Sprites_CapCom, 11 },
    { L"Paint Rays 2", 0x4F282, 0x4F2A2, indexCPS2Sprites_CapCom, 11 },
    { L"Paint Rays 3", 0x4F2A2, 0x4F2C2, indexCPS2Sprites_CapCom, 11 },
    { L"Paint Rays 4", 0x4F2C2, 0x4F2E2, indexCPS2Sprites_CapCom, 11 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_P[] =
{
    { L"P Palette", 0x48ec2, 0x48ee2, indexCPS2Sprites_Morrigan, 0x00, nullptr, &secondaryMVCMorriganPalettes },
    { L"P Lilith", 0x48ee2, 0x48f02, indexCPS2Sprites_Morrigan, 1, nullptr, &secondaryMVCMorriganLilithPalettes },
    { L"P Extra 2", 0x48f02, 0x48f22, indexCPS2Sprites_Morrigan, 2 },

    { L"P Soul Eraser 1", 0x4edE2, 0x4ee02, indexCPS2Sprites_Morrigan, 11 },
    { L"P Soul Eraser 2", 0x4ee02, 0x4ee22, indexCPS2Sprites_Morrigan, 11 },

    { L"Morrigan Intro Frame 1", 0x4ef42, 0x4eF62, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan Intro Frame 2", 0x4ef62, 0x4eF82, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan Intro Frame 3", 0x4ef82, 0x4eFA2, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan Intro Frame 4", 0x4efA2, 0x4eFC2, indexCPS2Sprites_Morrigan, 13 },

    { L"Lilith Join Pose 1", 0x4eeA2, 0x4eeC2, indexCPS2Sprites_Morrigan, 12 },
    { L"Lilith Join Pose 2", 0x4eeC2, 0x4eEE2, indexCPS2Sprites_Morrigan, 12 },
    { L"Morrigan Join Pose 1", 0x4eee2, 0x4ef02, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan Join Pose 2", 0x4ef02, 0x4ef22, indexCPS2Sprites_Morrigan, 13 },

    { L"P Taunt", 0x4efC2, 0x4eFE2, indexCPS2Sprites_Morrigan, 14 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_K[] =
{
    { L"K Palette", 0x48f22, 0x48f42, indexCPS2Sprites_Morrigan, 0x00, nullptr, &secondaryMVCMorriganPalettes },
    { L"K Lilith", 0x48f42, 0x48f62, indexCPS2Sprites_Morrigan, 1, nullptr, &secondaryMVCMorriganLilithPalettes },
    { L"K Extra 2", 0x48f62, 0x48f82, indexCPS2Sprites_Morrigan, 2 },

    { L"K Soul Eraser 1", 0x4ee42, 0x4ee62, indexCPS2Sprites_Morrigan, 11 },
    { L"K Soul Eraser 2", 0x4ee62, 0x4ee82, indexCPS2Sprites_Morrigan, 11 },

    { L"Morrigan Intro Frame 1", 0x4f0A2, 0x4f0C2, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan Intro Frame 2", 0x4f0C2, 0x4f0E2, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan Intro Frame 3", 0x4f0E2, 0x4f102, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan Intro Frame 4", 0x4f102, 0x4f122, indexCPS2Sprites_Morrigan, 13 },

    { L"Lilith K Join Pose 1", 0x4f002, 0x4f022, indexCPS2Sprites_Morrigan, 12 },
    { L"Lilith K Join Pose 2", 0x4f022, 0x4f042, indexCPS2Sprites_Morrigan, 12 },
    { L"Morrigan K Join Pose 1", 0x4f042, 0x4f062, indexCPS2Sprites_Morrigan, 13 },
    { L"Morrigan K Join Pose 2", 0x4f062, 0x4f082, indexCPS2Sprites_Morrigan, 13 },

    { L"K Taunt", 0x4EFE2, 0x4F002, indexCPS2Sprites_Morrigan, 14 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_EXTRAS[] =
{
    { L"Eternal Slumber Heart 1", 0x4f122, 0x4f142 },
    { L"Eternal Slumber Heart 2", 0x4f142, 0x4f162 },

    { L"Eternal Slumber XXX 1", 0x4f162, 0x4f182 },
    { L"Eternal Slumber XXX 2", 0x4f182, 0x4f1A2 },
    { L"Eternal Slumber XXX 3", 0x4f1A2, 0x4f1C2 },
    { L"Eternal Slumber XXX 4", 0x4f1C2, 0x4f1E2 },
    { L"Eternal Slumber XXX 5", 0x4f1E2, 0x4f202 },
    { L"Eternal Slumber XXX 6", 0x4f202, 0x4f222 },
    { L"Eternal Slumber XXX 7", 0x4f222, 0x4f242 },
    { L"Eternal Slumber XXX 8", 0x4f242, 0x4f262 },

    { L"Eternal Slumber Background", 0x424A6, 0x424E6 },

    // There isn't a direct K pair for this: ... ?
    { L"Morrigan (Unused)", 0x4ee82, 0x4eeA2, indexCPS2Sprites_Morrigan, 13 },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_P[] =
{
    { L"P Palette", 0x493a2, 0x493c2, indexCPS2Sprites_Morrigan, 0x00, nullptr, &secondaryMVCLilithPalettes },
    { L"P Morrigan 1", 0x493c2, 0x493e2, indexCPS2Sprites_Morrigan, 0x01, nullptr, &secondaryMVCLilithMorriganPalettes },
    { L"P Extra 2", 0x493e2, 0x49402, indexCPS2Sprites_Morrigan, 2 },

    { L"Lilith Intro Frame 1", 0x4fc02, 0x4fc22, indexCPS2Sprites_Morrigan, 13 },
    { L"Lilith Intro Frame 2", 0x4fc22, 0x4fc42, indexCPS2Sprites_Morrigan, 13 },
    { L"Lilith Intro Frame 3", 0x4fc42, 0x4fc62, indexCPS2Sprites_Morrigan, 13 },
    { L"Lilith Intro Frame 4", 0x4fc62, 0x4fc82, indexCPS2Sprites_Morrigan, 13 },

    { L"Morrigan P Join Pose 1", 0x4FB62, 0x4FB82, indexCPS2Sprites_Morrigan, 12 },
    { L"Morrigan P Join Pose 2", 0x4FB82, 0x4FBa2, indexCPS2Sprites_Morrigan, 12 },
    { L"P Lilith Join Pose 1", 0x4FBA2, 0x4FBC2, indexCPS2Sprites_Morrigan, 13 },
    { L"P Lilith Join Pose 2", 0x4FBC2, 0x4FBE2, indexCPS2Sprites_Morrigan, 13 },

    { L"P Lilith Taunt", 0x4fc82, 0x4fca2, indexCPS2Sprites_Morrigan, 14 },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_K[] =
{
    { L"K Palette", 0x49402, 0x49422, indexCPS2Sprites_Morrigan, 0x00, nullptr, &secondaryMVCLilithPalettes },
    { L"K Morrigan 1", 0x49422, 0x49442, indexCPS2Sprites_Morrigan, 0x01, nullptr, &secondaryMVCLilithMorriganPalettes },
    { L"K Extra 2", 0x49442, 0x49462, indexCPS2Sprites_Morrigan, 2 },

    { L"Lilith Intro Frame 1", 0x4fd62, 0x4fd82, indexCPS2Sprites_Morrigan, 13 },
    { L"Lilith Intro Frame 2", 0x4fd82, 0x4fda2, indexCPS2Sprites_Morrigan, 13 },
    { L"Lilith Intro Frame 3", 0x4fda2, 0x4fdc2, indexCPS2Sprites_Morrigan, 13 },
    { L"Lilith Intro Frame 4", 0x4fdc2, 0x4fde2, indexCPS2Sprites_Morrigan, 13 },

    { L"Morrigan K Join Pose 1", 0x4fcc2, 0x4fce2, indexCPS2Sprites_Morrigan, 12 },
    { L"Morrigan K Join Pose 2", 0x4fce2, 0x4fd02, indexCPS2Sprites_Morrigan, 12 },
    { L"K Lilith Join Pose 1", 0x4fd02, 0x4fd22, indexCPS2Sprites_Morrigan, 13 },
    { L"K Lilith Join Pose 2", 0x4fd22, 0x4fd42, indexCPS2Sprites_Morrigan, 13 },

    { L"K Lilith Taunt", 0x4FCA2, 0x4FCc2, indexCPS2Sprites_Morrigan, 14 },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_P[] =
{
    { L"P Palette", 0x48e02, 0x48e22, indexCPS2Sprites_Strider, 0x00, &pairFullyLinkedNode },
    { L"P FX", 0x48e22, 0x48e42, indexCPS2Sprites_Strider, 1 },
    { L"P Mech", 0x48e42, 0x48e62, indexCPS2Sprites_Strider, 2 },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_K[] =
{
    { L"K Palette", 0x48e62, 0x48e82, indexCPS2Sprites_Strider, 0x00, &pairFullyLinkedNode },
    { L"K FX", 0x48e82, 0x48ea2, indexCPS2Sprites_Strider, 1 },
    { L"K Mech", 0x48ea2, 0x48ec2, indexCPS2Sprites_Strider, 2 },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_P[] =
{
    { L"P Palette",   0x484c2, 0x484e2, indexCPS2Sprites_Gambit, 0x00, nullptr, &secondaryMVCGambitEffects },
    { L"P Kinetic Card / Trick Card", 0x484e2, 0x48502, indexCPS2Sprites_Gambit, 1 },
    { L"P Cajun Strike", 0x48502, 0x48522, indexCPS2Sprites_Gambit, 2 },

    { L"P Lighting 1", 0x4f942, 0x4f962, indexCPS2Sprites_Gambit },
    { L"P Lighting 2", 0x4f962, 0x4f982, indexCPS2Sprites_Gambit },
    { L"P Lighting 3", 0x4f982, 0x4f9A2, indexCPS2Sprites_Gambit },
    { L"P Lighting 4", 0x4f9A2, 0x4f9C2, indexCPS2Sprites_Gambit },
    { L"P Lighting 5", 0x4f9C2, 0x4f9E2, indexCPS2Sprites_Gambit },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_K[] =
{
    { L"K Palette",   0x48522, 0x48542, indexCPS2Sprites_Gambit, 0x00, nullptr, &secondaryMVCGambitEffects },
    { L"K Kinetic Card / Trick Card", 0x48542, 0x48562, indexCPS2Sprites_Gambit, 1 },
    { L"K Cajun Strike", 0x48562, 0x48582, indexCPS2Sprites_Gambit, 2 },

    { L"K Lighting 1", 0x4f9E2, 0x4fA02, indexCPS2Sprites_Gambit },
    { L"K Lighting 2", 0x4fA02, 0x4fA22, indexCPS2Sprites_Gambit },
    { L"K Lighting 3", 0x4fA22, 0x4fA42, indexCPS2Sprites_Gambit },
    { L"K Lighting 4", 0x4fA42, 0x4fA62, indexCPS2Sprites_Gambit },
    { L"K Lighting 5", 0x4fA62, 0x4fA82, indexCPS2Sprites_Gambit },
};

const sGame_PaletteDataset MVC_A_ASSIST_PALETTES[] =
{
    { L"Anita P", 0x50fa2, 0x50fc2, indexCPS2Sprites_Anita },
    { L"Anita P Floating Body", 0x50fc2, 0x50fe2, indexCPS2Sprites_Anita, 2 },
    { L"Anita P Weapons", 0x50fe2, 0x51002, indexCPS2Sprites_Anita, 1 },
    { L"Anita K", 0x51002, 0x51022, indexCPS2Sprites_Anita },
    { L"Anita K Floating Body", 0x51022, 0x51042, indexCPS2Sprites_Anita, 2 },
    { L"Anita K Weapons", 0x51042, 0x51062, indexCPS2Sprites_Anita, 1 },

    { L"Arthur P", 0x50802, 0x50822, indexCPS2Sprites_MVCAssets },
    { L"Arthur P Extra 1", 0x50822, 0x50842, indexCPS2Sprites_MVCAssets, 1 },
    // This appears to be unused: commenting out for now
    //{ L"Arthur P Extra 2", 0x50842, 0x50862 },
    { L"Arthur K", 0x50862, 0x50882, indexCPS2Sprites_MVCAssets },
    { L"Arthur K Extra 1", 0x50882, 0x508a2, indexCPS2Sprites_MVCAssets, 1 },
    //{ L"Arthur K Extra 2", 0x508a2, 0x508c2 },

    { L"Colossus P", 0x505c2, 0x505e2, indexCPS2Sprites_Colossus },
    { L"Colossus K", 0x50622, 0x50642, indexCPS2Sprites_Colossus },

    { L"Cyclops P", 0x50502, 0x50522, indexCPS2Sprites_Cyclops },
    { L"Cyclops K", 0x50562, 0x50582, indexCPS2Sprites_Cyclops },
    { L"Cyclops Optic Blast 1", 0x508c2, 0x508e2, indexCPS2Sprites_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 2", 0x508e2, 0x50902, indexCPS2Sprites_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 3", 0x50902, 0x50922, indexCPS2Sprites_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 4", 0x50922, 0x50942, indexCPS2Sprites_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 5", 0x50942, 0x50962, indexCPS2Sprites_Cyclops, 0x0E },

    { L"Devilot P: Platform", 0x51102, 0x51122, indexCPS2Sprites_MVCAssets, 2, &pairNext4Palettes },
    { L"Devilot P", 0x510c2, 0x510e2, indexCPS2Sprites_MVCAssets, 3, &pairNext3Palettes },
    { L"Devilot P: Dave and Xavier", 0x510e2, 0x51102, indexCPS2Sprites_MVCAssets, 4 },
    { L"Devilot P: Burnt", 0x51182, 0x511a2, indexCPS2Sprites_MVCAssets, 5, &pairNext },
    { L"Devilot P: Burnt Dave and Xavier", 0x511a2, 0x511c2, indexCPS2Sprites_MVCAssets, 6 },
    { L"Devilot K: Platform", 0x51162, 0x51182, indexCPS2Sprites_MVCAssets, 2, &pairNext4Palettes },
    { L"Devilot K", 0x51122, 0x51142, indexCPS2Sprites_MVCAssets, 3, &pairNext3Palettes },
    { L"Devilot K: Dave and Xavier", 0x51142, 0x51162, indexCPS2Sprites_MVCAssets, 4 },
    { L"Devilot K: Burnt", 0x511c2, 0x511e2, indexCPS2Sprites_MVCAssets, 5, &pairNext },
    { L"Devilot K: Burnt Dave and Xavier", 0x511e2, 0x51202, indexCPS2Sprites_MVCAssets, 6 },

    { L"Iceman P", 0x50d62, 0x50d82, indexCPS2Sprites_Iceman },
    { L"Iceman P Extra 1", 0x50d82, 0x50da2, indexCPS2Sprites_Iceman, 0x20 },
    { L"Iceman P Extra 2", 0x50da2, 0x50dc2, indexCPS2Sprites_Iceman, 0x20 },
    { L"Iceman K", 0x50dc2, 0x50de2, indexCPS2Sprites_Iceman },
    { L"Iceman K Extra 1", 0x50de2, 0x50e02, indexCPS2Sprites_Iceman, 0x20 },
    { L"Iceman K Extra 2", 0x50e02, 0x50e22, indexCPS2Sprites_Iceman, 0x20 },

    { L"Jubilee P", 0x51202, 0x51222, indexCPS2Sprites_MVCAssets, 0x07 },
    { L"Jubilee K", 0x51262, 0x51282, indexCPS2Sprites_MVCAssets, 0x07 },

    { L"Juggernaut P", 0x502c2, 0x502e2, indexCPS2Sprites_Juggy },
    { L"Juggernaut P Extra 1", 0x50302, 0x50322, indexCPS2Sprites_Juggy, 2 },
    { L"Juggernaut K", 0x50322, 0x50342, indexCPS2Sprites_Juggy },
    { L"Juggernaut K Extra 1", 0x50362, 0x50382, indexCPS2Sprites_Juggy, 2 },

    { L"Lou P", 0x50202, 0x50222, indexCPS2Sprites_MVCAssets, 0x09, &pairNext },
    { L"Lou P Extra", 0x50222, 0x50242, indexCPS2Sprites_MVCAssets, 0x0A },
    { L"Lou K", 0x50262, 0x50282, indexCPS2Sprites_MVCAssets, 0x09, &pairNext },
    { L"Lou K Extra", 0x50282, 0x502a2, indexCPS2Sprites_MVCAssets, 0x0A },

    { L"Magneto P", 0x50382, 0x503a2, indexCPS2Sprites_Magneto },
    { L"Magneto P Extra", 0x503a2, 0x503c2, indexCPS2Sprites_Magneto, 1 },
    { L"Magneto K", 0x503e2, 0x50402, indexCPS2Sprites_Magneto },
    { L"Magneto K Extra", 0x50402, 0x50422, indexCPS2Sprites_Magneto, 1 },

    { L"Michelle Heart P", 0x50a22, 0x50a42, indexCPS2Sprites_MVCAssets, 0x0E },
    { L"Michelle Heart P Extra", 0x50a42, 0x50a62, indexCPS2Sprites_MVCAssets, 0x0F },
    { L"Michelle Heart K", 0x50a82, 0x50aa2, indexCPS2Sprites_MVCAssets, 0x0E },
    { L"Michelle Heart K Extra", 0x50aa2, 0x50ac2, indexCPS2Sprites_MVCAssets, 0x0F },

    { L"Psylocke P", 0x50442, 0x50462, indexCPS2Sprites_Psylocke },
    { L"Psylocke P Extra", 0x50462, 0x50482, indexCPS2Sprites_Psylocke, 2 },
    { L"Psylocke K", 0x504a2, 0x504c2, indexCPS2Sprites_Psylocke },
    { L"Psylocke K Extra", 0x504c2, 0x504e2, indexCPS2Sprites_Psylocke, 2 },

    { L"Pure & Fur P Pure", 0x50e22, 0x50e42, indexCPS2Sprites_MVCAssets, 0x0B },
    { L"Pure & Fur P Fur", 0x50e42, 0x50e62, indexCPS2Sprites_MVCAssets, 0x0C },
    { L"Pure & Fur P Dice", 0x50e62, 0x50e82, indexCPS2Sprites_MVCAssets, 0x0D },
    { L"Pure & Fur K Pure", 0x50e82, 0x50ea2, indexCPS2Sprites_MVCAssets, 0x0B },
    { L"Pure & Fur K Fur", 0x50ea2, 0x50ec2, indexCPS2Sprites_MVCAssets, 0x0C },
    { L"Pure & Fur K Dice", 0x50ec2, 0x50ee2, indexCPS2Sprites_MVCAssets, 0x0D },

    { L"Rogue P", 0x50ca2, 0x50cc2, indexCPS2Sprites_Rogue },
    { L"Rogue K", 0x50d02, 0x50d22, indexCPS2Sprites_Rogue },

    { L"Saki P", 0x50962, 0x509a2, indexCPS2Sprites_MVCAssets, 0x10 },
    { L"Saki K", 0x509c2, 0x50a02, indexCPS2Sprites_MVCAssets, 0x10 },

    { L"Sentinel P", 0x51342, 0x51362, indexCPS2Sprites_Sentinel, 0xc },
    { L"Sentinel K", 0x513a2, 0x513c2, indexCPS2Sprites_Sentinel, 0xc },

    { L"Shadow Nash P", 0x51282, 0x512a2, indexCPS2Sprites_Charlie },
    { L"Shadow Nash P Extra", 0x512c2, 0x512e2, indexCPS2Sprites_Charlie, 2 },
    { L"Shadow Nash K", 0x512e2, 0x51302, indexCPS2Sprites_Charlie },
    { L"Shadow Nash K Extra", 0x51322, 0x51342, indexCPS2Sprites_Charlie, 2 },

    { L"Storm P", 0x50ba2, 0x50bc2, indexCPS2Sprites_Storm },
    { L"Storm P Extra", 0x50c62, 0x50c82, indexCPS2Sprites_Storm, 12 },
    { L"Storm K", 0x50c02, 0x50c22, indexCPS2Sprites_Storm },
    { L"Storm K Extra", 0x50c82, 0x50ca2, indexCPS2Sprites_Storm, 12 },

    { L"Ton-Pooh P", 0x50742, 0x50782, indexCPS2Sprites_MVCAssets, 0x13 },
    { L"Ton-Pooh P Attack", 0x50782, 0x507a2, indexCPS2Sprites_MVCAssets, 0x14 },
    { L"Ton-Pooh K", 0x507a2, 0x507e2, indexCPS2Sprites_MVCAssets, 0x13 },
    { L"Ton-Pooh K Attack", 0x507e2, 0x50802, indexCPS2Sprites_MVCAssets, 0x14 },

    { L"Thor P", 0x50ae2, 0x50b02, indexCPS2Sprites_MVCAssets, 0x15 },
    { L"Thor P Lightning", 0x50b02, 0x50b22, indexCPS2Sprites_MVCAssets, 0x16 },
    { L"Thor K", 0x50b42, 0x50b62, indexCPS2Sprites_MVCAssets, 0x15 },
    { L"Thor K Lightning", 0x50b62, 0x50b82, indexCPS2Sprites_MVCAssets, 0x16 },

    { L"Unknown Soldier P", 0x50682, 0x506a2, indexCPS2Sprites_MVCAssets, 0x12 },
    { L"Unknown Soldier P Extra", 0x506a2, 0x506c2, indexCPS2Sprites_MVCAssets, 0x11 },
    { L"Unknown Soldier K", 0x506e2, 0x50702, indexCPS2Sprites_MVCAssets, 0x12 },
    { L"Unknown Soldier K Extra", 0x50702, 0x50722, indexCPS2Sprites_MVCAssets, 0x11 },

    { L"US Agent P", 0x50ee2, 0x50f02, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"US Agent P Shield", 0x50f02, 0x50f22, indexCPS2Sprites_CapAm, 1 },
    { L"US Agent P Charging Star", 0x50f22, 0x50f42, indexCPS2Sprites_CapAm, 2 },
    { L"US Agent K", 0x50f42, 0x50f62, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"US Agent K Shield", 0x50f62, 0x50f82, indexCPS2Sprites_CapAm, 1 },
    { L"US Agent K Charging Star", 0x50f82, 0x50fa2, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x49c02, 0x49c22, indexCPS2Sprites_WarMachine },
    { L"Burning 2", 0x49c22, 0x49c42, indexCPS2Sprites_WarMachine },
    { L"Shocked 1", 0x49c42, 0x49c62, indexCPS2Sprites_WarMachine },
    { L"Shocked 2", 0x49c62, 0x49c82, indexCPS2Sprites_WarMachine },
    { L"Dark Burning 1", 0x49c82, 0x49ca2, indexCPS2Sprites_WarMachine },
    { L"Dark Burning 2", 0x49ca2, 0x49cc2, indexCPS2Sprites_WarMachine },
    { L"Kinectic Charged 1", 0x49cc2, 0x49ce2, indexCPS2Sprites_WarMachine },
    { L"Kinectic Charged 2", 0x49ce2, 0x49d02, indexCPS2Sprites_WarMachine },
    { L"Kinectic Charged 3", 0x49d02, 0x49d22, indexCPS2Sprites_WarMachine },
    { L"Shadows Light", 0x494a2, 0x494c2, indexCPS2Sprites_WarMachine },
    { L"Shadows Dark", 0x494c2, 0x494e2, indexCPS2Sprites_WarMachine },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x49d22, 0x49d42, indexCPS2Sprites_CapAm },
    { L"Burning 2", 0x49d42, 0x49d62, indexCPS2Sprites_CapAm },
    { L"Shocked 1", 0x49d62, 0x49d82, indexCPS2Sprites_CapAm },
    { L"Shocked 2", 0x49d82, 0x49da2, indexCPS2Sprites_CapAm },
    { L"Dark Burning 1", 0x49da2, 0x49dc2, indexCPS2Sprites_CapAm },
    { L"Dark Burning 2", 0x49dc2, 0x49de2, indexCPS2Sprites_CapAm },
    { L"Kinectic Charged 1", 0x49de2, 0x49e02, indexCPS2Sprites_CapAm },
    { L"Kinectic Charged 2", 0x49e02, 0x49e22, indexCPS2Sprites_CapAm },
    { L"Kinectic Charged 3", 0x49e22, 0x49e42, indexCPS2Sprites_CapAm },
    { L"Shadows Light", 0x494e2, 0x49502, indexCPS2Sprites_CapAm },
    { L"Shield Shadows Light", 0x49522, 0x49542, indexCPS2Sprites_CapAm, 0x1 },
    { L"Shadows Dark", 0x49502, 0x49522, indexCPS2Sprites_CapAm },
    { L"Shield Shadows Dark", 0x49542, 0x49562, indexCPS2Sprites_CapAm, 0x1 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x49f62, 0x49f82, indexCPS2Sprites_Hulk },
    { L"Burning 2", 0x49f82, 0x49fa2, indexCPS2Sprites_Hulk },
    { L"Shocked 1", 0x49fa2, 0x49fc2, indexCPS2Sprites_Hulk },
    { L"Shocked 2", 0x49fc2, 0x49fe2, indexCPS2Sprites_Hulk },
    { L"Dark Burning 1", 0x49fe2, 0x4a002, indexCPS2Sprites_Hulk },
    { L"Dark Burning 2", 0x4a002, 0x4a022, indexCPS2Sprites_Hulk },
    { L"Kinectic Charged 1", 0x4a022, 0x4a042, indexCPS2Sprites_Hulk },
    { L"Kinectic Charged 2", 0x4a042, 0x4a062, indexCPS2Sprites_Hulk },
    { L"Kinectic Charged 3", 0x4a062, 0x4a082, indexCPS2Sprites_Hulk },
    { L"Shadows Light", 0x49562, 0x49582, indexCPS2Sprites_Hulk },
    { L"Shadows Dark", 0x49582, 0x495A2, indexCPS2Sprites_Hulk },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a082, 0x4a0a2, indexCPS2Sprites_Wolverine },
    { L"Burning 2", 0x4a0a2, 0x4a0c2, indexCPS2Sprites_Wolverine },
    { L"Shocked 1", 0x4a0c2, 0x4a0e2, indexCPS2Sprites_Wolverine },
    { L"Shocked 2", 0x4a0e2, 0x4a102, indexCPS2Sprites_Wolverine },
    { L"Dark Burning 1", 0x4a102, 0x4a122, indexCPS2Sprites_Wolverine },
    { L"Dark Burning 2", 0x4a122, 0x4a142, indexCPS2Sprites_Wolverine },
    { L"Kinectic Charged 1", 0x4a142, 0x4a162, indexCPS2Sprites_Wolverine },
    { L"Kinectic Charged 2", 0x4a162, 0x4a182, indexCPS2Sprites_Wolverine },
    { L"Kinectic Charged 3", 0x4a182, 0x4a1a2, indexCPS2Sprites_Wolverine },
    { L"Shadows Light", 0x495A2, 0x495C2, indexCPS2Sprites_Wolverine },
    { L"Shadows Dark", 0x495C2, 0x495E2, indexCPS2Sprites_Wolverine },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a1a2, 0x4a1c2, indexCPS2Sprites_Gambit },
    { L"Burning 2", 0x4a1c2, 0x4a1e2, indexCPS2Sprites_Gambit },
    { L"Shocked 1", 0x4a1e2, 0x4a202, indexCPS2Sprites_Gambit },
    { L"Shocked 2", 0x4a202, 0x4a222, indexCPS2Sprites_Gambit },
    { L"Dark Burning 1", 0x4a222, 0x4a242, indexCPS2Sprites_Gambit },
    { L"Dark Burning 2", 0x4a242, 0x4a262, indexCPS2Sprites_Gambit },
    { L"Kinectic Charged 1", 0x4a262, 0x4a282, indexCPS2Sprites_Gambit },
    { L"Kinectic Charged 2", 0x4a282, 0x4a2a2, indexCPS2Sprites_Gambit },
    { L"Kinectic Charged 3", 0x4a2a2, 0x4a2c2, indexCPS2Sprites_Gambit },
    { L"Shadows Light", 0x495E2, 0x49602, indexCPS2Sprites_Gambit },
    { L"Shadows Dark", 0x49602, 0x49622, indexCPS2Sprites_Gambit },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a2c2, 0x4a2e2, indexCPS2Sprites_Venom },
    { L"Burning 2", 0x4a2e2, 0x4a302, indexCPS2Sprites_Venom },
    { L"Shocked 1", 0x4a302, 0x4a322, indexCPS2Sprites_Venom },
    { L"Shocked 2", 0x4a322, 0x4a342, indexCPS2Sprites_Venom },
    { L"Dark Burning 1", 0x4a342, 0x4a362, indexCPS2Sprites_Venom },
    { L"Dark Burning 2", 0x4a362, 0x4a382, indexCPS2Sprites_Venom },
    { L"Kinectic Charged 1", 0x4a382, 0x4a3a2, indexCPS2Sprites_Venom },
    { L"Kinectic Charged 2", 0x4a3a2, 0x4a3c2, indexCPS2Sprites_Venom },
    { L"Kinectic Charged 3", 0x4a3c2, 0x4a3e2, indexCPS2Sprites_Venom },
    { L"Shadows Light", 0x49622, 0x49642, indexCPS2Sprites_Venom },
    { L"Shadows Dark", 0x49642, 0x49662, indexCPS2Sprites_Venom },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a502, 0x4a522, indexCPS2Sprites_Spidey },
    { L"Burning 2", 0x4a522, 0x4a542, indexCPS2Sprites_Spidey },
    { L"Shocked 1", 0x4a542, 0x4a562, indexCPS2Sprites_Spidey },
    { L"Shocked 2", 0x4a562, 0x4a582, indexCPS2Sprites_Spidey },
    { L"Dark Burning 1", 0x4a582, 0x4a5a2, indexCPS2Sprites_Spidey },
    { L"Dark Burning 2", 0x4a5a2, 0x4a5c2, indexCPS2Sprites_Spidey },
    { L"Kinectic Charged 1", 0x4a5c2, 0x4a5e2, indexCPS2Sprites_Spidey },
    { L"Kinectic Charged 2", 0x4a5e2, 0x4a602, indexCPS2Sprites_Spidey },
    { L"Kinectic Charged 3", 0x4a602, 0x4a622, indexCPS2Sprites_Spidey },
    { L"Shadows Light", 0x49662, 0x49682, indexCPS2Sprites_Spidey },
    { L"Shadows Dark", 0x49682, 0x496A2, indexCPS2Sprites_Spidey },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a622, 0x4a642, indexCPS2Sprites_Roll },
    { L"Burning 2", 0x4a642, 0x4a662, indexCPS2Sprites_Roll },
    { L"Shocked 1", 0x4a662, 0x4a682, indexCPS2Sprites_Roll },
    { L"Shocked 2", 0x4a682, 0x4a6a2, indexCPS2Sprites_Roll },
    { L"Dark Burning 1", 0x4a6a2, 0x4a6c2, indexCPS2Sprites_Roll },
    { L"Dark Burning 2", 0x4a6c2, 0x4a6e2, indexCPS2Sprites_Roll },
    { L"Kinectic Charged 1", 0x4a6e2, 0x4a702, indexCPS2Sprites_Roll },
    { L"Kinectic Charged 2", 0x4a702, 0x4a722, indexCPS2Sprites_Roll },
    { L"Kinectic Charged 3", 0x4a722, 0x4a742, indexCPS2Sprites_Roll },
    { L"Shadows Light", 0x496A2, 0x496C2, indexCPS2Sprites_Roll },
    { L"Shadows Dark", 0x496C2, 0x496E2, indexCPS2Sprites_Roll },
};

const sGame_PaletteDataset MVC_A_RYU_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a742, 0x4a762, indexCPS2Sprites_Ryu, 0x09 },
    { L"Burning 2", 0x4a762, 0x4a782, indexCPS2Sprites_Ryu, 0x09 },
    { L"Shocked 1", 0x4a782, 0x4a7a2, indexCPS2Sprites_Ryu, 0x09 },
    { L"Shocked 2", 0x4a7a2, 0x4a7c2, indexCPS2Sprites_Ryu, 0x09 },
    { L"Dark Burning 1", 0x4a7c2, 0x4a7e2, indexCPS2Sprites_Ryu, 0x09 },
    { L"Dark Burning 2", 0x4a7e2, 0x4a802, indexCPS2Sprites_Ryu, 0x09 },
    { L"Kinectic Charged 1", 0x4a802, 0x4a822, indexCPS2Sprites_Ryu, 0x09 },
    { L"Kinectic Charged 2", 0x4a822, 0x4a842, indexCPS2Sprites_Ryu, 0x09 },
    { L"Kinectic Charged 3", 0x4a842, 0x4a862, indexCPS2Sprites_Ryu, 0x09 },
    { L"Shadows Light", 0x49722, 0x49742, indexCPS2Sprites_Ryu, 0x09 },
    { L"Shadows Dark", 0x49742, 0x49762, indexCPS2Sprites_Ryu, 0x09 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a862, 0x4a882, indexCPS2Sprites_CapCom },
    { L"Burning 2", 0x4a882, 0x4a8a2, indexCPS2Sprites_CapCom },
    { L"Shocked 1", 0x4a8a2, 0x4a8c2, indexCPS2Sprites_CapCom },
    { L"Shocked 2", 0x4a8c2, 0x4a8e2, indexCPS2Sprites_CapCom },
    { L"Dark Burning 1", 0x4a8e2, 0x4a902, indexCPS2Sprites_CapCom },
    { L"Dark Burning 2", 0x4a902, 0x4a922, indexCPS2Sprites_CapCom },
    { L"Kinectic Charged 1", 0x4a922, 0x4a942, indexCPS2Sprites_CapCom },
    { L"Kinectic Charged 2", 0x4a942, 0x4a962, indexCPS2Sprites_CapCom },
    { L"Kinectic Charged 3", 0x4a962, 0x4a982, indexCPS2Sprites_CapCom },
    { L"Shadows Light", 0x49762, 0x49782, indexCPS2Sprites_CapCom },
    { L"Shadows Dark", 0x49782, 0x497A2, indexCPS2Sprites_CapCom },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4a982, 0x4a9a2, indexCPS2Sprites_ChunLi },
    { L"Burning 2", 0x4a9a2, 0x4a9c2, indexCPS2Sprites_ChunLi },
    { L"Shocked 1", 0x4a9c2, 0x4a9e2, indexCPS2Sprites_ChunLi },
    { L"Shocked 2", 0x4a9e2, 0x4aa02, indexCPS2Sprites_ChunLi },
    { L"Dark Burning 1", 0x4aa02, 0x4aa22, indexCPS2Sprites_ChunLi },
    { L"Dark Burning 2", 0x4aa22, 0x4aa42, indexCPS2Sprites_ChunLi },
    { L"Kinectic Charged 1", 0x4aa42, 0x4aa62, indexCPS2Sprites_ChunLi },
    { L"Kinectic Charged 2", 0x4aa62, 0x4aa82, indexCPS2Sprites_ChunLi },
    { L"Kinectic Charged 3", 0x4aa82, 0x4aaa2, indexCPS2Sprites_ChunLi },
    { L"Shadows Light", 0x497A2, 0x497C2, indexCPS2Sprites_ChunLi },
    { L"Shadows Dark", 0x497C2, 0x497E2, indexCPS2Sprites_ChunLi },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4aaa2, 0x4aac2, indexCPS2Sprites_Jin },
    { L"Burning 2", 0x4aac2, 0x4aae2, indexCPS2Sprites_Jin },
    { L"Shocked 1", 0x4aae2, 0x4ab02, indexCPS2Sprites_Jin },
    { L"Shocked 2", 0x4ab02, 0x4ab22, indexCPS2Sprites_Jin },
    { L"Dark Burning 1", 0x4ab22, 0x4ab42, indexCPS2Sprites_Jin },
    { L"Dark Burning 2", 0x4ab42, 0x4ab62, indexCPS2Sprites_Jin },
    { L"Kinectic Charged 1", 0x4ab62, 0x4ab82, indexCPS2Sprites_Jin },
    { L"Kinectic Charged 2", 0x4ab82, 0x4aba2, indexCPS2Sprites_Jin },
    { L"Kinectic Charged 3", 0x4aba2, 0x4abc2, indexCPS2Sprites_Jin },
    { L"Shadows Light", 0x497E2, 0x49802, indexCPS2Sprites_Jin },
    { L"Shadows Dark", 0x49802, 0x49822, indexCPS2Sprites_Jin },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4abc2, 0x4abe2, indexCPS2Sprites_Zangief },
    { L"Burning 2", 0x4abe2, 0x4ac02, indexCPS2Sprites_Zangief },
    { L"Shocked 1", 0x4ac02, 0x4ac22, indexCPS2Sprites_Zangief },
    { L"Shocked 2", 0x4ac22, 0x4ac42, indexCPS2Sprites_Zangief },
    { L"Dark Burning 1", 0x4ac42, 0x4ac62, indexCPS2Sprites_Zangief },
    { L"Dark Burning 2", 0x4ac62, 0x4ac82, indexCPS2Sprites_Zangief },
    { L"Kinectic Charged 1", 0x4ac82, 0x4aca2, indexCPS2Sprites_Zangief },
    { L"Kinectic Charged 2", 0x4aca2, 0x4acc2, indexCPS2Sprites_Zangief },
    { L"Kinectic Charged 3", 0x4acc2, 0x4ace2, indexCPS2Sprites_Zangief },
    { L"Shadows Light", 0x49822, 0x49842, indexCPS2Sprites_Zangief },
    { L"Shadows Dark", 0x49842, 0x49862, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4ace2, 0x4ad02, indexCPS2Sprites_Strider },
    { L"Burning 2", 0x4ad02, 0x4ad22, indexCPS2Sprites_Strider },
    { L"Shocked 1", 0x4ad22, 0x4ad42, indexCPS2Sprites_Strider },
    { L"Shocked 2", 0x4ad42, 0x4ad62, indexCPS2Sprites_Strider },
    { L"Dark Burning 1", 0x4ad62, 0x4ad82, indexCPS2Sprites_Strider },
    { L"Dark Burning 2", 0x4ad82, 0x4ada2, indexCPS2Sprites_Strider },
    { L"Kinectic Charged 1", 0x4ada2, 0x4adc2, indexCPS2Sprites_Strider },
    { L"Kinectic Charged 2", 0x4adc2, 0x4ade2, indexCPS2Sprites_Strider },
    { L"Kinectic Charged 3", 0x4ade2, 0x4ae02, indexCPS2Sprites_Strider },
    { L"Shadows Light", 0x49862, 0x49882, indexCPS2Sprites_Strider },
    { L"Shadows Dark", 0x49882, 0x498A2, indexCPS2Sprites_Strider },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4ae02, 0x4ae22, indexCPS2Sprites_Morrigan },
    { L"Burning 2", 0x4ae22, 0x4ae42, indexCPS2Sprites_Morrigan },
    { L"Shocked 1", 0x4ae42, 0x4ae62, indexCPS2Sprites_Morrigan },
    { L"Shocked 2", 0x4ae62, 0x4ae82, indexCPS2Sprites_Morrigan },
    { L"Dark Burning 1", 0x4ae82, 0x4aea2, indexCPS2Sprites_Morrigan },
    { L"Dark Burning 2", 0x4aea2, 0x4aec2, indexCPS2Sprites_Morrigan },
    { L"Kinectic Charged 1", 0x4aec2, 0x4aee2, indexCPS2Sprites_Morrigan },
    { L"Kinectic Charged 2", 0x4aee2, 0x4af02, indexCPS2Sprites_Morrigan },
    { L"Kinectic Charged 3", 0x4af02, 0x4af22, indexCPS2Sprites_Morrigan },
    { L"Shadows Light", 0x498A2, 0x498C2, indexCPS2Sprites_Morrigan },
    { L"Shadows Dark", 0x498C2, 0x498E2, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4af22, 0x4af42, indexCPS2Sprites_Megaman },
    { L"Burning 2", 0x4af42, 0x4af62, indexCPS2Sprites_Megaman },
    { L"Shocked 1", 0x4af62, 0x4af82, indexCPS2Sprites_Megaman },
    { L"Shocked 2", 0x4af82, 0x4afa2, indexCPS2Sprites_Megaman },
    { L"Dark Burning 1", 0x4afa2, 0x4afc2, indexCPS2Sprites_Megaman },
    { L"Dark Burning 2", 0x4afc2, 0x4afe2, indexCPS2Sprites_Megaman },
    { L"Kinectic Charged 1", 0x4afe2, 0x4b002, indexCPS2Sprites_Megaman },
    { L"Kinectic Charged 2", 0x4b002, 0x4b022, indexCPS2Sprites_Megaman },
    { L"Kinectic Charged 3", 0x4b022, 0x4b042, indexCPS2Sprites_Megaman },
    { L"Shadows Light", 0x498e2, 0x49902, indexCPS2Sprites_Megaman },
    { L"Shadows Dark", 0x49902, 0x49922, indexCPS2Sprites_Megaman },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_PALETTES_STATUSEFFECTS[] =
{
    // This actually overlaps with Megaman Kinectic Charged 3: if you look at it you see that
    // color 00 is megaman's color 15, and color 01 is actually Onslaught's transparency counter
    // I don't have a great fix for this, so I'll just make the title clear
    { L"Burning 1 (munged)", 0x4b040, 0x4b060, indexCPS2Sprites_Onslaught },
    { L"Burning 2", 0x4b060, 0x4b080, indexCPS2Sprites_Onslaught },
    { L"Shocked 1", 0x4b080, 0x4b0a0, indexCPS2Sprites_Onslaught },
    { L"Shocked 2", 0x4b0a0, 0x4b0c0, indexCPS2Sprites_Onslaught },
    { L"Dark Burning 1", 0x4b0c0, 0x4b0e0, indexCPS2Sprites_Onslaught },
    { L"Dark Burning 2", 0x4b0e0, 0x4b100, indexCPS2Sprites_Onslaught },
    // This actually overlaps with Megaman Shadows Dark
    // I don't have a great fix for this, so I'll just make the title clear
    { L"Shadows Light (munged)", 0x49920, 0x49940, indexCPS2Sprites_Onslaught },
    { L"Shadows Dark", 0x49940, 0x49960, indexCPS2Sprites_Onslaught },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4b102, 0x4b122, indexCPS2Sprites_Venom },
    { L"Burning 2", 0x4b122, 0x4b142, indexCPS2Sprites_Venom },
    { L"Shocked 1", 0x4b142, 0x4b162, indexCPS2Sprites_Venom },
    { L"Shocked 2", 0x4b162, 0x4b182, indexCPS2Sprites_Venom },
    { L"Dark Burning 1", 0x4b182, 0x4b1a2, indexCPS2Sprites_Venom },
    { L"Dark Burning 2", 0x4b1a2, 0x4b1c2, indexCPS2Sprites_Venom },
    { L"Kinectic Charged 1", 0x4b1c2, 0x4b1e2, indexCPS2Sprites_Venom },
    { L"Kinectic Charged 2", 0x4b1e2, 0x4b202, indexCPS2Sprites_Venom },
    { L"Kinectic Charged 3", 0x4b202, 0x4b222, indexCPS2Sprites_Venom },
    { L"Shadows Light", 0x49962, 0x49982, indexCPS2Sprites_Venom },
    { L"Shadows Dark", 0x49982, 0x499a2, indexCPS2Sprites_Venom },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4b342, 0x4b362, indexCPS2Sprites_Hulk },
    { L"Burning 2", 0x4b362, 0x4b382, indexCPS2Sprites_Hulk },
    { L"Shocked 1", 0x4b382, 0x4b3a2, indexCPS2Sprites_Hulk },
    { L"Shocked 2", 0x4b3a2, 0x4b3c2, indexCPS2Sprites_Hulk },
    { L"Dark Burning 1", 0x4b3c2, 0x4b3e2, indexCPS2Sprites_Hulk },
    { L"Dark Burning 2", 0x4b3e2, 0x4b402, indexCPS2Sprites_Hulk },
    { L"Kinectic Charged 1", 0x4b402, 0x4b422, indexCPS2Sprites_Hulk },
    { L"Kinectic Charged 2", 0x4b422, 0x4b442, indexCPS2Sprites_Hulk },
    { L"Kinectic Charged 3", 0x4b442, 0x4b462, indexCPS2Sprites_Hulk },
    { L"Shadows Light", 0x499a2, 0x499c2, indexCPS2Sprites_Hulk },
    { L"Shadows Dark", 0x499c2, 0x499e2, indexCPS2Sprites_Hulk },
    { L"Shadows 3?", 0x499e2, 0x49a02, indexCPS2Sprites_Hulk },
    { L"Shadows 4?", 0x49a02, 0x49a22, indexCPS2Sprites_Hulk },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4b462, 0x4b482, indexCPS2Sprites_WarMachine },
    { L"Burning 2", 0x4b482, 0x4b4a2, indexCPS2Sprites_WarMachine },
    { L"Shocked 1", 0x4b4a2, 0x4b4c2, indexCPS2Sprites_WarMachine },
    { L"Shocked 2", 0x4b4c2, 0x4b4e2, indexCPS2Sprites_WarMachine },
    { L"Dark Burning 1", 0x4b4e2, 0x4b502, indexCPS2Sprites_WarMachine },
    { L"Dark Burning 2", 0x4b502, 0x4b522, indexCPS2Sprites_WarMachine },
    { L"Kinectic Charged 1", 0x4b522, 0x4b542, indexCPS2Sprites_WarMachine },
    { L"Kinectic Charged 2", 0x4b542, 0x4b562, indexCPS2Sprites_WarMachine },
    { L"Kinectic Charged 3", 0x4b562, 0x4b582, indexCPS2Sprites_WarMachine },
    { L"Shadows Light", 0x49a22, 0x49a42, indexCPS2Sprites_WarMachine },
    { L"Shadows Dark", 0x49a42, 0x49a62, indexCPS2Sprites_WarMachine },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4b582, 0x4b5a2, indexCPS2Sprites_ChunLi },
    { L"Burning 2", 0x4b5a2, 0x4b5c2, indexCPS2Sprites_ChunLi },
    { L"Shocked 1", 0x4b5c2, 0x4b5e2, indexCPS2Sprites_ChunLi },
    { L"Shocked 2", 0x4b5e2, 0x4b602, indexCPS2Sprites_ChunLi },
    { L"Dark Burning 1", 0x4b602, 0x4b622, indexCPS2Sprites_ChunLi },
    { L"Dark Burning 2", 0x4b622, 0x4b642, indexCPS2Sprites_ChunLi },
    { L"Kinectic Charged 1", 0x4b642, 0x4b662, indexCPS2Sprites_ChunLi },
    { L"Kinectic Charged 2", 0x4b662, 0x4b682, indexCPS2Sprites_ChunLi },
    { L"Kinectic Charged 3", 0x4b682, 0x4b6a2, indexCPS2Sprites_ChunLi },
    { L"Shadows Light", 0x49a62, 0x49a82, indexCPS2Sprites_ChunLi },
    { L"Shadows Dark", 0x49a82, 0x49aa2, indexCPS2Sprites_ChunLi },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_STATUSEFFECTS[] =
{
    { L"Burning 1", 0x4b6a2, 0x4b6c2, indexCPS2Sprites_Morrigan },
    { L"Burning 2", 0x4b6c2, 0x4b6e2, indexCPS2Sprites_Morrigan },
    { L"Shocked 1", 0x4b6e2, 0x4b702, indexCPS2Sprites_Morrigan },
    { L"Shocked 2", 0x4b702, 0x4b722, indexCPS2Sprites_Morrigan },
    { L"Dark Burning 1", 0x4b722, 0x4b742, indexCPS2Sprites_Morrigan },
    { L"Dark Burning 2", 0x4b742, 0x4b762, indexCPS2Sprites_Morrigan },
    { L"Kinectic Charged 1", 0x4b762, 0x4b782, indexCPS2Sprites_Morrigan },
    { L"Kinectic Charged 2", 0x4b782, 0x4b7a2, indexCPS2Sprites_Morrigan },
    { L"Kinectic Charged 3", 0x4b7a2, 0x4b7c2, indexCPS2Sprites_Morrigan },
    { L"Shadows Light", 0x49aa2, 0x49ac2, indexCPS2Sprites_Morrigan },
    { L"Shadows Dark", 0x49ac2, 0x49ae2, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset MVC_A_ASSISTICON_PALETTES[] =
{
    { L"Anita", 0x47fc2, 0x47fe2, indexCPS2Sprites_MVCAssets, 0x30 },
    { L"Arthur", 0x47f02, 0x47f22, indexCPS2Sprites_MVCAssets, 0x31 },
    { L"Colossus", 0x47e02, 0x47e22, indexCPS2Sprites_MVCAssets, 0x32 },
    { L"Cyclops", 0x47de2, 0x47e02, indexCPS2Sprites_MVCAssets, 0x33 },
    { L"Devilot", 0x48002, 0x48022, indexCPS2Sprites_MVCAssets, 0x34 },
    { L"Iceman", 0x47e62, 0x47e82, indexCPS2Sprites_MVCAssets, 0x35 },
    { L"Jubilee", 0x47ea2, 0x47ec2, indexCPS2Sprites_MVCAssets, 0x36 },
    { L"Juggernaut", 0x47d82, 0x47da2, indexCPS2Sprites_MVCAssets, 0x37 },
    { L"Lou", 0x47fa2, 0x47fc2, indexCPS2Sprites_MVCAssets, 0x38 },
    { L"Magneto", 0x47da2, 0x47dc2, indexCPS2Sprites_MVCAssets, 0x39 },
    { L"Michelle Heart", 0x47f22, 0x47f42, indexCPS2Sprites_MVCAssets, 0x3A },
    { L"Psylocke", 0x47dc2, 0x47de2, indexCPS2Sprites_MVCAssets, 0x3B },
    { L"Pure & Fur", 0x47fe2, 0x48002, indexCPS2Sprites_MVCAssets, 0x3C },
    { L"Rogue", 0x47e82, 0x47ea2, indexCPS2Sprites_MVCAssets, 0x3D },
    { L"Saki", 0x47f62, 0x47f82, indexCPS2Sprites_MVCAssets, 0x3E },
    { L"Storm", 0x47ec2, 0x47ee2, indexCPS2Sprites_MVCAssets, 0x3F },
    { L"Thor", 0x47e22, 0x47e42, indexCPS2Sprites_MVCAssets, 0x40 },
    { L"Ton-Pooh", 0x47f42, 0x47f62, indexCPS2Sprites_MVCAssets, 0x41 },
    { L"Unknown Soldier", 0x47f82, 0x47fa2, indexCPS2Sprites_MVCAssets, 0x42 },
    { L"U.S. Agent", 0x47e42, 0x47e62, indexCPS2Sprites_MVCAssets, 0x43 },
    { L"Unselected Assist Icons", 0x52362, 0x52382, indexCPS2Sprites_MVCAssets, 0x44 },
};

const sGame_PaletteDataset MVC_A_CSP_PALETTES[] =
{
    { L"Captain America P CSP/Duo", 0x52a82, 0x52ae2, indexCPS2Sprites_CapAm, 0x10 },
    { L"Captain America K CSP/Duo", 0x53082, 0x530e2, indexCPS2Sprites_CapAm, 0x10 },
    { L"Captain Commando P CSP/Duo", 0x52d82, 0x52de2, indexCPS2Sprites_CapCom, 0x10 },
    { L"Captain Commando K CSP/Duo", 0x53382, 0x533e2, indexCPS2Sprites_CapCom, 0x10 },
    { L"Chun-Li P CSP/Duo", 0x52de2, 0x52e42, indexCPS2Sprites_ChunLi, 0x10 },
    { L"Chun-Li 2P CSP/Duo", 0x533e2, 0x53442, indexCPS2Sprites_ChunLi, 0x10 },
    { L"Shadow Lady K CSP/Duo", 0x53922, 0x53982, indexCPS2Sprites_ChunLi, 0x10 },
    { L"Shadow Lady P CSP/Duo", 0x53742, 0x537a2, indexCPS2Sprites_ChunLi, 0x10 },
    { L"Gambit P CSP/Duo", 0x52ba2, 0x52c02, indexCPS2Sprites_Gambit, 0x10 },
    { L"Gambit K CSP/Duo", 0x531a2, 0x53202, indexCPS2Sprites_Gambit, 0x10 },
    { L"Hulk P CSP/Duo", 0x52ae2, 0x52b02, indexCPS2Sprites_Hulk, 0x10 },
    { L"Hulk K CSP/Duo", 0x530e2, 0x53102, indexCPS2Sprites_Hulk, 0x10 },
    { L"Orange Hulk P CSP/Duo", 0x53682, 0x536a2, indexCPS2Sprites_Hulk, 0x10 },
    { L"Orange Hulk K CSP/Duo", 0x53862, 0x53882, indexCPS2Sprites_Hulk, 0x10 },
    { L"Jin P CSP/Duo", 0x52e42, 0x52ea2, indexCPS2Sprites_Jin, 0x10 },
    { L"Jin 2P CSP/Duo", 0x53442, 0x534a2, indexCPS2Sprites_Jin, 0x10 },
    { L"Megaman P CSP/Duo", 0x52fc2, 0x53022, indexCPS2Sprites_Megaman, 0x10 },
    { L"Megaman K CSP/Duo", 0x535c2, 0x53622, indexCPS2Sprites_Megaman, 0x10 },
    { L"Morrigan P CSP/Duo", 0x52f62, 0x52fc2, indexCPS2Sprites_Morrigan, 0x10 },
    { L"Morrigan K CSP/Duo", 0x53562, 0x535c2, indexCPS2Sprites_Morrigan, 0x10 },
    { L"Lilith P CSP/Duo", 0x537a2, 0x53802, indexCPS2Sprites_Morrigan, 0x10 },
    { L"Lilith K CSP/Duo", 0x53982, 0x539e2, indexCPS2Sprites_Morrigan, 0x10 },
    { L"Roll P CSP/Duo", 0x52cc2, 0x52d22, indexCPS2Sprites_Roll, 0x10 },
    { L"Roll K CSP/Duo", 0x532c2, 0x53322, indexCPS2Sprites_Roll, 0x10 },
    { L"Ryu P CSP/Duo", 0x52d22, 0x52d82, indexCPS2Sprites_Ryu, 0x10 },
    { L"Ryu K CSP/Duo", 0x53322, 0x53382, indexCPS2Sprites_Ryu, 0x10 },
    { L"Ken P CSP/Duo", 0x539e2, 0x53a42, indexCPS2Sprites_Ryu, 0x10 },
    { L"Ken K CSP/Duo", 0x53b02, 0x53b62, indexCPS2Sprites_Ryu, 0x10 },
    { L"Gouki P CSP/Duo", 0x53a42, 0x53aa2, indexCPS2Sprites_Ryu, 0x10 },
    { L"Gouki K CSP/Duo", 0x53b62, 0x53bc2, indexCPS2Sprites_Ryu, 0x10 },
    { L"Spider-Man P CSP/Duo", 0x52c62, 0x52ca2, indexCPS2Sprites_Spidey, 0x10 },
    { L"Spider-Man K CSP/Duo", 0x53262, 0x532a2, indexCPS2Sprites_Spidey, 0x10 },
    { L"Strider Hiryu P CSP/Duo", 0x52f02, 0x52f62, indexCPS2Sprites_Strider, 0x10 },
    { L"Strider Hiryu K CSP/Duo", 0x53502, 0x53562, indexCPS2Sprites_Strider, 0x10 },
    { L"Venom P CSP/Duo", 0x52c02, 0x52c62, indexCPS2Sprites_Venom, 0x10 },
    { L"Venom K CSP/Duo", 0x53202, 0x53262, indexCPS2Sprites_Venom, 0x10 },
    { L"Red Venom P CSP/Duo", 0x53622, 0x53682, indexCPS2Sprites_Venom, 0x10 },
    { L"Red Venom K CSP/Duo", 0x53802, 0x53862, indexCPS2Sprites_Venom, 0x10 },
    { L"War Machine P CSP/Duo", 0x52a42, 0x52a82, indexCPS2Sprites_WarMachine, 0x10 },
    { L"War Machine K CSP/Duo", 0x53042, 0x53082, indexCPS2Sprites_WarMachine, 0x10 },
    { L"Gold War Machine P CSP/Duo", 0x53702, 0x53742, indexCPS2Sprites_WarMachine, 0x10 },
    { L"Gold War Machine K CSP/Duo", 0x538e2, 0x53922, indexCPS2Sprites_WarMachine, 0x10 },
    { L"Wolverine P CSP/Duo", 0x52b42, 0x52ba2, indexCPS2Sprites_Wolverine, 0x10 },
    { L"Wolverine K CSP/Duo", 0x53142, 0x531a2, indexCPS2Sprites_Wolverine, 0x10 },
    { L"Zangief P CSP/Duo", 0x52ea2, 0x52f02, indexCPS2Sprites_Zangief, 0x10 },
    { L"Zangief K CSP/Duo", 0x534a2, 0x53502, indexCPS2Sprites_Zangief, 0x10 },
    { L"Mech-Zangief P CSP/Duo", 0x53aa2, 0x53b02, indexCPS2Sprites_Zangief, 0x10 },
    { L"Mech-Zangief K CSP/Duo", 0x53bc2, 0x53c22, indexCPS2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset MVC_A_SUPERPORT_PALETTES[] =
{
    { L"Captain America P Super/VS", 0x53ec2, 0x53f62, indexCPS2Sprites_CapAm, 0x12 },
    { L"Captain America K Super/VS", 0x54e62, 0x54f02, indexCPS2Sprites_CapAm, 0x12 },
    { L"Captain Commando P Super/VS", 0x543c2, 0x54462, indexCPS2Sprites_CapCom, 0x12 },
    { L"Captain Commando K Super/VS", 0x55362, 0x55402, indexCPS2Sprites_CapCom, 0x12 },
    { L"Chun-Li P Super/VS", 0x54462, 0x54502, indexCPS2Sprites_ChunLi, 0x12 },
    { L"Chun-Li K Super/VS", 0x55402, 0x554a2, indexCPS2Sprites_ChunLi, 0x12 },
    { L"Shadow Lady P Super/VS", 0x54aa2, 0x54b42, indexCPS2Sprites_ChunLi, 0x12 },
    { L"Shadow Lady K Super/VS", 0x55a42, 0x55ae2, indexCPS2Sprites_ChunLi, 0x12 },
    { L"Gambit P Super/VS", 0x540a2, 0x54122, indexCPS2Sprites_Gambit, 0x12 },
    { L"Gambit K Super/VS", 0x55042, 0x550c2, indexCPS2Sprites_Gambit, 0x12 },
    { L"Hulk P Super/VS", 0x53f62, 0x53f82, indexCPS2Sprites_Hulk, 0x12 },
    { L"Hulk K Super/VS", 0x54f02, 0x54f22, indexCPS2Sprites_Hulk, 0x12 },
    { L"Orange Hulk P Super/VS", 0x54962, 0x54982, indexCPS2Sprites_Hulk, 0x12 },
    { L"Orange Hulk K Super/VS", 0x55902, 0x55922, indexCPS2Sprites_Hulk, 0x12 },
    { L"Jin P Super/VS", 0x54502, 0x545a2, indexCPS2Sprites_Jin, 0x12 },
    { L"Jin K Super/VS", 0x554a2, 0x55542, indexCPS2Sprites_Jin, 0x12 },
    { L"Megaman P Super/VS", 0x54782, 0x54822, indexCPS2Sprites_Megaman, 0x12 },
    { L"Megaman K Super/VS", 0x55722, 0x557c2, indexCPS2Sprites_Megaman, 0x12 },
    { L"Morrigan P Super/VS", 0x546e2, 0x54782, indexCPS2Sprites_Morrigan, 0x12 },
    { L"Morrigan K Super/VS", 0x55682, 0x55722, indexCPS2Sprites_Morrigan, 0x12 },
    { L"Lilith P Super/VS", 0x54b42, 0x54be2, indexCPS2Sprites_Morrigan, 0x12 },
    { L"Lilith K Super/VS", 0x55ae2, 0x55b82, indexCPS2Sprites_Morrigan, 0x12 },
    { L"Roll P Super/VS", 0x54282, 0x54322, indexCPS2Sprites_Roll, 0x12 },
    { L"Roll K Super/VS", 0x55222, 0x552c2, indexCPS2Sprites_Roll, 0x12 },
    { L"Ryu P Super/VS", 0x54322, 0x543c2, indexCPS2Sprites_Ryu, 0x12 },
    { L"Ryu K Super/VS", 0x552c2, 0x55362, indexCPS2Sprites_Ryu, 0x12 },
    { L"Ken P Super/VS", 0x54be2, 0x54c82, indexCPS2Sprites_Ryu, 0x12 },
    { L"Ken K Super/VS", 0x55b82, 0x55c22, indexCPS2Sprites_Ryu, 0x12 },
    { L"Gouki P Super/VS", 0x54c82, 0x54d22, indexCPS2Sprites_Ryu, 0x12 },
    { L"Gouki K Super/VS", 0x55c22, 0x55cc2, indexCPS2Sprites_Ryu, 0x12 },
    { L"Spider-Man P Super/VS", 0x541e2, 0x54242, indexCPS2Sprites_Spidey, 0x12 },
    { L"Spider-Man K Super/VS", 0x55182, 0x551e2, indexCPS2Sprites_Spidey, 0x12 },
    { L"Strider Hiryu P Super/VS", 0x54642, 0x546e2, indexCPS2Sprites_Strider, 0x12 },
    { L"Strider Hiryu K Super/VS", 0x555e2, 0x55682, indexCPS2Sprites_Strider, 0x12 },
    { L"Venom P Super/VS", 0x54142, 0x541a2, indexCPS2Sprites_Venom, 0x12 },
    { L"Venom K Super/VS", 0x550e2, 0x55142, indexCPS2Sprites_Venom, 0x12 },
    { L"Red Venom P Super/VS", 0x548c2, 0x54922, indexCPS2Sprites_Venom, 0x12 },
    { L"Red Venom K Super/VS", 0x55862, 0x558c2, indexCPS2Sprites_Venom, 0x12 },
    { L"War Machine P Super/VS", 0x53e22, 0x53ea2, indexCPS2Sprites_WarMachine, 0x12 },
    { L"War Machine K Super/VS", 0x54dc2, 0x54e42, indexCPS2Sprites_WarMachine, 0x12 },
    { L"Gold War Machine P Super/VS", 0x54a02, 0x54a82, indexCPS2Sprites_WarMachine, 0x12 },
    { L"Gold War Machine K Super/VS", 0x559a2, 0x55a22, indexCPS2Sprites_WarMachine, 0x12 },
    { L"Wolverine P Super/VS", 0x54002, 0x54062, indexCPS2Sprites_Wolverine, 0x12 },
    { L"Wolverine K Super/VS", 0x54fa2, 0x55002, indexCPS2Sprites_Wolverine, 0x12 },
    { L"Zangief P Super/VS", 0x545a2, 0x54622, indexCPS2Sprites_Zangief, 0x12 },
    { L"Zangief K Super/VS", 0x55542, 0x555c2, indexCPS2Sprites_Zangief, 0x12 },
    { L"Mech-Zangief P Super/VS", 0x54d22, 0x54da2, indexCPS2Sprites_Zangief, 0x12 },
    { L"Mech-Zangief K Super/VS", 0x55cc2, 0x55d42, indexCPS2Sprites_Zangief, 0x12 },
    { L"Onslaught P Super/VS", 0x54822, 0x548a2, indexCPS2Sprites_Onslaught, 0x12 },
    { L"Onslaught K Super/VS", 0x557c2, 0x55842, indexCPS2Sprites_Onslaught, 0x12 },
};

const sGame_PaletteDataset MVC_A_VSP_PALETTES[] =
{
    { L"Captain America P VSP", 0x55e42, 0x55f02, indexCPS2Sprites_CapAm, 0x13 },
    { L"Captain America K VSP", 0x57102, 0x571c2, indexCPS2Sprites_CapAm, 0x13 },
    { L"Captain Commando P VSP", 0x56442, 0x56502, indexCPS2Sprites_CapCom, 0x13 },
    { L"Captain Commando K VSP", 0x57702, 0x577c2, indexCPS2Sprites_CapCom, 0x13 },
    { L"Chun-Li P VSP", 0x56502, 0x565c2, indexCPS2Sprites_ChunLi, 0x13 },
    { L"Chun-Li K VSP", 0x577c2, 0x57882, indexCPS2Sprites_ChunLi, 0x13 },
    { L"Shadow Lady P VSP", 0x56c82, 0x56d42, indexCPS2Sprites_ChunLi, 0x13 },
    { L"Shadow Lady K VSP", 0x57f42, 0x58002, indexCPS2Sprites_ChunLi, 0x13 },
    { L"Gambit P VSP", 0x56082, 0x56142, indexCPS2Sprites_Gambit, 0x13 },
    { L"Gambit K VSP", 0x57342, 0x57402, indexCPS2Sprites_Gambit, 0x13 },
    { L"Hulk P VSP", 0x55f02, 0x55f22, indexCPS2Sprites_Hulk, 0x13 },
    { L"Orange Hulk P VSP", 0x56b02, 0x56b22, indexCPS2Sprites_Hulk, 0x13 },
    { L"Hulk K VSP", 0x571c2, 0x571e2, indexCPS2Sprites_Hulk, 0x13 },
    { L"Orange Hulk K VSP", 0x57dc2, 0x57de2, indexCPS2Sprites_Hulk, 0x13 },
    { L"Jin P VSP", 0x565c2, 0x56682, indexCPS2Sprites_Jin, 0x13 },
    { L"Jin K VSP", 0x57882, 0x57942, indexCPS2Sprites_Jin, 0x13 },
    { L"Megaman P VSP", 0x568c2, 0x56942, indexCPS2Sprites_Megaman, 0x13 },
    { L"Megaman K VSP", 0x57b82, 0x57c02, indexCPS2Sprites_Megaman, 0x13 },
    { L"Morrigan P VSP", 0x56802, 0x568c2, indexCPS2Sprites_Morrigan, 0x13 },
    { L"Morrigan K VSP", 0x57ac2, 0x57b82, indexCPS2Sprites_Morrigan, 0x13 },
    { L"Lilith P VSP", 0x56d42, 0x56e02, indexCPS2Sprites_Morrigan, 0x13 },
    { L"Lilith K VSP", 0x58002, 0x580c2, indexCPS2Sprites_Morrigan, 0x13 },
    { L"Roll P VSP", 0x562c2, 0x56382, indexCPS2Sprites_Roll, 0x13 },
    { L"Roll K VSP", 0x57582, 0x57642, indexCPS2Sprites_Roll, 0x13 },
    { L"Ryu P VSP", 0x56382, 0x56442, indexCPS2Sprites_Ryu, 0x13 },
    { L"Ryu K VSP", 0x57642, 0x57702, indexCPS2Sprites_Ryu, 0x13 },
    { L"Ken P VSP", 0x56e02, 0x56ec2, indexCPS2Sprites_Ryu, 0x13 },
    { L"Ken K VSP", 0x580c2, 0x58182, indexCPS2Sprites_Ryu, 0x13 },
    { L"Gouki P VSP", 0x56ec2, 0x56f82, indexCPS2Sprites_Ryu, 0x13 },
    { L"Gouki K VSP", 0x58182, 0x58242, indexCPS2Sprites_Ryu, 0x13 },
    { L"Spider-Man P VSP", 0x56202, 0x56282, indexCPS2Sprites_Spidey, 0x13 },
    { L"Spider-Man K VSP", 0x574c2, 0x57542, indexCPS2Sprites_Spidey, 0x13 },
    { L"Strider Hiryu P VSP", 0x56742, 0x56802, indexCPS2Sprites_Strider, 0x13 },
    { L"Strider Hiryu K VSP", 0x57a02, 0x57ac2, indexCPS2Sprites_Strider, 0x13 },
    { L"Venom P VSP", 0x56142, 0x561c2, indexCPS2Sprites_Venom, 0x13 },
    { L"Venom K VSP", 0x57402, 0x57482, indexCPS2Sprites_Venom, 0x13 },
    { L"Red Venom P VSP", 0x56a42, 0x56ac2, indexCPS2Sprites_Venom, 0x13 },
    { L"Red Venom K VSP", 0x57d02, 0x57d82, indexCPS2Sprites_Venom, 0x13 },
    { L"War Machine P VSP", 0x55d82, 0x55e02, indexCPS2Sprites_WarMachine, 0x13 },
    { L"War Machine K VSP", 0x57042, 0x570c2, indexCPS2Sprites_WarMachine, 0x13 },
    { L"Gold War Machine P VSP", 0x56bc2, 0x56c42, indexCPS2Sprites_WarMachine, 0x13 },
    { L"Gold War Machine K VSP", 0x57e82, 0x57f02, indexCPS2Sprites_WarMachine, 0x13 },
    { L"Wolverine P VSP", 0x55fc2, 0x56082, indexCPS2Sprites_Wolverine, 0x13 },
    { L"Wolverine K VSP", 0x57282, 0x57342, indexCPS2Sprites_Wolverine, 0x13 },
    { L"Zangief P VSP", 0x56682, 0x56722, indexCPS2Sprites_Zangief, 0x13 },
    { L"Zangief K VSP", 0x57942, 0x579e2, indexCPS2Sprites_Zangief, 0x13 },
    { L"Mech-Zangief P VSP", 0x56f82, 0x57022, indexCPS2Sprites_Zangief, 0x13 },
    { L"Mech-Zangief K VSP", 0x58242, 0x582e2, indexCPS2Sprites_Zangief, 0x13 },
    { L"Onslaught VSP", 0x56982, 0x569e2, indexCPS2Sprites_Onslaught, 0x13 },
};

const sGame_PaletteDataset MVC_A_CSIS_PALETTES[] =
{
    { L"Captain America CS Icon",   0x3e5d8, 0x3e5f8, indexCPS2Sprites_CapAm, 0x11 },
    { L"Captain Commando CS Icon",  0x3e6d8, 0x3e6f8, indexCPS2Sprites_CapCom, 0x11 },
    { L"Chun-Li CS Icon",           0x3e6f8, 0x3e718, indexCPS2Sprites_ChunLi, 0x11 },
    { L"Gambit CS Icon",            0x3e638, 0x3e658, indexCPS2Sprites_Gambit, 0x11 },
    { L"Hulk CS Icon",              0x3e5f8, 0x3e618, indexCPS2Sprites_Hulk, 0x11 },
    { L"Jin CS Icon",               0x3e718, 0x3e738, indexCPS2Sprites_Jin, 0x11 },
    { L"Megaman CS Icon",           0x3e798, 0x3e7b8, indexCPS2Sprites_Megaman, 0x11 },
    { L"Morrigan CS Icon",          0x3e778, 0x3e798, indexCPS2Sprites_Morrigan, 0x11 },
    // The Roll CSI is unused
    { L"Ryu CS Icon",               0x3e6b8, 0x3e6d8, indexCPS2Sprites_Ryu, 0x11 },
    { L"Spider-Man CS Icon",        0x3e678, 0x3e698, indexCPS2Sprites_Spidey, 0x11 },
    { L"Strider Hiryu CS Icon",     0x3e758, 0x3e778, indexCPS2Sprites_Strider, 0x11 },
    { L"Venom CS Icon",             0x3e658, 0x3e678, indexCPS2Sprites_Venom, 0x11 },
    { L"War Machine CS Icon",       0x3e5b8, 0x3e5d8, indexCPS2Sprites_WarMachine, 0x11 },
    { L"Wolverine CS Icon",         0x3e618, 0x3e638, indexCPS2Sprites_Wolverine, 0x11 },
    { L"Zangief CS Icon",           0x3e738, 0x3e758, indexCPS2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset MVC_A_CSIS_NEXT_PALETTES[] = // Campaign Cards
{
    { L"Captain America", 0x3e5da + 0x14188, 0x3e5fa + 0x14188, indexCPS2Sprites_CapAm, 0x11 },
    { L"Captain Commando", 0x3e6da + 0x14188, 0x3e6fa + 0x14188, indexCPS2Sprites_CapCom, 0x11 },
    { L"Chun-Li",        0x3e6fa + 0x14188, 0x3e71a + 0x14188, indexCPS2Sprites_ChunLi, 0x11 },
    { L"Gambit",         0x3e63a + 0x14188, 0x3e65a + 0x14188, indexCPS2Sprites_Gambit, 0x11 },
    { L"Hulk",           0x3e5fa + 0x14188, 0x3e61a + 0x14188, indexCPS2Sprites_Hulk, 0x11 },
    { L"Jin",            0x3e71a + 0x14188, 0x3e73a + 0x14188, indexCPS2Sprites_Jin, 0x11 },
    { L"Megaman",        0x3e79a + 0x14188, 0x3e7ba + 0x14188, indexCPS2Sprites_Megaman, 0x11 },
    { L"Morrigan",       0x3e77a + 0x14188, 0x3e79a + 0x14188, indexCPS2Sprites_Morrigan, 0x11 },
    // The Roll Next is unused
    { L"Ryu",            0x3e6ba + 0x14188, 0x3e6da + 0x14188, indexCPS2Sprites_Ryu, 0x11 },
    { L"Spider-Man",     0x3e67a + 0x14188, 0x3e69a + 0x14188, indexCPS2Sprites_Spidey, 0x11 },
    { L"Strider Hiryu",  0x3e75a + 0x14188, 0x3e77a + 0x14188, indexCPS2Sprites_Strider, 0x11 },
    { L"Venom",          0x3e65a + 0x14188, 0x3e67a + 0x14188, indexCPS2Sprites_Venom, 0x11 },
    { L"War Machine",    0x3e5ba + 0x14188, 0x3e5da + 0x14188, indexCPS2Sprites_WarMachine, 0x11 },
    { L"Wolverine",      0x3e61a + 0x14188, 0x3e63a + 0x14188, indexCPS2Sprites_Wolverine, 0x11 },
    { L"Zangief",        0x3e73a + 0x14188, 0x3e75a + 0x14188, indexCPS2Sprites_Zangief, 0x11 },
    { L"Campaign Card Back", 0x52322, 0x52342, indexCPS2Sprites_MVCAssets, 0x20 },
};

const sGame_PaletteDataset MVC_A_BONUS_PALETTES[] =
{
    { L"Life Bars & Meter Count", 0x479E2, 0x47A02, indexCPS2Sprites_MVCAssets, 0x50 },
    { L"In-Game Text (Hit Counter, Stage Number, etc)", 0x47442, 0x47462, indexCPS2Sprites_MVCAssets, 0x51 },
    { L"In-Game Text (Score, Play Status, Level, Character Names)", 0x47422, 0x47442, indexCPS2Sprites_MVCAssets, 0x52 },
    { L"Test Menu Text",        0x3E4F8, 0x3E538, indexCPS2Sprites_MVCAssets, 0x53 },
    { L"Marvel License Text",   0x3E558, 0x3E578, indexCPS2Sprites_MVCAssets, 0x54 },
    { L"QSound Patent Text",    0x3E578, 0x3E598, indexCPS2Sprites_MVCAssets, 0x55 },
    { L"Hitsparks", 0x590E2, 0x59122 },

    { L"Blue Super BG",                         0x423E4, 0x42424 },
    { L"Yellow Crossover BG",                   0x42444, 0x42484 },
    { L"Red Duo BG (Flickering off)",           0x46A04, 0x46A44 },
    { L"Level 3 Super BG",                      0x42564, 0x425C4 },
    { L"Character Select Background - Space",   0x3EBF8, 0x3ECB8 },
    { L"Character Select Background - Earth",   0x3E7D8, 0x3E918 },

    { L"Portrait Window (VS screen)", 0x55D62, 0x55D82 },
    { L"Red 'VS' text (VS screen)", 0x53C22, 0x53E22 },

    { L"M. Bison (Chun-Li ending)", 0x597A2, 0x597C2, indexCPS2Sprites_Bison, 0x00 },

    { L"Timer 1", 0x47A8A, 0x47A96 },
    { L"Timer 2", 0x47AAA, 0x47AB6 },
    { L"Timer 3", 0x47ACA, 0x47AD6 },
    { L"Timer 4", 0x47AEA, 0x47AF6 },
    { L"Timer 5", 0x47B0A, 0x47B16 },
    { L"Timer 6", 0x47B2A, 0x47B36 },
    { L"Timer 7", 0x47B4A, 0x47B56 },
    { L"Timer 8", 0x47B6A, 0x47B76 },
    { L"Timer 9", 0x47B8A, 0x47B96 },
    { L"Timer 10", 0x47BAA, 0x47BB6 },
    { L"Timer 11", 0x47BCA, 0x47BD6 },
    { L"Timer 12", 0x47BEA, 0x47BF6 },
    { L"Timer 13", 0x47C0A, 0x47C16 },
    { L"Timer 14", 0x47C2A, 0x47C36 },
    { L"Timer 15", 0x47C4A, 0x47C56 },
    { L"Timer 16", 0x47C6A, 0x47C76 },
    { L"Timer 17", 0x47C8A, 0x47C96 },
    { L"Timer 18", 0x47CAA, 0x47CB6 },
    { L"Timer 19", 0x47CCA, 0x47CD6 },
    { L"Timer 20", 0x47CEA, 0x47CF6 },
    { L"Timer 21", 0x47D0A, 0x47D16 },
    { L"Timer 22", 0x47D2A, 0x47D36 },
    { L"Timer 23", 0x47D4A, 0x47D56 },
    { L"Timer 24", 0x47D6A, 0x47D76 },
};

const sGame_PaletteDataset MVC_A_BONUS_TITLES_PALETTES[] =
{
    { L"Intro Captain Commando",    0x40A84, 0x40B84, indexCPS2Sprites_MVCAssets, 0x7b },
    { L"Intro Spiderman",           0x409C4, 0x40A64, indexCPS2Sprites_MVCAssets, 0x7c },
    { L"Intro Cliff Pt1",           0x40004, 0x40204, indexCPS2Sprites_MVCAssets, 0x7d, &pairNextAndNext },
    { L"Intro Cliff Pt2",           0x40204, 0x40404, indexCPS2Sprites_MVCAssets, 0x7e },
    { L"Intro Cliff Pt3",           0x5AC22, 0x5AD62, indexCPS2Sprites_MVCAssets, 0x7f },
};

const sGame_PaletteDataset MVC_A_BONUS_NAME_PALETTES[] =
{
    { L"Captain America Name",  0x52442, 0x52462, indexCPS2Sprites_MVCAssets, 0x80 },
    { L"Captain Commando Name", 0x52542, 0x52562, indexCPS2Sprites_MVCAssets, 0x81 },
    { L"Chun-Li Name",          0x52562, 0x52582, indexCPS2Sprites_MVCAssets, 0x82 },
    { L"Gambit Name",           0x524A2, 0x524C2, indexCPS2Sprites_MVCAssets, 0x83 },
    { L"Hulk Name",             0x52462, 0x52482, indexCPS2Sprites_MVCAssets, 0x84 },
    { L"Jin Name",              0x52582, 0x525A2, indexCPS2Sprites_MVCAssets, 0x85 },
    { L"Megaman Name",          0x52622, 0x52642, indexCPS2Sprites_MVCAssets, 0x86 },
    { L"Morrigan Name",         0x525E2, 0x52602, indexCPS2Sprites_MVCAssets, 0x87 },
    { L"Onslaught Name",        0x52402, 0x52422, indexCPS2Sprites_MVCAssets, 0x88 },
    { L"Rockman Name",          0x52602, 0x52622, indexCPS2Sprites_MVCAssets, 0x89 },
    { L"Roll Name",             0x52502, 0x52522, indexCPS2Sprites_MVCAssets, 0x8a },
    { L"Ryu Name",              0x52522, 0x52542, indexCPS2Sprites_MVCAssets, 0x8b },
    { L"Spiderman Name",        0x524E2, 0x52502, indexCPS2Sprites_MVCAssets, 0x8c },
    { L"Strider JP Name",       0x525C2, 0x525E2, indexCPS2Sprites_MVCAssets, 0x8d },
    { L"Strider US Name",       0x52642, 0x52662, indexCPS2Sprites_MVCAssets, 0x8e },
    { L"Venom Name",            0x524C2, 0x524E2, indexCPS2Sprites_MVCAssets, 0x8f },
    { L"War Machine Name",      0x52422, 0x52442, indexCPS2Sprites_MVCAssets, 0x90 },
    { L"Wolverine Name",        0x52482, 0x524A2, indexCPS2Sprites_MVCAssets, 0x91 },
    { L"Zangief Name",          0x525A2, 0x525C2, indexCPS2Sprites_MVCAssets, 0x92 },
};

const sGame_PaletteDataset MVC_A_BLUEMOON_STAGE_PALETTES[] =
{
    { L"Sky 1",                 0x3ACF8, 0x3AEF8, indexCPS2Sprites_MVCAssets, 0x68, &pairFullyLinkedNode },
    { L"Sky 2",                 0x3AEF8, 0x3B0F8, indexCPS2Sprites_MVCAssets, 0x69 },
    { L"Left Side Ruins 1",     0x321F8, 0x323F8, indexCPS2Sprites_MVCAssets, 0x6a },
    { L"Left Side Ruins 2",     0x323F8, 0x325F8, indexCPS2Sprites_MVCAssets, 0x6b },
    { L"Right Side Ruins 1",    0x36198, 0x36398, indexCPS2Sprites_MVCAssets, 0x6d },
    { L"Right Side Ruins 2",    0x36398, 0x36598, indexCPS2Sprites_MVCAssets, 0x6c },
    { L"Sprites",               0x518A2, 0x51942, indexCPS2Sprites_MVCAssets, 0x6e },
};

const sGame_PaletteDataset MVC_A_COUNCIL_STAGE_PALETTES[] =
{
    { L"Scary Big Guy 1",           0x318F8, 0x31AF8, indexCPS2Sprites_MVCAssets, 0x5c, &pairFullyLinkedNode },
    { L"Scary Big Guy 2",           0x31AF8, 0x31CF8, indexCPS2Sprites_MVCAssets, 0x5d },
    { L"Center Light",              0x31CF8, 0x31D58, indexCPS2Sprites_MVCAssets, 0x5e },
    { L"Big World People 1",        0x3A4F8, 0x3A6F8, indexCPS2Sprites_MVCAssets, 0x5f },
    { L"Big World People 2",        0x3A6F8, 0x3A8F8, indexCPS2Sprites_MVCAssets, 0x60 },
    { L"Images 1",                  0x35118, 0x35318, indexCPS2Sprites_MVCAssets, 0x61 },
    { L"Images 2",                  0x35318, 0x35518, indexCPS2Sprites_MVCAssets, 0x62 },
    { L"Images 3",                  0x35518, 0x35718, indexCPS2Sprites_MVCAssets, 0x63 },
    { L"Images 4",                  0x35718, 0x35918, indexCPS2Sprites_MVCAssets, 0x64 },
    { L"Images 5",                  0x35918, 0x35B18, indexCPS2Sprites_MVCAssets, 0x65 },
    { L"Images 6",                  0x35b18, 0x35BD8, indexCPS2Sprites_MVCAssets, 0x66 },
    { L"Standers Floaters Craters", 0x51762, 0x51822, indexCPS2Sprites_MVCAssets, 0x67 },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_STAGE_PALETTES[] =
{
    { L"Sky",                   0x314F8, 0x31658, indexCPS2Sprites_MVCAssets, 0x56, &pairFullyLinkedNode },
    { L"Foundry 1",             0x34D18, 0x34F18, indexCPS2Sprites_MVCAssets, 0x57 },
    { L"Foundry 2",             0x34F18, 0x35118, indexCPS2Sprites_MVCAssets, 0x58 },
    { L"Ground/Machines 1",     0x3A0F8, 0x3A2F8, indexCPS2Sprites_MVCAssets, 0x59 },
    { L"Ground/Machines 2",     0x3A2F8, 0x3A4F8, indexCPS2Sprites_MVCAssets, 0x5a },
    { L"Wahwee Robot Crater",   0x516C2, 0x51762, indexCPS2Sprites_MVCAssets, 0x5b },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_STAGE_PALETTES[] =
{
    { L"Sky BG",                0x3E0F8, 0x3E258, indexCPS2Sprites_MVCAssets, 0x93, &pairFullyLinkedNode },
    { L"City Skyline MG 2/2",   0x334B8, 0x336B8, indexCPS2Sprites_MVCAssets, 0x95 },
    { L"City Skyline MG 1/2",   0x332B8, 0x334B8, indexCPS2Sprites_MVCAssets, 0x94 },
    { L"Side Tech Object",      0x51F62, 0x51FA2, indexCPS2Sprites_MVCAssets, 0x96 },
    { L"Floor FG",              0x3E298, 0x3E2B8, indexCPS2Sprites_MVCAssets, 0x97 },
    { L"Ground Splat",          0x51FE2, 0x52002, indexCPS2Sprites_MVCAssets, 0x98 },
};

const sGame_PaletteDataset MVC_A_ZABEL_STAGE_PALETTES[] =
{
    { L"Background 1",  0x397F8, 0x399F8, indexCPS2Sprites_MVCAssets, 0x70, &pairFullyLinkedNode },
    { L"Background 2 (Unused)",  0x399F8, 0x39BF8 },
    { L"Background 3",  0x39BF8, 0x39C78, indexCPS2Sprites_MVCAssets, 0x6f },

    { L"Middle 1",      0x34218, 0x34418, indexCPS2Sprites_MVCAssets, 0x73 },
    { L"Middle 2",      0x34418, 0x34618, indexCPS2Sprites_MVCAssets, 0x72 },
    { L"Middle 3",      0x34618, 0x346B8, indexCPS2Sprites_MVCAssets, 0x71 },

    { L"Foreground 1",  0x30B18, 0x30d18, indexCPS2Sprites_MVCAssets, 0x76 },
    { L"Foreground 2",  0x30D18, 0x30f18, indexCPS2Sprites_MVCAssets, 0x75 },
    { L"Foreground 3",  0x30f18, 0x310F8, indexCPS2Sprites_MVCAssets, 0x74 },

    { L"Sprites",       0x51582, 0x51622, indexCPS2Sprites_MVCAssets, 0x77 },
};

const sDescTreeNode MVC_A_CAPAM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_P,  ARRAYSIZE(MVC_A_CAPAM_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_K,   ARRAYSIZE(MVC_A_CAPAM_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_CAPAM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_CAPCOM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_P, ARRAYSIZE(MVC_A_CAPCOM_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_K,  ARRAYSIZE(MVC_A_CAPCOM_PALETTES_K) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_EXTRAS,   ARRAYSIZE(MVC_A_CAPCOM_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_CAPCOM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_CHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_P, ARRAYSIZE(MVC_A_CHUNLI_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_K,  ARRAYSIZE(MVC_A_CHUNLI_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_CHUNLI_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_SHADOWLADY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_P, ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_K,  ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_GAMBIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_P, ARRAYSIZE(MVC_A_GAMBIT_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_K,  ARRAYSIZE(MVC_A_GAMBIT_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_GAMBIT_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_HULK_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_P,   ARRAYSIZE(MVC_A_HULK_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_K,    ARRAYSIZE(MVC_A_HULK_PALETTES_K) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_EXTRAS, ARRAYSIZE(MVC_A_HULK_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_STATUSEFFECTS,  ARRAYSIZE(MVC_A_HULK_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_ORANGEHULK_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_P, ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_K,  ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_JIN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_P,    ARRAYSIZE(MVC_A_JIN_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_K,     ARRAYSIZE(MVC_A_JIN_PALETTES_K) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_EXTRAS,  ARRAYSIZE(MVC_A_JIN_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_STATUSEFFECTS,   ARRAYSIZE(MVC_A_JIN_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_MEGAMAN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_P,    ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_K,     ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_K) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_EXTRAS,  ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_MORRIGAN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_P,   ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_K,    ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_K) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_EXTRAS, ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_LILITH_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_P, ARRAYSIZE(MVC_A_LILITH_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_K,  ARRAYSIZE(MVC_A_LILITH_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_LILITH_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_ROLL_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_P,   ARRAYSIZE(MVC_A_ROLL_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_K,    ARRAYSIZE(MVC_A_ROLL_PALETTES_K) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_EXTRAS, ARRAYSIZE(MVC_A_ROLL_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_STATUSEFFECTS,  ARRAYSIZE(MVC_A_ROLL_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_RYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_P,    ARRAYSIZE(MVC_A_RYU_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_K,     ARRAYSIZE(MVC_A_RYU_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_STATUSEFFECTS,   ARRAYSIZE(MVC_A_RYU_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_SPIDEY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_P, ARRAYSIZE(MVC_A_SPIDEY_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_K,  ARRAYSIZE(MVC_A_SPIDEY_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_SPIDEY_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_STRIDER_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_P,    ARRAYSIZE(MVC_A_STRIDER_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_K,     ARRAYSIZE(MVC_A_STRIDER_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_STATUSEFFECTS,   ARRAYSIZE(MVC_A_STRIDER_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_VENOM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_P,  ARRAYSIZE(MVC_A_VENOM_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_K,   ARRAYSIZE(MVC_A_VENOM_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_VENOM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_HYPERVENOM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_P, ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_K,  ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_WARMACHINE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_P, ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_K,  ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_GOLDWARMACHINE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_P, ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_K,  ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_K) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_EXTRAS,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_STATUSEFFECTS,    ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_WOLVERINE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_P,  ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_K,   ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_GIEF_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_P,                   ARRAYSIZE(MVC_A_GIEF_PALETTES_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_K,                    ARRAYSIZE(MVC_A_GIEF_PALETTES_K) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_STATUSEFFECTS,  ARRAYSIZE(MVC_A_GIEF_PALETTES_STATUSEFFECTS) },
};

const sDescTreeNode MVC_A_ASSIST_COLLECTION[] =
{
    { L"Assists",       DESC_NODETYPE_TREE, (void*)MVC_A_ASSIST_PALETTES,       ARRAYSIZE(MVC_A_ASSIST_PALETTES) },
    { L"Assist Icons",  DESC_NODETYPE_TREE, (void*)MVC_A_ASSISTICON_PALETTES,   ARRAYSIZE(MVC_A_ASSISTICON_PALETTES) },
};

const sDescTreeNode MVC_A_ONSLAUGHT_COLLECTION[] =
{
    { L"Charles", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_CHARLES,       ARRAYSIZE(MVC_A_ONSLAUGHT_CHARLES) },
    { L"Phase 1", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PHASE1,        ARRAYSIZE(MVC_A_ONSLAUGHT_PHASE1) },
    { L"Phase 2", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PHASE2,        ARRAYSIZE(MVC_A_ONSLAUGHT_PHASE2) },
    { L"Attack Extras", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_EXTRAS, ARRAYSIZE(MVC_A_ONSLAUGHT_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PALETTES_STATUSEFFECTS, ARRAYSIZE(MVC_A_ONSLAUGHT_PALETTES_STATUSEFFECTS) },
};


const sDescTreeNode MVC_A_PORTRAITS_COLLECTION[] =
{
    { L"Super Portraits",              DESC_NODETYPE_TREE, (void*)MVC_A_SUPERPORT_PALETTES, ARRAYSIZE(MVC_A_SUPERPORT_PALETTES) },
    { L"Character Select Portraits",   DESC_NODETYPE_TREE, (void*)MVC_A_CSP_PALETTES,       ARRAYSIZE(MVC_A_CSP_PALETTES) },
    { L"Victory Screen Portraits",     DESC_NODETYPE_TREE, (void*)MVC_A_VSP_PALETTES,       ARRAYSIZE(MVC_A_VSP_PALETTES) },
    { L"Character Name Text",          DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_NAME_PALETTES,       ARRAYSIZE(MVC_A_BONUS_NAME_PALETTES) },
    { L"Character Select Icons",       DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_PALETTES,      ARRAYSIZE(MVC_A_CSIS_PALETTES) },
    { L"Campaign Cards",               DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_NEXT_PALETTES, ARRAYSIZE(MVC_A_CSIS_NEXT_PALETTES) },
};

const sDescTreeNode MVC_A_BONUS_COLLECTION[] =
{
   { L"Bonus",                         DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_PALETTES,            ARRAYSIZE(MVC_A_BONUS_PALETTES) },
   { L"Title/Select Screen",           DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_TITLES_PALETTES,     ARRAYSIZE(MVC_A_BONUS_TITLES_PALETTES) },
   { L"Blue Area of the Moon Stage",   DESC_NODETYPE_TREE, (void*)MVC_A_BLUEMOON_STAGE_PALETTES,   ARRAYSIZE(MVC_A_BLUEMOON_STAGE_PALETTES) },
   { L"Council Stage",                 DESC_NODETYPE_TREE, (void*)MVC_A_COUNCIL_STAGE_PALETTES,    ARRAYSIZE(MVC_A_COUNCIL_STAGE_PALETTES) },
   { L"Megaman Stage",                 DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_STAGE_PALETTES,    ARRAYSIZE(MVC_A_MEGAMAN_STAGE_PALETTES) },
   { L"Onslaught Stage",               DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_STAGE_PALETTES,  ARRAYSIZE(MVC_A_ONSLAUGHT_STAGE_PALETTES) },
   { L"Zabel Stage",                   DESC_NODETYPE_TREE, (void*)MVC_A_ZABEL_STAGE_PALETTES,      ARRAYSIZE(MVC_A_ZABEL_STAGE_PALETTES) },
};

const sDescTreeNode MVC_A_UNITS[] =
{
    { L"Captain America",              DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_COLLECTION,           ARRAYSIZE(MVC_A_CAPAM_COLLECTION) },
    { L"Captain Commando",             DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_COLLECTION,          ARRAYSIZE(MVC_A_CAPCOM_COLLECTION) },
    { L"Chun-Li",                      DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_COLLECTION,          ARRAYSIZE(MVC_A_CHUNLI_COLLECTION) },
    { L"Shadow Lady",                  DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_COLLECTION,      ARRAYSIZE(MVC_A_SHADOWLADY_COLLECTION) },
    { L"Gambit",                       DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_COLLECTION,          ARRAYSIZE(MVC_A_GAMBIT_COLLECTION) },
    { L"Hulk",                         DESC_NODETYPE_TREE, (void*)MVC_A_HULK_COLLECTION,            ARRAYSIZE(MVC_A_HULK_COLLECTION) },
    { L"Orange Hulk",                  DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_COLLECTION,      ARRAYSIZE(MVC_A_ORANGEHULK_COLLECTION) },
    { L"Jin",                          DESC_NODETYPE_TREE, (void*)MVC_A_JIN_COLLECTION,             ARRAYSIZE(MVC_A_JIN_COLLECTION) },
    { L"Megaman",                      DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_COLLECTION,         ARRAYSIZE(MVC_A_MEGAMAN_COLLECTION) },
    { L"Morrigan",                     DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_COLLECTION,        ARRAYSIZE(MVC_A_MORRIGAN_COLLECTION) },
    { L"Lilith",                       DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_COLLECTION,          ARRAYSIZE(MVC_A_LILITH_COLLECTION) },
    { L"Roll",                         DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_COLLECTION,            ARRAYSIZE(MVC_A_ROLL_COLLECTION) },
    { L"Ryu",                          DESC_NODETYPE_TREE, (void*)MVC_A_RYU_COLLECTION,             ARRAYSIZE(MVC_A_RYU_COLLECTION) },
    { L"Spider-Man",                   DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_COLLECTION,          ARRAYSIZE(MVC_A_SPIDEY_COLLECTION) },
    { L"Strider",                      DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_COLLECTION,         ARRAYSIZE(MVC_A_STRIDER_COLLECTION) },
    { L"Venom",                        DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_COLLECTION,           ARRAYSIZE(MVC_A_VENOM_COLLECTION) },
    { L"Hyper Venom",                  DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_COLLECTION,      ARRAYSIZE(MVC_A_HYPERVENOM_COLLECTION) },
    { L"War Machine",                  DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_COLLECTION,      ARRAYSIZE(MVC_A_WARMACHINE_COLLECTION) },
    { L"Gold War Machine",             DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_COLLECTION,  ARRAYSIZE(MVC_A_GOLDWARMACHINE_COLLECTION) },
    { L"Wolverine",                    DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_COLLECTION,       ARRAYSIZE(MVC_A_WOLVERINE_COLLECTION) },
    { L"Zangief",                      DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_COLLECTION,            ARRAYSIZE(MVC_A_GIEF_COLLECTION) },

    { L"Assists",                      DESC_NODETYPE_TREE, (void*)MVC_A_ASSIST_COLLECTION,          ARRAYSIZE(MVC_A_ASSIST_COLLECTION) },
    { L"Onslaught",                    DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_COLLECTION,       ARRAYSIZE(MVC_A_ONSLAUGHT_COLLECTION) },

    { L"Portraits & Icons",             DESC_NODETYPE_TREE, (void*)MVC_A_PORTRAITS_COLLECTION,       ARRAYSIZE(MVC_A_PORTRAITS_COLLECTION) },
    { L"Bonus and Stages",              DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_COLLECTION,           ARRAYSIZE(MVC_A_BONUS_COLLECTION) },
};

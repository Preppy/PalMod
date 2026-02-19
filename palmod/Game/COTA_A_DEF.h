#pragma once

const std::vector<uint16_t> COTA_A_IMGIDS_USED =
{
    indexCPS2Sprites_Colossus,     // 0x32
    indexCPS2Sprites_Cyclops,      // 0x06
    indexCPS2Sprites_Iceman,       // 0x09
    indexCPS2Sprites_Juggy,        // 0x29, // Juggernaut
    indexCPS2Sprites_Magneto,      // 0x2C
    indexCPS2Sprites_OmegaRed,     // 0x30
    indexCPS2Sprites_Psylocke,     // 0x08
    indexCPS2Sprites_Sentinel,     // 0x34
    indexCPS2Sprites_SilverSamurai, // 0x2F
    indexCPS2Sprites_Spiral,       // 0x31
    indexCPS2Sprites_Storm,        // 0x2A
    indexCPS2Sprites_Wolverine,    // 0x07
    indexCPS2Sprites_Akuma,        // 0x1E, // Gouki
    indexCPS2Sprites_STAkuma,      // 0x57 - ST Akuma
    indexCPS2Sprites_COTAAssets,   // 0x56 - HUD, stages, etc
};

#pragma region SecondaryPaletteEffects

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Colossus =
{
    // Shoulder tackle shadows
    { SUPP_NODE, 0x03, 4,
        MOD_LUM, 1, 15, 4 + NEG },
    // Super Armor Shine 1-7
    { SUPP_NODE, 0x04, 32,
        MOD_LUM, 02, 5, 13 + NEG,
        MOD_LUM, 12, 3, 13 + NEG,
        MOD_WHITE, 7, 1 },
    { SUPP_NODE, 0x05, 32,
        MOD_LUM, 02, 5, 5 + NEG,
        MOD_LUM, 12, 3, 5 + NEG,
        MOD_WHITE, 6, 1 },
    { SUPP_NODE, 0x06, 32,
        MOD_LUM, 02, 5, 8,
        MOD_LUM, 12, 3, 8,
        MOD_WHITE, 5, 1 },
    { SUPP_NODE, 0x07, 32,
        MOD_LUM, 02, 5, 13,
        MOD_LUM, 12, 3, 13,
        MOD_WHITE, 4, 1 },
    { SUPP_NODE, 0x08, 32,
        MOD_LUM, 02, 5, 29,
        MOD_LUM, 12, 3, 29,
        MOD_WHITE, 3, 1 },
    { SUPP_NODE, 0x09, 32,
        MOD_LUM, 02, 5, 46,
        MOD_LUM, 12, 3, 46,
        MOD_WHITE, 2, 1 },
    { SUPP_NODE, 0x0a, 32 },

    // Shine 1-8: skips the first stance frame from mvc2
    { SUPP_NODE, 0x0b, 32,
        MOD_WHITE, 2, 6 },
    { SUPP_NODE, 0x0c, 32,
        MOD_COPY, 3, 2, 6 },
    { SUPP_NODE, 0x0d, 32,
        MOD_COPY, 2, 2, 4 },
    { SUPP_NODE, 0x0e, 32,
        MOD_WHITE, 3, 1 },
    { SUPP_NODE, 0x0f, 32,
        MOD_COPY, 4, 1, 7 },
    { SUPP_NODE, 0x10, 32,
        MOD_COPY, 3, 1, 6 },
    { SUPP_NODE, 0x11, 32,
        MOD_COPY, 2, 1, 5 },
    { SUPP_NODE, 0x12, 32,
        MOD_COPY, 2, 1, 4 },
    // Power Dive 1-7
    { SUPP_NODE, 0x13, 32,
        MOD_LUM, 1, 15, 31 },
    { SUPP_NODE, 0x14, 32,
        MOD_LUM, 1, 15, 45 },
    // 0x15 is just full white always: no need to change
    { SUPP_NODE, 0x16, 32,
        MOD_LUM, 1, 15, NEG + 18 },

    // I'm skipping these color moving tweaks for now
    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x16, 32, 0x1B, 32, 9, 1, 8 },
    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x16, 32, 0x1B, 32, 3, 1, 2 },

    { SUPP_NODE, 0x17, 32,
        MOD_LUM, 1, 15, NEG + 13 },

    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x17, 32, 0x1C, 32, 9, 1, 8 },
    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x17, 32, 0x1C, 32, 3, 1, 2 },

    { SUPP_NODE, 0x18, 32,
        MOD_LUM, 1, 15, NEG + 6 },

    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x18, 32, 0x1D, 32, 9, 1, 8 },
    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x18, 32, 0x1D, 32, 3, 1, 6 },
    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x18, 32, 0x1D, 32, 4, 1, 7 },
    //{ SUPP_NODE_ABSOL | SUPP_NODE_EX, 0x18, 32, 0x1D, 32, 3, 1, 2 },

    { SUPP_NODE, 0x19, 32 },

    // HP Shine 1-10
    { SUPP_NODE, 0x1a, 32,
        MOD_LUM, 1, 15, NEG + 5 },
    { SUPP_NODE, 0x1b, 32,
        MOD_LUM, 1, 15, 25 },
    { SUPP_NODE, 0x1c, 32 },
    { SUPP_NODE, 0x1d, 32,
        MOD_LUM, 2, 14, NEG + 5,
        MOD_WHITE, 7, 1 },
    { SUPP_NODE, 0x1e, 32,
        MOD_LUM, 2, 14, NEG + 8,
        MOD_WHITE, 6, 1 },
    { SUPP_NODE, 0x1f, 32,
        MOD_LUM, 2, 14, NEG + 4,
        MOD_WHITE, 5, 1 },
    { SUPP_NODE, 0x20, 32,
        MOD_WHITE, 4, 1, },
    { SUPP_NODE, 0x21, 32,
        MOD_LUM, 2, 14, 30 },
    { SUPP_NODE, 0x22, 32,
        MOD_LUM, 2, 14, 45,
        MOD_LUM, 07, 1, NEG + 7,
        MOD_SAT, 07, 1, 50 },
    { SUPP_NODE, 0x23, 32 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Cyclops =
{
    // Mega Optic Blast Stance
    // default color
    { SUPP_NODE, 0x04, 2 },
    // default color with red tint
    { SUPP_NODE, 0x05, 2,
        MOD_TINT, 1, 15, 1, 3, NEG + 1, NEG + 1 },
        
        // there are 8 intro frames
    { SUPP_NODE, 0x06, 8,
        MOD_LUM, 1, 15, NEG + 3 },
    { SUPP_NODE, 0x07, 8,
        MOD_LUM, 1, 15, NEG + 7 },
    { SUPP_NODE, 0x08, 8,
        MOD_LUM, 1, 15, NEG + 11 },
    { SUPP_NODE, 0x09, 8,
        MOD_LUM, 1, 15, NEG + 17 },
    { SUPP_NODE, 0x0a, 8,
        MOD_LUM, 1, 15, NEG + 24 },
    { SUPP_NODE, 0x0b, 8,
        MOD_LUM, 1, 15, NEG + 30 },
    { SUPP_NODE, 0x0c, 8,
        MOD_LUM, 1, 15, NEG + 33 },
    { SUPP_NODE, 0x0d, 8,
        MOD_LUM, 1, 15, NEG + 39 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Iceman =
{
    // Glimmer frame

    // Iceballs: copy main sprite
    { SUPP_NODE, 0x01, 8 },

    // Bobby Drake taunt: normal plus face colors
    // 6 colors for costume, and then the belt
    //{ SUPP_NODE_EX, Dest Start, Dest Inc, Src Start, Src Amt, Dst Index
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x02, 8,
            MOD_COPY, 1, 1, 1,
            MOD_COPY, 3, 1, 2,
            MOD_COPY, 5, 1, 3,
            MOD_COPY, 7, 1, 4,
            MOD_COPY, 9, 1, 5,
            MOD_COPY, 10, 1, 6,
            MOD_COPY, 11, 4, 11 },
        // Stance Frame: copy main sprite
        // 7 shine frames, but the second (0x22) is pure white
    { SUPP_NODE, 0x03, 7 },
    // solid white frame here
    // We need to duplicate some pixels here
    { SUPP_NODE, 0x05, 7,
        MOD_COPY, 11, 1, 9,
        MOD_COPY, 11, 1, 10 },
    { SUPP_NODE, 0x06, 7,
        MOD_COPY, 11, 1, 7,
        MOD_COPY, 11, 1, 8 },
    { SUPP_NODE, 0x07, 7,
        MOD_COPY, 1, 2, 5 },
    { SUPP_NODE, 0x08, 7,
        MOD_COPY, 11, 1, 3,
        MOD_COPY, 11, 1, 4 },
    { SUPP_NODE, 0x09, 7,
        MOD_COPY, 11, 1, 1,
        MOD_COPY, 11, 1, 2 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_OmegaRed =
{
    //Omega Red: intro frames
    { SUPP_NODE, 0x04, 4,
            MOD_LUM, 1, 15, 25 + NEG },
    { SUPP_NODE, 0x05, 4,
            MOD_LUM, 1, 15, 12 + NEG },
    { SUPP_NODE, 0x06, 4,
            MOD_LUM, 1, 15, 9 + NEG },
    { SUPP_NODE, 0x07, 4,
            MOD_LUM, 1, 15, 5 + NEG },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Psylocke =
{
    // Glimmer frame
    { SUPP_NODE, 0x02, 4,
            MOD_LUM, 1, 15, 15 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_SilverSamurai =
{
    // Shadow frame
    { SUPP_NODE, 0x01, 8,
            MOD_LUM, 1, 15, 5 + NEG },
    // Shine frames 1-7
    { SUPP_NODE, 0x04, 8 },
    { SUPP_NODE, 0x05, 8,
            MOD_LUM, 8, 7, 10 + NEG },
    { SUPP_NODE, 0x06, 8,
            MOD_COPY, 7, 2, 13 },
    { SUPP_NODE, 0x07, 8,
            MOD_COPY, 7, 4, 11 },
    { SUPP_NODE, 0x08, 8,
            MOD_COPY, 7, 6, 10 },
    { SUPP_NODE, 0x09, 8 },
    { SUPP_NODE, 0x0a, 8,
            MOD_LUM, 1, 15, 5 + NEG },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Spiral =
{
    { SUPP_NODE, 0x01, 4,
            MOD_LUM, 1, 15, 25 },

        // Power-Up Enhance 1-6
    { SUPP_NODE, 0x04, 28 },
    { SUPP_NODE, 0x05, 28,
            MOD_SAT, 1, 1, 60,
            MOD_SAT, 6, 10, 60 },
    { SUPP_NODE, 0x06, 28,
            MOD_SAT, 2, 4, NEG + 80,
            MOD_LUM, 2, 4, NEG + 8 },
    { SUPP_NODE, 0x07, 28,
            MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
            MOD_TINT, 6, 3, 6, 2, 0, 0,
            MOD_TINT, 14, 2, 14, 2, 0, 0,
            MOD_TINT, 10, 4, 10, 8, 0, 0 },
    { SUPP_NODE, 0x08, 28,
            MOD_TINT, 2, 4, 2, 6, 0, 0,
            MOD_TINT, 6, 3, 6, 4, 0, 0,
            MOD_TINT, 14, 2, 14, 4, 0, 0,
            MOD_TINT, 10, 4, 10, 8, NEG + 2, NEG + 2 },
    { SUPP_NODE, 0x09, 28,
            MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
            MOD_TINT, 6, 3, 6, 2, 0, 0,
            MOD_TINT, 14, 2, 14, 2, 0, 0,
            MOD_TINT, 10, 4, 10, 10, 0, 0 },

        // Speed-up Enhance 1-6
    { SUPP_NODE, 0x0a, 28 },
    { SUPP_NODE, 0x0b, 28,
            MOD_LUM, 1, 15, 5 },
    { SUPP_NODE, 0x0c, 28,
            MOD_LUM, 1, 15, 10 },
    { SUPP_NODE, 0x0d, 28,
            MOD_LUM, 1, 15, 13 },
    { SUPP_NODE, 0x0e, 28,
            MOD_LUM, 1, 15, 23 },
    { SUPP_NODE, 0x0f, 28,
            MOD_LUM, 1, 15, 40 },

        // Metamorphosis Dance 1-12
    { SUPP_NODE, 0x10, 28 },

    { SUPP_NODE, 0x11, 28,
            MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
            MOD_TINT, 6, 3, 6, 4, 0, 0,
            MOD_TINT, 14, 2, 14, 4, 0, 0,
            MOD_TINT, 10, 4, 10, 2, 2, 4 },
    { SUPP_NODE, 0x12, 28,
            MOD_TINT, 2, 4, 2, 6, 0, 0,
            MOD_TINT, 6, 3, 6, 2, 0, 0,
            MOD_TINT, 14, 2, 14, 2, 0, 0,
            MOD_TINT, 10, 4, 10, 3, 5, NEG + 3 },
    { SUPP_NODE, 0x13, 28,
            MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
            MOD_TINT, 6, 3, 6, 4, 0, 0,
            MOD_TINT, 14, 2, 14, 4, 0, 0,
            MOD_TINT, 10, 4, 10, 5, 5, NEG + 3 },
    { SUPP_NODE, 0x14, 28,
            MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
            MOD_TINT, 6, 3, 6, 2, 0, 0,
            MOD_TINT, 14, 2, 14, 2, 0, 0,
            MOD_TINT, 10, 4, 10, 5, 5, NEG + 6 },
    { SUPP_NODE, 0x15, 28,
            MOD_TINT, 2, 4, 2, 6, 0, 0,
            MOD_TINT, 6, 3, 6, 4, 0, 0,
            MOD_TINT, 14, 2, 14, 4, 0, 0,
            MOD_TINT, 10, 4, 10, 5, 4, NEG + 4 },
    { SUPP_NODE, 0x16, 28,
            MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
            MOD_TINT, 6, 3, 6, 2, 0, 0,
            MOD_TINT, 14, 2, 14, 2, 0, 0,
            MOD_TINT, 10, 4, 10, 7, NEG + 1, NEG + 4 },
    { SUPP_NODE, 0x17, 28,
            MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
            MOD_TINT, 6, 3, 6, 4, 0, 0,
            MOD_TINT, 14, 2, 14, 4, 0, 0,
            MOD_TINT, 10, 4, 10, 10, NEG + 2, NEG + 2 },
    { SUPP_NODE, 0x18, 28,
            MOD_TINT, 2, 4, 2, 6, 0, 0,
            MOD_TINT, 6, 3, 6, 2, 0, 0,
            MOD_TINT, 14, 2, 14, 2, 0, 0,
            MOD_TINT, 10, 4, 10, 10, 0, 0 },
    { SUPP_NODE, 0x19, 28,
            MOD_TINT, 2, 4, 2, 5, NEG + 1, NEG + 1,
            MOD_TINT, 6, 3, 6, 4, 0, 0,
            MOD_TINT, 14, 2, 14, 4, 0, 0,
            MOD_TINT, 10, 4, 10, 2, NEG + 1, 9 },
    { SUPP_NODE, 0x1a, 28,
            MOD_TINT, 2, 4, 2, 4, NEG + 2, NEG + 2,
            MOD_TINT, 6, 3, 6, 2, 0, 0,
            MOD_TINT, 14, 2, 14, 2, 0, 0,
            MOD_TINT, 10, 4, 10, 2, 2, 13 },
    { SUPP_NODE, 0x1b, 28 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Storm =
{
        // Extra 3: darker
    { SUPP_NODE, 0x03, 28,
            MOD_LUM, 1, 15, NEG + 15 },
        // Ending Sprite
    { SUPP_NODE, 0x04, 28 },
        // Shine cycle 1-5
    { SUPP_NODE, 0x05, 28 },
    { SUPP_NODE, 0x06, 28,
            MOD_LUM, 1, 15, NEG + 15 },
    { SUPP_NODE, 0x07, 28,
            MOD_LUM, 1, 15, NEG + 8 },
    { SUPP_NODE, 0x08, 28,
            MOD_LUM, 1, 15, 10 },
    { SUPP_NODE, 0x09, 28 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Wolverine =
{
    // his berserker barrage trails a bit of his costume.
    { SUPP_NODE | SUPP_NODE_NOCOPY, 2, 8,
            MOD_COPY,  2, 1, 12,
            MOD_COPY, 11, 1, 13,
            MOD_COPY, 10, 1, 14,
            MOD_COPY,  9, 1, 15 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_COTA_Akuma =
{
    // Dash, teleport
    { SUPP_NODE, 0x01, 4,
        MOD_LUM, 1, 15, 10 + NEG },
    { SUPP_NODE, 0x02, 4,
        MOD_LUM, 1, 15, 20 + NEG },
};

const stPaletteProcessingInformation secondaryCOTACyclopsEffects{ paletteBuddy_COTA_Cyclops };
const stPaletteProcessingInformation secondaryCOTAColossusEffects{ paletteBuddy_COTA_Colossus };
const stPaletteProcessingInformation secondaryCOTAIcemanEffects{ paletteBuddy_COTA_Iceman };
const stPaletteProcessingInformation secondaryCOTAOmegaRedEffects{ paletteBuddy_COTA_OmegaRed };
const stPaletteProcessingInformation secondaryCOTAPsylockeEffects{ paletteBuddy_COTA_Psylocke };
const stPaletteProcessingInformation secondaryCOTASilverSamuraiEffects{ paletteBuddy_COTA_SilverSamurai };
const stPaletteProcessingInformation secondaryCOTASpiralEffects{ paletteBuddy_COTA_Spiral };
const stPaletteProcessingInformation secondaryCOTAStormEffects{ paletteBuddy_COTA_Storm };
const stPaletteProcessingInformation secondaryCOTAWolverineEffects{ paletteBuddy_COTA_Wolverine };
const stPaletteProcessingInformation secondaryCOTAAkumaEffects{ paletteBuddy_COTA_Akuma };

#pragma endregion

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P1[] =
{
    { L"P1",          0x2683c, 0x2685c, indexCPS2Sprites_Colossus, 0x00, nullptr, &secondaryCOTAColossusEffects },
    { L"P1 Extras 1: Armor Sparks", 0x2685c, 0x2687c },
    { L"P1 Extras 2", 0x2687c, 0x2689c },
    { L"P1 Shoulder Tackle Shadows", 0x2689c, 0x268bc, indexCPS2Sprites_Colossus },

    { L"P1 Super Armor Shine 1", 0x27e5c, 0x27e7c, indexCPS2Sprites_Colossus },
    { L"P1 Super Armor Shine 2", 0x27e7c, 0x27e9c, indexCPS2Sprites_Colossus },
    { L"P1 Super Armor Shine 3", 0x27e9c, 0x27ebc, indexCPS2Sprites_Colossus },
    { L"P1 Super Armor Shine 4", 0x27ebc, 0x27edc, indexCPS2Sprites_Colossus },
    { L"P1 Super Armor Shine 5", 0x27edc, 0x27efc, indexCPS2Sprites_Colossus },
    { L"P1 Super Armor Shine 6", 0x27efc, 0x27f1c, indexCPS2Sprites_Colossus },
    { L"P1 Super Armor Shine 7", 0x27f1c, 0x27f3c, indexCPS2Sprites_Colossus },

    { L"P1 Shine 1", 0x2801c, 0x2803c, indexCPS2Sprites_Colossus },
    { L"P1 Shine 2", 0x2803c, 0x2805c, indexCPS2Sprites_Colossus },
    { L"P1 Shine 3", 0x2805c, 0x2807c, indexCPS2Sprites_Colossus },
    { L"P1 Shine 4", 0x2807c, 0x2809c, indexCPS2Sprites_Colossus },
    { L"P1 Shine 5", 0x2809c, 0x280Bc, indexCPS2Sprites_Colossus },
    { L"P1 Shine 6", 0x280Bc, 0x280Dc, indexCPS2Sprites_Colossus },
    { L"P1 Shine 7", 0x280dc, 0x280fc, indexCPS2Sprites_Colossus },
    { L"P1 Shine 8", 0x280fc, 0x2811c, indexCPS2Sprites_Colossus },

    { L"P1 Power Dive 1", 0x2821c, 0x2823c, indexCPS2Sprites_Colossus },
    { L"P1 Power Dive 2", 0x2823c, 0x2825c, indexCPS2Sprites_Colossus },
    { L"P1 Power Dive 3", 0x2825c, 0x2827c, indexCPS2Sprites_Colossus },
    { L"P1 Power Dive 4", 0x2827c, 0x2829c, indexCPS2Sprites_Colossus },
    { L"P1 Power Dive 5", 0x2829c, 0x282bc, indexCPS2Sprites_Colossus },
    { L"P1 Power Dive 6", 0x282Bc, 0x282dc, indexCPS2Sprites_Colossus },
    { L"P1 Power Dive 7", 0x282Dc, 0x282fc, indexCPS2Sprites_Colossus },

    { L"P1 HP Shine 1", 0x283Dc, 0x283Fc, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 2", 0x283Fc, 0x2841c, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 3", 0x2841c, 0x2843c, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 4", 0x2843c, 0x2845c, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 5", 0x2845c, 0x2847c, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 6", 0x2847c, 0x2849c, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 7", 0x2849c, 0x284Bc, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 8", 0x284Bc, 0x284Dc, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 9", 0x284Dc, 0x284Fc, indexCPS2Sprites_Colossus },
    { L"P1 HP Shine 10", 0x284Fc, 0x2851c, indexCPS2Sprites_Colossus },
};

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P2[] =
{
    { L"P2",          0x268bc, 0x268Dc, indexCPS2Sprites_Colossus, 0x00, nullptr, &secondaryCOTAColossusEffects },
    { L"P2 Extras 1: Armor Sparks", 0x268dc, 0x268Fc },
    { L"P2 Extras 2", 0x268fc, 0x2691c },
    { L"P2 Shoulder Tackle Shadows", 0x2691c, 0x2693c, indexCPS2Sprites_Colossus }, // looks like P1 but confirmed this is correct

    { L"P2 Super Armor Shine 1", 0x27f3c, 0x27f5c, indexCPS2Sprites_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 Super Armor Shine 2", 0x27f5c, 0x27f7c, indexCPS2Sprites_Colossus },
    { L"P2 Super Armor Shine 3", 0x27f7c, 0x27f9c, indexCPS2Sprites_Colossus },
    { L"P2 Super Armor Shine 4", 0x27f9c, 0x27fbc, indexCPS2Sprites_Colossus },
    { L"P2 Super Armor Shine 5", 0x27fbc, 0x27fdc, indexCPS2Sprites_Colossus },
    { L"P2 Super Armor Shine 6", 0x27fdc, 0x27ffc, indexCPS2Sprites_Colossus },
    { L"P2 Super Armor Shine 7", 0x27ffc, 0x2801c, indexCPS2Sprites_Colossus },

    { L"P2 Shine 1", 0x2811c, 0x2813c, indexCPS2Sprites_Colossus },
    { L"P2 Shine 2", 0x2813c, 0x2815c, indexCPS2Sprites_Colossus },
    { L"P2 Shine 3", 0x2815c, 0x2817c, indexCPS2Sprites_Colossus },
    { L"P2 Shine 4", 0x2817c, 0x2819c, indexCPS2Sprites_Colossus },
    { L"P2 Shine 5", 0x2819c, 0x281bc, indexCPS2Sprites_Colossus },
    { L"P2 Shine 6", 0x281bc, 0x281dc, indexCPS2Sprites_Colossus },
    { L"P2 Shine 7", 0x281dc, 0x281fc, indexCPS2Sprites_Colossus },
    { L"P2 Shine 8", 0x281fc, 0x2821c, indexCPS2Sprites_Colossus },

    { L"P2 Power Dive 1", 0x282fc, 0x2831c, indexCPS2Sprites_Colossus },
    { L"P2 Power Dive 2", 0x2831c, 0x2833c, indexCPS2Sprites_Colossus },
    { L"P2 Power Dive 3", 0x2833c, 0x2835c, indexCPS2Sprites_Colossus },
    { L"P2 Power Dive 4", 0x2835c, 0x2837c, indexCPS2Sprites_Colossus },
    { L"P2 Power Dive 5", 0x2837c, 0x2839c, indexCPS2Sprites_Colossus },
    { L"P2 Power Dive 6", 0x2839c, 0x283bc, indexCPS2Sprites_Colossus },
    { L"P2 Power Dive 7", 0x283bc, 0x283dc, indexCPS2Sprites_Colossus },

    { L"P2 HP Shine 1", 0x2851c, 0x2853c, indexCPS2Sprites_Colossus },
    { L"P2 HP Shine 2", 0x2853c, 0x2855c, indexCPS2Sprites_Colossus },
    { L"P2 HP Shine 3", 0x2855c, 0x2857c, indexCPS2Sprites_Colossus },
    { L"P2 HP Shine 4", 0x2857c, 0x2859c, indexCPS2Sprites_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 HP Shine 5", 0x2859c, 0x285bc, indexCPS2Sprites_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 HP Shine 6", 0x285bc, 0x285dc, indexCPS2Sprites_Colossus },
    { L"P2 HP Shine 7", 0x285dc, 0x285fc, indexCPS2Sprites_Colossus },
    { L"P2 HP Shine 8", 0x285fc, 0x2861c, indexCPS2Sprites_Colossus },
    { L"P2 HP Shine 9", 0x2861c, 0x2863c, indexCPS2Sprites_Colossus },
    { L"P2 HP Shine 10", 0x2863c, 0x2865c, indexCPS2Sprites_Colossus },
};

// There's also a cyclops range from 0x276fE to 0x277fE: unclear what it's used for
const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P1[] =
{
    { L"P1",          0x2693c, 0x2695c, indexCPS2Sprites_Cyclops, 0, &pairNext2, &secondaryCOTACyclopsEffects },
    { L"P1 Extras 1: Coat", 0x2695c, 0x2697c, indexCPS2Sprites_Cyclops, 0x0f },
    { L"P1 jHK",      0x2697c, 0x2699c, indexCPS2Sprites_Cyclops, 0x1 },
    { L"P1 Extras 3: Mega Optic Blast", 0x2699c, 0x269Bc, indexCPS2Sprites_Cyclops, 0x10 },

    // preceded by unknown, this segment followed by P2 intro 1
    { L"P1 Optic Stance 1", 0x2865c, 0x2867c, indexCPS2Sprites_Cyclops, 13 },
    { L"P1 Optic Stance 2", 0x2867c, 0x2869c, indexCPS2Sprites_Cyclops, 13 },
    { L"P1 Intro 1", 0x2877c, 0x2879c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 2", 0x2879c, 0x287Bc, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 3", 0x287Bc, 0x287Dc, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 4", 0x287Dc, 0x287Fc, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 5", 0x287Fc, 0x2881c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 6", 0x2881c, 0x2883c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 7", 0x2883c, 0x2885c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 8", 0x2885c, 0x2887c, indexCPS2Sprites_Cyclops, 12 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_EXTRAS[] =
{
    { L"Shared Optic Blast 1", 0x286bc, 0x286dc, indexCPS2Sprites_Cyclops, 11 },
    { L"Shared Optic Blast 2", 0x286dc, 0x286fc, indexCPS2Sprites_Cyclops, 11 },
    { L"Shared Optic Blast 3", 0x286fc, 0x2871c, indexCPS2Sprites_Cyclops, 11 },
    { L"Shared Optic Blast 4", 0x2871c, 0x2873c, indexCPS2Sprites_Cyclops, 11 },
    { L"Shared Optic Blast 5", 0x2869c, 0x286bc, indexCPS2Sprites_Cyclops, 11 },

    { L"Shared Optic FX 1", 0x2873c, 0x2875c, indexCPS2Sprites_Cyclops, 0x11 },
    { L"Shared Optic FX 2", 0x2875c, 0x2877c, indexCPS2Sprites_Cyclops, 0x11 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P2[] =
{
    { L"P2",          0x269Bc, 0x269Dc, indexCPS2Sprites_Cyclops, 0, &pairNext2, &secondaryCOTACyclopsEffects },
    { L"P2 Extras 1: Coat", 0x269Dc, 0x269Fc, indexCPS2Sprites_Cyclops, 0x0f },
    // Yes, the purple/gold p2 cyclops is using the wrong P2 jHK palette.
    // this is just an old palette bug in COTA itself
    { L"P2 jHK",      0x269Fc, 0x26A1c, indexCPS2Sprites_Cyclops, 0x1 }, 
    { L"P2 Extras 3: Mega Optic Blast", 0x26A1c, 0x26A3c, indexCPS2Sprites_Cyclops, 0x10 },

    { L"P2 Optic Stance 1", 0x2887c, 0x2889c, indexCPS2Sprites_Cyclops, 13 },
    { L"P2 Optic Stance 2", 0x2889c, 0x288Bc, indexCPS2Sprites_Cyclops, 13 },
    { L"P2 Intro 1", 0x288Bc, 0x288Dc, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 2", 0x288Dc, 0x288Fc, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 3", 0x288Fc, 0x2891c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 4", 0x2891c, 0x2893c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 5", 0x2893c, 0x2895c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 6", 0x2895c, 0x2897c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 7", 0x2897c, 0x2899c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 8", 0x2899c, 0x289Bc, indexCPS2Sprites_Cyclops, 12 },
};

// missing icebeam palette
const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P1[] =
{
    { L"P1",         0x26B3c, 0x26B5c, indexCPS2Sprites_Iceman, 0x00, nullptr, &secondaryCOTAIcemanEffects },
    { L"P1 Extras",  0x26B7c, 0x26B9c, indexCPS2Sprites_Iceman, 5 },
    { L"P1 Win Pose (Human)", 0x26B9c, 0x26BBc, indexCPS2Sprites_Iceman, 3 },
    { L"P1 Shine 1 (shared?)", 0x28E7c, 0x28E9c, indexCPS2Sprites_Iceman },
    { L"P1 Shine 2", 0x28E9c, 0x28EBc, indexCPS2Sprites_Iceman },
    { L"P1 Shine 3", 0x28EBc, 0x28EDc, indexCPS2Sprites_Iceman },
    { L"P1 Shine 4", 0x28EDc, 0x28EFc, indexCPS2Sprites_Iceman },
    { L"P1 Shine 5", 0x28EFc, 0x28F1c, indexCPS2Sprites_Iceman },
    { L"P1 Shine 6", 0x28F1c, 0x28F3c, indexCPS2Sprites_Iceman },
    { L"P1 Shine 7 (shared)", 0x28F3c, 0x28F5c, indexCPS2Sprites_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_EXTRAS[] =
{
    { L"P2 Intro Dust (no P1 mirror)", 0x26B5c, 0x26B7c, indexCPS2Sprites_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P2[] =
{
    { L"P2",         0x26BBc, 0x26BDc, indexCPS2Sprites_Iceman, 0x00, nullptr, &secondaryCOTAIcemanEffects },
    // { L"P2 Extra 1", 0x26BDc, 0x26BFc, indexCPS2Sprites_Iceman, 1 }, unused apparently.
    
    { L"P2 Extras",  0x26BFc, 0x26C1c, indexCPS2Sprites_Iceman, 5 },
    { L"P2 Win Pose (Human)", 0x26C1c, 0x26C3c, indexCPS2Sprites_Iceman, 3 },
    { L"P2 Shine 1", 0x28F5c, 0x28F7c, indexCPS2Sprites_Iceman },
    { L"P2 Shine 2", 0x28F7c, 0x28F9c, indexCPS2Sprites_Iceman },
    { L"P2 Shine 3", 0x28F9c, 0x28FBc, indexCPS2Sprites_Iceman },
    { L"P2 Shine 4", 0x28FBc, 0x28FDc, indexCPS2Sprites_Iceman },
    { L"P2 Shine 5", 0x28FDc, 0x28FFc, indexCPS2Sprites_Iceman },
    { L"P2 Shine 6", 0x28FFc, 0x2901c, indexCPS2Sprites_Iceman },
    { L"P2 Shine 7", 0x2901c, 0x2903c, indexCPS2Sprites_Iceman },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P1[] = // boss
{
    { L"P1",          0x26f3c, 0x26f5c, indexCPS2Sprites_Juggy },
    { L"P1 Extras 1", 0x26f5c, 0x26f7c, indexCPS2Sprites_Juggy, 0x01 }, // eidrian marks this as unused
    { L"P1 Ground FX", 0x26f7c, 0x26f9c, indexCPS2Sprites_Juggy, 0x02 },
    { L"P1 Stage Items", 0x26f9c, 0x26fbc, indexCPS2Sprites_Juggy, 0x03 }, // MSH-unique: Ground object for Juggernaut to grab and wield, as on the Space Port stage
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P2[] =
{
    { L"P2",          0x26fbc, 0x26fdc, indexCPS2Sprites_Juggy },
    { L"P2 Extras 1", 0x26fdc, 0x26ffc, indexCPS2Sprites_Juggy, 0x01 },
    { L"P2 Ground FX", 0x26ffc, 0x2701c, indexCPS2Sprites_Juggy, 0x02 },
    { L"P2 Stage Items", 0x2701c, 0x2703c, indexCPS2Sprites_Juggy, 0x03 },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_SHARED[] =
{
    { L"Cyttorak Power-Up 1", 0x29B7c, 0x29B9c, indexCPS2Sprites_Juggy },
    { L"Cyttorak Power-Up 2", 0x29B9c, 0x29BBc, indexCPS2Sprites_Juggy },
    { L"Cyttorak Power-Up 3", 0x29BBc, 0x29BDc, indexCPS2Sprites_Juggy },
    { L"Cyttorak Power-Up 4", 0x29BDc, 0x29BFc, indexCPS2Sprites_Juggy },
    { L"Cyttorak Power-Up 5", 0x29BFc, 0x29C1c, indexCPS2Sprites_Juggy },
    { L"Cyttorak Power-Up 6", 0x29C1c, 0x29C3c, indexCPS2Sprites_Juggy },
    { L"Cyttorak Power-Up 7", 0x29C3c, 0x29C5c, indexCPS2Sprites_Juggy },
    { L"Cyttorak Power-Up 8", 0x29C5c, 0x29C7c, indexCPS2Sprites_Juggy },
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P1[] = // boss
{
    { L"P1",          0x2703c, 0x2705c, indexCPS2Sprites_Magneto },
    { L"P1 Extras 1", 0x2705c, 0x2707c, indexCPS2Sprites_Magneto, 3 }, // shockwave
    { L"P1 Extras 2", 0x2707c, 0x2709c, indexCPS2Sprites_Magneto, 2 }, // magnetic fx
    { L"P1 Extras 3", 0x2709c, 0x270bc, indexCPS2Sprites_Magneto, 1 }, // em disruptor, etc
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P2[] =
{
    { L"P2",          0x270bc, 0x270dc, indexCPS2Sprites_Magneto },
    { L"P2 Extras 1", 0x270dc, 0x270fc, indexCPS2Sprites_Magneto, 3 },
    { L"P2 Extras 2", 0x270fc, 0x2711c, indexCPS2Sprites_Magneto, 2 },
    { L"P2 Extras 3", 0x2711c, 0x2713c, indexCPS2Sprites_Magneto, 1 },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P1[] =
{
    { L"P1",          0x26D3c, 0x26D5c, indexCPS2Sprites_OmegaRed, 0x00, nullptr, &secondaryCOTAOmegaRedEffects },
    { L"P1 Extras 1", 0x26D5c, 0x26D7c, indexCPS2Sprites_OmegaRed, 1 },
    { L"P1 Extras 2", 0x26D7c, 0x26D9c, indexCPS2Sprites_OmegaRed, 2 },
    { L"P1 Extras 3", 0x26D9c, 0x26DBc, indexCPS2Sprites_OmegaRed, 3 },

    { L"P1 Intro 1", 0x289Bc, 0x289Dc, indexCPS2Sprites_OmegaRed },
    { L"P1 Intro 2", 0x289Dc, 0x289Fc, indexCPS2Sprites_OmegaRed },
    { L"P1 Intro 3", 0x289Fc, 0x28A1c, indexCPS2Sprites_OmegaRed },
    { L"P1 Intro 4", 0x28A1c, 0x28A3c, indexCPS2Sprites_OmegaRed },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P2[] =
{
    { L"P2",          0x26DBc, 0x26DDc, indexCPS2Sprites_OmegaRed, 0x00, nullptr, &secondaryCOTAOmegaRedEffects },
    { L"P2 Extras 1", 0x26DDc, 0x26DFc, indexCPS2Sprites_OmegaRed, 1 },
    { L"P2 Extras 2", 0x26DFc, 0x26E1c, indexCPS2Sprites_OmegaRed, 2 },
    { L"P2 Extras 3", 0x26E1c, 0x26E3c, indexCPS2Sprites_OmegaRed, 3 },

    { L"P2 Intro 1", 0x28A3c, 0x28A5c, indexCPS2Sprites_OmegaRed },
    { L"P2 Intro 2", 0x28A5c, 0x28A7c, indexCPS2Sprites_OmegaRed },
    { L"P2 Intro 3", 0x28A7c, 0x28A9c, indexCPS2Sprites_OmegaRed },
    { L"P2 Intro 4", 0x28A9c, 0x28ABc, indexCPS2Sprites_OmegaRed },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P1[] =
{
    { L"Psylocke P1", 0x2673c, 0x2675c, indexCPS2Sprites_Psylocke, 0x00, nullptr, &secondaryCOTAPsylockeEffects },
    { L"P1 Extras 1", 0x2675c, 0x2677c, indexCPS2Sprites_Psylocke, 1 },
    { L"P1 Extras 2", 0x2677c, 0x2679c, indexCPS2Sprites_Psylocke, 0 },
    { L"P1 Extras 3", 0x2679c, 0x267Bc, indexCPS2Sprites_Psylocke, 3 },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P2[] =
{
    { L"Psylocke P2", 0x267Bc, 0x267Dc, indexCPS2Sprites_Psylocke, 0x00, nullptr, &secondaryCOTAPsylockeEffects },
    { L"P2 Extras 1", 0x267Dc, 0x267Fc, indexCPS2Sprites_Psylocke, 1 },
    { L"P2 Extras 2", 0x267Fc, 0x2681c, indexCPS2Sprites_Psylocke, 0 },
    { L"P2 Extras 3", 0x2681c, 0x2683c, indexCPS2Sprites_Psylocke, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P1[] =
{
    { L"Sentinel P1", 0x26e3c, 0x26e5c, indexCPS2Sprites_Sentinel, 0x20, &pairNextAndNextSkipped },
    { L"P1 Drones (bombs) / Guts", 0x26e5c, 0x26e7c, indexCPS2Sprites_Sentinel, 0x21 },
    { L"P1 MP / Rocket Punch wires", 0x26e7c, 0x26e9c, indexCPS2Sprites_Sentinel, 0x0d },
    { L"P1 Plasma Storm / Flight", 0x26e9c, 0x26ebc, indexCPS2Sprites_Sentinel, 0x23 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P2[] =
{
    { L"Sentinel P2", 0x26ebc, 0x26edc, indexCPS2Sprites_Sentinel, 0x20, &pairNextAndNextSkipped },
    { L"P2 Drones (bombs) / Guts", 0x26edc, 0x26efc, indexCPS2Sprites_Sentinel, 0x21 },
    { L"P2 MP / Rocket Punch wires", 0x26efc, 0x26f1c, indexCPS2Sprites_Sentinel, 0x0d },
    { L"P2 Plasma Storm / Flight", 0x26f1c, 0x26f3c, indexCPS2Sprites_Sentinel, 0x23 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_SHARED[] =
{
    { L"Sentinel Super FX (shared)", 0x29ABc, 0x29ADc, indexCPS2Sprites_Sentinel, 0x0e },
    { L"Sentinel Flying FX (shared)", 0x29c7c, 0x29c9c, indexCPS2Sprites_Sentinel, 0x0b },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P1[] =
{
    { L"P1",          0x2727c, 0x2729c, indexCPS2Sprites_SilverSamurai, 0x00, nullptr, &secondaryCOTASilverSamuraiEffects },
    { L"P1 Extras 1: Shadow Frame", 0x2729c, 0x272Bc, indexCPS2Sprites_SilverSamurai },
    { L"P1 Extras 2: Slash", 0x272Bc, 0x272Dc, indexCPS2Sprites_SilverSamurai, 0x08 },
    { L"P1 Extras 3: Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x272Dc, 0x272Fc, indexCPS2Sprites_SilverSamurai, 0x03 },

    { L"P1 Shine 1", 0x2973c, 0x2975c, indexCPS2Sprites_SilverSamurai }, // core rotation
    { L"P1 Shine 2", 0x2975c, 0x2977c, indexCPS2Sprites_SilverSamurai },
    
    { L"P1 Shine 3", 0x297Bc, 0x297Dc, indexCPS2Sprites_SilverSamurai }, // sometimes the rotation runs through the rest of these
    { L"P1 Shine 4", 0x297Dc, 0x297Fc, indexCPS2Sprites_SilverSamurai },
    { L"P1 Shine 5", 0x297Fc, 0x2981c, indexCPS2Sprites_SilverSamurai },
    { L"P1 Shine 6", 0x2981c, 0x2983c, indexCPS2Sprites_SilverSamurai },
    { L"P1 Shine 7", 0x2983c, 0x2985c, indexCPS2Sprites_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P2[] =
{
    { L"P2",          0x272Fc, 0x2731c, indexCPS2Sprites_SilverSamurai, 0x00, nullptr, &secondaryCOTASilverSamuraiEffects },
    { L"P2 Extras 1: Shadow Frame", 0x2731c, 0x2733c, indexCPS2Sprites_SilverSamurai, 1 },
    { L"P2 Extras 2: Slash", 0x2733c, 0x2735c, indexCPS2Sprites_SilverSamurai, 0x08 },
    { L"P2 Extras 3: Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x2735c, 0x2737c, indexCPS2Sprites_SilverSamurai, 0x03 },

    { L"P2 Shine 1", 0x2977c, 0x2979c, indexCPS2Sprites_SilverSamurai }, // core rotation
    { L"P2 Shine 2", 0x2979c, 0x297Bc, indexCPS2Sprites_SilverSamurai },

    { L"P2 Shine 3", 0x2985c, 0x2987c, indexCPS2Sprites_SilverSamurai }, // sometimes the rotation runs through the rest of these
    { L"P2 Shine 4", 0x2987c, 0x2989c, indexCPS2Sprites_SilverSamurai },
    { L"P2 Shine 5", 0x2989c, 0x298Bc, indexCPS2Sprites_SilverSamurai },
    { L"P2 Shine 6", 0x298Bc, 0x298Dc, indexCPS2Sprites_SilverSamurai },
    { L"P2 Shine 7", 0x298Dc, 0x298Fc, indexCPS2Sprites_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_SHARED[] =
{
    { L"Shuriken 1", 0x298Fc, 0x2991c, indexCPS2Sprites_SilverSamurai, 0x09 },
    { L"Shuriken 2", 0x2991c, 0x2993c, indexCPS2Sprites_SilverSamurai, 0x09 },
    { L"Shuriken 3", 0x2993c, 0x2995c, indexCPS2Sprites_SilverSamurai, 0x09 },
    { L"Shuriken 4", 0x2995c, 0x2997c, indexCPS2Sprites_SilverSamurai, 0x09 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P1[] =
{
    { L"P1",          0x26C3c, 0x26C5c, indexCPS2Sprites_Spiral, 0x00, nullptr, &secondaryCOTASpiralEffects },
    { L"P1 Extras 1", 0x26C5c, 0x26C7c, indexCPS2Sprites_Spiral, 1 },
    { L"P1 Extras 2", 0x26C7c, 0x26C9c, indexCPS2Sprites_Spiral, 2 },
    { L"P1 Sword flashing palette", 0x26C9c, 0x26CBc, indexCPS2Sprites_Spiral, 3 },

    { L"P1 Power Dance 1", 0x2907c, 0x2909c, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Power Dance 2", 0x2909c, 0x290Bc, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Power Dance 3", 0x290Bc, 0x290Dc, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Power Dance 4", 0x290Dc, 0x290Fc, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Power Dance 5", 0x290Fc, 0x2911c, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Power Dance 6", 0x2911c, 0x2913c, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Speed Dance 1", 0x2913c, 0x2915c, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Speed Dance 2", 0x2915c, 0x2917c, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Speed Dance 3", 0x2917c, 0x2919c, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Speed Dance 4", 0x2919c, 0x291Bc, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Speed Dance 5", 0x291Bc, 0x291Dc, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Speed Dance 6", 0x291Dc, 0x291Fc, indexCPS2Sprites_Spiral, 11 },
    { L"P1 Metamorphosis 1", 0x2923c, 0x2925c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 2", 0x2925c, 0x2927c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 3", 0x2927c, 0x2929c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 4", 0x2929c, 0x292Bc, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 5", 0x292Bc, 0x292Dc, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 6", 0x292Dc, 0x292Fc, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 7", 0x292Fc, 0x2931c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 8", 0x2931c, 0x2933c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 9", 0x2933c, 0x2935c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 10", 0x2935c, 0x2937c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 11", 0x2937c, 0x2939c, indexCPS2Sprites_Spiral, 12 },
    { L"P1 Metamorphosis 12", 0x2939c, 0x293Bc, indexCPS2Sprites_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P2[] =
{
    { L"P2",          0x26CBc, 0x26CDc, indexCPS2Sprites_Spiral, 0x00, nullptr, &secondaryCOTASpiralEffects },
    { L"P2 Extras 1", 0x26CDc, 0x26CFc, indexCPS2Sprites_Spiral, 1 },
    { L"P2 Extras 2", 0x26CFc, 0x26D1c, indexCPS2Sprites_Spiral, 2 },
    { L"P2 Sword flashing palette", 0x26D1c, 0x26D3c, indexCPS2Sprites_Spiral, 3 },

    { L"P2 Power Dance 1", 0x293fc, 0x2941c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Power Dance 2", 0x2941c, 0x2943c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Power Dance 3", 0x2943c, 0x2945c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Power Dance 4", 0x2945c, 0x2947c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Power Dance 5", 0x2947c, 0x2949c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Power Dance 6", 0x2949c, 0x294Bc, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Speed Dance 1", 0x294Bc, 0x294Dc, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Speed Dance 2", 0x294Dc, 0x294Fc, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Speed Dance 3", 0x294Fc, 0x2951c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Speed Dance 4", 0x2951c, 0x2953c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Speed Dance 5", 0x2953c, 0x2955c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Speed Dance 6", 0x2955c, 0x2957c, indexCPS2Sprites_Spiral, 11 },
    { L"P2 Metamorphosis 1", 0x295Bc, 0x295Dc, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 2", 0x295Dc, 0x295Fc, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 3", 0x295Fc, 0x2961c, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 4", 0x2961c, 0x2963c, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 5", 0x2963c, 0x2965c, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 6", 0x2965c, 0x2967c, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 7", 0x2967c, 0x2969c, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 8", 0x2969c, 0x296Bc, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 9", 0x296Bc, 0x296Dc, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 10", 0x296Dc, 0x296Fc, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 11", 0x296Fc, 0x2971c, indexCPS2Sprites_Spiral, 12 },
    { L"P2 Metamorphosis 12", 0x2971c, 0x2973c, indexCPS2Sprites_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P1[] =
{
    { L"P1",         0x26A3c, 0x26A5c, indexCPS2Sprites_Storm, 0x00, nullptr, &secondaryCOTAStormEffects },
    { L"P1 Extras 1: Lightning FX", 0x26A7c, 0x26A9c, indexCPS2Sprites_Storm, 0x08 }, // lightning fx
    { L"P1 Extras 2: Lightning FX", 0x26A9c, 0x26ABc, indexCPS2Sprites_Storm, 0x09 }, // head of lightning attack

    { L"P1 Extras 3", 0x26A5c, 0x26A7c, indexCPS2Sprites_Storm },
    { L"P1 Ending Sprite", 0x279Fc, 0x27A1c, indexCPS2Sprites_Storm },
    
    { L"P1 Lumin 1", 0x28ABc, 0x28ADc, indexCPS2Sprites_Storm }, // cfp
    { L"P1 Lumin 2", 0x28ADc, 0x28AFc, indexCPS2Sprites_Storm }, // cfp2
    { L"P1 Lumin 3", 0x28AFc, 0x28B1c, indexCPS2Sprites_Storm }, // cfp3
    { L"P1 Lumin 4", 0x28B1c, 0x28B3c, indexCPS2Sprites_Storm }, // cfp4
    { L"P1 Lumin 5", 0x28B3c, 0x28B5c, indexCPS2Sprites_Storm }, // cfp5

    { L"P1 Typhoon 1", 0x28BDc, 0x28BFc, indexCPS2Sprites_Storm, 12 },
    { L"P1 Typhoon 2", 0x28BFc, 0x28C1c, indexCPS2Sprites_Storm, 12 },
    { L"P1 Typhoon 3", 0x28C1c, 0x28C3c, indexCPS2Sprites_Storm, 12 },
    { L"P1 Typhoon 4", 0x28C3c, 0x28C5c, indexCPS2Sprites_Storm, 12 },
    { L"P1 Typhoon 5", 0x28C5c, 0x28C7c, indexCPS2Sprites_Storm, 12 },
    { L"P1 Typhoon 6", 0x28C7c, 0x28C9c, indexCPS2Sprites_Storm, 12 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P2[] =
{
    { L"P2", 0x26ABc, 0x26ADc, indexCPS2Sprites_Storm, 0x00, nullptr, &secondaryCOTAStormEffects },
    { L"P2 Extras 1: Lightning FX", 0x26AFc, 0x26B1c, indexCPS2Sprites_Storm, 0x08 },
    { L"P2 Extras 2: Lightning FX", 0x26B1c, 0x26B3c, indexCPS2Sprites_Storm, 0x09 },

    { L"P2 Extras 3", 0x26ADc, 0x26AFc, indexCPS2Sprites_Storm },
    { L"P2 Ending Sprite", 0x27A3c, 0x27A5c, indexCPS2Sprites_Storm },

    { L"P2 Lumin 1", 0x28C9c, 0x28CBc, indexCPS2Sprites_Storm },
    { L"P2 Lumin 2", 0x28CBc, 0x28CDc, indexCPS2Sprites_Storm },
    { L"P2 Lumin 3", 0x28CDc, 0x28CFc, indexCPS2Sprites_Storm },
    { L"P2 Lumin 4", 0x28CFc, 0x28D1c, indexCPS2Sprites_Storm },
    { L"P2 Lumin 5", 0x28D1c, 0x28D3c, indexCPS2Sprites_Storm },

    { L"P2 Typhoon 1", 0x28DBc, 0x28DDc, indexCPS2Sprites_Storm, 12 },
    { L"P2 Typhoon 2", 0x28DDc, 0x28DFc, indexCPS2Sprites_Storm, 12 },
    { L"P2 Typhoon 3", 0x28DFc, 0x28E1c, indexCPS2Sprites_Storm, 12 },
    { L"P2 Typhoon 4", 0x28E1c, 0x28E3c, indexCPS2Sprites_Storm, 12 },
    { L"P2 Typhoon 5", 0x28E3c, 0x28E5c, indexCPS2Sprites_Storm, 12 },
    { L"P2 Typhoon 6", 0x28E5c, 0x28E7c, indexCPS2Sprites_Storm, 12 },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P1[] =
{
    { L"Wolverine P1",          0x2713c, 0x2715c, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryCOTAWolverineEffects },
    { L"P1 Claws",              0x2715c, 0x2717c, indexCPS2Sprites_Wolverine, 1 },
    { L"P1 Berserker Barrage",  0x2717c, 0x2719c, indexCPS2Sprites_Wolverine, 2 },
    { L"P1 ?",                  0x2719c, 0x271bc },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P2[] =
{
    { L"Wolverine P2",          0x271bc, 0x271dc, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryCOTAWolverineEffects },
    { L"P2 Claws",              0x271dc, 0x271fc, indexCPS2Sprites_Wolverine, 1 },
    { L"P2 Berserker Barrage",  0x271fc, 0x2721c, indexCPS2Sprites_Wolverine, 2 },
    { L"P2 ?",                  0x2721c, 0x2723c },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P1[] = // aka Gouki
{
    { L"P1",          0x2737c, 0x2739c, indexCPS2Sprites_STAkuma, 0x00, nullptr, &secondaryCOTAAkumaEffects },
    { L"P1 Extras 1: dash/teleport 1/2", 0x2739c, 0x273bc, indexCPS2Sprites_STAkuma },
    { L"P1 Extras 2: dash/teleport 2/2", 0x273bc, 0x273dc, indexCPS2Sprites_STAkuma },
    { L"P1 Extras 3", 0x273dc, 0x273fc, indexCPS2Sprites_STAkuma, 1 },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P2[] =
{
    { L"P2",          0x273fc, 0x2741c, indexCPS2Sprites_STAkuma, 0x00, nullptr, &secondaryCOTAAkumaEffects },
    { L"P2 Extras 1: dash/teleport 1/2", 0x2741c, 0x2743c, indexCPS2Sprites_STAkuma },
    { L"P2 Extras 2: dash/teleport 2/2", 0x2743c, 0x2745c, indexCPS2Sprites_STAkuma },
    { L"P2 Extras 3", 0x2745c, 0x2747c, indexCPS2Sprites_STAkuma, 1 },
};

const sGame_PaletteDataset COTA_A_PORTRAIT_PALETTES[] =
{
    { L"Colossus",      0x37012, 0x37032, indexCPS2Sprites_Colossus, 0x33 },
    { L"Cyclops",       0x36F32, 0x36F52, indexCPS2Sprites_Cyclops, 0x33 },
    { L"Iceman",        0x36F52, 0x36F72, indexCPS2Sprites_Iceman, 0x33 },
    { L"Juggernaut",    0x36EF2, 0x36F12, indexCPS2Sprites_Juggy, 0x33 },
    { L"Magneto",       0x36F92, 0x36FB2, indexCPS2Sprites_Magneto, 0x33 },
    { L"Omega Red",     0x36F72, 0x36F92, indexCPS2Sprites_OmegaRed, 0x33 },
    { L"Psylocke",      0x36FD2, 0x36FF2, indexCPS2Sprites_Psylocke, 0x33 },
    { L"Sentinel",      0x36EB2, 0x36ED2, indexCPS2Sprites_Sentinel, 0x33 },
    { L"Silver Samurai", 0x36F12, 0x36F32, indexCPS2Sprites_SilverSamurai, 0x33 },
    { L"Spiral",        0x36FF2, 0x37012, indexCPS2Sprites_Spiral, 0x33 },
    { L"Storm",         0x36FB2, 0x36FD2, indexCPS2Sprites_Storm, 0x33 },
    { L"Wolverine",     0x36ED2, 0x36EF2, indexCPS2Sprites_Wolverine, 0x33 },
};

const sGame_PaletteDataset COTA_A_PORTRAIT_PALETTES_LOST[] =
{
    // These are speculative and not verified.
    // They use unique art we do not have ripped.
    { L"Sentinel",      0x37932, 0x37952, indexCPS2Sprites_Sentinel, -1 },
    { L"Wolverine",     0x37952, 0x37972, indexCPS2Sprites_Wolverine, -1 },
    { L"Juggernaut",    0x37972, 0x37992, indexCPS2Sprites_Juggy, -1 },
    { L"Silver Samurai", 0x37992, 0x379b2, indexCPS2Sprites_SilverSamurai, -1 },
    { L"Cyclops",       0x379b2, 0x379d2, indexCPS2Sprites_Cyclops, -1 },
    { L"Iceman",        0x379d2, 0x379f2, indexCPS2Sprites_Iceman, -1 },
    { L"Omega Red",     0x379f2, 0x37a12, indexCPS2Sprites_OmegaRed, -1 },
    { L"Magneto",       0x37a12, 0x37a32, indexCPS2Sprites_Magneto, -1 },
    { L"Storm",         0x37a32, 0x37a52, indexCPS2Sprites_Storm, -1 },
    { L"Psylocke",      0x37a52, 0x37a72, indexCPS2Sprites_Psylocke, -1 },
    { L"Spiral",        0x37a72, 0x37a92, indexCPS2Sprites_Spiral, -1 },
    { L"Colossus",      0x37a92, 0x37ab2, indexCPS2Sprites_Colossus, -1 },
};

const sGame_PaletteDataset COTA_A_CSI_PALETTES[] =
{
#ifdef SHOW_AS_SEPARATED
    { L"Colossus",       0x37072, 0x37092, indexCPS2Sprites_Colossus, indexCSP2Images_COTA_CSIs },
    { L"Cyclops",        0x37052, 0x37072, indexCPS2Sprites_Cyclops, indexCSP2Images_COTA_CSIs },
    { L"Iceman",         0x370D2, 0x370F2, indexCPS2Sprites_Iceman, indexCSP2Images_COTA_CSIs },
    { L"Omega Red",      0x370B2, 0x370D2, indexCPS2Sprites_OmegaRed, indexCSP2Images_COTA_CSIs },
    { L"Psylocke",       0x370F2, 0x37112, indexCPS2Sprites_Psylocke, indexCSP2Images_COTA_CSIs },
    { L"Sentinel",       0x37032, 0x37052, indexCPS2Sprites_Sentinel, indexCSP2Images_COTA_CSIs },
    { L"Silver Samurai", 0x37092, 0x370B2, indexCPS2Sprites_SilverSamurai, indexCSP2Images_COTA_CSIs},
    { L"Spiral",         0x37132, 0x37152, indexCPS2Sprites_Spiral, indexCSP2Images_COTA_CSIs },
    { L"Storm",          0x37112, 0x37132, indexCPS2Sprites_Storm, indexCSP2Images_COTA_CSIs },
    { L"Wolverine",      0x37192, 0x371B2, indexCPS2Sprites_Wolverine, indexCSP2Images_COTA_CSIs },

    // These aren't actually exposed but are there.
    //    { L"Juggernaut",     0x37172, 0x37192 },
    //    { L"Magneto",        0x37152, 0x37172 },
#else
    { L"Select Screen Icons", 0x37032, 0x371b2, indexCPS2Sprites_COTAAssets, 0x0c },
#endif
};

const sGame_PaletteDataset COTA_A_BONUS_SELECT_PALETTES[] =
{
    { L"Select Screen World Map",   0x371b2, 0x371d2, indexCPS2Sprites_COTAAssets, 0x01 },
    { L"Select Screen Vs Text",     0x371d2, 0x371f2, indexCPS2Sprites_COTAAssets, 0x00 },
    { L"Select Screen Background",  0x3D434, 0x3D454, indexCPS2Sprites_COTAAssets, 0x0a },
};

const sGame_PaletteDataset COTA_A_BONUS_ENDING_PALETTES[] =
{
    { L"Mojo",                      0x2799e, 0x279be, indexCPS2Sprites_COTAAssets, 0x02 },
    { L"Professor X",               0x2781c, 0x2783c, indexCPS2Sprites_COTAAssets, 0x07 },
    { L"Forge",                     0x27a1c, 0x27a3c, indexCPS2Sprites_COTAAssets, 0x06 },
    { L"Cyclops (Ending sprite)",   0x2777c, 0x2779c, indexCPS2Sprites_COTAAssets, 0x0D, &pairNext },
    { L"Jean Grey (Holding Cyclops/Photo)",  0x2779c, 0x277Bc, indexCPS2Sprites_COTAAssets, 0x0e, &pairPrevious },
    { L"Jean Grey (Flying)",        0x2771c, 0x2773c, indexCPS2Sprites_COTAAssets, 0x05 },
    { L"Wolverine's Motorcycle",    0x279dc, 0x279fc, indexCPS2Sprites_COTAAssets, 0x09 },
    { L"Psylocke Ending (dress)",   0x2785c, 0x2787c, indexCPS2Sprites_COTAAssets, 0x10, &pairNext },
    { L"Psylocke Ending (undressed)", 0x2783c, 0x2785c, indexCPS2Sprites_COTAAssets, 0x11, &pairPrevious },
    { L"Police (Omega Red ending)", 0x2797c, 0x2799c, indexCPS2Sprites_COTAAssets, 0x0F },
    { L"Acolytes",                  0x278bc, 0x278fc, indexCPS2Sprites_COTAAssets, 0xa0 },
};

const sGame_PaletteDataset COTA_A_BONUS_BONUS_PALETTES[] =
{
    { L"Title Screen Marvel Comics Logo", 0x2631c, 0x2633c, indexCPS2Sprites_COTAAssets, 0xa1 },
};

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_STATUS[] =
{
    //Colossus
    { L"Frozen 1", 0x3d7d6, 0x3d7f6, indexCPS2Sprites_Colossus, 0x00 },
    { L"Frozen 2", 0x3d7f6, 0x3d816, indexCPS2Sprites_Colossus, 0x00 },
    { L"Burned 1", 0x3d816, 0x3d836, indexCPS2Sprites_Colossus, 0x00 },
    { L"Burned 2", 0x3d836, 0x3d856, indexCPS2Sprites_Colossus, 0x00 },
    { L"Zapped 1", 0x3d856, 0x3d876, indexCPS2Sprites_Colossus, 0x00 },
    { L"Zapped 2", 0x3d876, 0x3d896, indexCPS2Sprites_Colossus, 0x00 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_STATUS[] =
{
    //Cyclops
    { L"Frozen 1", 0x3d896, 0x3d8b6, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Frozen 2", 0x3d8b6, 0x3d8d6, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Burned 1", 0x3d8d6, 0x3d8f6, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Burned 2", 0x3d8f6, 0x3d916, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Zapped 1", 0x3d916, 0x3d936, indexCPS2Sprites_Cyclops, 0x80 },
    { L"Zapped 2", 0x3d936, 0x3d956, indexCPS2Sprites_Cyclops, 0x80 },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_STATUS[] =
{
    //Iceman
    { L"Frozen 1", 0x3da16, 0x3da36, indexCPS2Sprites_Iceman, 0x00 },
    { L"Frozen 2", 0x3da36, 0x3da56, indexCPS2Sprites_Iceman, 0x00 },
    { L"Burned 1", 0x3da56, 0x3da76, indexCPS2Sprites_Iceman, 0x00 },
    { L"Burned 2", 0x3da76, 0x3da96, indexCPS2Sprites_Iceman, 0x00 },
    { L"Zapped 1", 0x3da96, 0x3dab6, indexCPS2Sprites_Iceman, 0x00 },
    { L"Zapped 2", 0x3dab6, 0x3dad6, indexCPS2Sprites_Iceman, 0x00 },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_STATUS[] =
{
    //Juggernaut
    { L"Frozen 1", 0x3ddd6, 0x3ddf6, indexCPS2Sprites_Juggy, 0x00 },
    { L"Frozen 2", 0x3ddf6, 0x3de16, indexCPS2Sprites_Juggy, 0x00 },
    { L"Burned 1", 0x3de16, 0x3de36, indexCPS2Sprites_Juggy, 0x00 },
    { L"Burned 2", 0x3de36, 0x3de56, indexCPS2Sprites_Juggy, 0x00 },
    { L"Zapped 1", 0x3de56, 0x3de76, indexCPS2Sprites_Juggy, 0x00 },
    { L"Zapped 2", 0x3de76, 0x3de96, indexCPS2Sprites_Juggy, 0x00 },
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_STATUS[] =
{
    //Magneto
    { L"Frozen 1", 0x3de96, 0x3deb6, indexCPS2Sprites_Magneto, 0x00 },
    { L"Frozen 2", 0x3deb6, 0x3ded6, indexCPS2Sprites_Magneto, 0x00 },
    { L"Burned 1", 0x3ded6, 0x3def6, indexCPS2Sprites_Magneto, 0x00 },
    { L"Burned 2", 0x3def6, 0x3df16, indexCPS2Sprites_Magneto, 0x00 },
    { L"Zapped 1", 0x3df16, 0x3df36, indexCPS2Sprites_Magneto, 0x00 },
    { L"Zapped 2", 0x3df36, 0x3df56, indexCPS2Sprites_Magneto, 0x00 },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_STATUS[] =
{
    //Omega Red
    { L"Frozen 1", 0x3dc56, 0x3dc76, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Frozen 2", 0x3dc76, 0x3dc96, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Burned 1", 0x3dc96, 0x3dcb6, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Burned 2", 0x3dcb6, 0x3dcd6, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Zapped 1", 0x3dcd6, 0x3dcf6, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Zapped 2", 0x3dcf6, 0x3dd16, indexCPS2Sprites_OmegaRed, 0x00 },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_STATUS[] =
{
    //Psylocke
    { L"Frozen 1", 0x3d716, 0x3d736, indexCPS2Sprites_Psylocke, 0x00 },
    { L"Frozen 2", 0x3d736, 0x3d756, indexCPS2Sprites_Psylocke, 0x00 },
    { L"Burned 1", 0x3d756, 0x3d776, indexCPS2Sprites_Psylocke, 0x00 },
    { L"Burned 2", 0x3d776, 0x3d796, indexCPS2Sprites_Psylocke, 0x00 },
    { L"Zapped 1", 0x3d796, 0x3d7b6, indexCPS2Sprites_Psylocke, 0x00 },
    { L"Zapped 2", 0x3d7b6, 0x3d7d6, indexCPS2Sprites_Psylocke, 0x00 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_STATUS[] =
{
    //Sentinel
    { L"Frozen 1", 0x3dd16, 0x3dd36, indexCPS2Sprites_Sentinel, 0x80 },
    { L"Frozen 2", 0x3dd36, 0x3dd56, indexCPS2Sprites_Sentinel, 0x80 },
    { L"Burned 1", 0x3dd56, 0x3dd76, indexCPS2Sprites_Sentinel, 0x80 },
    { L"Burned 2", 0x3dd76, 0x3dd96, indexCPS2Sprites_Sentinel, 0x80 },
    { L"Zapped 1", 0x3dd96, 0x3ddb6, indexCPS2Sprites_Sentinel, 0x80 },
    { L"Zapped 2", 0x3ddb6, 0x3ddd6, indexCPS2Sprites_Sentinel, 0x80 },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_STATUS[] =
{
    //Silver Samurai
    { L"Frozen 1", 0x3db96, 0x3dbb6, indexCPS2Sprites_SilverSamurai, 0x00 },
    { L"Frozen 2", 0x3dbb6, 0x3dbd6, indexCPS2Sprites_SilverSamurai, 0x00 },
    { L"Burned 1", 0x3dbd6, 0x3dbf6, indexCPS2Sprites_SilverSamurai, 0x00 },
    { L"Burned 2", 0x3dbf6, 0x3dc16, indexCPS2Sprites_SilverSamurai, 0x00 },
    { L"Zapped 1", 0x3dc16, 0x3dc36, indexCPS2Sprites_SilverSamurai, 0x00 },
    { L"Zapped 2", 0x3dc36, 0x3dc56, indexCPS2Sprites_SilverSamurai, 0x00 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_STATUS[] =
{
    //Spiral
    { L"Frozen 1", 0x3dad6, 0x3daf6, indexCPS2Sprites_Spiral, 0x00 },
    { L"Frozen 2", 0x3daf6, 0x3db16, indexCPS2Sprites_Spiral, 0x00 },
    { L"Burned 1", 0x3db16, 0x3db36, indexCPS2Sprites_Spiral, 0x00 },
    { L"Burned 2", 0x3db36, 0x3db56, indexCPS2Sprites_Spiral, 0x00 },
    { L"Zapped 1", 0x3db56, 0x3db76, indexCPS2Sprites_Spiral, 0x00 },
    { L"Zapped 2", 0x3db76, 0x3db96, indexCPS2Sprites_Spiral, 0x00 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_STATUS[] =
{
    //Storm
    { L"Frozen 1", 0x3d956, 0x3d976, indexCPS2Sprites_Storm, 0x00 },
    { L"Frozen 2", 0x3d976, 0x3d996, indexCPS2Sprites_Storm, 0x00 },
    { L"Burned 1", 0x3d996, 0x3d9b6, indexCPS2Sprites_Storm, 0x00 },
    { L"Burned 2", 0x3d9b6, 0x3d9d6, indexCPS2Sprites_Storm, 0x00 },
    { L"Zapped 1", 0x3d9d6, 0x3d9f6, indexCPS2Sprites_Storm, 0x00 },
    { L"Zapped 2", 0x3d9f6, 0x3da16, indexCPS2Sprites_Storm, 0x00 },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_STATUS[] =
{
    //Wolverine
    { L"Frozen 1", 0x3d656, 0x3d676, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Frozen 2", 0x3d676, 0x3d696, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Burned 1", 0x3d696, 0x3d6b6, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Burned 2", 0x3d6b6, 0x3d6d6, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Zapped 1", 0x3d6d6, 0x3d6f6, indexCPS2Sprites_Wolverine, 0x80 },
    { L"Zapped 2", 0x3d6f6, 0x3d716, indexCPS2Sprites_Wolverine, 0x80 },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_STATUS[] =
{
    //Akuma
    { L"Frozen 1", 0x3df56, 0x3df76, indexCPS2Sprites_STAkuma, 0x00 },
    { L"Frozen 2", 0x3df76, 0x3df96, indexCPS2Sprites_STAkuma, 0x00 },
    { L"Burned 1", 0x3df96, 0x3dfb6, indexCPS2Sprites_STAkuma, 0x00 },
    { L"Burned 2", 0x3dfb6, 0x3dfd6, indexCPS2Sprites_STAkuma, 0x00 },
    { L"Zapped 1", 0x3dfd6, 0x3dff6, indexCPS2Sprites_STAkuma, 0x00 },
    { L"Zapped 2", 0x3dff6, 0x3e016, indexCPS2Sprites_STAkuma, 0x00 },
};

const sGame_PaletteDataset COTA_A_HUD_PALETTES[] =
{
    { L"Perfect/Sudden Death/Combo Counter/General Text", 0x29c9c, 0x29cbc, indexCPS2Sprites_COTAAssets, 0x9f },
    { L"Player 1 Healthbar", 0x29cbc, 0x29cdc, indexCPS2Sprites_COTAAssets, 0x9a },
    { L"Player 2 Healthbar", 0x29cdc, 0x29cfc, indexCPS2Sprites_COTAAssets, 0x9b },
    { L"Meter Level 1 Cycle (1/5)", 0x2a1bc, 0x2a1dc, indexCPS2Sprites_COTAAssets, 0x9c },
    { L"Meter Level 1 Cycle (2/5)", 0x2a1dc, 0x2a1fc, indexCPS2Sprites_COTAAssets, 0x9c },
    { L"Meter Level 1 Cycle (3/5)", 0x2a1fc, 0x2a21c, indexCPS2Sprites_COTAAssets, 0x9c },
    { L"Meter Level 1 Cycle (4/5)", 0x2a21c, 0x2a23c, indexCPS2Sprites_COTAAssets, 0x9c },
    { L"Meter Level 1 Cycle (5/5)", 0x2a23c, 0x2a25c, indexCPS2Sprites_COTAAssets, 0x9c },
    { L"Meter Level 2 Cycle (2/5)", 0x2a09c, 0x2a0bc, indexCPS2Sprites_COTAAssets, 0x9d },
    { L"Meter Level 2 Cycle (3/5)", 0x2a0bc, 0x2a0dc, indexCPS2Sprites_COTAAssets, 0x9d },
    { L"Meter Level 2 Cycle (4/5)", 0x2a0dc, 0x2a0fc, indexCPS2Sprites_COTAAssets, 0x9d },
    { L"Meter Level 2 Cycle (5/5)", 0x2a0fc, 0x2a11c, indexCPS2Sprites_COTAAssets, 0x9d },
    { L"Meter Level Max Cycle (1/40)", 0x2a25c, 0x2a27c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (2/40)", 0x2a27c, 0x2a29c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (3/40)", 0x2a29c, 0x2a2bc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (4/40)", 0x2a2bc, 0x2a2dc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (5/40)", 0x2a2dc, 0x2a2fc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (6/40)", 0x2a2fc, 0x2a31c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (7/40)", 0x2a31c, 0x2a33c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (8/40)", 0x2a33c, 0x2a35c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (9/40)", 0x2a35c, 0x2a37c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (10/40)", 0x2a37c, 0x2a39c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (11/40)", 0x2a39c, 0x2a3bc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (12/40)", 0x2a3bc, 0x2a3dc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (13/40)", 0x2a3dc, 0x2a3fc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (14/40)", 0x2a3fc, 0x2a41c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (15/40)", 0x2a41c, 0x2a43c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (16/40)", 0x2a43c, 0x2a45c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (17/40)", 0x2a45c, 0x2a47c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (18/40)", 0x2a47c, 0x2a49c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (19/40)", 0x2a49c, 0x2a4bc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (20/40)", 0x2a4bc, 0x2a4dc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (21/40)", 0x2a4dc, 0x2a4fc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (22/40)", 0x2a4fc, 0x2a51c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (23/40)", 0x2a51c, 0x2a53c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (24/40)", 0x2a53c, 0x2a55c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (25/40)", 0x2a55c, 0x2a57c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (26/40)", 0x2a57c, 0x2a59c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (27/40)", 0x2a59c, 0x2a5bc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (28/40)", 0x2a5bc, 0x2a5dc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (29/40)", 0x2a5dc, 0x2a5fc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (30/40)", 0x2a5fc, 0x2a61c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (31/40)", 0x2a61c, 0x2a63c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (32/40)", 0x2a63c, 0x2a65c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (33/40)", 0x2a65c, 0x2a67c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (34/40)", 0x2a67c, 0x2a69c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (35/40)", 0x2a69c, 0x2a6bc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (36/40)", 0x2a6bc, 0x2a6dc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (37/40)", 0x2a6dc, 0x2a6fc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (38/40)", 0x2a6fc, 0x2a71c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (39/40)", 0x2a71c, 0x2a73c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter Level Max Cycle (40/40)", 0x2a73c, 0x2a75c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter (Unused) Cycle (1/5)", 0x2a11c, 0x2a13c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter (Unused) Cycle (2/5)", 0x2a13c, 0x2a15c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter (Unused) Cycle (3/5)", 0x2a15c, 0x2a17c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter (Unused) Cycle (4/5)", 0x2a17c, 0x2a19c, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"Meter (Unused) Cycle (5/5)", 0x2a19c, 0x2a1bc, indexCPS2Sprites_COTAAssets, 0x9e },
    { L"HUD", 0x29cfc, 0x29d1c, indexCPS2Sprites_COTAAssets , 0x12 },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_WOLVERINE[] =
{
    { L"Background Layer 1", 0x37f76, 0x38176, indexCPS2Sprites_COTAAssets, 0x13, &pairFullyLinkedNode },
    { L"Background Layer 2", 0x38176, 0x38376, indexCPS2Sprites_COTAAssets, 0x14 },
    { L"Background: Animation Cycle 1/7", 0x38376, 0x38396, indexCPS2Sprites_COTAAssets, 0x15 },
        { L"Background: Animation Cycle 2/7", 0x38396, 0x383b6, indexCPS2Sprites_COTAAssets, 0x15 },
        { L"Background: Animation Cycle 3/7", 0x383b6, 0x383d6, indexCPS2Sprites_COTAAssets, 0x15 },
        { L"Background: Animation Cycle 4/7", 0x383d6, 0x383f6, indexCPS2Sprites_COTAAssets, 0x15 },
        { L"Background: Animation Cycle 5/7", 0x383f6, 0x38416, indexCPS2Sprites_COTAAssets, 0x15 },
        { L"Background: Animation Cycle 6/7", 0x38416, 0x38436, indexCPS2Sprites_COTAAssets, 0x15 },
        { L"Background: Animation Cycle 7/7", 0x38436, 0x38456, indexCPS2Sprites_COTAAssets, 0x15 },
    // Stage elements breakdown:
    // 1: triceratops 
    // 2: gallimimus
    // 3: overgrowth covering
    // 4: tyrannosaurus rex
    { L"Stage Elements: Gallimimus", 0x2abc8, 0x2abe8, indexCPS2Sprites_COTAAssets, 0x16 },
    { L"Stage Elements: Tyrannosaurus Rex", 0x2ac08, 0x2ac28, indexCPS2Sprites_COTAAssets, 0x17 },

    { L"Middle Layer 1", 0x33032, 0x33232, indexCPS2Sprites_COTAAssets, 0x18 },
    { L"Middle Layer 2", 0x33232, 0x33292, indexCPS2Sprites_COTAAssets, 0x19 },
    { L"Mid Layer: Animation Cycle 1/7", 0x33432, 0x33452, indexCPS2Sprites_COTAAssets, 0x1a },
        { L"Mid Layer: Animation Cycle 2/7", 0x33452, 0x33472, indexCPS2Sprites_COTAAssets, 0x1a },
        { L"Mid Layer: Animation Cycle 3/7", 0x33472, 0x33492, indexCPS2Sprites_COTAAssets, 0x1a },
        { L"Mid Layer: Animation Cycle 4/7", 0x33492, 0x334b2, indexCPS2Sprites_COTAAssets, 0x1a },
        { L"Mid Layer: Animation Cycle 5/7", 0x334b2, 0x334d2, indexCPS2Sprites_COTAAssets, 0x1a },
        { L"Mid Layer: Animation Cycle 6/7", 0x334d2, 0x334f2, indexCPS2Sprites_COTAAssets, 0x1a },
        { L"Mid Layer: Animation Cycle 7/7", 0x334f2, 0x33512, indexCPS2Sprites_COTAAssets, 0x1a },

    { L"Stage Elements: Overgrowth", 0x2abe8, 0x2ac08, indexCPS2Sprites_COTAAssets, 0x1b },
    { L"Stage Elements: Triceratops", 0x2aba8, 0x2abc8, indexCPS2Sprites_COTAAssets, 0x1c },

    { L"FIGHT text", 0x2ace8, 0x2ad08 },
    { L"Unknown", 0x2deee, 0x2df6e },
    { L"Foreground", 0x2df6e, 0x2dfae, indexCPS2Sprites_COTAAssets, 0x1d },
    // Stage elements breakdown:
    // 1: Victory birds
    // 2: Lava Splashes
    // 3: Rock projectiles
    // 4: Dust clouds
    // 5: ?
    { L"Stage Elements: Foreground", 0x2ac28, 0x2ace8, indexCPS2Sprites_COTAAssets, 0x1e },
};

// Up, right, down
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_PSYLOCKE[] =
{
    { L"512: Background Moon and City", 0x2e36e, 0x2e46e, indexCPS2Sprites_COTAAssets, 0x1f, &pairFullyLinkedNode },
    { L"512: Background City Animation Cycles 1/3", 0x2e48e, 0x2e50e, indexCPS2Sprites_COTAAssets, 0x20 },
    { L"512: Background City Animation Cycles 2/3", 0x2e6ee, 0x2e8ce, indexCPS2Sprites_COTAAssets, 0x21 },
    { L"512: Background City Animation Cycles 3/3", 0x2e8ce, 0x2e92e, indexCPS2Sprites_COTAAssets, 0x22 },

    { L"2048: Building 1",          0x38456, 0x38656, indexCPS2Sprites_COTAAssets, 0x23 },
    { L"2048: Building 2",          0x38656, 0x38856, indexCPS2Sprites_COTAAssets, 0x24 },
    { L"2048: Building Animation Cycles 1",    0x38876, 0x388d6, indexCPS2Sprites_COTAAssets, 0x25 },
    { L"2048: Building Animation Cycles 2",    0x388d6, 0x38936, indexCPS2Sprites_COTAAssets, 0x26 },

    { L"Unknown",                   0x2e2ee, 0x2e36e, indexCPS2Sprites_COTAAssets, 0x27 },

    { L"512: Steel door",           0x2e46e, 0x2e48e, indexCPS2Sprites_COTAAssets, 0x28 },

    { L"1024: fighting platform",   0x33512, 0x33552, indexCPS2Sprites_COTAAssets, 0x29 },
    { L"Foreground sprites",        0x2af68, 0x2b0c8, indexCPS2Sprites_COTAAssets, 0x2a },
};

// Mutant hunting: has a boat sublevel
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_COLOSSUS[] =
{
    { L"512: Background 1",                    0x2e92e, 0x2eb2e, indexCPS2Sprites_COTAAssets, 0x2b, &pairFullyLinkedNode },
    { L"512: Background 2",                    0x2eb2e, 0x2ec2e, indexCPS2Sprites_COTAAssets, 0x2c },
    { L"512: Background Animation Cycles 1/2", 0x2ed2e, 0x2ef0e, indexCPS2Sprites_COTAAssets, 0x2d },
    { L"512: Background Animation Cycles 2/2", 0x2ef0e, 0x2efee, indexCPS2Sprites_COTAAssets, 0x2e },

    { L"2048: Background and Buildings",    0x38936, 0x38b36, indexCPS2Sprites_COTAAssets, 0x2f },
    { L"2048: Buildings",                   0x38b36, 0x38d36, indexCPS2Sprites_COTAAssets, 0x30 },
    
    { L"2048: Buildings Animation Cycles",  0x38d36, 0x38ed6, indexCPS2Sprites_COTAAssets, 0x31 },
    { L"2048: Water and Sewers Animation Cycles", 0x38ed6, 0x39056, indexCPS2Sprites_COTAAssets, 0x32 },

    { L"1024: Middle: Background City 1", 0x33552, 0x33712, indexCPS2Sprites_COTAAssets, 0x33 },
    { L"1024: Middle: Background City 2", 0x33712, 0x33912, indexCPS2Sprites_COTAAssets, 0x34 },
    { L"1024: Unknown?", 0x33912, 0x33952  },

    // ? ? ? ?
    // 2 pillar, stage break rocks, boat left part
    // down sentinel
    // building 2
    { L"Stage Objects 1", 0x2b328, 0x2b3a8, indexCPS2Sprites_COTAAssets, 0xa2 },
    // ? ? ? ?
    // water
    // active sentinels
    // impact / boat right part
    // FIGHT text
    { L"Stage Objects 2", 0x2b3c8, 0x2b488, indexCPS2Sprites_COTAAssets, 0xa3 },

    { L"Soldiers and Van Animation 1/4", 0x2b3a8, 0x2b3c8, indexCPS2Sprites_COTAAssets, 0xa4 },
    { L"Soldiers and Van Animation 2/4", 0x2b488, 0x2b4a8, indexCPS2Sprites_COTAAssets, 0xa4 },
    { L"Soldiers and Van Animation 3/4", 0x2b4a8, 0x2b4c8, indexCPS2Sprites_COTAAssets, 0xa4 },
    { L"Soldiers and Van Animation 4/4", 0x2b4c8, 0x2b4e8, indexCPS2Sprites_COTAAssets, 0xa4 },
};

// Cyclops / Gouki: Danger Room
    // Normal
    // Jungle mode
    // Ocean mode
    // Space mode
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_CYCLOPS_NORMAL[] =
{
    { L"Walls 1",  0x33952, 0x33972, indexCPS2Sprites_COTAAssets, 0x48, &pairFullyLinkedNode },
    { L"Walls 2", 0x33ab2, 0x33ad2, indexCPS2Sprites_COTAAssets, 0x49 },
    { L"Walls 3", 0x33b12, 0x33b32, indexCPS2Sprites_COTAAssets, 0x4a },
    { L"Walls 4", 0x33c32, 0x33c52, indexCPS2Sprites_COTAAssets, 0x4b },

    { L"Walls: ???", 0x33c52, 0x33cf2 },

        { L"Unused?: Wall Elements", 0x2efee, 0x2f06e },

    { L"Door", 0x2f06e, 0x2f0ee, indexCPS2Sprites_COTAAssets, 0x4c },
        { L"Observation Area (All)", 0x2f0ee, 0x2f10e, indexCPS2Sprites_COTAAssets, 0x4e },
    { L"Door Inset", 0x2f10e, 0x2f12e, indexCPS2Sprites_COTAAssets, 0x4f },

    // Water only?
    { L"Unused?: Observation Area Right Inset: Water",  0x2f5ce, 0x2f5ee },

    // No Space, Jungle matches
    // observed for normal
    { L"Observation Area Far Left Inset Animation Cycle 1/5", 0x2f5ee, 0x2f60e, indexCPS2Sprites_COTAAssets, 0x50 },
        { L"Observation Area Far Left Inset Animation Cycle 2/5", 0x2f60e, 0x2f62e, indexCPS2Sprites_COTAAssets, 0x50 },
        { L"Observation Area Far Left Inset Animation Cycle 3/5", 0x2f62e, 0x2f64e, indexCPS2Sprites_COTAAssets, 0x50 },
        { L"Observation Area Far Left Inset Animation Cycle 4/5", 0x2f64e, 0x2f66e, indexCPS2Sprites_COTAAssets, 0x50 },
        { L"Observation Area Far Left Inset Animation Cycle 5/5", 0x2f66e, 0x2f68e, indexCPS2Sprites_COTAAssets, 0x50 },

    // observed for normal and water
    { L"Observation Area Left Inset Animation Cycle 1/5", 0x2f68e, 0x2f6ae, indexCPS2Sprites_COTAAssets, 0x51 },
    { L"Observation Area Left Inset Animation Cycle 2/5", 0x2f6ae, 0x2f6ce, indexCPS2Sprites_COTAAssets, 0x51 },
    { L"Observation Area Left Inset Animation Cycle 3/5", 0x2f6ce, 0x2f6ee, indexCPS2Sprites_COTAAssets, 0x51 },
    { L"Observation Area Left Inset Animation Cycle 4/5", 0x2f6ee, 0x2f70e, indexCPS2Sprites_COTAAssets, 0x51 },
    { L"Observation Area Left Inset Animation Cycle 5/5", 0x2f70e, 0x2f72e, indexCPS2Sprites_COTAAssets, 0x51 },
    // observed for normal
    { L"Observation Area Right Lower Inset Animation Cycle 1/5", 0x2f72e, 0x2f74e, indexCPS2Sprites_COTAAssets, 0x52 },
    { L"Observation Area Right Lower Inset Animation Cycle 2/5", 0x2f74e, 0x2f76e, indexCPS2Sprites_COTAAssets, 0x52 },
    { L"Observation Area Right Lower Inset Animation Cycle 3/5", 0x2f76e, 0x2f78e, indexCPS2Sprites_COTAAssets, 0x52 },
    { L"Observation Area Right Lower Inset Animation Cycle 4/5", 0x2f78e, 0x2f7ae, indexCPS2Sprites_COTAAssets, 0x52 },
    { L"Observation Area Right Lower Inset Animation Cycle 5/5", 0x2f7ae, 0x2f7ce, indexCPS2Sprites_COTAAssets, 0x52 },

    { L"Observation Area Middle Left", 0x2f12e, 0x2f14e, indexCPS2Sprites_COTAAssets, 0xa5 },
    { L"Observation Area Middle Inset Animation Cycle", 0x2f14e, 0x2f16e, indexCPS2Sprites_COTAAssets, 0x53 },
    { L"Observation Area Middle Right Inset", 0x2f16e, 0x2f18e, indexCPS2Sprites_COTAAssets, 0xa6 },
    { L"Observation Area Left Inset Animation Cycle", 0x2f18e, 0x2f1ae, indexCPS2Sprites_COTAAssets, 0xa7 },
    { L"Observation Area Right Inset Animation Cycle", 0x2f1ae, 0x2f1ce, indexCPS2Sprites_COTAAssets, 0x54 },

    // There's another set of 4 door palettes starting at 0x33db2 to 0x34072: unclear if these are used

    { L"Sprites 1", 0x2b6e8, 0x2b8e8, indexCPS2Sprites_COTAAssets, 0xa8 },
    { L"Unused?: Sprites 2", 0x2b8e8, 0x2b908 },

    // Window animation needs to be after sprites to cover the Professor
    // Common?
    { L"Window Animation Cycle 1/4", 0x39596, 0x395b6, indexCPS2Sprites_COTAAssets, 0x55 },
    { L"Window Animation Cycle 2/4", 0x395b6, 0x395d6, indexCPS2Sprites_COTAAssets, 0x55 },
    { L"Window Animation Cycle 3/4", 0x395d6, 0x395f6, indexCPS2Sprites_COTAAssets, 0x55 },
    { L"Window Animation Cycle 4/4", 0x395f6, 0x39616, indexCPS2Sprites_COTAAssets, 0x55 },
    // Animation cycle element? 0x39956, 0x39976
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_CYCLOPS_SPACE[] =
{
    { L"Walls 1", 0x33972, 0x339d2, indexCPS2Sprites_COTAAssets, 0x56, &pairFullyLinkedNode },
    { L"Walls 2", 0x33a52, 0x33a72, indexCPS2Sprites_COTAAssets, 0x57 },
    { L"Walls 3", 0x33b72, 0x33c32, indexCPS2Sprites_COTAAssets, 0x58 },

    { L"Door", 0x2f3ee, 0x2f46e, indexCPS2Sprites_COTAAssets, 0x4c },
    { L"Door Inset", 0x2f46e, 0x2f48e, indexCPS2Sprites_COTAAssets, 0x4f },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_CYCLOPS_WATER[] =
{
    { L"Walls 1", 0x339d2, 0x33a12, indexCPS2Sprites_COTAAssets, 0x59, &pairFullyLinkedNode },
    { L"Walls 2", 0x33cf2, 0x33d52, indexCPS2Sprites_COTAAssets, 0x5a },

    { L"Door", 0x2f52e, 0x2f5ae, indexCPS2Sprites_COTAAssets, 0x4c },
    { L"Door Inset", 0x2f5ae, 0x2f5ce, indexCPS2Sprites_COTAAssets, 0x4f },

    { L"Aquatic Flooring", 0x39556, 0x39576, indexCPS2Sprites_COTAAssets, 0x5b },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_CYCLOPS_JUNGLE[] =
{

    { L"Walls 1", 0x33a12, 0x33a52, indexCPS2Sprites_COTAAssets, 0x5c, &pairFullyLinkedNode },
    { L"Walls 2", 0x33a72, 0x33ab2, indexCPS2Sprites_COTAAssets, 0x5d },
    { L"Walls 3", 0x33ad2, 0x33b12, indexCPS2Sprites_COTAAssets, 0x5e },
    { L"Walls 4", 0x33b32, 0x33b72, indexCPS2Sprites_COTAAssets, 0x5f },

    { L"Door", 0x2f48e, 0x2f50e, indexCPS2Sprites_COTAAssets, 0x4c },
    { L"Door Inset", 0x2f50e, 0x2f52e, indexCPS2Sprites_COTAAssets, 0x4f },

    { L"Vine", 0x39576, 0x39596, indexCPS2Sprites_COTAAssets, 0x60 },
    { L"Vine / Frame", 0x39616, 0x39636, indexCPS2Sprites_COTAAssets, 0x4d },
};

// Storm: On the Blackbird
// Is set to either
    // Afternoon
    // Sunset
    // or Night
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_STORM_SUNSET[] =
{
    { L"Ocean and Sky (Sunset)", 0x39d56, 0x39dd6, indexCPS2Sprites_COTAAssets, 0x41, &pairFullyLinkedNode },
    { L"Aircraft Carrier (Sunset)", 0x2f86e, 0x2f90e, indexCPS2Sprites_COTAAssets, 0x42 },

    { L"Crashing Wave (Sunset)", 0x2baa8, 0x2bac8, indexCPS2Sprites_COTAAssets, 0xa9 },
    { L"Flags (Sunset)", 0x2bac8, 0x2bae8, indexCPS2Sprites_COTAAssets, 0xaa },
    { L"Helicopter (Sunset)", 0x2bb08, 0x2bb28, indexCPS2Sprites_COTAAssets, 0xac },
    { L"Blackbird (Sunset)", 0x34152, 0x341d2, indexCPS2Sprites_COTAAssets, 0x43 },
    { L"Ground Impact (Sunset)", 0x2bae8, 0x2bb08, indexCPS2Sprites_COTAAssets, 0xab },

    { L"Unknown 1?", 0x2bb28, 0x2bb48 },
    { L"Seabirds", 0x2bb48, 0x2bb68, indexCPS2Sprites_COTAAssets, 0xad },
    { L"Aircraft Carrier Unused?", 0x2f7ee, 0x2f86e },
    { L"Unknown 2?", 0x2bb68, 0x2bbe8 },
    { L"\"FIGHT\" Text", 0x2bbe8, 0x2bc08, indexCPS2Sprites_COTAAssets, 0xae },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_STORM_AFTERNOON[] =
{
    { L"Ocean and Sky (Afternoon)", 0x3a156, 0x3a1d6, indexCPS2Sprites_COTAAssets, 0x41, &pairFullyLinkedNode },
    { L"Aircraft Carrier (Afternoon)",  0x2fbee, 0x2fc8e, indexCPS2Sprites_COTAAssets, 0x42 },

    { L"Crashing Wave (Afternoon)", 0x2bc48, 0x2bc68, indexCPS2Sprites_COTAAssets, 0xa9 },
    { L"Flags (Afternoon)", 0x2bc08, 0x2bc28, indexCPS2Sprites_COTAAssets, 0xaa },
    { L"Helicopter (Unused: Afternoon)", 0x2bd08, 0x2bd28, indexCPS2Sprites_COTAAssets, 0xac },
    { L"Unknown 3 (Afternoon)", 0x2bc88, 0x2bca8 },
    { L"Water Inset (Afternoon)", 0x2bd48, 0x2bd68, indexCPS2Sprites_COTAAssets, 0xaf },

    { L"Blackbird: Afternoon", 0x34552, 0x345d2, indexCPS2Sprites_COTAAssets, 0x43 },
    { L"Ground Impact (Afternoon)", 0x2bcc8, 0x2bce8, indexCPS2Sprites_COTAAssets, 0xab },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_STORM_NIGHT[] =
{
    { L"Ocean and Sky (Night)", 0x3a1d6, 0x3a256, indexCPS2Sprites_COTAAssets, 0x41, &pairFullyLinkedNode },
    { L"Aircraft Carrier (Night)", 0x2fc8e, 0x2fd2e, indexCPS2Sprites_COTAAssets, 0x42 },

    { L"Crashing Wave (Night)", 0x2bc68, 0x2bc88, indexCPS2Sprites_COTAAssets, 0xa9 },
    { L"Flags (Night)", 0x2bc28, 0x2bc48, indexCPS2Sprites_COTAAssets, 0xaa },
    { L"Helicopter (Unused: Night)", 0x2bd28, 0x2bd48, indexCPS2Sprites_COTAAssets, 0xac },
    { L"Unknown 3 (Night)", 0x2bca8, 0x2bcc8 },
    { L"Water Inset (Night)", 0x2bd68, 0x2bd88, indexCPS2Sprites_COTAAssets, 0xb0 },

    { L"Blackbird (Night)", 0x345d2, 0x34652, indexCPS2Sprites_COTAAssets, 0x43 },
    { L"Ground Impact (Night)", 0x2bce8, 0x2bd08, indexCPS2Sprites_COTAAssets, 0xab },
};

// Iceman: Ice on the Beach
// icicle drifts right
// dolphins surface at end
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_ICEMAN[] =
{
    { L"Background Ocean and Sky", 0x2fdae, 0x2fe4e, indexCPS2Sprites_COTAAssets, 0x61, &pairFullyLinkedNode },

    { L"Island 1", 0x3a256, 0x3a436, indexCPS2Sprites_COTAAssets, 0x62 },
    { L"Island 2 and Ocean", 0x3a436, 0x3a496, indexCPS2Sprites_COTAAssets, 0x63 },
    { L"Waves Hitting Rock Animation Cycle 1/8", 0x3a496, 0x3a4b6, indexCPS2Sprites_COTAAssets, 0xb1 },
        { L"Waves Hitting Rock Animation Cycle 2/8", 0x3a996, 0x3a9b6, indexCPS2Sprites_COTAAssets, 0xb1 },
        { L"Waves Hitting Rock Animation Cycle 3/8", 0x3a9b6, 0x3a9d6, indexCPS2Sprites_COTAAssets, 0xb1 },
        { L"Waves Hitting Rock Animation Cycle 4/8", 0x3a9d6, 0x3a9f6, indexCPS2Sprites_COTAAssets, 0xb1 },
        { L"Waves Hitting Rock Animation Cycle 5/8", 0x3a9f6, 0x3aa16, indexCPS2Sprites_COTAAssets, 0xb1 },
        { L"Waves Hitting Rock Animation Cycle 6/8", 0x3aa16, 0x3aa36, indexCPS2Sprites_COTAAssets, 0xb1 },
        { L"Waves Hitting Rock Animation Cycle 7/8", 0x3aa36, 0x3aa56, indexCPS2Sprites_COTAAssets, 0xb1 },
        { L"Waves Hitting Rock Animation Cycle 8/8", 0x3aa56, 0x3aa76, indexCPS2Sprites_COTAAssets, 0xb1 },

    { L"Shoreline Animation Cycle 1/8", 0x3a4b6, 0x3a4d6, indexCPS2Sprites_COTAAssets, 0xb2 },
        { L"Shoreline Animation Cycle 2/8", 0x3a656, 0x3a676, indexCPS2Sprites_COTAAssets, 0xb2 },
        { L"Shoreline Animation Cycle 3/8", 0x3a676, 0x3a696, indexCPS2Sprites_COTAAssets, 0xb2 },
        { L"Shoreline Animation Cycle 4/8", 0x3a696, 0x3a6b6, indexCPS2Sprites_COTAAssets, 0xb2 },
        { L"Shoreline Animation Cycle 5/8", 0x3a6b6, 0x3a6d6, indexCPS2Sprites_COTAAssets, 0xb2 },
        { L"Shoreline Animation Cycle 6/8", 0x3a6d6, 0x3a6f6, indexCPS2Sprites_COTAAssets, 0xb2 },
        { L"Shoreline Animation Cycle 7/8", 0x3a6f6, 0x3a716, indexCPS2Sprites_COTAAssets, 0xb2 },
        { L"Shoreline Animation Cycle 8/8", 0x3a716, 0x3a736, indexCPS2Sprites_COTAAssets, 0xb2 },

    { L"Shallow Water Animation Cycle 1/7", 0x3a4d6, 0x3a4f6, indexCPS2Sprites_COTAAssets, 0xb3 },
        { L"Shallow Water Animation Cycle 2/7", 0x3a756, 0x3a776, indexCPS2Sprites_COTAAssets, 0xb3 },
        { L"Shallow Water Animation Cycle 3/7", 0x3a776, 0x3a796, indexCPS2Sprites_COTAAssets, 0xb3 },
        { L"Shallow Water Animation Cycle 4/7", 0x3a796, 0x3a7b6, indexCPS2Sprites_COTAAssets, 0xb3 },
        { L"Shallow Water Animation Cycle 5/7", 0x3a7b6, 0x3a7d6, indexCPS2Sprites_COTAAssets, 0xb3 },
        { L"Shallow Water Animation Cycle 6/7", 0x3a7d6, 0x3a7f6, indexCPS2Sprites_COTAAssets, 0xb3 },
        { L"Shallow Water Animation Cycle 7/7", 0x3a7f6, 0x3a816, indexCPS2Sprites_COTAAssets, 0xb3 },

    { L"Upper Water Animation Cycle 1/6", 0x3a4f6, 0x3a516, indexCPS2Sprites_COTAAssets, 0xb4 },
        { L"Upper Water Animation Cycle 2/6", 0x3a8d6, 0x3a8f6, indexCPS2Sprites_COTAAssets, 0xb4 },
        { L"Upper Water Animation Cycle 3/6", 0x3a8f6, 0x3a916, indexCPS2Sprites_COTAAssets, 0xb4 },
        { L"Upper Water Animation Cycle 4/6", 0x3a916, 0x3a936, indexCPS2Sprites_COTAAssets, 0xb4 },
        { L"Upper Water Animation Cycle 5/6", 0x3a936, 0x3a956, indexCPS2Sprites_COTAAssets, 0xb4 },
        { L"Upper Water Animation Cycle 6/6", 0x3a956, 0x3a976, indexCPS2Sprites_COTAAssets, 0xb4 },

    { L"Upper Deeper Water", 0x3a516, 0x3a536, indexCPS2Sprites_COTAAssets, 0xb5 },

    { L"Lower Water Animation Cycle 1/5", 0x3a536, 0x3a556, indexCPS2Sprites_COTAAssets, 0xb6 },
        { L"Lower Water Animation Cycle 2/5", 0x3a836, 0x3a856, indexCPS2Sprites_COTAAssets, 0xb6 },
        { L"Lower Water Animation Cycle 3/5", 0x3a856, 0x3a876, indexCPS2Sprites_COTAAssets, 0xb6 },
        { L"Lower Water Animation Cycle 4/5", 0x3a876, 0x3a896, indexCPS2Sprites_COTAAssets, 0xb6 },
        { L"Lower Water Animation Cycle 5/5", 0x3a896, 0x3a8b6, indexCPS2Sprites_COTAAssets, 0xb6 },

    { L"Unknown 1", 0x3a556, 0x3a5d6 },

    { L"Middle Parts 1?", 0x34652, 0x346f2 },
    { L"Middle Parts 2?", 0x34712, 0x347b2 },

    { L"Sprites", 0x2be88, 0x2bfc8, indexCPS2Sprites_COTAAssets, 0xb7 },

    { L"Iceberg Animation Cycle 1/8", 0x346f2, 0x34712, indexCPS2Sprites_COTAAssets, 0x64 },
    { L"Iceberg Animation Cycle 2/8", 0x34a32, 0x34a52, indexCPS2Sprites_COTAAssets, 0x64 },
    { L"Iceberg Animation Cycle 3/8", 0x34a52, 0x34a72, indexCPS2Sprites_COTAAssets, 0x64 },
    { L"Iceberg Animation Cycle 4/8", 0x34a72, 0x34a92, indexCPS2Sprites_COTAAssets, 0x64 },
    { L"Iceberg Animation Cycle 5/8", 0x34a92, 0x34ab2, indexCPS2Sprites_COTAAssets, 0x64 },
    { L"Iceberg Animation Cycle 6/8", 0x34ab2, 0x34ad2, indexCPS2Sprites_COTAAssets, 0x64 },
    { L"Iceberg Animation Cycle 7/8", 0x34ad2, 0x34af2, indexCPS2Sprites_COTAAssets, 0x64 },
    { L"Iceberg Animation Cycle 8/8", 0x34af2, 0x34b12, indexCPS2Sprites_COTAAssets, 0x64 },

    { L"Unknown 2", 0x348f2, 0x34a12 },

    { L"Foreground Ice Animation Cycle 1/7", 0x2be68, 0x2be88, indexCPS2Sprites_COTAAssets, 0xb8 },
        { L"Foreground Ice Animation Cycle 2/7", 0x2c008, 0x2c028, indexCPS2Sprites_COTAAssets, 0xb8 },
        { L"Foreground Ice Animation Cycle 3/7", 0x2c028, 0x2c048, indexCPS2Sprites_COTAAssets, 0xb8 },
        { L"Foreground Ice Animation Cycle 4/7", 0x2c048, 0x2c068, indexCPS2Sprites_COTAAssets, 0xb8 },
        { L"Foreground Ice Animation Cycle 5/7", 0x2c068, 0x2c088, indexCPS2Sprites_COTAAssets, 0xb8 },
        { L"Foreground Ice Animation Cycle 6/7", 0x2c088, 0x2c0a8, indexCPS2Sprites_COTAAssets, 0xb8 },
        { L"Foreground Ice Animation Cycle 7/7", 0x2c0a8, 0x2c0c8, indexCPS2Sprites_COTAAssets, 0xb8 },
};

// Spiral: Mojo World
// Ground cracks and drops you to a lower level.
// There are 3 lower levels
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_SPIRAL[] =
{
    { L"Background 1", 0x3aa76, 0x3aa96, indexCPS2Sprites_COTAAssets, 0x92, &pairFullyLinkedNode },
    { L"Background 2", 0x3aa96, 0x3aab6, indexCPS2Sprites_COTAAssets, 0x93 },
    { L"Background 3", 0x3aab6, 0x3acb6, indexCPS2Sprites_COTAAssets, 0x94 },
    { L"Background 4", 0x3acb6, 0x3ae56, indexCPS2Sprites_COTAAssets, 0x95 },

    { L"Background Sky Animation Cycles 1", 0x3ae76, 0x3afb6 },
    { L"Background Sky Animation Cycles 2", 0x3afb6, 0x3b196 },
    { L"Background Sky Animation Cycles 3", 0x3b196, 0x3b316 },
    { L"Background Sky Animation Cycles 4", 0x3b316, 0x3b4f6 },
    { L"Background Sky Animation Cycles 5", 0x3b4f6, 0x3b636 },

    { L"Common colors?", 0x3012e, 0x301ae },
    
    { L"Poles", 0x301ae, 0x302ee, indexCPS2Sprites_COTAAssets, 0x96 },
    { L"Pole Animation Cycles 1", 0x3052e, 0x305ce, indexCPS2Sprites_COTAAssets, 0x97 },
    { L"Pole Animation Cycles 2", 0x305ce, 0x3066e, indexCPS2Sprites_COTAAssets, 0x98 },

    { L"Foreground Poles and Stage", 0x34b12, 0x34d12, indexCPS2Sprites_COTAAssets, 0x99 },
    
    // 2nd part (yellow) is flooring
    { L"Foreground Animation Cycles 1", 0x34f12, 0x350b2 },
    // 1st part (yellow) is upper flooring
    { L"Foreground Animation Cycles 2", 0x350b2, 0x352b2 },
    { L"Foreground Animation Cycles 3", 0x352b2, 0x354b2 },
    { L"Foreground Animation Cycles 4", 0x354b2, 0x356b2 },
    { L"Foreground Animation Cycles 5", 0x356b2, 0x357b2 },

    // background hand and pillar insets
        // hand is pretty much as you see
        // line 1: stage 1 right falling debris
        // line 2: stage 1 left falling debris
        // 3 ?
        // 4: sky snails (stage 2) can jump to see all
        // 5: ?
        // 6: sky snail flames
    { L"Sprites 1?", 0x2c228, 0x2c388 },
    // first 6: stage 2 bits. line 1 stage 2 falling debris
            // line 4 also creepy tentacle bit in stage 3
    { L"Sprites 2?", 0x2c388, 0x2c588 },
    { L"Sprites 3?", 0x2c588, 0x2c5c8 },
};

// Silver Samurai: Samurai Shrine
// Effects: breakable objects, ninjas, and fire
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_SILVERSAMURAI[] =
{
    { L"Background Mountain", 0x3b656, 0x3b676, indexCPS2Sprites_COTAAssets, 0x72, &pairFullyLinkedNode },
    { L"Background Sky", 0x3b696, 0x3b6d6, indexCPS2Sprites_COTAAssets, 0x73 },

    { L"Background Forest Normal", 0x3b636, 0x3b656, indexCPS2Sprites_COTAAssets, 0x74 },

    { L"Background Mountain Normal", 0x3b676, 0x3b696, indexCPS2Sprites_COTAAssets, 0x75 },

    { L"Background Center Forest Normal", 0x3b6d6, 0x3b6f6, indexCPS2Sprites_COTAAssets, 0x76 },

    { L"Shrine: Pillars", 0x3066e, 0x3068e, indexCPS2Sprites_COTAAssets, 0x77 },
    
    { L"Shrine: Arch Edges", 0x3068e, 0x306ae, indexCPS2Sprites_COTAAssets, 0x78 },

    { L"Shrine: Arch", 0x306ae, 0x306ce, indexCPS2Sprites_COTAAssets, 0x79 },

    { L"Shrine: Footbridge Left Middle", 0x306ce, 0x306ee, indexCPS2Sprites_COTAAssets, 0x7a },

    { L"Shrine: Footbridge Close", 0x306ee, 0x3070e, indexCPS2Sprites_COTAAssets, 0x7b },

    { L"Shrine: Footbridge Far", 0x3070e, 0x3072e, indexCPS2Sprites_COTAAssets, 0x7c },

    { L"Shrine: Footbridge Right Middle", 0x3072e, 0x3074e, indexCPS2Sprites_COTAAssets, 0x7d },

    { L"Shrine: Center Bell", 0x3074e, 0x3076e, indexCPS2Sprites_COTAAssets, 0x7e },

    { L"Shrine: Pillars Base", 0x3076e, 0x3078e, indexCPS2Sprites_COTAAssets, 0x7f },
    
    { L"Shrine: Statue", 0x3078e, 0x307ae, indexCPS2Sprites_COTAAssets, 0x80 },

    { L"Temple sprites", 0x2c5c8, 0x2c728 },

    { L"Unknown?", 0x358f2, 0x35912 },

    { L"Stage", 0x357b2, 0x357f2, indexCPS2Sprites_COTAAssets, 0x81 },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_SILVERSAMURAI_ANIM[] =
{
    { L"Background Forest Flames Animation 1 1/3", 0x3ba36, 0x3ba56, indexCPS2Sprites_COTAAssets, 0x74 },
    { L"Background Forest Flames Animation 1 2/3", 0x3ba56, 0x3ba76, indexCPS2Sprites_COTAAssets, 0x74 },
    { L"Background Forest Flames Animation 1 3/3", 0x3ba76, 0x3ba96, indexCPS2Sprites_COTAAssets, 0x74 },

    { L"Background Forest Flames Animation 2 1/2", 0x3bbb6, 0x3bbd6, indexCPS2Sprites_COTAAssets, 0x74 },
    { L"Background Forest Flames Animation 2 2/2", 0x3bbd6, 0x3bbf6, indexCPS2Sprites_COTAAssets, 0x74 },

    { L"Background Mountain Flames Animation 2 1/3", 0x3bab6, 0x3bad6, indexCPS2Sprites_COTAAssets, 0x75 },
    { L"Background Mountain Flames Animation 2 2/3", 0x3bad6, 0x3baf6, indexCPS2Sprites_COTAAssets, 0x75 },
    { L"Background Mountain Flames Animation 2 3/3", 0x3baf6, 0x3bb16, indexCPS2Sprites_COTAAssets, 0x75 },

    { L"Background Mountain Flames Animation 3 1/2", 0x3bc16, 0x3bc36, indexCPS2Sprites_COTAAssets, 0x75 },
    { L"Background Mountain Flames Animation 3 2/2", 0x3bc36, 0x3bc56, indexCPS2Sprites_COTAAssets, 0x75 },

    { L"Background Center Forest Flames Animation 1/3", 0x3bb36, 0x3bb56, indexCPS2Sprites_COTAAssets, 0x76 },
    { L"Background Center Forest Flames Animation 2/3", 0x3bb56, 0x3bb76, indexCPS2Sprites_COTAAssets, 0x76 },
    { L"Background Center Forest Flames Animation 3/3", 0x3bb76, 0x3bb96, indexCPS2Sprites_COTAAssets, 0x76 },

    { L"Shrine Enflamed: Pillars Animation 1 1/3", 0x30a6e, 0x30a8e, indexCPS2Sprites_COTAAssets, 0x77 },
    { L"Shrine Enflamed: Pillars Animation 1 2/3", 0x30a8e, 0x30aae, indexCPS2Sprites_COTAAssets, 0x77 },
    { L"Shrine Enflamed: Pillars Animation 1 3/3", 0x30aae, 0x30ace, indexCPS2Sprites_COTAAssets, 0x77 },

    { L"Shrine Enflamed: Pillars Animation 2 1/2", 0x30f6e, 0x30f8e, indexCPS2Sprites_COTAAssets, 0x77 },
    { L"Shrine Enflamed: Pillars Animation 2 2/2", 0x30f8e, 0x30fae, indexCPS2Sprites_COTAAssets, 0x77 },

    { L"Shrine Enflamed: Arch Edges Animation 1 1/3", 0x30aee, 0x30b0e, indexCPS2Sprites_COTAAssets, 0x78 },
    { L"Shrine Enflamed: Arch Edges Animation 1 2/3", 0x30b0e, 0x30b2e, indexCPS2Sprites_COTAAssets, 0x78 },
    { L"Shrine Enflamed: Arch Edges Animation 1 3/3", 0x30b2e, 0x30b4e, indexCPS2Sprites_COTAAssets, 0x78 },

    { L"Shrine Enflamed: Arch Edges Animation 2 1/2", 0x30fce, 0x30fee, indexCPS2Sprites_COTAAssets, 0x78 },
    { L"Shrine Enflamed: Arch Edges Animation 2 2/2", 0x30fee, 0x3100e, indexCPS2Sprites_COTAAssets, 0x78 },

    { L"Shrine Enflamed: Arch Animation 1 1/3", 0x30b6e, 0x30b8e, indexCPS2Sprites_COTAAssets, 0x79 },
    { L"Shrine Enflamed: Arch Animation 1 2/3", 0x30b8e, 0x30bae, indexCPS2Sprites_COTAAssets, 0x79 },
    { L"Shrine Enflamed: Arch Animation 1 3/3", 0x30bae, 0x30bce, indexCPS2Sprites_COTAAssets, 0x79 },

    { L"Shrine Enflamed: Arch Animation 2 1/2", 0x3102e, 0x3104e, indexCPS2Sprites_COTAAssets, 0x79 },
    { L"Shrine Enflamed: Arch Animation 2 2/2", 0x3104e, 0x3106e, indexCPS2Sprites_COTAAssets, 0x79 },

    { L"Shrine Enflamed: Footbridge Left Middle Animation 1 1/3", 0x30bee, 0x30c0e, indexCPS2Sprites_COTAAssets, 0x7a },
    { L"Shrine Enflamed: Footbridge Left Middle Animation 1 2/3", 0x30c0e, 0x30c2e, indexCPS2Sprites_COTAAssets, 0x7a },
    { L"Shrine Enflamed: Footbridge Left Middle Animation 1 3/3", 0x30c2e, 0x30c4e, indexCPS2Sprites_COTAAssets, 0x7a },

    { L"Shrine Enflamed: Footbridge Left Middle Animation 2 1/2", 0x3108e, 0x310ae, indexCPS2Sprites_COTAAssets, 0x7a },
    { L"Shrine Enflamed: Footbridge Left Middle Animation 2 2/2", 0x310ae, 0x310ce, indexCPS2Sprites_COTAAssets, 0x7a },

    { L"Shrine Enflamed: Footbridge Close Animation 1 1/3", 0x30c6e, 0x30c8e, indexCPS2Sprites_COTAAssets, 0x7b },
    { L"Shrine Enflamed: Footbridge Close Animation 1 2/3", 0x30c8e, 0x30cae, indexCPS2Sprites_COTAAssets, 0x7b },
    { L"Shrine Enflamed: Footbridge Close Animation 1 3/3", 0x30cae, 0x30cce, indexCPS2Sprites_COTAAssets, 0x7b },

    { L"Shrine Enflamed: Footbridge Close Animation 2 1/2", 0x310ee, 0x3110e, indexCPS2Sprites_COTAAssets, 0x7b },
    { L"Shrine Enflamed: Footbridge Close Animation 2 2/2", 0x3110e, 0x3112e, indexCPS2Sprites_COTAAssets, 0x7b },

    { L"Shrine Enflamed: Footbridge Far Animation 1 1/3", 0x30cee, 0x30d0e, indexCPS2Sprites_COTAAssets, 0x7c },
    { L"Shrine Enflamed: Footbridge Far Animation 1 2/3", 0x30d0e, 0x30d2e, indexCPS2Sprites_COTAAssets, 0x7c },
    { L"Shrine Enflamed: Footbridge Far Animation 1 3/3", 0x30d2e, 0x30d4e, indexCPS2Sprites_COTAAssets, 0x7c },

    { L"Shrine Enflamed: Footbridge Far Animation 2 1/2", 0x3114e, 0x3116e, indexCPS2Sprites_COTAAssets, 0x7c },
    { L"Shrine Enflamed: Footbridge Far Animation 2 2/2", 0x3116e, 0x3118e, indexCPS2Sprites_COTAAssets, 0x7c },

    { L"Shrine Enflamed: Footbridge Right Middle Animation 1 1/3", 0x30d6e, 0x30d8e, indexCPS2Sprites_COTAAssets, 0x7d },
    { L"Shrine Enflamed: Footbridge Right Middle Animation 1 2/3", 0x30d8e, 0x30dae, indexCPS2Sprites_COTAAssets, 0x7d },
    { L"Shrine Enflamed: Footbridge Right Middle Animation 1 3/3", 0x30dae, 0x30dce, indexCPS2Sprites_COTAAssets, 0x7d },

    { L"Shrine Enflamed: Footbridge Right Middle Animation 2 1/2", 0x311ae, 0x311ce, indexCPS2Sprites_COTAAssets, 0x7d },
    { L"Shrine Enflamed: Footbridge Right Middle Animation 2 2/2", 0x311ce, 0x311ee, indexCPS2Sprites_COTAAssets, 0x7d },

    { L"Shrine Enflamed: Center Bell Animation 1 1/3", 0x30dee, 0x30e0e, indexCPS2Sprites_COTAAssets, 0x7e },
    { L"Shrine Enflamed: Center Bell Animation 1 2/3", 0x30e0e, 0x30e2e, indexCPS2Sprites_COTAAssets, 0x7e },
    { L"Shrine Enflamed: Center Bell Animation 1 3/3", 0x30e2e, 0x30e4e, indexCPS2Sprites_COTAAssets, 0x7e },

    { L"Shrine Enflamed: Center Bell Animation 2 1/2", 0x3120e, 0x3122e, indexCPS2Sprites_COTAAssets, 0x7e },
    { L"Shrine Enflamed: Center Bell Animation 2 2/2", 0x3122e, 0x3124e, indexCPS2Sprites_COTAAssets, 0x7e },

    { L"Shrine Enflamed: Pillars Base Animation 1 1/3", 0x30e6e, 0x30e8e, indexCPS2Sprites_COTAAssets, 0x7f },
    { L"Shrine Enflamed: Pillars Base Animation 1 2/3", 0x30e8e, 0x30eae, indexCPS2Sprites_COTAAssets, 0x7f },
    { L"Shrine Enflamed: Pillars Base Animation 1 3/3", 0x30eae, 0x30ece, indexCPS2Sprites_COTAAssets, 0x7f },

    { L"Shrine Enflamed: Pillars Base Animation 2 1/2", 0x3126e, 0x3128e, indexCPS2Sprites_COTAAssets, 0x7f },
    { L"Shrine Enflamed: Pillars Base Animation 2 2/2", 0x3128e, 0x312ae, indexCPS2Sprites_COTAAssets, 0x7f },

    { L"Shrine Enflamed: Statue Animation 1 3/3", 0x30eee, 0x30f0e, indexCPS2Sprites_COTAAssets, 0x80 },
    { L"Shrine Enflamed: Statue Animation 1 3/3", 0x30f0e, 0x30f2e, indexCPS2Sprites_COTAAssets, 0x80 },
    { L"Shrine Enflamed: Statue Animation 1 3/3", 0x30f2e, 0x30f4e, indexCPS2Sprites_COTAAssets, 0x80 },

    { L"Shrine Enflamed: Statue Animation 2 1/2", 0x312ce, 0x312ee, indexCPS2Sprites_COTAAssets, 0x80 },
    { L"Shrine Enflamed: Statue Animation 2 2/2", 0x312ee, 0x3130e, indexCPS2Sprites_COTAAssets, 0x80 },

    { L"Stage Flames", 0x357f2, 0x35812, indexCPS2Sprites_COTAAssets, 0x82 },
};


// Omega Red: The Deep
// Elevator transitions around stage
// Effects:
    // safety glass cracks once whale swims by
    // lights turn off
    // shutters close then open as we transition from above ground to underwater

// Super quirky Omega Red stage pairing
const stPairedPaletteInfo pairOmegaRedStage = { 1, {}, 6, 2, 3, 4, 11 };

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_OMEGARED_ABOVE[] =
{
    { L"Background 1", 0x3bcb6, 0x3bd36, indexCPS2Sprites_COTAAssets, 0x65, &pairOmegaRedStage },
    { L"Background 2", 0x3be16, 0x3be36, indexCPS2Sprites_COTAAssets, 0x66 },
    { L"Background 3", 0x3be96, 0x3bed6, indexCPS2Sprites_COTAAssets, 0x67 },
    { L"Background 4", 0x3bef6, 0x3bf36, indexCPS2Sprites_COTAAssets, 0x68 },
    { L"Background Animation Cycle 1/5", 0x3c156, 0x3c176, indexCPS2Sprites_COTAAssets, 0x69 },
    { L"Background Animation Cycle 2/5", 0x3c176, 0x3c196, indexCPS2Sprites_COTAAssets, 0x69 },
    { L"Background Animation Cycle 3/5", 0x3c196, 0x3c1b6, indexCPS2Sprites_COTAAssets, 0x69 },
    { L"Background Animation Cycle 4/5", 0x3c1b6, 0x3c1d6, indexCPS2Sprites_COTAAssets, 0x69 },
    { L"Background Animation Cycle 5/5", 0x3c1d6, 0x3c1f6, indexCPS2Sprites_COTAAssets, 0x69 },

    // This is awkward since this block visibility of the background.  So we'll leave it *unpaired* but accessible.
    { L"512: Metal Screen", 0x3146e, 0x3148e, indexCPS2Sprites_COTAAssets, 0x6a },

    // Foreground / stage
    { L"Background Building?", 0x316ee, 0x317ce },
    // This form appears both above and below
    { L"Building (Undamaged)", 0x35812, 0x358f2, indexCPS2Sprites_COTAAssets, 0x6b },

    { L"Sprites 1", 0x2c988, 0x2cb88 },
    { L"Sprites 2", 0x2cb88, 0x2cca8 },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_OMEGARED_BELOW[] =
{
    { L"Background 1", 0x3bd36, 0x3be16, indexCPS2Sprites_COTAAssets, 0x6c, &pairFullyLinkedNode },
    { L"Background 2", 0x3be36, 0x3be96, indexCPS2Sprites_COTAAssets, 0x6d },
    { L"Background 3", 0x3bed6, 0x3bef6, indexCPS2Sprites_COTAAssets, 0x6e },
    { L"Background 4?", 0x3c016, 0x3c096 },

    { L"Background Animation Cycle 1 1/5", 0x3c0b6, 0x3c0d6, indexCPS2Sprites_COTAAssets, 0x6f },
    { L"Background Animation Cycle 1 2/5", 0x3c0d6, 0x3c0f6, indexCPS2Sprites_COTAAssets, 0x6f },
    { L"Background Animation Cycle 1 3/5", 0x3c0f6, 0x3c116, indexCPS2Sprites_COTAAssets, 0x6f },
    { L"Background Animation Cycle 1 4/5", 0x3c116, 0x3c136, indexCPS2Sprites_COTAAssets, 0x6f },
    { L"Background Animation Cycle 1 5/5", 0x3c136, 0x3c156, indexCPS2Sprites_COTAAssets, 0x6f },

    { L"Background Animation Cycle 2?", 0x3c1f6, 0x3c2b6 },

    { L"512: Generics", 0x313ce, 0x3144e },
    // Fish / whale / etc
    { L"512: Whale", 0x3144e, 0x3146e, indexCPS2Sprites_COTAAssets, 0x70 },

    { L"Building: (Lit, Damaged)", 0x35c12, 0x35cf2, indexCPS2Sprites_COTAAssets, 0x71 },
};

// Sentinel: Genosha
// pillars and machines can be damaged
// If Sentinel is defeated, big Sentinel breaks down
// If Sentinel wins, big Sentinel flies off
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_SENTINEL[] =
{
    { L"Background 1", 0x3c4b6, 0x3c6b6, indexCPS2Sprites_COTAAssets, 0x8b, &pairFullyLinkedNode },
    { L"Background 2", 0x3c6b6, 0x3c8b6, indexCPS2Sprites_COTAAssets, 0x8c },

    { L"512: Common colors", 0x3180e, 0x3188e },
    { L"512: Big Sentinel Animations 1/4", 0x3188e, 0x3196e, indexCPS2Sprites_COTAAssets, 0x8d },
    { L"512: Big Sentinel Animations 2/4", 0x3196e, 0x31a4e, indexCPS2Sprites_COTAAssets, 0x8d },
    { L"512: Big Sentinel Animations 3/4", 0x31a4e, 0x31b2e, indexCPS2Sprites_COTAAssets, 0x8d },
    { L"512: Big Sentinel Animations 4/4", 0x31b2e, 0x31c0e, indexCPS2Sprites_COTAAssets, 0x8d },
    { L"512: Big Sentinel Animation Cycle", 0x31c0e, 0x31cae },

    // Foreground
    { L"Facility 1", 0x36012, 0x36192, indexCPS2Sprites_COTAAssets, 0x8e },
    { L"Facility 2", 0x361f2, 0x36252, indexCPS2Sprites_COTAAssets, 0x8f },
    { L"Computer Console Animations 1/5", 0x36252, 0x36272, indexCPS2Sprites_COTAAssets, 0x90 },
    { L"Computer Console Animations 2/5", 0x36412, 0x36432, indexCPS2Sprites_COTAAssets, 0x90 },
    { L"Computer Console Animations 3/5", 0x36432, 0x36452, indexCPS2Sprites_COTAAssets, 0x90 },
    { L"Computer Console Animations 4/5", 0x36452, 0x36472, indexCPS2Sprites_COTAAssets, 0x90 },
    { L"Computer Console Animations 5/5", 0x36472, 0x36492, indexCPS2Sprites_COTAAssets, 0x90 },
    { L"Facility 3", 0x36272, 0x363f2, indexCPS2Sprites_COTAAssets, 0x91 },

    { L"Sprites", 0x2cd48, 0x2cea8 },
};

// Juggernaut: Space Port
// Effects: breakable objects, water tower falls on victory
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_JUGGERNAUT[] =
{
    { L"Background Animation 1/6", 0x3ccb6, 0x3ccd6, indexCPS2Sprites_COTAAssets, 0x44, &pairFullyLinkedNode },
    { L"Background Animation 2/6", 0x3ccd6, 0x3ccf6, indexCPS2Sprites_COTAAssets, 0x44 },
    { L"Background Animation 3/6", 0x3ccf6, 0x3cd16, indexCPS2Sprites_COTAAssets, 0x44 },
    { L"Background Animation 4/6", 0x3cd16, 0x3cd36, indexCPS2Sprites_COTAAssets, 0x44 },
    { L"Background Animation 5/6", 0x3c8b6, 0x3c8d6, indexCPS2Sprites_COTAAssets, 0x44 },
    { L"Background Animation 6/6", 0x3c8d6, 0x3c8f6, indexCPS2Sprites_COTAAssets, 0x44 },

    // The colors at 0x31f0e-0x31f4e and 0x31fce-0x31fee don't seem to be used
    //
    { L"512: Blackbird Launch", 0x31e8e, 0x31fee, indexCPS2Sprites_COTAAssets, 0x45 },
    { L"512: Blackbird Place", 0x31fee, 0x320ae, indexCPS2Sprites_COTAAssets, 0x46 },
        { L"Platform?", 0x2cec8, 0x2d008 },

    // The pillars here get damaged to two further levels as the match goes on
    { L"Stage", 0x36492, 0x36532, indexCPS2Sprites_COTAAssets, 0x47 },

        { L"Background?", 0x3cd56, 0x3ce76 },
        { L"Stock colors?", 0x31cae, 0x31d2e },
};

// Magneto: Avalon
// CPU can change battle location?
    // Normal / starting area
    // Below the control room
    // Left shuttle bay
    // Computer room
// Note that you shouldn't use this as a Vs stage: it crashes the game
const sGame_PaletteDataset COTA_A_STAGE_PALETTES_MAGNETO[] =
{
    { L"Background", 0x3cf96, 0x3d176, indexCPS2Sprites_COTAAssets, 0x83, &pairFullyLinkedNode },

    { L"Starfield Animation Cycle 1/6", 0x3d176, 0x3d196, indexCPS2Sprites_COTAAssets, 0x84 },
    { L"Starfield Animation Cycle 2/6", 0x3d196, 0x3d1b6, indexCPS2Sprites_COTAAssets, 0x84 },
    { L"Starfield Animation Cycle 3/6", 0x3d1b6, 0x3d1d6, indexCPS2Sprites_COTAAssets, 0x84 },
    { L"Starfield Animation Cycle 4/6", 0x3d1d6, 0x3d1f6, indexCPS2Sprites_COTAAssets, 0x84 },
    { L"Starfield Animation Cycle 5/6", 0x3d1f6, 0x3d216, indexCPS2Sprites_COTAAssets, 0x84 },
    { L"Starfield Animation Cycle 6/6", 0x3d216, 0x3d236, indexCPS2Sprites_COTAAssets, 0x84 },

    { L"Avalon 1", 0x36892, 0x36a92, indexCPS2Sprites_COTAAssets, 0x85 },
    { L"Avalon 2", 0x36a92, 0x36c92, indexCPS2Sprites_COTAAssets, 0x86 },
    { L"Avalon 3", 0x36c92, 0x36e32, indexCPS2Sprites_COTAAssets, 0x87 },

    { L"Posts and Flooring", 0x323ae, 0x323ce, indexCPS2Sprites_COTAAssets, 0x88 },

    { L"Floor Animation Cycle 1/14", 0x3248e, 0x324ae, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 2/14", 0x324ae, 0x324ce, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 3/14", 0x324ce, 0x324ee, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 4/14", 0x324ee, 0x3250e, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 5/14", 0x3250e, 0x3252e, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 6/14", 0x3252e, 0x3254e, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 7/14", 0x3254e, 0x3256e, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 8/14", 0x3256e, 0x3258e, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 9/14", 0x3258e, 0x325ae, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 10/14", 0x325ae, 0x325ce, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 11/14", 0x325ce, 0x325ee, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 12/14", 0x325ee, 0x3260e, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 13/14", 0x3260e, 0x3262e, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Animation Cycle 14/14", 0x3262e, 0x3264e, indexCPS2Sprites_COTAAssets, 0x89 },

    { L"Floor Slice Animation Cycle 1/9", 0x2b0c8, 0x2b0e8, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 2/9", 0x2b0e8, 0x2b108, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 3/9", 0x2b108, 0x2b128, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 4/9", 0x2b128, 0x2b148, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 5/9", 0x2b148, 0x2b168, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 6/9", 0x2b168, 0x2b188, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 7/9", 0x2b188, 0x2b1a8, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 8/9", 0x2b1a8, 0x2b1c8, indexCPS2Sprites_COTAAssets, 0x89 },
    { L"Floor Slice Animation Cycle 9/9", 0x2b1c8, 0x2b1e8, indexCPS2Sprites_COTAAssets, 0x89 },

    { L"Posts Animation Cycle 1/9", 0x3264e, 0x3266e, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 2/9", 0x3266e, 0x3268e, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 3/9", 0x3268e, 0x326ae, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 4/9", 0x326ae, 0x326ce, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 5/9", 0x326ce, 0x326ee, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 6/9", 0x326ee, 0x3270e, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 7/9", 0x3270e, 0x3272e, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 8/9", 0x3272e, 0x3274e, indexCPS2Sprites_COTAAssets, 0x8a },
    { L"Posts Animation Cycle 9/9", 0x3274e, 0x3276e, indexCPS2Sprites_COTAAssets, 0x8a },

    // Blackbird and etc
    { L"Sprites", 0x2d2c8, 0x2d3c8 },
};

const sGame_PaletteDataset COTA_A_STAGE_PALETTES_PREVIEWS[] =
{
    { L"Wolverine: Savage Land",    0x37232, 0x372d2, indexCPS2Sprites_COTAAssets, 0x35 },
    { L"Psylocke: Moon Night",      0x372d2, 0x37352, indexCPS2Sprites_COTAAssets, 0x36 },
    { L"Colossus: Mutant Hunting",  0x37352, 0x37452, indexCPS2Sprites_COTAAssets, 0x37 },
    { L"Cyclops / Gouki: Danger Room", 0x37452, 0x374d2, indexCPS2Sprites_COTAAssets, 0x38 },
    { L"Storm: On the Blackbird",   0x374d2, 0x37552, indexCPS2Sprites_COTAAssets, 0x39 },
    { L"Iceman: Ice on the Beach",  0x37552, 0x37652, indexCPS2Sprites_COTAAssets, 0x3a },
    { L"Spiral: Mojo World",        0x37652, 0x376b2, indexCPS2Sprites_COTAAssets, 0x3b },
    { L"Silver Samurai: Samurai Shrine", 0x376b2, 0x37732, indexCPS2Sprites_COTAAssets, 0x3c },
    { L"Omega Red: The Deep",       0x37732, 0x377d2, indexCPS2Sprites_COTAAssets, 0x3d },
    { L"Sentinel: Genosha",         0x377d2, 0x37812, indexCPS2Sprites_COTAAssets, 0x3e },
    { L"Juggernaut: Space Port",    0x37812, 0x37912, indexCPS2Sprites_COTAAssets, 0x3f },
    { L"Magneto: Avalon",           0x37912, 0x37932, indexCPS2Sprites_COTAAssets, 0x40 },
};

const sDescTreeNode COTA_A_COLOSSUS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_PALETTES_P1,                    ARRAYSIZE(COTA_A_COLOSSUS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_PALETTES_P2,                    ARRAYSIZE(COTA_A_COLOSSUS_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_PALETTES_STATUS,    ARRAYSIZE(COTA_A_COLOSSUS_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_CYCLOPS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_P1,                 ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_P2,                 ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_EXTRAS,         ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_STATUS, ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_ICEMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P1,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P2,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_EXTRAS,   ARRAYSIZE(COTA_A_ICEMAN_PALETTES_EXTRAS) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_STATUS,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_JUGGY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_P1,           ARRAYSIZE(COTA_A_JUGGY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_P2,           ARRAYSIZE(COTA_A_JUGGY_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_SHARED,   ARRAYSIZE(COTA_A_JUGGY_PALETTES_SHARED) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_STATUS,           ARRAYSIZE(COTA_A_JUGGY_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_MAGNETO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_PALETTES_P1,         ARRAYSIZE(COTA_A_MAGNETO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_PALETTES_P2,         ARRAYSIZE(COTA_A_MAGNETO_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_PALETTES_STATUS,           ARRAYSIZE(COTA_A_MAGNETO_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_OMEGARED_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_PALETTES_P1,        ARRAYSIZE(COTA_A_OMEGARED_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_PALETTES_P2,        ARRAYSIZE(COTA_A_OMEGARED_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_PALETTES_STATUS,           ARRAYSIZE(COTA_A_OMEGARED_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_PSYLOCKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_PALETTES_P1,        ARRAYSIZE(COTA_A_PSYLOCKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_PALETTES_P2,        ARRAYSIZE(COTA_A_PSYLOCKE_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_PALETTES_STATUS,           ARRAYSIZE(COTA_A_PSYLOCKE_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_SENTINEL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_P1,        ARRAYSIZE(COTA_A_SENTINEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_P2,        ARRAYSIZE(COTA_A_SENTINEL_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_SHARED, ARRAYSIZE(COTA_A_SENTINEL_PALETTES_SHARED) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_STATUS,           ARRAYSIZE(COTA_A_SENTINEL_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_SILSAM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_P1,        ARRAYSIZE(COTA_A_SILSAM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_P2,        ARRAYSIZE(COTA_A_SILSAM_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_SHARED, ARRAYSIZE(COTA_A_SILSAM_PALETTES_SHARED) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_STATUS,           ARRAYSIZE(COTA_A_SILSAM_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_SPIRAL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_PALETTES_P1,        ARRAYSIZE(COTA_A_SPIRAL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_PALETTES_P2,        ARRAYSIZE(COTA_A_SPIRAL_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_PALETTES_STATUS,           ARRAYSIZE(COTA_A_SPIRAL_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_STORM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_STORM_PALETTES_P1,        ARRAYSIZE(COTA_A_STORM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_STORM_PALETTES_P2,        ARRAYSIZE(COTA_A_STORM_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_STORM_PALETTES_STATUS,           ARRAYSIZE(COTA_A_STORM_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_WOLVERINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_PALETTES_P1,       ARRAYSIZE(COTA_A_WOLVERINE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_PALETTES_P2,       ARRAYSIZE(COTA_A_WOLVERINE_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_PALETTES_STATUS,           ARRAYSIZE(COTA_A_WOLVERINE_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_AKUMA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_PALETTES_P1,       ARRAYSIZE(COTA_A_AKUMA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_PALETTES_P2,       ARRAYSIZE(COTA_A_AKUMA_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_PALETTES_STATUS,           ARRAYSIZE(COTA_A_AKUMA_PALETTES_STATUS) },
};

const sDescTreeNode COTA_A_STAGE_COLLECTION[] =
{
    { L"Wolverine: Savage Land", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_WOLVERINE,     ARRAYSIZE(COTA_A_STAGE_PALETTES_WOLVERINE) },
    { L"Psylocke: Moon Night", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_PSYLOCKE,     ARRAYSIZE(COTA_A_STAGE_PALETTES_PSYLOCKE) },
    { L"Colossus: Mutant Hunting", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_COLOSSUS,     ARRAYSIZE(COTA_A_STAGE_PALETTES_COLOSSUS) },
    { L"Cyclops / Gouki: Danger Room (Normal)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_CYCLOPS_NORMAL,     ARRAYSIZE(COTA_A_STAGE_PALETTES_CYCLOPS_NORMAL) },
    { L"Cyclops / Gouki: Danger Room (Space)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_CYCLOPS_SPACE,     ARRAYSIZE(COTA_A_STAGE_PALETTES_CYCLOPS_SPACE) },
    { L"Cyclops / Gouki: Danger Room (Jungle)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_CYCLOPS_JUNGLE,     ARRAYSIZE(COTA_A_STAGE_PALETTES_CYCLOPS_JUNGLE) },
    { L"Cyclops / Gouki: Danger Room (Water)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_CYCLOPS_WATER,     ARRAYSIZE(COTA_A_STAGE_PALETTES_CYCLOPS_WATER) },
    { L"Storm: On the Blackbird (Sunset)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_STORM_SUNSET,     ARRAYSIZE(COTA_A_STAGE_PALETTES_STORM_SUNSET) },
    { L"Storm: On the Blackbird (Afternoon)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_STORM_AFTERNOON,     ARRAYSIZE(COTA_A_STAGE_PALETTES_STORM_AFTERNOON) },
    { L"Storm: On the Blackbird (Night)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_STORM_NIGHT,     ARRAYSIZE(COTA_A_STAGE_PALETTES_STORM_NIGHT) },
    { L"Iceman: Ice on the Beach", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_ICEMAN,     ARRAYSIZE(COTA_A_STAGE_PALETTES_ICEMAN) },
    { L"Spiral: Mojo World", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_SPIRAL,     ARRAYSIZE(COTA_A_STAGE_PALETTES_SPIRAL) },
    { L"Silver Samurai: Samurai Shrine", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_SILVERSAMURAI,     ARRAYSIZE(COTA_A_STAGE_PALETTES_SILVERSAMURAI) },
    { L"Silver Samurai: Samurai Shrine (Animations)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_SILVERSAMURAI_ANIM,     ARRAYSIZE(COTA_A_STAGE_PALETTES_SILVERSAMURAI_ANIM) },
    { L"Omega Red: The Deep (Above Ground)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_OMEGARED_ABOVE,     ARRAYSIZE(COTA_A_STAGE_PALETTES_OMEGARED_ABOVE) },
    { L"Omega Red: The Deep (Underwater)", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_OMEGARED_BELOW,     ARRAYSIZE(COTA_A_STAGE_PALETTES_OMEGARED_BELOW) },
    { L"Sentinel: Genosha", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_SENTINEL,     ARRAYSIZE(COTA_A_STAGE_PALETTES_SENTINEL) },
    { L"Juggernaut: Space Port", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_JUGGERNAUT,     ARRAYSIZE(COTA_A_STAGE_PALETTES_JUGGERNAUT) },
    { L"Magneto: Avalon", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_MAGNETO,     ARRAYSIZE(COTA_A_STAGE_PALETTES_MAGNETO) },
    { L"Stage Previews", DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_PALETTES_PREVIEWS,     ARRAYSIZE(COTA_A_STAGE_PALETTES_PREVIEWS) },
};

const sDescTreeNode COTA_A_BONUS_COLLECTION[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)COTA_A_HUD_PALETTES, ARRAYSIZE(COTA_A_HUD_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)COTA_A_PORTRAIT_PALETTES,                ARRAYSIZE(COTA_A_PORTRAIT_PALETTES) },
    // These are from 0x37932 to 0x37ab2 but have unique art
    // These are not verified yet.
    //{ L"Portraits (Defeated)", DESC_NODETYPE_TREE, (void*)COTA_A_PORTRAIT_PALETTES_LOST,                ARRAYSIZE(COTA_A_PORTRAIT_PALETTES_LOST) },
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)COTA_A_CSI_PALETTES,        ARRAYSIZE(COTA_A_CSI_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)COTA_A_BONUS_SELECT_PALETTES,        ARRAYSIZE(COTA_A_BONUS_SELECT_PALETTES) },
    { L"Ending Characters", DESC_NODETYPE_TREE, (void*)COTA_A_BONUS_ENDING_PALETTES,    ARRAYSIZE(COTA_A_BONUS_ENDING_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)COTA_A_BONUS_BONUS_PALETTES,    ARRAYSIZE(COTA_A_BONUS_BONUS_PALETTES) },
};

const sDescTreeNode COTA_A_UNITS[] =
{
    { L"Colossus",                  DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_COLLECTION,      ARRAYSIZE(COTA_A_COLOSSUS_COLLECTION) },
    { L"Cyclops",                   DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_COLLECTION,       ARRAYSIZE(COTA_A_CYCLOPS_COLLECTION) },
    { L"Iceman",                    DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_COLLECTION,        ARRAYSIZE(COTA_A_ICEMAN_COLLECTION) },
    { L"Juggernaut",                DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_COLLECTION,         ARRAYSIZE(COTA_A_JUGGY_COLLECTION) },
    { L"Magneto",                   DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_COLLECTION,       ARRAYSIZE(COTA_A_MAGNETO_COLLECTION) },
    { L"Omega Red",                 DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_COLLECTION,      ARRAYSIZE(COTA_A_OMEGARED_COLLECTION) },
    { L"Psylocke",                  DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_COLLECTION,      ARRAYSIZE(COTA_A_PSYLOCKE_COLLECTION) },
    { L"Sentinel",                  DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_COLLECTION,      ARRAYSIZE(COTA_A_SENTINEL_COLLECTION) },
    { L"Silver Samurai",            DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_COLLECTION,        ARRAYSIZE(COTA_A_SILSAM_COLLECTION) },
    { L"Spiral",                    DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_COLLECTION,        ARRAYSIZE(COTA_A_SPIRAL_COLLECTION) },
    { L"Storm",                     DESC_NODETYPE_TREE, (void*)COTA_A_STORM_COLLECTION,         ARRAYSIZE(COTA_A_STORM_COLLECTION) },
    { L"Wolverine",                 DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_COLLECTION,     ARRAYSIZE(COTA_A_WOLVERINE_COLLECTION) },
    { L"Akuma",                     DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_COLLECTION,         ARRAYSIZE(COTA_A_AKUMA_COLLECTION) },
    { L"Stages",                    DESC_NODETYPE_TREE, (void*)COTA_A_STAGE_COLLECTION,         ARRAYSIZE(COTA_A_STAGE_COLLECTION) },
    { L"Bonus Stuff",               DESC_NODETYPE_TREE, (void*)COTA_A_BONUS_COLLECTION,         ARRAYSIZE(COTA_A_BONUS_COLLECTION) },
};

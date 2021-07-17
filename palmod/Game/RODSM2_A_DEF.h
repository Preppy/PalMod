#pragma once

const UINT16 RODSM2_A_IMGIDS_USED[] =
{
    indexSM2Sprites_Biff,       // 0x82
    indexSM2Sprites_Grater,     // 0x83
    indexSM2Sprites_Gunloc,     // 0x84
    indexSM2Sprites_Haggar,     // 0x85
    indexSM2Sprites_Jumbo,      // 0x86
    indexSM2Sprites_Oni,        // 0x87
    indexSM2Sprites_Ortega,     // 0x88
    indexSM2Sprites_Rasta,      // 0x89
    indexSM2Sprites_Rip,        // 0x8a
    indexSM2Sprites_Scorpion,   // 0x8b
    indexSM2Sprites_Stingray,   // 0x8c
    indexSM2Sprites_Tim,        // 0x8d
    indexSM2Sprites_Widow,      // 0x8e
    indexSM2Sprites_Wraith,     // 0x8f
    indexSM2Sprites_Bonus,      // 0x90
    indexSM2Sprites_Stages,     // 0x91
};

//-- - CHARACTERS -
// Biff Slamkovich
const sGame_PaletteDataset RODSM2_A_BIFF_PALETTES_P1[] =
{
    { L"Biff P1", 0x07ce08, 0x07ce28, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P1 Rage 1", 0x07ce48, 0x07ce68, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P1 Rage 2", 0x07ce68, 0x07ce88, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P1 Rage 3", 0x07ce88, 0x07cea8, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P1 Win Portrait", 0x07e2a8, 0x07e2e8, indexSM2Sprites_Biff, 0x41 },
    { L"Biff P1 Lose Portrait", 0x07e5e8, 0x07e648, indexSM2Sprites_Biff, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_BIFF_PALETTES_P2[] =
{
    { L"Biff P2", 0x07ce28, 0x07ce48, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P2 Rage 1", 0x07cea8, 0x07cec8, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P2 Rage 2", 0x07cec8, 0x07cee8, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P2 Rage 3", 0x07cee8, 0x07cf08, indexSM2Sprites_Biff, 0x00 },
    { L"Biff P2 Win Portrait", 0x07eea8, 0x07eee8, indexSM2Sprites_Biff, 0x41 },
    { L"Biff P2 Lose Portrait", 0x07f1e8, 0x07f248, indexSM2Sprites_Biff, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_BIFF_PALETTES_SHARED[] =
{
    { L"Biff Burning 1", 0x07cf08, 0x07cf28, indexSM2Sprites_Biff, 0x00 },
    { L"Biff Burning 2", 0x07cf28, 0x07cf48, indexSM2Sprites_Biff, 0x00 },
};

// Gunloc
const sGame_PaletteDataset RODSM2_A_GUNLOC_PALETTES_P1[] =
{
    { L"Gunloc P1", 0x07cf48, 0x07cf68, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P1 Rage 1", 0x07cf88, 0x07cfa8, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P1 Rage 2", 0x07cfa8, 0x07cfc8, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P1 Rage 3", 0x07cfc8, 0x07cfe8, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P1 Win Portrait", 0x07e228, 0x07e268, indexSM2Sprites_Gunloc, 0x41 },
    { L"Gunloc P1 Lose Portrait", 0x07e648, 0x07e6a8, indexSM2Sprites_Gunloc, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_GUNLOC_PALETTES_P2[] =
{
    { L"Gunloc P2", 0x07cf68, 0x07cf88, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P2 Rage 1", 0x07cfe8, 0x07d008, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P2 Rage 2", 0x07d008, 0x07d028, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P2 Rage 3", 0x07d028, 0x07d048, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc P2 Win Portrait", 0x07ee28, 0x07ee68, indexSM2Sprites_Gunloc, 0x41 },
    { L"Gunloc P2 Lose Portrait", 0x07f248, 0x07f2a8, indexSM2Sprites_Gunloc, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_GUNLOC_PALETTES_SHARED[] =
{
    { L"Gunloc Burning 1", 0x07d048, 0x07d068, indexSM2Sprites_Gunloc, 0x00 },
    { L"Gunloc Burning 2", 0x07d068, 0x07d088, indexSM2Sprites_Gunloc, 0x00 },
};

// The Great Oni
const sGame_PaletteDataset RODSM2_A_ONI_PALETTES_P1[] =
{
    { L"Oni P1", 0x07d088, 0x07d0a8, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P1 Rage 1", 0x07d0c8, 0x07d0e8, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P1 Rage 2", 0x07d0e8, 0x07d108, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P1 Rage 3", 0x07d108, 0x07d128, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P1 Win Portrait", 0x07e268, 0x07e2a8, indexSM2Sprites_Oni, 0x41 },
    { L"Oni P1 Lose Portrait", 0x07e6a8, 0x07e708, indexSM2Sprites_Oni, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_ONI_PALETTES_P2[] =
{
    { L"Oni P2", 0x07d0a8, 0x07d0c8, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P2 Rage 1", 0x07d128, 0x07d148, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P2 Rage 2", 0x07d148, 0x07d168, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P2 Rage 3", 0x07d168, 0x07d188, indexSM2Sprites_Oni, 0x00 },
    { L"Oni P2 Win Portrait", 0x07ee68, 0x07eea8, indexSM2Sprites_Oni, 0x41 },
    { L"Oni P2 Lose Portrait", 0x07f2a8, 0x07f308, indexSM2Sprites_Oni, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_ONI_PALETTES_SHARED[] =
{
    { L"Oni Burning 1", 0x07d188, 0x07d1a8, indexSM2Sprites_Oni, 0x00 },
    { L"Oni Burning 2", 0x07d1a8, 0x07d1c8, indexSM2Sprites_Oni, 0x00 },
};

// Titanic Tim
const sGame_PaletteDataset RODSM2_A_TIM_PALETTES_P1[] =
{
    { L"Titan P1", 0x07d1c8, 0x07d1e8, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P1 Rage 1", 0x07d208, 0x07d228, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P1 Rage 2", 0x07d228, 0x07d248, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P1 Rage 3", 0x07d248, 0x07d268, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P1 Win Portrait", 0x07e3c8, 0x07e408, indexSM2Sprites_Tim, 0x41 },
    { L"Titan P1 Lose Portrait", 0x07e708, 0x07e768, indexSM2Sprites_Tim, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_TIM_PALETTES_P2[] =
{
    { L"Titan P2", 0x07d1e8, 0x07d208, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P2 Rage 1", 0x07d268, 0x07d288, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P2 Rage 2", 0x07d288, 0x07d2a8, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P2 Rage 3", 0x07d2a8, 0x07d2c8, indexSM2Sprites_Tim, 0x00 },
    { L"Titan P2 Win Portrait", 0x07efc8, 0x07f008, indexSM2Sprites_Tim, 0x41 },
    { L"Titan P2 Lose Portrait", 0x07f308, 0x07f368, indexSM2Sprites_Tim, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_TIM_PALETTES_SHARED[] =
{
    { L"Titan Burning 1", 0x07d2c8, 0x07d2e8, indexSM2Sprites_Tim, 0x00 },
    { L"Titan Burning 2", 0x07d2e8, 0x07d308, indexSM2Sprites_Tim, 0x00 },
};

// El Stingray
const sGame_PaletteDataset RODSM2_A_STINGRAY_PALETTES_P1[] =
{
    { L"El Stingray P1", 0x07d308, 0x07d328, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P1 Rage 1", 0x07d348, 0x07d368, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P1 Rage 2", 0x07d368, 0x07d388, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P1 Rage 3", 0x07d388, 0x07d3a8, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P1 Win Portrait", 0x07e2e8, 0x07e328, indexSM2Sprites_Stingray, 0x41 },
    { L"El Stingray P1 Lose Portrait", 0x07e768, 0x07e7c8, indexSM2Sprites_Stingray, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_STINGRAY_PALETTES_P2[] =
{
    { L"El Stingray P2", 0x07d328, 0x07d348, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P2 Rage 1", 0x07d3a8, 0x07d3c8, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P2 Rage 2", 0x07d3c8, 0x07d3e8, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P2 Rage 3", 0x07d3e8, 0x07d408, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray P2 Win Portrait", 0x07eee8, 0x07ef28, indexSM2Sprites_Stingray, 0x41 },
    { L"El Stingray P2 Lose Portrait", 0x07f368, 0x07f3c8, indexSM2Sprites_Stingray, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_STINGRAY_PALETTES_SHARED[] =
{
    { L"El Stingray Burning 1", 0x07d408, 0x07d428, indexSM2Sprites_Stingray, 0x00 },
    { L"El Stingray Burning 2", 0x07d428, 0x07d448, indexSM2Sprites_Stingray, 0x00 },
};

// Mike Haggar
const sGame_PaletteDataset RODSM2_A_HAGGAR_PALETTES_P1[] =
{
    { L"Haggar P1", 0x07d448, 0x07d468, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P1 Rage 1", 0x07d488, 0x07d4a8, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P1 Rage 2", 0x07d4a8, 0x07d4c8, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P1 Rage 3", 0x07d4c8, 0x07d4e8, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P1 Win Portrait", 0x07e208, 0x07e228, indexSM2Sprites_Haggar, 0x41 },
    { L"Haggar P1 Lose Portrait", 0x07e7c8, 0x07e828, indexSM2Sprites_Haggar, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_HAGGAR_PALETTES_P2[] =
{
    { L"Haggar P2", 0x07d468, 0x07d488, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P2 Rage 1", 0x07d4e8, 0x07d508, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P2 Rage 2", 0x07d508, 0x07d528, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P2 Rage 3", 0x07d528, 0x07d548, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar P2 Win Portrait", 0x07ee08, 0x07ee28, indexSM2Sprites_Haggar, 0x41 },
    { L"Haggar P2 Lose Portrait", 0x07f3c8, 0x07f428, indexSM2Sprites_Haggar, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_HAGGAR_PALETTES_SHARED[] =
{
    { L"Haggar Burning 1", 0x07d548, 0x07d568, indexSM2Sprites_Haggar, 0x00 },
    { L"Haggar Burning 2", 0x07d568, 0x07d588, indexSM2Sprites_Haggar, 0x00 },
};

// Alexander the Grater
const sGame_PaletteDataset RODSM2_A_GRATER_PALETTES_P1[] =
{
    { L"Grater P1", 0x07d588, 0x07d5a8, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P1 Rage 1", 0x07d5c8, 0x07d5e8, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P1 Rage 2", 0x07d5e8, 0x07d608, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P1 Rage 3", 0x07d608, 0x07d628, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P1 Win Portrait", 0x07e408, 0x07e448, indexSM2Sprites_Grater, 0x41 },
    { L"Grater P1 Lose Portrait", 0x07e888, 0x07e8e8, indexSM2Sprites_Grater, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_GRATER_PALETTES_P2[] =
{
    { L"Grater P2", 0x07d5a8, 0x07d5c8, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P2 Rage 1", 0x07d628, 0x07d648, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P2 Rage 2", 0x07d648, 0x07d668, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P2 Rage 3", 0x07d668, 0x07d688, indexSM2Sprites_Grater, 0x00 },
    { L"Grater P2 Win Portrait", 0x07f008, 0x07f048, indexSM2Sprites_Grater, 0x41 },
    { L"Grater P2 Lose Portrait", 0x07f488, 0x07f4e8, indexSM2Sprites_Grater, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_GRATER_PALETTES_SHARED[] =
{
    { L"Grater Burning 1", 0x07d688, 0x07d6a8, indexSM2Sprites_Grater, 0x00 },
    { L"Grater Burning 2", 0x07d6a8, 0x07d6c8, indexSM2Sprites_Grater, 0x00 },
};

// King Rasta Mon
const sGame_PaletteDataset RODSM2_A_RASTA_PALETTES_P1[] =
{
    { L"Rasta P1", 0x07d6c8, 0x07d6e8, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P1 Rage 1", 0x07d708, 0x07d728, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P1 Rage 2", 0x07d728, 0x07d748, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P1 Rage 3", 0x07d748, 0x07d768, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P1 Win Portrait", 0x07e368, 0x07e3c8, indexSM2Sprites_Rasta, 0x41 },
    { L"Rasta P1 Lose Portrait", 0x07e828, 0x07e888, indexSM2Sprites_Rasta, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_RASTA_PALETTES_P2[] =
{
    { L"Rasta P2", 0x07d6e8, 0x07d708, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P2 Rage 1", 0x07d768, 0x07d788, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P2 Rage 2", 0x07d788, 0x07d7a8, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P2 Rage 3", 0x07d7a8, 0x07d7c8, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta P2 Win Portrait", 0x07ef68, 0x07efc8, indexSM2Sprites_Rasta, 0x41 },
    { L"Rasta P2 Lose Portrait", 0x07f428, 0x07f488, indexSM2Sprites_Rasta, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_RASTA_PALETTES_SHARED[] =
{
    { L"Rasta Burning 1", 0x07d7c8, 0x07d7e8, indexSM2Sprites_Rasta, 0x00 },
    { L"Rasta Burning 2", 0x07d7e8, 0x07d808, indexSM2Sprites_Rasta, 0x00 },
};

// Jumbo "Flap" Jack
const sGame_PaletteDataset RODSM2_A_JUMBO_PALETTES_P1[] =
{
    { L"Jumbo P1", 0x07d808, 0x07d828, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P1 Rage 1", 0x07d848, 0x07d868, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P1 Rage 2", 0x07d868, 0x07d888, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P1 Rage 3", 0x07d888, 0x07d8a8, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P1 Win Portrait", 0x07e328, 0x07e368, indexSM2Sprites_Jumbo, 0x41 },
    { L"Jumbo P1 Lose Portrait", 0x07e8e8, 0x07e968, indexSM2Sprites_Jumbo, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_JUMBO_PALETTES_P2[] =
{
    { L"Jumbo P2", 0x07d828, 0x07d848, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P2 Rage 1", 0x07d8a8, 0x07d8c8, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P2 Rage 2", 0x07d8c8, 0x07d8e8, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P2 Rage 3", 0x07d8e8, 0x07d908, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo P2 Win Portrait", 0x07ef28, 0x07ef68, indexSM2Sprites_Jumbo, 0x41 },
    { L"Jumbo P2 Lose Portrait", 0x07f4e8, 0x07f568, indexSM2Sprites_Jumbo, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_JUMBO_PALETTES_SHARED[] =
{
    { L"Jumbo Burning 1", 0x07d908, 0x07d928, indexSM2Sprites_Jumbo, 0x00 },
    { L"Jumbo Burning 2", 0x07d928, 0x07d948, indexSM2Sprites_Jumbo, 0x00 },
};

// The Scorpion
const sGame_PaletteDataset RODSM2_A_SCORP_PALETTES_P1[] =
{
    { L"The Scorpion P1", 0x07d948, 0x07d968, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P1 Rage 1", 0x07d988, 0x07d9a8, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P1 Rage 2", 0x07d9a8, 0x07d9c8, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P1 Rage 3", 0x07d9c8, 0x07d9e8, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P1 Win Portrait", 0x07e448, 0x07e4a8, indexSM2Sprites_Scorpion, 0x41 },
    { L"The Scorpion P1 Lose Portrait", 0x07e968, 0x07e9e8, indexSM2Sprites_Scorpion, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_SCORP_PALETTES_P2[] =
{
    { L"The Scorpion P2", 0x07d968, 0x07d988, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P2 Rage 1", 0x07d9e8, 0x07da08, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P2 Rage 2", 0x07da08, 0x07da28, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P2 Rage 3", 0x07da28, 0x07da48, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion P2 Win Portrait", 0x07f048, 0x07f0a8, indexSM2Sprites_Scorpion, 0x41 },
    { L"The Scorpion P2 Lose Portrait", 0x07f568, 0x07f5e8, indexSM2Sprites_Scorpion, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_SCORP_PALETTES_SHARED[] =
{
    { L"The Scorpion Burning 1", 0x07da48, 0x07da68, indexSM2Sprites_Scorpion, 0x00 },
    { L"The Scorpion Burning 2", 0x07da68, 0x07da88, indexSM2Sprites_Scorpion, 0x00 },
};

// Rip Saber
const sGame_PaletteDataset RODSM2_A_RIP_PALETTES_P1[] =
{
    { L"Saber P1", 0x07da88, 0x07daa8, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P1 Rage 1", 0x07dac8, 0x07dae8, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P1 Rage 2", 0x07dae8, 0x07db08, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P1 Rage 3", 0x07db08, 0x07db28, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P1 Win Portrait", 0x07e568, 0x07e5e8, indexSM2Sprites_Rip, 0x41 },
    { L"Saber P1 Lose Portrait", 0x07eaa8, 0x07eb48, indexSM2Sprites_Rip, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_RIP_PALETTES_P2[] =
{
    { L"Saber P2", 0x07daa8, 0x07dac8, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P2 Rage 1", 0x07db28, 0x07db48, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P2 Rage 2", 0x07db48, 0x07db68, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P2 Rage 3", 0x07db68, 0x07db88, indexSM2Sprites_Rip, 0x00 },
    { L"Saber P2 Win Portrait", 0x07f168, 0x07f1e8, indexSM2Sprites_Rip, 0x41 },
    { L"Saber P2 Lose Portrait", 0x07f6a8, 0x07f748, indexSM2Sprites_Rip, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_RIP_PALETTES_SHARED[] =
{
    { L"Saber Burning 1", 0x07db88, 0x07dba8, indexSM2Sprites_Rip, 0x00 },
    { L"Saber Burning 2", 0x07dba8, 0x07dbc8, indexSM2Sprites_Rip, 0x00 },
};

// Black Widow
const sGame_PaletteDataset RODSM2_A_WIDOW_PALETTES_P1[] =
{
    { L"Black Widow P1", 0x07dbc8, 0x07dbe8, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P1 Rage 1", 0x07dc08, 0x07dc28, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P1 Rage 2", 0x07dc28, 0x07dc48, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P1 Rage 3", 0x07dc48, 0x07dc68, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P1 Win Portrait", 0x07e548, 0x07e568, indexSM2Sprites_Widow, 0x41 },
    { L"Black Widow P1 Lose Portrait", 0x07eb48, 0x07ebc8, indexSM2Sprites_Widow, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_WIDOW_PALETTES_P2[] =
{
    { L"Black Widow P2", 0x07dbe8, 0x07dc08, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P2 Rage 1", 0x07dc68, 0x07dc88, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P2 Rage 2", 0x07dc88, 0x07dca8, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P2 Rage 3", 0x07dca8, 0x07dcc8, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow P2 Win Portrait", 0x07f148, 0x07f168, indexSM2Sprites_Widow, 0x41 },
    { L"Black Widow P2 Lose Portrait", 0x07f748, 0x07f7c8, indexSM2Sprites_Widow, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_WIDOW_PALETTES_SHARED[] =
{
    { L"Black Widow Burning 1", 0x07dcc8, 0x07dce8, indexSM2Sprites_Widow, 0x00 },
    { L"Black Widow Burning 2", 0x07dce8, 0x07dd08, indexSM2Sprites_Widow, 0x00 },
};

// The Wraith
const sGame_PaletteDataset RODSM2_A_WRAITH_PALETTES_P1[] =
{
    { L"Wraith P1", 0x07dd08, 0x07dd28, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P1 Rage 1", 0x07dd48, 0x07dd68, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P1 Rage 2", 0x07dd68, 0x07dd88, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P1 Rage 3", 0x07dd88, 0x07dda8, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P1 Win Portrait", 0x07e4e8, 0x07e548, indexSM2Sprites_Wraith, 0x41 },
    { L"Wraith P1 Lose Portrait", 0x07ea48, 0x07eaa8, indexSM2Sprites_Wraith, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_WRAITH_PALETTES_P2[] =
{
    { L"Wraith P2", 0x07dd28, 0x07dd48, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P2 Rage 1", 0x07dda8, 0x07ddc8, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P2 Rage 2", 0x07ddc8, 0x07dde8, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P2 Rage 3", 0x07dde8, 0x07de08, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith P2 Win Portrait", 0x07f0e8, 0x07f148, indexSM2Sprites_Wraith, 0x41 },
    { L"Wraith P2 Lose Portrait", 0x07f648, 0x07f6a8, indexSM2Sprites_Wraith, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_WRAITH_PALETTES_SHARED[] =
{
    { L"Wraith Burning 1", 0x07de08, 0x07de28, indexSM2Sprites_Wraith, 0x00 },
    { L"Wraith Burning 2", 0x07de28, 0x07de48, indexSM2Sprites_Wraith, 0x00 },
};

// Victor Ortega
const sGame_PaletteDataset RODSM2_A_ORTEGA_PALETTES_P1[] =
{
    { L"Ortega P1", 0x07de48, 0x07de68, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P1 Rage 1", 0x07de88, 0x07dea8, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P1 Rage 2", 0x07dea8, 0x07dec8, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P1 Rage 3", 0x07dec8, 0x07dee8, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P1 Win Portrait", 0x07e4a8, 0x07e4e8, indexSM2Sprites_Ortega, 0x41 },
    { L"Ortega P1 Lose Portrait", 0x07e9e8, 0x07ea48, indexSM2Sprites_Ortega, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_ORTEGA_PALETTES_P2[] =
{
    { L"Ortega P2", 0x07de68, 0x07de88, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P2 Rage 1", 0x07dee8, 0x07df08, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P2 Rage 2", 0x07df08, 0x07df28, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P2 Rage 3", 0x07df28, 0x07df48, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega P2 Win Portrait", 0x07f0a8, 0x07f0e8, indexSM2Sprites_Ortega, 0x41 },
    { L"Ortega P2 Lose Portrait", 0x07f5e8, 0x07f648, indexSM2Sprites_Ortega, 0x42 },
};

const sGame_PaletteDataset RODSM2_A_ORTEGA_PALETTES_SHARED[] =
{
    { L"Ortega Burning 1", 0x07df48, 0x07df68, indexSM2Sprites_Ortega, 0x00 },
    { L"Ortega Burning 2", 0x07df68, 0x07df88, indexSM2Sprites_Ortega, 0x00 },
};

// -BONUS-
// Extras
const sGame_PaletteDataset RODSM2_A_BONUS_PALETTES[] =
{
    { L"Hitsparks P1", 0x07df88, 0x07dfa8 },
    { L"Hitsparks P2", 0x07dfa8, 0x07dfc8 },
    { L"Points/Dust/Fire Effects", 0x07dfc8, 0x07dfe8 },
    { L"Shadow/P2 Manager/Blast Effect", 0x07e008, 0x07e028 },
    { L"Poison Effect", 0x07e068, 0x07e088 },
    { L"Dust Finish/Blood", 0x07e088, 0x07e0a8 },
};

const sDescTreeNode RODSM2_A_BIFF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_BIFF_PALETTES_P1, ARRAYSIZE(RODSM2_A_BIFF_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_BIFF_PALETTES_P2, ARRAYSIZE(RODSM2_A_BIFF_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_BIFF_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_BIFF_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_GUNLOC_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_GUNLOC_PALETTES_P1, ARRAYSIZE(RODSM2_A_GUNLOC_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_GUNLOC_PALETTES_P2, ARRAYSIZE(RODSM2_A_GUNLOC_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_GUNLOC_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_GUNLOC_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_ONI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_ONI_PALETTES_P1, ARRAYSIZE(RODSM2_A_ONI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_ONI_PALETTES_P2, ARRAYSIZE(RODSM2_A_ONI_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_ONI_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_ONI_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_TIM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_TIM_PALETTES_P1, ARRAYSIZE(RODSM2_A_TIM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_TIM_PALETTES_P2, ARRAYSIZE(RODSM2_A_TIM_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_TIM_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_TIM_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_STINGRAY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_STINGRAY_PALETTES_P1, ARRAYSIZE(RODSM2_A_STINGRAY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_STINGRAY_PALETTES_P2, ARRAYSIZE(RODSM2_A_STINGRAY_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_STINGRAY_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_STINGRAY_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_HAGGAR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_HAGGAR_PALETTES_P1, ARRAYSIZE(RODSM2_A_HAGGAR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_HAGGAR_PALETTES_P2, ARRAYSIZE(RODSM2_A_HAGGAR_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_HAGGAR_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_HAGGAR_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_GRATER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_GRATER_PALETTES_P1, ARRAYSIZE(RODSM2_A_GRATER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_GRATER_PALETTES_P2, ARRAYSIZE(RODSM2_A_GRATER_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_GRATER_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_GRATER_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_RASTA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_RASTA_PALETTES_P1, ARRAYSIZE(RODSM2_A_RASTA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_RASTA_PALETTES_P2, ARRAYSIZE(RODSM2_A_RASTA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_RASTA_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_RASTA_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_JUMBO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_JUMBO_PALETTES_P1, ARRAYSIZE(RODSM2_A_JUMBO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_JUMBO_PALETTES_P2, ARRAYSIZE(RODSM2_A_JUMBO_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_JUMBO_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_JUMBO_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_SCORP_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_SCORP_PALETTES_P1, ARRAYSIZE(RODSM2_A_SCORP_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_SCORP_PALETTES_P2, ARRAYSIZE(RODSM2_A_SCORP_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_SCORP_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_SCORP_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_RIP_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_RIP_PALETTES_P1, ARRAYSIZE(RODSM2_A_RIP_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_RIP_PALETTES_P2, ARRAYSIZE(RODSM2_A_RIP_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_RIP_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_RIP_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_WIDOW_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_WIDOW_PALETTES_P1, ARRAYSIZE(RODSM2_A_WIDOW_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_WIDOW_PALETTES_P2, ARRAYSIZE(RODSM2_A_WIDOW_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_WIDOW_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_WIDOW_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_WRAITH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_WRAITH_PALETTES_P1, ARRAYSIZE(RODSM2_A_WRAITH_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_WRAITH_PALETTES_P2, ARRAYSIZE(RODSM2_A_WRAITH_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_WRAITH_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_WRAITH_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_ORTEGA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RODSM2_A_ORTEGA_PALETTES_P1, ARRAYSIZE(RODSM2_A_ORTEGA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RODSM2_A_ORTEGA_PALETTES_P2, ARRAYSIZE(RODSM2_A_ORTEGA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)RODSM2_A_ORTEGA_PALETTES_SHARED, ARRAYSIZE(RODSM2_A_ORTEGA_PALETTES_SHARED) },
};

const sDescTreeNode RODSM2_A_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)RODSM2_A_BONUS_PALETTES, ARRAYSIZE(RODSM2_A_BONUS_PALETTES) },
};

const sDescTreeNode RODSM2_A_UNITS[] =
{
    { L"Biff Slamkovich", DESC_NODETYPE_TREE, (void*)RODSM2_A_BIFF_COLLECTION, ARRAYSIZE(RODSM2_A_BIFF_COLLECTION) },
    { L"Gunloc", DESC_NODETYPE_TREE, (void*)RODSM2_A_GUNLOC_COLLECTION, ARRAYSIZE(RODSM2_A_GUNLOC_COLLECTION) },
    { L"The Great Oni", DESC_NODETYPE_TREE, (void*)RODSM2_A_ONI_COLLECTION, ARRAYSIZE(RODSM2_A_ONI_COLLECTION) },
    { L"Titanic Tim", DESC_NODETYPE_TREE, (void*)RODSM2_A_TIM_COLLECTION, ARRAYSIZE(RODSM2_A_TIM_COLLECTION) },
    { L"El Stingray", DESC_NODETYPE_TREE, (void*)RODSM2_A_STINGRAY_COLLECTION, ARRAYSIZE(RODSM2_A_STINGRAY_COLLECTION) },
    { L"Mike Haggar", DESC_NODETYPE_TREE, (void*)RODSM2_A_HAGGAR_COLLECTION, ARRAYSIZE(RODSM2_A_HAGGAR_COLLECTION) },
    { L"Alexander the Grater", DESC_NODETYPE_TREE, (void*)RODSM2_A_GRATER_COLLECTION, ARRAYSIZE(RODSM2_A_GRATER_COLLECTION) },
    { L"King Rasta Mon", DESC_NODETYPE_TREE, (void*)RODSM2_A_RASTA_COLLECTION, ARRAYSIZE(RODSM2_A_RASTA_COLLECTION) },
    { L"Jumbo 'Flap' Jack", DESC_NODETYPE_TREE, (void*)RODSM2_A_JUMBO_COLLECTION, ARRAYSIZE(RODSM2_A_JUMBO_COLLECTION) },
    { L"The Scorpion", DESC_NODETYPE_TREE, (void*)RODSM2_A_SCORP_COLLECTION, ARRAYSIZE(RODSM2_A_SCORP_COLLECTION) },
    { L"Rip Saber", DESC_NODETYPE_TREE, (void*)RODSM2_A_RIP_COLLECTION, ARRAYSIZE(RODSM2_A_RIP_COLLECTION) },
    { L"Black Widow", DESC_NODETYPE_TREE, (void*)RODSM2_A_WIDOW_COLLECTION, ARRAYSIZE(RODSM2_A_WIDOW_COLLECTION) },
    { L"The Wraith", DESC_NODETYPE_TREE, (void*)RODSM2_A_WRAITH_COLLECTION, ARRAYSIZE(RODSM2_A_WRAITH_COLLECTION) },
    { L"Victor Ortega", DESC_NODETYPE_TREE, (void*)RODSM2_A_ORTEGA_COLLECTION, ARRAYSIZE(RODSM2_A_ORTEGA_COLLECTION) },

    { L"Bonus Stuff", DESC_NODETYPE_TREE, (void*)RODSM2_A_BONUS_COLLECTION, ARRAYSIZE(RODSM2_A_BONUS_COLLECTION) },
};

constexpr auto RODSM2_A_NUMUNITS = ARRAYSIZE(RODSM2_A_UNITS);

#define RODSM2_A_EXTRALOC RODSM2_A_NUMUNITS

// We extend this array with data groveled from the extras file, if any.
const stExtraDef RODSM2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

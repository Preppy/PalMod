#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VampireHunter_A_MORRIGAN_PALETTES. 
// * Update every array using VampireHunter_A_NUMUNIT below
// That should be it.  Good luck.

const std::vector<UINT16> VampireHunter_A_IMGIDS_USED =
{
    // These are the playable characters
    indexCPS2Sprites_Anakaris,
    indexCPS2Sprites_Vamp_Bishamon,  // 0x68
    indexCPS2Sprites_Vamp_Demitri,   // 0x6A
    indexCPS2Sprites_Vamp_Donovan,   // 0x6B
    indexCPS2Sprites_Felicia,
    indexCPS2Sprites_Vamp_LeiLei,    // 0x6E aka Hsien-Ko
    indexCPS2Sprites_Vamp_Phobos,    // 0x71 aka Huitzil
    indexCPS2Sprites_Vamp_Gallon,    // 0x6C aka Jon Talbain
    indexCPS2Sprites_Vamp_Zabel,     // 0x77  aka Lord Raptor
    indexCPS2Sprites_Morrigan,
    indexCPS2Sprites_Vamp_Pyron,     // 0x72
    indexCPS2Sprites_Vamp_Aulbath,   // 0x67 aka Rikuo
    indexCPS2Sprites_Vamp_Sasquatch, // 0x74
    indexCPS2Sprites_Vamp_Victor,    // 0x76

    indexCPS2Sprites_Anita,         // for Donovan
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_HK[] =
{
    { L"Demitri",    0x5d5cc, 0x5d5ec, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec, 0x5d60c },
    { L"Fireball",   0x5d60c, 0x5d62c, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c, 0x5d64c, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c, 0x5d66c, indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_Start[] =
{
    { L"Demitri",    0x5d5cc + ( 5 * 0x20), 0x5d5ec + ( 5 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec + ( 5 * 0x20), 0x5d60c + ( 5 * 0x20) },
    { L"Fireball",   0x5d60c + ( 5 * 0x20), 0x5d62c + ( 5 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c + ( 5 * 0x20), 0x5d64c + ( 5 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c + ( 5 * 0x20), 0x5d66c + ( 5 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_LP[] =
{
    { L"Demitri",    0x5d5cc + (10 * 0x20), 0x5d5ec + (10 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec + (10 * 0x20), 0x5d60c + (10 * 0x20) },
    { L"Fireball",   0x5d60c + (10 * 0x20), 0x5d62c + (10 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c + (10 * 0x20), 0x5d64c + (10 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c + (10 * 0x20), 0x5d66c + (10 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_MP[] =
{
    { L"Demitri",    0x5d5cc + (15 * 0x20), 0x5d5ec + (15 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec + (15 * 0x20), 0x5d60c + (15 * 0x20) },
    { L"Fireball",   0x5d60c + (15 * 0x20), 0x5d62c + (15 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c + (15 * 0x20), 0x5d64c + (15 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c + (15 * 0x20), 0x5d66c + (15 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_HP[] =
{
    { L"Demitri",    0x5d5cc + (20 * 0x20), 0x5d5ec + (20 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec + (20 * 0x20), 0x5d60c + (20 * 0x20) },
    { L"Fireball",   0x5d60c + (20 * 0x20), 0x5d62c + (20 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c + (20 * 0x20), 0x5d64c + (20 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c + (20 * 0x20), 0x5d66c + (20 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_LK[] =
{
    { L"Demitri",    0x5d5cc + (25 * 0x20), 0x5d5ec + (25 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec + (25 * 0x20), 0x5d60c + (25 * 0x20) },
    { L"Fireball",   0x5d60c + (25 * 0x20), 0x5d62c + (25 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c + (25 * 0x20), 0x5d64c + (25 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c + (25 * 0x20), 0x5d66c + (25 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_MK[] =
{
    { L"Demitri",    0x5d5cc + (30 * 0x20), 0x5d5ec + (30 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec + (30 * 0x20), 0x5d60c + (30 * 0x20) },
    { L"Fireball",   0x5d60c + (30 * 0x20), 0x5d62c + (30 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c + (30 * 0x20), 0x5d64c + (30 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c + (30 * 0x20), 0x5d66c + (30 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_DEMITRI_PALETTES_LPMK[] =
{
    { L"Demitri",    0x5d5cc + (35 * 0x20), 0x5d5ec + (35 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Unknown",    0x5d5ec + (35 * 0x20), 0x5d60c + (35 * 0x20) },
    { L"Fireball",   0x5d60c + (35 * 0x20), 0x5d62c + (35 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"Teledash 1", 0x5d62c + (35 * 0x20), 0x5d64c + (35 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"Teledash 2", 0x5d64c + (35 * 0x20), 0x5d66c + (35 * 0x20), indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_HK[] =
{
    { L"Gallon",                 0x5d5cc + (40 * 0x20), 0x5d5ec + (40 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (40 * 0x20), 0x5d60c + (40 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (40 * 0x20), 0x5d62c + (40 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (40 * 0x20), 0x5d64c + (40 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (40 * 0x20), 0x5d66c + (40 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_Start[] =
{
    { L"Gallon",                 0x5d5cc + (45 * 0x20), 0x5d5ec + (45 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (45 * 0x20), 0x5d60c + (45 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (45 * 0x20), 0x5d62c + (45 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (45 * 0x20), 0x5d64c + (45 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (45 * 0x20), 0x5d66c + (45 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_LP[] =
{
    { L"Gallon",                 0x5d5cc + (50 * 0x20), 0x5d5ec + (50 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (50 * 0x20), 0x5d60c + (50 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (50 * 0x20), 0x5d62c + (50 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (50 * 0x20), 0x5d64c + (50 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (50 * 0x20), 0x5d66c + (50 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_MP[] =
{
    { L"Gallon",                 0x5d5cc + (55 * 0x20), 0x5d5ec + (55 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (55 * 0x20), 0x5d60c + (55 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (55 * 0x20), 0x5d62c + (55 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (55 * 0x20), 0x5d64c + (55 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (55 * 0x20), 0x5d66c + (55 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_HP[] =
{
    { L"Gallon",                 0x5d5cc + (60 * 0x20), 0x5d5ec + (60 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (60 * 0x20), 0x5d60c + (60 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (60 * 0x20), 0x5d62c + (60 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (60 * 0x20), 0x5d64c + (60 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (60 * 0x20), 0x5d66c + (60 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_LK[] =
{
    { L"Gallon",                 0x5d5cc + (65 * 0x20), 0x5d5ec + (65 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (65 * 0x20), 0x5d60c + (65 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (65 * 0x20), 0x5d62c + (65 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (65 * 0x20), 0x5d64c + (65 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (65 * 0x20), 0x5d66c + (65 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_MK[] =
{
    { L"Gallon",                 0x5d5cc + (70 * 0x20), 0x5d5ec + (70 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (70 * 0x20), 0x5d60c + (70 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (70 * 0x20), 0x5d62c + (70 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (70 * 0x20), 0x5d64c + (70 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (70 * 0x20), 0x5d66c + (70 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_GALLON_PALETTES_LPMK[] =
{
    { L"Gallon",                 0x5d5cc + (75 * 0x20), 0x5d5ec + (75 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"Unknown",                0x5d5ec + (75 * 0x20), 0x5d60c + (75 * 0x20) },
    { L"236P/41236KK/j.HP",      0x5d60c + (75 * 0x20), 0x5d62c + (75 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"236P/28K/Outro Flash",   0x5d62c + (75 * 0x20), 0x5d64c + (75 * 0x20), indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"Unknown",                0x5d64c + (75 * 0x20), 0x5d66c + (75 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_HK[] =
{
    { L"Victor",            0x5d5cc + (80 * 0x20), 0x5d5ec + (80 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (80 * 0x20), 0x5d60c + (80 * 0x20) },
    { L"Electric Flash",    0x5d60c + (80 * 0x20), 0x5d62c + (80 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (80 * 0x20), 0x5d64c + (80 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (80 * 0x20), 0x5d66c + (80 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_Start[] =
{
    { L"Victor",            0x5d5cc + (85 * 0x20), 0x5d5ec + (85 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (85 * 0x20), 0x5d60c + (85 * 0x20) },
    { L"Electric Flash",    0x5d60c + (85 * 0x20), 0x5d62c + (85 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (85 * 0x20), 0x5d64c + (85 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (85 * 0x20), 0x5d66c + (85 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_LP[] =
{
    { L"Victor",            0x5d5cc + (90 * 0x20), 0x5d5ec + (90 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (90 * 0x20), 0x5d60c + (90 * 0x20) },
    { L"Electric Flash",    0x5d60c + (90 * 0x20), 0x5d62c + (90 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (90 * 0x20), 0x5d64c + (90 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (90 * 0x20), 0x5d66c + (90 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_MP[] =
{
    { L"Victor",            0x5d5cc + (95 * 0x20), 0x5d5ec + (95 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (95 * 0x20), 0x5d60c + (95 * 0x20) },
    { L"Electric Flash",    0x5d60c + (95 * 0x20), 0x5d62c + (95 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (95 * 0x20), 0x5d64c + (95 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (95 * 0x20), 0x5d66c + (95 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_HP[] =
{
    { L"Victor",            0x5d5cc + (100 * 0x20), 0x5d5ec + (100 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (100 * 0x20), 0x5d60c + (100 * 0x20) },
    { L"Electric Flash",    0x5d60c + (100 * 0x20), 0x5d62c + (100 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (100 * 0x20), 0x5d64c + (100 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (100 * 0x20), 0x5d66c + (100 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_LK[] =
{
    { L"Victor",            0x5d5cc + (105 * 0x20), 0x5d5ec + (105 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (105 * 0x20), 0x5d60c + (105 * 0x20) },
    { L"Electric Flash",    0x5d60c + (105 * 0x20), 0x5d62c + (105 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (105 * 0x20), 0x5d64c + (105 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (105 * 0x20), 0x5d66c + (105 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_MK[] =
{
    { L"Victor",            0x5d5cc + (110 * 0x20), 0x5d5ec + (110 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (110 * 0x20), 0x5d60c + (110 * 0x20) },
    { L"Electric Flash",    0x5d60c + (110 * 0x20), 0x5d62c + (110 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (110 * 0x20), 0x5d64c + (110 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (110 * 0x20), 0x5d66c + (110 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_VICTOR_PALETTES_LPMK[] =
{
    { L"Victor",            0x5d5cc + (115 * 0x20), 0x5d5ec + (115 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Unknown",           0x5d5ec + (115 * 0x20), 0x5d60c + (115 * 0x20) },
    { L"Electric Flash",    0x5d60c + (115 * 0x20), 0x5d62c + (115 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"Electricity 1?",    0x5d62c + (115 * 0x20), 0x5d64c + (115 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"Electricity 2?",    0x5d64c + (115 * 0x20), 0x5d66c + (115 * 0x20), indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_HK[] =
{
    { L"Zabel",                      0x5d5cc + (120 * 0x20), 0x5d5ec + (120 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (120 * 0x20), 0x5d60c + (120 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (120 * 0x20), 0x5d62c + (120 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (120 * 0x20), 0x5d64c + (120 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (120 * 0x20), 0x5d66c + (120 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_Start[] =
{
    { L"Zabel",                      0x5d5cc + (125 * 0x20), 0x5d5ec + (125 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (125 * 0x20), 0x5d60c + (125 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (125 * 0x20), 0x5d62c + (125 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (125 * 0x20), 0x5d64c + (125 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (125 * 0x20), 0x5d66c + (125 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_LP[] =
{
    { L"Zabel",                      0x5d5cc + (130 * 0x20), 0x5d5ec + (130 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (130 * 0x20), 0x5d60c + (130 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (130 * 0x20), 0x5d62c + (130 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (130 * 0x20), 0x5d64c + (130 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (130 * 0x20), 0x5d66c + (130 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_MP[] =
{
    { L"Zabel",                      0x5d5cc + (135 * 0x20), 0x5d5ec + (135 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (135 * 0x20), 0x5d60c + (135 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (135 * 0x20), 0x5d62c + (135 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (135 * 0x20), 0x5d64c + (135 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (135 * 0x20), 0x5d66c + (135 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_HP[] =
{
    { L"Zabel",                      0x5d5cc + (140 * 0x20), 0x5d5ec + (140 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (140 * 0x20), 0x5d60c + (140 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (140 * 0x20), 0x5d62c + (140 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (140 * 0x20), 0x5d64c + (140 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (140 * 0x20), 0x5d66c + (140 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_LK[] =
{
    { L"Zabel",                      0x5d5cc + (145 * 0x20), 0x5d5ec + (145 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (145 * 0x20), 0x5d60c + (145 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (145 * 0x20), 0x5d62c + (145 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (145 * 0x20), 0x5d64c + (145 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (145 * 0x20), 0x5d66c + (145 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_MK[] =
{
    { L"Zabel",                      0x5d5cc + (150 * 0x20), 0x5d5ec + (150 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (150 * 0x20), 0x5d60c + (150 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (150 * 0x20), 0x5d62c + (150 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (150 * 0x20), 0x5d64c + (150 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (150 * 0x20), 0x5d66c + (150 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ZABEL_PALETTES_LPMK[] =
{
    { L"Zabel",                      0x5d5cc + (155 * 0x20), 0x5d5ec + (155 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 1",                  0x5d5ec + (155 * 0x20), 0x5d60c + (155 * 0x20) },
    { L"64PP/63214KK/intro/winpose", 0x5d60c + (155 * 0x20), 0x5d62c + (155 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"Unknown 2",                  0x5d62c + (155 * 0x20), 0x5d64c + (155 * 0x20), indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Unknown 3",                  0x5d64c + (155 * 0x20), 0x5d66c + (155 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_HK[] =
{
    { L"Morrigan",                   0x5d5cc + (160 * 0x20), 0x5d5ec + (160 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (160 * 0x20), 0x5d60c + (160 * 0x20) },
    { L"Bats",                       0x5d60c + (160 * 0x20), 0x5d62c + (160 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (160 * 0x20), 0x5d64c + (160 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (160 * 0x20), 0x5d66c + (160 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_Start[] =
{
    { L"Morrigan",                   0x5d5cc + (165 * 0x20), 0x5d5ec + (165 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (165 * 0x20), 0x5d60c + (165 * 0x20) },
    { L"Bats",                       0x5d60c + (165 * 0x20), 0x5d62c + (165 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (165 * 0x20), 0x5d64c + (165 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (165 * 0x20), 0x5d66c + (165 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_LP[] =
{
    { L"Morrigan",                   0x5d5cc + (170 * 0x20), 0x5d5ec + (170 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (170 * 0x20), 0x5d60c + (170 * 0x20) },
    { L"Bats",                       0x5d60c + (170 * 0x20), 0x5d62c + (170 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (170 * 0x20), 0x5d64c + (170 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (170 * 0x20), 0x5d66c + (170 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_MP[] =
{
    { L"Morrigan",                   0x5d5cc + (175 * 0x20), 0x5d5ec + (175 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (175 * 0x20), 0x5d60c + (175 * 0x20) },
    { L"Bats",                       0x5d60c + (175 * 0x20), 0x5d62c + (175 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (175 * 0x20), 0x5d64c + (175 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (175 * 0x20), 0x5d66c + (175 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_HP[] =
{
    { L"Morrigan",                   0x5d5cc + (180 * 0x20), 0x5d5ec + (180 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (180 * 0x20), 0x5d60c + (180 * 0x20) },
    { L"Bats",                       0x5d60c + (180 * 0x20), 0x5d62c + (180 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (180 * 0x20), 0x5d64c + (180 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (180 * 0x20), 0x5d66c + (180 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_LK[] =
{
    { L"Morrigan",                   0x5d5cc + (185 * 0x20), 0x5d5ec + (185 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (185 * 0x20), 0x5d60c + (185 * 0x20) },
    { L"Bats",                       0x5d60c + (185 * 0x20), 0x5d62c + (185 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (185 * 0x20), 0x5d64c + (185 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (185 * 0x20), 0x5d66c + (185 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_MK[] =
{
    { L"Morrigan",                   0x5d5cc + (190 * 0x20), 0x5d5ec + (190 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (190 * 0x20), 0x5d60c + (190 * 0x20) },
    { L"Bats",                       0x5d60c + (190 * 0x20), 0x5d62c + (190 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (190 * 0x20), 0x5d64c + (190 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (190 * 0x20), 0x5d66c + (190 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_MORRIGAN_PALETTES_LPMK[] =
{
    { L"Morrigan",                   0x5d5cc + (195 * 0x20), 0x5d5ec + (195 * 0x20), indexCPS2Sprites_Morrigan, 0x00 },
    { L"Unknown",                    0x5d5ec + (195 * 0x20), 0x5d60c + (195 * 0x20) },
    { L"Bats",                       0x5d60c + (195 * 0x20), 0x5d62c + (195 * 0x20), indexCPS2Sprites_Morrigan, 0x09 },
    { L"Unknown Extra",              0x5d62c + (195 * 0x20), 0x5d64c + (195 * 0x20) },
    { L"Sparkles/Darkness Illusion", 0x5d64c + (195 * 0x20), 0x5d66c + (195 * 0x20), indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_HK[] =
{
    { L"Anakaris",           0x5d5cc + ((205 - 5) * 0x20), 0x5d5ec + ((205 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((205 - 5) * 0x20), 0x5d60c + ((205 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((205 - 5) * 0x20), 0x5d62c + ((205 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((205 - 5) * 0x20), 0x5d64c + ((205 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((205 - 5) * 0x20), 0x5d66c + ((205 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_Start[] =
{
    { L"Anakaris",           0x5d5cc + ((210 - 5) * 0x20), 0x5d5ec + ((210 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((210 - 5) * 0x20), 0x5d60c + ((210 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((210 - 5) * 0x20), 0x5d62c + ((210 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((210 - 5) * 0x20), 0x5d64c + ((210 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((210 - 5) * 0x20), 0x5d66c + ((210 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_LP[] =
{
    { L"Anakaris",           0x5d5cc + ((215 - 5) * 0x20), 0x5d5ec + ((215 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((215 - 5) * 0x20), 0x5d60c + ((215 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((215 - 5) * 0x20), 0x5d62c + ((215 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((215 - 5) * 0x20), 0x5d64c + ((215 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((215 - 5) * 0x20), 0x5d66c + ((215 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_MP[] =
{
    { L"Anakaris",           0x5d5cc + ((220 - 5) * 0x20), 0x5d5ec + ((220 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((220 - 5) * 0x20), 0x5d60c + ((220 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((220 - 5) * 0x20), 0x5d62c + ((220 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((220 - 5) * 0x20), 0x5d64c + ((220 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((220 - 5) * 0x20), 0x5d66c + ((220 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_HP[] =
{
    { L"Anakaris",           0x5d5cc + ((225 - 5) * 0x20), 0x5d5ec + ((225 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((225 - 5) * 0x20), 0x5d60c + ((225 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((225 - 5) * 0x20), 0x5d62c + ((225 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((225 - 5) * 0x20), 0x5d64c + ((225 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((225 - 5) * 0x20), 0x5d66c + ((225 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_LK[] =
{
    { L"Anakaris",           0x5d5cc + ((230 - 5) * 0x20), 0x5d5ec + ((230 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((230 - 5) * 0x20), 0x5d60c + ((230 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((230 - 5) * 0x20), 0x5d62c + ((230 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((230 - 5) * 0x20), 0x5d64c + ((230 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((230 - 5) * 0x20), 0x5d66c + ((230 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_MK[] =
{
    { L"Anakaris",           0x5d5cc + ((235 - 5) * 0x20), 0x5d5ec + ((235 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((235 - 5) * 0x20), 0x5d60c + ((235 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((235 - 5) * 0x20), 0x5d62c + ((235 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((235 - 5) * 0x20), 0x5d64c + ((235 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((235 - 5) * 0x20), 0x5d66c + ((235 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_ANAKARIS_PALETTES_LPMK[] =
{
    { L"Anakaris",           0x5d5cc + ((240 - 5) * 0x20), 0x5d5ec + ((240 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x0 },
    { L"Unknown",            0x5d5ec + ((240 - 5) * 0x20), 0x5d60c + ((240 - 5) * 0x20) },
    { L"2.HP/Mummies",       0x5d60c + ((240 - 5) * 0x20), 0x5d62c + ((240 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x2 },
    { L"Pharaoh Magic Orbs", 0x5d62c + ((240 - 5) * 0x20), 0x5d64c + ((240 - 5) * 0x20), indexCPS2Sprites_Anakaris, 0x3 },
    { L"Unknown",            0x5d64c + ((240 - 5) * 0x20), 0x5d66c + ((240 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_HK[] =
{
    { L"Felicia",            0x5d5cc + ((245 - 5) * 0x20), 0x5d5ec + ((245 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((245 - 5) * 0x20), 0x5d60c + ((245 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((245 - 5) * 0x20), 0x5d62c + ((245 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((245 - 5) * 0x20), 0x5d64c + ((245 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((245 - 5) * 0x20), 0x5d66c + ((245 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_Start[] =
{
    { L"Felicia",            0x5d5cc + ((250 - 5) * 0x20), 0x5d5ec + ((250 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((250 - 5) * 0x20), 0x5d60c + ((250 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((250 - 5) * 0x20), 0x5d62c + ((250 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((250 - 5) * 0x20), 0x5d64c + ((250 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((250 - 5) * 0x20), 0x5d66c + ((250 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_LP[] =
{
    { L"Felicia",            0x5d5cc + ((255 - 5) * 0x20), 0x5d5ec + ((255 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((255 - 5) * 0x20), 0x5d60c + ((255 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((255 - 5) * 0x20), 0x5d62c + ((255 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((255 - 5) * 0x20), 0x5d64c + ((255 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((255 - 5) * 0x20), 0x5d66c + ((255 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_MP[] =
{
    { L"Felicia",            0x5d5cc + ((260 - 5) * 0x20), 0x5d5ec + ((260 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((260 - 5) * 0x20), 0x5d60c + ((260 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((260 - 5) * 0x20), 0x5d62c + ((260 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((260 - 5) * 0x20), 0x5d64c + ((260 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((260 - 5) * 0x20), 0x5d66c + ((260 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_HP[] =
{
    { L"Felicia",            0x5d5cc + ((265 - 5) * 0x20), 0x5d5ec + ((265 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((265 - 5) * 0x20), 0x5d60c + ((265 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((265 - 5) * 0x20), 0x5d62c + ((265 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((265 - 5) * 0x20), 0x5d64c + ((265 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((265 - 5) * 0x20), 0x5d66c + ((265 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_LK[] =
{
    { L"Felicia",            0x5d5cc + ((270 - 5) * 0x20), 0x5d5ec + ((270 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((270 - 5) * 0x20), 0x5d60c + ((270 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((270 - 5) * 0x20), 0x5d62c + ((270 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((270 - 5) * 0x20), 0x5d64c + ((270 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((270 - 5) * 0x20), 0x5d66c + ((270 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_MK[] =
{
    { L"Felicia",            0x5d5cc + ((275 - 5) * 0x20), 0x5d5ec + ((275 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((275 - 5) * 0x20), 0x5d60c + ((275 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((275 - 5) * 0x20), 0x5d62c + ((275 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((275 - 5) * 0x20), 0x5d64c + ((275 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((275 - 5) * 0x20), 0x5d66c + ((275 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_FELICIA_PALETTES_LPMK[] =
{
    { L"Felicia",            0x5d5cc + ((280 - 5) * 0x20), 0x5d5ec + ((280 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x0 },
    { L"Unknown 1",          0x5d5ec + ((280 - 5) * 0x20), 0x5d60c + ((280 - 5) * 0x20) },
    { L"Bubble/Butterfly",   0x5d60c + ((280 - 5) * 0x20), 0x5d62c + ((280 - 5) * 0x20), indexCPS2Sprites_Felicia, 0x01 },
    { L"Unknown 2",          0x5d62c + ((280 - 5) * 0x20), 0x5d64c + ((280 - 5) * 0x20) },
    { L"Unknown 3",          0x5d64c + ((280 - 5) * 0x20), 0x5d66c + ((280 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_HK[] =
{
    { L"Bishamon",          0x5d5cc + ((285 - 5) * 0x20), 0x5d5ec + ((285 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((285 - 5) * 0x20), 0x5d60c + ((285 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((285 - 5) * 0x20), 0x5d62c + ((285 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((285 - 5) * 0x20), 0x5d64c + ((285 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((285 - 5) * 0x20), 0x5d66c + ((285 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_Start[] =
{
    { L"Bishamon",          0x5d5cc + ((290 - 5) * 0x20), 0x5d5ec + ((290 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((290 - 5) * 0x20), 0x5d60c + ((290 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((290 - 5) * 0x20), 0x5d62c + ((290 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((290 - 5) * 0x20), 0x5d64c + ((290 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((290 - 5) * 0x20), 0x5d66c + ((290 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_LP[] =
{
    { L"Bishamon",          0x5d5cc + ((295 - 5) * 0x20), 0x5d5ec + ((295 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((295 - 5) * 0x20), 0x5d60c + ((295 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((295 - 5) * 0x20), 0x5d62c + ((295 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((295 - 5) * 0x20), 0x5d64c + ((295 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((295 - 5) * 0x20), 0x5d66c + ((295 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_MP[] =
{
    { L"Bishamon",          0x5d5cc + ((300 - 5) * 0x20), 0x5d5ec + ((300 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((300 - 5) * 0x20), 0x5d60c + ((300 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((300 - 5) * 0x20), 0x5d62c + ((300 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((300 - 5) * 0x20), 0x5d64c + ((300 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((300 - 5) * 0x20), 0x5d66c + ((300 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_HP[] =
{
    { L"Bishamon",          0x5d5cc + ((305 - 5) * 0x20), 0x5d5ec + ((305 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((305 - 5) * 0x20), 0x5d60c + ((305 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((305 - 5) * 0x20), 0x5d62c + ((305 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((305 - 5) * 0x20), 0x5d64c + ((305 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((305 - 5) * 0x20), 0x5d66c + ((305 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_LK[] =
{
    { L"Bishamon",          0x5d5cc + ((310 - 5) * 0x20), 0x5d5ec + ((310 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((310 - 5) * 0x20), 0x5d60c + ((310 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((310 - 5) * 0x20), 0x5d62c + ((310 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((310 - 5) * 0x20), 0x5d64c + ((310 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((310 - 5) * 0x20), 0x5d66c + ((310 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_MK[] =
{
    { L"Bishamon",          0x5d5cc + ((315 - 5) * 0x20), 0x5d5ec + ((315 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((315 - 5) * 0x20), 0x5d60c + ((315 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((315 - 5) * 0x20), 0x5d62c + ((315 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((315 - 5) * 0x20), 0x5d64c + ((315 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((315 - 5) * 0x20), 0x5d66c + ((315 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_BISHAMON_PALETTES_LPMK[] =
{
    { L"Bishamon",          0x5d5cc + ((320 - 5) * 0x20), 0x5d5ec + ((320 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"Unknown Extra",     0x5d5ec + ((320 - 5) * 0x20), 0x5d60c + ((320 - 5) * 0x20) },
    { L"Ghosts/Hitsparks",  0x5d60c + ((320 - 5) * 0x20), 0x5d62c + ((320 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"Unknown Extra",     0x5d62c + ((320 - 5) * 0x20), 0x5d64c + ((320 - 5) * 0x20) },
    { L"41236KK",           0x5d64c + ((320 - 5) * 0x20), 0x5d66c + ((320 - 5) * 0x20), indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_HK[] =
{
    { L"Aulbath",     0x5d5cc + ((325 - 5) * 0x20), 0x5d5ec + ((325 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((325 - 5) * 0x20), 0x5d60c + ((325 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((325 - 5) * 0x20), 0x5d62c + ((325 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((325 - 5) * 0x20), 0x5d64c + ((325 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((325 - 5) * 0x20), 0x5d66c + ((325 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_Start[] =
{
    { L"Aulbath",     0x5d5cc + ((330 - 5) * 0x20), 0x5d5ec + ((330 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((330 - 5) * 0x20), 0x5d60c + ((330 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((330 - 5) * 0x20), 0x5d62c + ((330 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((330 - 5) * 0x20), 0x5d64c + ((330 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((330 - 5) * 0x20), 0x5d66c + ((330 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_LP[] =
{
    { L"Aulbath",     0x5d5cc + ((335 - 5) * 0x20), 0x5d5ec + ((335 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((335 - 5) * 0x20), 0x5d60c + ((335 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((335 - 5) * 0x20), 0x5d62c + ((335 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((335 - 5) * 0x20), 0x5d64c + ((335 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((335 - 5) * 0x20), 0x5d66c + ((335 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_MP[] =
{
    { L"Aulbath",     0x5d5cc + ((340 - 5) * 0x20), 0x5d5ec + ((340 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((340 - 5) * 0x20), 0x5d60c + ((340 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((340 - 5) * 0x20), 0x5d62c + ((340 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((340 - 5) * 0x20), 0x5d64c + ((340 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((340 - 5) * 0x20), 0x5d66c + ((340 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_HP[] =
{
    { L"Aulbath",     0x5d5cc + ((345 - 5) * 0x20), 0x5d5ec + ((345 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((345 - 5) * 0x20), 0x5d60c + ((345 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((345 - 5) * 0x20), 0x5d62c + ((345 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((345 - 5) * 0x20), 0x5d64c + ((345 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((345 - 5) * 0x20), 0x5d66c + ((345 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_LK[] =
{
    { L"Aulbath",     0x5d5cc + ((350 - 5) * 0x20), 0x5d5ec + ((350 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((350 - 5) * 0x20), 0x5d60c + ((350 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((350 - 5) * 0x20), 0x5d62c + ((350 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((350 - 5) * 0x20), 0x5d64c + ((350 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((350 - 5) * 0x20), 0x5d66c + ((350 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_MK[] =
{
    { L"Aulbath",     0x5d5cc + ((355 - 5) * 0x20), 0x5d5ec + ((355 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((355 - 5) * 0x20), 0x5d60c + ((355 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((355 - 5) * 0x20), 0x5d62c + ((355 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((355 - 5) * 0x20), 0x5d64c + ((355 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((355 - 5) * 0x20), 0x5d66c + ((355 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_AULBATH_PALETTES_LPMK[] =
{
    { L"Aulbath",     0x5d5cc + ((360 - 5) * 0x20), 0x5d5ec + ((360 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"Unknown",     0x5d5ec + ((360 - 5) * 0x20), 0x5d60c + ((360 - 5) * 0x20) },
    { L"Poison Gas",  0x5d60c + ((360 - 5) * 0x20), 0x5d62c + ((360 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x01 },
    { L"Water",       0x5d62c + ((360 - 5) * 0x20), 0x5d64c + ((360 - 5) * 0x20), indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"Sonic Wave",  0x5d64c + ((360 - 5) * 0x20), 0x5d66c + ((360 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_HK[] =
{
    { L"Sasquatch",     0x5d5cc + ((365 - 5) * 0x20), 0x5d5ec + ((365 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((365 - 5) * 0x20), 0x5d60c + ((365 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((365 - 5) * 0x20), 0x5d62c + ((365 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((365 - 5) * 0x20), 0x5d64c + ((365 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((365 - 5) * 0x20), 0x5d66c + ((365 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_Start[] =
{
    { L"Sasquatch",     0x5d5cc + ((370 - 5) * 0x20), 0x5d5ec + ((370 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((370 - 5) * 0x20), 0x5d60c + ((370 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((370 - 5) * 0x20), 0x5d62c + ((370 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((370 - 5) * 0x20), 0x5d64c + ((370 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((370 - 5) * 0x20), 0x5d66c + ((370 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_LP[] =
{
    { L"Sasquatch",     0x5d5cc + ((375 - 5) * 0x20), 0x5d5ec + ((375 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((375 - 5) * 0x20), 0x5d60c + ((375 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((375 - 5) * 0x20), 0x5d62c + ((375 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((375 - 5) * 0x20), 0x5d64c + ((375 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((375 - 5) * 0x20), 0x5d66c + ((375 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_MP[] =
{
    { L"Sasquatch",     0x5d5cc + ((380 - 5) * 0x20), 0x5d5ec + ((380 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((380 - 5) * 0x20), 0x5d60c + ((380 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((380 - 5) * 0x20), 0x5d62c + ((380 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((380 - 5) * 0x20), 0x5d64c + ((380 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((380 - 5) * 0x20), 0x5d66c + ((380 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_HP[] =
{
    { L"Sasquatch",     0x5d5cc + ((385 - 5) * 0x20), 0x5d5ec + ((385 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((385 - 5) * 0x20), 0x5d60c + ((385 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((385 - 5) * 0x20), 0x5d62c + ((385 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((385 - 5) * 0x20), 0x5d64c + ((385 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((385 - 5) * 0x20), 0x5d66c + ((385 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_LK[] =
{
    { L"Sasquatch",     0x5d5cc + ((390 - 5) * 0x20), 0x5d5ec + ((390 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((390 - 5) * 0x20), 0x5d60c + ((390 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((390 - 5) * 0x20), 0x5d62c + ((390 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((390 - 5) * 0x20), 0x5d64c + ((390 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((390 - 5) * 0x20), 0x5d66c + ((390 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_MK[] =
{
    { L"Sasquatch",     0x5d5cc + ((395 - 5) * 0x20), 0x5d5ec + ((395 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((395 - 5) * 0x20), 0x5d60c + ((395 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((395 - 5) * 0x20), 0x5d62c + ((395 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((395 - 5) * 0x20), 0x5d64c + ((395 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((395 - 5) * 0x20), 0x5d66c + ((395 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_SASQUATCH_PALETTES_LPMK[] =
{
    { L"Sasquatch",     0x5d5cc + ((400 - 5) * 0x20), 0x5d5ec + ((400 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"Unknown",       0x5d5ec + ((400 - 5) * 0x20), 0x5d60c + ((400 - 5) * 0x20) },
    { L"Smoke?",        0x5d60c + ((400 - 5) * 0x20), 0x5d62c + ((400 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"Ice Effects?",  0x5d62c + ((400 - 5) * 0x20), 0x5d64c + ((400 - 5) * 0x20), indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"Unknown",       0x5d64c + ((400 - 5) * 0x20), 0x5d66c + ((400 - 5) * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_HK[] =
{
    { L"Phobos",            0x5d5cc + (400 * 0x20), 0x5d5ec + (400 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (400 * 0x20), 0x5d60c + (400 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (400 * 0x20), 0x5d62c + (400 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (400 * 0x20), 0x5d64c + (400 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (400 * 0x20), 0x5d66c + (400 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_Start[] =
{
    { L"Phobos",            0x5d5cc + (405 * 0x20), 0x5d5ec + (405 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (405 * 0x20), 0x5d60c + (405 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (405 * 0x20), 0x5d62c + (405 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (405 * 0x20), 0x5d64c + (405 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (405 * 0x20), 0x5d66c + (405 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_LP[] =
{
    { L"Phobos",            0x5d5cc + (410 * 0x20), 0x5d5ec + (410 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (410 * 0x20), 0x5d60c + (410 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (410 * 0x20), 0x5d62c + (410 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (410 * 0x20), 0x5d64c + (410 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (410 * 0x20), 0x5d66c + (410 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_MP[] =
{
    { L"Phobos",            0x5d5cc + (415 * 0x20), 0x5d5ec + (415 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (415 * 0x20), 0x5d60c + (415 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (415 * 0x20), 0x5d62c + (415 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (415 * 0x20), 0x5d64c + (415 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (415 * 0x20), 0x5d66c + (415 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_HP[] =
{
    { L"Phobos",            0x5d5cc + (420 * 0x20), 0x5d5ec + (420 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (420 * 0x20), 0x5d60c + (420 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (420 * 0x20), 0x5d62c + (420 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (420 * 0x20), 0x5d64c + (420 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (420 * 0x20), 0x5d66c + (420 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_LK[] =
{
    { L"Phobos",            0x5d5cc + (425 * 0x20), 0x5d5ec + (425 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (425 * 0x20), 0x5d60c + (425 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (425 * 0x20), 0x5d62c + (425 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (425 * 0x20), 0x5d64c + (425 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (425 * 0x20), 0x5d66c + (425 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_MK[] =
{
    { L"Phobos",            0x5d5cc + (430 * 0x20), 0x5d5ec + (430 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (430 * 0x20), 0x5d60c + (430 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (430 * 0x20), 0x5d62c + (430 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (430 * 0x20), 0x5d64c + (430 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (430 * 0x20), 0x5d66c + (430 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PHOBOS_PALETTES_LPMK[] =
{
    { L"Phobos",            0x5d5cc + (435 * 0x20), 0x5d5ec + (435 * 0x20), indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (435 * 0x20), 0x5d60c + (435 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (435 * 0x20), 0x5d62c + (435 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (435 * 0x20), 0x5d64c + (435 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (435 * 0x20), 0x5d66c + (435 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_HK[] =
{
    { L"Pyron",             0x5d5cc + (440 * 0x20), 0x5d5ec + (440 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (440 * 0x20), 0x5d60c + (440 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (440 * 0x20), 0x5d62c + (440 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (440 * 0x20), 0x5d64c + (440 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (440 * 0x20), 0x5d66c + (440 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_Start[] =
{
    { L"Pyron",             0x5d5cc + (445 * 0x20), 0x5d5ec + (445 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (445 * 0x20), 0x5d60c + (445 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (445 * 0x20), 0x5d62c + (445 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (445 * 0x20), 0x5d64c + (445 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (445 * 0x20), 0x5d66c + (445 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_LP[] =
{
    { L"Pyron",             0x5d5cc + (450 * 0x20), 0x5d5ec + (450 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (450 * 0x20), 0x5d60c + (450 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (450 * 0x20), 0x5d62c + (450 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (450 * 0x20), 0x5d64c + (450 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (450 * 0x20), 0x5d66c + (450 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_MP[] =
{
    { L"Pyron",             0x5d5cc + (455 * 0x20), 0x5d5ec + (455 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (455 * 0x20), 0x5d60c + (455 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (455 * 0x20), 0x5d62c + (455 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (455 * 0x20), 0x5d64c + (455 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (455 * 0x20), 0x5d66c + (455 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_HP[] =
{
    { L"Pyron",             0x5d5cc + (460 * 0x20), 0x5d5ec + (460 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (460 * 0x20), 0x5d60c + (460 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (460 * 0x20), 0x5d62c + (460 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (460 * 0x20), 0x5d64c + (460 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (460 * 0x20), 0x5d66c + (460 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_LK[] =
{
    { L"Pyron",             0x5d5cc + (465 * 0x20), 0x5d5ec + (465 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (465 * 0x20), 0x5d60c + (465 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (465 * 0x20), 0x5d62c + (465 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (465 * 0x20), 0x5d64c + (465 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (465 * 0x20), 0x5d66c + (465 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_MK[] =
{
    { L"Pyron",             0x5d5cc + (470 * 0x20), 0x5d5ec + (470 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (470 * 0x20), 0x5d60c + (470 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (470 * 0x20), 0x5d62c + (470 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (470 * 0x20), 0x5d64c + (470 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (470 * 0x20), 0x5d66c + (470 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_PYRON_PALETTES_LPMK[] =
{
    { L"Pyron",             0x5d5cc + (475 * 0x20), 0x5d5ec + (475 * 0x20), indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"Unknown Extra 1",   0x5d5ec + (475 * 0x20), 0x5d60c + (475 * 0x20) },
    { L"Unknown Extra 2",   0x5d60c + (475 * 0x20), 0x5d62c + (475 * 0x20) },
    { L"Unknown Extra 3",   0x5d62c + (475 * 0x20), 0x5d64c + (475 * 0x20) },
    { L"Unknown Extra 4",   0x5d64c + (475 * 0x20), 0x5d66c + (475 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_HK[] =
{
    { L"Lei-Lei",            0x5d5cc + (480 * 0x20), 0x5d5ec + (480 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (480 * 0x20), 0x5d60c + (480 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (480 * 0x20), 0x5d62c + (480 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (480 * 0x20), 0x5d64c + (480 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (480 * 0x20), 0x5d66c + (480 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_Start[] =
{
    { L"Lei-Lei",            0x5d5cc + (485 * 0x20), 0x5d5ec + (485 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (485 * 0x20), 0x5d60c + (485 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (485 * 0x20), 0x5d62c + (485 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (485 * 0x20), 0x5d64c + (485 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (485 * 0x20), 0x5d66c + (485 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_LP[] =
{
    { L"Lei-Lei",            0x5d5cc + (490 * 0x20), 0x5d5ec + (490 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (490 * 0x20), 0x5d60c + (490 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (490 * 0x20), 0x5d62c + (490 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (490 * 0x20), 0x5d64c + (490 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (490 * 0x20), 0x5d66c + (490 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_MP[] =
{
    { L"Lei-Lei",            0x5d5cc + (495 * 0x20), 0x5d5ec + (495 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (495 * 0x20), 0x5d60c + (495 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (495 * 0x20), 0x5d62c + (495 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (495 * 0x20), 0x5d64c + (495 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (495 * 0x20), 0x5d66c + (495 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_HP[] =
{
    { L"Lei-Lei",            0x5d5cc + (500 * 0x20), 0x5d5ec + (500 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (500 * 0x20), 0x5d60c + (500 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (500 * 0x20), 0x5d62c + (500 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (500 * 0x20), 0x5d64c + (500 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (500 * 0x20), 0x5d66c + (500 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_LK[] =
{
    { L"Lei-Lei",            0x5d5cc + (505 * 0x20), 0x5d5ec + (505 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (505 * 0x20), 0x5d60c + (505 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (505 * 0x20), 0x5d62c + (505 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (505 * 0x20), 0x5d64c + (505 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (505 * 0x20), 0x5d66c + (505 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_MK[] =
{
    { L"Lei-Lei",            0x5d5cc + (510 * 0x20), 0x5d5ec + (510 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (510 * 0x20), 0x5d60c + (510 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (510 * 0x20), 0x5d62c + (510 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (510 * 0x20), 0x5d64c + (510 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (510 * 0x20), 0x5d66c + (510 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_LEILEI_PALETTES_LPMK[] =
{
    { L"Lei-Lei",            0x5d5cc + (515 * 0x20), 0x5d5ec + (515 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"Lin-Lin",            0x5d5ec + (515 * 0x20), 0x5d60c + (515 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"Dust, Weapons",      0x5d60c + (515 * 0x20), 0x5d62c + (515 * 0x20), indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"Unknown Extra 1",    0x5d62c + (515 * 0x20), 0x5d64c + (515 * 0x20) },
    { L"Unknown Extra 2",    0x5d64c + (515 * 0x20), 0x5d66c + (515 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_HK[] =
{
    { L"Donovan",           0x5d5cc + (520 * 0x20), 0x5d5ec + (520 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (520 * 0x20), 0x5d60c + (520 * 0x20) },
    { L"Weapons",           0x5d60c + (520 * 0x20), 0x5d62c + (520 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (520 * 0x20), 0x5d64c + (520 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (520 * 0x20), 0x5d66c + (520 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_Start[] =
{
    { L"Donovan",           0x5d5cc + (525 * 0x20), 0x5d5ec + (525 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (525 * 0x20), 0x5d60c + (525 * 0x20) },
    { L"Weapons",           0x5d60c + (525 * 0x20), 0x5d62c + (525 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (525 * 0x20), 0x5d64c + (525 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (525 * 0x20), 0x5d66c + (525 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_LP[] =
{
    { L"Donovan",           0x5d5cc + (530 * 0x20), 0x5d5ec + (530 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (530 * 0x20), 0x5d60c + (530 * 0x20) },
    { L"Weapons",           0x5d60c + (530 * 0x20), 0x5d62c + (530 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (530 * 0x20), 0x5d64c + (530 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (530 * 0x20), 0x5d66c + (530 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_MP[] =
{
    { L"Donovan",           0x5d5cc + (535 * 0x20), 0x5d5ec + (535 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (535 * 0x20), 0x5d60c + (535 * 0x20) },
    { L"Weapons",           0x5d60c + (535 * 0x20), 0x5d62c + (535 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (535 * 0x20), 0x5d64c + (535 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (535 * 0x20), 0x5d66c + (535 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_HP[] =
{
    { L"Donovan",           0x5d5cc + (540 * 0x20), 0x5d5ec + (540 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (540 * 0x20), 0x5d60c + (540 * 0x20) },
    { L"Weapons",           0x5d60c + (540 * 0x20), 0x5d62c + (540 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (540 * 0x20), 0x5d64c + (540 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (540 * 0x20), 0x5d66c + (540 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_LK[] =
{
    { L"Donovan",           0x5d5cc + (545 * 0x20), 0x5d5ec + (545 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (545 * 0x20), 0x5d60c + (545 * 0x20) },
    { L"Weapons",           0x5d60c + (545 * 0x20), 0x5d62c + (545 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (545 * 0x20), 0x5d64c + (545 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (545 * 0x20), 0x5d66c + (545 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_MK[] =
{
    { L"Donovan",           0x5d5cc + (550 * 0x20), 0x5d5ec + (550 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (550 * 0x20), 0x5d60c + (550 * 0x20) },
    { L"Weapons",           0x5d60c + (550 * 0x20), 0x5d62c + (550 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (550 * 0x20), 0x5d64c + (550 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (550 * 0x20), 0x5d66c + (550 * 0x20) },
};

const sGame_PaletteDataset VampireHunter_A_DONOVAN_PALETTES_LPMK[] =
{
    { L"Donovan",           0x5d5cc + (555 * 0x20), 0x5d5ec + (555 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"Unknown Extra",     0x5d5ec + (555 * 0x20), 0x5d60c + (555 * 0x20) },
    { L"Weapons",           0x5d60c + (555 * 0x20), 0x5d62c + (555 * 0x20), indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"Anita",             0x5d62c + (555 * 0x20), 0x5d64c + (555 * 0x20), indexCPS2Sprites_Anita, 0 },
    { L"Unknown Extra",     0x5d64c + (555 * 0x20), 0x5d66c + (555 * 0x20) },
};

const sDescTreeNode VampireHunter_A_DEMITRI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_DEMITRI_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_GALLON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_GALLON_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_VICTOR_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_VICTOR_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_ZABEL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_LP,              ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_MP,              ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_HP,              ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_LK,              ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_HK,              ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_Start,              ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_ZABEL_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_MORRIGAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_LP,          ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_MP,          ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_HP,          ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_LK,          ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_MK,    ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_HK,          ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_Start,          ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_MORRIGAN_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_ANAKARIS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_ANAKARIS_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_FELICIA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_FELICIA_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_BISHAMON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_BISHAMON_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_AULBATH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_AULBATH_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_SASQUATCH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_LP,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_MP,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_HP,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_LK,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_MK,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_HK,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_Start,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_PALETTES_LPMK,       ARRAYSIZE(VampireHunter_A_SASQUATCH_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_LEILEI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_LEILEI_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_PHOBOS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_LP, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_MP, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_HP, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_LK, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_MK, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_HK, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_Start, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_PALETTES_LPMK, ARRAYSIZE(VampireHunter_A_PHOBOS_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_PYRON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_PYRON_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_DONOVAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_LP,         ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_MP,         ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_HP,         ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_LK,         ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_MK,        ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_HK,         ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_HK) },
    { L"Start", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_Start,         ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_Start) },
    { L"Jab+Forward", DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_PALETTES_LPMK,   ARRAYSIZE(VampireHunter_A_DONOVAN_PALETTES_LPMK) },
};

const sDescTreeNode VampireHunter_A_UNITS[] =
{
    { L"Demitri",            DESC_NODETYPE_TREE, (void*)VampireHunter_A_DEMITRI_COLLECTION,       ARRAYSIZE(VampireHunter_A_DEMITRI_COLLECTION) },
    { L"Gallon",             DESC_NODETYPE_TREE, (void*)VampireHunter_A_GALLON_COLLECTION,        ARRAYSIZE(VampireHunter_A_GALLON_COLLECTION) }, // Jon Talbain
    { L"Victor",             DESC_NODETYPE_TREE, (void*)VampireHunter_A_VICTOR_COLLECTION,        ARRAYSIZE(VampireHunter_A_VICTOR_COLLECTION) },
    { L"Zabel",              DESC_NODETYPE_TREE, (void*)VampireHunter_A_ZABEL_COLLECTION,         ARRAYSIZE(VampireHunter_A_ZABEL_COLLECTION) }, // Lord Raptor
    { L"Morrigan",           DESC_NODETYPE_TREE, (void*)VampireHunter_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VampireHunter_A_MORRIGAN_COLLECTION) },
    { L"Anakaris",           DESC_NODETYPE_TREE, (void*)VampireHunter_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VampireHunter_A_ANAKARIS_COLLECTION) },
    { L"Felicia",            DESC_NODETYPE_TREE, (void*)VampireHunter_A_FELICIA_COLLECTION,       ARRAYSIZE(VampireHunter_A_FELICIA_COLLECTION) },
    { L"Bishamon",           DESC_NODETYPE_TREE, (void*)VampireHunter_A_BISHAMON_COLLECTION,      ARRAYSIZE(VampireHunter_A_BISHAMON_COLLECTION) },
    { L"Aulbath",            DESC_NODETYPE_TREE, (void*)VampireHunter_A_AULBATH_COLLECTION,       ARRAYSIZE(VampireHunter_A_AULBATH_COLLECTION) }, // Rikuo
    { L"Sasquatch",          DESC_NODETYPE_TREE, (void*)VampireHunter_A_SASQUATCH_COLLECTION,     ARRAYSIZE(VampireHunter_A_SASQUATCH_COLLECTION) },

    { L"Lei-Lei",            DESC_NODETYPE_TREE, (void*)VampireHunter_A_LEILEI_COLLECTION,        ARRAYSIZE(VampireHunter_A_LEILEI_COLLECTION) }, // Hsien-Ko
    { L"Donovan",            DESC_NODETYPE_TREE, (void*)VampireHunter_A_DONOVAN_COLLECTION,       ARRAYSIZE(VampireHunter_A_DONOVAN_COLLECTION) },

    { L"Phobos",             DESC_NODETYPE_TREE, (void*)VampireHunter_A_PHOBOS_COLLECTION,        ARRAYSIZE(VampireHunter_A_PHOBOS_COLLECTION) },
    { L"Pyron",              DESC_NODETYPE_TREE, (void*)VampireHunter_A_PYRON_COLLECTION,         ARRAYSIZE(VampireHunter_A_PYRON_COLLECTION) },
};

constexpr auto VampireHunter_A_NUMUNIT = ARRAYSIZE(VampireHunter_A_UNITS);

constexpr auto VampireHunter_A_EXTRALOC = VampireHunter_A_NUMUNIT;

// We extend this array with data groveled from the VampireHunterE.txt extensible extras file, if any.
const stExtraDef VampireHunter_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

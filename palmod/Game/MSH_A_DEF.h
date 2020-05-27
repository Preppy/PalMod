#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MSH_A_BLACKHEART_PALETTES. 
// * Update every array using MSH_A_NUMUNIT below
// That should be it.  Good luck.

#define ALLOW_256_COLOR_PALETTES 1

enum SupportedMSHPaletteListIndex_05
{
    //indexMSHAnita = 0,
    indexMSHBlackheart,
    indexMSHCaptainAmerica,
    indexMSHDoom,
    indexMSHHulk,
    indexMSHIronMan,
    indexMSHJuggy,
    indexMSHMagneto,
    indexMSHPsylocke,
    //indexMSHShuma,
    indexMSHSpiderman,
    indexMSHThanos,
    indexMSHWolverine,
    indexMSH_05_Last
};

enum SupportedMSHPaletteListIndex_06
{
    indexMSHCSPs,
    indexMSH_06_Last
};

constexpr auto MSH_A_NUMUNIT_05 = indexMSH_05_Last;
constexpr auto MSH_A_NUMUNIT_06 = indexMSH_06_Last;

#define MSH_A_EXTRALOC_05 MSH_A_NUMUNIT_05
#define MSH_A_EXTRALOC_06 MSH_A_NUMUNIT_06

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P1[] =
{
    {"Blackheart P1", 0x6214E, 0x6216E, 0x35 },
    {"P1 HP + HK Demons", 0x62F2E, 0x62F4E, indexCPS2_Blackheart, 0x02 },
    {"P1 Dark Thunder", 0x62F8E, 0x62FAE, indexCPS2_Blackheart, 0x01 },
    {"P1 Armageddon", 0x632EE, 0x6330E, indexCPS2_Blackheart, 0x0B },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P2[] =
{
    {"Blackheart P2",  0x621CE, 0x621EE, 0x35 },
    {"P2 HP + HK Demons",  0x6372E, 0x6374E, indexCPS2_Blackheart, 0x02 },
    {"P2 Dark Thunder",  0x6378E, 0x637AE, indexCPS2_Blackheart, 0x01 },
    {"P2 Armageddon", 0x63AEE, 0x63B0E, indexCPS2_Blackheart, 0x0B },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P1[] =
{
    {"Captain America P1", 0x61CEE, 0x61D0E, 0x0B, 0, true },
    {"P1 Shield", 0x61D0E, 0x61D2E, 0x0B, 1 },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P2[] =
{
    {"Captain America P2", 0x61D6E, 0x61D8E, 0x0B, 0, true },
    {"P2 Shield", 0x61D8E, 0x61DAE, 0x0B, 1 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P1[] =
{
    {"Dr. Doom P1",  0x624CE, 0x624EE, 0x0F },
    {"P1 Flames", 0x624EE, 0x6250E, 0x0F, 1 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P2[] =
{
    {"Dr. Doom P2", 0x6254E, 0x6256E, 0x0F },
    {"P2 Flames", 0x6256E, 0x6258E, 0x0F, 1 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_EXTRAS[] =
{
    {"Photon Array (Shared)", 0x6530E, 0x6532E },
    {"Photon Array (Shared)", 0x6532E, 0x6534E },
    {"Photon Array (Shared)", 0x6534E, 0x6536E },
    {"Extras 1 (MP + HP, Shared)", 0x6536E, 0x6538E },
    {"Extras 2 (MP + HP, Shared)", 0x6538E, 0x653AE },
    {"Extras 3 (MP + HP, Shared)", 0x653AE, 0x653CE, 0x0F, 1 },
    {"Luminance Extra 1 (Shared)", 0x6518E, 0x651AE, 0x0F },
    {"Luminance Extra 2 (Shared)", 0x651CE, 0x651EE, 0x0F },
    {"Luminance Extra 3 (Shared)", 0x651EE, 0x6520E, 0x0F },
    {"Luminance Extra 4 (Shared)", 0x6520E, 0x6522E, 0x0F },
    {"Luminance Extra 5 (Shared)", 0x6526E, 0x6528E, 0x0F },
    {"Luminance Extra 6 (Shared)", 0x6528E, 0x652AE, 0x0F },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_P1[] =
{
    {"Hulk P1", 0x61DCE, 0x61DEE, 0x0D },
    {"P1 Gamma Charge / Clap", 0x61DEE, 0x61E0E, 0x0D, 1 },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_P2[] =
{
    {"Hulk P2", 0x61E4E, 0x61E6E, 0x0D },
    {"P2 Gamma Charge / Clap", 0x61E6E, 0x61E8E, 0x0D, 1 },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P1[] =
{
    {"Iron Man P1", 0x61EAE, 0x61ECE, 0x33 },
    {"P1 Extras 1", 0x61ECE, 0x61EEE, 0x33, 1 },
    {"P1 Extras 2", 0x61EEE, 0x61F0E, 0x33, 2 },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P2[] =
{
    {"Iron Man P2", 0x61F2E, 0x61F4E, 0x33 },
    {"P2 Extras 1", 0x61F4E, 0x61F6E, 0x33, 1 },
    {"P2 Extras 2", 0x61F6E, 0x61F8E, 0x33, 2 },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P1[] =
{
    {"Juggernaut P1", 0x6230E, 0x6232E, 0x29 },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P2[] =
{
    {"Juggernaut P2", 0x6238E, 0x623AE, 0x29 },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_EXTRAS[] =
{
    {"P1 + P2 Extra (Super Armor)", 0x6EC6E, 0x6EC8E, 0x29, 11 },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P1[] =
{
    {"Magneto P1", 0x623EE, 0x6240E, 0x2C },
    {"P1 Extras 1 (EMD / Supers)", 0x6240E, 0x6242E, 0x2C, 1 },
    {"P1 Extras 2 (Normals)", 0x6242E, 0x6244E, 0x2C, 2 },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P2[] =
{
    {"Magneto P2", 0x6246E, 0x6248E, 0x2C },
    {"P2 Extras 1 (EMD / Supers)", 0x6248E, 0x624AE, 0x2C, 1 },
    {"P2 Extras 2 (Normals)", 0x624AE, 0x624CE, 0x2C, 2 },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P1[] =
{
    {"Psylocke P1", 0x6206E, 0x6208E, 0x08 },
    {"P1 Extras 1", 0x6208E, 0x620AE, 0x08, 1 },
    {"P1 Extras 2", 0x620AE, 0x620CE, 0x08, 2 },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P2[] =
{
    {"Psylocke P2", 0x620EE, 0x6210E, 0x08 },
    {"P2 Extras 1", 0x6210E, 0x6212E, 0x08, 1 },
    {"P2 Extras 2", 0x6212E, 0x6214E, 0x08, 2 },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P1[] =
{
    {"Spider-Man P1", 0x61C0E, 0x61C2E, 0x0C },
    {"P1 Extras", 0x61C2E, 0x61C4E, 0x0C, 2 },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P2[] =
{
    {"Spider-Man P2", 0x61C8E, 0x61CAE, 0x0C },
    {"P2 Extras", 0x61CAE, 0x61CCE, 0x0C, 2 },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P1[] =
{
    {"Thanos P1", 0x6264E, 0x6266E, 0x36 },
    {"P1 Gems", 0x6266E, 0x6268E },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P2[] =
{
    {"Thanos P2", 0x626CE, 0x626EE, 0x36 },
    {"P2 Gems", 0x626EE, 0x6270E },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_EXTRAS[] =
{
    {"Thanos Extras (Shared)", 0x6576E, 0x6578E },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P1[] =
{
    {"Wolverine P1", 0x61F8E, 0x61FAE, 0x07, 0, true },
    {"P1 Claws", 0x61FAE, 0x61FCE, 0x07, 1 },
    {"P1 Berserker Barrage", 0x61FCE, 0x61FEE, 0x07, 2 },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P2[] =
{
    {"Wolverine P2", 0x6200E, 0x6202E, 0x07, 0, true },
    {"P2 Claws", 0x6202E, 0x6204E, 0x07, 1 },
    {"P2 Berserker Barrage", 0x6204E, 0x6206E, 0x07, 2 },
};

const sGame_PaletteDataset MSH_A_CSP_PALETTES[] =
{
    { "Spider-Man P1 CSP",      0x000b180, 0x000b300, indexCPS2_Spidey, indexCSP2Images_MSH_CSPs },
    { "Spider-Man P2 CSP",      0x000b380, 0x000b500, indexCPS2_Spidey, indexCSP2Images_MSH_CSPs },
    { "Captain America P1 CSP", 0x000b580, 0x000b780, indexCPS2_CapAm, indexCSP2Images_MSH_CSPs },
    { "Captain America P2 CSP", 0x000b780, 0x000b980, indexCPS2_CapAm, indexCSP2Images_MSH_CSPs },
    { "Hulk P1 CSP",            0x000b980, 0x000b9e0, indexCPS2_Hulk, indexCSP2Images_MSH_CSPs },
    { "Hulk P2 CSP",            0x000bb80, 0x000bbe0, indexCPS2_Hulk, indexCSP2Images_MSH_CSPs },
    { "Iron Man P1 CSP",        0x000bd80, 0x000bf00, indexCPS2_IronMan, indexCSP2Images_MSH_CSPs },
    { "Iron Man P2 CSP",        0x000bf80, 0x000c100, indexCPS2_IronMan, indexCSP2Images_MSH_CSPs },
    { "Wolverine P1 CSP",       0x000c180, 0x000c360, indexCPS2_Wolverine, indexCSP2Images_MSH_CSPs },
    { "Wolverine P2 CSP",       0x000c380, 0x000c560, indexCPS2_Wolverine, indexCSP2Images_MSH_CSPs },
    { "Psylocke P1 CSP",        0x000c580, 0x000c6a0, indexCPS2_Psylocke, indexCSP2Images_MSH_CSPs },
    { "Psylocke P2 CSP",        0x000c780, 0x000c8a0, indexCPS2_Psylocke, indexCSP2Images_MSH_CSPs },
    { "Blackheart P1 CSP",      0x000c980, 0x000c9c0, indexCPS2_Blackheart, indexCSP2Images_MSH_CSPs },
    { "Blackheart P2 CSP",      0x000cb80, 0x000cbc0, indexCPS2_Blackheart, indexCSP2Images_MSH_CSPs },
    { "Shuma-Gorath P1 CSP",    0x000cd80, 0x000ce80, indexCPS2_Shuma, indexCSP2Images_MSH_CSPs },
    { "Shuma-Gorath P2 CSP",    0x000cf80, 0x000d080, indexCPS2_Shuma, indexCSP2Images_MSH_CSPs },
    { "Juggernaut P1 CSP",      0x000d180, 0x000d280, indexCPS2_Juggy, indexCSP2Images_MSH_CSPs },
    { "Juggernaut P2 CSP",      0x000d380, 0x000d480, indexCPS2_Juggy, indexCSP2Images_MSH_CSPs },
    { "Magneto P1 CSP",         0x000d580, 0x000d780, indexCPS2_Magneto, indexCSP2Images_MSH_CSPs },
    { "Magneto P2 CSP",         0x000d780, 0x000d980, indexCPS2_Magneto, indexCSP2Images_MSH_CSPs },
    { "Dr. Doom P1 CSP",        0x000d980, 0x000db60, indexCPS2_DrDoom, indexCSP2Images_MSH_CSPs },
    { "Dr. Doom P2 CSP",        0x000db80, 0x000dd60, indexCPS2_DrDoom, indexCSP2Images_MSH_CSPs },
    { "Thanos P1 CSP",          0x000dd80, 0x000df80, indexCPS2_Thanos, indexCSP2Images_MSH_CSPs },
    { "Thanos P2 CSP",          0x000df80, 0x000e180, indexCPS2_Thanos, indexCSP2Images_MSH_CSPs },
};

const sDescTreeNode MSH_A_BLACKHEART_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_PALETTES_P1,      ARRAYSIZE(MSH_A_BLACKHEART_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_PALETTES_P2,      ARRAYSIZE(MSH_A_BLACKHEART_PALETTES_P2) },
};

const sDescTreeNode MSH_A_CAPTAINAMERICA_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_PALETTES_P1,  ARRAYSIZE(MSH_A_CAPTAINAMERICA_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_PALETTES_P2,  ARRAYSIZE(MSH_A_CAPTAINAMERICA_PALETTES_P2) },
};

const sDescTreeNode MSH_A_DRDOOM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_P1,          ARRAYSIZE(MSH_A_DRDOOM_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_P2,          ARRAYSIZE(MSH_A_DRDOOM_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_EXTRAS,          ARRAYSIZE(MSH_A_DRDOOM_PALETTES_EXTRAS) },
};

const sDescTreeNode MSH_A_HULK_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_HULK_PALETTES_P1,            ARRAYSIZE(MSH_A_HULK_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_HULK_PALETTES_P2,            ARRAYSIZE(MSH_A_HULK_PALETTES_P2) },
};

const sDescTreeNode MSH_A_IRONMAN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_P1,         ARRAYSIZE(MSH_A_IRONMAN_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_P2,         ARRAYSIZE(MSH_A_IRONMAN_PALETTES_P2) },
};

const sDescTreeNode MSH_A_JUGGY_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_P1,           ARRAYSIZE(MSH_A_JUGGY_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_P2,           ARRAYSIZE(MSH_A_JUGGY_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_EXTRAS,           ARRAYSIZE(MSH_A_JUGGY_PALETTES_EXTRAS) },
};

const sDescTreeNode MSH_A_MAGNETO_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_PALETTES_P1,         ARRAYSIZE(MSH_A_MAGNETO_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_PALETTES_P2,         ARRAYSIZE(MSH_A_MAGNETO_PALETTES_P2) },
};

const sDescTreeNode MSH_A_PSYLOCKE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_PALETTES_P1,        ARRAYSIZE(MSH_A_PSYLOCKE_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_PALETTES_P2,        ARRAYSIZE(MSH_A_PSYLOCKE_PALETTES_P2) },
};

const sDescTreeNode MSH_A_SPIDERMAN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_PALETTES_P1,       ARRAYSIZE(MSH_A_SPIDERMAN_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_PALETTES_P2, ARRAYSIZE(MSH_A_SPIDERMAN_PALETTES_P2) },
};

const sDescTreeNode MSH_A_THANOS_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_P1,          ARRAYSIZE(MSH_A_THANOS_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_P2,          ARRAYSIZE(MSH_A_THANOS_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_EXTRAS,          ARRAYSIZE(MSH_A_THANOS_PALETTES_EXTRAS) },
};

const sDescTreeNode MSH_A_WOLVERINE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_PALETTES_P1,       ARRAYSIZE(MSH_A_WOLVERINE_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_PALETTES_P2,       ARRAYSIZE(MSH_A_WOLVERINE_PALETTES_P2) },
};

const sDescTreeNode MSH_A_CSP_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)MSH_A_CSP_PALETTES,               ARRAYSIZE(MSH_A_CSP_PALETTES) },
};

const UINT8 MSH_A_UNITSORT_05[MSH_A_NUMUNIT_05 + 1] = // Plus 1 for the extra palettes
{
    //indexMSHAnita = 0,
    indexMSHBlackheart,
    indexMSHCaptainAmerica,
    indexMSHDoom,
    indexMSHHulk,
    indexMSHIronMan,
    indexMSHJuggy,
    indexMSHMagneto,
    indexMSHPsylocke,
    //indexMSHShuma,
    indexMSHSpiderman,
    indexMSHThanos,
    indexMSHWolverine,

    MSH_A_EXTRALOC_05 // Extra palettes
};

const UINT8 MSH_A_UNITSORT_06[MSH_A_NUMUNIT_06 + 1] = // Plus 1 for the extra palettes
{
    indexMSHCSPs,

    MSH_A_EXTRALOC_06 // Extra palettes
};

const sDescTreeNode MSH_UNITS_05[MSH_A_NUMUNIT_05] =
{
    { "Blackheart",                   DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_COLLECTION,       ARRAYSIZE(MSH_A_BLACKHEART_COLLECTION) },
    { "Captain America",              DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_COLLECTION,   ARRAYSIZE(MSH_A_CAPTAINAMERICA_COLLECTION) },
    { "Doctor Doom",                  DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_COLLECTION,           ARRAYSIZE(MSH_A_DRDOOM_COLLECTION) },
    { "Hulk",                         DESC_NODETYPE_TREE, (void*)MSH_A_HULK_COLLECTION,             ARRAYSIZE(MSH_A_HULK_COLLECTION) },
    { "Iron Man",                     DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_COLLECTION,          ARRAYSIZE(MSH_A_IRONMAN_COLLECTION) },
    { "Juggernaut",                   DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_COLLECTION,            ARRAYSIZE(MSH_A_JUGGY_COLLECTION) },
    { "Magneto",                      DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_COLLECTION,          ARRAYSIZE(MSH_A_MAGNETO_COLLECTION) },
    { "Psylocke",                     DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_COLLECTION,         ARRAYSIZE(MSH_A_PSYLOCKE_COLLECTION) },
    { "Spider-Man",                   DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_COLLECTION,        ARRAYSIZE(MSH_A_SPIDERMAN_COLLECTION) },
    { "Thanos",                       DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_COLLECTION,           ARRAYSIZE(MSH_A_THANOS_COLLECTION) },
    { "Wolverine",                    DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_COLLECTION,        ARRAYSIZE(MSH_A_WOLVERINE_COLLECTION) },
};

const sDescTreeNode MSH_UNITS_06[MSH_A_NUMUNIT_06] =
{
    { "Character Select Portraits",   DESC_NODETYPE_TREE, (void*)MSH_A_CSP_COLLECTION,              ARRAYSIZE(MSH_A_CSP_COLLECTION) },
};

// We extend this array with data groveled from the MSHe.txt extensible extras file, if any.
const stExtraDef MSH_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#undef USE_LARGE_PALETTES

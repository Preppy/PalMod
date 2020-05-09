#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MSH_A_BLACKHEART_PALETTES. 
// * Update every array using MSH_A_NUMUNIT below
// * Update the index lookups in Game_MSH_A_.cpp that is marked - look for usage of indexRyu to find them
// That should be it.  Good luck.

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
#ifdef USE_LARGE_PALETTES
    { "Spider-Man P1 CSP", 0x000b180, 0x000b300 },
#else
    { "Spider-Man P1 CSP (1/3)", 0x000b180, 0x000b200 },
    { "Spider-Man P1 CSP (2/3)", 0x000b200, 0x000b280 },
    { "Spider-Man P1 CSP (3/3)", 0x000b280, 0x000b300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Spider-Man P2 CSP", 0x000b380, 0x000b500 },
#else
    { "Spider-Man P2 CSP (1/3)", 0x000b380, 0x000b400 },
    { "Spider-Man P2 CSP (2/3)", 0x000b400, 0x000b480 },
    { "Spider-Man P2 CSP (3/3)", 0x000b480, 0x000b500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Captain America P1 CSP", 0x000b580, 0x000b7c0 },
#else
    { "Captain America P1 CSP (1/5)", 0x000b580, 0x000b600 },
    { "Captain America P1 CSP (2/5)", 0x000b600, 0x000b680 },
    { "Captain America P1 CSP (3/5)", 0x000b680, 0x000b700 },
    { "Captain America P1 CSP (4/5)", 0x000b700, 0x000b780 },
    { "Captain America P1 CSP (5/5)", 0x000b780, 0x000b7c0 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Captain America P2 CSP", 0x000b7c0, 0x000b980 },
#else
    { "Captain America P2 CSP (1/4)", 0x000b7c0, 0x000b840 },
    { "Captain America P2 CSP (2/4)", 0x000b840, 0x000b8c0 },
    { "Captain America P2 CSP (3/4)", 0x000b8c0, 0x000b940 },
    { "Captain America P2 CSP (4/4)", 0x000b940, 0x000b980 },
#endif
    { "Hulk P1 CSP", 0x000b980, 0x000b9e0 },
    { "Hulk P2 CSP", 0x000bb80, 0x000bbe0 },
#ifdef USE_LARGE_PALETTES
    { "Iron Man P1 CSP", 0x000bd80, 0x000bf00 },
#else
    { "Iron Man P1 CSP (1/3)", 0x000bd80, 0x000be00 },
    { "Iron Man P1 CSP (2/3)", 0x000be00, 0x000be80 },
    { "Iron Man P1 CSP (3/3)", 0x000be80, 0x000bf00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iron Man P2 CSP", 0x000bf80, 0x000c100 },
#else
    { "Iron Man P2 CSP (1/3)", 0x000bf80, 0x000c000 },
    { "Iron Man P2 CSP (2/3)", 0x000c000, 0x000c080 },
    { "Iron Man P2 CSP (3/3)", 0x000c080, 0x000c100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Wolverine P1 CSP", 0x000c180, 0x000c360 },
#else
    { "Wolverine P1 CSP (1/4)", 0x000c180, 0x000c200 },
    { "Wolverine P1 CSP (2/4)", 0x000c200, 0x000c280 },
    { "Wolverine P1 CSP (3/4)", 0x000c280, 0x000c300 },
    { "Wolverine P1 CSP (4/4)", 0x000c300, 0x000c360 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Wolverine P2 CSP", 0x000c380, 0x000c560 },
#else
    { "Wolverine P2 CSP (1/4)", 0x000c380, 0x000c400 },
    { "Wolverine P2 CSP (2/4)", 0x000c400, 0x000c480 },
    { "Wolverine P2 CSP (3/4)", 0x000c480, 0x000c500 },
    { "Wolverine P2 CSP (4/4)", 0x000c500, 0x000c560 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Psylocke P1 CSP", 0x000c580, 0x000c6a0 },
#else
    { "Psylocke P1 CSP (1/3)", 0x000c580, 0x000c600 },
    { "Psylocke P1 CSP (2/3)", 0x000c600, 0x000c680 },
    { "Psylocke P1 CSP (3/3)", 0x000c680, 0x000c6a0 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Psylocke P2 CSP", 0x000c780, 0x000c8a0 },
#else
    { "Psylocke P2 CSP (1/3)", 0x000c780, 0x000c800 },
    { "Psylocke P2 CSP (2/3)", 0x000c800, 0x000c880 },
    { "Psylocke P2 CSP (3/3)", 0x000c880, 0x000c8a0 },
#endif
    { "Blackheart P1 CSP", 0x000c980, 0x000c9c0 },
    { "Blackheart P2 CSP", 0x000cb80, 0x000cbc0 },
#ifdef USE_LARGE_PALETTES
    { "Shuma-Gorath P1 CSP", 0x000cd80, 0x000ce80 },
#else
    { "Shuma-Gorath P1 CSP (1/2)", 0x000cd80, 0x000ce00 },
    { "Shuma-Gorath P1 CSP (2/2)", 0x000ce00, 0x000ce80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shuma-Gorath P2 CSP", 0x000cf80, 0x000d080 },
#else
    { "Shuma-Gorath P2 CSP (1/2)", 0x000cf80, 0x000d000 },
    { "Shuma-Gorath P2 CSP (2/2)", 0x000d000, 0x000d080 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Juggernaut P1 CSP", 0x000d180, 0x000d280 },
#else
    { "Juggernaut P1 CSP (1/2)", 0x000d180, 0x000d200 },
    { "Juggernaut P1 CSP (2/2)", 0x000d200, 0x000d280 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Juggernaut P2 CSP", 0x000d380, 0x000d480 },
#else
    { "Juggernaut P2 CSP (1/2)", 0x000d380, 0x000d400 },
    { "Juggernaut P2 CSP (2/2)", 0x000d400, 0x000d480 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Magneto P1 CSP", 0x000d580, 0x000d780 },
#else
    { "Magneto P1 CSP (1/4)", 0x000d580, 0x000d600 },
    { "Magneto P1 CSP (2/4)", 0x000d600, 0x000d680 },
    { "Magneto P1 CSP (3/4)", 0x000d680, 0x000d700 },
    { "Magneto P1 CSP (4/4)", 0x000d700, 0x000d780 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Magneto P2 CSP", 0x000d780, 0x000d980 },
#else
    { "Magneto P2 CSP (1/4)", 0x000d780, 0x000d800 },
    { "Magneto P2 CSP (2/4)", 0x000d800, 0x000d880 },
    { "Magneto P2 CSP (3/4)", 0x000d880, 0x000d900 },
    { "Magneto P2 CSP (4/4)", 0x000d900, 0x000d980 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Dr. Doom P1 CSP", 0x000d980, 0x000db60 },
#else
    { "Dr. Doom P1 CSP (1/4)", 0x000d980, 0x000da00 },
    { "Dr. Doom P1 CSP (2/4)", 0x000da00, 0x000da80 },
    { "Dr. Doom P1 CSP (3/4)", 0x000da80, 0x000db00 },
    { "Dr. Doom P1 CSP (4/4)", 0x000db00, 0x000db60 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Dr. Doom P2 CSP", 0x000db80, 0x000dd60 },
#else
    { "Dr. Doom P2 CSP (1/4)", 0x000db80, 0x000dc00 },
    { "Dr. Doom P2 CSP (2/4)", 0x000dc00, 0x000dc80 },
    { "Dr. Doom P2 CSP (3/4)", 0x000dc80, 0x000dd00 },
    { "Dr. Doom P2 CSP (4/4)", 0x000dd00, 0x000dd60 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Thanos P1 CSP", 0x000dd80, 0x000df80 },
#else
    { "Thanos P1 CSP (1/4)", 0x000dd80, 0x000de00 },
    { "Thanos P1 CSP (2/4)", 0x000de00, 0x000de80 },
    { "Thanos P1 CSP (3/4)", 0x000de80, 0x000df00 },
    { "Thanos P1 CSP (4/4)", 0x000df00, 0x000df80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Thanos P2 CSP", 0x000df80, 0x000e1a0 },
#else
    { "Thanos P2 CSP (1/5)", 0x000df80, 0x000e000 },
    { "Thanos P2 CSP (2/5)", 0x000e000, 0x000e080 },
    { "Thanos P2 CSP (3/5)", 0x000e080, 0x000e100 },
    { "Thanos P2 CSP (4/5)", 0x000e100, 0x000e180 },
    { "Thanos P2 CSP (5/5)", 0x000e180, 0x000e1a0 },
#endif
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

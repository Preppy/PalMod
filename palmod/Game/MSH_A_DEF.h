#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MSH_A_BLACKHEART_PALETTES. 
// * Update every array using MSH_A_NUMUNIT below
// That should be it.  Good luck.

#define ALLOW_256_COLOR_PALETTES 1

enum SupportedMSHPaletteListIndex_05
{
    indexMSHAnita = 0,
    indexMSHBlackheart,
    indexMSHCaptainAmerica,
    indexMSHDoom,
    indexMSHHulk,
    indexMSHIronMan,
    indexMSHJuggy,
    indexMSHMagneto,
    indexMSHPsylocke,
    indexMSHShuma,
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

#ifdef LOOKINGFORSORTORDER

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P1[] =
    { L"Spider-Man P1",  0x61C0E, 0x61C2E, 0x0C },
const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P1[] =
    { L"Captain America P1", 0x61CEE, 0x61D0E, indexCPS2_CapAm, 0, &pairCaptainAmericaShie
const sGame_PaletteDataset MSH_A_HULK_PALETTES_P1[] =
    { L"Hulk P1",        0x61DCE, 0x61DEE, 0x0D },
const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P1[] =
    { L"Iron Man P1",    0x61EAE, 0x61ECE, 0x33 },
const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P1[] =
    { L"Wolverine P1",   0x61F8E, 0x61FAE, 0x07, 0, &pairNext },
const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P1[] =
    { L"Psylocke P1",    0x6206E, 0x6208E, 0x08 },
const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P1[] =
    { L"Blackheart P1",  0x6214E, 0x6216E, 0x35 },
const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P1[] =
    { L"Juggernaut P1",  0x6230E, 0x6232E, 0x29 },
    shuma at 0x6222e here
const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P1[] =
    { L"Magneto P1",     0x623EE, 0x6240E, 0x2C },
const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P1[] =
    { L"Dr. Doom P1",    0x624CE, 0x624EE, 0x0F },
const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P1[] =
    { L"Thanos P1",      0x6264E, 0x6266E, 0x36 },
    followed by Anita
    extras
    spidey extras until 62c0e
    3 iron man shades
    many blackheart palettes
    shuma stuff around 63b8e
    p2 shuma at 641ae

#endif

constexpr auto MSH_A_NUMUNIT_06 = indexMSH_06_Last;

#define MSH_A_EXTRALOC_06 MSH_A_NUMUNIT_06

const sGame_PaletteDataset MSH_A_ANITA_PALETTES_P1[] =
{
    // she also uses an akuma sprite and another helper sprite
    { L"P1 Main", 0x6272E, 0x6274E, indexCPS2_Anita },
    { L"P1 Sword", 0x6274E, 0x6276E, indexCPS2_Anita, 0x03 },
    { L"P1 Lin-Lin", 0x0666ee, 0x06670e },
};

const sGame_PaletteDataset MSH_A_ANITA_PALETTES_P2[] =
{
    { L"P2 Main", 0x627AE, 0x627CE, indexCPS2_Anita },
    { L"P2 Sword", 0x627CE, 0x627EE, indexCPS2_Anita, 0x03 },
    { L"P2 Lin-Lin", 0x0667ce, 0x0667ee },
};

const sGame_PaletteDataset MSH_A_ANITA_PALETTES_SHARED[] =
{
    { L"Shared Gouki", 0x0667ee, 0x06680e, indexCPS2_STAkuma },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P1[] =
{
    { L"P1 Main", 0x6214E, 0x6216E, indexCPS2_Blackheart },
    { L"P1 HP + HK Demons", 0x62F2E, 0x62F4E, indexCPS2_Blackheart, 0x02 },
    { L"P1 Dark Thunder", 0x62F8E, 0x62FAE, indexCPS2_Blackheart, 0x01 },
    { L"P1 Armageddon", 0x632EE, 0x6330E, indexCPS2_Blackheart, 0x0B },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P2[] =
{
    { L"P2 Main",  0x621CE, 0x621EE, indexCPS2_Blackheart },
    { L"P2 HP + HK Demons",  0x6372E, 0x6374E, indexCPS2_Blackheart, 0x02 },
    { L"P2 Dark Thunder",  0x6378E, 0x637AE, indexCPS2_Blackheart, 0x01 },
    { L"P2 Armageddon", 0x63AEE, 0x63B0E, indexCPS2_Blackheart, 0x0B },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P1[] =
{
    { L"P1 Main", 0x61CEE, 0x61D0E, indexCPS2_CapAm, 0, &pairNext },
    { L"P1 Shield", 0x61D0E, 0x61D2E, indexCPS2_CapAm, 1 },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_P2[] =
{
    { L"P2 Main", 0x61D6E, 0x61D8E, indexCPS2_CapAm, 0, &pairNext },
    { L"P2 Shield", 0x61D8E, 0x61DAE, indexCPS2_CapAm, 1 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P1[] =
{
    { L"P1 Main",  0x624CE, 0x624EE, 0x0F },
    { L"P1 Flames", 0x624EE, 0x6250E, 0x0F, 1 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_P2[] =
{
    { L"P2 Main", 0x6254E, 0x6256E, 0x0F },
    { L"P2 Flames", 0x6256E, 0x6258E, 0x0F, 1 },
};

const sGame_PaletteDataset MSH_A_DRDOOM_PALETTES_EXTRAS[] =
{
    { L"Photon Array (Shared)", 0x6530E, 0x6532E },
    { L"Photon Array (Shared)", 0x6532E, 0x6534E },
    { L"Photon Array (Shared)", 0x6534E, 0x6536E },
    { L"Extras 1 (MP + HP, Shared)", 0x6536E, 0x6538E },
    { L"Extras 2 (MP + HP, Shared)", 0x6538E, 0x653AE },
    { L"Extras 3 (MP + HP, Shared)", 0x653AE, 0x653CE, 0x0F, 1 },
    { L"Luminance Extra 1 (Shared)", 0x6518E, 0x651AE, 0x0F },
    { L"Luminance Extra 2 (Shared)", 0x651CE, 0x651EE, 0x0F },
    { L"Luminance Extra 3 (Shared)", 0x651EE, 0x6520E, 0x0F },
    { L"Luminance Extra 4 (Shared)", 0x6520E, 0x6522E, 0x0F },
    { L"Luminance Extra 5 (Shared)", 0x6526E, 0x6528E, 0x0F },
    { L"Luminance Extra 6 (Shared)", 0x6528E, 0x652AE, 0x0F },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_P1[] =
{
    { L"P1 Main", 0x61DCE, 0x61DEE, indexCPS2_Hulk },
    { L"P1 Gamma Charge / Clap", 0x61DEE, 0x61E0E, indexCPS2_Hulk, 1 },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_P2[] =
{
    { L"P2 Main", 0x61E4E, 0x61E6E, indexCPS2_Hulk },
    { L"P2 Gamma Charge / Clap", 0x61E6E, 0x61E8E, indexCPS2_Hulk, 1 },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P1[] =
{
    { L"P1 Main", 0x61EAE, 0x61ECE, indexCPS2_IronMan },
    { L"P1 Proton Cannon", 0x61ECE, 0x61EEE, indexCPS2_IronMan, 1 },
    { L"P1 Proton Canon laser / unibeam", 0x61EEE, 0x61F0E, indexCPS2_IronMan, 2 },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P2[] =
{
    { L"P2 Main", 0x61F2E, 0x61F4E, indexCPS2_IronMan },
    { L"P2 Proton Cannon", 0x61F4E, 0x61F6E, indexCPS2_IronMan, 1 },
    { L"P2 Proton Canon laser / unibeam", 0x61F6E, 0x61F8E, indexCPS2_IronMan, 2 },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P1[] =
{
    { L"P1 Main", 0x6230E, 0x6232E, indexCPS2_Juggy },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_P2[] =
{
    { L"P2 Main", 0x6238E, 0x623AE, indexCPS2_Juggy },
};

const sGame_PaletteDataset MSH_A_JUGGY_PALETTES_EXTRAS[] =
{
    { L"P1 + P2 Extra (Super Armor)", 0x6EC6E, 0x6EC8E, indexCPS2_Juggy, 11 },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P1[] =
{
    { L"P1 Main", 0x623EE, 0x6240E, indexCPS2_Magneto },
    { L"P1 Extras 1 (EMD / Supers)", 0x6240E, 0x6242E, indexCPS2_Magneto, 1 },
    { L"P1 Extras 2 (Normals)", 0x6242E, 0x6244E, indexCPS2_Magneto, 2 },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_P2[] =
{
    { L"P2 Main", 0x6246E, 0x6248E, indexCPS2_Magneto },
    { L"P2 Extras 1 (EMD / Supers)", 0x6248E, 0x624AE, indexCPS2_Magneto, 1 },
    { L"P2 Extras 2 (Normals)", 0x624AE, 0x624CE, indexCPS2_Magneto, 2 },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P1[] =
{
    { L"P1 Main", 0x6206E, 0x6208E, indexCPS2_Psylocke },
    { L"P1 Extras 1", 0x6208E, 0x620AE, indexCPS2_Psylocke, 1 },
    { L"P1 Extras 2", 0x620AE, 0x620CE, indexCPS2_Psylocke, 2 },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_P2[] =
{
    { L"P2 Main", 0x620EE, 0x6210E, indexCPS2_Psylocke },
    { L"P2 Extras 1", 0x6210E, 0x6212E, indexCPS2_Psylocke, 1 },
    { L"P2 Extras 2", 0x6212E, 0x6214E, indexCPS2_Psylocke, 2 },
};

const sGame_PaletteDataset MSH_A_SHUMA_PALETTES_P1[] =
{
    { L"P1 Main", 0x6222e, 0x6224e, indexCPS2_Shuma },
    { L"P1 Dash Frame / Guard Frame", 0x6224e, 0x6226e, indexCPS2_Shuma },
    { L"P1 FP / jFP / cFP / Intro", 0x6226e, 0x6228e, indexCPS2_Shuma },

    { L"P1 Stance Frame (after FP) 1", 0x63bae + (0 * 0x20), 0x63bce + (0 * 0x20), indexCPS2_Shuma },
    { L"P1 Stance Frame (after FP) 2", 0x63bae + (1 * 0x20), 0x63bce + (1 * 0x20), indexCPS2_Shuma },
    { L"P1 Stance Frame (after FP) 3", 0x63bae + (2 * 0x20), 0x63bce + (2 * 0x20), indexCPS2_Shuma },
    { L"P1 Stance Frame (after FP) 4", 0x63bae + (3 * 0x20), 0x63bce + (3 * 0x20), indexCPS2_Shuma },
    { L"P1 Stance Frame (after FP) 5", 0x63bae + (4 * 0x20), 0x63bce + (4 * 0x20), indexCPS2_Shuma },

    { L"P1 Stone Drop (d+HK) Frames 1", 0x63bae + (5 * 0x20), 0x63bce + (5 * 0x20), indexCPS2_Shuma },
    { L"P1 Stone Drop (d+HK) Frames 2", 0x63bae + (6 * 0x20), 0x63bce + (6 * 0x20), indexCPS2_Shuma },
    { L"P1 Stone Drop (d+HK) Frames 3", 0x63bae + (7 * 0x20), 0x63bce + (7 * 0x20), indexCPS2_Shuma },
    { L"P1 Stone Drop (d+HK) Frames 4", 0x63bae + (8 * 0x20), 0x63bce + (8 * 0x20), indexCPS2_Shuma },
    { L"P1 Stone Drop (d+HK) Frames 5", 0x63bae + (9 * 0x20), 0x63bce + (9 * 0x20), indexCPS2_Shuma },

    { L"P1 Unused 1", 0x63bae + (10 * 0x20), 0x63bce + (10 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 2", 0x63bae + (11 * 0x20), 0x63bce + (11 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 3", 0x63bae + (12 * 0x20), 0x63bce + (12 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 4", 0x63bae + (13 * 0x20), 0x63bce + (13 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 5", 0x63bae + (14 * 0x20), 0x63bce + (14 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 6", 0x63bae + (15 * 0x20), 0x63bce + (15 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 7", 0x63bae + (16 * 0x20), 0x63bce + (16 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 8", 0x63bae + (17 * 0x20), 0x63bce + (17 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 9", 0x63bae + (18 * 0x20), 0x63bce + (18 * 0x20), indexCPS2_Shuma },
    { L"P1 Unused 10", 0x63bae + (19 * 0x20), 0x63bce + (19 * 0x20), indexCPS2_Shuma },

    { L"P1 HK grab 1", 0x63bae + (20 * 0x20), 0x63bce + (20 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 2", 0x63bae + (21 * 0x20), 0x63bce + (21 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 3", 0x63bae + (22 * 0x20), 0x63bce + (22 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 4", 0x63bae + (23 * 0x20), 0x63bce + (23 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 5", 0x63bae + (24 * 0x20), 0x63bce + (24 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 6", 0x63bae + (25 * 0x20), 0x63bce + (25 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 7", 0x63bae + (26 * 0x20), 0x63bce + (26 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 8", 0x63bae + (27 * 0x20), 0x63bce + (27 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 9", 0x63bae + (28 * 0x20), 0x63bce + (28 * 0x20), indexCPS2_Shuma },
    { L"P1 HK grab 10", 0x63bae + (29 * 0x20), 0x63bce + (29 * 0x20), indexCPS2_Shuma },

    { L"P1 HP Flash Frames 1", 0x63bae + (30 * 0x20), 0x63bce + (30 * 0x20), indexCPS2_Shuma },
    { L"P1 HP Flash Frames 2", 0x63bae + (31 * 0x20), 0x63bce + (31 * 0x20), indexCPS2_Shuma },
    { L"P1 HP Flash Frames 3", 0x63bae + (32 * 0x20), 0x63bce + (32 * 0x20), indexCPS2_Shuma },
    { L"P1 HP Flash Frames 4", 0x63bae + (33 * 0x20), 0x63bce + (33 * 0x20), indexCPS2_Shuma },
    { L"P1 HP Flash Frames 5", 0x63bae + (34 * 0x20), 0x63bce + (34 * 0x20), indexCPS2_Shuma },
    { L"P1 HP Flash Frames 6", 0x63bae + (35 * 0x20), 0x63bce + (35 * 0x20), indexCPS2_Shuma },
    { L"P1 HP Flash Frames 7", 0x63bae + (36 * 0x20), 0x63bce + (36 * 0x20), indexCPS2_Shuma },

    { L"P1 Chaos Dimension Frame 1", 0x63bae + (37 * 0x20), 0x63bce + (37 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension (Dash) Frame 1", 0x63bae + (38 * 0x20), 0x63bce + (38 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension Frame 2", 0x63bae + (39 * 0x20), 0x63bce + (39 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension (Dash) Frame 2", 0x63bae + (40 * 0x20), 0x63bce + (40 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension Frame 3", 0x63bae + (41 * 0x20), 0x63bce + (41 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension (Dash) Frame 3", 0x63bae + (42 * 0x20), 0x63bce + (42 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension Frame 4", 0x63bae + (43 * 0x20), 0x63bce + (43 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension (Dash) Frame 4", 0x63bae + (44 * 0x20), 0x63bce + (44 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension Frame 5", 0x63bae + (45 * 0x20), 0x63bce + (45 * 0x20), indexCPS2_Shuma },
    { L"P1 Chaos Dimension (Dash) Frame 5", 0x63bae + (46 * 0x20), 0x63bce + (46 * 0x20), indexCPS2_Shuma },
    { L"P1 Mystic Smash Shadows", 0x63bae + (47 * 0x20), 0x63bce + (47 * 0x20), indexCPS2_Shuma },
};

const sGame_PaletteDataset MSH_A_SHUMA_PALETTES_P2[] =
{
    { L"P2 Main", 0x622Ae, 0x622Ce, indexCPS2_Shuma },
    { L"P2 Dash Frame / Guard Frame", 0x622Ce, 0x622Ee, indexCPS2_Shuma },
    { L"P2 FP / jFP / cFP / Intro", 0x622ee, 0x6230e, indexCPS2_Shuma  },

    { L"P2 Stance Frame (after FP) 1", 0x641ae + (0 * 0x20), 0x641ce + (0 * 0x20), indexCPS2_Shuma },
    { L"P2 Stance Frame (after FP) 2", 0x641ae + (1 * 0x20), 0x641ce + (1 * 0x20), indexCPS2_Shuma },
    { L"P2 Stance Frame (after FP) 3", 0x641ae + (2 * 0x20), 0x641ce + (2 * 0x20), indexCPS2_Shuma },
    { L"P2 Stance Frame (after FP) 4", 0x641ae + (3 * 0x20), 0x641ce + (3 * 0x20), indexCPS2_Shuma },
    { L"P2 Stance Frame (after FP) 5", 0x641ae + (4 * 0x20), 0x641ce + (4 * 0x20), indexCPS2_Shuma },

    { L"P2 Stone Drop (d+HK) Frames 1", 0x641ae + (5 * 0x20), 0x641ce + (5 * 0x20), indexCPS2_Shuma },
    { L"P2 Stone Drop (d+HK) Frames 2", 0x641ae + (6 * 0x20), 0x641ce + (6 * 0x20), indexCPS2_Shuma },
    { L"P2 Stone Drop (d+HK) Frames 3", 0x641ae + (7 * 0x20), 0x641ce + (7 * 0x20), indexCPS2_Shuma },
    { L"P2 Stone Drop (d+HK) Frames 4", 0x641ae + (8 * 0x20), 0x641ce + (8 * 0x20), indexCPS2_Shuma },
    { L"P2 Stone Drop (d+HK) Frames 5", 0x641ae + (9 * 0x20), 0x641ce + (9 * 0x20), indexCPS2_Shuma },

    { L"P2 Unused 1", 0x641ae + (10 * 0x20), 0x641ce + (10 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 2", 0x641ae + (11 * 0x20), 0x641ce + (11 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 3", 0x641ae + (12 * 0x20), 0x641ce + (12 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 4", 0x641ae + (13 * 0x20), 0x641ce + (13 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 5", 0x641ae + (14 * 0x20), 0x641ce + (14 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 6", 0x641ae + (15 * 0x20), 0x641ce + (15 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 7", 0x641ae + (16 * 0x20), 0x641ce + (16 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 8", 0x641ae + (17 * 0x20), 0x641ce + (17 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 9", 0x641ae + (18 * 0x20), 0x641ce + (18 * 0x20), indexCPS2_Shuma },
    { L"P2 Unused 10", 0x641ae + (19 * 0x20), 0x641ce + (19 * 0x20), indexCPS2_Shuma },

    { L"P2 HK grab 1", 0x641ae + (20 * 0x20), 0x641ce + (20 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 2", 0x641ae + (21 * 0x20), 0x641ce + (21 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 3", 0x641ae + (22 * 0x20), 0x641ce + (22 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 4", 0x641ae + (23 * 0x20), 0x641ce + (23 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 5", 0x641ae + (24 * 0x20), 0x641ce + (24 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 6", 0x641ae + (25 * 0x20), 0x641ce + (25 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 7", 0x641ae + (26 * 0x20), 0x641ce + (26 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 8", 0x641ae + (27 * 0x20), 0x641ce + (27 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 9", 0x641ae + (28 * 0x20), 0x641ce + (28 * 0x20), indexCPS2_Shuma },
    { L"P2 HK grab 10", 0x641ae + (29 * 0x20), 0x641ce + (29 * 0x20), indexCPS2_Shuma },

    { L"P2 HP Flash Frames 1", 0x641ae + (30 * 0x20), 0x641ce + (30 * 0x20), indexCPS2_Shuma },
    { L"P2 HP Flash Frames 2", 0x641ae + (31 * 0x20), 0x641ce + (31 * 0x20), indexCPS2_Shuma },
    { L"P2 HP Flash Frames 3", 0x641ae + (32 * 0x20), 0x641ce + (32 * 0x20), indexCPS2_Shuma },
    { L"P2 HP Flash Frames 4", 0x641ae + (33 * 0x20), 0x641ce + (33 * 0x20), indexCPS2_Shuma },
    { L"P2 HP Flash Frames 5", 0x641ae + (34 * 0x20), 0x641ce + (34 * 0x20), indexCPS2_Shuma },
    { L"P2 HP Flash Frames 6", 0x641ae + (35 * 0x20), 0x641ce + (35 * 0x20), indexCPS2_Shuma },
    { L"P2 HP Flash Frames 7", 0x641ae + (36 * 0x20), 0x641ce + (36 * 0x20), indexCPS2_Shuma },

    { L"P2 Chaos Dimension Frame 1", 0x641ae + (37 * 0x20), 0x641ce + (37 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension (Dash) Frame 1", 0x641ae + (38 * 0x20), 0x641ce + (38 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension Frame 2", 0x641ae + (39 * 0x20), 0x641ce + (39 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension (Dash) Frame 2", 0x641ae + (40 * 0x20), 0x641ce + (40 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension Frame 3", 0x641ae + (41 * 0x20), 0x641ce + (41 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension (Dash) Frame 3", 0x641ae + (42 * 0x20), 0x641ce + (42 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension Frame 4", 0x641ae + (43 * 0x20), 0x641ce + (43 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension (Dash) Frame 4", 0x641ae + (44 * 0x20), 0x641ce + (44 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension Frame 5", 0x641ae + (45 * 0x20), 0x641ce + (45 * 0x20), indexCPS2_Shuma },
    { L"P2 Chaos Dimension (Dash) Frame 5", 0x641ae + (46 * 0x20), 0x641ce + (46 * 0x20), indexCPS2_Shuma },
    { L"P2 Mystic Smash Shadows", 0x641ae + (47 * 0x20), 0x641ce + (47 * 0x20), indexCPS2_Shuma },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P1[] =
{
    { L"P1 Main", 0x61C0E, 0x61C2E, indexCPS2_Spidey },
    { L"P1 Spider-sense / Webs", 0x61C2E, 0x61C4E, indexCPS2_Spidey, 2 },
    { L"P1 Taunt Balloon", 0x61C4E, 0x61C6E, indexCPS2_Spidey, 0xd },

    { L"P1 Intro - Frame 1", 0x6280E, 0x6282E, indexCPS2_Spidey, 0x0b },
    { L"P1 Intro - Frame 2", 0x6282E, 0x6284E, indexCPS2_Spidey, 0x0b },
    { L"P1 Intro - Frame 3", 0x6284E, 0x6286E, indexCPS2_Spidey, 0x0b },
    { L"P1 Intro - Frame 4", 0x6286E, 0x6288E, indexCPS2_Spidey, 0x0b },
    { L"P1 Intro - Frame 5", 0x6288E, 0x628aE, indexCPS2_Spidey, 0x0b },
    { L"P1 Intro - Frame 6", 0x628aE, 0x628cE, indexCPS2_Spidey, 0x0b },
    { L"P1 Intro - Frame 7", 0x628cE, 0x628eE, indexCPS2_Spidey, 0x0b },
    { L"P1 Intro - Frame 8", 0x628eE, 0x6290E, indexCPS2_Spidey, 0x0b },
    { L"P1 Spider symbol", 0x6290E, 0x6292E, indexCPS2_Spidey, 0x0c },
    { L"P1 Spider symbol + taunt", 0x6292E, 0x6294E, indexCPS2_Spidey, 0x0d },
    { L"P1 HEY!", 0x6294E, 0x6296E, indexCPS2_Spidey, 0x0e },
    { L"P1 Do your job!", 0x6296E, 0x6298E, indexCPS2_Spidey, 0x0f },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_P2[] =
{
    { L"P2 Main", 0x61C8E, 0x61CAE, indexCPS2_Spidey },
    { L"P2 Spider-sense / Webs", 0x61CAE, 0x61CCE, indexCPS2_Spidey, 2 },
    { L"P2 Taunt Balloon", 0x61CCE, 0x61CEE, indexCPS2_Spidey, 0xd },

    { L"P2 Intro - Frame 1", 0x62a0E, 0x62a2E, indexCPS2_Spidey, 0x0b },
    { L"P2 Intro - Frame 2", 0x62a2E, 0x62a4E, indexCPS2_Spidey, 0x0b },
    { L"P2 Intro - Frame 3", 0x62a4E, 0x62a6E, indexCPS2_Spidey, 0x0b },
    { L"P2 Intro - Frame 4", 0x62a6E, 0x62a8E, indexCPS2_Spidey, 0x0b },
    { L"P2 Intro - Frame 5", 0x62a8E, 0x62aaE, indexCPS2_Spidey, 0x0b },
    { L"P2 Intro - Frame 6", 0x62aaE, 0x62acE, indexCPS2_Spidey, 0x0b },
    { L"P2 Intro - Frame 7", 0x62acE, 0x62aeE, indexCPS2_Spidey, 0x0b },
    { L"P2 Intro - Frame 8", 0x62aeE, 0x62b0E, indexCPS2_Spidey, 0x0b },
    { L"P2 Spider symbol", 0x62b0E, 0x62b2E, indexCPS2_Spidey, 0x0c },
    { L"P2 Spider symbol + taunt", 0x62b2E, 0x62b4E, indexCPS2_Spidey, 0x0d },
    { L"P2 HEY!", 0x62b4E, 0x62b6E, indexCPS2_Spidey, 0x0e },
    { L"P2 Do your job!", 0x62b6E, 0x62b8E, indexCPS2_Spidey, 0x0f },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P1[] =
{
    { L"P1 Main", 0x6264E, 0x6266E, indexCPS2_Thanos },
    { L"P1 Gems", 0x6266E, 0x6268E },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_P2[] =
{
    { L"P2 Main", 0x626CE, 0x626EE, indexCPS2_Thanos },
    { L"P2 Gems", 0x626EE, 0x6270E },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_EXTRAS[] =
{
    { L"Thanos Extras (Shared)", 0x6576E, 0x6578E },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P1[] =
{
    { L"P1 Main", 0x61F8E, 0x61FAE, indexCPS2_Wolverine, 0, &pairNext },
    { L"P1 Claws", 0x61FAE, 0x61FCE, indexCPS2_Wolverine, 1 },
    { L"P1 Berserker Barrage", 0x61FCE, 0x61FEE, indexCPS2_Wolverine, 2 },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_P2[] =
{
    { L"P2 Main", 0x6200E, 0x6202E, indexCPS2_Wolverine, 0, &pairNext },
    { L"P2 Claws", 0x6202E, 0x6204E, indexCPS2_Wolverine, 1 },
    { L"P2 Berserker Barrage", 0x6204E, 0x6206E, indexCPS2_Wolverine, 2 },
};

const sGame_PaletteDataset MSH_A_CSP_PALETTES[] =
{
    { L"Spider-Man P1 CSP",      0x000b180, 0x000b300, indexCPS2_Spidey, indexCSP2Images_MSH_CSPs },
    { L"Spider-Man P2 CSP",      0x000b380, 0x000b500, indexCPS2_Spidey, indexCSP2Images_MSH_CSPs },
    { L"Captain America P1 CSP", 0x000b580, 0x000b780, indexCPS2_CapAm, indexCSP2Images_MSH_CSPs },
    { L"Captain America P2 CSP", 0x000b780, 0x000b980, indexCPS2_CapAm, indexCSP2Images_MSH_CSPs },
    { L"Hulk P1 CSP",            0x000b980, 0x000b9e0, indexCPS2_Hulk, indexCSP2Images_MSH_CSPs },
    { L"Hulk P2 CSP",            0x000bb80, 0x000bbe0, indexCPS2_Hulk, indexCSP2Images_MSH_CSPs },
    { L"Iron Man P1 CSP",        0x000bd80, 0x000bf00, indexCPS2_IronMan, indexCSP2Images_MSH_CSPs },
    { L"Iron Man P2 CSP",        0x000bf80, 0x000c100, indexCPS2_IronMan, indexCSP2Images_MSH_CSPs },
    { L"Wolverine P1 CSP",       0x000c180, 0x000c360, indexCPS2_Wolverine, indexCSP2Images_MSH_CSPs },
    { L"Wolverine P2 CSP",       0x000c380, 0x000c560, indexCPS2_Wolverine, indexCSP2Images_MSH_CSPs },
    { L"Psylocke P1 CSP",        0x000c580, 0x000c6a0, indexCPS2_Psylocke, indexCSP2Images_MSH_CSPs },
    { L"Psylocke P2 CSP",        0x000c780, 0x000c8a0, indexCPS2_Psylocke, indexCSP2Images_MSH_CSPs },
    { L"Blackheart P1 CSP",      0x000c980, 0x000c9c0, indexCPS2_Blackheart, indexCSP2Images_MSH_CSPs },
    { L"Blackheart P2 CSP",      0x000cb80, 0x000cbc0, indexCPS2_Blackheart, indexCSP2Images_MSH_CSPs },
    { L"Shuma-Gorath P1 CSP",    0x000cd80, 0x000ce80, indexCPS2_Shuma, indexCSP2Images_MSH_CSPs },
    { L"Shuma-Gorath P2 CSP",    0x000cf80, 0x000d080, indexCPS2_Shuma, indexCSP2Images_MSH_CSPs },
    { L"Juggernaut P1 CSP",      0x000d180, 0x000d280, indexCPS2_Juggy, indexCSP2Images_MSH_CSPs },
    { L"Juggernaut P2 CSP",      0x000d380, 0x000d480, indexCPS2_Juggy, indexCSP2Images_MSH_CSPs },
    { L"Magneto P1 CSP",         0x000d580, 0x000d780, indexCPS2_Magneto, indexCSP2Images_MSH_CSPs },
    { L"Magneto P2 CSP",         0x000d780, 0x000d980, indexCPS2_Magneto, indexCSP2Images_MSH_CSPs },
    { L"Dr. Doom P1 CSP",        0x000d980, 0x000db60, indexCPS2_DrDoom, indexCSP2Images_MSH_CSPs },
    { L"Dr. Doom P2 CSP",        0x000db80, 0x000dd60, indexCPS2_DrDoom, indexCSP2Images_MSH_CSPs },
    { L"Thanos P1 CSP",          0x000dd80, 0x000df80, indexCPS2_Thanos, indexCSP2Images_MSH_CSPs },
    { L"Thanos P2 CSP",          0x000df80, 0x000e180, indexCPS2_Thanos, indexCSP2Images_MSH_CSPs },
};

const sDescTreeNode MSH_A_ANITA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_PALETTES_P1,             ARRAYSIZE(MSH_A_ANITA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_PALETTES_P2,             ARRAYSIZE(MSH_A_ANITA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_PALETTES_SHARED,             ARRAYSIZE(MSH_A_ANITA_PALETTES_SHARED) },
};

const sDescTreeNode MSH_A_BLACKHEART_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_PALETTES_P1,      ARRAYSIZE(MSH_A_BLACKHEART_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_PALETTES_P2,      ARRAYSIZE(MSH_A_BLACKHEART_PALETTES_P2) },
};

const sDescTreeNode MSH_A_CAPTAINAMERICA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_PALETTES_P1,  ARRAYSIZE(MSH_A_CAPTAINAMERICA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_PALETTES_P2,  ARRAYSIZE(MSH_A_CAPTAINAMERICA_PALETTES_P2) },
};

const sDescTreeNode MSH_A_DRDOOM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_P1,          ARRAYSIZE(MSH_A_DRDOOM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_P2,          ARRAYSIZE(MSH_A_DRDOOM_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_PALETTES_EXTRAS,  ARRAYSIZE(MSH_A_DRDOOM_PALETTES_EXTRAS) },
};

const sDescTreeNode MSH_A_HULK_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_HULK_PALETTES_P1,            ARRAYSIZE(MSH_A_HULK_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_HULK_PALETTES_P2,            ARRAYSIZE(MSH_A_HULK_PALETTES_P2) },
};

const sDescTreeNode MSH_A_IRONMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_P1,         ARRAYSIZE(MSH_A_IRONMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_PALETTES_P2,         ARRAYSIZE(MSH_A_IRONMAN_PALETTES_P2) },
};

const sDescTreeNode MSH_A_JUGGY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_P1,           ARRAYSIZE(MSH_A_JUGGY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_P2,           ARRAYSIZE(MSH_A_JUGGY_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_PALETTES_EXTRAS,   ARRAYSIZE(MSH_A_JUGGY_PALETTES_EXTRAS) },
};

const sDescTreeNode MSH_A_MAGNETO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_PALETTES_P1,         ARRAYSIZE(MSH_A_MAGNETO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_PALETTES_P2,         ARRAYSIZE(MSH_A_MAGNETO_PALETTES_P2) },
};

const sDescTreeNode MSH_A_PSYLOCKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_PALETTES_P1,        ARRAYSIZE(MSH_A_PSYLOCKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_PALETTES_P2,        ARRAYSIZE(MSH_A_PSYLOCKE_PALETTES_P2) },
};

const sDescTreeNode MSH_A_SHUMA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_PALETTES_P1,         ARRAYSIZE(MSH_A_SHUMA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_PALETTES_P2,         ARRAYSIZE(MSH_A_SHUMA_PALETTES_P2) },
};

const sDescTreeNode MSH_A_SPIDERMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_PALETTES_P1,       ARRAYSIZE(MSH_A_SPIDERMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_PALETTES_P2,       ARRAYSIZE(MSH_A_SPIDERMAN_PALETTES_P2) },
};

const sDescTreeNode MSH_A_THANOS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_P1,          ARRAYSIZE(MSH_A_THANOS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_P2,          ARRAYSIZE(MSH_A_THANOS_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_PALETTES_EXTRAS,  ARRAYSIZE(MSH_A_THANOS_PALETTES_EXTRAS) },
};

const sDescTreeNode MSH_A_WOLVERINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_PALETTES_P1,       ARRAYSIZE(MSH_A_WOLVERINE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_PALETTES_P2,       ARRAYSIZE(MSH_A_WOLVERINE_PALETTES_P2) },
};

const sDescTreeNode MSH_A_CSP_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSH_A_CSP_PALETTES,               ARRAYSIZE(MSH_A_CSP_PALETTES) },
};

const UINT8 MSH_A_UNITSORT_06[MSH_A_NUMUNIT_06 + 1] = // Plus 1 for the extra palettes
{
    indexMSHCSPs,

    MSH_A_EXTRALOC_06 // Extra palettes
};

const sDescTreeNode MSH_UNITS_05[] =
{
    { L"Blackheart",                   DESC_NODETYPE_TREE, (void*)MSH_A_BLACKHEART_COLLECTION,       ARRAYSIZE(MSH_A_BLACKHEART_COLLECTION) },
    { L"Captain America",              DESC_NODETYPE_TREE, (void*)MSH_A_CAPTAINAMERICA_COLLECTION,   ARRAYSIZE(MSH_A_CAPTAINAMERICA_COLLECTION) },
    { L"Doctor Doom",                  DESC_NODETYPE_TREE, (void*)MSH_A_DRDOOM_COLLECTION,           ARRAYSIZE(MSH_A_DRDOOM_COLLECTION) },
    { L"Hulk",                         DESC_NODETYPE_TREE, (void*)MSH_A_HULK_COLLECTION,             ARRAYSIZE(MSH_A_HULK_COLLECTION) },
    { L"Iron Man",                     DESC_NODETYPE_TREE, (void*)MSH_A_IRONMAN_COLLECTION,          ARRAYSIZE(MSH_A_IRONMAN_COLLECTION) },
    { L"Juggernaut",                   DESC_NODETYPE_TREE, (void*)MSH_A_JUGGY_COLLECTION,            ARRAYSIZE(MSH_A_JUGGY_COLLECTION) },
    { L"Magneto",                      DESC_NODETYPE_TREE, (void*)MSH_A_MAGNETO_COLLECTION,          ARRAYSIZE(MSH_A_MAGNETO_COLLECTION) },
    { L"Psylocke",                     DESC_NODETYPE_TREE, (void*)MSH_A_PSYLOCKE_COLLECTION,         ARRAYSIZE(MSH_A_PSYLOCKE_COLLECTION) },
    { L"Shuma-Gorath",                 DESC_NODETYPE_TREE, (void*)MSH_A_SHUMA_COLLECTION,            ARRAYSIZE(MSH_A_SHUMA_COLLECTION) },
    { L"Spider-Man",                   DESC_NODETYPE_TREE, (void*)MSH_A_SPIDERMAN_COLLECTION,        ARRAYSIZE(MSH_A_SPIDERMAN_COLLECTION) },
    { L"Thanos",                       DESC_NODETYPE_TREE, (void*)MSH_A_THANOS_COLLECTION,           ARRAYSIZE(MSH_A_THANOS_COLLECTION) },
    { L"Wolverine",                    DESC_NODETYPE_TREE, (void*)MSH_A_WOLVERINE_COLLECTION,        ARRAYSIZE(MSH_A_WOLVERINE_COLLECTION) },
    { L"Anita (Japan-only)",           DESC_NODETYPE_TREE, (void*)MSH_A_ANITA_COLLECTION,            ARRAYSIZE(MSH_A_ANITA_COLLECTION) },
};

constexpr auto MSH_A_NUMUNIT_05 = ARRAYSIZE(MSH_UNITS_05);
#define MSH_A_EXTRALOC_05 MSH_A_NUMUNIT_05

const UINT8 MSH_A_UNITSORT_05[MSH_A_NUMUNIT_05 + 1] = // Plus 1 for the extra palettes
{
    indexMSHBlackheart,
    indexMSHCaptainAmerica,
    indexMSHDoom,
    indexMSHHulk,
    indexMSHIronMan,
    indexMSHJuggy,
    indexMSHMagneto,
    indexMSHPsylocke,
    indexMSHShuma,
    indexMSHSpiderman,
    indexMSHThanos,
    indexMSHWolverine,
    indexMSHAnita, // last since she's Japan-only and broken

    MSH_A_EXTRALOC_05 // Extra palettes
};

const sDescTreeNode MSH_UNITS_06[MSH_A_NUMUNIT_06] =
{
    { L"Character Select Portraits",   DESC_NODETYPE_TREE, (void*)MSH_A_CSP_COLLECTION,              ARRAYSIZE(MSH_A_CSP_COLLECTION) },
};

// We extend this array with data groveled from the MSHe.txt extensible extras file, if any.
const stExtraDef MSH_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#undef USE_LARGE_PALETTES

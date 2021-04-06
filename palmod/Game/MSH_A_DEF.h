#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MSH_A_BLACKHEART_PALETTES. 
// * Update every array using MSH_A_NUMUNIT below
// That should be it.  Good luck.

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

    { L"P1 Intro 1/16 and Inferno palette", 0x62cee, 0x62d0e, indexCPS2_Blackheart },
    { L"P1 Intro 2/16", 0x62d0e, 0x62d2e, indexCPS2_Blackheart },
    { L"P1 Intro 3/16 and post-Inferno palette", 0x62d2e, 0x62d4e, indexCPS2_Blackheart },
    { L"P1 Intro 4/16", 0x62d4e, 0x62d6e, indexCPS2_Blackheart },
    { L"P1 Intro 5/16", 0x62d6e, 0x62d8e, indexCPS2_Blackheart },
    { L"P1 Intro 6/16", 0x62d8e, 0x62dae, indexCPS2_Blackheart },
    { L"P1 Intro 7/16", 0x62dae, 0x62dce, indexCPS2_Blackheart },
    { L"P1 Intro 8/16", 0x62dce, 0x62dee, indexCPS2_Blackheart },
    { L"P1 Intro 9/16", 0x62dee, 0x62e0e, indexCPS2_Blackheart },
    { L"P1 Intro 10/16", 0x62e0e, 0x62e2e, indexCPS2_Blackheart },
    { L"P1 Intro 11/16", 0x62e2e, 0x62e4e, indexCPS2_Blackheart },
    { L"P1 Intro 12/16", 0x62e4e, 0x62e6e, indexCPS2_Blackheart },
    { L"P1 Intro 13/16", 0x62e6e, 0x62e8e, indexCPS2_Blackheart },
    { L"P1 Intro 14/16", 0x62e8e, 0x62eae, indexCPS2_Blackheart },
    { L"P1 Intro 15/16", 0x62eae, 0x62ece, indexCPS2_Blackheart },
    { L"P1 Intro 16/16", 0x62ece, 0x62eee, indexCPS2_Blackheart },
    { L"P1 Unknown", 0x62eee, 0x62f0e, indexCPS2_Blackheart },

    { L"P1 Unknown 1/3", 0x6326e, 0x6328e, indexCPS2_Blackheart },
    { L"P1 Unknown 2/3", 0x6328e, 0x632ae, indexCPS2_Blackheart },
    { L"P1 Unknown 3/3", 0x632ae, 0x632ce, indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_P2[] =
{
    { L"P2 Main",  0x621CE, 0x621EE, indexCPS2_Blackheart },
    { L"P2 HP + HK Demons",  0x6372E, 0x6374E, indexCPS2_Blackheart, 0x02 },
    { L"P2 Dark Thunder",  0x6378E, 0x637AE, indexCPS2_Blackheart, 0x01 },
    { L"P2 Armageddon", 0x63AEE, 0x63B0E, indexCPS2_Blackheart, 0x0B },

    { L"P2 Intro 1/16 and Inferno palette", 0x634ee, 0x6350e, indexCPS2_Blackheart },
    { L"P2 Intro 2/16", 0x6350e, 0x6352e, indexCPS2_Blackheart },
    { L"P2 Intro 3/16 and post-Inferno palette", 0x6352e, 0x6354e, indexCPS2_Blackheart },
    { L"P2 Intro 4/16", 0x6354e, 0x6356e, indexCPS2_Blackheart },
    { L"P2 Intro 5/16", 0x6356e, 0x6358e, indexCPS2_Blackheart },
    { L"P2 Intro 6/16", 0x6358e, 0x635ae, indexCPS2_Blackheart },
    { L"P2 Intro 7/16", 0x635ae, 0x635ce, indexCPS2_Blackheart },
    { L"P2 Intro 8/16", 0x635ce, 0x635ee, indexCPS2_Blackheart },
    { L"P2 Intro 9/16", 0x635ee, 0x6360e, indexCPS2_Blackheart },
    { L"P2 Intro 10/16", 0x6360e, 0x6362e, indexCPS2_Blackheart },
    { L"P2 Intro 11/16", 0x6362e, 0x6364e, indexCPS2_Blackheart },
    { L"P2 Intro 12/16", 0x6364e, 0x6366e, indexCPS2_Blackheart },
    { L"P2 Intro 13/16", 0x6366e, 0x6368e, indexCPS2_Blackheart },
    { L"P2 Intro 14/16", 0x6368e, 0x636ae, indexCPS2_Blackheart },
    { L"P2 Intro 15/16", 0x636ae, 0x636ce, indexCPS2_Blackheart },
    { L"P2 Intro 16/16", 0x636ce, 0x636ee, indexCPS2_Blackheart },
    { L"P2 Unknown", 0x636ee, 0x6370e, indexCPS2_Blackheart },

    { L"P2 Unknown 1/3", 0x63a6e, 0x63a8e, indexCPS2_Blackheart },
    { L"P2 Unknown 2/3", 0x63a8e, 0x63aae, indexCPS2_Blackheart },
    { L"P2 Unknown 3/3", 0x63aae, 0x63ace, indexCPS2_Blackheart },
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
    { L"P1 Gamma Crush", 0x61E0E, 0x61E2E, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_P2[] =
{
    { L"P2 Main", 0x61E4E, 0x61E6E, indexCPS2_Hulk },
    { L"P2 Gamma Charge / Clap", 0x61E6E, 0x61E8E, indexCPS2_Hulk, 1 },
    { L"P2 Gamma Crush", 0x61E8E, 0x61EAE, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P1[] =
{
    { L"P1 Main", 0x61EAE, 0x61ECE, indexCPS2_IronMan },
    { L"P1 Proton Cannon", 0x61ECE, 0x61EEE, indexCPS2_IronMan, 1 },
    { L"P1 Proton Canon laser / unibeam", 0x61EEE, 0x61F0E, indexCPS2_IronMan, 2 },

    { L"P1 Unknown", 0x6324e, 0x6326e, indexCPS2_IronMan },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_P2[] =
{
    { L"P2 Main", 0x61F2E, 0x61F4E, indexCPS2_IronMan },
    { L"P2 Proton Cannon", 0x61F4E, 0x61F6E, indexCPS2_IronMan, 1 },
    { L"P2 Proton Canon laser / unibeam", 0x61F6E, 0x61F8E, indexCPS2_IronMan, 2 },

    { L"P2 Unknown", 0x63a4e, 0x63a6e, indexCPS2_IronMan },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_SHARED[] =
{
    { L"End Pose Glimmer 1/3", 0x62c8e, 0x62cae, indexCPS2_IronMan },
    { L"End Pose Glimmer 2/3", 0x62cae, 0x62cce, indexCPS2_IronMan },
    { L"End Pose Glimmer 3/3", 0x62cce, 0x62cee, indexCPS2_IronMan },
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
    { L"P1 + P2 Extra (Super Armor) / Burning 1/2 Dark", 0x6EC6E, 0x6EC8E, indexCPS2_Juggy, 11 },

    { L"Space Gem Armor 1 (Shared)", 0x64ECE, 0x64EEE, indexCPS2_Juggy },
    { L"Space Gem Armor 2 (Shared)", 0x64EEE, 0x64F0E, indexCPS2_Juggy },
    { L"Space Gem Armor 3 (Shared)", 0x64F0E, 0x64F2E, indexCPS2_Juggy },
    { L"Space Gem Armor 4 (Shared)", 0x64F2E, 0x64F4E, indexCPS2_Juggy },
    { L"Space Gem Armor 5 (Shared)", 0x64F4E, 0x64F6E, indexCPS2_Juggy },
    { L"Space Gem Armor 6 (Shared)", 0x64F6E, 0x64F8E, indexCPS2_Juggy },
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
    { L"Thanos victory pose flash",     0x6566e, 0x6568e, indexCPS2_Thanos },
    { L"Terraxia incoming orb",         0x6568e, 0x656ae },
    { L"Terraxia solid color frame",    0x656ae, 0x656ce, indexCPS2_Thanos, 8 },
    { L"Terraxia appearing",            0x656ce, 0x656ee, indexCPS2_Thanos, 8 },
    { L"Terraxia hugging",              0x656ee, 0x6570e, indexCPS2_Thanos, 9 },

    { L"Thanos Extras",                 0x6576E, 0x6578E },
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

const sGame_PaletteDataset MSH_A_VSP_PALETTES[] = 
{
    { L"Spider-Man P1 VSP",         0x75F0, 0x7770, indexCPS2_Spidey, indexCSP2Images_MSH_VSPs },
    { L"Spider-Man P2 VSP",         0x88C0, 0x8a40, indexCPS2_Spidey, indexCSP2Images_MSH_VSPs },
    { L"Captain America P1 VSP",    0x7770, 0x7970, indexCPS2_CapAm, indexCSP2Images_MSH_VSPs },
    { L"Captain America P2 VSP",    0x8a40, 0x8C40, indexCPS2_CapAm, indexCSP2Images_MSH_VSPs },
    { L"Hulk P1 VSP",               0x7970, 0x79D0, indexCPS2_Hulk, indexCSP2Images_MSH_VSPs },
    { L"Hulk P2 VSP",               0x8C40, 0x8CA0, indexCPS2_Hulk, indexCSP2Images_MSH_VSPs },
    { L"Iron Man P1 VSP",           0x79D0, 0x7B50, indexCPS2_IronMan, indexCSP2Images_MSH_VSPs },
    { L"Iron Man P2 VSP",           0x8CA0, 0x8E20, indexCPS2_IronMan, indexCSP2Images_MSH_VSPs },
    { L"Wolverine P1 VSP",          0x7B50, 0x7D30, indexCPS2_Wolverine, indexCSP2Images_MSH_VSPs },
    { L"Wolverine P2 VSP",          0x8E20, 0x9000, indexCPS2_Wolverine, indexCSP2Images_MSH_VSPs },
    { L"Psylocke P1 VSP",           0x7D30, 0x7E50, indexCPS2_Psylocke, indexCSP2Images_MSH_VSPs },
    { L"Psylocke P2 VSP",           0x9000, 0x9120, indexCPS2_Psylocke, indexCSP2Images_MSH_VSPs },
    { L"Blackheart P1 VSP",         0x7E50, 0x7E90, indexCPS2_Blackheart, indexCSP2Images_MSH_VSPs },
    { L"Blackheart P2 VSP",         0x9120, 0x9160, indexCPS2_Blackheart, indexCSP2Images_MSH_VSPs },
    { L"Shuma-Gorath P1 VSP",       0x7E90, 0x7F90, indexCPS2_Shuma, indexCSP2Images_MSH_VSPs },
    { L"Shuma-Gorath P2 VSP",       0x9160, 0x9260, indexCPS2_Shuma, indexCSP2Images_MSH_VSPs },
    { L"Juggernaut P1 VSP",         0x7F90, 0x8090, indexCPS2_Juggy, indexCSP2Images_MSH_VSPs },
    { L"Juggernaut P2 VSP",         0x9260, 0x9360, indexCPS2_Juggy, indexCSP2Images_MSH_VSPs },
    { L"Magneto P1 VSP 1/2",        0x8090, 0x8290, indexCPS2_Magneto, indexCSP2Images_MSH_VSPs, &pairNext },
    { L"Magneto P1 VSP 2/2",        0x8290, 0x82B0, indexCPS2_Magneto, 0x91 },
    { L"Magneto P2 VSP 1/2",        0x9360, 0x9560, indexCPS2_Magneto, indexCSP2Images_MSH_VSPs, &pairNext },
    { L"Magneto P2 VSP 2/2",        0x9560, 0x9580, indexCPS2_Magneto, 0x91 },
    { L"Dr. Doom P1 VSP",           0x82B0, 0x8490, indexCPS2_DrDoom, indexCSP2Images_MSH_VSPs },
    { L"Dr. Doom P2 VSP",           0x9580, 0x9760, indexCPS2_DrDoom, indexCSP2Images_MSH_VSPs },
    { L"Thanos P1 VSP",             0x8490, 0x8630, indexCPS2_Thanos, indexCSP2Images_MSH_VSPs },
    { L"Thanos P2 VSP",             0x9760, 0x9900, indexCPS2_Thanos, indexCSP2Images_MSH_VSPs },
};

const sGame_PaletteDataset MSH_A_SPIDERMAN_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e, 0x6e38e, indexCPS2_Spidey },
    { L"Burning 2/2 Light", 0x6e38e, 0x6e3ae, indexCPS2_Spidey },
    { L"Iced 1/2 Dark",     0x6e3ae, 0x6e3ce, indexCPS2_Spidey },
    { L"Iced 2/2 Light",    0x6e3ce, 0x6e3ee, indexCPS2_Spidey },
    { L"Stun Demons? 1/2",  0x6e3ee, 0x6e40e, indexCPS2_Spidey },
    { L"Stun Demons? 2/2",  0x6e40e, 0x6e42e, indexCPS2_Spidey },
    { L"Soul Drain? 1/2",   0x6e42e, 0x6e44e, indexCPS2_Spidey },
    { L"Soul Drain? 2/2",   0x6e44e, 0x6e46e, indexCPS2_Spidey },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6620e, 0x6622e, indexCPS2_Spidey },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6640e, 0x6642e, indexCPS2_Spidey },
};

const sGame_PaletteDataset MSH_A_CAPTAINAMERICA_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x01), 0x6e38e + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x02), 0x6e38e + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x01), 0x6e3ae + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x02), 0x6e3ae + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x01), 0x6e3ce + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x02), 0x6e3ce + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x01), 0x6e3ee + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x02), 0x6e3ee + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x01), 0x6e40e + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x02), 0x6e40e + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x01), 0x6e42e + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x02), 0x6e42e + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x01), 0x6e44e + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x02), 0x6e44e + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x01), 0x6e46e + (0x100 * 0x01), indexCPS2_CapAm, 0x00, &pairNext },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x02), 0x6e46e + (0x100 * 0x02), indexCPS2_CapAm, 0x01 },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6622e, 0x6624e, indexCPS2_CapAm },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6642e, 0x6644e, indexCPS2_CapAm },
};

const sGame_PaletteDataset MSH_A_HULK_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x03), 0x6e38e + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x03), 0x6e3ae + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x03), 0x6e3ce + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x03), 0x6e3ee + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x03), 0x6e40e + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x03), 0x6e42e + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x03), 0x6e44e + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x03), 0x6e46e + (0x100 * 0x03), indexCPS2_Hulk },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6624e, 0x6626e, indexCPS2_Hulk },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6644e, 0x6646e, indexCPS2_Hulk },
};

const sGame_PaletteDataset MSH_A_IRONMAN_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x04), 0x6e38e + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x04), 0x6e3ae + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x04), 0x6e3ce + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x04), 0x6e3ee + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x04), 0x6e40e + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x04), 0x6e42e + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x04), 0x6e44e + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x04), 0x6e46e + (0x100 * 0x04), indexCPS2_IronMan },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6626e, 0x6628e, indexCPS2_IronMan },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6646e, 0x6648e, indexCPS2_IronMan },
};

const sGame_PaletteDataset MSH_A_WOLVERINE_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x05), 0x6e38e + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x05), 0x6e3ae + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x05), 0x6e3ce + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x05), 0x6e3ee + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x05), 0x6e40e + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x05), 0x6e42e + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x05), 0x6e44e + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x05), 0x6e46e + (0x100 * 0x05), indexCPS2_Wolverine },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6628e, 0x662ae, indexCPS2_Wolverine },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6648e, 0x664ae, indexCPS2_Wolverine },
};

const sGame_PaletteDataset MSH_A_PSYLOCKE_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x06), 0x6e38e + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x06), 0x6e3ae + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x06), 0x6e3ce + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x06), 0x6e3ee + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x06), 0x6e40e + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x06), 0x6e42e + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x06), 0x6e44e + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x06), 0x6e46e + (0x100 * 0x06), indexCPS2_Psylocke },
    { L"Soul Gem Slowdown 1/2 Pink", 0x662ae, 0x662ce, indexCPS2_Psylocke },
    { L"Soul Gem Slowdown 2/2 Blue", 0x664ae, 0x664ce, indexCPS2_Psylocke },
};

const sGame_PaletteDataset MSH_A_BLACKHEART_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x07), 0x6e38e + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x07), 0x6e3ae + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x07), 0x6e3ce + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x07), 0x6e3ee + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x07), 0x6e40e + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x07), 0x6e42e + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x07), 0x6e44e + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x07), 0x6e46e + (0x100 * 0x07), indexCPS2_Blackheart },
    { L"Soul Gem Slowdown 1/2 Pink", 0x662ce, 0x662ee, indexCPS2_Blackheart },
    { L"Soul Gem Slowdown 2/2 Blue", 0x664ce, 0x664ee, indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSH_A_SHUMA_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x08), 0x6e38e + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x08), 0x6e3ae + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x08), 0x6e3ce + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x08), 0x6e3ee + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x08), 0x6e40e + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x08), 0x6e42e + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x08), 0x6e44e + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x08), 0x6e46e + (0x100 * 0x08), indexCPS2_Shuma },
    { L"Soul Gem Slowdown 1/2 Pink", 0x662ee, 0x6630e, indexCPS2_Shuma },
    { L"Soul Gem Slowdown 2/2 Blue", 0x664ee, 0x6650e, indexCPS2_Shuma },
};

const sGame_PaletteDataset MSH_A_JUGGERNAUT_PALETTES_STATUS[] =
{
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x09), 0x6e3ae + (0x100 * 0x09), indexCPS2_Juggy },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x09), 0x6e3ce + (0x100 * 0x09), indexCPS2_Juggy },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x09), 0x6e3ee + (0x100 * 0x09), indexCPS2_Juggy },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x09), 0x6e40e + (0x100 * 0x09), indexCPS2_Juggy },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x09), 0x6e42e + (0x100 * 0x09), indexCPS2_Juggy },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x09), 0x6e44e + (0x100 * 0x09), indexCPS2_Juggy },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x09), 0x6e46e + (0x100 * 0x09), indexCPS2_Juggy },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6630e, 0x6632e, indexCPS2_Juggy },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6650e, 0x6652e, indexCPS2_Juggy },
};

const sGame_PaletteDataset MSH_A_MAGNETO_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x0a), 0x6e38e + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x0a), 0x6e3ae + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x0a), 0x6e3ce + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x0a), 0x6e3ee + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x0a), 0x6e40e + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x0a), 0x6e42e + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x0a), 0x6e44e + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x0a), 0x6e46e + (0x100 * 0x0a), indexCPS2_Magneto },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6632e, 0x6634e, indexCPS2_Magneto },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6652e, 0x6654e, indexCPS2_Magneto },
};

const sGame_PaletteDataset MSH_A_DOOM_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x0b), 0x6e38e + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x0b), 0x6e3ae + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x0b), 0x6e3ce + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x0b), 0x6e3ee + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x0b), 0x6e40e + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x0b), 0x6e42e + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x0b), 0x6e44e + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x0b), 0x6e46e + (0x100 * 0x0b), indexCPS2_DrDoom },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6634e, 0x6636e, indexCPS2_DrDoom},
    { L"Soul Gem Slowdown 2/2 Blue", 0x6654e, 0x6656e, indexCPS2_DrDoom },
};

const sGame_PaletteDataset MSH_A_THANOS_PALETTES_STATUS[] =
{
    { L"Burning 1/2 Dark",  0x6e36e + (0x100 * 0x0c), 0x6e38e + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Burning 2/2 Light", 0x6e38e + (0x100 * 0x0c), 0x6e3ae + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Iced 1/2 Dark",     0x6e3ae + (0x100 * 0x0c), 0x6e3ce + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Iced 2/2 Light",    0x6e3ce + (0x100 * 0x0c), 0x6e3ee + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Stun Demons? 1/2",  0x6e3ee + (0x100 * 0x0c), 0x6e40e + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Stun Demons? 2/2",  0x6e40e + (0x100 * 0x0c), 0x6e42e + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Soul Drain? 1/2",   0x6e42e + (0x100 * 0x0c), 0x6e44e + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Soul Drain? 2/2",   0x6e44e + (0x100 * 0x0c), 0x6e46e + (0x100 * 0x0c), indexCPS2_Thanos },
    { L"Soul Gem Slowdown 1/2 Pink", 0x6636e, 0x6638e, indexCPS2_Thanos },
    { L"Soul Gem Slowdown 2/2 Blue", 0x6656e, 0x6658e, indexCPS2_Thanos },
};

const sGame_PaletteDataset MSH_A_BONUS_GEMS_PALETTES[] =
{
    { L"Time Gem, Soul Gem", 0x6A72C, 0x6A74C },
    { L"Space Gem, Power Gem", 0x6A74C, 0x6A76C },
    { L"Reality Gem", 0x6B66C, 0x6B68C },
    { L"Mind Gem", 0x6B60C, 0x6B62C },
};

const sGame_PaletteDataset MSH_A_BONUS_MINDGEM_PALETTES[] =
{
    // Thanos Mind Gem status effect - MSH
    { L"Spider-Man P1", 0x65E0C, 0x65E2C },
    { L"Captain America P1", 0x65E2C, 0x65E4C },
    { L"Captain America P1 Shield", 0x65FAC, 0x65FCC },
    { L"Hulk P1", 0x65E4C, 0x65E6C },
    { L"Iron Man P1", 0x65E6C, 0x65E8C },
    { L"Wolverine P1", 0x65E8C, 0x65EAC },
    { L"Psylocke P1", 0x65EAC, 0x65ECC },
    { L"BlackHeart P1", 0x65ECC, 0x65EEC },
    { L"Shuma-Gorath P1", 0x65EEC, 0x65F0C },
    { L"Juggernaut P1", 0x65F0C, 0x65F2C },
    { L"Magneto P1", 0x65F2C, 0x65F4C },
    { L"Dr. Doom P1", 0x65F4C, 0x65F6C },
    { L"Thanos P1", 0x65F6C, 0x65F8C },
    { L"Anita P1", 0x65F8C, 0x65FAC },

    { L"Spider-Man P2", 0x6600C, 0x6602C },
    { L"Captain America P2", 0x6602C, 0x6604C },
    { L"Captain America P2 Shield", 0x661AC, 0x661CC },
    { L"Hulk P2", 0x6604C, 0x6606C },
    { L"Iron Man P2", 0x6606C, 0x6608C },
    { L"Wolverine P2", 0x6608C, 0x660AC },
    { L"Psylocke P2", 0x660AC, 0x660CC },
    { L"BlackHeart P2", 0x660CC, 0x660EC },
    { L"Shuma-Gorath P2", 0x660EC, 0x6610C },
    { L"Juggernaut P2", 0x6610C, 0x6612C },
    { L"Magneto P2", 0x6612C, 0x6614C },
    { L"Dr. Doom P2", 0x6614C, 0x6616C },
    { L"Thanos P2", 0x6616C, 0x6618C },
    { L"Anita P2", 0x6618C, 0x661AC },
};

const sGame_PaletteDataset MSH_A_BONUS_CSI_PALETTES[] =
{
    { L"Spider-Man", 0x6B2EC, 0x6B30C },
    { L"Captain America", 0x6B30C, 0x6B32C },
    { L"Hulk", 0x6B32C, 0x6B34C },
    { L"Iron Man", 0x6B34C, 0x6B36C },
    { L"Wolverine", 0x6B36C, 0x6B3AC },
    //{ L"Wolverine Pt.2", 0x6B38C, 0x6B3AC },
    { L"Psylocke", 0x6B3AC, 0x6B3EC },
    //{ L"Psylocke Pt.2", 0x6B3CC, 0x6B3EC },
    { L"BlackHeart", 0x6B3EC, 0x6B40C },
    { L"Shuma-Gorath", 0x6B40C, 0x6B42C },
    { L"Juggernaut", 0x6B42C, 0x6B44C },
    { L"Magneto", 0x6B44C, 0x6B46C },
};

// This is present but using a base palette not effects colors
//{ L"Soul Gem Slowdown 1/2", 0x6638e, 0x663ae, indexCPS2_Anita },
//{ L"Soul Gem Slowdown 2/2", 0x6658e, 0x665ae, indexCPS2_Anita },
// This is present but not correct for the ST Akuma sprite
//{ L"Soul Gem Slowdown 1/2", 0x663ae, 0x663ce, indexCPS2_STAkuma },
//{ L"Soul Gem Slowdown 2/2", 0x665ae, 0x665ce, indexCPS2_STAkuma },

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

const sDescTreeNode MSH_A_BONUS_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_CSI_PALETTES, ARRAYSIZE(MSH_A_BONUS_CSI_PALETTES) },
    { L"Gems", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_GEMS_PALETTES, ARRAYSIZE(MSH_A_BONUS_GEMS_PALETTES) },
    { L"Mind Gem Effects", DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_MINDGEM_PALETTES, ARRAYSIZE(MSH_A_BONUS_MINDGEM_PALETTES) },
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
    { L"Bonus",                         DESC_NODETYPE_TREE, (void*)MSH_A_BONUS_COLLECTION,            ARRAYSIZE(MSH_A_BONUS_COLLECTION) },
};

constexpr auto MSH_A_NUMUNIT_05 = ARRAYSIZE(MSH_UNITS_05);
#define MSH_A_EXTRALOC_05 MSH_A_NUMUNIT_05

const sDescTreeNode MSH_UNITS_06[] =
{
    { L"Character Select Portraits",    DESC_NODETYPE_TREE, (void*)MSH_A_CSP_COLLECTION,              ARRAYSIZE(MSH_A_CSP_COLLECTION) },
    { L"Victory Screen Portraits",      DESC_NODETYPE_TREE, (void*)MSH_A_VSP_COLLECTION,              ARRAYSIZE(MSH_A_VSP_COLLECTION) },
};

constexpr auto MSH_A_NUMUNIT_06 = ARRAYSIZE(MSH_UNITS_06);
#define MSH_A_EXTRALOC_06 MSH_A_NUMUNIT_06

// We extend this array with data groveled from the MSHe.txt extensible extras file, if any.
const stExtraDef MSH_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

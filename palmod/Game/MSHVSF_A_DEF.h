#pragma once

enum Supported_MSHVSF_7B_PaletteListIndex
{
    index_MSHVSF_7B_Extras,
    index_MSHVSF_7B_Last
};

constexpr auto MSHVSF_A_NUM_IND_7B = index_MSHVSF_7B_Last;

#define MSHVSF_A_EXTRALOC_7B MSHVSF_A_NUM_IND_7B

const sGame_PaletteDataset MSHVSF_A_APOCALYPSE_PALETTES_SHARED[] =
{
    { L"Small Body (Intro)", 0x71ECc, 0x71EEc, indexCPS2_Apocalypse, 0x00 },
    { L"Giant Head",         0x71E8c, 0x71EAc, indexCPS2_Apocalypse, 0x01 },
    { L"Giant Body",         0x59EF2, 0x59F32, indexCPS2_Apocalypse, 0x03 },
    { L"Giant Arm",          0x71E6c, 0x71E8c, indexCPS2_Apocalypse, 0x02 },
    { L"Shoulder Gun",       0x71EAc, 0x71ECc, indexCPS2_Apocalypse, 0x04 },
    { L"Shockwave",          0x71EEc, 0x71F0c },
    { L"?",                  0x71F0c, 0x71F2c },
    { L"Apocalypse Drone",   0x71F2c, 0x71F4c, indexCPS2_Apocalypse, 0x05 },
    { L"Hand: Mace and Drill", 0x71F4c, 0x71F6c },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7340c, 0x7342c, indexCPS2_Spidey },
    { L"Extra 01: webs",          0x7342c, 0x7344c, indexCPS2_Spidey, 2 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x7346c, 0x7348c, indexCPS2_Spidey },
    { L"Extra 02: webs",         0x7348c, 0x734Ac, indexCPS2_Spidey, 2 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7258c, 0x725Ac, indexCPS2_Blackheart },
    { L"Extra 01",               0x725Ac, 0x725Cc },
};
const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x725Ec, 0x7260c, indexCPS2_Blackheart },
    { L"Extra 02",               0x7260c, 0x7262c },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7334c, 0x7336c, indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x733Ac, 0x733Cc, indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED[] =
{
    //{ L"P1 Extras 1?", 0x76BEc, 0x76C0c }, // doesn't match mvc2 anything bugbug
    { L"P1 HP/HK Demons", 0x769Cc, 0x769Ec, indexCPS2_Blackheart, 0x02 },
    { L"Blackheart P1 HP/HK Demons (hurt)", 0x725Cc, 0x725Ec, indexCPS2_Blackheart, 0x02 },
    { L"Mephisto P1 HP/HK Demons (hurt)", 0x7338c, 0x733Ac, indexCPS2_Blackheart, 0x02 },
    { L"P2 HP/HK Demons", 0x76B4c, 0x76B6c, indexCPS2_Blackheart, 0x02 },
    { L"Blackheart P2 HP/HK Demons (hurt)", 0x7262c, 0x7264c, indexCPS2_Blackheart, 0x02 },
    { L"Mephisto P2 HP/HK Demons (hurt)", 0x733Ec, 0x7340c, indexCPS2_Blackheart, 0x02 },
    { L"HCF+P Dark Thunder", 0x769Ec, 0x76A0c, indexCPS2_Blackheart, 0x01 },
    { L"HCB+LP (Thunder Inferno)", 0x76A0c, 0x76A2c, indexCPS2_Blackheart, 0x09 },
    { L"HCB+MP (Ice Inferno)", 0x76A2c, 0x76A4c, indexCPS2_Blackheart, 0x08 },
    { L"HCB+HP (Flame Inferno)", 0x76A4c, 0x76A6c, indexCPS2_Blackheart, 0x0A },
    { L"Armageddon Meteors (QCF+3P)", 0x76A8c, 0x76AAc, indexCPS2_Blackheart, 0x0B },
    { L"Heart of Darkness (QCF+3K)", 0x76BAc, 0x76BCc },
    { L"j.MP Lightning (All)", 0x76BCc, 0x76BEc, indexCPS2_Blackheart, 0x0D },
    { L"MP/HP Throw (Ground)", 0x76AAc, 0x76ACc, indexCPS2_Blackheart, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",           0x7210c, 0x7212c, indexCPS2_CapAm, 0, &pairNext },
    { L"P1 Shield",                  0x7212c, 0x7214c, indexCPS2_CapAm, 1 },
    { L"P1 Charging Star",           0x7214c, 0x7216c, indexCPS2_CapAm, 2 },

};
const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",            0x7216c, 0x7218c, indexCPS2_CapAm, 0, &pairNext },
    { L"P2 Shield",                  0x7218c, 0x721Ac, indexCPS2_CapAm, 1 },
    { L"P2 Charging Star",           0x721Ac, 0x721Cc, indexCPS2_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",   0x727Cc, 0x727Ec, indexCPS2_ChunLi, 0, &pairNext },
    { L"P1 Keiokuken (shades)", 0x727Ec, 0x7280c, indexCPS2_ChunLi, 1 },
    { L"P1 Kikosho",         0x7280c, 0x7282c, indexCPS2_ChunLi, 2 },
};
const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",    0x7282c, 0x7284c, indexCPS2_ChunLi, 0, &pairNext },
    { L"P2 Keiokuken (shades)", 0x7284c, 0x7286c, indexCPS2_ChunLi, 1 },
    { L"P2 Kikosho",         0x7286c, 0x7288c, indexCPS2_ChunLi, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)", 0x72ECc, 0x72EEc, indexCPS2_CyberAkuma, 0, &pairNext },
    { L"P1 Machinery, Hadouken 2", 0x72F0c, 0x72F2c, indexCPS2_CyberAkuma, 1 },
    { L"P1 Hadouken 1 Tatsu Flames", 0x72EEc, 0x72F0c, indexCPS2_Akuma, 1 },
};
const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x72F2c, 0x72F4c, indexCPS2_CyberAkuma, 0, &pairNext },
    { L"P2 Machinery, Hadouken 2", 0x72F6c, 0x72F8c, indexCPS2_CyberAkuma, 1 },
    { L"P2 Hadouken 1 Tatsu Flames", 0x72F4c, 0x72F6c, indexCPS2_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)", 0x71F8c, 0x71FAc, indexCPS2_Cyclops },
    { L"P1 HK Extra", 0x71FAc, 0x71FCc, indexCPS2_Cyclops, 1 },
    { L"P1 Optic Blast Super", 0x71FCc, 0x71FEc, indexCPS2_Cyclops, 2 },
    { L"P1 Intro 1", 0x7616c, 0x7618c, indexCPS2_Cyclops },
    { L"P1 Intro 2", 0x7618c, 0x761Ac, indexCPS2_Cyclops },
    { L"P1 Intro 3", 0x761Ac, 0x761Cc, indexCPS2_Cyclops },
    { L"P1 Intro 4", 0x761Cc, 0x761Ec, indexCPS2_Cyclops },
    { L"P1 Intro 5", 0x761Ec, 0x7620c, indexCPS2_Cyclops },
    { L"P1 Intro 6", 0x7620c, 0x7622c, indexCPS2_Cyclops },
    { L"P1 Intro 7", 0x7622c, 0x7624c, indexCPS2_Cyclops },
    { L"P1 Intro 8", 0x7624c, 0x7626c, indexCPS2_Cyclops },
    { L"P1 Extra Lighting", 0x7640c, 0x7642c, indexCPS2_Cyclops },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x71FEc, 0x7200c, indexCPS2_Cyclops },
    { L"P2 HK Extra", 0x7200c, 0x7202c, indexCPS2_Cyclops, 1 },
    { L"P2 Optic Blast Super", 0x7202c, 0x7204c, indexCPS2_Cyclops, 2 },
    { L"P2 Intro 1", 0x7626c, 0x7628c, indexCPS2_Cyclops },
    { L"P2 Intro 2", 0x7628c, 0x762Ac, indexCPS2_Cyclops },
    { L"P2 Intro 3", 0x762Ac, 0x762Cc, indexCPS2_Cyclops },
    { L"P2 Intro 4", 0x762Cc, 0x762Ec, indexCPS2_Cyclops },
    { L"P2 Intro 5", 0x762Ec, 0x7630c, indexCPS2_Cyclops },
    { L"P2 Intro 6", 0x7630c, 0x7632c, indexCPS2_Cyclops },
    { L"P2 Intro 7", 0x7632c, 0x7634c, indexCPS2_Cyclops },
    { L"P2 Intro 8", 0x7634c, 0x7636c, indexCPS2_Cyclops },
    { L"P2 Extra Lighting 2", 0x7644c, 0x7646c, indexCPS2_Cyclops },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_SHARED[] =
{
    { L"P1 Optic Light Extra?", 0x7642c, 0x7644c, indexCPS2_Cyclops },
    { L"P2 Laser FX", 0x720Ec, 0x7210c, indexCPS2_Cyclops, 3 },
    { L"P2 Optic Blast Palette?", 0x7638c, 0x763Ac },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",  0x72E0c, 0x72E2c, indexCPS2_Dan },
    { L"P1 gadoken",        0x72E2c, 0x72E4c, indexCPS2_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",   0x72E6c, 0x72E8c, indexCPS2_Dan },
    { L"P2 gadoken",        0x72E8c, 0x72EAc, indexCPS2_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",  0x7310c, 0x7312c, indexCPS2_Sakura },
    { L"P1 Hadouken",       0x7312c, 0x7314c, indexCPS2_Ken, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",   0x7316c, 0x7318c, indexCPS2_Sakura },
    { L"P2 Hadouken",       0x7318c, 0x731Ac, indexCPS2_Ken, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7288c, 0x728Ac, indexCPS2_Dhalsim },
    { L"P1 Extras 1 Flames",      0x728Ac, 0x728Cc, indexCPS2_Dhalsim, 1 },
    { L"P1 Extras Sally",         0x728Cc, 0x728Ec, indexCPS2_Dhalsim, 2 },
    { L"P1 Teleport 1", 0x76CCc, 0x76CEc, indexCPS2_Dhalsim, 0xb },
    { L"P1 Teleport 2", 0x76CEc, 0x76D0c, indexCPS2_Dhalsim, 0xb },
    { L"P1 Teleport 3", 0x76D0c, 0x76D2c, indexCPS2_Dhalsim, 0xb },
    { L"P1 Teleport 4", 0x76D2c, 0x76D4c, indexCPS2_Dhalsim, 0xb },
    //{ L"P1 Teleport 5", 0x76D4c, 0x76D6c, indexCPS2_Dhalsim, 0xb }, // This is just the all-white frame.

};
const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x728Ec, 0x7290c, indexCPS2_Dhalsim },
    { L"P2 Extras 1 Flames",     0x7290c, 0x7292c, indexCPS2_Dhalsim, 1 },
    { L"P2 Extras Sally",        0x7292c, 0x7294c, indexCPS2_Dhalsim, 2 },
    { L"P2 Teleport 1",          0x76D6c, 0x76D8c, indexCPS2_Dhalsim, 0xb },
    { L"P2 Teleport 2",          0x76D8c, 0x76DAc, indexCPS2_Dhalsim, 0xb },
    { L"P2 Teleport 3",          0x76DAc, 0x76DCc, indexCPS2_Dhalsim, 0xb },
    { L"P2 Teleport 4",          0x76DCc, 0x76DEc, indexCPS2_Dhalsim, 0xb },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72BCc, 0x72BEc, indexCPS2_Akuma },
    { L"Extra 01 Hadouken",      0x72BEc, 0x72C0c, indexCPS2_Akuma, 1 },
    { L"Extra 02",               0x72C0c, 0x72C2c },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72C2c, 0x72C4c, indexCPS2_Akuma },
    { L"Extra 01 Hadouken",      0x72C4c, 0x72C6c, indexCPS2_Akuma, 1 },
    { L"Extra 02",               0x72C6c, 0x72C8c },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x721Cc, 0x721Ec, indexCPS2_Hulk },
    { L"P1 Extras 1",             0x721Ec, 0x7220c, indexCPS2_Hulk, 1 },
    { L"P1 Extras 2",             0x7220c, 0x7222c, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",         0x7222c, 0x7224c, indexCPS2_Hulk },
    { L"P2 Extras 1",             0x7224c, 0x7226c, indexCPS2_Hulk, 1 },
    { L"P2 Extras 2 ",            0x7226c, 0x7228c, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7270c, 0x7272c, indexCPS2_Ken },
    { L"P1 Hadouken",             0x7272c, 0x7274c, indexCPS2_Ken, 1 },
    { L"P1 Shoryuken",            0x7274c, 0x7276c, indexCPS2_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",       0x7276c, 0x7278c, indexCPS2_Ken },
    { L"P2 Hadouken",           0x7278c, 0x727Ac, indexCPS2_Ken, 1 },
    { L"P2 Shoryuken",          0x727Ac, 0x727Cc, indexCPS2_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72B0c, 0x72B2c, indexCPS2_Bison },
    { L"P1 Extras 1",            0x72B2c, 0x72B4c, indexCPS2_Bison, 0x08 },
    { L"P1 Extras 2",            0x72B4c, 0x72B6c, indexCPS2_Bison, 0x09 },
    { L"P1 Extras 3",            0x7708c, 0x770Ac, indexCPS2_Bison, 0x08 },
    { L"P1 Extras 4",            0x770Ac, 0x770Cc, indexCPS2_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72B6c, 0x72B8c, indexCPS2_Bison },
    { L"P2 Extras 1",            0x72B8c, 0x72BAc, indexCPS2_Bison, 0x08 },
    { L"P2 Extras 2",            0x72BAc, 0x72BCc, indexCPS2_Bison, 0x09 },
    { L"P2 Extras 3",            0x770Cc, 0x770Ec, indexCPS2_Bison, 0x08 },
    { L"P2 Extras 4",            0x770Ec, 0x7710c, indexCPS2_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72F8c, 0x72FAc, indexCPS2_Zangief },
    { L"P1 Vodka Fire",          0x72FAc, 0x72FCc, indexCPS2_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72FEc, 0x7300c, indexCPS2_Zangief },
    { L"P2 Vodka Fire",          0x7300c, 0x7302c, indexCPS2_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED[] =
{
    { L"P1+P2 Super Armor ",     0x7304c, 0x7306c, indexCPS2_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72D4c, 0x72D6c, indexCPS2_Norimaro },
    { L"P1 Extras 1",            0x7710c, 0x7712c, indexCPS2_Norimaro, 0x02 },
    { L"P1 Extras 2",            0x7716c, 0x7718c },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72DAc, 0x72DCc, indexCPS2_Norimaro },
    { L"P2 Extras 1",            0x7718c, 0x771Ac, indexCPS2_Norimaro, 0x02 },
    { L"P2 Extras 2",            0x72DCc, 0x72DEc },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_EXTRAS[] =
{
    { L"P1 Extras 3",            0x72D6c, 0x72D8c },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7240c, 0x7242c, indexCPS2_OmegaRed },
    { L"P1 Intro 1", 0x764Ac, 0x764Cc, indexCPS2_OmegaRed },
    { L"P1 Intro 2", 0x764Cc, 0x764Ec, indexCPS2_OmegaRed },
    { L"P1 Intro 3", 0x764Ec, 0x7650c, indexCPS2_OmegaRed },
    { L"P1 Intro 4", 0x7650c, 0x7652c, indexCPS2_OmegaRed },
    { L"P1 Intro Shockwave 1", 0x7242c, 0x7244c, indexCPS2_OmegaRed, 1 },
    { L"P1 Intro Shockwave 2", 0x7244c, 0x7246c, indexCPS2_OmegaRed, 1 },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",       0x7246c, 0x7248c, indexCPS2_OmegaRed },
    { L"P2 Intro 1", 0x7652c, 0x7654c, indexCPS2_OmegaRed },
    { L"P2 Intro 2", 0x7654c, 0x7656c, indexCPS2_OmegaRed },
    { L"P2 Intro 3", 0x7656c, 0x7658c, indexCPS2_OmegaRed },
    { L"P2 Intro 4", 0x7658c, 0x765Ac, indexCPS2_OmegaRed },
    { L"P2 Intro Shockwave 1", 0x7248c, 0x724Ac, indexCPS2_OmegaRed, 1 },
    { L"P2 Intro Shockwave 2", 0x724Ac, 0x724Cc, indexCPS2_OmegaRed, 2 },
};

const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7264c, 0x7266c, indexCPS2_Ryu },
    { L"P1 Hadouken", 0x7266c, 0x7268c, indexCPS2_Ryu, 1 },
    { L"P1 Extra 2", 0x7268c, 0x726Ac },
};

const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x726Ac, 0x726Cc, indexCPS2_Ryu },
    { L"P2 Hadouken", 0x726Cc, 0x726Ec, indexCPS2_Ryu, 1 },
    { L"P2 Extra 2", 0x726Ec, 0x7270c },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x72C8c, 0x72CAc, indexCPS2_Sakura },
    { L"P1 Extras 1 Hadouken", 0x72CAc, 0x72CCc, indexCPS2_Ken, 1 },
    { L"P1 Extras 2 Friend", 0x77FCc, 0x77FEc },
    { L"P1 Extras 3 Bag", 0x77FEc, 0x7800c },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72CEc, 0x72D0c, indexCPS2_Sakura },
    { L"P2 Extras 1 Hadouken", 0x72D0c, 0x72D2c, indexCPS2_Ken, 1 },
    { L"P2 Extras 2 Friend", 0x7800c, 0x7802c },
    { L"P2 Extras 3 Bag", 0x7802c, 0x7804c },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x731Cc, 0x731Ec, indexCPS2_Charlie },
    { L"P1 Sonic Boom", 0x731Ec, 0x7320c, indexCPS2_Charlie, 1 },
    { L"P1 Flash Kick", 0x7320c, 0x7322c, indexCPS2_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x7322c, 0x7324c, indexCPS2_Charlie },
    { L"P2 Sonic Boom", 0x7324c, 0x7326c, indexCPS2_Charlie, 1 },
    { L"P2 Flash Kick", 0x7326c, 0x7328c, indexCPS2_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7234c, 0x7236c, indexCPS2_Shuma },
        { L"P1 HP", 0x7236c, 0x7238c, indexCPS2_Shuma },
        { L"P1 Mystic Stare", 0x7238c, 0x723Ac, indexCPS2_Shuma },

    { L"P1 Post HP Stance 1", 0x7728c, 0x772Ac, indexCPS2_Shuma },
    { L"P1 Post HP Stance 2", 0x772Ac, 0x772Cc, indexCPS2_Shuma },
    { L"P1 Post HP Stance 3", 0x772Cc, 0x772Ec, indexCPS2_Shuma },
    { L"P1 Post HP Stance 4", 0x772Ec, 0x7730c, indexCPS2_Shuma },
    { L"P1 Post HP Stance 5", 0x7730c, 0x7732c, indexCPS2_Shuma },

    { L"P1 Stone Drop 1", 0x7732c, 0x7734c, indexCPS2_Shuma },
    { L"P1 Stone Drop 2", 0x7734c, 0x7736c, indexCPS2_Shuma },
    { L"P1 Stone Drop 3", 0x7736c, 0x7738c, indexCPS2_Shuma },
    { L"P1 Stone Drop 4", 0x7738c, 0x773Ac, indexCPS2_Shuma },
    { L"P1 Stone Drop 5", 0x773Ac, 0x773Cc, indexCPS2_Shuma },

    // Unused blue region

    // HK grab region
    { L"P1 Life Drain 1", 0x7750c, 0x7752c, indexCPS2_Shuma },
    { L"P1 Life Drain 2", 0x7752c, 0x7754c, indexCPS2_Shuma },
    { L"P1 Life Drain 3", 0x7754c, 0x7756c, indexCPS2_Shuma },
    { L"P1 Life Drain 4", 0x7756c, 0x7758c, indexCPS2_Shuma },
    { L"P1 Life Drain 5", 0x7758c, 0x775Ac, indexCPS2_Shuma },
    { L"P1 Life Drain 6", 0x775Ac, 0x775Cc, indexCPS2_Shuma },
    { L"P1 Life Drain 7", 0x775Cc, 0x775Ec, indexCPS2_Shuma },
    { L"P1 Life Drain 8", 0x775Ec, 0x7760c, indexCPS2_Shuma },
    { L"P1 Life Drain 9", 0x7760c, 0x7762c, indexCPS2_Shuma },
    { L"P1 Life Drain 10", 0x7762c, 0x7764c, indexCPS2_Shuma },

    // HP flash
    { L"P1 HP Flash 1", 0x7764c, 0x7766c, indexCPS2_Shuma },
    { L"P1 HP Flash 2", 0x7766c, 0x7768c, indexCPS2_Shuma },
    { L"P1 HP Flash 3", 0x7768c, 0x776Ac, indexCPS2_Shuma },
    { L"P1 HP Flash 4", 0x776Ac, 0x776Cc, indexCPS2_Shuma },
    { L"P1 HP Flash 5", 0x776Cc, 0x776Ec, indexCPS2_Shuma },
    { L"P1 HP Flash 6", 0x776Ec, 0x7770c, indexCPS2_Shuma },
    { L"P1 HP Flash 7", 0x7770c, 0x7772c, indexCPS2_Shuma },

    { L"P1 Chaos Dimension 1", 0x7772c, 0x7774c, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 1", 0x7774c, 0x7776c, indexCPS2_Shuma },
    { L"P1 Chaos Dimension 2", 0x7776c, 0x7778c, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 2", 0x7778c, 0x777Ac, indexCPS2_Shuma },
    { L"P1 Chaos Dimension 3", 0x777Ac, 0x777Cc, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 3", 0x777Cc, 0x777Ec, indexCPS2_Shuma },
    { L"P1 Chaos Dimension 4", 0x777Ec, 0x7780c, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 4", 0x7780c, 0x7782c, indexCPS2_Shuma },
    { L"P1 Chaos Dimension 5", 0x7782c, 0x7784c, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 5", 0x7784c, 0x7786c, indexCPS2_Shuma },

    { L"P1 Mystic Smash", 0x7786c, 0x7788c, indexCPS2_Shuma },

    // { L"P1 Extra 11", 0x79C0c, 0x79C2c, indexCPS2_Shuma },//  this is shuma but doesn't fit.  excising until somebody tells me why they want it
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK[] =
{

    { L"P2 Color (Kick)", 0x723Ac, 0x723Cc, indexCPS2_Shuma },
    { L"P2 HP", 0x723Cc, 0x723Ec, indexCPS2_Shuma },
    { L"P2 Mystic Stare", 0x723Ec, 0x7240c, indexCPS2_Shuma },

    { L"P2 Post HP Stance 1", 0x7788c, 0x778Ac, indexCPS2_Shuma },
    { L"P2 Post HP Stance 2", 0x778Ac, 0x778Cc, indexCPS2_Shuma },
    { L"P2 Post HP Stance 3", 0x778Cc, 0x778Ec, indexCPS2_Shuma },
    { L"P2 Post HP Stance 4", 0x778Ec, 0x7790c, indexCPS2_Shuma },
    { L"P2 Post HP Stance 5", 0x7790c, 0x7792c, indexCPS2_Shuma },

    { L"P2 Stone Drop 1", 0x7792c, 0x7794c, indexCPS2_Shuma },
    { L"P2 Stone Drop 2", 0x7794c, 0x7796c, indexCPS2_Shuma },
    { L"P2 Stone Drop 3", 0x7796c, 0x7798c, indexCPS2_Shuma },
    { L"P2 Stone Drop 4", 0x7798c, 0x779Ac, indexCPS2_Shuma },
    { L"P2 Stone Drop 5", 0x779Ac, 0x779Cc, indexCPS2_Shuma },

    // unused 'blue range': 799ce-77b0e

    // HK grab region
    { L"P2 Life Drain 1", 0x77B0c, 0x77B2c, indexCPS2_Shuma },
    { L"P2 Life Drain 2", 0x77B2c, 0x77B4c, indexCPS2_Shuma },
    { L"P2 Life Drain 3", 0x77B4c, 0x77B6c, indexCPS2_Shuma },
    { L"P2 Life Drain 4", 0x77B6c, 0x77B8c, indexCPS2_Shuma },
    { L"P2 Life Drain 5", 0x77B8c, 0x77BAc, indexCPS2_Shuma },
    { L"P2 Life Drain 6", 0x77BAc, 0x77BCc, indexCPS2_Shuma },
    { L"P2 Life Drain 7", 0x77BCc, 0x77BEc, indexCPS2_Shuma },
    { L"P2 Life Drain 8", 0x77BEc, 0x77C0c, indexCPS2_Shuma },
    { L"P2 Life Drain 9", 0x77C0c, 0x77C2c, indexCPS2_Shuma },
    { L"P2 Life Drain 10", 0x77C2c, 0x77C4c, indexCPS2_Shuma },

    // HP flash
    { L"P2 HP Flash 1", 0x77C4c, 0x77C6c, indexCPS2_Shuma },
    { L"P2 HP Flash 2", 0x77C6c, 0x77C8c, indexCPS2_Shuma },
    { L"P2 HP Flash 3", 0x77C8c, 0x77CAc, indexCPS2_Shuma },
    { L"P2 HP Flash 4", 0x77CAc, 0x77CCc, indexCPS2_Shuma },
    { L"P2 HP Flash 5", 0x77CCc, 0x77CEc, indexCPS2_Shuma },
    { L"P2 HP Flash 6", 0x77CEc, 0x77D0c, indexCPS2_Shuma },
    { L"P2 HP Flash 7", 0x77D0c, 0x77D2c, indexCPS2_Shuma },

    { L"P2 Chaos Dimension 1", 0x77D2c, 0x77D4c, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 1", 0x77D4c, 0x77D6c, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 2", 0x77D6c, 0x77D8c, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 2", 0x77D8c, 0x77DAc, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 3", 0x77DAc, 0x77DCc, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 3", 0x77DCc, 0x77DEc, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 4", 0x77DEc, 0x77E0c, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 4", 0x77E0c, 0x77E2c, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 5", 0x77E2c, 0x77E4c, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 5", 0x77E4c, 0x77E6c, indexCPS2_Shuma },

    { L"P2 Mystic Smash", 0x77E6c, 0x77E8c, indexCPS2_Shuma },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{ // 2 is web
    { L"P1 Color (Punch)", 0x724Cc, 0x724Ec, indexCPS2_Spidey },
    { L"P1 Extras 1", 0x724Ec, 0x7250c, indexCPS2_Spidey, 0x2 },
    { L"P1 Spotlight", 0x7250c, 0x7252c, indexCPS2_Spidey, 13 },
    { L"P1 Intro 1", 0x765Cc, 0x765Ec, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 2", 0x765Ec, 0x7660c, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 3", 0x7660c, 0x7662c, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 4", 0x7662c, 0x7664c, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 5", 0x7664c, 0x7666c, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 6", 0x7666c, 0x7668c, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 7", 0x7668c, 0x766Ac, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 8", 0x766Ac, 0x766Cc, indexCPS2_Spidey, 0x0B },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x7252c, 0x7254c, indexCPS2_Spidey },
    { L"P2 Extras 1", 0x7254c, 0x7256c, indexCPS2_Spidey, 0x2 },
    { L"P2 Spotlight", 0x7256c, 0x7258c, indexCPS2_Spidey, 13 },
    { L"P2 Intro 1", 0x767Cc, 0x767Ec, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 2", 0x767Ec, 0x7680c, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 3", 0x7680c, 0x7682c, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 4", 0x7682c, 0x7684c, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 5", 0x7684c, 0x7686c, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 6", 0x7686c, 0x7688c, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 7", 0x7688c, 0x768Ac, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 8", 0x768Ac, 0x768Cc, indexCPS2_Spidey, 0x0B },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_SHARED[] =
{
    { L"P1 Extras 2: Spotlight", 0x766Cc, 0x766Ec, indexCPS2_Spidey, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7328c, 0x732Ac, indexCPS2_CapAm, 0, &pairNext },
    { L"P1 Shield", 0x732Ac, 0x732Cc, indexCPS2_CapAm, 1 },
    { L"P1 Charging Star", 0x732Cc, 0x732Ec, indexCPS2_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x732Ec, 0x7330c, indexCPS2_CapAm, 0, &pairNext },
    { L"P2 Shield", 0x7330c, 0x7332c, indexCPS2_CapAm, 1 },
    { L"P2 Charging Star", 0x7332c, 0x7334c, indexCPS2_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7228c, 0x722Ac, indexCPS2_Wolverine, 0, &pairNext },
    { L"P1 Claws", 0x722Ac, 0x722Cc, indexCPS2_Wolverine, 1 },
    { L"P1 Extras 1", 0x722Cc, 0x722Ec, indexCPS2_Wolverine, 2 },
    { L"P1 Extras 2 (Fatal Claw)", 0x7804c, 0x7806c },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x722Ec, 0x7230c, indexCPS2_Wolverine, 0, &pairNext },
    { L"P2 Claws", 0x7230c, 0x7232c, indexCPS2_Wolverine, 1 },
    { L"P2 Extras 1", 0x7232c, 0x7234c, indexCPS2_Wolverine, 2 },
    { L"P2 Extras 2 (Fatal Claw)", 0x7806c, 0x7808c },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",   0x7294c, 0x7296c, indexCPS2_Zangief },
    { L"P1 Banishing Fist",  0x7296c, 0x7298c, indexCPS2_Zangief, 1 },
    { L"P1 Extra 2",         0x7298c, 0x729Ac },
    { L"P1 FAB 1",           0x72A4c, 0x72A6c, indexCPS2_Zangief },
    { L"P1 FAB 2",           0x72A6c, 0x72A8c, indexCPS2_Zangief },
    { L"P1 FAB 3",           0x72A8c, 0x72AAc, indexCPS2_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x729Ac, 0x729Cc, indexCPS2_Zangief },
    { L"P2 Banishing Fist",      0x729Cc, 0x729Ec, indexCPS2_Zangief, 1 },
    { L"P2 Extra 2",             0x729Ec, 0x72A0c },
    { L"P2 FAB 1",               0x72AAc, 0x72ACc, indexCPS2_Zangief },
    { L"P2 FAB 2",               0x72ACc, 0x72AEc, indexCPS2_Zangief },
    { L"P2 FAB 3",               0x72AEc, 0x72B0c, indexCPS2_Zangief },
};

#ifdef UNKNOWN_STATUS_PALETES
    // maybe cyber akuma? unclear
    { L"Burning Light",  0x73acc + (0 * 0x20), 0x73aec + (0 * 0x20), indexCPS2_Akuma },
    { L"Burning Dark",   0x73acc + (1 * 0x20), 0x73aec + (1 * 0x20), indexCPS2_Akuma },
    { L"Shocked Light",  0x73acc + (2 * 0x20), 0x73aec + (2 * 0x20), indexCPS2_Akuma },
    { L"Shocked Dark",   0x73acc + (3 * 0x20), 0x73aec + (3 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Light",0x73acc + (4 * 0x20), 0x73aec + (4 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Dark", 0x73acc + (5 * 0x20), 0x73aec + (5 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 1",      0x73acc + (6 * 0x20), 0x73aec + (6 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 2",      0x73acc + (7 * 0x20), 0x73aec + (7 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 3",      0x73acc + (8 * 0x20), 0x73aec + (8 * 0x20), indexCPS2_Akuma },
#endif

const sGame_PaletteDataset MSHVSF_A_SHADOW_STATUS[] =
{
    { L"Burning Light",  0x73acc + (24 * 0x20), 0x73aec + (24 * 0x20), indexCPS2_Charlie },
    { L"Burning Dark",   0x73acc + (25 * 0x20), 0x73aec + (25 * 0x20), indexCPS2_Charlie },
    { L"Shocked Light",  0x73acc + (26 * 0x20), 0x73aec + (26 * 0x20), indexCPS2_Charlie },
    { L"Shocked Dark",   0x73acc + (27 * 0x20), 0x73aec + (27 * 0x20), indexCPS2_Charlie },
    { L"Dark Burn Light",0x73acc + (28 * 0x20), 0x73aec + (28 * 0x20), indexCPS2_Charlie },
    { L"Dark Burn Dark", 0x73acc + (29 * 0x20), 0x73aec + (29 * 0x20), indexCPS2_Charlie },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_STATUS[] =
{
    { L"Burning Light",  0x73acc + (9 * 0x20), 0x73aec + (9 * 0x20), indexCPS2_Cyclops },
    { L"Burning Dark",   0x73acc + (10 * 0x20), 0x73aec + (10 * 0x20), indexCPS2_Cyclops },
    { L"Shocked Light",  0x73acc + (11 * 0x20), 0x73aec + (11 * 0x20), indexCPS2_Cyclops },
    { L"Shocked Dark",   0x73acc + (12 * 0x20), 0x73aec + (12 * 0x20), indexCPS2_Cyclops },
    { L"Dark Burn Light",0x73acc + (13 * 0x20), 0x73aec + (13 * 0x20), indexCPS2_Cyclops },
    { L"Dark Burn Dark", 0x73acc + (14 * 0x20), 0x73aec + (14 * 0x20), indexCPS2_Cyclops },
    { L"Kinetic 1",      0x73acc + (15 * 0x20), 0x73aec + (15 * 0x20), indexCPS2_Cyclops },
    { L"Kinetic 2",      0x73acc + (16 * 0x20), 0x73aec + (16 * 0x20), indexCPS2_Cyclops },
    { L"Kinetic 3",      0x73acc + (17 * 0x20), 0x73aec + (17 * 0x20), indexCPS2_Cyclops },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAINAMERICA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (18 * 0x20), 0x73aec + (18 * 0x20), indexCPS2_CapAm },
    { L"Burning Dark",   0x73acc + (19 * 0x20), 0x73aec + (19 * 0x20), indexCPS2_CapAm },
    { L"Shocked Light",  0x73acc + (20 * 0x20), 0x73aec + (20 * 0x20), indexCPS2_CapAm },
    { L"Shocked Dark",   0x73acc + (21 * 0x20), 0x73aec + (21 * 0x20), indexCPS2_CapAm },
    { L"Dark Burn Light",0x73acc + (22 * 0x20), 0x73aec + (22 * 0x20), indexCPS2_CapAm },
    { L"Dark Burn Dark", 0x73acc + (23 * 0x20), 0x73aec + (23 * 0x20), indexCPS2_CapAm },
};

const sGame_PaletteDataset MSHVSF_A_HULK_STATUS[] =
{
    { L"Burning Light",  0x73acc + (30 * 0x20), 0x73aec + (30 * 0x20), indexCPS2_Hulk },
    { L"Burning Dark",   0x73acc + (31 * 0x20), 0x73aec + (31 * 0x20), indexCPS2_Hulk },
    { L"Shocked Light",  0x73acc + (32 * 0x20), 0x73aec + (32 * 0x20), indexCPS2_Hulk },
    { L"Shocked Dark",   0x73acc + (33 * 0x20), 0x73aec + (33 * 0x20), indexCPS2_Hulk },
    { L"Dark Burn Light",0x73acc + (34 * 0x20), 0x73aec + (34 * 0x20), indexCPS2_Hulk },
    { L"Dark Burn Dark", 0x73acc + (35 * 0x20), 0x73aec + (35 * 0x20), indexCPS2_Hulk },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_STATUS[] =
{
    { L"Burning Light",  0x73acc + (36 * 0x20), 0x73aec + (36 * 0x20), indexCPS2_Wolverine },
    { L"Burning Dark",   0x73acc + (37 * 0x20), 0x73aec + (37 * 0x20), indexCPS2_Wolverine },
    { L"Shocked Light",  0x73acc + (38 * 0x20), 0x73aec + (38 * 0x20), indexCPS2_Wolverine },
    { L"Shocked Dark",   0x73acc + (39 * 0x20), 0x73aec + (39 * 0x20), indexCPS2_Wolverine },
    { L"Dark Burn Light",0x73acc + (40 * 0x20), 0x73aec + (40 * 0x20), indexCPS2_Wolverine },
    { L"Dark Burn Dark", 0x73acc + (41 * 0x20), 0x73aec + (41 * 0x20), indexCPS2_Wolverine },
};

const sGame_PaletteDataset MSHVSF_A_SHUMA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (42 * 0x20), 0x73aec + (42 * 0x20), indexCPS2_Shuma },
    { L"Burning Dark",   0x73acc + (43 * 0x20), 0x73aec + (43 * 0x20), indexCPS2_Shuma },
    { L"Shocked Light",  0x73acc + (44 * 0x20), 0x73aec + (44 * 0x20), indexCPS2_Shuma },
    { L"Shocked Dark",   0x73acc + (45 * 0x20), 0x73aec + (45 * 0x20), indexCPS2_Shuma },
    { L"Dark Burn Light",0x73acc + (46 * 0x20), 0x73aec + (46 * 0x20), indexCPS2_Shuma },
    { L"Dark Burn Dark", 0x73acc + (47 * 0x20), 0x73aec + (47 * 0x20), indexCPS2_Shuma },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_STATUS[] =
{
    { L"Burning Light",  0x73acc + (48 * 0x20), 0x73aec + (48 * 0x20), indexCPS2_OmegaRed },
    { L"Burning Dark",   0x73acc + (49 * 0x20), 0x73aec + (49 * 0x20), indexCPS2_OmegaRed },
    { L"Shocked Light",  0x73acc + (50 * 0x20), 0x73aec + (50 * 0x20), indexCPS2_OmegaRed },
    { L"Shocked Dark",   0x73acc + (51 * 0x20), 0x73aec + (51 * 0x20), indexCPS2_OmegaRed },
    { L"Dark Burn Light",0x73acc + (52 * 0x20), 0x73aec + (52 * 0x20), indexCPS2_OmegaRed },
    { L"Dark Burn Dark", 0x73acc + (53 * 0x20), 0x73aec + (53 * 0x20), indexCPS2_OmegaRed },
};

const sGame_PaletteDataset MSHVSF_A_SPIDEY_STATUS[] =
{
    { L"Burning Light",  0x73acc + (54 * 0x20), 0x73aec + (54 * 0x20), indexCPS2_Spidey },
    { L"Burning Dark",   0x73acc + (55 * 0x20), 0x73aec + (55 * 0x20), indexCPS2_Spidey },
    { L"Shocked Light",  0x73acc + (56 * 0x20), 0x73aec + (56 * 0x20), indexCPS2_Spidey },
    { L"Shocked Dark",   0x73acc + (57 * 0x20), 0x73aec + (57 * 0x20), indexCPS2_Spidey },
    { L"Dark Burn Light",0x73acc + (58 * 0x20), 0x73aec + (58 * 0x20), indexCPS2_Spidey },
    { L"Dark Burn Dark", 0x73acc + (59 * 0x20), 0x73aec + (59 * 0x20), indexCPS2_Spidey },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_STATUS[] =
{
    { L"Burning Light",  0x73acc + (60 * 0x20), 0x73aec + (60 * 0x20), indexCPS2_Blackheart },
    { L"Burning Dark",   0x73acc + (61 * 0x20), 0x73aec + (61 * 0x20), indexCPS2_Blackheart },
    { L"Shocked Light",  0x73acc + (62 * 0x20), 0x73aec + (62 * 0x20), indexCPS2_Blackheart },
    { L"Shocked Dark",   0x73acc + (63 * 0x20), 0x73aec + (63 * 0x20), indexCPS2_Blackheart },
    { L"Dark Burn Light",0x73acc + (64 * 0x20), 0x73aec + (64 * 0x20), indexCPS2_Blackheart },
    { L"Dark Burn Dark", 0x73acc + (65 * 0x20), 0x73aec + (65 * 0x20), indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_RYU_STATUS[] =
{
    { L"Burning Light",  0x73acc + (66 * 0x20), 0x73aec + (66 * 0x20), indexCPS2_Ryu },
    { L"Burning Dark",   0x73acc + (67 * 0x20), 0x73aec + (67 * 0x20), indexCPS2_Ryu },
    { L"Shocked Light",  0x73acc + (68 * 0x20), 0x73aec + (68 * 0x20), indexCPS2_Ryu },
    { L"Shocked Dark",   0x73acc + (69 * 0x20), 0x73aec + (69 * 0x20), indexCPS2_Ryu },
    { L"Dark Burn Light",0x73acc + (70 * 0x20), 0x73aec + (70 * 0x20), indexCPS2_Ryu },
    { L"Dark Burn Dark", 0x73acc + (71 * 0x20), 0x73aec + (71 * 0x20), indexCPS2_Ryu },
};

const sGame_PaletteDataset MSHVSF_A_KEN_STATUS[] =
{
    { L"Burning Light",  0x73acc + (72 * 0x20), 0x73aec + (72 * 0x20), indexCPS2_Ken },
    { L"Burning Dark",   0x73acc + (73 * 0x20), 0x73aec + (73 * 0x20), indexCPS2_Ken },
    { L"Shocked Light",  0x73acc + (74 * 0x20), 0x73aec + (74 * 0x20), indexCPS2_Ken },
    { L"Shocked Dark",   0x73acc + (75 * 0x20), 0x73aec + (75 * 0x20), indexCPS2_Ken },
    { L"Dark Burn Light",0x73acc + (76 * 0x20), 0x73aec + (76 * 0x20), indexCPS2_Ken },
    { L"Dark Burn Dark", 0x73acc + (77 * 0x20), 0x73aec + (77 * 0x20), indexCPS2_Ken },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_STATUS[] =
{
    { L"Burning Light",  0x73acc + (78 * 0x20), 0x73aec + (78 * 0x20), indexCPS2_ChunLi },
    { L"Burning Dark",   0x73acc + (79 * 0x20), 0x73aec + (79 * 0x20), indexCPS2_ChunLi },
    { L"Shocked Light",  0x73acc + (80 * 0x20), 0x73aec + (80 * 0x20), indexCPS2_ChunLi },
    { L"Shocked Dark",   0x73acc + (81 * 0x20), 0x73aec + (81 * 0x20), indexCPS2_ChunLi },
    { L"Dark Burn Light",0x73acc + (82 * 0x20), 0x73aec + (82 * 0x20), indexCPS2_ChunLi },
    { L"Dark Burn Dark", 0x73acc + (83 * 0x20), 0x73aec + (83 * 0x20), indexCPS2_ChunLi },
    { L"Kinetic 1",      0x73acc + (84 * 0x20), 0x73aec + (84 * 0x20), indexCPS2_ChunLi },
    { L"Kinetic 2",      0x73acc + (85 * 0x20), 0x73aec + (85 * 0x20), indexCPS2_ChunLi },
    { L"Kinetic 3",      0x73acc + (86 * 0x20), 0x73aec + (86 * 0x20), indexCPS2_ChunLi },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_STATUS[] =
{
    { L"Burning Light",  0x73acc + (87 * 0x20), 0x73aec + (87 * 0x20), indexCPS2_Dhalsim },
    { L"Burning Dark",   0x73acc + (88 * 0x20), 0x73aec + (88 * 0x20), indexCPS2_Dhalsim },
    { L"Shocked Light",  0x73acc + (89 * 0x20), 0x73aec + (89 * 0x20), indexCPS2_Dhalsim },
    { L"Shocked Dark",   0x73acc + (90 * 0x20), 0x73aec + (90 * 0x20), indexCPS2_Dhalsim },
    { L"Dark Burn Light",0x73acc + (91 * 0x20), 0x73aec + (91 * 0x20), indexCPS2_Dhalsim },
    { L"Dark Burn Dark", 0x73acc + (92 * 0x20), 0x73aec + (92 * 0x20), indexCPS2_Dhalsim },
    { L"Kinetic 1",      0x73acc + (93 * 0x20), 0x73aec + (93 * 0x20), indexCPS2_Dhalsim },
    { L"Kinetic 2",      0x73acc + (94 * 0x20), 0x73aec + (94 * 0x20), indexCPS2_Dhalsim },
    { L"Kinetic 3",      0x73acc + (95 * 0x20), 0x73aec + (95 * 0x20), indexCPS2_Dhalsim },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_STATUS[] =
{
    { L"Burning Light",  0x73acc + (96 * 0x20), 0x73aec + (96 * 0x20), indexCPS2_Zangief },
    { L"Burning Dark",   0x73acc + (97 * 0x20), 0x73aec + (97 * 0x20), indexCPS2_Zangief },
    { L"Shocked Light",  0x73acc + (98 * 0x20), 0x73aec + (98 * 0x20), indexCPS2_Zangief },
    { L"Shocked Dark",   0x73acc + (99 * 0x20), 0x73aec + (99 * 0x20), indexCPS2_Zangief },
    { L"Dark Burn Light",0x73acc + (100 * 0x20), 0x73aec + (100 * 0x20), indexCPS2_Zangief },
    { L"Dark Burn Dark", 0x73acc + (101 * 0x20), 0x73aec + (101 * 0x20), indexCPS2_Zangief },
    { L"Kinetic 1",      0x73acc + (102 * 0x20), 0x73aec + (102 * 0x20), indexCPS2_Zangief },
    { L"Kinetic 2",      0x73acc + (103 * 0x20), 0x73aec + (103 * 0x20), indexCPS2_Zangief },
    { L"Kinetic 3",      0x73acc + (104 * 0x20), 0x73aec + (104 * 0x20), indexCPS2_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_BISON_STATUS[] =
{
    { L"Burning Light",  0x73acc + (105 * 0x20), 0x73aec + (105 * 0x20), indexCPS2_Bison },
    { L"Burning Dark",   0x73acc + (106 * 0x20), 0x73aec + (106 * 0x20), indexCPS2_Bison },
    { L"Shocked Light",  0x73acc + (107 * 0x20), 0x73aec + (107 * 0x20), indexCPS2_Bison },
    { L"Burning Light",  0x73acc + (108 * 0x20), 0x73aec + (108 * 0x20), indexCPS2_Bison },
    { L"Burning Dark",   0x73acc + (109 * 0x20), 0x73aec + (109 * 0x20), indexCPS2_Bison },
    { L"Dark Burn Dark", 0x73acc + (110 * 0x20), 0x73aec + (110 * 0x20), indexCPS2_Bison },
    { L"Kinetic 1",      0x73acc + (111 * 0x20), 0x73aec + (111 * 0x20), indexCPS2_Bison },
    { L"Kinetic 2",      0x73acc + (112 * 0x20), 0x73aec + (112 * 0x20), indexCPS2_Bison },
    { L"Kinetic 3",      0x73acc + (113 * 0x20), 0x73aec + (113 * 0x20), indexCPS2_Bison },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (114 * 0x20), 0x73aec + (114 * 0x20), indexCPS2_Akuma },
    { L"Burning Dark",   0x73acc + (115 * 0x20), 0x73aec + (115 * 0x20), indexCPS2_Akuma },
    { L"Shocked Light",  0x73acc + (116 * 0x20), 0x73aec + (116 * 0x20), indexCPS2_Akuma },
    { L"Shocked Dark",   0x73acc + (117 * 0x20), 0x73aec + (117 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Light",0x73acc + (118 * 0x20), 0x73aec + (118 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Dark", 0x73acc + (119 * 0x20), 0x73aec + (119 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 1",      0x73acc + (120 * 0x20), 0x73aec + (120 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 2",      0x73acc + (121 * 0x20), 0x73aec + (121 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 3",      0x73acc + (122 * 0x20), 0x73aec + (122 * 0x20), indexCPS2_Akuma },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (123 * 0x20), 0x73aec + (123 * 0x20), indexCPS2_Sakura },
    { L"Burning Dark",   0x73acc + (124 * 0x20), 0x73aec + (124 * 0x20), indexCPS2_Sakura },
    { L"Shocked Light",  0x73acc + (125 * 0x20), 0x73aec + (125 * 0x20), indexCPS2_Sakura },
    { L"Shocked Dark",   0x73acc + (126 * 0x20), 0x73aec + (126 * 0x20), indexCPS2_Sakura },
    { L"Dark Burn Light",0x73acc + (127 * 0x20), 0x73aec + (127 * 0x20), indexCPS2_Sakura },
    { L"Dark Burn Dark", 0x73acc + (128 * 0x20), 0x73aec + (128 * 0x20), indexCPS2_Sakura },
    { L"Kinetic 1",      0x73acc + (129 * 0x20), 0x73aec + (129 * 0x20), indexCPS2_Sakura },
    { L"Kinetic 2",      0x73acc + (130 * 0x20), 0x73aec + (130 * 0x20), indexCPS2_Sakura },
    { L"Kinetic 3",      0x73acc + (131 * 0x20), 0x73aec + (131 * 0x20), indexCPS2_Sakura },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_STATUS[] =
{
    { L"Burning Light",  0x73acc + (132 * 0x20), 0x73aec + (132 * 0x20), indexCPS2_Norimaro },
    { L"Burning Dark",   0x73acc + (133 * 0x20), 0x73aec + (133 * 0x20), indexCPS2_Norimaro },
    { L"Shocked Light",  0x73acc + (134 * 0x20), 0x73aec + (134 * 0x20), indexCPS2_Norimaro },
    { L"Shocked Dark",   0x73acc + (135 * 0x20), 0x73aec + (135 * 0x20), indexCPS2_Norimaro },
    { L"Dark Burn Light",0x73acc + (136 * 0x20), 0x73aec + (136 * 0x20), indexCPS2_Norimaro },
    { L"Dark Burn Dark", 0x73acc + (137 * 0x20), 0x73aec + (137 * 0x20), indexCPS2_Norimaro },
};

const sGame_PaletteDataset MSHVSF_A_CSI_PALETTES[] =
{
    { L"Zangief CSI", 0x7990c, 0x7992c, indexCPS2_Zangief, 0x30 },
    { L"M. Bison CSI", 0x7992c, 0x7994c, indexCPS2_Bison, 0x30 },
    { L"Dhalsim CSI", 0x798Ec, 0x7990c, indexCPS2_Dhalsim, 0x30 },
    { L"Sakura CSI", 0x7996c, 0x7998c, indexCPS2_Sakura, 0x30 },
    { L"Akuma CSI", 0x7994c, 0x7996c, indexCPS2_Akuma, 0x30 },
    { L"Chun-Li CSI", 0x798Cc, 0x798Ec, indexCPS2_ChunLi, 0x30 },
    { L"Cyclops CSI", 0x7978c, 0x797Ac, indexCPS2_Cyclops, 0x30 },
    { L"Spider-Man CSI", 0x7984c, 0x7986c, indexCPS2_Spidey, 0x30 },
    { L"Captain America CSI", 0x797Ac, 0x797Cc, indexCPS2_CapAm, 0x30 },
    { L"Ken CSI", 0x798Ac, 0x798Cc, indexCPS2_Ken, 0x30 },
    { L"Ryu CSI", 0x7988c, 0x798Ac, indexCPS2_Ryu, 0x30 },
    { L"Dan CSI", 0x799Ac, 0x799Cc, indexCPS2_Dan, 0x30 },
    { L"Shuma-Gorath CSI", 0x7980c, 0x7982c, indexCPS2_Shuma, 0x30 },
    { L"Wolverine CSI", 0x797Ec, 0x7980c, indexCPS2_Wolverine, 0x30 },
    { L"Hulk CSI", 0x797Cc, 0x797Ec, indexCPS2_Hulk, 0x30 },
    { L"Blackheart CSI", 0x7986c, 0x7988c, indexCPS2_Blackheart, 0x30 },
    { L"Norimaro CSI", 0x7998c, 0x799Ac, indexCPS2_Norimaro, 0x30 },
    { L"Omega Red CSI", 0x7982c, 0x7984c, indexCPS2_OmegaRed, 0x30 },
};

const sGame_PaletteDataset MSHVSF_A_SSP_PALETTES[] =
{
    // P1 to P2 SSP is diff 0x10E0
    { L"A. Spider-Man P1 SSP", 0x7DA4c, 0x7DA8c, indexCPS2_Spidey, 0x31 },
    { L"A. Spider-Man P2 SSP", 0x7EB2c, 0x7EB6c, indexCPS2_Spidey, 0x31 },
    { L"Akuma P1 SSP", 0x7D40c, 0x7D48c, indexCPS2_Akuma, 0x31 },
    { L"Akuma P2 SSP", 0x7E4Ec, 0x7E56c, indexCPS2_Akuma, 0x31 },
    { L"Blackheart P1 SSP", 0x7CFAc, 0x7D02c, indexCPS2_Blackheart, 0x31 },
    { L"Blackheart P2 SSP", 0x7E08c, 0x7E10c, indexCPS2_Blackheart, 0x31 },
    { L"Captain America P1 SSP", 0x7CBEc, 0x7CC8c, indexCPS2_CapAm, 0x31 },
    { L"Captain America P2 SSP", 0x7DCCc, 0x7DD6c, indexCPS2_CapAm, 0x31 },
    { L"Chun-Li P1 SSP", 0x7D18c, 0x7D20c, indexCPS2_ChunLi, 0x31 },
    { L"Chun-Li P2 SSP", 0x7E26c, 0x7E2Ec, indexCPS2_ChunLi, 0x31 },
    { L"Cyber Akuma P1 SSP", 0x7D68c, 0x7D70c, indexCPS2_CyberAkuma, 0x31 },
    { L"Cyber Akuma P2 SSP", 0x7E76c, 0x7E7Ec, indexCPS2_CyberAkuma, 0x31 },
    { L"Cyclops P1 SSP", 0x7CB4c, 0x7CBEc, indexCPS2_Cyclops, 0x31 },
    { L"Cyclops P2 SSP", 0x7DC2c, 0x7DCCc, indexCPS2_Cyclops, 0x31 },
    { L"Dan P1 SSP", 0x7D5Ec, 0x7D66c, indexCPS2_Dan, 0x31 },
    { L"Dan P2 SSP", 0x7E6Cc, 0x7E74c, indexCPS2_Dan, 0x31 },
    { L"Dark Sakura P1 SSP", 0x7D7Cc, 0x7D84c, indexCPS2_Sakura, 0x31 },
    { L"Dark Sakura P2 SSP", 0x7E8Ac, 0x7E92c, indexCPS2_Sakura, 0x31 },
    { L"Dhalsim P1 SSP", 0x7D22c, 0x7D2Ac, indexCPS2_Dhalsim, 0x31 },
    { L"Dhalsim P2 SSP", 0x7E30c, 0x7E38c, indexCPS2_Dhalsim, 0x31 },
    { L"Hulk P1 SSP", 0x7CC8c, 0x7CCEc, indexCPS2_Hulk, 0x31 },
    { L"Hulk P2 SSP", 0x7DD6c, 0x7DDCc, indexCPS2_Hulk, 0x31 },
    { L"Ken P1 SSP", 0x7D0Ec, 0x7D16c, indexCPS2_Ken, 0x31 },
    { L"Ken P2 SSP", 0x7E1Cc, 0x7E24c, indexCPS2_Ken, 0x31 },
    { L"M. Bison P1 SSP", 0x7D36c, 0x7D3Ec, indexCPS2_Bison, 0x31 },
    { L"M. Bison P2 SSP", 0x7E44c, 0x7E4Cc, indexCPS2_Bison, 0x31 },
    { L"Mech Zangief P1 SSP", 0x7D72c, 0x7D78c, indexCPS2_Zangief, 0x31 },
    { L"Mech Zangief P2 SSP", 0x7E80c, 0x7E86c, indexCPS2_Zangief, 0x31 },
    { L"Mephisto P1 SSP", 0x7D9Ac, 0x7DA2c, indexCPS2_Blackheart, 0x31 },
    { L"Mephisto P2 SSP", 0x7EA8c, 0x7EB0c, indexCPS2_Blackheart, 0x31 },
    { L"Norimaro P1 SSP", 0x7D54c, 0x7D5Ec, indexCPS2_Norimaro, 0x31 },
    { L"Norimaro P2 SSP", 0x7E62c, 0x7E6Cc, indexCPS2_Norimaro, 0x31 },
    { L"Omega Red P1 SSP", 0x7CE6c, 0x7CEEc, indexCPS2_OmegaRed, 0x31 },
    { L"Omega Red P2 SSP", 0x7DF4c, 0x7DFCc, indexCPS2_OmegaRed, 0x31 },
    { L"Ryu P1 SSP", 0x7D04c, 0x7D0Cc, indexCPS2_Ryu, 0x31 },
    { L"Ryu P2 SSP", 0x7E12c, 0x7E1Ac, indexCPS2_Ryu, 0x31 },
    { L"Sakura P1 SSP", 0x7D4Ac, 0x7D52c, indexCPS2_Sakura, 0x31 },
    { L"Sakura P2 SSP", 0x7E58c, 0x7E60c, indexCPS2_Sakura, 0x31 },
    { L"Shadow P1 SSP", 0x7D86c, 0x7D90c, indexCPS2_Charlie, 0x31 },
    { L"Shadow P2 SSP", 0x7E94c, 0x7E9Ec, indexCPS2_Charlie, 0x31 },
    { L"Shuma-Gorath P1 SSP", 0x7CDCc, 0x7CE2c, indexCPS2_Shuma, 0x31 },
    { L"Shuma-Gorath P2 SSP", 0x7DEAc, 0x7DF0c, indexCPS2_Shuma, 0x31 },
    { L"Spider-Man P1 SSP", 0x7CF0c, 0x7CF4c, indexCPS2_Spidey, 0x31 },
    { L"Spider-Man P2 SSP", 0x7DFEc, 0x7E02c, indexCPS2_Spidey, 0x31 },
    { L"US Agent P1 SSP", 0x7D90c, 0x7D9Ac, indexCPS2_CapAm, 0x31 },
    { L"US Agent P2 SSP", 0x7E9Ec, 0x7EA8c, indexCPS2_CapAm, 0x31 },
    { L"Wolverine P1 SSP", 0x7CD2c, 0x7CDAc, indexCPS2_Wolverine, 0x31 },
    { L"Wolverine P2 SSP", 0x7DE0c, 0x7DE8c, indexCPS2_Wolverine, 0x31 },
    { L"Zangief P1 SSP", 0x7D2Cc, 0x7D32c, indexCPS2_Zangief, 0x31 },
    { L"Zangief P2 SSP", 0x7E3Ac, 0x7E40c, indexCPS2_Zangief, 0x31 },
    { L"Apocalypse P1 SSP", 0x7CAAc, 0x7CB0c, 0x4F, 0x31 },
    { L"Apocalypse P2 SSP", 0x7DB8c, 0x7DBEc, 0x4F, 0x31 },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES[] =
{
    // P1 to P2 VSPs are also a difference of 0x10E0
    { L"A. Spider-Man P1 VSP", 0x7FD4c, 0x7FD8c, indexCPS2_Spidey, indexMSHVSF_VSP },
    { L"Akuma P1 VSP", 0x7F70c, 0x7F78c, indexCPS2_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P1 VSP", 0x7F2Ac, 0x7F2Ec, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P1 VSP", 0x7EEEc, 0x7EF8c, indexCPS2_CapAm, indexMSHVSF_VSP },
    { L"Captain America P2 VSP Part 1", 0x7FFCc, 0x80000 },
    { L"Chun-Li P1 VSP", 0x7F48c, 0x7F4Ec, indexCPS2_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P1 VSP", 0x7F98c, 0x7FA2c, indexCPS2_CyberAkuma, indexMSHVSF_VSP },
    { L"Cyclops P1 VSP", 0x7EE4c, 0x7EEEc, indexCPS2_Cyclops, indexMSHVSF_VSP },
    { L"Cyclops P2 VSP", 0x7FF2c, 0x7FFCc, indexCPS2_Cyclops, indexMSHVSF_VSP },
    { L"Dan P1 VSP", 0x7F8Ec, 0x7F98c, indexCPS2_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P1 VSP", 0x7FACc, 0x7FB6c, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P1 VSP", 0x7F52c, 0x7F5Cc, indexCPS2_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P1 VSP", 0x7EF8c, 0x7EFEc, indexCPS2_Hulk, indexMSHVSF_VSP },
    { L"Ken P1 VSP", 0x7F3Ec, 0x7F48c, indexCPS2_Ken, indexMSHVSF_VSP },
    { L"Omega Red P1 VSP", 0x7F16c, 0x7F20c, indexCPS2_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P1 VSP", 0x7F66c, 0x7F70c, indexCPS2_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P1 VSP", 0x7FA2c, 0x7FACc, indexCPS2_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P1 VSP", 0x7FCAc, 0x7FCEc, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P1 VSP", 0x7F84c, 0x7F8Ec, indexCPS2_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P1 VSP", 0x7F34c, 0x7F3Ec, indexCPS2_Ryu, indexMSHVSF_VSP },
    { L"Sakura P1 VSP", 0x7F7Ac, 0x7F84c, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Shadow P1 VSP", 0x7FB6c, 0x7FC0c, indexCPS2_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P1 VSP", 0x7F0Cc, 0x7F14c, indexCPS2_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P1 VSP", 0x7F20c, 0x7F24c, indexCPS2_Spidey, indexMSHVSF_VSP },
    { L"U.S Agent P1 VSP", 0x7FC0c, 0x7FCAc, indexCPS2_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P1 VSP", 0x7F02c, 0x7F0Cc, indexCPS2_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P1 VSP", 0x7F5Cc, 0x7F66c, indexCPS2_Zangief, indexMSHVSF_VSP },
    { L"Apocalypse P1 VSP", 0x7EDAc, 0x7EE4c, indexCPS2_Apocalypse, indexMSHVSF_VSP },
    { L"Apocalypse P2 VSP", 0x7FE8c, 0x7FF2c, indexCPS2_Apocalypse, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES_7B[] =
{
    { L"A. Spider-Man P2 VSP", 0xe2c, 0xe6c, indexCPS2_Spidey, indexMSHVSF_VSP  },
    { L"Akuma P2 VSP", 0x7ec, 0x86c, indexCPS2_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P2 VSP", 0x38c, 0x3cc, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P2 VSP Part 2", 0x000, 0x06c },
    { L"Chun-Li P2 VSP", 0x56c, 0x5cc, indexCPS2_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P2 VSP", 0xA6c, 0xB0c, indexCPS2_CyberAkuma, indexMSHVSF_VSP },
    { L"Dan P2 VSP", 0x9cc, 0xa6c, indexCPS2_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P2 VSP", 0xbac, 0xc4c, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P2 VSP", 0x60c, 0x6ac, indexCPS2_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P2 VSP", 0x06c, 0x0cc, indexCPS2_Hulk, indexMSHVSF_VSP },
    { L"Ken P2 VSP", 0x4cc, 0x56c, indexCPS2_Ken, indexMSHVSF_VSP },
    { L"Omega Red P2 VSP", 0x24c, 0x2ec, indexCPS2_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P2 VSP", 0x74c, 0x7ec, indexCPS2_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P2 VSP", 0xb0c, 0xbac, indexCPS2_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P2 VSP", 0xd8c, 0xdcc, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P2 VSP", 0x92c, 0x9cc, indexCPS2_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P2 VSP", 0x42c, 0x4cc, indexCPS2_Ryu, indexMSHVSF_VSP },
    { L"Sakura P2 VSP", 0x88c, 0x92c, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Shadow P2 VSP", 0xC4c, 0xCEc, indexCPS2_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P2 VSP", 0x1ac, 0x22c, indexCPS2_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P2 VSP", 0x2ec, 0x32c, indexCPS2_Spidey, indexMSHVSF_VSP },
    { L"US Agent P2 VSP", 0xcec, 0xd8c, indexCPS2_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P2 VSP", 0x10c, 0x1ac, indexCPS2_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P2 VSP", 0x6ac, 0x74c, indexCPS2_Zangief, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_RIVER_PALETTES[] =
{
    { L"Background Sky",            0x56EF2, 0x570F2, indexCPS2_MSHVSFAssets, 0x00, &pairFullyLinkedNode },
    { L"Background Reflection",     0x570F2, 0x572F2, indexCPS2_MSHVSFAssets, 0x01 },
    { L"Ridge Trees",               0x5F552, 0x5F652, indexCPS2_MSHVSFAssets, 0x02 },
    { L"Bridge",                    0x5A2F2, 0x5A352, indexCPS2_MSHVSFAssets, 0x03 },
    { L"People Crater Water Posts", 0x7846c, 0x7854c, indexCPS2_MSHVSFAssets, 0x04 },
    { L"Unknown",                   0x5A4F2, 0x5A6F2 },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_BONUS_PALETTES[] =
{
    { L"Super Background", 0x6EFEa, 0x6F1Ea },
    { L"Floor",            0x6EAAa, 0x6EC6a },
};

const sDescTreeNode MSHVSF_A_APOCALYPSE_COLLECTION[] =
{
    //{ L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH) },
    //{ L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_SHARED,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_AKUMA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION[] =
{
    { L"Blackheart P1 Color (Punch)", DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH,   ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH)  },
    { L"Blackheart P2 Color (Kick)",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK,    ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK)   },
    { L"Mephisto P1 Color (Punch)",   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH,     ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH)    },
    { L"Mephisto P2 Color (Kick)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK,      ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK)     },
    { L"Shared Palettes",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_CAPTAIN_AMERICA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CHUNLI_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CYBER_AKUMA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CYCLOPS_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_DAN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_DARK_SAKURA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_DHALSIM_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_HULK_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_KEN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_MBIPSON_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_MECH_ZANGIEF_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_NORIMARO_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_EXTRAS,           ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_EXTRAS) },
};

const sDescTreeNode MSHVSF_A_OMEGARED_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_RYU_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SAKURA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SHADOW_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SHUMAGORATH_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SPIDERMAN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_USAGENT_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_WOLVERINE_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_ZANGIEF_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_STATUS_COLLECTION[] =
{
    { L"Akuma",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_STATUS,    ARRAYSIZE(MSHVSF_A_AKUMA_STATUS) },
    { L"Blackheart/Mephisto",DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_STATUS,    ARRAYSIZE(MSHVSF_A_BLACKHEART_STATUS) },
    { L"Captain America",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAINAMERICA_STATUS,    ARRAYSIZE(MSHVSF_A_CAPTAINAMERICA_STATUS) },
    { L"Chun-Li",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_STATUS,    ARRAYSIZE(MSHVSF_A_CHUNLI_STATUS) },
    { L"Cyclops",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_STATUS,    ARRAYSIZE(MSHVSF_A_CYCLOPS_STATUS) },
    { L"Dhalsim",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_STATUS,    ARRAYSIZE(MSHVSF_A_DHALSIM_STATUS) },
    { L"Hulk",               DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_STATUS,    ARRAYSIZE(MSHVSF_A_HULK_STATUS) },
    { L"Ken",                DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_STATUS,    ARRAYSIZE(MSHVSF_A_KEN_STATUS) },
    { L"M. Bison",           DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BISON_STATUS,    ARRAYSIZE(MSHVSF_A_BISON_STATUS) },
    { L"Norimaro",           DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_STATUS,    ARRAYSIZE(MSHVSF_A_NORIMARO_STATUS) },
    { L"Omega Red",          DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_STATUS,    ARRAYSIZE(MSHVSF_A_OMEGARED_STATUS) },
    { L"Ryu",                DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_STATUS,    ARRAYSIZE(MSHVSF_A_RYU_STATUS) },
    { L"Sakura",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_STATUS,    ARRAYSIZE(MSHVSF_A_SAKURA_STATUS) },
    { L"Shadow",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_STATUS,    ARRAYSIZE(MSHVSF_A_SHADOW_STATUS) },
    { L"Shuma-Gorath",       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMA_STATUS,    ARRAYSIZE(MSHVSF_A_SHUMA_STATUS) },
    { L"Spider-Man",         DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDEY_STATUS,    ARRAYSIZE(MSHVSF_A_SPIDEY_STATUS) },
    { L"Wolverine",          DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_STATUS,    ARRAYSIZE(MSHVSF_A_WOLVERINE_STATUS) },
    { L"Zangief",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_STATUS,    ARRAYSIZE(MSHVSF_A_ZANGIEF_STATUS) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION[] =
{
    { L"Character Select Icons",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSI_PALETTES,    ARRAYSIZE(MSHVSF_A_CSI_PALETTES) },
    { L"Super Screen Portraits",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SSP_PALETTES,    ARRAYSIZE(MSHVSF_A_SSP_PALETTES) },
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES) },
    { L"Bonus",                     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_BONUS_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_BONUS_PALETTES) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION_7B[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES_7B,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES_7B) },
};


const sDescTreeNode MSHVSF_A_STAGE_COLLECTION[] =
{
    //{ L"Battle on the Hilltop",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_BATTLE_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_BATTLE_PALETTES) },
    //{ L"The Cataract",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_CATARACT_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_CATARACT_PALETTES) },
    //{ L"Death Valley",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_DVALLEY_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_DVALLEY_PALETTES) },
    //{ L"Manhattan",                     DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_MANHATTAN_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_MANHATTAN_PALETTES) },
    { L"River Bridge",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_RIVER_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_RIVER_PALETTES) },
    //{ L"Raging Inferno: Night Time",    DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_INFERNO_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_INFERNO_PALETTES) },
    //{ L"Showdown in the Park",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_SHOWDOWN_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_SHOWDOWN_PALETTES) },
    //{ L"Temple of Fists",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_TEMPLE_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_TEMPLE_PALETTES) },
};

const sDescTreeNode MSHVSF_A_UNITS_6A[] =
{
    { L"Akuma",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_AKUMA_COLLECTION,               ARRAYSIZE(MSHVSF_A_AKUMA_COLLECTION) },
    { L"Armored Spider-Man",    DESC_NODETYPE_TREE, (void*)MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION) },
    { L"Blackheart/Mephisto",   DESC_NODETYPE_TREE, (void*)MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION) },
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

constexpr auto MSHVSF_A_NUM_IND_6A = ARRAYSIZE(MSHVSF_A_UNITS_6A);
#define MSHVSF_A_EXTRALOC_6A MSHVSF_A_NUM_IND_6A

enum Supported_MSHVSF_6A_PaletteListIndex
{
    index_MSHVSF_Gouki,
    index_MSHVSF_ArmoredSpiderMan,
    index_MSHVSF_Blackheart_Mephisto,
    index_MSHVSF_CaptainAmerica,
    index_MSHVSF_ChunLi,
    index_MSHVSF_CyberGouki,
    index_MSHVSF_Cyclops,
    index_MSHVSF_Dan,
    index_MSHVSF_DarkSakura,
    index_MSHVSF_Dhalsim,
    index_MSHVSF_Hulk,
    index_MSHVSF_Ken,
    index_MSHVSF_MBison,
    index_MSHVSF_MechZangief,
    index_MSHVSF_Norimaro,
    index_MSHVSF_OmegaRed,
    index_MSHVSF_Ryu,
    index_MSHVSF_Sakura,
    index_MSHVSF_Shadow,
    index_MSHVSF_ShumaGorath,
    index_MSHVSF_SpiderMan,
    index_MSHVSF_USAgent,
    index_MSHVSF_Wolverine,
    index_MSHVSF_Zangief,
    index_MSHVSF_Apocalypse,
    index_MSHVSF_StatusEffects,
    index_MSHVSF_IconsAndPortraits,
    index_MSHVSF_Stages,
    index_MSHVSF_6A_Last
};

const sDescTreeNode MSHVSF_A_UNITS_7B[MSHVSF_A_NUM_IND_7B] =
{
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION_7B, ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION_7B) },
};

// We extend this array with data groveled from the mshvsfe.txt extensible extras file, if any.
const stExtraDef MSHVSF_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

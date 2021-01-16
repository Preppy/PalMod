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
    { L"Small Body (Intro)", 0x71ECE, 0x71EEE, indexCPS2_Apocalypse, 0x00 },
    { L"Giant Head",         0x71E8E, 0x71EAE, indexCPS2_Apocalypse, 0x01 },
    { L"Giant Body",         0x59EF4, 0x59F34, indexCPS2_Apocalypse, 0x03 },
    { L"Giant Arm",          0x71E6E, 0x71E8E, indexCPS2_Apocalypse, 0x02 },
    { L"Shoulder Gun",       0x71EAE, 0x71ECE, indexCPS2_Apocalypse, 0x04 },
    { L"Shockwave",          0x71EEE, 0x71F0E },
    { L"?",                  0x71F0E, 0x71F2E },
    { L"Apocalypse Drone",   0x71F2E, 0x71F4E, indexCPS2_Apocalypse, 0x05 },
    { L"Hand: Mace and Drill", 0x71F4E, 0x71F6E },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7340E, 0x7342E, indexCPS2_Spidey },
    { L"Extra 01: webs",          0x7342E, 0x7344E, indexCPS2_Spidey, 2 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x7346E, 0x7348E, indexCPS2_Spidey },
    { L"Extra 02: webs",         0x7348E, 0x734AE, indexCPS2_Spidey, 2 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7258E, 0x725AE, indexCPS2_Blackheart },
    { L"Extra 01",               0x725AE, 0x725CE },
};
const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x725EE, 0x7260E, indexCPS2_Blackheart },
    { L"Extra 02",               0x7260E, 0x7262E },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7334E, 0x7336E, indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x733AE, 0x733CE, indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED[] =
{
    //{ L"P1 Extras 1?", 0x76BEE, 0x76C0E, }, // doesn't match mvc2 anything bugbug
    { L"P1 HP/HK Demons", 0x769CE, 0x769EE, indexCPS2_Blackheart, 0x02 },
    { L"Blackheart P1 HP/HK Demons (hurt)", 0x725CE, 0x725EE, indexCPS2_Blackheart, 0x02 },
    { L"Mephisto P1 HP/HK Demons (hurt)", 0x7338E, 0x733AE, indexCPS2_Blackheart, 0x02 },
    { L"P2 HP/HK Demons", 0x76B4E, 0x76B6E, indexCPS2_Blackheart, 0x02 },
    { L"Blackheart P2 HP/HK Demons (hurt)", 0x7262E, 0x7264E, indexCPS2_Blackheart, 0x02 },
    { L"Mephisto P2 HP/HK Demons (hurt)", 0x733EE, 0x7340E, indexCPS2_Blackheart, 0x02 },
    { L"HCF+P Dark Thunder", 0x769EE, 0x76A0E, indexCPS2_Blackheart, 0x01 },
    { L"HCB+LP (Thunder Inferno)", 0x76A0E, 0x76A2E, indexCPS2_Blackheart, 0x09 },
    { L"HCB+MP (Ice Inferno)", 0x76A2E, 0x76A4E, indexCPS2_Blackheart, 0x08 },
    { L"HCB+HP (Flame Inferno)", 0x76A4E, 0x76A6E, indexCPS2_Blackheart, 0x0A },
    { L"Armageddon Meteors (QCF+3P)", 0x76A8E, 0x76AAE, indexCPS2_Blackheart, 0x0B },
    { L"Heart of Darkness (QCF+3K)", 0x76BAE, 0x76BCE },
    { L"j.MP Lightning (All)", 0x76BCE, 0x76BEE, indexCPS2_Blackheart, 0x0D },
    { L"MP/HP Throw (Ground)", 0x76AAE, 0x76ACE, indexCPS2_Blackheart, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",           0x7210E, 0x7212E, indexCPS2_CapAm, 0, &pairNext },
    { L"P1 Shield",                  0x7212E, 0x7214E, indexCPS2_CapAm, 1 },
    { L"P1 Charging Star",           0x7214E, 0x7216E, indexCPS2_CapAm, 2 },

};
const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",            0x7216E, 0x7218E, indexCPS2_CapAm, 0, &pairNext },
    { L"P2 Shield",                  0x7218E, 0x721AE, indexCPS2_CapAm, 1 },
    { L"P2 Charging Star",           0x721AE, 0x721CE, indexCPS2_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",   0x727CE, 0x727EE, indexCPS2_ChunLi, 0, &pairNext },
    { L"P1 Keiokuken (shades)", 0x727EE, 0x7280E, indexCPS2_ChunLi, 1 },
    { L"P1 Kikosho",         0x7280E, 0x7282E, indexCPS2_ChunLi, 2 },
};
const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",    0x7282E, 0x7284E, indexCPS2_ChunLi, 0, &pairNext },
    { L"P2 Keiokuken (shades)", 0x7284E, 0x7286E, indexCPS2_ChunLi, 1 },
    { L"P2 Kikosho",         0x7286E, 0x7288E, indexCPS2_ChunLi, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)", 0x72ECE, 0x72EEE, indexCPS2_CyberAkuma, 0, &pairNext },
    { L"P1 Machinery, Hadouken 2", 0x72F0E, 0x72F2E, indexCPS2_CyberAkuma, 1 },
    { L"P1 Hadouken 1 Tatsu Flames", 0x72EEE, 0x72F0E, indexCPS2_Akuma, 1 },
};
const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x72F2E, 0x72F4E, indexCPS2_CyberAkuma, 0, &pairNext },
    { L"P2 Machinery, Hadouken 2", 0x72F6E, 0x72F8E, indexCPS2_CyberAkuma, 1 },
    { L"P2 Hadouken 1 Tatsu Flames", 0x72F4E, 0x72F6E, indexCPS2_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)", 0x71F8E, 0x71FAE, indexCPS2_Cyclops },
    { L"P1 HK Extra", 0x71FAE, 0x71FCE, indexCPS2_Cyclops, 1 },
    { L"P1 Optic Blast Super", 0x71FCE, 0x71FEE, indexCPS2_Cyclops, 2 },
    { L"P1 Intro 1", 0x7616E, 0x7618E, indexCPS2_Cyclops },
    { L"P1 Intro 2", 0x7618E, 0x761AE, indexCPS2_Cyclops },
    { L"P1 Intro 3", 0x761AE, 0x761CE, indexCPS2_Cyclops },
    { L"P1 Intro 4", 0x761CE, 0x761EE, indexCPS2_Cyclops },
    { L"P1 Intro 5", 0x761EE, 0x7620E, indexCPS2_Cyclops },
    { L"P1 Intro 6", 0x7620E, 0x7622E, indexCPS2_Cyclops },
    { L"P1 Intro 7", 0x7622E, 0x7624E, indexCPS2_Cyclops },
    { L"P1 Intro 8", 0x7624E, 0x7626E, indexCPS2_Cyclops },
    { L"P1 Extra Lighting", 0x7640E, 0x7642E, indexCPS2_Cyclops },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x71FEE, 0x7200E, indexCPS2_Cyclops },
    { L"P2 HK Extra", 0x7200E, 0x7202E, indexCPS2_Cyclops, 1 },
    { L"P2 Optic Blast Super", 0x7202E, 0x7204E, indexCPS2_Cyclops, 2 },
    { L"P2 Intro 1", 0x7626E, 0x7628E, indexCPS2_Cyclops },
    { L"P2 Intro 2", 0x7628E, 0x762AE, indexCPS2_Cyclops },
    { L"P2 Intro 3", 0x762AE, 0x762CE, indexCPS2_Cyclops },
    { L"P2 Intro 4", 0x762CE, 0x762EE, indexCPS2_Cyclops },
    { L"P2 Intro 5", 0x762EE, 0x7630E, indexCPS2_Cyclops },
    { L"P2 Intro 6", 0x7630E, 0x7632E, indexCPS2_Cyclops },
    { L"P2 Intro 7", 0x7632E, 0x7634E, indexCPS2_Cyclops },
    { L"P2 Intro 8", 0x7634E, 0x7636E, indexCPS2_Cyclops },
    { L"P2 Extra Lighting 2", 0x7644E, 0x7646E, indexCPS2_Cyclops },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_SHARED[] =
{
    { L"P1 Optic Light Extra?", 0x7642E, 0x7644E, indexCPS2_Cyclops },
    { L"P2 Laser FX", 0x720EE, 0x7210E, indexCPS2_Cyclops, 3 },
    { L"P2 Optic Blast Palette?", 0x7638E, 0x763AE },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x72E0E, 0x72E2E, indexCPS2_Dan },
    { L"P1 gadoken", 0x72E2E, 0x72E4E, indexCPS2_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72E6E, 0x72E8E, indexCPS2_Dan },
    { L"P2 gadoken", 0x72E8E, 0x72EAE, indexCPS2_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7310E, 0x7312E, indexCPS2_Sakura },
    { L"P1 Hadouken", 0x7312E, 0x7314E, indexCPS2_Ken, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x7316E, 0x7318E, indexCPS2_Sakura },
    { L"P2 Hadouken", 0x7318E, 0x731AE, indexCPS2_Ken, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7288E, 0x728AE, indexCPS2_Dhalsim },
    { L"P1 Extras 1 Flames",      0x728AE, 0x728CE, indexCPS2_Dhalsim, 1 },
    { L"P1 Extras Sally",         0x728CE, 0x728EE, indexCPS2_Dhalsim, 2 },
    { L"P1 Teleport 1", 0x76CCE, 0x76CEE, indexCPS2_Dhalsim, 0xb },
    { L"P1 Teleport 2", 0x76CEE, 0x76D0E, indexCPS2_Dhalsim, 0xb },
    { L"P1 Teleport 3", 0x76D0E, 0x76D2E, indexCPS2_Dhalsim, 0xb },
    { L"P1 Teleport 4", 0x76D2E, 0x76D4E, indexCPS2_Dhalsim, 0xb },
    //{ L"P1 Teleport 5", 0x76D4E, 0x76D6E, indexCPS2_Dhalsim, 0xb }, // This is just the all-white frame.

};
const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x728EE, 0x7290E, indexCPS2_Dhalsim },
    { L"P2 Extras 1 Flames",     0x7290E, 0x7292E, indexCPS2_Dhalsim, 1 },
    { L"P2 Extras Sally",        0x7292E, 0x7294E, indexCPS2_Dhalsim, 2 },
    { L"P2 Teleport 1",          0x76D6E, 0x76D8E, indexCPS2_Dhalsim, 0xb },
    { L"P2 Teleport 2",          0x76D8E, 0x76DAE, indexCPS2_Dhalsim, 0xb },
    { L"P2 Teleport 3",          0x76DAE, 0x76DCE, indexCPS2_Dhalsim, 0xb },
    { L"P2 Teleport 4",          0x76DCE, 0x76DEE, indexCPS2_Dhalsim, 0xb },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72BCE, 0x72BEE, indexCPS2_Akuma },
    { L"Extra 01 Hadouken",      0x72BEE, 0x72C0E, indexCPS2_Akuma, 1 },
    { L"Extra 02",               0x72C0E, 0x72C2E },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72C2E, 0x72C4E, indexCPS2_Akuma },
    { L"Extra 01 Hadouken",      0x72C4E, 0x72C6E, indexCPS2_Akuma, 1 },
    { L"Extra 02",               0x72C6E, 0x72C8E },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x721CE, 0x721EE, indexCPS2_Hulk },
    { L"P1 Extras 1",             0x721EE, 0x7220E, indexCPS2_Hulk, 1 },
    { L"P1 Extras 2",             0x7220E, 0x7222E, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",         0x7222E, 0x7224E, indexCPS2_Hulk },
    { L"P2 Extras 1",             0x7224E, 0x7226E, indexCPS2_Hulk, 1 },
    { L"P2 Extras 2 ",            0x7226E, 0x7228E, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7270E, 0x7272E, indexCPS2_Ken },
    { L"P1 Hadouken",             0x7272E, 0x7274E, indexCPS2_Ken, 1 },
    { L"P1 Shoryuken",            0x7274E, 0x7276E, indexCPS2_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x7276E, 0x7278E, indexCPS2_Ken },
    { L"P2 Hadouken", 0x7278E, 0x727AE, indexCPS2_Ken, 1 },
    { L"P2 Shoryuken", 0x727AE, 0x727CE, indexCPS2_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72B0E, 0x72B2E, indexCPS2_Bison },
    { L"P1 Extras 1",            0x72B2E, 0x72B4E, indexCPS2_Bison, 0x08 },
    { L"P1 Extras 2",            0x72B4E, 0x72B6E, indexCPS2_Bison, 0x09 },
    { L"P1 Extras 3",            0x7708E, 0x770AE, indexCPS2_Bison, 0x08 },
    { L"P1 Extras 4",            0x770AE, 0x770CE, indexCPS2_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72B6E, 0x72B8E, indexCPS2_Bison },
    { L"P2 Extras 1",            0x72B8E, 0x72BAE, indexCPS2_Bison, 0x08 },
    { L"P2 Extras 2",            0x72BAE, 0x72BCE, indexCPS2_Bison, 0x09 },
    { L"P2 Extras 3",            0x770CE, 0x770EE, indexCPS2_Bison, 0x08 },
    { L"P2 Extras 4",            0x770EE, 0x7710E, indexCPS2_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72F8E, 0x72FAE, indexCPS2_Zangief },
    { L"P1 Vodka Fire",          0x72FAE, 0x72FCE, indexCPS2_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72FEE, 0x7300E, indexCPS2_Zangief },
    { L"P2 Vodka Fire",          0x7300E, 0x7302E, indexCPS2_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED[] =
{
    { L"P1+P2 Super Armor ",     0x7304E, 0x7306E, indexCPS2_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72D4E, 0x72D6E, indexCPS2_Norimaro },
    { L"P1 Extras 1",            0x7710E, 0x7712E, indexCPS2_Norimaro, 0x02 },
    { L"P1 Extras 2",            0x7716E, 0x7718E, },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72DAE, 0x72DCE, indexCPS2_Norimaro },
    { L"P2 Extras 1",            0x7718E, 0x771AE, indexCPS2_Norimaro, 0x02 },
    { L"P2 Extras 2",            0x72DCE, 0x72DEE, },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_EXTRAS[] =
{
    { L"P1 Extras 3",            0x72D6E, 0x72D8E, }
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7240E, 0x7242E, indexCPS2_OmegaRed },
    { L"P1 Intro 1", 0x764AE, 0x764CE, indexCPS2_OmegaRed },
    { L"P1 Intro 2", 0x764CE, 0x764EE, indexCPS2_OmegaRed },
    { L"P1 Intro 3", 0x764EE, 0x7650E, indexCPS2_OmegaRed },
    { L"P1 Intro 4", 0x7650E, 0x7652E, indexCPS2_OmegaRed },
    { L"P1 Intro Shockwave 1", 0x7242E, 0x7244E, indexCPS2_OmegaRed, 1 },
    { L"P1 Intro Shockwave 2", 0x7244E, 0x7246E, indexCPS2_OmegaRed, 1 },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",       0x7246E, 0x7248E, indexCPS2_OmegaRed },
    { L"P2 Intro 1", 0x7652E, 0x7654E, indexCPS2_OmegaRed },
    { L"P2 Intro 2", 0x7654E, 0x7656E, indexCPS2_OmegaRed },
    { L"P2 Intro 3", 0x7656E, 0x7658E, indexCPS2_OmegaRed },
    { L"P2 Intro 4", 0x7658E, 0x765AE, indexCPS2_OmegaRed },
    { L"P2 Intro Shockwave 1", 0x7248E, 0x724AE, indexCPS2_OmegaRed, 1 },
    { L"P2 Intro Shockwave 2", 0x724AE, 0x724CE, indexCPS2_OmegaRed, 2 },
};

const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7264E, 0x7266E, indexCPS2_Ryu },
    { L"P1 Hadouken", 0x7266E, 0x7268E, indexCPS2_Ryu, 1 },
    { L"P1 Extra 2", 0x7268E, 0x726AE },
};

const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x726AE, 0x726CE, indexCPS2_Ryu },
    { L"P2 Hadouken", 0x726CE, 0x726EE, indexCPS2_Ryu, 1 },
    { L"P2 Extra 2", 0x726EE, 0x7270E },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x72C8E, 0x72CAE, indexCPS2_Sakura },
    { L"P1 Extras 1 Hadouken", 0x72CAE, 0x72CCE, indexCPS2_Ken, 1 },
    { L"P1 Extras 2 Friend", 0x77FCE, 0x77FEE, },
    { L"P1 Extras 3 Bag", 0x77FEE, 0x7800E, },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72CEE, 0x72D0E, indexCPS2_Sakura },
    { L"P2 Extras 1 Hadouken", 0x72D0E, 0x72D2E, indexCPS2_Ken, 1 },
    { L"P2 Extras 2 Friend", 0x7800E, 0x7802E, },
    { L"P2 Extras 3 Bag", 0x7802E, 0x7804E, },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x731CE, 0x731EE, indexCPS2_Charlie },
    { L"P1 Sonic Boom", 0x731EE, 0x7320E, indexCPS2_Charlie, 1 },
    { L"P1 Flash Kick", 0x7320E, 0x7322E, indexCPS2_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x7322E, 0x7324E,  indexCPS2_Charlie },
    { L"P2 Sonic Boom", 0x7324E, 0x7326E, indexCPS2_Charlie, 1 },
    { L"P2 Flash Kick", 0x7326E, 0x7328E, indexCPS2_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7234E, 0x7236E, indexCPS2_Shuma },
        { L"P1 HP", 0x7236E, 0x7238E , indexCPS2_Shuma },
        { L"P1 Mystic Stare", 0x7238E, 0x723AE, indexCPS2_Shuma },

    { L"P1 Post HP Stance 1", 0x7728E, 0x772AE, indexCPS2_Shuma },
    { L"P1 Post HP Stance 2", 0x772AE, 0x772CE, indexCPS2_Shuma },
    { L"P1 Post HP Stance 3", 0x772CE, 0x772EE, indexCPS2_Shuma },
    { L"P1 Post HP Stance 4", 0x772EE, 0x7730E, indexCPS2_Shuma },
    { L"P1 Post HP Stance 5", 0x7730E, 0x7732E, indexCPS2_Shuma },

    { L"P1 Stone Drop 1", 0x7732E, 0x7734E, indexCPS2_Shuma },
    { L"P1 Stone Drop 2", 0x7734E, 0x7736E, indexCPS2_Shuma },
    { L"P1 Stone Drop 3", 0x7736E, 0x7738E, indexCPS2_Shuma },
    { L"P1 Stone Drop 4", 0x7738E, 0x773AE, indexCPS2_Shuma },
    { L"P1 Stone Drop 5", 0x773AE, 0x773CE, indexCPS2_Shuma },

    // Unused blue region

    // HK grab region
    { L"P1 Life Drain 1", 0x7750E, 0x7752E, indexCPS2_Shuma },
    { L"P1 Life Drain 2", 0x7752E, 0x7754E, indexCPS2_Shuma },
    { L"P1 Life Drain 3", 0x7754E, 0x7756E, indexCPS2_Shuma },
    { L"P1 Life Drain 4", 0x7756E, 0x7758E, indexCPS2_Shuma },
    { L"P1 Life Drain 5", 0x7758E, 0x775AE, indexCPS2_Shuma },
    { L"P1 Life Drain 6", 0x775AE, 0x775CE, indexCPS2_Shuma },
    { L"P1 Life Drain 7", 0x775CE, 0x775EE, indexCPS2_Shuma },
    { L"P1 Life Drain 8", 0x775EE, 0x7760E, indexCPS2_Shuma },
    { L"P1 Life Drain 9", 0x7760E, 0x7762E, indexCPS2_Shuma },
    { L"P1 Life Drain 10", 0x7762E, 0x7764E, indexCPS2_Shuma },

    // HP flash
    { L"P1 HP Flash 1", 0x7764E, 0x7766E, indexCPS2_Shuma },
    { L"P1 HP Flash 2", 0x7766E, 0x7768E, indexCPS2_Shuma },
    { L"P1 HP Flash 3", 0x7768E, 0x776AE, indexCPS2_Shuma },
    { L"P1 HP Flash 4", 0x776AE, 0x776CE, indexCPS2_Shuma },
    { L"P1 HP Flash 5", 0x776CE, 0x776EE, indexCPS2_Shuma },
    { L"P1 HP Flash 6", 0x776EE, 0x7770E, indexCPS2_Shuma },
    { L"P1 HP Flash 7", 0x7770E, 0x7772E, indexCPS2_Shuma },

    { L"P1 Chaos Dimension 1", 0x7772E, 0x7774E, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 1", 0x7774E, 0x7776E, indexCPS2_Shuma },
    { L"P1 Chaos Dimension 2", 0x7776E, 0x7778E, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 2", 0x7778E, 0x777AE, indexCPS2_Shuma },
    { L"P1 Chaos Dimension 3", 0x777AE, 0x777CE, indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 3", 0x777CE, 0x777EE , indexCPS2_Shuma },
    { L"P1 Chaos Dimension 4", 0x777EE, 0x7780E , indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 4", 0x7780E, 0x7782E , indexCPS2_Shuma },
    { L"P1 Chaos Dimension 5", 0x7782E, 0x7784E , indexCPS2_Shuma },
    { L"P1 Chaos Dimension Dash 5", 0x7784E, 0x7786E , indexCPS2_Shuma },

    { L"P1 Mystic Smash", 0x7786E, 0x7788E, indexCPS2_Shuma },

    // { L"P1 Extra 11", 0x79C0E, 0x79C2E, indexCPS2_Shuma },//  this is shuma but doesn't fit.  excising until somebody tells me why they want it
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK[] =
{

    { L"P2 Color (Kick)", 0x723AE, 0x723CE, indexCPS2_Shuma },
        { L"P2 HP", 0x723CE, 0x723EE, indexCPS2_Shuma },
        { L"P2 Mystic Stare", 0x723EE, 0x7240E, indexCPS2_Shuma },

    { L"P2 Post HP Stance 1", 0x7788E, 0x778AE, indexCPS2_Shuma },
    { L"P2 Post HP Stance 2", 0x778AE, 0x778CE, indexCPS2_Shuma },
    { L"P2 Post HP Stance 3", 0x778CE, 0x778EE, indexCPS2_Shuma },
    { L"P2 Post HP Stance 4", 0x778EE, 0x7790E, indexCPS2_Shuma },
    { L"P2 Post HP Stance 5", 0x7790E, 0x7792E, indexCPS2_Shuma },

    { L"P2 Stone Drop 1", 0x7792E, 0x7794E, indexCPS2_Shuma },
    { L"P2 Stone Drop 2", 0x7794E, 0x7796E, indexCPS2_Shuma },
    { L"P2 Stone Drop 3", 0x7796E, 0x7798E, indexCPS2_Shuma },
    { L"P2 Stone Drop 4", 0x7798E, 0x779AE, indexCPS2_Shuma },
    { L"P2 Stone Drop 5", 0x779AE, 0x779CE, indexCPS2_Shuma },

    // unused 'blue range': 799ce-77b0e

    // HK grab region
    { L"P2 Life Drain 1", 0x77B0E, 0x77B2E, indexCPS2_Shuma },
    { L"P2 Life Drain 2", 0x77B2E, 0x77B4E, indexCPS2_Shuma },
    { L"P2 Life Drain 3", 0x77B4E, 0x77B6E, indexCPS2_Shuma },
    { L"P2 Life Drain 4", 0x77B6E, 0x77B8E, indexCPS2_Shuma },
    { L"P2 Life Drain 5", 0x77B8E, 0x77BAE, indexCPS2_Shuma },
    { L"P2 Life Drain 6", 0x77BAE, 0x77BCE, indexCPS2_Shuma },
    { L"P2 Life Drain 7", 0x77BCE, 0x77BEE, indexCPS2_Shuma },
    { L"P2 Life Drain 8", 0x77BEE, 0x77C0E, indexCPS2_Shuma },
    { L"P2 Life Drain 9", 0x77C0E, 0x77C2E, indexCPS2_Shuma },
    { L"P2 Life Drain 10", 0x77C2E, 0x77C4E, indexCPS2_Shuma },

    // HP flash
    { L"P2 HP Flash 1", 0x77C4E, 0x77C6E, indexCPS2_Shuma },
    { L"P2 HP Flash 2", 0x77C6E, 0x77C8E, indexCPS2_Shuma },
    { L"P2 HP Flash 3", 0x77C8E, 0x77CAE, indexCPS2_Shuma },
    { L"P2 HP Flash 4", 0x77CAE, 0x77CCE, indexCPS2_Shuma },
    { L"P2 HP Flash 5", 0x77CCE, 0x77CEE, indexCPS2_Shuma },
    { L"P2 HP Flash 6", 0x77CEE, 0x77D0E, indexCPS2_Shuma },
    { L"P2 HP Flash 7", 0x77D0E, 0x77D2E, indexCPS2_Shuma },

    { L"P2 Chaos Dimension 1", 0x77D2E, 0x77D4E, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 1", 0x77D4E, 0x77D6E, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 2", 0x77D6E, 0x77D8E, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 2", 0x77D8E, 0x77DAE, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 3", 0x77DAE, 0x77DCE, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 3", 0x77DCE, 0x77DEE, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 4", 0x77DEE, 0x77E0E, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 4", 0x77E0E, 0x77E2E, indexCPS2_Shuma },
    { L"P2 Chaos Dimension 5", 0x77E2E, 0x77E4E, indexCPS2_Shuma },
    { L"P2 Chaos Dimension Dash 5", 0x77E4E, 0x77E6E, indexCPS2_Shuma },

    { L"P2 Mystic Smash", 0x77E6E, 0x77E8E, indexCPS2_Shuma },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{ // 2 is web
    { L"P1 Color (Punch)", 0x724CE, 0x724EE, indexCPS2_Spidey },
    { L"P1 Extras 1", 0x724EE, 0x7250E, indexCPS2_Spidey, 0x2 },
    { L"P1 Spotlight", 0x7250E, 0x7252E, indexCPS2_Spidey, 13 },
    { L"P1 Intro 1", 0x765CE, 0x765EE, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 2", 0x765EE, 0x7660E, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 3", 0x7660E, 0x7662E, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 4", 0x7662E, 0x7664E, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 5", 0x7664E, 0x7666E, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 6", 0x7666E, 0x7668E, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 7", 0x7668E, 0x766AE, indexCPS2_Spidey, 0x0B },
    { L"P1 Intro 8", 0x766AE, 0x766CE, indexCPS2_Spidey, 0x0B },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x7252E, 0x7254E, indexCPS2_Spidey },
    { L"P2 Extras 1", 0x7254E, 0x7256E, indexCPS2_Spidey, 0x2 },
    { L"P2 Spotlight", 0x7256E, 0x7258E, indexCPS2_Spidey, 13 },
    { L"P2 Intro 1", 0x767CE, 0x767EE, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 2", 0x767EE, 0x7680E, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 3", 0x7680E, 0x7682E, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 4", 0x7682E, 0x7684E, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 5", 0x7684E, 0x7686E, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 6", 0x7686E, 0x7688E, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 7", 0x7688E, 0x768AE, indexCPS2_Spidey, 0x0B },
    { L"P2 Intro 8", 0x768AE, 0x768CE, indexCPS2_Spidey, 0x0B },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_SHARED[] =
{
    { L"P1 Extras 2: Spotlight", 0x766CE, 0x766EE, indexCPS2_Spidey, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7328E, 0x732AE, indexCPS2_CapAm, 0, &pairNext },
    { L"P1 Shield", 0x732AE, 0x732CE, indexCPS2_CapAm, 1 },
    { L"P1 Charging Star", 0x732CE, 0x732EE, indexCPS2_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x732EE, 0x7330E, indexCPS2_CapAm, 0, &pairNext },
    { L"P2 Shield", 0x7330E, 0x7332E, indexCPS2_CapAm, 1 },
    { L"P2 Charging Star", 0x7332E, 0x7334E, indexCPS2_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7228E, 0x722AE, indexCPS2_Wolverine, 0, &pairNext },
    { L"P1 Claws", 0x722AE, 0x722CE, indexCPS2_Wolverine, 1 },
    { L"P1 Extras 1", 0x722CE, 0x722EE, indexCPS2_Wolverine, 2 },
    { L"P1 Extras 2 (Fatal Claw)", 0x7804E, 0x7806E },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x722EE, 0x7230E, indexCPS2_Wolverine, 0, &pairNext },
    { L"P2 Claws", 0x7230E, 0x7232E, indexCPS2_Wolverine, 1 },
    { L"P2 Extras 1", 0x7232E, 0x7234E, indexCPS2_Wolverine, 2 },
    { L"P2 Extras 2 (Fatal Claw)", 0x7806E, 0x7808E },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",   0x7294E, 0x7296E, indexCPS2_Zangief },
    { L"P1 Banishing Fist",  0x7296E, 0x7298E, indexCPS2_Zangief, 1 },
    { L"P1 Extra 2",         0x7298E, 0x729AE },
    { L"P1 FAB 1",           0x72A4E, 0x72A6E, indexCPS2_Zangief },
    { L"P1 FAB 2",           0x72A6E, 0x72A8E, indexCPS2_Zangief },
    { L"P1 FAB 3",           0x72A8E, 0x72AAE, indexCPS2_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x729AE, 0x729CE, indexCPS2_Zangief },
    { L"P2 Banishing Fist",      0x729CE, 0x729EE, indexCPS2_Zangief, 1 },
    { L"P2 Extra 2",             0x729EE, 0x72A0E },
    { L"P2 FAB 1",               0x72AAE, 0x72ACE, indexCPS2_Zangief },
    { L"P2 FAB 2",               0x72ACE, 0x72AEE, indexCPS2_Zangief },
    { L"P2 FAB 3",               0x72AEE, 0x72B0E, indexCPS2_Zangief },
};

#ifdef UNKNOWN_STATUS_PALETES
    // maybe cyber akuma? unclear
    { L"Burning Light", 0x73ace + (0 * 0x20), 0x73aee + (0 * 0x20), indexCPS2_Akuma },
    { L"Burning Dark",   0x73ace + (1 * 0x20), 0x73aee + (1 * 0x20), indexCPS2_Akuma },
    { L"Shocked Light",  0x73ace + (2 * 0x20), 0x73aee + (2 * 0x20), indexCPS2_Akuma },
    { L"Shocked Dark",   0x73ace + (3 * 0x20), 0x73aee + (3 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Light",0x73ace + (4 * 0x20), 0x73aee + (4 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Dark", 0x73ace + (5 * 0x20), 0x73aee + (5 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 1",      0x73ace + (6 * 0x20), 0x73aee + (6 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 2",      0x73ace + (7 * 0x20), 0x73aee + (7 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 3",      0x73ace + (8 * 0x20), 0x73aee + (8 * 0x20), indexCPS2_Akuma },
#endif

const sGame_PaletteDataset MSHVSF_A_SHADOW_STATUS[] =
{
    { L"Burning Light",  0x73ace + (24 * 0x20), 0x73aee + (24 * 0x20), indexCPS2_Charlie },
    { L"Burning Dark",   0x73ace + (25 * 0x20), 0x73aee + (25 * 0x20), indexCPS2_Charlie },
    { L"Shocked Light",  0x73ace + (26 * 0x20), 0x73aee + (26 * 0x20), indexCPS2_Charlie },
    { L"Shocked Dark",   0x73ace + (27 * 0x20), 0x73aee + (27 * 0x20), indexCPS2_Charlie },
    { L"Dark Burn Light",0x73ace + (28 * 0x20), 0x73aee + (28 * 0x20), indexCPS2_Charlie },
    { L"Dark Burn Dark", 0x73ace + (29 * 0x20), 0x73aee + (29 * 0x20), indexCPS2_Charlie },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_STATUS[] =
{
    { L"Burning Light",  0x73ace + (9 * 0x20), 0x73aee + (9 * 0x20), indexCPS2_Cyclops },
    { L"Burning Dark",   0x73ace + (10 * 0x20), 0x73aee + (10 * 0x20), indexCPS2_Cyclops },
    { L"Shocked Light",  0x73ace + (11 * 0x20), 0x73aee + (11 * 0x20), indexCPS2_Cyclops },
    { L"Shocked Dark",   0x73ace + (12 * 0x20), 0x73aee + (12 * 0x20), indexCPS2_Cyclops },
    { L"Dark Burn Light",0x73ace + (13 * 0x20), 0x73aee + (13 * 0x20), indexCPS2_Cyclops },
    { L"Dark Burn Dark", 0x73ace + (14 * 0x20), 0x73aee + (14 * 0x20), indexCPS2_Cyclops },
    { L"Kinetic 1",      0x73ace + (15 * 0x20), 0x73aee + (15 * 0x20), indexCPS2_Cyclops },
    { L"Kinetic 2",      0x73ace + (16 * 0x20), 0x73aee + (16 * 0x20), indexCPS2_Cyclops },
    { L"Kinetic 3",      0x73ace + (17 * 0x20), 0x73aee + (17 * 0x20), indexCPS2_Cyclops },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAINAMERICA_STATUS[] =
{
    { L"Burning Light",  0x73ace + (18 * 0x20), 0x73aee + (18 * 0x20), indexCPS2_CapAm },
    { L"Burning Dark",   0x73ace + (19 * 0x20), 0x73aee + (19 * 0x20), indexCPS2_CapAm },
    { L"Shocked Light",  0x73ace + (20 * 0x20), 0x73aee + (20 * 0x20), indexCPS2_CapAm },
    { L"Shocked Dark",   0x73ace + (21 * 0x20), 0x73aee + (21 * 0x20), indexCPS2_CapAm },
    { L"Dark Burn Light",0x73ace + (22 * 0x20), 0x73aee + (22 * 0x20), indexCPS2_CapAm },
    { L"Dark Burn Dark", 0x73ace + (23 * 0x20), 0x73aee + (23 * 0x20), indexCPS2_CapAm },
};

const sGame_PaletteDataset MSHVSF_A_HULK_STATUS[] =
{
    { L"Burning Light",  0x73ace + (30 * 0x20), 0x73aee + (30 * 0x20), indexCPS2_Hulk },
    { L"Burning Dark",   0x73ace + (31 * 0x20), 0x73aee + (31 * 0x20), indexCPS2_Hulk },
    { L"Shocked Light",  0x73ace + (32 * 0x20), 0x73aee + (32 * 0x20), indexCPS2_Hulk },
    { L"Shocked Dark",   0x73ace + (33 * 0x20), 0x73aee + (33 * 0x20), indexCPS2_Hulk },
    { L"Dark Burn Light",0x73ace + (34 * 0x20), 0x73aee + (34 * 0x20), indexCPS2_Hulk },
    { L"Dark Burn Dark", 0x73ace + (35 * 0x20), 0x73aee + (35 * 0x20), indexCPS2_Hulk },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_STATUS[] =
{
    { L"Burning Light",  0x73ace + (36 * 0x20), 0x73aee + (36 * 0x20), indexCPS2_Wolverine },
    { L"Burning Dark",   0x73ace + (37 * 0x20), 0x73aee + (37 * 0x20), indexCPS2_Wolverine },
    { L"Shocked Light",  0x73ace + (38 * 0x20), 0x73aee + (38 * 0x20), indexCPS2_Wolverine },
    { L"Shocked Dark",   0x73ace + (39 * 0x20), 0x73aee + (39 * 0x20), indexCPS2_Wolverine },
    { L"Dark Burn Light",0x73ace + (40 * 0x20), 0x73aee + (40 * 0x20), indexCPS2_Wolverine },
    { L"Dark Burn Dark", 0x73ace + (41 * 0x20), 0x73aee + (41 * 0x20), indexCPS2_Wolverine },
};

const sGame_PaletteDataset MSHVSF_A_SHUMA_STATUS[] =
{
    { L"Burning Light",  0x73ace + (42 * 0x20), 0x73aee + (42 * 0x20), indexCPS2_Shuma },
    { L"Burning Dark",   0x73ace + (43 * 0x20), 0x73aee + (43 * 0x20), indexCPS2_Shuma },
    { L"Shocked Light",  0x73ace + (44 * 0x20), 0x73aee + (44 * 0x20), indexCPS2_Shuma },
    { L"Shocked Dark",   0x73ace + (45 * 0x20), 0x73aee + (45 * 0x20), indexCPS2_Shuma },
    { L"Dark Burn Light",0x73ace + (46 * 0x20), 0x73aee + (46 * 0x20), indexCPS2_Shuma },
    { L"Dark Burn Dark", 0x73ace + (47 * 0x20), 0x73aee + (47 * 0x20), indexCPS2_Shuma },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_STATUS[] =
{
    { L"Burning Light",  0x73ace + (48 * 0x20), 0x73aee + (48 * 0x20), indexCPS2_OmegaRed },
    { L"Burning Dark",   0x73ace + (49 * 0x20), 0x73aee + (49 * 0x20), indexCPS2_OmegaRed },
    { L"Shocked Light",  0x73ace + (50 * 0x20), 0x73aee + (50 * 0x20), indexCPS2_OmegaRed },
    { L"Shocked Dark",   0x73ace + (51 * 0x20), 0x73aee + (51 * 0x20), indexCPS2_OmegaRed },
    { L"Dark Burn Light",0x73ace + (52 * 0x20), 0x73aee + (52 * 0x20), indexCPS2_OmegaRed },
    { L"Dark Burn Dark", 0x73ace + (53 * 0x20), 0x73aee + (53 * 0x20), indexCPS2_OmegaRed },
};

const sGame_PaletteDataset MSHVSF_A_SPIDEY_STATUS[] =
{
    { L"Burning Light",  0x73ace + (54 * 0x20), 0x73aee + (54 * 0x20), indexCPS2_Spidey },
    { L"Burning Dark",   0x73ace + (55 * 0x20), 0x73aee + (55 * 0x20), indexCPS2_Spidey },
    { L"Shocked Light",  0x73ace + (56 * 0x20), 0x73aee + (56 * 0x20), indexCPS2_Spidey },
    { L"Shocked Dark",   0x73ace + (57 * 0x20), 0x73aee + (57 * 0x20), indexCPS2_Spidey },
    { L"Dark Burn Light",0x73ace + (58 * 0x20), 0x73aee + (58 * 0x20), indexCPS2_Spidey },
    { L"Dark Burn Dark", 0x73ace + (59 * 0x20), 0x73aee + (59 * 0x20), indexCPS2_Spidey },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_STATUS[] =
{
    { L"Burning Light",  0x73ace + (60 * 0x20), 0x73aee + (60 * 0x20), indexCPS2_Blackheart },
    { L"Burning Dark",   0x73ace + (61 * 0x20), 0x73aee + (61 * 0x20), indexCPS2_Blackheart },
    { L"Shocked Light",  0x73ace + (62 * 0x20), 0x73aee + (62 * 0x20), indexCPS2_Blackheart },
    { L"Shocked Dark",   0x73ace + (63 * 0x20), 0x73aee + (63 * 0x20), indexCPS2_Blackheart },
    { L"Dark Burn Light",0x73ace + (64 * 0x20), 0x73aee + (64 * 0x20), indexCPS2_Blackheart },
    { L"Dark Burn Dark", 0x73ace + (65 * 0x20), 0x73aee + (65 * 0x20), indexCPS2_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_RYU_STATUS[] =
{
    { L"Burning Light",  0x73ace + (66 * 0x20), 0x73aee + (66 * 0x20), indexCPS2_Ryu },
    { L"Burning Dark",   0x73ace + (67 * 0x20), 0x73aee + (67 * 0x20), indexCPS2_Ryu },
    { L"Shocked Light",  0x73ace + (68 * 0x20), 0x73aee + (68 * 0x20), indexCPS2_Ryu },
    { L"Shocked Dark",   0x73ace + (69 * 0x20), 0x73aee + (69 * 0x20), indexCPS2_Ryu },
    { L"Dark Burn Light",0x73ace + (70 * 0x20), 0x73aee + (70 * 0x20), indexCPS2_Ryu },
    { L"Dark Burn Dark", 0x73ace + (71 * 0x20), 0x73aee + (71 * 0x20), indexCPS2_Ryu },
};

const sGame_PaletteDataset MSHVSF_A_KEN_STATUS[] =
{
    { L"Burning Light",  0x73ace + (72 * 0x20), 0x73aee + (72 * 0x20), indexCPS2_Ken },
    { L"Burning Dark",   0x73ace + (73 * 0x20), 0x73aee + (73 * 0x20), indexCPS2_Ken },
    { L"Shocked Light",  0x73ace + (74 * 0x20), 0x73aee + (74 * 0x20), indexCPS2_Ken },
    { L"Shocked Dark",   0x73ace + (75 * 0x20), 0x73aee + (75 * 0x20), indexCPS2_Ken },
    { L"Dark Burn Light",0x73ace + (76 * 0x20), 0x73aee + (76 * 0x20), indexCPS2_Ken },
    { L"Dark Burn Dark", 0x73ace + (77 * 0x20), 0x73aee + (77 * 0x20), indexCPS2_Ken },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_STATUS[] =
{
    { L"Burning Light",  0x73ace + (78 * 0x20), 0x73aee + (78 * 0x20), indexCPS2_ChunLi },
    { L"Burning Dark",   0x73ace + (79 * 0x20), 0x73aee + (79 * 0x20), indexCPS2_ChunLi },
    { L"Shocked Light",  0x73ace + (80 * 0x20), 0x73aee + (80 * 0x20), indexCPS2_ChunLi },
    { L"Shocked Dark",   0x73ace + (81 * 0x20), 0x73aee + (81 * 0x20), indexCPS2_ChunLi },
    { L"Dark Burn Light",0x73ace + (82 * 0x20), 0x73aee + (82 * 0x20), indexCPS2_ChunLi },
    { L"Dark Burn Dark", 0x73ace + (83 * 0x20), 0x73aee + (83 * 0x20), indexCPS2_ChunLi },
    { L"Kinetic 1",      0x73ace + (84 * 0x20), 0x73aee + (84 * 0x20), indexCPS2_ChunLi },
    { L"Kinetic 2",      0x73ace + (85 * 0x20), 0x73aee + (85 * 0x20), indexCPS2_ChunLi },
    { L"Kinetic 3",      0x73ace + (86 * 0x20), 0x73aee + (86 * 0x20), indexCPS2_ChunLi },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_STATUS[] =
{
    { L"Burning Light",  0x73ace + (87 * 0x20), 0x73aee + (87 * 0x20), indexCPS2_Dhalsim },
    { L"Burning Dark",   0x73ace + (88 * 0x20), 0x73aee + (88 * 0x20), indexCPS2_Dhalsim },
    { L"Shocked Light",  0x73ace + (89 * 0x20), 0x73aee + (89 * 0x20), indexCPS2_Dhalsim },
    { L"Shocked Dark",   0x73ace + (90 * 0x20), 0x73aee + (90 * 0x20), indexCPS2_Dhalsim },
    { L"Dark Burn Light",0x73ace + (91 * 0x20), 0x73aee + (91 * 0x20), indexCPS2_Dhalsim },
    { L"Dark Burn Dark", 0x73ace + (92 * 0x20), 0x73aee + (92 * 0x20), indexCPS2_Dhalsim },
    { L"Kinetic 1",      0x73ace + (93 * 0x20), 0x73aee + (93 * 0x20), indexCPS2_Dhalsim },
    { L"Kinetic 2",      0x73ace + (94 * 0x20), 0x73aee + (94 * 0x20), indexCPS2_Dhalsim },
    { L"Kinetic 3",      0x73ace + (95 * 0x20), 0x73aee + (95 * 0x20), indexCPS2_Dhalsim },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_STATUS[] =
{
    { L"Burning Light",  0x73ace + (96 * 0x20), 0x73aee + (96 * 0x20), indexCPS2_Zangief },
    { L"Burning Dark",   0x73ace + (97 * 0x20), 0x73aee + (97 * 0x20), indexCPS2_Zangief },
    { L"Shocked Light",  0x73ace + (98 * 0x20), 0x73aee + (98 * 0x20), indexCPS2_Zangief },
    { L"Shocked Dark",   0x73ace + (99 * 0x20), 0x73aee + (99 * 0x20), indexCPS2_Zangief },
    { L"Dark Burn Light",0x73ace + (100 * 0x20), 0x73aee + (100 * 0x20), indexCPS2_Zangief },
    { L"Dark Burn Dark", 0x73ace + (101 * 0x20), 0x73aee + (101 * 0x20), indexCPS2_Zangief },
    { L"Kinetic 1",      0x73ace + (102 * 0x20), 0x73aee + (102 * 0x20), indexCPS2_Zangief },
    { L"Kinetic 2",      0x73ace + (103 * 0x20), 0x73aee + (103 * 0x20), indexCPS2_Zangief },
    { L"Kinetic 3",      0x73ace + (104 * 0x20), 0x73aee + (104 * 0x20), indexCPS2_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_BISON_STATUS[] =
{
    { L"Burning Light",  0x73ace + (105 * 0x20), 0x73aee + (105 * 0x20), indexCPS2_Bison },
    { L"Burning Dark",   0x73ace + (106 * 0x20), 0x73aee + (106 * 0x20), indexCPS2_Bison },
    { L"Shocked Light",  0x73ace + (107 * 0x20), 0x73aee + (107 * 0x20), indexCPS2_Bison },
    { L"Burning Light",  0x73ace + (108 * 0x20), 0x73aee + (108 * 0x20), indexCPS2_Bison },
    { L"Burning Dark",   0x73ace + (109 * 0x20), 0x73aee + (109 * 0x20), indexCPS2_Bison },
    { L"Dark Burn Dark", 0x73ace + (110 * 0x20), 0x73aee + (110 * 0x20), indexCPS2_Bison },
    { L"Kinetic 1",      0x73ace + (111 * 0x20), 0x73aee + (111 * 0x20), indexCPS2_Bison },
    { L"Kinetic 2",      0x73ace + (112 * 0x20), 0x73aee + (112 * 0x20), indexCPS2_Bison },
    { L"Kinetic 3",      0x73ace + (113 * 0x20), 0x73aee + (113 * 0x20), indexCPS2_Bison },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_STATUS[] =
{
    { L"Burning Light",  0x73ace + (114 * 0x20), 0x73aee + (114 * 0x20), indexCPS2_Akuma },
    { L"Burning Dark",   0x73ace + (115 * 0x20), 0x73aee + (115 * 0x20), indexCPS2_Akuma },
    { L"Shocked Light",  0x73ace + (116 * 0x20), 0x73aee + (116 * 0x20), indexCPS2_Akuma },
    { L"Shocked Dark",   0x73ace + (117 * 0x20), 0x73aee + (117 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Light",0x73ace + (118 * 0x20), 0x73aee + (118 * 0x20), indexCPS2_Akuma },
    { L"Dark Burn Dark", 0x73ace + (119 * 0x20), 0x73aee + (119 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 1",      0x73ace + (120 * 0x20), 0x73aee + (120 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 2",      0x73ace + (121 * 0x20), 0x73aee + (121 * 0x20), indexCPS2_Akuma },
    { L"Kinetic 3",      0x73ace + (122 * 0x20), 0x73aee + (122 * 0x20), indexCPS2_Akuma },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_STATUS[] =
{
    { L"Burning Light",  0x73ace + (123 * 0x20), 0x73aee + (123 * 0x20), indexCPS2_Sakura },
    { L"Burning Dark",   0x73ace + (124 * 0x20), 0x73aee + (124 * 0x20), indexCPS2_Sakura },
    { L"Shocked Light",  0x73ace + (125 * 0x20), 0x73aee + (125 * 0x20), indexCPS2_Sakura },
    { L"Shocked Dark",   0x73ace + (126 * 0x20), 0x73aee + (126 * 0x20), indexCPS2_Sakura },
    { L"Dark Burn Light",0x73ace + (127 * 0x20), 0x73aee + (127 * 0x20), indexCPS2_Sakura },
    { L"Dark Burn Dark", 0x73ace + (128 * 0x20), 0x73aee + (128 * 0x20), indexCPS2_Sakura },
    { L"Kinetic 1",      0x73ace + (129 * 0x20), 0x73aee + (129 * 0x20), indexCPS2_Sakura },
    { L"Kinetic 2",      0x73ace + (130 * 0x20), 0x73aee + (130 * 0x20), indexCPS2_Sakura },
    { L"Kinetic 3",      0x73ace + (131 * 0x20), 0x73aee + (131 * 0x20), indexCPS2_Sakura },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_STATUS[] =
{
    { L"Burning Light",  0x73ace + (132 * 0x20), 0x73aee + (132 * 0x20), indexCPS2_Norimaro },
    { L"Burning Dark",   0x73ace + (133 * 0x20), 0x73aee + (133 * 0x20), indexCPS2_Norimaro },
    { L"Shocked Light",  0x73ace + (134 * 0x20), 0x73aee + (134 * 0x20), indexCPS2_Norimaro },
    { L"Shocked Dark",   0x73ace + (135 * 0x20), 0x73aee + (135 * 0x20), indexCPS2_Norimaro },
    { L"Dark Burn Light",0x73ace + (136 * 0x20), 0x73aee + (136 * 0x20), indexCPS2_Norimaro },
    { L"Dark Burn Dark", 0x73ace + (137 * 0x20), 0x73aee + (137 * 0x20), indexCPS2_Norimaro },
};

const sGame_PaletteDataset MSHVSF_A_CSI_PALETTES[] =
{
    { L"Zangief CSI", 0x7990E, 0x7992E, indexCPS2_Zangief, 0x30 },
    { L"M. Bison CSI", 0x7992E, 0x7994E, indexCPS2_Bison, 0x30 },
    { L"Dhalsim CSI", 0x798EE, 0x7990E, indexCPS2_Dhalsim, 0x30 },
    { L"Sakura CSI", 0x7996E, 0x7998E, indexCPS2_Sakura, 0x30 },
    { L"Akuma CSI", 0x7994E, 0x7996E, indexCPS2_Akuma, 0x30 },
    { L"Chun-Li CSI", 0x798CE, 0x798EE, indexCPS2_ChunLi, 0x30 },
    { L"Cyclops CSI", 0x7978E, 0x797AE, indexCPS2_Cyclops, 0x30 },
    { L"Spider-Man CSI", 0x7984E, 0x7986E, indexCPS2_Spidey, 0x30 },
    { L"Captain America CSI", 0x797AE, 0x797CE, indexCPS2_CapAm, 0x30 },
    { L"Ken CSI", 0x798AE, 0x798CE, indexCPS2_Ken, 0x30 },
    { L"Ryu CSI", 0x7988E, 0x798AE, indexCPS2_Ryu, 0x30 },
    { L"Dan CSI", 0x799AE, 0x799CE, indexCPS2_Dan, 0x30 },
    { L"Shuma-Gorath CSI", 0x7980E, 0x7982E, indexCPS2_Shuma, 0x30 },
    { L"Wolverine CSI", 0x797EE, 0x7980E, indexCPS2_Wolverine, 0x30 },
    { L"Hulk CSI", 0x797CE, 0x797EE, indexCPS2_Hulk, 0x30 },
    { L"Blackheart CSI", 0x7986E, 0x7988E, indexCPS2_Blackheart, 0x30 },
    { L"Norimaro CSI", 0x7998E, 0x799AE, indexCPS2_Norimaro, 0x30 },
    { L"Omega Red CSI", 0x7982E, 0x7984E, indexCPS2_OmegaRed, 0x30 },
};

const sGame_PaletteDataset MSHVSF_A_SSP_PALETTES[] =
{
    // P1 to P2 SSP is diff 0x10E0
    { L"A. Spider-Man P1 SSP", 0x7DA4E, 0x7DA8E, indexCPS2_Spidey, 0x31 },
    { L"A. Spider-Man P2 SSP", 0x7EB2E, 0x7EB6E, indexCPS2_Spidey, 0x31 },
    { L"Akuma P1 SSP", 0x7D40E, 0x7D48E, indexCPS2_Akuma, 0x31 },
    { L"Akuma P2 SSP", 0x7E4EE, 0x7E56E, indexCPS2_Akuma, 0x31 },
    { L"Blackheart P1 SSP", 0x7CFAE, 0x7D02E, indexCPS2_Blackheart, 0x31 },
    { L"Blackheart P2 SSP", 0x7E08E, 0x7E10E, indexCPS2_Blackheart, 0x31 },
    { L"Captain America P1 SSP", 0x7CBEE, 0x7CC8E, indexCPS2_CapAm, 0x31 },
    { L"Captain America P2 SSP", 0x7DCCE, 0x7DD6E, indexCPS2_CapAm, 0x31 },
    { L"Chun-Li P1 SSP", 0x7D18E, 0x7D20E, indexCPS2_ChunLi, 0x31 },
    { L"Chun-Li P2 SSP", 0x7E26E, 0x7E2EE, indexCPS2_ChunLi, 0x31 },
    { L"Cyber Akuma P1 SSP", 0x7D68E, 0x7D70E, indexCPS2_CyberAkuma, 0x31 },
    { L"Cyber Akuma P2 SSP", 0x7E76E, 0x7E7EE, indexCPS2_CyberAkuma, 0x31 },
    { L"Cyclops P1 SSP", 0x7CB4E, 0x7CBEE, indexCPS2_Cyclops, 0x31 },
    { L"Cyclops P2 SSP", 0x7DC2E, 0x7DCCE, indexCPS2_Cyclops, 0x31 },
    { L"Dan P1 SSP", 0x7D5EE, 0x7D66E, indexCPS2_Dan, 0x31 },
    { L"Dan P2 SSP", 0x7E6CE, 0x7E74E, indexCPS2_Dan, 0x31 },
    { L"Dark Sakura P1 SSP", 0x7D7CE, 0x7D84E, indexCPS2_Sakura, 0x31 },
    { L"Dark Sakura P2 SSP", 0x7E8AE, 0x7E92E, indexCPS2_Sakura, 0x31 },
    { L"Dhalsim P1 SSP", 0x7D22E, 0x7D2AE, indexCPS2_Dhalsim, 0x31 },
    { L"Dhalsim P2 SSP", 0x7E30E, 0x7E38E, indexCPS2_Dhalsim, 0x31 },
    { L"Hulk P1 SSP", 0x7CC8E, 0x7CCEE, indexCPS2_Hulk, 0x31 },
    { L"Hulk P2 SSP", 0x7DD6E, 0x7DDCE, indexCPS2_Hulk, 0x31 },
    { L"Ken P1 SSP", 0x7D0EE, 0x7D16E, indexCPS2_Ken, 0x31 },
    { L"Ken P2 SSP", 0x7E1CE, 0x7E24E, indexCPS2_Ken, 0x31 },
    { L"M. Bison P1 SSP", 0x7D36E, 0x7D3EE, indexCPS2_Bison, 0x31 },
    { L"M. Bison P2 SSP", 0x7E44E, 0x7E4CE, indexCPS2_Bison, 0x31 },
    { L"Mech Zangief P1 SSP", 0x7D72E, 0x7D78E, indexCPS2_Zangief, 0x31 },
    { L"Mech Zangief P2 SSP", 0x7E80E, 0x7E86E, indexCPS2_Zangief, 0x31 },
    { L"Mephisto P1 SSP", 0x7D9AE, 0x7DA2E, indexCPS2_Blackheart, 0x31 },
    { L"Mephisto P2 SSP", 0x7EA8E, 0x7EB0E, indexCPS2_Blackheart, 0x31 },
    { L"Norimaro P1 SSP", 0x7D54E, 0x7D5EE, indexCPS2_Norimaro, 0x31 },
    { L"Norimaro P2 SSP", 0x7E62E, 0x7E6CE, indexCPS2_Norimaro, 0x31 },
    { L"Omega Red P1 SSP", 0x7CE6E, 0x7CEEE, indexCPS2_OmegaRed, 0x31 },
    { L"Omega Red P2 SSP", 0x7DF4E, 0x7DFCE, indexCPS2_OmegaRed, 0x31 },
    { L"Ryu P1 SSP", 0x7D04E, 0x7D0CE, indexCPS2_Ryu, 0x31 },
    { L"Ryu P2 SSP", 0x7E12E, 0x7E1AE, indexCPS2_Ryu, 0x31 },
    { L"Sakura P1 SSP", 0x7D4AE, 0x7D52E, indexCPS2_Sakura, 0x31 },
    { L"Sakura P2 SSP", 0x7E58E, 0x7E60E, indexCPS2_Sakura, 0x31 },
    { L"Shadow P1 SSP", 0x7D86E, 0x7D90E, indexCPS2_Charlie, 0x31 },
    { L"Shadow P2 SSP", 0x7E94E, 0x7E9EE, indexCPS2_Charlie, 0x31 },
    { L"Shuma-Gorath P1 SSP", 0x7CDCE, 0x7CE2E, indexCPS2_Shuma, 0x31, },
    { L"Shuma-Gorath P2 SSP", 0x7DEAE, 0x7DF0E, indexCPS2_Shuma, 0x31 },
    { L"Spider-Man P1 SSP", 0x7CF0E, 0x7CF4E, indexCPS2_Spidey, 0x31 },
    { L"Spider-Man P2 SSP", 0x7DFEE, 0x7E02E, indexCPS2_Spidey, 0x31 },
    { L"US Agent P1 SSP", 0x7D90E, 0x7D9AE, indexCPS2_CapAm, 0x31 },
    { L"US Agent P2 SSP", 0x7E9EE, 0x7EA8E, indexCPS2_CapAm, 0x31 },
    { L"Wolverine P1 SSP", 0x7CD2E, 0x7CDAE, indexCPS2_Wolverine, 0x31 },
    { L"Wolverine P2 SSP", 0x7DE0E, 0x7DE8E, indexCPS2_Wolverine, 0x31 },
    { L"Zangief P1 SSP", 0x7D2CE, 0x7D32E, indexCPS2_Zangief, 0x31 },
    { L"Zangief P2 SSP", 0x7E3AE, 0x7E40E, indexCPS2_Zangief, 0x31 },
    { L"Apocalypse P1 SSP", 0x7CAAE, 0x7CB0E, 0x4F, 0x31 },
    { L"Apocalypse P2 SSP", 0x7DB8E, 0x7DBEE, 0x4F, 0x31 },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES[] =
{
    // P1 to P2 VSPs are also a difference of 0x10E0
    { L"A. Spider-Man P1 VSP", 0x7FD4E, 0x7FD8E, indexCPS2_Spidey, indexMSHVSF_VSP },
    { L"Akuma P1 VSP", 0x7F70E, 0x7F78E, indexCPS2_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P1 VSP", 0x7F2AE, 0x7F2EE, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P1 VSP", 0x7EEEE, 0x7EF8E, indexCPS2_CapAm, indexMSHVSF_VSP },
    { L"Captain America P2 VSP Part 1", 0x7FFCE, 0x80000 },
    { L"Chun-Li P1 VSP", 0x7F48E, 0x7F4EE, indexCPS2_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P1 VSP", 0x7F98E, 0x7FA2E, indexCPS2_CyberAkuma, indexMSHVSF_VSP },
    { L"Cyclops P1 VSP", 0x7EE4E, 0x7EEEE, indexCPS2_Cyclops, indexMSHVSF_VSP },
    { L"Cyclops P2 VSP", 0x7FF2E, 0x7FFCE, indexCPS2_Cyclops, indexMSHVSF_VSP },
    { L"Dan P1 VSP", 0x7F8EE, 0x7F98E, indexCPS2_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P1 VSP", 0x7FACE, 0x7FB6E, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P1 VSP", 0x7F52E, 0x7F5CE, indexCPS2_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P1 VSP", 0x7EF8E, 0x7EFEE, indexCPS2_Hulk, indexMSHVSF_VSP },
    { L"Ken P1 VSP", 0x7F3EE, 0x7F48E, indexCPS2_Ken, indexMSHVSF_VSP },
    { L"Omega Red P1 VSP", 0x7F16E, 0x7F20E, indexCPS2_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P1 VSP", 0x7F66E, 0x7F70E, indexCPS2_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P1 VSP", 0x7FA2E, 0x7FACE, indexCPS2_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P1 VSP", 0x7FCAE, 0x7FCEE, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P1 VSP", 0x7F84E, 0x7F8EE, indexCPS2_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P1 VSP", 0x7F34E, 0x7F3EE, indexCPS2_Ryu, indexMSHVSF_VSP },
    { L"Sakura P1 VSP", 0x7F7AE, 0x7F84E, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Shadow P1 VSP", 0x7FB6E, 0x7FC0E, indexCPS2_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P1 VSP", 0x7F0CE, 0x7F14E, indexCPS2_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P1 VSP", 0x7F20E, 0x7F24E, indexCPS2_Spidey, indexMSHVSF_VSP },
    { L"U.S Agent P1 VSP", 0x7FC0E, 0x7FCAE, indexCPS2_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P1 VSP", 0x7F02E, 0x7F0CE, indexCPS2_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P1 VSP", 0x7F5CE, 0x7F66E, indexCPS2_Zangief, indexMSHVSF_VSP },
    { L"Apocalypse P1 VSP", 0x7EDAE, 0x7EE4E, indexCPS2_Apocalypse, indexMSHVSF_VSP },
    { L"Apocalypse P2 VSP", 0x7FE8E, 0x7FF2E, indexCPS2_Apocalypse, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES_7B[] =
{
    { L"A. Spider-Man P2 VSP", 0x0000e2e, 0x0000e6e, indexCPS2_Spidey, indexMSHVSF_VSP  },
    { L"Akuma P2 VSP", 0x00007ee, 0x000086e, indexCPS2_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P2 VSP", 0x000038e, 0x00003ce, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P2 VSP Part 2", 0x0000000, 0x000006e },
    { L"Chun-Li P2 VSP", 0x000056e, 0x00005ce, indexCPS2_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P2 VSP", 0xA6E, 0xB0E, indexCPS2_CyberAkuma, indexMSHVSF_VSP },
    { L"Dan P2 VSP", 0x00009ce, 0x0000a6e, indexCPS2_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P2 VSP", 0x0000bae, 0x0000c4e, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P2 VSP", 0x000060e, 0x00006ae, indexCPS2_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P2 VSP", 0x000006e, 0x00000ce, indexCPS2_Hulk, indexMSHVSF_VSP },
    { L"Ken P2 VSP", 0x00004ce, 0x000056e, indexCPS2_Ken, indexMSHVSF_VSP },
    { L"Omega Red P2 VSP", 0x000024e, 0x00002ee, indexCPS2_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P2 VSP", 0x000074e, 0x00007ee, indexCPS2_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P2 VSP", 0x0000b0e, 0x0000bae, indexCPS2_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P2 VSP", 0x0000d8e, 0x0000dce, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P2 VSP", 0x000092e, 0x00009ce, indexCPS2_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P2 VSP", 0x000042e, 0x00004ce, indexCPS2_Ryu, indexMSHVSF_VSP },
    { L"Sakura P2 VSP", 0x000088e, 0x000092e, indexCPS2_Sakura, indexMSHVSF_VSP },
    { L"Shadow P2 VSP", 0x00C4E, 0x00CEE, indexCPS2_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P2 VSP", 0x00001ae, 0x000022e, indexCPS2_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P2 VSP", 0x00002ee, 0x000032e, indexCPS2_Spidey, indexMSHVSF_VSP },
    { L"US Agent P2 VSP", 0x0000cee, 0x0000d8e, indexCPS2_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P2 VSP", 0x000010e, 0x00001ae, indexCPS2_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P2 VSP", 0x00006ae, 0x000074e, indexCPS2_Zangief, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_RIVER_PALETTES[] =
{
    { L"Background Sky",            0x56EF4, 0x570F4, indexCPS2_MSHVSFAssets, 0x00, &pairFullyLinkedNode },
    { L"Background Reflection",     0x570F4, 0x572F4, indexCPS2_MSHVSFAssets, 0x01 },
    { L"Ridge Trees",               0x5F554, 0x5F654, indexCPS2_MSHVSFAssets, 0x02 },
    { L"Bridge",                    0x5A2F4, 0x5A354, indexCPS2_MSHVSFAssets, 0x03 },
    { L"People Crater Water Posts", 0x7846E, 0x7854E, indexCPS2_MSHVSFAssets, 0x04 },
    { L"Unknown",                   0x5A4F4, 0x5A6F4 },
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
    { L"Character Select Icons",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSI_PALETTES,    ARRAYSIZE(MSHVSF_A_CSI_PALETTES) },
    { L"Super Screen Portraits",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SSP_PALETTES,    ARRAYSIZE(MSHVSF_A_SSP_PALETTES) },
    { L"Victory Screen Portraits",   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION_7B[] =
{
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES_7B,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES_7B) },
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
    { L"Akuma",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_AKUMA_COLLECTION,               ARRAYSIZE(MSHVSF_A_AKUMA_COLLECTION) },
    { L"Armored Spider-Man",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION) },
    { L"Blackheart/Mephisto", DESC_NODETYPE_TREE, (void*)MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION) },
    { L"Captain America",     DESC_NODETYPE_TREE, (void*)MSHVSF_A_CAPTAIN_AMERICA_COLLECTION,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_COLLECTION) },
    { L"Chun-Li",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_CHUNLI_COLLECTION,              ARRAYSIZE(MSHVSF_A_CHUNLI_COLLECTION) },
    { L"Cyber Akuma",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYBER_AKUMA_COLLECTION,         ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_COLLECTION) },
    { L"Cyclops",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYCLOPS_COLLECTION,             ARRAYSIZE(MSHVSF_A_CYCLOPS_COLLECTION) },
    { L"Dan",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_DAN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_DAN_COLLECTION) },
    { L"Dark Sakura",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_DARK_SAKURA_COLLECTION,         ARRAYSIZE(MSHVSF_A_DARK_SAKURA_COLLECTION) },
    { L"Dhalsim",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_DHALSIM_COLLECTION,             ARRAYSIZE(MSHVSF_A_DHALSIM_COLLECTION) },
    { L"Hulk",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_HULK_COLLECTION,                ARRAYSIZE(MSHVSF_A_HULK_COLLECTION) },
    { L"Ken",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_KEN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_KEN_COLLECTION) },
    { L"M. Bison",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_MBIPSON_COLLECTION,             ARRAYSIZE(MSHVSF_A_MBIPSON_COLLECTION) },
    { L"Mech-Zangief",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_MECH_ZANGIEF_COLLECTION,        ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_COLLECTION) },
    { L"Norimaro",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_NORIMARO_COLLECTION,            ARRAYSIZE(MSHVSF_A_NORIMARO_COLLECTION) },
    { L"Omega Red",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_OMEGARED_COLLECTION,            ARRAYSIZE(MSHVSF_A_OMEGARED_COLLECTION) },
    { L"Ryu",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_RYU_COLLECTION,                 ARRAYSIZE(MSHVSF_A_RYU_COLLECTION) },
    { L"Sakura",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_SAKURA_COLLECTION,              ARRAYSIZE(MSHVSF_A_SAKURA_COLLECTION) },
    { L"Shadow",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHADOW_COLLECTION,              ARRAYSIZE(MSHVSF_A_SHADOW_COLLECTION) },
    { L"Shuma-Gorath",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHUMAGORATH_COLLECTION,         ARRAYSIZE(MSHVSF_A_SHUMAGORATH_COLLECTION) },
    { L"Spider-Man",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_SPIDERMAN_COLLECTION,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_COLLECTION) },
    { L"U.S. Agent",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_USAGENT_COLLECTION,             ARRAYSIZE(MSHVSF_A_USAGENT_COLLECTION) },
    { L"Wolverine",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_WOLVERINE_COLLECTION,           ARRAYSIZE(MSHVSF_A_WOLVERINE_COLLECTION) },
    { L"Zangief",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_ZANGIEF_COLLECTION,             ARRAYSIZE(MSHVSF_A_ZANGIEF_COLLECTION) },
    { L"Apocalypse",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_APOCALYPSE_COLLECTION,          ARRAYSIZE(MSHVSF_A_APOCALYPSE_COLLECTION) },
    { L"Status Effects",      DESC_NODETYPE_TREE, (void*)MSHVSF_A_STATUS_COLLECTION,              ARRAYSIZE(MSHVSF_A_STATUS_COLLECTION) },
    { L"Icons and Portraits",    DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION,               ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION) },
    { L"Stages",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGE_COLLECTION,               ARRAYSIZE(MSHVSF_A_STAGE_COLLECTION) },
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
    { L"Bonus (Portraits)",   DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION_7B,            ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION_7B) },
};

// We extend this array with data groveled from the mshvsfe.txt extensible extras file, if any.
const stExtraDef MSHVSF_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

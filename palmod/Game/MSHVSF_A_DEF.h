#pragma once

enum Supported_MSHVSF_6A_PaletteListIndex
{
    index_MSHVSF_ArmoredSpiderMan,
    index_MSHVSF_Blackheart_Mephisto,
    index_MSHVSF_CaptainAmerica,
    index_MSHVSF_ChunLi,
    index_MSHVSF_CyberGouki,
    index_MSHVSF_Cyclops,
    index_MSHVSF_Dan,
    index_MSHVSF_DarkSakura,
    index_MSHVSF_Dhalsim,
    index_MSHVSF_Gouki,
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
    index_MSHVSF_Extras,
    index_MSHVSF_6A_Last
};

enum Supported_MSHVSF_7B_PaletteListIndex
{
    index_MSHVSF_7B_Extras,
    index_MSHVSF_7B_Last
};

constexpr auto MSHVSF_A_NUM_IND_6A = index_MSHVSF_6A_Last;
constexpr auto MSHVSF_A_NUM_IND_7B = index_MSHVSF_7B_Last;

#define MSHVSF_A_EXTRALOC_6A MSHVSF_A_NUM_IND_6A
#define MSHVSF_A_EXTRALOC_7B MSHVSF_A_NUM_IND_7B

const sGame_PaletteDataset MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x000000, 0x000020, 0x4F },
};
const sGame_PaletteDataset MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x000000, 0x000020, 0x4F },
};
const sGame_PaletteDataset MSHVSF_A_APOCALYPSE_PALETTES_SHARED[] =
{
    { "Giant Arm", 0x71E6E, 0x71E8E },
    { "Giant Head", 0x71E8E, 0x71EAE },
    { "Giant Body 1", 0x59EF4, 0x59F14 },
    { "Giant Body 2", 0x59F14, 0x59F34 },
    { "Giant Body 3", 0x71EAE, 0x71ECE },
    { "Apocalypse Drone", 0x71F2E, 0x71F4E },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7340E, 0x7342E, 0x0C },
    { "Extra 01: webs",          0x7342E, 0x7344E, 0x0C, 2 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x7346E, 0x7348E, 0x0C },
    { "Extra 02: webs",         0x7348E, 0x734AE, 0x0C, 2 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x7258E, 0x725AE, 0x35 },
};
const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x725EE, 0x7260E, 0x35 },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7334E, 0x7336E, 0x35 },
};
const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x733AE, 0x733CE, 0x35 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED[] =
{
    //{ "P1 Extras 1?", 0x76BEE, 0x76C0E, }, // doesn't match mvc2 anything bugbug
    { "P1 HP/HK Demons", 0x769CE, 0x769EE, 0x35, 0x02 },
    { "Blackheart P1 HP/HK Demons (hurt)", 0x725CE, 0x725EE, 0x35, 0x02 },
    { "Mephisto P1 HP/HK Demons (hurt)", 0x7338E, 0x733AE, 0x35, 0x02 },
    { "P2 HP/HK Demons", 0x76B4E, 0x76B6E, 0x35, 0x02 },
    { "Blackheart P2 HP/HK Demons (hurt)", 0x7262E, 0x7264E, 0x35, 0x02 },
    { "Mephisto P2 HP/HK Demons (hurt)", 0x733EE, 0x7340E, 0x35, 0x02 },
    { "HCF+P Dark Thunder", 0x769EE, 0x76A0E },
    { "HCB+LP (Thunder Inferno)", 0x76A0E, 0x76A2E },
    { "HCB+MP (Ice Inferno)", 0x76A2E, 0x76A4E },
    { "HCB+HP (Flame Inferno)", 0x76A4E, 0x76A6E },
    { "Armageddon Meteors (QCF+3P)", 0x76A8E, 0x76AAE },
    { "Heart of Darkness (QCF+3K)", 0x76BAE, 0x76BCE },
    { "j.MP Lightning (All)", 0x76BCE, 0x76BEE },
    { "MP/HP Throw (Ground)", 0x76AAE, 0x76ACE }, 
};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",           0x7210E, 0x7212E, 0x0B, 0, true },
    { "P1 Shield",                  0x7212E, 0x7214E, 0x0B, 1 },
    { "P1 Charging Star",           0x7214E, 0x7216E, 0x0B, 2 },

};
const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",            0x7216E, 0x7218E, 0x0B, 0, true },
    { "P2 Shield",                  0x7218E, 0x721AE, 0x0B, 1 },
    { "P2 Charging Star",           0x721AE, 0x721CE, 0x0B, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",    0x727CE, 0x727EE, 0x1B },
    { "P1 Extras 1", 0x7280E, 0x7282E, 0x1B, 1 },
};
const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",     0x7282E, 0x7284E,  0x1B },
    { "P2 Extras 1", 0x7284E, 0x7286E, 0x1B, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_GOUKI_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)", 0x72ECE, 0x72EEE, 0x1E },
    { "P1 Hadouken 1 Tatsu Flames", 0x72EEE, 0x72F0E, 0x1E, 1 },
    { "P1 Machinery, Hadouken 2", 0x72F0E, 0x72F2E },
};
const sGame_PaletteDataset MSHVSF_A_CYBER_GOUKI_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x72F2E, 0x72F4E, 0x1E },
    { "P2 Hadouken 1 Tatsu Flames", 0x72F4E, 0x72F6E, 0x1E, 1 },
    { "P2 Machinery, Hadouken 2", 0x72F6E, 0x72F8E },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)", 0x71F8E, 0x71FAE,  0x06 },
    { "P1 HK Extra", 0x71FAE, 0x71FCE, 0x06, 1 },
    { "P1 Optic Blast Super", 0x71FCE, 0x71FEE, 0x06, 2 },
    { "P1 Intro 1", 0x7616E, 0x7618E, 0x06 },
    { "P1 Intro 2", 0x7618E, 0x761AE, 0x06 },
    { "P1 Intro 3", 0x761AE, 0x761CE, 0x06 },
    { "P1 Intro 4", 0x761CE, 0x761EE, 0x06 },
    { "P1 Intro 5", 0x761EE, 0x7620E, 0x06 },
    { "P1 Intro 6", 0x7620E, 0x7622E, 0x06 },
    { "P1 Intro 7", 0x7622E, 0x7624E, 0x06 },
    { "P1 Intro 8", 0x7624E, 0x7626E, 0x06 },
    { "P1 Extra Lighting", 0x7640E, 0x7642E, 0x06 },
};
const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x71FEE, 0x7200E, 0x06 },
    { "P2 HK Extra", 0x7200E, 0x7202E, 0x06, 1 },
    { "P2 Optic Blast Super", 0x7202E, 0x7204E, 0x06, 2 },
    { "P2 Intro 1", 0x7626E, 0x7628E, 0x06 },
    { "P2 Intro 2", 0x7628E, 0x762AE, 0x06 },
    { "P2 Intro 3", 0x762AE, 0x762CE, 0x06 },
    { "P2 Intro 4", 0x762CE, 0x762EE, 0x06 },
    { "P2 Intro 5", 0x762EE, 0x7630E, 0x06 },
    { "P2 Intro 6", 0x7630E, 0x7632E, 0x06 },
    { "P2 Intro 7", 0x7632E, 0x7634E, 0x06 },
    { "P2 Intro 8", 0x7634E, 0x7636E, 0x06 },
    { "P2 Extra Lighting 2", 0x7644E, 0x7646E, 0x06 },
};
const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_SHARED[] =
{
    { "P1 Optic Light Extra?", 0x7642E, 0x7644E, 0x06 },
    { "P2 Laser FX", 0x720EE, 0x7210E, 0x06, 3 },
    { "P2 Optic Blast Palette?", 0x7638E, 0x763AE },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x72E0E, 0x72E2E,  0x23 },
    { "P1 gadoken", 0x72E2E, 0x72E4E, 0x23, 1 },
};
const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72E6E, 0x72E8E, 0x23 },
    { "P2 gadoken", 0x72E8E, 0x72EAE, 0x23, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7310E, 0x7312E,  0x22 },
    { "P1 Hadouken", 0x7312E, 0x7314E, 0x27, 1 },
};
const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x7316E, 0x7318E, 0x22 },
    { "P2 Hadouken", 0x7318E, 0x731AE, 0x27, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7288E, 0x728AE,  0x25 },
    { "P1 Extras 1 Flames", 0x728AE, 0x728CE, 0x25, 1 },
    { "P1 Teleport 1", 0x76CCE, 0x76CEE, 0x25, 0xb },
    { "P1 Teleport 2", 0x76CEE, 0x76D0E, 0x25, 0xb },
    { "P1 Teleport 3", 0x76D0E, 0x76D2E, 0x25, 0xb },
    { "P1 Teleport 4", 0x76D2E, 0x76D4E, 0x25, 0xb },
    //{ "P1 Teleport 5", 0x76D4E, 0x76D6E, 0x25, 0xb }, // This is just the all-white frame.

};
const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x728EE, 0x7290E, 0x25 },
    { "P2 Extras 1 Flames",     0x7290E, 0x7292E, 0x25, 1 },
    { "P2 Teleport 1",          0x76D6E, 0x76D8E, 0x25, 0xb },
    { "P2 Teleport 2",          0x76D8E, 0x76DAE, 0x25, 0xb },
    { "P2 Teleport 3",          0x76DAE, 0x76DCE, 0x25, 0xb },
    { "P2 Teleport 4",          0x76DCE, 0x76DEE, 0x25, 0xb },
};

const sGame_PaletteDataset MSHVSF_A_GOUKI_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x72BCE, 0x72BEE, 0x1E },
    { "Extra 01 Hadouken",       0x72BEE, 0x72C0E, 0x1E, 1 },
    { "Extra 02 Shoryuken",      0x72C0E, 0x72C2E, 0x27, 2 },
};
const sGame_PaletteDataset MSHVSF_A_GOUKI_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",         0x72C2E, 0x72C4E, 0x1E },
    { "Extra 01 Hadouken",       0x72C4E, 0x72C6E, 0x1E, 1 },
    { "Extra 02 Shoryuken",      0x72C6E, 0x72C8E, 0x27, 2 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x721CE, 0x721EE, 0x0D },
    { "P1 Extras 1",             0x721EE, 0x7220E, 0x0D, 1 },
    { "P1 Extras 2",             0x7220E, 0x7222E, 0x0D, 2 },
};
const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",         0x7222E, 0x7224E, 0x0D },
    { "P2 Extras 1",             0x7224E, 0x7226E, 0x0D, 1 },
    { "P2 Extras 2 ",            0x7226E, 0x7228E, 0x0D, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7270E, 0x7272E, 0x27 },
    { "P1 Hadouken",             0x7272E, 0x7274E, 0x27, 1 },
    { "P1 Shoryuken",            0x7274E, 0x7276E, 0x27, 2 },
};
const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x7276E, 0x7278E, 0x27 },
    { "P2 Hadouken", 0x7278E, 0x727AE, 0x27, 1 },
    { "P2 Shoryuken", 0x727AE, 0x727CE, 0x27, 2 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x72B0E, 0x72B2E,  0x26 },
    { "P1 Extras 1",            0x72B2E, 0x72B4E, },
    { "P1 Extras 2",            0x72B4E, 0x72B6E, },
    { "P1 Extras 3",            0x7708E, 0x770AE, },
    { "P1 Extras 4",            0x770AE, 0x770CE, },
};
const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72B6E, 0x72B8E, 0x26 },
    { "P2 Extras 1",            0x72B8E, 0x72BAE, },
    { "P2 Extras 2",            0x72BAE, 0x72BCE, },
    { "P2 Extras 3",            0x770CE, 0x770EE, },
    { "P2 Extras 4",            0x770EE, 0x7710E, }, 
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x72F8E, 0x72FAE, 0x01 },
    { "P1 Vodka Fire",          0x72FAE, 0x72FCE, 0x01, 3 },
};
const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72FEE, 0x7300E, 0x01 },
    { "P2 Vodka Fire",          0x7300E, 0x7302E, 0x01, 3 },
};
const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED[] =
{
    { "P1+P2 Super Armor ", 0x7304E, 0x7306E, 0x01 },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x72D4E, 0x72D6E, 0x53 },
    { "P1 Extras 1",            0x7710E, 0x7712E, 0x53 },
    { "P1 Extras 2",            0x7716E, 0x7718E, },
};
const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72DAE, 0x72DCE, 0x53 },
    { "P2 Extras 1",            0x7718E, 0x771AE, 0x53 },
    { "P2 Extras 2",            0x72DCE, 0x72DEE, },
};
const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_EXTRAS[] =
{
    { "P1 Extras 3",            0x72D6E, 0x72D8E, }
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x7240E, 0x7242E, 0x30 },
    { "P1 Intro 1", 0x764AE, 0x764CE, 0x30 }, 
    { "P1 Intro 2", 0x764CE, 0x764EE, 0x30 },
    { "P1 Intro 3", 0x764EE, 0x7650E, 0x30 },
    { "P1 Intro 4", 0x7650E, 0x7652E, 0x30 },
    { "P1 Intro Shockwave 1", 0x7242E, 0x7244E, 0x30, 1 },
    { "P1 Intro Shockwave 2", 0x7244E, 0x7246E, 0x30, 1 },
};
const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",       0x7246E, 0x7248E, 0x30 },
    { "P2 Intro 1", 0x7652E, 0x7654E, 0x30 },
    { "P2 Intro 2", 0x7654E, 0x7656E, 0x30 },
    { "P2 Intro 3", 0x7656E, 0x7658E, 0x30 },
    { "P2 Intro 4", 0x7658E, 0x765AE, 0x30 },
    { "P2 Intro Shockwave 1", 0x7248E, 0x724AE, 0x30, 1 },
    { "P2 Intro Shockwave 2", 0x724AE, 0x724CE, 0x30, 2 },

};
const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7264E, 0x7266E, 0x00 },
    { "P1 Hadouken", 0x7266E, 0x7268E, 0x00, 1 },
    { "P1 Shoryuken", 0x7268E, 0x726AE, 0x27, 2 },
};
const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x726AE, 0x726CE,  0x00 },
    { "P2 Hadouken", 0x726CE, 0x726EE, 0x00, 1 },
    { "P2 Shoryuken", 0x726EE, 0x7270E, 0x27, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x72C8E, 0x72CAE,  0x22 },
    { "P1 Extras 1 Hadouken", 0x72CAE, 0x72CCE, 0x27, 1 },
    { "P1 Extras 2 Friend", 0x77FCE, 0x77FEE, },
    { "P1 Extras 3 Bag", 0x77FEE, 0x7800E, },
};
const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72CEE, 0x72D0E, 0x22 },
    { "P2 Extras 1 Hadouken", 0x72D0E, 0x72D2E, 0x27, 1 },
    { "P2 Extras 2 Friend", 0x7800E, 0x7802E, },
    { "P2 Extras 3 Bag", 0x7802E, 0x7804E, },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x731CE, 0x731EE,  0x21 },
    { "P1 Sonic Boom", 0x731EE, 0x7320E, 0x21, 1 },
    { "P1 Flash Kick", 0x7320E, 0x7322E, 0x21, 2 },
};
const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x7322E, 0x7324E,  0x21 },
    { "P2 Sonic Boom", 0x7324E, 0x7326E, 0x21, 1 },
    { "P2 Flash Kick", 0x7326E, 0x7328E, 0x21, 2 }, 
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7234E, 0x7236E, 0x2D },
    //{"Shuma-Gorath P1 Extra 1", 0x7730E, 0x7732E, 0x2D }, // BUGBUG: we have two definitions for this.  using 16 below
    {"P1 Extra 2", 0x773AE, 0x773CE, 0x2D },
    {"P1 Extra 3", 0x7764E, 0x7766E, 0x2D },
    {"P1 Extra 4", 0x7766E, 0x7768E, 0x2D },
    {"P1 Extra 5", 0x7768E, 0x776AE, 0x2D },
    {"P1 Extra 6", 0x776AE, 0x776CE, 0x2D },
    {"P1 Extra 7", 0x776CE, 0x776EE, 0x2D },
    {"P1 Extra 8", 0x776EE, 0x7770E, 0x2D },
    {"P1 Extra 9", 0x7770E, 0x7772E, 0x2D },
    {"P1 Extra 10", 0x79C0E, 0x79C2E, 0x2D },
    {"P1 Extra 11", 0x7236E, 0x7238D , 0x2D },
    {"P1 Extra 12", 0x7728E, 0x772AE, 0x2D },
    {"P1 Extra 13", 0x772AE, 0x772CE, 0x2D },
    {"P1 Extra 14", 0x772CE, 0x772EE, 0x2D },
    {"P1 Extra 15", 0x772EE, 0x7730E, 0x2D },
    {"P1 Extra 16", 0x7730E, 0x7732E, 0x2D }, // BUGBUG: this is the second definition for this.  Using this one.
    {"P1 Extra 17 Stone 1", 0x7732E, 0x7734E, 0x2D },
    {"P1 Extra 18 Stone 2", 0x7734E, 0x7736E, 0x2D },
    {"P1 Extra 19 Stone 3", 0x7736E, 0x7738E, 0x2D },
    {"P1 Extra 20 Stone 4", 0x7738E, 0x773AE, 0x2D },
    {"P1 Extra 21 High Punch", 0x7238E, 0x723AE, 0x2D },
    {"P1 Life Drain 1", 0x7750E, 0x7752E, 0x2D },
    {"P1 Life Drain 2", 0x7752E, 0x7754E, 0x2D },
    {"P1 Life Drain 3", 0x7754E, 0x7756E, 0x2D },
    {"P1 Life Drain 4", 0x7756E, 0x7758E, 0x2D },
    {"P1 Life Drain 5", 0x7758E, 0x775AE, 0x2D },
    {"P1 Life Drain 6", 0x775AE, 0x775CE, 0x2D },
    {"P1 Life Drain 7", 0x775CE, 0x775EE, 0x2D },
    {"P1 Life Drain 8", 0x775EE, 0x7760E, 0x2D },
    {"P1 Chaos Dimension 1", 0x7772E, 0x7774E, 0x2D },
    {"P1 Chaos Dimension 2", 0x7774E, 0x7776E, 0x2D },
    {"P1 Chaos Dimension 3", 0x7776E, 0x7778E, 0x2D },
    {"P1 Chaos Dimension 4", 0x7778E, 0x777AE, 0x2D },
    {"P1 Chaos Dimension 5", 0x777AE, 0x777CE, 0x2D },
    {"P1 Chaos Dimension 6", 0x777CE, 0x777ED , 0x2D },
    {"P1 Mystic Smash 1", 0x7786E, 0x7788E, 0x2D },
};
const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x000000, 0x000020, 0x2D },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{ // 2 is web
    { "P1 Color (Punch)", 0x724CE, 0x724EE, 0x0C },
    { "P1 Extras 1", 0x724EE, 0x7250E, 0x0C, 0x2 },
    { "P1 Intro 1", 0x765CE, 0x765EE, 0x0C, 0x0B },
    { "P1 Intro 2", 0x765EE, 0x7660E, 0x0C, 0x0B },
    { "P1 Intro 3", 0x7660E, 0x7662E, 0x0C, 0x0B },
    { "P1 Intro 4", 0x7662E, 0x7664E, 0x0C, 0x0B },
    { "P1 Intro 5", 0x7664E, 0x7666E, 0x0C, 0x0B },
    { "P1 Intro 6", 0x7666E, 0x7668E, 0x0C, 0x0B },
    { "P1 Intro 7", 0x7668E, 0x766AE, 0x0C, 0x0B },
    { "P1 Intro 8", 0x766AE, 0x766CE, 0x0C, 0x0B },
};
const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x7252E, 0x7254E, 0x0C },
    { "P2 Extras 1", 0x7254E, 0x7256E, 0x0C, 0x2 },
    { "P2 Intro 1", 0x767CE, 0x767EE, 0x0C, 0x0B },
    { "P2 Intro 2", 0x767EE, 0x7680E, 0x0C, 0x0B },
    { "P2 Intro 3", 0x7680E, 0x7682E, 0x0C, 0x0B },
    { "P2 Intro 4", 0x7682E, 0x7684E, 0x0C, 0x0B },
    { "P2 Intro 5", 0x7684E, 0x7686E, 0x0C, 0x0B },
    { "P2 Intro 6", 0x7686E, 0x7688E, 0x0C, 0x0B },
    { "P2 Intro 7", 0x7688E, 0x768AE, 0x0C, 0x0B },
    { "P2 Intro 8", 0x768AE, 0x768CE, 0x0C, 0x0B },
};
const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_SHARED[] =
{
    { "P1 Extras 2: Spotlight", 0x766CE, 0x766EE, 0x0C, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7328E, 0x732AE, 0x0B, 0, true },
    { "P1 Shield", 0x732AE, 0x732CE, 0x0B, 1 },
    { "P1 Charging Star", 0x732CE, 0x732EE, 0x0B, 2 },

};
const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x732EE, 0x7330E, 0x0B, 0, true },
    { "P2 Shield", 0x7330E, 0x7332E, 0x0B, 1 },
    { "P2 Charging Star", 0x7332E, 0x7334E, 0x0B, 2 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x7228E, 0x722AE, 0x07, 0, true },
    { "P1 Claws", 0x722AE, 0x722CE, 0x07, 1 },
    { "P1 Extras 1", 0x722CE, 0x722EE, 0x07, 2 },
    { "P1 Extras 2 (Fatal Claw)", 0x7804E, 0x7806E },
};
const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x722EE, 0x7230E, 0x07, 0, true },
    { "P2 Claws", 0x7230E, 0x7232E, 0x07, 1 },
    { "P2 Extras 1", 0x7232E, 0x7234E, 0x07, 2 },
    { "P2 Extras 2 (Fatal Claw)", 0x7806E, 0x7808E },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7294E, 0x7296E, 0x01 },
    { "P1 Banishing Fist", 0x7296E, 0x7298E, 0x01, 1 },
    { "P1 FAB 1", 0x72A4E, 0x72A6E, 0x01 },
    { "P1 FAB 2", 0x72A6E, 0x72A8E, 0x01 },
    { "P1 FAB 3", 0x72A8E, 0x72AAE, 0x01 },
};
const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x729AE, 0x729CE, 0x01 },
    { "P2 Banishing Fist",      0x729CE, 0x729EE, 0x01, 1 },
    { "P2 FAB 1",               0x72AAE, 0x72ACE, 0x01 },
    { "P2 FAB 2",               0x72ACE, 0x72AEE, 0x01 },
    { "P2 FAB 3",               0x72AEE, 0x72B0E, 0x01 },
};

const sGame_PaletteDataset MSHVSF_A_CSI_PALETTES[] =
{
    { "Akuma P1 CSI", 0x7994E, 0x7996E },
    { "Blackheart P1 CSI", 0x7986E, 0x7988E },
    { "Captain America P1 CSI", 0x797AE, 0x797CE },
    { "Chun-Li P1 CSI", 0x798CE, 0x798EE },
    { "Cyclops P1 CSI", 0x7978E, 0x797AE },
    { "Dan P1 P1 CSI", 0x799AE, 0x799CE },
    { "Dhalsim P1 CSI", 0x798EE, 0x7990E },
    { "Hulk P1 CSI", 0x797CE, 0x797EE },
    { "Ken P1 CSI", 0x798AE, 0x798CE },
    { "Omega P1 Red CSI", 0x7982E, 0x7984E },
    { "M. Bison P1 CSI", 0x7992E, 0x7994E },
    { "Norimaro P1 CSI", 0x7998E, 0x799AE },
    { "Ryu P1 CSI", 0x7988E, 0x798AE },
    { "Sakura P1 CSI", 0x7996E, 0x7998E },
    { "Shuma-Gorath P1 CSI", 0x7980E, 0x7982E },
    { "Spider-Man P1 CSI", 0x7984E, 0x7986E },
    { "Wolverine P1 CSI", 0x797EE, 0x7980E },
    { "Zangief P1 CSI", 0x7990E, 0x7992E }, 
};

const sGame_PaletteDataset MSHVSF_A_SSP_PALETTES[] =
{
    { "A. Spider-Man P1 SSP", 0x7DA4E, 0x7DA8E },
    { "A. Spider-Man P2 SSP", 0x7EB2E, 0x7EB6E },
    { "Akuma P1 SSP", 0x7D40E, 0x7D48E },
    { "Akuma P2 SSP", 0x7E4FE, 0x7E56E },
    { "Blackheart P1 SSP", 0x7CFAE, 0x7D02E },
    { "Blackheart P2 SSP", 0x7E08E, 0x7E10E },
    { "Captain America P1 SSP", 0x7CBEE, 0x7CC8E },
    { "Captain America P2 SSP", 0x7DCCE, 0x7DD6E },
    { "Chun-Li P1 SSP", 0x7D18E, 0x7D20E },
    { "Chun-Li P2 SSP", 0x7E26E, 0x7E2EE },
    { "Cyber Akuma P1 SSP", 0x7D68E, 0x7D6EE },
    { "Cyber Akuma P2 SSP", 0x7E76E, 0x7E7CE },
    { "Dan P1 SSP", 0x7D5EE, 0x7D66E },
    { "Dan P2 SSP", 0x7E6CE, 0x7E74E },
    { "Dark Sakura P1 SSP", 0x7D7CE, 0x7D84E },
    { "Dark Sakura P2 SSP", 0x7E8AE, 0x7E92E },
    { "Dhalsim P1 SSP", 0x7D22E, 0x7D2AE },
    { "Dhalsim P2 SSP", 0x7E30E, 0x7E38E },
    { "Hulk P1 SSP", 0x7CC8E, 0x7CCEE },
    { "Hulk P2 SSP", 0x7DD6E, 0x7DDCE },
    { "Ken P1 SSP", 0x7D0EE, 0x7D16E },
    { "Ken P2 SSP", 0x7E1CE, 0x7E24E },
    { "Omega Red P1 SSP", 0x7CE6E, 0x7CEEE },
    { "Omega Red P2 SSP", 0x7DF4E, 0x7DFCE },
    { "M. Bison P1 SSP", 0x7D36E, 0x7D3EE },
    { "M. Bison P2 SSP", 0x7E44E, 0x7E4CE },
    { "Mech Zangief P1 SSP", 0x7D72E, 0x7D78E },
    { "Mech Zangief P2 SSP", 0x7E80E, 0x7E86E },
    { "Mephisto P1 SSP", 0x7D9AE, 0x7DA0E },
    { "Mephisto P2 SSP", 0x7EA8E, 0x7EAEE },
    { "Norimaro P1 SSP", 0x7D54E, 0x7D5EE },
    { "Norimaro P2 SSP", 0x7E62E, 0x7E6CE },
    { "Ryu P1 SSP", 0x7D04E, 0x7D0CE },
    { "Ryu P2 SSP", 0x7E12E, 0x7E1AE },
    { "Sakura P1 SSP", 0x7D4AE, 0x7D52E },
    { "Sakura P2 SSP", 0x7E58E, 0x7E60E },
    { "Shadow P2 SSP", 0x7E94E, 0x7E9EE },
    { "Shuma-Gorath P1 SSP", 0x7CDCE, 0x7CE2E },
    { "Shuma-Gorath P2 SSP", 0x7DEAE, 0x7DF0E },
    { "Spider-Man P1 SSP", 0x7CF0E, 0x7CF4E },
    { "Spider-Man P2 SSP", 0x7DFEE, 0x7E02E },
    { "US Agent P1 SSP", 0x7D90E, 0x7D9AE },
    { "US Agent P2 SSP", 0x7E9EE, 0x7EA8E },
    { "Wolverine P1 SSP", 0x7CD2E, 0x7CDAE },
    { "Wolverine P2 SSP", 0x7DE0E, 0x7DE8E },
    { "Zangief P1 SSP", 0x7D2CE, 0x7D32E },
    { "Zangief P2 SSP", 0x7E3AE, 0x7E40D },
    { "Apocalypse P1 SSP", 0x7CAAE, 0x7CB0E },
    { "Apocalypse P2 SSP", 0x7DB8E, 0x7DBEE },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES[] =
{
    { "A. Spider-Man P1 VSP", 0x7FD4E, 0x7FD8E },
    { "Akuma P1 VSP", 0x7F70E, 0x7F78E },
    { "Blackheart P1 VSP", 0x7F2AE, 0x7F2EE },
    { "Captain America P1 VSP", 0x7EEEE, 0x7EF8E },
    { "Captain America P2 VSP Part 1", 0x7FFCE, 0x7FFFF },
    { "Chun-Li P1 VSP", 0x7F48E, 0x7F4EE },
    { "Cyber Akuma P1 VSP", 0x7F98E, 0x7FA2E },
    { "Cyclops P1 VSP", 0x7EE4E, 0x7EEEE },
    { "Cyclops P2 VSP", 0x7FF2E, 0x7FFCE },
    { "Dan P1 VSP", 0x7F8EE, 0x7F98E },
    { "Dark Sakura P1 VSP", 0x7FACE, 0x7FB6E },
    { "Dhalsim P1 VSP", 0x7F52E, 0x7F5CE },
    { "Hulk P1 VSP", 0x7EF8E, 0x7EFEE },
    { "Ken P1 VSP", 0x7F3EE, 0x7F48E },
    { "Omega Red P1 VSP", 0x7F16E, 0x7F20E },
    { "M. Bison P1 VSP", 0x7F66E, 0x7F70E },
    { "Mech Zangief P1 VSP", 0x7FA2E, 0x7FACE },
    { "Mephisto P1 VSP", 0x7FCAE, 0x7FCEE },
    { "Norimaro P1 VSP", 0x7F84E, 0x7F8EE },
    { "Ryu P1 VSP", 0x7F34E, 0x7F3EE },
    { "Sakura P1 VSP", 0x7F7AE, 0x7F84E },
    { "Shuma-Gorath P1 VSP", 0x7F0CE, 0x7F14E },
    { "Spider-Man P1 VSP", 0x7F20E, 0x7F24E },
    { "U.S Agent P1 VSP", 0x7FC0E, 0x7FCAE },
    { "Wolverine P1 VSP", 0x7F02E, 0x7F0CE },
    { "Zangief P1 VSP", 0x7F5CE, 0x7F66E },
    { "Apocalypse P1 VSP", 0x7EDAE, 0x7EE4E },
    { "Apocalypse P2 VSP", 0x7FE8E, 0x7FF2E },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES_7B[] =
{
    { "A. Spider-Man P2 VSP", 0x0000e2e, 0x0000e6e },
    { "Akuma P2 VSP", 0x00007ee, 0x000086e },
    { "Blackheart P2 VSP", 0x000038e, 0x00003ce },
    { "Captain America P2 VSP Part 2", 0x0000000, 0x000006e },
    { "Chun-Li P2 VSP", 0x000056e, 0x00005ce },
    { "Cyber Akuma P2 VSP", 0xA6E, 0xB0E },
    { "Dan P2 VSP", 0x00009ce, 0x0000a6e },
    { "Dark Sakura P2 VSP", 0x0000bae, 0x0000c4e },
    { "Dhalsim P2 VSP", 0x000060e, 0x00006ae },
    { "Hulk P2 VSP", 0x000006e, 0x00000ce },
    { "Ken P2 VSP", 0x00004ce, 0x000056e },
    { "Omega Red P2 VSP", 0x000024e, 0x00002ee },
    { "M. Bison P2 VSP", 0x000074e, 0x00007ee },
    { "Mech Zangief P2 VSP", 0x0000b0e, 0x0000bae },
    { "Mephisto P2 VSP", 0x0000d8e, 0x0000dce },
    { "Norimaro P2 VSP", 0x000092e, 0x00009ce },
    { "Ryu P2 VSP", 0x000042e, 0x00004ce },
    { "Sakura P2 VSP", 0x000088e, 0x000092e },
    { "Shuma-Gorath P2 VSP", 0x00001ae, 0x000022e },
    { "Spider-Man P2 VSP", 0x00002ee, 0x000032e },
    { "US Agent P2 VSP", 0x0000cee, 0x0000d8e },
    { "Wolverine P2 VSP", 0x000010e, 0x00001ae },
    { "Zangief P2 VSP", 0x00006ae, 0x000074e },
};

const sDescTreeNode MSHVSF_A_APOCALYPSE_COLLECTION[] =
{
    //{ "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH) },
    //{ "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK) },
    { "Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_SHARED,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_GOUKI_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_GOUKI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_GOUKI_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_GOUKI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_GOUKI_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION[] =
{
    { "Blackheart P1 Color (Punch)", DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH,   ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH)  },
    { "Blackheart P2 Color (Kick)",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK,    ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK)   },
    { "Mephisto P1 Color (Punch)",   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH,     ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH)    },
    { "Mephisto P2 Color (Kick)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK,      ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK)     },
    { "Shared Palettes",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_CAPTAIN_AMERICA_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_CHUNLI_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_CYBER_GOUKI_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_GOUKI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYBER_GOUKI_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_GOUKI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYBER_GOUKI_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_CYCLOPS_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK) },
    { "Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_SHARED) },
    
};
const sDescTreeNode MSHVSF_A_DAN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_DARK_SAKURA_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_DHALSIM_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_HULK_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_KEN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_MBIPSON_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_MECH_ZANGIEF_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK) },
    { "Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_NORIMARO_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK) },
    { "Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_EXTRAS,           ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_EXTRAS) },
};
const sDescTreeNode MSHVSF_A_OMEGARED_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_RYU_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SAKURA_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SHADOW_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SHUMAGORATH_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH) },
    // We don't have this data yet.
    //{ "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SPIDERMAN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK) },
    { "Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_USAGENT_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_WOLVERINE_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_ZANGIEF_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION[] =
{
    { "Character Select Icons",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSI_PALETTES,    ARRAYSIZE(MSHVSF_A_CSI_PALETTES) },
    { "Super Screen Portraits",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SSP_PALETTES,    ARRAYSIZE(MSHVSF_A_SSP_PALETTES) },
    { "Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION_7B[] =
{
    { "Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES_7B,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES_7B) },
};


const sDescTreeNode MSHVSF_A_UNITS_6A[MSHVSF_A_NUM_IND_6A] =
{
    { "Armored Spider-Man",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION) },
    { "Blackheart/Mephisto", DESC_NODETYPE_TREE, (void*)MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION) },
    { "Captain America",     DESC_NODETYPE_TREE, (void*)MSHVSF_A_CAPTAIN_AMERICA_COLLECTION,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_COLLECTION) },
    { "Chun-Li",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_CHUNLI_COLLECTION,              ARRAYSIZE(MSHVSF_A_CHUNLI_COLLECTION) },
    { "Cyber Akuma",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYBER_GOUKI_COLLECTION,         ARRAYSIZE(MSHVSF_A_CYBER_GOUKI_COLLECTION) },
    { "Cyclops",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYCLOPS_COLLECTION,             ARRAYSIZE(MSHVSF_A_CYCLOPS_COLLECTION) },
    { "Dan",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_DAN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_DAN_COLLECTION) },
    { "Dark Sakura",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_DARK_SAKURA_COLLECTION,         ARRAYSIZE(MSHVSF_A_DARK_SAKURA_COLLECTION) },
    { "Dhalsim",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_DHALSIM_COLLECTION,             ARRAYSIZE(MSHVSF_A_DHALSIM_COLLECTION) },
    { "Gouki",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_GOUKI_COLLECTION,               ARRAYSIZE(MSHVSF_A_GOUKI_COLLECTION) },
    { "Hulk",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_HULK_COLLECTION,                ARRAYSIZE(MSHVSF_A_HULK_COLLECTION) },
    { "Ken",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_KEN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_KEN_COLLECTION) },
    { "M. Bison",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_MBIPSON_COLLECTION,             ARRAYSIZE(MSHVSF_A_MBIPSON_COLLECTION) },
    { "Mech-Zangief",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_MECH_ZANGIEF_COLLECTION,        ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_COLLECTION) },
    { "Norimaro",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_NORIMARO_COLLECTION,            ARRAYSIZE(MSHVSF_A_NORIMARO_COLLECTION) },
    { "Omega Red",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_OMEGARED_COLLECTION,            ARRAYSIZE(MSHVSF_A_OMEGARED_COLLECTION) },
    { "Ryu",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_RYU_COLLECTION,                 ARRAYSIZE(MSHVSF_A_RYU_COLLECTION) },
    { "Sakura",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_SAKURA_COLLECTION,              ARRAYSIZE(MSHVSF_A_SAKURA_COLLECTION) },
    { "Shadow",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHADOW_COLLECTION,              ARRAYSIZE(MSHVSF_A_SHADOW_COLLECTION) },
    { "Shuma-Gorath",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHUMAGORATH_COLLECTION,         ARRAYSIZE(MSHVSF_A_SHUMAGORATH_COLLECTION) },
    { "Spider-Man",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_SPIDERMAN_COLLECTION,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_COLLECTION) },
    { "U.S. Agent",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_USAGENT_COLLECTION,             ARRAYSIZE(MSHVSF_A_USAGENT_COLLECTION) },
    { "Wolverine",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_WOLVERINE_COLLECTION,           ARRAYSIZE(MSHVSF_A_WOLVERINE_COLLECTION) },
    { "Zangief",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_ZANGIEF_COLLECTION,             ARRAYSIZE(MSHVSF_A_ZANGIEF_COLLECTION) },
    { "Apocalypse",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_APOCALYPSE_COLLECTION,          ARRAYSIZE(MSHVSF_A_APOCALYPSE_COLLECTION) },
    { "Bonus (Icons, Portraits)", DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION,          ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION) },
};

const sDescTreeNode MSHVSF_A_UNITS_7B[MSHVSF_A_NUM_IND_7B] =
{
    { "Bonus (Portraits)",   DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION_7B,            ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION_7B) },
};

// We extend this array with data groveled from the mshvsfe.txt extensible extras file, if any.
const stExtraDef MSHVSF_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#pragma once

// Playable Characters include:
// Leo
// Kenji
// Tessa 
// Mai-Ling <-- the canonical spelling is Mai-Ling, so we'll use that
//
// Bosses include:
// Blade
// GI-Gi (Missing Palettes)
// Hauzer
// Hydron
// Kongou
// Lavia
// Ravange
// Scion (Missing Palettes)

const std::vector<uint16_t> REDEARTH_A_IMGIDS_USED =
{
    indexRedEarthSprites_Blade,     // 0x00
    indexRedEarthSprites_GiGi,      // 0x01
    indexRedEarthSprites_Hauzer,    // 0x02
    indexRedEarthSprites_Hydron,    // 0x03
    indexRedEarthSprites_Kenji,     // 0x04
    indexRedEarthSprites_Kongou,    // 0x05
    indexRedEarthSprites_Lavia,     // 0x06
    indexRedEarthSprites_Leo,       // 0x07
    indexRedEarthSprites_MaiLing,   // 0x08
    indexRedEarthSprites_Ravange,   // 0x09
    indexRedEarthSprites_Scion,     // 0x0a
    indexRedEarthSprites_Tessa,     // 0x0b
    indexRedEarthSprites_Bonus,     // 0x0c
    indexRedEarthSprites_Stages,    // 0x0d
    indexRedEarthSprites_Endings,   // 0x0e
};

//Playable Characters
const sGame_PaletteDataset REDEARTH_A_LEO_PUNCH_PALETTES[] =
{
    { L"Leo Punch",                          0x408000, 0x408080, indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Punch Vs/Winning/Losing Screen", 0x1E4680, 0x1E4700, indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Punch Vs/Winning/Losing Sword",  0x1E4700, 0x1E4780, indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Leo Punch LifeBar Portrait",         0x406640, 0x406680, indexRedEarthSprites_Leo, 0x10 },

    { L"Leo Punch Old Sword",               0x408100, 0x408180, indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Punch Bronze Sword",            0x408180, 0x408200, indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Punch Steel Sword",             0x408200, 0x408280, indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Punch Diamond Sword",           0x408280, 0x408300, indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Punch Legendary Sword",         0x408300, 0x408380, indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Punch Old Shield",              0x408380, 0x408400, indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Punch Wooden Shield",           0x408400, 0x408480, indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Punch Steel Shield",            0x408480, 0x408500, indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Punch Diamond Shield",          0x408500, 0x408580, indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Punch Legendary Shield",        0x408580, 0x408600, indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Punch Fire Sword",              0x408600, 0x408680, indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Punch Ice Sword",               0x408680, 0x408700, indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Punch Lightning Sword",         0x408700, 0x408780, indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Punch Battle Axe",              0x408780, 0x408800, indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Punch Ultimate Guard Flash and Burn 1", 0x40AA00, 0x40AA80, indexRedEarthSprites_Leo },
    { L"Leo Punch Burn 2", 0x40AA80, 0x40AB00, indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 1", 0x40AB00, 0x40AB80, indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 2", 0x40AB80, 0x40AC00, indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 1", 0x40AC00, 0x40AC80, indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 2", 0x40AC80, 0x40AD00, indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 3", 0x40AD00, 0x40AD80, indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 4", 0x40AD80, 0x40AE00, indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 1", 0x40AE00, 0x40AE80, indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 2", 0x40AE80, 0x40AF00, indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 3", 0x40AF00, 0x40AF80, indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 1", 0x40AF80, 0x40B000, indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 2", 0x40B000, 0x40B080, indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 3", 0x40B080, 0x40B100, indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 4", 0x40B100, 0x40B180, indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 5", 0x40B180, 0x40B200, indexRedEarthSprites_Leo },
    { L"Mirror Trapped - Leo Punch", 0x433f00, 0x433f80, indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Punch Trapped in Ravange's Sarcophagus", 0x42ef00, 0x42ef80, indexRedEarthSprites_Leo, 0x0f },

    { L"Vigo, Valo & Vestu", 0x408f80, 0x409000 },
    { L"Wisemen Mist 1", 0x409000, 0x409080 },
    { L"Wisemen Mist 2", 0x409080, 0x409100 },

    { L"Unknown Leo Palette", 0x408980, 0x408b80 },
};

const sGame_PaletteDataset REDEARTH_A_LEO_KICK_PALETTES[] =
{
    { L"Leo Kick",                           0x414800, 0x414880, indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Kick Vs/Winning/Losing Screen",  0x1E4D00, 0x1E4D80, indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Kick Vs/Winning/Losing Sword",   0x1E4D80, 0x1E4E00, indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Leo Kick LifeBar Portrait",          0x406680, 0x4066C0, indexRedEarthSprites_Leo, 0x10 },

    { L"Leo Kick Old Sword",                0x414900, 0x414980, indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Kick Bronze Sword",             0x414980, 0x414A00, indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Kick Steel Sword",              0x414A00, 0x414A80, indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Kick Diamond Sword",            0x414A80, 0x414B00, indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Kick Legendary Sword",          0x414B00, 0x414B80, indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Kick Old Shield",               0x414B80, 0x414C00, indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Kick Wooden Shield",            0x414C00, 0x414C80, indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Kick Steel Shield",             0x414C80, 0x414D00, indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Kick Diamond Shield",           0x414D00, 0x414D80, indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Kick Legendary Shield",         0x414D80, 0x414E00, indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Kick Fire Sword",               0x414E00, 0x414E80, indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Kick Ice Sword",                0x414E80, 0x414F00, indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Kick Lightning Sword",          0x414F00, 0x414F80, indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Kick Battle Axe",               0x414F80, 0x415000, indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Kick Ultimate Guard Flash and Burn 1", 0x417200, 0x417280, indexRedEarthSprites_Leo },
    { L"Leo Kick Burn 2", 0x417280, 0x417300, indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 1", 0x417300, 0x417380, indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 2", 0x417380, 0x417400, indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 1", 0x417400, 0x417480, indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 2", 0x417480, 0x417500, indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 3", 0x417500, 0x417580, indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 4", 0x417580, 0x417600, indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 1", 0x417600, 0x417680, indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 2", 0x417680, 0x417700, indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 3", 0x417700, 0x417780, indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 1", 0x417780, 0x417800, indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 2", 0x417800, 0x417880, indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 3", 0x417880, 0x417900, indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 4", 0x417900, 0x417980, indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 5", 0x417980, 0x417A00, indexRedEarthSprites_Leo }, 
    { L"Mirror Trapped - Leo Kick",         0x434000, 0x434080, indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Kick Trapped in Ravange's Sarcophagus", 0x42fb80, 0x42fc00, indexRedEarthSprites_Leo, 0x0f },

    { L"Vigo, Valo & Vestu", 0x415780, 0x415800 },
    { L"Wisemen Mist 1", 0x415800, 0x415880 },
    { L"Wisemen Mist 2", 0x415880, 0x415900 },

    { L"Unknown Leo Palette", 0x415180, 0x415380 },
};

const sGame_PaletteDataset REDEARTH_A_LEO_BONUS_PALETTES[] =
{
    { L"Leo Character Not Selected",         0x1DF200, 0x1DF280, indexRedEarthSprites_Leo, 0x11 },
    { L"Leo Character Selected",             0x1DEB80, 0x1DEC00, indexRedEarthSprites_Leo, 0x11 },
    { L"Leo Character Select Portrait",      0x1DEF00, 0x1DEF80, indexRedEarthSprites_Leo, 0x12 },
    { L"P1 Leo Character Select Portrait Highlighted", 0x1E0D80, 0x1E0E00, indexRedEarthSprites_Leo, 0x11 },
    { L"P2 Leo Character Select Portrait Highlighted", 0x1E2F80, 0x1E3000, indexRedEarthSprites_Leo, 0x11 },
    { L"Leo Character Not Selected P1", 0x1e1400, 0x1e1480, indexRedEarthSprites_Leo, 0x11 },
    { L"Leo Character Not Selected P2", 0x1e3600, 0x1e3680, indexRedEarthSprites_Leo, 0x11 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_PUNCH_PALETTES[] =
{
    { L"Kenji Punch",                            0x40B200, 0x40B280, indexRedEarthSprites_Kenji, 0x0, &pairNext4AndNext },
    { L"Kenji Punch Vs/Winning/Losing Screen",   0x1E4800, 0x1E4900, indexRedEarthSprites_Kenji, 0x09 },
    { L"Kenji Punch LifeBar Portrait",           0x406900, 0x406940, indexRedEarthSprites_Kenji, 0x10 },
    
    // All of these are for Punch
    { L"Hat intro",                              0x40B300, 0x40B380, indexRedEarthSprites_Kenji, 0x02 },
    { L"Chains, Kunai",                          0x40B380, 0x40B400, indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x40B400, 0x40B480, indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x40B480, 0x40B500, indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x40B500, 0x40B580, indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x40B580, 0x40B600, indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x40B600, 0x40B680, indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x40B700, 0x40B780, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x40B680, 0x40B700, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x40B780, 0x40B800, indexRedEarthSprites_Kenji, 0x08 },
    { L"Kunai Throwing Shine (1/3)",             0x40BF00, 0x40BF80, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x40BE80, 0x40BF00, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x40BE00, 0x40BE80, indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x40B280, 0x40B300, indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Punch Ultimate Guard Flash and Burn 1", 0x40DC00, 0x40DC80, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Burn 2", 0x40DC80, 0x40DD00, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 1", 0x40DD00, 0x40DD80, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 2", 0x40DD80, 0x40DE00, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 1", 0x40DE00, 0x40DE80, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 2", 0x40DE80, 0x40DF00, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 3", 0x40DF00, 0x40DF80, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 4", 0x40DF80, 0x40E000, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 1", 0x40E000, 0x40E080, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 2", 0x40E080, 0x40E100, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 3", 0x40E100, 0x40E180, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 1", 0x40E180, 0x40E200, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 2", 0x40E200, 0x40E280, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 3", 0x40E280, 0x40E300, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 4", 0x40E300, 0x40E380, indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 5", 0x40E380, 0x40E400, indexRedEarthSprites_Kenji },
    { L"Mirror Trapped - Kenji Punch",      0x434080, 0x434100, indexRedEarthSprites_Kenji, 0x0 },
    { L"Kenji Punch Trapped in Ravange's Sarcophagus", 0x42ef80, 0x42f000 },

    { L"Unknown Kenji Range 1 (1/2) 0x40bfe0", 0x40bfe0, 0x40c1e0 },
    { L"Unknown Kenji Range 1 (2/2) 0x40c1e0", 0x40c1e0, 0x40c200 },
    { L"Unknown Kenji Range 2 (1/2) 0x40c600", 0x40c600, 0x40c800 },
    { L"Unknown Kenji Range 2 (2/2) 0x40c800", 0x40c800, 0x40c920 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_KICK_PALETTES[] =
{
    { L"Kenji Kick",                             0x417A00, 0x417A80, indexRedEarthSprites_Kenji, 0x0, &pairNext4AndNext },
    { L"Kenji Kick Vs/Winning/Losing Screen",    0x1E4E00, 0x1E4F00, indexRedEarthSprites_Kenji, 0x09 },
    { L"Kenji Kick LifeBar Portrait",            0x406940, 0x406980, indexRedEarthSprites_Kenji, 0x10 },

    { L"Hat intro",                              0x417b00, 0x417b80, indexRedEarthSprites_Kenji, 0x02 },
    { L"Chains, Kunai",                          0x417b80, 0x417c00, indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x417c00, 0x417c80, indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x417c80, 0x417d00, indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",    0x417d00, 0x417d80, indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x417d80, 0x417e00, indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x417e00, 0x417e80, indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x417f00, 0x417f80, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x417e80, 0x417f00, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x417f80, 0x418000, indexRedEarthSprites_Kenji, 0x08 },
    
    { L"Kunai Throwing Shine (1/3)",             0x418700, 0x418780, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x418680, 0x418700, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x418600, 0x418680, indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x417A80, 0x417B00, indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Kick Ultimate Guard Flash and Burn 1", 0x41A400, 0x41A480, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Burn 2", 0x41A480, 0x41A500, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 1", 0x41A500, 0x41A580, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 2", 0x41A580, 0x41A600, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 1", 0x41A600, 0x41A680, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 2", 0x41A680, 0x41A700, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 3", 0x41A700, 0x41A780, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 4", 0x41A780, 0x41A800, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 1", 0x41A800, 0x41A880, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 2", 0x41A880, 0x41A900, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 3", 0x41A900, 0x41A980, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 1", 0x41A980, 0x41AA00, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 2", 0x41AA00, 0x41AA80, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 3", 0x41AA80, 0x41AB00, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 4", 0x41AB00, 0x41AB80, indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 5", 0x41AB80, 0x41AC00, indexRedEarthSprites_Kenji },
    { L"Mirror Trapped - Kenji Kick",       0x434100, 0x434180, indexRedEarthSprites_Kenji, 0x0 },
    { L"Kenji Kick Trapped in Ravange's Sarcophagus", 0x42fc00, 0x42fc80 },

    { L"Unknown Kenji Range 1 (1/2) 0x4187e0", 0x4187e0, 0x4189e0 },
    { L"Unknown Kenji Range 1 (2/2) 0x4189e0", 0x4189e0, 0x418a00 },
    { L"Unknown Kenji Range 2 (1/2) 0x418e00", 0x418e00, 0x419000 },
    { L"Unknown Kenji Range 2 (2/2) 0x419000", 0x419000, 0x419120 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_BONUS_PALETTES[] =
{
    { L"Kenji Character Not Selected",           0x1DF380, 0x1DF400, indexRedEarthSprites_Kenji, 0x11 },
    { L"Kenji Character Selected",               0x1DED00, 0x1DED80, indexRedEarthSprites_Kenji, 0x11 },
    { L"Kenji Character Select Portrait",        0x1DF000, 0x1DF080, indexRedEarthSprites_Kenji, 0x12 },
    { L"P1 Kenji Character Select Portrait Highlighted", 0x1E0F00, 0x1E0F80, indexRedEarthSprites_Kenji, 0x11 },
    { L"P2 Kenji Character Select Portrait Highlighted", 0x1E3100, 0x1E3180, indexRedEarthSprites_Kenji, 0x11 },
    { L"Kenji Character Not Selected P1", 0x1e1580, 0x1e1600, indexRedEarthSprites_Kenji, 0x11 },
    { L"Kenji Character Not Selected P2", 0x1e3780, 0x1e3800, indexRedEarthSprites_Kenji, 0x11 },

    { L"Shogun Credits", 0x424880, 0x424900, indexRedEarthSprites_Kenji, 0x22 },
};

const sGame_PaletteDataset REDEARTH_A_TESSA_PUNCH_PALETTES[] =
{
    { L"Tessa Punch", 0x40E400, 0x40E480, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Changing Pal", 0x40E480, 0x40E500, indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Punch Vs/Winning/Losing Screen", 0x1E4600, 0x1E4680, indexRedEarthSprites_Tessa, 0x17 },
    { L"Tessa Punch LifeBar Portrait", 0x406980, 0x4069C0, indexRedEarthSprites_Tessa, 0x10 },

    { L"Tessa Punch Bottled Ice", 0x40E500, 0x40E580, indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Punch Mage Shield Block", 0x40EA00, 0x40EA80, indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Punch Mage Shield Preblock", 0x40EA80, 0x40EB00, indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Punch Al (Aru) Cat", 0x40E780, 0x40E800, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Al (Aru) Cat Returning", 0x40E800, 0x40E880, indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ivan (Ibun) Cat", 0x40E880, 0x40E900, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat Returning", 0x40E900, 0x40E980, indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ice", 0x40E980, 0x40EA00, indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Punch Reverie Sword", 0x40EB80, 0x40EC00, indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Punch Staffs", 0x40EC00, 0x40EC80, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Kaeru (Frog)", 0x40EE80, 0x40EF00, indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80, 0x40F000, indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Suitcat", 0x40FF00, 0x40FF80, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Suitcat (Mustard)", 0x40FF80, 0x410000, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Chakra Wave", 0x40EF00, 0x40EF80, indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Punch Cannon Magic Pattern", 0x40E700, 0x40E780, indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Punch Cannon Transition", 0x40F880, 0x40F900, indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Punch Hyper Cannon (Superball and Winscreen)", 0x40F900, 0x40F980, indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Punch Glace Cannon", 0x40F980, 0x40FA00, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Flamma Cannon", 0x40FA00, 0x40FA80, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Electron Cannon", 0x40FA80, 0x40FB00, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Death Phenomenon - On Hit", 0x40FD80, 0x40FE00, indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Punch Death Phenomenon - On Whiff", 0x40FE00, 0x40FE80, indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780, 0x40F800, indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Manot Arm", 0x40F200, 0x40F280, indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Punch GC/Pursuit Wrecking Ball", 0x40F300, 0x40F380, indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Punch Grab Saw", 0x40F080, 0x40F100, indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Punch GC/Grab/Pursuit Lever", 0x40F100, 0x40F180, indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Punch Ultimate Guard Wall and Lever", 0x40EB00, 0x40EB80, indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Punch Ultimate Guard Batteries", 0x40EE00, 0x40EE80, indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Punch Ultimate Counter Chain", 0x40fb00, 0x40fb80, indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x40f380, 0x40f400, indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x40f400, 0x40f480, indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x40f480, 0x40f500, indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x40f500, 0x40f580, indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x40f580, 0x40f600, indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x40f600, 0x40f680, indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x40f280, 0x40f300, indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Punch Ultimate Guard Flash and Burn 1", 0x410E00, 0x410E80, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Burn 2", 0x410E80, 0x410F00, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 1", 0x410F00, 0x410F80, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 2", 0x410F80, 0x411000, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 1", 0x411000, 0x411080, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 2", 0x411080, 0x411100, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 3", 0x411100, 0x411180, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 4", 0x411180, 0x411200, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 1", 0x411200, 0x411280, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 2", 0x411280, 0x411300, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 3", 0x411300, 0x411380, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 1", 0x411380, 0x411400, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 2", 0x411400, 0x411480, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 3", 0x411480, 0x411500, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 4", 0x411500, 0x411580, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 5", 0x411580, 0x411600, indexRedEarthSprites_Tessa, 0 },
    { L"Mirror Trapped - Tessa Punch",      0x434180, 0x434200, indexRedEarthSprites_Tessa, 0x0 },
    { L"Tessa Punch Trapped in Ravange's Sarcophagus", 0x42f000, 0x42f080 },

    // Cartur is a knight that tessa encounters during her story mode
    { L"Punch Palette Cartur", 0x40e580, 0x40e600, indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x40e600, 0x40e700 },
    { L"Unknown Tessa Palette 2", 0x40f180, 0x40f200 },
    { L"Unknown Tessa Palette 3", 0x40fe80, 0x40ff00 },
    { L"Unknown Tessa Range 1", 0x40fb80, 0x40fd80 },
    { L"Unknown Tessa Range 2 (1/4) 0x410000", 0x410000, 0x410200 },
    { L"Unknown Tessa Range 2 (2/4) 0x410200", 0x410200, 0x410400 },
    { L"Unknown Tessa Range 2 (3/4) 0x410400", 0x410400, 0x410600 },
    { L"Unknown Tessa Range 2 (4/4) 0x410600", 0x410600, 0x410680 },
};

const sGame_PaletteDataset REDEARTH_A_TESSA_KICK_PALETTES[] =
{
    { L"Tessa Kick", 0x41AC00, 0x41AC80, indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Kick Changing Pal", 0x41AC80, 0x41AD00, indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Kick Vs/Winning/Losing Screen", 0x1E4C80, 0x1E4D00, indexRedEarthSprites_Tessa, 0x17 },
    { L"Tessa Kick LifeBar Portrait", 0x4069C0, 0x406A00, indexRedEarthSprites_Tessa, 0x10 },

    { L"Tessa Kick Bottled Ice", 0x41AD00, 0x41AD80, indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Kick Mage Shield Block", 0x40EA00 + 0xc800, 0x40EA80 + 0xc800, indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Kick Mage Shield Preblock", 0x40EA80 + 0xc800, 0x40EB00 + 0xc800, indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Kick Al (Aru) Cat", 0x40E780 + 0xc800, 0x40E800 + 0xc800, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Al (Aru) Cat Returning", 0x40E800 + 0xc800, 0x40E880 + 0xc800, indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ivan (Ibun) Cat", 0x40E880 + 0xc800, 0x40E900 + 0xc800, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat Returning", 0x40E900 + 0xc800, 0x40E980 + 0xc800, indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ice", 0x40E980 + 0xc800, 0x40EA00 + 0xc800, indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Kick Reverie Sword", 0x40EB80 + 0xc800, 0x40EC00 + 0xc800, indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Kick Staffs", 0x40EC00 + 0xc800, 0x40EC80 + 0xc800, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Kaeru (Frog)", 0x40EE80 + 0xc800, 0x40EF00 + 0xc800, indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 + 0xc800, 0x40F000 + 0xc800, indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Suitcat", 0x40FF00 + 0xc800, 0x40FF80 + 0xc800, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Suitcat (Mustard)", 0x40FF80 + 0xc800, 0x410000 + 0xc800, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Chakra Wave", 0x40EF00 + 0xc800, 0x40EF80 + 0xc800, indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Kick Cannon Magic Pattern", 0x40E700 + 0xc800, 0x40E780 + 0xc800, indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Kick Cannon Transition", 0x40F880 + 0xc800, 0x40F900 + 0xc800, indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Kick Hyper Cannon (Superball and Winscreen)", 0x40F900 + 0xc800, 0x40F980 + 0xc800, indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Kick Glace Cannon", 0x40F980 + 0xc800, 0x40FA00 + 0xc800, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Flamma Cannon", 0x40FA00 + 0xc800, 0x40FA80 + 0xc800, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Electron Cannon", 0x40FA80 + 0xc800, 0x40FB00 + 0xc800, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Death Phenomenon - On Hit", 0x40FD80 + 0xc800, 0x40FE00 + 0xc800, indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Kick Death Phenomenon - On Whiff", 0x40FE00 + 0xc800, 0x40FE80 + 0xc800, indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 + 0xc800, 0x40F800 + 0xc800, indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Manot Arm", 0x40F200 + 0xc800, 0x40F280 + 0xc800, indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Kick GC/Pursuit Wrecking Ball", 0x40F300 + 0xc800, 0x40F380 + 0xc800, indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Kick Grab Saw", 0x40F080 + 0xc800, 0x40F100 + 0xc800, indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Kick GC/Grab/Pursuit Lever", 0x40F100 + 0xc800, 0x40F180 + 0xc800, indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Kick Ultimate Guard Wall and Lever", 0x40EB00 + 0xc800, 0x40EB80 + 0xc800, indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Kick Ultimate Guard Batteries", 0x40EE00 + 0xc800, 0x40EE80 + 0xc800, indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Kick Ultimate Counter Chain", 0x41c300, 0x41c380, indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x41bb80, 0x41bc00, indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x41bc00, 0x41bc80, indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x41bc80, 0x41bd00, indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x41bd00, 0x41bd80, indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x41bd80, 0x41be00, indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x41be00, 0x41be80, indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x41ba80, 0x41bb00, indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Kick Ultimate Guard Flash and Burn 1", 0x41D600, 0x41D680, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Burn 2", 0x41D680, 0x41D700, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 1", 0x41D700, 0x41D780, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 2", 0x41D780, 0x41D800, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 1", 0x41D800, 0x41D880, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 2", 0x41D880, 0x41D900, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 3", 0x41D900, 0x41D980, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 4", 0x41D980, 0x41DA00, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 1", 0x41DA00, 0x41DA80, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 2", 0x41DA80, 0x41DB00, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 3", 0x41DB00, 0x41DB80, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 1", 0x41DB80, 0x41DC00, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 2", 0x41DC00, 0x41DC80, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 3", 0x41DC80, 0x41DD00, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 4", 0x41DD00, 0x41DD80, indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 5", 0x41DD80, 0x41DE00, indexRedEarthSprites_Tessa, 0 },
    { L"Mirror Trapped - Tessa Kick",       0x434200, 0x434280, indexRedEarthSprites_Tessa, 0x0 },
    { L"Tessa Kick Trapped in Ravange's Sarcophagus", 0x42fc80, 0x42fd00 },

    { L"Kick Palette Cartur", 0x41ad80, 0x41ae00, indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x41ae00, 0x41af00 },
    { L"Unknown Tessa Palette 2", 0x41b980, 0x41ba00 },
    { L"Unknown Tessa Palette 3", 0x41c680, 0x41c700 },
    { L"Unknown Tessa Range 1", 0x41c380, 0x41c580 },
    { L"Unknown Tessa Range 2 (1/4) 0x41c800", 0x41c800, 0x41ca00 },
    { L"Unknown Tessa Range 2 (2/4) 0x41ca00", 0x41ca00, 0x41cc00 },
    { L"Unknown Tessa Range 2 (3/4) 0x41cc00", 0x41cc00, 0x41ce00 },
    { L"Unknown Tessa Range 2 (4/4) 0x41ce00", 0x41ce00, 0x41ce80 },
};

const sGame_PaletteDataset REDEARTH_A_TESSA_BONUS_PALETTES[] =
{
    { L"Tessa Character Not Selected",           0x1DF180, 0x1DF200, indexRedEarthSprites_Tessa, 0x11 },
    { L"Tessa Character Selected",               0x1DEB00, 0x1DEB80, indexRedEarthSprites_Tessa, 0x11 },
    { L"Tessa Character Select Portrait",       0x1DEF80, 0x1DF000, indexRedEarthSprites_Tessa, 0x12 },
    { L"P1 Tessa Character Select Portrait Highlighted", 0x1E0D00, 0x1E0D80, indexRedEarthSprites_Tessa, 0x11 },
    { L"P2 Tessa Character Select Portrait Highlighted", 0x1E2F00, 0x1E2F80, indexRedEarthSprites_Tessa, 0x11 },
    { L"Tessa Character Not Selected P1", 0x1e1380, 0x1e1400, indexRedEarthSprites_Tessa, 0x11 },
    { L"Tessa Character Not Selected P2", 0x1e3580, 0x1e3600, indexRedEarthSprites_Tessa, 0x11 },
};

const sGame_PaletteDataset REDEARTH_A_MAILING_PUNCH_PALETTES[] =
{
    { L"Mai-Ling Punch", 0x411600, 0x411680, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Vs/Winning Screen", 0x1E4C00, 0x1E4C80, indexRedEarthSprites_MaiLing, 0x17 },
    { L"Mai-Ling Punch Losing Screen", 0x1E4B80, 0x1E4C00, indexRedEarthSprites_MaiLing, 0x40 },
    { L"Mai-Ling Punch LifeBar Portrait", 0x406A00, 0x406A40, indexRedEarthSprites_MaiLing, 0x10 },

    { L"Mai-Ling Punch Fire", 0x411680, 0x411700, indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Punch Fireball", 0x411780, 0x411800, indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Punch HCB.1/2/3 Fireball", 0x411880, 0x411900, indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x411900, 0x411980, indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x412a00, 0x412b00, indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Punch Ultimate Guard Flash and Burn 1", 0x414000, 0x414080, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Burn 2", 0x414080, 0x414100, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 1", 0x414100, 0x414180, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 2", 0x414180, 0x414200, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 1", 0x414200, 0x414280, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 2", 0x414280, 0x414300, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 3", 0x414300, 0x414380, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 4", 0x414380, 0x414400, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 1", 0x414400, 0x414480, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 2", 0x414480, 0x414500, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 3", 0x414500, 0x414580, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 1", 0x414580, 0x414600, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 2", 0x414600, 0x414680, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 3", 0x414680, 0x414700, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 4", 0x414700, 0x414780, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 5", 0x414780, 0x414800, indexRedEarthSprites_MaiLing, 0 },
    { L"Mirror Trapped - Mai-Ling Punch",   0x434280, 0x434300, indexRedEarthSprites_MaiLing, 0x0 },
    { L"Mai Punch Trapped in Ravange's Sarcophagus", 0x42f080, 0x42f100 },

    { L"Unknown Mai Palette", 0x411700, 0x411780 },
    { L"Unknown Mai Palette 2", 0x411800, 0x411880 },
};

const sGame_PaletteDataset REDEARTH_A_MAILING_KICK_PALETTES[] =
{
    { L"Mai-Ling Kick", 0x41DE00, 0x41DE80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Vs/Winning Screen", 0x1E4F80, 0x1E5000, indexRedEarthSprites_MaiLing, 0x27 },
    { L"Mai-Ling Kick Losing Screen", 0x1E4F00, 0x1E4F80, indexRedEarthSprites_MaiLing, 0x30 },
    { L"Mai-Ling Kick LifeBar Portrait", 0x406A40, 0x406A80, indexRedEarthSprites_MaiLing, 0x10 },

    { L"Mai-Ling Kick Fire", 0x41DE80, 0x41DF00, indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Kick Fireball", 0x41DF80, 0x41E000, indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Kick HCB.1/2/3 Fireball", 0x41e080, 0x41E100, indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x41e100, 0x41e180, indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x41f200, 0x41f300, indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Kick Ultimate Guard Flash and Burn 1", 0x420800, 0x420880, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Burn 2", 0x420880, 0x420900, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 1", 0x420900, 0x420980, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 2", 0x420980, 0x420A00, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 1", 0x420A00, 0x420A80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 2", 0x420A80, 0x420B00, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 3", 0x420B00, 0x420B80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 4", 0x420B80, 0x420C00, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 1", 0x420C00, 0x420C80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 2", 0x420C80, 0x420D00, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 3", 0x420D00, 0x420D80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 1", 0x420D80, 0x420E00, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 2", 0x420E00, 0x420E80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 3", 0x420E80, 0x420F00, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 4", 0x420F00, 0x420F80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 5", 0x420F80, 0x421000, indexRedEarthSprites_MaiLing, 0 },
    { L"Mirror Trapped - Mai-Ling Kick",    0x434300, 0x434380, indexRedEarthSprites_MaiLing, 0x0 },
    { L"Mai Kick Trapped in Ravange's Sarcophagus", 0x42fd00, 0x42fd80 },

    { L"Unknown Mai Palette", 0x41df00, 0x41df80 },
    { L"Unknown Mai Palette 2", 0x41e000, 0x41e080 },
};

const sGame_PaletteDataset REDEARTH_A_MAILING_BONUS_PALETTES[] =
{
    { L"Mai-Ling Character Not Selected",    0x1DF300, 0x1DF380, indexRedEarthSprites_MaiLing, 0x11 },
    { L"Mai-Ling Character Selected",        0x1DEC80, 0x1DED00, indexRedEarthSprites_MaiLing, 0x11 },
    { L"Mai-Ling Character Select Portrait", 0x1DF080, 0x1DF100, indexRedEarthSprites_MaiLing, 0x12 },
    { L"P1 Mai-Ling Character Select Portrait Highlighted", 0x1E0E80, 0x1E0F00, indexRedEarthSprites_MaiLing, 0x11 },
    { L"P2 Mai-Ling Character Select Portrait Highlighted", 0x1E3080, 0x1E3100, indexRedEarthSprites_MaiLing, 0x11 },
    { L"Mai Character Not Selected P1", 0x1e1500, 0x1e1580, indexRedEarthSprites_MaiLing, 0x11 },
    { L"Mai Character Not Selected P2", 0x1e3700, 0x1e3780, indexRedEarthSprites_MaiLing, 0x11 },
};

//Bosses
const sGame_PaletteDataset REDEARTH_A_BLADE_PALETTES[] =
{
    { L"Blade/Mirror Frame", 0x433c00, 0x433c80, indexRedEarthSprites_Blade, 0x00, &pairNext },
    { L"Emerald FX/Intro 1/Adrayer+attacking gauntlets", 0x433c80, 0x433d00, indexRedEarthSprites_Blade, 0x01 },
    { L"Emerald FX/Intro 2", 0x433d00, 0x433d80, indexRedEarthSprites_Bonus, 0x0c },
    { L"Emerald FX/Intro 3", 0x433d80, 0x433e00, indexRedEarthSprites_Bonus, 0x0d },
    { L"Blade Lifebar Portrait", 0x406ac0, 0x406ae0, indexRedEarthSprites_Blade, 0x10 },
    { L"Hit Ground after swing FX/Mirror Glass", 0x433e00, 0x433f00, indexRedEarthSprites_Blade, 0x03 },
    { L"Blade Burned 1", 0x436600, 0x436680, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Burned 2", 0x436680, 0x436700, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Shocked 1", 0x436700, 0x436780, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Shocked 2", 0x436780, 0x436800, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 1", 0x436800, 0x436880, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 2", 0x436880, 0x436900, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 3", 0x436900, 0x436980, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 4", 0x436980, 0x436a00, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 1", 0x436a00, 0x436a80, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 2", 0x436a80, 0x436b00, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 3", 0x436b00, 0x436b80, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 1", 0x436b80, 0x436c00, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 2", 0x436c00, 0x436c80, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 3", 0x436c80, 0x436d00, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 4", 0x436d00, 0x436d80, indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 5", 0x436d80, 0x436e00, indexRedEarthSprites_Blade, 0x01 },

    { L"Blade's Unknown Palette", 0x433f80, 0x434000 },
};

const sGame_PaletteDataset REDEARTH_A_HAUZER_PALETTES[] =
{
    { L"Hauzer", 0x421000, 0x421080, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Lifebar Portrait", 0x406b20, 0x406b40, indexRedEarthSprites_Hauzer, 0x10 },
    { L"Hauzer Hit Effect 1", 0x423e80, 0x423f00, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Hit Effect 2", 0x421180, 0x421200, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Fire Effects", 0x421200, 0x421280 },
    { L"Hauzer Lava Ball", 0x421280, 0x421300 },
    { L"Hauzer Gust Flame 1", 0x421380, 0x421400, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Gust Flame 2", 0x421400, 0x421480, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 1", 0x421580, 0x421600, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 2", 0x421600, 0x421680, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 3", 0x421680, 0x421700, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 4", 0x421700, 0x421780, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 5", 0x421780, 0x421800, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 6", 0x421800, 0x421880, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 1", 0x421a00, 0x421a80, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 2", 0x421980, 0x421a00, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 3", 0x421900, 0x421980, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 4", 0x421880, 0x421900, indexRedEarthSprites_Hauzer, 0 },

    { L"Hauzer Burned 1", 0x423a00, 0x423a80, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Burned 2", 0x423a80, 0x423b00, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Shocked 1", 0x423b00, 0x423b80, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Shocked 2", 0x423b80, 0x423c00, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 1", 0x423c00, 0x423c80, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 2", 0x423c80, 0x423d00, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 3", 0x423d00, 0x423d80, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 4", 0x423d80, 0x423e00, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Petrified 1", 0x423e00, 0x423e80, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Petrified 2", 0x423f00, 0x423f80, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 1", 0x423f80, 0x424000, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 2", 0x424000, 0x424080, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 3", 0x424080, 0x424100, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 4", 0x424100, 0x424180, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 5", 0x424180, 0x424200, indexRedEarthSprites_Hauzer, 0 },

    { L"Hauzer's Unknown Palette 1", 0x421480, 0x421580 },
    { L"Hauzer's Unknown Palette 2", 0x421a80, 0x421b00 },
    { L"Hauzer's Unknown Palette 3", 0x421b00, 0x421b80 },
    { L"Hauzer's Unknown Palette 4", 0x421b80, 0x421c00 },
    { L"Hauzer's Unknown Palette 5", 0x421c00, 0x421c80 },
    { L"Hauzer's Unknown Palette 6", 0x421c80, 0x421d00 },
    { L"Hauzer's Unknown Palette 7", 0x421d00, 0x421d80 },
    { L"Hauzer's Unknown Palette 8", 0x421d80, 0x421e00 },
    { L"Hauzer's Unknown Palette 9", 0x421e00, 0x421e80 },
    { L"Hauzer's Unknown Palette 10", 0x421e80, 0x421f00 },
    { L"Hauzer's Unknown Palette 11", 0x421f00, 0x421f80 },
};

const sGame_PaletteDataset REDEARTH_A_HYDRON_PALETTES[] =
{
    { L"Hydron", 0x427400, 0x427480, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Lifebar Portrait", 0x406ae0, 0x406b00, indexRedEarthSprites_Hydron, 0x10 },
    { L"Poison Blast FX", 0x427500, 0x427580 },
    { L"Squid boys spawn Tentacle", 0x427580, 0x427600 },

    { L"Electric PalFX1", 0x427600, 0x427680, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427680, 0x427700, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427780, 0x427800, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427800, 0x427880, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427880, 0x427900, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427900, 0x427980, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427980, 0x427a00, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427a00, 0x427a80, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427a80, 0x427b00, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427b00, 0x427b80, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427b80, 0x427c00, indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427c00, 0x427c80, indexRedEarthSprites_Hydron, 0 },
    { L"Firecharge PalFX", 0x427d00, 0x427d80, indexRedEarthSprites_Hydron, 0 },
    { L"Spin attack FX", 0x427d80, 0x427e00 },
    { L"Squid dudes spawn FX", 0x428000, 0x428080 },

    { L"Isia, Janna, Elena", 0x428300, 0x428380, indexRedEarthSprites_Hydron, 0x01 },
    { L"Isia's White Dog", 0x428380, 0x428400, indexRedEarthSprites_Hydron, 0x02 },
    { L"Isia's Gray Dog", 0x428400, 0x428480, indexRedEarthSprites_Hydron, 0x02 },

    { L"Hydron Burned 1", 0x429e00, 0x429e80, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Burned 2", 0x429e80, 0x429f00, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Shocked 1", 0x429f00, 0x429f80, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Shocked 2", 0x429f80, 0x42a000, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 1", 0x42a000, 0x42a080, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 2", 0x42a080, 0x42a100, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 3", 0x42a100, 0x42a180, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 4", 0x42a180, 0x42a200, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 1", 0x42a200, 0x42a280, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 2", 0x42a280, 0x42a300, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 3", 0x42a300, 0x42a380, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 1", 0x42a380, 0x42a400, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 2", 0x42a400, 0x42a480, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 3", 0x42a480, 0x42a500, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 4", 0x42a500, 0x42a580, indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 5", 0x42a580, 0x42a600, indexRedEarthSprites_Hydron, 0 },

    { L"Hydron's Unknown Palette 1", 0x427480, 0x427500 },
    { L"Hydron's Unknown Palette 2", 0x427700, 0x427780 },
    { L"Hydron's Unknown Palette 3", 0x427c80, 0x427d00 },
    { L"Hydron's Unknown Palette 4", 0x427e00, 0x428000 },
    { L"Hydron's Unknown Palette 5 (1/2) 0x428080", 0x428080, 0x428280 },
    { L"Hydron's Unknown Palette 5 (2/2) 0x428280", 0x428280, 0x428300 },
};

const sGame_PaletteDataset REDEARTH_A_KONGOU_PALETTES[] =
{
    { L"Kongou", 0x424200, 0x424280, indexRedEarthSprites_Kongou, 0, &pairNext },
    { L"Kanabo", 0x424280, 0x424300, indexRedEarthSprites_Kongou, 1 },
    { L"Stomach acid", 0x424300, 0x424380, indexRedEarthSprites_Kongou, 0x02 },

    { L"Kongou Lifebar Portrait",  0x406a80, 0x406aa0, indexRedEarthSprites_Kongou, 0x10 },

    { L"Kongou Burned 1", 0x426c00, 0x426c80, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Burned 2", 0x426c80, 0x426d00, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Shocked 1", 0x426d00, 0x426d80, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Shocked 2", 0x426d80, 0x426e00, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 1", 0x426e00, 0x426e80, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 2", 0x426e80, 0x426f00, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 3", 0x426f00, 0x426f80, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 4", 0x426f80, 0x427000, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Petrified 1", 0x427000, 0x427080, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Petrified 2", 0x427080, 0x427100, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Petrified 3", 0x427100, 0x427180, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 1", 0x427180, 0x427200, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 2", 0x427200, 0x427280, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 3", 0x427280, 0x427300, indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 4", 0x427300, 0x427380, indexRedEarthSprites_Kongou, 0 },
    { L"Hurt flash", 0x427380, 0x427400, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 1", 0x424380, 0x424400, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 2", 0x424400, 0x424480, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 3", 0x424480, 0x424500, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 4", 0x424500, 0x424580, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 5", 0x424580, 0x424600, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 6", 0x424600, 0x424680, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 7", 0x424680, 0x424700, indexRedEarthSprites_Kongou, 0 },
    { L"Tanuma", 0x424700, 0x424880, indexRedEarthSprites_Kongou, 0x03 },
};

const sGame_PaletteDataset REDEARTH_A_LAVIA_PALETTES[] =
{
    { L"Lavia", 0x42a600, 0x42a680, indexRedEarthSprites_Lavia },
    { L"Lavia Lifebar Portrait", 0x406b00, 0x406b20, indexRedEarthSprites_Lavia, 0x10 },
    { L"Intro Effects, Soul, Dust, Fire", 0x42a680, 0x42a700 },
    { L"Sparks", 0x42a700, 0x42a780, indexRedEarthSprites_Lavia, 0x02 },
    { L"Feather Projectiles", 0x42a780, 0x42a800 },
    { L"Lavia's Soul Second Palette", 0x42a800, 0x42a880 },

    { L"Lavia Burned 1", 0x42d000, 0x42d080, indexRedEarthSprites_Lavia },
    { L"Lavia Burned 2", 0x42d080, 0x42d100, indexRedEarthSprites_Lavia },
    { L"Lavia Shocked 1", 0x42d100, 0x42d180, indexRedEarthSprites_Lavia },
    { L"Lavia Shocked 2", 0x42d180, 0x42d200, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 1", 0x42d200, 0x42d280, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 2", 0x42d280, 0x42d300, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 3", 0x42d300, 0x42d380, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 4", 0x42d380, 0x42d400, indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 1", 0x42d400, 0x42d480, indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 2", 0x42d480, 0x42d500, indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 3", 0x42d500, 0x42d580, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 1", 0x42d580, 0x42d600, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 2", 0x42d600, 0x42d680, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 3", 0x42d680, 0x42d700, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 4", 0x42d700, 0x42d780, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 5", 0x42d780, 0x42d800, indexRedEarthSprites_Lavia },
};

const sGame_PaletteDataset REDEARTH_A_RAVANGE_PALETTES[] =
{
    { L"Ravange", 0x42d800, 0x42d880, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Lifebar Portrait", 0x406aa0, 0x406ac0, indexRedEarthSprites_Ravange, 0x10 },

    { L"Fire FX", 0x42d880, 0x42d900 },
    { L"Beam FX", 0x42d900, 0x42d980 },
    { L"Sand FX", 0x42d980, 0x42da00 },
    { L"Shield", 0x42da80, 0x42db80 },
    { L"Fire Breath flash", 0x42db80, 0x42dc00, indexRedEarthSprites_Ravange },
    { L"Fire Breath 1", 0x42dc00, 0x42dc80, indexRedEarthSprites_Ravange },
    { L"Fire Breath 2", 0x42dc80, 0x42dd00, indexRedEarthSprites_Ravange },
    { L"Fire Breath 3", 0x42dd00, 0x42dd80, indexRedEarthSprites_Ravange },
    { L"Fire Breath 4", 0x42dd80, 0x42de00, indexRedEarthSprites_Ravange },
    { L"Firing Beam 1", 0x42de00, 0x42de80, indexRedEarthSprites_Ravange },
    { L"Firing Beam 2", 0x42de80, 0x42df00, indexRedEarthSprites_Ravange },
    { L"Firing Beam 3", 0x42df00, 0x42df80, indexRedEarthSprites_Ravange },
    { L"Firing Beam 4", 0x42df80, 0x42e000, indexRedEarthSprites_Ravange },
    { L"Spawning Sand 1", 0x42e400, 0x42e480, indexRedEarthSprites_Ravange },
    { L"Spawning Sand 2", 0x42e480, 0x42e500, indexRedEarthSprites_Ravange },
    { L"Spawning Sand 3", 0x42e500, 0x42e580, indexRedEarthSprites_Ravange },
    { L"Spawning Sand 4", 0x42e580, 0x42e600, indexRedEarthSprites_Ravange },
    { L"Poison Mist FX1", 0x42ea00, 0x42eb00 },
    { L"Ravange Sphinx Intro", 0x42eb00, 0x42eb80 },
    { L"Ravange Sphinx Flash 1", 0x42eb80, 0x42ec00, indexRedEarthSprites_Ravange },
    { L"Ravange Sphinx Flash 2", 0x42ec00, 0x42ec80, indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 1", 0x42ec80, 0x42ed00, indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 2", 0x42ed00, 0x42ed80, indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 3", 0x42ed80, 0x42ee00, indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 4", 0x42ee00, 0x42ee80, indexRedEarthSprites_Ravange },
    { L"Ram attack 1", 0x42e600, 0x42e680, indexRedEarthSprites_Ravange },
    { L"Ram attack 2", 0x42e680, 0x42e700, indexRedEarthSprites_Ravange },
    { L"Ram attack 3", 0x42e700, 0x42e780, indexRedEarthSprites_Ravange },
    { L"Ram attack 4", 0x42e780, 0x42e800, indexRedEarthSprites_Ravange },
    { L"Lion attack 1", 0x42e800, 0x42e880, indexRedEarthSprites_Ravange },
    { L"Lion attack 2", 0x42e880, 0x42e900, indexRedEarthSprites_Ravange },
    { L"Lion attack 3", 0x42e900, 0x42e980, indexRedEarthSprites_Ravange },
    { L"Lion attack 4", 0x42e980, 0x42ea00 },
    { L"Clara Tantra",  0x42f300, 0x42f380, indexRedEarthSprites_Ravange, 0x0a },
    { L"Clara Flashing 1", 0x42f380, 0x42f400, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 2", 0x42f400, 0x42f480, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 3", 0x42f480, 0x42f500, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 4", 0x42f500, 0x42f580, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 5", 0x42f580, 0x42f600, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 6", 0x42f600, 0x42f680, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 7", 0x42f680, 0x42f700, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 8", 0x42f700, 0x42f780, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 9", 0x42f780, 0x42f800, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 10", 0x42f800, 0x42f880, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 11", 0x42f880, 0x42f900, indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 12", 0x42f900, 0x42f980, indexRedEarthSprites_Ravange, 0x08 },
    { L"Pyre", 0x42f980, 0x42fa00, indexRedEarthSprites_Ravange, 0x09 },
    { L"Clara ball FX", 0x42fb00, 0x42fb80 },

    { L"Ravange's Sand Ladies", 0x42ee80, 0x42ef00 },
    { L"Kids", 0x42fa00, 0x42fb00, indexRedEarthSprites_Ravange, 0x01 },

    { L"Ravange Burned 1", 0x430200, 0x430280, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Burned 2", 0x430280, 0x430300, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Shocked 1", 0x430300, 0x430380, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Shocked 2", 0x430380, 0x430400, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 1", 0x430400, 0x430480, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 2", 0x430480, 0x430500, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 3", 0x430500, 0x430580, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 4", 0x430580, 0x430600, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 1", 0x430600, 0x430680, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 2", 0x430680, 0x430700, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 3", 0x430700, 0x430780, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 1", 0x430780, 0x430800, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 2", 0x430800, 0x430880, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 3", 0x430880, 0x430900, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 4", 0x430900, 0x430980, indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 5", 0x430980, 0x430a00, indexRedEarthSprites_Ravange, 0x00 },

    { L"Ravange's 2nd Form Transformation Explosions", 0x133480, 0x133500 },
    { L"Ravange's Unknown Palette 1", 0x42da00, 0x42da80 },
    { L"Ravange's Unknown Palette 2 (1/2) 0x42e000", 0x42e000, 0x42e200 },
    { L"Ravange's Unknown Palette 2 (2/2) 0x42e200", 0x42e200, 0x42e400 },

    { L"Ravange's Unknown Palette 3", 0x42f100, 0x42f280 },
};

const sGame_PaletteDataset REDEARTH_A_GIGI_PALETTES[] =
{
    { L"Gi Gi Red Form", 0x430a00, 0x430a80, indexRedEarthSprites_GiGi, 0x09, &pairNext4Palettes },
    { L"Gi Gi From Red to Blue Switch", 0x431700, 0x431780, indexRedEarthSprites_GiGi, 0x07 },
    { L"Gi Gi From Blue to Red Switch", 0x431780, 0x431800, indexRedEarthSprites_GiGi, 0x06 },
    { L"Gi Gi Blue Form", 0x431800, 0x431880, indexRedEarthSprites_GiGi, 0x08 },
    { L"Gi Gi Lifebar Portrait", 0x406b40, 0x406b60, indexRedEarthSprites_GiGi, 0x10 },

    { L"Gi Gi Block 1", 0x430c00, 0x430c80, indexRedEarthSprites_GiGi, 0x01 },
    { L"Gi Gi Block & Golden Chair 2", 0x430c80, 0x430d00, indexRedEarthSprites_GiGi, 0x02 },
    { L"Gi Gi Block 3", 0x430d00, 0x430d80, indexRedEarthSprites_GiGi, 0x03 },
    { L"Gi Gi Block 4", 0x430d80, 0x430e00, indexRedEarthSprites_GiGi, 0x04 },

    { L"Gi Gi Columns & Rocks 1/2", 0x431180, 0x431200, indexRedEarthSprites_GiGi, 0x05 },
    { L"Gi Gi Columns & Rocks 2/2", 0x431600, 0x431680, indexRedEarthSprites_GiGi, 0x05 },
    { L"Gi Gi Column Summon", 0x431280, 0x431300, indexRedEarthSprites_GiGi, 0x0c },
    { L"Gi Gi Falling Rock Summon", 0x431300, 0x431380, indexRedEarthSprites_GiGi, 0x0c },
    { L"Gi Gi Spear Summon", 0x431380, 0x431400, indexRedEarthSprites_GiGi, 0x0c },

    { L"Gi Gi Ground Spears", 0x431200, 0x431280, indexRedEarthSprites_GiGi, 0x0a },
    { L"Gi Gi Super Fast Sword Slash", 0x431000, 0x431080, indexRedEarthSprites_GiGi, 0x0e },
    { L"Gi Gi Lighter Sword Slash", 0x431080, 0x431100, indexRedEarthSprites_GiGi, 0x0b },
    { L"Gi Gi Stunned", 0x431100, 0x431180, indexRedEarthSprites_GiGi, 0x20 },

    { L"Gi Gi Victory Column 1/4", 0x431400, 0x431480, indexRedEarthSprites_GiGi, 0x0f },
    { L"Gi Gi Victory Column 2/4", 0x431480, 0x431500, indexRedEarthSprites_GiGi, 0x0f },
    { L"Gi Gi Victory Column 3/4", 0x431500, 0x431580, indexRedEarthSprites_GiGi, 0x0f },
    { L"Gi Gi Victory Column 4/4", 0x431580, 0x431600, indexRedEarthSprites_GiGi, 0x0f },

    { L"Red Form Burned 1", 0x433400, 0x433480, indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Burned 2", 0x433480, 0x433500, indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Shocked 1", 0x433500, 0x433580, indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Shocked 2", 0x433580, 0x433600, indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Petrified 1", 0x433800, 0x433880, indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Petrified 2", 0x433880, 0x433900, indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Petrified 3", 0x433900, 0x433980, indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Burned 1", 0x433080, 0x433100, indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Burned 2", 0x433100, 0x433180, indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Shocked 1", 0x433180, 0x433200, indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Shocked 2", 0x433200, 0x433280, indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Petrified 1", 0x433280, 0x433300, indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Petrified 2", 0x433300, 0x433380, indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Petrified 3", 0x433380, 0x433400, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 1", 0x433600, 0x433680, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 2", 0x433680, 0x433700, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 3", 0x433700, 0x433780, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 4", 0x433780, 0x433800, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 1", 0x433980, 0x433a00, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 2", 0x433a00, 0x433a80, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 3", 0x433a80, 0x433b00, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 4", 0x433b00, 0x433b80, indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 5", 0x433b80, 0x433c00, indexRedEarthSprites_GiGi, 0x20 },

    { L"Gi Gi's Unknown Palette Range 1", 0x430a80, 0x430c00 },
    { L"Gi Gi's Unknown Palette Range 2", 0x430e00, 0x431000 },
};

const sGame_PaletteDataset REDEARTH_A_SCION_PALETTES[] =
{
    { L"Scion", 0x436e00, 0x436e80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Lifebar Portrait", 0x4066c0, 0x4066e0, indexRedEarthSprites_Scion, 0x10 },

    { L"Scion Teleport 1", 0x436f00, 0x436f80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Teleport 2", 0x436f80, 0x437000, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Teleport 3", 0x437000, 0x437080, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Teleport 4", 0x437080, 0x437100, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Blockstun",  0x436e80, 0x436f00, indexRedEarthSprites_Scion, 0x00 },

    { L"Scion Burned 1", 0x439800, 0x439880, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Burned 2", 0x439880, 0x439900, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Shocked 1", 0x439900, 0x439980, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Shocked 2", 0x439980, 0x439a00, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 1", 0x439a00, 0x439a80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 2", 0x439a80, 0x439b00, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 3", 0x439b00, 0x439b80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 4", 0x439b80, 0x439c00, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Petrified 1", 0x439d00, 0x439d80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Petrified 2", 0x439c80, 0x439d00, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Petrified 3", 0x439c00, 0x439c80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 1", 0x439d80, 0x439e00, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 2", 0x439e00, 0x439e80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 3", 0x439e80, 0x439f00, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 4", 0x439f00, 0x439f80, indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 5", 0x439f80, 0x43a000, indexRedEarthSprites_Scion, 0x00 },

    { L"Scion's Effects Range (1/6) 0x437a00", 0x437a00, 0x437c00 },
    { L"Scion's Effects Range (2/6) 0x437c00", 0x437c00, 0x437e00 },
    { L"Scion's Effects Range (3/6) 0x437e00", 0x437e00, 0x438000 },
    { L"Scion's Effects Range (4/6) 0x438000", 0x438000, 0x438200 },
    { L"Scion's Effects Range (5/6) 0x438200", 0x438200, 0x438400 },
    { L"Scion's Effects Range (6/6) 0x438400", 0x438400, 0x438500 },

    // Scion's Dragon Palettes
    { L"Scion's Ice Dragon", 0x437180, 0x437200, indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Ice Dragon", 0x437100, 0x437180, indexRedEarthSprites_Scion, 0x01 },
    { L"Ice Dragon Teleport 1", 0x437280, 0x437300, indexRedEarthSprites_Scion, 0x01 },
    { L"Ice Dragon Teleport 2", 0x437200, 0x437280, indexRedEarthSprites_Scion, 0x01 },
    { L"Scion's Poison Gas Dragon", 0x437380, 0x437400, indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Poison Gas Dragon", 0x437300, 0x437380, indexRedEarthSprites_Scion, 0x01 },
    { L"Poison Gas Dragon Teleport 1", 0x437480, 0x437500, indexRedEarthSprites_Scion, 0x01 },
    { L"Poison Gas Dragon Teleport 2", 0x437400, 0x437480, indexRedEarthSprites_Scion, 0x01 },
    { L"Scion's Fire Dragon", 0x437580, 0x437600, indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Fire Dragon", 0x437500, 0x437580, indexRedEarthSprites_Scion, 0x01 },
    { L"Fire Dragon Teleport 1", 0x437680, 0x437700, indexRedEarthSprites_Scion, 0x01 },
    { L"Fire Dragon Teleport 2", 0x437600, 0x437680, indexRedEarthSprites_Scion, 0x01 },
    { L"Scion's Thunder Dragon", 0x437780, 0x437800, indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Thunder Dragon", 0x437700, 0x437780, indexRedEarthSprites_Scion, 0x01 },
    { L"Thunder Dragon Teleport 1", 0x437880, 0x437900, indexRedEarthSprites_Scion, 0x01 },
    { L"Thunder Dragon Teleport 2", 0x437800, 0x437880, indexRedEarthSprites_Scion, 0x01 },

    { L"Dragon's Thunderbreath 1 & Icebreath", 0x437900, 0x437980, indexRedEarthSprites_Scion, 0x02 },
    { L"Dragon's Thunderbreath 2", 0x437980, 0x437a00, indexRedEarthSprites_Scion, 0x02 },
};

//Extra Stuff
const sGame_PaletteDataset REDEARTH_A_CHARACTERSELECT_CORE_PALETTES[] =
{
    { L"1P and 2P", 0x1DED80, 0x1DEE00, indexRedEarthSprites_Bonus, 0x00 },
    { L"1P and 2P Flash", 0x1DEE00, 0x1DEE80, indexRedEarthSprites_Bonus, 0x00 },
    { L"Character Selector Ring", 0x1DEE80, 0x1DEF00, indexRedEarthSprites_Bonus, 0x01 },
    { L"Ready Warrior (1/15)", 0x1DF400, 0x1DF480, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (2/15)", 0x1DF480, 0x1DF500, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (3/15)", 0x1DF500, 0x1DF580, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (4/15)", 0x1DF580, 0x1DF600, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (5/15)", 0x1DF600, 0x1DF680, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (6/15)", 0x1DF680, 0x1DF700, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (7/15)", 0x1DF700, 0x1DF780, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (8/15)", 0x1DF780, 0x1DF800, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (9/15)", 0x1DF800, 0x1DF880, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (10/15)", 0x1DF880, 0x1DF900, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (11/15)", 0x1DF900, 0x1DF980, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (12/15)", 0x1DF980, 0x1DFA00, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (13/15)", 0x1DFA00, 0x1DFA80, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (14/15)", 0x1DFA80, 0x1DFB00, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (15/15)", 0x1DFB00, 0x1DFB80, indexRedEarthSprites_Bonus, 0x03 },
    { L"Character Select Background Clouds (1/4)", 0x1DE000, 0x1DE080, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (2/4)", 0x1DE080, 0x1DE100, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (3/4)", 0x1DE100, 0x1DE180, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (4/4)", 0x1DE180, 0x1DE200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Skyline (1/4)", 0x1DE200, 0x1DE280, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (2/4)", 0x1DE280, 0x1DE300, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (3/4)", 0x1DE300, 0x1DE380, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (4/4)", 0x1DE380, 0x1DE400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Clouds (1/4)", 0x1DE400, 0x1DE480, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (2/4)", 0x1DE480, 0x1DE500, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (3/4)", 0x1DE500, 0x1DE580, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (4/4)", 0x1DE580, 0x1DE600, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Skyline (1/4)", 0x1DE600, 0x1DE680, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (2/4)", 0x1DE680, 0x1DE700, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (3/4)", 0x1DE700, 0x1DE780, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (4/4)", 0x1DE780, 0x1DE800, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Vs Screen Transition - Leo (1/4)",   0x406000, 0x406100, indexRedEarthSprites_Bonus, 0x35 },
    { L"Vs Screen Transition - Kenji (2/4)", 0x406100, 0x406200, indexRedEarthSprites_Bonus, 0x35 },
    { L"Vs Screen Transition - Tessa (3/4)", 0x406200, 0x406300, indexRedEarthSprites_Bonus, 0x35 },
    { L"Vs Screen Transition - Mai-Ling (4/4)", 0x406300, 0x406400, indexRedEarthSprites_Bonus, 0x35 },
    { L"Victory Screen (1/6)", 0x1DE800, 0x1DE880, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (2/6)", 0x1DE880, 0x1DE900, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (3/6)", 0x1DE900, 0x1DE980, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (4/6)", 0x1DE980, 0x1DEA00, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (5/6)", 0x1DEA00, 0x1DEA80, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (6/6)", 0x1DEA80, 0x1DEB00, indexRedEarthSprites_Bonus, 0x02 },

    // Character Select
    { L"Password 1", 0x1dfe00, 0x1dfe80, indexRedEarthSprites_Bonus, 0x3f },
    { L"Password 2", 0x1dfe80, 0x1dff00, indexRedEarthSprites_Bonus, 0x40 },
    { L"Password 3", 0x1dff00, 0x1dff80, indexRedEarthSprites_Bonus, 0x41 },
    { L"Password 4", 0x1dff80, 0x1e0000, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 5", 0x1e0000, 0x1e0080, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 6", 0x1e0080, 0x1e0100, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 7", 0x1e0100, 0x1e0180, indexRedEarthSprites_Bonus, 0x42 },
    { L"Unknown 1", 0x1df100, 0x1df180 },
    { L"Unknown 2", 0x1e0180, 0x1e0200 },
};

const sGame_PaletteDataset REDEARTH_A_CHARACTERSELECT_P1_PALETTES[] =
{
    { L"1P and 2P", 0x1DED80 + 0x2200, 0x1DEE00 + 0x2200, indexRedEarthSprites_Bonus, 0x00 },
    { L"1P and 2P Flash", 0x1DEE00 + 0x2200, 0x1DEE80 + 0x2200, indexRedEarthSprites_Bonus, 0x00 },
    { L"Character Selector Ring", 0x1DEE80 + 0x2200, 0x1DEF00 + 0x2200, indexRedEarthSprites_Bonus, 0x01 },
    { L"Ready Warrior (1/15)", 0x1DF400 + 0x2200, 0x1DF480 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (2/15)", 0x1DF480 + 0x2200, 0x1DF500 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (3/15)", 0x1DF500 + 0x2200, 0x1DF580 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (4/15)", 0x1DF580 + 0x2200, 0x1DF600 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (5/15)", 0x1DF600 + 0x2200, 0x1DF680 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (6/15)", 0x1DF680 + 0x2200, 0x1DF700 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (7/15)", 0x1DF700 + 0x2200, 0x1DF780 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (8/15)", 0x1DF780 + 0x2200, 0x1DF800 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (9/15)", 0x1DF800 + 0x2200, 0x1DF880 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (10/15)", 0x1DF880 + 0x2200, 0x1DF900 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (11/15)", 0x1DF900 + 0x2200, 0x1DF980 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (12/15)", 0x1DF980 + 0x2200, 0x1DFA00 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (13/15)", 0x1DFA00 + 0x2200, 0x1DFA80 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (14/15)", 0x1DFA80 + 0x2200, 0x1DFB00 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (15/15)", 0x1DFB00 + 0x2200, 0x1DFB80 + 0x2200, indexRedEarthSprites_Bonus, 0x03 },
    { L"Character Select Background Clouds (1/4)", 0x1DE000 + 0x2200, 0x1DE080 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (2/4)", 0x1DE080 + 0x2200, 0x1DE100 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (3/4)", 0x1DE100 + 0x2200, 0x1DE180 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (4/4)", 0x1DE180 + 0x2200, 0x1DE200 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Skyline (1/4)", 0x1DE200 + 0x2200, 0x1DE280 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (2/4)", 0x1DE280 + 0x2200, 0x1DE300 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (3/4)", 0x1DE300 + 0x2200, 0x1DE380 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (4/4)", 0x1DE380 + 0x2200, 0x1DE400 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Clouds (1/4)", 0x1DE400 + 0x2200, 0x1DE480 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (2/4)", 0x1DE480 + 0x2200, 0x1DE500 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (3/4)", 0x1DE500 + 0x2200, 0x1DE580 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (4/4)", 0x1DE580 + 0x2200, 0x1DE600 + 0x2200, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Skyline (1/4)", 0x1DE600 + 0x2200, 0x1DE680 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (2/4)", 0x1DE680 + 0x2200, 0x1DE700 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (3/4)", 0x1DE700 + 0x2200, 0x1DE780 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (4/4)", 0x1DE780 + 0x2200, 0x1DE800 + 0x2200, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Victory Screen (1/6)", 0x1DE800 + 0x2200, 0x1DE880 + 0x2200, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (2/6)", 0x1DE880 + 0x2200, 0x1DE900 + 0x2200, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (3/6)", 0x1DE900 + 0x2200, 0x1DE980 + 0x2200, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (4/6)", 0x1DE980 + 0x2200, 0x1DEA00 + 0x2200, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (5/6)", 0x1DEA00 + 0x2200, 0x1DEA80 + 0x2200, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (6/6)", 0x1DEA80 + 0x2200, 0x1DEB00 + 0x2200, indexRedEarthSprites_Bonus, 0x02 },

    // Character Select
    { L"Password 1", 0x1dfe00 + 0x2200, 0x1dfe80 + 0x2200, indexRedEarthSprites_Bonus, 0x3f },
    { L"Password 2", 0x1dfe80 + 0x2200, 0x1dff00 + 0x2200, indexRedEarthSprites_Bonus, 0x40 },
    { L"Password 3", 0x1dff00 + 0x2200, 0x1dff80 + 0x2200, indexRedEarthSprites_Bonus, 0x41 },
    { L"Password 4", 0x1dff80 + 0x2200, 0x1e0000 + 0x2200, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 5", 0x1e0000 + 0x2200, 0x1e0080 + 0x2200, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 6", 0x1e0080 + 0x2200, 0x1e0100 + 0x2200, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 7", 0x1e0100 + 0x2200, 0x1e0180 + 0x2200, indexRedEarthSprites_Bonus, 0x42 },
    { L"Unknown 1", 0x1df100 + 0x2200, 0x1df180 + 0x2200 },
    { L"Unknown 2", 0x1e0180 + 0x2200, 0x1e0200 + 0x2200 },
};

const sGame_PaletteDataset REDEARTH_A_CHARACTERSELECT_P2_PALETTES[] =
{
    { L"1P and 2P", 0x1DED80 + 0x4400, 0x1DEE00 + 0x4400, indexRedEarthSprites_Bonus, 0x00 },
    { L"1P and 2P Flash", 0x1DEE00 + 0x4400, 0x1DEE80 + 0x4400, indexRedEarthSprites_Bonus, 0x00 },
    { L"Character Selector Ring", 0x1DEE80 + 0x4400, 0x1DEF00 + 0x4400, indexRedEarthSprites_Bonus, 0x01 },
    { L"Ready Warrior (1/15)", 0x1DF400 + 0x4400, 0x1DF480 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (2/15)", 0x1DF480 + 0x4400, 0x1DF500 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (3/15)", 0x1DF500 + 0x4400, 0x1DF580 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (4/15)", 0x1DF580 + 0x4400, 0x1DF600 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (5/15)", 0x1DF600 + 0x4400, 0x1DF680 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (6/15)", 0x1DF680 + 0x4400, 0x1DF700 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (7/15)", 0x1DF700 + 0x4400, 0x1DF780 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (8/15)", 0x1DF780 + 0x4400, 0x1DF800 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (9/15)", 0x1DF800 + 0x4400, 0x1DF880 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (10/15)", 0x1DF880 + 0x4400, 0x1DF900 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (11/15)", 0x1DF900 + 0x4400, 0x1DF980 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (12/15)", 0x1DF980 + 0x4400, 0x1DFA00 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (13/15)", 0x1DFA00 + 0x4400, 0x1DFA80 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (14/15)", 0x1DFA80 + 0x4400, 0x1DFB00 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Ready Warrior (15/15)", 0x1DFB00 + 0x4400, 0x1DFB80 + 0x4400, indexRedEarthSprites_Bonus, 0x03 },
    { L"Character Select Background Clouds (1/4)", 0x1DE000 + 0x4400, 0x1DE080 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (2/4)", 0x1DE080 + 0x4400, 0x1DE100 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (3/4)", 0x1DE100 + 0x4400, 0x1DE180 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Clouds (4/4)", 0x1DE180 + 0x4400, 0x1DE200 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Background Skyline (1/4)", 0x1DE200 + 0x4400, 0x1DE280 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (2/4)", 0x1DE280 + 0x4400, 0x1DE300 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (3/4)", 0x1DE300 + 0x4400, 0x1DE380 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Background Skyline (4/4)", 0x1DE380 + 0x4400, 0x1DE400 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Clouds (1/4)", 0x1DE400 + 0x4400, 0x1DE480 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (2/4)", 0x1DE480 + 0x4400, 0x1DE500 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (3/4)", 0x1DE500 + 0x4400, 0x1DE580 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Clouds (4/4)", 0x1DE580 + 0x4400, 0x1DE600 + 0x4400, indexRedEarthSprites_Bonus, 0x0e, &pairNext4 },
    { L"Character Select Transition Skyline (1/4)", 0x1DE600 + 0x4400, 0x1DE680 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (2/4)", 0x1DE680 + 0x4400, 0x1DE700 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (3/4)", 0x1DE700 + 0x4400, 0x1DE780 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Character Select Transition Skyline (4/4)", 0x1DE780 + 0x4400, 0x1DE800 + 0x4400, indexRedEarthSprites_Bonus, 0x0f, &pairPrevious4 },
    { L"Victory Screen (1/6)", 0x1DE800 + 0x4400, 0x1DE880 + 0x4400, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (2/6)", 0x1DE880 + 0x4400, 0x1DE900 + 0x4400, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (3/6)", 0x1DE900 + 0x4400, 0x1DE980 + 0x4400, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (4/6)", 0x1DE980 + 0x4400, 0x1DEA00 + 0x4400, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (5/6)", 0x1DEA00 + 0x4400, 0x1DEA80 + 0x4400, indexRedEarthSprites_Bonus, 0x02 },
    { L"Victory Screen (6/6)", 0x1DEA80 + 0x4400, 0x1DEB00 + 0x4400, indexRedEarthSprites_Bonus, 0x02 },

    // Character Select
    { L"Password 1", 0x1dfe00 + 0x4400, 0x1dfe80 + 0x4400, indexRedEarthSprites_Bonus, 0x3f },
    { L"Password 2", 0x1dfe80 + 0x4400, 0x1dff00 + 0x4400, indexRedEarthSprites_Bonus, 0x40 },
    { L"Password 3", 0x1dff00 + 0x4400, 0x1dff80 + 0x4400, indexRedEarthSprites_Bonus, 0x41 },
    { L"Password 4", 0x1dff80 + 0x4400, 0x1e0000 + 0x4400, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 5", 0x1e0000 + 0x4400, 0x1e0080 + 0x4400, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 6", 0x1e0080 + 0x4400, 0x1e0100 + 0x4400, indexRedEarthSprites_Bonus, 0x42 },
    { L"Password 7", 0x1e0100 + 0x4400, 0x1e0180 + 0x4400, indexRedEarthSprites_Bonus, 0x42 },
    { L"Unknown 1", 0x1df100 + 0x4400, 0x1df180 + 0x4400 },
    { L"Unknown 2", 0x1e0180 + 0x4400, 0x1e0200 + 0x4400 },
};

const sGame_PaletteDataset REDEARTH_A_INTRO_PALETTES[] =
{
    { L"Capcom Logo 1", 0x320080, 0x320100, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 2", 0x320100, 0x320180, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 3", 0x320180, 0x320200, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 4", 0x320200, 0x320280, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 5", 0x320280, 0x320300, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 6", 0x320300, 0x320380, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 7", 0x320380, 0x320400, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 8", 0x320400, 0x320480, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 9", 0x320480, 0x320500, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 10", 0x320500, 0x320580, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 11", 0x320580, 0x320600, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 12", 0x320600, 0x320680, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 13", 0x320680, 0x320700, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 14", 0x320700, 0x320780, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 15", 0x320780, 0x320800, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 16", 0x320800, 0x320880, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 17", 0x320880, 0x320900, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 18", 0x320900, 0x320980, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 19", 0x320980, 0x320a00, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 20", 0x320a00, 0x320a80, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 21", 0x320a80, 0x320b00, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 22", 0x320b00, 0x320b80, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 23", 0x320b80, 0x320c00, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 24", 0x320c00, 0x320c80, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 25", 0x320c80, 0x320d00, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 26", 0x320d00, 0x320d80, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 27", 0x320d80, 0x320e00, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 28", 0x320e00, 0x320e80, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 29", 0x320e80, 0x320f00, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 30", 0x320f00, 0x320f80, indexRedEarthSprites_Bonus, 0x04 },
    { L"Capcom Logo 31", 0x320f80, 0x321000, indexRedEarthSprites_Bonus, 0x04 },

    { L"Red Earth Planet & Particles", 0x322ca0, 0x322da0, indexRedEarthSprites_Bonus, 0x51 },

    { L"Red Earth 1st Logo Cycle 1/17", 0x406ee0, 0x406f00, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 2/17", 0x406f00, 0x406f20, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 3/17", 0x406f20, 0x406f40, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 4/17", 0x406f40, 0x406f60, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 5/17", 0x406f60, 0x406f80, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 6/17", 0x406f80, 0x406fa0, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 7/17", 0x406cc0, 0x406ce0, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 8/17", 0x406ce0, 0x406d00, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 9/17", 0x406d00, 0x406d20, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 10/17", 0x406d20, 0x406d40, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 11/17", 0x406d40, 0x406d60, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 12/17", 0x406d60, 0x406d80, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 13/17", 0x406e40, 0x406e60, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 14/17", 0x406e60, 0x406e80, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 15/17", 0x406e80, 0x406ea0, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 16/17", 0x406ea0, 0x406ec0, indexRedEarthSprites_Bonus, 0x20 },
    { L"Red Earth 1st Logo Cycle 17/17", 0x406ec0, 0x406ee0, indexRedEarthSprites_Bonus, 0x20 },

    { L"Red Earth Made Out Of Fireworks", 0x323ca0, 0x323d20, indexRedEarthSprites_Bonus, 0x59 },

    { L"Red Earth Logo Lion Thunderstrike", 0x323da0, 0x323e20, indexRedEarthSprites_Bonus, 0x5b, &pairNext },
    { L"Red Earth Logo Text Thunderstrike", 0x323e20, 0x323ea0, indexRedEarthSprites_Bonus, 0x5e, &pairPrevious },

    { L"Intro - Leo closeup", 0x3226a0, 0x322720, indexRedEarthSprites_Bonus, 0x56 },
    { L"Intro - Leo closeup Transition & Emerald FX", 0x3216a0, 0x321720, indexRedEarthSprites_Bonus, 0x57 },
    { L"Intro - Emerald", 0x321320, 0x3213a0, indexRedEarthSprites_Bonus, 0x05 },
    { L"Intro - Emerald BG0", 0x3212a0, 0x321320, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG1", 0x321720, 0x3217a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG2", 0x3217a0, 0x321820, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG3", 0x321820, 0x3218a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG4", 0x3218a0, 0x321920, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG5", 0x321920, 0x3219a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG6", 0x3219a0, 0x321a20, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG7", 0x321a20, 0x321aa0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG8", 0x321aa0, 0x321b20, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG9", 0x321b20, 0x321ba0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG10", 0x321ba0, 0x321c20, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG11", 0x321c20, 0x321ca0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG12", 0x321ca0, 0x321d20, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG13", 0x321d20, 0x321da0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG14", 0x321da0, 0x321e20, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG15", 0x321e20, 0x321ea0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG16", 0x321ea0, 0x321f20, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG17", 0x321f20, 0x321fa0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG18", 0x321fa0, 0x322020, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG19", 0x322020, 0x3220a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG20", 0x3220a0, 0x322120, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG21", 0x322120, 0x3221a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG22", 0x3221a0, 0x322220, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG23", 0x322220, 0x3222a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG24", 0x3222a0, 0x322320, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG25", 0x322320, 0x3223a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG26", 0x3223a0, 0x322420, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG27", 0x322420, 0x3224a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG28", 0x3224a0, 0x322520, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG29", 0x322520, 0x3225a0, indexRedEarthSprites_Bonus, 0x19 },
    { L"Intro - Emerald BG30", 0x3225a0, 0x322620, indexRedEarthSprites_Bonus, 0x19 },

    { L"Intro - Hauzer", 0x3213a0, 0x321420, indexRedEarthSprites_Bonus, 0x07 },
    { L"Intro - Kongou", 0x321420, 0x3214a0, indexRedEarthSprites_Bonus, 0x09 },
    { L"Intro - Hydron", 0x3214a0, 0x321520, indexRedEarthSprites_Bonus, 0x08 },
    { L"Intro - Lavia", 0x321520, 0x3215a0, indexRedEarthSprites_Bonus, 0x0a },
    { L"Intro - Ravange", 0x3215a0, 0x321620, indexRedEarthSprites_Bonus, 0x0b },
    { L"Intro - Gi-Gi", 0x321620, 0x3216a0, indexRedEarthSprites_Bonus, 0x06 },
    { L"Intro - Mai-Ling background", 0x322a20, 0x322a60, indexRedEarthSprites_Bonus, 0x1b },
    { L"Intro - Mai-Ling", 0x322aa0, 0x322b20, indexRedEarthSprites_Bonus, 0x1c },
    { L"Intro - Kenji background", 0x322a60, 0x322aa0, indexRedEarthSprites_Bonus, 0x1a },
    { L"Intro - Kenji", 0x322b20, 0x322ba0, indexRedEarthSprites_Kenji, 0x18 },
    { L"Intro - Mai-Ling Frame", 0x322ba0, 0x322c20, indexRedEarthSprites_Bonus, 0x50 },
    { L"Intro - Kenji Frame", 0x322c20, 0x322ca0, indexRedEarthSprites_Bonus, 0x50 },
    { L"Intro - Tessa 1", 0x323720, 0x3237a0, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - Tessa 2", 0x3237a0, 0x323820, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - Tessa 3", 0x323820, 0x3238a0, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - Tessa 4", 0x3238a0, 0x323920, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - Tessa 5", 0x323920, 0x3239a0, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - Tessa 6", 0x3239a0, 0x323a20, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - Tessa 7", 0x323a20, 0x323aa0, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - Tessa 8", 0x323aa0, 0x323b20, indexRedEarthSprites_Tessa, 0x23 },
    { L"Intro - VS Blade Sky", 0x321220, 0x3212a0, indexRedEarthSprites_Bonus, 0x5f },
    { L"Intro - VS Blade Trees", 0x324120, 0x324160, indexRedEarthSprites_Bonus, 0x65 },
    { L"Intro - Blade", 0x323f20, 0x323fa0 },
    { L"Intro - Leo Cliffside", 0x323fa0, 0x324020 },
    { L"Intro - Leo C.Thunder", 0x324020, 0x3240a0 },
    { L"Intro - Blade.Thunder", 0x3240a0, 0x324120 },
    { L"Intro - Leo flash", 0x324620, 0x3246a0 },
    { L"Intro - Blade flash", 0x3246a0, 0x324720 },
    // Dupe of logo cycle { L"Intro - Thunderflash", 0x324720, 0x3247a0 },
    { L"Intro - Leo rise and slash", 0x322da0, 0x322ea0, indexRedEarthSprites_Bonus, 0x58 },
    { L"Leo Rise And Slash Effect", 0x323ea0, 0x323f20, indexRedEarthSprites_Bonus, 0x61 },
    { L"Leo Cinematic 1 Rise and Slash BG", 0x322ea0, 0x322f20, indexRedEarthSprites_Bonus, 0x53 },
    { L"Leo Cinematic 2 Rise and Slash BG", 0x322620, 0x3226a0, indexRedEarthSprites_Bonus, 0x54 },

    // { L"Intro - RaS BG 1", 0x322ea0, 0x322f00 }, obsolete?
    { L"Leo Cinematic 3 Rise and Slashed BG 1", 0x322f20, 0x322fa0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 2", 0x322fa0, 0x323020, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 3", 0x323020, 0x3230a0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 4", 0x3230a0, 0x323120, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 5", 0x323120, 0x3231a0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 6", 0x3231a0, 0x323220, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 7", 0x323220, 0x3232a0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 8", 0x3232a0, 0x323320, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 9", 0x323320, 0x3233a0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 10", 0x3233a0, 0x323420, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 11", 0x323420, 0x3234a0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 12", 0x3234a0, 0x323520, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 13", 0x323520, 0x3235a0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 14", 0x3235a0, 0x323620, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 15", 0x323620, 0x3236a0, indexRedEarthSprites_Bonus, 0x55 },
    { L"Leo Cinematic 3 Rise and Slashed BG 16", 0x3236a0, 0x323720, indexRedEarthSprites_Bonus, 0x55 },

    { L"Mini Capcom Logo", 0x406be0, 0x406c00, indexRedEarthSprites_Bonus, 0x39 },
    { L"Mini Red Earth Logo", 0x406fa0, 0x406fc0, indexRedEarthSprites_Bonus, 0x3b },

    { L"Red Earth Logo Thunder BG", 0x323b20, 0x323ba0, indexRedEarthSprites_Bonus, 0x5d },
    { L"Red Earth Logo Lion 1", 0x323ba0, 0x323c20, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Lion 2", 0x324720, 0x3247a0, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Lion 3", 0x3247a0, 0x324820, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Lion 4", 0x324820, 0x3248a0, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Lion 5", 0x3248a0, 0x324920, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Lion 6", 0x324920, 0x3249a0, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Lion 7", 0x3249a0, 0x324a20, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Lion 8", 0x324a20, 0x324aa0, indexRedEarthSprites_Bonus, 0x5a, &pairNext8 },
    { L"Red Earth Logo Text 1", 0x323c20, 0x323ca0, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },
    { L"Red Earth Logo Text 2", 0x3241a0, 0x324220, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },
    { L"Red Earth Logo Text 3", 0x324220, 0x3242a0, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },
    { L"Red Earth Logo Text 4", 0x3242a0, 0x324320, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },
    { L"Red Earth Logo Text 5", 0x324320, 0x3243a0, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },
    { L"Red Earth Logo Text 6", 0x3243a0, 0x324420, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },
    { L"Red Earth Logo Text 7", 0x324420, 0x3244a0, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },
    { L"Red Earth Logo Text 8", 0x3244a0, 0x324520, indexRedEarthSprites_Bonus, 0x5c, &pairPrevious8 },

    { L"Unknown Intro Palette 1", 0x321100, 0x321220 },
    { L"Unknown Intro Palette 2 (1/2) 0x322720", 0x322720, 0x322920 },
    { L"Unknown Intro Palette 2 (2/2) 0x322920", 0x322920, 0x322a20 },
    { L"Unknown Intro Palette 3", 0x323d20, 0x323da0 },
    { L"Unknown Intro Palette 4", 0x324520, 0x324620 },
};

const sGame_PaletteDataset REDEARTH_A_31_ENDING_PALETTES[] =
{
    { L"Generic Ending Leo", 0x3f5180, 0x3f5200, indexRedEarthSprites_Endings, 0x07 },
    { L"Generic Ending Kenji", 0x3f5080, 0x3f5100, indexRedEarthSprites_Endings, 0x06 },
    { L"Generic Ending Tessa", 0x3f5100, 0x3f5180, indexRedEarthSprites_Endings, 0x09 },
    { L"Generic Ending Mai-Ling", 0x3f5000, 0x3f5080, indexRedEarthSprites_Endings, 0x08 },
};

const sGame_PaletteDataset REDEARTH_A_31_ENDING_PALETTES_MAI[] =
{
    { L"Mai's Both Endings - Mai", 0x3f5500, 0x3f5580 },
    { L"Mai's Both Endings - Dummy & TinTheDog", 0x3f5580, 0x3f5600 },
    { L"Mai's Good Ending Cinematic 1 - Background", 0x3f5600, 0x3f5680 },
    { L"Mai's Good Ending Cinematic 1 - Kids", 0x3f5800, 0x3f5880 },
    { L"Mai's Good Ending Cinematic 1 - Sky & Kids", 0x3f5880, 0x3f5900 },
    { L"Mai's Good Ending Cinematic 1 - Valerie & Kids", 0x3f5900, 0x3f5980 },
    { L"Mai's Good Ending Cinematic 2 - Background", 0x3f5680, 0x3f5700 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 1", 0x3f5a00, 0x3f5a80 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 2", 0x3f5a80, 0x3f5b00 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 3", 0x3f5b00, 0x3f5b80 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 4", 0x3f5b80, 0x3f5c00 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 5", 0x3f5c00, 0x3f5c80 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 6", 0x3f5c80, 0x3f5d00 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 7", 0x3f5d00, 0x3f5d80 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 8", 0x3f5d80, 0x3f5e00 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 9", 0x3f5e00, 0x3f5e80 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 10", 0x3f5e80, 0x3f5f00 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 11", 0x3f5f00, 0x3f5f80 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 12", 0x3f5f80, 0x3f6000 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 13", 0x3f6000, 0x3f6080 },
    { L"Mai's Good Ending Cinematic 2 - Mai's Kick Inbetween Frame 14", 0x3f6080, 0x3f6100 },
    { L"Mai's Bad Ending Cinematic 1 & 3 - Ground", 0x3f5700, 0x3f5780 },
    { L"Mai's Bad Ending Cinematic 1 & 3 - Sky", 0x3f5980, 0x3f5a00 },
    { L"Mai's Bad Ending Cinematic 2 - Background", 0x3f5780, 0x3f5800 },
};

const sGame_PaletteDataset REDEARTH_A_31_ENDING_PALETTES_KENJI[] =
{
    { L"Kenji's Both Endings - Room", 0x3f6100, 0x3f6180 },
    { L"Kenji's Both Endings - Shogun", 0x3f6200, 0x3f6280 },
    { L"Kenji's Both Endings - Slash & Kenji", 0x3f6280, 0x3f6300 },
    { L"Kenji's Both Endings - Evil Subordinate", 0x3f6300, 0x3f6380 },
    { L"Kenji's Both Endings - Background ", 0x3f6380, 0x3f6400 },
    { L"Kenji's Good Ending Cinematic 1, 3 & 4 - Door & Kenji", 0x3f6180, 0x3f6200 },
    { L"Kenji's Bad Ending Cinematic 1 - Room Darkens 1", 0x3f6400, 0x3f6480 },
    { L"Kenji's Bad Ending Cinematic 1 - Room Darkens 2", 0x3f6480, 0x3f6500 },
    { L"Kenji's Bad Ending Cinematic 1 - Room Darkens 3", 0x3f6500, 0x3f6580 },
};

const sGame_PaletteDataset REDEARTH_A_31_ENDING_PALETTES_LEO[] =
{
    { L"Leo Both Endings - Leo", 0x3f6580, 0x3f6600 },
    { L"Leo Good Endings - People, Castle, BG 1", 0x3f6980, 0x3f6a00 },
    { L"Leo Good Endings - People, Castle, BG 2", 0x3f6a00, 0x3f6a80 },
    { L"Leo Good Endings - People, Castle, BG 3", 0x3f6a80, 0x3f6b00 },
    { L"Leo Good Endings - People, Castle, BG 4", 0x3f6b00, 0x3f6b80 },
    { L"Leo Good Endings - People, Castle, BG 5", 0x3f6b80, 0x3f6c00 },
    { L"Leo Good Endings - People, Castle, BG 6", 0x3f6c00, 0x3f6c80 },
    { L"Leo Good Endings - People, Castle, BG 7", 0x3f6c80, 0x3f6d00 },
    { L"Leo Good Endings - People, Castle, BG 8", 0x3f6d00, 0x3f6d80 },
    { L"Leo Good Endings - Fireworks", 0x3f6900, 0x3f6980 },
    { L"Leo Good Endings - Portraits 1", 0x3f6600, 0x3f6680 },
    { L"Leo Good Endings - Portraits 2", 0x3f6780, 0x3f6800 },
    { L"Leo Bad Ending - Cinematic BG, Mist", 0x3f6d80, 0x3f6e00 },
    { L"Leo Bad Ending - Lion & Rock", 0x3f6680, 0x3f6700 },
    { L"Leo Bad Ending - Castle", 0x3f6700, 0x3f6780 },
    { L"Unknown Leo Ending Palette 1", 0x3f6800, 0x3f6880 },
    { L"Unknown Leo Ending Palette 2", 0x3f6880, 0x3f6900 },
};

const sGame_PaletteDataset REDEARTH_A_31_ENDING_PALETTES_TESSA[] =
{
    { L"Tessa Ending Cutscene 1 - Blue Laboratory", 0x3f6e00, 0x3f6e80 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 1", 0x3f7400, 0x3f7480 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 2", 0x3f7480, 0x3f7500 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 3", 0x3f7500, 0x3f7580 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 4", 0x3f7580, 0x3f7600 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 5", 0x3f7600, 0x3f7680 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 6", 0x3f7680, 0x3f7700 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 7", 0x3f7700, 0x3f7780 },
    { L"Tessa Ending Cutscene 1 - Laboratory Transition 8", 0x3f7780, 0x3f7800 },
    { L"Tessa Ending Cutscene 1 - Laboratory", 0x3f6f00, 0x3f6f80 },
    { L"Tessa Ending Cutscene 1 - Blue Laboratory Objects", 0x3f6e80, 0x3f6f00 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 1", 0x3f7800, 0x3f7880 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 2", 0x3f7880, 0x3f7900 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 3", 0x3f7900, 0x3f7980 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 4", 0x3f7980, 0x3f7a00 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 5", 0x3f7a00, 0x3f7a80 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 6", 0x3f7a80, 0x3f7b00 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 7", 0x3f7b00, 0x3f7b80 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects Transition 8", 0x3f7b80, 0x3f7c00 },
    { L"Tessa Ending Cutscene 1 - Laboratory Objects", 0x3f6f80, 0x3f7000 },
    { L"Tessa Ending Cutscene 2 - Laboratory Objects 1", 0x3f7280, 0x3f7300 },
    { L"Tessa Ending Cutscene 2 - Laboratory Objects 2", 0x3f7e80, 0x3f7f00 },
    { L"Tessa Ending Cutscene 2 - Laboratory & Tessa 1", 0x3f7300, 0x3f7380 },
    { L"Tessa Ending Cutscene 2 - Laboratory & Tessa 2", 0x3f7d80, 0x3f7e00 },
    { L"Tessa Ending Cutscene 2 - Laboratory Top 1", 0x3f7380, 0x3f7400 },
    { L"Tessa Ending Cutscene 2 - Laboratory Top 2", 0x3f7e00, 0x3f7e80 },
    { L"Tessa Good Ending - Tessa Casting 1", 0x3f7080, 0x3f7100 },
    { L"Tessa Good Ending - Tessa Casting 2", 0x3f7c00, 0x3f7c80 },
    { L"Tessa Good Ending - Tessa Casting 3", 0x3f7c80, 0x3f7d00 },
    { L"Tessa Good Ending - Tessa Casting 4", 0x3f7d00, 0x3f7d80 },
    { L"Tessa Good Ending - Icicle and Effects", 0x3f7100, 0x3f7180 },
    { L"Tessa Bad Ending Cutscene 1 - Tessa's House", 0x3f7000, 0x3f7080 },
    { L"Tessa Bad Ending Cutscene 2 & 3", 0x3f7180, 0x3f7200 },
    { L"Unknown Tessa Ending Palette", 0x3f7200, 0x3f7280 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_NINJAS_PUNCH_PALETTES[] =
{
    // Punch palette Kenji
    { L"Good Subordinate Appears 1/4", 0x40bb80, 0x40bc00, indexRedEarthSprites_Kenji, 0x23 },
    { L"Good Subordinate Appears 2/4", 0x40bb00, 0x40bb80, indexRedEarthSprites_Kenji, 0x23 },
    { L"Good Subordinate Appears 3/4", 0x40ba80, 0x40bb00, indexRedEarthSprites_Kenji, 0x23 },
    { L"Good Subordinate Appears 4/4", 0x40ba00, 0x40ba80, indexRedEarthSprites_Kenji, 0x23 },

    { L"Punch Evil Ninja 1/4", 0x40b980, 0x40ba00, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Punch Evil Ninja 2/4", 0x40b900, 0x40b980, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Punch Evil Ninja & Shogun 3/4", 0x40b880, 0x40b900, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Punch Evil Ninja 4/4", 0x40b800, 0x40b880, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Punch Evil Ninja Cape 1/4", 0x40bd80, 0x40be00, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Punch Evil Ninja Cape 2/4", 0x40bd00, 0x40bd80, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Punch Evil Ninja Cape 3/4", 0x40bc80, 0x40bd00, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Punch Evil Ninja Cape 4/4", 0x40bc00, 0x40bc80, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_NINJAS_KICK_PALETTES[] =
{
    // Kick Palette Kenji Subordinates
    { L"Good Subordinate Appears 1/4", 0x418380, 0x418400, indexRedEarthSprites_Kenji, 0x23 },
    { L"Good Subordinate Appears 2/4", 0x418300, 0x418380, indexRedEarthSprites_Kenji, 0x23 },
    { L"Good Subordinate Appears 3/4", 0x418280, 0x418300, indexRedEarthSprites_Kenji, 0x23 },
    { L"Good Subordinate Appears 4/4", 0x418200, 0x418280, indexRedEarthSprites_Kenji, 0x23 },

    { L"Kick Evil Ninja 1/4", 0x418180, 0x418200, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kick Evil Ninja 2/4", 0x418100, 0x418180, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kick Evil Ninja & Shogun 3/4", 0x418080, 0x418100, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kick Evil Ninja 4/4", 0x418000, 0x418080, indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kick Evil Ninja Cape 1/4", 0x418580, 0x418600, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kick Evil Ninja Cape 2/4", 0x418500, 0x418580, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kick Evil Ninja Cape 3/4", 0x418480, 0x418500, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kick Evil Ninja Cape 4/4", 0x418400, 0x418480, indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
};

const sGame_PaletteDataset REDEARTH_A_31_MAP_NORMAL_PALETTES[] =
{
    { L"Map Background Part 1",             0x222000, 0x222080, indexRedEarthSprites_Bonus, 0x4c, &pairNext4Palettes },
    { L"Map Background Part 2",             0x222080, 0x222100, indexRedEarthSprites_Bonus, 0x4d },
    { L"Map Background Part 3 & Clouds",    0x222100, 0x222180, indexRedEarthSprites_Bonus, 0x4e },
    { L"Beaten Continents",                 0x222180, 0x222200, indexRedEarthSprites_Bonus, 0x47 },
    { L"Location Buildings, Orb",           0x222200, 0x222280, indexRedEarthSprites_Bonus, 0x4b },
    { L"Location Buildings, Orb Unused?",   0x222c00, 0x222c80, indexRedEarthSprites_Bonus, 0x4b },

    { L"Derminor Appearing 1/13",           0x222300, 0x222380, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 2/13",           0x222380, 0x222400, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 3/13",           0x222400, 0x222480, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 4/13",           0x222480, 0x222500, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 5/13",           0x222500, 0x222580, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 6/13",           0x222580, 0x222600, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 7/13",           0x222600, 0x222680, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 8/13",           0x222680, 0x222700, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 9/13",           0x222700, 0x222780, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 10/13",          0x222780, 0x222800, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 11/13",          0x222800, 0x222880, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 12/13",          0x222880, 0x222900, indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 13/13",          0x222900, 0x222980, indexRedEarthSprites_Bonus, 0x49 },

    { L"Derminor White to Normal 1",        0x222b00, 0x222b80, indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 2",        0x222a80, 0x222b00, indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 3",        0x222a00, 0x222a80, indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 4",        0x222980, 0x222a00, indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 5",        0x222280, 0x222300, indexRedEarthSprites_Bonus, 0x4a },

    { L"Boss's Eye Glow",                   0x222b80, 0x222c00, indexRedEarthSprites_Bonus, 0x48 },
};

const sGame_PaletteDataset REDEARTH_A_31_MAP_BOSS_PALETTES[] =
{
    { L"Map Background Part 1",             0x222000 + (1 * 0xc80), 0x222080 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4c, &pairNext4Palettes },
    { L"Map Background Part 2",             0x222080 + (1 * 0xc80), 0x222100 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4d },
    { L"Map Background Part 3 & Clouds",    0x222100 + (1 * 0xc80), 0x222180 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4e },
    { L"Beaten Continents",                 0x222180 + (1 * 0xc80), 0x222200 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x47 },
    { L"Location Buildings, Orb",           0x222200 + (1 * 0xc80), 0x222280 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },
    { L"Location Buildings, Orb Unused?",   0x222c00 + (1 * 0xc80), 0x222c80 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },

    { L"Derminor Appearing 1/13",           0x222300 + (1 * 0xc80), 0x222380 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 2/13",           0x222380 + (1 * 0xc80), 0x222400 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 3/13",           0x222400 + (1 * 0xc80), 0x222480 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 4/13",           0x222480 + (1 * 0xc80), 0x222500 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 5/13",           0x222500 + (1 * 0xc80), 0x222580 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 6/13",           0x222580 + (1 * 0xc80), 0x222600 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 7/13",           0x222600 + (1 * 0xc80), 0x222680 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 8/13",           0x222680 + (1 * 0xc80), 0x222700 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 9/13",           0x222700 + (1 * 0xc80), 0x222780 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 10/13",          0x222780 + (1 * 0xc80), 0x222800 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 11/13",          0x222800 + (1 * 0xc80), 0x222880 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 12/13",          0x222880 + (1 * 0xc80), 0x222900 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 13/13",          0x222900 + (1 * 0xc80), 0x222980 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },

    { L"Derminor White to Normal 1",        0x222b00 + (1 * 0xc80), 0x222b80 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 2",        0x222a80 + (1 * 0xc80), 0x222b00 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 3",        0x222a00 + (1 * 0xc80), 0x222a80 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 4",        0x222980 + (1 * 0xc80), 0x222a00 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 5",        0x222280 + (1 * 0xc80), 0x222300 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },

    { L"Boss's Eye Glow",                   0x222b80 + (1 * 0xc80), 0x222c00 + (1 * 0xc80), indexRedEarthSprites_Bonus, 0x48 },
};

const sGame_PaletteDataset REDEARTH_A_31_MAP_TRANS1_PALETTES[] =
{
    { L"Map Background Part 1",             0x222000 + (2 * 0xc80), 0x222080 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4c, &pairNext4Palettes },
    { L"Map Background Part 2",             0x222080 + (2 * 0xc80), 0x222100 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4d },
    { L"Map Background Part 3 & Clouds",    0x222100 + (2 * 0xc80), 0x222180 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4e },
    { L"Beaten Continents",                 0x222180 + (2 * 0xc80), 0x222200 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x47 },
    { L"Location Buildings, Orb",           0x222200 + (2 * 0xc80), 0x222280 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },
    { L"Location Buildings, Orb Unused?",   0x222c00 + (2 * 0xc80), 0x222c80 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },

    { L"Derminor Appearing 1/13",           0x222300 + (2 * 0xc80), 0x222380 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 2/13",           0x222380 + (2 * 0xc80), 0x222400 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 3/13",           0x222400 + (2 * 0xc80), 0x222480 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 4/13",           0x222480 + (2 * 0xc80), 0x222500 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 5/13",           0x222500 + (2 * 0xc80), 0x222580 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 6/13",           0x222580 + (2 * 0xc80), 0x222600 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 7/13",           0x222600 + (2 * 0xc80), 0x222680 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 8/13",           0x222680 + (2 * 0xc80), 0x222700 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 9/13",           0x222700 + (2 * 0xc80), 0x222780 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 10/13",          0x222780 + (2 * 0xc80), 0x222800 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 11/13",          0x222800 + (2 * 0xc80), 0x222880 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 12/13",          0x222880 + (2 * 0xc80), 0x222900 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 13/13",          0x222900 + (2 * 0xc80), 0x222980 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },

    { L"Derminor White to Normal 1",        0x222b00 + (2 * 0xc80), 0x222b80 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 2",        0x222a80 + (2 * 0xc80), 0x222b00 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 3",        0x222a00 + (2 * 0xc80), 0x222a80 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 4",        0x222980 + (2 * 0xc80), 0x222a00 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 5",        0x222280 + (2 * 0xc80), 0x222300 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },

    { L"Boss's Eye Glow",                   0x222b80 + (2 * 0xc80), 0x222c00 + (2 * 0xc80), indexRedEarthSprites_Bonus, 0x48 },
};

const sGame_PaletteDataset REDEARTH_A_31_MAP_TRANS2_PALETTES[] =
{
    { L"Map Background Part 1",             0x222000 + (3 * 0xc80), 0x222080 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4c, &pairNext4Palettes },
    { L"Map Background Part 2",             0x222080 + (3 * 0xc80), 0x222100 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4d },
    { L"Map Background Part 3 & Clouds",    0x222100 + (3 * 0xc80), 0x222180 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4e },
    { L"Beaten Continents",                 0x222180 + (3 * 0xc80), 0x222200 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x47 },
    { L"Location Buildings, Orb",           0x222200 + (3 * 0xc80), 0x222280 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },
    { L"Location Buildings, Orb Unused?",   0x222c00 + (3 * 0xc80), 0x222c80 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },

    { L"Derminor Appearing 1/13",           0x222300 + (3 * 0xc80), 0x222380 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 2/13",           0x222380 + (3 * 0xc80), 0x222400 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 3/13",           0x222400 + (3 * 0xc80), 0x222480 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 4/13",           0x222480 + (3 * 0xc80), 0x222500 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 5/13",           0x222500 + (3 * 0xc80), 0x222580 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 6/13",           0x222580 + (3 * 0xc80), 0x222600 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 7/13",           0x222600 + (3 * 0xc80), 0x222680 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 8/13",           0x222680 + (3 * 0xc80), 0x222700 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 9/13",           0x222700 + (3 * 0xc80), 0x222780 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 10/13",          0x222780 + (3 * 0xc80), 0x222800 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 11/13",          0x222800 + (3 * 0xc80), 0x222880 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 12/13",          0x222880 + (3 * 0xc80), 0x222900 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 13/13",          0x222900 + (3 * 0xc80), 0x222980 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },

    { L"Derminor White to Normal 1",        0x222b00 + (3 * 0xc80), 0x222b80 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 2",        0x222a80 + (3 * 0xc80), 0x222b00 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 3",        0x222a00 + (3 * 0xc80), 0x222a80 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 4",        0x222980 + (3 * 0xc80), 0x222a00 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 5",        0x222280 + (3 * 0xc80), 0x222300 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },

    { L"Boss's Eye Glow",                   0x222b80 + (3 * 0xc80), 0x222c00 + (3 * 0xc80), indexRedEarthSprites_Bonus, 0x48 },
};

const sGame_PaletteDataset REDEARTH_A_31_MAP_TRANS3_PALETTES[] =
{
    { L"Map Background Part 1",             0x222000 + (4 * 0xc80), 0x222080 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4c, &pairNext4Palettes },
    { L"Map Background Part 2",             0x222080 + (4 * 0xc80), 0x222100 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4d },
    { L"Map Background Part 3 & Clouds",    0x222100 + (4 * 0xc80), 0x222180 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4e },
    { L"Beaten Continents",                 0x222180 + (4 * 0xc80), 0x222200 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x47 },
    { L"Location Buildings, Orb",           0x222200 + (4 * 0xc80), 0x222280 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },
    { L"Location Buildings, Orb Unused?",   0x222c00 + (4 * 0xc80), 0x222c80 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4b },

    { L"Derminor Appearing 1/13",           0x222300 + (4 * 0xc80), 0x222380 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 2/13",           0x222380 + (4 * 0xc80), 0x222400 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 3/13",           0x222400 + (4 * 0xc80), 0x222480 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 4/13",           0x222480 + (4 * 0xc80), 0x222500 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 5/13",           0x222500 + (4 * 0xc80), 0x222580 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 6/13",           0x222580 + (4 * 0xc80), 0x222600 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 7/13",           0x222600 + (4 * 0xc80), 0x222680 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 8/13",           0x222680 + (4 * 0xc80), 0x222700 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 9/13",           0x222700 + (4 * 0xc80), 0x222780 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 10/13",          0x222780 + (4 * 0xc80), 0x222800 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 11/13",          0x222800 + (4 * 0xc80), 0x222880 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 12/13",          0x222880 + (4 * 0xc80), 0x222900 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },
    { L"Derminor Appearing 13/13",          0x222900 + (4 * 0xc80), 0x222980 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x49 },

    { L"Derminor White to Normal 1",        0x222b00 + (4 * 0xc80), 0x222b80 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 2",        0x222a80 + (4 * 0xc80), 0x222b00 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 3",        0x222a00 + (4 * 0xc80), 0x222a80 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 4",        0x222980 + (4 * 0xc80), 0x222a00 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },
    { L"Derminor White to Normal 5",        0x222280 + (4 * 0xc80), 0x222300 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x4a },

    { L"Boss's Eye Glow",                   0x222b80 + (4 * 0xc80), 0x222c00 + (4 * 0xc80), indexRedEarthSprites_Bonus, 0x48 },
};

const sGame_PaletteDataset REDEARTH_A_BONUS_31_HUD_PALETTES[] =
{
    { L"Timer, Blade's Hud Name", 0x4064e0, 0x406500, indexRedEarthSprites_Bonus, 0x43, &pairNext }, // pair next 
    { L"Timer Overlay", 0x406620, 0x406640, indexRedEarthSprites_Bonus, 0x44, &pairPrevious }, // pair previous

    { L"Timer (Running Out)", 0x4065a0, 0x4065c0, indexRedEarthSprites_Bonus, 0x43, &pairNext }, // pair next
    { L"Timer Overlay (Running Out)", 0x406720, 0x406740, indexRedEarthSprites_Bonus, 0x44, &pairPrevious }, // pair previous

    { L"Boss Lifebar Frame, Fire/Red Bg", 0x4064a0, 0x4064c0, indexRedEarthSprites_Bonus, 0x1e, &pairNext }, // pair next
    { L"Lifebar", 0x406560, 0x406580, indexRedEarthSprites_Bonus, 0x21, &pairPrevious }, // pair previous

    { L"Boss Lifebar Frame (Danger)", 0x406700, 0x406720, indexRedEarthSprites_Bonus, 0x1e, &pairNext },
    { L"Lifebar (Danger)", 0x4066e0, 0x406700 , indexRedEarthSprites_Bonus, 0x21, &pairPrevious},

    { L"Hud Names", 0x406580, 0x4065a0, indexRedEarthSprites_Bonus, 0x1f },

    { L"New Warrior! 1/2 Hud Lv, Exp", 0x406880, 0x4068a0, indexRedEarthSprites_Bonus, 0x36 },
    { L"New Warrior! 2/2", 0x406bc0, 0x406be0, indexRedEarthSprites_Bonus, 0x36 },

    { L"Bonus Game Timer Seconds", 0x406d80, 0x406da0, indexRedEarthSprites_Bonus, 0x38, &pairNext },
    { L"Bonus Game Timer Milliseconds", 0x406dc0, 0x406de0, indexRedEarthSprites_Bonus, 0x37 },

    { L"Text: Character Level Titles", 0x406500, 0x406520, indexRedEarthSprites_Bonus, 0x2c },
    { L"Text: Insert Coin, Map Location", 0x4064c0, 0x4064e0, indexRedEarthSprites_Bonus, 0x2e },

    { L"Meteor Orb", 0x4065e0, 0x406600, indexRedEarthSprites_Bonus, 0x24, &pairNext5Palettes }, // pair the orb set
    { L"Poison Orb", 0x406600, 0x406620, indexRedEarthSprites_Bonus, 0x25 },
    { L"Fire Orb", 0x406420, 0x406440, indexRedEarthSprites_Bonus, 0x22 },
    { L"Wind Orb", 0x4065c0, 0x4065e0, indexRedEarthSprites_Bonus, 0x27 },
    { L"Thunder Orb", 0x406460, 0x406480, indexRedEarthSprites_Bonus, 0x26 },
    { L"Ice Orb", 0x406440, 0x406460, indexRedEarthSprites_Bonus, 0x23 },

    { L"RoundPoint: Others", 0x406780, 0x4067a0, indexRedEarthSprites_Bonus, 0x29, &pairNextAndNext }, // pair with next 2
    { L"RoundPoint: Timeout", 0x406760, 0x406780, indexRedEarthSprites_Bonus, 0x2a },
    { L"RoundPoint: Cherry Weak Attack", 0x406740, 0x406760, indexRedEarthSprites_Bonus, 0x28 },

    { L"Ingame LVL Up, Exp, Life up 1", 0x133880, 0x133900, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL UP, Exp, Life up 2", 0x133900, 0x133980, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 3", 0x133980, 0x133a00, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 4", 0x133a00, 0x133a80, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 5", 0x133a80, 0x133b00, indexRedEarthSprites_Bonus, 0x52 },
};

const sGame_PaletteDataset REDEARTH_A_BONUS_31_PALETTES[] =
{
    //{ L"EXP / LVL Text", 0x406880, 0x406900 },
    { L"Shadows, Effects & Hit FX 1", 0x132600, 0x132800, indexRedEarthSprites_Bonus, 0x60 },
    { L"Shadows, Effects & Hit FX 2", 0x132800, 0x132a00 },
    { L"Shadows, Effects & Hit FX 3", 0x132a00, 0x132c00 },
    { L"Shadows, Effects & Hit FX 4", 0x132c00, 0x132e00 },

    { L"Effects Range (1/3) 0x132e00", 0x132e00, 0x133000 },
    { L"Effects Range (2/3) 0x133000", 0x133000, 0x133200 },
    { L"Effects Range (3/3) 0x133200", 0x133200, 0x133280 },
    { L"Elemental Related & Unknown Range 1 (1/2) 0x133500", 0x133500, 0x133700 },
    { L"Elemental Related & Unknown Range 1 (2/2) 0x133700", 0x133700, 0x133880 },
    { L"Elemental Related & Unknown Range 2 (1/3) 0x133b00", 0x133b00, 0x133d00 },
    { L"Elemental Related & Unknown Range 2 (2/3) 0x133d00", 0x133d00, 0x133f00 },
    { L"Elemental Related & Unknown Range 2 (3/3) 0x133f00", 0x133f00, 0x133f80 },

    { L"Some Elemental & Other Bg Flash", 0x406400, 0x406420, indexRedEarthSprites_Bonus, 0x2b },

    { L"Game Over", 0x406fe0, 0x407000, indexRedEarthSprites_Bonus, 0x3a },
    { L"\"Continue ?\" Backgrounds", 0x1dfb80, 0x1dfc00, indexRedEarthSprites_Bonus, 0x3c },
    { L"\"Continue ?\" Portrait's Ground", 0x1e4980, 0x1e4a00, indexRedEarthSprites_Bonus, 0x64 },

    { L"Text: Ingame Dialogue, Black Bg", 0x406520, 0x406540, indexRedEarthSprites_Bonus, 0x2d },
    { L"Text: LV Up Fire, AT Power", 0x406de0, 0x406e00, indexRedEarthSprites_Bonus, 0x32 },
    { L"Text: LV Up Title, Ice, Wind", 0x406e00, 0x406e20, indexRedEarthSprites_Bonus, 0x34 },
    { L"Text: LV Up Character, Lightning", 0x406e20, 0x406e40, indexRedEarthSprites_Bonus, 0x31 },
    { L"Text: LV Up Number, Move", 0x406800, 0x406820, indexRedEarthSprites_Bonus, 0x33 },
    { L"Text: Parental Advisory", 0x406480, 0x4064a0, indexRedEarthSprites_Bonus, 0x4f },

    { L"\"Winners Don't Use Drugs\"", 0x320000, 0x320080, indexRedEarthSprites_Bonus, 0x3d },

    { L"Unknown Bonus Palette 1", 0x406540, 0x406560 },
    { L"Unknown Bonus Palette 2", 0x4067a0, 0x406800 },
    { L"Unknown Bonus Palette 3", 0x406820, 0x406880 },
    { L"Unknown Bonus Palette 4", 0x4068a0, 0x406900 },
    { L"Unknown Bonus Palette 5", 0x406b60, 0x406bc0 },
    { L"Unknown Bonus Palette 6", 0x406c00, 0x406cc0 },
    { L"Unknown Bonus Palette 7", 0x406da0, 0x406dc0 },
    { L"Unknown Bonus Palette 8", 0x406fc0, 0x406fe0 },
};

const sGame_PaletteDataset REDEARTH_A_31_ENDING_DERMINOR_PALETTES[] =
{
    { L"Generic Ending Derminor BG", 0x3f5480, 0x3f5500, indexRedEarthSprites_Endings, 0x00, &pairFullyLinkedNode },
    { L"Generic Ending Derminor 1", 0x3f5280, 0x3f5300, indexRedEarthSprites_Endings, 0x01 },
    { L"Generic Ending Derminor 2", 0x3f5300, 0x3f5380, indexRedEarthSprites_Endings, 0x02 },
    { L"Generic Ending Derminor 3", 0x3f5380, 0x3f5400, indexRedEarthSprites_Endings, 0x03 },
    { L"Generic Ending Derminor 4", 0x3f5400, 0x3f5480, indexRedEarthSprites_Endings, 0x04 },
    { L"Generic Ending Derminor Sunshine", 0x3f5200, 0x3f5280, indexRedEarthSprites_Endings, 0x05 },
};

const sGame_PaletteDataset REDEARTH_A_31_OPENING_KENJI_PALETTES[] =
{
    { L"Kenji Opening Cinematic 1 - Ships and Sky 1", 0x325000, 0x325080, indexRedEarthSprites_Endings, 0x0a },
    { L"Kenji Opening Cinematic 1 - Ships and Sky 2", 0x325080, 0x325100, indexRedEarthSprites_Endings, 0x0a },
    { L"Kenji Opening Cinematic 1 - Ships and Sky 3", 0x325100, 0x325180, indexRedEarthSprites_Endings, 0x0a },
    { L"Kenji Opening Cinematic 1 - Ships and Sky 4", 0x325180, 0x325200, indexRedEarthSprites_Endings, 0x0a },
    { L"Kenji Opening Cinematic 1 - Ships and Sky 5", 0x325200, 0x325280, indexRedEarthSprites_Endings, 0x0a },
    { L"Kenji Opening Cinematic 1 - Ships and Sky 6", 0x325280, 0x325300, indexRedEarthSprites_Endings, 0x0a },
    { L"Kenji Opening Cinematic 1 - Ships and Sky 7", 0x325300, 0x325380, indexRedEarthSprites_Endings, 0x0a },
    { L"Kenji Opening Cinematic 2 - Background", 0x325400, 0x325480, indexRedEarthSprites_Endings, 0xb, &pairNextAndNext },
    { L"Kenji Opening Cinematic 2 - Ninjas & Shadows", 0x325480, 0x325500, indexRedEarthSprites_Endings, 0x0c },
    { L"Kenji Opening Cinematic 2 - Shogun Naosuke, Daimyo & Kenji", 0x325500, 0x325580, indexRedEarthSprites_Endings, 0x0d },
    { L"Kenji Opening Cinematic 3 - Kenji", 0x325380, 0x325400, indexRedEarthSprites_Endings, 0x0e },
};

const sGame_PaletteDataset REDEARTH_A_31_OPENING_LEO_PALETTES[] =
{
    { L"Leo Opening Cinematic - Leo on a Cliff", 0x325b00, 0x325b80, indexRedEarthSprites_Endings, 0x10, &pairFullyLinkedNode },
    { L"Leo Opening Cinematic - Castle BG & Leo's Head 1", 0x325a80, 0x325b00, indexRedEarthSprites_Endings, 0x0f },
    { L"Leo Opening Cinematic - Leo's Head 2", 0x325d80, 0x325e00, indexRedEarthSprites_Endings, 0x11 },
    { L"Leo Opening Cinematic - Leo's Head 3", 0x325e00, 0x325e80, indexRedEarthSprites_Endings, 0x12 },
    { L"Leo Opening Cinematic - Leo's Head 4", 0x325c00, 0x325c80, indexRedEarthSprites_Endings, 0x13 },
    { L"Leo Opening Cinematic - Leo's Head 5", 0x325c80, 0x325d00, indexRedEarthSprites_Endings, 0x14 },
    { L"Leo Opening Cinematic - Leo's Head 6", 0x325f00, 0x325f80, indexRedEarthSprites_Endings, 0x15 },
    { L"Leo Opening Cinematic - Leo's Head 7", 0x325d00, 0x325d80, indexRedEarthSprites_Endings, 0x16 },
    { L"Leo Opening Cinematic - Leo's Head 8", 0x325e80, 0x325f00, indexRedEarthSprites_Endings, 0x17 },
    { L"Leo Opening Cinematic - Leo's Head 9", 0x325b80, 0x325c00, indexRedEarthSprites_Endings, 0x18 },
};

const sGame_PaletteDataset REDEARTH_A_31_OPENING_TESSA_PALETTES[] =
{
    { L"Tessa Opening Cinematic 1 & 2 - Tessa", 0x325580, 0x325680, indexRedEarthSprites_Endings, 0x19 },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 1", 0x325680, 0x325700, indexRedEarthSprites_Endings, 0x1a },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 2", 0x325700, 0x325780, indexRedEarthSprites_Endings, 0x1a },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 3", 0x325780, 0x325800, indexRedEarthSprites_Endings, 0x1a },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 4", 0x325800, 0x325880, indexRedEarthSprites_Endings, 0x1a },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 5", 0x325880, 0x325900, indexRedEarthSprites_Endings, 0x1a },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 6", 0x325900, 0x325980, indexRedEarthSprites_Endings, 0x1a },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 7", 0x325980, 0x325a00, indexRedEarthSprites_Endings, 0x1a },
    { L"Tessa Opening Cinematic 3 - Dark Energy Radar 8", 0x325a00, 0x325a80, indexRedEarthSprites_Endings, 0x1a },
};

const sGame_PaletteDataset REDEARTH_A_31_OPENING_MAI_PALETTES[] =
{
    { L"Mai's Opening Cinematic 1 - Background", 0x326100, 0x326180 },
    { L"Mai's Opening Cinematic 1 & 2 - Mai Happy & Wooden Poll", 0x325f80, 0x326000 },
    { L"Mai's Opening Cinematic 1 & 2 - Mai Shocked & Bag", 0x326000, 0x326080 },
    { L"Mai's Opening Cinematic 2 - Background", 0x326180, 0x326200 },
    { L"Mai's Opening Cinematic 2 - Cup", 0x326080, 0x326100 },
    { L"Mai's Opening Cinematic 3 - Background Village", 0x326200, 0x326280 },
    { L"Mai's Opening Cinematic 3 - Mai-Ling", 0x326280, 0x326300 },
    { L"Unknown Mai's Opening Cinematic", 0x326300, 0x326360 },
};

const sGame_PaletteDataset REDEARTH_A_31_OPENING_BLADE_INTRO_PALETTES[] =
{
    { L"Blade Introduction - Blade Talks 1", 0x38c000, 0x38c080 },
    { L"Blade Introduction - Blade Talks 2", 0x38c080, 0x38c100 },
    { L"Blade Introduction - Blade Talks 3", 0x38c100, 0x38c180 },
    { L"Blade Introduction - Blade Talks 4", 0x38c180, 0x38c200 },
    { L"Blade Introduction - Blade Talks 5", 0x38c200, 0x38c280 },
    { L"Blade Introduction - Blade Talks 6", 0x38c280, 0x38c300 },
    { L"Blade Introduction - Blade Talks 7", 0x38c300, 0x38c380 },
    { L"Blade Introduction - Blade Talks 8", 0x38c380, 0x38c400 },
    { L"Blade Introduction - Blade Talks 9", 0x38c400, 0x38c480 },
    { L"Blade Introduction - Blade Talks 10", 0x38c480, 0x38c500 },
    { L"Blade Introduction - Gem", 0x38c500, 0x38c580 },
    { L"Blade Introduction - Blade Walks", 0x38c700, 0x38c780 },
};

const sGame_PaletteDataset REDEARTH_A_31_OPENING_BLADE_2ND_PALETTES[] =
{
    { L"Blade 2nd Interaction - 1st Cutscene Background", 0x38c580, 0x38c600 },
    { L"Blade 2nd Interaction - 1st Cutscene Blade", 0x38c600, 0x38c680 },
    { L"Blade 2nd Interaction - 2nd Cutscene Blade", 0x38c680, 0x38c700 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 1", 0x38c780, 0x38c800 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 2", 0x38c800, 0x38c880 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 3", 0x38c880, 0x38c900 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 4", 0x38c900, 0x38c980 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 5", 0x38c980, 0x38ca00 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 6", 0x38ca00, 0x38ca80 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 7", 0x38ca80, 0x38cb00 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 8", 0x38cb00, 0x38cb80 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 9", 0x38cb80, 0x38cc00 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 10", 0x38cc00, 0x38cc80 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 11", 0x38cc80, 0x38cd00 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 12", 0x38cd00, 0x38cd80 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 13", 0x38cd80, 0x38ce00 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 14", 0x38ce00, 0x38ce80 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 15", 0x38ce80, 0x38cf00 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 16", 0x38cf00, 0x38cf80 },
    { L"Blade 2nd Interaction - 3rd Cutscene Blade 17", 0x38cf80, 0x38d000 },
};

const sGame_PaletteDataset REDEARTH_A_31_BONUS_RANKING_PALETTES[] =
{
    { L"Ranking Background & Portrait 1", 0x1e7800, 0x1e7880, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Background & Portrait 2", 0x1e8080, 0x1e8100, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Background & Portrait 3", 0x1e8100, 0x1e8180, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Background & Portrait 4", 0x1e8180, 0x1e8200, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Background & Portrait 5", 0x1e8200, 0x1e8280, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Background & Portrait 6", 0x1e8280, 0x1e8300, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Background & Portrait 7", 0x1e8300, 0x1e8380, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Background & Portrait 8", 0x1e8380, 0x1e8400, indexRedEarthSprites_Bonus, 0x3E },
    { L"Ranking Title 1", 0x1e7900, 0x1e7980, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 2", 0x1e7980, 0x1e7a00, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 3", 0x1e7a00, 0x1e7a80, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 4", 0x1e7a80, 0x1e7b00, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 5", 0x1e7b00, 0x1e7b80, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 6", 0x1e7b80, 0x1e7c00, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 7", 0x1e7c00, 0x1e7c80, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 8", 0x1e7c80, 0x1e7d00, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 9", 0x1e7d00, 0x1e7d80, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 10", 0x1e7d80, 0x1e7e00, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 11", 0x1e7e00, 0x1e7e80, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 12", 0x1e7e80, 0x1e7f00, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 13", 0x1e7f00, 0x1e7f80, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 14", 0x1e7f80, 0x1e8000, indexRedEarthSprites_Bonus, 0x46 },
    { L"Ranking Title 15", 0x1e8000, 0x1e8080, indexRedEarthSprites_Bonus, 0x46 },
    { L"Glitched Ranking Title Corners", 0x1e7880, 0x1e7900, indexRedEarthSprites_Bonus, 0x45 },
};

const sGame_PaletteDataset REDEARTH_A_BONUS_31_UNUSED_PALETTES[] =
{
    { L"Coming Next? Original Punch", 0x411980, 0x411a00, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Coming Next? Original Kick", 0x41e180, 0x41e200, indexRedEarthSprites_MaiLing, 0x58 },

    { L"Tessa Jamming Ghost Punch Palette", 0x40f800, 0x40f880, indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Hato Lighter (Pigeon)", 0x40f000, 0x40f080, indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Staff Darker", 0x40ed80, 0x40ee00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Staff Lighter 1", 0x40ed00, 0x40ed80, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Staff Lighter 2", 0x40ec80, 0x40ed00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Punch Tessa's Unused Fairies 1 (Poison?)", 0x40f680, 0x40f700, indexRedEarthSprites_Tessa, 0x27 },
    { L"Punch Tessa's Unused Fairies 2 (Poison?)", 0x40f700, 0x40f780, indexRedEarthSprites_Tessa, 0x27 },

    { L"Tessa Jamming Ghost Kick Palette", 0x41c000, 0x41c080, indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Hato Lighter (Pigeon)", 0x41b800, 0x41b880, indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Staff Darker", 0x41b580, 0x41b600, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Staff Lighter 1", 0x41b500, 0x41b580, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Staff Lighter 2", 0x41b480, 0x41b500, indexRedEarthSprites_Tessa, 0x1e },
    { L"Kick Tessa's Unused Fairies 1 (Poison?)", 0x41be80, 0x41bf00, indexRedEarthSprites_Tessa, 0x27 },
    { L"Kick Tessa's Unused Fairies 2 (Poison?)", 0x41bf00, 0x41bf80, indexRedEarthSprites_Tessa, 0x27 },

    { L"Unused Tessa Palette 1", 0x1e4a80, 0x1e4b00, indexRedEarthSprites_Tessa, 0x00 },
    { L"Unused Tessa Palette 2", 0x1e4b00, 0x1e4b80, indexRedEarthSprites_Tessa, 0x00 },

    { L"Punch Palette Leo Unused?", 0x414880, 0x414900, indexRedEarthSprites_Leo, 0x00 },
    { L"Kick Palette Leo Unused?", 0x408080, 0x408100, indexRedEarthSprites_Leo, 0x00 },

    { L"Unused Leo Palette", 0x1e4a00, 0x1e4a80, indexRedEarthSprites_Endings, 0x10 },

    { L"Ravange's 2nd Form Transformation Explosions", 0x42f280, 0x42f300 },

    { L"Lavia Burned 1 Unused", 0x42a880, 0x42a900, indexRedEarthSprites_Lavia },
    { L"Lavia Burned 2 Unused", 0x42a900, 0x42a980, indexRedEarthSprites_Lavia },
    { L"Lavia Shocked 1 Unused", 0x42a980, 0x42aa00, indexRedEarthSprites_Lavia },
    { L"Lavia Shocked 2 Unused", 0x42aa00, 0x42aa80, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 1 Unused", 0x42aa80, 0x42ab00, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 2 Unused", 0x42ab00, 0x42ab80, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 3 Unused", 0x42ab80, 0x42ac00, indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 4 Unused", 0x42ac00, 0x42ac80, indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 1 Unused", 0x42ac80, 0x42ad00, indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 2 Unused", 0x42ad00, 0x42ad80, indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 3 Unused", 0x42ad80, 0x42ae00, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 1 Unused", 0x42ae00, 0x42ae80, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 2 Unused", 0x42ae80, 0x42af00, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 3 Unused", 0x42af00, 0x42af80, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 4 Unused", 0x42af80, 0x42b000, indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 5 Unused", 0x42b000, 0x42b080, indexRedEarthSprites_Lavia },

    { L"Unused Palettes in Lavia's Section (1/16)", 0x42b080, 0x42b280 },
    { L"Unused Palettes in Lavia's Section (2/16)", 0x42b280, 0x42b480 },
    { L"Unused Palettes in Lavia's Section (3/16)", 0x42b480, 0x42b680 },
    { L"Unused Palettes in Lavia's Section (4/16)", 0x42b680, 0x42b880 },
    { L"Unused Palettes in Lavia's Section (5/16)", 0x42b880, 0x42ba80 },
    { L"Unused Palettes in Lavia's Section (6/16)", 0x42ba80, 0x42bc80 },
    { L"Unused Palettes in Lavia's Section (7/16)", 0x42bc80, 0x42be80 },
    { L"Unused Palettes in Lavia's Section (8/16)", 0x42be80, 0x42c080 },
    { L"Unused Palettes in Lavia's Section (9/16)", 0x42c080, 0x42c280 },
    { L"Unused Palettes in Lavia's Section (10/16)", 0x42c280, 0x42c480 },
    { L"Unused Palettes in Lavia's Section (11/16)", 0x42c480, 0x42c680 },
    { L"Unused Palettes in Lavia's Section (12/16)", 0x42c680, 0x42c880 },
    { L"Unused Palettes in Lavia's Section (13/16)", 0x42c880, 0x42ca80 },
    { L"Unused Palettes in Lavia's Section (14/16)", 0x42ca80, 0x42cc80 },
    { L"Unused Palettes in Lavia's Section (15/16)", 0x42cc80, 0x42ce80 },
    { L"Unused Palettes in Lavia's Section (16/16)", 0x42ce80, 0x42d000 },

    { L"Unused Vigo, Valo, Vestu", 0x421f80, 0x422000 },
    { L"Unused Vigo, Valo, Vestu Punch", 0x408900, 0x408980 },
    { L"Unused Vigo, Valo, Vestu Kick", 0x415100, 0x415180 },
    { L"Unused Wisemen Mist 1", 0x421100, 0x421180 },
    { L"Unused Wisemen Mist 2", 0x421080, 0x421100 },

    { L"Hauzer Petrified 1?", 0x40c200, 0x40c280, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Petrified 2?", 0x40c280, 0x40c300, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 1?", 0x40c300, 0x40c380, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 2?", 0x40c380, 0x40c400, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 3?", 0x40c400, 0x40c480, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 4?", 0x40c480, 0x40c500, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 5?", 0x40c500, 0x40c580, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Petrified 1??", 0x418a00, 0x418a80, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Petrified 2??", 0x418a80, 0x418b00, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 1??", 0x418b00, 0x418b80, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 2??", 0x418b80, 0x418c00, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 3??", 0x418c00, 0x418c80, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 4??", 0x418c80, 0x418d00, indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Frozen 5??", 0x418d00, 0x418d80, indexRedEarthSprites_Hauzer, 0x00 },

    { L"Gi Gi Unused Summon", 0x431680, 0x431700, indexRedEarthSprites_GiGi, 0x0c },

    // All Miniportrait Transparency effects (Unused)(Character Select Portraits where you put your cursor on)
    { L"Leo Character Select Portrait P1", 0x1e1100, 0x1e1180, indexRedEarthSprites_Leo, 0x12 },
    { L"Tessa Character Select Portrait P1", 0x1e1180, 0x1e1200, indexRedEarthSprites_Tessa, 0x12 },
    { L"Kenji Character Select Portrait P1", 0x1e1200, 0x1e1280, indexRedEarthSprites_Kenji, 0x12 },
    { L"Mai-Ling Character Select Portrait P1", 0x1e1280, 0x1e1300, indexRedEarthSprites_MaiLing, 0x12 },
    { L"Leo Character Select Portrait P2", 0x1e3300, 0x1e3380, indexRedEarthSprites_Leo, 0x12 },
    { L"Tessa Character Select Portrait P2", 0x1e3380, 0x1e3400, indexRedEarthSprites_Tessa, 0x12 },
    { L"Kenji Character Select Portrait P2", 0x1e3400, 0x1e3480, indexRedEarthSprites_Kenji, 0x12 },
    { L"Mai-Ling Character Select Portrait P2", 0x1e3480, 0x1e3500, indexRedEarthSprites_MaiLing, 0x12 },

    // Unused (just why)
    { L"\"Continue ?\" Backgrounds P1", 0x1e1d80, 0x1e1e00, indexRedEarthSprites_Bonus, 0x3c },
    { L"\"Continue ?\" Backgrounds P2", 0x1e3f80, 0x1e4000, indexRedEarthSprites_Bonus, 0x3c },

    // Scion dragon unused
    { L"Dragon Burned 1", 0x438d00, 0x438d80, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Burned 2", 0x438d80, 0x438e00, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Shocked 1", 0x438e00, 0x438e80, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Shocked 2", 0x438e80, 0x438f00, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Poisoned 1", 0x438f00, 0x438f80, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Poisoned 2", 0x438f80, 0x439000, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Poisoned 3", 0x439000, 0x439080, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Poisoned 4", 0x439080, 0x439100, indexRedEarthSprites_Scion, 0x01 },
    { L"Ice Dragon Petrified 1", 0x439200, 0x439280, indexRedEarthSprites_Scion, 0x01 },
    { L"Ice Dragon Petrified 2", 0x439180, 0x439200, indexRedEarthSprites_Scion, 0x01 },
    { L"Poison Gas Dragon Petrified 1", 0x439300, 0x439380, indexRedEarthSprites_Scion, 0x01 },
    { L"Poison Gas Dragon Petrified 2", 0x439280, 0x439300, indexRedEarthSprites_Scion, 0x01 },
    { L"Fire Dragon Petrified 1", 0x439400, 0x439480, indexRedEarthSprites_Scion, 0x01 },
    { L"Fire Dragon Petrified 2", 0x439380, 0x439400, indexRedEarthSprites_Scion, 0x01 },
    { L"Thunder Dragon Petrified 1", 0x439500, 0x439580, indexRedEarthSprites_Scion, 0x01 },
    { L"Thunder Dragon Petrified 2", 0x439480, 0x439500, indexRedEarthSprites_Scion, 0x01 },
    { L"Universal Dragon Petrified 3", 0x439100, 0x439180, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Frozen 1", 0x439580, 0x439600, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Frozen 2", 0x439600, 0x439680, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Frozen 3", 0x439680, 0x439700, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Frozen 4", 0x439700, 0x439780, indexRedEarthSprites_Scion, 0x01 },
    { L"Dragon Frozen 5", 0x439780, 0x439800, indexRedEarthSprites_Scion, 0x01 },

    { L"Unused Mai Palette?", 0x1e4780, 0x1e4800 },
    { L"Portrait Related Palette?", 0x1e4900, 0x1e4980 },

    { L"Tessa Punch Vs/Winning/Losing Screen but blue", 0x1e4600 + (0xa00 * 1), 0x1e4680 + (0xa00 * 1), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Punch Vs/Winning/Losing Screen but blue",   0x1e4680 + (0xa00 * 1), 0x1e4700 + (0xa00 * 1), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Punch Vs/Winning/Losing Sword but blue",    0x1e4700 + (0xa00 * 1), 0x1e4780 + (0xa00 * 1), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Unused Mai Palette? but blue",                  0x1e4780 + (0xa00 * 1), 0x1e4800 + (0xa00 * 1) }, // Unused Mai?
    { L"Kenji Punch Vs/Winning/Losing Screen but blue", 0x1e4800 + (0xa00 * 1), 0x1e4900 + (0xa00 * 1), indexRedEarthSprites_Kenji, 0x09 },
    { L"Portrait Related Palette? but blue",            0x1e4900 + (0xa00 * 1), 0x1e4980 + (0xa00 * 1) }, // Unused Mai 2?
    { L"\"Continue ?\" Portrait's Ground but blue",     0x1e4980 + (0xa00 * 1), 0x1e4a00 + (0xa00 * 1), indexRedEarthSprites_Bonus, 0x64 },
    { L"Unused Leo Palette but blue",                   0x1e4a00 + (0xa00 * 1), 0x1e4a80 + (0xa00 * 1), indexRedEarthSprites_Endings, 0x10 },
    { L"Unused Tessa Palette 1 but blue",               0x1e4a80 + (0xa00 * 1), 0x1e4b00 + (0xa00 * 1), indexRedEarthSprites_Tessa, 0x00 },
    { L"Unused Tessa Palette 2 but blue",               0x1e4b00 + (0xa00 * 1), 0x1e4b80 + (0xa00 * 1), indexRedEarthSprites_Tessa, 0x00 },
    { L"Mai-Ling Punch Losing Screen but blue",         0x1e4b80 + (0xa00 * 1), 0x1e4c00 + (0xa00 * 1), indexRedEarthSprites_MaiLing, 0x40 },
    { L"Mai-Ling Punch Vs/Winning Screen but blue",     0x1e4c00 + (0xa00 * 1), 0x1e4c80 + (0xa00 * 1), indexRedEarthSprites_MaiLing, 0x17 },
    { L"Tessa Kick Vs/Winning/Losing Screen but blue",  0x1e4c80 + (0xa00 * 1), 0x1e4d00 + (0xa00 * 1), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Kick Vs/Winning/Losing Screen but blue",    0x1e4d00 + (0xa00 * 1), 0x1e4d80 + (0xa00 * 1), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Kick Vs/Winning/Losing Sword but blue",     0x1e4d80 + (0xa00 * 1), 0x1e4e00 + (0xa00 * 1), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Kenji Kick Vs/Winning/Losing Screen but blue",  0x1e4e00 + (0xa00 * 1), 0x1e4f00 + (0xa00 * 1), indexRedEarthSprites_Kenji, 0x09 },
    { L"Mai-Ling Kick Losing Screen but blue",          0x1e4f00 + (0xa00 * 1), 0x1e4f80 + (0xa00 * 1), indexRedEarthSprites_MaiLing, 0x30 },
    { L"Mai-Ling Kick Vs/Winning Screen but blue",      0x1e4f80 + (0xa00 * 1), 0x1e5000 + (0xa00 * 1), indexRedEarthSprites_MaiLing, 0x27 },

    { L"Tessa Punch Vs/Winning/Losing Screen but pink", 0x1e4600 + (0xa00 * 2), 0x1e4680 + (0xa00 * 2), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Punch Vs/Winning/Losing Screen but pink",   0x1e4680 + (0xa00 * 2), 0x1e4700 + (0xa00 * 2), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Punch Vs/Winning/Losing Sword but pink",    0x1e4700 + (0xa00 * 2), 0x1e4780 + (0xa00 * 2), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Unused Mai Palette? but pink",                  0x1e4780 + (0xa00 * 2), 0x1e4800 + (0xa00 * 2) }, // Unused Mai?
    { L"Kenji Punch Vs/Winning/Losing Screen but pink", 0x1e4800 + (0xa00 * 2), 0x1e4900 + (0xa00 * 2), indexRedEarthSprites_Kenji, 0x09 },
    { L"Portrait Related Palette? but pink",            0x1e4900 + (0xa00 * 2), 0x1e4980 + (0xa00 * 2) }, // Unused Mai 2?
    { L"\"Continue ?\" Portrait's Ground but pink",     0x1e4980 + (0xa00 * 2), 0x1e4a00 + (0xa00 * 2), indexRedEarthSprites_Bonus, 0x64 },
    { L"Unused Leo Palette but pink",                   0x1e4a00 + (0xa00 * 2), 0x1e4a80 + (0xa00 * 2), indexRedEarthSprites_Endings, 0x10 },
    { L"Unused Tessa Palette 1 but pink",               0x1e4a80 + (0xa00 * 2), 0x1e4b00 + (0xa00 * 2), indexRedEarthSprites_Tessa, 0x00 },
    { L"Unused Tessa Palette 2 but pink",               0x1e4b00 + (0xa00 * 2), 0x1e4b80 + (0xa00 * 2), indexRedEarthSprites_Tessa, 0x00 },
    { L"Mai-Ling Punch Losing Screen but pink",         0x1e4b80 + (0xa00 * 2), 0x1e4c00 + (0xa00 * 2), indexRedEarthSprites_MaiLing, 0x40 },
    { L"Mai-Ling Punch Vs/Winning Screen but pink",     0x1e4c00 + (0xa00 * 2), 0x1e4c80 + (0xa00 * 2), indexRedEarthSprites_MaiLing, 0x17 },
    { L"Tessa Kick Vs/Winning/Losing Screen but pink",  0x1e4c80 + (0xa00 * 2), 0x1e4d00 + (0xa00 * 2), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Kick Vs/Winning/Losing Screen but pink",    0x1e4d00 + (0xa00 * 2), 0x1e4d80 + (0xa00 * 2), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Kick Vs/Winning/Losing Sword but pink",     0x1e4d80 + (0xa00 * 2), 0x1e4e00 + (0xa00 * 2), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Kenji Kick Vs/Winning/Losing Screen but pink",  0x1e4e00 + (0xa00 * 2), 0x1e4f00 + (0xa00 * 2), indexRedEarthSprites_Kenji, 0x09 },
    { L"Mai-Ling Kick Losing Screen but pink",          0x1e4f00 + (0xa00 * 2), 0x1e4f80 + (0xa00 * 2), indexRedEarthSprites_MaiLing, 0x30 },
    { L"Mai-Ling Kick Vs/Winning Screen but pink",      0x1e4f80 + (0xa00 * 2), 0x1e5000 + (0xa00 * 2), indexRedEarthSprites_MaiLing, 0x27 },

    { L"Tessa Punch Vs/Winning/Losing Screen but green", 0x1e4600 + (0xa00 * 3), 0x1e4680 + (0xa00 * 3), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Punch Vs/Winning/Losing Screen but green",   0x1e4680 + (0xa00 * 3), 0x1e4700 + (0xa00 * 3), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Punch Vs/Winning/Losing Sword but green",    0x1e4700 + (0xa00 * 3), 0x1e4780 + (0xa00 * 3), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Unused Mai Palette? but green",                  0x1e4780 + (0xa00 * 3), 0x1e4800 + (0xa00 * 3) }, // Unused Mai?
    { L"Kenji Punch Vs/Winning/Losing Screen but green", 0x1e4800 + (0xa00 * 3), 0x1e4900 + (0xa00 * 3), indexRedEarthSprites_Kenji, 0x09 },
    { L"Portrait Related Palette? but green",            0x1e4900 + (0xa00 * 3), 0x1e4980 + (0xa00 * 3) }, // Unused Mai 2?
    { L"\"Continue ?\" Portrait's Ground but green",     0x1e4980 + (0xa00 * 3), 0x1e4a00 + (0xa00 * 3), indexRedEarthSprites_Bonus, 0x64 },
    { L"Unused Leo Palette but green",                   0x1e4a00 + (0xa00 * 3), 0x1e4a80 + (0xa00 * 3), indexRedEarthSprites_Endings, 0x10 },
    { L"Unused Tessa Palette 1 but green",               0x1e4a80 + (0xa00 * 3), 0x1e4b00 + (0xa00 * 3), indexRedEarthSprites_Tessa, 0x00 },
    { L"Unused Tessa Palette 2 but green",               0x1e4b00 + (0xa00 * 3), 0x1e4b80 + (0xa00 * 3), indexRedEarthSprites_Tessa, 0x00 },
    { L"Mai-Ling Punch Losing Screen but green",         0x1e4b80 + (0xa00 * 3), 0x1e4c00 + (0xa00 * 3), indexRedEarthSprites_MaiLing, 0x40 },
    { L"Mai-Ling Punch Vs/Winning Screen but green",     0x1e4c00 + (0xa00 * 3), 0x1e4c80 + (0xa00 * 3), indexRedEarthSprites_MaiLing, 0x17 },
    { L"Tessa Kick Vs/Winning/Losing Screen but green",  0x1e4c80 + (0xa00 * 3), 0x1e4d00 + (0xa00 * 3), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Kick Vs/Winning/Losing Screen but green",    0x1e4d00 + (0xa00 * 3), 0x1e4d80 + (0xa00 * 3), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Kick Vs/Winning/Losing Sword but green",     0x1e4d80 + (0xa00 * 3), 0x1e4e00 + (0xa00 * 3), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Kenji Kick Vs/Winning/Losing Screen but green",  0x1e4e00 + (0xa00 * 3), 0x1e4f00 + (0xa00 * 3), indexRedEarthSprites_Kenji, 0x09 },
    { L"Mai-Ling Kick Losing Screen but green",          0x1e4f00 + (0xa00 * 3), 0x1e4f80 + (0xa00 * 3), indexRedEarthSprites_MaiLing, 0x30 },
    { L"Mai-Ling Kick Vs/Winning Screen but green",      0x1e4f80 + (0xa00 * 3), 0x1e5000 + (0xa00 * 3), indexRedEarthSprites_MaiLing, 0x27 },

    { L"Tessa Punch Vs/Winning/Losing Screen but red", 0x1e4600 + (0xa00 * 4), 0x1e4680 + (0xa00 * 4), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Punch Vs/Winning/Losing Screen but red",   0x1e4680 + (0xa00 * 4), 0x1e4700 + (0xa00 * 4), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Punch Vs/Winning/Losing Sword but red",    0x1e4700 + (0xa00 * 4), 0x1e4780 + (0xa00 * 4), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Unused Mai Palette? but red",                  0x1e4780 + (0xa00 * 4), 0x1e4800 + (0xa00 * 4) }, // Unused Mai?
    { L"Kenji Punch Vs/Winning/Losing Screen but red", 0x1e4800 + (0xa00 * 4), 0x1e4900 + (0xa00 * 4), indexRedEarthSprites_Kenji, 0x09 },
    { L"Portrait Related Palette? but red",            0x1e4900 + (0xa00 * 4), 0x1e4980 + (0xa00 * 4) }, // Unused Mai 2?
    { L"\"Continue ?\" Portrait's Ground but red",     0x1e4980 + (0xa00 * 4), 0x1e4a00 + (0xa00 * 4), indexRedEarthSprites_Bonus, 0x64 },
    { L"Unused Leo Palette but red",                   0x1e4a00 + (0xa00 * 4), 0x1e4a80 + (0xa00 * 4), indexRedEarthSprites_Endings, 0x10 },
    { L"Unused Tessa Palette 1 but red",               0x1e4a80 + (0xa00 * 4), 0x1e4b00 + (0xa00 * 4), indexRedEarthSprites_Tessa, 0x00 },
    { L"Unused Tessa Palette 2 but red",               0x1e4b00 + (0xa00 * 4), 0x1e4b80 + (0xa00 * 4), indexRedEarthSprites_Tessa, 0x00 },
    { L"Mai-Ling Punch Losing Screen but red",         0x1e4b80 + (0xa00 * 4), 0x1e4c00 + (0xa00 * 4), indexRedEarthSprites_MaiLing, 0x40 },
    { L"Mai-Ling Punch Vs/Winning Screen but red",     0x1e4c00 + (0xa00 * 4), 0x1e4c80 + (0xa00 * 4), indexRedEarthSprites_MaiLing, 0x17 },
    { L"Tessa Kick Vs/Winning/Losing Screen but red",  0x1e4c80 + (0xa00 * 4), 0x1e4d00 + (0xa00 * 4), indexRedEarthSprites_Tessa, 0x17 },
    { L"Leo Kick Vs/Winning/Losing Screen but red",    0x1e4d00 + (0xa00 * 4), 0x1e4d80 + (0xa00 * 4), indexRedEarthSprites_Leo, 0x13, &pairNext },
    { L"Leo Kick Vs/Winning/Losing Sword but red",     0x1e4d80 + (0xa00 * 4), 0x1e4e00 + (0xa00 * 4), indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { L"Kenji Kick Vs/Winning/Losing Screen but red",  0x1e4e00 + (0xa00 * 4), 0x1e4f00 + (0xa00 * 4), indexRedEarthSprites_Kenji, 0x09 },
    { L"Mai-Ling Kick Losing Screen but red",          0x1e4f00 + (0xa00 * 4), 0x1e4f80 + (0xa00 * 4), indexRedEarthSprites_MaiLing, 0x30 },
    { L"Mai-Ling Kick Vs/Winning Screen but red",      0x1e4f80 + (0xa00 * 4), 0x1e5000 + (0xa00 * 4), indexRedEarthSprites_MaiLing, 0x27 },
};

//Playable Characters
const sDescTreeNode REDEARTH_A_LEO_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_LEO_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_LEO_KICK_PALETTES) },
    { L"Bonus",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_LEO_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_KENJI_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_KENJI_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_KENJI_KICK_PALETTES) },

    { L"Punch Ninjas",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_NINJAS_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_KENJI_NINJAS_PUNCH_PALETTES) },
    { L"Kick Ninjas",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_NINJAS_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_KENJI_NINJAS_KICK_PALETTES) },

    { L"Bonus",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_KENJI_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_TESSA_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_TESSA_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_TESSA_KICK_PALETTES) },
    { L"Bonus",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_TESSA_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_MAILING_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_MAILING_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_MAILING_KICK_PALETTES) },
    { L"Bonus",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_MAILING_BONUS_PALETTES) },
};

//Bosses

const sDescTreeNode REDEARTH_A_BLADE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_BLADE_PALETTES, ARRAYSIZE(REDEARTH_A_BLADE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_HAUZER_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_HAUZER_PALETTES, ARRAYSIZE(REDEARTH_A_HAUZER_PALETTES) },
};

const sDescTreeNode REDEARTH_A_HYDRON_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_HYDRON_PALETTES, ARRAYSIZE(REDEARTH_A_HYDRON_PALETTES) },
};

const sDescTreeNode REDEARTH_A_KONGOU_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_KONGOU_PALETTES, ARRAYSIZE(REDEARTH_A_KONGOU_PALETTES) },
};

const sDescTreeNode REDEARTH_A_LAVIA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_LAVIA_PALETTES, ARRAYSIZE(REDEARTH_A_LAVIA_PALETTES) },
};

const sDescTreeNode REDEARTH_A_RAVANGE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_RAVANGE_PALETTES, ARRAYSIZE(REDEARTH_A_RAVANGE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_GIGI_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_GIGI_PALETTES, ARRAYSIZE(REDEARTH_A_GIGI_PALETTES) },
};

const sDescTreeNode REDEARTH_A_SCION_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_SCION_PALETTES, ARRAYSIZE(REDEARTH_A_SCION_PALETTES) },
};

//Extra Stuff
const sDescTreeNode REDEARTH_A_CHARACTERSELECT_COLLECTION[] =
{
    { L"Character Select Range", DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_CORE_PALETTES, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_CORE_PALETTES) },
    { L"Character Select P1 Highlight Range", DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_P1_PALETTES, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_P1_PALETTES) },
    { L"Character Select P2 Highlight Range", DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_P2_PALETTES, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_P2_PALETTES) },
};

const sDescTreeNode REDEARTH_A_31_INTRO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_INTRO_PALETTES, ARRAYSIZE(REDEARTH_A_INTRO_PALETTES) },
};

const sDescTreeNode REDEARTH_A_31_OPENINGS_COLLECTION[] =
{
    { L"Kenji Opening Cinematic", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_OPENING_KENJI_PALETTES, ARRAYSIZE(REDEARTH_A_31_OPENING_KENJI_PALETTES) },
    { L"Leo Opening Cinematic", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_OPENING_LEO_PALETTES, ARRAYSIZE(REDEARTH_A_31_OPENING_LEO_PALETTES) },
    { L"Tessa Opening Cinematic", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_OPENING_TESSA_PALETTES, ARRAYSIZE(REDEARTH_A_31_OPENING_TESSA_PALETTES) },
    { L"Mai's Opening Cinematic", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_OPENING_MAI_PALETTES, ARRAYSIZE(REDEARTH_A_31_OPENING_MAI_PALETTES) },
    { L"Blade Introduction", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_OPENING_BLADE_INTRO_PALETTES, ARRAYSIZE(REDEARTH_A_31_OPENING_BLADE_INTRO_PALETTES) },
    { L"Blade 2nd Interaction", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_OPENING_BLADE_2ND_PALETTES, ARRAYSIZE(REDEARTH_A_31_OPENING_BLADE_2ND_PALETTES) },
};

const sDescTreeNode REDEARTH_A_31_ENDINGS_COLLECTION[] =
{
    { L"Mai's Both Endings", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_ENDING_PALETTES_MAI, ARRAYSIZE(REDEARTH_A_31_ENDING_PALETTES_MAI) },
    { L"Kenji's Both Endings", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_ENDING_PALETTES_KENJI, ARRAYSIZE(REDEARTH_A_31_ENDING_PALETTES_KENJI) },
    { L"Leo's Both Endings", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_ENDING_PALETTES_LEO, ARRAYSIZE(REDEARTH_A_31_ENDING_PALETTES_LEO) },
    { L"Tessa's Endings", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_ENDING_PALETTES_TESSA, ARRAYSIZE(REDEARTH_A_31_ENDING_PALETTES_TESSA) },
    { L"Generic Endings", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_ENDING_PALETTES, ARRAYSIZE(REDEARTH_A_31_ENDING_PALETTES) },
    { L"Generic Ending: Derminor", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_ENDING_DERMINOR_PALETTES, ARRAYSIZE(REDEARTH_A_31_ENDING_DERMINOR_PALETTES) },
};

const sDescTreeNode REDEARTH_A_31_MAP_COLLECTION[] =
{
    { L"Map", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_MAP_NORMAL_PALETTES, ARRAYSIZE(REDEARTH_A_31_MAP_NORMAL_PALETTES) },
    { L"Map - Boss Shadow", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_MAP_BOSS_PALETTES, ARRAYSIZE(REDEARTH_A_31_MAP_BOSS_PALETTES) },
    { L"Map - Unknown Transparency 1", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_MAP_TRANS1_PALETTES, ARRAYSIZE(REDEARTH_A_31_MAP_TRANS1_PALETTES) },
    { L"Map - Unknown Transparency 2", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_MAP_TRANS2_PALETTES, ARRAYSIZE(REDEARTH_A_31_MAP_TRANS2_PALETTES) },
    { L"Map - Unknown Transparency 3", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_MAP_TRANS3_PALETTES, ARRAYSIZE(REDEARTH_A_31_MAP_TRANS3_PALETTES) },
};

const sDescTreeNode REDEARTH_A_BONUS_31_COLLECTION[] =
{
    { L"Ranking", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_BONUS_RANKING_PALETTES, ARRAYSIZE(REDEARTH_A_31_BONUS_RANKING_PALETTES) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_31_HUD_PALETTES, ARRAYSIZE(REDEARTH_A_BONUS_31_HUD_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_31_PALETTES, ARRAYSIZE(REDEARTH_A_BONUS_31_PALETTES) },
    { L"Unused Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_31_UNUSED_PALETTES, ARRAYSIZE(REDEARTH_A_BONUS_31_UNUSED_PALETTES) },
};

const sDescTreeNode REDEARTH_A_UNITS_31[] =
{
    //Playable Characters 
    { L"Leo",               DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_COLLECTION, ARRAYSIZE(REDEARTH_A_LEO_COLLECTION) },
    { L"Kenji",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_COLLECTION, ARRAYSIZE(REDEARTH_A_KENJI_COLLECTION) },
    { L"Tessa",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_COLLECTION, ARRAYSIZE(REDEARTH_A_TESSA_COLLECTION) },
    { L"Mai-Ling",          DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_COLLECTION, ARRAYSIZE(REDEARTH_A_MAILING_COLLECTION) },

    //Bosses
    { L"Blade",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_BLADE_COLLECTION, ARRAYSIZE(REDEARTH_A_BLADE_COLLECTION) },
    { L"Gi Gi",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_GIGI_COLLECTION, ARRAYSIZE(REDEARTH_A_GIGI_COLLECTION) },
    { L"Hauzer",            DESC_NODETYPE_TREE, (void*)REDEARTH_A_HAUZER_COLLECTION, ARRAYSIZE(REDEARTH_A_HAUZER_COLLECTION) },
    { L"Hydron",            DESC_NODETYPE_TREE, (void*)REDEARTH_A_HYDRON_COLLECTION, ARRAYSIZE(REDEARTH_A_HYDRON_COLLECTION) },
    { L"Kongou",            DESC_NODETYPE_TREE, (void*)REDEARTH_A_KONGOU_COLLECTION, ARRAYSIZE(REDEARTH_A_KONGOU_COLLECTION) },
    { L"Lavia",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_LAVIA_COLLECTION, ARRAYSIZE(REDEARTH_A_LAVIA_COLLECTION) },
    { L"Ravange",           DESC_NODETYPE_TREE, (void*)REDEARTH_A_RAVANGE_COLLECTION, ARRAYSIZE(REDEARTH_A_RAVANGE_COLLECTION) },
    { L"Scion",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_SCION_COLLECTION, ARRAYSIZE(REDEARTH_A_SCION_COLLECTION) },

    //Extra Stuff
    { L"Character Select",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_COLLECTION, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_COLLECTION) },
    { L"Map",               DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_MAP_COLLECTION, ARRAYSIZE(REDEARTH_A_31_MAP_COLLECTION) },
    { L"Intro Palettes",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_INTRO_COLLECTION, ARRAYSIZE(REDEARTH_A_31_INTRO_COLLECTION) },
    { L"Endings",           DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_ENDINGS_COLLECTION, ARRAYSIZE(REDEARTH_A_31_ENDINGS_COLLECTION) },
    { L"Opening Cinematics", DESC_NODETYPE_TREE, (void*)REDEARTH_A_31_OPENINGS_COLLECTION, ARRAYSIZE(REDEARTH_A_31_OPENINGS_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_31_COLLECTION, ARRAYSIZE(REDEARTH_A_BONUS_31_COLLECTION) },
};

// RedEarth stage palettes from Yoshin
const sGame_PaletteDataset REDEARTH_A_STAGES_ICELARN_PALETTES[] =
{
    { L"Aurora Borealis 1/5", 0x737780, 0x737800, indexRedEarthSprites_Stages, 0x51, &pairFullyLinkedNode },
    { L"BG Trees 1/4", 0x737200, 0x737280, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Icebergs", 0x737400, 0x737480, indexRedEarthSprites_Stages, 0x53 },
    { L"BG Water waves", 0x737480, 0x737500, indexRedEarthSprites_Stages, 0x54 },
    { L"BG Small Water 1/3", 0x737980, 0x737a00, indexRedEarthSprites_Stages, 0x55 },
    { L"Tessa's House and Ground", 0x737080, 0x737100, indexRedEarthSprites_Stages, 0x57 },
    { L"Boat", 0x737600, 0x737680, indexRedEarthSprites_Stages, 0x56 },
    { L"Ice mountain and Christmas tree 1", 0x737000, 0x737080, indexRedEarthSprites_Stages, 0x59 },
    { L"Wave splash", 0x737580, 0x737600, indexRedEarthSprites_Stages, 0x5a },
    { L"Fish", 0x737680, 0x737700, indexRedEarthSprites_Stages, 0x58 },

    { L"Smoke from Chimney", 0x736f80, 0x737000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ICELARN_CYCLE_PALETTES[] =
{
    { L"Ice mountain and Christmas tree 2", 0x737b00, 0x737b80, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 3", 0x737b80, 0x737c00, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 4", 0x737c00, 0x737c80, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 5", 0x737c80, 0x737d00, indexRedEarthSprites_Stages, 0x59 },
    { L"BG Trees 2/4", 0x737280, 0x737300, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Trees 3/4", 0x737300, 0x737380, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Trees 4/4", 0x737380, 0x737400, indexRedEarthSprites_Stages, 0x52 },
    { L"Aurora Borealis 2/5", 0x737500, 0x737580, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 3/5", 0x737800, 0x737880, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 4/5", 0x737880, 0x737900, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 5/5", 0x737900, 0x737980, indexRedEarthSprites_Stages, 0x51 },
    { L"BG Small Water 2/3", 0x737a00, 0x737a80, indexRedEarthSprites_Stages, 0x55 },
    { L"BG Small Water 3/3", 0x737a80, 0x737b00, indexRedEarthSprites_Stages, 0x55 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ICELARN_POISON_PALETTES[] =
{
    { L"Aurora Borealis 1/5", 0x74d780, 0x74d800, indexRedEarthSprites_Stages, 0x51, &pairFullyLinkedNode },
    { L"BG Trees 1/4", 0x74d200, 0x74d280, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Icebergs", 0x74d400, 0x74d480, indexRedEarthSprites_Stages, 0x53 },
    { L"BG Water waves", 0x74d480, 0x74d500, indexRedEarthSprites_Stages, 0x54 },
    { L"BG Small Water 1/3", 0x74d980, 0x74da00, indexRedEarthSprites_Stages, 0x55 },
    { L"Tessa's House and Ground", 0x74d080, 0x74d100, indexRedEarthSprites_Stages, 0x57 },
    { L"Boat", 0x74d600, 0x74d680, indexRedEarthSprites_Stages, 0x56 },
    { L"Ice mountain and Christmas tree 1", 0x74d000, 0x74d080, indexRedEarthSprites_Stages, 0x59 },
    { L"Wave splash", 0x74d580, 0x74d600, indexRedEarthSprites_Stages, 0x5a },
    { L"Fish", 0x74d680, 0x74d700, indexRedEarthSprites_Stages, 0x58 },

    { L"Smoke from Chimney", 0x74cf80, 0x74d000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ICELARN_POISON_CYCLE_PALETTES[] =
{
    { L"Ice mountain and Christmas tree 2", 0x74db00, 0x74db80, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 3", 0x74db80, 0x74dc00, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 4", 0x74dc00, 0x74dc80, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 5", 0x74dc80, 0x74dd00, indexRedEarthSprites_Stages, 0x59 },
    { L"BG Trees 2/4", 0x74d280, 0x74d300, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Trees 3/4", 0x74d300, 0x74d380, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Trees 4/4", 0x74d380, 0x74d400, indexRedEarthSprites_Stages, 0x52 },
    { L"Aurora Borealis 2/5", 0x74d500, 0x74d580, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 3/5", 0x74d800, 0x74d880, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 4/5", 0x74d880, 0x74d900, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 5/5", 0x74d900, 0x74d980, indexRedEarthSprites_Stages, 0x51 },
    { L"BG Small Water 2/3", 0x74da00, 0x74da80, indexRedEarthSprites_Stages, 0x55 },
    { L"BG Small Water 3/3", 0x74da80, 0x74db00, indexRedEarthSprites_Stages, 0x55 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GORA_PALETTES[] =
{
    { L"Gora - Moon/Sky",           0x737D00, 0x737D80, indexRedEarthSprites_Stages, 0x00, &pairFullyLinkedNode },
    { L"Gora - Planes/Rocks",       0x737E00, 0x737F00, indexRedEarthSprites_Stages, 0x03 },
    //{ L"Gora - Moon/Sky: but also left structure",           0x737D00, 0x737D80, indexRedEarthSprites_Stages, 0x04 },
    //{ L"Gora - Ground/Foilage: plant",     0x737D80, 0x737E00, indexRedEarthSprites_Stages, 0x02 },
    { L"Gora - Ground/Foilage: foreground",     0x737D80, 0x737E00, indexRedEarthSprites_Stages, 0x01 },
    { L"Gora - Foreground debris: middle skull",  0x737F80, 0x738000, indexRedEarthSprites_Stages, 0x05 },
    //{ L"Gora - Foreground debris: right",  0x737F80, 0x738000, indexRedEarthSprites_Stages, 0x06 },
    { L"Gora - ???",                0x737F00, 0x737F80 },
    { L"Gora - ???",                0x738000, 0x738080 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GORA_FADED_PALETTES[] =
{
    { L"Gora - Moon/Sky",           0x74dd00, 0x74dd80, indexRedEarthSprites_Stages, 0x00, &pairFullyLinkedNode },
    { L"Gora - Planes/Rocks",       0x74de00, 0x74df00, indexRedEarthSprites_Stages, 0x03 },
    { L"Gora - Ground/Foilage: foreground",     0x74dd80, 0x74de00, indexRedEarthSprites_Stages, 0x01 },
    { L"Gora - Foreground debris: middle skull",  0x74df80, 0x74e000, indexRedEarthSprites_Stages, 0x05 },
    { L"Gora - ???",                0x74df00, 0x74df80 },
    { L"Gora - ???",                0x74e000, 0x74e080 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_PALETTES[] =
{
    { L"Greedia Ruins 1/8: Sky",                0x734300, 0x734400, indexRedEarthSprites_Stages, 0x39, &pairFullyLinkedNode },
    { L"Greedia Ruins 2/8: Waterfalls",         0x734180, 0x734200, indexRedEarthSprites_Stages, 0x3b },
    { L"Greedia Ruins 3/8: Trees",              0x734200, 0x734280, indexRedEarthSprites_Stages, 0x3d },
    { L"Greedia Ruins 4/8: More Waterfalls",    0x734280, 0x734300, indexRedEarthSprites_Stages, 0x3c },
    { L"Greedia Ruins 5/8: Left forest",        0x734100, 0x734180, indexRedEarthSprites_Stages, 0x3a },
    { L"Greedia Ruins 6/8: Pillars",            0x734080, 0x734100, indexRedEarthSprites_Stages, 0x3e },
    { L"Greedia Ruins 7/8",                     0x734480, 0x734500, indexRedEarthSprites_Stages, 0x3f },
    { L"Greedia Ruins 8/8: Hippocamps",         0x734400, 0x734480, indexRedEarthSprites_Stages, 0x40 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_CYCLE_PALETTES[] =
{
    //{ L"Greedia Ruins scrap 1/4", 0x734600, 0x734800 },
    //{ L"Greedia Ruins scrap 2/4", 0x734800, 0x734a00 },
    //{ L"Greedia Ruins scrap 3/4", 0x734a00, 0x734c00 },
    //{ L"Greedia Ruins scrap 4/4", 0x734c00, 0x734d00 },

    { L"Waterfalls cycle: 1/3",         0x734580, 0x734600, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 2/3",         0x734600, 0x734680, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 3/3",         0x734680, 0x734700, indexRedEarthSprites_Stages, 0x3b },

    { L"Trees cycle: 1/3",              0x734700, 0x734780, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 2/3",              0x734780, 0x734800, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 3/3",              0x734800, 0x734880, indexRedEarthSprites_Stages, 0x3d },

    { L"More Waterfalls cycle: 1/3",    0x734880, 0x734900, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 2/3",    0x734900, 0x734980, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 3/3",    0x734980, 0x734a00, indexRedEarthSprites_Stages, 0x3c },

    { L"Left forest cycle: 1/3",        0x734a00, 0x734a80, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 2/3",        0x734a80, 0x734b00, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 3/3",        0x734b00, 0x734b80, indexRedEarthSprites_Stages, 0x3a },

    { L"Sky cycle: 1/3",                0x734b80, 0x734c00, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 2/3",                0x734c00, 0x734c80, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 3/3",                0x734c80, 0x734d00, indexRedEarthSprites_Stages, 0x39 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_PALETTES[] =
{
    { L"Greedia Ruins 1/8: Sky",                0x74a300, 0x74a400, indexRedEarthSprites_Stages, 0x39, &pairFullyLinkedNode },
    { L"Greedia Ruins 2/8: Waterfalls",         0x74a180, 0x74a200, indexRedEarthSprites_Stages, 0x3b },
    { L"Greedia Ruins 3/8: Trees",              0x74a200, 0x74a280, indexRedEarthSprites_Stages, 0x3d },
    { L"Greedia Ruins 4/8: More Waterfalls",    0x74a280, 0x74a300, indexRedEarthSprites_Stages, 0x3c },
    { L"Greedia Ruins 5/8: Left forest",        0x74a100, 0x74a180, indexRedEarthSprites_Stages, 0x3a },
    { L"Greedia Ruins 6/8: Pillars",            0x74a080, 0x74a100, indexRedEarthSprites_Stages, 0x3e },
    { L"Greedia Ruins 7/8",                     0x74a480, 0x74a500, indexRedEarthSprites_Stages, 0x3f },
    { L"Greedia Ruins 8/8: Hippocamps",         0x74a400, 0x74a480, indexRedEarthSprites_Stages, 0x40 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_CYCLE_PALETTES[] =
{
    { L"Waterfalls cycle: 1/3",         0x74a580, 0x74a600, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 2/3",         0x74a600, 0x74a680, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 3/3",         0x74a680, 0x74a700, indexRedEarthSprites_Stages, 0x3b },
    { L"Trees cycle: 1/3",              0x74a700, 0x74a780, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 2/3",              0x74a780, 0x74a800, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 3/3",              0x74a800, 0x74a880, indexRedEarthSprites_Stages, 0x3d },
    { L"More Waterfalls cycle: 1/3",    0x74a880, 0x74a900, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 2/3",    0x74a900, 0x74a980, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 3/3",    0x74a980, 0x74aa00, indexRedEarthSprites_Stages, 0x3c },
    { L"Left forest cycle: 1/3",        0x74aa00, 0x74aa80, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 2/3",        0x74aa80, 0x74ab00, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 3/3",        0x74ab00, 0x74ab80, indexRedEarthSprites_Stages, 0x3a },
    { L"Sky cycle: 1/3",                0x74ab80, 0x74ac00, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 2/3",                0x74ac00, 0x74ac80, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 3/3",                0x74ac80, 0x74ad00, indexRedEarthSprites_Stages, 0x39 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_PALETTES[] =
{
    { L"Zipang on Fire 17/18", 0x736d00, 0x736f00, indexRedEarthSprites_Stages, 0x26, &pairFullyLinkedNode },
    { L"Zipang on Fire 18/18", 0x736f00, 0x736f80, indexRedEarthSprites_Stages, 0x27 },

            { L"Zipang on Fire 4.2.4/18", 0x735480, 0x735500, indexRedEarthSprites_Stages, 0x28 },

    { L"Zipang on Fire 1.1.1/18", 0x734d00, 0x734d80, indexRedEarthSprites_Stages, 0x29 },
    { L"Zipang on Fire 1.1.2/18", 0x734d80, 0x734e00, indexRedEarthSprites_Stages, 0x2a },
    { L"Zipang on Fire 1.1.3/18", 0x734e00, 0x734e80, indexRedEarthSprites_Stages, 0x2b },
    { L"Zipang on Fire 1.1.4/18", 0x734e80, 0x734f00, indexRedEarthSprites_Stages, 0x2c },

        { L"Zipang on Fire 2.1.1/18", 0x734f00, 0x734f80, indexRedEarthSprites_Stages, 0x2d },
        { L"Zipang on Fire 2.1.2/18", 0x734f80, 0x735000, indexRedEarthSprites_Stages, 0x2e },
        { L"Zipang on Fire 2.1.3/18", 0x735000, 0x735080, indexRedEarthSprites_Stages, 0x2f },
        { L"Zipang on Fire 2.1.4/18", 0x735080, 0x735100, indexRedEarthSprites_Stages, 0x30 },

            { L"Zipang on Fire 4.1.1/18", 0x735300, 0x735380, indexRedEarthSprites_Stages, 0x31 },
            { L"Zipang on Fire 4.1.2/18", 0x735380, 0x735400, indexRedEarthSprites_Stages, 0x32 },
            { L"Zipang on Fire 4.1.3/18", 0x735400, 0x735480, indexRedEarthSprites_Stages, 0x33 },

                { L"Zipang on Fire 3.1.1/18", 0x735100, 0x735180, indexRedEarthSprites_Stages, 0x34 },
                { L"Zipang on Fire 3.1.2/18", 0x735180, 0x735200, indexRedEarthSprites_Stages, 0x35 },
                { L"Zipang on Fire 3.1.3/18", 0x735200, 0x735280, indexRedEarthSprites_Stages, 0x36 },
                { L"Zipang on Fire 3.1.4/18", 0x735280, 0x735300, indexRedEarthSprites_Stages, 0x37 },
                //{ L"Zipang on Fire 3.2.2/18", 0x735280, 0x735300, indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_SHADE1_PALETTES[] =
{
            { L"Zipang on Fire 4.2.4/18", 0x735480 + (1 * 0x800), 0x735500 + (1 * 0x800), indexRedEarthSprites_Stages, 0x28, &pairFullyLinkedNode },

    { L"Zipang on Fire 1.1.1/18", 0x734d00 + (1 * 0x800), 0x734d80 + (1 * 0x800), indexRedEarthSprites_Stages, 0x29 },
    { L"Zipang on Fire 1.1.2/18", 0x734d80 + (1 * 0x800), 0x734e00 + (1 * 0x800), indexRedEarthSprites_Stages, 0x2a },
    { L"Zipang on Fire 1.1.3/18", 0x734e00 + (1 * 0x800), 0x734e80 + (1 * 0x800), indexRedEarthSprites_Stages, 0x2b },
    { L"Zipang on Fire 1.1.4/18", 0x734e80 + (1 * 0x800), 0x734f00 + (1 * 0x800), indexRedEarthSprites_Stages, 0x2c },

        { L"Zipang on Fire 2.1.1/18", 0x734f00 + (1 * 0x800), 0x734f80 + (1 * 0x800), indexRedEarthSprites_Stages, 0x2d },
        { L"Zipang on Fire 2.1.2/18", 0x734f80 + (1 * 0x800), 0x735000 + (1 * 0x800), indexRedEarthSprites_Stages, 0x2e },
        { L"Zipang on Fire 2.1.3/18", 0x735000 + (1 * 0x800), 0x735080 + (1 * 0x800), indexRedEarthSprites_Stages, 0x2f },
        { L"Zipang on Fire 2.1.4/18", 0x735080 + (1 * 0x800), 0x735100 + (1 * 0x800), indexRedEarthSprites_Stages, 0x30 },

            { L"Zipang on Fire 4.1.1/18", 0x735300 + (1 * 0x800), 0x735380 + (1 * 0x800), indexRedEarthSprites_Stages, 0x31 },
            { L"Zipang on Fire 4.1.2/18", 0x735380 + (1 * 0x800), 0x735400 + (1 * 0x800), indexRedEarthSprites_Stages, 0x32 },
            { L"Zipang on Fire 4.1.3/18", 0x735400 + (1 * 0x800), 0x735480 + (1 * 0x800), indexRedEarthSprites_Stages, 0x33 },

                { L"Zipang on Fire 3.1.1/18", 0x735100 + (1 * 0x800), 0x735180 + (1 * 0x800), indexRedEarthSprites_Stages, 0x34 },
                { L"Zipang on Fire 3.1.2/18", 0x735180 + (1 * 0x800), 0x735200 + (1 * 0x800), indexRedEarthSprites_Stages, 0x35 },
                { L"Zipang on Fire 3.1.3/18", 0x735200 + (1 * 0x800), 0x735280 + (1 * 0x800), indexRedEarthSprites_Stages, 0x36 },
                { L"Zipang on Fire 3.1.4/18", 0x735280 + (1 * 0x800), 0x735300 + (1 * 0x800), indexRedEarthSprites_Stages, 0x37 },
                //{ L"Zipang on Fire 3.2.2/18", 0x735280 + (1 * 0x800), 0x735300 + (1 * 0x800), indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_SHADE2_PALETTES[] =
{
            { L"Zipang on Fire 4.2.4/18", 0x735480 + (2 * 0x800), 0x735500 + (2 * 0x800), indexRedEarthSprites_Stages, 0x28, &pairFullyLinkedNode },

    { L"Zipang on Fire 1.1.1/18", 0x734d00 + (2 * 0x800), 0x734d80 + (2 * 0x800), indexRedEarthSprites_Stages, 0x29 },
    { L"Zipang on Fire 1.1.2/18", 0x734d80 + (2 * 0x800), 0x734e00 + (2 * 0x800), indexRedEarthSprites_Stages, 0x2a },
    { L"Zipang on Fire 1.1.3/18", 0x734e00 + (2 * 0x800), 0x734e80 + (2 * 0x800), indexRedEarthSprites_Stages, 0x2b },
    { L"Zipang on Fire 1.1.4/18", 0x734e80 + (2 * 0x800), 0x734f00 + (2 * 0x800), indexRedEarthSprites_Stages, 0x2c },

        { L"Zipang on Fire 2.1.1/18", 0x734f00 + (2 * 0x800), 0x734f80 + (2 * 0x800), indexRedEarthSprites_Stages, 0x2d },
        { L"Zipang on Fire 2.1.2/18", 0x734f80 + (2 * 0x800), 0x735000 + (2 * 0x800), indexRedEarthSprites_Stages, 0x2e },
        { L"Zipang on Fire 2.1.3/18", 0x735000 + (2 * 0x800), 0x735080 + (2 * 0x800), indexRedEarthSprites_Stages, 0x2f },
        { L"Zipang on Fire 2.1.4/18", 0x735080 + (2 * 0x800), 0x735100 + (2 * 0x800), indexRedEarthSprites_Stages, 0x30 },

            { L"Zipang on Fire 4.1.1/18", 0x735300 + (2 * 0x800), 0x735380 + (2 * 0x800), indexRedEarthSprites_Stages, 0x31 },
            { L"Zipang on Fire 4.1.2/18", 0x735380 + (2 * 0x800), 0x735400 + (2 * 0x800), indexRedEarthSprites_Stages, 0x32 },
            { L"Zipang on Fire 4.1.3/18", 0x735400 + (2 * 0x800), 0x735480 + (2 * 0x800), indexRedEarthSprites_Stages, 0x33 },

                { L"Zipang on Fire 3.1.1/18", 0x735100 + (2 * 0x800), 0x735180 + (2 * 0x800), indexRedEarthSprites_Stages, 0x34 },
                { L"Zipang on Fire 3.1.2/18", 0x735180 + (2 * 0x800), 0x735200 + (2 * 0x800), indexRedEarthSprites_Stages, 0x35 },
                { L"Zipang on Fire 3.1.3/18", 0x735200 + (2 * 0x800), 0x735280 + (2 * 0x800), indexRedEarthSprites_Stages, 0x36 },
                { L"Zipang on Fire 3.1.4/18", 0x735280 + (2 * 0x800), 0x735300 + (2 * 0x800), indexRedEarthSprites_Stages, 0x37 },
                //{ L"Zipang on Fire 3.2.2/18", 0x735280 + (2 * 0x800), 0x735300 + (2 * 0x800), indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_SHADE3_PALETTES[] =
{
            { L"Zipang on Fire 4.2.4/18", 0x735480 + (3 * 0x800), 0x735500 + (3 * 0x800), indexRedEarthSprites_Stages, 0x28, &pairFullyLinkedNode },

    { L"Zipang on Fire 1.1.1/18", 0x734d00 + (3 * 0x800), 0x734d80 + (3 * 0x800), indexRedEarthSprites_Stages, 0x29 },
    { L"Zipang on Fire 1.1.2/18", 0x734d80 + (3 * 0x800), 0x734e00 + (3 * 0x800), indexRedEarthSprites_Stages, 0x2a },
    { L"Zipang on Fire 1.1.3/18", 0x734e00 + (3 * 0x800), 0x734e80 + (3 * 0x800), indexRedEarthSprites_Stages, 0x2b },
    { L"Zipang on Fire 1.1.4/18", 0x734e80 + (3 * 0x800), 0x734f00 + (3 * 0x800), indexRedEarthSprites_Stages, 0x2c },

        { L"Zipang on Fire 2.1.1/18", 0x734f00 + (3 * 0x800), 0x734f80 + (3 * 0x800), indexRedEarthSprites_Stages, 0x2d },
        { L"Zipang on Fire 2.1.2/18", 0x734f80 + (3 * 0x800), 0x735000 + (3 * 0x800), indexRedEarthSprites_Stages, 0x2e },
        { L"Zipang on Fire 2.1.3/18", 0x735000 + (3 * 0x800), 0x735080 + (3 * 0x800), indexRedEarthSprites_Stages, 0x2f },
        { L"Zipang on Fire 2.1.4/18", 0x735080 + (3 * 0x800), 0x735100 + (3 * 0x800), indexRedEarthSprites_Stages, 0x30 },

            { L"Zipang on Fire 4.1.1/18", 0x735300 + (3 * 0x800), 0x735380 + (3 * 0x800), indexRedEarthSprites_Stages, 0x31 },
            { L"Zipang on Fire 4.1.2/18", 0x735380 + (3 * 0x800), 0x735400 + (3 * 0x800), indexRedEarthSprites_Stages, 0x32 },
            { L"Zipang on Fire 4.1.3/18", 0x735400 + (3 * 0x800), 0x735480 + (3 * 0x800), indexRedEarthSprites_Stages, 0x33 },

                { L"Zipang on Fire 3.1.1/18", 0x735100 + (3 * 0x800), 0x735180 + (3 * 0x800), indexRedEarthSprites_Stages, 0x34 },
                { L"Zipang on Fire 3.1.2/18", 0x735180 + (3 * 0x800), 0x735200 + (3 * 0x800), indexRedEarthSprites_Stages, 0x35 },
                { L"Zipang on Fire 3.1.3/18", 0x735200 + (3 * 0x800), 0x735280 + (3 * 0x800), indexRedEarthSprites_Stages, 0x36 },
                { L"Zipang on Fire 3.1.4/18", 0x735280 + (3 * 0x800), 0x735300 + (3 * 0x800), indexRedEarthSprites_Stages, 0x37 },
                //{ L"Zipang on Fire 3.2.2/18", 0x735280 + (3 * 0x800), 0x735300 + (3 * 0x800), indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_FADED_PALETTES[] =
{
        { L"Zipang on Fire 17/18", 0x74cd00, 0x74cf00, indexRedEarthSprites_Stages, 0x26, &pairFullyLinkedNode },
        { L"Zipang on Fire 18/18", 0x74cf00, 0x74cf80, indexRedEarthSprites_Stages, 0x27 },

                { L"Zipang on Fire 4.2.4/18", 0x735480 + 0x16000, 0x735500 + 0x16000, indexRedEarthSprites_Stages, 0x28 },

        { L"Zipang on Fire 1.1.1/18", 0x734d00 + 0x16000, 0x734d80 + 0x16000, indexRedEarthSprites_Stages, 0x29 },
        { L"Zipang on Fire 1.1.2/18", 0x734d80 + 0x16000, 0x734e00 + 0x16000, indexRedEarthSprites_Stages, 0x2a },
        { L"Zipang on Fire 1.1.3/18", 0x734e00 + 0x16000, 0x734e80 + 0x16000, indexRedEarthSprites_Stages, 0x2b },
        { L"Zipang on Fire 1.1.4/18", 0x734e80 + 0x16000, 0x734f00 + 0x16000, indexRedEarthSprites_Stages, 0x2c },

            { L"Zipang on Fire 2.1.1/18", 0x734f00 + 0x16000, 0x734f80 + 0x16000, indexRedEarthSprites_Stages, 0x2d },
            { L"Zipang on Fire 2.1.2/18", 0x734f80 + 0x16000, 0x735000 + 0x16000, indexRedEarthSprites_Stages, 0x2e },
            { L"Zipang on Fire 2.1.3/18", 0x735000 + 0x16000, 0x735080 + 0x16000, indexRedEarthSprites_Stages, 0x2f },
            { L"Zipang on Fire 2.1.4/18", 0x735080 + 0x16000, 0x735100 + 0x16000, indexRedEarthSprites_Stages, 0x30 },

                { L"Zipang on Fire 4.1.1/18", 0x735300 + 0x16000, 0x735380 + 0x16000, indexRedEarthSprites_Stages, 0x31 },
                { L"Zipang on Fire 4.1.2/18", 0x735380 + 0x16000, 0x735400 + 0x16000, indexRedEarthSprites_Stages, 0x32 },
                { L"Zipang on Fire 4.1.3/18", 0x735400 + 0x16000, 0x735480 + 0x16000, indexRedEarthSprites_Stages, 0x33 },

                    { L"Zipang on Fire 3.1.1/18", 0x735100 + 0x16000, 0x735180 + 0x16000, indexRedEarthSprites_Stages, 0x34 },
                    { L"Zipang on Fire 3.1.2/18", 0x735180 + 0x16000, 0x735200 + 0x16000, indexRedEarthSprites_Stages, 0x35 },
                    { L"Zipang on Fire 3.1.3/18", 0x735200 + 0x16000, 0x735280 + 0x16000, indexRedEarthSprites_Stages, 0x36 },
                    { L"Zipang on Fire 3.1.4/18", 0x735280 + 0x16000, 0x735300 + 0x16000, indexRedEarthSprites_Stages, 0x37 },
                    //{ L"Zipang on Fire 3.2.2/18", 0x735280, 0x735300, indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_FADED_SHADE1_PALETTES[] =
{
                { L"Zipang on Fire 4.2.4/18", 0x735480 + (1 * 0x800) + 0x16000, 0x735500 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x28, &pairFullyLinkedNode },

        { L"Zipang on Fire 1.1.1/18", 0x734d00 + (1 * 0x800) + 0x16000, 0x734d80 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x29 },
        { L"Zipang on Fire 1.1.2/18", 0x734d80 + (1 * 0x800) + 0x16000, 0x734e00 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2a },
        { L"Zipang on Fire 1.1.3/18", 0x734e00 + (1 * 0x800) + 0x16000, 0x734e80 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2b },
        { L"Zipang on Fire 1.1.4/18", 0x734e80 + (1 * 0x800) + 0x16000, 0x734f00 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2c },

            { L"Zipang on Fire 2.1.1/18", 0x734f00 + (1 * 0x800) + 0x16000, 0x734f80 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2d },
            { L"Zipang on Fire 2.1.2/18", 0x734f80 + (1 * 0x800) + 0x16000, 0x735000 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2e },
            { L"Zipang on Fire 2.1.3/18", 0x735000 + (1 * 0x800) + 0x16000, 0x735080 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2f },
            { L"Zipang on Fire 2.1.4/18", 0x735080 + (1 * 0x800) + 0x16000, 0x735100 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x30 },

                { L"Zipang on Fire 4.1.1/18", 0x735300 + (1 * 0x800) + 0x16000, 0x735380 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x31 },
                { L"Zipang on Fire 4.1.2/18", 0x735380 + (1 * 0x800) + 0x16000, 0x735400 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x32 },
                { L"Zipang on Fire 4.1.3/18", 0x735400 + (1 * 0x800) + 0x16000, 0x735480 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x33 },

                    { L"Zipang on Fire 3.1.1/18", 0x735100 + (1 * 0x800) + 0x16000, 0x735180 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x34 },
                    { L"Zipang on Fire 3.1.2/18", 0x735180 + (1 * 0x800) + 0x16000, 0x735200 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x35 },
                    { L"Zipang on Fire 3.1.3/18", 0x735200 + (1 * 0x800) + 0x16000, 0x735280 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x36 },
                    { L"Zipang on Fire 3.1.4/18", 0x735280 + (1 * 0x800) + 0x16000, 0x735300 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x37 },
                    //{ L"Zipang on Fire 3.2.2/18", 0x735280 + (1 * 0x800) + 0x16000, 0x735300 + (1 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_FADED_SHADE2_PALETTES[] =
{
                { L"Zipang on Fire 4.2.4/18", 0x735480 + (2 * 0x800) + 0x16000, 0x735500 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x28, &pairFullyLinkedNode },

        { L"Zipang on Fire 1.1.1/18", 0x734d00 + (2 * 0x800) + 0x16000, 0x734d80 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x29 },
        { L"Zipang on Fire 1.1.2/18", 0x734d80 + (2 * 0x800) + 0x16000, 0x734e00 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2a },
        { L"Zipang on Fire 1.1.3/18", 0x734e00 + (2 * 0x800) + 0x16000, 0x734e80 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2b },
        { L"Zipang on Fire 1.1.4/18", 0x734e80 + (2 * 0x800) + 0x16000, 0x734f00 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2c },

            { L"Zipang on Fire 2.1.1/18", 0x734f00 + (2 * 0x800) + 0x16000, 0x734f80 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2d },
            { L"Zipang on Fire 2.1.2/18", 0x734f80 + (2 * 0x800) + 0x16000, 0x735000 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2e },
            { L"Zipang on Fire 2.1.3/18", 0x735000 + (2 * 0x800) + 0x16000, 0x735080 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2f },
            { L"Zipang on Fire 2.1.4/18", 0x735080 + (2 * 0x800) + 0x16000, 0x735100 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x30 },

                { L"Zipang on Fire 4.1.1/18", 0x735300 + (2 * 0x800) + 0x16000, 0x735380 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x31 },
                { L"Zipang on Fire 4.1.2/18", 0x735380 + (2 * 0x800) + 0x16000, 0x735400 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x32 },
                { L"Zipang on Fire 4.1.3/18", 0x735400 + (2 * 0x800) + 0x16000, 0x735480 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x33 },

                    { L"Zipang on Fire 3.1.1/18", 0x735100 + (2 * 0x800) + 0x16000, 0x735180 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x34 },
                    { L"Zipang on Fire 3.1.2/18", 0x735180 + (2 * 0x800) + 0x16000, 0x735200 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x35 },
                    { L"Zipang on Fire 3.1.3/18", 0x735200 + (2 * 0x800) + 0x16000, 0x735280 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x36 },
                    { L"Zipang on Fire 3.1.4/18", 0x735280 + (2 * 0x800) + 0x16000, 0x735300 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x37 },
                    //{ L"Zipang on Fire 3.2.2/18", 0x735280 + (2 * 0x800) + 0x16000, 0x735300 + (2 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_FADED_SHADE3_PALETTES[] =
{
                { L"Zipang on Fire 4.2.4/18", 0x735480 + (3 * 0x800) + 0x16000, 0x735500 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x28, &pairFullyLinkedNode },

        { L"Zipang on Fire 1.1.1/18", 0x734d00 + (3 * 0x800) + 0x16000, 0x734d80 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x29 },
        { L"Zipang on Fire 1.1.2/18", 0x734d80 + (3 * 0x800) + 0x16000, 0x734e00 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2a },
        { L"Zipang on Fire 1.1.3/18", 0x734e00 + (3 * 0x800) + 0x16000, 0x734e80 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2b },
        { L"Zipang on Fire 1.1.4/18", 0x734e80 + (3 * 0x800) + 0x16000, 0x734f00 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2c },

            { L"Zipang on Fire 2.1.1/18", 0x734f00 + (3 * 0x800) + 0x16000, 0x734f80 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2d },
            { L"Zipang on Fire 2.1.2/18", 0x734f80 + (3 * 0x800) + 0x16000, 0x735000 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2e },
            { L"Zipang on Fire 2.1.3/18", 0x735000 + (3 * 0x800) + 0x16000, 0x735080 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x2f },
            { L"Zipang on Fire 2.1.4/18", 0x735080 + (3 * 0x800) + 0x16000, 0x735100 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x30 },

                { L"Zipang on Fire 4.1.1/18", 0x735300 + (3 * 0x800) + 0x16000, 0x735380 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x31 },
                { L"Zipang on Fire 4.1.2/18", 0x735380 + (3 * 0x800) + 0x16000, 0x735400 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x32 },
                { L"Zipang on Fire 4.1.3/18", 0x735400 + (3 * 0x800) + 0x16000, 0x735480 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x33 },

                    { L"Zipang on Fire 3.1.1/18", 0x735100 + (3 * 0x800) + 0x16000, 0x735180 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x34 },
                    { L"Zipang on Fire 3.1.2/18", 0x735180 + (3 * 0x800) + 0x16000, 0x735200 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x35 },
                    { L"Zipang on Fire 3.1.3/18", 0x735200 + (3 * 0x800) + 0x16000, 0x735280 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x36 },
                    { L"Zipang on Fire 3.1.4/18", 0x735280 + (3 * 0x800) + 0x16000, 0x735300 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x37 },
                    //{ L"Zipang on Fire 3.2.2/18", 0x735280 + (3 * 0x800) + 0x16000, 0x735300 + (3 * 0x800) + 0x16000, indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_STAGE_PALETTES[] =
{
    { L"Sky & Background", 0x738400, 0x738480, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x738480, 0x738500, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738080, 0x738100, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x738300, 0x738380, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x738580, 0x738600, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x738600, 0x738680, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x738500, 0x738580, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738180, 0x738200, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738200, 0x738280, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x738280, 0x738300, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738100, 0x738180, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x738380, 0x738400, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x738680, 0x738700, indexRedEarthSprites_Stages, 0x79 },
    { L"Palm Tree on the Right Side", 0x738700, 0x738780, indexRedEarthSprites_Stages, 0x7a },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_INTRO1_PALETTES[] =
{
    { L"Sky & Background", 0x738b00, 0x738b80, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x738b80, 0x738c00, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738780, 0x738800, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x738a00, 0x738a80, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x738c80, 0x738d00, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x738d00, 0x738d80, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x738c00, 0x738c80, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738880, 0x738900, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738900, 0x738980, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x738980, 0x738a00, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738800, 0x738880, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x738a80, 0x738b00, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x738d80, 0x738e00, indexRedEarthSprites_Stages, 0x79 },
    { L"Palm Tree on the Right Side", 0x73a200, 0x73a280, indexRedEarthSprites_Stages, 0x7a },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_INTRO2_PALETTES[] =
{
    { L"Sky & Background", 0x739180, 0x739200, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x739200, 0x739280, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738e00, 0x738e80, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x739080, 0x739100, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x739300, 0x739380, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x739380, 0x739400, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x739280, 0x739300, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738f00, 0x738f80, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738f80, 0x739000, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x739000, 0x739080, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738e80, 0x738f00, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x739100, 0x739180, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x739400, 0x739480, indexRedEarthSprites_Stages, 0x79 },
    { L"Palm Tree on the Right Side", 0x73a180, 0x73a200, indexRedEarthSprites_Stages, 0x7a },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_INTRO3_PALETTES[] =
{
    { L"Sky & Background", 0x739f00, 0x739f80, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x739f80, 0x73a000, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x739480, 0x739500, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x739900, 0x739980, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x739e80, 0x739f00, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x73a000, 0x73a080, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x739e00, 0x739e80, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x739580, 0x739600, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x739600, 0x739680, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x739680, 0x739700, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x739500, 0x739580, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x739b80, 0x739c00, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x73a080, 0x73a100, indexRedEarthSprites_Stages, 0x79 },
    { L"Palm Tree on the Right Side", 0x73a100, 0x73a180, indexRedEarthSprites_Stages, 0x7a },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_ABSORP_PALETTES[] =
{
    { L"Absorption of Eagle's Statue 1", 0x739700, 0x739780, indexRedEarthSprites_Stages, 0x75 },
    { L"Absorption of Eagle's Statue 2", 0x739780, 0x739800, indexRedEarthSprites_Stages, 0x75 },
    { L"Absorption of Eagle's Statue 3", 0x739800, 0x739880, indexRedEarthSprites_Stages, 0x75 },
    { L"Absorption of Eagle's Statue 4", 0x739880, 0x739900, indexRedEarthSprites_Stages, 0x75 },
    { L"Absorption of Tiger & Lizard Dragon 1", 0x739980, 0x739a00, indexRedEarthSprites_Stages, 0x74 },
    { L"Absorption of Tiger & Lizard Dragon 2", 0x739a00, 0x739a80, indexRedEarthSprites_Stages, 0x74 },
    { L"Absorption of Tiger & Lizard Dragon 3", 0x739a80, 0x739b00, indexRedEarthSprites_Stages, 0x74 },
    { L"Absorption of Tiger & Lizard Dragon 4", 0x739b00, 0x739b80, indexRedEarthSprites_Stages, 0x74 },
    { L"Absorption of Ram Statue 1", 0x739c00, 0x739c80, indexRedEarthSprites_Stages, 0x76 },
    { L"Absorption of Ram Statue 2", 0x739c80, 0x739d00, indexRedEarthSprites_Stages, 0x76 },
    { L"Absorption of Ram Statue 3", 0x739d00, 0x739d80, indexRedEarthSprites_Stages, 0x76 },
    { L"Absorption of Ram Statue 4", 0x739d80, 0x739e00, indexRedEarthSprites_Stages, 0x76 },
    { L"unknown", 0x73a280, 0x73a300 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_FLAMES_STAGE_PALETTES[] =
{
    { L"Sky & Background", 0x738400 + 0x16000, 0x738480 + 0x16000, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x738480 + 0x16000, 0x738500 + 0x16000, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738080 + 0x16000, 0x738100 + 0x16000, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x738300 + 0x16000, 0x738380 + 0x16000, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x738580 + 0x16000, 0x738600 + 0x16000, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x738600 + 0x16000, 0x738680 + 0x16000, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x738500 + 0x16000, 0x738580 + 0x16000, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738180 + 0x16000, 0x738200 + 0x16000, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738200 + 0x16000, 0x738280 + 0x16000, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x738280 + 0x16000, 0x738300 + 0x16000, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738100 + 0x16000, 0x738180 + 0x16000, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x738380 + 0x16000, 0x738400 + 0x16000, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x738680 + 0x16000, 0x738700 + 0x16000, indexRedEarthSprites_Stages, 0x79 },
    { L"Palm Tree on the Right Side", 0x738700 + 0x16000, 0x738780 + 0x16000, indexRedEarthSprites_Stages, 0x7a },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_FLAMES_INTRO1_PALETTES[] =
{
    { L"Sky & Background", 0x738b00 + 0x16000, 0x738b80 + 0x16000, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x738b80 + 0x16000, 0x738c00 + 0x16000, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738780 + 0x16000, 0x738800 + 0x16000, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x738a00 + 0x16000, 0x738a80 + 0x16000, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x738c80 + 0x16000, 0x738d00 + 0x16000, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x738d00 + 0x16000, 0x738d80 + 0x16000, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x738c00 + 0x16000, 0x738c80 + 0x16000, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738880 + 0x16000, 0x738900 + 0x16000, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738900 + 0x16000, 0x738980 + 0x16000, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x738980 + 0x16000, 0x738a00 + 0x16000, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738800 + 0x16000, 0x738880 + 0x16000, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x738a80 + 0x16000, 0x738b00 + 0x16000, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x738d80 + 0x16000, 0x738e00 + 0x16000, indexRedEarthSprites_Stages, 0x79 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_FLAMES_INTRO2_PALETTES[] =
{
    { L"Sky & Background", 0x739180 + 0x16000, 0x739200 + 0x16000, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x739200 + 0x16000, 0x739280 + 0x16000, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738e00 + 0x16000, 0x738e80 + 0x16000, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x739080 + 0x16000, 0x739100 + 0x16000, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x739300 + 0x16000, 0x739380 + 0x16000, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x739380 + 0x16000, 0x739400 + 0x16000, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x739280 + 0x16000, 0x739300 + 0x16000, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738f00 + 0x16000, 0x738f80 + 0x16000, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738f80 + 0x16000, 0x739000 + 0x16000, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x739000 + 0x16000, 0x739080 + 0x16000, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738e80 + 0x16000, 0x738f00 + 0x16000, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x739100 + 0x16000, 0x739180 + 0x16000, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x739400 + 0x16000, 0x739480 + 0x16000, indexRedEarthSprites_Stages, 0x79 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_CRYPT_PALETTES[] =
{
    // Unused parts are in the Other
    { L"Crypt 7.1.4", 0x73a800, 0x73a880, indexRedEarthSprites_Stages, 0x41, &pairFullyLinkedNode },
    { L"Crypt 7.1.3", 0x73a780, 0x73a800, indexRedEarthSprites_Stages, 0x42 },
    { L"Crypt 7.1.2", 0x73a700, 0x73a780, indexRedEarthSprites_Stages, 0x43 },
    { L"Crypt 7.1.1", 0x73a680, 0x73a700, indexRedEarthSprites_Stages, 0x44 },
    { L"Crypt 13.1.4", 0x73b400, 0x73b480, indexRedEarthSprites_Stages, 0x45 },
    { L"Crypt 13.1.2", 0x73b300, 0x73b380, indexRedEarthSprites_Stages, 0x46 },
    { L"Crypt 6.1.4", 0x73a600, 0x73a680, indexRedEarthSprites_Stages, 0x47 },
    { L"Crypt 6.1.3", 0x73a580, 0x73a600, indexRedEarthSprites_Stages, 0x48 },
    { L"Crypt 6.1.1", 0x73a480, 0x73a500, indexRedEarthSprites_Stages, 0x49 },
    { L"Crypt 8.1.4", 0x73aa00, 0x73aa80, indexRedEarthSprites_Stages, 0x4a },
    { L"Crypt 8.1.3", 0x73a980, 0x73aa00, indexRedEarthSprites_Stages, 0x4b },
    { L"Crypt 8.1.2", 0x73a900, 0x73a980, indexRedEarthSprites_Stages, 0x4c },
    { L"Crypt 8.1.1", 0x73a880, 0x73a900, indexRedEarthSprites_Stages, 0x4d },
    { L"Crypt 9.1.2", 0x73ab00, 0x73ac00, indexRedEarthSprites_Stages, 0x4e },
    { L"Crypt 9.1.1", 0x73aa80, 0x73ab00, indexRedEarthSprites_Stages, 0x4f },
    { L"Crypt 14.1.4", 0x73b600, 0x73b680, indexRedEarthSprites_Stages, 0x50 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_CRYPT_OTHER_PALETTES[] =
{
    { L"Crypt 9/9 14.1.4 Cycle 1/2", 0x73b680, 0x73b700, indexRedEarthSprites_Stages, 0x50 },
    { L"Crypt 9/9 14.1.4 Cycle 1/2", 0x73b700, 0x73b780, indexRedEarthSprites_Stages, 0x50 },

    { L"Crypt 1/9 6.1.2", 0x73a500, 0x73a580 },
    // Fully unused data
    //{ L"Crypt 4/9 9.1.3", 0x73ab80, 0x73ac80 },
    { L"Crypt 5/9", 0x73af00, 0x73af80 },

    { L"Crypt 6/9", 0x73b100, 0x73b280 },
    // Fully unused
    //{ L"Crypt 10/15", 0x73ac80, 0x73ae80 },
    { L"Crypt 7/9 13.1.1", 0x73b280, 0x73b300 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_PALETTES[] =
{
    { L"Sky & Background Without Sphinx", 0x73e9a0, 0x73ea20, indexRedEarthSprites_Stages, 0x7b, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x73ea20, 0x73eaa0, indexRedEarthSprites_Stages, 0x7c },
    { L"Ground", 0x73e620, 0x73e6a0, indexRedEarthSprites_Stages, 0x7d },
    { L"Palm Trees but Buggy", 0x73e720, 0x73e7a0, indexRedEarthSprites_Stages, 0x7e },
    { L"Small Part of Palm Trees", 0x73eaa0, 0x73eb20, indexRedEarthSprites_Stages, 0x7f },
    { L"Gigantic Rock on the right & Grass", 0x73e7a0, 0x73e820, indexRedEarthSprites_Stages, 0x80 },
    { L"Left Pillars & Ground Part", 0x73e820, 0x73e8a0, indexRedEarthSprites_Stages, 0x81 },
    { L"Small Part of Left Pillars & Bricks", 0x73e6a0, 0x73e720, indexRedEarthSprites_Stages, 0x82 },
    { L"Smaller Parts of Left Pillars & Bricks", 0x73e920, 0x73e9a0, indexRedEarthSprites_Stages, 0x83 },
    { L"Wall on the left & Ground Part", 0x73ec20, 0x73eca0, indexRedEarthSprites_Stages, 0x84 },
    { L"Clara's Golden Statue", 0x73ef20, 0x73efa0, indexRedEarthSprites_Stages, 0x86 },
    { L"Statue Stand", 0x73eea0, 0x73ef20, indexRedEarthSprites_Stages, 0x85 },
    { L"Scion Statue", 0x73ee20, 0x73eea0, indexRedEarthSprites_Stages, 0x87 },
    { L"Unknown Bonus Game 1 Palette", 0x73e8a0, 0x73e920 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_FADED_PALETTES[] =
{
    { L"Sky & Background Without Sphinx", 0x7539a0, 0x753a20, indexRedEarthSprites_Stages, 0x7b, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x753a20, 0x753aa0, indexRedEarthSprites_Stages, 0x7c },
    { L"Ground", 0x753620, 0x7536a0, indexRedEarthSprites_Stages, 0x7d },
    { L"Palm Trees but Buggy", 0x753720, 0x7537a0, indexRedEarthSprites_Stages, 0x7e },
    { L"Small Part of Palm Trees", 0x753aa0, 0x753b20, indexRedEarthSprites_Stages, 0x7f },
    { L"Gigantic Rock on the right & Grass", 0x7537a0, 0x753820, indexRedEarthSprites_Stages, 0x80 },
    { L"Left Pillars & Ground Part", 0x753820, 0x7538a0, indexRedEarthSprites_Stages, 0x81 },
    { L"Small Part of Left Pillars & Bricks", 0x7536a0, 0x753720, indexRedEarthSprites_Stages, 0x82 },
    { L"Smaller Parts of Left Pillars & Bricks", 0x753920, 0x7539a0, indexRedEarthSprites_Stages, 0x83 },
    { L"Clara's Golden Statue", 0x753f20, 0x753fa0, indexRedEarthSprites_Stages, 0x86 },
    { L"Statue Stand", 0x753ea0, 0x753f20, indexRedEarthSprites_Stages, 0x85 },
    { L"Scion Statue", 0x753e20, 0x753ea0, indexRedEarthSprites_Stages, 0x87 },
    { L"Unknown Bonus Game 1 Palette", 0x7538a0, 0x753920 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_SLASH_PALETTES[] =
{
    { L"Sky & Background Without Sphinx", 0x73e9a0 + 0xb000, 0x73ea20 + 0xb000, indexRedEarthSprites_Stages, 0x7b, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x73ea20 + 0xb000, 0x73eaa0 + 0xb000, indexRedEarthSprites_Stages, 0x7c  },
    { L"Ground", 0x73e620 + 0xb000, 0x73e6a0 + 0xb000, indexRedEarthSprites_Stages, 0x7d },
    { L"Palm Trees but Buggy", 0x73e720 + 0xb000, 0x73e7a0 + 0xb000, indexRedEarthSprites_Stages, 0x7e },
    { L"Small Part of Palm Trees", 0x73eaa0 + 0xb000, 0x73eb20 + 0xb000, indexRedEarthSprites_Stages, 0x7f },
    { L"Gigantic Rock on the right & Grass", 0x73e7a0 + 0xb000, 0x73e820 + 0xb000, indexRedEarthSprites_Stages, 0x80 },
    { L"Left Pillars & Ground Part", 0x73e820 + 0xb000, 0x73e8a0 + 0xb000, indexRedEarthSprites_Stages, 0x81 },
    { L"Small Part of Left Pillars & Bricks", 0x73e6a0 + 0xb000, 0x73e720 + 0xb000, indexRedEarthSprites_Stages, 0x82 },
    { L"Smaller Parts of Left Pillars & Bricks", 0x73e920 + 0xb000, 0x73e9a0 + 0xb000, indexRedEarthSprites_Stages, 0x83 },
    { L"Wall on the left & Ground Part", 0x73ec20 + 0xb000, 0x73eca0 + 0xb000, indexRedEarthSprites_Stages, 0x84 },
    { L"Clara's Golden Statue", 0x73ef20 + 0xb000, 0x73efa0 + 0xb000, indexRedEarthSprites_Stages, 0x86 },
    { L"Statue Stand", 0x73eea0 + 0xb000, 0x73ef20 + 0xb000, indexRedEarthSprites_Stages, 0x85 },
    { L"Scion Statue", 0x73ee20 + 0xb000, 0x73eea0 + 0xb000, indexRedEarthSprites_Stages, 0x87 },
    { L"Unknown Bonus Game 1 Palette", 0x73e8a0 + 0xb000, 0x73e920 + 0xb000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_DERMINOR_PALETTES[] =
{
    { L"Sky & Moon",                        0x73b780, 0x73b800, indexRedEarthSprites_Stages, 0x5b, &pairFullyLinkedNode },
    { L"Bottom Sky, Clouds & Flag",         0x73b900, 0x73b980, indexRedEarthSprites_Stages, 0x5c },
    { L"Castle's Body",                     0x73b800, 0x73b880, indexRedEarthSprites_Stages, 0x5d },
    { L"Left Mini Bridge",                  0x73b880, 0x73b900, indexRedEarthSprites_Stages, 0x5e },
    { L"Tower's Center & Door",             0x73b980, 0x73ba00, indexRedEarthSprites_Stages, 0x5f },
    { L"Castle's Bottom",                   0x73bc00, 0x73bc80, indexRedEarthSprites_Stages, 0x60 },
    { L"Tower, Ground Corners",             0x73ba00, 0x73ba80, indexRedEarthSprites_Stages, 0x61 },
    { L"Tower Inside",                      0x73ba80, 0x73bb00, indexRedEarthSprites_Stages, 0x62 },
    { L"Tower's & Ground's Other Parts",    0x73bb00, 0x73bb80, indexRedEarthSprites_Stages, 0x63 },
    { L"Bridge",                            0x73bb80, 0x73bc00, indexRedEarthSprites_Stages, 0x64 },
    { L"Castle's Top, Bird",                0x73bc80, 0x73be00, indexRedEarthSprites_Stages, 0x65 },
    { L"Ground",                            0x73bf00, 0x73bf80, indexRedEarthSprites_Stages, 0x66 },
    { L"Unknown",                           0x73be80, 0x73bf00 },
};

#ifdef help

'ScionLair_Part1': '0x07', # 6.2
'ScionLair_Part2': '0x08', # 5.1
'ScionLair_Part3': '0x09', # 6.1
'ScionLair_Part4': '0x0A', # 5.2
'ScionLair_Part5': '0x0B', # 4
'ScionLair_Part6': '0x0C', # 3
'ScionLair_Part7': '0x0D', # 2
'ScionLair_Part8': '0x0E', # 1
'ScionLair_Part9': '0x0F', # 6.3

#endif

const sGame_PaletteDataset REDEARTH_A_STAGES_SCION_PALETTES[] =
{
    { L"Scion's Lair 1/8", 0x73cb80, 0x73cc00, indexRedEarthSprites_Stages, 0x0e, &pairFullyLinkedNode },
    { L"Scion's Lair 2/8", 0x73c000, 0x73c200, indexRedEarthSprites_Stages, 0x0d },
    { L"Scion's Lair 3/8", 0x73c200, 0x73c400, indexRedEarthSprites_Stages, 0x0c },
    { L"Scion's Lair 4/8", 0x73c400, 0x73c600, indexRedEarthSprites_Stages, 0x0b },
    { L"Scion's Lair 5/8", 0x73c600, 0x73c800, indexRedEarthSprites_Stages, 0x0a },
    { L"Scion's Lair 6/8", 0x73c880, 0x73ca00, indexRedEarthSprites_Stages, 0x08 },
    { L"Scion's Lair 7/8", 0x73c800, 0x73c880, indexRedEarthSprites_Stages, 0x09 },
    { L"Scion's Lair 8/8", 0x73ca00, 0x73cb80, indexRedEarthSprites_Stages, 0x07 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ICELARN_SLASH_PALETTES[] =
{
    { L"Aurora Borealis 1/5", 0x737780 + 0xb000, 0x737800 + 0xb000, indexRedEarthSprites_Stages, 0x51, &pairFullyLinkedNode },
    { L"BG Trees 1/4", 0x737200 + 0xb000, 0x737280 + 0xb000, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Icebergs", 0x737400 + 0xb000, 0x737480 + 0xb000, indexRedEarthSprites_Stages, 0x53 },
    { L"BG Water waves", 0x737480 + 0xb000, 0x737500 + 0xb000, indexRedEarthSprites_Stages, 0x54 },
    { L"BG Small Water 1/3", 0x737980 + 0xb000, 0x737a00 + 0xb000, indexRedEarthSprites_Stages, 0x55 },
    { L"Tessa's House and Ground", 0x737080 + 0xb000, 0x737100 + 0xb000, indexRedEarthSprites_Stages, 0x57 },
    { L"Boat", 0x737600 + 0xb000, 0x737680 + 0xb000, indexRedEarthSprites_Stages, 0x56 },
    { L"Ice mountain and Christmas tree 1", 0x737000 + 0xb000, 0x737080 + 0xb000, indexRedEarthSprites_Stages, 0x59 },
    { L"Wave splash", 0x737580 + 0xb000, 0x737600 + 0xb000, indexRedEarthSprites_Stages, 0x5a },
    { L"Fish", 0x737680 + 0xb000, 0x737700 + 0xb000, indexRedEarthSprites_Stages, 0x58 },

    { L"Smoke from Chimney", 0x741f80, 0x742000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ICELARN_CYCLE_SLASH_PALETTES[] =
{
    { L"Ice mountain and Christmas tree 2", 0x737b00 + 0xb000, 0x737b80 + 0xb000, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 3", 0x737b80 + 0xb000, 0x737c00 + 0xb000, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 4", 0x737c00 + 0xb000, 0x737c80 + 0xb000, indexRedEarthSprites_Stages, 0x59 },
    { L"Ice mountain and Christmas tree 5", 0x737c80 + 0xb000, 0x737d00 + 0xb000, indexRedEarthSprites_Stages, 0x59 },
    { L"BG Trees 2/4", 0x737280 + 0xb000, 0x737300 + 0xb000, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Trees 3/4", 0x737300 + 0xb000, 0x737380 + 0xb000, indexRedEarthSprites_Stages, 0x52 },
    { L"BG Trees 4/4", 0x737380 + 0xb000, 0x737400 + 0xb000, indexRedEarthSprites_Stages, 0x52 },
    { L"Aurora Borealis 2/5", 0x737500 + 0xb000, 0x737580 + 0xb000, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 3/5", 0x737800 + 0xb000, 0x737880 + 0xb000, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 4/5", 0x737880 + 0xb000, 0x737900 + 0xb000, indexRedEarthSprites_Stages, 0x51 },
    { L"Aurora Borealis 5/5", 0x737900 + 0xb000, 0x737980 + 0xb000, indexRedEarthSprites_Stages, 0x51 },
    { L"BG Small Water 2/3", 0x737a00 + 0xb000, 0x737a80 + 0xb000, indexRedEarthSprites_Stages, 0x55 },
    { L"BG Small Water 3/3", 0x737a80 + 0xb000, 0x737b00 + 0xb000, indexRedEarthSprites_Stages, 0x55 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GORA_SLASH_PALETTES[] =
{
    { L"Gora - Moon/Sky",           0x737D00 + 0xb000, 0x737D80 + 0xb000, indexRedEarthSprites_Stages, 0x00, &pairFullyLinkedNode },
    { L"Gora - Planes/Rocks",       0x737E00 + 0xb000, 0x737F00 + 0xb000, indexRedEarthSprites_Stages, 0x03 },
    //{ L"Gora - Moon/Sky: but also left structure",           0x737D00 + 0xb000, 0x737D80 + 0xb000, indexRedEarthSprites_Stages, 0x04 },
    //{ L"Gora - Ground/Foilage: plant",     0x737D80 + 0xb000, 0x737E00 + 0xb000, indexRedEarthSprites_Stages, 0x02 },
    { L"Gora - Ground/Foilage: foreground",     0x737D80 + 0xb000, 0x737E00 + 0xb000, indexRedEarthSprites_Stages, 0x01 },
    { L"Gora - Foreground debris: middle skull",  0x737F80 + 0xb000, 0x738000 + 0xb000, indexRedEarthSprites_Stages, 0x05 },
    //{ L"Gora - Foreground debris: right",  0x737F80 + 0xb000, 0x738000 + 0xb000, indexRedEarthSprites_Stages, 0x06 },
    { L"Gora - ???",                0x737F00 + 0xb000, 0x737F80 + 0xb000 },
    { L"Gora - ???",                0x738000 + 0xb000, 0x738080 + 0xb000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_SLASH_PALETTES[] =
{
    { L"Greedia Ruins 1/8: Sky",                0x734300 + 0xb000, 0x734400 + 0xb000, indexRedEarthSprites_Stages, 0x39, &pairFullyLinkedNode },
    { L"Greedia Ruins 2/8: Waterfalls",         0x734180 + 0xb000, 0x734200 + 0xb000, indexRedEarthSprites_Stages, 0x3b },
    { L"Greedia Ruins 3/8: Trees",              0x734200 + 0xb000, 0x734280 + 0xb000, indexRedEarthSprites_Stages, 0x3d },
    { L"Greedia Ruins 4/8: More Waterfalls",    0x734280 + 0xb000, 0x734300 + 0xb000, indexRedEarthSprites_Stages, 0x3c },
    { L"Greedia Ruins 5/8: Left forest",        0x734100 + 0xb000, 0x734180 + 0xb000, indexRedEarthSprites_Stages, 0x3a },
    { L"Greedia Ruins 6/8: Pillars",            0x734080 + 0xb000, 0x734100 + 0xb000, indexRedEarthSprites_Stages, 0x3e },
    { L"Greedia Ruins 7/8",                     0x734480 + 0xb000, 0x734500 + 0xb000, indexRedEarthSprites_Stages, 0x3f },
    { L"Greedia Ruins 8/8: Hippocamps",         0x734400 + 0xb000, 0x734480 + 0xb000, indexRedEarthSprites_Stages, 0x40 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_CYCLE_SLASH_PALETTES[] =
{
    //{ L"Greedia Ruins scrap 1/4", 0x734600 + 0xb000, 0x734800 + 0xb000 },
    //{ L"Greedia Ruins scrap 2/4", 0x734800 + 0xb000, 0x734a00 + 0xb000 },
    //{ L"Greedia Ruins scrap 3/4", 0x734a00 + 0xb000, 0x734c00 + 0xb000 },
    //{ L"Greedia Ruins scrap 4/4", 0x734c00 + 0xb000, 0x734d00 + 0xb000 },

    { L"Waterfalls cycle: 1/3",         0x734580 + 0xb000, 0x734600 + 0xb000, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 2/3",         0x734600 + 0xb000, 0x734680 + 0xb000, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 3/3",         0x734680 + 0xb000, 0x734700 + 0xb000, indexRedEarthSprites_Stages, 0x3b },

    { L"Trees cycle: 1/3",              0x734700 + 0xb000, 0x734780 + 0xb000, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 2/3",              0x734780 + 0xb000, 0x734800 + 0xb000, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 3/3",              0x734800 + 0xb000, 0x734880 + 0xb000, indexRedEarthSprites_Stages, 0x3d },

    { L"More Waterfalls cycle: 1/3",    0x734880 + 0xb000, 0x734900 + 0xb000, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 2/3",    0x734900 + 0xb000, 0x734980 + 0xb000, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 3/3",    0x734980 + 0xb000, 0x734a00 + 0xb000, indexRedEarthSprites_Stages, 0x3c },

    { L"Left forest cycle: 1/3",        0x734a00 + 0xb000, 0x734a80 + 0xb000, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 2/3",        0x734a80 + 0xb000, 0x734b00 + 0xb000, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 3/3",        0x734b00 + 0xb000, 0x734b80 + 0xb000, indexRedEarthSprites_Stages, 0x3a },

    { L"Sky cycle: 1/3",                0x734b80 + 0xb000, 0x734c00 + 0xb000, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 2/3",                0x734c00 + 0xb000, 0x734c80 + 0xb000, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 3/3",                0x734c80 + 0xb000, 0x734d00 + 0xb000, indexRedEarthSprites_Stages, 0x39 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_SLASH_PALETTES[] =
{
    { L"Greedia Ruins 1/8: Sky",                0x74a300 + 0xb000, 0x74a400 + 0xb000, indexRedEarthSprites_Stages, 0x39, &pairFullyLinkedNode },
    { L"Greedia Ruins 2/8: Waterfalls",         0x74a180 + 0xb000, 0x74a200 + 0xb000, indexRedEarthSprites_Stages, 0x3b },
    { L"Greedia Ruins 3/8: Trees",              0x74a200 + 0xb000, 0x74a280 + 0xb000, indexRedEarthSprites_Stages, 0x3d },
    { L"Greedia Ruins 4/8: More Waterfalls",    0x74a280 + 0xb000, 0x74a300 + 0xb000, indexRedEarthSprites_Stages, 0x3c },
    { L"Greedia Ruins 5/8: Left forest",        0x74a100 + 0xb000, 0x74a180 + 0xb000, indexRedEarthSprites_Stages, 0x3a },
    { L"Greedia Ruins 6/8: Pillars",            0x74a080 + 0xb000, 0x74a100 + 0xb000, indexRedEarthSprites_Stages, 0x3e },
    { L"Greedia Ruins 7/8",                     0x74a480 + 0xb000, 0x74a500 + 0xb000, indexRedEarthSprites_Stages, 0x3f },
    { L"Greedia Ruins 8/8: Hippocamps",         0x74a400 + 0xb000, 0x74a480 + 0xb000, indexRedEarthSprites_Stages, 0x40 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_CYCLE_SLASH_PALETTES[] =
{
    { L"Waterfalls cycle: 1/3",         0x74a580 + 0xb000, 0x74a600 + 0xb000, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 2/3",         0x74a600 + 0xb000, 0x74a680 + 0xb000, indexRedEarthSprites_Stages, 0x3b },
    { L"Waterfalls cycle: 3/3",         0x74a680 + 0xb000, 0x74a700 + 0xb000, indexRedEarthSprites_Stages, 0x3b },
    { L"Trees cycle: 1/3",              0x74a700 + 0xb000, 0x74a780 + 0xb000, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 2/3",              0x74a780 + 0xb000, 0x74a800 + 0xb000, indexRedEarthSprites_Stages, 0x3d },
    { L"Trees cycle: 3/3",              0x74a800 + 0xb000, 0x74a880 + 0xb000, indexRedEarthSprites_Stages, 0x3d },
    { L"More Waterfalls cycle: 1/3",    0x74a880 + 0xb000, 0x74a900 + 0xb000, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 2/3",    0x74a900 + 0xb000, 0x74a980 + 0xb000, indexRedEarthSprites_Stages, 0x3c },
    { L"More Waterfalls cycle: 3/3",    0x74a980 + 0xb000, 0x74aa00 + 0xb000, indexRedEarthSprites_Stages, 0x3c },
    { L"Left forest cycle: 1/3",        0x74aa00 + 0xb000, 0x74aa80 + 0xb000, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 2/3",        0x74aa80 + 0xb000, 0x74ab00 + 0xb000, indexRedEarthSprites_Stages, 0x3a },
    { L"Left forest cycle: 3/3",        0x74ab00 + 0xb000, 0x74ab80 + 0xb000, indexRedEarthSprites_Stages, 0x3a },
    { L"Sky cycle: 1/3",                0x74ab80 + 0xb000, 0x74ac00 + 0xb000, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 2/3",                0x74ac00 + 0xb000, 0x74ac80 + 0xb000, indexRedEarthSprites_Stages, 0x39 },
    { L"Sky cycle: 3/3",                0x74ac80 + 0xb000, 0x74ad00 + 0xb000, indexRedEarthSprites_Stages, 0x39 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_SLASH_PALETTES[] =
{
    { L"Zipang on Fire 17/18", 0x736d00 + 0xb000, 0x736f00 + 0xb000, indexRedEarthSprites_Stages, 0x26, &pairFullyLinkedNode },
    { L"Zipang on Fire 18/18", 0x736f00 + 0xb000, 0x736f80 + 0xb000, indexRedEarthSprites_Stages, 0x27 },

            { L"Zipang on Fire 4.2.4/18", 0x735480 + 0xb000, 0x735500 + 0xb000, indexRedEarthSprites_Stages, 0x28 },

    { L"Zipang on Fire 1.1.1/18", 0x734d00 + 0xb000, 0x734d80 + 0xb000, indexRedEarthSprites_Stages, 0x29 },
    { L"Zipang on Fire 1.1.2/18", 0x734d80 + 0xb000, 0x734e00 + 0xb000, indexRedEarthSprites_Stages, 0x2a },
    { L"Zipang on Fire 1.1.3/18", 0x734e00 + 0xb000, 0x734e80 + 0xb000, indexRedEarthSprites_Stages, 0x2b },
    { L"Zipang on Fire 1.1.4/18", 0x734e80 + 0xb000, 0x734f00 + 0xb000, indexRedEarthSprites_Stages, 0x2c },

        { L"Zipang on Fire 2.1.1/18", 0x734f00 + 0xb000, 0x734f80 + 0xb000, indexRedEarthSprites_Stages, 0x2d },
        { L"Zipang on Fire 2.1.2/18", 0x734f80 + 0xb000, 0x735000 + 0xb000, indexRedEarthSprites_Stages, 0x2e },
        { L"Zipang on Fire 2.1.3/18", 0x735000 + 0xb000, 0x735080 + 0xb000, indexRedEarthSprites_Stages, 0x2f },
        { L"Zipang on Fire 2.1.4/18", 0x735080 + 0xb000, 0x735100 + 0xb000, indexRedEarthSprites_Stages, 0x30 },

            { L"Zipang on Fire 4.1.1/18", 0x735300 + 0xb000, 0x735380 + 0xb000, indexRedEarthSprites_Stages, 0x31 },
            { L"Zipang on Fire 4.1.2/18", 0x735380 + 0xb000, 0x735400 + 0xb000, indexRedEarthSprites_Stages, 0x32 },
            { L"Zipang on Fire 4.1.3/18", 0x735400 + 0xb000, 0x735480 + 0xb000, indexRedEarthSprites_Stages, 0x33 },

                { L"Zipang on Fire 3.1.1/18", 0x735100 + 0xb000, 0x735180 + 0xb000, indexRedEarthSprites_Stages, 0x34 },
                { L"Zipang on Fire 3.1.2/18", 0x735180 + 0xb000, 0x735200 + 0xb000, indexRedEarthSprites_Stages, 0x35 },
                { L"Zipang on Fire 3.1.3/18", 0x735200 + 0xb000, 0x735280 + 0xb000, indexRedEarthSprites_Stages, 0x36 },
                { L"Zipang on Fire 3.1.4/18", 0x735280 + 0xb000, 0x735300 + 0xb000, indexRedEarthSprites_Stages, 0x37 },
                //{ L"Zipang on Fire 3.2.2/18", 0x735280 + 0xb000, 0x735300 + 0xb000, indexRedEarthSprites_Stages, 0x38 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_STAGE_SLASH_PALETTES[] =
{
    { L"Sky & Background", 0x738400 + 0xb000, 0x738480 + 0xb000, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x738480 + 0xb000, 0x738500 + 0xb000, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738080 + 0xb000, 0x738100 + 0xb000, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x738300 + 0xb000, 0x738380 + 0xb000, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x738580 + 0xb000, 0x738600 + 0xb000, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x738600 + 0xb000, 0x738680 + 0xb000, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x738500 + 0xb000, 0x738580 + 0xb000, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738180 + 0xb000, 0x738200 + 0xb000, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738200 + 0xb000, 0x738280 + 0xb000, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x738280 + 0xb000, 0x738300 + 0xb000, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738100 + 0xb000, 0x738180 + 0xb000, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x738380 + 0xb000, 0x738400 + 0xb000, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x738680 + 0xb000, 0x738700 + 0xb000, indexRedEarthSprites_Stages, 0x79 },
    { L"Palm Tree on the Right Side", 0x738700 + 0xb000, 0x738780 + 0xb000, indexRedEarthSprites_Stages, 0x7a },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_INTRO1_SLASH_PALETTES[] =
{
    { L"Sky & Background", 0x738400 + 0xb700, 0x738480 + 0xb700, indexRedEarthSprites_Stages, 0x6d, &pairFullyLinkedNode },
    { L"Background Building on the Right", 0x738480 + 0xb700, 0x738500 + 0xb700, indexRedEarthSprites_Stages, 0x6e },
    { L"Ground", 0x738080 + 0xb700, 0x738100 + 0xb700, indexRedEarthSprites_Stages, 0x6f },
    { L"Center Pillars & Eagle Statue", 0x738300 + 0xb700, 0x738380 + 0xb700, indexRedEarthSprites_Stages, 0x75 },
    { L"Middle Ground Pillars & Ground Part", 0x738580 + 0xb700, 0x738600 + 0xb700, indexRedEarthSprites_Stages, 0x77 },
    { L"Background Pillars & Ground Part", 0x738600 + 0xb700, 0x738680 + 0xb700, indexRedEarthSprites_Stages, 0x78 },
    { L"Ram Statue's Head & part of Palm Trees", 0x738500 + 0xb700, 0x738580 + 0xb700, indexRedEarthSprites_Stages, 0x76 },
    { L"Palm Trees & Part of Ram Statue", 0x738180 + 0xb700, 0x738200 + 0xb700, indexRedEarthSprites_Stages, 0x72 },
    { L"Gigantic Rock on the right & Grass", 0x738200 + 0xb700, 0x738280 + 0xb700, indexRedEarthSprites_Stages, 0x71 },
    { L"Left Pillars & Ground Part", 0x738280 + 0xb700, 0x738300 + 0xb700, indexRedEarthSprites_Stages, 0x73 },
    { L"Small Part of Left Pillars & Bricks", 0x738100 + 0xb700, 0x738180 + 0xb700, indexRedEarthSprites_Stages, 0x70 },
    { L"Tiger & Lizard Type Dragon Statues", 0x738380 + 0xb700, 0x738400 + 0xb700, indexRedEarthSprites_Stages, 0x74 },
    { L"Wall on the left & Ground Part", 0x738680 + 0xb700, 0x738700 + 0xb700, indexRedEarthSprites_Stages, 0x79 },
    { L"Palm Tree on the Right Side", 0x738700 + 0xb700, 0x738780 + 0xb700, indexRedEarthSprites_Stages, 0x7a },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SANGYPT_INTRO3_SLASH_PALETTES[] =
{
    { L"Sangypt Intro 1/5", 0x739b00 + 0xb000, 0x739c80 + 0xb000 }, // 737b00
    { L"Sangypt Intro 2/5", 0x739c80 + 0xb000, 0x739e80 + 0xb000 }, // 737c80
    { L"Sangypt Intro 3/5", 0x739e80 + 0xb000, 0x73a080 + 0xb000 }, // 737e80
    { L"Sangypt Intro 4/5", 0x73a080 + 0xb000, 0x73a280 + 0xb000 }, // 738080
    { L"Sangypt Intro 5/5", 0x73a280 + 0xb000, 0x73a480 + 0xb000, }, // 738280
};

const sGame_PaletteDataset REDEARTH_A_STAGES_CRYPT_SLASH_PALETTES[] =
{
    // Unused parts are in the Other
    { L"Crypt 7.1.4", 0x73a800 + 0xb000, 0x73a880 + 0xb000, indexRedEarthSprites_Stages, 0x41, &pairFullyLinkedNode },
    { L"Crypt 7.1.3", 0x73a780 + 0xb000, 0x73a800 + 0xb000, indexRedEarthSprites_Stages, 0x42 },
    { L"Crypt 7.1.2", 0x73a700 + 0xb000, 0x73a780 + 0xb000, indexRedEarthSprites_Stages, 0x43 },
    { L"Crypt 7.1.1", 0x73a680 + 0xb000, 0x73a700 + 0xb000, indexRedEarthSprites_Stages, 0x44 },
    { L"Crypt 13.1.4", 0x73b400 + 0xb000, 0x73b480 + 0xb000, indexRedEarthSprites_Stages, 0x45 },
    { L"Crypt 13.1.2", 0x73b300 + 0xb000, 0x73b380 + 0xb000, indexRedEarthSprites_Stages, 0x46 },
    { L"Crypt 6.1.4", 0x73a600 + 0xb000, 0x73a680 + 0xb000, indexRedEarthSprites_Stages, 0x47 },
    { L"Crypt 6.1.3", 0x73a580 + 0xb000, 0x73a600 + 0xb000, indexRedEarthSprites_Stages, 0x48 },
    { L"Crypt 6.1.1", 0x73a480 + 0xb000, 0x73a500 + 0xb000, indexRedEarthSprites_Stages, 0x49 },
    { L"Crypt 8.1.4", 0x73aa00 + 0xb000, 0x73aa80 + 0xb000, indexRedEarthSprites_Stages, 0x4a },
    { L"Crypt 8.1.3", 0x73a980 + 0xb000, 0x73aa00 + 0xb000, indexRedEarthSprites_Stages, 0x4b },
    { L"Crypt 8.1.2", 0x73a900 + 0xb000, 0x73a980 + 0xb000, indexRedEarthSprites_Stages, 0x4c },
    { L"Crypt 8.1.1", 0x73a880 + 0xb000, 0x73a900 + 0xb000, indexRedEarthSprites_Stages, 0x4d },
    { L"Crypt 9.1.2", 0x745b00, 0x745c00, indexRedEarthSprites_Stages, 0x4e },
    { L"Crypt 9.1.1", 0x73aa80 + 0xb000, 0x73ab00 + 0xb000, indexRedEarthSprites_Stages, 0x4f },
    { L"Crypt 14.1.4", 0x73b600 + 0xb000, 0x73b680 + 0xb000, indexRedEarthSprites_Stages, 0x50 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_CRYPT_OTHER_SLASH_PALETTES[] =
{
    { L"Crypt 9/9 14.1.4 Cycle 1/2", 0x73b680 + 0xb000, 0x73b700 + 0xb000, indexRedEarthSprites_Stages, 0x50 },
    { L"Crypt 9/9 14.1.4 Cycle 1/2", 0x73b700 + 0xb000, 0x73b780 + 0xb000, indexRedEarthSprites_Stages, 0x50 },

    { L"Crypt 1/9 6.1.2", 0x73a500 + 0xb000, 0x73a580 + 0xb000 },
    // Fully unused data
    //{ L"Crypt 4/9 9.1.3", 0x73ab80 + 0xb000, 0x73ac80 + 0xb000 },
    { L"Crypt 5/9", 0x73af00 + 0xb000, 0x73af80 + 0xb000 },

    { L"Crypt 6/9", 0x73b100 + 0xb000, 0x73b280 + 0xb000 },
    // Fully unused
    //{ L"Crypt 10/15", 0x73ac80 + 0xb000, 0x73ae80 + 0xb000 },
    { L"Crypt 7/9 13.1.1", 0x73b280 + 0xb000, 0x73b300 + 0xb000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_DERMINOR_SLASH_PALETTES[] =
{
    { L"Sky & Moon",                        0x73b780 + 0xb000, 0x73b800 + 0xb000, indexRedEarthSprites_Stages, 0x5b, &pairFullyLinkedNode },
    { L"Bottom Sky, Clouds & Flag",         0x73b900 + 0xb000, 0x73b980 + 0xb000, indexRedEarthSprites_Stages, 0x5c },
    { L"Castle's Body",                     0x73b800 + 0xb000, 0x73b880 + 0xb000, indexRedEarthSprites_Stages, 0x5d },
    { L"Left Mini Bridge",                  0x73b880 + 0xb000, 0x73b900 + 0xb000, indexRedEarthSprites_Stages, 0x5e },
    { L"Tower's Center & Door",             0x73b980 + 0xb000, 0x73ba00 + 0xb000, indexRedEarthSprites_Stages, 0x5f },
    { L"Castle's Bottom",                   0x73bc00 + 0xb000, 0x73bc80 + 0xb000, indexRedEarthSprites_Stages, 0x60 },
    { L"Tower, Ground Corners",             0x73ba00 + 0xb000, 0x73ba80 + 0xb000, indexRedEarthSprites_Stages, 0x61 },
    { L"Tower Inside",                      0x73ba80 + 0xb000, 0x73bb00 + 0xb000, indexRedEarthSprites_Stages, 0x62 },
    { L"Tower's & Ground's Other Parts",    0x73bb00 + 0xb000, 0x73bb80 + 0xb000, indexRedEarthSprites_Stages, 0x63 },
    { L"Bridge",                            0x73bb80 + 0xb000, 0x73bc00 + 0xb000, indexRedEarthSprites_Stages, 0x64 },
    { L"Castle's Top, Bird",                0x73bc80 + 0xb000, 0x73be00 + 0xb000, indexRedEarthSprites_Stages, 0x65 },
    { L"Ground",                            0x73bf00 + 0xb000, 0x73bf80 + 0xb000, indexRedEarthSprites_Stages, 0x66 },
    { L"Unknown",                           0x73be80 + 0xb000, 0x73bf00 + 0xb000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_DERMINOR_BLADE_PALETTES[] =
{
    { L"Sky & Moon",                        0x73b780 + 0x16000, 0x73b800 + 0x16000, indexRedEarthSprites_Stages, 0x5b, &pairFullyLinkedNode },
    { L"Bottom Sky, Clouds & Flag",         0x73b900 + 0x16000, 0x73b980 + 0x16000, indexRedEarthSprites_Stages, 0x5c },
    { L"Castle's Body",                     0x73b800 + 0x16000, 0x73b880 + 0x16000, indexRedEarthSprites_Stages, 0x5d },
    { L"Left Mini Bridge",                  0x73b880 + 0x16000, 0x73b900 + 0x16000, indexRedEarthSprites_Stages, 0x5e },
    { L"Tower's Center & Door",             0x73b980 + 0x16000, 0x73ba00 + 0x16000, indexRedEarthSprites_Stages, 0x5f },
    { L"Castle's Bottom",                   0x73bc00 + 0x16000, 0x73bc80 + 0x16000, indexRedEarthSprites_Stages, 0x60 },
    { L"Tower, Ground Corners",             0x73ba00 + 0x16000, 0x73ba80 + 0x16000, indexRedEarthSprites_Stages, 0x61 },
    { L"Tower Inside",                      0x73ba80 + 0x16000, 0x73bb00 + 0x16000, indexRedEarthSprites_Stages, 0x62 },
    { L"Tower's & Ground's Other Parts",    0x73bb00 + 0x16000, 0x73bb80 + 0x16000, indexRedEarthSprites_Stages, 0x63 },
    { L"Bridge",                            0x73bb80 + 0x16000, 0x73bc00 + 0x16000, indexRedEarthSprites_Stages, 0x64 },
    { L"Castle's Top, Bird",                0x73bc80 + 0x16000, 0x73be00 + 0x16000, indexRedEarthSprites_Stages, 0x65 },
    { L"Ground",                            0x73bf00 + 0x16000, 0x73bf80 + 0x16000, indexRedEarthSprites_Stages, 0x66 },
    { L"Unknown",                           0x73be80 + 0x16000, 0x73bf00 + 0x16000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SCION_SLASH_PALETTES[] =
{
    { L"Scion's Lair 1/8", 0x73cb80 + 0xb000, 0x73cc00 + 0xb000, indexRedEarthSprites_Stages, 0x0e, &pairFullyLinkedNode },
    { L"Scion's Lair 2/8", 0x73c000 + 0xb000, 0x73c200 + 0xb000, indexRedEarthSprites_Stages, 0x0d },
    { L"Scion's Lair 3/8", 0x73c200 + 0xb000, 0x73c400 + 0xb000, indexRedEarthSprites_Stages, 0x0c },
    { L"Scion's Lair 4/8", 0x73c400 + 0xb000, 0x73c600 + 0xb000, indexRedEarthSprites_Stages, 0x0b },
    { L"Scion's Lair 5/8", 0x73c600 + 0xb000, 0x73c800 + 0xb000, indexRedEarthSprites_Stages, 0x0a },
    { L"Scion's Lair 6/8", 0x73c880 + 0xb000, 0x73ca00 + 0xb000, indexRedEarthSprites_Stages, 0x08 },
    { L"Scion's Lair 7/8", 0x73c800 + 0xb000, 0x73c880 + 0xb000, indexRedEarthSprites_Stages, 0x09 },
    { L"Scion's Lair 8/8", 0x73ca00 + 0xb000, 0x73cb80 + 0xb000, indexRedEarthSprites_Stages, 0x07 },
};

const sGame_PaletteDataset REDEARTH_A_30_BONUS_ELEBG_PALETTES[] =
{
    { L"Poison Dogma 1", 0x7a0000, 0x7a0080, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 2", 0x7a0080, 0x7a0100, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 3", 0x7a0100, 0x7a0180, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 4", 0x7a0180, 0x7a0200, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 5", 0x7a0200, 0x7a0280, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 6", 0x7a0280, 0x7a0300, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 7", 0x7a0300, 0x7a0380, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 8", 0x7a0380, 0x7a0400, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 9", 0x7a0400, 0x7a0480, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 10", 0x7a0480, 0x7a0500, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 11", 0x7a0500, 0x7a0580, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 12", 0x7a0580, 0x7a0600, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 13", 0x7a0600, 0x7a0680, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 14", 0x7a0680, 0x7a0700, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 15", 0x7a0700, 0x7a0780, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 16", 0x7a0780, 0x7a0800, indexRedEarthSprites_Stages, 0x6a },

    { L"Wind Rafale 1", 0x7a0800, 0x7a0880, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 2", 0x7a0880, 0x7a0900, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 3", 0x7a0900, 0x7a0980, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 4", 0x7a0980, 0x7a0a00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 5", 0x7a0a00, 0x7a0a80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 6", 0x7a0a80, 0x7a0b00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 7", 0x7a0b00, 0x7a0b80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 8", 0x7a0b80, 0x7a0c00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 9", 0x7a0c00, 0x7a0c80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 10", 0x7a0c80, 0x7a0d00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 11", 0x7a0d00, 0x7a0d80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 12", 0x7a0d80, 0x7a0e00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 13", 0x7a0e00, 0x7a0e80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 14", 0x7a0e80, 0x7a0f00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 15", 0x7a0f00, 0x7a0f80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 16", 0x7a0f80, 0x7a1000, indexRedEarthSprites_Stages, 0x6c },

    { L"Thunder Gorubarus 1", 0x7a1000, 0x7a1080, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 2", 0x7a1080, 0x7a1100, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 3", 0x7a1100, 0x7a1180, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 4", 0x7a1180, 0x7a1200, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 5", 0x7a1200, 0x7a1280, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 6", 0x7a1280, 0x7a1300, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 7", 0x7a1300, 0x7a1380, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 8", 0x7a1380, 0x7a1400, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 9", 0x7a1400, 0x7a1480, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 10", 0x7a1480, 0x7a1500, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 11", 0x7a1500, 0x7a1580, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 12", 0x7a1580, 0x7a1600, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 13", 0x7a1600, 0x7a1680, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 14", 0x7a1680, 0x7a1700, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 15", 0x7a1700, 0x7a1780, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 16", 0x7a1780, 0x7a1800, indexRedEarthSprites_Stages, 0x6b },

    { L"Flame Goranda 1", 0x7a1800, 0x7a1880, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 2", 0x7a1880, 0x7a1900, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 3", 0x7a1900, 0x7a1980, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 4", 0x7a1980, 0x7a1a00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 5", 0x7a1a00, 0x7a1a80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 6", 0x7a1a80, 0x7a1b00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 7", 0x7a1b00, 0x7a1b80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 8", 0x7a1b80, 0x7a1c00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 9", 0x7a1c00, 0x7a1c80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 10", 0x7a1c80, 0x7a1d00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 11", 0x7a1d00, 0x7a1d80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 12", 0x7a1d80, 0x7a1e00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 13", 0x7a1e00, 0x7a1e80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 14", 0x7a1e80, 0x7a1f00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 15", 0x7a1f00, 0x7a1f80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 16", 0x7a1f80, 0x7a2000, indexRedEarthSprites_Stages, 0x67 },

    { L"Meteor Giamateus 1", 0x7a2000, 0x7a2080, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 2", 0x7a2080, 0x7a2100, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 3", 0x7a2100, 0x7a2180, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 4", 0x7a2180, 0x7a2200, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 5", 0x7a2200, 0x7a2280, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 6", 0x7a2280, 0x7a2300, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 7", 0x7a2300, 0x7a2380, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 8", 0x7a2380, 0x7a2400, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 9", 0x7a2400, 0x7a2480, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 10", 0x7a2480, 0x7a2500, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 11", 0x7a2500, 0x7a2580, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 12", 0x7a2580, 0x7a2600, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 13", 0x7a2600, 0x7a2680, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 14", 0x7a2680, 0x7a2700, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 15", 0x7a2700, 0x7a2780, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 16", 0x7a2780, 0x7a2800, indexRedEarthSprites_Stages, 0x69 },

    { L"Ice Soulfunil 1", 0x7a2800, 0x7a2880, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 2", 0x7a2880, 0x7a2900, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 3", 0x7a2900, 0x7a2980, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 4", 0x7a2980, 0x7a2a00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 5", 0x7a2a00, 0x7a2a80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 6", 0x7a2a80, 0x7a2b00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 7", 0x7a2b00, 0x7a2b80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 8", 0x7a2b80, 0x7a2c00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 9", 0x7a2c00, 0x7a2c80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 10", 0x7a2c80, 0x7a2d00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 11", 0x7a2d00, 0x7a2d80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 12", 0x7a2d80, 0x7a2e00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 13", 0x7a2e00, 0x7a2e80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 14", 0x7a2e80, 0x7a2f00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 15", 0x7a2f00, 0x7a2f80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 16", 0x7a2f80, 0x7a3000, indexRedEarthSprites_Stages, 0x68 },
};

const sGame_PaletteDataset REDEARTH_A_30_BONUS_TEXT_PALETTES[] =
{
    { L"Leo VS Text, Yashichi, Mobichan", 0x7eb000, 0x7eb080, indexRedEarthSprites_Bonus, 0x18 },
    { L"Kenji VS Text, Titles, Mobi Charged 1", 0x7eb080, 0x7eb100, indexRedEarthSprites_Bonus, 0x12 },
    { L"Mai VS Text, Coming Next, Mobi Charged 2", 0x7eb100, 0x7eb180, indexRedEarthSprites_Bonus, 0x13 },
    { L"Tessa VS Text, Staff, Mobi Charged 3", 0x7eb180, 0x7eb200, indexRedEarthSprites_Bonus, 0x11 },
    { L"Thanks For Playing Shine, Mobi Charged 4", 0x7eb200, 0x7eb280, indexRedEarthSprites_Bonus, 0x66 },
    { L"Text: PERFECT", 0x7eb300, 0x7eb380, indexRedEarthSprites_Bonus, 0x15 },
    { L"Text: KO", 0x7eb380, 0x7eb400, indexRedEarthSprites_Bonus, 0x14 },
    { L"Text: TIME IS ENDED", 0x7eb480, 0x7eb500, indexRedEarthSprites_Bonus, 0x62 },
    { L"Text: DRAW", 0x7eb500, 0x7eb580, indexRedEarthSprites_Bonus, 0x63 },
    { L"Text: FIGHT, ATTACK, IS VICTORIOUS", 0x7eb580, 0x7eb600, indexRedEarthSprites_Bonus, 0x16 },
};

const sGame_PaletteDataset REDEARTH_A_30_BONUS_UNUSED_PALETTES[] =
{
    { L"Icelarn Unused 1", 0x737100, 0x737180 },
    { L"Icelarn Unused 2", 0x737700, 0x737780 },

    { L"Icelarn Unused 1 (Slash Transparency)", 0x742100, 0x742180 },
    { L"Icelarn Unused 2 (Slash Transparency)", 0x742700, 0x742780 },
    { L"Icelarn Unused 1 (Poison Gas Transparency)", 0x74d100, 0x74d180 },
    { L"Icelarn Unused 2 (Poison Gas Transparency)", 0x74d700, 0x74d780 },
    { L"Palm Tree on the Right Side for BG1", 0x73eca0, 0x73ed20 },
    { L"Palm Tree on the Right Side for BG1 ST", 0x749ca0, 0x749d20 },

    { L"Greedia Unused Palette", 0x734000, 0x734080 },

    { L"Greedia Unused Palette (Slash Transparency)", 0x73f000, 0x73f080 },

    { L"Greedia Unused Palette (Hauzer's Fire Transparency)", 0x74a000, 0x74a080 },

    { L"Unused Text 1? (Thanks for Playing?)", 0x7eb280, 0x7eb300 },
    { L"Unused Text 2? (Time is Ended?)", 0x7eb400, 0x7eb480 },

    { L"Mystic Combo I Super BG 1?", 0x79f000, 0x79f080, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 2?", 0x79f080, 0x79f100, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 3?", 0x79f100, 0x79f180, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 4?", 0x79f180, 0x79f200, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 5?", 0x79f200, 0x79f280, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 6?", 0x79f280, 0x79f300, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 7?", 0x79f300, 0x79f380, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 8?", 0x79f380, 0x79f400, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 9?", 0x79f400, 0x79f480, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 10?", 0x79f480, 0x79f500, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 11?", 0x79f500, 0x79f580, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 12?", 0x79f580, 0x79f600, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 13?", 0x79f600, 0x79f680, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 14?", 0x79f680, 0x79f700, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 15?", 0x79f700, 0x79f780, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 16?", 0x79f780, 0x79f800, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 1?", 0x79f800, 0x79f880, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 2?", 0x79f880, 0x79f900, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 3?", 0x79f900, 0x79f980, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 4?", 0x79f980, 0x79fa00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 5?", 0x79fa00, 0x79fa80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 6?", 0x79fa80, 0x79fb00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 7?", 0x79fb00, 0x79fb80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 8?", 0x79fb80, 0x79fc00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 9?", 0x79fc00, 0x79fc80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 10?", 0x79fc80, 0x79fd00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 11?", 0x79fd00, 0x79fd80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 12?", 0x79fd80, 0x79fe00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 13?", 0x79fe00, 0x79fe80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 14?", 0x79fe80, 0x79ff00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 15?", 0x79ff00, 0x79ff80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 16?", 0x79ff80, 0x7a0000, indexRedEarthSprites_Bonus, 0x55 },
};

const sDescTreeNode REDEARTH_A_STAGES_GORA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GORA_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_GORA_FADED_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_FADED_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GORA_FADED_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ICELARN_COLLECTION[] =
{
    { L"Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_PALETTES) },
    { L"Cycle", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_CYCLE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_CYCLE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ICELARN_POISON_COLLECTION[] =
{
    { L"Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_POISON_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_POISON_PALETTES) },
    { L"Cycle", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_POISON_CYCLE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_POISON_CYCLE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_GREEDIA_COLLECTION[] =
{
    { L"Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_PALETTES) },
    { L"Cycle", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_CYCLE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_CYCLE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_GREEDIA_HAUZERS_COLLECTION[] =
{
    { L"Stage (Hauzer fire effect)", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_PALETTES) },
    { L"Cycle (Hauzer fire effect)", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_CYCLE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_TRANSPARENCY_CYCLE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ZIPANG_COLLECTION[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_PALETTES) },
    { L"Shade 1",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_SHADE1_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_SHADE1_PALETTES) },
    { L"Shade 2",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_SHADE2_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_SHADE2_PALETTES) },
    { L"Shade 3",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_SHADE3_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_SHADE3_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ZIPANG_FADED_COLLECTION[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_FADED_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_FADED_PALETTES) },
    { L"Shade 1",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_FADED_SHADE1_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_FADED_SHADE1_PALETTES) },
    { L"Shade 2",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_FADED_SHADE2_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_FADED_SHADE2_PALETTES) },
    { L"Shade 3",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_FADED_SHADE3_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_FADED_SHADE3_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_SANGYPT_COLLECTION[] =
{
    { L"Stage",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_STAGE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_STAGE_PALETTES) },
    { L"Faded 1", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_INTRO1_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_INTRO1_PALETTES) },
    { L"Faded 2", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_INTRO2_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_INTRO2_PALETTES) },
    { L"Faded 3", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_INTRO3_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_INTRO3_PALETTES) },
    { L"Absorption Effects", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_ABSORP_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_ABSORP_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_SANGYPT_FLAME_COLLECTION[] =
{
    { L"Stage",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_FLAMES_STAGE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_FLAMES_STAGE_PALETTES) },
    { L"Faded 1", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_FLAMES_INTRO1_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_FLAMES_INTRO1_PALETTES) },
    { L"Faded 2", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_FLAMES_INTRO2_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_FLAMES_INTRO2_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_CRYPT_COLLECTION[] =
{
    { L"Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_OTHER_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_OTHER_PALETTES) },
};

const sDescTreeNode REDEARTH_A_30_BONUSGAME_COLLECTION[] =
{
    { L"Bonus Game 1 Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_30_BONUSGAME_FADED_COLLECTION[] =
{
    { L"Bonus Game 1 Stage (Faded)", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_FADED_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_FADED_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_DERMINOR_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DERMINOR_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_DERMINOR_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_SCION_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SCION_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SCION_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_GORA_SLASH_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GORA_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ICELARN_SLASH_COLLECTION[] =
{
    { L"Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_SLASH_PALETTES) },
    { L"Cycle", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_CYCLE_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_CYCLE_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_GREEDIA_SLASH_COLLECTION[] =
{
    { L"Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_SLASH_PALETTES) },
    { L"Cycle", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_CYCLE_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_CYCLE_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ZIPANG_SLASH_COLLECTION[] =
{
    { L"Stage",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_SANGYPT_SLASH_COLLECTION[] =
{
    { L"Stage",         DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_STAGE_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_STAGE_SLASH_PALETTES) },
        { L"Ravange Intro 1", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_INTRO1_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_INTRO1_SLASH_PALETTES) },
    { L"Ravange Intro Other", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_INTRO3_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_INTRO3_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_CRYPT_SLASH_COLLECTION[] =
{
    { L"Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_SLASH_PALETTES) },
    { L"Other", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_OTHER_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_OTHER_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_30_BONUSGAME_SLASH_COLLECTION[] =
{
    { L"Bonus Game 1 (Blue) Stage", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_BONUSSTAGE_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_DERMINOR_SLASH_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DERMINOR_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_DERMINOR_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_DERMINOR_BLADE_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DERMINOR_BLADE_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_DERMINOR_BLADE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_SCION_SLASH_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SCION_SLASH_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SCION_SLASH_PALETTES) },
};

const sDescTreeNode REDEARTH_A_30_BONUS_COLLECTION[] =
{
    { L"Big Text",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUS_TEXT_PALETTES, ARRAYSIZE(REDEARTH_A_30_BONUS_TEXT_PALETTES) },
    { L"Unused",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUS_UNUSED_PALETTES, ARRAYSIZE(REDEARTH_A_30_BONUS_UNUSED_PALETTES) },
    { L"Elemental Super Backgrounds", DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUS_ELEBG_PALETTES, ARRAYSIZE(REDEARTH_A_30_BONUS_ELEBG_PALETTES) },
};

const sDescTreeNode REDEARTH_A_UNITS_30[] =
{
    { L"Gora",      DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GORA_COLLECTION) },
    { L"Icelarn",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_COLLECTION) },
    
    { L"Greedia Ruins",     DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_COLLECTION) },
    { L"Zipang on Fire",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_COLLECTION) },
    { L"Sangypt",           DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_COLLECTION) },
    { L"Derminor",          DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DERMINOR_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_DERMINOR_COLLECTION) },
    { L"Scion's Lair",      DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SCION_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_SCION_COLLECTION) },
    { L"Crypt",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_COLLECTION) },

    { L"Gora (Faded)",      DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_FADED_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GORA_FADED_COLLECTION) },
    { L"Gora (Slash Transparency)",      DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GORA_SLASH_COLLECTION) },
    { L"Icelarn (Slash Transparency)",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_SLASH_COLLECTION) },

    { L"Greedia Ruins (Slash Transparency)",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_SLASH_COLLECTION) },
    { L"Zipang on Fire (Slash Transparency)",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_SLASH_COLLECTION) },
    { L"Sangypt (Slash Transparency)",          DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_SLASH_COLLECTION) },
    { L"Derminor (Slash Transparency)",         DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DERMINOR_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_DERMINOR_SLASH_COLLECTION) },
    { L"Scion's Lair (Slash Transparency)",     DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SCION_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_SCION_SLASH_COLLECTION) },
    { L"Crypt (Slash Transparency)",            DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_SLASH_COLLECTION) },

    { L"Derminor (Blade's Sword Swing)",        DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DERMINOR_BLADE_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_DERMINOR_BLADE_COLLECTION) },

    { L"Hauzer's Fire Greedia Ruins",     DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_HAUZERS_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_HAUZERS_COLLECTION) },
    { L"Hydron's Poison Gas Icelarn",     DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_POISON_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_POISON_COLLECTION) },
    { L"Sangypt Flame Transparency",           DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SANGYPT_FLAME_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_SANGYPT_FLAME_COLLECTION) },
    { L"Zipang Faded",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_FADED_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_FADED_COLLECTION) },

    { L"Bonus Game 1",          DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUSGAME_COLLECTION, ARRAYSIZE(REDEARTH_A_30_BONUSGAME_COLLECTION) },
    { L"Bonus Game 1 (Faded)",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUSGAME_FADED_COLLECTION, ARRAYSIZE(REDEARTH_A_30_BONUSGAME_FADED_COLLECTION) },
    { L"Bonus Game 1 (Blue)",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUSGAME_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_30_BONUSGAME_SLASH_COLLECTION) },
    { L"Bonus Palettes",        DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUS_COLLECTION, ARRAYSIZE(REDEARTH_A_30_BONUS_COLLECTION) },
};

const sGame_PaletteDataset REDEARTH_A_50_NEXT_PALETTES[] =
{
    { L"Coming Next ? Leo",         0x358000, 0x358080, indexRedEarthSprites_Leo, 0x28 },
    { L"Coming Next ? Kenji",       0x358080, 0x358100, indexRedEarthSprites_Kenji, 0x58 },
    { L"Coming Next ? Tessa",       0x358100, 0x358180, indexRedEarthSprites_Tessa, 0x58 },
    { L"Coming Next ? Mai-Ling",    0x358180, 0x358200, indexRedEarthSprites_MaiLing, 0x58 },
};

const sDescTreeNode REDEARTH_A_50_NEXT_COLLECTION[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_NEXT_PALETTES, ARRAYSIZE(REDEARTH_A_50_NEXT_PALETTES) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_ELEBG_PALETTES[] =
{
    { L"Poison Dogma 1", 0x345000, 0x345080, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 2", 0x345080, 0x345100, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 3", 0x345100, 0x345180, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 4", 0x345180, 0x345200, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 5", 0x345200, 0x345280, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 6", 0x345280, 0x345300, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 7", 0x345300, 0x345380, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 8", 0x345380, 0x345400, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 9", 0x345400, 0x345480, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 10", 0x345480, 0x345500, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 11", 0x345500, 0x345580, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 12", 0x345580, 0x345600, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 13", 0x345600, 0x345680, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 14", 0x345680, 0x345700, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 15", 0x345700, 0x345780, indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 16", 0x345780, 0x345800, indexRedEarthSprites_Stages, 0x6a },

    { L"Wind Rafale 1", 0x345800, 0x345880, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 2", 0x345880, 0x345900, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 3", 0x345900, 0x345980, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 4", 0x345980, 0x345a00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 5", 0x345a00, 0x345a80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 6", 0x345a80, 0x345b00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 7", 0x345b00, 0x345b80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 8", 0x345b80, 0x345c00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 9", 0x345c00, 0x345c80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 10", 0x345c80, 0x345d00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 11", 0x345d00, 0x345d80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 12", 0x345d80, 0x345e00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 13", 0x345e00, 0x345e80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 14", 0x345e80, 0x345f00, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 15", 0x345f00, 0x345f80, indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 16", 0x345f80, 0x346000, indexRedEarthSprites_Stages, 0x6c },

    { L"Thunder Gorubarus 1", 0x346000, 0x346080, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 2", 0x346080, 0x346100, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 3", 0x346100, 0x346180, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 4", 0x346180, 0x346200, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 5", 0x346200, 0x346280, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 6", 0x346280, 0x346300, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 7", 0x346300, 0x346380, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 8", 0x346380, 0x346400, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 9", 0x346400, 0x346480, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 10", 0x346480, 0x346500, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 11", 0x346500, 0x346580, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 12", 0x346580, 0x346600, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 13", 0x346600, 0x346680, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 14", 0x346680, 0x346700, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 15", 0x346700, 0x346780, indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 16", 0x346780, 0x346800, indexRedEarthSprites_Stages, 0x6b },

    { L"Flame Goranda 1", 0x346800, 0x346880, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 2", 0x346880, 0x346900, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 3", 0x346900, 0x346980, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 4", 0x346980, 0x346a00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 5", 0x346a00, 0x346a80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 6", 0x346a80, 0x346b00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 7", 0x346b00, 0x346b80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 8", 0x346b80, 0x346c00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 9", 0x346c00, 0x346c80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 10", 0x346c80, 0x346d00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 11", 0x346d00, 0x346d80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 12", 0x346d80, 0x346e00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 13", 0x346e00, 0x346e80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 14", 0x346e80, 0x346f00, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 15", 0x346f00, 0x346f80, indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 16", 0x346f80, 0x347000, indexRedEarthSprites_Stages, 0x67 },

    { L"Meteor Giamateus 1", 0x347000, 0x347080, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 2", 0x347080, 0x347100, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 3", 0x347100, 0x347180, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 4", 0x347180, 0x347200, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 5", 0x347200, 0x347280, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 6", 0x347280, 0x347300, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 7", 0x347300, 0x347380, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 8", 0x347380, 0x347400, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 9", 0x347400, 0x347480, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 10", 0x347480, 0x347500, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 11", 0x347500, 0x347580, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 12", 0x347580, 0x347600, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 13", 0x347600, 0x347680, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 14", 0x347680, 0x347700, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 15", 0x347700, 0x347780, indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 16", 0x347780, 0x347800, indexRedEarthSprites_Stages, 0x69 },

    { L"Ice Soulfunil 1", 0x347800, 0x347880, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 2", 0x347880, 0x347900, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 3", 0x347900, 0x347980, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 4", 0x347980, 0x347a00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 5", 0x347a00, 0x347a80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 6", 0x347a80, 0x347b00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 7", 0x347b00, 0x347b80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 8", 0x347b80, 0x347c00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 9", 0x347c00, 0x347c80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 10", 0x347c80, 0x347d00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 11", 0x347d00, 0x347d80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 12", 0x347d80, 0x347e00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 13", 0x347e00, 0x347e80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 14", 0x347e80, 0x347f00, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 15", 0x347f00, 0x347f80, indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 16", 0x347f80, 0x348000, indexRedEarthSprites_Stages, 0x68 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_MYSTIC_PALETTES[] =
{
    { L"Mystic Combo I Super BG 1?", 0x344000, 0x344080, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 2?", 0x344080, 0x344100, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 3?", 0x344100, 0x344180, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 4?", 0x344180, 0x344200, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 5?", 0x344200, 0x344280, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 6?", 0x344280, 0x344300, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 7?", 0x344300, 0x344380, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 8?", 0x344380, 0x344400, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 9?", 0x344400, 0x344480, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 10?", 0x344480, 0x344500, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 11?", 0x344500, 0x344580, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 12?", 0x344580, 0x344600, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 13?", 0x344600, 0x344680, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 14?", 0x344680, 0x344700, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 15?", 0x344700, 0x344780, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 16?", 0x344780, 0x344800, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 1?", 0x344800, 0x344880, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 2?", 0x344880, 0x344900, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 3?", 0x344900, 0x344980, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 4?", 0x344980, 0x344a00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 5?", 0x344a00, 0x344a80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 6?", 0x344a80, 0x344b00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 7?", 0x344b00, 0x344b80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 8?", 0x344b80, 0x344c00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 9?", 0x344c00, 0x344c80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 10?", 0x344c80, 0x344d00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 11?", 0x344d00, 0x344d80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 12?", 0x344d80, 0x344e00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 13?", 0x344e00, 0x344e80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 14?", 0x344e80, 0x344f00, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 15?", 0x344f00, 0x344f80, indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 16?", 0x344f80, 0x345000, indexRedEarthSprites_Bonus, 0x55 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_ELEBG_PALETTES[] =
{
    { L"Poison Dogma 1", 0x345000 + (1 * 0x4000), 0x345080 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 2", 0x345080 + (1 * 0x4000), 0x345100 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 3", 0x345100 + (1 * 0x4000), 0x345180 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 4", 0x345180 + (1 * 0x4000), 0x345200 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 5", 0x345200 + (1 * 0x4000), 0x345280 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 6", 0x345280 + (1 * 0x4000), 0x345300 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 7", 0x345300 + (1 * 0x4000), 0x345380 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 8", 0x345380 + (1 * 0x4000), 0x345400 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 9", 0x345400 + (1 * 0x4000), 0x345480 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 10", 0x345480 + (1 * 0x4000), 0x345500 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 11", 0x345500 + (1 * 0x4000), 0x345580 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 12", 0x345580 + (1 * 0x4000), 0x345600 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 13", 0x345600 + (1 * 0x4000), 0x345680 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 14", 0x345680 + (1 * 0x4000), 0x345700 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 15", 0x345700 + (1 * 0x4000), 0x345780 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 16", 0x345780 + (1 * 0x4000), 0x345800 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6a },

    { L"Wind Rafale 1", 0x345800 + (1 * 0x4000), 0x345880 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 2", 0x345880 + (1 * 0x4000), 0x345900 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 3", 0x345900 + (1 * 0x4000), 0x345980 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 4", 0x345980 + (1 * 0x4000), 0x345a00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 5", 0x345a00 + (1 * 0x4000), 0x345a80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 6", 0x345a80 + (1 * 0x4000), 0x345b00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 7", 0x345b00 + (1 * 0x4000), 0x345b80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 8", 0x345b80 + (1 * 0x4000), 0x345c00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 9", 0x345c00 + (1 * 0x4000), 0x345c80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 10", 0x345c80 + (1 * 0x4000), 0x345d00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 11", 0x345d00 + (1 * 0x4000), 0x345d80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 12", 0x345d80 + (1 * 0x4000), 0x345e00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 13", 0x345e00 + (1 * 0x4000), 0x345e80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 14", 0x345e80 + (1 * 0x4000), 0x345f00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 15", 0x345f00 + (1 * 0x4000), 0x345f80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 16", 0x345f80 + (1 * 0x4000), 0x346000 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6c },

    { L"Thunder Gorubarus 1", 0x346000 + (1 * 0x4000), 0x346080 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 2", 0x346080 + (1 * 0x4000), 0x346100 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 3", 0x346100 + (1 * 0x4000), 0x346180 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 4", 0x346180 + (1 * 0x4000), 0x346200 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 5", 0x346200 + (1 * 0x4000), 0x346280 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 6", 0x346280 + (1 * 0x4000), 0x346300 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 7", 0x346300 + (1 * 0x4000), 0x346380 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 8", 0x346380 + (1 * 0x4000), 0x346400 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 9", 0x346400 + (1 * 0x4000), 0x346480 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 10", 0x346480 + (1 * 0x4000), 0x346500 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 11", 0x346500 + (1 * 0x4000), 0x346580 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 12", 0x346580 + (1 * 0x4000), 0x346600 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 13", 0x346600 + (1 * 0x4000), 0x346680 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 14", 0x346680 + (1 * 0x4000), 0x346700 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 15", 0x346700 + (1 * 0x4000), 0x346780 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 16", 0x346780 + (1 * 0x4000), 0x346800 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x6b },

    { L"Flame Goranda 1", 0x346800 + (1 * 0x4000), 0x346880 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 2", 0x346880 + (1 * 0x4000), 0x346900 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 3", 0x346900 + (1 * 0x4000), 0x346980 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 4", 0x346980 + (1 * 0x4000), 0x346a00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 5", 0x346a00 + (1 * 0x4000), 0x346a80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 6", 0x346a80 + (1 * 0x4000), 0x346b00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 7", 0x346b00 + (1 * 0x4000), 0x346b80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 8", 0x346b80 + (1 * 0x4000), 0x346c00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 9", 0x346c00 + (1 * 0x4000), 0x346c80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 10", 0x346c80 + (1 * 0x4000), 0x346d00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 11", 0x346d00 + (1 * 0x4000), 0x346d80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 12", 0x346d80 + (1 * 0x4000), 0x346e00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 13", 0x346e00 + (1 * 0x4000), 0x346e80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 14", 0x346e80 + (1 * 0x4000), 0x346f00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 15", 0x346f00 + (1 * 0x4000), 0x346f80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 16", 0x346f80 + (1 * 0x4000), 0x347000 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x67 },

    { L"Meteor Giamateus 1", 0x347000 + (1 * 0x4000), 0x347080 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 2", 0x347080 + (1 * 0x4000), 0x347100 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 3", 0x347100 + (1 * 0x4000), 0x347180 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 4", 0x347180 + (1 * 0x4000), 0x347200 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 5", 0x347200 + (1 * 0x4000), 0x347280 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 6", 0x347280 + (1 * 0x4000), 0x347300 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 7", 0x347300 + (1 * 0x4000), 0x347380 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 8", 0x347380 + (1 * 0x4000), 0x347400 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 9", 0x347400 + (1 * 0x4000), 0x347480 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 10", 0x347480 + (1 * 0x4000), 0x347500 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 11", 0x347500 + (1 * 0x4000), 0x347580 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 12", 0x347580 + (1 * 0x4000), 0x347600 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 13", 0x347600 + (1 * 0x4000), 0x347680 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 14", 0x347680 + (1 * 0x4000), 0x347700 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 15", 0x347700 + (1 * 0x4000), 0x347780 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 16", 0x347780 + (1 * 0x4000), 0x347800 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x69 },

    { L"Ice Soulfunil 1", 0x347800 + (1 * 0x4000), 0x347880 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 2", 0x347880 + (1 * 0x4000), 0x347900 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 3", 0x347900 + (1 * 0x4000), 0x347980 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 4", 0x347980 + (1 * 0x4000), 0x347a00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 5", 0x347a00 + (1 * 0x4000), 0x347a80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 6", 0x347a80 + (1 * 0x4000), 0x347b00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 7", 0x347b00 + (1 * 0x4000), 0x347b80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 8", 0x347b80 + (1 * 0x4000), 0x347c00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 9", 0x347c00 + (1 * 0x4000), 0x347c80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 10", 0x347c80 + (1 * 0x4000), 0x347d00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 11", 0x347d00 + (1 * 0x4000), 0x347d80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 12", 0x347d80 + (1 * 0x4000), 0x347e00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 13", 0x347e00 + (1 * 0x4000), 0x347e80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 14", 0x347e80 + (1 * 0x4000), 0x347f00 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 15", 0x347f00 + (1 * 0x4000), 0x347f80 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 16", 0x347f80 + (1 * 0x4000), 0x348000 + (1 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_MYSTIC_PALETTES[] =
{
    { L"Mystic Combo I Super BG 1?", 0x344000 + (1 * 0x4000), 0x344080 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 2?", 0x344080 + (1 * 0x4000), 0x344100 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 3?", 0x344100 + (1 * 0x4000), 0x344180 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 4?", 0x344180 + (1 * 0x4000), 0x344200 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 5?", 0x344200 + (1 * 0x4000), 0x344280 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 6?", 0x344280 + (1 * 0x4000), 0x344300 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 7?", 0x344300 + (1 * 0x4000), 0x344380 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 8?", 0x344380 + (1 * 0x4000), 0x344400 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 9?", 0x344400 + (1 * 0x4000), 0x344480 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 10?", 0x344480 + (1 * 0x4000), 0x344500 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 11?", 0x344500 + (1 * 0x4000), 0x344580 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 12?", 0x344580 + (1 * 0x4000), 0x344600 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 13?", 0x344600 + (1 * 0x4000), 0x344680 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 14?", 0x344680 + (1 * 0x4000), 0x344700 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 15?", 0x344700 + (1 * 0x4000), 0x344780 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 16?", 0x344780 + (1 * 0x4000), 0x344800 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 1?", 0x344800 + (1 * 0x4000), 0x344880 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 2?", 0x344880 + (1 * 0x4000), 0x344900 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 3?", 0x344900 + (1 * 0x4000), 0x344980 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 4?", 0x344980 + (1 * 0x4000), 0x344a00 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 5?", 0x344a00 + (1 * 0x4000), 0x344a80 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 6?", 0x344a80 + (1 * 0x4000), 0x344b00 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 7?", 0x344b00 + (1 * 0x4000), 0x344b80 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 8?", 0x344b80 + (1 * 0x4000), 0x344c00 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 9?", 0x344c00 + (1 * 0x4000), 0x344c80 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 10?", 0x344c80 + (1 * 0x4000), 0x344d00 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 11?", 0x344d00 + (1 * 0x4000), 0x344d80 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 12?", 0x344d80 + (1 * 0x4000), 0x344e00 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 13?", 0x344e00 + (1 * 0x4000), 0x344e80 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 14?", 0x344e80 + (1 * 0x4000), 0x344f00 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 15?", 0x344f00 + (1 * 0x4000), 0x344f80 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 16?", 0x344f80 + (1 * 0x4000), 0x345000 + (1 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_ELEBG_PALETTES[] =
{
    { L"Poison Dogma 1", 0x345000 + (2 * 0x4000), 0x345080 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 2", 0x345080 + (2 * 0x4000), 0x345100 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 3", 0x345100 + (2 * 0x4000), 0x345180 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 4", 0x345180 + (2 * 0x4000), 0x345200 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 5", 0x345200 + (2 * 0x4000), 0x345280 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 6", 0x345280 + (2 * 0x4000), 0x345300 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 7", 0x345300 + (2 * 0x4000), 0x345380 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 8", 0x345380 + (2 * 0x4000), 0x345400 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 9", 0x345400 + (2 * 0x4000), 0x345480 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 10", 0x345480 + (2 * 0x4000), 0x345500 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 11", 0x345500 + (2 * 0x4000), 0x345580 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 12", 0x345580 + (2 * 0x4000), 0x345600 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 13", 0x345600 + (2 * 0x4000), 0x345680 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 14", 0x345680 + (2 * 0x4000), 0x345700 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 15", 0x345700 + (2 * 0x4000), 0x345780 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 16", 0x345780 + (2 * 0x4000), 0x345800 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6a },

    { L"Wind Rafale 1", 0x345800 + (2 * 0x4000), 0x345880 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 2", 0x345880 + (2 * 0x4000), 0x345900 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 3", 0x345900 + (2 * 0x4000), 0x345980 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 4", 0x345980 + (2 * 0x4000), 0x345a00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 5", 0x345a00 + (2 * 0x4000), 0x345a80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 6", 0x345a80 + (2 * 0x4000), 0x345b00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 7", 0x345b00 + (2 * 0x4000), 0x345b80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 8", 0x345b80 + (2 * 0x4000), 0x345c00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 9", 0x345c00 + (2 * 0x4000), 0x345c80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 10", 0x345c80 + (2 * 0x4000), 0x345d00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 11", 0x345d00 + (2 * 0x4000), 0x345d80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 12", 0x345d80 + (2 * 0x4000), 0x345e00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 13", 0x345e00 + (2 * 0x4000), 0x345e80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 14", 0x345e80 + (2 * 0x4000), 0x345f00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 15", 0x345f00 + (2 * 0x4000), 0x345f80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 16", 0x345f80 + (2 * 0x4000), 0x346000 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6c },

    { L"Thunder Gorubarus 1", 0x346000 + (2 * 0x4000), 0x346080 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 2", 0x346080 + (2 * 0x4000), 0x346100 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 3", 0x346100 + (2 * 0x4000), 0x346180 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 4", 0x346180 + (2 * 0x4000), 0x346200 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 5", 0x346200 + (2 * 0x4000), 0x346280 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 6", 0x346280 + (2 * 0x4000), 0x346300 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 7", 0x346300 + (2 * 0x4000), 0x346380 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 8", 0x346380 + (2 * 0x4000), 0x346400 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 9", 0x346400 + (2 * 0x4000), 0x346480 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 10", 0x346480 + (2 * 0x4000), 0x346500 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 11", 0x346500 + (2 * 0x4000), 0x346580 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 12", 0x346580 + (2 * 0x4000), 0x346600 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 13", 0x346600 + (2 * 0x4000), 0x346680 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 14", 0x346680 + (2 * 0x4000), 0x346700 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 15", 0x346700 + (2 * 0x4000), 0x346780 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 16", 0x346780 + (2 * 0x4000), 0x346800 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x6b },

    { L"Flame Goranda 1", 0x346800 + (2 * 0x4000), 0x346880 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 2", 0x346880 + (2 * 0x4000), 0x346900 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 3", 0x346900 + (2 * 0x4000), 0x346980 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 4", 0x346980 + (2 * 0x4000), 0x346a00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 5", 0x346a00 + (2 * 0x4000), 0x346a80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 6", 0x346a80 + (2 * 0x4000), 0x346b00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 7", 0x346b00 + (2 * 0x4000), 0x346b80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 8", 0x346b80 + (2 * 0x4000), 0x346c00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 9", 0x346c00 + (2 * 0x4000), 0x346c80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 10", 0x346c80 + (2 * 0x4000), 0x346d00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 11", 0x346d00 + (2 * 0x4000), 0x346d80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 12", 0x346d80 + (2 * 0x4000), 0x346e00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 13", 0x346e00 + (2 * 0x4000), 0x346e80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 14", 0x346e80 + (2 * 0x4000), 0x346f00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 15", 0x346f00 + (2 * 0x4000), 0x346f80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 16", 0x346f80 + (2 * 0x4000), 0x347000 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x67 },

    { L"Meteor Giamateus 1", 0x347000 + (2 * 0x4000), 0x347080 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 2", 0x347080 + (2 * 0x4000), 0x347100 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 3", 0x347100 + (2 * 0x4000), 0x347180 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 4", 0x347180 + (2 * 0x4000), 0x347200 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 5", 0x347200 + (2 * 0x4000), 0x347280 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 6", 0x347280 + (2 * 0x4000), 0x347300 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 7", 0x347300 + (2 * 0x4000), 0x347380 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 8", 0x347380 + (2 * 0x4000), 0x347400 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 9", 0x347400 + (2 * 0x4000), 0x347480 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 10", 0x347480 + (2 * 0x4000), 0x347500 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 11", 0x347500 + (2 * 0x4000), 0x347580 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 12", 0x347580 + (2 * 0x4000), 0x347600 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 13", 0x347600 + (2 * 0x4000), 0x347680 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 14", 0x347680 + (2 * 0x4000), 0x347700 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 15", 0x347700 + (2 * 0x4000), 0x347780 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 16", 0x347780 + (2 * 0x4000), 0x347800 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x69 },

    { L"Ice Soulfunil 1", 0x347800 + (2 * 0x4000), 0x347880 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 2", 0x347880 + (2 * 0x4000), 0x347900 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 3", 0x347900 + (2 * 0x4000), 0x347980 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 4", 0x347980 + (2 * 0x4000), 0x347a00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 5", 0x347a00 + (2 * 0x4000), 0x347a80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 6", 0x347a80 + (2 * 0x4000), 0x347b00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 7", 0x347b00 + (2 * 0x4000), 0x347b80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 8", 0x347b80 + (2 * 0x4000), 0x347c00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 9", 0x347c00 + (2 * 0x4000), 0x347c80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 10", 0x347c80 + (2 * 0x4000), 0x347d00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 11", 0x347d00 + (2 * 0x4000), 0x347d80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 12", 0x347d80 + (2 * 0x4000), 0x347e00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 13", 0x347e00 + (2 * 0x4000), 0x347e80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 14", 0x347e80 + (2 * 0x4000), 0x347f00 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 15", 0x347f00 + (2 * 0x4000), 0x347f80 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 16", 0x347f80 + (2 * 0x4000), 0x348000 + (2 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_MYSTIC_PALETTES[] =
{
    { L"Mystic Combo I Super BG 1?", 0x344000 + (2 * 0x4000), 0x344080 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 2?", 0x344080 + (2 * 0x4000), 0x344100 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 3?", 0x344100 + (2 * 0x4000), 0x344180 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 4?", 0x344180 + (2 * 0x4000), 0x344200 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 5?", 0x344200 + (2 * 0x4000), 0x344280 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 6?", 0x344280 + (2 * 0x4000), 0x344300 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 7?", 0x344300 + (2 * 0x4000), 0x344380 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 8?", 0x344380 + (2 * 0x4000), 0x344400 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 9?", 0x344400 + (2 * 0x4000), 0x344480 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 10?", 0x344480 + (2 * 0x4000), 0x344500 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 11?", 0x344500 + (2 * 0x4000), 0x344580 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 12?", 0x344580 + (2 * 0x4000), 0x344600 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 13?", 0x344600 + (2 * 0x4000), 0x344680 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 14?", 0x344680 + (2 * 0x4000), 0x344700 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 15?", 0x344700 + (2 * 0x4000), 0x344780 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 16?", 0x344780 + (2 * 0x4000), 0x344800 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 1?", 0x344800 + (2 * 0x4000), 0x344880 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 2?", 0x344880 + (2 * 0x4000), 0x344900 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 3?", 0x344900 + (2 * 0x4000), 0x344980 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 4?", 0x344980 + (2 * 0x4000), 0x344a00 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 5?", 0x344a00 + (2 * 0x4000), 0x344a80 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 6?", 0x344a80 + (2 * 0x4000), 0x344b00 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 7?", 0x344b00 + (2 * 0x4000), 0x344b80 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 8?", 0x344b80 + (2 * 0x4000), 0x344c00 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 9?", 0x344c00 + (2 * 0x4000), 0x344c80 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 10?", 0x344c80 + (2 * 0x4000), 0x344d00 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 11?", 0x344d00 + (2 * 0x4000), 0x344d80 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 12?", 0x344d80 + (2 * 0x4000), 0x344e00 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 13?", 0x344e00 + (2 * 0x4000), 0x344e80 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 14?", 0x344e80 + (2 * 0x4000), 0x344f00 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 15?", 0x344f00 + (2 * 0x4000), 0x344f80 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 16?", 0x344f80 + (2 * 0x4000), 0x345000 + (2 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_ELEBG_PALETTES[] =
{
    { L"Poison Dogma 1", 0x345000 + (3 * 0x4000), 0x345080 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 2", 0x345080 + (3 * 0x4000), 0x345100 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 3", 0x345100 + (3 * 0x4000), 0x345180 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 4", 0x345180 + (3 * 0x4000), 0x345200 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 5", 0x345200 + (3 * 0x4000), 0x345280 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 6", 0x345280 + (3 * 0x4000), 0x345300 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 7", 0x345300 + (3 * 0x4000), 0x345380 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 8", 0x345380 + (3 * 0x4000), 0x345400 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 9", 0x345400 + (3 * 0x4000), 0x345480 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 10", 0x345480 + (3 * 0x4000), 0x345500 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 11", 0x345500 + (3 * 0x4000), 0x345580 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 12", 0x345580 + (3 * 0x4000), 0x345600 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 13", 0x345600 + (3 * 0x4000), 0x345680 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 14", 0x345680 + (3 * 0x4000), 0x345700 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 15", 0x345700 + (3 * 0x4000), 0x345780 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 16", 0x345780 + (3 * 0x4000), 0x345800 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6a },

    { L"Wind Rafale 1", 0x345800 + (3 * 0x4000), 0x345880 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 2", 0x345880 + (3 * 0x4000), 0x345900 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 3", 0x345900 + (3 * 0x4000), 0x345980 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 4", 0x345980 + (3 * 0x4000), 0x345a00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 5", 0x345a00 + (3 * 0x4000), 0x345a80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 6", 0x345a80 + (3 * 0x4000), 0x345b00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 7", 0x345b00 + (3 * 0x4000), 0x345b80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 8", 0x345b80 + (3 * 0x4000), 0x345c00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 9", 0x345c00 + (3 * 0x4000), 0x345c80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 10", 0x345c80 + (3 * 0x4000), 0x345d00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 11", 0x345d00 + (3 * 0x4000), 0x345d80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 12", 0x345d80 + (3 * 0x4000), 0x345e00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 13", 0x345e00 + (3 * 0x4000), 0x345e80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 14", 0x345e80 + (3 * 0x4000), 0x345f00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 15", 0x345f00 + (3 * 0x4000), 0x345f80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 16", 0x345f80 + (3 * 0x4000), 0x346000 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6c },

    { L"Thunder Gorubarus 1", 0x346000 + (3 * 0x4000), 0x346080 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 2", 0x346080 + (3 * 0x4000), 0x346100 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 3", 0x346100 + (3 * 0x4000), 0x346180 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 4", 0x346180 + (3 * 0x4000), 0x346200 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 5", 0x346200 + (3 * 0x4000), 0x346280 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 6", 0x346280 + (3 * 0x4000), 0x346300 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 7", 0x346300 + (3 * 0x4000), 0x346380 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 8", 0x346380 + (3 * 0x4000), 0x346400 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 9", 0x346400 + (3 * 0x4000), 0x346480 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 10", 0x346480 + (3 * 0x4000), 0x346500 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 11", 0x346500 + (3 * 0x4000), 0x346580 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 12", 0x346580 + (3 * 0x4000), 0x346600 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 13", 0x346600 + (3 * 0x4000), 0x346680 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 14", 0x346680 + (3 * 0x4000), 0x346700 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 15", 0x346700 + (3 * 0x4000), 0x346780 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 16", 0x346780 + (3 * 0x4000), 0x346800 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x6b },

    { L"Flame Goranda 1", 0x346800 + (3 * 0x4000), 0x346880 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 2", 0x346880 + (3 * 0x4000), 0x346900 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 3", 0x346900 + (3 * 0x4000), 0x346980 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 4", 0x346980 + (3 * 0x4000), 0x346a00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 5", 0x346a00 + (3 * 0x4000), 0x346a80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 6", 0x346a80 + (3 * 0x4000), 0x346b00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 7", 0x346b00 + (3 * 0x4000), 0x346b80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 8", 0x346b80 + (3 * 0x4000), 0x346c00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 9", 0x346c00 + (3 * 0x4000), 0x346c80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 10", 0x346c80 + (3 * 0x4000), 0x346d00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 11", 0x346d00 + (3 * 0x4000), 0x346d80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 12", 0x346d80 + (3 * 0x4000), 0x346e00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 13", 0x346e00 + (3 * 0x4000), 0x346e80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 14", 0x346e80 + (3 * 0x4000), 0x346f00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 15", 0x346f00 + (3 * 0x4000), 0x346f80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 16", 0x346f80 + (3 * 0x4000), 0x347000 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x67 },

    { L"Meteor Giamateus 1", 0x347000 + (3 * 0x4000), 0x347080 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 2", 0x347080 + (3 * 0x4000), 0x347100 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 3", 0x347100 + (3 * 0x4000), 0x347180 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 4", 0x347180 + (3 * 0x4000), 0x347200 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 5", 0x347200 + (3 * 0x4000), 0x347280 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 6", 0x347280 + (3 * 0x4000), 0x347300 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 7", 0x347300 + (3 * 0x4000), 0x347380 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 8", 0x347380 + (3 * 0x4000), 0x347400 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 9", 0x347400 + (3 * 0x4000), 0x347480 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 10", 0x347480 + (3 * 0x4000), 0x347500 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 11", 0x347500 + (3 * 0x4000), 0x347580 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 12", 0x347580 + (3 * 0x4000), 0x347600 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 13", 0x347600 + (3 * 0x4000), 0x347680 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 14", 0x347680 + (3 * 0x4000), 0x347700 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 15", 0x347700 + (3 * 0x4000), 0x347780 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 16", 0x347780 + (3 * 0x4000), 0x347800 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x69 },

    { L"Ice Soulfunil 1", 0x347800 + (3 * 0x4000), 0x347880 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 2", 0x347880 + (3 * 0x4000), 0x347900 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 3", 0x347900 + (3 * 0x4000), 0x347980 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 4", 0x347980 + (3 * 0x4000), 0x347a00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 5", 0x347a00 + (3 * 0x4000), 0x347a80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 6", 0x347a80 + (3 * 0x4000), 0x347b00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 7", 0x347b00 + (3 * 0x4000), 0x347b80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 8", 0x347b80 + (3 * 0x4000), 0x347c00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 9", 0x347c00 + (3 * 0x4000), 0x347c80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 10", 0x347c80 + (3 * 0x4000), 0x347d00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 11", 0x347d00 + (3 * 0x4000), 0x347d80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 12", 0x347d80 + (3 * 0x4000), 0x347e00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 13", 0x347e00 + (3 * 0x4000), 0x347e80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 14", 0x347e80 + (3 * 0x4000), 0x347f00 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 15", 0x347f00 + (3 * 0x4000), 0x347f80 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 16", 0x347f80 + (3 * 0x4000), 0x348000 + (3 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_MYSTIC_PALETTES[] =
{
    { L"Mystic Combo I Super BG 1?", 0x344000 + (3 * 0x4000), 0x344080 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 2?", 0x344080 + (3 * 0x4000), 0x344100 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 3?", 0x344100 + (3 * 0x4000), 0x344180 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 4?", 0x344180 + (3 * 0x4000), 0x344200 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 5?", 0x344200 + (3 * 0x4000), 0x344280 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 6?", 0x344280 + (3 * 0x4000), 0x344300 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 7?", 0x344300 + (3 * 0x4000), 0x344380 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 8?", 0x344380 + (3 * 0x4000), 0x344400 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 9?", 0x344400 + (3 * 0x4000), 0x344480 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 10?", 0x344480 + (3 * 0x4000), 0x344500 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 11?", 0x344500 + (3 * 0x4000), 0x344580 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 12?", 0x344580 + (3 * 0x4000), 0x344600 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 13?", 0x344600 + (3 * 0x4000), 0x344680 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 14?", 0x344680 + (3 * 0x4000), 0x344700 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 15?", 0x344700 + (3 * 0x4000), 0x344780 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 16?", 0x344780 + (3 * 0x4000), 0x344800 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 1?", 0x344800 + (3 * 0x4000), 0x344880 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 2?", 0x344880 + (3 * 0x4000), 0x344900 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 3?", 0x344900 + (3 * 0x4000), 0x344980 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 4?", 0x344980 + (3 * 0x4000), 0x344a00 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 5?", 0x344a00 + (3 * 0x4000), 0x344a80 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 6?", 0x344a80 + (3 * 0x4000), 0x344b00 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 7?", 0x344b00 + (3 * 0x4000), 0x344b80 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 8?", 0x344b80 + (3 * 0x4000), 0x344c00 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 9?", 0x344c00 + (3 * 0x4000), 0x344c80 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 10?", 0x344c80 + (3 * 0x4000), 0x344d00 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 11?", 0x344d00 + (3 * 0x4000), 0x344d80 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 12?", 0x344d80 + (3 * 0x4000), 0x344e00 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 13?", 0x344e00 + (3 * 0x4000), 0x344e80 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 14?", 0x344e80 + (3 * 0x4000), 0x344f00 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 15?", 0x344f00 + (3 * 0x4000), 0x344f80 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 16?", 0x344f80 + (3 * 0x4000), 0x345000 + (3 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_ELEBG_PALETTES[] =
{
    { L"Poison Dogma 1", 0x345000 + (4 * 0x4000), 0x345080 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 2", 0x345080 + (4 * 0x4000), 0x345100 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 3", 0x345100 + (4 * 0x4000), 0x345180 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 4", 0x345180 + (4 * 0x4000), 0x345200 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 5", 0x345200 + (4 * 0x4000), 0x345280 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 6", 0x345280 + (4 * 0x4000), 0x345300 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 7", 0x345300 + (4 * 0x4000), 0x345380 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 8", 0x345380 + (4 * 0x4000), 0x345400 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 9", 0x345400 + (4 * 0x4000), 0x345480 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 10", 0x345480 + (4 * 0x4000), 0x345500 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 11", 0x345500 + (4 * 0x4000), 0x345580 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 12", 0x345580 + (4 * 0x4000), 0x345600 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 13", 0x345600 + (4 * 0x4000), 0x345680 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 14", 0x345680 + (4 * 0x4000), 0x345700 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 15", 0x345700 + (4 * 0x4000), 0x345780 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },
    { L"Poison Dogma 16", 0x345780 + (4 * 0x4000), 0x345800 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6a },

    { L"Wind Rafale 1", 0x345800 + (4 * 0x4000), 0x345880 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 2", 0x345880 + (4 * 0x4000), 0x345900 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 3", 0x345900 + (4 * 0x4000), 0x345980 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 4", 0x345980 + (4 * 0x4000), 0x345a00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 5", 0x345a00 + (4 * 0x4000), 0x345a80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 6", 0x345a80 + (4 * 0x4000), 0x345b00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 7", 0x345b00 + (4 * 0x4000), 0x345b80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 8", 0x345b80 + (4 * 0x4000), 0x345c00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 9", 0x345c00 + (4 * 0x4000), 0x345c80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 10", 0x345c80 + (4 * 0x4000), 0x345d00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 11", 0x345d00 + (4 * 0x4000), 0x345d80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 12", 0x345d80 + (4 * 0x4000), 0x345e00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 13", 0x345e00 + (4 * 0x4000), 0x345e80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 14", 0x345e80 + (4 * 0x4000), 0x345f00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 15", 0x345f00 + (4 * 0x4000), 0x345f80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },
    { L"Wind Rafale 16", 0x345f80 + (4 * 0x4000), 0x346000 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6c },

    { L"Thunder Gorubarus 1", 0x346000 + (4 * 0x4000), 0x346080 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 2", 0x346080 + (4 * 0x4000), 0x346100 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 3", 0x346100 + (4 * 0x4000), 0x346180 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 4", 0x346180 + (4 * 0x4000), 0x346200 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 5", 0x346200 + (4 * 0x4000), 0x346280 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 6", 0x346280 + (4 * 0x4000), 0x346300 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 7", 0x346300 + (4 * 0x4000), 0x346380 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 8", 0x346380 + (4 * 0x4000), 0x346400 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 9", 0x346400 + (4 * 0x4000), 0x346480 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 10", 0x346480 + (4 * 0x4000), 0x346500 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 11", 0x346500 + (4 * 0x4000), 0x346580 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 12", 0x346580 + (4 * 0x4000), 0x346600 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 13", 0x346600 + (4 * 0x4000), 0x346680 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 14", 0x346680 + (4 * 0x4000), 0x346700 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 15", 0x346700 + (4 * 0x4000), 0x346780 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },
    { L"Thunder Gorubarus 16", 0x346780 + (4 * 0x4000), 0x346800 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x6b },

    { L"Flame Goranda 1", 0x346800 + (4 * 0x4000), 0x346880 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 2", 0x346880 + (4 * 0x4000), 0x346900 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 3", 0x346900 + (4 * 0x4000), 0x346980 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 4", 0x346980 + (4 * 0x4000), 0x346a00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 5", 0x346a00 + (4 * 0x4000), 0x346a80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 6", 0x346a80 + (4 * 0x4000), 0x346b00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 7", 0x346b00 + (4 * 0x4000), 0x346b80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 8", 0x346b80 + (4 * 0x4000), 0x346c00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 9", 0x346c00 + (4 * 0x4000), 0x346c80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 10", 0x346c80 + (4 * 0x4000), 0x346d00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 11", 0x346d00 + (4 * 0x4000), 0x346d80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 12", 0x346d80 + (4 * 0x4000), 0x346e00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 13", 0x346e00 + (4 * 0x4000), 0x346e80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 14", 0x346e80 + (4 * 0x4000), 0x346f00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 15", 0x346f00 + (4 * 0x4000), 0x346f80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },
    { L"Flame Goranda 16", 0x346f80 + (4 * 0x4000), 0x347000 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x67 },

    { L"Meteor Giamateus 1", 0x347000 + (4 * 0x4000), 0x347080 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 2", 0x347080 + (4 * 0x4000), 0x347100 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 3", 0x347100 + (4 * 0x4000), 0x347180 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 4", 0x347180 + (4 * 0x4000), 0x347200 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 5", 0x347200 + (4 * 0x4000), 0x347280 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 6", 0x347280 + (4 * 0x4000), 0x347300 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 7", 0x347300 + (4 * 0x4000), 0x347380 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 8", 0x347380 + (4 * 0x4000), 0x347400 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 9", 0x347400 + (4 * 0x4000), 0x347480 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 10", 0x347480 + (4 * 0x4000), 0x347500 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 11", 0x347500 + (4 * 0x4000), 0x347580 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 12", 0x347580 + (4 * 0x4000), 0x347600 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 13", 0x347600 + (4 * 0x4000), 0x347680 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 14", 0x347680 + (4 * 0x4000), 0x347700 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 15", 0x347700 + (4 * 0x4000), 0x347780 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },
    { L"Meteor Giamateus 16", 0x347780 + (4 * 0x4000), 0x347800 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x69 },

    { L"Ice Soulfunil 1", 0x347800 + (4 * 0x4000), 0x347880 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 2", 0x347880 + (4 * 0x4000), 0x347900 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 3", 0x347900 + (4 * 0x4000), 0x347980 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 4", 0x347980 + (4 * 0x4000), 0x347a00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 5", 0x347a00 + (4 * 0x4000), 0x347a80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 6", 0x347a80 + (4 * 0x4000), 0x347b00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 7", 0x347b00 + (4 * 0x4000), 0x347b80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 8", 0x347b80 + (4 * 0x4000), 0x347c00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 9", 0x347c00 + (4 * 0x4000), 0x347c80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 10", 0x347c80 + (4 * 0x4000), 0x347d00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 11", 0x347d00 + (4 * 0x4000), 0x347d80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 12", 0x347d80 + (4 * 0x4000), 0x347e00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 13", 0x347e00 + (4 * 0x4000), 0x347e80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 14", 0x347e80 + (4 * 0x4000), 0x347f00 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 15", 0x347f00 + (4 * 0x4000), 0x347f80 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
    { L"Ice Soulfunil 16", 0x347f80 + (4 * 0x4000), 0x348000 + (4 * 0x4000), indexRedEarthSprites_Stages, 0x68 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_MYSTIC_PALETTES[] =
{
    { L"Mystic Combo I Super BG 1?", 0x344000 + (4 * 0x4000), 0x344080 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 2?", 0x344080 + (4 * 0x4000), 0x344100 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 3?", 0x344100 + (4 * 0x4000), 0x344180 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 4?", 0x344180 + (4 * 0x4000), 0x344200 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 5?", 0x344200 + (4 * 0x4000), 0x344280 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 6?", 0x344280 + (4 * 0x4000), 0x344300 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 7?", 0x344300 + (4 * 0x4000), 0x344380 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 8?", 0x344380 + (4 * 0x4000), 0x344400 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 9?", 0x344400 + (4 * 0x4000), 0x344480 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 10?", 0x344480 + (4 * 0x4000), 0x344500 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 11?", 0x344500 + (4 * 0x4000), 0x344580 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 12?", 0x344580 + (4 * 0x4000), 0x344600 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 13?", 0x344600 + (4 * 0x4000), 0x344680 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 14?", 0x344680 + (4 * 0x4000), 0x344700 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 15?", 0x344700 + (4 * 0x4000), 0x344780 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo I Super BG 16?", 0x344780 + (4 * 0x4000), 0x344800 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 1?", 0x344800 + (4 * 0x4000), 0x344880 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 2?", 0x344880 + (4 * 0x4000), 0x344900 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 3?", 0x344900 + (4 * 0x4000), 0x344980 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 4?", 0x344980 + (4 * 0x4000), 0x344a00 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 5?", 0x344a00 + (4 * 0x4000), 0x344a80 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 6?", 0x344a80 + (4 * 0x4000), 0x344b00 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 7?", 0x344b00 + (4 * 0x4000), 0x344b80 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 8?", 0x344b80 + (4 * 0x4000), 0x344c00 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 9?", 0x344c00 + (4 * 0x4000), 0x344c80 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 10?", 0x344c80 + (4 * 0x4000), 0x344d00 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 11?", 0x344d00 + (4 * 0x4000), 0x344d80 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 12?", 0x344d80 + (4 * 0x4000), 0x344e00 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 13?", 0x344e00 + (4 * 0x4000), 0x344e80 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 14?", 0x344e80 + (4 * 0x4000), 0x344f00 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 15?", 0x344f00 + (4 * 0x4000), 0x344f80 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
    { L"Mystic Combo II Super BG 16?", 0x344f80 + (4 * 0x4000), 0x345000 + (4 * 0x4000), indexRedEarthSprites_Bonus, 0x55 },
};

// Normal base in 31 is 
// 0x132600
// 0x133280

// And the variants in 50 are:

// Slash Transparency on Shadows, Effects & Hit FX Ranges
// 0x330000
// 0x331980

// Hauzer Transparency on Shadows, Effects & Hit FX Ranges
// 0x334000
// 0x335980

// Hydron Transparency on Shadows, Effects & Hit FX Ranges
// 0x338000
// 0x339980

// Ravange Transparency on Shadows, Effects & Hit FX Ranges
// 0x33c000
// 0x33d980

// Blade Transparency on Shadows, Effects & Hit FX Ranges
// 0x340000
// 0x341980

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_SHADOWFX_PALETTES[] =
{
    { L"Shadows, Effects & Hit FX 1", 0x132600 + 0x1FDA00, 0x132800 + 0x1FDA00, indexRedEarthSprites_Bonus, 0x60 },
    { L"Shadows, Effects & Hit FX 2", 0x132800 + 0x1FDA00, 0x132a00 + 0x1FDA00 },
    { L"Shadows, Effects & Hit FX 3", 0x132a00 + 0x1FDA00, 0x132c00 + 0x1FDA00 },
    { L"Shadows, Effects & Hit FX 4", 0x132c00 + 0x1FDA00, 0x132e00 + 0x1FDA00 },

    { L"Effects Range (1/3) 0x132e00", 0x132e00 + 0x1FDA00, 0x133000 + 0x1FDA00 },
    { L"Effects Range (2/3) 0x133000", 0x133000 + 0x1FDA00, 0x133200 + 0x1FDA00 },
    { L"Effects Range (3/3) 0x133200", 0x133200 + 0x1FDA00, 0x133280 + 0x1FDA00 },

    { L"Elemental Related & Unknown Range 1 1/2", 0x330f00, 0x331100 },
    { L"Elemental Related & Unknown Range 1 2/2", 0x331100, 0x331280 },
    { L"Elemental Related & Unknown Range 2 1/3", 0x331500, 0x331700 },
    { L"Elemental Related & Unknown Range 2 2/3", 0x331700, 0x331900 },
    { L"Elemental Related & Unknown Range 2 3/3", 0x331900, 0x331980 },
    { L"Ingame LVL Up, Exp, Life up 1", 0x331280, 0x331300, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 2", 0x331300, 0x331380, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 3", 0x331380, 0x331400, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 4", 0x331400, 0x331480, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 5", 0x331480, 0x331500, indexRedEarthSprites_Bonus, 0x52 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_SHADOWFX_PALETTES[] =
{
    { L"Shadows, Effects & Hit FX 1", 0x132600 + 0x201A00, 0x132800 + 0x201A00, indexRedEarthSprites_Bonus, 0x60 },
    { L"Shadows, Effects & Hit FX 2", 0x132800 + 0x201A00, 0x132a00 + 0x201A00 },
    { L"Shadows, Effects & Hit FX 3", 0x132a00 + 0x201A00, 0x132c00 + 0x201A00 },
    { L"Shadows, Effects & Hit FX 4", 0x132c00 + 0x201A00, 0x132e00 + 0x201A00 },

    { L"Effects Range (1/3) 0x132e00", 0x132e00 + 0x201A00, 0x133000 + 0x201A00 },
    { L"Effects Range (2/3) 0x133000", 0x133000 + 0x201A00, 0x133200 + 0x201A00 },
    { L"Effects Range (3/3) 0x133200", 0x133200 + 0x201A00, 0x133280 + 0x201A00 },

    { L"Elemental Related & Unknown Range 1 1/2", 0x334f00, 0x335100 },
    { L"Elemental Related & Unknown Range 1 2/2", 0x335100, 0x335280 },
    { L"Elemental Related & Unknown Range 2 1/3", 0x335500, 0x335700 },
    { L"Elemental Related & Unknown Range 2 2/3", 0x335700, 0x335900 },
    { L"Elemental Related & Unknown Range 2 3/3", 0x335900, 0x335980 },
    { L"Ingame LVL Up, Exp, Life up 1", 0x335280, 0x335300, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 2", 0x335300, 0x335380, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 3", 0x335380, 0x335400, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 4", 0x335400, 0x335480, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 5", 0x335480, 0x335500, indexRedEarthSprites_Bonus, 0x52 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_SHADOWFX_PALETTES[] =
{
    { L"Shadows, Effects & Hit FX 1", 0x132600 + 0x205A00, 0x132800 + 0x205A00, indexRedEarthSprites_Bonus, 0x60 },
    { L"Shadows, Effects & Hit FX 2", 0x132800 + 0x205A00, 0x132a00 + 0x205A00 },
    { L"Shadows, Effects & Hit FX 3", 0x132a00 + 0x205A00, 0x132c00 + 0x205A00 },
    { L"Shadows, Effects & Hit FX 4", 0x132c00 + 0x205A00, 0x132e00 + 0x205A00 },

    { L"Effects Range (1/3) 0x132e00", 0x132e00 + 0x205A00, 0x133000 + 0x205A00 },
    { L"Effects Range (2/3) 0x133000", 0x133000 + 0x205A00, 0x133200 + 0x205A00 },
    { L"Effects Range (3/3) 0x133200", 0x133200 + 0x205A00, 0x133280 + 0x205A00 },

    { L"Elemental Related & Unknown Range 1 1/2", 0x338f00, 0x339100 },
    { L"Elemental Related & Unknown Range 1 2/2", 0x339100, 0x339280 },
    { L"Elemental Related & Unknown Range 2 1/3", 0x339500, 0x339700 },
    { L"Elemental Related & Unknown Range 2 2/3", 0x339700, 0x339900 },
    { L"Elemental Related & Unknown Range 2 3/3", 0x339900, 0x339980 },
    { L"Ingame LVL Up, Exp, Life up 1", 0x339280, 0x339300, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 2", 0x339300, 0x339380, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 3", 0x339380, 0x339400, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 4", 0x339400, 0x339480, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 5", 0x339480, 0x339500, indexRedEarthSprites_Bonus, 0x52 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_SHADOWFX_PALETTES[] =
{
    { L"Shadows, Effects & Hit FX 1", 0x132600 + 0x209A00, 0x132800 + 0x209A00, indexRedEarthSprites_Bonus, 0x60 },
    { L"Shadows, Effects & Hit FX 2", 0x132800 + 0x209A00, 0x132a00 + 0x209A00 },
    { L"Shadows, Effects & Hit FX 3", 0x132a00 + 0x209A00, 0x132c00 + 0x209A00 },
    { L"Shadows, Effects & Hit FX 4", 0x132c00 + 0x209A00, 0x132e00 + 0x209A00 },

    { L"Effects Range (1/3) 0x132e00", 0x132e00 + 0x209A00, 0x133000 + 0x209A00 },
    { L"Effects Range (2/3) 0x133000", 0x133000 + 0x209A00, 0x133200 + 0x209A00 },
    { L"Effects Range (3/3) 0x133200", 0x133200 + 0x209A00, 0x133280 + 0x209A00 },

    { L"Elemental Related & Unknown Range 1 1/2", 0x33cf00, 0x33d100 },
    { L"Elemental Related & Unknown Range 1 2/2", 0x33d100, 0x33d280 },
    { L"Elemental Related & Unknown Range 2 1/3", 0x33d500, 0x33d700 },
    { L"Elemental Related & Unknown Range 2 2/3", 0x33d700, 0x33d900 },
    { L"Elemental Related & Unknown Range 2 3/3", 0x33d900, 0x33d980 },
    { L"Ingame LVL Up, Exp, Life up 1", 0x33d280, 0x33d300, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 2", 0x33d300, 0x33d380, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 3", 0x33d380, 0x33d400, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 4", 0x33d400, 0x33d480, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 5", 0x33d480, 0x33d500, indexRedEarthSprites_Bonus, 0x52 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_SHADOWFX_PALETTES[] =
{
    { L"Shadows, Effects & Hit FX 1", 0x132600 + 0x20DA00, 0x132800 + 0x20DA00, indexRedEarthSprites_Bonus, 0x60 },
    { L"Shadows, Effects & Hit FX 2", 0x132800 + 0x20DA00, 0x132a00 + 0x20DA00 },
    { L"Shadows, Effects & Hit FX 3", 0x132a00 + 0x20DA00, 0x132c00 + 0x20DA00 },
    { L"Shadows, Effects & Hit FX 4", 0x132c00 + 0x20DA00, 0x132e00 + 0x20DA00 },

    { L"Effects Range (1/3) 0x132e00", 0x132e00 + 0x20DA00, 0x133000 + 0x20DA00 },
    { L"Effects Range (2/3) 0x133000", 0x133000 + 0x20DA00, 0x133200 + 0x20DA00 },
    { L"Effects Range (3/3) 0x133200", 0x133200 + 0x20DA00, 0x133280 + 0x20DA00 },

    { L"Elemental Related & Unknown Range 1 1/2", 0x340f00, 0x341100 },
    { L"Elemental Related & Unknown Range 1 2/2", 0x341100, 0x341280 },
    { L"Elemental Related & Unknown Range 2 1/3", 0x341500, 0x341700 },
    { L"Elemental Related & Unknown Range 2 2/3", 0x341700, 0x341900 },
    { L"Elemental Related & Unknown Range 2 3/3", 0x341900, 0x341980 },
    { L"Ingame LVL Up, Exp, Life up 1", 0x341280, 0x341300, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 2", 0x341300, 0x341380, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 3", 0x341380, 0x341400, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 4", 0x341400, 0x341480, indexRedEarthSprites_Bonus, 0x52 },
    { L"Ingame LVL Up, Exp, Life up 5", 0x341480, 0x341500, indexRedEarthSprites_Bonus, 0x52 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_LEO_PUNCH_PALETTES[] =
{
    // Punch Leo
    // 0x408000
    // 0x40b200

    // Slash Transparency on Punch Leo Ranges
    // 0x280000
    // 0x283200
    { L"Leo Punch",                         0x408000 - (0x408000 - 0x280000), 0x408080 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Punch Old Sword",               0x408100 - (0x408000 - 0x280000), 0x408180 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Punch Bronze Sword",            0x408180 - (0x408000 - 0x280000), 0x408200 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Punch Steel Sword",             0x408200 - (0x408000 - 0x280000), 0x408280 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Punch Diamond Sword",           0x408280 - (0x408000 - 0x280000), 0x408300 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Punch Legendary Sword",         0x408300 - (0x408000 - 0x280000), 0x408380 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Punch Old Shield",              0x408380 - (0x408000 - 0x280000), 0x408400 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Punch Wooden Shield",           0x408400 - (0x408000 - 0x280000), 0x408480 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Punch Steel Shield",            0x408480 - (0x408000 - 0x280000), 0x408500 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Punch Diamond Shield",          0x408500 - (0x408000 - 0x280000), 0x408580 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Punch Legendary Shield",        0x408580 - (0x408000 - 0x280000), 0x408600 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Punch Fire Sword",              0x408600 - (0x408000 - 0x280000), 0x408680 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Punch Ice Sword",               0x408680 - (0x408000 - 0x280000), 0x408700 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Punch Lightning Sword",         0x408700 - (0x408000 - 0x280000), 0x408780 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Punch Battle Axe",              0x408780 - (0x408000 - 0x280000), 0x408800 - (0x408000 - 0x280000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Punch Ultimate Guard Flash and Burn 1", 0x40AA00 - (0x408000 - 0x280000), 0x40AA80 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Burn 2",                  0x40AA80 - (0x408000 - 0x280000), 0x40AB00 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 1",                 0x40AB00 - (0x408000 - 0x280000), 0x40AB80 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 2",                 0x40AB80 - (0x408000 - 0x280000), 0x40AC00 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 1",              0x40AC00 - (0x408000 - 0x280000), 0x40AC80 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 2",              0x40AC80 - (0x408000 - 0x280000), 0x40AD00 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 3",              0x40AD00 - (0x408000 - 0x280000), 0x40AD80 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 4",              0x40AD80 - (0x408000 - 0x280000), 0x40AE00 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 1",             0x40AE00 - (0x408000 - 0x280000), 0x40AE80 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 2",             0x40AE80 - (0x408000 - 0x280000), 0x40AF00 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 3",             0x40AF00 - (0x408000 - 0x280000), 0x40AF80 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 1",                0x40AF80 - (0x408000 - 0x280000), 0x40B000 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 2",                0x40B000 - (0x408000 - 0x280000), 0x40B080 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 3",                0x40B080 - (0x408000 - 0x280000), 0x40B100 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 4",                0x40B100 - (0x408000 - 0x280000), 0x40B180 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 5",                0x40B180 - (0x408000 - 0x280000), 0x40B200 - (0x408000 - 0x280000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu",                0x408f80 - (0x408000 - 0x280000), 0x409000 - (0x408000 - 0x280000) },
    { L"Wisemen Mist 1",                    0x409000 - (0x408000 - 0x280000), 0x409080 - (0x408000 - 0x280000) },
    { L"Wisemen Mist 2",                    0x409080 - (0x408000 - 0x280000), 0x409100 - (0x408000 - 0x280000) },

    { L"Unknown Leo Palette",               0x408980 - (0x408000 - 0x280000), 0x408b80 - (0x408000 - 0x280000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_LEO_PUNCH_PALETTES[] =
{
    // Hauzer Transparency on Punch Leo Ranges
    // 0x2b0000
    // 0x2b3e20
    { L"Leo Punch",                         0x408000 - (0x408000 - 0x2b0000), 0x408080 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Punch Old Sword",               0x408100 - (0x408000 - 0x2b0000), 0x408180 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Punch Bronze Sword",            0x408180 - (0x408000 - 0x2b0000), 0x408200 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Punch Steel Sword",             0x408200 - (0x408000 - 0x2b0000), 0x408280 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Punch Diamond Sword",           0x408280 - (0x408000 - 0x2b0000), 0x408300 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Punch Legendary Sword",         0x408300 - (0x408000 - 0x2b0000), 0x408380 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Punch Old Shield",              0x408380 - (0x408000 - 0x2b0000), 0x408400 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Punch Wooden Shield",           0x408400 - (0x408000 - 0x2b0000), 0x408480 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Punch Steel Shield",            0x408480 - (0x408000 - 0x2b0000), 0x408500 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Punch Diamond Shield",          0x408500 - (0x408000 - 0x2b0000), 0x408580 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Punch Legendary Shield",        0x408580 - (0x408000 - 0x2b0000), 0x408600 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Punch Fire Sword",              0x408600 - (0x408000 - 0x2b0000), 0x408680 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Punch Ice Sword",               0x408680 - (0x408000 - 0x2b0000), 0x408700 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Punch Lightning Sword",         0x408700 - (0x408000 - 0x2b0000), 0x408780 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Punch Battle Axe",              0x408780 - (0x408000 - 0x2b0000), 0x408800 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Punch Ultimate Guard Flash and Burn 1", 0x40AA00 - (0x408000 - 0x2b0000), 0x40AA80 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Burn 2",                  0x40AA80 - (0x408000 - 0x2b0000), 0x40AB00 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 1",                 0x40AB00 - (0x408000 - 0x2b0000), 0x40AB80 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 2",                 0x40AB80 - (0x408000 - 0x2b0000), 0x40AC00 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 1",              0x40AC00 - (0x408000 - 0x2b0000), 0x40AC80 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 2",              0x40AC80 - (0x408000 - 0x2b0000), 0x40AD00 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 3",              0x40AD00 - (0x408000 - 0x2b0000), 0x40AD80 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 4",              0x40AD80 - (0x408000 - 0x2b0000), 0x40AE00 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 1",             0x40AE00 - (0x408000 - 0x2b0000), 0x40AE80 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 2",             0x40AE80 - (0x408000 - 0x2b0000), 0x40AF00 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 3",             0x40AF00 - (0x408000 - 0x2b0000), 0x40AF80 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 1",                0x40AF80 - (0x408000 - 0x2b0000), 0x40B000 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 2",                0x40B000 - (0x408000 - 0x2b0000), 0x40B080 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 3",                0x40B080 - (0x408000 - 0x2b0000), 0x40B100 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 4",                0x40B100 - (0x408000 - 0x2b0000), 0x40B180 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 5",                0x40B180 - (0x408000 - 0x2b0000), 0x40B200 - (0x408000 - 0x2b0000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu",                0x408f80 - (0x408000 - 0x2b0000), 0x409000 - (0x408000 - 0x2b0000) },
    { L"Wisemen Mist 1",                    0x409000 - (0x408000 - 0x2b0000), 0x409080 - (0x408000 - 0x2b0000) },
    { L"Wisemen Mist 2",                    0x409080 - (0x408000 - 0x2b0000), 0x409100 - (0x408000 - 0x2b0000) },

    { L"Unknown Leo Palette",               0x408980 - (0x408000 - 0x2b0000), 0x408b80 - (0x408000 - 0x2b0000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_LEO_PUNCH_PALETTES[] =
{
    // Hydron Transparency on Punch Leo Ranges
    // 0x2b4000
    // 0x2b7e20
        { L"Leo Punch",                         0x408000 - (0x408000 - 0x2b4000), 0x408080 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Punch Old Sword",               0x408100 - (0x408000 - 0x2b4000), 0x408180 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Punch Bronze Sword",            0x408180 - (0x408000 - 0x2b4000), 0x408200 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Punch Steel Sword",             0x408200 - (0x408000 - 0x2b4000), 0x408280 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Punch Diamond Sword",           0x408280 - (0x408000 - 0x2b4000), 0x408300 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Punch Legendary Sword",         0x408300 - (0x408000 - 0x2b4000), 0x408380 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Punch Old Shield",              0x408380 - (0x408000 - 0x2b4000), 0x408400 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Punch Wooden Shield",           0x408400 - (0x408000 - 0x2b4000), 0x408480 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Punch Steel Shield",            0x408480 - (0x408000 - 0x2b4000), 0x408500 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Punch Diamond Shield",          0x408500 - (0x408000 - 0x2b4000), 0x408580 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Punch Legendary Shield",        0x408580 - (0x408000 - 0x2b4000), 0x408600 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Punch Fire Sword",              0x408600 - (0x408000 - 0x2b4000), 0x408680 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Punch Ice Sword",               0x408680 - (0x408000 - 0x2b4000), 0x408700 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Punch Lightning Sword",         0x408700 - (0x408000 - 0x2b4000), 0x408780 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Punch Battle Axe",              0x408780 - (0x408000 - 0x2b4000), 0x408800 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Punch Ultimate Guard Flash and Burn 1", 0x40AA00 - (0x408000 - 0x2b4000), 0x40AA80 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Burn 2",                  0x40AA80 - (0x408000 - 0x2b4000), 0x40AB00 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 1",                 0x40AB00 - (0x408000 - 0x2b4000), 0x40AB80 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 2",                 0x40AB80 - (0x408000 - 0x2b4000), 0x40AC00 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 1",              0x40AC00 - (0x408000 - 0x2b4000), 0x40AC80 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 2",              0x40AC80 - (0x408000 - 0x2b4000), 0x40AD00 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 3",              0x40AD00 - (0x408000 - 0x2b4000), 0x40AD80 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 4",              0x40AD80 - (0x408000 - 0x2b4000), 0x40AE00 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 1",             0x40AE00 - (0x408000 - 0x2b4000), 0x40AE80 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 2",             0x40AE80 - (0x408000 - 0x2b4000), 0x40AF00 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 3",             0x40AF00 - (0x408000 - 0x2b4000), 0x40AF80 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 1",                0x40AF80 - (0x408000 - 0x2b4000), 0x40B000 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 2",                0x40B000 - (0x408000 - 0x2b4000), 0x40B080 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 3",                0x40B080 - (0x408000 - 0x2b4000), 0x40B100 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 4",                0x40B100 - (0x408000 - 0x2b4000), 0x40B180 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 5",                0x40B180 - (0x408000 - 0x2b4000), 0x40B200 - (0x408000 - 0x2b4000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu",                0x408f80 - (0x408000 - 0x2b4000), 0x409000 - (0x408000 - 0x2b4000) },
    { L"Wisemen Mist 1",                    0x409000 - (0x408000 - 0x2b4000), 0x409080 - (0x408000 - 0x2b4000) },
    { L"Wisemen Mist 2",                    0x409080 - (0x408000 - 0x2b4000), 0x409100 - (0x408000 - 0x2b4000) },

    { L"Unknown Leo Palette",               0x408980 - (0x408000 - 0x2b4000), 0x408b80 - (0x408000 - 0x2b4000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_LEO_PUNCH_PALETTES[] =
{
    // Ravange Transparency on Punch Leo Ranges
    // 0x2b8000
    // 0x2bbe20
    { L"Leo Punch",                         0x408000 - (0x408000 - 0x2b8000), 0x408080 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Punch Old Sword",               0x408100 - (0x408000 - 0x2b8000), 0x408180 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Punch Bronze Sword",            0x408180 - (0x408000 - 0x2b8000), 0x408200 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Punch Steel Sword",             0x408200 - (0x408000 - 0x2b8000), 0x408280 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Punch Diamond Sword",           0x408280 - (0x408000 - 0x2b8000), 0x408300 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Punch Legendary Sword",         0x408300 - (0x408000 - 0x2b8000), 0x408380 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Punch Old Shield",              0x408380 - (0x408000 - 0x2b8000), 0x408400 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Punch Wooden Shield",           0x408400 - (0x408000 - 0x2b8000), 0x408480 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Punch Steel Shield",            0x408480 - (0x408000 - 0x2b8000), 0x408500 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Punch Diamond Shield",          0x408500 - (0x408000 - 0x2b8000), 0x408580 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Punch Legendary Shield",        0x408580 - (0x408000 - 0x2b8000), 0x408600 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Punch Fire Sword",              0x408600 - (0x408000 - 0x2b8000), 0x408680 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Punch Ice Sword",               0x408680 - (0x408000 - 0x2b8000), 0x408700 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Punch Lightning Sword",         0x408700 - (0x408000 - 0x2b8000), 0x408780 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Punch Battle Axe",              0x408780 - (0x408000 - 0x2b8000), 0x408800 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Punch Ultimate Guard Flash and Burn 1", 0x40AA00 - (0x408000 - 0x2b8000), 0x40AA80 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Burn 2",                  0x40AA80 - (0x408000 - 0x2b8000), 0x40AB00 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 1",                 0x40AB00 - (0x408000 - 0x2b8000), 0x40AB80 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 2",                 0x40AB80 - (0x408000 - 0x2b8000), 0x40AC00 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 1",              0x40AC00 - (0x408000 - 0x2b8000), 0x40AC80 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 2",              0x40AC80 - (0x408000 - 0x2b8000), 0x40AD00 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 3",              0x40AD00 - (0x408000 - 0x2b8000), 0x40AD80 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 4",              0x40AD80 - (0x408000 - 0x2b8000), 0x40AE00 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 1",             0x40AE00 - (0x408000 - 0x2b8000), 0x40AE80 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 2",             0x40AE80 - (0x408000 - 0x2b8000), 0x40AF00 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 3",             0x40AF00 - (0x408000 - 0x2b8000), 0x40AF80 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 1",                0x40AF80 - (0x408000 - 0x2b8000), 0x40B000 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 2",                0x40B000 - (0x408000 - 0x2b8000), 0x40B080 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 3",                0x40B080 - (0x408000 - 0x2b8000), 0x40B100 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 4",                0x40B100 - (0x408000 - 0x2b8000), 0x40B180 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 5",                0x40B180 - (0x408000 - 0x2b8000), 0x40B200 - (0x408000 - 0x2b8000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu",                0x408f80 - (0x408000 - 0x2b8000), 0x409000 - (0x408000 - 0x2b8000) },
    { L"Wisemen Mist 1",                    0x409000 - (0x408000 - 0x2b8000), 0x409080 - (0x408000 - 0x2b8000) },
    { L"Wisemen Mist 2",                    0x409080 - (0x408000 - 0x2b8000), 0x409100 - (0x408000 - 0x2b8000) },

    { L"Unknown Leo Palette",               0x408980 - (0x408000 - 0x2b8000), 0x408b80 - (0x408000 - 0x2b8000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_LEO_PUNCH_PALETTES[] =
{
    // Blade Transparency on Punch Leo Ranges
    // 0x2bc000
    // 0x2bfe20
    { L"Leo Punch",                         0x408000 - (0x408000 - 0x2bc000), 0x408080 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Punch Old Sword",               0x408100 - (0x408000 - 0x2bc000), 0x408180 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Punch Bronze Sword",            0x408180 - (0x408000 - 0x2bc000), 0x408200 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Punch Steel Sword",             0x408200 - (0x408000 - 0x2bc000), 0x408280 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Punch Diamond Sword",           0x408280 - (0x408000 - 0x2bc000), 0x408300 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Punch Legendary Sword",         0x408300 - (0x408000 - 0x2bc000), 0x408380 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Punch Old Shield",              0x408380 - (0x408000 - 0x2bc000), 0x408400 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Punch Wooden Shield",           0x408400 - (0x408000 - 0x2bc000), 0x408480 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Punch Steel Shield",            0x408480 - (0x408000 - 0x2bc000), 0x408500 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Punch Diamond Shield",          0x408500 - (0x408000 - 0x2bc000), 0x408580 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Punch Legendary Shield",        0x408580 - (0x408000 - 0x2bc000), 0x408600 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Punch Fire Sword",              0x408600 - (0x408000 - 0x2bc000), 0x408680 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Punch Ice Sword",               0x408680 - (0x408000 - 0x2bc000), 0x408700 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Punch Lightning Sword",         0x408700 - (0x408000 - 0x2bc000), 0x408780 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Punch Battle Axe",              0x408780 - (0x408000 - 0x2bc000), 0x408800 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Punch Ultimate Guard Flash and Burn 1", 0x40AA00 - (0x408000 - 0x2bc000), 0x40AA80 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Burn 2",                  0x40AA80 - (0x408000 - 0x2bc000), 0x40AB00 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 1",                 0x40AB00 - (0x408000 - 0x2bc000), 0x40AB80 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Shock 2",                 0x40AB80 - (0x408000 - 0x2bc000), 0x40AC00 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 1",              0x40AC00 - (0x408000 - 0x2bc000), 0x40AC80 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 2",              0x40AC80 - (0x408000 - 0x2bc000), 0x40AD00 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 3",              0x40AD00 - (0x408000 - 0x2bc000), 0x40AD80 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Poisoned 4",              0x40AD80 - (0x408000 - 0x2bc000), 0x40AE00 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 1",             0x40AE00 - (0x408000 - 0x2bc000), 0x40AE80 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 2",             0x40AE80 - (0x408000 - 0x2bc000), 0x40AF00 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Petrified 3",             0x40AF00 - (0x408000 - 0x2bc000), 0x40AF80 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 1",                0x40AF80 - (0x408000 - 0x2bc000), 0x40B000 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 2",                0x40B000 - (0x408000 - 0x2bc000), 0x40B080 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 3",                0x40B080 - (0x408000 - 0x2bc000), 0x40B100 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 4",                0x40B100 - (0x408000 - 0x2bc000), 0x40B180 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },
    { L"Leo Punch Frozen 5",                0x40B180 - (0x408000 - 0x2bc000), 0x40B200 - (0x408000 - 0x2bc000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu",                0x408f80 - (0x408000 - 0x2bc000), 0x409000 - (0x408000 - 0x2bc000) },
    { L"Wisemen Mist 1",                    0x409000 - (0x408000 - 0x2bc000), 0x409080 - (0x408000 - 0x2bc000) },
    { L"Wisemen Mist 2",                    0x409080 - (0x408000 - 0x2bc000), 0x409100 - (0x408000 - 0x2bc000) },

    { L"Unknown Leo Palette",               0x408980 - (0x408000 - 0x2bc000), 0x408b80 - (0x408000 - 0x2bc000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_KENJI_PUNCH_PALETTES[] =
{
    // Punch Kenji
    // 0x40b200
    // 0x40e400

    // Slash Transparency on Punch Kenji Ranges
    // 0x284000
    // 0x287200
    { L"Kenji Punch",                            0x40B200 - (0x40b200 - 0x284000), 0x40B280 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },

    { L"Chains, Kunai",                          0x40B380 - (0x40b200 - 0x284000), 0x40B400 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hat intro",                              0x40B300 - (0x40b200 - 0x284000), 0x40B380 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x40B400 - (0x40b200 - 0x284000), 0x40B480 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x40B480 - (0x40b200 - 0x284000), 0x40B500 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x40B500 - (0x40b200 - 0x284000), 0x40B580 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x40B580 - (0x40b200 - 0x284000), 0x40B600 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x40B600 - (0x40b200 - 0x284000), 0x40B680 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x40B700 - (0x40b200 - 0x284000), 0x40B780 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x40B680 - (0x40b200 - 0x284000), 0x40B700 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x40B780 - (0x40b200 - 0x284000), 0x40B800 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Kunai Throwing Shine (1/3)",             0x40BF00 - (0x40b200 - 0x284000), 0x40BF80 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x40BE80 - (0x40b200 - 0x284000), 0x40BF00 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x40BE00 - (0x40b200 - 0x284000), 0x40BE80 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x40B280 - (0x40b200 - 0x284000), 0x40B300 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Punch Ultimate Guard Flash and Burn 1", 0x40DC00 - (0x40b200 - 0x284000), 0x40DC80 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Burn 2", 0x40DC80 - (0x40b200 - 0x284000), 0x40DD00 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 1", 0x40DD00 - (0x40b200 - 0x284000), 0x40DD80 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 2", 0x40DD80 - (0x40b200 - 0x284000), 0x40DE00 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 1", 0x40DE00 - (0x40b200 - 0x284000), 0x40DE80 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 2", 0x40DE80 - (0x40b200 - 0x284000), 0x40DF00 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 3", 0x40DF00 - (0x40b200 - 0x284000), 0x40DF80 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 4", 0x40DF80 - (0x40b200 - 0x284000), 0x40E000 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 1", 0x40E000 - (0x40b200 - 0x284000), 0x40E080 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 2", 0x40E080 - (0x40b200 - 0x284000), 0x40E100 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 3", 0x40E100 - (0x40b200 - 0x284000), 0x40E180 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 1", 0x40E180 - (0x40b200 - 0x284000), 0x40E200 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 2", 0x40E200 - (0x40b200 - 0x284000), 0x40E280 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 3", 0x40E280 - (0x40b200 - 0x284000), 0x40E300 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 4", 0x40E300 - (0x40b200 - 0x284000), 0x40E380 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 5", 0x40E380 - (0x40b200 - 0x284000), 0x40E400 - (0x40b200 - 0x284000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x40bfe0", 0x40bfe0 - (0x40b200 - 0x284000), 0x40c1e0 - (0x40b200 - 0x284000) },
    { L"Unknown Kenji Range 1 (2/2) 0x40c1e0", 0x40c1e0 - (0x40b200 - 0x284000), 0x40c200 - (0x40b200 - 0x284000) },
    { L"Unknown Kenji Range 2 (1/2) 0x40c600", 0x40c600 - (0x40b200 - 0x284000), 0x40c800 - (0x40b200 - 0x284000) },
    { L"Unknown Kenji Range 2 (2/2) 0x40c800", 0x40c800 - (0x40b200 - 0x284000), 0x40c920 - (0x40b200 - 0x284000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_KENJI_PUNCH_PALETTES[] =
{
    // Hauzer Transparency on Punch Kenji Ranges
    // 0x2c0000
    // 0x2c3200
    { L"Kenji Punch",                            0x40B200 - (0x40b200 - 0x2c0000), 0x40B280 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },

    { L"Chains, Kunai",                          0x40B380 - (0x40b200 - 0x2c0000), 0x40B400 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hat intro",                              0x40B300 - (0x40b200 - 0x2c0000), 0x40B380 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x40B400 - (0x40b200 - 0x2c0000), 0x40B480 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x40B480 - (0x40b200 - 0x2c0000), 0x40B500 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x40B500 - (0x40b200 - 0x2c0000), 0x40B580 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x40B580 - (0x40b200 - 0x2c0000), 0x40B600 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x40B600 - (0x40b200 - 0x2c0000), 0x40B680 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x40B700 - (0x40b200 - 0x2c0000), 0x40B780 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x40B680 - (0x40b200 - 0x2c0000), 0x40B700 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x40B780 - (0x40b200 - 0x2c0000), 0x40B800 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Kunai Throwing Shine (1/3)",             0x40BF00 - (0x40b200 - 0x2c0000), 0x40BF80 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x40BE80 - (0x40b200 - 0x2c0000), 0x40BF00 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x40BE00 - (0x40b200 - 0x2c0000), 0x40BE80 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x40B280 - (0x40b200 - 0x2c0000), 0x40B300 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Punch Ultimate Guard Flash and Burn 1", 0x40DC00 - (0x40b200 - 0x2c0000), 0x40DC80 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Burn 2", 0x40DC80 - (0x40b200 - 0x2c0000), 0x40DD00 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 1", 0x40DD00 - (0x40b200 - 0x2c0000), 0x40DD80 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 2", 0x40DD80 - (0x40b200 - 0x2c0000), 0x40DE00 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 1", 0x40DE00 - (0x40b200 - 0x2c0000), 0x40DE80 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 2", 0x40DE80 - (0x40b200 - 0x2c0000), 0x40DF00 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 3", 0x40DF00 - (0x40b200 - 0x2c0000), 0x40DF80 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 4", 0x40DF80 - (0x40b200 - 0x2c0000), 0x40E000 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 1", 0x40E000 - (0x40b200 - 0x2c0000), 0x40E080 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 2", 0x40E080 - (0x40b200 - 0x2c0000), 0x40E100 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 3", 0x40E100 - (0x40b200 - 0x2c0000), 0x40E180 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 1", 0x40E180 - (0x40b200 - 0x2c0000), 0x40E200 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 2", 0x40E200 - (0x40b200 - 0x2c0000), 0x40E280 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 3", 0x40E280 - (0x40b200 - 0x2c0000), 0x40E300 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 4", 0x40E300 - (0x40b200 - 0x2c0000), 0x40E380 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 5", 0x40E380 - (0x40b200 - 0x2c0000), 0x40E400 - (0x40b200 - 0x2c0000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x40bfe0", 0x40bfe0 - (0x40b200 - 0x2c0000), 0x40c1e0 - (0x40b200 - 0x2c0000) },
    { L"Unknown Kenji Range 1 (2/2) 0x40c1e0", 0x40c1e0 - (0x40b200 - 0x2c0000), 0x40c200 - (0x40b200 - 0x2c0000) },
    { L"Unknown Kenji Range 2 (1/2) 0x40c600", 0x40c600 - (0x40b200 - 0x2c0000), 0x40c800 - (0x40b200 - 0x2c0000) },
    { L"Unknown Kenji Range 2 (2/2) 0x40c800", 0x40c800 - (0x40b200 - 0x2c0000), 0x40c920 - (0x40b200 - 0x2c0000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_KENJI_PUNCH_PALETTES[] =
{
    // Hydron Transparency on Punch Kenji Ranges
    // 0x2c4000
    // 0x2c7200
    { L"Kenji Punch",                            0x40B200 - (0x40b200 - 0x2c4000), 0x40B280 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },

    { L"Chains, Kunai",                          0x40B380 - (0x40b200 - 0x2c4000), 0x40B400 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hat intro",                              0x40B300 - (0x40b200 - 0x2c4000), 0x40B380 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x40B400 - (0x40b200 - 0x2c4000), 0x40B480 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x40B480 - (0x40b200 - 0x2c4000), 0x40B500 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x40B500 - (0x40b200 - 0x2c4000), 0x40B580 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x40B580 - (0x40b200 - 0x2c4000), 0x40B600 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x40B600 - (0x40b200 - 0x2c4000), 0x40B680 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x40B700 - (0x40b200 - 0x2c4000), 0x40B780 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x40B680 - (0x40b200 - 0x2c4000), 0x40B700 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x40B780 - (0x40b200 - 0x2c4000), 0x40B800 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Kunai Throwing Shine (1/3)",             0x40BF00 - (0x40b200 - 0x2c4000), 0x40BF80 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x40BE80 - (0x40b200 - 0x2c4000), 0x40BF00 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x40BE00 - (0x40b200 - 0x2c4000), 0x40BE80 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x40B280 - (0x40b200 - 0x2c4000), 0x40B300 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Punch Ultimate Guard Flash and Burn 1", 0x40DC00 - (0x40b200 - 0x2c4000), 0x40DC80 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Burn 2", 0x40DC80 - (0x40b200 - 0x2c4000), 0x40DD00 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 1", 0x40DD00 - (0x40b200 - 0x2c4000), 0x40DD80 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 2", 0x40DD80 - (0x40b200 - 0x2c4000), 0x40DE00 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 1", 0x40DE00 - (0x40b200 - 0x2c4000), 0x40DE80 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 2", 0x40DE80 - (0x40b200 - 0x2c4000), 0x40DF00 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 3", 0x40DF00 - (0x40b200 - 0x2c4000), 0x40DF80 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 4", 0x40DF80 - (0x40b200 - 0x2c4000), 0x40E000 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 1", 0x40E000 - (0x40b200 - 0x2c4000), 0x40E080 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 2", 0x40E080 - (0x40b200 - 0x2c4000), 0x40E100 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 3", 0x40E100 - (0x40b200 - 0x2c4000), 0x40E180 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 1", 0x40E180 - (0x40b200 - 0x2c4000), 0x40E200 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 2", 0x40E200 - (0x40b200 - 0x2c4000), 0x40E280 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 3", 0x40E280 - (0x40b200 - 0x2c4000), 0x40E300 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 4", 0x40E300 - (0x40b200 - 0x2c4000), 0x40E380 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 5", 0x40E380 - (0x40b200 - 0x2c4000), 0x40E400 - (0x40b200 - 0x2c4000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x40bfe0", 0x40bfe0 - (0x40b200 - 0x2c4000), 0x40c1e0 - (0x40b200 - 0x2c4000) },
    { L"Unknown Kenji Range 1 (2/2) 0x40c1e0", 0x40c1e0 - (0x40b200 - 0x2c4000), 0x40c200 - (0x40b200 - 0x2c4000) },
    { L"Unknown Kenji Range 2 (1/2) 0x40c600", 0x40c600 - (0x40b200 - 0x2c4000), 0x40c800 - (0x40b200 - 0x2c4000) },
    { L"Unknown Kenji Range 2 (2/2) 0x40c800", 0x40c800 - (0x40b200 - 0x2c4000), 0x40c920 - (0x40b200 - 0x2c4000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_KENJI_PUNCH_PALETTES[] =
{
    // Ravange Transparency on Punch Kenji Ranges
    // 0x2c8000
    // 0x2cb200
    { L"Kenji Punch",                            0x40B200 - (0x40b200 - 0x2c8000), 0x40B280 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },

    { L"Chains, Kunai",                          0x40B380 - (0x40b200 - 0x2c8000), 0x40B400 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hat intro",                              0x40B300 - (0x40b200 - 0x2c8000), 0x40B380 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x40B400 - (0x40b200 - 0x2c8000), 0x40B480 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x40B480 - (0x40b200 - 0x2c8000), 0x40B500 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x40B500 - (0x40b200 - 0x2c8000), 0x40B580 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x40B580 - (0x40b200 - 0x2c8000), 0x40B600 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x40B600 - (0x40b200 - 0x2c8000), 0x40B680 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x40B700 - (0x40b200 - 0x2c8000), 0x40B780 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x40B680 - (0x40b200 - 0x2c8000), 0x40B700 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x40B780 - (0x40b200 - 0x2c8000), 0x40B800 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Kunai Throwing Shine (1/3)",             0x40BF00 - (0x40b200 - 0x2c8000), 0x40BF80 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x40BE80 - (0x40b200 - 0x2c8000), 0x40BF00 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x40BE00 - (0x40b200 - 0x2c8000), 0x40BE80 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x40B280 - (0x40b200 - 0x2c8000), 0x40B300 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Punch Ultimate Guard Flash and Burn 1", 0x40DC00 - (0x40b200 - 0x2c8000), 0x40DC80 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Burn 2", 0x40DC80 - (0x40b200 - 0x2c8000), 0x40DD00 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 1", 0x40DD00 - (0x40b200 - 0x2c8000), 0x40DD80 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 2", 0x40DD80 - (0x40b200 - 0x2c8000), 0x40DE00 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 1", 0x40DE00 - (0x40b200 - 0x2c8000), 0x40DE80 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 2", 0x40DE80 - (0x40b200 - 0x2c8000), 0x40DF00 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 3", 0x40DF00 - (0x40b200 - 0x2c8000), 0x40DF80 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 4", 0x40DF80 - (0x40b200 - 0x2c8000), 0x40E000 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 1", 0x40E000 - (0x40b200 - 0x2c8000), 0x40E080 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 2", 0x40E080 - (0x40b200 - 0x2c8000), 0x40E100 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 3", 0x40E100 - (0x40b200 - 0x2c8000), 0x40E180 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 1", 0x40E180 - (0x40b200 - 0x2c8000), 0x40E200 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 2", 0x40E200 - (0x40b200 - 0x2c8000), 0x40E280 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 3", 0x40E280 - (0x40b200 - 0x2c8000), 0x40E300 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 4", 0x40E300 - (0x40b200 - 0x2c8000), 0x40E380 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 5", 0x40E380 - (0x40b200 - 0x2c8000), 0x40E400 - (0x40b200 - 0x2c8000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x40bfe0", 0x40bfe0 - (0x40b200 - 0x2c8000), 0x40c1e0 - (0x40b200 - 0x2c8000) },
    { L"Unknown Kenji Range 1 (2/2) 0x40c1e0", 0x40c1e0 - (0x40b200 - 0x2c8000), 0x40c200 - (0x40b200 - 0x2c8000) },
    { L"Unknown Kenji Range 2 (1/2) 0x40c600", 0x40c600 - (0x40b200 - 0x2c8000), 0x40c800 - (0x40b200 - 0x2c8000) },
    { L"Unknown Kenji Range 2 (2/2) 0x40c800", 0x40c800 - (0x40b200 - 0x2c8000), 0x40c920 - (0x40b200 - 0x2c8000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_KENJI_PUNCH_PALETTES[] =
{
    // Blade Transparency on Punch Kenji Ranges
    // 0x2cc000
    // 0x2cf200
    { L"Kenji Punch",                            0x40B200 - (0x40b200 - 0x2cc000), 0x40B280 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },

    { L"Chains, Kunai",                          0x40B380 - (0x40b200 - 0x2cc000), 0x40B400 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hat intro",                              0x40B300 - (0x40b200 - 0x2cc000), 0x40B380 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x40B400 - (0x40b200 - 0x2cc000), 0x40B480 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x40B480 - (0x40b200 - 0x2cc000), 0x40B500 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x40B500 - (0x40b200 - 0x2cc000), 0x40B580 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x40B580 - (0x40b200 - 0x2cc000), 0x40B600 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x40B600 - (0x40b200 - 0x2cc000), 0x40B680 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x40B700 - (0x40b200 - 0x2cc000), 0x40B780 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x40B680 - (0x40b200 - 0x2cc000), 0x40B700 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x40B780 - (0x40b200 - 0x2cc000), 0x40B800 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Kunai Throwing Shine (1/3)",             0x40BF00 - (0x40b200 - 0x2cc000), 0x40BF80 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x40BE80 - (0x40b200 - 0x2cc000), 0x40BF00 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x40BE00 - (0x40b200 - 0x2cc000), 0x40BE80 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x40B280 - (0x40b200 - 0x2cc000), 0x40B300 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Punch Ultimate Guard Flash and Burn 1", 0x40DC00 - (0x40b200 - 0x2cc000), 0x40DC80 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Burn 2", 0x40DC80 - (0x40b200 - 0x2cc000), 0x40DD00 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 1", 0x40DD00 - (0x40b200 - 0x2cc000), 0x40DD80 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Shock 2", 0x40DD80 - (0x40b200 - 0x2cc000), 0x40DE00 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 1", 0x40DE00 - (0x40b200 - 0x2cc000), 0x40DE80 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 2", 0x40DE80 - (0x40b200 - 0x2cc000), 0x40DF00 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 3", 0x40DF00 - (0x40b200 - 0x2cc000), 0x40DF80 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Poisoned 4", 0x40DF80 - (0x40b200 - 0x2cc000), 0x40E000 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 1", 0x40E000 - (0x40b200 - 0x2cc000), 0x40E080 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 2", 0x40E080 - (0x40b200 - 0x2cc000), 0x40E100 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Petrified 3", 0x40E100 - (0x40b200 - 0x2cc000), 0x40E180 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 1", 0x40E180 - (0x40b200 - 0x2cc000), 0x40E200 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 2", 0x40E200 - (0x40b200 - 0x2cc000), 0x40E280 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 3", 0x40E280 - (0x40b200 - 0x2cc000), 0x40E300 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 4", 0x40E300 - (0x40b200 - 0x2cc000), 0x40E380 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },
    { L"Kenji Punch Frozen 5", 0x40E380 - (0x40b200 - 0x2cc000), 0x40E400 - (0x40b200 - 0x2cc000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x40bfe0", 0x40bfe0 - (0x40b200 - 0x2cc000), 0x40c1e0 - (0x40b200 - 0x2cc000) },
    { L"Unknown Kenji Range 1 (2/2) 0x40c1e0", 0x40c1e0 - (0x40b200 - 0x2cc000), 0x40c200 - (0x40b200 - 0x2cc000) },
    { L"Unknown Kenji Range 2 (1/2) 0x40c600", 0x40c600 - (0x40b200 - 0x2cc000), 0x40c800 - (0x40b200 - 0x2cc000) },
    { L"Unknown Kenji Range 2 (2/2) 0x40c800", 0x40c800 - (0x40b200 - 0x2cc000), 0x40c920 - (0x40b200 - 0x2cc000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_TESSA_PUNCH_PALETTES[] =
{
    // Punch Tessa
    // 0x40e400
    // 0x411600

    // Slash Transparency on Punch Tessa Ranges
    // 0x288000
    // 0x28b200
    { L"Tessa Punch", 0x40E400 - (0x40e400 - 0x288000), 0x40E480 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Changing Pal", 0x40E480 - (0x40e400 - 0x288000), 0x40E500 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Punch Bottled Ice", 0x40E500 - (0x40e400 - 0x288000), 0x40E580 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Punch Mage Shield Block", 0x40EA00 - (0x40e400 - 0x288000), 0x40EA80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Punch Mage Shield Preblock", 0x40EA80 - (0x40e400 - 0x288000), 0x40EB00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Punch Al (Aru) Cat", 0x40E780 - (0x40e400 - 0x288000), 0x40E800 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Al (Aru) Cat Returning", 0x40E800 - (0x40e400 - 0x288000), 0x40E880 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ivan (Ibun) Cat", 0x40E880 - (0x40e400 - 0x288000), 0x40E900 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat Returning", 0x40E900 - (0x40e400 - 0x288000), 0x40E980 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ice", 0x40E980 - (0x40e400 - 0x288000), 0x40EA00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Punch Reverie Sword", 0x40EB80 - (0x40e400 - 0x288000), 0x40EC00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Punch Staffs", 0x40EC00 - (0x40e400 - 0x288000), 0x40EC80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Kaeru (Frog)", 0x40EE80 - (0x40e400 - 0x288000), 0x40EF00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 - (0x40e400 - 0x288000), 0x40F000 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Suitcat", 0x40FF00 - (0x40e400 - 0x288000), 0x40FF80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Suitcat (Mustard)", 0x40FF80 - (0x40e400 - 0x288000), 0x410000 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Chakra Wave", 0x40EF00 - (0x40e400 - 0x288000), 0x40EF80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Punch Cannon Magic Pattern", 0x40E700 - (0x40e400 - 0x288000), 0x40E780 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Punch Cannon Transition", 0x40F880 - (0x40e400 - 0x288000), 0x40F900 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Punch Hyper Cannon (Superball and Winscreen)", 0x40F900 - (0x40e400 - 0x288000), 0x40F980 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Punch Glace Cannon", 0x40F980 - (0x40e400 - 0x288000), 0x40FA00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Flamma Cannon", 0x40FA00 - (0x40e400 - 0x288000), 0x40FA80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Electron Cannon", 0x40FA80 - (0x40e400 - 0x288000), 0x40FB00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Death Phenomenon - On Hit", 0x40FD80 - (0x40e400 - 0x288000), 0x40FE00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Punch Death Phenomenon - On Whiff", 0x40FE00 - (0x40e400 - 0x288000), 0x40FE80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 - (0x40e400 - 0x288000), 0x40F800 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Manot Arm", 0x40F200 - (0x40e400 - 0x288000), 0x40F280 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Punch GC/Pursuit Wrecking Ball", 0x40F300 - (0x40e400 - 0x288000), 0x40F380 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Punch Grab Saw", 0x40F080 - (0x40e400 - 0x288000), 0x40F100 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Punch GC/Grab/Pursuit Lever", 0x40F100 - (0x40e400 - 0x288000), 0x40F180 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Punch Ultimate Guard Wall and Lever", 0x40EB00 - (0x40e400 - 0x288000), 0x40EB80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Punch Ultimate Guard Batteries", 0x40EE00 - (0x40e400 - 0x288000), 0x40EE80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Punch Ultimate Counter Chain", 0x40fb00 - (0x40e400 - 0x288000), 0x40fb80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x40f380 - (0x40e400 - 0x288000), 0x40f400 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x40f400 - (0x40e400 - 0x288000), 0x40f480 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x40f480 - (0x40e400 - 0x288000), 0x40f500 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x40f500 - (0x40e400 - 0x288000), 0x40f580 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x40f580 - (0x40e400 - 0x288000), 0x40f600 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x40f600 - (0x40e400 - 0x288000), 0x40f680 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x40f280 - (0x40e400 - 0x288000), 0x40f300 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Punch Ultimate Guard Flash and Burn 1", 0x410E00 - (0x40e400 - 0x288000), 0x410E80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Burn 2", 0x410E80 - (0x40e400 - 0x288000), 0x410F00 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 1", 0x410F00 - (0x40e400 - 0x288000), 0x410F80 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 2", 0x410F80 - (0x40e400 - 0x288000), 0x411000 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 1", 0x411000 - (0x40e400 - 0x288000), 0x411080 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 2", 0x411080 - (0x40e400 - 0x288000), 0x411100 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 3", 0x411100 - (0x40e400 - 0x288000), 0x411180 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 4", 0x411180 - (0x40e400 - 0x288000), 0x411200 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 1", 0x411200 - (0x40e400 - 0x288000), 0x411280 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 2", 0x411280 - (0x40e400 - 0x288000), 0x411300 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 3", 0x411300 - (0x40e400 - 0x288000), 0x411380 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 1", 0x411380 - (0x40e400 - 0x288000), 0x411400 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 2", 0x411400 - (0x40e400 - 0x288000), 0x411480 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 3", 0x411480 - (0x40e400 - 0x288000), 0x411500 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 4", 0x411500 - (0x40e400 - 0x288000), 0x411580 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 5", 0x411580 - (0x40e400 - 0x288000), 0x411600 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0 },

    { L"Punch Palette Cartur", 0x40e580 - (0x40e400 - 0x288000), 0x40e600 - (0x40e400 - 0x288000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x40e600 - (0x40e400 - 0x288000), 0x40e700 - (0x40e400 - 0x288000) },
    { L"Unknown Tessa Palette 2", 0x40f180 - (0x40e400 - 0x288000), 0x40f200 - (0x40e400 - 0x288000) },
    { L"Unknown Tessa Palette 3", 0x40fe80 - (0x40e400 - 0x288000), 0x40ff00 - (0x40e400 - 0x288000) },
    { L"Unknown Tessa Range 1", 0x40fb80 - (0x40e400 - 0x288000), 0x40fd80 - (0x40e400 - 0x288000) },
    { L"Unknown Tessa Range 2 (1/4) 0x410000", 0x410000 - (0x40e400 - 0x288000), 0x410200 - (0x40e400 - 0x288000) },
    { L"Unknown Tessa Range 2 (2/4) 0x410200", 0x410200 - (0x40e400 - 0x288000), 0x410400 - (0x40e400 - 0x288000) },
    { L"Unknown Tessa Range 2 (3/4) 0x410400", 0x410400 - (0x40e400 - 0x288000), 0x410600 - (0x40e400 - 0x288000) },
    { L"Unknown Tessa Range 2 (4/4) 0x410600", 0x410600 - (0x40e400 - 0x288000), 0x410680 - (0x40e400 - 0x288000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_TESSA_PUNCH_PALETTES[] =
{
    // Hauzer Transparency on Punch Tessa Ranges
    // 0x2d0000
    // 0x2d3200
    { L"Tessa Punch", 0x40E400 - (0x40e400 - 0x2d0000), 0x40E480 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Changing Pal", 0x40E480 - (0x40e400 - 0x2d0000), 0x40E500 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Punch Bottled Ice", 0x40E500 - (0x40e400 - 0x2d0000), 0x40E580 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Punch Mage Shield Block", 0x40EA00 - (0x40e400 - 0x2d0000), 0x40EA80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Punch Mage Shield Preblock", 0x40EA80 - (0x40e400 - 0x2d0000), 0x40EB00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Punch Al (Aru) Cat", 0x40E780 - (0x40e400 - 0x2d0000), 0x40E800 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Al (Aru) Cat Returning", 0x40E800 - (0x40e400 - 0x2d0000), 0x40E880 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ivan (Ibun) Cat", 0x40E880 - (0x40e400 - 0x2d0000), 0x40E900 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat Returning", 0x40E900 - (0x40e400 - 0x2d0000), 0x40E980 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ice", 0x40E980 - (0x40e400 - 0x2d0000), 0x40EA00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Punch Reverie Sword", 0x40EB80 - (0x40e400 - 0x2d0000), 0x40EC00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Punch Staffs", 0x40EC00 - (0x40e400 - 0x2d0000), 0x40EC80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Kaeru (Frog)", 0x40EE80 - (0x40e400 - 0x2d0000), 0x40EF00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 - (0x40e400 - 0x2d0000), 0x40F000 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Suitcat", 0x40FF00 - (0x40e400 - 0x2d0000), 0x40FF80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Suitcat (Mustard)", 0x40FF80 - (0x40e400 - 0x2d0000), 0x410000 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Chakra Wave", 0x40EF00 - (0x40e400 - 0x2d0000), 0x40EF80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Punch Cannon Magic Pattern", 0x40E700 - (0x40e400 - 0x2d0000), 0x40E780 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Punch Cannon Transition", 0x40F880 - (0x40e400 - 0x2d0000), 0x40F900 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Punch Hyper Cannon (Superball and Winscreen)", 0x40F900 - (0x40e400 - 0x2d0000), 0x40F980 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Punch Glace Cannon", 0x40F980 - (0x40e400 - 0x2d0000), 0x40FA00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Flamma Cannon", 0x40FA00 - (0x40e400 - 0x2d0000), 0x40FA80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Electron Cannon", 0x40FA80 - (0x40e400 - 0x2d0000), 0x40FB00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Death Phenomenon - On Hit", 0x40FD80 - (0x40e400 - 0x2d0000), 0x40FE00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Punch Death Phenomenon - On Whiff", 0x40FE00 - (0x40e400 - 0x2d0000), 0x40FE80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 - (0x40e400 - 0x2d0000), 0x40F800 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Manot Arm", 0x40F200 - (0x40e400 - 0x2d0000), 0x40F280 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Punch GC/Pursuit Wrecking Ball", 0x40F300 - (0x40e400 - 0x2d0000), 0x40F380 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Punch Grab Saw", 0x40F080 - (0x40e400 - 0x2d0000), 0x40F100 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Punch GC/Grab/Pursuit Lever", 0x40F100 - (0x40e400 - 0x2d0000), 0x40F180 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Punch Ultimate Guard Wall and Lever", 0x40EB00 - (0x40e400 - 0x2d0000), 0x40EB80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Punch Ultimate Guard Batteries", 0x40EE00 - (0x40e400 - 0x2d0000), 0x40EE80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Punch Ultimate Counter Chain", 0x40fb00 - (0x40e400 - 0x2d0000), 0x40fb80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x40f380 - (0x40e400 - 0x2d0000), 0x40f400 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x40f400 - (0x40e400 - 0x2d0000), 0x40f480 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x40f480 - (0x40e400 - 0x2d0000), 0x40f500 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x40f500 - (0x40e400 - 0x2d0000), 0x40f580 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x40f580 - (0x40e400 - 0x2d0000), 0x40f600 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x40f600 - (0x40e400 - 0x2d0000), 0x40f680 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x40f280 - (0x40e400 - 0x2d0000), 0x40f300 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Punch Ultimate Guard Flash and Burn 1", 0x410E00 - (0x40e400 - 0x2d0000), 0x410E80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Burn 2", 0x410E80 - (0x40e400 - 0x2d0000), 0x410F00 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 1", 0x410F00 - (0x40e400 - 0x2d0000), 0x410F80 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 2", 0x410F80 - (0x40e400 - 0x2d0000), 0x411000 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 1", 0x411000 - (0x40e400 - 0x2d0000), 0x411080 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 2", 0x411080 - (0x40e400 - 0x2d0000), 0x411100 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 3", 0x411100 - (0x40e400 - 0x2d0000), 0x411180 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 4", 0x411180 - (0x40e400 - 0x2d0000), 0x411200 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 1", 0x411200 - (0x40e400 - 0x2d0000), 0x411280 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 2", 0x411280 - (0x40e400 - 0x2d0000), 0x411300 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 3", 0x411300 - (0x40e400 - 0x2d0000), 0x411380 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 1", 0x411380 - (0x40e400 - 0x2d0000), 0x411400 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 2", 0x411400 - (0x40e400 - 0x2d0000), 0x411480 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 3", 0x411480 - (0x40e400 - 0x2d0000), 0x411500 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 4", 0x411500 - (0x40e400 - 0x2d0000), 0x411580 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 5", 0x411580 - (0x40e400 - 0x2d0000), 0x411600 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0 },

    { L"Punch Palette Cartur", 0x40e580 - (0x40e400 - 0x2d0000), 0x40e600 - (0x40e400 - 0x2d0000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x40e600 - (0x40e400 - 0x2d0000), 0x40e700 - (0x40e400 - 0x2d0000) },
    { L"Unknown Tessa Palette 2", 0x40f180 - (0x40e400 - 0x2d0000), 0x40f200 - (0x40e400 - 0x2d0000) },
    { L"Unknown Tessa Palette 3", 0x40fe80 - (0x40e400 - 0x2d0000), 0x40ff00 - (0x40e400 - 0x2d0000) },
    { L"Unknown Tessa Range 1", 0x40fb80 - (0x40e400 - 0x2d0000), 0x40fd80 - (0x40e400 - 0x2d0000) },
    { L"Unknown Tessa Range 2 (1/4) 0x410000", 0x410000 - (0x40e400 - 0x2d0000), 0x410200 - (0x40e400 - 0x2d0000) },
    { L"Unknown Tessa Range 2 (2/4) 0x410200", 0x410200 - (0x40e400 - 0x2d0000), 0x410400 - (0x40e400 - 0x2d0000) },
    { L"Unknown Tessa Range 2 (3/4) 0x410400", 0x410400 - (0x40e400 - 0x2d0000), 0x410600 - (0x40e400 - 0x2d0000) },
    { L"Unknown Tessa Range 2 (4/4) 0x410600", 0x410600 - (0x40e400 - 0x2d0000), 0x410680 - (0x40e400 - 0x2d0000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_TESSA_PUNCH_PALETTES[] =
{
    // Hydron Transparency on Punch Tessa Ranges
    // 0x2d4000
    // 0x2d7200
    { L"Tessa Punch", 0x40E400 - (0x40e400 - 0x2d4000), 0x40E480 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Changing Pal", 0x40E480 - (0x40e400 - 0x2d4000), 0x40E500 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Punch Bottled Ice", 0x40E500 - (0x40e400 - 0x2d4000), 0x40E580 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Punch Mage Shield Block", 0x40EA00 - (0x40e400 - 0x2d4000), 0x40EA80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Punch Mage Shield Preblock", 0x40EA80 - (0x40e400 - 0x2d4000), 0x40EB00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Punch Al (Aru) Cat", 0x40E780 - (0x40e400 - 0x2d4000), 0x40E800 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Al (Aru) Cat Returning", 0x40E800 - (0x40e400 - 0x2d4000), 0x40E880 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ivan (Ibun) Cat", 0x40E880 - (0x40e400 - 0x2d4000), 0x40E900 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat Returning", 0x40E900 - (0x40e400 - 0x2d4000), 0x40E980 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ice", 0x40E980 - (0x40e400 - 0x2d4000), 0x40EA00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Punch Reverie Sword", 0x40EB80 - (0x40e400 - 0x2d4000), 0x40EC00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Punch Staffs", 0x40EC00 - (0x40e400 - 0x2d4000), 0x40EC80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Kaeru (Frog)", 0x40EE80 - (0x40e400 - 0x2d4000), 0x40EF00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 - (0x40e400 - 0x2d4000), 0x40F000 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Suitcat", 0x40FF00 - (0x40e400 - 0x2d4000), 0x40FF80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Suitcat (Mustard)", 0x40FF80 - (0x40e400 - 0x2d4000), 0x410000 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Chakra Wave", 0x40EF00 - (0x40e400 - 0x2d4000), 0x40EF80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Punch Cannon Magic Pattern", 0x40E700 - (0x40e400 - 0x2d4000), 0x40E780 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Punch Cannon Transition", 0x40F880 - (0x40e400 - 0x2d4000), 0x40F900 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Punch Hyper Cannon (Superball and Winscreen)", 0x40F900 - (0x40e400 - 0x2d4000), 0x40F980 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Punch Glace Cannon", 0x40F980 - (0x40e400 - 0x2d4000), 0x40FA00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Flamma Cannon", 0x40FA00 - (0x40e400 - 0x2d4000), 0x40FA80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Electron Cannon", 0x40FA80 - (0x40e400 - 0x2d4000), 0x40FB00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Death Phenomenon - On Hit", 0x40FD80 - (0x40e400 - 0x2d4000), 0x40FE00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Punch Death Phenomenon - On Whiff", 0x40FE00 - (0x40e400 - 0x2d4000), 0x40FE80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 - (0x40e400 - 0x2d4000), 0x40F800 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Manot Arm", 0x40F200 - (0x40e400 - 0x2d4000), 0x40F280 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Punch GC/Pursuit Wrecking Ball", 0x40F300 - (0x40e400 - 0x2d4000), 0x40F380 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Punch Grab Saw", 0x40F080 - (0x40e400 - 0x2d4000), 0x40F100 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Punch GC/Grab/Pursuit Lever", 0x40F100 - (0x40e400 - 0x2d4000), 0x40F180 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Punch Ultimate Guard Wall and Lever", 0x40EB00 - (0x40e400 - 0x2d4000), 0x40EB80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Punch Ultimate Guard Batteries", 0x40EE00 - (0x40e400 - 0x2d4000), 0x40EE80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Punch Ultimate Counter Chain", 0x40fb00 - (0x40e400 - 0x2d4000), 0x40fb80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x40f380 - (0x40e400 - 0x2d4000), 0x40f400 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x40f400 - (0x40e400 - 0x2d4000), 0x40f480 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x40f480 - (0x40e400 - 0x2d4000), 0x40f500 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x40f500 - (0x40e400 - 0x2d4000), 0x40f580 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x40f580 - (0x40e400 - 0x2d4000), 0x40f600 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x40f600 - (0x40e400 - 0x2d4000), 0x40f680 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x40f280 - (0x40e400 - 0x2d4000), 0x40f300 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Punch Ultimate Guard Flash and Burn 1", 0x410E00 - (0x40e400 - 0x2d4000), 0x410E80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Burn 2", 0x410E80 - (0x40e400 - 0x2d4000), 0x410F00 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 1", 0x410F00 - (0x40e400 - 0x2d4000), 0x410F80 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 2", 0x410F80 - (0x40e400 - 0x2d4000), 0x411000 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 1", 0x411000 - (0x40e400 - 0x2d4000), 0x411080 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 2", 0x411080 - (0x40e400 - 0x2d4000), 0x411100 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 3", 0x411100 - (0x40e400 - 0x2d4000), 0x411180 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 4", 0x411180 - (0x40e400 - 0x2d4000), 0x411200 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 1", 0x411200 - (0x40e400 - 0x2d4000), 0x411280 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 2", 0x411280 - (0x40e400 - 0x2d4000), 0x411300 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 3", 0x411300 - (0x40e400 - 0x2d4000), 0x411380 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 1", 0x411380 - (0x40e400 - 0x2d4000), 0x411400 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 2", 0x411400 - (0x40e400 - 0x2d4000), 0x411480 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 3", 0x411480 - (0x40e400 - 0x2d4000), 0x411500 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 4", 0x411500 - (0x40e400 - 0x2d4000), 0x411580 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 5", 0x411580 - (0x40e400 - 0x2d4000), 0x411600 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0 },

    { L"Punch Palette Cartur", 0x40e580 - (0x40e400 - 0x2d4000), 0x40e600 - (0x40e400 - 0x2d4000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x40e600 - (0x40e400 - 0x2d4000), 0x40e700 - (0x40e400 - 0x2d4000) },
    { L"Unknown Tessa Palette 2", 0x40f180 - (0x40e400 - 0x2d4000), 0x40f200 - (0x40e400 - 0x2d4000) },
    { L"Unknown Tessa Palette 3", 0x40fe80 - (0x40e400 - 0x2d4000), 0x40ff00 - (0x40e400 - 0x2d4000) },
    { L"Unknown Tessa Range 1", 0x40fb80 - (0x40e400 - 0x2d4000), 0x40fd80 - (0x40e400 - 0x2d4000) },
    { L"Unknown Tessa Range 2 (1/4) 0x410000", 0x410000 - (0x40e400 - 0x2d4000), 0x410200 - (0x40e400 - 0x2d4000) },
    { L"Unknown Tessa Range 2 (2/4) 0x410200", 0x410200 - (0x40e400 - 0x2d4000), 0x410400 - (0x40e400 - 0x2d4000) },
    { L"Unknown Tessa Range 2 (3/4) 0x410400", 0x410400 - (0x40e400 - 0x2d4000), 0x410600 - (0x40e400 - 0x2d4000) },
    { L"Unknown Tessa Range 2 (4/4) 0x410600", 0x410600 - (0x40e400 - 0x2d4000), 0x410680 - (0x40e400 - 0x2d4000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_TESSA_PUNCH_PALETTES[] =
{
    // Ravange Transparency on Punch Tessa Ranges
    // 0x2d8000
    // 0x2db200
    { L"Tessa Punch", 0x40E400 - (0x40e400 - 0x2d8000), 0x40E480 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Changing Pal", 0x40E480 - (0x40e400 - 0x2d8000), 0x40E500 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Punch Bottled Ice", 0x40E500 - (0x40e400 - 0x2d8000), 0x40E580 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Punch Mage Shield Block", 0x40EA00 - (0x40e400 - 0x2d8000), 0x40EA80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Punch Mage Shield Preblock", 0x40EA80 - (0x40e400 - 0x2d8000), 0x40EB00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Punch Al (Aru) Cat", 0x40E780 - (0x40e400 - 0x2d8000), 0x40E800 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Al (Aru) Cat Returning", 0x40E800 - (0x40e400 - 0x2d8000), 0x40E880 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ivan (Ibun) Cat", 0x40E880 - (0x40e400 - 0x2d8000), 0x40E900 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat Returning", 0x40E900 - (0x40e400 - 0x2d8000), 0x40E980 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ice", 0x40E980 - (0x40e400 - 0x2d8000), 0x40EA00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Punch Reverie Sword", 0x40EB80 - (0x40e400 - 0x2d8000), 0x40EC00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Punch Staffs", 0x40EC00 - (0x40e400 - 0x2d8000), 0x40EC80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Kaeru (Frog)", 0x40EE80 - (0x40e400 - 0x2d8000), 0x40EF00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 - (0x40e400 - 0x2d8000), 0x40F000 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Suitcat", 0x40FF00 - (0x40e400 - 0x2d8000), 0x40FF80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Suitcat (Mustard)", 0x40FF80 - (0x40e400 - 0x2d8000), 0x410000 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Chakra Wave", 0x40EF00 - (0x40e400 - 0x2d8000), 0x40EF80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Punch Cannon Magic Pattern", 0x40E700 - (0x40e400 - 0x2d8000), 0x40E780 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Punch Cannon Transition", 0x40F880 - (0x40e400 - 0x2d8000), 0x40F900 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Punch Hyper Cannon (Superball and Winscreen)", 0x40F900 - (0x40e400 - 0x2d8000), 0x40F980 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Punch Glace Cannon", 0x40F980 - (0x40e400 - 0x2d8000), 0x40FA00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Flamma Cannon", 0x40FA00 - (0x40e400 - 0x2d8000), 0x40FA80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Electron Cannon", 0x40FA80 - (0x40e400 - 0x2d8000), 0x40FB00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Death Phenomenon - On Hit", 0x40FD80 - (0x40e400 - 0x2d8000), 0x40FE00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Punch Death Phenomenon - On Whiff", 0x40FE00 - (0x40e400 - 0x2d8000), 0x40FE80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 - (0x40e400 - 0x2d8000), 0x40F800 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Manot Arm", 0x40F200 - (0x40e400 - 0x2d8000), 0x40F280 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Punch GC/Pursuit Wrecking Ball", 0x40F300 - (0x40e400 - 0x2d8000), 0x40F380 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Punch Grab Saw", 0x40F080 - (0x40e400 - 0x2d8000), 0x40F100 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Punch GC/Grab/Pursuit Lever", 0x40F100 - (0x40e400 - 0x2d8000), 0x40F180 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Punch Ultimate Guard Wall and Lever", 0x40EB00 - (0x40e400 - 0x2d8000), 0x40EB80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Punch Ultimate Guard Batteries", 0x40EE00 - (0x40e400 - 0x2d8000), 0x40EE80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Punch Ultimate Counter Chain", 0x40fb00 - (0x40e400 - 0x2d8000), 0x40fb80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x40f380 - (0x40e400 - 0x2d8000), 0x40f400 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x40f400 - (0x40e400 - 0x2d8000), 0x40f480 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x40f480 - (0x40e400 - 0x2d8000), 0x40f500 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x40f500 - (0x40e400 - 0x2d8000), 0x40f580 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x40f580 - (0x40e400 - 0x2d8000), 0x40f600 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x40f600 - (0x40e400 - 0x2d8000), 0x40f680 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x40f280 - (0x40e400 - 0x2d8000), 0x40f300 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Punch Ultimate Guard Flash and Burn 1", 0x410E00 - (0x40e400 - 0x2d8000), 0x410E80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Burn 2", 0x410E80 - (0x40e400 - 0x2d8000), 0x410F00 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 1", 0x410F00 - (0x40e400 - 0x2d8000), 0x410F80 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 2", 0x410F80 - (0x40e400 - 0x2d8000), 0x411000 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 1", 0x411000 - (0x40e400 - 0x2d8000), 0x411080 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 2", 0x411080 - (0x40e400 - 0x2d8000), 0x411100 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 3", 0x411100 - (0x40e400 - 0x2d8000), 0x411180 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 4", 0x411180 - (0x40e400 - 0x2d8000), 0x411200 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 1", 0x411200 - (0x40e400 - 0x2d8000), 0x411280 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 2", 0x411280 - (0x40e400 - 0x2d8000), 0x411300 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 3", 0x411300 - (0x40e400 - 0x2d8000), 0x411380 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 1", 0x411380 - (0x40e400 - 0x2d8000), 0x411400 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 2", 0x411400 - (0x40e400 - 0x2d8000), 0x411480 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 3", 0x411480 - (0x40e400 - 0x2d8000), 0x411500 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 4", 0x411500 - (0x40e400 - 0x2d8000), 0x411580 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 5", 0x411580 - (0x40e400 - 0x2d8000), 0x411600 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0 },

    { L"Punch Palette Cartur", 0x40e580 - (0x40e400 - 0x2d8000), 0x40e600 - (0x40e400 - 0x2d8000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x40e600 - (0x40e400 - 0x2d8000), 0x40e700 - (0x40e400 - 0x2d8000) },
    { L"Unknown Tessa Palette 2", 0x40f180 - (0x40e400 - 0x2d8000), 0x40f200 - (0x40e400 - 0x2d8000) },
    { L"Unknown Tessa Palette 3", 0x40fe80 - (0x40e400 - 0x2d8000), 0x40ff00 - (0x40e400 - 0x2d8000) },
    { L"Unknown Tessa Range 1", 0x40fb80 - (0x40e400 - 0x2d8000), 0x40fd80 - (0x40e400 - 0x2d8000) },
    { L"Unknown Tessa Range 2 (1/4) 0x410000", 0x410000 - (0x40e400 - 0x2d8000), 0x410200 - (0x40e400 - 0x2d8000) },
    { L"Unknown Tessa Range 2 (2/4) 0x410200", 0x410200 - (0x40e400 - 0x2d8000), 0x410400 - (0x40e400 - 0x2d8000) },
    { L"Unknown Tessa Range 2 (3/4) 0x410400", 0x410400 - (0x40e400 - 0x2d8000), 0x410600 - (0x40e400 - 0x2d8000) },
    { L"Unknown Tessa Range 2 (4/4) 0x410600", 0x410600 - (0x40e400 - 0x2d8000), 0x410680 - (0x40e400 - 0x2d8000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_TESSA_PUNCH_PALETTES[] =
{
    // Blade Transparency on Punch Tessa Ranges
    // 0x2dc000
    // 0x2df200
    { L"Tessa Punch", 0x40E400 - (0x40e400 - 0x2dc000), 0x40E480 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Changing Pal", 0x40E480 - (0x40e400 - 0x2dc000), 0x40E500 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Punch Bottled Ice", 0x40E500 - (0x40e400 - 0x2dc000), 0x40E580 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Punch Mage Shield Block", 0x40EA00 - (0x40e400 - 0x2dc000), 0x40EA80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Punch Mage Shield Preblock", 0x40EA80 - (0x40e400 - 0x2dc000), 0x40EB00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Punch Al (Aru) Cat", 0x40E780 - (0x40e400 - 0x2dc000), 0x40E800 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Al (Aru) Cat Returning", 0x40E800 - (0x40e400 - 0x2dc000), 0x40E880 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ivan (Ibun) Cat", 0x40E880 - (0x40e400 - 0x2dc000), 0x40E900 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat Returning", 0x40E900 - (0x40e400 - 0x2dc000), 0x40E980 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Punch Ice", 0x40E980 - (0x40e400 - 0x2dc000), 0x40EA00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Punch Reverie Sword", 0x40EB80 - (0x40e400 - 0x2dc000), 0x40EC00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Punch Staffs", 0x40EC00 - (0x40e400 - 0x2dc000), 0x40EC80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Kaeru (Frog)", 0x40EE80 - (0x40e400 - 0x2dc000), 0x40EF00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 - (0x40e400 - 0x2dc000), 0x40F000 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Suitcat", 0x40FF00 - (0x40e400 - 0x2dc000), 0x40FF80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Suitcat (Mustard)", 0x40FF80 - (0x40e400 - 0x2dc000), 0x410000 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Chakra Wave", 0x40EF00 - (0x40e400 - 0x2dc000), 0x40EF80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Punch Cannon Magic Pattern", 0x40E700 - (0x40e400 - 0x2dc000), 0x40E780 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Punch Cannon Transition", 0x40F880 - (0x40e400 - 0x2dc000), 0x40F900 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Punch Hyper Cannon (Superball and Winscreen)", 0x40F900 - (0x40e400 - 0x2dc000), 0x40F980 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Punch Glace Cannon", 0x40F980 - (0x40e400 - 0x2dc000), 0x40FA00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Flamma Cannon", 0x40FA00 - (0x40e400 - 0x2dc000), 0x40FA80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Electron Cannon", 0x40FA80 - (0x40e400 - 0x2dc000), 0x40FB00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Death Phenomenon - On Hit", 0x40FD80 - (0x40e400 - 0x2dc000), 0x40FE00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Punch Death Phenomenon - On Whiff", 0x40FE00 - (0x40e400 - 0x2dc000), 0x40FE80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 - (0x40e400 - 0x2dc000), 0x40F800 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Manot Arm", 0x40F200 - (0x40e400 - 0x2dc000), 0x40F280 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Punch GC/Pursuit Wrecking Ball", 0x40F300 - (0x40e400 - 0x2dc000), 0x40F380 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Punch Grab Saw", 0x40F080 - (0x40e400 - 0x2dc000), 0x40F100 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Punch GC/Grab/Pursuit Lever", 0x40F100 - (0x40e400 - 0x2dc000), 0x40F180 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Punch Ultimate Guard Wall and Lever", 0x40EB00 - (0x40e400 - 0x2dc000), 0x40EB80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Punch Ultimate Guard Batteries", 0x40EE00 - (0x40e400 - 0x2dc000), 0x40EE80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Punch Ultimate Counter Chain", 0x40fb00 - (0x40e400 - 0x2dc000), 0x40fb80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x40f380 - (0x40e400 - 0x2dc000), 0x40f400 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x40f400 - (0x40e400 - 0x2dc000), 0x40f480 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x40f480 - (0x40e400 - 0x2dc000), 0x40f500 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x40f500 - (0x40e400 - 0x2dc000), 0x40f580 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x40f580 - (0x40e400 - 0x2dc000), 0x40f600 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x40f600 - (0x40e400 - 0x2dc000), 0x40f680 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x40f280 - (0x40e400 - 0x2dc000), 0x40f300 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Punch Ultimate Guard Flash and Burn 1", 0x410E00 - (0x40e400 - 0x2dc000), 0x410E80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Burn 2", 0x410E80 - (0x40e400 - 0x2dc000), 0x410F00 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 1", 0x410F00 - (0x40e400 - 0x2dc000), 0x410F80 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Shocked 2", 0x410F80 - (0x40e400 - 0x2dc000), 0x411000 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 1", 0x411000 - (0x40e400 - 0x2dc000), 0x411080 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 2", 0x411080 - (0x40e400 - 0x2dc000), 0x411100 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 3", 0x411100 - (0x40e400 - 0x2dc000), 0x411180 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Poisoned 4", 0x411180 - (0x40e400 - 0x2dc000), 0x411200 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 1", 0x411200 - (0x40e400 - 0x2dc000), 0x411280 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 2", 0x411280 - (0x40e400 - 0x2dc000), 0x411300 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Petrified 3", 0x411300 - (0x40e400 - 0x2dc000), 0x411380 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 1", 0x411380 - (0x40e400 - 0x2dc000), 0x411400 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 2", 0x411400 - (0x40e400 - 0x2dc000), 0x411480 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 3", 0x411480 - (0x40e400 - 0x2dc000), 0x411500 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 4", 0x411500 - (0x40e400 - 0x2dc000), 0x411580 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Punch Frozen 5", 0x411580 - (0x40e400 - 0x2dc000), 0x411600 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0 },

    { L"Punch Palette Cartur", 0x40e580 - (0x40e400 - 0x2dc000), 0x40e600 - (0x40e400 - 0x2dc000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x40e600 - (0x40e400 - 0x2dc000), 0x40e700 - (0x40e400 - 0x2dc000) },
    { L"Unknown Tessa Palette 2", 0x40f180 - (0x40e400 - 0x2dc000), 0x40f200 - (0x40e400 - 0x2dc000) },
    { L"Unknown Tessa Palette 3", 0x40fe80 - (0x40e400 - 0x2dc000), 0x40ff00 - (0x40e400 - 0x2dc000) },
    { L"Unknown Tessa Range 1", 0x40fb80 - (0x40e400 - 0x2dc000), 0x40fd80 - (0x40e400 - 0x2dc000) },
    { L"Unknown Tessa Range 2 (1/4) 0x410000", 0x410000 - (0x40e400 - 0x2dc000), 0x410200 - (0x40e400 - 0x2dc000) },
    { L"Unknown Tessa Range 2 (2/4) 0x410200", 0x410200 - (0x40e400 - 0x2dc000), 0x410400 - (0x40e400 - 0x2dc000) },
    { L"Unknown Tessa Range 2 (3/4) 0x410400", 0x410400 - (0x40e400 - 0x2dc000), 0x410600 - (0x40e400 - 0x2dc000) },
    { L"Unknown Tessa Range 2 (4/4) 0x410600", 0x410600 - (0x40e400 - 0x2dc000), 0x410680 - (0x40e400 - 0x2dc000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_MAI_PUNCH_PALETTES[] =
{
    // Punch Mai
    // 0x411600
    // 0x414800

    // Slash Transparency on Punch Mai Ranges
    // 0x28c000
    // 0x28f200
    { L"Mai-Ling Punch", 0x411600 - (0x411600 - 0x28c000), 0x411680 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Punch Fire", 0x411680 - (0x411600 - 0x28c000), 0x411700 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Punch Fireball", 0x411780 - (0x411600 - 0x28c000), 0x411800 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Punch HCB.1/2/3 Fireball", 0x411880 - (0x411600 - 0x28c000), 0x411900 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x411900 - (0x411600 - 0x28c000), 0x411980 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x412a00 - (0x411600 - 0x28c000), 0x412b00 - (0x411600 - 0x28c000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Punch Ultimate Guard Flash and Burn 1", 0x414000 - (0x411600 - 0x28c000), 0x414080 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Burn 2", 0x414080 - (0x411600 - 0x28c000), 0x414100 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 1", 0x414100 - (0x411600 - 0x28c000), 0x414180 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 2", 0x414180 - (0x411600 - 0x28c000), 0x414200 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 1", 0x414200 - (0x411600 - 0x28c000), 0x414280 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 2", 0x414280 - (0x411600 - 0x28c000), 0x414300 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 3", 0x414300 - (0x411600 - 0x28c000), 0x414380 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 4", 0x414380 - (0x411600 - 0x28c000), 0x414400 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 1", 0x414400 - (0x411600 - 0x28c000), 0x414480 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 2", 0x414480 - (0x411600 - 0x28c000), 0x414500 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 3", 0x414500 - (0x411600 - 0x28c000), 0x414580 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 1", 0x414580 - (0x411600 - 0x28c000), 0x414600 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 2", 0x414600 - (0x411600 - 0x28c000), 0x414680 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 3", 0x414680 - (0x411600 - 0x28c000), 0x414700 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 4", 0x414700 - (0x411600 - 0x28c000), 0x414780 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 5", 0x414780 - (0x411600 - 0x28c000), 0x414800 - (0x411600 - 0x28c000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x411700 - (0x411600 - 0x28c000), 0x411780 - (0x411600 - 0x28c000) },
    { L"Unknown Mai Palette 2", 0x411800 - (0x411600 - 0x28c000), 0x411880 - (0x411600 - 0x28c000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_MAI_PUNCH_PALETTES[] =
{
    // Hauzer Transparency on Punch Mai Ranges
    // 0x2e0000
    // 0x2e3200
    { L"Mai-Ling Punch", 0x411600 - (0x411600 - 0x2e0000), 0x411680 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Punch Fire", 0x411680 - (0x411600 - 0x2e0000), 0x411700 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Punch Fireball", 0x411780 - (0x411600 - 0x2e0000), 0x411800 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Punch HCB.1/2/3 Fireball", 0x411880 - (0x411600 - 0x2e0000), 0x411900 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x411900 - (0x411600 - 0x2e0000), 0x411980 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x412a00 - (0x411600 - 0x2e0000), 0x412b00 - (0x411600 - 0x2e0000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Punch Ultimate Guard Flash and Burn 1", 0x414000 - (0x411600 - 0x2e0000), 0x414080 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Burn 2", 0x414080 - (0x411600 - 0x2e0000), 0x414100 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 1", 0x414100 - (0x411600 - 0x2e0000), 0x414180 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 2", 0x414180 - (0x411600 - 0x2e0000), 0x414200 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 1", 0x414200 - (0x411600 - 0x2e0000), 0x414280 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 2", 0x414280 - (0x411600 - 0x2e0000), 0x414300 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 3", 0x414300 - (0x411600 - 0x2e0000), 0x414380 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 4", 0x414380 - (0x411600 - 0x2e0000), 0x414400 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 1", 0x414400 - (0x411600 - 0x2e0000), 0x414480 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 2", 0x414480 - (0x411600 - 0x2e0000), 0x414500 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 3", 0x414500 - (0x411600 - 0x2e0000), 0x414580 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 1", 0x414580 - (0x411600 - 0x2e0000), 0x414600 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 2", 0x414600 - (0x411600 - 0x2e0000), 0x414680 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 3", 0x414680 - (0x411600 - 0x2e0000), 0x414700 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 4", 0x414700 - (0x411600 - 0x2e0000), 0x414780 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 5", 0x414780 - (0x411600 - 0x2e0000), 0x414800 - (0x411600 - 0x2e0000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x411700 - (0x411600 - 0x2e0000), 0x411780 - (0x411600 - 0x2e0000) },
    { L"Unknown Mai Palette 2", 0x411800 - (0x411600 - 0x2e0000), 0x411880 - (0x411600 - 0x2e0000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_MAI_PUNCH_PALETTES[] =
{
    // Hydron Transparency on Punch Mai Ranges
    // 0x2e4000
    // 0x2e7200
    { L"Mai-Ling Punch", 0x411600 - (0x411600 - 0x2e4000), 0x411680 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Punch Fire", 0x411680 - (0x411600 - 0x2e4000), 0x411700 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Punch Fireball", 0x411780 - (0x411600 - 0x2e4000), 0x411800 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Punch HCB.1/2/3 Fireball", 0x411880 - (0x411600 - 0x2e4000), 0x411900 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x411900 - (0x411600 - 0x2e4000), 0x411980 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x412a00 - (0x411600 - 0x2e4000), 0x412b00 - (0x411600 - 0x2e4000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Punch Ultimate Guard Flash and Burn 1", 0x414000 - (0x411600 - 0x2e4000), 0x414080 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Burn 2", 0x414080 - (0x411600 - 0x2e4000), 0x414100 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 1", 0x414100 - (0x411600 - 0x2e4000), 0x414180 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 2", 0x414180 - (0x411600 - 0x2e4000), 0x414200 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 1", 0x414200 - (0x411600 - 0x2e4000), 0x414280 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 2", 0x414280 - (0x411600 - 0x2e4000), 0x414300 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 3", 0x414300 - (0x411600 - 0x2e4000), 0x414380 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 4", 0x414380 - (0x411600 - 0x2e4000), 0x414400 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 1", 0x414400 - (0x411600 - 0x2e4000), 0x414480 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 2", 0x414480 - (0x411600 - 0x2e4000), 0x414500 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 3", 0x414500 - (0x411600 - 0x2e4000), 0x414580 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 1", 0x414580 - (0x411600 - 0x2e4000), 0x414600 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 2", 0x414600 - (0x411600 - 0x2e4000), 0x414680 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 3", 0x414680 - (0x411600 - 0x2e4000), 0x414700 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 4", 0x414700 - (0x411600 - 0x2e4000), 0x414780 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 5", 0x414780 - (0x411600 - 0x2e4000), 0x414800 - (0x411600 - 0x2e4000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x411700 - (0x411600 - 0x2e4000), 0x411780 - (0x411600 - 0x2e4000) },
    { L"Unknown Mai Palette 2", 0x411800 - (0x411600 - 0x2e4000), 0x411880 - (0x411600 - 0x2e4000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_MAI_PUNCH_PALETTES[] =
{
    // Ravange Transparency on Punch Mai Ranges
    // 0x2e8000
    // 0x2eb200
    { L"Mai-Ling Punch", 0x411600 - (0x411600 - 0x2e8000), 0x411680 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Punch Fire", 0x411680 - (0x411600 - 0x2e8000), 0x411700 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Punch Fireball", 0x411780 - (0x411600 - 0x2e8000), 0x411800 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Punch HCB.1/2/3 Fireball", 0x411880 - (0x411600 - 0x2e8000), 0x411900 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x411900 - (0x411600 - 0x2e8000), 0x411980 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x412a00 - (0x411600 - 0x2e8000), 0x412b00 - (0x411600 - 0x2e8000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Punch Ultimate Guard Flash and Burn 1", 0x414000 - (0x411600 - 0x2e8000), 0x414080 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Burn 2", 0x414080 - (0x411600 - 0x2e8000), 0x414100 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 1", 0x414100 - (0x411600 - 0x2e8000), 0x414180 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 2", 0x414180 - (0x411600 - 0x2e8000), 0x414200 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 1", 0x414200 - (0x411600 - 0x2e8000), 0x414280 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 2", 0x414280 - (0x411600 - 0x2e8000), 0x414300 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 3", 0x414300 - (0x411600 - 0x2e8000), 0x414380 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 4", 0x414380 - (0x411600 - 0x2e8000), 0x414400 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 1", 0x414400 - (0x411600 - 0x2e8000), 0x414480 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 2", 0x414480 - (0x411600 - 0x2e8000), 0x414500 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 3", 0x414500 - (0x411600 - 0x2e8000), 0x414580 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 1", 0x414580 - (0x411600 - 0x2e8000), 0x414600 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 2", 0x414600 - (0x411600 - 0x2e8000), 0x414680 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 3", 0x414680 - (0x411600 - 0x2e8000), 0x414700 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 4", 0x414700 - (0x411600 - 0x2e8000), 0x414780 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 5", 0x414780 - (0x411600 - 0x2e8000), 0x414800 - (0x411600 - 0x2e8000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x411700 - (0x411600 - 0x2e8000), 0x411780 - (0x411600 - 0x2e8000) },
    { L"Unknown Mai Palette 2", 0x411800 - (0x411600 - 0x2e8000), 0x411880 - (0x411600 - 0x2e8000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_MAI_PUNCH_PALETTES[] =
{
    // Blade Transparency on Punch Mai Ranges
    // 0x2ec000
    // 0x2ef200
    { L"Mai-Ling Punch", 0x411600 - (0x411600 - 0x2ec000), 0x411680 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Punch Fire", 0x411680 - (0x411600 - 0x2ec000), 0x411700 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Punch Fireball", 0x411780 - (0x411600 - 0x2ec000), 0x411800 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Punch HCB.1/2/3 Fireball", 0x411880 - (0x411600 - 0x2ec000), 0x411900 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x411900 - (0x411600 - 0x2ec000), 0x411980 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x412a00 - (0x411600 - 0x2ec000), 0x412b00 - (0x411600 - 0x2ec000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Punch Ultimate Guard Flash and Burn 1", 0x414000 - (0x411600 - 0x2ec000), 0x414080 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Burn 2", 0x414080 - (0x411600 - 0x2ec000), 0x414100 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 1", 0x414100 - (0x411600 - 0x2ec000), 0x414180 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 2", 0x414180 - (0x411600 - 0x2ec000), 0x414200 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 1", 0x414200 - (0x411600 - 0x2ec000), 0x414280 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 2", 0x414280 - (0x411600 - 0x2ec000), 0x414300 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 3", 0x414300 - (0x411600 - 0x2ec000), 0x414380 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Poisoned 4", 0x414380 - (0x411600 - 0x2ec000), 0x414400 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 1", 0x414400 - (0x411600 - 0x2ec000), 0x414480 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 2", 0x414480 - (0x411600 - 0x2ec000), 0x414500 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Petrified 3", 0x414500 - (0x411600 - 0x2ec000), 0x414580 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 1", 0x414580 - (0x411600 - 0x2ec000), 0x414600 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 2", 0x414600 - (0x411600 - 0x2ec000), 0x414680 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 3", 0x414680 - (0x411600 - 0x2ec000), 0x414700 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 4", 0x414700 - (0x411600 - 0x2ec000), 0x414780 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Frozen 5", 0x414780 - (0x411600 - 0x2ec000), 0x414800 - (0x411600 - 0x2ec000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x411700 - (0x411600 - 0x2ec000), 0x411780 - (0x411600 - 0x2ec000) },
    { L"Unknown Mai Palette 2", 0x411800 - (0x411600 - 0x2ec000), 0x411880 - (0x411600 - 0x2ec000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_LEO_KICK_PALETTES[] =
{
    // Kick Leo
    // 0x414800
    // 0x417a00

    // Slash Transparency on Kick Leo Ranges
    // 0x290000
    // 0x293e20
    { L"Leo Kick",                          0x414800 - (0x414800 - 0x290000), 0x414880 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Kick Old Sword",                0x414900 - (0x414800 - 0x290000), 0x414980 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Kick Bronze Sword",             0x414980 - (0x414800 - 0x290000), 0x414A00 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Kick Steel Sword",              0x414A00 - (0x414800 - 0x290000), 0x414A80 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Kick Diamond Sword",            0x414A80 - (0x414800 - 0x290000), 0x414B00 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Kick Legendary Sword",          0x414B00 - (0x414800 - 0x290000), 0x414B80 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Kick Old Shield",               0x414B80 - (0x414800 - 0x290000), 0x414C00 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Kick Wooden Shield",            0x414C00 - (0x414800 - 0x290000), 0x414C80 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Kick Steel Shield",             0x414C80 - (0x414800 - 0x290000), 0x414D00 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Kick Diamond Shield",           0x414D00 - (0x414800 - 0x290000), 0x414D80 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Kick Legendary Shield",         0x414D80 - (0x414800 - 0x290000), 0x414E00 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Kick Fire Sword",               0x414E00 - (0x414800 - 0x290000), 0x414E80 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Kick Ice Sword",                0x414E80 - (0x414800 - 0x290000), 0x414F00 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Kick Lightning Sword",          0x414F00 - (0x414800 - 0x290000), 0x414F80 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Kick Battle Axe",               0x414F80 - (0x414800 - 0x290000), 0x415000 - (0x414800 - 0x290000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Kick Ultimate Guard Flash and Burn 1", 0x417200 - (0x414800 - 0x290000), 0x417280 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Burn 2", 0x417280 - (0x414800 - 0x290000), 0x417300 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 1", 0x417300 - (0x414800 - 0x290000), 0x417380 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 2", 0x417380 - (0x414800 - 0x290000), 0x417400 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 1", 0x417400 - (0x414800 - 0x290000), 0x417480 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 2", 0x417480 - (0x414800 - 0x290000), 0x417500 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 3", 0x417500 - (0x414800 - 0x290000), 0x417580 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 4", 0x417580 - (0x414800 - 0x290000), 0x417600 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 1", 0x417600 - (0x414800 - 0x290000), 0x417680 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 2", 0x417680 - (0x414800 - 0x290000), 0x417700 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 3", 0x417700 - (0x414800 - 0x290000), 0x417780 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 1", 0x417780 - (0x414800 - 0x290000), 0x417800 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 2", 0x417800 - (0x414800 - 0x290000), 0x417880 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 3", 0x417880 - (0x414800 - 0x290000), 0x417900 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 4", 0x417900 - (0x414800 - 0x290000), 0x417980 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 5", 0x417980 - (0x414800 - 0x290000), 0x417A00 - (0x414800 - 0x290000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu", 0x415780 - (0x414800 - 0x290000), 0x415800 - (0x414800 - 0x290000) },
    { L"Wisemen Mist 1", 0x415800 - (0x414800 - 0x290000), 0x415880 - (0x414800 - 0x290000) },
    { L"Wisemen Mist 2", 0x415880 - (0x414800 - 0x290000), 0x415900 - (0x414800 - 0x290000) },

    { L"Unknown Leo Palette", 0x415180 - (0x414800 - 0x290000), 0x415380 - (0x414800 - 0x290000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_LEO_KICK_PALETTES[] =
{
    // Hauzer Transparency on Kick Leo Ranges
    // 0x2f0000
    // 0x2f3e20
    { L"Leo Kick",                          0x414800 - (0x414800 - 0x2f0000), 0x414880 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Kick Old Sword",                0x414900 - (0x414800 - 0x2f0000), 0x414980 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Kick Bronze Sword",             0x414980 - (0x414800 - 0x2f0000), 0x414A00 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Kick Steel Sword",              0x414A00 - (0x414800 - 0x2f0000), 0x414A80 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Kick Diamond Sword",            0x414A80 - (0x414800 - 0x2f0000), 0x414B00 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Kick Legendary Sword",          0x414B00 - (0x414800 - 0x2f0000), 0x414B80 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Kick Old Shield",               0x414B80 - (0x414800 - 0x2f0000), 0x414C00 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Kick Wooden Shield",            0x414C00 - (0x414800 - 0x2f0000), 0x414C80 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Kick Steel Shield",             0x414C80 - (0x414800 - 0x2f0000), 0x414D00 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Kick Diamond Shield",           0x414D00 - (0x414800 - 0x2f0000), 0x414D80 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Kick Legendary Shield",         0x414D80 - (0x414800 - 0x2f0000), 0x414E00 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Kick Fire Sword",               0x414E00 - (0x414800 - 0x2f0000), 0x414E80 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Kick Ice Sword",                0x414E80 - (0x414800 - 0x2f0000), 0x414F00 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Kick Lightning Sword",          0x414F00 - (0x414800 - 0x2f0000), 0x414F80 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Kick Battle Axe",               0x414F80 - (0x414800 - 0x2f0000), 0x415000 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Kick Ultimate Guard Flash and Burn 1", 0x417200 - (0x414800 - 0x2f0000), 0x417280 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Burn 2", 0x417280 - (0x414800 - 0x2f0000), 0x417300 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 1", 0x417300 - (0x414800 - 0x2f0000), 0x417380 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 2", 0x417380 - (0x414800 - 0x2f0000), 0x417400 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 1", 0x417400 - (0x414800 - 0x2f0000), 0x417480 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 2", 0x417480 - (0x414800 - 0x2f0000), 0x417500 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 3", 0x417500 - (0x414800 - 0x2f0000), 0x417580 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 4", 0x417580 - (0x414800 - 0x2f0000), 0x417600 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 1", 0x417600 - (0x414800 - 0x2f0000), 0x417680 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 2", 0x417680 - (0x414800 - 0x2f0000), 0x417700 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 3", 0x417700 - (0x414800 - 0x2f0000), 0x417780 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 1", 0x417780 - (0x414800 - 0x2f0000), 0x417800 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 2", 0x417800 - (0x414800 - 0x2f0000), 0x417880 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 3", 0x417880 - (0x414800 - 0x2f0000), 0x417900 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 4", 0x417900 - (0x414800 - 0x2f0000), 0x417980 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 5", 0x417980 - (0x414800 - 0x2f0000), 0x417A00 - (0x414800 - 0x2f0000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu", 0x415780 - (0x414800 - 0x2f0000), 0x415800 - (0x414800 - 0x2f0000) },
    { L"Wisemen Mist 1", 0x415800 - (0x414800 - 0x2f0000), 0x415880 - (0x414800 - 0x2f0000) },
    { L"Wisemen Mist 2", 0x415880 - (0x414800 - 0x2f0000), 0x415900 - (0x414800 - 0x2f0000) },

    { L"Unknown Leo Palette", 0x415180 - (0x414800 - 0x2f0000), 0x415380 - (0x414800 - 0x2f0000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_LEO_KICK_PALETTES[] =
{
    // Hydron Transparency on Kick Leo Ranges
    // 0x2f4000
    // 0x2f7e20
    { L"Leo Kick",                          0x414800 - (0x414800 - 0x2f4000), 0x414880 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Kick Old Sword",                0x414900 - (0x414800 - 0x2f4000), 0x414980 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Kick Bronze Sword",             0x414980 - (0x414800 - 0x2f4000), 0x414A00 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Kick Steel Sword",              0x414A00 - (0x414800 - 0x2f4000), 0x414A80 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Kick Diamond Sword",            0x414A80 - (0x414800 - 0x2f4000), 0x414B00 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Kick Legendary Sword",          0x414B00 - (0x414800 - 0x2f4000), 0x414B80 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Kick Old Shield",               0x414B80 - (0x414800 - 0x2f4000), 0x414C00 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Kick Wooden Shield",            0x414C00 - (0x414800 - 0x2f4000), 0x414C80 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Kick Steel Shield",             0x414C80 - (0x414800 - 0x2f4000), 0x414D00 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Kick Diamond Shield",           0x414D00 - (0x414800 - 0x2f4000), 0x414D80 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Kick Legendary Shield",         0x414D80 - (0x414800 - 0x2f4000), 0x414E00 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Kick Fire Sword",               0x414E00 - (0x414800 - 0x2f4000), 0x414E80 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Kick Ice Sword",                0x414E80 - (0x414800 - 0x2f4000), 0x414F00 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Kick Lightning Sword",          0x414F00 - (0x414800 - 0x2f4000), 0x414F80 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Kick Battle Axe",               0x414F80 - (0x414800 - 0x2f4000), 0x415000 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Kick Ultimate Guard Flash and Burn 1", 0x417200 - (0x414800 - 0x2f4000), 0x417280 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Burn 2", 0x417280 - (0x414800 - 0x2f4000), 0x417300 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 1", 0x417300 - (0x414800 - 0x2f4000), 0x417380 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 2", 0x417380 - (0x414800 - 0x2f4000), 0x417400 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 1", 0x417400 - (0x414800 - 0x2f4000), 0x417480 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 2", 0x417480 - (0x414800 - 0x2f4000), 0x417500 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 3", 0x417500 - (0x414800 - 0x2f4000), 0x417580 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 4", 0x417580 - (0x414800 - 0x2f4000), 0x417600 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 1", 0x417600 - (0x414800 - 0x2f4000), 0x417680 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 2", 0x417680 - (0x414800 - 0x2f4000), 0x417700 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 3", 0x417700 - (0x414800 - 0x2f4000), 0x417780 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 1", 0x417780 - (0x414800 - 0x2f4000), 0x417800 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 2", 0x417800 - (0x414800 - 0x2f4000), 0x417880 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 3", 0x417880 - (0x414800 - 0x2f4000), 0x417900 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 4", 0x417900 - (0x414800 - 0x2f4000), 0x417980 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 5", 0x417980 - (0x414800 - 0x2f4000), 0x417A00 - (0x414800 - 0x2f4000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu", 0x415780 - (0x414800 - 0x2f4000), 0x415800 - (0x414800 - 0x2f4000) },
    { L"Wisemen Mist 1", 0x415800 - (0x414800 - 0x2f4000), 0x415880 - (0x414800 - 0x2f4000) },
    { L"Wisemen Mist 2", 0x415880 - (0x414800 - 0x2f4000), 0x415900 - (0x414800 - 0x2f4000) },

    { L"Unknown Leo Palette", 0x415180 - (0x414800 - 0x2f4000), 0x415380 - (0x414800 - 0x2f4000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_LEO_KICK_PALETTES[] =
{
    // Ravange Transparency on Kick Leo Ranges
    // 0x2f8000
    // 0x2fbe20
    { L"Leo Kick",                          0x414800 - (0x414800 - 0x2f8000), 0x414880 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Kick Old Sword",                0x414900 - (0x414800 - 0x2f8000), 0x414980 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Kick Bronze Sword",             0x414980 - (0x414800 - 0x2f8000), 0x414A00 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Kick Steel Sword",              0x414A00 - (0x414800 - 0x2f8000), 0x414A80 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Kick Diamond Sword",            0x414A80 - (0x414800 - 0x2f8000), 0x414B00 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Kick Legendary Sword",          0x414B00 - (0x414800 - 0x2f8000), 0x414B80 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Kick Old Shield",               0x414B80 - (0x414800 - 0x2f8000), 0x414C00 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Kick Wooden Shield",            0x414C00 - (0x414800 - 0x2f8000), 0x414C80 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Kick Steel Shield",             0x414C80 - (0x414800 - 0x2f8000), 0x414D00 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Kick Diamond Shield",           0x414D00 - (0x414800 - 0x2f8000), 0x414D80 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Kick Legendary Shield",         0x414D80 - (0x414800 - 0x2f8000), 0x414E00 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Kick Fire Sword",               0x414E00 - (0x414800 - 0x2f8000), 0x414E80 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Kick Ice Sword",                0x414E80 - (0x414800 - 0x2f8000), 0x414F00 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Kick Lightning Sword",          0x414F00 - (0x414800 - 0x2f8000), 0x414F80 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Kick Battle Axe",               0x414F80 - (0x414800 - 0x2f8000), 0x415000 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Kick Ultimate Guard Flash and Burn 1", 0x417200 - (0x414800 - 0x2f8000), 0x417280 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Burn 2", 0x417280 - (0x414800 - 0x2f8000), 0x417300 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 1", 0x417300 - (0x414800 - 0x2f8000), 0x417380 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 2", 0x417380 - (0x414800 - 0x2f8000), 0x417400 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 1", 0x417400 - (0x414800 - 0x2f8000), 0x417480 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 2", 0x417480 - (0x414800 - 0x2f8000), 0x417500 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 3", 0x417500 - (0x414800 - 0x2f8000), 0x417580 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 4", 0x417580 - (0x414800 - 0x2f8000), 0x417600 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 1", 0x417600 - (0x414800 - 0x2f8000), 0x417680 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 2", 0x417680 - (0x414800 - 0x2f8000), 0x417700 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 3", 0x417700 - (0x414800 - 0x2f8000), 0x417780 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 1", 0x417780 - (0x414800 - 0x2f8000), 0x417800 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 2", 0x417800 - (0x414800 - 0x2f8000), 0x417880 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 3", 0x417880 - (0x414800 - 0x2f8000), 0x417900 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 4", 0x417900 - (0x414800 - 0x2f8000), 0x417980 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 5", 0x417980 - (0x414800 - 0x2f8000), 0x417A00 - (0x414800 - 0x2f8000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu", 0x415780 - (0x414800 - 0x2f8000), 0x415800 - (0x414800 - 0x2f8000) },
    { L"Wisemen Mist 1", 0x415800 - (0x414800 - 0x2f8000), 0x415880 - (0x414800 - 0x2f8000) },
    { L"Wisemen Mist 2", 0x415880 - (0x414800 - 0x2f8000), 0x415900 - (0x414800 - 0x2f8000) },

    { L"Unknown Leo Palette", 0x415180 - (0x414800 - 0x2f8000), 0x415380 - (0x414800 - 0x2f8000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_LEO_KICK_PALETTES[] =
{
    // Blade Transparency on Kick Leo Ranges
    // 0x2fc000
    // 0x2ffe20
    { L"Leo Kick",                          0x414800 - (0x414800 - 0x2fc000), 0x414880 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x0 },
    { L"Leo Kick Old Sword",                0x414900 - (0x414800 - 0x2fc000), 0x414980 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x09 },
    { L"Leo Kick Bronze Sword",             0x414980 - (0x414800 - 0x2fc000), 0x414A00 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x02 },
    { L"Leo Kick Steel Sword",              0x414A00 - (0x414800 - 0x2fc000), 0x414A80 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x0a },
    { L"Leo Kick Diamond Sword",            0x414A80 - (0x414800 - 0x2fc000), 0x414B00 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x03 },
    { L"Leo Kick Legendary Sword",          0x414B00 - (0x414800 - 0x2fc000), 0x414B80 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x07 },
    { L"Leo Kick Old Shield",               0x414B80 - (0x414800 - 0x2fc000), 0x414C00 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x0b },
    { L"Leo Kick Wooden Shield",            0x414C00 - (0x414800 - 0x2fc000), 0x414C80 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x0c },
    { L"Leo Kick Steel Shield",             0x414C80 - (0x414800 - 0x2fc000), 0x414D00 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x0d },
    { L"Leo Kick Diamond Shield",           0x414D00 - (0x414800 - 0x2fc000), 0x414D80 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x0e },
    { L"Leo Kick Legendary Shield",         0x414D80 - (0x414800 - 0x2fc000), 0x414E00 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x06 },
    { L"Leo Kick Fire Sword",               0x414E00 - (0x414800 - 0x2fc000), 0x414E80 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x04 },
    { L"Leo Kick Ice Sword",                0x414E80 - (0x414800 - 0x2fc000), 0x414F00 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x05 },
    { L"Leo Kick Lightning Sword",          0x414F00 - (0x414800 - 0x2fc000), 0x414F80 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x08 },
    { L"Leo Kick Battle Axe",               0x414F80 - (0x414800 - 0x2fc000), 0x415000 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo, 0x01 },

    { L"Leo Kick Ultimate Guard Flash and Burn 1", 0x417200 - (0x414800 - 0x2fc000), 0x417280 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Burn 2", 0x417280 - (0x414800 - 0x2fc000), 0x417300 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 1", 0x417300 - (0x414800 - 0x2fc000), 0x417380 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Shock 2", 0x417380 - (0x414800 - 0x2fc000), 0x417400 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 1", 0x417400 - (0x414800 - 0x2fc000), 0x417480 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 2", 0x417480 - (0x414800 - 0x2fc000), 0x417500 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 3", 0x417500 - (0x414800 - 0x2fc000), 0x417580 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Poisoned 4", 0x417580 - (0x414800 - 0x2fc000), 0x417600 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 1", 0x417600 - (0x414800 - 0x2fc000), 0x417680 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 2", 0x417680 - (0x414800 - 0x2fc000), 0x417700 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Petrified 3", 0x417700 - (0x414800 - 0x2fc000), 0x417780 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 1", 0x417780 - (0x414800 - 0x2fc000), 0x417800 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 2", 0x417800 - (0x414800 - 0x2fc000), 0x417880 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 3", 0x417880 - (0x414800 - 0x2fc000), 0x417900 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 4", 0x417900 - (0x414800 - 0x2fc000), 0x417980 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },
    { L"Leo Kick Frozen 5", 0x417980 - (0x414800 - 0x2fc000), 0x417A00 - (0x414800 - 0x2fc000), indexRedEarthSprites_Leo },

    { L"Vigo, Valo & Vestu", 0x415780 - (0x414800 - 0x2fc000), 0x415800 - (0x414800 - 0x2fc000) },
    { L"Wisemen Mist 1", 0x415800 - (0x414800 - 0x2fc000), 0x415880 - (0x414800 - 0x2fc000) },
    { L"Wisemen Mist 2", 0x415880 - (0x414800 - 0x2fc000), 0x415900 - (0x414800 - 0x2fc000) },

    { L"Unknown Leo Palette", 0x415180 - (0x414800 - 0x2fc000), 0x415380 - (0x414800 - 0x2fc000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_KENJI_KICK_PALETTES[] =
{
    // Kick Kenji
    // 0x417a00
    // 0x41ac00

    // Slash Transparency on Kick Kenji Ranges
    // 0x294000
    // 0x297200
    { L"Kenji Kick",                             0x417A00 - (0x417A00 - 0x294000), 0x417A80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },
    { L"Hat intro",                              0x417b00 - (0x417A00 - 0x294000), 0x417b80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Chains, Kunai",                          0x417b80 - (0x417A00 - 0x294000), 0x417c00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x417c00 - (0x417A00 - 0x294000), 0x417c80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x417c80 - (0x417A00 - 0x294000), 0x417d00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x417d00 - (0x417A00 - 0x294000), 0x417d80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x417d80 - (0x417A00 - 0x294000), 0x417e00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x417e00 - (0x417A00 - 0x294000), 0x417e80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x417f00 - (0x417A00 - 0x294000), 0x417f80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x417e80 - (0x417A00 - 0x294000), 0x417f00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x417f80 - (0x417A00 - 0x294000), 0x418000 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x08 },

    { L"Kunai Throwing Shine (1/3)",             0x418700 - (0x417A00 - 0x294000), 0x418780 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x418680 - (0x417A00 - 0x294000), 0x418700 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x418600 - (0x417A00 - 0x294000), 0x418680 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x417A80 - (0x417A00 - 0x294000), 0x417B00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Kick Ultimate Guard Flash and Burn 1", 0x41A400 - (0x417A00 - 0x294000), 0x41A480 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Burn 2", 0x41A480 - (0x417A00 - 0x294000), 0x41A500 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 1", 0x41A500 - (0x417A00 - 0x294000), 0x41A580 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 2", 0x41A580 - (0x417A00 - 0x294000), 0x41A600 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 1", 0x41A600 - (0x417A00 - 0x294000), 0x41A680 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 2", 0x41A680 - (0x417A00 - 0x294000), 0x41A700 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 3", 0x41A700 - (0x417A00 - 0x294000), 0x41A780 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 4", 0x41A780 - (0x417A00 - 0x294000), 0x41A800 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 1", 0x41A800 - (0x417A00 - 0x294000), 0x41A880 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 2", 0x41A880 - (0x417A00 - 0x294000), 0x41A900 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 3", 0x41A900 - (0x417A00 - 0x294000), 0x41A980 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 1", 0x41A980 - (0x417A00 - 0x294000), 0x41AA00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 2", 0x41AA00 - (0x417A00 - 0x294000), 0x41AA80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 3", 0x41AA80 - (0x417A00 - 0x294000), 0x41AB00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 4", 0x41AB00 - (0x417A00 - 0x294000), 0x41AB80 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 5", 0x41AB80 - (0x417A00 - 0x294000), 0x41AC00 - (0x417A00 - 0x294000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x4187e0", 0x4187e0 - (0x417A00 - 0x294000), 0x4189e0 - (0x417A00 - 0x294000) },
    { L"Unknown Kenji Range 1 (2/2) 0x4189e0", 0x4189e0 - (0x417A00 - 0x294000), 0x418a00 - (0x417A00 - 0x294000) },
    { L"Unknown Kenji Range 2 (1/2) 0x418e00", 0x418e00 - (0x417A00 - 0x294000), 0x419000 - (0x417A00 - 0x294000) },
    { L"Unknown Kenji Range 2 (2/2) 0x419000", 0x419000 - (0x417A00 - 0x294000), 0x419120 - (0x417A00 - 0x294000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_KENJI_KICK_PALETTES[] =
{
    // Hauzer Transparency on Kick Kenji Ranges
    // 0x300000
    // 0x303200
    { L"Kenji Kick",                             0x417A00 - (0x417A00 - 0x300000), 0x417A80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },
    { L"Hat intro",                              0x417b00 - (0x417A00 - 0x300000), 0x417b80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Chains, Kunai",                          0x417b80 - (0x417A00 - 0x300000), 0x417c00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x417c00 - (0x417A00 - 0x300000), 0x417c80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x417c80 - (0x417A00 - 0x300000), 0x417d00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x417d00 - (0x417A00 - 0x300000), 0x417d80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x417d80 - (0x417A00 - 0x300000), 0x417e00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x417e00 - (0x417A00 - 0x300000), 0x417e80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x417f00 - (0x417A00 - 0x300000), 0x417f80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x417e80 - (0x417A00 - 0x300000), 0x417f00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x417f80 - (0x417A00 - 0x300000), 0x418000 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x08 },

    { L"Kunai Throwing Shine (1/3)",             0x418700 - (0x417A00 - 0x300000), 0x418780 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x418680 - (0x417A00 - 0x300000), 0x418700 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x418600 - (0x417A00 - 0x300000), 0x418680 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x417A80 - (0x417A00 - 0x300000), 0x417B00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Kick Ultimate Guard Flash and Burn 1", 0x41A400 - (0x417A00 - 0x300000), 0x41A480 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Burn 2", 0x41A480 - (0x417A00 - 0x300000), 0x41A500 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 1", 0x41A500 - (0x417A00 - 0x300000), 0x41A580 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 2", 0x41A580 - (0x417A00 - 0x300000), 0x41A600 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 1", 0x41A600 - (0x417A00 - 0x300000), 0x41A680 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 2", 0x41A680 - (0x417A00 - 0x300000), 0x41A700 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 3", 0x41A700 - (0x417A00 - 0x300000), 0x41A780 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 4", 0x41A780 - (0x417A00 - 0x300000), 0x41A800 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 1", 0x41A800 - (0x417A00 - 0x300000), 0x41A880 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 2", 0x41A880 - (0x417A00 - 0x300000), 0x41A900 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 3", 0x41A900 - (0x417A00 - 0x300000), 0x41A980 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 1", 0x41A980 - (0x417A00 - 0x300000), 0x41AA00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 2", 0x41AA00 - (0x417A00 - 0x300000), 0x41AA80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 3", 0x41AA80 - (0x417A00 - 0x300000), 0x41AB00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 4", 0x41AB00 - (0x417A00 - 0x300000), 0x41AB80 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 5", 0x41AB80 - (0x417A00 - 0x300000), 0x41AC00 - (0x417A00 - 0x300000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x4187e0", 0x4187e0 - (0x417A00 - 0x300000), 0x4189e0 - (0x417A00 - 0x300000) },
    { L"Unknown Kenji Range 1 (2/2) 0x4189e0", 0x4189e0 - (0x417A00 - 0x300000), 0x418a00 - (0x417A00 - 0x300000) },
    { L"Unknown Kenji Range 2 (1/2) 0x418e00", 0x418e00 - (0x417A00 - 0x300000), 0x419000 - (0x417A00 - 0x300000) },
    { L"Unknown Kenji Range 2 (2/2) 0x419000", 0x419000 - (0x417A00 - 0x300000), 0x419120 - (0x417A00 - 0x300000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_KENJI_KICK_PALETTES[] =
{
    // Hydron Transparency on Kick Kenji Ranges
    // 0x304000
    // 0x307200
    { L"Kenji Kick",                             0x417A00 - (0x417A00 - 0x304000), 0x417A80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },
    { L"Hat intro",                              0x417b00 - (0x417A00 - 0x304000), 0x417b80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Chains, Kunai",                          0x417b80 - (0x417A00 - 0x304000), 0x417c00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x417c00 - (0x417A00 - 0x304000), 0x417c80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x417c80 - (0x417A00 - 0x304000), 0x417d00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x417d00 - (0x417A00 - 0x304000), 0x417d80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x417d80 - (0x417A00 - 0x304000), 0x417e00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x417e00 - (0x417A00 - 0x304000), 0x417e80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x417f00 - (0x417A00 - 0x304000), 0x417f80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x417e80 - (0x417A00 - 0x304000), 0x417f00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x417f80 - (0x417A00 - 0x304000), 0x418000 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x08 },

    { L"Kunai Throwing Shine (1/3)",             0x418700 - (0x417A00 - 0x304000), 0x418780 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x418680 - (0x417A00 - 0x304000), 0x418700 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x418600 - (0x417A00 - 0x304000), 0x418680 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x417A80 - (0x417A00 - 0x304000), 0x417B00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Kick Ultimate Guard Flash and Burn 1", 0x41A400 - (0x417A00 - 0x304000), 0x41A480 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Burn 2", 0x41A480 - (0x417A00 - 0x304000), 0x41A500 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 1", 0x41A500 - (0x417A00 - 0x304000), 0x41A580 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 2", 0x41A580 - (0x417A00 - 0x304000), 0x41A600 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 1", 0x41A600 - (0x417A00 - 0x304000), 0x41A680 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 2", 0x41A680 - (0x417A00 - 0x304000), 0x41A700 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 3", 0x41A700 - (0x417A00 - 0x304000), 0x41A780 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 4", 0x41A780 - (0x417A00 - 0x304000), 0x41A800 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 1", 0x41A800 - (0x417A00 - 0x304000), 0x41A880 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 2", 0x41A880 - (0x417A00 - 0x304000), 0x41A900 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 3", 0x41A900 - (0x417A00 - 0x304000), 0x41A980 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 1", 0x41A980 - (0x417A00 - 0x304000), 0x41AA00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 2", 0x41AA00 - (0x417A00 - 0x304000), 0x41AA80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 3", 0x41AA80 - (0x417A00 - 0x304000), 0x41AB00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 4", 0x41AB00 - (0x417A00 - 0x304000), 0x41AB80 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 5", 0x41AB80 - (0x417A00 - 0x304000), 0x41AC00 - (0x417A00 - 0x304000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x4187e0", 0x4187e0 - (0x417A00 - 0x304000), 0x4189e0 - (0x417A00 - 0x304000) },
    { L"Unknown Kenji Range 1 (2/2) 0x4189e0", 0x4189e0 - (0x417A00 - 0x304000), 0x418a00 - (0x417A00 - 0x304000) },
    { L"Unknown Kenji Range 2 (1/2) 0x418e00", 0x418e00 - (0x417A00 - 0x304000), 0x419000 - (0x417A00 - 0x304000) },
    { L"Unknown Kenji Range 2 (2/2) 0x419000", 0x419000 - (0x417A00 - 0x304000), 0x419120 - (0x417A00 - 0x304000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_KENJI_KICK_PALETTES[] =
{
    // Ravange Transparency on Kick Kenji Ranges
    // 0x308000
    // 0x30b200
    { L"Kenji Kick",                             0x417A00 - (0x417A00 - 0x308000), 0x417A80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },
    { L"Hat intro",                              0x417b00 - (0x417A00 - 0x308000), 0x417b80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Chains, Kunai",                          0x417b80 - (0x417A00 - 0x308000), 0x417c00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x417c00 - (0x417A00 - 0x308000), 0x417c80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x417c80 - (0x417A00 - 0x308000), 0x417d00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x417d00 - (0x417A00 - 0x308000), 0x417d80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x417d80 - (0x417A00 - 0x308000), 0x417e00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x417e00 - (0x417A00 - 0x308000), 0x417e80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x417f00 - (0x417A00 - 0x308000), 0x417f80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x417e80 - (0x417A00 - 0x308000), 0x417f00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x417f80 - (0x417A00 - 0x308000), 0x418000 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x08 },

    { L"Kunai Throwing Shine (1/3)",             0x418700 - (0x417A00 - 0x308000), 0x418780 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x418680 - (0x417A00 - 0x308000), 0x418700 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x418600 - (0x417A00 - 0x308000), 0x418680 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x417A80 - (0x417A00 - 0x308000), 0x417B00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Kick Ultimate Guard Flash and Burn 1", 0x41A400 - (0x417A00 - 0x308000), 0x41A480 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Burn 2", 0x41A480 - (0x417A00 - 0x308000), 0x41A500 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 1", 0x41A500 - (0x417A00 - 0x308000), 0x41A580 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 2", 0x41A580 - (0x417A00 - 0x308000), 0x41A600 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 1", 0x41A600 - (0x417A00 - 0x308000), 0x41A680 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 2", 0x41A680 - (0x417A00 - 0x308000), 0x41A700 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 3", 0x41A700 - (0x417A00 - 0x308000), 0x41A780 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 4", 0x41A780 - (0x417A00 - 0x308000), 0x41A800 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 1", 0x41A800 - (0x417A00 - 0x308000), 0x41A880 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 2", 0x41A880 - (0x417A00 - 0x308000), 0x41A900 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 3", 0x41A900 - (0x417A00 - 0x308000), 0x41A980 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 1", 0x41A980 - (0x417A00 - 0x308000), 0x41AA00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 2", 0x41AA00 - (0x417A00 - 0x308000), 0x41AA80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 3", 0x41AA80 - (0x417A00 - 0x308000), 0x41AB00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 4", 0x41AB00 - (0x417A00 - 0x308000), 0x41AB80 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 5", 0x41AB80 - (0x417A00 - 0x308000), 0x41AC00 - (0x417A00 - 0x308000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x4187e0", 0x4187e0 - (0x417A00 - 0x308000), 0x4189e0 - (0x417A00 - 0x308000) },
    { L"Unknown Kenji Range 1 (2/2) 0x4189e0", 0x4189e0 - (0x417A00 - 0x308000), 0x418a00 - (0x417A00 - 0x308000) },
    { L"Unknown Kenji Range 2 (1/2) 0x418e00", 0x418e00 - (0x417A00 - 0x308000), 0x419000 - (0x417A00 - 0x308000) },
    { L"Unknown Kenji Range 2 (2/2) 0x419000", 0x419000 - (0x417A00 - 0x308000), 0x419120 - (0x417A00 - 0x308000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_KENJI_KICK_PALETTES[] =
{
    // Blade Transparency on Kick Kenji Ranges
    // 0x30c000
    // 0x30f200
    { L"Kenji Kick",                             0x417A00 - (0x417A00 - 0x30c000), 0x417A80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x0, &pairNextAndNext },
    { L"Hat intro",                              0x417b00 - (0x417A00 - 0x30c000), 0x417b80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x02 },
    { L"Chains, Kunai",                          0x417b80 - (0x417A00 - 0x30c000), 0x417c00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x417c00 - (0x417A00 - 0x30c000), 0x417c80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x417c80 - (0x417A00 - 0x30c000), 0x417d00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport",     0x417d00 - (0x417A00 - 0x30c000), 0x417d80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x417d80 - (0x417A00 - 0x30c000), 0x417e00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x03 },
    { L"HCF.4/5/6 Slash",                        0x417e00 - (0x417A00 - 0x30c000), 0x417e80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x417f00 - (0x417A00 - 0x30c000), 0x417f80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x417e80 - (0x417A00 - 0x30c000), 0x417f00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x417f80 - (0x417A00 - 0x30c000), 0x418000 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x08 },

    { L"Kunai Throwing Shine (1/3)",             0x418700 - (0x417A00 - 0x30c000), 0x418780 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x418680 - (0x417A00 - 0x30c000), 0x418700 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x418600 - (0x417A00 - 0x30c000), 0x418680 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x01 },

    { L"Kenji Sword Slash", 0x417A80 - (0x417A00 - 0x30c000), 0x417B00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji, 0x24 },

    { L"Kenji Kick Ultimate Guard Flash and Burn 1", 0x41A400 - (0x417A00 - 0x30c000), 0x41A480 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Burn 2", 0x41A480 - (0x417A00 - 0x30c000), 0x41A500 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 1", 0x41A500 - (0x417A00 - 0x30c000), 0x41A580 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Shock 2", 0x41A580 - (0x417A00 - 0x30c000), 0x41A600 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 1", 0x41A600 - (0x417A00 - 0x30c000), 0x41A680 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 2", 0x41A680 - (0x417A00 - 0x30c000), 0x41A700 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 3", 0x41A700 - (0x417A00 - 0x30c000), 0x41A780 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Poisoned 4", 0x41A780 - (0x417A00 - 0x30c000), 0x41A800 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 1", 0x41A800 - (0x417A00 - 0x30c000), 0x41A880 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 2", 0x41A880 - (0x417A00 - 0x30c000), 0x41A900 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Petrified 3", 0x41A900 - (0x417A00 - 0x30c000), 0x41A980 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 1", 0x41A980 - (0x417A00 - 0x30c000), 0x41AA00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 2", 0x41AA00 - (0x417A00 - 0x30c000), 0x41AA80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 3", 0x41AA80 - (0x417A00 - 0x30c000), 0x41AB00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 4", 0x41AB00 - (0x417A00 - 0x30c000), 0x41AB80 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },
    { L"Kenji Kick Frozen 5", 0x41AB80 - (0x417A00 - 0x30c000), 0x41AC00 - (0x417A00 - 0x30c000), indexRedEarthSprites_Kenji },

    { L"Unknown Kenji Range 1 (1/2) 0x4187e0", 0x4187e0 - (0x417A00 - 0x30c000), 0x4189e0 - (0x417A00 - 0x30c000) },
    { L"Unknown Kenji Range 1 (2/2) 0x4189e0", 0x4189e0 - (0x417A00 - 0x30c000), 0x418a00 - (0x417A00 - 0x30c000) },
    { L"Unknown Kenji Range 2 (1/2) 0x418e00", 0x418e00 - (0x417A00 - 0x30c000), 0x419000 - (0x417A00 - 0x30c000) },
    { L"Unknown Kenji Range 2 (2/2) 0x419000", 0x419000 - (0x417A00 - 0x30c000), 0x419120 - (0x417A00 - 0x30c000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_TESSA_KICK_PALETTES[] =
{
    // Kick Tessa
    // 0x41ac00
    // 0x41de00

    // Slash Transparency on Kick Tessa Ranges
    // 0x298000
    // 0x29b200
    { L"Tessa Kick", 0x41AC00 - (0x41ac00 - 0x298000), 0x41AC80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Kick Changing Pal", 0x41AC80 - (0x41ac00 - 0x298000), 0x41AD00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Kick Bottled Ice", 0x41AD00 - (0x41ac00 - 0x298000), 0x41AD80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Kick Mage Shield Block", 0x40EA00 + 0xc800 - (0x41ac00 - 0x298000), 0x40EA80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Kick Mage Shield Preblock", 0x40EA80 + 0xc800 - (0x41ac00 - 0x298000), 0x40EB00 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Kick Al (Aru) Cat", 0x40E780 + 0xc800 - (0x41ac00 - 0x298000), 0x40E800 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Al (Aru) Cat Returning", 0x40E800 + 0xc800 - (0x41ac00 - 0x298000), 0x40E880 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ivan (Ibun) Cat", 0x40E880 + 0xc800 - (0x41ac00 - 0x298000), 0x40E900 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat Returning", 0x40E900 + 0xc800 - (0x41ac00 - 0x298000), 0x40E980 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ice", 0x40E980 + 0xc800 - (0x41ac00 - 0x298000), 0x40EA00 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Kick Reverie Sword", 0x40EB80 + 0xc800 - (0x41ac00 - 0x298000), 0x40EC00 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Kick Staffs", 0x40EC00 + 0xc800 - (0x41ac00 - 0x298000), 0x40EC80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Kaeru (Frog)", 0x40EE80 + 0xc800 - (0x41ac00 - 0x298000), 0x40EF00 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 + 0xc800 - (0x41ac00 - 0x298000), 0x40F000 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Suitcat", 0x40FF00 + 0xc800 - (0x41ac00 - 0x298000), 0x40FF80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Suitcat (Mustard)", 0x40FF80 + 0xc800 - (0x41ac00 - 0x298000), 0x410000 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Chakra Wave", 0x40EF00 + 0xc800 - (0x41ac00 - 0x298000), 0x40EF80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Kick Cannon Magic Pattern", 0x40E700 + 0xc800 - (0x41ac00 - 0x298000), 0x40E780 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Kick Cannon Transition", 0x40F880 + 0xc800 - (0x41ac00 - 0x298000), 0x40F900 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Kick Hyper Cannon (Superball and Winscreen)", 0x40F900 + 0xc800 - (0x41ac00 - 0x298000), 0x40F980 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Kick Glace Cannon", 0x40F980 + 0xc800 - (0x41ac00 - 0x298000), 0x40FA00 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Flamma Cannon", 0x40FA00 + 0xc800 - (0x41ac00 - 0x298000), 0x40FA80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Electron Cannon", 0x40FA80 + 0xc800 - (0x41ac00 - 0x298000), 0x40FB00 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Death Phenomenon - On Hit", 0x40FD80 + 0xc800 - (0x41ac00 - 0x298000), 0x40FE00 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Kick Death Phenomenon - On Whiff", 0x40FE00 + 0xc800 - (0x41ac00 - 0x298000), 0x40FE80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 + 0xc800 - (0x41ac00 - 0x298000), 0x40F800 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Manot Arm", 0x40F200 + 0xc800 - (0x41ac00 - 0x298000), 0x40F280 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Kick GC/Pursuit Wrecking Ball", 0x40F300 + 0xc800 - (0x41ac00 - 0x298000), 0x40F380 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Kick Grab Saw", 0x40F080 + 0xc800 - (0x41ac00 - 0x298000), 0x40F100 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Kick GC/Grab/Pursuit Lever", 0x40F100 + 0xc800 - (0x41ac00 - 0x298000), 0x40F180 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Kick Ultimate Guard Wall and Lever", 0x40EB00 + 0xc800 - (0x41ac00 - 0x298000), 0x40EB80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Kick Ultimate Guard Batteries", 0x40EE00 + 0xc800 - (0x41ac00 - 0x298000), 0x40EE80 + 0xc800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Kick Ultimate Counter Chain", 0x41c300 - (0x41ac00 - 0x298000), 0x41c380 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x41bb80 - (0x41ac00 - 0x298000), 0x41bc00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x41bc00 - (0x41ac00 - 0x298000), 0x41bc80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x41bc80 - (0x41ac00 - 0x298000), 0x41bd00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x41bd00 - (0x41ac00 - 0x298000), 0x41bd80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x41bd80 - (0x41ac00 - 0x298000), 0x41be00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x41be00 - (0x41ac00 - 0x298000), 0x41be80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x41ba80 - (0x41ac00 - 0x298000), 0x41bb00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Kick Ultimate Guard Flash and Burn 1", 0x41D600 - (0x41ac00 - 0x298000), 0x41D680 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Burn 2", 0x41D680 - (0x41ac00 - 0x298000), 0x41D700 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 1", 0x41D700 - (0x41ac00 - 0x298000), 0x41D780 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 2", 0x41D780 - (0x41ac00 - 0x298000), 0x41D800 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 1", 0x41D800 - (0x41ac00 - 0x298000), 0x41D880 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 2", 0x41D880 - (0x41ac00 - 0x298000), 0x41D900 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 3", 0x41D900 - (0x41ac00 - 0x298000), 0x41D980 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 4", 0x41D980 - (0x41ac00 - 0x298000), 0x41DA00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 1", 0x41DA00 - (0x41ac00 - 0x298000), 0x41DA80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 2", 0x41DA80 - (0x41ac00 - 0x298000), 0x41DB00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 3", 0x41DB00 - (0x41ac00 - 0x298000), 0x41DB80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 1", 0x41DB80 - (0x41ac00 - 0x298000), 0x41DC00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 2", 0x41DC00 - (0x41ac00 - 0x298000), 0x41DC80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 3", 0x41DC80 - (0x41ac00 - 0x298000), 0x41DD00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 4", 0x41DD00 - (0x41ac00 - 0x298000), 0x41DD80 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 5", 0x41DD80 - (0x41ac00 - 0x298000), 0x41DE00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0 },

    { L"Kick Palette Cartur", 0x41ad80 - (0x41ac00 - 0x298000), 0x41ae00 - (0x41ac00 - 0x298000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x41ae00 - (0x41ac00 - 0x298000), 0x41af00 - (0x41ac00 - 0x298000) },
    { L"Unknown Tessa Palette 2", 0x41b980 - (0x41ac00 - 0x298000), 0x41ba00 - (0x41ac00 - 0x298000) },
    { L"Unknown Tessa Palette 3", 0x41c680 - (0x41ac00 - 0x298000), 0x41c700 - (0x41ac00 - 0x298000) },
    { L"Unknown Tessa Range 1", 0x41c380 - (0x41ac00 - 0x298000), 0x41c580 - (0x41ac00 - 0x298000) },
    { L"Unknown Tessa Range 2 (1/4) 0x41c800", 0x41c800 - (0x41ac00 - 0x298000), 0x41ca00 - (0x41ac00 - 0x298000) },
    { L"Unknown Tessa Range 2 (2/4) 0x41ca00", 0x41ca00 - (0x41ac00 - 0x298000), 0x41cc00 - (0x41ac00 - 0x298000) },
    { L"Unknown Tessa Range 2 (3/4) 0x41cc00", 0x41cc00 - (0x41ac00 - 0x298000), 0x41ce00 - (0x41ac00 - 0x298000) },
    { L"Unknown Tessa Range 2 (4/4) 0x41ce00", 0x41ce00 - (0x41ac00 - 0x298000), 0x41ce80 - (0x41ac00 - 0x298000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_TESSA_KICK_PALETTES[] =
{
    // Hauzer Transparency on Kick Tessa Ranges
    // 0x310000
    // 0x313200
    { L"Tessa Kick", 0x41AC00 - (0x41ac00 - 0x310000), 0x41AC80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Kick Changing Pal", 0x41AC80 - (0x41ac00 - 0x310000), 0x41AD00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Kick Bottled Ice", 0x41AD00 - (0x41ac00 - 0x310000), 0x41AD80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Kick Mage Shield Block", 0x40EA00 + 0xc800 - (0x41ac00 - 0x310000), 0x40EA80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Kick Mage Shield Preblock", 0x40EA80 + 0xc800 - (0x41ac00 - 0x310000), 0x40EB00 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Kick Al (Aru) Cat", 0x40E780 + 0xc800 - (0x41ac00 - 0x310000), 0x40E800 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Al (Aru) Cat Returning", 0x40E800 + 0xc800 - (0x41ac00 - 0x310000), 0x40E880 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ivan (Ibun) Cat", 0x40E880 + 0xc800 - (0x41ac00 - 0x310000), 0x40E900 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat Returning", 0x40E900 + 0xc800 - (0x41ac00 - 0x310000), 0x40E980 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ice", 0x40E980 + 0xc800 - (0x41ac00 - 0x310000), 0x40EA00 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Kick Reverie Sword", 0x40EB80 + 0xc800 - (0x41ac00 - 0x310000), 0x40EC00 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Kick Staffs", 0x40EC00 + 0xc800 - (0x41ac00 - 0x310000), 0x40EC80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Kaeru (Frog)", 0x40EE80 + 0xc800 - (0x41ac00 - 0x310000), 0x40EF00 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 + 0xc800 - (0x41ac00 - 0x310000), 0x40F000 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Suitcat", 0x40FF00 + 0xc800 - (0x41ac00 - 0x310000), 0x40FF80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Suitcat (Mustard)", 0x40FF80 + 0xc800 - (0x41ac00 - 0x310000), 0x410000 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Chakra Wave", 0x40EF00 + 0xc800 - (0x41ac00 - 0x310000), 0x40EF80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Kick Cannon Magic Pattern", 0x40E700 + 0xc800 - (0x41ac00 - 0x310000), 0x40E780 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Kick Cannon Transition", 0x40F880 + 0xc800 - (0x41ac00 - 0x310000), 0x40F900 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Kick Hyper Cannon (Superball and Winscreen)", 0x40F900 + 0xc800 - (0x41ac00 - 0x310000), 0x40F980 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Kick Glace Cannon", 0x40F980 + 0xc800 - (0x41ac00 - 0x310000), 0x40FA00 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Flamma Cannon", 0x40FA00 + 0xc800 - (0x41ac00 - 0x310000), 0x40FA80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Electron Cannon", 0x40FA80 + 0xc800 - (0x41ac00 - 0x310000), 0x40FB00 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Death Phenomenon - On Hit", 0x40FD80 + 0xc800 - (0x41ac00 - 0x310000), 0x40FE00 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Kick Death Phenomenon - On Whiff", 0x40FE00 + 0xc800 - (0x41ac00 - 0x310000), 0x40FE80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 + 0xc800 - (0x41ac00 - 0x310000), 0x40F800 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Manot Arm", 0x40F200 + 0xc800 - (0x41ac00 - 0x310000), 0x40F280 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Kick GC/Pursuit Wrecking Ball", 0x40F300 + 0xc800 - (0x41ac00 - 0x310000), 0x40F380 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Kick Grab Saw", 0x40F080 + 0xc800 - (0x41ac00 - 0x310000), 0x40F100 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Kick GC/Grab/Pursuit Lever", 0x40F100 + 0xc800 - (0x41ac00 - 0x310000), 0x40F180 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Kick Ultimate Guard Wall and Lever", 0x40EB00 + 0xc800 - (0x41ac00 - 0x310000), 0x40EB80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Kick Ultimate Guard Batteries", 0x40EE00 + 0xc800 - (0x41ac00 - 0x310000), 0x40EE80 + 0xc800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Kick Ultimate Counter Chain", 0x41c300 - (0x41ac00 - 0x310000), 0x41c380 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x41bb80 - (0x41ac00 - 0x310000), 0x41bc00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x41bc00 - (0x41ac00 - 0x310000), 0x41bc80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x41bc80 - (0x41ac00 - 0x310000), 0x41bd00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x41bd00 - (0x41ac00 - 0x310000), 0x41bd80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x41bd80 - (0x41ac00 - 0x310000), 0x41be00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x41be00 - (0x41ac00 - 0x310000), 0x41be80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x41ba80 - (0x41ac00 - 0x310000), 0x41bb00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Kick Ultimate Guard Flash and Burn 1", 0x41D600 - (0x41ac00 - 0x310000), 0x41D680 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Burn 2", 0x41D680 - (0x41ac00 - 0x310000), 0x41D700 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 1", 0x41D700 - (0x41ac00 - 0x310000), 0x41D780 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 2", 0x41D780 - (0x41ac00 - 0x310000), 0x41D800 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 1", 0x41D800 - (0x41ac00 - 0x310000), 0x41D880 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 2", 0x41D880 - (0x41ac00 - 0x310000), 0x41D900 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 3", 0x41D900 - (0x41ac00 - 0x310000), 0x41D980 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 4", 0x41D980 - (0x41ac00 - 0x310000), 0x41DA00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 1", 0x41DA00 - (0x41ac00 - 0x310000), 0x41DA80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 2", 0x41DA80 - (0x41ac00 - 0x310000), 0x41DB00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 3", 0x41DB00 - (0x41ac00 - 0x310000), 0x41DB80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 1", 0x41DB80 - (0x41ac00 - 0x310000), 0x41DC00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 2", 0x41DC00 - (0x41ac00 - 0x310000), 0x41DC80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 3", 0x41DC80 - (0x41ac00 - 0x310000), 0x41DD00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 4", 0x41DD00 - (0x41ac00 - 0x310000), 0x41DD80 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 5", 0x41DD80 - (0x41ac00 - 0x310000), 0x41DE00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0 },

    { L"Kick Palette Cartur", 0x41ad80 - (0x41ac00 - 0x310000), 0x41ae00 - (0x41ac00 - 0x310000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x41ae00 - (0x41ac00 - 0x310000), 0x41af00 - (0x41ac00 - 0x310000) },
    { L"Unknown Tessa Palette 2", 0x41b980 - (0x41ac00 - 0x310000), 0x41ba00 - (0x41ac00 - 0x310000) },
    { L"Unknown Tessa Palette 3", 0x41c680 - (0x41ac00 - 0x310000), 0x41c700 - (0x41ac00 - 0x310000) },
    { L"Unknown Tessa Range 1", 0x41c380 - (0x41ac00 - 0x310000), 0x41c580 - (0x41ac00 - 0x310000) },
    { L"Unknown Tessa Range 2 (1/4) 0x41c800", 0x41c800 - (0x41ac00 - 0x310000), 0x41ca00 - (0x41ac00 - 0x310000) },
    { L"Unknown Tessa Range 2 (2/4) 0x41ca00", 0x41ca00 - (0x41ac00 - 0x310000), 0x41cc00 - (0x41ac00 - 0x310000) },
    { L"Unknown Tessa Range 2 (3/4) 0x41cc00", 0x41cc00 - (0x41ac00 - 0x310000), 0x41ce00 - (0x41ac00 - 0x310000) },
    { L"Unknown Tessa Range 2 (4/4) 0x41ce00", 0x41ce00 - (0x41ac00 - 0x310000), 0x41ce80 - (0x41ac00 - 0x310000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_TESSA_KICK_PALETTES[] =
{
    // Hydron Transparency on Kick Tessa Ranges
    // 0x314000
    // 0x317200
    { L"Tessa Kick", 0x41AC00 - (0x41ac00 - 0x314000), 0x41AC80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Kick Changing Pal", 0x41AC80 - (0x41ac00 - 0x314000), 0x41AD00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Kick Bottled Ice", 0x41AD00 - (0x41ac00 - 0x314000), 0x41AD80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Kick Mage Shield Block", 0x40EA00 + 0xc800 - (0x41ac00 - 0x314000), 0x40EA80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Kick Mage Shield Preblock", 0x40EA80 + 0xc800 - (0x41ac00 - 0x314000), 0x40EB00 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Kick Al (Aru) Cat", 0x40E780 + 0xc800 - (0x41ac00 - 0x314000), 0x40E800 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Al (Aru) Cat Returning", 0x40E800 + 0xc800 - (0x41ac00 - 0x314000), 0x40E880 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ivan (Ibun) Cat", 0x40E880 + 0xc800 - (0x41ac00 - 0x314000), 0x40E900 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat Returning", 0x40E900 + 0xc800 - (0x41ac00 - 0x314000), 0x40E980 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ice", 0x40E980 + 0xc800 - (0x41ac00 - 0x314000), 0x40EA00 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Kick Reverie Sword", 0x40EB80 + 0xc800 - (0x41ac00 - 0x314000), 0x40EC00 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Kick Staffs", 0x40EC00 + 0xc800 - (0x41ac00 - 0x314000), 0x40EC80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Kaeru (Frog)", 0x40EE80 + 0xc800 - (0x41ac00 - 0x314000), 0x40EF00 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 + 0xc800 - (0x41ac00 - 0x314000), 0x40F000 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Suitcat", 0x40FF00 + 0xc800 - (0x41ac00 - 0x314000), 0x40FF80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Suitcat (Mustard)", 0x40FF80 + 0xc800 - (0x41ac00 - 0x314000), 0x410000 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Chakra Wave", 0x40EF00 + 0xc800 - (0x41ac00 - 0x314000), 0x40EF80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Kick Cannon Magic Pattern", 0x40E700 + 0xc800 - (0x41ac00 - 0x314000), 0x40E780 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Kick Cannon Transition", 0x40F880 + 0xc800 - (0x41ac00 - 0x314000), 0x40F900 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Kick Hyper Cannon (Superball and Winscreen)", 0x40F900 + 0xc800 - (0x41ac00 - 0x314000), 0x40F980 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Kick Glace Cannon", 0x40F980 + 0xc800 - (0x41ac00 - 0x314000), 0x40FA00 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Flamma Cannon", 0x40FA00 + 0xc800 - (0x41ac00 - 0x314000), 0x40FA80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Electron Cannon", 0x40FA80 + 0xc800 - (0x41ac00 - 0x314000), 0x40FB00 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Death Phenomenon - On Hit", 0x40FD80 + 0xc800 - (0x41ac00 - 0x314000), 0x40FE00 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Kick Death Phenomenon - On Whiff", 0x40FE00 + 0xc800 - (0x41ac00 - 0x314000), 0x40FE80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 + 0xc800 - (0x41ac00 - 0x314000), 0x40F800 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Manot Arm", 0x40F200 + 0xc800 - (0x41ac00 - 0x314000), 0x40F280 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Kick GC/Pursuit Wrecking Ball", 0x40F300 + 0xc800 - (0x41ac00 - 0x314000), 0x40F380 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Kick Grab Saw", 0x40F080 + 0xc800 - (0x41ac00 - 0x314000), 0x40F100 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Kick GC/Grab/Pursuit Lever", 0x40F100 + 0xc800 - (0x41ac00 - 0x314000), 0x40F180 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Kick Ultimate Guard Wall and Lever", 0x40EB00 + 0xc800 - (0x41ac00 - 0x314000), 0x40EB80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Kick Ultimate Guard Batteries", 0x40EE00 + 0xc800 - (0x41ac00 - 0x314000), 0x40EE80 + 0xc800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Kick Ultimate Counter Chain", 0x41c300 - (0x41ac00 - 0x314000), 0x41c380 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x41bb80 - (0x41ac00 - 0x314000), 0x41bc00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x41bc00 - (0x41ac00 - 0x314000), 0x41bc80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x41bc80 - (0x41ac00 - 0x314000), 0x41bd00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x41bd00 - (0x41ac00 - 0x314000), 0x41bd80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x41bd80 - (0x41ac00 - 0x314000), 0x41be00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x41be00 - (0x41ac00 - 0x314000), 0x41be80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x41ba80 - (0x41ac00 - 0x314000), 0x41bb00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Kick Ultimate Guard Flash and Burn 1", 0x41D600 - (0x41ac00 - 0x314000), 0x41D680 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Burn 2", 0x41D680 - (0x41ac00 - 0x314000), 0x41D700 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 1", 0x41D700 - (0x41ac00 - 0x314000), 0x41D780 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 2", 0x41D780 - (0x41ac00 - 0x314000), 0x41D800 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 1", 0x41D800 - (0x41ac00 - 0x314000), 0x41D880 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 2", 0x41D880 - (0x41ac00 - 0x314000), 0x41D900 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 3", 0x41D900 - (0x41ac00 - 0x314000), 0x41D980 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 4", 0x41D980 - (0x41ac00 - 0x314000), 0x41DA00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 1", 0x41DA00 - (0x41ac00 - 0x314000), 0x41DA80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 2", 0x41DA80 - (0x41ac00 - 0x314000), 0x41DB00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 3", 0x41DB00 - (0x41ac00 - 0x314000), 0x41DB80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 1", 0x41DB80 - (0x41ac00 - 0x314000), 0x41DC00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 2", 0x41DC00 - (0x41ac00 - 0x314000), 0x41DC80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 3", 0x41DC80 - (0x41ac00 - 0x314000), 0x41DD00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 4", 0x41DD00 - (0x41ac00 - 0x314000), 0x41DD80 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 5", 0x41DD80 - (0x41ac00 - 0x314000), 0x41DE00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0 },

    { L"Kick Palette Cartur", 0x41ad80 - (0x41ac00 - 0x314000), 0x41ae00 - (0x41ac00 - 0x314000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x41ae00 - (0x41ac00 - 0x314000), 0x41af00 - (0x41ac00 - 0x314000) },
    { L"Unknown Tessa Palette 2", 0x41b980 - (0x41ac00 - 0x314000), 0x41ba00 - (0x41ac00 - 0x314000) },
    { L"Unknown Tessa Palette 3", 0x41c680 - (0x41ac00 - 0x314000), 0x41c700 - (0x41ac00 - 0x314000) },
    { L"Unknown Tessa Range 1", 0x41c380 - (0x41ac00 - 0x314000), 0x41c580 - (0x41ac00 - 0x314000) },
    { L"Unknown Tessa Range 2 (1/4) 0x41c800", 0x41c800 - (0x41ac00 - 0x314000), 0x41ca00 - (0x41ac00 - 0x314000) },
    { L"Unknown Tessa Range 2 (2/4) 0x41ca00", 0x41ca00 - (0x41ac00 - 0x314000), 0x41cc00 - (0x41ac00 - 0x314000) },
    { L"Unknown Tessa Range 2 (3/4) 0x41cc00", 0x41cc00 - (0x41ac00 - 0x314000), 0x41ce00 - (0x41ac00 - 0x314000) },
    { L"Unknown Tessa Range 2 (4/4) 0x41ce00", 0x41ce00 - (0x41ac00 - 0x314000), 0x41ce80 - (0x41ac00 - 0x314000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_TESSA_KICK_PALETTES[] =
{
    // Ravange Transparency on Kick Tessa Ranges
    // 0x318000
    // 0x31b200
    { L"Tessa Kick", 0x41AC00 - (0x41ac00 - 0x318000), 0x41AC80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Kick Changing Pal", 0x41AC80 - (0x41ac00 - 0x318000), 0x41AD00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Kick Bottled Ice", 0x41AD00 - (0x41ac00 - 0x318000), 0x41AD80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Kick Mage Shield Block", 0x40EA00 + 0xc800 - (0x41ac00 - 0x318000), 0x40EA80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Kick Mage Shield Preblock", 0x40EA80 + 0xc800 - (0x41ac00 - 0x318000), 0x40EB00 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Kick Al (Aru) Cat", 0x40E780 + 0xc800 - (0x41ac00 - 0x318000), 0x40E800 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Al (Aru) Cat Returning", 0x40E800 + 0xc800 - (0x41ac00 - 0x318000), 0x40E880 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ivan (Ibun) Cat", 0x40E880 + 0xc800 - (0x41ac00 - 0x318000), 0x40E900 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat Returning", 0x40E900 + 0xc800 - (0x41ac00 - 0x318000), 0x40E980 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ice", 0x40E980 + 0xc800 - (0x41ac00 - 0x318000), 0x40EA00 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Kick Reverie Sword", 0x40EB80 + 0xc800 - (0x41ac00 - 0x318000), 0x40EC00 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Kick Staffs", 0x40EC00 + 0xc800 - (0x41ac00 - 0x318000), 0x40EC80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Kaeru (Frog)", 0x40EE80 + 0xc800 - (0x41ac00 - 0x318000), 0x40EF00 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 + 0xc800 - (0x41ac00 - 0x318000), 0x40F000 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Suitcat", 0x40FF00 + 0xc800 - (0x41ac00 - 0x318000), 0x40FF80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Suitcat (Mustard)", 0x40FF80 + 0xc800 - (0x41ac00 - 0x318000), 0x410000 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Chakra Wave", 0x40EF00 + 0xc800 - (0x41ac00 - 0x318000), 0x40EF80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Kick Cannon Magic Pattern", 0x40E700 + 0xc800 - (0x41ac00 - 0x318000), 0x40E780 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Kick Cannon Transition", 0x40F880 + 0xc800 - (0x41ac00 - 0x318000), 0x40F900 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Kick Hyper Cannon (Superball and Winscreen)", 0x40F900 + 0xc800 - (0x41ac00 - 0x318000), 0x40F980 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Kick Glace Cannon", 0x40F980 + 0xc800 - (0x41ac00 - 0x318000), 0x40FA00 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Flamma Cannon", 0x40FA00 + 0xc800 - (0x41ac00 - 0x318000), 0x40FA80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Electron Cannon", 0x40FA80 + 0xc800 - (0x41ac00 - 0x318000), 0x40FB00 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Death Phenomenon - On Hit", 0x40FD80 + 0xc800 - (0x41ac00 - 0x318000), 0x40FE00 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Kick Death Phenomenon - On Whiff", 0x40FE00 + 0xc800 - (0x41ac00 - 0x318000), 0x40FE80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 + 0xc800 - (0x41ac00 - 0x318000), 0x40F800 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Manot Arm", 0x40F200 + 0xc800 - (0x41ac00 - 0x318000), 0x40F280 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Kick GC/Pursuit Wrecking Ball", 0x40F300 + 0xc800 - (0x41ac00 - 0x318000), 0x40F380 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Kick Grab Saw", 0x40F080 + 0xc800 - (0x41ac00 - 0x318000), 0x40F100 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Kick GC/Grab/Pursuit Lever", 0x40F100 + 0xc800 - (0x41ac00 - 0x318000), 0x40F180 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Kick Ultimate Guard Wall and Lever", 0x40EB00 + 0xc800 - (0x41ac00 - 0x318000), 0x40EB80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Kick Ultimate Guard Batteries", 0x40EE00 + 0xc800 - (0x41ac00 - 0x318000), 0x40EE80 + 0xc800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Kick Ultimate Counter Chain", 0x41c300 - (0x41ac00 - 0x318000), 0x41c380 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x41bb80 - (0x41ac00 - 0x318000), 0x41bc00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x41bc00 - (0x41ac00 - 0x318000), 0x41bc80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x41bc80 - (0x41ac00 - 0x318000), 0x41bd00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x41bd00 - (0x41ac00 - 0x318000), 0x41bd80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x41bd80 - (0x41ac00 - 0x318000), 0x41be00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x41be00 - (0x41ac00 - 0x318000), 0x41be80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x41ba80 - (0x41ac00 - 0x318000), 0x41bb00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Kick Ultimate Guard Flash and Burn 1", 0x41D600 - (0x41ac00 - 0x318000), 0x41D680 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Burn 2", 0x41D680 - (0x41ac00 - 0x318000), 0x41D700 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 1", 0x41D700 - (0x41ac00 - 0x318000), 0x41D780 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 2", 0x41D780 - (0x41ac00 - 0x318000), 0x41D800 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 1", 0x41D800 - (0x41ac00 - 0x318000), 0x41D880 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 2", 0x41D880 - (0x41ac00 - 0x318000), 0x41D900 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 3", 0x41D900 - (0x41ac00 - 0x318000), 0x41D980 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 4", 0x41D980 - (0x41ac00 - 0x318000), 0x41DA00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 1", 0x41DA00 - (0x41ac00 - 0x318000), 0x41DA80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 2", 0x41DA80 - (0x41ac00 - 0x318000), 0x41DB00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 3", 0x41DB00 - (0x41ac00 - 0x318000), 0x41DB80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 1", 0x41DB80 - (0x41ac00 - 0x318000), 0x41DC00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 2", 0x41DC00 - (0x41ac00 - 0x318000), 0x41DC80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 3", 0x41DC80 - (0x41ac00 - 0x318000), 0x41DD00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 4", 0x41DD00 - (0x41ac00 - 0x318000), 0x41DD80 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 5", 0x41DD80 - (0x41ac00 - 0x318000), 0x41DE00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0 },

    { L"Kick Palette Cartur", 0x41ad80 - (0x41ac00 - 0x318000), 0x41ae00 - (0x41ac00 - 0x318000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x41ae00 - (0x41ac00 - 0x318000), 0x41af00 - (0x41ac00 - 0x318000) },
    { L"Unknown Tessa Palette 2", 0x41b980 - (0x41ac00 - 0x318000), 0x41ba00 - (0x41ac00 - 0x318000) },
    { L"Unknown Tessa Palette 3", 0x41c680 - (0x41ac00 - 0x318000), 0x41c700 - (0x41ac00 - 0x318000) },
    { L"Unknown Tessa Range 1", 0x41c380 - (0x41ac00 - 0x318000), 0x41c580 - (0x41ac00 - 0x318000) },
    { L"Unknown Tessa Range 2 (1/4) 0x41c800", 0x41c800 - (0x41ac00 - 0x318000), 0x41ca00 - (0x41ac00 - 0x318000) },
    { L"Unknown Tessa Range 2 (2/4) 0x41ca00", 0x41ca00 - (0x41ac00 - 0x318000), 0x41cc00 - (0x41ac00 - 0x318000) },
    { L"Unknown Tessa Range 2 (3/4) 0x41cc00", 0x41cc00 - (0x41ac00 - 0x318000), 0x41ce00 - (0x41ac00 - 0x318000) },
    { L"Unknown Tessa Range 2 (4/4) 0x41ce00", 0x41ce00 - (0x41ac00 - 0x318000), 0x41ce80 - (0x41ac00 - 0x318000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_TESSA_KICK_PALETTES[] =
{
    // Blade Transparency on Kick Tessa Ranges
    // 0x31c000
    // 0x31f200
    { L"Tessa Kick", 0x41AC00 - (0x41ac00 - 0x31c000), 0x41AC80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x00 },
    { L"Tessa Kick Changing Pal", 0x41AC80 - (0x41ac00 - 0x31c000), 0x41AD00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x00 },

    { L"Tessa Kick Bottled Ice", 0x41AD00 - (0x41ac00 - 0x31c000), 0x41AD80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x02 },

    { L"Tessa Kick Mage Shield Block", 0x40EA00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EA80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x18 },
    { L"Tessa Kick Mage Shield Preblock", 0x40EA80 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EB00 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x19 },

    { L"Tessa Kick Al (Aru) Cat", 0x40E780 + 0xc800 - (0x41ac00 - 0x31c000), 0x40E800 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Al (Aru) Cat Returning", 0x40E800 + 0xc800 - (0x41ac00 - 0x31c000), 0x40E880 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ivan (Ibun) Cat", 0x40E880 + 0xc800 - (0x41ac00 - 0x31c000), 0x40E900 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat Returning", 0x40E900 + 0xc800 - (0x41ac00 - 0x31c000), 0x40E980 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x26 },
    { L"Tessa Kick Ice", 0x40E980 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EA00 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Kick Reverie Sword", 0x40EB80 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EC00 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Kick Staffs", 0x40EC00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EC80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Kaeru (Frog)", 0x40EE80 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EF00 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x0f },
    { L"Hato (Pigeon)", 0x40EF80 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F000 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Suitcat", 0x40FF00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40FF80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Suitcat (Mustard)", 0x40FF80 + 0xc800 - (0x41ac00 - 0x31c000), 0x410000 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Chakra Wave", 0x40EF00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EF80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Kick Cannon Magic Pattern", 0x40E700 + 0xc800 - (0x41ac00 - 0x31c000), 0x40E780 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Kick Cannon Transition", 0x40F880 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F900 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Kick Hyper Cannon (Superball and Winscreen)", 0x40F900 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F980 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Kick Glace Cannon", 0x40F980 + 0xc800 - (0x41ac00 - 0x31c000), 0x40FA00 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Flamma Cannon", 0x40FA00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40FA80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Electron Cannon", 0x40FA80 + 0xc800 - (0x41ac00 - 0x31c000), 0x40FB00 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Death Phenomenon - On Hit", 0x40FD80 + 0xc800 - (0x41ac00 - 0x31c000), 0x40FE00 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Kick Death Phenomenon - On Whiff", 0x40FE00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40FE80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x07 },
    { L"Jamming Ghost", 0x40F780 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F800 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Manot Arm", 0x40F200 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F280 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Kick GC/Pursuit Wrecking Ball", 0x40F300 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F380 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Kick Grab Saw", 0x40F080 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F100 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Kick GC/Grab/Pursuit Lever", 0x40F100 + 0xc800 - (0x41ac00 - 0x31c000), 0x40F180 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Kick Ultimate Guard Wall and Lever", 0x40EB00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EB80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Kick Ultimate Guard Batteries", 0x40EE00 + 0xc800 - (0x41ac00 - 0x31c000), 0x40EE80 + 0xc800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x01a },
    { L"Tessa Kick Ultimate Counter Chain", 0x41c300 - (0x41ac00 - 0x31c000), 0x41c380 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x28 },

    { L"Electron Fairies 1 & UC Angels", 0x41bb80 - (0x41ac00 - 0x31c000), 0x41bc00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Electron Fairies 2", 0x41bc00 - (0x41ac00 - 0x31c000), 0x41bc80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 1", 0x41bc80 - (0x41ac00 - 0x31c000), 0x41bd00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Fiamma Fairies 2", 0x41bd00 - (0x41ac00 - 0x31c000), 0x41bd80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 1", 0x41bd80 - (0x41ac00 - 0x31c000), 0x41be00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x27 },
    { L"Glace Fairies 2", 0x41be00 - (0x41ac00 - 0x31c000), 0x41be80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x27 },

    { L"Cursed Penguin Tessa", 0x41ba80 - (0x41ac00 - 0x31c000), 0x41bb00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x25 },

    { L"Tessa Kick Ultimate Guard Flash and Burn 1", 0x41D600 - (0x41ac00 - 0x31c000), 0x41D680 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Burn 2", 0x41D680 - (0x41ac00 - 0x31c000), 0x41D700 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 1", 0x41D700 - (0x41ac00 - 0x31c000), 0x41D780 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Shocked 2", 0x41D780 - (0x41ac00 - 0x31c000), 0x41D800 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 1", 0x41D800 - (0x41ac00 - 0x31c000), 0x41D880 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 2", 0x41D880 - (0x41ac00 - 0x31c000), 0x41D900 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 3", 0x41D900 - (0x41ac00 - 0x31c000), 0x41D980 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Poisoned 4", 0x41D980 - (0x41ac00 - 0x31c000), 0x41DA00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 1", 0x41DA00 - (0x41ac00 - 0x31c000), 0x41DA80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 2", 0x41DA80 - (0x41ac00 - 0x31c000), 0x41DB00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Petrified 3", 0x41DB00 - (0x41ac00 - 0x31c000), 0x41DB80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 1", 0x41DB80 - (0x41ac00 - 0x31c000), 0x41DC00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 2", 0x41DC00 - (0x41ac00 - 0x31c000), 0x41DC80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 3", 0x41DC80 - (0x41ac00 - 0x31c000), 0x41DD00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 4", 0x41DD00 - (0x41ac00 - 0x31c000), 0x41DD80 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },
    { L"Tessa Kick Frozen 5", 0x41DD80 - (0x41ac00 - 0x31c000), 0x41DE00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0 },

    { L"Kick Palette Cartur", 0x41ad80 - (0x41ac00 - 0x31c000), 0x41ae00 - (0x41ac00 - 0x31c000), indexRedEarthSprites_Tessa, 0x24 },

    { L"Unknown Tessa Palette 1", 0x41ae00 - (0x41ac00 - 0x31c000), 0x41af00 - (0x41ac00 - 0x31c000) },
    { L"Unknown Tessa Palette 2", 0x41b980 - (0x41ac00 - 0x31c000), 0x41ba00 - (0x41ac00 - 0x31c000) },
    { L"Unknown Tessa Palette 3", 0x41c680 - (0x41ac00 - 0x31c000), 0x41c700 - (0x41ac00 - 0x31c000) },
    { L"Unknown Tessa Range 1", 0x41c380 - (0x41ac00 - 0x31c000), 0x41c580 - (0x41ac00 - 0x31c000) },
    { L"Unknown Tessa Range 2 (1/4) 0x41c800", 0x41c800 - (0x41ac00 - 0x31c000), 0x41ca00 - (0x41ac00 - 0x31c000) },
    { L"Unknown Tessa Range 2 (2/4) 0x41ca00", 0x41ca00 - (0x41ac00 - 0x31c000), 0x41cc00 - (0x41ac00 - 0x31c000) },
    { L"Unknown Tessa Range 2 (3/4) 0x41cc00", 0x41cc00 - (0x41ac00 - 0x31c000), 0x41ce00 - (0x41ac00 - 0x31c000) },
    { L"Unknown Tessa Range 2 (4/4) 0x41ce00", 0x41ce00 - (0x41ac00 - 0x31c000), 0x41ce80 - (0x41ac00 - 0x31c000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_MAI_KICK_PALETTES[] =
{
    // Kick Mai
    // 0x41de00
    // 0x421000

    // Slash Transparency on Kick Mai Ranges
    // 0x29c000
    // 0x29f200
    { L"Mai-Ling Kick", 0x41DE00 - (0x41de00 - 0x29c000), 0x41DE80 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Kick Fire", 0x41DE80 - (0x41de00 - 0x29c000), 0x41DF00 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Kick Fireball", 0x41DF80 - (0x41de00 - 0x29c000), 0x41E000 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Kick HCB.1/2/3 Fireball", 0x41e080 - (0x41de00 - 0x29c000), 0x41E100 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x41e100 - (0x41de00 - 0x29c000), 0x41e180 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x41f200 - (0x41de00 - 0x29c000), 0x41f300 - (0x41de00 - 0x29c000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Kick Ultimate Guard Flash and Burn 1", 0x420800 - (0x41de00 - 0x29c000), 0x420880 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Burn 2", 0x420880 - (0x41de00 - 0x29c000), 0x420900 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 1", 0x420900 - (0x41de00 - 0x29c000), 0x420980 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 2", 0x420980 - (0x41de00 - 0x29c000), 0x420A00 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 1", 0x420A00 - (0x41de00 - 0x29c000), 0x420A80 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 2", 0x420A80 - (0x41de00 - 0x29c000), 0x420B00 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 3", 0x420B00 - (0x41de00 - 0x29c000), 0x420B80 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 4", 0x420B80 - (0x41de00 - 0x29c000), 0x420C00 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 1", 0x420C00 - (0x41de00 - 0x29c000), 0x420C80 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 2", 0x420C80 - (0x41de00 - 0x29c000), 0x420D00 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 3", 0x420D00 - (0x41de00 - 0x29c000), 0x420D80 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 1", 0x420D80 - (0x41de00 - 0x29c000), 0x420E00 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 2", 0x420E00 - (0x41de00 - 0x29c000), 0x420E80 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 3", 0x420E80 - (0x41de00 - 0x29c000), 0x420F00 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 4", 0x420F00 - (0x41de00 - 0x29c000), 0x420F80 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 5", 0x420F80 - (0x41de00 - 0x29c000), 0x421000 - (0x41de00 - 0x29c000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x41df00 - (0x41de00 - 0x29c000), 0x41df80 - (0x41de00 - 0x29c000) },
    { L"Unknown Mai Palette 2", 0x41e000 - (0x41de00 - 0x29c000), 0x41e080 - (0x41de00 - 0x29c000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_MAI_KICK_PALETTES[] =
{
    // Hauzer Transparency on Kick Mai Ranges
    // 0x320000
    // 0x323200
    { L"Mai-Ling Kick", 0x41DE00 - (0x41de00 - 0x320000), 0x41DE80 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Kick Fire", 0x41DE80 - (0x41de00 - 0x320000), 0x41DF00 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Kick Fireball", 0x41DF80 - (0x41de00 - 0x320000), 0x41E000 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Kick HCB.1/2/3 Fireball", 0x41e080 - (0x41de00 - 0x320000), 0x41E100 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x41e100 - (0x41de00 - 0x320000), 0x41e180 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x41f200 - (0x41de00 - 0x320000), 0x41f300 - (0x41de00 - 0x320000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Kick Ultimate Guard Flash and Burn 1", 0x420800 - (0x41de00 - 0x320000), 0x420880 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Burn 2", 0x420880 - (0x41de00 - 0x320000), 0x420900 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 1", 0x420900 - (0x41de00 - 0x320000), 0x420980 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 2", 0x420980 - (0x41de00 - 0x320000), 0x420A00 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 1", 0x420A00 - (0x41de00 - 0x320000), 0x420A80 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 2", 0x420A80 - (0x41de00 - 0x320000), 0x420B00 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 3", 0x420B00 - (0x41de00 - 0x320000), 0x420B80 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 4", 0x420B80 - (0x41de00 - 0x320000), 0x420C00 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 1", 0x420C00 - (0x41de00 - 0x320000), 0x420C80 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 2", 0x420C80 - (0x41de00 - 0x320000), 0x420D00 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 3", 0x420D00 - (0x41de00 - 0x320000), 0x420D80 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 1", 0x420D80 - (0x41de00 - 0x320000), 0x420E00 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 2", 0x420E00 - (0x41de00 - 0x320000), 0x420E80 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 3", 0x420E80 - (0x41de00 - 0x320000), 0x420F00 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 4", 0x420F00 - (0x41de00 - 0x320000), 0x420F80 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 5", 0x420F80 - (0x41de00 - 0x320000), 0x421000 - (0x41de00 - 0x320000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x41df00 - (0x41de00 - 0x320000), 0x41df80 - (0x41de00 - 0x320000) },
    { L"Unknown Mai Palette 2", 0x41e000 - (0x41de00 - 0x320000), 0x41e080 - (0x41de00 - 0x320000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_MAI_KICK_PALETTES[] =
{
    // Hydron Transparency on Kick Mai Ranges
    // 0x324000
    // 0x327200
    { L"Mai-Ling Kick", 0x41DE00 - (0x41de00 - 0x324000), 0x41DE80 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Kick Fire", 0x41DE80 - (0x41de00 - 0x324000), 0x41DF00 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Kick Fireball", 0x41DF80 - (0x41de00 - 0x324000), 0x41E000 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Kick HCB.1/2/3 Fireball", 0x41e080 - (0x41de00 - 0x324000), 0x41E100 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x41e100 - (0x41de00 - 0x324000), 0x41e180 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x41f200 - (0x41de00 - 0x324000), 0x41f300 - (0x41de00 - 0x324000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Kick Ultimate Guard Flash and Burn 1", 0x420800 - (0x41de00 - 0x324000), 0x420880 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Burn 2", 0x420880 - (0x41de00 - 0x324000), 0x420900 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 1", 0x420900 - (0x41de00 - 0x324000), 0x420980 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 2", 0x420980 - (0x41de00 - 0x324000), 0x420A00 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 1", 0x420A00 - (0x41de00 - 0x324000), 0x420A80 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 2", 0x420A80 - (0x41de00 - 0x324000), 0x420B00 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 3", 0x420B00 - (0x41de00 - 0x324000), 0x420B80 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 4", 0x420B80 - (0x41de00 - 0x324000), 0x420C00 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 1", 0x420C00 - (0x41de00 - 0x324000), 0x420C80 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 2", 0x420C80 - (0x41de00 - 0x324000), 0x420D00 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 3", 0x420D00 - (0x41de00 - 0x324000), 0x420D80 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 1", 0x420D80 - (0x41de00 - 0x324000), 0x420E00 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 2", 0x420E00 - (0x41de00 - 0x324000), 0x420E80 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 3", 0x420E80 - (0x41de00 - 0x324000), 0x420F00 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 4", 0x420F00 - (0x41de00 - 0x324000), 0x420F80 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 5", 0x420F80 - (0x41de00 - 0x324000), 0x421000 - (0x41de00 - 0x324000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x41df00 - (0x41de00 - 0x324000), 0x41df80 - (0x41de00 - 0x324000) },
    { L"Unknown Mai Palette 2", 0x41e000 - (0x41de00 - 0x324000), 0x41e080 - (0x41de00 - 0x324000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_MAI_KICK_PALETTES[] =
{
    // Ravange Transparency on Kick Mai Ranges
    // 0x328000
    // 0x32b200
    { L"Mai-Ling Kick", 0x41DE00 - (0x41de00 - 0x328000), 0x41DE80 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Kick Fire", 0x41DE80 - (0x41de00 - 0x328000), 0x41DF00 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Kick Fireball", 0x41DF80 - (0x41de00 - 0x328000), 0x41E000 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Kick HCB.1/2/3 Fireball", 0x41e080 - (0x41de00 - 0x328000), 0x41E100 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x41e100 - (0x41de00 - 0x328000), 0x41e180 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x41f200 - (0x41de00 - 0x328000), 0x41f300 - (0x41de00 - 0x328000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Kick Ultimate Guard Flash and Burn 1", 0x420800 - (0x41de00 - 0x328000), 0x420880 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Burn 2", 0x420880 - (0x41de00 - 0x328000), 0x420900 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 1", 0x420900 - (0x41de00 - 0x328000), 0x420980 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 2", 0x420980 - (0x41de00 - 0x328000), 0x420A00 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 1", 0x420A00 - (0x41de00 - 0x328000), 0x420A80 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 2", 0x420A80 - (0x41de00 - 0x328000), 0x420B00 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 3", 0x420B00 - (0x41de00 - 0x328000), 0x420B80 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 4", 0x420B80 - (0x41de00 - 0x328000), 0x420C00 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 1", 0x420C00 - (0x41de00 - 0x328000), 0x420C80 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 2", 0x420C80 - (0x41de00 - 0x328000), 0x420D00 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 3", 0x420D00 - (0x41de00 - 0x328000), 0x420D80 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 1", 0x420D80 - (0x41de00 - 0x328000), 0x420E00 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 2", 0x420E00 - (0x41de00 - 0x328000), 0x420E80 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 3", 0x420E80 - (0x41de00 - 0x328000), 0x420F00 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 4", 0x420F00 - (0x41de00 - 0x328000), 0x420F80 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 5", 0x420F80 - (0x41de00 - 0x328000), 0x421000 - (0x41de00 - 0x328000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x41df00 - (0x41de00 - 0x328000), 0x41df80 - (0x41de00 - 0x328000) },
    { L"Unknown Mai Palette 2", 0x41e000 - (0x41de00 - 0x328000), 0x41e080 - (0x41de00 - 0x328000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_MAI_KICK_PALETTES[] =
{
    // Blade Transparency on Kick Mai Ranges
    // 0x32c000
    // 0x32f200
    { L"Mai-Ling Kick", 0x41DE00 - (0x41de00 - 0x32c000), 0x41DE80 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },

    { L"Mai-Ling Kick Fire", 0x41DE80 - (0x41de00 - 0x32c000), 0x41DF00 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Kick Fireball", 0x41DF80 - (0x41de00 - 0x32c000), 0x41E000 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Kick HCB.1/2/3 Fireball", 0x41e080 - (0x41de00 - 0x32c000), 0x41E100 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0x03 },

    { L"Ultimate Guard's Parry Shield", 0x41e100 - (0x41de00 - 0x32c000), 0x41e180 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0x04 },
    { L"Valerie, Dentry & Bellery", 0x41f200 - (0x41de00 - 0x32c000), 0x41f300 - (0x41de00 - 0x32c000), indexRedEarthSprites_Bonus, 0x1d },

    { L"Mai-Ling Kick Ultimate Guard Flash and Burn 1", 0x420800 - (0x41de00 - 0x32c000), 0x420880 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Burn 2", 0x420880 - (0x41de00 - 0x32c000), 0x420900 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 1", 0x420900 - (0x41de00 - 0x32c000), 0x420980 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 2", 0x420980 - (0x41de00 - 0x32c000), 0x420A00 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 1", 0x420A00 - (0x41de00 - 0x32c000), 0x420A80 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 2", 0x420A80 - (0x41de00 - 0x32c000), 0x420B00 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 3", 0x420B00 - (0x41de00 - 0x32c000), 0x420B80 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Poisoned 4", 0x420B80 - (0x41de00 - 0x32c000), 0x420C00 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 1", 0x420C00 - (0x41de00 - 0x32c000), 0x420C80 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 2", 0x420C80 - (0x41de00 - 0x32c000), 0x420D00 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Petrified 3", 0x420D00 - (0x41de00 - 0x32c000), 0x420D80 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 1", 0x420D80 - (0x41de00 - 0x32c000), 0x420E00 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 2", 0x420E00 - (0x41de00 - 0x32c000), 0x420E80 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 3", 0x420E80 - (0x41de00 - 0x32c000), 0x420F00 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 4", 0x420F00 - (0x41de00 - 0x32c000), 0x420F80 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Frozen 5", 0x420F80 - (0x41de00 - 0x32c000), 0x421000 - (0x41de00 - 0x32c000), indexRedEarthSprites_MaiLing, 0 },

    { L"Unknown Mai Palette", 0x41df00 - (0x41de00 - 0x32c000), 0x41df80 - (0x41de00 - 0x32c000) },
    { L"Unknown Mai Palette 2", 0x41e000 - (0x41de00 - 0x32c000), 0x41e080 - (0x41de00 - 0x32c000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_HAUZER_PALETTES[] =
{
    // Slash Transparency on Hauzer Ranges
    { L"Hauzer", 0x421000 - (0x421000 - 0x260000), 0x421080 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Hit Effect 1", 0x423e80 - (0x421000 - 0x260000), 0x423f00 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Hit Effect 2", 0x421180 - (0x421000 - 0x260000), 0x421200 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Fire Effects", 0x421200 - (0x421000 - 0x260000), 0x421280 - (0x421000 - 0x260000) },
    { L"Hauzer Lava Ball", 0x421280 - (0x421000 - 0x260000), 0x421300 - (0x421000 - 0x260000) },
    { L"Hauzer Gust Flame 1", 0x421380 - (0x421000 - 0x260000), 0x421400 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Gust Flame 2", 0x421400 - (0x421000 - 0x260000), 0x421480 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 1", 0x421580 - (0x421000 - 0x260000), 0x421600 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 2", 0x421600 - (0x421000 - 0x260000), 0x421680 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 3", 0x421680 - (0x421000 - 0x260000), 0x421700 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 4", 0x421700 - (0x421000 - 0x260000), 0x421780 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 5", 0x421780 - (0x421000 - 0x260000), 0x421800 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 6", 0x421800 - (0x421000 - 0x260000), 0x421880 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 1", 0x421a00 - (0x421000 - 0x260000), 0x421a80 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 2", 0x421980 - (0x421000 - 0x260000), 0x421a00 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 3", 0x421900 - (0x421000 - 0x260000), 0x421980 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 4", 0x421880 - (0x421000 - 0x260000), 0x421900 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },

    { L"Hauzer Burned 1", 0x423a00 - (0x421000 - 0x260000), 0x423a80 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Burned 2", 0x423a80 - (0x421000 - 0x260000), 0x423b00 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Shocked 1", 0x423b00 - (0x421000 - 0x260000), 0x423b80 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Shocked 2", 0x423b80 - (0x421000 - 0x260000), 0x423c00 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 1", 0x423c00 - (0x421000 - 0x260000), 0x423c80 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 2", 0x423c80 - (0x421000 - 0x260000), 0x423d00 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 3", 0x423d00 - (0x421000 - 0x260000), 0x423d80 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 4", 0x423d80 - (0x421000 - 0x260000), 0x423e00 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Petrified 1", 0x423e00 - (0x421000 - 0x260000), 0x423e80 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Petrified 2", 0x423f00 - (0x421000 - 0x260000), 0x423f80 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 1", 0x423f80 - (0x421000 - 0x260000), 0x424000 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 2", 0x424000 - (0x421000 - 0x260000), 0x424080 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 3", 0x424080 - (0x421000 - 0x260000), 0x424100 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 4", 0x424100 - (0x421000 - 0x260000), 0x424180 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 5", 0x424180 - (0x421000 - 0x260000), 0x424200 - (0x421000 - 0x260000), indexRedEarthSprites_Hauzer, 0 },

    { L"Hauzer's Unknown Palette 1", 0x421480 - (0x421000 - 0x260000), 0x421580 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 2", 0x421a80 - (0x421000 - 0x260000), 0x421b00 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 3", 0x421b00 - (0x421000 - 0x260000), 0x421b80 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 4", 0x421b80 - (0x421000 - 0x260000), 0x421c00 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 5", 0x421c00 - (0x421000 - 0x260000), 0x421c80 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 6", 0x421c80 - (0x421000 - 0x260000), 0x421d00 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 7", 0x421d00 - (0x421000 - 0x260000), 0x421d80 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 8", 0x421d80 - (0x421000 - 0x260000), 0x421e00 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 9", 0x421e00 - (0x421000 - 0x260000), 0x421e80 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 10", 0x421e80 - (0x421000 - 0x260000), 0x421f00 - (0x421000 - 0x260000) },
    { L"Hauzer's Unknown Palette 11", 0x421f00 - (0x421000 - 0x260000), 0x421f80 - (0x421000 - 0x260000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_HAUZER_PALETTES[] =
{
    // Hauzer Transparency on Hauzer Ranges
    { L"Hauzer", 0x421000 - (0x421000 - 0x2a0000), 0x421080 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Hit Effect 1", 0x423e80 - (0x421000 - 0x2a0000), 0x423f00 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Hit Effect 2", 0x421180 - (0x421000 - 0x2a0000), 0x421200 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Fire Effects", 0x421200 - (0x421000 - 0x2a0000), 0x421280 - (0x421000 - 0x2a0000) },
    { L"Hauzer Lava Ball", 0x421280 - (0x421000 - 0x2a0000), 0x421300 - (0x421000 - 0x2a0000) },
    { L"Hauzer Gust Flame 1", 0x421380 - (0x421000 - 0x2a0000), 0x421400 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Gust Flame 2", 0x421400 - (0x421000 - 0x2a0000), 0x421480 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 1", 0x421580 - (0x421000 - 0x2a0000), 0x421600 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 2", 0x421600 - (0x421000 - 0x2a0000), 0x421680 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 3", 0x421680 - (0x421000 - 0x2a0000), 0x421700 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 4", 0x421700 - (0x421000 - 0x2a0000), 0x421780 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 5", 0x421780 - (0x421000 - 0x2a0000), 0x421800 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Berserker 6", 0x421800 - (0x421000 - 0x2a0000), 0x421880 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 1", 0x421a00 - (0x421000 - 0x2a0000), 0x421a80 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 2", 0x421980 - (0x421000 - 0x2a0000), 0x421a00 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 3", 0x421900 - (0x421000 - 0x2a0000), 0x421980 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer End Berserker 4", 0x421880 - (0x421000 - 0x2a0000), 0x421900 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },

    { L"Hauzer Burned 1", 0x423a00 - (0x421000 - 0x2a0000), 0x423a80 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Burned 2", 0x423a80 - (0x421000 - 0x2a0000), 0x423b00 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Shocked 1", 0x423b00 - (0x421000 - 0x2a0000), 0x423b80 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Shocked 2", 0x423b80 - (0x421000 - 0x2a0000), 0x423c00 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 1", 0x423c00 - (0x421000 - 0x2a0000), 0x423c80 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 2", 0x423c80 - (0x421000 - 0x2a0000), 0x423d00 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 3", 0x423d00 - (0x421000 - 0x2a0000), 0x423d80 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Poisoned 4", 0x423d80 - (0x421000 - 0x2a0000), 0x423e00 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Petrified 1", 0x423e00 - (0x421000 - 0x2a0000), 0x423e80 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Petrified 2", 0x423f00 - (0x421000 - 0x2a0000), 0x423f80 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 1", 0x423f80 - (0x421000 - 0x2a0000), 0x424000 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 2", 0x424000 - (0x421000 - 0x2a0000), 0x424080 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 3", 0x424080 - (0x421000 - 0x2a0000), 0x424100 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 4", 0x424100 - (0x421000 - 0x2a0000), 0x424180 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer Frozen 5", 0x424180 - (0x421000 - 0x2a0000), 0x424200 - (0x421000 - 0x2a0000), indexRedEarthSprites_Hauzer, 0 },

    { L"Hauzer's Unknown Palette 1", 0x421480 - (0x421000 - 0x2a0000), 0x421580 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 2", 0x421a80 - (0x421000 - 0x2a0000), 0x421b00 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 3", 0x421b00 - (0x421000 - 0x2a0000), 0x421b80 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 4", 0x421b80 - (0x421000 - 0x2a0000), 0x421c00 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 5", 0x421c00 - (0x421000 - 0x2a0000), 0x421c80 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 6", 0x421c80 - (0x421000 - 0x2a0000), 0x421d00 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 7", 0x421d00 - (0x421000 - 0x2a0000), 0x421d80 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 8", 0x421d80 - (0x421000 - 0x2a0000), 0x421e00 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 9", 0x421e00 - (0x421000 - 0x2a0000), 0x421e80 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 10", 0x421e80 - (0x421000 - 0x2a0000), 0x421f00 - (0x421000 - 0x2a0000) },
    { L"Hauzer's Unknown Palette 11", 0x421f00 - (0x421000 - 0x2a0000), 0x421f80 - (0x421000 - 0x2a0000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_KONGOU_PALETTES[] =
{
    // Kongou
    // 0x424200
    // 0x427400

    // Slash Transparency on Kongou Ranges
    // 0x264000
    // 0x267200

    { L"Kongou", 0x424200 - (0x424200 - 0x264000), 0x424280 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0,& pairNext },
    { L"Kanabo", 0x424280 - (0x424200 - 0x264000), 0x424300 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 1 },
    { L"Stomach acid", 0x424300 - (0x424200 - 0x264000), 0x424380 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0x02 },

    { L"Kongou Burned 1", 0x426c00 - (0x424200 - 0x264000), 0x426c80 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Burned 2", 0x426c80 - (0x424200 - 0x264000), 0x426d00 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Shocked 1", 0x426d00 - (0x424200 - 0x264000), 0x426d80 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Shocked 2", 0x426d80 - (0x424200 - 0x264000), 0x426e00 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 1", 0x426e00 - (0x424200 - 0x264000), 0x426e80 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 2", 0x426e80 - (0x424200 - 0x264000), 0x426f00 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 3", 0x426f00 - (0x424200 - 0x264000), 0x426f80 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Poisoned 4", 0x426f80 - (0x424200 - 0x264000), 0x427000 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Petrified 1", 0x427000 - (0x424200 - 0x264000), 0x427080 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Petrified 2", 0x427080 - (0x424200 - 0x264000), 0x427100 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Petrified 3", 0x427100 - (0x424200 - 0x264000), 0x427180 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 1", 0x427180 - (0x424200 - 0x264000), 0x427200 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 2", 0x427200 - (0x424200 - 0x264000), 0x427280 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 3", 0x427280 - (0x424200 - 0x264000), 0x427300 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Kongou Frozen 4", 0x427300 - (0x424200 - 0x264000), 0x427380 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Hurt flash", 0x427380 - (0x424200 - 0x264000), 0x427400 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 1", 0x424380 - (0x424200 - 0x264000), 0x424400 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 2", 0x424400 - (0x424200 - 0x264000), 0x424480 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 3", 0x424480 - (0x424200 - 0x264000), 0x424500 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 4", 0x424500 - (0x424200 - 0x264000), 0x424580 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 5", 0x424580 - (0x424200 - 0x264000), 0x424600 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 6", 0x424600 - (0x424200 - 0x264000), 0x424680 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 7", 0x424680 - (0x424200 - 0x264000), 0x424700 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0 },
    { L"Tanuma", 0x424700 - (0x424200 - 0x264000), 0x424880 - (0x424200 - 0x264000), indexRedEarthSprites_Kongou, 0x03 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_HYDRON_PALETTES[] =
{
    // Hydron
    // 0x427400
    // 0x42a600

    // Slash Transparency on Hydron Ranges
    // 0x268000
    // 0x26b200

    { L"Hydron", 0x427400 - (0x427400 - 0x268000), 0x427480 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Poison Blast FX", 0x427500 - (0x427400 - 0x268000), 0x427580 - (0x427400 - 0x268000) },
    { L"Squid boys spawn Tentacle", 0x427580 - (0x427400 - 0x268000), 0x427600 - (0x427400 - 0x268000) },

    { L"Electric PalFX1", 0x427600 - (0x427400 - 0x268000), 0x427680 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427680 - (0x427400 - 0x268000), 0x427700 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427780 - (0x427400 - 0x268000), 0x427800 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427800 - (0x427400 - 0x268000), 0x427880 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427880 - (0x427400 - 0x268000), 0x427900 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427900 - (0x427400 - 0x268000), 0x427980 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427980 - (0x427400 - 0x268000), 0x427a00 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427a00 - (0x427400 - 0x268000), 0x427a80 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427a80 - (0x427400 - 0x268000), 0x427b00 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427b00 - (0x427400 - 0x268000), 0x427b80 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427b80 - (0x427400 - 0x268000), 0x427c00 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427c00 - (0x427400 - 0x268000), 0x427c80 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Firecharge PalFX", 0x427d00 - (0x427400 - 0x268000), 0x427d80 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Spin attack FX", 0x427d80 - (0x427400 - 0x268000), 0x427e00 - (0x427400 - 0x268000) },
    { L"Squid dudes spawn FX", 0x428000 - (0x427400 - 0x268000), 0x428080 - (0x427400 - 0x268000) },

    { L"Isia, Janna, Elena", 0x428300 - (0x427400 - 0x268000), 0x428380 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0x01 },
    { L"Isia's White Dog", 0x428380 - (0x427400 - 0x268000), 0x428400 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0x02 },
    { L"Isia's Gray Dog", 0x428400 - (0x427400 - 0x268000), 0x428480 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0x02 },

    { L"Hydron Burned 1", 0x429e00 - (0x427400 - 0x268000), 0x429e80 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Burned 2", 0x429e80 - (0x427400 - 0x268000), 0x429f00 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Shocked 1", 0x429f00 - (0x427400 - 0x268000), 0x429f80 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Shocked 2", 0x429f80 - (0x427400 - 0x268000), 0x42a000 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 1", 0x42a000 - (0x427400 - 0x268000), 0x42a080 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 2", 0x42a080 - (0x427400 - 0x268000), 0x42a100 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 3", 0x42a100 - (0x427400 - 0x268000), 0x42a180 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 4", 0x42a180 - (0x427400 - 0x268000), 0x42a200 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 1", 0x42a200 - (0x427400 - 0x268000), 0x42a280 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 2", 0x42a280 - (0x427400 - 0x268000), 0x42a300 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 3", 0x42a300 - (0x427400 - 0x268000), 0x42a380 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 1", 0x42a380 - (0x427400 - 0x268000), 0x42a400 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 2", 0x42a400 - (0x427400 - 0x268000), 0x42a480 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 3", 0x42a480 - (0x427400 - 0x268000), 0x42a500 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 4", 0x42a500 - (0x427400 - 0x268000), 0x42a580 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 5", 0x42a580 - (0x427400 - 0x268000), 0x42a600 - (0x427400 - 0x268000), indexRedEarthSprites_Hydron, 0 },

    { L"Hydron's Unknown Palette 1", 0x427480 - (0x427400 - 0x268000), 0x427500 - (0x427400 - 0x268000) },
    { L"Hydron's Unknown Palette 2", 0x427700 - (0x427400 - 0x268000), 0x427780 - (0x427400 - 0x268000) },
    { L"Hydron's Unknown Palette 3", 0x427c80 - (0x427400 - 0x268000), 0x427d00 - (0x427400 - 0x268000) },
    { L"Hydron's Unknown Palette 4", 0x427e00 - (0x427400 - 0x268000), 0x428000 - (0x427400 - 0x268000) },
    { L"Hydron's Unknown Palette 5 (1/2) 0x428080", 0x428080 - (0x427400 - 0x268000), 0x428280 - (0x427400 - 0x268000) },
    { L"Hydron's Unknown Palette 5 (2/2) 0x428280", 0x428280 - (0x427400 - 0x268000), 0x428300 - (0x427400 - 0x268000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_HYDRON_PALETTES[] =
{
    // Hydron Transparency on Hydron Ranges
    // 0x2a4000
    // 0x2a7200

    { L"Hydron", 0x427400 - (0x427400 - 0x2a4000), 0x427480 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Poison Blast FX", 0x427500 - (0x427400 - 0x2a4000), 0x427580 - (0x427400 - 0x2a4000) },
    { L"Squid boys spawn Tentacle", 0x427580 - (0x427400 - 0x2a4000), 0x427600 - (0x427400 - 0x2a4000) },

    { L"Electric PalFX1", 0x427600 - (0x427400 - 0x2a4000), 0x427680 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427680 - (0x427400 - 0x2a4000), 0x427700 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427780 - (0x427400 - 0x2a4000), 0x427800 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427800 - (0x427400 - 0x2a4000), 0x427880 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427880 - (0x427400 - 0x2a4000), 0x427900 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427900 - (0x427400 - 0x2a4000), 0x427980 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427980 - (0x427400 - 0x2a4000), 0x427a00 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427a00 - (0x427400 - 0x2a4000), 0x427a80 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427a80 - (0x427400 - 0x2a4000), 0x427b00 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427b00 - (0x427400 - 0x2a4000), 0x427b80 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427b80 - (0x427400 - 0x2a4000), 0x427c00 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Electric PalFX1", 0x427c00 - (0x427400 - 0x2a4000), 0x427c80 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Firecharge PalFX", 0x427d00 - (0x427400 - 0x2a4000), 0x427d80 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Spin attack FX", 0x427d80 - (0x427400 - 0x2a4000), 0x427e00 - (0x427400 - 0x2a4000) },
    { L"Squid dudes spawn FX", 0x428000 - (0x427400 - 0x2a4000), 0x428080 - (0x427400 - 0x2a4000) },

    { L"Isia, Janna, Elena", 0x428300 - (0x427400 - 0x2a4000), 0x428380 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0x01 },
    { L"Isia's White Dog", 0x428380 - (0x427400 - 0x2a4000), 0x428400 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0x02 },
    { L"Isia's Gray Dog", 0x428400 - (0x427400 - 0x2a4000), 0x428480 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0x02 },

    { L"Hydron Burned 1", 0x429e00 - (0x427400 - 0x2a4000), 0x429e80 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Burned 2", 0x429e80 - (0x427400 - 0x2a4000), 0x429f00 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Shocked 1", 0x429f00 - (0x427400 - 0x2a4000), 0x429f80 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Shocked 2", 0x429f80 - (0x427400 - 0x2a4000), 0x42a000 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 1", 0x42a000 - (0x427400 - 0x2a4000), 0x42a080 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 2", 0x42a080 - (0x427400 - 0x2a4000), 0x42a100 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 3", 0x42a100 - (0x427400 - 0x2a4000), 0x42a180 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Poisoned 4", 0x42a180 - (0x427400 - 0x2a4000), 0x42a200 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 1", 0x42a200 - (0x427400 - 0x2a4000), 0x42a280 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 2", 0x42a280 - (0x427400 - 0x2a4000), 0x42a300 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Petrified 3", 0x42a300 - (0x427400 - 0x2a4000), 0x42a380 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 1", 0x42a380 - (0x427400 - 0x2a4000), 0x42a400 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 2", 0x42a400 - (0x427400 - 0x2a4000), 0x42a480 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 3", 0x42a480 - (0x427400 - 0x2a4000), 0x42a500 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 4", 0x42a500 - (0x427400 - 0x2a4000), 0x42a580 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },
    { L"Hydron Frozen 5", 0x42a580 - (0x427400 - 0x2a4000), 0x42a600 - (0x427400 - 0x2a4000), indexRedEarthSprites_Hydron, 0 },

    { L"Hydron's Unknown Palette 1", 0x427480 - (0x427400 - 0x2a4000), 0x427500 - (0x427400 - 0x2a4000) },
    { L"Hydron's Unknown Palette 2", 0x427700 - (0x427400 - 0x2a4000), 0x427780 - (0x427400 - 0x2a4000) },
    { L"Hydron's Unknown Palette 3", 0x427c80 - (0x427400 - 0x2a4000), 0x427d00 - (0x427400 - 0x2a4000) },
    { L"Hydron's Unknown Palette 4", 0x427e00 - (0x427400 - 0x2a4000), 0x428000 - (0x427400 - 0x2a4000) },
    { L"Hydron's Unknown Palette 5 (1/2) 0x428080", 0x428080 - (0x427400 - 0x2a4000), 0x428280 - (0x427400 - 0x2a4000) },
    { L"Hydron's Unknown Palette 5 (2/2) 0x428280", 0x428280 - (0x427400 - 0x2a4000), 0x428300 - (0x427400 - 0x2a4000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_LAVIA_PALETTES[] =
{
    // Lavia
    // 0x42a600
    // 0x42d800

    // Slash Transparency on Lavia Ranges
    // 0x26c000
    // 0x26f200

    { L"Lavia", 0x42a600 - (0x42a600 - 0x26c000), 0x42a680 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Intro Effects, Soul, Dust, Fire", 0x42a680 - (0x42a600 - 0x26c000), 0x42a700 - (0x42a600 - 0x26c000) },
    { L"Sparks", 0x42a700 - (0x42a600 - 0x26c000), 0x42a780 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia, 0x02 },
    { L"Feather Projectiles", 0x42a780 - (0x42a600 - 0x26c000), 0x42a800 - (0x42a600 - 0x26c000) },
    { L"Lavia's Soul Second Palette", 0x42a800 - (0x42a600 - 0x26c000), 0x42a880 - (0x42a600 - 0x26c000) },

    { L"Lavia Burned 1", 0x42d000 - (0x42a600 - 0x26c000), 0x42d080 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Burned 2", 0x42d080 - (0x42a600 - 0x26c000), 0x42d100 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Shocked 1", 0x42d100 - (0x42a600 - 0x26c000), 0x42d180 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Shocked 2", 0x42d180 - (0x42a600 - 0x26c000), 0x42d200 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 1", 0x42d200 - (0x42a600 - 0x26c000), 0x42d280 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 2", 0x42d280 - (0x42a600 - 0x26c000), 0x42d300 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 3", 0x42d300 - (0x42a600 - 0x26c000), 0x42d380 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Poisoned 4", 0x42d380 - (0x42a600 - 0x26c000), 0x42d400 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 1", 0x42d400 - (0x42a600 - 0x26c000), 0x42d480 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 2", 0x42d480 - (0x42a600 - 0x26c000), 0x42d500 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Petrified 3", 0x42d500 - (0x42a600 - 0x26c000), 0x42d580 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 1", 0x42d580 - (0x42a600 - 0x26c000), 0x42d600 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 2", 0x42d600 - (0x42a600 - 0x26c000), 0x42d680 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 3", 0x42d680 - (0x42a600 - 0x26c000), 0x42d700 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 4", 0x42d700 - (0x42a600 - 0x26c000), 0x42d780 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
    { L"Lavia Frozen 5", 0x42d780 - (0x42a600 - 0x26c000), 0x42d800 - (0x42a600 - 0x26c000), indexRedEarthSprites_Lavia },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_RAVANGE_PALETTES[] =
{
    // Ravange
    // 0x42d800
    // 0x430a00

    // Slash Transparency on Ravange Ranges
    // 0x270000
    // 0x273200

    { L"Ravange", 0x42d800 - (0x42d800 - 0x270000), 0x42d880 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },

    { L"Fire FX", 0x42d880 - (0x42d800 - 0x270000), 0x42d900 - (0x42d800 - 0x270000) },
    { L"Beam FX", 0x42d900 - (0x42d800 - 0x270000), 0x42d980 - (0x42d800 - 0x270000) },
    { L"Sand FX", 0x42d980 - (0x42d800 - 0x270000), 0x42da00 - (0x42d800 - 0x270000) },
    { L"Shield", 0x42da80 - (0x42d800 - 0x270000), 0x42db80 - (0x42d800 - 0x270000) },
    { L"Fire Breath flash", 0x42db80 - (0x42d800 - 0x270000), 0x42dc00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 1", 0x42dc00 - (0x42d800 - 0x270000), 0x42dc80 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 2", 0x42dc80 - (0x42d800 - 0x270000), 0x42dd00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 3", 0x42dd00 - (0x42d800 - 0x270000), 0x42dd80 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 4", 0x42dd80 - (0x42d800 - 0x270000), 0x42de00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 1", 0x42de00 - (0x42d800 - 0x270000), 0x42de80 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 2", 0x42de80 - (0x42d800 - 0x270000), 0x42df00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 3", 0x42df00 - (0x42d800 - 0x270000), 0x42df80 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 4", 0x42df80 - (0x42d800 - 0x270000), 0x42e000 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 1", 0x42e400 - (0x42d800 - 0x270000), 0x42e480 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 2", 0x42e480 - (0x42d800 - 0x270000), 0x42e500 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 3", 0x42e500 - (0x42d800 - 0x270000), 0x42e580 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 4", 0x42e580 - (0x42d800 - 0x270000), 0x42e600 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Poison Mist FX1", 0x42ea00 - (0x42d800 - 0x270000), 0x42eb00 - (0x42d800 - 0x270000) },
    { L"Ravange Sphinx Intro", 0x42eb00 - (0x42d800 - 0x270000), 0x42eb80 - (0x42d800 - 0x270000) },
    { L"Ravange Sphinx Flash 1", 0x42eb80 - (0x42d800 - 0x270000), 0x42ec00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ravange Sphinx Flash 2", 0x42ec00 - (0x42d800 - 0x270000), 0x42ec80 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 1", 0x42ec80 - (0x42d800 - 0x270000), 0x42ed00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 2", 0x42ed00 - (0x42d800 - 0x270000), 0x42ed80 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 3", 0x42ed80 - (0x42d800 - 0x270000), 0x42ee00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 4", 0x42ee00 - (0x42d800 - 0x270000), 0x42ee80 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ram attack 1", 0x42e600 - (0x42d800 - 0x270000), 0x42e680 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ram attack 2", 0x42e680 - (0x42d800 - 0x270000), 0x42e700 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ram attack 3", 0x42e700 - (0x42d800 - 0x270000), 0x42e780 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Ram attack 4", 0x42e780 - (0x42d800 - 0x270000), 0x42e800 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Lion attack 1", 0x42e800 - (0x42d800 - 0x270000), 0x42e880 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Lion attack 2", 0x42e880 - (0x42d800 - 0x270000), 0x42e900 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Lion attack 3", 0x42e900 - (0x42d800 - 0x270000), 0x42e980 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange },
    { L"Lion attack 4", 0x42e980 - (0x42d800 - 0x270000), 0x42ea00 - (0x42d800 - 0x270000), },
    { L"Clara Tantra",  0x42f300 - (0x42d800 - 0x270000), 0x42f380 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x0a },
    { L"Clara Flashing 1", 0x42f380 - (0x42d800 - 0x270000), 0x42f400 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 2", 0x42f400 - (0x42d800 - 0x270000), 0x42f480 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 3", 0x42f480 - (0x42d800 - 0x270000), 0x42f500 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 4", 0x42f500 - (0x42d800 - 0x270000), 0x42f580 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 5", 0x42f580 - (0x42d800 - 0x270000), 0x42f600 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 6", 0x42f600 - (0x42d800 - 0x270000), 0x42f680 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 7", 0x42f680 - (0x42d800 - 0x270000), 0x42f700 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 8", 0x42f700 - (0x42d800 - 0x270000), 0x42f780 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 9", 0x42f780 - (0x42d800 - 0x270000), 0x42f800 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 10", 0x42f800 - (0x42d800 - 0x270000), 0x42f880 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 11", 0x42f880 - (0x42d800 - 0x270000), 0x42f900 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 12", 0x42f900 - (0x42d800 - 0x270000), 0x42f980 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Pyre", 0x42f980 - (0x42d800 - 0x270000), 0x42fa00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x09 },
    { L"Clara ball FX", 0x42fb00 - (0x42d800 - 0x270000), 0x42fb80 - (0x42d800 - 0x270000) },

    { L"Ravange's Sand Ladies", 0x42ee80 - (0x42d800 - 0x270000), 0x42ef00 - (0x42d800 - 0x270000) },
    { L"Kids", 0x42fa00 - (0x42d800 - 0x270000), 0x42fb00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x01 },

    { L"Ravange Burned 1", 0x430200 - (0x42d800 - 0x270000), 0x430280 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Burned 2", 0x430280 - (0x42d800 - 0x270000), 0x430300 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Shocked 1", 0x430300 - (0x42d800 - 0x270000), 0x430380 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Shocked 2", 0x430380 - (0x42d800 - 0x270000), 0x430400 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 1", 0x430400 - (0x42d800 - 0x270000), 0x430480 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 2", 0x430480 - (0x42d800 - 0x270000), 0x430500 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 3", 0x430500 - (0x42d800 - 0x270000), 0x430580 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 4", 0x430580 - (0x42d800 - 0x270000), 0x430600 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 1", 0x430600 - (0x42d800 - 0x270000), 0x430680 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 2", 0x430680 - (0x42d800 - 0x270000), 0x430700 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 3", 0x430700 - (0x42d800 - 0x270000), 0x430780 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 1", 0x430780 - (0x42d800 - 0x270000), 0x430800 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 2", 0x430800 - (0x42d800 - 0x270000), 0x430880 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 3", 0x430880 - (0x42d800 - 0x270000), 0x430900 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 4", 0x430900 - (0x42d800 - 0x270000), 0x430980 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 5", 0x430980 - (0x42d800 - 0x270000), 0x430a00 - (0x42d800 - 0x270000), indexRedEarthSprites_Ravange, 0x00 },

    { L"Ravange's 2nd Form Transformation Explosions", 0x330e80, 0x330f00 },
    { L"Ravange's Unknown Palette 1", 0x42da00 - (0x42d800 - 0x270000), 0x42da80 - (0x42d800 - 0x270000) },
    { L"Ravange's Unknown Palette 2 (1/2) 0x42e000", 0x42e000 - (0x42d800 - 0x270000), 0x42e200 - (0x42d800 - 0x270000) },
    { L"Ravange's Unknown Palette 2 (2/2) 0x42e200", 0x42e200 - (0x42d800 - 0x270000), 0x42e400 - (0x42d800 - 0x270000) },

    { L"Ravange's Unknown Palette 3", 0x42f100 - (0x42d800 - 0x270000), 0x42f280 - (0x42d800 - 0x270000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_RAVANGE_RAVANGE_PALETTES[] =
{
    // Ravange Transparency on Ravange Ranges
    // 0x2a8000
    // 0x2ab200

    { L"Ravange", 0x42d800 - (0x42d800 - 0x2a8000), 0x42d880 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },

    { L"Fire FX", 0x42d880 - (0x42d800 - 0x2a8000), 0x42d900 - (0x42d800 - 0x2a8000) },
    { L"Beam FX", 0x42d900 - (0x42d800 - 0x2a8000), 0x42d980 - (0x42d800 - 0x2a8000) },
    { L"Sand FX", 0x42d980 - (0x42d800 - 0x2a8000), 0x42da00 - (0x42d800 - 0x2a8000) },
    { L"Shield", 0x42da80 - (0x42d800 - 0x2a8000), 0x42db80 - (0x42d800 - 0x2a8000) },
    { L"Fire Breath flash", 0x42db80 - (0x42d800 - 0x2a8000), 0x42dc00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 1", 0x42dc00 - (0x42d800 - 0x2a8000), 0x42dc80 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 2", 0x42dc80 - (0x42d800 - 0x2a8000), 0x42dd00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 3", 0x42dd00 - (0x42d800 - 0x2a8000), 0x42dd80 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Fire Breath 4", 0x42dd80 - (0x42d800 - 0x2a8000), 0x42de00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 1", 0x42de00 - (0x42d800 - 0x2a8000), 0x42de80 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 2", 0x42de80 - (0x42d800 - 0x2a8000), 0x42df00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 3", 0x42df00 - (0x42d800 - 0x2a8000), 0x42df80 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Firing Beam 4", 0x42df80 - (0x42d800 - 0x2a8000), 0x42e000 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 1", 0x42e400 - (0x42d800 - 0x2a8000), 0x42e480 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 2", 0x42e480 - (0x42d800 - 0x2a8000), 0x42e500 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 3", 0x42e500 - (0x42d800 - 0x2a8000), 0x42e580 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Spawning Sand 4", 0x42e580 - (0x42d800 - 0x2a8000), 0x42e600 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Poison Mist FX1", 0x42ea00 - (0x42d800 - 0x2a8000), 0x42eb00 - (0x42d800 - 0x2a8000) },
    { L"Ravange Sphinx Intro", 0x42eb00 - (0x42d800 - 0x2a8000), 0x42eb80 - (0x42d800 - 0x2a8000) },
    { L"Ravange Sphinx Flash 1", 0x42eb80 - (0x42d800 - 0x2a8000), 0x42ec00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ravange Sphinx Flash 2", 0x42ec00 - (0x42d800 - 0x2a8000), 0x42ec80 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 1", 0x42ec80 - (0x42d800 - 0x2a8000), 0x42ed00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 2", 0x42ed00 - (0x42d800 - 0x2a8000), 0x42ed80 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 3", 0x42ed80 - (0x42d800 - 0x2a8000), 0x42ee00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ravange morph flash 4", 0x42ee00 - (0x42d800 - 0x2a8000), 0x42ee80 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ram attack 1", 0x42e600 - (0x42d800 - 0x2a8000), 0x42e680 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ram attack 2", 0x42e680 - (0x42d800 - 0x2a8000), 0x42e700 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ram attack 3", 0x42e700 - (0x42d800 - 0x2a8000), 0x42e780 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Ram attack 4", 0x42e780 - (0x42d800 - 0x2a8000), 0x42e800 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Lion attack 1", 0x42e800 - (0x42d800 - 0x2a8000), 0x42e880 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Lion attack 2", 0x42e880 - (0x42d800 - 0x2a8000), 0x42e900 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Lion attack 3", 0x42e900 - (0x42d800 - 0x2a8000), 0x42e980 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange },
    { L"Lion attack 4", 0x42e980 - (0x42d800 - 0x2a8000), 0x42ea00 - (0x42d800 - 0x2a8000), },
    { L"Clara Tantra",  0x42f300 - (0x42d800 - 0x2a8000), 0x42f380 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x0a },
    { L"Clara Flashing 1", 0x42f380 - (0x42d800 - 0x2a8000), 0x42f400 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 2", 0x42f400 - (0x42d800 - 0x2a8000), 0x42f480 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 3", 0x42f480 - (0x42d800 - 0x2a8000), 0x42f500 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 4", 0x42f500 - (0x42d800 - 0x2a8000), 0x42f580 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 5", 0x42f580 - (0x42d800 - 0x2a8000), 0x42f600 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 6", 0x42f600 - (0x42d800 - 0x2a8000), 0x42f680 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 7", 0x42f680 - (0x42d800 - 0x2a8000), 0x42f700 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 8", 0x42f700 - (0x42d800 - 0x2a8000), 0x42f780 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 9", 0x42f780 - (0x42d800 - 0x2a8000), 0x42f800 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 10", 0x42f800 - (0x42d800 - 0x2a8000), 0x42f880 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 11", 0x42f880 - (0x42d800 - 0x2a8000), 0x42f900 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Clara Flashing 12", 0x42f900 - (0x42d800 - 0x2a8000), 0x42f980 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x08 },
    { L"Pyre", 0x42f980 - (0x42d800 - 0x2a8000), 0x42fa00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x09 },
    { L"Clara ball FX", 0x42fb00 - (0x42d800 - 0x2a8000), 0x42fb80 - (0x42d800 - 0x2a8000) },

    { L"Ravange's Sand Ladies", 0x42ee80 - (0x42d800 - 0x2a8000), 0x42ef00 - (0x42d800 - 0x2a8000) },
    { L"Kids", 0x42fa00 - (0x42d800 - 0x2a8000), 0x42fb00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x01 },

    { L"Ravange Burned 1", 0x430200 - (0x42d800 - 0x2a8000), 0x430280 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Burned 2", 0x430280 - (0x42d800 - 0x2a8000), 0x430300 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Shocked 1", 0x430300 - (0x42d800 - 0x2a8000), 0x430380 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Shocked 2", 0x430380 - (0x42d800 - 0x2a8000), 0x430400 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 1", 0x430400 - (0x42d800 - 0x2a8000), 0x430480 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 2", 0x430480 - (0x42d800 - 0x2a8000), 0x430500 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 3", 0x430500 - (0x42d800 - 0x2a8000), 0x430580 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Poisoned 4", 0x430580 - (0x42d800 - 0x2a8000), 0x430600 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 1", 0x430600 - (0x42d800 - 0x2a8000), 0x430680 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 2", 0x430680 - (0x42d800 - 0x2a8000), 0x430700 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Petrified 3", 0x430700 - (0x42d800 - 0x2a8000), 0x430780 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 1", 0x430780 - (0x42d800 - 0x2a8000), 0x430800 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 2", 0x430800 - (0x42d800 - 0x2a8000), 0x430880 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 3", 0x430880 - (0x42d800 - 0x2a8000), 0x430900 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 4", 0x430900 - (0x42d800 - 0x2a8000), 0x430980 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },
    { L"Ravange Frozen 5", 0x430980 - (0x42d800 - 0x2a8000), 0x430a00 - (0x42d800 - 0x2a8000), indexRedEarthSprites_Ravange, 0x00 },

    { L"Ravange's 2nd Form Transformation Explosions", 0x33ce80, 0x33cf00 },
    { L"Ravange's Unknown Palette 1", 0x42da00 - (0x42d800 - 0x2a8000), 0x42da80 - (0x42d800 - 0x2a8000) },
    { L"Ravange's Unknown Palette 2 (1/2) 0x42e000", 0x42e000 - (0x42d800 - 0x2a8000), 0x42e200 - (0x42d800 - 0x2a8000) },
    { L"Ravange's Unknown Palette 2 (2/2) 0x42e200", 0x42e200 - (0x42d800 - 0x2a8000), 0x42e400 - (0x42d800 - 0x2a8000) },

    { L"Ravange's Unknown Palette 3", 0x42f100 - (0x42d800 - 0x2a8000), 0x42f280 - (0x42d800 - 0x2a8000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HAUZER_RAVANGE_PALETTES[] =
{
    { L"Ravange's 2nd Form Transformation Explosions", 0x334e80, 0x334f00 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_HYDRON_RAVANGE_PALETTES[] =
{
    { L"Ravange's 2nd Form Transformation Explosions", 0x338e80, 0x338f00 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_RAVANGE_PALETTES[] =
{
    { L"Ravange's 2nd Form Transformation Explosions", 0x340e80, 0x340f00 },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_GIGI_PALETTES[] =
{
    // Gi Gi
    // 0x430a00
    // 0x433c00

    // Slash Transparency on Gi Gi Ranges
    // 0x274000
    // 0x277200

    { L"Gi Gi Red Form", 0x430a00 - (0x430a00 - 0x274000), 0x430a80 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x09, &pairNext3Palettes },
    { L"Gi Gi From Red to Blue Switch", 0x431700 - (0x430a00 - 0x274000), 0x431780 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x07 },
    { L"Gi Gi From Blue to Red Switch", 0x431780 - (0x430a00 - 0x274000), 0x431800 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x06 },
    { L"Gi Gi Blue Form", 0x431800 - (0x430a00 - 0x274000), 0x431880 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x08 },


    { L"Gi Gi Block 1", 0x430c00 - (0x430a00 - 0x274000), 0x430c80 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x01 },
    { L"Gi Gi Block & Golden Chair 2", 0x430c80 - (0x430a00 - 0x274000), 0x430d00 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x02 },
    { L"Gi Gi Block 3", 0x430d00 - (0x430a00 - 0x274000), 0x430d80 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x03 },
    { L"Gi Gi Block 4", 0x430d80 - (0x430a00 - 0x274000), 0x430e00 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x04 },

    { L"Gi Gi Columns & Rocks 1/2", 0x431180 - (0x430a00 - 0x274000), 0x431200 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x05 },
    { L"Gi Gi Columns & Rocks 2/2", 0x431600 - (0x430a00 - 0x274000), 0x431680 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x05 },
    { L"Gi Gi Column Summon", 0x431280 - (0x430a00 - 0x274000), 0x431300 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0c },
    { L"Gi Gi Falling Rock Summon", 0x431300 - (0x430a00 - 0x274000), 0x431380 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0c },
    { L"Gi Gi Spear Summon", 0x431380 - (0x430a00 - 0x274000), 0x431400 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0c },

    { L"Gi Gi Ground Spears", 0x431200 - (0x430a00 - 0x274000), 0x431280 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0a },
    { L"Gi Gi Super Fast Sword Slash", 0x431000 - (0x430a00 - 0x274000), 0x431080 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0e },
    { L"Gi Gi Lighter Sword Slash", 0x431080 - (0x430a00 - 0x274000), 0x431100 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0b },
    { L"Gi Gi Stunned", 0x431100 - (0x430a00 - 0x274000), 0x431180 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },

    { L"Gi Gi Victory Column 1/4", 0x431400 - (0x430a00 - 0x274000), 0x431480 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0f },
    { L"Gi Gi Victory Column 2/4", 0x431480 - (0x430a00 - 0x274000), 0x431500 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0f },
    { L"Gi Gi Victory Column 3/4", 0x431500 - (0x430a00 - 0x274000), 0x431580 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0f },
    { L"Gi Gi Victory Column 4/4", 0x431580 - (0x430a00 - 0x274000), 0x431600 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x0f },

    { L"Red Form Burned 1", 0x433400 - (0x430a00 - 0x274000), 0x433480 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Burned 2", 0x433480 - (0x430a00 - 0x274000), 0x433500 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Shocked 1", 0x433500 - (0x430a00 - 0x274000), 0x433580 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Shocked 2", 0x433580 - (0x430a00 - 0x274000), 0x433600 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Petrified 1", 0x433800 - (0x430a00 - 0x274000), 0x433880 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Petrified 2", 0x433880 - (0x430a00 - 0x274000), 0x433900 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Red Form Petrified 3", 0x433900 - (0x430a00 - 0x274000), 0x433980 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Burned 1", 0x433080 - (0x430a00 - 0x274000), 0x433100 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Burned 2", 0x433100 - (0x430a00 - 0x274000), 0x433180 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Shocked 1", 0x433180 - (0x430a00 - 0x274000), 0x433200 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Shocked 2", 0x433200 - (0x430a00 - 0x274000), 0x433280 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Petrified 1", 0x433280 - (0x430a00 - 0x274000), 0x433300 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Petrified 2", 0x433300 - (0x430a00 - 0x274000), 0x433380 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Blue Form Petrified 3", 0x433380 - (0x430a00 - 0x274000), 0x433400 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 1", 0x433600 - (0x430a00 - 0x274000), 0x433680 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 2", 0x433680 - (0x430a00 - 0x274000), 0x433700 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 3", 0x433700 - (0x430a00 - 0x274000), 0x433780 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Poisoned 4", 0x433780 - (0x430a00 - 0x274000), 0x433800 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 1", 0x433980 - (0x430a00 - 0x274000), 0x433a00 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 2", 0x433a00 - (0x430a00 - 0x274000), 0x433a80 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 3", 0x433a80 - (0x430a00 - 0x274000), 0x433b00 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 4", 0x433b00 - (0x430a00 - 0x274000), 0x433b80 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },
    { L"Gi Gi Frozen 5", 0x433b80 - (0x430a00 - 0x274000), 0x433c00 - (0x430a00 - 0x274000), indexRedEarthSprites_GiGi, 0x20 },

    { L"Gi Gi's Unknown Palette Range 1", 0x430a80 - (0x430a00 - 0x274000), 0x430c00 - (0x430a00 - 0x274000) },
    { L"Gi Gi's Unknown Palette Range 2", 0x430e00 - (0x430a00 - 0x274000), 0x431000 - (0x430a00 - 0x274000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_BLADE_PALETTES[] =
{
    // Blade
    // 0x433c00
    // 0x436e00

    // Slash Transparency on Blade Ranges
    // 0x278000
    // 0x27b200

    { L"Blade/Mirror Frame", 0x433c00 - (0x433c00 - 0x278000), 0x433c80 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x00, &pairNext },
    { L"Emerald FX/Intro 1/Adrayer+attacking gauntlets", 0x433c80 - (0x433c00 - 0x278000), 0x433d00 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Emerald FX/Intro 2", 0x433d00 - (0x433c00 - 0x278000), 0x433d80 - (0x433c00 - 0x278000), indexRedEarthSprites_Bonus, 0x0c },
    { L"Emerald FX/Intro 3", 0x433d80 - (0x433c00 - 0x278000), 0x433e00 - (0x433c00 - 0x278000), indexRedEarthSprites_Bonus, 0x0d },
    { L"Hit Ground after swing FX/Mirror Glass", 0x433e00 - (0x433c00 - 0x278000), 0x433f00 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x03 },
    { L"Blade Burned 1", 0x436600 - (0x433c00 - 0x278000), 0x436680 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Burned 2", 0x436680 - (0x433c00 - 0x278000), 0x436700 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Shocked 1", 0x436700 - (0x433c00 - 0x278000), 0x436780 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Shocked 2", 0x436780 - (0x433c00 - 0x278000), 0x436800 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 1", 0x436800 - (0x433c00 - 0x278000), 0x436880 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 2", 0x436880 - (0x433c00 - 0x278000), 0x436900 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 3", 0x436900 - (0x433c00 - 0x278000), 0x436980 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 4", 0x436980 - (0x433c00 - 0x278000), 0x436a00 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 1", 0x436a00 - (0x433c00 - 0x278000), 0x436a80 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 2", 0x436a80 - (0x433c00 - 0x278000), 0x436b00 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 3", 0x436b00 - (0x433c00 - 0x278000), 0x436b80 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 1", 0x436b80 - (0x433c00 - 0x278000), 0x436c00 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 2", 0x436c00 - (0x433c00 - 0x278000), 0x436c80 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 3", 0x436c80 - (0x433c00 - 0x278000), 0x436d00 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 4", 0x436d00 - (0x433c00 - 0x278000), 0x436d80 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 5", 0x436d80 - (0x433c00 - 0x278000), 0x436e00 - (0x433c00 - 0x278000), indexRedEarthSprites_Blade, 0x01 },

    { L"Blade's Unknown Palette", 0x433f80 - (0x433c00 - 0x278000), 0x434000 - (0x433c00 - 0x278000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_BLADE_BLADE_PALETTES[] =
{
    // Blade Transparency on Blade Ranges
    // 0x2ac000
    // 0x2af200

    { L"Blade/Mirror Frame", 0x433c00 - (0x433c00 - 0x2ac000), 0x433c80 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x00, &pairNext },
    { L"Emerald FX/Intro 1/Adrayer+attacking gauntlets", 0x433c80 - (0x433c00 - 0x2ac000), 0x433d00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Emerald FX/Intro 2", 0x433d00 - (0x433c00 - 0x2ac000), 0x433d80 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Bonus, 0x0c },
    { L"Emerald FX/Intro 3", 0x433d80 - (0x433c00 - 0x2ac000), 0x433e00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Bonus, 0x0d },
    { L"Hit Ground after swing FX/Mirror Glass", 0x433e00 - (0x433c00 - 0x2ac000), 0x433f00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x03 },
    { L"Blade Burned 1", 0x436600 - (0x433c00 - 0x2ac000), 0x436680 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Burned 2", 0x436680 - (0x433c00 - 0x2ac000), 0x436700 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Shocked 1", 0x436700 - (0x433c00 - 0x2ac000), 0x436780 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Shocked 2", 0x436780 - (0x433c00 - 0x2ac000), 0x436800 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 1", 0x436800 - (0x433c00 - 0x2ac000), 0x436880 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 2", 0x436880 - (0x433c00 - 0x2ac000), 0x436900 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 3", 0x436900 - (0x433c00 - 0x2ac000), 0x436980 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Poisoned 4", 0x436980 - (0x433c00 - 0x2ac000), 0x436a00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 1", 0x436a00 - (0x433c00 - 0x2ac000), 0x436a80 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 2", 0x436a80 - (0x433c00 - 0x2ac000), 0x436b00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Petrified 3", 0x436b00 - (0x433c00 - 0x2ac000), 0x436b80 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 1", 0x436b80 - (0x433c00 - 0x2ac000), 0x436c00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 2", 0x436c00 - (0x433c00 - 0x2ac000), 0x436c80 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 3", 0x436c80 - (0x433c00 - 0x2ac000), 0x436d00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 4", 0x436d00 - (0x433c00 - 0x2ac000), 0x436d80 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },
    { L"Blade Frozen 5", 0x436d80 - (0x433c00 - 0x2ac000), 0x436e00 - (0x433c00 - 0x2ac000), indexRedEarthSprites_Blade, 0x01 },

    { L"Blade's Unknown Palette", 0x433f80 - (0x433c00 - 0x2ac000), 0x434000 - (0x433c00 - 0x2ac000) },
};

const sGame_PaletteDataset REDEARTH_A_50_TRANSPARENCY_SLASH_SCION_PALETTES[] =
{
    // Scion
    // 0x436e00
    // 0x43a000 

    // Slash Transparency on Scion Ranges
    // 0x27c000
    // 0x27f200

    { L"Scion", 0x436e00 - (0x436e00 - 0x27c000), 0x436e80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },

    { L"Scion Teleport 1", 0x436f00 - (0x436e00 - 0x27c000), 0x436f80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Teleport 2", 0x436f80 - (0x436e00 - 0x27c000), 0x437000 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Teleport 3", 0x437000 - (0x436e00 - 0x27c000), 0x437080 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Teleport 4", 0x437080 - (0x436e00 - 0x27c000), 0x437100 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Blockstun",  0x436e80 - (0x436e00 - 0x27c000), 0x436f00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },

    { L"Scion Burned 1", 0x439800 - (0x436e00 - 0x27c000), 0x439880 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Burned 2", 0x439880 - (0x436e00 - 0x27c000), 0x439900 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Shocked 1", 0x439900 - (0x436e00 - 0x27c000), 0x439980 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Shocked 2", 0x439980 - (0x436e00 - 0x27c000), 0x439a00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 1", 0x439a00 - (0x436e00 - 0x27c000), 0x439a80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 2", 0x439a80 - (0x436e00 - 0x27c000), 0x439b00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 3", 0x439b00 - (0x436e00 - 0x27c000), 0x439b80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Poisoned 4", 0x439b80 - (0x436e00 - 0x27c000), 0x439c00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Petrified 1", 0x439d00 - (0x436e00 - 0x27c000), 0x439d80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Petrified 2", 0x439c80 - (0x436e00 - 0x27c000), 0x439d00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Petrified 3", 0x439c00 - (0x436e00 - 0x27c000), 0x439c80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 1", 0x439d80 - (0x436e00 - 0x27c000), 0x439e00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 2", 0x439e00 - (0x436e00 - 0x27c000), 0x439e80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 3", 0x439e80 - (0x436e00 - 0x27c000), 0x439f00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 4", 0x439f00 - (0x436e00 - 0x27c000), 0x439f80 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },
    { L"Scion Frozen 5", 0x439f80 - (0x436e00 - 0x27c000), 0x43a000 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x00 },

    { L"Scion's Effects Range (1/6) 0x437a00", 0x437a00 - (0x436e00 - 0x27c000), 0x437c00 - (0x436e00 - 0x27c000) },
    { L"Scion's Effects Range (2/6) 0x437c00", 0x437c00 - (0x436e00 - 0x27c000), 0x437e00 - (0x436e00 - 0x27c000) },
    { L"Scion's Effects Range (3/6) 0x437e00", 0x437e00 - (0x436e00 - 0x27c000), 0x438000 - (0x436e00 - 0x27c000) },
    { L"Scion's Effects Range (4/6) 0x438000", 0x438000 - (0x436e00 - 0x27c000), 0x438200 - (0x436e00 - 0x27c000) },
    { L"Scion's Effects Range (5/6) 0x438200", 0x438200 - (0x436e00 - 0x27c000), 0x438400 - (0x436e00 - 0x27c000) },
    { L"Scion's Effects Range (6/6) 0x438400", 0x438400 - (0x436e00 - 0x27c000), 0x438500 - (0x436e00 - 0x27c000) },

    // Scion's Dragon Palettes
    { L"Scion's Ice Dragon", 0x437180 - (0x436e00 - 0x27c000), 0x437200 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Ice Dragon", 0x437100 - (0x436e00 - 0x27c000), 0x437180 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Ice Dragon Teleport 1", 0x437280 - (0x436e00 - 0x27c000), 0x437300 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Ice Dragon Teleport 2", 0x437200 - (0x436e00 - 0x27c000), 0x437280 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Scion's Poison Gas Dragon", 0x437380 - (0x436e00 - 0x27c000), 0x437400 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Poison Gas Dragon", 0x437300 - (0x436e00 - 0x27c000), 0x437380 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Poison Gas Dragon Teleport 1", 0x437480 - (0x436e00 - 0x27c000), 0x437500 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Poison Gas Dragon Teleport 2", 0x437400 - (0x436e00 - 0x27c000), 0x437480 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Scion's Fire Dragon", 0x437580 - (0x436e00 - 0x27c000), 0x437600 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Fire Dragon", 0x437500 - (0x436e00 - 0x27c000), 0x437580 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Fire Dragon Teleport 1", 0x437680 - (0x436e00 - 0x27c000), 0x437700 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Fire Dragon Teleport 2", 0x437600 - (0x436e00 - 0x27c000), 0x437680 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Scion's Thunder Dragon", 0x437780 - (0x436e00 - 0x27c000), 0x437800 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"True Scion's Thunder Dragon", 0x437700 - (0x436e00 - 0x27c000), 0x437780 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Thunder Dragon Teleport 1", 0x437880 - (0x436e00 - 0x27c000), 0x437900 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },
    { L"Thunder Dragon Teleport 2", 0x437800 - (0x436e00 - 0x27c000), 0x437880 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x01 },

    { L"Dragon's Thunderbreath 1 & Icebreath", 0x437900 - (0x436e00 - 0x27c000), 0x437980 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x02 },
    { L"Dragon's Thunderbreath 2", 0x437980 - (0x436e00 - 0x27c000), 0x437a00 - (0x436e00 - 0x27c000), indexRedEarthSprites_Scion, 0x02 },
};

const sGame_PaletteDataset REDEARTH_A_50_UNUSED_PALETTES[] =
{
    { L"Slash Transparency Small Chunk of Leo Punch Burn 1", 0x283e00, 0x283e20 },
    { L"Hauzer Transparency Small Chunk of Leo Punch Burn 1", 0x2b3e00, 0x2b3e20 },
    { L"Hydron Transparency Small Chunk of Leo Punch Burn 1", 0x2b7e00, 0x2b7e20 },
    { L"Ravange Transparency Small Chunk of Leo Punch Burn 1", 0x2bbe00, 0x2bbe20 },
    { L"Blade Transparency Small Chunk of Leo Punch Burn 1", 0x2bfe00, 0x2bfe20 },

    { L"Slash Transparency Small Chunk of Leo Kick Burn 1", 0x293e00, 0x293e20 },
    { L"Hauzer Transparency Small Chunk of Leo Kick Burn 1", 0x2f3e00, 0x2f3e20 },
    { L"Hydron Transparency Small Chunk of Leo Kick Burn 1", 0x2f7e00, 0x2f7e20 },
    { L"Ravange Transparency Small Chunk of Leo Kick Burn 1", 0x2fbe00, 0x2fbe20 },
    { L"Blade Transparency Small Chunk of Leo Kick Burn 1", 0x2ffe00, 0x2ffe20 },

    // Kenji stuff

    { L"Kenji Slash Transparency Punch Good Subordinate Appears 1/4",  0x40bb80 - (0x40b800 - 0x284600), 0x40bc00 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Slash Transparency Punch Good Subordinate Appears 2/4",  0x40bb00 - (0x40b800 - 0x284600), 0x40bb80 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Slash Transparency Punch Good Subordinate Appears 3/4",  0x40ba80 - (0x40b800 - 0x284600), 0x40bb00 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Slash Transparency Punch Good Subordinate Appears 4/4",  0x40ba00 - (0x40b800 - 0x284600), 0x40ba80 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Slash Transparency Punch Evil Ninja 1/4",          0x40b980 - (0x40b800 - 0x284600), 0x40ba00 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Punch Evil Ninja 2/4",          0x40b900 - (0x40b800 - 0x284600), 0x40b980 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Punch Evil Ninja & Shogun 3/4", 0x40b880 - (0x40b800 - 0x284600), 0x40b900 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Punch Evil Ninja 4/4",          0x40b800 - (0x40b800 - 0x284600), 0x40b880 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Punch Evil Ninja Cape 1/4",     0x40bd80 - (0x40b800 - 0x284600), 0x40be00 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Slash Transparency Punch Evil Ninja Cape 2/4",     0x40bd00 - (0x40b800 - 0x284600), 0x40bd80 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Slash Transparency Punch Evil Ninja Cape 3/4",     0x40bc80 - (0x40b800 - 0x284600), 0x40bd00 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Slash Transparency Punch Evil Ninja Cape 4/4",     0x40bc00 - (0x40b800 - 0x284600), 0x40bc80 - (0x40b800 - 0x284600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Slash Transparency Kick Good Subordinate Appears 1/4",  0x418380 - (0x418000 - 0x294600), 0x418400 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Slash Transparency Kick Good Subordinate Appears 2/4",  0x418300 - (0x418000 - 0x294600), 0x418380 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Slash Transparency Kick Good Subordinate Appears 3/4",  0x418280 - (0x418000 - 0x294600), 0x418300 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Slash Transparency Kick Good Subordinate Appears 4/4",  0x418200 - (0x418000 - 0x294600), 0x418280 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Slash Transparency Kick Evil Ninja 1/4",           0x418180 - (0x418000 - 0x294600), 0x418200 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Kick Evil Ninja 2/4",           0x418100 - (0x418000 - 0x294600), 0x418180 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Kick Evil Ninja & Shogun 3/4",  0x418080 - (0x418000 - 0x294600), 0x418100 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Kick Evil Ninja 4/4",           0x418000 - (0x418000 - 0x294600), 0x418080 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Slash Transparency Kick Evil Ninja Cape 1/4",      0x418580 - (0x418000 - 0x294600), 0x418600 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Slash Transparency Kick Evil Ninja Cape 2/4",      0x418500 - (0x418000 - 0x294600), 0x418580 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Slash Transparency Kick Evil Ninja Cape 3/4",      0x418480 - (0x418000 - 0x294600), 0x418500 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Slash Transparency Kick Evil Ninja Cape 4/4",      0x418400 - (0x418000 - 0x294600), 0x418480 - (0x418000 - 0x294600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Hauzer Transparency Punch Good Subordinate Appears 1/4",  0x40bb80 - (0x40b800 - 0x2c0600), 0x40bc00 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hauzer Transparency Punch Good Subordinate Appears 2/4",  0x40bb00 - (0x40b800 - 0x2c0600), 0x40bb80 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hauzer Transparency Punch Good Subordinate Appears 3/4",  0x40ba80 - (0x40b800 - 0x2c0600), 0x40bb00 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hauzer Transparency Punch Good Subordinate Appears 4/4",  0x40ba00 - (0x40b800 - 0x2c0600), 0x40ba80 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Hauzer Transparency Punch Evil Ninja 1/4",          0x40b980 - (0x40b800 - 0x2c0600), 0x40ba00 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Punch Evil Ninja 2/4",          0x40b900 - (0x40b800 - 0x2c0600), 0x40b980 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Punch Evil Ninja & Shogun 3/4", 0x40b880 - (0x40b800 - 0x2c0600), 0x40b900 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Punch Evil Ninja 4/4",          0x40b800 - (0x40b800 - 0x2c0600), 0x40b880 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Punch Evil Ninja Cape 1/4",     0x40bd80 - (0x40b800 - 0x2c0600), 0x40be00 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hauzer Transparency Punch Evil Ninja Cape 2/4",     0x40bd00 - (0x40b800 - 0x2c0600), 0x40bd80 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hauzer Transparency Punch Evil Ninja Cape 3/4",     0x40bc80 - (0x40b800 - 0x2c0600), 0x40bd00 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hauzer Transparency Punch Evil Ninja Cape 4/4",     0x40bc00 - (0x40b800 - 0x2c0600), 0x40bc80 - (0x40b800 - 0x2c0600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Hauzer Transparency Kick Good Subordinate Appears 1/4",  0x418380 - (0x418000 - 0x300600), 0x418400 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hauzer Transparency Kick Good Subordinate Appears 2/4",  0x418300 - (0x418000 - 0x300600), 0x418380 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hauzer Transparency Kick Good Subordinate Appears 3/4",  0x418280 - (0x418000 - 0x300600), 0x418300 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hauzer Transparency Kick Good Subordinate Appears 4/4",  0x418200 - (0x418000 - 0x300600), 0x418280 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Hauzer Transparency Kick Evil Ninja 1/4",           0x418180 - (0x418000 - 0x300600), 0x418200 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Kick Evil Ninja 2/4",           0x418100 - (0x418000 - 0x300600), 0x418180 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Kick Evil Ninja & Shogun 3/4",  0x418080 - (0x418000 - 0x300600), 0x418100 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Kick Evil Ninja 4/4",           0x418000 - (0x418000 - 0x300600), 0x418080 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hauzer Transparency Kick Evil Ninja Cape 1/4",      0x418580 - (0x418000 - 0x300600), 0x418600 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hauzer Transparency Kick Evil Ninja Cape 2/4",      0x418500 - (0x418000 - 0x300600), 0x418580 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hauzer Transparency Kick Evil Ninja Cape 3/4",      0x418480 - (0x418000 - 0x300600), 0x418500 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hauzer Transparency Kick Evil Ninja Cape 4/4",      0x418400 - (0x418000 - 0x300600), 0x418480 - (0x418000 - 0x300600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Hydron Transparency Punch Good Subordinate Appears 1/4",  0x40bb80 - (0x40b800 - 0x2c4600), 0x40bc00 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hydron Transparency Punch Good Subordinate Appears 2/4",  0x40bb00 - (0x40b800 - 0x2c4600), 0x40bb80 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hydron Transparency Punch Good Subordinate Appears 3/4",  0x40ba80 - (0x40b800 - 0x2c4600), 0x40bb00 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hydron Transparency Punch Good Subordinate Appears 4/4",  0x40ba00 - (0x40b800 - 0x2c4600), 0x40ba80 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Hydron Transparency Punch Evil Ninja 1/4",          0x40b980 - (0x40b800 - 0x2c4600), 0x40ba00 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Punch Evil Ninja 2/4",          0x40b900 - (0x40b800 - 0x2c4600), 0x40b980 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Punch Evil Ninja & Shogun 3/4", 0x40b880 - (0x40b800 - 0x2c4600), 0x40b900 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Punch Evil Ninja 4/4",          0x40b800 - (0x40b800 - 0x2c4600), 0x40b880 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Punch Evil Ninja Cape 1/4",     0x40bd80 - (0x40b800 - 0x2c4600), 0x40be00 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hydron Transparency Punch Evil Ninja Cape 2/4",     0x40bd00 - (0x40b800 - 0x2c4600), 0x40bd80 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hydron Transparency Punch Evil Ninja Cape 3/4",     0x40bc80 - (0x40b800 - 0x2c4600), 0x40bd00 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hydron Transparency Punch Evil Ninja Cape 4/4",     0x40bc00 - (0x40b800 - 0x2c4600), 0x40bc80 - (0x40b800 - 0x2c4600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Hydron Transparency Kick Good Subordinate Appears 1/4",  0x418380 - (0x418000 - 0x304600), 0x418400 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hydron Transparency Kick Good Subordinate Appears 2/4",  0x418300 - (0x418000 - 0x304600), 0x418380 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hydron Transparency Kick Good Subordinate Appears 3/4",  0x418280 - (0x418000 - 0x304600), 0x418300 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Hydron Transparency Kick Good Subordinate Appears 4/4",  0x418200 - (0x418000 - 0x304600), 0x418280 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Hydron Transparency Kick Evil Ninja 1/4",           0x418180 - (0x418000 - 0x304600), 0x418200 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Kick Evil Ninja 2/4",           0x418100 - (0x418000 - 0x304600), 0x418180 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Kick Evil Ninja & Shogun 3/4",  0x418080 - (0x418000 - 0x304600), 0x418100 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Kick Evil Ninja 4/4",           0x418000 - (0x418000 - 0x304600), 0x418080 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Hydron Transparency Kick Evil Ninja Cape 1/4",      0x418580 - (0x418000 - 0x304600), 0x418600 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hydron Transparency Kick Evil Ninja Cape 2/4",      0x418500 - (0x418000 - 0x304600), 0x418580 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hydron Transparency Kick Evil Ninja Cape 3/4",      0x418480 - (0x418000 - 0x304600), 0x418500 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Hydron Transparency Kick Evil Ninja Cape 4/4",      0x418400 - (0x418000 - 0x304600), 0x418480 - (0x418000 - 0x304600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Ravange Transparency Punch Good Subordinate Appears 1/4",  0x40bb80 - (0x40b800 - 0x2c8600), 0x40bc00 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Ravange Transparency Punch Good Subordinate Appears 2/4",  0x40bb00 - (0x40b800 - 0x2c8600), 0x40bb80 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Ravange Transparency Punch Good Subordinate Appears 3/4",  0x40ba80 - (0x40b800 - 0x2c8600), 0x40bb00 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Ravange Transparency Punch Good Subordinate Appears 4/4",  0x40ba00 - (0x40b800 - 0x2c8600), 0x40ba80 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Ravange Transparency Punch Evil Ninja 1/4",          0x40b980 - (0x40b800 - 0x2c8600), 0x40ba00 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Punch Evil Ninja 2/4",          0x40b900 - (0x40b800 - 0x2c8600), 0x40b980 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Punch Evil Ninja & Shogun 3/4", 0x40b880 - (0x40b800 - 0x2c8600), 0x40b900 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Punch Evil Ninja 4/4",          0x40b800 - (0x40b800 - 0x2c8600), 0x40b880 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Punch Evil Ninja Cape 1/4",     0x40bd80 - (0x40b800 - 0x2c8600), 0x40be00 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Ravange Transparency Punch Evil Ninja Cape 2/4",     0x40bd00 - (0x40b800 - 0x2c8600), 0x40bd80 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Ravange Transparency Punch Evil Ninja Cape 3/4",     0x40bc80 - (0x40b800 - 0x2c8600), 0x40bd00 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Ravange Transparency Punch Evil Ninja Cape 4/4",     0x40bc00 - (0x40b800 - 0x2c8600), 0x40bc80 - (0x40b800 - 0x2c8600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Ravange Transparency Kick Good Subordinate Appears 1/4",  0x418380 - (0x418000 - 0x308600), 0x418400 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Ravange Transparency Kick Good Subordinate Appears 2/4",  0x418300 - (0x418000 - 0x308600), 0x418380 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Ravange Transparency Kick Good Subordinate Appears 3/4",  0x418280 - (0x418000 - 0x308600), 0x418300 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Ravange Transparency Kick Good Subordinate Appears 4/4",  0x418200 - (0x418000 - 0x308600), 0x418280 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Ravange Transparency Kick Evil Ninja 1/4",           0x418180 - (0x418000 - 0x308600), 0x418200 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Kick Evil Ninja 2/4",           0x418100 - (0x418000 - 0x308600), 0x418180 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Kick Evil Ninja & Shogun 3/4",  0x418080 - (0x418000 - 0x308600), 0x418100 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Kick Evil Ninja 4/4",           0x418000 - (0x418000 - 0x308600), 0x418080 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Ravange Transparency Kick Evil Ninja Cape 1/4",      0x418580 - (0x418000 - 0x308600), 0x418600 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Ravange Transparency Kick Evil Ninja Cape 2/4",      0x418500 - (0x418000 - 0x308600), 0x418580 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Ravange Transparency Kick Evil Ninja Cape 3/4",      0x418480 - (0x418000 - 0x308600), 0x418500 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Ravange Transparency Kick Evil Ninja Cape 4/4",      0x418400 - (0x418000 - 0x308600), 0x418480 - (0x418000 - 0x308600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Blade Transparency Punch Good Subordinate Appears 1/4",  0x40bb80 - (0x40b800 - 0x2cc600), 0x40bc00 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Blade Transparency Punch Good Subordinate Appears 2/4",  0x40bb00 - (0x40b800 - 0x2cc600), 0x40bb80 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Blade Transparency Punch Good Subordinate Appears 3/4",  0x40ba80 - (0x40b800 - 0x2cc600), 0x40bb00 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Blade Transparency Punch Good Subordinate Appears 4/4",  0x40ba00 - (0x40b800 - 0x2cc600), 0x40ba80 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Blade Transparency Punch Evil Ninja 1/4",          0x40b980 - (0x40b800 - 0x2cc600), 0x40ba00 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Punch Evil Ninja 2/4",          0x40b900 - (0x40b800 - 0x2cc600), 0x40b980 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Punch Evil Ninja & Shogun 3/4", 0x40b880 - (0x40b800 - 0x2cc600), 0x40b900 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Punch Evil Ninja 4/4",          0x40b800 - (0x40b800 - 0x2cc600), 0x40b880 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Punch Evil Ninja Cape 1/4",     0x40bd80 - (0x40b800 - 0x2cc600), 0x40be00 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Blade Transparency Punch Evil Ninja Cape 2/4",     0x40bd00 - (0x40b800 - 0x2cc600), 0x40bd80 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Blade Transparency Punch Evil Ninja Cape 3/4",     0x40bc80 - (0x40b800 - 0x2cc600), 0x40bd00 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Blade Transparency Punch Evil Ninja Cape 4/4",     0x40bc00 - (0x40b800 - 0x2cc600), 0x40bc80 - (0x40b800 - 0x2cc600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    { L"Kenji Blade Transparency Kick Good Subordinate Appears 1/4",  0x418380 - (0x418000 - 0x30c600), 0x418400 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Blade Transparency Kick Good Subordinate Appears 2/4",  0x418300 - (0x418000 - 0x30c600), 0x418380 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Blade Transparency Kick Good Subordinate Appears 3/4",  0x418280 - (0x418000 - 0x30c600), 0x418300 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x23 },
    { L"Kenji Blade Transparency Kick Good Subordinate Appears 4/4",  0x418200 - (0x418000 - 0x30c600), 0x418280 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x23 },

    { L"Kenji Blade Transparency Kick Evil Ninja 1/4",           0x418180 - (0x418000 - 0x30c600), 0x418200 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Kick Evil Ninja 2/4",           0x418100 - (0x418000 - 0x30c600), 0x418180 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Kick Evil Ninja & Shogun 3/4",  0x418080 - (0x418000 - 0x30c600), 0x418100 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Kick Evil Ninja 4/4",           0x418000 - (0x418000 - 0x30c600), 0x418080 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x20, &pairNext4 },
    { L"Kenji Blade Transparency Kick Evil Ninja Cape 1/4",      0x418580 - (0x418000 - 0x30c600), 0x418600 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Blade Transparency Kick Evil Ninja Cape 2/4",      0x418500 - (0x418000 - 0x30c600), 0x418580 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Blade Transparency Kick Evil Ninja Cape 3/4",      0x418480 - (0x418000 - 0x30c600), 0x418500 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },
    { L"Kenji Blade Transparency Kick Evil Ninja Cape 4/4",      0x418400 - (0x418000 - 0x30c600), 0x418480 - (0x418000 - 0x30c600), indexRedEarthSprites_Kenji, 0x21, &pairPrevious4 },

    // Hauzer stuff

    { L"Hauzer Slash Transparency Punch Petrified 1?", 0x40c200 - (0x40c200 - 0x285000), 0x40c280 - (0x40c200 - 0x285000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Punch Petrified 2?", 0x40c280 - (0x40c200 - 0x285000), 0x40c300 - (0x40c200 - 0x285000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Punch Frozen 1?",    0x40c300 - (0x40c200 - 0x285000), 0x40c380 - (0x40c200 - 0x285000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Punch Frozen 2?",    0x40c380 - (0x40c200 - 0x285000), 0x40c400 - (0x40c200 - 0x285000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Punch Frozen 3?",    0x40c400 - (0x40c200 - 0x285000), 0x40c480 - (0x40c200 - 0x285000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Punch Frozen 4?",    0x40c480 - (0x40c200 - 0x285000), 0x40c500 - (0x40c200 - 0x285000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Punch Frozen 5?",    0x40c500 - (0x40c200 - 0x285000), 0x40c580 - (0x40c200 - 0x285000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Slash Transparency Kick Petrified 1??", 0x418a00 - (0x418a00 - 0x295000), 0x418a80 - (0x418a00 - 0x295000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Kick Petrified 2??", 0x418a80 - (0x418a00 - 0x295000), 0x418b00 - (0x418a00 - 0x295000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Kick Frozen 1??",    0x418b00 - (0x418a00 - 0x295000), 0x418b80 - (0x418a00 - 0x295000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Kick Frozen 2??",    0x418b80 - (0x418a00 - 0x295000), 0x418c00 - (0x418a00 - 0x295000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Kick Frozen 3??",    0x418c00 - (0x418a00 - 0x295000), 0x418c80 - (0x418a00 - 0x295000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Kick Frozen 4??",    0x418c80 - (0x418a00 - 0x295000), 0x418d00 - (0x418a00 - 0x295000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Slash Transparency Kick Frozen 5??",    0x418d00 - (0x418a00 - 0x295000), 0x418d80 - (0x418a00 - 0x295000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Hauzer Transparency Punch Petrified 1?", 0x40c200 - (0x40c200 - 0x2c1000), 0x40c280 - (0x40c200 - 0x2c1000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Punch Petrified 2?", 0x40c280 - (0x40c200 - 0x2c1000), 0x40c300 - (0x40c200 - 0x2c1000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Punch Frozen 1?",    0x40c300 - (0x40c200 - 0x2c1000), 0x40c380 - (0x40c200 - 0x2c1000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Punch Frozen 2?",    0x40c380 - (0x40c200 - 0x2c1000), 0x40c400 - (0x40c200 - 0x2c1000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Punch Frozen 3?",    0x40c400 - (0x40c200 - 0x2c1000), 0x40c480 - (0x40c200 - 0x2c1000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Punch Frozen 4?",    0x40c480 - (0x40c200 - 0x2c1000), 0x40c500 - (0x40c200 - 0x2c1000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Punch Frozen 5?",    0x40c500 - (0x40c200 - 0x2c1000), 0x40c580 - (0x40c200 - 0x2c1000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Hauzer Transparency Kick Petrified 1??", 0x418a00 - (0x418a00 - 0x301000), 0x418a80 - (0x418a00 - 0x301000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Kick Petrified 2??", 0x418a80 - (0x418a00 - 0x301000), 0x418b00 - (0x418a00 - 0x301000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Kick Frozen 1??",    0x418b00 - (0x418a00 - 0x301000), 0x418b80 - (0x418a00 - 0x301000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Kick Frozen 2??",    0x418b80 - (0x418a00 - 0x301000), 0x418c00 - (0x418a00 - 0x301000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Kick Frozen 3??",    0x418c00 - (0x418a00 - 0x301000), 0x418c80 - (0x418a00 - 0x301000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Kick Frozen 4??",    0x418c80 - (0x418a00 - 0x301000), 0x418d00 - (0x418a00 - 0x301000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hauzer Transparency Kick Frozen 5??",    0x418d00 - (0x418a00 - 0x301000), 0x418d80 - (0x418a00 - 0x301000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Hydron Transparency Punch Petrified 1?", 0x40c200 - (0x40c200 - 0x2c5000), 0x40c280 - (0x40c200 - 0x2c5000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Punch Petrified 2?", 0x40c280 - (0x40c200 - 0x2c5000), 0x40c300 - (0x40c200 - 0x2c5000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Punch Frozen 1?",    0x40c300 - (0x40c200 - 0x2c5000), 0x40c380 - (0x40c200 - 0x2c5000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Punch Frozen 2?",    0x40c380 - (0x40c200 - 0x2c5000), 0x40c400 - (0x40c200 - 0x2c5000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Punch Frozen 3?",    0x40c400 - (0x40c200 - 0x2c5000), 0x40c480 - (0x40c200 - 0x2c5000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Punch Frozen 4?",    0x40c480 - (0x40c200 - 0x2c5000), 0x40c500 - (0x40c200 - 0x2c5000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Punch Frozen 5?",    0x40c500 - (0x40c200 - 0x2c5000), 0x40c580 - (0x40c200 - 0x2c5000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Hydron Transparency Kick Petrified 1??", 0x418a00 - (0x418a00 - 0x305000), 0x418a80 - (0x418a00 - 0x305000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Kick Petrified 2??", 0x418a80 - (0x418a00 - 0x305000), 0x418b00 - (0x418a00 - 0x305000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Kick Frozen 1??",    0x418b00 - (0x418a00 - 0x305000), 0x418b80 - (0x418a00 - 0x305000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Kick Frozen 2??",    0x418b80 - (0x418a00 - 0x305000), 0x418c00 - (0x418a00 - 0x305000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Kick Frozen 3??",    0x418c00 - (0x418a00 - 0x305000), 0x418c80 - (0x418a00 - 0x305000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Kick Frozen 4??",    0x418c80 - (0x418a00 - 0x305000), 0x418d00 - (0x418a00 - 0x305000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Hydron Transparency Kick Frozen 5??",    0x418d00 - (0x418a00 - 0x305000), 0x418d80 - (0x418a00 - 0x305000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Ravange Transparency Punch Petrified 1?", 0x40c200 - (0x40c200 - 0x2c9000), 0x40c280 - (0x40c200 - 0x2c9000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Punch Petrified 2?", 0x40c280 - (0x40c200 - 0x2c9000), 0x40c300 - (0x40c200 - 0x2c9000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Punch Frozen 1?",    0x40c300 - (0x40c200 - 0x2c9000), 0x40c380 - (0x40c200 - 0x2c9000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Punch Frozen 2?",    0x40c380 - (0x40c200 - 0x2c9000), 0x40c400 - (0x40c200 - 0x2c9000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Punch Frozen 3?",    0x40c400 - (0x40c200 - 0x2c9000), 0x40c480 - (0x40c200 - 0x2c9000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Punch Frozen 4?",    0x40c480 - (0x40c200 - 0x2c9000), 0x40c500 - (0x40c200 - 0x2c9000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Punch Frozen 5?",    0x40c500 - (0x40c200 - 0x2c9000), 0x40c580 - (0x40c200 - 0x2c9000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Ravange Transparency Kick Petrified 1??", 0x418a00 - (0x418a00 - 0x309000), 0x418a80 - (0x418a00 - 0x309000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Kick Petrified 2??", 0x418a80 - (0x418a00 - 0x309000), 0x418b00 - (0x418a00 - 0x309000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Kick Frozen 1??",    0x418b00 - (0x418a00 - 0x309000), 0x418b80 - (0x418a00 - 0x309000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Kick Frozen 2??",    0x418b80 - (0x418a00 - 0x309000), 0x418c00 - (0x418a00 - 0x309000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Kick Frozen 3??",    0x418c00 - (0x418a00 - 0x309000), 0x418c80 - (0x418a00 - 0x309000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Kick Frozen 4??",    0x418c80 - (0x418a00 - 0x309000), 0x418d00 - (0x418a00 - 0x309000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Ravange Transparency Kick Frozen 5??",    0x418d00 - (0x418a00 - 0x309000), 0x418d80 - (0x418a00 - 0x309000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Blade Transparency Punch Petrified 1?", 0x40c200 - (0x40c200 - 0x2cd000), 0x40c280 - (0x40c200 - 0x2cd000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Punch Petrified 2?", 0x40c280 - (0x40c200 - 0x2cd000), 0x40c300 - (0x40c200 - 0x2cd000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Punch Frozen 1?",    0x40c300 - (0x40c200 - 0x2cd000), 0x40c380 - (0x40c200 - 0x2cd000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Punch Frozen 2?",    0x40c380 - (0x40c200 - 0x2cd000), 0x40c400 - (0x40c200 - 0x2cd000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Punch Frozen 3?",    0x40c400 - (0x40c200 - 0x2cd000), 0x40c480 - (0x40c200 - 0x2cd000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Punch Frozen 4?",    0x40c480 - (0x40c200 - 0x2cd000), 0x40c500 - (0x40c200 - 0x2cd000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Punch Frozen 5?",    0x40c500 - (0x40c200 - 0x2cd000), 0x40c580 - (0x40c200 - 0x2cd000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Hauzer Blade Transparency Kick Petrified 1??", 0x418a00 - (0x418a00 - 0x30d000), 0x418a80 - (0x418a00 - 0x30d000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Kick Petrified 2??", 0x418a80 - (0x418a00 - 0x30d000), 0x418b00 - (0x418a00 - 0x30d000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Kick Frozen 1??",    0x418b00 - (0x418a00 - 0x30d000), 0x418b80 - (0x418a00 - 0x30d000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Kick Frozen 2??",    0x418b80 - (0x418a00 - 0x30d000), 0x418c00 - (0x418a00 - 0x30d000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Kick Frozen 3??",    0x418c00 - (0x418a00 - 0x30d000), 0x418c80 - (0x418a00 - 0x30d000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Kick Frozen 4??",    0x418c80 - (0x418a00 - 0x30d000), 0x418d00 - (0x418a00 - 0x30d000), indexRedEarthSprites_Hauzer, 0x00 },
    { L"Hauzer Blade Transparency Kick Frozen 5??",    0x418d00 - (0x418a00 - 0x30d000), 0x418d80 - (0x418a00 - 0x30d000), indexRedEarthSprites_Hauzer, 0x00 },

    { L"Slash Transparency Coming Next? Original Punch", 0x28c380, 0x28c400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Slash Transparency Coming Next? Original Kick", 0x29c380, 0x29c400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Hauzer Transparency Coming Next? Original Punch", 0x2e0380, 0x2e0400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Hauzer Transparency Coming Next? Original Kick", 0x320380, 0x320400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Hydron Transparency Coming Next? Original Punch", 0x2e4380, 0x2e4400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Hydron Transparency Coming Next? Original Kick", 0x324380, 0x324400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Ravange Transparency Coming Next? Original Punch", 0x2e8380, 0x2e8400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Ravange Transparency Coming Next? Original Kick", 0x328380, 0x328400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Blade Transparency Coming Next? Original Punch", 0x2ec380, 0x2ec400, indexRedEarthSprites_MaiLing, 0x58 },
    { L"Blade Transparency Coming Next? Original Kick", 0x32c380, 0x32c400, indexRedEarthSprites_MaiLing, 0x58 },

    { L"Slash Transparency Tessa Jamming Ghost Punch Palette", 0x289400, 0x289480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Slash Transparency Tessa Jamming Ghost Kick Palette", 0x299400, 0x299480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Hauzer Transparency Tessa Jamming Ghost Punch Palette", 0x2d1400, 0x2d1480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Hauzer Transparency Tessa Jamming Ghost Kick Palette", 0x311400, 0x311480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Hydron Transparency Tessa Jamming Ghost Punch Palette", 0x2d5400, 0x2d5480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Hydron Transparency Tessa Jamming Ghost Kick Palette", 0x315400, 0x315480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Ravange Transparency Tessa Jamming Ghost Punch Palette", 0x2d9400, 0x2d9480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Ravange Transparency Tessa Jamming Ghost Kick Palette", 0x319400, 0x319480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Blade Transparency Tessa Jamming Ghost Punch Palette", 0x2dd400, 0x2dd480, indexRedEarthSprites_Tessa, 0x0e },
    { L"Blade Transparency Tessa Jamming Ghost Kick Palette", 0x31d400, 0x31d480, indexRedEarthSprites_Tessa, 0x0e },
 
    { L"Slash Transparency Tessa Punch Hato Lighter (Pigeon)", 0x288c00, 0x288c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Slash Transparency Tessa Kick Hato Lighter (Pigeon)", 0x298c00, 0x298c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Hauzer Transparency Tessa Punch Hato Lighter (Pigeon)", 0x2d0c00, 0x2d0c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Hauzer Transparency Tessa Kick Hato Lighter (Pigeon)", 0x310c00, 0x310c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Hydron Transparency Tessa Punch Hato Lighter (Pigeon)", 0x2d4c00, 0x2d4c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Hydron Transparency Tessa Kick Hato Lighter (Pigeon)", 0x314c00, 0x314c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Ravange Transparency Tessa Punch Hato Lighter (Pigeon)", 0x2d8c00, 0x2d8c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Ravange Transparency Tessa Kick Hato Lighter (Pigeon)", 0x318c00, 0x318c80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Blade Transparency Tessa Punch Hato Lighter (Pigeon)", 0x2dcc00, 0x2dcc80, indexRedEarthSprites_Tessa, 0x0b },
    { L"Blade Transparency Tessa Kick Hato Lighter (Pigeon)", 0x31cc00, 0x31cc80, indexRedEarthSprites_Tessa, 0x0b },
 
    { L"Slash Transparency Tessa Punch Staff Darker", 0x288980, 0x288a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Slash Transparency Tessa Kick Staff Darker", 0x298980, 0x298a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hauzer Transparency Tessa Punch Staff Darker", 0x2d0980, 0x2d0a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hauzer Transparency Tessa Kick Staff Darker", 0x310980, 0x310a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hydron Transparency Tessa Punch Staff Darker", 0x2d4980, 0x2d4a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hydron Transparency Tessa Kick Staff Darker", 0x314980, 0x314a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Ravange Transparency Tessa Punch Staff Darker", 0x2d8980, 0x2d8a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Ravange Transparency Tessa Kick Staff Darker", 0x318980, 0x318a00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Blade Transparency Tessa Punch Staff Darker", 0x2dc980, 0x2dca00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Blade Transparency Tessa Kick Staff Darker", 0x31c980, 0x31ca00, indexRedEarthSprites_Tessa, 0x1e },
    { L"Slash Transparency Tessa Punch Staff Lighter 1", 0x288900, 0x288980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Slash Transparency Tessa Kick Staff Lighter 1", 0x298900, 0x298980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hauzer Transparency Tessa Punch Staff Lighter 1", 0x2d0900, 0x2d0980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hauzer Transparency Tessa Kick Staff Lighter 1", 0x310900, 0x310980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hydron Transparency Tessa Punch Staff Lighter 1", 0x2d4900, 0x2d4980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hydron Transparency Tessa Kick Staff Lighter 1", 0x314900, 0x314980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Ravange Transparency Tessa Punch Staff Lighter 1", 0x2d8900, 0x2d8980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Ravange Transparency Tessa Kick Staff Lighter 1", 0x318900, 0x318980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Blade Transparency Tessa Punch Staff Lighter 1", 0x2dc900, 0x2dc980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Blade Transparency Tessa Kick Staff Lighter 1", 0x31c900, 0x31c980, indexRedEarthSprites_Tessa, 0x1e },
    { L"Slash Transparency Tessa Punch Staff Lighter 2", 0x288880, 0x288900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Slash Transparency Tessa Kick Staff Lighter 2", 0x298880, 0x298900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hauzer Transparency Tessa Punch Staff Lighter 2", 0x2d0880, 0x2d0900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hauzer Transparency Tessa Kick Staff Lighter 2", 0x310880, 0x310900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hydron Transparency Tessa Punch Staff Lighter 2", 0x2d4880, 0x2d4900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Hydron Transparency Tessa Kick Staff Lighter 2", 0x314880, 0x314900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Ravange Transparency Tessa Punch Staff Lighter 2", 0x2d8880, 0x2d8900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Ravange Transparency Tessa Kick Staff Lighter 2", 0x318880, 0x318900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Blade Transparency Tessa Punch Staff Lighter 2", 0x2dc880, 0x2dc900, indexRedEarthSprites_Tessa, 0x1e },
    { L"Blade Transparency Tessa Kick Staff Lighter 2", 0x31c880, 0x31c900, indexRedEarthSprites_Tessa, 0x1e },
 
    { L"Slash Transparency Punch Tessa's Unused Fairies 1 (Poison?)", 0x289280, 0x289300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Slash Transparency Kick Tessa's Unused Fairies 1 (Poison?)", 0x299280, 0x299300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hauzer Transparency Punch Tessa's Unused Fairies 1 (Poison?)", 0x2d1280, 0x2d1300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hauzer Transparency Kick Tessa's Unused Fairies 1 (Poison?)", 0x311280, 0x311300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hydron Transparency Punch Tessa's Unused Fairies 1 (Poison?)", 0x2d5280, 0x2d5300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hydron Transparency Kick Tessa's Unused Fairies 1 (Poison?)", 0x315280, 0x315300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Ravange Transparency Punch Tessa's Unused Fairies 1 (Poison?)", 0x2d9280, 0x2d9300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Ravange Transparency Kick Tessa's Unused Fairies 1 (Poison?)", 0x319280, 0x319300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Blade Transparency Punch Tessa's Unused Fairies 1 (Poison?)", 0x2dd280, 0x2dd300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Blade Transparency Kick Tessa's Unused Fairies 1 (Poison?)", 0x31d280, 0x31d300, indexRedEarthSprites_Tessa, 0x27 },
    { L"Slash Transparency Punch Tessa's Unused Fairies 2 (Poison?)", 0x289300, 0x289380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Slash Transparency Kick Tessa's Unused Fairies 2 (Poison?)", 0x299300, 0x299380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hauzer Transparency Punch Tessa's Unused Fairies 2 (Poison?)", 0x2d1300, 0x2d1380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hauzer Transparency Kick Tessa's Unused Fairies 2 (Poison?)", 0x311300, 0x311380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hydron Transparency Punch Tessa's Unused Fairies 2 (Poison?)", 0x2d5300, 0x2d5380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Hydron Transparency Kick Tessa's Unused Fairies 2 (Poison?)", 0x315300, 0x315380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Ravange Transparency Punch Tessa's Unused Fairies 2 (Poison?)", 0x2d9300, 0x2d9380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Ravange Transparency Kick Tessa's Unused Fairies 2 (Poison?)", 0x319300, 0x319380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Blade Transparency Punch Tessa's Unused Fairies 2 (Poison?)", 0x2dd300, 0x2dd380, indexRedEarthSprites_Tessa, 0x27 },
    { L"Blade Transparency Kick Tessa's Unused Fairies 2 (Poison?)", 0x31d300, 0x31d380, indexRedEarthSprites_Tessa, 0x27 },

    { L"Slash Transparency Gi Gi Unused Summon", 0x274c80, 0x274d00, indexRedEarthSprites_GiGi, 0x0c },

    { L"Slash Transparency Lavia Burned 1 Unused", 0x26c280, 0x26c300, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Burned 2 Unused", 0x26c300, 0x26c380, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Shocked 1 Unused", 0x26c380, 0x26c400, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Shocked 2 Unused", 0x26c400, 0x26c480, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Poisoned 1 Unused", 0x26c480, 0x26c500, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Poisoned 2 Unused", 0x26c500, 0x26c580, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Poisoned 3 Unused", 0x26c580, 0x26c600, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Poisoned 4 Unused", 0x26c600, 0x26c680, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Petrified 1 Unused", 0x26c680, 0x26c700, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Petrified 2 Unused", 0x26c700, 0x26c780, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Petrified 3 Unused", 0x26c780, 0x26c800, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Frozen 1 Unused", 0x26c800, 0x26c880, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Frozen 2 Unused", 0x26c880, 0x26c900, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Frozen 3 Unused", 0x26c900, 0x26c980, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Frozen 4 Unused", 0x26c980, 0x26ca00, indexRedEarthSprites_Lavia, 0x00 },
    { L"Slash Transparency Lavia Frozen 5 Unused", 0x26ca00, 0x26ca80, indexRedEarthSprites_Lavia, 0x00 },

    { L"Unused Palettes in Slash Transparency Lavia's Section 1/16", 0x26ca80, 0x26cc80 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 2/16", 0x26cc80, 0x26ce80 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 3/16", 0x26ce80, 0x26d080 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 4/16", 0x26d080, 0x26d280 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 5/16", 0x26d280, 0x26d480 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 6/16", 0x26d480, 0x26d680 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 7/16", 0x26d680, 0x26d880 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 8/16", 0x26d880, 0x26da80 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 9/16", 0x26da80, 0x26dc80 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 10/16", 0x26dc80, 0x26de80 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 11/16", 0x26de80, 0x26e080 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 12/16", 0x26e080, 0x26e280 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 13/16", 0x26e280, 0x26e480 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 14/16", 0x26e480, 0x26e680 },
    { L"Unused Palettes in Slash Transparency Lavia's Section 15/16", 0x26e680, 0x26e880 },

    { L"Unused Palettes in Slash Transparency Lavia's Section 16/16", 0x26e880, 0x26ea00 },

    { L"Slash Transparency Wisemen Punch", 0x280900, 0x280980 },
    { L"Slash Transparency Wisemen Kick", 0x290900, 0x290980 },
    { L"Hauzer Transparency Wisemen Punch", 0x2b0900, 0x2b0980 },
    { L"Hauzer Transparency Wisemen Kick", 0x2f0900, 0x2f0980 },
    { L"Hydron Transparency Wisemen Punch", 0x2b4900, 0x2b4980 },
    { L"Hydron Transparency Wisemen Kick", 0x2f4900, 0x2f4980 },
    { L"Ravange Transparency Wisemen Punch", 0x2b8900, 0x2b8980 },
    { L"Ravange Transparency Wisemen Kick", 0x2f8900, 0x2f8980 },
    { L"Blade Transparency Wisemen Punch", 0x2bc900, 0x2bc980 },
    { L"Blade Transparency Wisemen Kick", 0x2fc900, 0x2fc980 },
    { L"Unused Slash Transparency Vigo, Valo, Vestu", 0x260f80, 0x261000 },
    { L"Unused Hauzer Transparency Vigo, Valo, Vestu", 0x2a0f80, 0x2a1000 },
    { L"Unused Slash Transparency Wisemen Mist 1", 0x261000, 0x261080 },
    { L"Unused Hauzer Transparency Wisemen Mist 1", 0x2a1000, 0x2a1080 },
    { L"Unused Slash Transparency Wisemen Mist 2", 0x261080, 0x261100 },
    { L"Unused Hauzer Transparency Wisemen Mist 2", 0x2a1080, 0x2a1100 },

    { L"Slash Transparency Dragon Burned 1", 0x27df00, 0x27df80, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Burned 2", 0x27df80, 0x27e000, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Shocked 1", 0x27e000, 0x27e080, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Shocked 2", 0x27e080, 0x27e100, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Poisoned 1", 0x27e100, 0x27e180, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Poisoned 2", 0x27e180, 0x27e200, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Poisoned 3", 0x27e200, 0x27e280, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Poisoned 4", 0x27e280, 0x27e300, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Ice Dragon Petrified 1", 0x27e400, 0x27e480, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Ice Dragon Petrified 2", 0x27e380, 0x27e400, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Poison Gas Dragon Petrified 1", 0x27e500, 0x27e580, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Poison Gas Dragon Petrified 2", 0x27e480, 0x27e500, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Fire Dragon Petrified 1", 0x27e600, 0x27e680, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Fire Dragon Petrified 2", 0x27e580, 0x27e600, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Thunder Dragon Petrified 1", 0x27e700, 0x27e780, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Thunder Dragon Petrified 2", 0x27e680, 0x27e700, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Universal Dragon Petrified 3", 0x27e300, 0x27e380, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Frozen 1", 0x27e780, 0x27e800, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Frozen 2", 0x27e800, 0x27e880, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Frozen 3", 0x27e880, 0x27e900, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Frozen 4", 0x27e900, 0x27e980, indexRedEarthSprites_Scion, 0x01 },
    { L"Slash Transparency Dragon Frozen 5", 0x27e980, 0x27ea00, indexRedEarthSprites_Scion, 0x01 },

    { L"Slash Transparency Leo Punch Trapped in Ravange's Sarcophagus", 0x271700, 0x271780, indexRedEarthSprites_Leo, 0x0f },
    { L"Ravange Transparency Leo Punch Trapped in Ravange's Sarcophagus", 0x2a9700, 0x2a9780, indexRedEarthSprites_Leo, 0x0f },
    { L"Slash Transparency Leo Kick Trapped in Ravange's Sarcophagus", 0x272380, 0x272400, indexRedEarthSprites_Leo, 0x0f },
    { L"Ravange Transparency Leo Kick Trapped in Ravange's Sarcophagus", 0x2aa380, 0x2aa400, indexRedEarthSprites_Leo, 0x0f },

    { L"Slash Transparency Kenji Punch Trapped in Ravange's Sarcophagus", 0x271780, 0x271800 },
    { L"Ravange Transparency Kenji Punch Trapped in Ravange's Sarcophagus", 0x2a9780, 0x2a9800 },
    { L"Slash Transparency Kenji Kick Trapped in Ravange's Sarcophagus", 0x272400, 0x272480 },
    { L"Ravange Transparency Kenji Kick Trapped in Ravange's Sarcophagus", 0x2aa400, 0x2aa480 },
    { L"Slash Transparency Tessa Punch Trapped in Ravange's Sarcophagus", 0x271800, 0x271880 },
    { L"Ravange Transparency Tessa Punch Trapped in Ravange's Sarcophagus", 0x2a9800, 0x2a9880 },
    { L"Slash Transparency Tessa Kick Trapped in Ravange's Sarcophagus", 0x272480, 0x272500 },
    { L"Ravange Transparency Tessa Kick Trapped in Ravange's Sarcophagus", 0x2aa480, 0x2aa500 },
    { L"Slash Transparency Mai Punch Trapped in Ravange's Sarcophagus", 0x271880, 0x271900 },
    { L"Ravange Transparency Mai Punch Trapped in Ravange's Sarcophagus", 0x2a9880, 0x2a9900 },
    { L"Slash Transparency Mai Kick Trapped in Ravange's Sarcophagus", 0x272500, 0x272580 },
    { L"Ravange Transparency Mai Kick Trapped in Ravange's Sarcophagus", 0x2aa500, 0x2aa580 },

    { L"Slash Transparency Ravange's 2nd Form Transformation Explosions", 0x271a80, 0x271b00 },
    { L"Ravange Transparency Ravange's 2nd Form Transformation Explosions", 0x2a9a80, 0x2a9b00 },

    { L"Slash Transparency Mirror Trapped - Leo Punch", 0x278300, 0x278380, indexRedEarthSprites_Leo, 0x00 },
    { L"Blade Transparency Mirror Trapped - Leo Punch", 0x2ac300, 0x2ac380, indexRedEarthSprites_Leo, 0x00 },
    { L"Slash Transparency Mirror Trapped - Leo Kick", 0x278400, 0x278480, indexRedEarthSprites_Leo, 0x00 },
    { L"Blade Transparency Mirror Trapped - Leo Kick", 0x2ac400, 0x2ac480, indexRedEarthSprites_Leo, 0x00 },

    { L"Slash Transparency Mirror Trapped - Kenji Punch", 0x278480, 0x278500, indexRedEarthSprites_Kenji, 0x00 },
    { L"Blade Transparency Mirror Trapped - Kenji Punch", 0x2ac480, 0x2ac500, indexRedEarthSprites_Kenji, 0x00 },
    { L"Slash Transparency Mirror Trapped - Kenji Kick", 0x278500, 0x278580, indexRedEarthSprites_Kenji, 0x00 },
    { L"Blade Transparency Mirror Trapped - Kenji Kick", 0x2ac500, 0x2ac580, indexRedEarthSprites_Kenji, 0x00 },

    { L"Slash Transparency Mirror Trapped - Tessa Punch", 0x278580, 0x278600, indexRedEarthSprites_Tessa, 0x00 },
    { L"Blade Transparency Mirror Trapped - Tessa Punch", 0x2ac580, 0x2ac600, indexRedEarthSprites_Tessa, 0x00 },
    { L"Slash Transparency Mirror Trapped - Tessa Kick", 0x278600, 0x278680, indexRedEarthSprites_Tessa, 0x00 },
    { L"Blade Transparency Mirror Trapped - Tessa Kick", 0x2ac600, 0x2ac680, indexRedEarthSprites_Tessa, 0x00 },

    { L"Slash Transparency Mirror Trapped - Mai-Ling Punch", 0x278680, 0x278700, indexRedEarthSprites_MaiLing, 0x00 },
    { L"Blade Transparency Mirror Trapped - Mai-Ling Punch", 0x2ac680, 0x2ac700, indexRedEarthSprites_MaiLing, 0x00 },
    { L"Slash Transparency Mirror Trapped - Mai-Ling Kick", 0x278700, 0x278780, indexRedEarthSprites_MaiLing, 0x00 },
    { L"Blade Transparency Mirror Trapped - Mai-Ling Kick", 0x2ac700, 0x2ac780, indexRedEarthSprites_MaiLing, 0x00 },

    { L"Unused Slash Transparency Tessa Palette", 0x264680, 0x264700, indexRedEarthSprites_Tessa, 0x00 },

    { L"Unused Slash Transparency Leo Punch", 0x290080, 0x290100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Hauzer Transparency Leo Punch", 0x2f0080, 0x2f0100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Hydron Transparency Leo Punch", 0x2f4080, 0x2f4100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Ravange Transparency Leo Punch", 0x2f8080, 0x2f8100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Blade Transparency Leo Punch", 0x2fc080, 0x2fc100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Slash Transparency Leo Kick", 0x280080, 0x280100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Hauzer Transparency Leo Kick", 0x2b0080, 0x2b0100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Hydron Transparency Leo Kick", 0x2b4080, 0x2b4100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Ravange Transparency Leo Kick", 0x2b8080, 0x2b8100, indexRedEarthSprites_Leo, 0x00 },
    { L"Unused Blade Transparency Leo Kick", 0x2bc080, 0x2bc100, indexRedEarthSprites_Leo, 0x00 },
};

const sDescTreeNode REDEARTH_A_50_TRANSPARENCY_SLASH_COLLECTION[] =
{
    { L"Leo Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_LEO_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_LEO_PUNCH_PALETTES) },
    { L"Kenji Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_KENJI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_KENJI_PUNCH_PALETTES) },
    { L"Tessa Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_TESSA_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_TESSA_PUNCH_PALETTES) },
    { L"Mai-Ling Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_MAI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_MAI_PUNCH_PALETTES) },

    { L"Leo Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_LEO_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_LEO_KICK_PALETTES) },
    { L"Kenji Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_KENJI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_KENJI_KICK_PALETTES) },
    { L"Tessa Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_TESSA_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_TESSA_KICK_PALETTES) },
    { L"Mai-Ling Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_MAI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_MAI_KICK_PALETTES) },

    { L"Hauzer",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_HAUZER_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_HAUZER_PALETTES) },
    { L"Kongou",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_KONGOU_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_KONGOU_PALETTES) },
    { L"Hydron",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_HYDRON_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_HYDRON_PALETTES) },
    { L"Lavia",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_LAVIA_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_LAVIA_PALETTES) },
    { L"Ravange",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_RAVANGE_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_RAVANGE_PALETTES) },
    { L"Gi Gi",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_GIGI_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_GIGI_PALETTES) },
    { L"Blade",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_BLADE_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_BLADE_PALETTES) },
    { L"Scion",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_SCION_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_SCION_PALETTES) },

    { L"Elemental Super Backgrounds",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_ELEBG_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_ELEBG_PALETTES) },
    { L"Mystic Combo Super Backgrounds (Unused)",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_MYSTIC_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_MYSTIC_PALETTES) },
    { L"Shadows, Effects & Hit FX Ranges",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_SHADOWFX_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_SHADOWFX_PALETTES) },
};

const sDescTreeNode REDEARTH_A_50_TRANSPARENCY_HAUZER_COLLECTION[] =
{
    { L"Leo Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_LEO_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_LEO_PUNCH_PALETTES) },
    { L"Kenji Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_KENJI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_KENJI_PUNCH_PALETTES) },
    { L"Tessa Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_TESSA_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_TESSA_PUNCH_PALETTES) },
    { L"Mai-Ling Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_MAI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_MAI_PUNCH_PALETTES) },
    { L"Leo Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_LEO_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_LEO_KICK_PALETTES) },
    { L"Kenji Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_KENJI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_KENJI_KICK_PALETTES) },
    { L"Tessa Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_TESSA_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_TESSA_KICK_PALETTES) },
    { L"Mai-Ling Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_MAI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_MAI_KICK_PALETTES) },

    { L"Hauzer",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_HAUZER_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_HAUZER_PALETTES) },
    { L"Ravange",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_RAVANGE_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_RAVANGE_PALETTES) },

    { L"Elemental Super Backgrounds",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_ELEBG_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_ELEBG_PALETTES) },
    { L"Mystic Combo Super Backgrounds (Unused)",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_MYSTIC_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_MYSTIC_PALETTES) },
    { L"Shadows, Effects & Hit FX Ranges",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_SHADOWFX_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_SHADOWFX_PALETTES) },
};

const sDescTreeNode REDEARTH_A_50_TRANSPARENCY_HYDRON_COLLECTION[] =
{
    { L"Leo Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_LEO_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_LEO_PUNCH_PALETTES) },
    { L"Kenji Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_KENJI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_KENJI_PUNCH_PALETTES) },
    { L"Tessa Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_TESSA_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_TESSA_PUNCH_PALETTES) },
    { L"Mai-Ling Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_MAI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_MAI_PUNCH_PALETTES) },
    { L"Leo Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_LEO_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_LEO_KICK_PALETTES) },
    { L"Kenji Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_KENJI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_KENJI_KICK_PALETTES) },
    { L"Tessa Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_TESSA_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_TESSA_KICK_PALETTES) },
    { L"Mai-Ling Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_MAI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_MAI_KICK_PALETTES) },

    { L"Hydron",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_HYDRON_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_HYDRON_PALETTES) },
    { L"Ravange",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_RAVANGE_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_RAVANGE_PALETTES) },

    { L"Elemental Super Backgrounds",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_ELEBG_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_ELEBG_PALETTES) },
    { L"Mystic Combo Super Backgrounds (Unused)",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_MYSTIC_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_MYSTIC_PALETTES) },
    { L"Shadows, Effects & Hit FX Ranges",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_SHADOWFX_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_SHADOWFX_PALETTES) },
};

const sDescTreeNode REDEARTH_A_50_TRANSPARENCY_RAVANGE_COLLECTION[] =
{
    { L"Leo Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_LEO_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_LEO_PUNCH_PALETTES) },
    { L"Kenji Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_KENJI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_KENJI_PUNCH_PALETTES) },
    { L"Tessa Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_TESSA_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_TESSA_PUNCH_PALETTES) },
    { L"Mai-Ling Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_MAI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_MAI_PUNCH_PALETTES) },
    { L"Leo Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_LEO_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_LEO_KICK_PALETTES) },
    { L"Kenji Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_KENJI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_KENJI_KICK_PALETTES) },
    { L"Tessa Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_TESSA_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_TESSA_KICK_PALETTES) },
    { L"Mai-Ling Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_MAI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_MAI_KICK_PALETTES) },

    { L"Ravange",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_RAVANGE_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_RAVANGE_PALETTES) },

    { L"Elemental Super Backgrounds",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_ELEBG_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_ELEBG_PALETTES) },
    { L"Mystic Combo Super Backgrounds (Unused)",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_MYSTIC_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_MYSTIC_PALETTES) },
    { L"Shadows, Effects & Hit FX Ranges",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_SHADOWFX_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_SHADOWFX_PALETTES) },
};

const sDescTreeNode REDEARTH_A_50_TRANSPARENCY_BLADE_COLLECTION[] =
{
    { L"Leo Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_LEO_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_LEO_PUNCH_PALETTES) },
    { L"Kenji Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_KENJI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_KENJI_PUNCH_PALETTES) },
    { L"Tessa Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_TESSA_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_TESSA_PUNCH_PALETTES) },
    { L"Mai-Ling Punch",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_MAI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_MAI_PUNCH_PALETTES) },
    { L"Leo Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_LEO_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_LEO_KICK_PALETTES) },
    { L"Kenji Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_KENJI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_KENJI_KICK_PALETTES) },
    { L"Tessa Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_TESSA_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_TESSA_KICK_PALETTES) },
    { L"Mai-Ling Kick",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_MAI_KICK_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_MAI_KICK_PALETTES) },

    { L"Ravange",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_RAVANGE_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_RAVANGE_PALETTES) },
    { L"Blade",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_BLADE_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_BLADE_PALETTES) },

    { L"Elemental Super Backgrounds",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_ELEBG_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_ELEBG_PALETTES) },
    { L"Mystic Combo Super Backgrounds (Unused)",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_MYSTIC_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_MYSTIC_PALETTES) },
    { L"Shadows, Effects & Hit FX Ranges",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_SHADOWFX_PALETTES, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_SHADOWFX_PALETTES) },
};

const sDescTreeNode REDEARTH_A_50_UNUSED_COLLECTION[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_UNUSED_PALETTES, ARRAYSIZE(REDEARTH_A_50_UNUSED_PALETTES) },
};

const sDescTreeNode REDEARTH_A_UNITS_50[] =
{
    { L"Coming Next? text",     DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_NEXT_COLLECTION, ARRAYSIZE(REDEARTH_A_50_NEXT_COLLECTION) },
    { L"Slash Transparency",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_SLASH_COLLECTION, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_SLASH_COLLECTION) },
    { L"Hauzer Transparency",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HAUZER_COLLECTION, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HAUZER_COLLECTION) },
    { L"Hydron Transparency",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_HYDRON_COLLECTION, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_HYDRON_COLLECTION) },
    { L"Ravange Transparency",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_RAVANGE_COLLECTION, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_RAVANGE_COLLECTION) },
    { L"Blade Transparency",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_TRANSPARENCY_BLADE_COLLECTION, ARRAYSIZE(REDEARTH_A_50_TRANSPARENCY_BLADE_COLLECTION) },

    { L"Unused",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_50_UNUSED_COLLECTION, ARRAYSIZE(REDEARTH_A_50_UNUSED_COLLECTION) },
};

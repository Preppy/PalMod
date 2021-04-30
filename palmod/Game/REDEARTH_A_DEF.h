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

const UINT16 REDEARTH_A_IMG_UNITS[] =
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
    { L"Mirror Trapped - Leo Punch",        0x433F80, 0x434000, indexRedEarthSprites_Leo, 0x0 },
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
};

const sGame_PaletteDataset REDEARTH_A_LEO_BONUS_PALETTES[] =
{
    { L"Leo Character Select",               0x1DF200, 0x1DF280, indexRedEarthSprites_Leo, 0x11 },
    { L"Leo Character Selected",             0x1DEB80, 0x1DEC00, indexRedEarthSprites_Leo, 0x11 },
    { L"Leo Character Select Portrait",      0x1DEF00, 0x1DEF80, indexRedEarthSprites_Leo, 0x12 },
    { L"P1 Leo Character Select Portrait Highlighted", 0x1E0D80, 0x1E0E00, indexRedEarthSprites_Leo, 0x12 },
    { L"P2 Leo Character Select Portrait Highlighted", 0x1E2F80, 0x1E3000, indexRedEarthSprites_Leo, 0x12 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_PUNCH_PALETTES[] =
{
    { L"Kenji Punch",                            0x40B200, 0x40B280, indexRedEarthSprites_Kenji, 0x0, &pairNext4 },
    { L"Kenji Punch Vs/Winning/Losing Screen",   0x1E4800, 0x1E4900, indexRedEarthSprites_Kenji, 0x09 },
    { L"Kenji Punch LifeBar Portrait",           0x406900, 0x406940, indexRedEarthSprites_Kenji, 0x10 },
    
    // All of these are for Punch
    { L"Hat intro",                              0x40B300, 0x40B380, indexRedEarthSprites_Kenji, 0x03 },
    { L"Chains, Kunai",                          0x40B380, 0x40B400, indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x40B400, 0x40B480, indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x40B480, 0x40B500, indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport ",    0x40B500, 0x40B580, indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x40B580, 0x40B600, indexRedEarthSprites_Kenji, 0x02 },
    { L"HCF.4/5/6 Slash",                        0x40B600, 0x40B680, indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x40B700, 0x40B780, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x40B680, 0x40B700, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x40B780, 0x40B800, indexRedEarthSprites_Kenji, 0x08 },
    { L"Kunai Throwing Shine (1/3)",             0x40BF00, 0x40BF80, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x40BE80, 0x40BF00, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x40BE00, 0x40BE80, indexRedEarthSprites_Kenji, 0x01 },

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
};

const sGame_PaletteDataset REDEARTH_A_KENJI_KICK_PALETTES[] =
{
    { L"Kenji Kick",                             0x417A00, 0x417A80, indexRedEarthSprites_Kenji, 0x0, &pairNext4 },
    { L"Kenji Kick Vs/Winning/Losing Screen",    0x1E4E00, 0x1E4F00, indexRedEarthSprites_Kenji, 0x09 },
    { L"Kenji Kick LifeBar Portrait",            0x406940, 0x406980, indexRedEarthSprites_Kenji, 0x10 },

    { L"Hat intro",                              0x417b00, 0x417b80, indexRedEarthSprites_Kenji, 0x03 },
    { L"Chains, Kunai",                          0x417b80, 0x417c00, indexRedEarthSprites_Kenji, 0x01 },
    { L"Hk Flash (1/3), R.DP.1/2/3 Leaves",      0x417c00, 0x417c80, indexRedEarthSprites_Kenji, 0x05 },
    { L"Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3", 0x417c80, 0x417d00, indexRedEarthSprites_Kenji, 0x06 },
    { L"Hk Flash (3/3), DP.1/2/3, Teleport ",    0x417d00, 0x417d80, indexRedEarthSprites_Kenji, 0x07 },
    { L"DP.1/2/3 Spark",                         0x417d80, 0x417e00, indexRedEarthSprites_Kenji, 0x02 },
    { L"HCF.4/5/6 Slash",                        0x417e00, 0x417e80, indexRedEarthSprites_Kenji, 0x04 },
    { L"Teleport Frame (1/3) - HCF.4/5/6 Flash", 0x417f00, 0x417f80, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (2/3)",                   0x417e80, 0x417f00, indexRedEarthSprites_Kenji, 0x08 },
    { L"Teleport Frame (3/3)",                   0x417f80, 0x418000, indexRedEarthSprites_Kenji, 0x08 },
    
    { L"Kunai Throwing Shine (1/3)",             0x418700, 0x418780, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (2/3)",             0x418680, 0x418700, indexRedEarthSprites_Kenji, 0x01 },
    { L"Kunai Throwing Shine (3/3)",             0x418600, 0x418680, indexRedEarthSprites_Kenji, 0x01 },

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
};

const sGame_PaletteDataset REDEARTH_A_KENJI_BONUS_PALETTES[] =
{
    { L"Kenji Character Select",                 0x1DF380, 0x1DF400, indexRedEarthSprites_Kenji, 0x11 },
    { L"Kenji Character Selected",               0x1DED00, 0x1DED80, indexRedEarthSprites_Kenji, 0x11 },
    { L"Kenji Character Select Portrait",        0x1DF000, 0x1DF080, indexRedEarthSprites_Kenji, 0x12 },
    { L"P1 Kenji Character Select Portrait Highlighted", 0x1E0F00, 0x1E0F80, indexRedEarthSprites_Kenji, 0x12 },
    { L"P2 Kenji Character Select Portrait Highlighted", 0x1E3100, 0x1E3180, indexRedEarthSprites_Kenji, 0x12 },
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
    { L"Tessa Punch Al (Aru) Cat Returning", 0x40E800, 0x40E880, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat", 0x40E880, 0x40E900, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ivan (Ibun) Cat Returning", 0x40E900, 0x40E980, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Punch Ice", 0x40E980, 0x40EA00, indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Punch Reverie Sword", 0x40EB80, 0x40EC00, indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Punch Staves", 0x40EC00, 0x40EC80, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Punch Kaeru (Frog)", 0x40EE80, 0x40EF00, indexRedEarthSprites_Tessa, 0x0f },
    { L"Tessa Punch Hato (Dove)", 0x40EF80, 0x40F000, indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Punch Suitcat", 0x40FF00, 0x40FF80, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Suitcat (Mustard)", 0x40FF80, 0x410000, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Punch Chakra Wave", 0x40EF00, 0x40EF80, indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Punch Cannon Magic Pattern", 0x40E700, 0x40E780, indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Punch Cannon Transition", 0x40F880, 0x40F900, indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Punch Hyper Cannon (Superball and Winscreen)", 0x40F900, 0x40F980, indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Punch Glace Cannon", 0x40F980, 0x40FA00, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Glace Pixies", 0x40F600, 0x40F680 },
    { L"Tessa Punch Glace Pixies Changing Pal", 0x40F580, 0x40F600 },
    { L"Tessa Punch Flamma Cannon", 0x40FA00, 0x40FA80, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Flamma Pixies", 0x40F500, 0x40F580 },
    { L"Tessa Punch Flamma Pixies Changing Pal", 0x40F480, 0x40F500 },
    { L"Tessa Punch Electron Cannon", 0x40FA80, 0x40FB00, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Punch Electron Pixies Changing Pal", 0x40F400, 0x40F480 },
    { L"Tessa Punch Death Phenomenon - On Hit", 0x40FD80, 0x40FE00, indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Punch Death Phenomenon - On Whiff", 0x40FE00, 0x40FE80, indexRedEarthSprites_Tessa, 0x07 },
    { L"Tessa Punch Jammin' Ghost", 0x40F780, 0x40F800, indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Punch Manot Arm", 0x40F200, 0x40F280, indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Punch GC/Pursuit Wrecking Ball", 0x40F300, 0x40F380, indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Punch Wrecking Ball Angels and Electron Pixies", 0x40F380, 0x40F400, indexRedEarthSprites_Tessa, 0x20 },
    { L"Tessa Punch Grab Saw", 0x40F080, 0x40F100, indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Punch GC/Grab/Pursuit Lever", 0x40F100, 0x40F180, indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Punch Ultimate Guard Wall and Lever", 0x40EB00, 0x40EB80, indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Punch Ultimate Guard Batteries", 0x40EE00, 0x40EE80, indexRedEarthSprites_Tessa, 0x01a },


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
    { L"Tessa Kick Al (Aru) Cat Returning", 0x40E800 + 0xc800, 0x40E880 + 0xc800, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat", 0x40E880 + 0xc800, 0x40E900 + 0xc800, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ivan (Ibun) Cat Returning", 0x40E900 + 0xc800, 0x40E980 + 0xc800, indexRedEarthSprites_Tessa, 0x22 },
    { L"Tessa Kick Ice", 0x40E980 + 0xc800, 0x40EA00 + 0xc800, indexRedEarthSprites_Tessa, 0x0d },
    { L"Tessa Kick Reverie Sword", 0x40EB80 + 0xc800, 0x40EC00 + 0xc800, indexRedEarthSprites_Tessa, 0x1d },
    { L"Tessa Kick Staves", 0x40EC00 + 0xc800, 0x40EC80 + 0xc800, indexRedEarthSprites_Tessa, 0x1e },
    { L"Tessa Kick Kaeru (Frog)", 0x40EE80 + 0xc800, 0x40EF00 + 0xc800, indexRedEarthSprites_Tessa, 0x0f },
    { L"Tessa Kick Hato (Dove)", 0x40EF80 + 0xc800, 0x40F000 + 0xc800, indexRedEarthSprites_Tessa, 0x0b },
    { L"Tessa Kick Suitcat", 0x40FF00 + 0xc800, 0x40FF80 + 0xc800, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Suitcat (Mustard)", 0x40FF80 + 0xc800, 0x410000 + 0xc800, indexRedEarthSprites_Tessa, 0x1f },
    { L"Tessa Kick Chakra Wave", 0x40EF00 + 0xc800, 0x40EF80 + 0xc800, indexRedEarthSprites_Tessa, 0x05 },
    { L"Tessa Kick Cannon Magic Pattern", 0x40E700 + 0xc800, 0x40E780 + 0xc800, indexRedEarthSprites_Tessa, 0x04 },
    { L"Tessa Kick Cannon Transition", 0x40F880 + 0xc800, 0x40F900 + 0xc800, indexRedEarthSprites_Tessa, 0x03 },
    { L"Tessa Kick Hyper Cannon (Superball and Winscreen)", 0x40F900 + 0xc800, 0x40F980 + 0xc800, indexRedEarthSprites_Tessa, 0x0c },
    { L"Tessa Kick Glace Cannon", 0x40F980 + 0xc800, 0x40FA00 + 0xc800, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Glace Pixies", 0x40F600 + 0xc800, 0x40F680 + 0xc800 },
    { L"Tessa Kick Glace Pixies Changing Pal", 0x40F580 + 0xc800, 0x40F600 + 0xc800 },
    { L"Tessa Kick Flamma Cannon", 0x40FA00 + 0xc800, 0x40FA80 + 0xc800, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Flamma Pixies", 0x40F500 + 0xc800, 0x40F580 + 0xc800 },
    { L"Tessa Kick Flamma Pixies Changing Pal", 0x40F480 + 0xc800, 0x40F500 + 0xc800 },
    { L"Tessa Kick Electron Cannon", 0x40FA80 + 0xc800, 0x40FB00 + 0xc800, indexRedEarthSprites_Tessa, 0x08 },
    { L"Tessa Kick Electron Pixies Changing Pal", 0x40F400 + 0xc800, 0x40F480 + 0xc800 },
    { L"Tessa Kick Death Phenomenon - On Hit", 0x40FD80 + 0xc800, 0x40FE00 + 0xc800, indexRedEarthSprites_Tessa, 0x06 },
    { L"Tessa Kick Death Phenomenon - On Whiff", 0x40FE00 + 0xc800, 0x40FE80 + 0xc800, indexRedEarthSprites_Tessa, 0x07 },
    { L"Tessa Kick Jammin' Ghost", 0x40F780 + 0xc800, 0x40F800 + 0xc800, indexRedEarthSprites_Tessa, 0x0e },
    { L"Tessa Kick Manot Arm", 0x40F200 + 0xc800, 0x40F280 + 0xc800, indexRedEarthSprites_Tessa, 0x1c },
    { L"Tessa Kick GC/Pursuit Wrecking Ball", 0x40F300 + 0xc800, 0x40F380 + 0xc800, indexRedEarthSprites_Tessa, 0x21 },
    { L"Tessa Kick Wrecking Ball Angels and Electron Pixies", 0x40F380 + 0xc800, 0x40F400 + 0xc800, indexRedEarthSprites_Tessa, 0x20 },
    { L"Tessa Kick Grab Saw", 0x40F080 + 0xc800, 0x40F100 + 0xc800, indexRedEarthSprites_Tessa, 0x0a },
    { L"Tessa Kick GC/Grab/Pursuit Lever", 0x40F100 + 0xc800, 0x40F180 + 0xc800, indexRedEarthSprites_Tessa, 0x09 },
    { L"Tessa Kick Ultimate Guard Wall and Lever", 0x40EB00 + 0xc800, 0x40EB80 + 0xc800, indexRedEarthSprites_Tessa, 0x1b },
    { L"Tessa Kick Ultimate Guard Batteries", 0x40EE00 + 0xc800, 0x40EE80 + 0xc800, indexRedEarthSprites_Tessa, 0x01a },

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
};

const sGame_PaletteDataset REDEARTH_A_TESSA_BONUS_PALETTES[] =
{
    { L"Tessa Character Select",                 0x1DF180, 0x1DF200, indexRedEarthSprites_Tessa, 0x11 },
    { L"Tessa Character Selected",               0x1DEB00, 0x1DEB80, indexRedEarthSprites_Tessa, 0x11 },
    { L"Tessa Character Select Portrait ",       0x1DEF80, 0x1DF000, indexRedEarthSprites_Tessa, 0x12 },
    { L"P1 Tessa Character Select Portrait Highlighted", 0x1E0D00, 0x1E0D80, indexRedEarthSprites_Tessa, 0x12 },
    { L"P2 Tessa Character Select Portrait Highlighted", 0x1E2F00, 0x1E2F80, indexRedEarthSprites_Tessa, 0x12 },
};

const sGame_PaletteDataset REDEARTH_A_MAILING_PUNCH_PALETTES[] =
{
    { L"Mai-Ling Punch", 0x411600, 0x411680, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Vs/Winning Screen", 0x1E4C00, 0x1E4C80, indexRedEarthSprites_MaiLing, 0x17 },
    { L"Mai-Ling Punch Losing Screen", 0x1E4B80, 0x1E4C00, indexRedEarthSprites_MaiLing, 0x40 },
    { L"Mai-Ling Punch LifeBar Portrait", 0x406A00, 0x406A40, indexRedEarthSprites_MaiLing, 0x10 },

    { L"Mai-Ling Punch Fire", 0x411680, 0x411700, indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Punch Fireball", 0x411780, 0x411800, indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Punch HCB.1/2/3 Fireball", 0x4118C0, 0x411900 },
    { L"Mai-Ling Punch Ultimate Guard Flash and Burn 1", 0x414000, 0x414080, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Burn 2", 0x414080, 0x414100, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 1", 0x414100, 0x414180, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Punch Shock 2", 0x414180, 0x414200 },
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
};

const sGame_PaletteDataset REDEARTH_A_MAILING_KICK_PALETTES[] =
{
    { L"Mai-Ling Kick", 0x41DE00, 0x41DE80, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Vs/Winning Screen", 0x1E4F80, 0x1E5000, indexRedEarthSprites_MaiLing, 0x27 },
    { L"Mai-Ling Kick Losing Screen", 0x1E4F00, 0x1E4F80, indexRedEarthSprites_MaiLing, 0x30 },
    { L"Mai-Ling Kick LifeBar Portrait", 0x406A40, 0x406A80, indexRedEarthSprites_MaiLing, 0x10 },

    { L"Mai-Ling Kick Fire", 0x41DE80, 0x41DF00, indexRedEarthSprites_MaiLing, 0x02 },
    { L"Mai-Ling Kick Fireball", 0x41DF80, 0x41E000, indexRedEarthSprites_MaiLing, 0x01 },
    { L"Mai-Ling Kick HCB.1/2/3 Fireball", 0x41E0C0, 0x41E100 },
    { L"Mai-Ling Kick Ultimate Guard Flash and Burn 1", 0x420800, 0x420880, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Burn 2", 0x420880, 0x420900, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 1", 0x420900, 0x420980, indexRedEarthSprites_MaiLing, 0 },
    { L"Mai-Ling Kick Shock 2", 0x420980, 0x420A00 },
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
};

const sGame_PaletteDataset REDEARTH_A_MAILING_BONUS_PALETTES[] =
{
    { L"Mai-Ling Character Select",          0x1DF300, 0x1DF380, indexRedEarthSprites_MaiLing, 0x11 },
    { L"Mai-Ling Character Selected",        0x1DEC80, 0x1DED00, indexRedEarthSprites_MaiLing, 0x11 },
    { L"Mai-Ling Character Select Portrait", 0x1DF080, 0x1DF100, indexRedEarthSprites_MaiLing, 0x12 },
    { L"P1 Mai-Ling Character Select Portrait Highlighted", 0x1E0E80, 0x1E0F00, indexRedEarthSprites_MaiLing, 0x12 },
    { L"P2 Mai-Ling Character Select Portrait Highlighted", 0x1E3080, 0x1E3100, indexRedEarthSprites_MaiLing, 0x12 },
};

//Bosses
const sGame_PaletteDataset REDEARTH_A_BLADE_PALETTES[] =
{
    { L"Blade/Mirror Frame", 0x433c00, 0x433c80 },
    { L"Emerald FX/Intro 1/Adrayer+attacking gauntlets", 0x433c80, 0x433d00 },
    { L"Emerald FX/Intro 2", 0x433d00, 0x433d80 },
    { L"Emerald FX/Intro 3", 0x433d80, 0x433e00 },
    { L"Hit Ground after swing FX/Mirror Glass", 0x433e00, 0x433e80 },
};

//const sGame_PaletteDataset REDEARTH_A_GIGI_PALETTES[] =
//{
//
//};

const sGame_PaletteDataset REDEARTH_A_HAUZER_PALETTES[] =
{
    { L"Hauzer",             0x421000, 0x421080, indexRedEarthSprites_Hauzer, 0 },
    { L"Hauzer hit palette", 0x423E80, 0x423F00, indexRedEarthSprites_Hauzer, 0 },
};

const sGame_PaletteDataset REDEARTH_A_HYDRON_PALETTES[] =
{
    { L"Hydron", 0x427400, 0x427480, indexRedEarthSprites_Hydron, 0 },

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
};

const sGame_PaletteDataset REDEARTH_A_KONGOU_PALETTES[] =
{
    { L"Kongou", 0x424200, 0x424280, indexRedEarthSprites_Kongou, 0, &pairNext },
    { L"Kanabo", 0x424280, 0x424300, indexRedEarthSprites_Kongou, 1 },
    { L"Stomach acid", 0x424300, 0x424380, indexRedEarthSprites_Kongou, 0x02 },
    { L"Hurt flash", 0x427380, 0x427400, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 1", 0x424380, 0x424400, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 2", 0x424400, 0x424480, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 3", 0x424480, 0x424500, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 4", 0x424500, 0x424580, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 5", 0x424580, 0x424600, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 6", 0x424600, 0x424680, indexRedEarthSprites_Kongou, 0 },
    { L"Demon Beserker 7", 0x424680, 0x424700, indexRedEarthSprites_Kongou, 0 },
    { L"Tanuma, Ripped clothes", 0x424700, 0x424780 },
    { L"???", 0x424780, 0x424800 },
    { L"Tanuma transforming", 0x424800, 0x424880 },
};

const sGame_PaletteDataset REDEARTH_A_LAVIA_PALETTES[] =
{
    { L"Lavia", 0x42a600, 0x42a680 },
};

const sGame_PaletteDataset REDEARTH_A_RAVANGE_PALETTES[] =
{
    { L"Ravange", 0x42d800, 0x42d880, indexRedEarthSprites_Ravange, 0x00 },
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
    { L"Poison Mist FX1", 0x42ea00, 0x42eaa0 },
    { L"Ravange Sphinx Intro", 0x42eb00, 0x42eb20 },
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
    { L"Clara Tantra", 0x42f2c0, 0x42f340 },
    { L"Clara Flashing 1", 0x42f380, 0x42f400 },
    { L"Clara Flashing 2", 0x42f400, 0x42f480 },
    { L"Clara Flashing 3", 0x42f480, 0x42f500 },
    { L"Clara Flashing 4", 0x42f500, 0x42f580 },
    { L"Clara Flashing 5", 0x42f580, 0x42f600 },
    { L"Clara Flashing 6", 0x42f600, 0x42f680 },
    { L"Clara Flashing 7", 0x42f680, 0x42f700 },
    { L"Clara Flashing 8", 0x42f700, 0x42f780 },
    { L"Clara Flashing 9", 0x42f780, 0x42f800 },
    { L"Clara Flashing 10", 0x42f800, 0x42f880 },
    { L"Clara Flashing 11", 0x42f880, 0x42f900 },
    { L"Clara Flashing 12", 0x42f900, 0x42f980 },
    { L"Pyre", 0x42f980, 0x42fa00 },
    { L"Clara ball FX", 0x42fb00, 0x42fb80 },
};

//const sGame_PaletteDataset REDEARTH_A_SCION_PALETTES[] =
//{
//
//};

//Extra Stuff
const sGame_PaletteDataset REDEARTH_A_CHARACTERSELECT_PALETTES[] =
{
    { L"1P and 2P", 0x1DED80, 0x1DEE00 },
    { L"1P and 2P Flash", 0x1DEE00, 0x1DEE80 },
    { L"Character Selector Ring", 0x1DEE80, 0x1DEF00 },
    { L"Ready Warrior (1/15)", 0x1DF400, 0x1DF480 },
    { L"Ready Warrior (2/15)", 0x1DF480, 0x1DF500 },
    { L"Ready Warrior (3/15)", 0x1DF500, 0x1DF580 },
    { L"Ready Warrior (4/15)", 0x1DF580, 0x1DF600 },
    { L"Ready Warrior (5/15)", 0x1DF600, 0x1DF680 },
    { L"Ready Warrior (6/15)", 0x1DF680, 0x1DF700 },
    { L"Ready Warrior (7/15)", 0x1DF700, 0x1DF780 },
    { L"Ready Warrior (8/15)", 0x1DF780, 0x1DF800 },
    { L"Ready Warrior (9/15)", 0x1DF800, 0x1DF880 },
    { L"Ready Warrior (10/15)", 0x1DF880, 0x1DF900 },
    { L"Ready Warrior (11/15)", 0x1DF900, 0x1DF980 },
    { L"Ready Warrior (12/15)", 0x1DF980, 0x1DFA00 },
    { L"Ready Warrior (13/15)", 0x1DFA00, 0x1DFA80 },
    { L"Ready Warrior (14/15)", 0x1DFA80, 0x1DFB00 },
    { L"Ready Warrior (15/15)", 0x1DFB00, 0x1DFB80 },
    { L"Character Select Background Clouds (1/4)", 0x1DE000, 0x1DE080 },
    { L"Character Select Background Clouds (2/4)", 0x1DE080, 0x1DE100 },
    { L"Character Select Background Clouds (3/4)", 0x1DE100, 0x1DE180 },
    { L"Character Select Background Clouds (4/4)", 0x1DE180, 0x1DE200 },
    { L"Character Select Background Skyline (1/4)", 0x1DE200, 0x1DE280 },
    { L"Character Select Background Skyline (2/4)", 0x1DE280, 0x1DE300 },
    { L"Character Select Background Skyline (3/4)", 0x1DE300, 0x1DE380 },
    { L"Character Select Background Skyline (4/4)", 0x1DE380, 0x1DE400 },
    { L"Character Select Transition Clouds (1/4)", 0x1DE400, 0x1DE480 },
    { L"Character Select Transition Clouds (2/4)", 0x1DE480, 0x1DE500 },
    { L"Character Select Transition Clouds (3/4)", 0x1DE500, 0x1DE580 },
    { L"Character Select Transition Clouds (4/4)", 0x1DE580, 0x1DE600 },
    { L"Character Select Transition Skyline (1/4)", 0x1DE600, 0x1DE680 },
    { L"Character Select Transition Skyline (2/4)", 0x1DE680, 0x1DE700 },
    { L"Character Select Transition Skyline (3/4)", 0x1DE700, 0x1DE780 },
    { L"Character Select Transition Skyline (4/4)", 0x1DE780, 0x1DE800 },
    { L"Vs Screen Transition - Leo (1/4)", 0x406000, 0x406100 },
    { L"Vs Screen Transition - Kenji (2/4)", 0x406100, 0x406200 },
    { L"Vs Screen Transition - Tessa (3/4)", 0x406200, 0x406300 },
    { L"Vs Screen Transition - Mai-Ling (4/4)", 0x406300, 0x406400 },
    { L"Victory Screen (1/6)", 0x1DE800, 0x1DE880 },
    { L"Victory Screen (2/6)", 0x1DE880, 0x1DE900 },
    { L"Victory Screen (3/6)", 0x1DE900, 0x1DE980 },
    { L"Victory Screen (4/6)", 0x1DE980, 0x1DEA00 },
    { L"Victory Screen (5/6)", 0x1DEA00, 0x1DEA80 },
    { L"Victory Screen (6/6)", 0x1DEA80, 0x1DEB00 },
};

const sGame_PaletteDataset REDEARTH_A_INTRO_PALETTES[] =
{
    { L"Capcom Logo1", 0x320080, 0x320100 },
    { L"Capcom Logo2", 0x320100, 0x320180 },
    { L"Capcom Logo3", 0x320180, 0x320200 },
    { L"Capcom Logo4", 0x320200, 0x320280 },
    { L"Capcom Logo5", 0x320280, 0x320300 },
    { L"Capcom Logo6", 0x320300, 0x320380 },
    { L"Capcom Logo7", 0x320380, 0x320400 },
    { L"Capcom Logo8", 0x320400, 0x320480 },
    { L"Capcom Logo9", 0x320480, 0x320500 },
    { L"Capcom Logo10", 0x320500, 0x320580 },
    { L"Capcom Logo11", 0x320580, 0x320600 },
    { L"Capcom Logo12", 0x320600, 0x320680 },
    { L"Capcom Logo13", 0x320680, 0x320700 },
    { L"Capcom Logo14", 0x320700, 0x320780 },
    { L"Capcom Logo15", 0x320780, 0x320800 },
    { L"Capcom Logo16", 0x320800, 0x320880 },
    { L"Capcom Logo17", 0x320880, 0x320900 },
    { L"Capcom Logo18", 0x320900, 0x320980 },
    { L"Capcom Logo19", 0x320980, 0x320a00 },
    { L"Capcom Logo20", 0x320a00, 0x320a80 },
    { L"Capcom Logo21", 0x320a80, 0x320b00 },
    { L"Capcom Logo22", 0x320b00, 0x320b80 },
    { L"Capcom Logo23", 0x320b80, 0x320c00 },
    { L"Capcom Logo24", 0x320c00, 0x320c80 },
    { L"Capcom Logo25", 0x320c80, 0x320d00 },
    { L"Capcom Logo26", 0x320d00, 0x320d80 },
    { L"Capcom Logo27", 0x320d80, 0x320e00 },

    { L"Intro - Red Earth", 0x322ca0, 0x322d80 },
    { L"Intro - Leo closeup", 0x3226ae, 0x32272e },
    { L"Intro - Emerald", 0x321320, 0x321380 },
    { L"Intro - Emerald BG1", 0x321720, 0x3217a0 },
    { L"Intro - Emerald BG2", 0x3217a0, 0x321820 },
    { L"Intro - Emerald BG3", 0x321820, 0x3218a0 },
    { L"Intro - Emerald BG4", 0x3218a0, 0x321920 },
    { L"Intro - Emerald BG5", 0x321920, 0x3219a0 },
    { L"Intro - Emerald BG6", 0x3219a0, 0x321a20 },
    { L"Intro - Emerald BG7", 0x321a20, 0x321aa0 },
    { L"Intro - Emerald BG8", 0x321aa0, 0x321b20 },
    { L"Intro - Emerald BG9", 0x321b20, 0x321ba0 },
    { L"Intro - Emerald BG10", 0x321ba0, 0x321c20 },
    { L"Intro - Emerald BG11", 0x321c20, 0x321ca0 },
    { L"Intro - Emerald BG12", 0x321ca0, 0x321d20 },
    { L"Intro - Emerald BG13", 0x321d20, 0x321da0 },
    { L"Intro - Emerald BG14", 0x321da0, 0x321e20 },
    { L"Intro - Emerald BG15", 0x321e20, 0x321ea0 },
    { L"Intro - Emerald BG16", 0x321ea0, 0x321f20 },
    { L"Intro - Emerald BG17", 0x321f20, 0x321fa0 },
    { L"Intro - Emerald BG18", 0x321fa0, 0x322020 },
    { L"Intro - Emerald BG19", 0x322020, 0x3220a0 },
    { L"Intro - Emerald BG20", 0x3220a0, 0x322120 },
    { L"Intro - Emerald BG21", 0x322120, 0x3221a0 },
    { L"Intro - Emerald BG22", 0x3221a0, 0x322220 },
    { L"Intro - Emerald BG23", 0x322220, 0x3222a0 },
    { L"Intro - Emerald BG24", 0x3222a0, 0x322320 },
    { L"Intro - Emerald BG25", 0x322320, 0x3223a0 },
    { L"Intro - Emerald BG26", 0x3223a0, 0x322420 },
    { L"Intro - Emerald FX", 0x3216be, 0x32171e },

    { L"Intro - Hauzer", 0x3213a0, 0x321420 },
    { L"Intro - Kongou", 0x321420, 0x3214a0 },
    { L"Intro - Hydron", 0x3214a0, 0x321520 },
    { L"Intro - Lavia", 0x321520, 0x3215a0 },
    { L"Intro - Ravange", 0x3215a0, 0x321620 },
    { L"Intro - Gi-Gi", 0x321620, 0x3216a0 },
    { L"Intro - Mai-Ling background", 0x322a20, 0x322a60 },
    { L"Intro - Mai-Ling ", 0x322aa0, 0x322b20 },
    { L"Intro - Kenji background", 0x322a60, 0x322aa0 },
    { L"Intro - Kenji", 0x322b20, 0x322bc0 },
    { L"Intro - Tessa 1", 0x323720, 0x3237a0 },
    { L"Intro - Tessa 2", 0x3237a0, 0x323820 },
    { L"Intro - Tessa 3", 0x323820, 0x3238a0 },
    { L"Intro - Tessa 4", 0x3238a0, 0x323920 },
    { L"Intro - Tessa 5", 0x323920, 0x3239a0 },
    { L"Intro - Tessa 6", 0x3239a0, 0x323a20 },
    { L"Intro - Tessa 7", 0x323a20, 0x323aa0 },
    { L"Intro - Tessa 8", 0x323aa0, 0x323b20 },
    { L"Intro - VS Blade Sky", 0x321220, 0x321260 },
    { L"Intro - VS Blade Trees", 0x324120, 0x324160 },
    { L"Intro - Blade", 0x323f00, 0x323fa0 },
    { L"Intro - Leo Cliffside", 0x323fa0, 0x324020 },
    { L"Intro - Leo C.Thunder", 0x324020, 0x3240a0 },
    { L"Intro - Blade.Thunder", 0x3240a0, 0x324120 },
    { L"Intro - Leo flash", 0x324620, 0x3246a0 },
    { L"Intro - Blade flash", 0x3246a0, 0x324720 },
    { L"Intro - Thunderflash", 0x324720, 0x3247a0 },
    { L"Intro - Leo rise and slash", 0x322d90, 0x322e90 },
    { L"Intro - RaS BG 1", 0x322ea0, 0x322f00 },
    { L"Intro-Leo.S.BG1", 0x322f20, 0x322f40 },
    { L"Intro-Leo.S.BG2", 0x322f40, 0x322f60 },
    { L"Intro-Leo.S.BG3", 0x322f60, 0x322f80 },
    { L"Intro-Leo.S.BG4", 0x322f80, 0x322fa0 },
    { L"Intro-Leo.S.BG5", 0x322fa0, 0x322fc0 },
    { L"Intro-Leo.S.BG6", 0x322fc0, 0x322fe0 },
    { L"Intro-Leo.S.BG7", 0x322fe0, 0x323000 },
    { L"Intro-Leo.S.BG8", 0x323000, 0x323020 },
    { L"Intro-Leo.S.BG9", 0x323020, 0x323040 },
    { L"Intro-Leo.S.BG10", 0x323040, 0x323060 },
    { L"Intro-Leo.S.BG11", 0x323060, 0x323080 },
    { L"Intro-Leo.S.BG12", 0x323080, 0x3230a0 },
    { L"Intro-Leo.S.BG13", 0x3230a0, 0x3230c0 },
    { L"Intro-Leo.S.BG14", 0x3230c0, 0x3230e0 },
    { L"Intro-Leo.S.BG14", 0x3230e0, 0x323100 },
    { L"Intro-Leo.S.BG16", 0x323100, 0x323120 },
    { L"Intro-Leo.S.BG17", 0x323120, 0x323140 },
    { L"Intro-Leo.S.BG18", 0x323140, 0x323160 },
    { L"Intro-Leo.S.BG19", 0x323160, 0x323180 },
    { L"Intro-Leo.S.BG20", 0x323180, 0x3231a0 },
    { L"Intro-Leo.S.BG21", 0x3231a0, 0x3231c0 },
    { L"Intro-Leo.S.BG22", 0x3231c0, 0x3231e0 },
    { L"Intro-Leo.S.BG23", 0x3231e0, 0x323200 },
    { L"Intro-Leo.S.BG24", 0x323200, 0x323220 },
    { L"Intro-Leo.S.BG25", 0x323220, 0x323240 },
    { L"Intro-Leo.S.BG26", 0x323240, 0x323260 },
    { L"Intro-Leo.S.BG27", 0x323260, 0x323280 },
    { L"Intro-Leo.S.BG28", 0x323280, 0x3232a0 },
    { L"Intro-Leo.S.BG29", 0x3232a0, 0x3232c0 },
    { L"Intro-Leo.S.BG30", 0x3232c0, 0x3232e0 },
    { L"Intro-Leo.S.BG31", 0x3232e0, 0x323300 },
    { L"Intro-Leo.S.BG32", 0x323300, 0x323320 },
    { L"Intro-Leo.S.BG33", 0x323320, 0x323340 },
    { L"Intro-Leo.S.BG34", 0x323340, 0x323360 },
    { L"Intro-Leo.S.BG35", 0x323360, 0x323380 },
    { L"Intro-Leo.S.BG36", 0x323380, 0x3233a0 },
    { L"Intro-Leo.S.BG37", 0x3233a0, 0x3233c0 },
    { L"Intro-Leo.S.BG38", 0x3233c0, 0x3233e0 },
    { L"Intro-Leo.S.BG39", 0x3233e0, 0x323400 },
    { L"Intro-Leo.S.BG40", 0x323400, 0x323420 },
    { L"Intro-Leo.S.BG41", 0x323420, 0x323440 },
    { L"Intro-Leo.S.BG42", 0x323440, 0x323460 },
    { L"Intro-Leo.S.BG43", 0x323460, 0x323480 },
    { L"Intro-Leo.S.BG44", 0x323480, 0x3234a0 },
    { L"Intro-Leo.S.BG45", 0x3234a0, 0x3234c0 },
    { L"Intro-Leo.S.BG46", 0x3234c0, 0x3234e0 },
    { L"Intro-Leo.S.BG47", 0x3234e0, 0x323500 },
    { L"Intro-Leo.S.BG48", 0x323500, 0x323520 },
    { L"Intro-Leo.S.BG49", 0x323520, 0x323540 },
    { L"Intro-Leo.S.BG50", 0x323540, 0x323560 },
    { L"Intro-Leo.S.BG51", 0x323560, 0x323580 },
    { L"Intro-Leo.S.BG52", 0x323580, 0x3235a0 },
    { L"Intro-Leo.S.BG53", 0x3235a0, 0x3235c0 },
    { L"Intro-Leo.S.BG54", 0x3235c0, 0x3235e0 },
    { L"Intro-Leo.S.BG55", 0x3235e0, 0x323600 },
    { L"Intro-Leo.S.BG56", 0x323600, 0x323620 },
    { L"Intro-Leo.S.BG57", 0x323620, 0x323640 },
    { L"Intro-Leo.S.BG58", 0x323640, 0x323660 },
    { L"Intro-Leo.S.BG59", 0x323660, 0x323680 },
    { L"Intro-Leo.S.BG60", 0x323680, 0x3236a0 },
    { L"Intro-Leo.S.BG61", 0x3236a0, 0x3236c0 },
    { L"Intro-Leo.S.BG62", 0x3236c0, 0x3236e0 },
    { L"Intro-Leo.S.BG63", 0x3236e0, 0x323700 },
    { L"Intro-Leo.S.BG64", 0x323700, 0x323720 },
};

const sGame_PaletteDataset REDEARTH_A_BONUS_PALETTES[] =
{
    { L"Lifebar (danger)", 0x406700, 0x406720 },
    { L"Lifebar overlay (danger)", 0x406720, 0x406740 },
    { L"LVL Up Text 1", 0x406800, 0x406820 },
    { L"EXP / LVL Text", 0x406880, 0x406900 },
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

//const sDescTreeNode REDEARTH_A_GIGI_COLLECTION[] =
//{
//    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_GIGI_PALETTES, ARRAYSIZE(REDEARTH_A_GIGI_PALETTES) },
//};

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

//const sDescTreeNode REDEARTH_A_SCION_COLLECTION[] =
//{
//    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_SCION_PALETTES, ARRAYSIZE(REDEARTH_A_SCION_PALETTES) },
//};

//Extra Stuff
const sDescTreeNode REDEARTH_A_CHARACTERSELECT_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_PALETTES, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_PALETTES) },
};

const sDescTreeNode REDEARTH_A_INTRO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_INTRO_PALETTES, ARRAYSIZE(REDEARTH_A_INTRO_PALETTES) },
};

const sDescTreeNode REDEARTH_A_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_BONUS_PALETTES) },
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
    //{ L"Gi-Gi",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_GIGI_COLLECTION, ARRAYSIZE(REDEARTH_A_GIGI_COLLECTION) },
    { L"Hauzer",            DESC_NODETYPE_TREE, (void*)REDEARTH_A_HAUZER_COLLECTION, ARRAYSIZE(REDEARTH_A_HAUZER_COLLECTION) },
    { L"Hydron",            DESC_NODETYPE_TREE, (void*)REDEARTH_A_HYDRON_COLLECTION, ARRAYSIZE(REDEARTH_A_HYDRON_COLLECTION) },
    { L"Kongou",            DESC_NODETYPE_TREE, (void*)REDEARTH_A_KONGOU_COLLECTION, ARRAYSIZE(REDEARTH_A_KONGOU_COLLECTION) },
    { L"Lavia",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_LAVIA_COLLECTION, ARRAYSIZE(REDEARTH_A_LAVIA_COLLECTION) },
    { L"Ravange",           DESC_NODETYPE_TREE, (void*)REDEARTH_A_RAVANGE_COLLECTION, ARRAYSIZE(REDEARTH_A_RAVANGE_COLLECTION) },
    //{ L"Scion",             DESC_NODETYPE_TREE, (void*)REDEARTH_A_SCION_PALETTES, ARRAYSIZE(REDEARTH_A_SCION_PALETTES) },

    //Extra Stuff
    { L"Character Select",  DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_COLLECTION, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_COLLECTION) },
    { L"Intro Palettes",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_INTRO_COLLECTION, ARRAYSIZE(REDEARTH_A_INTRO_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_COLLECTION, ARRAYSIZE(REDEARTH_A_BONUS_COLLECTION) },
};

// RedEarth stage palettes from Yoshin
const sGame_PaletteDataset REDEARTH_A_STAGES_ICELARN_PALETTES[] =
{
    { L"Icelarn 1 - Layer 1-Ground/Ice/Building", 0x737000, 0x737200 },
    { L"Icelarn 2 - Pallete Cycle 1 - 1", 0x737200, 0x737280 },
    { L"Icelarn 2 - Pallete Cycle 1 - 2", 0x737280, 0x737300 },
    { L"Icelarn 2 - Pallete Cycle 1 - 3", 0x737300, 0x737380 },
    { L"Icelarn 2 - Pallete Cycle 1 - 4", 0x737380, 0x737400 },
    { L"Icelarn 3 - Pal 1", 0x737400, 0x737500 },
    { L"Icelarn 3 - Pal 2", 0x737500, 0x737580 },
    { L"Icelarn 3 - Pal 3", 0x737580, 0x737600 },
    { L"Icelarn 4 - Pal 1", 0x737600, 0x737700 },
    { L"Icelarn 4 - Pal 2", 0x737700, 0x737740 },
    { L"Icelarn 4 - Pal 3", 0x737740, 0x737780 },
    { L"Icelarn 4 - Pal 4", 0x737780, 0x737800 },
    { L"Icelarn 5 - Sky BG Pal Cycle 1", 0x737800, 0x737880 },
    { L"Icelarn 5 - Sky BG Pal Cycle 2", 0x737880, 0x737900 },
    { L"Icelarn 5 - Sky BG Pal Cycle 2", 0x737900, 0x737980 },
    { L"Icelarn 5 - Pallete Cycle 2 - 1", 0x737980, 0x737A00 },
    { L"Icelarn 6 - Pallete Cycle 2 - 2", 0x737A00, 0x737A80 },
    { L"Icelarn 6 - Pallete Cycle 2 - 3", 0x737A80, 0x737B00 },
    { L"Icelarn 6 - Pallete Cycle 3 - 1", 0x737B00, 0x737B80 },
    { L"Icelarn 6 - Pallete Cycle 3 - 2", 0x737B80, 0x737C00 },
    { L"Icelarn 7 - Pallete Cycle 3 - 3", 0x737C00, 0x737C80 },
    { L"Icelarn 7 - Pallete Cycle 3 - 4", 0x737C80, 0x737D00 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GORA_PALETTES[] =
{
    { L"Gora - Moon/Sky", 0x737D00, 0x737D80 },
    { L"Gora - Ground/Foilage", 0x737D80, 0x737E00 },
    { L"Gora - Planes/Rocks", 0x737E00, 0x737F00 },
    { L"Gora - ???", 0x737F00, 0x737F80 },
    { L"Gora - Foreground debris", 0x737F80, 0x738000 },
    { L"Gora - ???", 0x738000, 0x738080 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_GREEDIA_PALETTES[] =
{
    { L"Greedia Ruins 1/7", 0x734000, 0x734200 },
    { L"Greedia Ruins 2/7", 0x734200, 0x734400 },
    { L"Greedia Ruins 3/7", 0x734400, 0x734600 },
    { L"Greedia Ruins 4/7", 0x734600, 0x734800 },
    { L"Greedia Ruins 5/7", 0x734800, 0x734a00 },
    { L"Greedia Ruins 6/7", 0x734a00, 0x734c00 },
    { L"Greedia Ruins 7/7", 0x734c00, 0x734d00 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_ZIPANG_PALETTES[] =
{
    { L"Zipang on Fire 1/18", 0x734d00, 0x734f00 },
    { L"Zipang on Fire 2/18", 0x734f00, 0x735100 },
    { L"Zipang on Fire 3/18", 0x735100, 0x735300 },
    { L"Zipang on Fire 4/18", 0x735300, 0x735500 },
    { L"Zipang on Fire 5/18", 0x735500, 0x735700 },
    { L"Zipang on Fire 6/18", 0x735700, 0x735900 },
    { L"Zipang on Fire 7/18", 0x735900, 0x735b00 },
    { L"Zipang on Fire 8/18", 0x735b00, 0x735d00 },
    { L"Zipang on Fire 9/18", 0x735d00, 0x735f00 },
    { L"Zipang on Fire 10/18", 0x735f00, 0x736100 },
    { L"Zipang on Fire 11/18", 0x736100, 0x736300 },
    { L"Zipang on Fire 12/18", 0x736300, 0x736500 },
    { L"Zipang on Fire 13/18", 0x736500, 0x736700 },
    { L"Zipang on Fire 14/18", 0x736700, 0x736900 },
    { L"Zipang on Fire 15/18", 0x736900, 0x736b00 },
    { L"Zipang on Fire 16/18", 0x736b00, 0x736d00 },
    { L"Zipang on Fire 17/18", 0x736d00, 0x736f00 },
    { L"Zipang on Fire 18/18", 0x736f00, 0x737000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_CRYPT_PALETTES[] =
{
    { L"Crypt 1/28", 0x738080, 0x738280 },
    { L"Crypt 2/28", 0x738280, 0x738480 },
    { L"Crypt 3/28", 0x738480, 0x738680 },
    { L"Crypt 4/28", 0x738680, 0x738880 },
    { L"Crypt 5/28", 0x738880, 0x738a80 },
    { L"Crypt 6/28", 0x738a80, 0x738c80 },
    { L"Crypt 7/28", 0x738c80, 0x738e80 },
    { L"Crypt 8/28", 0x738e80, 0x739080 },
    { L"Crypt 9/28", 0x739080, 0x739280 },
    { L"Crypt 10/28", 0x739280, 0x739480 },
    { L"Crypt 11/28", 0x739480, 0x739680 },
    { L"Crypt 12/28", 0x739680, 0x739880 },
    { L"Crypt 13/28", 0x739880, 0x739a80 },
    { L"Crypt 14/28", 0x739a80, 0x739c80 },
    { L"Crypt 15/28", 0x739c80, 0x739e80 },
    { L"Crypt 16/28", 0x739e80, 0x73a080 },
    { L"Crypt 17/28", 0x73a080, 0x73a280 },
    { L"Crypt 18/28", 0x73a280, 0x73a480 },
    { L"Crypt 19/28", 0x73a480, 0x73a680 },
    { L"Crypt 20/28", 0x73a680, 0x73a880 },
    { L"Crypt 21/28", 0x73a880, 0x73aa80 },
    { L"Crypt 22/28", 0x73aa80, 0x73ac80 },
    { L"Crypt 23/28", 0x73ac80, 0x73ae80 },
    { L"Crypt 24/28", 0x73ae80, 0x73b080 },
    { L"Crypt 25/28", 0x73b080, 0x73b280 },
    { L"Crypt 26/28", 0x73b280, 0x73b480 },
    { L"Crypt 27/28", 0x73b480, 0x73b680 },
    { L"Crypt 28/28", 0x73b680, 0x73b780 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_DARMINOR_PALETTES[] =
{
    { L"Darminor 1/5", 0x73b780, 0x73b980 },
    { L"Darminor 2/5", 0x73b980, 0x73bb80 },
    { L"Darminor 3/5", 0x73bb80, 0x73bd80 },
    { L"Darminor 4/5", 0x73bd80, 0x73bf80 },
    { L"Darminor 5/5", 0x73bf80, 0x73c000 },
};

const sGame_PaletteDataset REDEARTH_A_STAGES_SCION_PALETTES[] =
{
    { L"Scion's Lair 1/6", 0x73c000, 0x73c200 },
    { L"Scion's Lair 2/6", 0x73c200, 0x73c400 },
    { L"Scion's Lair 3/6", 0x73c400, 0x73c600 },
    { L"Scion's Lair 4/6", 0x73c600, 0x73c800 },
    { L"Scion's Lair 5/6", 0x73c800, 0x73ca00 },
    { L"Scion's Lair 6/6", 0x73ca00, 0x73cc00 },
};

const sGame_PaletteDataset REDEARTH_A_30_LEO_PALETTES[] =
{
    { L"Leo's Swing PALFX", 0x73f000, 0x749e00 }, // this would be 87 pages long
};

const sGame_PaletteDataset REDEARTH_A_30_HAUZER_PALETTES[] =
{
    { L"Hauzer Fire PALFX 1/24", 0x74a000, 0x74a200 },
    { L"Hauzer Fire PALFX 2/24", 0x74a200, 0x74a400 },
    { L"Hauzer Fire PALFX 3/24", 0x74a400, 0x74a600 },
    { L"Hauzer Fire PALFX 4/24", 0x74a600, 0x74a800 },
    { L"Hauzer Fire PALFX 5/24", 0x74a800, 0x74aa00 },
    { L"Hauzer Fire PALFX 6/24", 0x74aa00, 0x74ac00 },
    { L"Hauzer Fire PALFX 7/24", 0x74ac00, 0x74ae00 },
    { L"Hauzer Fire PALFX 8/24", 0x74ae00, 0x74b000 },
    { L"Hauzer Fire PALFX 9/24", 0x74b000, 0x74b200 },
    { L"Hauzer Fire PALFX 10/24", 0x74b200, 0x74b400 },
    { L"Hauzer Fire PALFX 11/24", 0x74b400, 0x74b600 },
    { L"Hauzer Fire PALFX 12/24", 0x74b600, 0x74b800 },
    { L"Hauzer Fire PALFX 13/24", 0x74b800, 0x74ba00 },
    { L"Hauzer Fire PALFX 14/24", 0x74ba00, 0x74bc00 },
    { L"Hauzer Fire PALFX 15/24", 0x74bc00, 0x74be00 },
    { L"Hauzer Fire PALFX 16/24", 0x74be00, 0x74c000 },
    { L"Hauzer Fire PALFX 17/24", 0x74c000, 0x74c200 },
    { L"Hauzer Fire PALFX 18/24", 0x74c200, 0x74c400 },
    { L"Hauzer Fire PALFX 19/24", 0x74c400, 0x74c600 },
    { L"Hauzer Fire PALFX 20/24", 0x74c600, 0x74c800 },
    { L"Hauzer Fire PALFX 21/24", 0x74c800, 0x74ca00 },
    { L"Hauzer Fire PALFX 22/24", 0x74ca00, 0x74cc00 },
    { L"Hauzer Fire PALFX 23/24", 0x74cc00, 0x74ce00 },
    { L"Hauzer Fire PALFX 24/24", 0x74ce00, 0x74d000 },
};

const sGame_PaletteDataset REDEARTH_A_30_BONUS_TEXT_PALETTES[] =
{
    { L"Most Big text+Leo VS Text", 0X7eb000, 0X7eb020 },
    { L"Yashichi/Mobi-Chan", 0X7eb060, 0X7eb080 },
    //{ L"Kenji - VS Text", 0X7eb080, 0X7eb0A0 },
    //{ L"Mai-Ling VS Text", 0X7eb100, 0X7eb120 },
    //{ L"Tessa VS Text", 0X7eb180, 0X7eb1A0 },
    { L"Perfect! Text", 0X7eb300, 0X7eb320 },
    { L"\"KO\" Text", 0X7eb380, 0X7eb3A0 },
    { L"\"is victorious\" Text", 0X7eb580, 0X7eb5A0 },
};

const sGame_PaletteDataset REDEARTH_A_30_BONUS_CREDITS_PALETTES[] =
{
    { L"Credits - TITLES (e.g, Planner)", 0X7eb080, 0X7eb0A0 },
    { L"Credits - \"Thank you for playing / Coming Next\"", 0X7eb100, 0X7eb120 },
    { L"Credits - STAFF", 0X7eb180, 0X7eb1A0 },
};

const sDescTreeNode REDEARTH_A_STAGES_GORA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GORA_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ICELARN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_GREEDIA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_ZIPANG_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_CRYPT_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_DARMINOR_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DARMINOR_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_DARMINOR_PALETTES) },
};

const sDescTreeNode REDEARTH_A_STAGES_SCION_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SCION_PALETTES, ARRAYSIZE(REDEARTH_A_STAGES_SCION_PALETTES) },
};

const sDescTreeNode REDEARTH_A_30_LEO_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_LEO_PALETTES, ARRAYSIZE(REDEARTH_A_30_LEO_PALETTES) },
};

const sDescTreeNode REDEARTH_A_30_HAUZER_COLLECTION[] =
{
    { L"Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_HAUZER_PALETTES, ARRAYSIZE(REDEARTH_A_30_HAUZER_PALETTES) },
};

const sDescTreeNode REDEARTH_A_30_BONUS_COLLECTION[] =
{
    { L"Big Text",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUS_TEXT_PALETTES, ARRAYSIZE(REDEARTH_A_30_BONUS_TEXT_PALETTES) },
    { L"Credits ",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUS_CREDITS_PALETTES, ARRAYSIZE(REDEARTH_A_30_BONUS_CREDITS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_UNITS_30[] =
{
    { L"Gora",      DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GORA_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GORA_COLLECTION) },
    { L"Icelarn",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ICELARN_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ICELARN_COLLECTION) },
    
    { L"Greedia Ruins",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_GREEDIA_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_GREEDIA_COLLECTION) },
    { L"Zipang on Fire",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_ZIPANG_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_ZIPANG_COLLECTION) },
    { L"Crypt",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_CRYPT_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_CRYPT_COLLECTION) },
    { L"Darminor",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_DARMINOR_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_DARMINOR_COLLECTION) },
    { L"Scion's Lair",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_STAGES_SCION_COLLECTION, ARRAYSIZE(REDEARTH_A_STAGES_SCION_COLLECTION) },
    
    // skipped this for now: it's 87 pages long
    //{ L"Intro: Leo's Swing",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_LEO_COLLECTION, ARRAYSIZE(REDEARTH_A_30_LEO_COLLECTION) },
    { L"Intro: Hauzer Fire",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_HAUZER_COLLECTION, ARRAYSIZE(REDEARTH_A_30_HAUZER_COLLECTION) },
    { L"Bonus Palettes",   DESC_NODETYPE_TREE, (void*)REDEARTH_A_30_BONUS_COLLECTION, ARRAYSIZE(REDEARTH_A_30_BONUS_COLLECTION) },
};

#ifdef UseStagePalettes
    These are mostly added now.  Checking with Yoshin if they want further edits/clarifications
;; RedEarth: Stages in File 30
    { L"Greedia Ruins", 0x734000, 0x734d00 },
    { L"Zipang on Fire", 0x734d00, 0x737000 },
        { L"Icelarn", 0x737000, 0x737d00 },
        { L"Sangypt+Gora", 0x737d00, 0x73a400 },
    { L"Crypt", 0x737d00, 0x73b780 },
    { L"Darminor", 0x73b780, 0x73c000 },
    { L"Scions Lair", 0x73c000, 0x73cc00 },
    { L"Leo's Swing PALFX", 0x73f000, 0x749e00 }, <-- skipped this one since it's 87 pages long
    { L"Hauzer Fire PALFX", 0x74a000, 0x74d000 },
#endif

constexpr auto REDEARTH_A_NUMUNIT_30 = ARRAYSIZE(REDEARTH_A_UNITS_30);
#define REDEARTH_A_EXTRALOC_30 REDEARTH_A_NUMUNIT_30

constexpr auto REDEARTH_A_NUMUNIT_31 = ARRAYSIZE(REDEARTH_A_UNITS_31);
#define REDEARTH_A_EXTRALOC_31 REDEARTH_A_NUMUNIT_31

const stExtraDef REDEARTH_A_EXTRA[] = 
{
    //Start
    { UNIT_START_VALUE },

    //Extra
    { INVALID_UNIT_VALUE }
};

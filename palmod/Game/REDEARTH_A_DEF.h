#pragma once

const sGame_PaletteDataset REDEARTH_A_LEO_PUNCH_PALETTES[] =
{
    { _T("Leo Punch"),                          0x408000, 0x408080, indexRedEarthSprites_Leo, 0x0 },
    { _T("Leo Punch Vs/Winning/Losing Screen"), 0x1E4680, 0x1E4700, indexRedEarthSprites_Leo, 0x13, &pairNext },
    { _T("Leo Punch Vs/Winning/Losing Sword"),  0x1E4700, 0x1E4780, indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { _T("Leo Punch LifeBar Portrait"),         0x406640, 0x406680, indexRedEarthSprites_Leo, 0x10 },

    { _T("Leo Punch Rusty Sword"),              0x408100, 0x408180 },
    { _T("Leo Punch Bronze Sword"),             0x408180, 0x408200 },
    { _T("Leo Punch Crystal Sword "),           0x408280, 0x408300 },
    { _T("Leo Punch Black Sword"),              0x408300, 0x408380 },
    { _T("Leo Punch Old Shield"),               0x408380, 0x408400 },
    { _T("Leo Punch Wooden Shield"),            0x408400, 0x408480 },
    { _T("Leo Punch Sapphire Shield"),          0x408500, 0x408580 },
    { _T("Leo Punch Legendary Shield"),         0x408580, 0x408600 },
    { _T("Leo Punch Fire Sword"),               0x408600, 0x408680 },
    { _T("Leo Punch Ice Sword"),                0x408680, 0x408700 },
    { _T("Leo Punch Lightning Sword"),          0x408700, 0x408780 },
    { _T("Leo Punch Battle Axe"),               0x408780, 0x408800 },
};

const sGame_PaletteDataset REDEARTH_A_LEO_KICK_PALETTES[] =
{
    { _T("Leo Kick"),                           0x414800, 0x414880, indexRedEarthSprites_Leo, 0x0 },
    { _T("Leo Kick Vs/Winning/Losing Screen"),  0x1E4D00, 0x1E4D80, indexRedEarthSprites_Leo, 0x13, &pairNext },
    { _T("Leo Kick Vs/Winning/Losing Sword"),   0x1E4D80, 0x1E4E00, indexRedEarthSprites_Leo, 0x14, &pairPrevious },
    { _T("Leo Kick LifeBar Portrait"),          0x406680, 0x4066C0, indexRedEarthSprites_Leo, 0x10 },

    { _T("Leo Kick Rusty Sword"),               0x414900, 0x414980 },
    { _T("Leo Kick Bronze Sword"),              0x414980, 0x414A00 },
    { _T("Leo Kick Crystal Sword"),             0x414A80, 0x414B00 },
    { _T("Leo Kick Black Sword"),               0x414B00, 0x414B80 },
    { _T("Leo Kick Old Shield"),                0x414B80, 0x414C00 },
    { _T("Leo Kick Wooden Shield"),             0x414C00, 0x414C80 },
    { _T("Leo Kick Sapphire Shield"),           0x414D00, 0x414D80 },
    { _T("Leo Kick Legendary Shield"),          0x414D80, 0x414E00 },
    { _T("Leo Kick Fire Sword"),                0x414E00, 0x414E80 },
    { _T("Leo Kick Ice Sword"),                 0x414E80, 0x414F00 },
    { _T("Leo Kick Lightning Sword"),           0x414F00, 0x414F80 },
    { _T("Leo Kick Battle Axe"),                0x414F80, 0x415000 },
};

const sGame_PaletteDataset REDEARTH_A_LEO_BONUS_PALETTES[] =
{
    { _T("Leo Character Select"),               0x1DF200, 0x1DF280, indexRedEarthSprites_Leo },
    { _T("Leo Character Selected"),             0x1DEB80, 0x1DEC00, indexRedEarthSprites_Leo },
    { _T("Leo Character Select Portrait"),      0x1DEF00, 0x1DEF80, indexRedEarthSprites_Leo, 0x12 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_PUNCH_PALETTES[] =
{
    { _T("Kenji Punch"),                            0x40B200, 0x40B280 },
    { _T("Kenji Punch Vs/Winning/Losing Screen"),   0x1E4800, 0x1E4900 },
    { _T("Kenji Punch LifeBar Portrait"),           0x406900, 0x406940 },
    
    // All of these are for Punch
    { _T("Hat intro"),                              0x40B300, 0x40B380 },
    { _T("Chains, Kunai"),                          0x40B380, 0x40B400 },
    { _T("Hk Flash (1/3), R.DP.1/2/3 Leaves"),      0x40B400, 0x40B480 },
    { _T("Hk Flash (2/3), DP.1/2/3, QCBQCB.1/2/3"), 0x40B480, 0x40B500 },
    { _T("Hk Flash (3/3), DP.1/2/3, Teleport "),    0x40B500, 0x40B580 },
    { _T("DP.1/2/3 Spark"),                         0x40B580, 0x40B600 },
    { _T("HCF.4/5/6 Slash"),                        0x40B600, 0x40B680 },
    { _T("Teleport Frame (1/3) - HCF.4/5/6 Flash"), 0x40B700, 0x40B780 },
    { _T("Teleport Frame (2/3)"),                   0x40B680, 0x40B700 },
    { _T("Teleport Frame (3/3)"),                   0x40B780, 0x40B800 },
    { _T("Kunai Throwing Shine (1/3)"),             0x40BF00, 0x40BF80 },
    { _T("Kunai Throwing Shine (2/3)"),             0x40BE80, 0x40BF00 },
    { _T("Kunai Throwing Shine (3/3)"),             0x40BE00, 0x40BE80 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_KICK_PALETTES[] =
{
    { _T("Kenji Kick"),                             0x417A00, 0x417A80 },
    { _T("Kenji Kick Vs/Winning/Losing Screen"),    0x1E4E00, 0x1E4F00 },
    { _T("Kenji Kick LifeBar Portrait"),            0x406940, 0x406980 },
};

const sGame_PaletteDataset REDEARTH_A_KENJI_BONUS_PALETTES[] =
{
    { _T("Kenji Character Select"),                 0x1DF380, 0x1DF400 },
    { _T("Kenji Character Selected"),               0x1DED00, 0x1DED80 },
    { _T("Kenji Character Select Portrait"),        0x1DF000, 0x1DF080 },
};

const sGame_PaletteDataset REDEARTH_A_TESSA_PUNCH_PALETTES[] =
{
    { _T("Tessa Punch"), 0x40E400, 0x40E480 },
    { _T("Tessa Punch Changing Pal"), 0x40E480, 0x40E500 },
    { _T("Tessa Punch Vs/Winning/Losing Screen"), 0x1E4600, 0x1E4680 },
    { _T("Tessa Punch LifeBar Portrait"), 0x406980, 0x4069C0 },

    { _T("Tessa Punch Bottled Ice"), 0x40E500, 0x40E580 },
    { _T("Tessa Punch Al (Aru) Cat"), 0x40E780, 0x40E800 },
    { _T("Tessa Punch Al (Aru) Cat Returning"), 0x40E800, 0x40E880 },
    { _T("Tessa Punch Ivan (Ibun) Cat"), 0x40E880, 0x40E900 },
    { _T("Tessa Punch Ivan (Ibun) Cat Returning"), 0x40E900, 0x40E980 },
    { _T("Tessa Punch Ice"), 0x40E980, 0x40EA00 },
    { _T("Tessa Punch Reverie Sword"), 0x40EB80, 0x40EC00 },
    { _T("Tessa Punch Staves"), 0x40EC00, 0x40EC80 },
    { _T("Tessa Punch Kaeru (Frog)"), 0x40EE80, 0x40EF00 },
    { _T("Tessa Punch Hato (Dove)"), 0x40EF80, 0x40F000 },
    { _T("Tessa Punch Suitcat"), 0x40FF00, 0x40FF80 },
    { _T("Tessa Punch Suitcat (Mustard)"), 0x40FF80, 0x410000 },
    { _T("Tessa Punch Chakra Wave"), 0x40EF00, 0x40EF80 },
    { _T("Tessa Punch Cannon Magic Pattern"), 0x40E700, 0x40E780 },
    { _T("Tessa Punch Cannon Transition"), 0x40F880, 0x40F900 },
    { _T("Tessa Punch Hyper Cannon (Superball and Winscreen)"), 0x40F900, 0x40F980 },
    { _T("Tessa Punch Glace Cannon"), 0x40F980, 0x40FA00 },
    { _T("Tessa Punch Glace Pixies"), 0x40F600, 0x40F680 },
    { _T("Tessa Punch Glace Pixies Changing Pal"), 0x40F580, 0x40F600 },
    { _T("Tessa Punch Flamma Cannon"), 0x40FA00, 0x40FA80 },
    { _T("Tessa Punch Flamma Pixies"), 0x40F500, 0x40F580 },
    { _T("Tessa Punch Flamma Pixies Changing Pal"), 0x40F480, 0x40F500 },
    { _T("Tessa Punch Electron Cannon"), 0x40FA80, 0x40FB00 },
    { _T("Tessa Punch Electron Pixies Changing Pal"), 0x40F400, 0x40F480 },
    { _T("Tessa Punch Death Phenomenon - On Hit"), 0x40FD80, 0x40FE00 },
    { _T("Tessa Punch Death Phenomenon - On Whiff"), 0x40FE00, 0x40FE80 },
    { _T("Tessa Punch Jammin' Ghost"), 0x40F780, 0x40F800 },
    { _T("Tessa Punch Manot Arm"), 0x40F200, 0x40F280 },
    { _T("Tessa Punch GC/Pursuit Wrecking Ball"), 0x40F300, 0x40F380 },
    { _T("Tessa Punch Wrecking Ball Angels and Electron Pixies"), 0x40F380, 0x40F400 },
    { _T("Tessa Punch Grab Saw"), 0x40F080, 0x40F100 },
    { _T("Tessa Punch GC/Grab/Pursuit Lever"), 0x40F100, 0x40F180 },
    { _T("Tessa Punch Ultimate Guard Wall and Lever"), 0x40EB00, 0x40EB80 },
    { _T("Tessa Punch Ultimate Guard Batteries"), 0x40EE00, 0x40EE80 },
    { _T("Tessa Punch Ultimate Guard Flash and Burn 1"), 0x410E00, 0x410E80 },
    { _T("Tessa Punch Burn 2"), 0x410E80, 0x410F00 },
    { _T("Tessa Punch Shocked 1"), 0x410F00, 0x410F80 },
    { _T("Tessa Punch Shocked 2"), 0x410F80, 0x411000 },
    { _T("Tessa Punch Poisoned 1"), 0x411000, 0x411080 },
    { _T("Tessa Punch Poisoned 2"), 0x411080, 0x411100 },
    { _T("Tessa Punch Poisoned 3"), 0x411100, 0x411180 },
    { _T("Tessa Punch Poisoned 4"), 0x411180, 0x411200 },
    { _T("Tessa Punch Petrified 1"), 0x411200, 0x411280 },
    { _T("Tessa Punch Petrified 2"), 0x411280, 0x411300 },
    { _T("Tessa Punch Petrified 3"), 0x411300, 0x411380 },
    { _T("Tessa Punch Frozen 1"), 0x411380, 0x411400 },
    { _T("Tessa Punch Frozen 2"), 0x411400, 0x411480 },
    { _T("Tessa Punch Frozen 3"), 0x411480, 0x411500 },
    { _T("Tessa Punch Frozen 4"), 0x411500, 0x411580 },
    { _T("Tessa Punch Frozen 5"), 0x411580, 0x411600 },
};

const sGame_PaletteDataset REDEARTH_A_TESSA_KICK_PALETTES[] =
{
    { _T("Tessa Kick"), 0x41AC00, 0x41AC80 },
    { _T("Tessa Kick Changing Pal"), 0x41AC80, 0x41AD00 },
    { _T("Tessa Kick Vs/Winning/Losing Screen"), 0x1E4C80, 0x1E4D00 },
    { _T("Tessa Kick LifeBar Portrait"), 0x4069C0, 0x406A00 },

    { _T("Tessa Kick Bottled Ice"), 0x41AD00, 0x41AD80 },
    { _T("Tessa Kick Ultimate Guard Flash and Burn 1"), 0x41D600, 0x41D680 },
    { _T("Tessa Kick Burn 2"), 0x41D680, 0x41D700 },
    { _T("Tessa Kick Shocked 1"), 0x41D700, 0x41D780 },
    { _T("Tessa Kick Shocked 2"), 0x41D780, 0x41D800 },
    { _T("Tessa Kick Poisoned 1"), 0x41D800, 0x41D880 },
    { _T("Tessa Kick Poisoned 2"), 0x41D880, 0x41D900 },
    { _T("Tessa Kick Poisoned 3"), 0x41D900, 0x41D980 },
    { _T("Tessa Kick Poisoned 4"), 0x41D980, 0x41DA00 },
    { _T("Tessa Kick Petrified 1"), 0x41DA00, 0x41DA80 },
    { _T("Tessa Kick Petrified 2"), 0x41DA80, 0x41DB00 },
    { _T("Tessa Kick Petrified 3"), 0x41DB00, 0x41DB80 },
    { _T("Tessa Kick Frozen 1"), 0x41DB80, 0x41DC00 },
    { _T("Tessa Kick Frozen 2"), 0x41DC00, 0x41DC80 },
    { _T("Tessa Kick Frozen 3"), 0x41DC80, 0x41DD00 },
    { _T("Tessa Kick Frozen 4"), 0x41DD00, 0x41DD80 },
    { _T("Tessa Kick Frozen 5"), 0x41DD80, 0x41DE00 },
};

const sGame_PaletteDataset REDEARTH_A_TESSA_BONUS_PALETTES[] =
{
    { _T("Tessa Character Select"),                 0x1DF180, 0x1DF200 },
    { _T("Tessa Character Selected"),               0x1DEB00, 0x1DEB80 },
    { _T("Tessa Character Select Portrait "),       0x1DEF80, 0x1DF000 },
};

const sGame_PaletteDataset REDEARTH_A_MAILING_PUNCH_PALETTES[] =
{
    { _T("Mai Ling Punch"), 0x411600, 0x411680 },
    { _T("Mai Ling Punch Vs/Winning Screen"), 0x1E4C00, 0x1E4C80 },
    { _T("Mai Ling Punch Losing Screen"), 0x1E4B80, 0x1E4C00 },
    { _T("Mai Ling Punch LifeBar Portrait"), 0x406A00, 0x406A40 },

    { _T("Mai Ling Punch Fire"), 0x411680, 0x411700 },
    { _T("Mai Ling Punch Fireball"), 0x411780, 0x411800 },
    { _T("Mai Ling Punch Ultimate Guard Flash and Burn 1"), 0x414000, 0x414080 },
    { _T("Mai Ling Punch Burn 2"), 0x414080, 0x414100 },
    { _T("Mai Ling Punch Shock 1"), 0x414100, 0x414180 },
    { _T("Mai Ling Punch Shock 2"), 0x414180, 0x414200 },
    { _T("Mai Ling Punch Poisoned 1"), 0x414200, 0x414280 },
    { _T("Mai Ling Punch Poisoned 2"), 0x414280, 0x414300 },
    { _T("Mai Ling Punch Poisoned 3"), 0x414300, 0x414380 },
    { _T("Mai Ling Punch Poisoned 4"), 0x414380, 0x414400 },
    { _T("Mai Ling Punch Petrified 1"), 0x414400, 0x414480 },
    { _T("Mai Ling Punch Petrified 2"), 0x414480, 0x414500 },
    { _T("Mai Ling Punch Petrified 3"), 0x414500, 0x414580 },
    { _T("Mai Ling Punch Frozen 1"), 0x414580, 0x414600 },
    { _T("Mai Ling Punch Frozen 2"), 0x414600, 0x414680 },
    { _T("Mai Ling Punch Frozen 3"), 0x414680, 0x414700 },
    { _T("Mai Ling Punch Frozen 4"), 0x414700, 0x414780 },
    { _T("Mai Ling Punch Frozen 5"), 0x414780, 0x414800 },
};

const sGame_PaletteDataset REDEARTH_A_MAILING_KICK_PALETTES[] =
{

    { _T("Mai Ling Kick"), 0x41DE00, 0x41DE80 },
    { _T("Mai Ling Kick Vs/Winning Screen"), 0x1E4F80, 0x1E5000 },
    { _T("Mai Ling Kick Losing Screen"), 0x1E4F00, 0x1E4F80 },
    { _T("Mai Ling Kick LifeBar Portrait"), 0x406A40, 0x406A80 },

    { _T("Mai Ling Kick Fire"), 0x41DE80, 0x41DF00 },
    { _T("Mai Ling Kick Fireball"), 0x41DF80, 0x41E000 },
    { _T("Mai Ling Kick Ultimate Guard Flash and Burn 1"), 0x420800, 0x420880 },
    { _T("Mai Ling Kick Burn 2"), 0x420880, 0x420900 },
    { _T("Mai Ling Kick Shock 1"), 0x420900, 0x420980 },
    { _T("Mai Ling Kick Shock 2"), 0x420980, 0x420A00 },
    { _T("Mai Ling Kick Poisoned 1"), 0x420A00, 0x420A80 },
    { _T("Mai Ling Kick Poisoned 2"), 0x420A80, 0x420B00 },
    { _T("Mai Ling Kick Poisoned 3"), 0x420B00, 0x420B80 },
    { _T("Mai Ling Kick Poisoned 4"), 0x420B80, 0x420C00 },
    { _T("Mai Ling Kick Petrified 1"), 0x420C00, 0x420C80 },
    { _T("Mai Ling Kick Petrified 2"), 0x420C80, 0x420D00 },
    { _T("Mai Ling Kick Petrified 3"), 0x420D00, 0x420D80 },
    { _T("Mai Ling Kick Frozen 1"), 0x420D80, 0x420E00 },
    { _T("Mai Ling Kick Frozen 2"), 0x420E00, 0x420E80 },
    { _T("Mai Ling Kick Frozen 3"), 0x420E80, 0x420F00 },
    { _T("Mai Ling Kick Frozen 4"), 0x420F00, 0x420F80 },
    { _T("Mai Ling Kick Frozen 5"), 0x420F80, 0x421000 },
};

const sGame_PaletteDataset REDEARTH_A_MAILING_BONUS_PALETTES[] =
{
    { _T("Mai Ling Character Select"),          0x1DF300, 0x1DF380 },
    { _T("Mai Ling Character Selected"),        0x1DEC80, 0x1DED00 },
    { _T("Mai Ling Character Select Portrait"), 0x1DF080, 0x1DF100 },
};

const sGame_PaletteDataset REDEARTH_A_HAUZER_PALETTES[] =
{
    { _T("Hauzer"), 0x421000, 0x421080, indexRedEarthSprites_Hauzer, 0 },
};

const sGame_PaletteDataset REDEARTH_A_KONGOU_PALETTES[] =
{
    { _T("Kongou"), 0x424200, 0x424280, indexRedEarthSprites_Kongou, 0 },
    { _T("Kanabo"), 0x424280, 0x424300 },
    { _T("Stomach acid"), 0x424300, 0x424380 },
    { _T("Hurt flash"), 0x427380, 0x427400 },
    { _T("Demon Beserker 1"), 0x424380, 0x424400 },
    { _T("Demon Beserker 2"), 0x424400, 0x424480 },
    { _T("Demon Beserker 3"), 0x424480, 0x424500 },
    { _T("Demon Beserker 4"), 0x424500, 0x424580 },
    { _T("Demon Beserker 5"), 0x424580, 0x424600 },
    { _T("Demon Beserker 6"), 0x424600, 0x424680 },
    { _T("Demon Beserker 7"), 0x424680, 0x424700 },
    { _T("Tanuma, Ripped clothes"), 0x424700, 0x424780 },
    { _T("???"), 0x424780, 0x424800 },
    { _T("Tanuma transforming"), 0x424800, 0x424880 },
};

const sGame_PaletteDataset REDEARTH_A_CHARACTERSELECT_PALETTES[] =
{
    { _T("1P and 2P"), 0x1DED80, 0x1DEE00 },
    { _T("1P and 2P Flash"), 0x1DEE00, 0x1DEE80 },
    { _T("Character Selector Ring"), 0x1DEE80, 0x1DEF00 },
    { _T("Ready Warrior (1/15)"), 0x1DF400, 0x1DF480 },
    { _T("Ready Warrior (2/15)"), 0x1DF480, 0x1DF500 },
    { _T("Ready Warrior (3/15)"), 0x1DF500, 0x1DF580 },
    { _T("Ready Warrior (4/15)"), 0x1DF580, 0x1DF600 },
    { _T("Ready Warrior (5/15)"), 0x1DF600, 0x1DF680 },
    { _T("Ready Warrior (6/15)"), 0x1DF680, 0x1DF700 },
    { _T("Ready Warrior (7/15)"), 0x1DF700, 0x1DF780 },
    { _T("Ready Warrior (8/15)"), 0x1DF780, 0x1DF800 },
    { _T("Ready Warrior (9/15)"), 0x1DF800, 0x1DF880 },
    { _T("Ready Warrior (10/15)"), 0x1DF880, 0x1DF900 },
    { _T("Ready Warrior (11/15)"), 0x1DF900, 0x1DF980 },
    { _T("Ready Warrior (12/15)"), 0x1DF980, 0x1DFA00 },
    { _T("Ready Warrior (13/15)"), 0x1DFA00, 0x1DFA80 },
    { _T("Ready Warrior (14/15)"), 0x1DFA80, 0x1DFB00 },
    { _T("Ready Warrior (15/15)"), 0x1DFB00, 0x1DFB80 },
    { _T("Character Select Background Clouds (1/4)"), 0x1DE000, 0x1DE080 },
    { _T("Character Select Background Clouds (2/4)"), 0x1DE080, 0x1DE100 },
    { _T("Character Select Background Clouds (3/4)"), 0x1DE100, 0x1DE180 },
    { _T("Character Select Background Clouds (4/4)"), 0x1DE180, 0x1DE200 },
    { _T("Character Select Background Skyline (1/4)"), 0x1DE200, 0x1DE280 },
    { _T("Character Select Background Skyline (2/4)"), 0x1DE280, 0x1DE300 },
    { _T("Character Select Background Skyline (3/4)"), 0x1DE300, 0x1DE380 },
    { _T("Character Select Background Skyline (4/4)"), 0x1DE380, 0x1DE400 },
    { _T("Character Select Transition Clouds (1/4)"), 0x1DE400, 0x1DE480 },
    { _T("Character Select Transition Clouds (2/4)"), 0x1DE480, 0x1DE500 },
    { _T("Character Select Transition Clouds (3/4)"), 0x1DE500, 0x1DE580 },
    { _T("Character Select Transition Clouds (4/4)"), 0x1DE580, 0x1DE600 },
    { _T("Character Select Transition Skyline (1/4)"), 0x1DE600, 0x1DE680 },
    { _T("Character Select Transition Skyline (2/4)"), 0x1DE680, 0x1DE700 },
    { _T("Character Select Transition Skyline (3/4)"), 0x1DE700, 0x1DE780 },
    { _T("Character Select Transition Skyline (4/4)"), 0x1DE780, 0x1DE800 },
    { _T("Vs Screen Transition (1/4)"), 0x406000, 0x406100 },
    { _T("Vs Screen Transition (2/4)"), 0x406100, 0x406200 },
    { _T("Vs Screen Transition (3/4)"), 0x406200, 0x406300 },
    { _T("Vs Screen Transition (4/4)"), 0x406300, 0x406400 },
    { _T("Victory Screen (1/6)"), 0x1DE800, 0x1DE880 },
    { _T("Victory Screen (2/6)"), 0x1DE880, 0x1DE900 },
    { _T("Victory Screen (3/6)"), 0x1DE900, 0x1DE980 },
    { _T("Victory Screen (4/6)"), 0x1DE980, 0x1DEA00 },
    { _T("Victory Screen (5/6)"), 0x1DEA00, 0x1DEA80 },
    { _T("Victory Screen (6/6)"), 0x1DEA80, 0x1DEB00 },
};

const sDescTreeNode REDEARTH_A_LEO_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_LEO_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_LEO_KICK_PALETTES) },
    { _T("Bonus"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_LEO_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_KENJI_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_KENJI_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_KENJI_KICK_PALETTES) },
    { _T("Bonus"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_KENJI_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_TESSA_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_TESSA_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_TESSA_KICK_PALETTES) },
    { _T("Bonus"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_TESSA_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_MAILING_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_PUNCH_PALETTES, ARRAYSIZE(REDEARTH_A_MAILING_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_KICK_PALETTES,  ARRAYSIZE(REDEARTH_A_MAILING_KICK_PALETTES) },
    { _T("Bonus"),  DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_MAILING_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_HAUZER_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_HAUZER_PALETTES, ARRAYSIZE(REDEARTH_A_HAUZER_PALETTES) },
};

const sDescTreeNode REDEARTH_A_KONGOU_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_KONGOU_PALETTES, ARRAYSIZE(REDEARTH_A_KONGOU_PALETTES) },
};

const sDescTreeNode REDEARTH_A_CHARACTERSELECT_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_PALETTES, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_PALETTES) },
};

const sDescTreeNode REDEARTH_A_UNITS[] =
{
    { _T("Leo"),                DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_COLLECTION, ARRAYSIZE(REDEARTH_A_LEO_COLLECTION) },
    { _T("Kenji"),              DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_COLLECTION, ARRAYSIZE(REDEARTH_A_KENJI_COLLECTION) },
    { _T("Tessa"),              DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_COLLECTION, ARRAYSIZE(REDEARTH_A_TESSA_COLLECTION) },
    { _T("Mai Ling"),           DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_COLLECTION, ARRAYSIZE(REDEARTH_A_MAILING_COLLECTION) },

    { _T("Hauzer"),             DESC_NODETYPE_TREE, (void*)REDEARTH_A_HAUZER_COLLECTION, ARRAYSIZE(REDEARTH_A_HAUZER_COLLECTION) },
    { _T("Kongou"),             DESC_NODETYPE_TREE, (void*)REDEARTH_A_KONGOU_COLLECTION, ARRAYSIZE(REDEARTH_A_KONGOU_COLLECTION) },
    { _T("Character Select"),   DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_COLLECTION, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_COLLECTION) },
};

constexpr auto REDEARTH_A_NUMUNIT = ARRAYSIZE(REDEARTH_A_UNITS);
#define REDEARTH_A_EXTRALOC REDEARTH_A_NUMUNIT

const stExtraDef REDEARTH_A_EXTRA[] = 
{
    //Start

    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};

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
    { _T("Leo Character Select"),               0x1DF200, 0x1DF280, indexRedEarthSprites_Leo, 0x11 },
    { _T("Leo Character Selected"),             0x1DEB80, 0x1DEC00, indexRedEarthSprites_Leo, 0x11 },
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
    { _T("Mai Ling Punch"), 0x411600, 0x411680, indexRedEarthSprites_MaiLing, 0 },
    { _T("Mai Ling Punch Vs/Winning Screen"), 0x1E4C00, 0x1E4C80, indexRedEarthSprites_MaiLing, 0x17 },
    { _T("Mai Ling Punch Losing Screen"), 0x1E4B80, 0x1E4C00 },
    { _T("Mai Ling Punch LifeBar Portrait"), 0x406A00, 0x406A40, indexRedEarthSprites_MaiLing, 0x10 },

    { _T("Mai Ling Punch Fire"), 0x411680, 0x411700 },
    { _T("Mai Ling Punch Fireball"), 0x411780, 0x411800, indexRedEarthSprites_MaiLing, 0x01 },
    { _T("Mai Ling Punch HCB.1/2/3 Fireball"), 0x4118C0, 0x411900 },
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
    { _T("Mai Ling Kick"), 0x41DE00, 0x41DE80, indexRedEarthSprites_MaiLing, 0 },
    { _T("Mai Ling Kick Vs/Winning Screen"), 0x1E4F80, 0x1E5000, indexRedEarthSprites_MaiLing, 0x17 },
    { _T("Mai Ling Kick Losing Screen"), 0x1E4F00, 0x1E4F80 },
    { _T("Mai Ling Kick LifeBar Portrait"), 0x406A40, 0x406A80, indexRedEarthSprites_MaiLing, 0x10 },

    { _T("Mai Ling Kick Fire"), 0x41DE80, 0x41DF00 },
    { _T("Mai Ling Kick Fireball"), 0x41DF80, 0x41E000, indexRedEarthSprites_MaiLing, 0x01 },
    { _T("Mai Ling Kick HCB.1/2/3 Fireball"), 0x41E0C0, 0x41E100 },
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
    { _T("Hauzer"),             0x421000, 0x421080, indexRedEarthSprites_Hauzer, 0 },
    { _T("Hauzer hit palette"), 0x423E80, 0x423F00, indexRedEarthSprites_Hauzer, 0 },
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

const sGame_PaletteDataset REDEARTH_A_HYDRON_PALETTES[] =
{
    { _T("Hydron"), 0x427400, 0x427480 },
};

const sGame_PaletteDataset REDEARTH_A_RAVANGE_PALETTES[] =
{
    { _T("Ravange"), 0x42d800, 0x42d880 },
    { _T("Fire FX"), 0x42d880, 0x42d900 },
    { _T("Beam FX"), 0x42d900, 0x42d980 },
    { _T("Sand FX"), 0x42d980, 0x42da00 },
    { _T("Shield"), 0x42da80, 0x42db80 },
    { _T("Fire Breath flash"), 0x42db80, 0x42dc00 },
    { _T("Fire Breath 1"), 0x42dc00, 0x42dc80 },
    { _T("Fire Breath 2"), 0x42dc80, 0x42dd00 },
    { _T("Fire Breath 3"), 0x42dd00, 0x42dd80 },
    { _T("Fire Breath 4"), 0x42dd80, 0x42de00 },
    { _T("Firing Beam 1"), 0x42de00, 0x42de80 },
    { _T("Firing Beam 2"), 0x42de80, 0x42df00 },
    { _T("Firing Beam 3"), 0x42df00, 0x42df80 },
    { _T("Firing Beam 4"), 0x42df80, 0x42e000 },
    { _T("Spawning Sand 1"), 0x42e400, 0x42e480 },
    { _T("Spawning Sand 2"), 0x42e480, 0x42e500 },
    { _T("Spawning Sand 3"), 0x42e500, 0x42e580 },
    { _T("Spawning Sand 4"), 0x42e580, 0x42e600 },
    { _T("Poison Mist FX1"), 0x42ea00, 0x42eaa0 },
    { _T("Ravange Sphinx Intro"), 0x42eb00, 0x42eb20 },
    { _T("Ravange Sphinx Flash 1"), 0x42eb80, 0x42ec00 },
    { _T("Ravange Sphinx Flash 2"), 0x42ec00, 0x42ec80 },
    { _T("Ravange morph flash 1"), 0x42ec80, 0x42ed00 },
    { _T("Ravange morph flash 2"), 0x42ed00, 0x42ed80 },
    { _T("Ravange morph flash 3"), 0x42ed80, 0x42ee00 },
    { _T("Ravange morph flash 4"), 0x42ee00, 0x42ee80 },
    { _T("Ram attack 1"), 0x42e600, 0x42e680 },
    { _T("Ram attack 2"), 0x42e680, 0x42e700 },
    { _T("Ram attack 3"), 0x42e700, 0x42e780 },
    { _T("Ram attack 4"), 0x42e780, 0x42e800 },
    { _T("Lion attack 1"), 0x42e800, 0x42e880 },
    { _T("Lion attack 2"), 0x42e880, 0x42e900 },
    { _T("Lion attack 3"), 0x42e900, 0x42e980 },
    { _T("Lion attack 4"), 0x42e980, 0x42ea00 },
    { _T("Clara Tantra"), 0x42f2c0, 0x42f340 },
    { _T("Clara Flashing 1"), 0x42f380, 0x42f400 },
    { _T("Clara Flashing 2"), 0x42f400, 0x42f480 },
    { _T("Clara Flashing 3"), 0x42f480, 0x42f500 },
    { _T("Clara Flashing 4"), 0x42f500, 0x42f580 },
    { _T("Clara Flashing 5"), 0x42f580, 0x42f600 },
    { _T("Clara Flashing 6"), 0x42f600, 0x42f680 },
    { _T("Clara Flashing 7"), 0x42f680, 0x42f700 },
    { _T("Clara Flashing 8"), 0x42f700, 0x42f780 },
    { _T("Clara Flashing 9"), 0x42f780, 0x42f800 },
    { _T("Clara Flashing 10"), 0x42f800, 0x42f880 },
    { _T("Clara Flashing 11"), 0x42f880, 0x42f900 },
    { _T("Clara Flashing 12"), 0x42f900, 0x42f980 },
    { _T("Pyre"), 0x42f980, 0x42fa00 },
    { _T("Clara ball FX"), 0x42fb00, 0x42fb80 },
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

const sGame_PaletteDataset REDEARTH_A_INTRO_PALETTES[] =
{
    { _T("Capcom Logo1"), 0x320080, 0x320100 },
    { _T("Capcom Logo2"), 0x320100, 0x320180 },
    { _T("Capcom Logo3"), 0x320180, 0x320200 },
    { _T("Capcom Logo4"), 0x320200, 0x320280 },
    { _T("Capcom Logo5"), 0x320280, 0x320300 },
    { _T("Capcom Logo6"), 0x320300, 0x320380 },
    { _T("Capcom Logo7"), 0x320380, 0x320400 },
    { _T("Capcom Logo8"), 0x320400, 0x320480 },
    { _T("Capcom Logo9"), 0x320480, 0x320500 },
    { _T("Capcom Logo10"), 0x320500, 0x320580 },
    { _T("Capcom Logo11"), 0x320580, 0x320600 },
    { _T("Capcom Logo12"), 0x320600, 0x320680 },
    { _T("Capcom Logo13"), 0x320680, 0x320700 },
    { _T("Capcom Logo14"), 0x320700, 0x320780 },
    { _T("Capcom Logo15"), 0x320780, 0x320800 },
    { _T("Capcom Logo16"), 0x320800, 0x320880 },
    { _T("Capcom Logo17"), 0x320880, 0x320900 },
    { _T("Capcom Logo18"), 0x320900, 0x320980 },
    { _T("Capcom Logo19"), 0x320980, 0x320a00 },
    { _T("Capcom Logo20"), 0x320a00, 0x320a80 },
    { _T("Capcom Logo21"), 0x320a80, 0x320b00 },
    { _T("Capcom Logo22"), 0x320b00, 0x320b80 },
    { _T("Capcom Logo23"), 0x320b80, 0x320c00 },
    { _T("Capcom Logo24"), 0x320c00, 0x320c80 },
    { _T("Capcom Logo25"), 0x320c80, 0x320d00 },
    { _T("Capcom Logo26"), 0x320d00, 0x320d80 },
    { _T("Capcom Logo27"), 0x320d80, 0x320e00 },
        { _T("Intro - Red Earth"), 0x322ca0, 0x322d80 },
    { _T("Intro - Leo closeup"), 0x3226ae, 0x32272e },
    { _T("Intro - Emerald"), 0x321320, 0x321380 },
    { _T("Intro - Emerald BG1"), 0x321720, 0x3217a0 },
    { _T("Intro - Emerald BG2"), 0x3217a0, 0x321820 },
    { _T("Intro - Emerald BG3"), 0x321820, 0x3218a0 },
    { _T("Intro - Emerald BG4"), 0x3218a0, 0x321920 },
    { _T("Intro - Emerald BG5"), 0x321920, 0x3219a0 },
    { _T("Intro - Emerald BG6"), 0x3219a0, 0x321a20 },
    { _T("Intro - Emerald BG7"), 0x321a20, 0x321aa0 },
    { _T("Intro - Emerald BG8"), 0x321aa0, 0x321b20 },
    { _T("Intro - Emerald BG9"), 0x321b20, 0x321ba0 },
    { _T("Intro - Emerald BG10"), 0x321ba0, 0x321c20 },
    { _T("Intro - Emerald BG11"), 0x321c20, 0x321ca0 },
    { _T("Intro - Emerald BG12"), 0x321ca0, 0x321d20 },
    { _T("Intro - Emerald BG13"), 0x321d20, 0x321da0 },
    { _T("Intro - Emerald BG14"), 0x321da0, 0x321e20 },
    { _T("Intro - Emerald BG15"), 0x321e20, 0x321ea0 },
    { _T("Intro - Emerald BG16"), 0x321ea0, 0x321f20 },
    { _T("Intro - Emerald BG17"), 0x321f20, 0x321fa0 },
    { _T("Intro - Emerald BG18"), 0x321fa0, 0x322020 },
    { _T("Intro - Emerald BG19"), 0x322020, 0x3220a0 },
    { _T("Intro - Emerald BG20"), 0x3220a0, 0x322120 },
    { _T("Intro - Emerald BG21"), 0x322120, 0x3221a0 },
    { _T("Intro - Emerald BG22"), 0x3221a0, 0x322220 },
    { _T("Intro - Emerald BG23"), 0x322220, 0x3222a0 },
    { _T("Intro - Emerald BG24"), 0x3222a0, 0x322320 },
    { _T("Intro - Emerald BG25"), 0x322320, 0x3223a0 },
    { _T("Intro - Emerald BG26"), 0x3223a0, 0x322420 },
        { _T("Intro - Emerald FX"), 0x3216be, 0x32171e },
    { _T("Intro - Hauzer"), 0x3213a0, 0x321420 },
    { _T("Intro - Kongou"), 0x321420, 0x3214a0 },
    { _T("Intro - Hydron"), 0x3214a0, 0x321520 },
    { _T("Intro - Lavia"), 0x321520, 0x3215a0 },
    { _T("Intro - Ravange"), 0x3215a0, 0x321620 },
    { _T("Intro - Gi-Gi"), 0x321620, 0x3216a0 },
    { _T("Intro - Mai Ling background"), 0x322a20, 0x322a60 },
    { _T("Intro - Mai Ling "), 0x322aa0, 0x322b20 },
    { _T("Intro - Kenji background"), 0x322a60, 0x322aa0 },
    { _T("Intro - Kenji"), 0x322b20, 0x322bc0 },
    { _T("Intro - Tessa 1"), 0x323720, 0x3237a0 },
    { _T("Intro - Tessa 2"), 0x3237a0, 0x323820 },
    { _T("Intro - Tessa 3"), 0x323820, 0x3238a0 },
    { _T("Intro - Tessa 4"), 0x3238a0, 0x323920 },
    { _T("Intro - Tessa 5"), 0x323920, 0x3239a0 },
    { _T("Intro - Tessa 6"), 0x3239a0, 0x323a20 },
    { _T("Intro - Tessa 7"), 0x323a20, 0x323aa0 },
    { _T("Intro - Tessa 8"), 0x323aa0, 0x323b20 },
    { _T("Intro - VS Blade Sky"), 0x321220, 0x321260 },
        { _T("Intro - VS Blade Trees"), 0x324120, 0x324160 },
    { _T("Intro - Blade"), 0x323f00, 0x323fa0 },
    { _T("Intro - Leo Cliffside"), 0x323fa0, 0x324020 },
    { _T("Intro - Leo C.Thunder"), 0x324020, 0x3240a0 },
    { _T("Intro - Blade.Thunder"), 0x3240a0, 0x324120 },
    { _T("Intro - Leo flash"), 0x324620, 0x3246a0 },
    { _T("Intro - Blade flash"), 0x3246a0, 0x324720 },
    { _T("Intro - Thunderflash"), 0x324720, 0x3247a0 },
    { _T("Intro - Leo rise and slash"), 0x322d90, 0x322e90 },
    { _T("Intro - RaS BG 1"), 0x322ea0, 0x322f00 },
    { _T("Intro-Leo.S.BG1"), 0x322f20, 0x322f40 },
    { _T("Intro-Leo.S.BG2"), 0x322f40, 0x322f60 },
    { _T("Intro-Leo.S.BG3"), 0x322f60, 0x322f80 },
    { _T("Intro-Leo.S.BG4"), 0x322f80, 0x322fa0 },
    { _T("Intro-Leo.S.BG5"), 0x322fa0, 0x322fc0 },
    { _T("Intro-Leo.S.BG6"), 0x322fc0, 0x322fe0 },
    { _T("Intro-Leo.S.BG7"), 0x322fe0, 0x323000 },
    { _T("Intro-Leo.S.BG8"), 0x323000, 0x323020 },
    { _T("Intro-Leo.S.BG9"), 0x323020, 0x323040 },
    { _T("Intro-Leo.S.BG10"), 0x323040, 0x323060 },
    { _T("Intro-Leo.S.BG11"), 0x323060, 0x323080 },
    { _T("Intro-Leo.S.BG12"), 0x323080, 0x3230a0 },
    { _T("Intro-Leo.S.BG13"), 0x3230a0, 0x3230c0 },
    { _T("Intro-Leo.S.BG14"), 0x3230c0, 0x3230e0 },
    { _T("Intro-Leo.S.BG14"), 0x3230e0, 0x323100 },
    { _T("Intro-Leo.S.BG16"), 0x323100, 0x323120 },
    { _T("Intro-Leo.S.BG17"), 0x323120, 0x323140 },
    { _T("Intro-Leo.S.BG18"), 0x323140, 0x323160 },
    { _T("Intro-Leo.S.BG19"), 0x323160, 0x323180 },
    { _T("Intro-Leo.S.BG20"), 0x323180, 0x3231a0 },
    { _T("Intro-Leo.S.BG21"), 0x3231a0, 0x3231c0 },
    { _T("Intro-Leo.S.BG22"), 0x3231c0, 0x3231e0 },
    { _T("Intro-Leo.S.BG23"), 0x3231e0, 0x323200 },
    { _T("Intro-Leo.S.BG24"), 0x323200, 0x323220 },
    { _T("Intro-Leo.S.BG25"), 0x323220, 0x323240 },
    { _T("Intro-Leo.S.BG26"), 0x323240, 0x323260 },
    { _T("Intro-Leo.S.BG27"), 0x323260, 0x323280 },
    { _T("Intro-Leo.S.BG28"), 0x323280, 0x3232a0 },
    { _T("Intro-Leo.S.BG29"), 0x3232a0, 0x3232c0 },
    { _T("Intro-Leo.S.BG30"), 0x3232c0, 0x3232e0 },
    { _T("Intro-Leo.S.BG31"), 0x3232e0, 0x323300 },
    { _T("Intro-Leo.S.BG32"), 0x323300, 0x323320 },
    { _T("Intro-Leo.S.BG33"), 0x323320, 0x323340 },
    { _T("Intro-Leo.S.BG34"), 0x323340, 0x323360 },
    { _T("Intro-Leo.S.BG35"), 0x323360, 0x323380 },
    { _T("Intro-Leo.S.BG36"), 0x323380, 0x3233a0 },
    { _T("Intro-Leo.S.BG37"), 0x3233a0, 0x3233c0 },
    { _T("Intro-Leo.S.BG38"), 0x3233c0, 0x3233e0 },
    { _T("Intro-Leo.S.BG39"), 0x3233e0, 0x323400 },
    { _T("Intro-Leo.S.BG40"), 0x323400, 0x323420 },
    { _T("Intro-Leo.S.BG41"), 0x323420, 0x323440 },
    { _T("Intro-Leo.S.BG42"), 0x323440, 0x323460 },
    { _T("Intro-Leo.S.BG43"), 0x323460, 0x323480 },
    { _T("Intro-Leo.S.BG44"), 0x323480, 0x3234a0 },
    { _T("Intro-Leo.S.BG45"), 0x3234a0, 0x3234c0 },
    { _T("Intro-Leo.S.BG46"), 0x3234c0, 0x3234e0 },
    { _T("Intro-Leo.S.BG47"), 0x3234e0, 0x323500 },
    { _T("Intro-Leo.S.BG48"), 0x323500, 0x323520 },
    { _T("Intro-Leo.S.BG49"), 0x323520, 0x323540 },
    { _T("Intro-Leo.S.BG50"), 0x323540, 0x323560 },
    { _T("Intro-Leo.S.BG51"), 0x323560, 0x323580 },
    { _T("Intro-Leo.S.BG52"), 0x323580, 0x3235a0 },
    { _T("Intro-Leo.S.BG53"), 0x3235a0, 0x3235c0 },
    { _T("Intro-Leo.S.BG54"), 0x3235c0, 0x3235e0 },
    { _T("Intro-Leo.S.BG55"), 0x3235e0, 0x323600 },
    { _T("Intro-Leo.S.BG56"), 0x323600, 0x323620 },
    { _T("Intro-Leo.S.BG57"), 0x323620, 0x323640 },
    { _T("Intro-Leo.S.BG58"), 0x323640, 0x323660 },
    { _T("Intro-Leo.S.BG59"), 0x323660, 0x323680 },
    { _T("Intro-Leo.S.BG60"), 0x323680, 0x3236a0 },
    { _T("Intro-Leo.S.BG61"), 0x3236a0, 0x3236c0 },
    { _T("Intro-Leo.S.BG62"), 0x3236c0, 0x3236e0 },
    { _T("Intro-Leo.S.BG63"), 0x3236e0, 0x323700 },
    { _T("Intro-Leo.S.BG64"), 0x323700, 0x323720 },
};

const sGame_PaletteDataset REDEARTH_A_BONUS_PALETTES[] =
{
    { _T("Lifebar (danger)"), 0x406700, 0x406720 },
    { _T("Lifebar overlay (danger)"), 0x406720, 0x406740 },
    { _T("LVL Up Text 1"), 0x406800, 0x406820 },
    { _T("EXP / LVL Text"), 0x406880, 0x406900 },
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

const sDescTreeNode REDEARTH_A_HYDRON_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_HYDRON_PALETTES, ARRAYSIZE(REDEARTH_A_HYDRON_PALETTES) },
};

const sDescTreeNode REDEARTH_A_RAVANGE_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_RAVANGE_PALETTES, ARRAYSIZE(REDEARTH_A_RAVANGE_PALETTES) },
};

const sDescTreeNode REDEARTH_A_CHARACTERSELECT_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_PALETTES, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_PALETTES) },
};

const sDescTreeNode REDEARTH_A_INTRO_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_INTRO_PALETTES, ARRAYSIZE(REDEARTH_A_INTRO_PALETTES) },
};

const sDescTreeNode REDEARTH_A_BONUS_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_PALETTES, ARRAYSIZE(REDEARTH_A_BONUS_PALETTES) },
};

const sDescTreeNode REDEARTH_A_UNITS[] =
{
    { _T("Leo"),                DESC_NODETYPE_TREE, (void*)REDEARTH_A_LEO_COLLECTION, ARRAYSIZE(REDEARTH_A_LEO_COLLECTION) },
    { _T("Kenji"),              DESC_NODETYPE_TREE, (void*)REDEARTH_A_KENJI_COLLECTION, ARRAYSIZE(REDEARTH_A_KENJI_COLLECTION) },
    { _T("Tessa"),              DESC_NODETYPE_TREE, (void*)REDEARTH_A_TESSA_COLLECTION, ARRAYSIZE(REDEARTH_A_TESSA_COLLECTION) },
    { _T("Mai Ling"),           DESC_NODETYPE_TREE, (void*)REDEARTH_A_MAILING_COLLECTION, ARRAYSIZE(REDEARTH_A_MAILING_COLLECTION) },

    { _T("Hauzer"),             DESC_NODETYPE_TREE, (void*)REDEARTH_A_HAUZER_COLLECTION, ARRAYSIZE(REDEARTH_A_HAUZER_COLLECTION) },
    { _T("Kongou"),             DESC_NODETYPE_TREE, (void*)REDEARTH_A_KONGOU_COLLECTION, ARRAYSIZE(REDEARTH_A_KONGOU_COLLECTION) },
    { _T("Hydron"),             DESC_NODETYPE_TREE, (void*)REDEARTH_A_HYDRON_COLLECTION, ARRAYSIZE(REDEARTH_A_HYDRON_COLLECTION) },
    { _T("Ravanage"),           DESC_NODETYPE_TREE, (void*)REDEARTH_A_RAVANGE_COLLECTION, ARRAYSIZE(REDEARTH_A_RAVANGE_COLLECTION) },
     
    // Lavia
    // Gi Gi
    // Blade
    // Scion
    { _T("Character Select"),   DESC_NODETYPE_TREE, (void*)REDEARTH_A_CHARACTERSELECT_COLLECTION, ARRAYSIZE(REDEARTH_A_CHARACTERSELECT_COLLECTION) },
    { _T("Intro Palettes"),     DESC_NODETYPE_TREE, (void*)REDEARTH_A_INTRO_COLLECTION, ARRAYSIZE(REDEARTH_A_INTRO_COLLECTION) },
    { _T("Bonus"),              DESC_NODETYPE_TREE, (void*)REDEARTH_A_BONUS_COLLECTION, ARRAYSIZE(REDEARTH_A_BONUS_COLLECTION) },
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

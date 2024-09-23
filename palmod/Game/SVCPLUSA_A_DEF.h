#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SVCPLUSA_A_KYO_PALETTE_A. 
// * Update every array using SVCPLUSA_A_NUMUNIT below
// That should be it.  Good luck.

const std::vector<std::vector<uint16_t>> paletteBuddy_SVC_Kyo =
{
    // Makai
    { SUPP_NODE, 4, 0,
        MOD_TINT, 8, 1, 8, 1, 0, NEG + 1,
        MOD_TINT, 9, 1, 9, 7, 4, 2,
        MOD_TINT, 9, 1, 10, 2, NEG + 1, NEG + 3 },
    // Heaven spell
    { SUPP_NODE, 5, 0,
        MOD_LUM, 1, 15, 5 },
    // Midnight Bliss
    { SUPP_NODE, 7, 0,
        MOD_LUM, 1, 15, 7,
        // lipstick
        MOD_TINT, 10, 1, 10, 30, 0, 0 },
    // Hell
    { SUPP_NODE, 16, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, NEG + 7, NEG + 9, NEG + 12,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 0, NEG + 3, NEG + 3,
        MOD_TINT, 10, 6, 10, 0, NEG + 3, NEG + 3,
        // Kyo whites
        MOD_TINT, 8, 2, 8, NEG + 5, NEG + 9, NEG + 13 },
    // Hell: Makai
    { SUPP_NODE, 20, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, NEG + 7, NEG + 9, NEG + 12,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 0, NEG + 3, NEG + 3,
        MOD_TINT, 11, 5, 11, 0, NEG + 3, NEG + 3,
        // Kyo whites
        MOD_TINT, 8, 1, 8, NEG + 4, NEG + 9, NEG + 13,
        MOD_TINT, 9, 1, 9, NEG + 2, NEG + 5, NEG + 11,
        MOD_TINT, 9, 1, 10, NEG + 3, NEG + 10, NEG + 15,},
    // Hell: Heaven spell
    { SUPP_NODE, 21, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, NEG + 7, NEG + 9, NEG + 12,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 0, NEG + 3, NEG + 3,
        MOD_TINT, 10, 6, 10, 0, NEG + 3, NEG + 3,
        // Kyo whites
        MOD_TINT, 8, 2, 8, NEG + 5, NEG + 9, NEG + 13,
        MOD_LUM, 1, 15, 5 },
    // Hell: Midnight Bliss
    { SUPP_NODE, 23, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, NEG + 7, NEG + 9, NEG + 12,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 0, NEG + 3, NEG + 3,
        MOD_TINT, 11, 5, 11, 0, NEG + 3, NEG + 3,
        // Kyo whites
        MOD_TINT, 8, 2, 8, NEG + 5, NEG + 9, NEG + 13,
        MOD_LUM, 1, 15, 7,
        // lipstick
        MOD_TINT, 10, 1, 10, 30, NEG + 3, NEG + 3 },
    // Heaven
    { SUPP_NODE, 32, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, 0, 2, 4,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 2, 2, 3,
        MOD_TINT, 10, 6, 10, 2, 2, 3,
        // Kyo whites
        MOD_TINT, 8, 2, 8, 2, 1, 3 },
    // Heaven: Makai
    { SUPP_NODE, 36, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, 0, 2, 4,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 2, 2, 3,
        MOD_TINT, 11, 5, 11, 2, 2, 3,
        // Kyo whites
        MOD_TINT, 8, 1, 8, 3, 1, 2,
        MOD_TINT, 9, 1, 9, 9, 5, 5,
        MOD_TINT, 9, 1, 10, 4, 0, 0 },
    // Heaven: Heaven spell
    { SUPP_NODE, 37, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, 0, 2, 4,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 2, 2, 3,
        MOD_TINT, 10, 6, 10, 2, 2, 3,
        // Kyo whites
        MOD_TINT, 8, 2, 8, 2, 1, 3,
        MOD_LUM, 1, 15, 5 },
    // Heaven: Midnight Bliss
    { SUPP_NODE, 39, 0,
        // Kyo skin
        MOD_TINT, 1, 4, 1, 0, 2, 4,
        // Kyo clothes
        MOD_TINT, 5, 3, 5, 2, 2, 3,
        MOD_TINT, 11, 5, 11, 2, 2, 3,
        // Kyo whites
        MOD_TINT, 8, 2, 8, 2, 1, 3,
        MOD_LUM, 1, 15, 7,
        // lipstick
        MOD_TINT, 10, 1, 10, 32, 2, 3 },
};

const stPaletteProcessingInformation secondarySVCKyoEffects{ paletteBuddy_SVC_Kyo };

const std::vector<uint16_t> SVCPLUSA_A_IMGIDS_USED =
{
    indexKOF96Sprites_Ryo,
    indexKOF99Sprites_Mai,
    indexKOF02Sprites_Kim,
    indexKOF96Sprites_Choi,

    indexKOF97Sprites_IoriOrochi,       // 0x1F7
    indexKOF97Sprites_Kyo,
    indexKOF97Sprites_Terry,

    indexSVCSprites_Kyo,        // 4f
    indexSVCSprites_Iori,       // 50
    indexSVCSprites_Ryo,        // 51
    indexSVCSprites_Terry,      // 52
    indexSVCSprites_Mai,        // 53
    indexSVCSprites_Kasumi,     // 54
    indexSVCSprites_Kim,        // 55
    indexSVCSprites_MrKarate,   // 56
    indexSVCSprites_Choi,       // 57
    indexSVCSprites_Earthquake, // 58
    indexSVCSprites_Genjuro,    // 59
    indexSVCSprites_Shiki,      // 5a
    indexSVCSprites_GeeseHoward, // 5b
    indexSVCSprites_MarsPeople, // 5c
    indexSVCSprites_Goenitz,    // 5d
    indexSVCSprites_GoddessAthena, // 5e
    indexSVCSprites_Ryu,        // 5f
    indexSVCSprites_Ken,        // 60
    indexSVCSprites_ChunLi,     // 61
    indexSVCSprites_Guile,      // 62
    indexSVCSprites_Dhalsim,    // 63
    indexSVCSprites_Boxer,      // 64
    indexSVCSprites_Claw,       // 65
    indexSVCSprites_Sagat,      // 66
    indexSVCSprites_Dictator,   // 67
    indexSVCSprites_Akuma,      // 68
    indexSVCSprites_Hugo,       // 69
    indexSVCSprites_Poison,     // 6a
    indexSVCSprites_Tessa,      // 6b
    indexSVCSprites_Zero,       // 6c
    indexSVCSprites_Ciel,       // 6d
    indexSVCSprites_Demitri,    // 6e
    indexSVCSprites_Dan,        // 6f
    indexSVCSprites_RedArremer, // 70
    indexSVCSprites_OrochiIori, // 71
    indexSVCSprites_SeriousMrKarate, // 72
    indexSVCSprites_ViolentKen, // 73
    indexSVCSprites_ShinAkuma,  // 74

    indexSVCSprites_Bonus,      // 0x22c
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_PUNCH_PALETTES[] =
{
    { L"Kyo", 0x364538, 0x364558, indexKOF97Sprites_Kyo /*, 0x00, nullptr, &secondarySVCKyoEffects */ },
    { L"Fire Effect 1", 0x364558, 0x364578, indexKOF97Sprites_Kyo },
    { L"Fire Effect 2", 0x364578, 0x364598, indexKOF97Sprites_Kyo },
    { L"Electric Shock Effect", 0x364598, 0x3645b8, indexKOF97Sprites_Kyo },
    { L"Makai Spell", 0x3645b8, 0x3645d8, indexSVCSprites_Kyo, 4 },
    { L"Heaven Spell", 0x3645d8, 0x3645f8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0x3645f8, 0x364618, indexKOF97Sprites_Kyo },
    { L"Midnight Bliss", 0x364618, 0x364638, indexSVCSprites_Kyo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_KICK_PALETTES[] =
{
    { L"Kyo", 0x364738, 0x364758, indexKOF97Sprites_Kyo /*, 0x00, nullptr, &secondarySVCKyoEffects */ },
    { L"Fire Effect 1", 0x364758, 0x364778, indexKOF97Sprites_Kyo },
    { L"Fire Effect 2", 0x364778, 0x364798, indexKOF97Sprites_Kyo },
    { L"Electric Shock Effect", 0x364798, 0x3647b8, indexKOF97Sprites_Kyo },
    { L"Makai Spell", 0x3647b8, 0x3647d8, indexSVCSprites_Kyo, 4 },
    { L"Heaven Spell", 0x3647d8, 0x3647f8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0x3647f8, 0x364818, indexKOF97Sprites_Kyo },
    { L"Midnight Bliss", 0x364818, 0x364838, indexSVCSprites_Kyo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_PUNCH_HELL_PALETTES[] =
{
    { L"Kyo", 0x365138, 0x365158, indexKOF97Sprites_Kyo },
    { L"Fire Effect 1", 0x365158, 0x365178, indexKOF97Sprites_Kyo },
    { L"Fire Effect 2", 0x365178, 0x365198, indexKOF97Sprites_Kyo },
    { L"Electric Shock Effect", 0x365198, 0x3651b8, indexKOF97Sprites_Kyo },
    { L"Makai Spell", 0x3651b8, 0x3651d8, indexSVCSprites_Kyo, 4 },
    { L"Heaven Spell", 0x3651d8, 0x3651f8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0x3651f8, 0x365218, indexKOF97Sprites_Kyo },
    { L"Midnight Bliss", 0x365218, 0x365238, indexSVCSprites_Kyo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_KICK_HELL_PALETTES[] =
{
    { L"Kyo", 0x365338, 0x365358, indexKOF97Sprites_Kyo },
    { L"Fire Effect 1", 0x365358, 0x365378, indexKOF97Sprites_Kyo },
    { L"Fire Effect 2", 0x365378, 0x365398, indexKOF97Sprites_Kyo },
    { L"Electric Shock Effect", 0x365398, 0x3653b8, indexKOF97Sprites_Kyo },
    { L"Makai Spell", 0x3653b8, 0x3653d8, indexSVCSprites_Kyo, 4 },
    { L"Heaven Spell", 0x3653d8, 0x3653f8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0x3653f8, 0x365418, indexKOF97Sprites_Kyo },
    { L"Midnight Bliss", 0x365418, 0x365438, indexSVCSprites_Kyo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Kyo", 0X364D38, 0X364D58, indexKOF97Sprites_Kyo },
    { L"Fire Effect 1", 0X364D58, 0X364D78, indexKOF97Sprites_Kyo },
    { L"Fire Effect 2", 0X364D78, 0X364D98, indexKOF97Sprites_Kyo },
    { L"Electric Shock Effect", 0X364D98, 0X364DB8, indexKOF97Sprites_Kyo },
    { L"Makai Spell", 0X364DB8, 0X364DD8, indexSVCSprites_Kyo, 4 },
    { L"Heaven Spell", 0X364DD8, 0X364DF8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0X364DF8, 0X364E18, indexKOF97Sprites_Kyo },
    { L"Midnight Bliss", 0X364E18, 0X364E38, indexSVCSprites_Kyo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_KICK_HEAVEN_PALETTES[] =
{
    { L"Kyo", 0X364F38, 0X364F58, indexKOF97Sprites_Kyo },
    { L"Fire Effect 1", 0X364F58, 0X364F78, indexKOF97Sprites_Kyo },
    { L"Fire Effect 2", 0X364F78, 0X364F98, indexKOF97Sprites_Kyo },
    { L"Electric Shock Effect", 0X364F98, 0X364FB8, indexKOF97Sprites_Kyo },
    { L"Makai Spell", 0X364FB8, 0X364FD8, indexSVCSprites_Kyo, 4 },
    { L"Heaven Spell", 0X364FD8, 0X364FF8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0X364FF8, 0X365018, indexKOF97Sprites_Kyo },
    { L"Midnight Bliss", 0X365018, 0X365038, indexSVCSprites_Kyo, 7 },
};


const sGame_PaletteDataset SVCPLUSA_A_KYO_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x388538, 0x388558 },
    { L"Effect 1", 0x388558, 0x388578 },
    { L"Effect 2", 0x388578, 0x388598 },
    { L"Effect 3", 0x388598, 0x3885b8 },
    { L"Effect 4", 0x3885b8, 0x3885d8 },
    { L"Effect 5", 0x3885d8, 0x3885f8 },
    { L"Effect 6", 0x3885f8, 0x388618 },
    { L"Effect 7", 0x388618, 0x388638 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES[] =
{
    { L"Kyo Punch", 0x3a9938, 0x3a9978, indexSVCSprites_Kyo, 0x21 },
    { L"Kyo Kick", 0x3a9978, 0x3a99b8, indexSVCSprites_Kyo, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Kyo Punch", 0x3a7938, 0x3a7978, indexSVCSprites_Kyo, 0x20 },
    { L"Kyo Kick", 0x3a7978, 0x3a79b8, indexSVCSprites_Kyo, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_PUNCH_PALETTES[] =
{
    { L"Iori", 0x365538, 0x365558, indexSVCSprites_Iori },
    { L"Fire Effect 1", 0x365558, 0x365578, indexSVCSprites_Iori },
    { L"Fire Effect 2", 0x365578, 0x365598, indexSVCSprites_Iori },
    { L"Electric Shock Effect", 0x365598, 0x3655b8, indexSVCSprites_Iori },
    { L"Makai Spell", 0x3655b8, 0x3655d8, indexSVCSprites_Iori, 4 },
    { L"Heaven Spell", 0x3655d8, 0x3655f8, indexSVCSprites_Iori, 5 },
    { L"Soul Palette", 0x3655f8, 0x365618, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0x365618, 0x365638, indexSVCSprites_Iori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_KICK_PALETTES[] =
{
    { L"Iori", 0x365738, 0x365758, indexSVCSprites_Iori },
    { L"Fire Effect 1", 0x365758, 0x365778, indexSVCSprites_Iori },
    { L"Fire Effect 2", 0x365778, 0x365798, indexSVCSprites_Iori },
    { L"Electric Shock Effect", 0x365798, 0x3657b8, indexSVCSprites_Iori },
    { L"Makai Spell", 0x3657b8, 0x3657d8, indexSVCSprites_Iori, 4 },
    { L"Heaven Spell", 0x3657d8, 0x3657f8, indexSVCSprites_Iori , 5},
    { L"Soul Palette", 0x3657f8, 0x365818, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0x365818, 0x365838, indexSVCSprites_Iori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_PUNCH_HELL_PALETTES[] =
{
    { L"Iori", 0x366138, 0x366158, indexSVCSprites_Iori },
    { L"Fire Effect 1", 0x366158, 0x366178, indexSVCSprites_Iori },
    { L"Fire Effect 2", 0x366178, 0x366198, indexSVCSprites_Iori },
    { L"Electric Shock Effect", 0x366198, 0x3661b8, indexSVCSprites_Iori },
    { L"Makai Spell", 0x3661b8, 0x3661d8, indexSVCSprites_Iori, 4 },
    { L"Heaven Spell", 0x3661d8, 0x3661f8, indexSVCSprites_Iori, 5 },
    { L"Soul Palette", 0x3661f8, 0x366218, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0x366218, 0x366238, indexSVCSprites_Iori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_KICK_HELL_PALETTES[] =
{
    { L"Iori", 0x366338, 0x366358, indexSVCSprites_Iori },
    { L"Fire Effect 1", 0x366358, 0x366378, indexSVCSprites_Iori },
    { L"Fire Effect 2", 0x366378, 0x366398, indexSVCSprites_Iori },
    { L"Electric Shock Effect", 0x366398, 0x3663b8, indexSVCSprites_Iori },
    { L"Makai Spell", 0x3663b8, 0x3663d8, indexSVCSprites_Iori, 4 },
    { L"Heaven Spell", 0x3663d8, 0x3663f8, indexSVCSprites_Iori , 5},
    { L"Soul Palette", 0x3663f8, 0x366418, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0x366418, 0x366438, indexSVCSprites_Iori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Iori", 0X365D38, 0X365D58, indexSVCSprites_Iori },
    { L"Fire Effect 1", 0X365D58, 0X365D78, indexSVCSprites_Iori },
    { L"Fire Effect 2", 0X365D78, 0X365D98, indexSVCSprites_Iori },
    { L"Electric Shock Effect", 0X365D98, 0X365DB8, indexSVCSprites_Iori },
    { L"Makai Spell", 0X365DB8, 0X365DD8, indexSVCSprites_Iori, 4 },
    { L"Heaven Spell", 0X365DD8, 0X365DF8, indexSVCSprites_Iori, 5 },
    { L"Soul Palette", 0X365DF8, 0X365E18, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0X365E18, 0X365E38, indexSVCSprites_Iori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_KICK_HEAVEN_PALETTES[] =
{
    { L"Iori", 0X365F38, 0X365F58, indexSVCSprites_Iori },
    { L"Fire Effect 1", 0X365F58, 0X365F78, indexSVCSprites_Iori },
    { L"Fire Effect 2", 0X365F78, 0X365F98, indexSVCSprites_Iori },
    { L"Electric Shock Effect", 0X365F98, 0X365FB8, indexSVCSprites_Iori },
    { L"Makai Spell", 0X365FB8, 0X365FD8, indexSVCSprites_Iori, 4 },
    { L"Heaven Spell", 0X365FD8, 0X365FF8, indexSVCSprites_Iori , 5},
    { L"Soul Palette", 0X365FF8, 0X366018, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0X366018, 0X366038, indexSVCSprites_Iori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x388d38, 0x388d58 },
    { L"Effect 1", 0x388d58, 0x388d78 },
    { L"Effect 2", 0x388d78, 0x388d98 },
    { L"Effect 3", 0x388d98, 0x388db8 },
    { L"Effect 4", 0x388db8, 0x388dd8 },
    { L"Effect 5", 0x388dd8, 0x388df8 },
    { L"Effect 6", 0x388df8, 0x388e18 },
    { L"Effect 7", 0x388e18, 0x388e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Iori Punch", 0x3a99b8, 0x3a99f8, indexSVCSprites_Iori, 0x21 },
    { L"Iori Kick", 0x3a99f8, 0x3a9a38, indexSVCSprites_Iori, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Iori Punch", 0x3a79b8, 0x3a79f8, indexSVCSprites_Iori, 0x20 },
    { L"Iori Kick", 0x3a79f8, 0x3a7a38, indexSVCSprites_Iori, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_PUNCH_PALETTES[] =
{
    { L"Ryo", 0x366538, 0x366558, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 1", 0x366558, 0x366578, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 2", 0x366578, 0x366598, indexKOF96Sprites_Ryo },
    { L"Electric Shock Effect", 0x366598, 0x3665b8, indexKOF96Sprites_Ryo },
    { L"Makai Spell", 0x3665b8, 0x3665d8, indexSVCSprites_Ryo, 4 },
    { L"Heaven Spell", 0x3665d8, 0x3665f8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0x3665f8, 0x366618, indexKOF96Sprites_Ryo },
    { L"Midnight Bliss", 0x366618, 0x366638, indexSVCSprites_Ryo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_KICK_PALETTES[] =
{
    { L"Ryo", 0x366738, 0x366758, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 1", 0x366758, 0x366778, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 2", 0x366778, 0x366798, indexKOF96Sprites_Ryo },
    { L"Electric Shock Effect", 0x366798, 0x3667b8, indexKOF96Sprites_Ryo },
    { L"Makai Spell", 0x3667b8, 0x3667d8, indexSVCSprites_Ryo, 4 },
    { L"Heaven Spell", 0x3667d8, 0x3667f8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0x3667f8, 0x366818, indexKOF96Sprites_Ryo },
    { L"Midnight Bliss", 0x366818, 0x366838, indexSVCSprites_Ryo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Ryo", 0X366D38, 0X366D58, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 1", 0X366D58, 0X366D78, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 2", 0X366D78, 0X366D98, indexKOF96Sprites_Ryo },
    { L"Electric Shock Effect", 0X366D98, 0X366DB8, indexKOF96Sprites_Ryo },
    { L"Makai Spell", 0X366DB8, 0X366DD8, indexSVCSprites_Ryo, 4 },
    { L"Heaven Spell", 0X366DD8, 0X366DF8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0X366DF8, 0X366E18, indexKOF96Sprites_Ryo },
    { L"Midnight Bliss", 0X366E18, 0X366E38, indexSVCSprites_Ryo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_KICK_HEAVEN_PALETTES[] =
{
    { L"Ryo", 0X366F38, 0X366F58, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 1", 0X366F58, 0X366F78, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 2", 0X366F78, 0X366F98, indexKOF96Sprites_Ryo },
    { L"Electric Shock Effect", 0X366F98, 0X366FB8, indexKOF96Sprites_Ryo },
    { L"Makai Spell", 0X366FB8, 0X366FD8, indexSVCSprites_Ryo, 4 },
    { L"Heaven Spell", 0X366FD8, 0X366FF8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0X366FF8, 0X367018, indexKOF96Sprites_Ryo },
    { L"Midnight Bliss", 0X367018, 0X367038, indexSVCSprites_Ryo, 7 },
};


const sGame_PaletteDataset SVCPLUSA_A_RYO_PUNCH_HELL_PALETTES[] =
{
    { L"Ryo", 0X367138, 0X367158, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 1", 0X367158, 0X367178, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 2", 0X367178, 0X367198, indexKOF96Sprites_Ryo },
    { L"Electric Shock Effect", 0X367198, 0X3671B8, indexKOF96Sprites_Ryo },
    { L"Makai Spell", 0X3671B8, 0X3671D8, indexSVCSprites_Ryo, 4 },
    { L"Heaven Spell", 0X3671D8, 0X3671F8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0X3671F8, 0X367218, indexKOF96Sprites_Ryo },
    { L"Midnight Bliss", 0X367218, 0X367238, indexSVCSprites_Ryo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_KICK_HELL_PALETTES[] =
{
    { L"Ryo", 0X367338, 0X367358, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 1", 0X367358, 0X367378, indexKOF96Sprites_Ryo },
    //{ L"Unused: Fire Effect 2", 0X367378, 0X367398, indexKOF96Sprites_Ryo },
    { L"Electric Shock Effect", 0X367398, 0X3673B8, indexKOF96Sprites_Ryo },
    { L"Makai Spell", 0X3673B8, 0X3673D8, indexSVCSprites_Ryo, 4 },
    { L"Heaven Spell", 0X3673D8, 0X3673F8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0X3673F8, 0X367418, indexKOF96Sprites_Ryo },
    { L"Midnight Bliss", 0X367418, 0X367438, indexSVCSprites_Ryo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x389538, 0x389558 },
    { L"Effect 1", 0x389558, 0x389578 },
    { L"Effect 2", 0x389578, 0x389598 },
    { L"Effect 3", 0x389598, 0x3895b8 },
    { L"Effect 4", 0x3895b8, 0x3895d8 },
    { L"Effect 5", 0x3895d8, 0x3895f8 },
    { L"Effect 6", 0x3895f8, 0x389618 },
    { L"Effect 7", 0x389618, 0x389638 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES[] =
{
    { L"Ryo Punch", 0x3a9a38, 0x3a9a78, indexSVCSprites_Ryo, 0x21 },
    { L"Ryo Kick", 0x3a9a78, 0x3a9ab8, indexSVCSprites_Ryo, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Ryo Punch", 0x3a7a38, 0x3a7a78, indexSVCSprites_Ryo, 0x20 },
    { L"Ryo Kick", 0x3a7a78, 0x3a7ab8, indexSVCSprites_Ryo, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_PUNCH_PALETTES[] =
{
    { L"Terry", 0x367538, 0x367558, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 1", 0x367558, 0x367578, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 2", 0x367578, 0x367598, indexKOF97Sprites_Terry },
    { L"Electric Shock Effect", 0x367598, 0x3675b8, indexKOF97Sprites_Terry },
    { L"Makai Spell", 0x3675b8, 0x3675d8, indexSVCSprites_Terry, 4 },
    { L"Heaven Spell", 0x3675d8, 0x3675f8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0x3675f8, 0x367618, indexKOF97Sprites_Terry },
    { L"Midnight Bliss", 0x367618, 0x367638, indexSVCSprites_Terry, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_KICK_PALETTES[] =
{
    { L"Terry", 0x367738, 0x367758, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 1", 0x367758, 0x367778, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 2", 0x367778, 0x367798, indexKOF97Sprites_Terry },
    { L"Electric Shock Effect", 0x367798, 0x3677b8, indexKOF97Sprites_Terry },
    { L"Makai Spell", 0x3677b8, 0x3677d8, indexSVCSprites_Terry, 4 },
    { L"Heaven Spell", 0x3677d8, 0x3677f8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0x3677f8, 0x367818, indexKOF97Sprites_Terry },
    { L"Midnight Bliss", 0x367818, 0x367838, indexSVCSprites_Terry, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Terry", 0X367D38, 0X367D58, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 1", 0X367D58, 0X367D78, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 2", 0X367D78, 0X367D98, indexKOF97Sprites_Terry },
    { L"Electric Shock Effect", 0X367D98, 0X367DB8, indexKOF97Sprites_Terry },
    { L"Makai Spell", 0X367DB8, 0X367DD8, indexSVCSprites_Terry, 4 },
    { L"Heaven Spell", 0X367DD8, 0X367DF8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0X367DF8, 0X367E18, indexKOF97Sprites_Terry },
    { L"Midnight Bliss", 0X367E18, 0X367E38, indexSVCSprites_Terry, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_KICK_HEAVEN_PALETTES[] =
{
    { L"Terry", 0X367F38, 0X367F58, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 1", 0X367F58, 0X367F78, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 2", 0X367F78, 0X367F98, indexKOF97Sprites_Terry },
    { L"Electric Shock Effect", 0X367F98, 0X367FB8, indexKOF97Sprites_Terry },
    { L"Makai Spell", 0X367FB8, 0X367FD8, indexSVCSprites_Terry, 4 },
    { L"Heaven Spell", 0X367FD8, 0X367FF8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0X367FF8, 0X368018, indexKOF97Sprites_Terry },
    { L"Midnight Bliss", 0X368018, 0X368038, indexSVCSprites_Terry, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_PUNCH_HELL_PALETTES[] =
{
    { L"Terry", 0X368138, 0X368158, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 1", 0X368158, 0X368178, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 2", 0X368178, 0X368198, indexKOF97Sprites_Terry },
    { L"Electric Shock Effect", 0X368198, 0X3681B8, indexKOF97Sprites_Terry },
    { L"Makai Spell", 0X3681B8, 0X3681D8, indexSVCSprites_Terry, 4 },
    { L"Heaven Spell", 0X3681D8, 0X3681F8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0X3681F8, 0X368218, indexKOF97Sprites_Terry },
    { L"Midnight Bliss", 0X368218, 0X368238, indexSVCSprites_Terry, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_KICK_HELL_PALETTES[] =
{
    { L"Terry", 0X368338, 0X368358, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 1", 0X368358, 0X368378, indexKOF97Sprites_Terry },
    //{ L"Unused: Fire Effect 2", 0X368378, 0X368398, indexKOF97Sprites_Terry },
    { L"Electric Shock Effect", 0X368398, 0X3683B8, indexKOF97Sprites_Terry },
    { L"Makai Spell", 0X3683B8, 0X3683D8, indexSVCSprites_Terry, 4 },
    { L"Heaven Spell", 0X3683D8, 0X3683F8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0X3683F8, 0X368418, indexKOF97Sprites_Terry },
    { L"Midnight Bliss", 0X368418, 0X368438, indexSVCSprites_Terry, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x389d38, 0x389d58 },
    { L"Effect 1", 0x389d58, 0x389d78 },
    { L"Effect 2", 0x389d78, 0x389d98 },
    { L"Effect 3", 0x389d98, 0x389db8 },
    { L"Effect 4", 0x389db8, 0x389dd8 },
    { L"Effect 5", 0x389dd8, 0x389df8 },
    { L"Effect 6", 0x389df8, 0x389e18 },
    { L"Effect 7", 0x389e18, 0x389e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES[] =
{
    { L"Terry Punch", 0x3a9ab8, 0x3a9af8, indexSVCSprites_Terry, 0x21 },
    { L"Terry Kick", 0x3a9af8, 0x3a9b38, indexSVCSprites_Terry, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Terry Punch", 0x3a7ab8, 0x3a7af8, indexSVCSprites_Terry, 0x20 },
    { L"Terry Kick", 0x3a7af8, 0x3a7b38, indexSVCSprites_Terry, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_PUNCH_PALETTES[] =
{
    { L"Mai", 0x368538, 0x368558, indexKOF99Sprites_Mai },
    { L"Fire Effect 1", 0x368558, 0x368578, indexKOF99Sprites_Mai },
    //{ L"Unused: Fire Effect 2", 0x368578, 0x368598, indexKOF99Sprites_Mai },
    { L"Electric Shock Effect", 0x368598, 0x3685b8, indexKOF99Sprites_Mai },
    { L"Makai Spell", 0x3685b8, 0x3685d8, indexSVCSprites_Mai, 4 },
    { L"Heaven Spell", 0x3685d8, 0x3685f8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0x3685f8, 0x368618, indexKOF99Sprites_Mai },
    { L"Midnight Bliss", 0x368618, 0x368638, indexSVCSprites_Mai, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_KICK_PALETTES[] =
{
    { L"Mai", 0x368738, 0x368758, indexKOF99Sprites_Mai },
    { L"Fire Effect 1", 0x368758, 0x368778, indexKOF99Sprites_Mai },
    //{ L"Unused: Fire Effect 2", 0x368778, 0x368798, indexKOF99Sprites_Mai },
    { L"Electric Shock Effect", 0x368798, 0x3687b8, indexKOF99Sprites_Mai },
    { L"Makai Spell", 0x3687b8, 0x3687d8, indexSVCSprites_Mai, 4 },
    { L"Heaven Spell", 0x3687d8, 0x3687f8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0x3687f8, 0x368818, indexKOF99Sprites_Mai },
    { L"Midnight Bliss", 0x368818, 0x368838, indexSVCSprites_Mai, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Mai", 0X368D38, 0X368D58, indexKOF99Sprites_Mai },
    { L"Fire Effect 1", 0X368D58, 0X368D78, indexKOF99Sprites_Mai },
    //{ L"Unused: Fire Effect 2", 0X368D78, 0X368D98, indexKOF99Sprites_Mai },
    { L"Electric Shock Effect", 0X368D98, 0X368DB8, indexKOF99Sprites_Mai },
    { L"Makai Spell", 0X368DB8, 0X368DD8, indexSVCSprites_Mai, 4 },
    { L"Heaven Spell", 0X368DD8, 0X368DF8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0X368DF8, 0X368E18, indexKOF99Sprites_Mai },
    { L"Midnight Bliss", 0X368E18, 0X368E38, indexSVCSprites_Mai, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_KICK_HEAVEN_PALETTES[] =
{
    { L"Mai", 0X368F38, 0X368F58, indexKOF99Sprites_Mai },
    { L"Fire Effect 1", 0X368F58, 0X368F78, indexKOF99Sprites_Mai },
    //{ L"Unused: Fire Effect 2", 0X368F78, 0X368F98, indexKOF99Sprites_Mai },
    { L"Electric Shock Effect", 0X368F98, 0X368FB8, indexKOF99Sprites_Mai },
    { L"Makai Spell", 0X368FB8, 0X368FD8, indexSVCSprites_Mai, 4 },
    { L"Heaven Spell", 0X368FD8, 0X368FF8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0X368FF8, 0X369018, indexKOF99Sprites_Mai },
    { L"Midnight Bliss", 0X369018, 0X369038, indexSVCSprites_Mai, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_PUNCH_HELL_PALETTES[] =
{
    { L"Mai", 0X369138, 0X369158, indexKOF99Sprites_Mai },
    { L"Fire Effect 1", 0X369158, 0X369178, indexKOF99Sprites_Mai },
    //{ L"Unused: Fire Effect 2", 0X369178, 0X369198, indexKOF99Sprites_Mai },
    { L"Electric Shock Effect", 0X369198, 0X3691B8, indexKOF99Sprites_Mai },
    { L"Makai Spell", 0X3691B8, 0X3691D8, indexSVCSprites_Mai, 4 },
    { L"Heaven Spell", 0X3691D8, 0X3691F8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0X3691F8, 0X369218, indexKOF99Sprites_Mai },
    { L"Midnight Bliss", 0X369218, 0X369238, indexSVCSprites_Mai, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_KICK_HELL_PALETTES[] =
{
    { L"Mai", 0X369338, 0X369358, indexKOF99Sprites_Mai },
    { L"Fire Effect 1", 0X369358, 0X369378, indexKOF99Sprites_Mai },
    //{ L"Unused: Fire Effect 2", 0X369378, 0X369398, indexKOF99Sprites_Mai },
    { L"Electric Shock Effect", 0X369398, 0X3693B8, indexKOF99Sprites_Mai },
    { L"Makai Spell", 0X3693B8, 0X3693D8, indexSVCSprites_Mai, 4 },
    { L"Heaven Spell", 0X3693D8, 0X3693F8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0X3693F8, 0X369418, indexKOF99Sprites_Mai },
    { L"Midnight Bliss", 0X369418, 0X369438, indexSVCSprites_Mai, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38a538, 0x38a558 },
    { L"Effect 1", 0x38a558, 0x38a578 },
    { L"Effect 2", 0x38a578, 0x38a598 },
    { L"Effect 3", 0x38a598, 0x38a5b8 },
    { L"Effect 4", 0x38a5b8, 0x38a5d8 },
    { L"Effect 5", 0x38a5d8, 0x38a5f8 },
    { L"Effect 6", 0x38a5f8, 0x38a618 },
    { L"Effect 7", 0x38a618, 0x38a638 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Mai Punch", 0x3a9b38, 0x3a9b78, indexSVCSprites_Mai, 0x21 },
    { L"Mai Kick", 0x3a9b78, 0x3a9bb8, indexSVCSprites_Mai, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Mai Punch", 0x3a7b38, 0x3a7b78, indexSVCSprites_Mai, 0x20 },
    { L"Mai Kick", 0x3a7b78, 0x3a7bb8, indexSVCSprites_Mai, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_PUNCH_PALETTES[] =
{
    { L"Kasumi", 0x369538, 0x369558, indexSVCSprites_Kasumi, 0x00, &pairNext },
    { L"Umbrella", 0x369558, 0x369578, indexSVCSprites_Kasumi, 0x01 },
    //{ L"Unused: Fire Effect 2", 0x369578, 0x369598, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0x369598, 0x3695b8, indexSVCSprites_Kasumi },
    { L"Makai Spell", 0x3695b8, 0x3695d8, indexSVCSprites_Kasumi, 4 },
    { L"Heaven Spell", 0x3695d8, 0x3695f8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0x3695f8, 0x369618, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0x369618, 0x369638, indexSVCSprites_Kasumi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_KICK_PALETTES[] =
{
    { L"Kasumi", 0x369738, 0x369758, indexSVCSprites_Kasumi, 0x00, &pairNext },
    { L"Umbrella", 0x369758, 0x369778, indexSVCSprites_Kasumi, 0x01 },
    //{ L"Unused: Fire Effect 2", 0x369778, 0x369798, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0x369798, 0x3697b8, indexSVCSprites_Kasumi },
    { L"Makai Spell", 0x3697b8, 0x3697d8, indexSVCSprites_Kasumi, 4 },
    { L"Heaven Spell", 0x3697d8, 0x3697f8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0x3697f8, 0x369818, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0x369818, 0x369838, indexSVCSprites_Kasumi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_PUNCH_HELL_PALETTES[] =
{
    { L"Kasumi", 0X36A138, 0X36A158, indexSVCSprites_Kasumi, 0x00, &pairNext },
    { L"Umbrella", 0X36A158, 0X36A178, indexSVCSprites_Kasumi, 0x01 },
    //{ L"Unused: Fire Effect 2", 0X36A178, 0X36A198, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0X36A198, 0X36A1B8, indexSVCSprites_Kasumi },
    { L"Makai Spell", 0X36A1B8, 0X36A1D8, indexSVCSprites_Kasumi, 4 },
    { L"Heaven Spell", 0X36A1D8, 0X36A1F8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0X36A1F8, 0X36A218, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0X36A218, 0X36A238, indexSVCSprites_Kasumi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_KICK_HELL_PALETTES[] =
{
    { L"Kasumi", 0X36A338, 0X36A358, indexSVCSprites_Kasumi, 0x00, &pairNext },
    { L"Umbrella", 0X36A358, 0X36A378, indexSVCSprites_Kasumi, 0x01 },
    //{ L"Unused: Fire Effect 2", 0X36A378, 0X36A398, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0X36A398, 0X36A3B8, indexSVCSprites_Kasumi },
    { L"Makai Spell", 0X36A3B8, 0X36A3D8, indexSVCSprites_Kasumi, 4 },
    { L"Heaven Spell", 0X36A3D8, 0X36A3F8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0X36A3F8, 0X36A418, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0X36A418, 0X36A438, indexSVCSprites_Kasumi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Kasumi", 0X369D38, 0X369D58, indexSVCSprites_Kasumi, 0x00, &pairNext },
    { L"Umbrella", 0X369D58, 0X369D78, indexSVCSprites_Kasumi, 0x01 },
    //{ L"Unused: Fire Effect 2", 0X369D78, 0X369D98, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0X369D98, 0X369DB8, indexSVCSprites_Kasumi },
    { L"Makai Spell", 0X369DB8, 0X369DD8, indexSVCSprites_Kasumi, 4 },
    { L"Heaven Spell", 0X369DD8, 0X369DF8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0X369DF8, 0X369E18, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0X369E18, 0X369E38, indexSVCSprites_Kasumi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_KICK_HEAVEN_PALETTES[] =
{
    { L"Kasumi", 0X369F38, 0X369F58, indexSVCSprites_Kasumi, 0x00, &pairNext },
    { L"Umbrella", 0X369F58, 0X369F78, indexSVCSprites_Kasumi, 0x01 },
    //{ L"Unused: Fire Effect 2", 0X369F78, 0X369F98, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0X369F98, 0X369FB8, indexSVCSprites_Kasumi },
    { L"Makai Spell", 0X369FB8, 0X369FD8, indexSVCSprites_Kasumi, 4 },
    { L"Heaven Spell", 0X369FD8, 0X369FF8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0X369FF8, 0X36A018, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0X36A018, 0X36A038, indexSVCSprites_Kasumi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38ad38, 0x38ad58 },
    { L"Effect 1", 0x38ad58, 0x38ad78 },
    { L"Effect 2", 0x38ad78, 0x38ad98 },
    { L"Effect 3", 0x38ad98, 0x38adb8 },
    { L"Effect 4", 0x38adb8, 0x38add8 },
    { L"Effect 5", 0x38add8, 0x38adf8 },
    { L"Effect 6", 0x38adf8, 0x38ae18 },
    { L"Effect 7", 0x38ae18, 0x38ae38 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Kasumi Punch", 0x3a9bb8, 0x3a9bf8, indexSVCSprites_Kasumi, 0x21 },
    { L"Kasumi Kick", 0x3a9bf8, 0x3a9c38, indexSVCSprites_Kasumi, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Kasumi Punch", 0x3a7bb8, 0x3a7bf8, indexSVCSprites_Kasumi, 0x20 },
    { L"Kasumi Kick", 0x3a7bf8, 0x3a7c38, indexSVCSprites_Kasumi, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_PUNCH_PALETTES[] =
{
    { L"Kim", 0x36a538, 0x36a558, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 1", 0x36a558, 0x36a578, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 2", 0x36a578, 0x36a598, indexKOF02Sprites_Kim },
    { L"Electric Shock Effect", 0x36a598, 0x36a5b8, indexKOF02Sprites_Kim },
    { L"Makai Spell", 0x36a5b8, 0x36a5d8, indexSVCSprites_Kim, 4 },
    { L"Heaven Spell", 0x36a5d8, 0x36a5f8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0x36a5f8, 0x36a618, indexKOF02Sprites_Kim },
    { L"Midnight Bliss", 0x36a618, 0x36a638, indexSVCSprites_Kim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_KICK_PALETTES[] =
{
    { L"Kim", 0x36a738, 0x36a758, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 1", 0x36a758, 0x36a778, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 2", 0x36a778, 0x36a798, indexKOF02Sprites_Kim },
    { L"Electric Shock Effect", 0x36a798, 0x36a7b8, indexKOF02Sprites_Kim },
    { L"Makai Spell", 0x36a7b8, 0x36a7d8, indexSVCSprites_Kim, 4 },
    { L"Heaven Spell", 0x36a7d8, 0x36a7f8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0x36a7f8, 0x36a818, indexKOF02Sprites_Kim },
    { L"Midnight Bliss", 0x36a818, 0x36a838, indexSVCSprites_Kim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_PUNCH_HELL_PALETTES[] =
{
    { L"Kim", 0X36B138, 0X36B158, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 1", 0X36B158, 0X36B178, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 2", 0X36B178, 0X36B198, indexKOF02Sprites_Kim },
    { L"Electric Shock Effect", 0X36B198, 0X36B1B8, indexKOF02Sprites_Kim },
    { L"Makai Spell", 0X36B1B8, 0X36B1D8, indexSVCSprites_Kim, 4 },
    { L"Heaven Spell", 0X36B1D8, 0X36B1F8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0X36B1F8, 0X36B218, indexKOF02Sprites_Kim },
    { L"Midnight Bliss", 0X36B218, 0X36B238, indexSVCSprites_Kim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_KICK_HELL_PALETTES[] =
{
    { L"Kim", 0X36B338, 0X36B358, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 1", 0X36B358, 0X36B378, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 2", 0X36B378, 0X36B398, indexKOF02Sprites_Kim },
    { L"Electric Shock Effect", 0X36B398, 0X36B3B8, indexKOF02Sprites_Kim },
    { L"Makai Spell", 0X36B3B8, 0X36B3D8, indexSVCSprites_Kim, 4 },
    { L"Heaven Spell", 0X36B3D8, 0X36B3F8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0X36B3F8, 0X36B418, indexKOF02Sprites_Kim },
    { L"Midnight Bliss", 0X36B418, 0X36B438, indexSVCSprites_Kim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Kim", 0X36AD38, 0X36AD58, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 1", 0X36AD58, 0X36AD78, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 2", 0X36AD78, 0X36AD98, indexKOF02Sprites_Kim },
    { L"Electric Shock Effect", 0X36AD98, 0X36ADB8, indexKOF02Sprites_Kim },
    { L"Makai Spell", 0X36ADB8, 0X36ADD8, indexSVCSprites_Kim, 4 },
    { L"Heaven Spell", 0X36ADD8, 0X36ADF8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0X36ADF8, 0X36AE18, indexKOF02Sprites_Kim },
    { L"Midnight Bliss", 0X36AE18, 0X36AE38, indexSVCSprites_Kim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_KICK_HEAVEN_PALETTES[] =
{
    { L"Kim", 0X36AF38, 0X36AF58, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 1", 0X36AF58, 0X36AF78, indexKOF02Sprites_Kim },
    //{ L"Unused: Fire Effect 2", 0X36AF78, 0X36AF98, indexKOF02Sprites_Kim },
    { L"Electric Shock Effect", 0X36AF98, 0X36AFB8, indexKOF02Sprites_Kim },
    { L"Makai Spell", 0X36AFB8, 0X36AFD8, indexSVCSprites_Kim, 4 },
    { L"Heaven Spell", 0X36AFD8, 0X36AFF8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0X36AFF8, 0X36B018, indexKOF02Sprites_Kim },
    { L"Midnight Bliss", 0X36B018, 0X36B038, indexSVCSprites_Kim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES[] =
{
    { L"Kim Punch", 0x3a9c38, 0x3a9c78, indexSVCSprites_Kim, 0x21 },
    { L"Kim Kick", 0x3a9c78, 0x3a9cb8, indexSVCSprites_Kim, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Kim Punch", 0x3a7c38, 0x3a7c78, indexSVCSprites_Kim, 0x20 },
    { L"Kim Kick", 0x3a7c78, 0x3a7cb8, indexSVCSprites_Kim, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_PUNCH_PALETTES[] =
{
    { L"Mr. Karate", 0x36b538, 0x36b558, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 1", 0x36b558, 0x36b578, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 2", 0x36b578, 0x36b598, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0x36b598, 0x36b5b8, indexSVCSprites_MrKarate },
    { L"Makai Spell", 0x36b5b8, 0x36b5d8, indexSVCSprites_MrKarate, 4 },
    { L"Heaven Spell", 0x36b5d8, 0x36b5f8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0x36b5f8, 0x36b618, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0x36b618, 0x36b638, indexSVCSprites_MrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_KICK_PALETTES[] =
{
    { L"Mr. Karate", 0x36b738, 0x36b758, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 1", 0x36b758, 0x36b778, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 2", 0x36b778, 0x36b798, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0x36b798, 0x36b7b8, indexSVCSprites_MrKarate },
    { L"Makai Spell", 0x36b7b8, 0x36b7d8, indexSVCSprites_MrKarate, 4 },
    { L"Heaven Spell", 0x36b7d8, 0x36b7f8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0x36b7f8, 0x36b818, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0x36b818, 0x36b838, indexSVCSprites_MrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_PUNCH_HELL_PALETTES[] =
{
    { L"Mr. Karate", 0X36C138, 0X36C158, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 1", 0X36C158, 0X36C178, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 2", 0X36C178, 0X36C198, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0X36C198, 0X36C1B8, indexSVCSprites_MrKarate },
    { L"Makai Spell", 0X36C1B8, 0X36C1D8, indexSVCSprites_MrKarate, 4 },
    { L"Heaven Spell", 0X36C1D8, 0X36C1F8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0X36C1F8, 0X36C218, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0X36C218, 0X36C238, indexSVCSprites_MrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_KICK_HELL_PALETTES[] =
{
    { L"Mr. Karate", 0X36C338, 0X36C358, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 1", 0X36C358, 0X36C378, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 2", 0X36C378, 0X36C398, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0X36C398, 0X36C3B8, indexSVCSprites_MrKarate },
    { L"Makai Spell", 0X36C3B8, 0X36C3D8, indexSVCSprites_MrKarate, 4 },
    { L"Heaven Spell", 0X36C3D8, 0X36C3F8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0X36C3F8, 0X36C418, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0X36C418, 0X36C438, indexSVCSprites_MrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Mr. Karate", 0X36BD38, 0X36BD58, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 1", 0X36BD58, 0X36BD78, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 2", 0X36BD78, 0X36BD98, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0X36BD98, 0X36BDB8, indexSVCSprites_MrKarate },
    { L"Makai Spell", 0X36BDB8, 0X36BDD8, indexSVCSprites_MrKarate, 4 },
    { L"Heaven Spell", 0X36BDD8, 0X36BDF8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0X36BDF8, 0X36BE18, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0X36BE18, 0X36BE38, indexSVCSprites_MrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_KICK_HEAVEN_PALETTES[] =
{
    { L"Mr. Karate", 0X36BF38, 0X36BF58, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 1", 0X36BF58, 0X36BF78, indexSVCSprites_MrKarate },
    //{ L"Unused: Fire Effect 2", 0X36BF78, 0X36BF98, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0X36BF98, 0X36BFB8, indexSVCSprites_MrKarate },
    { L"Makai Spell", 0X36BFB8, 0X36BFD8, indexSVCSprites_MrKarate, 4 },
    { L"Heaven Spell", 0X36BFD8, 0X36BFF8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0X36BFF8, 0X36C018, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0X36C018, 0X36C038, indexSVCSprites_MrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38bd38, 0x38bd58 },
    { L"Effect 1", 0x38bd58, 0x38bd78 },
    { L"Effect 2", 0x38bd78, 0x38bd98 },
    { L"Effect 3", 0x38bd98, 0x38bdb8 },
    { L"Effect 4", 0x38bdb8, 0x38bdd8 },
    { L"Effect 5", 0x38bdd8, 0x38bdf8 },
    { L"Effect 6", 0x38bdf8, 0x38be18 },
    { L"Effect 7", 0x38be18, 0x38be38 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES[] =
{
    { L"Mr. Karate Punch", 0x3a9cb8, 0x3a9cf8, indexSVCSprites_MrKarate, 0x21 },
    { L"Mr. Karate Kick", 0x3a9cf8, 0x3a9d38, indexSVCSprites_MrKarate, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Mr. Karate Punch", 0x3a7cb8, 0x3a7cf8, indexSVCSprites_MrKarate, 0x20 },
    { L"Mr. Karate Kick", 0x3a7cf8, 0x3a7d38, indexSVCSprites_MrKarate, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_PUNCH_PALETTES[] =
{
    { L"Choi", 0x36c538, 0x36c558, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 1", 0x36c558, 0x36c578, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 2", 0x36c578, 0x36c598, indexKOF96Sprites_Choi },
    { L"Electric Shock Effect", 0x36c598, 0x36c5b8, indexKOF96Sprites_Choi },
    { L"Makai Spell", 0x36c5b8, 0x36c5d8, indexSVCSprites_Choi, 4 },
    { L"Heaven Spell", 0x36c5d8, 0x36c5f8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0x36c5f8, 0x36c618, indexKOF96Sprites_Choi },
    { L"Midnight Bliss", 0x36c618, 0x36c638, indexSVCSprites_Choi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_KICK_PALETTES[] =
{
    { L"Choi", 0x36c738, 0x36c758, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 1", 0x36c758, 0x36c778, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 2", 0x36c778, 0x36c798, indexKOF96Sprites_Choi },
    { L"Electric Shock Effect", 0x36c798, 0x36c7b8, indexKOF96Sprites_Choi },
    { L"Makai Spell", 0x36c7b8, 0x36c7d8, indexSVCSprites_Choi, 4 },
    { L"Heaven Spell", 0x36c7d8, 0x36c7f8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0x36c7f8, 0x36c818, indexKOF96Sprites_Choi },
    { L"Midnight Bliss", 0x36c818, 0x36c838, indexSVCSprites_Choi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_PUNCH_HELL_PALETTES[] =
{
    { L"Choi", 0X36D138, 0X36D158, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 1", 0X36D158, 0X36D178, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 2", 0X36D178, 0X36D198, indexKOF96Sprites_Choi },
    { L"Electric Shock Effect", 0X36D198, 0X36D1B8, indexKOF96Sprites_Choi },
    { L"Makai Spell", 0X36D1B8, 0X36D1D8, indexSVCSprites_Choi, 4 },
    { L"Heaven Spell", 0X36D1D8, 0X36D1F8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0X36D1F8, 0X36D218, indexKOF96Sprites_Choi },
    { L"Midnight Bliss", 0X36D218, 0X36D238, indexSVCSprites_Choi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_KICK_HELL_PALETTES[] =
{
    { L"Choi", 0X36D338, 0X36D358, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 1", 0X36D358, 0X36D378, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 2", 0X36D378, 0X36D398, indexKOF96Sprites_Choi },
    { L"Electric Shock Effect", 0X36D398, 0X36D3B8, indexKOF96Sprites_Choi },
    { L"Makai Spell", 0X36D3B8, 0X36D3D8, indexSVCSprites_Choi, 4 },
    { L"Heaven Spell", 0X36D3D8, 0X36D3F8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0X36D3F8, 0X36D418, indexKOF96Sprites_Choi },
    { L"Midnight Bliss", 0X36D418, 0X36D438, indexSVCSprites_Choi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Choi", 0X36CD38, 0X36CD58, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 1", 0X36CD58, 0X36CD78, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 2", 0X36CD78, 0X36CD98, indexKOF96Sprites_Choi },
    { L"Electric Shock Effect", 0X36CD98, 0X36CDB8, indexKOF96Sprites_Choi },
    { L"Makai Spell", 0X36CDB8, 0X36CDD8, indexSVCSprites_Choi, 4 },
    { L"Heaven Spell", 0X36CDD8, 0X36CDF8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0X36CDF8, 0X36CE18, indexKOF96Sprites_Choi },
    { L"Midnight Bliss", 0X36CE18, 0X36CE38, indexSVCSprites_Choi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_KICK_HEAVEN_PALETTES[] =
{
    { L"Choi", 0X36CF38, 0X36CF58, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 1", 0X36CF58, 0X36CF78, indexKOF96Sprites_Choi },
    //{ L"Unused: Fire Effect 2", 0X36CF78, 0X36CF98, indexKOF96Sprites_Choi },
    { L"Electric Shock Effect", 0X36CF98, 0X36CFB8, indexKOF96Sprites_Choi },
    { L"Makai Spell", 0X36CFB8, 0X36CFD8, indexSVCSprites_Choi, 4 },
    { L"Heaven Spell", 0X36CFD8, 0X36CFF8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0X36CFF8, 0X36D018, indexKOF96Sprites_Choi },
    { L"Midnight Bliss", 0X36D018, 0X36D038, indexSVCSprites_Choi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38c538, 0x38c558 },
    { L"Effect 1", 0x38c558, 0x38c578 },
    { L"Effect 2", 0x38c578, 0x38c598 },
    { L"Effect 3", 0x38c598, 0x38c5b8 },
    { L"Effect 4", 0x38c5b8, 0x38c5d8 },
    { L"Effect 5", 0x38c5d8, 0x38c5f8 },
    { L"Effect 6", 0x38c5f8, 0x38c618 },
    { L"Effect 7", 0x38c618, 0x38c638 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Choi Punch", 0x3a9d38, 0x3a9d78, indexSVCSprites_Choi, 0x21 },
    { L"Choi Kick", 0x3a9d78, 0x3a9db8, indexSVCSprites_Choi, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Choi Punch", 0x3a7d38, 0x3a7d78, indexSVCSprites_Choi, 0x20 },
    { L"Choi Kick", 0x3a7d78, 0x3a7db8, indexSVCSprites_Choi, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES[] =
{
    { L"Earthquake", 0x36d538, 0x36d558, indexSVCSprites_Earthquake },
    { L"Victory Pose Minions", 0x36d558, 0x36d578, indexSVCSprites_Earthquake, 0x08 },
    //{ L"Unused: Fire Effect 2", 0x36d578, 0x36d598, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0x36d598, 0x36d5b8, indexSVCSprites_Earthquake },
    { L"Makai Spell", 0x36d5b8, 0x36d5d8, indexSVCSprites_Earthquake, 4 },
    { L"Heaven Spell", 0x36d5d8, 0x36d5f8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0x36d5f8, 0x36d618, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0x36d618, 0x36d638, indexSVCSprites_Earthquake, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES[] =
{
    { L"Earthquake", 0x36d738, 0x36d758, indexSVCSprites_Earthquake },
    { L"Victory Pose Minions", 0x36d758, 0x36d778, indexSVCSprites_Earthquake, 0x08 },
    //{ L"Unused: Fire Effect 2", 0x36d778, 0x36d798, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0x36d798, 0x36d7b8, indexSVCSprites_Earthquake },
    { L"Makai Spell", 0x36d7b8, 0x36d7d8, indexSVCSprites_Earthquake, 4 },
    { L"Heaven Spell", 0x36d7d8, 0x36d7f8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0x36d7f8, 0x36d818, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0x36d818, 0x36d838, indexSVCSprites_Earthquake, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_PUNCH_HELL_PALETTES[] =
{
    { L"Earthquake", 0X36E138, 0X36E158, indexSVCSprites_Earthquake },
    { L"Victory Pose Minions", 0X36E158, 0X36E178, indexSVCSprites_Earthquake, 0x08 },
    //{ L"Unused: Fire Effect 2", 0X36E178, 0X36E198, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0X36E198, 0X36E1B8, indexSVCSprites_Earthquake },
    { L"Makai Spell", 0X36E1B8, 0X36E1D8, indexSVCSprites_Earthquake, 4 },
    { L"Heaven Spell", 0X36E1D8, 0X36E1F8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0X36E1F8, 0X36E218, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0X36E218, 0X36E238, indexSVCSprites_Earthquake, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_KICK_HELL_PALETTES[] =
{
    { L"Earthquake", 0X36E338, 0X36E358, indexSVCSprites_Earthquake },
    { L"Victory Pose Minions", 0X36E358, 0X36E378, indexSVCSprites_Earthquake, 0x08 },
    //{ L"Unused: Fire Effect 2", 0X36E378, 0X36E398, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0X36E398, 0X36E3B8, indexSVCSprites_Earthquake },
    { L"Makai Spell", 0X36E3B8, 0X36E3D8, indexSVCSprites_Earthquake, 4 },
    { L"Heaven Spell", 0X36E3D8, 0X36E3F8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0X36E3F8, 0X36E418, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0X36E418, 0X36E438, indexSVCSprites_Earthquake, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Earthquake", 0X36DD38, 0X36DD58, indexSVCSprites_Earthquake },
    { L"Victory Pose Minions", 0X36DD58, 0X36DD78, indexSVCSprites_Earthquake, 0x08 },
    //{ L"Unused: Fire Effect 2", 0X36DD78, 0X36DD98, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0X36DD98, 0X36DDB8, indexSVCSprites_Earthquake },
    { L"Makai Spell", 0X36DDB8, 0X36DDD8, indexSVCSprites_Earthquake, 4 },
    { L"Heaven Spell", 0X36DDD8, 0X36DDF8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0X36DDF8, 0X36DE18, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0X36DE18, 0X36DE38, indexSVCSprites_Earthquake, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_KICK_HEAVEN_PALETTES[] =
{
    { L"Earthquake", 0X36DF38, 0X36DF58, indexSVCSprites_Earthquake },
    { L"Victory Pose Minions", 0X36DF58, 0X36DF78, indexSVCSprites_Earthquake, 0x08 },
    //{ L"Unused: Fire Effect 2", 0X36DF78, 0X36DF98, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0X36DF98, 0X36DFB8, indexSVCSprites_Earthquake },
    { L"Makai Spell", 0X36DFB8, 0X36DFD8, indexSVCSprites_Earthquake, 4 },
    { L"Heaven Spell", 0X36DFD8, 0X36DFF8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0X36DFF8, 0X36E018, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0X36E018, 0X36E038, indexSVCSprites_Earthquake, 7 },
};


const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38cd38, 0x38cd58 },
    { L"Effect 1", 0x38cd58, 0x38cd78 },
    { L"Effect 2", 0x38cd78, 0x38cd98 },
    { L"Effect 3", 0x38cd98, 0x38cdb8 },
    { L"Effect 4", 0x38cdb8, 0x38cdd8 },
    { L"Effect 5", 0x38cdd8, 0x38cdf8 },
    { L"Effect 6", 0x38cdf8, 0x38ce18 },
    { L"Effect 7", 0x38ce18, 0x38ce38 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES[] =
{
    { L"Earthquake Punch", 0x3a9db8, 0x3a9df8, indexSVCSprites_Earthquake, 0x21 },
    { L"Earthquake Kick", 0x3a9df8, 0x3a9e38, indexSVCSprites_Earthquake, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Earthquake Punch", 0x3a7db8, 0x3a7df8, indexSVCSprites_Earthquake, 0x20 },
    { L"Earthquake Kick", 0x3a7df8, 0x3a7e38, indexSVCSprites_Earthquake, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_PUNCH_PALETTES[] =
{
    { L"Genjuro", 0x36e538, 0x36e558, indexSVCSprites_Genjuro },
    { L"Exceed", 0x36e558, 0x36e578, indexSVCSprites_Genjuro },
    //{ L"Unused: Fire Effect 2", 0x36e578, 0x36e598, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0x36e598, 0x36e5b8, indexSVCSprites_Genjuro },
    { L"Makai Spell", 0x36e5b8, 0x36e5d8, indexSVCSprites_Genjuro, 4 },
    { L"Heaven Spell", 0x36e5d8, 0x36e5f8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0x36e5f8, 0x36e618, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0x36e618, 0x36e638, indexSVCSprites_Genjuro, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_KICK_PALETTES[] =
{
    { L"Genjuro", 0x36e738, 0x36e758, indexSVCSprites_Genjuro },
    { L"Exceed", 0x36e758, 0x36e778, indexSVCSprites_Genjuro },
    //{ L"Unused: Fire Effect 2", 0x36e778, 0x36e798, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0x36e798, 0x36e7b8, indexSVCSprites_Genjuro },
    { L"Makai Spell", 0x36e7b8, 0x36e7d8, indexSVCSprites_Genjuro, 4 },
    { L"Heaven Spell", 0x36e7d8, 0x36e7f8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0x36e7f8, 0x36e818, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0x36e818, 0x36e838, indexSVCSprites_Genjuro, 7},
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_PUNCH_HELL_PALETTES[] =
{
    { L"Genjuro", 0X36F138, 0X36F158, indexSVCSprites_Genjuro },
    { L"Exceed", 0X36F158, 0X36F178, indexSVCSprites_Genjuro },
    //{ L"Unused: Fire Effect 2", 0X36F178, 0X36F198, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0X36F198, 0X36F1B8, indexSVCSprites_Genjuro },
    { L"Makai Spell", 0X36F1B8, 0X36F1D8, indexSVCSprites_Genjuro, 4 },
    { L"Heaven Spell", 0X36F1D8, 0X36F1F8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0X36F1F8, 0X36F218, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0X36F218, 0X36F238, indexSVCSprites_Genjuro, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_KICK_HELL_PALETTES[] =
{
    { L"Genjuro", 0X36F338, 0X36F358, indexSVCSprites_Genjuro },
    { L"Exceed", 0X36F358, 0X36F378, indexSVCSprites_Genjuro },
    //{ L"Unused: Fire Effect 2", 0X36F378, 0X36F398, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0X36F398, 0X36F3B8, indexSVCSprites_Genjuro },
    { L"Makai Spell", 0X36F3B8, 0X36F3D8, indexSVCSprites_Genjuro, 4 },
    { L"Heaven Spell", 0X36F3D8, 0X36F3F8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0X36F3F8, 0X36F418, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0X36F418, 0X36F438, indexSVCSprites_Genjuro, 7},
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Genjuro", 0X36ED38, 0X36ED58, indexSVCSprites_Genjuro },
    { L"Exceed", 0X36ED58, 0X36ED78, indexSVCSprites_Genjuro },
    //{ L"Unused: Fire Effect 2", 0X36ED78, 0X36ED98, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0X36ED98, 0X36EDB8, indexSVCSprites_Genjuro },
    { L"Makai Spell", 0X36EDB8, 0X36EDD8, indexSVCSprites_Genjuro, 4 },
    { L"Heaven Spell", 0X36EDD8, 0X36EDF8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0X36EDF8, 0X36EE18, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0X36EE18, 0X36EE38, indexSVCSprites_Genjuro, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_KICK_HEAVEN_PALETTES[] =
{
    { L"Genjuro", 0X36EF38, 0X36EF58, indexSVCSprites_Genjuro },
    { L"Exceed", 0X36EF58, 0X36EF78, indexSVCSprites_Genjuro },
    //{ L"Unused: Fire Effect 2", 0X36EF78, 0X36EF98, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0X36EF98, 0X36EFB8, indexSVCSprites_Genjuro },
    { L"Makai Spell", 0X36EFB8, 0X36EFD8, indexSVCSprites_Genjuro, 4 },
    { L"Heaven Spell", 0X36EFD8, 0X36EFF8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0X36EFF8, 0X36F018, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0X36F018, 0X36F038, indexSVCSprites_Genjuro, 7},
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38d538, 0x38d558 },
    { L"Effect 1", 0x38d558, 0x38d578 },
    { L"Effect 2", 0x38d578, 0x38d598 },
    { L"Effect 3", 0x38d598, 0x38d5b8 },
    { L"Effect 4", 0x38d5b8, 0x38d5d8 },
    { L"Effect 5", 0x38d5d8, 0x38d5f8 },
    { L"Effect 6", 0x38d5f8, 0x38d618 },
    { L"Effect 7", 0x38d618, 0x38d638 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES[] =
{
    { L"Genjuro Punch", 0x3a9e38, 0x3a9e78, indexSVCSprites_Genjuro, 0x21 },
    { L"Genjuro Kick", 0x3a9e78, 0x3a9eb8, indexSVCSprites_Genjuro, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Genjuro Punch", 0x3a7e38, 0x3a7e78, indexSVCSprites_Genjuro, 0x20 },
    { L"Genjuro Kick", 0x3a7e78, 0x3a7eb8, indexSVCSprites_Genjuro, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_PUNCH_PALETTES[] =
{
    { L"Shiki", 0x36f538, 0x36f558, indexSVCSprites_Shiki },
    { L"Fire Effect 1: Mumyou", 0x36f558, 0x36f578, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Setsuna", 0x36f578, 0x36f598, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0x36f598, 0x36f5b8, indexSVCSprites_Shiki },
    { L"Makai Spell", 0x36f5b8, 0x36f5d8, indexSVCSprites_Shiki, 4 },
    { L"Heaven Spell", 0x36f5d8, 0x36f5f8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0x36f5f8, 0x36f618, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0x36f618, 0x36f638, indexSVCSprites_Shiki, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_KICK_PALETTES[] =
{
    { L"Shiki", 0x36f738, 0x36f758, indexSVCSprites_Shiki },
    { L"Fire Effect 1: Mumyou", 0x36f758, 0x36f778, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Setsuna", 0x36f778, 0x36f798, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0x36f798, 0x36f7b8, indexSVCSprites_Shiki },
    { L"Makai Spell", 0x36f7b8, 0x36f7d8, indexSVCSprites_Shiki, 4 },
    { L"Heaven Spell", 0x36f7d8, 0x36f7f8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0x36f7f8, 0x36f818, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0x36f818, 0x36f838, indexSVCSprites_Shiki, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_PUNCH_HELL_PALETTES[] =
{
    { L"Shiki", 0X370138, 0X370158, indexSVCSprites_Shiki },
    { L"Fire Effect 1: Mumyou", 0X370158, 0X370178, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Setsuna", 0X370178, 0X370198, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0X370198, 0X3701B8, indexSVCSprites_Shiki },
    { L"Makai Spell", 0X3701B8, 0X3701D8, indexSVCSprites_Shiki, 4 },
    { L"Heaven Spell", 0X3701D8, 0X3701F8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0X3701F8, 0X370218, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0X370218, 0X370238, indexSVCSprites_Shiki, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_KICK_HELL_PALETTES[] =
{
    { L"Shiki", 0X370338, 0X370358, indexSVCSprites_Shiki },
    { L"Fire Effect 1: Mumyou", 0X370358, 0X370378, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Setsuna", 0X370378, 0X370398, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0X370398, 0X3703B8, indexSVCSprites_Shiki },
    { L"Makai Spell", 0X3703B8, 0X3703D8, indexSVCSprites_Shiki, 4 },
    { L"Heaven Spell", 0X3703D8, 0X3703F8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0X3703F8, 0X370418, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0X370418, 0X370438, indexSVCSprites_Shiki, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Shiki", 0X36FD38, 0X36FD58, indexSVCSprites_Shiki },
    { L"Fire Effect 1: Mumyou", 0X36FD58, 0X36FD78, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Setsuna", 0X36FD78, 0X36FD98, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0X36FD98, 0X36FDB8, indexSVCSprites_Shiki },
    { L"Makai Spell", 0X36FDB8, 0X36FDD8, indexSVCSprites_Shiki, 4 },
    { L"Heaven Spell", 0X36FDD8, 0X36FDF8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0X36FDF8, 0X36FE18, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0X36FE18, 0X36FE38, indexSVCSprites_Shiki, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_KICK_HEAVEN_PALETTES[] =
{
    { L"Shiki", 0X36FF38, 0X36FF58, indexSVCSprites_Shiki },
    { L"Fire Effect 1: Mumyou", 0X36FF58, 0X36FF78, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Setsuna", 0X36FF78, 0X36FF98, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0X36FF98, 0X36FFB8, indexSVCSprites_Shiki },
    { L"Makai Spell", 0X36FFB8, 0X36FFD8, indexSVCSprites_Shiki, 4 },
    { L"Heaven Spell", 0X36FFD8, 0X36FFF8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0X36FFF8, 0X370018, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0X370018, 0X370038, indexSVCSprites_Shiki, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_EFFECTS_PALETTES[] =
{
    { L"Effect 0: Curse Absorb", 0x38dd38, 0x38dd58, indexSVCSprites_Shiki, 0x0a },
    { L"Effect 1: Curse Purge", 0x38dd58, 0x38dd78, indexSVCSprites_Shiki, 0x0b },
    { L"Unused: Effect 2", 0x38dd78, 0x38dd98 },
    { L"Unused: Effect 3", 0x38dd98, 0x38ddb8 },
    { L"Unused: Effect 4", 0x38ddb8, 0x38ddd8 },
    { L"Unused: Effect 5", 0x38ddd8, 0x38ddf8 },
    { L"Unused: Effect 6", 0x38ddf8, 0x38de18 },
    { L"Unused: Effect 7", 0x38de18, 0x38de38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Shiki Punch", 0x3a9eb8, 0x3a9ef8, indexSVCSprites_Shiki, 0x21 },
    { L"Shiki Kick", 0x3a9ef8, 0x3a9f38, indexSVCSprites_Shiki, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Shiki Punch", 0x3a7eb8, 0x3a7ef8, indexSVCSprites_Shiki, 0x20 },
    { L"Shiki Kick", 0x3a7ef8, 0x3a7f38, indexSVCSprites_Shiki, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES[] =
{
    { L"Geese Howard", 0x370538, 0x370558, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 1", 0x370558, 0x370578, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 2", 0x370578, 0x370598, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0x370598, 0x3705b8, indexSVCSprites_GeeseHoward },
    { L"Makai Spell", 0x3705b8, 0x3705d8, indexSVCSprites_GeeseHoward, 4 },
    { L"Heaven Spell", 0x3705d8, 0x3705f8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0x3705f8, 0x370618, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0x370618, 0x370638, indexSVCSprites_GeeseHoward, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES[] =
{
    { L"Geese Howard", 0x370738, 0x370758, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 1", 0x370758, 0x370778, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 2", 0x370778, 0x370798, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0x370798, 0x3707b8, indexSVCSprites_GeeseHoward },
    { L"Makai Spell", 0x3707b8, 0x3707d8, indexSVCSprites_GeeseHoward, 4 },
    { L"Heaven Spell", 0x3707d8, 0x3707f8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0x3707f8, 0x370818, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0x370818, 0x370838, indexSVCSprites_GeeseHoward, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_PUNCH_HELL_PALETTES[] =
{
    { L"Geese Howard", 0X371138, 0X371158, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 1", 0X371158, 0X371178, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 2", 0X371178, 0X371198, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0X371198, 0X3711B8, indexSVCSprites_GeeseHoward },
    { L"Makai Spell", 0X3711B8, 0X3711D8, indexSVCSprites_GeeseHoward, 4 },
    { L"Heaven Spell", 0X3711D8, 0X3711F8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0X3711F8, 0X371218, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0X371218, 0X371238, indexSVCSprites_GeeseHoward, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_KICK_HELL_PALETTES[] =
{
    { L"Geese Howard", 0X371338, 0X371358, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 1", 0X371358, 0X371378, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 2", 0X371378, 0X371398, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0X371398, 0X3713B8, indexSVCSprites_GeeseHoward },
    { L"Makai Spell", 0X3713B8, 0X3713D8, indexSVCSprites_GeeseHoward, 4 },
    { L"Heaven Spell", 0X3713D8, 0X3713F8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0X3713F8, 0X371418, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0X371418, 0X371438, indexSVCSprites_GeeseHoward, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Geese Howard", 0X370D38, 0X370D58, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 1", 0X370D58, 0X370D78, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 2", 0X370D78, 0X370D98, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0X370D98, 0X370DB8, indexSVCSprites_GeeseHoward },
    { L"Makai Spell", 0X370DB8, 0X370DD8, indexSVCSprites_GeeseHoward, 4 },
    { L"Heaven Spell", 0X370DD8, 0X370DF8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0X370DF8, 0X370E18, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0X370E18, 0X370E38, indexSVCSprites_GeeseHoward, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_KICK_HEAVEN_PALETTES[] =
{
    { L"Geese Howard", 0X370F38, 0X370F58, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 1", 0X370F58, 0X370F78, indexSVCSprites_GeeseHoward },
    //{ L"Unused: Fire Effect 2", 0X370F78, 0X370F98, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0X370F98, 0X370FB8, indexSVCSprites_GeeseHoward },
    { L"Makai Spell", 0X370FB8, 0X370FD8, indexSVCSprites_GeeseHoward, 4 },
    { L"Heaven Spell", 0X370FD8, 0X370FF8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0X370FF8, 0X371018, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0X371018, 0X371038, indexSVCSprites_GeeseHoward, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38e538, 0x38e558 },
    { L"Effect 1", 0x38e558, 0x38e578 },
    { L"Effect 2", 0x38e578, 0x38e598 },
    { L"Effect 3", 0x38e598, 0x38e5b8 },
    { L"Effect 4", 0x38e5b8, 0x38e5d8 },
    { L"Effect 5", 0x38e5d8, 0x38e5f8 },
    { L"Effect 6", 0x38e5f8, 0x38e618 },
    { L"Effect 7", 0x38e618, 0x38e638 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES[] =
{
    { L"Geese Howard Punch", 0x3a9f38, 0x3a9f78, indexSVCSprites_GeeseHoward, 0x21 },
    { L"Geese Howard Kick", 0x3a9f78, 0x3a9fb8, indexSVCSprites_GeeseHoward, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Geese Howard Punch", 0x3a7f38, 0x3a7f78, indexSVCSprites_GeeseHoward, 0x20 },
    { L"Geese Howard Kick", 0x3a7f78, 0x3a7fb8, indexSVCSprites_GeeseHoward, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES[] =
{
    { L"Mars People", 0x371538, 0x371558, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 1", 0x371558, 0x371578, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 2", 0x371578, 0x371598, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0x371598, 0x3715b8, indexSVCSprites_MarsPeople },
    { L"Makai Spell", 0x3715b8, 0x3715d8, indexSVCSprites_MarsPeople, 4 },
    { L"Heaven Spell", 0x3715d8, 0x3715f8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0x3715f8, 0x371618, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0x371618, 0x371638, indexSVCSprites_MarsPeople, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES[] =
{
    { L"Mars People", 0x371738, 0x371758, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 1", 0x371758, 0x371778, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 2", 0x371778, 0x371798, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0x371798, 0x3717b8, indexSVCSprites_MarsPeople },
    { L"Makai Spell", 0x3717b8, 0x3717d8, indexSVCSprites_MarsPeople, 4 },
    { L"Heaven Spell", 0x3717d8, 0x3717f8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0x3717f8, 0x371818, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0x371818, 0x371838, indexSVCSprites_MarsPeople, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_PUNCH_HELL_PALETTES[] =
{
    { L"Mars People", 0X372138, 0X372158, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 1", 0X372158, 0X372178, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 2", 0X372178, 0X372198, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0X372198, 0X3721B8, indexSVCSprites_MarsPeople },
    { L"Makai Spell", 0X3721B8, 0X3721D8, indexSVCSprites_MarsPeople, 4 },
    { L"Heaven Spell", 0X3721D8, 0X3721F8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0X3721F8, 0X372218, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0X372218, 0X372238, indexSVCSprites_MarsPeople, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_KICK_HELL_PALETTES[] =
{
    { L"Mars People", 0X372338, 0X372358, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 1", 0X372358, 0X372378, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 2", 0X372378, 0X372398, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0X372398, 0X3723B8, indexSVCSprites_MarsPeople },
    { L"Makai Spell", 0X3723B8, 0X3723D8, indexSVCSprites_MarsPeople, 4 },
    { L"Heaven Spell", 0X3723D8, 0X3723F8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0X3723F8, 0X372418, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0X372418, 0X372438, indexSVCSprites_MarsPeople, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Mars People", 0X371D38, 0X371D58, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 1", 0X371D58, 0X371D78, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 2", 0X371D78, 0X371D98, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0X371D98, 0X371DB8, indexSVCSprites_MarsPeople },
    { L"Makai Spell", 0X371DB8, 0X371DD8, indexSVCSprites_MarsPeople, 4 },
    { L"Heaven Spell", 0X371DD8, 0X371DF8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0X371DF8, 0X371E18, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0X371E18, 0X371E38, indexSVCSprites_MarsPeople, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_KICK_HEAVEN_PALETTES[] =
{
    { L"Mars People", 0X371F38, 0X371F58, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 1", 0X371F58, 0X371F78, indexSVCSprites_MarsPeople },
    //{ L"Unused: Fire Effect 2", 0X371F78, 0X371F98, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0X371F98, 0X371FB8, indexSVCSprites_MarsPeople },
    { L"Makai Spell", 0X371FB8, 0X371FD8, indexSVCSprites_MarsPeople, 4 },
    { L"Heaven Spell", 0X371FD8, 0X371FF8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0X371FF8, 0X372018, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0X372018, 0X372038, indexSVCSprites_MarsPeople, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES[] =
{
    { L"Effect 0: Plasma Beam C/Roswell Banish 1", 0x38ed38, 0x38ed58, indexSVCSprites_MarsPeople, 0x01 },
    { L"Effect 1: Plasma Beam A/Roswell Banish 2/Plasma Abduction", 0x38ed58, 0x38ed78, indexSVCSprites_MarsPeople, 0x02 },
    { L"Effect 2: No Independence/Tungus Incident", 0x38ed78, 0x38ed98, indexSVCSprites_MarsPeople, 0x03 },
    { L"Unused: Effect 3", 0x38ed98, 0x38edb8 },
    { L"Unused: Effect 4", 0x38edb8, 0x38edd8 },
    { L"Unused: Effect 5", 0x38edd8, 0x38edf8 },
    { L"Unused: Effect 6", 0x38edf8, 0x38ee18 },
    { L"Unused: Effect 7", 0x38ee18, 0x38ee38 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES[] =
{
    { L"Mars People Punch", 0x3a9fb8, 0x3a9ff8, indexSVCSprites_MarsPeople, 0x21 },
    { L"Mars People Kick", 0x3a9ff8, 0x3aa038, indexSVCSprites_MarsPeople, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Mars People Punch", 0x3a7fb8, 0x3a7ff8, indexSVCSprites_MarsPeople, 0x20 },
    { L"Mars People Kick", 0x3a7ff8, 0x3a8038, indexSVCSprites_MarsPeople, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_PUNCH_PALETTES[] =
{
    { L"Goenitz", 0x372538, 0x372558, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 1", 0x372558, 0x372578, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 2", 0x372578, 0x372598, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0x372598, 0x3725b8, indexSVCSprites_Goenitz },
    { L"Makai Spell", 0x3725b8, 0x3725d8, indexSVCSprites_Goenitz, 4 },
    { L"Heaven Spell", 0x3725d8, 0x3725f8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0x3725f8, 0x372618, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0x372618, 0x372638, indexSVCSprites_Goenitz, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_KICK_PALETTES[] =
{
    { L"Goenitz", 0x372738, 0x372758, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 1", 0x372758, 0x372778, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 2", 0x372778, 0x372798, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0x372798, 0x3727b8, indexSVCSprites_Goenitz },
    { L"Makai Spell", 0x3727b8, 0x3727d8, indexSVCSprites_Goenitz, 4 },
    { L"Heaven Spell", 0x3727d8, 0x3727f8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0x3727f8, 0x372818, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0x372818, 0x372838, indexSVCSprites_Goenitz, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_PUNCH_HELL_PALETTES[] =
{
    { L"Goenitz", 0X373138, 0X373158, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 1", 0X373158, 0X373178, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 2", 0X373178, 0X373198, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0X373198, 0X3731B8, indexSVCSprites_Goenitz },
    { L"Makai Spell", 0X3731B8, 0X3731D8, indexSVCSprites_Goenitz, 4 },
    { L"Heaven Spell", 0X3731D8, 0X3731F8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0X3731F8, 0X373218, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0X373218, 0X373238, indexSVCSprites_Goenitz, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_KICK_HELL_PALETTES[] =
{
    { L"Goenitz", 0X373338, 0X373358, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 1", 0X373358, 0X373378, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 2", 0X373378, 0X373398, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0X373398, 0X3733B8, indexSVCSprites_Goenitz },
    { L"Makai Spell", 0X3733B8, 0X3733D8, indexSVCSprites_Goenitz, 4 },
    { L"Heaven Spell", 0X3733D8, 0X3733F8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0X3733F8, 0X373418, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0X373418, 0X373438, indexSVCSprites_Goenitz, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Goenitz", 0X372D38, 0X372D58, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 1", 0X372D58, 0X372D78, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 2", 0X372D78, 0X372D98, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0X372D98, 0X372DB8, indexSVCSprites_Goenitz },
    { L"Makai Spell", 0X372DB8, 0X372DD8, indexSVCSprites_Goenitz, 4 },
    { L"Heaven Spell", 0X372DD8, 0X372DF8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0X372DF8, 0X372E18, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0X372E18, 0X372E38, indexSVCSprites_Goenitz, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_KICK_HEAVEN_PALETTES[] =
{
    { L"Goenitz", 0X372F38, 0X372F58, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 1", 0X372F58, 0X372F78, indexSVCSprites_Goenitz },
    //{ L"Unused: Fire Effect 2", 0X372F78, 0X372F98, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0X372F98, 0X372FB8, indexSVCSprites_Goenitz },
    { L"Makai Spell", 0X372FB8, 0X372FD8, indexSVCSprites_Goenitz, 4 },
    { L"Heaven Spell", 0X372FD8, 0X372FF8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0X372FF8, 0X373018, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0X373018, 0X373038, indexSVCSprites_Goenitz, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38f538, 0x38f558 },
    { L"Effect 1", 0x38f558, 0x38f578 },
    { L"Effect 2", 0x38f578, 0x38f598 },
    { L"Effect 3", 0x38f598, 0x38f5b8 },
    { L"Effect 4", 0x38f5b8, 0x38f5d8 },
    { L"Effect 5", 0x38f5d8, 0x38f5f8 },
    { L"Effect 6", 0x38f5f8, 0x38f618 },
    { L"Effect 7", 0x38f618, 0x38f638 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES[] =
{
    { L"Goenitz Punch", 0x3aa038, 0x3aa078, indexSVCSprites_Goenitz, 0x21 },
    { L"Goenitz Kick", 0x3aa078, 0x3aa0b8, indexSVCSprites_Goenitz, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Goenitz Punch", 0x3a8038, 0x3a8078, indexSVCSprites_Goenitz, 0x20 },
    { L"Goenitz Kick", 0x3a8078, 0x3a80b8, indexSVCSprites_Goenitz, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_PUNCH_PALETTES[] =
{
    { L"Goddess Athena", 0x373538, 0x373558, indexSVCSprites_GoddessAthena, 0x0, &pairHandledInCode },
    { L"Milk Crown and Exceed", 0x373558, 0x373578, indexSVCSprites_GoddessAthena, 0x1 },
    { L"Poseidon Rage", 0x373578, 0x373598, indexSVCSprites_GoddessAthena, 0x2 },
    { L"Electric Shock Effect", 0x373598, 0x3735b8, indexSVCSprites_GoddessAthena },
    { L"Unused: Tree and Bug Copy", 0x3735b8, 0x3735d8 },
    { L"Tree and Bug", 0x3735d8, 0x3735f8, indexSVCSprites_GoddessAthena, 0x3 },
    { L"Soul Palette", 0x3735f8, 0x373618, indexSVCSprites_GoddessAthena },
    { L"Midnight Bliss", 0x373618, 0x373638, indexSVCSprites_GoddessAthena, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_KICK_PALETTES[] =
{
    { L"Goddess Athena", 0x373738, 0x373758, indexSVCSprites_GoddessAthena, 0x0, &pairHandledInCode },
    { L"Milk Crown and Exceed", 0x373758, 0x373778, indexSVCSprites_GoddessAthena, 0x1 },
    { L"Poseidon Rage", 0x373778, 0x373798, indexSVCSprites_GoddessAthena, 0x2 },
    { L"Electric Shock Effect", 0x373798, 0x3737b8, indexSVCSprites_GoddessAthena },
    { L"Unused: Tree and Bug Copy", 0x3737b8, 0x3737d8 },
    { L"Tree and Bug", 0x3737d8, 0x3737f8, indexSVCSprites_GoddessAthena, 0x3 },
    { L"Soul Palette", 0x3737f8, 0x373818, indexSVCSprites_GoddessAthena },
    { L"Midnight Bliss", 0x373818, 0x373838, indexSVCSprites_GoddessAthena, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_PUNCH_HELL_PALETTES[] =
{
    { L"Goddess Athena", 0X374138, 0X374158, indexSVCSprites_GoddessAthena, 0x0, &pairHandledInCode },
    { L"Milk Crown and Exceed", 0X374158, 0X374178, indexSVCSprites_GoddessAthena, 0x1 },
    { L"Poseidon Rage", 0X374178, 0X374198, indexSVCSprites_GoddessAthena, 0x2 },
    { L"Electric Shock Effect", 0X374198, 0X3741B8, indexSVCSprites_GoddessAthena },
    { L"Unused: Tree and Bug Copy", 0X3741B8, 0X3741D8 },
    { L"Tree and Bug", 0X3741D8, 0X3741F8, indexSVCSprites_GoddessAthena, 0x3 },
    { L"Soul Palette", 0X3741F8, 0X374218, indexSVCSprites_GoddessAthena },
    { L"Midnight Bliss", 0X374218, 0X374238, indexSVCSprites_GoddessAthena, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_KICK_HELL_PALETTES[] =
{
    { L"Goddess Athena", 0X374338, 0X374358, indexSVCSprites_GoddessAthena, 0x0, &pairHandledInCode },
    { L"Milk Crown and Exceed", 0X374358, 0X374378, indexSVCSprites_GoddessAthena, 0x1 },
    { L"Poseidon Rage", 0X374378, 0X374398, indexSVCSprites_GoddessAthena, 0x2 },
    { L"Electric Shock Effect", 0X374398, 0X3743B8, indexSVCSprites_GoddessAthena },
    { L"Unused: Tree and Bug Copy", 0X3743B8, 0X3743D8 },
    { L"Tree and Bug", 0X3743D8, 0X3743F8, indexSVCSprites_GoddessAthena, 0x3 },
    { L"Soul Palette", 0X3743F8, 0X374418, indexSVCSprites_GoddessAthena },
    { L"Midnight Bliss", 0X374418, 0X374438, indexSVCSprites_GoddessAthena, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Goddess Athena", 0X373D38, 0X373D58, indexSVCSprites_GoddessAthena, 0x0, &pairHandledInCode },
    { L"Milk Crown and Exceed", 0X373D58, 0X373D78, indexSVCSprites_GoddessAthena, 0x1 },
    { L"Poseidon Rage", 0X373D78, 0X373D98, indexSVCSprites_GoddessAthena, 0x2 },
    { L"Electric Shock Effect", 0X373D98, 0X373DB8, indexSVCSprites_GoddessAthena },
    { L"Unused: Tree and Bug Copy", 0X373DB8, 0X373DD8 },
    { L"Tree and Bug", 0X373DD8, 0X373DF8, indexSVCSprites_GoddessAthena, 0x3 },
    { L"Soul Palette", 0X373DF8, 0X373E18, indexSVCSprites_GoddessAthena },
    { L"Midnight Bliss", 0X373E18, 0X373E38, indexSVCSprites_GoddessAthena, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_KICK_HEAVEN_PALETTES[] =
{
    { L"Goddess Athena", 0X373F38, 0X373F58, indexSVCSprites_GoddessAthena, 0x0, &pairHandledInCode },
    { L"Milk Crown and Exceed", 0X373F58, 0X373F78, indexSVCSprites_GoddessAthena, 0x1 },
    { L"Poseidon Rage", 0X373F78, 0X373F98, indexSVCSprites_GoddessAthena, 0x2 },
    { L"Electric Shock Effect", 0X373F98, 0X373FB8, indexSVCSprites_GoddessAthena },
    { L"Unused: Tree and Bug Copy", 0X373FB8, 0X373FD8 },
    { L"Tree and Bug", 0X373FD8, 0X373FF8, indexSVCSprites_GoddessAthena, 0x3 },
    { L"Soul Palette", 0X373FF8, 0X374018, indexSVCSprites_GoddessAthena },
    { L"Midnight Bliss", 0X374018, 0X374038, indexSVCSprites_GoddessAthena, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x38fd38, 0x38fd58 },
    { L"Effect 1", 0x38fd58, 0x38fd78 },
    { L"Effect 2", 0x38fd78, 0x38fd98 },
    { L"Effect 3", 0x38fd98, 0x38fdb8 },
    { L"Effect 4", 0x38fdb8, 0x38fdd8 },
    { L"Effect 5", 0x38fdd8, 0x38fdf8 },
    { L"Effect 6", 0x38fdf8, 0x38fe18 },
    { L"Effect 7", 0x38fe18, 0x38fe38 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_WIN_PORTRAITS_PALETTES[] =
{
    { L"Goddess Athena Punch", 0x3aa0b8, 0x3aa0f8, indexSVCSprites_GoddessAthena, 0x21 },
    { L"Goddess Athena Kick", 0x3aa0f8, 0x3aa138, indexSVCSprites_GoddessAthena, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GODDESSATHENA_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Goddess Athena Punch", 0x3a80b8, 0x3a80f8, indexSVCSprites_GoddessAthena, 0x20 },
    { L"Goddess Athena Kick", 0x3a80f8, 0x3a8138, indexSVCSprites_GoddessAthena, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_PUNCH_PALETTES[] =
{
    { L"Ryu", 0x374538, 0x374558, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 1", 0x374558, 0x374578, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 2", 0x374578, 0x374598, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0x374598, 0x3745b8, indexSVCSprites_Ryu },
    { L"Makai Spell", 0x3745b8, 0x3745d8, indexSVCSprites_Ryu, 4 },
    { L"Heaven Spell", 0x3745d8, 0x3745f8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0x3745f8, 0x374618, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0x374618, 0x374638, indexSVCSprites_Ryu, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_KICK_PALETTES[] =
{
    { L"Ryu", 0x374738, 0x374758, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 1", 0x374758, 0x374778, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 2", 0x374778, 0x374798, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0x374798, 0x3747b8, indexSVCSprites_Ryu },
    { L"Makai Spell", 0x3747b8, 0x3747d8, indexSVCSprites_Ryu, 4 },
    { L"Heaven Spell", 0x3747d8, 0x3747f8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0x3747f8, 0x374818, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0x374818, 0x374838, indexSVCSprites_Ryu, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_PUNCH_HELL_PALETTES[] =
{
    { L"Ryu", 0X375138, 0X375158, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 1", 0X375158, 0X375178, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 2", 0X375178, 0X375198, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0X375198, 0X3751B8, indexSVCSprites_Ryu },
    { L"Makai Spell", 0X3751B8, 0X3751D8, indexSVCSprites_Ryu, 4 },
    { L"Heaven Spell", 0X3751D8, 0X3751F8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0X3751F8, 0X375218, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0X375218, 0X375238, indexSVCSprites_Ryu, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_KICK_HELL_PALETTES[] =
{
    { L"Ryu", 0X375338, 0X375358, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 1", 0X375358, 0X375378, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 2", 0X375378, 0X375398, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0X375398, 0X3753B8, indexSVCSprites_Ryu },
    { L"Makai Spell", 0X3753B8, 0X3753D8, indexSVCSprites_Ryu, 4 },
    { L"Heaven Spell", 0X3753D8, 0X3753F8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0X3753F8, 0X375418, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0X375418, 0X375438, indexSVCSprites_Ryu, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Ryu", 0X374D38, 0X374D58, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 1", 0X374D58, 0X374D78, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 2", 0X374D78, 0X374D98, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0X374D98, 0X374DB8, indexSVCSprites_Ryu },
    { L"Makai Spell", 0X374DB8, 0X374DD8, indexSVCSprites_Ryu, 4 },
    { L"Heaven Spell", 0X374DD8, 0X374DF8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0X374DF8, 0X374E18, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0X374E18, 0X374E38, indexSVCSprites_Ryu, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_KICK_HEAVEN_PALETTES[] =
{
    { L"Ryu", 0X374F38, 0X374F58, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 1", 0X374F58, 0X374F78, indexSVCSprites_Ryu },
    //{ L"Unused: Fire Effect 2", 0X374F78, 0X374F98, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0X374F98, 0X374FB8, indexSVCSprites_Ryu },
    { L"Makai Spell", 0X374FB8, 0X374FD8, indexSVCSprites_Ryu, 4 },
    { L"Heaven Spell", 0X374FD8, 0X374FF8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0X374FF8, 0X375018, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0X375018, 0X375038, indexSVCSprites_Ryu, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x390538, 0x390558 },
    { L"Effect 1", 0x390558, 0x390578 },
    { L"Effect 2", 0x390578, 0x390598 },
    { L"Effect 3", 0x390598, 0x3905b8 },
    { L"Effect 4", 0x3905b8, 0x3905d8 },
    { L"Effect 5", 0x3905d8, 0x3905f8 },
    { L"Effect 6", 0x3905f8, 0x390618 },
    { L"Effect 7", 0x390618, 0x390638 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES[] =
{
    { L"Ryu Punch", 0x3aa138, 0x3aa178, indexSVCSprites_Ryu, 0x21 },
    { L"Ryu Kick", 0x3aa178, 0x3aa1b8, indexSVCSprites_Ryu, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Ryu Punch", 0x3a8138, 0x3a8178, indexSVCSprites_Ryu, 0x20 },
    { L"Ryu Kick", 0x3a8178, 0x3a81b8, indexSVCSprites_Ryu, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_PUNCH_PALETTES[] =
{
    { L"Ken", 0x375538, 0x375558, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 1", 0x375558, 0x375578, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 2", 0x375578, 0x375598, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0x375598, 0x3755b8, indexSVCSprites_Ken },
    { L"Makai Spell", 0x3755b8, 0x3755d8, indexSVCSprites_Ken, 4 },
    { L"Heaven Spell", 0x3755d8, 0x3755f8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0x3755f8, 0x375618, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0x375618, 0x375638, indexSVCSprites_Ken, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_KICK_PALETTES[] =
{
    { L"Ken", 0x375738, 0x375758, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 1", 0x375758, 0x375778, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 2", 0x375778, 0x375798, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0x375798, 0x3757b8, indexSVCSprites_Ken },
    { L"Makai Spell", 0x3757b8, 0x3757d8, indexSVCSprites_Ken, 4 },
    { L"Heaven Spell", 0x3757d8, 0x3757f8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0x3757f8, 0x375818, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0x375818, 0x375838, indexSVCSprites_Ken, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_PUNCH_HELL_PALETTES[] =
{
    { L"Ken", 0X376138, 0X376158, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 1", 0X376158, 0X376178, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 2", 0X376178, 0X376198, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0X376198, 0X3761B8, indexSVCSprites_Ken },
    { L"Makai Spell", 0X3761B8, 0X3761D8, indexSVCSprites_Ken, 4 },
    { L"Heaven Spell", 0X3761D8, 0X3761F8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0X3761F8, 0X376218, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0X376218, 0X376238, indexSVCSprites_Ken, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_KICK_HELL_PALETTES[] =
{
    { L"Ken", 0X376338, 0X376358, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 1", 0X376358, 0X376378, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 2", 0X376378, 0X376398, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0X376398, 0X3763B8, indexSVCSprites_Ken },
    { L"Makai Spell", 0X3763B8, 0X3763D8, indexSVCSprites_Ken, 4 },
    { L"Heaven Spell", 0X3763D8, 0X3763F8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0X3763F8, 0X376418, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0X376418, 0X376438, indexSVCSprites_Ken, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Ken", 0X375D38, 0X375D58, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 1", 0X375D58, 0X375D78, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 2", 0X375D78, 0X375D98, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0X375D98, 0X375DB8, indexSVCSprites_Ken },
    { L"Makai Spell", 0X375DB8, 0X375DD8, indexSVCSprites_Ken, 4 },
    { L"Heaven Spell", 0X375DD8, 0X375DF8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0X375DF8, 0X375E18, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0X375E18, 0X375E38, indexSVCSprites_Ken, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_KICK_HEAVEN_PALETTES[] =
{
    { L"Ken", 0X375F38, 0X375F58, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 1", 0X375F58, 0X375F78, indexSVCSprites_Ken },
    //{ L"Unused: Fire Effect 2", 0X375F78, 0X375F98, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0X375F98, 0X375FB8, indexSVCSprites_Ken },
    { L"Makai Spell", 0X375FB8, 0X375FD8, indexSVCSprites_Ken, 4 },
    { L"Heaven Spell", 0X375FD8, 0X375FF8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0X375FF8, 0X376018, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0X376018, 0X376038, indexSVCSprites_Ken, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x390d38, 0x390d58 },
    { L"Effect 1", 0x390d58, 0x390d78 },
    { L"Effect 2", 0x390d78, 0x390d98 },
    { L"Effect 3", 0x390d98, 0x390db8 },
    { L"Effect 4", 0x390db8, 0x390dd8 },
    { L"Effect 5", 0x390dd8, 0x390df8 },
    { L"Effect 6", 0x390df8, 0x390e18 },
    { L"Effect 7", 0x390e18, 0x390e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES[] =
{
    { L"Ken Punch", 0x3aa1b8, 0x3aa1f8, indexSVCSprites_Ken, 0x21 },
    { L"Ken Kick", 0x3aa1f8, 0x3aa238, indexSVCSprites_Ken, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Ken Punch", 0x3a81b8, 0x3a81f8, indexSVCSprites_Ken, 0x20 },
    { L"Ken Kick", 0x3a81f8, 0x3a8238, indexSVCSprites_Ken, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_PUNCH_PALETTES[] =
{
    { L"Chun-Li", 0x376538, 0x376558, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 1", 0x376558, 0x376578, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 2", 0x376578, 0x376598, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0x376598, 0x3765b8, indexSVCSprites_ChunLi },
    { L"Makai Spell", 0x3765b8, 0x3765d8, indexSVCSprites_ChunLi, 4 },
    { L"Heaven Spell", 0x3765d8, 0x3765f8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0x3765f8, 0x376618, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0x376618, 0x376638, indexSVCSprites_ChunLi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_KICK_PALETTES[] =
{
    { L"Chun-Li", 0x376738, 0x376758, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 1", 0x376758, 0x376778, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 2", 0x376778, 0x376798, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0x376798, 0x3767b8, indexSVCSprites_ChunLi },
    { L"Makai Spell", 0x3767b8, 0x3767d8, indexSVCSprites_ChunLi, 4 },
    { L"Heaven Spell", 0x3767d8, 0x3767f8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0x3767f8, 0x376818, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0x376818, 0x376838, indexSVCSprites_ChunLi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_PUNCH_HELL_PALETTES[] =
{
    { L"Chun-Li", 0X377138, 0X377158, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 1", 0X377158, 0X377178, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 2", 0X377178, 0X377198, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0X377198, 0X3771B8, indexSVCSprites_ChunLi },
    { L"Makai Spell", 0X3771B8, 0X3771D8, indexSVCSprites_ChunLi, 4 },
    { L"Heaven Spell", 0X3771D8, 0X3771F8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0X3771F8, 0X377218, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0X377218, 0X377238, indexSVCSprites_ChunLi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_KICK_HELL_PALETTES[] =
{
    { L"Chun-Li", 0X377338, 0X377358, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 1", 0X377358, 0X377378, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 2", 0X377378, 0X377398, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0X377398, 0X3773B8, indexSVCSprites_ChunLi },
    { L"Makai Spell", 0X3773B8, 0X3773D8, indexSVCSprites_ChunLi, 4 },
    { L"Heaven Spell", 0X3773D8, 0X3773F8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0X3773F8, 0X377418, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0X377418, 0X377438, indexSVCSprites_ChunLi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Chun-Li", 0X376D38, 0X376D58, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 1", 0X376D58, 0X376D78, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 2", 0X376D78, 0X376D98, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0X376D98, 0X376DB8, indexSVCSprites_ChunLi },
    { L"Makai Spell", 0X376DB8, 0X376DD8, indexSVCSprites_ChunLi, 4 },
    { L"Heaven Spell", 0X376DD8, 0X376DF8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0X376DF8, 0X376E18, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0X376E18, 0X376E38, indexSVCSprites_ChunLi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_KICK_HEAVEN_PALETTES[] =
{
    { L"Chun-Li", 0X376F38, 0X376F58, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 1", 0X376F58, 0X376F78, indexSVCSprites_ChunLi },
    //{ L"Unused: Fire Effect 2", 0X376F78, 0X376F98, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0X376F98, 0X376FB8, indexSVCSprites_ChunLi },
    { L"Makai Spell", 0X376FB8, 0X376FD8, indexSVCSprites_ChunLi, 4 },
    { L"Heaven Spell", 0X376FD8, 0X376FF8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0X376FF8, 0X377018, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0X377018, 0X377038, indexSVCSprites_ChunLi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x391538, 0x391558 },
    { L"Effect 1", 0x391558, 0x391578 },
    { L"Effect 2", 0x391578, 0x391598 },
    { L"Effect 3", 0x391598, 0x3915b8 },
    { L"Effect 4", 0x3915b8, 0x3915d8 },
    { L"Effect 5", 0x3915d8, 0x3915f8 },
    { L"Effect 6", 0x3915f8, 0x391618 },
    { L"Effect 7", 0x391618, 0x391638 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Chun-Li Punch", 0x3aa238, 0x3aa278, indexSVCSprites_ChunLi, 0x21 },
    { L"Chun-Li Kick", 0x3aa278, 0x3aa2b8, indexSVCSprites_ChunLi, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Chun-Li Punch", 0x3a8238, 0x3a8278, indexSVCSprites_ChunLi, 0x20 },
    { L"Chun-Li Kick", 0x3a8278, 0x3a82b8, indexSVCSprites_ChunLi, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_PUNCH_PALETTES[] =
{
    { L"Guile", 0x377538, 0x377558, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 1", 0x377558, 0x377578, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 2", 0x377578, 0x377598, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0x377598, 0x3775b8, indexSVCSprites_Guile },
    { L"Makai Spell", 0x3775b8, 0x3775d8, indexSVCSprites_Guile, 4 },
    { L"Heaven Spell", 0x3775d8, 0x3775f8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0x3775f8, 0x377618, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0x377618, 0x377638, indexSVCSprites_Guile, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_KICK_PALETTES[] =
{
    { L"Guile", 0x377738, 0x377758, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 1", 0x377758, 0x377778, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 2", 0x377778, 0x377798, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0x377798, 0x3777b8, indexSVCSprites_Guile },
    { L"Makai Spell", 0x3777b8, 0x3777d8, indexSVCSprites_Guile, 4 },
    { L"Heaven Spell", 0x3777d8, 0x3777f8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0x3777f8, 0x377818, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0x377818, 0x377838, indexSVCSprites_Guile, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_PUNCH_HELL_PALETTES[] =
{
    { L"Guile", 0X378138, 0X378158, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 1", 0X378158, 0X378178, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 2", 0X378178, 0X378198, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0X378198, 0X3781B8, indexSVCSprites_Guile },
    { L"Makai Spell", 0X3781B8, 0X3781D8, indexSVCSprites_Guile, 4 },
    { L"Heaven Spell", 0X3781D8, 0X3781F8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0X3781F8, 0X378218, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0X378218, 0X378238, indexSVCSprites_Guile, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_KICK_HELL_PALETTES[] =
{
    { L"Guile", 0X378338, 0X378358, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 1", 0X378358, 0X378378, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 2", 0X378378, 0X378398, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0X378398, 0X3783B8, indexSVCSprites_Guile },
    { L"Makai Spell", 0X3783B8, 0X3783D8, indexSVCSprites_Guile, 4 },
    { L"Heaven Spell", 0X3783D8, 0X3783F8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0X3783F8, 0X378418, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0X378418, 0X378438, indexSVCSprites_Guile, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Guile", 0X377D38, 0X377D58, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 1", 0X377D58, 0X377D78, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 2", 0X377D78, 0X377D98, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0X377D98, 0X377DB8, indexSVCSprites_Guile },
    { L"Makai Spell", 0X377DB8, 0X377DD8, indexSVCSprites_Guile, 4 },
    { L"Heaven Spell", 0X377DD8, 0X377DF8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0X377DF8, 0X377E18, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0X377E18, 0X377E38, indexSVCSprites_Guile, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_KICK_HEAVEN_PALETTES[] =
{
    { L"Guile", 0X377F38, 0X377F58, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 1", 0X377F58, 0X377F78, indexSVCSprites_Guile },
    //{ L"Unused: Fire Effect 2", 0X377F78, 0X377F98, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0X377F98, 0X377FB8, indexSVCSprites_Guile },
    { L"Makai Spell", 0X377FB8, 0X377FD8, indexSVCSprites_Guile, 4 },
    { L"Heaven Spell", 0X377FD8, 0X377FF8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0X377FF8, 0X378018, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0X378018, 0X378038, indexSVCSprites_Guile, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x391d38, 0x391d58 },
    { L"Effect 1", 0x391d58, 0x391d78 },
    { L"Effect 2", 0x391d78, 0x391d98 },
    { L"Effect 3", 0x391d98, 0x391db8 },
    { L"Effect 4", 0x391db8, 0x391dd8 },
    { L"Effect 5", 0x391dd8, 0x391df8 },
    { L"Effect 6", 0x391df8, 0x391e18 },
    { L"Effect 7", 0x391e18, 0x391e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES[] =
{
    { L"Guile Punch", 0x3aa2b8, 0x3aa2f8, indexSVCSprites_Guile, 0x21 },
    { L"Guile Kick", 0x3aa2f8, 0x3aa338, indexSVCSprites_Guile, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Guile Punch", 0x3a82b8, 0x3a82f8, indexSVCSprites_Guile, 0x20 },
    { L"Guile Kick", 0x3a82f8, 0x3a8338, indexSVCSprites_Guile, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_PUNCH_PALETTES[] =
{
    { L"Dhalsim", 0x378538, 0x378558, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 1", 0x378558, 0x378578, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 2", 0x378578, 0x378598, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0x378598, 0x3785b8, indexSVCSprites_Dhalsim },
    { L"Makai Spell", 0x3785b8, 0x3785d8, indexSVCSprites_Dhalsim, 4 },
    { L"Heaven Spell", 0x3785d8, 0x3785f8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0x3785f8, 0x378618, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0x378618, 0x378638, indexSVCSprites_Dhalsim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_KICK_PALETTES[] =
{
    { L"Dhalsim", 0x378738, 0x378758, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 1", 0x378758, 0x378778, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 2", 0x378778, 0x378798, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0x378798, 0x3787b8, indexSVCSprites_Dhalsim },
    { L"Makai Spell", 0x3787b8, 0x3787d8, indexSVCSprites_Dhalsim, 4 },
    { L"Heaven Spell", 0x3787d8, 0x3787f8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0x3787f8, 0x378818, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0x378818, 0x378838, indexSVCSprites_Dhalsim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_PUNCH_HELL_PALETTES[] =
{
    { L"Dhalsim", 0X379138, 0X379158, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 1", 0X379158, 0X379178, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 2", 0X379178, 0X379198, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0X379198, 0X3791B8, indexSVCSprites_Dhalsim },
    { L"Makai Spell", 0X3791B8, 0X3791D8, indexSVCSprites_Dhalsim, 4 },
    { L"Heaven Spell", 0X3791D8, 0X3791F8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0X3791F8, 0X379218, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0X379218, 0X379238, indexSVCSprites_Dhalsim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_KICK_HELL_PALETTES[] =
{
    { L"Dhalsim", 0X379338, 0X379358, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 1", 0X379358, 0X379378, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 2", 0X379378, 0X379398, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0X379398, 0X3793B8, indexSVCSprites_Dhalsim },
    { L"Makai Spell", 0X3793B8, 0X3793D8, indexSVCSprites_Dhalsim, 4 },
    { L"Heaven Spell", 0X3793D8, 0X3793F8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0X3793F8, 0X379418, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0X379418, 0X379438, indexSVCSprites_Dhalsim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Dhalsim", 0X378D38, 0X378D58, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 1", 0X378D58, 0X378D78, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 2", 0X378D78, 0X378D98, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0X378D98, 0X378DB8, indexSVCSprites_Dhalsim },
    { L"Makai Spell", 0X378DB8, 0X378DD8, indexSVCSprites_Dhalsim, 4 },
    { L"Heaven Spell", 0X378DD8, 0X378DF8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0X378DF8, 0X378E18, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0X378E18, 0X378E38, indexSVCSprites_Dhalsim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_KICK_HEAVEN_PALETTES[] =
{
    { L"Dhalsim", 0X378F38, 0X378F58, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 1", 0X378F58, 0X378F78, indexSVCSprites_Dhalsim },
    //{ L"Unused: Fire Effect 2", 0X378F78, 0X378F98, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0X378F98, 0X378FB8, indexSVCSprites_Dhalsim },
    { L"Makai Spell", 0X378FB8, 0X378FD8, indexSVCSprites_Dhalsim, 4 },
    { L"Heaven Spell", 0X378FD8, 0X378FF8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0X378FF8, 0X379018, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0X379018, 0X379038, indexSVCSprites_Dhalsim, 7 },
};


const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392538, 0x392558 },
    { L"Effect 1", 0x392558, 0x392578 },
    { L"Effect 2", 0x392578, 0x392598 },
    { L"Effect 3", 0x392598, 0x3925b8 },
    { L"Effect 4", 0x3925b8, 0x3925d8 },
    { L"Effect 5", 0x3925d8, 0x3925f8 },
    { L"Effect 6", 0x3925f8, 0x392618 },
    { L"Effect 7", 0x392618, 0x392638 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES[] =
{
    { L"Dhalsim Punch", 0x3aa338, 0x3aa378, indexSVCSprites_Dhalsim, 0x21 },
    { L"Dhalsim Kick", 0x3aa378, 0x3aa3b8, indexSVCSprites_Dhalsim, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Dhalsim Punch", 0x3a8338, 0x3a8378, indexSVCSprites_Dhalsim, 0x20 },
    { L"Dhalsim Kick", 0x3a8378, 0x3a83b8, indexSVCSprites_Dhalsim, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_PUNCH_PALETTES[] =
{
    { L"Boxer", 0x379538, 0x379558, indexSVCSprites_Boxer },
    { L"Fire Effect 1", 0x379558, 0x379578, indexSVCSprites_Boxer },
    //{ L"Unused: Fire Effect 2", 0x379578, 0x379598, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0x379598, 0x3795b8, indexSVCSprites_Boxer },
    { L"Makai Spell", 0x3795b8, 0x3795d8, indexSVCSprites_Boxer, 4 },
    { L"Heaven Spell", 0x3795d8, 0x3795f8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0x3795f8, 0x379618, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0x379618, 0x379638, indexSVCSprites_Boxer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_KICK_PALETTES[] =
{
    { L"Boxer", 0x379738, 0x379758, indexSVCSprites_Boxer },
    { L"Fire Effect 1", 0x379758, 0x379778, indexSVCSprites_Boxer },
    //{ L"Unused: Fire Effect 2", 0x379778, 0x379798, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0x379798, 0x3797b8, indexSVCSprites_Boxer },
    { L"Makai Spell", 0x3797b8, 0x3797d8, indexSVCSprites_Boxer, 4 },
    { L"Heaven Spell", 0x3797d8, 0x3797f8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0x3797f8, 0x379818, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0x379818, 0x379838, indexSVCSprites_Boxer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_PUNCH_HELL_PALETTES[] =
{
    { L"Boxer", 0X37A138, 0X37A158, indexSVCSprites_Boxer },
    { L"Fire Effect 1", 0X37A158, 0X37A178, indexSVCSprites_Boxer },
    //{ L"Unused: Fire Effect 2", 0X37A178, 0X37A198, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0X37A198, 0X37A1B8, indexSVCSprites_Boxer },
    { L"Makai Spell", 0X37A1B8, 0X37A1D8, indexSVCSprites_Boxer, 4 },
    { L"Heaven Spell", 0X37A1D8, 0X37A1F8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0X37A1F8, 0X37A218, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0X37A218, 0X37A238, indexSVCSprites_Boxer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_KICK_HELL_PALETTES[] =
{
    { L"Boxer", 0X37A338, 0X37A358, indexSVCSprites_Boxer },
    { L"Fire Effect 1", 0X37A358, 0X37A378, indexSVCSprites_Boxer },
    //{ L"Unused: Fire Effect 2", 0X37A378, 0X37A398, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0X37A398, 0X37A3B8, indexSVCSprites_Boxer },
    { L"Makai Spell", 0X37A3B8, 0X37A3D8, indexSVCSprites_Boxer, 4 },
    { L"Heaven Spell", 0X37A3D8, 0X37A3F8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0X37A3F8, 0X37A418, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0X37A418, 0X37A438, indexSVCSprites_Boxer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Boxer", 0X379D38, 0X379D58, indexSVCSprites_Boxer },
    { L"Fire Effect 1", 0X379D58, 0X379D78, indexSVCSprites_Boxer },
    //{ L"Unused: Fire Effect 2", 0X379D78, 0X379D98, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0X379D98, 0X379DB8, indexSVCSprites_Boxer },
    { L"Makai Spell", 0X379DB8, 0X379DD8, indexSVCSprites_Boxer, 4 },
    { L"Heaven Spell", 0X379DD8, 0X379DF8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0X379DF8, 0X379E18, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0X379E18, 0X379E38, indexSVCSprites_Boxer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_KICK_HEAVEN_PALETTES[] =
{
    { L"Boxer", 0X379F38, 0X379F58, indexSVCSprites_Boxer },
    { L"Fire Effect 1", 0X379F58, 0X379F78, indexSVCSprites_Boxer },
    //{ L"Unused: Fire Effect 2", 0X379F78, 0X379F98, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0X379F98, 0X379FB8, indexSVCSprites_Boxer },
    { L"Makai Spell", 0X379FB8, 0X379FD8, indexSVCSprites_Boxer, 4 },
    { L"Heaven Spell", 0X379FD8, 0X379FF8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0X379FF8, 0X37A018, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0X37A018, 0X37A038, indexSVCSprites_Boxer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392d38, 0x392d58 },
    { L"Effect 1", 0x392d58, 0x392d78 },
    { L"Effect 2", 0x392d78, 0x392d98 },
    { L"Effect 3", 0x392d98, 0x392db8 },
    { L"Effect 4", 0x392db8, 0x392dd8 },
    { L"Effect 5", 0x392dd8, 0x392df8 },
    { L"Effect 6", 0x392df8, 0x392e18 },
    { L"Effect 7", 0x392e18, 0x392e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES[] =
{
    { L"Boxer Punch", 0x3aa3b8, 0x3aa3f8, indexSVCSprites_Boxer, 0x21 },
    { L"Boxer Kick", 0x3aa3f8, 0x3aa438, indexSVCSprites_Boxer, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Boxer Punch", 0x3a83b8, 0x3a83f8, indexSVCSprites_Boxer, 0x20 },
    { L"Boxer Kick", 0x3a83f8, 0x3a8438, indexSVCSprites_Boxer, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_PUNCH_PALETTES[] =
{
    { L"Claw", 0x37a538, 0x37a558, indexSVCSprites_Claw },
    { L"Fire Effect 1", 0x37a558, 0x37a578, indexSVCSprites_Claw },
    //{ L"Unused: Fire Effect 2", 0x37a578, 0x37a598, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0x37a598, 0x37a5b8, indexSVCSprites_Claw },
    { L"Makai Spell", 0x37a5b8, 0x37a5d8, indexSVCSprites_Claw, 4 },
    { L"Heaven Spell", 0x37a5d8, 0x37a5f8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0x37a5f8, 0x37a618, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0x37a618, 0x37a638, indexSVCSprites_Claw, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_KICK_PALETTES[] =
{
    { L"Claw", 0x37a738, 0x37a758, indexSVCSprites_Claw },
    { L"Fire Effect 1", 0x37a758, 0x37a778, indexSVCSprites_Claw },
    //{ L"Unused: Fire Effect 2", 0x37a778, 0x37a798, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0x37a798, 0x37a7b8, indexSVCSprites_Claw },
    { L"Makai Spell", 0x37a7b8, 0x37a7d8, indexSVCSprites_Claw, 4 },
    { L"Heaven Spell", 0x37a7d8, 0x37a7f8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0x37a7f8, 0x37a818, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0x37a818, 0x37a838, indexSVCSprites_Claw, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_PUNCH_HELL_PALETTES[] =
{
    { L"Claw", 0X37B138, 0X37B158, indexSVCSprites_Claw },
    { L"Fire Effect 1", 0X37B158, 0X37B178, indexSVCSprites_Claw },
    //{ L"Unused: Fire Effect 2", 0X37B178, 0X37B198, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0X37B198, 0X37B1B8, indexSVCSprites_Claw },
    { L"Makai Spell", 0X37B1B8, 0X37B1D8, indexSVCSprites_Claw, 4 },
    { L"Heaven Spell", 0X37B1D8, 0X37B1F8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0X37B1F8, 0X37B218, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0X37B218, 0X37B238, indexSVCSprites_Claw, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_KICK_HELL_PALETTES[] =
{
    { L"Claw", 0X37B338, 0X37B358, indexSVCSprites_Claw },
    { L"Fire Effect 1", 0X37B358, 0X37B378, indexSVCSprites_Claw },
    //{ L"Unused: Fire Effect 2", 0X37B378, 0X37B398, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0X37B398, 0X37B3B8, indexSVCSprites_Claw },
    { L"Makai Spell", 0X37B3B8, 0X37B3D8, indexSVCSprites_Claw, 4 },
    { L"Heaven Spell", 0X37B3D8, 0X37B3F8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0X37B3F8, 0X37B418, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0X37B418, 0X37B438, indexSVCSprites_Claw, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Claw", 0X37AD38, 0X37AD58, indexSVCSprites_Claw },
    { L"Fire Effect 1", 0X37AD58, 0X37AD78, indexSVCSprites_Claw },
    //{ L"Unused: Fire Effect 2", 0X37AD78, 0X37AD98, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0X37AD98, 0X37ADB8, indexSVCSprites_Claw },
    { L"Makai Spell", 0X37ADB8, 0X37ADD8, indexSVCSprites_Claw, 4 },
    { L"Heaven Spell", 0X37ADD8, 0X37ADF8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0X37ADF8, 0X37AE18, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0X37AE18, 0X37AE38, indexSVCSprites_Claw, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_KICK_HEAVEN_PALETTES[] =
{
    { L"Claw", 0X37AF38, 0X37AF58, indexSVCSprites_Claw },
    { L"Fire Effect 1", 0X37AF58, 0X37AF78, indexSVCSprites_Claw },
    //{ L"Unused: Fire Effect 2", 0X37AF78, 0X37AF98, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0X37AF98, 0X37AFB8, indexSVCSprites_Claw },
    { L"Makai Spell", 0X37AFB8, 0X37AFD8, indexSVCSprites_Claw, 4 },
    { L"Heaven Spell", 0X37AFD8, 0X37AFF8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0X37AFF8, 0X37B018, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0X37B018, 0X37B038, indexSVCSprites_Claw, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x393538, 0x393558 },
    { L"Effect 1", 0x393558, 0x393578 },
    { L"Effect 2", 0x393578, 0x393598 },
    { L"Effect 3", 0x393598, 0x3935b8 },
    { L"Effect 4", 0x3935b8, 0x3935d8 },
    { L"Effect 5", 0x3935d8, 0x3935f8 },
    { L"Effect 6", 0x3935f8, 0x393618 },
    { L"Effect 7", 0x393618, 0x393638 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES[] =
{
    { L"Claw Punch", 0x3aa438, 0x3aa478, indexSVCSprites_Claw, 0x21 },
    { L"Claw Kick", 0x3aa478, 0x3aa4b8, indexSVCSprites_Claw, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Claw Punch", 0x3a8438, 0x3a8478, indexSVCSprites_Claw, 0x20 },
    { L"Claw Kick", 0x3a8478, 0x3a84b8, indexSVCSprites_Claw, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_PUNCH_PALETTES[] =
{
    { L"Sagat", 0x37b538, 0x37b558, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 1", 0x37b558, 0x37b578, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 2", 0x37b578, 0x37b598, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0x37b598, 0x37b5b8, indexSVCSprites_Sagat },
    { L"Makai Spell", 0x37b5b8, 0x37b5d8, indexSVCSprites_Sagat, 4 },
    { L"Heaven Spell", 0x37b5d8, 0x37b5f8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0x37b5f8, 0x37b618, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0x37b618, 0x37b638, indexSVCSprites_Sagat, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_KICK_PALETTES[] =
{
    { L"Sagat", 0x37b738, 0x37b758, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 1", 0x37b758, 0x37b778, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 2", 0x37b778, 0x37b798, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0x37b798, 0x37b7b8, indexSVCSprites_Sagat },
    { L"Makai Spell", 0x37b7b8, 0x37b7d8, indexSVCSprites_Sagat, 4 },
    { L"Heaven Spell", 0x37b7d8, 0x37b7f8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0x37b7f8, 0x37b818, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0x37b818, 0x37b838, indexSVCSprites_Sagat, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_PUNCH_HELL_PALETTES[] =
{
    { L"Sagat", 0X37C138, 0X37C158, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 1", 0X37C158, 0X37C178, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 2", 0X37C178, 0X37C198, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0X37C198, 0X37C1B8, indexSVCSprites_Sagat },
    { L"Makai Spell", 0X37C1B8, 0X37C1D8, indexSVCSprites_Sagat, 4 },
    { L"Heaven Spell", 0X37C1D8, 0X37C1F8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0X37C1F8, 0X37C218, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0X37C218, 0X37C238, indexSVCSprites_Sagat, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_KICK_HELL_PALETTES[] =
{
    { L"Sagat", 0X37C338, 0X37C358, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 1", 0X37C358, 0X37C378, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 2", 0X37C378, 0X37C398, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0X37C398, 0X37C3B8, indexSVCSprites_Sagat },
    { L"Makai Spell", 0X37C3B8, 0X37C3D8, indexSVCSprites_Sagat, 4 },
    { L"Heaven Spell", 0X37C3D8, 0X37C3F8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0X37C3F8, 0X37C418, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0X37C418, 0X37C438, indexSVCSprites_Sagat, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Sagat", 0X37BD38, 0X37BD58, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 1", 0X37BD58, 0X37BD78, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 2", 0X37BD78, 0X37BD98, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0X37BD98, 0X37BDB8, indexSVCSprites_Sagat },
    { L"Makai Spell", 0X37BDB8, 0X37BDD8, indexSVCSprites_Sagat, 4 },
    { L"Heaven Spell", 0X37BDD8, 0X37BDF8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0X37BDF8, 0X37BE18, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0X37BE18, 0X37BE38, indexSVCSprites_Sagat, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_KICK_HEAVEN_PALETTES[] =
{
    { L"Sagat", 0X37BF38, 0X37BF58, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 1", 0X37BF58, 0X37BF78, indexSVCSprites_Sagat },
    //{ L"Unused: Fire Effect 2", 0X37BF78, 0X37BF98, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0X37BF98, 0X37BFB8, indexSVCSprites_Sagat },
    { L"Makai Spell", 0X37BFB8, 0X37BFD8, indexSVCSprites_Sagat, 4 },
    { L"Heaven Spell", 0X37BFD8, 0X37BFF8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0X37BFF8, 0X37C018, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0X37C018, 0X37C038, indexSVCSprites_Sagat, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x393d38, 0x393d58 },
    { L"Effect 1", 0x393d58, 0x393d78 },
    { L"Effect 2", 0x393d78, 0x393d98 },
    { L"Effect 3", 0x393d98, 0x393db8 },
    { L"Effect 4", 0x393db8, 0x393dd8 },
    { L"Effect 5", 0x393dd8, 0x393df8 },
    { L"Effect 6", 0x393df8, 0x393e18 },
    { L"Effect 7", 0x393e18, 0x393e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES[] =
{
    { L"Sagat Punch", 0x3aa4b8, 0x3aa4f8, indexSVCSprites_Sagat, 0x21 },
    { L"Sagat Kick", 0x3aa4f8, 0x3aa538, indexSVCSprites_Sagat, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Sagat Punch", 0x3a84b8, 0x3a84f8, indexSVCSprites_Sagat, 0x20 },
    { L"Sagat Kick", 0x3a84f8, 0x3a8538, indexSVCSprites_Sagat, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_PUNCH_PALETTES[] =
{
    { L"Dictator", 0x37c538, 0x37c558, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 1", 0x37c558, 0x37c578, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 2", 0x37c578, 0x37c598, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0x37c598, 0x37c5b8, indexSVCSprites_Dictator },
    { L"Makai Spell", 0x37c5b8, 0x37c5d8, indexSVCSprites_Dictator, 4 },
    { L"Heaven Spell", 0x37c5d8, 0x37c5f8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0x37c5f8, 0x37c618, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0x37c618, 0x37c638, indexSVCSprites_Dictator, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_KICK_PALETTES[] =
{
    { L"Dictator", 0x37c738, 0x37c758, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 1", 0x37c758, 0x37c778, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 2", 0x37c778, 0x37c798, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0x37c798, 0x37c7b8, indexSVCSprites_Dictator },
    { L"Makai Spell", 0x37c7b8, 0x37c7d8, indexSVCSprites_Dictator, 4 },
    { L"Heaven Spell", 0x37c7d8, 0x37c7f8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0x37c7f8, 0x37c818, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0x37c818, 0x37c838, indexSVCSprites_Dictator, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_PUNCH_HELL_PALETTES[] =
{
    { L"Dictator", 0X37D138, 0X37D158, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 1", 0X37D158, 0X37D178, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 2", 0X37D178, 0X37D198, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0X37D198, 0X37D1B8, indexSVCSprites_Dictator },
    { L"Makai Spell", 0X37D1B8, 0X37D1D8, indexSVCSprites_Dictator, 4 },
    { L"Heaven Spell", 0X37D1D8, 0X37D1F8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0X37D1F8, 0X37D218, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0X37D218, 0X37D238, indexSVCSprites_Dictator, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_KICK_HELL_PALETTES[] =
{
    { L"Dictator", 0X37D338, 0X37D358, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 1", 0X37D358, 0X37D378, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 2", 0X37D378, 0X37D398, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0X37D398, 0X37D3B8, indexSVCSprites_Dictator },
    { L"Makai Spell", 0X37D3B8, 0X37D3D8, indexSVCSprites_Dictator, 4 },
    { L"Heaven Spell", 0X37D3D8, 0X37D3F8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0X37D3F8, 0X37D418, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0X37D418, 0X37D438, indexSVCSprites_Dictator, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Dictator", 0X37CD38, 0X37CD58, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 1", 0X37CD58, 0X37CD78, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 2", 0X37CD78, 0X37CD98, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0X37CD98, 0X37CDB8, indexSVCSprites_Dictator },
    { L"Makai Spell", 0X37CDB8, 0X37CDD8, indexSVCSprites_Dictator, 4 },
    { L"Heaven Spell", 0X37CDD8, 0X37CDF8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0X37CDF8, 0X37CE18, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0X37CE18, 0X37CE38, indexSVCSprites_Dictator, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_KICK_HEAVEN_PALETTES[] =
{
    { L"Dictator", 0X37CF38, 0X37CF58, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 1", 0X37CF58, 0X37CF78, indexSVCSprites_Dictator },
    //{ L"Unused: Fire Effect 2", 0X37CF78, 0X37CF98, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0X37CF98, 0X37CFB8, indexSVCSprites_Dictator },
    { L"Makai Spell", 0X37CFB8, 0X37CFD8, indexSVCSprites_Dictator, 4 },
    { L"Heaven Spell", 0X37CFD8, 0X37CFF8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0X37CFF8, 0X37D018, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0X37D018, 0X37D038, indexSVCSprites_Dictator, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394538, 0x394558 },
    { L"Effect 1", 0x394558, 0x394578 },
    { L"Effect 2", 0x394578, 0x394598 },
    { L"Effect 3", 0x394598, 0x3945b8 },
    { L"Effect 4", 0x3945b8, 0x3945d8 },
    { L"Effect 5", 0x3945d8, 0x3945f8 },
    { L"Effect 6", 0x3945f8, 0x394618 },
    { L"Effect 7", 0x394618, 0x394638 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES[] =
{
    { L"Dictator Punch", 0x3aa538, 0x3aa578, indexSVCSprites_Dictator, 0x21 },
    { L"Dictator Kick", 0x3aa578, 0x3aa5b8, indexSVCSprites_Dictator, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Dictator Punch", 0x3a8538, 0x3a8578, indexSVCSprites_Dictator, 0x20 },
    { L"Dictator Kick", 0x3a8578, 0x3a85b8, indexSVCSprites_Dictator, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_PUNCH_PALETTES[] =
{
    { L"Akuma", 0x37d538, 0x37d558, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0x37d558, 0x37d578 },
    //{ L"Unused: Fire Effect 2", 0x37d578, 0x37d598 },
    { L"Electric Shock Effect", 0x37d598, 0x37d5b8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0x37d5b8, 0x37d5d8, indexSVCSprites_Akuma, 4 },
    { L"Heaven Spell", 0x37d5d8, 0x37d5f8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0x37d5f8, 0x37d618, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x37d618, 0x37d638, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_KICK_PALETTES[] =
{
    { L"Akuma", 0x37d738, 0x37d758, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0x37d758, 0x37d778 },
    //{ L"Unused: Fire Effect 2", 0x37d778, 0x37d798 },
    { L"Electric Shock Effect", 0x37d798, 0x37d7b8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0x37d7b8, 0x37d7d8, indexSVCSprites_Akuma, 4 },
    { L"Heaven Spell", 0x37d7d8, 0x37d7f8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0x37d7f8, 0x37d818, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x37d818, 0x37d838, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_PUNCH_HELL_PALETTES[] =
{
    { L"Akuma", 0X37E138, 0X37E158, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X37E158, 0X37E178 },
    //{ L"Unused: Fire Effect 2", 0X37E178, 0X37E198 },
    { L"Electric Shock Effect", 0X37E198, 0X37E1B8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X37E1B8, 0X37E1D8, indexSVCSprites_Akuma, 4 },
    { L"Heaven Spell", 0X37E1D8, 0X37E1F8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0X37E1F8, 0X37E218, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X37E218, 0X37E238, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_KICK_HELL_PALETTES[] =
{
    { L"Akuma", 0X37E338, 0X37E358, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X37E358, 0X37E378 },
    //{ L"Unused: Fire Effect 2", 0X37E378, 0X37E398 },
    { L"Electric Shock Effect", 0X37E398, 0X37E3B8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X37E3B8, 0X37E3D8, indexSVCSprites_Akuma, 4 },
    { L"Heaven Spell", 0X37E3D8, 0X37E3F8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0X37E3F8, 0X37E418, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X37E418, 0X37E438, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Akuma", 0X37DD38, 0X37DD58, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X37DD58, 0X37DD78 },
    //{ L"Unused: Fire Effect 2", 0X37DD78, 0X37DD98 },
    { L"Electric Shock Effect", 0X37DD98, 0X37DDB8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X37DDB8, 0X37DDD8, indexSVCSprites_Akuma, 4 },
    { L"Heaven Spell", 0X37DDD8, 0X37DDF8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0X37DDF8, 0X37DE18, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X37DE18, 0X37DE38, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_KICK_HEAVEN_PALETTES[] =
{
    { L"Akuma", 0X37DF38, 0X37DF58, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X37DF58, 0X37DF78 },
    //{ L"Unused: Fire Effect 2", 0X37DF78, 0X37DF98 },
    { L"Electric Shock Effect", 0X37DF98, 0X37DFB8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X37DFB8, 0X37DFD8, indexSVCSprites_Akuma, 4 },
    { L"Heaven Spell", 0X37DFD8, 0X37DFF8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0X37DFF8, 0X37E018, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X37E018, 0X37E038, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394d38, 0x394d58, indexSVCSprites_Akuma, 0x08 },
    { L"Effect 1", 0x394d58, 0x394d78, indexSVCSprites_Akuma, 0x09 },
    { L"Effect 2", 0x394d78, 0x394d98, indexSVCSprites_Akuma, 0x0a },
    { L"Effect 3", 0x394d98, 0x394db8 },
    { L"Effect 4", 0x394db8, 0x394dd8 },
    { L"Effect 5", 0x394dd8, 0x394df8 },
    { L"Effect 6", 0x394df8, 0x394e18 },
    { L"Effect 7", 0x394e18, 0x394e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES[] =
{
    { L"Akuma Punch", 0x3aa5b8, 0x3aa5f8, indexSVCSprites_Akuma, 0x21 },
    { L"Akuma Kick", 0x3aa5f8, 0x3aa638, indexSVCSprites_Akuma, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Akuma Punch", 0x3a85b8, 0x3a85f8, indexSVCSprites_Akuma, 0x20 },
    { L"Akuma Kick", 0x3a85f8, 0x3a8638, indexSVCSprites_Akuma, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_PUNCH_PALETTES[] =
{
    { L"Hugo", 0x37e538, 0x37e558, indexSVCSprites_Hugo },
    { L"Poison",  0x37e558, 0x37e578, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0x37e578, 0x37e598, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0x37e598, 0x37e5b8, indexSVCSprites_Hugo },
    { L"Makai Spell", 0x37e5b8, 0x37e5d8, indexSVCSprites_Hugo, 4 },
    { L"Heaven Spell", 0x37e5d8, 0x37e5f8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0x37e5f8, 0x37e618, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0x37e618, 0x37e638, indexSVCSprites_Hugo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_KICK_PALETTES[] =
{
    { L"Hugo", 0x37e738, 0x37e758, indexSVCSprites_Hugo },
    { L"Poison", 0x37e758, 0x37e778, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0x37e778, 0x37e798, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0x37e798, 0x37e7b8, indexSVCSprites_Hugo },
    { L"Makai Spell", 0x37e7b8, 0x37e7d8, indexSVCSprites_Hugo, 4 },
    { L"Heaven Spell", 0x37e7d8, 0x37e7f8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0x37e7f8, 0x37e818, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0x37e818, 0x37e838, indexSVCSprites_Hugo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_PUNCH_HELL_PALETTES[] =
{
    { L"Hugo", 0X37F138, 0X37F158, indexSVCSprites_Hugo },
    { L"Poison",  0X37F158, 0X37F178, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0X37F178, 0X37F198, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0X37F198, 0X37F1B8, indexSVCSprites_Hugo },
    { L"Makai Spell", 0X37F1B8, 0X37F1D8, indexSVCSprites_Hugo, 4 },
    { L"Heaven Spell", 0X37F1D8, 0X37F1F8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0X37F1F8, 0X37F218, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0X37F218, 0X37F238, indexSVCSprites_Hugo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_KICK_HELL_PALETTES[] =
{
    { L"Hugo", 0X37F338, 0X37F358, indexSVCSprites_Hugo },
    { L"Poison", 0X37F358, 0X37F378, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0X37F378, 0X37F398, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0X37F398, 0X37F3B8, indexSVCSprites_Hugo },
    { L"Makai Spell", 0X37F3B8, 0X37F3D8, indexSVCSprites_Hugo, 4 },
    { L"Heaven Spell", 0X37F3D8, 0X37F3F8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0X37F3F8, 0X37F418, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0X37F418, 0X37F438, indexSVCSprites_Hugo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Hugo", 0X37ED38, 0X37ED58, indexSVCSprites_Hugo },
    { L"Poison",  0X37ED58, 0X37ED78, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0X37ED78, 0X37ED98, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0X37ED98, 0X37EDB8, indexSVCSprites_Hugo },
    { L"Makai Spell", 0X37EDB8, 0X37EDD8, indexSVCSprites_Hugo, 4 },
    { L"Heaven Spell", 0X37EDD8, 0X37EDF8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0X37EDF8, 0X37EE18, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0X37EE18, 0X37EE38, indexSVCSprites_Hugo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_KICK_HEAVEN_PALETTES[] =
{
    { L"Hugo", 0X37EF38, 0X37EF58, indexSVCSprites_Hugo },
    { L"Poison", 0X37EF58, 0X37EF78, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0X37EF78, 0X37EF98, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0X37EF98, 0X37EFB8, indexSVCSprites_Hugo },
    { L"Makai Spell", 0X37EFB8, 0X37EFD8, indexSVCSprites_Hugo, 4 },
    { L"Heaven Spell", 0X37EFD8, 0X37EFF8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0X37EFF8, 0X37F018, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0X37F018, 0X37F038, indexSVCSprites_Hugo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395538, 0x395558 },
    { L"Effect 1", 0x395558, 0x395578 },
    { L"Effect 2", 0x395578, 0x395598 },
    { L"Effect 3", 0x395598, 0x3955b8 },
    { L"Effect 4", 0x3955b8, 0x3955d8 },
    { L"Effect 5", 0x3955d8, 0x3955f8 },
    { L"Effect 6", 0x3955f8, 0x395618 },
    { L"Effect 7", 0x395618, 0x395638 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES[] =
{
    { L"Hugo Punch", 0x3aa638, 0x3aa678, indexSVCSprites_Hugo, 0x21, &pairNext },
    { L"Poison Punch", 0x3aab38, 0x3aab78, indexSVCSprites_Poison, 0x21, &pairPrevious },
    { L"Hugo Kick", 0x3aa678, 0x3aa6b8, indexSVCSprites_Hugo, 0x21, &pairNext },
    { L"Poison Kick", 0x3aab78, 0x3aabb8, indexSVCSprites_Poison, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Hugo Punch", 0x3a8638, 0x3a8678, indexSVCSprites_Hugo, 0x20 },
    { L"Poison Punch", 0x3a8c38, 0x3a8c78, indexSVCSprites_Poison, 0x20 },
    { L"Hugo Kick", 0x3a8678, 0x3a86b8, indexSVCSprites_Hugo, 0x20 },
    { L"Poison Kick", 0x3a8c78, 0x3a8cb8, indexSVCSprites_Poison, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_PUNCH_PALETTES[] =
{
    { L"Tessa", 0x37f538, 0x37f558, indexSVCSprites_Tessa, 0x00, &pairNext },
    { L"Cat", 0x37f558, 0x37f578, indexSVCSprites_Tessa, 8 },
    { L"Midnight Bliss", 0x37f578, 0x37f598, indexSVCSprites_Tessa, 7 },
    { L"Electric Shock Effect", 0x37f598, 0x37f5b8, indexSVCSprites_Tessa },
    { L"Shield", 0x37f5b8, 0x37f5d8, indexSVCSprites_Tessa, 4 },
    { L"Grab A+B", 0x37f5d8, 0x37f5f8 },
    { L"Soul Palette", 0x37f5f8, 0x37f618, indexSVCSprites_Tessa },
    { L"Hearts", 0x37f618, 0x37f638, indexSVCSprites_Tessa, 2 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_KICK_PALETTES[] =
{
    { L"Tessa", 0x37f738, 0x37f758, indexSVCSprites_Tessa, 0x00, &pairNext },
    { L"Cat", 0x37f758, 0x37f778, indexSVCSprites_Tessa, 8 },
    { L"Midnight Bliss", 0x37f778, 0x37f798, indexSVCSprites_Tessa, 7 },
    { L"Electric Shock Effect", 0x37f798, 0x37f7b8, indexSVCSprites_Tessa },
    { L"Shield", 0x37f7b8, 0x37f7d8, indexSVCSprites_Tessa, 4 },
    { L"Grab A+B", 0x37f7d8, 0x37f7f8 },
    { L"Soul Palette", 0x37f7f8, 0x37f818, indexSVCSprites_Tessa },
    { L"Hearts", 0x37f818, 0x37f838, indexSVCSprites_Tessa, 2 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_PUNCH_HELL_PALETTES[] =
{
    { L"Tessa", 0X380138, 0X380158, indexSVCSprites_Tessa, 0x00, &pairNext },
    { L"Cat", 0X380158, 0X380178, indexSVCSprites_Tessa, 8 },
    { L"Midnight Bliss", 0X380178, 0X380198, indexSVCSprites_Tessa, 7 },
    { L"Electric Shock Effect", 0X380198, 0X3801B8, indexSVCSprites_Tessa },
    { L"Shield", 0X3801B8, 0X3801D8, indexSVCSprites_Tessa, 4 },
    { L"Grab A+B", 0X3801D8, 0X3801F8 },
    { L"Soul Palette", 0X3801F8, 0X380218, indexSVCSprites_Tessa },
    { L"Hearts", 0X380218, 0X380238, indexSVCSprites_Tessa, 2 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_KICK_HELL_PALETTES[] =
{
    { L"Tessa", 0X380338, 0X380358, indexSVCSprites_Tessa, 0x00, &pairNext },
    { L"Cat", 0X380358, 0X380378, indexSVCSprites_Tessa, 8 },
    { L"Midnight Bliss", 0X380378, 0X380398, indexSVCSprites_Tessa, 7 },
    { L"Electric Shock Effect", 0X380398, 0X3803B8, indexSVCSprites_Tessa },
    { L"Shield", 0X3803B8, 0X3803D8, indexSVCSprites_Tessa, 4 },
    { L"Grab A+B", 0X3803D8, 0X3803F8 },
    { L"Soul Palette", 0X3803F8, 0X380418, indexSVCSprites_Tessa },
    { L"Hearts", 0X380418, 0X380438, indexSVCSprites_Tessa, 2 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Tessa", 0X37FD38, 0X37FD58, indexSVCSprites_Tessa, 0x00, &pairNext },
    { L"Cat", 0X37FD58, 0X37FD78, indexSVCSprites_Tessa, 8 },
    { L"Midnight Bliss", 0X37FD78, 0X37FD98, indexSVCSprites_Tessa, 7 },
    { L"Electric Shock Effect", 0X37FD98, 0X37FDB8, indexSVCSprites_Tessa },
    { L"Shield", 0X37FDB8, 0X37FDD8, indexSVCSprites_Tessa, 4 },
    { L"Grab A+B", 0X37FDD8, 0X37FDF8 },
    { L"Soul Palette", 0X37FDF8, 0X37FE18, indexSVCSprites_Tessa },
    { L"Hearts", 0X37FE18, 0X37FE38, indexSVCSprites_Tessa, 2 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_KICK_HEAVEN_PALETTES[] =
{
    { L"Tessa", 0X37FF38, 0X37FF58, indexSVCSprites_Tessa, 0x00, &pairNext },
    { L"Cat", 0X37FF58, 0X37FF78, indexSVCSprites_Tessa, 8 },
    { L"Midnight Bliss", 0X37FF78, 0X37FF98, indexSVCSprites_Tessa, 7 },
    { L"Electric Shock Effect", 0X37FF98, 0X37FFB8, indexSVCSprites_Tessa },
    { L"Shield", 0X37FFB8, 0X37FFD8, indexSVCSprites_Tessa, 4 },
    { L"Grab A+B", 0X37FFD8, 0X37FFF8 },
    { L"Soul Palette", 0X37FFF8, 0X380018, indexSVCSprites_Tessa },
    { L"Hearts", 0X380018, 0X380038, indexSVCSprites_Tessa, 2 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395d38, 0x395d58 },
    { L"Effect 1", 0x395d58, 0x395d78 },
    { L"Effect 2", 0x395d78, 0x395d98 },
    { L"Effect 3", 0x395d98, 0x395db8 },
    { L"Effect 4", 0x395db8, 0x395dd8 },
    { L"Effect 5", 0x395dd8, 0x395df8 },
    { L"Effect 6", 0x395df8, 0x395e18 },
    { L"Effect 7", 0x395e18, 0x395e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES[] =
{
    { L"Tessa Punch", 0x3aa6b8, 0x3aa6f8, indexSVCSprites_Tessa, 0x21 },
    { L"Tessa Kick", 0x3aa6f8, 0x3aa738, indexSVCSprites_Tessa, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Tessa Punch", 0x3a86b8, 0x3a86f8, indexSVCSprites_Tessa, 0x20 },
    { L"Tessa Kick", 0x3a86f8, 0x3a8738, indexSVCSprites_Tessa, 0x20 },
};

// zero FULL?!?, ciel, EMPTY, EMPTY, RAT, ATHE, EMPTY, MB
// 8    zero part 1, 9  zero part 2,    10 EMPTY, 
// 11 treasure part 1,  12 treasure bit (done)

// Effect 7 needs to be paired with base Zero 
// Effect 6 needs to be paired with fire effect 2/RA transformation because that what it really is

const sGame_PaletteDataset SVCPLUSA_A_ZERO_PUNCH_PALETTES[] =
{
    { L"Zero Part 1", 0x380538, 0x380558, indexSVCSprites_Zero, 0, &pairHandledInCode },
    { L"Ciel", 0x380558, 0x380578, indexSVCSprites_Zero, 1 },
    { L"Red Arremer Transform 1/2", 0x380578, 0x380598, indexSVCSprites_Zero, 4, &pairHandledInCode },
    { L"Electric Shock Effect", 0x380598, 0x3805b8, indexSVCSprites_Zero },
    { L"Exceed", 0x3805b8, 0x3805d8, indexSVCSprites_Zero },
    { L"Heaven Spell", 0x3805d8, 0x3805f8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0x3805f8, 0x380618, indexSVCSprites_Zero },
    { L"Midnight Bliss", 0x380618, 0x380638, indexSVCSprites_Zero, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_KICK_PALETTES[] =
{
    { L"Zero Part 1", 0x380738, 0x380758, indexSVCSprites_Zero, 0, &pairHandledInCode },
    { L"Ciel", 0x380758, 0x380778, indexSVCSprites_Zero, 1 },
    { L"Red Arremer Transform 1/2", 0x380778, 0x380798, indexSVCSprites_Zero, 4, &pairHandledInCode },
    { L"Electric Shock Effect", 0x380798, 0x3807b8, indexSVCSprites_Zero  },
    { L"Exceed", 0x3807b8, 0x3807d8, indexSVCSprites_Zero },
    { L"Heaven Spell", 0x3807d8, 0x3807f8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0x3807f8, 0x380818, indexSVCSprites_Zero },
    { L"Midnight Bliss", 0x380818, 0x380838, indexSVCSprites_Zero, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_PUNCH_HELL_PALETTES[] =
{
    { L"Zero Part 1", 0X381138, 0X381158, indexSVCSprites_Zero, 0, &pairHandledInCode },
    { L"Ciel", 0X381158, 0X381178, indexSVCSprites_Zero, 1 },
    { L"Red Arremer Transform 1/2", 0X381178, 0X381198, indexSVCSprites_Zero, 4, &pairHandledInCode },
    { L"Electric Shock Effect", 0X381198, 0X3811B8, indexSVCSprites_Zero },
    { L"Exceed", 0X3811B8, 0X3811D8, indexSVCSprites_Zero },
    { L"Heaven Spell", 0X3811D8, 0X3811F8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0X3811F8, 0X381218, indexSVCSprites_Zero },
    { L"Midnight Bliss", 0X381218, 0X381238, indexSVCSprites_Zero, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_KICK_HELL_PALETTES[] =
{
    { L"Zero Part 1", 0X381338, 0X381358, indexSVCSprites_Zero, 0, &pairHandledInCode },
    { L"Ciel", 0X381358, 0X381378, indexSVCSprites_Zero, 1 },
    { L"Red Arremer Transform 1/2", 0X381378, 0X381398, indexSVCSprites_Zero, 4, &pairHandledInCode },
    { L"Electric Shock Effect", 0X381398, 0X3813B8, indexSVCSprites_Zero  },
    { L"Exceed", 0X3813B8, 0X3813D8, indexSVCSprites_Zero },
    { L"Heaven Spell", 0X3813D8, 0X3813F8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0X3813F8, 0X381418, indexSVCSprites_Zero },
    { L"Midnight Bliss", 0X381418, 0X381438, indexSVCSprites_Zero, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Zero Part 1", 0X380D38, 0X380D58, indexSVCSprites_Zero, 0, &pairHandledInCode },
    { L"Ciel", 0X380D58, 0X380D78, indexSVCSprites_Zero, 1 },
    { L"Red Arremer Transform 1/2", 0X380D78, 0X380D98, indexSVCSprites_Zero, 4, &pairHandledInCode },
    { L"Electric Shock Effect", 0X380D98, 0X380DB8, indexSVCSprites_Zero },
    { L"Exceed", 0X380DB8, 0X380DD8, indexSVCSprites_Zero },
    { L"Heaven Spell", 0X380DD8, 0X380DF8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0X380DF8, 0X380E18, indexSVCSprites_Zero },
    { L"Midnight Bliss", 0X380E18, 0X380E38, indexSVCSprites_Zero, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_KICK_HEAVEN_PALETTES[] =
{
    { L"Zero Part 1", 0X380F38, 0X380F58, indexSVCSprites_Zero, 0, &pairHandledInCode },
    { L"Ciel", 0X380F58, 0X380F78, indexSVCSprites_Zero, 1 },
    { L"Red Arremer Transform 1/2", 0X380F78, 0X380F98, indexSVCSprites_Zero, 4, &pairHandledInCode },
    { L"Electric Shock Effect", 0X380F98, 0X380FB8, indexSVCSprites_Zero  },
    { L"Exceed", 0X380FB8, 0X380FD8, indexSVCSprites_Zero },
    { L"Heaven Spell", 0X380FD8, 0X380FF8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0X380FF8, 0X381018, indexSVCSprites_Zero },
    { L"Midnight Bliss", 0X381018, 0X381038, indexSVCSprites_Zero, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_EFFECTS_PALETTES[] =
{
    { L"Effect 0: Charging", 0x396538, 0x396558, indexSVCSprites_Zero, 0x02 },
    { L"Effect 1", 0x396558, 0x396578 },
    { L"Effect 2: Spiral Shot", 0x396578, 0x396598, indexSVCSprites_Zero, 0x03 },
    { L"Effect 3: Charge Shot/Sword Impacts", 0x396598, 0x3965b8, indexSVCSprites_Zero, 0x0d },
    { L"Effect 4", 0x3965b8, 0x3965d8 },
    { L"Effect 5", 0x3965d8, 0x3965f8 },
    { L"Shared: Red Arremer Transform 2/2", 0x3965f8, 0x396618, indexSVCSprites_Zero, 12 },
    { L"Shared: Zero Part 2", 0x396618, 0x396638, indexSVCSprites_Zero, 0x08 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_WIN_PORTRAITS_PALETTES[] =
{
    { L"Zero Punch", 0x3aa738, 0x3aa778, indexSVCSprites_Zero, 0x21 },
    { L"Zero Kick", 0x3aa778, 0x3aa7b8, indexSVCSprites_Zero, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Zero Punch", 0x3a8738, 0x3a8778, indexSVCSprites_Zero, 0x20 },
    { L"Zero Kick", 0x3a8778, 0x3a87b8, indexSVCSprites_Zero, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Ciel Punch", 0x3a8bb8, 0x3a8bf8, indexSVCSprites_Ciel, 0x20 },
    { L"Ciel Kick", 0x3a8bf8, 0x3a8c38, indexSVCSprites_Ciel, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_PUNCH_PALETTES[] =
{
    { L"Demitri / Red Arremer Transform", 0x381538, 0x381558, indexSVCSprites_Demitri },
    { L"Fire Effect 1", 0x381558, 0x381578, indexSVCSprites_Demitri },
    { L"Fire Effect 2", 0x381578, 0x381598, indexSVCSprites_Demitri },
    { L"Electric Shock Effect", 0x381598, 0x3815b8, indexSVCSprites_Demitri },
    { L"Unknown", 0x3815b8, 0x3815d8, indexSVCSprites_Demitri },
    { L"Heaven Spell", 0x3815d8, 0x3815f8, indexSVCSprites_Demitri, 5 },
    { L"Soul Palette", 0x3815f8, 0x381618, indexSVCSprites_Demitri },
    { L"Midnight Bliss", 0x381618, 0x381638, indexSVCSprites_Demitri, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_KICK_PALETTES[] =
{
    { L"Demitri / Red Arremer Transform", 0x381738, 0x381758, indexSVCSprites_Demitri },
    { L"Fire Effect 1", 0x381758, 0x381778, indexSVCSprites_Demitri },
    { L"Fire Effect 2", 0x381778, 0x381798, indexSVCSprites_Demitri },
    { L"Electric Shock Effect", 0x381798, 0x3817b8, indexSVCSprites_Demitri },
    { L"Unknown", 0x3817b8, 0x3817d8, indexSVCSprites_Demitri },
    { L"Heaven Spell", 0x3817d8, 0x3817f8, indexSVCSprites_Demitri, 5 },
    { L"Soul Palette", 0x3817f8, 0x381818, indexSVCSprites_Demitri },
    { L"Midnight Bliss", 0x381818, 0x381838, indexSVCSprites_Demitri, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_PUNCH_HELL_PALETTES[] =
{
    { L"Demitri / Red Arremer Transform", 0X382138, 0X382158, indexSVCSprites_Demitri },
    { L"Fire Effect 1", 0X382158, 0X382178, indexSVCSprites_Demitri },
    { L"Fire Effect 2", 0X382178, 0X382198, indexSVCSprites_Demitri },
    { L"Electric Shock Effect", 0X382198, 0X3821B8, indexSVCSprites_Demitri },
    { L"Unknown", 0X3821B8, 0X3821D8, indexSVCSprites_Demitri },
    { L"Heaven Spell", 0X3821D8, 0X3821F8, indexSVCSprites_Demitri, 5 },
    { L"Soul Palette", 0X3821F8, 0X382218, indexSVCSprites_Demitri },
    { L"Midnight Bliss", 0X382218, 0X382238, indexSVCSprites_Demitri, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_KICK_HELL_PALETTES[] =
{
    { L"Demitri / Red Arremer Transform", 0X382338, 0X382358, indexSVCSprites_Demitri },
    { L"Fire Effect 1", 0X382358, 0X382378, indexSVCSprites_Demitri },
    { L"Fire Effect 2", 0X382378, 0X382398, indexSVCSprites_Demitri },
    { L"Electric Shock Effect", 0X382398, 0X3823B8, indexSVCSprites_Demitri },
    { L"Unknown", 0X3823B8, 0X3823D8, indexSVCSprites_Demitri },
    { L"Heaven Spell", 0X3823D8, 0X3823F8, indexSVCSprites_Demitri, 5 },
    { L"Soul Palette", 0X3823F8, 0X382418, indexSVCSprites_Demitri },
    { L"Midnight Bliss", 0X382418, 0X382438, indexSVCSprites_Demitri, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Demitri / Red Arremer Transform", 0X381D38, 0X381D58, indexSVCSprites_Demitri },
    { L"Fire Effect 1", 0X381D58, 0X381D78, indexSVCSprites_Demitri },
    { L"Fire Effect 2", 0X381D78, 0X381D98, indexSVCSprites_Demitri },
    { L"Electric Shock Effect", 0X381D98, 0X381DB8, indexSVCSprites_Demitri },
    { L"Unknown", 0X381DB8, 0X381DD8, indexSVCSprites_Demitri },
    { L"Heaven Spell", 0X381DD8, 0X381DF8, indexSVCSprites_Demitri, 5 },
    { L"Soul Palette", 0X381DF8, 0X381E18, indexSVCSprites_Demitri },
    { L"Midnight Bliss", 0X381E18, 0X381E38, indexSVCSprites_Demitri, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_KICK_HEAVEN_PALETTES[] =
{
    { L"Demitri / Red Arremer Transform", 0X381F38, 0X381F58, indexSVCSprites_Demitri },
    { L"Fire Effect 1", 0X381F58, 0X381F78, indexSVCSprites_Demitri },
    { L"Fire Effect 2", 0X381F78, 0X381F98, indexSVCSprites_Demitri },
    { L"Electric Shock Effect", 0X381F98, 0X381FB8, indexSVCSprites_Demitri },
    { L"Unknown", 0X381FB8, 0X381FD8, indexSVCSprites_Demitri },
    { L"Heaven Spell", 0X381FD8, 0X381FF8, indexSVCSprites_Demitri, 5 },
    { L"Soul Palette", 0X381FF8, 0X382018, indexSVCSprites_Demitri },
    { L"Midnight Bliss", 0X382018, 0X382038, indexSVCSprites_Demitri, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x396d38, 0x396d58 },
    { L"Effect 1", 0x396d58, 0x396d78 },
    { L"Effect 2", 0x396d78, 0x396d98 },
    { L"Effect 3", 0x396d98, 0x396db8 },
    { L"Effect 4", 0x396db8, 0x396dd8 },
    { L"Effect 5", 0x396dd8, 0x396df8 },
    { L"Effect 6", 0x396df8, 0x396e18 },
    { L"Effect 7", 0x396e18, 0x396e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Demitri Punch", 0x3aa7b8, 0x3aa7f8, indexSVCSprites_Demitri, 0x21 },
    { L"Demitri Kick", 0x3aa7f8, 0x3aa838, indexSVCSprites_Demitri, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Demitri Punch", 0x3a87b8, 0x3a87f8, indexSVCSprites_Demitri, 0x20 },
    { L"Demitri Kick", 0x3a87f8, 0x3a8838, indexSVCSprites_Demitri, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_PUNCH_PALETTES[] =
{
    { L"Dan", 0x382538, 0x382558, indexSVCSprites_Dan },
    //{ L"Unused: Fire Effect 1", 0x382558, 0x382578 },
    //{ L"Unused: Fire Effect 2", 0x382578, 0x382598 },
    { L"Electric Shock Effect", 0x382598, 0x3825b8, indexSVCSprites_Dan },
    { L"Makai Spell", 0x3825b8, 0x3825d8, indexSVCSprites_Dan, 0x04 },
    { L"Heaven Spell", 0x3825d8, 0x3825f8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0x3825f8, 0x382618, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0x382618, 0x382638, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_KICK_PALETTES[] =
{
    { L"Dan", 0x382738, 0x382758, indexSVCSprites_Dan },
    //{ L"Unused: Fire Effect 1", 0x382758, 0x382778 },
    //{ L"Unused: Fire Effect 2", 0x382778, 0x382798 },
    { L"Electric Shock Effect", 0x382798, 0x3827b8, indexSVCSprites_Dan },
    { L"Makai Spell", 0x3827b8, 0x3827d8, indexSVCSprites_Dan, 0x04 },
    { L"Heaven Spell", 0x3827d8, 0x3827f8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0x3827f8, 0x382818, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0x382818, 0x382838, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_PUNCH_HELL_PALETTES[] =
{
    { L"Dan", 0X383138, 0X383158, indexSVCSprites_Dan },
    //{ L"Unused: Fire Effect 1", 0X383158, 0X383178 },
    //{ L"Unused: Fire Effect 2", 0X383178, 0X383198 },
    { L"Electric Shock Effect", 0X383198, 0X3831B8, indexSVCSprites_Dan },
    { L"Makai Spell", 0X3831B8, 0X3831D8, indexSVCSprites_Dan, 0x04 },
    { L"Heaven Spell", 0X3831D8, 0X3831F8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0X3831F8, 0X383218, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0X383218, 0X383238, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_KICK_HELL_PALETTES[] =
{
    { L"Dan", 0X383338, 0X383358, indexSVCSprites_Dan },
    //{ L"Unused: Fire Effect 1", 0X383358, 0X383378 },
    //{ L"Unused: Fire Effect 2", 0X383378, 0X383398 },
    { L"Electric Shock Effect", 0X383398, 0X3833B8, indexSVCSprites_Dan },
    { L"Makai Spell", 0X3833B8, 0X3833D8, indexSVCSprites_Dan, 0x04 },
    { L"Heaven Spell", 0X3833D8, 0X3833F8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0X3833F8, 0X383418, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0X383418, 0X383438, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Dan", 0X382D38, 0X382D58, indexSVCSprites_Dan },
    //{ L"Unused: Fire Effect 1", 0X382D58, 0X382D78 },
    //{ L"Unused: Fire Effect 2", 0X382D78, 0X382D98 },
    { L"Electric Shock Effect", 0X382D98, 0X382DB8, indexSVCSprites_Dan },
    { L"Makai Spell", 0X382DB8, 0X382DD8, indexSVCSprites_Dan, 0x04 },
    { L"Heaven Spell", 0X382DD8, 0X382DF8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0X382DF8, 0X382E18, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0X382E18, 0X382E38, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_KICK_HEAVEN_PALETTES[] =
{
    { L"Dan", 0X382F38, 0X382F58, indexSVCSprites_Dan },
    //{ L"Unused: Fire Effect 1", 0X382F58, 0X382F78 },
    //{ L"Unused: Fire Effect 2", 0X382F78, 0X382F98 },
    { L"Electric Shock Effect", 0X382F98, 0X382FB8, indexSVCSprites_Dan },
    { L"Makai Spell", 0X382FB8, 0X382FD8, indexSVCSprites_Dan, 0x04 },
    { L"Heaven Spell", 0X382FD8, 0X382FF8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0X382FF8, 0X383018, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0X383018, 0X383038, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x397538, 0x397558, indexSVCSprites_Dan, 0x08 },
    { L"Effect 1", 0x397558, 0x397578, indexSVCSprites_Dan, 0x09 },
    { L"Effect 2", 0x397578, 0x397598, indexSVCSprites_Dan, 0x0a },
    { L"Effect 3", 0x397598, 0x3975b8, indexSVCSprites_Dan, 0x0b },
    { L"Effect 4", 0x3975b8, 0x3975d8 },
    { L"Effect 5", 0x3975d8, 0x3975f8 },
    { L"Effect 6", 0x3975f8, 0x397618 },
    { L"Effect 7", 0x397618, 0x397638 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES[] =
{
    { L"Dan Punch", 0x3aa838, 0x3aa878, indexSVCSprites_Dan, 0x21 },
    { L"Dan Kick", 0x3aa878, 0x3aa8b8, indexSVCSprites_Dan, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Dan Punch", 0x3a8838, 0x3a8878, indexSVCSprites_Dan, 0x20 },
    { L"Dan Kick", 0x3a8878, 0x3a88b8, indexSVCSprites_Dan, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_PUNCH_PALETTES[] =
{
    { L"Red Arremer", 0x383538, 0x383558, indexSVCSprites_RedArremer, 0x00, &pairNextSkippedAndNextSkippedAndNext },
    //{ L"Unused: Fire Effect 1", 0x383558, 0x383578, indexSVCSprites_RedArremer },
    { L"Woody Pig", 0x383578, 0x383598, indexSVCSprites_RedArremer, 0x10 },
    { L"Electric Shock Effect", 0x383598, 0x3835b8, indexSVCSprites_RedArremer },
    { L"Puchi Devil", 0x3835b8, 0x3835d8, indexSVCSprites_RedArremer, 0x11 },
    { L"Zombie", 0x3835d8, 0x3835f8, indexSVCSprites_RedArremer, 0x12 },
    { L"Soul Palette", 0x3835f8, 0x383618, indexSVCSprites_RedArremer },
    { L"Midnight Bliss", 0x383618, 0x383638, indexSVCSprites_RedArremer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_KICK_PALETTES[] =
{
    { L"Red Arremer", 0x383738, 0x383758, indexSVCSprites_RedArremer, 0x00, &pairNextSkippedAndNextSkippedAndNext },
    //{ L"Unused: Fire Effect 1", 0x383758, 0x383778, indexSVCSprites_RedArremer },
    { L"Woody Pig", 0x383778, 0x383798, indexSVCSprites_RedArremer, 0x10 },
    { L"Electric Shock Effect", 0x383798, 0x3837b8, indexSVCSprites_RedArremer },
    { L"Puchi Devil", 0x3837b8, 0x3837d8, indexSVCSprites_RedArremer, 0x11 },
    { L"Zombie", 0x3837d8, 0x3837f8, indexSVCSprites_RedArremer, 0x12 },
    { L"Soul Palette", 0x3837f8, 0x383818, indexSVCSprites_RedArremer },
    { L"Midnight Bliss", 0x383818, 0x383838, indexSVCSprites_RedArremer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_PUNCH_HELL_PALETTES[] =
{
    { L"Red Arremer", 0X384138, 0X384158, indexSVCSprites_RedArremer, 0x00, &pairNextSkippedAndNextSkippedAndNext },
    //{ L"Unused: Fire Effect 1", 0X384158, 0X384178, indexSVCSprites_RedArremer },
    { L"Woody Pig", 0X384178, 0X384198, indexSVCSprites_RedArremer, 0x10 },
    { L"Electric Shock Effect", 0X384198, 0X3841B8, indexSVCSprites_RedArremer },
    { L"Puchi Devil", 0X3841B8, 0X3841D8, indexSVCSprites_RedArremer, 0x11 },
    { L"Zombie", 0X3841D8, 0X3841F8, indexSVCSprites_RedArremer, 0x12 },
    { L"Soul Palette", 0X3841F8, 0X384218, indexSVCSprites_RedArremer },
    { L"Midnight Bliss", 0X384218, 0X384238, indexSVCSprites_RedArremer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_KICK_HELL_PALETTES[] =
{
    { L"Red Arremer", 0X384338, 0X384358, indexSVCSprites_RedArremer, 0x00, &pairNextSkippedAndNextSkippedAndNext },
    //{ L"Unused: Fire Effect 1", 0X384358, 0X384378, indexSVCSprites_RedArremer },
    { L"Woody Pig", 0X384378, 0X384398, indexSVCSprites_RedArremer, 0x10 },
    { L"Electric Shock Effect", 0X384398, 0X3843B8, indexSVCSprites_RedArremer },
    { L"Puchi Devil", 0X3843B8, 0X3843D8, indexSVCSprites_RedArremer, 0x11 },
    { L"Zombie", 0X3843D8, 0X3843F8, indexSVCSprites_RedArremer, 0x12 },
    { L"Soul Palette", 0X3843F8, 0X384418, indexSVCSprites_RedArremer },
    { L"Midnight Bliss", 0X384418, 0X384438, indexSVCSprites_RedArremer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Red Arremer", 0X383D38, 0X383D58, indexSVCSprites_RedArremer, 0x00, &pairNextSkippedAndNextSkippedAndNext },
    //{ L"Unused: Fire Effect 1", 0X383D58, 0X383D78, indexSVCSprites_RedArremer },
    { L"Woody Pig", 0X383D78, 0X383D98, indexSVCSprites_RedArremer, 0x10 },
    { L"Electric Shock Effect", 0X383D98, 0X383DB8, indexSVCSprites_RedArremer },
    { L"Puchi Devil", 0X383DB8, 0X383DD8, indexSVCSprites_RedArremer, 0x11 },
    { L"Zombie", 0X383DD8, 0X383DF8, indexSVCSprites_RedArremer, 0x12 },
    { L"Soul Palette", 0X383DF8, 0X383E18, indexSVCSprites_RedArremer },
    { L"Midnight Bliss", 0X383E18, 0X383E38, indexSVCSprites_RedArremer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_KICK_HEAVEN_PALETTES[] =
{
    { L"Red Arremer", 0X383F38, 0X383F58, indexSVCSprites_RedArremer, 0x00, &pairNextSkippedAndNextSkippedAndNext },
    //{ L"Unused: Fire Effect 1", 0X383F58, 0X383F78, indexSVCSprites_RedArremer },
    { L"Woody Pig", 0X383F78, 0X383F98, indexSVCSprites_RedArremer, 0x10 },
    { L"Electric Shock Effect", 0X383F98, 0X383FB8, indexSVCSprites_RedArremer },
    { L"Puchi Devil", 0X383FB8, 0X383FD8, indexSVCSprites_RedArremer, 0x11 },
    { L"Zombie", 0X383FD8, 0X383FF8, indexSVCSprites_RedArremer, 0x12 },
    { L"Soul Palette", 0X383FF8, 0X384018, indexSVCSprites_RedArremer },
    { L"Midnight Bliss", 0X384018, 0X384038, indexSVCSprites_RedArremer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x397d38, 0x397d58 },
    { L"Effect 1", 0x397d58, 0x397d78 },
    { L"Effect 2", 0x397d78, 0x397d98 },
    { L"Effect 3", 0x397d98, 0x397db8 },
    { L"Effect 4", 0x397db8, 0x397dd8 },
    { L"Effect 5", 0x397dd8, 0x397df8 },
    { L"Effect 6", 0x397df8, 0x397e18 },
    { L"Effect 7", 0x397e18, 0x397e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES[] =
{
    { L"Red Arremer Punch", 0x3aa8b8, 0x3aa8f8, indexSVCSprites_RedArremer, 0x21 },
    { L"Red Arremer Kick", 0x3aa8f8, 0x3aa938, indexSVCSprites_RedArremer, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Red Arremer Punch", 0x3a88b8, 0x3a88f8, indexSVCSprites_RedArremer, 0x20 },
    { L"Red Arremer Kick", 0x3a88f8, 0x3a8938, indexSVCSprites_RedArremer, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES[] =
{
    { L"Orochi Iori", 0x384538, 0x384558, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 1", 0x384558, 0x384578, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 2", 0x384578, 0x384598, indexKOF97Sprites_IoriOrochi },
    { L"Electric Shock Effect", 0x384598, 0x3845b8, indexKOF97Sprites_IoriOrochi },
    { L"Makai Spell", 0x3845b8, 0x3845d8, indexSVCSprites_OrochiIori, 4 },
    { L"Heaven Spell", 0x3845d8, 0x3845f8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0x3845f8, 0x384618, indexKOF97Sprites_IoriOrochi },
    { L"Midnight Bliss", 0x384618, 0x384638, indexSVCSprites_OrochiIori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_KICK_PALETTES[] =
{
    { L"Orochi Iori", 0x384738, 0x384758, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 1", 0x384758, 0x384778, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 2", 0x384778, 0x384798, indexKOF97Sprites_IoriOrochi },
    { L"Electric Shock Effect", 0x384798, 0x3847b8, indexKOF97Sprites_IoriOrochi },
    { L"Makai Spell", 0x3847b8, 0x3847d8, indexSVCSprites_OrochiIori, 4 },
    { L"Heaven Spell", 0x3847d8, 0x3847f8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0x3847f8, 0x384818, indexKOF97Sprites_IoriOrochi },
    { L"Midnight Bliss", 0x384818, 0x384838, indexSVCSprites_OrochiIori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_PUNCH_HELL_PALETTES[] =
{
    { L"Orochi Iori", 0X385138, 0X385158, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 1", 0X385158, 0X385178, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 2", 0X385178, 0X385198, indexKOF97Sprites_IoriOrochi },
    { L"Electric Shock Effect", 0X385198, 0X3851B8, indexKOF97Sprites_IoriOrochi },
    { L"Makai Spell", 0X3851B8, 0X3851D8, indexSVCSprites_OrochiIori, 4 },
    { L"Heaven Spell", 0X3851D8, 0X3851F8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0X3851F8, 0X385218, indexKOF97Sprites_IoriOrochi },
    { L"Midnight Bliss", 0X385218, 0X385238, indexSVCSprites_OrochiIori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_KICK_HELL_PALETTES[] =
{
    { L"Orochi Iori", 0X385338, 0X385358, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 1", 0X385358, 0X385378, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 2", 0X385378, 0X385398, indexKOF97Sprites_IoriOrochi },
    { L"Electric Shock Effect", 0X385398, 0X3853B8, indexKOF97Sprites_IoriOrochi },
    { L"Makai Spell", 0X3853B8, 0X3853D8, indexSVCSprites_OrochiIori, 4 },
    { L"Heaven Spell", 0X3853D8, 0X3853F8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0X3853F8, 0X385418, indexKOF97Sprites_IoriOrochi },
    { L"Midnight Bliss", 0X385418, 0X385438, indexSVCSprites_OrochiIori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Orochi Iori", 0X384D38, 0X384D58, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 1", 0X384D58, 0X384D78, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 2", 0X384D78, 0X384D98, indexKOF97Sprites_IoriOrochi },
    { L"Electric Shock Effect", 0X384D98, 0X384DB8, indexKOF97Sprites_IoriOrochi },
    { L"Makai Spell", 0X384DB8, 0X384DD8, indexSVCSprites_OrochiIori, 4 },
    { L"Heaven Spell", 0X384DD8, 0X384DF8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0X384DF8, 0X384E18, indexKOF97Sprites_IoriOrochi },
    { L"Midnight Bliss", 0X384E18, 0X384E38, indexSVCSprites_OrochiIori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_KICK_HEAVEN_PALETTES[] =
{
    { L"Orochi Iori", 0X384F38, 0X384F58, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 1", 0X384F58, 0X384F78, indexKOF97Sprites_IoriOrochi },
    // unused { L"Fire Effect 2", 0X384F78, 0X384F98, indexKOF97Sprites_IoriOrochi },
    { L"Electric Shock Effect", 0X384F98, 0X384FB8, indexKOF97Sprites_IoriOrochi },
    { L"Makai Spell", 0X384FB8, 0X384FD8, indexSVCSprites_OrochiIori, 4 },
    { L"Heaven Spell", 0X384FD8, 0X384FF8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0X384FF8, 0X385018, indexKOF97Sprites_IoriOrochi },
    { L"Midnight Bliss", 0X385018, 0X385038, indexSVCSprites_OrochiIori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x398538, 0x398558 },
    { L"Effect 1", 0x398558, 0x398578 },
    { L"Effect 2", 0x398578, 0x398598 },
    { L"Effect 3", 0x398598, 0x3985b8 },
    { L"Effect 4", 0x3985b8, 0x3985d8 },
    { L"Effect 5", 0x3985d8, 0x3985f8 },
    { L"Effect 6", 0x3985f8, 0x398618 },
    { L"Effect 7", 0x398618, 0x398638 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES[] =
{
    { L"Orochi Iori Punch", 0x3aa938, 0x3aa978, indexSVCSprites_OrochiIori, 0x21 },
    { L"Orochi Iori Kick", 0x3aa978, 0x3aa9b8, indexSVCSprites_OrochiIori, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Orochi Iori Punch", 0x3a8938, 0x3a8978, indexSVCSprites_OrochiIori, 0x20 },
    { L"Orochi Iori Kick", 0x3a8978, 0x3a89b8, indexSVCSprites_OrochiIori, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES[] =
{
    { L"Serious Mr. Karate", 0x385538, 0x385558, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 1", 0x385558, 0x385578, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 2", 0x385578, 0x385598, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0x385598, 0x3855b8, indexSVCSprites_SeriousMrKarate },
    { L"Makai Spell", 0x3855b8, 0x3855d8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Heaven Spell", 0x3855d8, 0x3855f8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0x3855f8, 0x385618, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0x385618, 0x385638, indexSVCSprites_SeriousMrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES[] =
{
    { L"Serious Mr. Karate", 0x385738, 0x385758, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 1", 0x385758, 0x385778, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 2", 0x385778, 0x385798, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0x385798, 0x3857b8, indexSVCSprites_SeriousMrKarate },
    { L"Makai Spell", 0x3857b8, 0x3857d8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Heaven Spell", 0x3857d8, 0x3857f8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0x3857f8, 0x385818, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0x385818, 0x385838, indexSVCSprites_SeriousMrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_HELL_PALETTES[] =
{
    { L"Serious Mr. Karate", 0X386138, 0X386158, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 1", 0X386158, 0X386178, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 2", 0X386178, 0X386198, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0X386198, 0X3861B8, indexSVCSprites_SeriousMrKarate },
    { L"Makai Spell", 0X3861B8, 0X3861D8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Heaven Spell", 0X3861D8, 0X3861F8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0X3861F8, 0X386218, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0X386218, 0X386238, indexSVCSprites_SeriousMrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_KICK_HELL_PALETTES[] =
{
    { L"Serious Mr. Karate", 0X386338, 0X386358, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 1", 0X386358, 0X386378, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 2", 0X386378, 0X386398, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0X386398, 0X3863B8, indexSVCSprites_SeriousMrKarate },
    { L"Makai Spell", 0X3863B8, 0X3863D8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Heaven Spell", 0X3863D8, 0X3863F8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0X3863F8, 0X386418, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0X386418, 0X386438, indexSVCSprites_SeriousMrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Serious Mr. Karate", 0X385D38, 0X385D58, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 1", 0X385D58, 0X385D78, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 2", 0X385D78, 0X385D98, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0X385D98, 0X385DB8, indexSVCSprites_SeriousMrKarate },
    { L"Makai Spell", 0X385DB8, 0X385DD8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Heaven Spell", 0X385DD8, 0X385DF8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0X385DF8, 0X385E18, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0X385E18, 0X385E38, indexSVCSprites_SeriousMrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_KICK_HEAVEN_PALETTES[] =
{
    { L"Serious Mr. Karate", 0X385F38, 0X385F58, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 1", 0X385F58, 0X385F78, indexSVCSprites_SeriousMrKarate },
    //{ L"Unused: Fire Effect 2", 0X385F78, 0X385F98, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0X385F98, 0X385FB8, indexSVCSprites_SeriousMrKarate },
    { L"Makai Spell", 0X385FB8, 0X385FD8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Heaven Spell", 0X385FD8, 0X385FF8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0X385FF8, 0X386018, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0X386018, 0X386038, indexSVCSprites_SeriousMrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x398d38, 0x398d58 },
    { L"Effect 1", 0x398d58, 0x398d78 },
    { L"Effect 2", 0x398d78, 0x398d98 },
    { L"Effect 3", 0x398d98, 0x398db8 },
    { L"Effect 4", 0x398db8, 0x398dd8 },
    { L"Effect 5", 0x398dd8, 0x398df8 },
    { L"Effect 6", 0x398df8, 0x398e18 },
    { L"Effect 7", 0x398e18, 0x398e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES[] =
{
    { L"Serious Mr. Karate Punch", 0x3aa9b8, 0x3aa9f8, indexSVCSprites_SeriousMrKarate, 0x21 },
    { L"Serious Mr. Karate Kick", 0x3aa9f8, 0x3aaa38, indexSVCSprites_SeriousMrKarate, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Serious Mr. Karate Punch", 0x3a89b8, 0x3a89f8, indexSVCSprites_SeriousMrKarate, 0x20 },
    { L"Serious Mr. Karate Kick", 0x3a89f8, 0x3a8a38, indexSVCSprites_SeriousMrKarate, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES[] =
{
    { L"Violent Ken", 0x386538, 0x386558, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 1", 0x386558, 0x386578, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 2", 0x386578, 0x386598, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0x386598, 0x3865b8, indexSVCSprites_ViolentKen },
    { L"Makai Spell", 0x3865b8, 0x3865d8, indexSVCSprites_ViolentKen, 4 },
    { L"Heaven Spell", 0x3865d8, 0x3865f8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0x3865f8, 0x386618, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0x386618, 0x386638, indexSVCSprites_ViolentKen, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES[] =
{
    { L"Violent Ken", 0x386B38, 0x386B58, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 1", 0x386758, 0x386778, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 2", 0x386778, 0x386798, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0x386798, 0x3867b8, indexSVCSprites_ViolentKen },
    { L"Makai Spell", 0x3867b8, 0x3867d8, indexSVCSprites_ViolentKen, 4 },
    { L"Heaven Spell", 0x3867d8, 0x3867f8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0x3867f8, 0x386818, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0x386818, 0x386838, indexSVCSprites_ViolentKen, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_PUNCH_HELL_PALETTES[] =
{
    { L"Violent Ken", 0X387138, 0X387158, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 1", 0X387158, 0X387178, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 2", 0X387178, 0X387198, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0X387198, 0X3871B8, indexSVCSprites_ViolentKen },
    { L"Makai Spell", 0X3871B8, 0X3871D8, indexSVCSprites_ViolentKen, 4 },
    { L"Heaven Spell", 0X3871D8, 0X3871F8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0X3871F8, 0X387218, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0X387218, 0X387238, indexSVCSprites_ViolentKen, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_KICK_HELL_PALETTES[] =
{
    { L"Violent Ken", 0X387338, 0X387358, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 1", 0X387358, 0X387378, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 2", 0X387378, 0X387398, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0X387398, 0X3873B8, indexSVCSprites_ViolentKen },
    { L"Makai Spell", 0X3873B8, 0X3873D8, indexSVCSprites_ViolentKen, 4 },
    { L"Heaven Spell", 0X3873D8, 0X3873F8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0X3873F8, 0X387418, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0X387418, 0X387438, indexSVCSprites_ViolentKen, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Violent Ken", 0X386D38, 0X386D58, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 1", 0X386D58, 0X386D78, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 2", 0X386D78, 0X386D98, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0X386D98, 0X386DB8, indexSVCSprites_ViolentKen },
    { L"Makai Spell", 0X386DB8, 0X386DD8, indexSVCSprites_ViolentKen, 4 },
    { L"Heaven Spell", 0X386DD8, 0X386DF8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0X386DF8, 0X386E18, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0X386E18, 0X386E38, indexSVCSprites_ViolentKen, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_KICK_HEAVEN_PALETTES[] =
{
    { L"Violent Ken", 0X386F38, 0X386F58, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 1", 0X386F58, 0X386F78, indexSVCSprites_ViolentKen },
    //{ L"Unused: Fire Effect 2", 0X386F78, 0X386F98, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0X386F98, 0X386FB8, indexSVCSprites_ViolentKen },
    { L"Makai Spell", 0X386FB8, 0X386FD8, indexSVCSprites_ViolentKen, 4 },
    { L"Heaven Spell", 0X386FD8, 0X386FF8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0X386FF8, 0X387018, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0X387018, 0X387038, indexSVCSprites_ViolentKen, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x399538, 0x399558 },
    { L"Effect 1", 0x399558, 0x399578 },
    { L"Effect 2", 0x399578, 0x399598 },
    { L"Effect 3", 0x399598, 0x3995b8 },
    { L"Effect 4", 0x3995b8, 0x3995d8 },
    { L"Effect 5", 0x3995d8, 0x3995f8 },
    { L"Effect 6", 0x3995f8, 0x399618 },
    { L"Effect 7", 0x399618, 0x399638 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES[] =
{
    { L"Violent Ken Punch", 0x3aaa38, 0x3aaa78, indexSVCSprites_ViolentKen, 0x21 },
    { L"Violent Ken Kick", 0x3aaa78, 0x3aaab8, indexSVCSprites_ViolentKen, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Violent Ken Punch", 0x3a8a38, 0x3a8a78, indexSVCSprites_ViolentKen, 0x20 },
    { L"Violent Ken Kick", 0x3a8a78, 0x3a8ab8, indexSVCSprites_ViolentKen, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES[] =
{
    { L"Shin Akuma", 0x387538, 0x387558, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0x387558, 0x387578 },
    //{ L"Unused: Fire Effect 2", 0x387578, 0x387598 },
    { L"Electric Shock Effect", 0x387598, 0x3875b8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0x3875b8, 0x3875d8, indexSVCSprites_ShinAkuma, 4 },
    { L"Heaven Spell", 0x3875d8, 0x3875f8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0x3875f8, 0x387618, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x387618, 0x387638, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_KICK_PALETTES[] =
{
    { L"Shin Akuma", 0x387738, 0x387758, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0x387758, 0x387778 },
    //{ L"Unused: Fire Effect 2", 0x387778, 0x387798 },
    { L"Electric Shock Effect", 0x387798, 0x3877b8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0x3877b8, 0x3877d8, indexSVCSprites_ShinAkuma, 4 },
    { L"Heaven Spell", 0x3877d8, 0x3877f8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0x3877f8, 0x387818, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x387818, 0x387838, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_PUNCH_HELL_PALETTES[] =
{
    { L"Shin Akuma", 0X388138, 0X388158, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X388158, 0X388178 },
    //{ L"Unused: Fire Effect 2", 0X388178, 0X388198 },
    { L"Electric Shock Effect", 0X388198, 0X3881B8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X3881B8, 0X3881D8, indexSVCSprites_ShinAkuma, 4 },
    { L"Heaven Spell", 0X3881D8, 0X3881F8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0X3881F8, 0X388218, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X388218, 0X388238, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_KICK_HELL_PALETTES[] =
{
    { L"Shin Akuma", 0X388338, 0X388358, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X388358, 0X388378 },
    //{ L"Unused: Fire Effect 2", 0X388378, 0X388398 },
    { L"Electric Shock Effect", 0X388398, 0X3883B8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X3883B8, 0X3883D8, indexSVCSprites_ShinAkuma, 4 },
    { L"Heaven Spell", 0X3883D8, 0X3883F8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0X3883F8, 0X388418, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X388418, 0X388438, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_PUNCH_HEAVEN_PALETTES[] =
{
    { L"Shin Akuma", 0X387D38, 0X387D58, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X387D58, 0X387D78 },
    //{ L"Unused: Fire Effect 2", 0X387D78, 0X387D98 },
    { L"Electric Shock Effect", 0X387D98, 0X387DB8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X387DB8, 0X387DD8, indexSVCSprites_ShinAkuma, 4 },
    { L"Heaven Spell", 0X387DD8, 0X387DF8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0X387DF8, 0X387E18, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X387E18, 0X387E38, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_KICK_HEAVEN_PALETTES[] =
{
    { L"Shin Akuma", 0X387F38, 0X387F58, indexSVCSprites_Akuma },
    //{ L"Unused: Fire Effect 1", 0X387F58, 0X387F78 },
    //{ L"Unused: Fire Effect 2", 0X387F78, 0X387F98 },
    { L"Electric Shock Effect", 0X387F98, 0X387FB8, indexSVCSprites_Akuma },
    { L"Makai Spell", 0X387FB8, 0X387FD8, indexSVCSprites_ShinAkuma, 4 },
    { L"Heaven Spell", 0X387FD8, 0X387FF8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0X387FF8, 0X388018, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0X388018, 0X388038, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x399d38, 0x399d58, indexSVCSprites_Akuma, 0x08 },
    { L"Effect 1", 0x399d58, 0x399d78, indexSVCSprites_Akuma, 0x09 },
    { L"Effect 2", 0x399d78, 0x399d98, indexSVCSprites_Akuma, 0x0a },
    { L"Effect 3", 0x399d98, 0x399db8 },
    { L"Effect 4", 0x399db8, 0x399dd8 },
    { L"Effect 5", 0x399dd8, 0x399df8 },
    { L"Effect 6", 0x399df8, 0x399e18 },
    { L"Effect 7", 0x399e18, 0x399e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES[] =
{
    { L"Shin Akuma Punch", 0x3aaab8, 0x3aaaf8, indexSVCSprites_ShinAkuma, 0x21 },
    { L"Shin Akuma Kick", 0x3aaaf8, 0x3aab38, indexSVCSprites_ShinAkuma, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Shin Akuma Punch", 0x3a8ab8, 0x3a8af8, indexSVCSprites_ShinAkuma, 0x20 },
    { L"Shin Akuma Kick", 0x3a8af8, 0x3a8b38, indexSVCSprites_ShinAkuma, 0x20 },
};

const sDescTreeNode SVCPLUSA_A_KYO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_IORI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_RYO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_TERRY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MAI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KASUMI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_KICK_HEAVEN_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MRKARATE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CHOI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_EARTHQUAKE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GENJURO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SHIKI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GEESEHOWARD_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MARSPEOPLE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GOENITZ_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GODDESSATHENA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_RYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GUILE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DHALSIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_BOXER_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CLAW_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SAGAT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DICTATOR_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_AKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_HUGO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_TESSA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_ZERO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_INTRO_PORTRAITS_PALETTES) },
    { L"Ciel Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES) },
};

// Not using this: pushed it into the Zero collection
const sDescTreeNode SVCPLUSA_A_CIEL_COLLECTION[] =
{
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DEMITRI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DAN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_REDARREMER_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_OROCHIIORI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SERIOUSMRKARATE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_VIOLENTKEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_KICK_HEAVEN_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SHINAKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES) },
    { L"Punch (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_PUNCH_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_PUNCH_HELL_PALETTES) },
    { L"Punch (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_PUNCH_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_PUNCH_HEAVEN_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_KICK_PALETTES) },
    { L"Kick (Temple/Hell)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_KICK_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_KICK_HELL_PALETTES) },
    { L"Kick (Heaven)", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_KICK_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_KICK_HEAVEN_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES) },
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_FACTORY_PALETTES[] =
{
    { L"Factory Abandoned", 0x39a538, 0x39a698, indexSVCSprites_Bonus, 0x00 }
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_STATION_PALETTES[] =
{
    { L"Station Obsolete", 0x39b938, 0x39b9f8 }
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_NUDE_PALETTES[] =
{
    { L"Nude Place 1/5", 0x39cd38, 0x39cf38 },
    { L"Nude Place 2/5", 0x39cf38, 0x39d138 },
    { L"Nude Place 3/5", 0x39d138, 0x39d338 },
    { L"Nude Place 4/5", 0x39d338, 0x39d538 },
    { L"Nude Place 5/5", 0x39d538, 0x39d6f8 },
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_FOREST_PALETTES[] =
{
    { L"Green Forest", 0x39e138, 0x39e338 },
    { L"Green Forest", 0x39e338, 0x39e538 },
    { L"Green Forest", 0x39e538, 0x39e738 },
    { L"Green Forest", 0x39e738, 0x39e938 },
    { L"Green Forest", 0x39e938, 0x39ea38 },
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_CRYSTAL_PALETTES[] =
{
    { L"Crystal Shrine", 0x39f538, 0x39f738 },
    { L"Crystal Shrine", 0x39f738, 0x39f938 },
    { L"Crystal Shrine", 0x39f938, 0x39fb38 },
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_POWER_PALETTES[] =
{
    { L"Power Generation Room 1/4", 0x3a0938, 0x3a0b38 },
    { L"Power Generation Room 2/4", 0x3a0b38, 0x3a0d38 },
    { L"Power Generation Room 3/4", 0x3a0d38, 0x3a0f38 },
    { L"Power Generation Room 4/4", 0x3a0f38, 0x3a1098 },
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_TEMPLE_PALETTES[] =
{
    { L"The Temple 1/3", 0x3a1d38, 0x3a1f38 },
    { L"The Temple 2/3", 0x3a1f38, 0x3a2138 },
    { L"The Temple 3/3", 0x3a2138, 0x3a2338 },
    { L"The Temple Char Outline", 0x3a2338, 0x3a2358 }
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_HEAVEN_PALETTES[] =
{
    { L"Heaven 1/10", 0x3a3138, 0x3a3338 },
    { L"Heaven 2/10", 0x3a3338, 0x3a3538 },
    { L"Heaven 3/10", 0x3a3538, 0x3a3738 },
    { L"Heaven 4/10", 0x3a3738, 0x3a3938 },
    { L"Heaven 5/10", 0x3a3938, 0x3a3b38 },
    { L"Heaven 6/10", 0x3a3b38, 0x3a3d38 },
    { L"Heaven 7/10", 0x3a3d38, 0x3a3f38 },
    { L"Heaven 8/10", 0x3a3f38, 0x3a4138 },
    { L"Heaven 9/10", 0x3a4138, 0x3a4338 },
    { L"Heaven 10/10", 0x3a4338, 0x3a44d8 },
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_HELL_PALETTES[] =
{
    { L"Hell 1/2", 0x3a4538, 0x3a4738 },
    { L"Hell 2/2", 0x3a4738, 0x3a4918 },
    { L"Hell Extra Maybe", 0x3a4a58, 0x3a4a78 }
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_BLOCKADE_PALETTES[] =
{
    { L"Blockade Space 1/2", 0x3a2358, 0x3a2558 },
    { L"Blockade Space 2/2", 0x3a2558, 0x3a25f8 },
};

const sDescTreeNode SVCPLUSA_A_STAGES_COLLECTION[] =
{
    { L"Factory Abandoned", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_FACTORY_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_FACTORY_PALETTES) },
    { L"Station Obsolete", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_STATION_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_STATION_PALETTES) },
    { L"Nude Place", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_NUDE_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_NUDE_PALETTES) },
    { L"Green Forest", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_FOREST_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_FOREST_PALETTES) },
    { L"Crystal Shrine", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_CRYSTAL_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_CRYSTAL_PALETTES) },
    { L"Power Generation Room", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_POWER_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_POWER_PALETTES) },
    { L"The Temple", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_TEMPLE_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_TEMPLE_PALETTES) },
    { L"Heaven", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_HEAVEN_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_HEAVEN_PALETTES) },
    { L"Hell", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_HELL_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_HELL_PALETTES) },
    { L"Blockade Space", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_BLOCKADE_PALETTES, ARRAYSIZE(SVCPLUSA_A_STAGES_BLOCKADE_PALETTES) },
};

const sGame_PaletteDataset SVCPLUSA_A_BONUS_SELECT_PALETTES[] =
{
    { L"Character Select BG", 0x3afad8, 0x3afb18, indexSVCSprites_Bonus, 0x01, &pairFullyLinkedNode },
    { L"Character Select boxes", 0x3aff38, 0x3aff58, indexSVCSprites_Bonus, 0x02 },
    { L"Character Select Screen Text", 0x3aff58 ,0x3aff98, indexSVCSprites_Bonus, 0x05 },
    { L"Character Select Screen SNK side", 0x3afb38, 0x3afcb8, indexSVCSprites_Bonus, 0x04 },
    { L"Character Select Screen Capcom side", 0x3afd38, 0x3afeb8, indexSVCSprites_Bonus, 0x03 },
    { L"Character Select Screen Timer", 0x3aff98, 0x3affb8 },
    { L"Character Select Name Display", 0x3affb8, 0x3afff8 },
    { L"Selector Ring P1/P2/CPU", 0x3af938, 0x3afab8 },
};

const sDescTreeNode SVCPLUSA_A_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BONUS_SELECT_PALETTES, ARRAYSIZE(SVCPLUSA_A_BONUS_SELECT_PALETTES) },
};

#define k_pszUnitNameAthena     L"Goddess Athena"
#define k_pszUnitNameZero       L"Zero"

const sDescTreeNode SVCPLUSA_A_UNITS[] =
{
    { L"Kyo", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KYO_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_IORI_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_RYO_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_COLLECTION, ARRAYSIZE(SVCPLUSA_A_TERRY_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_MAI_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KASUMI_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KIM_COLLECTION) },
    { L"Mr. Karate", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_MRKARATE_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_CHOI_COLLECTION) },
    { L"Earthquake", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_COLLECTION) },
    { L"Genjuro", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GENJURO_COLLECTION) },
    { L"Shiki", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SHIKI_COLLECTION) },
    { L"Geese Howard", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_COLLECTION) },
    { L"Mars People", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_COLLECTION) },
    { L"Goenitz", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GOENITZ_COLLECTION) },

    { L"Orochi Iori", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_COLLECTION) },
    { L"Serious Mr. Karate", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_COLLECTION) },
    { k_pszUnitNameAthena, DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_COLLECTION) },

    { L"Ryu", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_COLLECTION, ARRAYSIZE(SVCPLUSA_A_RYU_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KEN_COLLECTION) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_CHUNLI_COLLECTION) },
    { L"Guile", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GUILE_COLLECTION) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DHALSIM_COLLECTION) },
    { L"Boxer", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_COLLECTION, ARRAYSIZE(SVCPLUSA_A_BOXER_COLLECTION) },
    { L"Claw", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_COLLECTION, ARRAYSIZE(SVCPLUSA_A_CLAW_COLLECTION) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SAGAT_COLLECTION) },
    { L"Dictator", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DICTATOR_COLLECTION) },
    { L"Akuma", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_AKUMA_COLLECTION) },
    { L"Hugo", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_HUGO_COLLECTION) },
    { L"Tessa", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_TESSA_COLLECTION) },
    { k_pszUnitNameZero, DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_ZERO_COLLECTION) },
    { L"Demitri", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DEMITRI_COLLECTION) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DAN_COLLECTION) },

    { L"Violent Ken", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_COLLECTION) },
    { L"Shin Akuma", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_COLLECTION) },
    { L"Red Arremer", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_COLLECTION, ARRAYSIZE(SVCPLUSA_A_REDARREMER_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_COLLECTION, ARRAYSIZE(SVCPLUSA_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BONUS_COLLECTION, ARRAYSIZE(SVCPLUSA_A_BONUS_COLLECTION) },
};

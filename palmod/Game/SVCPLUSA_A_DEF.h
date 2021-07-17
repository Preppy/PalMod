#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SVCPLUSA_A_KYO_PALETTE_A. 
// * Update every array using SVCPLUSA_A_NUMUNIT below
// That should be it.  Good luck.

enum SupportedSVC_A_PaletteListIndex
{
    indexSVC_A_Kyo,
    indexSVC_A_Iori,
    indexSVC_A_Ryo,
    indexSVC_A_Terry,
    indexSVC_A_Mai,
    indexSVC_A_Kasumi,
    indexSVC_A_Kim,
    indexSVC_A_MrKarate,
    indexSVC_A_Choi,
    indexSVC_A_Earthquake,
    indexSVC_A_Genjuro,
    indexSVC_A_Shiki,
    indexSVC_A_GeeseHoward,
    indexSVC_A_MarsPeople,
    indexSVC_A_Goenitz,

    indexSVC_A_OrochiIori,
    indexSVC_A_SeriousMrKarate,
    indexSVC_A_GoddessAthena,

    indexSVC_A_Ryu,
    indexSVC_A_Ken,
    indexSVC_A_ChunLi,
    indexSVC_A_Guile,
    indexSVC_A_Dhalsim,
    indexSVC_A_Boxer,
    indexSVC_A_Claw,
    indexSVC_A_Sagat,
    indexSVC_A_Dictator,
    indexSVC_A_Akuma,
    indexSVC_A_Hugo,
    indexSVC_A_Tessa,
    indexSVC_A_Zero,
    indexSVC_A_Demitri,
    indexSVC_A_Dan,

    indexSVC_A_ViolentKen,
    indexSVC_A_ShinAkuma,
    indexSVC_A_RedArremer,

    indexSVC_A_Stages,
    indexSVC_A_Bonus,

    indexSVC_A_Last,
};

constexpr auto SVCPLUSA_A_NUMUNIT = indexSVC_A_Last;
#define SVCPLUSA_A_EXTRALOC SVCPLUSA_A_NUMUNIT

const UINT16 SVCPLUSA_A_IMGIDS_USED[] =
{
    indexKOF98Sprites_Kyo,
    indexKOF98Sprites_Ryo,
    indexKOF98Sprites_Terry,
    indexKOF98Sprites_Mai,
    indexKOF98Sprites_Kim,
    indexKOF98Sprites_Choi,

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
    { L"Kyo", 0x364538, 0x364558, indexKOF98Sprites_Kyo },
    { L"Fire Effect 1", 0x364558, 0x364578, indexKOF98Sprites_Kyo },
    { L"Fire Effect 2", 0x364578, 0x364598, indexKOF98Sprites_Kyo },
    { L"Electric Shock Effect", 0x364598, 0x3645b8, indexKOF98Sprites_Kyo },
    { L"Red Arremer Transformation", 0x3645b8, 0x3645d8, indexSVCSprites_Kyo, 4 },
    { L"Athena Transformation", 0x3645d8, 0x3645f8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0x3645f8, 0x364618, indexKOF98Sprites_Kyo },
    { L"Midnight Bliss", 0x364618, 0x364638, indexSVCSprites_Kyo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_KICK_PALETTES[] =
{
    { L"Kyo", 0x364738, 0x364758, indexKOF98Sprites_Kyo },
    { L"Fire Effect 1", 0x364758, 0x364778, indexKOF98Sprites_Kyo },
    { L"Fire Effect 2", 0x364778, 0x364798, indexKOF98Sprites_Kyo },
    { L"Electric Shock Effect", 0x364798, 0x3647b8, indexKOF98Sprites_Kyo },
    { L"Red Arremer Transformation", 0x3647b8, 0x3647d8, indexSVCSprites_Kyo, 4 },
    { L"Athena Transformation", 0x3647d8, 0x3647f8, indexSVCSprites_Kyo, 5 },
    { L"Soul Palette", 0x3647f8, 0x364818, indexKOF98Sprites_Kyo },
    { L"Midnight Bliss", 0x364818, 0x364838, indexSVCSprites_Kyo, 7 },
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
    { L"Red Arremer Transformation", 0x3655b8, 0x3655d8, indexSVCSprites_Iori, 4 },
    { L"Athena Transformation", 0x3655d8, 0x3655f8, indexSVCSprites_Iori, 5 },
    { L"Soul Palette", 0x3655f8, 0x365618, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0x365618, 0x365638, indexSVCSprites_Iori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_KICK_PALETTES[] =
{
    { L"Iori", 0x365738, 0x365758, indexSVCSprites_Iori },
    { L"Fire Effect 1", 0x365758, 0x365778, indexSVCSprites_Iori },
    { L"Fire Effect 2", 0x365778, 0x365798, indexSVCSprites_Iori },
    { L"Electric Shock Effect", 0x365798, 0x3657b8, indexSVCSprites_Iori },
    { L"Red Arremer Transformation", 0x3657b8, 0x3657d8, indexSVCSprites_Iori, 4 },
    { L"Athena Transformation", 0x3657d8, 0x3657f8, indexSVCSprites_Iori , 5},
    { L"Soul Palette", 0x3657f8, 0x365818, indexSVCSprites_Iori },
    { L"Midnight Bliss", 0x365818, 0x365838, indexSVCSprites_Iori, 7 },
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
    { L"Ryo", 0x366538, 0x366558, indexKOF98Sprites_Ryo },
    { L"Unused: Fire Effect 1", 0x366558, 0x366578, indexKOF98Sprites_Ryo },
    { L"Unused: Fire Effect 2", 0x366578, 0x366598, indexKOF98Sprites_Ryo },
    { L"Electric Shock Effect", 0x366598, 0x3665b8, indexKOF98Sprites_Ryo },
    { L"Red Arremer Transformation", 0x3665b8, 0x3665d8, indexSVCSprites_Ryo, 4 },
    { L"Athena Transformation", 0x3665d8, 0x3665f8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0x3665f8, 0x366618, indexKOF98Sprites_Ryo },
    { L"Midnight Bliss", 0x366618, 0x366638, indexSVCSprites_Ryo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_KICK_PALETTES[] =
{
    { L"Ryo", 0x366738, 0x366758, indexKOF98Sprites_Ryo },
    { L"Unused: Fire Effect 1", 0x366758, 0x366778, indexKOF98Sprites_Ryo },
    { L"Unused: Fire Effect 2", 0x366778, 0x366798, indexKOF98Sprites_Ryo },
    { L"Electric Shock Effect", 0x366798, 0x3667b8, indexKOF98Sprites_Ryo },
    { L"Red Arremer Transformation", 0x3667b8, 0x3667d8, indexSVCSprites_Ryo, 4 },
    { L"Athena Transformation", 0x3667d8, 0x3667f8, indexSVCSprites_Ryo, 5 },
    { L"Soul Palette", 0x3667f8, 0x366818, indexKOF98Sprites_Ryo },
    { L"Midnight Bliss", 0x366818, 0x366838, indexSVCSprites_Ryo, 7 },
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
    { L"Terry", 0x367538, 0x367558, indexKOF98Sprites_Terry },
    { L"Unused: Fire Effect 1", 0x367558, 0x367578, indexKOF98Sprites_Terry },
    { L"Unused: Fire Effect 2", 0x367578, 0x367598, indexKOF98Sprites_Terry },
    { L"Electric Shock Effect", 0x367598, 0x3675b8, indexKOF98Sprites_Terry },
    { L"Red Arremer Transformation", 0x3675b8, 0x3675d8, indexSVCSprites_Terry, 4 },
    { L"Athena Transformation", 0x3675d8, 0x3675f8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0x3675f8, 0x367618, indexKOF98Sprites_Terry },
    { L"Midnight Bliss", 0x367618, 0x367638, indexSVCSprites_Terry, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_KICK_PALETTES[] =
{
    { L"Terry", 0x367738, 0x367758, indexKOF98Sprites_Terry },
    { L"Unused: Fire Effect 1", 0x367758, 0x367778, indexKOF98Sprites_Terry },
    { L"Unused: Fire Effect 2", 0x367778, 0x367798, indexKOF98Sprites_Terry },
    { L"Electric Shock Effect", 0x367798, 0x3677b8, indexKOF98Sprites_Terry },
    { L"Red Arremer Transformation", 0x3677b8, 0x3677d8, indexSVCSprites_Terry, 4 },
    { L"Athena Transformation", 0x3677d8, 0x3677f8, indexSVCSprites_Terry, 5 },
    { L"Soul Palette", 0x3677f8, 0x367818, indexKOF98Sprites_Terry },
    { L"Midnight Bliss", 0x367818, 0x367838, indexSVCSprites_Terry, 7 },
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
    { L"Mai", 0x368538, 0x368558, indexKOF98Sprites_Mai },
    { L"Fire Effect 1", 0x368558, 0x368578, indexKOF98Sprites_Mai },
    { L"Unused: Fire Effect 2", 0x368578, 0x368598, indexKOF98Sprites_Mai },
    { L"Electric Shock Effect", 0x368598, 0x3685b8, indexKOF98Sprites_Mai },
    { L"Red Arremer Transformation", 0x3685b8, 0x3685d8, indexSVCSprites_Mai, 4 },
    { L"Athena Transformation", 0x3685d8, 0x3685f8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0x3685f8, 0x368618, indexKOF98Sprites_Mai },
    { L"Midnight Bliss", 0x368618, 0x368638, indexSVCSprites_Mai, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_KICK_PALETTES[] =
{
    { L"Mai", 0x368738, 0x368758, indexKOF98Sprites_Mai },
    { L"Fire Effect 1", 0x368758, 0x368778, indexKOF98Sprites_Mai },
    { L"Unused: Fire Effect 2", 0x368778, 0x368798, indexKOF98Sprites_Mai },
    { L"Electric Shock Effect", 0x368798, 0x3687b8, indexKOF98Sprites_Mai },
    { L"Red Arremer Transformation", 0x3687b8, 0x3687d8, indexSVCSprites_Mai, 4 },
    { L"Athena Transformation", 0x3687d8, 0x3687f8, indexSVCSprites_Mai, 5 },
    { L"Soul Palette", 0x3687f8, 0x368818, indexKOF98Sprites_Mai },
    { L"Midnight Bliss", 0x368818, 0x368838, indexSVCSprites_Mai, 7 },
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
    { L"Unused: Fire Effect 2", 0x369578, 0x369598, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0x369598, 0x3695b8, indexSVCSprites_Kasumi },
    { L"Red Arremer Transformation", 0x3695b8, 0x3695d8, indexSVCSprites_Kasumi, 4 },
    { L"Athena Transformation", 0x3695d8, 0x3695f8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0x3695f8, 0x369618, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0x369618, 0x369638, indexSVCSprites_Kasumi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_KICK_PALETTES[] =
{
    { L"Kasumi", 0x369738, 0x369758, indexSVCSprites_Kasumi, 0x00, &pairNext },
    { L"Umbrella", 0x369758, 0x369778, indexSVCSprites_Kasumi, 0x01 },
    { L"Unused: Fire Effect 2", 0x369778, 0x369798, indexSVCSprites_Kasumi },
    { L"Electric Shock Effect", 0x369798, 0x3697b8, indexSVCSprites_Kasumi },
    { L"Red Arremer Transformation", 0x3697b8, 0x3697d8, indexSVCSprites_Kasumi, 4 },
    { L"Athena Transformation", 0x3697d8, 0x3697f8, indexSVCSprites_Kasumi, 5 },
    { L"Soul Palette", 0x3697f8, 0x369818, indexSVCSprites_Kasumi },
    { L"Midnight Bliss", 0x369818, 0x369838, indexSVCSprites_Kasumi, 7 },
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
    { L"Kim", 0x36a538, 0x36a558, indexKOF98Sprites_Kim },
    { L"Unused: Fire Effect 1", 0x36a558, 0x36a578, indexKOF98Sprites_Kim },
    { L"Unused: Fire Effect 2", 0x36a578, 0x36a598, indexKOF98Sprites_Kim },
    { L"Electric Shock Effect", 0x36a598, 0x36a5b8, indexKOF98Sprites_Kim },
    { L"Red Arremer Transformation", 0x36a5b8, 0x36a5d8, indexSVCSprites_Kim, 4 },
    { L"Athena Transformation", 0x36a5d8, 0x36a5f8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0x36a5f8, 0x36a618, indexKOF98Sprites_Kim },
    { L"Midnight Bliss", 0x36a618, 0x36a638, indexSVCSprites_Kim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_KICK_PALETTES[] =
{
    { L"Kim", 0x36a738, 0x36a758, indexKOF98Sprites_Kim },
    { L"Unused: Fire Effect 1", 0x36a758, 0x36a778, indexKOF98Sprites_Kim },
    { L"Unused: Fire Effect 2", 0x36a778, 0x36a798, indexKOF98Sprites_Kim },
    { L"Electric Shock Effect", 0x36a798, 0x36a7b8, indexKOF98Sprites_Kim },
    { L"Red Arremer Transformation", 0x36a7b8, 0x36a7d8, indexSVCSprites_Kim, 4 },
    { L"Athena Transformation", 0x36a7d8, 0x36a7f8, indexSVCSprites_Kim, 5 },
    { L"Soul Palette", 0x36a7f8, 0x36a818, indexKOF98Sprites_Kim },
    { L"Midnight Bliss", 0x36a818, 0x36a838, indexSVCSprites_Kim, 7 },
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
    { L"Unused: Fire Effect 1", 0x36b558, 0x36b578, indexSVCSprites_MrKarate },
    { L"Unused: Fire Effect 2", 0x36b578, 0x36b598, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0x36b598, 0x36b5b8, indexSVCSprites_MrKarate },
    { L"Red Arremer Transformation", 0x36b5b8, 0x36b5d8, indexSVCSprites_MrKarate, 4 },
    { L"Athena Transformation", 0x36b5d8, 0x36b5f8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0x36b5f8, 0x36b618, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0x36b618, 0x36b638, indexSVCSprites_MrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_KICK_PALETTES[] =
{
    { L"Mr. Karate", 0x36b738, 0x36b758, indexSVCSprites_MrKarate },
    { L"Unused: Fire Effect 1", 0x36b758, 0x36b778, indexSVCSprites_MrKarate },
    { L"Unused: Fire Effect 2", 0x36b778, 0x36b798, indexSVCSprites_MrKarate },
    { L"Electric Shock Effect", 0x36b798, 0x36b7b8, indexSVCSprites_MrKarate },
    { L"Red Arremer Transformation", 0x36b7b8, 0x36b7d8, indexSVCSprites_MrKarate, 4 },
    { L"Athena Transformation", 0x36b7d8, 0x36b7f8, indexSVCSprites_MrKarate, 5 },
    { L"Soul Palette", 0x36b7f8, 0x36b818, indexSVCSprites_MrKarate },
    { L"Midnight Bliss", 0x36b818, 0x36b838, indexSVCSprites_MrKarate, 7 },
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
    { L"Choi", 0x36c538, 0x36c558, indexKOF98Sprites_Choi },
    { L"Unused: Fire Effect 1", 0x36c558, 0x36c578, indexKOF98Sprites_Choi },
    { L"Unused: Fire Effect 2", 0x36c578, 0x36c598, indexKOF98Sprites_Choi },
    { L"Electric Shock Effect", 0x36c598, 0x36c5b8, indexKOF98Sprites_Choi },
    { L"Red Arremer Transformation", 0x36c5b8, 0x36c5d8, indexSVCSprites_Choi, 4 },
    { L"Athena Transformation", 0x36c5d8, 0x36c5f8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0x36c5f8, 0x36c618, indexKOF98Sprites_Choi },
    { L"Midnight Bliss", 0x36c618, 0x36c638, indexSVCSprites_Choi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_KICK_PALETTES[] =
{
    { L"Choi", 0x36c738, 0x36c758, indexKOF98Sprites_Choi },
    { L"Unused: Fire Effect 1", 0x36c758, 0x36c778, indexKOF98Sprites_Choi },
    { L"Unused: Fire Effect 2", 0x36c778, 0x36c798, indexKOF98Sprites_Choi },
    { L"Electric Shock Effect", 0x36c798, 0x36c7b8, indexKOF98Sprites_Choi },
    { L"Red Arremer Transformation", 0x36c7b8, 0x36c7d8, indexSVCSprites_Choi, 4 },
    { L"Athena Transformation", 0x36c7d8, 0x36c7f8, indexSVCSprites_Choi, 5 },
    { L"Soul Palette", 0x36c7f8, 0x36c818, indexKOF98Sprites_Choi },
    { L"Midnight Bliss", 0x36c818, 0x36c838, indexSVCSprites_Choi, 7 },
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
    { L"Unused: Fire Effect 2", 0x36d578, 0x36d598, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0x36d598, 0x36d5b8, indexSVCSprites_Earthquake },
    { L"Red Arremer Transformation", 0x36d5b8, 0x36d5d8, indexSVCSprites_Earthquake, 4 },
    { L"Athena Transformation", 0x36d5d8, 0x36d5f8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0x36d5f8, 0x36d618, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0x36d618, 0x36d638, indexSVCSprites_Earthquake, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES[] =
{
    { L"Earthquake", 0x36d738, 0x36d758, indexSVCSprites_Earthquake },
    { L"Victory Pose Minions", 0x36d758, 0x36d778, indexSVCSprites_Earthquake, 0x08 },
    { L"Unused: Fire Effect 2", 0x36d778, 0x36d798, indexSVCSprites_Earthquake },
    { L"Electric Shock Effect", 0x36d798, 0x36d7b8, indexSVCSprites_Earthquake },
    { L"Red Arremer Transformation", 0x36d7b8, 0x36d7d8, indexSVCSprites_Earthquake, 4 },
    { L"Athena Transformation", 0x36d7d8, 0x36d7f8, indexSVCSprites_Earthquake, 5 },
    { L"Soul Palette", 0x36d7f8, 0x36d818, indexSVCSprites_Earthquake },
    { L"Midnight Bliss", 0x36d818, 0x36d838, indexSVCSprites_Earthquake, 7 },
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
    { L"Unused: Fire Effect 2", 0x36e578, 0x36e598, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0x36e598, 0x36e5b8, indexSVCSprites_Genjuro },
    { L"Red Arremer Transformation", 0x36e5b8, 0x36e5d8, indexSVCSprites_Genjuro, 4 },
    { L"Athena Transformation", 0x36e5d8, 0x36e5f8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0x36e5f8, 0x36e618, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0x36e618, 0x36e638, indexSVCSprites_Genjuro, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_KICK_PALETTES[] =
{
    { L"Genjuro", 0x36e738, 0x36e758, indexSVCSprites_Genjuro },
    { L"Exceed", 0x36e758, 0x36e778, indexSVCSprites_Genjuro },
    { L"Unused: Fire Effect 2", 0x36e778, 0x36e798, indexSVCSprites_Genjuro },
    { L"Electric Shock Effect", 0x36e798, 0x36e7b8, indexSVCSprites_Genjuro },
    { L"Red Arremer Transformation", 0x36e7b8, 0x36e7d8, indexSVCSprites_Genjuro, 4 },
    { L"Athena Transformation", 0x36e7d8, 0x36e7f8, indexSVCSprites_Genjuro, 5 },
    { L"Soul Palette", 0x36e7f8, 0x36e818, indexSVCSprites_Genjuro },
    { L"Midnight Bliss", 0x36e818, 0x36e838, indexSVCSprites_Genjuro, 7},
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
    { L"Fire Effect 1: Absorbing Darkness Transmigration Lacerations", 0x36f558, 0x36f578, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Ethereal Assailing", 0x36f578, 0x36f598, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0x36f598, 0x36f5b8, indexSVCSprites_Shiki },
    { L"Red Arremer Transformation", 0x36f5b8, 0x36f5d8, indexSVCSprites_Shiki, 4 },
    { L"Athena Transformation", 0x36f5d8, 0x36f5f8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0x36f5f8, 0x36f618, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0x36f618, 0x36f638, indexSVCSprites_Shiki, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_KICK_PALETTES[] =
{
    { L"Shiki", 0x36f738, 0x36f758, indexSVCSprites_Shiki },
    { L"Fire Effect 1: Absorbing Darkness Transmigration Lacerations", 0x36f758, 0x36f778, indexSVCSprites_Shiki, 0x08 },
    { L"Fire Effect 2: Ethereal Assailing", 0x36f778, 0x36f798, indexSVCSprites_Shiki, 0x09 },
    { L"Electric Shock Effect", 0x36f798, 0x36f7b8, indexSVCSprites_Shiki },
    { L"Red Arremer Transformation", 0x36f7b8, 0x36f7d8, indexSVCSprites_Shiki, 4 },
    { L"Athena Transformation", 0x36f7d8, 0x36f7f8, indexSVCSprites_Shiki, 5 },
    { L"Soul Palette", 0x36f7f8, 0x36f818, indexSVCSprites_Shiki },
    { L"Midnight Bliss", 0x36f818, 0x36f838, indexSVCSprites_Shiki, 7 },
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
    { L"Unused: Fire Effect 1", 0x370558, 0x370578, indexSVCSprites_GeeseHoward },
    { L"Unused: Fire Effect 2", 0x370578, 0x370598, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0x370598, 0x3705b8, indexSVCSprites_GeeseHoward },
    { L"Red Arremer Transformation", 0x3705b8, 0x3705d8, indexSVCSprites_GeeseHoward, 4 },
    { L"Athena Transformation", 0x3705d8, 0x3705f8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0x3705f8, 0x370618, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0x370618, 0x370638, indexSVCSprites_GeeseHoward, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES[] =
{
    { L"Geese Howard", 0x370738, 0x370758, indexSVCSprites_GeeseHoward },
    { L"Unused: Fire Effect 1", 0x370758, 0x370778, indexSVCSprites_GeeseHoward },
    { L"Unused: Fire Effect 2", 0x370778, 0x370798, indexSVCSprites_GeeseHoward },
    { L"Electric Shock Effect", 0x370798, 0x3707b8, indexSVCSprites_GeeseHoward },
    { L"Red Arremer Transformation", 0x3707b8, 0x3707d8, indexSVCSprites_GeeseHoward, 4 },
    { L"Athena Transformation", 0x3707d8, 0x3707f8, indexSVCSprites_GeeseHoward, 5 },
    { L"Soul Palette", 0x3707f8, 0x370818, indexSVCSprites_GeeseHoward },
    { L"Midnight Bliss", 0x370818, 0x370838, indexSVCSprites_GeeseHoward, 7 },
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
    { L"Unused: Fire Effect 1", 0x371558, 0x371578, indexSVCSprites_MarsPeople },
    { L"Unused: Fire Effect 2", 0x371578, 0x371598, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0x371598, 0x3715b8, indexSVCSprites_MarsPeople },
    { L"Red Arremer Transformation", 0x3715b8, 0x3715d8, indexSVCSprites_MarsPeople, 4 },
    { L"Athena Transformation", 0x3715d8, 0x3715f8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0x3715f8, 0x371618, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0x371618, 0x371638, indexSVCSprites_MarsPeople, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES[] =
{
    { L"Mars People", 0x371738, 0x371758, indexSVCSprites_MarsPeople },
    { L"Unused: Fire Effect 1", 0x371758, 0x371778, indexSVCSprites_MarsPeople },
    { L"Unused: Fire Effect 2", 0x371778, 0x371798, indexSVCSprites_MarsPeople },
    { L"Electric Shock Effect", 0x371798, 0x3717b8, indexSVCSprites_MarsPeople },
    { L"Red Arremer Transformation", 0x3717b8, 0x3717d8, indexSVCSprites_MarsPeople, 4 },
    { L"Athena Transformation", 0x3717d8, 0x3717f8, indexSVCSprites_MarsPeople, 5 },
    { L"Soul Palette", 0x3717f8, 0x371818, indexSVCSprites_MarsPeople },
    { L"Midnight Bliss", 0x371818, 0x371838, indexSVCSprites_MarsPeople, 7 },
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
    { L"Unused: Fire Effect 1", 0x372558, 0x372578, indexSVCSprites_Goenitz },
    { L"Unused: Fire Effect 2", 0x372578, 0x372598, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0x372598, 0x3725b8, indexSVCSprites_Goenitz },
    { L"Red Arremer Transformation", 0x3725b8, 0x3725d8, indexSVCSprites_Goenitz, 4 },
    { L"Athena Transformation", 0x3725d8, 0x3725f8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0x3725f8, 0x372618, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0x372618, 0x372638, indexSVCSprites_Goenitz, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_KICK_PALETTES[] =
{
    { L"Goenitz", 0x372738, 0x372758, indexSVCSprites_Goenitz },
    { L"Unused: Fire Effect 1", 0x372758, 0x372778, indexSVCSprites_Goenitz },
    { L"Unused: Fire Effect 2", 0x372778, 0x372798, indexSVCSprites_Goenitz },
    { L"Electric Shock Effect", 0x372798, 0x3727b8, indexSVCSprites_Goenitz },
    { L"Red Arremer Transformation", 0x3727b8, 0x3727d8, indexSVCSprites_Goenitz, 4 },
    { L"Athena Transformation", 0x3727d8, 0x3727f8, indexSVCSprites_Goenitz, 5 },
    { L"Soul Palette", 0x3727f8, 0x372818, indexSVCSprites_Goenitz },
    { L"Midnight Bliss", 0x372818, 0x372838, indexSVCSprites_Goenitz, 7 },
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
    { L"Milk Crown", 0x373558, 0x373578, indexSVCSprites_GoddessAthena, 0x1 },
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
    { L"Milk Crown", 0x373758, 0x373778, indexSVCSprites_GoddessAthena, 0x1 },
    { L"Poseidon Rage", 0x373778, 0x373798, indexSVCSprites_GoddessAthena, 0x2 },
    { L"Electric Shock Effect", 0x373798, 0x3737b8, indexSVCSprites_GoddessAthena },
    { L"Unused: Tree and Bug Copy", 0x3737b8, 0x3737d8 },
    { L"Tree and Bug", 0x3737d8, 0x3737f8, indexSVCSprites_GoddessAthena, 0x3 },
    { L"Soul Palette", 0x3737f8, 0x373818, indexSVCSprites_GoddessAthena },
    { L"Midnight Bliss", 0x373818, 0x373838, indexSVCSprites_GoddessAthena, 7 },
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
    { L"Unused: Fire Effect 1", 0x374558, 0x374578, indexSVCSprites_Ryu },
    { L"Unused: Fire Effect 2", 0x374578, 0x374598, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0x374598, 0x3745b8, indexSVCSprites_Ryu },
    { L"Red Arremer Transformation", 0x3745b8, 0x3745d8, indexSVCSprites_Ryu, 4 },
    { L"Athena Transformation", 0x3745d8, 0x3745f8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0x3745f8, 0x374618, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0x374618, 0x374638, indexSVCSprites_Ryu, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_KICK_PALETTES[] =
{
    { L"Ryu", 0x374738, 0x374758, indexSVCSprites_Ryu },
    { L"Unused: Fire Effect 1", 0x374758, 0x374778, indexSVCSprites_Ryu },
    { L"Unused: Fire Effect 2", 0x374778, 0x374798, indexSVCSprites_Ryu },
    { L"Electric Shock Effect", 0x374798, 0x3747b8, indexSVCSprites_Ryu },
    { L"Red Arremer Transformation", 0x3747b8, 0x3747d8, indexSVCSprites_Ryu, 4 },
    { L"Athena Transformation", 0x3747d8, 0x3747f8, indexSVCSprites_Ryu, 5 },
    { L"Soul Palette", 0x3747f8, 0x374818, indexSVCSprites_Ryu },
    { L"Midnight Bliss", 0x374818, 0x374838, indexSVCSprites_Ryu, 7 },
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
    { L"Unused: Fire Effect 1", 0x375558, 0x375578, indexSVCSprites_Ken },
    { L"Unused: Fire Effect 2", 0x375578, 0x375598, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0x375598, 0x3755b8, indexSVCSprites_Ken },
    { L"Red Arremer Transformation", 0x3755b8, 0x3755d8, indexSVCSprites_Ken, 4 },
    { L"Athena Transformation", 0x3755d8, 0x3755f8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0x3755f8, 0x375618, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0x375618, 0x375638, indexSVCSprites_Ken, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_KICK_PALETTES[] =
{
    { L"Ken", 0x375738, 0x375758, indexSVCSprites_Ken },
    { L"Unused: Fire Effect 1", 0x375758, 0x375778, indexSVCSprites_Ken },
    { L"Unused: Fire Effect 2", 0x375778, 0x375798, indexSVCSprites_Ken },
    { L"Electric Shock Effect", 0x375798, 0x3757b8, indexSVCSprites_Ken },
    { L"Red Arremer Transformation", 0x3757b8, 0x3757d8, indexSVCSprites_Ken, 4 },
    { L"Athena Transformation", 0x3757d8, 0x3757f8, indexSVCSprites_Ken, 5 },
    { L"Soul Palette", 0x3757f8, 0x375818, indexSVCSprites_Ken },
    { L"Midnight Bliss", 0x375818, 0x375838, indexSVCSprites_Ken, 7 },
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
    { L"Unused: Fire Effect 1", 0x376558, 0x376578, indexSVCSprites_ChunLi },
    { L"Unused: Fire Effect 2", 0x376578, 0x376598, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0x376598, 0x3765b8, indexSVCSprites_ChunLi },
    { L"Red Arremer Transformation", 0x3765b8, 0x3765d8, indexSVCSprites_ChunLi, 4 },
    { L"Athena Transformation", 0x3765d8, 0x3765f8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0x3765f8, 0x376618, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0x376618, 0x376638, indexSVCSprites_ChunLi, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_KICK_PALETTES[] =
{
    { L"Chun-Li", 0x376738, 0x376758, indexSVCSprites_ChunLi },
    { L"Unused: Fire Effect 1", 0x376758, 0x376778, indexSVCSprites_ChunLi },
    { L"Unused: Fire Effect 2", 0x376778, 0x376798, indexSVCSprites_ChunLi },
    { L"Electric Shock Effect", 0x376798, 0x3767b8, indexSVCSprites_ChunLi },
    { L"Red Arremer Transformation", 0x3767b8, 0x3767d8, indexSVCSprites_ChunLi, 4 },
    { L"Athena Transformation", 0x3767d8, 0x3767f8, indexSVCSprites_ChunLi, 5 },
    { L"Soul Palette", 0x3767f8, 0x376818, indexSVCSprites_ChunLi },
    { L"Midnight Bliss", 0x376818, 0x376838, indexSVCSprites_ChunLi, 7 },
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
    { L"Unused: Fire Effect 1", 0x377558, 0x377578, indexSVCSprites_Guile },
    { L"Unused: Fire Effect 2", 0x377578, 0x377598, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0x377598, 0x3775b8, indexSVCSprites_Guile },
    { L"Red Arremer Transformation", 0x3775b8, 0x3775d8, indexSVCSprites_Guile, 4 },
    { L"Athena Transformation", 0x3775d8, 0x3775f8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0x3775f8, 0x377618, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0x377618, 0x377638, indexSVCSprites_Guile, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_KICK_PALETTES[] =
{
    { L"Guile", 0x377738, 0x377758, indexSVCSprites_Guile },
    { L"Unused: Fire Effect 1", 0x377758, 0x377778, indexSVCSprites_Guile },
    { L"Unused: Fire Effect 2", 0x377778, 0x377798, indexSVCSprites_Guile },
    { L"Electric Shock Effect", 0x377798, 0x3777b8, indexSVCSprites_Guile },
    { L"Red Arremer Transformation", 0x3777b8, 0x3777d8, indexSVCSprites_Guile, 4 },
    { L"Athena Transformation", 0x3777d8, 0x3777f8, indexSVCSprites_Guile, 5 },
    { L"Soul Palette", 0x3777f8, 0x377818, indexSVCSprites_Guile },
    { L"Midnight Bliss", 0x377818, 0x377838, indexSVCSprites_Guile, 7 },
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
    { L"Unused: Fire Effect 1", 0x378558, 0x378578, indexSVCSprites_Dhalsim },
    { L"Unused: Fire Effect 2", 0x378578, 0x378598, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0x378598, 0x3785b8, indexSVCSprites_Dhalsim },
    { L"Red Arremer Transformation", 0x3785b8, 0x3785d8, indexSVCSprites_Dhalsim, 4 },
    { L"Athena Transformation", 0x3785d8, 0x3785f8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0x3785f8, 0x378618, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0x378618, 0x378638, indexSVCSprites_Dhalsim, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_KICK_PALETTES[] =
{
    { L"Dhalsim", 0x378738, 0x378758, indexSVCSprites_Dhalsim },
    { L"Unused: Fire Effect 1", 0x378758, 0x378778, indexSVCSprites_Dhalsim },
    { L"Unused: Fire Effect 2", 0x378778, 0x378798, indexSVCSprites_Dhalsim },
    { L"Electric Shock Effect", 0x378798, 0x3787b8, indexSVCSprites_Dhalsim },
    { L"Red Arremer Transformation", 0x3787b8, 0x3787d8, indexSVCSprites_Dhalsim, 4 },
    { L"Athena Transformation", 0x3787d8, 0x3787f8, indexSVCSprites_Dhalsim, 5 },
    { L"Soul Palette", 0x3787f8, 0x378818, indexSVCSprites_Dhalsim },
    { L"Midnight Bliss", 0x378818, 0x378838, indexSVCSprites_Dhalsim, 7 },
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
    { L"Unused: Fire Effect 2", 0x379578, 0x379598, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0x379598, 0x3795b8, indexSVCSprites_Boxer },
    { L"Red Arremer Transformation", 0x3795b8, 0x3795d8, indexSVCSprites_Boxer, 4 },
    { L"Athena Transformation", 0x3795d8, 0x3795f8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0x3795f8, 0x379618, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0x379618, 0x379638, indexSVCSprites_Boxer, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_KICK_PALETTES[] =
{
    { L"Boxer", 0x379738, 0x379758, indexSVCSprites_Boxer },
    { L"Fire Effect 1", 0x379758, 0x379778, indexSVCSprites_Boxer },
    { L"Unused: Fire Effect 2", 0x379778, 0x379798, indexSVCSprites_Boxer },
    { L"Electric Shock Effect", 0x379798, 0x3797b8, indexSVCSprites_Boxer },
    { L"Red Arremer Transformation", 0x3797b8, 0x3797d8, indexSVCSprites_Boxer, 4 },
    { L"Athena Transformation", 0x3797d8, 0x3797f8, indexSVCSprites_Boxer, 5 },
    { L"Soul Palette", 0x3797f8, 0x379818, indexSVCSprites_Boxer },
    { L"Midnight Bliss", 0x379818, 0x379838, indexSVCSprites_Boxer, 7 },
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
    { L"Unused: Fire Effect 2", 0x37a578, 0x37a598, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0x37a598, 0x37a5b8, indexSVCSprites_Claw },
    { L"Red Arremer Transformation", 0x37a5b8, 0x37a5d8, indexSVCSprites_Claw, 4 },
    { L"Athena Transformation", 0x37a5d8, 0x37a5f8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0x37a5f8, 0x37a618, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0x37a618, 0x37a638, indexSVCSprites_Claw, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_KICK_PALETTES[] =
{
    { L"Claw", 0x37a738, 0x37a758, indexSVCSprites_Claw },
    { L"Fire Effect 1", 0x37a758, 0x37a778, indexSVCSprites_Claw },
    { L"Unused: Fire Effect 2", 0x37a778, 0x37a798, indexSVCSprites_Claw },
    { L"Electric Shock Effect", 0x37a798, 0x37a7b8, indexSVCSprites_Claw },
    { L"Red Arremer Transformation", 0x37a7b8, 0x37a7d8, indexSVCSprites_Claw, 4 },
    { L"Athena Transformation", 0x37a7d8, 0x37a7f8, indexSVCSprites_Claw, 5 },
    { L"Soul Palette", 0x37a7f8, 0x37a818, indexSVCSprites_Claw },
    { L"Midnight Bliss", 0x37a818, 0x37a838, indexSVCSprites_Claw, 7 },
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
    { L"Unused: Fire Effect 1", 0x37b558, 0x37b578, indexSVCSprites_Sagat },
    { L"Unused: Fire Effect 2", 0x37b578, 0x37b598, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0x37b598, 0x37b5b8, indexSVCSprites_Sagat },
    { L"Red Arremer Transformation", 0x37b5b8, 0x37b5d8, indexSVCSprites_Sagat, 4 },
    { L"Athena Transformation", 0x37b5d8, 0x37b5f8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0x37b5f8, 0x37b618, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0x37b618, 0x37b638, indexSVCSprites_Sagat, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_KICK_PALETTES[] =
{
    { L"Sagat", 0x37b738, 0x37b758, indexSVCSprites_Sagat },
    { L"Unused: Fire Effect 1", 0x37b758, 0x37b778, indexSVCSprites_Sagat },
    { L"Unused: Fire Effect 2", 0x37b778, 0x37b798, indexSVCSprites_Sagat },
    { L"Electric Shock Effect", 0x37b798, 0x37b7b8, indexSVCSprites_Sagat },
    { L"Red Arremer Transformation", 0x37b7b8, 0x37b7d8, indexSVCSprites_Sagat, 4 },
    { L"Athena Transformation", 0x37b7d8, 0x37b7f8, indexSVCSprites_Sagat, 5 },
    { L"Soul Palette", 0x37b7f8, 0x37b818, indexSVCSprites_Sagat },
    { L"Midnight Bliss", 0x37b818, 0x37b838, indexSVCSprites_Sagat, 7 },
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
    { L"Unused: Fire Effect 1", 0x37c558, 0x37c578, indexSVCSprites_Dictator },
    { L"Unused: Fire Effect 2", 0x37c578, 0x37c598, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0x37c598, 0x37c5b8, indexSVCSprites_Dictator },
    { L"Red Arremer Transformation", 0x37c5b8, 0x37c5d8, indexSVCSprites_Dictator, 4 },
    { L"Athena Transformation", 0x37c5d8, 0x37c5f8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0x37c5f8, 0x37c618, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0x37c618, 0x37c638, indexSVCSprites_Dictator, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_KICK_PALETTES[] =
{
    { L"Dictator", 0x37c738, 0x37c758, indexSVCSprites_Dictator },
    { L"Unused: Fire Effect 1", 0x37c758, 0x37c778, indexSVCSprites_Dictator },
    { L"Unused: Fire Effect 2", 0x37c778, 0x37c798, indexSVCSprites_Dictator },
    { L"Electric Shock Effect", 0x37c798, 0x37c7b8, indexSVCSprites_Dictator },
    { L"Red Arremer Transformation", 0x37c7b8, 0x37c7d8, indexSVCSprites_Dictator, 4 },
    { L"Athena Transformation", 0x37c7d8, 0x37c7f8, indexSVCSprites_Dictator, 5 },
    { L"Soul Palette", 0x37c7f8, 0x37c818, indexSVCSprites_Dictator },
    { L"Midnight Bliss", 0x37c818, 0x37c838, indexSVCSprites_Dictator, 7 },
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
    { L"Unused: Fire Effect 1", 0x37d558, 0x37d578, indexSVCSprites_Akuma },
    { L"Unused: Fire Effect 2", 0x37d578, 0x37d598, indexSVCSprites_Akuma },
    { L"Electric Shock Effect", 0x37d598, 0x37d5b8, indexSVCSprites_Akuma },
    { L"Red Arremer Transformation", 0x37d5b8, 0x37d5d8, indexSVCSprites_Akuma, 4 },
    { L"Athena Transformation", 0x37d5d8, 0x37d5f8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0x37d5f8, 0x37d618, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x37d618, 0x37d638, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_KICK_PALETTES[] =
{
    { L"Akuma", 0x37d738, 0x37d758, indexSVCSprites_Akuma },
    { L"Unused: Fire Effect 1", 0x37d758, 0x37d778, indexSVCSprites_Akuma },
    { L"Unused: Fire Effect 2", 0x37d778, 0x37d798, indexSVCSprites_Akuma },
    { L"Electric Shock Effect", 0x37d798, 0x37d7b8, indexSVCSprites_Akuma },
    { L"Red Arremer Transformation", 0x37d7b8, 0x37d7d8, indexSVCSprites_Akuma, 4 },
    { L"Athena Transformation", 0x37d7d8, 0x37d7f8, indexSVCSprites_Akuma, 5 },
    { L"Soul Palette", 0x37d7f8, 0x37d818, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x37d818, 0x37d838, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394d38, 0x394d58 },
    { L"Effect 1", 0x394d58, 0x394d78 },
    { L"Effect 2", 0x394d78, 0x394d98 },
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
    { L"Poison", 0x37e558, 0x37e578, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0x37e578, 0x37e598, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0x37e598, 0x37e5b8, indexSVCSprites_Hugo },
    { L"Red Arremer Transformation", 0x37e5b8, 0x37e5d8, indexSVCSprites_Hugo, 4 },
    { L"Athena Transformation", 0x37e5d8, 0x37e5f8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0x37e5f8, 0x37e618, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0x37e618, 0x37e638, indexSVCSprites_Hugo, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_KICK_PALETTES[] =
{
    { L"Hugo", 0x37e738, 0x37e758, indexSVCSprites_Hugo },
    { L"Poison", 0x37e758, 0x37e778, indexSVCSprites_Hugo, 0x10 },
    { L"Bao", 0x37e778, 0x37e798, indexSVCSprites_Hugo, 0x11 },
    { L"Electric Shock Effect", 0x37e798, 0x37e7b8, indexSVCSprites_Hugo },
    { L"Red Arremer Transformation", 0x37e7b8, 0x37e7d8, indexSVCSprites_Hugo, 4 },
    { L"Athena Transformation", 0x37e7d8, 0x37e7f8, indexSVCSprites_Hugo, 5 },
    { L"Soul Palette", 0x37e7f8, 0x37e818, indexSVCSprites_Hugo },
    { L"Midnight Bliss", 0x37e818, 0x37e838, indexSVCSprites_Hugo, 7 },
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
    { L"Hugo Punch", 0x3aa638, 0x3aa678, indexSVCSprites_Hugo, 0x21 },
    { L"Hugo Kick", 0x3aa678, 0x3aa6b8, indexSVCSprites_Hugo, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Hugo Punch", 0x3a8638, 0x3a8678, indexSVCSprites_Hugo, 0x20 },
    { L"Hugo Kick", 0x3a8678, 0x3a86b8, indexSVCSprites_Hugo, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES[] =
{
    { L"Poison Punch", 0x3aab38, 0x3aab78, indexSVCSprites_Poison, 0x21 },
    { L"Poison Kick", 0x3aab78, 0x3aabb8, indexSVCSprites_Poison, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES[] =
{
    { L"Poison Punch", 0x3a8c38, 0x3a8c78, indexSVCSprites_Poison, 0x20 },
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
    { L"Exceed", 0x3805b8, 0x3805d8, indexSVCSprites_Zero,  },
    { L"Athena Transformation", 0x3805d8, 0x3805f8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0x3805f8, 0x380618, indexSVCSprites_Zero,  },
    { L"Midnight Bliss", 0x380618, 0x380638, indexSVCSprites_Zero, 7 }, 
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_KICK_PALETTES[] =
{
    { L"Zero Part 1", 0x380738, 0x380758, indexSVCSprites_Zero, 0, &pairHandledInCode },
    { L"Ciel", 0x380758, 0x380778, indexSVCSprites_Zero, 1 },
    { L"Red Arremer Transform 1/2", 0x380778, 0x380798, indexSVCSprites_Zero, 4, &pairHandledInCode },
    { L"Electric Shock Effect", 0x380798, 0x3807b8, indexSVCSprites_Zero  },
    { L"Exceed", 0x3807b8, 0x3807d8, indexSVCSprites_Zero },
    { L"Athena Transformation", 0x3807d8, 0x3807f8, indexSVCSprites_Zero, 5 },
    { L"Soul Palette", 0x3807f8, 0x380818, indexSVCSprites_Zero },
    { L"Midnight Bliss", 0x380818, 0x380838, indexSVCSprites_Zero, 7 },
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
    { L"Athena Transformation", 0x3815d8, 0x3815f8, indexSVCSprites_Demitri, 5 },
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
    { L"Athena Transformation", 0x3817d8, 0x3817f8, indexSVCSprites_Demitri, 5 },
    { L"Soul Palette", 0x3817f8, 0x381818, indexSVCSprites_Demitri },
    { L"Midnight Bliss", 0x381818, 0x381838, indexSVCSprites_Demitri, 7 },
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
    { L"Unused: Fire Effect 1", 0x382558, 0x382578, indexSVCSprites_Dan },
    { L"Unused: Fire Effect 2", 0x382578, 0x382598, indexSVCSprites_Dan },
    { L"Electric Shock Effect", 0x382598, 0x3825b8, indexSVCSprites_Dan },
    { L"Red Arremer Transformation", 0x3825b8, 0x3825d8, indexSVCSprites_Dan },
    { L"Athena Transformation", 0x3825d8, 0x3825f8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0x3825f8, 0x382618, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0x382618, 0x382638, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_KICK_PALETTES[] =
{
    { L"Dan", 0x382738, 0x382758, indexSVCSprites_Dan },
    { L"Unused: Fire Effect 1", 0x382758, 0x382778, indexSVCSprites_Dan },
    { L"Unused: Fire Effect 2", 0x382778, 0x382798, indexSVCSprites_Dan },
    { L"Electric Shock Effect", 0x382798, 0x3827b8, indexSVCSprites_Dan },
    { L"Red Arremer Transformation", 0x3827b8, 0x3827d8, indexSVCSprites_Dan },
    { L"Athena Transformation", 0x3827d8, 0x3827f8, indexSVCSprites_Dan, 5 },
    { L"Soul Palette", 0x3827f8, 0x382818, indexSVCSprites_Dan },
    { L"Midnight Bliss", 0x382818, 0x382838, indexSVCSprites_Dan, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x397538, 0x397558 },
    { L"Effect 1", 0x397558, 0x397578 },
    { L"Effect 2", 0x397578, 0x397598 },
    { L"Effect 3", 0x397598, 0x3975b8 },
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
    { L"Unused: Fire Effect 1", 0x383558, 0x383578, indexSVCSprites_RedArremer },
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
    { L"Unused: Fire Effect 1", 0x383758, 0x383778, indexSVCSprites_RedArremer },
    { L"Woody Pig", 0x383778, 0x383798, indexSVCSprites_RedArremer, 0x10 },
    { L"Electric Shock Effect", 0x383798, 0x3837b8, indexSVCSprites_RedArremer },
    { L"Puchi Devil", 0x3837b8, 0x3837d8, indexSVCSprites_RedArremer, 0x11 },
    { L"Zombie", 0x3837d8, 0x3837f8, indexSVCSprites_RedArremer, 0x12 },
    { L"Soul Palette", 0x3837f8, 0x383818, indexSVCSprites_RedArremer },
    { L"Midnight Bliss", 0x383818, 0x383838, indexSVCSprites_RedArremer, 7 },
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
    { L"Orochi Iori", 0x384538, 0x384558, indexSVCSprites_OrochiIori },
    // unused { L"Fire Effect 1", 0x384558, 0x384578, indexSVCSprites_OrochiIori },
    // unused { L"Fire Effect 2", 0x384578, 0x384598, indexSVCSprites_OrochiIori },
    { L"Electric Shock Effect", 0x384598, 0x3845b8, indexSVCSprites_OrochiIori },
    { L"Red Arremer Transformation", 0x3845b8, 0x3845d8, indexSVCSprites_OrochiIori, 4 },
    { L"Athena Transformation", 0x3845d8, 0x3845f8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0x3845f8, 0x384618, indexSVCSprites_OrochiIori },
    { L"Midnight Bliss", 0x384618, 0x384638, indexSVCSprites_OrochiIori, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_KICK_PALETTES[] =
{
    { L"Orochi Iori", 0x384738, 0x384758, indexSVCSprites_OrochiIori },
    // unused { L"Fire Effect 1", 0x384758, 0x384778, indexSVCSprites_OrochiIori },
    // unused { L"Fire Effect 2", 0x384778, 0x384798, indexSVCSprites_OrochiIori },
    { L"Electric Shock Effect", 0x384798, 0x3847b8, indexSVCSprites_OrochiIori },
    { L"Red Arremer Transformation", 0x3847b8, 0x3847d8, indexSVCSprites_OrochiIori, 4 },
    { L"Athena Transformation", 0x3847d8, 0x3847f8, indexSVCSprites_OrochiIori, 5 },
    { L"Soul Palette", 0x3847f8, 0x384818, indexSVCSprites_OrochiIori },
    { L"Midnight Bliss", 0x384818, 0x384838, indexSVCSprites_OrochiIori, 7 },
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
    { L"Unused: Fire Effect 1", 0x385558, 0x385578, indexSVCSprites_SeriousMrKarate },
    { L"Unused: Fire Effect 2", 0x385578, 0x385598, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0x385598, 0x3855b8, indexSVCSprites_SeriousMrKarate },
    { L"Red Arremer Transformation", 0x3855b8, 0x3855d8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Athena Transformation", 0x3855d8, 0x3855f8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0x3855f8, 0x385618, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0x385618, 0x385638, indexSVCSprites_SeriousMrKarate, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES[] =
{
    { L"Serious Mr. Karate", 0x385738, 0x385758, indexSVCSprites_SeriousMrKarate },
    { L"Unused: Fire Effect 1", 0x385758, 0x385778, indexSVCSprites_SeriousMrKarate },
    { L"Unused: Fire Effect 2", 0x385778, 0x385798, indexSVCSprites_SeriousMrKarate },
    { L"Electric Shock Effect", 0x385798, 0x3857b8, indexSVCSprites_SeriousMrKarate },
    { L"Red Arremer Transformation", 0x3857b8, 0x3857d8, indexSVCSprites_SeriousMrKarate, 4 },
    { L"Athena Transformation", 0x3857d8, 0x3857f8, indexSVCSprites_SeriousMrKarate, 5 },
    { L"Soul Palette", 0x3857f8, 0x385818, indexSVCSprites_SeriousMrKarate },
    { L"Midnight Bliss", 0x385818, 0x385838, indexSVCSprites_SeriousMrKarate, 7 },
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
    { L"Unused: Fire Effect 1", 0x386558, 0x386578, indexSVCSprites_ViolentKen },
    { L"Unused: Fire Effect 2", 0x386578, 0x386598, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0x386598, 0x3865b8, indexSVCSprites_ViolentKen },
    { L"Red Arremer Transformation", 0x3865b8, 0x3865d8, indexSVCSprites_ViolentKen, 4 },
    { L"Athena Transformation", 0x3865d8, 0x3865f8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0x3865f8, 0x386618, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0x386618, 0x386638, indexSVCSprites_ViolentKen, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES[] =
{
    { L"Violent Ken", 0x386738, 0x386758, indexSVCSprites_ViolentKen },
    { L"Unused: Fire Effect 1", 0x386758, 0x386778, indexSVCSprites_ViolentKen },
    { L"Unused: Fire Effect 2", 0x386778, 0x386798, indexSVCSprites_ViolentKen },
    { L"Electric Shock Effect", 0x386798, 0x3867b8, indexSVCSprites_ViolentKen },
    { L"Red Arremer Transformation", 0x3867b8, 0x3867d8, indexSVCSprites_ViolentKen, 4 },
    { L"Athena Transformation", 0x3867d8, 0x3867f8, indexSVCSprites_ViolentKen, 5 },
    { L"Soul Palette", 0x3867f8, 0x386818, indexSVCSprites_ViolentKen },
    { L"Midnight Bliss", 0x386818, 0x386838, indexSVCSprites_ViolentKen, 7 },
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
    { L"Unused: Fire Effect 1", 0x387558, 0x387578, indexSVCSprites_Akuma },
    { L"Unused: Fire Effect 2", 0x387578, 0x387598, indexSVCSprites_Akuma },
    { L"Electric Shock Effect", 0x387598, 0x3875b8, indexSVCSprites_Akuma },
    { L"Red Arremer Transformation", 0x3875b8, 0x3875d8, indexSVCSprites_ShinAkuma, 4 },
    { L"Athena Transformation", 0x3875d8, 0x3875f8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0x3875f8, 0x387618, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x387618, 0x387638, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_KICK_PALETTES[] =
{
    { L"Shin Akuma", 0x387738, 0x387758, indexSVCSprites_Akuma },
    { L"Unused: Fire Effect 1", 0x387758, 0x387778, indexSVCSprites_Akuma },
    { L"Unused: Fire Effect 2", 0x387778, 0x387798, indexSVCSprites_Akuma },
    { L"Electric Shock Effect", 0x387798, 0x3877b8, indexSVCSprites_Akuma },
    { L"Red Arremer Transformation", 0x3877b8, 0x3877d8, indexSVCSprites_ShinAkuma, 4 },
    { L"Athena Transformation", 0x3877d8, 0x3877f8, indexSVCSprites_ShinAkuma, 5 },
    { L"Soul Palette", 0x3877f8, 0x387818, indexSVCSprites_Akuma },
    { L"Midnight Bliss", 0x387818, 0x387838, indexSVCSprites_Akuma, 7 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x399d38, 0x399d58 },
    { L"Effect 1", 0x399d58, 0x399d78 },
    { L"Effect 2", 0x399d78, 0x399d98 },
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
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_IORI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_RYO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_TERRY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MAI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KASUMI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_KICK_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MRKARATE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CHOI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_EARTHQUAKE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GENJURO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SHIKI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GEESEHOWARD_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MARSPEOPLE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GOENITZ_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GODDESSATHENA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_RYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GUILE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DHALSIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_BOXER_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CLAW_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SAGAT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DICTATOR_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_AKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_HUGO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES) },
    { L"Poison Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES) },
    { L"Poison Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES) },
};

// Not using this: pushed into Hugh instead.
const sDescTreeNode SVCPLUSA_A_POISON_COLLECTION[] =
{
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_TESSA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_ZERO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_KICK_PALETTES) },
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
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DAN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_REDARREMER_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_OROCHIIORI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SERIOUSMRKARATE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_VIOLENTKEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SHINAKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES) },
};

const sGame_PaletteDataset SVCPLUSA_A_STAGES_FACTORY_PALETTES[] =
{
    { L"Factory Abandoned", 0x39a538, 0x39a698 }
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

const UINT8 SVCPLUSA_A_UNITSORT[SVCPLUSA_A_NUMUNIT + 1] // Plus 1 for extras
{
    indexSVC_A_Kyo,
    indexSVC_A_Iori,
    indexSVC_A_Ryo,
    indexSVC_A_Terry,
    indexSVC_A_Mai,
    indexSVC_A_Kasumi,
    indexSVC_A_Kim,
    indexSVC_A_MrKarate,
    indexSVC_A_Choi,
    indexSVC_A_Earthquake,
    indexSVC_A_Genjuro,
    indexSVC_A_Shiki,
    indexSVC_A_GeeseHoward,
    indexSVC_A_MarsPeople,
    indexSVC_A_Goenitz,

    indexSVC_A_OrochiIori,
    indexSVC_A_SeriousMrKarate,
    indexSVC_A_GoddessAthena,

    indexSVC_A_Ryu,
    indexSVC_A_Ken,
    indexSVC_A_ChunLi,
    indexSVC_A_Guile,
    indexSVC_A_Dhalsim,
    indexSVC_A_Boxer,
    indexSVC_A_Claw,
    indexSVC_A_Sagat,
    indexSVC_A_Dictator,
    indexSVC_A_Akuma,
    indexSVC_A_Hugo,
    indexSVC_A_Tessa,
    indexSVC_A_Zero,
    indexSVC_A_Demitri,
    indexSVC_A_Dan,

    indexSVC_A_ViolentKen,
    indexSVC_A_ShinAkuma,
    indexSVC_A_RedArremer,

    indexSVC_A_Stages,
    indexSVC_A_Bonus,

    SVCPLUSA_A_EXTRALOC
};

const sDescTreeNode SVCPLUSA_A_UNITS[SVCPLUSA_A_NUMUNIT] =
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
    { L"Goddess Athena", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GODDESSATHENA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GODDESSATHENA_COLLECTION) },

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
    { L"Zero", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_ZERO_COLLECTION) },
    { L"Demitri", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DEMITRI_COLLECTION) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DAN_COLLECTION) },

    { L"Violent Ken", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_COLLECTION) },
    { L"Shin Akuma", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_COLLECTION) },
    { L"Red Arremer", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_COLLECTION, ARRAYSIZE(SVCPLUSA_A_REDARREMER_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_STAGES_COLLECTION, ARRAYSIZE(SVCPLUSA_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BONUS_COLLECTION, ARRAYSIZE(SVCPLUSA_A_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SVCPLUSA_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

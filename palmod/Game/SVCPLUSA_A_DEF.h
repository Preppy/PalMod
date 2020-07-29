#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SVCPLUSA_A_KYO_PALETTE_A. 
// * Update every array using SVCPLUSA_A_NUMUNIT below
// That should be it.  Good luck.

constexpr auto SVCPLUSA_A_NUMUNIT = indexSVC_A_Last;

#define SVCPLUSA_A_EXTRALOC SVCPLUSA_A_NUMUNIT

const sGame_PaletteDataset SVCPLUSA_A_KYO_PUNCH_PALETTES[] =
{
    { _T("Kyo"), 0x364538, 0x364558, indexKOFSprites_98Kyo },
    { _T("Fire Effect 1"), 0x364558, 0x364578, indexKOFSprites_98Kyo },
    { _T("Fire Effect 2"), 0x364578, 0x364598, indexKOFSprites_98Kyo },
    { _T("Electric Shock Effect"), 0x364598, 0x3645b8, indexKOFSprites_98Kyo },
    { _T("Effect 4"), 0x3645b8, 0x3645d8, indexKOFSprites_98Kyo },
    { _T("Effect 5"), 0x3645d8, 0x3645f8, indexKOFSprites_98Kyo },
    { _T("Soul Palette"), 0x3645f8, 0x364618, indexKOFSprites_98Kyo },
    { _T("Max Flash"), 0x364618, 0x364638, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_KICK_PALETTES[] =
{
    { _T("Kyo"), 0x364738, 0x364758, indexKOFSprites_98Kyo },
    { _T("Fire Effect 1"), 0x364758, 0x364778, indexKOFSprites_98Kyo },
    { _T("Fire Effect 2"), 0x364778, 0x364798, indexKOFSprites_98Kyo },
    { _T("Electric Shock Effect"), 0x364798, 0x3647b8, indexKOFSprites_98Kyo },
    { _T("Effect 4"), 0x3647b8, 0x3647d8, indexKOFSprites_98Kyo },
    { _T("Effect 5"), 0x3647d8, 0x3647f8, indexKOFSprites_98Kyo },
    { _T("Soul Palette"), 0x3647f8, 0x364818, indexKOFSprites_98Kyo },
    { _T("Max Flash"), 0x364818, 0x364838, indexKOFSprites_98Kyo },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x388538, 0x388558 },
    { _T("Effect 1"), 0x388558, 0x388578 },
    { _T("Effect 2"), 0x388578, 0x388598 },
    { _T("Effect 3"), 0x388598, 0x3885b8 },
    { _T("Effect 4"), 0x3885b8, 0x3885d8 },
    { _T("Effect 5"), 0x3885d8, 0x3885f8 },
    { _T("Effect 6"), 0x3885f8, 0x388618 },
    { _T("Effect 7"), 0x388618, 0x388638 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Kyo Punch"), 0x3a9938, 0x3a9978, indexSVCSprites_Kyo, 0x21 },
    { _T("Kyo Kick"), 0x3a9978, 0x3a99b8, indexSVCSprites_Kyo, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Kyo Punch"), 0x3a7938, 0x3a7978, indexSVCSprites_Kyo, 0x20 },
    { _T("Kyo Kick"), 0x3a7978, 0x3a79b8, indexSVCSprites_Kyo, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_PUNCH_PALETTES[] =
{
    { _T("Iori"), 0x365538, 0x365558, indexKOFSprites_98Iori },
    { _T("Fire Effect 1"), 0x365558, 0x365578, indexKOFSprites_98Iori },
    { _T("Fire Effect 2"), 0x365578, 0x365598, indexKOFSprites_98Iori },
    { _T("Electric Shock Effect"), 0x365598, 0x3655b8, indexKOFSprites_98Iori },
    { _T("Effect 4"), 0x3655b8, 0x3655d8, indexKOFSprites_98Iori },
    { _T("Effect 5"), 0x3655d8, 0x3655f8, indexKOFSprites_98Iori },
    { _T("Soul Palette"), 0x3655f8, 0x365618, indexKOFSprites_98Iori },
    { _T("Max Flash"), 0x365618, 0x365638, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_KICK_PALETTES[] =
{
    { _T("Iori"), 0x365738, 0x365758, indexKOFSprites_98Iori },
    { _T("Fire Effect 1"), 0x365758, 0x365778, indexKOFSprites_98Iori },
    { _T("Fire Effect 2"), 0x365778, 0x365798, indexKOFSprites_98Iori },
    { _T("Electric Shock Effect"), 0x365798, 0x3657b8, indexKOFSprites_98Iori },
    { _T("Effect 4"), 0x3657b8, 0x3657d8, indexKOFSprites_98Iori },
    { _T("Effect 5"), 0x3657d8, 0x3657f8, indexKOFSprites_98Iori },
    { _T("Soul Palette"), 0x3657f8, 0x365818, indexKOFSprites_98Iori },
    { _T("Max Flash"), 0x365818, 0x365838, indexKOFSprites_98Iori },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x388d38, 0x388d58 },
    { _T("Effect 1"), 0x388d58, 0x388d78 },
    { _T("Effect 2"), 0x388d78, 0x388d98 },
    { _T("Effect 3"), 0x388d98, 0x388db8 },
    { _T("Effect 4"), 0x388db8, 0x388dd8 },
    { _T("Effect 5"), 0x388dd8, 0x388df8 },
    { _T("Effect 6"), 0x388df8, 0x388e18 },
    { _T("Effect 7"), 0x388e18, 0x388e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Iori Punch"), 0x3a99b8, 0x3a99f8, indexSVCSprites_Iori, 0x21 },
    { _T("Iori Kick"), 0x3a99f8, 0x3a9a38, indexSVCSprites_Iori, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Iori Punch"), 0x3a79b8, 0x3a79f8, indexSVCSprites_Iori, 0x20 },
    { _T("Iori Kick"), 0x3a79f8, 0x3a7a38, indexSVCSprites_Iori, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_PUNCH_PALETTES[] =
{
    { _T("Ryo"), 0x366538, 0x366558, indexKOFSprites_98Ryo },
    { _T("Fire Effect 1"), 0x366558, 0x366578, indexKOFSprites_98Ryo },
    { _T("Fire Effect 2"), 0x366578, 0x366598, indexKOFSprites_98Ryo },
    { _T("Electric Shock Effect"), 0x366598, 0x3665b8, indexKOFSprites_98Ryo },
    { _T("Effect 4"), 0x3665b8, 0x3665d8, indexKOFSprites_98Ryo },
    { _T("Effect 5"), 0x3665d8, 0x3665f8, indexKOFSprites_98Ryo },
    { _T("Soul Palette"), 0x3665f8, 0x366618, indexKOFSprites_98Ryo },
    { _T("Max Flash"), 0x366618, 0x366638, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_KICK_PALETTES[] =
{
    { _T("Ryo"), 0x366738, 0x366758, indexKOFSprites_98Ryo },
    { _T("Fire Effect 1"), 0x366758, 0x366778, indexKOFSprites_98Ryo },
    { _T("Fire Effect 2"), 0x366778, 0x366798, indexKOFSprites_98Ryo },
    { _T("Electric Shock Effect"), 0x366798, 0x3667b8, indexKOFSprites_98Ryo },
    { _T("Effect 4"), 0x3667b8, 0x3667d8, indexKOFSprites_98Ryo },
    { _T("Effect 5"), 0x3667d8, 0x3667f8, indexKOFSprites_98Ryo },
    { _T("Soul Palette"), 0x3667f8, 0x366818, indexKOFSprites_98Ryo },
    { _T("Max Flash"), 0x366818, 0x366838, indexKOFSprites_98Ryo },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x389538, 0x389558 },
    { _T("Effect 1"), 0x389558, 0x389578 },
    { _T("Effect 2"), 0x389578, 0x389598 },
    { _T("Effect 3"), 0x389598, 0x3895b8 },
    { _T("Effect 4"), 0x3895b8, 0x3895d8 },
    { _T("Effect 5"), 0x3895d8, 0x3895f8 },
    { _T("Effect 6"), 0x3895f8, 0x389618 },
    { _T("Effect 7"), 0x389618, 0x389638 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Ryo Punch"), 0x3a9a38, 0x3a9a78, indexSVCSprites_Ryo, 0x21 },
    { _T("Ryo Kick"), 0x3a9a78, 0x3a9ab8, indexSVCSprites_Ryo, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Ryo Punch"), 0x3a7a38, 0x3a7a78, indexSVCSprites_Ryo, 0x20 },
    { _T("Ryo Kick"), 0x3a7a78, 0x3a7ab8, indexSVCSprites_Ryo, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_PUNCH_PALETTES[] =
{
    { _T("Terry"), 0x367538, 0x367558, indexKOFSprites_98Terry },
    { _T("Fire Effect 1"), 0x367558, 0x367578, indexKOFSprites_98Terry },
    { _T("Fire Effect 2"), 0x367578, 0x367598, indexKOFSprites_98Terry },
    { _T("Electric Shock Effect"), 0x367598, 0x3675b8, indexKOFSprites_98Terry },
    { _T("Effect 4"), 0x3675b8, 0x3675d8, indexKOFSprites_98Terry },
    { _T("Effect 5"), 0x3675d8, 0x3675f8, indexKOFSprites_98Terry },
    { _T("Soul Palette"), 0x3675f8, 0x367618, indexKOFSprites_98Terry },
    { _T("Max Flash"), 0x367618, 0x367638, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_KICK_PALETTES[] =
{
    { _T("Terry"), 0x367738, 0x367758, indexKOFSprites_98Terry },
    { _T("Fire Effect 1"), 0x367758, 0x367778, indexKOFSprites_98Terry },
    { _T("Fire Effect 2"), 0x367778, 0x367798, indexKOFSprites_98Terry },
    { _T("Electric Shock Effect"), 0x367798, 0x3677b8, indexKOFSprites_98Terry },
    { _T("Effect 4"), 0x3677b8, 0x3677d8, indexKOFSprites_98Terry },
    { _T("Effect 5"), 0x3677d8, 0x3677f8, indexKOFSprites_98Terry },
    { _T("Soul Palette"), 0x3677f8, 0x367818, indexKOFSprites_98Terry },
    { _T("Max Flash"), 0x367818, 0x367838, indexKOFSprites_98Terry },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x389d38, 0x389d58 },
    { _T("Effect 1"), 0x389d58, 0x389d78 },
    { _T("Effect 2"), 0x389d78, 0x389d98 },
    { _T("Effect 3"), 0x389d98, 0x389db8 },
    { _T("Effect 4"), 0x389db8, 0x389dd8 },
    { _T("Effect 5"), 0x389dd8, 0x389df8 },
    { _T("Effect 6"), 0x389df8, 0x389e18 },
    { _T("Effect 7"), 0x389e18, 0x389e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Terry Punch"), 0x3a9ab8, 0x3a9af8, indexSVCSprites_Terry, 0x21 },
    { _T("Terry Kick"), 0x3a9af8, 0x3a9b38, indexSVCSprites_Terry, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Terry Punch"), 0x3a7ab8, 0x3a7af8, indexSVCSprites_Terry, 0x20 },
    { _T("Terry Kick"), 0x3a7af8, 0x3a7b38, indexSVCSprites_Terry, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_PUNCH_PALETTES[] =
{
    { _T("Mai"), 0x368538, 0x368558, indexKOFSprites_98Mai },
    { _T("Fire Effect 1"), 0x368558, 0x368578, indexKOFSprites_98Mai },
    { _T("Fire Effect 2"), 0x368578, 0x368598, indexKOFSprites_98Mai },
    { _T("Electric Shock Effect"), 0x368598, 0x3685b8, indexKOFSprites_98Mai },
    { _T("Effect 4"), 0x3685b8, 0x3685d8, indexKOFSprites_98Mai },
    { _T("Effect 5"), 0x3685d8, 0x3685f8, indexKOFSprites_98Mai },
    { _T("Soul Palette"), 0x3685f8, 0x368618, indexKOFSprites_98Mai },
    { _T("Max Flash"), 0x368618, 0x368638, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_KICK_PALETTES[] =
{
    { _T("Mai"), 0x368738, 0x368758, indexKOFSprites_98Mai },
    { _T("Fire Effect 1"), 0x368758, 0x368778, indexKOFSprites_98Mai },
    { _T("Fire Effect 2"), 0x368778, 0x368798, indexKOFSprites_98Mai },
    { _T("Electric Shock Effect"), 0x368798, 0x3687b8, indexKOFSprites_98Mai },
    { _T("Effect 4"), 0x3687b8, 0x3687d8, indexKOFSprites_98Mai },
    { _T("Effect 5"), 0x3687d8, 0x3687f8, indexKOFSprites_98Mai },
    { _T("Soul Palette"), 0x3687f8, 0x368818, indexKOFSprites_98Mai },
    { _T("Max Flash"), 0x368818, 0x368838, indexKOFSprites_98Mai },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38a538, 0x38a558 },
    { _T("Effect 1"), 0x38a558, 0x38a578 },
    { _T("Effect 2"), 0x38a578, 0x38a598 },
    { _T("Effect 3"), 0x38a598, 0x38a5b8 },
    { _T("Effect 4"), 0x38a5b8, 0x38a5d8 },
    { _T("Effect 5"), 0x38a5d8, 0x38a5f8 },
    { _T("Effect 6"), 0x38a5f8, 0x38a618 },
    { _T("Effect 7"), 0x38a618, 0x38a638 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Mai Punch"), 0x3a9b38, 0x3a9b78, indexSVCSprites_Mai, 0x21 },
    { _T("Mai Kick"), 0x3a9b78, 0x3a9bb8, indexSVCSprites_Mai, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Mai Punch"), 0x3a7b38, 0x3a7b78, indexSVCSprites_Mai, 0x20 },
    { _T("Mai Kick"), 0x3a7b78, 0x3a7bb8, indexSVCSprites_Mai, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_PUNCH_PALETTES[] =
{
    { _T("Kasumi"), 0x369538, 0x369558, indexKOFSprites_00Kasumi },
    { _T("Fire Effect 1"), 0x369558, 0x369578, indexKOFSprites_00Kasumi },
    { _T("Fire Effect 2"), 0x369578, 0x369598, indexKOFSprites_00Kasumi },
    { _T("Electric Shock Effect"), 0x369598, 0x3695b8, indexKOFSprites_00Kasumi },
    { _T("Effect 4"), 0x3695b8, 0x3695d8, indexKOFSprites_00Kasumi },
    { _T("Effect 5"), 0x3695d8, 0x3695f8, indexKOFSprites_00Kasumi },
    { _T("Soul Palette"), 0x3695f8, 0x369618, indexKOFSprites_00Kasumi },
    { _T("Max Flash"), 0x369618, 0x369638, indexKOFSprites_00Kasumi },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_KICK_PALETTES[] =
{
    { _T("Kasumi"), 0x369738, 0x369758, indexKOFSprites_00Kasumi },
    { _T("Fire Effect 1"), 0x369758, 0x369778, indexKOFSprites_00Kasumi },
    { _T("Fire Effect 2"), 0x369778, 0x369798, indexKOFSprites_00Kasumi },
    { _T("Electric Shock Effect"), 0x369798, 0x3697b8, indexKOFSprites_00Kasumi },
    { _T("Effect 4"), 0x3697b8, 0x3697d8, indexKOFSprites_00Kasumi },
    { _T("Effect 5"), 0x3697d8, 0x3697f8, indexKOFSprites_00Kasumi },
    { _T("Soul Palette"), 0x3697f8, 0x369818, indexKOFSprites_00Kasumi },
    { _T("Max Flash"), 0x369818, 0x369838, indexKOFSprites_00Kasumi },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38ad38, 0x38ad58 },
    { _T("Effect 1"), 0x38ad58, 0x38ad78 },
    { _T("Effect 2"), 0x38ad78, 0x38ad98 },
    { _T("Effect 3"), 0x38ad98, 0x38adb8 },
    { _T("Effect 4"), 0x38adb8, 0x38add8 },
    { _T("Effect 5"), 0x38add8, 0x38adf8 },
    { _T("Effect 6"), 0x38adf8, 0x38ae18 },
    { _T("Effect 7"), 0x38ae18, 0x38ae38 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Kasumi Punch"), 0x3a9bb8, 0x3a9bf8, indexSVCSprites_Kasumi, 0x21 },
    { _T("Kasumi Kick"), 0x3a9bf8, 0x3a9c38, indexSVCSprites_Kasumi, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Kasumi Punch"), 0x3a7bb8, 0x3a7bf8, indexSVCSprites_Kasumi, 0x20 },
    { _T("Kasumi Kick"), 0x3a7bf8, 0x3a7c38, indexSVCSprites_Kasumi, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_PUNCH_PALETTES[] =
{
    { _T("Kim"), 0x36a538, 0x36a558, indexKOFSprites_98Kim },
    { _T("Fire Effect 1"), 0x36a558, 0x36a578, indexKOFSprites_98Kim },
    { _T("Fire Effect 2"), 0x36a578, 0x36a598, indexKOFSprites_98Kim },
    { _T("Electric Shock Effect"), 0x36a598, 0x36a5b8, indexKOFSprites_98Kim },
    { _T("Effect 4"), 0x36a5b8, 0x36a5d8, indexKOFSprites_98Kim },
    { _T("Effect 5"), 0x36a5d8, 0x36a5f8, indexKOFSprites_98Kim },
    { _T("Soul Palette"), 0x36a5f8, 0x36a618, indexKOFSprites_98Kim },
    { _T("Max Flash"), 0x36a618, 0x36a638, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_KICK_PALETTES[] =
{
    { _T("Kim"), 0x36a738, 0x36a758, indexKOFSprites_98Kim },
    { _T("Fire Effect 1"), 0x36a758, 0x36a778, indexKOFSprites_98Kim },
    { _T("Fire Effect 2"), 0x36a778, 0x36a798, indexKOFSprites_98Kim },
    { _T("Electric Shock Effect"), 0x36a798, 0x36a7b8, indexKOFSprites_98Kim },
    { _T("Effect 4"), 0x36a7b8, 0x36a7d8, indexKOFSprites_98Kim },
    { _T("Effect 5"), 0x36a7d8, 0x36a7f8, indexKOFSprites_98Kim },
    { _T("Soul Palette"), 0x36a7f8, 0x36a818, indexKOFSprites_98Kim },
    { _T("Max Flash"), 0x36a818, 0x36a838, indexKOFSprites_98Kim },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Kim Punch"), 0x3a9c38, 0x3a9c78, indexSVCSprites_Kim, 0x21 },
    { _T("Kim Kick"), 0x3a9c78, 0x3a9cb8, indexSVCSprites_Kim, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Kim Punch"), 0x3a7c38, 0x3a7c78, indexSVCSprites_Kim, 0x20 },
    { _T("Kim Kick"), 0x3a7c78, 0x3a7cb8, indexSVCSprites_Kim, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_PUNCH_PALETTES[] =
{
    { _T("Mr. Karate"), 0x36b538, 0x36b558, indexSVCSprites_MrKarate },
    { _T("Fire Effect 1"), 0x36b558, 0x36b578, indexSVCSprites_MrKarate },
    { _T("Fire Effect 2"), 0x36b578, 0x36b598, indexSVCSprites_MrKarate },
    { _T("Electric Shock Effect"), 0x36b598, 0x36b5b8, indexSVCSprites_MrKarate },
    { _T("Effect 4"), 0x36b5b8, 0x36b5d8, indexSVCSprites_MrKarate },
    { _T("Effect 5"), 0x36b5d8, 0x36b5f8, indexSVCSprites_MrKarate },
    { _T("Soul Palette"), 0x36b5f8, 0x36b618, indexSVCSprites_MrKarate },
    { _T("Max Flash"), 0x36b618, 0x36b638, indexSVCSprites_MrKarate },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_KICK_PALETTES[] =
{
    { _T("Mr. Karate"), 0x36b738, 0x36b758, indexSVCSprites_MrKarate },
    { _T("Fire Effect 1"), 0x36b758, 0x36b778, indexSVCSprites_MrKarate },
    { _T("Fire Effect 2"), 0x36b778, 0x36b798, indexSVCSprites_MrKarate },
    { _T("Electric Shock Effect"), 0x36b798, 0x36b7b8, indexSVCSprites_MrKarate },
    { _T("Effect 4"), 0x36b7b8, 0x36b7d8, indexSVCSprites_MrKarate },
    { _T("Effect 5"), 0x36b7d8, 0x36b7f8, indexSVCSprites_MrKarate },
    { _T("Soul Palette"), 0x36b7f8, 0x36b818, indexSVCSprites_MrKarate },
    { _T("Max Flash"), 0x36b818, 0x36b838, indexSVCSprites_MrKarate },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38bd38, 0x38bd58 },
    { _T("Effect 1"), 0x38bd58, 0x38bd78 },
    { _T("Effect 2"), 0x38bd78, 0x38bd98 },
    { _T("Effect 3"), 0x38bd98, 0x38bdb8 },
    { _T("Effect 4"), 0x38bdb8, 0x38bdd8 },
    { _T("Effect 5"), 0x38bdd8, 0x38bdf8 },
    { _T("Effect 6"), 0x38bdf8, 0x38be18 },
    { _T("Effect 7"), 0x38be18, 0x38be38 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Mr. Karate Punch"), 0x3a9cb8, 0x3a9cf8, indexSVCSprites_MrKarate, 0x21 },
    { _T("Mr. Karate Kick"), 0x3a9cf8, 0x3a9d38, indexSVCSprites_MrKarate, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Mr. Karate Punch"), 0x3a7cb8, 0x3a7cf8, indexSVCSprites_MrKarate, 0x20 },
    { _T("Mr. Karate Kick"), 0x3a7cf8, 0x3a7d38, indexSVCSprites_MrKarate, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_PUNCH_PALETTES[] =
{
    { _T("Choi"), 0x36c538, 0x36c558, indexKOFSprites_98Choi },
    { _T("Fire Effect 1"), 0x36c558, 0x36c578, indexKOFSprites_98Choi },
    { _T("Fire Effect 2"), 0x36c578, 0x36c598, indexKOFSprites_98Choi },
    { _T("Electric Shock Effect"), 0x36c598, 0x36c5b8, indexKOFSprites_98Choi },
    { _T("Effect 4"), 0x36c5b8, 0x36c5d8, indexKOFSprites_98Choi },
    { _T("Effect 5"), 0x36c5d8, 0x36c5f8, indexKOFSprites_98Choi },
    { _T("Soul Palette"), 0x36c5f8, 0x36c618, indexKOFSprites_98Choi },
    { _T("Max Flash"), 0x36c618, 0x36c638, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_KICK_PALETTES[] =
{
    { _T("Choi"), 0x36c738, 0x36c758, indexKOFSprites_98Choi },
    { _T("Fire Effect 1"), 0x36c758, 0x36c778, indexKOFSprites_98Choi },
    { _T("Fire Effect 2"), 0x36c778, 0x36c798, indexKOFSprites_98Choi },
    { _T("Electric Shock Effect"), 0x36c798, 0x36c7b8, indexKOFSprites_98Choi },
    { _T("Effect 4"), 0x36c7b8, 0x36c7d8, indexKOFSprites_98Choi },
    { _T("Effect 5"), 0x36c7d8, 0x36c7f8, indexKOFSprites_98Choi },
    { _T("Soul Palette"), 0x36c7f8, 0x36c818, indexKOFSprites_98Choi },
    { _T("Max Flash"), 0x36c818, 0x36c838, indexKOFSprites_98Choi },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38c538, 0x38c558 },
    { _T("Effect 1"), 0x38c558, 0x38c578 },
    { _T("Effect 2"), 0x38c578, 0x38c598 },
    { _T("Effect 3"), 0x38c598, 0x38c5b8 },
    { _T("Effect 4"), 0x38c5b8, 0x38c5d8 },
    { _T("Effect 5"), 0x38c5d8, 0x38c5f8 },
    { _T("Effect 6"), 0x38c5f8, 0x38c618 },
    { _T("Effect 7"), 0x38c618, 0x38c638 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Choi Punch"), 0x3a9d38, 0x3a9d78, indexSVCSprites_Choi, 0x21 },
    { _T("Choi Kick"), 0x3a9d78, 0x3a9db8, indexSVCSprites_Choi, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Choi Punch"), 0x3a7d38, 0x3a7d78, indexSVCSprites_Choi, 0x20 },
    { _T("Choi Kick"), 0x3a7d78, 0x3a7db8, indexSVCSprites_Choi, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES[] =
{
    { _T("Earthquake"), 0x36d538, 0x36d558, indexSVCSprites_Earthquake },
    { _T("Fire Effect 1"), 0x36d558, 0x36d578, indexSVCSprites_Earthquake },
    { _T("Fire Effect 2"), 0x36d578, 0x36d598, indexSVCSprites_Earthquake },
    { _T("Electric Shock Effect"), 0x36d598, 0x36d5b8, indexSVCSprites_Earthquake },
    { _T("Effect 4"), 0x36d5b8, 0x36d5d8, indexSVCSprites_Earthquake },
    { _T("Effect 5"), 0x36d5d8, 0x36d5f8, indexSVCSprites_Earthquake },
    { _T("Soul Palette"), 0x36d5f8, 0x36d618, indexSVCSprites_Earthquake },
    { _T("Max Flash"), 0x36d618, 0x36d638, indexSVCSprites_Earthquake },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES[] =
{
    { _T("Earthquake"), 0x36d738, 0x36d758, indexSVCSprites_Earthquake },
    { _T("Fire Effect 1"), 0x36d758, 0x36d778, indexSVCSprites_Earthquake },
    { _T("Fire Effect 2"), 0x36d778, 0x36d798, indexSVCSprites_Earthquake },
    { _T("Electric Shock Effect"), 0x36d798, 0x36d7b8, indexSVCSprites_Earthquake },
    { _T("Effect 4"), 0x36d7b8, 0x36d7d8, indexSVCSprites_Earthquake },
    { _T("Effect 5"), 0x36d7d8, 0x36d7f8, indexSVCSprites_Earthquake },
    { _T("Soul Palette"), 0x36d7f8, 0x36d818, indexSVCSprites_Earthquake },
    { _T("Max Flash"), 0x36d818, 0x36d838, indexSVCSprites_Earthquake },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38cd38, 0x38cd58 },
    { _T("Effect 1"), 0x38cd58, 0x38cd78 },
    { _T("Effect 2"), 0x38cd78, 0x38cd98 },
    { _T("Effect 3"), 0x38cd98, 0x38cdb8 },
    { _T("Effect 4"), 0x38cdb8, 0x38cdd8 },
    { _T("Effect 5"), 0x38cdd8, 0x38cdf8 },
    { _T("Effect 6"), 0x38cdf8, 0x38ce18 },
    { _T("Effect 7"), 0x38ce18, 0x38ce38 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Earthquake Punch"), 0x3a9db8, 0x3a9df8, indexSVCSprites_Earthquake, 0x21 },
    { _T("Earthquake Kick"), 0x3a9df8, 0x3a9e38, indexSVCSprites_Earthquake, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Earthquake Punch"), 0x3a7db8, 0x3a7df8, indexSVCSprites_Earthquake, 0x20 },
    { _T("Earthquake Kick"), 0x3a7df8, 0x3a7e38, indexSVCSprites_Earthquake, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_PUNCH_PALETTES[] =
{
    { _T("Genjuro"), 0x36e538, 0x36e558, indexSVCSprites_Genjuro },
    { _T("Fire Effect 1"), 0x36e558, 0x36e578, indexSVCSprites_Genjuro },
    { _T("Fire Effect 2"), 0x36e578, 0x36e598, indexSVCSprites_Genjuro },
    { _T("Electric Shock Effect"), 0x36e598, 0x36e5b8, indexSVCSprites_Genjuro },
    { _T("Effect 4"), 0x36e5b8, 0x36e5d8, indexSVCSprites_Genjuro },
    { _T("Effect 5"), 0x36e5d8, 0x36e5f8, indexSVCSprites_Genjuro },
    { _T("Soul Palette"), 0x36e5f8, 0x36e618, indexSVCSprites_Genjuro },
    { _T("Max Flash"), 0x36e618, 0x36e638, indexSVCSprites_Genjuro },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_KICK_PALETTES[] =
{
    { _T("Genjuro"), 0x36e738, 0x36e758, indexSVCSprites_Genjuro },
    { _T("Fire Effect 1"), 0x36e758, 0x36e778, indexSVCSprites_Genjuro },
    { _T("Fire Effect 2"), 0x36e778, 0x36e798, indexSVCSprites_Genjuro },
    { _T("Electric Shock Effect"), 0x36e798, 0x36e7b8, indexSVCSprites_Genjuro },
    { _T("Effect 4"), 0x36e7b8, 0x36e7d8, indexSVCSprites_Genjuro },
    { _T("Effect 5"), 0x36e7d8, 0x36e7f8, indexSVCSprites_Genjuro },
    { _T("Soul Palette"), 0x36e7f8, 0x36e818, indexSVCSprites_Genjuro },
    { _T("Max Flash"), 0x36e818, 0x36e838, indexSVCSprites_Genjuro },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38d538, 0x38d558 },
    { _T("Effect 1"), 0x38d558, 0x38d578 },
    { _T("Effect 2"), 0x38d578, 0x38d598 },
    { _T("Effect 3"), 0x38d598, 0x38d5b8 },
    { _T("Effect 4"), 0x38d5b8, 0x38d5d8 },
    { _T("Effect 5"), 0x38d5d8, 0x38d5f8 },
    { _T("Effect 6"), 0x38d5f8, 0x38d618 },
    { _T("Effect 7"), 0x38d618, 0x38d638 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Genjuro Punch"), 0x3a9e38, 0x3a9e78, indexSVCSprites_Genjuro, 0x21 },
    { _T("Genjuro Kick"), 0x3a9e78, 0x3a9eb8, indexSVCSprites_Genjuro, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Genjuro Punch"), 0x3a7e38, 0x3a7e78, indexSVCSprites_Genjuro, 0x20 },
    { _T("Genjuro Kick"), 0x3a7e78, 0x3a7eb8, indexSVCSprites_Genjuro, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_PUNCH_PALETTES[] =
{
    { _T("Shiki"), 0x36f538, 0x36f558, indexSVCSprites_Shiki },
    { _T("Fire Effect 1"), 0x36f558, 0x36f578, indexSVCSprites_Shiki },
    { _T("Fire Effect 2"), 0x36f578, 0x36f598, indexSVCSprites_Shiki },
    { _T("Electric Shock Effect"), 0x36f598, 0x36f5b8, indexSVCSprites_Shiki },
    { _T("Effect 4"), 0x36f5b8, 0x36f5d8, indexSVCSprites_Shiki },
    { _T("Effect 5"), 0x36f5d8, 0x36f5f8, indexSVCSprites_Shiki },
    { _T("Soul Palette"), 0x36f5f8, 0x36f618, indexSVCSprites_Shiki },
    { _T("Max Flash"), 0x36f618, 0x36f638, indexSVCSprites_Shiki },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_KICK_PALETTES[] =
{
    { _T("Shiki"), 0x36f738, 0x36f758, indexSVCSprites_Shiki },
    { _T("Fire Effect 1"), 0x36f758, 0x36f778, indexSVCSprites_Shiki },
    { _T("Fire Effect 2"), 0x36f778, 0x36f798, indexSVCSprites_Shiki },
    { _T("Electric Shock Effect"), 0x36f798, 0x36f7b8, indexSVCSprites_Shiki },
    { _T("Effect 4"), 0x36f7b8, 0x36f7d8, indexSVCSprites_Shiki },
    { _T("Effect 5"), 0x36f7d8, 0x36f7f8, indexSVCSprites_Shiki },
    { _T("Soul Palette"), 0x36f7f8, 0x36f818, indexSVCSprites_Shiki },
    { _T("Max Flash"), 0x36f818, 0x36f838, indexSVCSprites_Shiki },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38dd38, 0x38dd58 },
    { _T("Effect 1"), 0x38dd58, 0x38dd78 },
    { _T("Effect 2"), 0x38dd78, 0x38dd98 },
    { _T("Effect 3"), 0x38dd98, 0x38ddb8 },
    { _T("Effect 4"), 0x38ddb8, 0x38ddd8 },
    { _T("Effect 5"), 0x38ddd8, 0x38ddf8 },
    { _T("Effect 6"), 0x38ddf8, 0x38de18 },
    { _T("Effect 7"), 0x38de18, 0x38de38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Shiki Punch"), 0x3a9eb8, 0x3a9ef8, indexSVCSprites_Shiki, 0x21 },
    { _T("Shiki Kick"), 0x3a9ef8, 0x3a9f38, indexSVCSprites_Shiki, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Shiki Punch"), 0x3a7eb8, 0x3a7ef8, indexSVCSprites_Shiki, 0x20 },
    { _T("Shiki Kick"), 0x3a7ef8, 0x3a7f38, indexSVCSprites_Shiki, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES[] =
{
    { _T("Geese Howard"), 0x370538, 0x370558, indexKOFSprites_02Geese },
    { _T("Fire Effect 1"), 0x370558, 0x370578, indexKOFSprites_02Geese },
    { _T("Fire Effect 2"), 0x370578, 0x370598, indexKOFSprites_02Geese },
    { _T("Electric Shock Effect"), 0x370598, 0x3705b8, indexKOFSprites_02Geese },
    { _T("Effect 4"), 0x3705b8, 0x3705d8, indexKOFSprites_02Geese },
    { _T("Effect 5"), 0x3705d8, 0x3705f8, indexKOFSprites_02Geese },
    { _T("Soul Palette"), 0x3705f8, 0x370618, indexKOFSprites_02Geese },
    { _T("Max Flash"), 0x370618, 0x370638, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES[] =
{
    { _T("Geese Howard"), 0x370738, 0x370758, indexKOFSprites_02Geese },
    { _T("Fire Effect 1"), 0x370758, 0x370778, indexKOFSprites_02Geese },
    { _T("Fire Effect 2"), 0x370778, 0x370798, indexKOFSprites_02Geese },
    { _T("Electric Shock Effect"), 0x370798, 0x3707b8, indexKOFSprites_02Geese },
    { _T("Effect 4"), 0x3707b8, 0x3707d8, indexKOFSprites_02Geese },
    { _T("Effect 5"), 0x3707d8, 0x3707f8, indexKOFSprites_02Geese },
    { _T("Soul Palette"), 0x3707f8, 0x370818, indexKOFSprites_02Geese },
    { _T("Max Flash"), 0x370818, 0x370838, indexKOFSprites_02Geese },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38e538, 0x38e558 },
    { _T("Effect 1"), 0x38e558, 0x38e578 },
    { _T("Effect 2"), 0x38e578, 0x38e598 },
    { _T("Effect 3"), 0x38e598, 0x38e5b8 },
    { _T("Effect 4"), 0x38e5b8, 0x38e5d8 },
    { _T("Effect 5"), 0x38e5d8, 0x38e5f8 },
    { _T("Effect 6"), 0x38e5f8, 0x38e618 },
    { _T("Effect 7"), 0x38e618, 0x38e638 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Geese Howard Punch"), 0x3a9f38, 0x3a9f78, indexSVCSprites_GeeseHoward, 0x21 },
    { _T("Geese Howard Kick"), 0x3a9f78, 0x3a9fb8, indexSVCSprites_GeeseHoward, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Geese Howard Punch"), 0x3a7f38, 0x3a7f78, indexSVCSprites_GeeseHoward, 0x20 },
    { _T("Geese Howard Kick"), 0x3a7f78, 0x3a7fb8, indexSVCSprites_GeeseHoward, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES[] =
{
    { _T("Mars People"), 0x371538, 0x371558, indexSVCSprites_MarsPeople },
    { _T("Fire Effect 1"), 0x371558, 0x371578, indexSVCSprites_MarsPeople },
    { _T("Fire Effect 2"), 0x371578, 0x371598, indexSVCSprites_MarsPeople },
    { _T("Electric Shock Effect"), 0x371598, 0x3715b8, indexSVCSprites_MarsPeople },
    { _T("Effect 4"), 0x3715b8, 0x3715d8, indexSVCSprites_MarsPeople },
    { _T("Effect 5"), 0x3715d8, 0x3715f8, indexSVCSprites_MarsPeople },
    { _T("Soul Palette"), 0x3715f8, 0x371618, indexSVCSprites_MarsPeople },
    { _T("Max Flash"), 0x371618, 0x371638, indexSVCSprites_MarsPeople },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES[] =
{
    { _T("Mars People"), 0x371738, 0x371758, indexSVCSprites_MarsPeople },
    { _T("Fire Effect 1"), 0x371758, 0x371778, indexSVCSprites_MarsPeople },
    { _T("Fire Effect 2"), 0x371778, 0x371798, indexSVCSprites_MarsPeople },
    { _T("Electric Shock Effect"), 0x371798, 0x3717b8, indexSVCSprites_MarsPeople },
    { _T("Effect 4"), 0x3717b8, 0x3717d8, indexSVCSprites_MarsPeople },
    { _T("Effect 5"), 0x3717d8, 0x3717f8, indexSVCSprites_MarsPeople },
    { _T("Soul Palette"), 0x3717f8, 0x371818, indexSVCSprites_MarsPeople },
    { _T("Max Flash"), 0x371818, 0x371838, indexSVCSprites_MarsPeople },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38ed38, 0x38ed58 },
    { _T("Effect 1"), 0x38ed58, 0x38ed78 },
    { _T("Effect 2"), 0x38ed78, 0x38ed98 },
    { _T("Effect 3"), 0x38ed98, 0x38edb8 },
    { _T("Effect 4"), 0x38edb8, 0x38edd8 },
    { _T("Effect 5"), 0x38edd8, 0x38edf8 },
    { _T("Effect 6"), 0x38edf8, 0x38ee18 },
    { _T("Effect 7"), 0x38ee18, 0x38ee38 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Mars People Punch"), 0x3a9fb8, 0x3a9ff8, indexSVCSprites_MarsPeople, 0x21 },
    { _T("Mars People Kick"), 0x3a9ff8, 0x3aa038, indexSVCSprites_MarsPeople, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Mars People Punch"), 0x3a7fb8, 0x3a7ff8, indexSVCSprites_MarsPeople, 0x20 },
    { _T("Mars People Kick"), 0x3a7ff8, 0x3a8038, indexSVCSprites_MarsPeople, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_PUNCH_PALETTES[] =
{
    { _T("Goenitz"), 0x372538, 0x372558, indexKOFSprites_02Goenitz },
    { _T("Fire Effect 1"), 0x372558, 0x372578, indexKOFSprites_02Goenitz },
    { _T("Fire Effect 2"), 0x372578, 0x372598, indexKOFSprites_02Goenitz },
    { _T("Electric Shock Effect"), 0x372598, 0x3725b8, indexKOFSprites_02Goenitz },
    { _T("Effect 4"), 0x3725b8, 0x3725d8, indexKOFSprites_02Goenitz },
    { _T("Effect 5"), 0x3725d8, 0x3725f8, indexKOFSprites_02Goenitz },
    { _T("Soul Palette"), 0x3725f8, 0x372618, indexKOFSprites_02Goenitz },
    { _T("Max Flash"), 0x372618, 0x372638, indexKOFSprites_02Goenitz },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_KICK_PALETTES[] =
{
    { _T("Goenitz"), 0x372738, 0x372758, indexKOFSprites_02Goenitz },
    { _T("Fire Effect 1"), 0x372758, 0x372778, indexKOFSprites_02Goenitz },
    { _T("Fire Effect 2"), 0x372778, 0x372798, indexKOFSprites_02Goenitz },
    { _T("Electric Shock Effect"), 0x372798, 0x3727b8, indexKOFSprites_02Goenitz },
    { _T("Effect 4"), 0x3727b8, 0x3727d8, indexKOFSprites_02Goenitz },
    { _T("Effect 5"), 0x3727d8, 0x3727f8, indexKOFSprites_02Goenitz },
    { _T("Soul Palette"), 0x3727f8, 0x372818, indexKOFSprites_02Goenitz },
    { _T("Max Flash"), 0x372818, 0x372838, indexKOFSprites_02Goenitz },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38f538, 0x38f558 },
    { _T("Effect 1"), 0x38f558, 0x38f578 },
    { _T("Effect 2"), 0x38f578, 0x38f598 },
    { _T("Effect 3"), 0x38f598, 0x38f5b8 },
    { _T("Effect 4"), 0x38f5b8, 0x38f5d8 },
    { _T("Effect 5"), 0x38f5d8, 0x38f5f8 },
    { _T("Effect 6"), 0x38f5f8, 0x38f618 },
    { _T("Effect 7"), 0x38f618, 0x38f638 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Goenitz Punch"), 0x3aa038, 0x3aa078, indexSVCSprites_Goenitz, 0x21 },
    { _T("Goenitz Kick"), 0x3aa078, 0x3aa0b8, indexSVCSprites_Goenitz, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Goenitz Punch"), 0x3a8038, 0x3a8078, indexSVCSprites_Goenitz, 0x20 },
    { _T("Goenitz Kick"), 0x3a8078, 0x3a80b8, indexSVCSprites_Goenitz, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_PRINCESSATHENA_PUNCH_PALETTES[] =
{
    { _T("Princess Athena"), 0x373538, 0x373558, indexSVCSprites_PrincessAthena },
    { _T("Fire Effect 1"), 0x373558, 0x373578, indexSVCSprites_PrincessAthena },
    { _T("Fire Effect 2"), 0x373578, 0x373598, indexSVCSprites_PrincessAthena },
    { _T("Electric Shock Effect"), 0x373598, 0x3735b8, indexSVCSprites_PrincessAthena },
    { _T("Effect 4"), 0x3735b8, 0x3735d8, indexSVCSprites_PrincessAthena },
    { _T("Effect 5"), 0x3735d8, 0x3735f8, indexSVCSprites_PrincessAthena },
    { _T("Soul Palette"), 0x3735f8, 0x373618, indexSVCSprites_PrincessAthena },
    { _T("Max Flash"), 0x373618, 0x373638, indexSVCSprites_PrincessAthena },
};

const sGame_PaletteDataset SVCPLUSA_A_PRINCESSATHENA_KICK_PALETTES[] =
{
    { _T("Princess Athena"), 0x373738, 0x373758, indexSVCSprites_PrincessAthena },
    { _T("Fire Effect 1"), 0x373758, 0x373778, indexSVCSprites_PrincessAthena },
    { _T("Fire Effect 2"), 0x373778, 0x373798, indexSVCSprites_PrincessAthena },
    { _T("Electric Shock Effect"), 0x373798, 0x3737b8, indexSVCSprites_PrincessAthena },
    { _T("Effect 4"), 0x3737b8, 0x3737d8, indexSVCSprites_PrincessAthena },
    { _T("Effect 5"), 0x3737d8, 0x3737f8, indexSVCSprites_PrincessAthena },
    { _T("Soul Palette"), 0x3737f8, 0x373818, indexSVCSprites_PrincessAthena },
    { _T("Max Flash"), 0x373818, 0x373838, indexSVCSprites_PrincessAthena },
};

const sGame_PaletteDataset SVCPLUSA_A_PRINCESSATHENA_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x38fd38, 0x38fd58 },
    { _T("Effect 1"), 0x38fd58, 0x38fd78 },
    { _T("Effect 2"), 0x38fd78, 0x38fd98 },
    { _T("Effect 3"), 0x38fd98, 0x38fdb8 },
    { _T("Effect 4"), 0x38fdb8, 0x38fdd8 },
    { _T("Effect 5"), 0x38fdd8, 0x38fdf8 },
    { _T("Effect 6"), 0x38fdf8, 0x38fe18 },
    { _T("Effect 7"), 0x38fe18, 0x38fe38 },
};

const sGame_PaletteDataset SVCPLUSA_A_PRINCESSATHENA_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Princess Athena Punch"), 0x3aa0b8, 0x3aa0f8, indexSVCSprites_PrincessAthena, 0x21 },
    { _T("Princess Athena Kick"), 0x3aa0f8, 0x3aa138, indexSVCSprites_PrincessAthena, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_PRINCESSATHENA_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Princess Athena Punch"), 0x3a80b8, 0x3a80f8, indexSVCSprites_PrincessAthena, 0x20 },
    { _T("Princess Athena Kick"), 0x3a80f8, 0x3a8138, indexSVCSprites_PrincessAthena, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_PUNCH_PALETTES[] =
{
    { _T("Ryu"), 0x374538, 0x374558, indexSVCSprites_Ryu },
    { _T("Fire Effect 1"), 0x374558, 0x374578, indexSVCSprites_Ryu },
    { _T("Fire Effect 2"), 0x374578, 0x374598, indexSVCSprites_Ryu },
    { _T("Electric Shock Effect"), 0x374598, 0x3745b8, indexSVCSprites_Ryu },
    { _T("Effect 4"), 0x3745b8, 0x3745d8, indexSVCSprites_Ryu },
    { _T("Effect 5"), 0x3745d8, 0x3745f8, indexSVCSprites_Ryu },
    { _T("Soul Palette"), 0x3745f8, 0x374618, indexSVCSprites_Ryu },
    { _T("Max Flash"), 0x374618, 0x374638, indexSVCSprites_Ryu },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_KICK_PALETTES[] =
{
    { _T("Ryu"), 0x374738, 0x374758, indexSVCSprites_Ryu },
    { _T("Fire Effect 1"), 0x374758, 0x374778, indexSVCSprites_Ryu },
    { _T("Fire Effect 2"), 0x374778, 0x374798, indexSVCSprites_Ryu },
    { _T("Electric Shock Effect"), 0x374798, 0x3747b8, indexSVCSprites_Ryu },
    { _T("Effect 4"), 0x3747b8, 0x3747d8, indexSVCSprites_Ryu },
    { _T("Effect 5"), 0x3747d8, 0x3747f8, indexSVCSprites_Ryu },
    { _T("Soul Palette"), 0x3747f8, 0x374818, indexSVCSprites_Ryu },
    { _T("Max Flash"), 0x374818, 0x374838, indexSVCSprites_Ryu },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x390538, 0x390558 },
    { _T("Effect 1"), 0x390558, 0x390578 },
    { _T("Effect 2"), 0x390578, 0x390598 },
    { _T("Effect 3"), 0x390598, 0x3905b8 },
    { _T("Effect 4"), 0x3905b8, 0x3905d8 },
    { _T("Effect 5"), 0x3905d8, 0x3905f8 },
    { _T("Effect 6"), 0x3905f8, 0x390618 },
    { _T("Effect 7"), 0x390618, 0x390638 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Ryu Punch"), 0x3aa138, 0x3aa178, indexSVCSprites_Ryu, 0x21 },
    { _T("Ryu Kick"), 0x3aa178, 0x3aa1b8, indexSVCSprites_Ryu, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Ryu Punch"), 0x3a8138, 0x3a8178, indexSVCSprites_Ryu, 0x20 },
    { _T("Ryu Kick"), 0x3a8178, 0x3a81b8, indexSVCSprites_Ryu, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_PUNCH_PALETTES[] =
{
    { _T("Ken"), 0x375538, 0x375558, indexSVCSprites_Ken },
    { _T("Fire Effect 1"), 0x375558, 0x375578, indexSVCSprites_Ken },
    { _T("Fire Effect 2"), 0x375578, 0x375598, indexSVCSprites_Ken },
    { _T("Electric Shock Effect"), 0x375598, 0x3755b8, indexSVCSprites_Ken },
    { _T("Effect 4"), 0x3755b8, 0x3755d8, indexSVCSprites_Ken },
    { _T("Effect 5"), 0x3755d8, 0x3755f8, indexSVCSprites_Ken },
    { _T("Soul Palette"), 0x3755f8, 0x375618, indexSVCSprites_Ken },
    { _T("Max Flash"), 0x375618, 0x375638, indexSVCSprites_Ken },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_KICK_PALETTES[] =
{
    { _T("Ken"), 0x375738, 0x375758, indexSVCSprites_Ken },
    { _T("Fire Effect 1"), 0x375758, 0x375778, indexSVCSprites_Ken },
    { _T("Fire Effect 2"), 0x375778, 0x375798, indexSVCSprites_Ken },
    { _T("Electric Shock Effect"), 0x375798, 0x3757b8, indexSVCSprites_Ken },
    { _T("Effect 4"), 0x3757b8, 0x3757d8, indexSVCSprites_Ken },
    { _T("Effect 5"), 0x3757d8, 0x3757f8, indexSVCSprites_Ken },
    { _T("Soul Palette"), 0x3757f8, 0x375818, indexSVCSprites_Ken },
    { _T("Max Flash"), 0x375818, 0x375838, indexSVCSprites_Ken },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x390d38, 0x390d58 },
    { _T("Effect 1"), 0x390d58, 0x390d78 },
    { _T("Effect 2"), 0x390d78, 0x390d98 },
    { _T("Effect 3"), 0x390d98, 0x390db8 },
    { _T("Effect 4"), 0x390db8, 0x390dd8 },
    { _T("Effect 5"), 0x390dd8, 0x390df8 },
    { _T("Effect 6"), 0x390df8, 0x390e18 },
    { _T("Effect 7"), 0x390e18, 0x390e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Ken Punch"), 0x3aa1b8, 0x3aa1f8, indexSVCSprites_Ken, 0x21 },
    { _T("Ken Kick"), 0x3aa1f8, 0x3aa238, indexSVCSprites_Ken, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Ken Punch"), 0x3a81b8, 0x3a81f8, indexSVCSprites_Ken, 0x20 },
    { _T("Ken Kick"), 0x3a81f8, 0x3a8238, indexSVCSprites_Ken, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_PUNCH_PALETTES[] =
{
    { _T("Chun-Li"), 0x376538, 0x376558, indexSVCSprites_ChunLi },
    { _T("Fire Effect 1"), 0x376558, 0x376578, indexSVCSprites_ChunLi },
    { _T("Fire Effect 2"), 0x376578, 0x376598, indexSVCSprites_ChunLi },
    { _T("Electric Shock Effect"), 0x376598, 0x3765b8, indexSVCSprites_ChunLi },
    { _T("Effect 4"), 0x3765b8, 0x3765d8, indexSVCSprites_ChunLi },
    { _T("Effect 5"), 0x3765d8, 0x3765f8, indexSVCSprites_ChunLi },
    { _T("Soul Palette"), 0x3765f8, 0x376618, indexSVCSprites_ChunLi },
    { _T("Max Flash"), 0x376618, 0x376638, indexSVCSprites_ChunLi },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_KICK_PALETTES[] =
{
    { _T("Chun-Li"), 0x376738, 0x376758, indexSVCSprites_ChunLi },
    { _T("Fire Effect 1"), 0x376758, 0x376778, indexSVCSprites_ChunLi },
    { _T("Fire Effect 2"), 0x376778, 0x376798, indexSVCSprites_ChunLi },
    { _T("Electric Shock Effect"), 0x376798, 0x3767b8, indexSVCSprites_ChunLi },
    { _T("Effect 4"), 0x3767b8, 0x3767d8, indexSVCSprites_ChunLi },
    { _T("Effect 5"), 0x3767d8, 0x3767f8, indexSVCSprites_ChunLi },
    { _T("Soul Palette"), 0x3767f8, 0x376818, indexSVCSprites_ChunLi },
    { _T("Max Flash"), 0x376818, 0x376838, indexSVCSprites_ChunLi },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x391538, 0x391558 },
    { _T("Effect 1"), 0x391558, 0x391578 },
    { _T("Effect 2"), 0x391578, 0x391598 },
    { _T("Effect 3"), 0x391598, 0x3915b8 },
    { _T("Effect 4"), 0x3915b8, 0x3915d8 },
    { _T("Effect 5"), 0x3915d8, 0x3915f8 },
    { _T("Effect 6"), 0x3915f8, 0x391618 },
    { _T("Effect 7"), 0x391618, 0x391638 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Chun-Li Punch"), 0x3aa238, 0x3aa278, indexSVCSprites_ChunLi, 0x21 },
    { _T("Chun-Li Kick"), 0x3aa278, 0x3aa2b8, indexSVCSprites_ChunLi, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Chun-Li Punch"), 0x3a8238, 0x3a8278, indexSVCSprites_ChunLi, 0x20 },
    { _T("Chun-Li Kick"), 0x3a8278, 0x3a82b8, indexSVCSprites_ChunLi, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_PUNCH_PALETTES[] =
{
    { _T("Guile"), 0x377538, 0x377558, indexSVCSprites_Guile },
    { _T("Fire Effect 1"), 0x377558, 0x377578, indexSVCSprites_Guile },
    { _T("Fire Effect 2"), 0x377578, 0x377598, indexSVCSprites_Guile },
    { _T("Electric Shock Effect"), 0x377598, 0x3775b8, indexSVCSprites_Guile },
    { _T("Effect 4"), 0x3775b8, 0x3775d8, indexSVCSprites_Guile },
    { _T("Effect 5"), 0x3775d8, 0x3775f8, indexSVCSprites_Guile },
    { _T("Soul Palette"), 0x3775f8, 0x377618, indexSVCSprites_Guile },
    { _T("Max Flash"), 0x377618, 0x377638, indexSVCSprites_Guile },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_KICK_PALETTES[] =
{
    { _T("Guile"), 0x377738, 0x377758, indexSVCSprites_Guile },
    { _T("Fire Effect 1"), 0x377758, 0x377778, indexSVCSprites_Guile },
    { _T("Fire Effect 2"), 0x377778, 0x377798, indexSVCSprites_Guile },
    { _T("Electric Shock Effect"), 0x377798, 0x3777b8, indexSVCSprites_Guile },
    { _T("Effect 4"), 0x3777b8, 0x3777d8, indexSVCSprites_Guile },
    { _T("Effect 5"), 0x3777d8, 0x3777f8, indexSVCSprites_Guile },
    { _T("Soul Palette"), 0x3777f8, 0x377818, indexSVCSprites_Guile },
    { _T("Max Flash"), 0x377818, 0x377838, indexSVCSprites_Guile },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x391d38, 0x391d58 },
    { _T("Effect 1"), 0x391d58, 0x391d78 },
    { _T("Effect 2"), 0x391d78, 0x391d98 },
    { _T("Effect 3"), 0x391d98, 0x391db8 },
    { _T("Effect 4"), 0x391db8, 0x391dd8 },
    { _T("Effect 5"), 0x391dd8, 0x391df8 },
    { _T("Effect 6"), 0x391df8, 0x391e18 },
    { _T("Effect 7"), 0x391e18, 0x391e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Guile Punch"), 0x3aa2b8, 0x3aa2f8, indexSVCSprites_Guile, 0x21 },
    { _T("Guile Kick"), 0x3aa2f8, 0x3aa338, indexSVCSprites_Guile, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Guile Punch"), 0x3a82b8, 0x3a82f8, indexSVCSprites_Guile, 0x20 },
    { _T("Guile Kick"), 0x3a82f8, 0x3a8338, indexSVCSprites_Guile, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_PUNCH_PALETTES[] =
{
    { _T("Dhalsim"), 0x378538, 0x378558, indexSVCSprites_Dhalsim },
    { _T("Fire Effect 1"), 0x378558, 0x378578, indexSVCSprites_Dhalsim },
    { _T("Fire Effect 2"), 0x378578, 0x378598, indexSVCSprites_Dhalsim },
    { _T("Electric Shock Effect"), 0x378598, 0x3785b8, indexSVCSprites_Dhalsim },
    { _T("Effect 4"), 0x3785b8, 0x3785d8, indexSVCSprites_Dhalsim },
    { _T("Effect 5"), 0x3785d8, 0x3785f8, indexSVCSprites_Dhalsim },
    { _T("Soul Palette"), 0x3785f8, 0x378618, indexSVCSprites_Dhalsim },
    { _T("Max Flash"), 0x378618, 0x378638, indexSVCSprites_Dhalsim },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_KICK_PALETTES[] =
{
    { _T("Dhalsim"), 0x378738, 0x378758, indexSVCSprites_Dhalsim },
    { _T("Fire Effect 1"), 0x378758, 0x378778, indexSVCSprites_Dhalsim },
    { _T("Fire Effect 2"), 0x378778, 0x378798, indexSVCSprites_Dhalsim },
    { _T("Electric Shock Effect"), 0x378798, 0x3787b8, indexSVCSprites_Dhalsim },
    { _T("Effect 4"), 0x3787b8, 0x3787d8, indexSVCSprites_Dhalsim },
    { _T("Effect 5"), 0x3787d8, 0x3787f8, indexSVCSprites_Dhalsim },
    { _T("Soul Palette"), 0x3787f8, 0x378818, indexSVCSprites_Dhalsim },
    { _T("Max Flash"), 0x378818, 0x378838, indexSVCSprites_Dhalsim },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x392538, 0x392558 },
    { _T("Effect 1"), 0x392558, 0x392578 },
    { _T("Effect 2"), 0x392578, 0x392598 },
    { _T("Effect 3"), 0x392598, 0x3925b8 },
    { _T("Effect 4"), 0x3925b8, 0x3925d8 },
    { _T("Effect 5"), 0x3925d8, 0x3925f8 },
    { _T("Effect 6"), 0x3925f8, 0x392618 },
    { _T("Effect 7"), 0x392618, 0x392638 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Dhalsim Punch"), 0x3aa338, 0x3aa378, indexSVCSprites_Dhalsim, 0x21 },
    { _T("Dhalsim Kick"), 0x3aa378, 0x3aa3b8, indexSVCSprites_Dhalsim, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Dhalsim Punch"), 0x3a8338, 0x3a8378, indexSVCSprites_Dhalsim, 0x20 },
    { _T("Dhalsim Kick"), 0x3a8378, 0x3a83b8, indexSVCSprites_Dhalsim, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_PUNCH_PALETTES[] =
{
    { _T("Boxer"), 0x379538, 0x379558, indexSVCSprites_Boxer },
    { _T("Fire Effect 1"), 0x379558, 0x379578, indexSVCSprites_Boxer },
    { _T("Fire Effect 2"), 0x379578, 0x379598, indexSVCSprites_Boxer },
    { _T("Electric Shock Effect"), 0x379598, 0x3795b8, indexSVCSprites_Boxer },
    { _T("Effect 4"), 0x3795b8, 0x3795d8, indexSVCSprites_Boxer },
    { _T("Effect 5"), 0x3795d8, 0x3795f8, indexSVCSprites_Boxer },
    { _T("Soul Palette"), 0x3795f8, 0x379618, indexSVCSprites_Boxer },
    { _T("Max Flash"), 0x379618, 0x379638, indexSVCSprites_Boxer },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_KICK_PALETTES[] =
{
    { _T("Boxer"), 0x379738, 0x379758, indexSVCSprites_Boxer },
    { _T("Fire Effect 1"), 0x379758, 0x379778, indexSVCSprites_Boxer },
    { _T("Fire Effect 2"), 0x379778, 0x379798, indexSVCSprites_Boxer },
    { _T("Electric Shock Effect"), 0x379798, 0x3797b8, indexSVCSprites_Boxer },
    { _T("Effect 4"), 0x3797b8, 0x3797d8, indexSVCSprites_Boxer },
    { _T("Effect 5"), 0x3797d8, 0x3797f8, indexSVCSprites_Boxer },
    { _T("Soul Palette"), 0x3797f8, 0x379818, indexSVCSprites_Boxer },
    { _T("Max Flash"), 0x379818, 0x379838, indexSVCSprites_Boxer },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x392d38, 0x392d58 },
    { _T("Effect 1"), 0x392d58, 0x392d78 },
    { _T("Effect 2"), 0x392d78, 0x392d98 },
    { _T("Effect 3"), 0x392d98, 0x392db8 },
    { _T("Effect 4"), 0x392db8, 0x392dd8 },
    { _T("Effect 5"), 0x392dd8, 0x392df8 },
    { _T("Effect 6"), 0x392df8, 0x392e18 },
    { _T("Effect 7"), 0x392e18, 0x392e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Boxer Punch"), 0x3aa3b8, 0x3aa3f8, indexSVCSprites_Boxer, 0x21 },
    { _T("Boxer Kick"), 0x3aa3f8, 0x3aa438, indexSVCSprites_Boxer, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Boxer Punch"), 0x3a83b8, 0x3a83f8, indexSVCSprites_Boxer, 0x20 },
    { _T("Boxer Kick"), 0x3a83f8, 0x3a8438, indexSVCSprites_Boxer, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_PUNCH_PALETTES[] =
{
    { _T("Claw"), 0x37a538, 0x37a558, indexSVCSprites_Claw },
    { _T("Fire Effect 1"), 0x37a558, 0x37a578, indexSVCSprites_Claw },
    { _T("Fire Effect 2"), 0x37a578, 0x37a598, indexSVCSprites_Claw },
    { _T("Electric Shock Effect"), 0x37a598, 0x37a5b8, indexSVCSprites_Claw },
    { _T("Effect 4"), 0x37a5b8, 0x37a5d8, indexSVCSprites_Claw },
    { _T("Effect 5"), 0x37a5d8, 0x37a5f8, indexSVCSprites_Claw },
    { _T("Soul Palette"), 0x37a5f8, 0x37a618, indexSVCSprites_Claw },
    { _T("Max Flash"), 0x37a618, 0x37a638, indexSVCSprites_Claw },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_KICK_PALETTES[] =
{
    { _T("Claw"), 0x37a738, 0x37a758, indexSVCSprites_Claw },
    { _T("Fire Effect 1"), 0x37a758, 0x37a778, indexSVCSprites_Claw },
    { _T("Fire Effect 2"), 0x37a778, 0x37a798, indexSVCSprites_Claw },
    { _T("Electric Shock Effect"), 0x37a798, 0x37a7b8, indexSVCSprites_Claw },
    { _T("Effect 4"), 0x37a7b8, 0x37a7d8, indexSVCSprites_Claw },
    { _T("Effect 5"), 0x37a7d8, 0x37a7f8, indexSVCSprites_Claw },
    { _T("Soul Palette"), 0x37a7f8, 0x37a818, indexSVCSprites_Claw },
    { _T("Max Flash"), 0x37a818, 0x37a838, indexSVCSprites_Claw },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x393538, 0x393558 },
    { _T("Effect 1"), 0x393558, 0x393578 },
    { _T("Effect 2"), 0x393578, 0x393598 },
    { _T("Effect 3"), 0x393598, 0x3935b8 },
    { _T("Effect 4"), 0x3935b8, 0x3935d8 },
    { _T("Effect 5"), 0x3935d8, 0x3935f8 },
    { _T("Effect 6"), 0x3935f8, 0x393618 },
    { _T("Effect 7"), 0x393618, 0x393638 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Claw Punch"), 0x3aa438, 0x3aa478, indexSVCSprites_Claw, 0x21 },
    { _T("Claw Kick"), 0x3aa478, 0x3aa4b8, indexSVCSprites_Claw, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Claw Punch"), 0x3a8438, 0x3a8478, indexSVCSprites_Claw, 0x20 },
    { _T("Claw Kick"), 0x3a8478, 0x3a84b8, indexSVCSprites_Claw, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_PUNCH_PALETTES[] =
{
    { _T("Sagat"), 0x37b538, 0x37b558, indexSVCSprites_Sagat },
    { _T("Fire Effect 1"), 0x37b558, 0x37b578, indexSVCSprites_Sagat },
    { _T("Fire Effect 2"), 0x37b578, 0x37b598, indexSVCSprites_Sagat },
    { _T("Electric Shock Effect"), 0x37b598, 0x37b5b8, indexSVCSprites_Sagat },
    { _T("Effect 4"), 0x37b5b8, 0x37b5d8, indexSVCSprites_Sagat },
    { _T("Effect 5"), 0x37b5d8, 0x37b5f8, indexSVCSprites_Sagat },
    { _T("Soul Palette"), 0x37b5f8, 0x37b618, indexSVCSprites_Sagat },
    { _T("Max Flash"), 0x37b618, 0x37b638, indexSVCSprites_Sagat },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_KICK_PALETTES[] =
{
    { _T("Sagat"), 0x37b738, 0x37b758, indexSVCSprites_Sagat },
    { _T("Fire Effect 1"), 0x37b758, 0x37b778, indexSVCSprites_Sagat },
    { _T("Fire Effect 2"), 0x37b778, 0x37b798, indexSVCSprites_Sagat },
    { _T("Electric Shock Effect"), 0x37b798, 0x37b7b8, indexSVCSprites_Sagat },
    { _T("Effect 4"), 0x37b7b8, 0x37b7d8, indexSVCSprites_Sagat },
    { _T("Effect 5"), 0x37b7d8, 0x37b7f8, indexSVCSprites_Sagat },
    { _T("Soul Palette"), 0x37b7f8, 0x37b818, indexSVCSprites_Sagat },
    { _T("Max Flash"), 0x37b818, 0x37b838, indexSVCSprites_Sagat },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x393d38, 0x393d58 },
    { _T("Effect 1"), 0x393d58, 0x393d78 },
    { _T("Effect 2"), 0x393d78, 0x393d98 },
    { _T("Effect 3"), 0x393d98, 0x393db8 },
    { _T("Effect 4"), 0x393db8, 0x393dd8 },
    { _T("Effect 5"), 0x393dd8, 0x393df8 },
    { _T("Effect 6"), 0x393df8, 0x393e18 },
    { _T("Effect 7"), 0x393e18, 0x393e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Sagat Punch"), 0x3aa4b8, 0x3aa4f8, indexSVCSprites_Sagat, 0x21 },
    { _T("Sagat Kick"), 0x3aa4f8, 0x3aa538, indexSVCSprites_Sagat, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Sagat Punch"), 0x3a84b8, 0x3a84f8, indexSVCSprites_Sagat, 0x20 },
    { _T("Sagat Kick"), 0x3a84f8, 0x3a8538, indexSVCSprites_Sagat, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_PUNCH_PALETTES[] =
{
    { _T("Dictator"), 0x37c538, 0x37c558, indexSVCSprites_Dictator },
    { _T("Fire Effect 1"), 0x37c558, 0x37c578, indexSVCSprites_Dictator },
    { _T("Fire Effect 2"), 0x37c578, 0x37c598, indexSVCSprites_Dictator },
    { _T("Electric Shock Effect"), 0x37c598, 0x37c5b8, indexSVCSprites_Dictator },
    { _T("Effect 4"), 0x37c5b8, 0x37c5d8, indexSVCSprites_Dictator },
    { _T("Effect 5"), 0x37c5d8, 0x37c5f8, indexSVCSprites_Dictator },
    { _T("Soul Palette"), 0x37c5f8, 0x37c618, indexSVCSprites_Dictator },
    { _T("Max Flash"), 0x37c618, 0x37c638, indexSVCSprites_Dictator },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_KICK_PALETTES[] =
{
    { _T("Dictator"), 0x37c738, 0x37c758, indexSVCSprites_Dictator },
    { _T("Fire Effect 1"), 0x37c758, 0x37c778, indexSVCSprites_Dictator },
    { _T("Fire Effect 2"), 0x37c778, 0x37c798, indexSVCSprites_Dictator },
    { _T("Electric Shock Effect"), 0x37c798, 0x37c7b8, indexSVCSprites_Dictator },
    { _T("Effect 4"), 0x37c7b8, 0x37c7d8, indexSVCSprites_Dictator },
    { _T("Effect 5"), 0x37c7d8, 0x37c7f8, indexSVCSprites_Dictator },
    { _T("Soul Palette"), 0x37c7f8, 0x37c818, indexSVCSprites_Dictator },
    { _T("Max Flash"), 0x37c818, 0x37c838, indexSVCSprites_Dictator },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x394538, 0x394558 },
    { _T("Effect 1"), 0x394558, 0x394578 },
    { _T("Effect 2"), 0x394578, 0x394598 },
    { _T("Effect 3"), 0x394598, 0x3945b8 },
    { _T("Effect 4"), 0x3945b8, 0x3945d8 },
    { _T("Effect 5"), 0x3945d8, 0x3945f8 },
    { _T("Effect 6"), 0x3945f8, 0x394618 },
    { _T("Effect 7"), 0x394618, 0x394638 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Dictator Punch"), 0x3aa538, 0x3aa578, indexSVCSprites_Dictator, 0x21 },
    { _T("Dictator Kick"), 0x3aa578, 0x3aa5b8, indexSVCSprites_Dictator, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Dictator Punch"), 0x3a8538, 0x3a8578, indexSVCSprites_Dictator, 0x20 },
    { _T("Dictator Kick"), 0x3a8578, 0x3a85b8, indexSVCSprites_Dictator, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_PUNCH_PALETTES[] =
{
    { _T("Akuma"), 0x37d538, 0x37d558, indexSVCSprites_Akuma },
    { _T("Fire Effect 1"), 0x37d558, 0x37d578, indexSVCSprites_Akuma },
    { _T("Fire Effect 2"), 0x37d578, 0x37d598, indexSVCSprites_Akuma },
    { _T("Electric Shock Effect"), 0x37d598, 0x37d5b8, indexSVCSprites_Akuma },
    { _T("Effect 4"), 0x37d5b8, 0x37d5d8, indexSVCSprites_Akuma },
    { _T("Effect 5"), 0x37d5d8, 0x37d5f8, indexSVCSprites_Akuma },
    { _T("Soul Palette"), 0x37d5f8, 0x37d618, indexSVCSprites_Akuma },
    { _T("Max Flash"), 0x37d618, 0x37d638, indexSVCSprites_Akuma },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_KICK_PALETTES[] =
{
    { _T("Akuma"), 0x37d738, 0x37d758, indexSVCSprites_Akuma },
    { _T("Fire Effect 1"), 0x37d758, 0x37d778, indexSVCSprites_Akuma },
    { _T("Fire Effect 2"), 0x37d778, 0x37d798, indexSVCSprites_Akuma },
    { _T("Electric Shock Effect"), 0x37d798, 0x37d7b8, indexSVCSprites_Akuma },
    { _T("Effect 4"), 0x37d7b8, 0x37d7d8, indexSVCSprites_Akuma },
    { _T("Effect 5"), 0x37d7d8, 0x37d7f8, indexSVCSprites_Akuma },
    { _T("Soul Palette"), 0x37d7f8, 0x37d818, indexSVCSprites_Akuma },
    { _T("Max Flash"), 0x37d818, 0x37d838, indexSVCSprites_Akuma },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x394d38, 0x394d58 },
    { _T("Effect 1"), 0x394d58, 0x394d78 },
    { _T("Effect 2"), 0x394d78, 0x394d98 },
    { _T("Effect 3"), 0x394d98, 0x394db8 },
    { _T("Effect 4"), 0x394db8, 0x394dd8 },
    { _T("Effect 5"), 0x394dd8, 0x394df8 },
    { _T("Effect 6"), 0x394df8, 0x394e18 },
    { _T("Effect 7"), 0x394e18, 0x394e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Akuma Punch"), 0x3aa5b8, 0x3aa5f8, indexSVCSprites_Akuma, 0x21 },
    { _T("Akuma Kick"), 0x3aa5f8, 0x3aa638, indexSVCSprites_Akuma, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Akuma Punch"), 0x3a85b8, 0x3a85f8, indexSVCSprites_Akuma, 0x20 },
    { _T("Akuma Kick"), 0x3a85f8, 0x3a8638, indexSVCSprites_Akuma, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_PUNCH_PALETTES[] =
{
    { _T("Hugo"), 0x37e538, 0x37e558, indexSVCSprites_Hugo },
    { _T("Fire Effect 1"), 0x37e558, 0x37e578, indexSVCSprites_Hugo },
    { _T("Fire Effect 2"), 0x37e578, 0x37e598, indexSVCSprites_Hugo },
    { _T("Electric Shock Effect"), 0x37e598, 0x37e5b8, indexSVCSprites_Hugo },
    { _T("Effect 4"), 0x37e5b8, 0x37e5d8, indexSVCSprites_Hugo },
    { _T("Effect 5"), 0x37e5d8, 0x37e5f8, indexSVCSprites_Hugo },
    { _T("Soul Palette"), 0x37e5f8, 0x37e618, indexSVCSprites_Hugo },
    { _T("Max Flash"), 0x37e618, 0x37e638, indexSVCSprites_Hugo },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_KICK_PALETTES[] =
{
    { _T("Hugo"), 0x37e738, 0x37e758, indexSVCSprites_Hugo },
    { _T("Fire Effect 1"), 0x37e758, 0x37e778, indexSVCSprites_Hugo },
    { _T("Fire Effect 2"), 0x37e778, 0x37e798, indexSVCSprites_Hugo },
    { _T("Electric Shock Effect"), 0x37e798, 0x37e7b8, indexSVCSprites_Hugo },
    { _T("Effect 4"), 0x37e7b8, 0x37e7d8, indexSVCSprites_Hugo },
    { _T("Effect 5"), 0x37e7d8, 0x37e7f8, indexSVCSprites_Hugo },
    { _T("Soul Palette"), 0x37e7f8, 0x37e818, indexSVCSprites_Hugo },
    { _T("Max Flash"), 0x37e818, 0x37e838, indexSVCSprites_Hugo },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x395538, 0x395558 },
    { _T("Effect 1"), 0x395558, 0x395578 },
    { _T("Effect 2"), 0x395578, 0x395598 },
    { _T("Effect 3"), 0x395598, 0x3955b8 },
    { _T("Effect 4"), 0x3955b8, 0x3955d8 },
    { _T("Effect 5"), 0x3955d8, 0x3955f8 },
    { _T("Effect 6"), 0x3955f8, 0x395618 },
    { _T("Effect 7"), 0x395618, 0x395638 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Hugo Punch"), 0x3aa638, 0x3aa678, indexSVCSprites_Hugo, 0x21 },
    { _T("Hugo Kick"), 0x3aa678, 0x3aa6b8, indexSVCSprites_Hugo, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Hugo Punch"), 0x3a8638, 0x3a8678, indexSVCSprites_Hugo, 0x20 },
    { _T("Hugo Kick"), 0x3a8678, 0x3a86b8, indexSVCSprites_Hugo, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Poison Punch"), 0x3aab38, 0x3aab78, indexSVCSprites_Poison, 0x21 },
    { _T("Poison Kick"), 0x3aab78, 0x3aabb8, indexSVCSprites_Poison, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Poison Punch"), 0x3a8c38, 0x3a8c78, indexSVCSprites_Poison, 0x20 },
    { _T("Poison Kick"), 0x3a8c78, 0x3a8cb8, indexSVCSprites_Poison, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_PUNCH_PALETTES[] =
{
    { _T("Tessa"), 0x37f538, 0x37f558, indexSVCSprites_Tessa },
    { _T("Fire Effect 1"), 0x37f558, 0x37f578, indexSVCSprites_Tessa },
    { _T("Fire Effect 2"), 0x37f578, 0x37f598, indexSVCSprites_Tessa },
    { _T("Electric Shock Effect"), 0x37f598, 0x37f5b8, indexSVCSprites_Tessa },
    { _T("Effect 4"), 0x37f5b8, 0x37f5d8, indexSVCSprites_Tessa },
    { _T("Effect 5"), 0x37f5d8, 0x37f5f8, indexSVCSprites_Tessa },
    { _T("Soul Palette"), 0x37f5f8, 0x37f618, indexSVCSprites_Tessa },
    { _T("Max Flash"), 0x37f618, 0x37f638, indexSVCSprites_Tessa },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_KICK_PALETTES[] =
{
    { _T("Tessa"), 0x37f738, 0x37f758, indexSVCSprites_Tessa },
    { _T("Fire Effect 1"), 0x37f758, 0x37f778, indexSVCSprites_Tessa },
    { _T("Fire Effect 2"), 0x37f778, 0x37f798, indexSVCSprites_Tessa },
    { _T("Electric Shock Effect"), 0x37f798, 0x37f7b8, indexSVCSprites_Tessa },
    { _T("Effect 4"), 0x37f7b8, 0x37f7d8, indexSVCSprites_Tessa },
    { _T("Effect 5"), 0x37f7d8, 0x37f7f8, indexSVCSprites_Tessa },
    { _T("Soul Palette"), 0x37f7f8, 0x37f818, indexSVCSprites_Tessa },
    { _T("Max Flash"), 0x37f818, 0x37f838, indexSVCSprites_Tessa },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x395d38, 0x395d58 },
    { _T("Effect 1"), 0x395d58, 0x395d78 },
    { _T("Effect 2"), 0x395d78, 0x395d98 },
    { _T("Effect 3"), 0x395d98, 0x395db8 },
    { _T("Effect 4"), 0x395db8, 0x395dd8 },
    { _T("Effect 5"), 0x395dd8, 0x395df8 },
    { _T("Effect 6"), 0x395df8, 0x395e18 },
    { _T("Effect 7"), 0x395e18, 0x395e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Tessa Punch"), 0x3aa6b8, 0x3aa6f8, indexSVCSprites_Tessa, 0x21 },
    { _T("Tessa Kick"), 0x3aa6f8, 0x3aa738, indexSVCSprites_Tessa, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Tessa Punch"), 0x3a86b8, 0x3a86f8, indexSVCSprites_Tessa, 0x20 },
    { _T("Tessa Kick"), 0x3a86f8, 0x3a8738, indexSVCSprites_Tessa, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_PUNCH_PALETTES[] =
{
    { _T("Zero"), 0x380538, 0x380558, indexSVCSprites_Zero },
    { _T("Fire Effect 1"), 0x380558, 0x380578, indexSVCSprites_Zero },
    { _T("Fire Effect 2"), 0x380578, 0x380598, indexSVCSprites_Zero },
    { _T("Electric Shock Effect"), 0x380598, 0x3805b8, indexSVCSprites_Zero },
    { _T("Effect 4"), 0x3805b8, 0x3805d8, indexSVCSprites_Zero },
    { _T("Effect 5"), 0x3805d8, 0x3805f8, indexSVCSprites_Zero },
    { _T("Soul Palette"), 0x3805f8, 0x380618, indexSVCSprites_Zero },
    { _T("Max Flash"), 0x380618, 0x380638, indexSVCSprites_Zero },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_KICK_PALETTES[] =
{
    { _T("Zero"), 0x380738, 0x380758, indexSVCSprites_Zero },
    { _T("Fire Effect 1"), 0x380758, 0x380778, indexSVCSprites_Zero },
    { _T("Fire Effect 2"), 0x380778, 0x380798, indexSVCSprites_Zero },
    { _T("Electric Shock Effect"), 0x380798, 0x3807b8, indexSVCSprites_Zero },
    { _T("Effect 4"), 0x3807b8, 0x3807d8, indexSVCSprites_Zero },
    { _T("Effect 5"), 0x3807d8, 0x3807f8, indexSVCSprites_Zero },
    { _T("Soul Palette"), 0x3807f8, 0x380818, indexSVCSprites_Zero },
    { _T("Max Flash"), 0x380818, 0x380838, indexSVCSprites_Zero },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x396538, 0x396558 },
    { _T("Effect 1"), 0x396558, 0x396578 },
    { _T("Effect 2"), 0x396578, 0x396598 },
    { _T("Effect 3"), 0x396598, 0x3965b8 },
    { _T("Effect 4"), 0x3965b8, 0x3965d8 },
    { _T("Effect 5"), 0x3965d8, 0x3965f8 },
    { _T("Effect 6"), 0x3965f8, 0x396618 },
    { _T("Effect 7"), 0x396618, 0x396638 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Zero Punch"), 0x3aa738, 0x3aa778, indexSVCSprites_Zero, 0x21 },
    { _T("Zero Kick"), 0x3aa778, 0x3aa7b8, indexSVCSprites_Zero, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_ZERO_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Zero Punch"), 0x3a8738, 0x3a8778, indexSVCSprites_Zero, 0x20 },
    { _T("Zero Kick"), 0x3a8778, 0x3a87b8, indexSVCSprites_Zero, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Ciel Punch"), 0x3a8bb8, 0x3a8bf8, indexSVCSprites_Ciel, 0x20 },
    { _T("Ciel Kick"), 0x3a8bf8, 0x3a8c38, indexSVCSprites_Ciel, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_PUNCH_PALETTES[] =
{
    { _T("Demitri"), 0x381538, 0x381558, indexSVCSprites_Demitri },
    { _T("Fire Effect 1"), 0x381558, 0x381578, indexSVCSprites_Demitri },
    { _T("Fire Effect 2"), 0x381578, 0x381598, indexSVCSprites_Demitri },
    { _T("Electric Shock Effect"), 0x381598, 0x3815b8, indexSVCSprites_Demitri },
    { _T("Effect 4"), 0x3815b8, 0x3815d8, indexSVCSprites_Demitri },
    { _T("Effect 5"), 0x3815d8, 0x3815f8, indexSVCSprites_Demitri },
    { _T("Soul Palette"), 0x3815f8, 0x381618, indexSVCSprites_Demitri },
    { _T("Max Flash"), 0x381618, 0x381638, indexSVCSprites_Demitri },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_KICK_PALETTES[] =
{
    { _T("Demitri"), 0x381738, 0x381758, indexSVCSprites_Demitri },
    { _T("Fire Effect 1"), 0x381758, 0x381778, indexSVCSprites_Demitri },
    { _T("Fire Effect 2"), 0x381778, 0x381798, indexSVCSprites_Demitri },
    { _T("Electric Shock Effect"), 0x381798, 0x3817b8, indexSVCSprites_Demitri },
    { _T("Effect 4"), 0x3817b8, 0x3817d8, indexSVCSprites_Demitri },
    { _T("Effect 5"), 0x3817d8, 0x3817f8, indexSVCSprites_Demitri },
    { _T("Soul Palette"), 0x3817f8, 0x381818, indexSVCSprites_Demitri },
    { _T("Max Flash"), 0x381818, 0x381838, indexSVCSprites_Demitri },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x396d38, 0x396d58 },
    { _T("Effect 1"), 0x396d58, 0x396d78 },
    { _T("Effect 2"), 0x396d78, 0x396d98 },
    { _T("Effect 3"), 0x396d98, 0x396db8 },
    { _T("Effect 4"), 0x396db8, 0x396dd8 },
    { _T("Effect 5"), 0x396dd8, 0x396df8 },
    { _T("Effect 6"), 0x396df8, 0x396e18 },
    { _T("Effect 7"), 0x396e18, 0x396e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Demitri Punch"), 0x3aa7b8, 0x3aa7f8, indexSVCSprites_Demitri, 0x21 },
    { _T("Demitri Kick"), 0x3aa7f8, 0x3aa838, indexSVCSprites_Demitri, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Demitri Punch"), 0x3a87b8, 0x3a87f8, indexSVCSprites_Demitri, 0x20 },
    { _T("Demitri Kick"), 0x3a87f8, 0x3a8838, indexSVCSprites_Demitri, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_PUNCH_PALETTES[] =
{
    { _T("Dan"), 0x382538, 0x382558, indexSVCSprites_Dan },
    { _T("Fire Effect 1"), 0x382558, 0x382578, indexSVCSprites_Dan },
    { _T("Fire Effect 2"), 0x382578, 0x382598, indexSVCSprites_Dan },
    { _T("Electric Shock Effect"), 0x382598, 0x3825b8, indexSVCSprites_Dan },
    { _T("Effect 4"), 0x3825b8, 0x3825d8, indexSVCSprites_Dan },
    { _T("Effect 5"), 0x3825d8, 0x3825f8, indexSVCSprites_Dan },
    { _T("Soul Palette"), 0x3825f8, 0x382618, indexSVCSprites_Dan },
    { _T("Max Flash"), 0x382618, 0x382638, indexSVCSprites_Dan },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_KICK_PALETTES[] =
{
    { _T("Dan"), 0x382738, 0x382758, indexSVCSprites_Dan },
    { _T("Fire Effect 1"), 0x382758, 0x382778, indexSVCSprites_Dan },
    { _T("Fire Effect 2"), 0x382778, 0x382798, indexSVCSprites_Dan },
    { _T("Electric Shock Effect"), 0x382798, 0x3827b8, indexSVCSprites_Dan },
    { _T("Effect 4"), 0x3827b8, 0x3827d8, indexSVCSprites_Dan },
    { _T("Effect 5"), 0x3827d8, 0x3827f8, indexSVCSprites_Dan },
    { _T("Soul Palette"), 0x3827f8, 0x382818, indexSVCSprites_Dan },
    { _T("Max Flash"), 0x382818, 0x382838, indexSVCSprites_Dan },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x397538, 0x397558 },
    { _T("Effect 1"), 0x397558, 0x397578 },
    { _T("Effect 2"), 0x397578, 0x397598 },
    { _T("Effect 3"), 0x397598, 0x3975b8 },
    { _T("Effect 4"), 0x3975b8, 0x3975d8 },
    { _T("Effect 5"), 0x3975d8, 0x3975f8 },
    { _T("Effect 6"), 0x3975f8, 0x397618 },
    { _T("Effect 7"), 0x397618, 0x397638 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Dan Punch"), 0x3aa838, 0x3aa878, indexSVCSprites_Dan, 0x21 },
    { _T("Dan Kick"), 0x3aa878, 0x3aa8b8, indexSVCSprites_Dan, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Dan Punch"), 0x3a8838, 0x3a8878, indexSVCSprites_Dan, 0x20 },
    { _T("Dan Kick"), 0x3a8878, 0x3a88b8, indexSVCSprites_Dan, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_PUNCH_PALETTES[] =
{
    { _T("Red Arremer"), 0x383538, 0x383558, indexSVCSprites_RedArremer },
    { _T("Fire Effect 1"), 0x383558, 0x383578, indexSVCSprites_RedArremer },
    { _T("Fire Effect 2"), 0x383578, 0x383598, indexSVCSprites_RedArremer },
    { _T("Electric Shock Effect"), 0x383598, 0x3835b8, indexSVCSprites_RedArremer },
    { _T("Effect 4"), 0x3835b8, 0x3835d8, indexSVCSprites_RedArremer },
    { _T("Effect 5"), 0x3835d8, 0x3835f8, indexSVCSprites_RedArremer },
    { _T("Soul Palette"), 0x3835f8, 0x383618, indexSVCSprites_RedArremer },
    { _T("Max Flash"), 0x383618, 0x383638, indexSVCSprites_RedArremer },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_KICK_PALETTES[] =
{
    { _T("Red Arremer"), 0x383738, 0x383758, indexSVCSprites_RedArremer },
    { _T("Fire Effect 1"), 0x383758, 0x383778, indexSVCSprites_RedArremer },
    { _T("Fire Effect 2"), 0x383778, 0x383798, indexSVCSprites_RedArremer },
    { _T("Electric Shock Effect"), 0x383798, 0x3837b8, indexSVCSprites_RedArremer },
    { _T("Effect 4"), 0x3837b8, 0x3837d8, indexSVCSprites_RedArremer },
    { _T("Effect 5"), 0x3837d8, 0x3837f8, indexSVCSprites_RedArremer },
    { _T("Soul Palette"), 0x3837f8, 0x383818, indexSVCSprites_RedArremer },
    { _T("Max Flash"), 0x383818, 0x383838, indexSVCSprites_RedArremer },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x397d38, 0x397d58 },
    { _T("Effect 1"), 0x397d58, 0x397d78 },
    { _T("Effect 2"), 0x397d78, 0x397d98 },
    { _T("Effect 3"), 0x397d98, 0x397db8 },
    { _T("Effect 4"), 0x397db8, 0x397dd8 },
    { _T("Effect 5"), 0x397dd8, 0x397df8 },
    { _T("Effect 6"), 0x397df8, 0x397e18 },
    { _T("Effect 7"), 0x397e18, 0x397e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Red Arremer Punch"), 0x3aa8b8, 0x3aa8f8, indexSVCSprites_RedArremer, 0x21 },
    { _T("Red Arremer Kick"), 0x3aa8f8, 0x3aa938, indexSVCSprites_RedArremer, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Red Arremer Punch"), 0x3a88b8, 0x3a88f8, indexSVCSprites_RedArremer, 0x20 },
    { _T("Red Arremer Kick"), 0x3a88f8, 0x3a8938, indexSVCSprites_RedArremer, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES[] =
{
    { _T("Orochi Iori"), 0x384538, 0x384558, indexSVCSprites_OrochiIori },
    { _T("Fire Effect 1"), 0x384558, 0x384578, indexSVCSprites_OrochiIori },
    { _T("Fire Effect 2"), 0x384578, 0x384598, indexSVCSprites_OrochiIori },
    { _T("Electric Shock Effect"), 0x384598, 0x3845b8, indexSVCSprites_OrochiIori },
    { _T("Effect 4"), 0x3845b8, 0x3845d8, indexSVCSprites_OrochiIori },
    { _T("Effect 5"), 0x3845d8, 0x3845f8, indexSVCSprites_OrochiIori },
    { _T("Soul Palette"), 0x3845f8, 0x384618, indexSVCSprites_OrochiIori },
    { _T("Max Flash"), 0x384618, 0x384638, indexSVCSprites_OrochiIori },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_KICK_PALETTES[] =
{
    { _T("Orochi Iori"), 0x384738, 0x384758, indexSVCSprites_OrochiIori },
    { _T("Fire Effect 1"), 0x384758, 0x384778, indexSVCSprites_OrochiIori },
    { _T("Fire Effect 2"), 0x384778, 0x384798, indexSVCSprites_OrochiIori },
    { _T("Electric Shock Effect"), 0x384798, 0x3847b8, indexSVCSprites_OrochiIori },
    { _T("Effect 4"), 0x3847b8, 0x3847d8, indexSVCSprites_OrochiIori },
    { _T("Effect 5"), 0x3847d8, 0x3847f8, indexSVCSprites_OrochiIori },
    { _T("Soul Palette"), 0x3847f8, 0x384818, indexSVCSprites_OrochiIori },
    { _T("Max Flash"), 0x384818, 0x384838, indexSVCSprites_OrochiIori },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x398538, 0x398558 },
    { _T("Effect 1"), 0x398558, 0x398578 },
    { _T("Effect 2"), 0x398578, 0x398598 },
    { _T("Effect 3"), 0x398598, 0x3985b8 },
    { _T("Effect 4"), 0x3985b8, 0x3985d8 },
    { _T("Effect 5"), 0x3985d8, 0x3985f8 },
    { _T("Effect 6"), 0x3985f8, 0x398618 },
    { _T("Effect 7"), 0x398618, 0x398638 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Orochi Iori Punch"), 0x3aa938, 0x3aa978, indexSVCSprites_OrochiIori, 0x21 },
    { _T("Orochi Iori Kick"), 0x3aa978, 0x3aa9b8, indexSVCSprites_OrochiIori, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Orochi Iori Punch"), 0x3a8938, 0x3a8978, indexSVCSprites_OrochiIori, 0x20 },
    { _T("Orochi Iori Kick"), 0x3a8978, 0x3a89b8, indexSVCSprites_OrochiIori, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES[] =
{
    { _T("Serious Mr. Karate"), 0x385538, 0x385558, indexSVCSprites_SeriousMrKarate },
    { _T("Fire Effect 1"), 0x385558, 0x385578, indexSVCSprites_SeriousMrKarate },
    { _T("Fire Effect 2"), 0x385578, 0x385598, indexSVCSprites_SeriousMrKarate },
    { _T("Electric Shock Effect"), 0x385598, 0x3855b8, indexSVCSprites_SeriousMrKarate },
    { _T("Effect 4"), 0x3855b8, 0x3855d8, indexSVCSprites_SeriousMrKarate },
    { _T("Effect 5"), 0x3855d8, 0x3855f8, indexSVCSprites_SeriousMrKarate },
    { _T("Soul Palette"), 0x3855f8, 0x385618, indexSVCSprites_SeriousMrKarate },
    { _T("Max Flash"), 0x385618, 0x385638, indexSVCSprites_SeriousMrKarate },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES[] =
{
    { _T("Serious Mr. Karate"), 0x385738, 0x385758, indexSVCSprites_SeriousMrKarate },
    { _T("Fire Effect 1"), 0x385758, 0x385778, indexSVCSprites_SeriousMrKarate },
    { _T("Fire Effect 2"), 0x385778, 0x385798, indexSVCSprites_SeriousMrKarate },
    { _T("Electric Shock Effect"), 0x385798, 0x3857b8, indexSVCSprites_SeriousMrKarate },
    { _T("Effect 4"), 0x3857b8, 0x3857d8, indexSVCSprites_SeriousMrKarate },
    { _T("Effect 5"), 0x3857d8, 0x3857f8, indexSVCSprites_SeriousMrKarate },
    { _T("Soul Palette"), 0x3857f8, 0x385818, indexSVCSprites_SeriousMrKarate },
    { _T("Max Flash"), 0x385818, 0x385838, indexSVCSprites_SeriousMrKarate },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x398d38, 0x398d58 },
    { _T("Effect 1"), 0x398d58, 0x398d78 },
    { _T("Effect 2"), 0x398d78, 0x398d98 },
    { _T("Effect 3"), 0x398d98, 0x398db8 },
    { _T("Effect 4"), 0x398db8, 0x398dd8 },
    { _T("Effect 5"), 0x398dd8, 0x398df8 },
    { _T("Effect 6"), 0x398df8, 0x398e18 },
    { _T("Effect 7"), 0x398e18, 0x398e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Serious Mr. Karate Punch"), 0x3aa9b8, 0x3aa9f8, indexSVCSprites_SeriousMrKarate, 0x21 },
    { _T("Serious Mr. Karate Kick"), 0x3aa9f8, 0x3aaa38, indexSVCSprites_SeriousMrKarate, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Serious Mr. Karate Punch"), 0x3a89b8, 0x3a89f8, indexSVCSprites_SeriousMrKarate, 0x20 },
    { _T("Serious Mr. Karate Kick"), 0x3a89f8, 0x3a8a38, indexSVCSprites_SeriousMrKarate, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES[] =
{
    { _T("Violent Ken"), 0x386538, 0x386558, indexSVCSprites_ViolentKen },
    { _T("Fire Effect 1"), 0x386558, 0x386578, indexSVCSprites_ViolentKen },
    { _T("Fire Effect 2"), 0x386578, 0x386598, indexSVCSprites_ViolentKen },
    { _T("Electric Shock Effect"), 0x386598, 0x3865b8, indexSVCSprites_ViolentKen },
    { _T("Effect 4"), 0x3865b8, 0x3865d8, indexSVCSprites_ViolentKen },
    { _T("Effect 5"), 0x3865d8, 0x3865f8, indexSVCSprites_ViolentKen },
    { _T("Soul Palette"), 0x3865f8, 0x386618, indexSVCSprites_ViolentKen },
    { _T("Max Flash"), 0x386618, 0x386638, indexSVCSprites_ViolentKen },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES[] =
{
    { _T("Violent Ken"), 0x386738, 0x386758, indexSVCSprites_ViolentKen },
    { _T("Fire Effect 1"), 0x386758, 0x386778, indexSVCSprites_ViolentKen },
    { _T("Fire Effect 2"), 0x386778, 0x386798, indexSVCSprites_ViolentKen },
    { _T("Electric Shock Effect"), 0x386798, 0x3867b8, indexSVCSprites_ViolentKen },
    { _T("Effect 4"), 0x3867b8, 0x3867d8, indexSVCSprites_ViolentKen },
    { _T("Effect 5"), 0x3867d8, 0x3867f8, indexSVCSprites_ViolentKen },
    { _T("Soul Palette"), 0x3867f8, 0x386818, indexSVCSprites_ViolentKen },
    { _T("Max Flash"), 0x386818, 0x386838, indexSVCSprites_ViolentKen },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x399538, 0x399558 },
    { _T("Effect 1"), 0x399558, 0x399578 },
    { _T("Effect 2"), 0x399578, 0x399598 },
    { _T("Effect 3"), 0x399598, 0x3995b8 },
    { _T("Effect 4"), 0x3995b8, 0x3995d8 },
    { _T("Effect 5"), 0x3995d8, 0x3995f8 },
    { _T("Effect 6"), 0x3995f8, 0x399618 },
    { _T("Effect 7"), 0x399618, 0x399638 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Violent Ken Punch"), 0x3aaa38, 0x3aaa78, indexSVCSprites_ViolentKen, 0x21 },
    { _T("Violent Ken Kick"), 0x3aaa78, 0x3aaab8, indexSVCSprites_ViolentKen, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Violent Ken Punch"), 0x3a8a38, 0x3a8a78, indexSVCSprites_ViolentKen, 0x20 },
    { _T("Violent Ken Kick"), 0x3a8a78, 0x3a8ab8, indexSVCSprites_ViolentKen, 0x20 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES[] =
{
    { _T("Shin Akuma"), 0x387538, 0x387558, indexSVCSprites_ShinAkuma },
    { _T("Fire Effect 1"), 0x387558, 0x387578, indexSVCSprites_ShinAkuma },
    { _T("Fire Effect 2"), 0x387578, 0x387598, indexSVCSprites_ShinAkuma },
    { _T("Electric Shock Effect"), 0x387598, 0x3875b8, indexSVCSprites_ShinAkuma },
    { _T("Effect 4"), 0x3875b8, 0x3875d8, indexSVCSprites_ShinAkuma },
    { _T("Effect 5"), 0x3875d8, 0x3875f8, indexSVCSprites_ShinAkuma },
    { _T("Soul Palette"), 0x3875f8, 0x387618, indexSVCSprites_ShinAkuma },
    { _T("Max Flash"), 0x387618, 0x387638, indexSVCSprites_ShinAkuma },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_KICK_PALETTES[] =
{
    { _T("Shin Akuma"), 0x387738, 0x387758, indexSVCSprites_ShinAkuma },
    { _T("Fire Effect 1"), 0x387758, 0x387778, indexSVCSprites_ShinAkuma },
    { _T("Fire Effect 2"), 0x387778, 0x387798, indexSVCSprites_ShinAkuma },
    { _T("Electric Shock Effect"), 0x387798, 0x3877b8, indexSVCSprites_ShinAkuma },
    { _T("Effect 4"), 0x3877b8, 0x3877d8, indexSVCSprites_ShinAkuma },
    { _T("Effect 5"), 0x3877d8, 0x3877f8, indexSVCSprites_ShinAkuma },
    { _T("Soul Palette"), 0x3877f8, 0x387818, indexSVCSprites_ShinAkuma },
    { _T("Max Flash"), 0x387818, 0x387838, indexSVCSprites_ShinAkuma },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES[] =
{
    { _T("Effect 0"), 0x399d38, 0x399d58 },
    { _T("Effect 1"), 0x399d58, 0x399d78 },
    { _T("Effect 2"), 0x399d78, 0x399d98 },
    { _T("Effect 3"), 0x399d98, 0x399db8 },
    { _T("Effect 4"), 0x399db8, 0x399dd8 },
    { _T("Effect 5"), 0x399dd8, 0x399df8 },
    { _T("Effect 6"), 0x399df8, 0x399e18 },
    { _T("Effect 7"), 0x399e18, 0x399e38 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES[] =
{
    { _T("Shin Akuma Punch"), 0x3aaab8, 0x3aaaf8, indexSVCSprites_ShinAkuma, 0x21 },
    { _T("Shin Akuma Kick"), 0x3aaaf8, 0x3aab38, indexSVCSprites_ShinAkuma, 0x21 },
};

const sGame_PaletteDataset SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES[] =
{
    { _T("Shin Akuma Punch"), 0x3a8ab8, 0x3a8af8, indexSVCSprites_ShinAkuma, 0x20 },
    { _T("Shin Akuma Kick"), 0x3a8af8, 0x3a8b38, indexSVCSprites_ShinAkuma, 0x20 },
};

const sDescTreeNode SVCPLUSA_A_KYO_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KYO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_IORI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_IORI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_RYO_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_TERRY_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TERRY_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MAI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MAI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KASUMI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KASUMI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KIM_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_KICK_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KIM_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MRKARATE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MRKARATE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CHOI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHOI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_EARTHQUAKE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GENJURO_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GENJURO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SHIKI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHIKI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GEESEHOWARD_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_MARSPEOPLE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GOENITZ_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GOENITZ_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_PRINCESSATHENA_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_PRINCESSATHENA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_PRINCESSATHENA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_PRINCESSATHENA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_PRINCESSATHENA_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_PRINCESSATHENA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_PRINCESSATHENA_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_PRINCESSATHENA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_PRINCESSATHENA_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_PRINCESSATHENA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_PRINCESSATHENA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_RYU_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_RYU_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_KEN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_KEN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CHUNLI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CHUNLI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_GUILE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_GUILE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DHALSIM_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DHALSIM_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_BOXER_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_BOXER_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CLAW_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CLAW_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SAGAT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SAGAT_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DICTATOR_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DICTATOR_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_AKUMA_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_AKUMA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_HUGO_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_HUGO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_POISON_COLLECTION[] =
{
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_POISON_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_POISON_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_TESSA_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_TESSA_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_ZERO_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_ZERO_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_CIEL_COLLECTION[] =
{
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_CIEL_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DEMITRI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DEMITRI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_DAN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_DAN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_REDARREMER_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_REDARREMER_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_OROCHIIORI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SERIOUSMRKARATE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_VIOLENTKEN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_INTRO_PORTRAITS_PALETTES) },
};

const sDescTreeNode SVCPLUSA_A_SHINAKUMA_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_KICK_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_KICK_PALETTES) },
    { _T("Effects"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_EFFECTS_PALETTES) },
    { _T("Win Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_WIN_PORTRAITS_PALETTES) },
    { _T("Intro Portraits"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_INTRO_PORTRAITS_PALETTES) },
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
    indexSVC_A_PrincessAthena,
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
    indexSVC_A_Poison,
    indexSVC_A_Tessa,
    indexSVC_A_Zero,
    indexSVC_A_Ciel,
    indexSVC_A_Demitri,
    indexSVC_A_Dan,
    indexSVC_A_RedArremer,
    indexSVC_A_OrochiIori,
    indexSVC_A_SeriousMrKarate,
    indexSVC_A_ViolentKen,
    indexSVC_A_ShinAkuma,

    SVCPLUSA_A_EXTRALOC
};

const sDescTreeNode SVCPLUSA_A_UNITS[SVCPLUSA_A_NUMUNIT] =
{
    { _T("Kyo"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KYO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KYO_COLLECTION) },
    { _T("Iori"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_IORI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_IORI_COLLECTION) },
    { _T("Ryo"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_RYO_COLLECTION) },
    { _T("Terry"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TERRY_COLLECTION, ARRAYSIZE(SVCPLUSA_A_TERRY_COLLECTION) },
    { _T("Mai"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MAI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_MAI_COLLECTION) },
    { _T("Kasumi"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KASUMI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KASUMI_COLLECTION) },
    { _T("Kim"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KIM_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KIM_COLLECTION) },
    { _T("Mr. Karate"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MRKARATE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_MRKARATE_COLLECTION) },
    { _T("Choi"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHOI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_CHOI_COLLECTION) },
    { _T("Earthquake"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_EARTHQUAKE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_EARTHQUAKE_COLLECTION) },
    { _T("Genjuro"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GENJURO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GENJURO_COLLECTION) },
    { _T("Shiki"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHIKI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SHIKI_COLLECTION) },
    { _T("Geese Howard"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GEESEHOWARD_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GEESEHOWARD_COLLECTION) },
    { _T("Mars People"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_MARSPEOPLE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_MARSPEOPLE_COLLECTION) },
    { _T("Goenitz"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GOENITZ_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GOENITZ_COLLECTION) },
    { _T("Princess Athena"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_PRINCESSATHENA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_PRINCESSATHENA_COLLECTION) },
    { _T("Ryu"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_RYU_COLLECTION, ARRAYSIZE(SVCPLUSA_A_RYU_COLLECTION) },
    { _T("Ken"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_KEN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_KEN_COLLECTION) },
    { _T("Chun Li"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CHUNLI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_CHUNLI_COLLECTION) },
    { _T("Guile"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_GUILE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_GUILE_COLLECTION) },
    { _T("Dhalsim"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DHALSIM_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DHALSIM_COLLECTION) },
    { _T("Boxer"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_BOXER_COLLECTION, ARRAYSIZE(SVCPLUSA_A_BOXER_COLLECTION) },
    { _T("Claw"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CLAW_COLLECTION, ARRAYSIZE(SVCPLUSA_A_CLAW_COLLECTION) },
    { _T("Sagat"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SAGAT_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SAGAT_COLLECTION) },
    { _T("Dictator"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DICTATOR_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DICTATOR_COLLECTION) },
    { _T("Akuma"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_AKUMA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_AKUMA_COLLECTION) },
    { _T("Hugo"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_HUGO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_HUGO_COLLECTION) },
    { _T("Poison"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_POISON_COLLECTION, ARRAYSIZE(SVCPLUSA_A_POISON_COLLECTION) },
    { _T("Tessa"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_TESSA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_TESSA_COLLECTION) },
    { _T("Zero"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_ZERO_COLLECTION, ARRAYSIZE(SVCPLUSA_A_ZERO_COLLECTION) },
    { _T("Ciel"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_CIEL_COLLECTION, ARRAYSIZE(SVCPLUSA_A_CIEL_COLLECTION) },
    { _T("Demitri"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DEMITRI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DEMITRI_COLLECTION) },
    { _T("Dan"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_DAN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_DAN_COLLECTION) },
    { _T("Red Arremer"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_REDARREMER_COLLECTION, ARRAYSIZE(SVCPLUSA_A_REDARREMER_COLLECTION) },
    { _T("Orochi Iori"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_OROCHIIORI_COLLECTION, ARRAYSIZE(SVCPLUSA_A_OROCHIIORI_COLLECTION) },
    { _T("Serious Mr. Karate"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SERIOUSMRKARATE_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SERIOUSMRKARATE_COLLECTION) },
    { _T("Violent Ken"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_VIOLENTKEN_COLLECTION, ARRAYSIZE(SVCPLUSA_A_VIOLENTKEN_COLLECTION) },
    { _T("Shin Akuma"), DESC_NODETYPE_TREE, (void*)SVCPLUSA_A_SHINAKUMA_COLLECTION, ARRAYSIZE(SVCPLUSA_A_SHINAKUMA_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef SVCPLUSA_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

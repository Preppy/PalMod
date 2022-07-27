#pragma once

// Saving these for ... later:

//{ L"Coffin Scene: Crusaders", 0x2eb680, 0x2eb880 },
//{ L"Jotaro Story: Imprisoned Jotaro", 0x2e8400, 0x2e8500, indexJojos51StoryMode, 0x00 },
//{ L"Jotaro Story: Scared Holly", 0x2e8380, 0x2e8400 },
//{ L"Joseph Story: \"Let's Go!\"", 0x2e7600, 0x2e7800 },
//{ L"Midler Story Ending", 0x2e6300, 0x2e6500 },
//{ L"Lockdown Staredown (Jotaro)", 0x2ec000, 0x2ec080 },

// Selector Arrows: , indexJojos51Bonus, 0x47
// JoJo_Story - DIOPoint             || 0x1F - 0x01
// JoJo_Story - ScaredKakyoin || 0x1F - 0x02
// JoJo_Story - ShadowDIOStanding || 0x1F - 0x3

#ifdef useful_notes
Distance is 0x14500 between character color A and character color B

General character layout:
    Burn 1                                          + 0x80
    Burn 2                                          + 0x100
    Stand Burn 1 (Unused ?)                         + 0x180
    Stand Burn 2 (Unused ?)                         + 0x200
    Unused Burn 1                                   + 0x280
    Unused Burn 2                                   + 0x300
    Electric 1 (aka Tech/Zap 1)                     + 0x380
    Electric 2 (aka Tech/Zap 2)                     + 0x400
    Guard Cancel Stand / Misc Stand actions         + 0x480
    Stand Electric (Unused ?)                       + 0x500
    Unused Electric 1                               + 0x580
    Unused Electric 2                               + 0x600
    Guard Cancel Character / Child Transformation   + 0x680
    Guard Cancel Stand (Unused)                     + 0x700
    Extras                                          + 0x780 and onward, increasing in increments of 0x80

#endif

const std::vector<uint16_t> JOJOS_A_IMGIDS_USED =
{
    indexJojos51Jotaro,
    indexJojos51Kakyo,
    indexJojos51Avdol,
    indexJojos51Pol,
    indexJojos51Joseph,
    indexJojos51Iggy,
    indexJojos51Alessi,
    indexJojos51Chaka,
    indexJojos51Devo,
    indexJojos51Midler,
    indexJojos51Dio,    // 0x0a
    indexJojos51SDio,
    indexJojos51YSeph,
    indexJojos51Hol,
    indexJojos51VIce,
    indexJojos51NewKakyo,
    indexJojos51Anubis, // 0x10
    indexJojos51Petshop,
    indexJojos51Mariah,
    indexJojos51HolBoingo,
    indexJojos51RSoul,
    indexJojos51Khan,
    indexJojos51NDoul,
    indexJojos51BIce,
    indexJojos51Death13, // 0x18
    indexJojos51Timestop,
    indexJojos51Bonus,
    indexJojos50Stages,
    indexJojos50HUDPortraits,
    indexJojos51GrayFly,
    indexJojos51TarotCards,
};

// hud, portraits, stages: 50
// characters, timestop, bonus: 51

// Notes from Segata:
// every character palette is separated by 0x14500 from a button to another
// Jotaro A Star Breaker and Jotaro B Star Breaker are 0x14500 away and Star Breaker B is at the same distance as Star Breaker C
// So you can just add the A version and create a function that multiples the value instead of writing everything manually
// Also Characters are 0xC80 away, so Jotaro Aand Kakyoin A are just 0xC80, Kakyoin to Avdol is 0xC80 and etc

#pragma region HUD_PORTRAITS
const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES[] =
{
    { L"Jotaro A Life Bar Portrait", 0x7C0400, 0x7C0420, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro B Life Bar Portrait", 0x7C0420, 0x7C0440, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro C Life Bar Portrait", 0x7C0C00, 0x7C0C20, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro S Life Bar Portrait", 0x7C0C20, 0x7C0C40, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro Start Life Bar Portrait", 0x7C0C40, 0x7C0C60, indexJojos50HUDPortraits, indexJojos51Jotaro },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES[] =
{
    { L"Kakyoin A Life Bar Portrait", 0x7C0440, 0x7C0460, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin B Life Bar Portrait", 0x7C0460, 0x7C0480, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin C Life Bar Portrait", 0x7C0C60, 0x7C0C80, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin S Life Bar Portrait", 0x7C0C80, 0x7C0CA0, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin Start Life Bar Portrait", 0x7C0CA0, 0x7C0CC0, indexJojos50HUDPortraits, indexJojos51Kakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DIO_PALETTES[] =
{
    { L"DIO A Life Bar Portrait", 0x7C0480, 0x7C04A0, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO B Life Bar Portrait", 0x7C04A0, 0x7C04C0, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO C Life Bar Portrait", 0x7C14C0, 0x7C14E0, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO S Life Bar Portrait", 0x7C14E0, 0x7C1500, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO Start Life Bar Portrait", 0x7C1500, 0x7C1520, indexJojos50HUDPortraits, indexJojos51Dio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES[] =
{
    { L"Chaka A Life Bar Portrait", 0x7C04C0, 0x7C04E0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka B Life Bar Portrait", 0x7C04E0, 0x7C0500, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka C Life Bar Portrait", 0x7C0F60, 0x7C0F80, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka S Life Bar Portrait", 0x7C0F80, 0x7C0FA0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka Start Life Bar Portrait", 0x7C0FA0, 0x7C0FC0, indexJojos50HUDPortraits, indexJojos51Chaka },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES[] =
{
    { L"Iggy A Life Bar Portrait", 0x7C0500, 0x7C0520, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy B Life Bar Portrait", 0x7C0520, 0x7C0540, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy C Life Bar Portrait", 0x7C0DE0, 0x7C0E00, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy S Life Bar Portrait", 0x7C0E00, 0x7C0E20, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy Start Life Bar Portrait", 0x7C0E20, 0x7C0E40, indexJojos50HUDPortraits, indexJojos51Iggy },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES[] =
{
    { L"Petshop A Life Bar Portrait", 0x7C0540, 0x7C0560, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop B Life Bar Portrait", 0x7C0560, 0x7C0580, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop C Life Bar Portrait", 0x7C1800, 0x7C1820, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop S Life Bar Portrait", 0x7C1820, 0x7C1840, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop Start Life Bar Portrait", 0x7C1840, 0x7C1860, indexJojos50HUDPortraits, indexJojos51Petshop },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES[] =
{
    { L"Polnareff A Life Bar Portrait", 0x7C0580, 0x7C05A0, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff B Life Bar Portrait", 0x7C05A0, 0x7C05C0, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff C Life Bar Portrait", 0x7C0D20, 0x7C0D40, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff S Life Bar Portrait", 0x7C0D40, 0x7C0D60, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff Start Life Bar Portrait", 0x7C0D60, 0x7C0D80, indexJojos50HUDPortraits, indexJojos51Pol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES[] =
{
    { L"Joseph A Life Bar Portrait", 0x7C05C0, 0x7C05E0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph B Life Bar Portrait", 0x7C05E0, 0x7C0600, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph C Life Bar Portrait", 0x7C0D80, 0x7C0DA0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph S Life Bar Portrait", 0x7C0DA0, 0x7C0DC0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph Start Life Bar Portrait", 0x7C0DC0, 0x7C0DE0, indexJojos50HUDPortraits, indexJojos51Joseph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES[] =
{
    { L"Avdol A Life Bar Portrait", 0x7C0600, 0x7C0620, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol B Life Bar Portrait", 0x7C0620, 0x7C0640, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol C Life Bar Portrait", 0x7C0CC0, 0x7C0CE0, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol S Life Bar Portrait", 0x7C0CE0, 0x7C0D00, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol Start Life Bar Portrait", 0x7C0D00, 0x7C0D20, indexJojos50HUDPortraits, indexJojos51Avdol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES[] =
{
    { L"Alessi A Life Bar Portrait", 0x7C0640, 0x7C0660, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi B Life Bar Portrait", 0x7C0660, 0x7C0680, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi C Life Bar Portrait", 0x7C0F00, 0x7C0F20, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi S Life Bar Portrait", 0x7C0F20, 0x7C0F40, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi Start Life Bar Portrait", 0x7C0F40, 0x7C0F60, indexJojos50HUDPortraits, indexJojos51Alessi },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES[] =
{
    { L"Devo A Life Bar Portrait", 0x7C06C0, 0x7C06E0, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo B Life Bar Portrait", 0x7C06E0, 0x7C0700, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo C Life Bar Portrait", 0x7C1400, 0x7C1420, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo S Life Bar Portrait", 0x7C1420, 0x7C1440, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo Start Life Bar Portrait", 0x7C1440, 0x7C1460, indexJojos50HUDPortraits, indexJojos51Devo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES[] =
{
    { L"Vanilla Ice A Life Bar Portrait", 0x7C0740, 0x7C0760, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice B Life Bar Portrait", 0x7C0760, 0x7C0780, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice C Life Bar Portrait", 0x7C1520, 0x7C1540, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice S Life Bar Portrait", 0x7C1540, 0x7C1560, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice Start Life Bar Portrait", 0x7C1560, 0x7C1580, indexJojos50HUDPortraits, indexJojos51VIce },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOL_PALETTES[] =
{
    { L"Hol Horse A Life Bar Portrait", 0x7C0780, 0x7C07A0, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse B Life Bar Portrait", 0x7C07A0, 0x7C07C0, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse C Life Bar Portrait", 0x7C1640, 0x7C1660, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse S Life Bar Portrait", 0x7C1660, 0x7C1680, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse Start Life Bar Portrait", 0x7C1680, 0x7C16A0, indexJojos50HUDPortraits, indexJojos51Hol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES[] =
{
    { L"Midler A Life Bar Portrait", 0x7C08C0, 0x7C08E0, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler B Life Bar Portrait", 0x7C08E0, 0x7C0900, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler C Life Bar Portrait", 0x7C1460, 0x7C1480, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler S Life Bar Portrait", 0x7C1480, 0x7C14A0, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler Start Life Bar Portrait", 0x7C14A0, 0x7C14C0, indexJojos50HUDPortraits, indexJojos51Midler },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES[] =
{
    { L"Mariah A Life Bar Portrait", 0x7C0900, 0x7C0920, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah B Life Bar Portrait", 0x7C0920, 0x7C0940, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah C Life Bar Portrait", 0x7C1860, 0x7C1880, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah S Life Bar Portrait", 0x7C1880, 0x7C18A0, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah Start Life Bar Portrait", 0x7C18A0, 0x7C18C0, indexJojos50HUDPortraits, indexJojos51Mariah },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES[] =
{
    { L"Young Joseph A Life Bar Portrait", 0x7C0B60, 0x7C0B80, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph B Life Bar Portrait", 0x7C0B80, 0x7C0BA0, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph C Life Bar Portrait", 0x7C15E0, 0x7C1600, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph S Life Bar Portrait", 0x7C1600, 0x7C1620, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph Start Life Bar Portrait", 0x7C1620, 0x7C1640, indexJojos50HUDPortraits, indexJojos51YSeph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES[] =
{
    { L"Shadow Dio A Life Bar Portrait", 0x7C0BA0, 0x7C0BC0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio B Life Bar Portrait", 0x7C0BC0, 0x7C0BE0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio C Life Bar Portrait", 0x7C1580, 0x7C15A0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio S Life Bar Portrait", 0x7C15A0, 0x7C15C0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio Start Life Bar Portrait", 0x7C15C0, 0x7C15E0, indexJojos50HUDPortraits, indexJojos51SDio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES[] =
{
    { L"New Kakyoin A / B / Start Life Bar Portrait", 0x7C16E0, 0x7C1700, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { L"New Kakyoin C Life Bar Portrait", 0x7C16A0, 0x7C16C0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { L"New Kakyoin S Life Bar Portrait", 0x7C16C0, 0x7C16E0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_APOL_PALETTES[] =
{
    { L"Anubis Polnareff A Life Bar Portrait", 0x7C1700, 0x7C1720, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff B Life Bar Portrait", 0x7C1720, 0x7C1740, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff C Life Bar Portrait", 0x7C1740, 0x7C1760, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff S Life Bar Portrait", 0x7C1760, 0x7C1780, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff Start Life Bar Portrait", 0x7C1780, 0x7C17A0, indexJojos50HUDPortraits, indexJojos51Anubis },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES[] =
{
    { L"Hol Horse & Boingo A Life Bar Portrait", 0x7C18C0, 0x7C18E0, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo B Life Bar Portrait", 0x7C18E0, 0x7C1900, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo C Life Bar Portrait", 0x7C1900, 0x7C1920, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo S Life Bar Portrait", 0x7C1920, 0x7C1940, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo Start Life Bar Portrait", 0x7C1940, 0x7C1960, indexJojos50HUDPortraits, indexJojos51HolBoingo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES[] =
{
    { L"Rubber Soul A Life Bar Portrait", 0x7C1960, 0x7C1980, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul B Life Bar Portrait", 0x7C1980, 0x7C19A0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul C Life Bar Portrait", 0x7C19A0, 0x7C19C0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul S Life Bar Portrait", 0x7C19C0, 0x7C19E0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul Start Life Bar Portrait", 0x7C19E0, 0x7C1A00, indexJojos50HUDPortraits, indexJojos51RSoul },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES[] =
{
    { L"Khan A Life Bar Portrait", 0x7C1A00, 0x7C1A20, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan B Life Bar Portrait", 0x7C1A20, 0x7C1A40, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan C Life Bar Portrait", 0x7C1A40, 0x7C1A60, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan S Life Bar Portrait", 0x7C1A60, 0x7C1A80, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan Start Life Bar Portrait", 0x7C1A80, 0x7C1AA0, indexJojos50HUDPortraits, indexJojos51Khan },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES[] =
{
    { L"Death 13 A Life Bar Portrait", 0x7C0800, 0x7C0820, indexJojos51Death13, 0x20 },
    { L"Death 13 B Life Bar Portrait", 0x7C0820, 0x7C0840, indexJojos51Death13, 0x20 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES[] =
{
    { L"N'Doul A Life Bar Portrait", 0x7C0840, 0x7C0860, indexJojos50HUDPortraits, indexJojos51NDoul },
    { L"N'Doul B Life Bar Portrait", 0x7C0860, 0x7C0880, indexJojos50HUDPortraits, indexJojos51NDoul },
};

const sDescTreeNode JOJOS_A_50_HUD_PORTRAIT_COLLECTION[]
{
    { L"Jotaro", DESC_NODETYPE_TREE, (void *)JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES) },
    { L"Kakyoin", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES) },
    { L"Avdol", DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES) },
    { L"Polnareff", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES) },
    { L"Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES) },
    { L"Iggy", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES) },
    { L"Alessi", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES) },
    { L"Chaka", DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES) },
    { L"Devo", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES) },
    { L"Midler", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES) },
    { L"DIO", DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_DIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DIO_PALETTES) },
    { L"Shadow Dio", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES) },
    { L"Young Joseph", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES) },
    { L"Hol Horse", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOL_PALETTES) },
    { L"Vanilla Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES) },
    { L"New Kakyoin", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES) },
    { L"Anubis Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_APOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_APOL_PALETTES) },
    { L"Petshop", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES) },
    { L"Mariah", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES) },
    { L"Hol Horse & Boingo", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES) },
    { L"Rubber Soul", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES) },
    { L"Khan", DESC_NODETYPE_TREE,       (void*)JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES) },
    { L"N'Doul",  DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES) },
    { L"Death 13", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES) },
};

#pragma endregion HUD Portraits

#pragma region HUD
const sGame_PaletteDataset JOJOS_A_HUD_PALETTE_NODES[] =
{
    { L"Round Markers", 0x7C0160, 0x7C0180, indexJojos51Bonus, 0x28, &pairHandledInCode }, // use explicit runtime handling since jojos uses a quirked updatepalimg
    { L"Timer", 0x7C00C0, 0x7C00E0, indexJojos51Bonus, 0x2b },
    { L"Lifebar", 0x7C01E0, 0x7C0200, indexJojos51Bonus, 0x27 },
    { L"Stand Meter", 0x7C0200, 0x7C0220, indexJojos51Bonus, 0x29 },
    { L"Stand Text Under The Stand Gauge", 0x7C0320, 0x7C0340, indexJojos51Bonus, 0x2a },

    { L"Combo Meter", 0x7C01C0, 0x7C01E0, indexJojos51Bonus, 0x44 },
    { L"Combo Messages", 0x7C0220, 0x7C0240 },
    { L"Text Above The Lifebars",  0x7C0280, 0x7C02A0 }, // Could use 0x2a sprite here
    { L"Stand Crash / First Hit / Etc. Messages", 0x7C0340, 0x7C0360 },
    { L"Stand Meter / Near Stand Break", 0x7C0B20, 0x7C0B60, indexJojos51Bonus, 0x43 },
    { L"Super Meter Bar", 0x7C03A0, 0x7C0400, indexJojos51Bonus, 0x42 },
    { L"Mariah Level (Player 1 only)", 0x7C01A0, 0x7C01C0 },
    { L"Dev-menu Font Color", 0x7C0000, 0x7C0020 },
    { L"Player 1 and 2 counter icons", 0x7C02E0, 0x7C0320, indexJojos51Bonus, 0x26 },
};

const sDescTreeNode JOJOS_A_50_HUD_COLLECTION[]
{
    { L"Palette", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PALETTE_NODES, ARRAYSIZE(JOJOS_A_HUD_PALETTE_NODES) },
};
#pragma endregion HUD

#pragma region Stages

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_ALOCKUP[] =
{
    { L"A Lockup (1/7)", 0x7c3000, 0x7c3200, indexJojos50Stages, 0x3c, &pairFullyLinkedNode },
    { L"A Lockup (2/7)", 0x7c3200, 0x7c3400, indexJojos50Stages, 0x3d },
    { L"A Lockup (3/7)", 0x7c3400, 0x7c3600, indexJojos50Stages, 0x3e },
    { L"A Lockup (4/7)", 0x7c3600, 0x7c3800, indexJojos50Stages, 0x3f },
    { L"A Lockup (5/7)", 0x7c3800, 0x7c3a00, indexJojos50Stages, 0x40 },
    { L"A Lockup (6/7)", 0x7c3a00, 0x7c3c00, indexJojos50Stages, 0x41 },
    { L"A Lockup (7/7)", 0x7c3c00, 0x7c3d80, indexJojos50Stages, 0x42 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AHEALTHROOM[] =
{
    { L"A Health Room (1/6)", 0x7c3e00, 0x7c4000, indexJojos50Stages, 0x2e, &pairFullyLinkedNode },
    { L"A Health Room (2/6)", 0x7c4000, 0x7c4200, indexJojos50Stages, 0x2f },
    { L"A Health Room (3/6)", 0x7c4200, 0x7c4400, indexJojos50Stages, 0x30 },
    { L"A Health Room (4/6)", 0x7c4400, 0x7c4600, indexJojos50Stages, 0x31 },
    { L"A Health Room (5/6)", 0x7c4600, 0x7c4800, indexJojos50Stages, 0x32 },
    { L"A Health Room (6/6)", 0x7c4800, 0x7c4900, indexJojos50Stages, 0x33 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AIRPLANE[] =
{
    { L"In A Airplane (1/17)", 0x7c4a00, 0x7c4c00, indexJojos50Stages, 0x67, &pairFullyLinkedNode },
    { L"In A Airplane (2/17)", 0x7c4c00, 0x7c4e00, indexJojos50Stages, 0x68 },
    { L"In A Airplane (3/17)", 0x7c4e00, 0x7c5000, indexJojos50Stages, 0x69 },
    { L"In A Airplane (4/17)", 0x7c5000, 0x7c5200, indexJojos50Stages, 0x6a },
    { L"In A Airplane (5/17)", 0x7c5200, 0x7c5400, indexJojos50Stages, 0x6b },
    { L"In A Airplane (6/17)", 0x7c5400, 0x7c5600, indexJojos50Stages, 0x6c },
    { L"In A Airplane (7/17)", 0x7c5600, 0x7c5800, indexJojos50Stages, 0x6d },
    { L"In A Airplane (8/17)", 0x7c5800, 0x7c5a00, indexJojos50Stages, 0x6e },
    { L"In A Airplane (9/17)", 0x7c5a00, 0x7c5c00, indexJojos50Stages, 0x6f },
    { L"In A Airplane (10/17)", 0x7c5c00, 0x7c5e00, indexJojos50Stages, 0x70 },
    { L"In A Airplane (11/17)", 0x7c5e00, 0x7c6000, indexJojos50Stages, 0x71 },
    { L"In A Airplane (12/17)", 0x7c6000, 0x7c6200, indexJojos50Stages, 0x72 },
    { L"In A Airplane (13/17)", 0x7c6200, 0x7c6400, indexJojos50Stages, 0x73 },
    { L"In A Airplane (14/17)", 0x7c6400, 0x7c6600, indexJojos50Stages, 0x74 },
    { L"In A Airplane (15/17)", 0x7c6600, 0x7c6800, indexJojos50Stages, 0x75 },
    { L"In A Airplane (16/17)", 0x7c6800, 0x7c6a00, indexJojos50Stages, 0x76 },
    { L"In A Airplane (17/17)", 0x7c6a00, 0x7c6b80, indexJojos50Stages, 0x77 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_TGARDEN[] =
{
    { L"Tigerbaum Garden (1/11)", 0x7c6c00, 0x7c6e00, indexJojos50Stages, 0x1e, &pairFullyLinkedNode },
    { L"Tigerbaum Garden (2/11)", 0x7c6e00, 0x7c7000, indexJojos50Stages, 0x1f },
    { L"Tigerbaum Garden (3/11)", 0x7c7000, 0x7c7200, indexJojos50Stages, 0x20 },
    { L"Tigerbaum Garden (4/11)", 0x7c7200, 0x7c7400, indexJojos50Stages, 0x21 },
    { L"Tigerbaum Garden (5/11)", 0x7c7400, 0x7c7600, indexJojos50Stages, 0x22 },
    { L"Tigerbaum Garden (6/11)", 0x7c7600, 0x7c7800, indexJojos50Stages, 0x23 },
    { L"Tigerbaum Garden (7/11)", 0x7c7800, 0x7c7a00, indexJojos50Stages, 0x24 },
    { L"Tigerbaum Garden (8/11)", 0x7c7a00, 0x7c7c00, indexJojos50Stages, 0x25 },
    { L"Tigerbaum Garden (9/11)", 0x7c7c00, 0x7c7e00, indexJojos50Stages, 0x26 },
    { L"Tigerbaum Garden (10/11)", 0x7c7e00, 0x7c8000, indexJojos50Stages, 0x27 },
    { L"Tigerbaum Garden (11/11)", 0x7c8000, 0x7c8200, indexJojos50Stages, 0x28 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELD[] =
{
    { L"Hotel (Devil) (1/7)", 0x7c8300, 0x7c8500, indexJojos50Stages, 0x11, &pairFullyLinkedNode },
    { L"Hotel (Devil) (2/7)", 0x7c8500, 0x7c8700, indexJojos50Stages, 0x12 },
    { L"Hotel (Devil) (3/7)", 0x7c8700, 0x7c8900, indexJojos50Stages, 0x13 },
    { L"Hotel (Devil) (4/7)", 0x7c8900, 0x7c8b00, indexJojos50Stages, 0x14 },
    { L"Hotel (Devil) (5/7)", 0x7c8b00, 0x7c8d00, indexJojos50Stages, 0x15 },
    { L"Hotel (Devil) (6/7)", 0x7c8d00, 0x7c8f00, indexJojos50Stages, 0x16 },
    { L"Hotel (Devil) (7/7)", 0x7c8f00, 0x7c9080, indexJojos50Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_REMAINS[] =
{
    { L"Remains (1/9)", 0x7c9f00, 0x7c9f80, indexJojos50Stages, 0x95, &pairFullyLinkedNode },
    { L"Remains (2/9)", 0x7c9f80, 0x7ca180, indexJojos50Stages, 0x96 },
    { L"Remains (3/9)", 0x7ca180, 0x7ca380, indexJojos50Stages, 0x97 },
    { L"Remains (4/9)", 0x7ca380, 0x7ca580, indexJojos50Stages, 0x98 },
    { L"Remains (5/9)", 0x7ca580, 0x7ca780, indexJojos50Stages, 0x99 },
    { L"Remains (6/9)", 0x7ca780, 0x7ca980, indexJojos50Stages, 0x9a },
    { L"Remains (7/9)", 0x7ca980, 0x7cab80, indexJojos50Stages, 0x9b },
    { L"Remains (8/9)", 0x7cab80, 0x7cad80, indexJojos50Stages, 0x9c },
    { L"Remains (9/9)", 0x7cad80, 0x7caf80, indexJojos50Stages, 0x9d },
    // Not actually shown? { L"Remains (10/10)", 0x7caf80, 0x7cb180 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELJ[] =
{
    { L"Hotel (Justice) (1/8)", 0x7cc500, 0x7cc700, indexJojos50Stages, 0x8d, &pairFullyLinkedNode },
    { L"Hotel (Justice) (2/8)", 0x7cc700, 0x7cc900, indexJojos50Stages, 0x8e },
    { L"Hotel (Justice) (3/8)", 0x7cc900, 0x7ccb00, indexJojos50Stages, 0x8f },
    { L"Hotel (Justice) (4/8)", 0x7ccb00, 0x7ccd00, indexJojos50Stages, 0x90 },
    { L"Hotel (Justice) (5/8)", 0x7ccd00, 0x7ccf00, indexJojos50Stages, 0x91 },
    { L"Hotel (Justice) (6/8)", 0x7ccf00, 0x7cd100, indexJojos50Stages, 0x92 },
    { L"Hotel (Justice) (7/8)", 0x7cd100, 0x7cd300, indexJojos50Stages, 0x93 },
    { L"Hotel (Justice) (8/8)", 0x7cd300, 0x7cd380, indexJojos50Stages, 0x94 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AMPARK[] =
{
    { L"Amusement Park (1/27)", 0x7cd400, 0x7cd600 },
    { L"Amusement Park (2/27)", 0x7cd600, 0x7cd800 },
    { L"Amusement Park (3/27)", 0x7cd800, 0x7cda00 },
    { L"Amusement Park (4/27)", 0x7cda00, 0x7cdc00 },
    { L"Amusement Park (5/27)", 0x7cdc00, 0x7cde00 },
    { L"Amusement Park (6/27)", 0x7cde00, 0x7ce000 },
    { L"Amusement Park (7/27)", 0x7ce000, 0x7ce200 },
    { L"Amusement Park (8/27)", 0x7ce200, 0x7ce400 },
    { L"Amusement Park (9/27)", 0x7ce400, 0x7ce600 },
    { L"Amusement Park (10/27)", 0x7ce600, 0x7ce800 },
    { L"Amusement Park (11/27)", 0x7ce800, 0x7cea00 },
    { L"Amusement Park (12/27)", 0x7cea00, 0x7cec00 },
    { L"Amusement Park (13/27)", 0x7cec00, 0x7cee00 },
    { L"Amusement Park (14/27)", 0x7cee00, 0x7cf000 },
    { L"Amusement Park (15/27)", 0x7cf000, 0x7cf200 },
    { L"Amusement Park (16/27)", 0x7cf200, 0x7cf400 },
    { L"Amusement Park (17/27)", 0x7cf400, 0x7cf600 },
    { L"Amusement Park (18/27)", 0x7cf600, 0x7cf800 },
    { L"Amusement Park (19/27)", 0x7cf800, 0x7cfa00 },
    { L"Amusement Park (20/27)", 0x7cfa00, 0x7cfc00 },
    { L"Amusement Park (21/27)", 0x7cfc00, 0x7cfe00 },
    { L"Amusement Park (22/27)", 0x7cfe00, 0x7d0000 },
    { L"Amusement Park (23/27)", 0x7d0000, 0x7d0200 },
    { L"Amusement Park (24/27)", 0x7d0200, 0x7d0400 },
    { L"Amusement Park (25/27)", 0x7d0400, 0x7d0600 },
    { L"Amusement Park (26/27)", 0x7d0600, 0x7d0800 },
    { L"Amusement Park (27/27)", 0x7d0800, 0x7d0900 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLAND[] =
{
    { L"Small Island (1/6)", 0x7d0a00, 0x7d0c00, indexJojos50Stages, 0x18 },
    { L"Small Island (2/6)", 0x7d0c00, 0x7d0e00, indexJojos50Stages, 0x19 },
    { L"Small Island (3/6)", 0x7d0e00, 0x7d1000, indexJojos50Stages, 0x1A },
    { L"Small Island (4/6)", 0x7d1000, 0x7d1200, indexJojos50Stages, 0x1B },
    { L"Small Island (5/6)", 0x7d1200, 0x7d1400, indexJojos50Stages, 0x1C },
    { L"Small Island (6/6)", 0x7d1400, 0x7d1600, indexJojos50Stages, 0x1D },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNOON[] =
{
    { L"Desert Noon (1/7)", 0x7d3100, 0x7d3300, indexJojos50Stages, 0x58, &pairFullyLinkedNode },
    { L"Desert Noon (2/7)", 0x7d3300, 0x7d3500, indexJojos50Stages, 0x59 },
    { L"Desert Noon (3/7)", 0x7d3500, 0x7d3700, indexJojos50Stages, 0x5a },
    { L"Desert Noon (4/7)", 0x7d3700, 0x7d3900, indexJojos50Stages, 0x5b },
    { L"Desert Noon (5/7)", 0x7d3900, 0x7d3b00, indexJojos50Stages, 0x5c },
    { L"Desert Noon (6/7)", 0x7d3b00, 0x7d3d00, indexJojos50Stages, 0x5d },
    { L"Desert Noon (7/7)", 0x7d3d00, 0x7d3f00, indexJojos50Stages, 0x5e },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_RUIN[] =
{
    { L"Ruins (1/5)", 0x7d6d00, 0x7d6f00, indexJojos50Stages, 0x29, &pairFullyLinkedNode },
    { L"Ruins (2/5)", 0x7d6f00, 0x7d7100, indexJojos50Stages, 0x2a },
    { L"Ruins (3/5)", 0x7d7100, 0x7d7300, indexJojos50Stages, 0x2b },
    { L"Ruins (4/5)", 0x7d7300, 0x7d7500, indexJojos50Stages, 0x2c },
    { L"Ruins (5/5)", 0x7d7500, 0x7d7700, indexJojos50Stages, 0x2d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNOON[] =
{
    { L"Country Town Noon (1/21)", 0x7d8300, 0x7d8500, indexJojos50Stages, 0x78, &pairFullyLinkedNode },
    { L"Country Town Noon (2/21)", 0x7d8500, 0x7d8700, indexJojos50Stages, 0x79 },
    { L"Country Town Noon (3/21)", 0x7d8700, 0x7d8900, indexJojos50Stages, 0x7a },
    { L"Country Town Noon (4/21)", 0x7d8900, 0x7d8b00, indexJojos50Stages, 0x7b },
    { L"Country Town Noon (5/21)", 0x7d8b00, 0x7d8d00, indexJojos50Stages, 0x7c },
    { L"Country Town Noon (6/21)", 0x7d8d00, 0x7d8f00, indexJojos50Stages, 0x7d },
    { L"Country Town Noon (7/21)", 0x7d8f00, 0x7d9100, indexJojos50Stages, 0x7e },
    { L"Country Town Noon (8/21)", 0x7d9100, 0x7d9300, indexJojos50Stages, 0x7f },
    { L"Country Town Noon (9/21)", 0x7d9300, 0x7d9500, indexJojos50Stages, 0x80 },
    { L"Country Town Noon (10/21)", 0x7d9500, 0x7d9700, indexJojos50Stages, 0x81 },
    { L"Country Town Noon (11/21)", 0x7d9700, 0x7d9900, indexJojos50Stages, 0x82 },
    { L"Country Town Noon (12/21)", 0x7d9900, 0x7d9b00, indexJojos50Stages, 0x83 },
    { L"Country Town Noon (13/21)", 0x7d9b00, 0x7d9d00, indexJojos50Stages, 0x84 },
    { L"Country Town Noon (14/21)", 0x7d9d00, 0x7d9f00, indexJojos50Stages, 0x85 },
    { L"Country Town Noon (15/21)", 0x7d9f00, 0x7da100, indexJojos50Stages, 0x86 },
    { L"Country Town Noon (16/21)", 0x7da100, 0x7da300, indexJojos50Stages, 0x87 },
    { L"Country Town Noon (17/21)", 0x7da300, 0x7da500, indexJojos50Stages, 0x88 },
    { L"Country Town Noon (18/21)", 0x7da500, 0x7da700, indexJojos50Stages, 0x89 },
    { L"Country Town Noon (19/21)", 0x7da700, 0x7da900, indexJojos50Stages, 0x8a },
    { L"Country Town Noon (20/21)", 0x7da900, 0x7dab00, indexJojos50Stages, 0x8b },
    { L"Country Town Noon (21/21)", 0x7dab00, 0x7dac80, indexJojos50Stages, 0x8c },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_UWATER[] =
{
    { L"Underground Water (1/8)", 0x7e0100, 0x7e0300, indexJojos50Stages, 0x5f, &pairFullyLinkedNode },
    { L"Underground Water (2/8)", 0x7e0300, 0x7e0500, indexJojos50Stages, 0x60 },
    { L"Underground Water (3/8)", 0x7e0500, 0x7e0700, indexJojos50Stages, 0x61 },
    { L"Underground Water (4/8)", 0x7e0700, 0x7e0900, indexJojos50Stages, 0x62 },
    { L"Underground Water (5/8)", 0x7e0900, 0x7e0b00, indexJojos50Stages, 0x63 },
    { L"Underground Water (6/8)", 0x7e0b00, 0x7e0d00, indexJojos50Stages, 0x64 },
    { L"Underground Water (7/8)", 0x7e0d00, 0x7e0f00, indexJojos50Stages, 0x65 },
    { L"Underground Water (8/8)", 0x7e0f00, 0x7e1100, indexJojos50Stages, 0x66 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_INHOUSE[] =
{
    { L"Inside House (1/8)", 0x7e2300, 0x7e2500, indexJojos50Stages, 0x34 },
    { L"Inside House (2/8)", 0x7e2500, 0x7e2700, indexJojos50Stages, 0x35 },
    { L"Inside House (3/8)", 0x7e2700, 0x7e2900, indexJojos50Stages, 0x36 },
    { L"Inside House (4/8)", 0x7e2900, 0x7e2b00, indexJojos50Stages, 0x37 },
    { L"Inside House (5/8)", 0x7e2b00, 0x7e2d00, indexJojos50Stages, 0x38 },
    { L"Inside House (6/8)", 0x7e2d00, 0x7e2f00, indexJojos50Stages, 0x39 },
    { L"Inside House (7/8)", 0x7e2f00, 0x7e3100, indexJojos50Stages, 0x3a },
    { L"Inside House (8/8)", 0x7e3100, 0x7e3200, indexJojos50Stages, 0x3b },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CROOM[] =
{
    { L"Coffin Room (1/6)", 0x7e4300, 0x7e4500, indexJojos50Stages, 0x05, &pairNext },
    { L"Coffin Room (2/6)", 0x7e4500, 0x7e4700, indexJojos50Stages, 0x06 },
    { L"Coffin Room (3/6)", 0x7e4700, 0x7e4900, indexJojos50Stages, 0x07 },
    { L"Coffin Room (4/6)", 0x7e4900, 0x7e4b00, indexJojos50Stages, 0x08 },
    { L"Coffin Room (5/6)", 0x7e4b00, 0x7e4d00, indexJojos50Stages, 0x09 }, // This and the next are weird characters
    { L"Coffin Room (6/6)", 0x7e4d00, 0x7e4e00, indexJojos50Stages, 0x0a },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CLOCK[] =
{
    { L"Clock Tower (1/3)", 0x7e5b00, 0x7e5d00, indexJojos50Stages, 0x00, &pairFullyLinkedNode },
    { L"Clock Tower (2/3)", 0x7e5d00, 0x7e5f00, indexJojos50Stages, 0x01 },
    { L"Clock Tower (3/3)", 0x7e5f00, 0x7e6100, indexJojos50Stages, 0x02 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB[] =
{
    { L"Suburbs (1/22)", 0x7e6900, 0x7e6b00, indexJojos50Stages, 0x43, &pairFullyLinkedNode },
    { L"Suburbs (2/22)", 0x7e6b00, 0x7e6d00, indexJojos50Stages, 0x44 },
    { L"Suburbs (3/22)", 0x7e6d00, 0x7e6f00, indexJojos50Stages, 0x45 },
    { L"Suburbs (4/22)", 0x7e6f00, 0x7e7100, indexJojos50Stages, 0x46 },
    { L"Suburbs (5/22)", 0x7e7100, 0x7e7300, indexJojos50Stages, 0x47 },
    { L"Suburbs (6/22)", 0x7e7300, 0x7e7500, indexJojos50Stages, 0x48 },
    { L"Suburbs (7/22)", 0x7e7500, 0x7e7700, indexJojos50Stages, 0x49 },
    { L"Suburbs (8/22)", 0x7e7700, 0x7e7900, indexJojos50Stages, 0x4a },
    { L"Suburbs (9/22)", 0x7e7900, 0x7e7b00, indexJojos50Stages, 0x4b },
    { L"Suburbs (10/22)", 0x7e7b00, 0x7e7d00, indexJojos50Stages, 0x4c },
    { L"Suburbs (11/22)", 0x7e7d00, 0x7e7f00, indexJojos50Stages, 0x4d },
    { L"Suburbs (12/22)", 0x7e7f00, 0x7e8100, indexJojos50Stages, 0x4e },
    { L"Suburbs (13/22)", 0x7e8100, 0x7e8300, indexJojos50Stages, 0x4f },
    { L"Suburbs (14/22)", 0x7e8300, 0x7e8500, indexJojos50Stages, 0x50 },
    { L"Suburbs (15/22)", 0x7e8500, 0x7e8700, indexJojos50Stages, 0x51 },
    { L"Suburbs (16/22)", 0x7e8700, 0x7e8900, indexJojos50Stages, 0x52 },
    { L"Suburbs (17/22)", 0x7e8900, 0x7e8b00, indexJojos50Stages, 0x53 },
    { L"Suburbs (18/22)", 0x7e8b00, 0x7e8d00, indexJojos50Stages, 0x54 },
    { L"Suburbs (19/22)", 0x7e8d00, 0x7e8f00, indexJojos50Stages, 0x55 },
    { L"Suburbs (20/22)", 0x7e8f00, 0x7e9100, indexJojos50Stages, 0x56 },
    { L"Suburbs (21/22)", 0x7e9100, 0x7e9300, indexJojos50Stages, 0x57 },
    { L"Suburbs (22/22)", 0x7e9300, 0x7e9480 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_OTBRIDGE[] =
{
    { L"On The Bridge (1/2)", 0x7eed00, 0x7eef00, indexJojos50Stages, 0x03, &pairFullyLinkedNode },
    { L"On The Bridge (2/2)", 0x7eef00, 0x7ef100, indexJojos50Stages, 0x04 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTTWILIGHT[] =
{
    { L"Country Town Twilight (1/21)", 0x7dad00, 0x7daf00, indexJojos50Stages, 0x78, &pairFullyLinkedNode },
    { L"Country Town Twilight (2/21)", 0x7daf00, 0x7db100, indexJojos50Stages, 0x79 },
    { L"Country Town Twilight (3/21)", 0x7db100, 0x7db300, indexJojos50Stages, 0x7a },
    { L"Country Town Twilight (4/21)", 0x7db300, 0x7db500, indexJojos50Stages, 0x7b },
    { L"Country Town Twilight (5/21)", 0x7db500, 0x7db700, indexJojos50Stages, 0x7c },
    { L"Country Town Twilight (6/21)", 0x7db700, 0x7db900, indexJojos50Stages, 0x7d },
    { L"Country Town Twilight (7/21)", 0x7db900, 0x7dbb00, indexJojos50Stages, 0x7e },
    { L"Country Town Twilight (8/21)", 0x7dbb00, 0x7dbd00, indexJojos50Stages, 0x7f },
    { L"Country Town Twilight (9/21)", 0x7dbd00, 0x7dbf00, indexJojos50Stages, 0x80 },
    { L"Country Town Twilight (10/21)", 0x7dbf00, 0x7dc100, indexJojos50Stages, 0x81 },
    { L"Country Town Twilight (11/21)", 0x7dc100, 0x7dc300, indexJojos50Stages, 0x82 },
    { L"Country Town Twilight (12/21)", 0x7dc300, 0x7dc500, indexJojos50Stages, 0x83 },
    { L"Country Town Twilight (13/21)", 0x7dc500, 0x7dc700, indexJojos50Stages, 0x84 },
    { L"Country Town Twilight (14/21)", 0x7dc700, 0x7dc900, indexJojos50Stages, 0x85 },
    { L"Country Town Twilight (15/21)", 0x7dc900, 0x7dcb00, indexJojos50Stages, 0x86 },
    { L"Country Town Twilight (16/21)", 0x7dcb00, 0x7dcd00, indexJojos50Stages, 0x87 },
    { L"Country Town Twilight (17/21)", 0x7dcd00, 0x7dcf00, indexJojos50Stages, 0x88 },
    { L"Country Town Twilight (18/21)", 0x7dcf00, 0x7dd100, indexJojos50Stages, 0x89 },
    { L"Country Town Twilight (19/21)", 0x7dd100, 0x7dd300, indexJojos50Stages, 0x8a },
    { L"Country Town Twilight (20/21)", 0x7dd300, 0x7dd500, indexJojos50Stages, 0x8b },
    { L"Country Town Twilight (21/21)", 0x7dd500, 0x7dd680, indexJojos50Stages, 0x8c },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DMORNING[] =
{
    { L"Desert Morning (1/8)", 0x7d4000, 0x7d4200, indexJojos50Stages, 0x58, &pairFullyLinkedNode },
    { L"Desert Morning (2/8)", 0x7d4200, 0x7d4400, indexJojos50Stages, 0x59 },
    { L"Desert Morning (3/8)", 0x7d4400, 0x7d4600, indexJojos50Stages, 0x5a },
    { L"Desert Morning (4/8)", 0x7d4600, 0x7d4800, indexJojos50Stages, 0x5b },
    { L"Desert Morning (5/8)", 0x7d4800, 0x7d4a00, indexJojos50Stages, 0x5c },
    { L"Desert Morning (6/8)", 0x7d4a00, 0x7d4c00, indexJojos50Stages, 0x5d },
    { L"Desert Morning (7/8)", 0x7d4c00, 0x7d4e00, indexJojos50Stages, 0x5e },
    { L"Desert Morning (8/8)", 0x7d4e00, 0x7d4e80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DTWILIGHT[] =
{
    { L"Desert Twilight (1/8)", 0x7d5e00, 0x7d6000, indexJojos50Stages, 0x58, &pairFullyLinkedNode },
    { L"Desert Twilight (2/8)", 0x7d6000, 0x7d6200, indexJojos50Stages, 0x59 },
    { L"Desert Twilight (3/8)", 0x7d6200, 0x7d6400, indexJojos50Stages, 0x5a },
    { L"Desert Twilight (4/8)", 0x7d6400, 0x7d6600, indexJojos50Stages, 0x5b },
    { L"Desert Twilight (5/8)", 0x7d6600, 0x7d6800, indexJojos50Stages, 0x5c },
    { L"Desert Twilight (6/8)", 0x7d6800, 0x7d6a00, indexJojos50Stages, 0x5d },
    { L"Desert Twilight (7/8)", 0x7d6a00, 0x7d6c00, indexJojos50Stages, 0x5e },
    { L"Desert Twilight (8/8)", 0x7d6c00, 0x7d6c80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNIGHT[] =
{
    { L"Desert Night (1/8)", 0x7d4f00, 0x7d5100, indexJojos50Stages, 0x58, &pairFullyLinkedNode },
    { L"Desert Night (2/8)", 0x7d5100, 0x7d5300, indexJojos50Stages, 0x59 },
    { L"Desert Night (3/8)", 0x7d5300, 0x7d5500, indexJojos50Stages, 0x5a },
    { L"Desert Night (4/8)", 0x7d5500, 0x7d5700, indexJojos50Stages, 0x5b },
    { L"Desert Night (5/8)", 0x7d5700, 0x7d5900, indexJojos50Stages, 0x5c },
    { L"Desert Night (6/8)", 0x7d5900, 0x7d5b00, indexJojos50Stages, 0x5d },
    { L"Desert Night (7/8)", 0x7d5b00, 0x7d5d00, indexJojos50Stages, 0x5e },
    { L"Desert Night (8/8)", 0x7d5d00, 0x7d5d80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLANDJ[] =
{
    { L"Small Island (Joseph) (1/6)", 0x7d1700, 0x7d1900, indexJojos50Stages, 0x18 },
    { L"Small Island (Joseph) (2/6)", 0x7d1900, 0x7d1b00, indexJojos50Stages, 0x19 },
    { L"Small Island (Joseph) (3/6)", 0x7d1b00, 0x7d1d00, indexJojos50Stages, 0x1a },
    { L"Small Island (Joseph) (4/6)", 0x7d1d00, 0x7d1f00, indexJojos50Stages, 0x1b },
    { L"Small Island (Joseph) (5/6)", 0x7d1f00, 0x7d2100, indexJojos50Stages, 0x1c },
    { L"Small Island (Joseph) (6/6)", 0x7d2100, 0x7d2300, indexJojos50Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNIGHT[] =
{
    { L"Country Town Night (1/21)", 0x7dd700, 0x7dd900, indexJojos50Stages, 0x78, &pairFullyLinkedNode },
    { L"Country Town Night (2/21)", 0x7dd900, 0x7ddb00, indexJojos50Stages, 0x79 },
    { L"Country Town Night (3/21)", 0x7ddb00, 0x7ddd00, indexJojos50Stages, 0x7a },
    { L"Country Town Night (4/21)", 0x7ddd00, 0x7ddf00, indexJojos50Stages, 0x7b },
    { L"Country Town Night (5/21)", 0x7ddf00, 0x7de100, indexJojos50Stages, 0x7c },
    { L"Country Town Night (6/21)", 0x7de100, 0x7de300, indexJojos50Stages, 0x7d },
    { L"Country Town Night (7/21)", 0x7de300, 0x7de500, indexJojos50Stages, 0x7e },
    { L"Country Town Night (8/21)", 0x7de500, 0x7de700, indexJojos50Stages, 0x7f },
    { L"Country Town Night (9/21)", 0x7de700, 0x7de900, indexJojos50Stages, 0x80 },
    { L"Country Town Night (10/21)", 0x7de900, 0x7deb00, indexJojos50Stages, 0x81 },
    { L"Country Town Night (11/21)", 0x7deb00, 0x7ded00, indexJojos50Stages, 0x82 },
    { L"Country Town Night (12/21)", 0x7ded00, 0x7def00, indexJojos50Stages, 0x83 },
    { L"Country Town Night (13/21)", 0x7def00, 0x7df100, indexJojos50Stages, 0x84 },
    { L"Country Town Night (14/21)", 0x7df100, 0x7df300, indexJojos50Stages, 0x85 },
    { L"Country Town Night (15/21)", 0x7df300, 0x7df500, indexJojos50Stages, 0x86 },
    { L"Country Town Night (16/21)", 0x7df500, 0x7df700, indexJojos50Stages, 0x87 },
    { L"Country Town Night (17/21)", 0x7df700, 0x7df900, indexJojos50Stages, 0x88 },
    { L"Country Town Night (18/21)", 0x7df900, 0x7dfb00, indexJojos50Stages, 0x89 },
    { L"Country Town Night (19/21)", 0x7dfb00, 0x7dfd00, indexJojos50Stages, 0x8a },
    { L"Country Town Night (20/21)", 0x7dfd00, 0x7dff00, indexJojos50Stages, 0x8b },
    { L"Country Town Night (21/21)", 0x7dff00, 0x7e0080, indexJojos50Stages, 0x8c },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB2[] =
{
    { L"Suburbs 2 (1/22)", 0x7e9500, 0x7e9700, indexJojos50Stages, 0x43, &pairFullyLinkedNode },
    { L"Suburbs 2 (2/22)", 0x7e9700, 0x7e9900, indexJojos50Stages, 0x44 },
    { L"Suburbs 2 (3/22)", 0x7e9900, 0x7e9b00, indexJojos50Stages, 0x45 },
    { L"Suburbs 2 (4/22)", 0x7e9b00, 0x7e9d00, indexJojos50Stages, 0x46 },
    { L"Suburbs 2 (5/22)", 0x7e9d00, 0x7e9f00, indexJojos50Stages, 0x47 },
    { L"Suburbs 2 (6/22)", 0x7e9f00, 0x7ea100, indexJojos50Stages, 0x48 },
    { L"Suburbs 2 (7/22)", 0x7ea100, 0x7ea300, indexJojos50Stages, 0x49 },
    { L"Suburbs 2 (8/22)", 0x7ea300, 0x7ea500, indexJojos50Stages, 0x4a },
    { L"Suburbs 2 (9/22)", 0x7ea500, 0x7ea700, indexJojos50Stages, 0x4b },
    { L"Suburbs 2 (10/22)", 0x7ea700, 0x7ea900, indexJojos50Stages, 0x4c },
    { L"Suburbs 2 (11/22)", 0x7ea900, 0x7eab00, indexJojos50Stages, 0x4d },
    { L"Suburbs 2 (12/22)", 0x7eab00, 0x7ead00, indexJojos50Stages, 0x4e },
    { L"Suburbs 2 (13/22)", 0x7ead00, 0x7eaf00, indexJojos50Stages, 0x4f },
    { L"Suburbs 2 (14/22)", 0x7eaf00, 0x7eb100, indexJojos50Stages, 0x50 },
    { L"Suburbs 2 (15/22)", 0x7eb100, 0x7eb300, indexJojos50Stages, 0x51 },
    { L"Suburbs 2 (16/22)", 0x7eb300, 0x7eb500, indexJojos50Stages, 0x52 },
    { L"Suburbs 2 (17/22)", 0x7eb500, 0x7eb700, indexJojos50Stages, 0x53 },
    { L"Suburbs 2 (18/22)", 0x7eb700, 0x7eb900, indexJojos50Stages, 0x54 },
    { L"Suburbs 2 (19/22)", 0x7eb900, 0x7ebb00, indexJojos50Stages, 0x55 },
    { L"Suburbs 2 (20/22)", 0x7ebb00, 0x7ebd00, indexJojos50Stages, 0x56 },
    { L"Suburbs 2 (21/22)", 0x7ebd00, 0x7ebf00, indexJojos50Stages, 0x57 },
    { L"Suburbs 2 (22/22)", 0x7ebf00, 0x7ec080 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB3[] =
{
    { L"Suburbs 3 (1/22)", 0x7ec100, 0x7ec300, indexJojos50Stages, 0x43, &pairFullyLinkedNode },
    { L"Suburbs 3 (2/22)", 0x7ec300, 0x7ec500, indexJojos50Stages, 0x44 },
    { L"Suburbs 3 (3/22)", 0x7ec500, 0x7ec700, indexJojos50Stages, 0x45 },
    { L"Suburbs 3 (4/22)", 0x7ec700, 0x7ec900, indexJojos50Stages, 0x46 },
    { L"Suburbs 3 (5/22)", 0x7ec900, 0x7ecb00, indexJojos50Stages, 0x47 },
    { L"Suburbs 3 (6/22)", 0x7ecb00, 0x7ecd00, indexJojos50Stages, 0x48 },
    { L"Suburbs 3 (7/22)", 0x7ecd00, 0x7ecf00, indexJojos50Stages, 0x49 },
    { L"Suburbs 3 (8/22)", 0x7ecf00, 0x7ed100, indexJojos50Stages, 0x4a },
    { L"Suburbs 3 (9/22)", 0x7ed100, 0x7ed300, indexJojos50Stages, 0x4b },
    { L"Suburbs 3 (10/22)", 0x7ed300, 0x7ed500, indexJojos50Stages, 0x4c },
    { L"Suburbs 3 (11/22)", 0x7ed500, 0x7ed700, indexJojos50Stages, 0x4d },
    { L"Suburbs 3 (12/22)", 0x7ed700, 0x7ed900, indexJojos50Stages, 0x4e },
    { L"Suburbs 3 (13/22)", 0x7ed900, 0x7edb00, indexJojos50Stages, 0x4f },
    { L"Suburbs 3 (14/22)", 0x7edb00, 0x7edd00, indexJojos50Stages, 0x50 },
    { L"Suburbs 3 (15/22)", 0x7edd00, 0x7edf00, indexJojos50Stages, 0x51 },
    { L"Suburbs 3 (16/22)", 0x7edf00, 0x7ee100, indexJojos50Stages, 0x52 },
    { L"Suburbs 3 (17/22)", 0x7ee100, 0x7ee300, indexJojos50Stages, 0x53 },
    { L"Suburbs 3 (18/22)", 0x7ee300, 0x7ee500, indexJojos50Stages, 0x54 },
    { L"Suburbs 3 (19/22)", 0x7ee500, 0x7ee700, indexJojos50Stages, 0x55 },
    { L"Suburbs 3 (20/22)", 0x7ee700, 0x7ee900, indexJojos50Stages, 0x56 },
    { L"Suburbs 3 (21/22)", 0x7ee900, 0x7eeb00, indexJojos50Stages, 0x57 },
    { L"Suburbs 3 (22/22)", 0x7eeb00, 0x7eec80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW1[] = // aka Remains
{
    { L"New 1 (1/9)", 0x7cb200, 0x7cb280, indexJojos50Stages, 0x95, &pairFullyLinkedNode },
    { L"New 1 (2/9)", 0x7cb280, 0x7cb480, indexJojos50Stages, 0x96 },
    { L"New 1 (3/9)", 0x7cb480, 0x7cb680, indexJojos50Stages, 0x97 },
    { L"New 1 (4/9)", 0x7cb680, 0x7cb880, indexJojos50Stages, 0x98 },
    { L"New 1 (5/9)", 0x7cb880, 0x7cba80, indexJojos50Stages, 0x99 },
    { L"New 1 (6/9)", 0x7cba80, 0x7cbc80, indexJojos50Stages, 0x9a },
    { L"New 1 (7/9)", 0x7cbc80, 0x7cbe80, indexJojos50Stages, 0x9b },
    { L"New 1 (8/9)", 0x7cbe80, 0x7cc080, indexJojos50Stages, 0x9c },
    { L"New 1 (9/9)", 0x7cc080, 0x7cc280, indexJojos50Stages, 0x9d },
    // not actually shown { L"New 1 (10/10)", 0x7cc280, 0x7cc480 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW2[] = // aka Hotel (Devil)
{
    { L"New 2 (1/7)", 0x7c9100, 0x7c9300, indexJojos50Stages, 0x11, &pairFullyLinkedNode },
    { L"New 2 (2/7)", 0x7c9300, 0x7c9500, indexJojos50Stages, 0x12 },
    { L"New 2 (3/7)", 0x7c9500, 0x7c9700, indexJojos50Stages, 0x13 },
    { L"New 2 (4/7)", 0x7c9700, 0x7c9900, indexJojos50Stages, 0x14 },
    { L"New 2 (5/7)", 0x7c9900, 0x7c9b00, indexJojos50Stages, 0x15 },
    { L"New 2 (6/7)", 0x7c9b00, 0x7c9d00, indexJojos50Stages, 0x16 },
    { L"New 2 (7/7)", 0x7c9d00, 0x7c9e80, indexJojos50Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW3[] = // aka Small Island
{
    { L"New 3 (1/6)", 0x7d2400, 0x7d2600, indexJojos50Stages, 0x18 },
    { L"New 3 (2/6)", 0x7d2600, 0x7d2800, indexJojos50Stages, 0x19 },
    { L"New 3 (3/6)", 0x7d2800, 0x7d2a00, indexJojos50Stages, 0x1a },
    { L"New 3 (4/6)", 0x7d2a00, 0x7d2c00, indexJojos50Stages, 0x1b },
    { L"New 3 (5/6)", 0x7d2c00, 0x7d2e00, indexJojos50Stages, 0x1c },
    { L"New 3 (6/6)", 0x7d2e00, 0x7d3000, indexJojos50Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW4[] = // aka Ruins
{
    { L"New 4 (1/5)", 0x7d7800, 0x7d7a00, indexJojos50Stages, 0x29, &pairFullyLinkedNode },
    { L"New 4 (2/5)", 0x7d7a00, 0x7d7c00, indexJojos50Stages, 0x2a },
    { L"New 4 (3/5)", 0x7d7c00, 0x7d7e00, indexJojos50Stages, 0x2b },
    { L"New 4 (4/5)", 0x7d7e00, 0x7d8000, indexJojos50Stages, 0x2c },
    { L"New 4 (5/5)", 0x7d8000, 0x7d8200, indexJojos50Stages, 0x2d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW5[] = // aka Underground Water
{
    { L"New 5 (1/8)", 0x7e1200, 0x7e1400, indexJojos50Stages, 0x5f, &pairFullyLinkedNode },
    { L"New 5 (2/8)", 0x7e1400, 0x7e1600, indexJojos50Stages, 0x60 },
    { L"New 5 (3/8)", 0x7e1600, 0x7e1800, indexJojos50Stages, 0x61 },
    { L"New 5 (4/8)", 0x7e1800, 0x7e1a00, indexJojos50Stages, 0x62 },
    { L"New 5 (5/8)", 0x7e1a00, 0x7e1c00, indexJojos50Stages, 0x63 },
    { L"New 5 (6/8)", 0x7e1c00, 0x7e1e00, indexJojos50Stages, 0x64 },
    { L"New 5 (7/8)", 0x7e1e00, 0x7e2000, indexJojos50Stages, 0x65 },
    { L"New 5 (8/8)", 0x7e2000, 0x7e2200, indexJojos50Stages, 0x66 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW6[] = // aka Inside House
{
    { L"New 6 (1/8)", 0x7e3300, 0x7e3500, indexJojos50Stages, 0x34 },
    { L"New 6 (2/8)", 0x7e3500, 0x7e3700, indexJojos50Stages, 0x35 },
    { L"New 6 (3/8)", 0x7e3700, 0x7e3900, indexJojos50Stages, 0x36 },
    { L"New 6 (4/8)", 0x7e3900, 0x7e3b00, indexJojos50Stages, 0x37 },
    { L"New 6 (5/8)", 0x7e3b00, 0x7e3d00, indexJojos50Stages, 0x38 },
    { L"New 6 (6/8)", 0x7e3d00, 0x7e3f00, indexJojos50Stages, 0x39 },
    { L"New 6 (7/8)", 0x7e3f00, 0x7e4100, indexJojos50Stages, 0x3a },
    { L"New 6 (8/8)", 0x7e4100, 0x7e4200, indexJojos50Stages, 0x3b },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW7[] = // aka Coffin Room
{
    { L"New 7 (1/6)", 0x7e4f00, 0x7e5100, indexJojos50Stages, 0x05, &pairNext },
    { L"New 7 (2/6)", 0x7e5100, 0x7e5300, indexJojos50Stages, 0x06 },
    { L"New 7 (3/6)", 0x7e5300, 0x7e5500, indexJojos50Stages, 0x07 },
    { L"New 7 (4/6)", 0x7e5500, 0x7e5700, indexJojos50Stages, 0x08 },
    { L"New 7 (5/6)", 0x7e5700, 0x7e5900, indexJojos50Stages, 0x09 },
    { L"New 7 (6/6)", 0x7e5900, 0x7e5a00, indexJojos50Stages, 0x0a },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW8[] = // aka Clock Tower
{
    { L"New 8 (1/3)", 0x7e6200, 0x7e6400, indexJojos50Stages, 0x00, &pairFullyLinkedNode },
    { L"New 8 (2/3)", 0x7e6400, 0x7e6600, indexJojos50Stages, 0x01 },
    { L"New 8 (3/3)", 0x7e6600, 0x7e6800, indexJojos50Stages, 0x02 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW9[] = // aka On The Bridge
{
    { L"New 9 (1/2)", 0x7ef200, 0x7ef400, indexJojos50Stages, 0x03, &pairFullyLinkedNode },
    { L"New 9 (2/2)", 0x7ef400, 0x7ef600, indexJojos50Stages, 0x04 },
};

const sDescTreeNode JOJOS_A_50_STAGE_COLLECTION[] =
{
    { L"A Lockup", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_STAGE_NODE_ALOCKUP) },
    { L"A Health Room", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AHEALTHROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_AHEALTHROOM) },
    { L"In A Airplane", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_STAGE_NODE_AIRPLANE) },
    { L"Tigerbaum Garden", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_TGARDEN, ARRAYSIZE(JOJOS_A_STAGE_NODE_TGARDEN) },
    { L"Hotel (Devil)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELD, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELD) },
    { L"Remains", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_REMAINS, ARRAYSIZE(JOJOS_A_STAGE_NODE_REMAINS) },
    { L"Hotel (Justice)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELJ) },
    { L"Amusement Park", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AMPARK, ARRAYSIZE(JOJOS_A_STAGE_NODE_AMPARK) },
    { L"Small Island", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLAND, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLAND) },
    { L"Desert Noon", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNOON) },
    { L"Ruins", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_RUIN, ARRAYSIZE(JOJOS_A_STAGE_NODE_RUIN) },
    { L"Country Town Noon", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNOON) },
    { L"Underground Water", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_UWATER, ARRAYSIZE(JOJOS_A_STAGE_NODE_UWATER) },
    { L"Inside House", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_STAGE_NODE_INHOUSE) },
    { L"Coffin Room", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_CROOM) },
    { L"Clock Tower", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CLOCK, ARRAYSIZE(JOJOS_A_STAGE_NODE_CLOCK) },
    { L"Suburbs", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB) },
    { L"On The Bridge", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_OTBRIDGE, ARRAYSIZE(JOJOS_A_STAGE_NODE_OTBRIDGE) },
    { L"Country Town Twilight", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTTWILIGHT) },
    { L"Desert Morning", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DMORNING, ARRAYSIZE(JOJOS_A_STAGE_NODE_DMORNING) },
    { L"Desert Twilight", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DTWILIGHT) },
    { L"Desert Night", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNIGHT) },
    { L"Small Island (Joseph)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLANDJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLANDJ) },
    { L"Country Town Night", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNIGHT) },
    { L"Suburbs 2", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB2, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB2) },
    { L"Suburbs 3", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB3, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB3) },
    { L"New 1 - Copy of Remains", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW1, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW1) },
    { L"New 2 - Copy of Hotel (Devil)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW2, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW2) },
    { L"New 3 - Copy of Small Island", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW3, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW3) },
    { L"New 4 - Copy of Ruins", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW4, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW4) },
    { L"New 5 - Copy of Underground Water", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW5, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW5) },
    { L"New 6 - Copy of Inside House", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW6, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW6) },
    { L"New 7 - Copy of Coffin Room", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW7, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW7) },
    { L"New 8 - Copy of Clock Tower", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW8, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW8) },
    { L"New 9 - Copy of On The Bridge", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW9, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW9) },
};

#pragma endregion Stages

#pragma region Characters

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_A[] =
{
    { L"Jotaro & Star Platinum A", 0x336400, 0x336480, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Jotaro A Guard Cancel / Child Transformation", 0x336a80, 0x336b00 },
    { L"Star Breaker Super A", 0x336D80, 0x336DC0, indexJojos51Jotaro, 0x01 },
    { L"Star Platinum Charging Flash A", 0x336880, 0x336900, indexJojos51Jotaro, 0x02 },
    { L"Jotaro Vs/Super A", 0x410000, 0x410080, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger A", 0x410080, 0x410100, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning A (1/2)", 0x410100, 0x410180, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairNext },
    { L"Jotaro Select/Winning A (2/2)", 0x410180, 0x410200, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Jotaro Burning A (1/2)", 0x336480, 0x336500, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning A (2/2)", 0x336500, 0x336580, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap A (1/2)", 0x336780, 0x336800, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap A (2/2)", 0x336800, 0x336880, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_B[] =
{
    { L"Jotaro & Star Platinum B", 0x34a900, 0x34a980, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Jotaro B Guard Cancel / Child Transformation", 0x34af80, 0x34b000 },
    { L"Star Breaker Super B", 0x34B280, 0x34B2C0, indexJojos51Jotaro, 0x01 },
    { L"Star Platinum Charging Flash B", 0x34AD80, 0x34AE00, indexJojos51Jotaro, 0x02 },
    { L"Jotaro Vs/Super B", 0x414e00, 0x414e80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger B", 0x414e80, 0x414f00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning B (1/2)", 0x414f00, 0x414f80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairNext },
    { L"Jotaro Select/Winning B (2/2)", 0x414f80, 0x415000, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Jotaro Burning B (1/2)", 0x34a980, 0x34aa00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning B (2/2)", 0x34aa00, 0x34aa80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap B (1/2)", 0x34ac80, 0x34ad00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap B (2/2)", 0x34ad00, 0x34ad80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_C[] =
{
    { L"Jotaro & Star Platinum C", 0x35ee00, 0x35ee80, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Jotaro C Guard Cancel / Child Transformation", 0x35f480, 0x35f500 },
    { L"Star Breaker Super C", 0x35F780, 0x35F7C0, indexJojos51Jotaro, 0x01 },
    { L"Star Platinum Charging Flash C", 0x35F280, 0x35F300, indexJojos51Jotaro, 0x02 },
    { L"Jotaro Vs/Super C", 0x419c00, 0x419c80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger C", 0x419c80, 0x419d00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning C (1/2)", 0x419d00, 0x419d80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairNext },
    { L"Jotaro Select/Winning C (2/2)", 0x419d80, 0x419e00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Jotaro Burning C (1/2)", 0x35ee80, 0x35ef00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning C (2/2)", 0x35ef00, 0x35ef80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap C (1/2)", 0x35f180, 0x35f200, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap C (2/2)", 0x35f200, 0x35f280, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_S[] =
{
    { L"Jotaro & Star Platinum S", 0x373300, 0x373380, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Jotaro S Guard Cancel / Child Transformation", 0x373980, 0x373a00 },
    { L"Star Breaker Super S", 0x373C80, 0x373CC0, indexJojos51Jotaro, 0x01 },
    { L"Star Platinum Charging Flash S", 0x373780, 0x373800, indexJojos51Jotaro, 0x02 },
    { L"Jotaro Vs/Super S", 0x41ea00, 0x41ea80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger S", 0x41ea80, 0x41eb00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning S (1/2)", 0x41eb00, 0x41eb80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairNext },
    { L"Jotaro Select/Winning S (2/2)", 0x41eb80, 0x41ec00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Jotaro Burning S (1/2)", 0x373380, 0x373400, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning S (2/2)", 0x373400, 0x373480, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap S (1/2)", 0x373680, 0x373700, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap S (2/2)", 0x373700, 0x373780, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_Start[] =
{
    { L"Jotaro & Star Platinum Start", 0x387800, 0x387880, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Jotaro Start Guard Cancel / Child Transformation", 0x387e80, 0x387f00 },
    { L"Star Breaker Super Start", 0x388180, 0x3881C0, indexJojos51Jotaro, 0x01 },
    { L"Star Platinum Charging Flash Start", 0x387C80, 0x387D00, indexJojos51Jotaro, 0x02 },
    { L"Jotaro Vs/Super Start", 0x423800, 0x423880, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger Start", 0x423880, 0x423900, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning Start (1/2)", 0x423900, 0x423980, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairNext },
    { L"Jotaro Select/Winning Start (2/2)", 0x423980, 0x423a00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Jotaro Burning Start (1/2)", 0x387880, 0x387900, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning Start (2/2)", 0x387900, 0x387980, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap Start (1/2)", 0x387b80, 0x387c00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap Start (2/2)", 0x387c00, 0x387c80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_A[] =
{
    { L"Kakyoin & Hierophant Green A", 0x337080, 0x337100, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal A (1/7)", 0x337900, 0x337980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (2/7)", 0x337980, 0x337a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (3/7)", 0x337a00, 0x337a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (4/7)", 0x337a80, 0x337b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (5/7)", 0x337b00, 0x337b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (6/7)", 0x337b80, 0x337c00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (7/7)", 0x337c00, 0x337c80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles A", 0x337c80, 0x337ca0, indexJojos51Kakyo, 0x08 },
    { L"Kakyoin A Guard Cancel / Child Transformation", 0x337700, 0x337780 },
    { L"Raging Demon Trail A", 0x337800, 0x337880, indexJojos51Kakyo, 0x09 },
    { L"Kakyoin Remote Mode Afterimage A", 0x337500, 0x337580, indexJojos51Kakyo, 0x0A },
    { L"Kakyoin Vs/Super A", 0x410300, 0x410380, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger A", 0x410380, 0x410400, indexJojos51Kakyo, indexJojos51Character_Challenger },
    { L"Kakyoin Select/Winning A (1/2)", 0x410400, 0x410480, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Kakyoin Select/Winning A (2/2)", 0x410480, 0x410500, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Kakyoin Burning A (1/2)", 0x337100, 0x337180, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Burning A (2/2)", 0x337180, 0x337200, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap A (1/2)", 0x337400, 0x337480, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap A (2/2)", 0x337480, 0x337500, indexJojos51Kakyo, 0x00 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_B[] =
{
    { L"Kakyoin & Hierophant Green B", 0x34b580, 0x34b600, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal B (1/7)", 0x34be00, 0x34be80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (2/7)", 0x34be80, 0x34bf00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (3/7)", 0x34bf00, 0x34bf80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (4/7)", 0x34bf80, 0x34c000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (5/7)", 0x34c000, 0x34c080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (6/7)", 0x34c080, 0x34c100, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (7/7)", 0x34c100, 0x34c180, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles B", 0x34c180, 0x34c1a0, indexJojos51Kakyo, 0x08 },
    { L"Kakyoin B Guard Cancel / Child Transformation", 0x34bc00, 0x34bc80 },
    { L"Raging Demon Trail B", 0x34bd00, 0x34bd80, indexJojos51Kakyo, 0x09 },
    { L"Kakyoin Remote Mode Afterimage B", 0x34BA00, 0x34BA80, indexJojos51Kakyo, 0x0a },
    { L"Kakyoin Vs/Super B", 0x415100, 0x415180, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger B", 0x415180, 0x415200, indexJojos51Kakyo, indexJojos51Character_Challenger },
    { L"Kakyoin Select/Winning B (1/2)", 0x415200, 0x415280, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Kakyoin Select/Winning B (2/2)", 0x415280, 0x415300, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Kakyoin Burning B (1/2)", 0x34b600, 0x34b680, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Burning B (2/2)", 0x34b680, 0x34b700, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap B (1/2)", 0x34b900, 0x34b980, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap B (2/2)", 0x34b980, 0x34ba00, indexJojos51Kakyo, 0x00 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_C[] =
{
    { L"Kakyoin & Hierophant Green C", 0x35fa80, 0x35fb00, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal C (1/7)", 0x360300, 0x360380, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (2/7)", 0x360380, 0x360400, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (3/7)", 0x360400, 0x360480, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (4/7)", 0x360480, 0x360500, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (5/7)", 0x360500, 0x360580, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (6/7)", 0x360580, 0x360600, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (7/7)", 0x360600, 0x360680, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles C", 0x360680, 0x3606a0, indexJojos51Kakyo, 0x08 },
    { L"Kakyoin C Guard Cancel / Child Transformation", 0x360100, 0x360180 },
    { L"Raging Demon Trail C", 0x360200, 0x360280, indexJojos51Kakyo, 0x09 },
    { L"Kakyoin Remote Mode Afterimage C", 0x35FF00, 0x35FF80, indexJojos51Kakyo, 0x0a },
    { L"Kakyoin Vs/Super C", 0x419f00, 0x419f80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger C", 0x419f80, 0x41a000, indexJojos51Kakyo, indexJojos51Character_Challenger },
    { L"Kakyoin Select/Winning C (1/2)", 0x41a000, 0x41a080, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Kakyoin Select/Winning C (2/2)", 0x41a080, 0x41a100, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Kakyoin Burning C (1/2)", 0x35fb00, 0x35fb80, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Burning C (2/2)", 0x35fb80, 0x35fc00, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap C (1/2)", 0x35fe00, 0x35fe80, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap C (2/2)", 0x35fe80, 0x35ff00, indexJojos51Kakyo, 0x00 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_S[] =
{
    { L"Kakyoin & Hierophant Green S", 0x373f80, 0x374000, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal S (1/7)", 0x374800, 0x374880, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (2/7)", 0x374880, 0x374900, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (3/7)", 0x374900, 0x374980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (4/7)", 0x374980, 0x374a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (5/7)", 0x374a00, 0x374a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (6/7)", 0x374a80, 0x374b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (7/7)", 0x374b00, 0x374b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles S", 0x374b80, 0x374ba0, indexJojos51Kakyo, 0x08 },
    { L"Kakyoin S Guard Cancel / Child Transformation", 0x374600, 0x374680 },
    { L"Raging Demon Trail S", 0x374700, 0x374780, indexJojos51Kakyo, 0x09 },
    { L"Kakyoin Remote Mode Afterimage S", 0x374400, 0x374480, indexJojos51Kakyo, 0x0a },
    { L"Kakyoin Vs/Super S", 0x41ed00, 0x41ed80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger S", 0x41ed80, 0x41ee00, indexJojos51Kakyo, indexJojos51Character_Challenger },
    { L"Kakyoin Select/Winning S (1/2)", 0x41ee00, 0x41ee80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Kakyoin Select/Winning S (2/2)", 0x41ee80, 0x41ef00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Kakyoin Burning S (1/2)", 0x374000, 0x374080, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Burning S (2/2)", 0x374080, 0x374100, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap S (1/2)", 0x374300, 0x374380, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap S (2/2)", 0x374380, 0x374400, indexJojos51Kakyo, 0x00 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start[] =
{
    { L"Kakyoin & Hierophant Green Start", 0x388480, 0x388500, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal Start (1/7)", 0x388d00, 0x388d80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (2/7)", 0x388d80, 0x388e00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (3/7)", 0x388e00, 0x388e80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (4/7)", 0x388e80, 0x388f00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (5/7)", 0x388f00, 0x388f80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (6/7)", 0x388f80, 0x389000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (7/7)", 0x389000, 0x389080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles Start", 0x389080, 0x3890a0, indexJojos51Kakyo, 0x08 },
    { L"Kakyoin Start Guard Cancel / Child Transformation", 0x388b00, 0x388b80 },
    { L"Raging Demon Trail Start", 0x388c00, 0x388c80, indexJojos51Kakyo, 0x09 },
    { L"Kakyoin Remote Mode Afterimage Start", 0x388900, 0x388980, indexJojos51Kakyo, 0x0a },
    { L"Kakyoin Vs/Super Start", 0x423b00, 0x423b80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger Start", 0x423b80, 0x423c00, indexJojos51Kakyo, indexJojos51Character_Challenger },
    { L"Kakyoin Select/Winning Start (1/2)", 0x423c00, 0x423c80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Kakyoin Select/Winning Start (2/2)", 0x423c80, 0x423d00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Kakyoin Burning Start (1/2)", 0x388500, 0x388580, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Burning Start (2/2)", 0x388580, 0x388600, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap Start (1/2)", 0x388800, 0x388880, indexJojos51Kakyo, 0x00 },
    { L"Kakyoin Tech/Zap Start (2/2)", 0x388880, 0x388900, indexJojos51Kakyo, 0x00 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_A[] =
{
    { L"Avdol & Magician's Red A", 0x337d00, 0x337d80, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire A", 0x338580, 0x3385c0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol A Guard Cancel / Child Transformation", 0x338380, 0x338400 },
    { L"Avdol & MR Remote Activation A", 0x338180, 0x338200, indexJojos51Avdol, 0x02 },
    { L"Avdol Vs/Super A", 0x410600, 0x410680, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger A", 0x410680, 0x410700, indexJojos51Avdol, indexJojos51Character_Challenger },
    { L"Avdol Select / Winning A (1/2)", 0x410700, 0x410780, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairNext },
    { L"Avdol Select / Winning A (2/2)", 0x410780, 0x410800, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Avdol Burning A (1/2)", 0x337d80, 0x337e00, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { L"Avdol Burning A (2/2)", 0x337e00, 0x337e80, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { L"Avdol Tech/Zap A (1/2)", 0x338080, 0x338100, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { L"Avdol Tech/Zap A (2/2)", 0x338100, 0x338180, indexJojos51Avdol, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_B[] =
{
    { L"Avdol & Magician's Red B", 0x34c200, 0x34c280, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire B", 0x34ca80, 0x34cac0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol B Guard Cancel / Child Transformation", 0x34c880, 0x34c900 },
    { L"Avdol & MR Remote Activation B", 0x34c680, 0x34c700, indexJojos51Avdol, 0x02 },
    { L"Avdol Vs / Super B", 0x415400, 0x415480, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger B", 0x415480, 0x415500, indexJojos51Avdol, indexJojos51Character_Challenger },
    { L"Avdol Select / Winning B (1/2)", 0x415500, 0x415580, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairNext },
    { L"Avdol Select / Winning B (2/2)", 0x415580, 0x415600, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Avdol Burning B (1/2)", 0x34c280, 0x34c300, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning B (2/2)", 0x34c300, 0x34c380, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap B (1/2)", 0x34c580, 0x34c600, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap B (2/2)", 0x34c600, 0x34c680, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_C[] =
{
    { L"Avdol & Magician's Red C", 0x360700, 0x360780, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire C", 0x360f80, 0x360fc0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol C Guard Cancel / Child Transformation", 0x360d80, 0x360e00 },
    { L"Avdol & MR Remote Activation C", 0x360b80, 0x360c00, indexJojos51Avdol, 0x02 },
    { L"Avdol Vs / Super C", 0x41a200, 0x41a280, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger C", 0x41a280, 0x41a300, indexJojos51Avdol, indexJojos51Character_Challenger },
    { L"Avdol Select / Winning C (1/2)", 0x41a300, 0x41a380, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairNext },
    { L"Avdol Select / Winning C (2/2)", 0x41a380, 0x41a400, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Avdol Burning C (1/2)", 0x360780, 0x360800, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning C (2/2)", 0x360800, 0x360880, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap C (1/2)", 0x360a80, 0x360b00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap C (2/2)", 0x360b00, 0x360b80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_S[] =
{
    { L"Avdol & Magician's Red S", 0x374c00, 0x374c80, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire S", 0x375480, 0x3754c0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol S Guard Cancel / Child Transformation", 0x375280, 0x375300 },
    { L"Avdol & MR Remote Activation S", 0x375080, 0x375100, indexJojos51Avdol, 0x02 },
    { L"Avdol Vs / Super S", 0x41f000, 0x41f080, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger S", 0x41f080, 0x41f100, indexJojos51Avdol, indexJojos51Character_Challenger },
    { L"Avdol Select / Winning S (1/2)", 0x41f100, 0x41f180, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairNext },
    { L"Avdol Select / Winning S (2/2)", 0x41f180, 0x41f200, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Avdol Burning S (1/2)", 0x374c80, 0x374d00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning S (2/2)", 0x374d00, 0x374d80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap S (1/2)", 0x374f80, 0x375000, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap S (2/2)", 0x375000, 0x375080, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_Start[] =
{
    { L"Avdol & Magician's Red Start", 0x389100, 0x389180, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire Start", 0x389980, 0x3899c0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol Start Guard Cancel / Child Transformation", 0x389780, 0x389800 },
    { L"Avdol & MR Remote Activation Start", 0x389580, 0x389600, indexJojos51Avdol, 0x02 },
    { L"Avdol Vs / Super Start", 0x423e00, 0x423e80, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger Start", 0x423e80, 0x423f00, indexJojos51Avdol, indexJojos51Character_Challenger },
    { L"Avdol Select / Winning Start (1/2)", 0x423f00, 0x423f80, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairNext },
    { L"Avdol Select / Winning Start (2/2)", 0x423f80, 0x424000, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Avdol Burning Start (1/2)", 0x389180, 0x389200, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning Start (2/2)", 0x389200, 0x389280, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap Start (1/2)", 0x389480, 0x389500, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap Start (2/2)", 0x389500, 0x389580, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

// Warning: Pol uses an older ordering system, so don't use the new enum.
const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_A[] =
{
    { L"Polnareff & Silver Chariot A", 0x338980, 0x338a00, indexJojos51Pol, 0x00 },
    { L"Polnareff A Guard Cancel / Child Transformation", 0x339000, 0x339080 },
    { L"Chariot's Changing Pal A (1/2)", 0x339280, 0x339300, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal A (2/2)", 0x339300, 0x339380, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash A", 0x338e00, 0x338e80, indexJojos51Pol, 0x01  },
    { L"Polnareff Vs / Super A", 0x410900, 0x410980, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger A", 0x410980, 0x410a00, indexJojos51Pol, 0x03 },
    { L"Polnareff Select / Winning A (1/2)", 0x410a00, 0x410a80, indexJojos51Pol, 0x4, &pairNext },
    { L"Polnareff Select / Winning A (2/2)", 0x410a80, 0x410b00, indexJojos51Pol, 0x05, &pairPrevious },
    { L"Polnareff Burning A (1/2)", 0x338a00, 0x338a80, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning A (2/2)", 0x338a80, 0x338b00, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap A (1/2)", 0x338d00, 0x338d80, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap A (2/2)", 0x338d80, 0x338e00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_B[] =
{
    { L"Polnareff & Silver Chariot B", 0x34ce80, 0x34cf00, indexJojos51Pol },
    { L"Polnareff B Guard Cancel / Child Transformation", 0x34d500, 0x34d580 },
    { L"Chariot's Changing Pal B (1/2)", 0x34d780, 0x34d800, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal B (2/2)", 0x34d800, 0x34d880, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash B", 0x34d300, 0x34d380, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super B", 0x415700, 0x415780, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger B", 0x415780, 0x415800, indexJojos51Pol, 0x03 },
    { L"Polnareff Select / Winning B (1/2)", 0x415800, 0x415880, indexJojos51Pol, 0x4, &pairNext },
    { L"Polnareff Select / Winning B (2/2)", 0x415880, 0x415900, indexJojos51Pol, 0x05, &pairPrevious },
    { L"Polnareff Burning B (1/2)", 0x34cf00, 0x34cf80, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning B (2/2)", 0x34cf80, 0x34d000, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap B (1/2)", 0x34d200, 0x34d280, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap B (2/2)", 0x34d280, 0x34d300, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_C[] =
{
    { L"Polnareff & Silver Chariot C", 0x361380, 0x361400, indexJojos51Pol },
    { L"Polnareff C Guard Cancel / Child Transformation", 0x361a00, 0x361a80 },
    { L"Chariot's Changing Pal C (1/2)", 0x361c80, 0x361d00, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal C (2/2)", 0x361d00, 0x361d80, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash C", 0x361800, 0x361880, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super C", 0x41a500, 0x41a580, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger C", 0x41a580, 0x41a600, indexJojos51Pol, 0x03 },
    { L"Polnareff Select / Winning C (1/2)", 0x41a600, 0x41a680, indexJojos51Pol, 0x4, &pairNext },
    { L"Polnareff Select / Winning C (2/2)", 0x41a680, 0x41a700, indexJojos51Pol, 0x05, &pairPrevious },
    { L"Polnareff Burning C (1/2)", 0x361400, 0x361480, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning C (2/2)", 0x361480, 0x361500, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap C (1/2)", 0x361700, 0x361780, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap C (2/2)", 0x361780, 0x361800, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_S[] =
{
    { L"Polnareff & Silver Chariot S", 0x375880, 0x375900, indexJojos51Pol },
    { L"Polnareff S Guard Cancel / Child Transformation", 0x375f00, 0x375f80 },
    { L"Chariot's Changing Pal S (1/2)", 0x376180, 0x376200, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal S (2/2)", 0x376200, 0x376280, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash S", 0x375d00, 0x375d80, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super S", 0x41f300, 0x41f380, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger S", 0x41f380, 0x41f400, indexJojos51Pol, 0x03 },
    { L"Polnareff Select / Winning S (1/2)", 0x41f400, 0x41f480, indexJojos51Pol, 0x4, &pairNext },
    { L"Polnareff Select / Winning S (2/2)", 0x41f480, 0x41f500, indexJojos51Pol, 0x05, &pairPrevious },
    { L"Polnareff Burning S (1/2)", 0x375900, 0x375980, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning S (2/2)", 0x375980, 0x375a00, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap S (1/2)", 0x375c00, 0x375c80, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap S (2/2)", 0x375c80, 0x375d00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_Start[] =
{
    { L"Polnareff & Silver Chariot Start", 0x389d80, 0x389e00, indexJojos51Pol },
    { L"Polnareff Start Guard Cancel / Child Transformation", 0x38a400, 0x38a480 },
    { L"Chariot's Changing Pal Start (1/2)", 0x38a680, 0x38a700, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal Start (2/2)", 0x38a700, 0x38a780, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash Start", 0x38a200, 0x38a280, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super Start", 0x424100, 0x424180, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger Start", 0x424180, 0x424200, indexJojos51Pol, 0x03 },
    { L"Polnareff Select / Winning Start (1/2)", 0x424200, 0x424280, indexJojos51Pol, 0x4, &pairNext },
    { L"Polnareff Select / Winning Start (2/2)", 0x424280, 0x424300, indexJojos51Pol, 0x05, &pairPrevious },
    { L"Polnareff Burning Start (1/2)", 0x389e00, 0x389e80, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning Start (2/2)", 0x389e80, 0x389f00, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap Start (1/2)", 0x38a100, 0x38a180, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap Start (2/2)", 0x38a180, 0x38a200, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Shared[]
{
    { L"Flash Back Manga Panels (Joseph 236aa)", 0x335B80, 0x335BC0, indexJojos51Joseph, 0x01 },
    { L"Lisa Lisa & Caesar (Joseph 236aa)", 0x335C00, 0x335C80, indexJojos51Joseph, 0x02 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_A[] =
{
    { L"Joseph & Hermit Purple A", 0x339600, 0x339680, indexJojos51Joseph },
    { L"Joseph A Guard Cancel / Child Transformation", 0x339c80, 0x339d00 },
    { L"Joseph Tech/Zap/CC A (1/2)", 0x339980, 0x339a00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC A (2/2)", 0x339a00, 0x339a80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super A", 0x410c00, 0x410c80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger A", 0x410c80, 0x410d00, indexJojos51Joseph, indexJojos51Character_Challenger },
    { L"Joseph Select / Winning A (1/2)", 0x410d00, 0x410d80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairNext },
    { L"Joseph Select / Winning A (2/2)", 0x410d80, 0x410e00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Joseph Burning A (1/2)", 0x339680, 0x339700, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning A (2/2)", 0x339700, 0x339780, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_B[] =
{
    { L"Joseph & Hermit Purple B", 0x34db00, 0x34db80, indexJojos51Joseph },
    { L"Joseph B Guard Cancel / Child Transformation", 0x34e180, 0x34e200 },
    { L"Joseph Tech/Zap/CC B (1/2)", 0x34de80, 0x34df00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC B (2/2)", 0x34df00, 0x34df80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super B", 0x415a00, 0x415a80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger B", 0x415a80, 0x415b00, indexJojos51Joseph, indexJojos51Character_Challenger },
    { L"Joseph Select / Winning B (1/2)", 0x415b00, 0x415b80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairNext },
    { L"Joseph Select / Winning B (2/2)", 0x415b80, 0x415c00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Joseph Burning B (1/2)", 0x34db80, 0x34dc00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning B (2/2)", 0x34dc00, 0x34dc80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_C[] =
{
    { L"Joseph & Hermit Purple C", 0x362000, 0x362080, indexJojos51Joseph },
    { L"Joseph C Guard Cancel / Child Transformation", 0x362680, 0x362700 },
    { L"Joseph Tech/Zap/CC C (1/2)", 0x362380, 0x362400, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC C (2/2)", 0x362400, 0x362480, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super C", 0x41a800, 0x41a880, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger C", 0x41a880, 0x41a900, indexJojos51Joseph, indexJojos51Character_Challenger },
    { L"Joseph Select / Winning C (1/2)", 0x41a900, 0x41a980, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairNext },
    { L"Joseph Select / Winning C (2/2)", 0x41a980, 0x41aa00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Joseph Burning C (1/2)", 0x362080, 0x362100, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning C (2/2)", 0x362100, 0x362180, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_S[] =
{
    { L"Joseph & Hermit Purple S", 0x376500, 0x376580, indexJojos51Joseph },
    { L"Joseph S Guard Cancel / Child Transformation", 0x376b80, 0x376c00 },
    { L"Joseph Tech/Zap/CC S (1/2)", 0x376880, 0x376900, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC S (2/2)", 0x376900, 0x376980, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super S", 0x41f600, 0x41f680, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger S", 0x41f680, 0x41f700, indexJojos51Joseph, indexJojos51Character_Challenger },
    { L"Joseph Select / Winning S (1/2)", 0x41f700, 0x41f780, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairNext },
    { L"Joseph Select / Winning S (2/2)", 0x41f780, 0x41f800, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Joseph Burning S (1/2)", 0x376580, 0x376600, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning S (2/2)", 0x376600, 0x376680, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Start[] =
{
    { L"Joseph & Hermit Purple Start", 0x38aa00, 0x38aa80, indexJojos51Joseph },
    { L"Joseph Start Guard Cancel / Child Transformation", 0x38b080, 0x38b100 },
    { L"Joseph Tech/Zap/CC Start (1/2)", 0x38ad80, 0x38ae00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC Start (2/2)", 0x38ae00, 0x38ae80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super Start", 0x424400, 0x424480, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger Start", 0x424480, 0x424500, indexJojos51Joseph, indexJojos51Character_Challenger },
    { L"Joseph Select / Winning Start (1/2)", 0x424500, 0x424580, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairNext },
    { L"Joseph Select / Winning Start (2/2)", 0x424580, 0x424600, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Joseph Burning Start (1/2)", 0x38aa80, 0x38ab00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning Start (2/2)", 0x38ab00, 0x38ab80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Shared[] =
{
    { L"Iggy Raging Demon Static (A / B / C / S / Start)", 0x30D300, 0x30D320, indexJojos51Iggy, 0x02 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_A[] =
{
    { L"Iggy & The Fool A", 0x33a280, 0x33a300, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Iggy A Guard Cancel / Child Transformation", 0x33a900, 0x33a980 },
    { L"Raging Demon Trail A (1/3)", 0x33aa80, 0x33ab00, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail A (2/3)", 0x33ab00, 0x33ab80, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail A (3/3)", 0x33ab80, 0x33ac00, indexJojos51Iggy, 0x01 },
    { L"Iggy Vs / Super A", 0x410f00, 0x410f80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger A", 0x410f80, 0x411000, indexJojos51Iggy, indexJojos51Character_Challenger },
    { L"Iggy Select / Winning A (1/2)", 0x411000, 0x411080, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairNext },
    { L"Iggy Select / Winning A (2/2)", 0x411080, 0x411100, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Iggy Burning A (1/2)", 0x33a300, 0x33a380, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning A (2/2)", 0x33a380, 0x33a400, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap A (1/2)", 0x33a600, 0x33a680, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap A (2/2)", 0x33a680, 0x33a700, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_B[] =
{
    { L"Iggy & The Fool B", 0x34e780, 0x34e800, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Iggy B Guard Cancel / Child Transformation", 0x34ee00, 0x34ee80 },
    { L"Raging Demon Trail B (1/3)", 0x34ef80, 0x34f000, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail B (2/3)", 0x34f000, 0x34f080, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail B (3/3)", 0x34f080, 0x34f100, indexJojos51Iggy, 0x01 },
    { L"Iggy Vs / Super B", 0x415d00, 0x415d80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger B", 0x415d80, 0x415e00, indexJojos51Iggy, indexJojos51Character_Challenger },
    { L"Iggy Select / Winning B (1/2)", 0x415e00, 0x415e80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairNext },
    { L"Iggy Select / Winning B (2/2)", 0x415e80, 0x415f00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Iggy Burning B (1/2)", 0x34e800, 0x34e880, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning B (2/2)", 0x34e880, 0x34e900, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap B (1/2)", 0x34eb00, 0x34eb80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap B (2/2)", 0x34eb80, 0x34ec00, indexJojos51Iggy, indexJojos51Character_BurnZap},
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_C[] =
{
    { L"Iggy & The Fool C", 0x362c80, 0x362d00, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Iggy C Guard Cancel / Child Transformation", 0x363300, 0x363380 },
    { L"Raging Demon Trail C (1/3)", 0x363480, 0x363500, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail C (2/3)", 0x363500, 0x363580, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail C (3/3)", 0x363580, 0x363600, indexJojos51Iggy, 0x01 },
    { L"Iggy Vs / Super C", 0x41ab00, 0x41ab80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger C", 0x41ab80, 0x41ac00, indexJojos51Iggy, indexJojos51Character_Challenger },
    { L"Iggy Select / Winning C (1/2)", 0x41ac00, 0x41ac80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairNext },
    { L"Iggy Select / Winning C (2/2)", 0x41ac80, 0x41ad00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Iggy Burning C (1/2)", 0x362d00, 0x362d80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning C (2/2)", 0x362d80, 0x362e00, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap C (1/2)", 0x363000, 0x363080, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap C (2/2)", 0x363080, 0x363100, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_S[] =
{
    { L"Iggy & The Fool S", 0x377180, 0x377200, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Iggy S Guard Cancel / Child Transformation", 0x377800, 0x377880 },
    { L"Raging Demon Trail S (1/3)", 0x377980, 0x377a00, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail S (2/3)", 0x377a00, 0x377a80, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail S (3/3)", 0x377a80, 0x377b00, indexJojos51Iggy, 0x01 },
    { L"Iggy Vs / Super S", 0x41f900, 0x41f980, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger S", 0x41f980, 0x41fa00, indexJojos51Iggy, indexJojos51Character_Challenger },
    { L"Iggy Select / Winning S (1/2)", 0x41fa00, 0x41fa80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairNext },
    { L"Iggy Select / Winning S (2/2)", 0x41fa80, 0x41fb00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Iggy Burning S (1/2)", 0x377200, 0x377280, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning S (2/2)", 0x377280, 0x377300, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap S (1/2)", 0x377500, 0x377580, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap S (2/2)", 0x377580, 0x377600, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Start[] =
{
    { L"Iggy & The Fool Start", 0x38b680, 0x38b700, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Iggy Start Guard Cancel / Child Transformation", 0x38bd00, 0x38bd80 },
    { L"Raging Demon Trail Start (1/3)", 0x38be80, 0x38bf00, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail Start (2/3)", 0x38bf00, 0x38bf80, indexJojos51Iggy, 0x01 },
    { L"Raging Demon Trail Start (3/3)", 0x38bf80, 0x38c000, indexJojos51Iggy, 0x01 },
    { L"Iggy Vs / Super Start", 0x424700, 0x424780, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger Start", 0x424780, 0x424800, indexJojos51Iggy, indexJojos51Character_Challenger },
    { L"Iggy Select / Winning Start (1/2)", 0x424800, 0x424880, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairNext },
    { L"Iggy Select / Winning Start (2/2)", 0x424880, 0x424900, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Iggy Burning Start (1/2)", 0x38b700, 0x38b780, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning Start (2/2)", 0x38b780, 0x38b800, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap Start (1/2)", 0x38ba00, 0x38ba80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap Start (2/2)", 0x38ba80, 0x38bb00, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_A[] =
{
    { L"Alessi & Sethan A", 0x33af00, 0x33af80, indexJojos51Alessi },
    { L"Alessi A Guard Cancel / Child Transformation", 0x33b580, 0x33b600 },
    { L"Alessi A Wave Attack", 0x33b780, 0x33b7c0, indexJojos51Alessi, 0x01 },
    { L"Alessi Tech/Zap/CC A (1/2)", 0x33b280, 0x33b300, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC A (2/2)", 0x33b300, 0x33b380, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose A", 0x33b800, 0x33b880, indexJojos51Alessi, 0x02 },
    { L"Alessi Vs / Super A", 0x411200, 0x411280, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger A", 0x411280, 0x411300, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning A (1/2)", 0x411300, 0x411380, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairNext },
    { L"Alessi Select / Winning A (2/2)", 0x411380, 0x411400, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Alessi Burning A (1/2)", 0x33af80, 0x33b000, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning A (2/2)", 0x33b000, 0x33b080, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_B[] =
{
    { L"Alessi & Sethan B", 0x34f400, 0x34f480, indexJojos51Alessi },
    { L"Alessi B Guard Cancel / Child Transformation", 0x34fa80, 0x34fb00 },
    { L"Alessi B Wave Attack", 0x34fc80, 0x34fcc0, indexJojos51Alessi, 0x01 },
    { L"Alessi Tech/Zap/CC B (1/2)", 0x34f780, 0x34f800, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC B (2/2)", 0x34f800, 0x34f880, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose B", 0x34fd00, 0x34fd80, indexJojos51Alessi, 0x02 },
    { L"Alessi Vs / Super B", 0x416000, 0x416080, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger B", 0x416080, 0x416100, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning B (1/2)", 0x416100, 0x416180, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairNext },
    { L"Alessi Select / Winning B (2/2)", 0x416180, 0x416200, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Alessi Burning B (1/2)", 0x34f480, 0x34f500, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning B (2/2)", 0x34f500, 0x34f580, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_C[] =
{
    { L"Alessi & Sethan C", 0x363900, 0x363980, indexJojos51Alessi },
    { L"Alessi C Guard Cancel / Child Transformation", 0x363f80, 0x364000 },
    { L"Alessi C Wave Attack", 0x364180, 0x3641c0, indexJojos51Alessi, 0x01 },
    { L"Alessi Tech/Zap/CC C (1/2)", 0x363c80, 0x363d00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC C (2/2)", 0x363d00, 0x363d80, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose C", 0x364200, 0x364280, indexJojos51Alessi, 0x02 },
    { L"Alessi Vs / Super C", 0x41ae00, 0x41ae80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger C", 0x41ae80, 0x41af00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning C (1/2)", 0x41af00, 0x41af80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairNext },
    { L"Alessi Select / Winning C (2/2)", 0x41af80, 0x41b000, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Alessi Burning C (1/2)", 0x363980, 0x363a00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning C (2/2)", 0x363a00, 0x363a80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_S[] =
{
    { L"Alessi & Sethan S", 0x377e00, 0x377e80, indexJojos51Alessi },
    { L"Alessi S Guard Cancel / Child Transformation", 0x378480, 0x378500 },
    { L"Alessi S Wave Attack", 0x378680, 0x3786c0, indexJojos51Alessi, 0x01 },
    { L"Alessi Tech/Zap/CC S (1/2)", 0x378180, 0x378200, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC S (2/2)", 0x378200, 0x378280, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose S", 0x378700, 0x378780, indexJojos51Alessi, 0x02 },
    { L"Alessi Vs / Super S", 0x41fc00, 0x41fc80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger S", 0x41fc80, 0x41fd00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning S (1/2)", 0x41fd00, 0x41fd80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairNext },
    { L"Alessi Select / Winning S (2/2)", 0x41fd80, 0x41fe00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Alessi Burning S (1/2)", 0x377e80, 0x377f00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning S (2/2)", 0x377f00, 0x377f80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_Start[] =
{
    { L"Alessi & Sethan Start", 0x38c300, 0x38c380, indexJojos51Alessi },
    { L"Alessi Start Guard Cancel / Child Transformation", 0x38c980, 0x38ca00 },
    { L"Alessi Start Wave Attack", 0x38cb80, 0x38cbc0, indexJojos51Alessi, 0x01 },
    { L"Alessi Tech/Zap/CC Start (1/2)", 0x38c680, 0x38c700, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC Start (2/2)", 0x38c700, 0x38c780, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose Start", 0x38cc00, 0x38cc80, indexJojos51Alessi, 0x02 },
    { L"Alessi Vs / Super Start", 0x424a00, 0x424a80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger Start", 0x424a80, 0x424b00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning Start (1/2)", 0x424b00, 0x424b80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairNext },
    { L"Alessi Select / Winning Start (2/2)", 0x424b80, 0x424c00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Alessi Burning Start (1/2)", 0x38c380, 0x38c400, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning Start (2/2)", 0x38c400, 0x38c480, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_A[] =
{
    { L"Chaka A", 0x33bb80, 0x33bc00, indexJojos51Chaka },
    { L"Chaka A Guard Cancel / Child Transformation", 0x33c200, 0x33c280 },
    { L"Chaka A Super Trail", 0x33c400, 0x33c480, indexJojos51Chaka, 0x01 },
    { L"Chaka Tech/Zap/CC/Counter A (1/2)", 0x33bf00, 0x33bf80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter A (2/2)", 0x33bf80, 0x33c000, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super A", 0x411500, 0x411580, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger A", 0x411580, 0x411600, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning A", 0x411600, 0x411680, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning A (1/2)", 0x33bc00, 0x33bc80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning A (2/2)", 0x33bc80, 0x33bd00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_B[] =
{
    { L"Chaka B", 0x350080, 0x350100, indexJojos51Chaka },
    { L"Chaka B Guard Cancel / Child Transformation", 0x350700, 0x350780 },
    { L"Chaka B Super Trail", 0x350900, 0x350980, indexJojos51Chaka, 0x01 },
    { L"Chaka Tech/Zap/CC/Counter B (1/2)", 0x350400, 0x350480, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter B (2/2)", 0x350480, 0x350500, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super B", 0x416300, 0x416380, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger B", 0x416380, 0x416400, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning B", 0x416400, 0x416480, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning B (1/2)", 0x350100, 0x350180, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning B (2/2)", 0x350180, 0x350200, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_C[] =
{
    { L"Chaka C", 0x364580, 0x364600, indexJojos51Chaka },
    { L"Chaka C Guard Cancel / Child Transformation", 0x364c00, 0x364c80 },
    { L"Chaka C Super Trail", 0x364e00, 0x364e80, indexJojos51Chaka, 0x01 },
    { L"Chaka Tech/Zap/CC/Counter C (1/2)", 0x364900, 0x364980, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter C (2/2)", 0x364980, 0x364a00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super C", 0x41b100, 0x41b180, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger C", 0x41b180, 0x41b200, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning C", 0x41b200, 0x41b280, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning C (1/2)", 0x364600, 0x364680, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning C (2/2)", 0x364680, 0x364700, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_S[] =
{
    { L"Chaka S", 0x378a80, 0x378b00, indexJojos51Chaka },
    { L"Chaka S Guard Cancel / Child Transformation", 0x379100, 0x379180 },
    { L"Chaka S Super Trail", 0x379300, 0x379380, indexJojos51Chaka, 0x01 },
    { L"Chaka Tech/Zap/CC/Counter S (1/2)", 0x378e00, 0x378e80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter S (2/2)", 0x378e80, 0x378f00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super S", 0x41ff00, 0x41ff80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger S", 0x41ff80, 0x420000, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning S", 0x420000, 0x420080, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning S (1/2)", 0x378b00, 0x378b80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning S (2/2)", 0x378b80, 0x378c00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_Start[] =
{
    { L"Chaka Start", 0x38cf80, 0x38d000, indexJojos51Chaka },
    { L"Chaka Start Guard Cancel / Child Transformation", 0x38d600, 0x38d680 },
    { L"Chaka Start Super Trail", 0x38d800, 0x38d880, indexJojos51Chaka, 0x01 },
    { L"Chaka Tech/Zap/CC/Counter Start (1/2)", 0x38d300, 0x38d380, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter Start (2/2)", 0x38d380, 0x38d400, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super Start", 0x424d00, 0x424d80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger Start", 0x424d80, 0x424e00, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning Start", 0x424e00, 0x424e80, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning Start (1/2)", 0x38d000, 0x38d080, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning Start (2/2)", 0x38d080, 0x38d100, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_A[] =
{
    { L"Devo & Ebony Devil A", 0x33c800, 0x33c880, indexJojos51Devo },
    { L"Devo A Guard Cancel / Child Transformation", 0x33ce80, 0x33cf00 },
    { L"Ebony Devil Stand Off A", 0x33cf00, 0x33cf80, indexJojos51Devo, 0x02 },
    { L"Ebony Stand On Transition A", 0x33ce00, 0x33ce80, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail A (1/3)", 0x33d100, 0x33d180, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail A (2/3)", 0x33d180, 0x33d200, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail A (3/3)", 0x33d200, 0x33d280, indexJojos51Devo, 0x02 },
    { L"Devo Intro Stuff A", 0x33d400, 0x33d480, indexJojos51Devo, 0x01 },
    { L"Devo Vs / Super A", 0x411800, 0x411880, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger A", 0x411880, 0x411900, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning A (1/2)", 0x411900, 0x411980, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Devo Select / Winning A (2/2)", 0x411980, 0x411a00, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Devo & Ebony Devil Burning A (1/2)", 0x33c880, 0x33c900, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning A (2/2)", 0x33c900, 0x33c980, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap A (1/2)", 0x33cb80, 0x33cc00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap A (2/2)", 0x33cc00, 0x33cc80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_B[] =
{
    { L"Devo & Ebony Devil B", 0x350d00, 0x350d80, indexJojos51Devo },
    { L"Devo B Guard Cancel / Child Transformation", 0x351380, 0x351400 },
    { L"Ebony Devil Stand Off B", 0x351400, 0x351480, indexJojos51Devo, 0x02 },
    { L"Ebony Stand On Transition B", 0x351300, 0x351380, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail B (1/3)", 0x351600, 0x351680, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail B (2/3)", 0x351680, 0x351700, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail B (3/3)", 0x351700, 0x351780, indexJojos51Devo, 0x02 },
    { L"Devo Intro Stuff B", 0x351900, 0x351980, indexJojos51Devo, 0x01 },
    { L"Devo Vs / Super B", 0x416600, 0x416680, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger B", 0x416680, 0x416700, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning B (1/2)", 0x416700, 0x416780, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Devo Select / Winning B (2/2)", 0x416780, 0x416800, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Devo & Ebony Devil Burning B (1/2)", 0x350d80, 0x350e00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning B (2/2)", 0x350e00, 0x350e80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap B (1/2)", 0x351080, 0x351100, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap B (2/2)", 0x351100, 0x351180, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_C[] =
{
    { L"Devo & Ebony Devil C", 0x365200, 0x365280, indexJojos51Devo },
    { L"Devo C Guard Cancel / Child Transformation", 0x365880, 0x365900 },
    { L"Ebony Devil Stand Off C", 0x365900, 0x365980, indexJojos51Devo, 0x02 },
    { L"Ebony Stand On Transition C", 0x365800, 0x365880, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail C (1/3)", 0x365b00, 0x365b80, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail C (2/3)", 0x365b80, 0x365c00, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail C (3/3)", 0x365c00, 0x365c80, indexJojos51Devo, 0x02 },
    { L"Devo Intro Stuff C", 0x365e00, 0x365e80, indexJojos51Devo, 0x01 },
    { L"Devo Vs / Super C", 0x41b400, 0x41b480, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger C", 0x41b480, 0x41b500, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning C (1/2)", 0x41b500, 0x41b580, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Devo Select / Winning C (2/2)", 0x41b580, 0x41b600, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Devo & Ebony Devil Burning C (1/2)", 0x365280, 0x365300, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning C (2/2)", 0x365300, 0x365380, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap C (1/2)", 0x365580, 0x365600, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap C (2/2)", 0x365600, 0x365680, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_S[] =
{
    { L"Devo & Ebony Devil S", 0x379700, 0x379780, indexJojos51Devo },
    { L"Devo S Guard Cancel / Child Transformation", 0x379d80, 0x379e00 },
    { L"Ebony Devil Stand Off S", 0x379e00, 0x379e80, indexJojos51Devo, 0x02 },
    { L"Ebony Stand On Transition S", 0x379d00, 0x379d80, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail S (1/3)", 0x37a000, 0x37a080, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail S (2/3)", 0x37a080, 0x37a100, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail S (3/3)", 0x37a100, 0x37a180, indexJojos51Devo, 0x02 },
    { L"Devo Intro Stuff S", 0x37a300, 0x37a380, indexJojos51Devo, 0x01 },
    { L"Devo Vs / Super S", 0x420200, 0x420280, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger S", 0x420280, 0x420300, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning S (1/2)", 0x420300, 0x420380, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Devo Select / Winning S (2/2)", 0x420380, 0x420400, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Devo & Ebony Devil Burning S (1/2)", 0x379780, 0x379800, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning S (2/2)", 0x379800, 0x379880, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap S (1/2)", 0x379a80, 0x379b00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap S (2/2)", 0x379b00, 0x379b80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start[] =
{
    { L"Devo & Ebony Devil Start", 0x38dc00, 0x38dc80, indexJojos51Devo },
    { L"Devo Start Guard Cancel / Child Transformation", 0x38e280, 0x38e300 },
    { L"Ebony Devil Stand Off Start", 0x38e300, 0x38e380, indexJojos51Devo, 0x02 },
    { L"Ebony Stand On Transition Start", 0x38e200, 0x38e280, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail Start (1/3)", 0x38e500, 0x38e580, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail Start (2/3)", 0x38e580, 0x38e600, indexJojos51Devo, 0x02 },
    { L"Ebony Super Trail Start (3/3)", 0x38e600, 0x38e680, indexJojos51Devo, 0x02 },
    { L"Devo Intro Stuff Start", 0x38e800, 0x38e880, indexJojos51Devo, 0x01 },
    { L"Devo Vs / Super Start", 0x425000, 0x425080, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger Start", 0x425080, 0x425100, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning Start (1/2)", 0x425100, 0x425180, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Devo Select / Winning Start (2/2)", 0x425180, 0x425200, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Devo & Ebony Devil Burning Start (1/2)", 0x38dc80, 0x38dd00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning Start (2/2)", 0x38dd00, 0x38dd80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap Start (1/2)", 0x38df80, 0x38e000, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap Start (2/2)", 0x38e000, 0x38e080, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_A[] =
{
    { L"Midler & High Priestess A", 0x33e100, 0x33e180, indexJojos51Midler },
    { L"Midler A Guard Cancel / Child Transformation", 0x33e780, 0x33e800 },
    { L"Midler's Super Cars A (1/4)", 0x33e980, 0x33ea00, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars A (2/4)", 0x33ea00, 0x33ea80, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars A (3/4)", 0x33ea80, 0x33eb00, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars A (4/4)", 0x33eb00, 0x33eb80, indexJojos51Midler, 0x01 },
    { L"Midler 236s A", 0x33E880, 0x33E900, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws A", 0x33eb80, 0x33ec00, indexJojos51Midler, 0x02 },
    { L"Midler Vs / Super A", 0x411e00, 0x411e80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger A", 0x411e80, 0x411f00, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning A (1/2)", 0x411f00, 0x411f80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairNext },
    { L"Midler Select / Winning A (2/2)", 0x411f80, 0x412000, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Midler & Burning A (1/2)", 0x33e180, 0x33e200, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning A (2/2)", 0x33e200, 0x33e280, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap A (1/2)", 0x33e480, 0x33e500, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap A (2/2)", 0x33e500, 0x33e580, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_B[] =
{
    { L"Midler & High Priestess B", 0x352600, 0x352680, indexJojos51Midler },
    { L"Midler B Guard Cancel / Child Transformation", 0x352c80, 0x352d00 },
    { L"Midler's Super Cars B (1/4)", 0x352e80, 0x352f00, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars B (2/4)", 0x352f00, 0x352f80, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars B (3/4)", 0x352f80, 0x353000, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars B (4/4)", 0x353000, 0x353080, indexJojos51Midler, 0x01 },
    { L"Midler 236s B", 0x352D80, 0x352E00, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws B", 0x353080, 0x353100, indexJojos51Midler, 0x02 },
    { L"Midler Vs / Super B", 0x416c00, 0x416c80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger B", 0x416c80, 0x416d00, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning B (1/2)", 0x416d00, 0x416d80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairNext },
    { L"Midler Select / Winning B (2/2)", 0x416d80, 0x416e00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Midler & Burning B (1/2)", 0x352680, 0x352700, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning B (2/2)", 0x352700, 0x352780, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap B (1/2)", 0x352980, 0x352a00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap B (2/2)", 0x352a00, 0x352a80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_C[] =
{
    { L"Midler & High Priestess C", 0x366b00, 0x366b80, indexJojos51Midler },
    { L"Midler C Guard Cancel / Child Transformation", 0x367180, 0x367200 },
    { L"Midler's Super Cars C (1/4)", 0x367380, 0x367400, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars C (2/4)", 0x367400, 0x367480, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars C (3/4)", 0x367480, 0x367500, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars C (4/4)", 0x367500, 0x367580, indexJojos51Midler, 0x01 },
    { L"Midler 236s C", 0x367280, 0x367300, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws C", 0x367580, 0x367600, indexJojos51Midler, 0x02 },
    { L"Midler Vs / Super C", 0x41ba00, 0x41ba80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger C", 0x41ba80, 0x41bb00, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning C (1/2)", 0x41bb00, 0x41bb80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairNext },
    { L"Midler Select / Winning C (2/2)", 0x41bb80, 0x41bc00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Midler & Burning C (1/2)", 0x366b80, 0x366c00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning C (2/2)", 0x366c00, 0x366c80, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap C (1/2)", 0x366e80, 0x366f00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap C (2/2)", 0x366f00, 0x366f80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_S[] =
{
    { L"Midler & High Priestess S", 0x37b000, 0x37b080, indexJojos51Midler },
    { L"Midler S Guard Cancel / Child Transformation", 0x37b680, 0x37b700 },
    { L"Midler's Super Cars S (1/4)", 0x37b880, 0x37b900, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars S (2/4)", 0x37b900, 0x37b980, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars S (3/4)", 0x37b980, 0x37ba00, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars S (4/4)", 0x37ba00, 0x37ba80, indexJojos51Midler, 0x01 },
    { L"Midler 236s S", 0x37B780, 0x37B800, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws S", 0x37ba80, 0x37bb00, indexJojos51Midler, 0x02 },
    { L"Midler Vs / Super S", 0x420800, 0x420880, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger S", 0x420880, 0x420900, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning S (1/2)", 0x420900, 0x420980, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairNext },
    { L"Midler Select / Winning S (2/2)", 0x420980, 0x420a00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Midler & Burning S (1/2)", 0x37b080, 0x37b100, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning S (2/2)", 0x37b100, 0x37b180, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap S (1/2)", 0x37b380, 0x37b400, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap S (2/2)", 0x37b400, 0x37b480, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_Start[] =
{
    { L"Midler & High Priestess Start", 0x38f500, 0x38f580, indexJojos51Midler },
    { L"Midler Start Guard Cancel / Child Transformation", 0x38fb80, 0x38fc00 },
    { L"Midler's Super Cars Start (1/4)", 0x38fd80, 0x38fe00, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars Start (2/4)", 0x38fe00, 0x38fe80, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars Start (3/4)", 0x38fe80, 0x38ff00, indexJojos51Midler, 0x01 },
    { L"Midler's Super Cars Start (4/4)", 0x38ff00, 0x38ff80, indexJojos51Midler, 0x01 },
    { L"Midler 236s Start", 0x38FC80, 0x38FD00, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws Start", 0x38ff80, 0x390000, indexJojos51Midler, 0x02 },
    { L"Midler Vs / Super Start", 0x425600, 0x425680, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger Start", 0x425680, 0x425700, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning Start (1/2)", 0x425700, 0x425780, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairNext },
    { L"Midler Select / Winning Start (2/2)", 0x425780, 0x425800, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Midler & Burning Start (1/2)", 0x38f580, 0x38f600, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning Start (2/2)", 0x38f600, 0x38f680, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap Start (1/2)", 0x38f880, 0x38f900, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap Start (2/2)", 0x38f900, 0x38f980, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_A[] =
{
    { L"DIO & The World A", 0x33ed80, 0x33ee00, indexJojos51Dio },
    { L"DIO A Guard Cancel / Child Transformation", 0x33f400, 0x33f480 },
    { L"DIO Intro Stuff A", 0x33f700, 0x33f780, indexJojos51Dio, 0x01 },
    { L"The World's \"Bloody Summoning\" A", 0x33f800, 0x33f880, indexJojos51Dio, 0x02 },
    { L"DIO Tele Initial Flash A", 0x33f500, 0x33f580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport A", 0x33f680, 0x33f700, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku A", 0x33f780, 0x33f7c0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super A", 0x412100, 0x412180, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger A", 0x412180, 0x412200, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning A (1/2)", 0x412200, 0x412280, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairNext },
    { L"DIO Select / Winning A (2/2)", 0x412280, 0x412300, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"DIO & The World Burning A (1/2)", 0x33ee00, 0x33ee80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning A (2/2)", 0x33ee80, 0x33ef00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap A (1/2)", 0x33f100, 0x33f180, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap A (2/2)", 0x33f180, 0x33f200, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_B[] =
{
    { L"DIO & The World B", 0x353280, 0x353300, indexJojos51Dio },
    { L"DIO B Guard Cancel / Child Transformation", 0x353900, 0x353980 },
    { L"DIO Intro Stuff B", 0x353c00, 0x353c80, indexJojos51Dio, 0x01 },
    { L"The World's \"Bloody Summoning\" B", 0x353d00, 0x353d80, indexJojos51Dio, 0x02 },
    { L"DIO Tele Initial Flash B", 0x353a00, 0x353a80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport B", 0x353b80, 0x353c00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku B", 0x353c80, 0x353cc0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super B", 0x416f00, 0x416f80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger B", 0x416f80, 0x417000, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning B (1/2)", 0x417000, 0x417080, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairNext },
    { L"DIO Select / Winning B (2/2)", 0x417080, 0x417100, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"DIO & The World Burning B (1/2)", 0x353300, 0x353380, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning B (2/2)", 0x353380, 0x353400, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap B (1/2)", 0x353600, 0x353680, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap B (2/2)", 0x353680, 0x353700, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_C[] =
{
    { L"DIO & The World C", 0x367780, 0x367800, indexJojos51Dio },
    { L"DIO C Guard Cancel / Child Transformation", 0x367e00, 0x367e80 },
    { L"DIO Intro Stuff C", 0x368100, 0x368180, indexJojos51Dio, 0x01 },
    { L"The World's \"Bloody Summoning\" C", 0x368200, 0x368280, indexJojos51Dio, 0x02 },
    { L"DIO Tele Initial Flash C", 0x367f00, 0x367f80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport C", 0x368080, 0x368100, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku C", 0x368180, 0x3681c0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super C", 0x41bd00, 0x41bd80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger C", 0x41bd80, 0x41be00, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning C (1/2)", 0x41be00, 0x41be80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairNext },
    { L"DIO Select / Winning C (2/2)", 0x41be80, 0x41bf00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"DIO & The World Burning C (1/2)", 0x367800, 0x367880, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning C (2/2)", 0x367880, 0x367900, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap C (1/2)", 0x367b00, 0x367b80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap C (2/2)", 0x367b80, 0x367c00, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_S[] =
{
    { L"DIO & The World S", 0x37bc80, 0x37bd00, indexJojos51Dio },
    { L"DIO S Guard Cancel / Child Transformation", 0x37c300, 0x37c380 },
    { L"DIO Intro Stuff S", 0x37c600, 0x37c680, indexJojos51Dio, 0x01 },
    { L"The World's \"Bloody Summoning\" S", 0x37c700, 0x37c780, indexJojos51Dio, 0x02 },
    { L"DIO Tele Initial Flash S", 0x37c400, 0x37c480, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport S", 0x37c580, 0x37c600, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku S", 0x37c680, 0x37c6c0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super S", 0x420b00, 0x420b80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger S", 0x420b80, 0x420c00, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning S (1/2)", 0x420c00, 0x420c80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairNext },
    { L"DIO Select / Winning S (2/2)", 0x420c80, 0x420d00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"DIO & The World Burning S (1/2)", 0x37bd00, 0x37bd80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning S (2/2)", 0x37bd80, 0x37be00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap S (1/2)", 0x37c000, 0x37c080, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap S (2/2)", 0x37c080, 0x37c100, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_Start[] =
{
    { L"DIO & The World Start", 0x390180, 0x390200, indexJojos51Dio },
    { L"DIO Start Guard Cancel / Child Transformation", 0x390800, 0x390880 },
    { L"DIO Intro Stuff Start", 0x390b00, 0x390b80, indexJojos51Dio, 0x01 },
    { L"The World's \"Bloody Summoning\" Start", 0x390c00, 0x390c80, indexJojos51Dio, 0x02 },
    { L"DIO Tele Initial Flash Start", 0x390900, 0x390980, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport Start", 0x390a80, 0x390b00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku Start", 0x390b80, 0x390bc0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super Start", 0x425900, 0x425980, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger Start", 0x425980, 0x425a00, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning Start (1/2)", 0x425a00, 0x425a80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairNext },
    { L"DIO Select / Winning Start (2/2)", 0x425a80, 0x425b00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"DIO & The World Burning Start (1/2)", 0x390200, 0x390280, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning Start (2/2)", 0x390280, 0x390300, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap Start (1/2)", 0x390500, 0x390580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap Start (2/2)", 0x390580, 0x390600, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_A[] =
{
    { L"Shadow DIO A", 0x341300, 0x341380, indexJojos51SDio },
    { L"SDIO A Guard Cancel / Child Transformation", 0x341980, 0x341a00 },
    { L"623aa trail A", 0x341b80, 0x341c00, indexJojos51SDio, 0x01 },
    { L"5s trail A", 0x341ac0, 0x341ae0, indexJojos51SDio, 0x02 },
    { L"41236s trail A", 0x341ec0, 0x341ee0, indexJojos51SDio, 2},
    { L"236aa trail A", 0x341b40, 0x341b60, indexJojos51SDio, 0x02 },
    { L"Wang Chan A", 0x341d00, 0x341d40, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super A", 0x412a00, 0x412a80, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger A", 0x412a80, 0x412b00, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning A", 0x412b00, 0x412b80, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning A (1/2)", 0x341380, 0x341400, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning A (2/2)", 0x341400, 0x341480, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap A (1/2)", 0x341680, 0x341700, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap A (2/2)", 0x341700, 0x341780, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_B[] =
{
    { L"Shadow DIO B", 0x355800, 0x355880, indexJojos51SDio },
    { L"SDIO B Guard Cancel / Child Transformation", 0x355e80, 0x355f00 },
    { L"623aa trail B", 0x356080, 0x356100, indexJojos51SDio, 0x01 },
    { L"5s trail B", 0x355fc0, 0x356000, indexJojos51SDio, 0x02 },
    { L"41236s trail B", 0x3563c0, 0x356400, indexJojos51SDio, 0x02 },
    { L"236aa trail B", 0x356040, 0x356060, indexJojos51SDio, 0x02 },
    { L"Wang Chan B", 0x356200, 0x356240, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super B", 0x417800, 0x417880, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger B", 0x417880, 0x417900, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning B", 0x417900, 0x417980, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning B (1/2)", 0x355880, 0x355900, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning B (2/2)", 0x355900, 0x355980, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap B (1/2)", 0x355b80, 0x355c00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap B (2/2)", 0x355c00, 0x355c80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_C[] =
{
    { L"Shadow DIO C", 0x369d00, 0x369d80, indexJojos51SDio },
    { L"SDIO C Guard Cancel / Child Transformation", 0x36a380, 0x36a400 },
    { L"623aa trail C", 0x36a580, 0x36a600, indexJojos51SDio, 0x01 },
    { L"5s trail C", 0x36a4c0, 0x36a500, indexJojos51SDio, 0x02 },
    { L"41236s trail C", 0x36a8c0, 0x36a900, indexJojos51SDio, 0x02 },
    { L"236aa trail C", 0x36a540, 0x36a560, indexJojos51SDio, 0x02 },
    { L"Wang Chan C", 0x36a700, 0x36a740, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super C", 0x41c600, 0x41c680, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger C", 0x41c680, 0x41c700, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning Screen C", 0x41c700, 0x41c780, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning C (1/2)", 0x369d80, 0x369e00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning C (2/2)", 0x369e00, 0x369e80, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap C (1/2)", 0x36a080, 0x36a100, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap C (2/2)", 0x36a100, 0x36a180, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_S[] =
{
    { L"Shadow DIO S", 0x37e200, 0x37e280, indexJojos51SDio },
    { L"SDIO S Guard Cancel / Child Transformation", 0x37e880, 0x37e900 },
    { L"623aa trail S", 0x37ea80, 0x37eb00, indexJojos51SDio, 0x01 },
    { L"5s trail S", 0x37e9c0, 0x37ea00, indexJojos51SDio, 0x02 },
    { L"41236s trail S",  0x37edc0, 0x37ee00, indexJojos51SDio, 0x02 },
    { L"236aa trail S", 0x37ea40, 0x37ea60, indexJojos51SDio, 0x02 },
    { L"Wang Chan S", 0x37ec00, 0x37ec40, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super S", 0x421400, 0x421480, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger S", 0x421480, 0x421500, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning Screen S", 0x421500, 0x421580, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning S (1/2)", 0x37e280, 0x37e300, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning S (2/2)", 0x37e300, 0x37e380, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap S (1/2)", 0x37e580, 0x37e600, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap S (2/2)", 0x37e600, 0x37e680, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_Start[] =
{
    { L"Shadow DIO Start", 0x392700, 0x392780, indexJojos51SDio },
    { L"SDIO Start Guard Cancel / Child Transformation", 0x392d80, 0x392e00 },
    { L"623aa trail Start", 0x392f80, 0x393000, indexJojos51SDio, 0x01 },
    { L"5s trail Start", 0x392ec0, 0x392f00, indexJojos51SDio, 0x02 },
    { L"41236s trail Start",  0x3932c0, 0x393300, indexJojos51SDio, 0x02 },
    { L"236aa trail Start", 0x392f40, 0x392f60, indexJojos51SDio, 0x02 },
    { L"Wang Chan Start", 0x393100, 0x393140, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super Start", 0x426200, 0x426280, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger Start", 0x426280, 0x426300, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning Screen Start", 0x426300, 0x426380, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning Start (1/2)", 0x392780, 0x392800, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning Start (2/2)", 0x392800, 0x392880, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap Start (1/2)", 0x392a80, 0x392b00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap Start (2/2)", 0x392b00, 0x392b80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_A[] =
{
    { L"Young Joseph A", 0x341f80, 0x342000, indexJojos51YSeph },
    { L"Young Joseph A Guard Cancel / Child Transformation", 0x342600, 0x342680 },
    { L"Young Joseph Vs / Super A", 0x412d00, 0x412d80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger A", 0x412d80, 0x412e00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning Screen A", 0x412e00, 0x412e80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash A", 0x342800, 0x342880, indexJojos51YSeph, 0x01 },
    { L"Young Joseph Burning A (1/2)", 0x342000, 0x342080, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning A (2/2)", 0x342080, 0x342100, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap A (1/2)", 0x342300, 0x342380, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap A (2/2)", 0x342380, 0x342400, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_B[] =
{
    { L"Young Joseph B", 0x356480, 0x356500, indexJojos51YSeph },
    { L"Young Joseph B Guard Cancel / Child Transformation", 0x356b00, 0x356b80 },
    { L"Young Joseph Vs / Super B", 0x417b00, 0x417b80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger B", 0x417b80, 0x417c00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning B", 0x417c00, 0x417c80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash B", 0x356D00, 0x356D80, indexJojos51YSeph, 0x01 },
    { L"Young Joseph Burning B (1/2)", 0x356500, 0x356580, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning B (2/2)", 0x356580, 0x356600, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap B (1/2)", 0x356800, 0x356880, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap B (2/2)", 0x356880, 0x356900, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_C[] =
{
    { L"Young Joseph C", 0x36a980, 0x36aa00, indexJojos51YSeph },
    { L"Young Joseph C Guard Cancel / Child Transformation", 0x36b000, 0x36b080 },
    { L"Young Joseph Vs / Super C", 0x41c900, 0x41c980, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger C", 0x41c980, 0x41ca00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning C", 0x41ca00, 0x41ca80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash C", 0x36B200, 0x36B280, indexJojos51YSeph, 0x01 },
    { L"Young Joseph Burning C (1/2)", 0x36aa00, 0x36aa80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning C (2/2)", 0x36aa80, 0x36ab00, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap C (1/2)", 0x36ad00, 0x36ad80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap C (2/2)", 0x36ad80, 0x36ae00, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_S[] =
{
    { L"Young Joseph S", 0x37ee80, 0x37ef00, indexJojos51YSeph },
    { L"Young Joseph S Guard Cancel / Child Transformation", 0x37f500, 0x37f580 },
    { L"Young Joseph Vs / Super S", 0x421700, 0x421780, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger S", 0x421780, 0x421800, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning Screen S", 0x421800, 0x421880, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash S", 0x37F700, 0x37F780, indexJojos51YSeph, 0x01 },
    { L"Young Joseph Burning S (1/2)", 0x37ef00, 0x37ef80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning S (2/2)", 0x37ef80, 0x37f000, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap S (1/2)", 0x37f200, 0x37f280, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap S (2/2)", 0x37f280, 0x37f300, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_Start[] =
{
    { L"Young Joseph Start", 0x393380, 0x393400, indexJojos51YSeph },
    { L"Young Joseph Start Guard Cancel / Child Transformation", 0x393a00, 0x393a80 },
    { L"Young Joseph Vs / Super Start", 0x426500, 0x426580, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger Start", 0x426580, 0x426600, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning Screen Start", 0x426600, 0x426680, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash Start", 0x393C00, 0x393C80, indexJojos51YSeph, 0x01 },
    { L"Young Joseph Burning Start (1/2)", 0x393400, 0x393480, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning Start (2/2)", 0x393480, 0x393500, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap Start (1/2)", 0x393700, 0x393780, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap Start (2/2)", 0x393780, 0x393800, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_A[] =
{
    { L"Hol Horse A", 0x342c00, 0x342c80, indexJojos51Hol, 0x00 },
    { L"Hol Horse A Guard Cancel / Child Transformation", 0x343280, 0x343300 },
    { L"Hol Horse Super Bullets A", 0x343540, 0x343560 },
    { L"Hol Horse 421 Super 1 A", 0x3435C0, 0x3435E0 },
    { L"Hol Horse 421 Super 2 A", 0x343640, 0x343660 },
    { L"Hol's Intro/Winpose Stuff & Boingo A", 0x343480, 0x343500, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super A", 0x413000, 0x413080, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger A", 0x413080, 0x413100, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning A", 0x413100, 0x413180, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning A (1/2)", 0x342c80, 0x342d00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning A (2/2)", 0x342d00, 0x342d80, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap A (1/2)", 0x342f80, 0x343000, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap A (2/2)", 0x343000, 0x343080, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_B[] =
{
    { L"Hol Horse B", 0x357100, 0x357180, indexJojos51Hol, 0x00 },
    { L"Hol Horse B Guard Cancel / Child Transformation", 0x357780, 0x357800 },
    { L"Hol Horse Super Bullets B", 0x357A40, 0x357A60 },
    { L"Hol Horse 421 Super 1 B", 0x357AC0, 0x357AE0 },
    { L"Hol Horse 421 Super 2 B", 0x357B40, 0x357B60 },
    { L"Hol's Intro/Winpose Stuff & Boingo B", 0x357980, 0x357a00, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super B", 0x417e00, 0x417e80, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger B", 0x417e80, 0x417f00, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning B", 0x417f00, 0x417f80, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning B (1/2)", 0x357180, 0x357200, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning B (2/2)", 0x357200, 0x357280, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap B (1/2)", 0x357480, 0x357500, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap B (2/2)", 0x357500, 0x357580, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_C[] =
{
    { L"Hol Horse C", 0x36b600, 0x36b680, indexJojos51Hol, 0x00 },
    { L"Hol Horse C Guard Cancel / Child Transformation", 0x36bc80, 0x36bd00 },
    { L"Hol Horse Super Bullets C", 0x36BF40, 0x36BF60 },
    { L"Hol Horse 421 Super 1 C", 0x36BFC0, 0x36BFE0 },
    { L"Hol Horse 421 Super 2 C", 0x36C040, 0x36C060 },
    { L"Hol's Intro/Winpose Stuff & Boingo C", 0x36be80, 0x36bf00, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super C", 0x41cc00, 0x41cc80, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger C", 0x41cc80, 0x41cd00, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning C", 0x41cd00, 0x41cd80, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning C (1/2)", 0x36b680, 0x36b700, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning C (2/2)", 0x36b700, 0x36b780, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap C (1/2)", 0x36b980, 0x36ba00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap C (2/2)", 0x36ba00, 0x36ba80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_S[] =
{
    { L"Hol Horse S", 0x37fb00, 0x37fb80, indexJojos51Hol, 0x00 },
    { L"Hol Horse S Guard Cancel / Child Transformation", 0x380180, 0x380200 },
    { L"Hol Horse Super Bullets S", 0x380440, 0x380460 },
    { L"Hol Horse 421 Super 1 S", 0x3804C0, 0x3804E0 },
    { L"Hol Horse 421 Super 2 S", 0x380540, 0x380560 },
    { L"Hol's Intro/Winpose Stuff & Boingo S", 0x380380, 0x380400, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super S", 0x421a00, 0x421a80, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger S", 0x421a80, 0x421b00, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning S", 0x421b00, 0x421b80, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning S (1/2)", 0x37fb80, 0x37fc00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning S (2/2)", 0x37fc00, 0x37fc80, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap S (1/2)", 0x37fe80, 0x37ff00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap S (2/2)", 0x37ff00, 0x37ff80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_Start[] =
{
    { L"Hol Horse Start", 0x394000, 0x394080, indexJojos51Hol, 0x00 },
    { L"Hol Horse Start Guard Cancel / Child Transformation", 0x394680, 0x394700 },
    { L"Hol Horse Super Bullets Start", 0x394940, 0x394960 },
    { L"Hol Horse 421 Super 1 Start", 0x3949C0, 0x3949E0 },
    { L"Hol Horse 421 Super 2 Start", 0x394A40, 0x394A60 },
    { L"Hol's Intro/Winpose Stuff & Boingo Start", 0x394880, 0x394900, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super Start", 0x426800, 0x426880, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger Start", 0x426880, 0x426900, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning Screen Start", 0x426900, 0x426980, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning Start (1/2)", 0x394080, 0x394100, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning Start (2/2)", 0x394100, 0x394180, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap Start (1/2)", 0x394380, 0x394400, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap Start (2/2)", 0x394400, 0x394480, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_A[] =
{
    { L"Vanilla Ice & Cream A", 0x343880, 0x343900, indexJojos51VIce },
    { L"Vanilla Ice A Guard Cancel / Child Transformation", 0x343f00, 0x343f80 },
    { L"Vanilla Ice Vs / Super A", 0x413300, 0x413380, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger A", 0x413380, 0x413400, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning A (1/2)", 0x413400, 0x413480, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairNext },
    { L"Vanilla Ice Select / Winning A (2/2)", 0x413480, 0x413500, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Vanilla Ice Burning A (1/2)", 0x343900, 0x343980, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning A (2/2)", 0x343980, 0x343a00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech A (1/2)", 0x343c00, 0x343c80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech A (2/2)", 0x343c80, 0x343d00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_B[] =
{
    { L"Vanilla Ice & Cream B", 0x357d80, 0x357e00, indexJojos51VIce },
    { L"Vanilla Ice B Guard Cancel / Child Transformation", 0x358400, 0x358480 },
    { L"Vanilla Ice Vs / Super B", 0x418100, 0x418180, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger B", 0x418180, 0x418200, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning B (1/2)", 0x418200, 0x418280, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairNext },
    { L"Vanilla Ice Select / Winning B (2/2)", 0x418280, 0x418300, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Vanilla Ice Burning B (1/2)", 0x357e00, 0x357e80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning B (2/2)", 0x357e80, 0x357f00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech B (1/2)", 0x358100, 0x358180, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech B (2/2)", 0x358180, 0x358200, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_C[] =
{
    { L"Vanilla Ice & Cream C", 0x36c280, 0x36c300, indexJojos51VIce },
    { L"Vanilla Ice C Guard Cancel / Child Transformation", 0x36c900, 0x36c980 },
    { L"Vanilla Ice Vs / Super C", 0x41cf00, 0x41cf80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger C", 0x41cf80, 0x41d000, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning C (1/2)", 0x41d000, 0x41d080, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairNext },
    { L"Vanilla Ice Select / Winning C (2/2)", 0x41d080, 0x41d100, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Vanilla Ice Burning C (1/2)", 0x36c300, 0x36c380, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning C (2/2)", 0x36c380, 0x36c400, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech C (1/2)", 0x36c600, 0x36c680, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech C (2/2)", 0x36c680, 0x36c700, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_S[] =
{
    { L"Vanilla Ice & Cream S", 0x380780, 0x380800, indexJojos51VIce },
    { L"Vanilla Ice S Guard Cancel / Child Transformation", 0x380e00, 0x380e80 },
    { L"Vanilla Ice Vs / Super S", 0x421d00, 0x421d80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger S", 0x421d80, 0x421e00, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning S (1/2)", 0x421e00, 0x421e80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairNext },
    { L"Vanilla Ice Select / Winning S (2/2)", 0x421e80, 0x421f00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Vanilla Ice Burning S (1/2)", 0x380800, 0x380880, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning S (2/2)", 0x380880, 0x380900, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech S (1/2)", 0x380b00, 0x380b80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech S (2/2)", 0x380b80, 0x380c00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_Start[] =
{
    { L"Vanilla Ice & Cream Start", 0x394c80, 0x394d00, indexJojos51VIce },
    { L"Vanilla Ice Start Guard Cancel / Child Transformation", 0x395300, 0x395380 },
    { L"Vanilla Ice Vs / Super Start", 0x426b00, 0x426b80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger Start", 0x426b80, 0x426c00, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning Start (1/2)", 0x426c00, 0x426c80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairNext },
    { L"Vanilla Ice Select / Winning Start (2/2)", 0x426c80, 0x426d00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Vanilla Ice Burning Start (1/2)", 0x394d00, 0x394d80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning Start (2/2)", 0x394d80, 0x394e00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech Start (1/2)", 0x395000, 0x395080, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech Start (2/2)", 0x395080, 0x395100, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_A[] =
{
    { L"New Kakyoin & Hierophant A", 0x344500, 0x344580, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal A (1/7)", 0x344d80, 0x344e00, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (2/7)", 0x344e00, 0x344e80, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (3/7)", 0x344e80, 0x344f00, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (4/7)", 0x344f00, 0x344f80, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (5/7)", 0x344f80, 0x345000, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (6/7)", 0x345000, 0x345080, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (7/7)", 0x345080, 0x345100, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Sparkles A", 0x345100, 0x345120, indexJojos51NewKakyo, 0x08 },
    { L"New Kakyoin A Guard Cancel / Child Transformation", 0x344b80, 0x344c00 },
    { L"Raging Demon Trail A", 0x344ca0, 0x344d20, indexJojos51NewKakyo, 0x09 },
    { L"New Kakyoin Remote Mode Afterimage A", 0x344980, 0x344A00, indexJojos51NewKakyo, 0x0a },

    { L"New Kakyoin Vs / Super A", 0x413600, 0x413680, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger A", 0x413680, 0x413700, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning A", 0x413700, 0x413780, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"New Hierophant Select / Winning A", 0x413780, 0x413800, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairPrevious },

    { L"New Kakyoin Burning A (1/2)", 0x344580, 0x344600, indexJojos51NewKakyo },
    { L"New Kakyoin Burning A (2/2)", 0x344600, 0x344680, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap A (1/2)", 0x344880, 0x344900, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap A (2/2)", 0x344900, 0x344980, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_B[] =
{
    { L"New Kakyoin & Hierophant B", 0x358a00, 0x358a80, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal B (1/7)", 0x359280, 0x359300, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (2/7)", 0x359300, 0x359380, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (3/7)", 0x359380, 0x359400, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (4/7)", 0x359400, 0x359480, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (5/7)", 0x359480, 0x359500, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (6/7)", 0x359500, 0x359580, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (7/7)", 0x359580, 0x359600, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Sparkles B", 0x359600, 0x359620, indexJojos51NewKakyo, 0x08 },
    { L"New Kakyoin B Guard Cancel / Child Transformation", 0x359080, 0x359100 },
    { L"Raging Demon Trail B", 0x3591a0, 0x359220, indexJojos51NewKakyo, 0x09 },
    { L"New Kakyoin Remote Mode Afterimage B", 0x358E80, 0x358F00, indexJojos51NewKakyo, 0x0a },

    { L"New Kakyoin Vs / Super B", 0x418400, 0x418480, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger B", 0x418480, 0x418500, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning B", 0x418500, 0x418580, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"New Hierophant Select / Winning B", 0x418580, 0x418600, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairPrevious },

    { L"New Kakyoin Burning B (1/2)", 0x358a80, 0x358b00, indexJojos51NewKakyo },
    { L"New Kakyoin Burning B (2/2)", 0x358b00, 0x358b80, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap B (1/2)", 0x358d80, 0x358e00, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap B (2/2)", 0x358e00, 0x358e80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_C[] =
{
    { L"New Kakyoin & Hierophant C", 0x36cf00, 0x36cf80, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal C (1/7)", 0x36d780, 0x36d800, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (2/7)", 0x36d800, 0x36d880, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (3/7)", 0x36d880, 0x36d900, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (4/7)", 0x36d900, 0x36d980, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (5/7)", 0x36d980, 0x36da00, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (6/7)", 0x36da00, 0x36da80, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (7/7)", 0x36da80, 0x36db00, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Sparkles C", 0x36db00, 0x36db20, indexJojos51NewKakyo, 0x08 },
    { L"New Kakyoin C Guard Cancel / Child Transformation", 0x36d580, 0x36d600 },
    { L"Raging Demon Trail C", 0x36d6a0, 0x36d720, indexJojos51NewKakyo, 0x09 },
    { L"New Kakyoin Remote Mode Afterimage C", 0x36D380,0x36D400, indexJojos51NewKakyo, 0x0a },

    { L"New Kakyoin Vs / Super C", 0x41d200, 0x41d280, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger C", 0x41d280, 0x41d300, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning C", 0x41d300, 0x41d380, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"New Hierophant Select / Winning C", 0x41d380, 0x41d400, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairPrevious },

    { L"New Kakyoin Burning C (1/2)", 0x36cf80, 0x36d000, indexJojos51NewKakyo },
    { L"New Kakyoin Burning C (2/2)", 0x36d000, 0x36d080, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap C (1/2)", 0x36d280, 0x36d300, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap C (2/2)", 0x36d300, 0x36d380, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_S[] =
{
    { L"New Kakyoin & Hierophant S", 0x381400, 0x381480, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal S (1/7)", 0x381c80, 0x381d00, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (2/7)", 0x381d00, 0x381d80, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (3/7)", 0x381d80, 0x381e00, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (4/7)", 0x381e00, 0x381e80, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (5/7)", 0x381e80, 0x381f00, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (6/7)", 0x381f00, 0x381f80, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (7/7)", 0x381f80, 0x382000, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Sparkles S", 0x382000, 0x382020, indexJojos51NewKakyo, 0x08 },
    { L"New Kakyoin S Guard Cancel / Child Transformation", 0x381a80, 0x381b00 },
    { L"Raging Demon Trail S", 0x381ba0, 0x381c20, indexJojos51NewKakyo, 0x09 },
    { L"New Kakyoin Remote Mode Afterimage S", 0x381880, 0x381900, indexJojos51NewKakyo, 0x0a },

    { L"New Kakyoin Vs / Super S", 0x422000, 0x422080, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger S", 0x422080, 0x422100, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning S", 0x422100, 0x422180, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"New Hierophant Select / Winning S", 0x422180, 0x422200, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairPrevious },

    { L"New Kakyoin Burning S (1/2)", 0x381480, 0x381500, indexJojos51NewKakyo },
    { L"New Kakyoin Burning S (2/2)", 0x381500, 0x381580, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap S (1/2)", 0x381780, 0x381800, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap S (2/2)", 0x381800, 0x381880, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_Start[] =
{
    { L"New Kakyoin & Hierophant Start", 0x395900, 0x395980, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal Start (1/7)", 0x396180, 0x396200, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal Start (2/7)", 0x396200, 0x396280, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal Start (3/7)", 0x396280, 0x396300, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal Start (4/7)", 0x396300, 0x396380, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal Start (5/7)", 0x396380, 0x396400, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal Start (6/7)", 0x396400, 0x396480, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Changing Pal Start (7/7)", 0x396480, 0x396500, indexJojos51NewKakyo, 0x01, &pairHandledInCode },
    { L"New Hierophant Sparkles Start", 0x396500, 0x396520, indexJojos51NewKakyo, 0x08 },
    { L"New Kakyoin Start Guard Cancel / Child Transformation", 0x395f80, 0x396000 },
    { L"Raging Demon Trail Start", 0x3960a0, 0x396120, indexJojos51NewKakyo, 0x09 },
    { L"New Kakyoin Remote Mode Afterimage Start", 0x395D80, 0x395E00, indexJojos51NewKakyo, 0x0a },

    { L"New Kakyoin Vs / Super Start", 0x426e00, 0x426e80, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger Start", 0x426e80, 0x426f00, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning Start", 0x426f00, 0x426f80, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"New Hierophant Select / Winning Start", 0x426f80, 0x427000, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairPrevious },

    { L"New Kakyoin Burning Start (1/2)", 0x395980, 0x395a00, indexJojos51NewKakyo },
    { L"New Kakyoin Burning Start (2/2)", 0x395a00, 0x395a80, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap Start (1/2)", 0x395c80, 0x395d00, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap Start (2/2)", 0x395d00, 0x395d80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_A[] =
{
    { L"Anubis Polnareff A", 0x345180, 0x345200, indexJojos51Anubis },
    { L"Anubis Polnareff A Guard Cancel / Child Transformation", 0x345800, 0x345880 },
    { L"Anubis Polnareff Vs / Super A", 0x413900, 0x413980, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger A", 0x413980, 0x413a00, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning A (1/2)", 0x413a00, 0x413a80, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairNext },
    { L"Anubis Polnareff Select / Winning A (2/2)", 0x413a80, 0x413b00, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Anubis Polnareff Burning A (1/2)", 0x345200, 0x345280, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning A (2/2)", 0x345280, 0x345300, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap A (1/2)", 0x345500, 0x345580, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap A (2/2)", 0x345580, 0x345600, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_B[] =
{
    { L"Anubis Polnareff B", 0x359680, 0x359700, indexJojos51Anubis },
    { L"Anubis Polnareff B Guard Cancel / Child Transformation", 0x359d00, 0x359d80 },
    { L"Anubis Polnareff Vs / Super B", 0x418700, 0x418780, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger B", 0x418780, 0x418800, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning B (1/2)", 0x418800, 0x418880, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairNext },
    { L"Anubis Polnareff Select / Winning B (2/2)", 0x418880, 0x418900, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Anubis Polnareff Burning B (1/2)", 0x359700, 0x359780, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning B (2/2)", 0x359780, 0x359800, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap B (1/2)", 0x359a00, 0x359a80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap B (2/2)", 0x359a80, 0x359b00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_C[] =
{
    { L"Anubis Polnareff C", 0x36db80, 0x36dc00, indexJojos51Anubis },
    { L"Anubis Polnareff C Guard Cancel / Child Transformation", 0x36e200, 0x36e280 },
    { L"Anubis Polnareff Vs / Super C", 0x41d500, 0x41d580, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger C", 0x41d580, 0x41d600, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning C (1/2)", 0x41d600, 0x41d680, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairNext },
    { L"Anubis Polnareff Select / Winning C (2/2)", 0x41d680, 0x41d700, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Anubis Polnareff Burning C (1/2)", 0x36dc00, 0x36dc80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning C (2/2)", 0x36dc80, 0x36dd00, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap C (1/2)", 0x36df00, 0x36df80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap C (2/2)", 0x36df80, 0x36e000, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_S[] =
{
    { L"Anubis Polnareff S", 0x382080, 0x382100, indexJojos51Anubis },
    { L"Anubis Polnareff S Guard Cancel / Child Transformation", 0x382700, 0x382780 },
    { L"Anubis Polnareff Vs / Super S", 0x422300, 0x422380, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger S", 0x422380, 0x422400, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning S (1/2)", 0x422400, 0x422480, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairNext },
    { L"Anubis Polnareff Select / Winning S (2/2)", 0x422480, 0x422500, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Anubis Polnareff Burning S (1/2)", 0x382100, 0x382180, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning S (2/2)", 0x382180, 0x382200, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap S (1/2)", 0x382400, 0x382480, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap S (2/2)", 0x382480, 0x382500, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_Start[] =
{
    { L"Anubis Polnareff Start", 0x396580, 0x396600, indexJojos51Anubis },
    { L"Anubis Polnareff Start Guard Cancel / Child Transformation", 0x396c00, 0x396c80 },
    { L"Anubis Polnareff Vs / Super Start", 0x427100, 0x427180, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger Start", 0x427180, 0x427200, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning Start (1/2)", 0x427200, 0x427280, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairNext },
    { L"Anubis Polnareff Select / Winning Start (2/2)", 0x427280, 0x427300, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Anubis Polnareff Burning Start (1/2)", 0x396600, 0x396680, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning Start (2/2)", 0x396680, 0x396700, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap Start (1/2)", 0x396900, 0x396980, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap Start (2/2)", 0x396980, 0x396a00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_A[] =
{
    { L"Petshop A", 0x345e00, 0x345e80, indexJojos51Petshop },
    { L"Petshop A Guard Cancel / Child Transformation", 0x346480, 0x346500 },
    { L"Eggshop & Wealthy Begger A", 0x346680, 0x346700, indexJojos51Petshop, 0x01 },
    { L"Petshop Vs / Super A", 0x413c00, 0x413c80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger A", 0x413c80, 0x413d00, indexJojos51Petshop, indexJojos51Character_Challenger },
    { L"Petshop Select / Winning A (1/2)", 0x413d00, 0x413d80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairNext },
    { L"Petshop Select / Winning A (2/2)", 0x413d80, 0x413e00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Petshop Burning A (1/2)", 0x345e80, 0x345f00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning A (2/2)", 0x345f00, 0x345f80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap A (1/2)", 0x346180, 0x346200, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap A (2/2)", 0x346200, 0x346280, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_B[] =
{
    { L"Petshop B", 0x35a300, 0x35a380, indexJojos51Petshop },
    { L"Petshop B Guard Cancel / Child Transformation", 0x35a980, 0x35aa00 },
    { L"Eggshop & Wealthy Begger B", 0x35AB80, 0x35AC00, indexJojos51Petshop, 0x01 },
    { L"Petshop Vs / Super B", 0x418a00, 0x418a80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger B", 0x418a80, 0x418b00, indexJojos51Petshop, indexJojos51Character_Challenger },
    { L"Petshop Select / Winning B (1/2)", 0x418b00, 0x418b80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairNext },
    { L"Petshop Select / Winning B (2/2)", 0x418b80, 0x418c00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Petshop Burning B (1/2)", 0x35a380, 0x35a400, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning B (2/2)", 0x35a400, 0x35a480, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap B  (1/2)", 0x35a680, 0x35a700, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap B  (2/2)", 0x35a700, 0x35a780, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_C[] =
{
    { L"Petshop C", 0x36e800, 0x36e880, indexJojos51Petshop },
    { L"Petshop C Guard Cancel / Child Transformation", 0x36ee80, 0x36ef00 },
    { L"Eggshop & Wealthy Begger C", 0x36F080, 0x36F100, indexJojos51Petshop, 0x01 },
    { L"Petshop Vs / Super C", 0x41d800, 0x41d880, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger C", 0x41d880, 0x41d900, indexJojos51Petshop, indexJojos51Character_Challenger },
    { L"Petshop Select / Winning C (1/2)", 0x41d900, 0x41d980, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairNext },
    { L"Petshop Select / Winning C (2/2)", 0x41d980, 0x41da00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Petshop Burning C (1/2)", 0x36e880, 0x36e900, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning C (2/2)", 0x36e900, 0x36e980, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap C (1/2)", 0x36eb80, 0x36ec00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap C (2/2)", 0x36ec00, 0x36ec80, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_S[] =
{
    { L"Petshop S", 0x382d00, 0x382d80, indexJojos51Petshop },
    { L"Petshop S Guard Cancel / Child Transformation", 0x383380, 0x383400 },
    { L"Eggshop & Wealthy Begger S", 0x383580, 0x383600, indexJojos51Petshop, 0x01 },
    { L"Petshop Vs / Super S", 0x422600, 0x422680, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger S", 0x422680, 0x422700, indexJojos51Petshop, indexJojos51Character_Challenger },
    { L"Petshop Select / Winning S (1/2)", 0x422700, 0x422780, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairNext },
    { L"Petshop Select / Winning S (2/2)", 0x422780, 0x422800, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Petshop Burning S (1/2)", 0x382d80, 0x382e00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning S (2/2)", 0x382e00, 0x382e80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap S (1/2)", 0x383080, 0x383100, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap S (2/2)", 0x383100, 0x383180, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_Start[] =
{
    { L"Petshop Start", 0x397200, 0x397280, indexJojos51Petshop },
    { L"Petshop Start Guard Cancel / Child Transformation", 0x397880, 0x397900 },
    { L"Eggshop & Wealthy Begger Start", 0x397A80, 0x397B00, indexJojos51Petshop, 0x01 },
    { L"Petshop Vs / Super Start", 0x427400, 0x427480, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger Start", 0x427480, 0x427500, indexJojos51Petshop, indexJojos51Character_Challenger },
    { L"Petshop Select / Winning Start (1/2)", 0x427500, 0x427580, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairNext },
    { L"Petshop Select / Winning Start (2/2)", 0x427580, 0x427600, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Petshop Burning Start (1/2)", 0x397280, 0x397300, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning Start (2/2)", 0x397300, 0x397380, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap Start (1/2)", 0x397580, 0x397600, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap Start (2/2)", 0x397600, 0x397680, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_A[] =
{
    { L"Mariah A", 0x347700, 0x347780, indexJojos51Mariah },
    { L"Mariah A Guard Cancel / Child Transformation", 0x347d80, 0x347e00 },
    { L"Old Woman A", 0x347f80, 0x348000, indexJojos51Mariah, 0x09 },
    { L"Mariah Winpose Stuff A (1/2)", 0x348000, 0x348080, indexJojos51Mariah, 0x0a },
    { L"Mariah Winpose Stuff A (2/2)", 0x348080, 0x348100, indexJojos51Mariah, 0x0b },
    { L"Mariah's Bastet A", 0x348100, 0x348180, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super A", 0x414200, 0x414280, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger A", 0x414280, 0x414300, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning A", 0x414300, 0x414380, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning A (1/2)", 0x347780, 0x347800, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning A (2/2)", 0x347800, 0x347880, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap A (1/2)", 0x347a80, 0x347b00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap A (2/2)", 0x347b00, 0x347b80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_B[] =
{
    { L"Mariah B", 0x35bc00, 0x35bc80, indexJojos51Mariah },
    { L"Mariah B Guard Cancel / Child Transformation", 0x35c280, 0x35c300 },
    { L"Old Woman B", 0x35c480, 0x35c500, indexJojos51Mariah, 0x09 },
    { L"Mariah Winpose Stuff B (1/2)", 0x35c500, 0x35c580, indexJojos51Mariah, 0x0a },
    { L"Mariah Winpose Stuff B (2/2)", 0x35c580, 0x35c600, indexJojos51Mariah, 0x0b },
    { L"Mariah's Bastet B", 0x35c600, 0x35c680, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super B", 0x419000, 0x419080, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger B", 0x419080, 0x419100, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning B", 0x419100, 0x419180, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning B (1/2)", 0x35bc80, 0x35bd00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning B (2/2)", 0x35bd00, 0x35bd80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap B (1/2)", 0x35bf80, 0x35c000, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap B (2/2)", 0x35c000, 0x35c080, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_C[] =
{
    { L"Mariah C", 0x370100, 0x370180, indexJojos51Mariah },
    { L"Mariah C Guard Cancel / Child Transformation", 0x370780, 0x370800 },
    { L"Old Woman C", 0x370980, 0x370a00, indexJojos51Mariah, 0x09 },
    { L"Mariah Winpose Stuff C (1/2)", 0x370a00, 0x370a80, indexJojos51Mariah, 0x0a },
    { L"Mariah Winpose Stuff C (2/2)", 0x370a80, 0x370b00, indexJojos51Mariah, 0x0b },
    { L"Mariah's Bastet C", 0x370b00, 0x370b80, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super C", 0x41de00, 0x41de80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger C", 0x41de80, 0x41df00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning C", 0x41df00, 0x41df80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning C (1/2)", 0x370180, 0x370200, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning C (2/2)", 0x370200, 0x370280, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap C (1/2)", 0x370480, 0x370500, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap C (2/2)", 0x370500, 0x370580, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_S[] =
{
    { L"Mariah S", 0x384600, 0x384680, indexJojos51Mariah },
    { L"Mariah S Guard Cancel / Child Transformation", 0x384c80, 0x384d00 },
    { L"Old Woman S", 0x384e80, 0x384f00, indexJojos51Mariah, 0x09 },
    { L"Mariah Winpose Stuff S (1/2)", 0x384f00, 0x384f80, indexJojos51Mariah, 0x0a },
    { L"Mariah Winpose Stuff S (2/2)", 0x384f80, 0x385000, indexJojos51Mariah, 0x0b },
    { L"Mariah's Bastet S", 0x385000, 0x385080, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super S", 0x422c00, 0x422c80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger S", 0x422c80, 0x422d00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning S", 0x422d00, 0x422d80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning S (1/2)", 0x384680, 0x384700, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning S (2/2)", 0x384700, 0x384780, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap S (1/2)", 0x384980, 0x384a00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap S (2/2)", 0x384a00, 0x384a80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_Start[] =
{
    { L"Mariah Start", 0x398b00, 0x398b80, indexJojos51Mariah },
    { L"Mariah Start Guard Cancel / Child Transformation", 0x399180, 0x399200 },
    { L"Old Woman Start", 0x399380, 0x399400, indexJojos51Mariah, 0x09 },
    { L"Mariah Winpose Stuff Start (1/2)", 0x399400, 0x399480, indexJojos51Mariah, 0x0a },
    { L"Mariah Winpose Stuff Start (2/2)", 0x399480, 0x399500, indexJojos51Mariah, 0x0b },
    { L"Mariah's Bastet Start", 0x399500, 0x399580, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super Start", 0x427a00, 0x427a80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger Start", 0x427a80, 0x427b00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning Start", 0x427b00, 0x427b80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning Start (1/2)", 0x398b80, 0x398c00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning Start (2/2)", 0x398c00, 0x398c80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap Start (1/2)", 0x398e80, 0x398f00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap Start (2/2)", 0x398f00, 0x398f80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_A[] =
{
    { L"Hol Horse & Boingo A", 0x348380, 0x348400, indexJojos51HolBoingo },
    { L"Hol and Boingo A Guard Cancel / Child Transformation", 0x348a00, 0x348a80 },
    { L"Child Hol Horse & Boingo A", 0x348c00, 0x348c80, indexJojos51HolBoingo, 0x01 },
    { L"Hol Horse & Boingo Super Bullets A", 0x348CC0, 0x348CE0 },
    { L"Hol Horse & Boingo Vs / Super A", 0x414500, 0x414580, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger A", 0x414580, 0x414600, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning A (1/2)", 0x414600, 0x414680, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hol Horse & Boingo Select / Winning A (2/2)", 0x414680, 0x414700, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Hol Horse & Boingo Burning A (1/2)", 0x348400, 0x348480, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning A (2/2)", 0x348480, 0x348500, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap A (1/2)", 0x348700, 0x348780, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap A (2/2)", 0x348780, 0x348800, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_B[] =
{
    { L"Hol Horse & Boingo B", 0x35c880, 0x35c900, indexJojos51HolBoingo },
    { L"Hol and Boingo B Guard Cancel / Child Transformation", 0x35cf00, 0x35cf80 },
    { L"Child Hol Horse & Boingo B", 0x35d100, 0x35d180, indexJojos51HolBoingo, 0x01 },
    { L"Hol Horse & Boingo Super Bullets B", 0x35D1C0, 0x35D1E0 },
    { L"Hol Horse & Boingo Vs / Super B", 0x419300, 0x419380, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger B", 0x419380, 0x419400, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning B (1/2)", 0x419400, 0x419480, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hol Horse & Boingo Select / Winning B (2/2)", 0x419480, 0x419500, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Hol Horse & Boingo Burning B (1/2)", 0x35c900, 0x35c980, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning B (2/2)", 0x35c980, 0x35ca00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap B (1/2)", 0x35cc00, 0x35cc80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap B (2/2)", 0x35cc80, 0x35cd00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_C[] =
{
    { L"Hol Horse & Boingo C", 0x370d80, 0x370e00, indexJojos51HolBoingo },
    { L"Hol and Boingo C Guard Cancel / Child Transformation", 0x371400, 0x371480 },
    { L"Child Hol Horse & Boingo C", 0x371600, 0x371680, indexJojos51HolBoingo, 0x01 },
    { L"Hol Horse & Boingo Super Bullets C", 0x3716C0, 0x3716E0 },
    { L"Hol Horse & Boingo Vs / Super C", 0x41e100, 0x41e180, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger C", 0x41e180, 0x41e200, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning C (1/2)", 0x41e200, 0x41e280, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hol Horse & Boingo Select / Winning C (2/2)", 0x41e280, 0x41e300, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Hol Horse & Boingo Burning C (1/2)", 0x370e00, 0x370e80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning C (2/2)", 0x370e80, 0x370f00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap C (1/2)", 0x371100, 0x371180, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap C (2/2)", 0x371180, 0x371200, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_S[] =
{
    { L"Hol Horse & Boingo S", 0x385280, 0x385300, indexJojos51HolBoingo },
    { L"Hol and Boingo S Guard Cancel / Child Transformation", 0x385900, 0x385980 },
    { L"Child Hol Horse & Boingo S", 0x385b00, 0x385b80, indexJojos51HolBoingo, 0x01 },
    { L"Hol Horse & Boingo Super Bullets S", 0x385BC0, 0x385BE0 },
    { L"Hol Horse & Boingo Vs / Super S", 0x422f00, 0x422f80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger S", 0x422f80, 0x423000, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning S (1/2)", 0x423000, 0x423080, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hol Horse & Boingo Select / Winning S (2/2)", 0x423080, 0x423100, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Hol Horse & Boingo Burning S (1/2)", 0x385300, 0x385380, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning S (2/2)", 0x385380, 0x385400, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap S (1/2)", 0x385600, 0x385680, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap S (2/2)", 0x385680, 0x385700, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start[] =
{
    { L"Hol Horse & Boingo Start", 0x399780, 0x399800, indexJojos51HolBoingo },
    { L"Hol and Boingo Start Guard Cancel / Child Transformation", 0x399e00, 0x399e80 },
    { L"Child Hol Horse & Boingo Start", 0x39a000, 0x39a080, indexJojos51HolBoingo, 0x01 },
    { L"Hol Horse & Boingo Super Bullets Start", 0x39A0C0, 0x39A0E0 },
    { L"Hol Horse & Boingo Vs / Super Start", 0x427d00, 0x427d80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger Start", 0x427d80, 0x427e00, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning Start (1/2)", 0x427e00, 0x427e80, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hol Horse & Boingo Select / Winning Start (2/2)", 0x427e80, 0x427f00, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Hol Horse & Boingo Burning Start (1/2)", 0x399800, 0x399880, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning Start (2/2)", 0x399880, 0x399900, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap Start (1/2)", 0x399b00, 0x399b80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap Start (2/2)", 0x399b80, 0x399c00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_A[] =
{
    { L"Rubber Soul A", 0x349000, 0x349080, indexJojos51RSoul },
    { L"Rubber Soul A Guard Cancel / Child Transformation", 0x349680, 0x349700 },
    { L"Rubber Child TF A", 0x349780, 0x349800, indexJojos51RSoul, 0x01 },
    { L"Rubber Soul Vs / Super A", 0x414800, 0x414880, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger A", 0x414880, 0x414900, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning A", 0x414900, 0x414980, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning A (1/2)", 0x349080, 0x349100, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning A (2/2)", 0x349100, 0x349180, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap A (1/2)", 0x349400, 0x349480, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap A (2/2)", 0x349380, 0x349400, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_B[] =
{
    { L"Rubber Soul B", 0x35d500, 0x35d580, indexJojos51RSoul },
    { L"Rubber Soul B Guard Cancel / Child Transformation", 0x35db80, 0x35dc00 },
    { L"Rubber Child TF B", 0x35dc80, 0x35dd00, indexJojos51RSoul, 0x01 },
    { L"Rubber Soul Vs / Super B", 0x419600, 0x419680, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger B", 0x419680, 0x419700, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning B", 0x419700, 0x419780, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning B (1/2)", 0x35d580, 0x35d600, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning B (2/2)", 0x35d600, 0x35d680, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap B (1/2)", 0x349400 + (0x14500 * 1), 0x349480 + (0x14500 * 1), indexJojos51RSoul, indexJojos51Character_BurnZap},
    { L"Rubber Soul Tech/Zap B (2/2)", 0x349380 + (0x14500 * 1), 0x349400 + (0x14500 * 1), indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_C[] =
{
    { L"Rubber Soul C", 0x371a00, 0x371a80, indexJojos51RSoul },
    { L"Rubber Soul C Guard Cancel / Child Transformation", 0x372080, 0x372100 },
    { L"Rubber Child TF C", 0x372180, 0x372200, indexJojos51RSoul, 0x01 },
    { L"Rubber Soul Vs / Super C", 0x41e400, 0x41e480, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger C", 0x41e480, 0x41e500, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning C", 0x41e500, 0x41e580, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning C (1/2)", 0x371a80, 0x371b00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning C (2/2)", 0x371b00, 0x371b80, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap C (1/2)", 0x349400 + (0x14500 * 2), 0x349480 + (0x14500 * 2), indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap C (2/2)", 0x349380 + (0x14500 * 2), 0x349400 + (0x14500 * 2), indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_S[] =
{
    { L"Rubber Soul S", 0x385f00, 0x385f80, indexJojos51RSoul },
    { L"Rubber Soul S Guard Cancel / Child Transformation", 0x386580, 0x386600 },
    { L"Rubber Child TF S", 0x386680, 0x386700, indexJojos51RSoul, 0x01 },
    { L"Rubber Soul Vs / Super S", 0x423200, 0x423280, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger S", 0x423280, 0x423300, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning S", 0x423300, 0x423380, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning S (1/2)", 0x385f80, 0x386000, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning S (2/2)", 0x386000, 0x386080, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap S (1/2)", 0x349400 + (0x14500 * 3), 0x349480 + (0x14500 * 3), indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap S (2/2)", 0x349380 + (0x14500 * 3), 0x349400 + (0x14500 * 3), indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_Start[] =
{
    { L"Rubber Soul Start", 0x39a400, 0x39a480, indexJojos51RSoul },
    { L"Rubber Soul Start Guard Cancel / Child Transformation", 0x39aa80, 0x39ab00 },
    { L"Rubber Child TF Start", 0x39ab80, 0x39ac00, indexJojos51RSoul, 0x01 },
    { L"Rubber Soul Vs / Super Start", 0x428000, 0x428080, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger Start", 0x428080, 0x428100, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning Start", 0x428100, 0x428180, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning Start (1/2)", 0x39a480, 0x39a500, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning Start (2/2)", 0x39a500, 0x39a580, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap Start (1/2)", 0x349400 + (0x14500 * 4), 0x349480 + (0x14500 * 4), indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap Start (2/2)", 0x349380 + (0x14500 * 4), 0x349400 + (0x14500 * 4), indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_A[] =
{
    { L"Khan A", 0x349c80, 0x349d00, indexJojos51Khan },
    { L"Khan A Guard Cancel / Child Transformation", 0x34a300, 0x34a380 },
    { L"Khan's Intro Anubis A", 0x34a600, 0x34a620, indexJojos51Khan, 0x01 },
    { L"Khan's Counter Anubis A", 0x34a780, 0x34a7a0, indexJojos51Khan, 0x02 },
    { L"Khan's Special Slash A", 0x34a700, 0x34a720, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap A (1/2)", 0x34a000, 0x34a080, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap A (2/2)", 0x34a080, 0x34a100, indexJojos51Khan, 6 },
    { L"Khan Vs/Super A", 0x414b00, 0x414b80, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger A", 0x414b80, 0x414c00, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning A", 0x414c00, 0x414c80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning A (1/2)", 0x349d00, 0x349d80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning A (2/2)", 0x349d80, 0x349e00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_B[] =
{
    { L"Khan B", 0x35e180, 0x35e200, indexJojos51Khan },
    { L"Khan B Guard Cancel / Child Transformation", 0x35e800, 0x35e880 },
    { L"Khan's Intro Anubis B", 0x35eb00, 0x35eb20, indexJojos51Khan, 0x01 },
    { L"Khan's Counter Anubis B", 0x35ec80, 0x35eca0, indexJojos51Khan, 0x02 },
    { L"Khan's Special Slash B", 0x35ec00, 0x35ec20, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap B (1/2)", 0x35e500, 0x35e580, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap B (2/2)", 0x35e580, 0x35e600, indexJojos51Khan, 6 },
    { L"Khan Vs/Super B", 0x419900, 0x419980, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger B", 0x419980, 0x419a00, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning B", 0x419a00, 0x419a80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning B (1/2)", 0x35e200, 0x35e280, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning B (2/2)", 0x35e280, 0x35e300, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_C[] =
{
    { L"Khan C", 0x372680, 0x372700, indexJojos51Khan },
    { L"Khan C Guard Cancel / Child Transformation", 0x372d00, 0x372d80 },
    { L"Khan's Intro Anubis C", 0x373000, 0x373020, indexJojos51Khan, 0x01 },
    { L"Khan's Counter Anubis C", 0x373180, 0x3731a0, indexJojos51Khan, 0x02 },
    { L"Khan's Special Slash C", 0x373100, 0x373120, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap C (1/2)", 0x372a00, 0x372a80, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap C (2/2)", 0x372a80, 0x372b00, indexJojos51Khan, 6 },
    { L"Khan Vs/Super C", 0x41e700, 0x41e780, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger C", 0x41e780, 0x41e800, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning C", 0x41e800, 0x41e880, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning C (1/2)", 0x372700, 0x372780, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning C (2/2)", 0x372780, 0x372800, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_S[] =
{
    { L"Khan S", 0x386b80, 0x386c00, indexJojos51Khan },
    { L"Khan S Guard Cancel / Child Transformation", 0x387200, 0x387280 },
    { L"Khan's Intro Anubis S", 0x387500, 0x387520, indexJojos51Khan, 0x01 },
    { L"Khan's Counter Anubis S", 0x387680, 0x3876a0, indexJojos51Khan, 0x02 },
    { L"Khan's Special Slash S", 0x387600, 0x387620, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap S (1/2)", 0x386f00, 0x386f80, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap S (2/2)", 0x386f80, 0x387000, indexJojos51Khan, 6 },
    { L"Khan Vs/Super S", 0x423500, 0x423580, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger S", 0x423580, 0x423600, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning S", 0x423600, 0x423680, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning S (1/2)", 0x386c00, 0x386c80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning S (2/2)", 0x386c80, 0x386d00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_Start[] =
{
    { L"Khan Start", 0x39b080, 0x39b100, indexJojos51Khan },
    { L"Khan Start Guard Cancel / Child Transformation", 0x39b700, 0x39b780 },
    { L"Khan's Intro Anubis Start", 0x39ba00, 0x39ba20, indexJojos51Khan, 0x01 },
    { L"Khan's Counter Anubis Start", 0x39bb80, 0x39bba0, indexJojos51Khan, 0x02 },
    { L"Khan's Special Slash Start", 0x39bb00, 0x39bb20, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap Start (1/2)", 0x39b400, 0x39b480, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap Start (2/2)", 0x39b480, 0x39b500, indexJojos51Khan, 6 },
    { L"Khan Vs/Super Start", 0x428300, 0x428380, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger Start", 0x428380, 0x428400, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning Start", 0x428400, 0x428480, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning Start (1/2)", 0x39b100, 0x39b180, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning Start (2/2)", 0x39b180, 0x39b200, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_A[] =
{
    { L"N'Doul & Geb A", 0x33d480, 0x33d500, indexJojos51NDoul },

    { L"N'Doul A Burning 1/2", 0x33d500, 0x33d580, indexJojos51NDoul },
    { L"N'Doul A Burning 2/2", 0x33d580, 0x33d600, indexJojos51NDoul },
    { L"N'Doul A Tech/Zap 1/2", 0x33d800, 0x33d880, indexJojos51NDoul },
    { L"N'Doul A Tech/Zap 2/2", 0x33d880, 0x33d900, indexJojos51NDoul },

    { L"N'Doul Super/VS A", 0x411b00, 0x411b80, indexJojos51NDoul, 0x03 },
    { L"N'Doul Challenger A", 0x411b80, 0x411c00, indexJojos51NDoul, 0x04 },
    { L"N'Doul Select/Winning A 1/2", 0x411c00, 0x411c80, indexJojos51NDoul, 0x05, &pairNext },
    { L"Geb Select/Winning A 2/2", 0x411c80, 0x411d00, indexJojos51NDoul, 0x06, &pairPrevious },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_B[] =
{
    { L"N'Doul & Geb B", 0x351980, 0x351a00, indexJojos51NDoul },

    // The hex at these locations is not palettes: skip these
    // { L"N'Doul B Burning 1/2", 0x33d500 + 0x14500, 0x33d580 + 0x14500 },
    // { L"N'Doul B Burning 2/2", 0x33d580 + 0x14500, 0x33d600 + 0x14500 },
    // { L"N'Doul B Tech/Zap 1/2", 0x33d800 + 0x14500, 0x33d880 + 0x14500 },
    // { L"N'Doul B Tech/Zap 2/2", 0x33d880 + 0x14500, 0x33d900 + 0x14500 },

    // { L"N'Doul Super/VS B", 0x411b00 + 0x4e00, 0x411b80 + 0x4e00, indexJojos51NDoul, 0x03 },
    // { L"N'Doul Challenger B", 0x411b80 + 0x4e00, 0x411c00 + 0x4e00, indexJojos51NDoul, 0x04 },
    // { L"N'Doul Select/Winning B 1/2", 0x411c00 + 0x4e00, 0x411c80 + 0x4e00, indexJojos51NDoul, 0x05, &pairNext },
    // { L"Geb Select/Winning B 2/2", 0x411c80 + 0x4e00, 0x411d00 + 0x4e00, indexJojos51NDoul, 0x06, &pairPrevious },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_C[] =
{
    { L"N'Doul & Geb C", 0x365e80, 0x365f00, indexJojos51NDoul },

    { L"N'Doul C Burning 1/2", 0x365f00, 0x365f80, indexJojos51NDoul },
    { L"N'Doul C Burning 2/2", 0x365f80, 0x366000, indexJojos51NDoul },
    { L"N'Doul C Tech/Zap 1/2", 0x366200, 0x366280, indexJojos51NDoul },
    { L"N'Doul C Tech/Zap 2/2", 0x366280, 0x366300, indexJojos51NDoul },

    { L"N'Doul Super/VS C", 0x41b700, 0x41b780, indexJojos51NDoul, 0x03 },
    { L"N'Doul Challenger C", 0x41b780, 0x41b800, indexJojos51NDoul, 0x04 },
    { L"N'Doul Select/Winning C 1/2", 0x41b800, 0x41b880, indexJojos51NDoul, 0x05, &pairNext },
    { L"Geb Select/Winning C 2/2", 0x41b880, 0x41b900, indexJojos51NDoul, 0x06, &pairPrevious },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_S[] =
{
    { L"N'Doul & Geb S", 0x37a380, 0x37a400, indexJojos51NDoul },

    { L"N'Doul S Burning 1/2", 0x37a400, 0x37a480, indexJojos51NDoul },
    { L"N'Doul S Burning 2/2", 0x37a480, 0x37a500, indexJojos51NDoul },
    { L"N'Doul S Tech/Zap 1/2", 0x37a700, 0x37a780, indexJojos51NDoul },
    { L"N'Doul S Tech/Zap 2/2", 0x37a780, 0x37a800, indexJojos51NDoul },

    { L"N'Doul Super/VS S", 0x420500, 0x420580, indexJojos51NDoul, 0x03 },
    { L"N'Doul Challenger S", 0x420580, 0x420600, indexJojos51NDoul, 0x04 },
    { L"N'Doul Select/Winning S 1/2", 0x420600, 0x420680, indexJojos51NDoul, 0x05, &pairNext },
    { L"Geb Select/Winning S 2/2", 0x420680, 0x420700, indexJojos51NDoul, 0x06, &pairPrevious },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_Start[] =
{
    { L"N'Doul & Geb Start", 0x38e880, 0x38e900, indexJojos51NDoul },

    { L"N'Doul Start Burning 1/2", 0x38e900, 0x38e980, indexJojos51NDoul },
    { L"N'Doul Start Burning 2/2", 0x38e980, 0x38ea00, indexJojos51NDoul },
    { L"N'Doul Start Tech/Zap 1/2", 0x38ec00, 0x38ec80, indexJojos51NDoul },
    { L"N'Doul Start Tech/Zap 2/2", 0x38ec80, 0x38ed00, indexJojos51NDoul },

    { L"N'Doul Super/VS Start", 0x425300, 0x425380, indexJojos51NDoul, 0x03 },
    { L"N'Doul Challenger Start", 0x425380, 0x425400, indexJojos51NDoul, 0x04 },
    { L"N'Doul Select/Winning Start 1/2", 0x425400, 0x425480, indexJojos51NDoul, 0x05, &pairNext },
    { L"Geb Select/Winning Start 2/2", 0x425480, 0x425500, indexJojos51NDoul, 0x06, &pairPrevious },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_A[] =
{
    { L"Boss Ice A", 0x33fa00, 0x33fa80, indexJojos51BIce },
    { L"Boss Ice A Guard Cancel / Child Transformation", 0x340080, 0x340100 },
    { L"Boss Ice A Burning 1/2", 0x33fa80, 0x33fb00, indexJojos51BIce },
    { L"Boss Ice A Burning 2/2", 0x33fb00, 0x33fb80, indexJojos51BIce },
    { L"Boss Ice A Tech/Zap 1/2", 0x33fd80, 0x33fe00, indexJojos51BIce },
    { L"Boss Ice A Tech/Zap 2/2", 0x33fe00, 0x33fe80, indexJojos51BIce },

    { L"Boss Ice Select VS/Super A", 0x412400, 0x412480 },
    { L"Boss Ice Challenger A", 0x412480, 0x412500 },
    { L"Boss Ice Select/Winning A 1/2", 0x412500, 0x412580 },
    { L"Boss Ice Select/Winning A 2/2", 0x412580, 0x412600 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_B[] =
{
    { L"Boss Ice B", 0x353f00, 0x353f80, indexJojos51BIce },
    { L"Boss Ice B Guard Cancel / Child Transformation", 0x354580, 0x354600 },
    { L"Boss Ice B Burning 1/2", 0x353f80, 0x354000, indexJojos51BIce },
    { L"Boss Ice B Burning 2/2", 0x354000, 0x354080, indexJojos51BIce },
    { L"Boss Ice B Tech/Zap 1/2", 0x354280, 0x354300, indexJojos51BIce },
    { L"Boss Ice B Tech/Zap 2/2", 0x354300, 0x354380, indexJojos51BIce },

    { L"Boss Ice Super/VS B", 0x417200, 0x417280 },
    { L"Boss Ice Challenger B", 0x417280, 0x417300 },
    { L"Boss Ice Select/Winning B 1/2", 0x417300, 0x417380 },
    { L"Boss Ice Select/Winning B 2/2", 0x417380, 0x417400 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_C[] =
{
    { L"Boss Ice C", 0x368400, 0x368480, indexJojos51BIce },
    { L"Boss Ice C Guard Cancel / Child Transformation", 0x368a80, 0x368b00 },
    { L"Boss Ice C Tech/Zap 1/2", 0x368780, 0x368800, indexJojos51BIce },
    { L"Boss Ice C Tech/Zap 2/2", 0x368800, 0x368880, indexJojos51BIce },
    { L"Boss Ice C Burning 1/2", 0x368480, 0x368500, indexJojos51BIce },
    { L"Boss Ice C Burning 2/2", 0x368500, 0x368580, indexJojos51BIce },

    { L"Boss Ice Super/VS C", 0x41c000, 0x41c080 },
    { L"Boss Ice Challenger C", 0x41c080, 0x41c100 },
    { L"Boss Ice Select/Winning C 1/2", 0x41c100, 0x41c180 },
    { L"Boss Ice Select/Winning C 2/2", 0x41c180, 0x41c200 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_S[] =
{
    { L"Boss Ice S", 0x37c900, 0x37c980, indexJojos51BIce },
    { L"Boss Ice S Guard Cancel / Child Transformation", 0x37cf80, 0x37d000 },
    { L"Boss Ice S Tech/Zap 1/2", 0x37cc80, 0x37cd00, indexJojos51BIce },
    { L"Boss Ice S Tech/Zap 2/2", 0x37cd00, 0x37cd80, indexJojos51BIce },
    { L"Boss Ice S Burning 1/2", 0x37c980, 0x37ca00, indexJojos51BIce },
    { L"Boss Ice S Burning 2/2", 0x37ca00, 0x37ca80, indexJojos51BIce },

    { L"Boss Ice Super/VS S", 0x420e00, 0x420e80 },
    { L"Boss Ice Challenger S", 0x420e80, 0x420f00 },
    { L"Boss Ice Select/Winning S 1/2", 0x420f00, 0x420f80 },
    { L"Boss Ice Select/Winning S 2/2", 0x420f80, 0x421000 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_Start[] =
{
    { L"Boss Ice Start", 0x390e00, 0x390e80, indexJojos51BIce },
    { L"Boss Ice Start Guard Cancel / Child Transformation", 0x391480, 0x391500 },
    { L"Boss Ice Start Tech/Zap 1/2", 0x391180, 0x391200, indexJojos51BIce },
    { L"Boss Ice Start Tech/Zap 2/2", 0x391200, 0x391280, indexJojos51BIce },
    { L"Boss Ice Start Burning 1/2", 0x390e80, 0x390f00, indexJojos51BIce },
    { L"Boss Ice Start Burning 2/2", 0x390f00, 0x390f80, indexJojos51BIce },

    { L"Boss Ice Super/VS Start", 0x425c00, 0x425c80 },
    { L"Boss Ice Challenger Start", 0x425c80, 0x425d00 },
    { L"Boss Ice Select/Winning Start 1/2", 0x425d00, 0x425d80 },
    { L"Boss Ice Select/Winning Start 2/2", 0x425d80, 0x425e00 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_A[] =
{
    { L"Death 13 A", 0x340680, 0x340700, indexJojos51Death13 },
    { L"Death 13 A Burning 1/2", 0x340700, 0x340780, indexJojos51Death13 },
    { L"Death 13 A Burning 2/2", 0x340780, 0x340800, indexJojos51Death13 },
    { L"Death 13 A Tech/Zap 1/2", 0x340a00, 0x340a80, indexJojos51Death13 },
    { L"Death 13 A Tech/Zap 2/2", 0x340a80, 0x340b00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_B[] =
{
    { L"Death 13 B", 0x354b80, 0x354c00, indexJojos51Death13 },
    { L"Death 13 B Burning 1/2", 0x354c00, 0x354c80, indexJojos51Death13 },
    { L"Death 13 B Burning 2/2", 0x354c80, 0x354d00, indexJojos51Death13 },
    { L"Death 13 B Tech/Zap 1/2", 0x354f00, 0x354f80, indexJojos51Death13 },
    { L"Death 13 B Tech/Zap 2/2", 0x354f80, 0x355000, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_C[] =
{
    { L"Death 13 C", 0x369080, 0x369100, indexJojos51Death13 },
    { L"Death 13 C Burning 1/2", 0x369100, 0x369180, indexJojos51Death13 },
    { L"Death 13 C Burning 2/2", 0x369180, 0x369200, indexJojos51Death13 },
    { L"Death 13 C Tech/Zap 1/2", 0x369400, 0x369480, indexJojos51Death13 },
    { L"Death 13 C Tech/Zap 2/2", 0x369480, 0x369500, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_S[] =
{
    { L"Death 13 S", 0x37d580, 0x37d600, indexJojos51Death13 },
    { L"Death 13 S Burning 1/2", 0x37d600, 0x37d680, indexJojos51Death13 },
    { L"Death 13 S Burning 2/2", 0x37d680, 0x37d700, indexJojos51Death13 },
    { L"Death 13 S Tech/Zap 1/2", 0x37d900, 0x37d980, indexJojos51Death13 },
    { L"Death 13 S Tech/Zap 2/2", 0x37d980, 0x37da00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_Start[] =
{
    { L"Death 13 Start", 0x391a80, 0x391b00, indexJojos51Death13 },
    { L"Death 13 Start Burning 1/2", 0x391b00, 0x391b80, indexJojos51Death13 },
    { L"Death 13 Start Burning 2/2", 0x391b80, 0x391c00, indexJojos51Death13 },
    { L"Death 13 Start Tech/Zap 1/2", 0x391e00, 0x391e80, indexJojos51Death13 },
    { L"Death 13 Start Tech/Zap 2/2", 0x391e80, 0x391f00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_GRAYFLY[] =
{
    { L"Gray Fly 1", 0x346A80, 0x346B00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 2", 0x35AF80, 0x35B000, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 3", 0x36F480, 0x36F500, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 4", 0x383980, 0x383A00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 5", 0x397E80, 0x397F00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 6", 0x3AC380, 0x3AC400, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 7", 0x3C0880, 0x3C0900, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 8", 0x3D4D80, 0x3D4E00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 9", 0x3E9280, 0x3E9300, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 10", 0x3FD780, 0x3FD800, indexJojos51GrayFly, 0x00 },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOTARO[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_AVDOL[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_POL[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOSEPH[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_Start) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_Shared, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_Shared) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_IGGY[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_Start) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_Shared, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_Shared) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_ALESSI[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_CHAKA[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MIDLER[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DIO[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SDIO[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_YJOSEPH[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOL[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_VICE[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIERO[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BPOL[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SHOP[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MARIAH[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_RSOUL[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_KHAN[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_NDOUL[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BICE[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEATH13[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_C) },
    { L"S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_S) },
    { L"Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_GRAYFLY[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_GRAYFLY, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_GRAYFLY) },
};

#pragma endregion Jojo_Characters

#pragma region Bonus

// Note that this is intentionally sorted: don't alphabetize
const sGame_PaletteDataset JOJOS_BONUS_MENU_PALETTES[] =
{
    { L"Mode select - Challenge & Story signs", 0x30d480, 0x30d500, indexJojos51Bonus, 0x50 },
    { L"Character Select Background", 0x310100, 0x310180, indexJojos51Bonus, 0x46 },
    { L"Selector Rings", 0x310080, 0x310100, indexJojos51Bonus, 0x53 },
    { L"Character Select Comic", 0x310000, 0x310080, indexJojos51Bonus, 0x48 },
    { L"Extra characters page arrows", 0x310500, 0x310580 },
    { L"Vs screen Background", 0x30d000, 0x30d080, indexJojos51Bonus, 0x49 },
    { L"Win screen Background", 0x310200, 0x310280, indexJojos51Bonus, 0x4a },
    { L"Oldseph Challenge Mode Faces", 0x441000, 0x441200, indexJojos51Bonus, 0x51 },
    { L"D'Arby", 0x311a00, 0x311a80, indexJojos51Bonus, 0x2C },
    { L"Darby Chips", 0x311d00, 0x311d80, indexJojos51Bonus, 0x2D },
    { L"Osiris Arms", 0x311b80, 0x311c00, indexJojos51Bonus, 0x2E },
    { L"Osiris Body", 0x311b00, 0x311b80, indexJojos51Bonus, 0x2F },
    { L"Game Over Text", 0x311a80, 0x311b00, indexJojos51Bonus, 0x30 },
};

const sGame_PaletteDataset JOJOS_BONUS_INTRO_PALETTES[] =
{
    { L"Capcom Presents (text under intro logo)", 0x30b040, 0x30b060, indexJojos51Bonus, 0x37 },
    { L"Capcom logo",            0x30b080, 0x30b0a0, indexJojos51Bonus, 0x36 },
    { L"Capcom Backgrounds",     0x30C300, 0x30C340, indexJojos51Bonus, 0x4b },
    { L"Hol Horse intro Body",   0x30c600, 0x30c680, indexJojos51Bonus, 0x3C },
    { L"Hol Horse intro Hand",   0x30c580, 0x30c600, indexJojos51Bonus, 0x3D },
    { L"Hol Horse shoot scene",  0x30C400, 0x30C480, indexJojos51Bonus, 0x3E },
    { L"Hol Horse intro background (1/2)", 0x30bb00, 0x30bd00 },
    { L"Hol Horse intro background (2/2)", 0x30bd00, 0x30be00 },
    { L"Hol Horse intro ender background (1/3)", 0x30be00, 0x30c000 },
    { L"Hol Horse intro ender background (2/3)", 0x30c000, 0x30c200 },
    { L"Hol Horse intro ender background (3/3)", 0x30c200,  0x30c300 },
    { L"Vanilla Ice intro",      0x30ba00, 0x30ba80, indexJojos51Bonus, 0x0E },
    { L"Cream intro",            0x30ba80, 0x30bb00, indexJojos51Bonus, 0x3B },
    { L"Vice intro background (1/4)", 0x30b100, 0x30b300 },
    { L"Vice intro background (2/4)", 0x30b300, 0x30b500 },
    { L"Vice intro background (3/4)", 0x30b500, 0x30b700 },
    { L"Vice intro background (4/4)", 0x30b700, 0x30b780 },
    { L"Vice Intro Ender",       0x30c380, 0x30c400, indexJojos51Bonus, 0x0F },
    { L"Intro Manga Panels (1/5)", 0x30b780, 0x30b800, indexJojos51Bonus, 0x09 },
    { L"Intro Manga Panels (2/5)", 0x30b800, 0x30b880, indexJojos51Bonus, 0x0A },
    { L"Intro Manga Panels (3/5)", 0x30b880, 0x30b900, indexJojos51Bonus, 0x0B },
    { L"Intro Manga Panels (4/5)", 0x30b900, 0x30b980, indexJojos51Bonus, 0x0C },
    { L"Intro Manga Panels (5/5)", 0x30b980, 0x30ba00, indexJojos51Bonus, 0x0D },
    { L"Title Screen DIO",       0x30c500, 0x30c580, indexJojos51Bonus, 0x3A, &pairNext5 },
    { L"Title Screen DIO Fade 1", 0x30C780, 0x30C800, indexJojos51Bonus, 0x3A, &pairNext5 },
    { L"Title Screen DIO Fade 2", 0x30C800, 0x30C880, indexJojos51Bonus, 0x3A, &pairNext5 },
    { L"Title Screen DIO Fade 3", 0x30C880, 0x30C900, indexJojos51Bonus, 0x3A, &pairNext5 },
    { L"Title Screen DIO Manga", 0x30c900, 0x30c980, indexJojos51Bonus, 0x3A, &pairNext5 },
    { L"Title Screen Jotaro",    0x30c480, 0x30c500, indexJojos51Bonus, 0x39, &pairPrevious5 },
    { L"Title Screen Jotaro Fade 1", 0x30C980, 0x30CA00, indexJojos51Bonus, 0x39, &pairPrevious5 },
    { L"Title Screen Jotaro Fade 2", 0x30CA00, 0x30CA80, indexJojos51Bonus, 0x39, &pairPrevious5 },
    { L"Title Screen Jotaro Fade 3", 0x30CA80, 0x30CB00, indexJojos51Bonus, 0x39, &pairPrevious5 },
    { L"Title Screen Jotaro Manga", 0x30cb00, 0x30cb80, indexJojos51Bonus, 0x39, &pairPrevious5 },
    { L"Title Screen Logo",      0x30c680, 0x30c780, indexJojos51Bonus, 0x4c  },
     // joined above { L"Title Screen Logo Ribbon", 0x30c700, 0x30c780, indexJojos51Bonus, 0x33 },
    { L"English Title", 0x30CB80, 0x30CC00, indexJojos51Bonus, 0x34 },
    { L"Title Screen Background", 0x30b0a0, 0x30b0b0, indexJojos51Bonus, 0x31 },
    { L"World Map",              0x313780, 0x313800, indexJojos51Bonus, 0x38 },

    { L"Ranking Mini Logo",      0x313f00, 0x313f80, indexJojos51Bonus, 0x4d },

    { L"Score Ranking Star (after beating the story)", 0x313ea0, 0x313eb0 },
    { L"Jojo Ranking God (Challenge Mode)", 0x314240, 0x314260 },
};

const sGame_PaletteDataset JOJOS_BONUS_INGAME_PALETTES[] =
{
    { L"Aja Stone", 0x335800, 0x335820, indexJojos51Bonus, 0x45 },
    { L"Extra Character Dust and Blood", 0x335860, 0x335880 },
    { L"Super Flash / Zap Effects", 0x335840, 0x335860 },
    { L"Blocksparks/OldSeph 360/Small Explosions", 0x3358a0, 0x335900, indexJojos51Bonus, 0x52 },
    { L"Hitsparks & Pushblock", 0x335820, 0x335840, indexJojos51Bonus, 0x40 },
    { L"Super Hitsparks and Burning Effect", 0x3359c0, 0x335A00, indexJojos51Bonus, 0x08 },
    { L"Tandem Background", 0x30d900, 0x30d980, indexJojos51Bonus, 0x1f },
    { L"Stand Clash Background", 0x30d100, 0x30d180, indexJojos51Bonus, 0x20 },
    { L"Stand Crash Mask Background", 0x30cec0, 0x30cf00, indexJojos51Bonus, 0x00 },
    { L"Stand Crash Mask Background 2", 0x30CF40, 0x30CF80, indexJojos51Bonus, 0x00 },
    { L"Raging Demon Background", 0x30d180, 0x30d200, indexJojos51Bonus, 0x21 },
    { L"Super KO Background", 0x30d080, 0x30d100, indexJojos51Bonus, 0x23 },
    { L"Super KO Portrait", 0x30ce80, 0x30cec0, indexJojos51Bonus, 0x06 },
    { L"Super KO Portrait Holes/Blood", 0x30CF80, 0x30CFC0, indexJojos51Bonus, 0x07 },
    { L"\"Round 1,2,3\" Text", 0x30ce00, 0x30ce60, indexJojos51Bonus, 0x22 },
    { L"\"Fight\" & \"Down\" Text", 0x30cd80, 0x30ce00, indexJojos51Bonus, 0x01 },
    { L"\"LOSE\"", 0x30cce0, 0x30cd00, indexJojos51Bonus, 0x02 },
    { L"\"KO\"", 0x30cd20, 0x30cd40, indexJojos51Bonus, 0x03 },
    { L"\"PERFECT\"", 0x30CD40, 0x30CD60, indexJojos51Bonus, 0x04 },
    { L"\"Retired\"", 0x30CC20, 0x30CC40, indexJojos51Bonus, 0x05 },
    { L"VS screen text", 0x30d400, 0x30d440, indexJojos51Bonus, 0x1b },
    { L"Win text (character)", 0x30cc40, 0x30cc60, indexJojos51Bonus, 0x1a },
    { L"Win text (WIN)", 0x30cca0, 0x30ccc0, indexJojos51Bonus, 0x19 },

    { L"Double KO", 0x30CD60, 0x30CD80, indexJojos51Bonus, 0x1c },
    { L"Draw", 0x30CC80, 0x30CCA0, indexJojos51Bonus, 0x1d },
    { L"Time Up", 0x30CCC0, 0x30CCE0, indexJojos51Bonus, 0x1e },
    { L"Here Comes A New Challenger", 0x30CD00, 0x30CD20, indexJojos51Bonus, 0x25 },
    { L"Story Mode Episodes Text", 0x30CC00, 0x30CC20, indexJojos51Bonus, 0x24 },
    { L"Stand Summon & Tandem Aura", 0x335920, 0x335940, indexJojos51Bonus, 0x3F },
    { L"S.Dio 2c Stone & Requiem Zzz", 0x335940, 0x335980, indexJojos51Bonus, 0x41 },
    { L"Base Char Dust & Floor Bounce", 0x335B40, 0x335B60 },
    // Folded into another one
    //{ L"Extra Char Dust & Floor Bounce", 0x335860, 0x335878 },
    { L"Story Mode Metal Objects", 0x335B20, 0x335B40 },
    { L"Speedwagon Pilot", 0x335880, 0x3358A0 },
    // Duped to "Various..."
    //{ L"Chaka s.236a/236aa Effects", 0x3358E0, 0x335900 },
    { L"S.Dio 623aa Floor Effect", 0x335900, 0x335920 },

    { L"S.Dio Effects/Round Start/Wallbounce/etc", 0x335980, 0x3359C0 },
    // Also a dupe
    //{ L"Various 236x Effects", 0x3358E0, 0x335900 },
};

const sGame_PaletteDataset JOJOS_A_BONUS_NODE_SUPERBACKGROUND[] =
{
    { L"Super Flash Background (Challenge Screen / Demo) (1/8)", 0x30d500, 0x30d580, indexJojos51Bonus, 0x11 },
    { L"Super Flash Background (Challenge Screen / Demo) (2/8)", 0x30d580, 0x30d600, indexJojos51Bonus, 0x12 },
    { L"Super Flash Background (Challenge Screen / Demo) (3/8)", 0x30d600, 0x30d680, indexJojos51Bonus, 0x13 },
    { L"Super Flash Background (Challenge Screen / Demo) (4/8)", 0x30d680, 0x30d700, indexJojos51Bonus, 0x14 },
    { L"Super Flash Background (Challenge Screen / Demo) (5/8)", 0x30d700, 0x30d780, indexJojos51Bonus, 0x15 },
    { L"Super Flash Background (Challenge Screen / Demo) (6/8)", 0x30d780, 0x30d800, indexJojos51Bonus, 0x16 },
    { L"Super Flash Background (Challenge Screen / Demo) (7/8)", 0x30d800, 0x30d880, indexJojos51Bonus, 0x17 },
    { L"Super Flash Background (Challenge Screen / Demo) (8/8)", 0x30d880, 0x30d900, indexJojos51Bonus, 0x18 },
};

const sGame_PaletteDataset JOJOS_BONUS_NODE_FADEBACKGROUND[] =
{
    { L"Fade Background (1/29)", 0x30f080, 0x30f100 },
    { L"Fade Background (2/29)", 0x30f100, 0x30f180 },
    { L"Fade Background (3/29)", 0x30f180, 0x30f200 },
    { L"Fade Background (4/29)", 0x30f200, 0x30f280 },
    { L"Fade Background (5/29)", 0x30f280, 0x30f300 },
    { L"Fade Background (6/29)", 0x30f300, 0x30f380 },
    { L"Fade Background (7/29)", 0x30f380, 0x30f400 },
    { L"Fade Background (8/29)", 0x30f400, 0x30f480 },
    { L"Fade Background (9/29)", 0x30f480, 0x30f500 },
    { L"Fade Background (10/29)", 0x30f500, 0x30f580 },
    { L"Fade Background (11/29)", 0x30f580, 0x30f600 },
    { L"Fade Background (12/29)", 0x30f600, 0x30f680 },
    { L"Fade Background (13/29)", 0x30f680, 0x30f700 },
    { L"Fade Background (14/29)", 0x30f700, 0x30f780 },
    { L"Fade Background (15/29)", 0x30f780, 0x30f800 },
    { L"Fade Background (16/29)", 0x30f800, 0x30f880 },
    { L"Fade Background (17/29)", 0x30f880, 0x30f900 },
    { L"Fade Background (18/29)", 0x30f900, 0x30f980 },
    { L"Fade Background (19/29)", 0x30f980, 0x30fa00 },
    { L"Fade Background (20/29)", 0x30fa00, 0x30fa80 },
    { L"Fade Background (21/29)", 0x30fa80, 0x30fb00 },
    { L"Fade Background (22/29)", 0x30fb00, 0x30fb80 },
    { L"Fade Background (23/29)", 0x30fb80, 0x30fc00 },
    { L"Fade Background (24/29)", 0x30fc00, 0x30fc80 },
    { L"Fade Background (25/29)", 0x30fc80, 0x30fd00 },
    { L"Fade Background (26/29)", 0x30fd00, 0x30fd80 },
    { L"Fade Background (27/29)", 0x30fd80, 0x30fe00 },
    { L"Fade Background (28/29)", 0x30fe00, 0x30fe80 },
    { L"Fade Background (29/29)", 0x30fe80, 0x30ff00 },
};

const sGame_PaletteDataset JOJOS_BONUS_STAGESHADOWS[] =
{
    { L"A Lockup", 0x334600, 0x334680 },
    { L"A Health Room", 0x334680, 0x334700 },
    { L"In A Airplane", 0x334700, 0x334780 },
    { L"Tigerbaum Garden", 0x334780, 0x334800 },
    { L"Hotel (Devil)", 0x334800, 0x334880 },
    { L"Remains", 0x334880, 0x334900 },
    { L"Hotel (Justice)", 0x334900, 0x334980 },
    { L"Amusement Park", 0x334980, 0x334a00 },
    { L"Small Island", 0x334a00, 0x334a80 },
    { L"Desert Noon", 0x334b00, 0x334b80 },
    { L"Ruins", 0x334d00, 0x334d80 },
    { L"Country Town Noon", 0x334d80, 0x334e00 },
    { L"Underground Water", 0x334f00, 0x334f80 },
    { L"Inside House", 0x334f80, 0x335000 },
    { L"Coffin Room", 0x335000, 0x335080 },
    { L"Clock Tower", 0x335080, 0x335100 },
    { L"Suburbs", 0x335100, 0x335180 },
    { L"On The Bridge", 0x335280, 0x335300 },
    { L"Country Town Twilight", 0x334e00, 0x334e80 },
    { L"Desert Morning", 0x334b80, 0x334c00 },
    { L"Desert Twilight", 0x334c00, 0x334c80 },
    { L"Desert Night", 0x334c80, 0x334d00 },
    { L"Small Island (Joseph)", 0x334a80, 0x334b00 },
    { L"Country Town Night", 0x334e80, 0x334f00 },
    { L"Suburbs 2", 0x335180, 0x335200 },
    { L"Suburbs 3", 0x335200, 0x335280 },
    { L"New 1 - Copy of Remains", 0x335380, 0x335400 },
    { L"New 2 - Copy of Hotel (Devil)", 0x335300, 0x335380 },
    { L"New 3 - Copy of Small Island", 0x335400, 0x335480 },
    { L"New 4 - Copy of Ruins", 0x335480, 0x335500 },
    { L"New 5 - Copy of Underground Water", 0x335500, 0x335580 },
    { L"New 6 - Copy of Inside House", 0x335580, 0x335600 },
    { L"New 7 - Copy of Coffin Room", 0x335600, 0x335680 },
    { L"New 8 - Copy of Clock Tower", 0x335680, 0x335700 },
    { L"New 9 - Copy of On The Bridge", 0x335700, 0x335780 },
};

const sGame_PaletteDataset JOJOS_BONUS_TAROT_CARDS[] =
{
#ifdef FUN_COMMENT
    string: "I say we should wait until we have more of them before adding to the program (also midler is annoying)
             I know a few people are figuring those out"
#endif

    { L"Menu Cards", 0x30db40, 0x30db80, indexJojos51TarotCards, 0x00 },
    //{ L"Card Backs", 0x30DB00, 0x30DB40 },
    { L"Star Platinum Light Menu Card", 0x30DB80, 0x30DC00, indexJojos51TarotCards, 0x01 },
    { L"Star Platinum Menu Card", 0x30DC00, 0x30DC80, indexJojos51TarotCards, 0x02 },
    { L"Hierophant Light Menu Card", 0x30DC80, 0x30DD00, indexJojos51TarotCards, 0x03 },
    { L"Hierophant Menu", 0x30DD00, 0x30DD80, indexJojos51TarotCards, 0x04 },
    { L"Magician's Red Light Menu Card", 0x30DD80, 0x30DE00, indexJojos51TarotCards, 0x05 },
    { L"Magician's Red Menu Card", 0x30DE00, 0x30DE80, indexJojos51TarotCards, 0x06 },
    { L"Silver Chariot Light Menu Card", 0x30DE80, 0x30DF00, indexJojos51TarotCards, 0x07 },
    { L"Silver Chariot Menu Card", 0x30DF00, 0x30DF80, indexJojos51TarotCards, 0x08 },
    { L"The Hermit Light Menu Card", 0x30DF80, 0x30E000, indexJojos51TarotCards, 0x09 },
    { L"The Hermit Menu Card", 0x30E000, 0x30E080, indexJojos51TarotCards, 0x0A },
    { L"The Fool Light Menu Card", 0x30E080, 0x30E100, indexJojos51TarotCards, 0x0B },
    { L"The Fool Menu Card", 0x30E100, 0x30E180, indexJojos51TarotCards, 0x0C },
    { L"Sethan Light Menu Card", 0x30E180, 0x30E200, indexJojos51TarotCards, 0x0D },
    { L"Sethan Menu Card", 0x30E200, 0x30E280, indexJojos51TarotCards, 0x0E },
    { L"Anubis Light Menu Card", 0x30E280, 0x30E300, indexJojos51TarotCards, 0x0F },
    { L"Anubis Menu Card", 0x30E300, 0x30E380, indexJojos51TarotCards, 0x10 },
    { L"The Devil Light Menu Card", 0x30E380, 0x30E400, indexJojos51TarotCards, 0x11 },
    { L"The Devil Menu Card", 0x30E400, 0x30E480, indexJojos51TarotCards, 0x12 },
    { L"Geb Light Menu Card", 0x30E480, 0x30E500, indexJojos51TarotCards, 0x13 },
    { L"Geb Menu Card", 0x30E500, 0x30E580, indexJojos51TarotCards, 0x14 },
    { L"High Priestess Light Menu Card", 0x30E580, 0x30E600, indexJojos51TarotCards, 0x15 },
    { L"High Priestess Menu Card", 0x30E600, 0x30E680, indexJojos51TarotCards, 0x16 },
    { L"The Tower Light Menu Card", 0x30E680, 0x30E700, indexJojos51TarotCards, 0x17 },
    { L"The Tower Menu Card", 0x30E700, 0x30E780, indexJojos51TarotCards, 0x18 },
    { L"The Emperor Light Menu Card", 0x30E780, 0x30E800, indexJojos51TarotCards, 0x19 },
    { L"The Emperor Menu Card", 0x30E800, 0x30E880, indexJojos51TarotCards, 0x1A },
    { L"Hanged Man Light Menu Card", 0x30E880, 0x30E900, indexJojos51TarotCards, 0x1B },
    { L"Hanged Man Menu Card", 0x30E900, 0x30E980, indexJojos51TarotCards, 0x1C },
    { L"Death 13 Light Menu Card", 0x30E980, 0x30EA00, indexJojos51TarotCards, 0x1D },
    { L"Death 13 Menu Card", 0x30EA00, 0x30EA80, indexJojos51TarotCards, 0x1E },
    { L"Judgement Light Menu Card", 0x30EA80, 0x30EB00, indexJojos51TarotCards, 0x1F },
    { L"Judgement Menu Card", 0x30EB00, 0x30EB80, indexJojos51TarotCards, 0x20 },
    { L"Justice Light Menu Card", 0x30EB80, 0x30EC00, indexJojos51TarotCards, 0x21 },
    { L"Justice Menu Card", 0x30EC00, 0x30EC80, indexJojos51TarotCards, 0x22 },
    { L"Horus Light Menu Card", 0x30EC80, 0x30ED00, indexJojos51TarotCards, 0x23 },
    { L"Horus Menu Card", 0x30ED00, 0x30ED80, indexJojos51TarotCards, 0x24 },
    { L"Cream Light Menu Card", 0x30ED80, 0x30EE00, indexJojos51TarotCards, 0x25 },
    { L"Cream Menu Card", 0x30EE00, 0x30EE80, indexJojos51TarotCards, 0x26 },
    { L"The World Light Menu Card", 0x30EE80, 0x30EF00, indexJojos51TarotCards, 0x27 },
    { L"The World Menu Card", 0x30EF00, 0x30EF80, indexJojos51TarotCards, 0x28 },
};

const sGame_PaletteDataset JOJOS_BONUS_PORTAITS_RANKING[] =
{
    { L"Jotaro Ranking Portrait", 0x313d00, 0x313d20,               indexJojos51Jotaro, 0x30 },
    { L"Kakyoin Ranking Portrait", 0x313d20, 0x313d40,              indexJojos51Kakyo, 0x30 },
    { L"Avdol Ranking Portrait", 0x313de0, 0x313e00,                indexJojos51Avdol, 0x30 },
    { L"Polnareff Ranking Portrait", 0x313da0, 0x313dc0,            indexJojos51Pol, 0x30 },
    { L"Joseph Ranking Portrait", 0x313dc0, 0x313de0,               indexJojos51Joseph, 0x30 },
    { L"Iggy Ranking Portrait", 0x313d80, 0x313da0,                 indexJojos51Iggy, 0x30 },
    { L"Alessi Ranking Portrait", 0x313e00, 0x313e20,               indexJojos51Alessi, 0x30 },
    { L"Chaka Ranking Portrait", 0x313d60, 0x313d80,                indexJojos51Chaka, 0x30 },
    { L"Devo Ranking Portrait", 0x313e20, 0x313e40,                 indexJojos51Devo, 0x30 },
    { L"Midler Ranking Portrait", 0x313e40, 0x313e60,               indexJojos51Midler, 0x30 },
    { L"DIO Ranking Portrait", 0x313d40, 0x313d60,                  indexJojos51Dio, 0x30 },
    { L"Shadow DIO Ranking Portrait", 0x313e60, 0x313e80,           indexJojos51SDio, 0x30 },
    { L"Young Joseph Ranking Portrait", 0x313e80, 0x313ea0,         indexJojos51YSeph, 0x30 },
    { L"Hol Horse Ranking Portrait", 0x3141a0, 0x3141c0,            indexJojos51Hol, 0x30 },
    { L"Vanilla Ice Ranking Portrait", 0x314180, 0x3141a0,          indexJojos51VIce, 0x30 },
    { L"New Kak Ranking Portrait", 0x3141e0, 0x314200,              indexJojos51NewKakyo, 0x30 },
    { L"Anubis Polnareff Ranking Portrait", 0x3141c0, 0x3141e0,     indexJojos51Anubis, 0x30 },
    { L"Petshop Ranking Portrait", 0x314400, 0x314420,              indexJojos51Petshop, 0x30 },
    { L"Mariah Ranking Portrait", 0x314420, 0x314440,               indexJojos51Mariah, 0x30 },
    { L"Hol Horse & Boingo Ranking Portrait", 0x314440, 0x314460,   indexJojos51HolBoingo, 0x30 },
    { L"Rubber Soul Ranking Portrait", 0x314460, 0x314480,          indexJojos51RSoul, 0x30 },
    { L"Khan Ranking Portrait", 0x314480, 0x3144a0,                 indexJojos51Khan, 0x30 },
};

const sGame_PaletteDataset JOJOS_BONUS_51_STORYMODE_PALETTES[] =
{
    { L"Storymode Egypt Map (1/4)", 0x313a00, 0x313a80, indexJojos51Bonus, 0x4e },
    { L"Storymode Egypt Map (2/4)", 0x313b00, 0x313b80, indexJojos51Bonus, 0x4e },
    { L"Storymode Egypt Map (3/4)", 0x313b80, 0x313c00, indexJojos51Bonus, 0x4e },
    { L"Storymode Egypt Map (4/4)", 0x313c00, 0x313c80, indexJojos51Bonus, 0x4e },
    { L"Storymode Japan Map", 0x313a80, 0x313b00, indexJojos51Bonus, 0x4f },
};

const sGame_PaletteDataset JOJOS_A_TEMP_GCS_PALETTES[] =
{
    { L"Iggy & The Fool A Guard Cancel Stance", 0x33a980, 0x33aa00, indexJojos51Iggy },
    { L"Iggy & The Fool B Guard Cancel Stance", 0x34ee80, 0x34ef00, indexJojos51Iggy },
    { L"Iggy & The Fool C Guard Cancel Stance", 0x363380, 0x363400, indexJojos51Iggy },
    { L"Iggy & The Fool S Guard Cancel Stance", 0x377880, 0x377900, indexJojos51Iggy },
    { L"Iggy & The Fool Start Guard Cancel Stance", 0x38bd80, 0x38be00, indexJojos51Iggy },

    { L"Alessi & Sethan A Guard Cancel Stance", 0x33b600, 0x33b680, indexJojos51Alessi },
    { L"Alessi & Sethan B Guard Cancel Stance", 0x34fb00, 0x34fb80, indexJojos51Alessi },
    { L"Alessi & Sethan C Guard Cancel Stance", 0x364000, 0x364080, indexJojos51Alessi },
    { L"Alessi & Sethan S Guard Cancel Stance", 0x378500, 0x378580, indexJojos51Alessi },
    { L"Alessi & Sethan Start Guard Cancel Stance", 0x38ca00, 0x38ca80, indexJojos51Alessi },

    { L"Chaka A Guard Cancel Stance", 0x33c280, 0x33c300, indexJojos51Chaka },
    { L"Chaka B Guard Cancel Stance", 0x350780, 0x350800, indexJojos51Chaka },
    { L"Chaka C Guard Cancel Stance", 0x364c80, 0x364d00, indexJojos51Chaka },
    { L"Chaka S Guard Cancel Stance", 0x379180, 0x379200, indexJojos51Chaka },
    { L"Chaka Start Guard Cancel Stance", 0x38d680, 0x38d700, indexJojos51Chaka },

    { L"Midler & High Priestess A Guard Cancel Stance", 0x33e580, 0x33e600, indexJojos51Midler },
    { L"Midler & High Priestess B Guard Cancel Stance", 0x352a80, 0x352b00, indexJojos51Midler },
    { L"Midler & High Priestess C Guard Cancel Stance", 0x366f80, 0x367000, indexJojos51Midler },
    { L"Midler & High Priestess S Guard Cancel Stance", 0x37b480, 0x37b500, indexJojos51Midler },
    { L"Midler & High Priestess Start Guard Cancel Stance", 0x38f980, 0x38fa00, indexJojos51Midler },

    { L"DIO & The World A Guard Cancel Stance", 0x33f200, 0x33f280, indexJojos51Dio },
    { L"DIO & The World B Guard Cancel Stance", 0x353700, 0x353780, indexJojos51Dio },
    { L"DIO & The World C Guard Cancel Stance", 0x367c00, 0x367c80, indexJojos51Dio },
    { L"DIO & The World S Guard Cancel Stance", 0x37c100, 0x37c180, indexJojos51Dio },
    { L"DIO & The World Start Guard Cancel Stance", 0x390600, 0x390680, indexJojos51Dio },

    { L"Shadow DIO A Guard Cancel Stance", 0x341a00, 0x341a80, indexJojos51SDio },
    { L"Shadow DIO B Guard Cancel Stance", 0x355f00, 0x355f80, indexJojos51SDio },
    { L"Shadow DIO C Guard Cancel Stance", 0x36a400, 0x36a480, indexJojos51SDio },
    { L"Shadow DIO S Guard Cancel Stance", 0x37e900, 0x37e980, indexJojos51SDio },
    { L"Shadow DIO Start Guard Cancel Stance", 0x392e00, 0x392e80, indexJojos51SDio },

    { L"Vanilla Ice & Cream A Guard Cancel Stance", 0x343d00, 0x343d80, indexJojos51VIce },
    { L"Vanilla Ice & Cream B Guard Cancel Stance", 0x358200, 0x358280, indexJojos51VIce },
    { L"Vanilla Ice & Cream C Guard Cancel Stance", 0x36c700, 0x36c780, indexJojos51VIce },
    { L"Vanilla Ice & Cream S Guard Cancel Stance", 0x380c00, 0x380c80, indexJojos51VIce },
    { L"Vanilla Ice & Cream Start Guard Cancel Stance", 0x395100, 0x395180, indexJojos51VIce },

    { L"Anubis Polnareff A Guard Cancel Stance", 0x345600, 0x345680, indexJojos51Anubis },
    { L"Anubis Polnareff B Guard Cancel Stance", 0x359b00, 0x359b80, indexJojos51Anubis },
    { L"Anubis Polnareff C Guard Cancel Stance", 0x36e000, 0x36e080, indexJojos51Anubis },
    { L"Anubis Polnareff S Guard Cancel Stance", 0x382500, 0x382580, indexJojos51Anubis },
    { L"Anubis Polnareff Start Guard Cancel Stance", 0x396a00, 0x396a80, indexJojos51Anubis },

    { L"Rubber Soul A Guard Cancel Stance", 0x349480, 0x349500, indexJojos51RSoul },
    { L"Rubber Soul B Guard Cancel Stance", 0x35d980, 0x35da00, indexJojos51RSoul },
    { L"Rubber Soul C Guard Cancel Stance", 0x371e80, 0x371f00, indexJojos51RSoul },
    { L"Rubber Soul S Guard Cancel Stance", 0x386380, 0x386400, indexJojos51RSoul },
    { L"Rubber Soul Start Guard Cancel Stance", 0x39a880, 0x39a900, indexJojos51RSoul },
};

const sDescTreeNode JOJOS_A_BONUS_COLLECTION[]
{
    //{ L"Please Verify: Guard Cancel Stance", DESC_NODETYPE_TREE, (void*)JOJOS_A_TEMP_GCS_PALETTES, ARRAYSIZE(JOJOS_A_TEMP_GCS_PALETTES) },
    { L"Intro", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INTRO_PALETTES, ARRAYSIZE(JOJOS_BONUS_INTRO_PALETTES) },
    { L"Menu", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_MENU_PALETTES, ARRAYSIZE(JOJOS_BONUS_MENU_PALETTES) },
    { L"In Game", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INGAME_PALETTES, ARRAYSIZE(JOJOS_BONUS_INGAME_PALETTES) },
    { L"Fade Background (Challenge Screen / Demo)", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_NODE_FADEBACKGROUND, ARRAYSIZE(JOJOS_BONUS_NODE_FADEBACKGROUND) },
    { L"Super Screen Background", DESC_NODETYPE_TREE, (void*)JOJOS_A_BONUS_NODE_SUPERBACKGROUND, ARRAYSIZE(JOJOS_A_BONUS_NODE_SUPERBACKGROUND) },
    { L"Tarot Cards", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_TAROT_CARDS, ARRAYSIZE(JOJOS_BONUS_TAROT_CARDS) },
    { L"Ranking Portraits", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_PORTAITS_RANKING, ARRAYSIZE(JOJOS_BONUS_PORTAITS_RANKING) },
    { L"Stage Shadows", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_STAGESHADOWS, ARRAYSIZE(JOJOS_BONUS_STAGESHADOWS) },
    { L"Story Mode", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_51_STORYMODE_PALETTES, ARRAYSIZE(JOJOS_BONUS_51_STORYMODE_PALETTES) },
};

#pragma endregion Bonus

#pragma region Timestop
const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_ALOCKUP[] =
{
    { L"A Lockup TS (1/7)", 0x2d0000, 0x2d0200, indexJojos50Stages, 0x3c, &pairFullyLinkedNode },
    { L"A Lockup TS (2/7)", 0x2d0200, 0x2d0400, indexJojos50Stages, 0x3d },
    { L"A Lockup TS (3/7)", 0x2d0400, 0x2d0600, indexJojos50Stages, 0x3e },
    { L"A Lockup TS (4/7)", 0x2d0600, 0x2d0800, indexJojos50Stages, 0x3f },
    { L"A Lockup TS (5/7)", 0x2d0800, 0x2d0a00, indexJojos50Stages, 0x40 },
    { L"A Lockup TS (6/7)", 0x2d0a00, 0x2d0c00, indexJojos50Stages, 0x41 },
    { L"A Lockup TS (7/7)", 0x2d0c00, 0x2d0d80, indexJojos50Stages, 0x42 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HEALTH[] =
{
    { L"A Health Room TS (1/6)", 0x2d0e00, 0x2d1000, indexJojos50Stages, 0x2e, &pairFullyLinkedNode },
    { L"A Health Room TS (2/6)", 0x2d1000, 0x2d1200, indexJojos50Stages, 0x2f },
    { L"A Health Room TS (3/6)", 0x2d1200, 0x2d1400, indexJojos50Stages, 0x30 },
    { L"A Health Room TS (4/6)", 0x2d1400, 0x2d1600, indexJojos50Stages, 0x31 },
    { L"A Health Room TS (5/6)", 0x2d1600, 0x2d1800, indexJojos50Stages, 0x32 },
    { L"A Health Room TS (6/6)", 0x2d1800, 0x2d1900, indexJojos50Stages, 0x33 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_AIRPLANE[] =
{
    { L"In A Airplane TS (1/17)", 0x2d1a00, 0x2d1c00, indexJojos50Stages, 0x67, &pairFullyLinkedNode },
    { L"In A Airplane TS (2/17)", 0x2d1c00, 0x2d1e00, indexJojos50Stages, 0x68 },
    { L"In A Airplane TS (3/17)", 0x2d1e00, 0x2d2000, indexJojos50Stages, 0x69 },
    { L"In A Airplane TS (4/17)", 0x2d2000, 0x2d2200, indexJojos50Stages, 0x6a },
    { L"In A Airplane TS (5/17)", 0x2d2200, 0x2d2400, indexJojos50Stages, 0x6b },
    { L"In A Airplane TS (6/17)", 0x2d2400, 0x2d2600, indexJojos50Stages, 0x6c },
    { L"In A Airplane TS (7/17)", 0x2d2600, 0x2d2800, indexJojos50Stages, 0x6d },
    { L"In A Airplane TS (8/17)", 0x2d2800, 0x2d2a00, indexJojos50Stages, 0x6e },
    { L"In A Airplane TS (9/17)", 0x2d2a00, 0x2d2c00, indexJojos50Stages, 0x6f },
    { L"In A Airplane TS (10/17)", 0x2d2c00, 0x2d2e00, indexJojos50Stages, 0x70 },
    { L"In A Airplane TS (11/17)", 0x2d2e00, 0x2d3000, indexJojos50Stages, 0x71 },
    { L"In A Airplane TS (12/17)", 0x2d3000, 0x2d3200, indexJojos50Stages, 0x72 },
    { L"In A Airplane TS (13/17)", 0x2d3200, 0x2d3400, indexJojos50Stages, 0x73 },
    { L"In A Airplane TS (14/17)", 0x2d3400, 0x2d3600, indexJojos50Stages, 0x74 },
    { L"In A Airplane TS (15/17)", 0x2d3600, 0x2d3800, indexJojos50Stages, 0x75 },
    { L"In A Airplane TS (16/17)", 0x2d3800, 0x2d3a00, indexJojos50Stages, 0x76 },
    { L"In A Airplane TS (17/17)", 0x2d3a00, 0x2d3b80, indexJojos50Stages, 0x77 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_TIGERBAUM[] =
{
    { L"Tigerbaum Garden TS (1/11)", 0x2d3c00, 0x2d3e00, indexJojos50Stages, 0x1e, &pairFullyLinkedNode },
    { L"Tigerbaum Garden TS (2/11)", 0x2d3e00, 0x2d4000, indexJojos50Stages, 0x1f },
    { L"Tigerbaum Garden TS (3/11)", 0x2d4000, 0x2d4200, indexJojos50Stages, 0x20 },
    { L"Tigerbaum Garden TS (4/11)", 0x2d4200, 0x2d4400, indexJojos50Stages, 0x21 },
    { L"Tigerbaum Garden TS (5/11)", 0x2d4400, 0x2d4600, indexJojos50Stages, 0x22 },
    { L"Tigerbaum Garden TS (6/11)", 0x2d4600, 0x2d4800, indexJojos50Stages, 0x23 },
    { L"Tigerbaum Garden TS (7/11)", 0x2d4800, 0x2d4a00, indexJojos50Stages, 0x24 },
    { L"Tigerbaum Garden TS (8/11)", 0x2d4a00, 0x2d4c00, indexJojos50Stages, 0x25 },
    { L"Tigerbaum Garden TS (9/11)", 0x2d4c00, 0x2d4e00, indexJojos50Stages, 0x26 },
    { L"Tigerbaum Garden TS (10/11)", 0x2d4e00, 0x2d5000, indexJojos50Stages, 0x27 },
    { L"Tigerbaum Garden TS (11/11)", 0x2d5000, 0x2d5200, indexJojos50Stages, 0x28 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELD[] =
{
    { L"Hotel (Devil) / New 2 TS (1/7)", 0x2d5300, 0x2d5500, indexJojos50Stages, 0x11, &pairFullyLinkedNode },
    { L"Hotel (Devil) / New 2 TS (2/7)", 0x2d5500, 0x2d5700, indexJojos50Stages, 0x12 },
    { L"Hotel (Devil) / New 2 TS (3/7)", 0x2d5700, 0x2d5900, indexJojos50Stages, 0x13 },
    { L"Hotel (Devil) / New 2 TS (4/7)", 0x2d5900, 0x2d5b00, indexJojos50Stages, 0x14 },
    { L"Hotel (Devil) / New 2 TS (5/7)", 0x2d5b00, 0x2d5d00, indexJojos50Stages, 0x15 },
    { L"Hotel (Devil) / New 2 TS (6/7)", 0x2d5d00, 0x2d5f00, indexJojos50Stages, 0x16 },
    { L"Hotel (Devil) / New 2 TS (7/7)", 0x2d5f00, 0x2d6000, indexJojos50Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_REMAINS[] =
{
    { L"Remains / New 1 TS (1/9)", 0x2d6100, 0x2d6180, indexJojos50Stages, 0x95, &pairFullyLinkedNode },
    { L"Remains / New 1 TS (2/9)", 0x2d6180, 0x2d6380, indexJojos50Stages, 0x96 },
    { L"Remains / New 1 TS (3/9)", 0x2d6380, 0x2d6580, indexJojos50Stages, 0x97 },
    { L"Remains / New 1 TS (4/9)", 0x2d6580, 0x2d6780, indexJojos50Stages, 0x98 },
    { L"Remains / New 1 TS (5/9)", 0x2d6780, 0x2d6980, indexJojos50Stages, 0x99 },
    { L"Remains / New 1 TS (6/9)", 0x2d6980, 0x2d6b80, indexJojos50Stages, 0x9a },
    { L"Remains / New 1 TS (7/9)", 0x2d6b80, 0x2d6d80, indexJojos50Stages, 0x9b },
    { L"Remains / New 1 TS (8/9)", 0x2d6d80, 0x2d6f80, indexJojos50Stages, 0x9c },
    { L"Remains / New 1 TS (9/9)", 0x2d6f80, 0x2d7180, indexJojos50Stages, 0x9d },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELJ[] =
{
    { L"Hotel (Justice) TS (1/8)", 0x2d7400, 0x2d7600, indexJojos50Stages, 0x8d, &pairFullyLinkedNode },
    { L"Hotel (Justice) TS (2/8)", 0x2d7600, 0x2d7800, indexJojos50Stages, 0x8e },
    { L"Hotel (Justice) TS (3/8)", 0x2d7800, 0x2d7a00, indexJojos50Stages, 0x8f },
    { L"Hotel (Justice) TS (4/8)", 0x2d7a00, 0x2d7c00, indexJojos50Stages, 0x90 },
    { L"Hotel (Justice) TS (5/8)", 0x2d7c00, 0x2d7e00, indexJojos50Stages, 0x91 },
    { L"Hotel (Justice) TS (6/8)", 0x2d7e00, 0x2d8000, indexJojos50Stages, 0x92 },
    { L"Hotel (Justice) TS (7/8)", 0x2d8000, 0x2d8200, indexJojos50Stages, 0x93 },
    { L"Hotel (Justice) TS (8/8)", 0x2d8200, 0x2d8280, indexJojos50Stages, 0x94 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SISLAND[] =
{
    { L"Small Island / New 3 TS (1/6)", 0x2d8300, 0x2d8500, indexJojos50Stages, 0x18 },
    { L"Small Island / New 3 TS (2/6)", 0x2d8500, 0x2d8700, indexJojos50Stages, 0x19 },
    { L"Small Island / New 3 TS (3/6)", 0x2d8700, 0x2d8900, indexJojos50Stages, 0x1a },
    { L"Small Island / New 3 TS (4/6)", 0x2d8900, 0x2d8b00, indexJojos50Stages, 0x1b },
    { L"Small Island / New 3 TS (5/6)", 0x2d8b00, 0x2d8d00, indexJojos50Stages, 0x1c },
    { L"Small Island / New 3 TS (6/6)", 0x2d8d00, 0x2d8f00, indexJojos50Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DMORN[] =
{
    { L"Desert Morning / Twilight TS (1/8)", 0x2d9f00, 0x2da100, indexJojos50Stages, 0x58, &pairFullyLinkedNode },
    { L"Desert Morning / Twilight TS (2/8)", 0x2da100, 0x2da300, indexJojos50Stages, 0x59 },
    { L"Desert Morning / Twilight TS (3/8)", 0x2da300, 0x2da500, indexJojos50Stages, 0x5a },
    { L"Desert Morning / Twilight TS (4/8)", 0x2da500, 0x2da700, indexJojos50Stages, 0x5b },
    { L"Desert Morning / Twilight TS (5/8)", 0x2da700, 0x2da900, indexJojos50Stages, 0x5c },
    { L"Desert Morning / Twilight TS (6/8)", 0x2da900, 0x2dab00, indexJojos50Stages, 0x5d },
    { L"Desert Morning / Twilight TS (7/8)", 0x2dab00, 0x2dad00, indexJojos50Stages, 0x5e },
    { L"Desert Morning / Twilight TS (8/8)", 0x2dad00, 0x2dad80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNOON[] =
{
    { L"Desert Noon TS (1/7)", 0x2d9000, 0x2d9200, indexJojos50Stages, 0x58, &pairFullyLinkedNode },
    { L"Desert Noon TS (2/7)", 0x2d9200, 0x2d9400, indexJojos50Stages, 0x59 },
    { L"Desert Noon TS (3/7)", 0x2d9400, 0x2d9600, indexJojos50Stages, 0x5a },
    { L"Desert Noon TS (4/7)", 0x2d9600, 0x2d9800, indexJojos50Stages, 0x5b },
    { L"Desert Noon TS (5/7)", 0x2d9800, 0x2d9a00, indexJojos50Stages, 0x5c },
    { L"Desert Noon TS (6/7)", 0x2d9a00, 0x2d9c00, indexJojos50Stages, 0x5d },
    { L"Desert Noon TS (7/7)", 0x2d9c00, 0x2d9e00, indexJojos50Stages, 0x5e },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNIGHT[] =
{
    { L"Desert Night TS (1/8)", 0x2dae00, 0x2db000, indexJojos50Stages, 0x58, &pairFullyLinkedNode },
    { L"Desert Night TS (2/8)", 0x2db000, 0x2db200, indexJojos50Stages, 0x59 },
    { L"Desert Night TS (3/8)", 0x2db200, 0x2db400, indexJojos50Stages, 0x5a },
    { L"Desert Night TS (4/8)", 0x2db400, 0x2db600, indexJojos50Stages, 0x5b },
    { L"Desert Night TS (5/8)", 0x2db600, 0x2db800, indexJojos50Stages, 0x5c },
    { L"Desert Night TS (6/8)", 0x2db800, 0x2dba00, indexJojos50Stages, 0x5d },
    { L"Desert Night TS (7/8)", 0x2dba00, 0x2dbc00, indexJojos50Stages, 0x5e },
    { L"Desert Night TS (8/8)", 0x2dbc00, 0x2dbc80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_RUINS[] =
{
    { L"Ruins / New 4 TS (1/5)", 0x2dbd00, 0x2dbf00, indexJojos50Stages, 0x29, &pairFullyLinkedNode },
    { L"Ruins / New 4 TS (2/5)", 0x2dbf00, 0x2dc100, indexJojos50Stages, 0x2a },
    { L"Ruins / New 4 TS (3/5)", 0x2dc100, 0x2dc300, indexJojos50Stages, 0x2b },
    { L"Ruins / New 4 TS (4/5)", 0x2dc300, 0x2dc500, indexJojos50Stages, 0x2c },
    { L"Ruins / New 4 TS (5/5)", 0x2dc500, 0x2dc700, indexJojos50Stages, 0x2d },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWN[] =
{
    { L"Country Town Noon / Twilight / Night TS (1/21)", 0x2dc800, 0x2dca00, indexJojos50Stages, 0x78, &pairFullyLinkedNode },
    { L"Country Town Noon / Twilight / Night TS (2/21)", 0x2dca00, 0x2dcc00, indexJojos50Stages, 0x79 },
    { L"Country Town Noon / Twilight / Night TS (3/21)", 0x2dcc00, 0x2dce00, indexJojos50Stages, 0x7a },
    { L"Country Town Noon / Twilight / Night TS (4/21)", 0x2dce00, 0x2dd000, indexJojos50Stages, 0x7b },
    { L"Country Town Noon / Twilight / Night TS (5/21)", 0x2dd000, 0x2dd200, indexJojos50Stages, 0x7c },
    { L"Country Town Noon / Twilight / Night TS (6/21)", 0x2dd200, 0x2dd400, indexJojos50Stages, 0x7d },
    { L"Country Town Noon / Twilight / Night TS (7/21)", 0x2dd400, 0x2dd600, indexJojos50Stages, 0x7e },
    { L"Country Town Noon / Twilight / Night TS (8/21)", 0x2dd600, 0x2dd800, indexJojos50Stages, 0x7f },
    { L"Country Town Noon / Twilight / Night TS (9/21)", 0x2dd800, 0x2dda00, indexJojos50Stages, 0x80 },
    { L"Country Town Noon / Twilight / Night TS (10/21)", 0x2dda00, 0x2ddc00, indexJojos50Stages, 0x81 },
    { L"Country Town Noon / Twilight / Night TS (11/21)", 0x2ddc00, 0x2dde00, indexJojos50Stages, 0x82 },
    { L"Country Town Noon / Twilight / Night TS (12/21)", 0x2dde00, 0x2de000, indexJojos50Stages, 0x83 },
    { L"Country Town Noon / Twilight / Night TS (13/21)", 0x2de000, 0x2de200, indexJojos50Stages, 0x84 },
    { L"Country Town Noon / Twilight / Night TS (14/21)", 0x2de200, 0x2de400, indexJojos50Stages, 0x85 },
    { L"Country Town Noon / Twilight / Night TS (15/21)", 0x2de400, 0x2de600, indexJojos50Stages, 0x86 },
    { L"Country Town Noon / Twilight / Night TS (16/21)", 0x2de600, 0x2de800, indexJojos50Stages, 0x87 },
    { L"Country Town Noon / Twilight / Night TS (17/21)", 0x2de800, 0x2dea00, indexJojos50Stages, 0x88 },
    { L"Country Town Noon / Twilight / Night TS (18/21)", 0x2dea00, 0x2dec00, indexJojos50Stages, 0x89 },
    { L"Country Town Noon / Twilight / Night TS (19/21)", 0x2dec00, 0x2dee00, indexJojos50Stages, 0x8a },
    { L"Country Town Noon / Twilight / Night TS (20/21)", 0x2dee00, 0x2df000, indexJojos50Stages, 0x8b },
    { L"Country Town Noon / Twilight / Night TS (21/21)", 0x2df000, 0x2df180, indexJojos50Stages, 0x8c },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_UWATER[] =
{
    { L"Underground Water / New 5 TS (1/8)", 0x2df200, 0x2df400, indexJojos50Stages, 0x5f, &pairFullyLinkedNode },
    { L"Underground Water / New 5 TS (2/8)", 0x2df400, 0x2df600, indexJojos50Stages, 0x60 },
    { L"Underground Water / New 5 TS (3/8)", 0x2df600, 0x2df800, indexJojos50Stages, 0x61 },
    { L"Underground Water / New 5 TS (4/8)", 0x2df800, 0x2dfa00, indexJojos50Stages, 0x62 },
    { L"Underground Water / New 5 TS (5/8)", 0x2dfa00, 0x2dfc00, indexJojos50Stages, 0x63 },
    { L"Underground Water / New 5 TS (6/8)", 0x2dfc00, 0x2dfe00, indexJojos50Stages, 0x64 },
    { L"Underground Water / New 5 TS (7/8)", 0x2dfe00, 0x2e0000, indexJojos50Stages, 0x65 },
    { L"Underground Water / New 5 TS (8/8)", 0x2e0000, 0x2e0200, indexJojos50Stages, 0x66 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_INHOUSE[] =
{
    { L"Inside House / New 6 TS (1/8)", 0x2e0300, 0x2e0500, indexJojos50Stages, 0x34 },
    { L"Inside House / New 6 TS (2/8)", 0x2e0500, 0x2e0700, indexJojos50Stages, 0x35 },
    { L"Inside House / New 6 TS (3/8)", 0x2e0700, 0x2e0900, indexJojos50Stages, 0x36 },
    { L"Inside House / New 6 TS (4/8)", 0x2e0900, 0x2e0b00, indexJojos50Stages, 0x37 },
    { L"Inside House / New 6 TS (5/8)", 0x2e0b00, 0x2e0d00, indexJojos50Stages, 0x38 },
    { L"Inside House / New 6 TS (6/8)", 0x2e0d00, 0x2e0f00, indexJojos50Stages, 0x39 },
    { L"Inside House / New 6 TS (7/8)", 0x2e0f00, 0x2e1100, indexJojos50Stages, 0x3a },
    { L"Inside House / New 6 TS (8/8)", 0x2e1100, 0x2e1200, indexJojos50Stages, 0x3b },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CROOM[] =
{
    { L"Coffin Room / New 7 TS (1/4)", 0x2e1300, 0x2e1500, indexJojos50Stages, 0x05 },
    { L"Coffin Room / New 7 TS (2/4)", 0x2e1500, 0x2e1700, indexJojos50Stages, 0x06 },
    { L"Coffin Room / New 7 TS (3/4)", 0x2e1700, 0x2e1900, indexJojos50Stages, 0x07 },
    { L"Coffin Room / New 7 TS (4/4)", 0x2e1900, 0x2e1b00, indexJojos50Stages, 0x08 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWER[] =
{
    { L"Clock Tower / New 8 TS (1/3)", 0x2e1c00, 0x2e1e00, indexJojos50Stages, 0x00, &pairFullyLinkedNode },
    { L"Clock Tower / New 8 TS (2/3)", 0x2e1e00, 0x2e2000, indexJojos50Stages, 0x01 },
    { L"Clock Tower / New 8 TS (3/3)", 0x2e2000, 0x2e2200, indexJojos50Stages, 0x02 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SUBURB[] =
{
    { L"Surburbs 1 / 2 / 3 TS (1/22)", 0x2e2300, 0x2e2500, indexJojos50Stages, 0x43, &pairFullyLinkedNode },
    { L"Surburbs 1 / 2 / 3 TS (2/22)", 0x2e2500, 0x2e2700, indexJojos50Stages, 0x44 },
    { L"Surburbs 1 / 2 / 3 TS (3/22)", 0x2e2700, 0x2e2900, indexJojos50Stages, 0x45 },
    { L"Surburbs 1 / 2 / 3 TS (4/22)", 0x2e2900, 0x2e2b00, indexJojos50Stages, 0x46 },
    { L"Surburbs 1 / 2 / 3 TS (5/22)", 0x2e2b00, 0x2e2d00, indexJojos50Stages, 0x47 },
    { L"Surburbs 1 / 2 / 3 TS (6/22)", 0x2e2d00, 0x2e2f00, indexJojos50Stages, 0x48 },
    { L"Surburbs 1 / 2 / 3 TS (7/22)", 0x2e2f00, 0x2e3100, indexJojos50Stages, 0x49 },
    { L"Surburbs 1 / 2 / 3 TS (8/22)", 0x2e3100, 0x2e3300, indexJojos50Stages, 0x4a },
    { L"Surburbs 1 / 2 / 3 TS (9/22)", 0x2e3300, 0x2e3500, indexJojos50Stages, 0x4b },
    { L"Surburbs 1 / 2 / 3 TS (10/22)", 0x2e3500, 0x2e3700, indexJojos50Stages, 0x4c },
    { L"Surburbs 1 / 2 / 3 TS (11/22)", 0x2e3700, 0x2e3900, indexJojos50Stages, 0x4d },
    { L"Surburbs 1 / 2 / 3 TS (12/22)", 0x2e3900, 0x2e3b00, indexJojos50Stages, 0x4e },
    { L"Surburbs 1 / 2 / 3 TS (13/22)", 0x2e3b00, 0x2e3d00, indexJojos50Stages, 0x4f },
    { L"Surburbs 1 / 2 / 3 TS (14/22)", 0x2e3d00, 0x2e3f00, indexJojos50Stages, 0x50 },
    { L"Surburbs 1 / 2 / 3 TS (15/22)", 0x2e3f00, 0x2e4100, indexJojos50Stages, 0x51 },
    { L"Surburbs 1 / 2 / 3 TS (16/22)", 0x2e4100, 0x2e4300, indexJojos50Stages, 0x52 },
    { L"Surburbs 1 / 2 / 3 TS (17/22)", 0x2e4300, 0x2e4500, indexJojos50Stages, 0x53 },
    { L"Surburbs 1 / 2 / 3 TS (18/22)", 0x2e4500, 0x2e4700, indexJojos50Stages, 0x54 },
    { L"Surburbs 1 / 2 / 3 TS (19/22)", 0x2e4700, 0x2e4900, indexJojos50Stages, 0x55 },
    { L"Surburbs 1 / 2 / 3 TS (20/22)", 0x2e4900, 0x2e4b00, indexJojos50Stages, 0x56 },
    { L"Surburbs 1 / 2 / 3 TS (21/22)", 0x2e4b00, 0x2e4d00, indexJojos50Stages, 0x57 },
    { L"Surburbs 1 / 2 / 3 TS (22/22)", 0x2e4d00, 0x2e4f00 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_OBRIDGE[] =
{
    { L"On the Bridge TS (1/2)", 0x2e4f00, 0x2e5100, indexJojos50Stages, 0x03, &pairFullyLinkedNode },
    { L"On the Bridge TS (2/2)", 0x2e5100, 0x2e5300, indexJojos50Stages, 0x04 },
};

const sDescTreeNode JOJOS_TIMESTOP_COLLECTION[] =
{
    { L"A Lockup TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_ALOCKUP) },
    { L"A Health Room TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HEALTH, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HEALTH) },
    { L"In A Airplane TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_AIRPLANE) },
    { L"Tigerbaum Garden TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_TIGERBAUM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_TIGERBAUM) },
    { L"Hotel (Devil) / New 2 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELD, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELD) },
    { L"Remains / New 1 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_REMAINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_REMAINS) },
    { L"Hotel (Justice) TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELJ) },
    { L"Small Island / New 3 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SISLAND, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SISLAND) },
    { L"Desert Morning TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DMORN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DMORN) },
    { L"Desert Noon TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNOON, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNOON) },
    { L"Desert Night TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNIGHT) },
    { L"Ruins / New 4 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_RUINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_RUINS) },
    { L"Country Town Noon / Twilight / Night TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWN) },
    { L"Underground Water / New 5", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_UWATER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_UWATER) },
    { L"Inside House / New 6", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_INHOUSE) },
    { L"Coffin Room / New 7 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CROOM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CROOM) },
    { L"Clock Tower / New 8", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWER) },
    { L"Suburbs 1", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SUBURB, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SUBURB) },
    { L"On The Bridge", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_OBRIDGE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_OBRIDGE) },
};

#pragma endregion Timestop

#pragma region StoryMode

const sGame_PaletteDataset JOJOS_A_JOTARO_STORY_PALETTES[] =
{
    { L"Imprisoned Jotaro", 0x02e8400, 0x02e8500 },
    { L"Lockdown Staredown", 0x2ec000, 0x2ec080 },
    { L"Jotaro Staring at DIO (Unused)", 0x2fb580, 0x2fb600 }
};

const sGame_PaletteDataset JOJOS_A_KAKYOIN_STORY_PALETTES[] =
{
    { L"Scared Kakyoin", 0x02e9b00, 0x02e9b80 },
    { L"Shadow Dio Smirk", 0x02e9b80, 0x02e9c00 },
    { L"Fleshbud Scene", 0x02e9e00, 0x02ea000 },
    { L"Fleshbud Scene (Background)", 0x02ea000, 0x2ea020 },
    { L"Kakyoin 20M Emerald Splash", 0x2ea080, 0x2ea100 },
};

const sGame_PaletteDataset JOJOS_A_AVDOL_STORY_PALETTES[] =
{
    { L"Imprisoned Jotaro", 0x2ebf00, 0x2ec000 },
    { L"Avdol Airport Cutscene Portrait", 0x2ec200, 0x2ec280 },
    { L"Holly and Joseph Airport Cutscene", 0x2ec100, 0x2ec180 },
    { L"Holly and Joseph Airport Cutscene BG", 0x2ec180, 0x2ec200 },
};

// nearly complete, still needs the bg location for Polnareff Joining DIO and DIO Stab (might have shared bg)
const sGame_PaletteDataset JOJOS_A_POL_STORY_PALETTES[] =
{
    { L"Polnareff in Cairo", 0x2ecf00, 0x2ecf80 },
    { L"Polnareff in Cairo BG", 0x2ed180, 0x2ed280 },
    { L"DIO Alluring Polnareff", 0x2ed100, 0x2ed180 },
    { L"Polnareff Joining DIO", 0x2ed280, 0x2ed300 },
    { L"Polnareff Starting His Journey", 0x2ed380, 0x2ed400 },
    // seperate and pair instead?
    { L"Polnareff Stabbing DIO", 0x2ed300, 0x2ed380 },
};

// complete
const sGame_PaletteDataset JOJOS_A_MIDLER_STORY_PALETTES[] =
{
    // pair these 2 when previews roll out
    { L"Midler With Cup Face", 0x2f7f80, 0x2f8000 },
    { L"Midler With Cup Body", 0x2e5680, 0x2e5780 },
    { L"Midler With Cup High Priestess", 0x2f8080, 0x2f8100 },
    { L"Midler Near DIO's Mansion", 0x2f7e00, 0x2f7e80 },
    { L"DIO Point", 0x305a00, 0x305a80 },
    { L"Midler Facing DIO ", 0x305a80, 0x305b00 },
    { L"Midler Facing DIO BG", 0x305B62, 0x305B80 },
    { L"Midler & DIO Ending Portrait", 0x2e6300, 0x2e6500 },
};

// needs bg for alessi running
const sGame_PaletteDataset JOJOS_A_YOJO_STORY_PALETTES[] =
{
    { L"Young Joseph Chasing Alessi", 0x2fc480, 0x2fc500 },
    { L"Alessi Being Chased By Joseph", 0x2fc380, 0x2fc400 },
    { L"Young Joseph Chasing Alessi BG", 0x2fc300, 0x2fc380 },
    { L"Alessi Running Away", 0x2fc400, 0x2fc480 },
    { L"Joseph Reunited With The Crusaders 1/2", 0x2fc580, 0x2fc780 },
    { L"Joseph Reunited With The Crusaders 2/2", 0x2fc780, 0x2fc800 },
    { L"Joseph Reunited With The Crusaders BG", 0x2fc800, 0x2fc880 },
};

// complete
const sGame_PaletteDataset JOJOS_A_HOL_STORY_PALETTES[] =
{
    { L"Hol Horse Intro Scene", 0x2fb900, 0x2fb980 },
    { L"Hol Horse Intro Scene BG", 0x2fb880, 0x2fb900 },
    { L"J. Geil (Intro Scene)", 0x2fbb00, 0x2fbb80 },
    // ending scene
    { L"Hol Horse Standing Over DIO", 0x2fb980, 0x2fba00 },
    { L"Defeated Shadow DIO", 0x2fba00, 0x2fba80 },
    { L"Defeated Shadow DIO BG", 0x2fba80, 0x2fbb00 },
    { L"Hol Horse Ending Portrait", 0x2fbb80, 0x2fbc00 },
};

// complete
const sGame_PaletteDataset JOJOS_A_VICE_STORY_PALETTES[] =
{
    { L"Decapitated Vanilla Ice", 0x2fbc80, 0x2fbd00 },
    { L"Vanilla Ice Bowing to DIO", 0x2fbd00, 0x2fbd80 },
    // Not sure how this'll be handled in paired code, maybe like sfiii alex flash chop?
    { L"Decapitated/Bowing Vanilla Ice BG", 0x2fbd80, 0x2fbdc0 },
    { L"Vanilla Ice Ending Portrait", 0x2fbe00, 0x2fbe80 },
};

// complete
const sGame_PaletteDataset JOJOS_A_MARIAH_STORY_PALETTES[] =
{
    { L"Mariah Intro Scene Portrait", 0x2fc980, 0x2fca00 },
    { L"Mariah Ending Scene Portrait", 0x2fc900, 0x2fc980 },
};

// complete
const sGame_PaletteDataset JOJOS_A_KHAN_STORY_PALETTES[] =
{
    { L"Khan Intro Scene Portrait", 0x2fd480, 0x2fd500 },
    { L"Khan Ending Scene Portrait", 0x2fd500, 0x2fd580 },
};

const sGame_PaletteDataset JOJOS_A_SHARED_STORY_PALETTES[] =
{
    { L"DIO's Curse (Crusaders)", 0x2ea400, 0x2ea480 },
    { L"Crusaders Off to Egypt (Crusaders)", 0x2e7600, 0x2e7800 },
    { L"DIO's Mansion 1/2", 0x2e5e80, 0x2e6080 },
    { L"DIO's Mansion 2/2", 0x2e6080, 0x2e6180 },
    { L"Crusaders Coffin Scene", 0x2eb680, 0x2eb880 },
    { L"Nukesaku In The Coffin", 0x2eb580, 0x2eb600 },
    { L"Nukesaku In The Coffin BG", 0x2eb600, 0x2eb680 },
    { L"Cloaked DIO 1/2", 0x2eba00, 0x2ebc00 },
    { L"Cloaked DIO 2/2", 0x2ebc00, 0x2ebd00 },
};

const sDescTreeNode JOJOS_A_STORYMODE_COLLECTION[] =
{
    { L"Jotaro", DESC_NODETYPE_TREE, (void*)JOJOS_A_JOTARO_STORY_PALETTES, ARRAYSIZE(JOJOS_A_JOTARO_STORY_PALETTES) },
    { L"Kakyoin", DESC_NODETYPE_TREE, (void*)JOJOS_A_KAKYOIN_STORY_PALETTES, ARRAYSIZE(JOJOS_A_KAKYOIN_STORY_PALETTES) },
    { L"Avdol", DESC_NODETYPE_TREE, (void*)JOJOS_A_AVDOL_STORY_PALETTES, ARRAYSIZE(JOJOS_A_AVDOL_STORY_PALETTES) },
    { L"Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_POL_STORY_PALETTES, ARRAYSIZE(JOJOS_A_POL_STORY_PALETTES) },
    { L"Midler", DESC_NODETYPE_TREE, (void*)JOJOS_A_MIDLER_STORY_PALETTES, ARRAYSIZE(JOJOS_A_MIDLER_STORY_PALETTES) },
    { L"Young Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_YOJO_STORY_PALETTES, ARRAYSIZE(JOJOS_A_YOJO_STORY_PALETTES) },
    { L"Hol Horse", DESC_NODETYPE_TREE, (void*)JOJOS_A_HOL_STORY_PALETTES, ARRAYSIZE(JOJOS_A_HOL_STORY_PALETTES) },
    { L"Vanilla Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_VICE_STORY_PALETTES, ARRAYSIZE(JOJOS_A_VICE_STORY_PALETTES) },
    { L"Mariah", DESC_NODETYPE_TREE, (void*)JOJOS_A_MARIAH_STORY_PALETTES, ARRAYSIZE(JOJOS_A_MARIAH_STORY_PALETTES) },
    { L"Khan", DESC_NODETYPE_TREE, (void*)JOJOS_A_KHAN_STORY_PALETTES, ARRAYSIZE(JOJOS_A_KHAN_STORY_PALETTES) },
    { L"Shared Aspects", DESC_NODETYPE_TREE, (void*)JOJOS_A_SHARED_STORY_PALETTES, ARRAYSIZE(JOJOS_A_SHARED_STORY_PALETTES) },
};

#pragma endregion StoryMode

const sDescTreeNode JOJOS_UNITS_50[] =
{
    { L"HUD", DESC_NODETYPE_TREE,           (void*)JOJOS_A_50_HUD_COLLECTION, ARRAYSIZE(JOJOS_A_50_HUD_COLLECTION) },
    { L"HUD Portraits", DESC_NODETYPE_TREE, (void*)JOJOS_A_50_HUD_PORTRAIT_COLLECTION, ARRAYSIZE(JOJOS_A_50_HUD_PORTRAIT_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE,        (void*)JOJOS_A_50_STAGE_COLLECTION, ARRAYSIZE(JOJOS_A_50_STAGE_COLLECTION) },
};

// We use keyword names for all palette units that do NOT have a regulation off/regulation on mirroring
// See usage in the CPP file
#define k_pszTimeStopName       L"Timestop Stages"
#define k_pszBonusPalettesName  L"Bonus Palettes"
#define k_pszStoryModeName      L"Story Mode"

const sDescTreeNode JOJOS_UNITS_51[] =
{
    { L"Jotaro",                    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOTARO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOTARO) },
    { L"Kakyoin",                   DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT) },
    { L"Avdol",                     DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_AVDOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_AVDOL) },
    { L"Polnareff",                 DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_POL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_POL) },
    { L"Joseph",                    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOSEPH) },
    { L"Iggy & The Fool",           DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_IGGY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_IGGY) },
    { L"Alessi",                    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_ALESSI, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_ALESSI) },
    { L"Chaka",                     DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_CHAKA, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_CHAKA) },
    { L"Devo",                      DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY) },
    { L"Midler & High Priestess",   DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MIDLER, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MIDLER) },
    { L"DIO & The World",           DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DIO) },
    { L"Shadow Dio & The World",    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SDIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SDIO) },
    { L"Young Joseph",              DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_YJOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_YJOSEPH) },
    { L"Hol Horse",                 DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOL) },
    { L"Vanilla Ice",               DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_VICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_VICE) },
    { L"New Kakyoin",               DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIERO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIERO) },
    { L"Anubis Polnareff",          DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BPOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BPOL) },
    { L"Petshop",                   DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SHOP, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SHOP) },
    { L"Mariah",                    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MARIAH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MARIAH) },
    { L"Hol Horse & Boingo",        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO) },
    { L"Rubber Soul",               DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_RSOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_RSOUL) },
    { L"Khan",                      DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_KHAN, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_KHAN) },
    { L"N'Doul",                    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_NDOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_NDOUL) },
    { L"Boss Ice",                  DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BICE) },
    { L"Death 13",                  DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEATH13, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEATH13) },
    { L"Unimplemented: Gray Fly",   DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_GRAYFLY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_GRAYFLY) },
    { k_pszTimeStopName,            DESC_NODETYPE_TREE, (void*)JOJOS_TIMESTOP_COLLECTION, ARRAYSIZE(JOJOS_TIMESTOP_COLLECTION) },
    { k_pszStoryModeName,           DESC_NODETYPE_TREE, (void*)JOJOS_A_STORYMODE_COLLECTION, ARRAYSIZE(JOJOS_A_STORYMODE_COLLECTION)},
    { k_pszBonusPalettesName,       DESC_NODETYPE_TREE, (void*)JOJOS_A_BONUS_COLLECTION, ARRAYSIZE(JOJOS_A_BONUS_COLLECTION) },
};

constexpr auto JOJOS_A_NUMUNIT_50 = ARRAYSIZE(JOJOS_UNITS_50);
constexpr auto JOJOS_A_NUMUNIT_51 = ARRAYSIZE(JOJOS_UNITS_51);

constexpr auto JOJOS_A_EXTRALOC_50 = JOJOS_A_NUMUNIT_50;
constexpr auto JOJOS_A_EXTRALOC_51 = JOJOS_A_NUMUNIT_51;

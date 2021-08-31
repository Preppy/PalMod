#pragma once

#if NEED_TO_UPDATE_JOJO_HEADERS
#define USE_LARGE_PALETTES
#endif

// Saving these for ... later:

//{ L"Coffin Scene: Crusaders", 0x02eb680, 0x02eb880 },
//{ L"Jotaro Story: Imprisoned Jotaro", 0x02E8400, 0x02E8500, indexJojos51StoryMode, 0x00 },
//{ L"Jotaro Story: Scared Holly", 0x02e8380, 0x02E8400 },
//{ L"Joseph Story: \"Let's Go!\"", 0x02e7600, 0x02e7800 },
//{ L"Midler Story Ending", 0x02E6300, 0x02E6500 },
//{ L"Lockdown Staredown (Jotaro)", 0x2ec000, 0x2ec080 },

// Selector Arrows: , indexJojos51Bonus, 0x47
// JoJo_Story - DIOPoint             || 0x1F - 0x01
// JoJo_Story - ScaredKakyoin || 0x1F - 0x02
// JoJo_Story - ShadowDIOStanding || 0x1F - 0x03

const stPairedPaletteInfo pairCoffinRoom = { 1, 31, -32 };

const WCHAR JOJOS_A_UNITDESC_50[][32] =
{
    L"HUD",           // JOJOS_A_50_HUD_COLLECTION
    L"HUD Portraits", // JOJOS_A_50_HUD_PORTRAIT_COLLECTION
    L"Stages",        // JOJOS_A_50_STAGE_COLLECTION
};

const WCHAR JOJOS_A_UNITDESC_51[][32] =
{
    L"Jotaro", // JOJOS_A_CHARACTER_COLLECTION_JOTARO
    L"Kakyoin", // JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT
    L"Avdol", // JOJOS_A_CHARACTER_COLLECTION_AVDOL
    L"Polnareff", // JOJOS_A_CHARACTER_COLLECTION_POL
    L"Joseph", // JOJOS_A_CHARACTER_COLLECTION_JOSEPH
    L"Iggy", // JOJOS_A_CHARACTER_COLLECTION_IGGY
    L"Alessi", // JOJOS_A_CHARACTER_COLLECTION_ALESSI
    L"Chaka", // JOJOS_A_CHARACTER_COLLECTION_CHAKA
    L"Devo", // JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY
    L"Midler", // JOJOS_A_CHARACTER_COLLECTION_MIDLER
    L"DIO", // JOJOS_A_CHARACTER_COLLECTION_DIO
    L"Shadow Dio", // JOJOS_A_CHARACTER_COLLECTION_SDIO
    L"Young Joseph", // JOJOS_A_CHARACTER_COLLECTION_YJOSEPH
    L"Hol Horse", // JOJOS_A_CHARACTER_COLLECTION_HOL
    L"Vanilla Ice", // JOJOS_A_CHARACTER_COLLECTION_VICE
    L"New Kakyoin", // JOJOS_A_CHARACTER_COLLECTION_HIERO
    L"Anubis Polnareff", // JOJOS_A_CHARACTER_COLLECTION_BPOL
    L"Petshop", // JOJOS_A_CHARACTER_COLLECTION_SHOP
    L"Mariah", // JOJOS_A_CHARACTER_COLLECTION_MARIAH
    L"Hol Horse & Boingo", // JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO
    L"Rubber Soul", // JOJOS_A_CHARACTER_COLLECTION_RSOUL
    L"Khan", // JOJOS_A_CHARACTER_COLLECTION_KHAN
    L"N'Doul and Geb", // JOJOS_A_CHARACTER_COLLECTION_NDOUL
    L"Boss Ice", // JOJOS_A_CHARACTER_COLLECTION_BICE
    L"Death 13", // JOJOS_A_CHARACTER_COLLECTION_DEATH13
    L"Unimplemented: Gray Fly", // JOJOS_A_CHARACTER_COLLECTION_GRAYFLY
    L"Timestop", // JOJOS_TIMESTOP_COLLECTION
    L"Bonus Palettes", // JOJOS_A_BONUS_COLLECTION
};

constexpr auto JOJOS_A_NUMUNIT_50 = ARRAYSIZE(JOJOS_A_UNITDESC_50);
constexpr auto JOJOS_A_NUMUNIT_51 = ARRAYSIZE(JOJOS_A_UNITDESC_51);

#define JOJOS_A_EXTRALOC_50 JOJOS_A_NUMUNIT_50
#define JOJOS_A_EXTRALOC_51 JOJOS_A_NUMUNIT_51

const UINT16 JOJOS_A_IMGIDS_USED[] =
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
    { L"Jotaro A Life Bar Portrait", 0x07C0400, 0x07C0420, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro B Life Bar Portrait", 0x07C0420, 0x07C0440, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro C Life Bar Portrait", 0x07C0C00, 0x07C0C20, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro S Life Bar Portrait", 0x07C0C20, 0x07C0C40, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro Start Life Bar Portrait", 0x07C0C40, 0x07C0C60, indexJojos50HUDPortraits, indexJojos51Jotaro },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES[] =
{
    { L"Kakyoin A Life Bar Portrait", 0x07C0440, 0x07C0460, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin B Life Bar Portrait", 0x07C0460, 0x07C0480, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin C Life Bar Portrait", 0x07C0C60, 0x07C0C80, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin S Life Bar Portrait", 0x07C0C80, 0x07C0CA0, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin Start Life Bar Portrait", 0x07C0CA0, 0x07C0CC0, indexJojos50HUDPortraits, indexJojos51Kakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DIO_PALETTES[] =
{
    { L"DIO A Life Bar Portrait", 0x07C0480, 0x07C04A0, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO B Life Bar Portrait", 0x07C04A0, 0x07C04C0, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO C Life Bar Portrait", 0x07C14C0, 0x07C14E0, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO S Life Bar Portrait", 0x07C14E0, 0x07C1500, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO Start Life Bar Portrait", 0x07C1500, 0x07C1520, indexJojos50HUDPortraits, indexJojos51Dio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES[] =
{
    { L"Chaka A Life Bar Portrait", 0x07C04C0, 0x07C04E0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka B Life Bar Portrait", 0x07C04E0, 0x07C0500, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka C Life Bar Portrait", 0x07C0F60, 0x07C0F80, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka S Life Bar Portrait", 0x07C0F80, 0x07C0FA0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka Start Life Bar Portrait", 0x07C0FA0, 0x07C0FC0, indexJojos50HUDPortraits, indexJojos51Chaka },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES[] =
{
    { L"Iggy A Life Bar Portrait", 0x07C0500, 0x07C0520, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy B Life Bar Portrait", 0x07C0520, 0x07C0540, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy C Life Bar Portrait", 0x07C0DE0, 0x07C0E00, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy S Life Bar Portrait", 0x07C0E00, 0x07C0E20, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy Start Life Bar Portrait", 0x07C0E20, 0x07C0E40, indexJojos50HUDPortraits, indexJojos51Iggy },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES[] =
{
    { L"Petshop A Life Bar Portrait", 0x07C0540, 0x07C0560, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop B Life Bar Portrait", 0x07C0560, 0x07C0580, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop C Life Bar Portrait", 0x07C1800, 0x07C1820, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop S Life Bar Portrait", 0x07C1820, 0x07C1840, indexJojos50HUDPortraits, indexJojos51Petshop },
    { L"Petshop Start Life Bar Portrait", 0x07C1840, 0x07C1860, indexJojos50HUDPortraits, indexJojos51Petshop },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES[] =
{
    { L"Polnareff A Life Bar Portrait", 0x07C0580, 0x07C05A0, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff B Life Bar Portrait", 0x07C05A0, 0x07C05C0, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff C Life Bar Portrait", 0x07C0D20, 0x07C0D40, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff S Life Bar Portrait", 0x07C0D40, 0x07C0D60, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff Start Life Bar Portrait", 0x07C0D60, 0x07C0D80, indexJojos50HUDPortraits, indexJojos51Pol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES[] =
{
    { L"Joseph A Life Bar Portrait", 0x07C05C0, 0x07C05E0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph B Life Bar Portrait", 0x07C05E0, 0x07C0600, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph C Life Bar Portrait", 0x07C0D80, 0x07C0DA0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph S Life Bar Portrait", 0x07C0DA0, 0x07C0DC0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph Start Life Bar Portrait", 0x07C0DC0, 0x07C0DE0, indexJojos50HUDPortraits, indexJojos51Joseph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES[] =
{
    { L"Avdol A Life Bar Portrait", 0x07C0600, 0x07C0620, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol B Life Bar Portrait", 0x07C0620, 0x07C0640, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol C Life Bar Portrait", 0x07C0CC0, 0x07C0CE0, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol S Life Bar Portrait", 0x07C0CE0, 0x07C0D00, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol Start Life Bar Portrait", 0x07C0D00, 0x07C0D20, indexJojos50HUDPortraits, indexJojos51Avdol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES[] =
{
    { L"Alessi A Life Bar Portrait", 0x07C0640, 0x07C0660, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi B Life Bar Portrait", 0x07C0660, 0x07C0680, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi C Life Bar Portrait", 0x07C0F00, 0x07C0F20, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi S Life Bar Portrait", 0x07C0F20, 0x07C0F40, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi Start Life Bar Portrait", 0x07C0F40, 0x07C0F60, indexJojos50HUDPortraits, indexJojos51Alessi },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES[] =
{
    { L"Devo A Life Bar Portrait", 0x07C06C0, 0x07C06E0, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo B Life Bar Portrait", 0x07C06E0, 0x07C0700, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo C Life Bar Portrait", 0x07C1400, 0x07C1420, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo S Life Bar Portrait", 0x07C1420, 0x07C1440, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo Start Life Bar Portrait", 0x07C1440, 0x07C1460, indexJojos50HUDPortraits, indexJojos51Devo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES[] =
{
    { L"Vanilla Ice A Life Bar Portrait", 0x07C0740, 0x07C0760, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice B Life Bar Portrait", 0x07C0760, 0x07C0780, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice C Life Bar Portrait", 0x07C1520, 0x07C1540, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice S Life Bar Portrait", 0x07C1540, 0x07C1560, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Vanilla Ice Start Life Bar Portrait", 0x07C1560, 0x07C1580, indexJojos50HUDPortraits, indexJojos51VIce },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOL_PALETTES[] =
{
    { L"Hol Horse A Life Bar Portrait", 0x07C0780, 0x07C07A0, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse B Life Bar Portrait", 0x07C07A0, 0x07C07C0, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse C Life Bar Portrait", 0x07C1640, 0x07C1660, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse S Life Bar Portrait", 0x07C1660, 0x07C1680, indexJojos50HUDPortraits, indexJojos51Hol },
    { L"Hol Horse Start Life Bar Portrait", 0x07C1680, 0x07C16A0, indexJojos50HUDPortraits, indexJojos51Hol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES[] =
{
    { L"Midler A Life Bar Portrait", 0x07C08C0, 0x07C08E0, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler B Life Bar Portrait", 0x07C08E0, 0x07C0900, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler C Life Bar Portrait", 0x07C1460, 0x07C1480, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler S Life Bar Portrait", 0x07C1480, 0x07C14A0, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler Start Life Bar Portrait", 0x07C14A0, 0x07C14C0, indexJojos50HUDPortraits, indexJojos51Midler },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES[] =
{
    { L"Mariah A Life Bar Portrait", 0x07C0900, 0x07C0920, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah B Life Bar Portrait", 0x07C0920, 0x07C0940, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah C Life Bar Portrait", 0x07C1860, 0x07C1880, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah S Life Bar Portrait", 0x07C1880, 0x07C18A0, indexJojos50HUDPortraits, indexJojos51Mariah },
    { L"Mariah Start Life Bar Portrait", 0x07C18A0, 0x07C18C0, indexJojos50HUDPortraits, indexJojos51Mariah },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES[] =
{
    { L"Young Joseph A Life Bar Portrait", 0x07C0B60, 0x07C0B80, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph B Life Bar Portrait", 0x07C0B80, 0x07C0BA0, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph C Life Bar Portrait", 0x07C15E0, 0x07C1600, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph S Life Bar Portrait", 0x07C1600, 0x07C1620, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph Start Life Bar Portrait", 0x07C1620, 0x07C1640, indexJojos50HUDPortraits, indexJojos51YSeph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES[] =
{
    { L"Shadow Dio A Life Bar Portrait", 0x07C0BA0, 0x07C0BC0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio B Life Bar Portrait", 0x07C0BC0, 0x07C0BE0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio C Life Bar Portrait", 0x07C1580, 0x07C15A0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio S Life Bar Portrait", 0x07C15A0, 0x07C15C0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow Dio Start Life Bar Portrait", 0x07C15C0, 0x07C15E0, indexJojos50HUDPortraits, indexJojos51SDio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES[] =
{
    { L"New Kakyoin A / B / Start Life Bar Portrait", 0x07C16E0, 0x07C1700, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { L"New Kakyoin C Life Bar Portrait", 0x07C16A0, 0x07C16C0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { L"New Kakyoin S Life Bar Portrait", 0x07C16C0, 0x07C16E0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_APOL_PALETTES[] =
{
    { L"Anubis Polnareff A Life Bar Portrait", 0x07C1700, 0x07C1720, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff B Life Bar Portrait", 0x07C1720, 0x07C1740, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff C Life Bar Portrait", 0x07C1740, 0x07C1760, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff S Life Bar Portrait", 0x07C1760, 0x07C1780, indexJojos50HUDPortraits, indexJojos51Anubis },
    { L"Anubis Polnareff Start Life Bar Portrait", 0x07C1780, 0x07C17A0, indexJojos50HUDPortraits, indexJojos51Anubis },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES[] =
{
    { L"Hol Horse & Boingo A Life Bar Portrait", 0x07C18C0, 0x07C18E0, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo B Life Bar Portrait", 0x07C18E0, 0x07C1900, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo C Life Bar Portrait", 0x07C1900, 0x07C1920, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo S Life Bar Portrait", 0x07C1920, 0x07C1940, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { L"Hol Horse & Boingo Start Life Bar Portrait", 0x07C1940, 0x07C1960, indexJojos50HUDPortraits, indexJojos51HolBoingo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES[] =
{
    { L"Rubber Soul A Life Bar Portrait", 0x07C1960, 0x07C1980, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul B Life Bar Portrait", 0x07C1980, 0x07C19A0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul C Life Bar Portrait", 0x07C19A0, 0x07C19C0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul S Life Bar Portrait", 0x07C19C0, 0x07C19E0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { L"Rubber Soul Start Life Bar Portrait", 0x07C19E0, 0x07C1A00, indexJojos50HUDPortraits, indexJojos51RSoul },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES[] =
{
    { L"Khan A Life Bar Portrait", 0x07C1A00, 0x07C1A20, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan B Life Bar Portrait", 0x07C1A20, 0x07C1A40, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan C Life Bar Portrait", 0x07C1A40, 0x07C1A60, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan S Life Bar Portrait", 0x07C1A60, 0x07C1A80, indexJojos50HUDPortraits, indexJojos51Khan },
    { L"Khan Start Life Bar Portrait", 0x07C1A80, 0x07C1AA0, indexJojos50HUDPortraits, indexJojos51Khan },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES[] =
{
    { L"Death 13 A Life Bar Portrait", 0x07C0800, 0x07C0820, indexJojos51Death13, 0x20 },
    { L"Death 13 B Life Bar Portrait", 0x07C0820, 0x07C0840, indexJojos51Death13, 0x20 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES[] =
{
    { L"N'Doul A Life Bar Portrait", 0x07C0840, 0x07C0860, indexJojos50HUDPortraits, indexJojos51NDoul },
    { L"N'Doul B Life Bar Portrait", 0x07C0860, 0x07C0880, indexJojos50HUDPortraits, indexJojos51NDoul },
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
    { L"Round Markers", 0x07C0160, 0x07C0180, indexJojos51Bonus, 0x28, &pairHandledInCode },
    { L"Timer", 0x07C00C0, 0x07C00E0, indexJojos51Bonus, 0x2b },
    { L"Lifebar", 0x07C01E0, 0x07C0200, indexJojos51Bonus, 0x27 },
    { L"Stand Meter", 0x07C0200, 0x07C0220, indexJojos51Bonus, 0x29 },
    { L"Stand Text Under The Stand Gauge", 0x07C0320, 0x07C0340, indexJojos51Bonus, 0x2a },
    { L"Combo Meter", 0x07C01C0, 0x07C01E0, indexJojos51Bonus, 0x44 },
    { L"Combo Messages", 0x07C0220, 0x07C0240 },
    { L"Text Above The Lifebars",  0x07C0280, 0x07C02A0 }, // Could use 0x2a sprite here
    { L"Stand Crash / First Hit / Etc. Messages", 0x07C0340, 0x07C0360 },
    { L"Stand Meter / Near Stand Break", 0x07C0B20, 0x07C0B60, indexJojos51Bonus, 0x43 },
    { L"Super Meter Bar", 0x07C03A0, 0x07C0400, indexJojos51Bonus, 0x42 },
    { L"Mariah Level (Player 1 only)", 0x07C01A0, 0x07C01C0 },
    { L"Dev-menu Font Color", 0x07C0000, 0x07C0020 },
    { L"Player 1 and 2 counter icons", 0x07C02E0, 0x07C0320, indexJojos51Bonus, 0x26 },
};

const sDescTreeNode JOJOS_A_50_HUD_COLLECTION[]
{
    { L"Palette", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PALETTE_NODES, ARRAYSIZE(JOJOS_A_HUD_PALETTE_NODES) },
};
#pragma endregion HUD

#pragma region Stages

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_ALOCKUP[] =
{
    { L"A Lockup (1/7)", 0x07c3000, 0x07c3200 },
    { L"A Lockup (2/7)", 0x07c3200, 0x07c3400 },
    { L"A Lockup (3/7)", 0x07c3400, 0x07c3600 },
    { L"A Lockup (4/7)", 0x07c3600, 0x07c3800 },
    { L"A Lockup (5/7)", 0x07c3800, 0x07c3a00 },
    { L"A Lockup (6/7)", 0x07c3a00, 0x07c3c00 },
    { L"A Lockup (7/7)", 0x07c3c00, 0x07c3d80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AHEALTHROOM[] =
{
    { L"A Health Room (1/6)", 0x07c3e00, 0x07c4000, indexJojos50Stages, 0x2e, &pairFullyLinkedNode },
    { L"A Health Room (2/6)", 0x07c4000, 0x07c4200, indexJojos50Stages, 0x2f },
    { L"A Health Room (3/6)", 0x07c4200, 0x07c4400, indexJojos50Stages, 0x30 },
    { L"A Health Room (4/6)", 0x07c4400, 0x07c4600, indexJojos50Stages, 0x31 },
    { L"A Health Room (5/6)", 0x07c4600, 0x07c4800, indexJojos50Stages, 0x32 },
    { L"A Health Room (6/6)", 0x07c4800, 0x07c4900, indexJojos50Stages, 0x33 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AIRPLANE[] =
{
    { L"In A Airplane (1/17)", 0x07c4a00, 0x07c4c00 },
    { L"In A Airplane (2/17)", 0x07c4c00, 0x07c4e00 },
    { L"In A Airplane (3/17)", 0x07c4e00, 0x07c5000 },
    { L"In A Airplane (4/17)", 0x07c5000, 0x07c5200 },
    { L"In A Airplane (5/17)", 0x07c5200, 0x07c5400 },
    { L"In A Airplane (6/17)", 0x07c5400, 0x07c5600 },
    { L"In A Airplane (7/17)", 0x07c5600, 0x07c5800 },
    { L"In A Airplane (8/17)", 0x07c5800, 0x07c5a00 },
    { L"In A Airplane (9/17)", 0x07c5a00, 0x07c5c00 },
    { L"In A Airplane (10/17)", 0x07c5c00, 0x07c5e00 },
    { L"In A Airplane (11/17)", 0x07c5e00, 0x07c6000 },
    { L"In A Airplane (12/17)", 0x07c6000, 0x07c6200 },
    { L"In A Airplane (13/17)", 0x07c6200, 0x07c6400 },
    { L"In A Airplane (14/17)", 0x07c6400, 0x07c6600 },
    { L"In A Airplane (15/17)", 0x07c6600, 0x07c6800 },
    { L"In A Airplane (16/17)", 0x07c6800, 0x07c6a00 },
    { L"In A Airplane (17/17)", 0x07c6a00, 0x07c6b80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_TGARDEN[] =
{
    { L"Tigerbaum Garden (1/11)", 0x07c6c00, 0x07c6e00, indexJojos50Stages, 0x1e, &pairFullyLinkedNode },
    { L"Tigerbaum Garden (2/11)", 0x07c6e00, 0x07c7000, indexJojos50Stages, 0x1f },
    { L"Tigerbaum Garden (3/11)", 0x07c7000, 0x07c7200, indexJojos50Stages, 0x20 },
    { L"Tigerbaum Garden (4/11)", 0x07c7200, 0x07c7400, indexJojos50Stages, 0x21 },
    { L"Tigerbaum Garden (5/11)", 0x07c7400, 0x07c7600, indexJojos50Stages, 0x22 },
    { L"Tigerbaum Garden (6/11)", 0x07c7600, 0x07c7800, indexJojos50Stages, 0x23 },
    { L"Tigerbaum Garden (7/11)", 0x07c7800, 0x07c7a00, indexJojos50Stages, 0x24 },
    { L"Tigerbaum Garden (8/11)", 0x07c7a00, 0x07c7c00, indexJojos50Stages, 0x25 },
    { L"Tigerbaum Garden (9/11)", 0x07c7c00, 0x07c7e00, indexJojos50Stages, 0x26 },
    { L"Tigerbaum Garden (10/11)", 0x07c7e00, 0x07c8000, indexJojos50Stages, 0x27 },
    { L"Tigerbaum Garden (11/11)", 0x07c8000, 0x07c8200, indexJojos50Stages, 0x28 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELD[] =
{
    { L"Hotel (Devil) (1/7)", 0x07c8300, 0x07c8500, indexJojos50Stages, 0x11, &pairFullyLinkedNode },
    { L"Hotel (Devil) (2/7)", 0x07c8500, 0x07c8700, indexJojos50Stages, 0x12 },
    { L"Hotel (Devil) (3/7)", 0x07c8700, 0x07c8900, indexJojos50Stages, 0x13 },
    { L"Hotel (Devil) (4/7)", 0x07c8900, 0x07c8b00, indexJojos50Stages, 0x14 },
    { L"Hotel (Devil) (5/7)", 0x07c8b00, 0x07c8d00, indexJojos50Stages, 0x15 },
    { L"Hotel (Devil) (6/7)", 0x07c8d00, 0x07c8f00, indexJojos50Stages, 0x16 },
    { L"Hotel (Devil) (7/7)", 0x07c8f00, 0x07c9080, indexJojos50Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_REMAINS[] =
{
    { L"Remains (1/9)", 0x07c9f80, 0x07ca180 },
    { L"Remains (2/9)", 0x07ca180, 0x07ca380 },
    { L"Remains (3/9)", 0x07ca380, 0x07ca580 },
    { L"Remains (4/9)", 0x07ca580, 0x07ca780 },
    { L"Remains (5/9)", 0x07ca780, 0x07ca980 },
    { L"Remains (6/9)", 0x07ca980, 0x07cab80 },
    { L"Remains (7/9)", 0x07cab80, 0x07cad80 },
    { L"Remains (8/9)", 0x07cad80, 0x07caf80 },
    { L"Remains (9/9)", 0x07caf80, 0x07cb180 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELJ[] =
{
    { L"Hotel (Justice) (1/8)", 0x07cc500, 0x07cc700 },
    { L"Hotel (Justice) (2/8)", 0x07cc700, 0x07cc900 },
    { L"Hotel (Justice) (3/8)", 0x07cc900, 0x07ccb00 },
    { L"Hotel (Justice) (4/8)", 0x07ccb00, 0x07ccd00 },
    { L"Hotel (Justice) (5/8)", 0x07ccd00, 0x07ccf00 },
    { L"Hotel (Justice) (6/8)", 0x07ccf00, 0x07cd100 },
    { L"Hotel (Justice) (7/8)", 0x07cd100, 0x07cd300 },
    { L"Hotel (Justice) (8/8)", 0x07cd300, 0x07cd380 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AMPARK[] =
{
    { L"Amusement Park (1/27)", 0x07cd400, 0x07cd600 },
    { L"Amusement Park (2/27)", 0x07cd600, 0x07cd800 },
    { L"Amusement Park (3/27)", 0x07cd800, 0x07cda00 },
    { L"Amusement Park (4/27)", 0x07cda00, 0x07cdc00 },
    { L"Amusement Park (5/27)", 0x07cdc00, 0x07cde00 },
    { L"Amusement Park (6/27)", 0x07cde00, 0x07ce000 },
    { L"Amusement Park (7/27)", 0x07ce000, 0x07ce200 },
    { L"Amusement Park (8/27)", 0x07ce200, 0x07ce400 },
    { L"Amusement Park (9/27)", 0x07ce400, 0x07ce600 },
    { L"Amusement Park (10/27)", 0x07ce600, 0x07ce800 },
    { L"Amusement Park (11/27)", 0x07ce800, 0x07cea00 },
    { L"Amusement Park (12/27)", 0x07cea00, 0x07cec00 },
    { L"Amusement Park (13/27)", 0x07cec00, 0x07cee00 },
    { L"Amusement Park (14/27)", 0x07cee00, 0x07cf000 },
    { L"Amusement Park (15/27)", 0x07cf000, 0x07cf200 },
    { L"Amusement Park (16/27)", 0x07cf200, 0x07cf400 },
    { L"Amusement Park (17/27)", 0x07cf400, 0x07cf600 },
    { L"Amusement Park (18/27)", 0x07cf600, 0x07cf800 },
    { L"Amusement Park (19/27)", 0x07cf800, 0x07cfa00 },
    { L"Amusement Park (20/27)", 0x07cfa00, 0x07cfc00 },
    { L"Amusement Park (21/27)", 0x07cfc00, 0x07cfe00 },
    { L"Amusement Park (22/27)", 0x07cfe00, 0x07d0000 },
    { L"Amusement Park (23/27)", 0x07d0000, 0x07d0200 },
    { L"Amusement Park (24/27)", 0x07d0200, 0x07d0400 },
    { L"Amusement Park (25/27)", 0x07d0400, 0x07d0600 },
    { L"Amusement Park (26/27)", 0x07d0600, 0x07d0800 },
    { L"Amusement Park (27/27)", 0x07d0800, 0x07d0900 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLAND[] =
{
    { L"Small Island (1/6)", 0x07d0a00, 0x07d0c00, indexJojos50Stages, 0x18 },
    { L"Small Island (2/6)", 0x07d0c00, 0x07d0e00, indexJojos50Stages, 0x19 },
    { L"Small Island (3/6)", 0x07d0e00, 0x07d1000, indexJojos50Stages, 0x1A },
    { L"Small Island (4/6)", 0x07d1000, 0x07d1200, indexJojos50Stages, 0x1B },
    { L"Small Island (5/6)", 0x07d1200, 0x07d1400, indexJojos50Stages, 0x1C },
    { L"Small Island (6/6)", 0x07d1400, 0x07d1600, indexJojos50Stages, 0x1D },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNOON[] =
{
    { L"Desert Noon (1/7)", 0x07d3100, 0x07d3300, indexJojos50Stages, 0x0b },
    { L"Desert Noon (2/7)", 0x07d3300, 0x07d3500 },
    { L"Desert Noon (3/7)", 0x07d3500, 0x07d3700, indexJojos50Stages, 0x0c },
    { L"Desert Noon (4/7)", 0x07d3700, 0x07d3900 },
    { L"Desert Noon (5/7)", 0x07d3900, 0x07d3b00, indexJojos50Stages, 0x0d },
    { L"Desert Noon (6/7)", 0x07d3b00, 0x07d3d00, indexJojos50Stages, 0x0e },
    { L"Desert Noon (7/7)", 0x07d3d00, 0x07d3f00, indexJojos50Stages, 0x0f },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_RUIN[] =
{
    { L"Ruins (1/5)", 0x07d6d00, 0x07d6f00, indexJojos50Stages, 0x29, &pairFullyLinkedNode },
    { L"Ruins (2/5)", 0x07d6f00, 0x07d7100, indexJojos50Stages, 0x2a },
    { L"Ruins (3/5)", 0x07d7100, 0x07d7300, indexJojos50Stages, 0x2b },
    { L"Ruins (4/5)", 0x07d7300, 0x07d7500, indexJojos50Stages, 0x2c },
    { L"Ruins (5/5)", 0x07d7500, 0x07d7700, indexJojos50Stages, 0x2d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNOON[] =
{
    { L"Country Town Noon (1/21)", 0x07d8300, 0x07d8500 },
    { L"Country Town Noon (2/21)", 0x07d8500, 0x07d8700 },
    { L"Country Town Noon (3/21)", 0x07d8700, 0x07d8900 },
    { L"Country Town Noon (4/21)", 0x07d8900, 0x07d8b00 },
    { L"Country Town Noon (5/21)", 0x07d8b00, 0x07d8d00 },
    { L"Country Town Noon (6/21)", 0x07d8d00, 0x07d8f00 },
    { L"Country Town Noon (7/21)", 0x07d8f00, 0x07d9100 },
    { L"Country Town Noon (8/21)", 0x07d9100, 0x07d9300 },
    { L"Country Town Noon (9/21)", 0x07d9300, 0x07d9500 },
    { L"Country Town Noon (10/21)", 0x07d9500, 0x07d9700 },
    { L"Country Town Noon (11/21)", 0x07d9700, 0x07d9900 },
    { L"Country Town Noon (12/21)", 0x07d9900, 0x07d9b00 },
    { L"Country Town Noon (13/21)", 0x07d9b00, 0x07d9d00 },
    { L"Country Town Noon (14/21)", 0x07d9d00, 0x07d9f00 },
    { L"Country Town Noon (15/21)", 0x07d9f00, 0x07da100 },
    { L"Country Town Noon (16/21)", 0x07da100, 0x07da300 },
    { L"Country Town Noon (17/21)", 0x07da300, 0x07da500 },
    { L"Country Town Noon (18/21)", 0x07da500, 0x07da700 },
    { L"Country Town Noon (19/21)", 0x07da700, 0x07da900 },
    { L"Country Town Noon (20/21)", 0x07da900, 0x07dab00 },
    { L"Country Town Noon (21/21)", 0x07dab00, 0x07dac80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_UWATER[] =
{
    { L"Underground Water (1/8)", 0x07e0100, 0x07e0300 },
    { L"Underground Water (2/8)", 0x07e0300, 0x07e0500 },
    { L"Underground Water (3/8)", 0x07e0500, 0x07e0700 },
    { L"Underground Water (4/8)", 0x07e0700, 0x07e0900 },
    { L"Underground Water (5/8)", 0x07e0900, 0x07e0b00 },
    { L"Underground Water (6/8)", 0x07e0b00, 0x07e0d00 },
    { L"Underground Water (7/8)", 0x07e0d00, 0x07e0f00 },
    { L"Underground Water (8/8)", 0x07e0f00, 0x07e1100 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_INHOUSE[] =
{
    { L"Inside House (1/8)", 0x07e2300, 0x07e2500 },
    { L"Inside House (2/8)", 0x07e2500, 0x07e2700 },
    { L"Inside House (3/8)", 0x07e2700, 0x07e2900 },
    { L"Inside House (4/8)", 0x07e2900, 0x07e2b00 },
    { L"Inside House (5/8)", 0x07e2b00, 0x07e2d00 },
    { L"Inside House (6/8)", 0x07e2d00, 0x07e2f00 },
    { L"Inside House (7/8)", 0x07e2f00, 0x07e3100 },
    { L"Inside House (8/8)", 0x07e3100, 0x07e3200 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CROOM[] =
{
    { L"Coffin Room (1/6)", 0x07e4300, 0x07e4500, indexJojos50Stages, 0x5, &pairCoffinRoom },
    { L"Coffin Room (2/6)", 0x07e4500, 0x07e4700, indexJojos50Stages, 0x6 },
    { L"Coffin Room (3/6)", 0x07e4700, 0x07e4900, indexJojos50Stages, 0x7 },
    { L"Coffin Room (4/6)", 0x07e4900, 0x07e4b00, indexJojos50Stages, 0x8 },
    { L"Coffin Room (5/6)", 0x07e4b00, 0x07e4d00, indexJojos50Stages, 0x9 }, // This and the next are weird characters
    { L"Coffin Room (6/6)", 0x07e4d00, 0x07e4e00, indexJojos50Stages, 0xa },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CLOCK[] =
{
    { L"Clock Tower (1/3)", 0x07e5b00, 0x07e5d00, indexJojos50Stages, 0, &pairFullyLinkedNode },
    { L"Clock Tower (2/3)", 0x07e5d00, 0x07e5f00, indexJojos50Stages, 0x1 },
    { L"Clock Tower (3/3)", 0x07e5f00, 0x07e6100, indexJojos50Stages, 0x2 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB[] =
{
    { L"Suburbs (1/22)", 0x07e6900, 0x07e6b00 },
    { L"Suburbs (2/22)", 0x07e6b00, 0x07e6d00 },
    { L"Suburbs (3/22)", 0x07e6d00, 0x07e6f00 },
    { L"Suburbs (4/22)", 0x07e6f00, 0x07e7100 },
    { L"Suburbs (5/22)", 0x07e7100, 0x07e7300 },
    { L"Suburbs (6/22)", 0x07e7300, 0x07e7500 },
    { L"Suburbs (7/22)", 0x07e7500, 0x07e7700 },
    { L"Suburbs (8/22)", 0x07e7700, 0x07e7900 },
    { L"Suburbs (9/22)", 0x07e7900, 0x07e7b00 },
    { L"Suburbs (10/22)", 0x07e7b00, 0x07e7d00 },
    { L"Suburbs (11/22)", 0x07e7d00, 0x07e7f00 },
    { L"Suburbs (12/22)", 0x07e7f00, 0x07e8100 },
    { L"Suburbs (13/22)", 0x07e8100, 0x07e8300 },
    { L"Suburbs (14/22)", 0x07e8300, 0x07e8500 },
    { L"Suburbs (15/22)", 0x07e8500, 0x07e8700 },
    { L"Suburbs (16/22)", 0x07e8700, 0x07e8900 },
    { L"Suburbs (17/22)", 0x07e8900, 0x07e8b00 },
    { L"Suburbs (18/22)", 0x07e8b00, 0x07e8d00 },
    { L"Suburbs (19/22)", 0x07e8d00, 0x07e8f00 },
    { L"Suburbs (20/22)", 0x07e8f00, 0x07e9100 },
    { L"Suburbs (21/22)", 0x07e9100, 0x07e9300 },
    { L"Suburbs (22/22)", 0x07e9300, 0x07e9480 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_OTBRIDGE[] =
{
    { L"On The Bridge (1/2)", 0x07eed00, 0x07eef00, indexJojos50Stages, 0x3, &pairFullyLinkedNode },
    { L"On The Bridge (2/2)", 0x07eef00, 0x07ef100, indexJojos50Stages, 0x4 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTTWILIGHT[] =
{
    { L"Country Town Twilight (1/21)", 0x07dad00, 0x07daf00 },
    { L"Country Town Twilight (2/21)", 0x07daf00, 0x07db100 },
    { L"Country Town Twilight (3/21)", 0x07db100, 0x07db300 },
    { L"Country Town Twilight (4/21)", 0x07db300, 0x07db500 },
    { L"Country Town Twilight (5/21)", 0x07db500, 0x07db700 },
    { L"Country Town Twilight (6/21)", 0x07db700, 0x07db900 },
    { L"Country Town Twilight (7/21)", 0x07db900, 0x07dbb00 },
    { L"Country Town Twilight (8/21)", 0x07dbb00, 0x07dbd00 },
    { L"Country Town Twilight (9/21)", 0x07dbd00, 0x07dbf00 },
    { L"Country Town Twilight (10/21)", 0x07dbf00, 0x07dc100 },
    { L"Country Town Twilight (11/21)", 0x07dc100, 0x07dc300 },
    { L"Country Town Twilight (12/21)", 0x07dc300, 0x07dc500 },
    { L"Country Town Twilight (13/21)", 0x07dc500, 0x07dc700 },
    { L"Country Town Twilight (14/21)", 0x07dc700, 0x07dc900 },
    { L"Country Town Twilight (15/21)", 0x07dc900, 0x07dcb00 },
    { L"Country Town Twilight (16/21)", 0x07dcb00, 0x07dcd00 },
    { L"Country Town Twilight (17/21)", 0x07dcd00, 0x07dcf00 },
    { L"Country Town Twilight (18/21)", 0x07dcf00, 0x07dd100 },
    { L"Country Town Twilight (19/21)", 0x07dd100, 0x07dd300 },
    { L"Country Town Twilight (20/21)", 0x07dd300, 0x07dd500 },
    { L"Country Town Twilight (21/21)", 0x07dd500, 0x07dd680 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DMORNING[] =
{
    { L"Desert Morning (1/8)", 0x07d4000, 0x07d4200, indexJojos50Stages, 0x0b },
    { L"Desert Morning (2/8)", 0x07d4200, 0x07d4400 },
    { L"Desert Morning (3/8)", 0x07d4400, 0x07d4600, indexJojos50Stages, 0x0c },
    { L"Desert Morning (4/8)", 0x07d4600, 0x07d4800 },
    { L"Desert Morning (5/8)", 0x07d4800, 0x07d4a00, indexJojos50Stages, 0x0d },
    { L"Desert Morning (6/8)", 0x07d4a00, 0x07d4c00, indexJojos50Stages, 0x0e },
    { L"Desert Morning (7/8)", 0x07d4c00, 0x07d4e00, indexJojos50Stages, 0x0f },
    { L"Desert Morning (8/8)", 0x07d4e00, 0x07d4e80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DTWILIGHT[] =
{
    { L"Desert Twilight (1/8)", 0x07d5e00, 0x07d6000, indexJojos50Stages, 0x0b },
    { L"Desert Twilight (2/8)", 0x07d6000, 0x07d6200 },
    { L"Desert Twilight (3/8)", 0x07d6200, 0x07d6400, indexJojos50Stages, 0x0c },
    { L"Desert Twilight (4/8)", 0x07d6400, 0x07d6600 },
    { L"Desert Twilight (5/8)", 0x07d6600, 0x07d6800, indexJojos50Stages, 0x0d },
    { L"Desert Twilight (6/8)", 0x07d6800, 0x07d6a00, indexJojos50Stages, 0x0e },
    { L"Desert Twilight (7/8)", 0x07d6a00, 0x07d6c00, indexJojos50Stages, 0x0f },
    { L"Desert Twilight (8/8)", 0x07d6c00, 0x07d6c80},
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNIGHT[] =
{
    { L"Desert Night (1/8)", 0x07d4f00, 0x07d5100, indexJojos50Stages, 0xb },
    { L"Desert Night (2/8)", 0x07d5100, 0x07d5300 },
    { L"Desert Night (3/8)", 0x07d5300, 0x07d5500, indexJojos50Stages, 0xc },
    { L"Desert Night (4/8)", 0x07d5500, 0x07d5700 },
    { L"Desert Night (5/8)", 0x07d5700, 0x07d5900, indexJojos50Stages, 0xd },
    { L"Desert Night (6/8)", 0x07d5900, 0x07d5b00, indexJojos50Stages, 0xe },
    { L"Desert Night (7/8)", 0x07d5b00, 0x07d5d00, indexJojos50Stages, 0xf },
    { L"Desert Night (8/8)", 0x07d5d00, 0x07d5d80, indexJojos50Stages, 0x10 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLANDJ[] =
{
    { L"Small Island (Joseph) (1/6)", 0x07d1700, 0x07d1900, indexJojos50Stages, 0x18 },
    { L"Small Island (Joseph) (2/6)", 0x07d1900, 0x07d1b00, indexJojos50Stages, 0x19 },
    { L"Small Island (Joseph) (3/6)", 0x07d1b00, 0x07d1d00, indexJojos50Stages, 0x1a },
    { L"Small Island (Joseph) (4/6)", 0x07d1d00, 0x07d1f00, indexJojos50Stages, 0x1b },
    { L"Small Island (Joseph) (5/6)", 0x07d1f00, 0x07d2100, indexJojos50Stages, 0x1c },
    { L"Small Island (Joseph) (6/6)", 0x07d2100, 0x07d2300, indexJojos50Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNIGHT[] =
{
    { L"Country Town Night (1/21)", 0x07dd700, 0x07dd900 },
    { L"Country Town Night (2/21)", 0x07dd900, 0x07ddb00 },
    { L"Country Town Night (3/21)", 0x07ddb00, 0x07ddd00 },
    { L"Country Town Night (4/21)", 0x07ddd00, 0x07ddf00 },
    { L"Country Town Night (5/21)", 0x07ddf00, 0x07de100 },
    { L"Country Town Night (6/21)", 0x07de100, 0x07de300 },
    { L"Country Town Night (7/21)", 0x07de300, 0x07de500 },
    { L"Country Town Night (8/21)", 0x07de500, 0x07de700 },
    { L"Country Town Night (9/21)", 0x07de700, 0x07de900 },
    { L"Country Town Night (10/21)", 0x07de900, 0x07deb00 },
    { L"Country Town Night (11/21)", 0x07deb00, 0x07ded00 },
    { L"Country Town Night (12/21)", 0x07ded00, 0x07def00 },
    { L"Country Town Night (13/21)", 0x07def00, 0x07df100 },
    { L"Country Town Night (14/21)", 0x07df100, 0x07df300 },
    { L"Country Town Night (15/21)", 0x07df300, 0x07df500 },
    { L"Country Town Night (16/21)", 0x07df500, 0x07df700 },
    { L"Country Town Night (17/21)", 0x07df700, 0x07df900 },
    { L"Country Town Night (18/21)", 0x07df900, 0x07dfb00 },
    { L"Country Town Night (19/21)", 0x07dfb00, 0x07dfd00 },
    { L"Country Town Night (20/21)", 0x07dfd00, 0x07dff00 },
    { L"Country Town Night (21/21)", 0x07dff00, 0x07e0080 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB2[] =
{
    { L"Suburbs 2 (1/22)", 0x07e9500, 0x07e9700 },
    { L"Suburbs 2 (2/22)", 0x07e9700, 0x07e9900 },
    { L"Suburbs 2 (3/22)", 0x07e9900, 0x07e9b00 },
    { L"Suburbs 2 (4/22)", 0x07e9b00, 0x07e9d00 },
    { L"Suburbs 2 (5/22)", 0x07e9d00, 0x07e9f00 },
    { L"Suburbs 2 (6/22)", 0x07e9f00, 0x07ea100 },
    { L"Suburbs 2 (7/22)", 0x07ea100, 0x07ea300 },
    { L"Suburbs 2 (8/22)", 0x07ea300, 0x07ea500 },
    { L"Suburbs 2 (9/22)", 0x07ea500, 0x07ea700 },
    { L"Suburbs 2 (10/22)", 0x07ea700, 0x07ea900 },
    { L"Suburbs 2 (11/22)", 0x07ea900, 0x07eab00 },
    { L"Suburbs 2 (12/22)", 0x07eab00, 0x07ead00 },
    { L"Suburbs 2 (13/22)", 0x07ead00, 0x07eaf00 },
    { L"Suburbs 2 (14/22)", 0x07eaf00, 0x07eb100 },
    { L"Suburbs 2 (15/22)", 0x07eb100, 0x07eb300 },
    { L"Suburbs 2 (16/22)", 0x07eb300, 0x07eb500 },
    { L"Suburbs 2 (17/22)", 0x07eb500, 0x07eb700 },
    { L"Suburbs 2 (18/22)", 0x07eb700, 0x07eb900 },
    { L"Suburbs 2 (19/22)", 0x07eb900, 0x07ebb00 },
    { L"Suburbs 2 (20/22)", 0x07ebb00, 0x07ebd00 },
    { L"Suburbs 2 (21/22)", 0x07ebd00, 0x07ebf00 },
    { L"Suburbs 2 (22/22)", 0x07ebf00, 0x07ec080 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB3[] =
{
    { L"Suburbs 3 (1/22)", 0x07ec100, 0x07ec300 },
    { L"Suburbs 3 (2/22)", 0x07ec300, 0x07ec500 },
    { L"Suburbs 3 (3/22)", 0x07ec500, 0x07ec700 },
    { L"Suburbs 3 (4/22)", 0x07ec700, 0x07ec900 },
    { L"Suburbs 3 (5/22)", 0x07ec900, 0x07ecb00 },
    { L"Suburbs 3 (6/22)", 0x07ecb00, 0x07ecd00 },
    { L"Suburbs 3 (7/22)", 0x07ecd00, 0x07ecf00 },
    { L"Suburbs 3 (8/22)", 0x07ecf00, 0x07ed100 },
    { L"Suburbs 3 (9/22)", 0x07ed100, 0x07ed300 },
    { L"Suburbs 3 (10/22)", 0x07ed300, 0x07ed500 },
    { L"Suburbs 3 (11/22)", 0x07ed500, 0x07ed700 },
    { L"Suburbs 3 (12/22)", 0x07ed700, 0x07ed900 },
    { L"Suburbs 3 (13/22)", 0x07ed900, 0x07edb00 },
    { L"Suburbs 3 (14/22)", 0x07edb00, 0x07edd00 },
    { L"Suburbs 3 (15/22)", 0x07edd00, 0x07edf00 },
    { L"Suburbs 3 (16/22)", 0x07edf00, 0x07ee100 },
    { L"Suburbs 3 (17/22)", 0x07ee100, 0x07ee300 },
    { L"Suburbs 3 (18/22)", 0x07ee300, 0x07ee500 },
    { L"Suburbs 3 (19/22)", 0x07ee500, 0x07ee700 },
    { L"Suburbs 3 (20/22)", 0x07ee700, 0x07ee900 },
    { L"Suburbs 3 (21/22)", 0x07ee900, 0x07eeb00 },
    { L"Suburbs 3 (22/22)", 0x07eeb00, 0x07eec80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW1[] = // aka Remains
{
    { L"New 1 (1/10)", 0x07cb200, 0x07cb400 },
    { L"New 1 (2/10)", 0x07cb400, 0x07cb600 },
    { L"New 1 (3/10)", 0x07cb600, 0x07cb800 },
    { L"New 1 (4/10)", 0x07cb800, 0x07cba00 },
    { L"New 1 (5/10)", 0x07cba00, 0x07cbc00 },
    { L"New 1 (6/10)", 0x07cbc00, 0x07cbe00 },
    { L"New 1 (7/10)", 0x07cbe00, 0x07cc000 },
    { L"New 1 (8/10)", 0x07cc000, 0x07cc200 },
    { L"New 1 (9/10)", 0x07cc200, 0x07cc400 },
    { L"New 1 (10/10)", 0x07cc400, 0x07cc480 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW2[] = // aka Hotel (Devil)
{
    { L"New 2 (1/7)", 0x07c9100, 0x07c9300, indexJojos50Stages, 0x11, &pairFullyLinkedNode },
    { L"New 2 (2/7)", 0x07c9300, 0x07c9500, indexJojos50Stages, 0x12 },
    { L"New 2 (3/7)", 0x07c9500, 0x07c9700, indexJojos50Stages, 0x13 },
    { L"New 2 (4/7)", 0x07c9700, 0x07c9900, indexJojos50Stages, 0x14 },
    { L"New 2 (5/7)", 0x07c9900, 0x07c9b00, indexJojos50Stages, 0x15 },
    { L"New 2 (6/7)", 0x07c9b00, 0x07c9d00, indexJojos50Stages, 0x16 },
    { L"New 2 (7/7)", 0x07c9d00, 0x07c9e80, indexJojos50Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW3[] = // aka Small Island
{
    { L"New 3 (1/6)", 0x07d2400, 0x07d2600, indexJojos50Stages, 0x18 },
    { L"New 3 (2/6)", 0x07d2600, 0x07d2800, indexJojos50Stages, 0x19 },
    { L"New 3 (3/6)", 0x07d2800, 0x07d2a00, indexJojos50Stages, 0x1a },
    { L"New 3 (4/6)", 0x07d2a00, 0x07d2c00, indexJojos50Stages, 0x1b },
    { L"New 3 (5/6)", 0x07d2c00, 0x07d2e00, indexJojos50Stages, 0x1c },
    { L"New 3 (6/6)", 0x07d2e00, 0x07d3000, indexJojos50Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW4[] = // aka Ruins
{
    { L"New 4 (1/5)", 0x07d7800, 0x07d7a00, indexJojos50Stages, 0x29, &pairFullyLinkedNode },
    { L"New 4 (2/5)", 0x07d7a00, 0x07d7c00, indexJojos50Stages, 0x2a },
    { L"New 4 (3/5)", 0x07d7c00, 0x07d7e00, indexJojos50Stages, 0x2b },
    { L"New 4 (4/5)", 0x07d7e00, 0x07d8000, indexJojos50Stages, 0x2c },
    { L"New 4 (5/5)", 0x07d8000, 0x07d8200, indexJojos50Stages, 0x2d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW5[] = // aka Underground Water
{
    { L"New 5 (1/8)", 0x07e1200, 0x07e1400 },
    { L"New 5 (2/8)", 0x07e1400, 0x07e1600 },
    { L"New 5 (3/8)", 0x07e1600, 0x07e1800 },
    { L"New 5 (4/8)", 0x07e1800, 0x07e1a00 },
    { L"New 5 (5/8)", 0x07e1a00, 0x07e1c00 },
    { L"New 5 (6/8)", 0x07e1c00, 0x07e1e00 },
    { L"New 5 (7/8)", 0x07e1e00, 0x07e2000 },
    { L"New 5 (8/8)", 0x07e2000, 0x07e2200 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW6[] = // aka Inside House
{
    { L"New 6 (1/8)", 0x07e3300, 0x07e3500 },
    { L"New 6 (2/8)", 0x07e3500, 0x07e3700 },
    { L"New 6 (3/8)", 0x07e3700, 0x07e3900 },
    { L"New 6 (4/8)", 0x07e3900, 0x07e3b00 },
    { L"New 6 (5/8)", 0x07e3b00, 0x07e3d00 },
    { L"New 6 (6/8)", 0x07e3d00, 0x07e3f00 },
    { L"New 6 (7/8)", 0x07e3f00, 0x07e4100 },
    { L"New 6 (8/8)", 0x07e4100, 0x07e4200 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW7[] = // aka Coffin Room
{
    { L"New 7 (1/6)", 0x07e4f00, 0x07e5100, indexJojos50Stages, 0x5, &pairCoffinRoom },
    { L"New 7 (2/6)", 0x07e5100, 0x07e5300, indexJojos50Stages, 0x6 },
    { L"New 7 (3/6)", 0x07e5300, 0x07e5500, indexJojos50Stages, 0x7 },
    { L"New 7 (4/6)", 0x07e5500, 0x07e5700, indexJojos50Stages, 0x8 },
    { L"New 7 (5/6)", 0x07e5700, 0x07e5900, indexJojos50Stages, 0x9 },
    { L"New 7 (6/6)", 0x07e5900, 0x07e5a00, indexJojos50Stages, 0xa },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW8[] = // aka Clock Tower
{
    { L"New 8 (1/3)", 0x07e6200, 0x07e6400, indexJojos50Stages, 0, &pairFullyLinkedNode },
    { L"New 8 (2/3)", 0x07e6400, 0x07e6600, indexJojos50Stages, 1 },
    { L"New 8 (3/3)", 0x07e6600, 0x07e6800, indexJojos50Stages, 2 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW9[] = // aka On The Bridge
{
    { L"New 9 (1/2)", 0x07ef200, 0x07ef400, indexJojos50Stages, 0x3, &pairFullyLinkedNode },
    { L"New 9 (2/2)", 0x07ef400, 0x07ef600, indexJojos50Stages, 0x4 },
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
    { L"New 3 - Copy of Smal Island", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW3, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW3) },
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
    { L"Jotaro & Star Platinum A", 0x0336400, 0x0336480, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Star Breaker Super A", 0x0336D80, 0x0336DC0, indexJojos51Jotaro, 1 },
    { L"Star Platinum Charging Flash A", 0x0336880, 0x0336900, indexJojos51Jotaro, 2 },
    { L"Jotaro Vs/Super A", 0x0410000, 0x0410080, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger A", 0x0410080, 0x0410100, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning A (1/2)", 0x0410100, 0x0410180, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Jotaro Select/Winning A (2/2)", 0x0410180, 0x0410200, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Jotaro Burning A (1/2)", 0x0336480, 0x0336500, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning A (2/2)", 0x0336500, 0x0336580, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap A (1/2)", 0x0336780, 0x0336800, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap A (2/2)", 0x0336800, 0x0336880, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_B[] =
{
    { L"Jotaro & Star Platinum B", 0x034a900, 0x034a980, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Star Breaker Super B", 0x034B280, 0x034B2C0, indexJojos51Jotaro, 1  },
    { L"Star Platinum Charging Flash B", 0x034AD80, 0x034AE00, indexJojos51Jotaro, 2 },
    { L"Jotaro Vs/Super B", 0x0414e00, 0x0414e80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger B", 0x0414e80, 0x0414f00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning B (1/2)", 0x0414f00, 0x0414f80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Jotaro Select/Winning B (2/2)", 0x0414f80, 0x0415000, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Jotaro Burning B (1/2)", 0x034a980, 0x034aa00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning B (2/2)", 0x034aa00, 0x034aa80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap B (1/2)", 0x034ac80, 0x034ad00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap B (2/2)", 0x034ad00, 0x034ad80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_C[] =
{
    { L"Jotaro & Star Platinum C", 0x035ee00, 0x035ee80, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Star Breaker Super C", 0x035F780, 0x035F7C0, indexJojos51Jotaro, 1  },
    { L"Star Platinum Charging Flash C", 0x035F280, 0x035F300, indexJojos51Jotaro, 2 },
    { L"Jotaro Vs/Super C", 0x0419c00, 0x0419c80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger C", 0x0419c80, 0x0419d00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning C (1/2)", 0x0419d00, 0x0419d80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Jotaro Select/Winning C (2/2)", 0x0419d80, 0x0419e00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Jotaro Burning C (1/2)", 0x035ee80, 0x035ef00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning C (2/2)", 0x035ef00, 0x035ef80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap C (1/2)", 0x035f180, 0x035f200, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap C (2/2)", 0x035f200, 0x035f280, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_S[] =
{
    { L"Jotaro & Star Platinum S", 0x0373300, 0x0373380, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Star Breaker Super S", 0x0373C80, 0x0373CC0, indexJojos51Jotaro, 1  },
    { L"Star Platinum Charging Flash S", 0x0373780, 0x0373800, indexJojos51Jotaro, 2 },
    { L"Jotaro Vs/Super S", 0x041ea00, 0x041ea80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger S", 0x041ea80, 0x041eb00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning S (1/2)", 0x041eb00, 0x041eb80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Jotaro Select/Winning S (2/2)", 0x041eb80, 0x041ec00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Jotaro Burning S (1/2)", 0x0373380, 0x0373400, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning S (2/2)", 0x0373400, 0x0373480, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap S (1/2)", 0x0373680, 0x0373700, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap S (2/2)", 0x0373700, 0x0373780, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_Start[] =
{
    { L"Jotaro & Star Platinum Start", 0x0387800, 0x0387880, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Star Breaker Super Start", 0x0388180, 0x03881C0, indexJojos51Jotaro, 1  },
    { L"Star Platinum Charging Flash Start", 0x0387C80, 0x0387D00, indexJojos51Jotaro, 2 },
    { L"Jotaro Vs/Super Start", 0x0423800, 0x0423880, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger Start", 0x0423880, 0x0423900, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { L"Jotaro Select/Winning Start (1/2)", 0x0423900, 0x0423980, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Jotaro Select/Winning Start (2/2)", 0x0423980, 0x0423a00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Jotaro Burning Start (1/2)", 0x0387880, 0x0387900, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning Start (2/2)", 0x0387900, 0x0387980, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap Start (1/2)", 0x0387b80, 0x0387c00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap Start (2/2)", 0x0387c00, 0x0387c80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_A[] =
{
    { L"Kakyoin & Hierophant Green A", 0x0337080, 0x0337100, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal A (1/7)", 0x0337900, 0x0337980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (2/7)", 0x0337980, 0x0337a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (3/7)", 0x0337a00, 0x0337a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (4/7)", 0x0337a80, 0x0337b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (5/7)", 0x0337b00, 0x0337b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (6/7)", 0x0337b80, 0x0337c00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal A (7/7)", 0x0337c00, 0x0337c80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles A", 0x0337c80, 0x0337ca0, indexJojos51Kakyo, 0x8 },
    { L"Raging Demon Trail A", 0x0337800, 0x0337880, indexJojos51Kakyo, 0x09 },
    { L"Kakyoin Remote Mode Afterimage A", 0x0337500, 0x0337580, indexJojos51Kakyo, 0x0A },
    { L"Kakyoin Vs/Super A", 0x0410300, 0x0410380, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger A", 0x0410380, 0x0410400, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Kakyoin Select/Winning A (1/2)", 0x0410400, 0x0410480, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Kakyoin Select/Winning A (2/2)", 0x0410480, 0x0410500, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Kakyoin Select/Winning A", 0x0410400, 0x0410500 },
#endif
    { L"Kakyoin Burning A (1/2)", 0x0337100, 0x0337180, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Burning A (2/2)", 0x0337180, 0x0337200, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap A (1/2)", 0x0337400, 0x0337480, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap A (2/2)", 0x0337480, 0x0337500, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_B[] =
{
    { L"Kakyoin & Hierophant Green B", 0x034b580, 0x034b600, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal B (1/7)", 0x034be00, 0x034be80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (2/7)", 0x034be80, 0x034bf00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (3/7)", 0x034bf00, 0x034bf80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (4/7)", 0x034bf80, 0x034c000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (5/7)", 0x034c000, 0x034c080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (6/7)", 0x034c080, 0x034c100, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal B (7/7)", 0x034c100, 0x034c180, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles B", 0x034c180, 0x034c1a0, indexJojos51Kakyo, 0x8 },
    { L"Raging Demon Trail B", 0x034bd00, 0x034bd80, indexJojos51Kakyo, 0x9 },
    { L"Kakyoin Remote Mode Afterimage B", 0x034BA00, 0x034BA80, indexJojos51Kakyo, 0xa },
    { L"Kakyoin Vs/Super B", 0x0415100, 0x0415180, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger B", 0x0415180, 0x0415200, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Kakyoin Select/Winning B (1/2)", 0x0415200, 0x0415280, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Kakyoin Select/Winning B (2/2)", 0x0415280, 0x0415300, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Kakyoin Select/Winning B", 0x0415200, 0x0415300 },
#endif
    { L"Kakyoin Burning B (1/2)", 0x034b600, 0x034b680, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Burning B (2/2)", 0x034b680, 0x034b700, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap B (1/2)", 0x034b900, 0x034b980, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap B (2/2)", 0x034b980, 0x034ba00, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_C[] =
{
    { L"Kakyoin & Hierophant Green C", 0x035fa80, 0x035fb00, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal C (1/7)", 0x0360300, 0x0360380, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (2/7)", 0x0360380, 0x0360400, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (3/7)", 0x0360400, 0x0360480, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (4/7)", 0x0360480, 0x0360500, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (5/7)", 0x0360500, 0x0360580, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (6/7)", 0x0360580, 0x0360600, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal C (7/7)", 0x0360600, 0x0360680, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles C", 0x0360680, 0x03606a0, indexJojos51Kakyo, 0x8 },
    { L"Raging Demon Trail C", 0x0360200, 0x0360280, indexJojos51Kakyo, 0x9 },
    { L"Kakyoin Remote Mode Afterimage C", 0x035FF00, 0x035FF80, indexJojos51Kakyo, 0xa },
    { L"Kakyoin Vs/Super C", 0x0419f00, 0x0419f80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger C", 0x0419f80, 0x041a000, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Kakyoin Select/Winning C (1/2)", 0x041a000, 0x041a080, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Kakyoin Select/Winning C (2/2)", 0x041a080, 0x041a100, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Kakyoin Select/Winning C", 0x041a000, 0x041a100 },
#endif
    { L"Kakyoin Burning C (1/2)", 0x035fb00, 0x035fb80, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Burning C (2/2)", 0x035fb80, 0x035fc00, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap C (1/2)", 0x035fe00, 0x035fe80, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap C (2/2)", 0x035fe80, 0x035ff00, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_S[] =
{
    { L"Kakyoin & Hierophant Green S", 0x0373f80, 0x0374000, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal S (1/7)", 0x0374800, 0x0374880, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (2/7)", 0x0374880, 0x0374900, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (3/7)", 0x0374900, 0x0374980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (4/7)", 0x0374980, 0x0374a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (5/7)", 0x0374a00, 0x0374a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (6/7)", 0x0374a80, 0x0374b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal S (7/7)", 0x0374b00, 0x0374b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles S", 0x0374b80, 0x0374ba0, indexJojos51Kakyo, 0x8 },
    { L"Raging Demon Trail S", 0x0374700, 0x0374780, indexJojos51Kakyo, 0x9 },
    { L"Kakyoin Remote Mode Afterimage S", 0x0374400, 0x0374480, indexJojos51Kakyo, 0xa },
    { L"Kakyoin Vs/Super S", 0x041ed00, 0x041ed80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger S", 0x041ed80, 0x041ee00, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Kakyoin Select/Winning S (1/2)", 0x041ee00, 0x041ee80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Kakyoin Select/Winning S (2/2)", 0x041ee80, 0x041ef00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Kakyoin Select/Winning S", 0x041ee00, 0x041ef00 },
#endif
    { L"Kakyoin Burning S (1/2)", 0x0374000, 0x0374080, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Burning S (2/2)", 0x0374080, 0x0374100, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap S (1/2)", 0x0374300, 0x0374380, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap S (2/2)", 0x0374380, 0x0374400, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start[] =
{
    { L"Kakyoin & Hierophant Green Start", 0x0388480, 0x0388500, indexJojos51Kakyo, indexJojos51Character_Main },
    { L"Hierophant Changing Pal Start (1/7)", 0x0388d00, 0x0388d80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (2/7)", 0x0388d80, 0x0388e00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (3/7)", 0x0388e00, 0x0388e80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (4/7)", 0x0388e80, 0x0388f00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (5/7)", 0x0388f00, 0x0388f80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (6/7)", 0x0388f80, 0x0389000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Changing Pal Start (7/7)", 0x0389000, 0x0389080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { L"Hierophant Sparkles Start", 0x0389080, 0x03890a0, indexJojos51Kakyo, 0x8 },
    { L"Raging Demon Trail Start", 0x0388c00, 0x0388c80, indexJojos51Kakyo, 0x9 },
    { L"Kakyoin Remote Mode Afterimage Start", 0x0388900, 0x0388980, indexJojos51Kakyo, 0xa },
    { L"Kakyoin Vs/Super Start", 0x0423b00, 0x0423b80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger Start", 0x0423b80, 0x0423c00, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Kakyoin Select/Winning Start (1/2)", 0x0423c00, 0x0423c80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Kakyoin Select/Winning Start (2/2)", 0x0423c80, 0x0423d00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Kakyoin Select/Winning Start", 0x0423c00, 0x0423d00 },
#endif
    { L"Kakyoin Burning Start (1/2)", 0x0388500, 0x0388580, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Burning Start (2/2)", 0x0388580, 0x0388600, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap Start (1/2)", 0x0388800, 0x0388880, indexJojos51Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap Start (2/2)", 0x0388880, 0x0388900, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_A[] =
{
    { L"Avdol & Magician's Red A", 0x0337d00, 0x0337d80, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire A", 0x0338580, 0x03385c0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol & MR Remote Activation A", 0x0338180, 0x0338200, indexJojos51Avdol, 2 },
    { L"Avdol Vs/Super A", 0x0410600, 0x0410680, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger A", 0x0410680, 0x0410700, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Avdol Select / Winning A (1/2)", 0x0410700, 0x0410780, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Avdol Select / Winning A (2/2)", 0x0410780, 0x0410800, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Avdol Select / Winning A", 0x0410700, 0x0410800 },
#endif
    { L"Avdol Burning A (1/2)", 0x0337d80, 0x0337e00, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { L"Avdol Burning A (2/2)", 0x0337e00, 0x0337e80, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { L"Avdol Tech/Zap A (1/2)", 0x0338080, 0x0338100, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { L"Avdol Tech/Zap A (2/2)", 0x0338100, 0x0338180, indexJojos51Avdol, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_B[] =
{
    { L"Avdol & Magician's Red B", 0x034c200, 0x034c280, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire B", 0x034ca80, 0x034cac0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol & MR Remote Activation B", 0x034c680, 0x034c700, indexJojos51Avdol, 2 },
    { L"Avdol Vs / Super B", 0x0415400, 0x0415480, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger B", 0x0415480, 0x0415500, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Avdol Select / Winning B (1/2)", 0x0415500, 0x0415580, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Avdol Select / Winning B (2/2)", 0x0415580, 0x0415600, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Avdol Select / Winning B", 0x0415500, 0x0415600 },
#endif
    { L"Avdol Burning B (1/2)", 0x034c280, 0x034c300, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning B (2/2)", 0x034c300, 0x034c380, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap B (1/2)", 0x034c580, 0x034c600, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap B (2/2)", 0x034c600, 0x034c680, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_C[] =
{
    { L"Avdol & Magician's Red C", 0x0360700, 0x0360780, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire C", 0x0360f80, 0x0360fc0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol & MR Remote Activation C", 0x0360b80, 0x0360c00, indexJojos51Avdol, 2 },
    { L"Avdol Vs / Super C", 0x041a200, 0x041a280, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger C", 0x041a280, 0x041a300, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Avdol Select / Winning C (1/2)", 0x041a300, 0x041a380, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Avdol Select / Winning C (2/2)", 0x041a380, 0x041a400, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Avdol Select / Winning C", 0x041a300, 0x041a400 },
#endif
    { L"Avdol Burning C (1/2)", 0x0360780, 0x0360800, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning C (2/2)", 0x0360800, 0x0360880, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap C (1/2)", 0x0360a80, 0x0360b00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap C (2/2)", 0x0360b00, 0x0360b80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_S[] =
{
    { L"Avdol & Magician's Red S", 0x0374c00, 0x0374c80, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire S", 0x0375480, 0x03754c0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol & MR Remote Activation S", 0x0375080, 0x0375100, indexJojos51Avdol, 2 },
    { L"Avdol Vs / Super S", 0x041f000, 0x041f080, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger S", 0x041f080, 0x041f100, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Avdol Select / Winning S (1/2)", 0x041f100, 0x041f180, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Avdol Select / Winning S (2/2)", 0x041f180, 0x041f200, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Avdol Select / Winning S", 0x041f100, 0x041f200 },
#endif
    { L"Avdol Burning S (1/2)", 0x0374c80, 0x0374d00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning S (2/2)", 0x0374d00, 0x0374d80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap S (1/2)", 0x0374f80, 0x0375000, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap S (2/2)", 0x0375000, 0x0375080, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_Start[] =
{
    { L"Avdol & Magician's Red Start", 0x0389100, 0x0389180, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire Start", 0x0389980, 0x03899c0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol & MR Remote Activation Start", 0x0389580, 0x0389600, indexJojos51Avdol, 2 },
    { L"Avdol Vs / Super Start", 0x0423e00, 0x0423e80, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger Start", 0x0423e80, 0x0423f00, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Avdol Select / Winning Start (1/2)", 0x0423f00, 0x0423f80, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Avdol Select / Winning Start (2/2)", 0x0423f80, 0x0424000, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Avdol Select / Winning Start", 0x0423f00, 0x0424000 },
#endif
    { L"Avdol Burning Start (1/2)", 0x0389180, 0x0389200, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Burning Start (2/2)", 0x0389200, 0x0389280, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap Start (1/2)", 0x0389480, 0x0389500, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { L"Avdol Tech/Zap Start (2/2)", 0x0389500, 0x0389580, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

// Warning: Pol uses an older ordering system, so don't use the new enum.
const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_A[] =
{
    { L"Polnareff & Silver Chariot A", 0x0338980, 0x0338a00, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal A (1/2)", 0x0339280, 0x0339300, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal A (2/2)", 0x0339300, 0x0339380, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash A", 0x0338e00, 0x0338e80, indexJojos51Pol, 0x01  },
    { L"Polnareff Vs / Super A", 0x0410900, 0x0410980, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger A", 0x0410980, 0x0410a00, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { L"Polnareff Select / Winning A (1/2)", 0x0410a00, 0x0410a80, indexJojos51Pol, 0x04, &pairHandledInCode },
    { L"Polnareff Select / Winning A (2/2)", 0x0410a80, 0x0410b00, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { L"Polnareff Select / Winning A", 0x0410a00, 0x0410b00 },
#endif
    { L"Polnareff Burning A (1/2)", 0x0338a00, 0x0338a80, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning A (2/2)", 0x0338a80, 0x0338b00, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap A (1/2)", 0x0338d00, 0x0338d80, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap A (2/2)", 0x0338d80, 0x0338e00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_B[] =
{
    { L"Polnareff & Silver Chariot B", 0x034ce80, 0x034cf00, indexJojos51Pol },
    { L"Chariot's Changing Pal B (1/2)", 0x034d780, 0x034d800, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal B (2/2)", 0x034d800, 0x034d880, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash B", 0x034d300, 0x034d380, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super B", 0x0415700, 0x0415780, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger B", 0x0415780, 0x0415800, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { L"Polnareff Select / Winning B (1/2)", 0x0415800, 0x0415880, indexJojos51Pol, 0x04, &pairHandledInCode },
    { L"Polnareff Select / Winning B (2/2)", 0x0415880, 0x0415900, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { L"Polnareff Select / Winning B", 0x0415800, 0x0415900 },
#endif
    { L"Polnareff Burning B (1/2)", 0x034cf00, 0x034cf80, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning B (2/2)", 0x034cf80, 0x034d000, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap B (1/2)", 0x034d200, 0x034d280, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap B (2/2)", 0x034d280, 0x034d300, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_C[] =
{
    { L"Polnareff & Silver Chariot C", 0x0361380, 0x0361400, indexJojos51Pol },
    { L"Chariot's Changing Pal C (1/2)", 0x0361c80, 0x0361d00, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal C (2/2)", 0x0361d00, 0x0361d80, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash C", 0x0361800, 0x0361880, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super C", 0x041a500, 0x041a580, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger C", 0x041a580, 0x041a600, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { L"Polnareff Select / Winning C (1/2)", 0x041a600, 0x041a680, indexJojos51Pol, 0x04, &pairHandledInCode },
    { L"Polnareff Select / Winning C (2/2)", 0x041a680, 0x041a700, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { L"Polnareff Select / Winning C", 0x041a600, 0x041a700 },
#endif
    { L"Polnareff Burning C (1/2)", 0x0361400, 0x0361480, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning C (2/2)", 0x0361480, 0x0361500, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap C (1/2)", 0x0361700, 0x0361780, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap C (2/2)", 0x0361780, 0x0361800, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_S[] =
{
    { L"Polnareff & Silver Chariot S", 0x0375880, 0x0375900, indexJojos51Pol },
    { L"Chariot's Changing Pal S (1/2)", 0x0376180, 0x0376200, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal S (2/2)", 0x0376200, 0x0376280, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash S", 0x0375d00, 0x0375d80, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super S", 0x041f300, 0x041f380, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger S", 0x041f380, 0x041f400, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { L"Polnareff Select / Winning S (1/2)", 0x041f400, 0x041f480, indexJojos51Pol, 0x04, &pairHandledInCode },
    { L"Polnareff Select / Winning S (2/2)", 0x041f480, 0x041f500, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { L"Polnareff Select / Winning S", 0x041f400, 0x041f500 },
#endif
    { L"Polnareff Burning S (1/2)", 0x0375900, 0x0375980, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning S (2/2)", 0x0375980, 0x0375a00, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap S (1/2)", 0x0375c00, 0x0375c80, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap S (2/2)", 0x0375c80, 0x0375d00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_Start[] =
{
    { L"Polnareff & Silver Chariot Start", 0x0389d80, 0x0389e00, indexJojos51Pol },
    { L"Chariot's Changing Pal Start (1/2)", 0x038a680, 0x038a700, indexJojos51Pol, 0x00 },
    { L"Chariot's Changing Pal Start (2/2)", 0x038a700, 0x038a780, indexJojos51Pol, 0x00 },
    { L"Pol Remote Activation Flash Start", 0x038a200, 0x038a280, indexJojos51Pol, 0x01 },
    { L"Polnareff Vs / Super Start", 0x0424100, 0x0424180, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger Start", 0x0424180, 0x0424200, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { L"Polnareff Select / Winning Start (1/2)", 0x0424200, 0x0424280, indexJojos51Pol, 0x04, &pairHandledInCode },
    { L"Polnareff Select / Winning Start (2/2)", 0x0424280, 0x0424300, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { L"Polnareff Select / Winning Start", 0x0424200, 0x0424300 },
#endif
    { L"Polnareff Burning Start (1/2)", 0x0389e00, 0x0389e80, indexJojos51Pol, 0x06 },
    { L"Polnareff Burning Start (2/2)", 0x0389e80, 0x0389f00, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap Start (1/2)", 0x038a100, 0x038a180, indexJojos51Pol, 0x06 },
    { L"Polnareff Tech/Zap Start (2/2)", 0x038a180, 0x038a200, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Shared[]
{
    { L"Flash Back Manga Panels (Joseph 236aa)", 0x0335B80, 0x0335BC0, indexJojos51Joseph, 1 },
    { L"Lisa Lisa & Caesar (Joseph 236aa)", 0x0335C00, 0x0335C80, indexJojos51Joseph, 2 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_A[] =
{
    { L"Joseph & Hermit Purple A", 0x0339600, 0x0339680, indexJojos51Joseph },
    { L"Joseph Tech/Zap/CC A (1/2)", 0x0339980, 0x0339a00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC A (2/2)", 0x0339a00, 0x0339a80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super A", 0x0410c00, 0x0410c80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger A", 0x0410c80, 0x0410d00, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Joseph Select / Winning A (1/2)", 0x0410d00, 0x0410d80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Joseph Select / Winning A (2/2)", 0x0410d80, 0x0410e00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Joseph Select / Winning A", 0x0410d00, 0x0410e00 },
#endif
    { L"Joseph Burning A (1/2)", 0x0339680, 0x0339700, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning A (2/2)", 0x0339700, 0x0339780, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_B[] =
{
    { L"Joseph & Hermit Purple B", 0x034db00, 0x034db80, indexJojos51Joseph },
    { L"Joseph Tech/Zap/CC B (1/2)", 0x034de80, 0x034df00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC B (2/2)", 0x034df00, 0x034df80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super B", 0x0415a00, 0x0415a80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger B", 0x0415a80, 0x0415b00, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Joseph Select / Winning B (1/2)", 0x0415b00, 0x0415b80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Joseph Select / Winning B (2/2)", 0x0415b80, 0x0415c00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Joseph Select / Winning B", 0x0415b00, 0x0415c00 },
#endif
    { L"Joseph Burning B (1/2)", 0x034db80, 0x034dc00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning B (2/2)", 0x034dc00, 0x034dc80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_C[] =
{
    { L"Joseph & Hermit Purple C", 0x0362000, 0x0362080, indexJojos51Joseph },
    { L"Joseph Tech/Zap/CC C (1/2)", 0x0362380, 0x0362400, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC C (2/2)", 0x0362400, 0x0362480, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super C", 0x041a800, 0x041a880, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger C", 0x041a880, 0x041a900, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Joseph Select / Winning C (1/2)", 0x041a900, 0x041a980, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Joseph Select / Winning C (2/2)", 0x041a980, 0x041aa00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Joseph Select / Winning C", 0x041a900, 0x041aa00 },
#endif
    { L"Joseph Burning C (1/2)", 0x0362080, 0x0362100, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning C (2/2)", 0x0362100, 0x0362180, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_S[] =
{
    { L"Joseph & Hermit Purple S", 0x0376500, 0x0376580, indexJojos51Joseph },
    { L"Joseph Tech/Zap/CC S (1/2)", 0x0376880, 0x0376900, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC S (2/2)", 0x0376900, 0x0376980, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super S", 0x041f600, 0x041f680, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger S", 0x041f680, 0x041f700, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Joseph Select / Winning S (1/2)", 0x041f700, 0x041f780, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Joseph Select / Winning S (2/2)", 0x041f780, 0x041f800, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Joseph Select / Winning S", 0x041f700, 0x041f800 },
#endif
    { L"Joseph Burning S (1/2)", 0x0376580, 0x0376600, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning S (2/2)", 0x0376600, 0x0376680, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Start[] =
{
    { L"Joseph & Hermit Purple Start", 0x038aa00, 0x038aa80, indexJojos51Joseph },
    { L"Joseph Tech/Zap/CC Start (1/2)", 0x038ad80, 0x038ae00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Tech/Zap/CC Start (2/2)", 0x038ae00, 0x038ae80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Vs / Super Start", 0x0424400, 0x0424480, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger Start", 0x0424480, 0x0424500, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Joseph Select / Winning Start (1/2)", 0x0424500, 0x0424580, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Joseph Select / Winning Start (2/2)", 0x0424580, 0x0424600, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Joseph Select / Winning Start", 0x0424500, 0x0424600 },
#endif
    { L"Joseph Burning Start (1/2)", 0x038aa80, 0x038ab00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { L"Joseph Burning Start (2/2)", 0x038ab00, 0x038ab80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Shared[] =
{
    { L"Iggy Raging Demon Static (A / B / C / S / Start)", 0x030D300, 0x030D320, indexJojos51Iggy, 2 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_A[] =
{
    { L"Iggy & The Fool A", 0x033a280, 0x033a300, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Raging Demon Trail A (1/3)", 0x033aa80, 0x033ab00, indexJojos51Iggy, 1 },
    { L"Raging Demon Trail A (2/3)", 0x033ab00, 0x033ab80, indexJojos51Iggy, 1 },
    { L"Raging Demon Trail A (3/3)", 0x033ab80, 0x033ac00, indexJojos51Iggy, 1 },
    { L"Iggy Vs / Super A", 0x0410f00, 0x0410f80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger A", 0x0410f80, 0x0411000, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Iggy Select / Winning A (1/2)", 0x0411000, 0x0411080, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Iggy Select / Winning A (2/2)", 0x0411080, 0x0411100, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Iggy Select / Winning A", 0x0411000, 0x0411100 },
#endif
    { L"Iggy Burning A (1/2)", 0x033a300, 0x033a380, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning A (2/2)", 0x033a380, 0x033a400, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap A (1/2)", 0x033a600, 0x033a680, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap A (2/2)", 0x033a680, 0x033a700, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_B[] =
{
    { L"Iggy & The Fool B", 0x034e780, 0x034e800, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Raging Demon Trail B (1/3)", 0x034ef80, 0x034f000, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail B (2/3)", 0x034f000, 0x034f080, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail B (3/3)", 0x034f080, 0x034f100, indexJojos51Iggy, 1  },
    { L"Iggy Vs / Super B", 0x0415d00, 0x0415d80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger B", 0x0415d80, 0x0415e00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Iggy Select / Winning B (1/2)", 0x0415e00, 0x0415e80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Iggy Select / Winning B (2/2)", 0x0415e80, 0x0415f00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Iggy Select / Winning B", 0x0415e00, 0x0415f00 },
#endif
    { L"Iggy Burning B (1/2)", 0x034e800, 0x034e880, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning B (2/2)", 0x034e880, 0x034e900, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap B (1/2)", 0x034eb00, 0x034eb80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap B (2/2)", 0x034eb80, 0x034ec00, indexJojos51Iggy, indexJojos51Character_BurnZap},
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_C[] =
{
    { L"Iggy & The Fool C", 0x0362c80, 0x0362d00, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Raging Demon Trail C (1/3)", 0x0363480, 0x0363500, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail C (2/3)", 0x0363500, 0x0363580, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail C (3/3)", 0x0363580, 0x0363600, indexJojos51Iggy, 1  },
    { L"Iggy Vs / Super C", 0x041ab00, 0x041ab80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger C", 0x041ab80, 0x041ac00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Iggy Select / Winning C (1/2)", 0x041ac00, 0x041ac80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Iggy Select / Winning C (2/2)", 0x041ac80, 0x041ad00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Iggy Select / Winning C", 0x041ac00, 0x041ad00 },
#endif
    { L"Iggy Burning C (1/2)", 0x0362d00, 0x0362d80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning C (2/2)", 0x0362d80, 0x0362e00, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap C (1/2)", 0x0363000, 0x0363080, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap C (2/2)", 0x0363080, 0x0363100, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_S[] =
{
    { L"Iggy & The Fool S", 0x0377180, 0x0377200, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Raging Demon Trail S (1/3)", 0x0377980, 0x0377a00, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail S (2/3)", 0x0377a00, 0x0377a80, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail S (3/3)", 0x0377a80, 0x0377b00, indexJojos51Iggy, 1  },
    { L"Iggy Vs / Super S", 0x041f900, 0x041f980, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger S", 0x041f980, 0x041fa00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Iggy Select / Winning S (1/2)", 0x041fa00, 0x041fa80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Iggy Select / Winning S (2/2)", 0x041fa80, 0x041fb00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Iggy Select / Winning S", 0x041fa00, 0x041fb00 },
#endif
    { L"Iggy Burning S (1/2)", 0x0377200, 0x0377280, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning S (2/2)", 0x0377280, 0x0377300, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap S (1/2)", 0x0377500, 0x0377580, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap S (2/2)", 0x0377580, 0x0377600, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Start[] =
{
    { L"Iggy & The Fool Start", 0x038b680, 0x038b700, indexJojos51Iggy, indexJojos51Character_Main },
    { L"Raging Demon Trail Start (1/3)", 0x038be80, 0x038bf00, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail Start (2/3)", 0x038bf00, 0x038bf80, indexJojos51Iggy, 1  },
    { L"Raging Demon Trail Start (3/3)", 0x038bf80, 0x038c000, indexJojos51Iggy, 1  },
    { L"Iggy Vs / Super Start", 0x0424700, 0x0424780, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger Start", 0x0424780, 0x0424800, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Iggy Select / Winning Start (1/2)", 0x0424800, 0x0424880, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Iggy Select / Winning Start (2/2)", 0x0424880, 0x0424900, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Iggy Select / Winning Start", 0x0424800, 0x0424900 },
#endif
    { L"Iggy Burning Start (1/2)", 0x038b700, 0x038b780, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burning Start (2/2)", 0x038b780, 0x038b800, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap Start (1/2)", 0x038ba00, 0x038ba80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap Start (2/2)", 0x038ba80, 0x038bb00, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_A[] =
{
    { L"Alessi & Sethan A", 0x033af00, 0x033af80, indexJojos51Alessi },
    { L"Alessi A Wave Attack", 0x033b780, 0x033b7c0, indexJojos51Alessi, 1 },
    { L"Alessi Tech/Zap/CC A (1/2)", 0x033b280, 0x033b300, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC A (2/2)", 0x033b300, 0x033b380, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose A", 0x033b800, 0x033b880, indexJojos51Alessi, 2 },
    { L"Alessi Vs / Super A", 0x0411200, 0x0411280, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger A", 0x0411280, 0x0411300, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning A (1/2)", 0x0411300, 0x0411380, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Alessi Select / Winning A (2/2)", 0x0411380, 0x0411400, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Alessi Burning A (1/2)", 0x033af80, 0x033b000, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning A (2/2)", 0x033b000, 0x033b080, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_B[] =
{
    { L"Alessi & Sethan B", 0x034f400, 0x034f480, indexJojos51Alessi },
    { L"Alessi B Wave Attack", 0x034fc80, 0x034fcc0, indexJojos51Alessi, 1 },
    { L"Alessi Tech/Zap/CC B (1/2)", 0x034f780, 0x034f800, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC B (2/2)", 0x034f800, 0x034f880, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose B", 0x034fd00, 0x034fd80, indexJojos51Alessi, 2 },
    { L"Alessi Vs / Super B", 0x0416000, 0x0416080, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger B", 0x0416080, 0x0416100, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning B (1/2)", 0x0416100, 0x0416180, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Alessi Select / Winning B (2/2)", 0x0416180, 0x0416200, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Alessi Burning B (1/2)", 0x034f480, 0x034f500, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning B (2/2)", 0x034f500, 0x034f580, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_C[] =
{
    { L"Alessi & Sethan C", 0x0363900, 0x0363980, indexJojos51Alessi },
    { L"Alessi C Wave Attack", 0x0364180, 0x03641c0, indexJojos51Alessi, 1 },
    { L"Alessi Tech/Zap/CC C (1/2)", 0x0363c80, 0x0363d00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC C (2/2)", 0x0363d00, 0x0363d80, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose C", 0x0364200, 0x0364280, indexJojos51Alessi, 2 },
    { L"Alessi Vs / Super C", 0x041ae00, 0x041ae80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger C", 0x041ae80, 0x041af00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning C (1/2)", 0x041af00, 0x041af80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Alessi Select / Winning C (2/2)", 0x041af80, 0x041b000, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Alessi Burning C (1/2)", 0x0363980, 0x0363a00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning C (2/2)", 0x0363a00, 0x0363a80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_S[] =
{
    { L"Alessi & Sethan S", 0x0377e00, 0x0377e80, indexJojos51Alessi },
    { L"Alessi S Wave Attack", 0x0378680, 0x03786c0, indexJojos51Alessi, 1 },
    { L"Alessi Tech/Zap/CC S (1/2)", 0x0378180, 0x0378200, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC S (2/2)", 0x0378200, 0x0378280, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose S", 0x0378700, 0x0378780, indexJojos51Alessi, 2 },
    { L"Alessi Vs / Super S", 0x041fc00, 0x041fc80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger S", 0x041fc80, 0x041fd00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning S (1/2)", 0x041fd00, 0x041fd80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Alessi Select / Winning S (2/2)", 0x041fd80, 0x041fe00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Alessi Burning S (1/2)", 0x0377e80, 0x0377f00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning S (2/2)", 0x0377f00, 0x0377f80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_Start[] =
{
    { L"Alessi & Sethan Start", 0x038c300, 0x038c380, indexJojos51Alessi },
    { L"Alessi Start Wave Attack", 0x038cb80, 0x038cbc0, indexJojos51Alessi, 1 },
    { L"Alessi Tech/Zap/CC Start (1/2)", 0x038c680, 0x038c700, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Tech/Zap/CC Start (2/2)", 0x038c700, 0x038c780, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Winpose Start", 0x038cc00, 0x038cc80, indexJojos51Alessi, 2 },
    { L"Alessi Vs / Super Start", 0x0424a00, 0x0424a80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger Start", 0x0424a80, 0x0424b00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { L"Alessi Select / Winning Start (1/2)", 0x0424b00, 0x0424b80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Alessi Select / Winning Start (2/2)", 0x0424b80, 0x0424c00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Alessi Burning Start (1/2)", 0x038c380, 0x038c400, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { L"Alessi Burning Start (2/2)", 0x038c400, 0x038c480, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_A[] =
{
    { L"Chaka A", 0x033bb80, 0x033bc00, indexJojos51Chaka },
    { L"Chaka A Super Trail", 0x033c400, 0x033c480, indexJojos51Chaka, 1 },
    { L"Chaka Tech/Zap/CC/Counter A (1/2)", 0x033bf00, 0x033bf80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter A (2/2)", 0x033bf80, 0x033c000, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super A", 0x0411500, 0x0411580, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger A", 0x0411580, 0x0411600, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning A", 0x0411600, 0x0411680, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning A (1/2)", 0x033bc00, 0x033bc80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning A (2/2)", 0x033bc80, 0x033bd00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_B[] =
{
    { L"Chaka B", 0x0350080, 0x0350100, indexJojos51Chaka },
    { L"Chaka B Super Trail", 0x0350900, 0x0350980, indexJojos51Chaka, 1 },
    { L"Chaka Tech/Zap/CC/Counter B (1/2)", 0x0350400, 0x0350480, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter B (2/2)", 0x0350480, 0x0350500, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super B", 0x0416300, 0x0416380, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger B", 0x0416380, 0x0416400, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning B", 0x0416400, 0x0416480, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning B (1/2)", 0x0350100, 0x0350180, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning B (2/2)", 0x0350180, 0x0350200, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_C[] =
{
    { L"Chaka C", 0x0364580, 0x0364600, indexJojos51Chaka },
    { L"Chaka C Super Trail", 0x0364e00, 0x0364e80, indexJojos51Chaka, 1 },
    { L"Chaka Tech/Zap/CC/Counter C (1/2)", 0x0364900, 0x0364980, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter C (2/2)", 0x0364980, 0x0364a00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super C", 0x041b100, 0x041b180, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger C", 0x041b180, 0x041b200, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning C", 0x041b200, 0x041b280, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning C (1/2)", 0x0364600, 0x0364680, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning C (2/2)", 0x0364680, 0x0364700, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_S[] =
{
    { L"Chaka S", 0x0378a80, 0x0378b00, indexJojos51Chaka },
    { L"Chaka S Super Trail", 0x0379300, 0x0379380, indexJojos51Chaka, 1 },
    { L"Chaka Tech/Zap/CC/Counter S (1/2)", 0x0378e00, 0x0378e80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter S (2/2)", 0x0378e80, 0x0378f00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super S", 0x041ff00, 0x041ff80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger S", 0x041ff80, 0x0420000, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning S", 0x0420000, 0x0420080, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning S (1/2)", 0x0378b00, 0x0378b80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning S (2/2)", 0x0378b80, 0x0378c00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_Start[] =
{
    { L"Chaka Start", 0x038cf80, 0x038d000, indexJojos51Chaka },
    { L"Chaka Start Super Trail", 0x038d800, 0x038d880, indexJojos51Chaka, 1 },
    { L"Chaka Tech/Zap/CC/Counter Start (1/2)", 0x038d300, 0x038d380, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Tech/Zap/CC/Counter Start (2/2)", 0x038d380, 0x038d400, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Vs / Super Start", 0x0424d00, 0x0424d80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger Start", 0x0424d80, 0x0424e00, indexJojos51Chaka, indexJojos51Character_Challenger },
    { L"Chaka Select / Winning Start", 0x0424e00, 0x0424e80, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Burning Start (1/2)", 0x038d000, 0x038d080, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { L"Chaka Burning Start (2/2)", 0x038d080, 0x038d100, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_A[] =
{
    { L"Devo & Ebony Devil A", 0x033c800, 0x033c880, indexJojos51Devo },
    { L"Ebony Devil Stand Off A", 0x033cf00, 0x033cf80, indexJojos51Devo, 2 },
    { L"Ebony Stand On Transition A", 0x033ce00, 0x033ce80, indexJojos51Devo, 2 },
    { L"Ebony Super Trail A (1/3)", 0x033d100, 0x033d180, indexJojos51Devo, 2 },
    { L"Ebony Super Trail A (2/3)", 0x033d180, 0x033d200, indexJojos51Devo, 2 },
    { L"Ebony Super Trail A (3/3)", 0x033d200, 0x033d280, indexJojos51Devo, 2 },
    { L"Devo Intro Stuff A", 0x033d400, 0x033d480, indexJojos51Devo, 1 },
    { L"Devo Vs / Super A", 0x0411800, 0x0411880, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger A", 0x0411880, 0x0411900, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning A (1/2)", 0x0411900, 0x0411980, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Devo Select / Winning A (2/2)", 0x0411980, 0x0411a00, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Devo & Ebony Devil Burning A (1/2)", 0x033c880, 0x033c900, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning A (2/2)", 0x033c900, 0x033c980, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap A (1/2)", 0x033cb80, 0x033cc00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap A (2/2)", 0x033cc00, 0x033cc80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_B[] =
{
    { L"Devo & Ebony Devil B", 0x0350d00, 0x0350d80, indexJojos51Devo },
    { L"Ebony Devil Stand Off B", 0x0351400, 0x0351480, indexJojos51Devo, 2 },
    { L"Ebony Stand On Transition B", 0x0351300, 0x0351380, indexJojos51Devo, 2 },
    { L"Ebony Super Trail B (1/3)", 0x0351600, 0x0351680, indexJojos51Devo, 2 },
    { L"Ebony Super Trail B (2/3)", 0x0351680, 0x0351700, indexJojos51Devo, 2 },
    { L"Ebony Super Trail B (3/3)", 0x0351700, 0x0351780, indexJojos51Devo, 2 },
    { L"Devo Intro Stuff B", 0x0351900, 0x0351980, indexJojos51Devo, 1 },
    { L"Devo Vs / Super B", 0x0416600, 0x0416680, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger B", 0x0416680, 0x0416700, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning B (1/2)", 0x0416700, 0x0416780, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Devo Select / Winning B (2/2)", 0x0416780, 0x0416800, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Devo & Ebony Devil Burning B (1/2)", 0x0350d80, 0x0350e00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning B (2/2)", 0x0350e00, 0x0350e80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap B (1/2)", 0x0351080, 0x0351100, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap B (2/2)", 0x0351100, 0x0351180, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_C[] =
{
    { L"Devo & Ebony Devil C", 0x0365200, 0x0365280, indexJojos51Devo },
    { L"Ebony Devil Stand Off C", 0x0365900, 0x0365980, indexJojos51Devo, 2 },
    { L"Ebony Stand On Transition C", 0x0365800, 0x0365880, indexJojos51Devo, 2 },
    { L"Ebony Super Trail C (1/3)", 0x0365b00, 0x0365b80, indexJojos51Devo, 2 },
    { L"Ebony Super Trail C (2/3)", 0x0365b80, 0x0365c00, indexJojos51Devo, 2 },
    { L"Ebony Super Trail C (3/3)", 0x0365c00, 0x0365c80, indexJojos51Devo, 2 },
    { L"Devo Intro Stuff C", 0x0365e00, 0x0365e80, indexJojos51Devo, 1 },
    { L"Devo Vs / Super C", 0x041b400, 0x041b480, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger C", 0x041b480, 0x041b500, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning C (1/2)", 0x041b500, 0x041b580, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Devo Select / Winning C (2/2)", 0x041b580, 0x041b600, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Devo & Ebony Devil Burning C (1/2)", 0x0365280, 0x0365300, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning C (2/2)", 0x0365300, 0x0365380, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap C (1/2)", 0x0365580, 0x0365600, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap C (2/2)", 0x0365600, 0x0365680, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_S[] =
{
    { L"Devo & Ebony Devil S", 0x0379700, 0x0379780, indexJojos51Devo },
    { L"Ebony Devil Stand Off S", 0x0379e00, 0x0379e80, indexJojos51Devo, 2 },
    { L"Ebony Stand On Transition S", 0x0379d00, 0x0379d80, indexJojos51Devo, 2 },
    { L"Ebony Super Trail S (1/3)", 0x037a000, 0x037a080, indexJojos51Devo, 2 },
    { L"Ebony Super Trail S (2/3)", 0x037a080, 0x037a100, indexJojos51Devo, 2 },
    { L"Ebony Super Trail S (3/3)", 0x037a100, 0x037a180, indexJojos51Devo, 2 },
    { L"Devo Intro Stuff S", 0x037a300, 0x037a380, indexJojos51Devo, 1 },
    { L"Devo Vs / Super S", 0x0420200, 0x0420280, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger S", 0x0420280, 0x0420300, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning S (1/2)", 0x0420300, 0x0420380, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Devo Select / Winning S (2/2)", 0x0420380, 0x0420400, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Devo & Ebony Devil Burning S (1/2)", 0x0379780, 0x0379800, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning S (2/2)", 0x0379800, 0x0379880, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap S (1/2)", 0x0379a80, 0x0379b00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap S (2/2)", 0x0379b00, 0x0379b80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start[] =
{
    { L"Devo & Ebony Devil Start", 0x038dc00, 0x038dc80, indexJojos51Devo },
    { L"Ebony Devil Stand Off Start", 0x038e300, 0x038e380, indexJojos51Devo, 2 },
    { L"Ebony Stand On Transition Start", 0x038e200, 0x038e280, indexJojos51Devo, 2 },
    { L"Ebony Super Trail Start (1/3)", 0x038e500, 0x038e580, indexJojos51Devo, 2 },
    { L"Ebony Super Trail Start (2/3)", 0x038e580, 0x038e600, indexJojos51Devo, 2 },
    { L"Ebony Super Trail Start (3/3)", 0x038e600, 0x038e680, indexJojos51Devo, 2 },
    { L"Devo Intro Stuff Start", 0x038e800, 0x038e880, indexJojos51Devo, 1 },
    { L"Devo Vs / Super Start", 0x0425000, 0x0425080, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger Start", 0x0425080, 0x0425100, indexJojos51Devo, indexJojos51Character_Challenger },
    { L"Devo Select / Winning Start (1/2)", 0x0425100, 0x0425180, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Devo Select / Winning Start (2/2)", 0x0425180, 0x0425200, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Devo & Ebony Devil Burning Start (1/2)", 0x038dc80, 0x038dd00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo & Ebony Devil Burning Start (2/2)", 0x038dd00, 0x038dd80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap Start (1/2)", 0x038df80, 0x038e000, indexJojos51Devo, indexJojos51Character_BurnZap },
    { L"Devo Tech/Zap Start (2/2)", 0x038e000, 0x038e080, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_A[] =
{
    { L"Midler & High Priestess A", 0x033e100, 0x033e180, indexJojos51Midler },
    { L"Midler's Super Cars A (1/4)", 0x033e980, 0x033ea00, indexJojos51Midler, 1 },
    { L"Midler's Super Cars A (2/4)", 0x033ea00, 0x033ea80, indexJojos51Midler, 1 },
    { L"Midler's Super Cars A (3/4)", 0x033ea80, 0x033eb00, indexJojos51Midler, 1 },
    { L"Midler's Super Cars A (4/4)", 0x033eb00, 0x033eb80, indexJojos51Midler, 1 },
    { L"Midler 236s A", 0x033E880, 0x033E900, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws A", 0x033eb80, 0x033ec00, indexJojos51Midler, 2 },
    { L"Midler Vs / Super A", 0x0411e00, 0x0411e80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger A", 0x0411e80, 0x0411f00, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning A (1/2)", 0x0411f00, 0x0411f80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Midler Select / Winning A (2/2)", 0x0411f80, 0x0412000, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Midler & Burning A (1/2)", 0x033e180, 0x033e200, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning A (2/2)", 0x033e200, 0x033e280, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap A (1/2)", 0x033e480, 0x033e500, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap A (2/2)", 0x033e500, 0x033e580, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_B[] =
{
    { L"Midler & High Priestess B", 0x0352600, 0x0352680, indexJojos51Midler },
    { L"Midler's Super Cars B (1/4)", 0x0352e80, 0x0352f00, indexJojos51Midler, 1 },
    { L"Midler's Super Cars B (2/4)", 0x0352f00, 0x0352f80, indexJojos51Midler, 1 },
    { L"Midler's Super Cars B (3/4)", 0x0352f80, 0x0353000, indexJojos51Midler, 1 },
    { L"Midler's Super Cars B (4/4)", 0x0353000, 0x0353080, indexJojos51Midler, 1 },
    { L"Midler 236s B", 0x0352D80, 0x0352E00, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws B", 0x0353080, 0x0353100, indexJojos51Midler, 2 },
    { L"Midler Vs / Super B", 0x0416c00, 0x0416c80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger B", 0x0416c80, 0x0416d00, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning B (1/2)", 0x0416d00, 0x0416d80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Midler Select / Winning B (2/2)", 0x0416d80, 0x0416e00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Midler & Burning B (1/2)", 0x0352680, 0x0352700, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning B (2/2)", 0x0352700, 0x0352780, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap B (1/2)", 0x0352980, 0x0352a00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap B (2/2)", 0x0352a00, 0x0352a80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_C[] =
{
    { L"Midler & High Priestess C", 0x0366b00, 0x0366b80, indexJojos51Midler },
    { L"Midler's Super Cars C (1/4)", 0x0367380, 0x0367400, indexJojos51Midler, 1 },
    { L"Midler's Super Cars C (2/4)", 0x0367400, 0x0367480, indexJojos51Midler, 1 },
    { L"Midler's Super Cars C (3/4)", 0x0367480, 0x0367500, indexJojos51Midler, 1 },
    { L"Midler's Super Cars C (4/4)", 0x0367500, 0x0367580, indexJojos51Midler, 1 },
    { L"Midler 236s C", 0x0367280, 0x0367300, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws C", 0x0367580, 0x0367600, indexJojos51Midler, 2 },
    { L"Midler Vs / Super C", 0x041ba00, 0x041ba80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger C", 0x041ba80, 0x041bb00, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning C (1/2)", 0x041bb00, 0x041bb80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Midler Select / Winning C (2/2)", 0x041bb80, 0x041bc00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Midler & Burning C (1/2)", 0x0366b80, 0x0366c00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning C (2/2)", 0x0366c00, 0x0366c80, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap C (1/2)", 0x0366e80, 0x0366f00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap C (2/2)", 0x0366f00, 0x0366f80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_S[] =
{
    { L"Midler & High Priestess S", 0x037b000, 0x037b080, indexJojos51Midler },
    { L"Midler's Super Cars S (1/4)", 0x037b880, 0x037b900, indexJojos51Midler, 1 },
    { L"Midler's Super Cars S (2/4)", 0x037b900, 0x037b980, indexJojos51Midler, 1 },
    { L"Midler's Super Cars S (3/4)", 0x037b980, 0x037ba00, indexJojos51Midler, 1 },
    { L"Midler's Super Cars S (4/4)", 0x037ba00, 0x037ba80, indexJojos51Midler, 1 },
    { L"Midler 236s S", 0x037B780, 0x037B800, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws S", 0x037ba80, 0x037bb00, indexJojos51Midler, 2 },
    { L"Midler Vs / Super S", 0x0420800, 0x0420880, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger S", 0x0420880, 0x0420900, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning S (1/2)", 0x0420900, 0x0420980, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Midler Select / Winning S (2/2)", 0x0420980, 0x0420a00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Midler & Burning S (1/2)", 0x037b080, 0x037b100, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning S (2/2)", 0x037b100, 0x037b180, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap S (1/2)", 0x037b380, 0x037b400, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap S (2/2)", 0x037b400, 0x037b480, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_Start[] =
{
    { L"Midler & High Priestess Start", 0x038f500, 0x038f580, indexJojos51Midler },
    { L"Midler's Super Cars Start (1/4)", 0x038fd80, 0x038fe00, indexJojos51Midler, 1 },
    { L"Midler's Super Cars Start (2/4)", 0x038fe00, 0x038fe80, indexJojos51Midler, 1 },
    { L"Midler's Super Cars Start (3/4)", 0x038fe80, 0x038ff00, indexJojos51Midler, 1 },
    { L"Midler's Super Cars Start (4/4)", 0x038ff00, 0x038ff80, indexJojos51Midler, 1 },
    { L"Midler 236s Start", 0x038FC80, 0x038FD00, indexJojos51Midler, 0x08 },
    { L"High Priestess' Beam/Jaws Start", 0x038ff80, 0x0390000, indexJojos51Midler, 2 },
    { L"Midler Vs / Super Start", 0x0425600, 0x0425680, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger Start", 0x0425680, 0x0425700, indexJojos51Midler, indexJojos51Character_Challenger },
    { L"Midler Select / Winning Start (1/2)", 0x0425700, 0x0425780, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Midler Select / Winning Start (2/2)", 0x0425780, 0x0425800, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Midler & Burning Start (1/2)", 0x038f580, 0x038f600, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler & Burning Start (2/2)", 0x038f600, 0x038f680, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap Start (1/2)", 0x038f880, 0x038f900, indexJojos51Midler, indexJojos51Character_BurnZap },
    { L"Midler Tech/Zap Start (2/2)", 0x038f900, 0x038f980, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_A[] =
{
    { L"DIO & The World A", 0x033ed80, 0x033ee00, indexJojos51Dio },
    { L"DIO Intro Stuff A", 0x033f700, 0x033f780, indexJojos51Dio, 1 },
    { L"The World's \"Bloody Summoning\" A", 0x033f800, 0x033f880, indexJojos51Dio, 2 },
    { L"DIO Tele Initial Flash A", 0x033f500, 0x033f580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport A", 0x033f680, 0x033f700, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku A", 0x033f780, 0x033f7c0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super A", 0x0412100, 0x0412180, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger A", 0x0412180, 0x0412200, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning A (1/2)", 0x0412200, 0x0412280, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"DIO Select / Winning A (2/2)", 0x0412280, 0x0412300, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"DIO & The World Burning A (1/2)", 0x033ee00, 0x033ee80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning A (2/2)", 0x033ee80, 0x033ef00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap A (1/2)", 0x033f100, 0x033f180, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap A (2/2)", 0x033f180, 0x033f200, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_B[] =
{
    { L"DIO & The World B", 0x0353280, 0x0353300, indexJojos51Dio },
    { L"DIO Intro Stuff B", 0x0353c00, 0x0353c80, indexJojos51Dio, 1 },
    { L"The World's \"Bloody Summoning\" B", 0x0353d00, 0x0353d80, indexJojos51Dio, 2 },
    { L"DIO Tele Initial Flash B", 0x0353a00, 0x0353a80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport B", 0x0353b80, 0x0353c00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku B", 0x0353c80, 0x0353cc0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super B", 0x0416f00, 0x0416f80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger B", 0x0416f80, 0x0417000, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning B (1/2)", 0x0417000, 0x0417080, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"DIO Select / Winning B (2/2)", 0x0417080, 0x0417100, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"DIO & The World Burning B (1/2)", 0x0353300, 0x0353380, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning B (2/2)", 0x0353380, 0x0353400, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap B (1/2)", 0x0353600, 0x0353680, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap B (2/2)", 0x0353680, 0x0353700, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_C[] =
{
    { L"DIO & The World C", 0x0367780, 0x0367800, indexJojos51Dio },
    { L"DIO Intro Stuff C", 0x0368100, 0x0368180, indexJojos51Dio, 1 },
    { L"The World's \"Bloody Summoning\" C", 0x0368200, 0x0368280, indexJojos51Dio, 2 },
    { L"DIO Tele Initial Flash C", 0x0367f00, 0x0367f80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport C", 0x0368080, 0x0368100, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku C", 0x0368180, 0x03681c0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super C", 0x041bd00, 0x041bd80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger C", 0x041bd80, 0x041be00, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning C (1/2)", 0x041be00, 0x041be80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"DIO Select / Winning C (2/2)", 0x041be80, 0x041bf00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"DIO & The World Burning C (1/2)", 0x0367800, 0x0367880, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning C (2/2)", 0x0367880, 0x0367900, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap C (1/2)", 0x0367b00, 0x0367b80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap C (2/2)", 0x0367b80, 0x0367c00, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_S[] =
{
    { L"DIO & The World S", 0x037bc80, 0x037bd00, indexJojos51Dio },
    { L"DIO Intro Stuff S", 0x037c600, 0x037c680, indexJojos51Dio, 1 },
    { L"The World's \"Bloody Summoning\" S", 0x037c700, 0x037c780, indexJojos51Dio, 2 },
    { L"DIO Tele Initial Flash S", 0x037c400, 0x037c480, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport S", 0x037c580, 0x037c600, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku S", 0x037c680, 0x037c6c0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super S", 0x0420b00, 0x0420b80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger S", 0x0420b80, 0x0420c00, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning S (1/2)", 0x0420c00, 0x0420c80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"DIO Select / Winning S (2/2)", 0x0420c80, 0x0420d00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"DIO & The World Burning S (1/2)", 0x037bd00, 0x037bd80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning S (2/2)", 0x037bd80, 0x037be00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap S (1/2)", 0x037c000, 0x037c080, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap S (2/2)", 0x037c080, 0x037c100, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_Start[] =
{
    { L"DIO & The World Start", 0x0390180, 0x0390200, indexJojos51Dio },
    { L"DIO Intro Stuff Start", 0x0390b00, 0x0390b80, indexJojos51Dio, 1 },
    { L"The World's \"Bloody Summoning\" Start", 0x0390c00, 0x0390c80, indexJojos51Dio, 2 },
    { L"DIO Tele Initial Flash Start", 0x0390900, 0x0390980, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Teleport Start", 0x0390a80, 0x0390b00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"Nukesaku Start", 0x0390b80, 0x0390bc0, indexJojos51Dio, 8 },
    { L"DIO Vs / Super Start", 0x0425900, 0x0425980, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger Start", 0x0425980, 0x0425a00, indexJojos51Dio, indexJojos51Character_Challenger },
    { L"DIO Select / Winning Start (1/2)", 0x0425a00, 0x0425a80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"DIO Select / Winning Start (2/2)", 0x0425a80, 0x0425b00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"DIO & The World Burning Start (1/2)", 0x0390200, 0x0390280, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO & The World Burning Start (2/2)", 0x0390280, 0x0390300, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap Start (1/2)", 0x0390500, 0x0390580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { L"DIO Afterimages/Tech/Zap Start (2/2)", 0x0390580, 0x0390600, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_A[] =
{
    { L"Shadow DIO A", 0x0341300, 0x0341380, indexJojos51SDio },
    { L"623aa trail A", 0x0341b80, 0x0341c00, indexJojos51SDio, 1 },
    { L"5s trail A", 0x0341ac0, 0x0341ae0, indexJojos51SDio, 2 },
    { L"41236s trail A", 0x0341ec0, 0x0341ee0, indexJojos51SDio, 2},
    { L"236aa trail A", 0x0341b40, 0x0341b60, indexJojos51SDio, 2 },
    { L"Wang Chan A", 0x0341d00, 0x0341d40, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super A", 0x0412a00, 0x0412a80, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger A", 0x0412a80, 0x0412b00, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning A", 0x0412b00, 0x0412b80, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning A (1/2)", 0x0341380, 0x0341400, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning A (2/2)", 0x0341400, 0x0341480, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap A (1/2)", 0x0341680, 0x0341700, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap A (2/2)", 0x0341700, 0x0341780, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_B[] =
{
    { L"Shadow DIO B", 0x0355800, 0x0355880, indexJojos51SDio },
    { L"623aa trail B", 0x0356080, 0x0356100, indexJojos51SDio, 1 },
    { L"5s trail B", 0x0355fc0, 0x0356000, indexJojos51SDio, 2 },
    { L"41236s trail B", 0x03563c0, 0x0356400, indexJojos51SDio, 2 },
    { L"236aa trail B", 0x0356040, 0x0356060, indexJojos51SDio, 2 },
    { L"Wang Chan B", 0x0356200, 0x0356240, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super B", 0x0417800, 0x0417880, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger B", 0x0417880, 0x0417900, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning B", 0x0417900, 0x0417980, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning B (1/2)", 0x0355880, 0x0355900, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning B (2/2)", 0x0355900, 0x0355980, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap B (1/2)", 0x0355b80, 0x0355c00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap B (2/2)", 0x0355c00, 0x0355c80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_C[] =
{
    { L"Shadow DIO C", 0x0369d00, 0x0369d80, indexJojos51SDio },
    { L"623aa trail C", 0x036a580, 0x036a600, indexJojos51SDio, 1 },
    { L"5s trail C", 0x036a4c0, 0x036a500, indexJojos51SDio, 2 },
    { L"41236s trail C", 0x036a8c0, 0x036a900, indexJojos51SDio, 2 },
    { L"236aa trail C", 0x036a540, 0x036a560, indexJojos51SDio, 2 },
    { L"Wang Chan C", 0x036a700, 0x036a740, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super C", 0x041c600, 0x041c680, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger C", 0x041c680, 0x041c700, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning Screen C", 0x041c700, 0x041c780, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning C (1/2)", 0x0369d80, 0x0369e00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning C (2/2)", 0x0369e00, 0x0369e80, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap C (1/2)", 0x036a080, 0x036a100, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap C (2/2)", 0x036a100, 0x036a180, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_S[] =
{
    { L"Shadow DIO S", 0x037e200, 0x037e280, indexJojos51SDio },
    { L"623aa trail S", 0x037ea80, 0x037eb00, indexJojos51SDio, 1 },
    { L"5s trail S", 0x037e9c0, 0x037ea00, indexJojos51SDio, 2 },
    { L"41236s trail S",  0x037edc0, 0x037ee00, indexJojos51SDio, 2 },
    { L"236aa trail S", 0x037ea40, 0x037ea60, indexJojos51SDio, 2 },
    { L"Wang Chan S", 0x037ec00, 0x037ec40, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super S", 0x0421400, 0x0421480, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger S", 0x0421480, 0x0421500, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning Screen S", 0x0421500, 0x0421580, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning S (1/2)", 0x037e280, 0x037e300, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning S (2/2)", 0x037e300, 0x037e380, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap S (1/2)", 0x037e580, 0x037e600, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap S (2/2)", 0x037e600, 0x037e680, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_Start[] =
{
    { L"Shadow DIO Start", 0x0392700, 0x0392780, indexJojos51SDio },
    { L"623aa trail Start", 0x0392f80, 0x0393000, indexJojos51SDio, 1  },
    { L"5s trail Start", 0x0392ec0, 0x0392f00, indexJojos51SDio, 2 },
    { L"41236s trail Start",  0x03932c0, 0x0393300, indexJojos51SDio, 2 },
    { L"236aa trail Start", 0x0392f40, 0x0392f60, indexJojos51SDio, 2 },
    { L"Wang Chan Start", 0x0393100, 0x0393140, indexJojos51SDio, 8 },
    { L"Shadow DIO Vs / Super Start", 0x0426200, 0x0426280, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow DIO Challenger Start", 0x0426280, 0x0426300, indexJojos51SDio, indexJojos51Character_Challenger },
    { L"Shadow DIO Select / Winning Screen Start", 0x0426300, 0x0426380, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow DIO Burning Start (1/2)", 0x0392780, 0x0392800, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Burning Start (2/2)", 0x0392800, 0x0392880, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap Start (1/2)", 0x0392a80, 0x0392b00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { L"Shadow DIO Tech/Zap Start (2/2)", 0x0392b00, 0x0392b80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_A[] =
{
    { L"Young Joseph A", 0x0341f80, 0x0342000, indexJojos51YSeph },
    { L"Young Joseph Vs / Super A", 0x0412d00, 0x0412d80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger A", 0x0412d80, 0x0412e00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning Screen A", 0x0412e00, 0x0412e80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash A", 0x0342800, 0x0342880, indexJojos51YSeph, 1 },
    { L"Young Joseph Burning A (1/2)", 0x0342000, 0x0342080, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning A (2/2)", 0x0342080, 0x0342100, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap A (1/2)", 0x0342300, 0x0342380, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap A (2/2)", 0x0342380, 0x0342400, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_B[] =
{
    { L"Young Joseph B", 0x0356480, 0x0356500, indexJojos51YSeph },
    { L"Young Joseph Vs / Super B", 0x0417b00, 0x0417b80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger B", 0x0417b80, 0x0417c00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning B", 0x0417c00, 0x0417c80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash B", 0x0356D00, 0x0356D80, indexJojos51YSeph, 1 },
    { L"Young Joseph Burning B (1/2)", 0x0356500, 0x0356580, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning B (2/2)", 0x0356580, 0x0356600, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap B (1/2)", 0x0356800, 0x0356880, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap B (2/2)", 0x0356880, 0x0356900, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_C[] =
{
    { L"Young Joseph C", 0x036a980, 0x036aa00, indexJojos51YSeph },
    { L"Young Joseph Vs / Super C", 0x041c900, 0x041c980, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger C", 0x041c980, 0x041ca00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning C", 0x041ca00, 0x041ca80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash C", 0x036B200, 0x036B280, indexJojos51YSeph, 1 },
    { L"Young Joseph Burning C (1/2)", 0x036aa00, 0x036aa80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning C (2/2)", 0x036aa80, 0x036ab00, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap C (1/2)", 0x036ad00, 0x036ad80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap C (2/2)", 0x036ad80, 0x036ae00, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_S[] =
{
    { L"Young Joseph S", 0x037ee80, 0x037ef00, indexJojos51YSeph },
    { L"Young Joseph Vs / Super S", 0x0421700, 0x0421780, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger S", 0x0421780, 0x0421800, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning Screen S", 0x0421800, 0x0421880, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash S", 0x037F700, 0x037F780, indexJojos51YSeph, 1 },
    { L"Young Joseph Burning S (1/2)", 0x037ef00, 0x037ef80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning S (2/2)", 0x037ef80, 0x037f000, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap S (1/2)", 0x037f200, 0x037f280, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap S (2/2)", 0x037f280, 0x037f300, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_Start[] =
{
    { L"Young Joseph Start", 0x0393380, 0x0393400, indexJojos51YSeph },
    { L"Young Joseph Vs / Super Start", 0x0426500, 0x0426580, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger Start", 0x0426580, 0x0426600, indexJojos51YSeph, indexJojos51Character_Challenger },
    { L"Young Joseph Select / Winning Screen Start", 0x0426600, 0x0426680, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Hamon Cola Flash Start", 0x0393C00, 0x0393C80, indexJojos51YSeph, 1 },
    { L"Young Joseph Burning Start (1/2)", 0x0393400, 0x0393480, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Burning Start (2/2)", 0x0393480, 0x0393500, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap Start (1/2)", 0x0393700, 0x0393780, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { L"Young Joseph Tech/Zap Start (2/2)", 0x0393780, 0x0393800, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_A[] =
{
    { L"Hol Horse A", 0x0342c00, 0x0342c80, indexJojos51Hol, 0x00 },
    { L"Hol Horse Super Bullets A", 0x0343540, 0x0343560 },
    { L"Hol Horse 421 Super 1 A", 0x03435C0, 0x03435E0 },
    { L"Hol Horse 421 Super 2 A", 0x0343640, 0x0343660 },
    { L"Hol's Intro/Winpose Stuff & Boingo A", 0x0343480, 0x0343500, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super A", 0x0413000, 0x0413080, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger A", 0x0413080, 0x0413100, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning A", 0x0413100, 0x0413180, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning A (1/2)", 0x0342c80, 0x0342d00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning A (2/2)", 0x0342d00, 0x0342d80, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap A (1/2)", 0x0342f80, 0x0343000, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap A (2/2)", 0x0343000, 0x0343080, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_B[] =
{
    { L"Hol Horse B", 0x0357100, 0x0357180, indexJojos51Hol, 0x00 },
    { L"Hol Horse Super Bullets B", 0x0357A40, 0x0357A60 },
    { L"Hol Horse 421 Super 1 B", 0x0357AC0, 0x0357AE0 },
    { L"Hol Horse 421 Super 2 B", 0x0357B40, 0x0357B60 },
    { L"Hol's Intro/Winpose Stuff & Boingo B", 0x0357980, 0x0357a00, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super B", 0x0417e00, 0x0417e80, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger B", 0x0417e80, 0x0417f00, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning B", 0x0417f00, 0x0417f80, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning B (1/2)", 0x0357180, 0x0357200, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning B (2/2)", 0x0357200, 0x0357280, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap B (1/2)", 0x0357480, 0x0357500, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap B (2/2)", 0x0357500, 0x0357580, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_C[] =
{
    { L"Hol Horse C", 0x036b600, 0x036b680, indexJojos51Hol, 0x00 },
    { L"Hol Horse Super Bullets C", 0x036BF40, 0x036BF60 },
    { L"Hol Horse 421 Super 1 C", 0x036BFC0, 0x036BFE0 },
    { L"Hol Horse 421 Super 2 C", 0x036C040, 0x036C060 },
    { L"Hol's Intro/Winpose Stuff & Boingo C", 0x036be80, 0x036bf00, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super C", 0x041cc00, 0x041cc80, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger C", 0x041cc80, 0x041cd00, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning C", 0x041cd00, 0x041cd80, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning C (1/2)", 0x036b680, 0x036b700, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning C (2/2)", 0x036b700, 0x036b780, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap C (1/2)", 0x036b980, 0x036ba00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap C (2/2)", 0x036ba00, 0x036ba80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_S[] =
{
    { L"Hol Horse S", 0x037fb00, 0x037fb80, indexJojos51Hol, 0x00 },
    { L"Hol Horse Super Bullets S", 0x0380440, 0x0380460 },
    { L"Hol Horse 421 Super 1 S", 0x03804C0, 0x03804E0 },
    { L"Hol Horse 421 Super 2 S", 0x0380540, 0x0380560 },
    { L"Hol's Intro/Winpose Stuff & Boingo S", 0x0380380, 0x0380400, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super S", 0x0421a00, 0x0421a80, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger S", 0x0421a80, 0x0421b00, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning S", 0x0421b00, 0x0421b80, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning S (1/2)", 0x037fb80, 0x037fc00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning S (2/2)", 0x037fc00, 0x037fc80, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap S (1/2)", 0x037fe80, 0x037ff00, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap S (2/2)", 0x037ff00, 0x037ff80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_Start[] =
{
    { L"Hol Horse Start", 0x0394000, 0x0394080, indexJojos51Hol, 0x00 },
    { L"Hol Horse Super Bullets Start", 0x0394940, 0x0394960 },
    { L"Hol Horse 421 Super 1 Start", 0x03949C0, 0x03949E0 },
    { L"Hol Horse 421 Super 2 Start", 0x0394A40, 0x0394A60 },
    { L"Hol's Intro/Winpose Stuff & Boingo Start", 0x0394880, 0x0394900, indexJojos51Hol, 0x03 },
    { L"Hol Horse Vs / Super Start", 0x0426800, 0x0426880, indexJojos51Hol, 0x04 },
    { L"Hol Horse Challenger Start", 0x0426880, 0x0426900, indexJojos51Hol, 0x05 },
    { L"Hol Horse Select / Winning Screen Start", 0x0426900, 0x0426980, indexJojos51Hol, 0x06 },
    { L"Hol Horse Burning Start (1/2)", 0x0394080, 0x0394100, indexJojos51Hol, 0x07 },
    { L"Hol Horse Burning Start (2/2)", 0x0394100, 0x0394180, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap Start (1/2)", 0x0394380, 0x0394400, indexJojos51Hol, 0x07 },
    { L"Hol Horse Tech/Zap Start (2/2)", 0x0394400, 0x0394480, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_A[] =
{
    { L"Vanilla Ice & Cream A", 0x0343880, 0x0343900, indexJojos51VIce },
    { L"Vanilla Ice Vs / Super A", 0x0413300, 0x0413380, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger A", 0x0413380, 0x0413400, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning A (1/2)", 0x0413400, 0x0413480, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Vanilla Ice Select / Winning A (2/2)", 0x0413480, 0x0413500, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Vanilla Ice Burning A (1/2)", 0x0343900, 0x0343980, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning A (2/2)", 0x0343980, 0x0343a00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech A (1/2)", 0x0343c00, 0x0343c80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech A (2/2)", 0x0343c80, 0x0343d00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_B[] =
{
    { L"Vanilla Ice & Cream B", 0x0357d80, 0x0357e00, indexJojos51VIce },
    { L"Vanilla Ice Vs / Super B", 0x0418100, 0x0418180, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger B", 0x0418180, 0x0418200, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning B (1/2)", 0x0418200, 0x0418280, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Vanilla Ice Select / Winning B (2/2)", 0x0418280, 0x0418300, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Vanilla Ice Burning B (1/2)", 0x0357e00, 0x0357e80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning B (2/2)", 0x0357e80, 0x0357f00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech B (1/2)", 0x0358100, 0x0358180, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech B (2/2)", 0x0358180, 0x0358200, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_C[] =
{
    { L"Vanilla Ice & Cream C", 0x036c280, 0x036c300, indexJojos51VIce },
    { L"Vanilla Ice Vs / Super C", 0x041cf00, 0x041cf80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger C", 0x041cf80, 0x041d000, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning C (1/2)", 0x041d000, 0x041d080, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Vanilla Ice Select / Winning C (2/2)", 0x041d080, 0x041d100, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Vanilla Ice Burning C (1/2)", 0x036c300, 0x036c380, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning C (2/2)", 0x036c380, 0x036c400, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech C (1/2)", 0x036c600, 0x036c680, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech C (2/2)", 0x036c680, 0x036c700, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_S[] =
{
    { L"Vanilla Ice & Cream S", 0x0380780, 0x0380800, indexJojos51VIce },
    { L"Vanilla Ice Vs / Super S", 0x0421d00, 0x0421d80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger S", 0x0421d80, 0x0421e00, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning S (1/2)", 0x0421e00, 0x0421e80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Vanilla Ice Select / Winning S (2/2)", 0x0421e80, 0x0421f00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Vanilla Ice Burning S (1/2)", 0x0380800, 0x0380880, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning S (2/2)", 0x0380880, 0x0380900, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech S (1/2)", 0x0380b00, 0x0380b80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech S (2/2)", 0x0380b80, 0x0380c00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_Start[] =
{
    { L"Vanilla Ice & Cream Start", 0x0394c80, 0x0394d00, indexJojos51VIce },
    { L"Vanilla Ice Vs / Super Start", 0x0426b00, 0x0426b80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { L"Vanilla Ice Challenger Start", 0x0426b80, 0x0426c00, indexJojos51VIce, indexJojos51Character_Challenger },
    { L"Vanilla Ice Select / Winning Start (1/2)", 0x0426c00, 0x0426c80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Vanilla Ice Select / Winning Start (2/2)", 0x0426c80, 0x0426d00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Vanilla Ice Burning Start (1/2)", 0x0394d00, 0x0394d80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Burning Start (2/2)", 0x0394d80, 0x0394e00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech Start (1/2)", 0x0395000, 0x0395080, indexJojos51VIce, indexJojos51Character_BurnZap },
    { L"Vanilla Ice Tech Start (2/2)", 0x0395080, 0x0395100, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_A[] =
{
    { L"New Kakyoin & Hierophant A", 0x0344500, 0x0344580, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal A (1/7)", 0x0344d80, 0x0344e00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (2/7)", 0x0344e00, 0x0344e80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (3/7)", 0x0344e80, 0x0344f00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (4/7)", 0x0344f00, 0x0344f80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (5/7)", 0x0344f80, 0x0345000, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (6/7)", 0x0345000, 0x0345080, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal A (7/7)", 0x0345080, 0x0345100, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Sparkles A", 0x0345100, 0x0345120, indexJojos51NewKakyo, 0x8 },
    { L"Raging Demon Trail A", 0x0344ca0, 0x0344d20, indexJojos51NewKakyo, 0x9 },
    { L"New Kakyoin Remote Mode Afterimage A", 0x0344980, 0x0344A00, indexJojos51NewKakyo, 0xa },

    { L"New Kakyoin Vs / Super A", 0x0413600, 0x0413680, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger A", 0x0413680, 0x0413700, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning A", 0x0413700, 0x0413780, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"New Hierophant Select / Winning A", 0x0413780, 0x0413800, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { L"New Kakyoin Burning A (1/2)", 0x0344580, 0x0344600, indexJojos51NewKakyo },
    { L"New Kakyoin Burning A (2/2)", 0x0344600, 0x0344680, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap A (1/2)", 0x0344880, 0x0344900, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap A (2/2)", 0x0344900, 0x0344980, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_B[] =
{
    { L"New Kakyoin & Hierophant B", 0x0358a00, 0x0358a80, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal B (1/7)", 0x0359280, 0x0359300, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (2/7)", 0x0359300, 0x0359380, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (3/7)", 0x0359380, 0x0359400, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (4/7)", 0x0359400, 0x0359480, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (5/7)", 0x0359480, 0x0359500, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (6/7)", 0x0359500, 0x0359580, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal B (7/7)", 0x0359580, 0x0359600, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Sparkles B", 0x0359600, 0x0359620, indexJojos51NewKakyo, 0x8 },
    { L"Raging Demon Trail B", 0x03591a0, 0x0359220, indexJojos51NewKakyo, 0x9 },
    { L"New Kakyoin Remote Mode Afterimage B", 0x0358E80, 0x0358F00, indexJojos51NewKakyo, 0xa },

    { L"New Kakyoin Vs / Super B", 0x0418400, 0x0418480, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger B", 0x0418480, 0x0418500, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning B", 0x0418500, 0x0418580, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"New Hierophant Select / Winning B", 0x0418580, 0x0418600, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { L"New Kakyoin Burning B (1/2)", 0x0358a80, 0x0358b00, indexJojos51NewKakyo },
    { L"New Kakyoin Burning B (2/2)", 0x0358b00, 0x0358b80, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap B (1/2)", 0x0358d80, 0x0358e00, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap B (2/2)", 0x0358e00, 0x0358e80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_C[] =
{
    { L"New Kakyoin & Hierophant C", 0x036cf00, 0x036cf80, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal C (1/7)", 0x036d780, 0x036d800, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (2/7)", 0x036d800, 0x036d880, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal C (3/7)", 0x036d880, 0x036d900, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal C (4/7)", 0x036d900, 0x036d980, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal C (5/7)", 0x036d980, 0x036da00, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal C (6/7)", 0x036da00, 0x036da80, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal C (7/7)", 0x036da80, 0x036db00, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Sparkles C", 0x036db00, 0x036db20, indexJojos51NewKakyo, 0x8 },
    { L"Raging Demon Trail C", 0x036d6a0, 0x036d720, indexJojos51NewKakyo, 0x9 },
    { L"New Kakyoin Remote Mode Afterimage C", 0x036D380,0x036D400, indexJojos51NewKakyo, 0xA },

    { L"New Kakyoin Vs / Super C", 0x041d200, 0x041d280, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger C", 0x041d280, 0x041d300, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning C", 0x041d300, 0x041d380, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"New Hierophant Select / Winning C", 0x041d380, 0x041d400, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { L"New Kakyoin Burning C (1/2)", 0x036cf80, 0x036d000, indexJojos51NewKakyo },
    { L"New Kakyoin Burning C (2/2)", 0x036d000, 0x036d080, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap C (1/2)", 0x036d280, 0x036d300, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap C (2/2)", 0x036d300, 0x036d380, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_S[] =
{
    { L"New Kakyoin & Hierophant S", 0x0381400, 0x0381480, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal S (1/7)", 0x0381c80, 0x0381d00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (2/7)", 0x0381d00, 0x0381d80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (3/7)", 0x0381d80, 0x0381e00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (4/7)", 0x0381e00, 0x0381e80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (5/7)", 0x0381e80, 0x0381f00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (6/7)", 0x0381f00, 0x0381f80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal S (7/7)", 0x0381f80, 0x0382000, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Sparkles S", 0x0382000, 0x0382020, indexJojos51NewKakyo, 0x8 },
    { L"Raging Demon Trail S", 0x0381ba0, 0x0381c20, indexJojos51NewKakyo, 0x9 },
    { L"New Kakyoin Remote Mode Afterimage S", 0x0381880, 0x0381900, indexJojos51NewKakyo, 0xa },

    { L"New Kakyoin Vs / Super S", 0x0422000, 0x0422080, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger S", 0x0422080, 0x0422100, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning S", 0x0422100, 0x0422180, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"New Hierophant Select / Winning S", 0x0422180, 0x0422200, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { L"New Kakyoin Burning S (1/2)", 0x0381480, 0x0381500, indexJojos51NewKakyo },
    { L"New Kakyoin Burning S (2/2)", 0x0381500, 0x0381580, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap S (1/2)", 0x0381780, 0x0381800, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap S (2/2)", 0x0381800, 0x0381880, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_Start[] =
{
    { L"New Kakyoin & Hierophant Start", 0x0395900, 0x0395980, indexJojos51NewKakyo },
    { L"New Hierophant Changing Pal Start (1/7)", 0x0396180, 0x0396200, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { L"New Hierophant Changing Pal Start (2/7)", 0x0396200, 0x0396280, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal Start (3/7)", 0x0396280, 0x0396300, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal Start (4/7)", 0x0396300, 0x0396380, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal Start (5/7)", 0x0396380, 0x0396400, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal Start (6/7)", 0x0396400, 0x0396480, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Changing Pal Start (7/7)", 0x0396480, 0x0396500, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { L"New Hierophant Sparkles Start", 0x0396500, 0x0396520, indexJojos51NewKakyo, 0x8 },
    { L"Raging Demon Trail Start", 0x03960a0, 0x0396120, indexJojos51NewKakyo, 0x9 },
    { L"New Kakyoin Remote Mode Afterimage Start", 0x395D80, 0x395E00, indexJojos51NewKakyo, 0xa },

    { L"New Kakyoin Vs / Super Start", 0x0426e00, 0x0426e80, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { L"New Kakyoin Challenger Start", 0x0426e80, 0x0426f00, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { L"New Kakyoin Select / Winning Start", 0x0426f00, 0x0426f80, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"New Hierophant Select / Winning Start", 0x0426f80, 0x0427000, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { L"New Kakyoin Burning Start (1/2)", 0x0395980, 0x0395a00, indexJojos51NewKakyo },
    { L"New Kakyoin Burning Start (2/2)", 0x0395a00, 0x0395a80, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap Start (1/2)", 0x0395c80, 0x0395d00, indexJojos51NewKakyo },
    { L"New Kakyoin Tech/Zap Start (2/2)", 0x0395d00, 0x0395d80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_A[] =
{
    { L"Anubis Polnareff A", 0x0345180, 0x0345200, indexJojos51Anubis },
    { L"Anubis Polnareff Vs / Super A", 0x0413900, 0x0413980, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger A", 0x0413980, 0x0413a00, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning A (1/2)", 0x0413a00, 0x0413a80, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Anubis Polnareff Select / Winning A (2/2)", 0x0413a80, 0x0413b00, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Anubis Polnareff Burning A (1/2)", 0x0345200, 0x0345280, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning A (2/2)", 0x0345280, 0x0345300, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap A (1/2)", 0x0345500, 0x0345580, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap A (2/2)", 0x0345580, 0x0345600, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_B[] =
{
    { L"Anubis Polnareff B", 0x0359680, 0x0359700, indexJojos51Anubis },
    { L"Anubis Polnareff Vs / Super B", 0x0418700, 0x0418780, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger B", 0x0418780, 0x0418800, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning B (1/2)", 0x0418800, 0x0418880, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Anubis Polnareff Select / Winning B (2/2)", 0x0418880, 0x0418900, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Anubis Polnareff Burning B (1/2)", 0x0359700, 0x0359780, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning B (2/2)", 0x0359780, 0x0359800, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap B (1/2)", 0x0359a00, 0x0359a80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap B (2/2)", 0x0359a80, 0x0359b00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_C[] =
{
    { L"Anubis Polnareff C", 0x036db80, 0x036dc00, indexJojos51Anubis },
    { L"Anubis Polnareff Vs / Super C", 0x041d500, 0x041d580, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger C", 0x041d580, 0x041d600, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning C (1/2)", 0x041d600, 0x041d680, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Anubis Polnareff Select / Winning C (2/2)", 0x041d680, 0x041d700, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Anubis Polnareff Burning C (1/2)", 0x036dc00, 0x036dc80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning C (2/2)", 0x036dc80, 0x036dd00, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap C (1/2)", 0x036df00, 0x036df80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap C (2/2)", 0x036df80, 0x036e000, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_S[] =
{
    { L"Anubis Polnareff S", 0x0382080, 0x0382100, indexJojos51Anubis },
    { L"Anubis Polnareff Vs / Super S", 0x0422300, 0x0422380, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger S", 0x0422380, 0x0422400, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning S (1/2)", 0x0422400, 0x0422480, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Anubis Polnareff Select / Winning S (2/2)", 0x0422480, 0x0422500, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Anubis Polnareff Burning S (1/2)", 0x0382100, 0x0382180, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning S (2/2)", 0x0382180, 0x0382200, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap S (1/2)", 0x0382400, 0x0382480, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap S (2/2)", 0x0382480, 0x0382500, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_Start[] =
{
    { L"Anubis Polnareff Start", 0x0396580, 0x0396600, indexJojos51Anubis },
    { L"Anubis Polnareff Vs / Super Start", 0x0427100, 0x0427180, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { L"Anubis Polnareff Challenger Start", 0x0427180, 0x0427200, indexJojos51Anubis, indexJojos51Character_Challenger },
    { L"Anubis Polnareff Select / Winning Start (1/2)", 0x0427200, 0x0427280, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Anubis Polnareff Select / Winning Start (2/2)", 0x0427280, 0x0427300, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Anubis Polnareff Burning Start (1/2)", 0x0396600, 0x0396680, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Burning Start (2/2)", 0x0396680, 0x0396700, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap Start (1/2)", 0x0396900, 0x0396980, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { L"Anubis Polnareff Tech/Zap Start (2/2)", 0x0396980, 0x0396a00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_A[] =
{
    { L"Petshop A", 0x0345e00, 0x0345e80, indexJojos51Petshop },
    { L"Eggshop & Wealthy Begger A", 0X0346680, 0X0346700, indexJojos51Petshop, 1 },
    { L"Petshop Vs / Super A", 0x0413c00, 0x0413c80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger A", 0x0413c80, 0x0413d00, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Petshop Select / Winning A (1/2)", 0x0413d00, 0x0413d80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Petshop Select / Winning A (2/2)", 0x0413d80, 0x0413e00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Petshop Select / Winning A", 0x0413d00, 0x0413e00 },
#endif
    { L"Petshop Burning A (1/2)", 0x0345e80, 0x0345f00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning A (2/2)", 0x0345f00, 0x0345f80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap A (1/2)", 0x0346180, 0x0346200, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap A (2/2)", 0x0346200, 0x0346280, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_B[] =
{
    { L"Petshop B", 0x035a300, 0x035a380, indexJojos51Petshop },
    { L"Eggshop & Wealthy Begger B", 0x035AB80, 0x035AC00, indexJojos51Petshop, 1 },
    { L"Petshop Vs / Super B", 0x0418a00, 0x0418a80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger B", 0x0418a80, 0x0418b00, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Petshop Select / Winning B (1/2)", 0x0418b00, 0x0418b80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Petshop Select / Winning B (2/2)", 0x0418b80, 0x0418c00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Petshop Select / Winning B", 0x0418b00, 0x0418c00 },
#endif
    { L"Petshop Burning B (1/2)", 0x035a380, 0x035a400, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning B (2/2)", 0x035a400, 0x035a480, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap B  (1/2)", 0x035a680, 0x035a700, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap B  (2/2)", 0x035a700, 0x035a780, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_C[] =
{
    { L"Petshop C", 0x036e800, 0x036e880, indexJojos51Petshop },
    { L"Eggshop & Wealthy Begger C", 0x036F080, 0x036F100, indexJojos51Petshop, 1 },
    { L"Petshop Vs / Super C", 0x041d800, 0x041d880, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger C", 0x041d880, 0x041d900, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Petshop Select / Winning C (1/2)", 0x041d900, 0x041d980, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Petshop Select / Winning C (2/2)", 0x041d980, 0x041da00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Petshop Select / Winning C", 0x041d900, 0x041da00 },
#endif
    { L"Petshop Burning C (1/2)", 0x036e880, 0x036e900, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning C (2/2)", 0x036e900, 0x036e980, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap C (1/2)", 0x036eb80, 0x036ec00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap C (2/2)", 0x036ec00, 0x036ec80, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_S[] =
{
    { L"Petshop S", 0x0382d00, 0x0382d80, indexJojos51Petshop },
    { L"Eggshop & Wealthy Begger S", 0x0383580, 0x0383600, indexJojos51Petshop, 1 },
    { L"Petshop Vs / Super S", 0x0422600, 0x0422680, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger S", 0x0422680, 0x0422700, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Petshop Select / Winning S (1/2)", 0x0422700, 0x0422780, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Petshop Select / Winning S (2/2)", 0x0422780, 0x0422800, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Petshop Select / Winning S", 0x0422700, 0x0422800 },
#endif
    { L"Petshop Burning S (1/2)", 0x0382d80, 0x0382e00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning S (2/2)", 0x0382e00, 0x0382e80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap S (1/2)", 0x0383080, 0x0383100, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap S (2/2)", 0x0383100, 0x0383180, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_Start[] =
{
    { L"Petshop Start", 0x0397200, 0x0397280, indexJojos51Petshop },
    { L"Eggshop & Wealthy Begger Start", 0x0397A80, 0x0397B00, indexJojos51Petshop, 1 },
    { L"Petshop Vs / Super Start", 0x0427400, 0x0427480, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { L"Petshop Challenger Start", 0x0427480, 0x0427500, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { L"Petshop Select / Winning Start (1/2)", 0x0427500, 0x0427580, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Petshop Select / Winning Start (2/2)", 0x0427580, 0x0427600, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { L"Petshop Select / Winning Start", 0x0427500, 0x0427600 },
#endif
    { L"Petshop Burning Start (1/2)", 0x0397280, 0x0397300, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Burning Start (2/2)", 0x0397300, 0x0397380, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap Start (1/2)", 0x0397580, 0x0397600, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { L"Petshop Tech/Zap Start (2/2)", 0x0397600, 0x0397680, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_A[] =
{
    { L"Mariah A", 0x0347700, 0x0347780, indexJojos51Mariah },
    { L"Old Woman A", 0x0347f80, 0x0348000, indexJojos51Mariah, 6 },
    { L"Mariah Winpose Stuff A (1/2)", 0x0348000, 0x0348080, indexJojos51Mariah, 1 },
    { L"Mariah Winpose Stuff A (2/2)", 0x0348080, 0x0348100, indexJojos51Mariah, 2 },
    { L"Mariah's Bastet A", 0x0348100, 0x0348180, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super A", 0x0414200, 0x0414280, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger A", 0x0414280, 0x0414300, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning A", 0x0414300, 0x0414380, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning A (1/2)", 0x0347780, 0x0347800, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning A (2/2)", 0x0347800, 0x0347880, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap A (1/2)", 0x0347a80, 0x0347b00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap A (2/2)", 0x0347b00, 0x0347b80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_B[] =
{
    { L"Mariah B", 0x035bc00, 0x035bc80, indexJojos51Mariah },
    { L"Old Woman B", 0x035c480, 0x035c500, indexJojos51Mariah, 6 },
    { L"Mariah Winpose Stuff B (1/2)", 0x035c500, 0x035c580, indexJojos51Mariah, 1 },
    { L"Mariah Winpose Stuff B (2/2)", 0x035c580, 0x035c600, indexJojos51Mariah, 2 },
    { L"Mariah's Bastet B", 0x035c600, 0x035c680, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super B", 0x0419000, 0x0419080, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger B", 0x0419080, 0x0419100, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning B", 0x0419100, 0x0419180, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning B (1/2)", 0x035bc80, 0x035bd00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning B (2/2)", 0x035bd00, 0x035bd80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap B (1/2)", 0x035bf80, 0x035c000, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap B (2/2)", 0x035c000, 0x035c080, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_C[] =
{
    { L"Mariah C", 0x0370100, 0x0370180, indexJojos51Mariah },
    { L"Old Woman C", 0x0370980, 0x0370a00, indexJojos51Mariah, 6 },
    { L"Mariah Winpose Stuff C (1/2)", 0x0370a00, 0x0370a80, indexJojos51Mariah, 1 },
    { L"Mariah Winpose Stuff C (2/2)", 0x0370a80, 0x0370b00, indexJojos51Mariah, 2 },
    { L"Mariah's Bastet C", 0x0370b00, 0x0370b80, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super C", 0x041de00, 0x041de80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger C", 0x041de80, 0x041df00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning C", 0x041df00, 0x041df80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning C (1/2)", 0x0370180, 0x0370200, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning C (2/2)", 0x0370200, 0x0370280, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap C (1/2)", 0x0370480, 0x0370500, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap C (2/2)", 0x0370500, 0x0370580, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_S[] =
{
    { L"Mariah S", 0x0384600, 0x0384680, indexJojos51Mariah },
    { L"Old Woman S", 0x0384e80, 0x0384f00, indexJojos51Mariah, 6 },
    { L"Mariah Winpose Stuff S (1/2)", 0x0384f00, 0x0384f80, indexJojos51Mariah, 1 },
    { L"Mariah Winpose Stuff S (2/2)", 0x0384f80, 0x0385000, indexJojos51Mariah, 2 },
    { L"Mariah's Bastet S", 0x0385000, 0x0385080, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super S", 0x0422c00, 0x0422c80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger S", 0x0422c80, 0x0422d00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning S", 0x0422d00, 0x0422d80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning S (1/2)", 0x0384680, 0x0384700, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning S (2/2)", 0x0384700, 0x0384780, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap S (1/2)", 0x0384980, 0x0384a00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap S (2/2)", 0x0384a00, 0x0384a80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_Start[] =
{
    { L"Mariah Start", 0x0398b00, 0x0398b80, indexJojos51Mariah },
    { L"Old Woman Start", 0x0399380, 0x0399400, indexJojos51Mariah, 6 },
    { L"Mariah Winpose Stuff Start (1/2)", 0x0399400, 0x0399480, indexJojos51Mariah, 1 },
    { L"Mariah Winpose Stuff Start (2/2)", 0x0399480, 0x0399500, indexJojos51Mariah, 2 },
    { L"Mariah's Bastet Start", 0x0399500, 0x0399580, indexJojos51Mariah, 8 },
    { L"Mariah Vs / Super Start", 0x0427a00, 0x0427a80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { L"Mariah Challenger Start", 0x0427a80, 0x0427b00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { L"Mariah Select / Winning Start", 0x0427b00, 0x0427b80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { L"Mariah Burning Start (1/2)", 0x0398b80, 0x0398c00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Burning Start (2/2)", 0x0398c00, 0x0398c80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap Start (1/2)", 0x0398e80, 0x0398f00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { L"Mariah Tech/Zap Start (2/2)", 0x0398f00, 0x0398f80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_A[] =
{
    { L"Hol Horse & Boingo A", 0x0348380, 0x0348400, indexJojos51HolBoingo },
    { L"Child Hol Horse & Boingo A", 0x0348c00, 0x0348c80, indexJojos51HolBoingo, 1 },
    { L"Hol Horse & Boingo Super Bullets A", 0x0348CC0, 0x0348CE0 },
    { L"Hol Horse & Boingo Vs / Super A", 0x0414500, 0x0414580, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger A", 0x0414580, 0x0414600, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning A (1/2)", 0x0414600, 0x0414680, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Hol Horse & Boingo Select / Winning A (2/2)", 0x0414680, 0x0414700, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Hol Horse & Boingo Burning A (1/2)", 0x0348400, 0x0348480, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning A (2/2)", 0x0348480, 0x0348500, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap A (1/2)", 0x0348700, 0x0348780, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap A (2/2)", 0x0348780, 0x0348800, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_B[] =
{
    { L"Hol Horse & Boingo B", 0x035c880, 0x035c900, indexJojos51HolBoingo },
    { L"Child Hol Horse & Boingo B", 0x035d100, 0x035d180, indexJojos51HolBoingo, 1 },
    { L"Hol Horse & Boingo Super Bullets B", 0x035D1C0, 0x035D1E0 },
    { L"Hol Horse & Boingo Vs / Super B", 0x0419300, 0x0419380, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger B", 0x0419380, 0x0419400, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning B (1/2)", 0x0419400, 0x0419480, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Hol Horse & Boingo Select / Winning B (2/2)", 0x0419480, 0x0419500, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Hol Horse & Boingo Burning B (1/2)", 0x035c900, 0x035c980, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning B (2/2)", 0x035c980, 0x035ca00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap B (1/2)", 0x035cc00, 0x035cc80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap B (2/2)", 0x035cc80, 0x035cd00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_C[] =
{
    { L"Hol Horse & Boingo C", 0x0370d80, 0x0370e00, indexJojos51HolBoingo },
    { L"Child Hol Horse & Boingo C", 0x0371600, 0x0371680, indexJojos51HolBoingo, 1 },
    { L"Hol Horse & Boingo Super Bullets C", 0x03716C0, 0x03716E0 },
    { L"Hol Horse & Boingo Vs / Super C", 0x041e100, 0x041e180, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger C", 0x041e180, 0x041e200, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning C (1/2)", 0x041e200, 0x041e280, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Hol Horse & Boingo Select / Winning C (2/2)", 0x041e280, 0x041e300, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Hol Horse & Boingo Burning C (1/2)", 0x0370e00, 0x0370e80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning C (2/2)", 0x0370e80, 0x0370f00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap C (1/2)", 0x0371100, 0x0371180, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap C (2/2)", 0x0371180, 0x0371200, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_S[] =
{
    { L"Hol Horse & Boingo S", 0x0385280, 0x0385300, indexJojos51HolBoingo },
    { L"Child Hol Horse & Boingo S", 0x0385b00, 0x0385b80, indexJojos51HolBoingo, 1 },
    { L"Hol Horse & Boingo Super Bullets S", 0x0385BC0, 0x0385BE0 },
    { L"Hol Horse & Boingo Vs / Super S", 0x0422f00, 0x0422f80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger S", 0x0422f80, 0x0423000, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning S (1/2)", 0x0423000, 0x0423080, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Hol Horse & Boingo Select / Winning S (2/2)", 0x0423080, 0x0423100, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Hol Horse & Boingo Burning S (1/2)", 0x0385300, 0x0385380, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning S (2/2)", 0x0385380, 0x0385400, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap S (1/2)", 0x0385600, 0x0385680, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap S (2/2)", 0x0385680, 0x0385700, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start[] =
{
    { L"Hol Horse & Boingo Start", 0x0399780, 0x0399800, indexJojos51HolBoingo },
    { L"Child Hol Horse & Boingo Start", 0x039a000, 0x039a080, indexJojos51HolBoingo, 1 },
    { L"Hol Horse & Boingo Super Bullets Start", 0x039A0C0, 0x039A0E0 },
    { L"Hol Horse & Boingo Vs / Super Start", 0x0427d00, 0x0427d80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { L"Hol Horse & Boingo Challenger Start", 0x0427d80, 0x0427e00, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { L"Hol Horse & Boingo Select / Winning Start (1/2)", 0x0427e00, 0x0427e80, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { L"Hol Horse & Boingo Select / Winning Start (2/2)", 0x0427e80, 0x0427f00, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { L"Hol Horse & Boingo Burning Start (1/2)", 0x0399800, 0x0399880, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Burning Start (2/2)", 0x0399880, 0x0399900, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap Start (1/2)", 0x0399b00, 0x0399b80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { L"Hol Horse & Boingo Tech/Zap Start (2/2)", 0x0399b80, 0x0399c00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_A[] =
{
    { L"Rubber Soul A", 0x0349000, 0x0349080, indexJojos51RSoul },
    { L"Rubber Child TF A", 0x0349780, 0x0349800, indexJojos51RSoul, 1 },
    { L"Rubber Soul Vs / Super A", 0x0414800, 0x0414880, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger A", 0x0414880, 0x0414900, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning A", 0x0414900, 0x0414980, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning A (1/2)", 0x0349080, 0x0349100, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning A (2/2)", 0x0349100, 0x0349180, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap A (1/2)", 0x035d880, 0x035d900, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap A (2/2)", 0x035d900, 0x035d980, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_B[] =
{
    { L"Rubber Soul B", 0x035d500, 0x035d580, indexJojos51RSoul },
    { L"Rubber Child TF B", 0x035dc80, 0x035dd00, indexJojos51RSoul, 1 },
    { L"Rubber Soul Vs / Super B", 0x0419600, 0x0419680, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger B", 0x0419680, 0x0419700, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning B", 0x0419700, 0x0419780, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning B (1/2)", 0x035d580, 0x035d600, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning B (2/2)", 0x035d600, 0x035d680, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap B (1/2)", 0x0371d80, 0x0371e00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap B (2/2)", 0x0371e00, 0x0371e80, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_C[] =
{
    { L"Rubber Soul C", 0x0371a00, 0x0371a80, indexJojos51RSoul },
    { L"Rubber Child TF C", 0x0372180, 0x0372200, indexJojos51RSoul, 1 },
    { L"Rubber Soul Vs / Super C", 0x041e400, 0x041e480, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger C", 0x041e480, 0x041e500, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning C", 0x041e500, 0x041e580, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning C (1/2)", 0x0371a80, 0x0371b00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning C (2/2)", 0x0371b00, 0x0371b80, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap C (1/2)", 0x0386280, 0x0386300, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap C (2/2)", 0x0386300, 0x0386380, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_S[] =
{
    { L"Rubber Soul S", 0x0385f00, 0x0385f80, indexJojos51RSoul },
    { L"Rubber Child TF S", 0x0386680, 0x0386700, indexJojos51RSoul, 1 },
    { L"Rubber Soul Vs / Super S", 0x0423200, 0x0423280, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger S", 0x0423280, 0x0423300, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning S", 0x0423300, 0x0423380, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning S (1/2)", 0x0385f80, 0x0386000, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning S (2/2)", 0x0386000, 0x0386080, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap S (1/2)", 0x039a780, 0x039a800, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap S (2/2)", 0x039a800, 0x039a880, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_Start[] =
{
    { L"Rubber Soul Start", 0x039a400, 0x039a480, indexJojos51RSoul },
    { L"Rubber Child TF Start", 0x039ab80, 0x039ac00, indexJojos51RSoul, 1 },
    { L"Rubber Soul Vs / Super Start", 0x0428000, 0x0428080, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { L"Rubber Soul Challenger Start", 0x0428080, 0x0428100, indexJojos51RSoul, indexJojos51Character_Challenger },
    { L"Rubber Soul Select / Winning Start", 0x0428100, 0x0428180, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { L"Rubber Soul Burning Start (1/2)", 0x039a480, 0x039a500, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Burning Start (2/2)", 0x039a500, 0x039a580, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap Start (1/2)", 0x03aec80, 0x03aed00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { L"Rubber Soul Tech/Zap Start (2/2)", 0x03aed00, 0x03aed80, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_A[] =
{
    { L"Khan A", 0x0349c80, 0x0349d00, indexJojos51Khan },
    { L"Khan's Intro Anubis A", 0x034a600, 0x034a620, indexJojos51Khan, 1 },
    { L"Khan's Counter Anubis A", 0x034a780, 0x034a7a0, indexJojos51Khan, 2 },
    { L"Khan's Special Slash A", 0x034a700, 0x034a720, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap A (1/2)", 0x034a000, 0x034a080, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap A (2/2)", 0x034a080, 0x034a100, indexJojos51Khan, 6 },
    { L"Khan Vs/Super A", 0x0414b00, 0x0414b80, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger A", 0x0414b80, 0x0414c00, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning A", 0x0414c00, 0x0414c80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning A (1/2)", 0x0349d00, 0x0349d80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning A (2/2)", 0x0349d80, 0x0349e00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_B[] =
{
    { L"Khan B", 0x035e180, 0x035e200, indexJojos51Khan },
    { L"Khan's Intro Anubis B", 0x035eb00, 0x035eb20, indexJojos51Khan, 1 },
    { L"Khan's Counter Anubis B", 0x035ec80, 0x035eca0, indexJojos51Khan, 2 },
    { L"Khan's Special Slash B", 0x035ec00, 0x035ec20, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap B (1/2)", 0x035e500, 0x035e580, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap B (2/2)", 0x035e580, 0x035e600, indexJojos51Khan, 6 },
    { L"Khan Vs/Super B", 0x0419900, 0x0419980, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger B", 0x0419980, 0x0419a00, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning B", 0x0419a00, 0x0419a80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning B (1/2)", 0x035e200, 0x035e280, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning B (2/2)", 0x035e280, 0x035e300, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_C[] =
{
    { L"Khan C", 0x0372680, 0x0372700, indexJojos51Khan },
    { L"Khan's Intro Anubis C", 0x0373000, 0x0373020, indexJojos51Khan, 1 },
    { L"Khan's Counter Anubis C", 0x0373180, 0x03731a0, indexJojos51Khan, 2 },
    { L"Khan's Special Slash C", 0x0373100, 0x0373120, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap C (1/2)", 0x0372a00, 0x0372a80, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap C (2/2)", 0x0372a80, 0x0372b00, indexJojos51Khan, 6 },
    { L"Khan Vs/Super C", 0x041e700, 0x041e780, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger C", 0x041e780, 0x041e800, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning C", 0x041e800, 0x041e880, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning C (1/2)", 0x0372700, 0x0372780, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning C (2/2)", 0x0372780, 0x0372800, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_S[] =
{
    { L"Khan S", 0x0386b80, 0x0386c00, indexJojos51Khan },
    { L"Khan's Intro Anubis S", 0x0387500, 0x0387520, indexJojos51Khan, 1 },
    { L"Khan's Counter Anubis S", 0x0387680, 0x03876a0, indexJojos51Khan, 2 },
    { L"Khan's Special Slash S", 0x0387600, 0x0387620, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap S (1/2)", 0x0386f00, 0x0386f80, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap S (2/2)", 0x0386f80, 0x0387000, indexJojos51Khan, 6 },
    { L"Khan Vs/Super S", 0x0423500, 0x0423580, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger S", 0x0423580, 0x0423600, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning S", 0x0423600, 0x0423680, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning S (1/2)", 0x0386c00, 0x0386c80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning S (2/2)", 0x0386c80, 0x0386d00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_Start[] =
{
    { L"Khan Start", 0x039b080, 0x039b100, indexJojos51Khan },
    { L"Khan's Intro Anubis Start", 0x039ba00, 0x039ba20, indexJojos51Khan, 1 },
    { L"Khan's Counter Anubis Start", 0x039bb80, 0x039bba0, indexJojos51Khan, 2 },
    { L"Khan's Special Slash Start", 0x039bb00, 0x039bb20, indexJojos51Khan, 8 },
    { L"Khan Sword Slashes/Counter/Tech/Zap Start (1/2)", 0x039b400, 0x039b480, indexJojos51Khan, 6 },
    { L"Khan Sword Slashes/Counter/Tech/Zap Start (2/2)", 0x039b480, 0x039b500, indexJojos51Khan, 6 },
    { L"Khan Vs/Super Start", 0x0428300, 0x0428380, indexJojos51Khan, indexJojos51Character_VsSuper },
    { L"Khan Challenger Start", 0x0428380, 0x0428400, indexJojos51Khan, indexJojos51Character_Challenger },
    { L"Khan Select/Winning Start", 0x0428400, 0x0428480, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { L"Khan Burning Start (1/2)", 0x039b100, 0x039b180, indexJojos51Khan, indexJojos51Character_BurnZap },
    { L"Khan Burning Start (2/2)", 0x039b180, 0x039b200, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_A[] =
{
    { L"N'Doul & Geb A", 0x033d480, 0x033d500, indexJojos51NDoul },

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
    { L"N'Doul & Geb B", 0x0351980, 0x0351a00, indexJojos51NDoul },

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
    { L"N'Doul & Geb C", 0x0365e80, 0x0365f00, indexJojos51NDoul },

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
    { L"N'Doul & Geb S", 0x037a380, 0x037a400, indexJojos51NDoul },

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
    { L"N'Doul & Geb Start", 0x038e880, 0x038e900, indexJojos51NDoul },

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
    { L"Boss Ice A", 0x033fa00, 0x033fa80, indexJojos51BIce },

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
    { L"Boss Ice B", 0x0353f00, 0x0353f80, indexJojos51BIce },
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
    { L"Boss Ice C", 0x0368400, 0x0368480, indexJojos51BIce },
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
    { L"Boss Ice S", 0x037c900, 0x037c980, indexJojos51BIce },
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
    { L"Boss Ice Start", 0x0390e00, 0x0390e80, indexJojos51BIce },
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
    { L"Death 13 A", 0x0340680, 0x0340700, indexJojos51Death13 },
    { L"Death 13 A Burning 1/2", 0x340700, 0x340780, indexJojos51Death13 },
    { L"Death 13 A Burning 2/2", 0x340780, 0x340800, indexJojos51Death13 },
    { L"Death 13 A Tech/Zap 1/2", 0x340a00, 0x340a80, indexJojos51Death13 },
    { L"Death 13 A Tech/Zap 2/2", 0x340a80, 0x340b00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_B[] =
{
    { L"Death 13 B", 0x0354b80, 0x0354c00, indexJojos51Death13 },
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
    { L"Death 13 S", 0x037d580, 0x037d600, indexJojos51Death13 },
    { L"Death 13 S Burning 1/2", 0x37d600, 0x37d680, indexJojos51Death13 },
    { L"Death 13 S Burning 2/2", 0x37d680, 0x37d700, indexJojos51Death13 },
    { L"Death 13 S Tech/Zap 1/2", 0x37d900, 0x37d980, indexJojos51Death13 },
    { L"Death 13 S Tech/Zap 2/2", 0x37d980, 0x37da00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_Start[] =
{
    { L"Death 13 Start", 0x0391a80, 0x0391b00, indexJojos51Death13 },
    { L"Death 13 Start Burning 1/2", 0x391b00, 0x391b80, indexJojos51Death13 },
    { L"Death 13 Start Burning 2/2", 0x391b80, 0x391c00, indexJojos51Death13 },
    { L"Death 13 Start Tech/Zap 1/2", 0x391e00, 0x391e80, indexJojos51Death13 },
    { L"Death 13 Start Tech/Zap 2/2", 0x391e80, 0x391f00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_GRAYFLY[] =
{
    { L"Gray Fly 1", 0x0346A80, 0x0346B00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 2", 0x035AF80, 0x035B000, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 3", 0x036F480, 0x036F500, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 4", 0x0383980, 0x0383A00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 5", 0x0397E80, 0x0397F00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 6", 0x03AC380, 0x03AC400, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 7", 0x03C0880, 0x03C0900, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 8", 0x03D4D80, 0x03D4E00, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 9", 0x03E9280, 0x03E9300, indexJojos51GrayFly, 0x00 },
    { L"Gray Fly 10", 0x03FD780, 0x03FD800, indexJojos51GrayFly, 0x00 },
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
    { L"Mode select - Challenge & Story signs", 0x030d480, 0x030d500 },
    { L"Character Select Background", 0x0310100, 0x0310180, indexJojos51Bonus, 0x46 },
    { L"Selector Rings", 0x0310080, 0x0310100 },
    { L"Character Select Comic", 0x0310000, 0x0310080, indexJojos51Bonus, 0x48 },
    { L"Extra characters page arrows", 0x0310500, 0x0310580 },
    { L"Vs screen Background", 0x030d000, 0x030d080, indexJojos51Bonus, 0x49 },
    { L"Win screen Background", 0x0310200, 0x0310280, indexJojos51Bonus, 0x4a },
    { L"Oldseph Challenge Mode Faces", 0x441000, 0x441200 },
    { L"D'Arby", 0x0311a00, 0x0311a80, indexJojos51Bonus, 0x2C },
    { L"Darby Chips", 0x0311d00, 0x0311d80, indexJojos51Bonus, 0x2D },
    { L"Osiris Arms", 0x0311b80, 0x0311c00, indexJojos51Bonus, 0x2E },
    { L"Osiris Body", 0x0311b00, 0x0311b80, indexJojos51Bonus, 0x2F },
    { L"Game Over Text", 0x0311a80, 0x0311b00, indexJojos51Bonus, 0x30 },
};

const sGame_PaletteDataset JOJOS_BONUS_INTRO_PALETTES[] =
{
    { L"Capcom Presents (text under intro logo)", 0x030b040, 0x030b060, indexJojos51Bonus, 0x37 },
    { L"Capcom logo",            0x030b080, 0x030b0a0, indexJojos51Bonus, 0x36 },
    { L"Capcom Backgrounds",     0x030C300, 0x030C340, indexJojos51Bonus, 0x4b },
    { L"Hol Horse intro Body",   0x030c600, 0x030c680, indexJojos51Bonus, 0x3C },
    { L"Hol Horse intro Hand",   0x030c580, 0x030c600, indexJojos51Bonus, 0x3D },
    { L"Hol Horse shoot scene",  0x030C400, 0x030C480, indexJojos51Bonus, 0x3E },
    { L"Hol Horse intro background (1/2)", 0x030bb00, 0x030bd00 },
    { L"Hol Horse intro background (2/2)", 0x030bd00, 0x030be00 },
    { L"Hol Horse intro ender background (1/3)", 0x030be00, 0x030c000 },
    { L"Hol Horse intro ender background (2/3)", 0x030c000, 0x030c200 },
    { L"Hol Horse intro ender background (3/3)", 0x030c200,  0x030c300 },
    { L"Vanilla Ice intro",      0x030ba00, 0x030ba80, indexJojos51Bonus, 0x0E },
    { L"Cream intro",            0x030ba80, 0x030bb00, indexJojos51Bonus, 0x3B },
    { L"Vice intro background (1/4)", 0x030b100, 0x030b300 },
    { L"Vice intro background (2/4)", 0x030b300, 0x030b500 },
    { L"Vice intro background (3/4)", 0x030b500, 0x030b700 },
    { L"Vice intro background (4/4)", 0x030b700, 0x030b780 },
    { L"Vice Intro Ender",       0x030c380, 0x030c400, indexJojos51Bonus, 0x0F },
    { L"Intro Manga Panels (1/5)", 0x030b780, 0x030b800, indexJojos51Bonus, 0x09 },
    { L"Intro Manga Panels (2/5)", 0x030b800, 0x030b880, indexJojos51Bonus, 0x0A },
    { L"Intro Manga Panels (3/5)", 0x030b880, 0x030b900, indexJojos51Bonus, 0x0B },
    { L"Intro Manga Panels (4/5)", 0x030b900, 0x030b980, indexJojos51Bonus, 0x0C },
    { L"Intro Manga Panels (5/5)", 0x030b980, 0x030ba00, indexJojos51Bonus, 0x0D },
    { L"Title Screen DIO",       0x030c500, 0x030c580, indexJojos51Bonus, 0x3A },
    { L"Title Screen DIO Fade 1", 0x030C780, 0x030C800, indexJojos51Bonus, 0x3A },
    { L"Title Screen DIO Fade 2", 0x030C800, 0x030C880, indexJojos51Bonus, 0x3A },
    { L"Title Screen DIO Fade 3", 0x030C880, 0x030C900, indexJojos51Bonus, 0x3A },
    { L"Title Screen DIO Manga", 0x030c900, 0x030c980, indexJojos51Bonus, 0x3A },
    { L"Title Screen Jotaro",    0x030c480, 0x030c500, indexJojos51Bonus, 0x39 },
    { L"Title Screen Jotaro Fade 1", 0x030C980, 0x030CA00, indexJojos51Bonus, 0x39 },
    { L"Title Screen Jotaro Fade 2", 0x030CA00, 0x030CA80, indexJojos51Bonus, 0x39 },
    { L"Title Screen Jotaro Fade 3", 0x030CA80, 0x030CB00, indexJojos51Bonus, 0x39 },
    { L"Title Screen Jotaro Manga", 0x030cb00, 0x030cb80, indexJojos51Bonus, 0x39 },
    { L"Title Screen Logo",      0x030c680, 0x030c780, indexJojos51Bonus, 0x4c  },
     // joined above { L"Title Screen Logo Ribbon", 0x030c700, 0x030c780, indexJojos51Bonus, 0x33 },
    { L"English Title", 0x030CB80, 0x030CC00, indexJojos51Bonus, 0x34 },
    { L"Title Screen Background", 0x030b0a0, 0x030b0b0, indexJojos51Bonus, 0x31 },
    { L"World Map",              0x0313780, 0x0313800, indexJojos51Bonus, 0x38 },

    { L"Ranking Mini Logo",      0x313f00, 0x313f80, indexJojos51Bonus, 0x4d },
};

const sGame_PaletteDataset JOJOS_BONUS_INGAME_PALETTES[] =
{
    { L"Aja Stone", 0x0335800, 0x0335820, indexJojos51Bonus, 0x45 },
    { L"Extra Character Dust and Blood", 0x0335860, 0x0335880 },
    { L"Super Flash / Zap Effects", 0x0335840, 0x0335860 },
    { L"Blocksparks/OldSeph 360/Small Explosions", 0x03358a0, 0x0335900 },
    { L"Hitsparks & Pushblock", 0x0335820, 0x0335840, indexJojos51Bonus, 0x40 },
    { L"Super Hitsparks and Burning Effect", 0x03359c0, 0x0335A00, indexJojos51Bonus, 0x08 },
    { L"Tandem Background", 0x030d900, 0x030d980, indexJojos51Bonus, 0x1f },
    { L"Stand Clash Background", 0x030d100, 0x030d180, indexJojos51Bonus, 0x20 },
    { L"Stand Crash Mask Background", 0x030cec0, 0x030cf00, indexJojos51Bonus, 0x0 },
    { L"Stand Crash Mask Background 2", 0x030CF40, 0x030CF80, indexJojos51Bonus, 0x0 },
    { L"Raging Demon Background", 0x030d180, 0x030d200, indexJojos51Bonus, 0x21 },
    { L"Super KO Background", 0x030d080, 0x030d100, indexJojos51Bonus, 0x23 },
    { L"Super KO Portrait", 0x030ce80, 0x030cec0, indexJojos51Bonus, 0x6 },
    { L"Super KO Portrait Holes/Blood", 0x030CF80, 0x030CFC0, indexJojos51Bonus, 0x7 },
    { L"\"Round 1,2,3\" Text", 0x030ce00, 0x030ce60, indexJojos51Bonus, 0x22 },
    { L"\"Fight\" & \"Down\" Text", 0x030cd80, 0x030ce00, indexJojos51Bonus, 0x1 },
    { L"\"LOSE\"", 0x030cce0, 0x030cd00, indexJojos51Bonus, 0x2 },
    { L"\"KO\"", 0x030cd20, 0x030cd40, indexJojos51Bonus, 0x3 },
    { L"\"PERFECT\"", 0X030CD40, 0X030CD60, indexJojos51Bonus, 0x4 },
    { L"\"Retired\"", 0x030CC20, 0x030CC40, indexJojos51Bonus, 0x5 },
    { L"VS screen text", 0x030d400, 0x030d440, indexJojos51Bonus, 0x1b },
    { L"Win text (character)", 0x030cc40, 0x030cc60, indexJojos51Bonus, 0x1a },
    { L"Win text (WIN)", 0x030cca0, 0x030ccc0, indexJojos51Bonus, 0x19 },

    { L"Double KO", 0x030CD60, 0x030CD80, indexJojos51Bonus, 0x1c },
    { L"Draw", 0x030CC80, 0x030CCA0, indexJojos51Bonus, 0x1d },
    { L"Time Up", 0x030CCC0, 0x030CCE0, indexJojos51Bonus, 0x1e },
    { L"Here Comes A New Challenger", 0x030CD00, 0x030CD20, indexJojos51Bonus, 0x25 },
    { L"Story Mode Episodes Text", 0x030CC00, 0x030CC20, indexJojos51Bonus, 0x24 },
    { L"Stand Summon & Tandem Aura", 0x0335920, 0x0335940, indexJojos51Bonus, 0x3F },
    { L"S.Dio 2c Stone & Requiem Zzz", 0x0335940, 0x0335980, indexJojos51Bonus, 0x41 },
    { L"Base Char Dust & Floor Bounce", 0x0335B40, 0x0335B60 },
    // Folded into another one
    //{ L"Extra Char Dust & Floor Bounce", 0x0335860, 0x0335878 },
    { L"Story Mode Metal Objects", 0x0335B20, 0x0335B40 },
    { L"Speedwagon Pilot", 0x0335880, 0x03358A0 },
    // Duped to "Various..."
    //{ L"Chaka s.236a/236aa Effects", 0x03358E0, 0x0335900 },
    { L"S.Dio 623aa Floor Effect", 0x0335900, 0x0335920 },

    { L"S.Dio Effects/Round Start/Wallbounce/etc", 0x0335980, 0x03359C0 },
    // Also a dupe
    //{ L"Various 236x Effects", 0x03358E0, 0x0335900 },
};

const sGame_PaletteDataset JOJOS_A_BONUS_NODE_SUPERBACKGROUND[] =
{
    { L"Super Flash Background (Challenge Screen / Demo) (1/8)", 0x030d500, 0x030d580, indexJojos51Bonus, 0x11 },
    { L"Super Flash Background (Challenge Screen / Demo) (2/8)", 0x030d580, 0x030d600, indexJojos51Bonus, 0x12 },
    { L"Super Flash Background (Challenge Screen / Demo) (3/8)", 0x030d600, 0x030d680, indexJojos51Bonus, 0x13 },
    { L"Super Flash Background (Challenge Screen / Demo) (4/8)", 0x030d680, 0x030d700, indexJojos51Bonus, 0x14 },
    { L"Super Flash Background (Challenge Screen / Demo) (5/8)", 0x030d700, 0x030d780, indexJojos51Bonus, 0x15 },
    { L"Super Flash Background (Challenge Screen / Demo) (6/8)", 0x030d780, 0x030d800, indexJojos51Bonus, 0x16 },
    { L"Super Flash Background (Challenge Screen / Demo) (7/8)", 0x030d800, 0x030d880, indexJojos51Bonus, 0x17 },
    { L"Super Flash Background (Challenge Screen / Demo) (8/8)", 0x030d880, 0x030d900, indexJojos51Bonus, 0x18 },
};

const sGame_PaletteDataset JOJOS_BONUS_NODE_FADEBACKGROUND[] =
{
    { L"Fade Background (1/29)", 0x030f080, 0x030f100 },
    { L"Fade Background (2/29)", 0x030f100, 0x030f180 },
    { L"Fade Background (3/29)", 0x030f180, 0x030f200 },
    { L"Fade Background (4/29)", 0x030f200, 0x030f280 },
    { L"Fade Background (5/29)", 0x030f280, 0x030f300 },
    { L"Fade Background (6/29)", 0x030f300, 0x030f380 },
    { L"Fade Background (7/29)", 0x030f380, 0x030f400 },
    { L"Fade Background (8/29)", 0x030f400, 0x030f480 },
    { L"Fade Background (9/29)", 0x030f480, 0x030f500 },
    { L"Fade Background (10/29)", 0x030f500, 0x030f580 },
    { L"Fade Background (11/29)", 0x030f580, 0x030f600 },
    { L"Fade Background (12/29)", 0x030f600, 0x030f680 },
    { L"Fade Background (13/29)", 0x030f680, 0x030f700 },
    { L"Fade Background (14/29)", 0x030f700, 0x030f780 },
    { L"Fade Background (15/29)", 0x030f780, 0x030f800 },
    { L"Fade Background (16/29)", 0x030f800, 0x030f880 },
    { L"Fade Background (17/29)", 0x030f880, 0x030f900 },
    { L"Fade Background (18/29)", 0x030f900, 0x030f980 },
    { L"Fade Background (19/29)", 0x030f980, 0x030fa00 },
    { L"Fade Background (20/29)", 0x030fa00, 0x030fa80 },
    { L"Fade Background (21/29)", 0x030fa80, 0x030fb00 },
    { L"Fade Background (22/29)", 0x030fb00, 0x030fb80 },
    { L"Fade Background (23/29)", 0x030fb80, 0x030fc00 },
    { L"Fade Background (24/29)", 0x030fc00, 0x030fc80 },
    { L"Fade Background (25/29)", 0x030fc80, 0x030fd00 },
    { L"Fade Background (26/29)", 0x030fd00, 0x030fd80 },
    { L"Fade Background (27/29)", 0x030fd80, 0x030fe00 },
    { L"Fade Background (28/29)", 0x030fe00, 0x030fe80 },
    { L"Fade Background (29/29)", 0x030fe80, 0x030ff00 },
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

    { L"Menu Cards", 0x030db40, 0x030db80, indexJojos51TarotCards, 0x00 },
    //{ L"Card Backs", 0x030DB00, 0x030DB40 },
    { L"Star Platinum Light Menu Card", 0x030DB80, 0x030DC00, indexJojos51TarotCards, 0x01 },
    { L"Star Platinum Menu Card", 0x030DC00, 0x030DC80, indexJojos51TarotCards, 0x02 },
    { L"Hierophant Light Menu Card", 0x030DC80, 0x030DD00, indexJojos51TarotCards, 0x03 },
    { L"Hierophant Menu", 0x030DD00, 0x030DD80, indexJojos51TarotCards, 0x04 },
    { L"Magician's Red Light Menu Card", 0x030DD80, 0x030DE00, indexJojos51TarotCards, 0x05 },
    { L"Magician's Red Menu Card", 0x030DE00, 0x030DE80, indexJojos51TarotCards, 0x06 },
    { L"Silver Chariot Light Menu Card", 0x030DE80, 0x030DF00, indexJojos51TarotCards, 0x07 },
    { L"Silver Chariot Menu Card", 0x030DF00, 0x030DF80, indexJojos51TarotCards, 0x08 },
    { L"The Hermit Light Menu Card", 0x030DF80, 0x030E000, indexJojos51TarotCards, 0x09 },
    { L"The Hermit Menu Card", 0x030E000, 0x030E080, indexJojos51TarotCards, 0x0A },
    { L"The Fool Light Menu Card", 0x030E080, 0x030E100, indexJojos51TarotCards, 0x0B },
    { L"The Fool Menu Card", 0x030E100, 0x030E180, indexJojos51TarotCards, 0x0C },
    { L"Sethan Light Menu Card", 0x030E180, 0x030E200, indexJojos51TarotCards, 0x0D },
    { L"Sethan Menu Card", 0x030E200, 0x030E280, indexJojos51TarotCards, 0x0E },
    { L"Anubis Light Menu Card", 0x030E280, 0x030E300, indexJojos51TarotCards, 0x0F },
    { L"Anubis Menu Card", 0x030E300, 0x030E380, indexJojos51TarotCards, 0x10 },
    { L"The Devil Light Menu Card", 0x030E380, 0x030E400, indexJojos51TarotCards, 0x11 },
    { L"The Devil Menu Card", 0x030E400, 0x030E480, indexJojos51TarotCards, 0x12 },
    { L"Geb Light Menu Card", 0x030E480, 0x030E500, indexJojos51TarotCards, 0x13 },
    { L"Geb Menu Card", 0x030E500, 0x030E580, indexJojos51TarotCards, 0x14 },
    { L"High Priestess Light Menu Card", 0x030E580, 0x030E600, indexJojos51TarotCards, 0x15 },
    { L"High Priestess Menu Card", 0x030E600, 0x030E680, indexJojos51TarotCards, 0x16 },
    { L"The Tower Light Menu Card", 0x030E680, 0x030E700, indexJojos51TarotCards, 0x17 },
    { L"The Tower Menu Card", 0x030E700, 0x030E780, indexJojos51TarotCards, 0x18 },
    { L"The Emperor Light Menu Card", 0x030E780, 0x030E800, indexJojos51TarotCards, 0x19 },
    { L"The Emperor Menu Card", 0x030E800, 0x030E880, indexJojos51TarotCards, 0x1A },
    { L"Hanged Man Light Menu Card", 0x030E880, 0x030E900, indexJojos51TarotCards, 0x1B },
    { L"Hanged Man Menu Card", 0x030E900, 0x030E980, indexJojos51TarotCards, 0x1C },
    { L"Death 13 Light Menu Card", 0x030E980, 0x030EA00, indexJojos51TarotCards, 0x1D },
    { L"Death 13 Menu Card", 0x030EA00, 0x030EA80, indexJojos51TarotCards, 0x1E },
    { L"Judgement Light Menu Card", 0x030EA80, 0x030EB00, indexJojos51TarotCards, 0x1F },
    { L"Judgement Menu Card", 0x030EB00, 0x030EB80, indexJojos51TarotCards, 0x20 },
    { L"Justice Light Menu Card", 0x030EB80, 0x030EC00, indexJojos51TarotCards, 0x21 },
    { L"Justice Menu Card", 0x030EC00, 0x030EC80, indexJojos51TarotCards, 0x22 },
    { L"Horus Light Menu Card", 0x030EC80, 0x030ED00, indexJojos51TarotCards, 0x23 },
    { L"Horus Menu Card", 0x030ED00, 0x030ED80, indexJojos51TarotCards, 0x24 },
    { L"Cream Light Menu Card", 0x030ED80, 0x030EE00, indexJojos51TarotCards, 0x25 },
    { L"Cream Menu Card", 0x030EE00, 0x030EE80, indexJojos51TarotCards, 0x26 },
    { L"The World Light Menu Card", 0x030EE80, 0x030EF00, indexJojos51TarotCards, 0x27 },
    { L"The World Menu Card", 0x030EF00, 0x030EF80, indexJojos51TarotCards, 0x28 },
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

const sDescTreeNode JOJOS_A_BONUS_COLLECTION[]
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INTRO_PALETTES, ARRAYSIZE(JOJOS_BONUS_INTRO_PALETTES) },
    { L"Menu", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_MENU_PALETTES, ARRAYSIZE(JOJOS_BONUS_MENU_PALETTES) },
    { L"In Game", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INGAME_PALETTES, ARRAYSIZE(JOJOS_BONUS_INGAME_PALETTES) },
    { L"Fade Background (Challenge Screen / Demo)", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_NODE_FADEBACKGROUND, ARRAYSIZE(JOJOS_BONUS_NODE_FADEBACKGROUND) },
    { L"Super Screen Background", DESC_NODETYPE_TREE, (void*)JOJOS_A_BONUS_NODE_SUPERBACKGROUND, ARRAYSIZE(JOJOS_A_BONUS_NODE_SUPERBACKGROUND) },
    { L"Tarot Cards", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_TAROT_CARDS, ARRAYSIZE(JOJOS_BONUS_TAROT_CARDS) },
    { L"Ranking Portraits", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_PORTAITS_RANKING, ARRAYSIZE(JOJOS_BONUS_PORTAITS_RANKING) },
    { L"Stage Shadows", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_STAGESHADOWS, ARRAYSIZE(JOJOS_BONUS_STAGESHADOWS) },
};

#pragma endregion Bonus

#pragma region Timestop
const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_ALOCKUP[] =
{
    { L"A Lockup TS (1/7)", 0x02d0000, 0x02d0200 },
    { L"A Lockup TS (2/7)", 0x02d0200, 0x02d0400 },
    { L"A Lockup TS (3/7)", 0x02d0400, 0x02d0600 },
    { L"A Lockup TS (4/7)", 0x02d0600, 0x02d0800 },
    { L"A Lockup TS (5/7)", 0x02d0800, 0x02d0a00 },
    { L"A Lockup TS (6/7)", 0x02d0a00, 0x02d0c00 },
    { L"A Lockup TS (7/7)", 0x02d0c00, 0x02d0d80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HEALTH[] =
{
    { L"A Health Room TS (1/6)", 0x02d0e00, 0x02d1000 },
    { L"A Health Room TS (2/6)", 0x02d1000, 0x02d1200 },
    { L"A Health Room TS (3/6)", 0x02d1200,  0x02d1400 },
    { L"A Health Room TS (4/6)", 0x02d1400, 0x02d1600 },
    { L"A Health Room TS (5/6)", 0x02d1600, 0x02d1800 },
    { L"A Health Room TS (6/6)", 0x02d1800, 0x02d1900 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_AIRPLANE[] =
{
    { L"In A Airplane TS (1/17)", 0x02d1a00, 0x02d1c00 },
    { L"In A Airplane TS (2/17)", 0x02d1c00, 0x02d1e00 },
    { L"In A Airplane TS (3/17)", 0x02d1e00, 0x02d2000 },
    { L"In A Airplane TS (4/17)", 0x02d2000, 0x02d2200 },
    { L"In A Airplane TS (5/17)", 0x02d2200, 0x02d2400 },
    { L"In A Airplane TS (6/17)", 0x02d2400, 0x02d2600 },
    { L"In A Airplane TS (7/17)", 0x02d2600, 0x02d2800 },
    { L"In A Airplane TS (8/17)", 0x02d2800, 0x02d2a00 },
    { L"In A Airplane TS (9/17)", 0x02d2a00, 0x02d2c00 },
    { L"In A Airplane TS (10/17)", 0x02d2c00, 0x02d2e00 },
    { L"In A Airplane TS (11/17)", 0x02d2e00, 0x02d3000 },
    { L"In A Airplane TS (12/17)", 0x02d3000, 0x02d3200 },
    { L"In A Airplane TS (13/17)", 0x02d3200, 0x02d3400 },
    { L"In A Airplane TS (14/17)", 0x02d3400, 0x02d3600 },
    { L"In A Airplane TS (15/17)", 0x02d3600, 0x02d3800 },
    { L"In A Airplane TS (16/17)", 0x02d3800, 0x02d3a00 },
    { L"In A Airplane TS (17/17)", 0x02d3a00, 0x02d3b80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_TIGERBAUM[] =
{
    { L"Tigerbaum Garden TS (1/11)", 0x02d3c00, 0x02d3e00, indexJojos50Stages, 0x1e, &pairFullyLinkedNode },
    { L"Tigerbaum Garden TS (2/11)", 0x02d3e00, 0x02d4000, indexJojos50Stages, 0x1f },
    { L"Tigerbaum Garden TS (3/11)", 0x02d4000, 0x02d4200, indexJojos50Stages, 0x20 },
    { L"Tigerbaum Garden TS (4/11)", 0x02d4200, 0x02d4400, indexJojos50Stages, 0x21 },
    { L"Tigerbaum Garden TS (5/11)", 0x02d4400, 0x02d4600, indexJojos50Stages, 0x22 },
    { L"Tigerbaum Garden TS (6/11)", 0x02d4600, 0x02d4800, indexJojos50Stages, 0x23 },
    { L"Tigerbaum Garden TS (7/11)", 0x02d4800, 0x02d4a00, indexJojos50Stages, 0x24 },
    { L"Tigerbaum Garden TS (8/11)", 0x02d4a00, 0x02d4c00, indexJojos50Stages, 0x25 },
    { L"Tigerbaum Garden TS (9/11)", 0x02d4c00, 0x02d4e00, indexJojos50Stages, 0x26 },
    { L"Tigerbaum Garden TS (10/11)", 0x02d4e00, 0x02d5000, indexJojos50Stages, 0x27 },
    { L"Tigerbaum Garden TS (11/11)", 0x02d5000, 0x02d5200, indexJojos50Stages, 0x28 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELD[] =
{
    { L"Hotel (Devil) / New 2 TS (1/7)", 0x02d5300, 0x02d5500, indexJojos50Stages, 0x11, &pairFullyLinkedNode },
    { L"Hotel (Devil) / New 2 TS (2/7)", 0x02d5500, 0x02d5700, indexJojos50Stages, 0x12 },
    { L"Hotel (Devil) / New 2 TS (3/7)", 0x02d5700, 0x02d5900, indexJojos50Stages, 0x13 },
    { L"Hotel (Devil) / New 2 TS (4/7)", 0x02d5900, 0x02d5b00, indexJojos50Stages, 0x14 },
    { L"Hotel (Devil) / New 2 TS (5/7)", 0x02d5b00, 0x02d5d00, indexJojos50Stages, 0x15 },
    { L"Hotel (Devil) / New 2 TS (6/7)", 0x02d5d00, 0x02d5f00, indexJojos50Stages, 0x16 },
    { L"Hotel (Devil) / New 2 TS (7/7)", 0x02d5f00, 0x02d6000, indexJojos50Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_REMAINS[] =
{
    { L"Remains / New 1 TS (1/9)", 0x02d6100, 0x02d6300 },
    { L"Remains / New 1 TS (2/9)", 0x02d6300, 0x02d6500 },
    { L"Remains / New 1 TS (3/9)", 0x02d6500, 0x02d6700 },
    { L"Remains / New 1 TS (4/9)", 0x02d6700, 0x02d6900 },
    { L"Remains / New 1 TS (5/9)", 0x02d6900, 0x02d6b00 },
    { L"Remains / New 1 TS (6/9)", 0x02d6b00, 0x02d6d00 },
    { L"Remains / New 1 TS (7/9)", 0x02d6d00, 0x02d6f00 },
    { L"Remains / New 1 TS (8/9)", 0x02d6f00, 0x02d7100 },
    { L"Remains / New 1 TS (9/9)", 0x02d7100, 0x02d7300 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELJ[] =
{
    { L"Hotel (Justice) TS (1/8)", 0x02d7400, 0x02d7600 },
    { L"Hotel (Justice) TS (2/8)", 0x02d7600, 0x02d7800 },
    { L"Hotel (Justice) TS (3/8)", 0x02d7800, 0x02d7a00 },
    { L"Hotel (Justice) TS (4/8)", 0x02d7a00, 0x02d7c00 },
    { L"Hotel (Justice) TS (5/8)", 0x02d7c00, 0x02d7e00 },
    { L"Hotel (Justice) TS (6/8)", 0x02d7e00, 0x02d8000 },
    { L"Hotel (Justice) TS (7/8)", 0x02d8000, 0x02d8200 },
    { L"Hotel (Justice) TS (8/8)", 0x02d8200, 0x02d8280 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SISLAND[] =
{
    { L"Small Island / New 3 TS (1/6)", 0x02d8300, 0x02d8500, indexJojos50Stages, 0x18 },
    { L"Small Island / New 3 TS (2/6)", 0x02d8500, 0x02d8700, indexJojos50Stages, 0x19 },
    { L"Small Island / New 3 TS (3/6)", 0x02d8700, 0x02d8900, indexJojos50Stages, 0x1a },
    { L"Small Island / New 3 TS (4/6)", 0x02d8900, 0x02d8b00, indexJojos50Stages, 0x1b },
    { L"Small Island / New 3 TS (5/6)", 0x02d8b00, 0x02d8d00, indexJojos50Stages, 0x1c },
    { L"Small Island / New 3 TS (6/6)", 0x02d8d00, 0x02d8f00, indexJojos50Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DMORN[] =
{
    { L"Desert Morning / Twilight TS (1/8)", 0x02d9f00, 0x02da100, indexJojos50Stages, 0x0b },
    { L"Desert Morning / Twilight TS (2/8)", 0x02da100, 0x02da300 },
    { L"Desert Morning / Twilight TS (3/8)", 0x02da300, 0x02da500, indexJojos50Stages, 0x0c },
    { L"Desert Morning / Twilight TS (4/8)", 0x02da500, 0x02da700 },
    { L"Desert Morning / Twilight TS (5/8)", 0x02da700, 0x02da900, indexJojos50Stages, 0x0d },
    { L"Desert Morning / Twilight TS (6/8)", 0x02da900, 0x02dab00, indexJojos50Stages, 0x0e },
    { L"Desert Morning / Twilight TS (7/8)", 0x02dab00, 0x02dad00, indexJojos50Stages, 0x0f },
    { L"Desert Morning / Twilight TS (8/8)", 0x02dad00, 0x02dad80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNOON[] =
{
    { L"Desert Noon TS (1/7)", 0x02d9000, 0x02d9200, indexJojos50Stages, 0x0b },
    { L"Desert Noon TS (2/7)", 0x02d9200, 0x02d9400 },
    { L"Desert Noon TS (3/7)", 0x02d9400, 0x02d9600, indexJojos50Stages, 0x0c },
    { L"Desert Noon TS (4/7)", 0x02d9600, 0x02d9800 },
    { L"Desert Noon TS (5/7)", 0x02d9800, 0x02d9a00, indexJojos50Stages, 0x0d },
    { L"Desert Noon TS (6/7)", 0x02d9a00, 0x02d9c00, indexJojos50Stages, 0x0e },
    { L"Desert Noon TS (7/7)", 0x02d9c00, 0x02d9e00, indexJojos50Stages, 0x0f },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNIGHT[] =
{
    { L"Desert Night TS (1/8)", 0x02dae00, 0x02db000, indexJojos50Stages, 0xb },
    { L"Desert Night TS (2/8)", 0x02db000, 0x02db200 },
    { L"Desert Night TS (3/8)", 0x02db200, 0x02db400, indexJojos50Stages, 0xc},
    { L"Desert Night TS (4/8)", 0x02db400, 0x02db600 },
    { L"Desert Night TS (5/8)", 0x02db600, 0x02db800, indexJojos50Stages, 0xd },
    { L"Desert Night TS (6/8)", 0x02db800, 0x02dba00, indexJojos50Stages, 0xe },
    { L"Desert Night TS (7/8)", 0x02dba00, 0x02dbc00, indexJojos50Stages, 0xf },
    { L"Desert Night TS (8/8)", 0x02dbc00, 0x02dbc80, indexJojos50Stages, 0x10 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_RUINS[] =
{
    { L"Ruins / New 4 TS (1/5)", 0x02dbd00, 0x02dbf00, indexJojos50Stages, 0x29, &pairFullyLinkedNode },
    { L"Ruins / New 4 TS (2/5)", 0x02dbf00, 0x02dc100, indexJojos50Stages, 0x2a },
    { L"Ruins / New 4 TS (3/5)", 0x02dc100, 0x02dc300, indexJojos50Stages, 0x2b },
    { L"Ruins / New 4 TS (4/5)", 0x02dc300, 0x02dc500, indexJojos50Stages, 0x2c },
    { L"Ruins / New 4 TS (5/5)", 0x02dc500, 0x02dc700, indexJojos50Stages, 0x2d },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWN[] =
{
    { L"Country Town Noon / Twilight / Night TS (1/21)", 0x02dc800, 0x02dca00 },
    { L"Country Town Noon / Twilight / Night TS (2/21)", 0x02dca00, 0x02dcc00 },
    { L"Country Town Noon / Twilight / Night TS (3/21)", 0x02dcc00, 0x02dce00 },
    { L"Country Town Noon / Twilight / Night TS (4/21)", 0x02dce00, 0x02dd000 },
    { L"Country Town Noon / Twilight / Night TS (5/21)", 0x02dd000, 0x02dd200 },
    { L"Country Town Noon / Twilight / Night TS (6/21)", 0x02dd200, 0x02dd400 },
    { L"Country Town Noon / Twilight / Night TS (7/21)", 0x02dd400, 0x02dd600 },
    { L"Country Town Noon / Twilight / Night TS (8/21)", 0x02dd600, 0x02dd800 },
    { L"Country Town Noon / Twilight / Night TS (9/21)", 0x02dd800, 0x02dda00 },
    { L"Country Town Noon / Twilight / Night TS (10/21)", 0x02dda00, 0x02ddc00 },
    { L"Country Town Noon / Twilight / Night TS (11/21)", 0x02ddc00, 0x02dde00 },
    { L"Country Town Noon / Twilight / Night TS (12/21)", 0x02dde00, 0x02de000 },
    { L"Country Town Noon / Twilight / Night TS (13/21)", 0x02de000, 0x02de200 },
    { L"Country Town Noon / Twilight / Night TS (14/21)", 0x02de200, 0x02de400 },
    { L"Country Town Noon / Twilight / Night TS (15/21)", 0x02de400, 0x02de600 },
    { L"Country Town Noon / Twilight / Night TS (16/21)", 0x02de600, 0x02de800 },
    { L"Country Town Noon / Twilight / Night TS (17/21)", 0x02de800, 0x02dea00 },
    { L"Country Town Noon / Twilight / Night TS (18/21)", 0x02dea00, 0x02dec00 },
    { L"Country Town Noon / Twilight / Night TS (19/21)", 0x02dec00, 0x02dee00 },
    { L"Country Town Noon / Twilight / Night TS (20/21)", 0x02dee00, 0x02df000 },
    { L"Country Town Noon / Twilight / Night TS (21/21)", 0x02df000, 0x02df180 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_UWATER[] =
{
    { L"Underground Water / New 5 TS (1/8)", 0x02df200, 0x02df400 },
    { L"Underground Water / New 5 TS (2/8)", 0x02df400, 0x02df600 },
    { L"Underground Water / New 5 TS (3/8)", 0x02df600, 0x02df800 },
    { L"Underground Water / New 5 TS (4/8)", 0x02df800, 0x02dfa00 },
    { L"Underground Water / New 5 TS (5/8)", 0x02dfa00, 0x02dfc00 },
    { L"Underground Water / New 5 TS (6/8)", 0x02dfc00, 0x02dfe00 },
    { L"Underground Water / New 5 TS (7/8)", 0x02dfe00, 0x02e0000 },
    { L"Underground Water / New 5 TS (8/8)", 0x02e0000, 0x02e0200 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_INHOUSE[] =
{
    { L"Inside House / New 6 TS (1/8)", 0x02e0300, 0x02e0500 },
    { L"Inside House / New 6 TS (2/8)", 0x02e0500, 0x02e0700 },
    { L"Inside House / New 6 TS (3/8)", 0x02e0700, 0x02e0900 },
    { L"Inside House / New 6 TS (4/8)", 0x02e0900, 0x02e0b00 },
    { L"Inside House / New 6 TS (5/8)", 0x02e0b00, 0x02e0d00 },
    { L"Inside House / New 6 TS (6/8)", 0x02e0d00, 0x02e0f00 },
    { L"Inside House / New 6 TS (7/8)", 0x02e0f00, 0x02e1100 },
    { L"Inside House / New 6 TS (8/8)", 0x02e1100, 0x02e1200 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CROOM[] =
{
    { L"Coffin Room / New 7 TS (1/4)", 0x02e1300, 0x02e1500, indexJojos50Stages, 0x5 },
    { L"Coffin Room / New 7 TS (2/4)", 0x02e1500, 0x02e1700, indexJojos50Stages, 0x6 },
    { L"Coffin Room / New 7 TS (3/4)", 0x02e1700, 0x02e1900, indexJojos50Stages, 0x7 },
    { L"Coffin Room / New 7 TS (4/4)", 0x02e1900, 0x02e1b00, indexJojos50Stages, 0x8 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWER[] =
{
    { L"Clock Tower / New 8 TS (1/3)", 0x02e1c00, 0x02e1e00, indexJojos50Stages, 0, &pairFullyLinkedNode },
    { L"Clock Tower / New 8 TS (2/3)", 0x02e1e00, 0x02e2000, indexJojos50Stages, 1 },
    { L"Clock Tower / New 8 TS (3/3)", 0x02e2000, 0x02e2200, indexJojos50Stages, 2 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SUBURB[] =
{
    { L"Surburbs 1 / 2 / 3 TS (1/22)", 0x02e2300, 0x02e2500 },
    { L"Surburbs 1 / 2 / 3 TS (2/22)", 0x02e2500, 0x02e2700 },
    { L"Surburbs 1 / 2 / 3 TS (3/22)", 0x02e2700, 0x02e2900 },
    { L"Surburbs 1 / 2 / 3 TS (4/22)", 0x02e2900, 0x02e2b00 },
    { L"Surburbs 1 / 2 / 3 TS (5/22)", 0x02e2b00, 0x02e2d00 },
    { L"Surburbs 1 / 2 / 3 TS (6/22)", 0x02e2d00, 0x02e2f00 },
    { L"Surburbs 1 / 2 / 3 TS (7/22)", 0x02e2f00, 0x02e3100 },
    { L"Surburbs 1 / 2 / 3 TS (8/22)", 0x02e3100, 0x02e3300 },
    { L"Surburbs 1 / 2 / 3 TS (9/22)", 0x02e3300, 0x02e3500 },
    { L"Surburbs 1 / 2 / 3 TS (10/22)", 0x02e3500, 0x02e3700 },
    { L"Surburbs 1 / 2 / 3 TS (11/22)", 0x02e3700, 0x02e3900 },
    { L"Surburbs 1 / 2 / 3 TS (12/22)", 0x02e3900, 0x02e3b00 },
    { L"Surburbs 1 / 2 / 3 TS (13/22)", 0x02e3b00, 0x02e3d00 },
    { L"Surburbs 1 / 2 / 3 TS (14/22)", 0x02e3d00, 0x02e3f00 },
    { L"Surburbs 1 / 2 / 3 TS (15/22)", 0x02e3f00, 0x02e4100 },
    { L"Surburbs 1 / 2 / 3 TS (16/22)", 0x02e4100, 0x02e4300 },
    { L"Surburbs 1 / 2 / 3 TS (17/22)", 0x02e4300, 0x02e4500 },
    { L"Surburbs 1 / 2 / 3 TS (18/22)", 0x02e4500, 0x02e4700 },
    { L"Surburbs 1 / 2 / 3 TS (19/22)", 0x02e4700, 0x02e4900 },
    { L"Surburbs 1 / 2 / 3 TS (20/22)", 0x02e4900, 0x02e4b00 },
    { L"Surburbs 1 / 2 / 3 TS (21/22)", 0x02e4b00, 0x02e4d00 },
    { L"Surburbs 1 / 2 / 3 TS (22/22)", 0x02e4d00, 0x02e4f00 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_OBRIDGE[] =
{
    { L"On the Bridge TS (1/2)", 0x02e4f00, 0x02e5100, indexJojos50Stages, 0x3, &pairFullyLinkedNode },
    { L"On the Bridge TS (2/2)", 0x02e5100, 0x02e5300, indexJojos50Stages, 0x4 },
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

const sDescTreeNode JOJOS_UNITS_50[ARRAYSIZE(JOJOS_A_UNITDESC_50)] =
{
    { L"HUD", DESC_NODETYPE_TREE,           (void*)JOJOS_A_50_HUD_COLLECTION, ARRAYSIZE(JOJOS_A_50_HUD_COLLECTION) },
    { L"HUD Portraits", DESC_NODETYPE_TREE, (void*)JOJOS_A_50_HUD_PORTRAIT_COLLECTION, ARRAYSIZE(JOJOS_A_50_HUD_PORTRAIT_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE,        (void*)JOJOS_A_50_STAGE_COLLECTION, ARRAYSIZE(JOJOS_A_50_STAGE_COLLECTION) },
};

const sDescTreeNode JOJOS_UNITS_51[ARRAYSIZE(JOJOS_A_UNITDESC_51)] =
{
    { L"Jotaro", 			        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOTARO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOTARO) },
    { L"Kakyoin", 		            DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT) },
    { L"Avdol", 			        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_AVDOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_AVDOL) },
    { L"Polnareff", 		        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_POL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_POL) },
    { L"Joseph", 			        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOSEPH) },
    { L"Iggy", 					    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_IGGY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_IGGY) },
    { L"Alessi", 					DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_ALESSI, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_ALESSI) },
    { L"Chaka",					    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_CHAKA, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_CHAKA) },
    { L"Devo", 				        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY) },
    { L"Midler",			        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MIDLER, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MIDLER) },
    { L"DIO",					    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DIO) },
    { L"Shadow Dio",			    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SDIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SDIO) },
    { L"Young Joseph", 				DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_YJOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_YJOSEPH) },
    { L"Hol Horse",			        DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOL) },
    { L"Vanilla Ice", 				DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_VICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_VICE) },
    { L"New Kakyoin", 	            DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIERO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIERO) },
    { L"Anubis Polnareff",			DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BPOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BPOL) },
    { L"Petshop",					DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SHOP, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SHOP) },
    { L"Mariah", 					DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MARIAH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MARIAH) },
    { L"Hol Horse & Boingo", 		DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO) },
    { L"Rubber Soul", 	            DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_RSOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_RSOUL) },
    { L"Khan", 					    DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_KHAN, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_KHAN) },
    { L"N'Doul", 					DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_NDOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_NDOUL) },
    { L"Boss Ice", 					DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BICE) },
    { L"Death 13", 					DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEATH13, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEATH13) },
    { L"Unimplemented: Gray Fly", 	DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_GRAYFLY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_GRAYFLY) },
    { L"Timestop", 					DESC_NODETYPE_TREE, (void*)JOJOS_TIMESTOP_COLLECTION, ARRAYSIZE(JOJOS_TIMESTOP_COLLECTION) },
    { L"Bonus Palettes", 			DESC_NODETYPE_TREE, (void*)JOJOS_A_BONUS_COLLECTION, ARRAYSIZE(JOJOS_A_BONUS_COLLECTION) },
};

// Unused natively, but used for Extra extension files people plug in.  May need to fork into 50/51 versions.
const stExtraDef JOJOS_A_EXTRA[] =
{
    //Start

    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};

#pragma once

#if NEED_TO_UPDATE_JOJO_HEADERS
#define USE_LARGE_PALETTES
#endif

const TCHAR JOJOS_A_UNITDESC_50[][32] =
{
    _T("HUD"),           // JOJOS_A_50_HUD_COLLECTION
    _T("HUD Portraits"), // JOJOS_A_50_HUD_PORTRAIT_COLLECTION
    _T("Stages"),        // JOJOS_A_50_STAGE_COLLECTION
};

const TCHAR JOJOS_A_UNITDESC_51[][32] =
{
    _T("Jotaro"), // JOJOS_A_CHARACTER_COLLECTION_JOTARO
    _T("Kakyoin & Hierophant"), // JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT
    _T("Avdol"), // JOJOS_A_CHARACTER_COLLECTION_AVDOL
    _T("Polnareff"), // JOJOS_A_CHARACTER_COLLECTION_POL
    _T("Joseph"), // JOJOS_A_CHARACTER_COLLECTION_JOSEPH
    _T("Iggy"), // JOJOS_A_CHARACTER_COLLECTION_IGGY
    _T("Alessi"), // JOJOS_A_CHARACTER_COLLECTION_ALESSI
    _T("Chaka"), // JOJOS_A_CHARACTER_COLLECTION_CHAKA
    _T("Devo and Ebony"), // JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY
    _T("Midler"), // JOJOS_A_CHARACTER_COLLECTION_MIDLER
    _T("Dio"), // JOJOS_A_CHARACTER_COLLECTION_DIO
    _T("Shadow Dio"), // JOJOS_A_CHARACTER_COLLECTION_SDIO
    _T("Young Joseph"), // JOJOS_A_CHARACTER_COLLECTION_YJOSEPH
    _T("Hol "), // JOJOS_A_CHARACTER_COLLECTION_HOL
    _T("Vanilla Ice"), // JOJOS_A_CHARACTER_COLLECTION_VICE
    _T("New Kakyoin & Hierophant"), // JOJOS_A_CHARACTER_COLLECTION_HIERO
    _T("Anubis Polnareff"), // JOJOS_A_CHARACTER_COLLECTION_BPOL
    _T("Petshop"), // JOJOS_A_CHARACTER_COLLECTION_SHOP
    _T("Mariah"), // JOJOS_A_CHARACTER_COLLECTION_MARIAH
    _T("Hol and Boingo"), // JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO
    _T("Rubber Soul"), // JOJOS_A_CHARACTER_COLLECTION_RSOUL
    _T("Khan"), // JOJOS_A_CHARACTER_COLLECTION_KHAN
    _T("N'Doul and Geb"), // JOJOS_A_CHARACTER_COLLECTION_NDOUL
    _T("Boss Ice"), // JOJOS_A_CHARACTER_COLLECTION_BICE
    _T("Death 13"), // JOJOS_A_CHARACTER_COLLECTION_DEATH13
    _T("Unimplemented: Gray Fly"), // JOJOS_A_CHARACTER_COLLECTION_GRAYFLY
    _T("Timestop"), // JOJOS_TIMESTOP_COLLECTION
    _T("Bonus"), // JOJOS_A_BONUS_COLLECTION
};

constexpr auto JOJOS_A_NUMUNIT_50 = ARRAYSIZE(JOJOS_A_UNITDESC_50);
constexpr auto JOJOS_A_NUMUNIT_51 = ARRAYSIZE(JOJOS_A_UNITDESC_51);

#define JOJOS_A_EXTRALOC_50 JOJOS_A_NUMUNIT_50
#define JOJOS_A_EXTRALOC_51 JOJOS_A_NUMUNIT_51

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
    { _T("Jotaro A Life Bar Portrait"), 0x07C0400, 0x07C0420, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { _T("Jotaro B Life Bar Portrait"), 0x07C0420, 0x07C0440, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { _T("Jotaro C Life Bar Portrait"), 0x07C0C00, 0x07C0C20, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { _T("Jotaro S Life Bar Portrait"), 0x07C0C20, 0x07C0C40, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { _T("Jotaro Start Life Bar Portrait"), 0x07C0C40, 0x07C0C60, indexJojos50HUDPortraits, indexJojos51Jotaro },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES[] =
{
    { _T("Kakyoin A Life Bar Portrait"), 0x07C0440, 0x07C0460, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { _T("Kakyoin B Life Bar Portrait"), 0x07C0460, 0x07C0480, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { _T("Kakyoin C Life Bar Portrait"), 0x07C0C60, 0x07C0C80, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { _T("Kakyoin S Life Bar Portrait"), 0x07C0C80, 0x07C0CA0, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { _T("Kakyoin Start Life Bar Portrait"), 0x07C0CA0, 0x07C0CC0, indexJojos50HUDPortraits, indexJojos51Kakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DIO_PALETTES[] =
{
    { _T("Dio A Life Bar Portrait"), 0x07C0480, 0x07C04A0, indexJojos50HUDPortraits, indexJojos51Dio },
    { _T("Dio B Life Bar Portrait"), 0x07C04A0, 0x07C04C0, indexJojos50HUDPortraits, indexJojos51Dio },
    { _T("Dio C Life Bar Portrait"), 0x07C14C0, 0x07C14E0, indexJojos50HUDPortraits, indexJojos51Dio },
    { _T("Dio S Life Bar Portrait"), 0x07C14E0, 0x07C1500, indexJojos50HUDPortraits, indexJojos51Dio },
    { _T("Dio Start Life Bar Portrait"), 0x07C1500, 0x07C1520, indexJojos50HUDPortraits, indexJojos51Dio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES[] =
{
    { _T("Chaka A Life Bar Portrait"), 0x07C04C0, 0x07C04E0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { _T("Chaka B Life Bar Portrait"), 0x07C04E0, 0x07C0500, indexJojos50HUDPortraits, indexJojos51Chaka },
    { _T("Chaka C Life Bar Portrait"), 0x07C0F60, 0x07C0F80, indexJojos50HUDPortraits, indexJojos51Chaka },
    { _T("Chaka S Life Bar Portrait"), 0x07C0F80, 0x07C0FA0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { _T("Chaka Start Life Bar Portrait"), 0x07C0FA0, 0x07C0FC0, indexJojos50HUDPortraits, indexJojos51Chaka },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES[] =
{
    { _T("Iggy A Life Bar Portrait"), 0x07C0500, 0x07C0520, indexJojos50HUDPortraits, indexJojos51Iggy },
    { _T("Iggy B Life Bar Portrait"), 0x07C0520, 0x07C0540, indexJojos50HUDPortraits, indexJojos51Iggy },
    { _T("Iggy C Life Bar Portrait"), 0x07C0DE0, 0x07C0E00, indexJojos50HUDPortraits, indexJojos51Iggy },
    { _T("Iggy S Life Bar Portrait"), 0x07C0E00, 0x07C0E20, indexJojos50HUDPortraits, indexJojos51Iggy },
    { _T("Iggy Start Life Bar Portrait"), 0x07C0E20, 0x07C0E40, indexJojos50HUDPortraits, indexJojos51Iggy },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES[] =
{
    { _T("Petshop A Life Bar Portrait"), 0x07C0540, 0x07C0560, indexJojos50HUDPortraits, indexJojos51Petshop },
    { _T("Petshop B Life Bar Portrait"), 0x07C0560, 0x07C0580, indexJojos50HUDPortraits, indexJojos51Petshop },
    { _T("Petshop C Life Bar Portrait"), 0x07C1800, 0x07C1820, indexJojos50HUDPortraits, indexJojos51Petshop },
    { _T("Petshop S Life Bar Portrait"), 0x07C1820, 0x07C1840, indexJojos50HUDPortraits, indexJojos51Petshop },
    { _T("Petshop Start Life Bar Portrait"), 0x07C1840, 0x07C1860, indexJojos50HUDPortraits, indexJojos51Petshop },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES[] =
{
    { _T("Polnareff A Life Bar Portrait"), 0x07C0580, 0x07C05A0, indexJojos50HUDPortraits, indexJojos51Pol },
    { _T("Polnareff B Life Bar Portrait"), 0x07C05A0, 0x07C05C0, indexJojos50HUDPortraits, indexJojos51Pol },
    { _T("Polnareff C Life Bar Portrait"), 0x07C0D20, 0x07C0D40, indexJojos50HUDPortraits, indexJojos51Pol },
    { _T("Polnareff S Life Bar Portrait"), 0x07C0D40, 0x07C0D60, indexJojos50HUDPortraits, indexJojos51Pol },
    { _T("Polnareff Start Life Bar Portrait"), 0x07C0D60, 0x07C0D80, indexJojos50HUDPortraits, indexJojos51Pol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES[] =
{
    { _T("Joseph A Life Bar Portrait"), 0x07C05C0, 0x07C05E0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { _T("Joseph B Life Bar Portrait"), 0x07C05E0, 0x07C0600, indexJojos50HUDPortraits, indexJojos51Joseph },
    { _T("Joseph C Life Bar Portrait"), 0x07C0D80, 0x07C0DA0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { _T("Joseph S Life Bar Portrait"), 0x07C0DA0, 0x07C0DC0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { _T("Joseph Start Life Bar Portrait"), 0x07C0DC0, 0x07C0DE0, indexJojos50HUDPortraits, indexJojos51Joseph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES[] =
{
    { _T("Avdol A Life Bar Portrait"), 0x07C0600, 0x07C0620, indexJojos50HUDPortraits, indexJojos51Avdol },
    { _T("Avdol B Life Bar Portrait"), 0x07C0620, 0x07C0640, indexJojos50HUDPortraits, indexJojos51Avdol },
    { _T("Avdol C Life Bar Portrait"), 0x07C0CC0, 0x07C0CE0, indexJojos50HUDPortraits, indexJojos51Avdol },
    { _T("Avdol S Life Bar Portrait"), 0x07C0CE0, 0x07C0D00, indexJojos50HUDPortraits, indexJojos51Avdol },
    { _T("Avdol Start Life Bar Portrait"), 0x07C0D00, 0x07C0D20, indexJojos50HUDPortraits, indexJojos51Avdol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES[] =
{
    { _T("Alessi A Life Bar Portrait"), 0x07C0640, 0x07C0660, indexJojos50HUDPortraits, indexJojos51Alessi },
    { _T("Alessi B Life Bar Portrait"), 0x07C0660, 0x07C0680, indexJojos50HUDPortraits, indexJojos51Alessi },
    { _T("Alessi C Life Bar Portrait"), 0x07C0F00, 0x07C0F20, indexJojos50HUDPortraits, indexJojos51Alessi },
    { _T("Alessi S Life Bar Portrait"), 0x07C0F20, 0x07C0F40, indexJojos50HUDPortraits, indexJojos51Alessi },
    { _T("Alessi Start Life Bar Portrait"), 0x07C0F40, 0x07C0F60, indexJojos50HUDPortraits, indexJojos51Alessi },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES[] =
{
    { _T("Devo A Life Bar Portrait"), 0x07C06C0, 0x07C06E0, indexJojos50HUDPortraits, indexJojos51Devo },
    { _T("Devo B Life Bar Portrait"), 0x07C06E0, 0x07C0700, indexJojos50HUDPortraits, indexJojos51Devo },
    { _T("Devo C Life Bar Portrait"), 0x07C1400, 0x07C1420, indexJojos50HUDPortraits, indexJojos51Devo },
    { _T("Devo S Life Bar Portrait"), 0x07C1420, 0x07C1440, indexJojos50HUDPortraits, indexJojos51Devo },
    { _T("Devo Start Life Bar Portrait"), 0x07C1440, 0x07C1460, indexJojos50HUDPortraits, indexJojos51Devo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES[] =
{
    { _T("Vanilla Ice A Life Bar Portrait"), 0x07C0740, 0x07C0760, indexJojos50HUDPortraits, indexJojos51VIce },
    { _T("Vanilla Ice B Life Bar Portrait"), 0x07C0760, 0x07C0780, indexJojos50HUDPortraits, indexJojos51VIce },
    { _T("Vanilla Ice C Life Bar Portrait"), 0x07C1520, 0x07C1540, indexJojos50HUDPortraits, indexJojos51VIce },
    { _T("Vanilla Ice S Life Bar Portrait"), 0x07C1540, 0x07C1560, indexJojos50HUDPortraits, indexJojos51VIce },
    { _T("Vanilla Ice Start Life Bar Portrait"), 0x07C1560, 0x07C1580, indexJojos50HUDPortraits, indexJojos51VIce },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOL_PALETTES[] =
{
    { _T("Hol Horse A Life Bar Portrait"), 0x07C0780, 0x07C07A0, indexJojos50HUDPortraits, indexJojos51Hol },
    { _T("Hol Horse B Life Bar Portrait"), 0x07C07A0, 0x07C07C0, indexJojos50HUDPortraits, indexJojos51Hol },
    { _T("Hol Horse C Life Bar Portrait"), 0x07C1640, 0x07C1660, indexJojos50HUDPortraits, indexJojos51Hol },
    { _T("Hol Horse S Life Bar Portrait"), 0x07C1660, 0x07C1680, indexJojos50HUDPortraits, indexJojos51Hol },
    { _T("Hol Horse Start Life Bar Portrait"), 0x07C1680, 0x07C16A0, indexJojos50HUDPortraits, indexJojos51Hol },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES[] =
{
    { _T("Midler A Life Bar Portrait"), 0x07C08C0, 0x07C08E0, indexJojos50HUDPortraits, indexJojos51Midler },
    { _T("Midler B Life Bar Portrait"), 0x07C08E0, 0x07C0900, indexJojos50HUDPortraits, indexJojos51Midler },
    { _T("Midler C Life Bar Portrait"), 0x07C1460, 0x07C1480, indexJojos50HUDPortraits, indexJojos51Midler },
    { _T("Midler S Life Bar Portrait"), 0x07C1480, 0x07C14A0, indexJojos50HUDPortraits, indexJojos51Midler },
    { _T("Midler Start Life Bar Portrait"), 0x07C14A0, 0x07C14C0, indexJojos50HUDPortraits, indexJojos51Midler },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES[] =
{
    { _T("Mariah A Life Bar Portrait"), 0x07C0900, 0x07C0920, indexJojos50HUDPortraits, indexJojos51Mariah },
    { _T("Mariah B Life Bar Portrait"), 0x07C0920, 0x07C0940, indexJojos50HUDPortraits, indexJojos51Mariah },
    { _T("Mariah C Life Bar Portrait"), 0x07C1860, 0x07C1880, indexJojos50HUDPortraits, indexJojos51Mariah },
    { _T("Mariah S Life Bar Portrait"), 0x07C1880, 0x07C18A0, indexJojos50HUDPortraits, indexJojos51Mariah },
    { _T("Mariah Start Life Bar Portrait"), 0x07C18A0, 0x07C18C0, indexJojos50HUDPortraits, indexJojos51Mariah },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES[] =
{
    { _T("Young Joseph A Life Bar Portrait"), 0x07C0B60, 0x07C0B80, indexJojos50HUDPortraits, indexJojos51YSeph },
    { _T("Young Joseph B Life Bar Portrait"), 0x07C0B80, 0x07C0BA0, indexJojos50HUDPortraits, indexJojos51YSeph },
    { _T("Young Joseph C Life Bar Portrait"), 0x07C15E0, 0x07C1600, indexJojos50HUDPortraits, indexJojos51YSeph },
    { _T("Young Joseph S Life Bar Portrait"), 0x07C1600, 0x07C1620, indexJojos50HUDPortraits, indexJojos51YSeph },
    { _T("Young Joseph Start Life Bar Portrait"), 0x07C1620, 0x07C1640, indexJojos50HUDPortraits, indexJojos51YSeph },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES[] =
{
    { _T("Shadow Dio A Life Bar Portrait"), 0x07C0BA0, 0x07C0BC0, indexJojos50HUDPortraits, indexJojos51SDio },
    { _T("Shadow Dio B Life Bar Portrait"), 0x07C0BC0, 0x07C0BE0, indexJojos50HUDPortraits, indexJojos51SDio },
    { _T("Shadow Dio C Life Bar Portrait"), 0x07C1580, 0x07C15A0, indexJojos50HUDPortraits, indexJojos51SDio },
    { _T("Shadow Dio S Life Bar Portrait"), 0x07C15A0, 0x07C15C0, indexJojos50HUDPortraits, indexJojos51SDio },
    { _T("Shadow Dio Start Life Bar Portrait"), 0x07C15C0, 0x07C15E0, indexJojos50HUDPortraits, indexJojos51SDio },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES[] =
{
    { _T("New Kakyoin A / B / Start Life Bar Portrait"), 0x07C16E0, 0x07C1700, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { _T("New Kakyoin C Life Bar Portrait"), 0x07C16A0, 0x07C16C0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
    { _T("New Kakyoin S Life Bar Portrait"), 0x07C16C0, 0x07C16E0, indexJojos50HUDPortraits, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_APOL_PALETTES[] =
{
    { _T("Anubis Polnareff A Life Bar Portrait"), 0x07C1700, 0x07C1720, indexJojos50HUDPortraits, indexJojos51Anubis },
    { _T("Anubis Polnareff B Life Bar Portrait"), 0x07C1720, 0x07C1740, indexJojos50HUDPortraits, indexJojos51Anubis },
    { _T("Anubis Polnareff C Life Bar Portrait"), 0x07C1740, 0x07C1760, indexJojos50HUDPortraits, indexJojos51Anubis },
    { _T("Anubis Polnareff S Life Bar Portrait"), 0x07C1760, 0x07C1780, indexJojos50HUDPortraits, indexJojos51Anubis },
    { _T("Anubis Polnareff Start Life Bar Portrait"), 0x07C1780, 0x07C17A0, indexJojos50HUDPortraits, indexJojos51Anubis },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES[] =
{
    { _T("Hol & Boingo A Life Bar Portrait"), 0x07C18C0, 0x07C18E0, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { _T("Hol & Boingo B Life Bar Portrait"), 0x07C18E0, 0x07C1900, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { _T("Hol & Boingo C Life Bar Portrait"), 0x07C1900, 0x07C1920, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { _T("Hol & Boingo S Life Bar Portrait"), 0x07C1920, 0x07C1940, indexJojos50HUDPortraits, indexJojos51HolBoingo },
    { _T("Hol & Boingo Start Life Bar Portrait"), 0x07C1940, 0x07C1960, indexJojos50HUDPortraits, indexJojos51HolBoingo },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES[] =
{
    { _T("Rubber Soul A Life Bar Portrait"), 0x07C1960, 0x07C1980, indexJojos50HUDPortraits, indexJojos51RSoul },
    { _T("Rubber Soul B Life Bar Portrait"), 0x07C1980, 0x07C19A0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { _T("Rubber Soul C Life Bar Portrait"), 0x07C19A0, 0x07C19C0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { _T("Rubber Soul S Life Bar Portrait"), 0x07C19C0, 0x07C19E0, indexJojos50HUDPortraits, indexJojos51RSoul },
    { _T("Rubber Soul Start Life Bar Portrait"), 0x07C19E0, 0x07C1A00, indexJojos50HUDPortraits, indexJojos51RSoul },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES[] =
{
    { _T("Khan A Life Bar Portrait"), 0x07C1A00, 0x07C1A20, indexJojos50HUDPortraits, indexJojos51Khan },
    { _T("Khan B Life Bar Portrait"), 0x07C1A20, 0x07C1A40, indexJojos50HUDPortraits, indexJojos51Khan },
    { _T("Khan C Life Bar Portrait"), 0x07C1A40, 0x07C1A60, indexJojos50HUDPortraits, indexJojos51Khan },
    { _T("Khan S Life Bar Portrait"), 0x07C1A60, 0x07C1A80, indexJojos50HUDPortraits, indexJojos51Khan },
    { _T("Khan Start Life Bar Portrait"), 0x07C1A80, 0x07C1AA0, indexJojos50HUDPortraits, indexJojos51Khan },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES[] =
{
    { _T("Death 13 A Life Bar Portrait"), 0x07C0800, 0x07C0820 },
    { _T("Death 13 B Life Bar Portrait"), 0x07C0820, 0x07C0840 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES[] =
{
    { _T("N'Doul A Life Bar Portrait"), 0x07C0840, 0x07C0860 },
    { _T("N'Doul B Life Bar Portrait"), 0x07C0860, 0x07C0880 },
};

const sDescTreeNode JOJOS_A_50_HUD_PORTRAIT_COLLECTION[]
{
    { _T("Jotaro"), DESC_NODETYPE_TREE, (void *)JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES) },
    { _T("Kakyoin"), DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES) },
    { _T("Dio"), DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_DIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DIO_PALETTES) },
    { _T("Chaka"), DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES) },
    { _T("Iggy"), DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES) },
    { _T("Petshop"), DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES) },
    { _T("Polnareff"), DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES) },
    { _T("Joseph"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES) },
    { _T("Avdol"), DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES) },
    { _T("Alessi"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES) },
    { _T("Devo"), DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES) },
    { _T("Vanilla Ice"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES) },
    { _T("Hol Horse"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOL_PALETTES) },
    { _T("Midler"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES) },
    { _T("Mariah"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES) },
    { _T("Young Joseph"), DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES) },
    { _T("Shadow Dio"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES) },
    { _T("New Kakyoin"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES) },
    { _T("Anubis Polnareff"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_APOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_APOL_PALETTES) },
    { _T("Hol & Boingo"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES) },
    { _T("Rubber Soul"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES) },
    { _T("Khan"), DESC_NODETYPE_TREE,       (void*)JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES) },
    { _T("Death 13"), DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES) },
    { _T("N'Doul"),  DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES) },
};

#pragma endregion HUD Portraits

#pragma region HUD
const sGame_PaletteDataset JOJOS_A_HUD_PALETTE_NODES[] =
{
    { _T("Round Markers"), 0x07C0160, 0x07C0180, indexJojos51Bonus, 0x28, &pairHandledInCode },
    { _T("Timer"), 0x07C00C0, 0x07C00E0, indexJojos51Bonus, 0x2b },
    { _T("Lifebar"), 0x07C01E0, 0x07C0200, indexJojos51Bonus, 0x27 },
    { _T("Stand Meter"), 0x07C0200, 0x07C0220, indexJojos51Bonus, 0x29 },
    { _T("Stand Text Under The Stand Gauge"), 0x07C0320, 0x07C0340, indexJojos51Bonus, 0x2a },
    { _T("Combo Meter"), 0x07C01C0, 0x07C01E0 },
    { _T("Combo Messages"), 0x07C0220, 0x07C0240 },
    { _T("Text Above The Lifebars"),  0x07C0280, 0x07C02A0 }, // Could use 0x2a sprite here
    { _T("Stand Crash / First Hit / Etc. Messages"), 0x07C0340, 0x07C0360 },
    { _T("Stand Meter / Near Stand Break"), 0x07C0B20, 0x07C0B60 },
    { _T("Super Meter Bar"), 0x07C03A0, 0x07C0400 },
    { _T("Mariah Level (Player 1 only)"), 0x07C01A0, 0x07C01C0 },
    { _T("Dev-menu Font Color"), 0x07C0000, 0x07C0020 },
    { _T("Player 1 and 2 counter icons"), 0x07C02E0, 0x07C0320, indexJojos51Bonus, 0x26 },
};

const sDescTreeNode JOJOS_A_50_HUD_COLLECTION[]
{
    { _T("Palette"), DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PALETTE_NODES, ARRAYSIZE(JOJOS_A_HUD_PALETTE_NODES) },
};
#pragma endregion HUD

#pragma region Stages

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_ALOCKUP[] =
{
    { _T("A Lockup (1/7)"), 0x07c3000, 0x07c3200 },
    { _T("A Lockup (2/7)"), 0x07c3200, 0x07c3400 },
    { _T("A Lockup (3/7)"), 0x07c3400, 0x07c3600 },
    { _T("A Lockup (4/7)"), 0x07c3600, 0x07c3800 },
    { _T("A Lockup (5/7)"), 0x07c3800, 0x07c3a00 },
    { _T("A Lockup (6/7)"), 0x07c3a00, 0x07c3c00 },
    { _T("A Lockup (7/7)"), 0x07c3c00, 0x07c3d80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AHEALTHROOM[] =
{
    { _T("A Health Room (1/6)"), 0x07c3e00, 0x07c4000 },
    { _T("A Health Room (2/6)"), 0x07c4000, 0x07c4200 },
    { _T("A Health Room (3/6)"), 0x07c4200, 0x07c4400 },
    { _T("A Health Room (4/6)"), 0x07c4400, 0x07c4600 },
    { _T("A Health Room (5/6)"), 0x07c4600, 0x07c4800 },
    { _T("A Health Room (6/6)"), 0x07c4800, 0x07c4900 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AIRPLANE[] =
{
    { _T("In A Airplane (1/17)"), 0x07c4a00, 0x07c4c00 },
    { _T("In A Airplane (2/17)"), 0x07c4c00, 0x07c4e00 },
    { _T("In A Airplane (3/17)"), 0x07c4e00, 0x07c5000 },
    { _T("In A Airplane (4/17)"), 0x07c5000, 0x07c5200 },
    { _T("In A Airplane (5/17)"), 0x07c5200, 0x07c5400 },
    { _T("In A Airplane (6/17)"), 0x07c5400, 0x07c5600 },
    { _T("In A Airplane (7/17)"), 0x07c5600, 0x07c5800 },
    { _T("In A Airplane (8/17)"), 0x07c5800, 0x07c5a00 },
    { _T("In A Airplane (9/17)"), 0x07c5a00, 0x07c5c00 },
    { _T("In A Airplane (10/17)"), 0x07c5c00, 0x07c5e00 },
    { _T("In A Airplane (11/17)"), 0x07c5e00, 0x07c6000 },
    { _T("In A Airplane (12/17)"), 0x07c6000, 0x07c6200 },
    { _T("In A Airplane (13/17)"), 0x07c6200, 0x07c6400 },
    { _T("In A Airplane (14/17)"), 0x07c6400, 0x07c6600 },
    { _T("In A Airplane (15/17)"), 0x07c6600, 0x07c6800 },
    { _T("In A Airplane (16/17)"), 0x07c6800, 0x07c6a00 },
    { _T("In A Airplane (17/17)"), 0x07c6a00, 0x07c6b80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_TGARDEN[] =
{
    { _T("Tigerbaum Garden (1/11)"), 0x07c6c00, 0x07c6e00, indexJojos51Stages, 0x1e, &pairFullyLinkedNode },
    { _T("Tigerbaum Garden (2/11)"), 0x07c6e00, 0x07c7000, indexJojos51Stages, 0x1f },
    { _T("Tigerbaum Garden (3/11)"), 0x07c7000, 0x07c7200, indexJojos51Stages, 0x20 },
    { _T("Tigerbaum Garden (4/11)"), 0x07c7200, 0x07c7400, indexJojos51Stages, 0x21 },
    { _T("Tigerbaum Garden (5/11)"), 0x07c7400, 0x07c7600, indexJojos51Stages, 0x22 },
    { _T("Tigerbaum Garden (6/11)"), 0x07c7600, 0x07c7800, indexJojos51Stages, 0x23 },
    { _T("Tigerbaum Garden (7/11)"), 0x07c7800, 0x07c7a00, indexJojos51Stages, 0x24 },
    { _T("Tigerbaum Garden (8/11)"), 0x07c7a00, 0x07c7c00, indexJojos51Stages, 0x25 },
    { _T("Tigerbaum Garden (9/11)"), 0x07c7c00, 0x07c7e00, indexJojos51Stages, 0x26 },
    { _T("Tigerbaum Garden (10/11)"), 0x07c7e00, 0x07c8000, indexJojos51Stages, 0x27 },
    { _T("Tigerbaum Garden (11/11)"), 0x07c8000, 0x07c8200, indexJojos51Stages, 0x28 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELD[] =
{
    { _T("Hotel (Devil) (1/7)"), 0x07c8300, 0x07c8500, indexJojos51Stages, 0x11, &pairFullyLinkedNode },
    { _T("Hotel (Devil) (2/7)"), 0x07c8500, 0x07c8700, indexJojos51Stages, 0x12 },
    { _T("Hotel (Devil) (3/7)"), 0x07c8700, 0x07c8900, indexJojos51Stages, 0x13 },
    { _T("Hotel (Devil) (4/7)"), 0x07c8900, 0x07c8b00, indexJojos51Stages, 0x14 },
    { _T("Hotel (Devil) (5/7)"), 0x07c8b00, 0x07c8d00, indexJojos51Stages, 0x15 },
    { _T("Hotel (Devil) (6/7)"), 0x07c8d00, 0x07c8f00, indexJojos51Stages, 0x16 },
    { _T("Hotel (Devil) (7/7)"), 0x07c8f00, 0x07c9080, indexJojos51Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_REMAINS[] =
{
    { _T("Remains (1/9)"), 0x07c9f80, 0x07ca180 },
    { _T("Remains (2/9)"), 0x07ca180, 0x07ca380 },
    { _T("Remains (3/9)"), 0x07ca380, 0x07ca580 },
    { _T("Remains (4/9)"), 0x07ca580, 0x07ca780 },
    { _T("Remains (5/9)"), 0x07ca780, 0x07ca980 },
    { _T("Remains (6/9)"), 0x07ca980, 0x07cab80 },
    { _T("Remains (7/9)"), 0x07cab80, 0x07cad80 },
    { _T("Remains (8/9)"), 0x07cad80, 0x07caf80 },
    { _T("Remains (9/9)"), 0x07caf80, 0x07cb180 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELJ[] =
{
    { _T("Hotel (Justice) (1/8)"), 0x07cc500, 0x07cc700 },
    { _T("Hotel (Justice) (2/8)"), 0x07cc700, 0x07cc900 },
    { _T("Hotel (Justice) (3/8)"), 0x07cc900, 0x07ccb00 },
    { _T("Hotel (Justice) (4/8)"), 0x07ccb00, 0x07ccd00 },
    { _T("Hotel (Justice) (5/8)"), 0x07ccd00, 0x07ccf00 },
    { _T("Hotel (Justice) (6/8)"), 0x07ccf00, 0x07cd100 },
    { _T("Hotel (Justice) (7/8)"), 0x07cd100, 0x07cd300 },
    { _T("Hotel (Justice) (8/8)"), 0x07cd300, 0x07cd380 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AMPARK[] =
{
    { _T("Amusement Park (1/27)"), 0x07cd400, 0x07cd600 },
    { _T("Amusement Park (2/27)"), 0x07cd600, 0x07cd800 },
    { _T("Amusement Park (3/27)"), 0x07cd800, 0x07cda00 },
    { _T("Amusement Park (4/27)"), 0x07cda00, 0x07cdc00 },
    { _T("Amusement Park (5/27)"), 0x07cdc00, 0x07cde00 },
    { _T("Amusement Park (6/27)"), 0x07cde00, 0x07ce000 },
    { _T("Amusement Park (7/27)"), 0x07ce000, 0x07ce200 },
    { _T("Amusement Park (8/27)"), 0x07ce200, 0x07ce400 },
    { _T("Amusement Park (9/27)"), 0x07ce400, 0x07ce600 },
    { _T("Amusement Park (10/27)"), 0x07ce600, 0x07ce800 },
    { _T("Amusement Park (11/27)"), 0x07ce800, 0x07cea00 },
    { _T("Amusement Park (12/27)"), 0x07cea00, 0x07cec00 },
    { _T("Amusement Park (13/27)"), 0x07cec00, 0x07cee00 },
    { _T("Amusement Park (14/27)"), 0x07cee00, 0x07cf000 },
    { _T("Amusement Park (15/27)"), 0x07cf000, 0x07cf200 },
    { _T("Amusement Park (16/27)"), 0x07cf200, 0x07cf400 },
    { _T("Amusement Park (17/27)"), 0x07cf400, 0x07cf600 },
    { _T("Amusement Park (18/27)"), 0x07cf600, 0x07cf800 },
    { _T("Amusement Park (19/27)"), 0x07cf800, 0x07cfa00 },
    { _T("Amusement Park (20/27)"), 0x07cfa00, 0x07cfc00 },
    { _T("Amusement Park (21/27)"), 0x07cfc00, 0x07cfe00 },
    { _T("Amusement Park (22/27)"), 0x07cfe00, 0x07d0000 },
    { _T("Amusement Park (23/27)"), 0x07d0000, 0x07d0200 },
    { _T("Amusement Park (24/27)"), 0x07d0200, 0x07d0400 },
    { _T("Amusement Park (25/27)"), 0x07d0400, 0x07d0600 },
    { _T("Amusement Park (26/27)"), 0x07d0600, 0x07d0800 },
    { _T("Amusement Park (27/27)"), 0x07d0800, 0x07d0900 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLAND[] =
{
    { _T("Small Island (1/6)"), 0x07d0a00, 0x07d0c00, indexJojos51Stages, 0x18 },
    { _T("Small Island (2/6)"), 0x07d0c00, 0x07d0e00, indexJojos51Stages, 0x19 },
    { _T("Small Island (3/6)"), 0x07d0e00, 0x07d1000, indexJojos51Stages, 0x1A },
    { _T("Small Island (4/6)"), 0x07d1000, 0x07d1200, indexJojos51Stages, 0x1B },
    { _T("Small Island (5/6)"), 0x07d1200, 0x07d1400, indexJojos51Stages, 0x1C },
    { _T("Small Island (6/6)"), 0x07d1400, 0x07d1600, indexJojos51Stages, 0x1D },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNOON[] =
{
    { _T("Desert Noon (1/7)"), 0x07d3100, 0x07d3300, indexJojos51Stages, 0x0b },
    { _T("Desert Noon (2/7)"), 0x07d3300, 0x07d3500 },
    { _T("Desert Noon (3/7)"), 0x07d3500, 0x07d3700, indexJojos51Stages, 0x0c },
    { _T("Desert Noon (4/7)"), 0x07d3700, 0x07d3900 },
    { _T("Desert Noon (5/7)"), 0x07d3900, 0x07d3b00, indexJojos51Stages, 0x0d },
    { _T("Desert Noon (6/7)"), 0x07d3b00, 0x07d3d00, indexJojos51Stages, 0x0e },
    { _T("Desert Noon (7/7)"), 0x07d3d00, 0x07d3f00, indexJojos51Stages, 0x0f },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_RUIN[] =
{
    { _T("Ruins (1/5)"), 0x07d6d00, 0x07d6f00 },
    { _T("Ruins (2/5)"), 0x07d6f00, 0x07d7100 },
    { _T("Ruins (3/5)"), 0x07d7100, 0x07d7300 },
    { _T("Ruins (4/5)"), 0x07d7300, 0x07d7500 },
    { _T("Ruins (5/5)"), 0x07d7500, 0x07d7700 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNOON[] =
{
    { _T("Country Town Noon (1/21)"), 0x07d8300, 0x07d8500 },
    { _T("Country Town Noon (2/21)"), 0x07d8500, 0x07d8700 },
    { _T("Country Town Noon (3/21)"), 0x07d8700, 0x07d8900 },
    { _T("Country Town Noon (4/21)"), 0x07d8900, 0x07d8b00 },
    { _T("Country Town Noon (5/21)"), 0x07d8b00, 0x07d8d00 },
    { _T("Country Town Noon (6/21)"), 0x07d8d00, 0x07d8f00 },
    { _T("Country Town Noon (7/21)"), 0x07d8f00, 0x07d9100 },
    { _T("Country Town Noon (8/21)"), 0x07d9100, 0x07d9300 },
    { _T("Country Town Noon (9/21)"), 0x07d9300, 0x07d9500 },
    { _T("Country Town Noon (10/21)"), 0x07d9500, 0x07d9700 },
    { _T("Country Town Noon (11/21)"), 0x07d9700, 0x07d9900 },
    { _T("Country Town Noon (12/21)"), 0x07d9900, 0x07d9b00 },
    { _T("Country Town Noon (13/21)"), 0x07d9b00, 0x07d9d00 },
    { _T("Country Town Noon (14/21)"), 0x07d9d00, 0x07d9f00 },
    { _T("Country Town Noon (15/21)"), 0x07d9f00, 0x07da100 },
    { _T("Country Town Noon (16/21)"), 0x07da100, 0x07da300 },
    { _T("Country Town Noon (17/21)"), 0x07da300, 0x07da500 },
    { _T("Country Town Noon (18/21)"), 0x07da500, 0x07da700 },
    { _T("Country Town Noon (19/21)"), 0x07da700, 0x07da900 },
    { _T("Country Town Noon (20/21)"), 0x07da900, 0x07dab00 },
    { _T("Country Town Noon (21/21)"), 0x07dab00, 0x07dac80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_UWATER[] =
{
    { _T("Underground Water (1/8)"), 0x07e0100, 0x07e0300 },
    { _T("Underground Water (2/8)"), 0x07e0300, 0x07e0500 },
    { _T("Underground Water (3/8)"), 0x07e0500, 0x07e0700 },
    { _T("Underground Water (4/8)"), 0x07e0700, 0x07e0900 },
    { _T("Underground Water (5/8)"), 0x07e0900, 0x07e0b00 },
    { _T("Underground Water (6/8)"), 0x07e0b00, 0x07e0d00 },
    { _T("Underground Water (7/8)"), 0x07e0d00, 0x07e0f00 },
    { _T("Underground Water (8/8)"), 0x07e0f00, 0x07e1100 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_INHOUSE[] =
{
    { _T("Inside House (1/8)"), 0x07e2300, 0x07e2500 },
    { _T("Inside House (2/8)"), 0x07e2500, 0x07e2700 },
    { _T("Inside House (3/8)"), 0x07e2700, 0x07e2900 },
    { _T("Inside House (4/8)"), 0x07e2900, 0x07e2b00 },
    { _T("Inside House (5/8)"), 0x07e2b00, 0x07e2d00 },
    { _T("Inside House (6/8)"), 0x07e2d00, 0x07e2f00 },
    { _T("Inside House (7/8)"), 0x07e2f00, 0x07e3100 },
    { _T("Inside House (8/8)"), 0x07e3100, 0x07e3200 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CROOM[] =
{
    { _T("Coffin Room (1/6)"), 0x07e4300, 0x07e4500, indexJojos51Stages, 0x5 },
    { _T("Coffin Room (2/6)"), 0x07e4500, 0x07e4700, indexJojos51Stages, 0x6 },
    { _T("Coffin Room (3/6)"), 0x07e4700, 0x07e4900, indexJojos51Stages, 0x7 },
    { _T("Coffin Room (4/6)"), 0x07e4900, 0x07e4b00, indexJojos51Stages, 0x8 },
    { _T("Coffin Room (5/6)"), 0x07e4b00, 0x07e4d00, indexJojos51Stages, 0x9 }, // This and the next are weird characters
    { _T("Coffin Room (6/6)"), 0x07e4d00, 0x07e4e00, indexJojos51Stages, 0xa },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CLOCK[] =
{
    { _T("Clock Tower (1/3)"), 0x07e5b00, 0x07e5d00, indexJojos51Stages, 0 },
    { _T("Clock Tower (2/3)"), 0x07e5d00, 0x07e5f00, indexJojos51Stages, 0x1 },
    { _T("Clock Tower (3/3)"), 0x07e5f00, 0x07e6100, indexJojos51Stages, 0x2 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB[] =
{
    { _T("Suburbs (1/22)"), 0x07e6900, 0x07e6b00 },
    { _T("Suburbs (2/22)"), 0x07e6b00, 0x07e6d00 },
    { _T("Suburbs (3/22)"), 0x07e6d00, 0x07e6f00 },
    { _T("Suburbs (4/22)"), 0x07e6f00, 0x07e7100 },
    { _T("Suburbs (5/22)"), 0x07e7100, 0x07e7300 },
    { _T("Suburbs (6/22)"), 0x07e7300, 0x07e7500 },
    { _T("Suburbs (7/22)"), 0x07e7500, 0x07e7700 },
    { _T("Suburbs (8/22)"), 0x07e7700, 0x07e7900 },
    { _T("Suburbs (9/22)"), 0x07e7900, 0x07e7b00 },
    { _T("Suburbs (10/22)"), 0x07e7b00, 0x07e7d00 },
    { _T("Suburbs (11/22)"), 0x07e7d00, 0x07e7f00 },
    { _T("Suburbs (12/22)"), 0x07e7f00, 0x07e8100 },
    { _T("Suburbs (13/22)"), 0x07e8100, 0x07e8300 },
    { _T("Suburbs (14/22)"), 0x07e8300, 0x07e8500 },
    { _T("Suburbs (15/22)"), 0x07e8500, 0x07e8700 },
    { _T("Suburbs (16/22)"), 0x07e8700, 0x07e8900 },
    { _T("Suburbs (17/22)"), 0x07e8900, 0x07e8b00 },
    { _T("Suburbs (18/22)"), 0x07e8b00, 0x07e8d00 },
    { _T("Suburbs (19/22)"), 0x07e8d00, 0x07e8f00 },
    { _T("Suburbs (20/22)"), 0x07e8f00, 0x07e9100 },
    { _T("Suburbs (21/22)"), 0x07e9100, 0x07e9300 },
    { _T("Suburbs (22/22)"), 0x07e9300, 0x07e9480 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_OTBRIDGE[] =
{
    { _T("On The Bridge (1/2)"), 0x07eed00, 0x07eef00, indexJojos51Stages, 0x3 },
    { _T("On The Bridge (2/2)"), 0x07eef00, 0x07ef100, indexJojos51Stages, 0x4 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTTWILIGHT[] =
{
    { _T("Country Town Twilight (1/21)"), 0x07dad00, 0x07daf00 },
    { _T("Country Town Twilight (2/21)"), 0x07daf00, 0x07db100 },
    { _T("Country Town Twilight (3/21)"), 0x07db100, 0x07db300 },
    { _T("Country Town Twilight (4/21)"), 0x07db300, 0x07db500 },
    { _T("Country Town Twilight (5/21)"), 0x07db500, 0x07db700 },
    { _T("Country Town Twilight (6/21)"), 0x07db700, 0x07db900 },
    { _T("Country Town Twilight (7/21)"), 0x07db900, 0x07dbb00 },
    { _T("Country Town Twilight (8/21)"), 0x07dbb00, 0x07dbd00 },
    { _T("Country Town Twilight (9/21)"), 0x07dbd00, 0x07dbf00 },
    { _T("Country Town Twilight (10/21)"), 0x07dbf00, 0x07dc100 },
    { _T("Country Town Twilight (11/21)"), 0x07dc100, 0x07dc300 },
    { _T("Country Town Twilight (12/21)"), 0x07dc300, 0x07dc500 },
    { _T("Country Town Twilight (13/21)"), 0x07dc500, 0x07dc700 },
    { _T("Country Town Twilight (14/21)"), 0x07dc700, 0x07dc900 },
    { _T("Country Town Twilight (15/21)"), 0x07dc900, 0x07dcb00 },
    { _T("Country Town Twilight (16/21)"), 0x07dcb00, 0x07dcd00 },
    { _T("Country Town Twilight (17/21)"), 0x07dcd00, 0x07dcf00 },
    { _T("Country Town Twilight (18/21)"), 0x07dcf00, 0x07dd100 },
    { _T("Country Town Twilight (19/21)"), 0x07dd100, 0x07dd300 },
    { _T("Country Town Twilight (20/21)"), 0x07dd300, 0x07dd500 },
    { _T("Country Town Twilight (21/21)"), 0x07dd500, 0x07dd680 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DMORNING[] =
{
    { _T("Desert Morning (1/8)"), 0x07d4000, 0x07d4200, indexJojos51Stages, 0x0b },
    { _T("Desert Morning (2/8)"), 0x07d4200, 0x07d4400 },
    { _T("Desert Morning (3/8)"), 0x07d4400, 0x07d4600, indexJojos51Stages, 0x0c },
    { _T("Desert Morning (4/8)"), 0x07d4600, 0x07d4800 },
    { _T("Desert Morning (5/8)"), 0x07d4800, 0x07d4a00, indexJojos51Stages, 0x0d },
    { _T("Desert Morning (6/8)"), 0x07d4a00, 0x07d4c00, indexJojos51Stages, 0x0e },
    { _T("Desert Morning (7/8)"), 0x07d4c00, 0x07d4e00, indexJojos51Stages, 0x0f },
    { _T("Desert Morning (8/8)"), 0x07d4e00, 0x07d4e80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DTWILIGHT[] =
{
    { _T("Desert Twilight (1/8)"), 0x07d5e00, 0x07d6000, indexJojos51Stages, 0x0b },
    { _T("Desert Twilight (2/8)"), 0x07d6000, 0x07d6200 },
    { _T("Desert Twilight (3/8)"), 0x07d6200, 0x07d6400, indexJojos51Stages, 0x0c },
    { _T("Desert Twilight (4/8)"), 0x07d6400, 0x07d6600 },
    { _T("Desert Twilight (5/8)"), 0x07d6600, 0x07d6800, indexJojos51Stages, 0x0d },
    { _T("Desert Twilight (6/8)"), 0x07d6800, 0x07d6a00, indexJojos51Stages, 0x0e },
    { _T("Desert Twilight (7/8)"), 0x07d6a00, 0x07d6c00, indexJojos51Stages, 0x0f },
    { _T("Desert Twilight (8/8)"), 0x07d6c00, 0x07d6c80},
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNIGHT[] =
{
    { _T("Desert Night (1/8)"), 0x07d4f00, 0x07d5100, indexJojos51Stages, 0xb },
    { _T("Desert Night (2/8)"), 0x07d5100, 0x07d5300 },
    { _T("Desert Night (3/8)"), 0x07d5300, 0x07d5500, indexJojos51Stages, 0xc },
    { _T("Desert Night (4/8)"), 0x07d5500, 0x07d5700 },
    { _T("Desert Night (5/8)"), 0x07d5700, 0x07d5900, indexJojos51Stages, 0xd },
    { _T("Desert Night (6/8)"), 0x07d5900, 0x07d5b00, indexJojos51Stages, 0xe },
    { _T("Desert Night (7/8)"), 0x07d5b00, 0x07d5d00, indexJojos51Stages, 0xf },
    { _T("Desert Night (8/8)"), 0x07d5d00, 0x07d5d80, indexJojos51Stages, 0x10 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLANDJ[] =
{
    { _T("Small Island (Joseph) (1/6)"), 0x07d1700, 0x07d1900, indexJojos51Stages, 0x18 },
    { _T("Small Island (Joseph) (2/6)"), 0x07d1900, 0x07d1b00, indexJojos51Stages, 0x19 },
    { _T("Small Island (Joseph) (3/6)"), 0x07d1b00, 0x07d1d00, indexJojos51Stages, 0x1a },
    { _T("Small Island (Joseph) (4/6)"), 0x07d1d00, 0x07d1f00, indexJojos51Stages, 0x1b },
    { _T("Small Island (Joseph) (5/6)"), 0x07d1f00, 0x07d2100, indexJojos51Stages, 0x1c },
    { _T("Small Island (Joseph) (6/6)"), 0x07d2100, 0x07d2300, indexJojos51Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNIGHT[] =
{
    { _T("Country Town Night (1/21)"), 0x07dd700, 0x07dd900 },
    { _T("Country Town Night (2/21)"), 0x07dd900, 0x07ddb00 },
    { _T("Country Town Night (3/21)"), 0x07ddb00, 0x07ddd00 },
    { _T("Country Town Night (4/21)"), 0x07ddd00, 0x07ddf00 },
    { _T("Country Town Night (5/21)"), 0x07ddf00, 0x07de100 },
    { _T("Country Town Night (6/21)"), 0x07de100, 0x07de300 },
    { _T("Country Town Night (7/21)"), 0x07de300, 0x07de500 },
    { _T("Country Town Night (8/21)"), 0x07de500, 0x07de700 },
    { _T("Country Town Night (9/21)"), 0x07de700, 0x07de900 },
    { _T("Country Town Night (10/21)"), 0x07de900, 0x07deb00 },
    { _T("Country Town Night (11/21)"), 0x07deb00, 0x07ded00 },
    { _T("Country Town Night (12/21)"), 0x07ded00, 0x07def00 },
    { _T("Country Town Night (13/21)"), 0x07def00, 0x07df100 },
    { _T("Country Town Night (14/21)"), 0x07df100, 0x07df300 },
    { _T("Country Town Night (15/21)"), 0x07df300, 0x07df500 },
    { _T("Country Town Night (16/21)"), 0x07df500, 0x07df700 },
    { _T("Country Town Night (17/21)"), 0x07df700, 0x07df900 },
    { _T("Country Town Night (18/21)"), 0x07df900, 0x07dfb00 },
    { _T("Country Town Night (19/21)"), 0x07dfb00, 0x07dfd00 },
    { _T("Country Town Night (20/21)"), 0x07dfd00, 0x07dff00 },
    { _T("Country Town Night (21/21)"), 0x07dff00, 0x07e0080 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB2[] =
{
    { _T("Suburbs 2 (1/22)"), 0x07e9500, 0x07e9700 },
    { _T("Suburbs 2 (2/22)"), 0x07e9700, 0x07e9900 },
    { _T("Suburbs 2 (3/22)"), 0x07e9900, 0x07e9b00 },
    { _T("Suburbs 2 (4/22)"), 0x07e9b00, 0x07e9d00 },
    { _T("Suburbs 2 (5/22)"), 0x07e9d00, 0x07e9f00 },
    { _T("Suburbs 2 (6/22)"), 0x07e9f00, 0x07ea100 },
    { _T("Suburbs 2 (7/22)"), 0x07ea100, 0x07ea300 },
    { _T("Suburbs 2 (8/22)"), 0x07ea300, 0x07ea500 },
    { _T("Suburbs 2 (9/22)"), 0x07ea500, 0x07ea700 },
    { _T("Suburbs 2 (10/22)"), 0x07ea700, 0x07ea900 },
    { _T("Suburbs 2 (11/22)"), 0x07ea900, 0x07eab00 },
    { _T("Suburbs 2 (12/22)"), 0x07eab00, 0x07ead00 },
    { _T("Suburbs 2 (13/22)"), 0x07ead00, 0x07eaf00 },
    { _T("Suburbs 2 (14/22)"), 0x07eaf00, 0x07eb100 },
    { _T("Suburbs 2 (15/22)"), 0x07eb100, 0x07eb300 },
    { _T("Suburbs 2 (16/22)"), 0x07eb300, 0x07eb500 },
    { _T("Suburbs 2 (17/22)"), 0x07eb500, 0x07eb700 },
    { _T("Suburbs 2 (18/22)"), 0x07eb700, 0x07eb900 },
    { _T("Suburbs 2 (19/22)"), 0x07eb900, 0x07ebb00 },
    { _T("Suburbs 2 (20/22)"), 0x07ebb00, 0x07ebd00 },
    { _T("Suburbs 2 (21/22)"), 0x07ebd00, 0x07ebf00 },
    { _T("Suburbs 2 (22/22)"), 0x07ebf00, 0x07ec080 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB3[] =
{
    { _T("Suburbs 3 (1/22)"), 0x07ec100, 0x07ec300 },
    { _T("Suburbs 3 (2/22)"), 0x07ec300, 0x07ec500 },
    { _T("Suburbs 3 (3/22)"), 0x07ec500, 0x07ec700 },
    { _T("Suburbs 3 (4/22)"), 0x07ec700, 0x07ec900 },
    { _T("Suburbs 3 (5/22)"), 0x07ec900, 0x07ecb00 },
    { _T("Suburbs 3 (6/22)"), 0x07ecb00, 0x07ecd00 },
    { _T("Suburbs 3 (7/22)"), 0x07ecd00, 0x07ecf00 },
    { _T("Suburbs 3 (8/22)"), 0x07ecf00, 0x07ed100 },
    { _T("Suburbs 3 (9/22)"), 0x07ed100, 0x07ed300 },
    { _T("Suburbs 3 (10/22)"), 0x07ed300, 0x07ed500 },
    { _T("Suburbs 3 (11/22)"), 0x07ed500, 0x07ed700 },
    { _T("Suburbs 3 (12/22)"), 0x07ed700, 0x07ed900 },
    { _T("Suburbs 3 (13/22)"), 0x07ed900, 0x07edb00 },
    { _T("Suburbs 3 (14/22)"), 0x07edb00, 0x07edd00 },
    { _T("Suburbs 3 (15/22)"), 0x07edd00, 0x07edf00 },
    { _T("Suburbs 3 (16/22)"), 0x07edf00, 0x07ee100 },
    { _T("Suburbs 3 (17/22)"), 0x07ee100, 0x07ee300 },
    { _T("Suburbs 3 (18/22)"), 0x07ee300, 0x07ee500 },
    { _T("Suburbs 3 (19/22)"), 0x07ee500, 0x07ee700 },
    { _T("Suburbs 3 (20/22)"), 0x07ee700, 0x07ee900 },
    { _T("Suburbs 3 (21/22)"), 0x07ee900, 0x07eeb00 },
    { _T("Suburbs 3 (22/22)"), 0x07eeb00, 0x07eec80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW1[] =
{
    { _T("New 1 (1/10)"), 0x07cb200, 0x07cb400 },
    { _T("New 1 (2/10)"), 0x07cb400, 0x07cb600 },
    { _T("New 1 (3/10)"), 0x07cb600, 0x07cb800 },
    { _T("New 1 (4/10)"), 0x07cb800, 0x07cba00 },
    { _T("New 1 (5/10)"), 0x07cba00, 0x07cbc00 },
    { _T("New 1 (6/10)"), 0x07cbc00, 0x07cbe00 },
    { _T("New 1 (7/10)"), 0x07cbe00, 0x07cc000 },
    { _T("New 1 (8/10)"), 0x07cc000, 0x07cc200 },
    { _T("New 1 (9/10)"), 0x07cc200, 0x07cc400 },
    { _T("New 1 (10/10)"), 0x07cc400, 0x07cc480 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW2[] =
{
    { _T("New 2 (1/7)"), 0x07c9100, 0x07c9300 },
    { _T("New 2 (2/7)"), 0x07c9300, 0x07c9500 },
    { _T("New 2 (3/7)"), 0x07c9500, 0x07c9700 },
    { _T("New 2 (4/7)"), 0x07c9700, 0x07c9900 },
    { _T("New 2 (5/7)"), 0x07c9900, 0x07c9b00 },
    { _T("New 2 (6/7)"), 0x07c9b00, 0x07c9d00 },
    { _T("New 2 (7/7)"), 0x07c9d00, 0x07c9e80 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW3[] =
{
    { _T("New 3 (1/6)"), 0x07d2400, 0x07d2600 },
    { _T("New 3 (2/6)"), 0x07d2600, 0x07d2800 },
    { _T("New 3 (3/6)"), 0x07d2800, 0x07d2a00 },
    { _T("New 3 (4/6)"), 0x07d2a00, 0x07d2c00 },
    { _T("New 3 (5/6)"), 0x07d2c00, 0x07d2e00 },
    { _T("New 3 (6/6)"), 0x07d2e00, 0x07d3000 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW4[] =
{
    { _T("New 4 (1/5)"), 0x07d7800, 0x07d7a00 },
    { _T("New 4 (2/5)"), 0x07d7a00, 0x07d7c00 },
    { _T("New 4 (3/5)"), 0x07d7c00, 0x07d7e00 },
    { _T("New 4 (4/5)"), 0x07d7e00, 0x07d8000 },
    { _T("New 4 (5/5)"), 0x07d8000, 0x07d8200 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW5[] =
{
    { _T("New 5 (1/8)"), 0x07e1200, 0x07e1400 },
    { _T("New 5 (2/8)"), 0x07e1400, 0x07e1600 },
    { _T("New 5 (3/8)"), 0x07e1600, 0x07e1800 },
    { _T("New 5 (4/8)"), 0x07e1800, 0x07e1a00 },
    { _T("New 5 (5/8)"), 0x07e1a00, 0x07e1c00 },
    { _T("New 5 (6/8)"), 0x07e1c00, 0x07e1e00 },
    { _T("New 5 (7/8)"), 0x07e1e00, 0x07e2000 },
    { _T("New 5 (8/8)"), 0x07e2000, 0x07e2200 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW6[] =
{
    { _T("New 6 (1/8)"), 0x07e3300, 0x07e3500 },
    { _T("New 6 (2/8)"), 0x07e3500, 0x07e3700 },
    { _T("New 6 (3/8)"), 0x07e3700, 0x07e3900 },
    { _T("New 6 (4/8)"), 0x07e3900, 0x07e3b00 },
    { _T("New 6 (5/8)"), 0x07e3b00, 0x07e3d00 },
    { _T("New 6 (6/8)"), 0x07e3d00, 0x07e3f00 },
    { _T("New 6 (7/8)"), 0x07e3f00, 0x07e4100 },
    { _T("New 6 (8/8)"), 0x07e4100, 0x07e4200 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW7[] =
{
    { _T("New 7 (1/6)"), 0x07e4f00, 0x07e5100 },
    { _T("New 7 (2/6)"), 0x07e5100, 0x07e5300 },
    { _T("New 7 (3/6)"), 0x07e5300, 0x07e5500 },
    { _T("New 7 (4/6)"), 0x07e5500, 0x07e5700 },
    { _T("New 7 (5/6)"), 0x07e5700, 0x07e5900 },
    { _T("New 7 (6/6)"), 0x07e5900, 0x07e5a00 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW8[] =
{
    { _T("New 8 (1/3)"), 0x07e6200, 0x07e6400 },
    { _T("New 8 (2/3)"), 0x07e6400, 0x07e6600 },
    { _T("New 8 (2/3)"), 0x07e6600, 0x07e6800 },
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW9[] =
{
    { _T("New 9 (1/2)"), 0x07ef200, 0x07ef400 },
    { _T("New 9 (2/2)"), 0x07ef400, 0x07ef600 },
};

const sDescTreeNode JOJOS_A_50_STAGE_COLLECTION[] =
{
    { _T("A Lockup"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_STAGE_NODE_ALOCKUP) },
    { _T("A Health Room"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AHEALTHROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_AHEALTHROOM) },
    { _T("In A Airplane"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_STAGE_NODE_AIRPLANE) },
    { _T("Tigerbaum Garden"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_TGARDEN, ARRAYSIZE(JOJOS_A_STAGE_NODE_TGARDEN) },
    { _T("Hotel (Devil)"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELD, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELD) },
    { _T("Remains"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_REMAINS, ARRAYSIZE(JOJOS_A_STAGE_NODE_REMAINS) },
    { _T("Hotel (Justice)"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELJ) },
    { _T("Amusement Park"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AMPARK, ARRAYSIZE(JOJOS_A_STAGE_NODE_AMPARK) },
    { _T("Small Island"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLAND, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLAND) },
    { _T("Desert Noon"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNOON) },
    { _T("Ruins"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_RUIN, ARRAYSIZE(JOJOS_A_STAGE_NODE_RUIN) },
    { _T("Country Town Noon"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNOON) },
    { _T("Underground Water"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_UWATER, ARRAYSIZE(JOJOS_A_STAGE_NODE_UWATER) },
    { _T("Inside House"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_STAGE_NODE_INHOUSE) },
    { _T("Coffin Room"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_CROOM) },
    { _T("Clock Tower"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CLOCK, ARRAYSIZE(JOJOS_A_STAGE_NODE_CLOCK) },
    { _T("Suburbs"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB) },
    { _T("On The Bridge"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_OTBRIDGE, ARRAYSIZE(JOJOS_A_STAGE_NODE_OTBRIDGE) },
    { _T("Country Town Twilight"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTTWILIGHT) },
    { _T("Desert Morning"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DMORNING, ARRAYSIZE(JOJOS_A_STAGE_NODE_DMORNING) },
    { _T("Desert Twilight"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DTWILIGHT) },
    { _T("Desert Night"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNIGHT) },
    { _T("Small Island (Joseph)"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLANDJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLANDJ) },
    { _T("Country Town Night"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNIGHT) },
    { _T("Suburbs 2"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB2, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB2) },
    { _T("Suburbs 3"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB3, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB3) },
    { _T("New 1"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW1, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW1) },
    { _T("New 2"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW2, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW2) },
    { _T("New 3"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW3, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW3) },
    { _T("New 4"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW4, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW4) },
    { _T("New 5"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW5, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW5) },
    { _T("New 6"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW6, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW6) },
    { _T("New 7"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW7, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW7) },
    { _T("New 8"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW8, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW8) },
    { _T("New 9"), DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW9, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW9) },
};

#pragma endregion Stages

#pragma region Characters

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_A[] =
{
    { _T("Jotaro & Star Platinum A"), 0x0336400, 0x0336480, indexJojos51Jotaro, indexJojos51Character_Main },
    { _T("Star Breaker Super A"), 0x0336D80, 0x0336DC0, indexJojos51Jotaro, 1 },
    { _T("Star Platinum Charging Flash A"), 0x0336880, 0x0336900, indexJojos51Jotaro, 2 },
    { _T("Jotaro Vs/Super A"), 0x0410000, 0x0410080, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { _T("Jotaro Challenger A"), 0x0410080, 0x0410100, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { _T("Jotaro Select/Winning A (1/2)"), 0x0410100, 0x0410180, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Jotaro Select/Winning A (2/2)"), 0x0410180, 0x0410200, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Jotaro Burning A (1/2)"), 0x0336480, 0x0336500, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Burning A (2/2)"), 0x0336500, 0x0336580, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap A (1/2)"), 0x0336780, 0x0336800, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap A (2/2)"), 0x0336800, 0x0336880, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_B[] =
{
    { _T("Jotaro & Star Platinum B"), 0x034a900, 0x034a980, indexJojos51Jotaro, indexJojos51Character_Main },
    { _T("Star Breaker Super B"), 0x034B280, 0x034B2C0, indexJojos51Jotaro, 1  },
    { _T("Star Platinum Charging Flash B"), 0x034AD80, 0x034AE00, indexJojos51Jotaro, 2 },
    { _T("Jotaro Vs/Super B"), 0x0414e00, 0x0414e80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { _T("Jotaro Challenger B"), 0x0414e80, 0x0414f00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { _T("Jotaro Select/Winning B (1/2)"), 0x0414f00, 0x0414f80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Jotaro Select/Winning B (2/2)"), 0x0414f80, 0x0415000, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Jotaro Burning B (1/2)"), 0x034a980, 0x034aa00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Burning B (2/2)"), 0x034aa00, 0x034aa80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap B (1/2)"), 0x034ac80, 0x034ad00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap B (2/2)"), 0x034ad00, 0x034ad80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_C[] =
{
    { _T("Jotaro & Star Platinum C"), 0x035ee00, 0x035ee80, indexJojos51Jotaro, indexJojos51Character_Main },
    { _T("Star Breaker Super C"), 0x035F780, 0x035F7C0, indexJojos51Jotaro, 1  },
    { _T("Star Platinum Charging Flash C"), 0x035F280, 0x035F300, indexJojos51Jotaro, 2 },
    { _T("Jotaro Vs/Super C"), 0x0419c00, 0x0419c80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { _T("Jotaro Challenger C"), 0x0419c80, 0x0419d00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { _T("Jotaro Select/Winning C (1/2)"), 0x0419d00, 0x0419d80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Jotaro Select/Winning C (2/2)"), 0x0419d80, 0x0419e00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Jotaro Burning C (1/2)"), 0x035ee80, 0x035ef00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Burning C (2/2)"), 0x035ef00, 0x035ef80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap C (1/2)"), 0x035f180, 0x035f200, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap C (2/2)"), 0x035f200, 0x035f280, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_S[] =
{
    { _T("Jotaro & Star Platinum S"), 0x0373300, 0x0373380, indexJojos51Jotaro, indexJojos51Character_Main },
    { _T("Star Breaker Super S"), 0x0373C80, 0x0373CC0, indexJojos51Jotaro, 1  },
    { _T("Star Platinum Charging Flash S"), 0x0373780, 0x0373800, indexJojos51Jotaro, 2 },
    { _T("Jotaro Vs/Super S"), 0x041ea00, 0x041ea80, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { _T("Jotaro Challenger S"), 0x041ea80, 0x041eb00, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { _T("Jotaro Select/Winning S (1/2)"), 0x041eb00, 0x041eb80, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Jotaro Select/Winning S (2/2)"), 0x041eb80, 0x041ec00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Jotaro Burning S (1/2)"), 0x0373380, 0x0373400, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Burning S (2/2)"), 0x0373400, 0x0373480, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap S (1/2)"), 0x0373680, 0x0373700, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap S (2/2)"), 0x0373700, 0x0373780, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_Start[] =
{
    { _T("Jotaro & Star Platinum Start"), 0x0387800, 0x0387880, indexJojos51Jotaro, indexJojos51Character_Main },
    { _T("Star Breaker Super Start"), 0x0388180, 0x03881C0, indexJojos51Jotaro, 1  },
    { _T("Star Platinum Charging Flash Start"), 0x0387C80, 0x0387D00, indexJojos51Jotaro, 2 },
    { _T("Jotaro Vs/Super Start"), 0x0423800, 0x0423880, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { _T("Jotaro Challenger Start"), 0x0423880, 0x0423900, indexJojos51Jotaro, indexJojos51Character_Challenger },
    { _T("Jotaro Select/Winning Start (1/2)"), 0x0423900, 0x0423980, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Jotaro Select/Winning Start (2/2)"), 0x0423980, 0x0423a00, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Jotaro Burning Start (1/2)"), 0x0387880, 0x0387900, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Burning Start (2/2)"), 0x0387900, 0x0387980, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap Start (1/2)"), 0x0387b80, 0x0387c00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { _T("Jotaro Tech/Zap Start (2/2)"), 0x0387c00, 0x0387c80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_A[] =
{
    { _T("Kakyoin & Hierophant Green A"), 0x0337080, 0x0337100, indexJojos51Kakyo, indexJojos51Character_Main },
    { _T("Hierophant Changing Pal A (1/7)"), 0x0337900, 0x0337980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal A (2/7)"), 0x0337980, 0x0337a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal A (3/7)"), 0x0337a00, 0x0337a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal A (4/7)"), 0x0337a80, 0x0337b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal A (5/7)"), 0x0337b00, 0x0337b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal A (6/7)"), 0x0337b80, 0x0337c00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal A (7/7)"), 0x0337c00, 0x0337c80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Sparkles A"), 0x0337c80, 0x0337ca0, indexJojos51Kakyo, 0x8 },
    { _T("Raging Demon Trail A"), 0x0337800, 0x0337880, indexJojos51Kakyo, 0x09 },
    { _T("Kakyoin Remote Mode Afterimage A"), 0x0337500, 0x0337580, indexJojos51Kakyo, 0x0A },
    { _T("Kakyoin Vs/Super A"), 0x0410300, 0x0410380, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { _T("Kakyoin Challenger A"), 0x0410380, 0x0410400, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Kakyoin Select/Winning A (1/2)"), 0x0410400, 0x0410480, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Kakyoin Select/Winning A (2/2)"), 0x0410480, 0x0410500, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Kakyoin Select/Winning A"), 0x0410400, 0x0410500 },
#endif
    { _T("Kakyoin Burning A (1/2)"), 0x0337100, 0x0337180, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Burning A (2/2)"), 0x0337180, 0x0337200, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap A (1/2)"), 0x0337400, 0x0337480, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap A (2/2)"), 0x0337480, 0x0337500, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_B[] =
{
    { _T("Kakyoin & Hierophant Green B"), 0x034b580, 0x034b600, indexJojos51Kakyo, indexJojos51Character_Main },
    { _T("Hierophant Changing Pal B (1/7)"), 0x034be00, 0x034be80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal B (2/7)"), 0x034be80, 0x034bf00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal B (3/7)"), 0x034bf00, 0x034bf80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal B (4/7)"), 0x034bf80, 0x034c000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal B (5/7)"), 0x034c000, 0x034c080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal B (6/7)"), 0x034c080, 0x034c100, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal B (7/7)"), 0x034c100, 0x034c180, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Sparkles B"), 0x034c180, 0x034c1a0, indexJojos51Kakyo, 0x8 },
    { _T("Raging Demon Trail B"), 0x034bd00, 0x034bd80, indexJojos51Kakyo, 0x9 },
    { _T("Kakyoin Remote Mode Afterimage B"), 0x034BA00, 0x034BA80, indexJojos51Kakyo, 0xa },
    { _T("Kakyoin Vs/Super B"), 0x0415100, 0x0415180, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { _T("Kakyoin Challenger B"), 0x0415180, 0x0415200, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Kakyoin Select/Winning B (1/2)"), 0x0415200, 0x0415280, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Kakyoin Select/Winning B (2/2)"), 0x0415280, 0x0415300, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Kakyoin Select/Winning B"), 0x0415200, 0x0415300 },
#endif
    { _T("Kakyoin Burning B (1/2)"), 0x034b600, 0x034b680, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Burning B (2/2)"), 0x034b680, 0x034b700, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap B (1/2)"), 0x034b900, 0x034b980, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap B (2/2)"), 0x034b980, 0x034ba00, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_C[] =
{
    { _T("Kakyoin & Hierophant Green C"), 0x035fa80, 0x035fb00, indexJojos51Kakyo, indexJojos51Character_Main },
    { _T("Hierophant Changing Pal C (1/7)"), 0x0360300, 0x0360380, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal C (2/7)"), 0x0360380, 0x0360400, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal C (3/7)"), 0x0360400, 0x0360480, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal C (4/7)"), 0x0360480, 0x0360500, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal C (5/7)"), 0x0360500, 0x0360580, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal C (6/7)"), 0x0360580, 0x0360600, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal C (7/7)"), 0x0360600, 0x0360680, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Sparkles C"), 0x0360680, 0x03606a0, indexJojos51Kakyo, 0x8 },
    { _T("Raging Demon Trail C"), 0x0360200, 0x0360280, indexJojos51Kakyo, 0x9 },
    { _T("Kakyoin Remote Mode Afterimage C"), 0x035FF00, 0x035FF80, indexJojos51Kakyo, 0xa },
    { _T("Kakyoin Vs/Super C"), 0x0419f00, 0x0419f80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { _T("Kakyoin Challenger C"), 0x0419f80, 0x041a000, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Kakyoin Select/Winning C (1/2)"), 0x041a000, 0x041a080, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Kakyoin Select/Winning C (2/2)"), 0x041a080, 0x041a100, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Kakyoin Select/Winning C"), 0x041a000, 0x041a100 },
#endif
    { _T("Kakyoin Burning C (1/2)"), 0x035fb00, 0x035fb80, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Burning C (2/2)"), 0x035fb80, 0x035fc00, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap C (1/2)"), 0x035fe00, 0x035fe80, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap C (2/2)"), 0x035fe80, 0x035ff00, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_S[] =
{
    { _T("Kakyoin & Hierophant Green S"), 0x0373f80, 0x0374000, indexJojos51Kakyo, indexJojos51Character_Main },
    { _T("Hierophant Changing Pal S (1/7)"), 0x0374800, 0x0374880, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal S (2/7)"), 0x0374880, 0x0374900, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal S (3/7)"), 0x0374900, 0x0374980, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal S (4/7)"), 0x0374980, 0x0374a00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal S (5/7)"), 0x0374a00, 0x0374a80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal S (6/7)"), 0x0374a80, 0x0374b00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal S (7/7)"), 0x0374b00, 0x0374b80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Sparkles S"), 0x0374b80, 0x0374ba0, indexJojos51Kakyo, 0x8 },
    { _T("Raging Demon Trail S"), 0x0374700, 0x0374780, indexJojos51Kakyo, 0x9 },
    { _T("Kakyoin Remote Mode Afterimage S"), 0x0374400, 0x0374480, indexJojos51Kakyo, 0xa },
    { _T("Kakyoin Vs/Super S"), 0x041ed00, 0x041ed80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { _T("Kakyoin Challenger S"), 0x041ed80, 0x041ee00, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Kakyoin Select/Winning S (1/2)"), 0x041ee00, 0x041ee80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Kakyoin Select/Winning S (2/2)"), 0x041ee80, 0x041ef00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Kakyoin Select/Winning S"), 0x041ee00, 0x041ef00 },
#endif
    { _T("Kakyoin Burning S (1/2)"), 0x0374000, 0x0374080, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Burning S (2/2)"), 0x0374080, 0x0374100, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap S (1/2)"), 0x0374300, 0x0374380, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap S (2/2)"), 0x0374380, 0x0374400, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start[] =
{
    { _T("Kakyoin & Hierophant Green Start"), 0x0388480, 0x0388500, indexJojos51Kakyo, indexJojos51Character_Main },
    { _T("Hierophant Changing Pal Start (1/7)"), 0x0388d00, 0x0388d80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal Start (2/7)"), 0x0388d80, 0x0388e00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal Start (3/7)"), 0x0388e00, 0x0388e80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal Start (4/7)"), 0x0388e80, 0x0388f00, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal Start (5/7)"), 0x0388f00, 0x0388f80, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal Start (6/7)"), 0x0388f80, 0x0389000, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Changing Pal Start (7/7)"), 0x0389000, 0x0389080, indexJojos51Kakyo, 0x01, &pairHandledInCode },
    { _T("Hierophant Sparkles Start"), 0x0389080, 0x03890a0, indexJojos51Kakyo, 0x8 },
    { _T("Raging Demon Trail Start"), 0x0388c00, 0x0388c80, indexJojos51Kakyo, 0x9 },
    { _T("Kakyoin Remote Mode Afterimage Start"), 0x0388900, 0x0388980, indexJojos51Kakyo, 0xa },
    { _T("Kakyoin Vs/Super Start"), 0x0423b00, 0x0423b80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { _T("Kakyoin Challenger Start"), 0x0423b80, 0x0423c00, indexJojos51Kakyo, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Kakyoin Select/Winning Start (1/2)"), 0x0423c00, 0x0423c80, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Kakyoin Select/Winning Start (2/2)"), 0x0423c80, 0x0423d00, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Kakyoin Select/Winning Start"), 0x0423c00, 0x0423d00 },
#endif
    { _T("Kakyoin Burning Start (1/2)"), 0x0388500, 0x0388580, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Burning Start (2/2)"), 0x0388580, 0x0388600, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap Start (1/2)"), 0x0388800, 0x0388880, indexJojos51Kakyo, 0x0 },
    { _T("Kakyoin Tech/Zap Start (2/2)"), 0x0388880, 0x0388900, indexJojos51Kakyo, 0x0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_A[] =
{
    { _T("Avdol & Magician's Red A"), 0x0337d00, 0x0337d80, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { _T("Avdol Fire A"), 0x0338580, 0x03385c0, indexJojos51Avdol, 1, &pairHandledInCode },
    { _T("Avdol & MR Remote Activation A"), 0x0338180, 0x0338200, indexJojos51Avdol, 2 },
    { _T("Avdol Vs/Super A"), 0x0410600, 0x0410680, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { _T("Avdol Challenger A"), 0x0410680, 0x0410700, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Avdol Select / Winning A (1/2)"), 0x0410700, 0x0410780, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Avdol Select / Winning A (2/2)"), 0x0410780, 0x0410800, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Avdol Select / Winning A"), 0x0410700, 0x0410800 },
#endif
    { _T("Avdol Burning A (1/2)"), 0x0337d80, 0x0337e00, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { _T("Avdol Burning A (2/2)"), 0x0337e00, 0x0337e80, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { _T("Avdol Tech/Zap A (1/2)"), 0x0338080, 0x0338100, indexJojos51Avdol, indexJojos51Character_BurnZap },
    { _T("Avdol Tech/Zap A (2/2)"), 0x0338100, 0x0338180, indexJojos51Avdol, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_B[] =
{
    { _T("Avdol & Magician's Red B"), 0x034c200, 0x034c280, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { _T("Avdol Fire B"), 0x034ca80, 0x034cac0, indexJojos51Avdol, 1, &pairHandledInCode },
    { _T("Avdol & MR Remote Activation B"), 0x034c680, 0x034c700, indexJojos51Avdol, 2 },
    { _T("Avdol Vs / Super B"), 0x0415400, 0x0415480, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { _T("Avdol Challenger B"), 0x0415480, 0x0415500, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Avdol Select / Winning B (1/2)"), 0x0415500, 0x0415580, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Avdol Select / Winning B (2/2)"), 0x0415580, 0x0415600, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Avdol Select / Winning B"), 0x0415500, 0x0415600 },
#endif
    { _T("Avdol Burning B (1/2)"), 0x034c280, 0x034c300, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Burning B (2/2)"), 0x034c300, 0x034c380, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap B (1/2)"), 0x034c580, 0x034c600, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap B (2/2)"), 0x034c600, 0x034c680, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_C[] =
{
    { _T("Avdol & Magician's Red C"), 0x0360700, 0x0360780, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { _T("Avdol Fire C"), 0x0360f80, 0x0360fc0, indexJojos51Avdol, 1, &pairHandledInCode },
    { _T("Avdol & MR Remote Activation C"), 0x0360b80, 0x0360c00, indexJojos51Avdol, 2 },
    { _T("Avdol Vs / Super C"), 0x041a200, 0x041a280, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { _T("Avdol Challenger C"), 0x041a280, 0x041a300, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Avdol Select / Winning C (1/2)"), 0x041a300, 0x041a380, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Avdol Select / Winning C (2/2)"), 0x041a380, 0x041a400, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Avdol Select / Winning C"), 0x041a300, 0x041a400 },
#endif
    { _T("Avdol Burning C (1/2)"), 0x0360780, 0x0360800, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Burning C (2/2)"), 0x0360800, 0x0360880, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap C (1/2)"), 0x0360a80, 0x0360b00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap C (2/2)"), 0x0360b00, 0x0360b80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_S[] =
{
    { _T("Avdol & Magician's Red S"), 0x0374c00, 0x0374c80, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { _T("Avdol Fire S"), 0x0375480, 0x03754c0, indexJojos51Avdol, 1, &pairHandledInCode },
    { _T("Avdol & MR Remote Activation S"), 0x0375080, 0x0375100, indexJojos51Avdol, 2 },
    { _T("Avdol Vs / Super S"), 0x041f000, 0x041f080, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { _T("Avdol Challenger S"), 0x041f080, 0x041f100, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Avdol Select / Winning S (1/2)"), 0x041f100, 0x041f180, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Avdol Select / Winning S (2/2)"), 0x041f180, 0x041f200, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Avdol Select / Winning S"), 0x041f100, 0x041f200 },
#endif
    { _T("Avdol Burning S (1/2)"), 0x0374c80, 0x0374d00, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Burning S (2/2)"), 0x0374d00, 0x0374d80, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap S (1/2)"), 0x0374f80, 0x0375000, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap S (2/2)"), 0x0375000, 0x0375080, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_Start[] =
{
    { _T("Avdol & Magician's Red Start"), 0x0389100, 0x0389180, indexJojos51Avdol, indexJojos51Character_Main, &pairHandledInCode },
    { _T("Avdol Fire Start"), 0x0389980, 0x03899c0, indexJojos51Avdol, 1, &pairHandledInCode },
    { _T("Avdol & MR Remote Activation Start"), 0x0389580, 0x0389600, indexJojos51Avdol, 2 },
    { _T("Avdol Vs / Super Start"), 0x0423e00, 0x0423e80, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { _T("Avdol Challenger Start"), 0x0423e80, 0x0423f00, indexJojos51Avdol, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Avdol Select / Winning Start (1/2)"), 0x0423f00, 0x0423f80, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Avdol Select / Winning Start (2/2)"), 0x0423f80, 0x0424000, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Avdol Select / Winning Start"), 0x0423f00, 0x0424000 },
#endif
    { _T("Avdol Burning Start (1/2)"), 0x0389180, 0x0389200, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Burning Start (2/2)"), 0x0389200, 0x0389280, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap Start (1/2)"), 0x0389480, 0x0389500, indexJojos51Avdol, indexJojos51Character_BurnZap  },
    { _T("Avdol Tech/Zap Start (2/2)"), 0x0389500, 0x0389580, indexJojos51Avdol, indexJojos51Character_BurnZap  },
};

// Warning: Pol uses an older ordering system, so don't use the new enum.
const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_A[] =
{
    { _T("Polnareff & Silver Chariot A"), 0x0338980, 0x0338a00, indexJojos51Pol, 0x00 },
    { _T("Chariot's Changing Pal A (1/2)"), 0x0339280, 0x0339300, indexJojos51Pol, 0x00 },
    { _T("Chariot's Changing Pal A (2/2)"), 0x0339300, 0x0339380, indexJojos51Pol, 0x00 },
    { _T("Pol Remote Activation Flash A"), 0x0338e00, 0x0338e80, indexJojos51Pol, 0x01  },
    { _T("Polnareff Vs / Super A"), 0x0410900, 0x0410980, indexJojos51Pol, 0x02 },
    { _T("Polnareff Challenger A"), 0x0410980, 0x0410a00, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { _T("Polnareff Select / Winning A (1/2)"), 0x0410a00, 0x0410a80, indexJojos51Pol, 0x04, &pairHandledInCode },
    { _T("Polnareff Select / Winning A (2/2)"), 0x0410a80, 0x0410b00, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { _T("Polnareff Select / Winning A"), 0x0410a00, 0x0410b00 },
#endif
    { _T("Polnareff Burning A (1/2)"), 0x0338a00, 0x0338a80, indexJojos51Pol, 0x06 },
    { _T("Polnareff Burning A (2/2)"), 0x0338a80, 0x0338b00, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap A (1/2)"), 0x0338d00, 0x0338d80, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap A (2/2)"), 0x0338d80, 0x0338e00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_B[] =
{
    { _T("Polnareff & Silver Chariot B"), 0x034ce80, 0x034cf00, indexJojos51Pol },
    { _T("Chariot's Changing Pal B (1/2)"), 0x034d780, 0x034d800, indexJojos51Pol, 0x00 },
    { _T("Chariot's Changing Pal B (2/2)"), 0x034d800, 0x034d880, indexJojos51Pol, 0x00 },
    { _T("Pol Remote Activation Flash B"), 0x034d300, 0x034d380, indexJojos51Pol, 0x01 },
    { _T("Polnareff Vs / Super B"), 0x0415700, 0x0415780, indexJojos51Pol, 0x02 },
    { _T("Polnareff Challenger B"), 0x0415780, 0x0415800, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { _T("Polnareff Select / Winning B (1/2)"), 0x0415800, 0x0415880, indexJojos51Pol, 0x04, &pairHandledInCode },
    { _T("Polnareff Select / Winning B (2/2)"), 0x0415880, 0x0415900, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { _T("Polnareff Select / Winning B"), 0x0415800, 0x0415900 },
#endif
    { _T("Polnareff Burning B (1/2)"), 0x034cf00, 0x034cf80, indexJojos51Pol, 0x06 },
    { _T("Polnareff Burning B (2/2)"), 0x034cf80, 0x034d000, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap B (1/2)"), 0x034d200, 0x034d280, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap B (2/2)"), 0x034d280, 0x034d300, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_C[] =
{
    { _T("Polnareff & Silver Chariot C"), 0x0361380, 0x0361400, indexJojos51Pol },
    { _T("Chariot's Changing Pal C (1/2)"), 0x0361c80, 0x0361d00, indexJojos51Pol, 0x00 },
    { _T("Chariot's Changing Pal C (2/2)"), 0x0361d00, 0x0361d80, indexJojos51Pol, 0x00 },
    { _T("Pol Remote Activation Flash C"), 0x0361800, 0x0361880, indexJojos51Pol, 0x01 },
    { _T("Polnareff Vs / Super C"), 0x041a500, 0x041a580, indexJojos51Pol, 0x02 },
    { _T("Polnareff Challenger C"), 0x041a580, 0x041a600, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { _T("Polnareff Select / Winning C (1/2)"), 0x041a600, 0x041a680, indexJojos51Pol, 0x04, &pairHandledInCode },
    { _T("Polnareff Select / Winning C (2/2)"), 0x041a680, 0x041a700, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { _T("Polnareff Select / Winning C"), 0x041a600, 0x041a700 },
#endif
    { _T("Polnareff Burning C (1/2)"), 0x0361400, 0x0361480, indexJojos51Pol, 0x06 },
    { _T("Polnareff Burning C (2/2)"), 0x0361480, 0x0361500, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap C (1/2)"), 0x0361700, 0x0361780, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap C (2/2)"), 0x0361780, 0x0361800, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_S[] =
{
    { _T("Polnareff & Silver Chariot S"), 0x0375880, 0x0375900, indexJojos51Pol },
    { _T("Chariot's Changing Pal S (1/2)"), 0x0376180, 0x0376200, indexJojos51Pol, 0x00 },
    { _T("Chariot's Changing Pal S (2/2)"), 0x0376200, 0x0376280, indexJojos51Pol, 0x00 },
    { _T("Pol Remote Activation Flash S"), 0x0375d00, 0x0375d80, indexJojos51Pol, 0x01 },
    { _T("Polnareff Vs / Super S"), 0x041f300, 0x041f380, indexJojos51Pol, 0x02 },
    { _T("Polnareff Challenger S"), 0x041f380, 0x041f400, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { _T("Polnareff Select / Winning S (1/2)"), 0x041f400, 0x041f480, indexJojos51Pol, 0x04, &pairHandledInCode },
    { _T("Polnareff Select / Winning S (2/2)"), 0x041f480, 0x041f500, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { _T("Polnareff Select / Winning S"), 0x041f400, 0x041f500 },
#endif
    { _T("Polnareff Burning S (1/2)"), 0x0375900, 0x0375980, indexJojos51Pol, 0x06 },
    { _T("Polnareff Burning S (2/2)"), 0x0375980, 0x0375a00, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap S (1/2)"), 0x0375c00, 0x0375c80, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap S (2/2)"), 0x0375c80, 0x0375d00, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_Start[] =
{
    { _T("Polnareff & Silver Chariot Start"), 0x0389d80, 0x0389e00, indexJojos51Pol },
    { _T("Chariot's Changing Pal Start (1/2)"), 0x038a680, 0x038a700, indexJojos51Pol, 0x00 },
    { _T("Chariot's Changing Pal Start (2/2)"), 0x038a700, 0x038a780, indexJojos51Pol, 0x00 },
    { _T("Pol Remote Activation Flash Start"), 0x038a200, 0x038a280, indexJojos51Pol, 0x01 },
    { _T("Polnareff Vs / Super Start"), 0x0424100, 0x0424180, indexJojos51Pol, 0x02 },
    { _T("Polnareff Challenger Start"), 0x0424180, 0x0424200, indexJojos51Pol, 0x03 },
#ifndef USE_LARGE_PALETTES
    { _T("Polnareff Select / Winning Start (1/2)"), 0x0424200, 0x0424280, indexJojos51Pol, 0x04, &pairHandledInCode },
    { _T("Polnareff Select / Winning Start (2/2)"), 0x0424280, 0x0424300, indexJojos51Pol, 0x05, &pairHandledInCode },
#else
    { _T("Polnareff Select / Winning Start"), 0x0424200, 0x0424300 },
#endif
    { _T("Polnareff Burning Start (1/2)"), 0x0389e00, 0x0389e80, indexJojos51Pol, 0x06 },
    { _T("Polnareff Burning Start (2/2)"), 0x0389e80, 0x0389f00, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap Start (1/2)"), 0x038a100, 0x038a180, indexJojos51Pol, 0x06 },
    { _T("Polnareff Tech/Zap Start (2/2)"), 0x038a180, 0x038a200, indexJojos51Pol, 0x06 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Shared[]
{
    { _T("Flash Back Manga Panels (Joseph 236aa)"), 0x0335B80, 0x0335BC0, indexJojos51Joseph, 1 },
    { _T("Lisa Lisa & Caesar (Joseph 236aa)"), 0x0335C00, 0x0335C80, indexJojos51Joseph, 2 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_A[] =
{
    { _T("Joseph & Hermit Purple A"), 0x0339600, 0x0339680, indexJojos51Joseph },
    { _T("Joseph Tech/Zap/CC A (1/2)"), 0x0339980, 0x0339a00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Tech/Zap/CC A (2/2)"), 0x0339a00, 0x0339a80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Vs / Super A"), 0x0410c00, 0x0410c80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { _T("Joseph Challenger A"), 0x0410c80, 0x0410d00, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Joseph Select / Winning A (1/2)"), 0x0410d00, 0x0410d80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Joseph Select / Winning A (2/2)"), 0x0410d80, 0x0410e00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Joseph Select / Winning A"), 0x0410d00, 0x0410e00 },
#endif
    { _T("Joseph Burning A (1/2)"), 0x0339680, 0x0339700, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Burning A (2/2)"), 0x0339700, 0x0339780, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_B[] =
{
    { _T("Joseph & Hermit Purple B"), 0x034db00, 0x034db80, indexJojos51Joseph },
    { _T("Joseph Tech/Zap/CC B (1/2)"), 0x034de80, 0x034df00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Tech/Zap/CC B (2/2)"), 0x034df00, 0x034df80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Vs / Super B"), 0x0415a00, 0x0415a80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { _T("Joseph Challenger B"), 0x0415a80, 0x0415b00, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Joseph Select / Winning B (1/2)"), 0x0415b00, 0x0415b80, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Joseph Select / Winning B (2/2)"), 0x0415b80, 0x0415c00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Joseph Select / Winning B"), 0x0415b00, 0x0415c00 },
#endif
    { _T("Joseph Burning B (1/2)"), 0x034db80, 0x034dc00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Burning B (2/2)"), 0x034dc00, 0x034dc80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_C[] =
{
    { _T("Joseph & Hermit Purple C"), 0x0362000, 0x0362080, indexJojos51Joseph },
    { _T("Joseph Tech/Zap/CC C (1/2)"), 0x0362380, 0x0362400, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Tech/Zap/CC C (2/2)"), 0x0362400, 0x0362480, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Vs / Super C"), 0x041a800, 0x041a880, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { _T("Joseph Challenger C"), 0x041a880, 0x041a900, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Joseph Select / Winning C (1/2)"), 0x041a900, 0x041a980, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Joseph Select / Winning C (2/2)"), 0x041a980, 0x041aa00, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Joseph Select / Winning C"), 0x041a900, 0x041aa00 },
#endif
    { _T("Joseph Burning C (1/2)"), 0x0362080, 0x0362100, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Burning C (2/2)"), 0x0362100, 0x0362180, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_S[] =
{
    { _T("Joseph & Hermit Purple S"), 0x0376500, 0x0376580, indexJojos51Joseph },
    { _T("Joseph Tech/Zap/CC S (1/2)"), 0x0376880, 0x0376900, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Tech/Zap/CC S (2/2)"), 0x0376900, 0x0376980, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Vs / Super S"), 0x041f600, 0x041f680, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { _T("Joseph Challenger S"), 0x041f680, 0x041f700, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Joseph Select / Winning S (1/2)"), 0x041f700, 0x041f780, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Joseph Select / Winning S (2/2)"), 0x041f780, 0x041f800, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Joseph Select / Winning S"), 0x041f700, 0x041f800 },
#endif
    { _T("Joseph Burning S (1/2)"), 0x0376580, 0x0376600, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Burning S (2/2)"), 0x0376600, 0x0376680, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Start[] =
{
    { _T("Joseph & Hermit Purple Start"), 0x038aa00, 0x038aa80, indexJojos51Joseph },
    { _T("Joseph Tech/Zap/CC Start (1/2)"), 0x038ad80, 0x038ae00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Tech/Zap/CC Start (2/2)"), 0x038ae00, 0x038ae80, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Vs / Super Start"), 0x0424400, 0x0424480, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { _T("Joseph Challenger Start"), 0x0424480, 0x0424500, indexJojos51Joseph, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Joseph Select / Winning Start (1/2)"), 0x0424500, 0x0424580, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Joseph Select / Winning Start (2/2)"), 0x0424580, 0x0424600, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Joseph Select / Winning Start"), 0x0424500, 0x0424600 },
#endif
    { _T("Joseph Burning Start (1/2)"), 0x038aa80, 0x038ab00, indexJojos51Joseph, indexJojos51Character_BurnZap },
    { _T("Joseph Burning Start (2/2)"), 0x038ab00, 0x038ab80, indexJojos51Joseph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Shared[] =
{
    { _T("Iggy Raging Demon Static (A / B / C / S / Start)"), 0x030D300, 0x030D320, indexJojos51Iggy, 2 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_A[] =
{
    { _T("Iggy & The Fool A"), 0x033a280, 0x033a300, indexJojos51Iggy, indexJojos51Character_Main },
    { _T("Raging Demon Trail A (1/3)"), 0x033aa80, 0x033ab00, indexJojos51Iggy, 1 },
    { _T("Raging Demon Trail A (2/3)"), 0x033ab00, 0x033ab80, indexJojos51Iggy, 1 },
    { _T("Raging Demon Trail A (3/3)"), 0x033ab80, 0x033ac00, indexJojos51Iggy, 1 },
    { _T("Iggy Vs / Super A"), 0x0410f00, 0x0410f80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { _T("Iggy Challenger A"), 0x0410f80, 0x0411000, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Iggy Select / Winning A (1/2)"), 0x0411000, 0x0411080, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Iggy Select / Winning A (2/2)"), 0x0411080, 0x0411100, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Iggy Select / Winning A"), 0x0411000, 0x0411100 },
#endif
    { _T("Iggy Burning A (1/2)"), 0x033a300, 0x033a380, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Burning A (2/2)"), 0x033a380, 0x033a400, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap A (1/2)"), 0x033a600, 0x033a680, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap A (2/2)"), 0x033a680, 0x033a700, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_B[] =
{
    { _T("Iggy & The Fool B"), 0x034e780, 0x034e800, indexJojos51Iggy, indexJojos51Character_Main },
    { _T("Raging Demon Trail B (1/3)"), 0x034ef80, 0x034f000, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail B (2/3)"), 0x034f000, 0x034f080, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail B (3/3)"), 0x034f080, 0x034f100, indexJojos51Iggy, 1  },
    { _T("Iggy Vs / Super B"), 0x0415d00, 0x0415d80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { _T("Iggy Challenger B"), 0x0415d80, 0x0415e00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Iggy Select / Winning B (1/2)"), 0x0415e00, 0x0415e80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Iggy Select / Winning B (2/2)"), 0x0415e80, 0x0415f00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Iggy Select / Winning B"), 0x0415e00, 0x0415f00 },
#endif
    { _T("Iggy Burning B (1/2)"), 0x034e800, 0x034e880, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Burning B (2/2)"), 0x034e880, 0x034e900, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap B (1/2)"), 0x034eb00, 0x034eb80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap B (2/2)"), 0x034eb80, 0x034ec00, indexJojos51Iggy, indexJojos51Character_BurnZap},
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_C[] =
{
    { _T("Iggy & The Fool C"), 0x0362c80, 0x0362d00, indexJojos51Iggy, indexJojos51Character_Main },
    { _T("Raging Demon Trail C (1/3)"), 0x0363480, 0x0363500, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail C (2/3)"), 0x0363500, 0x0363580, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail C (3/3)"), 0x0363580, 0x0363600, indexJojos51Iggy, 1  },
    { _T("Iggy Vs / Super C"), 0x041ab00, 0x041ab80, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { _T("Iggy Challenger C"), 0x041ab80, 0x041ac00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Iggy Select / Winning C (1/2)"), 0x041ac00, 0x041ac80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Iggy Select / Winning C (2/2)"), 0x041ac80, 0x041ad00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Iggy Select / Winning C"), 0x041ac00, 0x041ad00 },
#endif
    { _T("Iggy Burning C (1/2)"), 0x0362d00, 0x0362d80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Burning C (2/2)"), 0x0362d80, 0x0362e00, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap C (1/2)"), 0x0363000, 0x0363080, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap C (2/2)"), 0x0363080, 0x0363100, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_S[] =
{
    { _T("Iggy & The Fool S"), 0x0377180, 0x0377200, indexJojos51Iggy, indexJojos51Character_Main },
    { _T("Raging Demon Trail S (1/3)"), 0x0377980, 0x0377a00, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail S (2/3)"), 0x0377a00, 0x0377a80, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail S (3/3)"), 0x0377a80, 0x0377b00, indexJojos51Iggy, 1  },
    { _T("Iggy Vs / Super S"), 0x041f900, 0x041f980, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { _T("Iggy Challenger S"), 0x041f980, 0x041fa00, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Iggy Select / Winning S (1/2)"), 0x041fa00, 0x041fa80, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Iggy Select / Winning S (2/2)"), 0x041fa80, 0x041fb00, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Iggy Select / Winning S"), 0x041fa00, 0x041fb00 },
#endif
    { _T("Iggy Burning S (1/2)"), 0x0377200, 0x0377280, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Burning S (2/2)"), 0x0377280, 0x0377300, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap S (1/2)"), 0x0377500, 0x0377580, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap S (2/2)"), 0x0377580, 0x0377600, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Start[] =
{
    { _T("Iggy & The Fool Start"), 0x038b680, 0x038b700, indexJojos51Iggy, indexJojos51Character_Main },
    { _T("Raging Demon Trail Start (1/3)"), 0x038be80, 0x038bf00, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail Start (2/3)"), 0x038bf00, 0x038bf80, indexJojos51Iggy, 1  },
    { _T("Raging Demon Trail Start (3/3)"), 0x038bf80, 0x038c000, indexJojos51Iggy, 1  },
    { _T("Iggy Vs / Super Start"), 0x0424700, 0x0424780, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { _T("Iggy Challenger Start"), 0x0424780, 0x0424800, indexJojos51Iggy, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Iggy Select / Winning Start (1/2)"), 0x0424800, 0x0424880, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Iggy Select / Winning Start (2/2)"), 0x0424880, 0x0424900, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Iggy Select / Winning Start"), 0x0424800, 0x0424900 },
#endif
    { _T("Iggy Burning Start (1/2)"), 0x038b700, 0x038b780, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Burning Start (2/2)"), 0x038b780, 0x038b800, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap Start (1/2)"), 0x038ba00, 0x038ba80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { _T("Iggy Tech/Zap Start (2/2)"), 0x038ba80, 0x038bb00, indexJojos51Iggy, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_A[] =
{
    { _T("Alessi & Sethan A"), 0x033af00, 0x033af80, indexJojos51Alessi },
    { _T("Alessi A Wave Attack"), 0x033b780, 0x033b7c0, indexJojos51Alessi, 1 },
    { _T("Alessi Tech/Zap/CC A (1/2)"), 0x033b280, 0x033b300, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Tech/Zap/CC A (2/2)"), 0x033b300, 0x033b380, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Winpose A"), 0x033b800, 0x033b880, indexJojos51Alessi, 2 },
    { _T("Alessi Vs / Super A"), 0x0411200, 0x0411280, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { _T("Alessi Challenger A"), 0x0411280, 0x0411300, indexJojos51Alessi, indexJojos51Character_Challenger },
    { _T("Alessi Select / Winning A (1/2)"), 0x0411300, 0x0411380, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Alessi Select / Winning A (2/2)"), 0x0411380, 0x0411400, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Alessi Burning A (1/2)"), 0x033af80, 0x033b000, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Burning A (2/2)"), 0x033b000, 0x033b080, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_B[] =
{
    { _T("Alessi & Sethan B"), 0x034f400, 0x034f480, indexJojos51Alessi },
    { _T("Alessi B Wave Attack"), 0x034fc80, 0x034fcc0, indexJojos51Alessi, 1 },
    { _T("Alessi Tech/Zap/CC B (1/2)"), 0x034f780, 0x034f800, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Tech/Zap/CC B (2/2)"), 0x034f800, 0x034f880, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Winpose B"), 0x034fd00, 0x034fd80, indexJojos51Alessi, 2 },
    { _T("Alessi Vs / Super B"), 0x0416000, 0x0416080, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { _T("Alessi Challenger B"), 0x0416080, 0x0416100, indexJojos51Alessi, indexJojos51Character_Challenger },
    { _T("Alessi Select / Winning B (1/2)"), 0x0416100, 0x0416180, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Alessi Select / Winning B (2/2)"), 0x0416180, 0x0416200, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Alessi Burning B (1/2)"), 0x034f480, 0x034f500, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Burning B (2/2)"), 0x034f500, 0x034f580, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_C[] =
{
    { _T("Alessi & Sethan C"), 0x0363900, 0x0363980, indexJojos51Alessi },
    { _T("Alessi C Wave Attack"), 0x0364180, 0x03641c0, indexJojos51Alessi, 1 },
    { _T("Alessi Tech/Zap/CC C (1/2)"), 0x0363c80, 0x0363d00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Tech/Zap/CC C (2/2)"), 0x0363d00, 0x0363d80, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Winpose C"), 0x0364200, 0x0364280, indexJojos51Alessi, 2 },
    { _T("Alessi Vs / Super C"), 0x041ae00, 0x041ae80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { _T("Alessi Challenger C"), 0x041ae80, 0x041af00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { _T("Alessi Select / Winning C (1/2)"), 0x041af00, 0x041af80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Alessi Select / Winning C (2/2)"), 0x041af80, 0x041b000, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Alessi Burning C (1/2)"), 0x0363980, 0x0363a00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Burning C (2/2)"), 0x0363a00, 0x0363a80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_S[] =
{
    { _T("Alessi & Sethan S"), 0x0377e00, 0x0377e80, indexJojos51Alessi },
    { _T("Alessi S Wave Attack"), 0x0378680, 0x03786c0, indexJojos51Alessi, 1 },
    { _T("Alessi Tech/Zap/CC S (1/2)"), 0x0378180, 0x0378200, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Tech/Zap/CC S (2/2)"), 0x0378200, 0x0378280, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Winpose S"), 0x0378700, 0x0378780, indexJojos51Alessi, 2 },
    { _T("Alessi Vs / Super S"), 0x041fc00, 0x041fc80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { _T("Alessi Challenger S"), 0x041fc80, 0x041fd00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { _T("Alessi Select / Winning S (1/2)"), 0x041fd00, 0x041fd80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Alessi Select / Winning S (2/2)"), 0x041fd80, 0x041fe00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Alessi Burning S (1/2)"), 0x0377e80, 0x0377f00, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Burning S (2/2)"), 0x0377f00, 0x0377f80, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_Start[] =
{
    { _T("Alessi & Sethan Start"), 0x038c300, 0x038c380, indexJojos51Alessi },
    { _T("Alessi Start Wave Attack"), 0x038cb80, 0x038cbc0, indexJojos51Alessi, 1 },
    { _T("Alessi Tech/Zap/CC Start (1/2)"), 0x038c680, 0x038c700, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Tech/Zap/CC Start (2/2)"), 0x038c700, 0x038c780, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Winpose Start"), 0x038cc00, 0x038cc80, indexJojos51Alessi, 2 },
    { _T("Alessi Vs / Super Start"), 0x0424a00, 0x0424a80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { _T("Alessi Challenger Start"), 0x0424a80, 0x0424b00, indexJojos51Alessi, indexJojos51Character_Challenger },
    { _T("Alessi Select / Winning Start (1/2)"), 0x0424b00, 0x0424b80, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Alessi Select / Winning Start (2/2)"), 0x0424b80, 0x0424c00, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Alessi Burning Start (1/2)"), 0x038c380, 0x038c400, indexJojos51Alessi, indexJojos51Character_BurnZap },
    { _T("Alessi Burning Start (2/2)"), 0x038c400, 0x038c480, indexJojos51Alessi, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_A[] =
{
    { _T("Chaka A"), 0x033bb80, 0x033bc00, indexJojos51Chaka },
    { _T("Chaka A Super Trail"), 0x033c400, 0x033c480, indexJojos51Chaka, 1 },
    { _T("Chaka Tech/Zap/CC/Counter A (1/2)"), 0x033bf00, 0x033bf80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Tech/Zap/CC/Counter A (2/2)"), 0x033bf80, 0x033c000, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Vs / Super A"), 0x0411500, 0x0411580, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { _T("Chaka Challenger A"), 0x0411580, 0x0411600, indexJojos51Chaka, indexJojos51Character_Challenger },
    { _T("Chaka Select / Winning A"), 0x0411600, 0x0411680, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { _T("Chaka Burning A (1/2)"), 0x033bc00, 0x033bc80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Burning A (2/2)"), 0x033bc80, 0x033bd00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_B[] =
{
    { _T("Chaka B"), 0x0350080, 0x0350100, indexJojos51Chaka },
    { _T("Chaka B Super Trail"), 0x0350900, 0x0350980, indexJojos51Chaka, 1 },
    { _T("Chaka Tech/Zap/CC/Counter B (1/2)"), 0x0350400, 0x0350480, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Tech/Zap/CC/Counter B (2/2)"), 0x0350480, 0x0350500, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Vs / Super B"), 0x0416300, 0x0416380, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { _T("Chaka Challenger B"), 0x0416380, 0x0416400, indexJojos51Chaka, indexJojos51Character_Challenger },
    { _T("Chaka Select / Winning B"), 0x0416400, 0x0416480, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { _T("Chaka Burning B (1/2)"), 0x0350100, 0x0350180, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Burning B (2/2)"), 0x0350180, 0x0350200, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_C[] =
{
    { _T("Chaka C"), 0x0364580, 0x0364600, indexJojos51Chaka },
    { _T("Chaka C Super Trail"), 0x0364e00, 0x0364e80, indexJojos51Chaka, 1 },
    { _T("Chaka Tech/Zap/CC/Counter C (1/2)"), 0x0364900, 0x0364980, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Tech/Zap/CC/Counter C (2/2)"), 0x0364980, 0x0364a00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Vs / Super C"), 0x041b100, 0x041b180, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { _T("Chaka Challenger C"), 0x041b180, 0x041b200, indexJojos51Chaka, indexJojos51Character_Challenger },
    { _T("Chaka Select / Winning C"), 0x041b200, 0x041b280, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { _T("Chaka Burning C (1/2)"), 0x0364600, 0x0364680, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Burning C (2/2)"), 0x0364680, 0x0364700, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_S[] =
{
    { _T("Chaka S"), 0x0378a80, 0x0378b00, indexJojos51Chaka },
    { _T("Chaka S Super Trail"), 0x0379300, 0x0379380, indexJojos51Chaka, 1 },
    { _T("Chaka Tech/Zap/CC/Counter S (1/2)"), 0x0378e00, 0x0378e80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Tech/Zap/CC/Counter S (2/2)"), 0x0378e80, 0x0378f00, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Vs / Super S"), 0x041ff00, 0x041ff80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { _T("Chaka Challenger S"), 0x041ff80, 0x0420000, indexJojos51Chaka, indexJojos51Character_Challenger },
    { _T("Chaka Select / Winning S"), 0x0420000, 0x0420080, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { _T("Chaka Burning S (1/2)"), 0x0378b00, 0x0378b80, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Burning S (2/2)"), 0x0378b80, 0x0378c00, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_Start[] =
{
    { _T("Chaka Start"), 0x038cf80, 0x038d000, indexJojos51Chaka },
    { _T("Chaka Start Super Trail"), 0x038d800, 0x038d880, indexJojos51Chaka, 1 },
    { _T("Chaka Tech/Zap/CC/Counter Start (1/2)"), 0x038d300, 0x038d380, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Tech/Zap/CC/Counter Start (2/2)"), 0x038d380, 0x038d400, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Vs / Super Start"), 0x0424d00, 0x0424d80, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { _T("Chaka Challenger Start"), 0x0424d80, 0x0424e00, indexJojos51Chaka, indexJojos51Character_Challenger },
    { _T("Chaka Select / Winning Start"), 0x0424e00, 0x0424e80, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { _T("Chaka Burning Start (1/2)"), 0x038d000, 0x038d080, indexJojos51Chaka, indexJojos51Character_BurnZap },
    { _T("Chaka Burning Start (2/2)"), 0x038d080, 0x038d100, indexJojos51Chaka, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_A[] =
{
    { _T("Devo & Ebony Devil A"), 0x033c800, 0x033c880, indexJojos51Devo },
    { _T("Ebony Devil Stand Off A"), 0x033cf00, 0x033cf80, indexJojos51Devo, 2 },
    { _T("Ebony Stand On Transition A"), 0x033ce00, 0x033ce80, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail A (1/3)"), 0x033d100, 0x033d180, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail A (2/3)"), 0x033d180, 0x033d200, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail A (3/3)"), 0x033d200, 0x033d280, indexJojos51Devo, 2 },
    { _T("Devo Intro Stuff A"), 0x033d400, 0x033d480, indexJojos51Devo, 1 },
    { _T("Devo Vs / Super A"), 0x0411800, 0x0411880, indexJojos51Devo, indexJojos51Character_VsSuper },
    { _T("Devo Challenger A"), 0x0411880, 0x0411900, indexJojos51Devo, indexJojos51Character_Challenger },
    { _T("Devo Select / Winning A (1/2)"), 0x0411900, 0x0411980, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Devo Select / Winning A (2/2)"), 0x0411980, 0x0411a00, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Devo & Ebony Devil Burning A (1/2)"), 0x033c880, 0x033c900, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo & Ebony Devil Burning A (2/2)"), 0x033c900, 0x033c980, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap A (1/2)"), 0x033cb80, 0x033cc00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap A (2/2)"), 0x033cc00, 0x033cc80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_B[] =
{
    { _T("Devo & Ebony Devil B"), 0x0350d00, 0x0350d80, indexJojos51Devo },
    { _T("Ebony Devil Stand Off B"), 0x0351400, 0x0351480, indexJojos51Devo, 2 },
    { _T("Ebony Stand On Transition B"), 0x0351300, 0x0351380, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail B (1/3)"), 0x0351600, 0x0351680, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail B (2/3)"), 0x0351680, 0x0351700, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail B (3/3)"), 0x0351700, 0x0351780, indexJojos51Devo, 2 },
    { _T("Devo Intro Stuff B"), 0x0351900, 0x0351980, indexJojos51Devo, 1 },
    { _T("Devo Vs / Super B"), 0x0416600, 0x0416680, indexJojos51Devo, indexJojos51Character_VsSuper },
    { _T("Devo Challenger B"), 0x0416680, 0x0416700, indexJojos51Devo, indexJojos51Character_Challenger },
    { _T("Devo Select / Winning B (1/2)"), 0x0416700, 0x0416780, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Devo Select / Winning B (2/2)"), 0x0416780, 0x0416800, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Devo & Ebony Devil Burning B (1/2)"), 0x0350d80, 0x0350e00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo & Ebony Devil Burning B (2/2)"), 0x0350e00, 0x0350e80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap B (1/2)"), 0x0351080, 0x0351100, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap B (2/2)"), 0x0351100, 0x0351180, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_C[] =
{
    { _T("Devo & Ebony Devil C"), 0x0365200, 0x0365280, indexJojos51Devo },
    { _T("Ebony Devil Stand Off C"), 0x0365900, 0x0365980, indexJojos51Devo, 2 },
    { _T("Ebony Stand On Transition C"), 0x0365800, 0x0365880, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail C (1/3)"), 0x0365b00, 0x0365b80, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail C (2/3)"), 0x0365b80, 0x0365c00, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail C (3/3)"), 0x0365c00, 0x0365c80, indexJojos51Devo, 2 },
    { _T("Devo Intro Stuff C"), 0x0365e00, 0x0365e80, indexJojos51Devo, 1 },
    { _T("Devo Vs / Super C"), 0x041b400, 0x041b480, indexJojos51Devo, indexJojos51Character_VsSuper },
    { _T("Devo Challenger C"), 0x041b480, 0x041b500, indexJojos51Devo, indexJojos51Character_Challenger },
    { _T("Devo Select / Winning C (1/2)"), 0x041b500, 0x041b580, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Devo Select / Winning C (2/2)"), 0x041b580, 0x041b600, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Devo & Ebony Devil Burning C (1/2)"), 0x0365280, 0x0365300, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo & Ebony Devil Burning C (2/2)"), 0x0365300, 0x0365380, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap C (1/2)"), 0x0365580, 0x0365600, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap C (2/2)"), 0x0365600, 0x0365680, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_S[] =
{
    { _T("Devo & Ebony Devil S"), 0x0379700, 0x0379780, indexJojos51Devo },
    { _T("Ebony Devil Stand Off S"), 0x0379e00, 0x0379e80, indexJojos51Devo, 2 },
    { _T("Ebony Stand On Transition S"), 0x0379d00, 0x0379d80, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail S (1/3)"), 0x037a000, 0x037a080, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail S (2/3)"), 0x037a080, 0x037a100, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail S (3/3)"), 0x037a100, 0x037a180, indexJojos51Devo, 2 },
    { _T("Devo Intro Stuff S"), 0x037a300, 0x037a380, indexJojos51Devo, 1 },
    { _T("Devo Vs / Super S"), 0x0420200, 0x0420280, indexJojos51Devo, indexJojos51Character_VsSuper },
    { _T("Devo Challenger S"), 0x0420280, 0x0420300, indexJojos51Devo, indexJojos51Character_Challenger },
    { _T("Devo Select / Winning S (1/2)"), 0x0420300, 0x0420380, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Devo Select / Winning S (2/2)"), 0x0420380, 0x0420400, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Devo & Ebony Devil Burning S (1/2)"), 0x0379780, 0x0379800, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo & Ebony Devil Burning S (2/2)"), 0x0379800, 0x0379880, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap S (1/2)"), 0x0379a80, 0x0379b00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap S (2/2)"), 0x0379b00, 0x0379b80, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start[] =
{
    { _T("Devo & Ebony Devil Start"), 0x038dc00, 0x038dc80, indexJojos51Devo },
    { _T("Ebony Devil Stand Off Start"), 0x038e300, 0x038e380, indexJojos51Devo, 2 },
    { _T("Ebony Stand On Transition Start"), 0x038e200, 0x038e280, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail Start (1/3)"), 0x038e500, 0x038e580, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail Start (2/3)"), 0x038e580, 0x038e600, indexJojos51Devo, 2 },
    { _T("Ebony Super Trail Start (3/3)"), 0x038e600, 0x038e680, indexJojos51Devo, 2 },
    { _T("Devo Intro Stuff Start"), 0x038e800, 0x038e880, indexJojos51Devo, 1 },
    { _T("Devo Vs / Super Start"), 0x0425000, 0x0425080, indexJojos51Devo, indexJojos51Character_VsSuper },
    { _T("Devo Challenger Start"), 0x0425080, 0x0425100, indexJojos51Devo, indexJojos51Character_Challenger },
    { _T("Devo Select / Winning Start (1/2)"), 0x0425100, 0x0425180, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Devo Select / Winning Start (2/2)"), 0x0425180, 0x0425200, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Devo & Ebony Devil Burning Start (1/2)"), 0x038dc80, 0x038dd00, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo & Ebony Devil Burning Start (2/2)"), 0x038dd00, 0x038dd80, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap Start (1/2)"), 0x038df80, 0x038e000, indexJojos51Devo, indexJojos51Character_BurnZap },
    { _T("Devo Tech/Zap Start (2/2)"), 0x038e000, 0x038e080, indexJojos51Devo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_A[] =
{
    { _T("Midler & High Priestess A"), 0x033e100, 0x033e180, indexJojos51Midler },
    { _T("Midler's Super Cars A (1/4)"), 0x033e980, 0x033ea00, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars A (2/4)"), 0x033ea00, 0x033ea80, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars A (3/4)"), 0x033ea80, 0x033eb00, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars A (4/4)"), 0x033eb00, 0x033eb80, indexJojos51Midler, 1 },
    { _T("Midler 236s A"), 0x033E880, 0x033E900, indexJojos51Midler, 0x08 },
    { _T("High Priestess' Beam/Jaws A"), 0x033eb80, 0x033ec00, indexJojos51Midler, 2 },
    { _T("Midler Vs / Super A"), 0x0411e00, 0x0411e80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { _T("Midler Challenger A"), 0x0411e80, 0x0411f00, indexJojos51Midler, indexJojos51Character_Challenger },
    { _T("Midler Select / Winning A (1/2)"), 0x0411f00, 0x0411f80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Midler Select / Winning A (2/2)"), 0x0411f80, 0x0412000, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Midler & Burning A (1/2)"), 0x033e180, 0x033e200, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler & Burning A (2/2)"), 0x033e200, 0x033e280, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap A (1/2)"), 0x033e480, 0x033e500, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap A (2/2)"), 0x033e500, 0x033e580, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_B[] =
{
    { _T("Midler & High Priestess B"), 0x0352600, 0x0352680, indexJojos51Midler },
    { _T("Midler's Super Cars B (1/4)"), 0x0352e80, 0x0352f00, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars B (2/4)"), 0x0352f00, 0x0352f80, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars B (3/4)"), 0x0352f80, 0x0353000, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars B (4/4)"), 0x0353000, 0x0353080, indexJojos51Midler, 1 },
    { _T("Midler 236s B"), 0x0352D80, 0x0352E00, indexJojos51Midler, 0x08 },
    { _T("High Priestess' Beam/Jaws B"), 0x0353080, 0x0353100, indexJojos51Midler, 2 },
    { _T("Midler Vs / Super B"), 0x0416c00, 0x0416c80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { _T("Midler Challenger B"), 0x0416c80, 0x0416d00, indexJojos51Midler, indexJojos51Character_Challenger },
    { _T("Midler Select / Winning B (1/2)"), 0x0416d00, 0x0416d80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Midler Select / Winning B (2/2)"), 0x0416d80, 0x0416e00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Midler & Burning B (1/2)"), 0x0352680, 0x0352700, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler & Burning B (2/2)"), 0x0352700, 0x0352780, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap B (1/2)"), 0x0352980, 0x0352a00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap B (2/2)"), 0x0352a00, 0x0352a80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_C[] =
{
    { _T("Midler & High Priestess C"), 0x0366b00, 0x0366b80, indexJojos51Midler },
    { _T("Midler's Super Cars C (1/4)"), 0x0367380, 0x0367400, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars C (2/4)"), 0x0367400, 0x0367480, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars C (3/4)"), 0x0367480, 0x0367500, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars C (4/4)"), 0x0367500, 0x0367580, indexJojos51Midler, 1 },
    { _T("Midler 236s C"), 0x0367280, 0x0367300, indexJojos51Midler, 0x08 },
    { _T("High Priestess' Beam/Jaws C"), 0x0367580, 0x0367600, indexJojos51Midler, 2 },
    { _T("Midler Vs / Super C"), 0x041ba00, 0x041ba80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { _T("Midler Challenger C"), 0x041ba80, 0x041bb00, indexJojos51Midler, indexJojos51Character_Challenger },
    { _T("Midler Select / Winning C (1/2)"), 0x041bb00, 0x041bb80, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Midler Select / Winning C (2/2)"), 0x041bb80, 0x041bc00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Midler & Burning C (1/2)"), 0x0366b80, 0x0366c00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler & Burning C (2/2)"), 0x0366c00, 0x0366c80, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap C (1/2)"), 0x0366e80, 0x0366f00, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap C (2/2)"), 0x0366f00, 0x0366f80, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_S[] =
{
    { _T("Midler & High Priestess S"), 0x037b000, 0x037b080, indexJojos51Midler },
    { _T("Midler's Super Cars S (1/4)"), 0x037b880, 0x037b900, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars S (2/4)"), 0x037b900, 0x037b980, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars S (3/4)"), 0x037b980, 0x037ba00, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars S (4/4)"), 0x037ba00, 0x037ba80, indexJojos51Midler, 1 },
    { _T("Midler 236s S"), 0x037B780, 0x037B800, indexJojos51Midler, 0x08 },
    { _T("High Priestess' Beam/Jaws S"), 0x037ba80, 0x037bb00, indexJojos51Midler, 2 },
    { _T("Midler Vs / Super S"), 0x0420800, 0x0420880, indexJojos51Midler, indexJojos51Character_VsSuper },
    { _T("Midler Challenger S"), 0x0420880, 0x0420900, indexJojos51Midler, indexJojos51Character_Challenger },
    { _T("Midler Select / Winning S (1/2)"), 0x0420900, 0x0420980, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Midler Select / Winning S (2/2)"), 0x0420980, 0x0420a00, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Midler & Burning S (1/2)"), 0x037b080, 0x037b100, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler & Burning S (2/2)"), 0x037b100, 0x037b180, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap S (1/2)"), 0x037b380, 0x037b400, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap S (2/2)"), 0x037b400, 0x037b480, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_Start[] =
{
    { _T("Midler & High Priestess Start"), 0x038f500, 0x038f580, indexJojos51Midler },
    { _T("Midler's Super Cars Start (1/4)"), 0x038fd80, 0x038fe00, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars Start (2/4)"), 0x038fe00, 0x038fe80, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars Start (3/4)"), 0x038fe80, 0x038ff00, indexJojos51Midler, 1 },
    { _T("Midler's Super Cars Start (4/4)"), 0x038ff00, 0x038ff80, indexJojos51Midler, 1 },
    { _T("Midler 236s Start"), 0x038FC80, 0x038FD00, indexJojos51Midler, 0x08 },
    { _T("High Priestess' Beam/Jaws Start"), 0x038ff80, 0x0390000, indexJojos51Midler, 2 },
    { _T("Midler Vs / Super Start"), 0x0425600, 0x0425680, indexJojos51Midler, indexJojos51Character_VsSuper },
    { _T("Midler Challenger Start"), 0x0425680, 0x0425700, indexJojos51Midler, indexJojos51Character_Challenger },
    { _T("Midler Select / Winning Start (1/2)"), 0x0425700, 0x0425780, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Midler Select / Winning Start (2/2)"), 0x0425780, 0x0425800, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Midler & Burning Start (1/2)"), 0x038f580, 0x038f600, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler & Burning Start (2/2)"), 0x038f600, 0x038f680, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap Start (1/2)"), 0x038f880, 0x038f900, indexJojos51Midler, indexJojos51Character_BurnZap },
    { _T("Midler Tech/Zap Start (2/2)"), 0x038f900, 0x038f980, indexJojos51Midler, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_A[] =
{
    { _T("DIO & The World A"), 0x033ed80, 0x033ee00, indexJojos51Dio },
    { _T("DIO Intro Stuff A"), 0x033f700, 0x033f780, indexJojos51Dio, 1 },
    { _T("The World's \"Bloody Summoning\" A"), 0x033f800, 0x033f880, indexJojos51Dio, 2 },
    { _T("DIO Tele Initial Flash A"), 0x033f500, 0x033f580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Teleport A"), 0x033f680, 0x033f700, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("Nukesaku A"), 0x033f780, 0x033f7c0, indexJojos51Dio, 8 },
    { _T("DIO Vs / Super A"), 0x0412100, 0x0412180, indexJojos51Dio, indexJojos51Character_VsSuper },
    { _T("DIO Challenger A"), 0x0412180, 0x0412200, indexJojos51Dio, indexJojos51Character_Challenger },
    { _T("DIO Select / Winning A (1/2)"), 0x0412200, 0x0412280, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("DIO Select / Winning A (2/2)"), 0x0412280, 0x0412300, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("DIO & The World Burning A (1/2)"), 0x033ee00, 0x033ee80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO & The World Burning A (2/2)"), 0x033ee80, 0x033ef00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap A (1/2)"), 0x033f100, 0x033f180, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap A (2/2)"), 0x033f180, 0x033f200, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_B[] =
{
    { _T("DIO & The World B"), 0x0353280, 0x0353300, indexJojos51Dio },
    { _T("DIO Intro Stuff B"), 0x0353c00, 0x0353c80, indexJojos51Dio, 1 },
    { _T("The World's \"Bloody Summoning\" B"), 0x0353d00, 0x0353d80, indexJojos51Dio, 2 },
    { _T("DIO Tele Initial Flash B"), 0x0353a00, 0x0353a80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Teleport B"), 0x0353b80, 0x0353c00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("Nukesaku B"), 0x0353c80, 0x0353cc0, indexJojos51Dio, 8 },
    { _T("DIO Vs / Super B"), 0x0416f00, 0x0416f80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { _T("DIO Challenger B"), 0x0416f80, 0x0417000, indexJojos51Dio, indexJojos51Character_Challenger },
    { _T("DIO Select / Winning B (1/2)"), 0x0417000, 0x0417080, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("DIO Select / Winning B (2/2)"), 0x0417080, 0x0417100, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("DIO & The World Burning B (1/2)"), 0x0353300, 0x0353380, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO & The World Burning B (2/2)"), 0x0353380, 0x0353400, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap B (1/2)"), 0x0353600, 0x0353680, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap B (2/2)"), 0x0353680, 0x0353700, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_C[] =
{
    { _T("DIO & The World C"), 0x0367780, 0x0367800, indexJojos51Dio },
    { _T("DIO Intro Stuff C"), 0x0368100, 0x0368180, indexJojos51Dio, 1 },
    { _T("The World's \"Bloody Summoning\" C"), 0x0368200, 0x0368280, indexJojos51Dio, 2 },
    { _T("DIO Tele Initial Flash C"), 0x0367f00, 0x0367f80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Teleport C"), 0x0368080, 0x0368100, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("Nukesaku C"), 0x0368180, 0x03681c0, indexJojos51Dio, 8 },
    { _T("DIO Vs / Super C"), 0x041bd00, 0x041bd80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { _T("DIO Challenger C"), 0x041bd80, 0x041be00, indexJojos51Dio, indexJojos51Character_Challenger },
    { _T("DIO Select / Winning C (1/2)"), 0x041be00, 0x041be80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("DIO Select / Winning C (2/2)"), 0x041be80, 0x041bf00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("DIO & The World Burning C (1/2)"), 0x0367800, 0x0367880, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO & The World Burning C (2/2)"), 0x0367880, 0x0367900, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap C (1/2)"), 0x0367b00, 0x0367b80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap C (2/2)"), 0x0367b80, 0x0367c00, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_S[] =
{
    { _T("DIO & The World S"), 0x037bc80, 0x037bd00, indexJojos51Dio },
    { _T("DIO Intro Stuff S"), 0x037c600, 0x037c680, indexJojos51Dio, 1 },
    { _T("The World's \"Bloody Summoning\" S"), 0x037c700, 0x037c780, indexJojos51Dio, 2 },
    { _T("DIO Tele Initial Flash S"), 0x037c400, 0x037c480, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Teleport S"), 0x037c580, 0x037c600, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("Nukesaku S"), 0x037c680, 0x037c6c0, indexJojos51Dio, 8 },
    { _T("DIO Vs / Super S"), 0x0420b00, 0x0420b80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { _T("DIO Challenger S"), 0x0420b80, 0x0420c00, indexJojos51Dio, indexJojos51Character_Challenger },
    { _T("DIO Select / Winning S (1/2)"), 0x0420c00, 0x0420c80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("DIO Select / Winning S (2/2)"), 0x0420c80, 0x0420d00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("DIO & The World Burning S (1/2)"), 0x037bd00, 0x037bd80, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO & The World Burning S (2/2)"), 0x037bd80, 0x037be00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap S (1/2)"), 0x037c000, 0x037c080, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap S (2/2)"), 0x037c080, 0x037c100, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_Start[] =
{
    { _T("DIO & The World Start"), 0x0390180, 0x0390200, indexJojos51Dio },
    { _T("DIO Intro Stuff Start"), 0x0390b00, 0x0390b80, indexJojos51Dio, 1 },
    { _T("The World's \"Bloody Summoning\" Start"), 0x0390c00, 0x0390c80, indexJojos51Dio, 2 },
    { _T("DIO Tele Initial Flash Start"), 0x0390900, 0x0390980, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Teleport Start"), 0x0390a80, 0x0390b00, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("Nukesaku Start"), 0x0390b80, 0x0390bc0, indexJojos51Dio, 8 },
    { _T("DIO Vs / Super Start"), 0x0425900, 0x0425980, indexJojos51Dio, indexJojos51Character_VsSuper },
    { _T("DIO Challenger Start"), 0x0425980, 0x0425a00, indexJojos51Dio, indexJojos51Character_Challenger },
    { _T("DIO Select / Winning Start (1/2)"), 0x0425a00, 0x0425a80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("DIO Select / Winning Start (2/2)"), 0x0425a80, 0x0425b00, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("DIO & The World Burning Start (1/2)"), 0x0390200, 0x0390280, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO & The World Burning Start (2/2)"), 0x0390280, 0x0390300, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap Start (1/2)"), 0x0390500, 0x0390580, indexJojos51Dio, indexJojos51Character_BurnZap },
    { _T("DIO Afterimages/Tech/Zap Start (2/2)"), 0x0390580, 0x0390600, indexJojos51Dio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_A[] =
{
    { _T("Shadow DIO A"), 0x0341300, 0x0341380, indexJojos51SDio },
    { _T("623aa trail A"), 0x0341b80, 0x0341c00, indexJojos51SDio, 1 },
    { _T("5s trail A"), 0x0341ac0, 0x0341ae0, indexJojos51SDio, 2 },
    { _T("41236s trail A"), 0x0341ec0, 0x0341ee0, indexJojos51SDio, 2},
    { _T("236aa trail A"), 0x0341b40, 0x0341b60, indexJojos51SDio, 2 },
    { _T("Wang Chan A"), 0x0341d00, 0x0341d40, indexJojos51SDio, 8 },
    { _T("Shadow DIO Vs / Super A"), 0x0412a00, 0x0412a80, indexJojos51SDio, indexJojos51Character_VsSuper },
    { _T("Shadow DIO Challenger A"), 0x0412a80, 0x0412b00, indexJojos51SDio, indexJojos51Character_Challenger },
    { _T("Shadow DIO Select / Winning A"), 0x0412b00, 0x0412b80, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { _T("Shadow DIO Burning A (1/2)"), 0x0341380, 0x0341400, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Burning A (2/2)"), 0x0341400, 0x0341480, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap A (1/2)"), 0x0341680, 0x0341700, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap A (2/2)"), 0x0341700, 0x0341780, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_B[] =
{
    { _T("Shadow DIO B"), 0x0355800, 0x0355880, indexJojos51SDio },
    { _T("623aa trail B"), 0x0356080, 0x0356100, indexJojos51SDio, 1 },
    { _T("5s trail B"), 0x0355fc0, 0x0356000, indexJojos51SDio, 2 },
    { _T("41236s trail B"), 0x03563c0, 0x0356400, indexJojos51SDio, 2 },
    { _T("236aa trail B"), 0x0356040, 0x0356060, indexJojos51SDio, 2 },
    { _T("Wang Chan B"), 0x0356200, 0x0356240, indexJojos51SDio, 8 },
    { _T("Shadow DIO Vs / Super B"), 0x0417800, 0x0417880, indexJojos51SDio, indexJojos51Character_VsSuper },
    { _T("Shadow DIO Challenger B"), 0x0417880, 0x0417900, indexJojos51SDio, indexJojos51Character_Challenger },
    { _T("Shadow DIO Select / Winning B"), 0x0417900, 0x0417980, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { _T("Shadow DIO Burning B (1/2)"), 0x0355880, 0x0355900, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Burning B (2/2)"), 0x0355900, 0x0355980, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap B (1/2)"), 0x0355b80, 0x0355c00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap B (2/2)"), 0x0355c00, 0x0355c80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_C[] =
{
    { _T("Shadow DIO C"), 0x0369d00, 0x0369d80, indexJojos51SDio },
    { _T("623aa trail C"), 0x036a580, 0x036a600, indexJojos51SDio, 1 },
    { _T("5s trail C"), 0x036a4c0, 0x036a500, indexJojos51SDio, 2 },
    { _T("41236s trail C"), 0x036a8c0, 0x036a900, indexJojos51SDio, 2 },
    { _T("236aa trail C"), 0x036a540, 0x036a560, indexJojos51SDio, 2 },
    { _T("Wang Chan C"), 0x036a700, 0x036a740, indexJojos51SDio, 8 },
    { _T("Shadow DIO Vs / Super C"), 0x041c600, 0x041c680, indexJojos51SDio, indexJojos51Character_VsSuper },
    { _T("Shadow DIO Challenger C"), 0x041c680, 0x041c700, indexJojos51SDio, indexJojos51Character_Challenger },
    { _T("Shadow DIO Select / Winning Screen C"), 0x041c700, 0x041c780, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { _T("Shadow DIO Burning C (1/2)"), 0x0369d80, 0x0369e00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Burning C (2/2)"), 0x0369e00, 0x0369e80, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap C (1/2)"), 0x036a080, 0x036a100, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap C (2/2)"), 0x036a100, 0x036a180, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_S[] =
{
    { _T("Shadow DIO S"), 0x037e200, 0x037e280, indexJojos51SDio },
    { _T("623aa trail S"), 0x037ea80, 0x037eb00, indexJojos51SDio, 1 },
    { _T("5s trail S"), 0x037e9c0, 0x037ea00, indexJojos51SDio, 2 },
    { _T("41236s trail S"),  0x037edc0, 0x037ee00, indexJojos51SDio, 2 },
    { _T("236aa trail S"), 0x037ea40, 0x037ea60, indexJojos51SDio, 2 },
    { _T("Wang Chan S"), 0x037ec00, 0x037ec40, indexJojos51SDio, 8 },
    { _T("Shadow DIO Vs / Super S"), 0x0421400, 0x0421480, indexJojos51SDio, indexJojos51Character_VsSuper },
    { _T("Shadow DIO Challenger S"), 0x0421480, 0x0421500, indexJojos51SDio, indexJojos51Character_Challenger },
    { _T("Shadow DIO Select / Winning Screen S"), 0x0421500, 0x0421580, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { _T("Shadow DIO Burning S (1/2)"), 0x037e280, 0x037e300, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Burning S (2/2)"), 0x037e300, 0x037e380, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap S (1/2)"), 0x037e580, 0x037e600, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap S (2/2)"), 0x037e600, 0x037e680, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_Start[] =
{
    { _T("Shadow DIO Start"), 0x0392700, 0x0392780, indexJojos51SDio },
    { _T("623aa trail Start"), 0x0392f80, 0x0393000, indexJojos51SDio, 1  },
    { _T("5s trail Start"), 0x0392ec0, 0x0392f00, indexJojos51SDio, 2 },
    { _T("41236s trail Start"),  0x03932c0, 0x0393300, indexJojos51SDio, 2 },
    { _T("236aa trail Start"), 0x0392f40, 0x0392f60, indexJojos51SDio, 2 },
    { _T("Wang Chan Start"), 0x0393100, 0x0393140, indexJojos51SDio, 8 },
    { _T("Shadow DIO Vs / Super Start"), 0x0426200, 0x0426280, indexJojos51SDio, indexJojos51Character_VsSuper },
    { _T("Shadow DIO Challenger Start"), 0x0426280, 0x0426300, indexJojos51SDio, indexJojos51Character_Challenger },
    { _T("Shadow DIO Select / Winning Screen Start"), 0x0426300, 0x0426380, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { _T("Shadow DIO Burning Start (1/2)"), 0x0392780, 0x0392800, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Burning Start (2/2)"), 0x0392800, 0x0392880, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap Start (1/2)"), 0x0392a80, 0x0392b00, indexJojos51SDio, indexJojos51Character_BurnZap },
    { _T("Shadow DIO Tech/Zap Start (2/2)"), 0x0392b00, 0x0392b80, indexJojos51SDio, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_A[] =
{
    { _T("Young Joseph A"), 0x0341f80, 0x0342000, indexJojos51YSeph },
    { _T("Young Joseph Vs / Super A"), 0x0412d00, 0x0412d80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { _T("Young Joseph Challenger A"), 0x0412d80, 0x0412e00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { _T("Young Joseph Select / Winning Screen A"), 0x0412e00, 0x0412e80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { _T("Hamon Cola Flash A"), 0x0342800, 0x0342880, indexJojos51YSeph, 1 },
    { _T("Young Joseph Burning A (1/2)"), 0x0342000, 0x0342080, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Burning A (2/2)"), 0x0342080, 0x0342100, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap A (1/2)"), 0x0342300, 0x0342380, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap A (2/2)"), 0x0342380, 0x0342400, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_B[] =
{
    { _T("Young Joseph B"), 0x0356480, 0x0356500, indexJojos51YSeph },
    { _T("Young Joseph Vs / Super B"), 0x0417b00, 0x0417b80, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { _T("Young Joseph Challenger B"), 0x0417b80, 0x0417c00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { _T("Young Joseph Select / Winning B"), 0x0417c00, 0x0417c80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { _T("Hamon Cola Flash B"), 0x0356D00, 0x0356D80, indexJojos51YSeph, 1 },
    { _T("Young Joseph Burning B (1/2)"), 0x0356500, 0x0356580, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Burning B (2/2)"), 0x0356580, 0x0356600, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap B (1/2)"), 0x0356800, 0x0356880, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap B (2/2)"), 0x0356880, 0x0356900, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_C[] =
{
    { _T("Young Joseph C"), 0x036a980, 0x036aa00, indexJojos51YSeph },
    { _T("Young Joseph Vs / Super C"), 0x041c900, 0x041c980, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { _T("Young Joseph Challenger C"), 0x041c980, 0x041ca00, indexJojos51YSeph, indexJojos51Character_Challenger },
    { _T("Young Joseph Select / Winning C"), 0x041ca00, 0x041ca80, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { _T("Hamon Cola Flash C"), 0x036B200, 0x036B280, indexJojos51YSeph, 1 },
    { _T("Young Joseph Burning C (1/2)"), 0x036aa00, 0x036aa80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Burning C (2/2)"), 0x036aa80, 0x036ab00, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap C (1/2)"), 0x036ad00, 0x036ad80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap C (2/2)"), 0x036ad80, 0x036ae00, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_S[] =
{
    { _T("Young Joseph S"), 0x037ee80, 0x037ef00, indexJojos51YSeph },
    { _T("Young Joseph Vs / Super S"), 0x0421700, 0x0421780, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { _T("Young Joseph Challenger S"), 0x0421780, 0x0421800, indexJojos51YSeph, indexJojos51Character_Challenger },
    { _T("Young Joseph Select / Winning Screen S"), 0x0421800, 0x0421880, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { _T("Hamon Cola Flash S"), 0x037F700, 0x037F780, indexJojos51YSeph, 1 },
    { _T("Young Joseph Burning S (1/2)"), 0x037ef00, 0x037ef80, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Burning S (2/2)"), 0x037ef80, 0x037f000, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap S (1/2)"), 0x037f200, 0x037f280, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap S (2/2)"), 0x037f280, 0x037f300, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_Start[] =
{
    { _T("Young Joseph Start"), 0x0393380, 0x0393400, indexJojos51YSeph },
    { _T("Young Joseph Vs / Super Start"), 0x0426500, 0x0426580, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { _T("Young Joseph Challenger Start"), 0x0426580, 0x0426600, indexJojos51YSeph, indexJojos51Character_Challenger },
    { _T("Young Joseph Select / Winning Screen Start"), 0x0426600, 0x0426680, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { _T("Hamon Cola Flash Start"), 0x0393C00, 0x0393C80, indexJojos51YSeph, 1 },
    { _T("Young Joseph Burning Start (1/2)"), 0x0393400, 0x0393480, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Burning Start (2/2)"), 0x0393480, 0x0393500, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap Start (1/2)"), 0x0393700, 0x0393780, indexJojos51YSeph, indexJojos51Character_BurnZap },
    { _T("Young Joseph Tech/Zap Start (2/2)"), 0x0393780, 0x0393800, indexJojos51YSeph, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_A[] =
{
    { _T("Hol Horse A"), 0x0342c00, 0x0342c80, indexJojos51Hol, 0x00 },
    { _T("Hol's Super Bullets A"), 0x0343556, 0x0343560 },
    { _T("Hol's Slow-mo Bullet Trail 1 A"), 0x03435d6, 0x03435e0 },
    { _T("Hol's Slow-mo Bullet Trail 2 A"), 0x0343656, 0x0343660 },
    { _T("Hol's Intro/Winpose Stuff+Boingo A"), 0x0343480, 0x0343500, indexJojos51Hol, 0x03 },
    { _T("Hol Horse Vs / Super A"), 0x0413000, 0x0413080, indexJojos51Hol, 0x04 },
    { _T("Hol Horse Challenger A"), 0x0413080, 0x0413100, indexJojos51Hol, 0x05 },
    { _T("Hol Horse Select / Winning A"), 0x0413100, 0x0413180, indexJojos51Hol, 0x06 },
    { _T("Hol Horse Burning A (1/2)"), 0x0342c80, 0x0342d00, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Burning A (2/2)"), 0x0342d00, 0x0342d80, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap A (1/2)"), 0x0342f80, 0x0343000, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap A (2/2)"), 0x0343000, 0x0343080, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_B[] =
{
    { _T("Hol Horse B"), 0x0357100, 0x0357180, indexJojos51Hol, 0x00 },
    { _T("Hol's Super Bullets B"), 0x0357a56, 0x0357a60 },
    { _T("Hol's Slow-mo Bullet Trail 1 B"), 0x0357ad6, 0x0357ae0 },
    { _T("Hol's Slow-mo Bullet Trail 2 B"), 0x0357b56, 0x0357b60 },
    { _T("Hol's Intro/Winpose Stuff+Boingo B"), 0x0357980, 0x0357a00, indexJojos51Hol, 0x03 },
    { _T("Hol Horse Vs / Super B"), 0x0417e00, 0x0417e80, indexJojos51Hol, 0x04 },
    { _T("Hol Horse Challenger B"), 0x0417e80, 0x0417f00, indexJojos51Hol, 0x05 },
    { _T("Hol Horse Select / Winning B"), 0x0417f00, 0x0417f80, indexJojos51Hol, 0x06 },
    { _T("Hol Horse Burning B (1/2)"), 0x0357180, 0x0357200, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Burning B (2/2)"), 0x0357200, 0x0357280, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap B (1/2)"), 0x0357480, 0x0357500, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap B (2/2)"), 0x0357500, 0x0357580, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_C[] =
{
    { _T("Hol Horse C"), 0x036b600, 0x036b680, indexJojos51Hol, 0x00 },
    { _T("Hol's Super Bullets C"), 0x036bf56, 0x036bf60 },
    { _T("Hol's Slow-mo Bullet Trail 1 C"), 0x036bfd6, 0x036bfe0 },
    { _T("Hol's Slow-mo Bullet Trail 2 C"), 0x036c056, 0x036c060 },
    { _T("Hol's Intro/Winpose Stuff+Boingo C"), 0x036be80, 0x036bf00, indexJojos51Hol, 0x03 },
    { _T("Hol Horse Vs / Super C"), 0x041cc00, 0x041cc80, indexJojos51Hol, 0x04 },
    { _T("Hol Horse Challenger C"), 0x041cc80, 0x041cd00, indexJojos51Hol, 0x05 },
    { _T("Hol Horse Select / Winning C"), 0x041cd00, 0x041cd80, indexJojos51Hol, 0x06 },
    { _T("Hol Horse Burning C (1/2)"), 0x036b680, 0x036b700, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Burning C (2/2)"), 0x036b700, 0x036b780, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap C (1/2)"), 0x036b980, 0x036ba00, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap C (2/2)"), 0x036ba00, 0x036ba80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_S[] =
{
    { _T("Hol Horse S"), 0x037fb00, 0x037fb80, indexJojos51Hol, 0x00 },
    { _T("Hol's Super Bullets S"), 0x0380456, 0x0380460 },
    { _T("Hol's Slow-mo Bullet Trail 1 S"), 0x03804d6, 0x03804e0 },
    { _T("Hol's Slow-mo Bullet Trail 2 S"), 0x0380556, 0x0380560 },
    { _T("Hol's Intro/Winpose Stuff+Boingo S"), 0x0380380, 0x0380400, indexJojos51Hol, 0x03 },
    { _T("Hol Horse Vs / Super S"), 0x0421a00, 0x0421a80, indexJojos51Hol, 0x04 },
    { _T("Hol Horse Challenger S"), 0x0421a80, 0x0421b00, indexJojos51Hol, 0x05 },
    { _T("Hol Horse Select / Winning S"), 0x0421b00, 0x0421b80, indexJojos51Hol, 0x06 },
    { _T("Hol Horse Burning S (1/2)"), 0x037fb80, 0x037fc00, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Burning S (2/2)"), 0x037fc00, 0x037fc80, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap S (1/2)"), 0x037fe80, 0x037ff00, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap S (2/2)"), 0x037ff00, 0x037ff80, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_Start[] =
{
    { _T("Hol Horse Start"), 0x0394000, 0x0394080, indexJojos51Hol, 0x00 },
    { _T("Hol's Super Bullets Start"), 0x0394956, 0x0394960 },
    { _T("Hol's Slow-mo Bullet Trail 1 Start"), 0x03949d6, 0x03949e0 },
    { _T("Hol's Slow-mo Bullet Trail 2 Start"), 0x0394a56, 0x0394a60 },
    { _T("Hol's Intro/Winpose Stuff+Boingo Start"), 0x0394880, 0x0394900, indexJojos51Hol, 0x03 },
    { _T("Hol Horse Vs / Super Start"), 0x0426800, 0x0426880, indexJojos51Hol, 0x04 },
    { _T("Hol Horse Challenger Start"), 0x0426880, 0x0426900, indexJojos51Hol, 0x05 },
    { _T("Hol Horse Select / Winning Screen Start"), 0x0426900, 0x0426980, indexJojos51Hol, 0x06 },
    { _T("Hol Horse Burning Start (1/2)"), 0x0394080, 0x0394100, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Burning Start (2/2)"), 0x0394100, 0x0394180, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap Start (1/2)"), 0x0394380, 0x0394400, indexJojos51Hol, 0x07 },
    { _T("Hol Horse Tech/Zap Start (2/2)"), 0x0394400, 0x0394480, indexJojos51Hol, 0x07 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_A[] =
{
    { _T("Vanilla Ice & Cream A"), 0x0343880, 0x0343900, indexJojos51VIce },
    { _T("Vanilla Ice Vs / Super A"), 0x0413300, 0x0413380, indexJojos51VIce, indexJojos51Character_VsSuper },
    { _T("Vanilla Ice Challenger A"), 0x0413380, 0x0413400, indexJojos51VIce, indexJojos51Character_Challenger },
    { _T("Vanilla Ice Select / Winning A (1/2)"), 0x0413400, 0x0413480, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Vanilla Ice Select / Winning A (2/2)"), 0x0413480, 0x0413500, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Vanilla Ice Burning A (1/2)"), 0x0343900, 0x0343980, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Burning A (2/2)"), 0x0343980, 0x0343a00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech A (1/2)"), 0x0343c00, 0x0343c80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech A (2/2)"), 0x0343c80, 0x0343d00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_B[] =
{
    { _T("Vanilla Ice & Cream B"), 0x0357d80, 0x0357e00, indexJojos51VIce },
    { _T("Vanilla Ice Vs / Super B"), 0x0418100, 0x0418180, indexJojos51VIce, indexJojos51Character_VsSuper },
    { _T("Vanilla Ice Challenger B"), 0x0418180, 0x0418200, indexJojos51VIce, indexJojos51Character_Challenger },
    { _T("Vanilla Ice Select / Winning B (1/2)"), 0x0418200, 0x0418280, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Vanilla Ice Select / Winning B (2/2)"), 0x0418280, 0x0418300, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Vanilla Ice Burning B (1/2)"), 0x0357e00, 0x0357e80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Burning B (2/2)"), 0x0357e80, 0x0357f00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech B (1/2)"), 0x0358100, 0x0358180, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech B (2/2)"), 0x0358180, 0x0358200, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_C[] =
{
    { _T("Vanilla Ice & Cream C"), 0x036c280, 0x036c300, indexJojos51VIce },
    { _T("Vanilla Ice Vs / Super C"), 0x041cf00, 0x041cf80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { _T("Vanilla Ice Challenger C"), 0x041cf80, 0x041d000, indexJojos51VIce, indexJojos51Character_Challenger },
    { _T("Vanilla Ice Select / Winning C (1/2)"), 0x041d000, 0x041d080, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Vanilla Ice Select / Winning C (2/2)"), 0x041d080, 0x041d100, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Vanilla Ice Burning C (1/2)"), 0x036c300, 0x036c380, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Burning C (2/2)"), 0x036c380, 0x036c400, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech C (1/2)"), 0x036c600, 0x036c680, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech C (2/2)"), 0x036c680, 0x036c700, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_S[] =
{
    { _T("Vanilla Ice & Cream S"), 0x0380780, 0x0380800, indexJojos51VIce },
    { _T("Vanilla Ice Vs / Super S"), 0x0421d00, 0x0421d80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { _T("Vanilla Ice Challenger S"), 0x0421d80, 0x0421e00, indexJojos51VIce, indexJojos51Character_Challenger },
    { _T("Vanilla Ice Select / Winning S (1/2)"), 0x0421e00, 0x0421e80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Vanilla Ice Select / Winning S (2/2)"), 0x0421e80, 0x0421f00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Vanilla Ice Burning S (1/2)"), 0x0380800, 0x0380880, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Burning S (2/2)"), 0x0380880, 0x0380900, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech S (1/2)"), 0x0380b00, 0x0380b80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech S (2/2)"), 0x0380b80, 0x0380c00, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_Start[] =
{
    { _T("Vanilla Ice & Cream Start"), 0x0394c80, 0x0394d00, indexJojos51VIce },
    { _T("Vanilla Ice Vs / Super Start"), 0x0426b00, 0x0426b80, indexJojos51VIce, indexJojos51Character_VsSuper },
    { _T("Vanilla Ice Challenger Start"), 0x0426b80, 0x0426c00, indexJojos51VIce, indexJojos51Character_Challenger },
    { _T("Vanilla Ice Select / Winning Start (1/2)"), 0x0426c00, 0x0426c80, indexJojos51VIce, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Vanilla Ice Select / Winning Start (2/2)"), 0x0426c80, 0x0426d00, indexJojos51VIce, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Vanilla Ice Burning Start (1/2)"), 0x0394d00, 0x0394d80, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Burning Start (2/2)"), 0x0394d80, 0x0394e00, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech Start (1/2)"), 0x0395000, 0x0395080, indexJojos51VIce, indexJojos51Character_BurnZap },
    { _T("Vanilla Ice Tech Start (2/2)"), 0x0395080, 0x0395100, indexJojos51VIce, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_A[] =
{
    { _T("New Kakyoin & Hierophant A"), 0x0344500, 0x0344580, indexJojos51NewKakyo },
    { _T("New Hierophant Changing Pal A (1/7)"), 0x0344d80, 0x0344e00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal A (2/7)"), 0x0344e00, 0x0344e80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal A (3/7)"), 0x0344e80, 0x0344f00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal A (4/7)"), 0x0344f00, 0x0344f80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal A (5/7)"), 0x0344f80, 0x0345000, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal A (6/7)"), 0x0345000, 0x0345080, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal A (7/7)"), 0x0345080, 0x0345100, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Sparkles A"), 0x0345100, 0x0345120, indexJojos51NewKakyo, 0x8 },
    { _T("Raging Demon Trail A"), 0x0344ca0, 0x0344d20, indexJojos51NewKakyo, 0x9 },
    { _T("New Kakyoin Remote Mode Afterimage A"), 0x0344980, 0x0344A00, indexJojos51NewKakyo, 0xa },

    { _T("New Kakyoin Vs / Super A"), 0x0413600, 0x0413680, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { _T("New Kakyoin Challenger A"), 0x0413680, 0x0413700, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { _T("New Kakyoin Select / Winning A"), 0x0413700, 0x0413780, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("New Hierophant Select / Winning A"), 0x0413780, 0x0413800, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { _T("New Kakyoin Burning A (1/2)"), 0x0344580, 0x0344600, indexJojos51NewKakyo },
    { _T("New Kakyoin Burning A (2/2)"), 0x0344600, 0x0344680, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap A (1/2)"), 0x0344880, 0x0344900, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap A (2/2)"), 0x0344900, 0x0344980, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_B[] =
{
    { _T("New Kakyoin & Hierophant B"), 0x0358a00, 0x0358a80, indexJojos51NewKakyo },
    { _T("New Hierophant Changing Pal B (1/7)"), 0x0359280, 0x0359300, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal B (2/7)"), 0x0359300, 0x0359380, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal B (3/7)"), 0x0359380, 0x0359400, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal B (4/7)"), 0x0359400, 0x0359480, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal B (5/7)"), 0x0359480, 0x0359500, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal B (6/7)"), 0x0359500, 0x0359580, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal B (7/7)"), 0x0359580, 0x0359600, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Sparkles B"), 0x0359600, 0x0359620, indexJojos51NewKakyo, 0x8 },
    { _T("Raging Demon Trail B"), 0x03591a0, 0x0359220, indexJojos51NewKakyo, 0x9 },
    { _T("New Kakyoin Remote Mode Afterimage B"), 0x0358E80, 0x0358F00, indexJojos51NewKakyo, 0xa },

    { _T("New Kakyoin Vs / Super B"), 0x0418400, 0x0418480, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { _T("New Kakyoin Challenger B"), 0x0418480, 0x0418500, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { _T("New Kakyoin Select / Winning B"), 0x0418500, 0x0418580, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("New Hierophant Select / Winning B"), 0x0418580, 0x0418600, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { _T("New Kakyoin Burning B (1/2)"), 0x0358a80, 0x0358b00, indexJojos51NewKakyo },
    { _T("New Kakyoin Burning B (2/2)"), 0x0358b00, 0x0358b80, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap B (1/2)"), 0x0358d80, 0x0358e00, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap B (2/2)"), 0x0358e00, 0x0358e80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_C[] =
{
    { _T("New Kakyoin & Hierophant C"), 0x036cf00, 0x036cf80, indexJojos51NewKakyo },
    { _T("New Hierophant Changing Pal C (1/7)"), 0x036d780, 0x036d800, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal C (2/7)"), 0x036d800, 0x036d880, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal C (3/7)"), 0x036d880, 0x036d900, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal C (4/7)"), 0x036d900, 0x036d980, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal C (5/7)"), 0x036d980, 0x036da00, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal C (6/7)"), 0x036da00, 0x036da80, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal C (7/7)"), 0x036da80, 0x036db00, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Sparkles C"), 0x036db00, 0x036db20, indexJojos51NewKakyo, 0x8 },
    { _T("Raging Demon Trail C"), 0x036d6a0, 0x036d720, indexJojos51NewKakyo, 0x9 },
    { _T("New Kakyoin Remote Mode Afterimage C"), 0x036D380,0x036D400, indexJojos51NewKakyo, 0xA },

    { _T("New Kakyoin Vs / Super C"), 0x041d200, 0x041d280, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { _T("New Kakyoin Challenger C"), 0x041d280, 0x041d300, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { _T("New Kakyoin Select / Winning C"), 0x041d300, 0x041d380, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("New Hierophant Select / Winning C"), 0x041d380, 0x041d400, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { _T("New Kakyoin Burning C (1/2)"), 0x036cf80, 0x036d000, indexJojos51NewKakyo },
    { _T("New Kakyoin Burning C (2/2)"), 0x036d000, 0x036d080, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap C (1/2)"), 0x036d280, 0x036d300, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap C (2/2)"), 0x036d300, 0x036d380, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_S[] =
{
    { _T("New Kakyoin & Hierophant S"), 0x0381400, 0x0381480, indexJojos51NewKakyo },
    { _T("New Hierophant Changing Pal S (1/7)"), 0x0381c80, 0x0381d00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal S (2/7)"), 0x0381d00, 0x0381d80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal S (3/7)"), 0x0381d80, 0x0381e00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal S (4/7)"), 0x0381e00, 0x0381e80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal S (5/7)"), 0x0381e80, 0x0381f00, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal S (6/7)"), 0x0381f00, 0x0381f80, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal S (7/7)"), 0x0381f80, 0x0382000, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Sparkles S"), 0x0382000, 0x0382020, indexJojos51NewKakyo, 0x8 },
    { _T("Raging Demon Trail S"), 0x0381ba0, 0x0381c20, indexJojos51NewKakyo, 0x9 },
    { _T("New Kakyoin Remote Mode Afterimage S"), 0x0381880, 0x0381900, indexJojos51NewKakyo, 0xa },

    { _T("New Kakyoin Vs / Super S"), 0x0422000, 0x0422080, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { _T("New Kakyoin Challenger S"), 0x0422080, 0x0422100, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { _T("New Kakyoin Select / Winning S"), 0x0422100, 0x0422180, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("New Hierophant Select / Winning S"), 0x0422180, 0x0422200, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { _T("New Kakyoin Burning S (1/2)"), 0x0381480, 0x0381500, indexJojos51NewKakyo },
    { _T("New Kakyoin Burning S (2/2)"), 0x0381500, 0x0381580, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap S (1/2)"), 0x0381780, 0x0381800, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap S (2/2)"), 0x0381800, 0x0381880, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_Start[] =
{
    { _T("New Kakyoin & Hierophant Start"), 0x0395900, 0x0395980, indexJojos51NewKakyo },
    { _T("New Hierophant Changing Pal Start (1/7)"), 0x0396180, 0x0396200, indexJojos51NewKakyo, 0x1, &pairHandledInCode },
    { _T("New Hierophant Changing Pal Start (2/7)"), 0x0396200, 0x0396280, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal Start (3/7)"), 0x0396280, 0x0396300, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal Start (4/7)"), 0x0396300, 0x0396380, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal Start (5/7)"), 0x0396380, 0x0396400, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal Start (6/7)"), 0x0396400, 0x0396480, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Changing Pal Start (7/7)"), 0x0396480, 0x0396500, indexJojos51NewKakyo, 0x1,& pairHandledInCode },
    { _T("New Hierophant Sparkles Start"), 0x0396500, 0x0396520, indexJojos51NewKakyo, 0x8 },
    { _T("Raging Demon Trail Start"), 0x03960a0, 0x0396120, indexJojos51NewKakyo, 0x9 },
    { _T("New Kakyoin Remote Mode Afterimage Start"), 0x395D80, 0x395E00, indexJojos51NewKakyo, 0xa },

    { _T("New Kakyoin Vs / Super Start"), 0x0426e00, 0x0426e80, indexJojos51NewKakyo, indexJojos51Character_VsSuper },
    { _T("New Kakyoin Challenger Start"), 0x0426e80, 0x0426f00, indexJojos51NewKakyo, indexJojos51Character_Challenger },
    { _T("New Kakyoin Select / Winning Start"), 0x0426f00, 0x0426f80, indexJojos51NewKakyo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("New Hierophant Select / Winning Start"), 0x0426f80, 0x0427000, indexJojos51NewKakyo, indexJojos51Character_SelectWin2, &pairHandledInCode },

    { _T("New Kakyoin Burning Start (1/2)"), 0x0395980, 0x0395a00, indexJojos51NewKakyo },
    { _T("New Kakyoin Burning Start (2/2)"), 0x0395a00, 0x0395a80, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap Start (1/2)"), 0x0395c80, 0x0395d00, indexJojos51NewKakyo },
    { _T("New Kakyoin Tech/Zap Start (2/2)"), 0x0395d00, 0x0395d80, indexJojos51NewKakyo },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_A[] =
{
    { _T("Anubis Polnareff A"), 0x0345180, 0x0345200, indexJojos51Anubis },
    { _T("Anubis Polnareff Vs / Super A"), 0x0413900, 0x0413980, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { _T("Anubis Polnareff Challenger A"), 0x0413980, 0x0413a00, indexJojos51Anubis, indexJojos51Character_Challenger },
    { _T("Anubis Polnareff Select / Winning A (1/2)"), 0x0413a00, 0x0413a80, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Anubis Polnareff Select / Winning A (2/2)"), 0x0413a80, 0x0413b00, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Anubis Polnareff Burning A (1/2)"), 0x0345200, 0x0345280, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Burning A (2/2)"), 0x0345280, 0x0345300, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap A (1/2)"), 0x0345500, 0x0345580, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap A (2/2)"), 0x0345580, 0x0345600, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_B[] =
{
    { _T("Anubis Polnareff B"), 0x0359680, 0x0359700, indexJojos51Anubis },
    { _T("Anubis Polnareff Vs / Super B"), 0x0418700, 0x0418780, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { _T("Anubis Polnareff Challenger B"), 0x0418780, 0x0418800, indexJojos51Anubis, indexJojos51Character_Challenger },
    { _T("Anubis Polnareff Select / Winning B (1/2)"), 0x0418800, 0x0418880, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Anubis Polnareff Select / Winning B (2/2)"), 0x0418880, 0x0418900, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Anubis Polnareff Burning B (1/2)"), 0x0359700, 0x0359780, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Burning B (2/2)"), 0x0359780, 0x0359800, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap B (1/2)"), 0x0359a00, 0x0359a80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap B (2/2)"), 0x0359a80, 0x0359b00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_C[] =
{
    { _T("Anubis Polnareff C"), 0x036db80, 0x036dc00, indexJojos51Anubis },
    { _T("Anubis Polnareff Vs / Super C"), 0x041d500, 0x041d580, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { _T("Anubis Polnareff Challenger C"), 0x041d580, 0x041d600, indexJojos51Anubis, indexJojos51Character_Challenger },
    { _T("Anubis Polnareff Select / Winning C (1/2)"), 0x041d600, 0x041d680, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Anubis Polnareff Select / Winning C (2/2)"), 0x041d680, 0x041d700, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Anubis Polnareff Burning C (1/2)"), 0x036dc00, 0x036dc80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Burning C (2/2)"), 0x036dc80, 0x036dd00, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap C (1/2)"), 0x036df00, 0x036df80, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap C (2/2)"), 0x036df80, 0x036e000, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_S[] =
{
    { _T("Anubis Polnareff S"), 0x0382080, 0x0382100, indexJojos51Anubis },
    { _T("Anubis Polnareff Vs / Super S"), 0x0422300, 0x0422380, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { _T("Anubis Polnareff Challenger S"), 0x0422380, 0x0422400, indexJojos51Anubis, indexJojos51Character_Challenger },
    { _T("Anubis Polnareff Select / Winning S (1/2)"), 0x0422400, 0x0422480, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Anubis Polnareff Select / Winning S (2/2)"), 0x0422480, 0x0422500, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Anubis Polnareff Burning S (1/2)"), 0x0382100, 0x0382180, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Burning S (2/2)"), 0x0382180, 0x0382200, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap S (1/2)"), 0x0382400, 0x0382480, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap S (2/2)"), 0x0382480, 0x0382500, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_Start[] =
{
    { _T("Anubis Polnareff Start"), 0x0396580, 0x0396600, indexJojos51Anubis },
    { _T("Anubis Polnareff Vs / Super Start"), 0x0427100, 0x0427180, indexJojos51Anubis, indexJojos51Character_VsSuper },
    { _T("Anubis Polnareff Challenger Start"), 0x0427180, 0x0427200, indexJojos51Anubis, indexJojos51Character_Challenger },
    { _T("Anubis Polnareff Select / Winning Start (1/2)"), 0x0427200, 0x0427280, indexJojos51Anubis, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Anubis Polnareff Select / Winning Start (2/2)"), 0x0427280, 0x0427300, indexJojos51Anubis, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Anubis Polnareff Burning Start (1/2)"), 0x0396600, 0x0396680, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Burning Start (2/2)"), 0x0396680, 0x0396700, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap Start (1/2)"), 0x0396900, 0x0396980, indexJojos51Anubis, indexJojos51Character_BurnZap },
    { _T("Anubis Polnareff Tech/Zap Start (2/2)"), 0x0396980, 0x0396a00, indexJojos51Anubis, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_A[] =
{
    { _T("Petshop A"), 0x0345e00, 0x0345e80, indexJojos51Petshop },
    { _T("Eggshop & Wealthy Begger A"), 0X0346680, 0X0346700, indexJojos51Petshop, 1 },
    { _T("Petshop Vs / Super A"), 0x0413c00, 0x0413c80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { _T("Petshop Challenger A"), 0x0413c80, 0x0413d00, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Petshop Select / Winning A (1/2)"), 0x0413d00, 0x0413d80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Petshop Select / Winning A (2/2)"), 0x0413d80, 0x0413e00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Petshop Select / Winning A"), 0x0413d00, 0x0413e00 },
#endif
    { _T("Petshop Burning A (1/2)"), 0x0345e80, 0x0345f00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Burning A (2/2)"), 0x0345f00, 0x0345f80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap A (1/2)"), 0x0346180, 0x0346200, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap A (2/2)"), 0x0346200, 0x0346280, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_B[] =
{
    { _T("Petshop B"), 0x035a300, 0x035a380, indexJojos51Petshop },
    { _T("Eggshop & Wealthy Begger B"), 0x035AB80, 0x035AC00, indexJojos51Petshop, 1 },
    { _T("Petshop Vs / Super B"), 0x0418a00, 0x0418a80, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { _T("Petshop Challenger B"), 0x0418a80, 0x0418b00, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Petshop Select / Winning B (1/2)"), 0x0418b00, 0x0418b80, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Petshop Select / Winning B (2/2)"), 0x0418b80, 0x0418c00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Petshop Select / Winning B"), 0x0418b00, 0x0418c00 },
#endif
    { _T("Petshop Burning B (1/2)"), 0x035a380, 0x035a400, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Burning B (2/2)"), 0x035a400, 0x035a480, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap B  (1/2)"), 0x035a680, 0x035a700, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap B  (2/2)"), 0x035a700, 0x035a780, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_C[] =
{
    { _T("Petshop C"), 0x036e800, 0x036e880, indexJojos51Petshop },
    { _T("Eggshop & Wealthy Begger C"), 0x036F080, 0x036F100, indexJojos51Petshop, 1 },
    { _T("Petshop Vs / Super C"), 0x041d800, 0x041d880, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { _T("Petshop Challenger C"), 0x041d880, 0x041d900, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Petshop Select / Winning C (1/2)"), 0x041d900, 0x041d980, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Petshop Select / Winning C (2/2)"), 0x041d980, 0x041da00, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Petshop Select / Winning C"), 0x041d900, 0x041da00 },
#endif
    { _T("Petshop Burning C (1/2)"), 0x036e880, 0x036e900, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Burning C (2/2)"), 0x036e900, 0x036e980, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap C (1/2)"), 0x036eb80, 0x036ec00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap C (2/2)"), 0x036ec00, 0x036ec80, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_S[] =
{
    { _T("Petshop S"), 0x0382d00, 0x0382d80, indexJojos51Petshop },
    { _T("Eggshop & Wealthy Begger S"), 0x0383580, 0x0383600, indexJojos51Petshop, 1 },
    { _T("Petshop Vs / Super S"), 0x0422600, 0x0422680, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { _T("Petshop Challenger S"), 0x0422680, 0x0422700, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Petshop Select / Winning S (1/2)"), 0x0422700, 0x0422780, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Petshop Select / Winning S (2/2)"), 0x0422780, 0x0422800, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Petshop Select / Winning S"), 0x0422700, 0x0422800 },
#endif
    { _T("Petshop Burning S (1/2)"), 0x0382d80, 0x0382e00, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Burning S (2/2)"), 0x0382e00, 0x0382e80, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap S (1/2)"), 0x0383080, 0x0383100, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap S (2/2)"), 0x0383100, 0x0383180, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_Start[] =
{
    { _T("Petshop Start"), 0x0397200, 0x0397280, indexJojos51Petshop },
    { _T("Eggshop & Wealthy Begger Start"), 0x0397A80, 0x0397B00, indexJojos51Petshop, 1 },
    { _T("Petshop Vs / Super Start"), 0x0427400, 0x0427480, indexJojos51Petshop, indexJojos51Character_VsSuper },
    { _T("Petshop Challenger Start"), 0x0427480, 0x0427500, indexJojos51Petshop, indexJojos51Character_Challenger },
#ifndef USE_LARGE_PALETTES
    { _T("Petshop Select / Winning Start (1/2)"), 0x0427500, 0x0427580, indexJojos51Petshop, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Petshop Select / Winning Start (2/2)"), 0x0427580, 0x0427600, indexJojos51Petshop, indexJojos51Character_SelectWin2, &pairHandledInCode },
#else
    { _T("Petshop Select / Winning Start"), 0x0427500, 0x0427600 },
#endif
    { _T("Petshop Burning Start (1/2)"), 0x0397280, 0x0397300, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Burning Start (2/2)"), 0x0397300, 0x0397380, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap Start (1/2)"), 0x0397580, 0x0397600, indexJojos51Petshop, indexJojos51Character_BurnZap },
    { _T("Petshop Tech/Zap Start (2/2)"), 0x0397600, 0x0397680, indexJojos51Petshop, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_A[] =
{
    { _T("Mariah A"), 0x0347700, 0x0347780, indexJojos51Mariah },
    { _T("Old Woman A"), 0x0347f80, 0x0348000, indexJojos51Mariah, 6 },
    { _T("Mariah Winpose Stuff A (1/2)"), 0x0348000, 0x0348080, indexJojos51Mariah, 1 },
    { _T("Mariah Winpose Stuff A (2/2)"), 0x0348080, 0x0348100, indexJojos51Mariah, 2 },
    { _T("Mariah's Bastet A"), 0x0348100, 0x0348180, indexJojos51Mariah, 8 },
    { _T("Mariah Vs / Super A"), 0x0414200, 0x0414280, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { _T("Mariah Challenger A"), 0x0414280, 0x0414300, indexJojos51Mariah, indexJojos51Character_Challenger },
    { _T("Mariah Select / Winning A"), 0x0414300, 0x0414380, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { _T("Mariah Burning A (1/2)"), 0x0347780, 0x0347800, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Burning A (2/2)"), 0x0347800, 0x0347880, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap A (1/2)"), 0x0347a80, 0x0347b00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap A (2/2)"), 0x0347b00, 0x0347b80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_B[] =
{
    { _T("Mariah B"), 0x035bc00, 0x035bc80, indexJojos51Mariah },
    { _T("Old Woman B"), 0x035c480, 0x035c500, indexJojos51Mariah, 6 },
    { _T("Mariah Winpose Stuff B (1/2)"), 0x035c500, 0x035c580, indexJojos51Mariah, 1 },
    { _T("Mariah Winpose Stuff B (2/2)"), 0x035c580, 0x035c600, indexJojos51Mariah, 2 },
    { _T("Mariah's Bastet B"), 0x035c600, 0x035c680, indexJojos51Mariah, 8 },
    { _T("Mariah Vs / Super B"), 0x0419000, 0x0419080, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { _T("Mariah Challenger B"), 0x0419080, 0x0419100, indexJojos51Mariah, indexJojos51Character_Challenger },
    { _T("Mariah Select / Winning B"), 0x0419100, 0x0419180, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { _T("Mariah Burning B (1/2)"), 0x035bc80, 0x035bd00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Burning B (2/2)"), 0x035bd00, 0x035bd80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap B (1/2)"), 0x035bf80, 0x035c000, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap B (2/2)"), 0x035c000, 0x035c080, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_C[] =
{
    { _T("Mariah C"), 0x0370100, 0x0370180, indexJojos51Mariah },
    { _T("Old Woman C"), 0x0370980, 0x0370a00, indexJojos51Mariah, 6 },
    { _T("Mariah Winpose Stuff C (1/2)"), 0x0370a00, 0x0370a80, indexJojos51Mariah, 1 },
    { _T("Mariah Winpose Stuff C (2/2)"), 0x0370a80, 0x0370b00, indexJojos51Mariah, 2 },
    { _T("Mariah's Bastet C"), 0x0370b00, 0x0370b80, indexJojos51Mariah, 8 },
    { _T("Mariah Vs / Super C"), 0x041de00, 0x041de80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { _T("Mariah Challenger C"), 0x041de80, 0x041df00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { _T("Mariah Select / Winning C"), 0x041df00, 0x041df80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { _T("Mariah Burning C (1/2)"), 0x0370180, 0x0370200, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Burning C (2/2)"), 0x0370200, 0x0370280, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap C (1/2)"), 0x0370480, 0x0370500, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap C (2/2)"), 0x0370500, 0x0370580, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_S[] =
{
    { _T("Mariah S"), 0x0384600, 0x0384680, indexJojos51Mariah },
    { _T("Old Woman S"), 0x0384e80, 0x0384f00, indexJojos51Mariah, 6 },
    { _T("Mariah Winpose Stuff S (1/2)"), 0x0384f00, 0x0384f80, indexJojos51Mariah, 1 },
    { _T("Mariah Winpose Stuff S (2/2)"), 0x0384f80, 0x0385000, indexJojos51Mariah, 2 },
    { _T("Mariah's Bastet S"), 0x0385000, 0x0385080, indexJojos51Mariah, 8 },
    { _T("Mariah Vs / Super S"), 0x0422c00, 0x0422c80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { _T("Mariah Challenger S"), 0x0422c80, 0x0422d00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { _T("Mariah Select / Winning S"), 0x0422d00, 0x0422d80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { _T("Mariah Burning S (1/2)"), 0x0384680, 0x0384700, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Burning S (2/2)"), 0x0384700, 0x0384780, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap S (1/2)"), 0x0384980, 0x0384a00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap S (2/2)"), 0x0384a00, 0x0384a80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_Start[] =
{
    { _T("Mariah Start"), 0x0398b00, 0x0398b80, indexJojos51Mariah },
    { _T("Old Woman Start"), 0x0399380, 0x0399400, indexJojos51Mariah, 6 },
    { _T("Mariah Winpose Stuff Start (1/2)"), 0x0399400, 0x0399480, indexJojos51Mariah, 1 },
    { _T("Mariah Winpose Stuff Start (2/2)"), 0x0399480, 0x0399500, indexJojos51Mariah, 2 },
    { _T("Mariah's Bastet Start"), 0x0399500, 0x0399580, indexJojos51Mariah, 8 },
    { _T("Mariah Vs / Super Start"), 0x0427a00, 0x0427a80, indexJojos51Mariah, indexJojos51Character_VsSuper },
    { _T("Mariah Challenger Start"), 0x0427a80, 0x0427b00, indexJojos51Mariah, indexJojos51Character_Challenger },
    { _T("Mariah Select / Winning Start"), 0x0427b00, 0x0427b80, indexJojos51Mariah, indexJojos51Character_SelectWin1 },
    { _T("Mariah Burning Start (1/2)"), 0x0398b80, 0x0398c00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Burning Start (2/2)"), 0x0398c00, 0x0398c80, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap Start (1/2)"), 0x0398e80, 0x0398f00, indexJojos51Mariah, indexJojos51Character_BurnZap },
    { _T("Mariah Tech/Zap Start (2/2)"), 0x0398f00, 0x0398f80, indexJojos51Mariah, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_A[] =
{
    { _T("Hol & Boingo A"), 0x0348380, 0x0348400, indexJojos51HolBoingo },
    { _T("Child Hol & Boingo A"), 0x0348c00, 0x0348c80, indexJojos51HolBoingo, 1 },
    { _T("Hol & Boingo Super Bullets A"), 0x0348cd6, 0x0348ce0 },
    { _T("Hol & Boingo Vs / Super A"), 0x0414500, 0x0414580, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { _T("Hol & Boingo Challenger A"), 0x0414580, 0x0414600, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { _T("Hol & Boingo Select / Winning A (1/2)"), 0x0414600, 0x0414680, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Hol & Boingo Select / Winning A (2/2)"), 0x0414680, 0x0414700, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Hol & Boingo Burning A (1/2)"), 0x0348400, 0x0348480, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Burning A (2/2)"), 0x0348480, 0x0348500, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap A (1/2)"), 0x0348700, 0x0348780, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap A (2/2)"), 0x0348780, 0x0348800, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_B[] =
{
    { _T("Hol & Boingo B"), 0x035c880, 0x035c900, indexJojos51HolBoingo },
    { _T("Child Hol & Boingo B"), 0x035d100, 0x035d180, indexJojos51HolBoingo, 1 },
    { _T("Hol & Boingo Super Bullets B"), 0x035d1d6, 0x035d1e0 },
    { _T("Hol & Boingo Vs / Super B"), 0x0419300, 0x0419380, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { _T("Hol & Boingo Challenger B"), 0x0419380, 0x0419400, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { _T("Hol & Boingo Select / Winning B (1/2)"), 0x0419400, 0x0419480, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Hol & Boingo Select / Winning B (2/2)"), 0x0419480, 0x0419500, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Hol & Boingo Burning B (1/2)"), 0x035c900, 0x035c980, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Burning B (2/2)"), 0x035c980, 0x035ca00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap B (1/2)"), 0x035cc00, 0x035cc80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap B (2/2)"), 0x035cc80, 0x035cd00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_C[] =
{
    { _T("Hol & Boingo C"), 0x0370d80, 0x0370e00, indexJojos51HolBoingo },
    { _T("Child Hol & Boingo C"), 0x0371600, 0x0371680, indexJojos51HolBoingo, 1 },
    { _T("Hol & Boingo Super Bullets C"), 0x03716d6, 0x03716e0 },
    { _T("Hol & Boingo Vs / Super C"), 0x041e100, 0x041e180, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { _T("Hol & Boingo Challenger C"), 0x041e180, 0x041e200, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { _T("Hol & Boingo Select / Winning C (1/2)"), 0x041e200, 0x041e280, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Hol & Boingo Select / Winning C (2/2)"), 0x041e280, 0x041e300, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Hol & Boingo Burning C (1/2)"), 0x0370e00, 0x0370e80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Burning C (2/2)"), 0x0370e80, 0x0370f00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap C (1/2)"), 0x0371100, 0x0371180, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap C (2/2)"), 0x0371180, 0x0371200, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_S[] =
{
    { _T("Hol & Boingo S"), 0x0385280, 0x0385300, indexJojos51HolBoingo },
    { _T("Child Hol & Boingo S"), 0x0385b00, 0x0385b80, indexJojos51HolBoingo, 1 },
    { _T("Hol & Boingo Super Bullets S"), 0x0385bd6, 0x0385be0 },
    { _T("Hol & Boingo Vs / Super S"), 0x0422f00, 0x0422f80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { _T("Hol & Boingo Challenger S"), 0x0422f80, 0x0423000, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { _T("Hol & Boingo Select / Winning S (1/2)"), 0x0423000, 0x0423080, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Hol & Boingo Select / Winning S (2/2)"), 0x0423080, 0x0423100, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Hol & Boingo Burning S (1/2)"), 0x0385300, 0x0385380, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Burning S (2/2)"), 0x0385380, 0x0385400, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap S (1/2)"), 0x0385600, 0x0385680, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap S (2/2)"), 0x0385680, 0x0385700, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start[] =
{
    { _T("Hol & Boingo Start"), 0x0399780, 0x0399800, indexJojos51HolBoingo },
    { _T("Child Hol & Boingo Start"), 0x039a000, 0x039a080, indexJojos51HolBoingo, 1 },
    { _T("Hol & Boingo Super Bullets Start"), 0x039a0d6, 0x039a0e0 },
    { _T("Hol & Boingo Vs / Super Start"), 0x0427d00, 0x0427d80, indexJojos51HolBoingo, indexJojos51Character_VsSuper },
    { _T("Hol & Boingo Challenger Start"), 0x0427d80, 0x0427e00, indexJojos51HolBoingo, indexJojos51Character_Challenger },
    { _T("Hol & Boingo Select / Winning Start (1/2)"), 0x0427e00, 0x0427e80, indexJojos51HolBoingo, indexJojos51Character_SelectWin1, &pairHandledInCode },
    { _T("Hol & Boingo Select / Winning Start (2/2)"), 0x0427e80, 0x0427f00, indexJojos51HolBoingo, indexJojos51Character_SelectWin2, &pairHandledInCode },
    { _T("Hol & Boingo Burning Start (1/2)"), 0x0399800, 0x0399880, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Burning Start (2/2)"), 0x0399880, 0x0399900, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap Start (1/2)"), 0x0399b00, 0x0399b80, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
    { _T("Hol & Boingo Tech/Zap Start (2/2)"), 0x0399b80, 0x0399c00, indexJojos51HolBoingo, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_A[] =
{
    { _T("Rubber Soul A"), 0x0349000, 0x0349080, indexJojos51RSoul },
    { _T("Rubber Child TF A"), 0x0349780, 0x0349800, indexJojos51RSoul, 1 },
    { _T("Rubber Soul Vs / Super A"), 0x0414800, 0x0414880, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { _T("Rubber Soul Challenger A"), 0x0414880, 0x0414900, indexJojos51RSoul, indexJojos51Character_Challenger },
    { _T("Rubber Soul Select / Winning A"), 0x0414900, 0x0414980, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { _T("Rubber Soul Burning A (1/2)"), 0x0349080, 0x0349100, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Burning A (2/2)"), 0x0349100, 0x0349180, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap A (1/2)"), 0x035d880, 0x035d900, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap A (2/2)"), 0x035d900, 0x035d980, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_B[] =
{
    { _T("Rubber Soul B"), 0x035d500, 0x035d580, indexJojos51RSoul },
    { _T("Rubber Child TF B"), 0x035dc80, 0x035dd00, indexJojos51RSoul, 1 },
    { _T("Rubber Soul Vs / Super B"), 0x0419600, 0x0419680, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { _T("Rubber Soul Challenger B"), 0x0419680, 0x0419700, indexJojos51RSoul, indexJojos51Character_Challenger },
    { _T("Rubber Soul Select / Winning B"), 0x0419700, 0x0419780, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { _T("Rubber Soul Burning B (1/2)"), 0x035d580, 0x035d600, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Burning B (2/2)"), 0x035d600, 0x035d680, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap B (1/2)"), 0x0371d80, 0x0371e00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap B (2/2)"), 0x0371e00, 0x0371e80, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_C[] =
{
    { _T("Rubber Soul C"), 0x0371a00, 0x0371a80, indexJojos51RSoul },
    { _T("Rubber Child TF C"), 0x0372180, 0x0372200, indexJojos51RSoul, 1 },
    { _T("Rubber Soul Vs / Super C"), 0x041e400, 0x041e480, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { _T("Rubber Soul Challenger C"), 0x041e480, 0x041e500, indexJojos51RSoul, indexJojos51Character_Challenger },
    { _T("Rubber Soul Select / Winning C"), 0x041e500, 0x041e580, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { _T("Rubber Soul Burning C (1/2)"), 0x0371a80, 0x0371b00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Burning C (2/2)"), 0x0371b00, 0x0371b80, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap C (1/2)"), 0x0386280, 0x0386300, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap C (2/2)"), 0x0386300, 0x0386380, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_S[] =
{
    { _T("Rubber Soul S"), 0x0385f00, 0x0385f80, indexJojos51RSoul },
    { _T("Rubber Child TF S"), 0x0386680, 0x0386700, indexJojos51RSoul, 1 },
    { _T("Rubber Soul Vs / Super S"), 0x0423200, 0x0423280, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { _T("Rubber Soul Challenger S"), 0x0423280, 0x0423300, indexJojos51RSoul, indexJojos51Character_Challenger },
    { _T("Rubber Soul Select / Winning S"), 0x0423300, 0x0423380, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { _T("Rubber Soul Burning S (1/2)"), 0x0385f80, 0x0386000, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Burning S (2/2)"), 0x0386000, 0x0386080, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap S (1/2)"), 0x039a780, 0x039a800, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap S (2/2)"), 0x039a800, 0x039a880, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_Start[] =
{
    { _T("Rubber Soul Start"), 0x039a400, 0x039a480, indexJojos51RSoul },
    { _T("Rubber Child TF Start"), 0x039ab80, 0x039ac00, indexJojos51RSoul, 1 },
    { _T("Rubber Soul Vs / Super Start"), 0x0428000, 0x0428080, indexJojos51RSoul, indexJojos51Character_VsSuper },
    { _T("Rubber Soul Challenger Start"), 0x0428080, 0x0428100, indexJojos51RSoul, indexJojos51Character_Challenger },
    { _T("Rubber Soul Select / Winning Start"), 0x0428100, 0x0428180, indexJojos51RSoul, indexJojos51Character_SelectWin1 },
    { _T("Rubber Soul Burning Start (1/2)"), 0x039a480, 0x039a500, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Burning Start (2/2)"), 0x039a500, 0x039a580, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap Start (1/2)"), 0x03aec80, 0x03aed00, indexJojos51RSoul, indexJojos51Character_BurnZap },
    { _T("Rubber Soul Tech/Zap Start (2/2)"), 0x03aed00, 0x03aed80, indexJojos51RSoul, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_A[] =
{
    { _T("Khan A"), 0x0349c80, 0x0349d00, indexJojos51Khan },
    { _T("Khan's Intro Anubis A"), 0x034a600, 0x034a620, indexJojos51Khan, 1 },
    { _T("Khan's Counter Anubis A"), 0x034a780, 0x034a7a0, indexJojos51Khan, 2 },
    { _T("Khan's Special Slash A"), 0x034a700, 0x034a720, indexJojos51Khan, 8 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap A (1/2)"), 0x034a000, 0x034a080, indexJojos51Khan, 6 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap A (2/2)"), 0x034a080, 0x034a100, indexJojos51Khan, 6 },
    { _T("Khan Vs/Super A"), 0x0414b00, 0x0414b80, indexJojos51Khan, indexJojos51Character_VsSuper },
    { _T("Khan Challenger A"), 0x0414b80, 0x0414c00, indexJojos51Khan, indexJojos51Character_Challenger },
    { _T("Khan Select/Winning A"), 0x0414c00, 0x0414c80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { _T("Khan Burning A (1/2)"), 0x0349d00, 0x0349d80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { _T("Khan Burning A (2/2)"), 0x0349d80, 0x0349e00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_B[] =
{
    { _T("Khan B"), 0x035e180, 0x035e200, indexJojos51Khan },
    { _T("Khan's Intro Anubis B"), 0x035eb00, 0x035eb20, indexJojos51Khan, 1 },
    { _T("Khan's Counter Anubis B"), 0x035ec80, 0x035eca0, indexJojos51Khan, 2 },
    { _T("Khan's Special Slash B"), 0x035ec00, 0x035ec20, indexJojos51Khan, 8 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap B (1/2)"), 0x035e500, 0x035e580, indexJojos51Khan, 6 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap B (2/2)"), 0x035e580, 0x035e600, indexJojos51Khan, 6 },
    { _T("Khan Vs/Super B"), 0x0419900, 0x0419980, indexJojos51Khan, indexJojos51Character_VsSuper },
    { _T("Khan Challenger B"), 0x0419980, 0x0419a00, indexJojos51Khan, indexJojos51Character_Challenger },
    { _T("Khan Select/Winning B"), 0x0419a00, 0x0419a80, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { _T("Khan Burning B (1/2)"), 0x035e200, 0x035e280, indexJojos51Khan, indexJojos51Character_BurnZap },
    { _T("Khan Burning B (2/2)"), 0x035e280, 0x035e300, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_C[] =
{
    { _T("Khan C"), 0x0372680, 0x0372700, indexJojos51Khan },
    { _T("Khan's Intro Anubis C"), 0x0373000, 0x0373020, indexJojos51Khan, 1 },
    { _T("Khan's Counter Anubis C"), 0x0373180, 0x03731a0, indexJojos51Khan, 2 },
    { _T("Khan's Special Slash C"), 0x0373100, 0x0373120, indexJojos51Khan, 8 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap C (1/2)"), 0x0372a00, 0x0372a80, indexJojos51Khan, 6 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap C (2/2)"), 0x0372a80, 0x0372b00, indexJojos51Khan, 6 },
    { _T("Khan Vs/Super C"), 0x041e700, 0x041e780, indexJojos51Khan, indexJojos51Character_VsSuper },
    { _T("Khan Challenger C"), 0x041e780, 0x041e800, indexJojos51Khan, indexJojos51Character_Challenger },
    { _T("Khan Select/Winning C"), 0x041e800, 0x041e880, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { _T("Khan Burning C (1/2)"), 0x0372700, 0x0372780, indexJojos51Khan, indexJojos51Character_BurnZap },
    { _T("Khan Burning C (2/2)"), 0x0372780, 0x0372800, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_S[] =
{
    { _T("Khan S"), 0x0386b80, 0x0386c00, indexJojos51Khan },
    { _T("Khan's Intro Anubis S"), 0x0387500, 0x0387520, indexJojos51Khan, 1 },
    { _T("Khan's Counter Anubis S"), 0x0387680, 0x03876a0, indexJojos51Khan, 2 },
    { _T("Khan's Special Slash S"), 0x0387600, 0x0387620, indexJojos51Khan, 8 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap S (1/2)"), 0x0386f00, 0x0386f80, indexJojos51Khan, 6 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap S (2/2)"), 0x0386f80, 0x0387000, indexJojos51Khan, 6 },
    { _T("Khan Vs/Super S"), 0x0423500, 0x0423580, indexJojos51Khan, indexJojos51Character_VsSuper },
    { _T("Khan Challenger S"), 0x0423580, 0x0423600, indexJojos51Khan, indexJojos51Character_Challenger },
    { _T("Khan Select/Winning S"), 0x0423600, 0x0423680, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { _T("Khan Burning S (1/2)"), 0x0386c00, 0x0386c80, indexJojos51Khan, indexJojos51Character_BurnZap },
    { _T("Khan Burning S (2/2)"), 0x0386c80, 0x0386d00, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_Start[] =
{
    { _T("Khan Start"), 0x039b080, 0x039b100, indexJojos51Khan },
    { _T("Khan's Intro Anubis Start"), 0x039ba00, 0x039ba20, indexJojos51Khan, 1 },
    { _T("Khan's Counter Anubis Start"), 0x039bb80, 0x039bba0, indexJojos51Khan, 2 },
    { _T("Khan's Special Slash Start"), 0x039bb00, 0x039bb20, indexJojos51Khan, 8 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap Start (1/2)"), 0x039b400, 0x039b480, indexJojos51Khan, 6 },
    { _T("Khan Sword Slashes/Counter/Tech/Zap Start (2/2)"), 0x039b480, 0x039b500, indexJojos51Khan, 6 },
    { _T("Khan Vs/Super Start"), 0x0428300, 0x0428380, indexJojos51Khan, indexJojos51Character_VsSuper },
    { _T("Khan Challenger Start"), 0x0428380, 0x0428400, indexJojos51Khan, indexJojos51Character_Challenger },
    { _T("Khan Select/Winning Start"), 0x0428400, 0x0428480, indexJojos51Khan, indexJojos51Character_SelectWin1 },
    { _T("Khan Burning Start (1/2)"), 0x039b100, 0x039b180, indexJojos51Khan, indexJojos51Character_BurnZap },
    { _T("Khan Burning Start (2/2)"), 0x039b180, 0x039b200, indexJojos51Khan, indexJojos51Character_BurnZap },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_A[] =
{
    { _T("N'Doul & Geb A"), 0x033d480, 0x033d500, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_B[] =
{
    { _T("N'Doul & Geb B"), 0x0351980, 0x0351a00, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_C[] =
{
    { _T("N'Doul & Geb C"), 0x0365e80, 0x0365f00, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_S[] =
{
    { _T("N'Doul & Geb S"), 0x037a380, 0x037a400, indexJojos51NDoul },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_Start[] =
{
    { _T("N'Doul & Geb Start"), 0x038e880, 0x038e900, indexJojos51NDoul },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_A[] =
{
    { _T("Boss Ice A"), 0x033fa00, 0x033fa80, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_B[] =
{
    { _T("Boss Ice B"), 0x0353f00, 0x0353f80, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_C[] =
{
    { _T("Boss Ice C"), 0x0368400, 0x0368480, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_S[] =
{
    { _T("Boss Ice S"), 0x037c900, 0x037c980, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_Start[] =
{
    { _T("Boss Ice Start"), 0x0390e00, 0x0390e80, indexJojos51BIce },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_A[] =
{
    { _T("Death 13 A"), 0x0340680, 0x0340700, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_B[] =
{
    { _T("Death 13 B"), 0x0354b80, 0x0354c00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_C[] =
{
    { _T("Death 13 C"), 0x0369080, 0x0369100, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_S[] =
{
    { _T("Death 13 S"), 0x037d580, 0x037d600, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_Start[] =
{
    { _T("Death 13 Start"), 0x0391a80, 0x0391b00, indexJojos51Death13 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_GRAYFLY[] =
{
    { _T("Gray Fly 1"), 0x0346A80, 0x0346B00, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 2"), 0x035AF80, 0x035B000, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 3"), 0x036F480, 0x036F500, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 4"), 0x0383980, 0x0383A00, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 5"), 0x0397E80, 0x0397F00, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 6"), 0x03AC380, 0x03AC400, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 7"), 0x03C0880, 0x03C0900, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 8"), 0x03D4D80, 0x03D4E00, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 9"), 0x03E9280, 0x03E9300, indexJojos51GrayFly, 0x00 },
    { _T("Gray Fly 10"), 0x03FD780, 0x03FD800, indexJojos51GrayFly, 0x00 },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOTARO[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_AVDOL[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_POL[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOSEPH[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_Start) },
    { _T("Shared"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_Shared, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_Shared) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_IGGY[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_Start) },
    { _T("Shared"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_Shared, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_Shared) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_ALESSI[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_CHAKA[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MIDLER[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DIO[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SDIO[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_YJOSEPH[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOL[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_VICE[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIERO[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BPOL[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SHOP[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MARIAH[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_RSOUL[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_KHAN[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_NDOUL[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BICE[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEATH13[] =
{
    { _T("A"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_A) },
    { _T("B"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_B) },
    { _T("C"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_C) },
    { _T("S"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_S) },
    { _T("Start"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_GRAYFLY[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_GRAYFLY, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_GRAYFLY) },
};

#pragma endregion Jojo_Characters

#pragma region Bonus

// Note that this is intentionally sorted: don't alphabetize
const sGame_PaletteDataset JOJOS_BONUS_MENU_PALETTES[] =
{
    { _T("Mode select - Challenge & Story signs"), 0x030d480, 0x030d500 },
    { _T("Character Select Background"), 0x0310100, 0x0310180 },
    { _T("Selector Rings"), 0x0310080, 0x0310100 },
    { _T("Character Select Comic"), 0x0310000, 0x0310080 },
    { _T("Extra characters page arrows"), 0x0310500, 0x0310580 },
    { _T("Vs screen Background"), 0x030d000, 0x030d080 },
    { _T("Win screen Background"), 0x0310200, 0x0310280 },
    { _T("D'Arby"), 0x0311a00, 0x0311a80, indexJojos51Bonus, 0x2C },
    { _T("Darby Chips"), 0x0311d00, 0x0311d80, indexJojos51Bonus, 0x2D },
    { _T("Osiris Arms"), 0x0311b80, 0x0311c00, indexJojos51Bonus, 0x2E },
    { _T("Osiris Body"), 0x0311b00, 0x0311b80, indexJojos51Bonus, 0x2F },
    { _T("Game Over Text"), 0x0311a80, 0x0311b00, indexJojos51Bonus, 0x30 },
};

const sGame_PaletteDataset JOJOS_BONUS_INTRO_PALETTES[] =
{
    { _T("Capcom Presents (text under intro logo)"), 0x030b040, 0x030b060, indexJojos51Bonus, 0x37 },
    { _T("Capcom logo"),            0x030b080, 0x030b0a0, indexJojos51Bonus, 0x36 },
    { _T("Capcom Backgrounds"),     0x030C300, 0x030C340, indexJojos51Bonus, 0x35 },
    { _T("Hol Horse intro Body"),   0x030c600, 0x030c680, indexJojos51Bonus, 0x3C },
    { _T("Hol Horse intro Hand"),   0x030c580, 0x030c600, indexJojos51Bonus, 0x3D },
    { _T("Hol Horse shoot scene"),  0x030C400, 0x030C480, indexJojos51Bonus, 0x3E },
#ifdef USE_LARGE_PALETTES
    { _T("Hol Horse intro background"), 0x030bb00, 0x030be00 },
#else
    { _T("Hol Horse intro background (1/2)"), 0x030bb00, 0x030bd00 },
    { _T("Hol Horse intro background (2/2)"), 0x030bd00, 0x030be00 },
#endif
#ifdef USE_LARGE_PALETTES
    { _T("Hol Horse intro ender background"), 0x030be00, 0x030c300 },
#else
    { _T("Hol Horse intro ender background (1/3)"), 0x030be00, 0x030c000 },
    { _T("Hol Horse intro ender background (2/3)"), 0x030c000, 0x030c200 },
    { _T("Hol Horse intro ender background (3/3)"), 0x030c200,  0x030c300 },
#endif
    { _T("Vanilla Ice intro"),      0x030ba00, 0x030ba80, indexJojos51Bonus, 0x0E },
    { _T("Cream intro"),            0x030ba80, 0x030bb00, indexJojos51Bonus, 0x3B },
#ifdef USE_LARGE_PALETTES
    { _T("Vice intro background"), 0x030b100, 0x030b780 },
#else
    { _T("Vice intro background (1/4)"), 0x030b100, 0x030b300 },
    { _T("Vice intro background (2/4)"), 0x030b300, 0x030b500 },
    { _T("Vice intro background (3/4)"), 0x030b500, 0x030b700 },
    { _T("Vice intro background (4/4)"), 0x030b700, 0x030b780 },
#endif
    { _T("Vice Intro Ender"),       0x030c380, 0x030c400, indexJojos51Bonus, 0x0F },
    { _T("Intro Manga Panels (1/5)"), 0x030b780, 0x030b800, indexJojos51Bonus, 0x09 },
    { _T("Intro Manga Panels (2/5)"), 0x030b800, 0x030b880, indexJojos51Bonus, 0x0A },
    { _T("Intro Manga Panels (3/5)"), 0x030b880, 0x030b900, indexJojos51Bonus, 0x0B },
    { _T("Intro Manga Panels (4/5)"), 0x030b900, 0x030b980, indexJojos51Bonus, 0x0C },
    { _T("Intro Manga Panels (5/5)"), 0x030b980, 0x030ba00, indexJojos51Bonus, 0x0D },
    { _T("Title Screen DIO"),       0x030c500, 0x030c580, indexJojos51Bonus, 0x3A },
    { _T("Title Screen DIO Fade 1"), 0x030C780, 0x030C800, indexJojos51Bonus, 0x3A },
    { _T("Title Screen DIO Fade 2"), 0x030C800, 0x030C880, indexJojos51Bonus, 0x3A },
    { _T("Title Screen DIO Fade 3"), 0x030C880, 0x030C900, indexJojos51Bonus, 0x3A },
    { _T("Title Screen DIO Manga"), 0x030c900, 0x030c980, indexJojos51Bonus, 0x3A },
    { _T("Title Screen Jotaro"),    0x030c480, 0x030c500, indexJojos51Bonus, 0x39 },
    { _T("Title Screen Jotaro Fade 1"), 0x030C980, 0x030CA00, indexJojos51Bonus, 0x39 },
    { _T("Title Screen Jotaro Fade 2"), 0x030CA00, 0x030CA80, indexJojos51Bonus, 0x39 },
    { _T("Title Screen Jotaro Fade 3"), 0x030CA80, 0x030CB00, indexJojos51Bonus, 0x39 },
    { _T("Title Screen Jotaro Manga"), 0x030cb00, 0x030cb80, indexJojos51Bonus, 0x39 },
    { _T("Title Screen Logo"),      0x030c680, 0x030c780, indexJojos51Bonus, 0x32  },
     // joined above { _T("Title Screen Logo Ribbon"), 0x030c700, 0x030c780, indexJojos51Bonus, 0x33 },
    { _T("English Title"), 0x030CB80, 0x030CC00, indexJojos51Bonus, 0x34 },
    { _T("Title Screen Background"), 0x030b0a0, 0x030b0b0, indexJojos51Bonus, 0x31 },
    { _T("World Map"),              0x0313780, 0x0313800, indexJojos51Bonus, 0x38 },
};

const sGame_PaletteDataset JOJOS_BONUS_INGAME_PALETTES[] =
{
    { _T("Aja Stone"), 0x0335800, 0x0335820 },
    { _T("Extra Character Dust and Blood"), 0x0335860, 0x0335880 },
    { _T("Super Flash / Zap Effects"), 0x0335840, 0x0335860 },
    { _T("Blocksparks/OldSeph 360/Small Explosions"), 0x03358a0, 0x0335900 },
    { _T("Hitsparks & Pushblock"), 0x0335820, 0x0335840, indexJojos51Bonus, 0x40 },
    { _T("Super Hitsparks and Burning Effect"), 0x03359c0, 0x0335A00, indexJojos51Bonus, 0x08 },
    { _T("Tandem Background"), 0x030d900, 0x030d980, indexJojos51Bonus, 0x1f },
    { _T("Stand Clash Background"), 0x030d100, 0x030d180, indexJojos51Bonus, 0x20 },
    { _T("Stand Crash Mask Background"), 0x030cec0, 0x030cf00, indexJojos51Bonus, 0x0 },
    { _T("Stand Crash Mask Background 2"), 0x030CF40, 0x030CF80, indexJojos51Bonus, 0x0 },
    { _T("Raging Demon Background"), 0x030d180, 0x030d200, indexJojos51Bonus, 0x21 },
    { _T("Super KO Background"), 0x030d080, 0x030d100, indexJojos51Bonus, 0x23 },
    { _T("Super KO Portrait"), 0x030ce80, 0x030cec0, indexJojos51Bonus, 0x6 },
    { _T("Super KO Portrait Holes/Blood"), 0x030CF80, 0x030CFC0, indexJojos51Bonus, 0x7 },
    { _T("\"Round 1,2,3\" Text"), 0x030ce00, 0x030ce60, indexJojos51Bonus, 0x22 },
    { _T("\"Fight\" & \"Down\" Text"), 0x030cd80, 0x030ce00, indexJojos51Bonus, 0x1 },
    { _T("\"LOSE\""), 0x030cce0, 0x030cd00, indexJojos51Bonus, 0x2 },
    { _T("\"KO\""), 0x030cd20, 0x030cd40, indexJojos51Bonus, 0x3 },
    { _T("\"PERFECT\""), 0X030CD40, 0X030CD60, indexJojos51Bonus, 0x4 },
    { _T("\"Retired\""), 0x030CC20, 0x030CC40, indexJojos51Bonus, 0x5 },
    { _T("VS screen text"), 0x030d400, 0x030d440, indexJojos51Bonus, 0x1b },
    { _T("Win text (character)"), 0x030cc40, 0x030cc60, indexJojos51Bonus, 0x1a },
    { _T("Win text (WIN)"), 0x030cca0, 0x030ccc0, indexJojos51Bonus, 0x19 },

    { _T("Double KO"), 0x030CD60, 0x030CD80, indexJojos51Bonus, 0x1c },
    { _T("Draw"), 0x030CC80, 0x030CCA0, indexJojos51Bonus, 0x1d },
    { _T("Time Up"), 0x030CCC0, 0x030CCE0, indexJojos51Bonus, 0x1e },
    { _T("Here Comes A New Challenger"), 0x030CD00, 0x030CD20, indexJojos51Bonus, 0x25 },
    { _T("Story Mode Episodes Text"), 0x030CC00, 0x030CC20, indexJojos51Bonus, 0x24 },
    { _T("Stand Summon & Tandem Aura"), 0x0335920, 0x0335940, indexJojos51Bonus, 0x3F },
    { _T("S.Dio 2c Stone & Requiem Zzz"), 0x0335940, 0x0335980, indexJojos51Bonus, 0x41 },
    { _T("Base TCHAR Dust & Floor Bounce"), 0x0335B40, 0x0335B60 },
    // Folded into another one
    //{ _T("Extra TCHAR Dust & Floor Bounce"), 0x0335860, 0x0335878 },
    { _T("Story Mode Metal Objects"), 0x0335B20, 0x0335B40 },
    { _T("Speedwagon Pilot"), 0x0335880, 0x03358A0 },
    // Duped to "Various..."
    //{ _T("Chaka s.236a/236aa Effects"), 0x03358E0, 0x0335900 },
    { _T("S.Dio 623aa Floor Effect"), 0x0335900, 0x0335920 },

    { _T("S.Dio Effects/Round Start/Wallbounce/etc"), 0x0335980, 0x03359C0 },
    // Also a dupe
    //{ _T("Various 236x Effects"), 0x03358E0, 0x0335900 },

};

const sGame_PaletteDataset JOJOS_A_BONUS_NODE_SUPERBACKGROUND[] =
{
#ifndef USE_LARGE_PALETTES
    { _T("Super Flash Background (Challenge Screen / Demo) (1/8)"), 0x030d500, 0x030d580, indexJojos51Bonus, 0x11 },
    { _T("Super Flash Background (Challenge Screen / Demo) (2/8)"), 0x030d580, 0x030d600, indexJojos51Bonus, 0x12 },
    { _T("Super Flash Background (Challenge Screen / Demo) (3/8)"), 0x030d600, 0x030d680, indexJojos51Bonus, 0x13 },
    { _T("Super Flash Background (Challenge Screen / Demo) (4/8)"), 0x030d680, 0x030d700, indexJojos51Bonus, 0x14 },
    { _T("Super Flash Background (Challenge Screen / Demo) (5/8)"), 0x030d700, 0x030d780, indexJojos51Bonus, 0x15 },
    { _T("Super Flash Background (Challenge Screen / Demo) (6/8)"), 0x030d780, 0x030d800, indexJojos51Bonus, 0x16 },
    { _T("Super Flash Background (Challenge Screen / Demo) (7/8)"), 0x030d800, 0x030d880, indexJojos51Bonus, 0x17 },
    { _T("Super Flash Background (Challenge Screen / Demo) (8/8)"), 0x030d880, 0x030d900, indexJojos51Bonus, 0x18 },
#else
    { _T("Super Flash Background (Challenge Screen / Demo)"), 0x030d500, 0x030d900 },
#endif
};

const sGame_PaletteDataset JOJOS_BONUS_NODE_FADEBACKGROUND[] =
{
#ifndef USE_LARGE_PALETTES
    { _T("Fade Background (1/29)"), 0x030f080, 0x030f100 },
    { _T("Fade Background (2/29)"), 0x030f100, 0x030f180 },
    { _T("Fade Background (3/29)"), 0x030f180, 0x030f200 },
    { _T("Fade Background (4/29)"), 0x030f200, 0x030f280 },
    { _T("Fade Background (5/29)"), 0x030f280, 0x030f300 },
    { _T("Fade Background (6/29)"), 0x030f300, 0x030f380 },
    { _T("Fade Background (7/29)"), 0x030f380, 0x030f400 },
    { _T("Fade Background (8/29)"), 0x030f400, 0x030f480 },
    { _T("Fade Background (9/29)"), 0x030f480, 0x030f500 },
    { _T("Fade Background (10/29)"), 0x030f500, 0x030f580 },
    { _T("Fade Background (11/29)"), 0x030f580, 0x030f600 },
    { _T("Fade Background (12/29)"), 0x030f600, 0x030f680 },
    { _T("Fade Background (13/29)"), 0x030f680, 0x030f700 },
    { _T("Fade Background (14/29)"), 0x030f700, 0x030f780 },
    { _T("Fade Background (15/29)"), 0x030f780, 0x030f800 },
    { _T("Fade Background (16/29)"), 0x030f800, 0x030f880 },
    { _T("Fade Background (17/29)"), 0x030f880, 0x030f900 },
    { _T("Fade Background (18/29)"), 0x030f900, 0x030f980 },
    { _T("Fade Background (19/29)"), 0x030f980, 0x030fa00 },
    { _T("Fade Background (20/29)"), 0x030fa00, 0x030fa80 },
    { _T("Fade Background (21/29)"), 0x030fa80, 0x030fb00 },
    { _T("Fade Background (22/29)"), 0x030fb00, 0x030fb80 },
    { _T("Fade Background (23/29)"), 0x030fb80, 0x030fc00 },
    { _T("Fade Background (24/29)"), 0x030fc00, 0x030fc80 },
    { _T("Fade Background (25/29)"), 0x030fc80, 0x030fd00 },
    { _T("Fade Background (26/29)"), 0x030fd00, 0x030fd80 },
    { _T("Fade Background (27/29)"), 0x030fd80, 0x030fe00 },
    { _T("Fade Background (28/29)"), 0x030fe00, 0x030fe80 },
    { _T("Fade Background (29/29)"), 0x030fe80, 0x030ff00 },
#else
    { _T("Fade Background"), 0x030f080, 0x030ff00 },
#endif
};

const sGame_PaletteDataset JOJOS_BONUS_TAROT_CARDS[] =
{
#ifdef FUN_COMMENT
    string: "I say we should wait until we have more of them before adding to the program (also midler is annoying)
             I know a few people are figuring those out"
#endif
    //{ _T("Coffin Scene: Crusaders "), 0x02eb680, 0x02eb880 },
    //{ _T("Jotaro Story: Imprisoned Jotaro"), 0x02E8400, 0x02E8500? },
    //{ _T("Jotaro Story: Scared Holly"), 0x02e8380, 0x02E8400 },
    //{ _T("Joseph Story: \"Let's Go!\" "), 0x02e7600, 0x02e7800 },
    //{ _T("Midler Story Ending"), 0x02E6300, 0x02E6500 },

    { _T("Menu Cards"), 0x030db40, 0x030db80, indexJojos51TarotCards, 0x00 },
    //{ _T("Card Backs"), 0x030DB00, 0x030DB40 },
    { _T("Star Platinum Light Menu Card"), 0x030DB80, 0x030DC00, indexJojos51TarotCards, 0x01 },
    { _T("Star Platinum Menu Card"), 0x030DC00, 0x030DC80, indexJojos51TarotCards, 0x02 },
    { _T("Hierophant Light Menu Card"), 0x030DC80, 0x030DD00, indexJojos51TarotCards, 0x03 },
    { _T("Hierophant Menu"), 0x030DD00, 0x030DD80, indexJojos51TarotCards, 0x04 },
    { _T("Magician's Red Light Menu Card"), 0x030DD80, 0x030DE00, indexJojos51TarotCards, 0x05 },
    { _T("Magician's Red Menu Card"), 0x030DE00, 0x030DE80, indexJojos51TarotCards, 0x06 },
    { _T("Silver Chariot Light Menu Card"), 0x030DE80, 0x030DF00, indexJojos51TarotCards, 0x07 },
    { _T("Silver Chariot Menu Card"), 0x030DF00, 0x030DF80, indexJojos51TarotCards, 0x08 },
    { _T("The Hermit Light Menu Card"), 0x030DF80, 0x030E000, indexJojos51TarotCards, 0x09 },
    { _T("The Hermit Menu Card"), 0x030E000, 0x030E080, indexJojos51TarotCards, 0x0A },
    { _T("The Fool Light Menu Card"), 0x030E080, 0x030E100, indexJojos51TarotCards, 0x0B },
    { _T("The Fool Menu Card"), 0x030E100, 0x030E180, indexJojos51TarotCards, 0x0C },
    { _T("Sethan Light Menu Card"), 0x030E180, 0x030E200, indexJojos51TarotCards, 0x0D },
    { _T("Sethan Menu Card"), 0x030E200, 0x030E280, indexJojos51TarotCards, 0x0E },
    { _T("Anubis Light Menu Card"), 0x030E280, 0x030E300, indexJojos51TarotCards, 0x0F },
    { _T("Anubis Menu Card"), 0x030E300, 0x030E380, indexJojos51TarotCards, 0x10 },
    { _T("The Devil Light Menu Card"), 0x030E380, 0x030E400, indexJojos51TarotCards, 0x11 },
    { _T("The Devil Menu Card"), 0x030E400, 0x030E480, indexJojos51TarotCards, 0x12 },
    { _T("Geb Light Menu Card"), 0x030E480, 0x030E500, indexJojos51TarotCards, 0x13 },
    { _T("Geb Menu Card"), 0x030E500, 0x030E580, indexJojos51TarotCards, 0x14 },
    { _T("High Priestess Light Menu Card"), 0x030E580, 0x030E600, indexJojos51TarotCards, 0x15 },
    { _T("High Priestess Menu Card"), 0x030E600, 0x030E680, indexJojos51TarotCards, 0x16 },
    { _T("The Tower Light Menu Card"), 0x030E680, 0x030E700, indexJojos51TarotCards, 0x17 },
    { _T("The Tower Menu Card"), 0x030E700, 0x030E780, indexJojos51TarotCards, 0x18 },
    { _T("The Emperor Light Menu Card"), 0x030E780, 0x030E800, indexJojos51TarotCards, 0x19 },
    { _T("The Emperor Menu Card"), 0x030E800, 0x030E880, indexJojos51TarotCards, 0x1A },
    { _T("Hanged Man Light Menu Card"), 0x030E880, 0x030E900, indexJojos51TarotCards, 0x1B },
    { _T("Hanged Man Menu Card"), 0x030E900, 0x030E980, indexJojos51TarotCards, 0x1C },
    { _T("Death 13 Light Menu Card"), 0x030E980, 0x030EA00, indexJojos51TarotCards, 0x1D },
    { _T("Death 13 Menu Card"), 0x030EA00, 0x030EA80, indexJojos51TarotCards, 0x1E },
    { _T("Judgement Light Menu Card"), 0x030EA80, 0x030EB00, indexJojos51TarotCards, 0x1F },
    { _T("Judgement Menu Card"), 0x030EB00, 0x030EB80, indexJojos51TarotCards, 0x20 },
    { _T("Justice Light Menu Card"), 0x030EB80, 0x030EC00, indexJojos51TarotCards, 0x21 },
    { _T("Justice Menu Card"), 0x030EC00, 0x030EC80, indexJojos51TarotCards, 0x22 },
    { _T("Horus Light Menu Card"), 0x030EC80, 0x030ED00, indexJojos51TarotCards, 0x23 },
    { _T("Horus Menu Card"), 0x030ED00, 0x030ED80, indexJojos51TarotCards, 0x24 },
    { _T("Cream Light Menu Card"), 0x030ED80, 0x030EE00, indexJojos51TarotCards, 0x25 },
    { _T("Cream Menu Card"), 0x030EE00, 0x030EE80, indexJojos51TarotCards, 0x26 },
    { _T("The World Light Menu Card"), 0x030EE80, 0x030EF00, indexJojos51TarotCards, 0x27 },
    { _T("The World Menu Card"), 0x030EF00, 0x030EF80, indexJojos51TarotCards, 0x28 },
};

const sDescTreeNode JOJOS_A_BONUS_COLLECTION[]
{
    { _T("Intro"), DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INTRO_PALETTES, ARRAYSIZE(JOJOS_BONUS_INTRO_PALETTES) },
    { _T("Menu"), DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_MENU_PALETTES, ARRAYSIZE(JOJOS_BONUS_MENU_PALETTES) },
    { _T("In Game"), DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INGAME_PALETTES, ARRAYSIZE(JOJOS_BONUS_INGAME_PALETTES) },
    { _T("Fade Background (Challenge Screen / Demo)"), DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_NODE_FADEBACKGROUND, ARRAYSIZE(JOJOS_BONUS_NODE_FADEBACKGROUND) },
    { _T("Super Screen Background"), DESC_NODETYPE_TREE, (void*)JOJOS_A_BONUS_NODE_SUPERBACKGROUND, ARRAYSIZE(JOJOS_A_BONUS_NODE_SUPERBACKGROUND) },
    { _T("Tarot Cards"), DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_TAROT_CARDS, ARRAYSIZE(JOJOS_BONUS_TAROT_CARDS) },
};

#pragma endregion Bonus

#pragma region Timestop
const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_ALOCKUP[] =
{
    { _T("A Lockup TS (1/7)"), 0x02d0000, 0x02d0200 },
    { _T("A Lockup TS (2/7)"), 0x02d0200, 0x02d0400 },
    { _T("A Lockup TS (3/7)"), 0x02d0400, 0x02d0600 },
    { _T("A Lockup TS (4/7)"), 0x02d0600, 0x02d0800 },
    { _T("A Lockup TS (5/7)"), 0x02d0800, 0x02d0a00 },
    { _T("A Lockup TS (6/7)"), 0x02d0a00, 0x02d0c00 },
    { _T("A Lockup TS (7/7)"), 0x02d0c00, 0x02d0d80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HEALTH[] =
{
    { _T("A Health Room TS (1/6)"), 0x02d0e00, 0x02d1000 },
    { _T("A Health Room TS (2/6)"), 0x02d1000, 0x02d1200 },
    { _T("A Health Room TS (3/6)"), 0x02d1200,  0x02d1400 },
    { _T("A Health Room TS (4/6)"), 0x02d1400, 0x02d1600 },
    { _T("A Health Room TS (5/6)"), 0x02d1600, 0x02d1800 },
    { _T("A Health Room TS (6/6)"), 0x02d1800, 0x02d1900 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_AIRPLANE[] =
{
    { _T("In A Airplane TS (1/17)"), 0x02d1a00, 0x02d1c00 },
    { _T("In A Airplane TS (2/17)"), 0x02d1c00, 0x02d1e00 },
    { _T("In A Airplane TS (3/17)"), 0x02d1e00, 0x02d2000 },
    { _T("In A Airplane TS (4/17)"), 0x02d2000, 0x02d2200 },
    { _T("In A Airplane TS (5/17)"), 0x02d2200, 0x02d2400 },
    { _T("In A Airplane TS (6/17)"), 0x02d2400, 0x02d2600 },
    { _T("In A Airplane TS (7/17)"), 0x02d2600, 0x02d2800 },
    { _T("In A Airplane TS (8/17)"), 0x02d2800, 0x02d2a00 },
    { _T("In A Airplane TS (9/17)"), 0x02d2a00, 0x02d2c00 },
    { _T("In A Airplane TS (10/17)"), 0x02d2c00, 0x02d2e00 },
    { _T("In A Airplane TS (11/17)"), 0x02d2e00, 0x02d3000 },
    { _T("In A Airplane TS (12/17)"), 0x02d3000, 0x02d3200 },
    { _T("In A Airplane TS (13/17)"), 0x02d3200, 0x02d3400 },
    { _T("In A Airplane TS (14/17)"), 0x02d3400, 0x02d3600 },
    { _T("In A Airplane TS (15/17)"), 0x02d3600, 0x02d3800 },
    { _T("In A Airplane TS (16/17)"), 0x02d3800, 0x02d3a00 },
    { _T("In A Airplane TS (17/17)"), 0x02d3a00, 0x02d3b80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_TIGERBAUM[] =
{
    { _T("Tigerbaum Garden TS (1/11)"), 0x02d3c00, 0x02d3e00, indexJojos51Stages, 0x1e, &pairFullyLinkedNode },
    { _T("Tigerbaum Garden TS (2/11)"), 0x02d3e00, 0x02d4000, indexJojos51Stages, 0x1f },
    { _T("Tigerbaum Garden TS (3/11)"), 0x02d4000, 0x02d4200, indexJojos51Stages, 0x20 },
    { _T("Tigerbaum Garden TS (4/11)"), 0x02d4200, 0x02d4400, indexJojos51Stages, 0x21 },
    { _T("Tigerbaum Garden TS (5/11)"), 0x02d4400, 0x02d4600, indexJojos51Stages, 0x22 },
    { _T("Tigerbaum Garden TS (6/11)"), 0x02d4600, 0x02d4800, indexJojos51Stages, 0x23 },
    { _T("Tigerbaum Garden TS (7/11)"), 0x02d4800, 0x02d4a00, indexJojos51Stages, 0x24 },
    { _T("Tigerbaum Garden TS (8/11)"), 0x02d4a00, 0x02d4c00, indexJojos51Stages, 0x25 },
    { _T("Tigerbaum Garden TS (9/11)"), 0x02d4c00, 0x02d4e00, indexJojos51Stages, 0x26 },
    { _T("Tigerbaum Garden TS (10/11)"), 0x02d4e00, 0x02d5000, indexJojos51Stages, 0x27 },
    { _T("Tigerbaum Garden TS (11/11)"), 0x02d5000, 0x02d5200, indexJojos51Stages, 0x28 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELD[] =
{
    { _T("Hotel (Devil) / New 2 TS (1/7)"), 0x02d5300, 0x02d5500, indexJojos51Stages, 0x11, &pairFullyLinkedNode },
    { _T("Hotel (Devil) / New 2 TS (2/7)"), 0x02d5500, 0x02d5700, indexJojos51Stages, 0x12 },
    { _T("Hotel (Devil) / New 2 TS (3/7)"), 0x02d5700, 0x02d5900, indexJojos51Stages, 0x13 },
    { _T("Hotel (Devil) / New 2 TS (4/7)"), 0x02d5900, 0x02d5b00, indexJojos51Stages, 0x14 },
    { _T("Hotel (Devil) / New 2 TS (5/7)"), 0x02d5b00, 0x02d5d00, indexJojos51Stages, 0x15 },
    { _T("Hotel (Devil) / New 2 TS (6/7)"), 0x02d5d00, 0x02d5f00, indexJojos51Stages, 0x16 },
    { _T("Hotel (Devil) / New 2 TS (7/7)"), 0x02d5f00, 0x02d6000, indexJojos51Stages, 0x17 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_REMAINS[] =
{
    { _T("Remains / New 1 TS (1/9)"), 0x02d6100, 0x02d6300 },
    { _T("Remains / New 1 TS (2/9)"), 0x02d6300, 0x02d6500 },
    { _T("Remains / New 1 TS (3/9)"), 0x02d6500, 0x02d6700 },
    { _T("Remains / New 1 TS (4/9)"), 0x02d6700, 0x02d6900 },
    { _T("Remains / New 1 TS (5/9)"), 0x02d6900, 0x02d6b00 },
    { _T("Remains / New 1 TS (6/9)"), 0x02d6b00, 0x02d6d00 },
    { _T("Remains / New 1 TS (7/9)"), 0x02d6d00, 0x02d6f00 },
    { _T("Remains / New 1 TS (8/9)"), 0x02d6f00, 0x02d7100 },
    { _T("Remains / New 1 TS (9/9)"), 0x02d7100, 0x02d7300 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELJ[] =
{
    { _T("Hotel (Justice) TS (1/8)"), 0x02d7400, 0x02d7600 },
    { _T("Hotel (Justice) TS (2/8)"), 0x02d7600, 0x02d7800 },
    { _T("Hotel (Justice) TS (3/8)"), 0x02d7800, 0x02d7a00 },
    { _T("Hotel (Justice) TS (4/8)"), 0x02d7a00, 0x02d7c00 },
    { _T("Hotel (Justice) TS (5/8)"), 0x02d7c00, 0x02d7e00 },
    { _T("Hotel (Justice) TS (6/8)"), 0x02d7e00, 0x02d8000 },
    { _T("Hotel (Justice) TS (7/8)"), 0x02d8000, 0x02d8200 },
    { _T("Hotel (Justice) TS (8/8)"), 0x02d8200, 0x02d8280 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SISLAND[] =
{
    { _T("Small Island / New 3 TS (1/6)"), 0x02d8300, 0x02d8500, indexJojos51Stages, 0x18 },
    { _T("Small Island / New 3 TS (2/6)"), 0x02d8500, 0x02d8700, indexJojos51Stages, 0x19 },
    { _T("Small Island / New 3 TS (3/6)"), 0x02d8700, 0x02d8900, indexJojos51Stages, 0x1a },
    { _T("Small Island / New 3 TS (4/6)"), 0x02d8900, 0x02d8b00, indexJojos51Stages, 0x1b },
    { _T("Small Island / New 3 TS (5/6)"), 0x02d8b00, 0x02d8d00, indexJojos51Stages, 0x1c },
    { _T("Small Island / New 3 TS (6/6)"), 0x02d8d00, 0x02d8f00, indexJojos51Stages, 0x1d },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DMORN[] =
{
    { _T("Desert Morning / Twilight TS (1/8)"), 0x02d9f00, 0x02da100, indexJojos51Stages, 0x0b },
    { _T("Desert Morning / Twilight TS (2/8)"), 0x02da100, 0x02da300 },
    { _T("Desert Morning / Twilight TS (3/8)"), 0x02da300, 0x02da500, indexJojos51Stages, 0x0c },
    { _T("Desert Morning / Twilight TS (4/8)"), 0x02da500, 0x02da700 },
    { _T("Desert Morning / Twilight TS (5/8)"), 0x02da700, 0x02da900, indexJojos51Stages, 0x0d },
    { _T("Desert Morning / Twilight TS (6/8)"), 0x02da900, 0x02dab00, indexJojos51Stages, 0x0e },
    { _T("Desert Morning / Twilight TS (7/8)"), 0x02dab00, 0x02dad00, indexJojos51Stages, 0x0f },
    { _T("Desert Morning / Twilight TS (8/8)"), 0x02dad00, 0x02dad80 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNOON[] =
{
    { _T("Desert Noon TS (1/7)"), 0x02d9000, 0x02d9200, indexJojos51Stages, 0x0b },
    { _T("Desert Noon TS (2/7)"), 0x02d9200, 0x02d9400 },
    { _T("Desert Noon TS (3/7)"), 0x02d9400, 0x02d9600, indexJojos51Stages, 0x0c },
    { _T("Desert Noon TS (4/7)"), 0x02d9600, 0x02d9800 },
    { _T("Desert Noon TS (5/7)"), 0x02d9800, 0x02d9a00, indexJojos51Stages, 0x0d },
    { _T("Desert Noon TS (6/7)"), 0x02d9a00, 0x02d9c00, indexJojos51Stages, 0x0e },
    { _T("Desert Noon TS (7/7)"), 0x02d9c00, 0x02d9e00, indexJojos51Stages, 0x0f },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNIGHT[] =
{
    { _T("Desert Night TS (1/8)"), 0x02dae00, 0x02db000, indexJojos51Stages, 0xb },
    { _T("Desert Night TS (2/8)"), 0x02db000, 0x02db200 },
    { _T("Desert Night TS (3/8)"), 0x02db200, 0x02db400, indexJojos51Stages, 0xc},
    { _T("Desert Night TS (4/8)"), 0x02db400, 0x02db600 },
    { _T("Desert Night TS (5/8)"), 0x02db600, 0x02db800, indexJojos51Stages, 0xd },
    { _T("Desert Night TS (6/8)"), 0x02db800, 0x02dba00, indexJojos51Stages, 0xe },
    { _T("Desert Night TS (7/8)"), 0x02dba00, 0x02dbc00, indexJojos51Stages, 0xf },
    { _T("Desert Night TS (8/8)"), 0x02dbc00, 0x02dbc80, indexJojos51Stages, 0x10 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_RUINS[] =
{
    { _T("Ruins / New 4 TS (1/5)"), 0x02dbd00, 0x02dbf00 },
    { _T("Ruins / New 4 TS (2/5)"), 0x02dbf00, 0x02dc100 },
    { _T("Ruins / New 4 TS (3/5)"), 0x02dc100, 0x02dc300 },
    { _T("Ruins / New 4 TS (4/5)"), 0x02dc300, 0x02dc500 },
    { _T("Ruins / New 4 TS (5/5)"), 0x02dc500, 0x02dc700 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWN[] =
{
    { _T("Country Town Noon / Twilight / Night TS (1/21)"), 0x02dc800, 0x02dca00 },
    { _T("Country Town Noon / Twilight / Night TS (2/21)"), 0x02dca00, 0x02dcc00 },
    { _T("Country Town Noon / Twilight / Night TS (3/21)"), 0x02dcc00, 0x02dce00 },
    { _T("Country Town Noon / Twilight / Night TS (4/21)"), 0x02dce00, 0x02dd000 },
    { _T("Country Town Noon / Twilight / Night TS (5/21)"), 0x02dd000, 0x02dd200 },
    { _T("Country Town Noon / Twilight / Night TS (6/21)"), 0x02dd200, 0x02dd400 },
    { _T("Country Town Noon / Twilight / Night TS (7/21)"), 0x02dd400, 0x02dd600 },
    { _T("Country Town Noon / Twilight / Night TS (8/21)"), 0x02dd600, 0x02dd800 },
    { _T("Country Town Noon / Twilight / Night TS (9/21)"), 0x02dd800, 0x02dda00 },
    { _T("Country Town Noon / Twilight / Night TS (10/21)"), 0x02dda00, 0x02ddc00 },
    { _T("Country Town Noon / Twilight / Night TS (11/21)"), 0x02ddc00, 0x02dde00 },
    { _T("Country Town Noon / Twilight / Night TS (12/21)"), 0x02dde00, 0x02de000 },
    { _T("Country Town Noon / Twilight / Night TS (13/21)"), 0x02de000, 0x02de200 },
    { _T("Country Town Noon / Twilight / Night TS (14/21)"), 0x02de200, 0x02de400 },
    { _T("Country Town Noon / Twilight / Night TS (15/21)"), 0x02de400, 0x02de600 },
    { _T("Country Town Noon / Twilight / Night TS (16/21)"), 0x02de600, 0x02de800 },
    { _T("Country Town Noon / Twilight / Night TS (17/21)"), 0x02de800, 0x02dea00 },
    { _T("Country Town Noon / Twilight / Night TS (18/21)"), 0x02dea00, 0x02dec00 },
    { _T("Country Town Noon / Twilight / Night TS (19/21)"), 0x02dec00, 0x02dee00 },
    { _T("Country Town Noon / Twilight / Night TS (20/21)"), 0x02dee00, 0x02df000 },
    { _T("Country Town Noon / Twilight / Night TS (21/21)"), 0x02df000, 0x02df180 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_UWATER[] =
{
    { _T("Underground Water / New 5 TS (1/8)"), 0x02df200, 0x02df400 },
    { _T("Underground Water / New 5 TS (2/8)"), 0x02df400, 0x02df600 },
    { _T("Underground Water / New 5 TS (3/8)"), 0x02df600, 0x02df800 },
    { _T("Underground Water / New 5 TS (4/8)"), 0x02df800, 0x02dfa00 },
    { _T("Underground Water / New 5 TS (5/8)"), 0x02dfa00, 0x02dfc00 },
    { _T("Underground Water / New 5 TS (6/8)"), 0x02dfc00, 0x02dfe00 },
    { _T("Underground Water / New 5 TS (7/8)"), 0x02dfe00, 0x02e0000 },
    { _T("Underground Water / New 5 TS (8/8)"), 0x02e0000, 0x02e0200 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_INHOUSE[] =
{
    { _T("Inside House / New 6 TS (1/8)"), 0x02e0300, 0x02e0500 },
    { _T("Inside House / New 6 TS (2/8)"), 0x02e0500, 0x02e0700 },
    { _T("Inside House / New 6 TS (3/8)"), 0x02e0700, 0x02e0900 },
    { _T("Inside House / New 6 TS (4/8)"), 0x02e0900, 0x02e0b00 },
    { _T("Inside House / New 6 TS (5/8)"), 0x02e0b00, 0x02e0d00 },
    { _T("Inside House / New 6 TS (6/8)"), 0x02e0d00, 0x02e0f00 },
    { _T("Inside House / New 6 TS (7/8)"), 0x02e0f00, 0x02e1100 },
    { _T("Inside House / New 6 TS (8/8)"), 0x02e1100, 0x02e1200 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CROOM[] =
{
    { _T("Coffin Room / New 7 TS (1/4)"), 0x02e1300, 0x02e1500, indexJojos51Stages, 0x5 },
    { _T("Coffin Room / New 7 TS (2/4)"), 0x02e1500, 0x02e1700, indexJojos51Stages, 0x6 },
    { _T("Coffin Room / New 7 TS (3/4)"), 0x02e1700, 0x02e1900, indexJojos51Stages, 0x7 },
    { _T("Coffin Room / New 7 TS (4/4)"), 0x02e1900, 0x02e1b00, indexJojos51Stages, 0x8 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWER[] =
{
    { _T("Clock Tower / New 8 TS (1/3)"), 0x02e1c00, 0x02e1e00, indexJojos51Stages, 0 },
    { _T("Clock Tower / New 8 TS (2/3)"), 0x02e1e00, 0x02e2000, indexJojos51Stages, 1 },
    { _T("Clock Tower / New 8 TS (3/3)"), 0x02e2000, 0x02e2200, indexJojos51Stages, 2 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SUBURB[] =
{
    { _T("Surburbs 1 / 2 / 3 TS (1/22)"), 0x02e2300, 0x02e2500 },
    { _T("Surburbs 1 / 2 / 3 TS (2/22)"), 0x02e2500, 0x02e2700 },
    { _T("Surburbs 1 / 2 / 3 TS (3/22)"), 0x02e2700, 0x02e2900 },
    { _T("Surburbs 1 / 2 / 3 TS (4/22)"), 0x02e2900, 0x02e2b00 },
    { _T("Surburbs 1 / 2 / 3 TS (5/22)"), 0x02e2b00, 0x02e2d00 },
    { _T("Surburbs 1 / 2 / 3 TS (6/22)"), 0x02e2d00, 0x02e2f00 },
    { _T("Surburbs 1 / 2 / 3 TS (7/22)"), 0x02e2f00, 0x02e3100 },
    { _T("Surburbs 1 / 2 / 3 TS (8/22)"), 0x02e3100, 0x02e3300 },
    { _T("Surburbs 1 / 2 / 3 TS (9/22)"), 0x02e3300, 0x02e3500 },
    { _T("Surburbs 1 / 2 / 3 TS (10/22)"), 0x02e3500, 0x02e3700 },
    { _T("Surburbs 1 / 2 / 3 TS (11/22)"), 0x02e3700, 0x02e3900 },
    { _T("Surburbs 1 / 2 / 3 TS (12/22)"), 0x02e3900, 0x02e3b00 },
    { _T("Surburbs 1 / 2 / 3 TS (13/22)"), 0x02e3b00, 0x02e3d00 },
    { _T("Surburbs 1 / 2 / 3 TS (14/22)"), 0x02e3d00, 0x02e3f00 },
    { _T("Surburbs 1 / 2 / 3 TS (15/22)"), 0x02e3f00, 0x02e4100 },
    { _T("Surburbs 1 / 2 / 3 TS (16/22)"), 0x02e4100, 0x02e4300 },
    { _T("Surburbs 1 / 2 / 3 TS (17/22)"), 0x02e4300, 0x02e4500 },
    { _T("Surburbs 1 / 2 / 3 TS (18/22)"), 0x02e4500, 0x02e4700 },
    { _T("Surburbs 1 / 2 / 3 TS (19/22)"), 0x02e4700, 0x02e4900 },
    { _T("Surburbs 1 / 2 / 3 TS (20/22)"), 0x02e4900, 0x02e4b00 },
    { _T("Surburbs 1 / 2 / 3 TS (21/22)"), 0x02e4b00, 0x02e4d00 },
    { _T("Surburbs 1 / 2 / 3 TS (22/22)"), 0x02e4d00, 0x02e4f00 },
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_OBRIDGE[] =
{
    { _T("On the Bridge TS (1/2)"), 0x02e4f00, 0x02e5100, indexJojos51Stages, 0x3 },
    { _T("On the Bridge TS (2/2)"), 0x02e5100, 0x02e5300, indexJojos51Stages, 0x4 },
};

const sDescTreeNode JOJOS_TIMESTOP_COLLECTION[] =
{
    { _T("A Lockup TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_ALOCKUP) },
    { _T("A Health Room TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HEALTH, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HEALTH) },
    { _T("In A Airplane TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_AIRPLANE) },
    { _T("Tigerbaum Garden TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_TIGERBAUM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_TIGERBAUM) },
    { _T("Hotel (Devil) / New 2 TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELD, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELD) },
    { _T("Remains / New 1 TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_REMAINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_REMAINS) },
    { _T("Hotel (Justice) TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELJ) },
    { _T("Small Island / New 3 TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SISLAND, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SISLAND) },
    { _T("Desert Morning TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DMORN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DMORN) },
    { _T("Desert Noon TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNOON, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNOON) },
    { _T("Desert Night TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNIGHT) },
    { _T("Ruins / New 4 TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_RUINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_RUINS) },
    { _T("Country Town Noon / Twilight / Night TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWN) },
    { _T("Underground Water / New 5"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_UWATER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_UWATER) },
    { _T("Inside House / New 6"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_INHOUSE) },
    { _T("Coffin Room / New 7 TS"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CROOM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CROOM) },
    { _T("Clock Tower / New 8"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWER) },
    { _T("Suburbs 1"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SUBURB, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SUBURB) },
    { _T("On The Bridge"), DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_OBRIDGE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_OBRIDGE) },
};

#pragma endregion Timestop

const sDescTreeNode JOJOS_UNITS_50[ARRAYSIZE(JOJOS_A_UNITDESC_50)] =
{
    { _T("HUD"), DESC_NODETYPE_TREE,           (void*)JOJOS_A_50_HUD_COLLECTION, ARRAYSIZE(JOJOS_A_50_HUD_COLLECTION) },
    { _T("HUD Portraits"), DESC_NODETYPE_TREE, (void*)JOJOS_A_50_HUD_PORTRAIT_COLLECTION, ARRAYSIZE(JOJOS_A_50_HUD_PORTRAIT_COLLECTION) },
    { _T("Stages"), DESC_NODETYPE_TREE,        (void*)JOJOS_A_50_STAGE_COLLECTION, ARRAYSIZE(JOJOS_A_50_STAGE_COLLECTION) },
};

const sDescTreeNode JOJOS_UNITS_51[ARRAYSIZE(JOJOS_A_UNITDESC_51)] =
{
    { _T("Jotaro"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOTARO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOTARO) },
    { _T("Kakyoin & Hierophant"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT) },
    { _T("Avdol"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_AVDOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_AVDOL) },
    { _T("Polnareff"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_POL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_POL) },
    { _T("Joseph"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOSEPH) },
    { _T("Iggy"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_IGGY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_IGGY) },
    { _T("Alessi"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_ALESSI, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_ALESSI) },
    { _T("Chaka"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_CHAKA, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_CHAKA) },
    { _T("Devo and Ebony"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY) },
    { _T("Midler"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MIDLER, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MIDLER) },
    { _T("Dio"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DIO) },
    { _T("Shadow Dio"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SDIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SDIO) },
    { _T("Young Joseph"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_YJOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_YJOSEPH) },
    { _T("Hol "), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOL) },
    { _T("Vanilla Ice"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_VICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_VICE) },
    { _T("New Kakyoin & Hierophant"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIERO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIERO) },
    { _T("Anubis Polnareff"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BPOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BPOL) },
    { _T("Petshop"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SHOP, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SHOP) },
    { _T("Mariah"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MARIAH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MARIAH) },
    { _T("Hol and Boingo"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO) },
    { _T("Rubber Soul"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_RSOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_RSOUL) },
    { _T("Khan"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_KHAN, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_KHAN) },
    { _T("N'Doul and Geb"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_NDOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_NDOUL) },
    { _T("Boss Ice"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BICE) },
    { _T("Death 13"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEATH13, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEATH13) },
    { _T("Unimplemented: Gray Fly"), DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_GRAYFLY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_GRAYFLY) },
    { _T("Timestop"), DESC_NODETYPE_TREE, (void*)JOJOS_TIMESTOP_COLLECTION, ARRAYSIZE(JOJOS_TIMESTOP_COLLECTION) },
    { _T("Bonus"), DESC_NODETYPE_TREE,    (void*)JOJOS_A_BONUS_COLLECTION, ARRAYSIZE(JOJOS_A_BONUS_COLLECTION) },
};

// Unused natively, but used for Extra extension files people plug in.  May need to fork into 50/51 versions.
const stExtraDef JOJOS_A_EXTRA[] =
{
    //Start

    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};

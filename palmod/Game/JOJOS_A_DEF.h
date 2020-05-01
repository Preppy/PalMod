#pragma once

#if NEED_TO_UPDATE_JOJO_HEADERS
#define USE_LARGE_PALETTES
#endif

const char JOJOS_A_UNITDESC_50[][32] =
{
    "HUD",           // JOJOS_HUD_COLLECTION
    "HUD Portraits", // JOJOS_A_HUD_PORTRAIT_COLLECTION
    "Stages",        // JOJOS_A_STAGE_COLLECTION
};

const char JOJOS_A_UNITDESC_51[][32] =
{
    "Jotaro", // JOJOS_A_CHARACTER_COLLECTION_JOTARO
    "Kakyoin & Hierophant", // JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT
    "Avdol", // JOJOS_A_CHARACTER_COLLECTION_AVDOL
    "Polnareff", // JOJOS_A_CHARACTER_COLLECTION_POL
    "Joseph", // JOJOS_A_CHARACTER_COLLECTION_JOSEPH
    "Iggy", // JOJOS_A_CHARACTER_COLLECTION_IGGY
    "Alessi", // JOJOS_A_CHARACTER_COLLECTION_ALESSI
    "Chaka", // JOJOS_A_CHARACTER_COLLECTION_CHAKA
    "Devo and Ebony", // JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY
    "Midler", // JOJOS_A_CHARACTER_COLLECTION_MIDLER
    "Dio", // JOJOS_A_CHARACTER_COLLECTION_DIO
    "Shadow Dio", // JOJOS_A_CHARACTER_COLLECTION_SDIO
    "Young Joseph", // JOJOS_A_CHARACTER_COLLECTION_YJOSEPH
    "Hol ", // JOJOS_A_CHARACTER_COLLECTION_HOL
    "Vanilla Ice", // JOJOS_A_CHARACTER_COLLECTION_VICE
    "New Kakyoin & Hierophant", // JOJOS_A_CHARACTER_COLLECTION_HIERO
    "Anubis Polnareff", // JOJOS_A_CHARACTER_COLLECTION_BPOL
    "Petshop", // JOJOS_A_CHARACTER_COLLECTION_SHOP
    "Mariah", // JOJOS_A_CHARACTER_COLLECTION_MARIAH
    "Hol and Boingo", // JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO
    "Rubber Soul", // JOJOS_A_CHARACTER_COLLECTION_RSOUL
    "Khan", // JOJOS_A_CHARACTER_COLLECTION_KHAN
    "N'Doul and Geb", // JOJOS_A_CHARACTER_COLLECTION_NDOUL
    "Boss Ice", // JOJOS_A_CHARACTER_COLLECTION_BICE
    "Death 13", // JOJOS_A_CHARACTER_COLLECTION_DEATH13
    "Timestop", // JOJOS_TIMESTOP_COLLECTION
    "Bonus", // JOJOS_A_BONUS_COLLECTION
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
    { "Jotaro A Life Bar Portrait", 0x07C0400, 0x07C0420 },
    { "Jotaro B Life Bar Portrait", 0x07C0420, 0x07C0440 },
    { "Jotaro C Life Bar Portrait", 0x07C0C00, 0x07C0C20 },
    { "Jotaro S Life Bar Portrait", 0x07C0C20, 0x07C0C40 },
    { "Jotaro Start Life Bar Portrait", 0x07C0C40, 0x07C0C60 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES[] =
{
    { "Kakyoin A Life Bar Portrait", 0x07C0440, 0x07C0460 },
    { "Kakyoin B Life Bar Portrait", 0x07C0460, 0x07C0480 },
    { "Kakyoin C Life Bar Portrait", 0x07C0C60, 0x07C0C80 },
    { "Kakyoin S Life Bar Portrait", 0x07C0C80, 0x07C0CA0 },
    { "Kakyoin Start Life Bar Portrait", 0x07C0CA0, 0x07C0CC0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DIO_PALETTES[] =
{
    { "Dio A Life Bar Portrait", 0x07C0480, 0x07C04A0 },
    { "Dio B Life Bar Portrait", 0x07C04A0, 0x07C04C0 },
    { "Dio C Life Bar Portrait", 0x07C14C0, 0x07C14E0 },
    { "Dio S Life Bar Portrait", 0x07C14E0, 0x07C1500 },
    { "Dio Start Life Bar Portrait", 0x07C1500, 0x07C1520 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES[] =
{
    { "Chaka A Life Bar Portrait", 0x07C04C0, 0x07C04E0 },
    { "Chaka B Life Bar Portrait", 0x07C04E0, 0x07C0500 },
    { "Chaka C Life Bar Portrait", 0x07C0F60, 0x07C0F80 },
    { "Chaka S Life Bar Portrait", 0x07C0F80, 0x07C0FA0 },
    { "Chaka Start Life Bar Portrait", 0x07C0FA0, 0x07C0FC0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES[] =
{
    { "Iggy A Life Bar Portrait", 0x07C0500, 0x07C0520 },
    { "Iggy B Life Bar Portrait", 0x07C0520, 0x07C0540 },
    { "Iggy C Life Bar Portrait", 0x07C0DE0, 0x07C0E00 },
    { "Iggy S Life Bar Portrait", 0x07C0E00, 0x07C0E20 },
    { "Iggy Start Life Bar Portrait", 0x07C0E20, 0x07C0E40 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES[] =
{
    { "Petshop A Life Bar Portrait", 0x07C0540, 0x07C0560 },
    { "Petshop B Life Bar Portrait", 0x07C0560, 0x07C0580 },
    { "Petshop C Life Bar Portrait", 0x07C1800, 0x07C1820 },
    { "Petshop S Life Bar Portrait", 0x07C1820, 0x07C1840 },
    { "Petshop Start Life Bar Portrait", 0x07C1840, 0x07C1860 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES[] =
{
    { "Polnareff A Life Bar Portrait", 0x07C0580, 0x07C05A0 },
    { "Polnareff B Life Bar Portrait", 0x07C05A0, 0x07C05C0 },
    { "Polnareff C Life Bar Portrait", 0x07C0D20, 0x07C0D40 },
    { "Polnareff S Life Bar Portrait", 0x07C0D40, 0x07C0D60 },
    { "Polnareff Start Life Bar Portrait", 0x07C0D60, 0x07C0D80 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES[] =
{
    { "Joseph A Life Bar Portrait", 0x07C05C0, 0x07C05E0 },
    { "Joseph B Life Bar Portrait", 0x07C05E0, 0x07C0600 },
    { "Joseph C Life Bar Portrait", 0x07C0D80, 0x07C0DA0 },
    { "Joseph S Life Bar Portrait", 0x07C0DA0, 0x07C0DC0 },
    { "Joseph Start Life Bar Portrait", 0x07C0DC0, 0x07C0DE0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES[] =
{
    { "Avdol A Life Bar Portrait", 0x07C0600, 0x07C0620 },
    { "Avdol B Life Bar Portrait", 0x07C0620, 0x07C0640 },
    { "Avdol C Life Bar Portrait", 0x07C0CC0, 0x07C0CE0 },
    { "Avdol S Life Bar Portrait", 0x07C0CE0, 0x07C0D00 },
    { "Avdol Start Life Bar Portrait", 0x07C0D00, 0x07C0D20 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES[] =
{
    { "Alessi A Life Bar Portrait", 0x07C0640, 0x07C0660 },
    { "Alessi B Life Bar Portrait", 0x07C0660, 0x07C0680 },
    { "Alessi C Life Bar Portrait", 0x07C0F00, 0x07C0F20 },
    { "Alessi S Life Bar Portrait", 0x07C0F20, 0x07C0F40 },
    { "Alessi Start Life Bar Portrait", 0x07C0F40, 0x07C0F60 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES[] =
{
    { "Devo A Life Bar Portrait", 0x07C06C0, 0x07C06E0 },
    { "Devo B Life Bar Portrait", 0x07C06E0, 0x07C0700 },
    { "Devo C Life Bar Portrait", 0x07C1400, 0x07C1420 },
    { "Devo S Life Bar Portrait", 0x07C1420, 0x07C1440 },
    { "Devo Start Life Bar Portrait", 0x07C1440, 0x07C1460 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES[] =
{
    { "Vanilla Ice A Life Bar Portrait", 0x07C0740, 0x07C0760 },
    { "Vanilla Ice B Life Bar Portrait", 0x07C0760, 0x07C0780 },
    { "Vanilla Ice C Life Bar Portrait", 0x07C1520, 0x07C1540 },
    { "Vanilla Ice S Life Bar Portrait", 0x07C1540, 0x07C1560 },
    { "Vanilla Ice Start Life Bar Portrait", 0x07C1560, 0x07C1580 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOL_PALETTES[] =
{
    { "Hol Horse A Life Bar Portrait", 0x07C0780, 0x07C07A0 },
    { "Hol Horse B Life Bar Portrait", 0x07C07A0, 0x07C07C0 },
    { "Hol Horse C Life Bar Portrait", 0x07C1640, 0x07C1660 },
    { "Hol Horse S Life Bar Portrait", 0x07C1660, 0x07C1680 },
    { "Hol Horse Start Life Bar Portrait", 0x07C1680, 0x07C16A0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES[] =
{
    { "Midler A Life Bar Portrait", 0x07C08C0, 0x07C08E0 },
    { "Midler B Life Bar Portrait", 0x07C08E0, 0x07C0900 },
    { "Midler C Life Bar Portrait", 0x07C1460, 0x07C1480 },
    { "Midler S Life Bar Portrait", 0x07C1480, 0x07C14A0 },
    { "Midler Start Life Bar Portrait", 0x07C14A0, 0x07C14C0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES[] =
{
    { "Mariah A Life Bar Portrait", 0x07C0900, 0x07C0920 },
    { "Mariah B Life Bar Portrait", 0x07C0920, 0x07C0940 },
    { "Mariah C Life Bar Portrait", 0x07C1860, 0x07C1880 },
    { "Mariah S Life Bar Portrait", 0x07C1880, 0x07C18A0 },
    { "Mariah Start Life Bar Portrait", 0x07C18A0, 0x07C18C0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES[] =
{
    { "Young Joseph A Life Bar Portrait", 0x07C0B60, 0x07C0B80 },
    { "Young Joseph B Life Bar Portrait", 0x07C0B80, 0x07C0BA0 },
    { "Young Joseph C Life Bar Portrait", 0x07C15E0, 0x07C1600 },
    { "Young Joseph S Life Bar Portrait", 0x07C1600, 0x07C1620 },
    { "Young Joseph Start Life Bar Portrait", 0x07C1620, 0x07C1640 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES[] =
{
    { "Shadow Dio A Life Bar Portrait", 0x07C0BA0, 0x07C0BC0 },
    { "Shadow Dio B Life Bar Portrait", 0x07C0BC0, 0x07C0BE0 },
    { "Shadow Dio C Life Bar Portrait", 0x07C1580, 0x07C15A0 },
    { "Shadow Dio S Life Bar Portrait", 0x07C15A0, 0x07C15C0 },
    { "Shadow Dio Start Life Bar Portrait", 0x07C15C0, 0x07C15E0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES[] =
{
    { "New Kakyoin A / B / Start Life Bar Portrait", 0x07C16E0, 0x07C1700 },
    { "New Kakyoin C Life Bar Portrait", 0x07C16A0, 0x07C16C0 },
    { "New Kakyoin S Life Bar Portrait", 0x07C16C0, 0x07C16E0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_APOL_PALETTES[] =
{
    { "Anubis Polnareff A Life Bar Portrait", 0x07C1700, 0x07C1720 },
    { "Anubis Polnareff B Life Bar Portrait", 0x07C1720, 0x07C1740 },
    { "Anubis Polnareff C Life Bar Portrait", 0x07C1740, 0x07C1760 },
    { "Anubis Polnareff S Life Bar Portrait", 0x07C1760, 0x07C1780 },
    { "Anubis Polnareff Start Life Bar Portrait", 0x07C1780, 0x07C17A0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES[] =
{
    { "Hol & Boingo A Life Bar Portrait", 0x07C18C0, 0x07C18E0 },
    { "Hol & Boingo B Life Bar Portrait", 0x07C18E0, 0x07C1900 },
    { "Hol & Boingo C Life Bar Portrait", 0x07C1900, 0x07C1920 },
    { "Hol & Boingo S Life Bar Portrait", 0x07C1920, 0x07C1940 },
    { "Hol & Boingo Start Life Bar Portrait", 0x07C1940, 0x07C1960 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES[] =
{
    { "Rubber Soul A Life Bar Portrait", 0x07C1960, 0x07C1980 },
    { "Rubber Soul B Life Bar Portrait", 0x07C1980, 0x07C19A0 },
    { "Rubber Soul C Life Bar Portrait", 0x07C19A0, 0x07C19C0 },
    { "Rubber Soul S Life Bar Portrait", 0x07C19C0, 0x07C19E0 },
    { "Rubber Soul Start Life Bar Portrait", 0x07C19E0, 0x07C1A00 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES[] =
{
    { "Khan A Life Bar Portrait", 0x07C1A00, 0x07C1A20 },
    { "Khan B Life Bar Portrait", 0x07C1A20, 0x07C1A40 },
    { "Khan C Life Bar Portrait", 0x07C1A40, 0x07C1A60 },
    { "Khan S Life Bar Portrait", 0x07C1A60, 0x07C1A80 },
    { "Khan Start Life Bar Portrait", 0x07C1A80, 0x07C1AA0 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES[] =
{
    { "Death 13 A Life Bar Portrait", 0x07C0800, 0x07C0820 },
    { "Death 13 B Life Bar Portrait", 0x07C0820, 0x07C0840 },
};

const sGame_PaletteDataset JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES[] =
{
    { "N'Doul A Life Bar Portrait", 0x07C0840, 0x07C0860 },
    { "N'Doul B Life Bar Portrait", 0x07C0860, 0x07C0880 },
};

const sDescTreeNode JOJOS_HUD_PORTRAIT_COLLECTION[]
{
    { "Jotaro", DESC_NODETYPE_TREE, (void *)JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOTARO_PALETTES) },
    { "Kakyoin", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KAKYOIN_PALETTES) },
    { "Dio", DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_DIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DIO_PALETTES) },
    { "Chaka", DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_CHAKA_PALETTES) },
    { "Iggy", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_IGGY_PALETTES) },
    { "Petshop", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_PETSHOP_PALETTES) },
    { "Polnareff", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_POLNAREFF_PALETTES) },
    { "Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_JOSEPH_PALETTES) },
    { "Avdol", DESC_NODETYPE_TREE,  (void*)JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ABDUL_PALETTES) },
    { "Alessi", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_ALESSI_PALETTES) },
    { "Devo", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEVO_PALETTES) },
    { "Vanilla Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_VANILLA_PALETTES) },
    { "Hol Horse", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOL_PALETTES) },
    { "Midler", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MIDLER_PALETTES) },
    { "Mariah", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_MARIAH_PALETTES) },
    { "Young Joseph", DESC_NODETYPE_TREE,(void*)JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_YJOSEPH_PALETTES) },
    { "Shadow Dio", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_SDIO_PALETTES) },
    { "New Kakyoin", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NKAKYOIN_PALETTES) },
    { "Anubis Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_APOL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_APOL_PALETTES) },
    { "Hol & Boingo", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_HOLB_PALETTES) },
    { "Rubber Soul", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_RSOUL_PALETTES) },
    { "Khan", DESC_NODETYPE_TREE,       (void*)JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_KHAN_PALETTES) },
    { "Death 13", DESC_NODETYPE_TREE,   (void*)JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_DEATH_PALETTES) },
    { "N'Doul",  DESC_NODETYPE_TREE,    (void*)JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES, ARRAYSIZE(JOJOS_A_HUD_PORTRAIT_NDOUL_PALETTES) },
};

#pragma endregion HUD Portraits

#pragma region HUD
const sGame_PaletteDataset JOJOS_A_HUD_PALETTE_NODES[] =
{
    { "Round Markers", 0x07C0160, 0x07C0180 },
    { "Timer", 0x07C00C0, 0x07C00E0 },
    { "Lifebar", 0x07C01E0, 0x07C0200 },
    { "Stand Meter", 0x07C0200, 0x07C0220 },
    { "Stand Text Under The Stand Gauge", 0x07C0320, 0x07C0340 },
    { "Combo Meter", 0x07C01C0, 0x07C01E0 },
    { "Combo Messages", 0x07C0220, 0x07C0240 },
    { "Text Above The Lifebars",  0x07C0280, 0x07C02A0 },
    { "Stand Crash / First Hit / Etc. Messages", 0x07C0340, 0x07C0360 },
    { "Stand Meter / Near Stand Break", 0x07C0B20, 0x07C0B80 },
    { "Super Meter Bar", 0x07C03A0, 0x07C0400 },
    { "Mariah Level (Player 1 only)", 0x07C01A0, 0x07C01C0 },
    { "Dev-menu Font Color", 0x07C0000, 0x07C0020 },
};

const sDescTreeNode JOJOS_HUD_COLLECTION[]
{
    { "Palette", DESC_NODETYPE_TREE, (void*)JOJOS_A_HUD_PALETTE_NODES, ARRAYSIZE(JOJOS_A_HUD_PALETTE_NODES) },
};
#pragma endregion HUD

#pragma region Stages

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_ALOCKUP[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Lockup (1/27)", 0x07c3000, 0x07c3080 },
    { "A Lockup (2/27)", 0x07c3080, 0x07c3100 },
    { "A Lockup (3/27)", 0x07c3100, 0x07c3180 },
    { "A Lockup (4/27)", 0x07c3180, 0x07c3200 },
    { "A Lockup (5/27)", 0x07c3200, 0x07c3280 },
    { "A Lockup (6/27)", 0x07c3280, 0x07c3300 },
    { "A Lockup (7/27)", 0x07c3300, 0x07c3380 },
    { "A Lockup (8/27)", 0x07c3380, 0x07c3400 },
    { "A Lockup (9/27)", 0x07c3400, 0x07c3480 },
    { "A Lockup (10/27)", 0x07c3480, 0x07c3500 },
    { "A Lockup (11/27)", 0x07c3500, 0x07c3580 },
    { "A Lockup (12/27)", 0x07c3580, 0x07c3600 },
    { "A Lockup (13/27)", 0x07c3600, 0x07c3680 },
    { "A Lockup (14/27)", 0x07c3680, 0x07c3700 },
    { "A Lockup (15/27)", 0x07c3700, 0x07c3780 },
    { "A Lockup (16/27)", 0x07c3780, 0x07c3800 },
    { "A Lockup (17/27)", 0x07c3800, 0x07c3880 },
    { "A Lockup (18/27)", 0x07c3880, 0x07c3900 },
    { "A Lockup (19/27)", 0x07c3900, 0x07c3980 },
    { "A Lockup (20/27)", 0x07c3980, 0x07c3a00 },
    { "A Lockup (21/27)", 0x07c3a00, 0x07c3a80 },
    { "A Lockup (22/27)", 0x07c3a80, 0x07c3b00 },
    { "A Lockup (23/27)", 0x07c3b00, 0x07c3b80 },
    { "A Lockup (24/27)", 0x07c3b80, 0x07c3c00 },
    { "A Lockup (25/27)", 0x07c3c00, 0x07c3c80 },
    { "A Lockup (26/27)", 0x07c3c80, 0x07c3d00 },
    { "A Lockup (27/27)", 0x07c3d00, 0x07c3d80 },
#else
    { "A Lockup", 0x07c3000, 0x07c3d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AHEALTHROOM[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Health Room (1/22)", 0x07c3e00, 0x07c3e80 },
    { "A Health Room (2/22)", 0x07c3e80, 0x07c3f00 },
    { "A Health Room (3/22)", 0x07c3f00, 0x07c3f80 },
    { "A Health Room (4/22)", 0x07c3f80, 0x07c4000 },
    { "A Health Room (5/22)", 0x07c4000, 0x07c4080 },
    { "A Health Room (6/22)", 0x07c4080, 0x07c4100 },
    { "A Health Room (7/22)", 0x07c4100, 0x07c4180 },
    { "A Health Room (8/22)", 0x07c4180, 0x07c4200 },
    { "A Health Room (9/22)", 0x07c4200, 0x07c4280 },
    { "A Health Room (10/22)", 0x07c4280, 0x07c4300 },
    { "A Health Room (11/22)", 0x07c4300, 0x07c4380 },
    { "A Health Room (12/22)", 0x07c4380, 0x07c4400 },
    { "A Health Room (13/22)", 0x07c4400, 0x07c4480 },
    { "A Health Room (14/22)", 0x07c4480, 0x07c4500 },
    { "A Health Room (15/22)", 0x07c4500, 0x07c4580 },
    { "A Health Room (16/22)", 0x07c4580, 0x07c4600 },
    { "A Health Room (17/22)", 0x07c4600, 0x07c4680 },
    { "A Health Room (18/22)", 0x07c4680, 0x07c4700 },
    { "A Health Room (19/22)", 0x07c4700, 0x07c4780 },
    { "A Health Room (20/22)", 0x07c4780, 0x07c4800 },
    { "A Health Room (21/22)", 0x07c4800, 0x07c4880 },
    { "A Health Room (22/22)", 0x07c4880, 0x07c4900 },
#else
    { "A Health Room", 0x07c3e00, 0x07c4900 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AIRPLANE[] =
{
#ifndef USE_LARGE_PALETTES
    { "In A Airplane (1/67)", 0x07c4a00, 0x07c4a80 },
    { "In A Airplane (2/67)", 0x07c4a80, 0x07c4b00 },
    { "In A Airplane (3/67)", 0x07c4b00, 0x07c4b80 },
    { "In A Airplane (4/67)", 0x07c4b80, 0x07c4c00 },
    { "In A Airplane (5/67)", 0x07c4c00, 0x07c4c80 },
    { "In A Airplane (6/67)", 0x07c4c80, 0x07c4d00 },
    { "In A Airplane (7/67)", 0x07c4d00, 0x07c4d80 },
    { "In A Airplane (8/67)", 0x07c4d80, 0x07c4e00 },
    { "In A Airplane (9/67)", 0x07c4e00, 0x07c4e80 },
    { "In A Airplane (10/67)", 0x07c4e80, 0x07c4f00 },
    { "In A Airplane (11/67)", 0x07c4f00, 0x07c4f80 },
    { "In A Airplane (12/67)", 0x07c4f80, 0x07c5000 },
    { "In A Airplane (13/67)", 0x07c5000, 0x07c5080 },
    { "In A Airplane (14/67)", 0x07c5080, 0x07c5100 },
    { "In A Airplane (15/67)", 0x07c5100, 0x07c5180 },
    { "In A Airplane (16/67)", 0x07c5180, 0x07c5200 },
    { "In A Airplane (17/67)", 0x07c5200, 0x07c5280 },
    { "In A Airplane (18/67)", 0x07c5280, 0x07c5300 },
    { "In A Airplane (19/67)", 0x07c5300, 0x07c5380 },
    { "In A Airplane (20/67)", 0x07c5380, 0x07c5400 },
    { "In A Airplane (21/67)", 0x07c5400, 0x07c5480 },
    { "In A Airplane (22/67)", 0x07c5480, 0x07c5500 },
    { "In A Airplane (23/67)", 0x07c5500, 0x07c5580 },
    { "In A Airplane (24/67)", 0x07c5580, 0x07c5600 },
    { "In A Airplane (25/67)", 0x07c5600, 0x07c5680 },
    { "In A Airplane (26/67)", 0x07c5680, 0x07c5700 },
    { "In A Airplane (27/67)", 0x07c5700, 0x07c5780 },
    { "In A Airplane (28/67)", 0x07c5780, 0x07c5800 },
    { "In A Airplane (29/67)", 0x07c5800, 0x07c5880 },
    { "In A Airplane (30/67)", 0x07c5880, 0x07c5900 },
    { "In A Airplane (31/67)", 0x07c5900, 0x07c5980 },
    { "In A Airplane (32/67)", 0x07c5980, 0x07c5a00 },
    { "In A Airplane (33/67)", 0x07c5a00, 0x07c5a80 },
    { "In A Airplane (34/67)", 0x07c5a80, 0x07c5b00 },
    { "In A Airplane (35/67)", 0x07c5b00, 0x07c5b80 },
    { "In A Airplane (36/67)", 0x07c5b80, 0x07c5c00 },
    { "In A Airplane (37/67)", 0x07c5c00, 0x07c5c80 },
    { "In A Airplane (38/67)", 0x07c5c80, 0x07c5d00 },
    { "In A Airplane (39/67)", 0x07c5d00, 0x07c5d80 },
    { "In A Airplane (40/67)", 0x07c5d80, 0x07c5e00 },
    { "In A Airplane (41/67)", 0x07c5e00, 0x07c5e80 },
    { "In A Airplane (42/67)", 0x07c5e80, 0x07c5f00 },
    { "In A Airplane (43/67)", 0x07c5f00, 0x07c5f80 },
    { "In A Airplane (44/67)", 0x07c5f80, 0x07c6000 },
    { "In A Airplane (45/67)", 0x07c6000, 0x07c6080 },
    { "In A Airplane (46/67)", 0x07c6080, 0x07c6100 },
    { "In A Airplane (47/67)", 0x07c6100, 0x07c6180 },
    { "In A Airplane (48/67)", 0x07c6180, 0x07c6200 },
    { "In A Airplane (49/67)", 0x07c6200, 0x07c6280 },
    { "In A Airplane (50/67)", 0x07c6280, 0x07c6300 },
    { "In A Airplane (51/67)", 0x07c6300, 0x07c6380 },
    { "In A Airplane (52/67)", 0x07c6380, 0x07c6400 },
    { "In A Airplane (53/67)", 0x07c6400, 0x07c6480 },
    { "In A Airplane (54/67)", 0x07c6480, 0x07c6500 },
    { "In A Airplane (55/67)", 0x07c6500, 0x07c6580 },
    { "In A Airplane (56/67)", 0x07c6580, 0x07c6600 },
    { "In A Airplane (57/67)", 0x07c6600, 0x07c6680 },
    { "In A Airplane (58/67)", 0x07c6680, 0x07c6700 },
    { "In A Airplane (59/67)", 0x07c6700, 0x07c6780 },
    { "In A Airplane (60/67)", 0x07c6780, 0x07c6800 },
    { "In A Airplane (61/67)", 0x07c6800, 0x07c6880 },
    { "In A Airplane (62/67)", 0x07c6880, 0x07c6900 },
    { "In A Airplane (63/67)", 0x07c6900, 0x07c6980 },
    { "In A Airplane (64/67)", 0x07c6980, 0x07c6a00 },
    { "In A Airplane (65/67)", 0x07c6a00, 0x07c6a80 },
    { "In A Airplane (66/67)", 0x07c6a80, 0x07c6b00 },
    { "In A Airplane (67/67)", 0x07c6b00, 0x07c6b80 },
#else
    { "In A Airplane", 0x07c4a00, 0x07c6b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_TGARDEN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Tigerbaum Garden (1/44)", 0x07c6c00, 0x07c6c80 },
    { "Tigerbaum Garden (2/44)", 0x07c6c80, 0x07c6d00 },
    { "Tigerbaum Garden (3/44)", 0x07c6d00, 0x07c6d80 },
    { "Tigerbaum Garden (4/44)", 0x07c6d80, 0x07c6e00 },
    { "Tigerbaum Garden (5/44)", 0x07c6e00, 0x07c6e80 },
    { "Tigerbaum Garden (6/44)", 0x07c6e80, 0x07c6f00 },
    { "Tigerbaum Garden (7/44)", 0x07c6f00, 0x07c6f80 },
    { "Tigerbaum Garden (8/44)", 0x07c6f80, 0x07c7000 },
    { "Tigerbaum Garden (9/44)", 0x07c7000, 0x07c7080 },
    { "Tigerbaum Garden (10/44)", 0x07c7080, 0x07c7100 },
    { "Tigerbaum Garden (11/44)", 0x07c7100, 0x07c7180 },
    { "Tigerbaum Garden (12/44)", 0x07c7180, 0x07c7200 },
    { "Tigerbaum Garden (13/44)", 0x07c7200, 0x07c7280 },
    { "Tigerbaum Garden (14/44)", 0x07c7280, 0x07c7300 },
    { "Tigerbaum Garden (15/44)", 0x07c7300, 0x07c7380 },
    { "Tigerbaum Garden (16/44)", 0x07c7380, 0x07c7400 },
    { "Tigerbaum Garden (17/44)", 0x07c7400, 0x07c7480 },
    { "Tigerbaum Garden (18/44)", 0x07c7480, 0x07c7500 },
    { "Tigerbaum Garden (19/44)", 0x07c7500, 0x07c7580 },
    { "Tigerbaum Garden (20/44)", 0x07c7580, 0x07c7600 },
    { "Tigerbaum Garden (21/44)", 0x07c7600, 0x07c7680 },
    { "Tigerbaum Garden (22/44)", 0x07c7680, 0x07c7700 },
    { "Tigerbaum Garden (23/44)", 0x07c7700, 0x07c7780 },
    { "Tigerbaum Garden (24/44)", 0x07c7780, 0x07c7800 },
    { "Tigerbaum Garden (25/44)", 0x07c7800, 0x07c7880 },
    { "Tigerbaum Garden (26/44)", 0x07c7880, 0x07c7900 },
    { "Tigerbaum Garden (27/44)", 0x07c7900, 0x07c7980 },
    { "Tigerbaum Garden (28/44)", 0x07c7980, 0x07c7a00 },
    { "Tigerbaum Garden (29/44)", 0x07c7a00, 0x07c7a80 },
    { "Tigerbaum Garden (30/44)", 0x07c7a80, 0x07c7b00 },
    { "Tigerbaum Garden (31/44)", 0x07c7b00, 0x07c7b80 },
    { "Tigerbaum Garden (32/44)", 0x07c7b80, 0x07c7c00 },
    { "Tigerbaum Garden (33/44)", 0x07c7c00, 0x07c7c80 },
    { "Tigerbaum Garden (34/44)", 0x07c7c80, 0x07c7d00 },
    { "Tigerbaum Garden (35/44)", 0x07c7d00, 0x07c7d80 },
    { "Tigerbaum Garden (36/44)", 0x07c7d80, 0x07c7e00 },
    { "Tigerbaum Garden (37/44)", 0x07c7e00, 0x07c7e80 },
    { "Tigerbaum Garden (38/44)", 0x07c7e80, 0x07c7f00 },
    { "Tigerbaum Garden (39/44)", 0x07c7f00, 0x07c7f80 },
    { "Tigerbaum Garden (40/44)", 0x07c7f80, 0x07c8000 },
    { "Tigerbaum Garden (41/44)", 0x07c8000, 0x07c8080 },
    { "Tigerbaum Garden (42/44)", 0x07c8080, 0x07c8100 },
    { "Tigerbaum Garden (43/44)", 0x07c8100, 0x07c8180 },
    { "Tigerbaum Garden (44/44)", 0x07c8180, 0x07c8200 },
#else
    { "Tigerbaum Garden", 0x07c6c00, 0x07c8200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELD[] =
{
#ifndef USE_LARGE_PALETTES
    { "Hotel (Devil) (1/27)", 0x07c8300, 0x07c8380 },
    { "Hotel (Devil) (2/27)", 0x07c8380, 0x07c8400 },
    { "Hotel (Devil) (3/27)", 0x07c8400, 0x07c8480 },
    { "Hotel (Devil) (4/27)", 0x07c8480, 0x07c8500 },
    { "Hotel (Devil) (5/27)", 0x07c8500, 0x07c8580 },
    { "Hotel (Devil) (6/27)", 0x07c8580, 0x07c8600 },
    { "Hotel (Devil) (7/27)", 0x07c8600, 0x07c8680 },
    { "Hotel (Devil) (8/27)", 0x07c8680, 0x07c8700 },
    { "Hotel (Devil) (9/27)", 0x07c8700, 0x07c8780 },
    { "Hotel (Devil) (10/27)", 0x07c8780, 0x07c8800 },
    { "Hotel (Devil) (11/27)", 0x07c8800, 0x07c8880 },
    { "Hotel (Devil) (12/27)", 0x07c8880, 0x07c8900 },
    { "Hotel (Devil) (13/27)", 0x07c8900, 0x07c8980 },
    { "Hotel (Devil) (14/27)", 0x07c8980, 0x07c8a00 },
    { "Hotel (Devil) (15/27)", 0x07c8a00, 0x07c8a80 },
    { "Hotel (Devil) (16/27)", 0x07c8a80, 0x07c8b00 },
    { "Hotel (Devil) (17/27)", 0x07c8b00, 0x07c8b80 },
    { "Hotel (Devil) (18/27)", 0x07c8b80, 0x07c8c00 },
    { "Hotel (Devil) (19/27)", 0x07c8c00, 0x07c8c80 },
    { "Hotel (Devil) (20/27)", 0x07c8c80, 0x07c8d00 },
    { "Hotel (Devil) (21/27)", 0x07c8d00, 0x07c8d80 },
    { "Hotel (Devil) (22/27)", 0x07c8d80, 0x07c8e00 },
    { "Hotel (Devil) (23/27)", 0x07c8e00, 0x07c8e80 },
    { "Hotel (Devil) (24/27)", 0x07c8e80, 0x07c8f00 },
    { "Hotel (Devil) (25/27)", 0x07c8f00, 0x07c8f80 },
    { "Hotel (Devil) (26/27)", 0x07c8f80, 0x07c9000 },
    { "Hotel (Devil) (27/27)", 0x07c9000, 0x07c9080 },
#else
    { "Hotel (Devil)", 0x07c8300, 0x07c9080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_REMAINS[] =
{
#ifndef USE_LARGE_PALETTES
    { "Remains (1/36)", 0x07c9f80, 0x07ca000 },
    { "Remains (2/36)", 0x07ca000, 0x07ca080 },
    { "Remains (3/36)", 0x07ca080, 0x07ca100 },
    { "Remains (4/36)", 0x07ca100, 0x07ca180 },
    { "Remains (5/36)", 0x07ca180, 0x07ca200 },
    { "Remains (6/36)", 0x07ca200, 0x07ca280 },
    { "Remains (7/36)", 0x07ca280, 0x07ca300 },
    { "Remains (8/36)", 0x07ca300, 0x07ca380 },
    { "Remains (9/36)", 0x07ca380, 0x07ca400 },
    { "Remains (10/36)", 0x07ca400, 0x07ca480 },
    { "Remains (11/36)", 0x07ca480, 0x07ca500 },
    { "Remains (12/36)", 0x07ca500, 0x07ca580 },
    { "Remains (13/36)", 0x07ca580, 0x07ca600 },
    { "Remains (14/36)", 0x07ca600, 0x07ca680 },
    { "Remains (15/36)", 0x07ca680, 0x07ca700 },
    { "Remains (16/36)", 0x07ca700, 0x07ca780 },
    { "Remains (17/36)", 0x07ca780, 0x07ca800 },
    { "Remains (18/36)", 0x07ca800, 0x07ca880 },
    { "Remains (19/36)", 0x07ca880, 0x07ca900 },
    { "Remains (20/36)", 0x07ca900, 0x07ca980 },
    { "Remains (21/36)", 0x07ca980, 0x07caa00 },
    { "Remains (22/36)", 0x07caa00, 0x07caa80 },
    { "Remains (23/36)", 0x07caa80, 0x07cab00 },
    { "Remains (24/36)", 0x07cab00, 0x07cab80 },
    { "Remains (25/36)", 0x07cab80, 0x07cac00 },
    { "Remains (26/36)", 0x07cac00, 0x07cac80 },
    { "Remains (27/36)", 0x07cac80, 0x07cad00 },
    { "Remains (28/36)", 0x07cad00, 0x07cad80 },
    { "Remains (29/36)", 0x07cad80, 0x07cae00 },
    { "Remains (30/36)", 0x07cae00, 0x07cae80 },
    { "Remains (31/36)", 0x07cae80, 0x07caf00 },
    { "Remains (32/36)", 0x07caf00, 0x07caf80 },
    { "Remains (33/36)", 0x07caf80, 0x07cb000 },
    { "Remains (34/36)", 0x07cb000, 0x07cb080 },
    { "Remains (35/36)", 0x07cb080, 0x07cb100 },
    { "Remains (36/36)", 0x07cb100, 0x07cb180 },
#else
    { "Remains", 0x07c9f80, 0x07cb180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_HOTELJ[] =
{
#ifndef USE_LARGE_PALETTES
    { "Hotel (Justice) (1/29)", 0x07cc500, 0x07cc580 },
    { "Hotel (Justice) (2/29)", 0x07cc580, 0x07cc600 },
    { "Hotel (Justice) (3/29)", 0x07cc600, 0x07cc680 },
    { "Hotel (Justice) (4/29)", 0x07cc680, 0x07cc700 },
    { "Hotel (Justice) (5/29)", 0x07cc700, 0x07cc780 },
    { "Hotel (Justice) (6/29)", 0x07cc780, 0x07cc800 },
    { "Hotel (Justice) (7/29)", 0x07cc800, 0x07cc880 },
    { "Hotel (Justice) (8/29)", 0x07cc880, 0x07cc900 },
    { "Hotel (Justice) (9/29)", 0x07cc900, 0x07cc980 },
    { "Hotel (Justice) (10/29)", 0x07cc980, 0x07cca00 },
    { "Hotel (Justice) (11/29)", 0x07cca00, 0x07cca80 },
    { "Hotel (Justice) (12/29)", 0x07cca80, 0x07ccb00 },
    { "Hotel (Justice) (13/29)", 0x07ccb00, 0x07ccb80 },
    { "Hotel (Justice) (14/29)", 0x07ccb80, 0x07ccc00 },
    { "Hotel (Justice) (15/29)", 0x07ccc00, 0x07ccc80 },
    { "Hotel (Justice) (16/29)", 0x07ccc80, 0x07ccd00 },
    { "Hotel (Justice) (17/29)", 0x07ccd00, 0x07ccd80 },
    { "Hotel (Justice) (18/29)", 0x07ccd80, 0x07cce00 },
    { "Hotel (Justice) (19/29)", 0x07cce00, 0x07cce80 },
    { "Hotel (Justice) (20/29)", 0x07cce80, 0x07ccf00 },
    { "Hotel (Justice) (21/29)", 0x07ccf00, 0x07ccf80 },
    { "Hotel (Justice) (22/29)", 0x07ccf80, 0x07cd000 },
    { "Hotel (Justice) (23/29)", 0x07cd000, 0x07cd080 },
    { "Hotel (Justice) (24/29)", 0x07cd080, 0x07cd100 },
    { "Hotel (Justice) (25/29)", 0x07cd100, 0x07cd180 },
    { "Hotel (Justice) (26/29)", 0x07cd180, 0x07cd200 },
    { "Hotel (Justice) (27/29)", 0x07cd200, 0x07cd280 },
    { "Hotel (Justice) (28/29)", 0x07cd280, 0x07cd300 },
    { "Hotel (Justice) (29/29)", 0x07cd300, 0x07cd380 },
#else
    { "Hotel (Justice)", 0x07cc500, 0x07cd380 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_AMPARK[] =
{
#ifndef USE_LARGE_PALETTES
    { "Amusement Park (1/106)", 0x07cd400, 0x07cd480 },
    { "Amusement Park (2/106)", 0x07cd480, 0x07cd500 },
    { "Amusement Park (3/106)", 0x07cd500, 0x07cd580 },
    { "Amusement Park (4/106)", 0x07cd580, 0x07cd600 },
    { "Amusement Park (5/106)", 0x07cd600, 0x07cd680 },
    { "Amusement Park (6/106)", 0x07cd680, 0x07cd700 },
    { "Amusement Park (7/106)", 0x07cd700, 0x07cd780 },
    { "Amusement Park (8/106)", 0x07cd780, 0x07cd800 },
    { "Amusement Park (9/106)", 0x07cd800, 0x07cd880 },
    { "Amusement Park (10/106)", 0x07cd880, 0x07cd900 },
    { "Amusement Park (11/106)", 0x07cd900, 0x07cd980 },
    { "Amusement Park (12/106)", 0x07cd980, 0x07cda00 },
    { "Amusement Park (13/106)", 0x07cda00, 0x07cda80 },
    { "Amusement Park (14/106)", 0x07cda80, 0x07cdb00 },
    { "Amusement Park (15/106)", 0x07cdb00, 0x07cdb80 },
    { "Amusement Park (16/106)", 0x07cdb80, 0x07cdc00 },
    { "Amusement Park (17/106)", 0x07cdc00, 0x07cdc80 },
    { "Amusement Park (18/106)", 0x07cdc80, 0x07cdd00 },
    { "Amusement Park (19/106)", 0x07cdd00, 0x07cdd80 },
    { "Amusement Park (20/106)", 0x07cdd80, 0x07cde00 },
    { "Amusement Park (21/106)", 0x07cde00, 0x07cde80 },
    { "Amusement Park (22/106)", 0x07cde80, 0x07cdf00 },
    { "Amusement Park (23/106)", 0x07cdf00, 0x07cdf80 },
    { "Amusement Park (24/106)", 0x07cdf80, 0x07ce000 },
    { "Amusement Park (25/106)", 0x07ce000, 0x07ce080 },
    { "Amusement Park (26/106)", 0x07ce080, 0x07ce100 },
    { "Amusement Park (27/106)", 0x07ce100, 0x07ce180 },
    { "Amusement Park (28/106)", 0x07ce180, 0x07ce200 },
    { "Amusement Park (29/106)", 0x07ce200, 0x07ce280 },
    { "Amusement Park (30/106)", 0x07ce280, 0x07ce300 },
    { "Amusement Park (31/106)", 0x07ce300, 0x07ce380 },
    { "Amusement Park (32/106)", 0x07ce380, 0x07ce400 },
    { "Amusement Park (33/106)", 0x07ce400, 0x07ce480 },
    { "Amusement Park (34/106)", 0x07ce480, 0x07ce500 },
    { "Amusement Park (35/106)", 0x07ce500, 0x07ce580 },
    { "Amusement Park (36/106)", 0x07ce580, 0x07ce600 },
    { "Amusement Park (37/106)", 0x07ce600, 0x07ce680 },
    { "Amusement Park (38/106)", 0x07ce680, 0x07ce700 },
    { "Amusement Park (39/106)", 0x07ce700, 0x07ce780 },
    { "Amusement Park (40/106)", 0x07ce780, 0x07ce800 },
    { "Amusement Park (41/106)", 0x07ce800, 0x07ce880 },
    { "Amusement Park (42/106)", 0x07ce880, 0x07ce900 },
    { "Amusement Park (43/106)", 0x07ce900, 0x07ce980 },
    { "Amusement Park (44/106)", 0x07ce980, 0x07cea00 },
    { "Amusement Park (45/106)", 0x07cea00, 0x07cea80 },
    { "Amusement Park (46/106)", 0x07cea80, 0x07ceb00 },
    { "Amusement Park (47/106)", 0x07ceb00, 0x07ceb80 },
    { "Amusement Park (48/106)", 0x07ceb80, 0x07cec00 },
    { "Amusement Park (49/106)", 0x07cec00, 0x07cec80 },
    { "Amusement Park (50/106)", 0x07cec80, 0x07ced00 },
    { "Amusement Park (51/106)", 0x07ced00, 0x07ced80 },
    { "Amusement Park (52/106)", 0x07ced80, 0x07cee00 },
    { "Amusement Park (53/106)", 0x07cee00, 0x07cee80 },
    { "Amusement Park (54/106)", 0x07cee80, 0x07cef00 },
    { "Amusement Park (55/106)", 0x07cef00, 0x07cef80 },
    { "Amusement Park (56/106)", 0x07cef80, 0x07cf000 },
    { "Amusement Park (57/106)", 0x07cf000, 0x07cf080 },
    { "Amusement Park (58/106)", 0x07cf080, 0x07cf100 },
    { "Amusement Park (59/106)", 0x07cf100, 0x07cf180 },
    { "Amusement Park (60/106)", 0x07cf180, 0x07cf200 },
    { "Amusement Park (61/106)", 0x07cf200, 0x07cf280 },
    { "Amusement Park (62/106)", 0x07cf280, 0x07cf300 },
    { "Amusement Park (63/106)", 0x07cf300, 0x07cf380 },
    { "Amusement Park (64/106)", 0x07cf380, 0x07cf400 },
    { "Amusement Park (65/106)", 0x07cf400, 0x07cf480 },
    { "Amusement Park (66/106)", 0x07cf480, 0x07cf500 },
    { "Amusement Park (67/106)", 0x07cf500, 0x07cf580 },
    { "Amusement Park (68/106)", 0x07cf580, 0x07cf600 },
    { "Amusement Park (69/106)", 0x07cf600, 0x07cf680 },
    { "Amusement Park (70/106)", 0x07cf680, 0x07cf700 },
    { "Amusement Park (71/106)", 0x07cf700, 0x07cf780 },
    { "Amusement Park (72/106)", 0x07cf780, 0x07cf800 },
    { "Amusement Park (73/106)", 0x07cf800, 0x07cf880 },
    { "Amusement Park (74/106)", 0x07cf880, 0x07cf900 },
    { "Amusement Park (75/106)", 0x07cf900, 0x07cf980 },
    { "Amusement Park (76/106)", 0x07cf980, 0x07cfa00 },
    { "Amusement Park (77/106)", 0x07cfa00, 0x07cfa80 },
    { "Amusement Park (78/106)", 0x07cfa80, 0x07cfb00 },
    { "Amusement Park (79/106)", 0x07cfb00, 0x07cfb80 },
    { "Amusement Park (80/106)", 0x07cfb80, 0x07cfc00 },
    { "Amusement Park (81/106)", 0x07cfc00, 0x07cfc80 },
    { "Amusement Park (82/106)", 0x07cfc80, 0x07cfd00 },
    { "Amusement Park (83/106)", 0x07cfd00, 0x07cfd80 },
    { "Amusement Park (84/106)", 0x07cfd80, 0x07cfe00 },
    { "Amusement Park (85/106)", 0x07cfe00, 0x07cfe80 },
    { "Amusement Park (86/106)", 0x07cfe80, 0x07cff00 },
    { "Amusement Park (87/106)", 0x07cff00, 0x07cff80 },
    { "Amusement Park (88/106)", 0x07cff80, 0x07d0000 },
    { "Amusement Park (89/106)", 0x07d0000, 0x07d0080 },
    { "Amusement Park (90/106)", 0x07d0080, 0x07d0100 },
    { "Amusement Park (91/106)", 0x07d0100, 0x07d0180 },
    { "Amusement Park (92/106)", 0x07d0180, 0x07d0200 },
    { "Amusement Park (93/106)", 0x07d0200, 0x07d0280 },
    { "Amusement Park (94/106)", 0x07d0280, 0x07d0300 },
    { "Amusement Park (95/106)", 0x07d0300, 0x07d0380 },
    { "Amusement Park (96/106)", 0x07d0380, 0x07d0400 },
    { "Amusement Park (97/106)", 0x07d0400, 0x07d0480 },
    { "Amusement Park (98/106)", 0x07d0480, 0x07d0500 },
    { "Amusement Park (99/106)", 0x07d0500, 0x07d0580 },
    { "Amusement Park (100/106)", 0x07d0580, 0x07d0600 },
    { "Amusement Park (101/106)", 0x07d0600, 0x07d0680 },
    { "Amusement Park (102/106)", 0x07d0680, 0x07d0700 },
    { "Amusement Park (103/106)", 0x07d0700, 0x07d0780 },
    { "Amusement Park (104/106)", 0x07d0780, 0x07d0800 },
    { "Amusement Park (105/106)", 0x07d0800, 0x07d0880 },
    { "Amusement Park (106/106)", 0x07d0880, 0x07d0900 },
#else
    { "Amusement Park", 0x07cd400, 0x07d0900 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLAND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Small Island (1/24)", 0x07d0a00, 0x07d0a80 },
    { "Small Island (2/24)", 0x07d0a80, 0x07d0b00 },
    { "Small Island (3/24)", 0x07d0b00, 0x07d0b80 },
    { "Small Island (4/24)", 0x07d0b80, 0x07d0c00 },
    { "Small Island (5/24)", 0x07d0c00, 0x07d0c80 },
    { "Small Island (6/24)", 0x07d0c80, 0x07d0d00 },
    { "Small Island (7/24)", 0x07d0d00, 0x07d0d80 },
    { "Small Island (8/24)", 0x07d0d80, 0x07d0e00 },
    { "Small Island (9/24)", 0x07d0e00, 0x07d0e80 },
    { "Small Island (10/24)", 0x07d0e80, 0x07d0f00 },
    { "Small Island (11/24)", 0x07d0f00, 0x07d0f80 },
    { "Small Island (12/24)", 0x07d0f80, 0x07d1000 },
    { "Small Island (13/24)", 0x07d1000, 0x07d1080 },
    { "Small Island (14/24)", 0x07d1080, 0x07d1100 },
    { "Small Island (15/24)", 0x07d1100, 0x07d1180 },
    { "Small Island (16/24)", 0x07d1180, 0x07d1200 },
    { "Small Island (17/24)", 0x07d1200, 0x07d1280 },
    { "Small Island (18/24)", 0x07d1280, 0x07d1300 },
    { "Small Island (19/24)", 0x07d1300, 0x07d1380 },
    { "Small Island (20/24)", 0x07d1380, 0x07d1400 },
    { "Small Island (21/24)", 0x07d1400, 0x07d1480 },
    { "Small Island (22/24)", 0x07d1480, 0x07d1500 },
    { "Small Island (23/24)", 0x07d1500, 0x07d1580 },
    { "Small Island (24/24)", 0x07d1580, 0x07d1600 },
#else
    { "Small Island", 0x07d0a00, 0x07d1600 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNOON[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Noon (1/28)", 0x07d3100, 0x07d3180 },
    { "Desert Noon (2/28)", 0x07d3180, 0x07d3200 },
    { "Desert Noon (3/28)", 0x07d3200, 0x07d3280 },
    { "Desert Noon (4/28)", 0x07d3280, 0x07d3300 },
    { "Desert Noon (5/28)", 0x07d3300, 0x07d3380 },
    { "Desert Noon (6/28)", 0x07d3380, 0x07d3400 },
    { "Desert Noon (7/28)", 0x07d3400, 0x07d3480 },
    { "Desert Noon (8/28)", 0x07d3480, 0x07d3500 },
    { "Desert Noon (9/28)", 0x07d3500, 0x07d3580 },
    { "Desert Noon (10/28)", 0x07d3580, 0x07d3600 },
    { "Desert Noon (11/28)", 0x07d3600, 0x07d3680 },
    { "Desert Noon (12/28)", 0x07d3680, 0x07d3700 },
    { "Desert Noon (13/28)", 0x07d3700, 0x07d3780 },
    { "Desert Noon (14/28)", 0x07d3780, 0x07d3800 },
    { "Desert Noon (15/28)", 0x07d3800, 0x07d3880 },
    { "Desert Noon (16/28)", 0x07d3880, 0x07d3900 },
    { "Desert Noon (17/28)", 0x07d3900, 0x07d3980 },
    { "Desert Noon (18/28)", 0x07d3980, 0x07d3a00 },
    { "Desert Noon (19/28)", 0x07d3a00, 0x07d3a80 },
    { "Desert Noon (20/28)", 0x07d3a80, 0x07d3b00 },
    { "Desert Noon (21/28)", 0x07d3b00, 0x07d3b80 },
    { "Desert Noon (22/28)", 0x07d3b80, 0x07d3c00 },
    { "Desert Noon (23/28)", 0x07d3c00, 0x07d3c80 },
    { "Desert Noon (24/28)", 0x07d3c80, 0x07d3d00 },
    { "Desert Noon (25/28)", 0x07d3d00, 0x07d3d80 },
    { "Desert Noon (26/28)", 0x07d3d80, 0x07d3e00 },
    { "Desert Noon (27/28)", 0x07d3e00, 0x07d3e80 },
    { "Desert Noon (28/28)", 0x07d3e80, 0x07d3f00 },
#else
    { "Desert Noon", 0x07d3100, 0x07d3f00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_RUIN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Ruins (1/20)", 0x07d6d00, 0x07d6d80 },
    { "Ruins (2/20)", 0x07d6d80, 0x07d6e00 },
    { "Ruins (3/20)", 0x07d6e00, 0x07d6e80 },
    { "Ruins (4/20)", 0x07d6e80, 0x07d6f00 },
    { "Ruins (5/20)", 0x07d6f00, 0x07d6f80 },
    { "Ruins (6/20)", 0x07d6f80, 0x07d7000 },
    { "Ruins (7/20)", 0x07d7000, 0x07d7080 },
    { "Ruins (8/20)", 0x07d7080, 0x07d7100 },
    { "Ruins (9/20)", 0x07d7100, 0x07d7180 },
    { "Ruins (10/20)", 0x07d7180, 0x07d7200 },
    { "Ruins (11/20)", 0x07d7200, 0x07d7280 },
    { "Ruins (12/20)", 0x07d7280, 0x07d7300 },
    { "Ruins (13/20)", 0x07d7300, 0x07d7380 },
    { "Ruins (14/20)", 0x07d7380, 0x07d7400 },
    { "Ruins (15/20)", 0x07d7400, 0x07d7480 },
    { "Ruins (16/20)", 0x07d7480, 0x07d7500 },
    { "Ruins (17/20)", 0x07d7500, 0x07d7580 },
    { "Ruins (18/20)", 0x07d7580, 0x07d7600 },
    { "Ruins (19/20)", 0x07d7600, 0x07d7680 },
    { "Ruins (20/20)", 0x07d7680, 0x07d7700 },
#else
    { "Ruins", 0x07d6d00, 0x07d7700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNOON[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Noon (1/83)", 0x07d8300, 0x07d8380 },
    { "Country Town Noon (2/83)", 0x07d8380, 0x07d8400 },
    { "Country Town Noon (3/83)", 0x07d8400, 0x07d8480 },
    { "Country Town Noon (4/83)", 0x07d8480, 0x07d8500 },
    { "Country Town Noon (5/83)", 0x07d8500, 0x07d8580 },
    { "Country Town Noon (6/83)", 0x07d8580, 0x07d8600 },
    { "Country Town Noon (7/83)", 0x07d8600, 0x07d8680 },
    { "Country Town Noon (8/83)", 0x07d8680, 0x07d8700 },
    { "Country Town Noon (9/83)", 0x07d8700, 0x07d8780 },
    { "Country Town Noon (10/83)", 0x07d8780, 0x07d8800 },
    { "Country Town Noon (11/83)", 0x07d8800, 0x07d8880 },
    { "Country Town Noon (12/83)", 0x07d8880, 0x07d8900 },
    { "Country Town Noon (13/83)", 0x07d8900, 0x07d8980 },
    { "Country Town Noon (14/83)", 0x07d8980, 0x07d8a00 },
    { "Country Town Noon (15/83)", 0x07d8a00, 0x07d8a80 },
    { "Country Town Noon (16/83)", 0x07d8a80, 0x07d8b00 },
    { "Country Town Noon (17/83)", 0x07d8b00, 0x07d8b80 },
    { "Country Town Noon (18/83)", 0x07d8b80, 0x07d8c00 },
    { "Country Town Noon (19/83)", 0x07d8c00, 0x07d8c80 },
    { "Country Town Noon (20/83)", 0x07d8c80, 0x07d8d00 },
    { "Country Town Noon (21/83)", 0x07d8d00, 0x07d8d80 },
    { "Country Town Noon (22/83)", 0x07d8d80, 0x07d8e00 },
    { "Country Town Noon (23/83)", 0x07d8e00, 0x07d8e80 },
    { "Country Town Noon (24/83)", 0x07d8e80, 0x07d8f00 },
    { "Country Town Noon (25/83)", 0x07d8f00, 0x07d8f80 },
    { "Country Town Noon (26/83)", 0x07d8f80, 0x07d9000 },
    { "Country Town Noon (27/83)", 0x07d9000, 0x07d9080 },
    { "Country Town Noon (28/83)", 0x07d9080, 0x07d9100 },
    { "Country Town Noon (29/83)", 0x07d9100, 0x07d9180 },
    { "Country Town Noon (30/83)", 0x07d9180, 0x07d9200 },
    { "Country Town Noon (31/83)", 0x07d9200, 0x07d9280 },
    { "Country Town Noon (32/83)", 0x07d9280, 0x07d9300 },
    { "Country Town Noon (33/83)", 0x07d9300, 0x07d9380 },
    { "Country Town Noon (34/83)", 0x07d9380, 0x07d9400 },
    { "Country Town Noon (35/83)", 0x07d9400, 0x07d9480 },
    { "Country Town Noon (36/83)", 0x07d9480, 0x07d9500 },
    { "Country Town Noon (37/83)", 0x07d9500, 0x07d9580 },
    { "Country Town Noon (38/83)", 0x07d9580, 0x07d9600 },
    { "Country Town Noon (39/83)", 0x07d9600, 0x07d9680 },
    { "Country Town Noon (40/83)", 0x07d9680, 0x07d9700 },
    { "Country Town Noon (41/83)", 0x07d9700, 0x07d9780 },
    { "Country Town Noon (42/83)", 0x07d9780, 0x07d9800 },
    { "Country Town Noon (43/83)", 0x07d9800, 0x07d9880 },
    { "Country Town Noon (44/83)", 0x07d9880, 0x07d9900 },
    { "Country Town Noon (45/83)", 0x07d9900, 0x07d9980 },
    { "Country Town Noon (46/83)", 0x07d9980, 0x07d9a00 },
    { "Country Town Noon (47/83)", 0x07d9a00, 0x07d9a80 },
    { "Country Town Noon (48/83)", 0x07d9a80, 0x07d9b00 },
    { "Country Town Noon (49/83)", 0x07d9b00, 0x07d9b80 },
    { "Country Town Noon (50/83)", 0x07d9b80, 0x07d9c00 },
    { "Country Town Noon (51/83)", 0x07d9c00, 0x07d9c80 },
    { "Country Town Noon (52/83)", 0x07d9c80, 0x07d9d00 },
    { "Country Town Noon (53/83)", 0x07d9d00, 0x07d9d80 },
    { "Country Town Noon (54/83)", 0x07d9d80, 0x07d9e00 },
    { "Country Town Noon (55/83)", 0x07d9e00, 0x07d9e80 },
    { "Country Town Noon (56/83)", 0x07d9e80, 0x07d9f00 },
    { "Country Town Noon (57/83)", 0x07d9f00, 0x07d9f80 },
    { "Country Town Noon (58/83)", 0x07d9f80, 0x07da000 },
    { "Country Town Noon (59/83)", 0x07da000, 0x07da080 },
    { "Country Town Noon (60/83)", 0x07da080, 0x07da100 },
    { "Country Town Noon (61/83)", 0x07da100, 0x07da180 },
    { "Country Town Noon (62/83)", 0x07da180, 0x07da200 },
    { "Country Town Noon (63/83)", 0x07da200, 0x07da280 },
    { "Country Town Noon (64/83)", 0x07da280, 0x07da300 },
    { "Country Town Noon (65/83)", 0x07da300, 0x07da380 },
    { "Country Town Noon (66/83)", 0x07da380, 0x07da400 },
    { "Country Town Noon (67/83)", 0x07da400, 0x07da480 },
    { "Country Town Noon (68/83)", 0x07da480, 0x07da500 },
    { "Country Town Noon (69/83)", 0x07da500, 0x07da580 },
    { "Country Town Noon (70/83)", 0x07da580, 0x07da600 },
    { "Country Town Noon (71/83)", 0x07da600, 0x07da680 },
    { "Country Town Noon (72/83)", 0x07da680, 0x07da700 },
    { "Country Town Noon (73/83)", 0x07da700, 0x07da780 },
    { "Country Town Noon (74/83)", 0x07da780, 0x07da800 },
    { "Country Town Noon (75/83)", 0x07da800, 0x07da880 },
    { "Country Town Noon (76/83)", 0x07da880, 0x07da900 },
    { "Country Town Noon (77/83)", 0x07da900, 0x07da980 },
    { "Country Town Noon (78/83)", 0x07da980, 0x07daa00 },
    { "Country Town Noon (79/83)", 0x07daa00, 0x07daa80 },
    { "Country Town Noon (80/83)", 0x07daa80, 0x07dab00 },
    { "Country Town Noon (81/83)", 0x07dab00, 0x07dab80 },
    { "Country Town Noon (82/83)", 0x07dab80, 0x07dac00 },
    { "Country Town Noon (83/83)", 0x07dac00, 0x07dac80 },
#else
    { "Country Town Noon", 0x07d8300, 0x07dac80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_UWATER[] =
{
#ifndef USE_LARGE_PALETTES
    { "Underground Water (1/32)", 0x07e0100, 0x07e0180 },
    { "Underground Water (2/32)", 0x07e0180, 0x07e0200 },
    { "Underground Water (3/32)", 0x07e0200, 0x07e0280 },
    { "Underground Water (4/32)", 0x07e0280, 0x07e0300 },
    { "Underground Water (5/32)", 0x07e0300, 0x07e0380 },
    { "Underground Water (6/32)", 0x07e0380, 0x07e0400 },
    { "Underground Water (7/32)", 0x07e0400, 0x07e0480 },
    { "Underground Water (8/32)", 0x07e0480, 0x07e0500 },
    { "Underground Water (9/32)", 0x07e0500, 0x07e0580 },
    { "Underground Water (10/32)", 0x07e0580, 0x07e0600 },
    { "Underground Water (11/32)", 0x07e0600, 0x07e0680 },
    { "Underground Water (12/32)", 0x07e0680, 0x07e0700 },
    { "Underground Water (13/32)", 0x07e0700, 0x07e0780 },
    { "Underground Water (14/32)", 0x07e0780, 0x07e0800 },
    { "Underground Water (15/32)", 0x07e0800, 0x07e0880 },
    { "Underground Water (16/32)", 0x07e0880, 0x07e0900 },
    { "Underground Water (17/32)", 0x07e0900, 0x07e0980 },
    { "Underground Water (18/32)", 0x07e0980, 0x07e0a00 },
    { "Underground Water (19/32)", 0x07e0a00, 0x07e0a80 },
    { "Underground Water (20/32)", 0x07e0a80, 0x07e0b00 },
    { "Underground Water (21/32)", 0x07e0b00, 0x07e0b80 },
    { "Underground Water (22/32)", 0x07e0b80, 0x07e0c00 },
    { "Underground Water (23/32)", 0x07e0c00, 0x07e0c80 },
    { "Underground Water (24/32)", 0x07e0c80, 0x07e0d00 },
    { "Underground Water (25/32)", 0x07e0d00, 0x07e0d80 },
    { "Underground Water (26/32)", 0x07e0d80, 0x07e0e00 },
    { "Underground Water (27/32)", 0x07e0e00, 0x07e0e80 },
    { "Underground Water (28/32)", 0x07e0e80, 0x07e0f00 },
    { "Underground Water (29/32)", 0x07e0f00, 0x07e0f80 },
    { "Underground Water (30/32)", 0x07e0f80, 0x07e1000 },
    { "Underground Water (31/32)", 0x07e1000, 0x07e1080 },
    { "Underground Water (32/32)", 0x07e1080, 0x07e1100 },
#else
    { "Underground Water", 0x07e0100, 0x07e1100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_INHOUSE[] =
{
#ifndef USE_LARGE_PALETTES
    { "Inside House (1/30)", 0x07e2300, 0x07e2380 },
    { "Inside House (2/30)", 0x07e2380, 0x07e2400 },
    { "Inside House (3/30)", 0x07e2400, 0x07e2480 },
    { "Inside House (4/30)", 0x07e2480, 0x07e2500 },
    { "Inside House (5/30)", 0x07e2500, 0x07e2580 },
    { "Inside House (6/30)", 0x07e2580, 0x07e2600 },
    { "Inside House (7/30)", 0x07e2600, 0x07e2680 },
    { "Inside House (8/30)", 0x07e2680, 0x07e2700 },
    { "Inside House (9/30)", 0x07e2700, 0x07e2780 },
    { "Inside House (10/30)", 0x07e2780, 0x07e2800 },
    { "Inside House (11/30)", 0x07e2800, 0x07e2880 },
    { "Inside House (12/30)", 0x07e2880, 0x07e2900 },
    { "Inside House (13/30)", 0x07e2900, 0x07e2980 },
    { "Inside House (14/30)", 0x07e2980, 0x07e2a00 },
    { "Inside House (15/30)", 0x07e2a00, 0x07e2a80 },
    { "Inside House (16/30)", 0x07e2a80, 0x07e2b00 },
    { "Inside House (17/30)", 0x07e2b00, 0x07e2b80 },
    { "Inside House (18/30)", 0x07e2b80, 0x07e2c00 },
    { "Inside House (19/30)", 0x07e2c00, 0x07e2c80 },
    { "Inside House (20/30)", 0x07e2c80, 0x07e2d00 },
    { "Inside House (21/30)", 0x07e2d00, 0x07e2d80 },
    { "Inside House (22/30)", 0x07e2d80, 0x07e2e00 },
    { "Inside House (23/30)", 0x07e2e00, 0x07e2e80 },
    { "Inside House (24/30)", 0x07e2e80, 0x07e2f00 },
    { "Inside House (25/30)", 0x07e2f00, 0x07e2f80 },
    { "Inside House (26/30)", 0x07e2f80, 0x07e3000 },
    { "Inside House (27/30)", 0x07e3000, 0x07e3080 },
    { "Inside House (28/30)", 0x07e3080, 0x07e3100 },
    { "Inside House (29/30)", 0x07e3100, 0x07e3180 },
    { "Inside House (30/30)", 0x07e3180, 0x07e3200 },
#else
    { "Inside House", 0x07e2300, 0x07e3200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CROOM[] =
{
#ifndef USE_LARGE_PALETTES
    { "Coffin Room (1/22)", 0x07e4300, 0x07e4380 },
    { "Coffin Room (2/22)", 0x07e4380, 0x07e4400 },
    { "Coffin Room (3/22)", 0x07e4400, 0x07e4480 },
    { "Coffin Room (4/22)", 0x07e4480, 0x07e4500 },
    { "Coffin Room (5/22)", 0x07e4500, 0x07e4580 },
    { "Coffin Room (6/22)", 0x07e4580, 0x07e4600 },
    { "Coffin Room (7/22)", 0x07e4600, 0x07e4680 },
    { "Coffin Room (8/22)", 0x07e4680, 0x07e4700 },
    { "Coffin Room (9/22)", 0x07e4700, 0x07e4780 },
    { "Coffin Room (10/22)", 0x07e4780, 0x07e4800 },
    { "Coffin Room (11/22)", 0x07e4800, 0x07e4880 },
    { "Coffin Room (12/22)", 0x07e4880, 0x07e4900 },
    { "Coffin Room (13/22)", 0x07e4900, 0x07e4980 },
    { "Coffin Room (14/22)", 0x07e4980, 0x07e4a00 },
    { "Coffin Room (15/22)", 0x07e4a00, 0x07e4a80 },
    { "Coffin Room (16/22)", 0x07e4a80, 0x07e4b00 },
    { "Coffin Room (17/22)", 0x07e4b00, 0x07e4b80 },
    { "Coffin Room (18/22)", 0x07e4b80, 0x07e4c00 },
    { "Coffin Room (19/22)", 0x07e4c00, 0x07e4c80 },
    { "Coffin Room (20/22)", 0x07e4c80, 0x07e4d00 },
    { "Coffin Room (21/22)", 0x07e4d00, 0x07e4d80 },
    { "Coffin Room (22/22)", 0x07e4d80, 0x07e4e00 },
#else
    { "Coffin Room", 0x07e4300, 0x07e4e00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CLOCK[] =
{
#ifndef USE_LARGE_PALETTES
    { "Clock Tower (1/12)", 0x07e5b00, 0x07e5b80 },
    { "Clock Tower (2/12)", 0x07e5b80, 0x07e5c00 },
    { "Clock Tower (3/12)", 0x07e5c00, 0x07e5c80 },
    { "Clock Tower (4/12)", 0x07e5c80, 0x07e5d00 },
    { "Clock Tower (5/12)", 0x07e5d00, 0x07e5d80 },
    { "Clock Tower (6/12)", 0x07e5d80, 0x07e5e00 },
    { "Clock Tower (7/12)", 0x07e5e00, 0x07e5e80 },
    { "Clock Tower (8/12)", 0x07e5e80, 0x07e5f00 },
    { "Clock Tower (9/12)", 0x07e5f00, 0x07e5f80 },
    { "Clock Tower (10/12)", 0x07e5f80, 0x07e6000 },
    { "Clock Tower (11/12)", 0x07e6000, 0x07e6080 },
    { "Clock Tower (12/12)", 0x07e6080, 0x07e6100 },
#else
    { "Clock Tower", 0x07e5b00, 0x07e6100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB[] =
{
#ifndef USE_LARGE_PALETTES
    { "Suburbs (1/87)", 0x07e6900, 0x07e6980 },
    { "Suburbs (2/87)", 0x07e6980, 0x07e6a00 },
    { "Suburbs (3/87)", 0x07e6a00, 0x07e6a80 },
    { "Suburbs (4/87)", 0x07e6a80, 0x07e6b00 },
    { "Suburbs (5/87)", 0x07e6b00, 0x07e6b80 },
    { "Suburbs (6/87)", 0x07e6b80, 0x07e6c00 },
    { "Suburbs (7/87)", 0x07e6c00, 0x07e6c80 },
    { "Suburbs (8/87)", 0x07e6c80, 0x07e6d00 },
    { "Suburbs (9/87)", 0x07e6d00, 0x07e6d80 },
    { "Suburbs (10/87)", 0x07e6d80, 0x07e6e00 },
    { "Suburbs (11/87)", 0x07e6e00, 0x07e6e80 },
    { "Suburbs (12/87)", 0x07e6e80, 0x07e6f00 },
    { "Suburbs (13/87)", 0x07e6f00, 0x07e6f80 },
    { "Suburbs (14/87)", 0x07e6f80, 0x07e7000 },
    { "Suburbs (15/87)", 0x07e7000, 0x07e7080 },
    { "Suburbs (16/87)", 0x07e7080, 0x07e7100 },
    { "Suburbs (17/87)", 0x07e7100, 0x07e7180 },
    { "Suburbs (18/87)", 0x07e7180, 0x07e7200 },
    { "Suburbs (19/87)", 0x07e7200, 0x07e7280 },
    { "Suburbs (20/87)", 0x07e7280, 0x07e7300 },
    { "Suburbs (21/87)", 0x07e7300, 0x07e7380 },
    { "Suburbs (22/87)", 0x07e7380, 0x07e7400 },
    { "Suburbs (23/87)", 0x07e7400, 0x07e7480 },
    { "Suburbs (24/87)", 0x07e7480, 0x07e7500 },
    { "Suburbs (25/87)", 0x07e7500, 0x07e7580 },
    { "Suburbs (26/87)", 0x07e7580, 0x07e7600 },
    { "Suburbs (27/87)", 0x07e7600, 0x07e7680 },
    { "Suburbs (28/87)", 0x07e7680, 0x07e7700 },
    { "Suburbs (29/87)", 0x07e7700, 0x07e7780 },
    { "Suburbs (30/87)", 0x07e7780, 0x07e7800 },
    { "Suburbs (31/87)", 0x07e7800, 0x07e7880 },
    { "Suburbs (32/87)", 0x07e7880, 0x07e7900 },
    { "Suburbs (33/87)", 0x07e7900, 0x07e7980 },
    { "Suburbs (34/87)", 0x07e7980, 0x07e7a00 },
    { "Suburbs (35/87)", 0x07e7a00, 0x07e7a80 },
    { "Suburbs (36/87)", 0x07e7a80, 0x07e7b00 },
    { "Suburbs (37/87)", 0x07e7b00, 0x07e7b80 },
    { "Suburbs (38/87)", 0x07e7b80, 0x07e7c00 },
    { "Suburbs (39/87)", 0x07e7c00, 0x07e7c80 },
    { "Suburbs (40/87)", 0x07e7c80, 0x07e7d00 },
    { "Suburbs (41/87)", 0x07e7d00, 0x07e7d80 },
    { "Suburbs (42/87)", 0x07e7d80, 0x07e7e00 },
    { "Suburbs (43/87)", 0x07e7e00, 0x07e7e80 },
    { "Suburbs (44/87)", 0x07e7e80, 0x07e7f00 },
    { "Suburbs (45/87)", 0x07e7f00, 0x07e7f80 },
    { "Suburbs (46/87)", 0x07e7f80, 0x07e8000 },
    { "Suburbs (47/87)", 0x07e8000, 0x07e8080 },
    { "Suburbs (48/87)", 0x07e8080, 0x07e8100 },
    { "Suburbs (49/87)", 0x07e8100, 0x07e8180 },
    { "Suburbs (50/87)", 0x07e8180, 0x07e8200 },
    { "Suburbs (51/87)", 0x07e8200, 0x07e8280 },
    { "Suburbs (52/87)", 0x07e8280, 0x07e8300 },
    { "Suburbs (53/87)", 0x07e8300, 0x07e8380 },
    { "Suburbs (54/87)", 0x07e8380, 0x07e8400 },
    { "Suburbs (55/87)", 0x07e8400, 0x07e8480 },
    { "Suburbs (56/87)", 0x07e8480, 0x07e8500 },
    { "Suburbs (57/87)", 0x07e8500, 0x07e8580 },
    { "Suburbs (58/87)", 0x07e8580, 0x07e8600 },
    { "Suburbs (59/87)", 0x07e8600, 0x07e8680 },
    { "Suburbs (60/87)", 0x07e8680, 0x07e8700 },
    { "Suburbs (61/87)", 0x07e8700, 0x07e8780 },
    { "Suburbs (62/87)", 0x07e8780, 0x07e8800 },
    { "Suburbs (63/87)", 0x07e8800, 0x07e8880 },
    { "Suburbs (64/87)", 0x07e8880, 0x07e8900 },
    { "Suburbs (65/87)", 0x07e8900, 0x07e8980 },
    { "Suburbs (66/87)", 0x07e8980, 0x07e8a00 },
    { "Suburbs (67/87)", 0x07e8a00, 0x07e8a80 },
    { "Suburbs (68/87)", 0x07e8a80, 0x07e8b00 },
    { "Suburbs (69/87)", 0x07e8b00, 0x07e8b80 },
    { "Suburbs (70/87)", 0x07e8b80, 0x07e8c00 },
    { "Suburbs (71/87)", 0x07e8c00, 0x07e8c80 },
    { "Suburbs (72/87)", 0x07e8c80, 0x07e8d00 },
    { "Suburbs (73/87)", 0x07e8d00, 0x07e8d80 },
    { "Suburbs (74/87)", 0x07e8d80, 0x07e8e00 },
    { "Suburbs (75/87)", 0x07e8e00, 0x07e8e80 },
    { "Suburbs (76/87)", 0x07e8e80, 0x07e8f00 },
    { "Suburbs (77/87)", 0x07e8f00, 0x07e8f80 },
    { "Suburbs (78/87)", 0x07e8f80, 0x07e9000 },
    { "Suburbs (79/87)", 0x07e9000, 0x07e9080 },
    { "Suburbs (80/87)", 0x07e9080, 0x07e9100 },
    { "Suburbs (81/87)", 0x07e9100, 0x07e9180 },
    { "Suburbs (82/87)", 0x07e9180, 0x07e9200 },
    { "Suburbs (83/87)", 0x07e9200, 0x07e9280 },
    { "Suburbs (84/87)", 0x07e9280, 0x07e9300 },
    { "Suburbs (85/87)", 0x07e9300, 0x07e9380 },
    { "Suburbs (86/87)", 0x07e9380, 0x07e9400 },
    { "Suburbs (87/87)", 0x07e9400, 0x07e9480 },
#else
    { "Suburbs", 0x07e6900, 0x07e9480 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_OTBRIDGE[] =
{
#ifndef USE_LARGE_PALETTES
    { "On The Bridge (1/8)", 0x07eed00, 0x07eed80 },
    { "On The Bridge (2/8)", 0x07eed80, 0x07eee00 },
    { "On The Bridge (3/8)", 0x07eee00, 0x07eee80 },
    { "On The Bridge (4/8)", 0x07eee80, 0x07eef00 },
    { "On The Bridge (5/8)", 0x07eef00, 0x07eef80 },
    { "On The Bridge (6/8)", 0x07eef80, 0x07ef000 },
    { "On The Bridge (7/8)", 0x07ef000, 0x07ef080 },
    { "On The Bridge (8/8)", 0x07ef080, 0x07ef100 },
#else
    { "On The Bridge", 0x07eed00, 0x07ef100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTTWILIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Twilight (1/83)", 0x07dad00, 0x07dad80 },
    { "Country Town Twilight (2/83)", 0x07dad80, 0x07dae00 },
    { "Country Town Twilight (3/83)", 0x07dae00, 0x07dae80 },
    { "Country Town Twilight (4/83)", 0x07dae80, 0x07daf00 },
    { "Country Town Twilight (5/83)", 0x07daf00, 0x07daf80 },
    { "Country Town Twilight (6/83)", 0x07daf80, 0x07db000 },
    { "Country Town Twilight (7/83)", 0x07db000, 0x07db080 },
    { "Country Town Twilight (8/83)", 0x07db080, 0x07db100 },
    { "Country Town Twilight (9/83)", 0x07db100, 0x07db180 },
    { "Country Town Twilight (10/83)", 0x07db180, 0x07db200 },
    { "Country Town Twilight (11/83)", 0x07db200, 0x07db280 },
    { "Country Town Twilight (12/83)", 0x07db280, 0x07db300 },
    { "Country Town Twilight (13/83)", 0x07db300, 0x07db380 },
    { "Country Town Twilight (14/83)", 0x07db380, 0x07db400 },
    { "Country Town Twilight (15/83)", 0x07db400, 0x07db480 },
    { "Country Town Twilight (16/83)", 0x07db480, 0x07db500 },
    { "Country Town Twilight (17/83)", 0x07db500, 0x07db580 },
    { "Country Town Twilight (18/83)", 0x07db580, 0x07db600 },
    { "Country Town Twilight (19/83)", 0x07db600, 0x07db680 },
    { "Country Town Twilight (20/83)", 0x07db680, 0x07db700 },
    { "Country Town Twilight (21/83)", 0x07db700, 0x07db780 },
    { "Country Town Twilight (22/83)", 0x07db780, 0x07db800 },
    { "Country Town Twilight (23/83)", 0x07db800, 0x07db880 },
    { "Country Town Twilight (24/83)", 0x07db880, 0x07db900 },
    { "Country Town Twilight (25/83)", 0x07db900, 0x07db980 },
    { "Country Town Twilight (26/83)", 0x07db980, 0x07dba00 },
    { "Country Town Twilight (27/83)", 0x07dba00, 0x07dba80 },
    { "Country Town Twilight (28/83)", 0x07dba80, 0x07dbb00 },
    { "Country Town Twilight (29/83)", 0x07dbb00, 0x07dbb80 },
    { "Country Town Twilight (30/83)", 0x07dbb80, 0x07dbc00 },
    { "Country Town Twilight (31/83)", 0x07dbc00, 0x07dbc80 },
    { "Country Town Twilight (32/83)", 0x07dbc80, 0x07dbd00 },
    { "Country Town Twilight (33/83)", 0x07dbd00, 0x07dbd80 },
    { "Country Town Twilight (34/83)", 0x07dbd80, 0x07dbe00 },
    { "Country Town Twilight (35/83)", 0x07dbe00, 0x07dbe80 },
    { "Country Town Twilight (36/83)", 0x07dbe80, 0x07dbf00 },
    { "Country Town Twilight (37/83)", 0x07dbf00, 0x07dbf80 },
    { "Country Town Twilight (38/83)", 0x07dbf80, 0x07dc000 },
    { "Country Town Twilight (39/83)", 0x07dc000, 0x07dc080 },
    { "Country Town Twilight (40/83)", 0x07dc080, 0x07dc100 },
    { "Country Town Twilight (41/83)", 0x07dc100, 0x07dc180 },
    { "Country Town Twilight (42/83)", 0x07dc180, 0x07dc200 },
    { "Country Town Twilight (43/83)", 0x07dc200, 0x07dc280 },
    { "Country Town Twilight (44/83)", 0x07dc280, 0x07dc300 },
    { "Country Town Twilight (45/83)", 0x07dc300, 0x07dc380 },
    { "Country Town Twilight (46/83)", 0x07dc380, 0x07dc400 },
    { "Country Town Twilight (47/83)", 0x07dc400, 0x07dc480 },
    { "Country Town Twilight (48/83)", 0x07dc480, 0x07dc500 },
    { "Country Town Twilight (49/83)", 0x07dc500, 0x07dc580 },
    { "Country Town Twilight (50/83)", 0x07dc580, 0x07dc600 },
    { "Country Town Twilight (51/83)", 0x07dc600, 0x07dc680 },
    { "Country Town Twilight (52/83)", 0x07dc680, 0x07dc700 },
    { "Country Town Twilight (53/83)", 0x07dc700, 0x07dc780 },
    { "Country Town Twilight (54/83)", 0x07dc780, 0x07dc800 },
    { "Country Town Twilight (55/83)", 0x07dc800, 0x07dc880 },
    { "Country Town Twilight (56/83)", 0x07dc880, 0x07dc900 },
    { "Country Town Twilight (57/83)", 0x07dc900, 0x07dc980 },
    { "Country Town Twilight (58/83)", 0x07dc980, 0x07dca00 },
    { "Country Town Twilight (59/83)", 0x07dca00, 0x07dca80 },
    { "Country Town Twilight (60/83)", 0x07dca80, 0x07dcb00 },
    { "Country Town Twilight (61/83)", 0x07dcb00, 0x07dcb80 },
    { "Country Town Twilight (62/83)", 0x07dcb80, 0x07dcc00 },
    { "Country Town Twilight (63/83)", 0x07dcc00, 0x07dcc80 },
    { "Country Town Twilight (64/83)", 0x07dcc80, 0x07dcd00 },
    { "Country Town Twilight (65/83)", 0x07dcd00, 0x07dcd80 },
    { "Country Town Twilight (66/83)", 0x07dcd80, 0x07dce00 },
    { "Country Town Twilight (67/83)", 0x07dce00, 0x07dce80 },
    { "Country Town Twilight (68/83)", 0x07dce80, 0x07dcf00 },
    { "Country Town Twilight (69/83)", 0x07dcf00, 0x07dcf80 },
    { "Country Town Twilight (70/83)", 0x07dcf80, 0x07dd000 },
    { "Country Town Twilight (71/83)", 0x07dd000, 0x07dd080 },
    { "Country Town Twilight (72/83)", 0x07dd080, 0x07dd100 },
    { "Country Town Twilight (73/83)", 0x07dd100, 0x07dd180 },
    { "Country Town Twilight (74/83)", 0x07dd180, 0x07dd200 },
    { "Country Town Twilight (75/83)", 0x07dd200, 0x07dd280 },
    { "Country Town Twilight (76/83)", 0x07dd280, 0x07dd300 },
    { "Country Town Twilight (77/83)", 0x07dd300, 0x07dd380 },
    { "Country Town Twilight (78/83)", 0x07dd380, 0x07dd400 },
    { "Country Town Twilight (79/83)", 0x07dd400, 0x07dd480 },
    { "Country Town Twilight (80/83)", 0x07dd480, 0x07dd500 },
    { "Country Town Twilight (81/83)", 0x07dd500, 0x07dd580 },
    { "Country Town Twilight (82/83)", 0x07dd580, 0x07dd600 },
    { "Country Town Twilight (83/83)", 0x07dd600, 0x07dd680 },
#else
    { "Country Town Twilight", 0x07dad00, 0x07dd680 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DMORNING[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Morning (1/29)", 0x07d4000, 0x07d4080 },
    { "Desert Morning (2/29)", 0x07d4080, 0x07d4100 },
    { "Desert Morning (3/29)", 0x07d4100, 0x07d4180 },
    { "Desert Morning (4/29)", 0x07d4180, 0x07d4200 },
    { "Desert Morning (5/29)", 0x07d4200, 0x07d4280 },
    { "Desert Morning (6/29)", 0x07d4280, 0x07d4300 },
    { "Desert Morning (7/29)", 0x07d4300, 0x07d4380 },
    { "Desert Morning (8/29)", 0x07d4380, 0x07d4400 },
    { "Desert Morning (9/29)", 0x07d4400, 0x07d4480 },
    { "Desert Morning (10/29)", 0x07d4480, 0x07d4500 },
    { "Desert Morning (11/29)", 0x07d4500, 0x07d4580 },
    { "Desert Morning (12/29)", 0x07d4580, 0x07d4600 },
    { "Desert Morning (13/29)", 0x07d4600, 0x07d4680 },
    { "Desert Morning (14/29)", 0x07d4680, 0x07d4700 },
    { "Desert Morning (15/29)", 0x07d4700, 0x07d4780 },
    { "Desert Morning (16/29)", 0x07d4780, 0x07d4800 },
    { "Desert Morning (17/29)", 0x07d4800, 0x07d4880 },
    { "Desert Morning (18/29)", 0x07d4880, 0x07d4900 },
    { "Desert Morning (19/29)", 0x07d4900, 0x07d4980 },
    { "Desert Morning (20/29)", 0x07d4980, 0x07d4a00 },
    { "Desert Morning (21/29)", 0x07d4a00, 0x07d4a80 },
    { "Desert Morning (22/29)", 0x07d4a80, 0x07d4b00 },
    { "Desert Morning (23/29)", 0x07d4b00, 0x07d4b80 },
    { "Desert Morning (24/29)", 0x07d4b80, 0x07d4c00 },
    { "Desert Morning (25/29)", 0x07d4c00, 0x07d4c80 },
    { "Desert Morning (26/29)", 0x07d4c80, 0x07d4d00 },
    { "Desert Morning (27/29)", 0x07d4d00, 0x07d4d80 },
    { "Desert Morning (28/29)", 0x07d4d80, 0x07d4e00 },
    { "Desert Morning (29/29)", 0x07d4e00, 0x07d4e80 },
#else
    { "Desert Morning", 0x07d4000, 0x07d4e80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DTWILIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Twilight (1/29)", 0x07d5e00, 0x07d5e80 },
    { "Desert Twilight (2/29)", 0x07d5e80, 0x07d5f00 },
    { "Desert Twilight (3/29)", 0x07d5f00, 0x07d5f80 },
    { "Desert Twilight (4/29)", 0x07d5f80, 0x07d6000 },
    { "Desert Twilight (5/29)", 0x07d6000, 0x07d6080 },
    { "Desert Twilight (6/29)", 0x07d6080, 0x07d6100 },
    { "Desert Twilight (7/29)", 0x07d6100, 0x07d6180 },
    { "Desert Twilight (8/29)", 0x07d6180, 0x07d6200 },
    { "Desert Twilight (9/29)", 0x07d6200, 0x07d6280 },
    { "Desert Twilight (10/29)", 0x07d6280, 0x07d6300 },
    { "Desert Twilight (11/29)", 0x07d6300, 0x07d6380 },
    { "Desert Twilight (12/29)", 0x07d6380, 0x07d6400 },
    { "Desert Twilight (13/29)", 0x07d6400, 0x07d6480 },
    { "Desert Twilight (14/29)", 0x07d6480, 0x07d6500 },
    { "Desert Twilight (15/29)", 0x07d6500, 0x07d6580 },
    { "Desert Twilight (16/29)", 0x07d6580, 0x07d6600 },
    { "Desert Twilight (17/29)", 0x07d6600, 0x07d6680 },
    { "Desert Twilight (18/29)", 0x07d6680, 0x07d6700 },
    { "Desert Twilight (19/29)", 0x07d6700, 0x07d6780 },
    { "Desert Twilight (20/29)", 0x07d6780, 0x07d6800 },
    { "Desert Twilight (21/29)", 0x07d6800, 0x07d6880 },
    { "Desert Twilight (22/29)", 0x07d6880, 0x07d6900 },
    { "Desert Twilight (23/29)", 0x07d6900, 0x07d6980 },
    { "Desert Twilight (24/29)", 0x07d6980, 0x07d6a00 },
    { "Desert Twilight (25/29)", 0x07d6a00, 0x07d6a80 },
    { "Desert Twilight (26/29)", 0x07d6a80, 0x07d6b00 },
    { "Desert Twilight (27/29)", 0x07d6b00, 0x07d6b80 },
    { "Desert Twilight (28/29)", 0x07d6b80, 0x07d6c00 },
    { "Desert Twilight (29/29)", 0x07d6c00, 0x07d6c80 },
#else
    { "Desert Twilight", 0x07d5e00, 0x07d6c80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_DNIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Night (1/29)", 0x07d4f00, 0x07d4f80 },
    { "Desert Night (2/29)", 0x07d4f80, 0x07d5000 },
    { "Desert Night (3/29)", 0x07d5000, 0x07d5080 },
    { "Desert Night (4/29)", 0x07d5080, 0x07d5100 },
    { "Desert Night (5/29)", 0x07d5100, 0x07d5180 },
    { "Desert Night (6/29)", 0x07d5180, 0x07d5200 },
    { "Desert Night (7/29)", 0x07d5200, 0x07d5280 },
    { "Desert Night (8/29)", 0x07d5280, 0x07d5300 },
    { "Desert Night (9/29)", 0x07d5300, 0x07d5380 },
    { "Desert Night (10/29)", 0x07d5380, 0x07d5400 },
    { "Desert Night (11/29)", 0x07d5400, 0x07d5480 },
    { "Desert Night (12/29)", 0x07d5480, 0x07d5500 },
    { "Desert Night (13/29)", 0x07d5500, 0x07d5580 },
    { "Desert Night (14/29)", 0x07d5580, 0x07d5600 },
    { "Desert Night (15/29)", 0x07d5600, 0x07d5680 },
    { "Desert Night (16/29)", 0x07d5680, 0x07d5700 },
    { "Desert Night (17/29)", 0x07d5700, 0x07d5780 },
    { "Desert Night (18/29)", 0x07d5780, 0x07d5800 },
    { "Desert Night (19/29)", 0x07d5800, 0x07d5880 },
    { "Desert Night (20/29)", 0x07d5880, 0x07d5900 },
    { "Desert Night (21/29)", 0x07d5900, 0x07d5980 },
    { "Desert Night (22/29)", 0x07d5980, 0x07d5a00 },
    { "Desert Night (23/29)", 0x07d5a00, 0x07d5a80 },
    { "Desert Night (24/29)", 0x07d5a80, 0x07d5b00 },
    { "Desert Night (25/29)", 0x07d5b00, 0x07d5b80 },
    { "Desert Night (26/29)", 0x07d5b80, 0x07d5c00 },
    { "Desert Night (27/29)", 0x07d5c00, 0x07d5c80 },
    { "Desert Night (28/29)", 0x07d5c80, 0x07d5d00 },
    { "Desert Night (29/29)", 0x07d5d00, 0x07d5d80 },
#else
    { "Desert Night", 0x07d4f00, 0x07d5d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SISLANDJ[] =
{
#ifndef USE_LARGE_PALETTES
    { "Small Island (Joseph) (1/24)", 0x07d1700, 0x07d1780 },
    { "Small Island (Joseph) (2/24)", 0x07d1780, 0x07d1800 },
    { "Small Island (Joseph) (3/24)", 0x07d1800, 0x07d1880 },
    { "Small Island (Joseph) (4/24)", 0x07d1880, 0x07d1900 },
    { "Small Island (Joseph) (5/24)", 0x07d1900, 0x07d1980 },
    { "Small Island (Joseph) (6/24)", 0x07d1980, 0x07d1a00 },
    { "Small Island (Joseph) (7/24)", 0x07d1a00, 0x07d1a80 },
    { "Small Island (Joseph) (8/24)", 0x07d1a80, 0x07d1b00 },
    { "Small Island (Joseph) (9/24)", 0x07d1b00, 0x07d1b80 },
    { "Small Island (Joseph) (10/24)", 0x07d1b80, 0x07d1c00 },
    { "Small Island (Joseph) (11/24)", 0x07d1c00, 0x07d1c80 },
    { "Small Island (Joseph) (12/24)", 0x07d1c80, 0x07d1d00 },
    { "Small Island (Joseph) (13/24)", 0x07d1d00, 0x07d1d80 },
    { "Small Island (Joseph) (14/24)", 0x07d1d80, 0x07d1e00 },
    { "Small Island (Joseph) (15/24)", 0x07d1e00, 0x07d1e80 },
    { "Small Island (Joseph) (16/24)", 0x07d1e80, 0x07d1f00 },
    { "Small Island (Joseph) (17/24)", 0x07d1f00, 0x07d1f80 },
    { "Small Island (Joseph) (18/24)", 0x07d1f80, 0x07d2000 },
    { "Small Island (Joseph) (19/24)", 0x07d2000, 0x07d2080 },
    { "Small Island (Joseph) (20/24)", 0x07d2080, 0x07d2100 },
    { "Small Island (Joseph) (21/24)", 0x07d2100, 0x07d2180 },
    { "Small Island (Joseph) (22/24)", 0x07d2180, 0x07d2200 },
    { "Small Island (Joseph) (23/24)", 0x07d2200, 0x07d2280 },
    { "Small Island (Joseph) (24/24)", 0x07d2280, 0x07d2300 },
#else
    { "Small Island (Joseph)", 0x07d1700, 0x07d2300 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_CTNIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Night (1/83)", 0x07dd700, 0x07dd780 },
    { "Country Town Night (2/83)", 0x07dd780, 0x07dd800 },
    { "Country Town Night (3/83)", 0x07dd800, 0x07dd880 },
    { "Country Town Night (4/83)", 0x07dd880, 0x07dd900 },
    { "Country Town Night (5/83)", 0x07dd900, 0x07dd980 },
    { "Country Town Night (6/83)", 0x07dd980, 0x07dda00 },
    { "Country Town Night (7/83)", 0x07dda00, 0x07dda80 },
    { "Country Town Night (8/83)", 0x07dda80, 0x07ddb00 },
    { "Country Town Night (9/83)", 0x07ddb00, 0x07ddb80 },
    { "Country Town Night (10/83)", 0x07ddb80, 0x07ddc00 },
    { "Country Town Night (11/83)", 0x07ddc00, 0x07ddc80 },
    { "Country Town Night (12/83)", 0x07ddc80, 0x07ddd00 },
    { "Country Town Night (13/83)", 0x07ddd00, 0x07ddd80 },
    { "Country Town Night (14/83)", 0x07ddd80, 0x07dde00 },
    { "Country Town Night (15/83)", 0x07dde00, 0x07dde80 },
    { "Country Town Night (16/83)", 0x07dde80, 0x07ddf00 },
    { "Country Town Night (17/83)", 0x07ddf00, 0x07ddf80 },
    { "Country Town Night (18/83)", 0x07ddf80, 0x07de000 },
    { "Country Town Night (19/83)", 0x07de000, 0x07de080 },
    { "Country Town Night (20/83)", 0x07de080, 0x07de100 },
    { "Country Town Night (21/83)", 0x07de100, 0x07de180 },
    { "Country Town Night (22/83)", 0x07de180, 0x07de200 },
    { "Country Town Night (23/83)", 0x07de200, 0x07de280 },
    { "Country Town Night (24/83)", 0x07de280, 0x07de300 },
    { "Country Town Night (25/83)", 0x07de300, 0x07de380 },
    { "Country Town Night (26/83)", 0x07de380, 0x07de400 },
    { "Country Town Night (27/83)", 0x07de400, 0x07de480 },
    { "Country Town Night (28/83)", 0x07de480, 0x07de500 },
    { "Country Town Night (29/83)", 0x07de500, 0x07de580 },
    { "Country Town Night (30/83)", 0x07de580, 0x07de600 },
    { "Country Town Night (31/83)", 0x07de600, 0x07de680 },
    { "Country Town Night (32/83)", 0x07de680, 0x07de700 },
    { "Country Town Night (33/83)", 0x07de700, 0x07de780 },
    { "Country Town Night (34/83)", 0x07de780, 0x07de800 },
    { "Country Town Night (35/83)", 0x07de800, 0x07de880 },
    { "Country Town Night (36/83)", 0x07de880, 0x07de900 },
    { "Country Town Night (37/83)", 0x07de900, 0x07de980 },
    { "Country Town Night (38/83)", 0x07de980, 0x07dea00 },
    { "Country Town Night (39/83)", 0x07dea00, 0x07dea80 },
    { "Country Town Night (40/83)", 0x07dea80, 0x07deb00 },
    { "Country Town Night (41/83)", 0x07deb00, 0x07deb80 },
    { "Country Town Night (42/83)", 0x07deb80, 0x07dec00 },
    { "Country Town Night (43/83)", 0x07dec00, 0x07dec80 },
    { "Country Town Night (44/83)", 0x07dec80, 0x07ded00 },
    { "Country Town Night (45/83)", 0x07ded00, 0x07ded80 },
    { "Country Town Night (46/83)", 0x07ded80, 0x07dee00 },
    { "Country Town Night (47/83)", 0x07dee00, 0x07dee80 },
    { "Country Town Night (48/83)", 0x07dee80, 0x07def00 },
    { "Country Town Night (49/83)", 0x07def00, 0x07def80 },
    { "Country Town Night (50/83)", 0x07def80, 0x07df000 },
    { "Country Town Night (51/83)", 0x07df000, 0x07df080 },
    { "Country Town Night (52/83)", 0x07df080, 0x07df100 },
    { "Country Town Night (53/83)", 0x07df100, 0x07df180 },
    { "Country Town Night (54/83)", 0x07df180, 0x07df200 },
    { "Country Town Night (55/83)", 0x07df200, 0x07df280 },
    { "Country Town Night (56/83)", 0x07df280, 0x07df300 },
    { "Country Town Night (57/83)", 0x07df300, 0x07df380 },
    { "Country Town Night (58/83)", 0x07df380, 0x07df400 },
    { "Country Town Night (59/83)", 0x07df400, 0x07df480 },
    { "Country Town Night (60/83)", 0x07df480, 0x07df500 },
    { "Country Town Night (61/83)", 0x07df500, 0x07df580 },
    { "Country Town Night (62/83)", 0x07df580, 0x07df600 },
    { "Country Town Night (63/83)", 0x07df600, 0x07df680 },
    { "Country Town Night (64/83)", 0x07df680, 0x07df700 },
    { "Country Town Night (65/83)", 0x07df700, 0x07df780 },
    { "Country Town Night (66/83)", 0x07df780, 0x07df800 },
    { "Country Town Night (67/83)", 0x07df800, 0x07df880 },
    { "Country Town Night (68/83)", 0x07df880, 0x07df900 },
    { "Country Town Night (69/83)", 0x07df900, 0x07df980 },
    { "Country Town Night (70/83)", 0x07df980, 0x07dfa00 },
    { "Country Town Night (71/83)", 0x07dfa00, 0x07dfa80 },
    { "Country Town Night (72/83)", 0x07dfa80, 0x07dfb00 },
    { "Country Town Night (73/83)", 0x07dfb00, 0x07dfb80 },
    { "Country Town Night (74/83)", 0x07dfb80, 0x07dfc00 },
    { "Country Town Night (75/83)", 0x07dfc00, 0x07dfc80 },
    { "Country Town Night (76/83)", 0x07dfc80, 0x07dfd00 },
    { "Country Town Night (77/83)", 0x07dfd00, 0x07dfd80 },
    { "Country Town Night (78/83)", 0x07dfd80, 0x07dfe00 },
    { "Country Town Night (79/83)", 0x07dfe00, 0x07dfe80 },
    { "Country Town Night (80/83)", 0x07dfe80, 0x07dff00 },
    { "Country Town Night (81/83)", 0x07dff00, 0x07dff80 },
    { "Country Town Night (82/83)", 0x07dff80, 0x07e0000 },
    { "Country Town Night (83/83)", 0x07e0000, 0x07e0080 },
#else
    { "Country Town Night", 0x07dd700, 0x07e0080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB2[] =
{
#ifndef USE_LARGE_PALETTES
    { "Suburbs 2 (1/87)", 0x07e9500, 0x07e9580 },
    { "Suburbs 2 (2/87)", 0x07e9580, 0x07e9600 },
    { "Suburbs 2 (3/87)", 0x07e9600, 0x07e9680 },
    { "Suburbs 2 (4/87)", 0x07e9680, 0x07e9700 },
    { "Suburbs 2 (5/87)", 0x07e9700, 0x07e9780 },
    { "Suburbs 2 (6/87)", 0x07e9780, 0x07e9800 },
    { "Suburbs 2 (7/87)", 0x07e9800, 0x07e9880 },
    { "Suburbs 2 (8/87)", 0x07e9880, 0x07e9900 },
    { "Suburbs 2 (9/87)", 0x07e9900, 0x07e9980 },
    { "Suburbs 2 (10/87)", 0x07e9980, 0x07e9a00 },
    { "Suburbs 2 (11/87)", 0x07e9a00, 0x07e9a80 },
    { "Suburbs 2 (12/87)", 0x07e9a80, 0x07e9b00 },
    { "Suburbs 2 (13/87)", 0x07e9b00, 0x07e9b80 },
    { "Suburbs 2 (14/87)", 0x07e9b80, 0x07e9c00 },
    { "Suburbs 2 (15/87)", 0x07e9c00, 0x07e9c80 },
    { "Suburbs 2 (16/87)", 0x07e9c80, 0x07e9d00 },
    { "Suburbs 2 (17/87)", 0x07e9d00, 0x07e9d80 },
    { "Suburbs 2 (18/87)", 0x07e9d80, 0x07e9e00 },
    { "Suburbs 2 (19/87)", 0x07e9e00, 0x07e9e80 },
    { "Suburbs 2 (20/87)", 0x07e9e80, 0x07e9f00 },
    { "Suburbs 2 (21/87)", 0x07e9f00, 0x07e9f80 },
    { "Suburbs 2 (22/87)", 0x07e9f80, 0x07ea000 },
    { "Suburbs 2 (23/87)", 0x07ea000, 0x07ea080 },
    { "Suburbs 2 (24/87)", 0x07ea080, 0x07ea100 },
    { "Suburbs 2 (25/87)", 0x07ea100, 0x07ea180 },
    { "Suburbs 2 (26/87)", 0x07ea180, 0x07ea200 },
    { "Suburbs 2 (27/87)", 0x07ea200, 0x07ea280 },
    { "Suburbs 2 (28/87)", 0x07ea280, 0x07ea300 },
    { "Suburbs 2 (29/87)", 0x07ea300, 0x07ea380 },
    { "Suburbs 2 (30/87)", 0x07ea380, 0x07ea400 },
    { "Suburbs 2 (31/87)", 0x07ea400, 0x07ea480 },
    { "Suburbs 2 (32/87)", 0x07ea480, 0x07ea500 },
    { "Suburbs 2 (33/87)", 0x07ea500, 0x07ea580 },
    { "Suburbs 2 (34/87)", 0x07ea580, 0x07ea600 },
    { "Suburbs 2 (35/87)", 0x07ea600, 0x07ea680 },
    { "Suburbs 2 (36/87)", 0x07ea680, 0x07ea700 },
    { "Suburbs 2 (37/87)", 0x07ea700, 0x07ea780 },
    { "Suburbs 2 (38/87)", 0x07ea780, 0x07ea800 },
    { "Suburbs 2 (39/87)", 0x07ea800, 0x07ea880 },
    { "Suburbs 2 (40/87)", 0x07ea880, 0x07ea900 },
    { "Suburbs 2 (41/87)", 0x07ea900, 0x07ea980 },
    { "Suburbs 2 (42/87)", 0x07ea980, 0x07eaa00 },
    { "Suburbs 2 (43/87)", 0x07eaa00, 0x07eaa80 },
    { "Suburbs 2 (44/87)", 0x07eaa80, 0x07eab00 },
    { "Suburbs 2 (45/87)", 0x07eab00, 0x07eab80 },
    { "Suburbs 2 (46/87)", 0x07eab80, 0x07eac00 },
    { "Suburbs 2 (47/87)", 0x07eac00, 0x07eac80 },
    { "Suburbs 2 (48/87)", 0x07eac80, 0x07ead00 },
    { "Suburbs 2 (49/87)", 0x07ead00, 0x07ead80 },
    { "Suburbs 2 (50/87)", 0x07ead80, 0x07eae00 },
    { "Suburbs 2 (51/87)", 0x07eae00, 0x07eae80 },
    { "Suburbs 2 (52/87)", 0x07eae80, 0x07eaf00 },
    { "Suburbs 2 (53/87)", 0x07eaf00, 0x07eaf80 },
    { "Suburbs 2 (54/87)", 0x07eaf80, 0x07eb000 },
    { "Suburbs 2 (55/87)", 0x07eb000, 0x07eb080 },
    { "Suburbs 2 (56/87)", 0x07eb080, 0x07eb100 },
    { "Suburbs 2 (57/87)", 0x07eb100, 0x07eb180 },
    { "Suburbs 2 (58/87)", 0x07eb180, 0x07eb200 },
    { "Suburbs 2 (59/87)", 0x07eb200, 0x07eb280 },
    { "Suburbs 2 (60/87)", 0x07eb280, 0x07eb300 },
    { "Suburbs 2 (61/87)", 0x07eb300, 0x07eb380 },
    { "Suburbs 2 (62/87)", 0x07eb380, 0x07eb400 },
    { "Suburbs 2 (63/87)", 0x07eb400, 0x07eb480 },
    { "Suburbs 2 (64/87)", 0x07eb480, 0x07eb500 },
    { "Suburbs 2 (65/87)", 0x07eb500, 0x07eb580 },
    { "Suburbs 2 (66/87)", 0x07eb580, 0x07eb600 },
    { "Suburbs 2 (67/87)", 0x07eb600, 0x07eb680 },
    { "Suburbs 2 (68/87)", 0x07eb680, 0x07eb700 },
    { "Suburbs 2 (69/87)", 0x07eb700, 0x07eb780 },
    { "Suburbs 2 (70/87)", 0x07eb780, 0x07eb800 },
    { "Suburbs 2 (71/87)", 0x07eb800, 0x07eb880 },
    { "Suburbs 2 (72/87)", 0x07eb880, 0x07eb900 },
    { "Suburbs 2 (73/87)", 0x07eb900, 0x07eb980 },
    { "Suburbs 2 (74/87)", 0x07eb980, 0x07eba00 },
    { "Suburbs 2 (75/87)", 0x07eba00, 0x07eba80 },
    { "Suburbs 2 (76/87)", 0x07eba80, 0x07ebb00 },
    { "Suburbs 2 (77/87)", 0x07ebb00, 0x07ebb80 },
    { "Suburbs 2 (78/87)", 0x07ebb80, 0x07ebc00 },
    { "Suburbs 2 (79/87)", 0x07ebc00, 0x07ebc80 },
    { "Suburbs 2 (80/87)", 0x07ebc80, 0x07ebd00 },
    { "Suburbs 2 (81/87)", 0x07ebd00, 0x07ebd80 },
    { "Suburbs 2 (82/87)", 0x07ebd80, 0x07ebe00 },
    { "Suburbs 2 (83/87)", 0x07ebe00, 0x07ebe80 },
    { "Suburbs 2 (84/87)", 0x07ebe80, 0x07ebf00 },
    { "Suburbs 2 (85/87)", 0x07ebf00, 0x07ebf80 },
    { "Suburbs 2 (86/87)", 0x07ebf80, 0x07ec000 },
    { "Suburbs 2 (87/87)", 0x07ec000, 0x07ec080 },
#else
    { "Suburbs 2", 0x07e9500, 0x07ec080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_SUBURB3[] =
{
#ifndef USE_LARGE_PALETTES
    { "Suburbs 3 (1/87)", 0x07ec100, 0x07ec180 },
    { "Suburbs 3 (2/87)", 0x07ec180, 0x07ec200 },
    { "Suburbs 3 (3/87)", 0x07ec200, 0x07ec280 },
    { "Suburbs 3 (4/87)", 0x07ec280, 0x07ec300 },
    { "Suburbs 3 (5/87)", 0x07ec300, 0x07ec380 },
    { "Suburbs 3 (6/87)", 0x07ec380, 0x07ec400 },
    { "Suburbs 3 (7/87)", 0x07ec400, 0x07ec480 },
    { "Suburbs 3 (8/87)", 0x07ec480, 0x07ec500 },
    { "Suburbs 3 (9/87)", 0x07ec500, 0x07ec580 },
    { "Suburbs 3 (10/87)", 0x07ec580, 0x07ec600 },
    { "Suburbs 3 (11/87)", 0x07ec600, 0x07ec680 },
    { "Suburbs 3 (12/87)", 0x07ec680, 0x07ec700 },
    { "Suburbs 3 (13/87)", 0x07ec700, 0x07ec780 },
    { "Suburbs 3 (14/87)", 0x07ec780, 0x07ec800 },
    { "Suburbs 3 (15/87)", 0x07ec800, 0x07ec880 },
    { "Suburbs 3 (16/87)", 0x07ec880, 0x07ec900 },
    { "Suburbs 3 (17/87)", 0x07ec900, 0x07ec980 },
    { "Suburbs 3 (18/87)", 0x07ec980, 0x07eca00 },
    { "Suburbs 3 (19/87)", 0x07eca00, 0x07eca80 },
    { "Suburbs 3 (20/87)", 0x07eca80, 0x07ecb00 },
    { "Suburbs 3 (21/87)", 0x07ecb00, 0x07ecb80 },
    { "Suburbs 3 (22/87)", 0x07ecb80, 0x07ecc00 },
    { "Suburbs 3 (23/87)", 0x07ecc00, 0x07ecc80 },
    { "Suburbs 3 (24/87)", 0x07ecc80, 0x07ecd00 },
    { "Suburbs 3 (25/87)", 0x07ecd00, 0x07ecd80 },
    { "Suburbs 3 (26/87)", 0x07ecd80, 0x07ece00 },
    { "Suburbs 3 (27/87)", 0x07ece00, 0x07ece80 },
    { "Suburbs 3 (28/87)", 0x07ece80, 0x07ecf00 },
    { "Suburbs 3 (29/87)", 0x07ecf00, 0x07ecf80 },
    { "Suburbs 3 (30/87)", 0x07ecf80, 0x07ed000 },
    { "Suburbs 3 (31/87)", 0x07ed000, 0x07ed080 },
    { "Suburbs 3 (32/87)", 0x07ed080, 0x07ed100 },
    { "Suburbs 3 (33/87)", 0x07ed100, 0x07ed180 },
    { "Suburbs 3 (34/87)", 0x07ed180, 0x07ed200 },
    { "Suburbs 3 (35/87)", 0x07ed200, 0x07ed280 },
    { "Suburbs 3 (36/87)", 0x07ed280, 0x07ed300 },
    { "Suburbs 3 (37/87)", 0x07ed300, 0x07ed380 },
    { "Suburbs 3 (38/87)", 0x07ed380, 0x07ed400 },
    { "Suburbs 3 (39/87)", 0x07ed400, 0x07ed480 },
    { "Suburbs 3 (40/87)", 0x07ed480, 0x07ed500 },
    { "Suburbs 3 (41/87)", 0x07ed500, 0x07ed580 },
    { "Suburbs 3 (42/87)", 0x07ed580, 0x07ed600 },
    { "Suburbs 3 (43/87)", 0x07ed600, 0x07ed680 },
    { "Suburbs 3 (44/87)", 0x07ed680, 0x07ed700 },
    { "Suburbs 3 (45/87)", 0x07ed700, 0x07ed780 },
    { "Suburbs 3 (46/87)", 0x07ed780, 0x07ed800 },
    { "Suburbs 3 (47/87)", 0x07ed800, 0x07ed880 },
    { "Suburbs 3 (48/87)", 0x07ed880, 0x07ed900 },
    { "Suburbs 3 (49/87)", 0x07ed900, 0x07ed980 },
    { "Suburbs 3 (50/87)", 0x07ed980, 0x07eda00 },
    { "Suburbs 3 (51/87)", 0x07eda00, 0x07eda80 },
    { "Suburbs 3 (52/87)", 0x07eda80, 0x07edb00 },
    { "Suburbs 3 (53/87)", 0x07edb00, 0x07edb80 },
    { "Suburbs 3 (54/87)", 0x07edb80, 0x07edc00 },
    { "Suburbs 3 (55/87)", 0x07edc00, 0x07edc80 },
    { "Suburbs 3 (56/87)", 0x07edc80, 0x07edd00 },
    { "Suburbs 3 (57/87)", 0x07edd00, 0x07edd80 },
    { "Suburbs 3 (58/87)", 0x07edd80, 0x07ede00 },
    { "Suburbs 3 (59/87)", 0x07ede00, 0x07ede80 },
    { "Suburbs 3 (60/87)", 0x07ede80, 0x07edf00 },
    { "Suburbs 3 (61/87)", 0x07edf00, 0x07edf80 },
    { "Suburbs 3 (62/87)", 0x07edf80, 0x07ee000 },
    { "Suburbs 3 (63/87)", 0x07ee000, 0x07ee080 },
    { "Suburbs 3 (64/87)", 0x07ee080, 0x07ee100 },
    { "Suburbs 3 (65/87)", 0x07ee100, 0x07ee180 },
    { "Suburbs 3 (66/87)", 0x07ee180, 0x07ee200 },
    { "Suburbs 3 (67/87)", 0x07ee200, 0x07ee280 },
    { "Suburbs 3 (68/87)", 0x07ee280, 0x07ee300 },
    { "Suburbs 3 (69/87)", 0x07ee300, 0x07ee380 },
    { "Suburbs 3 (70/87)", 0x07ee380, 0x07ee400 },
    { "Suburbs 3 (71/87)", 0x07ee400, 0x07ee480 },
    { "Suburbs 3 (72/87)", 0x07ee480, 0x07ee500 },
    { "Suburbs 3 (73/87)", 0x07ee500, 0x07ee580 },
    { "Suburbs 3 (74/87)", 0x07ee580, 0x07ee600 },
    { "Suburbs 3 (75/87)", 0x07ee600, 0x07ee680 },
    { "Suburbs 3 (76/87)", 0x07ee680, 0x07ee700 },
    { "Suburbs 3 (77/87)", 0x07ee700, 0x07ee780 },
    { "Suburbs 3 (78/87)", 0x07ee780, 0x07ee800 },
    { "Suburbs 3 (79/87)", 0x07ee800, 0x07ee880 },
    { "Suburbs 3 (80/87)", 0x07ee880, 0x07ee900 },
    { "Suburbs 3 (81/87)", 0x07ee900, 0x07ee980 },
    { "Suburbs 3 (82/87)", 0x07ee980, 0x07eea00 },
    { "Suburbs 3 (83/87)", 0x07eea00, 0x07eea80 },
    { "Suburbs 3 (84/87)", 0x07eea80, 0x07eeb00 },
    { "Suburbs 3 (85/87)", 0x07eeb00, 0x07eeb80 },
    { "Suburbs 3 (86/87)", 0x07eeb80, 0x07eec00 },
    { "Suburbs 3 (87/87)", 0x07eec00, 0x07eec80 },
#else
    { "Suburbs 3", 0x07ec100, 0x07eec80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW1[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 1 (1/36)", 0x07cb280, 0x07cb300 },
    { "New 1 (2/36)", 0x07cb300, 0x07cb380 },
    { "New 1 (3/36)", 0x07cb380, 0x07cb400 },
    { "New 1 (4/36)", 0x07cb400, 0x07cb480 },
    { "New 1 (5/36)", 0x07cb480, 0x07cb500 },
    { "New 1 (6/36)", 0x07cb500, 0x07cb580 },
    { "New 1 (7/36)", 0x07cb580, 0x07cb600 },
    { "New 1 (8/36)", 0x07cb600, 0x07cb680 },
    { "New 1 (9/36)", 0x07cb680, 0x07cb700 },
    { "New 1 (10/36)", 0x07cb700, 0x07cb780 },
    { "New 1 (11/36)", 0x07cb780, 0x07cb800 },
    { "New 1 (12/36)", 0x07cb800, 0x07cb880 },
    { "New 1 (13/36)", 0x07cb880, 0x07cb900 },
    { "New 1 (14/36)", 0x07cb900, 0x07cb980 },
    { "New 1 (15/36)", 0x07cb980, 0x07cba00 },
    { "New 1 (16/36)", 0x07cba00, 0x07cba80 },
    { "New 1 (17/36)", 0x07cba80, 0x07cbb00 },
    { "New 1 (18/36)", 0x07cbb00, 0x07cbb80 },
    { "New 1 (19/36)", 0x07cbb80, 0x07cbc00 },
    { "New 1 (20/36)", 0x07cbc00, 0x07cbc80 },
    { "New 1 (21/36)", 0x07cbc80, 0x07cbd00 },
    { "New 1 (22/36)", 0x07cbd00, 0x07cbd80 },
    { "New 1 (23/36)", 0x07cbd80, 0x07cbe00 },
    { "New 1 (24/36)", 0x07cbe00, 0x07cbe80 },
    { "New 1 (25/36)", 0x07cbe80, 0x07cbf00 },
    { "New 1 (26/36)", 0x07cbf00, 0x07cbf80 },
    { "New 1 (27/36)", 0x07cbf80, 0x07cc000 },
    { "New 1 (28/36)", 0x07cc000, 0x07cc080 },
    { "New 1 (29/36)", 0x07cc080, 0x07cc100 },
    { "New 1 (30/36)", 0x07cc100, 0x07cc180 },
    { "New 1 (31/36)", 0x07cc180, 0x07cc200 },
    { "New 1 (32/36)", 0x07cc200, 0x07cc280 },
    { "New 1 (33/36)", 0x07cc280, 0x07cc300 },
    { "New 1 (34/36)", 0x07cc300, 0x07cc380 },
    { "New 1 (35/36)", 0x07cc380, 0x07cc400 },
    { "New 1 (36/36)", 0x07cc400, 0x07cc480 },
#else
    { "New 1", 0x07cb280, 0x07cc480 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW2[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 2 (1/27)", 0x07c9100, 0x07c9180 },
    { "New 2 (2/27)", 0x07c9180, 0x07c9200 },
    { "New 2 (3/27)", 0x07c9200, 0x07c9280 },
    { "New 2 (4/27)", 0x07c9280, 0x07c9300 },
    { "New 2 (5/27)", 0x07c9300, 0x07c9380 },
    { "New 2 (6/27)", 0x07c9380, 0x07c9400 },
    { "New 2 (7/27)", 0x07c9400, 0x07c9480 },
    { "New 2 (8/27)", 0x07c9480, 0x07c9500 },
    { "New 2 (9/27)", 0x07c9500, 0x07c9580 },
    { "New 2 (10/27)", 0x07c9580, 0x07c9600 },
    { "New 2 (11/27)", 0x07c9600, 0x07c9680 },
    { "New 2 (12/27)", 0x07c9680, 0x07c9700 },
    { "New 2 (13/27)", 0x07c9700, 0x07c9780 },
    { "New 2 (14/27)", 0x07c9780, 0x07c9800 },
    { "New 2 (15/27)", 0x07c9800, 0x07c9880 },
    { "New 2 (16/27)", 0x07c9880, 0x07c9900 },
    { "New 2 (17/27)", 0x07c9900, 0x07c9980 },
    { "New 2 (18/27)", 0x07c9980, 0x07c9a00 },
    { "New 2 (19/27)", 0x07c9a00, 0x07c9a80 },
    { "New 2 (20/27)", 0x07c9a80, 0x07c9b00 },
    { "New 2 (21/27)", 0x07c9b00, 0x07c9b80 },
    { "New 2 (22/27)", 0x07c9b80, 0x07c9c00 },
    { "New 2 (23/27)", 0x07c9c00, 0x07c9c80 },
    { "New 2 (24/27)", 0x07c9c80, 0x07c9d00 },
    { "New 2 (25/27)", 0x07c9d00, 0x07c9d80 },
    { "New 2 (26/27)", 0x07c9d80, 0x07c9e00 },
    { "New 2 (27/27)", 0x07c9e00, 0x07c9e80 },
#else
    { "New 2", 0x07c9100, 0x07c9e80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW3[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 3 (1/24)", 0x07d2400, 0x07d2480 },
    { "New 3 (2/24)", 0x07d2480, 0x07d2500 },
    { "New 3 (3/24)", 0x07d2500, 0x07d2580 },
    { "New 3 (4/24)", 0x07d2580, 0x07d2600 },
    { "New 3 (5/24)", 0x07d2600, 0x07d2680 },
    { "New 3 (6/24)", 0x07d2680, 0x07d2700 },
    { "New 3 (7/24)", 0x07d2700, 0x07d2780 },
    { "New 3 (8/24)", 0x07d2780, 0x07d2800 },
    { "New 3 (9/24)", 0x07d2800, 0x07d2880 },
    { "New 3 (10/24)", 0x07d2880, 0x07d2900 },
    { "New 3 (11/24)", 0x07d2900, 0x07d2980 },
    { "New 3 (12/24)", 0x07d2980, 0x07d2a00 },
    { "New 3 (13/24)", 0x07d2a00, 0x07d2a80 },
    { "New 3 (14/24)", 0x07d2a80, 0x07d2b00 },
    { "New 3 (15/24)", 0x07d2b00, 0x07d2b80 },
    { "New 3 (16/24)", 0x07d2b80, 0x07d2c00 },
    { "New 3 (17/24)", 0x07d2c00, 0x07d2c80 },
    { "New 3 (18/24)", 0x07d2c80, 0x07d2d00 },
    { "New 3 (19/24)", 0x07d2d00, 0x07d2d80 },
    { "New 3 (20/24)", 0x07d2d80, 0x07d2e00 },
    { "New 3 (21/24)", 0x07d2e00, 0x07d2e80 },
    { "New 3 (22/24)", 0x07d2e80, 0x07d2f00 },
    { "New 3 (23/24)", 0x07d2f00, 0x07d2f80 },
    { "New 3 (24/24)", 0x07d2f80, 0x07d3000 },
#else
    { "New 3", 0x07d2400, 0x07d3000 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW4[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 4 (1/20)", 0x07d7800, 0x07d7880 },
    { "New 4 (2/20)", 0x07d7880, 0x07d7900 },
    { "New 4 (3/20)", 0x07d7900, 0x07d7980 },
    { "New 4 (4/20)", 0x07d7980, 0x07d7a00 },
    { "New 4 (5/20)", 0x07d7a00, 0x07d7a80 },
    { "New 4 (6/20)", 0x07d7a80, 0x07d7b00 },
    { "New 4 (7/20)", 0x07d7b00, 0x07d7b80 },
    { "New 4 (8/20)", 0x07d7b80, 0x07d7c00 },
    { "New 4 (9/20)", 0x07d7c00, 0x07d7c80 },
    { "New 4 (10/20)", 0x07d7c80, 0x07d7d00 },
    { "New 4 (11/20)", 0x07d7d00, 0x07d7d80 },
    { "New 4 (12/20)", 0x07d7d80, 0x07d7e00 },
    { "New 4 (13/20)", 0x07d7e00, 0x07d7e80 },
    { "New 4 (14/20)", 0x07d7e80, 0x07d7f00 },
    { "New 4 (15/20)", 0x07d7f00, 0x07d7f80 },
    { "New 4 (16/20)", 0x07d7f80, 0x07d8000 },
    { "New 4 (17/20)", 0x07d8000, 0x07d8080 },
    { "New 4 (18/20)", 0x07d8080, 0x07d8100 },
    { "New 4 (19/20)", 0x07d8100, 0x07d8180 },
    { "New 4 (20/20)", 0x07d8180, 0x07d8200 },
#else
    { "New 4", 0x07d7800, 0x07d8200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW5[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 5 (1/32)", 0x07e1200, 0x07e1280 },
    { "New 5 (2/32)", 0x07e1280, 0x07e1300 },
    { "New 5 (3/32)", 0x07e1300, 0x07e1380 },
    { "New 5 (4/32)", 0x07e1380, 0x07e1400 },
    { "New 5 (5/32)", 0x07e1400, 0x07e1480 },
    { "New 5 (6/32)", 0x07e1480, 0x07e1500 },
    { "New 5 (7/32)", 0x07e1500, 0x07e1580 },
    { "New 5 (8/32)", 0x07e1580, 0x07e1600 },
    { "New 5 (9/32)", 0x07e1600, 0x07e1680 },
    { "New 5 (10/32)", 0x07e1680, 0x07e1700 },
    { "New 5 (11/32)", 0x07e1700, 0x07e1780 },
    { "New 5 (12/32)", 0x07e1780, 0x07e1800 },
    { "New 5 (13/32)", 0x07e1800, 0x07e1880 },
    { "New 5 (14/32)", 0x07e1880, 0x07e1900 },
    { "New 5 (15/32)", 0x07e1900, 0x07e1980 },
    { "New 5 (16/32)", 0x07e1980, 0x07e1a00 },
    { "New 5 (17/32)", 0x07e1a00, 0x07e1a80 },
    { "New 5 (18/32)", 0x07e1a80, 0x07e1b00 },
    { "New 5 (19/32)", 0x07e1b00, 0x07e1b80 },
    { "New 5 (20/32)", 0x07e1b80, 0x07e1c00 },
    { "New 5 (21/32)", 0x07e1c00, 0x07e1c80 },
    { "New 5 (22/32)", 0x07e1c80, 0x07e1d00 },
    { "New 5 (23/32)", 0x07e1d00, 0x07e1d80 },
    { "New 5 (24/32)", 0x07e1d80, 0x07e1e00 },
    { "New 5 (25/32)", 0x07e1e00, 0x07e1e80 },
    { "New 5 (26/32)", 0x07e1e80, 0x07e1f00 },
    { "New 5 (27/32)", 0x07e1f00, 0x07e1f80 },
    { "New 5 (28/32)", 0x07e1f80, 0x07e2000 },
    { "New 5 (29/32)", 0x07e2000, 0x07e2080 },
    { "New 5 (30/32)", 0x07e2080, 0x07e2100 },
    { "New 5 (31/32)", 0x07e2100, 0x07e2180 },
    { "New 5 (32/32)", 0x07e2180, 0x07e2200 },
#else
    { "New 5", 0x07e1200, 0x07e2200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW6[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 6 (1/30)", 0x07e3300, 0x07e3380 },
    { "New 6 (2/30)", 0x07e3380, 0x07e3400 },
    { "New 6 (3/30)", 0x07e3400, 0x07e3480 },
    { "New 6 (4/30)", 0x07e3480, 0x07e3500 },
    { "New 6 (5/30)", 0x07e3500, 0x07e3580 },
    { "New 6 (6/30)", 0x07e3580, 0x07e3600 },
    { "New 6 (7/30)", 0x07e3600, 0x07e3680 },
    { "New 6 (8/30)", 0x07e3680, 0x07e3700 },
    { "New 6 (9/30)", 0x07e3700, 0x07e3780 },
    { "New 6 (10/30)", 0x07e3780, 0x07e3800 },
    { "New 6 (11/30)", 0x07e3800, 0x07e3880 },
    { "New 6 (12/30)", 0x07e3880, 0x07e3900 },
    { "New 6 (13/30)", 0x07e3900, 0x07e3980 },
    { "New 6 (14/30)", 0x07e3980, 0x07e3a00 },
    { "New 6 (15/30)", 0x07e3a00, 0x07e3a80 },
    { "New 6 (16/30)", 0x07e3a80, 0x07e3b00 },
    { "New 6 (17/30)", 0x07e3b00, 0x07e3b80 },
    { "New 6 (18/30)", 0x07e3b80, 0x07e3c00 },
    { "New 6 (19/30)", 0x07e3c00, 0x07e3c80 },
    { "New 6 (20/30)", 0x07e3c80, 0x07e3d00 },
    { "New 6 (21/30)", 0x07e3d00, 0x07e3d80 },
    { "New 6 (22/30)", 0x07e3d80, 0x07e3e00 },
    { "New 6 (23/30)", 0x07e3e00, 0x07e3e80 },
    { "New 6 (24/30)", 0x07e3e80, 0x07e3f00 },
    { "New 6 (25/30)", 0x07e3f00, 0x07e3f80 },
    { "New 6 (26/30)", 0x07e3f80, 0x07e4000 },
    { "New 6 (27/30)", 0x07e4000, 0x07e4080 },
    { "New 6 (28/30)", 0x07e4080, 0x07e4100 },
    { "New 6 (29/30)", 0x07e4100, 0x07e4180 },
    { "New 6 (30/30)", 0x07e4180, 0x07e4200 },
#else
    { "New 6", 0x07e3300, 0x07e4200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW7[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 7 (1/22)", 0x07e4f00, 0x07e4f80 },
    { "New 7 (2/22)", 0x07e4f80, 0x07e5000 },
    { "New 7 (3/22)", 0x07e5000, 0x07e5080 },
    { "New 7 (4/22)", 0x07e5080, 0x07e5100 },
    { "New 7 (5/22)", 0x07e5100, 0x07e5180 },
    { "New 7 (6/22)", 0x07e5180, 0x07e5200 },
    { "New 7 (7/22)", 0x07e5200, 0x07e5280 },
    { "New 7 (8/22)", 0x07e5280, 0x07e5300 },
    { "New 7 (9/22)", 0x07e5300, 0x07e5380 },
    { "New 7 (10/22)", 0x07e5380, 0x07e5400 },
    { "New 7 (11/22)", 0x07e5400, 0x07e5480 },
    { "New 7 (12/22)", 0x07e5480, 0x07e5500 },
    { "New 7 (13/22)", 0x07e5500, 0x07e5580 },
    { "New 7 (14/22)", 0x07e5580, 0x07e5600 },
    { "New 7 (15/22)", 0x07e5600, 0x07e5680 },
    { "New 7 (16/22)", 0x07e5680, 0x07e5700 },
    { "New 7 (17/22)", 0x07e5700, 0x07e5780 },
    { "New 7 (18/22)", 0x07e5780, 0x07e5800 },
    { "New 7 (19/22)", 0x07e5800, 0x07e5880 },
    { "New 7 (20/22)", 0x07e5880, 0x07e5900 },
    { "New 7 (21/22)", 0x07e5900, 0x07e5980 },
    { "New 7 (22/22)", 0x07e5980, 0x07e5a00 },
#else
    { "New 7", 0x07e4f00, 0x07e5a00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW8[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 8 (1/12)", 0x07e6200, 0x07e6280 },
    { "New 8 (2/12)", 0x07e6280, 0x07e6300 },
    { "New 8 (3/12)", 0x07e6300, 0x07e6380 },
    { "New 8 (4/12)", 0x07e6380, 0x07e6400 },
    { "New 8 (5/12)", 0x07e6400, 0x07e6480 },
    { "New 8 (6/12)", 0x07e6480, 0x07e6500 },
    { "New 8 (7/12)", 0x07e6500, 0x07e6580 },
    { "New 8 (8/12)", 0x07e6580, 0x07e6600 },
    { "New 8 (9/12)", 0x07e6600, 0x07e6680 },
    { "New 8 (10/12)", 0x07e6680, 0x07e6700 },
    { "New 8 (11/12)", 0x07e6700, 0x07e6780 },
    { "New 8 (12/12)", 0x07e6780, 0x07e6800 },
#else
    { "New 8", 0x07e6200, 0x07e6800 },
#endif
};

const sGame_PaletteDataset JOJOS_A_STAGE_NODE_NEW9[] =
{
#ifndef USE_LARGE_PALETTES
    { "New 9 (1/8)", 0x07ef200, 0x07ef280 },
    { "New 9 (2/8)", 0x07ef280, 0x07ef300 },
    { "New 9 (3/8)", 0x07ef300, 0x07ef380 },
    { "New 9 (4/8)", 0x07ef380, 0x07ef400 },
    { "New 9 (5/8)", 0x07ef400, 0x07ef480 },
    { "New 9 (6/8)", 0x07ef480, 0x07ef500 },
    { "New 9 (7/8)", 0x07ef500, 0x07ef580 },
    { "New 9 (8/8)", 0x07ef580, 0x07ef600 },
#else
    { "New 9", 0x07ef200, 0x07ef600 },
#endif
};

const sDescTreeNode JOJOS_A_STAGE_COLLECTION[] =
{
    { "A Lockup", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_STAGE_NODE_ALOCKUP) },
    { "A Health Room", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AHEALTHROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_AHEALTHROOM) },
    { "In A Airplane", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_STAGE_NODE_AIRPLANE) },
    { "Tigerbaum Garden", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_TGARDEN, ARRAYSIZE(JOJOS_A_STAGE_NODE_TGARDEN) },
    { "Hotel (Devil)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELD, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELD) },
    { "Remains", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_REMAINS, ARRAYSIZE(JOJOS_A_STAGE_NODE_REMAINS) },
    { "Hotel (Justice)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_HOTELJ) },
    { "Amusement Park", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_AMPARK, ARRAYSIZE(JOJOS_A_STAGE_NODE_AMPARK) },
    { "Small Island", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLAND, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLAND) },
    { "Desert Noon", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNOON) },
    { "Ruins", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_RUIN, ARRAYSIZE(JOJOS_A_STAGE_NODE_RUIN) },
    { "Country Town Noon", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNOON, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNOON) },
    { "Underground Water", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_UWATER, ARRAYSIZE(JOJOS_A_STAGE_NODE_UWATER) },
    { "Inside House", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_STAGE_NODE_INHOUSE) },
    { "Coffin Room", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CROOM, ARRAYSIZE(JOJOS_A_STAGE_NODE_CROOM) },
    { "Clock Tower", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CLOCK, ARRAYSIZE(JOJOS_A_STAGE_NODE_CLOCK) },
    { "Suburbs", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB) },
    { "On The Bridge", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_OTBRIDGE, ARRAYSIZE(JOJOS_A_STAGE_NODE_OTBRIDGE) },
    { "Country Town Twilight", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTTWILIGHT) },
    { "Desert Morning", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DMORNING, ARRAYSIZE(JOJOS_A_STAGE_NODE_DMORNING) },
    { "Desert Twilight", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DTWILIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DTWILIGHT) },
    { "Desert Night", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_DNIGHT) },
    { "Small Island (Joseph)", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SISLANDJ, ARRAYSIZE(JOJOS_A_STAGE_NODE_SISLANDJ) },
    { "Country Town Night", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_CTNIGHT, ARRAYSIZE(JOJOS_A_STAGE_NODE_CTNIGHT) },
    { "Suburbs 2", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB2, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB2) },
    { "Suburbs 3", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_SUBURB3, ARRAYSIZE(JOJOS_A_STAGE_NODE_SUBURB3) },
    { "New 1", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW1, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW1) },
    { "New 2", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW2, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW2) },
    { "New 3", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW3, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW3) },
    { "New 4", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW4, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW4) },
    { "New 5", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW5, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW5) },
    { "New 6", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW6, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW6) },
    { "New 7", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW7, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW7) },
    { "New 8", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW8, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW8) },
    { "New 9", DESC_NODETYPE_TREE, (void*)JOJOS_A_STAGE_NODE_NEW9, ARRAYSIZE(JOJOS_A_STAGE_NODE_NEW9) },
};

#pragma endregion Stages

#pragma region Characters

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_A[] =
{
    { "Jotaro & Star Platinum A", 0x0336400, 0x0336480, 0x0, 0 }, // ingame
    { "Star Breaker Super A", 0x0336d82, 0x0336d90 },
    { "Star Platinum Charging Flash A", 0x0336880, 0x0336900, 0x0, 2 },
    { "Jotaro Vs/Super A", 0x0410000, 0x0410080, 0x0, 3 },
    { "Jotaro Challenger A", 0x0410080, 0x0410100, 0x0, 4 },
#ifndef USE_LARGE_PALETTES
    { "Jotaro Select/Winning A (1/2)", 0x0410100, 0x0410180, 0x0, 5 },
    { "Jotaro Select/Winning A (2/2)", 0x0410180, 0x0410200, 0x0, 6 },
#else
    { "Jotaro Select/Winning A", 0x0410100, 0x0410200 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Burning A", 0x0336480, 0x0336580 },
#else
    { "Jotaro Burning A (1/2)", 0x0336480, 0x0336500, 0x0, 7 },
    { "Jotaro Burning A (2/2)", 0x0336500, 0x0336580, 0x0, 7 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Tech/Zap A", 0x0336780, 0x0336880 },
#else
    { "Jotaro Tech/Zap A (1/2)", 0x0336780, 0x0336800, 0x0, 7 },
    { "Jotaro Tech/Zap A (2/2)", 0x0336800, 0x0336880, 0x0, 7 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_B[] =
{
    { "Jotaro & Star Platinum B", 0x034a900, 0x034a980, 0x0, 0 },
    { "Star Breaker Super B", 0x034b282, 0x034b290 },
    { "Star Platinum Charging Flash B", 0x034AD80, 0x034AE00, 0x0, 2 },
    { "Jotaro Vs/Super B", 0x0414e00, 0x0414e80, 0x0, 3 },
    { "Jotaro Challenger B", 0x0414e80, 0x0414f00, 0x0, 4 },
#ifndef USE_LARGE_PALETTES
    { "Jotaro Select/Winning B (1/2)", 0x0414f00, 0x0414f80, 0x0, 5 },
    { "Jotaro Select/Winning B (2/2)", 0x0414f80, 0x0415000, 0x0, 6 },
#else
    { "Jotaro Select/Winning B", 0x0414f00, 0x0415000 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Burning B", 0x034a980, 0x034aa80 },
#else
    { "Jotaro Burning B (1/2)", 0x034a980, 0x034aa00, 0x0, 7 },
    { "Jotaro Burning B (2/2)", 0x034aa00, 0x034aa80, 0x0, 7 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Tech/Zap B", 0x034ac80, 0x034ad80 },
#else
    { "Jotaro Tech/Zap B (1/2)", 0x034ac80, 0x034ad00, 0x0, 7 },
    { "Jotaro Tech/Zap B (2/2)", 0x034ad00, 0x034ad80, 0x0, 7 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_C[] =
{
    { "Jotaro & Star Platinum C", 0x035ee00, 0x035ee80, 0x0, 0 },
    { "Star Breaker Super C", 0x035f782, 0x035f790 },
    { "Star Platinum Charging Flash C", 0x035F280, 0x035F300, 0x0, 2 },
    { "Jotaro Vs/Super C", 0x0419c00, 0x0419c80, 0x0, 3 },
    { "Jotaro Challenger C", 0x0419c80, 0x0419d00, 0x0, 4 },
#ifndef USE_LARGE_PALETTES
    { "Jotaro Select/Winning C (1/2)", 0x0419d00, 0x0419d80, 0x0, 5 },
    { "Jotaro Select/Winning C (2/2)", 0x0419d80, 0x0419e00, 0x0, 6 },
#else
    { "Jotaro Select/Winning C", 0x0419d00, 0x0419e00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Burning C", 0x035ee80, 0x035ef80 },
#else
    { "Jotaro Burning C (1/2)", 0x035ee80, 0x035ef00, 0x0, 7 },
    { "Jotaro Burning C (2/2)", 0x035ef00, 0x035ef80, 0x0, 7 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Tech/Zap C", 0x035f180, 0x035f280 },
#else
    { "Jotaro Tech/Zap C (1/2)", 0x035f180, 0x035f200, 0x0, 7 },
    { "Jotaro Tech/Zap C (2/2)", 0x035f200, 0x035f280, 0x0, 7 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_S[] =
{
    { "Jotaro & Star Platinum S", 0x0373300, 0x0373380, 0x0, 0 },
    { "Star Breaker Super S", 0x0373c82, 0x0373c90 },
    { "Star Platinum Charging Flash S", 0x0373780, 0x0373800, 0x0, 2 },
    { "Jotaro Vs/Super S", 0x041ea00, 0x041ea80, 0x0, 3 },
    { "Jotaro Challenger S", 0x041ea80, 0x041eb00, 0x0, 4 },
#ifndef USE_LARGE_PALETTES
    { "Jotaro Select/Winning S (1/2)", 0x041eb00, 0x041eb80, 0x0, 5 },
    { "Jotaro Select/Winning S (2/2)", 0x041eb80, 0x041ec00, 0x0, 6 },
#else
    { "Jotaro Select/Winning S", 0x041eb00, 0x041ec00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Burning S", 0x0373380, 0x0373480 },
#else
    { "Jotaro Burning S (1/2)", 0x0373380, 0x0373400, 0x0, 7 },
    { "Jotaro Burning S (2/2)", 0x0373400, 0x0373480, 0x0, 7 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Tech/Zap S", 0x0373680, 0x0373780 },
#else
    { "Jotaro Tech/Zap S (1/2)", 0x0373680, 0x0373700, 0x0, 7 },
    { "Jotaro Tech/Zap S (2/2)", 0x0373700, 0x0373780, 0x0, 7 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOTARO_Start[] =
{
    { "Jotaro & Star Platinum Start", 0x0387800, 0x0387880, 0x0, 0 },
    { "Star Breaker Super Start", 0x0388182, 0x0388190 },
    { "Star Platinum Charging Flash Start", 0x0387C80, 0x0387D00, 0x0, 2 },
    { "Jotaro Vs/Super Start", 0x0423800, 0x0423880, 0x0, 3 },
    { "Jotaro Challenger Start", 0x0423880, 0x0423900, 0x0, 4 },
#ifndef USE_LARGE_PALETTES
    { "Jotaro Select/Winning Start (1/2)", 0x0423900, 0x0423980, 0x0, 5 },
    { "Jotaro Select/Winning Start (2/2)", 0x0423980, 0x0423a00, 0x0, 6 },
#else
    { "Jotaro Select/Winning Start", 0x0423900, 0x0423a00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Burning Start", 0x0387880, 0x0387980 },
#else
    { "Jotaro Burning Start (1/2)", 0x0387880, 0x0387900, 0x0, 7 },
    { "Jotaro Burning Start (2/2)", 0x0387900, 0x0387980, 0x0, 7 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jotaro Tech/Zap Start", 0x0387b80, 0x0387c80 },
#else
    { "Jotaro Tech/Zap Start (1/2)", 0x0387b80, 0x0387c00, 0x0, 7 },
    { "Jotaro Tech/Zap Start (2/2)", 0x0387c00, 0x0387c80, 0x0, 7 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_A[] =
{
    { "Kakyoin & Hierophant Green A", 0x0337080, 0x0337100, 0x01, 0x0, true },
#ifndef USE_LARGE_PALETTES
    { "Hierophant Changing Pal A (1/7)", 0x0337900, 0x0337980, 0x01, 0x01, true },
    { "Hierophant Changing Pal A (2/7)", 0x0337980, 0x0337a00, 0x01, 0x01, true },
    { "Hierophant Changing Pal A (3/7)", 0x0337a00, 0x0337a80, 0x01, 0x01, true },
    { "Hierophant Changing Pal A (4/7)", 0x0337a80, 0x0337b00, 0x01, 0x01, true },
    { "Hierophant Changing Pal A (5/7)", 0x0337b00, 0x0337b80, 0x01, 0x01, true },
    { "Hierophant Changing Pal A (6/7)", 0x0337b80, 0x0337c00, 0x01, 0x01, true },
    { "Hierophant Changing Pal A (7/7)", 0x0337c00, 0x0337c80, 0x01, 0x01, true },
#else
    { "Hierophant Changing Pal A", 0x0337900, 0x0337c80, 0x01, 0x01, true },
#endif
    { "Hierophant Sparkles A", 0x0337c80, 0x0337ca0 },
    { "Raging Demon Trail A", 0x0337800, 0x0337880, 0x01, 0x01, true },
    { "Kakyoin Remote Mode Afterimage A", 0x0337500, 0x0337580, 0x01, 0x01, true },
    { "Kakyoin Vs/Super A", 0x0410300, 0x0410380 },
    { "Kakyoin Challenger A", 0x0410380, 0x0410400 },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning A (1/2)", 0x0410400, 0x0410480 },
    { "Kakyoin Select/Winning A (2/2)", 0x0410480, 0x0410500 },
#else
    { "Kakyoin Select/Winning A", 0x0410400, 0x0410500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Burning A", 0x0337100, 0x0337200 },
#else
    { "Kakyoin Burning A (1/2)", 0x0337100, 0x0337180, 0x01, 0x0 },
    { "Kakyoin Burning A (2/2)", 0x0337180, 0x0337200, 0x01, 0x0 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Tech/Zap A", 0x0337400, 0x0337500 },
#else
    { "Kakyoin Tech/Zap A (1/2)", 0x0337400, 0x0337480, 0x01, 0x0 },
    { "Kakyoin Tech/Zap A (2/2)", 0x0337480, 0x0337500, 0x01, 0x0 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_B[] =
{
    { "Kakyoin & Hierophant Green B", 0x034b580, 0x034b600, 0x01, 0x0, true },
#ifndef USE_LARGE_PALETTES
    { "Hierophant Changing Pal B (1/7)", 0x034be00, 0x034be80, 0x01, 0x01, true },
    { "Hierophant Changing Pal B (2/7)", 0x034be80, 0x034bf00, 0x01, 0x01, true },
    { "Hierophant Changing Pal B (3/7)", 0x034bf00, 0x034bf80, 0x01, 0x01, true },
    { "Hierophant Changing Pal B (4/7)", 0x034bf80, 0x034c000, 0x01, 0x01, true },
    { "Hierophant Changing Pal B (5/7)", 0x034c000, 0x034c080, 0x01, 0x01, true },
    { "Hierophant Changing Pal B (6/7)", 0x034c080, 0x034c100, 0x01, 0x01, true },
    { "Hierophant Changing Pal B (7/7)", 0x034c100, 0x034c180, 0x01, 0x01, true },
#else
    { "Hierophant Changing Pal B", 0x034be00, 0x034c180, 0x01, 0x01, true },
#endif
    { "Hierophant Sparkles B", 0x034c180, 0x034c1a0 },
    { "Raging Demon Trail B", 0x034bd00, 0x034bd80, 0x01, 0x01, true },
    { "Kakyoin Remote Mode Afterimage B", 0x034BA00, 0x034BA80, 0x01, 0x01, true },
    { "Kakyoin Vs/Super B", 0x0415100, 0x0415180 },
    { "Kakyoin Challenger B", 0x0415180, 0x0415200 },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning B (1/2)", 0x0415200, 0x0415280 },
    { "Kakyoin Select/Winning B (2/2)", 0x0415280, 0x0415300 },
#else
    { "Kakyoin Select/Winning B", 0x0415200, 0x0415300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Burning B", 0x034b600, 0x034b700 },
#else
    { "Kakyoin Burning B (1/2)", 0x034b600, 0x034b680, 0x01, 0x0 },
    { "Kakyoin Burning B (2/2)", 0x034b680, 0x034b700, 0x01, 0x0 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Tech/Zap B", 0x034b900, 0x034ba00 },
#else
    { "Kakyoin Tech/Zap B (1/2)", 0x034b900, 0x034b980, 0x01, 0x0 },
    { "Kakyoin Tech/Zap B (2/2)", 0x034b980, 0x034ba00, 0x01, 0x0 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_C[] =
{
    { "Kakyoin & Hierophant Green C", 0x035fa80, 0x035fb00, 0x01, 0x0, true },
#ifndef USE_LARGE_PALETTES
    { "Hierophant Changing Pal C (1/7)", 0x0360300, 0x0360380, 0x01, 0x01, true },
    { "Hierophant Changing Pal C (2/7)", 0x0360380, 0x0360400, 0x01, 0x01, true },
    { "Hierophant Changing Pal C (3/7)", 0x0360400, 0x0360480, 0x01, 0x01, true },
    { "Hierophant Changing Pal C (4/7)", 0x0360480, 0x0360500, 0x01, 0x01, true },
    { "Hierophant Changing Pal C (5/7)", 0x0360500, 0x0360580, 0x01, 0x01, true },
    { "Hierophant Changing Pal C (6/7)", 0x0360580, 0x0360600, 0x01, 0x01, true },
    { "Hierophant Changing Pal C (7/7)", 0x0360600, 0x0360680, 0x01, 0x01, true },
#else
    { "Hierophant Changing Pal C", 0x0360300, 0x0360680, 0x01, 0x01, true },
#endif
    { "Hierophant Sparkles C", 0x0360680, 0x03606a0 },
    { "Raging Demon Trail C", 0x0360200, 0x0360280, 0x01, 0x01, true },
    { "Kakyoin Remote Mode Afterimage C", 0x035FF00, 0x035FF80, 0x01, 0x01, true },
    { "Kakyoin Vs/Super C", 0x0419f00, 0x0419f80 },
    { "Kakyoin Challenger C", 0x0419f80, 0x041a000 },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning C (1/2)", 0x041a000, 0x041a080 },
    { "Kakyoin Select/Winning C (2/2)", 0x041a080, 0x041a100 },
#else
    { "Kakyoin Select/Winning C", 0x041a000, 0x041a100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Burning C", 0x035fb00, 0x035fc00 },
#else
    { "Kakyoin Burning C (1/2)", 0x035fb00, 0x035fb80, 0x01, 0x0 },
    { "Kakyoin Burning C (2/2)", 0x035fb80, 0x035fc00, 0x01, 0x0 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Tech/Zap C", 0x035fe00, 0x035ff00 },
#else
    { "Kakyoin Tech/Zap C (1/2)", 0x035fe00, 0x035fe80, 0x01, 0x0 },
    { "Kakyoin Tech/Zap C (2/2)", 0x035fe80, 0x035ff00, 0x01, 0x0 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_S[] =
{
    { "Kakyoin & Hierophant Green S", 0x0373f80, 0x0374000, 0x01, 0x0, true },
#ifndef USE_LARGE_PALETTES
    { "Hierophant Changing Pal S (1/7)", 0x0374800, 0x0374880, 0x01, 0x01, true },
    { "Hierophant Changing Pal S (2/7)", 0x0374880, 0x0374900, 0x01, 0x01, true },
    { "Hierophant Changing Pal S (3/7)", 0x0374900, 0x0374980, 0x01, 0x01, true },
    { "Hierophant Changing Pal S (4/7)", 0x0374980, 0x0374a00, 0x01, 0x01, true },
    { "Hierophant Changing Pal S (5/7)", 0x0374a00, 0x0374a80, 0x01, 0x01, true },
    { "Hierophant Changing Pal S (6/7)", 0x0374a80, 0x0374b00, 0x01, 0x01, true },
    { "Hierophant Changing Pal S (7/7)", 0x0374b00, 0x0374b80, 0x01, 0x01, true },
#else
    { "Hierophant Changing Pal S", 0x0374800, 0x0374b80, 0x01, 0x01, true },
#endif
    { "Hierophant Sparkles S", 0x0374b80, 0x0374ba0 },
    { "Raging Demon Trail S", 0x0374700, 0x0374780, 0x01, 0x01, true },
    { "Kakyoin Remote Mode Afterimage S", 0x0374400, 0x0374480, 0x01, 0x01, true },
    { "Kakyoin Vs/Super S", 0x041ed00, 0x041ed80 },
    { "Kakyoin Challenger S", 0x041ed80, 0x041ee00 },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning S (1/2)", 0x041ee00, 0x041ee80 },
    { "Kakyoin Select/Winning S (2/2)", 0x041ee80, 0x041ef00 },
#else
    { "Kakyoin Select/Winning S", 0x041ee00, 0x041ef00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Burning S", 0x0374000, 0x0374100 },
#else
    { "Kakyoin Burning S (1/2)", 0x0374000, 0x0374080, 0x01, 0x0 },
    { "Kakyoin Burning S (2/2)", 0x0374080, 0x0374100, 0x01, 0x0 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Tech/Zap S", 0x0374300, 0x0374400 },
#else
    { "Kakyoin Tech/Zap S (1/2)", 0x0374300, 0x0374380, 0x01, 0x0 },
    { "Kakyoin Tech/Zap S (2/2)", 0x0374380, 0x0374400, 0x01, 0x0 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start[] =
{
    { "Kakyoin & Hierophant Green Start", 0x0388480, 0x0388500, 0x01, 0x0, true },
#ifndef USE_LARGE_PALETTES
    { "Hierophant Changing Pal Start (1/7)", 0x0388d00, 0x0388d80, 0x01, 0x01, true },
    { "Hierophant Changing Pal Start (2/7)", 0x0388d80, 0x0388e00, 0x01, 0x01, true },
    { "Hierophant Changing Pal Start (3/7)", 0x0388e00, 0x0388e80, 0x01, 0x01, true },
    { "Hierophant Changing Pal Start (4/7)", 0x0388e80, 0x0388f00, 0x01, 0x01, true },
    { "Hierophant Changing Pal Start (5/7)", 0x0388f00, 0x0388f80, 0x01, 0x01, true },
    { "Hierophant Changing Pal Start (6/7)", 0x0388f80, 0x0389000, 0x01, 0x01, true },
    { "Hierophant Changing Pal Start (7/7)", 0x0389000, 0x0389080, 0x01, 0x01, true },
#else
    { "Hierophant Changing Pal Start", 0x0388d00, 0x0389080, 0x01, 0x01, true },
#endif
    { "Hierophant Sparkles Start", 0x0389080, 0x03890a0 },
    { "Raging Demon Trail Start", 0x0388c00, 0x0388c80, 0x01, 0x01, true },
    { "Kakyoin Remote Mode Afterimage Start", 0x0388900, 0x0388980, 0x01, 0x01, true },
    { "Kakyoin Vs/Super Start", 0x0423b00, 0x0423b80 },
    { "Kakyoin Challenger Start", 0x0423b80, 0x0423c00 },
#ifndef USE_LARGE_PALETTES
    { "Kakyoin Select/Winning Start (1/2)", 0x0423c00, 0x0423c80 },
    { "Kakyoin Select/Winning Start (2/2)", 0x0423c80, 0x0423d00 },
#else
    { "Kakyoin Select/Winning Start", 0x0423c00, 0x0423d00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Burning Start", 0x0388500, 0x0388600 },
#else
    { "Kakyoin Burning Start (1/2)", 0x0388500, 0x0388580, 0x01, 0x0 },
    { "Kakyoin Burning Start (2/2)", 0x0388580, 0x0388600, 0x01, 0x0 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Kakyoin Tech/Zap Start", 0x0388800, 0x0388900 },
#else
    { "Kakyoin Tech/Zap Start (1/2)", 0x0388800, 0x0388880, 0x01, 0x0 },
    { "Kakyoin Tech/Zap Start (2/2)", 0x0388880, 0x0388900, 0x01, 0x0 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_A[] =
{
    { "Avdol & Magician's Red A", 0x0337d00, 0x0337d80 },
    { "Avdol Fire A", 0x0338580, 0x03385c0 },
    { "Avdol Vs/Super A", 0x0410600, 0x0410680 },
    { "Avdol Challenger A", 0x0410680, 0x0410700 },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning A (1/2)", 0x0410700, 0x0410780 },
    { "Avdol Select / Winning A (2/2)", 0x0410780, 0x0410800 },
#else
    { "Avdol Select / Winning A", 0x0410700, 0x0410800 },
#endif
    { "Avdol & MR Remote Activation A", 0x0338180, 0x0338200 },
#ifdef USE_LARGE_PALETTES
    { "Avdol Burning A", 0x0337d80, 0x0337e80 },
#else
    { "Avdol Burning A (1/2)", 0x0337d80, 0x0337e00 },
    { "Avdol Burning A (2/2)", 0x0337e00, 0x0337e80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Avdol Tech/Zap A", 0x0338080, 0x0338180 },
#else
    { "Avdol Tech/Zap A (1/2)", 0x0338080, 0x0338100 },
    { "Avdol Tech/Zap A (2/2)", 0x0338100, 0x0338180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_B[] =
{
    { "Avdol & Magician's Red B", 0x034c200, 0x034c280 },
    { "Avdol Fire B", 0x034ca80, 0x034cac0 },
    { "Avdol Vs / Super B", 0x0415400, 0x0415480 },
    { "Avdol Challenger B", 0x0415480, 0x0415500 },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning B (1/2)", 0x0415500, 0x0415580 },
    { "Avdol Select / Winning B (2/2)", 0x0415580, 0x0415600 },
#else
    { "Avdol Select / Winning B", 0x0415500, 0x0415600 },
#endif
    { "Avdol & MR Remote Activation B", 0x034c680, 0x034c700 },
#ifdef USE_LARGE_PALETTES
    { "Avdol Burning B", 0x034c280, 0x034c380 },
#else
    { "Avdol Burning B (1/2)", 0x034c280, 0x034c300 },
    { "Avdol Burning B (2/2)", 0x034c300, 0x034c380 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Avdol Tech/Zap B", 0x034c580, 0x034c680 },
#else
    { "Avdol Tech/Zap B (1/2)", 0x034c580, 0x034c600 },
    { "Avdol Tech/Zap B (2/2)", 0x034c600, 0x034c680 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_C[] =
{
    { "Avdol & Magician's Red C", 0x0360700, 0x0360780 },
    { "Avdol Fire C", 0x0360f80, 0x0360fc0 },
    { "Avdol Vs / Super C", 0x041a200, 0x041a280 },
    { "Avdol Challenger C", 0x041a280, 0x041a300 },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning C (1/2)", 0x041a300, 0x041a380 },
    { "Avdol Select / Winning C (2/2)", 0x041a380, 0x041a400 },
#else
    { "Avdol Select / Winning C", 0x041a300, 0x041a400 },
#endif
    { "Avdol & MR Remote Activation C", 0x0360b80, 0x0360c00 },
#ifdef USE_LARGE_PALETTES
    { "Avdol Burning C", 0x0360780, 0x0360880 },
#else
    { "Avdol Burning C (1/2)", 0x0360780, 0x0360800 },
    { "Avdol Burning C (2/2)", 0x0360800, 0x0360880 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Avdol Tech/Zap C", 0x0360a80, 0x0360b80 },
#else
    { "Avdol Tech/Zap C (1/2)", 0x0360a80, 0x0360b00 },
    { "Avdol Tech/Zap C (2/2)", 0x0360b00, 0x0360b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_S[] =
{
    { "Avdol & Magician's Red S", 0x0374c00, 0x0374c80 },
    { "Avdol Fire S", 0x0375480, 0x03754c0 },
    { "Avdol Vs / Super S", 0x041f000, 0x041f080 },
    { "Avdol Challenger S", 0x041f080, 0x041f100 },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning S (1/2)", 0x041f100, 0x041f180 },
    { "Avdol Select / Winning S (2/2)", 0x041f180, 0x041f200 },
#else
    { "Avdol Select / Winning S", 0x041f100, 0x041f200 },
#endif
    { "Avdol & MR Remote Activation S", 0x0375080, 0x0375100 },
#ifdef USE_LARGE_PALETTES
    { "Avdol Burning S", 0x0374c80, 0x0374d80 },
#else
    { "Avdol Burning S (1/2)", 0x0374c80, 0x0374d00 },
    { "Avdol Burning S (2/2)", 0x0374d00, 0x0374d80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Avdol Tech/Zap S", 0x0374f80, 0x0375080 },
#else
    { "Avdol Tech/Zap S (1/2)", 0x0374f80, 0x0375000 },
    { "Avdol Tech/Zap S (2/2)", 0x0375000, 0x0375080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_AVDOL_Start[] =
{
    { "Avdol & Magician's Red Start", 0x0389100, 0x0389180 },
    { "Avdol Fire Start", 0x0389980, 0x03899c0 },
    { "Avdol Vs / Super Start", 0x0423e00, 0x0423e80 },
    { "Avdol Challenger Start", 0x0423e80, 0x0423f00 },
#ifndef USE_LARGE_PALETTES
    { "Avdol Select / Winning Start (1/2)", 0x0423f00, 0x0423f80 },
    { "Avdol Select / Winning Start (2/2)", 0x0423f80, 0x0424000 },
#else
    { "Avdol Select / Winning Start", 0x0423f00, 0x0424000 },
#endif
    { "Avdol & MR Remote Activation Start", 0x0389580, 0x0389600 },
#ifdef USE_LARGE_PALETTES
    { "Avdol Burning Start", 0x0389180, 0x0389280 },
#else
    { "Avdol Burning Start (1/2)", 0x0389180, 0x0389200 },
    { "Avdol Burning Start (2/2)", 0x0389200, 0x0389280 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Avdol Tech/Zap Start", 0x0389480, 0x0389580 },
#else
    { "Avdol Tech/Zap Start (1/2)", 0x0389480, 0x0389500 },
    { "Avdol Tech/Zap Start (2/2)", 0x0389500, 0x0389580 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_A[] =
{
    { "Polnareff & Silver Chariot A", 0x0338980, 0x0338a00, 0x03, 0x00 },
#ifdef USE_LARGE_PALETTES
    { "Chariot's Changing Pal A", 0x0339280, 0x0339380, 0x03, 0x00 },
#else
    { "Chariot's Changing Pal A (1/2)", 0x0339280, 0x0339300, 0x03, 0x00 },
    { "Chariot's Changing Pal A (2/2)", 0x0339300, 0x0339380, 0x03, 0x00 },
#endif
    { "Pol Remote Activation Flash A", 0x0338e00, 0x0338e80, 0x03, 0x00  },
    { "Polnareff Vs / Super A", 0x0410900, 0x0410980 },
    { "Polnareff Challenger A", 0x0410980, 0x0410a00 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning A (1/2)", 0x0410a00, 0x0410a80 },
    { "Polnareff Select / Winning A (2/2)", 0x0410a80, 0x0410b00 },
#else
    { "Polnareff Select / Winning A", 0x0410a00, 0x0410b00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Burning A", 0x0338a00, 0x0338b00 },
#else
    { "Polnareff Burning A (1/2)", 0x0338a00, 0x0338a80, 0x03, 0x00  },
    { "Polnareff Burning A (2/2)", 0x0338a80, 0x0338b00, 0x03, 0x00  },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Tech/Zap A", 0x0338d00, 0x0338e00 },
#else
    { "Polnareff Tech/Zap A (1/2)", 0x0338d00, 0x0338d80, 0x03, 0x00  },
    { "Polnareff Tech/Zap A (2/2)", 0x0338d80, 0x0338e00, 0x03, 0x00  },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_B[] =
{
    { "Polnareff & Silver Chariot B", 0x034ce80, 0x034cf00, 0x03 },
#ifdef USE_LARGE_PALETTES
    { "Chariot's Changing Pal B", 0x034d780, 0x034d880, 0x03, 0x00 },
#else
    { "Chariot's Changing Pal B (1/2)", 0x034d780, 0x034d800, 0x03, 0x00 },
    { "Chariot's Changing Pal B (2/2)", 0x034d800, 0x034d880, 0x03, 0x00 },
#endif
    { "Pol Remote Activation Flash B", 0x034d300, 0x034d380, 0x03, 0x00 },
    { "Polnareff Vs / Super B", 0x0415700, 0x0415780 },
    { "Polnareff Challenger B", 0x0415780, 0x0415800 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning B (1/2)", 0x0415800, 0x0415880 },
    { "Polnareff Select / Winning B (2/2)", 0x0415880, 0x0415900 },
#else
    { "Polnareff Select / Winning B", 0x0415800, 0x0415900 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Burning B", 0x034cf00, 0x034d000 },
#else
    { "Polnareff Burning B (1/2)", 0x034cf00, 0x034cf80, 0x03, 0x00 },
    { "Polnareff Burning B (2/2)", 0x034cf80, 0x034d000, 0x03, 0x00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Tech/Zap B", 0x034d200, 0x034d300 },
#else
    { "Polnareff Tech/Zap B (1/2)", 0x034d200, 0x034d280, 0x03, 0x00 },
    { "Polnareff Tech/Zap B (2/2)", 0x034d280, 0x034d300, 0x03, 0x00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_C[] =
{
    { "Polnareff & Silver Chariot C", 0x0361380, 0x0361400, 0x03 },
#ifdef USE_LARGE_PALETTES
    { "Chariot's Changing Pal C", 0x0361c80, 0x0361d80, 0x03, 0x00 },
#else
    { "Chariot's Changing Pal C (1/2)", 0x0361c80, 0x0361d00, 0x03, 0x00 },
    { "Chariot's Changing Pal C (2/2)", 0x0361d00, 0x0361d80, 0x03, 0x00 },
#endif
    { "Pol Remote Activation Flash C", 0x0361800, 0x0361880, 0x03, 0x00 },
    { "Polnareff Vs / Super C", 0x041a500, 0x041a580 },
    { "Polnareff Challenger C", 0x041a580, 0x041a600 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning C (1/2)", 0x041a600, 0x041a680 },
    { "Polnareff Select / Winning C (2/2)", 0x041a680, 0x041a700 },
#else
    { "Polnareff Select / Winning C", 0x041a600, 0x041a700 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Burning C", 0x0361400, 0x0361500 },
#else
    { "Polnareff Burning C (1/2)", 0x0361400, 0x0361480, 0x03, 0x00 },
    { "Polnareff Burning C (2/2)", 0x0361480, 0x0361500, 0x03, 0x00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Tech/Zap C", 0x0361700, 0x0361800 },
#else
    { "Polnareff Tech/Zap C (1/2)", 0x0361700, 0x0361780, 0x03, 0x00 },
    { "Polnareff Tech/Zap C (2/2)", 0x0361780, 0x0361800, 0x03, 0x00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_S[] =
{
    { "Polnareff & Silver Chariot S", 0x0375880, 0x0375900, 0x03 },
#ifdef USE_LARGE_PALETTES
    { "Chariot's Changing Pal S", 0x0376180, 0x0376280, 0x03, 0x00 },
#else
    { "Chariot's Changing Pal S (1/2)", 0x0376180, 0x0376200, 0x03, 0x00 },
    { "Chariot's Changing Pal S (2/2)", 0x0376200, 0x0376280, 0x03, 0x00 },
#endif
    { "Pol Remote Activation Flash S", 0x0375d00, 0x0375d80, 0x03, 0x00 },
    { "Polnareff Vs / Super S", 0x041f300, 0x041f380 },
    { "Polnareff Challenger S", 0x041f380, 0x041f400 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning S (1/2)", 0x041f400, 0x041f480 },
    { "Polnareff Select / Winning S (2/2)", 0x041f480, 0x041f500 },
#else
    { "Polnareff Select / Winning S", 0x041f400, 0x041f500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Burning S", 0x0375900, 0x0375a00 },
#else
    { "Polnareff Burning S (1/2)", 0x0375900, 0x0375980, 0x03, 0x00 },
    { "Polnareff Burning S (2/2)", 0x0375980, 0x0375a00, 0x03, 0x00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Tech/Zap S", 0x0375c00, 0x0375d00 },
#else
    { "Polnareff Tech/Zap S (1/2)", 0x0375c00, 0x0375c80, 0x03, 0x00 },
    { "Polnareff Tech/Zap S (2/2)", 0x0375c80, 0x0375d00, 0x03, 0x00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_POL_Start[] =
{
    { "Polnareff & Silver Chariot Start", 0x0389d80, 0x0389e00, 0x03 },
#ifdef USE_LARGE_PALETTES
    { "Chariot's Changing Pal Start", 0x038a680, 0x038a780, 0x03, 0x00 },
#else
    { "Chariot's Changing Pal Start (1/2)", 0x038a680, 0x038a700, 0x03, 0x00 },
    { "Chariot's Changing Pal Start (2/2)", 0x038a700, 0x038a780, 0x03, 0x00 },
#endif
    { "Pol Remote Activation Flash Start", 0x038a200, 0x038a280, 0x03, 0x00 },
    { "Polnareff Vs / Super Start", 0x0424100, 0x0424180 },
    { "Polnareff Challenger Start", 0x0424180, 0x0424200 },
#ifndef USE_LARGE_PALETTES
    { "Polnareff Select / Winning Start (1/2)", 0x0424200, 0x0424280 },
    { "Polnareff Select / Winning Start (2/2)", 0x0424280, 0x0424300 },
#else
    { "Polnareff Select / Winning Start", 0x0424200, 0x0424300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Burning Start", 0x0389e00, 0x0389f00 },
#else
    { "Polnareff Burning Start (1/2)", 0x0389e00, 0x0389e80, 0x03, 0x00 },
    { "Polnareff Burning Start (2/2)", 0x0389e80, 0x0389f00, 0x03, 0x00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Polnareff Tech/Zap Start", 0x038a100, 0x038a200 },
#else
    { "Polnareff Tech/Zap Start (1/2)", 0x038a100, 0x038a180, 0x03, 0x00 },
    { "Polnareff Tech/Zap Start (2/2)", 0x038a180, 0x038a200, 0x03, 0x00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_A[] =
{
    { "Joseph & Hermit Purple A", 0x0339600, 0x0339680 },
    { "Joseph Vs / Super A", 0x0410c00, 0x0410c80 },
    { "Joseph Challenger A", 0x0410c80, 0x0410d00 },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning A (1/2)", 0x0410d00, 0x0410d80 },
    { "Joseph Select / Winning A (2/2)", 0x0410d80, 0x0410e00 },
#else
    { "Joseph Select / Winning A", 0x0410d00, 0x0410e00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Burning A", 0x0339680, 0x0339780 },
#else
    { "Joseph Burning A (1/2)", 0x0339680, 0x0339700 },
    { "Joseph Burning A (2/2)", 0x0339700, 0x0339780 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Tech/Zap/CC A", 0x0339980, 0x0339a80 },
#else
    { "Joseph Tech/Zap/CC A (1/2)", 0x0339980, 0x0339a00 },
    { "Joseph Tech/Zap/CC A (2/2)", 0x0339a00, 0x0339a80 },
#endif
    { "Flash Back Manga Panels (Joseph 236aa)", 0x0335B80, 0x0335BC0 },
    { "Lisa Lisa & Caesar (Joseph 236aa)", 0x0335C00, 0x0335C80 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_B[] =
{
    { "Joseph & Hermit Purple B", 0x034db00, 0x034db80 },
    { "Joseph Vs / Super B", 0x0415a00, 0x0415a80 },
    { "Joseph Challenger B", 0x0415a80, 0x0415b00 },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning B (1/2)", 0x0415b00, 0x0415b80 },
    { "Joseph Select / Winning B (2/2)", 0x0415b80, 0x0415c00 },
#else
    { "Joseph Select / Winning B", 0x0415b00, 0x0415c00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Burning B", 0x034db80, 0x034dc80 },
#else
    { "Joseph Burning B (1/2)", 0x034db80, 0x034dc00 },
    { "Joseph Burning B (2/2)", 0x034dc00, 0x034dc80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Tech/Zap/CC B", 0x034de80, 0x034df80 },
#else
    { "Joseph Tech/Zap/CC B (1/2)", 0x034de80, 0x034df00 },
    { "Joseph Tech/Zap/CC B (2/2)", 0x034df00, 0x034df80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_C[] =
{
    { "Joseph & Hermit Purple C", 0x0362000, 0x0362080 },
    { "Joseph Vs / Super C", 0x041a800, 0x041a880 },
    { "Joseph Challenger C", 0x041a880, 0x041a900 },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning C (1/2)", 0x041a900, 0x041a980 },
    { "Joseph Select / Winning C (2/2)", 0x041a980, 0x041aa00 },
#else
    { "Joseph Select / Winning C", 0x041a900, 0x041aa00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Burning C", 0x0362080, 0x0362180 },
#else
    { "Joseph Burning C (1/2)", 0x0362080, 0x0362100 },
    { "Joseph Burning C (2/2)", 0x0362100, 0x0362180 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Tech/Zap/CC C", 0x0362380, 0x0362480 },
#else
    { "Joseph Tech/Zap/CC C (1/2)", 0x0362380, 0x0362400 },
    { "Joseph Tech/Zap/CC C (2/2)", 0x0362400, 0x0362480 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_S[] =
{
    { "Joseph & Hermit Purple S", 0x0376500, 0x0376580 },
    { "Joseph Vs / Super S", 0x041f600, 0x041f680 },
    { "Joseph Challenger S", 0x041f680, 0x041f700 },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning S (1/2)", 0x041f700, 0x041f780 },
    { "Joseph Select / Winning S (2/2)", 0x041f780, 0x041f800 },
#else
    { "Joseph Select / Winning S", 0x041f700, 0x041f800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Burning S", 0x0376580, 0x0376680 },
#else
    { "Joseph Burning S (1/2)", 0x0376580, 0x0376600 },
    { "Joseph Burning S (2/2)", 0x0376600, 0x0376680 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Tech/Zap/CC S", 0x0376880, 0x0376980 },
#else
    { "Joseph Tech/Zap/CC S (1/2)", 0x0376880, 0x0376900 },
    { "Joseph Tech/Zap/CC S (2/2)", 0x0376900, 0x0376980 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_JOSEPH_Start[] =
{
    { "Joseph & Hermit Purple Start", 0x038aa00, 0x038aa80 },
    { "Joseph Vs / Super Start", 0x0424400, 0x0424480 },
    { "Joseph Challenger Start", 0x0424480, 0x0424500 },
#ifndef USE_LARGE_PALETTES
    { "Joseph Select / Winning Start (1/2)", 0x0424500, 0x0424580 },
    { "Joseph Select / Winning Start (2/2)", 0x0424580, 0x0424600 },
#else
    { "Joseph Select / Winning Start", 0x0424500, 0x0424600 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Burning Start", 0x038aa80, 0x038ab80 },
#else
    { "Joseph Burning Start (1/2)", 0x038aa80, 0x038ab00 },
    { "Joseph Burning Start (2/2)", 0x038ab00, 0x038ab80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Joseph Tech/Zap/CC Start", 0x038ad80, 0x038ae80 },
#else
    { "Joseph Tech/Zap/CC Start (1/2)", 0x038ad80, 0x038ae00 },
    { "Joseph Tech/Zap/CC Start (2/2)", 0x038ae00, 0x038ae80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_A[] =
{
    { "Iggy & The Fool A", 0x033a280, 0x033a300 },
#ifndef USE_LARGE_PALETTES
    { "Raging Demon Trail A (1/3)", 0x033aa80, 0x033ab00 },
    { "Raging Demon Trail A (2/3)", 0x033ab00, 0x033ab80 },
    { "Raging Demon Trail A (3/3)", 0x033ab80, 0x033ac00 },
#else
    { "Raging Demon Trail A", 0x033aa80, 0x033ac00 },
#endif
    { "Iggy Raging Demon Static (A / B / C / S / Start)", 0x030D300, 0x030D320 },
    { "Iggy Vs / Super A", 0x0410f00, 0x0410f80 },
    { "Iggy Challenger A", 0x0410f80, 0x0411000 },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning A (1/2)", 0x0411000, 0x0411080 },
    { "Iggy Select / Winning A (2/2)", 0x0411080, 0x0411100 },
#else
    { "Iggy Select / Winning A", 0x0411000, 0x0411100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Burning A", 0x033a300, 0x033a400 },
#else
    { "Iggy Burning A (1/2)", 0x033a300, 0x033a380 },
    { "Iggy Burning A (2/2)", 0x033a380, 0x033a400 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Tech/Zap A", 0x033a600, 0x033a700 },
#else
    { "Iggy Tech/Zap A (1/2)", 0x033a600, 0x033a680 },
    { "Iggy Tech/Zap A (2/2)", 0x033a680, 0x033a700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_B[] =
{
    { "Iggy & The Fool B", 0x034e780, 0x034e800 },
#ifndef USE_LARGE_PALETTES
    { "Raging Demon Trail B (1/3)", 0x034ef80, 0x034f000 },
    { "Raging Demon Trail B (2/3)", 0x034f000, 0x034f080 },
    { "Raging Demon Trail B (3/3)", 0x034f080, 0x034f100 },
#else
    { "Raging Demon Trail B", 0x034ef80, 0x034f100 },
#endif
    { "Iggy Vs / Super B", 0x0415d00, 0x0415d80 },
    { "Iggy Challenger B", 0x0415d80, 0x0415e00 },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning B (1/2)", 0x0415e00, 0x0415e80 },
    { "Iggy Select / Winning B (2/2)", 0x0415e80, 0x0415f00 },
#else
    { "Iggy Select / Winning B", 0x0415e00, 0x0415f00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Burning B", 0x034e800, 0x034e900 },
#else
    { "Iggy Burning B (1/2)", 0x034e800, 0x034e880 },
    { "Iggy Burning B (2/2)", 0x034e880, 0x034e900 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Tech/Zap B", 0x034eb00, 0x034ec00 },
#else
    { "Iggy Tech/Zap B (1/2)", 0x034eb00, 0x034eb80 },
    { "Iggy Tech/Zap B (2/2)", 0x034eb80, 0x034ec00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_C[] =
{
    { "Iggy & The Fool C", 0x0362c80, 0x0362d00 },
#ifndef USE_LARGE_PALETTES
    { "Raging Demon Trail C (1/3)", 0x0363480, 0x0363500 },
    { "Raging Demon Trail C (2/3)", 0x0363500, 0x0363580 },
    { "Raging Demon Trail C (3/3)", 0x0363580, 0x0363600 },
#else
    { "Raging Demon Trail C", 0x0363480, 0x0363600 },
#endif
    { "Iggy Vs / Super C", 0x041ab00, 0x041ab80 },
    { "Iggy Challenger C", 0x041ab80, 0x041ac00 },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning C (1/2)", 0x041ac00, 0x041ac80 },
    { "Iggy Select / Winning C (2/2)", 0x041ac80, 0x041ad00 },
#else
    { "Iggy Select / Winning C", 0x041ac00, 0x041ad00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Burning C", 0x0362d00, 0x0362e00 },
#else
    { "Iggy Burning C (1/2)", 0x0362d00, 0x0362d80 },
    { "Iggy Burning C (2/2)", 0x0362d80, 0x0362e00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Tech/Zap C", 0x0363000, 0x0363100 },
#else
    { "Iggy Tech/Zap C (1/2)", 0x0363000, 0x0363080 },
    { "Iggy Tech/Zap C (2/2)", 0x0363080, 0x0363100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_S[] =
{
    { "Iggy & The Fool S", 0x0377180, 0x0377200 },
#ifndef USE_LARGE_PALETTES
    { "Raging Demon Trail S (1/3)", 0x0377980, 0x0377a00 },
    { "Raging Demon Trail S (2/3)", 0x0377a00, 0x0377a80 },
    { "Raging Demon Trail S (3/3)", 0x0377a80, 0x0377b00 },
#else
    { "Raging Demon Trail S", 0x0377980, 0x0377b00 },
#endif
    { "Iggy Vs / Super S", 0x041f900, 0x041f980 },
    { "Iggy Challenger S", 0x041f980, 0x041fa00 },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning S (1/2)", 0x041fa00, 0x041fa80 },
    { "Iggy Select / Winning S (2/2)", 0x041fa80, 0x041fb00 },
#else
    { "Iggy Select / Winning S", 0x041fa00, 0x041fb00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Burning S", 0x0377200, 0x0377300 },
#else
    { "Iggy Burning S (1/2)", 0x0377200, 0x0377280 },
    { "Iggy Burning S (2/2)", 0x0377280, 0x0377300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Tech/Zap S", 0x0377500, 0x0377600 },
#else
    { "Iggy Tech/Zap S (1/2)", 0x0377500, 0x0377580 },
    { "Iggy Tech/Zap S (2/2)", 0x0377580, 0x0377600 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_IGGY_Start[] =
{
    { "Iggy & The Fool Start", 0x038b680, 0x038b700 },
#ifndef USE_LARGE_PALETTES
    { "Raging Demon Trail Start (1/3)", 0x038be80, 0x038bf00 },
    { "Raging Demon Trail Start (2/3)", 0x038bf00, 0x038bf80 },
    { "Raging Demon Trail Start (3/3)", 0x038bf80, 0x038c000 },
#else
    { "Raging Demon Trail Start", 0x038be80, 0x038c000 },
#endif
    { "Iggy Vs / Super Start", 0x0424700, 0x0424780 },
    { "Iggy Challenger Start", 0x0424780, 0x0424800 },
#ifndef USE_LARGE_PALETTES
    { "Iggy Select / Winning Start (1/2)", 0x0424800, 0x0424880 },
    { "Iggy Select / Winning Start (2/2)", 0x0424880, 0x0424900 },
#else
    { "Iggy Select / Winning Start", 0x0424800, 0x0424900 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Burning Start", 0x038b700, 0x038b800 },
#else
    { "Iggy Burning Start (1/2)", 0x038b700, 0x038b780 },
    { "Iggy Burning Start (2/2)", 0x038b780, 0x038b800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Iggy Tech/Zap Start", 0x038ba00, 0x038bb00 },
#else
    { "Iggy Tech/Zap Start (1/2)", 0x038ba00, 0x038ba80 },
    { "Iggy Tech/Zap Start (2/2)", 0x038ba80, 0x038bb00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_A[] =
{
    { "Alessi & Sethan A", 0x033af00, 0x033af80 },
    { "Alessi A Wave Attack", 0x033b780, 0x033b7c0 },
    { "Alessi Winpose A", 0x033b800, 0x033b880 },
    { "Alessi Vs / Super A", 0x0411200, 0x0411280 },
    { "Alessi Challenger A", 0x0411280, 0x0411300 },
#ifndef USE_LARGE_PALETTES
    { "Alessi Select / Winning A (1/2)", 0x0411300, 0x0411380 },
    { "Alessi Select / Winning A (2/2)", 0x0411380, 0x0411400 },
#else
    { "Alessi Select / Winning A", 0x0411300, 0x0411400 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Burning A", 0x033af80, 0x033b080 },
#else
    { "Alessi Burning A (1/2)", 0x033af80, 0x033b000 },
    { "Alessi Burning A (2/2)", 0x033b000, 0x033b080 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Tech/Zap A", 0x033b280, 0x033b380 },
#else
    { "Alessi Tech/Zap A (1/2)", 0x033b280, 0x033b300 },
    { "Alessi Tech/Zap A (2/2)", 0x033b300, 0x033b380 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_B[] =
{
    { "Alessi & Sethan B", 0x034f400, 0x034f480 },
    { "Alessi B Wave Attack", 0x034fc80, 0x034fcc0 },
    { "Alessi Winpose B", 0x034fd00, 0x034fd80 },
    { "Alessi Vs / Super B", 0x0416000, 0x0416080 },
    { "Alessi Challenger B", 0x0416080, 0x0416100 },
#ifndef USE_LARGE_PALETTES
    { "Alessi Select / Winning B (1/2)", 0x0416100, 0x0416180 },
    { "Alessi Select / Winning B (2/2)", 0x0416180, 0x0416200 },
#else
    { "Alessi Select / Winning B", 0x0416100, 0x0416200 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Burning B", 0x034f480, 0x034f580 },
#else
    { "Alessi Burning B (1/2)", 0x034f480, 0x034f500 },
    { "Alessi Burning B (2/2)", 0x034f500, 0x034f580 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Tech/Zap B", 0x034f780, 0x034f880 },
#else
    { "Alessi Tech/Zap B (1/2)", 0x034f780, 0x034f800 },
    { "Alessi Tech/Zap B (2/2)", 0x034f800, 0x034f880 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_C[] =
{
    { "Alessi & Sethan C", 0x0363900, 0x0363980 },
    { "Alessi C Wave Attack", 0x0364180, 0x03641c0 },
    { "Alessi Winpose C", 0x0364200, 0x0364280 },
    { "Alessi Vs / Super C", 0x041ae00, 0x041ae80 },
    { "Alessi Challenger C", 0x041ae80, 0x041af00 },
#ifndef USE_LARGE_PALETTES
    { "Alessi Select / Winning C (1/2)", 0x041af00, 0x041af80 },
    { "Alessi Select / Winning C (2/2)", 0x041af80, 0x041b000 },
#else
    { "Alessi Select / Winning C", 0x041af00, 0x041b000 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Burning C", 0x0363980, 0x0363a80 },
#else
    { "Alessi Burning C (1/2)", 0x0363980, 0x0363a00 },
    { "Alessi Burning C (2/2)", 0x0363a00, 0x0363a80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Tech/Zap C", 0x0363c80, 0x0363d80 },
#else
    { "Alessi Tech/Zap C (1/2)", 0x0363c80, 0x0363d00 },
    { "Alessi Tech/Zap C (2/2)", 0x0363d00, 0x0363d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_S[] =
{
    { "Alessi & Sethan S", 0x0377e00, 0x0377e80 },
    { "Alessi S Wave Attack", 0x0378680, 0x03786c0 },
    { "Alessi Winpose S", 0x0378700, 0x0378780 },
    { "Alessi Vs / Super S", 0x041fc00, 0x041fc80 },
    { "Alessi Challenger S", 0x041fc80, 0x041fd00 },
#ifndef USE_LARGE_PALETTES
    { "Alessi Select / Winning S (1/2)", 0x041fd00, 0x041fd80 },
    { "Alessi Select / Winning S (2/2)", 0x041fd80, 0x041fe00 },
#else
    { "Alessi Select / Winning S", 0x041fd00, 0x041fe00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Burning S", 0x0377e80, 0x0377f80 },
#else
    { "Alessi Burning S (1/2)", 0x0377e80, 0x0377f00 },
    { "Alessi Burning S (2/2)", 0x0377f00, 0x0377f80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Tech/Zap S", 0x0378180, 0x0378280 },
#else
    { "Alessi Tech/Zap S (1/2)", 0x0378180, 0x0378200 },
    { "Alessi Tech/Zap S (2/2)", 0x0378200, 0x0378280 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_ALESSI_Start[] =
{
    { "Alessi & Sethan Start", 0x038c300, 0x038c380 },
    { "Alessi Start Wave Attack", 0x038cb80, 0x038cbc0 },
    { "Alessi Winpose Start", 0x038cc00, 0x038cc80 },
    { "Alessi Vs / Super Start", 0x0424a00, 0x0424a80 },
    { "Alessi Challenger Start", 0x0424a80, 0x0424b00 },
#ifndef USE_LARGE_PALETTES
    { "Alessi Select / Winning Start (1/2)", 0x0424b00, 0x0424b80 },
    { "Alessi Select / Winning Start (2/2)", 0x0424b80, 0x0424c00 },
#else
    { "Alessi Select / Winning Start", 0x0424b00, 0x0424c00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Burning Start", 0x038c380, 0x038c480 },
#else
    { "Alessi Burning Start (1/2)", 0x038c380, 0x038c400 },
    { "Alessi Burning Start (2/2)", 0x038c400, 0x038c480 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Alessi Tech/Zap Start", 0x038c680, 0x038c780 },
#else
    { "Alessi Tech/Zap Start (1/2)", 0x038c680, 0x038c700 },
    { "Alessi Tech/Zap Start (2/2)", 0x038c700, 0x038c780 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_A[] =
{
    { "Chaka A", 0x033bb80, 0x033bc00 },
    { "Chaka A Super Trail", 0x033c400, 0x033c480 },
    { "Chaka Vs / Super A", 0x0411500, 0x0411580 },
    { "Chaka Challenger A", 0x0411580, 0x0411600 },
    { "Chaka Select / Winning A", 0x0411600, 0x0411680 },
#ifdef USE_LARGE_PALETTES
    { "Chaka Burning A ", 0x033bc00, 0x033bd00 },
#else
    { "Chaka Burning A  (1/2)", 0x033bc00, 0x033bc80 },
    { "Chaka Burning A  (2/2)", 0x033bc80, 0x033bd00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chaka Tech/Zap/CC/Counter A", 0x033bf00, 0x033c000 },
#else
    { "Chaka Tech/Zap/CC/Counter A (1/2)", 0x033bf00, 0x033bf80 },
    { "Chaka Tech/Zap/CC/Counter A (2/2)", 0x033bf80, 0x033c000 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_B[] =
{
    { "Chaka B", 0x0350080, 0x0350100 },
    { "Chaka B Super Trail", 0x0350900, 0x0350980 },
    { "Chaka Vs / Super B", 0x0416300, 0x0416380 },
    { "Chaka Challenger B", 0x0416380, 0x0416400 },
    { "Chaka Select / Winning B", 0x0416400, 0x0416480 },
#ifdef USE_LARGE_PALETTES
    { "Chaka Burning B ", 0x0350100, 0x0350200 },
#else
    { "Chaka Burning B  (1/2)", 0x0350100, 0x0350180 },
    { "Chaka Burning B  (2/2)", 0x0350180, 0x0350200 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chaka Tech/Zap/CC/Counter B", 0x0350400, 0x0350500 },
#else
    { "Chaka Tech/Zap/CC/Counter B (1/2)", 0x0350400, 0x0350480 },
    { "Chaka Tech/Zap/CC/Counter B (2/2)", 0x0350480, 0x0350500 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_C[] =
{
    { "Chaka C", 0x0364580, 0x0364600 },
    { "Chaka C Super Trail", 0x0364e00, 0x0364e80 },
    { "Chaka Vs / Super C", 0x041b100, 0x041b180 },
    { "Chaka Challenger C", 0x041b180, 0x041b200 },
    { "Chaka Select / Winning C", 0x041b200, 0x041b280 },
#ifdef USE_LARGE_PALETTES
    { "Chaka Burning C", 0x0364600, 0x0364700 },
#else
    { "Chaka Burning C (1/2)", 0x0364600, 0x0364680 },
    { "Chaka Burning C (2/2)", 0x0364680, 0x0364700 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chaka Tech/Zap/CC/Counter C", 0x0364900, 0x0364a00 },
#else
    { "Chaka Tech/Zap/CC/Counter C (1/2)", 0x0364900, 0x0364980 },
    { "Chaka Tech/Zap/CC/Counter C (2/2)", 0x0364980, 0x0364a00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_S[] =
{
    { "Chaka S", 0x0378a80, 0x0378b00 },
    { "Chaka S Super Trail", 0x0379300, 0x0379380 },
    { "Chaka Vs / Super S", 0x041ff00, 0x041ff80 },
    { "Chaka Challenger S", 0x041ff80, 0x0420000 },
    { "Chaka Select / Winning S", 0x0420000, 0x0420080 },
#ifdef USE_LARGE_PALETTES
    { "Chaka Burning S", 0x0378b00, 0x0378c00 },
#else
    { "Chaka Burning S (1/2)", 0x0378b00, 0x0378b80 },
    { "Chaka Burning S (2/2)", 0x0378b80, 0x0378c00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chaka Tech/Zap/CC/Counter S", 0x0378e00, 0x0378f00 },
#else
    { "Chaka Tech/Zap/CC/Counter S (1/2)", 0x0378e00, 0x0378e80 },
    { "Chaka Tech/Zap/CC/Counter S (2/2)", 0x0378e80, 0x0378f00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_CHAKA_Start[] =
{
    { "Chaka Start", 0x038cf80, 0x038d000 },
    { "Chaka Start Super Trail", 0x038d800, 0x038d880 },
    { "Chaka Vs / Super Start", 0x0424d00, 0x0424d80 },
    { "Chaka Challenger Start", 0x0424d80, 0x0424e00 },
    { "Chaka Select / Winning Start", 0x0424e00, 0x0424e80 },
#ifdef USE_LARGE_PALETTES
    { "Chaka Burning Start", 0x038d000, 0x038d100 },
#else
    { "Chaka Burning Start (1/2)", 0x038d000, 0x038d080 },
    { "Chaka Burning Start (2/2)", 0x038d080, 0x038d100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chaka Tech/Zap/CC/Counter Start", 0x038d300, 0x038d400 },
#else
    { "Chaka Tech/Zap/CC/Counter Start (1/2)", 0x038d300, 0x038d380 },
    { "Chaka Tech/Zap/CC/Counter Start (2/2)", 0x038d380, 0x038d400 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_A[] =
{
    { "Devo & Ebony Devil A", 0x033c800, 0x033c880 },
    { "Ebony Devil Stand Off A", 0x033cf00, 0x033cf80 },
    { "Ebony Stand On Transition A", 0x033ce00, 0x033ce80 },
#ifndef USE_LARGE_PALETTES
    { "Ebony Super Trail A (1/3)", 0x033d100, 0x033d180 },
    { "Ebony Super Trail A (2/3)", 0x033d180, 0x033d200 },
    { "Ebony Super Trail A (3/3)", 0x033d200, 0x033d280 },
#else
    { "Ebony Super Trail A", 0x033d100, 0x033d280 },
#endif
    { "Devo Intro Stuff A", 0x033d400, 0x033d480 },
    { "Devo Vs / Super A", 0x0411800, 0x0411880 },
    { "Devo Challenger A", 0x0411880, 0x0411900 },
#ifndef USE_LARGE_PALETTES
    { "Devo Select / Winning A (1/2)", 0x0411900, 0x0411980 },
    { "Devo Select / Winning A (2/2)", 0x0411980, 0x0411a00 },
#else
    { "Devo Select / Winning A", 0x0411900, 0x0411a00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo & Ebony Devil Burning A", 0x033c880, 0x033c980 },
#else
    { "Devo & Ebony Devil Burning A (1/2)", 0x033c880, 0x033c900 },
    { "Devo & Ebony Devil Burning A (2/2)", 0x033c900, 0x033c980 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo Tech/Zap A", 0x033cb80, 0x033cc80 },
#else
    { "Devo Tech/Zap A (1/2)", 0x033cb80, 0x033cc00 },
    { "Devo Tech/Zap A (2/2)", 0x033cc00, 0x033cc80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_B[] =
{
    { "Devo & Ebony Devil B", 0x0350d00, 0x0350d80 },
    { "Ebony Devil Stand Off B", 0x0351400, 0x0351480 },
    { "Ebony Stand On Transition B", 0x0351300, 0x0351380 },
#ifndef USE_LARGE_PALETTES
    { "Ebony Super Trail B (1/3)", 0x0351600, 0x0351680 },
    { "Ebony Super Trail B (2/3)", 0x0351680, 0x0351700 },
    { "Ebony Super Trail B (3/3)", 0x0351700, 0x0351780 },
#else
    { "Ebony Super Trail B", 0x0351600, 0x0351780 },
#endif
    { "Devo Intro Stuff B", 0x0351900, 0x0351980 },
    { "Devo Vs / Super B", 0x0416600, 0x0416680 },
    { "Devo Challenger B", 0x0416680, 0x0416700 },
#ifndef USE_LARGE_PALETTES
    { "Devo Select / Winning B (1/2)", 0x0416700, 0x0416780 },
    { "Devo Select / Winning B (2/2)", 0x0416780, 0x0416800 },
#else
    { "Devo Select / Winning B", 0x0416700, 0x0416800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo & Ebony Devil Burning B", 0x0350d80, 0x0350e80 },
#else
    { "Devo & Ebony Devil Burning B (1/2)", 0x0350d80, 0x0350e00 },
    { "Devo & Ebony Devil Burning B (2/2)", 0x0350e00, 0x0350e80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo Tech/Zap B", 0x0351080, 0x0351180 },
#else
    { "Devo Tech/Zap B (1/2)", 0x0351080, 0x0351100 },
    { "Devo Tech/Zap B (2/2)", 0x0351100, 0x0351180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_C[] =
{
    { "Devo & Ebony Devil C", 0x0365200, 0x0365280 },
    { "Ebony Devil Stand Off C", 0x0365900, 0x0365980 },
    { "Ebony Stand On Transition C", 0x0365800, 0x0365880 },
#ifndef USE_LARGE_PALETTES
    { "Ebony Super Trail C (1/3)", 0x0365b00, 0x0365b80 },
    { "Ebony Super Trail C (2/3)", 0x0365b80, 0x0365c00 },
    { "Ebony Super Trail C (3/3)", 0x0365c00, 0x0365c80 },
#else
    { "Ebony Super Trail C", 0x0365b00, 0x0365c80 },
#endif
    { "Devo Intro Stuff C", 0x0365e00, 0x0365e80 },
    { "Devo Vs / Super C", 0x041b400, 0x041b480 },
    { "Devo Challenger C", 0x041b480, 0x041b500 },
#ifndef USE_LARGE_PALETTES
    { "Devo Select / Winning C (1/2)", 0x041b500, 0x041b580 },
    { "Devo Select / Winning C (2/2)", 0x041b580, 0x041b600 },
#else
    { "Devo Select / Winning C", 0x041b500, 0x041b600 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo & Ebony Devil Burning C", 0x0365280, 0x0365380 },
#else
    { "Devo & Ebony Devil Burning C (1/2)", 0x0365280, 0x0365300 },
    { "Devo & Ebony Devil Burning C (2/2)", 0x0365300, 0x0365380 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo Tech/Zap C", 0x0365580, 0x0365680 },
#else
    { "Devo Tech/Zap C (1/2)", 0x0365580, 0x0365600 },
    { "Devo Tech/Zap C (2/2)", 0x0365600, 0x0365680 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_S[] =
{
    { "Devo & Ebony Devil S", 0x0379700, 0x0379780 },
    { "Ebony Devil Stand Off S", 0x0379e00, 0x0379e80 },
    { "Ebony Stand On Transition S", 0x0379d00, 0x0379d80 },
#ifndef USE_LARGE_PALETTES
    { "Ebony Super Trail S (1/3)", 0x037a000, 0x037a080 },
    { "Ebony Super Trail S (2/3)", 0x037a080, 0x037a100 },
    { "Ebony Super Trail S (3/3)", 0x037a100, 0x037a180 },
#else
    { "Ebony Super Trail S", 0x037a000, 0x037a180 },
#endif
    { "Devo Intro Stuff S", 0x037a300, 0x037a380 },
    { "Devo Vs / Super S", 0x0420200, 0x0420280 },
    { "Devo Challenger S", 0x0420280, 0x0420300 },
#ifndef USE_LARGE_PALETTES
    { "Devo Select / Winning S (1/2)", 0x0420300, 0x0420380 },
    { "Devo Select / Winning S (2/2)", 0x0420380, 0x0420400 },
#else
    { "Devo Select / Winning S", 0x0420300, 0x0420400 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo & Ebony Devil Burning S", 0x0379780, 0x0379880 },
#else
    { "Devo & Ebony Devil Burning S (1/2)", 0x0379780, 0x0379800 },
    { "Devo & Ebony Devil Burning S (2/2)", 0x0379800, 0x0379880 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo Tech/Zap S", 0x0379a80, 0x0379b80 },
#else
    { "Devo Tech/Zap S (1/2)", 0x0379a80, 0x0379b00 },
    { "Devo Tech/Zap S (2/2)", 0x0379b00, 0x0379b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start[] =
{
    { "Devo & Ebony Devil Start", 0x038dc00, 0x038dc80 },
    { "Ebony Devil Stand Off Start", 0x038e300, 0x038e380 },
    { "Ebony Stand On Transition Start", 0x038e200, 0x038e280 },
#ifndef USE_LARGE_PALETTES
    { "Ebony Super Trail Start (1/3)", 0x038e500, 0x038e580 },
    { "Ebony Super Trail Start (2/3)", 0x038e580, 0x038e600 },
    { "Ebony Super Trail Start (3/3)", 0x038e600, 0x038e680 },
#else
    { "Ebony Super Trail Start", 0x038e500, 0x038e680 },
#endif
    { "Devo Intro Stuff Start", 0x038e800, 0x038e880 },
    { "Devo Vs / Super Start", 0x0425000, 0x0425080 },
    { "Devo Challenger Start", 0x0425080, 0x0425100 },
#ifndef USE_LARGE_PALETTES
    { "Devo Select / Winning Start (1/2)", 0x0425100, 0x0425180 },
    { "Devo Select / Winning Start (2/2)", 0x0425180, 0x0425200 },
#else
    { "Devo Select / Winning Start", 0x0425100, 0x0425200 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo & Ebony Devil Burning Star", 0x038dc80, 0x038dd80 }, 
#else
    { "Devo & Ebony Devil Burning Star (1/2)", 0x038dc80, 0x038dd00 }, 
    { "Devo & Ebony Devil Burning Star (2/2)", 0x038dd00, 0x038dd80 }, 
#endif
#ifdef USE_LARGE_PALETTES
    { "Devo Tech/Zap Start", 0x038df80, 0x038e080 },
#else
    { "Devo Tech/Zap Start (1/2)", 0x038df80, 0x038e000 },
    { "Devo Tech/Zap Start (2/2)", 0x038e000, 0x038e080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_A[] =
{
    { "Midler & High Priestess A", 0x033e100, 0x033e180 },
#ifndef USE_LARGE_PALETTES
    { "Midler's Super Cars A (1/4)", 0x033e980, 0x033ea00 },
    { "Midler's Super Cars A (2/4)", 0x033ea00, 0x033ea80 },
    { "Midler's Super Cars A (3/4)", 0x033ea80, 0x033eb00 },
    { "Midler's Super Cars A (4/4)", 0x033eb00, 0x033eb80 },
#else
    { "Midler's Super Cars A", 0x033e980, 0x033eb80 },
#endif
    { "High Priestess' Beam/Jaws A", 0x033eb80, 0x033ec00 },
    { "Midler Vs / Super A", 0x0411e00, 0x0411e80 },
    { "Midler Challenger A", 0x0411e80, 0x0411f00 },
#ifndef USE_LARGE_PALETTES
    { "Midler Select / Winning A (1/2)", 0x0411f00, 0x0411f80 },
    { "Midler Select / Winning A (2/2)", 0x0411f80, 0x0412000 },
#else
    { "Midler Select / Winning A", 0x0411f00, 0x0412000 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler & Burning A", 0x033e180, 0x033e280 },
#else
    { "Midler & Burning A (1/2)", 0x033e180, 0x033e200 },
    { "Midler & Burning A (2/2)", 0x033e200, 0x033e280 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler Tech/Zap A", 0x033e480, 0x033e580 },
#else
    { "Midler Tech/Zap A (1/2)", 0x033e480, 0x033e500 },
    { "Midler Tech/Zap A (2/2)", 0x033e500, 0x033e580 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_B[] =
{
    { "Midler & High Priestess B", 0x0352600, 0x0352680 },
#ifndef USE_LARGE_PALETTES
    { "Midler's Super Cars B (1/4)", 0x0352e80, 0x0352f00 },
    { "Midler's Super Cars B (2/4)", 0x0352f00, 0x0352f80 },
    { "Midler's Super Cars B (3/4)", 0x0352f80, 0x0353000 },
    { "Midler's Super Cars B (4/4)", 0x0353000, 0x0353080 },
#else
    { "Midler's Super Cars B", 0x0352e80, 0x0353080 },
#endif
    { "High Priestess' Beam/Jaws B", 0x0353080, 0x0353100 },
    { "Midler Vs / Super B", 0x0416c00, 0x0416c80 },
    { "Midler Challenger B", 0x0416c80, 0x0416d00 },
#ifndef USE_LARGE_PALETTES
    { "Midler Select / Winning B (1/2)", 0x0416d00, 0x0416d80 },
    { "Midler Select / Winning B (2/2)", 0x0416d80, 0x0416e00 },
#else
    { "Midler Select / Winning B", 0x0416d00, 0x0416e00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler & Burning B", 0x0352680, 0x0352780 },
#else
    { "Midler & Burning B (1/2)", 0x0352680, 0x0352700 },
    { "Midler & Burning B (2/2)", 0x0352700, 0x0352780 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler Tech/Zap B", 0x0352980, 0x0352a80 },
#else
    { "Midler Tech/Zap B (1/2)", 0x0352980, 0x0352a00 },
    { "Midler Tech/Zap B (2/2)", 0x0352a00, 0x0352a80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_C[] =
{
    { "Midler & High Priestess C", 0x0366b00, 0x0366b80 },
#ifndef USE_LARGE_PALETTES
    { "Midler's Super Cars C (1/4)", 0x0367380, 0x0367400 },
    { "Midler's Super Cars C (2/4)", 0x0367400, 0x0367480 },
    { "Midler's Super Cars C (3/4)", 0x0367480, 0x0367500 },
    { "Midler's Super Cars C (4/4)", 0x0367500, 0x0367580 },
#else
    { "Midler's Super Cars C", 0x0367380, 0x0367580 },
#endif
    { "High Priestess' Beam/Jaws C", 0x0367580, 0x0367600 },
    { "Midler Vs / Super C", 0x041ba00, 0x041ba80 },
    { "Midler Challenger C", 0x041ba80, 0x041bb00 },
#ifndef USE_LARGE_PALETTES
    { "Midler Select / Winning C (1/2)", 0x041bb00, 0x041bb80 },
    { "Midler Select / Winning C (2/2)", 0x041bb80, 0x041bc00 },
#else
    { "Midler Select / Winning C", 0x041bb00, 0x041bc00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler & Burning C", 0x0366b80, 0x0366c80 },
#else
    { "Midler & Burning C (1/2)", 0x0366b80, 0x0366c00 },
    { "Midler & Burning C (2/2)", 0x0366c00, 0x0366c80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler Tech/Zap C", 0x0366e80, 0x0366f80 },
#else
    { "Midler Tech/Zap C (1/2)", 0x0366e80, 0x0366f00 },
    { "Midler Tech/Zap C (2/2)", 0x0366f00, 0x0366f80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_S[] =
{
    { "Midler & High Priestess S", 0x037b000, 0x037b080 },
#ifndef USE_LARGE_PALETTES
    { "Midler's Super Cars S (1/4)", 0x037b880, 0x037b900 },
    { "Midler's Super Cars S (2/4)", 0x037b900, 0x037b980 },
    { "Midler's Super Cars S (3/4)", 0x037b980, 0x037ba00 },
    { "Midler's Super Cars S (4/4)", 0x037ba00, 0x037ba80 },
#else
    { "Midler's Super Cars S", 0x037b880, 0x037ba80 },
#endif
    { "High Priestess' Beam/Jaws S", 0x037ba80, 0x037bb00 },
    { "Midler Vs / Super S", 0x0420800, 0x0420880 },
    { "Midler Challenger S", 0x0420880, 0x0420900 },
#ifndef USE_LARGE_PALETTES
    { "Midler Select / Winning S (1/2)", 0x0420900, 0x0420980 },
    { "Midler Select / Winning S (2/2)", 0x0420980, 0x0420a00 },
#else
    { "Midler Select / Winning S", 0x0420900, 0x0420a00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler & Burning S", 0x037b080, 0x037b180 },
#else
    { "Midler & Burning S (1/2)", 0x037b080, 0x037b100 },
    { "Midler & Burning S (2/2)", 0x037b100, 0x037b180 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler Tech/Zap S", 0x037b380, 0x037b480 },
#else
    { "Midler Tech/Zap S (1/2)", 0x037b380, 0x037b400 },
    { "Midler Tech/Zap S (2/2)", 0x037b400, 0x037b480 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MIDLER_Start[] =
{
    { "Midler & High Priestess Start", 0x038f500, 0x038f580 },
#ifndef USE_LARGE_PALETTES
    { "Midler's Super Cars Start (1/4)", 0x038fd80, 0x038fe00 },
    { "Midler's Super Cars Start (2/4)", 0x038fe00, 0x038fe80 },
    { "Midler's Super Cars Start (3/4)", 0x038fe80, 0x038ff00 },
    { "Midler's Super Cars Start (4/4)", 0x038ff00, 0x038ff80 },
#else
    { "Midler's Super Cars Start", 0x038fd80, 0x038ff80 },
#endif
    { "High Priestess' Beam/Jaws Start", 0x038ff80, 0x0390000 },
    { "Midler Vs / Super Start", 0x0425600, 0x0425680 },
    { "Midler Challenger Start", 0x0425680, 0x0425700 },
#ifndef USE_LARGE_PALETTES
    { "Midler Select / Winning Start (1/2)", 0x0425700, 0x0425780 },
    { "Midler Select / Winning Start (2/2)", 0x0425780, 0x0425800 },
#else
    { "Midler Select / Winning Start", 0x0425700, 0x0425800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler & Burning Start", 0x038f580, 0x038f680 },
#else
    { "Midler & Burning Start (1/2)", 0x038f580, 0x038f600 },
    { "Midler & Burning Start (2/2)", 0x038f600, 0x038f680 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Midler Tech/Zap Start", 0x038f880, 0x038f980 },
#else
    { "Midler Tech/Zap Start (1/2)", 0x038f880, 0x038f900 },
    { "Midler Tech/Zap Start (2/2)", 0x038f900, 0x038f980 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_A[] =
{
    { "DIO & The World A", 0x033ed80, 0x033ee00 },
    { "DIO Intro Stuff A", 0x033f700, 0x033f780 },
    { "The World's \"Bloody Summoning\" A", 0x033f800, 0x033f880 },
    { "DIO Tele Initial Flash A", 0x033f500, 0x033f580 },
    { "DIO Teleport A", 0x033f680, 0x033f700 },
    { "Nukesaku A", 0x033f780, 0x033f7c0 },
    { "DIO Vs / Super A", 0x0412100, 0x0412180 },
    { "DIO Challenger A", 0x0412180, 0x0412200 },
#ifndef USE_LARGE_PALETTES
    { "DIO Select / Winning A (1/2)", 0x0412200, 0x0412280 },
    { "DIO Select / Winning A (2/2)", 0x0412280, 0x0412300 },
#else
    { "DIO Select / Winning A", 0x0412200, 0x0412300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO & The World Burning A", 0x033ee00, 0x033ef00 },
#else
    { "DIO & The World Burning A (1/2)", 0x033ee00, 0x033ee80 },
    { "DIO & The World Burning A (2/2)", 0x033ee80, 0x033ef00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO Tech/Zap A", 0x033f100, 0x033f200 },
#else
    { "DIO Tech/Zap A (1/2)", 0x033f100, 0x033f180 },
    { "DIO Tech/Zap A (2/2)", 0x033f180, 0x033f200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_B[] =
{
    { "DIO & The World B", 0x0353280, 0x0353300 },
    { "DIO Intro Stuff B", 0x0353c00, 0x0353c80 },
    { "The World's \"Bloody Summoning\" B", 0x0353d00, 0x0353d80 },
    { "DIO Tele Initial Flash B", 0x0353a00, 0x0353a80 },
    { "DIO Teleport B", 0x0353b80, 0x0353c00 },
    { "Nukesaku B", 0x0353c80, 0x0353cc0 },
    { "DIO Vs / Super B", 0x0416f00, 0x0416f80 },
    { "DIO Challenger B", 0x0416f80, 0x0417000 },
#ifndef USE_LARGE_PALETTES
    { "DIO Select / Winning B (1/2)", 0x0417000, 0x0417080 },
    { "DIO Select / Winning B (2/2)", 0x0417080, 0x0417100 },
#else
    { "DIO Select / Winning B", 0x0417000, 0x0417100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO & The World Burning B", 0x0353300, 0x0353400 },
#else
    { "DIO & The World Burning B (1/2)", 0x0353300, 0x0353380 },
    { "DIO & The World Burning B (2/2)", 0x0353380, 0x0353400 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO Tech/Zap B", 0x0353600, 0x0353700 },
#else
    { "DIO Tech/Zap B (1/2)", 0x0353600, 0x0353680 },
    { "DIO Tech/Zap B (2/2)", 0x0353680, 0x0353700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_C[] =
{
    { "DIO & The World C", 0x0367780, 0x0367800 },
    { "DIO Intro Stuff C", 0x0368100, 0x0368180 },
    { "The World's \"Bloody Summoning\" C", 0x0368200, 0x0368280 },
    { "DIO Tele Initial Flash C", 0x0367f00, 0x0367f80 },
    { "DIO Teleport C", 0x0368080, 0x0368100 },
    { "Nukesaku C", 0x0368180, 0x03681c0 },
    { "DIO Vs / Super C", 0x041bd00, 0x041bd80 },
    { "DIO Challenger C", 0x041bd80, 0x041be00 },
#ifndef USE_LARGE_PALETTES
    { "DIO Select / Winning C (1/2)", 0x041be00, 0x041be80 },
    { "DIO Select / Winning C (2/2)", 0x041be80, 0x041bf00 },
#else
    { "DIO Select / Winning C", 0x041be00, 0x041bf00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO & The World Burning C", 0x0367800, 0x0367900 },
#else
    { "DIO & The World Burning C (1/2)", 0x0367800, 0x0367880 },
    { "DIO & The World Burning C (2/2)", 0x0367880, 0x0367900 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO Tech/Zap C", 0x0367b00, 0x0367c00 },
#else
    { "DIO Tech/Zap C (1/2)", 0x0367b00, 0x0367b80 },
    { "DIO Tech/Zap C (2/2)", 0x0367b80, 0x0367c00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_S[] =
{
    { "DIO & The World S", 0x037bc80, 0x037bd00 },
    { "DIO Intro Stuff S", 0x037c600, 0x037c680 },
    { "The World's \"Bloody Summoning\" S", 0x037c700, 0x037c780 },
    { "DIO Tele Initial Flash S", 0x037c400, 0x037c480 },
    { "DIO Teleport S", 0x037c580, 0x037c600 },
    { "Nukesaku S", 0x037c680, 0x037c6c0 },
    { "DIO Vs / Super S", 0x0420b00, 0x0420b80 },
    { "DIO Challenger S", 0x0420b80, 0x0420c00 },
#ifndef USE_LARGE_PALETTES
    { "DIO Select / Winning S (1/2)", 0x0420c00, 0x0420c80 },
    { "DIO Select / Winning S (2/2)", 0x0420c80, 0x0420d00 },
#else
    { "DIO Select / Winning S", 0x0420c00, 0x0420d00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO & The World Burning S", 0x037bd00, 0x037be00 },
#else
    { "DIO & The World Burning S (1/2)", 0x037bd00, 0x037bd80 },
    { "DIO & The World Burning S (2/2)", 0x037bd80, 0x037be00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO Tech/Zap S", 0x037c000, 0x037c100 },
#else
    { "DIO Tech/Zap S (1/2)", 0x037c000, 0x037c080 },
    { "DIO Tech/Zap S (2/2)", 0x037c080, 0x037c100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DIO_Start[] =
{
    { "DIO & The World Start", 0x0390180, 0x0390200 },
    { "DIO Intro Stuff Start", 0x0390b00, 0x0390b80 },
    { "The World's \"Bloody Summoning\" Start", 0x0390c00, 0x0390c80 },
    { "DIO Tele Initial Flash Start", 0x0390900, 0x0390980 },
    { "DIO Teleport Start", 0x0390a80, 0x0390b00 },
    { "Nukesaku Start", 0x0390b80, 0x0390bc0 },
    { "DIO Vs / Super Start", 0x0425900, 0x0425980 },
    { "DIO Challenger Start", 0x0425980, 0x0425a00 },
#ifndef USE_LARGE_PALETTES
    { "DIO Select / Winning Start (1/2)", 0x0425a00, 0x0425a80 },
    { "DIO Select / Winning Start (2/2)", 0x0425a80, 0x0425b00 },
#else
    { "DIO Select / Winning Start", 0x0425a00, 0x0425b00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO & The World Burning Start", 0x0390200, 0x0390300 },
#else
    { "DIO & The World Burning Start (1/2)", 0x0390200, 0x0390280 },
    { "DIO & The World Burning Start (2/2)", 0x0390280, 0x0390300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "DIO Tech/Zap Start", 0x0390500, 0x0390600 },
#else
    { "DIO Tech/Zap Start (1/2)", 0x0390500, 0x0390580 },
    { "DIO Tech/Zap Start (2/2)", 0x0390580, 0x0390600 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_A[] =
{
    { "Shadow DIO A", 0x0341300, 0x0341380 },
    { "623aa trail A", 0x0341b80, 0x0341c00 },
    { "5s trail A", 0x0341ac0, 0x0341ae0 },
    { "236aa trail A", 0x0341ec0, 0x0341ee0 },
    { "41236s trail A", 0x0341b40, 0x0341b60 },
    { "Wang Chan A", 0x0341d00, 0x0341d40 },
    { "Shadow DIO Vs / Super A", 0x0412a00, 0x0412a80 },
    { "Shadow DIO Challenger A", 0x0412a80, 0x0412b00 },
    { "Shadow DIO Select / Winning A", 0x0412b00, 0x0412b80 },
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Burning A", 0x0341380, 0x0341480 },
#else
    { "Shadow DIO Burning A (1/2)", 0x0341380, 0x0341400 },
    { "Shadow DIO Burning A (2/2)", 0x0341400, 0x0341480 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Tech/Zap A", 0x0341680, 0x0341780 },
#else
    { "Shadow DIO Tech/Zap A (1/2)", 0x0341680, 0x0341700 },
    { "Shadow DIO Tech/Zap A (2/2)", 0x0341700, 0x0341780 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_B[] =
{
    { "Shadow DIO B", 0x0355800, 0x0355880 },
    { "623aa trail B", 0x0356080, 0x0356100 },
    { "5s trail B", 0x0355fc0, 0x0356000 },
    { "236aa trail B", 0x03563c0, 0x0356400 },
    { "41236s trail B", 0x0356040, 0x0356060 },
    { "Wang Chan B", 0x0356200, 0x0356240 },
    { "Shadow DIO Vs / Super B", 0x0417800, 0x0417880 },
    { "Shadow DIO Challenger B", 0x0417880, 0x0417900 },
    { "Shadow DIO Select / Winning B", 0x0417900, 0x0417980 },
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Burning B", 0x0355880, 0x0355980 },
#else
    { "Shadow DIO Burning B (1/2)", 0x0355880, 0x0355900 },
    { "Shadow DIO Burning B (2/2)", 0x0355900, 0x0355980 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Tech/Zap B", 0x0355b80, 0x0355c80 },
#else
    { "Shadow DIO Tech/Zap B (1/2)", 0x0355b80, 0x0355c00 },
    { "Shadow DIO Tech/Zap B (2/2)", 0x0355c00, 0x0355c80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_C[] =
{
    { "Shadow DIO C", 0x0369d00, 0x0369d80 },
    { "623aa trail C", 0x036a580, 0x036a600 },
    { "5s trail C", 0x036a4c0, 0x036a500 },
    { "236aa trail C", 0x036a8c0, 0x036a900 },
    { "41236s trail C", 0x036a540, 0x036a560 },
    { "Wang Chan C", 0x036a700, 0x036a740 },
    { "Shadow DIO Vs / Super C", 0x041c600, 0x041c680 },
    { "Shadow DIO Challenger C", 0x041c680, 0x041c700 },
    { "Shadow DIO Select / Winning Screen C", 0x041c700, 0x041c780 },
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Burning C", 0x0369d80, 0x0369e80 },
#else
    { "Shadow DIO Burning C (1/2)", 0x0369d80, 0x0369e00 },
    { "Shadow DIO Burning C (2/2)", 0x0369e00, 0x0369e80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Tech/Zap C", 0x036a080, 0x036a180 },
#else
    { "Shadow DIO Tech/Zap C (1/2)", 0x036a080, 0x036a100 },
    { "Shadow DIO Tech/Zap C (2/2)", 0x036a100, 0x036a180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_S[] =
{
    { "Shadow DIO S", 0x037e200, 0x037e280 },
    { "623aa trail S", 0x037ea80, 0x037eb00 },
    { "5s trail S", 0x037e9c0, 0x037ea00 },
    { "236aa trail S", 0x037edc0, 0x037ee00 },
    { "41236s trail S", 0x037ea40, 0x037ea60 },
    { "Wang Chan S", 0x037ec00, 0x037ec40 },
    { "Shadow DIO Vs / Super S", 0x0421400, 0x0421480 },
    { "Shadow DIO Challenger S", 0x0421480, 0x0421500 },
    { "Shadow DIO Select / Winning Screen S", 0x0421500, 0x0421580 },
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Burning S", 0x037e280, 0x037e380 },
#else
    { "Shadow DIO Burning S (1/2)", 0x037e280, 0x037e300 },
    { "Shadow DIO Burning S (2/2)", 0x037e300, 0x037e380 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Tech/Zap S", 0x037e580, 0x037e680 },
#else
    { "Shadow DIO Tech/Zap S (1/2)", 0x037e580, 0x037e600 },
    { "Shadow DIO Tech/Zap S (2/2)", 0x037e600, 0x037e680 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SDIO_Start[] =
{
    { "Shadow DIO Start", 0x0392700, 0x0392780 },
    { "623aa trail Start", 0x0392f80, 0x0393000 },
    { "5s trail Start", 0x0392ec0, 0x0392f00 },
    { "236aa trail Start", 0x03932c0, 0x0393300 },
    { "41236s trail Start", 0x0392f40, 0x0392f60 },
    { "Wang Chan Start", 0x0393100, 0x0393140 },
    { "Shadow DIO Vs / Super Start", 0x0426200, 0x0426280 },
    { "Shadow DIO Challenger Start", 0x0426280, 0x0426300 },
    { "Shadow DIO Select / Winning Screen Start", 0x0426300, 0x0426380 },
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Burning Start", 0x0392780, 0x0392880 },
#else
    { "Shadow DIO Burning Start (1/2)", 0x0392780, 0x0392800 },
    { "Shadow DIO Burning Start (2/2)", 0x0392800, 0x0392880 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow DIO Tech/Zap Start", 0x0392a80, 0x0392b80 },
#else
    { "Shadow DIO Tech/Zap Start (1/2)", 0x0392a80, 0x0392b00 },
    { "Shadow DIO Tech/Zap Start (2/2)", 0x0392b00, 0x0392b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_A[] =
{
    { "Young Joseph A", 0x0341f80, 0x0342000 },
    { "Young Joseph Vs / Super A", 0x0412d00, 0x0412d80 },
    { "Young Joseph Challenger A", 0x0412d80, 0x0412e00 },
    { "Young Joseph Select / Winning Screen A", 0x0412e00, 0x0412e80 },
    { "Hamon Cola Flash A", 0x0342800, 0x0342880 },
#ifdef USE_LARGE_PALETTES
    { "Young Joseph Burning A", 0x0342000, 0x0342100 },
#else
    { "Young Joseph Burning A (1/2)", 0x0342000, 0x0342080 },
    { "Young Joseph Burning A (2/2)", 0x0342080, 0x0342100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Youngseph Tech/Zap A", 0x0342300, 0x0342400 },
#else
    { "Youngseph Tech/Zap A (1/2)", 0x0342300, 0x0342380 },
    { "Youngseph Tech/Zap A (2/2)", 0x0342380, 0x0342400 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_B[] =
{
    { "Young Joseph B", 0x0356480, 0x0356500 },
    { "Young Joseph Vs / Super B", 0x0417b00, 0x0417b80 },
    { "Young Joseph Challenger B", 0x0417b80, 0x0417c00 },
    { "Young Joseph Select / Winning B", 0x0417c00, 0x0417c80 },
    { "Hamon Cola Flash B", 0x0356D00, 0x0356D80 },
#ifdef USE_LARGE_PALETTES
    { "Young Joseph Burning B", 0x0356500, 0x0356600 },
#else
    { "Young Joseph Burning B (1/2)", 0x0356500, 0x0356580 },
    { "Young Joseph Burning B (2/2)", 0x0356580, 0x0356600 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Youngseph Tech/Zap B", 0x0356800, 0x0356900 },
#else
    { "Youngseph Tech/Zap B (1/2)", 0x0356800, 0x0356880 },
    { "Youngseph Tech/Zap B (2/2)", 0x0356880, 0x0356900 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_C[] =
{
    { "Young Joseph C", 0x036a980, 0x036aa00 },
    { "Young Joseph Vs / Super C", 0x041c900, 0x041c980 },
    { "Young Joseph Challenger C", 0x041c980, 0x041ca00 },
    { "Young Joseph Select / Winning C", 0x041ca00, 0x041ca80 },
    { "Hamon Cola Flash C", 0x036B200, 0x036B280 },
#ifdef USE_LARGE_PALETTES
    { "Young Joseph Burning C", 0x036aa00, 0x036ab00 },
#else
    { "Young Joseph Burning C (1/2)", 0x036aa00, 0x036aa80 },
    { "Young Joseph Burning C (2/2)", 0x036aa80, 0x036ab00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Youngseph Tech/Zap C", 0x036ad00, 0x036ae00 },
#else
    { "Youngseph Tech/Zap C (1/2)", 0x036ad00, 0x036ad80 },
    { "Youngseph Tech/Zap C (2/2)", 0x036ad80, 0x036ae00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_S[] =
{
    { "Young Joseph S", 0x037ee80, 0x037ef00 },
    { "Young Joseph Vs / Super S", 0x0421700, 0x0421780 },
    { "Young Joseph Challenger S", 0x0421780, 0x0421800 },
    { "Young Joseph Select / Winning Screen S", 0x0421800, 0x0421880 },
    { "Hamon Cola Flash S", 0x037F700, 0x037F780 },
#ifdef USE_LARGE_PALETTES
    { "Young Joseph Burning S", 0x037ef00, 0x037f000 },
#else
    { "Young Joseph Burning S (1/2)", 0x037ef00, 0x037ef80 },
    { "Young Joseph Burning S (2/2)", 0x037ef80, 0x037f000 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Youngseph Tech/Zap S", 0x037f200, 0x037f300 },
#else
    { "Youngseph Tech/Zap S (1/2)", 0x037f200, 0x037f280 },
    { "Youngseph Tech/Zap S (2/2)", 0x037f280, 0x037f300 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_YJOSEPH_Start[] =
{
    { "Young Joseph Start", 0x0393380, 0x0393400 },
    { "Young Joseph Vs / Super Start", 0x0426500, 0x0426580 },
    { "Young Joseph Challenger Start", 0x0426580, 0x0426600 },
    { "Young Joseph Select / Winning Screen Start", 0x0426600, 0x0426680 },
    { "Hamon Cola Flash Start", 0x0393C00, 0x0393C80 },
#ifdef USE_LARGE_PALETTES
    { "Young Joseph Burning Start", 0x0393400, 0x0393500 },
#else
    { "Young Joseph Burning Start (1/2)", 0x0393400, 0x0393480 },
    { "Young Joseph Burning Start (2/2)", 0x0393480, 0x0393500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Youngseph Tech/Zap Start", 0x0393700, 0x0393800 },
#else
    { "Youngseph Tech/Zap Start (1/2)", 0x0393700, 0x0393780 },
    { "Youngseph Tech/Zap Start (2/2)", 0x0393780, 0x0393800 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_A[] =
{
    { "Hol Horse A", 0x0342c00, 0x0342c80 },
    { "Hol's Super Bullets A", 0x0343556, 0x0343560 },
    { "Hol's Slow-mo Bullet Trail 1 A", 0x03435d6, 0x03435e0 },
    { "Hol's Slow-mo Bullet Trail 2 A", 0x0343656, 0x0343660 },
    { "Hol's Intro/Winpose Stuff+Boingo A", 0x0343480, 0x0343500 },
    { "Hol Horse Vs / Super A", 0x0413000, 0x0413080 },
    { "Hol Horse Challenger A", 0x0413080, 0x0413100 },
    { "Hol Horse Select / Winning A", 0x0413100, 0x0413180 },
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Burning A", 0x0342c80, 0x0342d80 },
#else
    { "Hol Horse Burning A (1/2)", 0x0342c80, 0x0342d00 },
    { "Hol Horse Burning A (2/2)", 0x0342d00, 0x0342d80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Tech/Zap A", 0x0342f80, 0x0343080 },
#else
    { "Hol Horse Tech/Zap A (1/2)", 0x0342f80, 0x0343000 },
    { "Hol Horse Tech/Zap A (2/2)", 0x0343000, 0x0343080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_B[] =
{
    { "Hol Horse B", 0x0357100, 0x0357180 },
    { "Hol's Super Bullets B", 0x0357a56, 0x0357a60 },
    { "Hol's Slow-mo Bullet Trail 1 B", 0x0357ad6, 0x0357ae0 },
    { "Hol's Slow-mo Bullet Trail 2 B", 0x0357b56, 0x0357b60 },
    { "Hol Horse Vs / Super B", 0x0417e00, 0x0417e80 },
    { "Hol Horse Challenger B", 0x0417e80, 0x0417f00 },
    { "Hol Horse Select / Winning B", 0x0417f00, 0x0417f80 },
    { "Hol's Intro/Winpose Stuff+Boingo B", 0x0357980, 0x0357a00 },
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Burning B", 0x0357180, 0x0357280 },
#else
    { "Hol Horse Burning B (1/2)", 0x0357180, 0x0357200 },
    { "Hol Horse Burning B (2/2)", 0x0357200, 0x0357280 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Tech/Zap B", 0x0357480, 0x0357580 },
#else
    { "Hol Horse Tech/Zap B (1/2)", 0x0357480, 0x0357500 },
    { "Hol Horse Tech/Zap B (2/2)", 0x0357500, 0x0357580 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_C[] =
{
    { "Hol Horse C", 0x036b600, 0x036b680 },
    { "Hol's Super Bullets C", 0x036bf56, 0x036bf60 },
    { "Hol's Slow-mo Bullet Trail 1 C", 0x036bfd6, 0x036bfe0 },
    { "Hol's Slow-mo Bullet Trail 2 C", 0x036c056, 0x036c060 },
    { "Hol's Intro/Winpose Stuff+Boingo C", 0x036be80, 0x036bf00 },
    { "Hol Horse Vs / Super C", 0x041cc00, 0x041cc80 },
    { "Hol Horse Challenger C", 0x041cc80, 0x041cd00 },
    { "Hol Horse Select / Winning C", 0x041cd00, 0x041cd80 },
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Burning C", 0x036b680, 0x036b780 },
#else
    { "Hol Horse Burning C (1/2)", 0x036b680, 0x036b700 },
    { "Hol Horse Burning C (2/2)", 0x036b700, 0x036b780 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Tech/Zap C", 0x036b980, 0x036ba80 },
#else
    { "Hol Horse Tech/Zap C (1/2)", 0x036b980, 0x036ba00 },
    { "Hol Horse Tech/Zap C (2/2)", 0x036ba00, 0x036ba80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_S[] =
{
    { "Hol Horse S", 0x037fb00, 0x037fb80 },
    { "Hol's Super Bullets S", 0x0380456, 0x0380460 },
    { "Hol's Slow-mo Bullet Trail 1 S", 0x03804d6, 0x03804e0 },
    { "Hol's Slow-mo Bullet Trail 2 S", 0x0380556, 0x0380560 },
    { "Hol's Intro/Winpose Stuff+Boingo S", 0x0380380, 0x0380400 },
    { "Hol Horse Vs / Super S", 0x0421a00, 0x0421a80 },
    { "Hol Horse Challenger S", 0x0421a80, 0x0421b00 },
    { "Hol Horse Select / Winning S", 0x0421b00, 0x0421b80 },
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Burning S", 0x037fb80, 0x037fc80 },
#else
    { "Hol Horse Burning S (1/2)", 0x037fb80, 0x037fc00 },
    { "Hol Horse Burning S (2/2)", 0x037fc00, 0x037fc80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Tech/Zap S", 0x037fe80, 0x037ff80 },
#else
    { "Hol Horse Tech/Zap S (1/2)", 0x037fe80, 0x037ff00 },
    { "Hol Horse Tech/Zap S (2/2)", 0x037ff00, 0x037ff80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOL_Start[] =
{
    { "Hol Horse Start", 0x0394000, 0x0394080 },
    { "Hol's Super Bullets Start", 0x0394956, 0x0394960 },
    { "Hol's Slow-mo Bullet Trail 1 Start", 0x03949d6, 0x03949e0 },
    { "Hol's Slow-mo Bullet Trail 2 Start", 0x0394a56, 0x0394a60 },
    { "Hol's Intro/Winpose Stuff+Boingo Start", 0x0394880, 0x0394900 },
    { "Hol Horse Vs / Super Start", 0x0426800, 0x0426880 },
    { "Hol Horse Challenger Start", 0x0426880, 0x0426900 },
    { "Hol Horse Select / Winning Screen Start", 0x0426900, 0x0426980 },
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Burning Start", 0x0394080, 0x0394180 },
#else
    { "Hol Horse Burning Start (1/2)", 0x0394080, 0x0394100 },
    { "Hol Horse Burning Start (2/2)", 0x0394100, 0x0394180 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol Horse Tech/Zap Start", 0x0394380, 0x0394480 },
#else
    { "Hol Horse Tech/Zap Start (1/2)", 0x0394380, 0x0394400 },
    { "Hol Horse Tech/Zap Start (2/2)", 0x0394400, 0x0394480 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_A[] =
{
    { "Vanilla Ice & Cream A", 0x0343880, 0x0343900 },
    { "Vanilla Ice Vs / Super A", 0x0413300, 0x0413380 },
    { "Vanilla Ice Challenger A", 0x0413380, 0x0413400 },
#ifndef USE_LARGE_PALETTES
    { "Vanilla Ice Select / Winning A (1/2)", 0x0413400, 0x0413480 },
    { "Vanilla Ice Select / Winning A (2/2)", 0x0413480, 0x0413500 },
#else
    { "Vanilla Ice Select / Winning A", 0x0413400, 0x0413500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Burning A", 0x0343900, 0x0343a00 },
#else
    { "Vanilla Ice Burning A (1/2)", 0x0343900, 0x0343980 },
    { "Vanilla Ice Burning A (2/2)", 0x0343980, 0x0343a00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Tech A", 0x0343c00, 0x0343d00 },
#else
    { "Vanilla Ice Tech A (1/2)", 0x0343c00, 0x0343c80 },
    { "Vanilla Ice Tech A (2/2)", 0x0343c80, 0x0343d00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_B[] =
{
    { "Vanilla Ice & Cream B", 0x0357d80, 0x0357e00 },
    { "Vanilla Ice Vs / Super B", 0x0418100, 0x0418180 },
    { "Vanilla Ice Challenger B", 0x0418180, 0x0418200 },
#ifndef USE_LARGE_PALETTES
    { "Vanilla Ice Select / Winning B (1/2)", 0x0418200, 0x0418280 },
    { "Vanilla Ice Select / Winning B (2/2)", 0x0418280, 0x0418300 },
#else
    { "Vanilla Ice Select / Winning B", 0x0418200, 0x0418300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Burning B", 0x0357e00, 0x0357f00 },
#else
    { "Vanilla Ice Burning B (1/2)", 0x0357e00, 0x0357e80 },
    { "Vanilla Ice Burning B (2/2)", 0x0357e80, 0x0357f00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Tech B", 0x0358100, 0x0358200 },
#else
    { "Vanilla Ice Tech B (1/2)", 0x0358100, 0x0358180 },
    { "Vanilla Ice Tech B (2/2)", 0x0358180, 0x0358200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_C[] =
{
    { "Vanilla Ice & Cream C", 0x036c280, 0x036c300 },
    { "Vanilla Ice Vs / Super C", 0x041cf00, 0x041cf80 },
    { "Vanilla Ice Challenger C", 0x041cf80, 0x041d000 },
#ifndef USE_LARGE_PALETTES
    { "Vanilla Ice Select / Winning C (1/2)", 0x041d000, 0x041d080 },
    { "Vanilla Ice Select / Winning C (2/2)", 0x041d080, 0x041d100 },
#else
    { "Vanilla Ice Select / Winning C", 0x041d000, 0x041d100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Burning C", 0x036c300, 0x036c400 },
#else
    { "Vanilla Ice Burning C (1/2)", 0x036c300, 0x036c380 },
    { "Vanilla Ice Burning C (2/2)", 0x036c380, 0x036c400 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Tech C", 0x036c600, 0x036c700 },
#else
    { "Vanilla Ice Tech C (1/2)", 0x036c600, 0x036c680 },
    { "Vanilla Ice Tech C (2/2)", 0x036c680, 0x036c700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_S[] =
{
    { "Vanilla Ice & Cream S", 0x0380780, 0x0380800 },
    { "Vanilla Ice Vs / Super S", 0x0421d00, 0x0421d80 },
    { "Vanilla Ice Challenger S", 0x0421d80, 0x0421e00 },
#ifndef USE_LARGE_PALETTES
    { "Vanilla Ice Select / Winning S (1/2)", 0x0421e00, 0x0421e80 },
    { "Vanilla Ice Select / Winning S (2/2)", 0x0421e80, 0x0421f00 },
#else
    { "Vanilla Ice Select / Winning S", 0x0421e00, 0x0421f00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Burning S", 0x0380800, 0x0380900 },
#else
    { "Vanilla Ice Burning S (1/2)", 0x0380800, 0x0380880 },
    { "Vanilla Ice Burning S (2/2)", 0x0380880, 0x0380900 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Tech S", 0x0380b00, 0x0380c00 },
#else
    { "Vanilla Ice Tech S (1/2)", 0x0380b00, 0x0380b80 },
    { "Vanilla Ice Tech S (2/2)", 0x0380b80, 0x0380c00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_VICE_Start[] =
{
    { "Vanilla Ice & Cream Start", 0x0394c80, 0x0394d00 },
    { "Vanilla Ice Vs / Super Start", 0x0426b00, 0x0426b80 },
    { "Vanilla Ice Challenger Start", 0x0426b80, 0x0426c00 },
#ifndef USE_LARGE_PALETTES
    { "Vanilla Ice Select / Winning Start (1/2)", 0x0426c00, 0x0426c80 },
    { "Vanilla Ice Select / Winning Start (2/2)", 0x0426c80, 0x0426d00 },
#else
    { "Vanilla Ice Select / Winning Start", 0x0426c00, 0x0426d00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Burning Start", 0x0394d00, 0x0394e00 },
#else
    { "Vanilla Ice Burning Start (1/2)", 0x0394d00, 0x0394d80 },
    { "Vanilla Ice Burning Start (2/2)", 0x0394d80, 0x0394e00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Vanilla Ice Tech Start", 0x0395000, 0x0395100 },
#else
    { "Vanilla Ice Tech Start (1/2)", 0x0395000, 0x0395080 },
    { "Vanilla Ice Tech Start (2/2)", 0x0395080, 0x0395100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_A[] =
{
    { "New Kakyoin & Hierophant A", 0x0344500, 0x0344580 },
#ifndef USE_LARGE_PALETTES
    { "New Hierophant Changing Pal A (1/7)", 0x0344d80, 0x0344e00 },
    { "New Hierophant Changing Pal A (2/7)", 0x0344e00, 0x0344e80 },
    { "New Hierophant Changing Pal A (3/7)", 0x0344e80, 0x0344f00 },
    { "New Hierophant Changing Pal A (4/7)", 0x0344f00, 0x0344f80 },
    { "New Hierophant Changing Pal A (5/7)", 0x0344f80, 0x0345000 },
    { "New Hierophant Changing Pal A (6/7)", 0x0345000, 0x0345080 },
    { "New Hierophant Changing Pal A (7/7)", 0x0345080, 0x0345100 },
#else
    { "New Hierophant Changing Pal A", 0x0344d80, 0x0345100 },
#endif
    { "New Hierophant Sparkles A", 0x0345100, 0x0345120 },
    { "Raging Demon Trail A", 0x0344ca0, 0x0344d20 },
    { "New Kakyoin Vs / Super A", 0x0413600, 0x0413680 },
    { "New Kakyoin Challenger A", 0x0413680, 0x0413700 },
#ifndef USE_LARGE_PALETTES
    { "New Kakyoin Select / Winning A (1/2)", 0x0413700, 0x0413780 },
    { "New Kakyoin Select / Winning A (2/2)", 0x0413780, 0x0413800 },
#else
    { "New Kakyoin Select / Winning A", 0x0413700, 0x0413800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Burning A", 0x0344580, 0x0344680 },
#else
    { "New Kakyoin Burning A (1/2)", 0x0344580, 0x0344600 },
    { "New Kakyoin Burning A (2/2)", 0x0344600, 0x0344680 },
#endif
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Tech/Zap A", 0x0344880, 0x0344980 },
#else
    { "New Kakyoin Tech/Zap A (1/2)", 0x0344880, 0x0344900 },
    { "New Kakyoin Tech/Zap A (2/2)", 0x0344900, 0x0344980 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_B[] =
{
    { "New Kakyoin & Hierophant B", 0x0358a00, 0x0358a80 },
#ifndef USE_LARGE_PALETTES
    { "New Hierophant Changing Pal B (1/7)", 0x0359280, 0x0359300 },
    { "New Hierophant Changing Pal B (2/7)", 0x0359300, 0x0359380 },
    { "New Hierophant Changing Pal B (3/7)", 0x0359380, 0x0359400 },
    { "New Hierophant Changing Pal B (4/7)", 0x0359400, 0x0359480 },
    { "New Hierophant Changing Pal B (5/7)", 0x0359480, 0x0359500 },
    { "New Hierophant Changing Pal B (6/7)", 0x0359500, 0x0359580 },
    { "New Hierophant Changing Pal B (7/7)", 0x0359580, 0x0359600 },
#else
    { "New Hierophant Changing Pal B", 0x0359280, 0x0359600 },
#endif
    { "New Hierophant Sparkles B", 0x0359600, 0x0359620 },
    { "Raging Demon Trail B", 0x03591a0, 0x0359220 },
    { "New Kakyoin Vs / Super B", 0x0418400, 0x0418480 },
    { "New Kakyoin Challenger B", 0x0418480, 0x0418500 },
    { "New Kakyoin Select / Winning B", 0x0418500, 0x0418580 },
    { "New Hierophant Select / Winning B", 0x0418580, 0x0418600 },
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Burning B", 0x0358a80, 0x0358b80 },
#else
    { "New Kakyoin Burning B (1/2)", 0x0358a80, 0x0358b00 },
    { "New Kakyoin Burning B (2/2)", 0x0358b00, 0x0358b80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Tech/Zap B", 0x0358d80, 0x0358e80 },
#else
    { "New Kakyoin Tech/Zap B (1/2)", 0x0358d80, 0x0358e00 },
    { "New Kakyoin Tech/Zap B (2/2)", 0x0358e00, 0x0358e80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_C[] =
{

    { "New Kakyoin Vs / Super C", 0x041d200, 0x041d280 },
    { "New Kakyoin Challenger C", 0x041d280, 0x041d300 },
    { "New Kakyoin Select / Winning C", 0x041d300, 0x041d380 },
    { "New Hierophant Select / Winning C", 0x041d380, 0x041d400 },
    { "New Kakyoin & Hierophant C", 0x036cf00, 0x036cf80 },
#ifndef USE_LARGE_PALETTES
    { "New Hierophant Changing Pal C (1/7)", 0x036d780, 0x036d800 },
    { "New Hierophant Changing Pal C (2/7)", 0x036d800, 0x036d880 },
    { "New Hierophant Changing Pal C (3/7)", 0x036d880, 0x036d900 },
    { "New Hierophant Changing Pal C (4/7)", 0x036d900, 0x036d980 },
    { "New Hierophant Changing Pal C (5/7)", 0x036d980, 0x036da00 },
    { "New Hierophant Changing Pal C (6/7)", 0x036da00, 0x036da80 },
    { "New Hierophant Changing Pal C (7/7)", 0x036da80, 0x036db00 },
#else
    { "New Hierophant Changing Pal C", 0x036d780, 0x036db00 },
#endif
    { "New Hierophant Sparkles C", 0x036db00, 0x036db20 },
    { "New Hierophant Raging Demon Trail C", 0x036d6a0, 0x036d720 },
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Burning C", 0x036cf80, 0x036d080 },
#else
    { "New Kakyoin Burning C (1/2)", 0x036cf80, 0x036d000 },
    { "New Kakyoin Burning C (2/2)", 0x036d000, 0x036d080 },
#endif
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Tech/Zap C", 0x036d280, 0x036d380 },
#else
    { "New Kakyoin Tech/Zap C (1/2)", 0x036d280, 0x036d300 },
    { "New Kakyoin Tech/Zap C (2/2)", 0x036d300, 0x036d380 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_S[] =
{
    { "New Kakyoin Vs / Super S", 0x0422000, 0x0422080 },
    { "New Kakyoin Challenger S", 0x0422080, 0x0422100 },
    { "New Kakyoin Select / Winning S", 0x0422100, 0x0422180 },
    { "New Hierophant Select / Winning S", 0x0422180, 0x0422200 },
    { "New Kakyoin & Hierophant S", 0x0381400, 0x0381480 },
#ifndef USE_LARGE_PALETTES
    { "New Hierophant Changing Pal S (1/7)", 0x0381c80, 0x0381d00 },
    { "New Hierophant Changing Pal S (2/7)", 0x0381d00, 0x0381d80 },
    { "New Hierophant Changing Pal S (3/7)", 0x0381d80, 0x0381e00 },
    { "New Hierophant Changing Pal S (4/7)", 0x0381e00, 0x0381e80 },
    { "New Hierophant Changing Pal S (5/7)", 0x0381e80, 0x0381f00 },
    { "New Hierophant Changing Pal S (6/7)", 0x0381f00, 0x0381f80 },
    { "New Hierophant Changing Pal S (7/7)", 0x0381f80, 0x0382000 },
#else
    { "New Hierophant Changing Pal S", 0x0381c80, 0x0382000 },
#endif
    { "New Hierophant Sparkles S", 0x0382000, 0x0382020 },
    { "Raging Demon Trail S", 0x0381ba0, 0x0381c20 },
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Burning S", 0x0381480, 0x0381580 },
#else
    { "New Kakyoin Burning S (1/2)", 0x0381480, 0x0381500 },
    { "New Kakyoin Burning S (2/2)", 0x0381500, 0x0381580 },
#endif
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Tech/Zap S", 0x0381780, 0x0381880 },
#else
    { "New Kakyoin Tech/Zap S (1/2)", 0x0381780, 0x0381800 },
    { "New Kakyoin Tech/Zap S (2/2)", 0x0381800, 0x0381880 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HIERO_Start[] =
{
    { "New Kakyoin & Hierophant Start", 0x0395900, 0x0395980 },
#ifndef USE_LARGE_PALETTES
    { "New Hierophant Changing Pal Start (1/7)", 0x0396180, 0x0396200 },
    { "New Hierophant Changing Pal Start (2/7)", 0x0396200, 0x0396280 },
    { "New Hierophant Changing Pal Start (3/7)", 0x0396280, 0x0396300 },
    { "New Hierophant Changing Pal Start (4/7)", 0x0396300, 0x0396380 },
    { "New Hierophant Changing Pal Start (5/7)", 0x0396380, 0x0396400 },
    { "New Hierophant Changing Pal Start (6/7)", 0x0396400, 0x0396480 },
    { "New Hierophant Changing Pal Start (7/7)", 0x0396480, 0x0396500 },
#else
    { "New Hierophant Changing Pal Start", 0x0396180, 0x0396500 },
#endif
    { "New Hierophant Sparkles Start", 0x0396500, 0x0396520 },
    { "Raging Demon Trail Start", 0x03960a0, 0x0396120 },

    { "New Kakyoin Vs / Super Start", 0x0426e00, 0x0426e80 },
    { "New Kakyoin Challenger Start", 0x0426e80, 0x0426f00 },
    { "New Kakyoin Select / Winning Start", 0x0426f00, 0x0426f80 },
    { "New Hierophant Select / Winning Start", 0x0426f80, 0x0427000 },
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Burning Start", 0x0395980, 0x0395a80 },
#else
    { "New Kakyoin Burning Start (1/2)", 0x0395980, 0x0395a00 },
    { "New Kakyoin Burning Start (2/2)", 0x0395a00, 0x0395a80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "New Kakyoin Tech/Zap Start", 0x0395c80, 0x0395d80 },
#else
    { "New Kakyoin Tech/Zap Start (1/2)", 0x0395c80, 0x0395d00 },
    { "New Kakyoin Tech/Zap Start (2/2)", 0x0395d00, 0x0395d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_A[] =
{
    { "Anubis Polnareff A", 0x0345180, 0x0345200 },
    { "Anubis Polnareff Vs / Super A", 0x0413900, 0x0413980 },
    { "Anubis Polnareff Challenger A", 0x0413980, 0x0413a00 },
#ifndef USE_LARGE_PALETTES
    { "Anubis Polnareff Select / Winning A (1/2)", 0x0413a00, 0x0413a80 },
    { "Anubis Polnareff Select / Winning A (2/2)", 0x0413a80, 0x0413b00 },
#else
    { "Anubis Polnareff Select / Winning A", 0x0413a00, 0x0413b00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Burning A", 0x0345200, 0x0345300 },
#else
    { "Anubis Polnareff Burning A (1/2)", 0x0345200, 0x0345280 },
    { "Anubis Polnareff Burning A (2/2)", 0x0345280, 0x0345300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Tech/Zap A", 0x0345500, 0x0345600 },
#else
    { "Anubis Polnareff Tech/Zap A (1/2)", 0x0345500, 0x0345580 },
    { "Anubis Polnareff Tech/Zap A (2/2)", 0x0345580, 0x0345600 },
#endif
    { "Blood (Bpol super, etc)", 0x03359c0, 0x03359e0 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_B[] =
{
    { "Anubis Polnareff B", 0x0359680, 0x0359700 },
    { "Anubis Polnareff Vs / Super B", 0x0418700, 0x0418780 },
    { "Anubis Polnareff Challenger B", 0x0418780, 0x0418800 },
#ifndef USE_LARGE_PALETTES
    { "Anubis Polnareff Select / Winning B (1/2)", 0x0418800, 0x0418880 },
    { "Anubis Polnareff Select / Winning B (2/2)", 0x0418880, 0x0418900 },
#else
    { "Anubis Polnareff Select / Winning B", 0x0418800, 0x0418900 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Burning B", 0x0359700, 0x0359800 },
#else
    { "Anubis Polnareff Burning B (1/2)", 0x0359700, 0x0359780 },
    { "Anubis Polnareff Burning B (2/2)", 0x0359780, 0x0359800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Tech/Zap B", 0x0359a00, 0x0359b00 },
#else
    { "Anubis Polnareff Tech/Zap B (1/2)", 0x0359a00, 0x0359a80 },
    { "Anubis Polnareff Tech/Zap B (2/2)", 0x0359a80, 0x0359b00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_C[] =
{
    { "Anubis Polnareff C", 0x036db80, 0x036dc00 },
    { "Anubis Polnareff Vs / Super C", 0x041d500, 0x041d580 },
    { "Anubis Polnareff Challenger C", 0x041d580, 0x041d600 },
#ifndef USE_LARGE_PALETTES
    { "Anubis Polnareff Select / Winning C (1/2)", 0x041d600, 0x041d680 },
    { "Anubis Polnareff Select / Winning C (2/2)", 0x041d680, 0x041d700 },
#else
    { "Anubis Polnareff Select / Winning C", 0x041d600, 0x041d700 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Burning C", 0x036dc00, 0x036dd00 },
#else
    { "Anubis Polnareff Burning C (1/2)", 0x036dc00, 0x036dc80 },
    { "Anubis Polnareff Burning C (2/2)", 0x036dc80, 0x036dd00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Tech/Zap C", 0x036df00, 0x036e000 },
#else
    { "Anubis Polnareff Tech/Zap C (1/2)", 0x036df00, 0x036df80 },
    { "Anubis Polnareff Tech/Zap C (2/2)", 0x036df80, 0x036e000 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_S[] =
{
    { "Anubis Polnareff S", 0x0382080, 0x0382100 },
    { "Anubis Polnareff Vs / Super S", 0x0422300, 0x0422380 },
    { "Anubis Polnareff Challenger S", 0x0422380, 0x0422400 },
#ifndef USE_LARGE_PALETTES
    { "Anubis Polnareff Select / Winning S (1/2)", 0x0422400, 0x0422480 },
    { "Anubis Polnareff Select / Winning S (2/2)", 0x0422480, 0x0422500 },
#else
    { "Anubis Polnareff Select / Winning S", 0x0422400, 0x0422500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Burning S", 0x0382100, 0x0382200 },
#else
    { "Anubis Polnareff Burning S (1/2)", 0x0382100, 0x0382180 },
    { "Anubis Polnareff Burning S (2/2)", 0x0382180, 0x0382200 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Tech/Zap S", 0x0382400, 0x0382500 },
#else
    { "Anubis Polnareff Tech/Zap S (1/2)", 0x0382400, 0x0382480 },
    { "Anubis Polnareff Tech/Zap S (2/2)", 0x0382480, 0x0382500 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BPOL_Start[] =
{
    { "Anubis Polnareff Start", 0x0396580, 0x0396600 },
    { "Anubis Polnareff Vs / Super Start", 0x0427100, 0x0427180 },
    { "Anubis Polnareff Challenger Start", 0x0427180, 0x0427200 },
#ifndef USE_LARGE_PALETTES
    { "Anubis Polnareff Select / Winning Start (1/2)", 0x0427200, 0x0427280 },
    { "Anubis Polnareff Select / Winning Start (2/2)", 0x0427280, 0x0427300 },
#else
    { "Anubis Polnareff Select / Winning Start", 0x0427200, 0x0427300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Burning Start", 0x0396600, 0x0396700 },
#else
    { "Anubis Polnareff Burning Start (1/2)", 0x0396600, 0x0396680 },
    { "Anubis Polnareff Burning Start (2/2)", 0x0396680, 0x0396700 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Anubis Polnareff Tech/Zap Start", 0x0396900, 0x0396a00 },
#else
    { "Anubis Polnareff Tech/Zap Start (1/2)", 0x0396900, 0x0396980 },
    { "Anubis Polnareff Tech/Zap Start (2/2)", 0x0396980, 0x0396a00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_A[] =
{
    { "Petshop A", 0x0345e00, 0x0345e80 },
    { "Eggshop & Wealthy Begger A", 0X0346680, 0X0346700 },
    { "Petshop Vs / Super A", 0x0413c00, 0x0413c80 },
    { "Petshop Challenger A", 0x0413c80, 0x0413d00 },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning A (1/2)", 0x0413d00, 0x0413d80 },
    { "Petshop Select / Winning A (2/2)", 0x0413d80, 0x0413e00 },
#else
    { "Petshop Select / Winning A", 0x0413d00, 0x0413e00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Burning A", 0x0345e80, 0x0345f80 },
#else
    { "Petshop Burning A (1/2)", 0x0345e80, 0x0345f00 },
    { "Petshop Burning A (2/2)", 0x0345f00, 0x0345f80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Tech/Zap A", 0x0346180, 0x0346280 },
#else
    { "Petshop Tech/Zap A (1/2)", 0x0346180, 0x0346200 },
    { "Petshop Tech/Zap A (2/2)", 0x0346200, 0x0346280 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_B[] =
{
    { "Petshop B", 0x035a300, 0x035a380 },
    { "Eggshop & Wealthy Begger B", 0x035AB80, 0x035AC00 },
    { "Petshop Vs / Super B", 0x0418a00, 0x0418a80 },
    { "Petshop Challenger B", 0x0418a80, 0x0418b00 },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning B (1/2)", 0x0418b00, 0x0418b80 },
    { "Petshop Select / Winning B (2/2)", 0x0418b80, 0x0418c00 },
#else
    { "Petshop Select / Winning B", 0x0418b00, 0x0418c00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Burning B", 0x035a380, 0x035a480 },
#else
    { "Petshop Burning B (1/2)", 0x035a380, 0x035a400 },
    { "Petshop Burning B (2/2)", 0x035a400, 0x035a480 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Tech/Zap B ", 0x035a680, 0x035a780 },
#else
    { "Petshop Tech/Zap B  (1/2)", 0x035a680, 0x035a700 },
    { "Petshop Tech/Zap B  (2/2)", 0x035a700, 0x035a780 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_C[] =
{
    { "Petshop C", 0x036e800, 0x036e880 },
    { "Eggshop & Wealthy Begger C", 0x036F080, 0x036F100 },
    { "Petshop Vs / Super C", 0x041d800, 0x041d880 },
    { "Petshop Challenger C", 0x041d880, 0x041d900 },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning C (1/2)", 0x041d900, 0x041d980 },
    { "Petshop Select / Winning C (2/2)", 0x041d980, 0x041da00 },
#else
    { "Petshop Select / Winning C", 0x041d900, 0x041da00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Burning C", 0x036e880, 0x036e980 },
#else
    { "Petshop Burning C (1/2)", 0x036e880, 0x036e900 },
    { "Petshop Burning C (2/2)", 0x036e900, 0x036e980 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Tech/Zap C", 0x036eb80, 0x036ec80 },
#else
    { "Petshop Tech/Zap C (1/2)", 0x036eb80, 0x036ec00 },
    { "Petshop Tech/Zap C (2/2)", 0x036ec00, 0x036ec80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_S[] =
{
    { "Petshop S", 0x0382d00, 0x0382d80 },
    { "Eggshop & Wealthy Begger S", 0x0383580, 0x0383600 },
    { "Petshop Vs / Super S", 0x0422600, 0x0422680 },
    { "Petshop Challenger S", 0x0422680, 0x0422700 },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning S (1/2)", 0x0422700, 0x0422780 },
    { "Petshop Select / Winning S (2/2)", 0x0422780, 0x0422800 },
#else
    { "Petshop Select / Winning S", 0x0422700, 0x0422800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Burning S", 0x0382d80, 0x0382e80 },
#else
    { "Petshop Burning S (1/2)", 0x0382d80, 0x0382e00 },
    { "Petshop Burning S (2/2)", 0x0382e00, 0x0382e80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Tech/Zap S", 0x0383080, 0x0383180 },
#else
    { "Petshop Tech/Zap S (1/2)", 0x0383080, 0x0383100 },
    { "Petshop Tech/Zap S (2/2)", 0x0383100, 0x0383180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_SHOP_Start[] =
{
    { "Petshop Start", 0x0397200, 0x0397280 },
    { "Eggshop & Wealthy Begger Start", 0x0397A80, 0x0397B00 },
    { "Petshop Vs / Super Start", 0x0427400, 0x0427480 },
    { "Petshop Challenger Start", 0x0427480, 0x0427500 },
#ifndef USE_LARGE_PALETTES
    { "Petshop Select / Winning Start (1/2)", 0x0427500, 0x0427580 },
    { "Petshop Select / Winning Start (2/2)", 0x0427580, 0x0427600 },
#else
    { "Petshop Select / Winning Start", 0x0427500, 0x0427600 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Burning Start", 0x0397280, 0x0397380 },
#else
    { "Petshop Burning Start (1/2)", 0x0397280, 0x0397300 },
    { "Petshop Burning Start (2/2)", 0x0397300, 0x0397380 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Petshop Tech/Zap Start", 0x0397580, 0x0397680 },
#else
    { "Petshop Tech/Zap Start (1/2)", 0x0397580, 0x0397600 },
    { "Petshop Tech/Zap Start (2/2)", 0x0397600, 0x0397680 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_A[] =
{
    { "Mariah A", 0x0347700, 0x0347780 },
    { "Old Woman A", 0x0347f80, 0x0348000 },
#ifndef USE_LARGE_PALETTES
    { "Mariah Winpose Stuff A (1/2)", 0x0348000, 0x0348080 },
    { "Mariah Winpose Stuff A (2/2)", 0x0348080, 0x0348100 },
#else
    { "Mariah Winpose Stuff A", 0x0348000, 0x0348100 },
#endif
    { "Mariah's Outlet A", 0x0348100, 0x0348180 },
    { "Mariah Vs / Super A", 0x0414200, 0x0414280 },
    { "Mariah Challenger A", 0x0414280, 0x0414300 },
    { "Mariah Select / Winning A", 0x0414300, 0x0414380 },
#ifdef USE_LARGE_PALETTES
    { "Mariah Burning A", 0x0347780, 0x0347880 },
#else
    { "Mariah Burning A (1/2)", 0x0347780, 0x0347800 },
    { "Mariah Burning A (2/2)", 0x0347800, 0x0347880 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Mariah Tech/Zap A", 0x0347a80, 0x0347b80 },
#else
    { "Mariah Tech/Zap A (1/2)", 0x0347a80, 0x0347b00 },
    { "Mariah Tech/Zap A (2/2)", 0x0347b00, 0x0347b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_B[] =
{
    { "Mariah B", 0x035bc00, 0x035bc80 },
    { "Old Woman B", 0x035c480, 0x035c500 },
#ifndef USE_LARGE_PALETTES
    { "Mariah Winpose Stuff B (1/2)", 0x035c500, 0x035c580 },
    { "Mariah Winpose Stuff B (2/2)", 0x035c580, 0x035c600 },
#else
    { "Mariah Winpose Stuff B", 0x035c500, 0x035c600 },
#endif
    { "Mariah's Outlet B", 0x035c600, 0x035c680 },
    { "Mariah Vs / Super B", 0x0419000, 0x0419080 },
    { "Mariah Challenger B", 0x0419080, 0x0419100 },
    { "Mariah Select / Winning B", 0x0419100, 0x0419180 },
#ifdef USE_LARGE_PALETTES
    { "Mariah Burning B", 0x035bc80, 0x035bd80 },
#else
    { "Mariah Burning B (1/2)", 0x035bc80, 0x035bd00 },
    { "Mariah Burning B (2/2)", 0x035bd00, 0x035bd80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Mariah Tech/Zap B", 0x035bf80, 0x035c080 },
#else
    { "Mariah Tech/Zap B (1/2)", 0x035bf80, 0x035c000 },
    { "Mariah Tech/Zap B (2/2)", 0x035c000, 0x035c080 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_C[] =
{
    { "Mariah C", 0x0370100, 0x0370180 },
    { "Old Woman C", 0x0370980, 0x0370a00 },
#ifndef USE_LARGE_PALETTES
    { "Mariah Winpose Stuff C (1/2)", 0x0370a00, 0x0370a80 },
    { "Mariah Winpose Stuff C (2/2)", 0x0370a80, 0x0370b00 },
#else
    { "Mariah Winpose Stuff C", 0x0370a00, 0x0370b00 },
#endif
    { "Mariah's Outlet C", 0x0370b00, 0x0370b80 },
    { "Mariah Vs / Super C", 0x041de00, 0x041de80 },
    { "Mariah Challenger C", 0x041de80, 0x041df00 },
    { "Mariah Select / Winning C", 0x041df00, 0x041df80 },
#ifdef USE_LARGE_PALETTES
    { "Mariah Burning C", 0x0370180, 0x0370280 },
#else
    { "Mariah Burning C (1/2)", 0x0370180, 0x0370200 },
    { "Mariah Burning C (2/2)", 0x0370200, 0x0370280 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Mariah Tech/Zap C", 0x0370480, 0x0370580 },
#else
    { "Mariah Tech/Zap C (1/2)", 0x0370480, 0x0370500 },
    { "Mariah Tech/Zap C (2/2)", 0x0370500, 0x0370580 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_S[] =
{
    { "Mariah S", 0x0384600, 0x0384680 },
    { "Old Woman S", 0x0384e80, 0x0384f00 },
#ifndef USE_LARGE_PALETTES
    { "Mariah Winpose Stuff S (1/2)", 0x0384f00, 0x0384f80 },
    { "Mariah Winpose Stuff S (2/2)", 0x0384f80, 0x0385000 },
#else
    { "Mariah Winpose Stuff S", 0x0384f00, 0x0385000 },
#endif
    { "Mariah's Outlet S", 0x0385000, 0x0385080 },
    { "Mariah Vs / Super S", 0x0422c00, 0x0422c80 },
    { "Mariah Challenger S", 0x0422c80, 0x0422d00 },
    { "Mariah Select / Winning S", 0x0422d00, 0x0422d80 },
#ifdef USE_LARGE_PALETTES
    { "Mariah Burning S", 0x0384680, 0x0384780 },
#else
    { "Mariah Burning S (1/2)", 0x0384680, 0x0384700 },
    { "Mariah Burning S (2/2)", 0x0384700, 0x0384780 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Mariah Tech/Zap S", 0x0384980, 0x0384a80 },
#else
    { "Mariah Tech/Zap S (1/2)", 0x0384980, 0x0384a00 },
    { "Mariah Tech/Zap S (2/2)", 0x0384a00, 0x0384a80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_MARIAH_Start[] =
{
    { "Mariah Start", 0x0398b00, 0x0398b80 },
    { "Old Woman Start", 0x0399380, 0x0399400 },
#ifndef USE_LARGE_PALETTES
    { "Mariah Winpose Stuff Start (1/2)", 0x0399400, 0x0399480 },
    { "Mariah Winpose Stuff Start (2/2)", 0x0399480, 0x0399500 },
#else
    { "Mariah Winpose Stuff Start", 0x0399400, 0x0399500 },
#endif
    { "Mariah's Outlet Start", 0x0399500, 0x0399580 },
    { "Mariah Vs / Super Start", 0x0427a00, 0x0427a80 },
    { "Mariah Challenger Start", 0x0427a80, 0x0427b00 },
    { "Mariah Select / Winning Start", 0x0427b00, 0x0427b80 },
#ifdef USE_LARGE_PALETTES
    { "Mariah Burning Start", 0x0398b80, 0x0398c80 },
#else
    { "Mariah Burning Start (1/2)", 0x0398b80, 0x0398c00 },
    { "Mariah Burning Start (2/2)", 0x0398c00, 0x0398c80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Mariah Tech/Zap Start", 0x0398e80, 0x0398f80 },
#else
    { "Mariah Tech/Zap Start (1/2)", 0x0398e80, 0x0398f00 },
    { "Mariah Tech/Zap Start (2/2)", 0x0398f00, 0x0398f80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_A[] =
{
    { "Hol & Boingo A", 0x0348380, 0x0348400 },
    { "Child Hol & Boingo A", 0x0348c00, 0x0348c80 },
    { "Hol & Boingo Super Bullets A", 0x0348cd6, 0x0348ce0 },
    { "Hol & Boingo Vs / Super A", 0x0414500, 0x0414580 },
    { "Hol & Boingo Challenger A", 0x0414580, 0x0414600 },
#ifndef USE_LARGE_PALETTES
    { "Hol & Boingo Select / Winning A (1/2)", 0x0414600, 0x0414680 },
    { "Hol & Boingo Select / Winning A (2/2)", 0x0414680, 0x0414700 },
#else
    { "Hol & Boingo Select / Winning A", 0x0414600, 0x0414700 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Burning A", 0x0348400, 0x0348500 },
#else
    { "Hol & Boingo Burning A (1/2)", 0x0348400, 0x0348480 },
    { "Hol & Boingo Burning A (2/2)", 0x0348480, 0x0348500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Tech/Zap A", 0x0348700, 0x0348800 },
#else
    { "Hol & Boingo Tech/Zap A (1/2)", 0x0348700, 0x0348780 },
    { "Hol & Boingo Tech/Zap A (2/2)", 0x0348780, 0x0348800 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_B[] =
{
    { "Hol & Boingo B", 0x035c880, 0x035c900 },
    { "Child Hol & Boingo B", 0x035d100, 0x035d180 },
    { "Hol & Boingo Super Bullets B", 0x035d1d6, 0x035d1e0 },
    { "Hol & Boingo Vs / Super B", 0x0419300, 0x0419380 },
    { "Hol & Boingo Challenger B", 0x0419380, 0x0419400 },
#ifndef USE_LARGE_PALETTES
    { "Hol & Boingo Select / Winning B (1/2)", 0x0419400, 0x0419480 },
    { "Hol & Boingo Select / Winning B (2/2)", 0x0419480, 0x0419500 },
#else
    { "Hol & Boingo Select / Winning B", 0x0419400, 0x0419500 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Burning B", 0x035c900, 0x035ca00 },
#else
    { "Hol & Boingo Burning B (1/2)", 0x035c900, 0x035c980 },
    { "Hol & Boingo Burning B (2/2)", 0x035c980, 0x035ca00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Tech/Zap B", 0x035cc00, 0x035cd00 },
#else
    { "Hol & Boingo Tech/Zap B (1/2)", 0x035cc00, 0x035cc80 },
    { "Hol & Boingo Tech/Zap B (2/2)", 0x035cc80, 0x035cd00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_C[] =
{
    { "Hol & Boingo C", 0x0370d80, 0x0370e00 },
    { "Child Hol & Boingo C", 0x0371600, 0x0371680 },
    { "Hol & Boingo Super Bullets C", 0x03716d6, 0x03716e0 },
    { "Hol & Boingo Vs / Super C", 0x041e100, 0x041e180 },
    { "Hol & Boingo Challenger C", 0x041e180, 0x041e200 },
#ifndef USE_LARGE_PALETTES
    { "Hol & Boingo Select / Winning C (1/2)", 0x041e200, 0x041e280 },
    { "Hol & Boingo Select / Winning C (2/2)", 0x041e280, 0x041e300 },
#else
    { "Hol & Boingo Select / Winning C", 0x041e200, 0x041e300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Burning C", 0x0370e00, 0x0370f00 },
#else
    { "Hol & Boingo Burning C (1/2)", 0x0370e00, 0x0370e80 },
    { "Hol & Boingo Burning C (2/2)", 0x0370e80, 0x0370f00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Tech/Zap C", 0x0371100, 0x0371200 },
#else
    { "Hol & Boingo Tech/Zap C (1/2)", 0x0371100, 0x0371180 },
    { "Hol & Boingo Tech/Zap C (2/2)", 0x0371180, 0x0371200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_S[] =
{
    { "Hol & Boingo S", 0x0385280, 0x0385300 },
    { "Child Hol & Boingo S", 0x0385b00, 0x0385b80 },
    { "Hol & Boingo Super Bullets S", 0x0385bd6, 0x0385be0 },
    { "Hol & Boingo Vs / Super S", 0x0422f00, 0x0422f80 },
    { "Hol & Boingo Challenger S", 0x0422f80, 0x0423000 },
#ifndef USE_LARGE_PALETTES
    { "Hol & Boingo Select / Winning S (1/2)", 0x0423000, 0x0423080 },
    { "Hol & Boingo Select / Winning S (2/2)", 0x0423080, 0x0423100 },
#else
    { "Hol & Boingo Select / Winning S", 0x0423000, 0x0423100 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Burning S", 0x0385300, 0x0385400 },
#else
    { "Hol & Boingo Burning S (1/2)", 0x0385300, 0x0385380 },
    { "Hol & Boingo Burning S (2/2)", 0x0385380, 0x0385400 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Tech/Zap S", 0x0385600, 0x0385700 },
#else
    { "Hol & Boingo Tech/Zap S (1/2)", 0x0385600, 0x0385680 },
    { "Hol & Boingo Tech/Zap S (2/2)", 0x0385680, 0x0385700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start[] =
{
    { "Hol & Boingo Start", 0x0399780, 0x0399800 },
    { "Child Hol & Boingo Start", 0x039a000, 0x039a080 },
    { "Hol & Boingo Super Bullets Start", 0x039a0d6, 0x039a0e0 },
    { "Hol & Boingo Vs / Super Start", 0x0427d00, 0x0427d80 },
    { "Hol & Boingo Challenger Start", 0x0427d80, 0x0427e00 },
#ifndef USE_LARGE_PALETTES
    { "Hol & Boingo Select / Winning Start (1/2)", 0x0427e00, 0x0427e80 },
    { "Hol & Boingo Select / Winning Start (2/2)", 0x0427e80, 0x0427f00 },
#else
    { "Hol & Boingo Select / Winning Start", 0x0427e00, 0x0427f00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Burning Start", 0x0399800, 0x0399900 },
#else
    { "Hol & Boingo Burning Start (1/2)", 0x0399800, 0x0399880 },
    { "Hol & Boingo Burning Start (2/2)", 0x0399880, 0x0399900 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol & Boingo Tech/Zap Start", 0x0399b00, 0x0399c00 },
#else
    { "Hol & Boingo Tech/Zap Start (1/2)", 0x0399b00, 0x0399b80 },
    { "Hol & Boingo Tech/Zap Start (2/2)", 0x0399b80, 0x0399c00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_A[] =
{
    { "Rubber Soul A", 0x0349000, 0x0349080 },
    { "Rubber Child TF A", 0x0349780, 0x0349800 },
    { "Rubber Soul Vs / Super A", 0x0414800, 0x0414880 },
    { "Rubber Soul Challenger A", 0x0414880, 0x0414900 },
    { "Rubber Soul Select / Winning A", 0x0414900, 0x0414980 },
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Burning A", 0x0349080, 0x0349180 },
#else
    { "Rubber Soul Burning A (1/2)", 0x0349080, 0x0349100 },
    { "Rubber Soul Burning A (2/2)", 0x0349100, 0x0349180 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Tech/Zap A", 0x035d880, 0x035d980 },
#else
    { "Rubber Soul Tech/Zap A (1/2)", 0x035d880, 0x035d900 },
    { "Rubber Soul Tech/Zap A (2/2)", 0x035d900, 0x035d980 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_B[] =
{
    { "Rubber Soul B", 0x035d500, 0x035d580 },
    { "Rubber Child TF B", 0x035dc80, 0x035dd00 },
    { "Rubber Soul Vs / Super B", 0x0419600, 0x0419680 },
    { "Rubber Soul Challenger B", 0x0419680, 0x0419700 },
    { "Rubber Soul Select / Winning B", 0x0419700, 0x0419780 },
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Burning B", 0x035d580, 0x035d680 },
#else
    { "Rubber Soul Burning B (1/2)", 0x035d580, 0x035d600 },
    { "Rubber Soul Burning B (2/2)", 0x035d600, 0x035d680 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Tech/Zap B", 0x0371d80, 0x0371e80 },
#else
    { "Rubber Soul Tech/Zap B (1/2)", 0x0371d80, 0x0371e00 },
    { "Rubber Soul Tech/Zap B (2/2)", 0x0371e00, 0x0371e80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_C[] =
{
    { "Rubber Soul C", 0x0371a00, 0x0371a80 },
    { "Rubber Child TF C", 0x0372180, 0x0372200 },
    { "Rubber Soul Vs / Super C", 0x041e400, 0x041e480 },
    { "Rubber Soul Challenger C", 0x041e480, 0x041e500 },
    { "Rubber Soul Select / Winning C", 0x041e500, 0x041e580 },
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Burning C", 0x0371a80, 0x0371b80 },
#else
    { "Rubber Soul Burning C (1/2)", 0x0371a80, 0x0371b00 },
    { "Rubber Soul Burning C (2/2)", 0x0371b00, 0x0371b80 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Tech/Zap C", 0x0386280, 0x0386380 },
#else
    { "Rubber Soul Tech/Zap C (1/2)", 0x0386280, 0x0386300 },
    { "Rubber Soul Tech/Zap C (2/2)", 0x0386300, 0x0386380 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_S[] =
{
    { "Rubber Soul S", 0x0385f00, 0x0385f80 },
    { "Rubber Child TF S", 0x0386680, 0x0386700 },
    { "Rubber Soul Vs / Super S", 0x0423200, 0x0423280 },
    { "Rubber Soul Challenger S", 0x0423280, 0x0423300 },
    { "Rubber Soul Select / Winning S", 0x0423300, 0x0423380 },
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Burning S", 0x0385f80, 0x0386080 },
#else
    { "Rubber Soul Burning S (1/2)", 0x0385f80, 0x0386000 },
    { "Rubber Soul Burning S (2/2)", 0x0386000, 0x0386080 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Tech/Zap S", 0x039a780, 0x039a880 },
#else
    { "Rubber Soul Tech/Zap S (1/2)", 0x039a780, 0x039a800 },
    { "Rubber Soul Tech/Zap S (2/2)", 0x039a800, 0x039a880 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_RSOUL_Start[] =
{
    { "Rubber Soul Vs / Super Start", 0x0428000, 0x0428080 },
    { "Rubber Soul Challenger Start", 0x0428080, 0x0428100 },
    { "Rubber Soul Select / Winning Start", 0x0428100, 0x0428180 },
    { "Rubber Soul Start", 0x039a400, 0x039a480 },
    { "Rubber Child TF Start", 0x039ab80, 0x039ac00 },
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Burning Start", 0x039a480, 0x039a580 },
#else
    { "Rubber Soul Burning Start (1/2)", 0x039a480, 0x039a500 },
    { "Rubber Soul Burning Start (2/2)", 0x039a500, 0x039a580 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Rubber Soul Tech/Zap Start", 0x03aec80, 0x03aed80 },
#else
    { "Rubber Soul Tech/Zap Start (1/2)", 0x03aec80, 0x03aed00 },
    { "Rubber Soul Tech/Zap Start (2/2)", 0x03aed00, 0x03aed80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_A[] =
{
    { "Khan A", 0x0349c80, 0x0349d00 },
    { "Khan's Intro Anubis A", 0x034a600, 0x034a620 },
    { "Khan's Counter Anubis A", 0x034a780, 0x034a7a0 },
    { "Khan's Special Slash A", 0x034a700, 0x034a720 },
    { "Khan Vs/Super A", 0x0414b00, 0x0414b80 },
    { "Khan Challenger A", 0x0414b80, 0x0414c00 },
    { "Khan Select/Winning A", 0x0414c00, 0x0414c80 },
#ifdef USE_LARGE_PALETTES
    { "Khan Burning A", 0x0349d00, 0x0349e00 },
#else
    { "Khan Burning A (1/2)", 0x0349d00, 0x0349d80 },
    { "Khan Burning A (2/2)", 0x0349d80, 0x0349e00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Khan Tech/Zap A", 0x034a000, 0x034a100 },
#else
    { "Khan Tech/Zap A (1/2)", 0x034a000, 0x034a080 },
    { "Khan Tech/Zap A (2/2)", 0x034a080, 0x034a100 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_B[] =
{
    { "Khan B", 0x035e180, 0x035e200 },
    { "Khan's Intro Anubis B", 0x035eb00, 0x035eb20 },
    { "Khan's Counter Anubis B", 0x035ec80, 0x035eca0 },
    { "Khan's Special Slash B", 0x035ec00, 0x035ec20 },
    { "Khan Vs/Super B", 0x0419900, 0x0419980 },
    { "Khan Challenger B", 0x0419980, 0x0419a00 },
    { "Khan Select/Winning B", 0x0419a00, 0x0419a80 },
#ifdef USE_LARGE_PALETTES
    { "Khan Burning B", 0x035e200, 0x035e300 },
#else
    { "Khan Burning B (1/2)", 0x035e200, 0x035e280 },
    { "Khan Burning B (2/2)", 0x035e280, 0x035e300 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Khan Tech/Zap B", 0x035e500, 0x035e600 },
#else
    { "Khan Tech/Zap B (1/2)", 0x035e500, 0x035e580 },
    { "Khan Tech/Zap B (2/2)", 0x035e580, 0x035e600 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_C[] =
{
    { "Khan C", 0x0372680, 0x0372700 },
    { "Khan's Intro Anubis C", 0x0373000, 0x0373020 },
    { "Khan's Counter Anubis C", 0x0373180, 0x03731a0 },
    { "Khan's Special Slash C", 0x0373100, 0x0373120 },
    { "Khan Vs/Super C", 0x041e700, 0x041e780 },
    { "Khan Challenger C", 0x041e780, 0x041e800 },
    { "Khan Select/Winning C", 0x041e800, 0x041e880 },
#ifdef USE_LARGE_PALETTES
    { "Khan Burning C", 0x0372700, 0x0372800 },
#else
    { "Khan Burning C (1/2)", 0x0372700, 0x0372780 },
    { "Khan Burning C (2/2)", 0x0372780, 0x0372800 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Khan Tech/Zap C", 0x0372a00, 0x0372b00 },
#else
    { "Khan Tech/Zap C (1/2)", 0x0372a00, 0x0372a80 },
    { "Khan Tech/Zap C (2/2)", 0x0372a80, 0x0372b00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_S[] =
{
    { "Khan S", 0x0386b80, 0x0386c00 },
    { "Khan's Intro Anubis S", 0x0387500, 0x0387520 },
    { "Khan's Counter Anubis S", 0x0387680, 0x03876a0 },
    { "Khan's Special Slash S", 0x0387600, 0x0387620 },
    { "Khan Vs/Super S", 0x0423500, 0x0423580 },
    { "Khan Challenger S", 0x0423580, 0x0423600 },
    { "Khan Select/Winning S", 0x0423600, 0x0423680 },
#ifdef USE_LARGE_PALETTES
    { "Khan Burning S", 0x0386c00, 0x0386d00 },
#else
    { "Khan Burning S (1/2)", 0x0386c00, 0x0386c80 },
    { "Khan Burning S (2/2)", 0x0386c80, 0x0386d00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Khan Tech/Zap S", 0x0386f00, 0x0387000 },
#else
    { "Khan Tech/Zap S (1/2)", 0x0386f00, 0x0386f80 },
    { "Khan Tech/Zap S (2/2)", 0x0386f80, 0x0387000 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_KHAN_Start[] =
{
    { "Khan Start", 0x039b080, 0x039b100 },
    { "Khan's Intro Anubis Start", 0x039ba00, 0x039ba20 },
    { "Khan's Counter Anubis Start", 0x039bb80, 0x039bba0 },
    { "Khan's Special Slash Start", 0x039bb00, 0x039bb20 },
    { "Khan Vs/Super Start", 0x0428300, 0x0428380 },
    { "Khan Challenger Start", 0x0428380, 0x0428400 },
    { "Khan Select/Winning Start", 0x0428400, 0x0428480 },
#ifdef USE_LARGE_PALETTES
    { "Khan Burning Start", 0x039b100, 0x039b200 },
#else
    { "Khan Burning Start (1/2)", 0x039b100, 0x039b180 },
    { "Khan Burning Start (2/2)", 0x039b180, 0x039b200 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Khan Tech/Zap Start", 0x039b400, 0x039b500 },
#else
    { "Khan Tech/Zap Start (1/2)", 0x039b400, 0x039b480 },
    { "Khan Tech/Zap Start (2/2)", 0x039b480, 0x039b500 },
#endif
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_A[] =
{
    { "N'Doul & Geb A", 0x033d480, 0x033d500 },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_B[] =
{
    { "N'Doul & Geb B", 0x0351980, 0x0351a00 },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_C[] =
{
    { "N'Doul & Geb C", 0x0365e80, 0x0365f00 },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_S[] =
{
    { "N'Doul & Geb S", 0x037a380, 0x037a400 },
}; 

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_NDOUL_Start[] =
{
    { "N'Doul & Geb Start", 0x038e880, 0x038e900 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_A[] =
{
    { "Boss Ice A", 0x033fa00, 0x033fa80 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_B[] =
{
    { "Boss Ice B", 0x0353f00, 0x0353f80 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_C[] =
{
    { "Boss Ice C", 0x0368400, 0x0368480 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_S[] =
{
    { "Boss Ice S", 0x037c900, 0x037c980 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_BICE_Start[] =
{
    { "Boss Ice Start", 0x0390e00, 0x0390e80 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_A[] =
{
    { "Death 13 A", 0x0340680, 0x0340700 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_B[] =
{
    { "Death 13 B", 0x0354b80, 0x0354c00 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_C[] =
{
    { "Death 13 C", 0x0369080, 0x0369100 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_S[] =
{
    { "Death 13 S", 0x037d580, 0x037d600 },
};

const sGame_PaletteDataset JOJOS_A_CHARACTER_NODE_DEATH13_Start[] =
{
    { "Death 13 Start", 0x0391a80, 0x0391b00 },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOTARO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOTARO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOTARO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIEROPHANT_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_AVDOL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_AVDOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_AVDOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_POL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_POL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_POL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_JOSEPH[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_JOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_JOSEPH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_IGGY[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_IGGY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_IGGY_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_ALESSI[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_ALESSI_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_ALESSI_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_CHAKA[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_CHAKA_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_CHAKA_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEVOEBONY_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MIDLER[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MIDLER_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MIDLER_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DIO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SDIO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SDIO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SDIO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_YJOSEPH[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_YJOSEPH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_YJOSEPH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_VICE[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_VICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_VICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HIERO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HIERO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HIERO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BPOL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BPOL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BPOL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_SHOP[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_SHOP_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_SHOP_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_MARIAH[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_MARIAH_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_MARIAH_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_HOLBOINGO_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_RSOUL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_RSOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_RSOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_KHAN[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_KHAN_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_KHAN_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_NDOUL[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_NDOUL_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_NDOUL_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_BICE[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_BICE_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_BICE_Start) },
};

const sDescTreeNode JOJOS_A_CHARACTER_COLLECTION_DEATH13[] =
{
    { "A", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_A, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_A) },
    { "B", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_B, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_B) },
    { "C", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_C, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_C) },
    { "S", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_S, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_S) },
    { "Start", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_NODE_DEATH13_Start, ARRAYSIZE(JOJOS_A_CHARACTER_NODE_DEATH13_Start) },
};

#pragma endregion Jojo_Characters

#pragma region Bonus

// Note that this is intentionally sorted: don't alphabetize
const sGame_PaletteDataset JOJOS_BONUS_MENU_PALETTES[] =
{
    { "Mode Select Frame", 0x030d4e0, 0x030d500 },
    { "Mode Select Text", 0x0311a90, 0x0311aa0 },
    { "Menu Cards", 0x030db40, 0x030db80 },
    { "Challenge & Story signs", 0x030d480, 0x030d4c0 },
    { "Character Select Background", 0x0310100, 0x0310160 },
    { "Selector Rings", 0x0310080, 0x03100c0 },
    { "Character Select Comic", 0x0310000, 0x0310080 },
    { "Extra characters page arrows", 0x0310500, 0x0310540 },
    { "Vs screen Background", 0x030d000, 0x030d080 },
    { "Win screen Background", 0x0310200, 0x0310280 },
    { "D'Arby", 0x0311a00, 0x0311a80 },
    { "Darby Chips", 0x0311d00, 0x0311d80 },
    { "Osiris Arms", 0x0311b80, 0x0311c00 },
    { "Osiris Body", 0x0311b00, 0x0311b80 },
    { "Game Over Text", 0x0311a80, 0x0311b00 },
};

const sGame_PaletteDataset JOJOS_BONUS_INTRO_PALETTES[] =
{
    { "Capcom Presents (text under intro logo)", 0x030b040, 0x030b060 },
    { "Capcom logo",            0x030b080, 0x030b0a0 },
    { "Capcom Backgrounds",     0x030C300, 0x030C340 },
    { "Hol Horse intro Body",   0x030c600, 0x030c680 },
    { "Hol Horse intro Hand",   0x030c580, 0x030c600 },
    { "Hol Horse shoot scene",  0x030C400, 0x030C480 },
#ifdef USE_LARGE_PALETTES
    { "Hol Horse intro background", 0x030bb00, 0x030be00 },
#else
    { "Hol Horse intro background (1/6)", 0x030bb00, 0x030bb80 },
    { "Hol Horse intro background (2/6)", 0x030bb80, 0x030bc00 },
    { "Hol Horse intro background (3/6)", 0x030bc00, 0x030bc80 },
    { "Hol Horse intro background (4/6)", 0x030bc80, 0x030bd00 },
    { "Hol Horse intro background (5/6)", 0x030bd00, 0x030bd80 },
    { "Hol Horse intro background (6/6)", 0x030bd80, 0x030be00 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Hol Horse intro ender background", 0x030be00, 0x030c300 },
#else
    { "Hol Horse intro ender background (1/10)", 0x030be00, 0x030be80 },
    { "Hol Horse intro ender background (2/10)", 0x030be80, 0x030bf00 },
    { "Hol Horse intro ender background (3/10)", 0x030bf00, 0x030bf80 },
    { "Hol Horse intro ender background (4/10)", 0x030bf80, 0x030c000 },
    { "Hol Horse intro ender background (5/10)", 0x030c000, 0x030c080 },
    { "Hol Horse intro ender background (6/10)", 0x030c080, 0x030c100 },
    { "Hol Horse intro ender background (7/10)", 0x030c100, 0x030c180 },
    { "Hol Horse intro ender background (8/10)", 0x030c180, 0x030c200 },
    { "Hol Horse intro ender background (9/10)", 0x030c200, 0x030c280 },
    { "Hol Horse intro ender background (10/10)", 0x030c280, 0x030c300 },
#endif
    { "Vanilla Ice intro",      0x030ba00, 0x030ba80 },
    { "Cream intro",            0x030ba80, 0x030bb00 },
#ifdef USE_LARGE_PALETTES
    { "Vice intro background", 0x030b100, 0x030b780 },
#else
    { "Vice intro background (1/13)", 0x030b100, 0x030b180 },
    { "Vice intro background (2/13)", 0x030b180, 0x030b200 },
    { "Vice intro background (3/13)", 0x030b200, 0x030b280 },
    { "Vice intro background (4/13)", 0x030b280, 0x030b300 },
    { "Vice intro background (5/13)", 0x030b300, 0x030b380 },
    { "Vice intro background (6/13)", 0x030b380, 0x030b400 },
    { "Vice intro background (7/13)", 0x030b400, 0x030b480 },
    { "Vice intro background (8/13)", 0x030b480, 0x030b500 },
    { "Vice intro background (9/13)", 0x030b500, 0x030b580 },
    { "Vice intro background (10/13)", 0x030b580, 0x030b600 },
    { "Vice intro background (11/13)", 0x030b600, 0x030b680 },
    { "Vice intro background (12/13)", 0x030b680, 0x030b700 },
    { "Vice intro background (13/13)", 0x030b700, 0x030b780 },
#endif
    { "Vice Intro Ender",       0x030c380, 0x030c400 },
#ifndef USE_LARGE_PALETTES
    { "Intro Manga Panels (1/5)", 0x030b780, 0x030b800 },
    { "Intro Manga Panels (2/5)", 0x030b800, 0x030b880 },
    { "Intro Manga Panels (3/5)", 0x030b880, 0x030b900 },
    { "Intro Manga Panels (4/5)", 0x030b900, 0x030b980 },
    { "Intro Manga Panels (5/5)", 0x030b980, 0x030ba00 },
#else
    { "Intro Manga Panels", 0x030b780, 0x030ba00 },
#endif
    { "Title Screen DIO",       0x030c500, 0x030c580 },
    { "Title Screen DIO Fade 1", 0x030C780, 0x030C800 },
    { "Title Screen DIO Fade 2", 0x030C800, 0x030C880 },
    { "Title Screen DIO Fade 3", 0x030C880, 0x030C900 },
    { "Title Screen DIO Manga", 0x030c900, 0x030c980 },
    { "Title Screen Jotaro",    0x030c480, 0x030c500 },
    { "Title Screen Jotaro Fade 1", 0x030C980, 0x030CA00 },
    { "Title Screen Jotaro Fade 2", 0x030CA00, 0x030CA80 },
    { "Title Screen Jotaro Fade 3", 0x030CA80, 0x030CB00 },
    { "Title Screen Jotaro Manga", 0x030cb00, 0x030cb80 },
    { "Title Screen Logo",      0x030c680, 0x030c700 },
    { "Title Screen Logo Ribbon", 0x030c700, 0x030c780 },
    { "Title Screen Background", 0x030b0a0, 0x030b0b0 },
    { "World Map",              0x0313780, 0x0313800 },
};

const sGame_PaletteDataset JOJOS_BONUS_INGAME_PALETTES[] =
{
    { "Aja Stone", 0x0335800, 0x0335840 },
    { "Blood (Sdio grab, bpol grab,etc)", 0x0335878, 0x0335880 },
    { "Super Flash / Zap Effects", 0x0335840, 0x0335860 },
    { "Blocksparks", 0x03358d0, 0x03358e0 },
    { "Hitsparks & Pushblock", 0x0335820, 0x0335840 },
    { "Tandem Aura", 0x0335930, 0x0335940 },
    { "Tandem Background", 0x030d900, 0x030d980 },
    { "Stand Clash Background", 0x030d100, 0x030d180 },
    { "Stand Crash Mask Background", 0x030cec0, 0x030cf00 },
    { "Stand Crash Mask Background 2", 0x030CF40, 0x030CF80 },
    { "Raging Demon Background", 0x030d180, 0x030d200 },
    { "Super KO Background", 0x030d082, 0x030d102 },
    { "Super KO Portrait", 0x030ce80, 0x030cec0 },
    { "\"Round 1,2,3\" Text", 0x030ce00, 0x030ce60 },
    { "\"Fight\" & \"Down\" Text", 0x030cd80, 0x030ce00 },
    { "\"LOSE\"", 0x030cce0, 0x030cd00 },
    { "\"KO\"", 0x030cd20, 0x030cd40 },
    { "\"PERFECT\"", 0X030CD40, 0X030CD60 },
    { "\"Retired\"", 0x030CC20, 0x030CC40 },
    { "VS screen text", 0x030d400, 0x030d440 },
    { "Win text (character)", 0x030cc40, 0x030cc60 },
    { "Win text (WIN)", 0x030cca0, 0x030ccc0 },
};

const sGame_PaletteDataset JOJOS_A_BONUS_NODE_SUPERBACKGROUND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Super Flash Background (Challenge Screen / Demo) (1/8)", 0x030d500, 0x030d580 },
    { "Super Flash Background (Challenge Screen / Demo) (2/8)", 0x030d580, 0x030d600 },
    { "Super Flash Background (Challenge Screen / Demo) (3/8)", 0x030d600, 0x030d680 },
    { "Super Flash Background (Challenge Screen / Demo) (4/8)", 0x030d680, 0x030d700 },
    { "Super Flash Background (Challenge Screen / Demo) (5/8)", 0x030d700, 0x030d780 },
    { "Super Flash Background (Challenge Screen / Demo) (6/8)", 0x030d780, 0x030d800 },
    { "Super Flash Background (Challenge Screen / Demo) (7/8)", 0x030d800, 0x030d880 },
    { "Super Flash Background (Challenge Screen / Demo) (8/8)", 0x030d880, 0x030d900 },
#else
    { "Super Flash Background (Challenge Screen / Demo)", 0x030d500, 0x030d900 },
#endif
};

const sGame_PaletteDataset JOJOS_BONUS_NODE_FADEBACKGROUND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Fade Background (1/29)", 0x030f080, 0x030f100 },
    { "Fade Background (2/29)", 0x030f100, 0x030f180 },
    { "Fade Background (3/29)", 0x030f180, 0x030f200 },
    { "Fade Background (4/29)", 0x030f200, 0x030f280 },
    { "Fade Background (5/29)", 0x030f280, 0x030f300 },
    { "Fade Background (6/29)", 0x030f300, 0x030f380 },
    { "Fade Background (7/29)", 0x030f380, 0x030f400 },
    { "Fade Background (8/29)", 0x030f400, 0x030f480 },
    { "Fade Background (9/29)", 0x030f480, 0x030f500 },
    { "Fade Background (10/29)", 0x030f500, 0x030f580 },
    { "Fade Background (11/29)", 0x030f580, 0x030f600 },
    { "Fade Background (12/29)", 0x030f600, 0x030f680 },
    { "Fade Background (13/29)", 0x030f680, 0x030f700 },
    { "Fade Background (14/29)", 0x030f700, 0x030f780 },
    { "Fade Background (15/29)", 0x030f780, 0x030f800 },
    { "Fade Background (16/29)", 0x030f800, 0x030f880 },
    { "Fade Background (17/29)", 0x030f880, 0x030f900 },
    { "Fade Background (18/29)", 0x030f900, 0x030f980 },
    { "Fade Background (19/29)", 0x030f980, 0x030fa00 },
    { "Fade Background (20/29)", 0x030fa00, 0x030fa80 },
    { "Fade Background (21/29)", 0x030fa80, 0x030fb00 },
    { "Fade Background (22/29)", 0x030fb00, 0x030fb80 },
    { "Fade Background (23/29)", 0x030fb80, 0x030fc00 },
    { "Fade Background (24/29)", 0x030fc00, 0x030fc80 },
    { "Fade Background (25/29)", 0x030fc80, 0x030fd00 },
    { "Fade Background (26/29)", 0x030fd00, 0x030fd80 },
    { "Fade Background (27/29)", 0x030fd80, 0x030fe00 },
    { "Fade Background (28/29)", 0x030fe00, 0x030fe80 },
    { "Fade Background (29/29)", 0x030fe80, 0x030ff00 },
#else
    { "Fade Background", 0x030f080, 0x030ff00 },
#endif
};

const sGame_PaletteDataset JOJOS_BONUS_NODE_INTRO_MANGA[] =
{
#ifndef USE_LARGE_PALETTES
    { "Intro Manga Panels (1/5)", 0x030b780, 0x030b800 },
    { "Intro Manga Panels (2/5)", 0x030b800, 0x030b880 },
    { "Intro Manga Panels (3/5)", 0x030b880, 0x030b900 },
    { "Intro Manga Panels (4/5)", 0x030b900, 0x030b980 },
    { "Intro Manga Panels (5/5)", 0x030b980, 0x030ba00 },
#else
    { "Intro Manga Panels", 0x030b780, 0x030ba00 },
#endif
};

const sDescTreeNode JOJOS_A_BONUS_COLLECTION[]
{
    { "Intro", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INTRO_PALETTES, ARRAYSIZE(JOJOS_BONUS_INTRO_PALETTES) },
    { "Menu", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_MENU_PALETTES, ARRAYSIZE(JOJOS_BONUS_MENU_PALETTES) },
    { "In Game", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_INGAME_PALETTES, ARRAYSIZE(JOJOS_BONUS_INGAME_PALETTES) },
    { "Fade Background (Challenge Screen / Demo)", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_NODE_FADEBACKGROUND, ARRAYSIZE(JOJOS_BONUS_NODE_FADEBACKGROUND) },
    // Pushing these directly into INTRO
    //{ "Intro Manga Panels", DESC_NODETYPE_TREE, (void*)JOJOS_BONUS_NODE_INTRO_MANGA, ARRAYSIZE(JOJOS_BONUS_NODE_INTRO_MANGA) },
    { "Super Screen Background", DESC_NODETYPE_TREE, (void*)JOJOS_A_BONUS_NODE_SUPERBACKGROUND, ARRAYSIZE(JOJOS_A_BONUS_NODE_SUPERBACKGROUND) },
};

#pragma endregion Bonus

#pragma region Timestop
const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_ALOCKUP[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Lockup TS (1/27)", 0x02d0000, 0x02d0080 },
    { "A Lockup TS (2/27)", 0x02d0080, 0x02d0100 },
    { "A Lockup TS (3/27)", 0x02d0100, 0x02d0180 },
    { "A Lockup TS (4/27)", 0x02d0180, 0x02d0200 },
    { "A Lockup TS (5/27)", 0x02d0200, 0x02d0280 },
    { "A Lockup TS (6/27)", 0x02d0280, 0x02d0300 },
    { "A Lockup TS (7/27)", 0x02d0300, 0x02d0380 },
    { "A Lockup TS (8/27)", 0x02d0380, 0x02d0400 },
    { "A Lockup TS (9/27)", 0x02d0400, 0x02d0480 },
    { "A Lockup TS (10/27)", 0x02d0480, 0x02d0500 },
    { "A Lockup TS (11/27)", 0x02d0500, 0x02d0580 },
    { "A Lockup TS (12/27)", 0x02d0580, 0x02d0600 },
    { "A Lockup TS (13/27)", 0x02d0600, 0x02d0680 },
    { "A Lockup TS (14/27)", 0x02d0680, 0x02d0700 },
    { "A Lockup TS (15/27)", 0x02d0700, 0x02d0780 },
    { "A Lockup TS (16/27)", 0x02d0780, 0x02d0800 },
    { "A Lockup TS (17/27)", 0x02d0800, 0x02d0880 },
    { "A Lockup TS (18/27)", 0x02d0880, 0x02d0900 },
    { "A Lockup TS (19/27)", 0x02d0900, 0x02d0980 },
    { "A Lockup TS (20/27)", 0x02d0980, 0x02d0a00 },
    { "A Lockup TS (21/27)", 0x02d0a00, 0x02d0a80 },
    { "A Lockup TS (22/27)", 0x02d0a80, 0x02d0b00 },
    { "A Lockup TS (23/27)", 0x02d0b00, 0x02d0b80 },
    { "A Lockup TS (24/27)", 0x02d0b80, 0x02d0c00 },
    { "A Lockup TS (25/27)", 0x02d0c00, 0x02d0c80 },
    { "A Lockup TS (26/27)", 0x02d0c80, 0x02d0d00 },
    { "A Lockup TS (27/27)", 0x02d0d00, 0x02d0d80 },
#else
    { "A Lockup TS", 0x02d0000, 0x02d0d80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HEALTH[] =
{
#ifndef USE_LARGE_PALETTES
    { "A Health Room TS (1/22)", 0x02d0e00, 0x02d0e80 },
    { "A Health Room TS (2/22)", 0x02d0e80, 0x02d0f00 },
    { "A Health Room TS (3/22)", 0x02d0f00, 0x02d0f80 },
    { "A Health Room TS (4/22)", 0x02d0f80, 0x02d1000 },
    { "A Health Room TS (5/22)", 0x02d1000, 0x02d1080 },
    { "A Health Room TS (6/22)", 0x02d1080, 0x02d1100 },
    { "A Health Room TS (7/22)", 0x02d1100, 0x02d1180 },
    { "A Health Room TS (8/22)", 0x02d1180, 0x02d1200 },
    { "A Health Room TS (9/22)", 0x02d1200, 0x02d1280 },
    { "A Health Room TS (10/22)", 0x02d1280, 0x02d1300 },
    { "A Health Room TS (11/22)", 0x02d1300, 0x02d1380 },
    { "A Health Room TS (12/22)", 0x02d1380, 0x02d1400 },
    { "A Health Room TS (13/22)", 0x02d1400, 0x02d1480 },
    { "A Health Room TS (14/22)", 0x02d1480, 0x02d1500 },
    { "A Health Room TS (15/22)", 0x02d1500, 0x02d1580 },
    { "A Health Room TS (16/22)", 0x02d1580, 0x02d1600 },
    { "A Health Room TS (17/22)", 0x02d1600, 0x02d1680 },
    { "A Health Room TS (18/22)", 0x02d1680, 0x02d1700 },
    { "A Health Room TS (19/22)", 0x02d1700, 0x02d1780 },
    { "A Health Room TS (20/22)", 0x02d1780, 0x02d1800 },
    { "A Health Room TS (21/22)", 0x02d1800, 0x02d1880 },
    { "A Health Room TS (22/22)", 0x02d1880, 0x02d1900 },
#else
    { "A Health Room TS", 0x02d0e00, 0x02d1900 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_AIRPLANE[] =
{
#ifndef USE_LARGE_PALETTES
    { "In A Airplane TS (1/67)", 0x02d1a00, 0x02d1a80 },
    { "In A Airplane TS (2/67)", 0x02d1a80, 0x02d1b00 },
    { "In A Airplane TS (3/67)", 0x02d1b00, 0x02d1b80 },
    { "In A Airplane TS (4/67)", 0x02d1b80, 0x02d1c00 },
    { "In A Airplane TS (5/67)", 0x02d1c00, 0x02d1c80 },
    { "In A Airplane TS (6/67)", 0x02d1c80, 0x02d1d00 },
    { "In A Airplane TS (7/67)", 0x02d1d00, 0x02d1d80 },
    { "In A Airplane TS (8/67)", 0x02d1d80, 0x02d1e00 },
    { "In A Airplane TS (9/67)", 0x02d1e00, 0x02d1e80 },
    { "In A Airplane TS (10/67)", 0x02d1e80, 0x02d1f00 },
    { "In A Airplane TS (11/67)", 0x02d1f00, 0x02d1f80 },
    { "In A Airplane TS (12/67)", 0x02d1f80, 0x02d2000 },
    { "In A Airplane TS (13/67)", 0x02d2000, 0x02d2080 },
    { "In A Airplane TS (14/67)", 0x02d2080, 0x02d2100 },
    { "In A Airplane TS (15/67)", 0x02d2100, 0x02d2180 },
    { "In A Airplane TS (16/67)", 0x02d2180, 0x02d2200 },
    { "In A Airplane TS (17/67)", 0x02d2200, 0x02d2280 },
    { "In A Airplane TS (18/67)", 0x02d2280, 0x02d2300 },
    { "In A Airplane TS (19/67)", 0x02d2300, 0x02d2380 },
    { "In A Airplane TS (20/67)", 0x02d2380, 0x02d2400 },
    { "In A Airplane TS (21/67)", 0x02d2400, 0x02d2480 },
    { "In A Airplane TS (22/67)", 0x02d2480, 0x02d2500 },
    { "In A Airplane TS (23/67)", 0x02d2500, 0x02d2580 },
    { "In A Airplane TS (24/67)", 0x02d2580, 0x02d2600 },
    { "In A Airplane TS (25/67)", 0x02d2600, 0x02d2680 },
    { "In A Airplane TS (26/67)", 0x02d2680, 0x02d2700 },
    { "In A Airplane TS (27/67)", 0x02d2700, 0x02d2780 },
    { "In A Airplane TS (28/67)", 0x02d2780, 0x02d2800 },
    { "In A Airplane TS (29/67)", 0x02d2800, 0x02d2880 },
    { "In A Airplane TS (30/67)", 0x02d2880, 0x02d2900 },
    { "In A Airplane TS (31/67)", 0x02d2900, 0x02d2980 },
    { "In A Airplane TS (32/67)", 0x02d2980, 0x02d2a00 },
    { "In A Airplane TS (33/67)", 0x02d2a00, 0x02d2a80 },
    { "In A Airplane TS (34/67)", 0x02d2a80, 0x02d2b00 },
    { "In A Airplane TS (35/67)", 0x02d2b00, 0x02d2b80 },
    { "In A Airplane TS (36/67)", 0x02d2b80, 0x02d2c00 },
    { "In A Airplane TS (37/67)", 0x02d2c00, 0x02d2c80 },
    { "In A Airplane TS (38/67)", 0x02d2c80, 0x02d2d00 },
    { "In A Airplane TS (39/67)", 0x02d2d00, 0x02d2d80 },
    { "In A Airplane TS (40/67)", 0x02d2d80, 0x02d2e00 },
    { "In A Airplane TS (41/67)", 0x02d2e00, 0x02d2e80 },
    { "In A Airplane TS (42/67)", 0x02d2e80, 0x02d2f00 },
    { "In A Airplane TS (43/67)", 0x02d2f00, 0x02d2f80 },
    { "In A Airplane TS (44/67)", 0x02d2f80, 0x02d3000 },
    { "In A Airplane TS (45/67)", 0x02d3000, 0x02d3080 },
    { "In A Airplane TS (46/67)", 0x02d3080, 0x02d3100 },
    { "In A Airplane TS (47/67)", 0x02d3100, 0x02d3180 },
    { "In A Airplane TS (48/67)", 0x02d3180, 0x02d3200 },
    { "In A Airplane TS (49/67)", 0x02d3200, 0x02d3280 },
    { "In A Airplane TS (50/67)", 0x02d3280, 0x02d3300 },
    { "In A Airplane TS (51/67)", 0x02d3300, 0x02d3380 },
    { "In A Airplane TS (52/67)", 0x02d3380, 0x02d3400 },
    { "In A Airplane TS (53/67)", 0x02d3400, 0x02d3480 },
    { "In A Airplane TS (54/67)", 0x02d3480, 0x02d3500 },
    { "In A Airplane TS (55/67)", 0x02d3500, 0x02d3580 },
    { "In A Airplane TS (56/67)", 0x02d3580, 0x02d3600 },
    { "In A Airplane TS (57/67)", 0x02d3600, 0x02d3680 },
    { "In A Airplane TS (58/67)", 0x02d3680, 0x02d3700 },
    { "In A Airplane TS (59/67)", 0x02d3700, 0x02d3780 },
    { "In A Airplane TS (60/67)", 0x02d3780, 0x02d3800 },
    { "In A Airplane TS (61/67)", 0x02d3800, 0x02d3880 },
    { "In A Airplane TS (62/67)", 0x02d3880, 0x02d3900 },
    { "In A Airplane TS (63/67)", 0x02d3900, 0x02d3980 },
    { "In A Airplane TS (64/67)", 0x02d3980, 0x02d3a00 },
    { "In A Airplane TS (65/67)", 0x02d3a00, 0x02d3a80 },
    { "In A Airplane TS (66/67)", 0x02d3a80, 0x02d3b00 },
    { "In A Airplane TS (67/67)", 0x02d3b00, 0x02d3b80 },
#else
    { "In A Airplane TS", 0x02d1a00, 0x02d3b80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_TIGERBAUM[] =
{
#ifndef USE_LARGE_PALETTES
    { "Tigerbaum Garden TS (1/44)", 0x02d3c00, 0x02d3c80 },
    { "Tigerbaum Garden TS (2/44)", 0x02d3c80, 0x02d3d00 },
    { "Tigerbaum Garden TS (3/44)", 0x02d3d00, 0x02d3d80 },
    { "Tigerbaum Garden TS (4/44)", 0x02d3d80, 0x02d3e00 },
    { "Tigerbaum Garden TS (5/44)", 0x02d3e00, 0x02d3e80 },
    { "Tigerbaum Garden TS (6/44)", 0x02d3e80, 0x02d3f00 },
    { "Tigerbaum Garden TS (7/44)", 0x02d3f00, 0x02d3f80 },
    { "Tigerbaum Garden TS (8/44)", 0x02d3f80, 0x02d4000 },
    { "Tigerbaum Garden TS (9/44)", 0x02d4000, 0x02d4080 },
    { "Tigerbaum Garden TS (10/44)", 0x02d4080, 0x02d4100 },
    { "Tigerbaum Garden TS (11/44)", 0x02d4100, 0x02d4180 },
    { "Tigerbaum Garden TS (12/44)", 0x02d4180, 0x02d4200 },
    { "Tigerbaum Garden TS (13/44)", 0x02d4200, 0x02d4280 },
    { "Tigerbaum Garden TS (14/44)", 0x02d4280, 0x02d4300 },
    { "Tigerbaum Garden TS (15/44)", 0x02d4300, 0x02d4380 },
    { "Tigerbaum Garden TS (16/44)", 0x02d4380, 0x02d4400 },
    { "Tigerbaum Garden TS (17/44)", 0x02d4400, 0x02d4480 },
    { "Tigerbaum Garden TS (18/44)", 0x02d4480, 0x02d4500 },
    { "Tigerbaum Garden TS (19/44)", 0x02d4500, 0x02d4580 },
    { "Tigerbaum Garden TS (20/44)", 0x02d4580, 0x02d4600 },
    { "Tigerbaum Garden TS (21/44)", 0x02d4600, 0x02d4680 },
    { "Tigerbaum Garden TS (22/44)", 0x02d4680, 0x02d4700 },
    { "Tigerbaum Garden TS (23/44)", 0x02d4700, 0x02d4780 },
    { "Tigerbaum Garden TS (24/44)", 0x02d4780, 0x02d4800 },
    { "Tigerbaum Garden TS (25/44)", 0x02d4800, 0x02d4880 },
    { "Tigerbaum Garden TS (26/44)", 0x02d4880, 0x02d4900 },
    { "Tigerbaum Garden TS (27/44)", 0x02d4900, 0x02d4980 },
    { "Tigerbaum Garden TS (28/44)", 0x02d4980, 0x02d4a00 },
    { "Tigerbaum Garden TS (29/44)", 0x02d4a00, 0x02d4a80 },
    { "Tigerbaum Garden TS (30/44)", 0x02d4a80, 0x02d4b00 },
    { "Tigerbaum Garden TS (31/44)", 0x02d4b00, 0x02d4b80 },
    { "Tigerbaum Garden TS (32/44)", 0x02d4b80, 0x02d4c00 },
    { "Tigerbaum Garden TS (33/44)", 0x02d4c00, 0x02d4c80 },
    { "Tigerbaum Garden TS (34/44)", 0x02d4c80, 0x02d4d00 },
    { "Tigerbaum Garden TS (35/44)", 0x02d4d00, 0x02d4d80 },
    { "Tigerbaum Garden TS (36/44)", 0x02d4d80, 0x02d4e00 },
    { "Tigerbaum Garden TS (37/44)", 0x02d4e00, 0x02d4e80 },
    { "Tigerbaum Garden TS (38/44)", 0x02d4e80, 0x02d4f00 },
    { "Tigerbaum Garden TS (39/44)", 0x02d4f00, 0x02d4f80 },
    { "Tigerbaum Garden TS (40/44)", 0x02d4f80, 0x02d5000 },
    { "Tigerbaum Garden TS (41/44)", 0x02d5000, 0x02d5080 },
    { "Tigerbaum Garden TS (42/44)", 0x02d5080, 0x02d5100 },
    { "Tigerbaum Garden TS (43/44)", 0x02d5100, 0x02d5180 },
    { "Tigerbaum Garden TS (44/44)", 0x02d5180, 0x02d5200 },
#else
    { "Tigerbaum Garden TS", 0x02d3c00, 0x02d5200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELD[] =
{
#ifndef USE_LARGE_PALETTES
    { "Hotel (Devil) / New 2 TS (1/26)", 0x02d5300, 0x02d5380 },
    { "Hotel (Devil) / New 2 TS (2/26)", 0x02d5380, 0x02d5400 },
    { "Hotel (Devil) / New 2 TS (3/26)", 0x02d5400, 0x02d5480 },
    { "Hotel (Devil) / New 2 TS (4/26)", 0x02d5480, 0x02d5500 },
    { "Hotel (Devil) / New 2 TS (5/26)", 0x02d5500, 0x02d5580 },
    { "Hotel (Devil) / New 2 TS (6/26)", 0x02d5580, 0x02d5600 },
    { "Hotel (Devil) / New 2 TS (7/26)", 0x02d5600, 0x02d5680 },
    { "Hotel (Devil) / New 2 TS (8/26)", 0x02d5680, 0x02d5700 },
    { "Hotel (Devil) / New 2 TS (9/26)", 0x02d5700, 0x02d5780 },
    { "Hotel (Devil) / New 2 TS (10/26)", 0x02d5780, 0x02d5800 },
    { "Hotel (Devil) / New 2 TS (11/26)", 0x02d5800, 0x02d5880 },
    { "Hotel (Devil) / New 2 TS (12/26)", 0x02d5880, 0x02d5900 },
    { "Hotel (Devil) / New 2 TS (13/26)", 0x02d5900, 0x02d5980 },
    { "Hotel (Devil) / New 2 TS (14/26)", 0x02d5980, 0x02d5a00 },
    { "Hotel (Devil) / New 2 TS (15/26)", 0x02d5a00, 0x02d5a80 },
    { "Hotel (Devil) / New 2 TS (16/26)", 0x02d5a80, 0x02d5b00 },
    { "Hotel (Devil) / New 2 TS (17/26)", 0x02d5b00, 0x02d5b80 },
    { "Hotel (Devil) / New 2 TS (18/26)", 0x02d5b80, 0x02d5c00 },
    { "Hotel (Devil) / New 2 TS (19/26)", 0x02d5c00, 0x02d5c80 },
    { "Hotel (Devil) / New 2 TS (20/26)", 0x02d5c80, 0x02d5d00 },
    { "Hotel (Devil) / New 2 TS (21/26)", 0x02d5d00, 0x02d5d80 },
    { "Hotel (Devil) / New 2 TS (22/26)", 0x02d5d80, 0x02d5e00 },
    { "Hotel (Devil) / New 2 TS (23/26)", 0x02d5e00, 0x02d5e80 },
    { "Hotel (Devil) / New 2 TS (24/26)", 0x02d5e80, 0x02d5f00 },
    { "Hotel (Devil) / New 2 TS (25/26)", 0x02d5f00, 0x02d5f80 },
    { "Hotel (Devil) / New 2 TS (26/26)", 0x02d5f80, 0x02d6000 },
#else
    { "Hotel (Devil) / New 2 TS", 0x02d5300, 0x02d6000 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_REMAINS[] =
{
#ifndef USE_LARGE_PALETTES
    { "Remains / New 1 TS (1/36)", 0x02d6100, 0x02d6180 },
    { "Remains / New 1 TS (2/36)", 0x02d6180, 0x02d6200 },
    { "Remains / New 1 TS (3/36)", 0x02d6200, 0x02d6280 },
    { "Remains / New 1 TS (4/36)", 0x02d6280, 0x02d6300 },
    { "Remains / New 1 TS (5/36)", 0x02d6300, 0x02d6380 },
    { "Remains / New 1 TS (6/36)", 0x02d6380, 0x02d6400 },
    { "Remains / New 1 TS (7/36)", 0x02d6400, 0x02d6480 },
    { "Remains / New 1 TS (8/36)", 0x02d6480, 0x02d6500 },
    { "Remains / New 1 TS (9/36)", 0x02d6500, 0x02d6580 },
    { "Remains / New 1 TS (10/36)", 0x02d6580, 0x02d6600 },
    { "Remains / New 1 TS (11/36)", 0x02d6600, 0x02d6680 },
    { "Remains / New 1 TS (12/36)", 0x02d6680, 0x02d6700 },
    { "Remains / New 1 TS (13/36)", 0x02d6700, 0x02d6780 },
    { "Remains / New 1 TS (14/36)", 0x02d6780, 0x02d6800 },
    { "Remains / New 1 TS (15/36)", 0x02d6800, 0x02d6880 },
    { "Remains / New 1 TS (16/36)", 0x02d6880, 0x02d6900 },
    { "Remains / New 1 TS (17/36)", 0x02d6900, 0x02d6980 },
    { "Remains / New 1 TS (18/36)", 0x02d6980, 0x02d6a00 },
    { "Remains / New 1 TS (19/36)", 0x02d6a00, 0x02d6a80 },
    { "Remains / New 1 TS (20/36)", 0x02d6a80, 0x02d6b00 },
    { "Remains / New 1 TS (21/36)", 0x02d6b00, 0x02d6b80 },
    { "Remains / New 1 TS (22/36)", 0x02d6b80, 0x02d6c00 },
    { "Remains / New 1 TS (23/36)", 0x02d6c00, 0x02d6c80 },
    { "Remains / New 1 TS (24/36)", 0x02d6c80, 0x02d6d00 },
    { "Remains / New 1 TS (25/36)", 0x02d6d00, 0x02d6d80 },
    { "Remains / New 1 TS (26/36)", 0x02d6d80, 0x02d6e00 },
    { "Remains / New 1 TS (27/36)", 0x02d6e00, 0x02d6e80 },
    { "Remains / New 1 TS (28/36)", 0x02d6e80, 0x02d6f00 },
    { "Remains / New 1 TS (29/36)", 0x02d6f00, 0x02d6f80 },
    { "Remains / New 1 TS (30/36)", 0x02d6f80, 0x02d7000 },
    { "Remains / New 1 TS (31/36)", 0x02d7000, 0x02d7080 },
    { "Remains / New 1 TS (32/36)", 0x02d7080, 0x02d7100 },
    { "Remains / New 1 TS (33/36)", 0x02d7100, 0x02d7180 },
    { "Remains / New 1 TS (34/36)", 0x02d7180, 0x02d7200 },
    { "Remains / New 1 TS (35/36)", 0x02d7200, 0x02d7280 },
    { "Remains / New 1 TS (36/36)", 0x02d7280, 0x02d7300 },
#else
    { "Remains / New 1 TS", 0x02d6100, 0x02d7300 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_HOTELJ[] =
{
#ifndef USE_LARGE_PALETTES
    { "Hotel (Justice) TS (1/29)", 0x02d7400, 0x02d7480 },
    { "Hotel (Justice) TS (2/29)", 0x02d7480, 0x02d7500 },
    { "Hotel (Justice) TS (3/29)", 0x02d7500, 0x02d7580 },
    { "Hotel (Justice) TS (4/29)", 0x02d7580, 0x02d7600 },
    { "Hotel (Justice) TS (5/29)", 0x02d7600, 0x02d7680 },
    { "Hotel (Justice) TS (6/29)", 0x02d7680, 0x02d7700 },
    { "Hotel (Justice) TS (7/29)", 0x02d7700, 0x02d7780 },
    { "Hotel (Justice) TS (8/29)", 0x02d7780, 0x02d7800 },
    { "Hotel (Justice) TS (9/29)", 0x02d7800, 0x02d7880 },
    { "Hotel (Justice) TS (10/29)", 0x02d7880, 0x02d7900 },
    { "Hotel (Justice) TS (11/29)", 0x02d7900, 0x02d7980 },
    { "Hotel (Justice) TS (12/29)", 0x02d7980, 0x02d7a00 },
    { "Hotel (Justice) TS (13/29)", 0x02d7a00, 0x02d7a80 },
    { "Hotel (Justice) TS (14/29)", 0x02d7a80, 0x02d7b00 },
    { "Hotel (Justice) TS (15/29)", 0x02d7b00, 0x02d7b80 },
    { "Hotel (Justice) TS (16/29)", 0x02d7b80, 0x02d7c00 },
    { "Hotel (Justice) TS (17/29)", 0x02d7c00, 0x02d7c80 },
    { "Hotel (Justice) TS (18/29)", 0x02d7c80, 0x02d7d00 },
    { "Hotel (Justice) TS (19/29)", 0x02d7d00, 0x02d7d80 },
    { "Hotel (Justice) TS (20/29)", 0x02d7d80, 0x02d7e00 },
    { "Hotel (Justice) TS (21/29)", 0x02d7e00, 0x02d7e80 },
    { "Hotel (Justice) TS (22/29)", 0x02d7e80, 0x02d7f00 },
    { "Hotel (Justice) TS (23/29)", 0x02d7f00, 0x02d7f80 },
    { "Hotel (Justice) TS (24/29)", 0x02d7f80, 0x02d8000 },
    { "Hotel (Justice) TS (25/29)", 0x02d8000, 0x02d8080 },
    { "Hotel (Justice) TS (26/29)", 0x02d8080, 0x02d8100 },
    { "Hotel (Justice) TS (27/29)", 0x02d8100, 0x02d8180 },
    { "Hotel (Justice) TS (28/29)", 0x02d8180, 0x02d8200 },
    { "Hotel (Justice) TS (29/29)", 0x02d8200, 0x02d8280 },
#else
    { "Hotel (Justice) TS", 0x02d7400, 0x02d8280 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SISLAND[] =
{
#ifndef USE_LARGE_PALETTES
    { "Small Island / New 3 TS (1/24)", 0x02d8300, 0x02d8380 },
    { "Small Island / New 3 TS (2/24)", 0x02d8380, 0x02d8400 },
    { "Small Island / New 3 TS (3/24)", 0x02d8400, 0x02d8480 },
    { "Small Island / New 3 TS (4/24)", 0x02d8480, 0x02d8500 },
    { "Small Island / New 3 TS (5/24)", 0x02d8500, 0x02d8580 },
    { "Small Island / New 3 TS (6/24)", 0x02d8580, 0x02d8600 },
    { "Small Island / New 3 TS (7/24)", 0x02d8600, 0x02d8680 },
    { "Small Island / New 3 TS (8/24)", 0x02d8680, 0x02d8700 },
    { "Small Island / New 3 TS (9/24)", 0x02d8700, 0x02d8780 },
    { "Small Island / New 3 TS (10/24)", 0x02d8780, 0x02d8800 },
    { "Small Island / New 3 TS (11/24)", 0x02d8800, 0x02d8880 },
    { "Small Island / New 3 TS (12/24)", 0x02d8880, 0x02d8900 },
    { "Small Island / New 3 TS (13/24)", 0x02d8900, 0x02d8980 },
    { "Small Island / New 3 TS (14/24)", 0x02d8980, 0x02d8a00 },
    { "Small Island / New 3 TS (15/24)", 0x02d8a00, 0x02d8a80 },
    { "Small Island / New 3 TS (16/24)", 0x02d8a80, 0x02d8b00 },
    { "Small Island / New 3 TS (17/24)", 0x02d8b00, 0x02d8b80 },
    { "Small Island / New 3 TS (18/24)", 0x02d8b80, 0x02d8c00 },
    { "Small Island / New 3 TS (19/24)", 0x02d8c00, 0x02d8c80 },
    { "Small Island / New 3 TS (20/24)", 0x02d8c80, 0x02d8d00 },
    { "Small Island / New 3 TS (21/24)", 0x02d8d00, 0x02d8d80 },
    { "Small Island / New 3 TS (22/24)", 0x02d8d80, 0x02d8e00 },
    { "Small Island / New 3 TS (23/24)", 0x02d8e00, 0x02d8e80 },
    { "Small Island / New 3 TS (24/24)", 0x02d8e80, 0x02d8f00 },
#else
    { "Small Island / New 3 TS", 0x02d8300, 0x02d8f00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNOON[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Noon TS (1/28)", 0x02d9000, 0x02d9080 },
    { "Desert Noon TS (2/28)", 0x02d9080, 0x02d9100 },
    { "Desert Noon TS (3/28)", 0x02d9100, 0x02d9180 },
    { "Desert Noon TS (4/28)", 0x02d9180, 0x02d9200 },
    { "Desert Noon TS (5/28)", 0x02d9200, 0x02d9280 },
    { "Desert Noon TS (6/28)", 0x02d9280, 0x02d9300 },
    { "Desert Noon TS (7/28)", 0x02d9300, 0x02d9380 },
    { "Desert Noon TS (8/28)", 0x02d9380, 0x02d9400 },
    { "Desert Noon TS (9/28)", 0x02d9400, 0x02d9480 },
    { "Desert Noon TS (10/28)", 0x02d9480, 0x02d9500 },
    { "Desert Noon TS (11/28)", 0x02d9500, 0x02d9580 },
    { "Desert Noon TS (12/28)", 0x02d9580, 0x02d9600 },
    { "Desert Noon TS (13/28)", 0x02d9600, 0x02d9680 },
    { "Desert Noon TS (14/28)", 0x02d9680, 0x02d9700 },
    { "Desert Noon TS (15/28)", 0x02d9700, 0x02d9780 },
    { "Desert Noon TS (16/28)", 0x02d9780, 0x02d9800 },
    { "Desert Noon TS (17/28)", 0x02d9800, 0x02d9880 },
    { "Desert Noon TS (18/28)", 0x02d9880, 0x02d9900 },
    { "Desert Noon TS (19/28)", 0x02d9900, 0x02d9980 },
    { "Desert Noon TS (20/28)", 0x02d9980, 0x02d9a00 },
    { "Desert Noon TS (21/28)", 0x02d9a00, 0x02d9a80 },
    { "Desert Noon TS (22/28)", 0x02d9a80, 0x02d9b00 },
    { "Desert Noon TS (23/28)", 0x02d9b00, 0x02d9b80 },
    { "Desert Noon TS (24/28)", 0x02d9b80, 0x02d9c00 },
    { "Desert Noon TS (25/28)", 0x02d9c00, 0x02d9c80 },
    { "Desert Noon TS (26/28)", 0x02d9c80, 0x02d9d00 },
    { "Desert Noon TS (27/28)", 0x02d9d00, 0x02d9d80 },
    { "Desert Noon TS (28/28)", 0x02d9d80, 0x02d9e00 },
#else
    { "Desert Noon TS", 0x02d9000, 0x02d9e00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DMORN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Morning / Twilight (1/29)", 0x02d9f00, 0x02d9f80 },
    { "Desert Morning / Twilight (2/29)", 0x02d9f80, 0x02da000 },
    { "Desert Morning / Twilight (3/29)", 0x02da000, 0x02da080 },
    { "Desert Morning / Twilight (4/29)", 0x02da080, 0x02da100 },
    { "Desert Morning / Twilight (5/29)", 0x02da100, 0x02da180 },
    { "Desert Morning / Twilight (6/29)", 0x02da180, 0x02da200 },
    { "Desert Morning / Twilight (7/29)", 0x02da200, 0x02da280 },
    { "Desert Morning / Twilight (8/29)", 0x02da280, 0x02da300 },
    { "Desert Morning / Twilight (9/29)", 0x02da300, 0x02da380 },
    { "Desert Morning / Twilight (10/29)", 0x02da380, 0x02da400 },
    { "Desert Morning / Twilight (11/29)", 0x02da400, 0x02da480 },
    { "Desert Morning / Twilight (12/29)", 0x02da480, 0x02da500 },
    { "Desert Morning / Twilight (13/29)", 0x02da500, 0x02da580 },
    { "Desert Morning / Twilight (14/29)", 0x02da580, 0x02da600 },
    { "Desert Morning / Twilight (15/29)", 0x02da600, 0x02da680 },
    { "Desert Morning / Twilight (16/29)", 0x02da680, 0x02da700 },
    { "Desert Morning / Twilight (17/29)", 0x02da700, 0x02da780 },
    { "Desert Morning / Twilight (18/29)", 0x02da780, 0x02da800 },
    { "Desert Morning / Twilight (19/29)", 0x02da800, 0x02da880 },
    { "Desert Morning / Twilight (20/29)", 0x02da880, 0x02da900 },
    { "Desert Morning / Twilight (21/29)", 0x02da900, 0x02da980 },
    { "Desert Morning / Twilight (22/29)", 0x02da980, 0x02daa00 },
    { "Desert Morning / Twilight (23/29)", 0x02daa00, 0x02daa80 },
    { "Desert Morning / Twilight (24/29)", 0x02daa80, 0x02dab00 },
    { "Desert Morning / Twilight (25/29)", 0x02dab00, 0x02dab80 },
    { "Desert Morning / Twilight (26/29)", 0x02dab80, 0x02dac00 },
    { "Desert Morning / Twilight (27/29)", 0x02dac00, 0x02dac80 },
    { "Desert Morning / Twilight (28/29)", 0x02dac80, 0x02dad00 },
    { "Desert Morning / Twilight (29/29)", 0x02dad00, 0x02dad80 },
#else
    { "Desert Morning / Twilight", 0x02d9f00, 0x02dad80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_DNIGHT[] =
{
#ifndef USE_LARGE_PALETTES
    { "Desert Night TS (1/29)", 0x02dae00, 0x02dae80 },
    { "Desert Night TS (2/29)", 0x02dae80, 0x02daf00 },
    { "Desert Night TS (3/29)", 0x02daf00, 0x02daf80 },
    { "Desert Night TS (4/29)", 0x02daf80, 0x02db000 },
    { "Desert Night TS (5/29)", 0x02db000, 0x02db080 },
    { "Desert Night TS (6/29)", 0x02db080, 0x02db100 },
    { "Desert Night TS (7/29)", 0x02db100, 0x02db180 },
    { "Desert Night TS (8/29)", 0x02db180, 0x02db200 },
    { "Desert Night TS (9/29)", 0x02db200, 0x02db280 },
    { "Desert Night TS (10/29)", 0x02db280, 0x02db300 },
    { "Desert Night TS (11/29)", 0x02db300, 0x02db380 },
    { "Desert Night TS (12/29)", 0x02db380, 0x02db400 },
    { "Desert Night TS (13/29)", 0x02db400, 0x02db480 },
    { "Desert Night TS (14/29)", 0x02db480, 0x02db500 },
    { "Desert Night TS (15/29)", 0x02db500, 0x02db580 },
    { "Desert Night TS (16/29)", 0x02db580, 0x02db600 },
    { "Desert Night TS (17/29)", 0x02db600, 0x02db680 },
    { "Desert Night TS (18/29)", 0x02db680, 0x02db700 },
    { "Desert Night TS (19/29)", 0x02db700, 0x02db780 },
    { "Desert Night TS (20/29)", 0x02db780, 0x02db800 },
    { "Desert Night TS (21/29)", 0x02db800, 0x02db880 },
    { "Desert Night TS (22/29)", 0x02db880, 0x02db900 },
    { "Desert Night TS (23/29)", 0x02db900, 0x02db980 },
    { "Desert Night TS (24/29)", 0x02db980, 0x02dba00 },
    { "Desert Night TS (25/29)", 0x02dba00, 0x02dba80 },
    { "Desert Night TS (26/29)", 0x02dba80, 0x02dbb00 },
    { "Desert Night TS (27/29)", 0x02dbb00, 0x02dbb80 },
    { "Desert Night TS (28/29)", 0x02dbb80, 0x02dbc00 },
    { "Desert Night TS (29/29)", 0x02dbc00, 0x02dbc80 },
#else
    { "Desert Night TS", 0x02dae00, 0x02dbc80 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_RUINS[] =
{
#ifndef USE_LARGE_PALETTES
    { "Ruins / New 4 TS (1/20)", 0x02dbd00, 0x02dbd80 },
    { "Ruins / New 4 TS (2/20)", 0x02dbd80, 0x02dbe00 },
    { "Ruins / New 4 TS (3/20)", 0x02dbe00, 0x02dbe80 },
    { "Ruins / New 4 TS (4/20)", 0x02dbe80, 0x02dbf00 },
    { "Ruins / New 4 TS (5/20)", 0x02dbf00, 0x02dbf80 },
    { "Ruins / New 4 TS (6/20)", 0x02dbf80, 0x02dc000 },
    { "Ruins / New 4 TS (7/20)", 0x02dc000, 0x02dc080 },
    { "Ruins / New 4 TS (8/20)", 0x02dc080, 0x02dc100 },
    { "Ruins / New 4 TS (9/20)", 0x02dc100, 0x02dc180 },
    { "Ruins / New 4 TS (10/20)", 0x02dc180, 0x02dc200 },
    { "Ruins / New 4 TS (11/20)", 0x02dc200, 0x02dc280 },
    { "Ruins / New 4 TS (12/20)", 0x02dc280, 0x02dc300 },
    { "Ruins / New 4 TS (13/20)", 0x02dc300, 0x02dc380 },
    { "Ruins / New 4 TS (14/20)", 0x02dc380, 0x02dc400 },
    { "Ruins / New 4 TS (15/20)", 0x02dc400, 0x02dc480 },
    { "Ruins / New 4 TS (16/20)", 0x02dc480, 0x02dc500 },
    { "Ruins / New 4 TS (17/20)", 0x02dc500, 0x02dc580 },
    { "Ruins / New 4 TS (18/20)", 0x02dc580, 0x02dc600 },
    { "Ruins / New 4 TS (19/20)", 0x02dc600, 0x02dc680 },
    { "Ruins / New 4 TS (20/20)", 0x02dc680, 0x02dc700 },
#else
    { "Ruins / New 4 TS", 0x02dbd00, 0x02dc700 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWN[] =
{
#ifndef USE_LARGE_PALETTES
    { "Country Town Noon / Twilight / Night TS (1/83)", 0x02dc800, 0x02dc880 },
    { "Country Town Noon / Twilight / Night TS (2/83)", 0x02dc880, 0x02dc900 },
    { "Country Town Noon / Twilight / Night TS (3/83)", 0x02dc900, 0x02dc980 },
    { "Country Town Noon / Twilight / Night TS (4/83)", 0x02dc980, 0x02dca00 },
    { "Country Town Noon / Twilight / Night TS (5/83)", 0x02dca00, 0x02dca80 },
    { "Country Town Noon / Twilight / Night TS (6/83)", 0x02dca80, 0x02dcb00 },
    { "Country Town Noon / Twilight / Night TS (7/83)", 0x02dcb00, 0x02dcb80 },
    { "Country Town Noon / Twilight / Night TS (8/83)", 0x02dcb80, 0x02dcc00 },
    { "Country Town Noon / Twilight / Night TS (9/83)", 0x02dcc00, 0x02dcc80 },
    { "Country Town Noon / Twilight / Night TS (10/83)", 0x02dcc80, 0x02dcd00 },
    { "Country Town Noon / Twilight / Night TS (11/83)", 0x02dcd00, 0x02dcd80 },
    { "Country Town Noon / Twilight / Night TS (12/83)", 0x02dcd80, 0x02dce00 },
    { "Country Town Noon / Twilight / Night TS (13/83)", 0x02dce00, 0x02dce80 },
    { "Country Town Noon / Twilight / Night TS (14/83)", 0x02dce80, 0x02dcf00 },
    { "Country Town Noon / Twilight / Night TS (15/83)", 0x02dcf00, 0x02dcf80 },
    { "Country Town Noon / Twilight / Night TS (16/83)", 0x02dcf80, 0x02dd000 },
    { "Country Town Noon / Twilight / Night TS (17/83)", 0x02dd000, 0x02dd080 },
    { "Country Town Noon / Twilight / Night TS (18/83)", 0x02dd080, 0x02dd100 },
    { "Country Town Noon / Twilight / Night TS (19/83)", 0x02dd100, 0x02dd180 },
    { "Country Town Noon / Twilight / Night TS (20/83)", 0x02dd180, 0x02dd200 },
    { "Country Town Noon / Twilight / Night TS (21/83)", 0x02dd200, 0x02dd280 },
    { "Country Town Noon / Twilight / Night TS (22/83)", 0x02dd280, 0x02dd300 },
    { "Country Town Noon / Twilight / Night TS (23/83)", 0x02dd300, 0x02dd380 },
    { "Country Town Noon / Twilight / Night TS (24/83)", 0x02dd380, 0x02dd400 },
    { "Country Town Noon / Twilight / Night TS (25/83)", 0x02dd400, 0x02dd480 },
    { "Country Town Noon / Twilight / Night TS (26/83)", 0x02dd480, 0x02dd500 },
    { "Country Town Noon / Twilight / Night TS (27/83)", 0x02dd500, 0x02dd580 },
    { "Country Town Noon / Twilight / Night TS (28/83)", 0x02dd580, 0x02dd600 },
    { "Country Town Noon / Twilight / Night TS (29/83)", 0x02dd600, 0x02dd680 },
    { "Country Town Noon / Twilight / Night TS (30/83)", 0x02dd680, 0x02dd700 },
    { "Country Town Noon / Twilight / Night TS (31/83)", 0x02dd700, 0x02dd780 },
    { "Country Town Noon / Twilight / Night TS (32/83)", 0x02dd780, 0x02dd800 },
    { "Country Town Noon / Twilight / Night TS (33/83)", 0x02dd800, 0x02dd880 },
    { "Country Town Noon / Twilight / Night TS (34/83)", 0x02dd880, 0x02dd900 },
    { "Country Town Noon / Twilight / Night TS (35/83)", 0x02dd900, 0x02dd980 },
    { "Country Town Noon / Twilight / Night TS (36/83)", 0x02dd980, 0x02dda00 },
    { "Country Town Noon / Twilight / Night TS (37/83)", 0x02dda00, 0x02dda80 },
    { "Country Town Noon / Twilight / Night TS (38/83)", 0x02dda80, 0x02ddb00 },
    { "Country Town Noon / Twilight / Night TS (39/83)", 0x02ddb00, 0x02ddb80 },
    { "Country Town Noon / Twilight / Night TS (40/83)", 0x02ddb80, 0x02ddc00 },
    { "Country Town Noon / Twilight / Night TS (41/83)", 0x02ddc00, 0x02ddc80 },
    { "Country Town Noon / Twilight / Night TS (42/83)", 0x02ddc80, 0x02ddd00 },
    { "Country Town Noon / Twilight / Night TS (43/83)", 0x02ddd00, 0x02ddd80 },
    { "Country Town Noon / Twilight / Night TS (44/83)", 0x02ddd80, 0x02dde00 },
    { "Country Town Noon / Twilight / Night TS (45/83)", 0x02dde00, 0x02dde80 },
    { "Country Town Noon / Twilight / Night TS (46/83)", 0x02dde80, 0x02ddf00 },
    { "Country Town Noon / Twilight / Night TS (47/83)", 0x02ddf00, 0x02ddf80 },
    { "Country Town Noon / Twilight / Night TS (48/83)", 0x02ddf80, 0x02de000 },
    { "Country Town Noon / Twilight / Night TS (49/83)", 0x02de000, 0x02de080 },
    { "Country Town Noon / Twilight / Night TS (50/83)", 0x02de080, 0x02de100 },
    { "Country Town Noon / Twilight / Night TS (51/83)", 0x02de100, 0x02de180 },
    { "Country Town Noon / Twilight / Night TS (52/83)", 0x02de180, 0x02de200 },
    { "Country Town Noon / Twilight / Night TS (53/83)", 0x02de200, 0x02de280 },
    { "Country Town Noon / Twilight / Night TS (54/83)", 0x02de280, 0x02de300 },
    { "Country Town Noon / Twilight / Night TS (55/83)", 0x02de300, 0x02de380 },
    { "Country Town Noon / Twilight / Night TS (56/83)", 0x02de380, 0x02de400 },
    { "Country Town Noon / Twilight / Night TS (57/83)", 0x02de400, 0x02de480 },
    { "Country Town Noon / Twilight / Night TS (58/83)", 0x02de480, 0x02de500 },
    { "Country Town Noon / Twilight / Night TS (59/83)", 0x02de500, 0x02de580 },
    { "Country Town Noon / Twilight / Night TS (60/83)", 0x02de580, 0x02de600 },
    { "Country Town Noon / Twilight / Night TS (61/83)", 0x02de600, 0x02de680 },
    { "Country Town Noon / Twilight / Night TS (62/83)", 0x02de680, 0x02de700 },
    { "Country Town Noon / Twilight / Night TS (63/83)", 0x02de700, 0x02de780 },
    { "Country Town Noon / Twilight / Night TS (64/83)", 0x02de780, 0x02de800 },
    { "Country Town Noon / Twilight / Night TS (65/83)", 0x02de800, 0x02de880 },
    { "Country Town Noon / Twilight / Night TS (66/83)", 0x02de880, 0x02de900 },
    { "Country Town Noon / Twilight / Night TS (67/83)", 0x02de900, 0x02de980 },
    { "Country Town Noon / Twilight / Night TS (68/83)", 0x02de980, 0x02dea00 },
    { "Country Town Noon / Twilight / Night TS (69/83)", 0x02dea00, 0x02dea80 },
    { "Country Town Noon / Twilight / Night TS (70/83)", 0x02dea80, 0x02deb00 },
    { "Country Town Noon / Twilight / Night TS (71/83)", 0x02deb00, 0x02deb80 },
    { "Country Town Noon / Twilight / Night TS (72/83)", 0x02deb80, 0x02dec00 },
    { "Country Town Noon / Twilight / Night TS (73/83)", 0x02dec00, 0x02dec80 },
    { "Country Town Noon / Twilight / Night TS (74/83)", 0x02dec80, 0x02ded00 },
    { "Country Town Noon / Twilight / Night TS (75/83)", 0x02ded00, 0x02ded80 },
    { "Country Town Noon / Twilight / Night TS (76/83)", 0x02ded80, 0x02dee00 },
    { "Country Town Noon / Twilight / Night TS (77/83)", 0x02dee00, 0x02dee80 },
    { "Country Town Noon / Twilight / Night TS (78/83)", 0x02dee80, 0x02def00 },
    { "Country Town Noon / Twilight / Night TS (79/83)", 0x02def00, 0x02def80 },
    { "Country Town Noon / Twilight / Night TS (80/83)", 0x02def80, 0x02df000 },
    { "Country Town Noon / Twilight / Night TS (81/83)", 0x02df000, 0x02df080 },
    { "Country Town Noon / Twilight / Night TS (82/83)", 0x02df080, 0x02df100 },
    { "Country Town Noon / Twilight / Night TS (83/83)", 0x02df100, 0x02df180 },
#else
    { "Country Town Noon / Twilight / Night TS", 0x02dc800, 0x02df180 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_UWATER[] =
{
#ifndef USE_LARGE_PALETTES
    { "Underground Water / New 5 TS (1/32)", 0x02df200, 0x02df280 },
    { "Underground Water / New 5 TS (2/32)", 0x02df280, 0x02df300 },
    { "Underground Water / New 5 TS (3/32)", 0x02df300, 0x02df380 },
    { "Underground Water / New 5 TS (4/32)", 0x02df380, 0x02df400 },
    { "Underground Water / New 5 TS (5/32)", 0x02df400, 0x02df480 },
    { "Underground Water / New 5 TS (6/32)", 0x02df480, 0x02df500 },
    { "Underground Water / New 5 TS (7/32)", 0x02df500, 0x02df580 },
    { "Underground Water / New 5 TS (8/32)", 0x02df580, 0x02df600 },
    { "Underground Water / New 5 TS (9/32)", 0x02df600, 0x02df680 },
    { "Underground Water / New 5 TS (10/32)", 0x02df680, 0x02df700 },
    { "Underground Water / New 5 TS (11/32)", 0x02df700, 0x02df780 },
    { "Underground Water / New 5 TS (12/32)", 0x02df780, 0x02df800 },
    { "Underground Water / New 5 TS (13/32)", 0x02df800, 0x02df880 },
    { "Underground Water / New 5 TS (14/32)", 0x02df880, 0x02df900 },
    { "Underground Water / New 5 TS (15/32)", 0x02df900, 0x02df980 },
    { "Underground Water / New 5 TS (16/32)", 0x02df980, 0x02dfa00 },
    { "Underground Water / New 5 TS (17/32)", 0x02dfa00, 0x02dfa80 },
    { "Underground Water / New 5 TS (18/32)", 0x02dfa80, 0x02dfb00 },
    { "Underground Water / New 5 TS (19/32)", 0x02dfb00, 0x02dfb80 },
    { "Underground Water / New 5 TS (20/32)", 0x02dfb80, 0x02dfc00 },
    { "Underground Water / New 5 TS (21/32)", 0x02dfc00, 0x02dfc80 },
    { "Underground Water / New 5 TS (22/32)", 0x02dfc80, 0x02dfd00 },
    { "Underground Water / New 5 TS (23/32)", 0x02dfd00, 0x02dfd80 },
    { "Underground Water / New 5 TS (24/32)", 0x02dfd80, 0x02dfe00 },
    { "Underground Water / New 5 TS (25/32)", 0x02dfe00, 0x02dfe80 },
    { "Underground Water / New 5 TS (26/32)", 0x02dfe80, 0x02dff00 },
    { "Underground Water / New 5 TS (27/32)", 0x02dff00, 0x02dff80 },
    { "Underground Water / New 5 TS (28/32)", 0x02dff80, 0x02e0000 },
    { "Underground Water / New 5 TS (29/32)", 0x02e0000, 0x02e0080 },
    { "Underground Water / New 5 TS (30/32)", 0x02e0080, 0x02e0100 },
    { "Underground Water / New 5 TS (31/32)", 0x02e0100, 0x02e0180 },
    { "Underground Water / New 5 TS (32/32)", 0x02e0180, 0x02e0200 },
#else
    { "Underground Water / New 5 TS", 0x02df200, 0x02e0200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_INHOUSE[] =
{
#ifndef USE_LARGE_PALETTES
    { "Inside House / New 6 TS (1/30)", 0x02e0300, 0x02e0380 },
    { "Inside House / New 6 TS (2/30)", 0x02e0380, 0x02e0400 },
    { "Inside House / New 6 TS (3/30)", 0x02e0400, 0x02e0480 },
    { "Inside House / New 6 TS (4/30)", 0x02e0480, 0x02e0500 },
    { "Inside House / New 6 TS (5/30)", 0x02e0500, 0x02e0580 },
    { "Inside House / New 6 TS (6/30)", 0x02e0580, 0x02e0600 },
    { "Inside House / New 6 TS (7/30)", 0x02e0600, 0x02e0680 },
    { "Inside House / New 6 TS (8/30)", 0x02e0680, 0x02e0700 },
    { "Inside House / New 6 TS (9/30)", 0x02e0700, 0x02e0780 },
    { "Inside House / New 6 TS (10/30)", 0x02e0780, 0x02e0800 },
    { "Inside House / New 6 TS (11/30)", 0x02e0800, 0x02e0880 },
    { "Inside House / New 6 TS (12/30)", 0x02e0880, 0x02e0900 },
    { "Inside House / New 6 TS (13/30)", 0x02e0900, 0x02e0980 },
    { "Inside House / New 6 TS (14/30)", 0x02e0980, 0x02e0a00 },
    { "Inside House / New 6 TS (15/30)", 0x02e0a00, 0x02e0a80 },
    { "Inside House / New 6 TS (16/30)", 0x02e0a80, 0x02e0b00 },
    { "Inside House / New 6 TS (17/30)", 0x02e0b00, 0x02e0b80 },
    { "Inside House / New 6 TS (18/30)", 0x02e0b80, 0x02e0c00 },
    { "Inside House / New 6 TS (19/30)", 0x02e0c00, 0x02e0c80 },
    { "Inside House / New 6 TS (20/30)", 0x02e0c80, 0x02e0d00 },
    { "Inside House / New 6 TS (21/30)", 0x02e0d00, 0x02e0d80 },
    { "Inside House / New 6 TS (22/30)", 0x02e0d80, 0x02e0e00 },
    { "Inside House / New 6 TS (23/30)", 0x02e0e00, 0x02e0e80 },
    { "Inside House / New 6 TS (24/30)", 0x02e0e80, 0x02e0f00 },
    { "Inside House / New 6 TS (25/30)", 0x02e0f00, 0x02e0f80 },
    { "Inside House / New 6 TS (26/30)", 0x02e0f80, 0x02e1000 },
    { "Inside House / New 6 TS (27/30)", 0x02e1000, 0x02e1080 },
    { "Inside House / New 6 TS (28/30)", 0x02e1080, 0x02e1100 },
    { "Inside House / New 6 TS (29/30)", 0x02e1100, 0x02e1180 },
    { "Inside House / New 6 TS (30/30)", 0x02e1180, 0x02e1200 },
#else
    { "Inside House / New 6 TS", 0x02e0300, 0x02e1200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CROOM[] =
{
#ifndef USE_LARGE_PALETTES
    { "Coffin Room / New 7 TS (1/16)", 0x02e1300, 0x02e1380 },
    { "Coffin Room / New 7 TS (2/16)", 0x02e1380, 0x02e1400 },
    { "Coffin Room / New 7 TS (3/16)", 0x02e1400, 0x02e1480 },
    { "Coffin Room / New 7 TS (4/16)", 0x02e1480, 0x02e1500 },
    { "Coffin Room / New 7 TS (5/16)", 0x02e1500, 0x02e1580 },
    { "Coffin Room / New 7 TS (6/16)", 0x02e1580, 0x02e1600 },
    { "Coffin Room / New 7 TS (7/16)", 0x02e1600, 0x02e1680 },
    { "Coffin Room / New 7 TS (8/16)", 0x02e1680, 0x02e1700 },
    { "Coffin Room / New 7 TS (9/16)", 0x02e1700, 0x02e1780 },
    { "Coffin Room / New 7 TS (10/16)", 0x02e1780, 0x02e1800 },
    { "Coffin Room / New 7 TS (11/16)", 0x02e1800, 0x02e1880 },
    { "Coffin Room / New 7 TS (12/16)", 0x02e1880, 0x02e1900 },
    { "Coffin Room / New 7 TS (13/16)", 0x02e1900, 0x02e1980 },
    { "Coffin Room / New 7 TS (14/16)", 0x02e1980, 0x02e1a00 },
    { "Coffin Room / New 7 TS (15/16)", 0x02e1a00, 0x02e1a80 },
    { "Coffin Room / New 7 TS (16/16)", 0x02e1a80, 0x02e1b00 },
#else
    { "Coffin Room / New 7 TS", 0x02e1300, 0x02e1b00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_CTOWER[] =
{
#ifndef USE_LARGE_PALETTES
    { "Clock Tower / New 8 TS (1/12)", 0x02e1c00, 0x02e1c80 },
    { "Clock Tower / New 8 TS (2/12)", 0x02e1c80, 0x02e1d00 },
    { "Clock Tower / New 8 TS (3/12)", 0x02e1d00, 0x02e1d80 },
    { "Clock Tower / New 8 TS (4/12)", 0x02e1d80, 0x02e1e00 },
    { "Clock Tower / New 8 TS (5/12)", 0x02e1e00, 0x02e1e80 },
    { "Clock Tower / New 8 TS (6/12)", 0x02e1e80, 0x02e1f00 },
    { "Clock Tower / New 8 TS (7/12)", 0x02e1f00, 0x02e1f80 },
    { "Clock Tower / New 8 TS (8/12)", 0x02e1f80, 0x02e2000 },
    { "Clock Tower / New 8 TS (9/12)", 0x02e2000, 0x02e2080 },
    { "Clock Tower / New 8 TS (10/12)", 0x02e2080, 0x02e2100 },
    { "Clock Tower / New 8 TS (11/12)", 0x02e2100, 0x02e2180 },
    { "Clock Tower / New 8 TS (12/12)", 0x02e2180, 0x02e2200 },
#else
    { "Clock Tower / New 8 TS", 0x02e1c00, 0x02e2200 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_SUBURB[] =
{
#ifndef USE_LARGE_PALETTES
    { "Surburbs 1 / 2 / 3 TS (1/88)", 0x02e2300, 0x02e2380 },
    { "Surburbs 1 / 2 / 3 TS (2/88)", 0x02e2380, 0x02e2400 },
    { "Surburbs 1 / 2 / 3 TS (3/88)", 0x02e2400, 0x02e2480 },
    { "Surburbs 1 / 2 / 3 TS (4/88)", 0x02e2480, 0x02e2500 },
    { "Surburbs 1 / 2 / 3 TS (5/88)", 0x02e2500, 0x02e2580 },
    { "Surburbs 1 / 2 / 3 TS (6/88)", 0x02e2580, 0x02e2600 },
    { "Surburbs 1 / 2 / 3 TS (7/88)", 0x02e2600, 0x02e2680 },
    { "Surburbs 1 / 2 / 3 TS (8/88)", 0x02e2680, 0x02e2700 },
    { "Surburbs 1 / 2 / 3 TS (9/88)", 0x02e2700, 0x02e2780 },
    { "Surburbs 1 / 2 / 3 TS (10/88)", 0x02e2780, 0x02e2800 },
    { "Surburbs 1 / 2 / 3 TS (11/88)", 0x02e2800, 0x02e2880 },
    { "Surburbs 1 / 2 / 3 TS (12/88)", 0x02e2880, 0x02e2900 },
    { "Surburbs 1 / 2 / 3 TS (13/88)", 0x02e2900, 0x02e2980 },
    { "Surburbs 1 / 2 / 3 TS (14/88)", 0x02e2980, 0x02e2a00 },
    { "Surburbs 1 / 2 / 3 TS (15/88)", 0x02e2a00, 0x02e2a80 },
    { "Surburbs 1 / 2 / 3 TS (16/88)", 0x02e2a80, 0x02e2b00 },
    { "Surburbs 1 / 2 / 3 TS (17/88)", 0x02e2b00, 0x02e2b80 },
    { "Surburbs 1 / 2 / 3 TS (18/88)", 0x02e2b80, 0x02e2c00 },
    { "Surburbs 1 / 2 / 3 TS (19/88)", 0x02e2c00, 0x02e2c80 },
    { "Surburbs 1 / 2 / 3 TS (20/88)", 0x02e2c80, 0x02e2d00 },
    { "Surburbs 1 / 2 / 3 TS (21/88)", 0x02e2d00, 0x02e2d80 },
    { "Surburbs 1 / 2 / 3 TS (22/88)", 0x02e2d80, 0x02e2e00 },
    { "Surburbs 1 / 2 / 3 TS (23/88)", 0x02e2e00, 0x02e2e80 },
    { "Surburbs 1 / 2 / 3 TS (24/88)", 0x02e2e80, 0x02e2f00 },
    { "Surburbs 1 / 2 / 3 TS (25/88)", 0x02e2f00, 0x02e2f80 },
    { "Surburbs 1 / 2 / 3 TS (26/88)", 0x02e2f80, 0x02e3000 },
    { "Surburbs 1 / 2 / 3 TS (27/88)", 0x02e3000, 0x02e3080 },
    { "Surburbs 1 / 2 / 3 TS (28/88)", 0x02e3080, 0x02e3100 },
    { "Surburbs 1 / 2 / 3 TS (29/88)", 0x02e3100, 0x02e3180 },
    { "Surburbs 1 / 2 / 3 TS (30/88)", 0x02e3180, 0x02e3200 },
    { "Surburbs 1 / 2 / 3 TS (31/88)", 0x02e3200, 0x02e3280 },
    { "Surburbs 1 / 2 / 3 TS (32/88)", 0x02e3280, 0x02e3300 },
    { "Surburbs 1 / 2 / 3 TS (33/88)", 0x02e3300, 0x02e3380 },
    { "Surburbs 1 / 2 / 3 TS (34/88)", 0x02e3380, 0x02e3400 },
    { "Surburbs 1 / 2 / 3 TS (35/88)", 0x02e3400, 0x02e3480 },
    { "Surburbs 1 / 2 / 3 TS (36/88)", 0x02e3480, 0x02e3500 },
    { "Surburbs 1 / 2 / 3 TS (37/88)", 0x02e3500, 0x02e3580 },
    { "Surburbs 1 / 2 / 3 TS (38/88)", 0x02e3580, 0x02e3600 },
    { "Surburbs 1 / 2 / 3 TS (39/88)", 0x02e3600, 0x02e3680 },
    { "Surburbs 1 / 2 / 3 TS (40/88)", 0x02e3680, 0x02e3700 },
    { "Surburbs 1 / 2 / 3 TS (41/88)", 0x02e3700, 0x02e3780 },
    { "Surburbs 1 / 2 / 3 TS (42/88)", 0x02e3780, 0x02e3800 },
    { "Surburbs 1 / 2 / 3 TS (43/88)", 0x02e3800, 0x02e3880 },
    { "Surburbs 1 / 2 / 3 TS (44/88)", 0x02e3880, 0x02e3900 },
    { "Surburbs 1 / 2 / 3 TS (45/88)", 0x02e3900, 0x02e3980 },
    { "Surburbs 1 / 2 / 3 TS (46/88)", 0x02e3980, 0x02e3a00 },
    { "Surburbs 1 / 2 / 3 TS (47/88)", 0x02e3a00, 0x02e3a80 },
    { "Surburbs 1 / 2 / 3 TS (48/88)", 0x02e3a80, 0x02e3b00 },
    { "Surburbs 1 / 2 / 3 TS (49/88)", 0x02e3b00, 0x02e3b80 },
    { "Surburbs 1 / 2 / 3 TS (50/88)", 0x02e3b80, 0x02e3c00 },
    { "Surburbs 1 / 2 / 3 TS (51/88)", 0x02e3c00, 0x02e3c80 },
    { "Surburbs 1 / 2 / 3 TS (52/88)", 0x02e3c80, 0x02e3d00 },
    { "Surburbs 1 / 2 / 3 TS (53/88)", 0x02e3d00, 0x02e3d80 },
    { "Surburbs 1 / 2 / 3 TS (54/88)", 0x02e3d80, 0x02e3e00 },
    { "Surburbs 1 / 2 / 3 TS (55/88)", 0x02e3e00, 0x02e3e80 },
    { "Surburbs 1 / 2 / 3 TS (56/88)", 0x02e3e80, 0x02e3f00 },
    { "Surburbs 1 / 2 / 3 TS (57/88)", 0x02e3f00, 0x02e3f80 },
    { "Surburbs 1 / 2 / 3 TS (58/88)", 0x02e3f80, 0x02e4000 },
    { "Surburbs 1 / 2 / 3 TS (59/88)", 0x02e4000, 0x02e4080 },
    { "Surburbs 1 / 2 / 3 TS (60/88)", 0x02e4080, 0x02e4100 },
    { "Surburbs 1 / 2 / 3 TS (61/88)", 0x02e4100, 0x02e4180 },
    { "Surburbs 1 / 2 / 3 TS (62/88)", 0x02e4180, 0x02e4200 },
    { "Surburbs 1 / 2 / 3 TS (63/88)", 0x02e4200, 0x02e4280 },
    { "Surburbs 1 / 2 / 3 TS (64/88)", 0x02e4280, 0x02e4300 },
    { "Surburbs 1 / 2 / 3 TS (65/88)", 0x02e4300, 0x02e4380 },
    { "Surburbs 1 / 2 / 3 TS (66/88)", 0x02e4380, 0x02e4400 },
    { "Surburbs 1 / 2 / 3 TS (67/88)", 0x02e4400, 0x02e4480 },
    { "Surburbs 1 / 2 / 3 TS (68/88)", 0x02e4480, 0x02e4500 },
    { "Surburbs 1 / 2 / 3 TS (69/88)", 0x02e4500, 0x02e4580 },
    { "Surburbs 1 / 2 / 3 TS (70/88)", 0x02e4580, 0x02e4600 },
    { "Surburbs 1 / 2 / 3 TS (71/88)", 0x02e4600, 0x02e4680 },
    { "Surburbs 1 / 2 / 3 TS (72/88)", 0x02e4680, 0x02e4700 },
    { "Surburbs 1 / 2 / 3 TS (73/88)", 0x02e4700, 0x02e4780 },
    { "Surburbs 1 / 2 / 3 TS (74/88)", 0x02e4780, 0x02e4800 },
    { "Surburbs 1 / 2 / 3 TS (75/88)", 0x02e4800, 0x02e4880 },
    { "Surburbs 1 / 2 / 3 TS (76/88)", 0x02e4880, 0x02e4900 },
    { "Surburbs 1 / 2 / 3 TS (77/88)", 0x02e4900, 0x02e4980 },
    { "Surburbs 1 / 2 / 3 TS (78/88)", 0x02e4980, 0x02e4a00 },
    { "Surburbs 1 / 2 / 3 TS (79/88)", 0x02e4a00, 0x02e4a80 },
    { "Surburbs 1 / 2 / 3 TS (80/88)", 0x02e4a80, 0x02e4b00 },
    { "Surburbs 1 / 2 / 3 TS (81/88)", 0x02e4b00, 0x02e4b80 },
    { "Surburbs 1 / 2 / 3 TS (82/88)", 0x02e4b80, 0x02e4c00 },
    { "Surburbs 1 / 2 / 3 TS (83/88)", 0x02e4c00, 0x02e4c80 },
    { "Surburbs 1 / 2 / 3 TS (84/88)", 0x02e4c80, 0x02e4d00 },
    { "Surburbs 1 / 2 / 3 TS (85/88)", 0x02e4d00, 0x02e4d80 },
    { "Surburbs 1 / 2 / 3 TS (86/88)", 0x02e4d80, 0x02e4e00 },
    { "Surburbs 1 / 2 / 3 TS (87/88)", 0x02e4e00, 0x02e4e80 },
    { "Surburbs 1 / 2 / 3 TS (88/88)", 0x02e4e80, 0x02e4f00 },
#else
    { "Surburbs 1 / 2 / 3 TS", 0x02e2300, 0x02e4f00 },
#endif
};

const sGame_PaletteDataset JOJOS_A_TIMESTOP_NODE_OBRIDGE[] =
{
#ifndef USE_LARGE_PALETTES
    { "On the Bridge TS (1/8)", 0x02e4f00, 0x02e4f80 },
    { "On the Bridge TS (2/8)", 0x02e4f80, 0x02e5000 },
    { "On the Bridge TS (3/8)", 0x02e5000, 0x02e5080 },
    { "On the Bridge TS (4/8)", 0x02e5080, 0x02e5100 },
    { "On the Bridge TS (5/8)", 0x02e5100, 0x02e5180 },
    { "On the Bridge TS (6/8)", 0x02e5180, 0x02e5200 },
    { "On the Bridge TS (7/8)", 0x02e5200, 0x02e5280 },
    { "On the Bridge TS (8/8)", 0x02e5280, 0x02e5300 },
#else
    { "On the Bridge TS", 0x02e4f00, 0x02e5300 },
#endif
};

const sDescTreeNode JOJOS_TIMESTOP_COLLECTION[] =
{
    { "A Lockup TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_ALOCKUP, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_ALOCKUP) },
    { "A Health Room TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HEALTH, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HEALTH) },
    { "In A Airplane TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_AIRPLANE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_AIRPLANE) },
    { "Tigerbaum Garden TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_TIGERBAUM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_TIGERBAUM) },
    { "Hotel (Devil) / New 2 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELD, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELD) },
    { "Remains / New 1 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_REMAINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_REMAINS) },
    { "Hotel (Justice) TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_HOTELJ, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_HOTELJ) },
    { "Small Island / New 3 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SISLAND, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SISLAND) },
    { "Desert Morning TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DMORN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DMORN) },
    { "Desert Noon TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNOON, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNOON) },
    { "Desert Night TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_DNIGHT, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_DNIGHT) },
    { "Ruins / New 4 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_RUINS, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_RUINS) },
    { "Country Town Noon / Twilight / Night TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWN, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWN) },
    { "Underground Water / New 5", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_UWATER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_UWATER) },
    { "Inside House / New 6", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_INHOUSE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_INHOUSE) },
    { "Coffin Room / New 7 TS", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CROOM, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CROOM) },
    { "Clock Tower / New 8", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_CTOWER, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_CTOWER) },
    { "Suburbs 1", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_SUBURB, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_SUBURB) },
    { "On The Bridge", DESC_NODETYPE_TREE, (void*)JOJOS_A_TIMESTOP_NODE_OBRIDGE, ARRAYSIZE(JOJOS_A_TIMESTOP_NODE_OBRIDGE) },
};

#pragma endregion Timestop

const sDescTreeNode JOJOS_UNITS_50[ARRAYSIZE(JOJOS_A_UNITDESC_50)] =
{
    { "HUD", DESC_NODETYPE_TREE,           (void*)JOJOS_HUD_COLLECTION, ARRAYSIZE(JOJOS_HUD_COLLECTION) },
    { "HUD Portraits", DESC_NODETYPE_TREE, (void*)JOJOS_HUD_PORTRAIT_COLLECTION, ARRAYSIZE(JOJOS_HUD_PORTRAIT_COLLECTION) },
    { "Stages", DESC_NODETYPE_TREE,        (void*)JOJOS_A_STAGE_COLLECTION, ARRAYSIZE(JOJOS_A_STAGE_COLLECTION) },
};

const sDescTreeNode JOJOS_UNITS_51[ARRAYSIZE(JOJOS_A_UNITDESC_51)] =
{
    { "Jotaro", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOTARO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOTARO) },
    { "Kakyoin & Hierophant", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIEROPHANT) },
    { "Avdol", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_AVDOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_AVDOL) },
    { "Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_POL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_POL) },
    { "Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_JOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_JOSEPH) },
    { "Iggy", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_IGGY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_IGGY) },
    { "Alessi", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_ALESSI, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_ALESSI) },
    { "Chaka", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_CHAKA, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_CHAKA) },
    { "Devo and Ebony", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEVOEBONY) },
    { "Midler", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MIDLER, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MIDLER) },
    { "Dio", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DIO) },
    { "Shadow Dio", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SDIO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SDIO) },
    { "Young Joseph", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_YJOSEPH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_YJOSEPH) },
    { "Hol ", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOL) },
    { "Vanilla Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_VICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_VICE) },
    { "New Kakyoin & Hierophant", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HIERO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HIERO) },
    { "Anubis Polnareff", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BPOL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BPOL) },
    { "Petshop", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_SHOP, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_SHOP) },
    { "Mariah", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_MARIAH, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_MARIAH) },
    { "Hol and Boingo", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_HOLBOINGO) },
    { "Rubber Soul", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_RSOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_RSOUL) },
    { "Khan", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_KHAN, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_KHAN) },
    { "N'Doul and Geb", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_NDOUL, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_NDOUL) },
    { "Boss Ice", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_BICE, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_BICE) },
    { "Death 13", DESC_NODETYPE_TREE, (void*)JOJOS_A_CHARACTER_COLLECTION_DEATH13, ARRAYSIZE(JOJOS_A_CHARACTER_COLLECTION_DEATH13) },
    { "Timestop", DESC_NODETYPE_TREE, (void*)JOJOS_TIMESTOP_COLLECTION, ARRAYSIZE(JOJOS_TIMESTOP_COLLECTION) },
    { "Bonus", DESC_NODETYPE_TREE,    (void*)JOJOS_A_BONUS_COLLECTION, ARRAYSIZE(JOJOS_A_BONUS_COLLECTION) },
};

// Unused natively, but used for Extra extension files people plug in.  May need to fork into 50/51 versions.
const stExtraDef JOJOS_A_EXTRA[] =
{
    //Start

    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};

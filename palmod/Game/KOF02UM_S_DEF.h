#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of KOF02UM_S_KYO_PALETTE_A. 
// * Update every array using KOF02UM_S_NUMUNIT below
// That should be it.  Good luck.

constexpr auto KOF02UM_S_NUMUNIT_MAIN = indexKOF02UM_S_Last;

#define KOF02UM_S_EXTRALOC_MAIN KOF02UM_S_NUMUNIT_MAIN

struct sKOF02_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    UINT32 locationA = 0;
    UINT32 locationB = 0;
    UINT32 locationC = 0;
    UINT32 locationD = 0;
    LPCWSTR pszImageRefName = nullptr;
    LPCWSTR pszHSDM1NameOverride = nullptr;
    LPCWSTR pszDMSDMNameOverride = nullptr;
    LPCWSTR pszHSDM2NameOverride = nullptr;
    LPCWSTR pszHSDM3NameOverride = nullptr;
};

const UINT16 KOF02UM_S_IMG_UNITS[] =
{
    indexKOFSprites_98Kyo,
    indexKOFSprites_98Benimaru,
    indexKOFSprites_98Daimon,
    indexKOFSprites_98Terry,
    indexKOFSprites_98Andy,
    indexKOFSprites_98Joe,
    indexKOFSprites_98Ryo,
    indexKOFSprites_98Robert,
    indexKOFSprites_98Yuri,
    indexKOFSprites_98Leona,
    indexKOFSprites_98Athena,
    indexKOFSprites_98Kensou,
    indexKOFSprites_98Chin,
    indexKOFSprites_98Chizuru,
    indexKOFSprites_98Mai,
    indexKOFSprites_98Kim,
    indexKOFSprites_98Chang,
    indexKOFSprites_98Choi,
    indexKOFSprites_98Yashiro,
    indexKOFSprites_98Shermie,
    indexKOFSprites_98Chris,
    indexKOFSprites_98Yamazaki,
    indexKOFSprites_98BlueMary,
    indexKOFSprites_98Billy,
    indexKOFSprites_98Iori,
    indexKOFSprites_98Mature,
    indexKOFSprites_98Vice,
    indexKOFSprites_98Heidern,
    indexKOFSprites_98Takuma,
    indexKOFSprites_98Saisyu,
    indexKOFSprites_98HeavyD,
    indexKOFSprites_98Lucky,
    indexKOFSprites_98Brian,
    indexKOFSprites_98Rugal,
    indexKOFSprites_98Shingo,
    indexKOFSprites_02Angel,
    indexKOFSprites_02Athena,
    indexKOFSprites_02Clark,
    indexKOFSprites_02K,
    indexKOFSprites_02Kula,
    indexKOFSprites_02Kyo,
    indexKOFSprites_02Maxima,
    indexKOFSprites_02MayLee,
    indexKOFSprites_02Ralf,
    indexKOFSprites_02Ramon,
    indexKOFSprites_02Seth,
    indexKOFSprites_02Vanessa,
    indexKOFSprites_02Whip,
    indexKOFSprites_02Lin,
    indexKOFSprites_02Nameless,
    indexKOFSprites_02King,
    indexKOFSprites_02Xiangfei,
    indexKOFSprites_02Goenitz,
    indexKOFSprites_02Bao,
    indexKOFSprites_02Foxy,
    indexKOFSprites_02Geese,
    indexKOFSprites_02Hinako,
    indexKOFSprites_02Igniz,
    indexKOFSprites_02Jhun,
    indexKOFSprites_02Kasumi,
    indexKOFSprites_02Krizalid,
    indexKOFSprites_02OZero,

    indexKOFSprites_99Krizalid,
    indexKOFSprites_00Bao,
    indexKOFSprites_00Kasumi,
    indexKOFSprites_00Robert,
    indexKOFSprites_00ZeroClone,
    indexKOF01Sprites_Xiangfei,
    indexKOFSprites_02Andy,
    indexKOFSprites_02Chin,
    indexKOFSprites_02Kusanagi,
    indexKOFSprites_02Robert,
    indexKOFSprites_02Yuri,

    indexKOFSprites_02UM_Andy,      // 0x79
    indexKOFSprites_02UM_Angel,     // 0x7A
    indexKOFSprites_02UM_Athena,    // 0x7B
    indexKOFSprites_02UM_Bao,       // 0x7C
    indexKOFSprites_02UM_Benimaru,  // 0x7D
    indexKOFSprites_02UM_Billy,     // 0x7E
    indexKOFSprites_02UM_BlueMary,  // 0x7F
    indexKOFSprites_02UM_Chang,     // 0x80
    indexKOFSprites_02UM_Chin,      // 0x81
    indexKOFSprites_02UM_Choi,      // 0x82
    indexKOFSprites_02UM_Chris,     // 0x83
    indexKOFSprites_02UM_ChrisOChi, // 0x84
    indexKOFSprites_02UM_Clark,     // 0x85
    indexKOFSprites_02UM_CloneZero, // 0x86
    indexKOFSprites_02UM_Daimon,    // 0x87 aka Goro
    indexKOFSprites_02UM_Foxy,      // 0x88
    indexKOFSprites_02UM_Geese,     // 0x89
    indexKOFSprites_02UM_GeeseNM,   // 0x8A
    indexKOFSprites_02UM_Goenitz,   // 0x8B
    indexKOFSprites_02UM_Heidern,   // 0x8C
    indexKOFSprites_02UM_Hinako,    // 0x8D
    indexKOFSprites_02UM_Igniz,     // 0x8E
    indexKOFSprites_02UM_Iori,      // 0x8F
    indexKOFSprites_02UM_Jhun,      // 0x90
    indexKOFSprites_02UM_Joe,       // 0x91
    indexKOFSprites_02UM_K,         // 0x92
    indexKOFSprites_02UM_K9999,     // 0x93
    indexKOFSprites_02UM_Kasumi,    // 0x94
    indexKOFSprites_02UM_Kensou,    // 0x95
    indexKOFSprites_02UM_KensouEX,  // 0x96
    indexKOFSprites_02UM_Kim,       // 0x97
    indexKOFSprites_02UM_King,      // 0x98
    indexKOFSprites_02UM_Krizalid,  // 0x99
    indexKOFSprites_02UM_Kula,      // 0x9a
    indexKOFSprites_02UM_Kusanagi,  // 0x9b
    indexKOFSprites_02UM_KyoKusa,   // 0x9c
    indexKOFSprites_02UM_Kyo1,      // 0x9d
    indexKOFSprites_02UM_Kyo2,      // 0x9e
    indexKOFSprites_02UM_Leona,     // 0x9f
    indexKOFSprites_02UM_Lin,       // 0xa0
    indexKOFSprites_02UM_Mai,       // 0xA1
    indexKOFSprites_02UM_Mature,    // 0xA2
    indexKOFSprites_02UM_Maxima,    // 0xA3
    indexKOFSprites_02UM_MayLee,    // 0xA4
    indexKOFSprites_02UM_Nameless,  // 0xA5
    indexKOFSprites_02UM_OmegaRugal, // 0xA6
    indexKOFSprites_02UM_Ralf,      // 0xA7
    indexKOFSprites_02UM_Ramon,     // 0xa8
    indexKOFSprites_02UM_Robert,    // 0xA9
    indexKOFSprites_02UM_RobertEX,  // 0xAa
    indexKOFSprites_02UM_Ryo,       // 0xAb
    indexKOFSprites_02UM_Seth,      // 0xAc
    indexKOFSprites_02UM_Shermie,   // 0xAd
    indexKOFSprites_02UM_ShermieOChi, // 0xAe
    indexKOFSprites_02UM_Shingo,    // 0xAf
    indexKOFSprites_02UM_Takuma,    // 0xb0
    indexKOFSprites_02UM_TakumaEX,  // 0xB1
    indexKOFSprites_02UM_Terry,     // 0xB2
    indexKOFSprites_02UM_Vanessa,   // 0xB3
    indexKOFSprites_02UM_Vice,      // 0xB4
    indexKOFSprites_02UM_Whip,      // 0xB5
    indexKOFSprites_02UM_Xiangfei,  // 0xB6
    indexKOFSprites_02UM_Yamazaki,  // 0xB7
    indexKOFSprites_02UM_Yashiro,   // 0xB8
    indexKOFSprites_02UM_YashiroOChi, // 0xB9
    indexKOFSprites_02UM_Yuri,      // 0xBa
    indexKOFSprites_02UM_ZeroOG,    // 0xBb

    indexKOFSprites_02UM_Bonus,     // 0x1d7

    indexKOFSprites_02UMExtras,
};

// These tables were added by hand through research.  They are not part of the table print output logic.
const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_PORTRAITS[] =
{
    { L"Kyo A Portrait", 0x53900, 0x53920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
    { L"Kyo B Portrait", 0x53920, 0x53940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
    { L"Kyo C Portrait", 0x53940, 0x53960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
    { L"Kyo D Portrait", 0x53960, 0x53980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_PORTRAITS[] =
{
    { L"Benimaru A Portrait", 0x53a00, 0x53a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
    { L"Benimaru B Portrait", 0x53a20, 0x53a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
    { L"Benimaru C Portrait", 0x53a40, 0x53a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
    { L"Benimaru D Portrait", 0x53a60, 0x53a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Benimaru },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_PORTRAITS[] =
{
    { L"Daimon A Portrait", 0x53b00, 0x53b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
    { L"Daimon B Portrait", 0x53b20, 0x53b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
    { L"Daimon C Portrait", 0x53b40, 0x53b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
    { L"Daimon D Portrait", 0x53b60, 0x53b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Daimon },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_PORTRAITS[] =
{
    { L"Terry A Portrait", 0x53c00, 0x53c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
    { L"Terry B Portrait", 0x53c20, 0x53c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
    { L"Terry C Portrait", 0x53c40, 0x53c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
    { L"Terry D Portrait", 0x53c60, 0x53c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Terry },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_PORTRAITS[] =
{
    { L"Andy A Portrait", 0x53d00, 0x53d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
    { L"Andy B Portrait", 0x53d20, 0x53d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
    { L"Andy C Portrait", 0x53d40, 0x53d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
    { L"Andy D Portrait", 0x53d60, 0x53d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Andy },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_PORTRAITS[] =
{
    { L"Joe A Portrait", 0x53e00, 0x53e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
    { L"Joe B Portrait", 0x53e20, 0x53e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
    { L"Joe C Portrait", 0x53e40, 0x53e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
    { L"Joe D Portrait", 0x53e60, 0x53e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Joe },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_PORTRAITS[] =
{
    { L"Kim A Portrait", 0x53f00, 0x53f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
    { L"Kim B Portrait", 0x53f20, 0x53f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
    { L"Kim C Portrait", 0x53f40, 0x53f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
    { L"Kim D Portrait", 0x53f60, 0x53f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kim },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_PORTRAITS[] =
{
    { L"Chang A Portrait", 0x54000, 0x54020, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
    { L"Chang B Portrait", 0x54020, 0x54040, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
    { L"Chang C Portrait", 0x54040, 0x54060, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
    { L"Chang D Portrait", 0x54060, 0x54080, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chang },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_PORTRAITS[] =
{
    { L"Choi A Portrait", 0x54100, 0x54120, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
    { L"Choi B Portrait", 0x54120, 0x54140, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
    { L"Choi C Portrait", 0x54140, 0x54160, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
    { L"Choi D Portrait", 0x54160, 0x54180, indexKOFSprites_02UMExtras, indexKOF02UM_S_Choi },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_PORTRAITS[] =
{
    { L"Athena A Portrait", 0x54200, 0x54220, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
    { L"Athena B Portrait", 0x54220, 0x54240, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
    { L"Athena C Portrait", 0x54240, 0x54260, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
    { L"Athena D Portrait", 0x54260, 0x54280, indexKOFSprites_02UMExtras, indexKOF02UM_S_Athena },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_PORTRAITS[] =
{
    { L"Kensou A Portrait", 0x54300, 0x54320, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou },
    { L"Kensou B Portrait", 0x54320, 0x54340, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou},
    { L"Kensou C Portrait", 0x54340, 0x54360, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou },
    { L"Kensou D Portrait", 0x54360, 0x54380, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kensou },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_PORTRAITS[] =
{
    { L"Chin A Portrait", 0x54400, 0x54420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
    { L"Chin B Portrait", 0x54420, 0x54440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
    { L"Chin C Portrait", 0x54440, 0x54460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
    { L"Chin D Portrait", 0x54460, 0x54480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chin },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_PORTRAITS[] =
{
    { L"Leona A Portrait", 0x54500, 0x54520, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
    { L"Leona B Portrait", 0x54520, 0x54540, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
    { L"Leona C Portrait", 0x54540, 0x54560, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
    { L"Leona D Portrait", 0x54560, 0x54580, indexKOFSprites_02UMExtras, indexKOF02UM_S_Leona },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_PORTRAITS[] =
{
    { L"Ralf A Portrait", 0x54600, 0x54620, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
    { L"Ralf B Portrait", 0x54620, 0x54640, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
    { L"Ralf C Portrait", 0x54640, 0x54660, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
    { L"Ralf D Portrait", 0x54660, 0x54680, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ralf },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_PORTRAITS[] =
{
    { L"Clark A Portrait", 0x54700, 0x54720, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
    { L"Clark B Portrait", 0x54720, 0x54740, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
    { L"Clark C Portrait", 0x54740, 0x54760, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
    { L"Clark D Portrait", 0x54760, 0x54780, indexKOFSprites_02UMExtras, indexKOF02UM_S_Clark },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_PORTRAITS[] =
{
    { L"Ryo A Portrait", 0x54800, 0x54820, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
    { L"Ryo B Portrait", 0x54820, 0x54840, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
    { L"Ryo C Portrait", 0x54840, 0x54860, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
    { L"Ryo D Portrait", 0x54860, 0x54880, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ryo },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_PORTRAITS[] =
{
    { L"Robert A Portrait", 0x54900, 0x54920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
    { L"Robert B Portrait", 0x54920, 0x54940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
    { L"Robert C Portrait", 0x54940, 0x54960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
    { L"Robert D Portrait", 0x54960, 0x54980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Robert },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_PORTRAITS[] =
{
    { L"Takuma A Portrait", 0x54a00, 0x54a20, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Takuma - 1 },
    { L"Takuma B Portrait", 0x54a20, 0x54a40, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Takuma - 1 },
    { L"Takuma C Portrait", 0x54a40, 0x54a60, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Takuma - 1 },
    { L"Takuma D Portrait", 0x54a60, 0x54a80, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Takuma - 1 },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_PORTRAITS[] =
{
    { L"Mai A Portrait", 0x54b00, 0x54b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
    { L"Mai B Portrait", 0x54b20, 0x54b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
    { L"Mai C Portrait", 0x54b40, 0x54b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
    { L"Mai D Portrait", 0x54b60, 0x54b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mai },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_PORTRAITS[] =
{
    { L"Yuri A Portrait", 0x54c00, 0x54c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
    { L"Yuri B Portrait", 0x54c20, 0x54c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
    { L"Yuri C Portrait", 0x54c40, 0x54c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
    { L"Yuri D Portrait", 0x54c60, 0x54c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yuri },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_PORTRAITS[] =
{
    { L"May Lee A Portrait", 0x54d00, 0x54d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
    { L"May Lee B Portrait", 0x54d20, 0x54d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
    { L"May Lee C Portrait", 0x54d40, 0x54d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
    { L"May Lee D Portrait", 0x54d60, 0x54d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_MayLee },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_PORTRAITS[] =
{
    { L"Iori A Portrait", 0x54e00, 0x54e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
    { L"Iori B Portrait", 0x54e20, 0x54e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
    { L"Iori C Portrait", 0x54e40, 0x54e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
    { L"Iori D Portrait", 0x54e60, 0x54e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Iori },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_PORTRAITS[] =
{
    { L"Mature A Portrait", 0x54f00, 0x54f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
    { L"Mature B Portrait", 0x54f20, 0x54f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
    { L"Mature C Portrait", 0x54f40, 0x54f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
    { L"Mature D Portrait", 0x54f60, 0x54f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Mature },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_PORTRAITS[] =
{
    { L"Vice A Portrait", 0x55000, 0x55020, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
    { L"Vice B Portrait", 0x55020, 0x55040, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
    { L"Vice C Portrait", 0x55040, 0x55060, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
    { L"Vice D Portrait", 0x55060, 0x55080, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vice },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_PORTRAITS[] =
{
    { L"Yamazaki A Portrait", 0x55100, 0x55120, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
    { L"Yamazaki B Portrait", 0x55120, 0x55140, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
    { L"Yamazaki C Portrait", 0x55140, 0x55160, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
    { L"Yamazaki D Portrait", 0x55160, 0x55180, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yamazaki },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_PORTRAITS[] =
{
    { L"Blue Mary A Portrait", 0x55200, 0x55220, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
    { L"Blue Mary B Portrait", 0x55220, 0x55240, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
    { L"Blue Mary C Portrait", 0x55240, 0x55260, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
    { L"Blue Mary D Portrait", 0x55260, 0x55280, indexKOFSprites_02UMExtras, indexKOF02UM_S_BlueMary },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_PORTRAITS[] =
{
    { L"Billy A Portrait", 0x55300, 0x55320, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
    { L"Billy B Portrait", 0x55320, 0x55340, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
    { L"Billy C Portrait", 0x55340, 0x55360, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
    { L"Billy D Portrait", 0x55360, 0x55380, indexKOFSprites_02UMExtras, indexKOF02UM_S_Billy },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_PORTRAITS[] =
{
    { L"Yashiro A Portrait", 0x55400, 0x55420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
    { L"Yashiro B Portrait", 0x55420, 0x55440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
    { L"Yashiro C Portrait", 0x55440, 0x55460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
    { L"Yashiro D Portrait", 0x55460, 0x55480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Yashiro },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_PORTRAITS[] =
{
    { L"Shermie A Portrait", 0x55500, 0x55520, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
    { L"Shermie B Portrait", 0x55520, 0x55540, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
    { L"Shermie C Portrait", 0x55540, 0x55560, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
    { L"Shermie D Portrait", 0x55560, 0x55580, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shermie },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_PORTRAITS[] =
{
    { L"Chris A Portrait", 0x55600, 0x55620, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
    { L"Chris B Portrait", 0x55620, 0x55640, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
    { L"Chris C Portrait", 0x55640, 0x55660, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
    { L"Chris D Portrait", 0x55660, 0x55680, indexKOFSprites_02UMExtras, indexKOF02UM_S_Chris },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_PORTRAITS[] =
{
    { L"K' A Portrait", 0x55700, 0x55720, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
    { L"K' B Portrait", 0x55720, 0x55740, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
    { L"K' C Portrait", 0x55740, 0x55760, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
    { L"K' D Portrait", 0x55760, 0x55780, indexKOFSprites_02UMExtras, indexKOF02UM_S_K },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_PORTRAITS[] =
{
    { L"Maxima A Portrait", 0x55800, 0x55820, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
    { L"Maxima B Portrait", 0x55820, 0x55840, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
    { L"Maxima C Portrait", 0x55840, 0x55860, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
    { L"Maxima D Portrait", 0x55860, 0x55880, indexKOFSprites_02UMExtras, indexKOF02UM_S_Maxima },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_PORTRAITS[] =
{
    { L"Whip A Portrait", 0x55900, 0x55920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
    { L"Whip B Portrait", 0x55920, 0x55940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
    { L"Whip C Portrait", 0x55940, 0x55960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
    { L"Whip D Portrait", 0x55960, 0x55980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Whip },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_PORTRAITS[] =
{
    { L"Vanessa A Portrait", 0x55a00, 0x55a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
    { L"Vanessa B Portrait", 0x55a20, 0x55a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
    { L"Vanessa C Portrait", 0x55a40, 0x55a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
    { L"Vanessa D Portrait", 0x55a60, 0x55a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Vanessa },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_PORTRAITS[] =
{
    { L"Seth A Portrait", 0x55b00, 0x55b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
    { L"Seth B Portrait", 0x55b20, 0x55b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
    { L"Seth C Portrait", 0x55b40, 0x55b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
    { L"Seth D Portrait", 0x55b60, 0x55b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Seth },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_PORTRAITS[] =
{
    { L"Ramon A Portrait", 0x55c00, 0x55c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
    { L"Ramon B Portrait", 0x55c20, 0x55c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
    { L"Ramon C Portrait", 0x55c40, 0x55c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
    { L"Ramon D Portrait", 0x55c60, 0x55c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Ramon },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_PORTRAITS[] =
{
    { L"Kula A Portrait", 0x55d00, 0x55d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
    { L"Kula B Portrait", 0x55d20, 0x55d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
    { L"Kula C Portrait", 0x55d40, 0x55d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
    { L"Kula D Portrait", 0x55d60, 0x55d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kula },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_PORTRAITS[] =
{
    { L"Nameless A Portrait", 0x55e00, 0x55e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
    { L"Nameless B Portrait", 0x55e20, 0x55e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
    { L"Nameless C Portrait", 0x55e40, 0x55e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
    { L"Nameless D Portrait", 0x55e60, 0x55e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Nameless },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_PORTRAITS[] =
{
    { L"Angel A Portrait", 0x55f00, 0x55f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
    { L"Angel B Portrait", 0x55f20, 0x55f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
    { L"Angel C Portrait", 0x55f40, 0x55f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
    { L"Angel D Portrait", 0x55f60, 0x55f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Angel },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_PORTRAITS[] =
{
    { L"Omega Rugal A Portrait", 0x56000, 0x56020, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
    { L"Omega Rugal B Portrait", 0x56020, 0x56040, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
    { L"Omega Rugal C Portrait", 0x56040, 0x56060, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
    { L"Omega Rugal D Portrait", 0x56060, 0x56080, indexKOFSprites_02UMExtras, indexKOF02UM_S_OmegaRugal },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_PORTRAITS[] =
{
    { L"KUSANAGI A Portrait", 0x56100, 0x56120, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
    { L"KUSANAGI B Portrait", 0x56120, 0x56140, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
    { L"KUSANAGI C Portrait", 0x56140, 0x56160, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
    { L"KUSANAGI D Portrait", 0x56160, 0x56180, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kusanagi },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_PORTRAITS[] =
{
    { L"Shingo A Portrait", 0x56200, 0x56220, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
    { L"Shingo B Portrait", 0x56220, 0x56240, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
    { L"Shingo C Portrait", 0x56240, 0x56260, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
    { L"Shingo D Portrait", 0x56260, 0x56280, indexKOFSprites_02UMExtras, indexKOF02UM_S_Shingo },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_PORTRAITS[] =
{
    { L"King A Portrait", 0x56300, 0x56320, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
    { L"King B Portrait", 0x56320, 0x56340, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
    { L"King C Portrait", 0x56340, 0x56360, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
    { L"King D Portrait", 0x56360, 0x56380, indexKOFSprites_02UMExtras, indexKOF02UM_S_King },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_PORTRAITS[] =
{
    { L"Xiangfei A Portrait", 0x56400, 0x56420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
    { L"Xiangfei B Portrait", 0x56420, 0x56440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
    { L"Xiangfei C Portrait", 0x56440, 0x56460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
    { L"Xiangfei D Portrait", 0x56460, 0x56480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Xiangfei },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_PORTRAITS[] =
{
    { L"Hinako A Portrait", 0x56500, 0x56520, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
    { L"Hinako B Portrait", 0x56520, 0x56540, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
    { L"Hinako C Portrait", 0x56540, 0x56560, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
    { L"Hinako D Portrait", 0x56560, 0x56580, indexKOFSprites_02UMExtras, indexKOF02UM_S_Hinako },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_PORTRAITS[] =
{
    { L"Heidern A Portrait", 0x56600, 0x56620, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
    { L"Heidern B Portrait", 0x56620, 0x56640, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
    { L"Heidern C Portrait", 0x56640, 0x56660, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
    { L"Heidern D Portrait", 0x56660, 0x56680, indexKOFSprites_02UMExtras, indexKOF02UM_S_Heidern },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_PORTRAITS[] =
{
    { L"Lin A Portrait", 0x56700, 0x56720, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Lin - 1 },
    { L"Lin B Portrait", 0x56720, 0x56740, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Lin - 1 },
    { L"Lin C Portrait", 0x56740, 0x56760, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Lin - 1 },
    { L"Lin D Portrait", 0x56760, 0x56780, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_Lin - 1 },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_PORTRAITS[] =
{
    { L"EX Takuma A Portrait", 0x56800, 0x56820, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_TakumaEX - 1 },
    { L"EX Takuma B Portrait", 0x56820, 0x56840, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_TakumaEX - 1 },
    { L"EX Takuma C Portrait", 0x56840, 0x56860, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_TakumaEX - 1 },
    { L"EX Takuma D Portrait", 0x56860, 0x56880, indexKOFSprites_02UMExtras, indexKOFSprites_02UM_TakumaEX - 1 },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_PORTRAITS[] =
{
    { L"Bao A Portrait", 0x56900, 0x56920, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
    { L"Bao B Portrait", 0x56920, 0x56940, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
    { L"Bao C Portrait", 0x56940, 0x56960, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
    { L"Bao D Portrait", 0x56960, 0x56980, indexKOFSprites_02UMExtras, indexKOF02UM_S_Bao },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_PORTRAITS[] =
{
    { L"Jhun Hoon A Portrait", 0x56a00, 0x56a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
    { L"Jhun Hoon B Portrait", 0x56a20, 0x56a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
    { L"Jhun Hoon C Portrait", 0x56a40, 0x56a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
    { L"Jhun Hoon D Portrait", 0x56a60, 0x56a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Jhun },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_PORTRAITS[] =
{
    { L"Kyo-1 A Portrait", 0x56b00, 0x56b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
    { L"Kyo-1 B Portrait", 0x56b20, 0x56b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
    { L"Kyo-1 C Portrait", 0x56b40, 0x56b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
    { L"Kyo-1 D Portrait", 0x56b60, 0x56b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo1 },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_PORTRAITS[] =
{
    { L"Foxy A Portrait", 0x56c00, 0x56c20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
    { L"Foxy B Portrait", 0x56c20, 0x56c40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
    { L"Foxy C Portrait", 0x56c40, 0x56c60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
    { L"Foxy D Portrait", 0x56c60, 0x56c80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Foxy },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_PORTRAITS[] =
{
    { L"Kasumi A Portrait", 0x56d00, 0x56d20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
    { L"Kasumi B Portrait", 0x56d20, 0x56d40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
    { L"Kasumi C Portrait", 0x56d40, 0x56d60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
    { L"Kasumi D Portrait", 0x56d60, 0x56d80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kasumi },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_PORTRAITS[] =
{
    { L"Geese A Portrait", 0x56e00, 0x56e20, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
    { L"Geese B Portrait", 0x56e20, 0x56e40, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
    { L"Geese C Portrait", 0x56e40, 0x56e60, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
    { L"Geese D Portrait", 0x56e60, 0x56e80, indexKOFSprites_02UMExtras, indexKOF02UM_S_Geese },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_PORTRAITS[] =
{
    { L"Nightmare Geese A Portrait", 0x56f00, 0x56f20, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
    { L"Nightmare Geese B Portrait", 0x56f20, 0x56f40, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
    { L"Nightmare Geese C Portrait", 0x56f40, 0x56f60, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
    { L"Nightmare Geese D Portrait", 0x56f60, 0x56f80, indexKOFSprites_02UMExtras, indexKOF02UM_S_NGeese },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_PORTRAITS[] =
{
    { L"EX Robert A Portrait", 0x57000, 0x57020, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
    { L"EX Robert B Portrait", 0x57020, 0x57040, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
    { L"EX Robert C Portrait", 0x57040, 0x57060, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
    { L"EX Robert D Portrait", 0x57060, 0x57080, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXRobert },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_PORTRAITS[] =
{
    { L"EX Kensou A Portrait", 0x57100, 0x57120, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
    { L"EX Kensou B Portrait", 0x57120, 0x57140, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
    { L"EX Kensou C Portrait", 0x57140, 0x57160, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
    { L"EX Kensou D Portrait", 0x57160, 0x57180, indexKOFSprites_02UMExtras, indexKOF02UM_S_EXKensou },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_PORTRAITS[] =
{
    { L"Kyo-2 A Portrait", 0x57200, 0x57220, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
    { L"Kyo-2 B Portrait", 0x57220, 0x57240, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
    { L"Kyo-2 C Portrait", 0x57240, 0x57260, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
    { L"Kyo-2 D Portrait", 0x57260, 0x57280, indexKOFSprites_02UMExtras, indexKOF02UM_S_Kyo2 },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_PORTRAITS[] =
{
    { L"Goenitz A Portrait", 0x57300, 0x57320, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
    { L"Goenitz B Portrait", 0x57320, 0x57340, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
    { L"Goenitz C Portrait", 0x57340, 0x57360, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
    { L"Goenitz D Portrait", 0x57360, 0x57380, indexKOFSprites_02UMExtras, indexKOF02UM_S_Goenitz },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_PORTRAITS[] =
{
    { L"Krizalid A Portrait", 0x57400, 0x57420, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
    { L"Krizalid B Portrait", 0x57420, 0x57440, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
    { L"Krizalid C Portrait", 0x57440, 0x57460, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
    { L"Krizalid D Portrait", 0x57460, 0x57480, indexKOFSprites_02UMExtras, indexKOF02UM_S_Krizalid },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_PORTRAITS[] =
{
    { L"Clone Zero A Portrait", 0x57500, 0x57520, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
    { L"Clone Zero B Portrait", 0x57520, 0x57540, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
    { L"Clone Zero C Portrait", 0x57540, 0x57560, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
    { L"Clone Zero D Portrait", 0x57560, 0x57580, indexKOFSprites_02UMExtras, indexKOF02UM_S_CloneZero },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_PORTRAITS[] =
{
    { L"Original Zero A Portrait", 0x57600, 0x57620, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
    { L"Original Zero B Portrait", 0x57620, 0x57640, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
    { L"Original Zero C Portrait", 0x57640, 0x57660, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
    { L"Original Zero D Portrait", 0x57660, 0x57680, indexKOFSprites_02UMExtras, indexKOF02UM_S_OZero },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_PORTRAITS[] =
{
    { L"Igniz A Portrait", 0x57700, 0x57720, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
    { L"Igniz B Portrait", 0x57720, 0x57740, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
    { L"Igniz C Portrait", 0x57740, 0x57760, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
    { L"Igniz D Portrait", 0x57760, 0x57780, indexKOFSprites_02UMExtras, indexKOF02UM_S_Igniz },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_PORTRAITS[] =
{
    { L"O. Yashiro A Portrait", 0x57900, 0x57920, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
    { L"O. Yashiro B Portrait", 0x57920, 0x57940, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
    { L"O. Yashiro C Portrait", 0x57940, 0x57960, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
    { L"O. Yashiro D Portrait", 0x57960, 0x57980, indexKOFSprites_02UMExtras, indexKOF02UM_S_OYashiro },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_PORTRAITS[] =
{
    { L"O. Shermie A Portrait", 0x57a00, 0x57a20, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
    { L"O. Shermie B Portrait", 0x57a20, 0x57a40, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
    { L"O. Shermie C Portrait", 0x57a40, 0x57a60, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
    { L"O. Shermie D Portrait", 0x57a60, 0x57a80, indexKOFSprites_02UMExtras, indexKOF02UM_S_OShermie },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_PORTRAITS[] =
{
    { L"O. Chris A Portrait", 0x57b00, 0x57b20, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
    { L"O. Chris B Portrait", 0x57b20, 0x57b40, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
    { L"O. Chris C Portrait", 0x57b40, 0x57b60, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
    { L"O. Chris D Portrait", 0x57b60, 0x57b80, indexKOFSprites_02UMExtras, indexKOF02UM_S_OChris },
};

#pragma region Move Palettes

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_MOVES[] =
{
    { L"Andy Hishouken and Darkness Kick",      0x18800, 0x18820, indexKOFSprites_02UM_Andy, 0x3 },
    { L"Andy Geki Hishouken and Kunai Bullet",  0x18820, 0x18840, indexKOFSprites_02UM_Andy, 0x4 },
    { L"Andy Sho Ryu Dan Effects",              0x18880, 0x188a0, indexKOFSprites_02UM_Andy, 0x2 },
    { L"Andy SDM/MAX Fire",                     0x188a0, 0x188c0, indexKOFSprites_02UM_Andy, 0x12 },
    { L"Andy Zan Ei Comet Punch Main",          0x188c0, 0x188e0, indexKOFSprites_02UM_Andy, 0x10 },
    { L"Andy Zan Ei Comet Punch Extra",         0x188e0, 0x18900 },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_MOVES[] =
{
    { L"Athena SDM Orbs and Psycho Shoot",  0x19200, 0x19220, indexKOFSprites_02UM_Athena, 0x10 },
    { L"Athena Snowglobe MAX2 Super",       0x19220, 0x19240, indexKOFSprites_02UM_Athena, 0x0c },
    { L"Athena Bikini Outfit",              0x19240, 0x19260, indexKOFSprites_02UM_Athena, 0x09 },
    { L"Athena Schoolgirl Outfit",          0x19260, 0x19280, indexKOFSprites_02UM_Athena, 0x0b },
    { L"Athena Psycho Ball Hit",            0x19280, 0x192a0, indexKOFSprites_02UM_Athena, 0x03 },
    { L"Athena SDM Stuff and Portals",      0x192a0, 0x192c0, indexKOFSprites_02UM_Athena, 0x11 },
    { L"Athena MAX Princess Super Armor",   0x192c0, 0x192e0, indexKOFSprites_02UM_Athena, 0x0a },
    { L"Athena Psycho Reflector and SDM Finisher", 0x192e0, 0x19300 },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_MOVES[] =
{
    { L"Bao Psycho Ball Attack",            0x52700, 0x52720, indexKOFSprites_02UM_Bao, 0x02 },
    { L"Bao Psycho Ball Bounce and Crush",  0x52720, 0x52740, indexKOFSprites_02UM_Bao, 0x04 },
    { L"Bao Psycho Ball Reflect/Bound",     0x52740, 0x52760, indexKOFSprites_02UM_Bao, 0x03 },
    { L"Bao SDM Psycho Ball",               0x52760, 0x52780, indexKOFSprites_02UM_Bao, 0x11 },
    { L"Bao MAX Psycho Ball",               0x52780, 0x527a0, indexKOFSprites_02UM_Bao, 0x0b },
    { L"Bao Psycho Ball Attack II DX",      0x527a0, 0x527c0, indexKOFSprites_02UM_Bao, 0x0a },
    { L"Bao Psycho Ball Crush SDM",         0x527c0, 0x527e0, indexKOFSprites_02UM_Bao, 0x10 },
    { L"Bao Psycho Gravity MAX2",           0x527e0, 0x52800, indexKOFSprites_02UM_Bao, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_MOVES[] =
{
    { L"Benimaru Iaido/Lightning Kick",         0x18200, 0x18220, indexKOFSprites_02UM_Benimaru, 0x02 },
    { L"Benimaru Raikouken",                    0x18220, 0x18240, indexKOFSprites_02UM_Benimaru, 0x05 },
    { L"Benimaru Raijiken and Electrotrigger",  0x18240, 0x18260, indexKOFSprites_02UM_Benimaru, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_MOVES[] =
{
    { L"Billy Fire Wheel",       0x1b400, 0x1b420, indexKOFSprites_02UM_Billy, 0x03 },
    { L"Billy Fire Wheel Hit",   0x1b420, 0x1b440, indexKOFSprites_02UM_Billy, 0x04 },
    { L"Billy Fire Pillar",      0x1b4c0, 0x1b4e0, indexKOFSprites_02UM_Billy, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_MOVES[] =
{
    { L"Chang Drumming Iron Ball D Dust", 0x18e00, 0x18e20, indexKOFSprites_02UM_Chang, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_MOVES[] =
{
    { L"Chin Main Fire",    0x19600, 0x19620, indexKOFSprites_02UM_Chin, 0x02 },
    { L"Chin Extra Fire",   0x19640, 0x19660, indexKOFSprites_02UM_Chin, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_MOVES[] =
{
    { L"Choi Tornado Attacks",                  0x19000, 0x19020, indexKOFSprites_02UM_Choi, 0x02 },
    { L"Choi Tornado Ripper Lightning",         0x19040, 0x19060, indexKOFSprites_02UM_Choi, 0x11 },
    { L"Choi Rolling Charger Super Effects",    0x19060, 0x19080, indexKOFSprites_02UM_Choi, 0x10 },
    { L"Choi MAX2 Attack",                      0x19080, 0x190a0, indexKOFSprites_02UM_Choi, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_MOVES[] =
{
    { L"Chris MAX2 Transformation",         0x1ba00, 0x1ba20, indexKOFSprites_02UM_Chris, 0x04 },
    { L"Chris Super and Special Effects 1", 0x1ba20, 0x1ba40, indexKOFSprites_02UM_Chris, 0x02 },
    { L"Chris Super and Special Effects 2", 0x1ba40, 0x1ba60, indexKOFSprites_02UM_Chris, 0x02 },
    { L"Chris Chain Slide Touch Effects",   0x1ba60, 0x1ba80, indexKOFSprites_02UM_Chris, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_MOVES[] =
{
    { L"Orochi Chris Orochi Fire",              0x1d600, 0x1d620, indexKOFSprites_02UM_ChrisOChi, 0x02 },
    { L"Orochi Chris Idle Orochi Fire",         0x1d640, 0x1d660, indexKOFSprites_02UM_ChrisOChi, 0x03 },
    { L"Orochi Chris Ankoku Orochinagi Fire 1", 0x1d660, 0x1d680 },
    { L"Orochi Chris Ankoku Orochinagi Fire 2", 0x1d6a0, 0x1d6c0, indexKOFSprites_02UM_ChrisOChi, 0x04 },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_MOVES[] =
{
    { L"Clark MAX2 Dust", 0x19c00, 0x19c20, indexKOFSprites_02UM_Clark, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_MOVES[] =
{
    { L"Daimon MAX2 Text",                  0x18400, 0x18420, indexKOFSprites_02UM_Daimon, 0x0a },
    { L"Daimon MAX2 Ground Pound",          0x18420, 0x18440, indexKOFSprites_02UM_Daimon, 0x02 },
    { L"Daimon MAX2 Explosion Finisher",    0x18460, 0x18480, indexKOFSprites_02UM_Daimon, 0x09 },
    { L"Daimon MAX2 Dust Effects",          0x18480, 0x184a0, indexKOFSprites_02UM_Daimon, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_MOVES[] =
{
    { L"VS Igniz Win Stuff: Diana", 0x52a20, 0x52a40, indexKOFSprites_02UM_Foxy, 0x19 },
    { L"VS Igniz Win Stuff: Kula",  0x52a40, 0x52a60 },
    { L"VS Igniz Win Stuff: Foxy",  0x52a60, 0x52a80 },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_MOVES[] =
{
    { L"Geese Electricity and Special Moves",   0x52c00, 0x52c20, indexKOFSprites_02UM_Geese, 0x03 },
    { L"Geese Reppuuken Extras and MAX2",       0x52c20, 0x52c40, indexKOFSprites_02UM_Geese, 0x09 },
    { L"Geese SDM Raging Storm",                0x52c40, 0x52c60, indexKOFSprites_02UM_Geese, 0x10 },
    { L"Geese Reppuuken",                       0x52c60, 0x52c80, indexKOFSprites_02UM_Geese, 0x02  },
    { L"Geese Ra Sho Mon Attack",               0x52c80, 0x52ca0, indexKOFSprites_02UM_Geese, 0x0b },
    { L"Geese Ra Sho Mon Text",                 0x52ce0, 0x52d00, indexKOFSprites_02UM_Geese, 0x0a },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_MOVES[] =
{
    { L"Nightmare Geese Asura Whirlwind MAX Hit",           0x52d00, 0x52d20, indexKOFSprites_02UM_GeeseNM, 0x04 },
    { L"Nightmare Geese Reppuuken and Shippuuken",          0x52d20, 0x52d40, indexKOFSprites_02UM_GeeseNM, 0x02 },
    { L"Nightmare Geese Raging Storm",                      0x52d60, 0x52d80, indexKOFSprites_02UM_GeeseNM, 0x10 },
    { L"Nightmare Geese Idle and Shadow Smasher Flames",    0x52d80, 0x52da0, indexKOFSprites_02UM_GeeseNM, 0x19 },
    { L"Nightmare Geese Reppuuken and Shippuuken Effects",  0x52da0, 0x52dc0, indexKOFSprites_02UM_GeeseNM, 0x03 },
    { L"Nightmare Geese MAX Raging Storm Finisher",         0x52dc0, 0x52de0, indexKOFSprites_02UM_GeeseNM, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_MOVES[] =
{
    { L"Goenitz Wanhyo Special Effects",            0x53100, 0x53120, indexKOFSprites_02UM_Goenitz, 0x03 },
    { L"Goenitz Yonokaze and Super Tornados",       0x53120, 0x53140, indexKOFSprites_02UM_Goenitz, 0x19 },
    { L"Goenitz MAX Blood",                         0x53140, 0x53160, indexKOFSprites_02UM_Goenitz, 0x09 },
    { L"Goenitz Yamidoukoku and Hyouga Tornado",    0x53160, 0x53180, indexKOFSprites_02UM_Goenitz, 0x0a },
    { L"Goenitz Shin Aoi Rekka Finisher",           0x53180, 0x531a0, indexKOFSprites_02UM_Goenitz, 0x02 },
    { L"Goenitz Shin Aoi Rekka Attacks",            0x531a0, 0x531c0, indexKOFSprites_02UM_Goenitz, 0x02 },
    { L"Goenitz Fuujin Ibuki Tornado Spawn",        0x531c0, 0x531e0, indexKOFSprites_02UM_Goenitz, 0x0b },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_MOVES[] =
{
    { L"Heidern Cutter Move",                   0x52400, 0x52420, indexKOFSprites_02UM_Heidern, 0x03 },
    { L"Heidern MAX2 Hit",                      0x52420, 0x52440, indexKOFSprites_02UM_Heidern, 0x09 },
    { L"Heidern Blood Attack 1",                0x52440, 0x52460, indexKOFSprites_02UM_Heidern, 0x02 },
    { L"Heidern Final Bringer Blood Cell",      0x52460, 0x52480, indexKOFSprites_02UM_Heidern, 0x04 },
    { L"Heidern Final Bringer Blood Trail",     0x52480, 0x524a0, indexKOFSprites_02UM_Heidern, 0x02 },
    { L"Heidern SDM Final Bringer Blood Burst", 0x524a0, 0x524c0, indexKOFSprites_02UM_Heidern, 0x02 },
    { L"Heidern MAX Final Bringer Blood Burst", 0x524c0, 0x524e0 },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_MOVES[] =
{
    { L"Hinako Intro and MAX2 Start Dust",  0x52300, 0x52320, indexKOFSprites_02UM_Hinako, 0x19 },
    { L"Hinako MAX2 Main Attack",           0x52320, 0x52340, indexKOFSprites_02UM_Hinako, 0x0a },
    { L"Hinako MAX2 Dust",                  0x52340, 0x52360, indexKOFSprites_02UM_Hinako, 0x09 },
    { L"Hinako Gorinzuki Dust",             0x52380, 0x523a0, indexKOFSprites_02UM_Hinako, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_MOVES[] =
{
    { L"Igniz Special and Super Extras",    0x53500, 0x53520, indexKOFSprites_02UM_Igniz, 0x02 },
    { L"Igniz MAX2 Phase 1",                0x53520, 0x53540, indexKOFSprites_02UM_Igniz, 0x09 },
    { L"Igniz MAX2 Phase 2 Galaxy",         0x53540, 0x53560, indexKOFSprites_02UM_Igniz, 0x0a },
    { L"Igniz MAX2 Phase 3 Break",          0x53560, 0x53580, indexKOFSprites_02UM_Igniz, 0x0b },
    { L"Igniz MAX2 Phase 4 Shatter",        0x53580, 0x535a0, indexKOFSprites_02UM_Igniz, 0x0c },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_MOVES[] =
{
    { L"Iori Fireball and Flame Comber Fire",   0x1aa00, 0x1aa20, indexKOFSprites_02UM_Iori, 0x04 },
    { L"Iori Dark Thrust Dust",                 0x1aa20, 0x1aa40, indexKOFSprites_02UM_Iori, 0x06 },
    { L"Iori SDM Followup Attack",              0x1aa60, 0x1aa80, indexKOFSprites_02UM_Iori, 0x10 },
    { L"Iori VS Kyo Intro Stuff",               0x1aa80, 0x1aaa0, indexKOFSprites_02UM_Iori, 0x05 },
    { L"Iori Dark Thrust Fire",                 0x1aaa0, 0x1aac0, indexKOFSprites_02UM_Iori, 0x02 },
    { L"Iori MAX2 Fire Pillar",                 0x1aae0, 0x1ab00, indexKOFSprites_02UM_Iori, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_MOVES[] =
{
    { L"Jhun Haiki Geki Wave",              0x52800, 0x52820, indexKOFSprites_02UM_Jhun, 0x04 },
    { L"Jhun Soshuu Jin Attacks and Super", 0x52820, 0x52840, indexKOFSprites_02UM_Jhun, 0x02 },
    { L"Jhun Houou Ressou Kyaku Finisher",  0x52840, 0x52860, indexKOFSprites_02UM_Jhun, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_MOVES[] =
{
    { L"Joe Hurricane Upper",           0x18a00, 0x18a20, indexKOFSprites_02UM_Joe, 0x02 },
    { L"Joe SDM Screw Upper Startup",   0x18a20, 0x18a40, indexKOFSprites_02UM_Joe, 0x02 },
    { L"Joe Screw Upper SDM",           0x18a40, 0x18a60, indexKOFSprites_02UM_Joe, 0x11 },
    { L"Joe Kick Moves",                0x18a60, 0x18a80, indexKOFSprites_02UM_Joe, 0x10 },
    { L"Joe Hurricane Upper Effects",   0x18a80, 0x18aa0, indexKOFSprites_02UM_Joe, 0x10 },
    { L"Joe Screw Upper MAX",           0x18aa0, 0x18ac0, indexKOFSprites_02UM_Joe, 0x11 },
    { L"Joe Tiger Kick Effects",        0x18ac0, 0x18ae0, indexKOFSprites_02UM_Joe, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_MOVES[] =
{
    { L"K' Fire Stuff", 0x1bc00, 0x1bc20, indexKOFSprites_02UM_K, 0x02 },
    { L"K' MAX2 Flash", 0x1bce0, 0x1bd00, indexKOFSprites_02UM_K, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_MOVES[] =
{
    { L"Kasumi MAX2 Attack",        0x52b00, 0x52b20, indexKOFSprites_02UM_Kasumi, 0x09 },
    { L"Kasumi SDM Attack",         0x52b20, 0x52b40, indexKOFSprites_02UM_Kasumi, 0x10 },
    { L"Kasumi MAX2 Assist",        0x52b60, 0x52b80, indexKOFSprites_02UM_Kasumi, 0x19 },
    { L"Kasumi Kasane Ate Special", 0x52b80, 0x52ba0, indexKOFSprites_02UM_Kasumi, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_MOVES[] =
{
    { L"Kensou Psycho Ball",         0x19400, 0x19420, indexKOFSprites_02UM_Kensou, 0x02 },
    { L"Kensou Psycho Ball Hit",     0x19420, 0x19440, indexKOFSprites_02UM_Kensou, 0x03 },
    { L"Kensou MAX Burst",           0x19440, 0x19460, indexKOFSprites_02UM_Kensou, 0x10 },
    { L"Kensou MAX2 Powerup Orb",    0x19480, 0x194a0, indexKOFSprites_02UM_Kensou, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_MOVES[] =
{
    { L"EX Kensou MAX2 Super",        0x52f80, 0x52fa0, indexKOFSprites_02UM_KensouEX, 0x09 },
    { L"EX Kensou MAX2 Dust Effects", 0x52fa0, 0x52fc0, indexKOFSprites_02UM_KensouEX, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_MOVES[] =
{
    { L"Kim MAX2 Holy Fire", 0x18c00, 0x18c20, indexKOFSprites_02UM_Kim, 0x09 },
    { L"Kim MAX2 Phoenix",   0x18c20, 0x18c40, indexKOFSprites_02UM_Kim, 0x0a },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_MOVES[] =
{
    { L"King Venom Strike",      0x52100, 0x52120, indexKOFSprites_02UM_King, 0x02 },
    { L"King Venom Strike Hit",  0x52120, 0x52140, indexKOFSprites_02UM_King, 0x03 },
    { L"King MAX2 Effects",      0x52140, 0x52160, indexKOFSprites_02UM_King, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_MOVES[] =
{
    { L"Krizalid Rising Dark Moon Effects and MAX2",    0x53200, 0x53220, indexKOFSprites_02UM_Krizalid, 0x02 },
    { L"Krizalid Desperation Overdrive SDM Finisher",   0x53220, 0x53240, indexKOFSprites_02UM_Krizalid, 0x10 },
    { L"Krizalid Desperation Overdrive MAX Finisher",   0x53240, 0x53260, indexKOFSprites_02UM_Krizalid, 0x09 },
    { L"Krizalid Typhoon Rage",                         0x53260, 0x53280, indexKOFSprites_02UM_Krizalid, 0x03 },
    { L"Krizalid End of Heaven Finisher Fire",          0x53280, 0x532a0, indexKOFSprites_02UM_Krizalid, 0x12 },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_MOVES[] =
{
    { L"Kula Ice Attacks and Extras",   0x1c800, 0x1c820, indexKOFSprites_02UM_Kula, 0x03 },
    { L"Kula Block Effect",             0x1c820, 0x1c840, indexKOFSprites_02UM_Kula, 0x1e },
    { L"Kula Idle Animation Ice",       0x1c840, 0x1c860, indexKOFSprites_02UM_Kula, 0x1a },
    { L"Kula Diamond Breath",           0x1c860, 0x1c880, indexKOFSprites_02UM_Kula, 0x04 },
    { L"Kula Diamond Edge Super",       0x1c880, 0x1c8a0, indexKOFSprites_02UM_Kula, 0x05 },
    { L"Kula MAX Freeze Screen",        0x1c8a0, 0x1c8c0, indexKOFSprites_02UM_Kula, 0x09 },
    { L"Kula Candy Stuff",              0x1c8e0, 0x1c900, indexKOFSprites_02UM_Kula, 0x1d },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_MOVES[] =
{
    { L"KUSANAGI Orochinagi Extra Fire",            0x1d000, 0x1d020, indexKOFSprites_02UM_Kusanagi, 0x19 },
    { L"KUSANAGI Orochinagi Main Fire Attack",      0x1d020, 0x1d040, indexKOFSprites_02UM_Kusanagi, 0x05 },
    { L"KUSANAGI Dark Thrust and Fire Ball Fire",   0x1d040, 0x1d060, indexKOFSprites_02UM_Kusanagi, 0x05 },
    { L"KUSANAGI Dark Thrust Maint",                0x1d0a0, 0x1d0c0, indexKOFSprites_02UM_Kusanagi, 0x02 },
    { L"KUSANAGI Orochinagi Extra Fire Attack",     0x1d0c0, 0x1d0e0, indexKOFSprites_02UM_Kusanagi, 0x06 },
    { L"KUSANAGI MAX2 Final Showdown Fire Pillar",  0x1d0e0, 0x1d100, indexKOFSprites_02UM_Kusanagi, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_MOVES[] =
{
    { L"Kyo Intro and Orochinagi Fire", 0x18000, 0x18020, indexKOFSprites_02UM_KyoKusa, 0x19 },
    { L"Kyo General Fire Stuff",        0x18020, 0x18040, indexKOFSprites_02UM_KyoKusa, 0x10 },
    { L"Kyo Fire Ball/DP Fire",         0x18040, 0x18060, indexKOFSprites_02UM_KyoKusa, 0x09 },
    { L"Kyo Orochinagi Fire Extra",     0x180c0, 0x180e0, indexKOFSprites_02UM_KyoKusa, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_MOVES[] =
{
    { L"Kyo-1 Intro and Orochinagi Extras", 0x52900, 0x52920, indexKOFSprites_02UM_Kyo1, 0x19 },
    { L"Kyo-1 Super Move Fire",         0x52920, 0x52940, indexKOFSprites_02UM_Kyo1, 0x07 },
    { L"Kyo-1 Dark Thrust Extra Fire",  0x52940, 0x52960, indexKOFSprites_02UM_Kyo1, 0x04 },
    { L"Kyo-1 Orochinagi Extra Fire",   0x52980, 0x529a0, indexKOFSprites_02UM_Kyo1, 0x06 },
    { L"Kyo-1 Dark Thrust Main Fire",   0x529e0, 0x52a00, indexKOFSprites_02UM_Kyo1, 0x05 },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_MOVES[] =
{
    { L"Kyo-2 MAX2 and Intro Fire",         0x53000, 0x53020, indexKOFSprites_02UM_Kyo2, 0x19 },
    { L"Kyo-2 Rekka Fire",                  0x53020, 0x53040 },
    { L"Kyo-2 Fire Ball and SDM Flames",    0x53040, 0x53060, indexKOFSprites_02UM_Kyo2, 0x10 },
    { L"Kyo-2 Final Showdown Fire Pillar",  0x530c0, 0x530e0, indexKOFSprites_02UM_Kyo2, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_MOVES[] =
{
    { L"Leona X-Caliber and Ground Sabre",  0x19800, 0x19820, indexKOFSprites_02UM_Leona, 0x03 },
    { L"Leona Voltaic Launcher",            0x19820, 0x19840, indexKOFSprites_02UM_Leona, 0x02 },
    { L"Leona V-Slasher",                   0x19840, 0x19860, indexKOFSprites_02UM_Leona, 0x07 },
    { L"Leona Moon Slasher",                0x19860, 0x19880, indexKOFSprites_02UM_Leona, 0x04 },
    { L"Leona Slasher Move Extras",         0x19880, 0x198a0, indexKOFSprites_02UM_Leona, 0x05 },
    { L"Leona Revolver Spark",              0x198a0, 0x198c0, indexKOFSprites_02UM_Leona, 0x11 },
    { L"Leona Ring Bomb",                   0x198c0, 0x198e0, indexKOFSprites_02UM_Leona, 0x1a },
    { L"Leona Grateful Dead Dust",          0x198e0, 0x19900, indexKOFSprites_02UM_Leona, 0x10 },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_MOVES[] =
{
    { L"Lin Resetsu Special Effects",   0x52500, 0x52520, indexKOFSprites_02UM_Lin, 0x05 },
    { L"Lin Yougou SDM Effect",         0x52520, 0x52540, indexKOFSprites_02UM_Lin, 0x1b },
    { L"Lin Intro and MAX2 Stuff",      0x52540, 0x52560, indexKOFSprites_02UM_Lin, 0x19 },
    { L"Lin Kasumi Special C",          0x52560, 0x52580, indexKOFSprites_02UM_Lin, 0x03 },
    { L"Lin Kasumi Special A",          0x52580, 0x525a0, indexKOFSprites_02UM_Lin, 0x04 },
    { L"Lin Arm Attack",                0x525a0, 0x525c0, indexKOFSprites_02UM_Lin, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_MOVES[] =
{
    { L"Mai MAX2 Fire",                                 0x1a400, 0x1a420, indexKOFSprites_02UM_Mai, 0x02 },
    { L"Mai Ryu En Bu Fire",                            0x1a440, 0x1a460, indexKOFSprites_02UM_Mai, 0x04 },
    { L"Mai MAX2 Hold C Wedding Dress and Fan Extra",   0x1a460, 0x1a480, indexKOFSprites_02UM_Mai, 0x1c },
    { L"Mai Sakura Flowers and SDM/MAX Fire",           0x1a4a0, 0x1a4c0, indexKOFSprites_02UM_Mai, 0x1b },
    { L"Mai MAX2 Fire Pillar",                          0x1a4e0, 0x1a500, indexKOFSprites_02UM_Mai, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_MOVES[] =
{
    { L"Blue Mary Stun Fang Followup",      0x1b200, 0x1b220, indexKOFSprites_02UM_BlueMary, 0x03 },
    { L"Blue Mary M.Splash Rose Finisher",  0x1b220, 0x1b240, indexKOFSprites_02UM_BlueMary, 0x02 },
    { L"Blue Mary Rose Stuff",              0x1b240, 0x1b260, indexKOFSprites_02UM_BlueMary, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_MOVES[] =
{
    { L"Mature Ebony Tears and SDM/MAX Finisher",   0x1ac00, 0x1ac20, indexKOFSprites_02UM_Mature, 0x02 },
    { L"Mature Special Attack Effects",             0x1ac20, 0x1ac40, indexKOFSprites_02UM_Mature, 0x02 },
    { L"Mature SDM Heaven's Gate",                  0x1ac40, 0x1ac60, indexKOFSprites_02UM_Mature, 0x10 },
    { L"Mature MAX Heaven's Gate",                  0x1aca0, 0x1acc0, indexKOFSprites_02UM_Mature, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_MOVES[] =
{
    { L"Maxima Bunker Buster Dust",             0x1be00, 0x1be20, indexKOFSprites_02UM_Maxima, 0x1a },
    { L"Maxima Bunker Buster Effect",           0x1be20, 0x1be40, indexKOFSprites_02UM_Maxima, 0x02 },
    { L"Maxima Vapor Cannon Dust",              0x1be40, 0x1be60, indexKOFSprites_02UM_Maxima, 0x05 },
    { L"Maxima Intro Stuff",                    0x1be80, 0x1bea0, indexKOFSprites_02UM_Maxima, 0x19 },
    { L"Maxima Grab Special and MAX Sparks",    0x1bea0, 0x1bec0, indexKOFSprites_02UM_Maxima, 0x04 },
    { L"Maxima M2 Maxima Beam",                 0x1bec0, 0x1bee0, indexKOFSprites_02UM_Maxima, 0x03 },
    { L"Maxima MAX2 Laser",                     0x1bee0, 0x1bf00, indexKOFSprites_02UM_Maxima, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_MOVES[] =
{
    { L"May Lee Disposition Frog MAX Attack",   0x1a800, 0x1a820, indexKOFSprites_02UM_MayLee, 0x09 },
    { L"May Lee Shining Thunder Blow Effects",  0x1a820, 0x1a840, indexKOFSprites_02UM_MayLee, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_MOVES[] =
{
    { L"Nameless Special and MAX2 Fire",    0x1ca00, 0x1ca20, indexKOFSprites_02UM_Nameless, 0x02 },
    { L"Nameless Rasen Dust",               0x1ca20, 0x1ca40, indexKOFSprites_02UM_Nameless, 0x0a },
    { L"Nameless Shakuhou Extra Fire",      0x1ca40, 0x1ca60, indexKOFSprites_02UM_Nameless, 0x10 },
    { L"Nameless Isolde Projection",        0x1ca60, 0x1ca80, indexKOFSprites_02UM_Nameless, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_MOVES[] =
{
    // It's Reppuken for KOF02UM, it's Reppuken and Win for 02 (NEOGEO)
    { L"Omega Rugal Reppuken",                          0x1ce00, 0x1ce20, indexKOFSprites_02UM_OmegaRugal, 0x07 },
    { L"Omega Rugal Kaizer Wave",                       0x1ce20, 0x1ce40, indexKOFSprites_02UM_OmegaRugal, 0x05 },
    { L"Omega Rugal Kaizer Wave Hit",                   0x1ce40, 0x1ce60, indexKOFSprites_02UM_OmegaRugal, 0x06 },
    { L"Omega Rugal Dark Barrier",                      0x1ce60, 0x1ce80, indexKOFSprites_02UM_OmegaRugal, 0x02 },
    { L"Omega Rugal Genocide Cutter Effect 1",          0x1ce80, 0x1cea0, indexKOFSprites_02UM_OmegaRugal, 0x04 },
    { L"Omega Rugal Genocide Cutter Effect 2",          0x1cea0, 0x1cec0, indexKOFSprites_02UM_OmegaRugal, 0x04 },
    { L"Omega Rugal Divine Arrow and Gravity Smash",    0x1cec0, 0x1cee0, indexKOFSprites_02UM_OmegaRugal, 0x03 },
    { L"Omega Rugal Gigantic Pressure and Intro/Win Stuff", 0x1cee0, 0x1cf00, indexKOFSprites_02UM_OmegaRugal, 0x1a },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_MOVES[] =
{
    { L"Zero White Destroyer Spirit Supers",    0x53400, 0x53420, indexKOFSprites_02UM_ZeroOG, 0x02 },
    { L"Zero MAX2 Finisher Effects",            0x534a0, 0x534c0 },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_MOVES[] =
{
    { L"Ralf MAX2 Super Dust", 0x19a00, 0x19a20, indexKOFSprites_02UM_Ralf, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_MOVES[] =
{
    { L"Ramon VS Vanessa Intro and Flower", 0x1c600, 0x1c620, indexKOFSprites_02UM_Ramon, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_MOVES[] =
{
    { L"Robert Hao Shokouken",       0x1a000, 0x1a020, indexKOFSprites_02UM_Robert, 0x04 },
    { L"Robert MAX2 Tiger Finisher and Super Extras", 0x1a020, 0x1a040, indexKOFSprites_02UM_Robert, 0x05 },
    { L"Robert Projectile Hit",      0x1a0a0, 0x1a0c0, indexKOFSprites_02UM_Robert, 0x03 },
    { L"Robert Projectile",          0x1a0e0, 0x1a100, indexKOFSprites_02UM_Robert, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_MOVES[] =
{
    { L"EX Robert Hao Shokouken and MAX2 Finisher", 0x52e00, 0x52e20, indexKOFSprites_02UM_RobertEX, 0x04 },
    { L"EX Robert Hao Shokouken Hit",    0x52e20, 0x52e40, indexKOFSprites_02UM_RobertEX, 0x05 },
    { L"EX Robert Projectile Hit",       0x52ea0, 0x52ec0, indexKOFSprites_02UM_RobertEX, 0x03 },
    { L"EX Robert Projectile",           0x52ee0, 0x52f00, indexKOFSprites_02UM_RobertEX, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_MOVES[] =
{
    { L"Ryo Special and Super Effects", 0x19e00, 0x19e20, indexKOFSprites_02UM_Ryo, 0x02 },
    { L"Ryo Hao Shokouken Hit",         0x19e20, 0x19e40, indexKOFSprites_02UM_Ryo, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_MOVES[] =
{
    { L"Seth Rising Sun",   0x1c400, 0x1c420, indexKOFSprites_02UM_Seth, 0x02 },
    { L"Seth SDM Dust",     0x1c420, 0x1c440, indexKOFSprites_02UM_Seth, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_MOVES[] =
{
    { L"Orochi Shermie Shukumei-G.-Shinshi Super",      0x1d400, 0x1d420, indexKOFSprites_02UM_ShermieOChi, 0x05 },
    { L"Orochi Shermie Idle Lightning and Kiss",        0x1d420, 0x1d440, indexKOFSprites_02UM_ShermieOChi, 0x07 },
    { L"Orochi Shermie Lightning",                      0x1d440, 0x1d460, indexKOFSprites_02UM_ShermieOChi, 0x04 },
    { L"Orochi Shermie SDM Raikouken",                  0x1d460, 0x1d480, indexKOFSprites_02UM_ShermieOChi, 0x10 },
    { L"Orochi Shermie MAX Raikouken",                  0x1d480, 0x1d4a0, indexKOFSprites_02UM_ShermieOChi, 0x10 },
    { L"Orochi Shermie Takeru Mikazuchi Lightning",     0x1d4a0, 0x1d4c0, indexKOFSprites_02UM_ShermieOChi, 0x06 },
    { L"Orochi Shermie Special Lightning Effects",      0x1d4c0, 0x1d4e0, indexKOFSprites_02UM_ShermieOChi, 0x02 },
    { L"Orochi Shermie Yatanagi no Muchi Hit",          0x1d4e0, 0x1d500, indexKOFSprites_02UM_ShermieOChi, 0x03 },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_MOVES[] =
{
    { L"Takuma Kouken",             0x1a200, 0x1a220, indexKOFSprites_02UM_Takuma, 0x03 },
    { L"Takuma Kouken Hit",         0x1a220, 0x1a240, indexKOFSprites_02UM_Takuma, 0x04 },
    { L"Takuma MAX2 Dust Effects",  0x1a2e0, 0x1a300, indexKOFSprites_02UM_Takuma, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_MOVES[] =
{
    { L"EX Takuma Kouken",              0x52600, 0x52620, indexKOFSprites_02UM_TakumaEX, 0x03 },
    { L"EX Takuma Lion Killer MAX2",    0x52620, 0x52640, indexKOFSprites_02UM_TakumaEX, 0x09 },
    { L"EX Takuma Kouken Hit Effects",  0x52640, 0x52660, indexKOFSprites_02UM_TakumaEX, 0x04 },
    { L"EX Takuma Hao Shokouken",       0x52680, 0x526a0, indexKOFSprites_02UM_TakumaEX, 0x02 },
    { L"EX Takuma Hao Shokouken Hit",   0x526a0, 0x526c0, indexKOFSprites_02UM_TakumaEX, 0x05 },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_MOVES[] =
{
    { L"Terry Burn Knuckle Quick Burning Effects",  0x18600, 0x18620, indexKOFSprites_02UM_Terry, 0x04 },
    { L"Terry Power Wave and Dunk",                 0x18620, 0x18640, indexKOFSprites_02UM_Terry, 0x02 },
    { L"Terry Power Geyser and P.Wave Hit",         0x18640, 0x18660, indexKOFSprites_02UM_Terry, 0x03 },
    { L"Terry MAX2 Super",                          0x18660, 0x18680, indexKOFSprites_02UM_Terry, 0x09 },
    { L"Terry Round Wave",                          0x186e0, 0x18700, indexKOFSprites_02UM_Terry, 0x05 },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_MOVES[] =
{
    { L"Vanessa Gaea Gear MAX2",    0x1c200, 0x1c220, indexKOFSprites_02UM_Vanessa, 0x09 },
    { L"Vanessa Forbidden Eagle",   0x1c220, 0x1c240, indexKOFSprites_02UM_Vanessa, 0x03 },
    { L"Vanessa MAX2 Dust",         0x1c240, 0x1c260, indexKOFSprites_02UM_Vanessa, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_MOVES[] =
{
    { L"Vice Outrage and Ravenous", 0x1ae00, 0x1ae20, indexKOFSprites_02UM_Vice, 0x02 },
    { L"Vice SDM Effects",          0x1ae40, 0x1ae60, indexKOFSprites_02UM_Vice, 0x10 },
    { L"Vice MAX Effects",          0x1ae60, 0x1ae80, indexKOFSprites_02UM_Vice, 0x0a },
    { L"Vice MAX2 Super Effects",   0x1ae80, 0x1aea0, indexKOFSprites_02UM_Vice, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_MOVES[] =
{
    { L"Whip Desert Eagle Dust",    0x1c000, 0x1c020, indexKOFSprites_02UM_Whip, 0x19 },
    { L"Whip Sonic Slaughter Dust", 0x1c040, 0x1c060, indexKOFSprites_02UM_Whip, 0x02 },
    { L"Whip MAX2 Gunblast",        0x1c060, 0x1c080, indexKOFSprites_02UM_Whip, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_MOVES[] =
{
    { L"Xiangfei Special Move Dust",                0x52200, 0x52220, indexKOFSprites_02UM_Xiangfei, 0x04 },
    { L"Xiangfei Ma Zin Ga Dust",                   0x52220, 0x52240, indexKOFSprites_02UM_Xiangfei, 0x03 },
    { L"Xiangfei Nanba Special Move",               0x52240, 0x52260, indexKOFSprites_02UM_Xiangfei, 0x05 },
    { L"Xiangfei Ma Zin Ga Special Effects",        0x52260, 0x52280, indexKOFSprites_02UM_Xiangfei, 0x06 },
    { L"Xiangfei Dai Tetsu Jin Dust",               0x52280, 0x522a0, indexKOFSprites_02UM_Xiangfei, 0x02 },
    { L"Xiangfei Ma Zin Ga Combo Meter",            0x522a0, 0x522c0, indexKOFSprites_02UM_Xiangfei, 0x19 },
    { L"Xiangfei Ma Zin Ga MAX Combo Meter Flash",  0x522e0, 0x52300, indexKOFSprites_02UM_Xiangfei, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_MOVES[] =
{
    { L"Yamazaki Drill Super Main Attack",  0x1b000, 0x1b020, indexKOFSprites_02UM_Yamazaki, 0x03 },
    { L"Yamazaki Special Move Sand",        0x1b020, 0x1b040, indexKOFSprites_02UM_Yamazaki, 0x02 },
    { L"Yamazaki Double Return Projectile", 0x1b0a0, 0x1b0c0, indexKOFSprites_02UM_Yamazaki, 0x04 },
    { L"Yamazaki Double Return Hit",        0x1b0c0, 0x1b0e0, indexKOFSprites_02UM_Yamazaki, 0x05 },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_MOVES[] =
{
    { L"Yashiro Special Move Dust", 0x1b620, 0x1b640, indexKOFSprites_02UM_Yashiro, 0x02 },
    { L"Yashiro SDM Effects",       0x1b660, 0x1b680, indexKOFSprites_02UM_Yashiro, 0x10 },
    { L"Yashiro MAX Effects",       0x1b680, 0x1b6a0, indexKOFSprites_02UM_Yashiro, 0x10 },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_MOVES[] =
{
    { L"Orochi Yashiro Special and Super Effects",  0x1d200, 0x1d220, indexKOFSprites_02UM_YashiroOChi, 0x03 },
    { L"Orochi Yashiro Araburu Daichi Pillar",      0x1d240, 0x1d260, indexKOFSprites_02UM_YashiroOChi, 0x09 },
    { L"Orochi Yashiro Unaru Daichi Effects",       0x1d2a0, 0x1d2c0, indexKOFSprites_02UM_YashiroOChi, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_MOVES[] =
{
    { L"Yuri Kouken",                   0x1a600, 0x1a620, indexKOFSprites_02UM_Yuri, 0x03 },
    { L"Yuri Cypher",                   0x1a640, 0x1a660, indexKOFSprites_02UM_Yuri, 0x02 },
    { L"Yuri Raiouken",                 0x1a6a0, 0x1a6c0, indexKOFSprites_02UM_Yuri, 0x05 },
    { L"Yuri MAX Chou Upper Effects",   0x1a6c0, 0x1a6e0, indexKOFSprites_02UM_Yuri, 0x10 },
    { L"Yuri Hao Shokouken Stuff",      0x1a6e0, 0x1a700, indexKOFSprites_02UM_Yuri, 0x04 },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_MOVES[] =
{
    { L"Clone Zero Flashing Flame Fortress Shadow",             0x53300, 0x53320, indexKOFSprites_02UM_CloneZero, 0x03 },
    { L"Clone Zero Satan's Red Rage Fire",                      0x53320, 0x53340, indexKOFSprites_02UM_CloneZero, 0x02 },
    { L"Clone Zero White Destroyer Spirit Super Void",          0x53340, 0x53360, indexKOFSprites_02UM_CloneZero, 0x11 },
    { L"Clone Zero White Destroyer Spirit Super Projectiles",   0x53360, 0x53380, indexKOFSprites_02UM_CloneZero, 0x10 },
};

#pragma endregion Move Palettes

#pragma region Character Palettes (Auto-Generated)
// Everything below is data generated by the table above.

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_A[] =
{
    { L"Kyo A", 0x0002000, 0x0002020, indexKOFSprites_02UM_KyoKusa },
    { L"A - MAX2 Fire Palette", 0x0002020, 0x0002040, indexKOFSprites_02UM_KyoKusa, 0x02 },
    { L"A - MAX Orochinagi Fire", 0x0002040, 0x0002060, indexKOFSprites_02UM_KyoKusa, 0x03 },
    { L"A - Electric Shock Effect", 0x0002060, 0x0002080, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"A - MAX Flash", 0x0002080, 0x00020a0, indexKOFSprites_02UM_KyoKusa, 0x08 },
    { L"A - Shingo Intro Stuff", 0x00020a0, 0x00020c0, indexKOFSprites_02UM_KyoKusa, 0x19 },
    { L"A - Soul Palette", 0x00020c0, 0x00020e0, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00020e0, 0x0002100, indexKOFSprites_02UM_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_B[] =
{
    { L"Kyo B", 0x0002200, 0x0002220, indexKOFSprites_02UM_KyoKusa },
    { L"B - MAX2 Fire Palette", 0x0002220, 0x0002240, indexKOFSprites_02UM_KyoKusa, 0x02 },
    { L"B - MAX Orochinagi Fire", 0x0002240, 0x0002260, indexKOFSprites_02UM_KyoKusa, 0x03 },
    { L"B - Electric Shock Effect", 0x0002260, 0x0002280, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"B - MAX Flash", 0x0002280, 0x00022a0, indexKOFSprites_02UM_KyoKusa, 0x08 },
    { L"B - Shingo Intro Stuff", 0x00022a0, 0x00022c0, indexKOFSprites_02UM_KyoKusa, 0x19 },
    { L"B - Soul Palette", 0x00022c0, 0x00022e0, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00022e0, 0x0002300, indexKOFSprites_02UM_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_C[] =
{
    { L"Kyo C", 0x0002400, 0x0002420, indexKOFSprites_02UM_KyoKusa },
    { L"C - MAX2 Fire Palette", 0x0002420, 0x0002440, indexKOFSprites_02UM_KyoKusa, 0x02 },
    { L"C - MAX Orochinagi Fire", 0x0002440, 0x0002460, indexKOFSprites_02UM_KyoKusa, 0x03 },
    { L"C - Electric Shock Effect", 0x0002460, 0x0002480, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"C - MAX Flash", 0x0002480, 0x00024a0, indexKOFSprites_02UM_KyoKusa, 0x08 },
    { L"C - Shingo Intro Stuff", 0x00024a0, 0x00024c0, indexKOFSprites_02UM_KyoKusa, 0x19 },
    { L"C - Soul Palette", 0x00024c0, 0x00024e0, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00024e0, 0x0002500, indexKOFSprites_02UM_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO_PALETTES_D[] =
{
    { L"Kyo D", 0x0002600, 0x0002620, indexKOFSprites_02UM_KyoKusa },
    { L"D - MAX2 Fire Palette", 0x0002620, 0x0002640, indexKOFSprites_02UM_KyoKusa, 0x02 },
    { L"D - MAX Orochinagi Fire", 0x0002640, 0x0002660, indexKOFSprites_02UM_KyoKusa, 0x03 },
    { L"D - Electric Shock Effect", 0x0002660, 0x0002680, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"D - MAX Flash", 0x0002680, 0x00026a0, indexKOFSprites_02UM_KyoKusa, 0x08 },
    { L"D - Shingo Intro Stuff", 0x00026a0, 0x00026c0, indexKOFSprites_02UM_KyoKusa, 0x19 },
    { L"D - Soul Palette", 0x00026c0, 0x00026e0, indexKOFSprites_02UM_KyoKusa, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00026e0, 0x0002700, indexKOFSprites_02UM_KyoKusa, 0x00 },
};

const sDescTreeNode KOF02UM_S_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_A, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_B, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_C, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_D, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KYO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_A[] =
{
    { L"Benimaru A", 0x0002800, 0x0002820, indexKOFSprites_02UM_Benimaru },
    { L"A - Raijiken Flash", 0x0002820, 0x0002840, indexKOFSprites_02UM_Benimaru, 0x04 },
    { L"A - Phantom Hurricane Effects", 0x0002840, 0x0002860, indexKOFSprites_02UM_Benimaru, 0x10 },
    { L"A - Electric Shock Effect", 0x0002860, 0x0002880, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"A - MAX Flash", 0x0002880, 0x00028a0, indexKOFSprites_02UM_Benimaru, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00028a0, 0x00028c0, indexKOFSprites_02UM_Benimaru, 0x00 },
    { L"A - Soul Palette", 0x00028c0, 0x00028e0, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00028e0, 0x0002900, indexKOFSprites_02UM_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_B[] =
{
    { L"Benimaru B", 0x0002a00, 0x0002a20, indexKOFSprites_02UM_Benimaru },
    { L"B - Raijiken Flash", 0x0002a20, 0x0002a40, indexKOFSprites_02UM_Benimaru, 0x04 },
    { L"B - Phantom Hurricane Effects", 0x0002a40, 0x0002a60, indexKOFSprites_02UM_Benimaru, 0x10 },
    { L"B - Electric Shock Effect", 0x0002a60, 0x0002a80, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"B - MAX Flash", 0x0002a80, 0x0002aa0, indexKOFSprites_02UM_Benimaru, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0002aa0, 0x0002ac0, indexKOFSprites_02UM_Benimaru, 0x00 },
    { L"B - Soul Palette", 0x0002ac0, 0x0002ae0, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0002ae0, 0x0002b00, indexKOFSprites_02UM_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_C[] =
{
    { L"Benimaru C", 0x0002c00, 0x0002c20, indexKOFSprites_02UM_Benimaru },
    { L"C - Raijiken Flash", 0x0002c20, 0x0002c40, indexKOFSprites_02UM_Benimaru, 0x04 },
    { L"C - Phantom Hurricane Effects", 0x0002c40, 0x0002c60, indexKOFSprites_02UM_Benimaru, 0x10 },
    { L"C - Electric Shock Effect", 0x0002c60, 0x0002c80, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"C - MAX Flash", 0x0002c80, 0x0002ca0, indexKOFSprites_02UM_Benimaru, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0002ca0, 0x0002cc0, indexKOFSprites_02UM_Benimaru, 0x00 },
    { L"C - Soul Palette", 0x0002cc0, 0x0002ce0, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0002ce0, 0x0002d00, indexKOFSprites_02UM_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BENIMARU_PALETTES_D[] =
{
    { L"Benimaru D", 0x0002e00, 0x0002e20, indexKOFSprites_02UM_Benimaru },
    { L"D - Raijiken Flash", 0x0002e20, 0x0002e40, indexKOFSprites_02UM_Benimaru, 0x04 },
    { L"D - Phantom Hurricane Effects", 0x0002e40, 0x0002e60, indexKOFSprites_02UM_Benimaru, 0x10 },
    { L"D - Electric Shock Effect", 0x0002e60, 0x0002e80, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"D - MAX Flash", 0x0002e80, 0x0002ea0, indexKOFSprites_02UM_Benimaru, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0002ea0, 0x0002ec0, indexKOFSprites_02UM_Benimaru, 0x00 },
    { L"D - Soul Palette", 0x0002ec0, 0x0002ee0, indexKOFSprites_02UM_Benimaru, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0002ee0, 0x0002f00, indexKOFSprites_02UM_Benimaru, 0x00 },
};

const sDescTreeNode KOF02UM_S_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_A, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_B, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_C, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_D, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BENIMARU_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_A[] =
{
    { L"Daimon A", 0x0003000, 0x0003020, indexKOFSprites_02UM_Daimon },
    { L"A - Hidden Super Desperation Move 1", 0x0003020, 0x0003040, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0003040, 0x0003060, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"A - Electric Shock Effect", 0x0003060, 0x0003080, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"A - MAX Flash", 0x0003080, 0x00030a0, indexKOFSprites_02UM_Daimon, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00030a0, 0x00030c0, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"A - Soul Palette", 0x00030c0, 0x00030e0, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00030e0, 0x0003100, indexKOFSprites_02UM_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_B[] =
{
    { L"Daimon B", 0x0003200, 0x0003220, indexKOFSprites_02UM_Daimon },
    { L"B - Hidden Super Desperation Move 1", 0x0003220, 0x0003240, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0003240, 0x0003260, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"B - Electric Shock Effect", 0x0003260, 0x0003280, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"B - MAX Flash", 0x0003280, 0x00032a0, indexKOFSprites_02UM_Daimon, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00032a0, 0x00032c0, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"B - Soul Palette", 0x00032c0, 0x00032e0, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00032e0, 0x0003300, indexKOFSprites_02UM_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_C[] =
{
    { L"Daimon C", 0x0003400, 0x0003420, indexKOFSprites_02UM_Daimon },
    { L"C - Hidden Super Desperation Move 1", 0x0003420, 0x0003440, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0003440, 0x0003460, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"C - Electric Shock Effect", 0x0003460, 0x0003480, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"C - MAX Flash", 0x0003480, 0x00034a0, indexKOFSprites_02UM_Daimon, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00034a0, 0x00034c0, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"C - Soul Palette", 0x00034c0, 0x00034e0, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00034e0, 0x0003500, indexKOFSprites_02UM_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_DAIMON_PALETTES_D[] =
{
    { L"Daimon D", 0x0003600, 0x0003620, indexKOFSprites_02UM_Daimon },
    { L"D - Hidden Super Desperation Move 1", 0x0003620, 0x0003640, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0003640, 0x0003660, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"D - Electric Shock Effect", 0x0003660, 0x0003680, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"D - MAX Flash", 0x0003680, 0x00036a0, indexKOFSprites_02UM_Daimon, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00036a0, 0x00036c0, indexKOFSprites_02UM_Daimon, 0x00 },
    { L"D - Soul Palette", 0x00036c0, 0x00036e0, indexKOFSprites_02UM_Daimon, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00036e0, 0x0003700, indexKOFSprites_02UM_Daimon, 0x00 },
};

const sDescTreeNode KOF02UM_S_DAIMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_A, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_B, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_C, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_D, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_DAIMON_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_A[] =
{
    { L"Terry A", 0x0003800, 0x0003820, indexKOFSprites_02UM_Terry },
    { L"A - Terry and Child Winpose", 0x0003820, 0x0003840, indexKOFSprites_02UM_Terry, 0x19 },
    { L"A - MAX2 Trail", 0x0003840, 0x0003860, indexKOFSprites_02UM_Terry, 0x0a },
    { L"A - Electric Shock Effect", 0x0003860, 0x0003880, indexKOFSprites_02UM_Terry, 0x18 },
    { L"A - MAX Flash", 0x0003880, 0x00038a0, indexKOFSprites_02UM_Terry, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00038a0, 0x00038c0, indexKOFSprites_02UM_Terry, 0x00 },
    { L"A - Soul Palette", 0x00038c0, 0x00038e0, indexKOFSprites_02UM_Terry, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00038e0, 0x0003900, indexKOFSprites_02UM_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_B[] =
{
    { L"Terry B", 0x0003a00, 0x0003a20, indexKOFSprites_02UM_Terry },
    { L"B - Terry and Child Winpose", 0x0003a20, 0x0003a40, indexKOFSprites_02UM_Terry, 0x19 },
    { L"B - MAX2 Trail", 0x0003a40, 0x0003a60, indexKOFSprites_02UM_Terry, 0x0a },
    { L"B - Electric Shock Effect", 0x0003a60, 0x0003a80, indexKOFSprites_02UM_Terry, 0x18 },
    { L"B - MAX Flash", 0x0003a80, 0x0003aa0, indexKOFSprites_02UM_Terry, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0003aa0, 0x0003ac0, indexKOFSprites_02UM_Terry, 0x00 },
    { L"B - Soul Palette", 0x0003ac0, 0x0003ae0, indexKOFSprites_02UM_Terry, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0003ae0, 0x0003b00, indexKOFSprites_02UM_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_C[] =
{
    { L"Terry C", 0x0003c00, 0x0003c20, indexKOFSprites_02UM_Terry },
    { L"C - Terry and Child Winpose", 0x0003c20, 0x0003c40, indexKOFSprites_02UM_Terry, 0x19 },
    { L"C - MAX2 Trail", 0x0003c40, 0x0003c60, indexKOFSprites_02UM_Terry, 0x0a },
    { L"C - Electric Shock Effect", 0x0003c60, 0x0003c80, indexKOFSprites_02UM_Terry, 0x18 },
    { L"C - MAX Flash", 0x0003c80, 0x0003ca0, indexKOFSprites_02UM_Terry, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0003ca0, 0x0003cc0, indexKOFSprites_02UM_Terry, 0x00 },
    { L"C - Soul Palette", 0x0003cc0, 0x0003ce0, indexKOFSprites_02UM_Terry, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0003ce0, 0x0003d00, indexKOFSprites_02UM_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_TERRY_PALETTES_D[] =
{
    { L"Terry D", 0x0003e00, 0x0003e20, indexKOFSprites_02UM_Terry },
    { L"D - Terry and Child Winpose", 0x0003e20, 0x0003e40, indexKOFSprites_02UM_Terry, 0x19 },
    { L"D - MAX2 Trail", 0x0003e40, 0x0003e60, indexKOFSprites_02UM_Terry, 0x0a },
    { L"D - Electric Shock Effect", 0x0003e60, 0x0003e80, indexKOFSprites_02UM_Terry, 0x18 },
    { L"D - MAX Flash", 0x0003e80, 0x0003ea0, indexKOFSprites_02UM_Terry, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0003ea0, 0x0003ec0, indexKOFSprites_02UM_Terry, 0x00 },
    { L"D - Soul Palette", 0x0003ec0, 0x0003ee0, indexKOFSprites_02UM_Terry, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0003ee0, 0x0003f00, indexKOFSprites_02UM_Terry, 0x00 },
};

const sDescTreeNode KOF02UM_S_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_A, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_B, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_C, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_D, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_TERRY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_A[] =
{
    { L"Andy A", 0x0004000, 0x0004020, indexKOFSprites_02UM_Andy },
    { L"A - SDM Super Sonic Swirl and MAX2", 0x0004020, 0x0004040, indexKOFSprites_02UM_Andy, 0x11 },
    { L"A - MAX Super Sonic Swirl", 0x0004040, 0x0004060, indexKOFSprites_02UM_Andy, 0x11 },
    { L"A - Electric Shock Effect", 0x0004060, 0x0004080, indexKOFSprites_02UM_Andy, 0x18 },
    { L"A - MAX Flash", 0x0004080, 0x00040a0, indexKOFSprites_02UM_Andy, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00040a0, 0x00040c0, indexKOFSprites_02UM_Andy, 0x00 },
    { L"A - Soul Palette", 0x00040c0, 0x00040e0, indexKOFSprites_02UM_Andy, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00040e0, 0x0004100, indexKOFSprites_02UM_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_B[] =
{
    { L"Andy B", 0x0004200, 0x0004220, indexKOFSprites_02UM_Andy },
    { L"B - SDM Super Sonic Swirl and MAX2", 0x0004220, 0x0004240, indexKOFSprites_02UM_Andy, 0x11 },
    { L"B - MAX Super Sonic Swirl", 0x0004240, 0x0004260, indexKOFSprites_02UM_Andy, 0x11 },
    { L"B - Electric Shock Effect", 0x0004260, 0x0004280, indexKOFSprites_02UM_Andy, 0x18 },
    { L"B - MAX Flash", 0x0004280, 0x00042a0, indexKOFSprites_02UM_Andy, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00042a0, 0x00042c0, indexKOFSprites_02UM_Andy, 0x00 },
    { L"B - Soul Palette", 0x00042c0, 0x00042e0, indexKOFSprites_02UM_Andy, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00042e0, 0x0004300, indexKOFSprites_02UM_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_C[] =
{
    { L"Andy C", 0x0004400, 0x0004420, indexKOFSprites_02UM_Andy },
    { L"C - SDM Super Sonic Swirl and MAX2", 0x0004420, 0x0004440, indexKOFSprites_02UM_Andy, 0x11 },
    { L"C - MAX Super Sonic Swirl", 0x0004440, 0x0004460, indexKOFSprites_02UM_Andy, 0x11 },
    { L"C - Electric Shock Effect", 0x0004460, 0x0004480, indexKOFSprites_02UM_Andy, 0x18 },
    { L"C - MAX Flash", 0x0004480, 0x00044a0, indexKOFSprites_02UM_Andy, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00044a0, 0x00044c0, indexKOFSprites_02UM_Andy, 0x00 },
    { L"C - Soul Palette", 0x00044c0, 0x00044e0, indexKOFSprites_02UM_Andy, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00044e0, 0x0004500, indexKOFSprites_02UM_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ANDY_PALETTES_D[] =
{
    { L"Andy D", 0x0004600, 0x0004620, indexKOFSprites_02UM_Andy },
    { L"D - SDM Super Sonic Swirl and MAX2", 0x0004620, 0x0004640, indexKOFSprites_02UM_Andy, 0x11 },
    { L"D - MAX Super Sonic Swirl", 0x0004640, 0x0004660, indexKOFSprites_02UM_Andy, 0x11 },
    { L"D - Electric Shock Effect", 0x0004660, 0x0004680, indexKOFSprites_02UM_Andy, 0x18 },
    { L"D - MAX Flash", 0x0004680, 0x00046a0, indexKOFSprites_02UM_Andy, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00046a0, 0x00046c0, indexKOFSprites_02UM_Andy, 0x00 },
    { L"D - Soul Palette", 0x00046c0, 0x00046e0, indexKOFSprites_02UM_Andy, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00046e0, 0x0004700, indexKOFSprites_02UM_Andy, 0x00 },
};

const sDescTreeNode KOF02UM_S_ANDY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_A, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_B, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_C, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_D, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ANDY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_A[] =
{
    { L"Joe A", 0x0004800, 0x0004820, indexKOFSprites_02UM_Joe },
    { L"A - Hidden Super Desperation Move 1", 0x0004820, 0x0004840, indexKOFSprites_02UM_Joe, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0004840, 0x0004860, indexKOFSprites_02UM_Joe, 0x00 },
    { L"A - Electric Shock Effect", 0x0004860, 0x0004880, indexKOFSprites_02UM_Joe, 0x18 },
    { L"A - MAX Flash", 0x0004880, 0x00048a0, indexKOFSprites_02UM_Joe, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00048a0, 0x00048c0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"A - Soul Palette", 0x00048c0, 0x00048e0, indexKOFSprites_02UM_Joe, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00048e0, 0x0004900, indexKOFSprites_02UM_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_B[] =
{
    { L"Joe B", 0x0004a00, 0x0004a20, indexKOFSprites_02UM_Joe },
    { L"B - Hidden Super Desperation Move 1", 0x0004a20, 0x0004a40, indexKOFSprites_02UM_Joe, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0004a40, 0x0004a60, indexKOFSprites_02UM_Joe, 0x00 },
    { L"B - Electric Shock Effect", 0x0004a60, 0x0004a80, indexKOFSprites_02UM_Joe, 0x18 },
    { L"B - MAX Flash", 0x0004a80, 0x0004aa0, indexKOFSprites_02UM_Joe, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0004aa0, 0x0004ac0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"B - Soul Palette", 0x0004ac0, 0x0004ae0, indexKOFSprites_02UM_Joe, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0004ae0, 0x0004b00, indexKOFSprites_02UM_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_C[] =
{
    { L"Joe C", 0x0004c00, 0x0004c20, indexKOFSprites_02UM_Joe },
    { L"C - Hidden Super Desperation Move 1", 0x0004c20, 0x0004c40, indexKOFSprites_02UM_Joe, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0004c40, 0x0004c60, indexKOFSprites_02UM_Joe, 0x00 },
    { L"C - Electric Shock Effect", 0x0004c60, 0x0004c80, indexKOFSprites_02UM_Joe, 0x18 },
    { L"C - MAX Flash", 0x0004c80, 0x0004ca0, indexKOFSprites_02UM_Joe, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0004ca0, 0x0004cc0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"C - Soul Palette", 0x0004cc0, 0x0004ce0, indexKOFSprites_02UM_Joe, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0004ce0, 0x0004d00, indexKOFSprites_02UM_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_JOE_PALETTES_D[] =
{
    { L"Joe D", 0x0004e00, 0x0004e20, indexKOFSprites_02UM_Joe },
    { L"D - Hidden Super Desperation Move 1", 0x0004e20, 0x0004e40, indexKOFSprites_02UM_Joe, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0004e40, 0x0004e60, indexKOFSprites_02UM_Joe, 0x00 },
    { L"D - Electric Shock Effect", 0x0004e60, 0x0004e80, indexKOFSprites_02UM_Joe, 0x18 },
    { L"D - MAX Flash", 0x0004e80, 0x0004ea0, indexKOFSprites_02UM_Joe, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0004ea0, 0x0004ec0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"D - Soul Palette", 0x0004ec0, 0x0004ee0, indexKOFSprites_02UM_Joe, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0004ee0, 0x0004f00, indexKOFSprites_02UM_Joe, 0x00 },
};

const sDescTreeNode KOF02UM_S_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_A, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_B, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_C, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_D, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_JOE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_A[] =
{
    { L"Kim A", 0x0005000, 0x0005020, indexKOFSprites_02UM_Kim },
    { L"A - Hidden Super Desperation Move 1", 0x0005020, 0x0005040, indexKOFSprites_02UM_Kim, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0005040, 0x0005060, indexKOFSprites_02UM_Kim, 0x00 },
    { L"A - Electric Shock Effect", 0x0005060, 0x0005080, indexKOFSprites_02UM_Kim, 0x18 },
    { L"A - MAX Flash", 0x0005080, 0x00050a0, indexKOFSprites_02UM_Kim, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00050a0, 0x00050c0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"A - Soul Palette", 0x00050c0, 0x00050e0, indexKOFSprites_02UM_Kim, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00050e0, 0x0005100, indexKOFSprites_02UM_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_B[] =
{
    { L"Kim B", 0x0005200, 0x0005220, indexKOFSprites_02UM_Kim },
    { L"B - Hidden Super Desperation Move 1", 0x0005220, 0x0005240, indexKOFSprites_02UM_Kim, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0005240, 0x0005260, indexKOFSprites_02UM_Kim, 0x00 },
    { L"B - Electric Shock Effect", 0x0005260, 0x0005280, indexKOFSprites_02UM_Kim, 0x18 },
    { L"B - MAX Flash", 0x0005280, 0x00052a0, indexKOFSprites_02UM_Kim, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00052a0, 0x00052c0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"B - Soul Palette", 0x00052c0, 0x00052e0, indexKOFSprites_02UM_Kim, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00052e0, 0x0005300, indexKOFSprites_02UM_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_C[] =
{
    { L"Kim C", 0x0005400, 0x0005420, indexKOFSprites_02UM_Kim },
    { L"C - Hidden Super Desperation Move 1", 0x0005420, 0x0005440, indexKOFSprites_02UM_Kim, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0005440, 0x0005460, indexKOFSprites_02UM_Kim, 0x00 },
    { L"C - Electric Shock Effect", 0x0005460, 0x0005480, indexKOFSprites_02UM_Kim, 0x18 },
    { L"C - MAX Flash", 0x0005480, 0x00054a0, indexKOFSprites_02UM_Kim, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00054a0, 0x00054c0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"C - Soul Palette", 0x00054c0, 0x00054e0, indexKOFSprites_02UM_Kim, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00054e0, 0x0005500, indexKOFSprites_02UM_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KIM_PALETTES_D[] =
{
    { L"Kim D", 0x0005600, 0x0005620, indexKOFSprites_02UM_Kim },
    { L"D - Hidden Super Desperation Move 1", 0x0005620, 0x0005640, indexKOFSprites_02UM_Kim, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0005640, 0x0005660, indexKOFSprites_02UM_Kim, 0x00 },
    { L"D - Electric Shock Effect", 0x0005660, 0x0005680, indexKOFSprites_02UM_Kim, 0x18 },
    { L"D - MAX Flash", 0x0005680, 0x00056a0, indexKOFSprites_02UM_Kim, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00056a0, 0x00056c0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"D - Soul Palette", 0x00056c0, 0x00056e0, indexKOFSprites_02UM_Kim, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00056e0, 0x0005700, indexKOFSprites_02UM_Kim, 0x00 },
};

const sDescTreeNode KOF02UM_S_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_A, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_B, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_C, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_D, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KIM_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_A[] =
{
    { L"Chang A", 0x0005800, 0x0005820, indexKOFSprites_02UM_Chang },
    { L"A - Hidden Super Desperation Move 1", 0x0005820, 0x0005840, indexKOFSprites_02UM_Chang, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0005840, 0x0005860, indexKOFSprites_02UM_Chang, 0x00 },
    { L"A - Electric Shock Effect", 0x0005860, 0x0005880, indexKOFSprites_02UM_Chang, 0x18 },
    { L"A - MAX Flash", 0x0005880, 0x00058a0, indexKOFSprites_02UM_Chang, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00058a0, 0x00058c0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"A - Soul Palette", 0x00058c0, 0x00058e0, indexKOFSprites_02UM_Chang, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00058e0, 0x0005900, indexKOFSprites_02UM_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_B[] =
{
    { L"Chang B", 0x0005a00, 0x0005a20, indexKOFSprites_02UM_Chang },
    { L"B - Hidden Super Desperation Move 1", 0x0005a20, 0x0005a40, indexKOFSprites_02UM_Chang, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0005a40, 0x0005a60, indexKOFSprites_02UM_Chang, 0x00 },
    { L"B - Electric Shock Effect", 0x0005a60, 0x0005a80, indexKOFSprites_02UM_Chang, 0x18 },
    { L"B - MAX Flash", 0x0005a80, 0x0005aa0, indexKOFSprites_02UM_Chang, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0005aa0, 0x0005ac0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"B - Soul Palette", 0x0005ac0, 0x0005ae0, indexKOFSprites_02UM_Chang, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0005ae0, 0x0005b00, indexKOFSprites_02UM_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_C[] =
{
    { L"Chang C", 0x0005c00, 0x0005c20, indexKOFSprites_02UM_Chang },
    { L"C - Hidden Super Desperation Move 1", 0x0005c20, 0x0005c40, indexKOFSprites_02UM_Chang, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0005c40, 0x0005c60, indexKOFSprites_02UM_Chang, 0x00 },
    { L"C - Electric Shock Effect", 0x0005c60, 0x0005c80, indexKOFSprites_02UM_Chang, 0x18 },
    { L"C - MAX Flash", 0x0005c80, 0x0005ca0, indexKOFSprites_02UM_Chang, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0005ca0, 0x0005cc0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"C - Soul Palette", 0x0005cc0, 0x0005ce0, indexKOFSprites_02UM_Chang, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0005ce0, 0x0005d00, indexKOFSprites_02UM_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHANG_PALETTES_D[] =
{
    { L"Chang D", 0x0005e00, 0x0005e20, indexKOFSprites_02UM_Chang },
    { L"D - Hidden Super Desperation Move 1", 0x0005e20, 0x0005e40, indexKOFSprites_02UM_Chang, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0005e40, 0x0005e60, indexKOFSprites_02UM_Chang, 0x00 },
    { L"D - Electric Shock Effect", 0x0005e60, 0x0005e80, indexKOFSprites_02UM_Chang, 0x18 },
    { L"D - MAX Flash", 0x0005e80, 0x0005ea0, indexKOFSprites_02UM_Chang, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0005ea0, 0x0005ec0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"D - Soul Palette", 0x0005ec0, 0x0005ee0, indexKOFSprites_02UM_Chang, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0005ee0, 0x0005f00, indexKOFSprites_02UM_Chang, 0x00 },
};

const sDescTreeNode KOF02UM_S_CHANG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHANG_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_A[] =
{
    { L"Choi A", 0x0006000, 0x0006020, indexKOFSprites_02UM_Choi },
    { L"A - Phoenix Flattener SDM Effects", 0x0006020, 0x0006040, indexKOFSprites_02UM_Choi, 0x03 },
    { L"A - Desperation Move / Super Desperation Move", 0x0006040, 0x0006060, indexKOFSprites_02UM_Choi, 0x00 },
    { L"A - Electric Shock Effect", 0x0006060, 0x0006080, indexKOFSprites_02UM_Choi, 0x18 },
    { L"A - MAX Flash", 0x0006080, 0x00060a0, indexKOFSprites_02UM_Choi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00060a0, 0x00060c0, indexKOFSprites_02UM_Choi, 0x00 },
    { L"A - Soul Palette", 0x00060c0, 0x00060e0, indexKOFSprites_02UM_Choi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00060e0, 0x0006100, indexKOFSprites_02UM_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_B[] =
{
    { L"Choi B", 0x0006200, 0x0006220, indexKOFSprites_02UM_Choi },
    { L"B - Phoenix Flattener SDM Effects", 0x0006220, 0x0006240, indexKOFSprites_02UM_Choi, 0x03 },
    { L"B - Desperation Move / Super Desperation Move", 0x0006240, 0x0006260, indexKOFSprites_02UM_Choi, 0x00 },
    { L"B - Electric Shock Effect", 0x0006260, 0x0006280, indexKOFSprites_02UM_Choi, 0x18 },
    { L"B - MAX Flash", 0x0006280, 0x00062a0, indexKOFSprites_02UM_Choi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00062a0, 0x00062c0, indexKOFSprites_02UM_Choi, 0x00 },
    { L"B - Soul Palette", 0x00062c0, 0x00062e0, indexKOFSprites_02UM_Choi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00062e0, 0x0006300, indexKOFSprites_02UM_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_C[] =
{
    { L"Choi C", 0x0006400, 0x0006420, indexKOFSprites_02UM_Choi },
    { L"C - Phoenix Flattener SDM Effects", 0x0006420, 0x0006440, indexKOFSprites_02UM_Choi, 0x03 },
    { L"C - Desperation Move / Super Desperation Move", 0x0006440, 0x0006460, indexKOFSprites_02UM_Choi, 0x00 },
    { L"C - Electric Shock Effect", 0x0006460, 0x0006480, indexKOFSprites_02UM_Choi, 0x18 },
    { L"C - MAX Flash", 0x0006480, 0x00064a0, indexKOFSprites_02UM_Choi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00064a0, 0x00064c0, indexKOFSprites_02UM_Choi, 0x00 },
    { L"C - Soul Palette", 0x00064c0, 0x00064e0, indexKOFSprites_02UM_Choi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00064e0, 0x0006500, indexKOFSprites_02UM_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHOI_PALETTES_D[] =
{
    { L"Choi D", 0x0006600, 0x0006620, indexKOFSprites_02UM_Choi },
    { L"D - Phoenix Flattener SDM Effects", 0x0006620, 0x0006640, indexKOFSprites_02UM_Choi, 0x03 },
    { L"D - Desperation Move / Super Desperation Move", 0x0006640, 0x0006660, indexKOFSprites_02UM_Choi, 0x00 },
    { L"D - Electric Shock Effect", 0x0006660, 0x0006680, indexKOFSprites_02UM_Choi, 0x18 },
    { L"D - MAX Flash", 0x0006680, 0x00066a0, indexKOFSprites_02UM_Choi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00066a0, 0x00066c0, indexKOFSprites_02UM_Choi, 0x00 },
    { L"D - Soul Palette", 0x00066c0, 0x00066e0, indexKOFSprites_02UM_Choi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00066e0, 0x0006700, indexKOFSprites_02UM_Choi, 0x00 },
};

const sDescTreeNode KOF02UM_S_CHOI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHOI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_A[] =
{
    { L"Athena A", 0x0006800, 0x0006820, indexKOFSprites_02UM_Athena },
    { L"A - Athena Transformations", 0x0006820, 0x0006840, indexKOFSprites_02UM_Athena, 0x19 },
    { L"A - MAX Shining Crystal Bit", 0x0006840, 0x0006860, indexKOFSprites_02UM_Athena, 0x00 },
    { L"A - Electric Shock Effect", 0x0006860, 0x0006880, indexKOFSprites_02UM_Athena, 0x18 },
    { L"A - MAX Flash", 0x0006880, 0x00068a0, indexKOFSprites_02UM_Athena, 0x08 },
    { L"A - Portal Stuff", 0x00068a0, 0x00068c0, indexKOFSprites_02UM_Athena, 0x02 },
    { L"A - Soul Palette", 0x00068c0, 0x00068e0, indexKOFSprites_02UM_Athena, 0x18 },
    { L"A - Intro Stuff and MAX2 Finisher", 0x00068e0, 0x0006900, indexKOFSprites_02UM_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_B[] =
{
    { L"Athena B", 0x0006a00, 0x0006a20, indexKOFSprites_02UM_Athena },
    { L"B - Athena Transformations", 0x0006a20, 0x0006a40, indexKOFSprites_02UM_Athena, 0x19 },
    { L"B - MAX Shining Crystal Bit", 0x0006a40, 0x0006a60, indexKOFSprites_02UM_Athena, 0x00 },
    { L"B - Electric Shock Effect", 0x0006a60, 0x0006a80, indexKOFSprites_02UM_Athena, 0x18 },
    { L"B - MAX Flash", 0x0006a80, 0x0006aa0, indexKOFSprites_02UM_Athena, 0x08 },
    { L"B - Portal Stuff", 0x0006aa0, 0x0006ac0, indexKOFSprites_02UM_Athena, 0x02 },
    { L"B - Soul Palette", 0x0006ac0, 0x0006ae0, indexKOFSprites_02UM_Athena, 0x18 },
    { L"B - Intro Stuff and MAX2 Finisher", 0x0006ae0, 0x0006b00, indexKOFSprites_02UM_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_C[] =
{
    { L"Athena C", 0x0006c00, 0x0006c20, indexKOFSprites_02UM_Athena },
    { L"C - Athena Transformations", 0x0006c20, 0x0006c40, indexKOFSprites_02UM_Athena, 0x19 },
    { L"C - MAX Shining Crystal Bit", 0x0006c40, 0x0006c60, indexKOFSprites_02UM_Athena, 0x00 },
    { L"C - Electric Shock Effect", 0x0006c60, 0x0006c80, indexKOFSprites_02UM_Athena, 0x18 },
    { L"C - MAX Flash", 0x0006c80, 0x0006ca0, indexKOFSprites_02UM_Athena, 0x08 },
    { L"C - Portal Stuff", 0x0006ca0, 0x0006cc0, indexKOFSprites_02UM_Athena, 0x02 },
    { L"C - Soul Palette", 0x0006cc0, 0x0006ce0, indexKOFSprites_02UM_Athena, 0x18 },
    { L"C - Intro Stuff and MAX2 Finisher", 0x0006ce0, 0x0006d00, indexKOFSprites_02UM_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ATHENA_PALETTES_D[] =
{
    { L"Athena D", 0x0006e00, 0x0006e20, indexKOFSprites_02UM_Athena },
    { L"D - Athena Transformations", 0x0006e20, 0x0006e40, indexKOFSprites_02UM_Athena, 0x19 },
    { L"D - MAX Shining Crystal Bit", 0x0006e40, 0x0006e60, indexKOFSprites_02UM_Athena, 0x00 },
    { L"D - Electric Shock Effect", 0x0006e60, 0x0006e80, indexKOFSprites_02UM_Athena, 0x18 },
    { L"D - MAX Flash", 0x0006e80, 0x0006ea0, indexKOFSprites_02UM_Athena, 0x08 },
    { L"D - Portal Stuff", 0x0006ea0, 0x0006ec0, indexKOFSprites_02UM_Athena, 0x02 },
    { L"D - Soul Palette", 0x0006ec0, 0x0006ee0, indexKOFSprites_02UM_Athena, 0x18 },
    { L"D - Intro Stuff and MAX2 Finisher", 0x0006ee0, 0x0006f00, indexKOFSprites_02UM_Athena, 0x00 },
};

const sDescTreeNode KOF02UM_S_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_A, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_B, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_C, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_D, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ATHENA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_A[] =
{
    { L"Kensou A", 0x0007000, 0x0007020, indexKOFSprites_02UM_Kensou },
    { L"A - MAX2 Power Up State", 0x0007020, 0x0007040, indexKOFSprites_02UM_Kensou, 0x0a },
    { L"A - Desperation Move / Super Desperation Move", 0x0007040, 0x0007060, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"A - Electric Shock Effect", 0x0007060, 0x0007080, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"A - MAX Flash", 0x0007080, 0x00070a0, indexKOFSprites_02UM_Kensou, 0x0 },
    { L"A - Hidden Super Desperation Move 2", 0x00070a0, 0x00070c0, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"A - Soul Palette", 0x00070c0, 0x00070e0, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00070e0, 0x0007100, indexKOFSprites_02UM_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_B[] =
{
    { L"Kensou B", 0x0007200, 0x0007220, indexKOFSprites_02UM_Kensou },
    { L"B - MAX2 Power Up State", 0x0007220, 0x0007240, indexKOFSprites_02UM_Kensou, 0x0a },
    { L"B - Desperation Move / Super Desperation Move", 0x0007240, 0x0007260, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"B - Electric Shock Effect", 0x0007260, 0x0007280, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"B - MAX Flash", 0x0007280, 0x00072a0, indexKOFSprites_02UM_Kensou, 0x0 },
    { L"B - Hidden Super Desperation Move 2", 0x00072a0, 0x00072c0, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"B - Soul Palette", 0x00072c0, 0x00072e0, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00072e0, 0x0007300, indexKOFSprites_02UM_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_C[] =
{
    { L"Kensou C", 0x0007400, 0x0007420, indexKOFSprites_02UM_Kensou },
    { L"C - MAX2 Power Up State", 0x0007420, 0x0007440, indexKOFSprites_02UM_Kensou, 0x0a },
    { L"C - Desperation Move / Super Desperation Move", 0x0007440, 0x0007460, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"C - Electric Shock Effect", 0x0007460, 0x0007480, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"C - MAX Flash", 0x0007480, 0x00074a0, indexKOFSprites_02UM_Kensou, 0x0 },
    { L"C - Hidden Super Desperation Move 2", 0x00074a0, 0x00074c0, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"C - Soul Palette", 0x00074c0, 0x00074e0, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00074e0, 0x0007500, indexKOFSprites_02UM_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KENSOU_PALETTES_D[] =
{
    { L"Kensou D", 0x0007600, 0x0007620, indexKOFSprites_02UM_Kensou },
    { L"D - MAX2 Power Up State", 0x0007620, 0x0007640, indexKOFSprites_02UM_Kensou, 0x0a },
    { L"D - Desperation Move / Super Desperation Move", 0x0007640, 0x0007660, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"D - Electric Shock Effect", 0x0007660, 0x0007680, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"D - MAX Flash", 0x0007680, 0x00076a0, indexKOFSprites_02UM_Kensou, 0x0 },
    { L"D - Hidden Super Desperation Move 2", 0x00076a0, 0x00076c0, indexKOFSprites_02UM_Kensou, 0x00 },
    { L"D - Soul Palette", 0x00076c0, 0x00076e0, indexKOFSprites_02UM_Kensou, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00076e0, 0x0007700, indexKOFSprites_02UM_Kensou, 0x00 },
};

const sDescTreeNode KOF02UM_S_KENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_A, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_B, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_C, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_D, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KENSOU_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_A[] =
{
    { L"Chin A", 0x0007800, 0x0007820, indexKOFSprites_02UM_Chin },
    { L"A - Fire Palette", 0x0007820, 0x0007840, indexKOFSprites_02UM_Chin, 0x09 },
    { L"A - Desperation Move / Super Desperation Move", 0x0007840, 0x0007860, indexKOFSprites_02UM_Chin, 0x00 },
    { L"A - Electric Shock Effect", 0x0007860, 0x0007880, indexKOFSprites_02UM_Chin, 0x18 },
    { L"A - MAX Flash", 0x0007880, 0x00078a0, indexKOFSprites_02UM_Chin, 0x09 },
    { L"A - Hidden Super Desperation Move 2", 0x00078a0, 0x00078c0, indexKOFSprites_02UM_Chin, 0x00 },
    { L"A - Soul Palette", 0x00078c0, 0x00078e0, indexKOFSprites_02UM_Chin, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00078e0, 0x0007900, indexKOFSprites_02UM_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_B[] =
{
    { L"Chin B", 0x0007a00, 0x0007a20, indexKOFSprites_02UM_Chin },
    { L"B - Fire Palette", 0x0007a20, 0x0007a40, indexKOFSprites_02UM_Chin, 0x09 },
    { L"B - Desperation Move / Super Desperation Move", 0x0007a40, 0x0007a60, indexKOFSprites_02UM_Chin, 0x00 },
    { L"B - Electric Shock Effect", 0x0007a60, 0x0007a80, indexKOFSprites_02UM_Chin, 0x18 },
    { L"B - MAX Flash", 0x0007a80, 0x0007aa0, indexKOFSprites_02UM_Chin, 0x09 },
    { L"B - Hidden Super Desperation Move 2", 0x0007aa0, 0x0007ac0, indexKOFSprites_02UM_Chin, 0x00 },
    { L"B - Soul Palette", 0x0007ac0, 0x0007ae0, indexKOFSprites_02UM_Chin, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0007ae0, 0x0007b00, indexKOFSprites_02UM_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_C[] =
{
    { L"Chin C", 0x0007c00, 0x0007c20, indexKOFSprites_02UM_Chin },
    { L"C - Fire Palette", 0x0007c20, 0x0007c40, indexKOFSprites_02UM_Chin, 0x09 },
    { L"C - Desperation Move / Super Desperation Move", 0x0007c40, 0x0007c60, indexKOFSprites_02UM_Chin, 0x00 },
    { L"C - Electric Shock Effect", 0x0007c60, 0x0007c80, indexKOFSprites_02UM_Chin, 0x18 },
    { L"C - MAX Flash", 0x0007c80, 0x0007ca0, indexKOFSprites_02UM_Chin, 0x09 },
    { L"C - Hidden Super Desperation Move 2", 0x0007ca0, 0x0007cc0, indexKOFSprites_02UM_Chin, 0x00 },
    { L"C - Soul Palette", 0x0007cc0, 0x0007ce0, indexKOFSprites_02UM_Chin, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0007ce0, 0x0007d00, indexKOFSprites_02UM_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHIN_PALETTES_D[] =
{
    { L"Chin D", 0x0007e00, 0x0007e20, indexKOFSprites_02UM_Chin },
    { L"D - Fire Palette", 0x0007e20, 0x0007e40, indexKOFSprites_02UM_Chin, 0x09 },
    { L"D - Desperation Move / Super Desperation Move", 0x0007e40, 0x0007e60, indexKOFSprites_02UM_Chin, 0x00 },
    { L"D - Electric Shock Effect", 0x0007e60, 0x0007e80, indexKOFSprites_02UM_Chin, 0x18 },
    { L"D - MAX Flash", 0x0007e80, 0x0007ea0, indexKOFSprites_02UM_Chin, 0x09 },
    { L"D - Hidden Super Desperation Move 2", 0x0007ea0, 0x0007ec0, indexKOFSprites_02UM_Chin, 0x00 },
    { L"D - Soul Palette", 0x0007ec0, 0x0007ee0, indexKOFSprites_02UM_Chin, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0007ee0, 0x0007f00, indexKOFSprites_02UM_Chin, 0x00 },
};

const sDescTreeNode KOF02UM_S_CHIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHIN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_A[] =
{
    { L"Leona A", 0x0008000, 0x0008020, indexKOFSprites_02UM_Leona },
    { L"A - Jump Blowback Attack", 0x0008020, 0x0008040, indexKOFSprites_02UM_Leona, 0x06 },
    { L"A - Desperation Move / Super Desperation Move", 0x0008040, 0x0008060, indexKOFSprites_02UM_Leona, 0x0 },
    { L"A - Electric Shock Effect", 0x0008060, 0x0008080, indexKOFSprites_02UM_Leona, 0x18 },
    { L"A - MAX Flash", 0x0008080, 0x00080a0, indexKOFSprites_02UM_Leona, 0x08 },
    { L"A - Orochi Leona", 0x00080a0, 0x00080c0, indexKOFSprites_02UM_Leona, 0x1b },
    { L"A - Soul Palette", 0x00080c0, 0x00080e0, indexKOFSprites_02UM_Leona, 0x18 },
    { L"A - Intro Stuff", 0x00080e0, 0x0008100, indexKOFSprites_02UM_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_B[] =
{
    { L"Leona B", 0x0008200, 0x0008220, indexKOFSprites_02UM_Leona },
    { L"B - Jump Blowback Attack", 0x0008220, 0x0008240, indexKOFSprites_02UM_Leona, 0x06 },
    { L"B - Desperation Move / Super Desperation Move", 0x0008240, 0x0008260, indexKOFSprites_02UM_Leona, 0x0 },
    { L"B - Electric Shock Effect", 0x0008260, 0x0008280, indexKOFSprites_02UM_Leona, 0x18 },
    { L"B - MAX Flash", 0x0008280, 0x00082a0, indexKOFSprites_02UM_Leona, 0x08 },
    { L"B - Orochi Leona", 0x00082a0, 0x00082c0, indexKOFSprites_02UM_Leona, 0x1b },
    { L"B - Soul Palette", 0x00082c0, 0x00082e0, indexKOFSprites_02UM_Leona, 0x18 },
    { L"B - Intro Stuff", 0x00082e0, 0x0008300, indexKOFSprites_02UM_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_C[] =
{
    { L"Leona C", 0x0008400, 0x0008420, indexKOFSprites_02UM_Leona },
    { L"C - Jump Blowback Attack", 0x0008420, 0x0008440, indexKOFSprites_02UM_Leona, 0x06 },
    { L"C - Desperation Move / Super Desperation Move", 0x0008440, 0x0008460, indexKOFSprites_02UM_Leona, 0x0 },
    { L"C - Electric Shock Effect", 0x0008460, 0x0008480, indexKOFSprites_02UM_Leona, 0x18 },
    { L"C - MAX Flash", 0x0008480, 0x00084a0, indexKOFSprites_02UM_Leona, 0x08 },
    { L"C - Orochi Leona", 0x00084a0, 0x00084c0, indexKOFSprites_02UM_Leona, 0x1b },
    { L"C - Soul Palette", 0x00084c0, 0x00084e0, indexKOFSprites_02UM_Leona, 0x18 },
    { L"C - Intro Stuff", 0x00084e0, 0x0008500, indexKOFSprites_02UM_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_LEONA_PALETTES_D[] =
{
    { L"Leona D", 0x0008600, 0x0008620, indexKOFSprites_02UM_Leona },
    { L"D - Jump Blowback Attack", 0x0008620, 0x0008640, indexKOFSprites_02UM_Leona, 0x06 },
    { L"D - Desperation Move / Super Desperation Move", 0x0008640, 0x0008660, indexKOFSprites_02UM_Leona, 0x0 },
    { L"D - Electric Shock Effect", 0x0008660, 0x0008680, indexKOFSprites_02UM_Leona, 0x18 },
    { L"D - MAX Flash", 0x0008680, 0x00086a0, indexKOFSprites_02UM_Leona, 0x08 },
    { L"D - Orochi Leona", 0x00086a0, 0x00086c0, indexKOFSprites_02UM_Leona, 0x1b },
    { L"D - Soul Palette", 0x00086c0, 0x00086e0, indexKOFSprites_02UM_Leona, 0x18 },
    { L"D - Intro Stuff", 0x00086e0, 0x0008700, indexKOFSprites_02UM_Leona, 0x19 },
};

const sDescTreeNode KOF02UM_S_LEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_A, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_B, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_C, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_D, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_LEONA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_A[] =
{
    { L"Ralf A", 0x0008800, 0x0008820, indexKOFSprites_02UM_Ralf },
    { L"A - Hidden Super Desperation Move 1", 0x0008820, 0x0008840, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0008840, 0x0008860, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"A - Electric Shock Effect", 0x0008860, 0x0008880, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"A - MAX Flash", 0x0008880, 0x00088a0, indexKOFSprites_02UM_Ralf, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00088a0, 0x00088c0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"A - Soul Palette", 0x00088c0, 0x00088e0, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00088e0, 0x0008900, indexKOFSprites_02UM_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_B[] =
{
    { L"Ralf B", 0x0008a00, 0x0008a20, indexKOFSprites_02UM_Ralf },
    { L"B - Hidden Super Desperation Move 1", 0x0008a20, 0x0008a40, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0008a40, 0x0008a60, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"B - Electric Shock Effect", 0x0008a60, 0x0008a80, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"B - MAX Flash", 0x0008a80, 0x0008aa0, indexKOFSprites_02UM_Ralf, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0008aa0, 0x0008ac0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"B - Soul Palette", 0x0008ac0, 0x0008ae0, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0008ae0, 0x0008b00, indexKOFSprites_02UM_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_C[] =
{
    { L"Ralf C", 0x0008c00, 0x0008c20, indexKOFSprites_02UM_Ralf },
    { L"C - Hidden Super Desperation Move 1", 0x0008c20, 0x0008c40, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0008c40, 0x0008c60, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"C - Electric Shock Effect", 0x0008c60, 0x0008c80, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"C - MAX Flash", 0x0008c80, 0x0008ca0, indexKOFSprites_02UM_Ralf, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0008ca0, 0x0008cc0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"C - Soul Palette", 0x0008cc0, 0x0008ce0, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0008ce0, 0x0008d00, indexKOFSprites_02UM_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RALF_PALETTES_D[] =
{
    { L"Ralf D", 0x0008e00, 0x0008e20, indexKOFSprites_02UM_Ralf },
    { L"D - Hidden Super Desperation Move 1", 0x0008e20, 0x0008e40, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0008e40, 0x0008e60, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"D - Electric Shock Effect", 0x0008e60, 0x0008e80, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"D - MAX Flash", 0x0008e80, 0x0008ea0, indexKOFSprites_02UM_Ralf, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0008ea0, 0x0008ec0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"D - Soul Palette", 0x0008ec0, 0x0008ee0, indexKOFSprites_02UM_Ralf, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0008ee0, 0x0008f00, indexKOFSprites_02UM_Ralf, 0x00 },
};

const sDescTreeNode KOF02UM_S_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_A, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_B, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_C, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_D, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_RALF_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_A[] =
{
    { L"Clark A", 0x0009000, 0x0009020, indexKOFSprites_02UM_Clark },
    { L"A - Hidden Super Desperation Move 1", 0x0009020, 0x0009040, indexKOFSprites_02UM_Clark, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0009040, 0x0009060, indexKOFSprites_02UM_Clark, 0x00 },
    { L"A - Electric Shock Effect", 0x0009060, 0x0009080, indexKOFSprites_02UM_Clark, 0x18 },
    { L"A - MAX Flash", 0x0009080, 0x00090a0, indexKOFSprites_02UM_Clark, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00090a0, 0x00090c0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"A - Soul Palette", 0x00090c0, 0x00090e0, indexKOFSprites_02UM_Clark, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00090e0, 0x0009100, indexKOFSprites_02UM_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_B[] =
{
    { L"Clark B", 0x0009200, 0x0009220, indexKOFSprites_02UM_Clark },
    { L"B - Hidden Super Desperation Move 1", 0x0009220, 0x0009240, indexKOFSprites_02UM_Clark, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0009240, 0x0009260, indexKOFSprites_02UM_Clark, 0x00 },
    { L"B - Electric Shock Effect", 0x0009260, 0x0009280, indexKOFSprites_02UM_Clark, 0x18 },
    { L"B - MAX Flash", 0x0009280, 0x00092a0, indexKOFSprites_02UM_Clark, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00092a0, 0x00092c0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"B - Soul Palette", 0x00092c0, 0x00092e0, indexKOFSprites_02UM_Clark, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00092e0, 0x0009300, indexKOFSprites_02UM_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_C[] =
{
    { L"Clark C", 0x0009400, 0x0009420, indexKOFSprites_02UM_Clark },
    { L"C - Hidden Super Desperation Move 1", 0x0009420, 0x0009440, indexKOFSprites_02UM_Clark, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0009440, 0x0009460, indexKOFSprites_02UM_Clark, 0x00 },
    { L"C - Electric Shock Effect", 0x0009460, 0x0009480, indexKOFSprites_02UM_Clark, 0x18 },
    { L"C - MAX Flash", 0x0009480, 0x00094a0, indexKOFSprites_02UM_Clark, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00094a0, 0x00094c0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"C - Soul Palette", 0x00094c0, 0x00094e0, indexKOFSprites_02UM_Clark, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00094e0, 0x0009500, indexKOFSprites_02UM_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CLARK_PALETTES_D[] =
{
    { L"Clark D", 0x0009600, 0x0009620, indexKOFSprites_02UM_Clark },
    { L"D - Hidden Super Desperation Move 1", 0x0009620, 0x0009640, indexKOFSprites_02UM_Clark, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0009640, 0x0009660, indexKOFSprites_02UM_Clark, 0x00 },
    { L"D - Electric Shock Effect", 0x0009660, 0x0009680, indexKOFSprites_02UM_Clark, 0x18 },
    { L"D - MAX Flash", 0x0009680, 0x00096a0, indexKOFSprites_02UM_Clark, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00096a0, 0x00096c0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"D - Soul Palette", 0x00096c0, 0x00096e0, indexKOFSprites_02UM_Clark, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00096e0, 0x0009700, indexKOFSprites_02UM_Clark, 0x00 },
};

const sDescTreeNode KOF02UM_S_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_A, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_B, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_C, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_D, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CLARK_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_A[] =
{
    { L"Ryo A", 0x0009800, 0x0009820, indexKOFSprites_02UM_Ryo },
    { L"A - Hidden Super Desperation Move 1", 0x0009820, 0x0009840, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0009840, 0x0009860, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"A - Electric Shock Effect", 0x0009860, 0x0009880, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"A - MAX Flash", 0x0009880, 0x00098a0, indexKOFSprites_02UM_Ryo, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00098a0, 0x00098c0, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"A - Soul Palette", 0x00098c0, 0x00098e0, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00098e0, 0x0009900, indexKOFSprites_02UM_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_B[] =
{
    { L"Ryo B", 0x0009a00, 0x0009a20, indexKOFSprites_02UM_Ryo },
    { L"B - Hidden Super Desperation Move 1", 0x0009a20, 0x0009a40, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0009a40, 0x0009a60, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"B - Electric Shock Effect", 0x0009a60, 0x0009a80, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"B - MAX Flash", 0x0009a80, 0x0009aa0, indexKOFSprites_02UM_Ryo, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0009aa0, 0x0009ac0, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"B - Soul Palette", 0x0009ac0, 0x0009ae0, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0009ae0, 0x0009b00, indexKOFSprites_02UM_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_C[] =
{
    { L"Ryo C", 0x0009c00, 0x0009c20, indexKOFSprites_02UM_Ryo },
    { L"C - Hidden Super Desperation Move 1", 0x0009c20, 0x0009c40, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0009c40, 0x0009c60, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"C - Electric Shock Effect", 0x0009c60, 0x0009c80, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"C - MAX Flash", 0x0009c80, 0x0009ca0, indexKOFSprites_02UM_Ryo, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0009ca0, 0x0009cc0, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"C - Soul Palette", 0x0009cc0, 0x0009ce0, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0009ce0, 0x0009d00, indexKOFSprites_02UM_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RYO_PALETTES_D[] =
{
    { L"Ryo D", 0x0009e00, 0x0009e20, indexKOFSprites_02UM_Ryo },
    { L"D - Hidden Super Desperation Move 1", 0x0009e20, 0x0009e40, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0009e40, 0x0009e60, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"D - Electric Shock Effect", 0x0009e60, 0x0009e80, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"D - MAX Flash", 0x0009e80, 0x0009ea0, indexKOFSprites_02UM_Ryo, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0009ea0, 0x0009ec0, indexKOFSprites_02UM_Ryo, 0x00 },
    { L"D - Soul Palette", 0x0009ec0, 0x0009ee0, indexKOFSprites_02UM_Ryo, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0009ee0, 0x0009f00, indexKOFSprites_02UM_Ryo, 0x00 },
};

const sDescTreeNode KOF02UM_S_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_A, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_B, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_C, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_D, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_RYO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_A[] =
{
    { L"Robert A", 0x000a000, 0x000a020, indexKOFSprites_02UM_Robert },
    { L"A - Hidden Super Desperation Move 1", 0x000a020, 0x000a040, indexKOFSprites_02UM_Robert, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000a040, 0x000a060, indexKOFSprites_02UM_Robert, 0x00 },
    { L"A - Electric Shock Effect", 0x000a060, 0x000a080, indexKOFSprites_02UM_Robert, 0x18 },
    { L"A - MAX Flash", 0x000a080, 0x000a0a0, indexKOFSprites_02UM_Robert, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000a0a0, 0x000a0c0, indexKOFSprites_02UM_Robert, 0x00 },
    { L"A - Soul Palette", 0x000a0c0, 0x000a0e0, indexKOFSprites_02UM_Robert, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000a0e0, 0x000a100, indexKOFSprites_02UM_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_B[] =
{
    { L"Robert B", 0x000a200, 0x000a220, indexKOFSprites_02UM_Robert },
    { L"B - Hidden Super Desperation Move 1", 0x000a220, 0x000a240, indexKOFSprites_02UM_Robert, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000a240, 0x000a260, indexKOFSprites_02UM_Robert, 0x00 },
    { L"B - Electric Shock Effect", 0x000a260, 0x000a280, indexKOFSprites_02UM_Robert, 0x18 },
    { L"B - MAX Flash", 0x000a280, 0x000a2a0, indexKOFSprites_02UM_Robert, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000a2a0, 0x000a2c0, indexKOFSprites_02UM_Robert, 0x00 },
    { L"B - Soul Palette", 0x000a2c0, 0x000a2e0, indexKOFSprites_02UM_Robert, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000a2e0, 0x000a300, indexKOFSprites_02UM_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_C[] =
{
    { L"Robert C", 0x000a400, 0x000a420, indexKOFSprites_02UM_Robert },
    { L"C - Hidden Super Desperation Move 1", 0x000a420, 0x000a440, indexKOFSprites_02UM_Robert, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000a440, 0x000a460, indexKOFSprites_02UM_Robert, 0x00 },
    { L"C - Electric Shock Effect", 0x000a460, 0x000a480, indexKOFSprites_02UM_Robert, 0x18 },
    { L"C - MAX Flash", 0x000a480, 0x000a4a0, indexKOFSprites_02UM_Robert, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000a4a0, 0x000a4c0, indexKOFSprites_02UM_Robert, 0x00 },
    { L"C - Soul Palette", 0x000a4c0, 0x000a4e0, indexKOFSprites_02UM_Robert, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000a4e0, 0x000a500, indexKOFSprites_02UM_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ROBERT_PALETTES_D[] =
{
    { L"Robert D", 0x000a600, 0x000a620, indexKOFSprites_02UM_Robert },
    { L"D - Hidden Super Desperation Move 1", 0x000a620, 0x000a640, indexKOFSprites_02UM_Robert, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000a640, 0x000a660, indexKOFSprites_02UM_Robert, 0x00 },
    { L"D - Electric Shock Effect", 0x000a660, 0x000a680, indexKOFSprites_02UM_Robert, 0x18 },
    { L"D - MAX Flash", 0x000a680, 0x000a6a0, indexKOFSprites_02UM_Robert, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000a6a0, 0x000a6c0, indexKOFSprites_02UM_Robert, 0x00 },
    { L"D - Soul Palette", 0x000a6c0, 0x000a6e0, indexKOFSprites_02UM_Robert, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000a6e0, 0x000a700, indexKOFSprites_02UM_Robert, 0x00 },
};

const sDescTreeNode KOF02UM_S_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_A, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_B, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_C, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_D, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ROBERT_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_A[] =
{
    { L"Takuma A", 0x000a800, 0x000a820, indexKOFSprites_02UM_Takuma },
    { L"A - Hidden Super Desperation Move 1", 0x000a820, 0x000a840, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000a840, 0x000a860, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"A - Electric Shock Effect", 0x000a860, 0x000a880, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"A - MAX Flash", 0x000a880, 0x000a8a0, indexKOFSprites_02UM_Takuma, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000a8a0, 0x000a8c0, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"A - Soul Palette", 0x000a8c0, 0x000a8e0, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000a8e0, 0x000a900, indexKOFSprites_02UM_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_B[] =
{
    { L"Takuma B", 0x000aa00, 0x000aa20, indexKOFSprites_02UM_Takuma },
    { L"B - Hidden Super Desperation Move 1", 0x000aa20, 0x000aa40, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000aa40, 0x000aa60, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"B - Electric Shock Effect", 0x000aa60, 0x000aa80, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"B - MAX Flash", 0x000aa80, 0x000aaa0, indexKOFSprites_02UM_Takuma, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000aaa0, 0x000aac0, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"B - Soul Palette", 0x000aac0, 0x000aae0, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000aae0, 0x000ab00, indexKOFSprites_02UM_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_C[] =
{
    { L"Takuma C", 0x000ac00, 0x000ac20, indexKOFSprites_02UM_Takuma },
    { L"C - Hidden Super Desperation Move 1", 0x000ac20, 0x000ac40, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000ac40, 0x000ac60, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"C - Electric Shock Effect", 0x000ac60, 0x000ac80, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"C - MAX Flash", 0x000ac80, 0x000aca0, indexKOFSprites_02UM_Takuma, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000aca0, 0x000acc0, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"C - Soul Palette", 0x000acc0, 0x000ace0, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000ace0, 0x000ad00, indexKOFSprites_02UM_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_TAKUMA_PALETTES_D[] =
{
    { L"Takuma D", 0x000ae00, 0x000ae20, indexKOFSprites_02UM_Takuma },
    { L"D - Hidden Super Desperation Move 1", 0x000ae20, 0x000ae40, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000ae40, 0x000ae60, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"D - Electric Shock Effect", 0x000ae60, 0x000ae80, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"D - MAX Flash", 0x000ae80, 0x000aea0, indexKOFSprites_02UM_Takuma, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000aea0, 0x000aec0, indexKOFSprites_02UM_Takuma, 0x00 },
    { L"D - Soul Palette", 0x000aec0, 0x000aee0, indexKOFSprites_02UM_Takuma, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000aee0, 0x000af00, indexKOFSprites_02UM_Takuma, 0x00 },
};

const sDescTreeNode KOF02UM_S_TAKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_A, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_B, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_C, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_D, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_TAKUMA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_A[] =
{
    { L"Mai A", 0x000b000, 0x000b020, indexKOFSprites_02UM_Mai },
    { L"A - Hissatsu SDM Fire", 0x000b020, 0x000b040, indexKOFSprites_02UM_Mai, 0x10 },
    { L"A - Hissatsu MAX Fire", 0x000b040, 0x000b060, indexKOFSprites_02UM_Mai, 0x11 },
    { L"A - Electric Shock Effect", 0x000b060, 0x000b080, indexKOFSprites_02UM_Mai, 0x18 },
    { L"A - MAX Flash", 0x000b080, 0x000b0a0, indexKOFSprites_02UM_Mai, 0x08 },
    { L"A - MAX2 Hold B Dress", 0x000b0a0, 0x000b0c0, indexKOFSprites_02UM_Mai, 0x1a },
    { L"A - Soul Palette", 0x000b0c0, 0x000b0e0, indexKOFSprites_02UM_Mai, 0x18 },
    { L"A - Andy Intro Stuff", 0x000b0e0, 0x000b100, indexKOFSprites_02UM_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_B[] =
{
    { L"Mai B", 0x000b200, 0x000b220, indexKOFSprites_02UM_Mai },
    { L"B - Hissatsu SDM Fire", 0x000b220, 0x000b240, indexKOFSprites_02UM_Mai, 0x10 },
    { L"B - Hissatsu MAX Fire", 0x000b240, 0x000b260, indexKOFSprites_02UM_Mai, 0x11 },
    { L"B - Electric Shock Effect", 0x000b260, 0x000b280, indexKOFSprites_02UM_Mai, 0x18 },
    { L"B - MAX Flash", 0x000b280, 0x000b2a0, indexKOFSprites_02UM_Mai, 0x08 },
    { L"B - MAX2 Hold B Dress", 0x000b2a0, 0x000b2c0, indexKOFSprites_02UM_Mai, 0x1a },
    { L"B - Soul Palette", 0x000b2c0, 0x000b2e0, indexKOFSprites_02UM_Mai, 0x18 },
    { L"B - Andy Intro Stuff", 0x000b2e0, 0x000b300, indexKOFSprites_02UM_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_C[] =
{
    { L"Mai C", 0x000b400, 0x000b420, indexKOFSprites_02UM_Mai },
    { L"C - Hissatsu SDM Fire", 0x000b420, 0x000b440, indexKOFSprites_02UM_Mai, 0x10 },
    { L"C - Hissatsu MAX Fire", 0x000b440, 0x000b460, indexKOFSprites_02UM_Mai, 0x11 },
    { L"C - Electric Shock Effect", 0x000b460, 0x000b480, indexKOFSprites_02UM_Mai, 0x18 },
    { L"C - MAX Flash", 0x000b480, 0x000b4a0, indexKOFSprites_02UM_Mai, 0x08 },
    { L"C - MAX2 Hold B Dress", 0x000b4a0, 0x000b4c0, indexKOFSprites_02UM_Mai, 0x1a },
    { L"C - Soul Palette", 0x000b4c0, 0x000b4e0, indexKOFSprites_02UM_Mai, 0x18 },
    { L"C - Andy Intro Stuff", 0x000b4e0, 0x000b500, indexKOFSprites_02UM_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_MAI_PALETTES_D[] =
{
    { L"Mai D", 0x000b600, 0x000b620, indexKOFSprites_02UM_Mai },
    { L"D - Hissatsu SDM Fire", 0x000b620, 0x000b640, indexKOFSprites_02UM_Mai, 0x10 },
    { L"D - Hissatsu MAX Fire", 0x000b640, 0x000b660, indexKOFSprites_02UM_Mai, 0x11 },
    { L"D - Electric Shock Effect", 0x000b660, 0x000b680, indexKOFSprites_02UM_Mai, 0x18 },
    { L"D - MAX Flash", 0x000b680, 0x000b6a0, indexKOFSprites_02UM_Mai, 0x08 },
    { L"D - MAX2 Hold B Dress", 0x000b6a0, 0x000b6c0, indexKOFSprites_02UM_Mai, 0x1a },
    { L"D - Soul Palette", 0x000b6c0, 0x000b6e0, indexKOFSprites_02UM_Mai, 0x18 },
    { L"D - Andy Intro Stuff", 0x000b6e0, 0x000b700, indexKOFSprites_02UM_Mai, 0x19 },
};

const sDescTreeNode KOF02UM_S_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_A, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_B, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_C, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_D, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MAI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_A[] =
{
    { L"Yuri A", 0x000b800, 0x000b820, indexKOFSprites_02UM_Yuri },
    { L"A - Hidden Super Desperation Move 1", 0x000b820, 0x000b840, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000b840, 0x000b860, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"A - Electric Shock Effect", 0x000b860, 0x000b880, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"A - MAX Flash", 0x000b880, 0x000b8a0, indexKOFSprites_02UM_Yuri, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000b8a0, 0x000b8c0, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"A - Soul Palette", 0x000b8c0, 0x000b8e0, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000b8e0, 0x000b900, indexKOFSprites_02UM_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_B[] =
{
    { L"Yuri B", 0x000ba00, 0x000ba20, indexKOFSprites_02UM_Yuri },
    { L"B - Hidden Super Desperation Move 1", 0x000ba20, 0x000ba40, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000ba40, 0x000ba60, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"B - Electric Shock Effect", 0x000ba60, 0x000ba80, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"B - MAX Flash", 0x000ba80, 0x000baa0, indexKOFSprites_02UM_Yuri, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000baa0, 0x000bac0, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"B - Soul Palette", 0x000bac0, 0x000bae0, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000bae0, 0x000bb00, indexKOFSprites_02UM_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_C[] =
{
    { L"Yuri C", 0x000bc00, 0x000bc20, indexKOFSprites_02UM_Yuri },
    { L"C - Hidden Super Desperation Move 1", 0x000bc20, 0x000bc40, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000bc40, 0x000bc60, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"C - Electric Shock Effect", 0x000bc60, 0x000bc80, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"C - MAX Flash", 0x000bc80, 0x000bca0, indexKOFSprites_02UM_Yuri, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000bca0, 0x000bcc0, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"C - Soul Palette", 0x000bcc0, 0x000bce0, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000bce0, 0x000bd00, indexKOFSprites_02UM_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YURI_PALETTES_D[] =
{
    { L"Yuri D", 0x000be00, 0x000be20, indexKOFSprites_02UM_Yuri },
    { L"D - Hidden Super Desperation Move 1", 0x000be20, 0x000be40, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000be40, 0x000be60, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"D - Electric Shock Effect", 0x000be60, 0x000be80, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"D - MAX Flash", 0x000be80, 0x000bea0, indexKOFSprites_02UM_Yuri, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000bea0, 0x000bec0, indexKOFSprites_02UM_Yuri, 0x00 },
    { L"D - Soul Palette", 0x000bec0, 0x000bee0, indexKOFSprites_02UM_Yuri, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000bee0, 0x000bf00, indexKOFSprites_02UM_Yuri, 0x00 },
};

const sDescTreeNode KOF02UM_S_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_A, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_B, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_C, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_D, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_YURI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_A[] =
{
    { L"May Lee A", 0x000c000, 0x000c020, indexKOFSprites_02UM_MayLee },
    { L"A - Hidden Super Desperation Move 1", 0x000c020, 0x000c040, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000c040, 0x000c060, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"A - Electric Shock Effect", 0x000c060, 0x000c080, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"A - MAX Flash", 0x000c080, 0x000c0a0, indexKOFSprites_02UM_MayLee, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000c0a0, 0x000c0c0, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"A - Soul Palette", 0x000c0c0, 0x000c0e0, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000c0e0, 0x000c100, indexKOFSprites_02UM_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_B[] =
{
    { L"May Lee B", 0x000c200, 0x000c220, indexKOFSprites_02UM_MayLee },
    { L"B - Hidden Super Desperation Move 1", 0x000c220, 0x000c240, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000c240, 0x000c260, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"B - Electric Shock Effect", 0x000c260, 0x000c280, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"B - MAX Flash", 0x000c280, 0x000c2a0, indexKOFSprites_02UM_MayLee, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000c2a0, 0x000c2c0, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"B - Soul Palette", 0x000c2c0, 0x000c2e0, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000c2e0, 0x000c300, indexKOFSprites_02UM_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_C[] =
{
    { L"May Lee C", 0x000c400, 0x000c420, indexKOFSprites_02UM_MayLee },
    { L"C - Hidden Super Desperation Move 1", 0x000c420, 0x000c440, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000c440, 0x000c460, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"C - Electric Shock Effect", 0x000c460, 0x000c480, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"C - MAX Flash", 0x000c480, 0x000c4a0, indexKOFSprites_02UM_MayLee, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000c4a0, 0x000c4c0, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"C - Soul Palette", 0x000c4c0, 0x000c4e0, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000c4e0, 0x000c500, indexKOFSprites_02UM_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MAYLEE_PALETTES_D[] =
{
    { L"May Lee D", 0x000c600, 0x000c620, indexKOFSprites_02UM_MayLee },
    { L"D - Hidden Super Desperation Move 1", 0x000c620, 0x000c640, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000c640, 0x000c660, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"D - Electric Shock Effect", 0x000c660, 0x000c680, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"D - MAX Flash", 0x000c680, 0x000c6a0, indexKOFSprites_02UM_MayLee, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000c6a0, 0x000c6c0, indexKOFSprites_02UM_MayLee, 0x00 },
    { L"D - Soul Palette", 0x000c6c0, 0x000c6e0, indexKOFSprites_02UM_MayLee, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000c6e0, 0x000c700, indexKOFSprites_02UM_MayLee, 0x00 },
};

const sDescTreeNode KOF02UM_S_MAYLEE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_A, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_B, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_C, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_D, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MAYLEE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_A[] =
{
    { L"Iori A", 0x000c800, 0x000c820, indexKOFSprites_02UM_Iori },
    { L"A - Hidden Super Desperation Move 1", 0x000c820, 0x000c840, indexKOFSprites_02UM_Iori, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000c840, 0x000c860, indexKOFSprites_02UM_Iori, 0x00 },
    { L"A - Electric Shock Effect", 0x000c860, 0x000c880, indexKOFSprites_02UM_Iori, 0x18 },
    { L"A - MAX Flash", 0x000c880, 0x000c8a0, indexKOFSprites_02UM_Iori, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000c8a0, 0x000c8c0, indexKOFSprites_02UM_Iori, 0x00 },
    { L"A - Soul Palette", 0x000c8c0, 0x000c8e0, indexKOFSprites_02UM_Iori, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000c8e0, 0x000c900, indexKOFSprites_02UM_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_B[] =
{
    { L"Iori B", 0x000ca00, 0x000ca20, indexKOFSprites_02UM_Iori },
    { L"B - Hidden Super Desperation Move 1", 0x000ca20, 0x000ca40, indexKOFSprites_02UM_Iori, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000ca40, 0x000ca60, indexKOFSprites_02UM_Iori, 0x00 },
    { L"B - Electric Shock Effect", 0x000ca60, 0x000ca80, indexKOFSprites_02UM_Iori, 0x18 },
    { L"B - MAX Flash", 0x000ca80, 0x000caa0, indexKOFSprites_02UM_Iori, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000caa0, 0x000cac0, indexKOFSprites_02UM_Iori, 0x00 },
    { L"B - Soul Palette", 0x000cac0, 0x000cae0, indexKOFSprites_02UM_Iori, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000cae0, 0x000cb00, indexKOFSprites_02UM_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_C[] =
{
    { L"Iori C", 0x000cc00, 0x000cc20, indexKOFSprites_02UM_Iori },
    { L"C - Hidden Super Desperation Move 1", 0x000cc20, 0x000cc40, indexKOFSprites_02UM_Iori, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000cc40, 0x000cc60, indexKOFSprites_02UM_Iori, 0x00 },
    { L"C - Electric Shock Effect", 0x000cc60, 0x000cc80, indexKOFSprites_02UM_Iori, 0x18 },
    { L"C - MAX Flash", 0x000cc80, 0x000cca0, indexKOFSprites_02UM_Iori, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000cca0, 0x000ccc0, indexKOFSprites_02UM_Iori, 0x00 },
    { L"C - Soul Palette", 0x000ccc0, 0x000cce0, indexKOFSprites_02UM_Iori, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000cce0, 0x000cd00, indexKOFSprites_02UM_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_IORI_PALETTES_D[] =
{
    { L"Iori D", 0x000ce00, 0x000ce20, indexKOFSprites_02UM_Iori },
    { L"D - Hidden Super Desperation Move 1", 0x000ce20, 0x000ce40, indexKOFSprites_02UM_Iori, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000ce40, 0x000ce60, indexKOFSprites_02UM_Iori, 0x00 },
    { L"D - Electric Shock Effect", 0x000ce60, 0x000ce80, indexKOFSprites_02UM_Iori, 0x18 },
    { L"D - MAX Flash", 0x000ce80, 0x000cea0, indexKOFSprites_02UM_Iori, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000cea0, 0x000cec0, indexKOFSprites_02UM_Iori, 0x00 },
    { L"D - Soul Palette", 0x000cec0, 0x000cee0, indexKOFSprites_02UM_Iori, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000cee0, 0x000cf00, indexKOFSprites_02UM_Iori, 0x00 },
};

const sDescTreeNode KOF02UM_S_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_A, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_B, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_C, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_D, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_IORI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_A[] =
{
    { L"Mature A", 0x000d000, 0x000d020, indexKOFSprites_02UM_Mature },
    { L"A - Hidden Super Desperation Move 1", 0x000d020, 0x000d040, indexKOFSprites_02UM_Mature, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000d040, 0x000d060, indexKOFSprites_02UM_Mature, 0x00 },
    { L"A - Electric Shock Effect", 0x000d060, 0x000d080, indexKOFSprites_02UM_Mature, 0x18 },
    { L"A - MAX Flash", 0x000d080, 0x000d0a0, indexKOFSprites_02UM_Mature, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000d0a0, 0x000d0c0, indexKOFSprites_02UM_Mature, 0x00 },
    { L"A - Soul Palette", 0x000d0c0, 0x000d0e0, indexKOFSprites_02UM_Mature, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000d0e0, 0x000d100, indexKOFSprites_02UM_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_B[] =
{
    { L"Mature B", 0x000d200, 0x000d220, indexKOFSprites_02UM_Mature },
    { L"B - Hidden Super Desperation Move 1", 0x000d220, 0x000d240, indexKOFSprites_02UM_Mature, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000d240, 0x000d260, indexKOFSprites_02UM_Mature, 0x00 },
    { L"B - Electric Shock Effect", 0x000d260, 0x000d280, indexKOFSprites_02UM_Mature, 0x18 },
    { L"B - MAX Flash", 0x000d280, 0x000d2a0, indexKOFSprites_02UM_Mature, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000d2a0, 0x000d2c0, indexKOFSprites_02UM_Mature, 0x00 },
    { L"B - Soul Palette", 0x000d2c0, 0x000d2e0, indexKOFSprites_02UM_Mature, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000d2e0, 0x000d300, indexKOFSprites_02UM_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_C[] =
{
    { L"Mature C", 0x000d400, 0x000d420, indexKOFSprites_02UM_Mature },
    { L"C - Hidden Super Desperation Move 1", 0x000d420, 0x000d440, indexKOFSprites_02UM_Mature, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000d440, 0x000d460, indexKOFSprites_02UM_Mature, 0x00 },
    { L"C - Electric Shock Effect", 0x000d460, 0x000d480, indexKOFSprites_02UM_Mature, 0x18 },
    { L"C - MAX Flash", 0x000d480, 0x000d4a0, indexKOFSprites_02UM_Mature, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000d4a0, 0x000d4c0, indexKOFSprites_02UM_Mature, 0x00 },
    { L"C - Soul Palette", 0x000d4c0, 0x000d4e0, indexKOFSprites_02UM_Mature, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000d4e0, 0x000d500, indexKOFSprites_02UM_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MATURE_PALETTES_D[] =
{
    { L"Mature D", 0x000d600, 0x000d620, indexKOFSprites_02UM_Mature },
    { L"D - Hidden Super Desperation Move 1", 0x000d620, 0x000d640, indexKOFSprites_02UM_Mature, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000d640, 0x000d660, indexKOFSprites_02UM_Mature, 0x00 },
    { L"D - Electric Shock Effect", 0x000d660, 0x000d680, indexKOFSprites_02UM_Mature, 0x18 },
    { L"D - MAX Flash", 0x000d680, 0x000d6a0, indexKOFSprites_02UM_Mature, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000d6a0, 0x000d6c0, indexKOFSprites_02UM_Mature, 0x00 },
    { L"D - Soul Palette", 0x000d6c0, 0x000d6e0, indexKOFSprites_02UM_Mature, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000d6e0, 0x000d700, indexKOFSprites_02UM_Mature, 0x00 },
};

const sDescTreeNode KOF02UM_S_MATURE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_A, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_B, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_C, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_D, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MATURE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_A[] =
{
    { L"Vice A", 0x000d800, 0x000d820, indexKOFSprites_02UM_Vice },
    { L"A - Hidden Super Desperation Move 1", 0x000d820, 0x000d840, indexKOFSprites_02UM_Vice, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000d840, 0x000d860, indexKOFSprites_02UM_Vice, 0x00 },
    { L"A - Electric Shock Effect", 0x000d860, 0x000d880, indexKOFSprites_02UM_Vice, 0x18 },
    { L"A - MAX Flash", 0x000d880, 0x000d8a0, indexKOFSprites_02UM_Vice, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000d8a0, 0x000d8c0, indexKOFSprites_02UM_Vice, 0x00 },
    { L"A - Soul Palette", 0x000d8c0, 0x000d8e0, indexKOFSprites_02UM_Vice, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000d8e0, 0x000d900, indexKOFSprites_02UM_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_B[] =
{
    { L"Vice B", 0x000da00, 0x000da20, indexKOFSprites_02UM_Vice },
    { L"B - Hidden Super Desperation Move 1", 0x000da20, 0x000da40, indexKOFSprites_02UM_Vice, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000da40, 0x000da60, indexKOFSprites_02UM_Vice, 0x00 },
    { L"B - Electric Shock Effect", 0x000da60, 0x000da80, indexKOFSprites_02UM_Vice, 0x18 },
    { L"B - MAX Flash", 0x000da80, 0x000daa0, indexKOFSprites_02UM_Vice, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000daa0, 0x000dac0, indexKOFSprites_02UM_Vice, 0x00 },
    { L"B - Soul Palette", 0x000dac0, 0x000dae0, indexKOFSprites_02UM_Vice, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000dae0, 0x000db00, indexKOFSprites_02UM_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_C[] =
{
    { L"Vice C", 0x000dc00, 0x000dc20, indexKOFSprites_02UM_Vice },
    { L"C - Hidden Super Desperation Move 1", 0x000dc20, 0x000dc40, indexKOFSprites_02UM_Vice, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000dc40, 0x000dc60, indexKOFSprites_02UM_Vice, 0x00 },
    { L"C - Electric Shock Effect", 0x000dc60, 0x000dc80, indexKOFSprites_02UM_Vice, 0x18 },
    { L"C - MAX Flash", 0x000dc80, 0x000dca0, indexKOFSprites_02UM_Vice, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000dca0, 0x000dcc0, indexKOFSprites_02UM_Vice, 0x00 },
    { L"C - Soul Palette", 0x000dcc0, 0x000dce0, indexKOFSprites_02UM_Vice, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000dce0, 0x000dd00, indexKOFSprites_02UM_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_VICE_PALETTES_D[] =
{
    { L"Vice D", 0x000de00, 0x000de20, indexKOFSprites_02UM_Vice },
    { L"D - Hidden Super Desperation Move 1", 0x000de20, 0x000de40, indexKOFSprites_02UM_Vice, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000de40, 0x000de60, indexKOFSprites_02UM_Vice, 0x00 },
    { L"D - Electric Shock Effect", 0x000de60, 0x000de80, indexKOFSprites_02UM_Vice, 0x18 },
    { L"D - MAX Flash", 0x000de80, 0x000dea0, indexKOFSprites_02UM_Vice, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000dea0, 0x000dec0, indexKOFSprites_02UM_Vice, 0x00 },
    { L"D - Soul Palette", 0x000dec0, 0x000dee0, indexKOFSprites_02UM_Vice, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000dee0, 0x000df00, indexKOFSprites_02UM_Vice, 0x00 },
};

const sDescTreeNode KOF02UM_S_VICE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_A, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_B, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_C, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_D, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_VICE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_A[] =
{
    { L"Yamazaki A", 0x000e000, 0x000e020, indexKOFSprites_02UM_Yamazaki },
    { L"A - Drill Super Extras", 0x000e020, 0x000e040, indexKOFSprites_02UM_Yamazaki, 0x03 },
    { L"A - Intro Stuff", 0x000e040, 0x000e060, indexKOFSprites_02UM_Yamazaki, 0x19 },
    { L"A - Electric Shock Effect", 0x000e060, 0x000e080, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"A - MAX Flash", 0x000e080, 0x000e0a0, indexKOFSprites_02UM_Yamazaki, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000e0a0, 0x000e0c0, indexKOFSprites_02UM_Yamazaki, 0x00 },
    { L"A - Soul Palette", 0x000e0c0, 0x000e0e0, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000e0e0, 0x000e100, indexKOFSprites_02UM_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_B[] =
{
    { L"Yamazaki B", 0x000e200, 0x000e220, indexKOFSprites_02UM_Yamazaki },
    { L"B - Drill Super Extras", 0x000e220, 0x000e240, indexKOFSprites_02UM_Yamazaki, 0x03 },
    { L"B - Intro Stuff", 0x000e240, 0x000e260, indexKOFSprites_02UM_Yamazaki, 0x19 },
    { L"B - Electric Shock Effect", 0x000e260, 0x000e280, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"B - MAX Flash", 0x000e280, 0x000e2a0, indexKOFSprites_02UM_Yamazaki, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000e2a0, 0x000e2c0, indexKOFSprites_02UM_Yamazaki, 0x00 },
    { L"B - Soul Palette", 0x000e2c0, 0x000e2e0, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000e2e0, 0x000e300, indexKOFSprites_02UM_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_C[] =
{
    { L"Yamazaki C", 0x000e400, 0x000e420, indexKOFSprites_02UM_Yamazaki },
    { L"C - Drill Super Extras", 0x000e420, 0x000e440, indexKOFSprites_02UM_Yamazaki, 0x03 },
    { L"C - Intro Stuff", 0x000e440, 0x000e460, indexKOFSprites_02UM_Yamazaki, 0x19 },
    { L"C - Electric Shock Effect", 0x000e460, 0x000e480, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"C - MAX Flash", 0x000e480, 0x000e4a0, indexKOFSprites_02UM_Yamazaki, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000e4a0, 0x000e4c0, indexKOFSprites_02UM_Yamazaki, 0x00 },
    { L"C - Soul Palette", 0x000e4c0, 0x000e4e0, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000e4e0, 0x000e500, indexKOFSprites_02UM_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YAMAZAKI_PALETTES_D[] =
{
    { L"Yamazaki D", 0x000e600, 0x000e620, indexKOFSprites_02UM_Yamazaki },
    { L"D - Drill Super Extras", 0x000e620, 0x000e640, indexKOFSprites_02UM_Yamazaki, 0x03 },
    { L"D - Intro Stuff", 0x000e640, 0x000e660, indexKOFSprites_02UM_Yamazaki, 0x19 },
    { L"D - Electric Shock Effect", 0x000e660, 0x000e680, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"D - MAX Flash", 0x000e680, 0x000e6a0, indexKOFSprites_02UM_Yamazaki, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000e6a0, 0x000e6c0, indexKOFSprites_02UM_Yamazaki, 0x00 },
    { L"D - Soul Palette", 0x000e6c0, 0x000e6e0, indexKOFSprites_02UM_Yamazaki, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000e6e0, 0x000e700, indexKOFSprites_02UM_Yamazaki, 0x00 },
};

const sDescTreeNode KOF02UM_S_YAMAZAKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_A, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_B, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_C, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_D, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_YAMAZAKI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A", 0x000e800, 0x000e820, indexKOFSprites_02UM_BlueMary },
    { L"A - Anton and Jacket", 0x000e820, 0x000e840, indexKOFSprites_02UM_BlueMary, 0x1a },
    { L"A - Desperation Move / Super Desperation Move", 0x000e840, 0x000e860, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"A - Electric Shock Effect", 0x000e860, 0x000e880, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"A - MAX Flash", 0x000e880, 0x000e8a0, indexKOFSprites_02UM_BlueMary, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000e8a0, 0x000e8c0, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"A - Soul Palette", 0x000e8c0, 0x000e8e0, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000e8e0, 0x000e900, indexKOFSprites_02UM_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B", 0x000ea00, 0x000ea20, indexKOFSprites_02UM_BlueMary },
    { L"B - Anton and Jacket", 0x000ea20, 0x000ea40, indexKOFSprites_02UM_BlueMary, 0x1a },
    { L"B - Desperation Move / Super Desperation Move", 0x000ea40, 0x000ea60, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"B - Electric Shock Effect", 0x000ea60, 0x000ea80, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"B - MAX Flash", 0x000ea80, 0x000eaa0, indexKOFSprites_02UM_BlueMary, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000eaa0, 0x000eac0, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"B - Soul Palette", 0x000eac0, 0x000eae0, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000eae0, 0x000eb00, indexKOFSprites_02UM_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C", 0x000ec00, 0x000ec20, indexKOFSprites_02UM_BlueMary },
    { L"C - Anton and Jacket", 0x000ec20, 0x000ec40, indexKOFSprites_02UM_BlueMary, 0x1a },
    { L"C - Desperation Move / Super Desperation Move", 0x000ec40, 0x000ec60, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"C - Electric Shock Effect", 0x000ec60, 0x000ec80, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"C - MAX Flash", 0x000ec80, 0x000eca0, indexKOFSprites_02UM_BlueMary, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000eca0, 0x000ecc0, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"C - Soul Palette", 0x000ecc0, 0x000ece0, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000ece0, 0x000ed00, indexKOFSprites_02UM_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D", 0x000ee00, 0x000ee20, indexKOFSprites_02UM_BlueMary },
    { L"D - Anton and Jacket", 0x000ee20, 0x000ee40, indexKOFSprites_02UM_BlueMary, 0x1a },
    { L"D - Desperation Move / Super Desperation Move", 0x000ee40, 0x000ee60, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"D - Electric Shock Effect", 0x000ee60, 0x000ee80, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"D - MAX Flash", 0x000ee80, 0x000eea0, indexKOFSprites_02UM_BlueMary, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000eea0, 0x000eec0, indexKOFSprites_02UM_BlueMary, 0x00 },
    { L"D - Soul Palette", 0x000eec0, 0x000eee0, indexKOFSprites_02UM_BlueMary, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000eee0, 0x000ef00, indexKOFSprites_02UM_BlueMary, 0x00 },
};

const sDescTreeNode KOF02UM_S_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_A, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_B, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_C, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_D, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BLUEMARY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_A[] =
{
    { L"Billy A", 0x000f000, 0x000f020, indexKOFSprites_02UM_Billy },
    { L"A - Hair", 0x000f020, 0x000f040, indexKOFSprites_02UM_Billy, 0x1a },
    { L"A - Eiji Kisaragi", 0x000f040, 0x000f060, indexKOFSprites_02UM_Billy, 0x19 },
    { L"A - Electric Shock Effect", 0x000f060, 0x000f080, indexKOFSprites_02UM_Billy, 0x18 },
    { L"A - MAX Flash", 0x000f080, 0x000f0a0, indexKOFSprites_02UM_Billy, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000f0a0, 0x000f0c0, indexKOFSprites_02UM_Billy, 0x00 },
    { L"A - Soul Palette", 0x000f0c0, 0x000f0e0, indexKOFSprites_02UM_Billy, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000f0e0, 0x000f100, indexKOFSprites_02UM_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_B[] =
{
    { L"Billy B", 0x000f200, 0x000f220, indexKOFSprites_02UM_Billy },
    { L"B - Hair", 0x000f220, 0x000f240, indexKOFSprites_02UM_Billy, 0x1a },
    { L"B - Eiji Kisaragi", 0x000f240, 0x000f260, indexKOFSprites_02UM_Billy, 0x19 },
    { L"B - Electric Shock Effect", 0x000f260, 0x000f280, indexKOFSprites_02UM_Billy, 0x18 },
    { L"B - MAX Flash", 0x000f280, 0x000f2a0, indexKOFSprites_02UM_Billy, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000f2a0, 0x000f2c0, indexKOFSprites_02UM_Billy, 0x00 },
    { L"B - Soul Palette", 0x000f2c0, 0x000f2e0, indexKOFSprites_02UM_Billy, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000f2e0, 0x000f300, indexKOFSprites_02UM_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_C[] =
{
    { L"Billy C", 0x000f400, 0x000f420, indexKOFSprites_02UM_Billy },
    { L"C - Hair", 0x000f420, 0x000f440, indexKOFSprites_02UM_Billy, 0x1a },
    { L"C - Eiji Kisaragi", 0x000f440, 0x000f460, indexKOFSprites_02UM_Billy, 0x19 },
    { L"C - Electric Shock Effect", 0x000f460, 0x000f480, indexKOFSprites_02UM_Billy, 0x18 },
    { L"C - MAX Flash", 0x000f480, 0x000f4a0, indexKOFSprites_02UM_Billy, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000f4a0, 0x000f4c0, indexKOFSprites_02UM_Billy, 0x00 },
    { L"C - Soul Palette", 0x000f4c0, 0x000f4e0, indexKOFSprites_02UM_Billy, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000f4e0, 0x000f500, indexKOFSprites_02UM_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BILLY_PALETTES_D[] =
{
    { L"Billy D", 0x000f600, 0x000f620, indexKOFSprites_02UM_Billy },
    { L"D - Hair", 0x000f620, 0x000f640, indexKOFSprites_02UM_Billy, 0x1a },
    { L"D - Eiji Kisaragi", 0x000f640, 0x000f660, indexKOFSprites_02UM_Billy, 0x19 },
    { L"D - Electric Shock Effect", 0x000f660, 0x000f680, indexKOFSprites_02UM_Billy, 0x18 },
    { L"D - MAX Flash", 0x000f680, 0x000f6a0, indexKOFSprites_02UM_Billy, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000f6a0, 0x000f6c0, indexKOFSprites_02UM_Billy, 0x00 },
    { L"D - Soul Palette", 0x000f6c0, 0x000f6e0, indexKOFSprites_02UM_Billy, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000f6e0, 0x000f700, indexKOFSprites_02UM_Billy, 0x00 },
};

const sDescTreeNode KOF02UM_S_BILLY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_A, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_B, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_C, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_D, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BILLY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_A[] =
{
    { L"Yashiro A", 0x000f800, 0x000f820, indexKOFSprites_02UM_Yashiro },
    { L"A - Hidden Super Desperation Move 1", 0x000f820, 0x000f840, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x000f840, 0x000f860, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"A - Electric Shock Effect", 0x000f860, 0x000f880, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"A - MAX Flash", 0x000f880, 0x000f8a0, indexKOFSprites_02UM_Yashiro, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x000f8a0, 0x000f8c0, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"A - Soul Palette", 0x000f8c0, 0x000f8e0, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x000f8e0, 0x000f900, indexKOFSprites_02UM_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_B[] =
{
    { L"Yashiro B", 0x000fa00, 0x000fa20, indexKOFSprites_02UM_Yashiro },
    { L"B - Hidden Super Desperation Move 1", 0x000fa20, 0x000fa40, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x000fa40, 0x000fa60, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"B - Electric Shock Effect", 0x000fa60, 0x000fa80, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"B - MAX Flash", 0x000fa80, 0x000faa0, indexKOFSprites_02UM_Yashiro, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x000faa0, 0x000fac0, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"B - Soul Palette", 0x000fac0, 0x000fae0, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x000fae0, 0x000fb00, indexKOFSprites_02UM_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_C[] =
{
    { L"Yashiro C", 0x000fc00, 0x000fc20, indexKOFSprites_02UM_Yashiro },
    { L"C - Hidden Super Desperation Move 1", 0x000fc20, 0x000fc40, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x000fc40, 0x000fc60, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"C - Electric Shock Effect", 0x000fc60, 0x000fc80, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"C - MAX Flash", 0x000fc80, 0x000fca0, indexKOFSprites_02UM_Yashiro, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x000fca0, 0x000fcc0, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"C - Soul Palette", 0x000fcc0, 0x000fce0, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x000fce0, 0x000fd00, indexKOFSprites_02UM_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_YASHIRO_PALETTES_D[] =
{
    { L"Yashiro D", 0x000fe00, 0x000fe20, indexKOFSprites_02UM_Yashiro },
    { L"D - Hidden Super Desperation Move 1", 0x000fe20, 0x000fe40, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x000fe40, 0x000fe60, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"D - Electric Shock Effect", 0x000fe60, 0x000fe80, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"D - MAX Flash", 0x000fe80, 0x000fea0, indexKOFSprites_02UM_Yashiro, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x000fea0, 0x000fec0, indexKOFSprites_02UM_Yashiro, 0x00 },
    { L"D - Soul Palette", 0x000fec0, 0x000fee0, indexKOFSprites_02UM_Yashiro, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x000fee0, 0x000ff00, indexKOFSprites_02UM_Yashiro, 0x00 },
};

const sDescTreeNode KOF02UM_S_YASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_A, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_B, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_C, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_D, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_YASHIRO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_A[] =
{
    { L"Shermie A", 0x0010000, 0x0010020, indexKOFSprites_02UM_Shermie },
    { L"A - Hidden Super Desperation Move 1", 0x0010020, 0x0010040, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0010040, 0x0010060, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"A - Electric Shock Effect", 0x0010060, 0x0010080, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"A - MAX Flash", 0x0010080, 0x00100a0, indexKOFSprites_02UM_Shermie, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00100a0, 0x00100c0, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"A - Soul Palette", 0x00100c0, 0x00100e0, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00100e0, 0x0010100, indexKOFSprites_02UM_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_B[] =
{
    { L"Shermie B", 0x0010200, 0x0010220, indexKOFSprites_02UM_Shermie },
    { L"B - Hidden Super Desperation Move 1", 0x0010220, 0x0010240, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0010240, 0x0010260, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"B - Electric Shock Effect", 0x0010260, 0x0010280, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"B - MAX Flash", 0x0010280, 0x00102a0, indexKOFSprites_02UM_Shermie, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00102a0, 0x00102c0, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"B - Soul Palette", 0x00102c0, 0x00102e0, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00102e0, 0x0010300, indexKOFSprites_02UM_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_C[] =
{
    { L"Shermie C", 0x0010400, 0x0010420, indexKOFSprites_02UM_Shermie },
    { L"C - Hidden Super Desperation Move 1", 0x0010420, 0x0010440, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0010440, 0x0010460, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"C - Electric Shock Effect", 0x0010460, 0x0010480, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"C - MAX Flash", 0x0010480, 0x00104a0, indexKOFSprites_02UM_Shermie, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00104a0, 0x00104c0, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"C - Soul Palette", 0x00104c0, 0x00104e0, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00104e0, 0x0010500, indexKOFSprites_02UM_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SHERMIE_PALETTES_D[] =
{
    { L"Shermie D", 0x0010600, 0x0010620, indexKOFSprites_02UM_Shermie },
    { L"D - Hidden Super Desperation Move 1", 0x0010620, 0x0010640, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0010640, 0x0010660, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"D - Electric Shock Effect", 0x0010660, 0x0010680, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"D - MAX Flash", 0x0010680, 0x00106a0, indexKOFSprites_02UM_Shermie, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00106a0, 0x00106c0, indexKOFSprites_02UM_Shermie, 0x00 },
    { L"D - Soul Palette", 0x00106c0, 0x00106e0, indexKOFSprites_02UM_Shermie, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00106e0, 0x0010700, indexKOFSprites_02UM_Shermie, 0x00 },
};

const sDescTreeNode KOF02UM_S_SHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_A, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_B, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_C, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_D, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_SHERMIE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_A[] =
{
    { L"Chris A", 0x0010800, 0x0010820, indexKOFSprites_02UM_Chris },
    { L"A - Hidden Super Desperation Move 1", 0x0010820, 0x0010840, indexKOFSprites_02UM_Chris, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0010840, 0x0010860, indexKOFSprites_02UM_Chris, 0x00 },
    { L"A - Electric Shock Effect", 0x0010860, 0x0010880, indexKOFSprites_02UM_Chris, 0x18 },
    { L"A - MAX Flash", 0x0010880, 0x00108a0, indexKOFSprites_02UM_Chris, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00108a0, 0x00108c0, indexKOFSprites_02UM_Chris, 0x00 },
    { L"A - Soul Palette", 0x00108c0, 0x00108e0, indexKOFSprites_02UM_Chris, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00108e0, 0x0010900, indexKOFSprites_02UM_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_B[] =
{
    { L"Chris B", 0x0010a00, 0x0010a20, indexKOFSprites_02UM_Chris },
    { L"B - Hidden Super Desperation Move 1", 0x0010a20, 0x0010a40, indexKOFSprites_02UM_Chris, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0010a40, 0x0010a60, indexKOFSprites_02UM_Chris, 0x00 },
    { L"B - Electric Shock Effect", 0x0010a60, 0x0010a80, indexKOFSprites_02UM_Chris, 0x18 },
    { L"B - MAX Flash", 0x0010a80, 0x0010aa0, indexKOFSprites_02UM_Chris, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0010aa0, 0x0010ac0, indexKOFSprites_02UM_Chris, 0x00 },
    { L"B - Soul Palette", 0x0010ac0, 0x0010ae0, indexKOFSprites_02UM_Chris, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0010ae0, 0x0010b00, indexKOFSprites_02UM_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_C[] =
{
    { L"Chris C", 0x0010c00, 0x0010c20, indexKOFSprites_02UM_Chris },
    { L"C - Hidden Super Desperation Move 1", 0x0010c20, 0x0010c40, indexKOFSprites_02UM_Chris, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0010c40, 0x0010c60, indexKOFSprites_02UM_Chris, 0x00 },
    { L"C - Electric Shock Effect", 0x0010c60, 0x0010c80, indexKOFSprites_02UM_Chris, 0x18 },
    { L"C - MAX Flash", 0x0010c80, 0x0010ca0, indexKOFSprites_02UM_Chris, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0010ca0, 0x0010cc0, indexKOFSprites_02UM_Chris, 0x00 },
    { L"C - Soul Palette", 0x0010cc0, 0x0010ce0, indexKOFSprites_02UM_Chris, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0010ce0, 0x0010d00, indexKOFSprites_02UM_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CHRIS_PALETTES_D[] =
{
    { L"Chris D", 0x0010e00, 0x0010e20, indexKOFSprites_02UM_Chris },
    { L"D - Hidden Super Desperation Move 1", 0x0010e20, 0x0010e40, indexKOFSprites_02UM_Chris, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0010e40, 0x0010e60, indexKOFSprites_02UM_Chris, 0x00 },
    { L"D - Electric Shock Effect", 0x0010e60, 0x0010e80, indexKOFSprites_02UM_Chris, 0x18 },
    { L"D - MAX Flash", 0x0010e80, 0x0010ea0, indexKOFSprites_02UM_Chris, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0010ea0, 0x0010ec0, indexKOFSprites_02UM_Chris, 0x00 },
    { L"D - Soul Palette", 0x0010ec0, 0x0010ee0, indexKOFSprites_02UM_Chris, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0010ee0, 0x0010f00, indexKOFSprites_02UM_Chris, 0x00 },
};

const sDescTreeNode KOF02UM_S_CHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_A, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_B, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_C, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_D, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CHRIS_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_A[] =
{
    { L"K’ A", 0x0011000, 0x0011020, indexKOFSprites_02UM_K },
    { L"A - Diana Intro Stuff", 0x0011020, 0x0011040, indexKOFSprites_02UM_K, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x0011040, 0x0011060, indexKOFSprites_02UM_K, 0x00 },
    { L"A - Electric Shock Effect", 0x0011060, 0x0011080, indexKOFSprites_02UM_K, 0x18 },
    { L"A - MAX Flash", 0x0011080, 0x00110a0, indexKOFSprites_02UM_K, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00110a0, 0x00110c0, indexKOFSprites_02UM_K, 0x00 },
    { L"A - Soul Palette", 0x00110c0, 0x00110e0, indexKOFSprites_02UM_K, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00110e0, 0x0011100, indexKOFSprites_02UM_K, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_B[] =
{
    { L"K’ B", 0x0011200, 0x0011220, indexKOFSprites_02UM_K },
    { L"B - Diana Intro Stuff", 0x0011220, 0x0011240, indexKOFSprites_02UM_K, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x0011240, 0x0011260, indexKOFSprites_02UM_K, 0x00 },
    { L"B - Electric Shock Effect", 0x0011260, 0x0011280, indexKOFSprites_02UM_K, 0x18 },
    { L"B - MAX Flash", 0x0011280, 0x00112a0, indexKOFSprites_02UM_K, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00112a0, 0x00112c0, indexKOFSprites_02UM_K, 0x00 },
    { L"B - Soul Palette", 0x00112c0, 0x00112e0, indexKOFSprites_02UM_K, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00112e0, 0x0011300, indexKOFSprites_02UM_K, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_C[] =
{
    { L"K’ C", 0x0011400, 0x0011420, indexKOFSprites_02UM_K },
    { L"C - Diana Intro Stuff", 0x0011420, 0x0011440, indexKOFSprites_02UM_K, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x0011440, 0x0011460, indexKOFSprites_02UM_K, 0x00 },
    { L"C - Electric Shock Effect", 0x0011460, 0x0011480, indexKOFSprites_02UM_K, 0x18 },
    { L"C - MAX Flash", 0x0011480, 0x00114a0, indexKOFSprites_02UM_K, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00114a0, 0x00114c0, indexKOFSprites_02UM_K, 0x00 },
    { L"C - Soul Palette", 0x00114c0, 0x00114e0, indexKOFSprites_02UM_K, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00114e0, 0x0011500, indexKOFSprites_02UM_K, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_K_PALETTES_D[] =
{
    { L"K’ D", 0x0011600, 0x0011620, indexKOFSprites_02UM_K },
    { L"D - Diana Intro Stuff", 0x0011620, 0x0011640, indexKOFSprites_02UM_K, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x0011640, 0x0011660, indexKOFSprites_02UM_K, 0x00 },
    { L"D - Electric Shock Effect", 0x0011660, 0x0011680, indexKOFSprites_02UM_K, 0x18 },
    { L"D - MAX Flash", 0x0011680, 0x00116a0, indexKOFSprites_02UM_K, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00116a0, 0x00116c0, indexKOFSprites_02UM_K, 0x00 },
    { L"D - Soul Palette", 0x00116c0, 0x00116e0, indexKOFSprites_02UM_K, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00116e0, 0x0011700, indexKOFSprites_02UM_K, 0x00 },
};

const sDescTreeNode KOF02UM_S_K_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_A, ARRAYSIZE(KOF02UM_S_K_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_B, ARRAYSIZE(KOF02UM_S_K_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_C, ARRAYSIZE(KOF02UM_S_K_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_D, ARRAYSIZE(KOF02UM_S_K_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_K_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_K_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_A[] =
{
    { L"Maxima A", 0x0011800, 0x0011820, indexKOFSprites_02UM_Maxima },
    { L"A - Hidden Super Desperation Move 1", 0x0011820, 0x0011840, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0011840, 0x0011860, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"A - Electric Shock Effect", 0x0011860, 0x0011880, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"A - MAX Flash", 0x0011880, 0x00118a0, indexKOFSprites_02UM_Maxima, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00118a0, 0x00118c0, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"A - Soul Palette", 0x00118c0, 0x00118e0, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00118e0, 0x0011900, indexKOFSprites_02UM_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_B[] =
{
    { L"Maxima B", 0x0011a00, 0x0011a20, indexKOFSprites_02UM_Maxima },
    { L"B - Hidden Super Desperation Move 1", 0x0011a20, 0x0011a40, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0011a40, 0x0011a60, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"B - Electric Shock Effect", 0x0011a60, 0x0011a80, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"B - MAX Flash", 0x0011a80, 0x0011aa0, indexKOFSprites_02UM_Maxima, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0011aa0, 0x0011ac0, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"B - Soul Palette", 0x0011ac0, 0x0011ae0, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0011ae0, 0x0011b00, indexKOFSprites_02UM_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_C[] =
{
    { L"Maxima C", 0x0011c00, 0x0011c20, indexKOFSprites_02UM_Maxima },
    { L"C - Hidden Super Desperation Move 1", 0x0011c20, 0x0011c40, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0011c40, 0x0011c60, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"C - Electric Shock Effect", 0x0011c60, 0x0011c80, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"C - MAX Flash", 0x0011c80, 0x0011ca0, indexKOFSprites_02UM_Maxima, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0011ca0, 0x0011cc0, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"C - Soul Palette", 0x0011cc0, 0x0011ce0, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0011ce0, 0x0011d00, indexKOFSprites_02UM_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_MAXIMA_PALETTES_D[] =
{
    { L"Maxima D", 0x0011e00, 0x0011e20, indexKOFSprites_02UM_Maxima },
    { L"D - Hidden Super Desperation Move 1", 0x0011e20, 0x0011e40, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0011e40, 0x0011e60, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"D - Electric Shock Effect", 0x0011e60, 0x0011e80, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"D - MAX Flash", 0x0011e80, 0x0011ea0, indexKOFSprites_02UM_Maxima, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0011ea0, 0x0011ec0, indexKOFSprites_02UM_Maxima, 0x00 },
    { L"D - Soul Palette", 0x0011ec0, 0x0011ee0, indexKOFSprites_02UM_Maxima, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0011ee0, 0x0011f00, indexKOFSprites_02UM_Maxima, 0x00 },
};

const sDescTreeNode KOF02UM_S_MAXIMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_A, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_B, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_C, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_D, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_MAXIMA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_A[] =
{
    { L"Whip A", 0x0012000, 0x0012020, indexKOFSprites_02UM_Whip },
    { L"A - Hidden Super Desperation Move 1", 0x0012020, 0x0012040, indexKOFSprites_02UM_Whip, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0012040, 0x0012060, indexKOFSprites_02UM_Whip, 0x00 },
    { L"A - Electric Shock Effect", 0x0012060, 0x0012080, indexKOFSprites_02UM_Whip, 0x18 },
    { L"A - MAX Flash", 0x0012080, 0x00120a0, indexKOFSprites_02UM_Whip, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00120a0, 0x00120c0, indexKOFSprites_02UM_Whip, 0x00 },
    { L"A - Soul Palette", 0x00120c0, 0x00120e0, indexKOFSprites_02UM_Whip, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00120e0, 0x0012100, indexKOFSprites_02UM_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_B[] =
{
    { L"Whip B", 0x0012200, 0x0012220, indexKOFSprites_02UM_Whip },
    { L"B - Hidden Super Desperation Move 1", 0x0012220, 0x0012240, indexKOFSprites_02UM_Whip, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0012240, 0x0012260, indexKOFSprites_02UM_Whip, 0x00 },
    { L"B - Electric Shock Effect", 0x0012260, 0x0012280, indexKOFSprites_02UM_Whip, 0x18 },
    { L"B - MAX Flash", 0x0012280, 0x00122a0, indexKOFSprites_02UM_Whip, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00122a0, 0x00122c0, indexKOFSprites_02UM_Whip, 0x00 },
    { L"B - Soul Palette", 0x00122c0, 0x00122e0, indexKOFSprites_02UM_Whip, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00122e0, 0x0012300, indexKOFSprites_02UM_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_C[] =
{
    { L"Whip C", 0x0012400, 0x0012420, indexKOFSprites_02UM_Whip },
    { L"C - Hidden Super Desperation Move 1", 0x0012420, 0x0012440, indexKOFSprites_02UM_Whip, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0012440, 0x0012460, indexKOFSprites_02UM_Whip, 0x00 },
    { L"C - Electric Shock Effect", 0x0012460, 0x0012480, indexKOFSprites_02UM_Whip, 0x18 },
    { L"C - MAX Flash", 0x0012480, 0x00124a0, indexKOFSprites_02UM_Whip, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00124a0, 0x00124c0, indexKOFSprites_02UM_Whip, 0x00 },
    { L"C - Soul Palette", 0x00124c0, 0x00124e0, indexKOFSprites_02UM_Whip, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00124e0, 0x0012500, indexKOFSprites_02UM_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_WHIP_PALETTES_D[] =
{
    { L"Whip D", 0x0012600, 0x0012620, indexKOFSprites_02UM_Whip },
    { L"D - Hidden Super Desperation Move 1", 0x0012620, 0x0012640, indexKOFSprites_02UM_Whip, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0012640, 0x0012660, indexKOFSprites_02UM_Whip, 0x00 },
    { L"D - Electric Shock Effect", 0x0012660, 0x0012680, indexKOFSprites_02UM_Whip, 0x18 },
    { L"D - MAX Flash", 0x0012680, 0x00126a0, indexKOFSprites_02UM_Whip, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00126a0, 0x00126c0, indexKOFSprites_02UM_Whip, 0x00 },
    { L"D - Soul Palette", 0x00126c0, 0x00126e0, indexKOFSprites_02UM_Whip, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00126e0, 0x0012700, indexKOFSprites_02UM_Whip, 0x00 },
};

const sDescTreeNode KOF02UM_S_WHIP_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_A, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_B, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_C, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_D, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_WHIP_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_A[] =
{
    { L"Vanessa A", 0x0012800, 0x0012820, indexKOFSprites_02UM_Vanessa },
    { L"A - Hidden Super Desperation Move 1", 0x0012820, 0x0012840, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0012840, 0x0012860, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"A - Electric Shock Effect", 0x0012860, 0x0012880, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"A - MAX Flash", 0x0012880, 0x00128a0, indexKOFSprites_02UM_Vanessa, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00128a0, 0x00128c0, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"A - Soul Palette", 0x00128c0, 0x00128e0, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00128e0, 0x0012900, indexKOFSprites_02UM_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_B[] =
{
    { L"Vanessa B", 0x0012a00, 0x0012a20, indexKOFSprites_02UM_Vanessa },
    { L"B - Hidden Super Desperation Move 1", 0x0012a20, 0x0012a40, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0012a40, 0x0012a60, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"B - Electric Shock Effect", 0x0012a60, 0x0012a80, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"B - MAX Flash", 0x0012a80, 0x0012aa0, indexKOFSprites_02UM_Vanessa, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0012aa0, 0x0012ac0, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"B - Soul Palette", 0x0012ac0, 0x0012ae0, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0012ae0, 0x0012b00, indexKOFSprites_02UM_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_C[] =
{
    { L"Vanessa C", 0x0012c00, 0x0012c20, indexKOFSprites_02UM_Vanessa },
    { L"C - Hidden Super Desperation Move 1", 0x0012c20, 0x0012c40, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0012c40, 0x0012c60, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"C - Electric Shock Effect", 0x0012c60, 0x0012c80, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"C - MAX Flash", 0x0012c80, 0x0012ca0, indexKOFSprites_02UM_Vanessa, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0012ca0, 0x0012cc0, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"C - Soul Palette", 0x0012cc0, 0x0012ce0, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0012ce0, 0x0012d00, indexKOFSprites_02UM_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_VANESSA_PALETTES_D[] =
{
    { L"Vanessa D", 0x0012e00, 0x0012e20, indexKOFSprites_02UM_Vanessa },
    { L"D - Hidden Super Desperation Move 1", 0x0012e20, 0x0012e40, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0012e40, 0x0012e60, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"D - Electric Shock Effect", 0x0012e60, 0x0012e80, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"D - MAX Flash", 0x0012e80, 0x0012ea0, indexKOFSprites_02UM_Vanessa, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0012ea0, 0x0012ec0, indexKOFSprites_02UM_Vanessa, 0x00 },
    { L"D - Soul Palette", 0x0012ec0, 0x0012ee0, indexKOFSprites_02UM_Vanessa, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0012ee0, 0x0012f00, indexKOFSprites_02UM_Vanessa, 0x00 },
};

const sDescTreeNode KOF02UM_S_VANESSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_A, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_B, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_C, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_D, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_VANESSA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_A[] =
{
    { L"Seth A", 0x0013000, 0x0013020, indexKOFSprites_02UM_Seth },
    { L"A - Hidden Super Desperation Move 1", 0x0013020, 0x0013040, indexKOFSprites_02UM_Seth, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0013040, 0x0013060, indexKOFSprites_02UM_Seth, 0x00 },
    { L"A - Electric Shock Effect", 0x0013060, 0x0013080, indexKOFSprites_02UM_Seth, 0x18 },
    { L"A - MAX Flash", 0x0013080, 0x00130a0, indexKOFSprites_02UM_Seth, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00130a0, 0x00130c0, indexKOFSprites_02UM_Seth, 0x00 },
    { L"A - Soul Palette", 0x00130c0, 0x00130e0, indexKOFSprites_02UM_Seth, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00130e0, 0x0013100, indexKOFSprites_02UM_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_B[] =
{
    { L"Seth B", 0x0013200, 0x0013220, indexKOFSprites_02UM_Seth },
    { L"B - Hidden Super Desperation Move 1", 0x0013220, 0x0013240, indexKOFSprites_02UM_Seth, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0013240, 0x0013260, indexKOFSprites_02UM_Seth, 0x00 },
    { L"B - Electric Shock Effect", 0x0013260, 0x0013280, indexKOFSprites_02UM_Seth, 0x18 },
    { L"B - MAX Flash", 0x0013280, 0x00132a0, indexKOFSprites_02UM_Seth, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00132a0, 0x00132c0, indexKOFSprites_02UM_Seth, 0x00 },
    { L"B - Soul Palette", 0x00132c0, 0x00132e0, indexKOFSprites_02UM_Seth, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00132e0, 0x0013300, indexKOFSprites_02UM_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_C[] =
{
    { L"Seth C", 0x0013400, 0x0013420, indexKOFSprites_02UM_Seth },
    { L"C - Hidden Super Desperation Move 1", 0x0013420, 0x0013440, indexKOFSprites_02UM_Seth, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0013440, 0x0013460, indexKOFSprites_02UM_Seth, 0x00 },
    { L"C - Electric Shock Effect", 0x0013460, 0x0013480, indexKOFSprites_02UM_Seth, 0x18 },
    { L"C - MAX Flash", 0x0013480, 0x00134a0, indexKOFSprites_02UM_Seth, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00134a0, 0x00134c0, indexKOFSprites_02UM_Seth, 0x00 },
    { L"C - Soul Palette", 0x00134c0, 0x00134e0, indexKOFSprites_02UM_Seth, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00134e0, 0x0013500, indexKOFSprites_02UM_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SETH_PALETTES_D[] =
{
    { L"Seth D", 0x0013600, 0x0013620, indexKOFSprites_02UM_Seth },
    { L"D - Hidden Super Desperation Move 1", 0x0013620, 0x0013640, indexKOFSprites_02UM_Seth, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0013640, 0x0013660, indexKOFSprites_02UM_Seth, 0x00 },
    { L"D - Electric Shock Effect", 0x0013660, 0x0013680, indexKOFSprites_02UM_Seth, 0x18 },
    { L"D - MAX Flash", 0x0013680, 0x00136a0, indexKOFSprites_02UM_Seth, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00136a0, 0x00136c0, indexKOFSprites_02UM_Seth, 0x00 },
    { L"D - Soul Palette", 0x00136c0, 0x00136e0, indexKOFSprites_02UM_Seth, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00136e0, 0x0013700, indexKOFSprites_02UM_Seth, 0x00 },
};

const sDescTreeNode KOF02UM_S_SETH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_A, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_B, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_C, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_D, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_SETH_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_A[] =
{
    { L"Ramon A", 0x0013800, 0x0013820, indexKOFSprites_02UM_Ramon },
    { L"A - Hidden Super Desperation Move 1", 0x0013820, 0x0013840, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0013840, 0x0013860, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"A - Electric Shock Effect", 0x0013860, 0x0013880, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"A - MAX Flash", 0x0013880, 0x00138a0, indexKOFSprites_02UM_Ramon, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00138a0, 0x00138c0, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"A - Soul Palette", 0x00138c0, 0x00138e0, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00138e0, 0x0013900, indexKOFSprites_02UM_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_B[] =
{
    { L"Ramon B", 0x0013a00, 0x0013a20, indexKOFSprites_02UM_Ramon },
    { L"B - Hidden Super Desperation Move 1", 0x0013a20, 0x0013a40, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0013a40, 0x0013a60, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"B - Electric Shock Effect", 0x0013a60, 0x0013a80, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"B - MAX Flash", 0x0013a80, 0x0013aa0, indexKOFSprites_02UM_Ramon, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0013aa0, 0x0013ac0, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"B - Soul Palette", 0x0013ac0, 0x0013ae0, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0013ae0, 0x0013b00, indexKOFSprites_02UM_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_C[] =
{
    { L"Ramon C", 0x0013c00, 0x0013c20, indexKOFSprites_02UM_Ramon },
    { L"C - Hidden Super Desperation Move 1", 0x0013c20, 0x0013c40, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0013c40, 0x0013c60, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"C - Electric Shock Effect", 0x0013c60, 0x0013c80, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"C - MAX Flash", 0x0013c80, 0x0013ca0, indexKOFSprites_02UM_Ramon, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0013ca0, 0x0013cc0, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"C - Soul Palette", 0x0013cc0, 0x0013ce0, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0013ce0, 0x0013d00, indexKOFSprites_02UM_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_RAMON_PALETTES_D[] =
{
    { L"Ramon D", 0x0013e00, 0x0013e20, indexKOFSprites_02UM_Ramon },
    { L"D - Hidden Super Desperation Move 1", 0x0013e20, 0x0013e40, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0013e40, 0x0013e60, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"D - Electric Shock Effect", 0x0013e60, 0x0013e80, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"D - MAX Flash", 0x0013e80, 0x0013ea0, indexKOFSprites_02UM_Ramon, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0013ea0, 0x0013ec0, indexKOFSprites_02UM_Ramon, 0x00 },
    { L"D - Soul Palette", 0x0013ec0, 0x0013ee0, indexKOFSprites_02UM_Ramon, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0013ee0, 0x0013f00, indexKOFSprites_02UM_Ramon, 0x00 },
};

const sDescTreeNode KOF02UM_S_RAMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_A, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_B, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_C, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_D, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_RAMON_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_A[] =
{
    { L"Kula A", 0x0014000, 0x0014020, indexKOFSprites_02UM_Kula },
    { L"A - Diana and Candy Stuff", 0x0014020, 0x0014040, indexKOFSprites_02UM_Kula, 0x1c },
    { L"A - Foxy Stuff", 0x0014040, 0x0014060, indexKOFSprites_02UM_Kula, 0x1b },
    { L"A - Electric Shock Effect", 0x0014060, 0x0014080, indexKOFSprites_02UM_Kula, 0x18 },
    { L"A - MAX Flash", 0x0014080, 0x00140a0, indexKOFSprites_02UM_Kula, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00140a0, 0x00140c0, indexKOFSprites_02UM_Kula, 0x00 },
    { L"A - Soul Palette", 0x00140c0, 0x00140e0, indexKOFSprites_02UM_Kula, 0x18 },
    { L"A - Critical Ice", 0x00140e0, 0x0014100, indexKOFSprites_02UM_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_B[] =
{
    { L"Kula B", 0x0014200, 0x0014220, indexKOFSprites_02UM_Kula },
    { L"B - Diana and Candy Stuff", 0x0014220, 0x0014240, indexKOFSprites_02UM_Kula, 0x1c },
    { L"B - Foxy Stuff", 0x0014240, 0x0014260, indexKOFSprites_02UM_Kula, 0x1b },
    { L"B - Electric Shock Effect", 0x0014260, 0x0014280, indexKOFSprites_02UM_Kula, 0x18 },
    { L"B - MAX Flash", 0x0014280, 0x00142a0, indexKOFSprites_02UM_Kula, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00142a0, 0x00142c0, indexKOFSprites_02UM_Kula, 0x00 },
    { L"B - Soul Palette", 0x00142c0, 0x00142e0, indexKOFSprites_02UM_Kula, 0x18 },
    { L"B - Critical Ice", 0x00142e0, 0x0014300, indexKOFSprites_02UM_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_C[] =
{
    { L"Kula C", 0x0014400, 0x0014420, indexKOFSprites_02UM_Kula },
    { L"C - Diana and Candy Stuff", 0x0014420, 0x0014440, indexKOFSprites_02UM_Kula, 0x1c },
    { L"C - Foxy Stuff", 0x0014440, 0x0014460, indexKOFSprites_02UM_Kula, 0x1b },
    { L"C - Electric Shock Effect", 0x0014460, 0x0014480, indexKOFSprites_02UM_Kula, 0x18 },
    { L"C - MAX Flash", 0x0014480, 0x00144a0, indexKOFSprites_02UM_Kula, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00144a0, 0x00144c0, indexKOFSprites_02UM_Kula, 0x00 },
    { L"C - Soul Palette", 0x00144c0, 0x00144e0, indexKOFSprites_02UM_Kula, 0x18 },
    { L"C - Critical Ice", 0x00144e0, 0x0014500, indexKOFSprites_02UM_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02UM_S_KULA_PALETTES_D[] =
{
    { L"Kula D", 0x0014600, 0x0014620, indexKOFSprites_02UM_Kula },
    { L"D - Diana and Candy Stuff", 0x0014620, 0x0014640, indexKOFSprites_02UM_Kula, 0x1c },
    { L"D - Foxy Stuff", 0x0014640, 0x0014660, indexKOFSprites_02UM_Kula, 0x1b },
    { L"D - Electric Shock Effect", 0x0014660, 0x0014680, indexKOFSprites_02UM_Kula, 0x18 },
    { L"D - MAX Flash", 0x0014680, 0x00146a0, indexKOFSprites_02UM_Kula, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00146a0, 0x00146c0, indexKOFSprites_02UM_Kula, 0x00 },
    { L"D - Soul Palette", 0x00146c0, 0x00146e0, indexKOFSprites_02UM_Kula, 0x18 },
    { L"D - Critical Ice", 0x00146e0, 0x0014700, indexKOFSprites_02UM_Kula, 0x02 },
};

const sDescTreeNode KOF02UM_S_KULA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_A, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_B, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_C, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_D, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KULA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_A[] =
{
    { L"Nameless A", 0x0014800, 0x0014820, indexKOFSprites_02UM_Nameless },
    { L"A - Shakuhou Main Fire", 0x0014820, 0x0014840, indexKOFSprites_02UM_Nameless, 0x10 },
    { L"A - Desperation Move / Super Desperation Move", 0x0014840, 0x0014860, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"A - Electric Shock Effect", 0x0014860, 0x0014880, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"A - MAX Flash", 0x0014880, 0x00148a0, indexKOFSprites_02UM_Nameless, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00148a0, 0x00148c0, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"A - Soul Palette", 0x00148c0, 0x00148e0, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"A - Rasen Drill", 0x00148e0, 0x0014900, indexKOFSprites_02UM_Nameless, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_B[] =
{
    { L"Nameless B", 0x0014a00, 0x0014a20, indexKOFSprites_02UM_Nameless },
    { L"B - Shakuhou Main Fire", 0x0014a20, 0x0014a40, indexKOFSprites_02UM_Nameless, 0x10 },
    { L"B - Desperation Move / Super Desperation Move", 0x0014a40, 0x0014a60, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"B - Electric Shock Effect", 0x0014a60, 0x0014a80, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"B - MAX Flash", 0x0014a80, 0x0014aa0, indexKOFSprites_02UM_Nameless, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0014aa0, 0x0014ac0, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"B - Soul Palette", 0x0014ac0, 0x0014ae0, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"B - Rasen Drill", 0x0014ae0, 0x0014b00, indexKOFSprites_02UM_Nameless, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_C[] =
{
    { L"Nameless C", 0x0014c00, 0x0014c20, indexKOFSprites_02UM_Nameless },
    { L"C - Shakuhou Main Fire", 0x0014c20, 0x0014c40, indexKOFSprites_02UM_Nameless, 0x10 },
    { L"C - Desperation Move / Super Desperation Move", 0x0014c40, 0x0014c60, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"C - Electric Shock Effect", 0x0014c60, 0x0014c80, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"C - MAX Flash", 0x0014c80, 0x0014ca0, indexKOFSprites_02UM_Nameless, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0014ca0, 0x0014cc0, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"C - Soul Palette", 0x0014cc0, 0x0014ce0, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"C - Rasen Drill", 0x0014ce0, 0x0014d00, indexKOFSprites_02UM_Nameless, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_NAMELESS_PALETTES_D[] =
{
    { L"Nameless D", 0x0014e00, 0x0014e20, indexKOFSprites_02UM_Nameless },
    { L"D - Shakuhou Main Fire", 0x0014e20, 0x0014e40, indexKOFSprites_02UM_Nameless, 0x10 },
    { L"D - Desperation Move / Super Desperation Move", 0x0014e40, 0x0014e60, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"D - Electric Shock Effect", 0x0014e60, 0x0014e80, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"D - MAX Flash", 0x0014e80, 0x0014ea0, indexKOFSprites_02UM_Nameless, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0014ea0, 0x0014ec0, indexKOFSprites_02UM_Nameless, 0x00 },
    { L"D - Soul Palette", 0x0014ec0, 0x0014ee0, indexKOFSprites_02UM_Nameless, 0x18 },
    { L"D - Rasen Drill", 0x0014ee0, 0x0014f00, indexKOFSprites_02UM_Nameless, 0x09 },
};

const sDescTreeNode KOF02UM_S_NAMELESS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_A, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_B, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_C, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_D, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_NAMELESS_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_A[] =
{
    { L"Angel A", 0x0015000, 0x0015020, indexKOFSprites_02UM_Angel },
    { L"A - Time Over Lose", 0x0015020, 0x0015040, indexKOFSprites_02UM_Angel, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x0015040, 0x0015060, indexKOFSprites_02UM_Angel, 0x00 },
    { L"A - Electric Shock Effect", 0x0015060, 0x0015080, indexKOFSprites_02UM_Angel, 0x18 },
    { L"A - MAX Flash", 0x0015080, 0x00150a0, indexKOFSprites_02UM_Angel, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00150a0, 0x00150c0, indexKOFSprites_02UM_Angel, 0x00 },
    { L"A - Soul Palette", 0x00150c0, 0x00150e0, indexKOFSprites_02UM_Angel, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00150e0, 0x0015100, indexKOFSprites_02UM_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_B[] =
{
    { L"Angel B", 0x0015200, 0x0015220, indexKOFSprites_02UM_Angel },
    { L"B - Time Over Lose", 0x0015220, 0x0015240, indexKOFSprites_02UM_Angel, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x0015240, 0x0015260, indexKOFSprites_02UM_Angel, 0x00 },
    { L"B - Electric Shock Effect", 0x0015260, 0x0015280, indexKOFSprites_02UM_Angel, 0x18 },
    { L"B - MAX Flash", 0x0015280, 0x00152a0, indexKOFSprites_02UM_Angel, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00152a0, 0x00152c0, indexKOFSprites_02UM_Angel, 0x00 },
    { L"B - Soul Palette", 0x00152c0, 0x00152e0, indexKOFSprites_02UM_Angel, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00152e0, 0x0015300, indexKOFSprites_02UM_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_C[] =
{
    { L"Angel C", 0x0015400, 0x0015420, indexKOFSprites_02UM_Angel },
    { L"C - Time Over Lose", 0x0015420, 0x0015440, indexKOFSprites_02UM_Angel, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x0015440, 0x0015460, indexKOFSprites_02UM_Angel, 0x00 },
    { L"C - Electric Shock Effect", 0x0015460, 0x0015480, indexKOFSprites_02UM_Angel, 0x18 },
    { L"C - MAX Flash", 0x0015480, 0x00154a0, indexKOFSprites_02UM_Angel, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00154a0, 0x00154c0, indexKOFSprites_02UM_Angel, 0x00 },
    { L"C - Soul Palette", 0x00154c0, 0x00154e0, indexKOFSprites_02UM_Angel, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00154e0, 0x0015500, indexKOFSprites_02UM_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_ANGEL_PALETTES_D[] =
{
    { L"Angel D", 0x0015600, 0x0015620, indexKOFSprites_02UM_Angel },
    { L"D - Time Over Lose", 0x0015620, 0x0015640, indexKOFSprites_02UM_Angel, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x0015640, 0x0015660, indexKOFSprites_02UM_Angel, 0x00 },
    { L"D - Electric Shock Effect", 0x0015660, 0x0015680, indexKOFSprites_02UM_Angel, 0x18 },
    { L"D - MAX Flash", 0x0015680, 0x00156a0, indexKOFSprites_02UM_Angel, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00156a0, 0x00156c0, indexKOFSprites_02UM_Angel, 0x00 },
    { L"D - Soul Palette", 0x00156c0, 0x00156e0, indexKOFSprites_02UM_Angel, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00156e0, 0x0015700, indexKOFSprites_02UM_Angel, 0x00 },
};

const sDescTreeNode KOF02UM_S_ANGEL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_A, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_B, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_C, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_D, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ANGEL_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_A[] =
{
    { L"Omega Rugal A", 0x0015800, 0x0015820, indexKOFSprites_02UM_OmegaRugal },
    { L"A - Hidden Super Desperation Move 1", 0x0015820, 0x0015840, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0015840, 0x0015860, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"A - Electric Shock Effect", 0x0015860, 0x0015880, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"A - MAX Flash", 0x0015880, 0x00158a0, indexKOFSprites_02UM_OmegaRugal, 0x08 },
    { L"A - Superboss Intro Stuff", 0x00158a0, 0x00158c0, indexKOFSprites_02UM_OmegaRugal, 0x19 },
    { L"A - Soul Palette", 0x00158c0, 0x00158e0, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00158e0, 0x0015900, indexKOFSprites_02UM_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_B[] =
{
    { L"Omega Rugal B", 0x0015a00, 0x0015a20, indexKOFSprites_02UM_OmegaRugal },
    { L"B - Hidden Super Desperation Move 1", 0x0015a20, 0x0015a40, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0015a40, 0x0015a60, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"B - Electric Shock Effect", 0x0015a60, 0x0015a80, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"B - MAX Flash", 0x0015a80, 0x0015aa0, indexKOFSprites_02UM_OmegaRugal, 0x08 },
    { L"B - Superboss Intro Stuff", 0x0015aa0, 0x0015ac0, indexKOFSprites_02UM_OmegaRugal, 0x19 },
    { L"B - Soul Palette", 0x0015ac0, 0x0015ae0, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0015ae0, 0x0015b00, indexKOFSprites_02UM_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_C[] =
{
    { L"Omega Rugal C", 0x0015c00, 0x0015c20, indexKOFSprites_02UM_OmegaRugal },
    { L"C - Hidden Super Desperation Move 1", 0x0015c20, 0x0015c40, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0015c40, 0x0015c60, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"C - Electric Shock Effect", 0x0015c60, 0x0015c80, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"C - MAX Flash", 0x0015c80, 0x0015ca0, indexKOFSprites_02UM_OmegaRugal, 0x08 },
    { L"C - Superboss Intro Stuff", 0x0015ca0, 0x0015cc0, indexKOFSprites_02UM_OmegaRugal, 0x19 },
    { L"C - Soul Palette", 0x0015cc0, 0x0015ce0, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0015ce0, 0x0015d00, indexKOFSprites_02UM_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_OMEGARUGAL_PALETTES_D[] =
{
    { L"Omega Rugal D", 0x0015e00, 0x0015e20, indexKOFSprites_02UM_OmegaRugal },
    { L"D - Hidden Super Desperation Move 1", 0x0015e20, 0x0015e40, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0015e40, 0x0015e60, indexKOFSprites_02UM_OmegaRugal, 0x00 },
    { L"D - Electric Shock Effect", 0x0015e60, 0x0015e80, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"D - MAX Flash", 0x0015e80, 0x0015ea0, indexKOFSprites_02UM_OmegaRugal, 0x08 },
    { L"D - Superboss Intro Stuff", 0x0015ea0, 0x0015ec0, indexKOFSprites_02UM_OmegaRugal, 0x19 },
    { L"D - Soul Palette", 0x0015ec0, 0x0015ee0, indexKOFSprites_02UM_OmegaRugal, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0015ee0, 0x0015f00, indexKOFSprites_02UM_OmegaRugal, 0x00 },
};

const sDescTreeNode KOF02UM_S_OMEGARUGAL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_A, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_B, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_C, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_D, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_A[] =
{
    { L"KUSANAGI A", 0x0016000, 0x0016020, indexKOFSprites_02UM_Kusanagi },
    { L"A - Super Move Palette", 0x0016020, 0x0016040, indexKOFSprites_02UM_Kusanagi, 0x03 },
    { L"A - MAX Orochinagi Fire", 0x0016040, 0x0016060, indexKOFSprites_02UM_Kusanagi, 0x04 },
    { L"A - Electric Shock Effect", 0x0016060, 0x0016080, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"A - MAX Flash", 0x0016080, 0x00160a0, indexKOFSprites_02UM_Kusanagi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00160a0, 0x00160c0, indexKOFSprites_02UM_Kusanagi, 0x00 },
    { L"A - Soul Palette", 0x00160c0, 0x00160e0, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00160e0, 0x0016100, indexKOFSprites_02UM_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_B[] =
{
    { L"KUSANAGI B", 0x0016200, 0x0016220, indexKOFSprites_02UM_Kusanagi },
    { L"B - Super Move Palette", 0x0016220, 0x0016240, indexKOFSprites_02UM_Kusanagi, 0x03 },
    { L"B - MAX Orochinagi Fire", 0x0016240, 0x0016260, indexKOFSprites_02UM_Kusanagi, 0x04 },
    { L"B - Electric Shock Effect", 0x0016260, 0x0016280, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"B - MAX Flash", 0x0016280, 0x00162a0, indexKOFSprites_02UM_Kusanagi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00162a0, 0x00162c0, indexKOFSprites_02UM_Kusanagi, 0x00 },
    { L"B - Soul Palette", 0x00162c0, 0x00162e0, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00162e0, 0x0016300, indexKOFSprites_02UM_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_C[] =
{
    { L"KUSANAGI C", 0x0016400, 0x0016420, indexKOFSprites_02UM_Kusanagi },
    { L"C - Super Move Palette", 0x0016420, 0x0016440, indexKOFSprites_02UM_Kusanagi, 0x03 },
    { L"C - MAX Orochinagi Fire", 0x0016440, 0x0016460, indexKOFSprites_02UM_Kusanagi, 0x04 },
    { L"C - Electric Shock Effect", 0x0016460, 0x0016480, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"C - MAX Flash", 0x0016480, 0x00164a0, indexKOFSprites_02UM_Kusanagi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00164a0, 0x00164c0, indexKOFSprites_02UM_Kusanagi, 0x00 },
    { L"C - Soul Palette", 0x00164c0, 0x00164e0, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00164e0, 0x0016500, indexKOFSprites_02UM_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KUSANAGI_PALETTES_D[] =
{
    { L"KUSANAGI D", 0x0016600, 0x0016620, indexKOFSprites_02UM_Kusanagi },
    { L"D - Super Move Palette", 0x0016620, 0x0016640, indexKOFSprites_02UM_Kusanagi, 0x03 },
    { L"D - MAX Orochinagi Fire", 0x0016640, 0x0016660, indexKOFSprites_02UM_Kusanagi, 0x04 },
    { L"D - Electric Shock Effect", 0x0016660, 0x0016680, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"D - MAX Flash", 0x0016680, 0x00166a0, indexKOFSprites_02UM_Kusanagi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00166a0, 0x00166c0, indexKOFSprites_02UM_Kusanagi, 0x00 },
    { L"D - Soul Palette", 0x00166c0, 0x00166e0, indexKOFSprites_02UM_Kusanagi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00166e0, 0x0016700, indexKOFSprites_02UM_Kusanagi, 0x00 },
};

const sDescTreeNode KOF02UM_S_KUSANAGI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_A, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_B, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_C, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_D, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KUSANAGI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_A[] =
{
    { L"O.Yashiro A", 0x0016800, 0x0016820, indexKOFSprites_02UM_YashiroOChi },
    { L"A - Hidden Super Desperation Move 1", 0x0016820, 0x0016840, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0016840, 0x0016860, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"A - Electric Shock Effect", 0x0016860, 0x0016880, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"A - MAX Flash", 0x0016880, 0x00168a0, indexKOFSprites_02UM_YashiroOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00168a0, 0x00168c0, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"A - Soul Palette", 0x00168c0, 0x00168e0, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00168e0, 0x0016900, indexKOFSprites_02UM_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_B[] =
{
    { L"O.Yashiro B", 0x0016a00, 0x0016a20, indexKOFSprites_02UM_YashiroOChi },
    { L"B - Hidden Super Desperation Move 1", 0x0016a20, 0x0016a40, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0016a40, 0x0016a60, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"B - Electric Shock Effect", 0x0016a60, 0x0016a80, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"B - MAX Flash", 0x0016a80, 0x0016aa0, indexKOFSprites_02UM_YashiroOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0016aa0, 0x0016ac0, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"B - Soul Palette", 0x0016ac0, 0x0016ae0, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0016ae0, 0x0016b00, indexKOFSprites_02UM_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_C[] =
{
    { L"O.Yashiro C", 0x0016c00, 0x0016c20, indexKOFSprites_02UM_YashiroOChi },
    { L"C - Hidden Super Desperation Move 1", 0x0016c20, 0x0016c40, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0016c40, 0x0016c60, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"C - Electric Shock Effect", 0x0016c60, 0x0016c80, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"C - MAX Flash", 0x0016c80, 0x0016ca0, indexKOFSprites_02UM_YashiroOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0016ca0, 0x0016cc0, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"C - Soul Palette", 0x0016cc0, 0x0016ce0, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0016ce0, 0x0016d00, indexKOFSprites_02UM_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_OYASHIRO_PALETTES_D[] =
{
    { L"O.Yashiro D", 0x0016e00, 0x0016e20, indexKOFSprites_02UM_YashiroOChi },
    { L"D - Hidden Super Desperation Move 1", 0x0016e20, 0x0016e40, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0016e40, 0x0016e60, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"D - Electric Shock Effect", 0x0016e60, 0x0016e80, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"D - MAX Flash", 0x0016e80, 0x0016ea0, indexKOFSprites_02UM_YashiroOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0016ea0, 0x0016ec0, indexKOFSprites_02UM_YashiroOChi, 0x00 },
    { L"D - Soul Palette", 0x0016ec0, 0x0016ee0, indexKOFSprites_02UM_YashiroOChi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0016ee0, 0x0016f00, indexKOFSprites_02UM_YashiroOChi, 0x00 },
};

const sDescTreeNode KOF02UM_S_OYASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_A, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_B, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_C, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_D, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OYASHIRO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_A[] =
{
    { L"O.Shermie A", 0x0017000, 0x0017020, indexKOFSprites_02UM_ShermieOChi },
    { L"A - Hidden Super Desperation Move 1", 0x0017020, 0x0017040, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0017040, 0x0017060, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"A - Electric Shock Effect", 0x0017060, 0x0017080, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"A - MAX Flash", 0x0017080, 0x00170a0, indexKOFSprites_02UM_ShermieOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00170a0, 0x00170c0, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"A - Soul Palette", 0x00170c0, 0x00170e0, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"A - MAX2 Lightning", 0x00170e0, 0x0017100, indexKOFSprites_02UM_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_B[] =
{
    { L"O.Shermie B", 0x0017200, 0x0017220, indexKOFSprites_02UM_ShermieOChi },
    { L"B - Hidden Super Desperation Move 1", 0x0017220, 0x0017240, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0017240, 0x0017260, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"B - Electric Shock Effect", 0x0017260, 0x0017280, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"B - MAX Flash", 0x0017280, 0x00172a0, indexKOFSprites_02UM_ShermieOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00172a0, 0x00172c0, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"B - Soul Palette", 0x00172c0, 0x00172e0, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"B - MAX2 Lightning", 0x00172e0, 0x0017300, indexKOFSprites_02UM_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_C[] =
{
    { L"O.Shermie C", 0x0017400, 0x0017420, indexKOFSprites_02UM_ShermieOChi },
    { L"C - Hidden Super Desperation Move 1", 0x0017420, 0x0017440, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0017440, 0x0017460, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"C - Electric Shock Effect", 0x0017460, 0x0017480, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"C - MAX Flash", 0x0017480, 0x00174a0, indexKOFSprites_02UM_ShermieOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00174a0, 0x00174c0, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"C - Soul Palette", 0x00174c0, 0x00174e0, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"C - MAX2 Lightning", 0x00174e0, 0x0017500, indexKOFSprites_02UM_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02UM_S_OSHERMIE_PALETTES_D[] =
{
    { L"O.Shermie D", 0x0017600, 0x0017620, indexKOFSprites_02UM_ShermieOChi },
    { L"D - Hidden Super Desperation Move 1", 0x0017620, 0x0017640, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0017640, 0x0017660, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"D - Electric Shock Effect", 0x0017660, 0x0017680, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"D - MAX Flash", 0x0017680, 0x00176a0, indexKOFSprites_02UM_ShermieOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00176a0, 0x00176c0, indexKOFSprites_02UM_ShermieOChi, 0x00 },
    { L"D - Soul Palette", 0x00176c0, 0x00176e0, indexKOFSprites_02UM_ShermieOChi, 0x18 },
    { L"D - MAX2 Lightning", 0x00176e0, 0x0017700, indexKOFSprites_02UM_ShermieOChi, 0x09 },
};

const sDescTreeNode KOF02UM_S_OSHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_A, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_B, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_C, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_D, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OSHERMIE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_A[] =
{
    { L"O.Chris A", 0x0017800, 0x0017820, indexKOFSprites_02UM_ChrisOChi },
    { L"A - Hidden Super Desperation Move 1", 0x0017820, 0x0017840, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"A - Orochi Fire Palette", 0x0017840, 0x0017860, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"A - Electric Shock Effect", 0x0017860, 0x0017880, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"A - MAX Flash", 0x0017880, 0x00178a0, indexKOFSprites_02UM_ChrisOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00178a0, 0x00178c0, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"A - Soul Palette", 0x00178c0, 0x00178e0, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"A - MAX2 Orochi", 0x00178e0, 0x0017900, indexKOFSprites_02UM_ChrisOChi, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_B[] =
{
    { L"O.Chris B", 0x0017a00, 0x0017a20, indexKOFSprites_02UM_ChrisOChi },
    { L"B - Hidden Super Desperation Move 1", 0x0017a20, 0x0017a40, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"B - Orochi Fire Palette", 0x0017a40, 0x0017a60, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"B - Electric Shock Effect", 0x0017a60, 0x0017a80, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"B - MAX Flash", 0x0017a80, 0x0017aa0, indexKOFSprites_02UM_ChrisOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0017aa0, 0x0017ac0, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"B - Soul Palette", 0x0017ac0, 0x0017ae0, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"B - MAX2 Orochi", 0x0017ae0, 0x0017b00, indexKOFSprites_02UM_ChrisOChi, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_C[] =
{
    { L"O.Chris C", 0x0017c00, 0x0017c20, indexKOFSprites_02UM_ChrisOChi },
    { L"C - Hidden Super Desperation Move 1", 0x0017c20, 0x0017c40, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"C - Orochi Fire Palette", 0x0017c40, 0x0017c60, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"C - Electric Shock Effect", 0x0017c60, 0x0017c80, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"C - MAX Flash", 0x0017c80, 0x0017ca0, indexKOFSprites_02UM_ChrisOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0017ca0, 0x0017cc0, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"C - Soul Palette", 0x0017cc0, 0x0017ce0, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"C - MAX2 Orochi", 0x0017ce0, 0x0017d00, indexKOFSprites_02UM_ChrisOChi, 0x19 },
};

const sGame_PaletteDataset KOF02UM_S_OCHRIS_PALETTES_D[] =
{
    { L"O.Chris D", 0x0017e00, 0x0017e20, indexKOFSprites_02UM_ChrisOChi },
    { L"D - Hidden Super Desperation Move 1", 0x0017e20, 0x0017e40, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"D - Orochi Fire Palette", 0x0017e40, 0x0017e60, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"D - Electric Shock Effect", 0x0017e60, 0x0017e80, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"D - MAX Flash", 0x0017e80, 0x0017ea0, indexKOFSprites_02UM_ChrisOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0017ea0, 0x0017ec0, indexKOFSprites_02UM_ChrisOChi, 0x00 },
    { L"D - Soul Palette", 0x0017ec0, 0x0017ee0, indexKOFSprites_02UM_ChrisOChi, 0x18 },
    { L"D - MAX2 Orochi", 0x0017ee0, 0x0017f00, indexKOFSprites_02UM_ChrisOChi, 0x19 },
};

const sDescTreeNode KOF02UM_S_OCHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_A, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_B, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_C, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_D, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_OCHRIS_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_A[] =
{
    { L"Shingo A", 0x0045c00, 0x0045c20, indexKOFSprites_02UM_Shingo },
    { L"A - Hidden Super Desperation Move 1", 0x0045c20, 0x0045c40, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0045c40, 0x0045c60, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"A - Electric Shock Effect", 0x0045c60, 0x0045c80, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"A - MAX Flash", 0x0045c80, 0x0045ca0, indexKOFSprites_02UM_Shingo, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0045ca0, 0x0045cc0, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"A - Soul Palette", 0x0045cc0, 0x0045ce0, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0045ce0, 0x0045d00, indexKOFSprites_02UM_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_B[] =
{
    { L"Shingo B", 0x0045d00, 0x0045d20, indexKOFSprites_02UM_Shingo },
    { L"B - Hidden Super Desperation Move 1", 0x0045d20, 0x0045d40, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0045d40, 0x0045d60, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"B - Electric Shock Effect", 0x0045d60, 0x0045d80, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"B - MAX Flash", 0x0045d80, 0x0045da0, indexKOFSprites_02UM_Shingo, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0045da0, 0x0045dc0, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"B - Soul Palette", 0x0045dc0, 0x0045de0, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0045de0, 0x0045e00, indexKOFSprites_02UM_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_C[] =
{
    { L"Shingo C", 0x0045e00, 0x0045e20, indexKOFSprites_02UM_Shingo },
    { L"C - Hidden Super Desperation Move 1", 0x0045e20, 0x0045e40, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0045e40, 0x0045e60, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"C - Electric Shock Effect", 0x0045e60, 0x0045e80, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"C - MAX Flash", 0x0045e80, 0x0045ea0, indexKOFSprites_02UM_Shingo, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0045ea0, 0x0045ec0, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"C - Soul Palette", 0x0045ec0, 0x0045ee0, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0045ee0, 0x0045f00, indexKOFSprites_02UM_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_SHINGO_PALETTES_D[] =
{
    { L"Shingo D", 0x0045f00, 0x0045f20, indexKOFSprites_02UM_Shingo },
    { L"D - Hidden Super Desperation Move 1", 0x0045f20, 0x0045f40, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0045f40, 0x0045f60, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"D - Electric Shock Effect", 0x0045f60, 0x0045f80, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"D - MAX Flash", 0x0045f80, 0x0045fa0, indexKOFSprites_02UM_Shingo, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0045fa0, 0x0045fc0, indexKOFSprites_02UM_Shingo, 0x00 },
    { L"D - Soul Palette", 0x0045fc0, 0x0045fe0, indexKOFSprites_02UM_Shingo, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0045fe0, 0x0046000, indexKOFSprites_02UM_Shingo, 0x00 },
};

const sDescTreeNode KOF02UM_S_SHINGO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_A, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_B, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_C, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_D, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_SHINGO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_A[] =
{
    { L"King A", 0x0046400, 0x0046420, indexKOFSprites_02UM_King },
    { L"A - Rose and Kick Effects", 0x0046420, 0x0046440, indexKOFSprites_02UM_King, 0x04 },
    { L"A - Desperation Move / Super Desperation Move", 0x0046440, 0x0046460, indexKOFSprites_02UM_King, 0x00 },
    { L"A - Electric Shock Effect", 0x0046460, 0x0046480, indexKOFSprites_02UM_King, 0x18 },
    { L"A - MAX Flash", 0x0046480, 0x00464a0, indexKOFSprites_02UM_King, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00464a0, 0x00464c0, indexKOFSprites_02UM_King, 0x00 },
    { L"A - Soul Palette", 0x00464c0, 0x00464e0, indexKOFSprites_02UM_King, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00464e0, 0x0046500, indexKOFSprites_02UM_King, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_B[] =
{
    { L"King B", 0x0046500, 0x0046520, indexKOFSprites_02UM_King },
    { L"B - Rose and Kick Effects", 0x0046520, 0x0046540, indexKOFSprites_02UM_King, 0x04 },
    { L"B - Desperation Move / Super Desperation Move", 0x0046540, 0x0046560, indexKOFSprites_02UM_King, 0x00 },
    { L"B - Electric Shock Effect", 0x0046560, 0x0046580, indexKOFSprites_02UM_King, 0x18 },
    { L"B - MAX Flash", 0x0046580, 0x00465a0, indexKOFSprites_02UM_King, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00465a0, 0x00465c0, indexKOFSprites_02UM_King, 0x00 },
    { L"B - Soul Palette", 0x00465c0, 0x00465e0, indexKOFSprites_02UM_King, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00465e0, 0x0046600, indexKOFSprites_02UM_King, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_C[] =
{
    { L"King C", 0x0046600, 0x0046620, indexKOFSprites_02UM_King },
    { L"C - Rose and Kick Effects", 0x0046620, 0x0046640, indexKOFSprites_02UM_King, 0x04 },
    { L"C - Desperation Move / Super Desperation Move", 0x0046640, 0x0046660, indexKOFSprites_02UM_King, 0x00 },
    { L"C - Electric Shock Effect", 0x0046660, 0x0046680, indexKOFSprites_02UM_King, 0x18 },
    { L"C - MAX Flash", 0x0046680, 0x00466a0, indexKOFSprites_02UM_King, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00466a0, 0x00466c0, indexKOFSprites_02UM_King, 0x00 },
    { L"C - Soul Palette", 0x00466c0, 0x00466e0, indexKOFSprites_02UM_King, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00466e0, 0x0046700, indexKOFSprites_02UM_King, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KING_PALETTES_D[] =
{
    { L"King D", 0x0046700, 0x0046720, indexKOFSprites_02UM_King },
    { L"D - Rose and Kick Effects", 0x0046720, 0x0046740, indexKOFSprites_02UM_King, 0x04 },
    { L"D - Desperation Move / Super Desperation Move", 0x0046740, 0x0046760, indexKOFSprites_02UM_King, 0x00 },
    { L"D - Electric Shock Effect", 0x0046760, 0x0046780, indexKOFSprites_02UM_King, 0x18 },
    { L"D - MAX Flash", 0x0046780, 0x00467a0, indexKOFSprites_02UM_King, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00467a0, 0x00467c0, indexKOFSprites_02UM_King, 0x00 },
    { L"D - Soul Palette", 0x00467c0, 0x00467e0, indexKOFSprites_02UM_King, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00467e0, 0x0046800, indexKOFSprites_02UM_King, 0x00 },
};

const sDescTreeNode KOF02UM_S_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_A, ARRAYSIZE(KOF02UM_S_KING_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_B, ARRAYSIZE(KOF02UM_S_KING_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_C, ARRAYSIZE(KOF02UM_S_KING_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_D, ARRAYSIZE(KOF02UM_S_KING_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KING_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KING_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_A[] =
{
    { L"Xiangfei A", 0x0046c00, 0x0046c20, indexKOFSprites_02UM_Xiangfei },
    { L"A - Winpose Swords", 0x0046c20, 0x0046c40, indexKOFSprites_02UM_Xiangfei, 0x1a },
    { L"A - Desperation Move / Super Desperation Move", 0x0046c40, 0x0046c60, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"A - Electric Shock Effect", 0x0046c60, 0x0046c80, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"A - MAX Flash", 0x0046c80, 0x0046ca0, indexKOFSprites_02UM_Xiangfei, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0046ca0, 0x0046cc0, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"A - Soul Palette", 0x0046cc0, 0x0046ce0, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0046ce0, 0x0046d00, indexKOFSprites_02UM_Xiangfei, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_B[] =
{
    { L"Xiangfei B", 0x0046d00, 0x0046d20, indexKOFSprites_02UM_Xiangfei },
    { L"B - Winpose Swords", 0x0046d20, 0x0046d40, indexKOFSprites_02UM_Xiangfei, 0x1a },
    { L"B - Desperation Move / Super Desperation Move", 0x0046d40, 0x0046d60, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"B - Electric Shock Effect", 0x0046d60, 0x0046d80, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"B - MAX Flash", 0x0046d80, 0x0046da0, indexKOFSprites_02UM_Xiangfei, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0046da0, 0x0046dc0, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"B - Soul Palette", 0x0046dc0, 0x0046de0, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0046de0, 0x0046e00, indexKOFSprites_02UM_Xiangfei, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_C[] =
{
    { L"Xiangfei C", 0x0046e00, 0x0046e20, indexKOFSprites_02UM_Xiangfei },
    { L"C - Winpose Swords", 0x0046e20, 0x0046e40, indexKOFSprites_02UM_Xiangfei, 0x1a },
    { L"C - Desperation Move / Super Desperation Move", 0x0046e40, 0x0046e60, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"C - Electric Shock Effect", 0x0046e60, 0x0046e80, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"C - MAX Flash", 0x0046e80, 0x0046ea0, indexKOFSprites_02UM_Xiangfei, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0046ea0, 0x0046ec0, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"C - Soul Palette", 0x0046ec0, 0x0046ee0, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0046ee0, 0x0046f00, indexKOFSprites_02UM_Xiangfei, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_XIANGFEI_PALETTES_D[] =
{
    { L"Xiangfei D", 0x0046f00, 0x0046f20, indexKOFSprites_02UM_Xiangfei },
    { L"D - Winpose Swords", 0x0046f20, 0x0046f40, indexKOFSprites_02UM_Xiangfei, 0x1a },
    { L"D - Desperation Move / Super Desperation Move", 0x0046f40, 0x0046f60, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"D - Electric Shock Effect", 0x0046f60, 0x0046f80, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"D - MAX Flash", 0x0046f80, 0x0046fa0, indexKOFSprites_02UM_Xiangfei, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0046fa0, 0x0046fc0, indexKOFSprites_02UM_Xiangfei, 0x00 },
    { L"D - Soul Palette", 0x0046fc0, 0x0046fe0, indexKOFSprites_02UM_Xiangfei, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0046fe0, 0x0047000, indexKOFSprites_02UM_Xiangfei, 0x00 },
};

const sDescTreeNode KOF02UM_S_XIANGFEI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_A, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_B, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_C, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_D, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_XIANGFEI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_A[] =
{
    { L"Hinako A", 0x0047400, 0x0047420, indexKOFSprites_02UM_Hinako },
    { L"A - Hidden Super Desperation Move 1", 0x0047420, 0x0047440, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0047440, 0x0047460, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"A - Electric Shock Effect", 0x0047460, 0x0047480, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"A - MAX Flash", 0x0047480, 0x00474a0, indexKOFSprites_02UM_Hinako, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00474a0, 0x00474c0, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"A - Soul Palette", 0x00474c0, 0x00474e0, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00474e0, 0x0047500, indexKOFSprites_02UM_Hinako, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_B[] =
{
    { L"Hinako B", 0x0047500, 0x0047520, indexKOFSprites_02UM_Hinako },
    { L"B - Hidden Super Desperation Move 1", 0x0047520, 0x0047540, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0047540, 0x0047560, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"B - Electric Shock Effect", 0x0047560, 0x0047580, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"B - MAX Flash", 0x0047580, 0x00475a0, indexKOFSprites_02UM_Hinako, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00475a0, 0x00475c0, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"B - Soul Palette", 0x00475c0, 0x00475e0, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00475e0, 0x0047600, indexKOFSprites_02UM_Hinako, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_C[] =
{
    { L"Hinako C", 0x0047600, 0x0047620, indexKOFSprites_02UM_Hinako },
    { L"C - Hidden Super Desperation Move 1", 0x0047620, 0x0047640, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0047640, 0x0047660, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"C - Electric Shock Effect", 0x0047660, 0x0047680, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"C - MAX Flash", 0x0047680, 0x00476a0, indexKOFSprites_02UM_Hinako, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00476a0, 0x00476c0, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"C - Soul Palette", 0x00476c0, 0x00476e0, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00476e0, 0x0047700, indexKOFSprites_02UM_Hinako, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_HINAKO_PALETTES_D[] =
{
    { L"Hinako D", 0x0047700, 0x0047720, indexKOFSprites_02UM_Hinako },
    { L"D - Hidden Super Desperation Move 1", 0x0047720, 0x0047740, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0047740, 0x0047760, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"D - Electric Shock Effect", 0x0047760, 0x0047780, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"D - MAX Flash", 0x0047780, 0x00477a0, indexKOFSprites_02UM_Hinako, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00477a0, 0x00477c0, indexKOFSprites_02UM_Hinako, 0x00 },
    { L"D - Soul Palette", 0x00477c0, 0x00477e0, indexKOFSprites_02UM_Hinako, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00477e0, 0x0047800, indexKOFSprites_02UM_Hinako, 0x00 },
};

const sDescTreeNode KOF02UM_S_HINAKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_A, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_B, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_C, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_D, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_HINAKO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_A[] =
{
    { L"Heidern A", 0x0047c00, 0x0047c20, indexKOFSprites_02UM_Heidern },
    { L"A - VS Igniz Intro and Win", 0x0047c20, 0x0047c40, indexKOFSprites_02UM_Heidern, 0x19 },
    { L"A - Storm Bringer Effects", 0x0047c40, 0x0047c60, indexKOFSprites_02UM_Heidern, 0x05 },
    { L"A - Electric Shock Effect", 0x0047c60, 0x0047c80, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"A - MAX Flash", 0x0047c80, 0x0047ca0, indexKOFSprites_02UM_Heidern, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0047ca0, 0x0047cc0, indexKOFSprites_02UM_Heidern, 0x00 },
    { L"A - Soul Palette", 0x0047cc0, 0x0047ce0, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0047ce0, 0x0047d00, indexKOFSprites_02UM_Heidern, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_B[] =
{
    { L"Heidern B", 0x0047d00, 0x0047d20, indexKOFSprites_02UM_Heidern },
    { L"B - VS Igniz Intro and Win", 0x0047d20, 0x0047d40, indexKOFSprites_02UM_Heidern, 0x19 },
    { L"B - Storm Bringer Effects", 0x0047d40, 0x0047d60, indexKOFSprites_02UM_Heidern, 0x05 },
    { L"B - Electric Shock Effect", 0x0047d60, 0x0047d80, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"B - MAX Flash", 0x0047d80, 0x0047da0, indexKOFSprites_02UM_Heidern, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0047da0, 0x0047dc0, indexKOFSprites_02UM_Heidern, 0x00 },
    { L"B - Soul Palette", 0x0047dc0, 0x0047de0, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0047de0, 0x0047e00, indexKOFSprites_02UM_Heidern, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_C[] =
{
    { L"Heidern C", 0x0047e00, 0x0047e20, indexKOFSprites_02UM_Heidern },
    { L"C - VS Igniz Intro and Win", 0x0047e20, 0x0047e40, indexKOFSprites_02UM_Heidern, 0x19 },
    { L"C - Storm Bringer Effects", 0x0047e40, 0x0047e60, indexKOFSprites_02UM_Heidern, 0x05 },
    { L"C - Electric Shock Effect", 0x0047e60, 0x0047e80, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"C - MAX Flash", 0x0047e80, 0x0047ea0, indexKOFSprites_02UM_Heidern, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0047ea0, 0x0047ec0, indexKOFSprites_02UM_Heidern, 0x00 },
    { L"C - Soul Palette", 0x0047ec0, 0x0047ee0, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0047ee0, 0x0047f00, indexKOFSprites_02UM_Heidern, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_HEIDERN_PALETTES_D[] =
{
    { L"Heidern D", 0x0047f00, 0x0047f20, indexKOFSprites_02UM_Heidern },
    { L"D - VS Igniz Intro and Win", 0x0047f20, 0x0047f40, indexKOFSprites_02UM_Heidern, 0x19 },
    { L"D - Storm Bringer Effects", 0x0047f40, 0x0047f60, indexKOFSprites_02UM_Heidern, 0x05 },
    { L"D - Electric Shock Effect", 0x0047f60, 0x0047f80, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"D - MAX Flash", 0x0047f80, 0x0047fa0, indexKOFSprites_02UM_Heidern, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0047fa0, 0x0047fc0, indexKOFSprites_02UM_Heidern, 0x00 },
    { L"D - Soul Palette", 0x0047fc0, 0x0047fe0, indexKOFSprites_02UM_Heidern, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0047fe0, 0x0048000, indexKOFSprites_02UM_Heidern, 0x00 },
};

const sDescTreeNode KOF02UM_S_HEIDERN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_A, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_B, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_C, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_D, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_HEIDERN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_A[] =
{
    { L"Lin A", 0x0048400, 0x0048420, indexKOFSprites_02UM_Lin },
    { L"A - Hidden Super Desperation Move 1", 0x0048420, 0x0048440, indexKOFSprites_02UM_Lin, 0x00 },
    { L"A - Lin Win Stuff", 0x0048440, 0x0048460, indexKOFSprites_02UM_Lin, 0x1a },
    { L"A - Electric Shock Effect", 0x0048460, 0x0048480, indexKOFSprites_02UM_Lin, 0x18 },
    { L"A - MAX Flash", 0x0048480, 0x00484a0, indexKOFSprites_02UM_Lin, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00484a0, 0x00484c0, indexKOFSprites_02UM_Lin, 0x00 },
    { L"A - Soul Palette", 0x00484c0, 0x00484e0, indexKOFSprites_02UM_Lin, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00484e0, 0x0048500, indexKOFSprites_02UM_Lin, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_B[] =
{
    { L"Lin B", 0x0048500, 0x0048520, indexKOFSprites_02UM_Lin },
    { L"B - Hidden Super Desperation Move 1", 0x0048520, 0x0048540, indexKOFSprites_02UM_Lin, 0x00 },
    { L"B - Lin Win Stuff", 0x0048540, 0x0048560, indexKOFSprites_02UM_Lin, 0x1a },
    { L"B - Electric Shock Effect", 0x0048560, 0x0048580, indexKOFSprites_02UM_Lin, 0x18 },
    { L"B - MAX Flash", 0x0048580, 0x00485a0, indexKOFSprites_02UM_Lin, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00485a0, 0x00485c0, indexKOFSprites_02UM_Lin, 0x00 },
    { L"B - Soul Palette", 0x00485c0, 0x00485e0, indexKOFSprites_02UM_Lin, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00485e0, 0x0048600, indexKOFSprites_02UM_Lin, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_C[] =
{
    { L"Lin C", 0x0048600, 0x0048620, indexKOFSprites_02UM_Lin },
    { L"C - Hidden Super Desperation Move 1", 0x0048620, 0x0048640, indexKOFSprites_02UM_Lin, 0x00 },
    { L"C - Lin Win Stuff", 0x0048640, 0x0048660, indexKOFSprites_02UM_Lin, 0x1a },
    { L"C - Electric Shock Effect", 0x0048660, 0x0048680, indexKOFSprites_02UM_Lin, 0x18 },
    { L"C - MAX Flash", 0x0048680, 0x00486a0, indexKOFSprites_02UM_Lin, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00486a0, 0x00486c0, indexKOFSprites_02UM_Lin, 0x00 },
    { L"C - Soul Palette", 0x00486c0, 0x00486e0, indexKOFSprites_02UM_Lin, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00486e0, 0x0048700, indexKOFSprites_02UM_Lin, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_LIN_PALETTES_D[] =
{
    { L"Lin D", 0x0048700, 0x0048720, indexKOFSprites_02UM_Lin },
    { L"D - Hidden Super Desperation Move 1", 0x0048720, 0x0048740, indexKOFSprites_02UM_Lin, 0x00 },
    { L"D - Lin Win Stuff", 0x0048740, 0x0048760, indexKOFSprites_02UM_Lin, 0x1a  },
    { L"D - Electric Shock Effect", 0x0048760, 0x0048780, indexKOFSprites_02UM_Lin, 0x18 },
    { L"D - MAX Flash", 0x0048780, 0x00487a0, indexKOFSprites_02UM_Lin, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00487a0, 0x00487c0, indexKOFSprites_02UM_Lin, 0x00 },
    { L"D - Soul Palette", 0x00487c0, 0x00487e0, indexKOFSprites_02UM_Lin, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00487e0, 0x0048800, indexKOFSprites_02UM_Lin, 0x00 },
};

const sDescTreeNode KOF02UM_S_LIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_A, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_B, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_C, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_D, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_LIN_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_A[] =
{
    { L"EX Takuma A", 0x0048c00, 0x0048c20, indexKOFSprites_02UM_TakumaEX },
    { L"A - Hidden Super Desperation Move 1", 0x0048c20, 0x0048c40, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0048c40, 0x0048c60, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"A - Electric Shock Effect", 0x0048c60, 0x0048c80, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"A - MAX Flash", 0x0048c80, 0x0048ca0, indexKOFSprites_02UM_TakumaEX, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0048ca0, 0x0048cc0, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"A - Soul Palette", 0x0048cc0, 0x0048ce0, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0048ce0, 0x0048d00, indexKOFSprites_02UM_TakumaEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_B[] =
{
    { L"EX Takuma B", 0x0048d00, 0x0048d20, indexKOFSprites_02UM_TakumaEX },
    { L"B - Hidden Super Desperation Move 1", 0x0048d20, 0x0048d40, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0048d40, 0x0048d60, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"B - Electric Shock Effect", 0x0048d60, 0x0048d80, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"B - MAX Flash", 0x0048d80, 0x0048da0, indexKOFSprites_02UM_TakumaEX, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0048da0, 0x0048dc0, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"B - Soul Palette", 0x0048dc0, 0x0048de0, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0048de0, 0x0048e00, indexKOFSprites_02UM_TakumaEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_C[] =
{
    { L"EX Takuma C", 0x0048e00, 0x0048e20, indexKOFSprites_02UM_TakumaEX },
    { L"C - Hidden Super Desperation Move 1", 0x0048e20, 0x0048e40, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0048e40, 0x0048e60, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"C - Electric Shock Effect", 0x0048e60, 0x0048e80, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"C - MAX Flash", 0x0048e80, 0x0048ea0, indexKOFSprites_02UM_TakumaEX, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0048ea0, 0x0048ec0, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"C - Soul Palette", 0x0048ec0, 0x0048ee0, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0048ee0, 0x0048f00, indexKOFSprites_02UM_TakumaEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXTAKUMA_PALETTES_D[] =
{
    { L"EX Takuma D", 0x0048f00, 0x0048f20, indexKOFSprites_02UM_TakumaEX },
    { L"D - Hidden Super Desperation Move 1", 0x0048f20, 0x0048f40, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0048f40, 0x0048f60, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"D - Electric Shock Effect", 0x0048f60, 0x0048f80, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"D - MAX Flash", 0x0048f80, 0x0048fa0, indexKOFSprites_02UM_TakumaEX, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0048fa0, 0x0048fc0, indexKOFSprites_02UM_TakumaEX, 0x00 },
    { L"D - Soul Palette", 0x0048fc0, 0x0048fe0, indexKOFSprites_02UM_TakumaEX, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0048fe0, 0x0049000, indexKOFSprites_02UM_TakumaEX, 0x00 },
};

const sDescTreeNode KOF02UM_S_EXTAKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_A, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_B, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_C, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_D, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_EXTAKUMA_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_A[] =
{
    { L"Bao A", 0x0049400, 0x0049420, indexKOFSprites_02UM_Bao },
    { L"A - Hidden Super Desperation Move 1", 0x0049420, 0x0049440, indexKOFSprites_02UM_Bao, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0049440, 0x0049460, indexKOFSprites_02UM_Bao, 0x00 },
    { L"A - Electric Shock Effect", 0x0049460, 0x0049480, indexKOFSprites_02UM_Bao, 0x18 },
    { L"A - MAX Flash", 0x0049480, 0x00494a0, indexKOFSprites_02UM_Bao, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00494a0, 0x00494c0, indexKOFSprites_02UM_Bao, 0x00 },
    { L"A - Soul Palette", 0x00494c0, 0x00494e0, indexKOFSprites_02UM_Bao, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00494e0, 0x0049500, indexKOFSprites_02UM_Bao, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_B[] =
{
    { L"Bao B", 0x0049500, 0x0049520, indexKOFSprites_02UM_Bao },
    { L"B - Hidden Super Desperation Move 1", 0x0049520, 0x0049540, indexKOFSprites_02UM_Bao, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0049540, 0x0049560, indexKOFSprites_02UM_Bao, 0x00 },
    { L"B - Electric Shock Effect", 0x0049560, 0x0049580, indexKOFSprites_02UM_Bao, 0x18 },
    { L"B - MAX Flash", 0x0049580, 0x00495a0, indexKOFSprites_02UM_Bao, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00495a0, 0x00495c0, indexKOFSprites_02UM_Bao, 0x00 },
    { L"B - Soul Palette", 0x00495c0, 0x00495e0, indexKOFSprites_02UM_Bao, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00495e0, 0x0049600, indexKOFSprites_02UM_Bao, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_C[] =
{
    { L"Bao C", 0x0049600, 0x0049620, indexKOFSprites_02UM_Bao },
    { L"C - Hidden Super Desperation Move 1", 0x0049620, 0x0049640, indexKOFSprites_02UM_Bao, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0049640, 0x0049660, indexKOFSprites_02UM_Bao, 0x00 },
    { L"C - Electric Shock Effect", 0x0049660, 0x0049680, indexKOFSprites_02UM_Bao, 0x18 },
    { L"C - MAX Flash", 0x0049680, 0x00496a0, indexKOFSprites_02UM_Bao, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00496a0, 0x00496c0, indexKOFSprites_02UM_Bao, 0x00 },
    { L"C - Soul Palette", 0x00496c0, 0x00496e0, indexKOFSprites_02UM_Bao, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00496e0, 0x0049700, indexKOFSprites_02UM_Bao, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_BAO_PALETTES_D[] =
{
    { L"Bao D", 0x0049700, 0x0049720, indexKOFSprites_02UM_Bao },
    { L"D - Hidden Super Desperation Move 1", 0x0049720, 0x0049740, indexKOFSprites_02UM_Bao, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0049740, 0x0049760, indexKOFSprites_02UM_Bao, 0x00 },
    { L"D - Electric Shock Effect", 0x0049760, 0x0049780, indexKOFSprites_02UM_Bao, 0x18 },
    { L"D - MAX Flash", 0x0049780, 0x00497a0, indexKOFSprites_02UM_Bao, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00497a0, 0x00497c0, indexKOFSprites_02UM_Bao, 0x00 },
    { L"D - Soul Palette", 0x00497c0, 0x00497e0, indexKOFSprites_02UM_Bao, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00497e0, 0x0049800, indexKOFSprites_02UM_Bao, 0x00 },
};

const sDescTreeNode KOF02UM_S_BAO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_A, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_B, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_C, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_D, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_BAO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_A[] =
{
    { L"Jhun Hoon A", 0x0049c00, 0x0049c20, indexKOFSprites_02UM_Jhun },
    { L"A - Hidden Super Desperation Move 1", 0x0049c20, 0x0049c40, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0049c40, 0x0049c60, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"A - Electric Shock Effect", 0x0049c60, 0x0049c80, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"A - MAX Flash", 0x0049c80, 0x0049ca0, indexKOFSprites_02UM_Jhun, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0049ca0, 0x0049cc0, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"A - Soul Palette", 0x0049cc0, 0x0049ce0, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0049ce0, 0x0049d00, indexKOFSprites_02UM_Jhun, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_B[] =
{
    { L"Jhun Hoon B", 0x0049d00, 0x0049d20, indexKOFSprites_02UM_Jhun },
    { L"B - Hidden Super Desperation Move 1", 0x0049d20, 0x0049d40, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0049d40, 0x0049d60, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"B - Electric Shock Effect", 0x0049d60, 0x0049d80, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"B - MAX Flash", 0x0049d80, 0x0049da0, indexKOFSprites_02UM_Jhun, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0049da0, 0x0049dc0, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"B - Soul Palette", 0x0049dc0, 0x0049de0, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0049de0, 0x0049e00, indexKOFSprites_02UM_Jhun, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_C[] =
{
    { L"Jhun Hoon C", 0x0049e00, 0x0049e20, indexKOFSprites_02UM_Jhun },
    { L"C - Hidden Super Desperation Move 1", 0x0049e20, 0x0049e40, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0049e40, 0x0049e60, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"C - Electric Shock Effect", 0x0049e60, 0x0049e80, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"C - MAX Flash", 0x0049e80, 0x0049ea0, indexKOFSprites_02UM_Jhun, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0049ea0, 0x0049ec0, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"C - Soul Palette", 0x0049ec0, 0x0049ee0, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0049ee0, 0x0049f00, indexKOFSprites_02UM_Jhun, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_JHUNHOON_PALETTES_D[] =
{
    { L"Jhun Hoon D", 0x0049f00, 0x0049f20, indexKOFSprites_02UM_Jhun },
    { L"D - Hidden Super Desperation Move 1", 0x0049f20, 0x0049f40, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0049f40, 0x0049f60, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"D - Electric Shock Effect", 0x0049f60, 0x0049f80, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"D - MAX Flash", 0x0049f80, 0x0049fa0, indexKOFSprites_02UM_Jhun, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0049fa0, 0x0049fc0, indexKOFSprites_02UM_Jhun, 0x00 },
    { L"D - Soul Palette", 0x0049fc0, 0x0049fe0, indexKOFSprites_02UM_Jhun, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0049fe0, 0x004a000, indexKOFSprites_02UM_Jhun, 0x00 },
};

const sDescTreeNode KOF02UM_S_JHUNHOON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_A, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_B, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_C, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_D, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_JHUNHOON_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_A[] =
{
    { L"Kyo-1 A", 0x004a400, 0x004a420, indexKOFSprites_02UM_Kyo1 },
    { L"A - Orochinagi Attack Fire Palette", 0x004a420, 0x004a440, indexKOFSprites_02UM_Kyo1, 0x02 },
    { L"A - MAX Orochinagi Fire", 0x004a440, 0x004a460, indexKOFSprites_02UM_Kyo1, 0x03 },
    { L"A - Electric Shock Effect", 0x004a460, 0x004a480, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"A - MAX Flash", 0x004a480, 0x004a4a0, indexKOFSprites_02UM_Kyo1, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004a4a0, 0x004a4c0, indexKOFSprites_02UM_Kyo1, 0x00 },
    { L"A - Soul Palette", 0x004a4c0, 0x004a4e0, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004a4e0, 0x004a500, indexKOFSprites_02UM_Kyo1, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_B[] =
{
    { L"Kyo-1 B", 0x004a500, 0x004a520, indexKOFSprites_02UM_Kyo1 },
    { L"B - Orochinagi Attack Fire Palette", 0x004a520, 0x004a540, indexKOFSprites_02UM_Kyo1, 0x02 },
    { L"B - MAX Orochinagi Fire", 0x004a540, 0x004a560, indexKOFSprites_02UM_Kyo1, 0x03 },
    { L"B - Electric Shock Effect", 0x004a560, 0x004a580, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"B - MAX Flash", 0x004a580, 0x004a5a0, indexKOFSprites_02UM_Kyo1, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004a5a0, 0x004a5c0, indexKOFSprites_02UM_Kyo1, 0x00 },
    { L"B - Soul Palette", 0x004a5c0, 0x004a5e0, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004a5e0, 0x004a600, indexKOFSprites_02UM_Kyo1, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_C[] =
{
    { L"Kyo-1 C", 0x004a600, 0x004a620, indexKOFSprites_02UM_Kyo1 },
    { L"C - Orochinagi Attack Fire Palette", 0x004a620, 0x004a640, indexKOFSprites_02UM_Kyo1, 0x02 },
    { L"C - MAX Orochinagi Fire", 0x004a640, 0x004a660, indexKOFSprites_02UM_Kyo1, 0x03 },
    { L"C - Electric Shock Effect", 0x004a660, 0x004a680, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"C - MAX Flash", 0x004a680, 0x004a6a0, indexKOFSprites_02UM_Kyo1, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004a6a0, 0x004a6c0, indexKOFSprites_02UM_Kyo1, 0x00 },
    { L"C - Soul Palette", 0x004a6c0, 0x004a6e0, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004a6e0, 0x004a700, indexKOFSprites_02UM_Kyo1, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO1_PALETTES_D[] =
{
    { L"Kyo-1 D", 0x004a700, 0x004a720, indexKOFSprites_02UM_Kyo1 },
    { L"D - Orochinagi Attack Fire Palette", 0x004a720, 0x004a740, indexKOFSprites_02UM_Kyo1, 0x02 },
    { L"D - MAX Orochinagi Fire", 0x004a740, 0x004a760, indexKOFSprites_02UM_Kyo1, 0x03 },
    { L"D - Electric Shock Effect", 0x004a760, 0x004a780, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"D - MAX Flash", 0x004a780, 0x004a7a0, indexKOFSprites_02UM_Kyo1, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004a7a0, 0x004a7c0, indexKOFSprites_02UM_Kyo1, 0x00 },
    { L"D - Soul Palette", 0x004a7c0, 0x004a7e0, indexKOFSprites_02UM_Kyo1, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004a7e0, 0x004a800, indexKOFSprites_02UM_Kyo1, 0x00 },
};

const sDescTreeNode KOF02UM_S_KYO1_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_A, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_B, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_C, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_D, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KYO1_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_A[] =
{
    { L"Foxy A", 0x004ac00, 0x004ac20, indexKOFSprites_02UM_Foxy },
    { L"A - Sword Attacks Extra", 0x004ac20, 0x004ac40, indexKOFSprites_02UM_Foxy, 0x02 },
    { L"A - Diana Win Stuff", 0x004ac40, 0x004ac60, indexKOFSprites_02UM_Foxy, 0x19 },
    { L"A - Electric Shock Effect", 0x004ac60, 0x004ac80, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"A - MAX Flash", 0x004ac80, 0x004aca0, indexKOFSprites_02UM_Foxy, 0x08 },
    { L"A - NESTS Flag Super", 0x004aca0, 0x004acc0, indexKOFSprites_02UM_Foxy, 0x1a },
    { L"A - Soul Palette", 0x004acc0, 0x004ace0, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004ace0, 0x004ad00, indexKOFSprites_02UM_Foxy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_B[] =
{
    { L"Foxy B", 0x004ad00, 0x004ad20, indexKOFSprites_02UM_Foxy },
    { L"B - Sword Attacks Extra", 0x004ad20, 0x004ad40, indexKOFSprites_02UM_Foxy, 0x02 },
    { L"B - Diana Win Stuff", 0x004ad40, 0x004ad60, indexKOFSprites_02UM_Foxy, 0x19 },
    { L"B - Electric Shock Effect", 0x004ad60, 0x004ad80, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"B - MAX Flash", 0x004ad80, 0x004ada0, indexKOFSprites_02UM_Foxy, 0x08 },
    { L"B - NESTS Flag Super", 0x004ada0, 0x004adc0, indexKOFSprites_02UM_Foxy, 0x1a },
    { L"B - Soul Palette", 0x004adc0, 0x004ade0, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004ade0, 0x004ae00, indexKOFSprites_02UM_Foxy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_C[] =
{
    { L"Foxy C", 0x004ae00, 0x004ae20, indexKOFSprites_02UM_Foxy },
    { L"C - Sword Attacks Extra", 0x004ae20, 0x004ae40, indexKOFSprites_02UM_Foxy, 0x02 },
    { L"C - Diana Win Stuff", 0x004ae40, 0x004ae60, indexKOFSprites_02UM_Foxy, 0x19 },
    { L"C - Electric Shock Effect", 0x004ae60, 0x004ae80, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"C - MAX Flash", 0x004ae80, 0x004aea0, indexKOFSprites_02UM_Foxy, 0x08 },
    { L"C - NESTS Flag Super", 0x004aea0, 0x004aec0, indexKOFSprites_02UM_Foxy, 0x1a },
    { L"C - Soul Palette", 0x004aec0, 0x004aee0, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004aee0, 0x004af00, indexKOFSprites_02UM_Foxy, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_FOXY_PALETTES_D[] =
{
    { L"Foxy D", 0x004af00, 0x004af20, indexKOFSprites_02UM_Foxy },
    { L"D - Sword Attacks Extra", 0x004af20, 0x004af40, indexKOFSprites_02UM_Foxy, 0x02 },
    { L"D - Diana Win Stuff", 0x004af40, 0x004af60, indexKOFSprites_02UM_Foxy, 0x19 },
    { L"D - Electric Shock Effect", 0x004af60, 0x004af80, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"D - MAX Flash", 0x004af80, 0x004afa0, indexKOFSprites_02UM_Foxy, 0x08 },
    { L"D - NESTS Flag Super", 0x004afa0, 0x004afc0, indexKOFSprites_02UM_Foxy, 0x1a },
    { L"D - Soul Palette", 0x004afc0, 0x004afe0, indexKOFSprites_02UM_Foxy, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004afe0, 0x004b000, indexKOFSprites_02UM_Foxy, 0x00 },
};

const sDescTreeNode KOF02UM_S_FOXY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_A, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_B, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_C, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_D, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_FOXY_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_A[] =
{
    { L"Kasumi A", 0x004b400, 0x004b420, indexKOFSprites_02UM_Kasumi },
    { L"A - Hidden Super Desperation Move 1", 0x004b420, 0x004b440, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x004b440, 0x004b460, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"A - Electric Shock Effect", 0x004b460, 0x004b480, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"A - MAX Flash", 0x004b480, 0x004b4a0, indexKOFSprites_02UM_Kasumi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004b4a0, 0x004b4c0, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"A - Soul Palette", 0x004b4c0, 0x004b4e0, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004b4e0, 0x004b500, indexKOFSprites_02UM_Kasumi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_B[] =
{
    { L"Kasumi B", 0x004b500, 0x004b520, indexKOFSprites_02UM_Kasumi },
    { L"B - Hidden Super Desperation Move 1", 0x004b520, 0x004b540, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x004b540, 0x004b560, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"B - Electric Shock Effect", 0x004b560, 0x004b580, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"B - MAX Flash", 0x004b580, 0x004b5a0, indexKOFSprites_02UM_Kasumi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004b5a0, 0x004b5c0, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"B - Soul Palette", 0x004b5c0, 0x004b5e0, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004b5e0, 0x004b600, indexKOFSprites_02UM_Kasumi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_C[] =
{
    { L"Kasumi C", 0x004b600, 0x004b620, indexKOFSprites_02UM_Kasumi },
    { L"C - Hidden Super Desperation Move 1", 0x004b620, 0x004b640, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x004b640, 0x004b660, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"C - Electric Shock Effect", 0x004b660, 0x004b680, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"C - MAX Flash", 0x004b680, 0x004b6a0, indexKOFSprites_02UM_Kasumi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004b6a0, 0x004b6c0, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"C - Soul Palette", 0x004b6c0, 0x004b6e0, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004b6e0, 0x004b700, indexKOFSprites_02UM_Kasumi, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KASUMI_PALETTES_D[] =
{
    { L"Kasumi D", 0x004b700, 0x004b720, indexKOFSprites_02UM_Kasumi },
    { L"D - Hidden Super Desperation Move 1", 0x004b720, 0x004b740, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x004b740, 0x004b760, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"D - Electric Shock Effect", 0x004b760, 0x004b780, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"D - MAX Flash", 0x004b780, 0x004b7a0, indexKOFSprites_02UM_Kasumi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004b7a0, 0x004b7c0, indexKOFSprites_02UM_Kasumi, 0x00 },
    { L"D - Soul Palette", 0x004b7c0, 0x004b7e0, indexKOFSprites_02UM_Kasumi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004b7e0, 0x004b800, indexKOFSprites_02UM_Kasumi, 0x00 },
};

const sDescTreeNode KOF02UM_S_KASUMI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_A, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_B, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_C, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_D, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KASUMI_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_A[] =
{
    { L"Geese A", 0x004bc00, 0x004bc20, indexKOFSprites_02UM_Geese },
    { L"A - Hidden Super Desperation Move 1", 0x004bc20, 0x004bc40, indexKOFSprites_02UM_Geese, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x004bc40, 0x004bc60, indexKOFSprites_02UM_Geese, 0x00 },
    { L"A - Electric Shock Effect", 0x004bc60, 0x004bc80, indexKOFSprites_02UM_Geese, 0x18 },
    { L"A - MAX Flash", 0x004bc80, 0x004bca0, indexKOFSprites_02UM_Geese, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004bca0, 0x004bcc0, indexKOFSprites_02UM_Geese, 0x00 },
    { L"A - Soul Palette", 0x004bcc0, 0x004bce0, indexKOFSprites_02UM_Geese, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004bce0, 0x004bd00, indexKOFSprites_02UM_Geese, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_B[] =
{
    { L"Geese B", 0x004bd00, 0x004bd20, indexKOFSprites_02UM_Geese },
    { L"B - Hidden Super Desperation Move 1", 0x004bd20, 0x004bd40, indexKOFSprites_02UM_Geese, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x004bd40, 0x004bd60, indexKOFSprites_02UM_Geese, 0x00 },
    { L"B - Electric Shock Effect", 0x004bd60, 0x004bd80, indexKOFSprites_02UM_Geese, 0x18 },
    { L"B - MAX Flash", 0x004bd80, 0x004bda0, indexKOFSprites_02UM_Geese, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004bda0, 0x004bdc0, indexKOFSprites_02UM_Geese, 0x00 },
    { L"B - Soul Palette", 0x004bdc0, 0x004bde0, indexKOFSprites_02UM_Geese, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004bde0, 0x004be00, indexKOFSprites_02UM_Geese, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_C[] =
{
    { L"Geese C", 0x004be00, 0x004be20, indexKOFSprites_02UM_Geese },
    { L"C - Hidden Super Desperation Move 1", 0x004be20, 0x004be40, indexKOFSprites_02UM_Geese, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x004be40, 0x004be60, indexKOFSprites_02UM_Geese, 0x00 },
    { L"C - Electric Shock Effect", 0x004be60, 0x004be80, indexKOFSprites_02UM_Geese, 0x18 },
    { L"C - MAX Flash", 0x004be80, 0x004bea0, indexKOFSprites_02UM_Geese, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004bea0, 0x004bec0, indexKOFSprites_02UM_Geese, 0x00 },
    { L"C - Soul Palette", 0x004bec0, 0x004bee0, indexKOFSprites_02UM_Geese, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004bee0, 0x004bf00, indexKOFSprites_02UM_Geese, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_GEESE_PALETTES_D[] =
{
    { L"Geese D", 0x004bf00, 0x004bf20, indexKOFSprites_02UM_Geese },
    { L"D - Hidden Super Desperation Move 1", 0x004bf20, 0x004bf40, indexKOFSprites_02UM_Geese, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x004bf40, 0x004bf60, indexKOFSprites_02UM_Geese, 0x00 },
    { L"D - Electric Shock Effect", 0x004bf60, 0x004bf80, indexKOFSprites_02UM_Geese, 0x18 },
    { L"D - MAX Flash", 0x004bf80, 0x004bfa0, indexKOFSprites_02UM_Geese, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004bfa0, 0x004bfc0, indexKOFSprites_02UM_Geese, 0x00 },
    { L"D - Soul Palette", 0x004bfc0, 0x004bfe0, indexKOFSprites_02UM_Geese, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004bfe0, 0x004c000, indexKOFSprites_02UM_Geese, 0x00 },
};

const sDescTreeNode KOF02UM_S_GEESE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_A, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_B, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_C, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_D, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_GEESE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_A[] =
{
    { L"Nightmare Geese A", 0x004c400, 0x004c420, indexKOFSprites_02UM_GeeseNM },
    { L"A - Hidden Super Desperation Move 1", 0x004c420, 0x004c440, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x004c440, 0x004c460, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"A - Electric Shock Effect", 0x004c460, 0x004c480, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"A - MAX Flash", 0x004c480, 0x004c4a0, indexKOFSprites_02UM_GeeseNM, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004c4a0, 0x004c4c0, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"A - Soul Palette", 0x004c4c0, 0x004c4e0, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004c4e0, 0x004c500, indexKOFSprites_02UM_GeeseNM, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_B[] =
{
    { L"Nightmare Geese B", 0x004c500, 0x004c520, indexKOFSprites_02UM_GeeseNM },
    { L"B - Hidden Super Desperation Move 1", 0x004c520, 0x004c540, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x004c540, 0x004c560, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"B - Electric Shock Effect", 0x004c560, 0x004c580, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"B - MAX Flash", 0x004c580, 0x004c5a0, indexKOFSprites_02UM_GeeseNM, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004c5a0, 0x004c5c0, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"B - Soul Palette", 0x004c5c0, 0x004c5e0, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004c5e0, 0x004c600, indexKOFSprites_02UM_GeeseNM, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_C[] =
{
    { L"Nightmare Geese C", 0x004c600, 0x004c620, indexKOFSprites_02UM_GeeseNM },
    { L"C - Hidden Super Desperation Move 1", 0x004c620, 0x004c640, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x004c640, 0x004c660, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"C - Electric Shock Effect", 0x004c660, 0x004c680, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"C - MAX Flash", 0x004c680, 0x004c6a0, indexKOFSprites_02UM_GeeseNM, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004c6a0, 0x004c6c0, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"C - Soul Palette", 0x004c6c0, 0x004c6e0, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004c6e0, 0x004c700, indexKOFSprites_02UM_GeeseNM, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_NIGHTMAREGEESE_PALETTES_D[] =
{
    { L"Nightmare Geese D", 0x004c700, 0x004c720, indexKOFSprites_02UM_GeeseNM },
    { L"D - Hidden Super Desperation Move 1", 0x004c720, 0x004c740, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x004c740, 0x004c760, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"D - Electric Shock Effect", 0x004c760, 0x004c780, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"D - MAX Flash", 0x004c780, 0x004c7a0, indexKOFSprites_02UM_GeeseNM, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004c7a0, 0x004c7c0, indexKOFSprites_02UM_GeeseNM, 0x00 },
    { L"D - Soul Palette", 0x004c7c0, 0x004c7e0, indexKOFSprites_02UM_GeeseNM, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004c7e0, 0x004c800, indexKOFSprites_02UM_GeeseNM, 0x00 },
};

const sDescTreeNode KOF02UM_S_NIGHTMAREGEESE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_A, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_B, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_C, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_D, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_A[] =
{
    { L"EX Robert A", 0x004cc00, 0x004cc20, indexKOFSprites_02UM_RobertEX },
    { L"A - Hidden Super Desperation Move 1", 0x004cc20, 0x004cc40, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x004cc40, 0x004cc60, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"A - Electric Shock Effect", 0x004cc60, 0x004cc80, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"A - MAX Flash", 0x004cc80, 0x004cca0, indexKOFSprites_02UM_RobertEX, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004cca0, 0x004ccc0, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"A - Soul Palette", 0x004ccc0, 0x004cce0, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004cce0, 0x004cd00, indexKOFSprites_02UM_RobertEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_B[] =
{
    { L"EX Robert B", 0x004cd00, 0x004cd20, indexKOFSprites_02UM_RobertEX },
    { L"B - Hidden Super Desperation Move 1", 0x004cd20, 0x004cd40, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x004cd40, 0x004cd60, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"B - Electric Shock Effect", 0x004cd60, 0x004cd80, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"B - MAX Flash", 0x004cd80, 0x004cda0, indexKOFSprites_02UM_RobertEX, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004cda0, 0x004cdc0, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"B - Soul Palette", 0x004cdc0, 0x004cde0, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004cde0, 0x004ce00, indexKOFSprites_02UM_RobertEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_C[] =
{
    { L"EX Robert C", 0x004ce00, 0x004ce20, indexKOFSprites_02UM_RobertEX },
    { L"C - Hidden Super Desperation Move 1", 0x004ce20, 0x004ce40, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x004ce40, 0x004ce60, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"C - Electric Shock Effect", 0x004ce60, 0x004ce80, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"C - MAX Flash", 0x004ce80, 0x004cea0, indexKOFSprites_02UM_RobertEX, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004cea0, 0x004cec0, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"C - Soul Palette", 0x004cec0, 0x004cee0, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004cee0, 0x004cf00, indexKOFSprites_02UM_RobertEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXROBERT_PALETTES_D[] =
{
    { L"EX Robert D", 0x004cf00, 0x004cf20, indexKOFSprites_02UM_RobertEX },
    { L"D - Hidden Super Desperation Move 1", 0x004cf20, 0x004cf40, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x004cf40, 0x004cf60, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"D - Electric Shock Effect", 0x004cf60, 0x004cf80, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"D - MAX Flash", 0x004cf80, 0x004cfa0, indexKOFSprites_02UM_RobertEX, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004cfa0, 0x004cfc0, indexKOFSprites_02UM_RobertEX, 0x00 },
    { L"D - Soul Palette", 0x004cfc0, 0x004cfe0, indexKOFSprites_02UM_RobertEX, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004cfe0, 0x004d000, indexKOFSprites_02UM_RobertEX, 0x00 },
};

const sDescTreeNode KOF02UM_S_EXROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_A, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_B, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_C, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_D, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_EXROBERT_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_A[] =
{
    { L"EX Kensou A", 0x004d400, 0x004d420, indexKOFSprites_02UM_KensouEX },
    { L"A - MAX Super State", 0x004d420, 0x004d440, indexKOFSprites_02UM_KensouEX, 0x0a },
    { L"A - Desperation Move / Super Desperation Move", 0x004d440, 0x004d460, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"A - Electric Shock Effect", 0x004d460, 0x004d480, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"A - MAX Flash", 0x004d480, 0x004d4a0, indexKOFSprites_02UM_KensouEX, 0x0 },
    { L"A - Hidden Super Desperation Move 2", 0x004d4a0, 0x004d4c0, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"A - Soul Palette", 0x004d4c0, 0x004d4e0, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004d4e0, 0x004d500, indexKOFSprites_02UM_KensouEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_B[] =
{
    { L"EX Kensou B", 0x004d500, 0x004d520, indexKOFSprites_02UM_KensouEX },
    { L"B - MAX Super State", 0x004d520, 0x004d540, indexKOFSprites_02UM_KensouEX, 0x0a },
    { L"B - Desperation Move / Super Desperation Move", 0x004d540, 0x004d560, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"B - Electric Shock Effect", 0x004d560, 0x004d580, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"B - MAX Flash", 0x004d580, 0x004d5a0, indexKOFSprites_02UM_KensouEX, 0x0 },
    { L"B - Hidden Super Desperation Move 2", 0x004d5a0, 0x004d5c0, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"B - Soul Palette", 0x004d5c0, 0x004d5e0, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004d5e0, 0x004d600, indexKOFSprites_02UM_KensouEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_C[] =
{
    { L"EX Kensou C", 0x004d600, 0x004d620, indexKOFSprites_02UM_KensouEX },
    { L"C - MAX Super State", 0x004d620, 0x004d640, indexKOFSprites_02UM_KensouEX, 0x0a },
    { L"C - Desperation Move / Super Desperation Move", 0x004d640, 0x004d660, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"C - Electric Shock Effect", 0x004d660, 0x004d680, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"C - MAX Flash", 0x004d680, 0x004d6a0, indexKOFSprites_02UM_KensouEX, 0x0 },
    { L"C - Hidden Super Desperation Move 2", 0x004d6a0, 0x004d6c0, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"C - Soul Palette", 0x004d6c0, 0x004d6e0, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004d6e0, 0x004d700, indexKOFSprites_02UM_KensouEX, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_EXKENSOU_PALETTES_D[] =
{
    { L"EX Kensou D", 0x004d700, 0x004d720, indexKOFSprites_02UM_KensouEX },
    { L"D - MAX Super State", 0x004d720, 0x004d740, indexKOFSprites_02UM_KensouEX, 0x0a },
    { L"D - Desperation Move / Super Desperation Move", 0x004d740, 0x004d760, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"D - Electric Shock Effect", 0x004d760, 0x004d780, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"D - MAX Flash", 0x004d780, 0x004d7a0, indexKOFSprites_02UM_KensouEX, 0x0 },
    { L"D - Hidden Super Desperation Move 2", 0x004d7a0, 0x004d7c0, indexKOFSprites_02UM_KensouEX, 0x00 },
    { L"D - Soul Palette", 0x004d7c0, 0x004d7e0, indexKOFSprites_02UM_KensouEX, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004d7e0, 0x004d800, indexKOFSprites_02UM_KensouEX, 0x00 },
};

const sDescTreeNode KOF02UM_S_EXKENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_A, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_B, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_C, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_D, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_EXKENSOU_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_A[] =
{
    { L"Kyo-2 A", 0x004dc00, 0x004dc20, indexKOFSprites_02UM_Kyo2 },
    { L"A - Final Showdown Fire Palette", 0x004dc20, 0x004dc40, indexKOFSprites_02UM_Kyo2, 0x02 },
    { L"A - MAX2 Fire Palette", 0x004dc40, 0x004dc60, indexKOFSprites_02UM_Kyo2, 0x03 },
    { L"A - Electric Shock Effect", 0x004dc60, 0x004dc80, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"A - MAX Flash", 0x004dc80, 0x004dca0, indexKOFSprites_02UM_Kyo2, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004dca0, 0x004dcc0, indexKOFSprites_02UM_Kyo2, 0x00 },
    { L"A - Soul Palette", 0x004dcc0, 0x004dce0, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004dce0, 0x004dd00, indexKOFSprites_02UM_Kyo2, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_B[] =
{
    { L"Kyo-2 B", 0x004dd00, 0x004dd20, indexKOFSprites_02UM_Kyo2 },
    { L"B - Final Showdown Fire Palette", 0x004dd20, 0x004dd40, indexKOFSprites_02UM_Kyo2, 0x02 },
    { L"B - MAX2 Fire Palette", 0x004dd40, 0x004dd60, indexKOFSprites_02UM_Kyo2, 0x03 },
    { L"B - Electric Shock Effect", 0x004dd60, 0x004dd80, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"B - MAX Flash", 0x004dd80, 0x004dda0, indexKOFSprites_02UM_Kyo2, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004dda0, 0x004ddc0, indexKOFSprites_02UM_Kyo2, 0x00 },
    { L"B - Soul Palette", 0x004ddc0, 0x004dde0, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004dde0, 0x004de00, indexKOFSprites_02UM_Kyo2, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_C[] =
{
    { L"Kyo-2 C", 0x004de00, 0x004de20, indexKOFSprites_02UM_Kyo2 },
    { L"C - Final Showdown Fire Palette", 0x004de20, 0x004de40, indexKOFSprites_02UM_Kyo2, 0x02 },
    { L"C - MAX2 Fire Palette", 0x004de40, 0x004de60, indexKOFSprites_02UM_Kyo2, 0x03 },
    { L"C - Electric Shock Effect", 0x004de60, 0x004de80, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"C - MAX Flash", 0x004de80, 0x004dea0, indexKOFSprites_02UM_Kyo2, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004dea0, 0x004dec0, indexKOFSprites_02UM_Kyo2, 0x00 },
    { L"C - Soul Palette", 0x004dec0, 0x004dee0, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004dee0, 0x004df00, indexKOFSprites_02UM_Kyo2, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KYO2_PALETTES_D[] =
{
    { L"Kyo-2 D", 0x004df00, 0x004df20, indexKOFSprites_02UM_Kyo2 },
    { L"D - Final Showdown Fire Palette", 0x004df20, 0x004df40, indexKOFSprites_02UM_Kyo2, 0x02 },
    { L"D - MAX2 Fire Palette", 0x004df40, 0x004df60, indexKOFSprites_02UM_Kyo2, 0x03 },
    { L"D - Electric Shock Effect", 0x004df60, 0x004df80, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"D - MAX Flash", 0x004df80, 0x004dfa0, indexKOFSprites_02UM_Kyo2, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004dfa0, 0x004dfc0, indexKOFSprites_02UM_Kyo2, 0x00 },
    { L"D - Soul Palette", 0x004dfc0, 0x004dfe0, indexKOFSprites_02UM_Kyo2, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004dfe0, 0x004e000, indexKOFSprites_02UM_Kyo2, 0x00 },
};

const sDescTreeNode KOF02UM_S_KYO2_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_A, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_B, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_C, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_D, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KYO2_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_A[] =
{
    { L"Goenitz A", 0x004e400, 0x004e420, indexKOFSprites_02UM_Goenitz },
    { L"A - Hidden Super Desperation Move 1", 0x004e420, 0x004e440, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x004e440, 0x004e460, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"A - Electric Shock Effect", 0x004e460, 0x004e480, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"A - MAX Flash", 0x004e480, 0x004e4a0, indexKOFSprites_02UM_Goenitz, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004e4a0, 0x004e4c0, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"A - Soul Palette", 0x004e4c0, 0x004e4e0, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004e4e0, 0x004e500, indexKOFSprites_02UM_Goenitz, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_B[] =
{
    { L"Goenitz B", 0x004e500, 0x004e520, indexKOFSprites_02UM_Goenitz },
    { L"B - Hidden Super Desperation Move 1", 0x004e520, 0x004e540, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x004e540, 0x004e560, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"B - Electric Shock Effect", 0x004e560, 0x004e580, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"B - MAX Flash", 0x004e580, 0x004e5a0, indexKOFSprites_02UM_Goenitz, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004e5a0, 0x004e5c0, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"B - Soul Palette", 0x004e5c0, 0x004e5e0, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004e5e0, 0x004e600, indexKOFSprites_02UM_Goenitz, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_C[] =
{
    { L"Goenitz C", 0x004e600, 0x004e620, indexKOFSprites_02UM_Goenitz },
    { L"C - Hidden Super Desperation Move 1", 0x004e620, 0x004e640, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x004e640, 0x004e660, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"C - Electric Shock Effect", 0x004e660, 0x004e680, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"C - MAX Flash", 0x004e680, 0x004e6a0, indexKOFSprites_02UM_Goenitz, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004e6a0, 0x004e6c0, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"C - Soul Palette", 0x004e6c0, 0x004e6e0, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004e6e0, 0x004e700, indexKOFSprites_02UM_Goenitz, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_GOENITZ_PALETTES_D[] =
{
    { L"Goenitz D", 0x004e700, 0x004e720, indexKOFSprites_02UM_Goenitz },
    { L"D - Hidden Super Desperation Move 1", 0x004e720, 0x004e740, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x004e740, 0x004e760, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"D - Electric Shock Effect", 0x004e760, 0x004e780, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"D - MAX Flash", 0x004e780, 0x004e7a0, indexKOFSprites_02UM_Goenitz, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004e7a0, 0x004e7c0, indexKOFSprites_02UM_Goenitz, 0x00 },
    { L"D - Soul Palette", 0x004e7c0, 0x004e7e0, indexKOFSprites_02UM_Goenitz, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004e7e0, 0x004e800, indexKOFSprites_02UM_Goenitz, 0x00 },
};

const sDescTreeNode KOF02UM_S_GOENITZ_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_A, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_B, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_C, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_D, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_GOENITZ_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_A[] =
{
    { L"Krizalid A", 0x004ec00, 0x004ec20, indexKOFSprites_02UM_Krizalid },
    { L"A - Jacket Intro Stuff", 0x004ec20, 0x004ec40, indexKOFSprites_02UM_Krizalid, 0x19 },
    { L"A - End of Heaven Main Fire", 0x004ec40, 0x004ec60, indexKOFSprites_02UM_Krizalid, 0x11 },
    { L"A - Electric Shock Effect", 0x004ec60, 0x004ec80, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"A - MAX Flash", 0x004ec80, 0x004eca0, indexKOFSprites_02UM_Krizalid, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004eca0, 0x004ecc0, indexKOFSprites_02UM_Krizalid, 0x00 },
    { L"A - Soul Palette", 0x004ecc0, 0x004ece0, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004ece0, 0x004ed00, indexKOFSprites_02UM_Krizalid, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_B[] =
{
    { L"Krizalid B", 0x004ed00, 0x004ed20, indexKOFSprites_02UM_Krizalid },
    { L"B - Jacket Intro Stuff", 0x004ed20, 0x004ed40, indexKOFSprites_02UM_Krizalid, 0x19 },
    { L"B - End of Heaven Main Fire", 0x004ed40, 0x004ed60, indexKOFSprites_02UM_Krizalid, 0x11 },
    { L"B - Electric Shock Effect", 0x004ed60, 0x004ed80, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"B - MAX Flash", 0x004ed80, 0x004eda0, indexKOFSprites_02UM_Krizalid, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004eda0, 0x004edc0, indexKOFSprites_02UM_Krizalid, 0x00 },
    { L"B - Soul Palette", 0x004edc0, 0x004ede0, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004ede0, 0x004ee00, indexKOFSprites_02UM_Krizalid, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_C[] =
{
    { L"Krizalid C", 0x004ee00, 0x004ee20, indexKOFSprites_02UM_Krizalid },
    { L"C - Jacket Intro Stuff", 0x004ee20, 0x004ee40, indexKOFSprites_02UM_Krizalid, 0x19 },
    { L"C - End of Heaven Main Fire", 0x004ee40, 0x004ee60, indexKOFSprites_02UM_Krizalid, 0x11 },
    { L"C - Electric Shock Effect", 0x004ee60, 0x004ee80, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"C - MAX Flash", 0x004ee80, 0x004eea0, indexKOFSprites_02UM_Krizalid, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004eea0, 0x004eec0, indexKOFSprites_02UM_Krizalid, 0x00 },
    { L"C - Soul Palette", 0x004eec0, 0x004eee0, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004eee0, 0x004ef00, indexKOFSprites_02UM_Krizalid, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_KRIZALID_PALETTES_D[] =
{
    { L"Krizalid D", 0x004ef00, 0x004ef20, indexKOFSprites_02UM_Krizalid },
    { L"D - Jacket Intro Stuff", 0x004ef20, 0x004ef40, indexKOFSprites_02UM_Krizalid, 0x19 },
    { L"D - End of Heaven Main Fire", 0x004ef40, 0x004ef60, indexKOFSprites_02UM_Krizalid, 0x11 },
    { L"D - Electric Shock Effect", 0x004ef60, 0x004ef80, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"D - MAX Flash", 0x004ef80, 0x004efa0, indexKOFSprites_02UM_Krizalid, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004efa0, 0x004efc0, indexKOFSprites_02UM_Krizalid, 0x00 },
    { L"D - Soul Palette", 0x004efc0, 0x004efe0, indexKOFSprites_02UM_Krizalid, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004efe0, 0x004f000, indexKOFSprites_02UM_Krizalid, 0x00 },
};

const sDescTreeNode KOF02UM_S_KRIZALID_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_A, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_B, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_C, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_D, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_KRIZALID_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_A[] =
{
    { L"Clone Zero A", 0x004f400, 0x004f420, indexKOFSprites_02UM_CloneZero },
    { L"A - Hidden Super Desperation Move 1", 0x004f420, 0x004f440, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x004f440, 0x004f460, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"A - Electric Shock Effect", 0x004f460, 0x004f480, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"A - MAX Flash", 0x004f480, 0x004f4a0, indexKOFSprites_02UM_CloneZero, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x004f4a0, 0x004f4c0, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"A - Soul Palette", 0x004f4c0, 0x004f4e0, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x004f4e0, 0x004f500, indexKOFSprites_02UM_CloneZero, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_B[] =
{
    { L"Clone Zero B", 0x004f500, 0x004f520, indexKOFSprites_02UM_CloneZero },
    { L"B - Hidden Super Desperation Move 1", 0x004f520, 0x004f540, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x004f540, 0x004f560, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"B - Electric Shock Effect", 0x004f560, 0x004f580, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"B - MAX Flash", 0x004f580, 0x004f5a0, indexKOFSprites_02UM_CloneZero, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x004f5a0, 0x004f5c0, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"B - Soul Palette", 0x004f5c0, 0x004f5e0, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x004f5e0, 0x004f600, indexKOFSprites_02UM_CloneZero, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_C[] =
{
    { L"Clone Zero C", 0x004f600, 0x004f620, indexKOFSprites_02UM_CloneZero },
    { L"C - Hidden Super Desperation Move 1", 0x004f620, 0x004f640, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x004f640, 0x004f660, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"C - Electric Shock Effect", 0x004f660, 0x004f680, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"C - MAX Flash", 0x004f680, 0x004f6a0, indexKOFSprites_02UM_CloneZero, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x004f6a0, 0x004f6c0, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"C - Soul Palette", 0x004f6c0, 0x004f6e0, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x004f6e0, 0x004f700, indexKOFSprites_02UM_CloneZero, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_CLONEZERO_PALETTES_D[] =
{
    { L"Clone Zero D", 0x004f700, 0x004f720, indexKOFSprites_02UM_CloneZero },
    { L"D - Hidden Super Desperation Move 1", 0x004f720, 0x004f740, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x004f740, 0x004f760, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"D - Electric Shock Effect", 0x004f760, 0x004f780, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"D - MAX Flash", 0x004f780, 0x004f7a0, indexKOFSprites_02UM_CloneZero, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x004f7a0, 0x004f7c0, indexKOFSprites_02UM_CloneZero, 0x00 },
    { L"D - Soul Palette", 0x004f7c0, 0x004f7e0, indexKOFSprites_02UM_CloneZero, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x004f7e0, 0x004f800, indexKOFSprites_02UM_CloneZero, 0x00 },
};

const sDescTreeNode KOF02UM_S_CLONEZERO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_A, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_B, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_C, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_D, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_CLONEZERO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_A[] =
{
    { L"Original Zero A", 0x004fc00, 0x004fc20, indexKOFSprites_02UM_ZeroOG },
    { L"A - Striker Glugan", 0x004fc20, 0x004fc40, indexKOFSprites_02UM_ZeroOG, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x004fc40, 0x004fc60, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"A - Electric Shock Effect", 0x004fc60, 0x004fc80, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"A - MAX Flash", 0x004fc80, 0x004fca0, indexKOFSprites_02UM_ZeroOG, 0x08 },
    { L"A - Striker Lon", 0x004fca0, 0x004fcc0, indexKOFSprites_02UM_ZeroOG, 0x1b },
    { L"A - Soul Palette", 0x004fcc0, 0x004fce0, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"A - Striker Krizalid", 0x004fce0, 0x004fd00, indexKOFSprites_02UM_ZeroOG, 0x1a },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_B[] =
{
    { L"Original Zero B", 0x004fd00, 0x004fd20, indexKOFSprites_02UM_ZeroOG },
    { L"B - Striker Glugan", 0x004fd20, 0x004fd40, indexKOFSprites_02UM_ZeroOG, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x004fd40, 0x004fd60, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"B - Electric Shock Effect", 0x004fd60, 0x004fd80, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"B - MAX Flash", 0x004fd80, 0x004fda0, indexKOFSprites_02UM_ZeroOG, 0x08 },
    { L"B - Striker Lon", 0x004fda0, 0x004fdc0, indexKOFSprites_02UM_ZeroOG, 0x1b },
    { L"B - Soul Palette", 0x004fdc0, 0x004fde0, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"B - Striker Krizalid", 0x004fde0, 0x004fe00, indexKOFSprites_02UM_ZeroOG, 0x1a },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_C[] =
{
    { L"Original Zero C", 0x004fe00, 0x004fe20, indexKOFSprites_02UM_ZeroOG },
    { L"C - Striker Glugan", 0x004fe20, 0x004fe40, indexKOFSprites_02UM_ZeroOG, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x004fe40, 0x004fe60, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"C - Electric Shock Effect", 0x004fe60, 0x004fe80, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"C - MAX Flash", 0x004fe80, 0x004fea0, indexKOFSprites_02UM_ZeroOG, 0x08 },
    { L"C - Striker Lon", 0x004fea0, 0x004fec0, indexKOFSprites_02UM_ZeroOG, 0x1b },
    { L"C - Soul Palette", 0x004fec0, 0x004fee0, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"C - Striker Krizalid", 0x004fee0, 0x004ff00, indexKOFSprites_02UM_ZeroOG, 0x1a },
};

const sGame_PaletteDataset KOF02UM_S_ORIGINALZERO_PALETTES_D[] =
{
    { L"Original Zero D", 0x004ff00, 0x004ff20, indexKOFSprites_02UM_ZeroOG },
    { L"D - Striker Glugan", 0x004ff20, 0x004ff40, indexKOFSprites_02UM_ZeroOG, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x004ff40, 0x004ff60, indexKOFSprites_02UM_ZeroOG, 0x00 },
    { L"D - Electric Shock Effect", 0x004ff60, 0x004ff80, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"D - MAX Flash", 0x004ff80, 0x004ffa0, indexKOFSprites_02UM_ZeroOG, 0x08 },
    { L"D - Striker Lon", 0x004ffa0, 0x004ffc0, indexKOFSprites_02UM_ZeroOG, 0x1b },
    { L"D - Soul Palette", 0x004ffc0, 0x004ffe0, indexKOFSprites_02UM_ZeroOG, 0x18 },
    { L"D - Striker Krizalid", 0x004ffe0, 0x0050000, indexKOFSprites_02UM_ZeroOG, 0x1a },
};

const sDescTreeNode KOF02UM_S_ORIGINALZERO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_A, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_B, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_C, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_D, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_PALETTES_PORTRAITS) },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_A[] =
{
    { L"Igniz A", 0x0050400, 0x0050420, indexKOFSprites_02UM_Igniz },
    { L"A - Misty Win Stuff", 0x0050420, 0x0050440, indexKOFSprites_02UM_Igniz, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x0050440, 0x0050460, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"A - Electric Shock Effect", 0x0050460, 0x0050480, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"A - MAX Flash", 0x0050480, 0x00504a0, indexKOFSprites_02UM_Igniz, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x00504a0, 0x00504c0, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"A - Soul Palette", 0x00504c0, 0x00504e0, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x00504e0, 0x0050500, indexKOFSprites_02UM_Igniz, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_B[] =
{
    { L"Igniz B", 0x0050500, 0x0050520, indexKOFSprites_02UM_Igniz },
    { L"B - Misty Win Stuff", 0x0050520, 0x0050540, indexKOFSprites_02UM_Igniz, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x0050540, 0x0050560, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"B - Electric Shock Effect", 0x0050560, 0x0050580, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"B - MAX Flash", 0x0050580, 0x00505a0, indexKOFSprites_02UM_Igniz, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x00505a0, 0x00505c0, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"B - Soul Palette", 0x00505c0, 0x00505e0, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x00505e0, 0x0050600, indexKOFSprites_02UM_Igniz, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_C[] =
{
    { L"Igniz C", 0x0050600, 0x0050620, indexKOFSprites_02UM_Igniz },
    { L"C - Misty Win Stuff", 0x0050620, 0x0050640, indexKOFSprites_02UM_Igniz, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x0050640, 0x0050660, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"C - Electric Shock Effect", 0x0050660, 0x0050680, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"C - MAX Flash", 0x0050680, 0x00506a0, indexKOFSprites_02UM_Igniz, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x00506a0, 0x00506c0, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"C - Soul Palette", 0x00506c0, 0x00506e0, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x00506e0, 0x0050700, indexKOFSprites_02UM_Igniz, 0x00 },
};

const sGame_PaletteDataset KOF02UM_S_IGNIZ_PALETTES_D[] =
{
    { L"Igniz D", 0x0050700, 0x0050720, indexKOFSprites_02UM_Igniz },
    { L"D - Misty Win Stuff", 0x0050720, 0x0050740, indexKOFSprites_02UM_Igniz, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x0050740, 0x0050760, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"D - Electric Shock Effect", 0x0050760, 0x0050780, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"D - MAX Flash", 0x0050780, 0x00507a0, indexKOFSprites_02UM_Igniz, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x00507a0, 0x00507c0, indexKOFSprites_02UM_Igniz, 0x00 },
    { L"D - Soul Palette", 0x00507c0, 0x00507e0, indexKOFSprites_02UM_Igniz, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x00507e0, 0x0050800, indexKOFSprites_02UM_Igniz, 0x00 },
};

const sDescTreeNode KOF02UM_S_IGNIZ_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_A, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_B, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_C, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_D, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_MOVES, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_MOVES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_PALETTES_PORTRAITS, ARRAYSIZE(KOF02UM_S_IGNIZ_PALETTES_PORTRAITS) },
};

#pragma endregion Character Palettes (Auto-Generated)

const sGame_PaletteDataset KOF02UM_S_HUD_PALETTES[] =
{
    { L"Main HUD Stuff and Meter",                  0x53700, 0x53720 },
    { L"Timer",                                     0x53720, 0x53740 },
    { L"Names, Win Count, and Meter",               0x53740, 0x53760 },
    { L"GUARD, Win Text and Remaining Characters",  0x53760, 0x53780 },
    { L"MAX ON Text, Win Count Flash",              0x53780, 0x537a0 },
    { L"Round Text Outline",                        0x537a0, 0x537c0 },
    { L"General Text on HUD",                       0x537c0, 0x537e0 },
    { L"PERFECT",                                   0x537e0, 0x53800 },
    { L"Combo Number",                              0x53800, 0x53820 },
    { L"FIGHT Text",                                0x53840, 0x53880 },
    { L"Win Text KO",                               0x53880, 0x538a0 },
    { L"Winner Text Outline",                       0x538a0, 0x538c0 },
    { L"MAX2 Background Effect 1P",                 0x57e20, 0x57e40, indexKOFSprites_02UM_Bonus, 0x01 },
    { L"MAX2 Background Effect 2P",                 0x57e00, 0x57e20, indexKOFSprites_02UM_Bonus, 0x01 },
};

const sGame_PaletteDataset KOF02UM_S_EXTRA_PALETTES[] =
{
    { L"Lin Poison Effect",         0x1400, 0x1600 },
    { L"Main Fire Effect",          0x1600, 0x1800 },
    { L"Main Orochi Fire Effect",   0x1800, 0x1a00 },
    { L"Orochi Burn Effect",        0x1a00, 0x1c00 },
    { L"Frozen Effect",             0x1c00, 0x1e00 },
    { L"Blood Effects",             0x3c0, 0x3e0 },
    { L"Grab Sparks",               0x380, 0x3a0 },
    { L"Hitspark Effects",          0xa00, 0xa20 },
    { L"Blocksparks Effects",       0x2a0, 0x2c0 },
    { L"Special/Super Blocksparks", 0x2c0, 0x2e0 },
    { L"MAX Mode and SDM Flash",    0x4c0, 0x4e0 },
    { L"MAX Flash",                 0xa80, 0xaa0 },
    { L"MAX2 Flash",                0xaa0, 0xac0 },
};

const sGame_PaletteDataset KOF02UM_S_NEXTSTAGE_PALETTES[] =
{
    { L"Next Stage", 0x57c00, 0x57e00 },
};

const sDescTreeNode KOF02UM_S_BONUS_COLLECTION[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HUD_PALETTES, ARRAYSIZE(KOF02UM_S_HUD_PALETTES) },
    { L"Extra Effects", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTRA_PALETTES, ARRAYSIZE(KOF02UM_S_EXTRA_PALETTES) },
    { L"Next Stage", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NEXTSTAGE_PALETTES, ARRAYSIZE(KOF02UM_S_NEXTSTAGE_PALETTES) },
};

const sGame_PaletteDataset KOF02UM_S_BAR_HUD_PALETTES[] =
{
    { L"Healthbar Above 30%", 0x0, 0x20 },
    { L"Healthbar Under 30%", 0x20, 0x40 },
    { L"0 Meter Bar", 0x40, 0x60 },
    { L"1 Meter Bar", 0x60, 0x80 },
    { L"2 Meter Bar", 0x80, 0xa0 },
    { L"3 Meter Bar", 0xa0, 0xc0 },
    { L"4 Meter Bar", 0xc0, 0xe0 },
    { L"Guard Meter", 0xe0, 0x100 },
    { L"MAX Time Bar", 0x100, 0x120 },
    { L"Lin Poison Healthbar", 0x140, 0x160 },
};

const sDescTreeNode KOF02UM_S_BAR_HUD_COLLECTION[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAR_HUD_PALETTES, ARRAYSIZE(KOF02UM_S_BAR_HUD_PALETTES) },
};

const sDescTreeNode KOF02UM_S_UNITS_BAR[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAR_HUD_COLLECTION, ARRAYSIZE(KOF02UM_S_BAR_HUD_COLLECTION) },
};

constexpr auto KOF02UM_S_NUMUNIT_BAR = ARRAYSIZE(KOF02UM_S_UNITS_BAR);
#define KOF02UM_S_EXTRALOC_BAR KOF02UM_S_NUMUNIT_BAR

const sGame_PaletteDataset KOF02UM_S_MAX2_BG_PALETTES[] =
{
    { L"MAX2 BG Main", 0x0, 0x20, indexKOFSprites_02UM_Bonus, 0x00 },
    { L"MAX2 BG Extra", 0x20, 0x40 },
};

const sDescTreeNode KOF02UM_S_MAX2_BG_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAX2_BG_PALETTES, ARRAYSIZE(KOF02UM_S_MAX2_BG_PALETTES) },
};

const sDescTreeNode KOF02UM_S_UNITS_MAX2[] =
{
    { L"MAX2 Backgrounds", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAX2_BG_COLLECTION, ARRAYSIZE(KOF02UM_S_MAX2_BG_COLLECTION) },
};

constexpr auto KOF02UM_S_NUMUNIT_MAX2 = ARRAYSIZE(KOF02UM_S_UNITS_MAX2);
#define KOF02UM_S_EXTRALOC_MAX2 KOF02UM_S_NUMUNIT_MAX2

const sDescTreeNode KOF02UM_S_UNITS_MAIN[KOF02UM_S_NUMUNIT_MAIN] =
{
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANDY_COLLECTION, ARRAYSIZE(KOF02UM_S_ANDY_COLLECTION) },
    { L"Angel", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ANGEL_COLLECTION, ARRAYSIZE(KOF02UM_S_ANGEL_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ATHENA_COLLECTION, ARRAYSIZE(KOF02UM_S_ATHENA_COLLECTION) },
    { L"Bao", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BAO_COLLECTION, ARRAYSIZE(KOF02UM_S_BAO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BENIMARU_COLLECTION, ARRAYSIZE(KOF02UM_S_BENIMARU_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BILLY_COLLECTION, ARRAYSIZE(KOF02UM_S_BILLY_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BLUEMARY_COLLECTION, ARRAYSIZE(KOF02UM_S_BLUEMARY_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHANG_COLLECTION, ARRAYSIZE(KOF02UM_S_CHANG_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHIN_COLLECTION, ARRAYSIZE(KOF02UM_S_CHIN_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHOI_COLLECTION, ARRAYSIZE(KOF02UM_S_CHOI_COLLECTION) },
    { L"Chris", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_CHRIS_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLARK_COLLECTION, ARRAYSIZE(KOF02UM_S_CLARK_COLLECTION) },
    { L"Clone Zero", DESC_NODETYPE_TREE, (void*)KOF02UM_S_CLONEZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_CLONEZERO_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF02UM_S_DAIMON_COLLECTION, ARRAYSIZE(KOF02UM_S_DAIMON_COLLECTION) },
    { L"EX Kensou", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXKENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_EXKENSOU_COLLECTION) },
    { L"EX Robert", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_EXROBERT_COLLECTION) },
    { L"EX Takuma", DESC_NODETYPE_TREE, (void*)KOF02UM_S_EXTAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_EXTAKUMA_COLLECTION) },
    { L"Foxy", DESC_NODETYPE_TREE, (void*)KOF02UM_S_FOXY_COLLECTION, ARRAYSIZE(KOF02UM_S_FOXY_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_GEESE_COLLECTION) },
    { L"Goenitz", DESC_NODETYPE_TREE, (void*)KOF02UM_S_GOENITZ_COLLECTION, ARRAYSIZE(KOF02UM_S_GOENITZ_COLLECTION) },
    { L"Heidern", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HEIDERN_COLLECTION, ARRAYSIZE(KOF02UM_S_HEIDERN_COLLECTION) },
    { L"Hinako", DESC_NODETYPE_TREE, (void*)KOF02UM_S_HINAKO_COLLECTION, ARRAYSIZE(KOF02UM_S_HINAKO_COLLECTION) },
    { L"Igniz", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IGNIZ_COLLECTION, ARRAYSIZE(KOF02UM_S_IGNIZ_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF02UM_S_IORI_COLLECTION, ARRAYSIZE(KOF02UM_S_IORI_COLLECTION) },
    { L"Jhun Hoon", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JHUNHOON_COLLECTION, ARRAYSIZE(KOF02UM_S_JHUNHOON_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF02UM_S_JOE_COLLECTION, ARRAYSIZE(KOF02UM_S_JOE_COLLECTION) },
    { L"K’", DESC_NODETYPE_TREE, (void*)KOF02UM_S_K_COLLECTION, ARRAYSIZE(KOF02UM_S_K_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KASUMI_COLLECTION, ARRAYSIZE(KOF02UM_S_KASUMI_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KENSOU_COLLECTION, ARRAYSIZE(KOF02UM_S_KENSOU_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KIM_COLLECTION, ARRAYSIZE(KOF02UM_S_KIM_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KING_COLLECTION, ARRAYSIZE(KOF02UM_S_KING_COLLECTION) },
    { L"Krizalid", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KRIZALID_COLLECTION, ARRAYSIZE(KOF02UM_S_KRIZALID_COLLECTION) },
    { L"Kula", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KULA_COLLECTION, ARRAYSIZE(KOF02UM_S_KULA_COLLECTION) },
    { L"KUSANAGI", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KUSANAGI_COLLECTION, ARRAYSIZE(KOF02UM_S_KUSANAGI_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO_COLLECTION) },
    { L"Kyo-1", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO1_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO1_COLLECTION) },
    { L"Kyo-2", DESC_NODETYPE_TREE, (void*)KOF02UM_S_KYO2_COLLECTION, ARRAYSIZE(KOF02UM_S_KYO2_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LEONA_COLLECTION, ARRAYSIZE(KOF02UM_S_LEONA_COLLECTION) },
    { L"Lin", DESC_NODETYPE_TREE, (void*)KOF02UM_S_LIN_COLLECTION, ARRAYSIZE(KOF02UM_S_LIN_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAI_COLLECTION, ARRAYSIZE(KOF02UM_S_MAI_COLLECTION) },
    { L"Mature", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MATURE_COLLECTION, ARRAYSIZE(KOF02UM_S_MATURE_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAXIMA_COLLECTION, ARRAYSIZE(KOF02UM_S_MAXIMA_COLLECTION) },
    { L"May Lee", DESC_NODETYPE_TREE, (void*)KOF02UM_S_MAYLEE_COLLECTION, ARRAYSIZE(KOF02UM_S_MAYLEE_COLLECTION) },
    { L"Nameless", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NAMELESS_COLLECTION, ARRAYSIZE(KOF02UM_S_NAMELESS_COLLECTION) },
    { L"Nightmare Geese", DESC_NODETYPE_TREE, (void*)KOF02UM_S_NIGHTMAREGEESE_COLLECTION, ARRAYSIZE(KOF02UM_S_NIGHTMAREGEESE_COLLECTION) },
    { L"O.Chris", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OCHRIS_COLLECTION, ARRAYSIZE(KOF02UM_S_OCHRIS_COLLECTION) },
    { L"O.Shermie", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OSHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_OSHERMIE_COLLECTION) },
    { L"O.Yashiro", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OYASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_OYASHIRO_COLLECTION) },
    { L"Omega Rugal", DESC_NODETYPE_TREE, (void*)KOF02UM_S_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF02UM_S_OMEGARUGAL_COLLECTION) },
    { L"Original Zero", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ORIGINALZERO_COLLECTION, ARRAYSIZE(KOF02UM_S_ORIGINALZERO_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RALF_COLLECTION, ARRAYSIZE(KOF02UM_S_RALF_COLLECTION) },
    { L"Ramon", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RAMON_COLLECTION, ARRAYSIZE(KOF02UM_S_RAMON_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF02UM_S_ROBERT_COLLECTION, ARRAYSIZE(KOF02UM_S_ROBERT_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF02UM_S_RYO_COLLECTION, ARRAYSIZE(KOF02UM_S_RYO_COLLECTION) },
    { L"Seth", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SETH_COLLECTION, ARRAYSIZE(KOF02UM_S_SETH_COLLECTION) },
    { L"Shermie", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHERMIE_COLLECTION, ARRAYSIZE(KOF02UM_S_SHERMIE_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF02UM_S_SHINGO_COLLECTION, ARRAYSIZE(KOF02UM_S_SHINGO_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TAKUMA_COLLECTION, ARRAYSIZE(KOF02UM_S_TAKUMA_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF02UM_S_TERRY_COLLECTION, ARRAYSIZE(KOF02UM_S_TERRY_COLLECTION) },
    { L"Vanessa", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VANESSA_COLLECTION, ARRAYSIZE(KOF02UM_S_VANESSA_COLLECTION) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)KOF02UM_S_VICE_COLLECTION, ARRAYSIZE(KOF02UM_S_VICE_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOF02UM_S_WHIP_COLLECTION, ARRAYSIZE(KOF02UM_S_WHIP_COLLECTION) },
    { L"Xiangfei", DESC_NODETYPE_TREE, (void*)KOF02UM_S_XIANGFEI_COLLECTION, ARRAYSIZE(KOF02UM_S_XIANGFEI_COLLECTION) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF02UM_S_YAMAZAKI_COLLECTION) },
    { L"Yashiro", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YASHIRO_COLLECTION, ARRAYSIZE(KOF02UM_S_YASHIRO_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF02UM_S_YURI_COLLECTION, ARRAYSIZE(KOF02UM_S_YURI_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)KOF02UM_S_BONUS_COLLECTION, ARRAYSIZE(KOF02UM_S_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF02UM_S_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

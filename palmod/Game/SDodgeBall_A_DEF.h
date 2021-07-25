#pragma once

const UINT16 SuperDodgeball_A_IMGIDS_USED[] =
{
    indexNEOGEOSprites_SDB_AthleticGirl,    // 0x6C
    indexNEOGEOSprites_SDB_DBMaou,          // 0x6D
    indexNEOGEOSprites_SDB_DelinquentGuy,   // 0x6E
    indexNEOGEOSprites_SDB_FatGuy,          // 0x6F
    indexNEOGEOSprites_SDB_Kenji,           // 0x70
    indexNEOGEOSprites_SDB_Kunio,           // 0x71
    indexNEOGEOSprites_SDB_Misuzu,          // 0x72
    indexNEOGEOSprites_SDB_Miyuki,          // 0x73
    indexNEOGEOSprites_SDB_NerdBoy,         // 0x74
    indexNEOGEOSprites_SDB_Riki,            // 0x75
    indexNEOGEOSprites_SDB_RugbyGuy,        // 0x76
    indexNEOGEOSprites_SDB_Sabu,            // 0x77
    indexNEOGEOSprites_SDB_Shinji,          // 0x78
    indexNEOGEOSprites_SDB_Bonus,           // 0x79
};

// CHARACTERS

// Kunio
const sGame_PaletteDataset SDODGEBALL_A_KUNIO_A[] =
{
    { L"Kunio A", 0x1461bc, 0x1461dc, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio A Power MAX", 0x1461dc, 0x1461fc, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio A Select", 0xed0c, 0xed2c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio A Portrait", 0xe04c, 0xe06c, indexNEOGEOSprites_SDB_Kunio, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_KUNIO_B[] =
{
    { L"Kunio B", 0x1461fc, 0x14621c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio B Power MAX", 0x14621c, 0x14623c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio B Select", 0xed2c, 0xed4c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio B Portrait", 0xe06c, 0xe08c, indexNEOGEOSprites_SDB_Kunio, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_KUNIO_C[] =
{
    { L"Kunio C", 0x14623c, 0x14625c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio C Power MAX", 0x14625c, 0x14627c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio C Select", 0xed4c, 0xed6c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio C Portrait", 0xe08c, 0xe0ac, indexNEOGEOSprites_SDB_Kunio, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_KUNIO_D[] =
{
    { L"Kunio D", 0x14627c, 0x14629c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio D Power MAX", 0x14629c, 0x1462bc, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio D Select", 0xed6c, 0xed8c, indexNEOGEOSprites_SDB_Kunio, 0x00 },
    { L"Kunio D Portrait", 0xe0ac, 0xe0cc, indexNEOGEOSprites_SDB_Kunio, 0x40 },
};

// Riki
const sGame_PaletteDataset SDODGEBALL_A_RIKI_A[] =
{
    { L"Riki A", 0x1462bc, 0x1462dc, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki A Power MAX", 0x1462dc, 0x1462fc, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki A Select ", 0xed8c, 0xedac, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki A Portrait", 0xe0cc, 0xe0ec, indexNEOGEOSprites_SDB_Riki, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_RIKI_B[] =
{
    { L"Riki B", 0x1462fc, 0x14631c, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki B Power MAX", 0x14631c, 0x14633c, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki B Select", 0xedac, 0xedcc, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki B Portrait", 0xe0ec, 0xe10c, indexNEOGEOSprites_SDB_Riki, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_RIKI_C[] =
{
    { L"Riki C", 0x14633c, 0x14635c, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki C Power MAX", 0x14635c, 0x14637c, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki C Select", 0xedcc, 0xedec, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki C Portrait", 0xe10c, 0xe12c, indexNEOGEOSprites_SDB_Riki, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_RIKI_D[] =
{
    { L"Riki D", 0x14637c, 0x14639c, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki D Power MAX", 0x14639c, 0x1463bc, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki D Select", 0xedec, 0xee0c, indexNEOGEOSprites_SDB_Riki, 0x00 },
    { L"Riki D Portrait", 0xe12c, 0xe14c, indexNEOGEOSprites_SDB_Riki, 0x40 },
};

// Shinji
const sGame_PaletteDataset SDODGEBALL_A_SHINJI_A[] =
{
    { L"Shinji A", 0x1463bc, 0x1463dc, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji A Power MAX", 0x1463dc, 0x1463fc, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji A Select", 0xee0c, 0xee2c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji A Portrait", 0xe1cc, 0xe1ec, indexNEOGEOSprites_SDB_Shinji, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_SHINJI_B[] =
{
    { L"Shinji B", 0x1463fc, 0x14641c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji B Power MAX", 0x14641c, 0x14643c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji B Select", 0xee2c, 0xee4c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji B Portrait", 0xe1ec, 0xe20c, indexNEOGEOSprites_SDB_Shinji, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_SHINJI_C[] =
{
    { L"Shinji C", 0x14643c, 0x14645c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji C Power MAX", 0x14645c, 0x14647c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji C Select", 0xee4c, 0xee6c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji C Portrait", 0xe20c, 0xe22c, indexNEOGEOSprites_SDB_Shinji, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_SHINJI_D[] =
{
    { L"Shinji D", 0x14647c, 0x14649c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji D Power MAX", 0x14649c, 0x1464bc, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji D Select", 0xee6c, 0xee8c, indexNEOGEOSprites_SDB_Shinji, 0x00 },
    { L"Shinji D Portrait", 0xe22c, 0xe24c, indexNEOGEOSprites_SDB_Shinji, 0x40 },
};

// Misuzu
const sGame_PaletteDataset SDODGEBALL_A_MISUZU_A[] =
{
    { L"Misuzu A", 0x1464bc, 0x1464dc, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu A Power MAX", 0x1464dc, 0x1464fc, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu A Select", 0xee8c, 0xeeac, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu A Portrait", 0xe2cc, 0xe2ec, indexNEOGEOSprites_SDB_Misuzu, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MISUZU_B[] =
{
    { L"Misuzu B", 0x1464fc, 0x14651c, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu B Power MAX", 0x14651c, 0x14653c, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu B Select", 0xeeac, 0xeecc, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu B Portrait", 0xe2ec, 0xe30c, indexNEOGEOSprites_SDB_Misuzu, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MISUZU_C[] =
{
    { L"Misuzu C", 0x14653c, 0x14655c, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu C Power MAX", 0x14655c, 0x14657c, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu C Select", 0xeecc, 0xeeec, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu C Portrait", 0xe30c, 0xe32c, indexNEOGEOSprites_SDB_Misuzu, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MISUZU_D[] =
{
    { L"Misuzu D", 0x14657c, 0x14659c, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu D Power MAX", 0x14659c, 0x1465bc, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu D Select", 0xeeec, 0xef0c, indexNEOGEOSprites_SDB_Misuzu, 0x00 },
    { L"Misuzu D Portrait", 0xe32c, 0xe34c, indexNEOGEOSprites_SDB_Misuzu, 0x40 },
};

// Kenji
const sGame_PaletteDataset SDODGEBALL_A_KENJI_A[] =
{
    { L"Kenji A", 0x1465bc, 0x1465dc, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji A Power MAX", 0x1465dc, 0x1465fc, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji A Select", 0xef0c, 0xef2c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji A Portrait", 0xe14c, 0xe16c, indexNEOGEOSprites_SDB_Kenji, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_KENJI_B[] =
{
    { L"Kenji B", 0x1465fc, 0x14661c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji B Power MAX", 0x14661c, 0x14663c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji B Select", 0xef2c, 0xef4c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji B Portrait", 0xe16c, 0xe18c, indexNEOGEOSprites_SDB_Kenji, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_KENJI_C[] =
{
    { L"Kenji C", 0x14663c, 0x14665c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji C Power MAX", 0x14665c, 0x14667c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji C Select", 0xef4c, 0xef6c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji C Portrait", 0xe18c, 0xe1ac, indexNEOGEOSprites_SDB_Kenji, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_KENJI_D[] =
{
    { L"Kenji D", 0x14667c, 0x14669c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji D Power MAX", 0x14669c, 0x1466bc, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji D Select", 0xef6c, 0xef8c, indexNEOGEOSprites_SDB_Kenji, 0x00 },
    { L"Kenji D Portrait", 0xe1ac, 0xe1cc, indexNEOGEOSprites_SDB_Kenji, 0x40 },
};

// Miyuki
const sGame_PaletteDataset SDODGEBALL_A_MIYUKI_A[] =
{
    { L"Miyuki A", 0x1466bc, 0x1466dc, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki A Power MAX", 0x1466dc, 0x1466fc, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki A Select", 0xef8c, 0xefac, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki A Portrait", 0xe24c, 0xe26c, indexNEOGEOSprites_SDB_Miyuki, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MIYUKI_B[] =
{
    { L"Miyuki B", 0x1466fc, 0x14671c, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki B Power MAX", 0x14671c, 0x14673c, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki B Select", 0xefac, 0xefcc, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki B Portrait", 0xe26c, 0xe28c, indexNEOGEOSprites_SDB_Miyuki, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MIYUKI_C[] =
{
    { L"Miyuki C", 0x14673c, 0x14675c, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki C Power MAX", 0x14675c, 0x14677c, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki C Select", 0xefcc, 0xefec, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki C Portrait", 0xe28c, 0xe2ac, indexNEOGEOSprites_SDB_Miyuki, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MIYUKI_D[] =
{
    { L"Miyuki D", 0x14677c, 0x14679c, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki D Power MAX", 0x14679c, 0x1467bc, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki D Select", 0xefec, 0xf00c, indexNEOGEOSprites_SDB_Miyuki, 0x00 },
    { L"Miyuki D Portrait", 0xe2ac, 0xe2cc, indexNEOGEOSprites_SDB_Miyuki, 0x40 },
};

// Sabu
const sGame_PaletteDataset SDODGEBALL_A_SABU_A[] =
{
    { L"Sabu A", 0x1467bc, 0x1467dc, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu A Power MAX", 0x1467dc, 0x1467fc, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu A Select", 0xf00c, 0xf02c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu A Portrait", 0xe34c, 0xe36c, indexNEOGEOSprites_SDB_Sabu, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_SABU_B[] =
{
    { L"Sabu B", 0x1467fc, 0x14681c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu B Power MAX", 0x14681c, 0x14683c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu B Select", 0xf02c, 0xf04c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu B Portrait", 0xe36c, 0xe38c, indexNEOGEOSprites_SDB_Sabu, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_SABU_C[] =
{
    { L"Sabu C", 0x14683c, 0x14685c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu C Power MAX", 0x14685c, 0x14687c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu C Select", 0xf04c, 0xf06c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu C Portrait", 0xe38c, 0xe3ac, indexNEOGEOSprites_SDB_Sabu, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_SABU_D[] =
{
    { L"Sabu D", 0x14687c, 0x14689c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu D Power MAX", 0x14689c, 0x1468bc, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu D Select", 0xf06c, 0xf08c, indexNEOGEOSprites_SDB_Sabu, 0x00 },
    { L"Sabu D Portrait", 0xe3ac, 0xe3cc, indexNEOGEOSprites_SDB_Sabu, 0x40 },
};

// D.B.Maou
const sGame_PaletteDataset SDODGEBALL_A_MAOU_A[] =
{
    { L"D.B.Maou A", 0x1468bc, 0x1468dc, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou A Power MAX", 0x1468dc, 0x1468fc, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou A Transformation ", 0x14717c, 0x14719c, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou A Transformation Power MAX", 0x14719c, 0x1471bc, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou A Select", 0xf08c, 0xf0ac, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou A Portrait", 0xe3cc, 0xe3ec, indexNEOGEOSprites_SDB_DBMaou, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MAOU_B[] =
{
    { L"D.B.Maou B", 0x1468fc, 0x14691c, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou B Power MAX", 0x14691c, 0x14693c, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou B Transformation", 0x1471bc, 0x1471dc, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou B Transformation Power MAX", 0x1471dc, 0x1471fc, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou B Select", 0xf0ac, 0xf0cc, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou B Portrait", 0xe3ec, 0xe40c, indexNEOGEOSprites_SDB_DBMaou, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MAOU_C[] =
{
    { L"D.B.Maou C", 0x14693c, 0x14695c, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou C Power MAX", 0x14695c, 0x14697c, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou C Transformation", 0x1471fc, 0x14721c, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou C Transformation Power MAX", 0x14721c, 0x14723c, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou C Select", 0xf0cc, 0xf0ec, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou C Portrait", 0xe40c, 0xe42c, indexNEOGEOSprites_SDB_DBMaou, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_MAOU_D[] =
{
    { L"D.B.Maou D", 0x14697c, 0x14699c, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou D Power MAX", 0x14699c, 0x1469bc, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou D Transformation", 0x14723c, 0x14725c, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou D Transformation Power MAX", 0x14725c, 0x14727c, indexNEOGEOSprites_SDB_DBMaou, 0x08 },
    { L"D.B.Maou D Select", 0xf0ec, 0xf10c, indexNEOGEOSprites_SDB_DBMaou, 0x00 },
    { L"D.B.Maou D Portrait", 0xe42c, 0xe44c, indexNEOGEOSprites_SDB_DBMaou, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_KAMEKICHI[] =
{
    { L"Kamekichi", 0x146c7c, 0x146c9c, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kamekichi Power MAX", 0x146c9c, 0x146cbc, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kamekichi A-C Select", 0xf14c, 0xf16c, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kamekichi B-D Select", 0xf16c, 0xf18c, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kamekichi A-C Portrait", 0xe44c, 0xe46c, indexNEOGEOSprites_SDB_NerdBoy, 0x40 },
    { L"Kamekichi B-D Portrait", 0xe46c, 0xe48c, indexNEOGEOSprites_SDB_NerdBoy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_MAKOTO[] =
{
    { L"Makoto", 0x146cfc, 0x146d1c, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Makoto Power MAX", 0x146d1c, 0x146d3c, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Makoto A-C Select", 0xf3cc, 0xf3ec, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Makoto B-D Select", 0xf3ec, 0xf40c, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Makoto A-C Portrait", 0xe6cc, 0xe6ec, indexNEOGEOSprites_SDB_NerdBoy, 0x40 },
    { L"Makoto B-D Portrait", 0xe6ec, 0xe70c, indexNEOGEOSprites_SDB_NerdBoy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_KAEDE[] =
{
    { L"Kaede A", 0x146cbc, 0x146cdc, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kaede Power MAX", 0x146cdc, 0x146cfc, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kaede A-C Select", 0xf28c, 0xf2ac, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kaede B-D Select", 0xf2ac, 0xf2cc, indexNEOGEOSprites_SDB_NerdBoy, 0x00 },
    { L"Kaede A-C Portrait", 0xe58c, 0xe5ac, indexNEOGEOSprites_SDB_NerdBoy, 0x40 },
    { L"Kaede B-D Portrait", 0xe5ac, 0xe5cc, indexNEOGEOSprites_SDB_NerdBoy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_MUSASHI[] =
{
    { L"Musashi", 0x146e7c, 0x146e9c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Musashi Power MAX", 0x146e9c, 0x146ebc, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Musashi A-C Select", 0xf1cc, 0xf1ec, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Musashi B-D Select", 0xf1ec, 0xf20c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Musashi A-C Portrait", 0xe4cc, 0xe4ec, indexNEOGEOSprites_SDB_FatGuy, 0x40 },
    { L"Musashi B-D Portrait", 0xe4ec, 0xe50c, indexNEOGEOSprites_SDB_FatGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_HIROMITSU[] =
{
    { L"Hiromitsu", 0x146ebc, 0x146edc, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Hiromitsu Power MAX", 0x146edc, 0x146efc, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Hiromitsu A-C Select", 0xf30c, 0xf32c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Hiromitsu B-D Select", 0xf32c, 0xf34c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Hiromitsu A-C Portrait", 0xe60c, 0xe62c, indexNEOGEOSprites_SDB_FatGuy, 0x40 },
    { L"Hiromitsu B-D Portrait", 0xe62c, 0xe64c, indexNEOGEOSprites_SDB_FatGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_GONZOU[] =
{
    { L"Gonzou", 0x146efc, 0x146f1c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Gonzou Power MAX", 0x146f1c, 0x146f3c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Gonzou A-C Select", 0xf44c, 0xf46c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Gonzou B-D Select", 0xf46c, 0xf48c, indexNEOGEOSprites_SDB_FatGuy, 0x00 },
    { L"Gonzou A-C Portrait", 0xe74c, 0xe76c, indexNEOGEOSprites_SDB_FatGuy, 0x40 },
    { L"Gonzou B-D Portrait", 0xe76c, 0xe78c, indexNEOGEOSprites_SDB_FatGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_KOZUE[] =
{
    { L"Kozue", 0x1470fc, 0x14711c, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Kozue Power MAX", 0x14711c, 0x14713c, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Kozue A-C Select", 0xf4cc, 0xf4ec, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Kozue B-D Select", 0xf4ec, 0xf50c, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Kozue A-C Portrait", 0xe7cc, 0xe7ec, indexNEOGEOSprites_SDB_AthleticGirl, 0x40 },
    { L"Kozue B-D Portrait", 0xe7ec, 0xe80c, indexNEOGEOSprites_SDB_AthleticGirl, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_KEIKO[] =
{
    { L"Keiko", 0x14707c, 0x14709c, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Keiko Power MAX", 0x14709c, 0x1470bc, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Keiko A-C Select", 0xf24c, 0xf26c, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Keiko B-D Select", 0xf26c, 0xf28c, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Keiko A-C Portrait", 0xe54c, 0xe56c, indexNEOGEOSprites_SDB_AthleticGirl, 0x40 },
    { L"Keiko B-D Portrait", 0xe56c, 0xe58c, indexNEOGEOSprites_SDB_AthleticGirl, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_AKEMI[] =
{
    { L"Akemi", 0x1470bc, 0x1470dc, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Akemi Power MAX", 0x1470dc, 0x1470fc, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Akemi A-C Select", 0xf38c, 0xf3ac, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Akemi B-D Select", 0xf3ac, 0xf3cc, indexNEOGEOSprites_SDB_AthleticGirl, 0x00 },
    { L"Akemi A-C Portrait", 0xe68c, 0xe6ac, indexNEOGEOSprites_SDB_AthleticGirl, 0x40 },
    { L"Akemi B-D Portrait", 0xe6ac, 0xe6cc, indexNEOGEOSprites_SDB_AthleticGirl, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_AKIRA[] =
{
    { L"Akira", 0x146ffc, 0x14701c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Akira Power MAX", 0x14701c, 0x14703c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Akira A-C Select", 0xf48c, 0xf4ac, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Akira B-D Select", 0xf4ac, 0xf4cc, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Akira A-C Portrait", 0xe78c, 0xe7ac, indexNEOGEOSprites_SDB_DelinquentGuy, 0x40 },
    { L"Akira B-D Portrait", 0xe7ac, 0xe7cc, indexNEOGEOSprites_SDB_DelinquentGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_JYOJI[] =
{
    { L"Jyoji", 0x146f7c, 0x146f9c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Jyoji Power MAX", 0x146f9c, 0x146fbc, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Jyoji A-C Select", 0xf20c, 0xf22c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Jyoji B-D Select", 0xf22c, 0xf24c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Jioji A-C Portrait", 0xe50c, 0xe52c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x40 },
    { L"Jioji B-D Portrait", 0xe52c, 0xe54c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_TAKUYA[] =
{
    { L"Takuya", 0x146fbc, 0x146fdc, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Takuya Power MAX", 0x146fdc, 0x146ffc, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Takuya A-C Select", 0xf34c, 0xf36c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Takuya B-D Select", 0xf36c, 0xf38c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x00 },
    { L"Takuya A-C Portrait", 0xe64c, 0xe66c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x40 },
    { L"Takuya B-D Portrait", 0xe66c, 0xe68c, indexNEOGEOSprites_SDB_DelinquentGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_USHIMARU[] =
{
    { L"Ushimaru", 0x146dbc, 0x146ddc, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Ushimaru Power MAX", 0x146ddc, 0x146dfc, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Ushimaru A-C Select", 0xf2cc, 0xf2ec, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Ushimaru B-D Select", 0xf2ec, 0xf30c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Ushimaru A-C Portrait", 0xe5cc, 0xe5ec, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
    { L"Ushimaru B-D Portrait", 0xe5ec, 0xe60c, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_KIYOSHI[] =
{
    { L"Kiyoshi", 0x146d7c, 0x146d9c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Kiyoshi Power MAX", 0x146d9c, 0x146dbc, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Kiyoshi A-C Select", 0xf18c, 0xf1ac, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Kiyoshi B-D Select", 0xf1ac, 0xf1cc, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Kiyoshi A-C Portrait", 0xe48c, 0xe4ac, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
    { L"Kiyoshi B-D Portrait", 0xe4ac, 0xe4cc, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_BOO[] =
{
    { L"Boo", 0x146dfc, 0x146e1c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Boo Power MAX", 0x146e1c, 0x146e3c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Boo A-C Select", 0xf40c, 0xf42c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Boo B-D Select", 0xf42c, 0xf44c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Boo A-C Portrait", 0xe70c, 0xe72c, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
    { L"Boo B-D Portrait", 0xe72c, 0xe74c, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
};

const sGame_PaletteDataset SDODGEBALL_A_PALETTES_DAA[] =
{
    { L"Daa", 0x146e3c, 0x146e5c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Daa Power MAX", 0x146e5c, 0x146e7c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Daa A-C Select", 0xf50c, 0xf52c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Daa B-D Select", 0xf52c, 0xf54c, indexNEOGEOSprites_SDB_RugbyGuy, 0x00 },
    { L"Daa A-C Portrait", 0xe80c, 0xe82c, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
    { L"Daa B-D Portrait", 0xe82c, 0xe84c, indexNEOGEOSprites_SDB_RugbyGuy, 0x40 },
};

// Stages

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_KUNIO[] =
{
    { L"Kunio's Stage 1/2", 0x1229c, 0x1249c },
    { L"Kunio's Stage 2/2", 0x1249c, 0x1269c },
};

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_SHINJI[] =
{
    { L"Shinji's Stage 1/3", 0x14f9c, 0x1519c },
    { L"Shinji's Stage 2/3", 0x1519c, 0x1539c },
    { L"Shinji's Stage 3/3", 0x1539c, 0x1559c },
};

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_MISUZU[] =
{
    { L"Misuzu's Stage 1/3", 0x1699c, 0x16b9c },
    { L"Misuzu's Stage 2/3", 0x16b9c, 0x16d9c },
    { L"Misuzu's Stage 3/3", 0x16d9c, 0x16f9c },
    { L"Misuzu's Stage Floor 1/15", 0x16f9c, 0x1719c },
    { L"Misuzu's Stage Floor 2/15", 0x1719c, 0x1739c },
    { L"Misuzu's Stage Floor 3/15", 0x1739c, 0x1759c },
    { L"Misuzu's Stage Floor 4/15", 0x1759c, 0x1779c },
    { L"Misuzu's Stage Floor 5/15", 0x1779c, 0x1799c },
    { L"Misuzu's Stage Floor 6/15", 0x1799c, 0x17b9c },
    { L"Misuzu's Stage Floor 7/15", 0x17b9c, 0x17d9c },
    { L"Misuzu's Stage Floor 8/15", 0x17d9c, 0x17f9c },
    { L"Misuzu's Stage Floor 9/15", 0x17f9c, 0x1819c },
    { L"Misuzu's Stage Floor 10/15", 0x1819c, 0x1839c },
    { L"Misuzu's Stage Floor 11/15", 0x1839c, 0x1859c },
    { L"Misuzu's Stage Floor 12/15", 0x1859c, 0x1879c },
    { L"Misuzu's Stage Floor 13/15", 0x1879c, 0x1899c },
    { L"Misuzu's Stage Floor 14/15", 0x1899c, 0x18b9c },
    { L"Misuzu's Stage Floor 15/15", 0x18b9c, 0x18d9c },
};

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_RIKU[] =
{
    { L"Riki's Stage 1/3", 0x1ab74, 0x1ad74 },
    { L"Riki's Stage 2/3", 0x1ad74, 0x1af74 },
    { L"Riki's Stage 3/3", 0x1af74, 0x1b174 },
};

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_MIYUKI[] =
{
//Miyuki's Stage
    { L"Miyuki's Stage 1/3", 0x1c574, 0x1c774 },
    { L"Miyuki's Stage 2/3", 0x1c774, 0x1c974 },
    { L"Miyuki's Stage 3/3", 0x1c974, 0x1cb74 },
};

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_KENJI[] =
{
    //Kenji's Stage
    { L"Kenji's Stage 1/3", 0x1dfd8, 0x1e1d8 },
    { L"Kenji's Stage 2/3", 0x1e1d8, 0x1e3d8 },
    { L"Kenji's Stage 3/3", 0x1e3d8, 0x1e5d8 },
};

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_SABU[] =
{
    //Sabu's Stage
    { L"Sabu's Stage", 0x20200, 0x20400 },
    { L"Sabu's Stage", 0x20400, 0x20600 },
    { L"Sabu's Stage", 0x20600, 0x20800 },
};

const sGame_PaletteDataset SDODGEBALL_A_STAGE_PALETTES_MAOU[] =
{
    //D.B.Maou's Stage
    { L"D.B.Maou's Stage 1/3", 0x21d90, 0x21f90 },
    { L"D.B.Maou's Stage 2/3", 0x21f90, 0x22190 },
    { L"D.B.Maou's Stage 3/3", 0x22190, 0x22390 },
};

// -BONUS-
const sGame_PaletteDataset SDODGEBALL_A_BONUS_IngameExtras[] =
{
    { L"Angela Referee", 0x14747c, 0x14749c },
    { L"Hitsparks", 0x1474bc, 0x1474dc },
    { L"Blockparks", 0x1474dc, 0x1474fc },
    { L"Firesparks", 0x1474fc, 0x14751c },
    { L"Purple Firesparks", 0x14751c, 0x14753c },
    { L"Mash Button Icon", 0x1475bc, 0x1475dc },
    { L"P1-P2 Icon", 0x14753c, 0x14755c },
    { L"Dust", 0x1475dc, 0x1475fc },
    { L"Stun Effect", 0x1475fc, 0x14761c },
    { L"Sabu Special Shot", 0x146afc, 0x146b1c },
    { L"D.B.Maou Special Shot", 0x146b1c, 0x146b3c },
};

// Shared Palettes[] =
const sGame_PaletteDataset SDODGEBALL_A_BONUS_Shared[] =
{
    { L"Shared Burned 1", 0x146b9c, 0x146bbc },
    { L"Shared Burned 2", 0x146bbc, 0x146bdc },
    { L"Shared Burned 3", 0x146bdc, 0x146bfc },
    { L"Shared Purple Burned 1", 0x146bfc, 0x146c1c },
    { L"Shared Purple Burned 2", 0x146c1c, 0x146c3c },
    { L"Shared Purple Burned 3", 0x146c3c, 0x146c5c },
    { L"Shared Zapped", 0x146c5c, 0x146c7c },
    { L"Shared Super Trail 1", 0x14755c, 0x14757c },
    { L"Shared Super Trail 2", 0x14757c, 0x14759c },
    { L"Shared Super Trail 3", 0x14759c, 0x1475bc },
};

// Volleyball[] =
const sGame_PaletteDataset SDODGEBALL_A_BONUS_VolleyBall[] =
{
    { L"Volley Ball", 0x1469bc, 0x1469dc },
    { L"Explosive Volley Ball 1", 0x146a1c, 0x146a3c },
    { L"Explosive Volley Ball 2", 0x146a3c, 0x146a5c },
    { L"Burning Volley Ball", 0x146a5c, 0x146a7c },
    { L"Purple Burning Volley Ball", 0x146a7c, 0x146a9c },
    { L"Volley Ball Trail 1", 0x146a9c, 0x146abc },
    { L"Volley Ball Trail 2", 0x146abc, 0x146adc },
    { L"Volley Ball Trail 3", 0x146adc, 0x146afc },
};

const sDescTreeNode SDODGEBALL_A_KUNIO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KUNIO_A, ARRAYSIZE(SDODGEBALL_A_KUNIO_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KUNIO_B, ARRAYSIZE(SDODGEBALL_A_KUNIO_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KUNIO_C, ARRAYSIZE(SDODGEBALL_A_KUNIO_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KUNIO_D, ARRAYSIZE(SDODGEBALL_A_KUNIO_D) },
};

const sDescTreeNode SDODGEBALL_A_RIKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_RIKI_A, ARRAYSIZE(SDODGEBALL_A_RIKI_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_RIKI_B, ARRAYSIZE(SDODGEBALL_A_RIKI_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_RIKI_C, ARRAYSIZE(SDODGEBALL_A_RIKI_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_RIKI_D, ARRAYSIZE(SDODGEBALL_A_RIKI_D) },
};

const sDescTreeNode SDODGEBALL_A_SHINJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SHINJI_A, ARRAYSIZE(SDODGEBALL_A_SHINJI_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SHINJI_B, ARRAYSIZE(SDODGEBALL_A_SHINJI_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SHINJI_C, ARRAYSIZE(SDODGEBALL_A_SHINJI_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SHINJI_D, ARRAYSIZE(SDODGEBALL_A_SHINJI_D) },
};

const sDescTreeNode SDODGEBALL_A_MISUZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MISUZU_A, ARRAYSIZE(SDODGEBALL_A_MISUZU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MISUZU_B, ARRAYSIZE(SDODGEBALL_A_MISUZU_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MISUZU_C, ARRAYSIZE(SDODGEBALL_A_MISUZU_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MISUZU_D, ARRAYSIZE(SDODGEBALL_A_MISUZU_D) },
};

const sDescTreeNode SDODGEBALL_A_KENJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KENJI_A, ARRAYSIZE(SDODGEBALL_A_KENJI_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KENJI_B, ARRAYSIZE(SDODGEBALL_A_KENJI_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KENJI_C, ARRAYSIZE(SDODGEBALL_A_KENJI_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KENJI_D, ARRAYSIZE(SDODGEBALL_A_KENJI_D) },
};

const sDescTreeNode SDODGEBALL_A_MIYUKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MIYUKI_A, ARRAYSIZE(SDODGEBALL_A_MIYUKI_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MIYUKI_B, ARRAYSIZE(SDODGEBALL_A_MIYUKI_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MIYUKI_C, ARRAYSIZE(SDODGEBALL_A_MIYUKI_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MIYUKI_D, ARRAYSIZE(SDODGEBALL_A_MIYUKI_D) },
};

const sDescTreeNode SDODGEBALL_A_SABU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SABU_A, ARRAYSIZE(SDODGEBALL_A_SABU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SABU_B, ARRAYSIZE(SDODGEBALL_A_SABU_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SABU_C, ARRAYSIZE(SDODGEBALL_A_SABU_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SABU_D, ARRAYSIZE(SDODGEBALL_A_SABU_D) },
};

const sDescTreeNode SDODGEBALL_A_MAOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MAOU_A, ARRAYSIZE(SDODGEBALL_A_MAOU_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MAOU_B, ARRAYSIZE(SDODGEBALL_A_MAOU_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MAOU_C, ARRAYSIZE(SDODGEBALL_A_MAOU_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MAOU_D, ARRAYSIZE(SDODGEBALL_A_MAOU_D) },
};

const sDescTreeNode SDODGEBALL_A_NERDBOY_COLLECTION[] =
{
    { L"Kamekichi", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_KAMEKICHI, ARRAYSIZE(SDODGEBALL_A_PALETTES_KAMEKICHI) },
    { L"Makoto", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_MAKOTO, ARRAYSIZE(SDODGEBALL_A_PALETTES_MAKOTO) },
    { L"Kaede", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_KAEDE, ARRAYSIZE(SDODGEBALL_A_PALETTES_KAEDE) },
};

const sDescTreeNode SDODGEBALL_A_FATGUY_COLLECTION[] =
{
    { L"Musashi", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_MUSASHI, ARRAYSIZE(SDODGEBALL_A_PALETTES_MUSASHI) },
    { L"Hiromitsu", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_HIROMITSU, ARRAYSIZE(SDODGEBALL_A_PALETTES_HIROMITSU) },
    { L"Gonzou", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_GONZOU, ARRAYSIZE(SDODGEBALL_A_PALETTES_GONZOU) },
};

const sDescTreeNode SDODGEBALL_A_ATHLETICGIRL_COLLECTION[] =
{
    { L"Kozue", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_KOZUE, ARRAYSIZE(SDODGEBALL_A_PALETTES_KOZUE) },
    { L"Keiko", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_KEIKO, ARRAYSIZE(SDODGEBALL_A_PALETTES_KEIKO) },
    { L"Akemi", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_AKEMI, ARRAYSIZE(SDODGEBALL_A_PALETTES_AKEMI) },
};

const sDescTreeNode SDODGEBALL_A_DELINQUENTGUY_COLLECTION[] =
{
    { L"Akira", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_AKIRA, ARRAYSIZE(SDODGEBALL_A_PALETTES_AKIRA) },
    { L"Jyoji", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_JYOJI, ARRAYSIZE(SDODGEBALL_A_PALETTES_JYOJI) },
    { L"Takuya", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_TAKUYA, ARRAYSIZE(SDODGEBALL_A_PALETTES_TAKUYA) },
};

const sDescTreeNode SDODGEBALL_A_RUGBYGUY_COLLECTION[] =
{
    { L"Ushimaru", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_USHIMARU, ARRAYSIZE(SDODGEBALL_A_PALETTES_USHIMARU) },
    { L"Kiyoshi", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_KIYOSHI, ARRAYSIZE(SDODGEBALL_A_PALETTES_KIYOSHI) },
    { L"Boo", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_BOO, ARRAYSIZE(SDODGEBALL_A_PALETTES_BOO) },
    { L"Daa", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_PALETTES_DAA, ARRAYSIZE(SDODGEBALL_A_PALETTES_DAA) },
};

const sDescTreeNode SDODGEBALL_A_STAGES_COLLECTION[] =
{
    { L"Kunio's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_KUNIO, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_KUNIO) },
    { L"Shinji's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_SHINJI, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_SHINJI) },
    { L"Misuzu's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_MISUZU, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_MISUZU) },
    { L"Riki's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_RIKU, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_RIKU) },
    { L"Miyuki's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_MIYUKI, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_MIYUKI) },
    { L"Kenji's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_KENJI, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_KENJI) },
    { L"Sabu's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_SABU, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_SABU) },
    { L"D.B.Maou's Stage", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGE_PALETTES_MAOU, ARRAYSIZE(SDODGEBALL_A_STAGE_PALETTES_MAOU) },
};

const sDescTreeNode SDODGEBALL_A_BONUS_COLLECTION[] =
{
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_BONUS_IngameExtras, ARRAYSIZE(SDODGEBALL_A_BONUS_IngameExtras) },
    { L"Shared Effects", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_BONUS_Shared, ARRAYSIZE(SDODGEBALL_A_BONUS_Shared) },
    { L"Volleyball", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_BONUS_VolleyBall, ARRAYSIZE(SDODGEBALL_A_BONUS_VolleyBall) },
};

const sDescTreeNode SDODGEBALL_A_UNITS[] =
{
    { L"Kunio", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KUNIO_COLLECTION, ARRAYSIZE(SDODGEBALL_A_KUNIO_COLLECTION) },
    { L"Riki", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_RIKI_COLLECTION, ARRAYSIZE(SDODGEBALL_A_RIKI_COLLECTION) },
    { L"Shinji", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SHINJI_COLLECTION, ARRAYSIZE(SDODGEBALL_A_SHINJI_COLLECTION) },
    { L"Misuzu", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MISUZU_COLLECTION, ARRAYSIZE(SDODGEBALL_A_MISUZU_COLLECTION) },
    { L"Kenji", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_KENJI_COLLECTION, ARRAYSIZE(SDODGEBALL_A_KENJI_COLLECTION) },
    { L"Miyuki", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MIYUKI_COLLECTION, ARRAYSIZE(SDODGEBALL_A_MIYUKI_COLLECTION) },
    { L"Sabu", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_SABU_COLLECTION, ARRAYSIZE(SDODGEBALL_A_SABU_COLLECTION) },
    { L"Maou", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_MAOU_COLLECTION, ARRAYSIZE(SDODGEBALL_A_MAOU_COLLECTION) },
    { L"Nerd Boy", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_NERDBOY_COLLECTION, ARRAYSIZE(SDODGEBALL_A_NERDBOY_COLLECTION) },
    { L"Fat Guy", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_FATGUY_COLLECTION, ARRAYSIZE(SDODGEBALL_A_FATGUY_COLLECTION) },
    { L"Athletic Girl", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_ATHLETICGIRL_COLLECTION, ARRAYSIZE(SDODGEBALL_A_ATHLETICGIRL_COLLECTION) },
    { L"Delinquent Guy", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_DELINQUENTGUY_COLLECTION, ARRAYSIZE(SDODGEBALL_A_DELINQUENTGUY_COLLECTION) },
    { L"Rugby Guy", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_RUGBYGUY_COLLECTION, ARRAYSIZE(SDODGEBALL_A_RUGBYGUY_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_STAGES_COLLECTION, ARRAYSIZE(SDODGEBALL_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SDODGEBALL_A_BONUS_COLLECTION, ARRAYSIZE(SDODGEBALL_A_BONUS_COLLECTION) },
};

constexpr auto SDODGEBALL_A_NUMUNIT = ARRAYSIZE(SDODGEBALL_A_UNITS);
#define SDODGEBALL_A_EXTRALOC SDODGEBALL_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SDODGEBALL_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
